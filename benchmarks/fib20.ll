;;;
;;; FIB20:  The Le-Lisp Benchmarks (1)
;;;
;;; $Source: /usr/cvs/lelisp/benchmarks/fib20.ll,v $
;;; $Date: 2016/05/21 16:28:02 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

;;; (1) FIB20 -- The Fibonnacci Function.


(defun check-fib20 ()
   (check-value '(test-fib20 1) 6765))

(defun meter-fib20 ()
   (perform-meter (fib 20)))

(defun test-fib20 (rep-factor)
   (if (eq rep-factor 1)
       (fib 20)
       (repeat rep-factor (fib 20))))

;;; ------------------------------------------------------------

(defun fib (n)
   (cond ((eq n 1) 1)
         ((eq n 2) 1)
         (t (add (fib (sub1 n)) (fib (sub n 2))))))



