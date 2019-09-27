;;;
;;; LIBCIR:  Library on Circular Objects
;;;
;;; $Source: /usr/cvs/lelisp/llib/libcir.ll,v $
;;; $Date: 2016/05/21 10:36:05 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


(unless (>= (version) 15.2)
        (error 'load 'erricf 'libcir))

(defvar #:sys-package:colon 'libcir)

(add-feature 'libcir)

;;;
;;;
;;;

(ifn (boundp ':package-parano) (defvar :package-parano ()))

(defvar :old)				; the new label
(defvar :new)				; the labeled object
(defvar :seen)				; keep the list of all the 
                                        ;   visited objects.

;;;
;;; Printing of Circular Objects
;;;

(defun cirprint (:x) (cirprin :x) (print))

(defun cirprinflush (:x) (cirprin :x) (prinflush))

;;; A first pass to keep track of loops, another to print
;;; with the syntax:  #<n>= and #<n>#

(defun cirprin (:x)
  (let ((:shared))
    (let ((:seen)) (:sweep :x))
    (setq :shared (nreverse :shared))
    (if :shared (let ((:seen)) (:prin :x)) (prin :x))))

(defun :sweep (:x)
  (cond
   ((and (consp :x) (:unshared :x)) 
    (:sweep (car :x)) (:sweep (cdr :x)))
   ((and (stringp :x) (:unshared :x))
    (:sweep (typestring :x)))
   ((and (vectorp :x) (:unshared :x))
    (mapvector ':sweep :x)
    (if (neq (typevector :x) 'vector) (:sweep (typevector :x))))
   ((and :package-parano (symbolp :x) (packagecell :x) (:unshared :x))
    (:sweep (packagecell :x)))))

(defun :unshared (:x)
  (let ((:is-seen (memq :x :seen)))
    (ifn :is-seen (newl :seen :x))
    (if (and :is-seen (not (memq :x :shared))) (newl :shared :x))
    (not :is-seen)))

(defun :prin (:x)
  (let ((:is-shared (memq :x :shared)))
    (if :is-shared
	(:prin-sharp :x (length :is-shared) (memq :x :seen))
      (:prin1 :x))))

(defun :prin-sharp (:x :n :not-first)
  (if :not-first
      (:prin-one (cons '#/# (nconc1 (pname :n) '#/#)))
      (:prin-one (cons '#/# (nconc1 (pname :n) '#/=)))
      (newl :seen :x)
      (:prin1 :x)))

(defun :prin1 (:x)
  (cond
   ((tconsp :x)
    (:prin-one '(#/# #/())
    (:prin (car :x))
    (:prin-cdr (cdr :x)))
   ((consp :x)
    (princn #/() (:prin (car :x)) (:prin-cdr (cdr :x)))
   ((vectorp :x)
    (when (neq (typevector :x) 'vector)
	  (:prin-one '(#/# #/:))
	  (:prin (typevector :x))
	  (:prin-one '(#/:)))
    (:prin-one '(#/# #/[))
    (mapvector (lambda (:x) (:prin :x) (princn #\sp))  ; pas parfait
	       :x)
    (princn #/]))
   ((and (stringp :x) (neq (typestring :x) 'string))
    (:prin-one '(#/# #/:))
    (:prin (typestring :x))
    (:prin-one '(#/:))
    (prin (catenate :x "")))
   ((and :package-parano (symbolp :x) (packagecell :x))
    (:prin-one '(#/# #/:))
    (:prin (packagecell :x))
    (princn #/:)
    (prin (symbol () :x)))
   (t (prin :x))))

(defun :prin-cdr (:x)
  (cond
   ((null :x) (princn #/)))        ; (
   ((or (atomp :x) (tconsp :x) (memq :x :shared))
    (:prin-one '(#\sp #/. #\sp))
    (:prin :x)
    (princn #/)))                        ; (
   (t (princn #\sp) (:prin (car :x)) (:prin-cdr (cdr :x)))))

(defun :prin-one (:l)
  ;; print a list of character codes.
  ;; Ensure that all the charcodes are printed on the same line.
  (when (ge (length :l) (sub (rmargin) (outpos)))
	(terpri))
  (mapc 'princn :l))

;;;
;;; Read a Circular Object
;;;

(defvar :shared)
(defvar :shared-length)

(defsharp |=| (:n)
  (ifn (and (boundp ':shared) (vectorp :shared))
       (setq :shared #[()] :shared-length 1))
  (while (>= :n :shared-length) (:double))
  (let ((:old (ncons :n)))
    (vset :shared :n :old)
    (let ((:new (read))(:seen))
      (vset :shared :n :new)
      (:replace :new)
      (list :new))))

(defsharp |#| (:n)
  (list (vref :shared :n)))

(defun :double ()
  (let ((:dbnew (makevector (+ :shared-length :shared-length) ())))
    (bltvector :dbnew 0 :shared 0 :shared-length)
    (setq :shared :dbnew :shared-length
	  (+ :shared-length :shared-length))))

(defun :replace (:x)
  (cond
   ((memq :x :seen))
   ((consp :x)
    (newl :seen :x)
    (if (eq (car :x) :old) (rplaca :x :new) (:replace (car :x)))
    (if (eq (cdr :x) :old) (rplacd :x :new) (:replace (cdr :x))))
   ((and :package-parano (symbolp :x) (packagecell :x))
    (newl :seen :x)
    (if (eq (packagecell :x) :old)
	(packagecell :x :new)
      (:replace (packagecell :x))))
   ((and (stringp :x) (neq (typestring :x) 'string))
    (newl :seen :x)
    (if (eq (typestring :x) :old)
	(typestring :x :new)
      (:replace (typestring :x))))
   ((vectorp :x)
    (newl :seen :x)
    (if (neq (typevector :x) 'vector)
	(if (eq (typevector :x) :old)
	    (typevector :x :new)
	    (:replace (typevector :x))))
    (for (:i 0 1 (1- (vlength :x)))
	 (if (eq (vref :x :i) :old)
	     (vset :x :i :new)
	   (:replace (vref :x :i)))))))

;;;
;;; Equality on Circular Objects
;;;

(defun cirnequal (:x :y) (not (cirequal :x :y)))

(defun cirequal (:x :y)
  (tag :no
       (let ((:seen1)(:seen2))
	 (:equal :x :y) t)))

(defun :equal (:x :y)
  (cond
   ((eq :x :y))
   ((memq :x :seen1)
    (ifn (eq (length (memq :x :seen1)) (length (memq :y :seen2)))
	 (exit :no ())))
   ((tconsp :x)
    (ifn (tconsp :y) (exit :no ()))
    (newl :seen1 :x) (newl :seen2 :y)
    (:equal (car :x) (car :y))
    (:equal (cdr :x) (cdr :y)))
   ((consp :x)
    (ifn (and (consp :y) (not (tconsp :y))) (exit :no ()))
    (newl :seen1 :x) (newl :seen2 :y)
    (:equal (car :x) (car :y))
    (:equal (cdr :x) (cdr :y)))
   ((vectorp :x)           ; strnigs are hadled by EQUAL
    (ifn (and (vectorp :y) (eq (vlength :x) (vlength :y)))
	 (exit :no ()))
    (ifn (eq (typevector :x) (typevector :y)) (exit :no ()))
    (newl :seen1 :x) (newl :seen2 :y)
    (for (:i 0 1 (1- (vlength :x)))
	 (:equal (vref :x :i) (vref :y :i))))
   ((and :package-parano (symbolp :x) (packagecell :x))
    (ifn (and (symbolp :y) (packagecell :y)) (exit :no ()))
    (newl :seen1 :x) (newl :seen2 :y)
    (:equal (packagecell :x) (packagecell :y)))
   (t (ifn (equal :x :y) (exit :no ())))))


;;;
;;; Copy of Circular Objects
;;;

(defun circopy (:x)
  (let ((:seen)(:copied))
    (:copy :x)))

(defun :copy (:x)
  (cond
   ((memq :x :seen)
    (car (lastn (length (memq :x :seen)) :copied)))
   ((tconsp :x)
    (newl :seen :x)
    (let ((:cpnew (tcons () ())))
      (newl :copied :cpnew)
      (rplaca :cpnew (:copy (car :x)))
      (rplacd :cpnew (:copy (cdr :x)))
      :cpnew))
   ((consp :x)
    (newl :seen :x)
    (let ((:cpnew (ncons ())))
      (newl :copied :cpnew)
      (rplaca :cpnew (:copy (car :x)))
      (rplacd :cpnew (:copy (cdr :x)))
      :cpnew))
   ((vectorp :x)
    (newl :seen :x)
    (let ((:cpnew (makevector (vlength :x) ())))
      (newl :copied :cpnew)
      (for (:i 0 1 (1- (vlength :x)))
	   (vset :cpnew :i (:copy (vref :x :i))))
      (if (neq (typevector :x) 'vector)
	  (typevector :cpnew (typevector :x)))
      :cpnew))
   (t (copy :x))))


;;;
;;; Tests
;;;

#|
    (setq a '(1 2 3))
    (rplaca (cdr a) (cdr a))
    (rplacd (cddr a) a)
    (cirprint a)                ; -> #1=(1 . #2=(#2# #1#))
    (cirequal a (read))
    '#1=(1 . #2=(#2# #1#))
    (cirequal a (circopy a))
|#
