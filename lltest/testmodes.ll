#|
Test du bitmap virtuel

Le-Lisp v15.2 du 1er Aout 1987

Test du chapitre 20
|#

(unless (featurep 'testcomm)
        (libload testcomm))

(unless (featurep 'testbvcomm)
        (libload testbvcomm))

(setq w1 (create-window 'window 0 0 500 500 "" 0 1))
(current-window w1)

(current-pattern 0)
(current-line-style 0)
(current-font 0)

(de test-mode ()
    (for (i 0 1 15)
         (show-mode i)
         (attendre)))

(unless (featurep 'format)
	(print "Chargement de format")
	(libload format)
	(print "done"))

(de show-mode (i)
    (clear-graph-env)
    (current-mode 3)
    (draw-rectangle -1 39 161 41)
    (current-pattern 1)
    (fill-rectangle 40 40 40 40)
    (fill-rectangle 120 40 40 40)
    (current-mode i)
    (current-pattern 0)
    (fill-rectangle 0 40 80 40)
    (current-pattern 1)
    (fill-rectangle 80 40 80 40)
    (current-mode 3)
    (print i))

(print "Test des modes avec fill-rectangle")
(test-mode)

(de show-mode (i)
    (clear-graph-env)
    (current-mode 3)
    (draw-rectangle -1 39 161 41)
    (current-pattern 1)
    (fill-rectangle 40 40 40 40)
    (fill-rectangle 120 40 40 40)
    (current-mode i)
    (current-pattern 0)
    (fill-area 4 #[0 80 80 0] #[40 40 80 60])
    (current-pattern 1)
    (fill-area 4 #[80 160 160 80] #[40 40 80 60])
    (current-mode 3)
    (draw-string (x-base-space) (y-base-space) (format () "~2,4,'0R" i)))

(print "Test des modes avec fill-area")
(test-mode)

(print "Test de la zone de de'coupe")

(draw-rectangle 100 100 100 100)

(current-clip 100 100 100 100)

(draw-line 0 0 300 300)
(draw-line 0 300 300 0)

(de centre-char (x y cn)
    (draw-cn (add x (sub (x-base-space) (quo (width-space) 2)))
             (add y (sub (y-base-space) (quo (height-space) 2)))
             cn))

(centre-char 100 100 #/A)
(centre-char 150 100 #/B)
(centre-char 200 100 #/C)
(centre-char 100 150 #/D)
(centre-char 150 150 #/E)
(centre-char 200 150 #/F)
(centre-char 100 200 #/G)
(centre-char 150 200 #/H)
(centre-char 200 200 #/K)

(print "Deux diagonales orthogonales et 9 caracteres coupes dans le cadre")
(attendre)
(current-clip 0 0 
       (#:window:width (current-window)) 
       (#:window:height (current-window)))

(print "Cercles et Ellipses")

(draw-circle 100 100 100)
(draw-ellipse 120 120 50 70)
(print "Un cerle et une ellipse superpose's")
(attendre)

(print "Fin du test des primitives graphiques")
