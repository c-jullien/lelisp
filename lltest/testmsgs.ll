;;; .EnTete "Le-Lisp (c) version 15.2" " " "Test des messages Le-Lisp"
;;; .EnPied "testmsgs.ll" "%" " "
;;;
;;; .SuperTitre "Test des messages Le-Lisp"
;;;
;;;
;;; .Centre "*****************************************************************"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*****************************************************************"
;;;
;;; .Centre "$Header: /usr/cvs/lelisp/lltest/testmsgs.ll,v 1.2 2016/05/22 05:38:15 jullien Exp $"

(unless (>= (version) 15.2)
        (error 'load 'erricf 'testmsgs))
 
(unless (featurep 'testcomm)
        (libload testcomm))

(setq #:sys-package:colon 'testmsgs)

(testfn ()
	(catenate #:system:lltest-directory
		  "msgs.lt"))
