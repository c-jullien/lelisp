(defun gcalarm () (print (gcinfo)))

(loadfile "../Cllib/elab-llib.ll" t)
(loadfile "../Cvirbitmap/elab-X11.ll"     t)
(check-for-unresolved-references)

(setq #:system:name '|aidaX11|)
(defvar aidaenglish t)
(defvar aidabilingual ())  ;[JER]
(defvar aidabin "/nfs/work/lelisp/GELL/sun4/aidaX11bin")
(defvar aidadirectory "/nfs/work/aida/")
(defvar aidasystemdirectory "/nfs/work/aida/system/")
(defvar aidacurrentdirectory "/nfs/work/lelisp/GELL/sun4/")
(defvar aidacoredirectory "/nfs/work/lelisp/GELL/sun4/llcore/")
(defvar aidadirectories
        '("/nfs/work/aida/system/" "/nfs/work/aida/structure/" 
        "/nfs/work/aida/image/" "/nfs/work/aida/application/" 
        "/nfs/work/aida/tools/" "/nfs/work/aida/paint/" 
        "/nfs/work/aida/advanced/graph/" "/nfs/work/aida/advanced/textedit/"))
(defvar aidapriordirs '())
(defvar aidaotherdirs '())
(defvar aidacompile ())
(defvar aidadate "jeu 21 fevr 91 19:16:17 ")
(defvar aidalooks '(ilook))
(defvar aidapatchedp t)
(defvar aidaversion (catenate "1.5" (substring (version) 4 1) "01"))
(defvar aidabv "X11")
(defvar aidatty t)
;(defvar aidapatches "patches.ll") ; [JER]
(defvar aidapatches "bidon.ll")
(defvar aidarun 'aida-run)
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

(with ((current-directory aidasystemdirectory)) (load "loadaida.ll"))
(load-aida aidatty aidabilingual)
(print "Aida loaded.")
(when aidacompile
      (let ((#:system:debug ()))
           (print "; Compiling all in core")
           (compile-all-in-core)
           (gc t)))

(newl #:system:icon-path "/nfs/work/aida/icon/gif-color")








