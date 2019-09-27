;;; Le-Lisp version 15.26: compilation of virtual terminal: rxvt

(setq #:sys-package:tty '#:tty:rxvt)

(defvar #:tty:rxvt:xmax 79)
(defvar #:tty:xmax 79) ;  v15 compatibility

(defvar #:tty:rxvt:ymax 23)
(defvar #:tty:ymax 23) ;  v15 compatibility

(defun #:tty:rxvt:tycursor (col line)
   (tyo 27 91)
   (setq line (add1 line))
   (setq col (add1 col))
   (tyod line 0)
   (tyo 59)
   (tyod col 0)
   (tyo 72))

(defun #:tty:rxvt:tybeep ()
   (tyo 27 91 63 53 104 27 91 63 53 108))

(defun #:tty:rxvt:tycls ()
   (tyo 27 91 72 27 91 50 74))

(defun #:tty:rxvt:tycleol ()
   (tyo 27 91 75))

(defun #:tty:rxvt:tycleos ()
   (tyo 27 91 74))

(defun #:tty:rxvt:tydelch ()
   (tyo 27 91 80))

(defun #:tty:rxvt:tyinsln ()
   (tyo 27 91 76))

(defun #:tty:rxvt:tydelln ()
   (tyo 27 91 77))

(defun #:tty:rxvt:tyattrib (x)
   (if x (tyo 27 91 55 109) (tyo 27 91 50 55 109)))

(defvar #:tty:rxvt:tyattrib ())
(defvar #:tty:tyattrib ()) ;  v15 compatibility

(defun #:tty:rxvt:tyattrib (x)
   (if x (tyo 27 91 52 109) (tyo 27 91 50 52 109)))

(defvar #:tty:rxvt:tyattrib ())
(defvar #:tty:tyattrib ()) ;  v15 compatibility

(defun #:tty:rxvt:tyinsch (arg)
   (tyo 27 91 52 104 27 91 64 arg 27 91 52 108))

(defun #:tty:rxvt:typrologue ()
   (tyo 27 91 114 27 91 109 27 91 50 74 27 91 72 27 91 63 55 104 27 91 63 49 
        59 51 59 52 59 54 108 27 91 52 108)
   (#:tty:rxvt:tycls))

(defun #:tty:rxvt:tyepilogue ()
   (tycursor 0 (sub1 #:tty:rxvt:ymax)))

(defvar #:tty:rxvt:tyshowcursor t)
(defvar #:tty:tyshowcursor t) ;  v15 compatibility
