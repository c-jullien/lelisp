;;;
;;; teststrgio.ll:  read-from-string and print-to-string tests
;;;
;;; $Source: /usr/cvs/lelisp/lltest/teststrgio.ll,v $
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
        (error 'load 'erricf 'teststrgio))

(unless (featurep 'testcomm)
    (libload testcomm))

(unless (featurep 'stringio)
        (loadmodule "stringio"))

(setq biglist (makelist 150 1))
(setq bigstring (makestring 301 #\sp))
(for (i 1 2 300) (sset bigstring i #/1))
(sset bigstring 0 #/()
(sset bigstring 300 #/))


(de foo (s)
    (read-from-string (print-to-string s)))

(de rfs (s) (read-from-string s))
(de pts (e) (print-to-string e))

(testfn () 
	(catenate #:system:lltest-directory
		  "strgio.lt"))
