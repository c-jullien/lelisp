;;;
;;; FFT:  The Le-Lisp Benchmarks (16)
;;;
;;; $Source: /usr/cvs/lelisp/benchmarks/fft.ll,v $
;;; $Date: 2016/05/21 16:28:02 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; File:         fft.cl
; Description:  FFT benchmark from the Gabriel tests.
; Author:       Harry Barrow
; Created:      8-Apr-85
; Modified:     6-May-85 09:29:22 (Bob Shaw)/ 25-August-88 (P. Kuczynski)
; Language:     
; Package:      User
; Status:       Public Domain
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;; (16) FFT -- This is an FFT benchmark written by Harry Barrow.
;;; It tests a variety of floating point operations,
;;; including array references.

(defun check-fft ()
   (check-value '(test-fft 1) t))

(defun meter-fft ()
   (perform-meter (fft-bench)))

(defun test-fft (n)
   (if (eq n 1)
       (fft-bench)
       (repeat n (fft-bench))))


;;; ------------------------------------------------------------

(defvar *re* (makevector 1025 0.0))

(defvar *im* (makevector 1025 0.0))

(defvar pi 3.1415926635)

(unless (boundp 'verif)(defvar verif ()))

(defun ipower (a b) 
  ;; b always > 0
  (if (eqn b 1) a
    (mul (ipower a (sub1 b))
	 a)))

(defun fft (ar ai)
  (let ((n (sub1 (vlength ar))))
    (let ((nv2 (div n 2)) ; (div x 2) = (floor x 2)
	  (nm1 (sub1 n))
	  (m 0)
	  (i 1)
	  j)
      (while (lt i n)
	(setq m (add1 m)
	      i (add i i)))
      (ifn (eqn n (ipower 2 m))
	   (progn
	     (prin "error ... array size not a power of two.")
	     (read)
	     (terpri))
	   ;; interchange elements in bit-reversed order
	   (setq j 1 i 1)
	   (while (lt i n) ;; the test has to be done at the end but we start
                 	   ;;  with i << n
	     (when (lt i j)
		   (let ((tr (vref ar j))
			 (ti (vref ai j)))
		     (vset ar j (vref ar i))
		     (vset ai j (vref ai i))
		     (vset ar i tr)
		     (vset ai i ti)) )
	     (let ((k nv2))
	       (while (lt k j)
		 (setq j (sub j k)
		       k (div k 2)))
	       (setq j (add j k)
		     i (add1 i)))
	     )
	   (let ((l 1))
	     (while (le l m)
	       (let ((le (ipower 2 l))
		     (ur 1.0)
		     (ui 0.0))
		 (let* ((le1 (div le 2))
			(wr (cos (fdiv pi (float le1))))
			(wi (sin (fdiv pi (float le1)))) )
		   (let ((j 1))
		     (while (le j le1)
		       (let ((i j))
			 (while (le i n)
			   (let ((ip (add i le1)))
			     (let ((tr (fsub (fmul (aref ar ip)  ur)
					     (fmul (aref ai ip)  ui)) )
				   (ti (fadd (fmul (aref ar ip)  ur)
					     (fmul (aref ai ip)  ui)) ))
			       (vset ar ip (fsub (vref ar i) tr))
			       (vset ai ip (fsub (vref ai i) ti))
			       (vset ar i (fadd (vref ar i) tr))
			       (vset ai i (fadd (vref ai i) ti)) ))
			   (setq i (add i le)) ))
		       (setq j (add1 j)) ))
		    
		   (psetq ur (fsub (fmul ur wr) (fmul ui wi))
			  ui (fadd (fmul ur wi) (fmul ui wr)))
 #+ verif (print "End of DO: ur=" ur ", ui=" ui)
 ))
	       (setq l (add1 l))) );do
	   )))
  t);  (return t)

;;; the timer which does 10 calls on fft

(defun fft-bench ()
   (repeat 10 (fft *re* *im*)))


(defun fft-test ()
  (setq verif t)
  (load "fft2.ll")
  (fft *re* *im*)
  (print "Ces resultats sont a` comparer avec la Re'fe'rence ci-apre`s:")
  (print "End of DO: ur=-1., ui=1.509958e-07")
  (print "End of DO: ur=7.549789e-08, ui=1.")
  (print "End of DO: ur=.7071068, ui=.7071067")
  (print "End of DO: ur=.9238795, ui=.3826834")
  (print "End of DO: ur=.9807853, ui=.1950903")
  (print "End of DO: ur=.9951847, ui=.09801713")
  (print "End of DO: ur=.9987954, ui=.04906767")
  (print "End of DO: ur=.9996988, ui=.02454123")
  (print "End of DO: ur=.9999247, ui=.01227154")
  (print "End of DO: ur=.9999812, ui=.006135884")
  (setq verif ())
  )

;;; call:  (fft-bench)
;;; test:  (fft-test)

;(run-benchmark "FFT" '(fft-bench))
