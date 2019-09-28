;;;
;;; DDERIV:  The Le-Lisp Benchmarks (13)
;;;
;;; $Source: /usr/cvs/lelisp/benchmarks/dderiv.ll,v $
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
; File:         dderiv.cl
; Description:  DDERIV benchmark from the Gabriel tests
; Author:       Vaughan Pratt
; Created:      8-Apr-85
; Modified:     10-Apr-85 14:53:29 (Bob Shaw) 25-August-88 (P. Kuczynski)
; Language:     Le-Lisp
; Package:      User
; Status:       Public domain
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;; (13) DDERIV -- Symbolic derivative benchmark written by Vaughn Pratt.  

;;; This benchmark is a variant of the simple symbolic derivative program 
;;; (DERIV). The main change is that it is `table-driven.'  Instead of using a
;;; large COND that branches on the CAR of the expression, this program finds
;;; the code that will take the derivative on the property list of the atom in
;;; the CAR position. So, when the expression is (+ . <rest>), the code
;;; stored under the atom '+ with indicator DERIV will take <rest> and
;;; return the derivative for '+. The way that MacLisp does this is with the
;;; special form: (DEFUN (FOO BAR) ...). This is exactly like DEFUN with an
;;; atomic name in that it expects an argument list and the compiler compiles
;;; code, but the name of the function with that code is stored on the
;;; property list of FOO under the indicator BAR, in this case. You may have
;;; to do something like:
;;; :property keyword is not Common Lisp.


(defun check-dderiv ()
  (check-value '(dderiv '(+ (* 3 x x) (* a x x) (* b x) 5))
	       '(+ (* (* 3 x x) (+ (/ 0 3) (/ 1 x) (/ 1 x)))
                   (* (* a x x) (+ (/ 0 a) (/ 1 x) (/ 1 x)))
                   (* (* b x) (+ (/ 0 b) (/ 1 x))) 0)))

(defun meter-dderiv ()
  (perform-meter (dderiv-run)))

(defun test-dderiv (n)
  (if (eq n 1)
      (dderiv-run)
      (repeat n (dderiv-run))))


;;; ------------------------------------------------------------

(defun dderiv-aux (a) 
  (list '/ (dderiv a) a))

(defun +dderiv (a)
  (cons '+ (mapcar 'dderiv a)))

(putprop '+ '+dderiv 'dderiv)    ; install function on the property list

(defun -dderiv (a)
  (cons '- (mapcar 'dderiv a)))

(putprop '- '-dderiv 'dderiv)    ; install function on the property list

(defun *dderiv (a)
  (list '* (cons '* a)
	(cons '+ (mapcar #'dderiv-aux a))))

(putprop '* '*dderiv 'dderiv)    ; install function on the property list

(defun /dderiv (a)
  (list '- 
	(list '/ 
	      (dderiv (car a)) 
	      (cadr a))
	(list '/ 
	      (car a) 
	      (list '*
		    (cadr a)
		    (cadr a)
		    (dderiv (cadr a))))))

(putprop '/ '/dderiv 'dderiv)    ; install function on the property list


(defun dderiv (a)
  (cond ((atom a)
	 (cond ((eq a 'x) 1) (t 0)))
	(t (let ((dderiv-var (get (car a) 'dderiv)))
	     (cond (dderiv-var (funcall dderiv-var (cdr a)))
		   (t 'error))))))


(defun dderiv-run ()
  (repeat 5000
	  (dderiv '(+ (* 3 x x) (* a x x) (* b x) 5))))



