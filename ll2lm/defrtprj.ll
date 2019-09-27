#|===========================================================================
   This module defines a project, that could be used for the 
   cuncher/analyzer.


A project can be defined as the following example: see file rtprojects.ll


---------------------------------------------------------------------------|#


;;;;;;
;;; This definition is necessary for default calculation of paths
;;;;;;
(defvar rtdir 
  (if (and (boundp 'rtdir) rtdir)
      rtdir
    (or (getenv "RTDIR")
	(combine-pathnames
	 (pathname #:system:directory)
	 #u"modana/"))))

(print "rtdir is " rtdir)

(defvar crunch-dir rtdir)

;; updating the system path
(setq #:system:path (delete rtdir #:system:path))
(when rtdir (newr #:system:path rtdir))

(defvar rt-lelisp-directory
  (if (boundp 'rt-lelisp-directory) rt-lelisp-directory
    #:system:directory))

(setq #:sys-package:colon 'rtproject)

(eval-when (load eval compile)
(defabbrev rtproject rtproject)

(defstruct rtproject

;; project name
  name					; symbol
;; rquired projects to good use of this project
  required-projects			; list of symbols
;; base for all relative paths
  root-directory			; pathname 
;; either src direrctories or .ll + .lm + .lo directories
  directories				; list of pathnames
;; to store makefiles generated..
  system-directory			; path
;; path for references file
  crunch-directory			; pathname
;; all directories to put in #:system:path for good use of this project
;; internal use(obsolete ?!?!?)
  modules-directories                   ; list of pathnames 
;; where to write .lo files by complice
  ll-object-directory			; one path
  ; obsolete form
  ll-object-directories			; list of one path
;; where to write .lm files by analyzer
  ll-module-directory			; one path
  ; obsolete form
  ll-module-directories			; list of one path
;; works with save-module (.lc)
  module-extension                      ; string

;; name (and path) of references file
  ref-file 				; pathname of <prj>.ref
;; name (and path) of file (if exist) which describe this project 
  project-file                          ; pathname of <prj>.prj
;; name and path of Makefile 
  make-file                             ; pathname
;; name (and path) of initial makefile
  init-makefile                         ; pathname of <prj>.mki

;; function executed when before analyze referencing this project
  activate-function			; symbol
;; fct executed when project's base is loaded
  initialize-function			; symbol

;; list of files containing lists of the modules name of this project
;; (special value "all" means all modules found in directories)
  modules-lists				; list of strings
;; list of modules name of this project
  modules				; list of symbols
;; list of modules name NOT in this project(cf modules-lists)
  exclude-modules			; list of symbol
;; list of modules required when this project is involved (RT ?!?!)
  required-modules			; list of symbols
;; list of extension to calculate all files of FILES field, from one name
;; (don't forget "ll" when you write it!)
  extensions-list                       ; list of strings
;; list of special names modules
  modules-files                         ; a-list

;;; internal usage
  builtp
  loadedp

;; name of meta ref-file
  meta-ref-file                         ; pathname
;; name of meta module 
  meta-module                           ; pathname

;; complice's flags(obsolete form)
  complice-flags			; list of strings
;; complice's flags module by module ((mod1 "-parano t" "-v")...
  complice-options			; a-list of strings
;; analyzer's flags module by module ((mod1 "-includeflag" "-v 2")...
  analyzer-options			; a-list of strings

  rt-gell-p ;?!?!?
))

(defmacro :make-*-file (dir name ext)
  `(merge-pathnames (pathname ,dir)
		    (make-pathname ()()() (string ,name) ,ext ())))

(defun :make-ref-file (prj default)
  (:make-*-file default (:name prj) "ref"))

(defun :make-meta-ref-file (prj default)
  (:make-*-file default (catenate "m_" (string (:name prj))) "ref"))

(defun :make-make-file (prj default)
  (:make-*-file default (:name prj) (cond
				     (#:system:unixp "mk")
				     (#:system:dosp "mk")
				     (#:system:vmsp "mms")
				     (t "mk")) ))

(defun :make-init-file (prj default)
  (:make-*-file default (:name prj) (cond
				     (#:system:unixp "mki")
				     (#:system:dosp "mki")
				     (#:system:vmsp "mmsi")
				     (t "mki")) ))

(defun :make-project-file (prj default)
  (:make-*-file default (:name prj) "prj"))

'(eval-when (load eval compile)
           (defstruct rtprojectdata
             closure        ;; modules closure
             modules        ;; modules specific to that project
             ))


;; ----------- exported_function : "define-rt-project"

(eval-when (load eval compile)
(defmacro define-rt-project (name . args)
  `(declare-rt-project 
    (:defrtproject (new 'rtproject) ',name ',args t)))
)

;; ----------- exported_function : "define-rt-group-project"

(eval-when (load eval compile)
(defmacro define-rt-group-project (name . args)
  `(declare-rt-group-project 
    (:defrtproject (new 'rtproject) ',name ',args ())))
)

(defun :defrtproject (project name args verif?)
  (assert-value name non-null-symbol 'define-rt-project)
  (#:rtproject:name project name)
  (let (next-arg
        next-value
        (valid-keys (if verif?
			; if complete projects, all fields are valids
			(:field-list 'rtproject)
		      ; else it's group-project:only required-projects is OK
		      '(root-directory crunch-directory required-projects))) )
    (while args
      (setq next-arg (nextl args))
      (setq next-value (nextl args))
      (if (catcherror t 
             (assert-value next-arg non-null-symbol 'define-rt-project-key))
          (if (memq next-arg valid-keys)
              (funcall (symbol 'rtproject next-arg) project next-value)
            (#:cruncherr:printerror
             'rt-project-key "bad key name" next-arg)))))
  (:initialise-structure project)
  (when verif? (:check-directories project ()))
  project)  

;;;;;;
;;; All pathnames specs are transformed in to string.
;;; If root-director is specified, then all directories are
;;; supposed to be relative to that path.
;;;;;;

;; ----------- exported_function : ":initialise-structure"

(defun :initialise-structure (project)
  ;; root-directory specified? if so, directories are
  ;; supposed to be specified locally to this root-directory

  (when (:root-directory project)
	(let ((x (directoryp (:root-directory project))))
	  (if x (:root-directory project x)
	    (error 'define-rt-project
		   "must be a directory"
		   (:root-directory project)))))

  ;; is a crunch-directory specified?
  ;; if not, use the rtdir/name
  (ifn (:crunch-directory project)
       (if (:root-directory project)
	   (:crunch-directory project (:root-directory project))
	 (:crunch-directory project (pathname rtdir)))
       (:crunch-directory project 
			  (combine-pathnames 
			   (if (:root-directory project)
			       (pathname (:root-directory project))
			     (pathname rtdir))
			   (pathname (:crunch-directory project))))
       )

  ;; to store all generated makefiles...
  (:system-directory project 
		     (:merge-directory-with-root
		      project (:system-directory project) ()))

  ;; pathname of reference file. default is : #u"crunch-directory/name.ref"
  (unless (:ref-file project)
	  (:ref-file project
		     (:make-ref-file project (:crunch-directory project))))

  ;; pathname of reference file. default is : #u"crunch-directory/name.ref"
  (unless (:meta-ref-file project)
	  (:meta-ref-file project
		     (:make-meta-ref-file project
					  (:crunch-directory project))))

  ;; exactly makefile
  (unless (:make-file project)
	  (:make-file project
		      (:make-make-file project (:system-directory project))))

  ;; exactly initial makefile
  (unless (:init-makefile project)
	  (:init-makefile project
			  (:make-init-file project
					   (:system-directory project))))

  ;; exactly project file
  (unless (:project-file project)
	  (:project-file project
			 (:make-project-file project
					     (:system-directory project))))

  (:ll-module-directory
   project
   (let ((pdir (or (:ll-module-directory project)
		   (car (:ll-module-directories project))
		   (:ll-object-directory project)
		   (car (:ll-object-directories project))
		   )))
     (when pdir
	   (:merge-directory-with-root project
				       pdir
				       ()))
     ))

  (:ll-object-directory
   project
   (let ((pdir (or (:ll-object-directory project)
		   (car (:ll-object-directories project))
		   (:ll-module-directory project)
		   (car (:ll-module-directories project))
		   )))
     (when pdir
	   (:merge-directory-with-root project
				       pdir
				       ()))
     ))

  (when (or (null (:ll-module-directories project))
	    (nequal (car (:ll-module-directories project))
		    (:ll-module-directory project)))
	(:ll-module-directories project
				(when (:ll-module-directory project)
				      (ncons (:ll-module-directory project)))))
				  

  (when (or (null (:ll-object-directories project))
	    (nequal (car (:ll-object-directories project))
		    (:ll-object-directory project)))
	(:ll-object-directories project
				(when (:ll-object-directory project)
				      (ncons (:ll-object-directory project)))))

  ;; building directories specs (directories are specified as string)
  (:directories 
   project (:merge-directories-with-root project 
                                         (:directories project)
                                         ()))
     
;  ;; specify modules-lists (default is "all")
; le 20/9/94 on change le choix par defaut
;  (unless (:modules-lists project)
;          (:modules-lists project (list "all")))

  ;; obsolete complice-flags
  (when (:complice-flags project)
	(if (cassoc "all" (:complice-options project))
	    (nconc (cassoc "all" (:complice-options project))
		   (:complice-flags project))
	  (:complice-options project
			     (cons (cons "all" (:complice-flags project))
				   (:complice-options project)))))
  project)

;;;;;;
;;; merge pathnames with root-directory specification (if any)
;;;;;;

(defun :merge-directories-with-root (project directories system-dep-p)
  (mapcar (lambda (path)
            (:merge-directory-with-root project path system-dep-p))
          directories))


(defun :merge-directory-with-root (project path system-dep-p)
  (unless path (setq path #u"./"))
  (if (or (eq path "")
          (eq path '#:pathname:current))
      ""
    (if (:root-directory project)
        (combine-pathnames 
	 (if system-dep-p
	     (combine-pathnames 
	      (pathname (:root-directory project))
	      (pathname (catenate (system) "/")))
	   (pathname (:root-directory project)))
	 (pathname path) )
      path)))

;; ----------- exported_function : ":prin"

(defun :prin (project)
  (prin "#<rtproject " (:name project))
  (if (:loadedp project)
      (prin ",loaded")
    (prin ",notloaded"))
  (prin ">")
  project)

'(defun :prin (p)
  (let ((f (cdr (getprop 'rtproject 'defstruct))))
    (mapc (lambda(x)
	    (print x " : " (funcall (getfn 'rtproject x) p)))
	  f)))

;; ----------- exported_function : ":pretty"

(defun :pretty (project)
  (with ((printlength 1000)
         (printlevel 1000)
         (printline 1000))
        (let ((#:system:print-for-read ()))
          (print "Project name      : " (:name project))
          (print "Root directory    : " (:root-directory project))
	  (print "References file   : " (:ref-file project))
	  (print "Makefile          : " (:make-file project))
          (prin  "Src directories   : ")
	  (funcall ':prinf (mapcar 'namestring (:directories project)))
	  (terpri)
          (print "Modules lists     : " (:modules-lists project))
          (print "Modules           : " (:modules project))
          (print "Modules required  : " (:required-modules project))
          (print "Exclude modules   : " (:exclude-modules project))
          (when (:required-projects project)
                (prin "Required projects :    ")
		(pprint (:required-projects project)))
	  (print)
          (print "[ANALYZER] Crunch directory   : "
		 (:crunch-directory project))
          (print "[ANALYZER] modules directory: "
		 (get-main-ll-module-directory project))
          (print "[ANALYZER] ANALYSEOPTIONS     : ")
          (mapc (lambda (s)
		  (prinf "   for module ~A : ~A" (car s)(cdr s))
		  (terpri)) 
                (:analyzer-options project))
	  (print)
          (print "[COMPLICE] objects directory : "
		 (get-main-ll-object-directory project))
          (print "[COMPLICE] COMPLICEFLAGS      : ")
          (mapc (lambda (s)
		  (prinf "   for module ~A : ~A" (car s)(cdr s))
		  (terpri)) 
                (:complice-options project))
          )))

;; ----------- exported_function : ":build-references"

'(defun :build-references (project)
  (unless (:builtp project)
          (:check-directories project t)
          (with ((current-directory (:crunch-directory project)))
                ;; protect use of gcalarm
                (let ((#:sys-package:itsoft (cons 'rtproject 
                                                  #:sys-package:itsoft)))
                  ;; construction du fichier unix.dirs ou
                  ;; vms.dirs ou dos.dirs
;                  (with ((outchan (openo (:ref-file project))))
;                        (mapc 'print (:directories project))
;                        (when (outchan) (close (outchan))))
                 
                  (with ((all-modules-lists (:modules-lists project))
                         (exclude-modules (:exclude-modules project))
                         (all-modules-if-fail (if (:modules-lists project)
                                                  ()
                                                t)))
                        (let ((#:system:path (cons "" (:directories project))))
                          (dirs-to-list () (:modules project))
                          (list-to-ref)))))
          (:builtp project t)
          'build-references))


;; ----------- internal function : ":load"

(defun :load (project env . meta?)
  ;; env == T  => base is loaded
  ;;     == () => base is not loaded, only path is updated
  ;; if 3rd argument positionned:
  ;; meta? == meta  => meta module treatment
  (setq meta? (eq (car meta?) 'meta))
  (unless (:loadedp project)
          (:check-directory (:crunch-directory project) ())
          (unless (current-mr)
                  (current-mr (standardmodulereferences)))
	  ;; load base if required or if current project
	  (when (or env
		    (equal project #:crunch:current-project))
		;; integration de la base lue dans la base courante
		({llmodulereferences}:merge-modules-references
		 (current-mr)
		 (if (probefile (if meta?
				    (:meta-ref-file project)
				  (:ref-file project)))
		     (let ((mr ({llmodulereferences}:read-from-file 
				(standardmodulereferences)
				(if meta?
				    (:meta-ref-file project)
				  (:ref-file project))) ))
		       ;; if required calculus of project's modules list
		       (if (eq #:crunch:all-modules (:name project))
			   (setq #:crunch:all-modules
				 (mapcar 'car
				   ({llmodulereferences}:modulesimport mr))))
		       mr)
		   (standardmodulereferences)))
		)
	  ;; reconstruction du path
	  (setq #:system:path
		`(""
		  ,.(union
		     (mapcar 'namestring (delete "" #:system:path))
		     (union
		      (mapcar 'namestring (:ll-module-directories project))
		      (mapcar 'namestring (:directories project))
		      'equal)
		     'equal)
		  ))
	  ;; fct d'initialisation du projet charge'
          (let ((func (:initialize-function project)))
            (if func
                (with ((current-directory 
                        (or (:root-directory project)
                            (current-directory))))
                      (catcherror t (funcall func)))))
          (:loadedp project t)
          ))

;; ----------- function : ":activate"

(defun :activate (project)
  (let ((func (:activate-function project)))
    (if func
        (funcall func))))

;;;;;;
;;; returns the list of directories involved in a project (including
;;; those of the required-projects)
;;;;;;

;; ----------- function : ":transitive-closure"

(defun :transitive-closure (project func dont-check)
  (:simplify-equal (:transitive-closure-1 project func dont-check)))

(defun :transitive-closure-1 (project func dont-check)
  (if (or dont-check (:rt-gell-p project))
      (append (funcall func project)
              (mapcan (lambda (x)
                        (if (find-rt-project x)
                            (:transitive-closure-1 (find-rt-project x)
						   func 
                                                   dont-check)
                          (error 'project-closure "undefined project" x)))
                      (:required-projects project)))
    (mapcan (lambda (x)
              (if (find-rt-project x)
                  (:transitive-closure-1 (find-rt-project x) func 
                                         dont-check)
                (error 'project-closure "undefined project" x)))
            (:required-projects project))))

;; ----------- function : ":transitive-closure-but"

;;;;;;
;;; Same as transitive closure but func is only
;;; applied to project which rt-gell-p is ()
;;;;;;

'(defun :transitive-closure-but (project func dont-check)
  (:simplify-equal (:transitive-closure-but-1 project func dont-check)))

'(defun :transitive-closure-but-1 (project func dont-check)
  (if (or dont-check (not (:rt-gell-p project)))
      (append (funcall func project)
              (mapcan (lambda (x)
                        (if (find-rt-project x)
                            (:transitive-closure-but-1 (find-rt-project x) func 
                                                   dont-check)
                          (error 'project-closure "undefined project" x)))
                      (:required-projects project)))
    (mapcan (lambda (x)
              (if (find-rt-project x)
                  (:transitive-closure-but-1 (find-rt-project x) func 
                                         dont-check)
                (error 'project-closure "undefined project" x)))
            (:required-projects project))))

#|===========================================================================
   Retrieve some date from project
---------------------------------------------------------------------------|#
(eval-when (load eval compile)
(defvar :all-rt-projects
  (if (boundp ':all-rt-projects) :all-rt-projects))
(defvar :all-rt-group-projects
  (if (boundp ':all-rt-group-projects) :all-rt-group-projects))
)

;; ----------- exported_function : "list-rt-directories"
;; [ECA 09/09/93] changed to solve the followin case :
;; project b uses module2, which imports module1 from project a
;; project a is "opaque" (ie rt-gell-p ()), and module2 of project a
;; imports modules from another, non-opaque project (aida, for
;; instance). without the changes, those modules were not taken in
;; the binary constructed by Makebin.
;; Warning : this requires the rtprojects file with modules ("all")
;; for projects lisp and x11 (not for fullisp and fullx11, as in
;; precedent version

(defun list-rt-directories (project)
  (assert-value project rtproject 'list-rt-directories)
  (:simplify-equal
   (append (:transitive-closure project #':directories t)
	   (:transitive-closure project #':ll-object-directories t)
	   (list (get-system-directory project)))))

;; ----------- exported_function : "list-modules-to-exclude"

;;;;;;
;;; List transitive list of modules to exclude for project
;;; which have rt-gell-p = ()
;;;;;;

'(defun list-rt-modules-to-exclude (project)
  (assert-value project rtproject 'list-rt-modules-to-exclude)
  (:simplify-eq
    (:transitive-closure-but project 
                             #'(lambda (p)
                                 (ifn (:rt-gell-p p)
                                      (funcall #':get-all-modules p)))
                             t)))

;; ----------- exported_function : "list-complice-directories"

(defun list-complice-directories (project)
  (assert-value project rtproject 'list-complice-directories)
  (:simplify-equal
   `(
     ,@(:transitive-closure project #':ll-module-directories t)
     ,@(:transitive-closure project #':ll-object-directories t)
     ,@(:transitive-closure project #':directories t)
     ,(get-system-directory project))
   ))
           
;; ----------- exported_function : "get-main-ll-object-directory"

(defun get-main-ll-object-directory (project)
  (:ll-object-directory project))

;; ----------- exported_function : "get-main-ll-module-directory"

(defun get-main-ll-module-directory (project)
  (:ll-module-directory project))

;; ----------- exported_function : "get-system-directory"

(defun get-system-directory (project)
  (:system-directory project))

;; ----------- exported_function : "get-bin-directory"

'(defun get-bin-directory (project)
  (:bin-directory project))

;; ----------- exported_function : "list-complice-flags"

(defun list-complice-flags (project)
  (assert-value project rtproject 'list-complice-flags)
  (:transitive-closure project 
                       (lambda (x) 
                         (nreverse (:complice-flags x)))
                       t))

;; ----------- exported_function : "list-analyzer-flags"

(defun list-analyzer-options (project)
  (assert-value project rtproject 'list-analyzer-options)
  (:transitive-closure project 
                       (lambda (x) 
                         (nreverse (:analyzer-options x)))
                       t))

#|===========================================================================
   User functional interface
---------------------------------------------------------------------------|#

;; ----------- exported_function : "declared-rt-projects"

(eval-when (load eval compile)
(defun declared-rt-projects ()
  (nconc (mapcar ':name :all-rt-projects)
	 (mapcar ':name :all-rt-group-projects) ))
)

;; ----------- exported_function : "declare-rt-project"

(defun declare-rt-project (project)
  (assert-value project rtproject 'declare-rt-project)
  (if (memq project :all-rt-projects)
      (#:cruncherr:printerror 'declare-rt-project
			      "this project is alrealy defined"
			      project)
    (when (find-rt-project (:name project))
          (#:cruncherr:printerror 'declare-rt-project
                      "overwriting former definition of project"
                      (:name project))
          (remove-rt-project (:name project)))
    (newr :all-rt-projects project)
    project))

;; ----------- exported_function : "declare-rt-project"

(defun declare-rt-group-project (project)
  (when (eq (declare-rt-project project) project)
	(when (find-rt-group-project (:name project))
	      (remove-rt-group-project (:name project)))
	(newr :all-rt-group-projects project))
  project
  )

;; ----------- exported_function : "find-rt-project"

(defun find-rt-project (name)
  (when (consp name)(setq name (cadr name))) ;(meta name)
  (tag found
       (mapc (lambda (project)
               (if (eq (:name project) name)
                   (exit found project)))
             :all-rt-projects)))

;; ----------- exported_function : "find-rt-group-project"

(defun find-rt-group-project (name)
  (when (consp name)(setq name (cadr name))) ;(meta name)
  (tag found
       (mapc (lambda (project)
               (if (eq (:name project) name)
                   (exit found project)))
             :all-rt-group-projects)))

;; ----------- exported_function : "remove-rt-project"

(defun remove-rt-project (name)
  (assert-value name non-null-symbol 'remove-rt-project)
  (let ((project (find-rt-project name)))
    (if project
        (progn
          (setq :all-rt-projects (delq project :all-rt-projects))
          project)
      (#:cruncherr:printerror 'remove-rt-project
                  "this project is not defined" name))))

;; ----------- exported_function : "remove-rt-group-project"

(defun remove-rt-group-project (name)
  (let ((project (find-rt-group-project name)))
    (if project
        (progn
          (setq :all-rt-group-projects (delq project :all-rt-group-projects))
          project)
      (#:cruncherr:printerror 'remove-rt-group-project
			      "this project is not defined"
			      name))))

;; ----------- exported_function : "load-rt-project"

(defun load-rt-project (name env)
  ;; to load PRJ or (META PRJ)
  (let ((project (find-rt-project name)))
    (if project
        (progn
	  (mapc (lambda(x)(load-rt-project x env))
		(:required-projects project))
          (:load project env (when (consp name)(car name)))
          project)
      (#:cruncherr:printerror 'load-rt-project
                  "this project is not defined" name))))
  
;; ----------- exported_function : "reload-rt-project"

(defun reload-rt-project (name env)
  ;; to load PRJ or (META PRJ)
  ;; we supoose we only reload real prj, not meta-prj
  ;; return all modules of this project
  (let ((project (find-rt-project name)))
    (if project
        (progn
	  (mapc (lambda(x)(load-rt-project x env))
		(:required-projects project))
          (:loadedp project ())
          (:load project env (when (consp name)(car name)))
          )
      (#:cruncherr:printerror 'reload-rt-project
                  "this project is not defined" name))))
  

;; ----------- exported_function : "build-rt-project"

'(defun build-rt-project (name . force-rebuild)
  (assert-value name non-null-symbol 'build-rt-project)
  (let ((project (find-rt-project name)))
    (if project
        (progn
          (if (car force-rebuild)
              (:builtp project ()))
          (:build-references project)
          project)
      (error 'build-rt-project
                  "this project is not defined" name))))
  

;; ----------- exported_function : "activate-rt-project"

;;;;;;
;;; Warning, project table is reloaded!!!
;;;;;;

(defun activate-rt-project (name env)
  (let ((project (find-rt-project name)))
    (if project
        (progn
	  (when env
		(mapc (lambda(r)
			(activate-rt-project r env))
		      (:required-projects project) ))
          (load-rt-project name env)
          (:activate project)
          project)
      (error 'activate-rt-project
                  "this project is not defined" name))))
  
#|===========================================================================
   Utilities
---------------------------------------------------------------------------|#

;; ----------- exported_function : ":gcalarm"

(defun :gcalarm ())

;; ----------- exported_function : ":gc-before-alarm"

(defun :gc-before-alarm ())

;;; to probe directories

(defun :check-directory (dir error?)
  (or (directoryp dir)
      (if error?
	  (error 'check-directory "directory doesn't exist" dir)
	(#:cruncherr:printerror 'check-directory
				"directory doesn't exist" dir)
	())))

(defun :check-directories (project . error?)
  (setq error? (car error?))
  (when (:root-directory project)
	(:check-directory (:root-directory project) error?))
  (:check-directory (:crunch-directory project) error?)
  (mapc (lambda (dir)
          (:check-directory dir error?))
        (:directories project))
  (when (:ll-module-directory project)
	(:check-directory (:ll-module-directory project) error?))
  (when (:ll-object-directory project)
	(:check-directory (:ll-object-directory project) error?))
  ;; normally the project should be defined with directories...
  (unless (or (:directories project)
	      (:ll-module-directory project)
	      (:ll-object-directory project))
	  (if error?
	      (error 'define-rt-project
		     "No directory has been specified for this project"
		     (:name project))
	    (#:cruncherr:printerror
	     'define-rt-project
	     "No directory has been specified for this project"
	     (:name project))) )
  (:check-directory (:system-directory project) error?)
  'check-directories)


;; ----------- exported_function : ":simplify-eq"

'(defun :simplify-eq (list)
  (if list
      (cons (car list) (:simplify-eq (delq (car list) list)))))

;; ----------- exported_function : ":simplify-equal"

(defun :simplify-equal (list)
  (if list
      (cons (car list) (:simplify-equal (delete (car list) list)))))

;; ----------- exported_function : ":capitalize-string"

'(defun :capitalize-string (name)
  (assert-values name (string non-null-symbol) ':capitalize-word)
  (let ((list (mapcar 'lowercase (explode name))))
    (rplaca list (uppercase (car list)))
    (let ((#:system:read-case-flag t))
      (setq name (string (implode list))))))


;;;;;;
;;; Calculer le nom du resultat du ld
;;;;;;

;; ----------- exported_function : ":compute-main-c-object-name"

'(defun :compute-main-c-object-name (project)
  (if (:c-object-name project)
      (string (:c-object-name project))
    (catenate (:capitalize-string (:name project)) "O")))

;;;;;;;;;
;;; don't import microceyx
;;;;;;;;;
(defmacro :field-list (type)
  `(getprop ,type 'defstruct))

;;;;;;;;;
;;; union which keep order in lists, with priority in 1st list
'(defun :union-order (l1 l2)
  (let (x (l (nreverse l1)))
    (while l2
      (setq x (nextl l2))
      (unless (member x l) (setq l (cons x l))))
    (nreverse l)))
