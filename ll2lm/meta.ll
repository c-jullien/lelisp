;;;
;;; $Id: meta.ll,v 1.1 2006/12/09 11:22:09 jullien Exp $
;;;

(setq #:sys-package:colon 'rtproject)

(defun :build-meta (output prj)
  (when (find-rt-group-project (:name prj))
	(error '-meta "No meta module about group-project" prj))
  (let ((file (pathname
	       (or output
		   (:meta-module prj)
		   (when (:meta-ref-file prj)
			 (merge-pathnames
			  (make-pathname ()()()()"lm"())
			  (:meta-ref-file prj)))
		   (let ((f (pathname (:ref-file prj))))
		     (merge-pathnames
		      (make-pathname ()()()
				     (catenate "m_" (pathname-name f))
				     "lm" ())
		      f)))) )
	(#:system:print-with-abbrev-flag ())
	(defmod ())
	(mr ())
	)
    (setq defmod (:build-meta-module prj (pathname-name file)))
    (#:crunch:save-file file)
    (#:crunch:advise "writing meta-module file" file)
    ({diagnostic}:printdefmodule defmod file)
    (setq mr (:build-meta-ref prj defmod))
    (if (:meta-ref-file prj)
	(setq file (:meta-ref-file prj))
      (set-pathname-type file (pathname-type (:ref-file prj))))
    (#:crunch:save-file file)
    ({llmodulereferences}:write-to-file mr file)
    ))

;; building meta-module PRJNAME.lm
(defun :build-meta-module (prj name)
  (let ((mr (current-mr))
	(defmod (list (cons 'defmodule (concat name))))
	(lmod (mapcar 'car ({llmodulereferences}:modulesimport (current-mr))) )
	)
    (setdefmodule defmod 'files ())
    (setdefmodule defmod 'import lmod)
    (setdefmodule defmod 'export
		  (apply 'append
			 (mapcar 'cdr
				 ({llmodulereferences}:modulesexport mr))) )
    (setdefmodule defmod 'cpenv lmod)
    defmod))

;; building meta reference PRJNAME.mtf
(defun :build-meta-ref (prj defmod)
  (let* (
	 (meta-mr (standardmodulereferences))
	 (prjname (#:rtproject:name prj))
	 (name (getdefmodule defmod 'defmodule))
	 )
    ({llmodulereferences}:projectname meta-mr prjname)
				      
    ({llmodulereferences}:modulesimport
     meta-mr
     (list (cons name (getdefmodule defmod 'import))))

    ({llmodulereferences}:modulesexport
     meta-mr
     (list (cons name (getdefmodule defmod 'export))))

    ({llmodulereferences}:modulesotherdef
     meta-mr
     (list (cons name
		 (apply 'append
			(mapcar 'cdr
				({llmodulereferences}:modulesotherdef
				 (current-mr))))) ))

    ({llmodulereferences}:modulesinternal meta-mr ())

    meta-mr))
