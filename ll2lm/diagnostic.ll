
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; la structure qui retient les resultats bruts de l'analyse
(eval-when (load eval compile)
(defabbrev analyze #:llmodule:analyze)
)

(defstruct {analyze}
  ;; definitions
  allfnt	; definitions from DE, DF etc
  allsynd	; definitions from SYNONYM
  allexpd	; definitions from EXPORTABLE-DEFINITION
  allextd	; definitions export from external modules, and rigth modules
                ;   ((f1 . mod1 mod2 ...)(f2 . ...
  allexti	; definitions no export from external modules, and rigth mod.
                ;   ((f1 . mod1 mod2 ...)(f2 . ...
  allother	; other definitions (defabbrev etc)
  defd-f	; all definitions
  ;; used functions
  alldyn	; dynamic used functions
  allunknow	; errors ((errudf . f1 f2 ..)(errnotanabbrev . a1 a2 ..)...)
  used-f	; all used functions
  ;; context
  include       ; if -include option: included files
  allcpenv	; from EVAL-WHEN (COMPILE)
  )

(defun {analyze}:prin (a) (terpri)
  (print "-Definitions:")
  (print " from DE,DEFMACRO,... : " ({analyze}:allfnt a))
  (print " from SYNONYM : " ({analyze}:allsynd a))
  (print " from EXPORTABLE-DEFINITION : " ({analyze}:allexpd a))
  (print " export from EXTERNAL MODULES : " ({analyze}:allextd a))
  (print " No export from EXTERNAL MODULES : " ({analyze}:allexti a))
  (print " from other definer(defabbrev...) : " ({analyze}:allother a))
  (print " all definitions : " ({analyze}:defd-f a))
  (print "-Used functions:")
  (print " dynamic used functions : " ({analyze}:alldyn a))
  (print " unknow used things : " ({analyze}:allunknow a))
  (print " all used functions : " ({analyze}:used-f a))
  (print "-Context from EVAL-WHEN(COMPILE) : ")
  (print " included files : " ({analyze}:include a))
  (pprint ({analyze}:allcpenv a))
  a
)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; the structure which contains all infos for a good diagnostic

(eval-when (load eval compile)
(defabbrev diagnostic diagnostic)
)

(setq #:sys-package:colon '{diagnostic})

(eval-when (load eval compile)
(defstruct {diagnostic}
  ;; what module
  module-name			; the name of THIS module
  ;; include field
  necessary-include             ; included files
  ;; import field
  necessary-imports		; needed imports
  excess-imports		; excess imports ?!?!
  import-rewrite-p		; do we migth rewrite import
  why-to-import			; (o . mods): object & rigth modules to import
  unknow-things			; ((errxxx . obj1 obj2 ...) ...)
  ;; export field
  all-exports			; all exports to write in EXPORT field module
  localy-necessary-exports	; localy needed exports
  extern-necessary-exports	; needed exports for other modules
  dynamic-necessary-exports	; needed exports for dynamic used fcts
  excess-exports		; no localy defined fct & no required=> no export
  internal-functions		; localy defined & localy used fct & no required => no export
  export-rewrite-p		; do we migth rewrite export
  ;; cpenv field
  other-definitions		; other definitions (defabbrev ...)
  exported-cpenv		; from EVAL-WHEN(COMPILE)
  cpenv-rewrite-p		; do we migth rewrite cpenv
  ))

(de :prin (d) (terpri)
    (print "the name of THIS module :" (:module-name d))
    (print " needed include :" (:necessary-include d))
    (print " needed imports :" (:necessary-imports d))
    (print " excess imports :" (:excess-imports d))
    (print " do we migth rewrite import :" (:import-rewrite-p d))
    (print " (o . mods): object & rigth modules to import :"(:why-to-import d))
    (print " unknow external & localy used things :" (:unknow-things d))
    (print " all exports to write in EXPORT field module :" (:all-exports d))
    (print " localy needed exports :" (:localy-necessary-exports d))
    (print " needed exports for other modules :" (:extern-necessary-exports d))
    (print " needed exports for dynamic used fcts :" (:dynamic-necessary-exports d))
    (print " no localy defined fct & no required => no export :" (:excess-exports d))
    (print " localy defined & localy used fct & no required => no export" (:internal-functions d))
    (print " do we migth rewrite export :" (:export-rewrite-p d))
    (print " other definitions (defabbrev, ...) :" (:other-definitions d))
    (print " from EVAL-WHEN(COMPILE) :" (:exported-cpenv d))
    (print " do we migth rewrite cpenv :" (:cpenv-rewrite-p d))
    d)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
(defvar :silly-f ())

;;; fill DIAGNOSTIC structure from ANALYZE structure 
;; c'est la` qu'on decide de ce qui va etre dans les IMPORT/EXPORT !
(defun :set-diagnostic-from-analyze (mod defmod analz)
  (let ((old-import (getdefmodule defmod 'import))
	(old-export (getdefmodule defmod 'export))
	(used-f ({analyze}:used-f analz))
	(defd-f ({analyze}:defd-f analz))
	(cpenv ({analyze}:allcpenv analz))
	(d (new '{diagnostic}))
	)
    (let (; new imported modules list
	  (new-import
	   (delq mod ({diagnostic}:modules-needed
		      ({analyze}:allextd analz) old-import)))
	  ; internal def. but used and no exported for other module
	  (internal-used (intersection defd-f used-f))
	  ; internal dynamic used fct
	  (internal-dynamic-used (intersection ({analyze}:alldyn analz)
					       defd-f))
	  )
       ; le nom du module pour lequel on travaille
       ({diagnostic}:module-name d mod)
       ; if required, we have included files
       ({diagnostic}:necessary-include d ({analyze}:include analz))
       ; the good import list and the unknow fcts
       ({diagnostic}:necessary-imports d new-import)
       ; manualy import not necessary
       ({diagnostic}:excess-imports d (set-difference old-import new-import))
       ; the unknow things (anythings...)
       ({diagnostic}:unknow-things d ({analyze}:allunknow analz))
       ; flag
       ({diagnostic}:import-rewrite-p d
	(not (and (set-equal ({diagnostic}:necessary-imports d) old-import)
		  (null ({diagnostic}:excess-imports d)))) )

       ; needed all defined but no used
       ({diagnostic}:localy-necessary-exports d
        (set-difference defd-f used-f 'equal))
       ; needed internal def and localy used and exported for other modules
       ; but no these which are allready exported because dynamicly used
       ({diagnostic}:extern-necessary-exports d
	(union ({analyze}:allexti analz)
	       (set-difference (intersection internal-used old-export 'equal)
			       internal-dynamic-used
			       'equal)))
       ; dynamicly used fct as (funcall 'FCT ...)
       ({diagnostic}:dynamic-necessary-exports d internal-dynamic-used)
       ; manualy exported but no defined
       ({diagnostic}:excess-exports d
	(set-difference old-export defd-f 'equal))
       (when ({diagnostic}:excess-exports d)
	     (#:crunch:warning 5 ({diagnostic}:excess-exports d)))
       ; internal definition no manualy exported and no dynamicly used
       ({diagnostic}:internal-functions	d
	(set-difference
	 (set-difference (set-difference internal-used old-export)
			 internal-dynamic-used)
	 ({analyze}:allexti analz)) )
       ; all exports (append is rigth, union is more expansive)
       ({diagnostic}:all-exports d
	(append ({diagnostic}:localy-necessary-exports d)
		({diagnostic}:extern-necessary-exports d)
		({diagnostic}:dynamic-necessary-exports d)
		(when #:crunch:keep-wrong
		      ; if updating, we got also no-defined fcts (user is God!)
		      ({diagnostic}:excess-exports d))
		(cond
		 (#:crunch:keep-all-exports
		  ; we got all fcts
		  ({diagnostic}:internal-functions d))
		 (#:crunch:keep-wrong
		  ; if updating, we got only user fcts
		  (intersection ({diagnostic}:internal-functions d)
				old-export))
		 (t
		  ; else we got nothing
		  ()
		 ))))
       ({diagnostic}:export-rewrite-p d
	(not(and (set-equal ({llmodule}:format-export
			     ({diagnostic}:all-exports d))
			    old-export
			    'equal)
		 (null ({diagnostic}:excess-exports d)) )))
       ; other defintion (DEFABBREV ...)
       ({diagnostic}:other-definitions d ({analyze}:allother analz))
       ; CPENV field
       ({diagnostic}:cpenv-rewrite-p d
	(and cpenv
	     (not (set-equal cpenv
			     (getdefmodule defmod 'cpenv)
			     'equal))) )
       ({diagnostic}:exported-cpenv d (nreverse cpenv))
       ;; why to import : ((f1 . mod1 mod2 ...) ...)
       ({diagnostic}:why-to-import d ({analyze}:allextd analz))
       d)))

;;; A partir des definitions manquantes, on rempli
;;; la variable :silly-f et rend la liste des nouveaux imports.
(defun :modules-needed (needed oldi)
  (:sort-import 
   (simplify-list (mapcan (lambda ((f . lmods))
			    (if lmods
				(or (mapcan (lambda(m)
					      (when (memq m oldi) (ncons m)))
					    lmods)
				    (copylist lmods))
			      (newl :silly-f f)()) )
			  needed))
   oldi))

;;; pour ranger les nouveux imports comme les anciens (si il y a!)
; beurk!
(defun :sort-import (l lref)
  (append lref (set-difference l lref)))

#|--------------------------------------------------------------------------
    Explication des resultats.
---------------------------------------------------------------------------|#

;; Explique le contenu des variable diagnostic, #:llmodule:silli-f.
;; S'il y a des silly-functions, c'est que l'analyse doit etre refaite.
(defun :explain-diagnostic (diagnostic)
  (let ((ni ({diagnostic}:necessary-imports diagnostic))
	(ei ({diagnostic}:excess-imports diagnostic))
	(wi ({diagnostic}:import-rewrite-p diagnostic))
	(lne ({diagnostic}:localy-necessary-exports diagnostic))
	(ene ({diagnostic}:extern-necessary-exports diagnostic))
	(dne ({diagnostic}:dynamic-necessary-exports diagnostic))
	(ee ({diagnostic}:excess-exports diagnostic))
	(if ({diagnostic}:internal-functions diagnostic))
	(we ({diagnostic}:export-rewrite-p diagnostic))
        (#:system:print-with-abbrev-flag ())
	(silly ({diagnostic}:unknow-things diagnostic))
	silly-0 silly-1
	)
    (#:crunch:terpri)
    (#:crunch:print "===== Concerning IMPORTS :")
    (ifn (or (setq silly-0 silly) wi)
	 (#:crunch:advise SEEMS 'ok 'imports)
	 (while (setq silly-1 (nextl silly-0))
	   (#:crunch:print "--")
	   (#:crunch:print "-- The following are "
			   (if (get-message-p (car silly-1))
			       (get-message (car silly-1))
			     (car silly-1)) )
	   (mapc (lambda (x) (#:crunch:print "--      " x)) (cdr silly-1))
	   )
	 (when silly
	       (#:crunch:print "--")
	       (#:crunch:print "-- Modules defining these entities have to be analyzed before module: " (:module-name diagnostic))
	       (#:crunch:print "-- If these entities are defined in ILOG products, please specify ")
	       (#:crunch:print "-- the correct context(s) for analysis.")
	       (terpri))
	 (when (or ni ei)
	       (pretty-import diagnostic ni ei))
	 )
    (#:crunch:terpri)
    (#:crunch:print "===== Concerning EXPORTS :")
    (ifn we
	 (#:crunch:advise SEEMS 'ok 'exports)
	 (when lne
	       (#:crunch:print 
                "- The following functions will be unused unless exported :")
	       (mapc (lambda (x)
		       (unless (consp x) (#:crunch:print "     " x)))
		     lne)
	       )
	 (when ene
	       (#:crunch:print "- The following exports seem necessary for other modules :")
	       (mapc (lambda (x) (#:crunch:print "     " x)) ene)
	       )
	 (when dne
	       (#:crunch:print
		"- The following exports are necessary because dynamic used :")
	       (mapc (lambda (x) (#:crunch:print "     " x)) dne)
	       )
	 (when if
	       (if #:crunch:keep-all-exports
		   (#:crunch:print "- The following exports are not necessary but required by -all option :")
		 (#:crunch:print "- The following exports are not necessary :"))
	       (mapc (lambda (x) (#:crunch:print "     " x)) if)
	       )
	 (when ee
	       (#:crunch:print "- The following exports are not defined : ")
	       (mapc (lambda (x) (#:crunch:print "     " x)) ee)
	       )
	 )
;    (unless (or wi we silly)
;	    (#:crunch:terpri)
;	    (#:crunch:print "===== From analyser : well played..."))
    ))


;;; Affiche proprement les imports de la variable diagnostic.
(defun pretty-import (dgnc ni ei)
  (#:crunch:print "- Modules that are required for compilation :")
  (mapc (lambda (mod)
	  (#:crunch:prin "- " (why-to-import dgnc mod)))
	ni)
  (when ei
	(#:crunch:terpri)
	(#:crunch:print " these modules doesn't seem useful :")
	(mapc (lambda(i)(#:crunch:prin " " i)) ei)
	(#:crunch:terpri))
  )

;;; Structure permettant de stocker les raisons pour lesquelles un module
;;; doit etre importe.
(defabbrev whyi whyi)

(eval-when (load eval compile)
(defstruct {whyi}
  mod ; module name
  f   ; thing which impose to import module <mod>
))


(defun {whyi}:prin (x)
  (let ((mod ({whyi}:mod x))
	(f ({whyi}:f x))
	)
    (ifn f
	 (#:crunch:prin "You don't need to import """ mod """")
       (#:crunch:prin "You have to import """)
       (#:crunch:prin mod)
       (#:crunch:prin """ because of :")
       (terpri)
       (mapc (lambda ((f . lmods))
	       (:prin-others mod f lmods))
	     f)
       (#:crunch:prin " .")(#:crunch:terpri))
    ))

(defun :prin-others (mod item list)
  (#:crunch:prin " " item)
  (when (setq list (delete mod list))
	(#:crunch:prin " (also exported by")
	(mapc (lambda (e)
                (#:crunch:prin " " e))
	      list)
	(#:crunch:prin ")")))

;;;; A partir du closure de parsing, rend la liste les fonctions 
;;;; qui appellent la fonction f :
'(defun who-calls (f)
  (mapcan (lambda (x)
	    (when (memq f (cdr x))
		  (ncons (car x))))
	  #:llmodule:allfnt))


;; take a module <mod>, and return functions, and other
;; definitions that impose importation of module <mod>
(defun why-to-import (dgnc mod)
  (let ((x (new 'whyi)) )
    ({whyi}:mod x mod)
    ({whyi}:f x (simplify-list
		 (mapcan (lambda (f-lmod)
			   (and (memq mod (cdr f-lmod))
				(ncons f-lmod))
			   )
			 (:why-to-import dgnc))))
    x
    ))


;;; Prend une variable de type {whyi}
;;; et rend t si le module correspondant n'est peut etre pas necessaire,
;;; c'est a dire si tout ce dont on a besoin chez lui est trouvable
;;; dans d'autres modules.
#|
(defun :not-necessary-p (x)
  (let ((mod ({whyi}:mod x))
	)
    (every (lambda (func) (remq mod (func-from func))) ({whyi}:f x))
    ))
|#



