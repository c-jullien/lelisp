;============================================================================
;----------------------------------------------------------------------------
;
; fichier ***test5.ll***
; 19.01.88 Ilog/ing bounthara
; test du la memoire de point, chapitre 20.4.1
;
;============================================================================
;
; Test de la memoire de points
; Le-Lisp v15.2 du 1er Aout 1987
; Test du chapitre 20.4.1
;
; La me'moire de points
; fonctions testees:
; . create-bitmap
; . #:bitmap:w, #:bitmap:h, #:bitmap:bits
; . #*
; . #:bitvector:prin
; . #B
; . #:bitmap:prin
; . kill-bitmap
; . bmref
; . bmset
; . bitblit
; . window-bitmap
; 
;============================================================================
; dernier numero test : #513#
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
(sous-titre "#501# Creation d'UNE fenetre avec create-window")
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
(sous-titre "#502# Les fonctions de cre'ation de bitmap")
(verif "Je cre'e une ico^ne moto de 100x70  (avec #B)"
       '(defvar moto
          #B(100 70 #[
                 #*0000000000000000000000000000
                 #*0000000000000000000000000000
                 #*000000000005C000000000000000
                 #*0000000000380000000000000000
                 #*0000000000C00000000000000000
                 #*0000000003000000000000000000
                 #*000000000203FC00000000000000
                 #*00000000080C0000000000000000
                 #*0000000000100000000000000000
                 #*000000000020FE00000000000000
                 #*0000000000438000000000000000
                 #*0000000000800200000000000000
                 #*0000000000000700000000000000
                 #*000000000000F480000000000000
                 #*0000000000006C40000000000000
                 #*0000000000006C20000000000000
                 #*000000000000DFE0000000000000
                 #*000000000001BB80000000000000
                 #*0000000000012C07F00000000000
                 #*00000000000E661BEC0000000000
                 #*00000000001FC72C1A0000000000
                 #*00000000003DFCF0070000000000
                 #*00000000003B70E0028000000000
                 #*00000000007670D0018000000000
                 #*0000000000C2F14C01C000000000
                 #*0000000001D5D18200C000000000
                 #*000000000347898180C000000000
                 #*0000000003BF098080C000000000
                 #*000000001BDE898000C000000000
                 #*00000000FBF1498000C000000000
                 #*00000003FFE2A94001C000030000
                 #*0000000FF80548C00180000F0000
                 #*0000003FF00AB4A00280000F0000
                 #*0000007FCC25FC70070000380000
                 #*000003FFBFF2FC2C1A0000F00000
                 #*000003FF7FFBF41BEC0001800000
                 #*000003FBFFC7F807F00003000000
                 #*000001E3FF8FF000000002000000
                 #*3FFF83877F0FC000000006000000
                 #*00000E061F078000000006000000
                 #*0000187E0F020000000006000000
                 #*000031FF060C000000000E000000
                 #*000027FFC7F0000000000E000000
                 #*000007FFCFE000000007FC000000
                 #*7FF80E8EF0000000001C00000000
                 #*00000F0CE0000000003800000000
                 #*00001E0FF0000000003800000000
                 #*00001E0CF000000000344CC80000
                 #*00001E10F0000000006051200000
                 #*3FFE1E00F00000000FE451280000
                 #*00001E00F00000001F0451280000
                 #*00000F01E0000000380451E80000
                 #*00000E82E0000000300451280000
                 #*000007FFC0000000600551280000
                 #*000007FFC0000001C0048D280000
                 #*000001FF00000003C00000000000
                 #*0000007C00000007800000000000
                 #*FFFFFFFFFFFFFFFFFFFFFFFF0000
                 #*0000000000000000000000000000
                 #*0000000000000000000000000000
                 #*0000000000000000000000000000
                 #*0000000000000000000000000000
                 #*0000000000000000000000000000
                 #*0000000000000000000000000000
                 #*0000000000000000000000000000
                 #*0000000000000000000000000000
                 #*0000000000000000000000000000
                 #*0000000000000000000000000000
                 #*0000000000000000000000000000
                 #*0000000000000000000000000000
                 ])
          ))

