(defmacro verif(x)
    (unless (boundp x)
	    (error 'verif 'errunk x))
    x)

; declenche l'import de zee pour f-zee1, et zyy pour u-zyy1
(defmacro m-guu1(n)
  `(list ,(f-zee1 (verif u-zyy1) n)))

(de f-guu1 (x) x)

(m-guu1 1)
(m-guu1 2)

