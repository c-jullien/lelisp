;;;
;;; FINALIZE:  an experimental Le-Lisp 15.26 finalizer.
;;;
;;; $Source: /usr/cvs/lelisp/llib/finalize.ll,v $
;;; $Date: 2016/05/21 10:36:05 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

(unless (>= (version) 15.26)
        (error 'load 'erricf 'finalize))

(defvar #:sys-package:colon 'finalize)

(add-feature 'finalize)



#|

An Experimental Finalizer:
--------------------------

because more and more applications have to deal with C/C++ libraries,
LL15.26 offers an experimental feature called a "finalizer". When an
object (vector or typed vector) is reclaimed by the LL's GC, it's
possible to call a user defined function. This function is often used
to free some resources in the C/C++ world.

Interface:
----------

(#:finalize:add-class <class> <function>)

	define a finalizer function <function>
	for the objects of the class <class>

(#:finalize:rem-class <class>)

	remove the finalisation function 
	for the objects of the class <class>

(#:finalize:print-infos)

	print the current associations.


Caveat:
-------

The finalisation functions are called during the GC. It

	o has to be very fast
	o has to be a SUBR1 (always compiled!)
	o cannot allocate dynamic memory (beware of floating point
	  numbers when using the 64bitfloat)

|#


;;;
;;;	The basic machinery
;;;

;;; The association list: ((class . fnt) ...)

(defvar :list-of-finalized-classes ())



;;; Hand coded version of:
;;; 
;;; (defun #:system:finalize-function (vect)
;;;   (let ((slot (assq (typevector vect) :list-of-finalized-classes)))
;;;     (when slot
;;; 	  (funcall (cdr slot) vect))))
;;; 
;;; 
;;; This function is written in LAP because :
;;;  o it has to be very fast
;;;  o this function HAS to be a SUBR1 even at bootstrap times
;;;  o it can't call any other fonction (in particular
;;;    no errors can be raised)


(loader '((fentry #:finalize-function subr1)
	  (mov (cvalq :list-of-finalized-classes) a2)
	  (bfcons a2 109)		; bizarre!
	  (mov (typ a1) a3)		; the vector's type (class name)
	  (bfsymb a3 109)		; only simple object
					; a fast assq (w/o errors)
   101    (mov (car a2) a4)		; a slot
          (cabne (car a4) a3 105)	; test the class name
					; a fast funcall on SUBR1 (w/o errors)
          (mov (cdr a4) a2)		; the function name
          (mov (fval a2) a3)		; the FVAL
	  (cabeq a3 '0 109)		; no more function!
          (bri a3)			; call the class specific function
    105	  (mov (cdr a2) a2)		; next slot
	  (bfnil a2 101)		; end of list!
    109	  (return)))			; return in case of pbs.


(defun :check-all (caller)
  ;; even paranoid people have ennenies ...
  ;; check all the invariants of the finalizer.
  (:check-function caller '#:system:finalize-function)
  (let ((loff :list-of-finalized-classes))
    (while (consp loff)
      (let ((slot (nextl loff)))
	(when (atom slot)
	      (error caller "bad list of finalized classes" slot))
	(:check-class caller (car slot))
	(:check-function caller (cdr slot))))
    (when loff
	  (error caller "bad list of finalized classes" loff))))

(defun :check-function (caller fnt)
  ;; check for the caller <caller> the function <fnt>
  (when (or (not (symbolp fnt))
	    (neq (typefn fnt) 'subr1))
	(error caller "bad function type" fnt)))

(defun :check-class (caller class)
  ;; check for the caller <caller> the class <class>
  (when (not (symbolp class))
	(error caller "bad class name" class)))


;;;
;;;	Interfaces functions
;;;

(defun :add-class (class function)
  (:check-all      ':add-class)
  (:check-class    ':add-class class)
  (:check-function ':add-class function)
  (let ((slot (assq class :list-of-finalized-classes)))
    (if (null slot)
	(newl :list-of-finalized-classes (cons class function))
        (rplacd slot function)))
  (setq #:system:finalize-flag t))

(defun :rem-class (class)
  (:check-all      ':rem-class)
  (:check-all      ':rem-class)
  (:check-class    ':rem-class class)
  (let ((slot (assq class :list-of-finalized-classes)))
    (when slot
	  (setq :list-of-finalized-classes
		(delq slot :list-of-finalized-classes))))
  (when (null :list-of-finalized-classes)
	(setq #:system:finalize-flag ())))

(defun :print-infos ()
  ;; prints various infos on "finalized classes"
  (:check-all ':print-infos)
  (mapc (lambda (slot)
	  (print (car slot) "	" (cdr slot)))
	:list-of-finalized-classes))

