;;;
;;; PUZZLE:  The Le-Lisp Benchmarks (17)
;;;
;;; $Source: /usr/cvs/lelisp/benchmarks/puzzle.ll,v $
;;; $Date: 2016/05/21 16:28:02 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

;;; (17) PUZZLE
;;;       -- Forest Baskett's Puzzle benchmark, originally written in Pascal.

(defun check-puzzle ()
   (check-value '(test-puzzle 1) ()))

(defun meter-puzzle ()
   (perform-meter (puzzle-start)))

(defun test-puzzle (n)
   (if (eq n 1)
       (puzzle-start)
       (repeat n (puzzle-start))))

;;; ------------------------------------------------------------

(defvar puzzle-size 511)	
(defvar puzzle-classmax 3)
(defvar puzzle-typemax 12)

(defvar iii 0)
(defvar kount 0)
(defvar puzzle-d 8)

(defvar piececount (makearray (add1 puzzle-classmax) 0))
(defvar puzzle-class (makearray (add1 puzzle-typemax) 0))
(defvar piecemax (makearray (add1 puzzle-typemax) 0))
(defvar puzzle (makearray (add1 puzzle-size) 0))
(defvar puzzle-p (makearray (add1 puzzle-typemax) (add1 puzzle-size) 0))

(defun fit (i j)
  (let ((end (aref piecemax i)))
    (do ((k 0 (add1 k)))
	((or
	  (gt k end)
	  (and (aref puzzle-p i k) (aref puzzle (add j k))))
         (if (gt k end) t ())))))

(defun place (i j)
  (let ((end (aref piecemax i)))
    (do ((k 0 (add1 k)))
	((gt k end))
	(cond ((aref puzzle-p i k) 
	       (aset puzzle (add j k) t))))
    (aset piececount (aref puzzle-class i) 
	  (sub (aref piececount (aref puzzle-class i)) 1))
    (do ((k j (add1 k)))
	((or
          (gt k puzzle-size)
          (not (aref puzzle k)))
	 (if (gt k puzzle-size) 0 k)))))

(defun puzzle-remove (i j)
  (let ((end (aref piecemax i)))
    (do ((k 0 (add1 k)))
	((gt k end))
	(cond ((aref puzzle-p i k)
	       (aset puzzle (add j k) ()))))
    (aset piececount (aref puzzle-class i)
	  (add (aref piececount (aref puzzle-class i)) 1))))

(defun trial (j)
  (let ((k 0))
    (do ((i 0 (add1 i)))
	((or
          (gt i puzzle-typemax)
          (cond ((not (eq (aref piececount (aref puzzle-class i)) 0))
	         (cond ((fit i j)
		        (setq k (place i j))
		        (cond ((or (trial k)
			           (eq k 0))
			       ;;(format t "~%Piece ~4D at ~4D." (+ i 1) (+ k 1))
			       (setq kount (add kount 1))
                               t)
			      (t (puzzle-remove i j) ())))))))
	 (if (gt i puzzle-typemax)
	     (progn
	       (setq kount (add1 kount))
	       ())
             t)))))


(defun definepiece (iclass ii jj kk)
  (let ((index 0))
    (do ((i 0 (add1 i)))
	((gt i ii))
	(do ((j 0 (add1 j)))
	    ((gt j jj))
	    (do ((k 0 (add1 k)))
		((gt k kk))
		(setq index  
		      (add i 
			   (mul puzzle-d 
				(add j 
				     (mul puzzle-d k)))))
		(aset puzzle-p iii index t))))
    (aset puzzle-class iii iclass)
    (aset piecemax iii index) 
    (cond ((not (eq iii puzzle-typemax))
	   (setq iii (add iii 1))))))

(defun puzzle-start ()
  (do ((m 0 (add1 m)))
      ((gt m puzzle-size))
      (aset puzzle m t))
  (do ((i 1 (add1 i)))
      ((gt i 5))
      (do ((j 1 (add1 j)))
	  ((gt j 5))
	  (do ((k 1 (add1 k)))
	      ((gt k 5))
	      (aset puzzle 
		    (add i 
			 (mul puzzle-d 
			      (add j 
				   (mul puzzle-d k))))
		    ())))) 
  (do ((i 0 (add1 i)))
      ((gt i puzzle-typemax))
      (do ((m 0 (add1 m)))
	  ((gt m puzzle-size))
	  (aset puzzle-p i m ())))

  (setq iii 0)
  (definePiece 0 3 1 0)
  (definePiece 0 1 0 3)
  (definePiece 0 0 3 1)
  (definePiece 0 1 3 0)
  (definePiece 0 3 0 1)
  (definePiece 0 0 1 3)
  
  (definePiece 1 2 0 0)
  (definePiece 1 0 2 0)
  (definePiece 1 0 0 2)
  
  (definePiece 2 1 1 0)
  (definePiece 2 1 0 1)
  (definePiece 2 0 1 1)
  
  (definePiece 3 1 1 1)
  
  (aset pieceCount 0 13)
  (aset pieceCount 1 3)
  (aset pieceCount 2 1)
  (aset pieceCount 3 1)
  (let ((m (add1 (mul puzzle-d (add1 puzzle-d))))
	(n 0)
	(kount 0))
    (cond ((fit 0 m) (setq n (place 0 m)))
	  (t (format t "~%Error.")))
    (cond ((trial n) 
	   (format t "Success in ~4D trials.~%" kount))
	  (t (format t "~%Failure.")))))

;;; call:  (puzzle-start)


