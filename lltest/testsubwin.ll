;============================================================================
;----------------------------------------------------------------------------
;
; fichier ***test2.ll***
; 13.01.88 Ilog/ing bounthara
; test du fenetrage virtuel, chapitre 18
;
;============================================================================
;
; Test du bitmap virtuel
; Le-Lisp v15.2 du 1er Aout 1987
; Test du chapitre 18
;
; les sous-fenetres et l'environnement graphique minimum
; fonctions testees:
; . create-window 
; . create-subwindow
; . make-window
; . #:window:left, #:window:top,....
; . current-window
; . modify-window
; . kill-window 
; . windowp
; . pop-window
; . move-window-behind
; . find-window
; . map-window
; 
; . clear-graph-env
; . draw-cursor
; . draw-cn
; . draw-string
; . draw-substring 
; . width-substring 
; . height-substring
; . x-base-space
; . y-base-space
;============================================================================
; dernier numero test : #225#
;----------------------------------------------------------------------------
(bitprologue)
;----------------------------------------------------------------------------
; ---- loader les fichiers communs
 (unless (featurep 'testcomm)
         (libload testcomm))

 (unless (featurep 'testbvcomm)
         (libload testbvcomm))

;============================================================================
;----------------------------------------------------------------------------
; ---- on teste les fonctions decrites dans le chapitre suivant
(tycls)
(tyflush)
(titre "Creation des fenetres")
(print "Tests des fontions du chapitre 18:")
(print """Le Fenetrage Virtuel""")
(print "Les tests portent sur l'utilisation de ces fonctions dans un")
(print "contexte de ""sous-fenetrage"".")
(print "Les tests utilisent les 3/4 haut-gauche de l'ecran.")
(print 
"----------------------------------------------------------------------------")
(terpri)
;============================================================================
(sous-titre "#201# Creation d'UNE fenetre avec create-window")
(verif "Fene^tre w1 en 1/4,1/4 de 1/3x1/3, hilited, visible"
        '(setq w1 (create-window 'window quartx quarty tierx tiery "w1" 1 1)))

