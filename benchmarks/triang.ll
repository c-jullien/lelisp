;;;
;;; TRIANG:  The Le-Lisp Benchmarks (18)
;;;
;;; $Source: /usr/cvs/lelisp/benchmarks/triang.ll,v $
;;; $Date: 2016/05/21 16:28:02 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


;;;; (18) TRIANG -- Board game benchmark.

(defun check-triang ()
   (check-value '(test-triang 1) ()))

(defun meter-triang ()
   (perform-meter (gogogo 22)))

(defun test-triang (n)
   (if (eq n 1)
       (gogogo 22)
       (repeat n (gogogo 22))))


;;; ------------------------------------------------------------


(defun vector-to-list (v)
  ;; convert a vector in a list
   (do ((i (sub1 (vlength v)) (sub1 i)) (l)) ((lt i 0) l)
      (newl l (vref v i))))


(defvar triang-board (makevector 16 1))

(defvar triang-sequence (makevector 14 0))

(defvar triang-a
  (vector
   1 2 4 3 5 6 1 3 6 2 5 4 11 12
   13 7 8 4 4 7 11 8 12 13 6 10
   15 9 14 13 13 14 15 9 10
   6 6))

(defvar triang-b
  (vector
   2 4 7 5 8 9 3 6 10 5 9 8
   12 13 14 8 9 5 2 4 7 5 8
   9 3 6 10 5 9 8 12 13 14
   8 9 5 5))

(defvar triang-c
  (vector
   4 7 11 8 12 13 6 10 15 9 14 13
   13 14 15 9 10 6 1 2 4 3 5 6 1
   3 6 2 5 4 11 12 13 7 8 4 4))

(defvar triang-answer)

(defvar triang-final)

(setf (aref triang-board 5) 0)

(defun triang-last-position ()
  (do ((i 1 (add1 i)))
      ((or
         (eq i 16)
         (eq 1 (aref triang-board i)))
       (if (eq i 16) 0 i))))

(defun triang-try (i depth)
  (cond ((eq depth 14) 
	 (let ((lp (triang-last-position)))
	   (unless (memq lp triang-final)
	     (newl triang-final  lp)))
	 (newl triang-answer (cdr (vector-to-list triang-sequence))) t)
	((and (eq 1 (aref triang-board (aref triang-a i)))
	      (eq 1 (aref triang-board (aref triang-b i)))
	      (eq 0 (aref triang-board (aref triang-c i))))
	 (setf (aref triang-board (aref triang-a i)) 0)
	 (setf (aref triang-board (aref triang-b i)) 0)
	 (setf (aref triang-board (aref triang-c i)) 1)
	 (setf (aref triang-sequence depth) i)
	 (do ((j 0 (add1 j))
	      (depth (add1 depth)))
	     ((or (eq j 36)
		  (triang-try j depth)) 
	      ()))
	 (setf (aref triang-board (aref triang-a i)) 1) 
	 (setf (aref triang-board (aref triang-b i)) 1)
	 (setf (aref triang-board (aref triang-c i)) 0) ())))

(defun gogogo (i)
  (let ((triang-answer ())
	(triang-final ()))
    (triang-try i 1)))

;;; call:  (gogogo 22)

