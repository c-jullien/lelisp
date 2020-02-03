; Le_Lisp version 15.2 : compilation du terminal virtuel : vt100

(setq #:sys-package:tty '#:tty:vt100)

(defvar #:tty:vt100:xmax 79)
(defvar #:tty:xmax 79) ;  compatibilite' v15

(defvar #:tty:vt100:ymax 23)
(defvar #:tty:ymax 23) ;  compatibilite' v15

(de #:tty:vt100:tycursor (col line)
    (tyo 27 91)
    (tyod (add1 line) 0)
    (tyo 59)
    (tyod (add1 col) 0)
    (tyo 72))

(de #:tty:vt100:tycls ()
    (tyo 27 91 59 72 27 91 50 74))

(de #:tty:vt100:tycleol ()
    (tyo 27 91 75))

(de #:tty:vt100:tycleos ()
    (tyo 27 91 74))

;** #:tty:termcap : vt100 : ne sait pas faire : tydelch

;** #:tty:termcap : vt100 : ne sait pas faire : tyinsln

;** #:tty:termcap : vt100 : ne sait pas faire : tydelln

'(de #:tty:vt100:tyattrib (x)
    (if x (tyo 27 91 55 109) (tyo 27 91 109)))

(defvar #:tty:vt100:tyattrib ())
(defvar #:tty:tyattrib ()) ;  compatibilite' v15

(de #:tty:vt100:tyattrib (x)
    (if x (tyo 27 91 52 109) (tyo 27 91 109)))

(defvar #:tty:vt100:tyattrib ())
(defvar #:tty:tyattrib ()) ;  compatibilite' v15

;** #:tty:termcap : vt100 : ne sait pas faire : tyinsch

(de #:tty:vt100:typrologue ()
    (tyo 27 91 49 59 50 52 114 27 91 50 52 59 49 72)
    (#:tty:vt100:tycls))

(de #:tty:vt100:tyepilogue ()
    (tycursor 0 (sub1 #:tty:vt100:ymax)))

(defvar #:tty:vt100:tyshowcursor t)
(defvar #:tty:tyshowcursor t) ;  compatibilite' v15
