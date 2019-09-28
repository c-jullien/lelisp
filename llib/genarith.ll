;;;
;;; GENARITH:  The Standard Generic Arithmetics
;;;
;;; $Source: /usr/cvs/lelisp/llib/genarith.ll,v $
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
        (error 'load 'erricf 'genarith))

;;; This module transforms all the generic arithmetic calls
;;; in mixed arithmetics. We have to define the following
;;; methods: +, -, 0-, *, /, 1/

;;; These methods are always called with arguments of type "fix",
;;; because the regular generic functions have done a floating point
;;; propagation.

(defun #:genarith:+ (n1 n2)
  (if (and (fixp n1) (fixp n2))
      (fadd (float n1) (float n2))
      (#:genarith:error '+ n1 n2)))

(defun #:genarith:- (n1 n2)
  (if (and (fixp n1) (fixp n2))
      (fsub (float n1) (float n2))
      (#:genarith:error '- n1 n2)))

(defun #:genarith:0- (n)
  (if (fixp n)
      (fsub 0.0 (float n))
      (#:genarith:error '0- n)))

(defun #:genarith:* (n1 n2)
  (if (and (fixp n1) (fixp n2))
      (fmul (float n1) (float n2))
      (#:genarith:error '* n1 n2)))

(defun #:genarith:/ (n1 n2)
  (if (and (fixp n1) (fixp n2))
      (if (eqn 0 n2)
	  (error '/ 'err0dv (list n1 n2))
	  (fdiv (float n1) (float n2)))
      (#:genarith:error '/ n1 n2)))

(defun #:genarith:1/ (n)
  (if (fixp n)
      (if (eqn n 0)
	  (error '1/ 'err0dv n)
	  (fdiv 1.0 (float n)))
      (#:genarith:error '1/ n)))


;;; A canonical  QUOTIENT/QUOMOD (courtesy of Jean Vuillemin)

(defvar #:ex:mod 0)

(defun #:genarith:quomod (n1 n2)
  (let ((q (floor (/ n1 (abs n2)))))
    (setq #:ex:mod (- n1 (* (abs n2) q)))
    (if (< n2 0) (- q) q)))


;;; Set the #:sys-package:genarith ItSoft.


(defun #:genarith:error (f . l)
  (while l
    (if (or (fixp (car l)) (floatp (car l)))
	(nextl l)
        (error f 'ERRNNA (car l)))))

(defvar #:sys-package:genarith 'genarith)


;;; The 4 float->fix generic converters (the 1rst is "truncate")

(defun floor (r)
  ;; returns the biggest z with z<=r
  (ifn (numberp r)
       (error 'floor 'ERRNNA r)
       (let ((z (truncate r)))
	 (if (> z r)
	     (- z 1)
	     z))))

(defun ceiling (r) 
  (let ((z (floor r))) 
    (if (< z r)
	(+ z 1)
        z)))

;;; n=dq+r -d<2r<=d  or -d-r<r<=d-r

(defun round (n d)
  (cond ((< d 0) (0- (round n (0- d))))
	((< n 0)
	 (if (= #:ex:mod (- d #:ex:mod))
	     (- -1 (round (0- n) d)) 
	     (setq n (0- (round (0- n) d)) #:ex:mod (0- #:ex:mod))
	     n))
	((setq n (quotient n d) d (- d #:ex:mod))
	 (if (< d #:ex:mod)
	     (setq #:ex:mod (0- d) n (+ 1 n))
	   n)))))

