
;;; Configuration file for analyzer: ll2lm

(defvar :load-runtime (runtime))

;; suppress all autoload
(mapoblist (lambda(f) (when (get f 'autoload)(remprop f 'autoload))) )

;; no inibitmap
(setq #:system:inibitmap-after-restore-flag ())

;; minimal environment for ANALYZER
(load-stm ()
          ; virbitmap(to simplify analyze of most appli.)
          t
          ; no editor
          ()
          ; env required
          '(virtty defstruct abbrev pretty format sets cpmac stringio
          ; to simplify analyze of most appli. !!
            setf sort array callext date microceyx format hash)
          ; loader
          t
          ; no compiler
          ()
          )

(gc t)
loadll2lm
(gc t)

(add-feature (if (eq 0.0 0.0)
                 '31bitfloats
               '64bitfloats))

(add-feature 'compiler) ; to treat DEFSTRUCT as complice

(defvar #:crunch:restore:error ())
(defun #:crunch:restore:syserror (f m a)
  (setq #:crunch:restore:error m)
  (super-itsoft '#:crunch:restore 'syserror (list f m a)))

(defun #:crunch:restore-fn (msg)
   (when #:system:initty-after-restore-flag (initty))
   (let ((f (control-file-pathname 'll2lm)))
     (when (probefile f)
           (loadfile f t)))
   (let ((cmd (getenv "LL2LMARGS"))
         (#:sys-package:itsoft (cons '#:crunch:restore #:sys-package:itsoft)))
     (if cmd
         (progn
          (lock (lambda(tag val)
                 (when tag (print "**")
                           (printerror 'analyzer
                                       "I quit on unrecoverable error"
                                       #:crunch:restore:error)
                           (print "**"))
                 (end))
               (eval (read-from-string (catenate "(sh-analyze " cmd ")")))
               )
          (end ))
       (print "; " msg)
       "interactive use")))

(progn (print ";; load time: " (- (runtime) :load-runtime) " secs.") ())

(save-std #:system:name "Welcome to Analyzer System"
          'identity
          '#:crunch:restore-fn
)

