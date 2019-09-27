;;;
;;; FRPOLY:  The Le-Lisp Benchmarks
;;;
;;; $Source: /usr/cvs/lelisp/benchmarks/frpoly.ll,v $
;;; $Date: 2016/05/24 18:10:37 $
;;; $Revision: 1.3 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; File:         frpoly.cl
; Description:  FRPOLY benchmark
; Author:       Richard Gabriel and Richard Fateman
; Created:      11-Apr-85
; Modified:     9-Jul-85 16:23:18 (Bob Shaw); 28-August-88 (P. Kuczynski)
; Language:     Le-Lisp
; Package:      User
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;; FRPOLY -- Benchmark from Berkeley based on polynomial arithmetic.
;;; Originally writen in Franz Lisp by Richard Fateman.
;;; PDIFFER1 appears in the code, but is not defined; is not called for in the
;;; test, however.

(defvar f)
(defvar *i*)
(defvar v)
(defvar *x*)
(defvar *alpha*)
(defvar *a*)
(defvar *b*)
(defvar u*)
(defvar *y*)
(defvar r)
(defvar r2)
(defvar r3)

(defmacro pointergp (x y) `(gt (get ,x 'order) (get ,y 'order)))

(defmacro pcoefp (e) `(atom ,e))

(defmacro pzerop (x) `(if (numberp ,x) (zerop ,x)))		      

(defmacro pzero () 0)

(defmacro cplus (x y) `(add ,x ,y))

