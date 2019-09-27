;============================================================================
;----------------------------------------------------------------------------
;
; fichier testbytemap.ll
; 26.09.89 Ilog/samarcq
; test des memoires de points couleur
;
;============================================================================
;
;
; La me'moire de points
; fonctions testees:
; . create-bytemap
; . #:bitmap:w, #:bitmap:h, #:bitmap:bytes
; . #*
; . #:bitvector:prin
; . #BC
; . #:bitmap:bytemap:prin
; . kill-bitmap
; . byteref
; . byteset
; . bitblit
; . window-bitmap
; 
;============================================================================
; dernier numero test : #613#
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
; ---- on teste les fonctions decrites dans le chapitre suivant
(tycls)
(tyflush)
(titre "Les me'moires de points")
(print "Tests des fontions du chapitre 20.4.1")
(print "Les tests utilisent les 3/4 haut-gauche de l'ecran.")
(print 
"----------------------------------------------------------------------------")
(terpri)
;============================================================================
(sous-titre "#601# Creation d'UNE fenetre avec create-window")
(verif "Fene^tre w1 en 1/8,1/8 de 1/2x1/2, hilited, visible"
        '(setq w1 (create-window 'window (div quartx 2)
                                 (div quarty 2)
                                 demix
                                 demiy "w1" 1 1)))
(current-window w1)

(verif "Quadrillage de w1"
       '(quad-window1 w1))

;------------------------
; ---- a partir de certaines icones 
(sous-titre "#602# Les fonctions de cre'ation de bytemap")
(verif "Je cre'e une ico^ne moto de 100x70  (avec #BC)"
       '(defvar moto
	  #BC(100 70 #[
		  #100*+
		  1
		  #100*GqlIGIb+
		  #100*GqiIb+
		  #100*GqgIa+
		  #100*GqeIa+
		  #100*GqeIGfIg+
		  #100*GqcIGfIa+
		  #100*GqjI+
		  #100*GqiIGdIf+
		  #100*GqhIGcIb+
		  #100*GqgIGlI+
		  #100*GqtIb+
		  #100*GqoIcGIGaI+
		  #100*GqpIaGIaGbI+
		  #100*GqpIaGIaGcI+
		  #100*GqoIaGIg+
		  #100*GqnIaGIbGIb+
		  #100*GqnIGaIGIaGfIf+
		  #100*GqkIbGaIaGaIaGcIaGIdGIa+
		  #100*GqjIfGbIbGaIGIaGdIaGI+
		  #100*GqiIbJGJIeGaIcGhIb+
		  #100*GqiIaJGJaGIbGcIbGjIGI+
		  #100*GqhIaJGJaGaIbGcIaGIGjIa+
		  #100*GqgIaGcJGIcGbIGIGaIaGhIb+
		  #100*GqfIaJGJGJGIbGIGbIaGdIGhIa+
		  #100*GqeIaGJGbJIbGbIGaIaGeIaGfIa+
		  #100*GqeIbGJbIbGcIGaIaGfIGfIa+
		  #100*GqbIaGIcGIcGIGbIGaIaGnIa+
		  #100*GqUIdGIeGbIGIGaIGaIaGnIa+
		  #100*GqSIlGbIGIGIGIGaIGIGlIbGqIKa+
		  #100*GqQIhGgIGIGIGaIGbIaGlIaGqHKc+
		  #100*GqOIiGgIGIGIGIaGIGaIGIGjIGIGqHKc+
		  #100*GqNIhGaIaGcIGaIGIfGbIbGhIbGqGKb+
		  #100*GqKJaIhGIiGaIGIeGcIGIaGdIaGIGpKc+
		  #100*GqKJaIgGIkGIeGIGdIaGIdGIaGpKa+
		  #100*GqKJaIdGIkGbIgGgIfGqGKa+
		  #100*GqLIcGbIjGbIgGqaK+
		  #100*GaInGdIbGcIbGIfGcIeGqbKa+
		  #100*GqIIbGeIaGcIdGdIcGqcKa+
		  #100*GqHIaGcIeGdIcGeIGqeKa+
		  #100*GqGIaGbIhGdIaGdIaGqeKb+
		  #100*GqGIGaIlGbIfGqgKb+
		  #100*GqJIlGaIfGqaKh+
		  #100*GIkGfIbGIGbIbGIcGqfKb+
		  #100*GqIIcGcIaGaIbGqfKb+
		  #100*GqHIcGdIgGqeKb+
		  #100*GqHIcGdIaGaIcGqeKaGVGbVGaVaGaVaGaV+
		  #100*GqHIcGcIGcIcGqdKaGeVGVGbVGaV+
		  #100*GaIlGcIcGhIcGqUKfGaVGbVGVGbVGaVGV+
		  #100*GqHIcGhIcGqTKdGdVGbVGVGbVGaVGV+
		  #100*GqIIcGfIcGqTKbGgVGbVGVGbVcGV+
		  #100*GqIIbGIGdIGIbGqTKaGhVGbVGVGbVGaVGV+
		  #100*GqJIlGqTKaGiVGVGVGVGbVGaVGV+
		  #100*GqJIlGqRKbGjVGaVGbVaGVGaVGV+
		  #100*GqLIhGqSKc+
		  #100*GqNIdGqTKc+
		  #100*IrU+
		  #100*+
		  11
		  ](#[1 0 0 0 ()]
			#[0 32640 32640 32640 ()]
			#[2 32640 0 0 ()]
			#[3 0 0 32640 ()]
			#[4 0 32640 0 ()]
			#[5 32640 32640 0 ()]
			#[6 32640 0 32640 ()]
			#[7 0 32640 32640 ()]
			#[8 24576 24576 24576 ()]
			#[9 21504 21504 21504 ()]
			))
	  
	  ))

