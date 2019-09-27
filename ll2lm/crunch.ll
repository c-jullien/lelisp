;;; the main functions of analyzer
;;; $Id: crunch.ll,v 1.1 2006/12/09 11:22:08 jullien Exp $
;;;

;; to initialyze YOUR analyzer
(control-file-pathname 'll2lm #p"ll2lm.ini")

(setq #:sys-package:colon '{llmodule})

(defvar :default-ll-dir
  (if (or #:system:unixp
          #:system:dosp)
      #u"/nfs/work/lelisp/"
      #p"lelisp$disk:[000000]")
  )

(defvar :default-aida-dir
  (if (or #:system:unixp
          #:system:dosp)
      #u"/nfs/work/aida/"
      #p"aida$disk:[000000]")
  )

(defun all-ll-dirs root
  (let ((ll-dir (pathname (if root (car root) :default-ll-dir))))
    (list "" ; very important
	  (namestring (combine-pathnames ll-dir
					 (#:unix:pathname
					  (catenate "llmod/"
						    (string (system))
						    "/"))))
	  (namestring (combine-pathnames ll-dir #u"llmod/"))
	  (namestring (combine-pathnames ll-dir #u"llobj/")) ; for loadmodule
	  (namestring (combine-pathnames ll-dir #u"llib/"))  ; for include
	  (namestring (combine-pathnames ll-dir #u"llub/"))  ; for include
	  )))

;;;;;;
;;; Module analyzer directory
;;;;;;

(defun :lisp-dir ()
  (if (or #:system:unixp
          #:system:dosp)
      (catenate (namestring crunch-dir) "lelisp/")
    (pathname "llruntime$disk:[modana.lelisp]"))
  )

#|===========================================================================
   Functional interface for the cruncher
---------------------------------------------------------------------------|#

;;;;;;
;; this function analyzes a module. Optional argument proj defines
;; the context of use of the module to analyze. For instance aida, maida2d, ..
;;;;;;

;;;;;;
(defun analyze (:defmodule prjname . args)
  (let (
	(#:crunch:current-project (find-rt-project prjname))
	(#:crunch:current-defmod ())
	(#:crunch:current-diagnostic ())
	(output            (car args))
	(:exports           (cadr args))
	(:files             (caddr args))
	(#:crunch:imports  (cadddr args))
	(#:crunch:includes (caddr (cddr args)))
	(#:crunch:w-flag ())
	(#:crunch:e-flag ())
;?!?!	#:system:defstruct-all-access-flag
	)

    (unless (or (or (null :exports) (consp :exports))
		(or (null #:crunch:imports) (consp #:crunch:imports)))
	    (error 'analyze
		   "usage"
		   "(analyze <module> <project> [output (exported-fnt...)(files...)(imported-fnt...)(included-fnt...)])"))
    ;; try to avoid analyzing several modules in the same core..
    (when #:crunch:done
	  (terpri)
	  (#:crunch:warning 0 :defmodule)
	  (terpri)
	  )

    ;; the four steps of analyze
    (let ((#:system:path '("")));#:system:path

					; mise a jour PATH & CURRENT-MR
      (:step1 :defmodule prjname t)
					; about module: must be done after
					; rigth PATH (i.e. after step1)
      (setq output (:step1-bis output :defmodule :files
			       #:crunch:imports #:crunch:includes))

					; real analyze
      (setq #:crunch:current-diagnostic
	    (:analyze:step2 :defmodule :exports #:crunch:imports))

					; setting diagnostic
      (:step3 #:crunch:current-diagnostic) ; diagnostic

					; writing results
      (:step4 output #:crunch:current-diagnostic
	      #:crunch:update-desc #:crunch:update-base)
      )
    (when (and #:crunch:w-flag (gt #:crunch:verbose 0))
	  (printerror :defmodule 'wflag #:crunch:w-flag))
    (when #:crunch:e-flag
	  (printerror :defmodule 'eflag #:crunch:e-flag))
    ))

;;;;;
;;; details of steps of analyse
(defun :step1 (mod prjname env)
  ;; update current context
  (#:crunch:terpri)
  (#:crunch:print "=====")
  (#:crunch:print "===== STEP 1 : loading context of project : " prjname)
  (#:crunch:print "=====")

  ;; load and "activate" PRJNAME project. result in (CURRENT-MR).
  ;; ENV : T means recusively load required-projects
  ;; ENV : NIL means don't recusively load required-projects

  (setq #:crunch:all-modules prjname)   ; required calcul of prj's all modules.
  (reload-rt-project prjname env)       ; loading env. for prj.

					; Activation means initializing
					; the core for the analyzer.
  (activate-rt-project prjname env)	; exec activation fct

  (#:crunch:print "===== path environment for this analyze :")
  (mapc (lambda(x)(#:crunch:print "   " (pathname x))) #:system:path)
  prjname
  )

(defun :step1-bis (output mod files imports includes)
    ;; calcul of real output, and building module must be done
    ;; in complete environment
    (if output
	(if (and #:crunch:keep-wrong (probepathm output))
	    (setq output (probepathm output))
	  (setq output (#:rtproject:build-module mod output files)))
      (setq output
	    (#:rtproject:build-module
	     mod
	     (when (setq output (get-main-ll-module-directory
				 #:crunch:current-project))
		   (combine-pathnames output (pathname mod)))
	     files))
      (#:crunch:advise NO-OOPTION output)
      )

    ;; if imposed imports, add them in module <mod>
    (let ((defmod (catcherror t (readdefmodule mod)))
	  (flag (or imports includes)) )
      (if defmod 
	  (setq defmod (car defmod))
	(#:crunch:error 26 mod))
      (when (null #:crunch:keep-wrong)
					; verif. of :files in good environment
	    (setdefmodule defmod 'files
			  (mapcan (lambda (f)
				    (if (and f (probepathf f))
					(ncons f)
				      (#:crunch:warning 26 f)
				      (setq flag t)
				      ()))
				  (getdefmodule defmod 'files)))
	    )
      (when imports
					; add imposed imports
	    (setdefmodule defmod 'import
			  (mapcan (lambda(m)
				    (if (and m (probepathm m))
					(ncons m)
				      (#:crunch:warning 27 m)
				      ()))
				  (union imports
					 (getdefmodule defmod 'import))))
	    )
      (when includes
					; add imposed includes
	    (setdefmodule defmod 'include
			  (mapcan (lambda(f)
				    (if (and f (probepathf f))
					(ncons f)
				      (#:crunch:warning 26 f)
				      ()))
				  (union includes
					 (getdefmodule defmod 'include))))
	    (setq #:crunch:includes (mapcar 'probepathf includes))
	    )
      (setq #:crunch:current-defmod defmod)
      (when (and flag (not #:crunch:keep-old))(printdefmodule defmod mod))

      #|
   Doit-on charger l'environnement(CPENV + INCLUDE) du module, ainsi que
   celui ces modules importe's impose's (imports) ?
   !! attention : on ne prend pas tous les CPENV des modules importe's
   car sinon, lors d'un update, on ne sait plus verifier les modules
   necessaires (puisqu'on a charge leur CPENV, les formes qui y sont
   definies ne sont plus inconnues, et lors de l'analyze on croie que
   ce module est abusivement importe'!)
   (ex: si 1 fich. est importe' pour une de ses macros dans un EVAL-WHEN
        l'update dira qu'on n'a pas besoin d'importer ce module
        puisque la macro est deja connue!)
;	  (when #:crunch:keep-wrong	; if updating, module already exists.
;		;; load environment of module <mod>
;		(#:crunch:load-cpenv mod defmod)
;		(#:crunch:load-include mod defmod)
;		)

  Par contre, il est necessaire de charger les fichiers d'INCLUDE du 
  du module en cours de crunchage qui ne sont pas des modules (donc 
  impossible d'informer la base sur son contenu), c'est la seule 
  solution de permettre a` l'utilisateur d'utiliser la clef INCLUDE 
  dans ses .lc. 
  Par contre on doit faire attention de ne charger que les fichiers 
  d'INCLUDE qui ne sont pas aussi des fichiers de modules importe's: 
  si c'est le cas on NE CHARGE PAS ces fichiers, et on emet un warning35
|#
      (when #:crunch:keep-wrong	; if updating, module already exists.
	    (let ((fm (#:crunch:files-of-module-p
		       (getdefmodule defmod 'include)) ))
	      (when fm
		    ;; don't load this module files
		    (mapc (lambda (x)(#:crunch:warning 35 (car x)(cdr x)) )
			  fm))
	      ;; load include files of module <mod>, which aren't file
	      ;; of others modules
	      (let ((lf (set-difference (mapcar (lambda(x)
						  (file-namestring
						   (pathname (probepathf x))))
						(getdefmodule defmod 'include))
					(mapcan 'cdr fm)
					'equal)))
		(when lf
		      (#:crunch:load-include mod (nreverse lf)))))
	    )
      ;; return real output
      (probepathm output)
      ))

(defun :analyze:step2 (mod export+ import+)
  (#:crunch:terpri)
  (#:crunch:print "=====")
  (#:crunch:print "===== STEP 2 : browsing files of module : " mod)
  (#:crunch:print "=====          involved files are : "
		  (getdefmodule #:crunch:current-defmod 'files))
  (#:crunch:print "=====")

  ;; don't  display warning on function redefinition.
  (let ((#:system:redef-flag t))
    (:agree-mod mod export+ import+))
  )

(defun :makefile:step2 (output project)
  (#:crunch:terpri)
  (#:crunch:print "=====")
  (#:crunch:print "===== STEP 2 : updating Makefile : "
		  (or output (#:rtproject:make-file project) ))
  (#:crunch:print "=====")
  (when output (#:rtproject:make-file project output))
  ({rtproject}:build-make output project))

(defun :init:step2 (output project)
  (#:crunch:terpri)
  (#:crunch:print "=====")
  (#:crunch:print "===== STEP 2 : making initial analyzer's Makefile : "
		  (or output (#:rtproject:init-makefile project) ))
  (#:crunch:print "=====")
  (when output (#:rtproject:init-makefile project output))
  ({rtproject}:build-init output project))

(defun :meta:step2 (output project)
  (#:crunch:terpri)
  (#:crunch:print "=====")
  (#:crunch:print "===== STEP 2 : making meta module : "
		  (or output (#:rtproject:meta-module project)))
  (#:crunch:print "=====")
  (when output (#:rtproject:meta-module project output))
  ({rtproject}:build-meta output project))

(defun :step3 (diagnostic)
  (#:crunch:terpri)
  (#:crunch:print "=====")
  (#:crunch:print "===== STEP 3 : diagnostic")
  (#:crunch:print "=====")
  ;; "trying" to explain the results of the analysis...
  ({diagnostic}:explain-diagnostic diagnostic)

  ;; avoid analysing several modules in a same core!
  (setq #:crunch:done t)
  diagnostic
  )

(defun :step4 (output diagnostic update-desc update-base)
  (when update-desc 
	(#:crunch:terpri)
	(#:crunch:print "=====")
	(#:crunch:print "===== STEP 4 : updating module description : " 
			output )
	(#:crunch:print "=====")
	({diagnostic}:update-desc output diagnostic))
  (when update-base
	(#:crunch:terpri)
	(#:crunch:print "=====")
	(#:crunch:print "===== STEP 4bis : updating reference file : " 
			(#:rtproject:ref-file #:crunch:current-project) )
	(#:crunch:print "=====")
	({llmodulereferences}:update-base (#:rtproject:name #:crunch:current-project)
					  (#:rtproject:ref-file #:crunch:current-project)
					  diagnostic))
  #:crunch:current-project)

#|===========================================================================
   Functional interface for the shell script "crunch"
---------------------------------------------------------------------------|#

;;;;;;
;;; Warning, this default flag asks for cruncher to merge the import/export
;;; proposals with the former definition of the module.
;;;;;;

;;;;;;
;;; When called as a shell script
;;;;;;

(defmacro sh-analyze options
  (let (project-name
        option
	initflag makeflag metaflag delete mergeflag buildflag
	:option-encountered             ; liste des options principales
	mod                             ; le nom du module
	:output 			; le nom du fichier module
	:files  			; les noms des fichiers source
        :exports
	:imports
	:includes
	)
    (setq
     #:crunch:update-desc t		; on update le .lm
     #:crunch:update-base t		; on update la base
     #:crunch:update-make ()		; on update le makemod
     #:crunch:current-project () 	; updated project
     #:crunch:dynamic-caller ()		; to play with dynamic calls or not
     #:crunch:verbose 0 		; mode silent
     #:crunch:dependancy 1		; ligth dependancy
     #:crunch:include ()		; include field used
     #:crunch:keep-old ()		; dont write .lm nor .ref
     #:crunch:keep-wrong ()		; just update .lm and .ref
     #:crunch:keep-all-exports ()	; export all definitions
     #:crunch:recursive-analyze ()      ; do recursive analyze on imported mod.
     )
    
    (#:crunch:print ">>>>> OPTIONS (version " #:crunch:version
                    "." #:crunch:subversion ")")
    (while options
      (selectq (setq option (nextl options))

	       (-defmodule              ; -defmodule module-name
		(setq mod (nextl options))
		(newl :option-encountered '-files)
		(newl :option-encountered '-defmodule)
		(#:crunch:print ">>>>> building module : " mod)
		)

	       (-files                  ; -files foo.ll
		(:verif-option '-files)
		(setq option (nextl options))
		(if (:source-file-p option)
		    (newr :files (namestring option))
		  (error 'sh-analyze "not a source file" option))
		(#:crunch:print ">>>>> add source file : " option)
;               (setq #:crunch:keep-wrong ())
;               (setq #:crunch:update-desc t)
;               (setq #:crunch:update-base t)
		)

	       ((-project -p)           ; specify a project
		(setq option (nextl options))
		(when #:crunch:current-project
		      (:printerror "only one -project option to specified. The last one is the rigth one"
				   option))
		(if (setq #:crunch:current-project (find-rt-project option))
		    (setq project-name option)
		  (:printerror 'UNKNOWNPRJ option))
		(#:crunch:print ">>>>> current project : " project-name)
		)

	       ((-load -l)        ; load a file
		(#:crunch:print ">>>>> loading file : " (car options))
		(catcherror t (loadfile (namestring (nextl options)) t))
		)

	       ((-all -allexport)       ; export all functions defined
		(#:crunch:print ">>>>> export ALL functions defined.")
		(setq #:crunch:keep-all-exports t)
		)

	       ((-export -e)		; force to export one fct
		(#:crunch:print ">>>>> exporting function : " (car options))
		(newl :exports (nextl options))
		)

	       ((-import -i)		; merge with former definition of .lm
		(#:crunch:print ">>>>> importing module : " (car options))
		(newr :imports (nextl options))
		)

	       (-include		; merge with former definition of .lm
		(#:crunch:print ">>>>> including file : " (car options))
		(newr :includes (nextl options))
		)

	       ((-includeflag)          ; use include field in module
		(#:crunch:print ">>>>> using include field in generated module")
		(setq #:crunch:include t)
		)

	       ((-makefile -make)	;  building Makefile for project 
		(newl :option-encountered '-makefile)
		(#:crunch:print ">>>>> building Makefile for current project")
		(setq makeflag t)
		)

	       ((-dependency -dep)	; dependancy level
		(setq option (nextl options))
		(#:crunch:print ">>>>> Makefile's dependancy level : " option)
		(unless (numberp option)
			(:printerror 'errnna option))
		(setq #:crunch:dependancy option)
		)

	       ((-meta -super)		; building meta module
		(:verif-option '-meta)
		(newl :option-encountered '-meta)
		(#:crunch:print ">>>>> building META module for current project")
		(setq metaflag t)
		)

	       ((-o -output)		; specify an output
		(#:crunch:print ">>>>> result in file : " (car options))
		(setq :output (nextl options)))

;	       ((-relax)                ; relax import when circular
;		(#:crunch:print
;		 (if (car options)
;		     ">>>>> relax import dependencies when necessary."
;		   ">>>>> don't relax import dependencies when circular."))
;		(setq #:crunch:relax-import-flag (nextl options)))

	       ((-silent -s)            ; silent running
		(#:crunch:print ">>>>> silent mode.")
		(setq #:crunch:verbose 0)
		)

	       ((-update -u)		; update .lm specified
		(:verif-option '-update)
		(newl :option-encountered '-update)
		(setq option (nextl options))
		(#:crunch:print ">>>>> will update module : " option)
		(setq :output option)
		(setq #:crunch:keep-wrong t)
		(setq #:crunch:update-desc t)
		(setq #:crunch:update-base t)
		)

	       ((-nowrite -no)		; no re-write files .lm .ref etc
		(#:crunch:print ">>>>> just to see!")
		(setq #:crunch:keep-old t)
		)
                              
	       ((-nodynamic -nodyn)     ; no use dynamic call to import mod.
		(#:crunch:print ">>>>> don't considere dynamic calls")
		(setq #:crunch:dynamic-caller ())
		)
                              
	       ((-dynamic -dyn)         ; use dynamic call to import mod.
		(#:crunch:print ">>>>> considere dynamic calls")
		(setq #:crunch:dynamic-caller t)
		)

	       ((-r -recursive)         ; do recursive analyze on imported mod.
		(#:crunch:print ">>>>> do recursive analyze")
		(setq #:crunch:recursive-analyze t)
		)

	       ((-delete -del)		; delete a module from prj.ref
		(:verif-option '-delete)
		(newl :option-encountered '-delete)
		(setq option (nextl options))
		(#:crunch:print ">>>>> delete module : " option)
		(newl delete option)
		)
                              
	       ((-create -init)	        ; create a new base's makefile
		(:verif-option '-init)
		(newl :option-encountered '-init)
		(#:crunch:print ">>>>> create new project's makefile from scratch")
		(setq initflag t)
		)
                              
	       ((-merge)		; merge 2 refences base
		(:verif-option '-merge)
		(newl :option-encountered '-merge)
		(let ((m1 (find-rt-project (car options)))
		      (m2 (find-rt-project (cadr options))))
		  (unless m1 (error 'sh-analyze 'UNKNOWNPRJ (car  options)))
		  (unless m2 (error 'sh-analyze 'UNKNOWNPRJ (cadr options)))
		  (setq mergeflag (cons m1 m2)))
		(nextl options)(nextl options)
		(#:crunch:print ">>>>> merge 2 project's refences files : "
				(#:rtproject:name (car mergeflag))
				" & "
				(#:rtproject:name (cdr mergeflag)))
		)

	       (-build                  ; build .ref from .lm
		(:verif-option '-build)
		(newl :option-encountered '-build)
		(#:crunch:print ">>>>> build reference base from .lm for project : " (#:rtproject:name #:crunch:current-project))
		(setq buildflag t)
		)

	       (-config                 ; -config file.cnf
		(newl :option-encountered '-config)
		(let ((config (nextl options))
		      loptions)
		  (unless (probefile config)
			  (error 'sh-analyze 'errfile config))
		  (setq #:crunch:config-file (probepathf config))
		  (#:crunch:print ">>>>> reading options from : " config)
		  (with ((inchan (openi config)))
			(untilexit eof
				   (newl loptions (read))))
		  (setq options (append (nreverse loptions) options)) )
		)

	       ((-usage -help)          ; usage...
		(let ((#:crunch:verbose 2))
		  (:display-usage '-usage)))

	       ((-verbose -v)           ; verbose mode 0,1,2
		(setq option (nextl options))
		(unless (numberp option)
			(:printerror 'errnna option))
		(setq #:crunch:verbose option)
		(#:crunch:print ">>>>> verbose mode level = " option)
		)

	       (t                       ; bad option
		;; then assumes it's a bad option.
		(:printerror "unknown option" option)
		)
	       ))

    ;; must have project
    (when (null #:crunch:current-project)
	  (:printerror "you must specified current project with option -project"
		       options))

    ;; traitements
    (cond
     ((or (memq '-defmodule :option-encountered); write .lm
	  #:crunch:keep-wrong)
      ;; verif module name
      (when (and (null mod) (null #:crunch:keep-wrong))
	    (if :files
		(progn (setq mod (car :files))
		       (#:crunch:advise "-defmodule option should be used; assuming module name is"
					mod))
	      (:printerror "-defmodule option should be used" ())))

      `(let ((#:system:path (cons ,(:directory :output) #:system:path)) )
	 (analyze ',(or ; when -defmodule use:
		        mod
			; when -update use:
			(symbol ()(pathname-name (pathname :output))))
		  ',project-name
		  ',:output
		  ',:exports
		  ',:files
		  ',:imports
		  ',:includes)
	 ,#:crunch:current-project)
      )

     (makeflag				; making makefile
      `(let ((#:system:path '("")))
	 (:step1 () ',project-name ())
	 (:makefile:step2 ',:output ',#:crunch:current-project)
	 ',(#:rtproject:make-file #:crunch:current-project) )
      )

     (metaflag				; making metamodule
      `(let ((#:system:path '("")))
	 (:step1 ',mod ',project-name ())
	 (:meta:step2 ',:output ',#:crunch:current-project)
	 )
      )

     (delete				; deleting module from base
      (when (find-rt-group-project (#:rtproject:name #:crunch:current-project))
	    (error '-delete
		   "No deletable module in group-project"
		   #:crunch:current-project))
      `(:delete-modules ',(#:rtproject:ref-file #:crunch:current-project)
			',delete)
      )

     (initflag			; creating new project's makefile
      `(let ((#:system:path '("")))
	 (:step1 () ',project-name ())
	 (:init:step2 ',:output ',#:crunch:current-project)
	 )
      )

     (mergeflag                         ; merging 2 ref. files
      `(:merge-ref ',#:crunch:current-project ',(car mergeflag) ',(cdr mergeflag))
      )

     (buildflag                         ; build .ref from .lm
      `(let ((#:system:path '("")))
	 (:step1 () ',project-name ())
	 (#:crunch:print "===== STEP 2 : building references file")
	 ({llmodulereferences}:build-ref-from-lm ',#:crunch:current-project))
      )

     (t					; ooups
      (:printerror "nothing to do! one of this options must be specified"
		   (mapcar 'car :excluded-options)))
     )))

#|===========================================================================
   Utilities
---------------------------------------------------------------------------|#

(defun :directory(mod)
  (directory-namestring (pathname mod)))

;; to know incompatibles options
(defvar :excluded-options
 '((-defmodule           -update -makefile -meta -delete -merge -init)
   (-files               -update -makefile -meta -delete -merge -init)
   (-update   -defmodule         -makefile -meta -delete -merge -init)
   (-makefile -defmodule -update           -meta -delete -merge -init)
   (-meta     -defmodule -update -makefile       -delete -merge -init)
   (-delete   -defmodule -update -makefile -meta         -merge -init)
   (-merge    -defmodule -update -makefile -meta -delete        -init)
   (-init     -defmodule -update -makefile -meta -delete -merge      )
   ))

(defun :verif-option (nopt)
  (let ((excl (cassq nopt :excluded-options)))
    (when (setq excl (intersection excl :option-encountered))
	  (:printerror "exclusive options" (cons nopt excl)))))

(defun :printerror(msg arg)
  (print "**")
  (printerror 'sh-analyze msg arg)
  (print "**")
  (:display-usage msg)
  )

;;;;;;
;;; very heavy heuristic!!
;;;;;;

(defun :source-file-p (file)
  (let ((name (namestring file)))
    ;; [ECA 13/01/93] testing name length to avoid substring with neg value
    (or (lt (slen name) 3)
        (not (eqstring ".lm" (substring name (sub (slen name) 3) 3))))))

(eval-when (load eval compile)
(defun :display-usage (opts)
 (when (ge #:crunch:verbose 1)
  (print "usage : sh-analyze               ;;")
  (print "           ;; to fabricate .lm from scratch")
  (print "            [-defmodule mod]     ;; name of module")
  (print "           ;; to keep former modules :")
  (print "            [-update target.lm]  ;; update given module target.lm")
  (print "           ;; influence analyze :")
  (print "            [-files file.ll]     ;; files composing module")
  (print "            [-include file]      ;; include file")
  (print "            [-import mod]        ;; import module")
  (print "            [-export fct]        ;; export function")
  (print "            [-allexport]         ;; export all functions defined")
  (print "            [-includeflag]       ;; to use module's field INCLUDE")
  (print "            [-output target.lm]  ;; force path & name of result module")
  (print "            [-project project]   ;; current project")
  (print "            [-load file]         ;; load file")
  (print "            [-r]                 ;; do recursive analyze on imports")
  (print "            [-verbose 0,1,2]     ;; verbose level.")
  (print "            [-nowrite]           ;; just to see!")
  (print "            [-dynamic/-nodynamic];; considere or not, dynamic calls")
  (print "           ;; to work directly on reference file :")
  (print "            [-delete module]     ;; delete module from references file")
  (print "           ;; to fabricate meta module :")
  (print "            [-meta]              ;; generate metamodule")
  (print "           ;; to fabricate makefiles :")
  (print "            [-dependency 0,1,2]  ;; dependency level in Makefiles")
  (print "            [-makefile]          ;; generate compiler Makefile")
  (print "            [-init]              ;; generate analyzer Makefile")
  (print "           ;; help")
  (print "            [-usage]             ;; this usage")
  (terpri)
  )
 (end)
 ))
