;;;
;;; DERIV:  The Le-Lisp Benchmarks (12)
;;;
;;; $Source: /usr/cvs/lelisp/benchmarks/deriv.ll,v $
;;; $Date: 2016/05/21 16:28:01 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; File:         deriv.cl
; Description:  The DERIV benchmark from the Gabriel tests.
; Author:       Vaughan Pratt
; Created:      8-Apr-85
; Modified:     10-Apr-85 14:53:50 (Bob Shaw)
; Language:     Common Lisp
; Package:      User
; Status:       Public Domain
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


;;; (12) DERIV -- Symbolic derivative benchmark written by Vaughn Pratt.  
;;; It uses a simple subset of Lisp and does a lot of  CONSing. 

;(defun check-deriv ()
;   (check-value '(test-deriv 1) 7))

(defun check-deriv ()
  (check-value '(deriv '(+ (* 3 x x) (* a x x) (* b x) 5))
	       '(+ (* (* 3 x x) (+ (/ 0 3) (/ 1 x) (/ 1 x)))
		   (* (* a x x) (+ (/ 0 a) (/ 1 x) (/ 1 x)))
		   (* (* b x) (+ (/ 0 b) (/ 1 x))) 0)))
								 
(defun meter-deriv ()
  (perform-meter (deriv-run)))

(defun test-deriv (n)
  (if (eq n 1)
      (deriv-run)
      (repeat n (deriv-run))))


;;; ------------------------------------------------------------

(defun deriv-aux (a) (list '/ (deriv a) a))

(defun deriv (a)
  (cond 
   ((atom a)
    (cond ((eq a 'x) 1) (t 0)))
   ((eq (car a) '+)	
    (cons '+ (mapcar #'deriv (cdr a))))
   ((eq (car a) '-) 
    (cons '- (mapcar #'deriv (cdr a))))
   ((eq (car a) '*)
    (list '* 
	  a 
	  (cons '+ (mapcar #'deriv-aux (cdr a)))))
   ((eq (car a) '/)
    (list '- 
	  (list '/ 
		(deriv (cadr a)) 
		(caddr a))
	  (list '/ 
		(cadr a) 
		(list '*
		      (caddr a)
		      (caddr a)
		      (deriv (caddr a))))))
   (t 'error)))

(defun deriv-run ()
  (repeat 5000
	  (deriv '(+ (* 3 x x) (* a x x) (* b x) 5))))