(verif "Je cre'e une ico^ne cigare de 100x40 (avec create-bitmap)"
       '(defvar cigare
          (create-bitmap 100 40 #[
                 #*FFFFFFFFFFFFFFFFFFFF8100FFFF
                 #*FFFFFFFFFFFFFFFFFFFF8100FFFF
                 #*FFFFFFFFFFFFFFFFFFFF0100FFFF
                 #*FFFFFFFFFFFFFFFFFFFF01017FFF
                 #*FFFFFFFFFFFFFFFFFFFE03017FFF
                 #*FFFFFFFFFFFFFFFFFFFE02017FFF
                 #*FFFFFFFFFFFFFFFFFFFF02017FFF
                 #*FFFFFFFFFFFFFFFFFFFF00037FFF
                 #*FFFFFFFFFFFFFFFFFFFF0002FFFF
                 #*FFFFFFFFFFFFFFFFFFFEC002FFFF
                 #*FFFFFFFFFFFFFFFFFFFF20C2FFFF
                 #*FFFFFFFFFFFFFFFFFFFF0302FFFF
                 #*FFFFFFFFFFFFFFFFFFFE0C06FFFF
                 #*FFFFFFFFFFFFFFFFFFFC1801FFFF
                 #*FFFFFFFFFFFFFFFFFFFC2023FFFF
                 #*FC1FFFFFFFFFFFFFFFFC2023FFFF
                 #*F8001FFFFFFFFFFFFFFC00C7FFFF
                 #*F000001FFFFFFFFFFFFC4187FFFF
                 #*F00000001FFFFFFFFFFC430FFFFF
                 #*F0000000001FFFFFFFFC401FFFFF
                 #*F0000000001FFFFFFFFE403FFFFF
                 #*F00000000000001FFFFE007FFFFF
                 #*F0000000000000001FFE01FFFFFF
                 #*FC00000000000000000F07FFFFFF
                 #*FC000000000000000023F7FFFFFF
                 #*FFC0000000000000000801FFFFFF
                 #*FFFF800000000000005BD0FFFFFF
                 #*FFFFFF00000000000067267FFFFF
                 #*FFFFFFFE00000000007A517FFFFF
                 #*FFFFFFFFFC0000000056247FFFFF
                 #*FFFFFFFFFFF800000015917FFFFF
                 #*FFFFFFFFFFFFF800007540FFFFFF
                 #*FFFFFFFFFFFFFFF00019DAFFFFFF
                 #*FFFFFFFFFFFFFFFFE02049FFFFFF
                 #*FFFFFFFFFFFFFFFFFFFF83FFFFFF
                 #*FFFFFFFFFFFFFFFFFFFFFFFFFFFF
                 #*FFFFFFFFFFFFFFFFFFFFFFFFFFFF
                 #*FFFFFFFFFFFFFFFFFFFFFFFFFFFF
                 #*FFFFFFFFFFFFFFFFFFFFFFFFFFFF
                 #*FFFFFFFFFFFFFFFFFFFFFFFFFFFF
                 ])
          ))

(verif "Je cre'e une ico^ne banana de 60x60 (avec #B)"
       '(setq banana #B(60 60 #[
                           #*00003ffffe000000
                           #*00003c0007000000
                           #*0000760003800000
                           #*0000630001c00000
                           #*0000e18000e00000
                           #*0000c0c000700000
                           #*0001cc6000380000
                           #*00018e30001c0000
                           #*00039b18000e0000
                           #*0003118c00070000
                           #*000730c600038000
                           #*000620630001c000
                           #*000e60318000e000
                           #*000c4018c0007000
                           #*001cc00c60003000
                           #*001880063ffff000
                           #*0039800220007000
                           #*0031000620006000
                           #*007180046000e000
                           #*0060c00c4000c000
                           #*00e06008c001c000
                           #*00c0301880018000
                           #*01c0181180038000
                           #*03800c3100030000
                           #*0380062300070000
                           #*0380036200060000
                           #*01c041c6000e0000
                           #*00e060c4000c0000
                           #*0070300c001c0000
                           #*0038180800180000
                           #*003c0c1800380000
                           #*606e061000300000
                           #*fbe7023000700000
                           #*7f93802000600000
                           #*3f4fc06000e00000
                           #*1face04000c00000
                           #*0fd870c001c00000
                           #*07f8388001800000
                           #*03f81d8003800000
                           #*01f00f0003000000
                           #*00f007ffff000000
                           #*006003fffe000000
                           #*00000030c0000000
                           #*0000003fc0000000
                           #*00000030c0000000
                           #*0000007fe0000000
                           #*0000006060000000
                           #*00000ffff0000000
                           #*00000ffff0000000
                           #*00000ffff0000000
                           #*0000000000000000
                           #*0000000000000000
                           #*000003fff8000000
                           #*000009fffc000000
                           #*00001cfffe000000
                           #*00001e7fff000000
                           #*00003f3fff800000
                           #*0000339fffc00000
                           #*000071cfffe00000
                           #*000060e7fff00000
                           ])))
