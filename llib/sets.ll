;;;
;;; SETS:  Using Lists as Sets
;;;
;;; $Source: /usr/cvs/lelisp/llib/sets.ll,v $
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
        (error 'load 'erricf 'sets))

(defvar #:sys-package:colon 'sets)

(add-feature 'sets)


;;;
;;; Functions starting with n are destructive and don't generate cons.
;;;


;;;
;;; Functions generation
;;;

(eval-when (eval local-compile)

	   (defun :make-args (start end)
	     (when (lt start end)
		   (cons `(arg ,start) (:make-args (add1 start) end))))
)

(defmacro :defun (funct n-args list-numbers)
  `(defun ,funct &nobind
     (when (or (lt (arg) ,n-args) (gt (arg) ,(add1 n-args)))
	   (error ,(kwote funct) 'errwna (arg)))
     ,@(mapcar (lambda (n)
		 `(unless (listp (arg ,n))
			  (error ,(kwote funct) 'errnla (arg ,n))))
	       list-numbers)
     (if (gt (arg) ,n-args)
	 (,(symbol 'sets funct) ,@(:make-args 0 (add1 n-args)))
       (,(symbol 'sets (implode (nconc1 (explode funct) '#/q)))
	,@(:make-args 0 n-args)))))



(eval-when (eval local-compile)

	   (defun :crash (body substs)
	     (cond ((not (consp body))
		    body)
		   ((atom (car body))
		    (let ((subst (assoc (car body) substs)))
		      (if subst
			  (append1 (cons (cdr subst)
					 (:crash (cdr body) substs)) 'eq-func)
			  (cons (car body) (:crash (cdr body) substs)))))
		   (t
		    (cons (:crash (car body) substs)
			  (:crash (cdr body) substs)))))
)

(defmacro :defun2 (funct args . body)
  (let* ((substs `((delq . :delete)
		   (eq . :equal)
		   (memq . :member)
		   ,@(mapcar (lambda (f)
			       (cons (implode (nconc1 (explode f) #/q)) f))
			     '(:adjoin
			       :set-equal
			       :filter
			       :intersection
			       :intersection2
			       :nintersection
			       :nintersection2
			       :subsetp
			       :union
			       :nunion
			       :nunion2
			       :set-difference
			       :nset-difference
			       :nset-difference2
			       :set-exclusive-or
			       :nset-exclusive-or
			       :nset-exclusive-or2
			       :nset-remove
			       :transitive-closure
			       ))))
	 (subst (assq funct substs))
	 (body1 (macroexpand body))
	 (body2 (:crash body1 substs))
	 )
    (unless subst (error ':defun2 funct "cette fonction n'est pas prevue."))
    `(progn
       (defun ,funct ,args ,@body1)
       (defun ,(cdr subst) ,(append1 args 'eq-func) ,@body2)
       )))




;;;
;;; Add an item to a set:  (adjoin item list . test)
;;;

(:defun adjoin 2 (1)) ;; see macro-generation below.

(:defun2 :adjoinq (item list)
	 (if (memq item list)
	     list
	     (cons item list)))


;;;
;;; Union
;;;

(:defun union 2 (0 1))

(:defun2 :unionq (list1 list2)
	 (mapc (lambda (item1)
		 (setq list2 (:adjoinq item1 list2)))
	       list1)
	 list2)

(:defun nunion 2 (0 1))

(:defun2 :nunionq (list1 list2)
	 (ifn list1
	      list2
	      (:nunion2q list1 list2)
	      list1))


(:defun2 :nunion2q (list1 list2)
	 ;; list1 assumed not null.
	 (if (cdr list1)
	     (:nunion2q (cdr list1) (delq (car list1) list2))
	   (rplacd list1 (delq (car list1) list2))))


;;;
;;; Intersection
;;;

(:defun intersection 2 (0 1))

(:defun2 :intersectionq (list1 list2)
	 (:filterq list1 list2 when))

(:defun nintersection 2 (0 1))

(:defun2 :nintersectionq (list1 list2)
	 (when list1
	       (ifn (memq (car list1) list2)
		    (:nintersectionq (cdr list1) list2)
		    (:nintersection2q list1 list2)
		    )))


(:defun2 :nintersection2q (list1 list2)
	 ;; Assumed list1 non null, and (car list1) is to be kept.
	 (if (cdr list1)
	     (ifn (memq (cadr list1) list2)
		  (:nintersection2q (rplacd list1 (cddr list1)) list2)
		  (:nintersection2q (cdr list1) list2)
		  list1)
	   list1))


;;;
;;; Difference

(:defun set-difference 2 (0 1))

(:defun2 :set-differenceq (list1 list2)
	 (:filterq list1 list2 unless))

(:defun nset-difference 2 (0 1))


(:defun2 :nset-differenceq (list1 list2)
	 ;; almost like nintersection ("if" replaces "ifn").
	 (when list1
	       (if (memq (car list1) list2)
		   (:nset-differenceq (cdr list1) list2)
		 (:nset-difference2q list1 list2)
		 )))


(:defun2 :nset-difference2q (list1 list2)
	 ;; Assumed list1 non null, and (car list1) is to be kept.
	 (if (cdr list1)
	     (if (memq (cadr list1) list2)
		 (:nset-difference2q (rplacd list1 (cddr list1)) list2)
	       (:nset-difference2q (cdr list1) list2)
	       list1)
	   list1))


;;;
;;; Exclusive-or
;;;

(:defun set-exclusive-or 2 (0 1))

(:defun2 :set-exclusive-orq (list1 list2)
	 (:set-differenceq (:unionq list1 list2)
			   (:intersectionq list1 list2)))
  
(:defun nset-exclusive-or 2 (0 1))

(:defun2 :nset-exclusive-orq (list1 list2)
	 (let (:found)
	   (:nset-exclusive-or2q list1 list2)))

;; Don't use one the next two functions without defining :value.

(:defun2 :nset-exclusive-or2q (list1 list2)
	 (ifn list1
	      list2
	      (setq list2 (:nset-removeq (car list1) list2))
	      (if :found
		  (:nset-exclusive-or2q (cdr list1) list2)
		  (rplacd list1 (:nset-exclusive-or2q (cdr list1) list2)))))

(:defun2 :nset-removeq (item list)
	 (cond ((atom list)
		(setq :found ())
		list)
	       ((eq item (car list))
		(setq :found list)
		(cdr list))
	       (t
		(rplacd list (:nset-removeq item (cdr list))))))


;;;
;;; Subset
;;;

(:defun subsetp 2 (0 1))

(:defun2 :subsetpq (list1 list2)
	 (or (null list1)
	     (and (memq (car list1) list2)
		  (:subsetpq (cdr list1) list2))))



;;;
;;; Equality
;;;

(:defun set-equal 2 (0 1))

(:defun2 :set-equalq (list1 list2)
	 (and (= (length list1) (length list2)) ;; Optimization.
	      (:subsetpq list1 list2)
	      (:subsetpq list2 list1)
	      ))


;;;
;;; Transitive closure
;;;

;; fn is of the form (fn item) and returns a list.
;; (set-equal (transitive-closure fn list1) list2) is equivalent to
;;   - (subsetp list1 list2) and
;;   - For each item : (memq item list1) ==> (subsetp (fn item) list2)
;;   - list2 is minimal.
(:defun transitive-closure 2 (1))

(:defun2 :transitive-closureq (fn news)
	 (let (elt olds result)
	   (while news
	     (setq elt (car news)
		   result (funcall fn elt)
		   news (cdr news)
		   )
	     (newl olds elt)
	     (mapc (lambda (entry)
		     (unless (or (memq entry olds)
				 (memq entry news))
			     (newl news entry)
			     ))
		   result
		   ))
	   olds))


;;;
;;; Tools
;;;

(defmacro :filterq (list1 list2 test)
  `(let (l)
     (mapc (lambda (item1)
	     (,test (memq item1 ,list2)
		    (newl l item1)))
	   ,list1)
     l))

(defmacro :filter (list1 list2 test eq-func)
  `(let (l)
     (mapc (lambda (item1)
	     (,test (:member item1 ,list2 eq-func)
		    (newl l item1)))
	   ,list1)
     l))



;;==== New definitions of Le-Lisp functions with parametizable
;; equality test: all (almost) like in Le-Lisp manual.

(defmacro :equal (s1 s2 eq-func)
  `(funcall ,eq-func ,s1 ,s2))

(defun :member (s l eq-func)
  (selectq eq-func
	   (equal
	    (member s l))
	   (eq
	    (memq s l))
	   (t
	    (:member2 s l eq-func))))

(defun :member2 (s l eq-func)
  (cond ((atom l) ())
	((funcall eq-func s (car l)) l)
	(t (:member2 s (cdr l) eq-func))))

(defun :delete (s l eq-func)
  (selectq eq-func
	   (equal
	    (delete s l))
	   (eq
	    (delq s l))
	   (t
	    (:delete2 s l eq-func))))

(defun :delete2 (s l eq-func) ;; Removes all occurrences.
  (cond ((atom l) l)
	((funcall eq-func s (car l)) (:delete2 s (cdr l) eq-func))
	(t (rplacd l (:delete2 s (cdr l) eq-func)))))



;;;
;;; Set of Subsets
;;;

(defun power-set (%set)
  (cond ((null %set) (cons ()()))
        (t (let ((%rest (power-set (cdr %set))))
             (nconc %rest
                    (mapcar
		     (lambda (%s)
		       (cons (car %set)
			     %s))
		     %rest))))))


;;;
;;; Cartesian Product
;;;

(defun cartesian-product (%a %b)
  (cond ((or (null %a) (null %b))
         ())
        ;; the set %a is a singleton
        ((null (cdr %a))
         (mapcar (lambda (eb)
                   (cons (car %a) eb))
                 %b))
        (t (nconc
            (cartesian-product (cons (car %a) ())
                               %b)
            (cartesian-product (cdr %a)
                               %b)))))
