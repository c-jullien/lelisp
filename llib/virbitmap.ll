;;;
;;; VIRBITMAP:  Pseudo module to load the Virtual Bitmap
;;;
;;; $Source: /usr/cvs/lelisp/llib/virbitmap.ll,v $
;;; $Date: 2016/05/21 10:36:06 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


(eval-when (eval load compile)
	   (add-feature 'virbitmap))

(eval-when (eval)
	   (libloadfile 'virmacros.ll ()))

(eval-when (eval)
	   (libloadfile 'virstruct ()))

(eval-when (eval)
	   (libloadfile 'virutil ()))

(eval-when (eval)
	   (libloadfile 'virmenu ()))

(eval-when (eval)
	   (libloadfile 'vircolor ()))

(eval-when (eval)
	   (libloadfile 'virbit ()))

(eval-when (eval)
	   (libloadfile 'virevent ()))

(eval-when (eval)
	   (libloadfile 'virdraw ()))

(eval-when (eval)
	   (libloadfile 'virgraph ()))

(eval-when (eval)
	   (libloadfile 'virwindow ()))

(eval-when (eval)
	   (libloadfile 'virinit ()))
