;;;
;;; VIRUTIL:  Virtual Bitamp Utilities
;;;
;;; $Source: /usr/cvs/lelisp/llib/virutil.ll,v $
;;; $Date: 2016/05/21 10:36:07 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


;;;
;;; This module is imported by each other modules of the VB.
;;;

(eval-when (eval)
	   (unless (getdef '#:display:defun)
		   (libload "virmacros.ll")))


(setq #:sys-package:colon 'display)

(unless (>= (version) 15.2)
        (error 'load 'erricf 'virbitmap))

(eval-when (load eval compile)
	   (if (boundp '#:display:current-display)
	       (defvar #:display:current-display #:display:current-display)
	     (defvar #:display:current-display)))


;;;
;;; (current-display ()) is now legal, but that must be short.
;;;

(defun current-display &nobind
  (selectq (arg)
      (0
       #:display:current-display)
      (1
       (ifn (arg 0)
	    (setq #:display:current-display ())
	    ;; else
	    (#:display:assert 'current-display (arg 0))
	    (unless (eq #:display:current-display (arg 0))
		    (setq #:display:current-display (arg 0))
		    (send 'current-display #:display:current-display))
	    #:display:current-display))
      (t
       (error 'current-display 'errwna (arg)))))

