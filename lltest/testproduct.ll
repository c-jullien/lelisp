;;;
;;; The tests for the product module
;;; 
;;; $Header: /usr/cvs/lelisp/lltest/testproduct.ll,v 1.1 2006/12/09 11:22:18 jullien Exp $

(unless (featurep 'testcomm)
        (libload testcomm t))

(testfn () (catenate #:system:lltest-directory
		     "product.lt"))