;----------------------------------------------------------------------------
; ---- des icones vers la window       
(sous-titre "#503# Les fonctions d'affichage")
(verif "Je retourne w1 en me'moire de points avec window-bitmap (dans bm-w1)"
       '(setq bm-w1 (window-bitmap w1)))
(testsuite)
(#:bitmap:w bm-w1) #.(#:window:width w1)
(#:bitmap:h bm-w1) #.(#:window:height w1)
(setq #:system:print-for-read ()) ()
(progn (prin "(#:bitmap:prin bm-w1) = ") (#:bitmap:prin bm-w1) (terpri) t) t 
(exit eof) ()
(print "Je ne teste pas #:bitmap:prin avec #:system:print-for-read = t")
;(affich "#:system:print-for-read"
;        '(setq #:system:print-for-read t ))
;(verif "(#:bitmap:prin bm-w1)"
;        '(progn (catcherror t (#:bitmap:prin bm-w1))
;                (terpri)
;                (setq #:system:print-for-read ())))

; ---- affichage de la moto et de du cigare
(sous-titre "#504# Bitblit, mode set")
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


; ---- bitblit sur une me^me horizontale avec les 4 principaux modes 
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
(sous-titre "#505# Bitblit des icones vers la fenetre")
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

(sous-titre "#506# Bitblit fenetre-fenetre")
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
(sous-titre "#507# Test de la sous-fenetre et du bitblit fenetre->fenetre")
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
(sous-titre "#508# bitblit fenetre -> icone")
(verif "clear w1"
       '(and (current-window w1) (clear-graph-env)))
(current-mode #:mode:set)
(verif "La moto et le cigare en haut a gauche (la moto au dessus du cigare)"
       '(progn 
          (bitblit bm-w1 moto 0 0 0 0 100 70)
          (bitblit bm-w1 cigare 0 70 0 0 100 40)))
(verif "Je creee une icone icon1 de 100x110"
       (setq icon1 #B(100 110)))
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
#|
(verif "bitblit de la zone interieure du rectangle 200x200 dans icon1"
       '(progn 
          (bitblit icon1 bm-w1 0 0 50 50 200 200)))
(draw-rectangle 259 9 101 111)
(bitmap-flush)
|#
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
(sous-titre "#509# bitblit icone -> icone")
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
(titre "#510# Test du clipping")
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
(titre "#512# Destruction des bitmap") 
(verif "Les bitmap cigare, banana, icon1  sont tue's"
       '(progn
          (kill-bitmap cigare)
          (kill-bitmap banana)
          (kill-bitmap icon1)))


;----------------------------------------------------------------------------
; ---- Acces au champ bits des bitmaps
(titre "#514# Acces au champ bits des bitmaps")
(verif "impression du bitmap moto avec #:system:print-for-read t"
       '(let ((#:system:print-for-read t))
          (print moto)))
(verif "impression du bitmap moto en format compresse"
       '(let ((#:system:print-for-read t)
              (#:system:compressed-icon t))
          (print moto)))
(verif "creation d'un bitmap a rayures"
       '(setq ray (create-bitmap 100 100 #[ #13*Sl  99])))
(verif "impression du bitmap a rayures"
       '(let ((#:system:print-for-read t))
          (print ray)))
(verif "impression du bitmap a rayures, au format compresse"
       '(let ((#:system:print-for-read t)
              (#:system:compressed-icon t))
          (print ray)))
(verif "affichage du bitmap a rayures"
       '(bitblit bm-w1 ray 0 0 0 0 100 100))
(verif "On tue les bitmaps a rayures et moto"
       '(progn
          (kill-bitmap ray)
          (kill-bitmap moto)))
;----------------------------------------------------------------------------
; ---- destruction des fenetres
(titre "#513# Destruction des fenetres") 
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
;============================================================================



