;;; .EnTete "Le-Lisp (c) version 15.2" " " "Test des fonctions sur Q"
;;; .EnPied "testratio.ll" "%" " "
;;;
;;; .SuperTitre "Test des fonctions sur Q"
;;;
;;;
;;; .Centre "*****************************************************************"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*****************************************************************"
;;;
;;; .Centre "$Header: /usr/cvs/lelisp/lltest/testratio.ll,v 1.2 2016/05/22 05:38:15 jullien Exp $"

(unless (>= (version) 15.2)
        (error 'load 'erricf 'testratio))

(unless (featurep 'ratio)
        (print "Je charge les rationels ")
        (loadmodule "ratio"))

(unless (featurep 'testcomm)
        (libload testcomm t))

(defvar #:sys-package:colon 'R)

;.Section "Nombres Harmoniques et Fonction Zeta."
; Calcule 1 + 1/2**e + 1/3**e + ... + 1/n**e
; Teste les rationnels.
(de zeta (n e)
    (let ((r 0))
         (for (i 1 1 n)
              (setq r (+ r (1/ (** i e)))))
         r))
;  "Le nombre :e(n) = 1 + 1/2! + ... + 1/n!"
(de serie-e (n)
    (let ((e 1))
         (for (i 1 1 n) (setq e (+ e (1/ (fact i)))))
         e))

; "Teste l'addition sur N"
(de fib+ (n)
    (let ((fn 0) (fn+1 1))
         (repeat n (psetq fn+1 (+ fn fn+1) fn fn+1))
         fn))

(defvar v32 (** 10 9))

; Teste l'arithme'tique entre 16 et 32 bits.
(de fub (n)
    (cond ((= n v32) v32)
          ((= n (+ v32 1)) (+ v32 1))
          (t (+ (fub (1- n)) (fub (- n 2))))))

; Teste les sommes et produits 32 bits.
(de sommes (n)
    (repeat n (+ v32 v32) (* v32 v32)))

; Tente de mesurer le temps de calcul de exp:
(de ebench (exp)
    (let ((tps 0.))
         (repeat 5 (gc) (setq tps (+ tps (time '(eval exp)))))
         (setq tps (/ tps 5))
         (print "Temps de " exp " = " tps)
         tps))

; Tente de mesurer le temps de diverses fonctions arithme'tiques:

(print "; Faire (bench) pour le benchmark nume'rique")(print ";")
;;(print "Essayer (bench) en interpre'te' et en compile', par les 2 compilos")
;;(print "Ne pas oublier (compile-all-in-core) pour compiler le bench lui-mm")

(de bench arg
    (if (null arg) (lebench)
        (let ((tps))
             (let ((#:sys-package:itsoft 'test)) (setq tps (lebench)))
             (print  " Temps total = " tps))))

(de lebench ()
    (let ((tps 0))
         (setq tps (+ tps (ebench '(fib+ 200))))
         (setq tps (+ tps (ebench '(fib 500))))
         (setq tps (+ tps (ebench '(fact 200))))
         (setq fact200 (fact 200) fact150 (fact 150))
         (setq tps (+ tps (ebench '(quotient fact200 fact150))))
         (setq tps (+ tps (ebench '(pgcd (fib 201) (fib 200)))))
         (setq tps (+ tps (ebench '(zeta 10 3))))
         (setq tps (+ tps (ebench '(serie-e 10))))
         (setq tps (+ tps
            (ebench
                   '(let ((#:sys-package:itsoft
                            (cons 'testprint #:sys-package:itsoft)))
                         (print fact200)))))
         (setq tps (+ tps (ebench '(fub (+ v32 12)))))
         (setq tps (+ tps (ebench '(integerp (zeta 12 3)))))
         (setq tps (+ tps (ebench '(sommes 1000))))
         (print "Temps total du bench "
                (if (eq (typefn 'sommes) 'expr)
                    "interprete'"
                  (if (featurep 'complice)
                      "compile' avec complice"
                    "compile'"))
                " = " tps)
    ))

; Pour e'viter d'e'crire dans le test de vitesse du print:
(de #:testprint:eol () (outpos 0))

; Appel de la fonction de test

(testfn () (catenate #:system:lltest-directory
		     "ratio.lt"))
