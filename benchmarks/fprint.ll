;;;
;;; FRPRINT:  The Le-Lisp Benchmarks
;;;
;;; $Source: /usr/cvs/lelisp/benchmarks/fprint.ll,v $
;;; $Date: 2016/05/24 18:10:37 $
;;; $Revision: 1.3 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; File:         fprint.cl
; Description:  FPRINT benchmark
; Author:       Richard Gabriel
; Created:      11-Apr-85
; Modified:     9-Jul-85 21:11:33 (Bob Shaw); 28-August-88 (P. Kuczynski)
; Language:     Le-Lisp
; Package:      User
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;; FPRINT -- Benchmark to print to a file.

(defvar test-atoms '(abcdef12 cdefgh23 efghij34 ghijkl45 ijklmn56 klmnop67 
			      mnopqr78 opqrst89 qrstuv90 stuvwx01 uvwxyz12 
			      wxyzab23 xyzabc34 \123456ab \234567bc \345678cd 
			      \456789de \567890ef \678901fg \789012gh
			      \890123hi))

(defmacro push (x var)
  `(newl ,var ,x))
(defmacro pop (var)
  `(nextl ,var))

(defun init-aux (m n atoms)
  (cond ((= m 0) (pop atoms))
	(t (do ((i n (sub i 2))
		(a ()))
	       ((lt i 1) a)
	     (push (pop atoms) a)
	     (push (init-aux (sub1 m) n atoms) a)))))

(defun init (m n atoms)
  (let ((atoms (subst () () atoms)))
    (do ((a atoms (cdr a)))
	((null (cdr a)) (rplacd a atoms)))
    (init-aux m n atoms)))

(defvar test-pattern (init 6 6 test-atoms))

(defun fprint ()
  (if (probefile "fprint.tst")  ; seems a little wierd, later calls slower
      (deletefile "fprint.tst"))
  (with ((outchan (openo "fprint.ll.tst")))
	(print test-pattern)
	(close (outchan))) )

(if (probefile "fprint.ll.tst.ll")
    (deletefile "fprint.ll.tst"))

;;; call:  (fprint)

(run-benchmark "Fprint" '(fprint))
