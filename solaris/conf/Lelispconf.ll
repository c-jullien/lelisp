
;;; Configuration file for: lelisp  (regular Le-Lisp system)

(defvar :load-runtime (runtime))

(load-stm () t t t t t)
(progn (print ";; load time: " (- (runtime) :load-runtime) " secs.") ())

(add-feature (if (eq 0.0 0.0)
                 '31bitfloats
               '64bitfloats))
(save-std #:system:name "Standard system")

