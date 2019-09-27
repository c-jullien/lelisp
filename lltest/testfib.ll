;;; .EnTete "Le-Lisp (c) version 15.2" " " "Test de la fonction de Fibonacci"
;;; .EnPied "testfib.ll" "%" " "
;;;
;;; .SuperTitre "Test de la fonction de Fibonacci"
;;;
;;;
;;; .Centre "*****************************************************************"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*****************************************************************"
;;;
;;; .Centre "$Header: /usr/cvs/lelisp/lltest/testfib.ll,v 1.2 2016/05/22 05:38:15 jullien Exp $"

(unless (>= (version) 15)
        (error 'load 'erricf 'testfib))
 

; Ce test permet de mesurer le me^me chose sur tous les syste`mes
; Le_Lisp pour faire des comparaisons.

; Il doit e^tre impe'rativement lance' par :
; lelispgo lelispbin ../lltest/testfib.ll
; pour assurer la localite' de la liste libre des CONS!

; Attention : il faut toujours exe'cuter ce test en absence de charge
; sur les syste`mes UN*X a` me'moire virtuelle. Les de'rives
; peuvent e^tre tre`s importantes :

(defvar number-of-tests 10)
(defvar is-compiled ())

(de fib (n) 
    ; avec l'arithme'tique ge'ne'rique.
    (cond ((= n 1) 1)
          ((= n 2) 1)
          (t (+ (fib (1- n)) (fib (- n 2))))))

(de fibf (n) 
    ; itou en flottant
    (cond ((= n 1.) 1.)
          ((= n 2.) 1.)
          (t (+ (fibf (1- n)) (fibf (- n 2.))))))

(de fibm (n) 
    ; avec l'arithme'tique mixte.
    (cond ((equal n 1) 1)
          ((equal n 2) 1)
          (t (plus (fibm (differ n 1)) (fibm (differ n 2))))))

(de fibw (n)
    ; itout en flottant
    (cond ((equal n 1.) 1.)
          ((equal n 2.) 1.)
          (t (plus (fibm (differ n 1.)) (fibm (differ n 2.))))))

(de fibn (n) 
    ; avec l'arithme'tique entie`re.
    (cond ((eqn n 1) 1)
          ((eqn n 2) 1)
          (t (add (fibn (sub1 n)) (fibn (sub n 2))))))

(de fibff (n)
    ; avec l'arithme'tique flottante
    (cond ((feqn n 1.) 1.)
          ((feqn n 2.) 1.)
          (t (fadd (fibff (fsub n 1.)) (fibff (fsub n 2.))))))

(de test-fib-cpl ()
    (compile (fib fibf fibm fibw fibn fibff))
    (setq is-compiled t)
    (loader '((fentry fibfa subr1)
	      (cabne a1 '1 101)
	      (mov '1 a1)
	      (return)
          101 (cabne a1 '2 102)
	      (mov '1 a1)
	      (return)
	  102 (diff '1 a1)
	      (push a1)
	      (jcall fibfa)
	      (mov a1 a2)
	      (pop a1)
	      (push a2)
	      (diff '1 a1)
	      (jcall fibfa)
	      (pop a2)
	      (plus a2 a1)
	      (return)
	      (end)))
    (test-fib))

; La localite des pointeurs est quelque chose de primordiale
; sur le VAX : on passe de 4.25 a 5.75 en compactant les CONS!

(de belle-copie (l)
    ; suppose une liste libre bien chainee!
    ()
    (copy l))

(setfn 'fib 'expr (belle-copie (valfn 'fib)))
(setfn 'fibf 'expr (belle-copie (valfn 'fibf)))
(setfn 'fibm 'expr (belle-copie (valfn 'fibm)))
(setfn 'fibw 'expr (belle-copie (valfn 'fibw)))
(setfn 'fibn 'expr (belle-copie (valfn 'fibn)))
(setfn 'fibff 'expr (belle-copie (valfn 'fibff)))

(de testfib ()
    (let ((n 0) (min 100.0) (max 0.0) (tot 0.0) (cur))
         (repeat number-of-tests
              (incr n)
              (setq cur (time '(fib 20)))
              (setq tot (plus cur tot))
              (when (< cur min) (setq min cur))
              (when (> cur max) (setq max cur))
              (print n " essais de (fib 20)  min = " min 
                       " max = " max
                       " moy = " (/ tot number-of-tests)))))

(de testfibn ()
    (let ((n 0) (min 100.0) (max 0.0) (tot 0.0) (cur))
         (repeat number-of-tests
              (incr n)
              (setq cur (time '(fibn 20)))
              (setq tot (plus cur tot))
              (when (< cur min) (setq min cur))
              (when (> cur max) (setq max cur))
              (print n " essais de (fibn 20)  min = " min 
                       " max = " max
                       " moy = " (/ tot number-of-tests)))))


(de test-fib ()
    (let ((min 100.0) (max 0.0) (tot 0.0)
          (minf 100.0) (maxf 0.0) (totf 0.0)
          (minm 100.0) (maxm 0.0) (totm 0.0)
          (minw 100.0) (maxw 0.0) (totw 0.0)
          (minn 100.0) (maxn 0.0) (totn 0.0)
          (minff 100.0) (maxff 0.0) (totff 0.0)
          (minfa 100.0) (maxfa 0.0) (totfa 0.0))

               (print "Test de Fib : nombre de tests = " number-of-tests)

               (setq tot 0.0)
               (repeat number-of-tests
                    (setq cur (time '(fib 20)))
                    (setq tot (plus cur tot))
                    (when (< cur min) (setq min cur))
                    (when (> cur max) (setq max cur)))
               (print "essais de (fib  20)  min = " min 
                      " max = " max
                      " moy = " (/ tot number-of-tests))

               (setq totf 0.0)
               (repeat number-of-tests
                    (setq cur (if (eq 0.0 0.0) (time '(fibf 20)) 0.))
                    (setq totf (plus cur totf))
                    (when (< cur minf) (setq minf cur))
                    (when (> cur maxf) (setq maxf cur)))
               (print "essais de (fibf 20)  min = " minf
                      " max = " maxf
                      " moy = " (/ totf number-of-tests))

               (setq totm 0.0)
               (repeat number-of-tests
                    (setq cur (time '(fibm 20)))
                    (setq totm (plus cur totm))
                    (when (< cur minm) (setq minm cur))
                    (when (> cur maxm) (setq maxm cur)))
               (print "essais de (fibm 20)  min = " minm
                      " max = " maxm
                      " moy = " (/ totm number-of-tests))

               (setq totw 0.0)
               (repeat number-of-tests
                    (setq cur (if (eq 0.0 0.0) (time '(fibw 20)) 0.))
                    (setq totw (plus cur totw))
                    (when (< cur minw) (setq minw cur))
                    (when (> cur maxw) (setq maxw cur)))
               (print "essais de (fibw 20)  min = " minw
                      " max = " maxw
                      " moy = " (/ totw number-of-tests))

               (setq totn 0.0)
               (repeat number-of-tests
                    (setq cur (time '(fibn 20)))
                    (setq totn (plus cur totn))
                    (when (< cur minn) (setq minn cur))
                    (when (> cur maxn) (setq maxn cur)))
               (print "essais de (fibn 20)  min = " minn
                      " max = " maxn
                      " moy = " (/ totn number-of-tests))

               (setq totff 0.0)
               (repeat number-of-tests
                    (setq cur (time '(fibff 20.)))
                    (setq totff (plus cur totff))
                    (when (< cur minff) (setq minff cur))
                    (when (> cur maxff) (setq maxff cur)))
               (print "essais de (fibff 20.)  min = " minff
                      " max = " maxff
                      " moy = " (/ totff number-of-tests))

               (setq totfa 0.0)
               (if is-compiled
                  (progn
               (repeat number-of-tests
                    (setq cur (time '(fibfa 20)))
                    (setq totfa (plus cur totfa))
                    (when (< cur minfa) (setq minfa cur))
                    (when (> cur maxfa) (setq maxfa cur)))
               (print "essais de (fibfa 20)  min = " minfa
                      " max = " maxfa
                      " moy = " (/ totfa number-of-tests))))

        )))


(print "(test-fib)       pour jouer le test interprete")
(print "(test-fib-cpl)   pour jouer le test compile")
