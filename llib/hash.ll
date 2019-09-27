;;;
;;; HASH:  Hash-Table Facility
;;;
;;; $Source: /usr/cvs/lelisp/llib/hash.ll,v $
;;; $Date: 2016/05/21 10:36:05 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------



;;; The EQUAL hash tables don't work with shared or circular structures,
;;; the stack blows up like EQUAL! 
;;; In the case of EQUAL hash tables, the entries inserted CANNOT be
;;; modified!


(unless (>= (version) 15.2)
        (error 'load 'erricf 'hash))

(defvar #:sys-package:colon 'hash-table)

(add-feature 'hash-table)


;;;
;;; "Errors and Debug Machinery
;;;


;;; If not (), the :rehash function will print various statistics.

(defvar :debug ())


(defmessage :errnht (french "L'argument n'est pas une table de hachage")
                    (english "not an Hash Table"))
(defmessage :errbht (french "Le type de la table de hachage est inconnu")
                    (english "Bad type for an Hash Table"))

(defmacro :error-nht (function-name bad-argument)
  `(error ,function-name ':errnht ,bad-argument))

(defmacro :error-bht (function-name bad-argument)
  `(error ,function-name ':errbht ,bad-argument))


;;;
;;; "The Hash-Table structure and control variables"
;;;

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Don't modify these variables, test the changes before
;;; using dynamic-let and run the "testhash" file to see
;;; all the perverse effects of your changes !
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;; Any hash table is statically constrained by :
;;; - the lowest size of the vector containing the  buckets
;;; - the biggest size of the vector containing the buckets
;;; - the maximum number of entries.

(eval-when (load eval compile) ; we need this values during compilation
;;; the lowest size of an hash-table. It is preferable to
;;; chose a prime number (17 is the smallest usable).
(defvar :default-lowest-size 17)

;;; the biggest size of an hash-table (due to the growing
;;; threshold, 9239 is a good prime number (the threshold
;;; is at this time around 4)).
(defvar :default-biggest-size 9239)

;;; the biggest number of entries (due to the limitation
;;; of the range of the fixnums in Le-Lisp).
(defvar :default-max-number-of-entries 32767)


;;; Any hash table is subject to be dynamically growed or shrinked.
;;; This dynamic behaviour is controled by:
;;; - the length of any single bucket
;;; - the ratio entries/size


;;; The maximum length of a single bucket. If a bucket overflows
;;; a growing-rehash is automatically performed. There is no
;;; minimum length, which can be 0.
(defvar :default-max-bucket-length 12)


;;; The  growing-threshold of the ratio : number of elements / size
;;; before an automatic growing-rehash.
(defvar :default-growing-threshold (scale :default-max-bucket-length 1 2))


;;; The default growing factor used by the automatic growing-rehash
(defvar :default-growing-factor 1.6)


;;; The  shrinking-threshold of the ratio : number of elements / size
;;; before an automatic shrinking-rehash.
(defvar :default-shrinking-threshold 2)


;;; The default shrinking factor used by the automatic shrinking-rehash
(defvar :default-shrinking-factor 2.0)


;;; In order to limit the time used to compute an hash key for
;;; the sequences (lists, vectors and strings), the SXHASH
;;; function looks only at the first :max-significative-element.
;;; The final comparison which will use EQUAL, is obviously
;;; completely accurate, but is faster and terminates at the
;;; first difference. This number must be even.

(defvar :max-significative-element 10)

) ;end EVAL-WHEN

;;; The hash-table structure itself
(eval-when (load eval compile)
(defstruct  hash-table
  (type     'EQ)                  ; always EQ or EQUAL
  (vect     #[])                  ; always a VECTOR
  (entries  0)                    ; always a fixnum
  (size     (dynamic :default-lowest-size)) ; always a fixnum

  ;; I am not sure to keep these values onto the structure.

  (max-bucket-length    (dynamic :default-max-bucket-length))
  (growing-threshold    (dynamic :default-growing-threshold))
  (growing-factor       (dynamic :default-growing-factor))
  (shrinking-threshold  (dynamic :default-shrinking-threshold))
  (shrinking-factor     (dynamic :default-shrinking-factor)))
)

(defsetf gethash (key hash-table) (value)
   ;; for the SETF amators ...
   `(puthash ,key ,hash-table ,value))


;;;
;;; "Define the new extended type HASH-TABLE"
;;;


(defun hash-table-p (object)
  ;; returns T if "object" is an hash-table (of any kind)
  (if (eq (type-of object) 'hash-table)
      t
      ()))


(defun :eval (hash-table)
  ;; the value of an hash-table is the hash-table itself.
  hash-table)


(defun :prin (hash-table)
  ;; The new X3J13 proposal:  #sizeH(type (key elem) ....)
  (let ((#:system:print-for-read ()))
    (prin (catenate "#" (:size hash-table) "H")))
  (if #:system:print-for-read
      (progn (let ((#:system:print-for-read ())) (prin "("))
	     (prin (:type hash-table))
	     (mapvector
	      (lambda (bucket)
		(when (consp bucket)
		      (mapc
		       (lambda (slot)
			 (let ((key   (car slot))
			       (value (cdr slot)))
			   (prin (list key value))))
		       bucket)))
	      (:vect hash-table))
	     (let ((#:system:print-for-read ())) (prin ")")))
      (prin (catenate "<" (:entries hash-table) ">"))))

(defun #:sharp:|H| (size)
  (:|H| size))

(eval-when (eval compile)
(defsharp |H| (size)
  (:|H| size))

(defmacro :|H| (sz)
  ;; read an hash-table printed with the preceding function
  ;; with #:system:print-for-read flag to T.
  `(let ((lst (read)))
      (if (atom lst)
	  (error '|#H| 'errsxt "not printed properly")
        (let ((hash-table (make-hash-table ,sz (car lst))))
	  (mapc (lambda ((key value))
		  (setf (gethash key hash-table) value))
		(cdr lst))
	  (list hash-table)))))
)

;;;
;;; "Creation of Hash Tables"
;;;
(eval-when (load eval compile)
(defun make-hash-table-eq &nobind
  ;; (make-hash-table-eq [size])
  ;; create an EQ hash-table of [size].
  (selectq (arg)
      (0 (:create-internal (dynamic :default-lowest-size) 'EQ))
      (1 (:create-internal (:default-size 'make-hash-table-eq (arg 0))
			   'EQ))
      (t (error 'make-hash-table-equ 'errwna 1))))

(defun make-hash-table-equal &nobind
  ;; (make-hash-table-equal [size])
  ;; create an EQUAL hash-table of [size].
  (selectq (arg)
      (0 (:create-internal (dynamic :default-lowest-size) 'EQUAL))
      (1 (:create-internal (:default-size 'make-hash-table-equal (arg 0))
			   'EQUAL))
      (t (error 'make-hash-table-equal 'errwna 1))))

(defun make-hash-table &nobind
  ;; (make-hash-table [size [type]])
  ;; creates any type of hash-table.
  ;; the 1rst argument (opt) contains the size of the table.
  ;; the 2nd  argument (opt) contains the type EQ or EQUAL.
  (selectq (arg)
      (0 (:create-internal (dynamic :default-lowest-size) 'EQ))
      (1 (:create-internal (:default-size 'make-hash-table (arg 0))
			   'EQ))
      (2 (:create-internal (:default-size 'make-hash-table (arg 0))
			   (let ((type (arg 1)))
			     (if (memq type '(EQ EQUAL))
				 type
			         (:error-bht 'make-hash-table type)))))
      (t (error 'make-hash-table 'errwna 2))))
)

(eval-when (load eval compile)
(defun :default-size (function-name size)
  ;; check the default size "size" for the function "function-name"
  ;; id "size" = (), the default value is taken.
  (cond ((null size) (dynamic :default-lowest-size))
	((fixp size) (:compute-good-size size))
	(t (error function-name 'errnia size))))

(defun :create-internal (size type)
  ;; size and type are checked and valid
  (let ((newtable (:make)))
    (:type    newtable type)
    (:size    newtable size)
    (:entries newtable 0)
    (:vect    newtable (makevector size ()))
    newtable))
)

;;;
;;; "Compute a Hash Key"
;;;

(defun sxhash (object)
  ;; returns a fixnum >= 0, the hash key of the object "object".
  ;; this key is equal for two objects which are EQUAL.
  (logand (:sxhash object) #$7FFF))

(defmacro :locint (object)
  ;; returns a positive fixnum which is the sum of both parts
  ;; of the address of the object "object"
  ;;
  ;; This function is written in LLM3:
  ;;
  ;;      FENTRY    LOCINT,SUBR1
  ;;      ADRHL     A1,A2,A1
  ;;      PLUS      A2,A1
  ;;      LAND      #$7FFF,A1
  ;;      RETURN
  ;;
  `(#:system:locint ,object))

(defun :sxhash (object)
  ;; returns a fixnum, encoding the key of the object "object"
  ;; This fixnum has to be the same for two objects EQUAL
  ;; independently of the core-image!
  (cond ((fixp object)       
	 object)
	((or (consp object)
	     (vectorp object))
	 (dynamic-let ((:count (dynamic :max-significative-element))
		       (:result 0))
		      (tag finish
			   (:hash-sequence object))
		      (dynamic :result)))
	((symbolp object)
	 (:hash-symbol object))
	((stringp object)
	 (:hash-string object))
	(t ; for floats.
	 (:hash-float object))))

(defun :hash-symbol (object)
  ;; symbols are always at the same location in a specific core-image.
  ;; A reload in a different core image is also correct because
  ;; the macro-character #H rehashs totally the table.
  ;; Thanks to Harley!
  (let ((pkgc (packagecell object)))
    (if (and pkgc (symbolp pkgc))
	(add (:locint (string object))
	     (:hash-symbol pkgc))
        (:locint object))))

(defun :hash-sequence (object)
  (setf (dynamic :count) (sub1 (dynamic :count)))
  (if (eq (dynamic :count) 0)
      (exit finish ())
      (cond ((fixp object)       
	     (setf (dynamic :result)
		   (add object (dynamic :result))))
	    ((consp object)
	     (:hash-sequence-list object))
	    ((vectorp object)
	     (:hash-sequence-vector object))
	    ((symbolp object)
	     (setf (dynamic :result)
		   (add (:hash-symbol object) (dynamic :result))))
	    ((stringp object)
	     (setf (dynamic :result)
		   (add (:hash-string object) (dynamic :result))))
	    (t ; for floats.
	     (setf (dynamic :result)
		   (add (:hash-float object) (dynamic :result))))
	    )))

(defun :hash-sequence-list (list)
  ;; compute the hash key of a list
  ;; This function iterates on the CDRs.
  (if (atom list)
      (:hash-sequence list)
      (progn (:hash-sequence (car list))
	     (:hash-sequence-list (cdr list)))))

(defun :hash-sequence-vector (vect)
  ;; compute the hash key of a symbolic vector
  (let ((index (vlength vect)))
    (while (neq index 0)
      (setq index (sub1 index))
      (:hash-sequence (vref vect index)))))

(defmacro :rot-add (val1 val2)
  ;; val1 is a name of a variable
  ;; val2 is any expression.
  `(progn (setq ,val1 (add ,val1 ,val1))
	  (when (lt ,val1 0)
		(setq ,val1 (logor (logand ,val1 #$7FFF) 1)))
	  (setq,val1 (add ,val1 ,val2))))

(defun :hash-string (strg)
  ;; compute the hash key of a character string.
  ;; this is the most complicating hashing function
  (let* ((strg-size (slen strg))
	 (maxsig    (dynamic :max-significative-element))
	 (value-key strg-size))
    (cond ((eq strg-size 0)
	   ;; the different "" in different packages.
	   1)
	  ((le strg-size maxsig)
	   ;; few characters : rotate and add all the characters
	   (until (eq strg-size 0)
		  (:rot-add value-key
			    (sref strg (setq strg-size (sub1 strg-size)))))
	   value-key)
	  (t (let ((half (div maxsig 2))
		   (step (add1 (quo strg-size maxsig)))
		   (count 0))
	       ;; a long string : goes step by step
	       ;; from the beginning and the end of the string.
	       (repeat half
		       (:rot-add value-key (sref strg count))
		       (setq count (add count step)))
	       (setq count (sub1 strg-size))
	       (repeat half
		       (:rot-add value-key (sref strg count))
		       (setq count (sub count step)))
	       value-key)))))

(defun :hash-float(flt)
  ;; compute the hash key of a floating point number.
  ;; Has to deal with the 2 representations: 31bitfloat AND 64bitfloat.
  (if (eq 0. 0.)
      ;; 31bitfloat
      (:locint flt)
      ;; 64bitfloats
      (let ((adr (loc flt)))	; get the address of the double
	;; memory always returns a 16 bit value,
	;; don't need to use :locint.
	(add (add (memory adr) (memory (incradr adr 2)))
	     (add (memory (incradr adr 2)) (memory (incradr adr 2)))))))

(defmacro :index-with-eq (key size)
  ;; compute the index of the "key" in a table of "size" using EQ.
  `(rem (:locint ,key) ,size))

(defmacro :index-with-equal (key size)
  ;; compute the index of the "key" in a table of "size" using EQUAL.
  `(rem (sxhash ,key) ,size))


(defun :get-slot-index (key hash-table function-name)
  ;; internal function which finds the index of a specific key
  ;; for a specific function of the user interface.
  (if (hash-table-p hash-table)
      (selectq (:type hash-table)
	       (EQ    (:index-with-eq    key (:size hash-table)))
	       (EQUAL (:index-with-equal key (:size hash-table)))
	       (t     (:error-bht function-name hash-table)))
      (:error-nht function-name hash-table)))

(defun :get-slot (key hash-table function-name)
  ;; internal function which finds the slot of a specific key, for a
  ;; specific function of the interface. Return :
  ;;  - a cons (key . value) if the key exists,
  ;;  - a fixnum : the index of the bucket.
  (let ((:index (:get-slot-index key hash-table function-name)))
    (selectq (:type hash-table)
	     (EQ     (or (assq key (vref (:vect hash-table) :index))
			 :index))
	     (EQUAL  (or (assoc key (vref (:vect hash-table) :index))
			 :index))
	     (t  (:error-bht function-name hash-table)))))

(defun :set-new-slot (key hash-table value index function-name)
  ;; internal function which sets the value of a specific key, for a
  ;; specific function of the user interface.
  (let* ((size   (:size hash-table))
	 (vect   (:vect hash-table))
	 (bucket (vref vect index)))
    (progn (when (ge (:entries hash-table)
		     (dynamic :default-max-number-of-entries))
		 (error 'puthash 'erroob key))
	   (:entries hash-table
		     (add1 (:entries hash-table)))
	   (setf (vref vect index)
		 (acons key value bucket))
	   (when ; the automatic growing-rehash test
	    (or (and (gt (length bucket)
			 (:max-bucket-length hash-table))
		     (gt (div (:entries hash-table) size) 2))
		(gt (div (:entries hash-table) size)
		    (:growing-threshold hash-table)))
	    (when (neq size (dynamic :default-biggest-size))
		  (:growing-rehash hash-table)))))
  value)

(defun :rem-slot (key hash-table index)
  ;; internal function which rmeoves the slot of a specific key, for a
  ;; specific function of the user interface.
  (let* ((size   (:size hash-table))
	 (typeq  (if (eq (:type hash-table) 'EQ) t ()))
	 (vect   (:vect hash-table))
	 (bucket (vref vect index))
	 (previous ()))
    (block complete
	   (loop (if (and bucket
			  (if typeq
			      (eq key (caar bucket))
			    (equal key (caar bucket))))
		     (progn (if previous
				(setf (cdr previous) (cdr bucket))
			        (setf (vref vect index) (cdr bucket)))
			    (:entries hash-table (sub1 (:entries hash-table)))
			    (when ; the automatic shrinking-rehash test
			     (and (lt (div (:entries hash-table) 
					   size)
				      (:shrinking-threshold hash-table))
				  (neq size (dynamic :default-lowest-size)))
			     (:shrinking-rehash hash-table))
			    (return-from complete t))
		   (progn (setq previous bucket
				bucket   (cdr bucket))
			  (when (null bucket)
				(return-from complete () ))))))))

;;;
;;; "Internal Function To Rehash"
;;;

(defun :growing-rehash (hash-table)
  ;; increases the size of "hash-table"
  ;; called by PUTHASH.
  (let ((size (:compute-good-size (fix (* (:size hash-table)
					  (:growing-factor hash-table))))))
    (:internal-rehash hash-table
		      (:create-internal size
					(:type hash-table)))))

(defun :shrinking-rehash (hash-table)
  ;; decreases the size of "hash-table"
  ;; called by REMHASH
  (let ((size (:compute-good-size (fix (/ (:size hash-table)
					  (:shrinking-factor hash-table))))))
    (:internal-rehash hash-table
		      (:create-internal size
					(:type hash-table)))))

(defun :internal-rehash (hash-table new-hash-table)
  ;; performs a rehash of hash-table into new-hash-table
  ;; and physically modifies hash-table with the new content.
  (when (dynamic :debug)
	(:print-stat "rehash: old hash-table" hash-table))
  (maphash (lambda (key value)
	     (setf (gethash key new-hash-table) value))
	   hash-table)
  (:size    hash-table (:size    new-hash-table))
  (:vect    hash-table (:vect    new-hash-table))
  (:entries hash-table (:entries new-hash-table))
  (when (dynamic :debug)
	(:print-stat "rehash: new hash-table" hash-table))
  hash-table)

(eval-when (load eval compile)
(defun :compute-good-size (size)
  ;; computes a "good" new size greater than size.
  (cond ((le size (dynamic :default-lowest-size))
	 (dynamic :default-lowest-size))
	((ge size (dynamic :default-biggest-size))
	 (dynamic :default-biggest-size))
	(t
	 (when (evenp size)
	       (setq size (add1 size)))
	 ;; waiting for a list of good prime numbers ...
	 (while (any (lambda (n) (eq (rem size n) 0))
		     ;; 9 is not an experimental error!!!
		     '(3 5 7 11 13))
	   (setq size (add size 2)))
	 size)))
)

;;;
;;; "User interface to manipulate entries of hash-tables"
;;;

#|
; This definition seems more easy-going with lelisp ideal
; but the next one IS a little faster

(defun gethash &nobind 
  ;;  (gethash key hash-table &optional default)
  ;; returns the object with the key "key" in the table "hash-table"
  ;; gethash (version 15) don't return a multiple value.
  (let ((key (if (lt (arg) 2) (error 'gethash 'errwna 2) (arg 0)))
	(hash-table (arg 1))
	(default (if (eq (arg) 3) (arg 2)
		   (if (gt (arg) 3)
		       (error 'gethash 'errwna 3)))))
    (let ((slot (:get-slot key hash-table 'gethash)))
      (if (consp slot)
	  (cdr slot)
	default))))
|#

(defun gethash (key hash-table . default)
  ;;  (gethash key hash-table &optional default)
  ;; returns the object with the key "key" in the table "hash-table"
  ;; gethash (version 15) don't return a multiple value.
  (if (cdr default)
      (error 'gethash 'errwna 2)
      (let ((default (car default))
	    (slot (:get-slot key hash-table 'gethash)))
	(if (consp slot)
	    (cdr slot)
	    default))))

(defun puthash (key hash-table value)
  ;; adds a new value into the table.
  ;; if the key exists, the value of the key is modified.
  ;; This function does not exist in CLtL but is used
  ;; to define the SETF method used with GETHASH.
  (let ((slot (:get-slot key hash-table 'puthash)))
    (if (consp slot)
	(setf (cdr slot) value)
        (:set-new-slot key hash-table value slot 'puthash))))

(defun inchash (key hash-table increment default)
  ;; increment a new value into the table.
  ;; This function does not exist in CLtL but is used
  ;; to define the INCF method used with GETHASH.
  (let ((slot (:get-slot key hash-table 'inchash)))
    (if (consp slot)
	(setf (cdr slot)
	      (+ (cdr slot) increment))
        (:set-new-slot key hash-table default slot 'inchash))))

(defun dechash (key hash-table increment default)
  ;; decrement a new value into the table.
  ;; This function does not exist in CLtL but is used
  ;; to define the DECF method used with GETHASH.
  (let ((slot (:get-slot key hash-table 'dechash)))
    (if (consp slot)
	(setf (cdr slot)
	      (- (cdr slot) increment))
        (:set-new-slot key hash-table default slot 'dechash))))

(defun remhash (key hash-table)
  ;; remove the key in the hash-table
  ;; returns T id the key exists, () if not.
  (let ((index (:get-slot-index key hash-table 'remhash)))
    (:rem-slot key hash-table index)))

;;;
;;; "Functions to manipulate HashTables"
;;;

(eval-when (compile)

(defmacro-open maphash (fnt h-t)
  `(mapvector (lambda (x)
		(when (consp x)
		      (mapc (lambda(slot)
			      ,(#:compiler:map-funcall
				'((car slot) (cdr slot)) fnt))
			    x)))
	      (#:hash-table:vect ,h-t)))
)

(defun maphash (funct hash-table)
  ;; appy "funct" to all the elements of "hash-table"
  (if (hash-table-p hash-table)
      (mapvector (lambda (bucket)
		   (when (consp bucket)
			 (mapc (lambda (slot)
				 (let ((key   (car slot))
				       (value (cdr slot)))
				   (funcall funct key value)))
			       bucket)))
		 (:vect hash-table))
    (:error-nht 'maphash hash-table)))

(defun clrhash (hash-table)
  ;; clear an hash-table.
  (if (hash-table-p hash-table)
      (let ((vect (:vect hash-table)))
	(for (index 0 1 (sub1 (:size hash-table)))
	     (setf (vref vect index) ()))
	(:entries hash-table 0)
	hash-table)
      (:error-nht 'clrhash hash-table)))

(defun hash-table-count (hash-table)
  ;; returns the number of elements stored into "hash-table"
  (if (hash-table-p hash-table)
      (:entries hash-table)
      (:error-nht 'hash-table-count hash-table)))

(defun hash-table-values (hash-table)
  ;; returns the vector of elements stored into "hash-table"
  ;; this is not described in CLtL but avoid to
  ;; export (:vect ...)
  (if (hash-table-p hash-table)
      (:vect hash-table)
      (:error-nht 'hash-table-values hash-table)))


;;;
;;; "For statistics and Tests"
;;;

(defun :print-stat (message hash-table)
  ;; prints various statistics on the table hash-table
  (print)
  (print message "  HT=   " hash-table)
  (print "  list of size: ")
  (let ((size (:size hash-table))
	(entr (:entries hash-table))
	(vect (:vect hash-table))
	(ls ()))
    (for (i 0 1 (sub1 (vlength vect)))
	 (newl ls (length (vref vect i))))
    (print (setq ls (sortn ls)))
    (let ((len (apply #'+ ls)))
      (when (neq entr len)
	    (print "Pb with entries : :entries=" entr "  len="len))
      (print " average size: " (/ entr size)))))