(defmacro ctimes (x y) `(* ,x ,y))

(defun pcoefadd (e c x) 
  (if (pzerop c)
      x
      (cons e (cons c x))))

(defun pcplus (c p)
  (if (pcoefp p)
      (cplus p c)
      (psimp (car p) (pcplus1 c (cdr p)))))

(defun pcplus1 (c x)
  (cond ((null x)
	 (if (pzerop c)
	     nil
	     (cons 0 (cons c nil))))
	((pzerop (car x))
	 (pcoefadd 0 (pplus c (cadr x)) nil))
	(t
	 (cons (car x) (cons (cadr x) (pcplus1 c (cddr x)))))))

(defun pctimes (c p) 
  (if (pcoefp p)
      (ctimes c p)
      (psimp (car p) (pctimes1 c (cdr p)))))

(defun pctimes1 (c x)
  (if (null x)
      nil
      (pcoefadd (car x)
		(ptimes c (cadr x))
		(pctimes1 c (cddr x)))))

(defun pplus (x y) 
  (cond ((pcoefp x)
	 (pcplus x y))
	((pcoefp y)
	 (pcplus y x))
	((eq (car x) (car y))
	 (psimp (car x) (pplus1 (cdr y) (cdr x))))
	((pointergp (car x) (car y))
	 (psimp (car x) (pcplus1 y (cdr x))))
	(t
	 (psimp (car y) (pcplus1 x (cdr y))))))

(defun pplus1 (x y)
  (cond ((null x) y)
	((null y) x)
	((= (car x) (car y))
	 (pcoefadd (car x)
		   (pplus (cadr x) (cadr y))
		   (pplus1 (cddr x) (cddr y))))
	((> (car x) (car y))
	 (cons (car x) (cons (cadr x) (pplus1 (cddr x) y))))
	(t (cons (car y) (cons (cadr y) (pplus1 x (cddr y)))))))

(defun psimp (var x)
  (cond ((null x) 0)
	((atom x) x)
	((zerop (car x))
	 (cadr x))
	(t
	 (cons var x))))

(defun ptimes (x y) 
  (cond ((or (pzerop x) (pzerop y))
	 (pzero))
	((pcoefp x)
	 (pctimes x y))
	((pcoefp y)
	 (pctimes y x))
	((eq (car x) (car y))
	 (psimp (car x) (ptimes1 (cdr x) (cdr y))))
	((pointergp (car x) (car y))
	 (psimp (car x) (pctimes1 y (cdr x))))
	(t
	 (psimp (car y) (pctimes1 x (cdr y))))))

(defun ptimes1 (*x* y)
  (let* ((u* (ptimes2 y))
	 (v u*))
    (setq *x* (cddr *x*))
    (while *x*
      (ptimes3 y)
      (setq *x* (cddr *x*)))
    u*))
#|
  (prog (u* v)
	(setq v (setq u* (ptimes2 y)))
     a  
	(setq *x* (cddr *x*))
	(if (null *x*)
	    (return u*))
	(ptimes3 y)
	(go a)))
|#
(defun ptimes2 (y)
  (if (null y)
      nil
      (pcoefadd (+ (car *x*) (car y))
		(ptimes (cadr *x*) (cadr y))
		(ptimes2 (cddr y)))))

(defun ptimes3 (y) 
  (prog (e u c) 
     a1	(if (null y) 
	    (return nil))
	(setq e (+ (car *x*) (car y))
	      c (ptimes (cadr y) (cadr *x*) ))
	(cond ((pzerop c)
	       (setq y (cddr y)) 
	       (go a1))
	      ((or (null v) (> e (car v)))
	       (setq u* (setq v (pplus1 u* (list e c))))
	       (setq y (cddr y))
	       (go a1))
	      ((= e (car v))
	       (setq c (pplus c (cadr v)))
	       (if (pzerop c) 			; never true, evidently
		   (setq u* (setq v (pdiffer1 u* (list (car v) (cadr v)))))
		   (rplaca (cdr v) c))
	       (setq y (cddr y))
	       (go a1)))
     a  (cond ((and (cddr v) (> (caddr v) e))
	       (setq v (cddr v))
	       (go a)))
	(setq u (cdr v))
     b  (if (or (null (cdr u)) (< (cadr u) e))
	    (rplacd u (cons e (cons c (cdr u)))) (go e))
	(cond ((pzerop (setq c (pplus (caddr u) c)))
	       (rplacd u (cdddr u))
	       (go d))
	      (t
	       (rplaca (cddr u) c)))
     e  (setq u (cddr u))
     d  (setq y (cddr y))
	(if (null y)
	    (return nil))
	(setq e (+ (car *x*) (car y))
	      c (ptimes (cadr y) (cadr *x*)))
     c  (cond ((and (cdr u) (> (cadr u) e))
	       (setq u (cddr u))
	       (go c)))
	(go b))) 

(defun pexptsq (p n)
  (do ((n (quo n 2) ; (floor x 2) = (quo x 2)
	  (quo n 2))
       (s (if (oddp n) p 1)))
      ((zerop n) s)
    (setq p (ptimes p p))
    (and (oddp n) (setq s (ptimes s p)))))

(putprop 'x 1 'order)
(putprop 'y 2 'order)
(putprop 'z 3 'order)

(setq r (pplus '(x 1 1 0 1) (pplus '(y 1 1) '(z 1 1)))	; r= x+y+z+1
      r2 (ptimes r 100000)				; r2 = 100000*r
      r3 (ptimes r 1.0)))				; r3 = r in flonums

;;; four sets of three tests, call:
;;; (pexptsq r 2) (pexptsq r2 2) (pexptsq r3 2) 
;;; (pexptsq r 5) (pexptsq r2 5) (pexptsq r3 5)
;;; (pexptsq r 10) (pexptsq r2 10) (pexptsq r3 10)
;;; (pexptsq r 15) (pexptsq r2 15) (pexptsq r3 15)

(run-benchmark "Frpoly Power=2 r=x+y+z+1" '(pexptsq r  2)
	       '(z 2 1 1 (y 1 1 0 (x 1 1 0 1)) 0 (y 2 2 1 (x 1 2 0 2) 0 (x 2 4 1 4 0 12))))
(run-benchmark "Frpoly Power=2 r2=1000r" '(pexptsq r2 2)
	       '(z 2 9999999000. 1
		   (y 1 9999999000. 0
		      (x 1 9999999000. 0 9999999000.))
		   0
		   (y 2 9933668000. 1
		      (x 1 9933668000. 0 9933668000.)
		      0
		      (x 2 9935225000. 1 9935225000. 0 9941451000.))) )
(run-benchmark "Frpoly Power=2 r3=r in flonums" '(pexptsq r3 2)
	       '(z 2 1. 1 (y 1 1. 0 (x 1 1. 0 1.))
		   0 (y 2 1. 1 (x 1 1. 0 1.)
			0 (x 2 1. 1 1. 0 1.))) )
(run-benchmark "Frpoly Power=5 r=x+y+z+1" '(pexptsq r  5)
	       '(z 5 1 4 (y 1 1 0 (x 1 1 0 1))
		   3 (y 2 2 1 (x 1 2 0 2) 0 (x 2 4 1 4 0 12))
		   2 (y 3 4 2 (x 1 4 0 4) 1 (x 2 8 1 8 0 24)
			0 (x 3 16 2 16 1 48 0 144))
		   1 (y 4 8 3 (x 1 8 0 8) 2 (x 2 16 1 16 0 48)
			1 (x 3 32 2 32 1 96 0 288) 0
			(x 4 64 3 64 2 192 1 576 0 1728))
		   0 (y 5 16 4 (x 1 16 0 16) 3 (x 2 32 1 32 0 96)
			2 (x 3 64 2 64 1 192 0 576) 1
			(x 4 128 3 128 2 384 1 1152 0 3456)
			0 (x 5 256 4 256 3 768 2 2304 1 6912 0 20736))) )
(run-benchmark "Frpoly Power=5 r2=1000r" '(pexptsq r2 5)
	       '(z 5 9.999996e+24 4
		   (y 1 9.999996e+24 0
		      (x 1 9.999996e+24 0 9.999996e+24))
		   3 (y 2 9.933666e+24 1 (x 1 9.933666e+24 0 9.933666e+24)
			0 (x 2 9.935223e+24 1 9.935223e+24 0 9.941448e+24))
		   2 (y 3 9.95221e+24 2 (x 1 9.95221e+24 0 9.95221e+24)
			1 (x 2 9.989292e+24 1 9.989292e+24 0 1.002234e+25)
			0 (x 3 9.99552e+24 2 9.99552e+24 1 1.002042e+25
			     0 1.000044e+25))
		   1 (y 4 9.820426e+24 3 (x 1 9.820426e+24 0 9.820426e+24)
			2 (x 2 9.823518e+24 1 9.823518e+24 0 9.835889e+24)
			1 (x 3 9.847204e+24 2 9.847204e+24 1 9.826657e+24
			     0 9.900882e+24)
			0 (x 4 9.853391e+24 3 9.853391e+24 2 9.878132e+24
			     1 9.804145e+24 0 9.878434e+24))
		   0 (y 5 9.81833e+24 4 (x 1 9.81833e+24 0 9.81833e+24)
			3 (x 2 9.814138e+24 1 9.814138e+24 0 9.79737e+24)
			2 (x 3 9.826507e+24 2 9.826507e+24 1 9.87599e+24
			     0 9.83181e+24)
			1 (x 4 9.921249e+24 3 9.921249e+24 2 9.83906e+24 
			     1 9.833729e+24 0 9.856141e+24)
			0 (x 5 9.945996e+24 4 9.945996e+24 3 9.893847e+24
			     2 9.749012e+24 1 9.895055e+24 0 9.889004e+24))) )
(run-benchmark "Frpoly Power=5 r3=r in flonums" '(pexptsq r3 5)
	       '(z 5 1. 4 (y 1 1. 0 (x 1 1. 0 1.))
		   3 (y 2 1. 1 (x 1 1. 0 1.)
			0 (x 2 1. 1 1. 0 1.))
		   2 (y 3 1. 2 (x 1 1. 0 1.)
			1 (x 2 1. 1 1. 0 1.)
			0 (x 3 1. 2 1. 1 1. 0 1.))
		   1 (y 4 1. 3 (x 1 1. 0 1.)
			2 (x 2 1. 1 1. 0 1.)
			1 (x 3 1. 2 1. 1 1. 0 1.)
			0 (x 4 1. 3 1. 2 1. 1 1. 0 1.))
		   0 (y 5 1. 4 (x 1 1. 0 1.)
			3 (x 2 1. 1 1. 0 1.)
			2 (x 3 1. 2 1. 1 1. 0 1.)
			1 (x 4 1. 3 1. 2 1. 1 1. 0 1.)
			0 (x 5 1. 4 1. 3 1. 2 1. 1 1. 0 1.))) )

(run-benchmark "Frpoly Power=10 r=x+y+z+1" '(pexptsq r  10) )
(run-benchmark "Frpoly Power=10 r2=1000r" '(pexptsq r2 10))
(run-benchmark "Frpoly Power=10 r3=r in flonums" '(pexptsq r3 10))

(run-benchmark "Frpoly Power=15 r=x+y+z+1" '(pexptsq r  15))
(run-benchmark "Frpoly Power=15 r2=1000r" '(pexptsq r2 15))
(run-benchmark "Frpoly Power=15 r3=r in flonums" '(pexptsq r3 15))

