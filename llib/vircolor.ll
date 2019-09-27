;;;
;;; VIRCOLOR:  Virtual Bitmap Color Management
;;;
;;; $Source: /usr/cvs/lelisp/llib/vircolor.ll,v $
;;; $Date: 2016/05/21 10:36:06 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

(defvar #:sys-package:colon 'color)

(defun #:color:prin (c)
  (princn #/#)
  (princn #/<)
  (prin (type-of c))
  (princn #\sp)
  (prin (#:color:name c))
  (princn #\sp)
  (prin (#:color:red c))
  (princn #\sp)
  (prin (#:color:green c))
  (princn #\sp)
  (prin (#:color:blue c))
  (princn #\sp)
  (prin (#:color:extend c))
  (princn #/>))


(#:display:defun make-color ((red fix) (green fix) (blue fix))
  (#:display:assert-current 'make-color (#:display:internal-current-display))
  (let ((color (#:color:make)))
    (#:color:display color (#:display:internal-current-display))
    (#:color:red color red)
    (#:color:green color green)
    (#:color:blue color blue)
    (setq color (send 'make-color (#:display:internal-current-display) 
		      color red green blue))
    (unless (memq color
		  (#:display:colors (#:display:internal-current-display)))
	    (#:display:colors
	     (#:display:internal-current-display)
	     (nconc1 (#:display:colors 
		      (#:display:internal-current-display)) color)))
    color))


(#:display:defun make-mutable-color ((red fix) (green fix) (blue fix))
  (#:display:assert-current 'make-mutable-color
			    (#:display:internal-current-display))
  (let ((color (#:color:make)))
    (#:color:display color (#:display:internal-current-display))
    (#:color:red color red)
    (#:color:green color green)
    (#:color:blue color blue)
    (#:color:mutable color t)
    (setq color
	  (send 'make-mutable-color 
		(#:display:internal-current-display) 
		color red green blue))
    (unless (memq color (#:display:colors 
			 (#:display:internal-current-display)))
	    (#:display:colors
	     (#:display:internal-current-display)
	     (nconc1 (#:display:colors 
		      (#:display:internal-current-display)) color)))
    color))


(#:display:defun make-named-color ((name string))
  (#:display:assert-current 'make-named-color
			    (#:display:internal-current-display))
  (let ((color (#:color:make)))
    (#:color:display color (#:display:internal-current-display))
    (#:color:name color name)
    (setq color (send 'make-named-color 
		      (#:display:internal-current-display) color name))
    (unless (memq color (#:display:colors 
			 (#:display:internal-current-display)))
	    (#:display:colors
	     (#:display:internal-current-display)
	     (nconc1 (#:display:colors 
		      (#:display:internal-current-display)) color)))
    color))


(#:display:defun kill-color ((color color))
  (send 'kill-color (#:color:display color) color)
  (#:display:colors (#:color:display color)
		    (delq color (#:display:colors (#:color:display color))))
  (#:color:extend color ())
  (#:color:display color ()))


(defun red-component &nobind
  (when (lt (arg) 1)
	(error 'red-component 'errwna ()))
  (when (gt (arg) 2)
	(error 'red-component 'errwna (arg 2)))
  (:assert 'red-component (arg 0))
  (if (eq 1 (arg))
      (#:color:red (arg 0))
    (:assert-mutable 'red-component (arg 0))
    (send 'red-component (#:color:display (arg 0)) (arg 0) (arg 1))
    (#:color:red (arg 0) (arg 1))))


(defun blue-component &nobind
  (when (lt (arg) 1)
	(error 'blue-component 'errwna ()))
  (when (gt (arg) 2)
	(error 'blue-component 'errwna (arg 2)))
  (:assert 'blue-component (arg 0))
  (if (eq 1 (arg))
      (#:color:blue (arg 0))
    (:assert-mutable 'blue-component (arg 0))
    (send 'blue-component (#:color:display (arg 0)) (arg 0) (arg 1))
    (#:color:blue (arg 0) (arg 1))))


(defun green-component &nobind
  (when (lt (arg) 1)
	(error 'green-component 'errwna ()))
  (when (gt (arg) 2)
	(error 'green-component 'errwna (arg 2)))
  (:assert 'green-component (arg 0))
  (if (eq 1 (arg))
      (#:color:green (arg 0))
    (:assert-mutable 'green-component (arg 0))
    (send 'green-component (#:color:display (arg 0)) (arg 0) (arg 1))
    (#:color:green (arg 0) (arg 1))))


(defun all-colors &nobind
  (#:display:assert-current 'all-colors (#:display:internal-current-display))
  (let ((display (if  (eq (arg) 0) (#:display:internal-current-display) 
		   (arg 0))))
    (#:display:assert 'all-colors display)
    (#:display:colors display)))


;;;
;;; Given a color named NAME, returns the RGB values (a vector of 3 fix)
;;; or () if it fails.

(#:display:defun name-to-rgb ((name string))
  (let ((rgb (makevector 3 ()))
	(display (#:display:internal-current-display))
	)
    (#:display:assert 'name-to-rgb display)
    (or (send 'name-to-rgb (#:display:internal-current-display) name rgb)
	())))



;;;
;;; Given a colored pixel value, returns corresponding RGB values (a vector of
;;; 3 fix) or () if not allocated in the standard colormap.


(#:display:defun get-rgb-values ((pixel fix))
  (let ((rgb (makevector 3 ()))
	(display (#:display:internal-current-display))
	)
    (#:display:assert 'get-rgb-values display)
    (or (send 'get-rgb-values display pixel rgb)
	())))
