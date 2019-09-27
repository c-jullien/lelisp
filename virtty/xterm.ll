; Le-Lisp version 15.23 : compilation du terminal virtuel : xterm

(setq #:sys-package:tty '#:tty:xterm)

(defvar #:tty:xterm:xmax 79)
(defvar #:tty:xmax 79) ;  compatibilite' v15

(defvar #:tty:xterm:ymax 29)
(defvar #:tty:ymax 29) ;  compatibilite' v15

(de #:tty:xterm:tycursor (col line)
    (tyo 27 91)
    (incr line)
    (incr col)
    (tyod line 0)
    (tyo 59)
    (tyod col 0)
    (tyo 72))

(de #:tty:xterm:tycls ()
    (tyo 27 91 72 27 91 50 74))

(de #:tty:xterm:tycleol ()
    (tyo 27 91 75))

(de #:tty:xterm:tycleos ()
    (tyo 27 91 74))

(de #:tty:xterm:tydelch ()
    (tyo 27 91 80))

(de #:tty:xterm:tyinsln ()
    (tyo 27 91 76))

(de #:tty:xterm:tydelln ()
    (tyo 27 91 77))

(de #:tty:xterm:tyattrib (x)
    (if x (tyo 27 91 55 109) (tyo 27 91 109)))

(defvar #:tty:xterm:tyattrib ())
(defvar #:tty:tyattrib ()) ;  compatibilite' v15

(de #:tty:xterm:tyattrib (x)
    (if x (tyo 27 91 52 109) (tyo 27 91 109)))

(defvar #:tty:xterm:tyattrib ())
(defvar #:tty:tyattrib ()) ;  compatibilite' v15

(de #:tty:xterm:tyinsch (arg)
    (tyo 27 91 64 arg))

(de #:tty:xterm:typrologue ()
    (tyo 27 91 114 27 27 91 109 27 91 50 74 27 91 72 27 91 63 55 104 27 91 63 
        49 59 51 59 52 59 54 108)
    (#:tty:xterm:tycls))

(de #:tty:xterm:tyepilogue ()
    (tycursor 0 (sub1 #:tty:xterm:ymax)))

(defvar #:tty:xterm:tyshowcursor t)
(defvar #:tty:tyshowcursor t) ;  compatibilite' v15
