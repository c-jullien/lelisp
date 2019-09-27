;;;
;;; testdate.ll :  functions on date tests
;;;
;;; $Source: /usr/cvs/lelisp/lltest/testdate.ll,v $
;;; $Date: 2016/05/21 10:36:07 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

(unless (>= (version) 15.2)
        (error 'load 'erricf 'testdate))

(unless (getdef 'eqdate)
        (loadmodule 'libdate ()))

; Appel de la fonction de test

(unless (featurep 'testcomm)
        (libload testcomm t))

(setq #:sys-package:colon 'date)

(testfn ()
	(catenate #:system:lltest-directory
		  "date.lt"))
