;;; .EnTete "Le-Lisp (c) version 15.2" " " "Test des fonctions ensemblistes"
;;; .EnPied "testsets.ll" "%" " "
;;;
;;; .SuperTitre "Test des fonctions ensemblistes"
;;;
;;;
;;; .Centre "*****************************************************************"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*****************************************************************"
;;;
;;; .Centre "$Header: /usr/cvs/lelisp/lltest/testsets.ll,v 1.2 2016/05/22 05:38:15 jullien Exp $"

(unless (>= (version) 15.2)
        (error 'load 'erricf 'testsets))

(unless (featurep 'testcomm)
        (libload testcomm))

(unless (featurep 'sets)
        (loadmodule 'sets))

(setq #:sys-package:colon 'testsets)

(testfn ()
	(catenate #:system:lltest-directory
		  "sets.lt"))
