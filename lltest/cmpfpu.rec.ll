;;; .EnTete "Le-Lisp (c) version 15.2" " " "Recette III"
;;; .EnPied "cmpfpu.rec.ll" "%" " "
;;;
;;; .Titre "Recette III"
;;; .nr % 1
;;;
;;; .Centre "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
;;;
; .Centre "$Header: /usr/cvs/lelisp/lltest/cmpfpu.rec.ll,v 1.2 2016/05/22 05:38:14 jullien Exp $"

; =================================================================
; Ce fichier est l'entre'e standard de la recette technique no III
;                    "Systeme Complice"
; =================================================================

(unless (>= (version) 15.2)
        (error 'load 'erricf 'cmpfpu.rec))

; ===============================================================
;         SEULES LES ERREURS D'ARRONDIS DES NOMBRES FLOTTANTS
;             PEUVENT APPARAITRE EN EXECUTANT CES TESTS
; ===============================================================

; Ce fichier suppose charge' le fichier initial "startup.ll"

(setq #:ld68k:mc68881 t)
(load-cpl () t t t t t)
(setq #:complice:parano-flag t)
(setq #:complice:warning-flag ())
(libload "recette")
