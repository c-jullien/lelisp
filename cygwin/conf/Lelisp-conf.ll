
;;; configurator for:  small lelisp  (ligth Le-Lisp system)
(defvar :load-runtime (runtime))

(load-std () t () '(defstruct bvtty date) () ())
(progn (print ";; load time: " (- (runtime) :load-runtime) " secs.") ())
(add-feature (if (eq 0.0 0.0)
                 '31bitfloats
                 '64bitfloats))
(save-std #:system:name "Minimal interpreted system")

