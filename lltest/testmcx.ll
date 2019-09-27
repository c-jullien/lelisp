;;;
;;; testmcx.ll:  MicroCeyx tests
;;;
;;; $Source: /usr/cvs/lelisp/lltest/testmcx.ll,v $
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
    (error 'load 'erricf 'testmcx))

(unless (featurep 'testcomm)
    (libload testcomm))

(unless (boundp '#:microceyx:ceyxv4-compat)
	(defvar #:microceyx:ceyxv4-compat ()))
(unless (boundp '#:microceyx:test-compat)
	(defvar #:microceyx:test-compat ()))
(unless (featurep 'microceyx)
    (print "Loading interpreted microceyx")
    (libload microceyx))

(testfn ()
	(catenate #:system:lltest-directory
		  "mcx.lt"))
