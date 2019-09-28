
;;.EnTete "Le_Lisp V15" "CPENV.LL" "Deuxie`me passe du compilateur"
;;.sp 4
;;.SuperTitre "Le Compilateur Le_Lisp"
;;.Titre "L'environnement de la deuxie`me passe"
;;.Auteur "Bernard Serpette"

;;.Section "CPENV.LL"
;;.SSection "Contenu"

;;.SSection "Les variables globales"
; Le package du compilateur.
(defvar #:sys-package:colon 'complice)

; Le compteur ge'ne'rateur d'e'tiquette.
(defvar :genlab 100)

; Le code ge'ne're'.
(defvar :lap ())

; Les registres.
(defvar :a1 ())
(defvar :a2 ())
(defvar :a3 ())
(defvar :a4 ())

; La pile.
(defvar :stack ())
(defvar :v-stack ())

; L'environnement des variables.
(defvar :env ())

; Les ope'randes a` prote'ge's.
(defvar :protect ())

; L'ensemble des ope'randes a` indexation dans la pile.
(defvar :op-stack ())

; L'ensemble des adjust final.
(defvar :l-adjust ())
(defvar :l-readjust ())

; L'indicateur de position terminale.
(defvar :tail? ())

; L'indicateur de retour.
(defvar :return? ())

; La liste des blocs de contro^le.
(defvar :lframe ())

; La liste des variables a' exporter
(defvar :bind ())

; La presence d'un &nobind.
(defvar :&nobind ())

; La pre'sence d'une lambda explicite
(defvar :funarg? ())

;;.SSection "Les initialisations"
;;.SSSection ":INITALL"
(de :initall (f)
   (setq
      :genlab 100
      :lap ()
      :a1 ()
      :a2 ()
      :a3 ()
      :a4 ()
      :stack ()
      :v-stack ()
      :env ()
      :protect ()
      :op-stack ()
      :l-adjust ()
      :l-readjust ()
      :tail? t
      :return? 'a1
      :lframe ()
      :bind (get f ':bind)
      :&nobind ()
      :funarg? ()
 ))

;;.SSection "Fonctions sur les e'tiquettes"
;;.SSSection ":GENLAB"
(dmd :genlab () '(setq :genlab (add1 :genlab)))

;;.SSection "Fonctions d'acce`s au code ge'ne're' (:lap)"
;;.SSSection ":CODE"
(dmd :code (l)
   ; Rajoute l'instruction <l> a` :lap.
   `(newl :lap ,l) )

;;.SSSection ":GET-SPACE-OF-LAP  -  :SET-SPACE-OF-LAP"
(dmd :get-space-of-lap ()
   ;  Rame`ne l'adresse une adresse de :lap pour :set-space-of-lap.
   '(newl :lap ()) )

(dmd :set-space-of-lap (olap ins)
   ; Modifie une instruction de :lap
   `(rplaca ,olap ,ins) )

;;.SSection "Fonctions sur les registres"
;;.SSSection ":REG?  -  :REAL-REG"
(dmd :reg? (r) `(let ((r ,r)) (selectq r (a1 r) (a2 r) (a3 r) (a4 r))))

(de :real-reg (op)
   (cond
      ((:reg? op))
      ((and (consp op) (not (fixp (car op))) (neq (car op) 'quote))
         (cadr op) )
      (t ()) ))

;;.SSSection ":GET-ALL-REG  -  :SET-ALL-REG  -  :ADJUST-REG  -  :ADJUST-SAVED-REG"
(dmd :get-all-reg ()
   ; Rame`ne une liste contenant les valeurs courantes des registres.
   '`(,:a1 ,:a2 ,:a3 ,:a4))

(de :set-all-reg (lr)
   ; Remet les registres selon le contenu de la liste <lr>.
   (setq
      :a1 (nextl lr)
      :a2 (nextl lr)
      :a3 (nextl lr)
      :a4 (nextl lr) ))

(de :adjust-reg (lr)
   ; ajuste les regitres courants en fonction de la liste <lr>.
   (when (neq (nextl lr) :a1) (setq :a1 ()))
   (when (neq (nextl lr) :a2) (setq :a2 ()))
   (when (neq (nextl lr) :a3) (setq :a3 ()))
   (when (neq (nextl lr) :a4) (setq :a4 ())) )

(de :adjust-saved-reg (lr)
   ; ajuste la liste <lr> en fonction des regitres courants.
   (when (neq (car lr) :a1) (rplaca lr ())) (nextl lr)
   (when (neq (car lr) :a2) (rplaca lr ())) (nextl lr)
   (when (neq (car lr) :a3) (rplaca lr ())) (nextl lr)
   (when (neq (car lr) :a4) (rplaca lr ())) )

;;.SSSection ":ALLOC-REG  -  :ALLOC-REG?"
(de :alloc-reg (r1 r2)
   (setq r1 (:real-reg r1) r2 (:real-reg r2))
   (cond
      ((and (not :a4)(neq r1 'a4)(neq r2 'a4)(not (:reg-protect? 'a4))) 'a4)
      ((and (not :a3)(neq r1 'a3)(neq r2 'a3)(not (:reg-protect? 'a3))) 'a3)
      ((and (not :a2)(neq r1 'a2)(neq r2 'a2)(not (:reg-protect? 'a2))) 'a2)
      ((and (not :a1)(neq r1 'a1)(neq r2 'a1)(not (:reg-protect? 'a1))) 'a1)
      ((and (neq r1 'a4) (neq r2 'a4)) 'a4)
      ((and (neq r1 'a3) (neq r2 'a3)) 'a3)
      ((and (neq r1 'a2) (neq r2 'a2)) 'a2)
      ((and (neq r1 'a1) (neq r2 'a1)) 'a1)    ; obsole`te.
      (t 'a4) ))

(de :alloc-reg? ()
   (cond ((not :a4) 'a4) ((not :a3) 'a3) ((not :a2) 'a2) ((not :a1) 'a1)) )

;;.SSSection ":IS-IN-REG?  -  :VALUE-IN-REG"
(de :is-in-reg? (val)
   ; Rame`ne le registre, si il exite, contenant la valeur <val>.
   (cond
      ((eq val :a1) 'a1)
      ((eq val :a2) 'a2)
      ((eq val :a3) 'a3)
      ((eq val :a4) 'a4) ))

(de :value-in-reg (r)
   ; Rame`ne le contenu du registre <r>.
   (selectq r (a1 :a1) (a2 :a2) (a3 :a3) (a4 :a4)) )

;;.SSSection ":SET-REG  -  :WRITE-REG  -  CLEAR-VAR-IN-ALL-REG"
(de :set-reg (op r)
   ; Affecte le registre <r> avec l'ope'rande 'brut' <op>.
   (selectq r
      (a1 (setq :a1 op))
      (a2 (setq :a2 op))
      (a3 (setq :a3 op))
      (a4 (setq :a4 op)) ))

(de :write-reg (op r)
   ; Affecte le registre <r> avec l'ope'rande <op>.
   (cond
      ((null op) (:set-reg op r))
      ((:reg? op) (:set-reg (:value-in-reg op) r))
      ((and (consp op) (or (fixp (car op)) (eq (car op) 'cvalq)))
         (:set-reg (cadr op) r) )
      (t (:set-reg ':?? r)) ))

(de :clear-var-in-all-reg (v)
   (when (eq v :a1) (:set-reg () 'a1))
   (when (eq v :a2) (:set-reg () 'a2))
   (when (eq v :a3) (:set-reg () 'a3))
   (when (eq v :a4) (:set-reg () 'a4)) )

;;.SSSection ":CLEAR-ALL-REG"
(de :clear-all-reg ()
   (mapc (lambda (r) (:write-op () r)) '(a1 a2 a3 a4)) )

;;.SSection "Fonctions manipulant la pile."
;;.SSSection ":PUSH-VALUE  -  :POP-VALUE"
(dmd :push-value n
   (if n
      `(rplaca :stack (add (car :stack) ,(car n)))
      '(rplaca :stack (add1 (car :stack))) ))

(dmd :pop-value n
   (if n
      `(rplaca :stack (sub (car :stack) ,(car n)))
      '(rplaca :stack (sub1 (car :stack))) ))

;;.SSSection ":PUSH-VAR"
(de :push-var (v)
   (newl :env (cons v 'sp))
   (newl :v-stack v)
   (newl :stack v) )

;;.SSSection ":BACK-PUSH-VALUE  -  :BACK-PUSH"
(de :back-push-value (l)
   (:back-push-value-aux l :stack :v-stack) )

(de :back-push-value-aux (l l1 l2)
   (until (or (fixp (car l2)) (eq l l2)) (nextl l2))
   (until (fixp (car l1)) (nextl l1))
   (if (eq l l2)
      (rplaca l1 (add1 (car l1)))
      (:back-push-value-aux l (cdr l1) (cdr l2)) ))

(de :back-push (ov-stk)
   (setq :stack (:back-push-aux ov-stk :stack :v-stack))
   (mapc (lambda (m) (:adjust-adjust m ov-stk)) :l-adjust) )

(de :back-push-aux (l l1 l2)
   (cond
      ((null l1) (ncons (car l)))
      ((eq l2 l) (cons (car l) l1))
      ((or (eq (car l1) (car l2)) (fixp (car l2)))
         (cons (car l1) (:back-push-aux l (cdr l1) (cdr l2))) )
      (t (:back-push-aux l l1 (cdr l2))) ))

;;.SSSection ":INDEX-STACK"
(de :index-stack (v)
   ; Rame`ne l'ope'rande <v> si <v> est dans la pile.
   (let ( (n (:memnth v 0 :stack)) )
      (and n (cons n (memq v :v-stack))) ))

;;.SSSection "MEMNTH"
(de :memnth (a n l)
   (cond
      ((null l) l)
      ((eq (car l) a) n)
      ((fixp (car l)) (:memnth a (add (car l) n) (cdr l)))
      (t (:memnth a (add1 n) (cdr l))) ))

;;.SSSection ":ADJUST-IF-NEED  -  :ADJUST-ADJUST  -  :FINAL-ADJUST"
(de :adjust-if-need ()
   (newl :l-adjust
      `(,:v-stack ,(:length-stack :stack) ,@(:get-space-of-lap))) )

(de :adjust-adjust (l stk)
   (when (tailp stk (car l))
      (rplaca (cdr l) (add1 (cadr l))) ))

(de :final-adjust ()
   (mapc
      (lambda (m)
         (when (neq (cadr m) 0)
            (:set-space-of-lap (cddr m) `(adjstk ',(cadr m))) ))
      :l-adjust )
   (mapc (lambda (m) (rplaca m 'quote)) :l-readjust) )

;;.SSSection ":LENGTH-STACK"
(de :length-stack (l)
   (cond
      ((null l) 0)
      ((fixp (car l)) (add (car l) (:length-stack (cdr l))))
      (t (add1 (:length-stack (cdr l)))) ))

;;.SSection "Les divers protections"
;;.SSSection ":PROTECT-OP  -  PROTECTED-OP?"
;;     Prote`ge une ope'rande a` toutes eventuelles e'criture.
;;Si quelqu'un tente d'e'craser une me'moire prote'ge'e il y a sauvegarde
;;sur pile dans le contexte de la protection..
(de :protect-op (op)
   ; Ne protege pas les valeurs immediates
   (unless (and (consp op) (eq (car op) 'quote))
      ; Est-ce bien necessaire?.
      (:read-op op)
      ; On protege.
      (newl :protect
         `(,op ,(:get-space-of-lap) ,:v-stack ,@:op-stack) ))
   op )

(de :protected-op? (op)
   (if (and (consp op) (eq (car op) 'quote))
      op
      ; pour le moment marche sur une technique de pile!?
      (when (nextl :protect) op) ))

;;.SSSection ":UNPROTECT-OP"
(de :unprotect-op (op reg)
   (if (and (consp op) (eq (car op) 'quote))
      op
      ; pour le moment marche sur une technique de pile!?
      (if (nextl :protect)
         ; Elle est toujours la`!
         op
         ; Elle est en pile!
         (:pop reg) )))

;;.SSSection ":ADJUST-OP-STACK"
(de :adjust-op-stack (l e)
   (let ( (sv :op-stack) )
      (until (eq sv e)
         (when (tailp (cdar sv) l) (rplaca (car sv) (add1 (caar sv))))
         (nextl sv) )))

;;.SSSection ":REG-PROTECT?"
(de :reg-protect? (r) (:reg-protect?-aux r (caar :protect) :protect))

(de :reg-protect?-aux (r op l)
   (when l
      (if
         (or
            ; op est le registre.
            (and (not (consp op)) (eq op r))
            (and
               ; pas les registres
               (consp op)
               ; pas les variables locales.
               (not (fixp (car op)))
               ; pas les valeurs imme'diates.
               (neq (car op) 'quote)
               ; le registre fait parti de l'ope'rande.
               (memq r (cdr op)) ))
         ; So! Il est protege'.
         t
         (:reg-protect?-aux r (caadr l) (cdr l)) )))

;;.SSSection ":PUSH-IT-NOW"
(de :push-it-now (op (sp v-stk . l))
   ; Sauve a` retardement <op> sur la pile.
   (:set-space-of-lap sp `(push ,op))
   ; Previent la pile de service.
   (:back-push-value v-stk)
   ; Remet a` jour les indexations dans la pile.
   (:adjust-op-stack v-stk l)
   ; Ne doir pas ramener ().
   t )

;;.SSSection ":CARE-OF-REG"
(de :care-of-reg (r (op . l))
   (when
      (or
         ; op est le registre.
         (and (not (consp op)) (eq op r))
         (and
            ; pas les registres
            (consp op)
            ; pas les variables locales.
            (not (fixp (car op)))
            ; pas les valeurs imme'diates.
            (neq (car op) 'quote)
            ; le registre fait parti de l'ope'rande.
            (memq r (cdr op)) ))
      ; So! Faut prote'ger.
      (:push-it-now op l) ))

;;.SSSection ":CARE-OF-VAR"
(de :care-of-all-var (var)
   (let ( slot op ll )
      (map
         (lambda (l)
            (setq slot (car l))
            (when slot
               (setq op (car slot) ll (cdr slot))
               (when (and (consp op) (fixp (car op)) (eq (cadr op) var))
                     (:push-it-now op ll)
                     (rplaca l ()) )))
         :protect )))

;;.SSSection ":CARE-OF-CVAL"
(de :care-of-all-cval ()
   (let ( slot op ll )
      (map
         (lambda (l)
            (setq slot (car l))
            (when slot
               (setq op (car slot) ll (cdr slot))
               (when (and (consp op) (memq (car op) '(cval cvalq)))
                     (:push-it-now op ll)
                     (rplaca l ()) )))
         :protect )))

(de :care-of-all-cvalq (var)
   (let ( slot op ll )
      (map
         (lambda (l)
            (setq slot (car l))
            (when slot
               (setq op (car slot) ll (cdr slot))
               (when (and (consp op) (eq (car op) 'cvalq) (eq (cadr op) var))
                     (:push-it-now op ll)
                     (rplaca l ()) )))
         :protect )))

;;.SSSection ":CARE-OF-IND"
(defun :care-of-all-ind (ind)
   (let ( slot op ll )
      (map
         (lambda (l)
            (setq slot (car l))
            (when slot
               (setq op (car slot) ll (cdr slot))
               (when (and (consp op) (eq (car op) ind))
                     (:push-it-now op ll)
                     (rplaca l ()) )))
         :protect )))

;;.SSection "Fontions sur les blocs en pile."
;;.SSSection "INDEX-VSTACK"
; (de :index-vstack (v)
;    (cons (:index-vstack-aux v :stack :v-stack) v) )

; (de :index-vstack-aux (ov s v)
;    (cond
;       ((null v) (:ierror "BAD STACK" ov))
;       ((eq v ov) (car s))
;       ((eq (car s) (car v))
;          (if (fixp (car s))
;             (add (car s) (:index-vstack-aux ov (cdr s) (cdr v)))
;             (add1 (:index-vstack-aux ov (cdr s) (cdr v))) ))
;       ((fixp (car s)) (add (car s) (:index-vstack-aux ov (cdr s) (cdr v))))
;       (t (:index-vstack-aux ov (cdr s) v)) ))

;;.SSSection ":PUSH-BLOCK  -  :POP-BLOCK"
; (de :push-block (type name l)
;    (newl :lframe `(,type ,name ,:v-stack ,@l)) )

; (de :pop-block ()
;    (nextl :lframe) )

;;.SSection "Fonctions sur l'environnement"
;;.SSSection ":ADD-ENV"
(de :add-env (v op)
   (:set-reg v op)
   (newl :env (cons v op)) )

;;.SSSection ":SET-ENV  -  :CLOSE-ENV"
(de :set-env (var val)
   (:setcassq var val :env) )

(de :close-env ()
   (newl :v-stack 0)
   (newl :stack 0) )

;;.SSSection ":GET-ENV"
(de :get-env (v)
   (let ( (l (assq v :env)) )
      (cond
         ((or (null l) (eq (cdr l) 'cval)) `(cvalq ,v))
         ((eq (cdr l) 'sp) (:index-stack v))
         (t (setq l (prog1 (cdr l) (rplacd l 'sp)))
            (:set-space-of-lap (nextl l) `(push ,(nextl l)))
            (:back-push (car l))
            (:adjust-op-stack (car l) (cdr l))
            (:index-stack v) ))))

;;.SSSection ":DESET-ENV"
(de :deset-env (oenv main?)
   (let ( (env :env) (bind (nextl :bind)) (hard-env ()) (n 0) )
      ; On passe en revue toutes les variables contenues dans un registre.
      (until (eq env oenv)
         (unless (eq (cdar env) 'sp) (:deset-reg (caar env) (cdar env) bind))
         (nextl env) )
      ; Puis la pile.
      (:deset-env-stk bind oenv)
      ; On ferme les piles.
      (:close-env)
      ; On s'occupe des cas merdiques des variables exporte'es.
      (setq bind ())
      (while (variablep (car :bind)) (newl bind (nextl :bind)))
      (when bind
         (mapc
            (lambda (m)
               (:push `(cvalq ,m))
               (:mov (or (:is-in-reg? m) (:get-env m)) `(cvalq ,m))
               (:set-env m 'cval)
               (setq n (add1 n)) )
            bind )
         (:push `',n)
         (:push `',bind)
         (:push (if main? `(|@| ,:f) ''lambda))
         (:push 'llink)
         (when main? (:mov 'nil 'llink))
         (:push-top-block 'cbindn)
         (:close-env)
         (newl :lframe `(lambda ,:v-stack)) )
      bind ))

(de :deset-env-stk (bind oenv)
   (let ( (penv :env) (env :env) )
      (until (eq env oenv)
         (when (eq (cdar env) 'sp) (:deset-stk (caar env) bind))
         (nextl env) )
      (or (eq :env penv) (:deset-env-stk bind oenv)) ))

(de :deset-reg (v r l)
   (cond
      ((variablep v)
         (:clear-var-in-all-reg v) (:set-reg v r) (newl :v-stack v)
         (:set-env v `(,(:get-space-of-lap) ,r ,:v-stack ,@:op-stack))
         (when (or (memq v l) (:globalvarp v))
            (newl :bind v) ))
      ((null (cdr v))
         (:set-reg (car v) (:mov `(car ,r) r))
         (let ( (m (assq v :env)) ) (rplaca m (car v)))
         (:deset-reg (car v) r l) )
      (t (let ( (reg (:alloc-reg?)) )
            (if reg
               (:add-env (cdr v) (:mov `(cdr ,r) reg))
               (:code `(push (cdr ,r))) (:push-var (cdr v)) )
            (:set-reg (car v) (:mov `(car ,r) r))
            (let ( (m (assq v :env)) ) (rplaca m (car v)))
            (:deset-reg (car v) r l)
            (when reg (:deset-reg (cdr v) reg l)) ))))

(de :deset-stk (v l)
   (ifn (variablep v)
      (let ( (r (:alloc-reg () ())) (op (:read-op (:index-stack v))) )
         (:mov `(car ,(:mov op r)) op)
         (let ( (m (assq v :env)) ) (rplaca m (car v)))
         (rplaca (memq v :v-stack) (car v))
         (rplaca (memq v :stack) (car v))
         (ifn (cdr v)
            (:set-reg () r)
            (:add-env (cdr v) (:mov `(cdr ,r) r))
            (:deset-reg (cdr v) r l) )
         (:deset-stk (car v) l) )
      (:clear-var-in-all-reg v)
      (when (or (memq v l) (:globalvarp v))
         (newl :bind v) )))

;;.SSSection ":RESET-ENV"
(de :reset-env (oenv bind main?)
   (let ( (n 6) )
      (when bind
         ; On defait les cas merdiques des variables exporte'es.
         (:reset-env :env () ())
         (nextl :lframe)
         (:code '(mov (& 1) dlink))
         (when main? (:code '(mov (& 2) llink)))
         (mapc
            (lambda (m) (:mov `(& ,n) `(cvalq ,m)) (setq n (add n 1)))
            (reverse bind) )
         (:adjstk n) )
      (setq n (nextl :stack))
      (unless (eq n 0) (:ierror "STACK NOT EMPTY" n))
      (nextl :v-stack)
      (when (and :&nobind main?)
         (:code '(pop a4))
         (nextl :v-stack) (nextl :stack) (nextl :env))
      (until (eq oenv :env)
         (when (eq (car :stack) (car :v-stack))
            (setq n (add1 n))
            (nextl :stack) )
         (:clear-var-in-all-reg (nextl :v-stack))
         (nextl :env) )
      (if (and main? :&nobind)
         (:code `(adjstk a4))
         (unless (or (eq n 0) (eq :tail? 'done))
            (:code `(adjstk ',n))) )))

;;.SSSection ":COPY-GENSYM  -  :PEIGNE"
(de :copy-gensym (l)
   (cond
      ((null l) l)
      ((not (consp l)) (gensym))
      (t (cons (:copy-gensym (car l)) (:copy-gensym (cdr l)))) ))

(de :peigne (l ll)
   (:peigne-aux (:flatt l) (:flatt ll)) )

(de :peigne-aux (l ll)
   (and l
      (mcons (car l) (car ll) (:peigne-aux (cdr l) (cdr ll))) ))

;;.SSection "Fonctions ge'ne'rales sur les ope'randes."
;;.SSSection ":READ-OP"
(de :read-op (op)
   ; On sauve toutes les indexations dans la pile : (<n> . ?).
   (when (and (consp op) (fixp (car op)) (not (memq op :op-stack)))
      (newl :op-stack op) )
   op )

;;.SSSection ":WRITE-OP"
(de :write-op (op dest)
   (if (consp dest)
      (let ( (pre (car dest)) )
         (cond
            ((fixp pre)
               (unless (memq dest :op-stack) (newl :op-stack dest))
               (:care-of-all-var (cadr dest)) )
            ((eq pre 'quote)
               (:ierror "OPERANDE DESTINATION INCORRECTE" dest) )
            ((eq pre 'cval)
               (:care-of-all-cval) )
            ((eq pre 'cval)
               (:care-of-all-cvalq (cadr dest)) )
            (t (:care-of-all-ind pre)) ))
      (:write-reg op dest)
      (map
         (lambda (l)
            (when (and (car l) (:care-of-reg dest (car l))) (rplaca l ())))
         :protect )))

;;.SSSection ":MAKE-OP"
(de :make-op (ind op)
   (cond
      ; BUG? (car pbind)
      ((not (consp op)) `(,ind ,op))
      ((:reg? :return?) (:mov op :return?) `(,ind ,:return?))
      (t (setq op (:mov op (:alloc-reg () ()))) `(,ind ,op)) ))

;;.SSection "Fonctions sur les positions terminales"
;;.SSSection ":WITH-NO-TAIL"
(dmd :with-no-tail corps
   `(let ( (tail? :tail?) )
      (setq :tail? ())
      ,@corps
      (setq :tail? tail?) ))

;;.SSSection ":WITH-NO-TAIL-AND-RETURN"
(dmd :with-no-tail-and-return (ret . corps)
   `(let ( (tail? :tail?) (return? :return?) )
      (setq :tail? () :return? ,ret)
      ,@corps
      (setq :tail? tail? :return? return?) ))

;;.SSection "Principaux codes operation"
;;.SSSection ":MOV"
(de :mov (op dest)
   (unless (eq op dest)
      (:read-op op) (:write-op op dest)
      (:code `(mov ,op ,dest)) )
   dest )

(defun :adjstk (n)
   (:code `(adjstk ',n))
   (:pop-value n) )

;;.SSSection ":CALL  -  :PUSH  -  :POP"
(de :call (ad)
   (:care-of-all-cval)
   (let ( (cop1 'call) (cop2 'bra) )
      (unless (or (fixp ad) (memq ad :lfnt-module))
         (setq cop1 'jcall cop2 'jmp) )
      (if (and :tail? (null :lframe))
         (progn
            (:adjust-if-need)
            (:code `(,cop2 ,ad))
            (setq :tail? 'done) )
         (:clear-all-reg)
         (:code `(,cop1 ,ad)) )
      'a1 ))

(de :jmp (ad)
   (:care-of-all-cval)
   (let ( (cop1 (if (or (fixp ad) (memq ad :lfnt-module)) 'bra 'jmp)) )
      (:code `(,cop1 ,ad))
      (:clear-all-reg) ))

(de :push (op)
   (:read-op op)
   (:push-value)
   (:code `(push ,op))
   op )

(de :push-top-block (unbind)
   (:push 'dlink)
   (:push unbind)
   (:code '(stack dlink)) )

(de :pop (op)
   (:write-op () op)
   (:pop-value)
   (:code `(pop ,op))
   op )

(de :pop2 (op rop)
   ; rop est une ope'rande qui sera utilise'e apre's le POP.
   (when (and (consp rop) (fixp (car rop)))
      (rplaca rop (sub1 (car rop))) )
   (:pop op) )

(de :pop3 (op rop rop2)
   ; rop est une ope'rande qui sera utilise'e apre's le POP.
   (when (and (consp rop) (fixp (car rop)))
      (rplaca rop (sub1 (car rop))) )
   (when (and (consp rop2) (fixp (car rop2)))
      (rplaca rop2 (sub1 (car rop2))) )
   (:pop op) )

;;.SSSection ":CODE-LAST"
(de :code-last (ins)
   (if (and :tail? (null :lframe))
       (unless (eq :tail? 'done)
          (:adjust-if-need)
          (:code '(return))
          (setq :tail? 'done) )
       (:code ins) ))