(verif "Je cre'e une ico^ne cigare de 100x40 (avec create-bytemap)"
       '(defvar cigare
	  #BC(100 40 #[
		  #100*IrF05GdI05GfIc
		  1
		  #100*IrE05aGdI05GfIc
		  #100*IrE05GeI05GeI05Ib
		  #100*IrD05aGdIa05GeI05Ib
		  #100*IrD05aGdI05aGeI05Ib
		  #100*IrE05GdI05GfI05Ib
		  #100*IrE05GlIa05Ib
		  #100*IrE05GlI05Ic
		  #100*IrD05IaGkI05Ic
		  #100*IrE05aIGdIaGcI05Ic
		  #100*IrE05bGbIa05aGcI05Ic
		  #100*IrD05aGbIa05bGcIa05Ic
		  #100*IrC05GcIa05aGe05aId
		  #100*IrC05GbI05bGcI05GaIe
		  #100*IeGdIr105GbI05GeI05GaIe
		  #100*IdGmIqz05GhIa05aGIf
		  #100*IcGqLIqr05GaI05GcIa05GbIf
		  #100*IcGqTIqj05GaI05GbIa05GbIg
		  #100*IcGqfIqb05GaI05Gb05aGbIh
		  #100*IcGqfIqc05GI05GfIi
		  #100*IcGqvIqI05GhIj
		  #100*IcGqZIk05GfIl
		  #100*IeGr4Ic05bGaIn
		  #100*IeGr2IGbIeGIn
		  #100*IiGr0IJGhIl
		  #100*IpGqwIGIaJIcGIGcIk
		  #100*IqMGqpIaJaIbJaIJGIaGaIj
		  #100*IqTGqiIcJIJaIJIGbIGIj
		  #100*IqeGqbIJIJIaJbIGJIGbIj
		  #100*IqlGqRJIJIJIaJaIGaJIGIj
		  #100*IqtGqIIbJIJIJIJGaJGaIk
		  #100*IqWGnIaJaIbJIaGIGIk
		  #100*Ir1GfIGeIJaIGaIl
		  #100*IrFGdIm
		  #100*Irc
		  4
		  ](#[1 0 0 0 ()]
			#[0 32640 32640 32640 ()]
			#[2 32640 0 0 ()]
			#[3 0 0 32640 ()]
			#[4 0 32640 0 ()]
			#[5 32640 32640 0 ()]
			#[6 32640 0 32640 ()]
			#[7 0 32640 32640 ()]
			#[8 24576 24576 24576 ()]
			#[9 21504 21504 21504 ()]
			))
	  
          ))

