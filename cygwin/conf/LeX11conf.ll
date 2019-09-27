
;;; configurator for CELISPX11

(defvar :load-runtime (runtime))

(load-stm () t t t t t)
(progn (print ";; load time: " (- (runtime) :load-runtime) " secs.") ())
(initty)
(inibitmap '|X11|)

(setq #:system:inibitmap-after-restore-flag ())

(add-feature (if (eq 0.0 0.0)
                 '31bitfloats
               '64bitfloats))

(save-std #:system:name
	  "Standard system with X11-windows")

