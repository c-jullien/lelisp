;;; .EnTete "Le-Lisp (c) version 15.2" " " "Test du lecteur Le-Lisp"
;;; .EnPied "testread.ll" "%" " "
;;;
;;; .SuperTitre "Test du lecteur Le-Lisp"
;;;
;;;
;;; .Centre "*****************************************************************"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*****************************************************************"
;;;
;;; .Centre "$Header: /usr/cvs/lelisp/lltest/testread.ll,v 1.2 2016/05/22 05:38:15 jullien Exp $"

(unless (>= (version) 15.2)
        (error 'load 'erricf 'testread))

(unless (featurep 'testcomm)
        (libload testcomm))

(gc)
(testfn ()
	(catenate #:system:lltest-directory
		  "read.lt"))

