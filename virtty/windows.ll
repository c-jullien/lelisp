;;;; Le_Lisp version 15.2 : compilation du terminal virtuel : WINDOWS

(defvar #:sys-package:colon '#:tty:WINDOWS)
(defvar #:sys-package:tty #:sys-package:colon)

(defvar :xmax 79)
(defvar #:tty:xmax 79) ;  compatibilite' v15

(defvar :ymax 24)
(defvar #:tty:ymax 24);  compatibilite' v15

;;; Initialise les fonctions externes.

(defextern |WINtycursor|     (fix fix))
(defextern |WINtycls|	     ())
(defextern |WINtycleol|	     ())
(defextern |WINtycursor|     (fix fix))
(defextern |WINtybeep|	     ())
(defextern |WINtyattrib|     (fix))
(defextern |WINtystring|     (string fix))
(defextern |WINtyshowcursor| (fix))
(defextern |WINtyxmax|	     () fix)
(defextern |WINtyymax|	     () fix)

(defun :tycursor (col line)
   (tyflush)
   (|WINtycursor| line col)
   line)

(defun :tycls ()
   (tyflush)
   (|WINtycls|)
   t)

(defun :tycleol ()
   (tyflush)
   (|WINtycleol|)
   t)

(defun :tystring (s l)
   (|WINtystring| s l)
   l)

(defun :tyxmax ()
   (let ((x (|WINtyxmax|)))
        (setq #:tty:xmax x)
        (setq :xmax x)
        x))

(defun :tyymax ()
   (let ((y (|WINtyymax|)))
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
   (|WINtyattrib| (if x 1 0))
   x)

(defun :tybeep ()
   (tyflush)
   (|WINtybeep|)
   t)

(defun :typrologue ()
   (:tyxmax)
   (:tyymax)
   (:tyattrib ())
   (:tycls)
   t)

(defun :tyepilogue ()
   (:tycls)
   t)

(defvar :tyshowcursor t)
(defvar #:tty:tyshowcursor t) ;  compatibilite' v15

(defun :tyshowcursor (x)
   (tyflush)
   (|WINtyshowcursor| (if x 1 0)))

(:tyxmax)
(:tyymax)
