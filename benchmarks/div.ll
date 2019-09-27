;;;
;;; DIV:  The Le-Lisp Benchmarks (14 - 15)
;;;
;;; $Source: /usr/cvs/lelisp/benchmarks/div.ll,v $
;;; $Date: 2016/05/24 18:10:37 $
;;; $Revision: 1.3 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; File:         div.cl
; Description:  DIV benchmarks
; Author:       Richard Gabriel
; Created:      8-Apr-85
; Modified:     19-Jul-85 18:28:01 (Bob Shaw); 28-August-88 (P.Kuczynski)
; Language:     Le-Lisp
; Package:      User
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;; (14-15) DIV2 -- Benchmark which divides by 2 using lists of n ()'s.
;;; This file contains a recursive as well as an iterative test.

(defun check-div2iter ()
  (check-value '(iterative-div2 *ll*) (makelist 100 ())))

(defun meter-div2iter ()
  (perform-meter (test-1 *ll*)))

(defun test-div2iter (n)
  (if (eq n 1)
      (test-1 *ll*)
      (repeat n (test-1 *ll*))))

(defun check-div2rec ()
  (check-value '(recursive-div2 *ll*) (makelist 100 ())))

(defun meter-div2rec ()
  (perform-meter (test-2 *ll*)))

(defun test-div2rec (n)
  (if (eq n 1)
      (test-2 *ll*)
      (repeat n (test-2 *ll*))))

;;; ------------------------------------------------------------

(defun create-n (n)
  (let ((a ()))
    (repeat n (setq a (cons () a)))
    a))

(defvar *ll* (create-n 200))

(defun iterative-div2 (l)
  (iterative-div2-aux l () ))

(defun iterative-div2-aux (l a)
  (if (null l)
      a
      (iterative-div2-aux  (cddr l) (cons (car l) a) )))

(defun recursive-div2 (l)
  (cond ((null l) ())
	(t (cons (car l) (recursive-div2 (cddr l))))))

(defun test-1 (l)
  (repeat 1200
	  (iterative-div2 l)))

(defun test-2 (l)
  (repeat 1200
	  (recursive-div2 l)))


;;; for the iterative test call: (test-1 *ll*)
;;; for the recursive test call: (test-2 *ll*)

;(run-benchmark "Div-iter" '(test-1 *ll*))
;(run-benchmark "Div-rec" '(test-2 *ll*))

