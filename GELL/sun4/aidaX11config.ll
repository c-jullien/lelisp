(defun gcalarm () (print (gcinfo)))

(loadfile "../Cllib/elab-llib.ll" t)
(loadfile "../Cvirbitmap/elab-X11.ll"     t)
(check-for-unresolved-references)

(setq #:system:name 'aida)
(defvar aidaenglish t)
(defvar aidabilingual ())  ;[JER]
(defvar aidabin "/nfs/work/lelisp/GELL/hp9800/aidaX11bin")
(defvar aidademodir "/nfs/current/aida/demodir/") ; [BI]
(defvar aidademos '()) ; [BI]
(defvar aidademopanel? ()) ; [BI]
(defvar aidadirectory "/nfs/current/aida/")
(defvar aidasystemdirectory "/nfs/current/aida/system/")
(defvar aidacurrentdirectory "/nfs/work/lelisp/GELL/hp9800/")
(defvar aidacoredirectory "/nfs/work/lelisp/GELL/hp9800/llcore/")
(defvar aidadirectories
        '("/nfs/current/aida/system/" "/nfs/current/aida/structure/" 
        "/nfs/current/aida/image/" "/nfs/current/aida/application/" 
        "/nfs/current/aida/tools/" "/nfs/current/aida/paint/" 
        "/nfs/current/aida/advanced/graph/" "/nfs/current/aida/advanced/textedit/"))
(defvar aidapriordirs '())
(defvar aidaotherdirs '())
(defvar aidacompile ())
(defvar aidadate "jeu 21 fevr 91 19:16:17 ")
(defvar aidalooks '(ilook))
(defvar aidapatchedp t)
(defvar aidatrace? ()) ; [BI]
(defvar aidaversion (catenate "1.5" (substring (version) 4 1) "07"))
(defvar aidabv "X11")
(defvar aidatty t)
;(defvar aidapatches "patches.ll") ; [JER]
(defvar aidapatches "bidon.ll")
(defvar aidarun 'aida-run)
(defvar aidatty t)
(defvar aidafiles '())
(defvar aidamodule 'aida)

(setq #:system:obj-extension "neverfound")
(add-feature (if (eq 0. 0.) '31BITFLOATS '64BITFLOATS))
;;;;(load-std () () () () () ())
;;;;(setq #:module:interpreted-list '(toplevel))
;;;;(loadmodule 'abbrev)
;;;;(unless (getdef 'eval-when) (loadmodule 'llpatch))
;;;;(loadmodule 'virtty)
(print "initty vt100 ...")
(initty "vt100")

(debug t)
(setq #:system:error-flag t)

(setq #:system:initty-after-restore-flag ())
(when aidabv
;;;;      (loadmodule 'microceyx)
;;;;      (print "Loading virbitmap...")
;;;;      (loadmodule 'virbitmap)
;;;;      (print "Initializing bitmap " aidabv "...")
;;;;      (inibitmap (symbol () aidabv))
      (setq #:system:inibitmap-after-restore-flag ())
      t)
;;;;(unless (featurep 'callext) (loadmodule 'callext))
;;;;(loadmodule 'date)
(newl #:system:save-std-gcinfo-list (cons 'lelisp (gcinfo)))
(gc t)
(if aidaenglish (current-language 'english) (current-language 'french))
;;;;(unless (featurep 'pathname) (loadmodule 'path) t)

(loadfile "../Caida/elab-aidaX11.ll" t)

(setq aidademos ())

;;(defun loadaidapatches ())

(with ((current-directory aidasystemdirectory)) (load "loadaida.ll"))
(load-aida aidatty aidabilingual)
(print "Aida loaded.")
(when aidacompile
      (let ((#:system:debug ()))
           (print "; Compiling all in core")
           (compile-all-in-core)
           (gc t)))

(newl #:system:icon-path "/nfs/current/aida/icon/gif-color")








