;;;
;;; MICROCEXY:  The minimal object model of Le-Lisp 15.2x.
;;;
;;; $Source: /usr/cvs/lelisp/llib/microceyx.ll,v $
;;; $Date: 2016/05/21 10:36:05 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

(unless (>= (version) 15.2)
        (error 'load 'erricf 'microceyx))

(defvar #:sys-package:colon 'microceyx)

(add-feature 'microceyx)


;;;
;;; Initializations
;;;


(eval-when (eval)

	   (unless (featurep 'defstruct)
		   (libload defstruct t))

	   (unless (featurep 'abbrev)
		   (libload abbrev)))


;;;
;;; Errors messages
;;;

(defmessage :errnotafield
           (french "l'argument n'est pas un champ de Tclass microceyx")
	   (english "argument not a field of a microceyx Tclass"))

(defmessage :errnotatclass
           (french "l'argument n'est pas un nom de Tclass microceyx")
	   (english "argument not a name of a microceyx Tclass"))

(defmessage :errtclassabbrev
           (french "abre'viation de Tclass microceyx de'ja` de'finie")
	   (english "abbrev of microceyx Tclass already defined"))

(defmessage :errrecordabbrev
           (french "abre'viation de Record microceyx de'ja` de'finie")
	   (english "abbrev of microceyx Record already defined"))

(defmessage :errbadfield
           (french "erreur de syntaxe pour un champ")
	   (english "syntax error in field"))

(defmessage :errrecordtoolong
           (french "un Record ne peut pas avoir plus de 16 champs")
	   (english "16 fields maximum per Record"))

(defmessage :errnotarecordoratclass
        (french "l'argument n'est pas un nom de Tclass ou de Record microceyx")
	(english "argument not a name of microceyx Tclass or Record"))

(defun :check-record-or-tclass (fn type)
  (until (and (symbolp type)
	      (or (tclass-namep type)
		  (record-namep type)
		  (getprop type 'defstruct)))
	 (setq type (error fn ':errnotarecordoratclass type)))
  type)

(defun :check-tclass (fn type)
  (until (tclass-namep type)
	 (setq type (error fn ':errnotatclass type)))
  type)

(defun :check-field (fn type field)
  (until (and (symbolp field) (getfn type field))
	 (setq field (error fn ':errnotafield (list type field))))
  field)

;;;
;;; DEFTCLASS definition
;;;

#|

The DEFTCLASS macro is equivalent to the DEFSTRUCT macro, with the
two fifferences:
- the name of the class is interned in the Tclass package
- the name of the class becomes an abbreviation

For exemple:

     (DEFTCLASS FOO A (B 2) C)
     (DEFTCLASS {FOO}:BAR (D 4))

is equivalent to:

     (PROGN (LET ((#:SYSTEM:DEFSTRUCT-ALL-ACCESS-FLAG ()))
                 (DEFSTRUCT #:TCLASS:FOO A (B 2) C))
            (DEFABBREV FOO #:TCLASS:FOO))

     (PROGN (LET ((#:SYSTEM:DEFSTRUCT-ALL-ACCESS-FLAG ()))
                 (DEFSTRUCT #:TCLASS:FOO:BAR (D 4)))
            (DEFABBREV BAR #:TCLASS:FOO:BAR))

|#

(eval-when (load eval compile)
(defmacro deftclass (type . fields)
  (let ((type-abbrev))
    (until (and (symbolp type)
		(or (null (packagecell type))
		    (tclass-namep (packagecell type))))
	   (setq type
		 (error 'deftclass ':errnotatclass type)))
    (when (null (packagecell type))
	  (setq type (symbol 'Tclass type)))
    (setq type-abbrev (symbol || type))
    (when (and (abbrevp type-abbrev)
	       (neq (get-abbrev type-abbrev) type))
	  (error 'deftclass ':errtclassabbrev type-abbrev))
    `(progn
       (defstruct ,type ,.fields)
       (defabbrev ,(symbol || type) ,type)
       ',type)))
)

;;;
;;; DEFRECORD macro
;;;

#|

This macro is similar to the DEFSTRUCT function, except that the
instances it creates are implemented in the form of balanced binary
trees of lists cells. Moreover, the instances contain no type
information. They only satisfy the CONSP and LISTP predicates.

The symbol must be in the root package. There is no inheritance for
the records. For consistency with the DEFTCLASS macro, an abbreviation
for the symbol est defined.  itself---is defined.

A record cannot have more than 16 fields, otherwise the
ERRRECORDTOOLONG error is raised.

|#
(eval-when (load eval compile)
(defmacro defrecord (name . lfield)
  ;; check the name.
  (until (and (variablep name)
	      (null (packagecell name)))
	 (setq name  (error 'defrecord 'errnva name)))
  ;; no more than 16 fields
  (when (gt (length lfield) 16)
	(error 'defrecord ':errrecordtoolong `(,name ,@lfield)))
  ;; check the field (default value = ())
  (setq lfield
	(mapcar (lambda (f)
		  (until (or (symbolp f)
			     (and (consp f)
				  (symbolp (car f))
				  (consp (cdr f))
				  (null (cddr f))))
			 (setq f
			       (error 'defrecord ':errbadfield f)))
		  (or (consp f)
		      `(,f ())))
		lfield))
  ;; check if the abbreviation is not already defined.
  (when (and (abbrevp name)
	     (neq (get-abbrev name) name))
	(error 'defrecord ':errrecordabbrev name))
  (let* ((access (ncons ()))
	 (constructor
	  (if (cdr lfield)
	      (:make-field-access name lfield () access)
	      (:make-single-field-access name lfield access))))
    `(exportable-definition ',name 'structure
	 (de ,(symbol name 'make) ()
	     ,constructor)
	 ,.(cdr access)
	 (putprop ',name 
		  ',(cons (mapcar 'car lfield) (mapcar 'cadr lfield))
		  'defrecord)
	 (defabbrev ,name ,name)
	 )))

(defun :make-single-field-access (name lfield access)
  (nconc access
	 (list 
	  `(de ,(symbol name (caar lfield)) &nobind
	       (if (eq (arg) 1)
		   (car (arg 0))
		   (car (rplaca (arg 0) (arg 1)))))
	  (when (featurep 'compiler)
                `(defmacro-open ,(symbol name (caar lfield)) (o . v)
		   (ifn v
			`(car ,o)
			`(car (rplaca ,o ,(car v))))))))
  `(ncons ,(cadar lfield)))


(defun :make-field-access (name lfield cadrs access)
  (cond ((null (cdr lfield))
	 (nconc access (:make-access name (car lfield) cadrs))
	 (cadar lfield))
	(t
	 `(cons
	   ,(:make-field-access 
	     name
	     (firstn (div (length lfield) 2) lfield)
	     (cons 'a cadrs)
	     access)
	   ,(:make-field-access 
	     name
	     (nthcdr (div (length lfield) 2) lfield)
	     (cons 'd cadrs)
	     access)))))

(defun :make-access (name field cadrs)
  ;; A Great backquote!
  `((de ,(symbol name (car field)) &nobind
	(if (eq (arg) 1)
	    (,(implodech `(c ,@cadrs r)) (arg 0))
	    (,(implodech `(c ,(car cadrs) r))
	     (,(concat "rplac" (car cadrs))
	      ,(if (cdr cadrs)
		   `(,(implodech `(c ,@(cdr cadrs) r)) (arg 0))
		   `(arg 0))
	      (arg 1)))))
    ,@(when (featurep 'compiler)
	    `((defmacro-open ,(symbol name (car field)) (o . v)
		(ifn v
		     `(,',(implodech `(c ,@cadrs r)) ,o)
		     ,(if (cdr cadrs)
			  ``(,',(implodech `(c ,(car cadrs) r))
			     (,',(concat "rplac" (car cadrs))
			      ,`(,',(implodech `(c ,@(cdr cadrs) r)) ,o)
			      ,(car v)))
			  ``(,',(implodech `(c ,(car cadrs) r))
			     (,',(concat "rplac" (car cadrs))
			      ,o ,(car v))))))))))
); end of EVAL-WHEN

(eval-when (load eval compile)
(defun tclass-namep (type)
  ;; This predicate is true if its argument is the name of a class
  ;; defined by the DEFTCLASS macro
  (when (and (symbolp type)
	     (subtypep type 'Tclass) 
	     (getprop type 'defstruct))
	t))
)

(defun record-namep (name)
  ;; This predicate is true if its argument is the name of a record
  ;; defined by DEFRECORD
  (when (and (symbolp name)
	     (getprop name 'defrecord))
	t))


(defun field-list (type)
  ;; Returns the list of the field names of instances of the TCLASS
  ;; referred to as <type>, which must be a valid Tclass name, and
  ;; not an abbreviation.
  (setq type (:check-record-or-tclass 'field-list type))
  (if (record-namep type)
      (car (getprop type 'defrecord))
    (:tclass-field-list type ())))

(defun :tclass-field-list (type res)
  (cond ((null type) res)
	((eq type 'Tclass) res)
	(t
	 (:tclass-field-list
	  (packagecell type)
	  (append (cdr (getprop type 'defstruct)) res)))))


;;;
;;; On instances of Tclass and Record
;;;

(defmacro defmake (type fn larg)
  ;; Defines the function <fn> to be an instance constructor function
  ;; for the Tclass or Record referred to as <type>. The function
  ;; <fn> takes N arguments, which are the values of the fields
  (until (variablep fn)
	 (setq fn (error 'defmake 'errsym fn)))
  `(de ,fn ,larg
       (omakeq ,type ,.(mapcan (lambda (arg) (list arg arg)) larg))))


(defmacro omakeq (type . varval)
  ;; Returns an instance of the Tclass referred to as <type>. Within
  ;; this instance, each field has the value val.
  ;; Neither <type> nor the field name are evaluated.
  (let ((init-forms ())
	var
	val)
    (setq type (:check-record-or-tclass 'omakeq type))
    (while (consp varval)
      (setq var (:check-field 'omakeq type (nextl varval)))
      (unless (consp varval)
	      (error 'omakeq (ifn varval 'errwna 'errbpa) varval))
      (nextl varval val)
      (setq init-forms
	    `((,(getfn type var) :res ,val) ,.init-forms)))
    (unless (null varval)
	    (error 'omakeq 'errbpa varval))
    `(let ((:res (,(symbol type 'make))))
       ,.(nreverse init-forms)
       :res)))

(defmacro ogetq (type field obj)
  (setq type (:check-record-or-tclass 'ogetq type))
  (setq field (:check-field 'ogetq type field))
  `(,(getfn type field) ,obj))

(defmacro oputq (type field obj val)
  (setq type (:check-record-or-tclass 'oputq type))
  (setq field (:check-field 'oputq type field))
  `(,(getfn type field) ,obj ,val))

(defmacro omatchq (type obj)
  (setq type (:check-tclass 'omatchq type))
  `(typep ,obj ',type))

;;;
;;; Methods and message passing
;;;

(defmacro demethod (name (obj . pars) fields . body)
  (until (symbolp name)
	 (setq name (error 'demethod 'errsym name)))
  (let ((tclass (:check-record-or-tclass 'demethod (packagecell name))))
    (unless (listp fields)
	    (error 'demethod 'errnla fields))
    `(de ,name (,obj ,@pars)
	 ,@(ifn fields
		body
		`((let
		      ,(mapcar 
			(lambda (f)
			  (setq f
				(:check-field
				 'demethod tclass f))
			  `(,f (,(getfn tclass f) ,obj)))
			fields)
		    ,@body))))))


(defun send-error (sem argslist)
  (let ((fun (getfn '* sem)))
    (if fun
	(apply fun argslist)
        (error 'send 'errudm (cons sem argslist)))))

(defmacro sendq (message . rest)
  `(send ',message ,.rest))


(defmacro sendf (func . args)
  `(lambda (:arg1) (send ,func :arg1 ,.args)))

(defmacro sendfq (func . args)
  `(sendf ',func ,.args))


(defun plink (s . v)
  (ifn v
       (if (abbrevp s) (get-abbrev s) s)
       (put-abbrev s (car v))))

;;; for CeyxV4 compatibility

(dmd <=p (p1 p2)
     `(subtypep ,p1 ,p2))
 
