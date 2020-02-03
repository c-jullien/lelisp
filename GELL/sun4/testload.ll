
(defun fib (x)
  (fib-aux x))

(defun fib-aux (x)
  (if (lt x 3)
      1
    (add (fib-aux (sub x 1))
	 (fib-aux (sub x 2)))))
  

;;; This module is in AUTOLOAD in version 15.
 
(defun NNsort (fn l)
  ;; Sorts the list L according to the comparison function FN.
  ;; FN must be a function of two arguments which determines a partial
  ;;    order on the elements of l.
  ;; L must be a list.
  ;; Returns L sorted.
  ;; ** This is a destructive operation.
  (assert (functionp fn) (error 'NNsort 'errfun fn))
  (assert (listp l) (error 'NNsort 'errnla l))
  (if (null (cdr l))
      l
    (let ((l1 l)
	  (l2 ()))
      (setq l  (nthcdr (sub1 (div (length l) 2)) l)
	    l2 (cdr l))
      (rplacd l ())
      (NNffusion (NNsort fn l1) (NNsort fn l2) fn))))

(defun NNffusion (l1 l2 fn)
  ;; Physical fusion of the two sorted lists L1 and L2 according to
  ;; the comparison function FN.
  ;; L1 and L2 must be lists sorted according to FN.
  ;; FN must be a function of 2 arguments which decides a partial
  ;; ordering on the elements of L1 and L2.
  ;; Returns L1, modified to take into account L2.
  (unless (funcall fn (car l1) (car l2))
    (psetq l1 l2 l2 l1))
  (prog1 l1
    (while (and (cdr l1) l2)
      (when (funcall fn (car l2) (cadr l1))
	(rplacd l1 (prog1 l2 (setq l2 (cdr l1)))))
      (nextl l1))
    (when l2 (rplacd l1 l2))))

;;; Predefined sortings.

