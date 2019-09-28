; Le_Lisp version 15.2 : compilation du terminal virtuel : ansi
(defvar #:sys-package:colon '#:tty:ansi)
(defvar #:sys-package:tty #:sys-package:colon)
(defvar :xmax 79)
(defvar #:tty:xmax 79) ;  compatibilite' v15

(defvar :ymax 24)
(defvar #:tty:ymax 24);  compatibilite' v15

(de :tycursor (col line)
    (#:tty:tyo #\esc #/[)
    (#:tty:tyod (add1 line) 2)
    (#:tty:tyo #/;)
    (#:tty:tyod (add1 col) 2)
    (#:tty:tyo #/H) )

(de :tycls ()
    (#:tty:tyo #\esc #/[ #/2 #/J) )

(de :tycleol ()
    (#:tty:tyo #\esc #/[ #/0 #/K) )

;(de :tycleos ()
;    (#:tty:tyo 27 91 74))

(de :tydelch () ; on avance et backspace
    (#:tty:tyo #\esc #/[ #/C #\bs #\sp #\bs))

;(de :tyinsln ()
;    (#:tty:tyo 27 91 76))

;(de :tydelln ()
;    (#:tty:tyo 27 91 77))

(defvar :tyattrib ())
(defvar #:tty:tyattrib ()) ;  compatibilite' v15

(de :tyattrib (x)
    (if x (#:tty:tyo #\esc #/[ #/3 #/4 #/; #/4 #/7 #/m)    ; bleu sur blanc
	  (#:tty:tyo #\esc #/[ #/3 #/7 #/; #/4 #/4 #/m) )) ; blanc sur bleu

(de :typrologue ()
    (:tyattrib ()) ; on passe en blanc sur bleu
    (:tycls))

(de :tyepilogue ()
    (:tycls))

(defvar :tyshowcursor t)
(defvar #:tty:tyshowcursor t) ;  compatibilite' v15

