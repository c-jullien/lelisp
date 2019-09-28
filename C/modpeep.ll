; .EnTete "Le_Lisp Version 15.2" " " "Peephole Optimiseur de GELL"
; .EnPied "modpeep.ll" "%" "modpeep.ll"
; .sp 2
; .SuperTitre "Peephole Optimiseur de GELL"

(unless (>= (version) 15.2)
        (error 'load 'erricf 'modpeep ))

(defvar #:sys-package:colon 'modtoc)

#|

                      <<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>
                      <<<< A REECRIRE COMPLETEMENT >>>>
                      <<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>

Ce peephole optimiseur travaille sur une liste LAP normale et retourne
une nouvelle liste LAP normale. Il permet :

- d'e'liminer un certain nombre d'appels a` des sous-programmes de
  type CALL et JCALL qui sont tre`s couteux en GELL.
- de'liminer la fabrication de tre`s petites routines de type POPJ2
  qui sont syste'matiquement engendre'es.
- de compiler en ligne les appels a` DEFEXTERN

Les optimisations :
-------------------

1) e'limination des appels a` des petits sous programmes spe'ciaux
e'crits actuellement en LLM3, en ajoutant de nouvelles instructions au
traducteur LAP. Cela fait perdre de la place mais gagne du temps.

	(JCALL CONS)		=>  (XCONS a2 a1)
	(JCALL NCONS)		=>  (NCONS a1)
	(JCALL XCONS)		=>  (CONS a2 a1)
	(JMP CONS)		=>  (XCONS a2 a1) (RETURN)
	(JMP NCONS)		=>  (NCONS a1) (RETURN)
	(JCALL #:LLCP:NLIST)	=>  (NLIST)

2) e'limination des appels a` des petits sous programmes standard
e'crits actuellement en LLM3, en ajoutant de nouvelles instructions au
traducteur LAP. Cela fait perdre de la place mais gagne du temps.
Cela concerne e'galement les appels aux fonctions de comparaisons (eq,
neq, lt ...) qui parfois ne sont pas utilise's en position pre'dicats.
Ces fonctions sont dans la liste: ":list-of-rt-functions" et doivent
e^tre des fonctions terminales (pas d'appel d'autres fonctions et pas
d'appel au GC).

	(JCALL <foo>)	=> (CALL<foo>)
	(JMP   <foo>)	=> (CALL<foo>) (RETURN)

3) si un appel de type CALL ou JCALL est suivi d'une e'tiquette, il
n'est pas ne'cessaire d'engendrer une e'tiquette bidon pour le retour
du sous-programme :

       (CALL x)       =>  (PUSH (@ et))
     etiq                 (BRA x)
                       etiq

       (JCALL x)      =>  (PUSH (@ et))
     etiq                 (JMP x)
                       etiq

4) un appel de sous-programme suivi d'un branchement peut se
simplifier.

       (CALL x)      =>   (PUSH (@ y))
       (BRA  y)           (BRA x)
avec toutes les combinaisons possibles de CALL/JCALL, BRA/JMP.

5) les fonctions C suivantes sont pre'de'finies :

     etiq            =>  POPJn
      (ADJSTK 'n)
      (RETURN)

     etiq            =>  POPJA4
      (POP A4)
      (ADJSTK A4)
      (RETURN)

6) tension des e'tiquettes : les doubles e'tiquettes sont enleve'es
   et les branchements sur des branchements (a` 1 niveau).

     etiq1           =>  etiq1 (et etiq1==etiq2)
     etiq2

     etiq1          =>   [(bra etiq2)] (et etiq1==etiq2)
      (bra etiq2)


7) mise en ligne des appels externes (en fonction du protocole de CALLEXTERN)
   Cela permet de ne plus passer par l'interpre`te du CALLG.


8) en cas de FENTRY, rajoute un ENTRY (a` la complice) s'il n'y en a pas.





La fonction #:MODTOC:PEEPHOLE-OPTIMIZE retourne la nouvelle liste des
instructions LAP a` traduire en C. Attention, les modifications sont
faites en place physiquement.

La mise au point d'un tel optimiseur est parfois pe'nible. Si
l'indicateur #:MODTOC:PEEPHOLE-DEBUG est vrai, la fonction
d'optimisation e'crit dans le fichier "peepbefore" les listes
d'instructions avant l'optimisation et dans le fichier "peepafter" le
fichier apre`s optimisation. Un "diff" de type : % diff -c2 peepafter
peepbefore permet donc de voir ce qui s'est passe' sur de vrais
exemples.  Attention : quand cette trace est mise, elle ne de'truit
jamais les fichiers peep* ... qui sont e'crits en mode "ajout".
Il ne pas oublier de les de'truire ....

|#

(defvar :peephole-debug ())

(defvar :loop  11999)

(defvar :list-of-rt-functions '(
	(eq		. calleq)
	(neq		. callneq)
	(eqn  		. calleqn)
	(neqn		. callneqn)
	(fixp           . callfixp)
	(vectorp        . callvectorp)
	(stringp        . callstringp)
	(consp          . callconsp)
	(lt		. calllt)
	(le		. callle)
	(gt		. callgt)
	(ge		. callge)
	(memq		. callmemq)
	(assq		. callassq)
	(cassq		. callcassq)
	(rassq		. callrassq)
	(length		. calllength)
	(nreverse	. callnreverse)
	(error          . callerror)
))
	
(defun :peephole-optimize (linst)
   ; la premie`re trace.
   (when :peephole-debug
         (with ((outchan (opena "peepbefore")))
               (mapc 'print linst)
               (close (outchan))))
   ; on enle`ve toutes les pseudos-instuctions (EVAL ()).
   (:remove-eval linst)
   ; mise en ligne des appels a` CALLEXTERN
   (when (member '(JMP CALLEXTERN) linst)
         (:inline-callextern linst))
   ; les optimisations sur les CALL proprement dites.
   (:optimize-call linst)
   ; tension des e'tiquettes et des sous-programmes
   (let ((alist))
        (setq alist (:find-alist linst))
        (when alist
              (:change-lab linst alist)))
   ; la dernie`re trace.
   (when :peephole-debug
         (with ((outchan (opena "peepafter")))
               (mapc 'print linst)
               (close (outchan))))
   linst)


(defun :remove-eval (linst)
    ; enle`ve toutes les pseudos-instructions (EVAL ())
   (while (consp linst)
          (if (and (consp (car linst))
                   (eq (car (car linst)) 'EVAL)
                   (null (cadr (car linst))))
              (rplac linst (cadr linst) (cddr linst))
              (setq linst (cdr linst)))))



(defun :optimize-call (linst)
   ; realise toutes les optimisations.
   (let (inst
	 next
         operand)
        (while  (consp linst)
                (setq inst (car linst))
                (setq next (cadr linst))
                (if (consp inst)
                    (cond ((eq (car inst) 'JCALL)
                           (setq operand (cadr inst))
			   ;; attention l'ordre est important.
                           (cond ((eq operand 'CONS)
                                  (rplac inst 'XCONS '(a2 a1)))
				 ((eq operand 'XCONS)
                                  (rplac inst 'CONS '(a2 a1)))
				 ((eq operand 'NCONS)
                                  (rplac inst 'NCONS '(a1)))
				 ((eq operand '#:LLCP:NLIST)
                                  (rplac inst 'NLIST ()))
				 ((assq operand :list-of-rt-functions)
				  (rplac inst
					 (cassq operand :list-of-rt-functions)
					 ()))
                                 ((and next (atomp next))
                                  ; (JCALL x) et => (PUSH (@ et)) (JMP x)
                                  (rplac inst 'PUSH `((@ ,next)))
                                  (rplacd linst
                                          (cons `(JMP ,operand) (cdr linst))))
                                 ((and next (consp next) (eq (car next) 'BRA))
                                  ; (JCALL x) (BRA et) => (PUSH (@ et)) (JMP x)
                                  (rplac inst 'PUSH `((@ ,(cadr next))))
                                  (rplac next 'JMP `(,operand)))
                                 ((and next (consp next) (eq (car next) 'JMP))
                                  ; (JCALL x) (JMP y) => 
                                  ; (PUSH (FVALQ y)) (JMP x)
                                  (rplac inst 'PUSH `((FVALQ ,(cadr next))))
                                  (rplac next 'JMP `(,operand)))
                                 (t ())))
                          ((eq (car inst) 'JMP)
			   ;; me^me ordre que pour les JCALL
                           (setq operand (cadr inst))
                           (cond ((eq operand 'CONS)
                                  ; (JMP CONS) => (XCONS A2 A1) (RETURN)
                                  (rplac inst 'XCONS '(A2 A1))
                                  (rplacd linst
                                          (cons '(RETURN) (cdr linst))))
				 ((eq operand 'NCONS)
                                  ; (JMP NCONS) => (NCONS A1) (RETURN)
                                  (rplac inst operand '(A1))
                                  (rplacd linst
                                          (cons '(RETURN) (cdr linst))))
				 ((assq operand :list-of-rt-functions)
				  (rplac inst
					 (cassq operand :list-of-rt-functions)
					 ())
				  (rplacd linst
					  (cons '(RETURN) (cdr linst))))
				 (t ())))
                          ((eq (car inst) 'CALL)
                           (setq operand (cadr inst))
                           (cond ((and next (atomp next))
                                  ; (CALL x) et => (PUSH (@ et)) (BRA x)
                                  (rplac inst 'PUSH `((@ ,next)))
                                  (rplacd linst
                                          (cons `(BRA ,operand) (cdr linst))))
                                 ((and next (consp next) (eq (car next) 'BRA))
                                  ; (CALL x) (BRA et) => (PUSH (@ et)) (BRA x)
                                  (rplac inst 'PUSH `((@ ,(cadr next))))
                                  (rplac next 'BRA `(,operand)))
                                 ((and next (consp next) (eq (car next) 'JMP))
                                  ; (CALL x) (JMP y) =>
                                  ; (PUSH (FVALQ y)) (BRA x)
                                  (rplac inst 'PUSH `((FVALQ ,(cadr next))))
                                  (rplac next 'BRA `(,operand)))
                                 (t ())))
			  ((eq (car inst) 'FENTRY)
			   (if (and (consp next) (eq (car next) 'ENTRY))
			       ()
			       (rplacd linst
				       (cons (cons 'ENTRY (cdr inst))
					     (cdr linst)))))

                          (t ()))
                    ())
                (setq linst (cdr linst)))))



(defun :sequence-break-p (inst)
   ; teste si l'instruction "inst" est une rupture de se'quence
   (if (and (consp inst)
	    (memq (car inst)
		  '(RETURN BRA JMP BRI BRX)))
       inst
       ()))

(defun :find-alist (linst)
   ; retourne la liste des correspondances entre des e'tiquettes
   ; de la liste d'instructions "linst" et des points d'entre'e
   ; pre'de'finis (POPJn...) ou doubles.
   (let ((alist ())    ; la A-liste des e'tiquettes
         (prev ())     ; l'instruction pre'ce'dente
         (next ()))    ; l'instruction suivante
     (while (consp linst)
            (if (consp (car linst))
                ; l'instruction courante est normale
                (setq prev (nextl linst))
                ; l'instruction courante est une e'tiquette
                (setq next (cadr linst))
                 (if (consp next)
                    (selectq (car next)

                       (BRA  (newl alist (cons (car linst) (cadr next)))
                             (if (:sequence-break-p prev)
                                 ; enle`ve le BRA
                                 (rplac linst
                                        (caddr linst)
                                        (cdddr linst))
                                 ; laisse le BRA
                                 (rplac linst
                                        (cadr linst)
                                        (cddr linst))))

                       (POP  (if (and (eq (cadr next) 'A4)
                                      (equal (caddr linst) '(ADJSTK A4))
                                      (equal (cadddr linst) '(RETURN)))
				 ; un POPJA4
                                 (progn
                                   (newl alist (cons (car linst) 'POPJA4))
                                   (if (:sequence-break-p prev)
				       ; enle`ve la se'quence
                                       (rplac linst
                                              (car (cddddr linst))
                                              (cdr (cddddr linst)))
				       ; sinon passe a` l'instruction suivante
                                       (setq prev (nextl linst))))
                                 (setq prev (nextl linst))))

                       (RETURN (newl alist (cons (car linst) 'POPJ0))
                               (if (:sequence-break-p prev)
				   ; enle`ve carre'ment le RETURN
                                   (rplac linst
                                          (caddr linst)
                                          (cdddr linst))
				   ; le laisse
                                   (setq prev (nextl linst))))

                       (ADJSTK (if (and (consp (caddr linst))
                                        (equal (caddr linst)
                                               '(RETURN))
                                        (consp (cadr next))
                                        (eq (caadr next) 'QUOTE)
                                        (fixp (cadr (cadr next)))
                                        (gt (cadr (cadr next)) 0)
                                        (le (cadr (cadr next)) 9))
				   ; un des POPJn
                                   (progn
                                     (newl alist
                                           (cons (car linst)
                                                 (concat 'POPJ
                                                         (cadr (cadr next)))))
                                     (if (:sequence-break-p prev)
                                         (rplac linst
                                                (cadddr linst)
                                                (cddddr linst))
                                         (setq prev (nextl linst))))
                                 (setq prev (nextl linst))))

                       (t  (setq prev (nextl linst))))

                  (if (or (null (car linst)) (null next))
                      (setq prev (nextl linst))
                      ; 2 vraies e'tiquettes
                      (newl alist (cons (car linst) next))
                      (rplac linst (cadr linst) (cddr linst))))))

     ;
     ; tension de la table :
     ;
     (let ((al alist)
	   et2)
          (while (consp al)
                 (if (setq et2 (cassq (cdar al) alist))
                     (rplacd (car al)
                             (if (neq et2 (caar al))
                                 ; test des boucles re: go re
                                 et2
                                 :loop))
                     (setq al (cdr al)))))
     
           ;(when alist (with ((outchan ())) (print "ALIST = " alist)))

     alist))


(defun :change-lab (linst alist)
   ; change le nom de toutes les e'tiquettes posse'dant des
   ; synonymes dans la liste LAP.
   (while linst
     (when (consp (car linst))
           (map (lambda (x) 
                  (cond ((atomp (car x))
			 ; e'tiquette simple
			 (when (assq (car x) alist)
			       (rplaca x (cassq (car x) alist))))
			((eq (caar x) '@)
			 ; adresse d'e'tiquette
			 (:change-address (car x) alist))
			((and (consp (caar x))
			      (eq (caaar x) '@))
			 ; une liste d'e'tiquette (BRX)
			 (mapc ':change-address (car x) (cirlist alist)))
			(t ())))
                (cdar linst)))
     (nextl linst)))

(defun :change-address (adr alist)
  ; change une (@ oldadr) en (@ newadr)
  (when (assq (cadr adr) alist)
	(rplaca (cdr adr)
		(cassq (cadr adr)
		       alist))))


; .Section "La mise IN-LINE des appels a` CALLEXTERN"

#|

Essaie de compiler "inline" un appel a` DEFEXTERN. L'ensemble
du code est mis en-ligne si c'est poossible (i.e. si c'est
un appel canonique). 

|#


#| 

Cette premie`re fonction est appele's si la liste d'instruction LAP
contient au moins 1 appel a` CALLEXTERN

|#

(defun :inline-callextern (linst)
  ; travaille en sens inverse
  (setq linst (nreverse linst))
  (let ((revl linst))
    ; il peut en avoir plusieurs
    (while (setq revl (member '(jmp callextern) revl))
           (tag bad-formed (:inline-callextern-work revl))
	   (setq revl (cdr revl))))
  ; rend la liste dans le bon ordre.
  (setq linst (nreverse linst)))


(defun :bad-formed (msg inst)
    ; en cas de non reconnaissance de la forme canonique,
    ; la liste des instructions n'est pas modifie'e et un
    ; message d'erreur est imprime'
    (:print-error "modpeep: INLINE CALLEXTERN: " msg " : " inst)
    (exit bad-formed ()))

; .SSection "Utilitaires de reconnaissance d'instructions LLM3"

(defun :get-push-fix (inst)
    ; retourne la valeur x d'un (PUSH 'x)
    (if (and (consp inst)
	     (eq (car inst) 'push)
	     (consp (cadr inst))
	     (eq (car (cadr inst)) 'quote)
	     (fixp (cadr (cadr inst))))
	(cadr (cadr inst))
        (:bad-formed "bad push fix" inst)))


(defun :get-push-amper-or-reg (inst rc)
    (if (and (consp inst)
	     (eq (car inst) 'push))
	(cond ((and (consp (cadr inst))
		    (eq (car (cadr inst)) '&)
		    (fixp (cadr (cadr inst))))
	       (list '& (sub (cadr (cadr inst)) rc)))
	      ((memq (cadr inst) '(a1 a2 a3))
	       (cadr inst))
	      (t (:bad-formed "bad push ampersand or reg" inst)))
        (:bad-formed "bad push ampersand or reg" inst)))

(defun :get-move-amper-a1 (inst rc)
    (if (and (consp inst)
	     (eq (car inst) 'mov)
	     (consp (cadr inst))
	     (eq (car (cadr inst)) '&)
	     (fixp (cadr (cadr inst)))
	     (eq (caddr inst) 'a1))
	(list '& (sub (cadr (cadr inst)) rc))
        (:bad-formed "bad move ampersand a1" inst)))


(defun :inline-callextern-work (linst)
    (let ((startlinst linst)    ; la liste initiale
	  (count 0)             ; le nb d'objets empile's
	  rc
	  (args ())             ; la liste des types et des emplacements
	  (retype ())           ; le type de retour
	  (name ())             ; le nom de la fonction
	  inst)                 ; l'instruction courante
      ; saute le (JMP CALLEXTERN)
      (nextl linst)
      ; re'cupe`re le nb d'objets empile's
      (setq inst (nextl linst))
      (if (and  (consp inst)
		(eq (car inst) 'mov)
		(eq (caddr inst) 'a4)
		(consp (cadr inst))
		(eq (car (cadr inst)) 'quote)
		(fixp (cadr (cadr inst))))
	  (setq count (cadr (cadr inst))
		rc  count)
	  (:bad-formed "count" inst))
      ; re'cupe`re les types et les emplacements des arguments
      (repeat (div (sub count 2) 2)
	      (newl args (:get-push-fix (nextl linst)))
	      (if (memq (car args) '(0 1 2 3 4 5 6 7 8))
		  ;; tous les types
		  ()
		  ;; modtoc ne sait pas encore les compiler ....
		  (:bad-formed " type arg not yet implemented" inst))
	      (setq rc (sub1 rc))
	      (if (and (equal (car linst) '(push a1))
		       (equal (cadr linst) '(jcall vag)))
		  (if (and (consp (caddr linst))
			   (eq (car (caddr linst)) 'mov)
			   (eq (caddr (caddr linst)) 'a1))
		      (progn
			; on pre'charge A1 avant d'appeler VAG
			(if (memq (cadr (caddr linst)) '(a2 a3))
			    ; c'est un (mov a2/3 a1)
			    (newl args (list 'vag (cadr (caddr linst))))
			    (newl args (list 'vag (:get-move-amper-a1 (caddr linst) rc))))
			(setq linst (cdddr linst)))
		      (progn (newl args (list 'vag 'a1))
			     (setq linst (cddr linst))))
		  (newl args (:get-push-amper-or-reg (nextl linst) rc)))
	      (setq rc (sub1 rc)))
      ; re'cupe`re le type de retour
      (setq retype (:get-push-fix (nextl linst)))
      (if (memq retype '(0 1 2 3))
	  ; modtoc ne sait pas encore les compiler ....
	  ()
	  (:bad-formed " retype arg not yet implemented" inst))
      ; re'cupe`re le nom de la fonction
      (setq inst (nextl linst))
      (if (and (consp inst)
	       (eq (car inst) 'push)
	       (consp (cadr inst))
	       (eq (car (cadr inst)) 'eval)
	       (consp (cadr (cadr inst)))
	       (eq (car (cadr (cadr inst))) 'kwote)
	       (consp (cadr (cadr (cadr inst))))
	       (eq (car (cadr (cadr (cadr inst)))) '#:system:cached-getglobal))
	  (setq name (cadr (cadr (cadr (cadr (cadr inst))))))
	  (:bad-formed "name" inst))
      ; saute le dernier (PUSH @101)
      (setq inst (nextl linst))
      (if (and (consp inst)
	       (eq (car inst) 'push)
	       (consp (cadr inst))
	       (eq (car (cadr inst)) '@))
	  ()
	  (:bad-formed "last push @" inst))
      ; fabrique la nouvelle instruction LLM3      
      (setq inst `(ICALLG ,count ,name ,(cons retype args)))
      ; histoire de comprendre ce qui va se passer
      (:print-msg "modpeep: ICALLG: name= " name 
		  " typeret= " retype
		  " args= " args)
      ; et enfin remplace physiquement la liste d'instructions
      (rplac startlinst inst linst)))))))

		   
			       


   
    
