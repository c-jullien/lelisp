;;;
;;; functionnal parsing code
;;;
;;; $Id: parse.ll,v 1.1 2006/12/09 11:22:09 jullien Exp $
;;;

(defvar #:sys-package:colon '{llmodule})

;; internal use
(defvar :x)

;;; Predicat vrai si l'argument est de la forme 'SYMBOL ou #'SYMBOL :
(defun :quoted-symbol-p (expr)
  (and #:crunch:dynamic-caller
       (consp expr)
       (or (eq (car expr) 'quote)
	   (eq (car expr) 'function))
       (symbolp (cadr expr))
       ))

;;.SSection "Recherche des de'finitions de fonctions"
;;.SSSection ":GET-ALL-DEF-IN-FILES"
;;      Charge les fichiers <lfiles> et rame`ne une liste contenant
;;les expressions lisp n'e'tant pas des de'finitions de fonctions et
;;les noms des fonctions de'finies (seulement les fonctions de type EXPRs
;;FEXPRs MACROs ou DMACROs).

(de :get-all-def-in-files (lfiles)
   (let ( (us ()) (ldef ())
          (#:system:loaded-from-file)
          (#:system:redef-flag t)
          (#:sys-package:colon #:sys-package:colon)
          (#:system:in-read-flag ())
          (inchan (inchan)) )
     (mapc
      (lambda (f) 
	(ifn (setq us (probepathf f))
	     (error 'analyse 'ERRFILE f)
	   (with ((inchan (openi us)))
		 (setq #:system:loaded-from-file us)
		 (setq ldef (:cp-read-files1 ldef us))
		 )))
      lfiles )
     (nreverse ldef)
     ))

;;.SSSection ":CP-READ-FILES1"
(defun :cp-read-files1 (lfnt file)
  (untilexit eof
    (let ((c ())
	  (#:crunch:defstruct-flag t))
      (unless (catcherror t
		(setq lfnt
		      (lock (lambda(tag val)
			      (if tag
				  (if (eq tag 'retrytoplevel)
				      (progn
					(when (and (consp val)
						   (eq (car val) 'eval-when))
					   ;; must be removed to be evaluated
					   (setq #:compiler:exported-env
						 (delete (cddr val)
						     #:compiler:exported-env)))
					(:cp-read-files2 val lfnt ()() 'scan))
				    (evexit tag val))
				val))
			    (:cp-read-files2 (setq #:crunch:lastread
						   (tag retryread (:read)))
					     lfnt () () 'scan)) ))
	      (printerror (or (get-message-p #:crunch:lasterror)
			      #:crunch:lasterror)
			  'UNRECOVERABLE
			  #:crunch:lastread)
	      )))
    lfnt)

(defun :read ()
  (let ((#:crunch:sys-package:sharp #:sys-package:sharp)
	(#:sys-package:sharp '#:crunch:sharp)
	(#:crunch:read-error ())
	)
    (read)
    ))

(defun :cp-read-files2 (us l export :exportable process-mode)
  ;; parsing toplevel-forms
  ;; ATOMP
  (if (not (consp us)) l
     ;; (<DEFXXX> ...)
     (when (:definerp (car us))		; ex: (defabbrev foo a_foo)
	   (:add-definer us))
    (cond
     ;; (DE ...)
     ((memq (car us) '(de df defun dm dmd defmacro))
      (when (neq process-mode 'compile) (:eval us))
      (when :exportable
	    (putprop (cadr us)
		     :exportable
		     '{llmodule}:exportable-definition))
      (cons (cadr us) l) )

     ;; (EVAL-WHEN ...)
     ((eq (car us) 'eval-when)
      (let ((#:crunch:toplevel-error t))
	;; evaluating (cddr us) if compile key & not in :exported-env
	;; recursive-analyze if load key
	(setq :x (#:compiler:mc:eval-when (cdr us))))
      (setq l (:cp-read-files2 :x l export :exportable 'compile))
      )

     ;; (SETFN ...)
     ((eq (car us) 'setfn)
      (when (neq process-mode 'compile) (:eval us))
      (ifn (and (consp (cadr us)) (eq (caadr us) 'quote)(symbolp (cadadr us)))
	   (cons us l)
	   (setq us (cadadr us))
	   (when :exportable
		 (putprop us
			  :exportable
			  '{llmodule}:exportable-definition))
	   (cons us l) ))
     ;; (PROGN ...)
     ((eq (car us) 'progn)
      (mapc
       (lambda (m)
	 (setq l (:cp-read-files2 m l export :exportable process-mode)))
       (cdr us) )
      l )
     ;; (EXPORTABLE-DEFINITION ...)
     ((eq (car us) 'exportable-definition)
      (setq :exportable (:get-exportable export (caddr us) (cadr us)))
					; avoid unknow abbreving structure
      (unless (:unknow-abbrev-p (cadr (cadr us)))
	      (newl {llmodule}:exportable-definition
		    (list (cadr (caddr us))(cadr (cadr us)))) )
					; let's go on strcture's definitions
      (mapc
       (lambda (m)
	 (setq l (:cp-read-files2 m l export
				  (car {llmodule}:exportable-definition)
				  process-mode)))
       (cdddr us) )
      l )
     ;; (SYNONYM ...)
     ((eq (car us) 'synonym) 
      (when (neq process-mode 'compile) (:eval us))
      (if (and (consp (cadr us)) (eq (caadr us) 'quote)(symbolp (cadadr us)))
	  (progn
	    (newl {llmodule}:synonym-definition (cadadr us))
	    (if (and (symbolp (setq :x (eval (caddr us))))
		     (memq :x l))	; deja defini ds le fichier
		(cons (cadadr us) l)
	      l
	      ))
	l
	))
     ;; (IF ...)
     ((eq (car us) 'if)
      (when (neq process-mode 'compile) (setq :x (:eval (cadr us))))
      (if :x
	  (setq l (:cp-read-files2 (caddr us) l export :exportable process-mode))
	(mapc (lambda(m)
		(setq l (:cp-read-files2 m l export :exportable process-mode)))
	      (cdddr us)) )
      l)
     ;; (<MACROXXX> ...)
     ((neq us (setq :x (:macroexpand us)))
      (when (and (memq (car us) l) (not (memq (car us) {llmodule}:used-macros)))
	    (newl {llmodule}:used-macros (car us)))
      (:cp-read-files2 :x l export :exportable  process-mode))
     ;; (??? ...)
     (t (when (not (memq process-mode '(compile if))) (:eval us))
	l
	)
     )))

(defun :get-exportable (export type name)
   (when (and (consp type) (eq (car type) 'quote)
              (consp name) (eq (car name) 'quote) )
      (:get-exportable-aux export (cadr type) (cadr name)) ))

(defun :get-exportable-aux (export type name)
   (cond
      ((not (consp export)) ())
      ((not (consp (car export)))
         (:get-exportable-aux (cdr export) type name) )
      ((and (eq (caar export) type) (memq name (cdar export)))
         t )
      (t (:get-exportable-aux (cdr export) type name)) ))

;; may be an undefined toplevel form...
(defun :eval (x)
    (let ((#:crunch:toplevel-error t))
      (eval x)))
;(defun :eprogn (l)
;    (let ((#:crunch:toplevel-error t))
;      (eprogn l)))
(defun :macroexpand (x)
    (let ((#:crunch:toplevel-error t))
	 (#:compiler:macroexpand x))) 
(de :typefn (f)
    (or (car (get f 'resetfn))
	(typefn f)))
(de :valfn (f)
    (or (cdr (get f 'resetfn))
	(valfn f)))

;;; redefine DEFSTRUCT to considere heritage
(setq #:crunch:not-parent-structures '(tclass))
(eval-when (load eval compile)
(unless (getdef ':defstruct)
	(synonymq :defstruct defstruct))

(defmacro defstruct (n . l)
  (if (and #:system:defstruct-all-access-flag
	   #:crunch:defstruct-flag
	   (symbolp n)
	   (setq :x (packagecell n))
	   (not (memq :x #:crunch:not-parent-structures))
	   )
      (progn
	;; just to declenche the rigth import for herited structure
	(unless (:has-parent n)
		(#:crunch:errstc n :x 'errstc))
	`(:defstruct ,n ,@l))
    `(:defstruct ,n ,@l)))

(defun :has-parent (n)
  (when n
	(let ((p (packagecell n)))
	  (if (and (symbolp p)
		   (getprop p 'defstruct))
	      p
	    ())
	  )))
)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;; le parseur d'expression
;;;
;;; :parse prend un nom de fct en entre'e
;;;     et met a jour :closure : (fused11 fused12 ... fdefined1)
;;;     et met a jour :extern-u : les fct inconnues
;;;     et met a jour :dynamic : les fcts apellees dynamiquement
(de :parse (:f)
   (cond
;      ((setq :x (get :f 'resetfn))
;       (setfn :f (car :x) (cdr :x))
;       (remprop :f 'resetfn)
;       (:parse :f) )
      ((not (:typefn :f))
       ; avoid fct name which containts unknow abbrev
       (unless ({llmodule}:unknow-abbrev-p :f)
	       (:search-module :f) ))
      (t
       (unless (memq :f {llmodule}:closure)
	       (newl {llmodule}:closure :f)
	       (unless (catcherror t (:parse-lambda (:valfn :f)))
		       (printerror 'analyze
				   'UNRECOVERABLE
				   :f))
	       ))
      ))

;;.SSSection ":PARSE-LAMBDA"
(de :parse-lambda ((lvar . l))
    (:parse-progn l) )

;;.SSSection ":PARSE-PROG*"
(de :parse-progn (l)
   (mapc ':parse-exp l) )

;;.SSSection ":PARSE-EXP"
(de :parse-exp (l)
   (cond
      ((constantp l))
      ; Le cas des constantes numeriques sous formes de tcons.
      ((numberp l))
      ; Libre? Lie'e? Habitez-vous chez vos parents?
      ((symbolp l))
      ; Le copyrigth Lambda-calculus.
      ((consp (car l)) (:parse-anonymous-exp (car l) (cdr l)))
      ; les fcts standard
      ((:parse-std-function? (car l) (cdr l)))
      ; les macros
      ((neq l (setq :x (car (catcherror t (#:compiler:macroexpand l)))))
       ; ne pas oublier les noms des macros utilisees
       (unless (memq (car l) {llmodule}:closure)
	       (newl {llmodule}:closure (car l)))
       (:parse-exp :x))
      ; sans doute un appel fonctionnel user
      (t (:parse-call (:typefn (car l)) (car l) (cdr l))) ))

;;.SSSection ":PARSE-CALL"
(de :parse-call (type fnt larg)
;   (cond
;      ((setq :x (get fnt 'resetfn))
;         ; Une fausse fonction interpre`te.
;         (setfn fnt (car :x) (cdr :x))
;         (remprop fnt 'resetfn)
;         (:parse fnt)
;         (:parse-progn larg) )
;      (t
        (if type
	   ; know fct case
	   (selectq type
		    (expr
		     (if (memq fnt :prog)
		         ; parse body for locales fct
			 (:parse fnt)
		       ; other expr (from CPENV...) haven't to be parsed
                       ; but they have to be imported 
		       (:search-module fnt))
		     ; always parse args
		     (:parse-progn larg) )
		    ((fexpr fsubr))
		    ((subr0 subr1 subr2 subr3 nsubr)
		     (when (:defdynamicp fnt)
			   (setq fnt (:add-defdynamic fnt larg))
			   (when fnt (:parse fnt)))
		     (:parse-progn larg))
		    (t
		     (#:crunch:warning 23 type fnt)
		     (:parse-exp `(eval '(,fnt ,@larg))) )
		    )
	 ; unknow fct case.
	 ; avoid fct name which containts unknow abbrev.
	 (unless ({llmodule}:unknow-abbrev-p fnt)
		 (:search-module fnt))
	 ; don't forget to parse arguments of this unknow fct
	 (:parse-progn larg)
	 ))
      ))

;;.SSSection ":PARSE-ANONYMOUS-EXP"
(de :parse-anonymous-exp (lamb larg)
   (selectq (car lamb)
      (lambda (:parse-progn larg) (:parse-lambda (cdr lamb)))
      (flambda (:parse-lambda (cdr lamb)))
      (mlambda (#:crunch:error 23 lamb))
      (t (#:crunch:error 23 lamb)) ))

;;.SSSection ":PARSE-STD-FUNCTION?"
(de :parse-std-function? (fnt larg)
   (selectq fnt
      ((if and or while until repeat progn prog1 protect evexit evtag
        setq defvar return schedule with-interrupts without-interrupts)
         (:parse-progn larg) fnt )
      ((funcall apply)
       (setq {llmodule}:parano t)
       (when (:quoted-symbol-p (car larg))
	     (:add-dynamic (cadar larg))
	     (:parse (cadar larg)))
       (:parse-progn larg)
       fnt)
      (lock (:parse-lock (car larg) (cdr larg)) fnt)
      (tagbody (:parse-tagbody larg) fnt)
      ((quote comment mlambda) fnt)
      ((lambda flambda)
       (setq {llmodule}:parano t)
       (:parse-funarg fnt larg) fnt)
      (declare (mapc ':declaration larg) fnt)
      (selectq
         (:parse-exp (car larg))
         (mapc (lambda (l) (:parse-progn (cdr l))) (cdr larg))
         fnt )
      (letv (:parse-letv larg) fnt)
      (deset (:parse-deset larg) fnt)
      ((tag exit unexit block return-from) (:parse-progn (cdr larg)) fnt)
      ((unwind unexit)
       (setq {llmodule}:parano t)
       fnt)
      ((eval symeval evlis set)
       (setq {llmodule}:parano t)
       (:parse-progn larg)
       fnt )
      (precompile (:parse-exp (car larg)) fnt)
      (flet
       (setq {llmodule}:parano t)
       (:parse-exp `(eval '(flet ,@larg)) )
       fnt )
      (t ()) ))

;;.SSection "Principales fonctions de filtrage"
(de :parse-funarg (lamb corps)
   (let ( (fnt (symbol :f (gensym))) )
      (setfn fnt (if (eq lamb 'lambda) 'expr 'fexpr) corps)
      (:parse fnt)
      (setq {llmodule}:closure (delq fnt {llmodule}:closure))
      (remob fnt) ))

(de :parse-lock (f larg)
   (if (and (consp f) (memq (car f) '(lambda quote)))
      (progn
         (when (eq (car f) 'quote) (setq f (cadr f)))
         (ifn (or (variablep f) (and (consp f) (eq (car f) 'lambda)))
            (#:crunch:error 24 f 'lock)
            (:parse-exp `(,f () (progn ,@larg))) ))
      (setq {llmodule}:parano t)(:parse-exp f) (:parse-progn larg) ))

(de :parse-tagbody (l)
   (cond
      ((not (consp l)) l)
      ((not (consp (car l))) (:parse-tagbody (cdr l)))
      (t (:parse-exp (car l)) (:parse-tagbody (cdr l))) ))

(de :parse-letv ((lvar lval . corps))
   (ifn (and (consp lvar) (eq (car lvar) 'quote))
      (#:crunch:error 24 lvar 'letv)
      (:parse-exp `((lambda (,(cadr lvar)) ,@corps) ,lval)) ))

(de :parse-deset ((lvar lval))
   (if (and (consp lvar) (eq (car lvar) 'quote))
       (progn
         (:parse-exp lval)
         (:parse-progn (:flatt (cadr lvar))) )
     (setq {llmodule}:parano t)
     (:parse-exp lvar)
     (:parse-exp lval) ))

(de :flatt (l) (:flat-auxillaire l ()))
(de :flat-auxillaire (l r)
   (cond
      ((null l) r)
      ((atom l) (cons l r))
      (t (:flat-auxillaire (car l) (:flat-auxillaire (cdr l) r))) ))

;; defined for CPMAC use
(de #:compiler:macro-expand-error (l)
  (#:crunch:error 24 l 'macroexpand))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; search which module defined <f> function
(defun :search-module (f)
  ;; if allready founded and stocked, no need to search again
  (unless (or (assq f #:crunch:modules-to-import)
	      (assq f {llmodule}:allextd))
	  (let (mod)
	    (cond
	     ;; if know and exported from other module,
	     ;; we import rigth modules
	     ((setq mod (func-from f))
	      (#:crunch:advise FOUNDFUNCTION mod f)
	      (let ((#:crunch:default-multiple-defined-message 31))
		(setq mod (#:crunch:load-cpenvs f mod)))
	      (#:crunch:add-import f mod))
	     ;; if just defined in other module, but no exported
	     ;; we import rigth modules, and re-analyze them
	     ((setq mod (intern-from f))
	      ; update module description files
	      (#:crunch:advise FOUNDINTERNALFUNCTION mod f)
	      (let ((#:crunch:verbose 0)
		    (#:crunch:default-multiple-defined-message 31))
		(setq mod (#:crunch:load-cpenvs f mod)))
	      (#:crunch:add-import f mod)
					; preparation to update modules <mod>
	      (mapc (lambda(m)
		      (let ((lf (assq m {llmodule}:allupmod)))
			(if lf (rplacd lf (cons f (cdr lf)))
			  (newl {llmodule}:allupmod (list m f)))))
		    mod) )
	     ;; if unknow, we put it in {llmodule}:EXTERN-U
	     (t
	      (unless (memq f {llmodule}:allext)
		      (newl {llmodule}:extern-u f)
		      (#:crunch:warning 1 f)))
	     ))))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; gestion des fonction appelees dynamiquement

;; DEFDYNAMIC declare f comme etant une fct capable d'appeler
;; d'autres fcts dynamiquement
;; le 2e arguement est le rang de cette fct dans la liste d'arguments
;; ex: (defdynamiccall 'apply 1): c'est le 1er arg d'apply qui est une fct
;;                            appele dynamiquement.
(eval-when (load eval compile)
(defmacro defdynamiccall (f n)
  (unless (symbolp f)(error 'defdynamiccall 'errsym f))
  (unless (numberp n)(error 'defdynamiccall 'errnna n))
  `(putprop ',f ,n '{llmodule}:dynamic))
)

(defmacro :defdynamicp (f)
  `(get ,f '{llmodule}:dynamic))

(defun :add-defdynamic (f la)
  (let ((n (:defdynamicp f)) qf)
    (ifn n
	 (error 'analyse "not a dynamical definer : use DEFDYNAMIC" f)
       (setq qf (nth (sub1 n) la))
       (setq qf (when (:quoted-symbol-p qf)
		      (:add-dynamic (cadr qf))
		      (cadr qf)))
       qf)))

(defmacro :add-dynamic(f)
  `(newl {llmodule}:dynamic ,f))

;; les fcts standard concernees
;; (les MAPC sont des macros du compilo, 
;;  et les FUNCALL sont cable's)
(defdynamiccall mapoblist 1)
(defdynamiccall mapcoblist 1)
(defdynamiccall maploblist 1)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; gestion des fonctions utilisee comme definisseurs

;; DEFDEFINER declare une fct comme definisseur.
;; L'argument de DEFDEFINER est un symbole, qui designe une fct qui definit
;;  une entite pour laquelle nous aimerions importer le module qui
;;  qui la definie.
;; L'argument optionel designe une fct a appliquer au symbol defini
;;  afin de manier le vrai symbol qui sera utilise
;; RMQUE: on suppose tjrs que le symbole defini par ce definisseur
;;        est le 1er argument!
(eval-when (load eval compile)
(defmacro defdefiner(f . ap)
  (unless (symbolp f)(error 'defdefiner 'errsym f))
  `(putprop ',f
	    ',(if ap (car ap) 'identity)
	    '{llmodule}:definer))
)

(defun :definerp(f)
   (or (and (symbolp f)
	    (get f '{llmodule}:definer))
       (and (consp f)
	    (eq (car f) 'quote)
	    (symbolp (cadr f))
	    (get (cadr f) '{llmodule}:definer)) ))
	

(defun :add-definer (sexp) ;sexp=(defXXX foo ...)
  (newl {llmodule}:definer
	 (funcall (get (car sexp) '{llmodule}:definer) (cadr sexp)) ))

;; les fcts standard concernees
;; (DEFVAR X Y) -> X
;(defdefiner defvar)

;; (DEFABBREV X Y) -> X
(defdefiner defabbrev)

;; (PUT-ABBREV 'X 'Y) -> X
(defdefiner put-abbrev (lambda(x) (cadr x)))

;; (DEFSHARP C () ...) -> #:SHARP:C
(defdefiner defsharp (lambda(x) (symbol #:sys-package:sharp x)))

