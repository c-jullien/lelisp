;;;
;;; TRAVERSE:  The Le-Lisp Benchmarks (10 - 11)
;;;
;;; $Source: /usr/cvs/lelisp/benchmarks/traverse.ll,v $
;;; $Date: 2016/05/21 16:28:02 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


;;; (10-11) TRAVERSE --  Benchmark which creates and traverses a tree structure.

(defun check-travinit ()
   (check-value '(test-travinit 1) () ))

(defun meter-travinit ()
   (perform-meter (init-traverse)))

(defun test-travinit (n)
   (if (eq n 1)
       (init-traverse)
       (repeat n (init-traverse))))

(defun check-travrun ()
   (check-value '(test-travrun 1) t))

(defun meter-travrun ()
   (perform-meter (run-traverse)))

(defun test-travrun (n)
   (if (eq n 1)
       (run-traverse)
       (repeat n (run-traverse))))



;;; ------------------------------------------------------------

(defstruct node
    (parents ())
    (sons    ())
    (sn      (snb))
    (entry1  ())
    (entry2  ())
    (entry3  ())
    (entry4  ())
    (entry5  ())
    (entry6  ())
    (mark    ()))

(defsetf #:node:parents (x) (y) `(#:node:parents ,x ,y))
(defsetf #:node:sons    (x) (y) `(#:node:sons ,x ,y))
(defsetf #:node:sn      (x) (y) `(#:node:sn ,x ,y))
(defsetf #:node:entry1  (x) (y) `(#:node:entry1 ,x ,y))
(defsetf #:node:entry2  (x) (y) `(#:node:entry2 ,x ,y))
(defsetf #:node:entry3  (x) (y) `(#:node:entry3 ,x ,y))
(defsetf #:node:entry4  (x) (y) `(#:node:entry4 ,x ,y))
(defsetf #:node:entry5  (x) (y) `(#:node:entry5 ,x ,y))
(defsetf #:node:entry6  (x) (y) `(#:node:entry6 ,x ,y))
(defsetf #:node:mark    (x) (y) `(#:node:mark ,x ,y))



(defvar traverse-sn 0)
(defvar *count-call* 0)
(defvar traverse-rand 21)
(defvar traverse-count 0)

(defvar traverse-marker ())
(defvar traverse-root)

(setq traverse-sn 0 traverse-rand 21 traverse-count 0 traverse-marker ())

(defun snb ()
  (setq traverse-sn (add1 traverse-sn)))

(defun traverse-seed ()
  (setq traverse-rand 21))

(defun traverse-random ()
  (setq traverse-rand (rem (mul traverse-rand 17) 251)))

(defun traverse-remove (n q)
  (cond ((eq (cdr (car q)) (car q))
	 (prog2 () (caar q) (rplaca q ())))
	((eq n 0)
	 (prog2 () (caar q)
		(do ((p (car q) (cdr p)))
		    ((eq (cdr p) (car q))
		     (rplaca q
			     (rplacd p (cdr (car q))))))))
	(t (do ((n n (sub1 n))
		(q (car q) (cdr q))
		(p (cdr (car q)) (cdr p)))
	       ((eq n 0) (prog2 () (car q) (rplacd q p)))))))

(defun traverse-select (n q)
  (do ((n n (sub1 n))
       (q (car q) (cdr q)))
      ((eq n 0) (car q))))

(defun traverse-add (a q)
  (cond ((null q)
	 `(,(let ((x `(,a)))
	      (rplacd x x) x)))
	((null (car q))
	 (let ((x `(,a)))
	   (rplacd x x)
	   (rplaca q x)))
	(t (rplaca q
		   (rplacd (car q) `(,a .,(cdr (car q))))))))

(defun traverse-create-structure (n)
  (let ((a `(,(#:node:make))))
    (do ((m (sub1 n) (sub1 m))
	 (p a))
	((eq m 0) (setq a `(,(rplacd p a)))
	 (do ((unused a)
	      (used (traverse-add (traverse-remove 0 a) ()))
	      (x) (y))
	     ((null (car unused))
	      (find-root (traverse-select 0 used) n))
	   (setq x (traverse-remove (rem (traverse-random) n) unused))
	   (setq y (traverse-select (rem (traverse-random) n) used))
	   (traverse-add x used)
	   (setf (#:node:sons y) `(,x .,(#:node:sons y)))
	   (setf (#:node:parents x) `(,y .,(#:node:parents x))) ))
      (setq a (cons (#:node:make) a)))))

(defun find-root (node n)
  (do ((n n (sub1 n)))
      ((or (eq n 0) (null (#:node:parents node))) node)
     (setq node (car (#:node:parents node)))))

(defun travers (node mark)
  (setq *count-call* (add1 *count-call*))
  (cond ((eq (#:node:mark node) mark) ())
	(t (#:node:mark node mark)
	   (setq traverse-count (add1 traverse-count))
	   (setf (#:node:entry1 node) (not (#:node:entry1 node)))
	   (setf (#:node:entry2 node) (not (#:node:entry2 node)))
	   (setf (#:node:entry3 node) (not (#:node:entry3 node)))
	   (setf (#:node:entry4 node) (not (#:node:entry4 node)))
	   (setf (#:node:entry5 node) (not (#:node:entry5 node)))
	   (setf (#:node:entry6 node) (not (#:node:entry6 node)))
	   (do ((sons (#:node:sons node) (cdr sons)))
	       ((null sons) ())
	     (travers (car sons) mark)))))



(defun traverse (root)
  (let ((traverse-count 0))
    (travers root
	     (setq traverse-marker (not traverse-marker)))
    traverse-count))

(defun init-traverse()
  (setq traverse-root (traverse-create-structure 100))
  ())

(defun run-traverse ()
  (repeat 50
    (traverse traverse-root)
    (traverse traverse-root)
    (traverse traverse-root)
    (traverse traverse-root)
    (traverse traverse-root))) 

;;; to initialize, call:  (init-traverse)
;;; to run traverse, call:  (run-traverse)
