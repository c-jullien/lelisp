;;;
;;; SETF: Generalized Variables
;;;
;;; $Source: /usr/cvs/lelisp/llib/setf.ll,v $
;;; $Date: 2016/05/21 10:36:06 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


(defvar #:sys-package:colon 'setf)

(add-feature 'setf)

;;;
;;; To handle P-Lists
;;;
(eval-when (load eval compile)
(defmacro system-put (a i v)
  `(progn (putprop ,a ,v ,i)
	  ,a))

(defmacro system-get (a i)
  `(getprop ,a ,i))
)

;;;
;;; Setf's interface
;;; for define-setf-method
;;;
(eval-when (load eval compile)
(defmacro push-setf-method (n f)
  `(system-put ,n 'setf-method ,f))

(defmacro pop-setf-method (n)
  `(system-get ,n 'setf-method))
)

;;;
;;; for simple defsetf
;;;
(eval-when (load eval compile)
(defmacro push-setf-inverse (n f)
  `(system-put ,n 'setf-inverse ,f))

(defmacro pop-setf-inverse (n)
  `(system-get ,n 'setf-inverse))
)

;;;
;;; for complex defsetf
;;;
(eval-when (load eval compile)
(defmacro push-setf-expander (n f)
  `(system-put ,n 'setf-expander ,f))

(defmacro pop-setf-expander (n)
  `(system-get ,n 'setf-expander))
)

;;;
;;; Define-Setf-Method
;;;
(eval-when (load eval compile)
(defmacro define-setf-method (access-fn lambda-list . body)
  ;; defining and stock the code which return the 5 values describe
  ;; in GET-SETF-METHOD
  `(progn (push-setf-method ',access-fn
			    (lambda ,lambda-list ,@body))
	  ',access-fn))
)

;;; Get-Setf-Method
;;; Implementation notes: 
;;;  GET-SETF-METHOD returns 5 values which are defined with DEFINE-SETF-METHOD
;;;  or extracted from the information of DEFSETF, or directly from a symbol.
(eval-when (load eval compile)
(defun get-setf-method (form)
  ;;  (GET-SETF-METHOD <s-expr>)
  ;; <form> is a access lisp form to a structure (symbol, list, defstruct ...)
  ;; The result is 5 values which permit to construct in any cases
  ;; a correct update form to this structure.
  ;; Description of the 5 values:
  ;;  1- list of temporary variables which will bound to parameters of
  ;;     access form. this permit to guaranty once evaluation of each
  ;;     parameter, and in the correct order.
  ;;  2- list of parameters of access form.
  ;;  3- list of one temporary variable which will bound to new value.
  ;;     It's a list to prevent futures extentions. 
  ;;  4- update form: lisp form, normally using all temporary variables
  ;;     predefined (first and third result), which update the structure.
  ;;  5- access form: lisp form, normally using the temporary variables
  ;;     of the first result, which access the structure.
  (cond
   ((symbolp form)   ; simple case no storage
    (let ((v (gensym)))
      (list () () (list v)`(setq ,form ,v) form)))
   ((and (listp form)   ; a lisp form (accessor)
	 (symbolp (car form)))
    (let (tmp)
      (cond   ; right clause order ?!?!
       ((macro-function (car form))
	(get-setf-method
	 (macroexpand form)))
       ((setq tmp                            ; defined methods using
	      (pop-setf-method (car form)))  ;  define-setf-method
        (apply tmp (cdr form)))
       ((setq tmp                            ; defined methods using
	      (pop-setf-inverse (car form))) ;  the simple defsetf
	(let ((v (gensym))
	      (lp (mapcar (lambda &nobind (gensym)) (cdr form))) )
	  (list lp
		(cdr form)
		(list v)
		`(,tmp ,@lp ,v)
		(cons (car form) lp))))
       ((setq tmp                            ; defined methods using
	      (pop-setf-expander (car form)));  complex defsetf
	(let ((largs (cdr form)))
	  (let ((temp-list (mapcar (lambda &nobind (gensym)) largs))
		(temp-value (gensym)))
	    (list temp-list
		  largs
		  (list temp-value)
		  (apply tmp
			 (cons temp-value temp-list))
		  (cons (car form) temp-list))
	    )))
       (t
	(error 'get-setf-method 'ERRGEN form)))))
   ;; ?!?! what about ((foo a) b c) !?!?
   (t                ; unknow methods
    (error 'get-setf-method 'ERRBPA form))))
)

;;;
;;; Setf
;;;
(eval-when (load eval compile)
(defmacro setf l
  (cond
   ((cddr l)
    ;; pairs' construction
    (do ((lpairs l (cddr lpairs))
	 (lsetf (list 'progn)
		(if (cdr lpairs)
		    (nconc lsetf
			   `((setf ,(car lpairs),(cadr lpairs))))
		    (error 'setf 'ERRWNA l))) )
	((null lpairs) lsetf)))
   ((cdr l)
    ;; (SETF <PLACE> <VALUE>)
    (let ((x (car l))(y (cadr l)))
      (cond
       ((symbolp x)
	`(setq ,x ,y))
       ((and (listp x)
	     (symbolp (car x)))
	(let (tmp)
	  (cond
	   ((setq tmp (pop-setf-inverse (car x))) ; simple defsetf
	    `(,tmp ,@(cdr x) ,y))
	   (t				          ; define-setf-method
	    ;; use destructuring-let in the style of mvbind
	    (let (((vars vals stores store-form access-form)
		   (get-setf-method x)))
	      (if vars
		  `(let* ; LET* to insure the left to right 
		         ; evaluation order
		       ,(mapcar 'list vars vals) ;
		     (let ((,@stores ,y))
		       ,store-form))
		(if stores
		    `(let ((,@stores ,y))
		       ,store-form)
		  store-form)) ))
	   )))
       ;; ((foo a) ...) ?!?!?
       (t (error 'setf 'ERRBPA x)))))
   (t (error 'setf 'ERRWNA l))))
)

