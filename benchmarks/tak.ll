;;;
;;; TAK:  The Le-Lisp Benchmarks (2)
;;;
;;; $Source: /usr/cvs/lelisp/benchmarks/tak.ll,v $
;;; $Date: 2016/05/21 16:28:02 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


;;; (2) TAK -- Variant of the Takeuchi function, function-call-heavy.


(defun check-tak ()
   (check-value '(test-tak 1) 7))

(defun meter-tak ()
   (perform-meter (tak 18 12 6)))

(defun test-tak (n)
   (if (eq n 1)
       (tak 18 12 6)
       (repeat n (tak 18 12 6))))


;;; ------------------------------------------------------------

(defun tak (x y z)
   (if (not (lt y x))
       z
       (tak (tak (sub1 x) y z)
	    (tak (sub1 y) z x)
	    (tak (sub1 z) x y))))
