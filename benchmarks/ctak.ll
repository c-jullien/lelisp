;;;
;;; CTAK:  The Le-Lisp Benchmarks (4)
;;;
;;; $Source: /usr/cvs/lelisp/benchmarks/ctak.ll,v $
;;; $Date: 2016/05/21 16:28:01 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

;;; (4) CTAK -- Version of TAK that uses CATCH and THROW.


(defun check-ctak ()
  (check-value '(test-ctak 1) 7))

(defun meter-ctak ()
  (perform-meter (ctak 18 12 6)))

(defun test-ctak (n)
  (if (eq n 1)
      (ctak 18 12 6)
      (repeat n (ctak 18 12 6))))


;;; ------------------------------------------------------------

(defun ctak (x y z)
  (tag ctak-aux (ctak-aux x y z)))

(defun ctak-aux (x y z)
  (if (not (lt y x))
      (exit ctak-aux z)
      (ctak-aux (tag ctak-aux (ctak-aux (sub1 x) y z))
		(tag ctak-aux (ctak-aux (sub1 y) z x))
		(tag ctak-aux (ctak-aux (sub1 z) x y)))))
