; .EnTete "Le_Lisp Version 15.2" " " "Optimiseur du Traducteur de Modules en C"
; .EnPied "modopt.ll" "%" "modopt.ll"
; .sp 2
; .SuperTitre "Optimiseur du Traducteur de Modules en C"

(unless (>= (version) 15.2)
        (error 'load 'erricf 'modopt ))

(defvar #:sys-package:colon 'modopt)

; La fonction #:MODTOC:FIND-LOCAL-LABELS retourne la liste des
; e'tiquettes qui ne sont pas des points d'entre'e de fonctions C.



(defvar :labels ())
(defvar :C-functions ())

(defun is-a-C-function (lab)
   (unless (memq lab :C-functions)
	   (newl :C-functions lab)))

(defun break-function ()
   (when (neq (car :labels) '*)
	 (newl :labels '*)))

(defun goto-label (lab)
   ; re'fe'rence a` une e'tiquette.
   (when lab
	 ; car certaines e'tiquettes ne sont pas
	 ; re'ellement fournies (cf PLUS ...)
	 (newl :labels (ncons lab)) ))

(defun #:modtoc:find-local-labels (linst)
   (setq :labels (ncons ()))
   (setq :C-functions ())
   (mapc ':find-local linst)
   (setq :labels (:rev-and-rem :labels))
   (doit (car :labels) (cons () (cdr :labels)) :C-functions))

(defun :find-local (inst)
  (if (consp inst)
      (selectq (car inst)
               (LISTEXT
                 (mapc 'is-a-C-function (cadr inst)))
	       ((FENTRY LENTRY ENTRY CALL JCALL)
		(break-function)
		(is-a-C-function (cadr inst)))
	       (JMP
		(is-a-C-function (cadr inst)))		
	       ((BRA)
		(goto-label (cadr inst)))
	       ((SOBGEZ SOBGTZ BTLISP BFLISP BTINVSBL BFINVSBL BTMARK BFMARK TCMARK
                        INCR DECR NEGATE
			NXCONS NXNUMB NXFLOAT NXVECT NXSYMB NXSTRG
                        BTCONS BFCONS BTNIL BFNIL BTSYMB BFSYMB BTVAR BFVAR
			BTFIX BFFIX BTFLOAT BFFLOAT BTVECT BFVECT
			BTSTRG BFSTRG)
		(goto-label (caddr inst)))
	       ((CABEQ CABNE CNBEQ CNBNE CNBLE CNBLT CNBGE CNBGT
		       CFBEQ CFBNE CFBLE CFBLT CFBGE CFBGT
		       PLUS DIFF TIMES QUO REM CHBLT CVATOF)
		(goto-label (cadddr inst)))
               ((HBTEQ)
                (goto-label (nth 6 inst)))
	       (BRX
		(mapc ':find-ats (cadr inst)))
	       (t (mapc ':find-ats (cdr inst))))
      (newl :labels inst)))

(defun :rev-and-rem (l)
   (if (consp l)
       (:rev-and-rem-aux l ())
       l))

(defun :rev-and-rem-aux (l r)
   (when (memq (car l) :C-functions)
	 (setq r (cons '* r)))
   (if (null (cdr l))
       (rplacd l r)
       (:rev-and-rem-aux (cdr l) (rplacd l r))))

	 
(defun :find-ats (op)
   (when (and (consp op) (eq (car op) '|@|))
	 (is-a-C-function (cadr op))))


;;.Section "Sorties spe'cifiques de l'optimisateur"

; <labelist> est une liste de la forme qui contient :
;      <symb>    a` la de'finition de l'e'tiquette <symb>
;      (<symb>)  pour une reference a` cette e'tiquette
;      *         en cas de CALL (mur)
; <cfunctlist> est une liste qui contient le nom des e'tiquettes
;      qui sont su^res d'e^tre des fonctions C :
;          - les XDEFP, XREFP
;          - les FENTRY, les ADR
;          - les adresses JCALLe'es ou CALLe'es


(defvar :doit-debug ())

(defun doit (module-name labelist cfunctlist)
   (when :doit-debug
	 (print "********** " module-name)
	 (lmargin 6)
	 (print "  << labelist >> ") (mapc 'print labelist)
	 (lmargin 0) (terpri) (lmargin 6)
	 (print "  << cfunctlist >> ") (mapc 'print cfunctlist) 
	 (lmargin 0) (terpri))
   (hack labelist cfunctlist))



(defmacro zip (before after)
    `(setq ,after (prog1 (cdr ,after)
		         (setq ,before (rplacd ,after ,before)))))


(defun hack (labelist cfunctlist)
    ; prend une <labelist> comple`te et une <cfunclist>
    ; et retourne la "vraie"  liste des e'tiquettes locales.
    (let ((localabel ())
          ; pour travailler rapidement avant et apre`s l'e'tiquette courante,
          ; on ge`re 2 ptr sur les listes : before et after 
	  (lbefore (ncons (car labelist)))
	  (lafter (cdr labelist)))
         (while (consp lafter)
	        (unless (or (consp (car lafter))            ; c'est une ref
			    (eq (car lafter) '*)            ; c'est un mur
			    (memq (car lafter) cfunctlist)) ; jamais local
			; contro^le si l'e'tiquette est utilise'e
			; au dela` des murs : si oui c'est rate',
			(let ((reflabel (ncons (car lafter))))
			     (unless (or (member reflabel (memq '* lbefore))
					 (member reflabel (memq '* lafter)))
				; si a` l'inte'rieur des murs, c'est un
				; candidat a` la recherche locale.
				(newl localabel
				      (rechloc (car lafter) lbefore lafter)))))
		(zip lbefore lafter))
	 (when :doit-debug
	       (lmargin 6)
	       (print "== localabel apre`s rechloc")
	       (mapc 'print localabel)
	       (lmargin 0)
	       (terpri))
	 (setq localabel (rechdep localabel))
	 (when :doit-debug
	       (lmargin 6)
	       (print "== localabel apre`s recdep")
	       (mapc 'print localabel)
	       (lmargin 0)
	       (terpri))
	 localabel))


(defun rechloc (lab lbefore lafter)
    ; Il n'y a pas de re'fe'rence en dehors des murs locaux :
    ; recherche les de'pendances entre les 2 murs.
    ; Retourne pour chaque candidat a` la localite'
    ; une liste de la forme (candidat ref1 ref2 ...)
    ; Les refI e'tant d'autres candidats a` la localite'
    ;    s'ils sont tous locaux (cf la fonction "rechdep"),
    ;    <candidat> le sera aussi!
    (let ((reflab (ncons lab))
	  (dependances ())
	  (ldep ()))
         (while (and lbefore (neq (car lbefore) '*))
		(cond ((nlistp (car lbefore))
		       (newl ldep (car lbefore)))
		      ((equal reflab (car lbefore))
		       (setq dependances (append dependances ldep))
		       (setq ldep ()))
		      (t ()))
		(nextl lbefore))
	 (when :doit-debug (print "ldep lbefore for " lab ": " dependances))
	 (setq ldep ())
         (while (and lafter (neq (car lafter) '*))
		(cond ((nlistp (car lafter))
		       (newl ldep (car lafter)))
		      ((equal reflab (car lafter))
		       (setq dependances (append dependances ldep))
		       (setq ldep ()))
		      (t ()))
		(nextl lafter))
	 (when :doit-debug (print "ldep lafter for " lab ": " dependances))
	 (cons lab dependances)))


(defun rechdep (localabel)
    ; recherche des de'pendances locales
    ; <localabel> est une liste ((<candidat1> . <ref1N>) .. (<candidatN ..))
    ; pas tre`s fier de c,a ... les n passes peuvent couter
    ; un peu cher!

    (let ((new (mapcan (lambda (dep)
			 (if (every (lambda (ldep) (assq ldep localabel))
				    (cdr dep))
			     (ncons dep)
			     ()))
		       localabel)))
        (if (= (length localabel) (length new))
	    (mapcar 'car new)
	    (rechdep new))))




