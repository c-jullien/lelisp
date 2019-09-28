(de f-roo (x) x)

(defmacro m-roo(x) (if (f-roo x) `(cons ,x,x) 2))
