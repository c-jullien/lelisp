;;; Le-Lisp version 15.26: compilation of virtual terminal: cygwin

(setq #:sys-package:tty '#:tty:cygwin)

(defvar #:tty:cygwin:xmax 79)
(defvar #:tty:xmax 79) ;  v15 compatibility

(defvar #:tty:cygwin:ymax 24)
(defvar #:tty:ymax 24) ;  v15 compatibility

(defun #:tty:cygwin:tycursor (col line)
   (tyo 27 91)
   (setq line (add1 line))
   (setq col (add1 col))
   (tyod line 0)
   (tyo 59)
   (tyod col 0)
   (tyo 72))

(defun #:tty:cygwin:tybeep ()
   (tyo 27 91 63 53 104 27 91 63 53 108))

(defun #:tty:cygwin:tycls ()
   (tyo 27 91 72 27 91 74))

(defun #:tty:cygwin:tycleol ()
   (tyo 27 91 75))

(defun #:tty:cygwin:tycleos ()
   (tyo 27 91 74))

(defun #:tty:cygwin:tydelch ()
   (tyo 27 91 80))

(defun #:tty:cygwin:tyinsln ()
   (tyo 27 91 76))

(defun #:tty:cygwin:tydelln ()
   (tyo 27 91 77))

(defun #:tty:cygwin:tyattrib (x)
   (if x (tyo 27 91 55 109) (tyo 27 91 109)))

(defvar #:tty:cygwin:tyattrib ())
(defvar #:tty:tyattrib ()) ;  v15 compatibility

(defun #:tty:cygwin:tyattrib (x)
   (if x (tyo 27 91 52 109) (tyo 27 91 50 52 109)))

(defvar #:tty:cygwin:tyattrib ())
(defvar #:tty:tyattrib ()) ;  v15 compatibility

(defun #:tty:cygwin:tyinsch (arg)
   (tyo 27 91 52 104 27 91 64 arg 27 91 52 108))

(defun #:tty:cygwin:typrologue ()
   (#:tty:cygwin:tycls))

(defun #:tty:cygwin:tyepilogue ()
   (tycursor 0 (sub1 #:tty:cygwin:ymax)))

(defvar #:tty:cygwin:tyshowcursor t)
(defvar #:tty:tyshowcursor t) ;  v15 compatibility
