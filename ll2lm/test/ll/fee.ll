;; pour tester un import declenche par heritage de structure
(eval-when (load eval compile)
(defstruct s-fee a b)
)

;; fee doit importer fur.lm, mais foo.lm qui importe deja fee
;; devra aussi importer fur.lm 
(eval-when (load eval compile)
(defstruct s-fee2 a (b (f-fur)))
)

(de f-fee (x) (make-hash-table-eq x))
