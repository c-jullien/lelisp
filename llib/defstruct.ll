;;;
;;; DEFSTRUCT: Definition of Structures.
;;;
;;; $Source: /usr/cvs/lelisp/llib/defstruct.ll,v $
;;; $Date: 2016/05/21 10:36:05 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

;;; The basic DEFSTRUCT facility. With:
;;;   - the use of typed vectors
;;;   - access function withour consing
;;;   - create functions #:make:<type>

(unless (>= (version) 15.2)
        (error 'load 'erricf 'defstruct))

(defvar #:sys-package:colon 'defstruct)

(add-feature 'defstruct)

;;;
;;; When set, this flags allows the creation of all the herited
;;; fields.
;;;

(defvar #:system:defstruct-all-access-flag t)

;;;
;;; The STRUCTURE type. The PList of a structure name contains:
;;;   - the prototype of the structure
;;;   - the list of fields' names (to be used by the syntax #S...)

(defun structurep (x)
  (if (and (vectorp x)
	   (getprop (typevector x) 'defstruct))
      t
      ()))

;;;
;;; Defining a structure.
;;;

(defmacro defstruct (name . lfield)
  ;;set the defaulted initial value ()
  (unless (variablep name)
          (error 'defstruct 'errnva name))
  (let ((name1 name)
        (index -1)
        (make (mapcar (lambda (x)
			(cond ((symbolp x) ())
			      ((or (atom x)
				   (not (symbolp (car x))))
			       (error 'defstruct 'errnaa x))
			      (t (cadr x))))
                      lfield))
        (lfieldt (mapcar (lambda (x)
			   (if (atom x) x (car x)))
                         lfield)))
    ;; what will be saved on the plist
    (setq lfield (cons make lfieldt))
    (until (or (eq (packagecell name1) '||)
	       (null (getprop (packagecell name1) 'defstruct)))
	   (setq name1 (packagecell name1))
	   (setq make (append (car (getprop name1 'defstruct)) make))
	   (setq lfieldt (append (cdr (getprop name1 'defstruct))
				 lfieldt)))
    `(exportable-definition  ',name 'structure
	     (putprop ',name ',lfield 'defstruct)
	     (defun ,(symbol name 'make) ()
		 (let ((vector (vector ,@make)))
		   (typevector vector ',name)
		   vector))
	     ,@(mapcan
		(lambda (f)
		  (incr index)
		  (when (or #:system:defstruct-all-access-flag
			    (memq f lfield))
			(setq f (symbol name f))
			`((defun ,f &nobind
			      (#:system:structaccess ',f ,index
						     (arg 0) 
						     (arg 1)
						     (arg)))
			  (when (featurep 'setf)
				(defsetf ,f ,f))
			  (when (featurep 'compiler)
				(defmacro-open
				  ,f (struct . valeur)
				  (ifn valeur
				       `(vref ,struct ,,index)
				       `(vset ,struct 
					      ,,index
					      ,(car valeur))))
				))))
		lfieldt)
	     )))


;;;
;;; The generic constructor
;;;

(defun new (type)
  (if (getprop type 'defstruct)
      (apply (symbol type 'make) ())
    (error 'new 'errstc type)))

