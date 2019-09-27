(eval-when(load eval compile)
(defabbrev a-zoo1 #:zoo:a-zoo1)
(defabbrev a-zoo2 #:zoo:a-zoo2)
)

;; on teste l'utilisation d'une fct interne d'un projet importe
(de {a-zoo1}:f-zoo1 (x) (#:pretty:p x))

;; pour tester les cycles de dependance
;; (import foo qui import bar qui import zoo)
;(de f-zoo2(x)(list (f-foo1 x)(f-foo1 x)))
;; idem en jouant avec -dynamic/-nodynamic
(de f-zoo2(x)(list (funcall 'f-foo1 x)))

;; pour tester qd on enleve une definition
(de f-zoo3(x)(f-zoo2 x))

