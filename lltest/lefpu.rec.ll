;;; .EnTete "Le-Lisp (c) version 15.2" " " "Recette II"
;;; .EnPied "lefpu.rec.ll" "%" " "
;;;
;;; .Titre "Recette II"
;;; .nr % 1
;;;
;;; .Centre "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
;;;
;;; .Centre "$Header: /usr/cvs/lelisp/lltest/lefpu.rec.ll,v 1.2 2016/05/22 05:38:14 jullien Exp $"

; =================================================================
; Ce fichier est l'entre'e standard de la recette technique no II
;                    "Systeme modulaire"
; =================================================================

(unless (>= (version) 15.2)
        (error 'load 'erricf 'lefpu.rec))

; ===============================================================
;         SEULES LES ERREURS D'ARRONDIS DES NOMBRES FLOTTANTS
;             PEUVENT APPARAITRE EN EXECUTANT CES TESTS
; ===============================================================

; Ce fichier suppose charge' le fichier initial "startup.ll"

(setq #:ld68k:mc68881 t)
(load-stm () t t t t t)
(libload "recette")