;;;
;;; Defsetf
;;;

(eval-when (load eval compile)

     (defmacro defsetf (access . rest)
       ;; ?!?! missing the lambda-list analysis
       (cond
	((not (symbolp access))
	 (error 'defsetf 'ERRNAA access))
	((listp (car rest))    
	 ;; complex case: (defsetf foo lambda-list
	 ;;                        (new-value)
	 ;;                      . body)
	 (unless (listp (cadr rest))
		 (error 'defsetf 'ERRBPA (cadr rest)))
	 `(push-setf-expander ',access
			      (lambda (,@(cadr rest) ,@(car rest))
				,@(cddr rest))))
	((symbolp (car rest))    ; simple case: (defsetf f g)
	 `(push-setf-inverse ',access ',(car rest)) )
	(t
	 (error 'defsetf 'ERRBAL (car rest)))
	)))

;;;
;;; Define-Modify-Macro
;;;

(defmacro define-modify-macro (name lambda-list fct)
  `(defmacro ,name (ref ,@lambda-list)
     (cond
      ((symbolp ref)
       `(setq ,ref ,(:make-call ',fct ref ,@lambda-list)))
      ((consp ref)
       ,(let ((lv (list (gensym)(gensym)(gensym)(gensym)(gensym))))
	  `(let ((,lv (get-setf-method ref)))
	     `(let* ,(mapcar (lambda(x y)
				 `(,x ,y))
			     ,(car lv),(cadr lv))
		(let ((,(car ,(caddr lv))
		       ,(:make-call ',fct ,(nth 4 lv) ,@lambda-list)))
		  ,,(nth 3 lv))))))
      (t
       (error 'define-modify-macro 'ERRBPA ref)))))

;; MAKE-CALL construct a call to <fct> with the <arg1> and <argl> arguments
;; where <argl> can exist with &rest and &optional keywords

(defun :make-call (fct arg1 . argl)
  `(,fct ,arg1 ,@argl))

;;;
;;; Initializations
;;;


(define-setf-method car (list)
  (let ((plist (gensym))
	(new-val (gensym)))
    (list (list plist)
	  (list list)
	  (list new-val)
	  `(progn (rplaca ,plist ,new-val)
		  ,new-val)
	  `(car ,plist))))

(defsetf cdr (list)(new-val)
  `(progn (rplacd ,list ,new-val)
	  ,new-val))

(defsetf caar (list)(new-val)
  `(progn (rplaca (car ,list) ,new-val)
	  ,new-val))

(defsetf cadr (list)(new-val)
  `(progn (rplaca (cdr ,list) ,new-val)
	  ,new-val))

(defsetf cdar (list)(new-val)
  `(progn (rplacd (car ,list) ,new-val)
	  ,new-val))

(defsetf cddr (list)(new-val)
  `(progn (rplacd (cdr ,list) ,new-val)
	  ,new-val))

(defsetf get (symbol indicator)(new-val)
  `(putprop ,symbol ,new-val ,indicator))

(defsetf getprop (symbol indicator)(new-val)
  `(putprop ,symbol ,new-val ,indicator))

(defsetf vref vset)
(defsetf sref sset)
(defsetf aref aset)

(define-setf-method nth (index list)
  (let ((pindex (gensym))
	(plist (gensym))
	(new-val (gensym)))
    (list (list pindex plist)
	  (list index list)
	  (list new-val)
	  `(progn (rplaca (nthcdr ,pindex ,plist) ,new-val)
		  ,new-val)
	  `(nth ,pindex ,plist))))

(define-modify-macro incf (x) +)

(defsetf dynamic setq)


;;;; added by FG (1988/11/7)

(eval-when (load eval compile)
(defun macro-function (x)
  (and (symbolp x)
       (memq (typefn x) '(dmacro dmsubr macro msubr))
       (cons 'lambda (valfn x))))
)

(defsetf valfn (symb) (new-val) `(progn (setfn ,symb 'expr ,new-val) ,new-val))

(defsetf plist (symb) (new-val) `(progn (plist ,symb ,new-val) ,new-val))
