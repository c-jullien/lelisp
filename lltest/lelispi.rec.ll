;;; .EnTete "Le-Lisp (c) version 15.2" " " "Recette 0 interpre'te'e"
;;; .EnPied "lelisp1.rec.ll" "%" " "
;;;
;;; .Titre "Recette 0"
;;; .nr % 1
;;;
;;; .Centre "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
;;;
;;; .Centre "$Header: /usr/cvs/lelisp/lltest/lelispi.rec.ll,v 1.2 2016/05/22 05:38:15 jullien Exp $"

; ===============================================================
; Ce fichier est l'entre'e standard de la recette technique no 0
;                    "Du Systeme Interpre'te'"
; ===============================================================

(unless (>= (version) 15.2)
        (error 'load 'erricf 'lelispi.rec))

; ===============================================================
;         SEULES LES ERREURS D'ARRONDIS DES NOMBRES FLOTTANTS
;             PEUVENT APPARAITRE EN EXECUTANT CES TESTS
; ===============================================================

; Ce fichier suppose charge' le fichier initial "startup.ll"

(load-std  () t t t () ())

; pour ne pas avoir de probleme avec les exercices compile's
(df compile l)
(defun compiler l)
(defun compile-all-in-core ())
(defun loader l)

(debug ())
(libload "recette")
