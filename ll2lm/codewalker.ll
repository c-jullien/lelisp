;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; the code walker
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(setq #:sys-package:colon '{llmodule})

#|===========================================================================
   Fonctions d'analyze
---------------------------------------------------------------------------|#

;;; lance l'analyse des fichiers de ce module,
;;; stocke les info et ramene le {diagnostic}
(defun :agree-mod (mod exp+ imp+)
  (assert-code-walker)
  (let (({llmodule}:defd-f {llmodule}:defd-f)({llmodule}:used-f {llmodule}:used-f)
	#:crunch:loaded-cpenv #:crunch:loaded-include #:crunch:loaded-modules
	diag)
    
    ;; initialisations.
    (setq #:crunch:loaded-modules
	  (union #:module:compiled-list #:module:interpreted-list)
	  )
    
    ;; analyse et stokage
    (let ((an (:analyse-files (cond
			       ((getdefmodule #:crunch:current-defmod 'files))
			       (t (#:crunch:error 36 mod)) )
			      exp+ imp+)))
      (setq diag
	    ({diagnostic}:set-diagnostic-from-analyze mod #:crunch:current-defmod an)))
    
    ;; verify circular modules dependancies (only on main projet: not all)
    (let ((c (:circular-dependancies-p
	      mod
	      ({diagnostic}:necessary-imports diag)
	      ({llmodulereferences}:modulesimport
	       ({llmodulereferences}:read-from-file 
		(standardmodulereferences)
		(#:rtproject:ref-file #:crunch:current-project)))
	      )))
      (when c
	    (#:crunch:warning 21 c)))

    ;; return result: complete diagnostic
    diag
    ))

;;;;;;
;;; take FILES of a module, analyze this files,
;;; and return all results in structure ANALYZE
;;;;;;
(defun :analyse-files (files exports-for-external-module imports-module)
  (let ( :prog
	 (analyze (new '{analyze}))
	 ;; during reading
	 {llmodule}:allsynd {llmodule}:allexpd {llmodule}:allextd {llmodule}:allother {llmodule}:allcpenv #:crunch:modules-to-include  {llmodule}:used-macros
	 ;; during parsing
	 {llmodule}:allfnt {llmodule}:allext {llmodule}:allupmod {llmodule}:alldyn 
	 ;; from syserror+allext
	 {llmodule}:allunknow
	 )
    (let ((#:sys-package:itsoft (cons 'crunch #:sys-package:itsoft)))
      ;; ramene la liste des noms de fcts + expr a evaluer au toplevel
      (#:crunch:advise READFILE files)
      ;; update:
      ;; :synonym-definition    : defined symbols by SYNONYM
      ;; :exportable-definition : defined symbols by EXPORTABLE-DEFINITION
      ;; :definer               : defined symbols by DEFDEFINER (defabbrev...)
      ;; :exported-cpenv        : list of sexpr inside EVAL-WHEN(COMPILE)
      ;; :used-macros           ; macros which are localy def. & toplevel used
      ;;the 2 next are defined in syserror.ll:
      ;; :module-to-import      : list of modules to import
      ;; :unknow-things         : list of unknow things with error message
      ;;                          ((errxxx . obj1 obj2...) ...)
      (let ({llmodule}:synonym-definition {llmodule}:exportable-definition
	    {llmodule}:definer
	    {llmodule}:exported-cpenv #:compiler:exported-env
	    (#:crunch:unknow-things ())
	    (#:crunch:modules-to-import ())
	    ) 
	;; reading file
	(setq :prog (:get-all-def-in-files files))
	(when {llmodule}:synonym-definition
	      (setq {llmodule}:allsynd {llmodule}:synonym-definition))
	(when {llmodule}:exportable-definition
	      (setq {llmodule}:allexpd {llmodule}:exportable-definition))
	(when {llmodule}:definer
	      (setq {llmodule}:allother {llmodule}:definer))
	(when #:compiler:exported-env
	      (setq {llmodule}:allcpenv #:compiler:exported-env))
	(when #:crunch:modules-to-import
	      (setq {llmodule}:allextd #:crunch:modules-to-import))
	(when #:crunch:unknow-things
	      (setq {llmodule}:allunknow #:crunch:unknow-things))
	)
      ({analyze}:allsynd analyze {llmodule}:allsynd)
      ({analyze}:allexpd analyze {llmodule}:allexpd)
      ({analyze}:allother analyze (simplify-list {llmodule}:allother)) 
      ({analyze}:allcpenv analyze {llmodule}:allcpenv)
      ({analyze}:include analyze #:crunch:modules-to-include)
      
      ;; scanning to create transitive closing of calls
      ;; mise a jour de :allfnt -> la fermeture transitive en contruction
      ;; mise a jour de :allext -> external undefined used ftcs
      ;; mise a jour de :allupmod -> modules to update
      ;; mise a jour de :alldyn -> dynamicly used fcts
      ;; mise a jour de :allextd -> external defined used things in know outside module
      (#:crunch:advise SCANNING "...")
      (mapc (lambda (fnt)
	      (when (symbolp fnt)
		    (let ({llmodule}:closure
			  {llmodule}:extern-u
			  {llmodule}:dynamic
			  #:crunch:modules-to-import)
		      (#:crunch:advise SCAN-1 fnt)
		      (:parse fnt)
		      (when {llmodule}:closure
			    (newl {llmodule}:allfnt (nreverse {llmodule}:closure)))
		      (when {llmodule}:extern-u
			    (setq {llmodule}:allext (nconc {llmodule}:allext {llmodule}:extern-u)))
		      (when {llmodule}:dynamic
			    (setq {llmodule}:alldyn (nconc {llmodule}:alldyn {llmodule}:dynamic)))
		      (when #:crunch:modules-to-import
			    (setq {llmodule}:allextd
				  (nconc {llmodule}:allextd #:crunch:modules-to-import)))
		      )))
	    :prog)

      (setq {llmodule}:defd-f
	    (let ((l (mapcan (lambda(x)
			       (unless (:unknow-abbrev-p (car x))
				       (ncons (car x)) ))
			     {llmodule}:allfnt) ; real definitions
		     ))
	      (if #:crunch:export-accessors
		  ; only real definitions
		  l
		; exportable-definitions + real defs
		(union {llmodule}:allexpd l 'equal))) )
      (setq {llmodule}:used-f
	    (:munion {llmodule}:used-f
		     (:simplify-list-but-exportable    ; real used
		      (mapcan 'cdr {llmodule}:allfnt)) ;  
		     {llmodule}:alldyn         ; dynamicly used
		     {llmodule}:used-macros    ; toplevel used local macros
		     (cdr {llmodule}:allext))) ; undef used
      (when {llmodule}:allext
	    (let ((u (assq 'errudf {llmodule}:allunknow)))
	      (if u
		  (rplacd u (nconc {llmodule}:allext (cdr u)))
		(newl {llmodule}:allunknow (cons 'errudf {llmodule}:allext)))))
      ({analyze}:allunknow analyze {llmodule}:allunknow)
      ({analyze}:used-f analyze {llmodule}:used-f)
      ({analyze}:allextd analyze {llmodule}:allextd)
      ({analyze}:allexti analyze exports-for-external-module)
      ({analyze}:defd-f analyze {llmodule}:defd-f)
      ({analyze}:allfnt analyze {llmodule}:allfnt)
      ({analyze}:alldyn analyze (simplify-list {llmodule}:alldyn))
      ;; update modules to import ,which have to export
      ;; originally internal fcts
      (mapc (lambda((m . lf))
	      (cond
	       ;; if current module, don't re-analyze
	       ((eq m mod)
		(#:crunch:warning 15 mod))
	       ;; if not in current-project, don't re-analyze
	       ((not (memq m #:crunch:all-modules))
		(#:crunch:warning 28 lf mod m))
	       ;; we may re-analyze
	       (#:crunch:recursive-analyze
		(unless
		 (catcherror t
		   (#:crunch:advise UPDATEANALYZE lf m)
		   (let ((#:crunch:verbose 0)
			 (#:crunch:keep-wrong t)
			 (#:crunch:keep-old #:crunch:keep-old)
			 (#:crunch:update-desc t)
			 (#:crunch:update-base t)
			 (#:crunch:done ())
			 (#:crunch:noerror t)
			 (#:crunch:current-defmod ())
			 (#:crunch:w-flag ())
			 (#:crunch:e-flag ())
			 )
		     (funcall 'analyze
			      m
			      (#:rtproject:name #:crunch:current-project)
			      (probepathm m)
			      lf))
		   )
		 (#:crunch:error 20 m)))
	       ;; we don't have to re-analyze, just warning
	       (t
		(#:crunch:warning 28 lf mod m))
	       ))
	    {llmodule}:allupmod)
      analyze
      )))

;;; to verify circular dependancies between imported module
;;; in a same project
(defvar :mod)
(defun :circular-dependancies-p (mod imps deps)
  (tag circular
       (mapc (lambda(i)(:c-d-p (assq i deps) (ncons mod) deps))
	     imps) )
  )

(defun :c-d-p (dep mem deps)
  (if (memq (car dep) mem)
      (exit circular (memq (car dep)(nreverse mem)))
    (mapc (lambda(i)
	    (:c-d-p (assq i deps) (cons (car dep) mem) deps))
	  (cdr dep))
    ))

;;;;;;
;;; Pour pouvoir etre redefinie dans une utilisation avec Aida
;;;;;;
(defvar :codewalker
  (if (boundp ':codewalker) :codewalker))

(defun assert-code-walker ()
  (unless :codewalker
          ;(funcall #'llnumb 6)
          (setq :codewalker 6)))

#| estce encore utile ?!?!?! est idem  :alldyn ?!?!
;;;
;;; les noms des fonctions appele'es dynamiquement
;;; 

(unless (boundp '#:system:all-dynamics)
        (defvar #:system:all-dynamics))

(defun is-a-dynamic (name)
  (setq #:system:all-dynamics (adjoin name #:system:all-dynamics))
  )

(defun get-all-dynamics ()
  #:system:all-dynamics)

(defun forget-all-dynamics ()
  (setq #:system:all-dynamics ()))

(defun is-dynamicp (name)
  (memq name #:system:all-dynamics))

(defun write-all-dynamics (file)
  (with ((outchan (openo file)))
        (pprint (get-all-dynamics))
        (close (outchan))
        ))

(defun load-some-dynamics (file)
  (let ((f (probepathf file))
        (l))
    (if  f
        (with ((inchan (#:crunch:openi f)))
              (let ((l (read)))
                (close (inchan))
                (mapc 'is-a-dynamic l)))
      (#:cruncherr:printerror 'load-some-dynamics 'errfile file)
      )))
|#

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; INTERFACE a utiliser dans les modules Aida, en 
;;; (eval-when (compile) ...) pour trouver les macros
;;; non detectables par le GRT.
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;; ----------- exported_function : "crunch-function-is-used"

(defun crunch-function-is-used (f)
  (unless (memq f {llmodule}:used-f)
    (setq {llmodule}:used-f (cons f {llmodule}:used-f))
    (#:crunch:print "Explicit declaration for use of : " f)))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; some utilities
(defun :munion (l1 . l)
  (let ((r l1))
    (mapc (lambda(i)(setq r (union i r))) l)
    r))

(de :simplify-list-but-exportable (list)
    (let ((newlist)
          (elt))
      (while list
	(setq elt (nextl list))
	(when (or #:crunch:export-accessors
		  (not (:exportable-definition-p elt)) )
	      (newl newlist elt) )
        (setq list (delq elt list))
        )
      (nreverse newlist)
      ))