(print "Je teste les fonctions d'acces aux champs des fenetres")
(print "#:window:left, #:window:top,...")
(testsuite)
(#:window:left w1) #.quartx
(#:window:top w1) #.quarty
(#:window:title w1) "w1"
(#:window:width w1) #.tierx
(#:window:height w1) #.tiery
(#:window:hilited w1) 1
(#:window:visible w1) 1
(exit eof) ()

; ATTENTION: nous faisons appel souvent a ces fonctions d'acces aux champs

;------------------------
; ---- Test avec SEULEMENT UNE fenetre
(titre "#202# Une sous-fenetre")
; d'abord:
; . inlusion totale
; . inclusion partielle
; . fenetre est "inclus" dans la sou-fenetre
(sous-titre "#203# Creation d'une sous-fenetre")
(verif "Sous-fenetre sw1 avec un cadre de 3/4x2/3 en 1/6,1/4 visible"
       '(setq sw1 (create-subwindow 'window    
                          (div (#:window:width w1) 6)
                          (div (#:window:height w1) 4)
                          (mul (div (#:window:width w1) 4) 3)
                          (mul (div (#:window:height w1) 3) 2)
                          "sw1" 0 1 w1)))
(print "Je memorise les coordonnees de sw1")
(let ()
  (disp-props sw1)
  (setq sw1-top (#:window:top sw1)
        sw1-left (#:window:left sw1)
        sw1-width (#:window:width sw1)
        sw1-height (#:window:height sw1)
        sw1-title (#:window:title sw1)
        sw1-visible (#:window:visible sw1)))

; ---- pour tester si les props de sw1 ont subit des modifs par rapport
; ---- aux valeurs initiales
(print "Je teste les eventuelles modifications de proprietes pour sw1")
(testsuite)
(#:window:top sw1) #.sw1-top
(#:window:left sw1) #.sw1-left
(#:window:width sw1) #.sw1-width 
(#:window:height sw1) #.sw1-height 
(#:window:title sw1) #.sw1-title 
(#:window:visible sw1) #.sw1-visible 
(exit eof) ()

;------------------------
(sous-titre "#204# Test des fonctions sur la fenetre w1")
(verif "la hauteur est reduite de moitie"
       '(modify-window w1 () () () (div (#:window:height w1) 2) () () ()))
; ---- pour tester si les props de sw1 ont subit des modifs par rapport
; ---- aux valeurs initiales
(print "Je teste les eventuelles modifications de proprietes pour sw1")
(testsuite)
(#:window:top sw1) #.sw1-top
(#:window:left sw1) #.sw1-left
(#:window:width sw1) #.sw1-width 
(#:window:height sw1) #.sw1-height 
(#:window:title sw1) #.sw1-title 
(#:window:visible sw1) #.sw1-visible 
(exit eof) ()

(verif "la largeur est reduite de moitie"
       '(modify-window w1 () () (div (#:window:width w1) 2) () () () ()))
; ---- pour tester si les props de sw1 ont subit des modifs par rapport
; ---- aux valeurs initiales
(print "Je teste les eventuelles modifications de proprietes pour sw1")
(testsuite)
(#:window:top sw1) #.sw1-top
(#:window:left sw1) #.sw1-left
(#:window:width sw1) #.sw1-width 
(#:window:height sw1) #.sw1-height 
(#:window:title sw1) #.sw1-title 
(#:window:visible sw1) #.sw1-visible 
(exit eof) ()

(verif "w1 reprend ses dimensions initiales (haut x 2 et larg x 2)"
       '(modify-window w1 () () 
                       (mul (#:window:width w1) 2) 
                       (mul (#:window:height w1) 2) () () ()))
; ---- pour tester si les props de sw1 ont subit des modifs par rapport
; ---- aux valeurs initiales
(print "Je teste les eventuelles modifications de proprietes pour sw1")
(testsuite)
(#:window:top sw1) #.sw1-top
(#:window:left sw1) #.sw1-left
(#:window:width sw1) #.sw1-width 
(#:window:height sw1) #.sw1-height 
(#:window:title sw1) #.sw1-title 
(#:window:visible sw1) #.sw1-visible 
(exit eof) ()

; ---- les deplacements de la fenetre principale 
(verif "w1 se deplace vers la droite de 1/3"
       '(modify-window w1 (add (#:window:left w1) tierx) ()
                       () () () () ()))
; ---- pour tester si les props de sw1 ont subit des modifs par rapport
; ---- aux valeurs initiales
(print "Je teste les eventuelles modifications de proprietes pour sw1")
(testsuite)
(#:window:top sw1) #.sw1-top
(#:window:left sw1) #.sw1-left
(#:window:width sw1) #.sw1-width 
(#:window:height sw1) #.sw1-height 
(#:window:title sw1) #.sw1-title 
(#:window:visible sw1) #.sw1-visible 
(exit eof) ()

(verif "w1 revient a sa position initiale"
       '(modify-window w1 quartx quarty
                       () () () () ()))
; ---- pour tester si les props de sw1 ont subit des modifs par rapport
; ---- aux valeurs initiales
(print "Je teste les eventuelles modifications de proprietes pour sw1")
(testsuite)
(#:window:top sw1) #.sw1-top
(#:window:left sw1) #.sw1-left
(#:window:width sw1) #.sw1-width 
(#:window:height sw1) #.sw1-height 
(#:window:title sw1) #.sw1-title 
(#:window:visible sw1) #.sw1-visible 
(exit eof) ()

;------------------------
(sous-titre "#205# L'environnement graphique minimum dans la sous-fenetre")
;  ---- les dimensions d'un caractere
(test-env-graph-min sw1)

(verif "Je remplis w1 de 0 et sw1 avec 1"
       '(progn 
          (fill-window-with-char w1 #/0)
          (fill-window-with-char sw1 #/1)))
(verif "clear sw1"
       '(progn (current-window sw1)
               (clear-graph-env)))


;------------------------
(sous-titre "#206# Fonctions sur la sous-fenetre sw1")
; ---- memoriser les proprietes de w1 pour tester les eventuelles 
; ---- modifications
(print "Je memorise les coordonnees de w1")
(let ()
  (disp-props w1)
  (setq w1-top (#:window:top w1)
        w1-left (#:window:left w1)
        w1-width (#:window:width w1)
        w1-height (#:window:height w1)
        w1-title (#:window:title w1)
        w1-visible (#:window:visible w1)))

; --- deplacement de la sous-fenetre
(verif "Le coin sup gauche de sw1 en 1/3,1/2 de w1"
       '(progn 
          (modify-window sw1 
                       (div (#:window:width w1) 3)
                       (div (#:window:height w1) 2)
                       () () () () ())
          (fill-window-with-char w1 #/0)
          (fill-window-with-char sw1 #/1)))
; ----
(verif "Le coin sup gauche de sw1 en -10 -10"
       '(progn 
          (modify-window sw1 
                       -10 -10
                       () () () () ())
          (fill-window-with-char w1 #/0)
          (fill-window-with-char sw1 #/1)))
; ----
(verif "sw1 double de hauteur"
       '(progn
          (modify-window sw1 
                       () () () (mul (#:window:height sw1) 2) () () ())
          (fill-window-with-char w1 #/0)
          (fill-window-with-char sw1 #/1)))
; ----
(verif "sw1 double de largeur"
       '(progn
          (modify-window sw1 
                       () () (mul (#:window:width sw1) 2) () () () ())
          (fill-window-with-char w1 #/0)
          (fill-window-with-char sw1 #/1)))
; ----
(verif "sw1 devient invisible"
       '(progn
          (modify-window sw1 
                       () () () () () () 0)
          (fill-window-with-char w1 #/0)
          (fill-window-with-char sw1 #/1)))
; ----
(verif "sw1 redevient visible; reprend la position initiale (a sa creation)"
       '(progn
          (modify-window sw1 
                       sw1-left sw1-top sw1-width sw1-height () () 1)
          (fill-window-with-char w1 #/0)
          (fill-window-with-char sw1 #/1)))
; ----
(verif "sw1 est tuee"
       '(kill-window sw1))
(testsuite)
(windowp sw1) ()
(exit eof) ()

; ----
(verif "sw1 reapparait; coin sup gauche est en 1/3,1/2 dans w1 (make-window)"
       '(let ()
          (#:window:left sw1 (div (#:window:width w1) 3))
          (#:window:top sw1 (div (#:window:height w1) 2))
          (make-window sw1)))
          (fill-window-with-char w1 #/0)
          (fill-window-with-char sw1 #/1)))

; ---- pour tester si les props de w1 ont subit des modifs par rapport
; ---- aux valeurs initiales
(print "Je teste les eventuelles modifications de proprietes pour w1")
(testsuite)
(#:window:top w1) #.w1-top
(#:window:left w1) #.w1-left
(#:window:width w1) #.w1-width 
(#:window:height w1) #.w1-height 
(#:window:title w1) #.w1-title 
(#:window:visible w1) #.w1-visible 
(exit eof) ()

;------------------------
(sous-titre "#207# Test sur le clip")
(test-clip-subwindow sw1)


;------------------------
(sous-titre "#208# Les fonctions find-window et map-window")
; ---- find-window
(print "Coin sup gauche de sw1 (absolu sur l'ecran) (sw1-gx sw1-gy) = "
       (list (setq sw1-gx (add (#:window:left w1) (#:window:left sw1)))
               (setq sw1-gy (add (#:window:top w1) (#:window:top sw1)))))
; ---- dans la fenetre principale
(affich "Je teste l'appartenance du point sw1+(-10,-10) (devrait etre w1)"
        '(and (setq w (find-window (sub sw1-gx 10) (sub sw1-gy 10)))
              (win-title w)))
(print "Je teste map-window pour le point precedent")
(testsuite)
(progn (map-window w (sub sw1-gx 10) (sub sw1-gy 10) 'lx 'ly)
       (list lx ly)) #.(list (sub (#:window:left sw1)  10)
                             (sub (#:window:top sw1) 10))
(exit eof) ()

; ---- dans la sous-fenetre
(affich "Je teste l'appartenance du point sw1+(10,10) (devrait etre sw1)"
        '(and (setq w (find-window (add sw1-gx 10) (add sw1-gy 10)))
              (win-title w)))
(print "Je teste map-window pour le point precedent")
(testsuite)
(progn (map-window w (add sw1-gx 10) (add sw1-gy 10) 'lx 'ly)
       (list lx ly)) (10 10)
(exit eof) ()

; ---- dans la sous-fenetre
(verif "sw1 devient invisible"
       '(modify-window sw1 () () () () () () 0))
(affich "Je teste l'appartenance du point sw1+(10,10) (devrait etre w1)"
        '(and (setq w (find-window (add sw1-gx 10) (add sw1-gy 10)))
              (win-title w)))
(print "Je teste map-window pour le point precedent")
(testsuite)
(progn (map-window w (add sw1-gx 10) (add sw1-gy 10) 'lx 'ly)
       (list lx ly)) #.(list (add (#:window:left sw1)  10)
                             (add (#:window:top sw1) 10))
(exit eof) ()

;----------------------------------------------------------------------------
; --- maintenant, DEUX sous-fenetres de meme parent
(titre "#209# Maintenant, avec DEUX sous-fenetres SOEURS")
(sous-titre "#210# Creation d'une seconde sous-fenetre sw2 avec make-window")
(verif "sw2 en 0,0 de 1/2x1/2, visible "
       '(let ()
          (setq sw2 (#:window:make))
          (#:window:left sw2 0)
          (#:window:top sw2 0)
          (#:window:width sw2 (div (#:window:width w1) 2))
          (#:window:height sw2 (div (#:window:height w1) 2))
          (#:window:hilited sw2 0)
          (#:window:visible sw2 1)
          (#:window:father sw2 w1)
          (#:window:title sw2 "sw2")
          (make-window sw2)))

;------------------------
(sous-titre "#211# Les fonctions d'ecriture dans la sous-fenetre sw2")
(small-test-env-graph-min sw2)

(verif "Je remplis w1 de 1, sw1 de @ et sw2 de % (sw1 est invisible)"
       '(progn (fill-window-with-char w1 #/0)
               (fill-window-with-char sw1 #/1)
               (fill-window-with-char sw2 #/2)))

;------------------------
; ---- les sous-fenetres sw1 et sw2 sont disjointes
(sous-titre "#212# Les 2 sous-fenetres sont disjointes")
(verif "sw1 redevient visible; coin sup gauche au milieu de w1"
       '(modify-window sw1 
                       (div (#:window:width w1) 2) 
                       (div (#:window:height w1) 2) () () () () 1))
(verif "Je remplis w1 de 0, sw1 de 1 et sw2 de 2"
       '(progn (fill-window-with-char w1 #/0)
               (fill-window-with-char sw1 #/1)
               (fill-window-with-char sw2 #/2)))
(verif "clear sw1"
       '(and (current-window sw1)
            (clear-graph-env)))
(verif "clear sw2"
       '(and (current-window sw2)
            (clear-graph-env)))
(verif "clear w1"
       '(and (current-window w1)
            (clear-graph-env)))

;------------------------
; ---- intersection
(sous-titre "#213# Les 2 sous-fenetres se chevauchent partiellement")
(verif "sw2 en 1/4,1/4"
       '(modify-window sw2 (div (#:window:width w1) 4)
                       (div (#:window:height w1) 4)
                       () () () () ()))
(verif "sw1 en 1/3,1/3"
       '(modify-window sw1 (div (#:window:width w1) 3)
                       (div (#:window:height w1) 3)
                       () () () () ()))
(verif "Je remplis w1 de 0, sw1 de 1 et sw2 de 2"
       '(progn (fill-window-with-char w1 #/0)
               (fill-window-with-char sw1 #/1)
               (fill-window-with-char sw2 #/2)))
(verif "clear sw2"
       '(and (current-window sw2)
            (clear-graph-env)))
(verif "clear sw1"
       '(and (current-window sw1)
            (clear-graph-env)))
(verif "clear w1"
       '(and (current-window w1)
            (clear-graph-env)))

;------------------------
; ---- superposition
(sous-titre "#214# Les 2 sous-fenetres sont superposees")
(verif "sw2 en 1/3,1/3"
       '(modify-window sw2 (div (#:window:width w1) 3)
                       (div (#:window:height w1) 3)
                       () () () () ()))
(verif "sw1 en 1/4,1/4"
       '(modify-window sw1 (div (#:window:width w1) 4)
                       (div (#:window:height w1) 4)
                       () () () () ()))
(verif "Je remplis w1 de 0, sw1 de 1 et sw2 de 2"
       '(progn (fill-window-with-char w1 #/0)
               (fill-window-with-char sw1 #/1)
               (fill-window-with-char sw2 #/2)))
(verif "clear sw2"
       '(and (current-window sw2)
            (clear-graph-env)))
(verif "clear sw1"
       '(and (current-window sw1)
            (clear-graph-env)))
(verif "clear w1"
       '(and (current-window w1)
            (clear-graph-env)))
(verif "Je remplis w1 de 0,  sw1 de 1 et sw2 de 2"
       '(progn (fill-window-with-char w1 #/0)
               (fill-window-with-char sw1 #/1)
               (fill-window-with-char sw2 #/2)))
(verif "clear sw1"
       '(and (current-window sw1)
            (clear-graph-env)))
(verif "clear sw2"
       '(and (current-window sw2)
            (clear-graph-env)))
(verif "clear w1"
       '(and (current-window w1)
            (clear-graph-env)))

;------------------------
(sous-titre "#215# Les fonctions pop-window et move-behind-window")
(verif "Je remplis w1 de 0,  sw1 de 1 et sw2 de 2"
       '(progn (fill-window-with-char w1 #/0)
               (fill-window-with-char sw1 #/1)
               (fill-window-with-char sw2 #/2)))
(print "Les coordonnees globales du centre de w1 = "
        (list (setq w1-midx 
                     (add (div (#:window:width w1) 2) (#:window:left w1)))
               (setq w1-midy
                     (add (div (#:window:height w1) 2) (#:window:top w1)))))
(affich "centre(w1) appartient a la fenetre "
        '(win-title (find-window w1-midx w1-midy)))
(verif "Je pop sw1"
       '(pop-window sw1))
(affich "centre(w1) doit appartenir a sw1"
        '(win-title (find-window w1-midx w1-midy)))
(verif "Je move sw1 derriere sw2"
       '(move-behind-window sw1 sw2))
(affich "centre(w1) doit appartenir a sw2"
        '(win-title (find-window w1-midx w1-midy)))
(verif "sw2 devient invisible"
       '(modify-window sw2 () () () () () () 0))
(affich "centre(w1) doit appartenir a sw1"
        '(win-title (find-window w1-midx w1-midy)))
(verif "Je pop la fenetre w1"
       '(pop-window w1))
(affich "centre(w1) doit toujours appartenir a sw1"
        '(win-title (find-window w1-midx w1-midy)))
(verif "sw2 redevient visible"
       '(modify-window sw2 () () () () () () 1))

;----------------------------------------------------------------------------
; --- maintenant, UNE sous-fenetre de sous-fenetre
(titre "#216# Maintenant, une SOUS-SOUS-fenetre")
(sous-titre "#217# Creation d'une sous-fenetre de sw1")
(verif "Sous-fenetre sw3 de sw1 de 3/4x2/3 (de sw1)  en 1/8,1/8 visible"
       '(setq sw3 (create-subwindow 'window    
                          (div (#:window:width sw1) 8)
                          (div (#:window:height sw1) 8)
                          (mul (div (#:window:width sw1) 4) 3)
                          (mul (div (#:window:height sw1) 3) 2)
                          "sw3" 0 1 sw1)))

(verif "Je remplis w1 de 0, sw1 de 1, sw2 de 2 et sw3 de 3"
       '(progn (fill-window-with-char w1 #/0)
               (fill-window-with-char sw1 #/1)
               (fill-window-with-char sw3 #/3)
               (fill-window-with-char sw2 #/2)))

;------------------------
(sous-titre "#218# Les fonctions appliquees a sw3")
(verif "clear sw1"
       '(progn (current-window sw1)
               (clear-graph-env)))
(test-subwindow sw3)

(test-move-subwindow sw3)

;------------------------
(sous-titre "#219# Les fonctions de l'env.graphique minimal dans sw3")
(small-test-env-graph-min sw3)

;------------------------
(sous-titre "#220# Test du clip sur sw3")
(test-clip-subwindow sw3)

;------------------------
(sous-titre "#221# Les fonctions pop-window et move-behind-window")
(verif "Je remplis w1 de 0, sw1 de 1, sw2 de 2 et sw3 de 3"
       '(progn (fill-window-with-char w1 #/0)
               (fill-window-with-char sw1 #/1)
               (fill-window-with-char sw3 #/3)
               (fill-window-with-char sw2 #/2)))
(print "Les coordonnees globales du centre de w1 = "
       (list (setq w1-midx 
                     (add (div (#:window:width w1) 2) (#:window:left w1)))
               (setq w1-midy
                     (add (div (#:window:height w1) 2) (#:window:top w1)))))
(affich "centre(w1) appartient a la fenetre"
        '(win-title (find-window w1-midx w1-midy)))
(verif "Je pop sw1"
       '(pop-window sw1))
(affich "centre(w1) doit appartenir a la fenetre sw3"
        '(win-title (find-window w1-midx w1-midy)))
(verif "Je move sw1 derriere sw2"
       '(move-behind-window sw1 sw2))
(affich "centre(w1) doit appartenir a la fenetre sw2"
        '(win-title (find-window w1-midx w1-midy)))
(verif "Je move sw3 devant sw2"
       '(move-behind-window sw2 sw3))
(affich "centre(w1) doit appartenir a la fenetre ??? (pas w1)"
        '(win-title (find-window w1-midx w1-midy)))
(verif "sw1 devient invisible"
       '(modify-window sw1 () () () () () () 0))
(affich "centre(w1) doit appartenir a la fenetre sw2"
        '(win-title (find-window w1-midx w1-midy)))
(verif "Je pop la fenetre w1"
       '(pop-window w1))
(affich "centre(w1) doit appartenir a la fenetre sw2"
        '(win-title (find-window w1-midx w1-midy)))

;----------------------------------------------------------------------------
; --- maintenant, UNE sous-fenetre de sous-fenetre de sous-fenetre
(titre "#222# Maintenant, une SOUS-SOUS-SOUS-fenetre")
(verif "Sous-fenetre sw4 de sw3 de 2x2 (de sw3)  en 1/3,1/3 visible"
       '(setq sw4 (create-subwindow 'window    
                          (div (#:window:width sw3) 3)
                          (div (#:window:height sw3) 3)
                          (mul (#:window:width sw3)  2)
                          (mul (#:window:height sw3)  2)
                          "sw4" 0 1 sw3)))

(verif "sw1 redevient visible"
       '(modify-window sw1 () () () () () () 1))
(verif "Je remplis w1 de 0, sw1 de 1, sw3 de 3 et sw4 de 4"
       '(progn (fill-window-with-char w1 #/0)
               (fill-window-with-char sw1 #/1)
               (fill-window-with-char sw3 #/3)
               (fill-window-with-char sw4 #/4)))

;------------------------
(sous-titre "#223# Test du clip sur sw4")
(test-clip-subwindow sw4)

;------------------------
(sous-titre "#224# 2eme test du clip sur sw4")
(verif 
"hauteur(sw1) diminue; le 1/3 sup de sw3 est visible (sw4 doit etre invisible)"
       '(progn 
          (modify-window sw1 () () () 
                         (add (div (#:window:height sw3) 3) 
                              (#:window:top sw3)) () () ())
          (fill-window-with-char w1 #/0)
          (fill-window-with-char sw1 #/1)
          (fill-window-with-char sw3 #/3)
          (fill-window-with-char sw4 #/4)))
(verif 
"hauteur(sw1) double"
       '(progn 
          (modify-window sw1 () () () 
                         (mul (#:window:height sw1) 2) () () ())
          (fill-window-with-char w1 #/0)
          (fill-window-with-char sw1 #/1)
          (fill-window-with-char sw3 #/3)
          (fill-window-with-char sw4 #/4)))

;----------------------------------------------------------------------------
; ---- destruction des fenetres
(titre "#225# Destruction des fenetres") 
(verif "La fenetre w1 est tuee"
       '(kill-window w1))

;----------------------------------------------------------------------------
; ---- fin du test(ouffff...)
(titre "Fin du test du chapitre 18 / sous-fenetres") 

;----------------------------------------------------------------------------
 (terpri)
 (terpri)
 (terpri)
 (bitepilogue)
 (setq automatic ())
;----------------------------------------------------------------------------
;============================================================================

