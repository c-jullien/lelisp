;;;
;;; FILES:  Files managers
;;;
;;; $Source: /usr/cvs/lelisp/llib/files.ll,v $
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
        (error 'load 'erricf 'files))

(defvar #:sys-package:colon 'system)


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; FEATURE Management.
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defvar #:system:features-list
  (when (boundp '#:system:features-list)
	#:system:features-list))

(defun featurep (feature)
  (if (memq feature #:system:features-list)
      feature
      ()))

(defun add-feature (feature)
  (unless (featurep feature)
	  (newl #:system:features-list feature)))

(defun rem-feature (feature)
  (setq #:system:features-list (delq feature #:system:features-list)))

(defun list-features ()
  (copy #:system:features-list))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Load and Autoload
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defvar #:system:previous-def-flag
  (when (boundp '#:system:previous-def-flag)
	#:system:previous-def-flag))

;;;
;;; Tests on files
;;;

(defun probepathf (file)
  ;; test if the file {PATH}file[.ll] exists.
  (setq file (coerce-namestring file))
  (or (search-in-path :path (suffixe file :lelisp-extension))
      (search-in-path :path file)))

(defun probepathm (file)
  ;; test if the file {PATH}file[.lm] exists.
  (search-in-path :path (suffixe (coerce-namestring file) :mod-extension)))

(defun probepatho (file)
  ;; test if the file {PATH}file[.lo] exists.
  (search-in-path :path (suffixe (coerce-namestring file) :obj-extension)))

(defun suffixe (file suff)
  (if (eq (index suff file) (sub (slength file) (slength suff)))
      file
      (catenate file suff) ))

(defun search-in-path (path file)
  ;; test if the file {PATH}file exists.
  (when path
	(cond
	 ((or (stringp file)(symbolp file))
	  (#:files:sip-string path file))
	 ((pathnamep file)
	  (#:files:sip-path path file))
	 (t
	  (error 'search-in-path 'errbpa file))
	 )))

(defun #:files:sip-string (path file)
  (when path
	(let* ((ppath (if (consp path)(car path) path))
	       (real-file 
		(if (or (stringp ppath) (symbolp ppath))
		    (catenate ppath file)
		    (if (pathnamep ppath)
			(combine-pathnames ppath
					   (pathname file))
		        (error 'search-in-path 'errbpa ppath))) )
	       )
	  (if (probefile real-file)
	      real-file
	      (when (consp path) (#:files:sip-string (cdr path) file))
	      ))))

(defun #:files:sip-path (path file)
  (when path
	(let* ((ppath (if (consp path)(car path) path))
	       (real-file 
		(if (or (stringp ppath) (symbolp ppath))
		    (catenate ppath (namestring file))
		    (if (pathnamep ppath)
			(combine-pathnames ppath file)
		        (error 'search-in-path 'errbpa ppath))) )
	       )
	  (if (probefile real-file)
	      real-file
	      (when (consp path) (#:files:sip-path (cdr path) file))
	      ))))

;;;
;;; Load simple files
;;;

(df load (file . redef?)
    (loadfile file (car redef?)) )

(defun loadfile (file redef?)
  (ifn (probefile file)
       (error 'loadfile 'errfile file)
       (let ((:loaded-from-file file)
	     (:redef-flag redef?)
	     (#:sys-package:colon #:sys-package:colon)
	     (:in-read-flag ())
	     (inchan (inchan)) )
	 (inchan (openi file))
	 (protect (untilexit eof (eval (read)))
		  (let ((in (inchan)))
		    (when in (close in)))
		  (inchan inchan) ))
       file ))
 

;;;
;;; Load library file
;;;

(df libload (file . redef?)
    (libloadfile file redef?) )

(defun libloadfile (file redef?)
  (let ((real-file (probepathf file)))
    (ifn real-file
	 (error 'libloadfile 'errfile file)
	 (loadfile real-file redef?) )))

;;;
;;; Load object file
;;;

(defun loadobjectfile (file)
  (let ((file-obj? (probepatho file)))
    (ifn file-obj?
	 (error 'loadobjectfile 'errfile file)
	 (let ((save #:system:read-case-flag))
	   (setq #:system:read-case-flag 'loadobjectfile)
	   (loadfile file-obj? t)
	   (when (eq #:system:read-case-flag 'loadobjectfile)
		 ;; Not modified, set the old one.
		 (setq #:system:read-case-flag save))
	   file-obj?))))

;;;
;;; Autoload Files
;;;

(df autoload (file . lfnt)
    ;; define a set of auloload functions
    (mapc (lambda (fnt)
	    (setfn fnt 'fexpr
		   `(:b (:std-autoload ',fnt :b 'loadfile)))
	    (putprop fnt file 'autoload))
          lfnt))
    
(df libautoload (file . lfnt)
    ;; define a set of autoload functions in the standard library
    (mapc (lambda (fnt)
	    (setfn fnt 'fexpr
		   `(:b (:std-autoload ',fnt :b 'libloadfile)))
	    (putprop fnt file 'autoload))
          lfnt))

(defun :std-autoload (:f :b :load-fct)
  (let ((:of (valfn :f)) 
	(:ot (typefn :f))
	(:autoload-file (getprop :f 'autoload)))
    (cond ((null :autoload-file)
	   (error 'autoload 'ERRFILE :f))
	  ((and (catcherror t (funcall :load-fct :autoload-file t))
		(neq :of (valfn :f)))
	   (remprop :f 'autoload)
	   (eval (cons :f :b)))
	  (t
	   (setfn :f :ot :of)
	   (error 'autoload 'errudf :f)))))
