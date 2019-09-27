;;; .EnTete "Le-Lisp (c) version 15.2" " " "Tests du terminal virtuel"
;;; .EnPied "Tests du terminal virtuel" "%" " "
;;;
;;; .SuperTitre "Tests du terminal virtuel"
;;;
;;;
;;; .Centre "*****************************************************************"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*****************************************************************"
;;;
;;; .Centre "$Header: /usr/cvs/lelisp/lltest/testtty.ll,v 1.2 2016/05/22 05:38:15 jullien Exp $"

(unless (>= (version) 15.2)
        (error 'load 'erricf 'testfloat))

(setq #:sys-package:colon 'testtty)
(libload testcomm t)

(testfn ())

          (test-serie "Test du terminal virtuel" ())

(de bltdemo ()
    (let ((nscreen (makestring (* 80 24) #\sp))
          (oscreen (makestring (* 80 24) #\sp)))
         (for (i 0 80 240) 
              (bltstring nscreen i        "******")
              (bltstring nscreen (+ i 12)  "------")
              (bltstring nscreen (+ i 24) "......"))
         (typrologue)
         (tycls)
         (catcherror ()
             (repeat 200
                     (redisplayscreen nscreen oscreen 80 24)
                     (for (i 0 6 24)
                          (bltscreen nscreen nscreen 80 24 80 24
                              (random 0 80) (random 4 19) i 0 6 4))))
         (tyflush)
         (tyepilogue)
         ()))

                                        bltdemo

(progn (print "Tapez un caractere quelconque pour faire partir la demo")
       (tyi) ())                        ()

(bltdemo)                               ()
(progn (tycls) ())                      ()


