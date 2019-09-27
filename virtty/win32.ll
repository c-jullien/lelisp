;;;; Le_Lisp version 15.2 : compilation du terminal virtuel : WIN32

(defvar #:sys-package:colon '#:tty:WIN32)
(defvar #:sys-package:tty #:sys-package:colon)

(defvar :xmax 79)
(defvar #:tty:xmax 79) ;  compatibilite' v15

(defvar :ymax 24)
(defvar #:tty:ymax 24);  compatibilite' v15

;; (|DOScolor| 16) means :
;;
;;    foreground = index at 6
;;    background = index at 1
;;
;; with color code :
;;
;;    black   (0), blue    (1), green   (2), cyan    (3)
;;    red     (4), magenta (5), yellow  (6), white   (7)
;;
;; So, (|DOScolor| 16) means yellow characters on blue background.



;;; Initialise les fonctions externes.

(defextern |DOStyprologue|   ())
(defextern |DOStyepilogue|   ())
(defextern |DOStycursor|     (fix fix))
(defextern |DOStycls|	     ())
(defextern |DOStycleol|	     ())
(defextern |DOStybeep|	     ())
(defextern |DOStyattrib|     (fix))
(defextern |DOStystring|     (string fix))
(defextern |DOStyshowcursor| (fix))
(defextern |DOStyxmax|	     () fix)
(defextern |DOStyymax|	     () fix)
(defextern |DOScolor|	     (fix) fix)

(defun :typrologue ()
   (|DOStyprologue|)
   (:tyxmax)
   (:tyymax)
   (:tyattrib ())
   (:tycls)
   t)

(defun :tyepilogue ()
   (tyflush)
   (:tycls)
   (|DOScolor| 7)
   (|DOStyepilogue|)
   t)

(defun :tycursor (col line)
   (tyflush)
   (|DOStycursor| col line)
   line)

(defun :tycls ()
   (tyflush)
   (|DOStycls|)
   t)

(defun :tycleol ()
   (tyflush)
   (|DOStycleol|)
   t)

(defun :tystring (s l)
   (|DOStystring| s l)
   l)

(defun :tyxmax ()
   (let ((x (|DOStyxmax|)))
        (setq #:tty:xmax x)
        (setq :xmax x)
        x))

(defun :tyymax ()
   (let ((y (|DOStyymax|)))
        (setq #:tty:ymax y)
        (setq :ymax y)
        y))

(defun :tydelch () ; on avance et backspace
   (tyo #/  #\BS))

;(defun :tyinsln ())
;(defun :tydelln ())

(defvar :tyattrib ())
(defvar #:tty:tyattrib ()) ;  compatibilite' v15

(defun :tyattrib (x)
   (tyflush)
   (|DOStyattrib| (if x 1 0))
   x)

(defun :tybeep ()
   (tyflush)
   (|DOStybeep|)
   t)

(defvar :tyshowcursor t)
(defvar #:tty:tyshowcursor t) ;  compatibilite' v15

(defun :tyshowcursor (x)
   (tyflush)
   (|DOStyshowcursor| (if x 1 0)))

(:tyxmax)
(:tyymax)