(verif "Je cre'e une ico^ne banana de 60x60 (avec #BC)"
       '(setq banana 
	      #BC(60 60 #[
		     #60*+
		     4
		     #60*GqaI+
		     1
		     #60*GqVIaGcI+
		     #60*GqVIGbIb+
		     #60*GqIIgGcIaGaIa+
		     #60*GpIlGaIaGIaGbIe+
		     #60*GqGIqR+
		     #60*GqJIqP+
		     #60*GqKIqP+
		     #60*GqGIqT+
		     #60*GnIqb+
		     #60*GlIqd+
		     #60*GkIqf+
		     #60*GjIqh+
		     1
		     #60*GkIkGeIqL+
		     #60*GoIGIbGcIcGdIqH+
		     #60*GoIGjIaGcIqI+
		     #60*GoIcGdIbGfIqH+
		     #60*GoIaGIbGaIaGIaGeIqI+
		     #60*GoIaGbIGaIGbIaGdIpGIa+
		     #60*GoIcGIGaIGcIGdIlGIa+
		     #60*GoIcGIGaIbGaIGeIeGIdGIa+
		     #60*GlInGIGeIeGaId+
		     #60*GkIaGiIbGaIGfIcGfI+
		     #60*GjIaGjIbGIaGgIbGcIaGI+
		     #60*GjIGmIbGiIGeIb+
		     #60*GjIGqcIb+
		     #60*GjIGmIGqLI+
		     #60*GjIGmIGqLIa+
		     #60*GjIGlIfGqGIa+
		     #60*GjIaGjIa05I05I05IbGlIc+
		     #60*GjIbGiI05I05I05I05IbGjIc+
		     #60*GiIeGfIb05I05I05I05I05IGhIbGI+
		     #60*GgIb05I05Ij05I05I05I05I05IaGgIaGbI+
		     #60*GeIc05I05I05I05I05Ib05I05I05I05I05I05I05IaGkI+
		     #60*GeIb05I05I05I05I05I05I05I05I05I05I05I05I05I05IGkI+
		     #60*GeIa05I05I05Id05I05I05I05I05I05I05Ib05IbGjI+
		     #60*GeIb05I05I05IaGIg05I05Id05I05IaGjI+
		     #60*GeIc05I05I05IbGIGaIGIg05I05I05IGjI+
		     #60*GfIa05I05I05I05IbGIaGIg05I05I05IaGjIc+
		     #60*GfIb05I05I05I05IbGcIe05I05I05I05IaGfIg+
		     #60*GeIJbI05I05I05IbGIGId05I05I05I05I05I05IGcIbJbIVaIa+
		     #60*GdIJdI05I05Ih05I05I05I05I05I05I05IaGaIaJdIVaIa+
		     #60*GdIJeI05I05I05I05I05I05I05I05I05I05I05I05IdJeIVaGVIa+
		     #60*GdIaJeI05I05I05I05I05I05I05I05I05I05IbJiIVaGVaGIa+
		     #60*GcIaGIJeI05I05I05I05I05I05I05IdJhIcVaGVaGVaIa+
		     #60*GbIaGVIJfI05I05I05I05I05IbJlIVaGVaGVaGVaGVIa+
		     #60*GaIaGVaIJgIiJmIVaGVaGVaGVaGVaGI+
		     #60*GIaGVaGIJgImJeIcVaGVaGVaGVaGVaGVI+
		     #60*IaGVaGVaIJfIGVaGVaGVaGVaIJdIVaIVaGVaGVaGVaGVaGVaIa+
		     #60*IGVaGVaGVIJdIGVaGVaGVaGVaIJdIVaGVaGVaGVaGVaGVaGVaGVI+
		     #60*IVaGVaGVaGIJcIVaGVaGVaGVaGIJcIVaGVaGVaGVaGVaGVaGVaGVaGIG
		     #60*IVGVaGVaGVaIJaIVaGVaGVaGVaGIJbIaVaGVaGVaGVaGVaGVaGVaGVaGVIa
		     #60*IGVaGVaGVaGIbVaGVaGVaGVaGIdGVaGVaGVaGVaGVaGVaGVaGVaGVaGI
		     ](#[1 0 0 0 ()]
			   #[0 32640 32640 32640 ()]
			   #[2 32640 0 0 ()]
			   #[3 0 0 32640 ()]
			   #[4 0 32640 0 ()]
			   #[5 32640 32640 0 ()]
			   #[6 32640 0 32640 ()]
			   #[7 0 32640 32640 ()]
			   #[8 24576 24576 24576 ()]
			   #[9 21504 21504 21504 ()]
			   ))
	      ))

