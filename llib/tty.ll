;;;
;;; TTY:  The Simplest Virtual Bitmap using  VIRTTY
;;;
;;; $Source: /usr/cvs/lelisp/llib/tty.ll,v $
;;; $Date: 2016/05/21 10:36:06 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


(defvar #:sys-package:bitmap '#:bitmap:virtty)
(defvar #:sys-package:colon '#:bitmap:virtty)

(defstruct window
  left top width height title hilited visible
  screen)

(defun :make-window (w)
  (#:window:screen w (:make-framed-screen wi he (string ti) hi))
  (:redisplay w (sub1 le) (sub1 to) (add 2 wi) (add 2 he)))

(defun :make-framed-screen (w h ti hi)
  (let ((s (makestring (mul (add w 2) (add h 2)) #/.)))
    (bltscreen s :blankscreen 
	       (add w 2) (add h 2)
	       (add1 (bitxmax)) (add1 (bitymax))
	       1 1
	       0 0 
	       w h)
    (unless (= hi 0)
	    (fillstring s 0 #/= (add 2 w)))
    (bltstring s 1 ti 0 (slength ti))
    s))

(defmacro :normalizeq (var mini maxi)
  `(progn
     (setq ,var (min ,var ,maxi))
     (setq ,var (max ,var ,mini))))

;;;
;;; Functions on Bitmaps
;;;

(defvar #:bitmap:name #:sys-package:tty)
(defvar #:bitmap:xmax (sub1 (tyxmax)))
(defvar #:bitmap:ymax (tyymax))

(defun bitxmax ()
  #:bitmap:xmax)

(defun bitymax ()
  #:bitmap:ymax)


;;;
;;; Global Variables
;;;

(defvar :screen                 ; The current screen
    (makestring (mul (add1 (bitxmax)) (add1 (bitymax))) #\sp))
(defvar :oscreen                ; used by  redisplayscreen
    (copy :screen))
(defvar :blankscreen            ; A blank screan (used to clear the others)
    (copy :screen))

