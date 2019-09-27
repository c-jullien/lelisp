;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;;

(eval-when (load eval compile)
(defabbrev llmodule llmodule))

(setq #:sys-package:colon '{llmodule})

;; to correct print in export field
(defun :format-export (defs)
  ;; on affiche les exportable-definition de la forme (structure foo)
  ;;   mais pas les noms des champs, si :export-accessors vaut (),
  ;;   le contraire sinon.
  ;; on n'affiche pas les abbrev inconnues.
  (let (l)
    (mapc (lambda(f)
	    (unless (and (symbolp f)
			 (or (and (not #:crunch:export-accessors)
				  ({llmodule}:exportable-definition-p f))
			     ({llmodule}:unknow-abbrev-p f) ))
		    (newl l f)))
	  defs)
    (nreverse l)))

;;; la fct <f> est-elle une exportable-definition ?
(defmacro :exportable-definition-p (f)
  `(get ,f ':exportable-definition))

;;; le symbole <s> contient-il une abbrev inconnue?
(defun :unknow-abbrev-p (s)
  (cond ((consp s)
	 (or (:unknow-abbrev-p (car s))
	     (:unknow-abbrev-p (cdr s))))
	((and s
	      (neq (symbol ()(string s)) 'unknow-abbrev)
	      (neq (setq s (packagecell s)) 'unknow-abbrev))
	 (:unknow-abbrev-p s))
	(s )))

;; Rend une liste sans elements redondants.
;; Warning : fonction de modification physique.       
(de simplify-list (list)
    (let ((newlist)
          (elt))
      (while list
        (newl newlist (setq elt (nextl list)))
        (setq list (delq elt list))
        )
      (nreverse newlist)
      ))

;;;
(defmacro assert-value l '(progn))
(defmacro assert-values l '(progn))

#|
(eval-when (load eval compile)
(defstruct {llmodule} ; ?!?! est-ce utile ? a verifier...
  file 

  name
  files
  include
  export
  import
  cpexport
  cpimport	
  cpenv
             
  filesinfo
  definedfunctions
  usedfunctions
  definedabbrevs
  usedabbrevs
  use-of
  sillyfunctions
  ))


(de llmodule ()
    (omakeq {llmodule})
    )

(de makellmodule (file list)
    (let ((llmodule (llmodule))
	  (prop)
	  (value))
      (:file llmodule file)
      (while list
	(setq prop (caar list))
	(setq value (cdar list))
        (nextl list)
	(selectq prop
		 (defmodule
		   (:name llmodule value))
		 (files
		  (:files llmodule value))
		 (include
		  (:include llmodule value))
		 (export
		  (:export llmodule value))
		 (import
		  (:import llmodule value))
		 (cpimport
		  (:cpimport llmodule value))
		 (cpexport
		  (:cpexport llmodule value))
		 (cpenv
		  (:cpenv llmodule value))                 
		 )
	)
      (unless (:name llmodule)
              (:name llmodule (:modulename llmodule)))
      (unless (:cpexport llmodule)
              (#:crunch:print "Module " (:name llmodule) " not yet compiled. "
                              "Database might not be completed."))
      llmodule))

(unless (boundp ':complete-path)
        (defvar :complete-path t))


(de :pretty (module)
    (with ((lmargin 0)
           (rmargin 78)
           (printlength 2000)
           (printlevel 1000))
          (let ((#:system:print-with-abbrev-flag ())
                )
            (print 'defmodule)
            (print (:name module))
    ;;;
            (when (:sillyfunctions module)
                  (:print-comment "silly functions")
                  (mapc ':print-comment (:sillyfunctions module)))
    ;;;
            (print 'include)
            (pprint (:include module))
    ;;; 
            (print 'files)
            (pprint (mapcar (lambda (f)
			      (concat
			       (file-namestring (pathname f))))
			    (:files module)))
    ;;; 
            (print 'import)
            (pprint (:import module))
    ;;; 
            (print 'export)
            (pprint (:export module))
            )))
	   
(de :print-comment (c)
    (with ((rmargin 254))
          (let ((#:system:print-for-read ()))
            (princn 59) ; caractere ;
            (princn 32)
            (print c))))

;;;
;;;
;;;

; merge 2 modules -> resultat dans le premier module
; on ne merge pas les champs resultant de la compilation!!

(de :merge-llmodules (llm1 llm2)
    (:files llm1 (union (:files llm1) (:files llm2)))
    (:include llm1 (union (:include llm1) (:include llm2)))
    (:import llm1 (union (:import llm1) (:import llm2)))
    (:export llm1 (union (:export llm1) (:export llm2)))
    llm1)
    
;;;
;;;
;;;

(de :modulename (llm)
    (concat (pathname-name (pathname (:file llm)))))
    
|#


