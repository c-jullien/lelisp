;;;
;;; BROWSE:  The Le-Lisp Benchmarks (8)
;;;
;;; $Source: /usr/cvs/lelisp/benchmarks/browse.ll,v $
;;; $Date: 2016/05/21 16:28:01 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

;;; (8) BROWSE -- Benchmark to create and browse through an AI-like
;;; data base of units.


(defun check-browse ()
  (check-value '(test-browse 1) () ))

(defun meter-browse ()
  (perform-meter (browse)))

(defun test-browse (n)
  (if (eq n 1)
      (browse)
      (repeat n (browse))))


;;; ------------------------------------------------------------

;;; n is # of symbols
;;; m is maximum amount of stuff on the plist
;;; npats is the number of basic patterns on the unit
;;; ipats is the instantiated copies of the patterns


(defvar browse-rand 21)

(defmacro browse-char1 (x) `(sref (string ,x) 0))

(defun browse-init (n m npats ipats)
  (setq browse-rand 21)
  (let ((ipats (copylist ipats)))
    (do ((p ipats (cdr p)))
	((null (cdr p)) (rplacd p ipats)))	
    (do ((n n (sub1 n))
	 (i m (cond ((eq i 0) m)
		    (t (sub1 i))))
	 (name (gensym) (gensym))
	 (a ()))
	((eq  n 0) a)
	(setq a (cons name a))
	(do ((i i (sub1 i)))
	    ((eq i 0))
	    (putprop name () (gensym)))
	(putprop name 
		 (do ((i npats (sub1 i))
		      (ipats ipats (cdr ipats))
		      (a ()))
		     ((eq i 0) a)
		     (setq a (cons (car ipats) a)))
		 'pattern)
	(do ((j (sub m i) (sub1 j)))
	    ((eq j 0))
	    (putprop name () (gensym))))))


(defun browse-random ()
  (setq browse-rand (rem (mul browse-rand 17) 251)))

(defun browse-randomize (l)
  (do ((a ()))
      ((null l) a)
      (let ((n (rem (browse-random) (length l))))
	(cond ((eq n 0)
	       (setq a (cons (car l) a))
	       (setq l (cdr l)))
	      (t 
	       (do ((n n (sub1 n))
		    (x l (cdr x)))
		   ((eq n 1)
		    (setq a (cons (cadr x) a))
		    (rplacd x (cddr x)))))))))

(defun match (pat dat alist)
  (cond ((null pat)
	 (null dat))
	((null dat) ())
	((or (eq (car pat) '?)
	     (eq (car pat)
		 (car dat)))
	 (match (cdr pat) (cdr dat) alist))
	((eq (car pat) '*)
	 (or (match (cdr pat) dat alist)
	     (match (cdr pat) (cdr dat) alist)
	     (match pat (cdr dat) alist)))
	(t (cond ((atom (car pat))
		  (cond ((eq (browse-char1 (car pat)) #/?)
			 (let ((val (assoc (car pat) alist)))
			   (cond (val (match (cons (cdr val)
						   (cdr pat))
					     dat alist))
				 (t (match (cdr pat)
					   (cdr dat)
					   (cons (cons (car pat)
						       (car dat))
						 alist))))))
			((eq (browse-char1 (car pat)) #/*)
			 (let ((val (assoc (car pat) alist)))
			   (cond (val (match (append (cdr val)
						     (cdr pat))
					     dat alist))
				 (t 
				  (do ((l () (nconc l (cons (car d) ())))
				       (e (cons () dat) (cdr e))
				       (d dat (cdr d)))
				      ((or (null e)
   				           (match (cdr pat) d
						  (cons (cons (car pat) l)
							alist)))
				       (if (null e) () t) ))))))))
		 (t (when (not (atom (car dat)))
			  (match (car pat)
				 (car dat) alist)
			  (match (cdr pat)
				 (cdr dat) alist)))))))

(defun browse ()
  (investigate (browse-randomize 
		(browse-init 100 10 4 '((a a a b b b b a a a a a b b a a a)
					(a a b b b b a a
					   (a a)(b b))
					(a a a b (b a) b a b a))))
	       '((*a ?b *b ?b a *a a *b *a)
		 (*a *b *b *a (*a) (*b))
		 (? ? * (b a) * ? ?))))

(defun investigate (units pats)
  (do ((units units (cdr units)))
      ((null units))
      (do ((pats pats (cdr pats)))
	  ((null pats))
	  (do ((p (getprop (car units) 'pattern)
		  (cdr p)))
	      ((null p))
	      (match (car pats) (car p) ())))))


