;;; Le-Lisp version 15.26: compilation of virtual terminal: vt100

(setq #:sys-package:tty '#:tty:vt100)

(defvar #:tty:vt100:xmax 79)
(defvar #:tty:xmax 79) ;  v15 compatibility

(defvar #:tty:vt100:ymax 23)
(defvar #:tty:ymax 23) ;  v15 compatibility

(defun #:tty:vt100:tycursor (col line)
   (tyo 27 91)
   (setq line (add1 line))
   (setq col (add1 col))
   (tyod line 0)
   (tyo 59)
   (tyod col 0)
   (tyo 72))

(defun #:tty:vt100:tycls ()
   (tyo 27 91 59 72 27 91 50 74))

(defun #:tty:vt100:tycleol ()
   (tyo 27 91 75))

(defun #:tty:vt100:tycleos ()
   (tyo 27 91 74))

; termcap: vt100: can't perform: tydelch

; termcap: vt100: can't perform: tyinsln

; termcap: vt100: can't perform: tydelln

(defun #:tty:vt100:tyattrib (x)
   (if x (tyo 27 91 55 109) (tyo 27 91 109)))

(defvar #:tty:vt100:tyattrib ())
(defvar #:tty:tyattrib ()) ;  v15 compatibility

(defun #:tty:vt100:tyattrib (x)
   (if x (tyo 27 91 52 109) (tyo 27 91 109)))

(defvar #:tty:vt100:tyattrib ())
(defvar #:tty:tyattrib ()) ;  v15 compatibility

; termcap: vt100: can't perform: tyinsch

(defun #:tty:vt100:typrologue ()
   (tyo 27 91 49 59 50 52 114 27 91 50 52 59 49 72)
   (#:tty:vt100:tycls))

(defun #:tty:vt100:tyepilogue ()
   (tycursor 0 (sub1 #:tty:vt100:ymax)))

(defvar #:tty:vt100:tyshowcursor t)
(defvar #:tty:tyshowcursor t) ;  v15 compatibility
