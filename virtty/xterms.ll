; Le_Lisp version 15.2 : compilation du terminal virtuel : xterms

(setq #:sys-package:tty '#:tty:xterms)

(defvar #:tty:xterms:xmax 79)
(defvar #:tty:xmax 79) ;  compatibilite' v15

(defvar #:tty:xterms:ymax 23)
(defvar #:tty:ymax 23) ;  compatibilite' v15

(de #:tty:xterms:tycursor (col line)
    (tyo 27 91)
    (incr line)
    (incr col)
    (tyod line 0)
    (tyo 59)
    (tyod col 0)
    (tyo 72))

(de #:tty:xterms:tycls ()
    (tyo 27 91 72 27 91 50 74))

(de #:tty:xterms:tycleol ()
    (tyo 27 91 75))

(de #:tty:xterms:tycleos ()
    (tyo 27 91 74))

(de #:tty:xterms:tydelch ()
    (tyo 27 91 80))

(de #:tty:xterms:tyinsln ()
    (tyo 27 91 76))

(de #:tty:xterms:tydelln ()
    (tyo 27 91 77))

(de #:tty:xterms:tyattrib (x)
    (if x (tyo 27 91 55 109) (tyo 27 91 109)))

(defvar #:tty:xterms:tyattrib ())
(defvar #:tty:tyattrib ()) ;  compatibilite' v15

(de #:tty:xterms:tyattrib (x)
    (if x (tyo 27 91 52 109) (tyo 27 91 109)))

(defvar #:tty:xterms:tyattrib ())
(defvar #:tty:tyattrib ()) ;  compatibilite' v15

(de #:tty:xterms:tyinsch (arg)
    (tyo 27 91 64 arg))

(de #:tty:xterms:typrologue ()
    (tyo 27 91 114 27 27 91 109 27 91 50 74 27 91 72 27 91 63 55 104 27 91 63 
        49 59 51 59 52 59 54 108)
    (#:tty:xterms:tycls))

(de #:tty:xterms:tyepilogue ()
    (tycursor 0 (sub1 #:tty:xterms:ymax)))

(defvar #:tty:xterms:tyshowcursor t)
(defvar #:tty:tyshowcursor t) ;  compatibilite' v15
