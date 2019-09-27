;;;
;;; SORT:  various sorting functions on lists.
;;;
;;; $Source: /usr/cvs/lelisp/llib/sort.ll,v $
;;; $Date: 2016/05/21 10:36:06 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------



(unless (>= (version) 15.2)
        (error 'load 'erricf 'sort))

;;; All these functions are "autoload" in the minimal environment.

(setq #:sys-package:colon 'sort)

;;;
;;; Auxilliary function for generic sorting
;;;

(defun :sort-aux (fn lst len)
  ;; auxilliary function, the length is already computed.
  (cond ((lt len 2)
	 ;; 0 or 1 element, sort done.
	 lst)
	((eq len 2)
	 ;; 2 elements, fast sort
	 (if (funcall fn (car lst) (cadr lst))
	     lst
	     (prog1 (cdr lst)
	            (rplacd (cdr lst) lst)
		    (rplacd lst ()))))
	(t ;; more than 2, recursive merge/sort
	 (let ((l1  lst)                
	       (l2)
	       (oddp (logand len 1)))
	   ;; physically cut "lst" in two parts, l1 & l2
	   (setq len (logshift len -1))
	   (repeat (sub1 len) (setq lst (cdr lst)))
	   (setq l2 (cdr lst))
	   (rplacd lst ())
	   ;; recursively sort the 2 half parts, l1 & l2
	   (setq l1 (:sort-aux fn l1 len))
	   (setq l2 (:sort-aux fn l2 (add oddp len)))
	   ;; physically merge the 2 sorted lists, l1 & l2
	   (unless (funcall fn (car l1) (car l2))
		   (psetq l1 l2 l2 l1))
	   (prog1 l1
	     (while (and (cdr l1) l2)
	       (when (funcall fn (car l2) (cadr l1))
		     (rplacd l1 (prog1 l2 (setq l2 (cdr l1)))))
	       (setq l1 (cdr l1)))
	     (when l2 (rplacd l1 l2))))))))))

;;;
;;; Macro to expand predefined sorting functions,
;;; which removes the call to "funcall" which is very time expensive.
;;;

(defmacro defsort (name sortfnt)
  (let ((auxfnt (symbol 'sort (concat name "-sort-aux"))))
    `(progn

       (defun ,name (lst)
	 ;; the entry function with 1 arg.
	 (,auxfnt lst (length lst)))

       (defun ,auxfnt (lst len)
	 ;; the auxiliary function, the length is already computed.
	 (cond ((lt len 2) 
		;; 0 or 1 element, sort done.
		lst)
	       ((eq len 2)
		;; 2 elements, simple case
		  (if (,sortfnt (car lst) (cadr lst))
		      lst
		      (prog1 (cdr lst)
			     (rplacd (cdr lst) lst)
			     (rplacd lst ()))))
	       (t
		;; more than 2, recurse.
		(let ((l1  lst)                
		      (l2)
		      (oddp (logand len 1)))
		  ;; physically cut "lst" in two parts, l1 & l2
		  (setq len (logshift len -1))
		  (repeat (sub1 len) (setq lst (cdr lst)))
		  (setq l2 (cdr lst))
		  (rplacd lst ())
		  ;; recursively sort the 2 half parts, l1 & l2
		  (setq l1 (,auxfnt l1 len))
		  (setq l2 (,auxfnt l2 (add oddp len)))
		  ;; physically merge the 2 sorted lists, l1 & l2
		  (unless (,sortfnt (car l1) (car l2))
			  (psetq l1 l2 l2 l1))
		  (prog1 l1
		         (while (and (cdr l1) l2)
			   (when (,sortfnt (car l2) (cadr l1))
				 (rplacd l1 (prog1 l2 (setq l2 (cdr l1)))))
			   (setq l1 (cdr l1)))
			 (when l2 (rplacd l1 l2))))))))))

;;;
;;; new comparaison function
;;;

(defun pkgcmp (a b)                         
  ;; compare 2 symbols, including the package name.
  (if (eq (packagecell a) (packagecell b))
      (alphalessp a b)
      (let ((pa (packagecell a)))
	(or (not (symbolp pa))
	    (let ((pb (packagecell b)))
	      (and (symbolp pb)
		   (pkgcmp pa pb))))) ))


;;;
;;; Predefined sorting functions
;;;

(defun sort (fn lst)
  ;; sort, using the sorting function "fn", the list "lst"
  (cond ((consp lst)
	 (:sort-aux fn lst (length lst)))
	((null lst) ())
	(t (error 'sort 'errnla lst))))

(defsort sortl
  ;; lexicographic sort
  alphalessp)

(defsort sortn
  ;; generic numerical sort
  <)

(defsort sortlt
  ;; fix numerical sort
  lt)

(defsort sortp 
  ;; sort on the symbol names with packages
  pkgcmp)

