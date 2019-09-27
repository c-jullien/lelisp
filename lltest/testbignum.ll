;;;
;;; testbignum:  BigNum package tests
;;;
;;; $Source: /usr/cvs/lelisp/lltest/testbignum.ll,v $
;;; $Date: 2016/05/21 10:36:07 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------



;;;.Section "Declarations"
;;; LOAD test package if needed
(unless (featurep 'testcomm)
        (libload testcomm) )

;;; LOAD BigNum package BigNum if needed
(unless (featurep 'q)
        (loadmodule 'bnq))

;;; tests now
(testfn ()
	(catenate #:system:lltest-directory
		  "bignum.lt"))
