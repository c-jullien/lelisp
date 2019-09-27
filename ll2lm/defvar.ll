;;; all defvar of ll2lm ' s project - imported by all modules
;;; $Id: defvar.ll,v 1.1 2006/12/09 11:22:08 jullien Exp $
;;;

;;; all global variables are in CRUNCH package
(setq #:sys-package:colon 'crunch)

(defvar #:crunch:version
  (if (boundp '#:crunch:version)
      #:crunch:version
    (fadd (fsub (version) 15.2) 2.0)))
(defvar #:crunch:subversion
  (if (boundp '#:crunch:subversion) #:crunch:subversion (subversion)))

;; to know what error in case of fatal error
(defvar :lasterror)
;; to play with real error or not in syserror
(defvar #:crunch:noerror ())
;; Modules we had to loaded
(defvar :loaded-modules
  (when (boundp ':loaded-modules) :loaded-modules))
;; Modules dont on a du charger le cpenv.
(defvar :loaded-cpenv
  (when (boundp ':loaded-cpenv) :loaded-cpenv))
;; Dans le meme ton, liste des includes charge's
(defvar :loaded-files
  (when (boundp ':loaded-files) :loaded-files))
;; modules & fcts to import
(defvar :modules-to-import)
;; list of unknow meeted things
(defvar :unknow-things)
;; list of unknow sharp macro
(defvar :unknow-sharp)
;; for defsharp
(defvar :sys-package:sharp #:sys-package:sharp)
;; use include field or not
(defvar :include
  (when (boundp ':include) :include))
;; list of included modules
(defvar :modules-to-include)
;; error in toplevel form
(defvar :toplevel-error)
;; during a read
(defvar :read-error ())
;; last readed form
(defvar :lastread)
;; verbose level
(defvar :verbose
  (if (boundp ':verbose) :verbose 0)))
;;; The reference modules base of the analyze environment
(defvar :current-mr
  (when (boundp ':current-mr) :current-mr))
;; flag to play with dynamic call
(defvar :dynamic-caller
  (when (boundp ':dynamic-caller) :dynamic-caller))
;; flag to play with EXPORTABLE-DEFINITION
(defvar :export-accessors
  (when (boundp ':export-accessors) :export-accessors))
;; config file for -config option
(defvar :config-file
  (when (boundp ':config-file) :config-file))

;;; globales from codewalker
;; toutes les fcts definies dans le module
(defvar #:llmodule:prog)
;; toutes les ftcs definies avec leur closure
;(defvar #:llmodule:allfnt)
;; les fcts indefinies (sans doute definies a l'EXTerieur)
(defvar #:llmodule:allext)
;; les fcts definies dans d'autres modules
(defvar #:llmodule:allextd)
;; les fcts appelees dynamiquement
;(defvar #:llmodule:alldyn)
;; les autres definitions (abbrev ...)
;(defvar #:llmodule:allother)
;; les definition via defstruct  &Co
;(defvar #:llmodule:allexpd)
;; les definitions via SYNONYM
;(defvar #:llmodule:allsynd)
;; les modules qu'il faudra mettre a` jour 
(defvar #:llmodule:allupmod)
;; to play with #:complice:parano-flag in generated makefile
(defvar #:llmodule:parano)

;;; ces globales decrivent des entites locales a 1 module
;; using during parsing
;; la fermeture transitive d'1 fct
(defvar #:llmodule:closure)
;; les fcts appelees indefinies
(defvar #:llmodule:extern-u)
;; les fcts appelees dynamiquement(funcall 'toto)
(defvar #:llmodule:dynamic)
;; using during reading
;; les definisseurs qui declenchent un import du module
(defvar #:llmodule:definer)
;; (exportable-defintion 'foo ...)
(defvar #:llmodule:exportable-definition)
;; (synonym 'foo 'bar)
(defvar #:llmodule:synonym-definition)
;; une idee du futur cpenv du module
(defvar #:llmodule:exported-cpenv)
;; macro which are localy defined & top-level used
(defvar #:llmodule:used-macros)
;; l'ensemble des Fonctions definies dans ce module
(defvar #:llmodule:defd-f
  (when (boundp '#:llmodule:defd-f) #:llmodule:defd-f))
;; all used fcts
(defvar #:llmodule:used-f
  (when (boundp '#:llmodule:used-f) #:llmodule:used-f))
;; le flag de dependance circulaire dans les importations
(defvar #:llmodule:circular-dependancy)
;; les flags pour les structures heritees
(defvar #:crunch:not-parent-structures '(tclass))
(defvar #:crunch:defstruct-flag ())

;;; all variables describing current module's environment
;; current analyzer updating project
(defvar :current-project
  (when (boundp ':current-project) :current-project))
;; current analyzer diagnostic
(defvar :current-diagnostic
  (when (boundp ':current-diagnostic) :current-diagnostic))
;; current defmodule of current module
(defvar :current-defmod
  (when (boundp ':current-defmod) :current-defmod))
;; list of modules in current-project
(defvar :all-modules
  (when (boundp ':all-modules) :all-modules))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;; global environment of analyze
;;;
;; to determine level of dependancies in makefile
(defvar :dependancy
  (if (boundp ':dependancy) :dependancy 1))
;; already give an anslyze in the same environment
(defvar :done)
;; flag to update module file
(defvar :update-desc
  (when (boundp ':update-desc) :update-desc))
;; flag to update ref. file
(defvar :update-base
  (when (boundp ':update-base) :update-base))
;; flag to update make-file
(defvar :update-make
  (when (boundp ':update-make) :update-make))
;; specified included files
(defvar :includes
  (when (boundp ':includes) :includes))
;; specified imported modules
(defvar :imports
  (when (boundp ':imports) :imports))
;; keep old fields (particulary EXPORT & IMPORT) in .lm 
;; analyzer may be update them...
(defvar :keep-wrong
  (when (boundp ':keep-wrong) :keep-wrong))
;; Don't write in .lm nor .ref
(defvar :keep-old
  (when (boundp ':keep-old) :keep-old))
;; export all function definitions
(defvar :keep-all-exports ())
;; do recursive analyze
(defvar :recursive-analyze ())
;; flag ?!?!?
(defvar :relax-import-flag)
;; default multiple-defined error message
(defvar #:crunch:default-multiple-defined-message 25)
