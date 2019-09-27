;;; .EnTete "Le-Lisp (c) version 15.2" " " "Recette II"
;;; .EnPied "lelisp.rec.ll" "%" " "
;;;
;;; .Titre "Recette II"
;;; .nr % 1
;;;
;;; .Centre "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
;;;
;;; .Centre "$Header: /usr/cvs/lelisp/lltest/lelisp.rec.ll,v 1.2 2016/05/22 05:38:14 jullien Exp $"

; =================================================================
; Ce fichier est l'entre'e standard de la recette technique no II
;                    "Systeme modulaire"
; =================================================================

(unless (>= (version) 15.2)
        (error 'load 'erricf 'lelisp.rec))

; Cette recette technique demande de passer les 3 fichiers 
; de recette suivants :
;         I - lelisps.rec
;         II - lelisp.rec
;         III - complice.rec
; C'est ge'ne'ralement fait en lancant les scripts-shell suivants :
;         % lelisps.rec  > lelisps.rec.log
;         % lelisp.rec   > lelisp.rec.log
;         % complice.rec > complice.rec.log
 
; ===============================================================
;         SEULES LES ERREURS D'ARRONDIS DES NOMBRES FLOTTANTS
;             PEUVENT APPARAITRE EN EXECUTANT CES TESTS
; ===============================================================


; Ce fichier suppose charge' le fichier initial "startup.ll"

(load-stm () t t t t t)
(libload "recette")
