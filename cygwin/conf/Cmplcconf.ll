
;;; configurator for CMPLC

(defvar :load-runtime (runtime))

(load-cpl () t t t t t)
(progn (print ";; load time: " (- (runtime) :load-runtime) " secs.") ())
format
hash
stringio

(defun init-complice (msg)
    (unless  (let ((file (getenv "CPCMDFILE")) )
               (when file
                     (loadfile file t)
                     t)))
    (core-init-std msg))

(add-feature (if (eq 0.0 0.0)
                 '31bitfloats
               '64bitfloats))

(save-std #:system:name
          "Complice"
          'init-complice)

