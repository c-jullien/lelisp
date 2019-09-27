;;; Quelques definitions vides a charger au moment de la compilation du
;;; loader, afin que le compilateur ne rale pas pour cause de fonctions
;;; indefinies ou de mauvais type.


(de #:fasl:fasl-write-block ()
    ())

(de #:fasl:fasl-memo-eval-block (a)
    ())

(de #:fasl:fasl-record-fentry (a1 a2)
    ())

(de #:fasl:fasl-record-literal-reference (a)
    ())

(de #:fasl:fasl-record-symbol-reference (a1 a2 . a3)
    ())

(de #:fasl:fasl-emit-title-block (name)
    ())
