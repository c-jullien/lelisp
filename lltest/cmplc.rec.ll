;;; .EnTete "Le-Lisp (c) version 15.2" " " "Recette III"
;;; .EnPied "complice.rec.ll" "%" " "
;;;
;;; .Titre "Recette III"
;;; .nr % 1
;;;
;;; .Centre "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
;;;
; .Centre "$Header: /usr/cvs/lelisp/lltest/cmplc.rec.ll,v 1.2 2016/05/22 05:38:14 jullien Exp $"

; =================================================================
; Ce fichier est l'entre'e standard de la recette technique no III
;                    "Systeme Complice"
; =================================================================

(unless (>= (version) 15.2)
        (error 'load 'erricf 'cmplc.rec))

; Cette recette technique demande de passer les 3 fichiers 
; de recette suivants :
;         I - lelisps.rec
;         II - lelisp.rec
;         III - cmplc.rec
; C'est ge'ne'ralement fait en lancant les scripts-shell suivants :
;         % lelisps.rec  > lelisps.rec.log
;         % lelisp.rec   > lelisp.rec.log
;         % cmplc.rec > cmplc.rec.log
 
; ===============================================================
;         SEULES LES ERREURS D'ARRONDIS DES NOMBRES FLOTTANTS
;             PEUVENT APPARAITRE EN EXECUTANT CES TESTS
; ===============================================================

; Ce fichier suppose charge' le fichier initial "startup.ll"


(load-cpl () t t t t t)
(setq #:complice:parano-flag t)
(setq #:complice:warning-flag ())
(libload "recette")
