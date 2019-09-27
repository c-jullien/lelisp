;;; Le-Lisp version 15.26: compilation of virtual terminal: dtterm

(setq #:sys-package:tty '#:tty:dtterm)

(defvar #:tty:dtterm:xmax 79)
(defvar #:tty:xmax 79) ;  v15 compatibility

(defvar #:tty:dtterm:ymax 23)
(defvar #:tty:ymax 23) ;  v15 compatibility

(defun #:tty:dtterm:tycursor (col line)
   (tyo 27 91)
   (setq line (add1 line))
   (setq col (add1 col))
   (tyod line 0)
   (tyo 59)
   (tyod col 0)
   (tyo 72))

(defun #:tty:dtterm:tybeep ()
   (tyo 27 91 63 53 104 27 91 63 53 108))

(defun #:tty:dtterm:tycls ()
   (tyo 27 91 72 27 91 74))

(defun #:tty:dtterm:tycleol ()
   (tyo 27 91 75))

(defun #:tty:dtterm:tycleos ()
   (tyo 27 91 74))

(defun #:tty:dtterm:tydelch ()
   (tyo 27 91 80))

(defun #:tty:dtterm:tyinsln ()
   (tyo 27 91 76))

(defun #:tty:dtterm:tydelln ()
   (tyo 27 91 77))

(defun #:tty:dtterm:tyattrib (x)
   (if x (tyo 27 91 50 59 55 109) (tyo 27 91 50 50 59 50 55 109)))

(defvar #:tty:dtterm:tyattrib ())
(defvar #:tty:tyattrib ()) ;  v15 compatibility

(defun #:tty:dtterm:tyattrib (x)
   (if x (tyo 27 91 52 109) (tyo 27 91 50 52 109)))

(defvar #:tty:dtterm:tyattrib ())
(defvar #:tty:tyattrib ()) ;  v15 compatibility

(defun #:tty:dtterm:tyinsch (arg)
   (tyo 27 91 52 104 arg 27 91 52 108))

(defun #:tty:dtterm:typrologue ()
   (tyo 27 32 70 27 62 27 91 63 49 108 27 91 63 55 104 27 91 63 52 53 108)
   (#:tty:dtterm:tycls))

(defun #:tty:dtterm:tyepilogue ()
   (tycursor 0 (sub1 #:tty:dtterm:ymax)))

(defvar #:tty:dtterm:tyshowcursor t)
(defvar #:tty:tyshowcursor t) ;  v15 compatibility
