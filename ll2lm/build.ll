;;;
;;; $Id: build.ll,v 1.1 2006/12/09 11:22:07 jullien Exp $
;;;

(setq #:sys-package:colon 'llmodulereferences)

(defun :build-ref-from-lm (prj)
  (let ((all-modules
	 (#:rtproject:all-files prj (or (#:rtproject:module-extension prj)
					"lm")))
	(#:crunch:keep-old ())
	(#:system:mod-extension
	 (catenate "." (or (#:rtproject:module-extension prj)
			   "lm")))
	)
    (:write-to-file
     (:set-ref ({rtproject}:name prj)
	       (mapcar (lambda(m) (symbol () m)) all-modules))
     ({rtproject}:ref-file prj) )
		    
    ))

(defun :set-ref (name lmod)
  (let ((mr (standardmodulereferences)))
    (:projectname mr name)
    (:fill-modules-references mr lmod)
    mr))

(de :fill-modules-references (mr modules)
    (#:crunch:advise "fill modules references" "...")
    (let (modname
	  defmod
	  mdep
	  mexp
          moth
	  mint
	  )
      (mapc (lambda (m)
              (ifn (catcherror t (setq defmod (readdefmodule m)))
                   (printerror '-build "read module failed" m)
                  (setq modname m);(pathname-name (pathname m))
                  (newl mdep (cons modname (getdefmodule defmod 'import)))
                  (newl mexp (cons modname 
				   (union (getdefmodule defmod 'export)
					  (mapcar 'car
						  (getdefmodule defmod
								'cpexport)))))
		  (let ((o (:retrieve-definers
			     (getdefmodule defmod 'cpenv))))
		    (when o
			  (newr moth (cons modname o))))
		  (let ((i (mapcar 'car (getdefmodule defmod 'cpfunctions))))
		    (when i
			  (newr mint (cons modname i))))
		  ))
	    modules) 
      (:modulesimport mr mdep)
      (:modulesexport mr mexp)
      (:modulesotherdef mr moth)
      (:modulesinternal mr mint)
      mr
      ))


;; extract all other definers than FUNCTION from CPENV field
;; that means all declared symbols as:
;; (defdefiner defabbrev)
;; (defdefiner defsharp)
;; ...
(defun :retrieve-definers (cpenv)
  (mapcan (lambda(s)
	    (when (consp s)
		  (mapcan ':retrieve-definer s)))
	  cpenv))

(defun :retrieve-definer (x)
  (let (d)
    (when (consp x)
	  (if (eq (car x) 'progn)
	      (:retrieve-definers (cdr x))
	    (when (setq d (#:llmodule:definerp (car x)))
		  (ncons (funcall d (cadr x)))))
	  )))

