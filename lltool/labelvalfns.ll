(de deflabelval (symb) (putprop symb (incr #:labelval:last) '#:labelval:offset))
(de defstringval (symb) (setq #:labelval:strings (acons symb (incr #:labelval:
last) #:labelval:strings)))
(de defroutineval (symb) (putprop symb (incr #:labelval:last) '#:labelval:offset))
(defvar #:labelval:last 0)
(defvar #:labelval:strings '())
