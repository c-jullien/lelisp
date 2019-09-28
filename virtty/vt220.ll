; Le_Lisp version 15.2 : compilation du terminal virtuel : vt220

(setq #:sys-package:tty '#:tty:vt220)

(defvar #:tty:vt220:xmax 79)
(defvar #:tty:xmax 79) ;  compatibilite' v15

(defvar #:tty:vt220:ymax 23)
(defvar #:tty:ymax 23) ;  compatibilite' v15

(de #:tty:vt220:tycursor (col line)
    (tyo 27 91)
    (tyod (add1 line) 0)
    (tyo 59)
    (tyod (add1 col) 0)
    (tyo 72))

(de #:tty:vt220:tycls ()
    (tyo 27 91 72 27 91 74))

(de #:tty:vt220:tycleol ()
    (tyo 27 91 75))

(de #:tty:vt220:tycleos ()
    (tyo 27 91 74))

; ** terminfo : vt220 : ne sais pas faire : tydelch

(de #:tty:vt220:tyinsln ()
    (tyo 27 91 76))

(de #:tty:vt220:tydelln ()
    (tyo 27 91 77))

(de #:tty:vt220:tyattrib (x)
    (if x (tyo 27 91 55 109) (tyo 27 91 48 109)))

(defvar #:tty:vt220:tyattrib ())
(defvar #:tty:tyattrib ()) ;  compatibilite' v15

(de #:tty:vt220:tyattrib (x)
    (if x (tyo 27 91 52 109) (tyo 27 91 48 109)))

(defvar #:tty:vt220:tyattrib ())
(defvar #:tty:tyattrib ()) ;  compatibilite' v15

; ** terminfo : vt220 : ne sais pas faire : tyinsch

(de #:tty:vt220:typrologue ()
    (#:tty:vt220:tycls))

(de #:tty:vt220:tyepilogue ()
    (tycursor 0 (1- #:tty:vt220:ymax)))

(defvar #:tty:vt220:tyshowcursor t)
(defvar #:tty:tyshowcursor t) ;  compatibilite' v15
