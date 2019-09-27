;;;
;;; TAKL:  The Le-Lisp Benchmarks (5)
;;;
;;; $Source: /usr/cvs/lelisp/benchmarks/takl.ll,v $
;;; $Date: 2016/05/21 16:28:02 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


;;; (5) TAKL -- Like TAK, but without any explicit arithmetic.


(defun check-takl ()
   (check-value '(test-takl 1) '(7 6 5 4 3 2 1)))

(defun meter-takl ()
   (perform-meter (takl ll-18 ll-12 ll-6)))

(defun test-takl (n)
   (if (eq n 1)
       (takl ll-18 ll-12 ll-6)
       (repeat n (takl ll-18 ll-12 ll-6))))


;;; ------------------------------------------------------------

(defun listn (n)
   (unless (eq 0 n)
	   (cons n (listn (sub1 n)))))

(defvar ll-18 (listn 18))
(defvar ll-12 (listn 12))
(defvar ll-6  (listn 6))

(defun takl (x y z)
   (if (not (shorterp y x))
       z
       (takl (takl (cdr x) y z)
	     (takl (cdr y) z x)
	     (takl (cdr z) x y))))

(defun shorterp  (x y)
   (when y
	 (if x
	     (shorterp (cdr x) (cdr y))
	     t)))
