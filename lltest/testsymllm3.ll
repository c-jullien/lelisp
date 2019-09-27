;;; .EnTete "Le-Lisp (c) version 15.2" " " "Test des variables globales llm3"
;;; .EnPied "testmsgs.ll" "%" " "
;;;
;;; .SuperTitre "Test des variables globales llm3"
;;;
;;;
;;; .Centre "*****************************************************************"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*****************************************************************"
;;;
;;; .Centre "$Header: /usr/cvs/lelisp/lltest/testsymllm3.ll,v 1.2 2016/05/22 05:38:15 jullien Exp $"

(unless (>= (version) 15.2)
        (error 'load 'erricf 'testsymllm3))

(unless (featurep 'testcomm)
        (libload testcomm))

(setq #:sys-package:colon 'testsymllm3)

(testfn ()
	(catenate #:system:lltest-directory
		  "symllm3.lt"))