;----------------------------------------------------------------------------
; ---- des icones vers la window       
(sous-titre "#603# Les fonctions d'affichage")
(verif "Je retourne w1 en me'moire de points avec window-bitmap (dans bm-w1)"
       '(setq bm-w1 (window-bitmap w1)))
(testsuite)
(#:bitmap:w bm-w1) #.(#:window:width w1)
(#:bitmap:h bm-w1) #.(#:window:height w1)
(setq #:system:print-for-read ()) ()
(progn (prin "(#:bitmap:bytemap:prin bm-w1) = ") 
       (#:bitmap:bytemap:prin bm-w1) (terpri) t) t 
(exit eof) ()
(print "Je ne teste pas #:bitmap:bytemap:prin avec #:system:print-for-read = t")
;(affich "#:system:print-for-read"
;        '(setq #:system:print-for-read  
;(verif "(#:bitmap:prin bm-w1)"
;        '(progn (catcherror t (#:bitmap:prin bm-w1))
;                ( 
; (setq #:system:print-for-read ())))

; ---- affichage de la moto et de du cigare
(sous-titre "#604# Bitblit, mode set")
(affich "(current-mode #:mode:set)"
        '(current-mode #:mode:set))
(verif "J'affiche la moto, le cigare et banana en bas a gauche"
       '(progn 
          (current-mode #:mode:set)
          (bitblit bm-w1 moto 
                   0 (sub (#:bitmap:h bm-w1) (#:bitmap:h moto))
                   0 0 (#:bitmap:w moto) (#:bitmap:h moto))
          (bitblit bm-w1 cigare
                   100 (sub (#:bitmap:h bm-w1) (#:bitmap:h cigare))
                   0 0 (#:bitmap:w cigare) (#:bitmap:h cigare))
          (bitblit bm-w1 banana
                   200 (sub (#:bitmap:h bm-w1) (#:bitmap:h banana))
                   0 0 (#:bitmap:w banana) (#:bitmap:h banana))))


; ---- bitblit sur une me^me horizontale avec les 4 principaux
; ---- (set, or, xor, not)
(dmd bitblit-modes (bmd bms xd yd xs ys w h)
     `(let ((cur-mode (current-mode)))
        (current-mode #:mode:set)
        (bitblit ,bmd ,bms ,xd ,yd ,xs ,ys ,w ,h)
        (current-mode #:mode:or)
        (bitblit ,bmd ,bms (add1 (add (mul (add 10 ,w) 1) ,xd)) 
                 ,yd ,xs ,ys ,w ,h)
        (current-mode #:mode:xor)
        (bitblit ,bmd ,bms (add1 (add (mul (add 10 ,w) 2) ,xd)) 
                 ,yd ,xs ,ys ,w ,h)
        (current-mode #:mode:not)
        (bitblit ,bmd ,bms (add1 (add (mul (add 10 ,w) 3) ,xd)) 
                 ,yd ,xs ,ys ,w ,h)
        (current-mode cur-mode)))

;------------------------
(sous-titre "#605# Bitblit des icones vers la fenetre")
(print "Les 4 principaux modes sont utilise's (set,or,xor,not)")
(verif "bitblit moto entier -> w1 en 0,100"
       '(bitblit-modes bm-w1 moto 0 100 0 0 100 70))
(verif "bitblit moto 0,0 de 50x70 (moitie sup) -> w1 en 10,30"
       '(bitblit-modes bm-w1 moto 10 30 0 0 50 70))
(verif "bitblit cigare entier -> w1 en 0,130 (sur les motos entie`res)"
       '(bitblit-modes bm-w1 cigare 0 130 0 0 100 40))
;------------------------
(verif "Quadrillage de w1"
       '(progn (current-window w1)
               (clear-graph-env)
               (quad-window1 w1)))
(verif "bitblit moto entier -> w1 en 0,100"
       '(bitblit-modes bm-w1 moto 0 100 0 0 100 70))

(sous-titre "#606# Bitblit fenetre-fenetre")
(verif "bitblit moitie sup de w1 sur moitie inf en mode inverse"
       '(progn 
          (current-mode #:mode:not)
          (bitblit bm-w1 bm-w1 0 (div (#:bitmap:h bm-w1) 2)
                   0 0 (#:bitmap:w bm-w1) (div (#:bitmap:h bm-w1) 2))
          (current-mode #:mode:set)))
(verif "bitblit quart sup gauche -> quart sup droite en mode or"
       '(progn 
          (current-mode #:mode:or)
          (bitblit bm-w1 bm-w1 
                   (div (#:bitmap:w bm-w1) 2) 0
                   0 0 
                   (div (#:bitmap:w bm-w1) 2) (div (#:bitmap:h bm-w1) 2))
          (current-mode #:mode:set)))
(verif "bitblit quart inf gauche -> quart inf droite en mode xor"
       '(progn 
          (current-mode #:mode:set)
          (bitblit bm-w1 bm-w1 
                   (div (#:bitmap:w bm-w1) 2) (div (#:bitmap:h bm-w1) 2)
                   0 (div (#:bitmap:h bm-w1) 2)
                   (div (#:bitmap:w bm-w1) 2) (div (#:bitmap:h bm-w1) 2))
          (current-mode #:mode:set)))

(sous-titre "#607# Test de la sous-fenetre et du bitblit fenetre->fenetre")
(verif "scrolling de la moitie de w1 vers le haut de 10 en 10 pixels"
       '(let* ((haut (#:window:height w1))
               (larg (#:window:width w1))
               (n (add1 (div (div haut 5) 2))))
          (for (i 1 1 n)
               (bitblit bm-w1 bm-w1 
                        0 0 0 5 larg haut)
               (bitmap-flush))))
(verif "Je cree une sous-fenetre sw1 de 1/2x1/2 en 1/4,1/4 de w1"
       '(setq sw1 (create-subwindow 'window 
				    (div (#:window:width w1) 4) 
				    (div (#:window:height w1) 4)
				    (div (#:window:width w1) 2)
				    (div (#:window:height w1) 2)
				    "sw1" 1 1 w1)))
(verif "La sous-fenetre est tuee"
       '(kill-window sw1))

;------------------------
(sous-titre "#608# bitblit fenetre -> icone")
(verif "clear w1"
       '(and (current-window w1) (clear-graph-env)))
(current-mode #:mode:set)
(verif "La moto et le cigare en haut a gauche (la moto au dessus du cigare)"
       '(progn 
          (bitblit bm-w1 moto 0 0 0 0 100 70)
          (bitblit bm-w1 cigare 0 70 0 0 100 40)))
(verif "Je creee une icone icon1 de 100x110"
       (setq icon1 #BC(100 110)))
(draw-rectangle 9 199 101 111)
(bitmap-flush)
(verif "bitblit icon1 -> fenetre en 10 200 dans le cadre"
       '(progn 
          (bitblit bm-w1 icon1 10 200 0 0 100 110)))
(verif "bitblit fenetre 0,0 100x110 -> icone icon1"
       '(bitblit icon1 bm-w1 0 0 0 0 100 110))
(draw-rectangle 149 9 101 111)
(bitmap-flush)
(verif "restitution: bitblit icon1 -> fenetre en 150 10 en mode set"
       '(bitblit bm-w1 icon1 150 10 0 0 100 110))
(draw-rectangle 49 49 201 201)
(bitmap-flush)

(verif "bitblit de la zone interieure du rectangle 200x200 dans icon1"
       '(progn 
          (bitblit icon1 bm-w1 0 0 50 50 200 200)))
(draw-rectangle 259 9 101 111)
(bitmap-flush)

(verif "restitution: bitblit icon1 100x110  -> fenetre en 260 10 en mode xor"
       '(progn 
          (current-mode #:mode:xor)
          (bitblit bm-w1 icon1 260 10 0 0 100 110)))
(draw-rectangle 359 9 201 201)
(bitmap-flush)
(verif "restitution: bitblit icon1 200x200 -> fenetre en 360 10 en mode xor"
       '(progn 
          (current-mode #:mode:xor)
          (bitblit bm-w1 icon1 360 10 0 0 200 200)))

;------------------------
(sous-titre "#609# bitblit icone -> icone")
(draw-rectangle -1 14 101 41)
#|
(bitmap-flush)
(verif "bitblit de cigare dans moto en 0,15 (mode set)"
       '(progn 
          (current-mode #:mode:set)
          (bitblit moto cigare 0 15 0 0 100 40)))
|#
(draw-rectangle 199 199 101 71)
(bitmap-flush)
(verif "le bitmap moto en 200 200, mode set"
       '(progn 
          (current-mode #:mode:set)
          (bitblit bm-w1 moto 200 200  0 0 100 70)))
;----------------------------------------------------------------------------
; ---- destruction des fenetres
(titre "#610# Test du clipping")
(verif "Je clear w1 et cree une fenetre en 100,100/w1 de 200x200"
       '(progn
          (current-window w1)
          (clear-graph-env)
          (quad-window1 w1)
          (setq w2 (create-window 'window 
                                  (add (#:window:left w1) 100)
                                  (add (#:window:top w1) 100)
                                  200 200 "w2" 1 1))
          (pop-window w2)))

(verif "Je dessine l'icone moto en 50,50 dans w1"
       '(bitblit-modes bm-w1 moto 50 50 0 0 100 70))
(verif "Je bitblit la zone 45,45 de 100x110 de w1 dans icon1"
       '(progn
          (current-mode #:mode:set)
          (draw-rectangle 45 45 99 109)
          (bitblit icon1 bm-w1 0 0 45 45 100 110)))
(verif "bitblit icon1 dans w2 (bm-w2) en 0,0"
       '(progn 
          (setq bm-w2 (window-bitmap w2))
          (bitblit bm-w2 icon1 0 0 0 0 100 110)))

;----------------------------------------------------------------------------
; ---- destruction des fenetres
(titre "#612# Destruction des bitmap") 
(verif "Les bitmap cigare, banana, icon1  sont tue's"
       '(progn
          (kill-bitmap cigare)
          (kill-bitmap banana)
          (kill-bitmap icon1)))


;----------------------------------------------------------------------------
; ---- Acces au champ bits des bitmaps
(titre "#614# Acces au champ bytes des bitmaps")
(verif "impression du bitmap moto avec #:system:print-for-read t"
       '(let ((#:system:print-for-read t))
          (print moto)))
(verif "impression du bitmap moto en format compresse"
       '(let ((#:system:print-for-read t)
              (#:system:compressed-icon t))
          (print moto)))
(verif "creation d'un bytemap a rayures"
       '(setq ray 
	      #BC(100 100 
		      #[
		      #100*JVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJVJV
		      99
		      ](#[1 0 0 0 ()]
			    #[0 32640 32640 32640 ()]
			    #[2 32640 0 0 ()]
			    #[3 0 0 32640 ()]
			    #[4 0 32640 0 ()]
			    #[5 32640 32640 0 ()]
			    #[6 32640 0 32640 ()]
			    #[7 0 32640 32640 ()]
			    #[8 24576 24576 24576 ()]
			    #[9 21504 21504 21504 ()])
		      )))
(verif "impression du bitmap a rayures"
       '(let ((#:system:print-for-read t))
          (print ray)))
(verif "impression du bitmap a rayures, au format compresse"
       '(let ((#:system:print-for-read t)
              (#:system:compressed-icon t))
          (print ray)))
(verif "affichage du bitmap a rayures"
       '(bitblit bm-w1 ray 0 0 0 0 100 100))

(verif "on dessine un trait sur bm-w1 avec byteset"
       '(for (i 0 1 99)
	     (byteset bm-w1 i i 4)))

(verif "impression des bytes de la fenetre de 0,0 a 10,10 avec byteref"
       '(for (i 0 1 9)
	     (for (j 0 1 9)
		  (prin (byteref bm-w1 j i)))
	     (print)))

(verif "echange de couleurs avec substitute-color"
       '(substitute-color bm-w1 4 3))

(verif "echange de couleurs avec substitute-color"
       '(substitute-color bm-w1 3 2))

(verif "On tue les bitmaps a rayures et moto"
       '(progn
          (kill-bitmap ray)
          (kill-bitmap moto)))
;----------------------------------------------------------------------------
; ---- destruction des fenetres
(titre "#613# Destruction des fenetres") 
(verif "La fenetre w1 est tuee"
       '(kill-window w1))
(verif "La fenetre w2 est tuee"
       '(kill-window w2))
;----------------------------------------------------------------------------
; ---- fin du test(ouffff...)
(titre "Fin du test du chapitre 20.4.1") 

;----------------------------------------------------------------------------
(terpri)
(terpri)
(terpri)
(bitepilogue)
(setq automatic ())
;----------------------------------------------------------------------------
;=====================================================================
