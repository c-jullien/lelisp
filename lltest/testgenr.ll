;;;
;;; testgenr.ll:  generic arithmetic tests on R
;;;
;;; $Source: /usr/cvs/lelisp/lltest/testgenr.ll,v $
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
        (error 'load 'erricf 'testfn))

(unless (featurep 'testcomm)
        (libload testcomm t))

(unless (featurep 'genr)
	(print "Loading interpreted generics")
        (libload genr t))

(testfn ()
	(catenate #:system:lltest-directory
		  "genr.lt"))
