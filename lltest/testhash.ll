;;;
;;; testhash.ll: Tests of the Hash-Table Facility
;;;
;;; $Source: /usr/cvs/lelisp/lltest/testhash.ll,v $
;;; $Date: 2016/05/21 10:36:07 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------



;;; How to run this test :
;;;
;;; % complice
;;; ^Ltesthash
;;; (compile-all-in-core)
;;; (setq #:hash-table:debug t)
;;; (:test)      ; with complice only
;;; (:subexpr)   ; with complice only
;;;


(unless (featurep 'format)
        (loadmodule 'format))


(unless (featurep 'hash-table)
        (loadmodule "hash"))

;;; .Section "The predicat which tests if a Lisp object is circular or shared"


 (defun :is-circular-or-shared-p (:x)
     (let ((:seen))
	  (tag :finish
	       (:is-circular-aux :x)
	       ())))

 (defvar :elem)

 (defun :is-circular-aux (:x)
     (cond ((memq :x :seen)
	    (exit :finish t))
	   ((consp :x)
	    (newl :seen :x)
	    (when (neq (car :x) 'QUOTE)
		  (:is-circular-aux (car :x))
		  (:is-circular-aux (cdr :x))))
	   ((vectorp :x)
	    (newl :seen :x)
	    (mapvector (lambda (:elem) (when (boundp ':elem)
					     (:is-circular-aux :elem))) :x))
	   (t ())))


;;; .Section "Statistics & Tests"

 (defvar :hash-table-verbose ()) ;  bench is speaky ()=no T=yes

 (defvar :ht ())   ; the recipient of the created hash-tables.

 (de my-print l
  (if :hash-table-verbose
      (mapc  'print l)))

 (de my-print-stat (msg ht)
     (if :hash-table-verbose
      (#:hash-table:print-stat msg ht))))

 (defun  :test  :list-of-tests
    ;; the main test function (in the package USER)

  (if (featurep 'complice)
      (progn 
   (when (or (null :list-of-tests)
	     (memq 'FIX :list-of-tests))
    (:run0 'EQ
	   "regular fixnums with EQ"
	   (:makenb 5000)
	   '(10   20  30  40  50 100 200 300 400 500 1000 1500 2000 2500 3000)
	   '(1000 500 300 150 90 50  5   3   2   2   1    1    1    1    1)))

   (when (or (null :list-of-tests)
	     (memq 'SYMBOL :list-of-tests))
    (:run0 'EQ
	   "system symbols with EQ"
	   (:makelen 2000)
	   '(10   20  30  40  50  100 200 300 400 500 1000 1500 2000)
	   '(1000 500 300 150 100 10  5   3   2   2   1    1    1)))

   (when (or (null :list-of-tests)
	     (memq 'SYMBOL :list-of-tests))
    (:run0 'EQUAL
	   "system symbols with EQUAL"
	   (:makelen 2000)
	   '(10   20  30  40  50  100 200 300 400 500 1000 1500 2000)
	   '(1000 500 300 150 100 10  5   3   2   2   1    1    1)))

   (when (or (null :list-of-tests)
	     (memq 'STRING :list-of-tests))
    (:run0 'EQUAL
	   "system strings with EQUAL"
	   (:makestrg 2000)
	   '(10   20  30  40  50  100 200 300 400 500 1000 1500 2000)
	   '(1000 500 300 150 100 10  5   3   2   2   1    1    1)))

   (when (or (null :list-of-tests)
	     (memq 'VECTOR :list-of-tests))
    (:run0 'EQUAL
	   "system vectors with EQUAL"
	   (:makevect 150)
	   '(10   20  30  40  50  100)
	   '(1000 500 300 150 100 10 )))
 )
  (print " Missing Complice, no (:test).") () )
 )


 (defun :makelen (size)
    ;; creates a list of "size" symbols, all different
    (let ((:ln (oblist)))
	 (setq :ln (delete '_undef_ :ln))
	 (firstn size :ln)))


 (defun :makenb (size)
    ;; creates a list of "size" fixnums, all different
    (let ((:ln (makelist size ())))
	 (let ((:ln :ln) (:i 0))
	      (while :ln
		     (rplaca :ln (setq :i (add1 :i)))
		     (nextl :ln)))
	 :ln))


 (defun :makestrg (size)
    ;; creates a list of "size" strings, all different
    (let ((:ln (makelist size ())))
	 (let ((:lnn :ln))
	      (tag fin
		   (#:system:mapallstring 
		       (lambda (x)
			   (when (and (null (member x :ln))
				      ; remove all the system strings!!
				      (neq (slen x) 256))
				 (rplaca :lnn x)
				 (nextl :lnn)
				 (when (null :lnn) (exit fin)))))))
	 (setq :gla :ln)
	 :ln))

 (defun :makevect (size)
    ;; creates a list of "size" vectors, 
    ;; all different without any circular vectors.
    ;; the hash-tables objects are excluded because they can
    ;; be modified any time.
    (let ((:ln (makelist size ()))
	  (:to-remove
	       (let ((l))
		    (#:system:mapallvector 
		       (lambda (x) (when (hash-table-p x)
					 (newl l x)
					 (newl l (hash-table-values x)))))
		    l)))
	 ; remove the TABCHAN vector (which is mutable!)
	 (let ((x (channel t)))
	      (#:system:mapallvector (lambda (v) (when (equal x v)
						       (newl :to-remove v)))))
	 (setq :gla :to-remove)
	 (let ((:lnn :ln))
	      (tag fin
		   (#:system:mapallvector
			(lambda (x)
			    (when (and (null (memq x :to-remove))
				       (null (member x :ln))
				       (null (:is-circular-or-shared-p x)))
				  (rplaca :lnn x)
				  (setq :lnn (cdr :lnn))
				  (when (null :lnn) (exit fin)))))))
	 (setq :gln :ln)
	 :ln))


 (defvar :in-test-p ())


 (defun gcalarm ()
     (when :in-test-p
	   (my-print '("GC during the HASH test" (gcinfo)))))

 (defun :run0 (type msg listobj listlen listsfact)
    (my-print '())
    (my-print '("==================== " msg " ===================="))
    (mapc (lambda (len sfact)
	    (setq :ht (if (eq type 'EQ)
			  (make-hash-table-eq)
			  (make-hash-table-equal)))
	    (my-print '())
	    (my-print '("===== " msg " length=" len " scaling=" sfact))
	    (:run1 (firstn len listobj) sfact 'EQ)
	    (my-print-stat "resulting hash-table" :ht))
	  listlen
	  listsfact))


 (defun :run1 (:list-of-objects :scaling-factor :type)
    (let* ((:runtime 0.0)
	   (:length-of-list-of-objects (length :list-of-objects))
	   (:equivalent-A-list
	       (let ((:index 0))
		    (mapcar (lambda (:elem)
				    (cons :elem (setq :index (add1 :index))))
			    :list-of-objects))))

	  (gc)
	  (let ((:in-test-p t))
	       (my-print '())
	       (my-print '("Time to hash the list of objects"))
	       (setq :runtime (runtime))
	       (let ((:index 0))
		    (mapc (lambda (:elem) (setf (gethash :elem :ht)
						(setq :index (add :index 1))))
			  :list-of-objects))
	       (setq :runtime (- (runtime) :runtime))
	       (my-print '("Time in sec = " :runtime))
	       (my-print '("Average in microsec = "
		      (/ (* 1000000. :runtime) :length-of-list-of-objects))))


	  (let ((:in-test-p t))
	       (my-print '())
	       (my-print '("Time to retrieve and check all the objects with an HASH-TABLE"))
	       (setq :runtime (runtime))
	       (repeat :scaling-factor
		       (let ((:index 0))
			    (mapc (lambda (:elem)
				    (when (neq (gethash :elem :ht)
					       (setq :index (add1 :index)))
					  (:printerror "*****Hash-Table BUG"
						 (list :elem :ht :index))))
				  :list-of-objects)))
	       (setq :runtime (- (runtime) :runtime))
	       (my-print '("Time in sec = " :runtime))
	       (my-print '("Average in microsec = "
		      (/ (/ (* 1000000. :runtime) :length-of-list-of-objects)
			 :scaling-factor))))

	  (let ((:in-test-p t))
	       (my-print'())
	       (my-print '("Time to retrieve and check all the objects with an A-List"))
	       (if (eq :type 'EQ)
		   (progn
		     (setq :runtime (runtime))
		     (repeat :scaling-factor
			  (let ((:index 0))
			       (mapc (lambda (:elem)
				       (when (neq (cassq :elem
							 :equivalent-A-list)
						  (setq :index (add1 :index)))
					     (:printerror "*****A-List EQ BUG"
							  :elem)))
				     :list-of-objects)))
		     (setq :runtime (- (runtime) :runtime)))
		   (progn
		     (setq :runtime (runtime))
		     (repeat :scaling-factor
			  (let ((:index 0))
			       (mapc (lambda (:elem)
				       (when (neq (cassoc :elem
							 :equivalent-A-list)
						  (setq :index (add1 :index)))
					     (:printerror "*****A-List EQUAL BUG"
							  :elem)))
				     :list-of-objects)))
		     (setq :runtime (- (runtime) :runtime))))

	       (my-print '("Time in sec = " :runtime))
	       (my-print '("Average in microsec = "
		      (/ (/ (* 1000000. :runtime) :length-of-list-of-objects)
			 :scaling-factor)))))

	  (when #:hash-table:debug
		(mapvector (lambda (x)
			     (when (gt (length x) 10)
				   (with ((lmargin 10))
					 (my-print '((length x) "===="))
					 (my-print '(x))))
			     (my-print '()))
			   (hash-table-values :ht)))
 )

(defun :printerror (msg larg)
   (print "***** PRINTERROR " msg " larg=" larg))        



;;; .Section "Search the common sub-expressions"

(unless (featurep 'pathname)(loadmodule "path"))

(defun :subexpr ()
 (if (featurep 'complice)
     (progn
     (:subfiles `( ,(pathname "../llobj/complice.lo")))
     (:subfiles `( ,(pathname "../llib/llcp.ll")))
     (:subfiles `( ,(pathname "../llib/llcp.ll")
	           ,(pathname "../llib/startup.ll"))))
     (print " Missing Complice, no (:subexpr).") () ))


(defun :subfiles (files)
    (let ((list-of-objects)
	  (read-object)
	  (number-of-objects 0)
	  (runt)
	  (ht (make-hash-table-equal)))
      (my-print '())
      (my-print '("======= Common Sub Expressions with the files : " files))
      (gc)
      (setq runt (runtime))

      (mapc (lambda (file)
	      (dynamic-let ((#:sys-package: colon #:sys-package:colon))
		 (with ((inchan (openi file)))
		       (untilexit eof
				  (setq read-object (read))
				  (when (and (consp read-object)
					     (memq (car read-object)
						   '(unless defvar setq)))
					(eval read-object))
				  (newl list-of-objects read-object)))))
	    files)

      (setq runt (- (runtime) runt))
      (my-print '("Time to read the files  " runt))

      (gc)
      (setq runt (runtime))
      (:subexpr-aux list-of-objects ht)
      (setq runt (- (runtime) runt))
      (my-print '("Time to hash the files  " runt))
      (maphash (lambda (key value)
		 (setq number-of-objects (add number-of-objects value)))
	       ht)
      (my-print '("number of objects       " number-of-objects))
      (my-print '("search by element       " (/ runt number-of-objects)))
      (my-print-stat "common sub expr" ht)
      (when #:hash-table:debug
	    (maphash (lambda (key value)
		       (when (neq value 1)
			     (my-print '(value "++++" key))))
		     ht)
	    (mapvector (lambda (x)
			 (when (gt (length x) 10)
			       (my-print '((length x) "===="))
			       (with ((lmargin 10))
				     (my-print '(x)))))
		       (hash-table-values ht)))
      (gc)
      (setq runt (runtime))
      (dynamic-let ((:seen))
		   (:subexpr-alist list-of-objects)
		   (setq runt (- (runtime) runt))
		   (my-print '("Time to a-list the file " runt))
		   (my-print '("search by element     " (/ runt number-of-objects)))
		   (my-print '("Length of the A-list " (length :seen))))))
		
(defun :subexpr-alist (l)
    (when (consp l)
	  (let ((i (assoc l :seen)))
	       (if (consp i)
		   (setf (cdr i) (+ (cdr i) 1))
		   (newl :seen (cons l 1))))
	  (mapc ':subexpr-alist l)))


(defun :subexpr-aux (list-of-objects ht)
    (if (atom list-of-objects)
	ht
        (progn (inchash list-of-objects ht 1 1)
	       (while (consp list-of-objects)
		      (when (consp (car list-of-objects))
			    (:subexpr-aux (car list-of-objects) ht))
		      (setq list-of-objects (cdr list-of-objects)))
	       ht)))



(progn 
  (print)
  (print "(:test) to performs meters")
  (print "(:subexpr) or (:subexpr  <files*>)")
  (print "to compute the common subexpressions")
  (print))


(unless (featurep 'testcomm)
        (libload testcomm))


(testfn ()
	(catenate #:system:lltest-directory
		  "hash.lt"))
