;;; .EnTete "Le-Lisp (c) version 15.2" " " "Test des appels externes"
;;; .EnPied "testext-.ll" "%" " "
;;;
;;; .SuperTitre "Test des appels externes"
;;;
;;;
;;; .Centre "*****************************************************************"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*****************************************************************"
;;;
;;; .Centre "$Header: /usr/cvs/lelisp/lltest/testextmin.ll,v 1.2 2016/05/22 05:38:15 jullien Exp $"

(unless (>= (version) 15.2)
        (error 'load 'erricf 'testext-))

(unless (featurep 'testcomm)(libload testcomm))
(unless (featurep 'pathname)(libload path))
(unless (or (featurep '64bitfloats)
	    (eq 0.0 0.0))
	(add-feature '64bitfloats))

(defextern _cmoinsun () fix))
(defextern ctest (string float fix vector) float)

(testfn ()
	(catenate #:system:lltest-directory 
		  "extmin.lt"))
