;;;
;;; llpboot.ll: adjustments at system boot time
;;;
;;; $Source: /usr/cvs/lelisp/llib/llpboot.ll,v $
;;; $Date: 2016/05/21 10:36:05 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------



(setq #:sys-package:colon 'llpatch)

(unless (typefn ':setfn)
	(synonymq :setfn setfn)
)
(defun setfn (fnt type val)
  ;;(remprop fnt 'autoload)  
  (remprop fnt 'resetfn)
  (remprop fnt 'trace)
  (when (boundp '#:trace:trace)(setq #:trace:trace (delq fnt #:trace:trace)))
  (:setfn  fnt type val) )
)

(defextern lmaccess(string fix))
(defun lmnumb (s)(lmaccess s 1))
(defextern lmalive(string))
(defun lmsymb (s) (lmalive s))
(defun llnumb (x) (lmnumb (string x)))

(defvar #:system:23-compatibility-flag ())

(unless (typefn '#:llpatch:rmargin)
	(synonymq #:llpatch:rmargin rmargin))

(defun #:llpatch:new-rmargin &nobind
    (let ((val (if (eqn (arg) 0)
		   ()
		   (arg 0))) )
      (if val
	  (if (and #:system:23-compatibility-flag
		   (fixp val)
		   (ge val 256))
	      (#:llpatch:rmargin (add1 (slen (outbuf))))
	    (#:llpatch:rmargin val))
	(#:llpatch:rmargin)) ))

(synonymq rmargin #:llpatch:new-rmargin)
