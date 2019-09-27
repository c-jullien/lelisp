
;;.EnTete "Le_Lisp V15" "CP2.LL" "Deuxie`me passe du compilateur"
;;.sp 4
;;.SuperTitre "Le Compilateur Le_Lisp"
;;.Titre "La deuxie`me passe"
;;.Auteur "Bernard Serpette"

;;.Section "CP2.LL"
;;.SSection "Contenu"
;;     Le point d'entre'e est la fonction \fI:pass-two\fR.

;;.SSection "Les variables globales"
; Le package du compilateur
(defvar #:sys-package:colon 'complice)

; Pour savoir si l'on veut le peephole optimiseur!
(defvar :peephole-flag t)

;;.SSection "Deuxie`me passe du compilateur"
;;.SSSection ":PASS-TWO"
(de :pass-two (f lfnt talk?)
   (let ( (:f f) (:lfnt-module lfnt) (:talk? talk?)
          (#:sys-package:itsoft #:sys-package:itsoft) )
      (newl #:sys-package:itsoft '#.#:sys-package:colon)
      (tag #:system:error-tag (:pass-two-aux f))
      :lap ))

(de :pass-two-aux (f)
   (:initall :f)
   (let ( (bind (:make-header :f (get :f ':ftype) (car (valfn :f)))) )
      (when :&nobind (setq :tail? ()))
      (:mov (:progn (cdr (valfn :f))) 'a1)
      (:reset-env () bind t)
      (:code-last '(return))
      ; Resoud les index cree par la fonction arg.
      (:hack-for-arg)
      ; Remet les ope'randes de pile au format LAP.
      (while :op-stack
         (rplacd (car :op-stack) (ncons (caar :op-stack)))
         (rplaca (nextl :op-stack) '&) )
      (:final-adjust)
      (when :peephole-flag
         (setq :lap (:peephole :lap)) )
      (pretty-lap (setq :lap (nreverse :lap)) :talk?) ))

;;.SSSection ":EXP"
(de :exp (l)
   (cond
      ; Ces foutus nil.
      ((memq l '(() nil)) 'nil)
      ; Les constantes.
      ((or (numberp l) (constantp l)) `',l)
      ; Ce qui est de'ja dans un registre.
      ((:is-in-reg? l))
      ; Les symboles.
      ((symbolp l) (if :return? (:get-env l) 'a1))
      ; Les fonctions calcule'es.
      ((consp (car l)) (:app-lambda l))
      ; Les fonctions faciles.
      ((:cpfnt (car l) (cdr l)))
      ; La macro-expansion du compilateur.
      ((neq l (setq :x (:macroexpand l))) (:exp :x))
      ; Les appels de fonctions non reconnues.
      (t (:exp-subr (car l) (cdr l))) ))

;;.SSSection ":EXP-SUBR"
(de :exp-subr (f larg)
   (let ( (type (or (get f ':ftype) (typefn f))) )
      (if (eq type 'nsubr)
         (:nsubr f larg)
         (:with-no-tail-and-return 'a1
            (selectq type
               (subr0)
               (subr1 (:subr1 larg))
               (subr2 (:subr2 larg))
               (subr3 (:subr3 larg))
               (fsubr (:mov `',larg 'a1))
               (t (:exp-subr 'eval `('(,f ,@larg))) (setq f ())) ))
         (ifn f 'a1 (:call f)) )))

;;.SSSection ":SUBR1"
(de :subr1 (larg)
   (:mov (:exp (car larg)) 'a1) )

;;.SSSection ":SUBR2"
(de :subr2 (larg)
   (let ( (op1 (:protect-op (:exp (car larg)))) )
      (setq :return? 'a2)
      (:mov (:exp (cadr larg)) 'a2)
      (:mov (:unprotect-op op1 'a1) 'a1) ))

;;.SSSection ":SUBR3"
(de :subr3 (larg)
   (let ( (op1 (:protect-op (:exp (car larg)))) (op2) )
      (setq :return? 'a2)
      (setq op2 (:protect-op (:exp (cadr larg))))
      (setq :return? 'a3)
      (:mov (:exp (caddr larg)) 'a3)
      (:mov (:unprotect-op op2 'a2) 'a2)
      (:mov (:unprotect-op op1 'a1) 'a1) ))

;;.SSSection ":NSUBR"
(de :nsubr (f larg)
   (ifn (and :tail? (eq f :f) (null :funarg?) (null :lframe)
	     (eq (:nfix :v-stack) 1))
      (let ( (narg 0) (ad (:genlab)) )
         (:push `(|@| ,ad))
         (:with-no-tail-and-return (:alloc-reg () ())
            (while larg
               (:push (:exp (nextl larg)))
               (setq narg (add1 narg)) ))
         (:mov `',narg 'a4)
         (:jmp f)
         (:code ad)
         (:peephole-bug)
         ; Raz des registres.
         (:clear-all-reg)
         ; On de'pile a` la place de la nsubr.
         (:pop-value (add1 narg)) )
      (let ( (lpar (:flatt (car (valfn f)))) )
         (let ( (nlpar (length lpar)) (narg 0) )
            (:with-no-tail-and-return (:alloc-reg () ())
               (while larg
                  (:push (:exp (nextl larg)))
                  (setq narg (add1 narg)) ))
            (:mov `',narg 'a4)
            (:pop-value narg)
            (while lpar
               ; pour le cas lpar <- (a b (c d . e) f) !!!!
               (:get-env (nextl lpar)) )
            (while (neq narg 0)
               (setq narg (sub1 narg))
               (:mov `(& ,narg) `(& ,(add narg nlpar))) )
            (:code `(adjstk ',nlpar))
            (:code `(bra ,f))
            (setq :tail? 'done) )))
   'a1 )

(de :nfix (l)
   (cond
      ((null l) 0)
      ((fixp (car l)) (add1 (:nfix (cdr l))))
      (t (:nfix (cdr l))) ))

;;.SSSection ":PRED"
(de :pred (l ind etiq)
   (cond
      ((or (null l) (eq l 'nil)) (unless ind (:code `(bra ,etiq))))
      ((or (eq l t) (equal l ''t)) (when ind (:code `(bra ,etiq))))
      ((neq l (setq :x (:macroexpand l))) (:pred :x ind etiq))
      ((not (consp l))
         (:with-no-tail-and-return (:alloc-reg () ()) 
            (:code `(,(if ind 'bfnil 'btnil) ,(:read-op (:exp l)) ,etiq)) ))
      ((eq (car l) 'not) (:pred (cadr l) (not ind) etiq))
      ((:cppred l ind etiq))
      (t (:with-no-tail-and-return (:alloc-reg () ())
            (setq l (:read-op (:exp l))) )
         (:code `(,(if ind 'bfnil 'btnil) ,l ,etiq)) )))

;;.SSSection ":PROGN"
(de :progn (l)
   (:with-no-tail-and-return ()
      (while (cdr l) (:exp (nextl l))) )
   (:exp (car l)) )

;;.SSection "Le header du code genere pour une fonction"
;;.SSSection ":MAKE-HEADER"
(de :make-header (f type lvar)
   ; Tout commence par des de'claration.
   (:code `(fentry ,f ,type))
   (:code `(entry ,f ,type))
   ; Verification du nombre d'argument des nsubr.
   (when (eq type 'nsubr) (:check-nsubr f lvar))
   ; Les valeurs re'elles des registres et de la pile.
   (:init-header type lvar)
   ; Liaison d'arbre et liaison superficielle.
   (:deset-env () t) )

;;.SSSection ":CHECK-NSUBR"
(de :check-nsubr (f lvar)
   (when (and (consp lvar) (not (memq f :lfnt-module)))
      (let ( (l (length lvar)) (lab (:genlab)) )
         (ifn (cdr (last lvar))
            (:code `(cnbeq a4 ',l ,lab))
            (:code `(cnbge a4 ',l ,lab)) )
         (:code `(mov ',f a1))
         (:code `(mov ',l a2))
         (:code '(jmp #:llcp:errwna))
         (:code lab) )))

;;.SSSection ":INIT-HEADER"
(de :init-header (type lvar)
   (cond
      ((memq type '(fsubr msubr dmsubr)) (when lvar (:add-env lvar 'a1)))
      ((neq type 'nsubr) (mapc ':add-env lvar '(a1 a2 a3)))
      ((eq lvar '&nobind)
         (setq :&nobind t)
         (:code '(push a4))
         (:push-var '&nobind) )
      (t (let ( (n 0) )
            (while (consp lvar) (:push-var (nextl lvar)) (setq n (add1 n)))
            (when lvar
               (unless (eq n 0) (:code `(diff ',n a4)))
               (:code '(jcall #:llcp:nlist))
               (:add-env lvar 'a1) )))))

;;.SSection "Les lambda-expressions"
;;.SSSection ":EVLIS2"
(de :evlis2 (lvar larg)
   (let ( (lop ()) (n 0) )
      (:with-no-tail-and-return ()
         (while (consp lvar)
            (setq :return? (:alloc-reg () ()))
            (newl lop (:protect-op (:exp (nextl larg))))
            (nextl lvar) )
         (when lvar
            ; ???? Gueule sur un &nobind
            (setq :return? (:alloc-reg () ()))
            (while larg
               (:push (:exp (nextl larg)))
               (setq n (add1 n)) )
            (:write-op () 'a1) (:write-op () 'a2) (:write-op () 'a3)
            (:mov `',n 'a4)
            (:code '(jcall #:llcp:nlist))
            (:pop-value n)
            (newl lop (:protect-op 'a1)) ))
      (map (lambda (l) (rplaca l (or (:protected-op? (car l)) 'sp))) lop)
      lop ))

;;.SSSection ":APP-LAMBDA"
(de :app-lambda (((tmp lvar . corps) . larg))
   (let ( (oenv :env) (bind) )
      (if (eq tmp 'flambda) (setq larg (mapcar (lambda (m) `',m) larg)))
      (setq larg (nreverse (:evlis2 lvar larg)))
      (:pop-value (:count 'sp larg))
      (:init-app-lambda lvar larg)
      (setq bind (:deset-env oenv ()))
      (setq tmp (:progn corps))
      (if :tail?
         (setq tmp (:mov tmp :return?))
         ; On peut optimiser facile ici..
         (when (and :return? (not (:reg? tmp)))
            (if (:reg? :return?)
               (setq tmp (:mov tmp :return?))
               ; Pour le cas (setq <var> (let ...))
               (setq tmp (:mov tmp (:alloc-reg () ()))) )))
      (:reset-env oenv bind ())
      tmp ))

;;.SSSection ":INIT-APP-LAMBDA"
(de :init-app-lambda (lvar lop)
   (mapc (lambda (m op) (when (eq op 'sp) (:push-var m))) lvar lop)
   (map
      (lambda (lm lop)
         (if (and (:reg? (car lop)) (not (memq (car lop) (cdr lop))))
            (:add-env (car lm) (car lop))
            (unless (eq (car lop) 'sp)
               (when (and (consp (car lop)) (fixp (caar lop)))
                  (rplaca (car lop)
                     (add (:count 'sp (cdr lop)) (caar lop)) ))
               (:code `(push ,(car lop))) (:push-var (car lm))
               (mapc
                  (lambda (op)
                     (when (and (consp op) (fixp (car op)))
                        (rplaca op (add1 (car op))) ))
                  (cdr lop) ))))
      lvar lop )
   (when (setq lvar (or (variablep lvar) (cdr (last lvar))))
      (:add-env lvar 'a1) ))
