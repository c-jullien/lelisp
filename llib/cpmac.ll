;;;
;;; CPMAC:  Compiler Macros (for LLCP and Complice)
;;;
;;; $Source: /usr/cvs/lelisp/llib/cpmac.ll,v $
;;; $Date: 2016/05/21 10:36:04 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

(unless (>= (version) 15.2)
        (error 'load 'erricf 'cpmac))

(defvar #:sys-package:colon 'compiler)
 
;;; The interpreter Macros (DM, DMD, DEFMACRO) are not enough 
;;; for the compilers. This module defines 2 kinds of new macros:
;;;  - macro-close, which are always expanded by the compilers
;;;  - macro-open, which are expanded if the flag #:compiler:open-p
;;;    is true.

(defvar :open-p
  (if (boundp ':open-p)
      :open-p
      t))

(defvar :exported-env
  (if (boundp ':exported-env)
      :exported-env
      ()))

(defvar dynamic-flag
  (if (featurep 'complice)
      '#:complice:globalvar
      '#:system:loaded-from-file))

;;; 
;;; Macro Definition
;;;

(df  defmacro-open (name . fval)
     (setfn (symbol name 'macro-open) 'expr fval)
     name)

(defun  make-macro-open (nom fval)
  (setfn (symbol nom 'macro-open) 'expr fval)
  nom)

(defun  macro-openp (nom)
  (getfn1 nom 'macro-open))

(defun  remove-macro-open (nom)
  (when (getsymb1 nom 'macro-open)
	(remob (getsymb1 nom 'macro-open))))

;;;
;;; Exported Functions
;;;

; This finction is defined in compiler file only
;(defun :macro-expand-error (l)
;  ;; can (and has to be) redefined
;  (error ':macro-expand-error "erreur durant la macroexpansion" l))

(defun :macroexpand (l)
  ;; expand the form <l>
  (if (and (consp l) (symbolp (car l)))
      (let ((x ()) (cl (car l)) (cd (cdr l)))
	(setq x (catcherror ()
		  (cond
		   ((and :open-p (setq x (getfn1 cl 'macro-open)))
		    ;; Open-macros; If the result is (), the macro
		    ;; is overloaded and is no more effective.
		    (or (apply x (cdr l))
			l))
		   ;;internal predefined macros
		   ((:macroexpand-internal cl (cdr l)))
		   ((eq (typefn cl) 'macro)
		    ;; User macros
		    (apply (cons 'lambda (valfn cl)) l) )
		   ((eq (typefn cl) 'dmacro)
		    ;; User displace macros
		    (apply (cons 'lambda (valfn cl)) (cdr l)) )
		   ((eq (typefn cl) 'msubr)
		    ;; System macros or compiled user macros
		    (call (valfn cl) l () ()) )
		   ((eq (typefn cl) 'dmsubr)
		    ;; System displace macros or compiled displace macros
		    (call (valfn cl) (cdr l) () ()) )
		   (t l) )))
	(cond
	 ;; The macro raised an error catched by "catcherror"
	 ((atom x) (funcall ':macro-expand-error cl))
	 ;; Test if the macro-expansion did something.
	 ((and (consp (car x))
	       (or (neq l (car x))
		   (neq cl (caar x))
		   (neq cd (cdar x))))
	  (:macroexpand (cons (caar x) (cdar x))) )
	 ;; Else returns the same object.
	 (t (car x))))
    l))


;;;
;;; Internal Expansions
;;;

(defun :macroexpand-internal (fnt l)
  (or (and :open-p (:macroexpand-internal-open fnt l))
      (:macroexpand-internal-close fnt l) ))

(defun :macroexpand-internal-close (fnt l)
  (selectq fnt
      (COND       (:mc:cond l))
      (UNLESS    `(if (not ,(car l)) (progn ,@(cdr l))))
      (WHEN      `(if ,(car l) (progn ,@(cdr l))))
      (IFN       `(if (not ,(car l)) ,@(cdr l)))
      (NEQ       `(not (eq ,@l)))
      (NEQUAL    `(not (equal ,@l)))
      (NULL      `(not ,@l))
      (ATOMP     `(atom ,@l))
      (DECR      `(setq ,(car l) (,(if (cdr l) '- '1-) ,@l)))
      (INCR      `(setq ,(car l) (,(if (cdr l) '+ '1+) ,@l)))
      (NEWL      `(setq ,(car l) (cons ,(cadr l) ,(car l))))
      (NEXTL     `(prog1
                    ,(if (cdr l)
                        `(setq ,(cadr l) (car ,(car l)))
                        `(car ,(car l)))
                    (setq ,(car l) (cdr ,(car l))) ))
      (NEWR      `(setq ,(car l)
			(let ((:newr ,(cadr l)))
			    (nconc ,(car l) (ncons :newr)))))
      (DYNAMIC-LET (:mc:dynamic-let l))
      (DYNAMIC    (:mc:dynamic l))
      (RETURN    `(return-from () ,@l))
      (MAP        (:map l 'map  'null))
      (MAPL       (:map l 'map  'null))
      (MAPLIST    (:map l 'map  'cons))
      (MAPCON     (:map l 'map  'nreconc))
      (MAPC       (:map l 'mapc 'null))
      (MAPCAR     (:map l 'mapc 'cons))
      (MAPCAN     (:map l 'mapc 'nreconc))
      (EVERY      (:map l 'mapc 'every))
      (ANY        (:map l 'mapc 'any))
      (MAPVECTOR  (:mapvector l))
      (UNTILEXIT `(tag ,(car l) (while t ,@(cdr l))))
      (LOOP      `(while t ,@l))
      (CATCHERROR (:mc:catcherror l))
      (ERRSET     (:mc:errset l))
      (ERR       `(exit #:system:error-tag ,@l))
      (EVAL-WHEN  (:mc:eval-when l))
      (DESETQ    `(deset ',(car l) ,(cadr l)))
      (DEFPROP   `(putprop ',(car l) ',(cadr l) ',(caddr l)))
      (PSETQ      (if (cddr l)
                     `(setq ,(car l)
                         (prog1 ,(cadr l) (psetq ,.(cddr l))) )
                     `(setq ,(car l) ,(cadr l))) )
      (SETQQ      (if (cddr l)
                     `(progn
                         (setq ,(car l) ',(cadr l))
                         (setqq ,.(cddr l)) )
                     `(setq ,(car l) ',(cadr l)) ))
      (LETVQ     `((lambda (,(car l)) ,@(cddr l)) ,(cadr l)))
      (PROG2     `(progn ,(car l) (prog1 ,@(cdr l))))
      (LOGNOT    `(logxor ,(car l) -1))
      (ADD1      `(add ,(car l) 1))
      (SUB1      `(sub ,(car l) 1))
      (TIME      (:mc:time (car l)))
      (t ()) ))

(defun :macroexpand-internal-open (fnt l)
   (selectq fnt
      (CAAR   `(car (car ,.l)))
      (CADR   `(car (cdr ,.l)))
      (CDAR   `(cdr (car ,.l)))
      (CDDR   `(cdr (cdr ,.l)))
      (CAAAR  `(car (car (car ,.l))))
      (CAADR  `(car (car (cdr ,.l))))
      (CADAR  `(car (cdr (car ,.l))))
      (CADDR  `(car (cdr (cdr ,.l))))
      (CDAAR  `(cdr (car (car ,.l))))
      (CDADR  `(cdr (car (cdr ,.l))))
      (CDDAR  `(cdr (cdr (car ,.l))))
      (CDDDR  `(cdr (cdr (cdr ,.l))))
      (CAAAAR `(car (car (car (car ,.l)))))
      (CAAADR `(car (car (car (cdr ,.l)))))
      (CAADAR `(car (car (cdr (car ,.l)))))
      (CAADDR `(car (car (cdr (cdr ,.l)))))
      (CADAAR `(car (cdr (car (car ,.l)))))
      (CADADR `(car (cdr (car (cdr ,.l)))))
      (CADDAR `(car (cdr (cdr (car ,.l)))))
      (CADDDR `(car (cdr (cdr (cdr ,.l)))))
      (CDAAAR `(cdr (car (car (car ,.l)))))
      (CDAADR `(cdr (car (car (cdr ,.l)))))
      (CDADAR `(cdr (car (cdr (car ,.l)))))
      (CDADDR `(cdr (car (cdr (cdr ,.l)))))
      (CDDAAR `(cdr (cdr (car (car ,.l)))))
      (CDDADR `(cdr (cdr (car (cdr ,.l)))))
      (CDDDAR `(cdr (cdr (cdr (car ,.l)))))
      (CDDDDR `(cdr (cdr (cdr (cdr ,.l)))))
      (t ()) ))


;;;
;;; Specialized functions (in alphabetic order)
;;;

(defun :mc:catcherror ((s . l))
  (cond
   ((eq s t)
    `(let ((#:system:error-flag t))
       (tag #:system:error-tag (ncons (progn ,@l))) ))
   ((null s)
    `(let ((#:system:error-flag ())
	   (#:system:print-msgs 0)
	   (#:system:debug ()))
       (tag #:system:error-tag (ncons (progn ,@l))) ))
   (t `(let ((#:system:error-flag ,s))
	 (let ((#:system:print-msgs 
		(if #:system:error-flag #:system:print-msgs 0))
	       (#:system:debug
		(if #:system:error-flag #:system:debug ()) ))
	   (tag #:system:error-tag
		(ncons (progn ,@l))) )))))

(defun :mc:cond (l)
  (if (null (cdr l))
      (if (cdar l)
	  (if (eq (caar l) t)
	      `(progn ,@(cdar l))
	    `(if ,(caar l) (progn ,@(cdar l))) )
	  (or (caar l) 'nil) )
      (if (cdar l)
	  `(if ,(caar l) (progn ,@(cdar l)) (cond ,@(cdr l)))
	  `(or ,(caar l) (cond ,@(cdr l))) )))

(defun :mc:dynamic (l)
  ;; dynamic variable reference
  (when (featurep 'complice) (putprop (car l) t dynamic-flag))
  (car l))

(defun :mc:dynamic-let (l)
  ;; produce a dynamic-let. It's the LLCP default but
  ;; Complice has to be notified.
  (when (featurep 'complice)
	(mapc (lambda ((var val))(putprop var t dynamic-flag))
	      (car l)))
  `(let ,(car l) ,@(cdr l)))

(defun :mc:eval-when ((S* . E*))
  (let ( (ret 'nil) )
    (when (memq 'load S*)  (setq ret `(progn ,@E*)))
    (when (memq 'compile S*)
	  (unless (member E* :exported-env)
		  ;; Do a copy to prevent destructive macroexpansion.
		  (newl :exported-env (copy E*))
		  (eprogn E*) ))
    (when (memq 'local-compile S*) (eprogn E*))
    ret ))

(defun :mc:errset ((l s))
  `(let ((#:system:error-flag ,s))
     (tag #:system:error-tag (ncons ,l)) ))

;;;
;;; For all the mappers
;;;

(defun :map ((fnt . larg) targ tret)
  (let ((n (length larg)) (glarg ()) (res '#:system:map:r))
    (repeat n 
	    (newl glarg (symbol '#:system:map (concat "arg" (decr n)))))
    `((lambda ,glarg
	,(:map-result
	  (:map-while
	   (:map-next-res (:map-funcall (:map-next-arg glarg targ)
					fnt)
			  tret
			  res)
	   tret
	   (mapcar (lambda (m) `(consp ,m)) glarg))
	  tret res ))
      ,@larg )))

(defun :mapvector ((fnt v))
  `(let* ((#:system:map:r 0)
	  (#:system:map:v ,v)
	  (#:system:map:n (vlength #:system:map:v)))
     (while (lt #:system:map:r #:system:map:n)
       ,(:map-funcall '((vref #:system:map:v #:system:map:r)) fnt)
       (setq #:system:map:r (add1 #:system:map:r)))))

(defun :map-next-arg (larg type-arg)
  (mapcar
   (lambda (m)
     `(prog1 ,(if (eq type-arg 'map) m `(car ,m)) (setq ,m (cdr ,m))) )
   larg ))

(eval-when (load eval compile) 
;; for modules defining others mappers

(defun :map-funcall (corps fnt)
  (cond ((not (consp fnt)) (mcons 'funcall fnt corps))
	((memq (car fnt) '(function quote))
	 (if (and (symbolp (cadr fnt))
		  (memq (typefn (cadr fnt)) '(() fexpr fsubr)) )
	     (mcons 'funcall fnt corps)
	     (cons (cadr fnt) corps) ))
	((eq (car fnt) 'lambda) (cons fnt corps))
	((eq (car fnt) 'flambda) (cons (cons 'lambda (cdr fnt)) corps))
	;; raise an error in the interpreter
	((eq (car fnt) 'mlambda) (mcons 'funcall fnt corps))
	(t (mcons 'funcall fnt corps)) ))
)

(defun :map-next-res (exp type-result res)
  (selectq type-result
	   (null exp)
	   (cons `(setq ,res (cons ,exp ,res)))
	   (nreconc `(setq ,res (nreconc ,exp ,res)))
	   (t `(setq ,res ,exp)) ))

(defun :map-while (exp type-result glarg)
  (selectq type-result
	   ((null cons nreconc) `(while (and ,@glarg) ,exp))
	   (every `(while (and ,@glarg ,exp)))
	   (any `(while (and ,@glarg (not ,exp)))) ))

(defun :map-result (exp type-result res)
  (selectq type-result
	   (null exp)
	   ((cons nreconc) `((lambda (,res) ,exp (nreverse ,res)) ()))
	   (every `((lambda (,res) ,exp ,res) t))
	   (any `((lambda (,res) ,exp ,res) ())) ))

(defun :mc:time (e)
  (if (and (consp e) (eq (car e) 'quote))
      `(let ( (:time (runtime)) ) ,(cadr e) (fsub (runtime) :time))
      `(let ( (:time (runtime)) ) (eval ,e) (fsub (runtime) :time))))

;;;
;;; Other Open Macros
;;;

(defmacro-open synonymq (s1 s2)
  `(synonym ',s1 ',s2))

