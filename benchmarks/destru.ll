;;;
;;; DESTRU:  The Le-Lisp Benchmarks (9)
;;;
;;; $Source: /usr/cvs/lelisp/benchmarks/destru.ll,v $
;;; $Date: 2016/05/21 16:28:01 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


;;; (9) DESTRU -- Destructive operation benchmark.
			

(defun check-destru ()
   (check-value '(test-destru 1) () ))

(defun meter-destru ()
   (perform-meter (destructive 600 50)))

(defun test-destru (n)
   (if (eq n 1)
       (destructive 600 50)
       (repeat n (destructive 600 50))))


;;; ------------------------------------------------------------

(defun destructive (n m)
  (let ((l (do ((i 10 (sub1 i))		
		(a () (cons () a)))
	       ((eq i 0) a))))
    (do ((i n (sub1 i)))
	((eq i 0))
      (cond ((null (car l))
	     (do ((l l (cdr l)))
		 ((null l))
	       (or (car l) 
		   (rplaca l (cons () ())))
	       (nconc (car l)
		      (do ((j m (sub1 j))
			   (a () (cons () a)))
			  ((eq j 0) a)))))
	    (t
	     (do ((l1 l (cdr l1))
		  (l2 (cdr l) (cdr l2)))
		 ((null l2))
	       (rplacd (do ((j (logshift (length (car l2)) -1) 
			       (sub1 j))
			    (a (car l2) (cdr a)))
			   ((eq j 0) a)
			 (rplaca a i))
		       (let ((n (logshift (length (car l1)) -1)))
			 (cond ((eq n 0) (rplaca l1 ())
				(car l1))
			       (t 
				(do ((j n (sub1 j))
				     (a (car l1) (cdr a)))
				    ((eq j 1)
				     (prog1 (cdr a)
					    (rplacd a ())))
				  (rplaca a i))))))))))))


