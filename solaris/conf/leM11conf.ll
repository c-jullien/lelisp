
; configuration du syste`me Le-Lisp standard modulaire avec X11-windows

(load-stm () t t t t t)
(initty)
(inibitmap '|X11|)
(setq #:system:inibitmap-after-restore-flag ())

(add-feature (if (eq 0.0 0.0)
                 '31BITFLOATS
                 '64BITFLOATS))

(save-std #:system:name
 #.(if #:system:foreign-language
       "Standard system with X11-windows"
     "Syste`me standard sur X11-windows"))

