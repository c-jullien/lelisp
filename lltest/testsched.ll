;;; .EnTete "Le-Lisp (c) version 15.2" " " "Test du Scheduler"
;;; .EnPied "testsched.ll" "%" " "
;;;
;;; .SuperTitre "Test du Scheduler"
;;;
;;;
;;; .Centre "*****************************************************************"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*****************************************************************"
;;;
;;; .Centre "$Header: /usr/cvs/lelisp/lltest/testsched.ll,v 1.2 2016/05/22 05:38:15 jullien Exp $"

(unless (>= (version) 15.2)
        (error 'load 'erricf 'testread))

(unless (featurep 'testcomm)
        (libload testcomm))
 
(de ppr (l)
    (while (cdr l)
           (repeat 10000 ())
           (prin " " (nextl l)))
    (prin " " (nextl l)))
    
(de ppr-for-test (l)
    (while (cdr l)
           (repeat 10000 ())
           (nextl l))
    (nextl l))

(de tppr ()
    (parallel (ppr '(a b c d e f)) (ppr '(1 2 3 4 5 6 7 8 9))))

;(print "faire (tppr)")

; .Section "Test de 'tryinparallel'"

; .SSection "En dynamique"

(de neg (n)
    (if (= n 0)
        'negatif
        (neg (1+ n))))

(de pos (n)
    (if (= n 0)
        'positif
        (pos (1- n))))

(de sign (n)
    ; A LANCER elle est vraiment belle cette fonction ...
    (if (= n 0)
        'zero
        (tryinparallel (neg n) (pos n))))

;(print "faire (sign 10000)(sign -10000)(sign 10000)(sign -10000)")

; .SSection "en lexical"

(de lneg (n)
    (prog ((i 0))
          re (if (= i n)
                 (return 'negatif)
                 (setq i (- i 1))
                 (go re))))

(de lpos (n)
    (prog ((i 0))
          re (if (= i n)
                 (return 'positif)
                 (setq i (+ i 1))
                 (go re))))

(de lsign (n)
    ; A LANCER elle est vraiment belle cette fonction ...
    (if (= n 0)
        'zero
        (tryinparallel (lneg n) (lpos n))))

;(print "faire (lsign 10000)(lsign -10000)(lsign 10000)(lsign -10000)")

; .Section "test de parallelvalues"

(de 2**N (n)
    (cond ((= n 0) 1)
          ((= n 1) 2)
          ((letparallel ((n1 (2**N (div n 2)))
                         (n2 (2**N (- n (div n 2)))))
                        (* n1 n2)))))

(de fib (n)
    (cond ((= n 1) 1)
          ((= n 2) 1)
          (t (apply '+ (parallelvalues (fib (1- n)) (fib (- n 2))))))))

(de nfib (n)
    (cond ((= n 1) 1)
          ((= n 2) 1)
          (t (apply '+ (list (nfib (1- n)) (nfib (- n 2)))))))

(de tpprv ()
    (parallelvalues (ppr '(a b c d e f))
                    (ppr '(x y z))
                    (ppr '(1 2 3 4 5 6 7 8 9))
                    (ppr '(10))))

(de testpprv ()
    (parallelvalues (ppr-for-test '(a b c d e f))
                    (ppr-for-test '(x y z))
                    (ppr-for-test '(1 2 3 4 5 6 7 8 9))
                    (ppr-for-test '(10))))

(de testb ()
    (let ((l '(10 20)) (v ()))
             (while (and l (nequal l 'wrong))
                    (schedule (lambda (vv) (setq v vv))
                        (if l
                          (progn (eval (nextl l))
                                 (suspend) 
                                 (setq l 'wrong))
                          (resume v ))))
l
))

       
(de tp ()
    ; A LANCER
    (tycls)
    (parallel (voir #/.) (voir #/ ) (voir #/*) (voir #/O)))

(de voir (c)
    (loop  (tycursor (random 0 (tyxmax)) (random 0 (tyymax)))
           (tyo c)
           (tyflush)))

;(print "faire (tp)")

;(print "faire (2**N 10) (fib 14) (tpprv)")
;(print "L'horloge est lancee toutes les " #:system:clock-tick " secondes")

(testfn ()
	(catenate #:system:lltest-directory
		  "sched.lt"))