(defun NNsortl (l)
  ;; Alphabetic sort.  The elements of L, a list, must be items for
  ;; which PNAME works. (symbols, strings, numbers.)
  (NNsort #'alphalessp l))

(defun NNsortn (l)
  ;; Numeric sort.  The elements of L, a list, must be numbers which <
  ;; can handle.
  (NNsort #'< l))

(defun NNsortp (l)
  ;; Sort according the packages (what does THAT mean??).  The
  ;; elements of L must be symbols.
  (NNsort #'NNpkgcmp l))

(defun NNpkgcmp (a b)
  ;; Compare 2 symbols by considering that their packages form part of
  ;; their name.
  ;; compare 2 symboles en conside'rant que
  ;; les packages font partie du nom.
  ;; Si non symbole: place' devant.
  (if (eq (packagecell a) (packagecell b))
      (alphalessp a b)
    (let ((pa (packagecell a)))
      (or (not (symbolp pa))
	  (let ((pb (packagecell b)))
	    (and (symbolp pb) (NNpkgcmp pa pb))))) ))

;-------------						       

(defun PPsort (fn l)
  ;; Sorts the list L according to the comparison function FN.
  ;; FN must be a function of two arguments which determines a partial
  ;;    order on the elements of l.
  ;; L must be a list.
  ;; Returns L sorted.
  ;; ** This is a destructive operation.
  (assert (functionp fn) (error 'PPsort 'errfun fn))
  (assert (listp l) (error 'PPsort 'errnla l))
  (if (null (cdr l))
      l
    (let ((l1 l)
	  (l2 ()))
      (setq l  (nthcdr (sub1 (div (length l) 2)) l)
	    l2 (cdr l))
      (rplacd l ())
      (PPffusion (PPsort fn l1) (PPsort fn l2) fn))))

(defun PPffusion (l1 l2 fn)
  ;; Physical fusion of the two sorted lists L1 and L2 according to
  ;; the comparison function FN.
  ;; L1 and L2 must be lists sorted according to FN.
  ;; FN must be a function of 2 arguments which decides a partial
  ;; ordering on the elements of L1 and L2.
  ;; Returns L1, modified to take into account L2.
  (unless (funcall fn (car l1) (car l2))
    (psetq l1 l2 l2 l1))
  (prog1 l1
    (while (and (cdr l1) l2)
      (when (funcall fn (car l2) (cadr l1))
	(rplacd l1 (prog1 l2 (setq l2 (cdr l1)))))
      (nextl l1))
    (when l2 (rplacd l1 l2))))

;;; Predefined sortings.

(defun PPsortl (l)
  ;; Alphabetic sort.  The elements of L, a list, must be items for
  ;; which PNAME works. (symbols, strings, numbers.)
  (PPsort #'alphalessp l))

(defun PPsortn (l)
  ;; Numeric sort.  The elements of L, a list, must be numbers which <
  ;; can handle.
  (PPsort #'< l))

(defun PPsortp (l)
  ;; Sort according the packages (what does THAT mean??).  The
  ;; elements of L must be symbols.
  (PPsort #'PPpkgcmp l))

(defun PPpkgcmp (a b)
  ;; Compare 2 symbols by considering that their packages form part of
  ;; their name.
  ;; compare 2 symboles en conside'rant que
  ;; les packages font partie du nom.
  ;; Si non symbole: place' devant.
  (if (eq (packagecell a) (packagecell b))
      (alphalessp a b)
    (let ((pa (packagecell a)))
      (or (not (symbolp pa))
	  (let ((pb (packagecell b)))
	    (and (symbolp pb) (PPpkgcmp pa pb))))) ))
						       

;-------------						       

(defun QQsort (fn l)
  ;; Sorts the list L according to the comparison function FN.
  ;; FN must be a function of two arguments which determines a partial
  ;;    order on the elements of l.
  ;; L must be a list.
  ;; Returns L sorted.
  ;; ** This is a destructive operation.
  (assert (functionp fn) (error 'QQsort 'errfun fn))
  (assert (listp l) (error 'QQsort 'errnla l))
  (if (null (cdr l))
      l
    (let ((l1 l)
	  (l2 ()))
      (setq l  (nthcdr (sub1 (div (length l) 2)) l)
	    l2 (cdr l))
      (rplacd l ())
      (QQffusion (QQsort fn l1) (QQsort fn l2) fn))))

(defun QQffusion (l1 l2 fn)
  ;; Physical fusion of the two sorted lists L1 and L2 according to
  ;; the comparison function FN.
  ;; L1 and L2 must be lists sorted according to FN.
  ;; FN must be a function of 2 arguments which decides a partial
  ;; ordering on the elements of L1 and L2.
  ;; Returns L1, modified to take into account L2.
  (unless (funcall fn (car l1) (car l2))
    (psetq l1 l2 l2 l1))
  (prog1 l1
    (while (and (cdr l1) l2)
      (when (funcall fn (car l2) (cadr l1))
	(rplacd l1 (prog1 l2 (setq l2 (cdr l1)))))
      (nextl l1))
    (when l2 (rplacd l1 l2))))

;;; Predefined sortings.

(defun QQsortl (l)
  ;; Alphabetic sort.  The elements of L, a list, must be items for
  ;; which PNAME works. (symbols, strings, numbers.)
  (QQsort #'alphalessp l))

(defun QQsortn (l)
  ;; Numeric sort.  The elements of L, a list, must be numbers which <
  ;; can handle.
  (QQsort #'< l))

(defun QQsortp (l)
  ;; Sort according the packages (what does THAT mean??).  The
  ;; elements of L must be symbols.
  (QQsort #'QQpkgcmp l))

(defun QQpkgcmp (a b)
  ;; Compare 2 symbols by considering that their packages form part of
  ;; their name.
  ;; compare 2 symboles en conside'rant que
  ;; les packages font partie du nom.
  ;; Si non symbole: place' devant.
  (if (eq (packagecell a) (packagecell b))
      (alphalessp a b)
    (let ((pa (packagecell a)))
      (or (not (symbolp pa))
	  (let ((pb (packagecell b)))
	    (and (symbolp pb) (QQpkgcmp pa pb))))) ))
						       


;-------------						       

(defun RRsort (fn l)
  ;; Sorts the list L according to the comparison function FN.
  ;; FN must be a function of two arguments which determines a partial
  ;;    order on the elements of l.
  ;; L must be a list.
  ;; Returns L sorted.
  ;; ** This is a destructive operation.
  (assert (functionp fn) (error 'RRsort 'errfun fn))
  (assert (listp l) (error 'RRsort 'errnla l))
  (if (null (cdr l))
      l
    (let ((l1 l)
	  (l2 ()))
      (setq l  (nthcdr (sub1 (div (length l) 2)) l)
	    l2 (cdr l))
      (rplacd l ())
      (RRffusion (RRsort fn l1) (RRsort fn l2) fn))))

(defun RRffusion (l1 l2 fn)
  ;; Physical fusion of the two sorted lists L1 and L2 according to
  ;; the comparison function FN.
  ;; L1 and L2 must be lists sorted according to FN.
  ;; FN must be a function of 2 arguments which decides a partial
  ;; ordering on the elements of L1 and L2.
  ;; Returns L1, modified to take into account L2.
  (unless (funcall fn (car l1) (car l2))
    (psetq l1 l2 l2 l1))
  (prog1 l1
    (while (and (cdr l1) l2)
      (when (funcall fn (car l2) (cadr l1))
	(rplacd l1 (prog1 l2 (setq l2 (cdr l1)))))
      (nextl l1))
    (when l2 (rplacd l1 l2))))

;;; Predefined sortings.

(defun RRsortl (l)
  ;; Alphabetic sort.  The elements of L, a list, must be items for
  ;; which PNAME works. (symbols, strings, numbers.)
  (RRsort #'alphalessp l))

(defun RRsortn (l)
  ;; Numeric sort.  The elements of L, a list, must be numbers which <
  ;; can handle.
  (RRsort #'< l))

(defun RRsortp (l)
  ;; Sort according the packages (what does THAT mean??).  The
  ;; elements of L must be symbols.
  (RRsort #'RRpkgcmp l))

(defun RRpkgcmp (a b)
  ;; Compare 2 symbols by considering that their packages form part of
  ;; their name.
  ;; compare 2 symboles en conside'rant que
  ;; les packages font partie du nom.
  ;; Si non symbole: place' devant.
  (if (eq (packagecell a) (packagecell b))
      (alphalessp a b)
    (let ((pa (packagecell a)))
      (or (not (symbolp pa))
	  (let ((pb (packagecell b)))
	    (and (symbolp pb) (RRpkgcmp pa pb))))) ))
						       

;-------------						       

(defun SSsort (fn l)
  ;; Sorts the list L according to the comparison function FN.
  ;; FN must be a function of two arguments which determines a partial
  ;;    order on the elements of l.
  ;; L must be a list.
  ;; Returns L sorted.
  ;; ** This is a destructive operation.
  (assert (functionp fn) (error 'SSsort 'errfun fn))
  (assert (listp l) (error 'SSsort 'errnla l))
  (if (null (cdr l))
      l
    (let ((l1 l)
	  (l2 ()))
      (setq l  (nthcdr (sub1 (div (length l) 2)) l)
	    l2 (cdr l))
      (rplacd l ())
      (SSffusion (SSsort fn l1) (SSsort fn l2) fn))))

(defun SSffusion (l1 l2 fn)
  ;; Physical fusion of the two sorted lists L1 and L2 according to
  ;; the comparison function FN.
  ;; L1 and L2 must be lists sorted according to FN.
  ;; FN must be a function of 2 arguments which decides a partial
  ;; ordering on the elements of L1 and L2.
  ;; Returns L1, modified to take into account L2.
  (unless (funcall fn (car l1) (car l2))
    (psetq l1 l2 l2 l1))
  (prog1 l1
    (while (and (cdr l1) l2)
      (when (funcall fn (car l2) (cadr l1))
	(rplacd l1 (prog1 l2 (setq l2 (cdr l1)))))
      (nextl l1))
    (when l2 (rplacd l1 l2))))

;;; Predefined sortings.

(defun SSsortl (l)
  ;; Alphabetic sort.  The elements of L, a list, must be items for
  ;; which PNAME works. (symbols, strings, numbers.)
  (SSsort #'alphalessp l))

(defun SSsortn (l)
  ;; Numeric sort.  The elements of L, a list, must be numbers which <
  ;; can handle.
  (SSsort #'< l))

(defun SSsortp (l)
  ;; Sort according the packages (what does THAT mean??).  The
  ;; elements of L must be symbols.
  (SSsort #'SSpkgcmp l))

(defun SSpkgcmp (a b)
  ;; Compare 2 symbols by considering that their packages form part of
  ;; their name.
  ;; compare 2 symboles en conside'rant que
  ;; les packages font partie du nom.
  ;; Si non symbole: place' devant.
  (if (eq (packagecell a) (packagecell b))
      (alphalessp a b)
    (let ((pa (packagecell a)))
      (or (not (symbolp pa))
	  (let ((pb (packagecell b)))
	    (and (symbolp pb) (SSpkgcmp pa pb))))) ))
						       

;-------------						       

(defun TTsort (fn l)
  ;; Sorts the list L according to the comparison function FN.
  ;; FN must be a function of two arguments which determines a partial
  ;;    order on the elements of l.
  ;; L must be a list.
  ;; Returns L sorted.
  ;; ** This is a destructive operation.
  (assert (functionp fn) (error 'TTsort 'errfun fn))
  (assert (listp l) (error 'TTsort 'errnla l))
  (if (null (cdr l))
      l
    (let ((l1 l)
	  (l2 ()))
      (setq l  (nthcdr (sub1 (div (length l) 2)) l)
	    l2 (cdr l))
      (rplacd l ())
      (TTffusion (TTsort fn l1) (TTsort fn l2) fn))))

(defun TTffusion (l1 l2 fn)
  ;; Physical fusion of the two sorted lists L1 and L2 according to
  ;; the comparison function FN.
  ;; L1 and L2 must be lists sorted according to FN.
  ;; FN must be a function of 2 arguments which decides a partial
  ;; ordering on the elements of L1 and L2.
  ;; Returns L1, modified to take into account L2.
  (unless (funcall fn (car l1) (car l2))
    (psetq l1 l2 l2 l1))
  (prog1 l1
    (while (and (cdr l1) l2)
      (when (funcall fn (car l2) (cadr l1))
	(rplacd l1 (prog1 l2 (setq l2 (cdr l1)))))
      (nextl l1))
    (when l2 (rplacd l1 l2))))

;;; Predefined sortings.

(defun TTsortl (l)
  ;; Alphabetic sort.  The elements of L, a list, must be items for
  ;; which PNAME works. (symbols, strings, numbers.)
  (TTsort #'alphalessp l))

(defun TTsortn (l)
  ;; Numeric sort.  The elements of L, a list, must be numbers which <
  ;; can handle.
  (TTsort #'< l))

(defun TTsortp (l)
  ;; Sort according the packages (what does THAT mean??).  The
  ;; elements of L must be symbols.
  (TTsort #'TTpkgcmp l))

(defun TTpkgcmp (a b)
  ;; Compare 2 symbols by considering that their packages form part of
  ;; their name.
  ;; compare 2 symboles en conside'rant que
  ;; les packages font partie du nom.
  ;; Si non symbole: place' devant.
  (if (eq (packagecell a) (packagecell b))
      (alphalessp a b)
    (let ((pa (packagecell a)))
      (or (not (symbolp pa))
	  (let ((pb (packagecell b)))
	    (and (symbolp pb) (TTpkgcmp pa pb))))) ))
						       



;-------------						       

(defun UUsort (fn l)
  ;; Sorts the list L according to the comparison function FN.
  ;; FN must be a function of two arguments which determines a partial
  ;;    order on the elements of l.
  ;; L must be a list.
  ;; Returns L sorted.
  ;; ** This is a destructive operation.
  (assert (functionp fn) (error 'UUsort 'errfun fn))
  (assert (listp l) (error 'UUsort 'errnla l))
  (if (null (cdr l))
      l
    (let ((l1 l)
	  (l2 ()))
      (setq l  (nthcdr (sub1 (div (length l) 2)) l)
	    l2 (cdr l))
      (rplacd l ())
      (UUffusion (UUsort fn l1) (UUsort fn l2) fn))))

(defun UUffusion (l1 l2 fn)
  ;; Physical fusion of the two sorted lists L1 and L2 according to
  ;; the comparison function FN.
  ;; L1 and L2 must be lists sorted according to FN.
  ;; FN must be a function of 2 arguments which decides a partial
  ;; ordering on the elements of L1 and L2.
  ;; Returns L1, modified to take into account L2.
  (unless (funcall fn (car l1) (car l2))
    (psetq l1 l2 l2 l1))
  (prog1 l1
    (while (and (cdr l1) l2)
      (when (funcall fn (car l2) (cadr l1))
	(rplacd l1 (prog1 l2 (setq l2 (cdr l1)))))
      (nextl l1))
    (when l2 (rplacd l1 l2))))

;;; Predefined sortings.

(defun UUsortl (l)
  ;; Alphabetic sort.  The elements of L, a list, must be items for
  ;; which PNAME works. (symbols, strings, numbers.)
  (UUsort #'alphalessp l))

(defun UUsortn (l)
  ;; Numeric sort.  The elements of L, a list, must be numbers which <
  ;; can handle.
  (UUsort #'< l))

(defun UUsortp (l)
  ;; Sort according the packages (what does THAT mean??).  The
  ;; elements of L must be symbols.
  (UUsort #'UUpkgcmp l))

(defun UUpkgcmp (a b)
  ;; Compare 2 symbols by considering that their packages form part of
  ;; their name.
  ;; compare 2 symboles en conside'rant que
  ;; les packages font partie du nom.
  ;; Si non symbole: place' devant.
  (if (eq (packagecell a) (packagecell b))
      (alphalessp a b)
    (let ((pa (packagecell a)))
      (or (not (symbolp pa))
	  (let ((pb (packagecell b)))
	    (and (symbolp pb) (UUpkgcmp pa pb))))) ))
						       



