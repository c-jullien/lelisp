;;;
;;; STAK:  The Le-Lisp Benchmarks (3)
;;;
;;; $Source: /usr/cvs/lelisp/benchmarks/stak.ll,v $
;;; $Date: 2016/05/21 16:28:02 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


;;; (3) STAK -- Version of TAK that uses special binding to pass arguments.


(defun check-stak ()
   (check-value '(test-stak 1) 7))

(defun meter-stak ()
   (perform-meter (stak 18 12 6)))

(defun test-stak (n)
   (if (eq n 1)
       (stak 18 12 6)
       (repeat n (stak 18 12 6))))


;;; ------------------------------------------------------------

(defvar stak-x ())
(defvar stak-y ())
(defvar stak-z ())

(defun stak (stak-x stak-y stak-z)
  (stak-aux))

(defun stak-aux ()
  (if (not (lt stak-y stak-x))
      stak-z
      (let ((stak-x (let ((stak-x (sub1 stak-x)) 
			  (stak-y stak-y)
			  (stak-z stak-z))
		      (stak-aux)))
	    (stak-y (let ((stak-x (sub1 stak-y))
			  (stak-y stak-z)
			  (stak-z stak-x))
		      (stak-aux)))
	    (stak-z (let ((stak-x (sub1 stak-z))
			  (stak-y stak-x)
			  (stak-z stak-y))
		      (stak-aux))))
	(stak-aux))))


