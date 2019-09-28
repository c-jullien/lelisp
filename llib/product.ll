;;;
;;; PRODUCT:  The Product Interface
;;;
;;; $Source: /usr/cvs/lelisp/llib/product.ll,v $
;;; $Date: 2016/05/21 10:36:06 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

(setq #:sys-package:colon 'product)

(eval-when (eval local-compile)
	   (unless (featurep 'hash-table)
		   (loadmodule 'hash)))

(unless (featurep 'product)
	(add-feature 'product))

;;;
;;; Product Structure
;;;

(eval-when (eval local-compile)

	   (defstruct :product
	     ;; a symbol
	     name
	     ;; an integer
	     id 
	     ;; a date struct
	     date
	     ;; a number
	     version 
	     ;; a number
	     subversion 
	     ;; a list of strings
	     comment
	     )
)

;;; 
;;; This is a bit hard-wired but i cannot export the maker of a
;;; structure without the accessors. In this case I don't want the
;;; accessors. May the god of code  quality forgive me.
;;;

(eval-when (local-compile)

	   (defmacro-open  #:product:product:make ()
	     `(let ((vector (vector () () () () () ())))
		(typevector vector '#:product:product)
		vector))
)

;;;
;;; How we build and update a database
;;;

(defvar :*product-database-holder*)

(defun product-build-info (name . keylist)
  ;; name : product name
  ;; keylist : a key value list where key values are : name, id,
  ;; date...
  ;; RETURNS: name
  ;;
  ;; builds it if not already there
  (unless :*product-database-holder*
	  (setq :*product-database-holder*
		(make-hash-table-eq)))
  ;; 
  (let ((prodstruct (:product:make)))
    (unless (symbolp name)
	    (error 'product-build-info
		   'ERRSYM
		   name))
    (puthash name :*product-database-holder* prodstruct)
    ;; update product name
    (:product:name prodstruct name)
    ;;
    ;; treat the key list
    ;;
    (do ((l keylist (cddr l)))
	((null l))
	(let ((key (car l))
	      (value (cadr l)))
	  ;; berk \\ i need to destructure
	  (selectq key
		   (name (:product:name prodstruct value))
		   (id (:test-id name value)
		       (:product:id prodstruct value))
		   ;;
		   (date (:test-date name value)
			 (:product:date prodstruct value))
			  
		   (version (:test-version name value)
			    (:product:version prodstruct (string value)))

		   (subversion (:test-version name value)
			       (:product:subversion prodstruct value))

		   (comment (:test-comment name value)
			    (:product:comment prodstruct value))
		   (t (error 'product-build-info
			     'ERRBPA
			     key))))))
  name)

;;;
;;; Follows boring code
;;;

(eval-when (eval local-compile)

	   (defmacro :build-access (:getter :setter :lowergetter :tester)

	     `(progn

		(defun ,:getter (name)
		  (let ((hand (:gethash name :*product-database-holder*)))
		    (if hand
			(,:lowergetter hand)
		      (error ',:getter
			     'unknown-product
			     name))))

		(defun ,:setter (name value)
		  (,:tester ,:setter value)
		  (let ((hand (:gethash name :*product-database-holder*)))
		    (if hand
			(,:lowergetter hand value)
		        (error ',:setter
			       'unknown-product
			       name))))
		)))
)

(defun :gethash (product hasht)
  (ifn hasht
       (error 'product-access
	      'unknown-product
	      product)
       (gethash product :*product-database-holder*)))

;;; Here we go ....

(:build-access product-id set-product-id :product:id
	       :test-id)
(:build-access product-date set-product-date :product:date 
	       :test-date)
(:build-access product-version set-product-version :product:version
	       :test-version)
(:build-access product-subversion set-product-subversion
	       :product:subversion
	       :test-version)
(:build-access product-comment set-product-comment :product:comment
	       :test-comment)



(defun product-all-names ()
  ;;
  ;; returns the list of product names
  ;;
  (let (:res)
    (maphash (lambda (key val)
	       (newr :res key))
	     :*product-database-holder*)
    :res))

;;;
;;; More boring you die
;;;

(defun product-print (name)
  ;;
  ;; Very basic print
  ;;
  (let ((hand (:gethash name :*product-database-holder*)))
    (ifn hand
	 (error 'product-print 
		'unknown-product
		name)
       (progn
	 (print "name       : " (:product:name hand))
	 (print "date       : " (:product:date hand))
	 (print "version    : " (:product:version hand))
	 (print "subversion : " (:product:subversion hand))
	 (print "comment    : " (:product:comment hand))
	 t))))


;;;
;;; tests
;;;

(eval-when (eval local-compile)

	   (defmacro :test-id (name value) ())

	   (defmacro :test-date (name value)
	     `(unless (datep ,value)
		      (error ',name
			     ;; no error in LIBDATE ....
			     'ERRBPA 
			     ,value)))

	   (defmacro :test-version (name value) ())

	   (defmacro :test-comment (name value)
	     `(unless (or (stringp ,value)
			  (and (listp ,value)
			       (every 'stringp ,value)))
		      (error ',name
			     'ERRNSA
			     ,value)))
)

(defmessage unknown-product
  (french "nom de produit inconnu")
  (english "unknown product name"))


;;;
;;; Le-Lisp initialization

(product-build-info 'lelisp
		    'version (version)
		    'subversion (eval '(subversion))
		    'id 0
		    'date #:date:#[93 12 1 10 50 27 0 3])

