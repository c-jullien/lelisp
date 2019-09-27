
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
         tps))

; Tente de mesurer le temps de diverses fonctions arithme'tiques:

(print "Faire (bench) pour le benchmark")
(print "Essayer (bench) en interpre'te' et en compile', par les 2 compilos")
(print "Ne pas oublier (compile-all-in-core) pour compiler le bench lui-mm")

(de bench arg
    (if (null arg) (lebench)
        (let ((tps))
             (let ((#:sys-package:itsoft 'test)) (setq tps (lebench)))
             (print  " Temps total = " tps))))

(de lebench ()
    (let ((tps 0))
         (print "Temps total du bench sur SUN 3/60-3.4, en interpre'te' : " 
                  4.61199)
         (print "                                       avec complice   : " 
                  .6480224)
         (setq tps (+ tps (ebench '(fib+ 200))))
         (setq tps (+ tps (ebench '(fib 500))))
         (setq tps (+ tps (ebench '(fact 200))))
         (setq fib1000 (fib 1000))
         (setq fact200 (fact 200) fact150 (fact 150))
         (setq tps (+ tps (ebench '(pgcd (fib 1001) (fib 1000)))))
         (setq tps (+ tps (ebench '(quotient fact200 fact150))))
         (setq tps (+ tps (ebench '(zeta 10 3))))
         (setq tps (+ tps (ebench '(serie-e 10))))
         (setq tps (+ tps 
            (ebench
                   '(let ((#:sys-package:itsoft
                            (cons 'testprint #:sys-package:itsoft)))
                         (print fib1000)))))
         (setq tps (+ tps (ebench '(integerp (zeta 12 3)))))
         (print "Temps total du bench = " tps)
    ))
 
; Pour e'viter d'e'crire dans le test de vitesse du print:
(de #:testprint:eol () (outpos 0))
