
; configuration du syste`me Le_Lisp standard modulaire avec Ceyx

(load-stm () t t t t t)
(load "../ceyx/make.ll")

(add-feature (if (eq 0.0 0.0)
                 '31BITFLOATS
                 '64BITFLOATS))
(make-ceyx #:system:name)

