;;;
;;; MODULE:  The Le-Lisp Module System
;;;
;;; $Source: /usr/cvs/lelisp/llib/module.ll,v $
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
        (error 'load 'erricf 'module))

(defvar #:sys-package:colon 'module)

(add-feature 'module)

;;;
;;; Global Variables.
;;;
;;; All the loaded modules are on one of the following variables:

(defvar :compiled-list
  (if (boundp ':compiled-list) :compiled-list ()))

(defvar :interpreted-list
  (if (boundp ':interpreted-list) :interpreted-list ()))

;;;
;;; Error messages
;;;

(defmessage :ERRNMD (french "module inexistant")
	            (english "module not found"))
(defmessage :ERRFPR (french "fichier prote'ge'")
	            (english "protected file"))
(defmessage :WARINM (french "chargement du module interpre'te'")
	            (english "load interpreted module"))
(defmessage :ERRNODEF (french "Je ne trouve pas la de'finition de")
                      (english  "can't find definition of"))

;;;
;;; How to define a module
;;;

;;; A module definition is an A-list of the following form:
;;;    ((key1 . val1) ... (keyN . valN) (:header . <string list>))

;;; The internal key ":header" contains a list of strings which corresponds
;;; to the beginning of the module file up to the first system (non-user) key.


;;; The list of user keys
(defvar :list-of-user-key '(defmodule files import export include))

;;; The string which separate the user keys from the system keys.
(defvar :EndOfHeader ";;; Added automatically, don't type beyond this line.")

;;; The storage of the actual lines of the module definition file is done
;;; using the ITsofts. It needs the following global variables:
(defvar :header ())            ; the list of user lines
(defvar :in-user-part ())      ; the state of the automaton


;;;
;;; Reading a module definition file
;;;

(defun readdefmodule (module-name)
  ;; returns a module definition
  (let ((module-file (probepathm module-name)))
    (ifn module-file
	 (error 'readdefmodule ':ERRNMD module-name)
	 (with ((inchan (openi module-file)) )
	       (let ((defmod ())
		     (header ())
		     (keyheader ':header)
		     (#:sys-package:colon  #:sys-package:colon)
		     (#:sys-package:itsoft (cons 'module
						 #:sys-package:itsoft)))
		 ;; start the automaton
		 (setq :header () :in-user-part t)
		 ;; read the keys
		 (untilexit eof
			    ;; read a key
			    (newl defmod
				  (cons (let ((#:system:read-case-flag ()))
					  (read))
					(let ((#:system:read-case-flag t))
					  (read))))
			    ;; change the :colon
			    (when (eq (caar defmod) 'defmodule)
				  (setq #:sys-package:colon (cdar defmod)))
			    (if (memq (caar defmod) :list-of-user-key)
				(if :in-user-part
				    ;; add the line to the user key
				    (setq header (append :header header)
					  :header ())
				  ;; user keys appear AFTER the system keys ..
				  (setq keyheader ':deadheader))
			      (setq :in-user-part ())))
		 ;; make the module definition
		 ;; ((key1 . val1) .. (keyN . valN) (:header . strings))
		 (setq defmod (nreverse (acons keyheader
					       (nreverse header)
					       defmod)))
		 defmod)))))

(defun :bol ()
  (super-itsoft 'module 'bol ())
  (when :in-user-part
	(newl :header (substring (inbuf) 0 (sub (inmax) 2)))))

;;;
;;; Handling module definition
;;;

(defun getdefmodule (defmod key)
  (cassq key defmod) )

(defun setdefmodule (defmod key val)
  (let ((slot (assq key defmod)))
    (if (consp slot)
	(progn (rplacd slot val) defmod)
        (nconc1 defmod (cons key val)))))

;;;
;;; Print a module definition
;;;

(defun printdefmodule (defmod mod)
  (let ((oldmod (readdefmodule mod))
	(header (getdefmodule defmod ':header)))
    (unless (equal oldmod defmod)
	    ;; not the same module description
	    (let ((outchan (outchan))
		  (out (probepathm mod)))
	      (ifn out
		   (error 'printdefmodule ':ERRNMD mod)
		   (ifn (catcherror () (setq out (openo out)))
			(error 'printdefmodule ':ERRFPR out)
			(outchan out)
			(if (and header
				 (every (lambda (key)
					  (equal (getdefmodule defmod key)
						 (getdefmodule oldmod key)))
					:list-of-user-key))
			    ;; user keys are not modified
			    (with ((rmargin (1+ (slen (outbuf))))
				   (printlevel 200)
				   (printlength 10000))
				  (let ((#:system:print-for-read ()))
				    (mapc 'print header)
				    (print)
				    (print :EndOfHeader)
				    (:print-rest-of-keys defmod
							 :list-of-user-key)))
			  ;; user keys are modified
			  (when (getdefmodule defmod ':deadheader)
				(let ((#:system:print-for-read ()))
				  (mapc (lambda (x) (print "; " x))
					(getdefmodule defmod
						      ':deadheader))))
			  (:print-rest-of-keys defmod ()))))
	      (close (outchan))
	      (outchan outchan))))
  mod)

(defun :print-rest-of-keys (defmod except)
  (let ((#:system:print-for-read t))
    (mapc (lambda (slot)
	    (let ((key (car slot))
		  (value (cdr slot)))
	      (unless (or (memq key '(:header :deadheader))
			  (memq key except))
		      (cond ((consp value) ; affiche sur plusieurs lignes.
			     (prin key)
			     (princn #/ )
			     (princn #/()
			     (terpri)
			     (if (memq key '(cpimport cpenv))
				 (mapc (lambda(l)
					 (if (atom l)
					     (print l)
					     (princn #/()
					     (mapc 'print l)
					     (princn #/))))
				       value)
			       (mapc 'print value) )
			     (princn #/))
			     (terpri))
			    (t
			     (print key)
			     (print value))))))
	  defmod)))



;;;
;;; Loading a module
;;;

(defun loadmodule (name . flags)
  (let ( (loaded (cons () ())) )
    (:loadmodule-aux (concat name) loaded (car flags) (cadr flags))
    ;; in case of compiled module
    (mapc
     (lambda (m)
       (setq :compiled-list (delq m :compiled-list))
       (setq :interpreted-list (delq m :interpreted-list))
       (newl :compiled-list m) )
     (car loaded) )
    ;; in case of interpreted module
    (mapc
     (lambda (m)
       (setq :compiled-list (delq m :compiled-list))
       (setq :interpreted-list (delq m :interpreted-list))
       (newl :interpreted-list m) )
     (cdr loaded) )
    name ))

(defun :loadmodule-aux (module loaded clos? inter?)
  (let ((def (readdefmodule module))
	(file-obj? (and (not inter?) (:find-object-file module))))
    (if file-obj?
	(rplaca loaded (cons module (car loaded)))
        (rplacd loaded (cons module (cdr loaded))) )
    (let ( (interp (cdr loaded)) )
      ;; loading the imported modules
      (mapc
       (lambda (m)
	 (when (and (not (memq m (car loaded)))
		    (not (memq m (cdr loaded))) 
		    (or clos?
			(not (memq m :compiled-list)) ))
	       (if (and (not clos?) (memq m :interpreted-list))
		   ;; an imported module is previously loaded (interpreted)
		   (setq interp t)
		   ;; else load the module.
		 (:loadmodule-aux m loaded clos? inter?) )))
       (getdefmodule def 'import) )
      ;; in case of compiled module, verify that the imported modules
      ;; are compiled and that the loader is present
      (when (and file-obj?
		 (or (neq (cdr loaded) interp)
		     (not (featurep 'loader)) ))
            (setq file-obj? ())
            (rplaca loaded (delq module (car loaded)))
            (rplacd loaded (cons module (cdr loaded))) ))
    (if file-obj?
	;; load a compiled module
	(let ( (deb (#:system:ccode)) )
	  (protect
	   ;; Beware of :READ-CASE-FLAG: (cf LOADOBJECTFILE code)
	   (let ((save #:system:read-case-flag))
	     (setq #:system:read-case-flag 'loadmodule)
	     (funcall (car file-obj?) (cdr file-obj?) t)
	     (when (eq #:system:read-case-flag 'loadmodule)
		   ;; nobody has modify it, use the old one
		   (setq #:system:read-case-flag save)))
	   (putprop module (cons deb (#:system:ccode)) ':limit) ))
      ;; load an interpreted module.
      (when #:system:error-flag (printerror 'loadmodule ':WARINM module))
      (mapc
       (lambda (f) (libloadfile f t))
       (getdefmodule def 'files) ))))

(defun :find-object-file (module)
  ;; find a compiled module. returns a CONS of the loading function
  ;; and the path of the module.
  (any (lambda ((search-fn load-fn))
	 (let ((obj-file (funcall search-fn module)))
	   (if obj-file (cons load-fn obj-file))))
       #:system:object-file-formats))

;;; List describing the various formats od object files. Each element
;;; contains the serach predicate ans the loading  function.
;;; Find:	probepatho	look in the current path
;;; Load:	loadfile	to load a complete path
(defvar #:system:object-file-formats
  '((probepatho loadfile)))

;;;
;;; Autoload module definition
;;;
  
(defun filegetdef (file symb)
  (let ((real-file (probepathf file)))
    (ifn real-file
	 (error 'filegetdef 'errfile file)
	 (let (us
	       (def ()))
	   (with ((inchan (openi real-file)))
		 (untilexit eof
		    (when (consp (setq us (read)))
			  (selectq (car us)
				   ((de defun df defmacro dm dmd)
				    (when (eq (cadr us) symb)
					  (close (inchan))
					  (exit eof (setq def us)) ))
				   (t ; SYNONYM and DS ?!?!
				    )))))
	   def ))))

(df autoloadmodule list-of-module
    (mapc (lambda (module)
	    (let ((defmod (readdefmodule module)))
	      (mapc (lambda (fnt)
		      (when (symbolp fnt)
			    (:makeautoload fnt module
					   (getdefmodule defmod 'files))))
		    (getdefmodule defmod 'export) )))
	  list-of-module))

(defun :makeautoload (fnt module files)
  (let ( (def ()) type )
    (while (and (null def) files)
      (setq def (filegetdef (nextl files) fnt)) )
    (ifn def
         (error 'autoload ':ERRNODEF fnt)
         (selectq (car def)
	     ((de defun)
	      (setq def `(:args (:std-autoload ',fnt) (apply ',fnt :args))
		    type 'expr ))
	     (df
	      (setq def `(:args (:std-autoload ',fnt) (apply ',fnt :args))
		    type 'fexpr ))
	     ((defmacro dmd)
	      (setq def `(:args (:std-autoload ',fnt) (cons ',fnt :args))
		    type 'dmacro ))
	     (dm
	      (setq def `(:args (:std-autoload ',fnt) :args)
		    type 'macro ))
	     (t (error 'autoload 'ERRBDF def)) )
         (setfn fnt type def)
         (putprop fnt (or module files) 'autoload) )))

(defun :std-autoload (fnt)
  (let ( (of (valfn fnt)) (files (getprop fnt 'autoload)) rep )
    (if (consp files)
	(mapc (lambda (f) (libloadfile f t)) files)
      (loadmodule files) )
    (when (eq (valfn fnt) of)
          (error 'autoload ':ERRNODEF (cons fnt files)) )))

(defun autoloadp (fnt)
  (getprop fnt 'autoload))
