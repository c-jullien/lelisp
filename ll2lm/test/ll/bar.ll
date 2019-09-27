(eval-when (load eval compile)
(defabbrev a-bar1 #:bar:a-bar1)
(defabbrev a-bar3 #:bar:a-bar3)
)

(eval-when (load eval compile)
(defmacro defbar1 (x)
  `(defun ,(concat 'm-bar1- x) () ',x))
)

(eval-when (load eval compile)
(defmacro defbar2 (x)
  `(defgoo1 ,(concat 'm-bar-2 x)))
)

(eval-when (load eval compile)
(defmacro defbar3 (x)
  `(defun ,(concat 'm-bar3- x) () ',x))
)

(defmacro defbar4 (x)
  `(defun ,(concat 'm-bar4- x) () ',x))

(defmacro defbar5 (x)
  `(defun ,(concat 'm-bar5- x) () ',x))

(defbar3 f-bar20)  ; to avoid export
(defbar4 f-bar20)  ; TO AVOID EXPORT

(defabbrev a-bar2 #:bar:a-bar2)

(de f-bar1(x) (funcall 'f-bar11 x))
(de {a-bar1}:f-bar1(x)x)

; pour tester les abbrev + fct imortees
(de f-bar11(x)({a-zoo1}:f-zoo1 ({a-zoo1}:f-zoo1 x)))
(de {a-zoo1}:f-bar12 (x) x)
(de {a-zoo2}:f-bar13 (x) x)

; pour tester l'analyse recursive
(de f-bar2(x) 0)
(de f-bar20(x) 0)

; pour tester l'import d'abbrev + fct
(de {a-bar1}:f-bar2(x)x)
(de {a-bar2}:f-bar2(x)x)
; internal
(de f-bar21())

(de f-bar3(x) (f-bar2 (f-bar20 x)))

(de f-bar41(x))
(synonymq f-bar42 f-bar41)
(de f-bar43(x)(f-bar20 x))

(de f-bar5(x)(cons x (f-bar21)))
