;;;
;;; testmodule.ll:  tests of Le-Lisp modules
;;;
;;; $Source: /usr/cvs/lelisp/lltest/testmodule.ll,v $
;;; $Date: 2016/05/21 10:36:08 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------



(unless (>= (version) 15.2)
        (error 'load 'erricf 'testmodule))
 
(unless (featurep 'testcomm)
        (libload testcomm))

(setq #:sys-package:colon 'testmodule)

(defvar testmodule1
  '(defmodule
     testmodule1
     files
     (testmodule1.ll)
     export
     (testmodulefn)))

(de :similar-module (mod1 mod2)
    ;; an incomplete test for the similarity of two modules.
    (every #'(lambda (key)
	      (equal (getdefmodule mod1 key)
		     (getdefmodule mod2 key)))
	    '(defmodule files import export)))

(defun :simple-module ()
  ;; return a NEW simple module
  `((defmodule . testmod)
     (files foofile barfile zeefile)
     (import noomodule)
     (export thisfun thatfun theotherfun)))

(testfn ()
	(catenate #:system:lltest-directory
		  "module.lt"))
