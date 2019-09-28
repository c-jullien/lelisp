;============================================================================
;----------------------------------------------------------------------------
;
; fichier ***test1.ll***
; 19.01.88 Ilog/ing bounthara
; test des primitives graphiques, chapitre 20
;
; fichier issu dufichier: ***testgraph.ll*** ILOG
; Les principales modifications concernent l'utilisation de fenetres et
; sous-fenetres
;============================================================================

#|
Test du bitmap virtuel

Le-Lisp v15.2 du 1er Aout 1987

Test du chapitre 20
|#

; Les primitives graphiques
; fonctions testees
; . current-font 
; . font-max
; . load-font
; . current-line-style
; . line-style-max
; . current-pattern
; . pattern-max
; . current-mode 
; . current-clip 
; . #:clip:x, #:clip:y, #:clip:w, #:clip:h
; 
; . draw-polyline
; . draw-polymarker
; . fill-area
; . draw-substring
; . draw-ellipse
; . clear-graph-env
; 
; . draw-point
; . draw-line
; . draw-rectangle
; . draw-circle
;
; . fill-rectangle
; . fill-circle
;============================================================================
; dernier numero test : #415#
;----------------------------------------------------------------------------
(bitprologue)
;----------------------------------------------------------------------------
; ---- loader les fichiers communs
(unless (featurep 'format)
        (libload format))

 (unless (featurep 'testcomm)
         (libload testcomm))

 (unless (featurep 'testbvcomm)
         (libload testbvcomm))

;============================================================================
;----------------------------------------------------------------------------
; ---- on teste les fonctions decrites dans le chaitre suivant
(tycls)
(tyflush)
(terpri)
(print "                 Test interactif des primitives graphiques")
(terpri)
(terpri)
(print "                 20. Les primitives graphiques")
(print 
"----------------------------------------------------------------------------")
(terpri)

;============================================================================
(sous-titre "#401# Initialisation")
(verif "Fene^tre w1"
       '(setq w1 (create-window 'window 10 (div quarty 2)
				demix demiy "w1" 0 1)))
(current-window w1)
; ----
(affich "(current-pattern) = 0 ?" 
        '(current-pattern))
(affich "(current-line-style) = 0 ?" 
        '(current-line-style))
(affich "(current-font) = 0 ?" 
        '(current-font))
; ----
(current-clip)
(affich "#:clip:x ?" 
        '#:clip:x)
(affich "#:clip:y ?" 
        '#:clip:y)
(affich "#:clip:w ?" 
        '#:clip:w)
(affich "#:clip:h ?" 
        '#:clip:h)

;----------------------------------------------------------------------------
(titre "#402# 20.1.1 Structure des environnements graphiques")
; ----
(affich "Nombre de polices disponibles initialement" 
        '(add1 (font-max)))
(clear-graph-env)
(verif "affichage des differentes polices"
       '(let ((j 0))
          (for (i 0 1 (font-max))
	     (current-font i)
	     (draw-string 0 (add (add j (height-space)) (x-base-space))
			  "ABCDEFabcdef GHIJKLghijkl 0123 !@#()*")
	     (draw-cursor 0 (add (add j (height-space)) (x-base-space)) t)
             (incr j (height-space)))))
; ----
(affich "Nombre de styles de lignes disponibles initialement"
	(add1 (line-style-max)))
(clear-graph-env)
(verif "Affichage des differents styles de ligne"
       '(for (i 0 1 (line-style-max))
	     (current-line-style i)
	     (draw-line 0 0 (add 10 (mul i 10)) 200)))
; ----       
(current-pattern 0)
(current-line-style 0)
(current-font 0)
(current-mode #:mode:set)
(clear-graph-env)
(verif "Les 2 lignes vont delimiter la zone d'ecriture des caracteres"
       '(progn 
          (draw-line 0 9 (#:window:width w1) 9)
          (draw-line 0 (add1 (add 9 (height-space))) 
                     (#:window:width w1) (add1 (add 9 (height-space))))))
(verif "La chaine ""ayt|jlp^*@{],"" en 10,10"
       '(my-draw-string 10 10 "ayt|jlp^*@{],")) 
; ----       
(affich "Nombre motifs de remplissage disponibles initialement"
	(add1 (pattern-max)))
(clear-graph-env)
(verif "Affichage des differents pattern"
       '(for (i 0 1 (pattern-max))
	     (current-pattern i)
	     (fill-rectangle (mul i 10) (mul i 10) 100 100)))
; ----
(current-pattern 0)
(current-line-style 0)
(current-font 0)
(current-mode #:mode:set)
;------------------------
(sous-titre "#403# Test des modes avec fill-rectangle")
(clear-graph-env)
(for (i 0 1 15)
     (verif (catenate " mode avec fill-rectangle = " (format () "~2,4,'0R" i))
	    '(progn (clear-graph-env)
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
		    (current-mode 3))))

;------------------------
(sous-titre "#405# Test des modes avec fill-area")
(current-pattern 0)
(current-line-style 0)
(current-font 0)
(current-mode #:mode:set)
(clear-graph-env)
(print "Le test avec fill-area est effectue' avec 2 trape`zes:")
(print "ces 2 trape`zes (correspondant au pattern 0 et 1) sont dessine's avec")
(print "les 16 modes de combinaison sur les rectangles de pattern 0 et 1.")
(for (i 0 1 15)
     (verif (catenate " mode avec fill-area = " (format () "~2,4,'0R" i))
	    '(progn (clear-graph-env)
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
		    (current-mode 3))))


;------------------------
(sous-titre "#406# Test de la zone de de'coupe")
(current-pattern 0)
(current-line-style 0)
(current-font 0)
(current-mode #:mode:set)
(clear-graph-env)
(verif 
 "Deux diagonales orthogonales dans un cadre (current-clip 100 100 100 100)"
       '(progn (draw-rectangle 100 100 100 100)
	       (current-clip 100 100 100 100)
	       (draw-line 0 0 300 300)
	       (draw-line 0 300 300 0)))

(print "Je teste si les valeurs de #:clip:x,y,w,h sont correctes.")
(testsuite)
(progn (current-clip) t) t
#:clip:x 100
#:clip:y 100
#:clip:w 100
#:clip:h 100
(exit eof) ()

(de centre-char (x y cn)
    (draw-cn (add x (sub (x-base-space) (quo (width-space) 2)))
             (add y (sub (y-base-space) (quo (height-space) 2)))
             cn))

(verif "Deux diagonales orthogonales et 9 caracteres coupes dans le cadre"
       '(progn (centre-char 100 100 #/A)
	       (centre-char 150 100 #/B)
	       (centre-char 200 100 #/C)
	       (centre-char 100 150 #/D)
	       (centre-char 150 150 #/E)
	       (centre-char 200 150 #/F)
	       (centre-char 100 200 #/G)
	       (centre-char 150 200 #/H)
	       (centre-char 200 200 #/K)))
	       
;------------------------
(sous-titre "#407# 20.2 Test des primitives graphiques")

(current-pattern 0)
(current-line-style 0)
(current-font 0)
(current-mode #:mode:set)
(current-clip 0 0 
       (#:window:width (current-window)) 
       (#:window:height (current-window)))
(clear-graph-env)
(verif "Dessin d'un triangle de sommet (10,10) (100,100) (200,10)"
       '(draw-polyline 4 #[10 100 200 10] #[10 100 10 10]))

(clear-graph-env)
(verif "Dessin des sommets du triangle"
       '(draw-polymarker 4 #[10 100 200 10] #[10 100 10 10]))

(clear-graph-env)
(verif "Remplissage du triangle avec le motif courant"
       '(fill-area 3 #[10 100 200] #[10 100 10]))

(clear-graph-env)
(verif "Remplissage du triangle avec le plus grand motif"
       '(with ((current-pattern (pattern-max)))
	      (fill-area 3 #[10 100 200] #[10 100 10])))
		     
(clear-graph-env)
(verif "Dessin d'une ellipse de centre (120,120) et de rayons 50 et 70"
       '(draw-ellipse 120 120 50 70))

;------------------------
(sous-titre "#408# 20.3.1 Test des fonctions etendues: trace de lignes")

(current-pattern 0)
(current-line-style 0)
(current-font 0)
(current-mode #:mode:set)
(clear-graph-env)
(verif "Une ligne de (0,0) a (50,100) en utilisant draw-point"
       '(for (i 0 1 50)
	     (draw-point i (* 2 i))))

(clear-graph-env)
(verif "Une ligne de (0,0) a (50,100) dans style de ligne courant"
       '(draw-line 0 0 50 100))

(clear-graph-env)
(verif "Une ligne de (0,0) a (50,100) dans plus grand style de ligne"
       '(with ((current-line-style (line-style-max)))
	      (draw-line 0 0 50 100)))

(clear-graph-env)
(verif 
 "Un rectangle en (0,0) de width(w1)xheight(w1) (seult 2 cotes visibles)"
       '(draw-rectangle 0 0 (#:window:width w1) (#:window:height w1)))

(clear-graph-env)
(verif 
 "Un rectangle en (0,0) de (w(w1)-1)x(h(w1)-1) (les 4 cotes visibles)"
       '(draw-rectangle 0 0 
                        (sub1 (#:window:width w1)) 
                        (sub1 (#:window:height w1))))

(clear-graph-env)
(verif "Un rectangle en (10,10) de w = 100 et h = 200"
       '(draw-rectangle 10 10 100 200))
(verif "Un rectangle en (20,20) de w = 10 et h = 0 (trait horiz.)"
       '(draw-rectangle 20 20 10 0))
(verif "Un rectangle en (20,30) de w = 0 et h = 10 (trait vert.)"
       '(draw-rectangle 20 30 0 10))
(verif "Un rectangle en (20,50) de w = 0 et h = 0 (point)"
       '(draw-rectangle 20 50 0 0))

(clear-graph-env)
(verif "Un cercle de centre (100,120) de rayon 90"
       '(draw-circle 100 120 90))

(clear-graph-env)
(verif "Dessin d'une ellipse et d'un cercle superposees"
       '(progn (draw-circle 100 100 100)
	       (draw-ellipse 100 100 50 70)))

;------------------------
(sous-titre "#409# 20.3.1 Test des fonctions etendues: remplissage")

(print "current-pattern = " (current-pattern 1))
(current-line-style 0)
(current-font 0)
(print "current-mode = " (current-mode #:mode:xor))
(clear-graph-env)
(verif "Un rectangle en (10,10) de w = 100 et h = 200"
       '(fill-rectangle 10 10 100 200))
(verif "Un rectangle plein en (300,10) de 10x0 (vous ne devez rien voir)"
       '(fill-rectangle 300 10 10 0))
(verif "Un rectangle plein en (300,30) de 0x10 (vous ne devez rien voir)"
       '(fill-rectangle 300 30 0 10))
(verif "Un rectangle plein en (300,50) de 0x0 (vous ne devez rien voir)"
       '(fill-rectangle 300 50 0 0))
(verif "Un super-rectangle en (-500,-500) de w = 10000 et h = 10000"
       '(fill-rectangle -500 -500 10000 10000))

(clear-graph-env)
(verif "Un cercle de centre (100,120) de rayon 90"
       '(fill-circle 100 120 90))

(clear-graph-env)
(verif "Un cercle de centre (0,0) de rayon 90"
       '(fill-circle 0 0 90))
(verif "Un cercle de centre (100,100) de rayon 0"
       '(fill-circle 100 100 0))

(clear-graph-env)
(verif "Remplissage d'une forme convexe avec fill-area (forme de papillon)"
       '(fill-area 6 #[10 60 110 110 60 10] #[10 40 10 100 70 100]))

(clear-graph-env)
(verif "Dessin du rectangle et du cercle superposees"
       '(progn (fill-rectangle 60 10 100 200)
	       (with ((current-pattern (pattern-max)))
		     (fill-circle 110 110 60))))

;------------------------
(sous-titre "#410# 20.3.1 Test des fonctions etendues: affichage de texte")

(current-pattern 0)
(current-line-style 0)
(current-font 0)
(current-mode #:mode:set)
(clear-graph-env)
(verif "Une suite de 20 A espace' de 5 pixels"
       '(for (i 0 5 99)
	     (draw-cn i 50 #/A)))

(verif "Une suite de 20 B"
       '(draw-string 10 80 "BBBBBBBBBBBBBBBBBBBB"))

;----------------------------------------------------------------------------
; ---- une seconde fenetre pour tester le cliping
(titre "#411# Une seconde fenetre pour tester la de'coupe")
(verif "Fenetre-bande w2 est cre'e'e"
       '(setq w2 (create-window 'window 
                                (sub (#:window:left w1) 50)
                                (add (#:window:top w1) 
                                     (div (#:window:height w1) 4))
                                (add (#:window:width w1) 100)
                                (mul (div (#:window:height w1) 5) 3)
                                "w2" 1 1)))

(print "Je teste (current-clip) avec current-window=w2")
(testsuite)
(progn (current-window w2) 
       (current-clip) t) t
#:clip:x 0
#:clip:y 0
#:clip:w #.(#:window:width w2)
#:clip:h #.(#:window:height w2)
(exit eof) ()

(verif "w2 au dessus de w1"
       '(move-behind-window w1 w2))
(current-window w1)
(current-pattern 0)
(current-line-style 0)
(current-font 0)
(current-mode #:mode:set)
(clear-graph-env)

(quad-window1  w2)
(quad-window1  w1)

(setq left-w1 (#:window:left w1)
      top-w1 (#:window:top w1)
      width-w1 (#:window:width w1)
      height-w1 (#:window:height w1)
      bottom-w1 (add top-w1 (#:window:height w1))
      right-w1 (add left-w1 (#:window:width w1)))

;------------------------
(sous-titre "#412# Les operations graphiques dans w1")
(current-pattern 1)
(affich "Nous passons en mode XOR"
        '(current-mode #:mode:xor))
(verif "Les diagonales de w1"
       '(progn (draw-line 0 0 width-w1 height-w1)
               (draw-line 0 height-w1 width-w1 0)))
(verif "Un rectangle dans w1 (20 pixels a l'inte'rieur de w1)"
       '(draw-rectangle 20 20 (sub width-w1 40) (sub height-w1 40)))
(verif "Un rectangle plein  ""vertical"" coupant w1"
       '(fill-rectangle 30 -20 (sub width-w1 60) (add height-w1 40)))
(verif "Un cercle plein en 0,0 de  rayon width(w1)/4"
       '(fill-circle 0 0 (div (#:window:width w1) 4)))
(verif "Une suite de 20 B en 10,10"
       '(draw-string 10 10 "BBBBBBBBBBBBBBBBBBBB"))

;----------------------------------------------------------------------------
; ---- une sous-fenetre pour tester le cliping
(titre "#413# Une sous-fenetre de w2")
(verif "Sous-fenetre sw1 de w2 en 1/4,1/4 de 1/3x1/2"
       '(setq sw1 (create-subwindow 'window
                                    (div (#:window:width w2) 4)
                                    (div (#:window:height w2) 4)
                                    (div (#:window:width w2) 3)
                                    (div (#:window:height w2) 2)
                                    "sw1"
                                    1 1 w2)))

(affich "Mode set"
        '(current-mode #:mode:set))
(current-window sw1)
(clear-graph-env)
(verif "Bordure de sw1 dans sw1"
       '(draw-rectangle 0 0 (sub1 (#:window:width sw1)) 
                        (sub1 (#:window:height sw1))))
(verif "Une ellipse dans sw1 en (0,0) de width(sw1)/3,height(sw1)/2"
       '(fill-ellipse 0 0 (div (#:window:width sw1) 3)
                      (div (#:window:height sw1) 2)))
(verif "Une suite de 20 B en -10,10"
       '(draw-string -10 10 "BBBBBBBBBBBBBBBBBBBB"))

(current-window w2)
(verif "Bordure de sw1 dans w2"
       '(draw-rectangle (sub1 (#:window:left sw1))
                        (sub1 (#:window:top sw1))
                        (add (#:window:width sw1) 1)
                        (add (#:window:height sw1) 1)))
(verif "Les 2 diagonales de w2"
       '(progn (draw-line 0 0 (#:window:width w2)
                          (#:window:height w2))
               (draw-line 0 (#:window:height w2)
                          (#:window:width w2) 0)))
(current-window sw1)
(verif "clear sw1"
        '(clear-graph-env))
(current-window w1)
(verif "clear w1"
        '(clear-graph-env))

;----------------------------------------------------------------------------
(titre "#415# Effacement des fenetres")
(clear-graph-env)
(verif "w1 est tue'e"
       '(kill-window w1))
(verif "w2 est tue'e"
       '(kill-window w2))

;----------------------------------------------------------------------------
(titre "Fin du test des primitives graphiques")
;----------------------------------------------------------------------------
(terpri)
(terpri)
(terpri)
(bitepilogue)
(setq automatic ())
;----------------------------------------------------------------------------
;============================================================================
