;============================================================================
;----------------------------------------------------------------------------
;
; fichier ***test1.ll***
; 12.01.88 Ilog/ing bounthara
; test du fenetrage virtuel, chapitre 18
;
;============================================================================
;
; Test du bitmap virtuel
; Le-Lisp v15.2 du 1er Aout 1987
; Test du chapitre 18
;
; les fenetres et l'environnement graphique minimum
; fonctions testees:
; . create-window 
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
; dernier numero test : #116#
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
; ---- on teste les fonctions decrites dans le chaitre suivant
(tycls)
(tyflush)
(titre "Creation des fenetres")
(print "Tests des fontions du chapitre 18:")
(print """Le Fenetrage Virtuel""")
(print "Les tests portent sur l'utilisation de ces fonctions dans un")
(print "contexte de fenetrage sans sous-fenetre.")
(print "Les tests utilisent les 3/4 haut-gauche de l'ecran.")
(print 
"----------------------------------------------------------------------------")
(terpri)
;============================================================================
(sous-titre "#101# Creation d'UNE fenetre avec create-window")
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
(sous-titre "#102# Fenetre totalement visible")

;------------------------
(sous-titre "#103# Test des fonctions sur les fenetres")
(test-window w1)

;------------------------
; ---- nous testons les deplacements
(sous-titre "#104# Deplacements")
(test-move w1)

;------------------------
(sous-titre "#105# L'environnement graphique minimum")
; --- les fonctions d'ecriture des chaines de caractere
(test-env-graph-min w1)

(sous-titre "#106# Petit test sur le clip")
(test-clip-window w1)

;------------------------
; ---- les memes tests mais avec une fenetre non entierement visible
(sous-titre "#107# Fenetre partiellement visible sur l'ecran")
; ---- tuer la fenetre w1 et la rescuciter en un point hors de l'ecran!
(verif "La fenetre w1 est tuee"
       '(kill-window w1))
(testsuite)
(windowp w1) ()
(exit eof) ()
; ---- pour la remttre ailleurs
(verif "w1 est rescucite (make-window); sa moitie droite visible sur l'ecran"
       '(progn
          (#:window:left w1 (- (div (#:window:width w1) 2)))
          (make-window w1)))
(testsuite)
(not (windowp w1)) ()
(exit eof) ()

(small-test-env-graph-min w1)
;----------------------------------------------------------------------------
; ----- maintenant avec 2 fenetres 
; tester les combinaisons suivantes pour la superposition des fenetres 
; . disjointes
; . inclusion
; . intersection
(titre "#108# Maintenant, avec DEUX fenetres")

;------------------------
(sous-titre "#108# Creation d'une deuxieme fenetre")
(verif "creation de w2 avec make-window en 1/4,1/4 de 1/4x1/4, non-hilited"
       '(progn
          (setq w2 (#:window:make))
          (#:window:left w2 quartx)
          (#:window:top w2 quarty)
          (#:window:width w2 quartx)
          (#:window:height w2 quarty)
          (#:window:title w2 "w2")
          (#:window:hilited w2 0)
          (#:window:visible w2 1)
          (make-window w2)))

;------------------------
(sous-titre "#109# Les chaines de caracteres dans w2")
(affich "w2 devient la fenetre courante"
        '(current-window w2))
(small-test-env-graph-min w2)

;------------------------
(sous-titre "#110# Les superpositions")
; ---- les 2 fenetres ont disjointes
(sous-titre "#111# Les 2 fenetres sont disjointes")
(verif "Je remplis w1 de 1 et w2 de 2"
       '(progn 
          (fill-window-with-char w1 #/1)
          (fill-window-with-char w2 #/2)))

; ---- les 2 fenetres se chevauchent
(sous-titre "#112# Les 2 fenetres se chevauchent partiellement")
(verif "w1 en 1/8,1/8"
       '(modify-window w1 (div quartx 2) (div quarty 2)
                       () () () () ()))
; ---- est aussi utilise pour le cas : superposition totale
(verif "w2 au dessus de w1 (pop-window)"
       '(progn 
          (pop-window w2)
          (fill-window-with-char w1 #/1)
          (fill-window-with-char w2 #/2)))
(verif "clear w1"
       '(progn (current-window w1)
               (clear-graph-env)))
(verif "w1 au dessus de w2 (move-behind-window)"
       '(progn 
          (move-behind-window w2 w1)
          (fill-window-with-char w1 #/1)
          (fill-window-with-char w2 #/2)))
(small-test-env-graph-min w2)
(verif "La fenetre w1 devient invisible"
       '(progn 
          (modify-window w1 () () () () () () 0)
          (fill-window-with-char w1 #/1)
          (fill-window-with-char w2 #/2)))
(verif "w2 au dessus de w1 (move-behind-window)"
       '(move-behind-window w1 w2))
(verif "La fenetre w1 redevient visible"
       '(modify-window w1 () () () () () () 1))

; ---- l'une des fenetres est contenu dans l'autre
(sous-titre "#113# Superposition totale")
(verif "w2 en left(w1)+20,top(w1)+20"
       '(modify-window w2 
                       (add (#:window:left w1) 20)
                       (add (#:window:top w1) 20)
                       () () () () ()))
; ---- meme que superposition partielle
(verif "w2 au dessus de w1 (pop-window)"
       '(progn 
          (pop-window w2)
          (fill-window-with-char w1 #/1)
          (fill-window-with-char w2 #/2)))
(verif "clear w1"
       '(progn (current-window w1)
               (clear-graph-env)))
(verif "w1 au dessus de w2 (move-behind-window)"
       '(progn 
          (move-behind-window w2 w1)
          (fill-window-with-char w1 #/1)
          (fill-window-with-char w2 #/2)))
(verif "clear w2"
       '(progn (current-window w2)
               (clear-graph-env)))
(verif "La fenetre w1 devient invisible"
       '(modify-window w1 () () () () () () 0))
(verif "Je remplis w1 de 1 et w2 de 2"
       '(progn 
          (fill-window-with-char w1 #/1)
          (fill-window-with-char w2 #/2)))
(verif "w2 au dessus de w1 (move-behind-window)"
       '(progn 
          (move-behind-window w1 w2)
          (fill-window-with-char w1 #/1)
          (fill-window-with-char w2 #/2)))
(verif "La fenetre w1 redevient visible"
       '(modify-window w1 () () () () () () 1))

;------------------------
(sous-titre "#114# Les fonctions current-window, find-window et map-window")
(fill-window-with-char w1 #/1)
(fill-window-with-char w2 #/2)
; ---- current-window
(affich "La fonction current-window "
        '(current-window))
(verif "call (current-window ()) qui doit inhiber les operations d'affichage"
       '(current-window ()))
(verif "J`appelle (draw-string 0 0 ""ESSAI D'AFFICHAGE"")"
       '(catcherror t (my-draw-string 0 0 "ESSAI D'AFFICHAGE")))
; ---- find-window
; ---- dans aucune fenetre Lisp
(print "Coin sup gauche de w1 = "
       (list (#:window:left w1) (#:window:top w1)))
(print"Coin sup gauche de w2 = "
      (list (#:window:left w2) (#:window:top w2)))
(print "Les coord glob du point left(w1)-50,top(w1)-50 (en dehors de w1) = "
       (progn 
           (setq left-50 (sub (#:window:left w1) 50)
                 top-50 (sub (#:window:top w1) 50))
           (list left-50 top-50)))
(affich "Appartenance du point left(w1)-50,top(w1)-50 (doit etre ())"
        '(setq w (find-window left-50 top-50)))
; ---- dans une fenetre Lisp
(print "Les coord glob du centre(w1) = "
       (progn 
           (setq midx-w1 (add (#:window:left w1) (div (#:window:width w1) 2))
                 midy-w1 (add (#:window:top w1) (div (#:window:height w1) 2)))
           (list midx-w1 midy-w1)))
(affich "Je teste l'appartenance du centre de w1"
        '(and (setq w (find-window midx-w1 midy-w1))
              (win-title w)))
(print "Test des coordonnees locales")
(testsuite)
(progn 
  (map-window w midx-w1 midy-w1 'lx 'ly)
  (list lx ly) ) #.(list (sub midx-w1 (#:window:left w))
                         (sub midy-w1 (#:window:top w)))
(exit eof) ()
; ---- changement de fenetre
(verif "w2 au dessus de w1 (pop-window)"
       '(progn 
          (pop-window w2)
          (fill-window-with-char w1 #/1)
          (fill-window-with-char w2 #/2)))
(affich "Je teste l'appartenance du centre de w1 (doit etre w2)"
        '(and (setq w (find-window midx-w1 midy-w1))
              (win-title w)))
(print "Test des coordonnees locales")
(testsuite)
(progn 
  (map-window w midx-w1 midy-w1 'lx 'ly)
  (list lx ly) ) #.(list (sub midx-w1 (#:window:left w))
                         (sub midy-w1 (#:window:top w)))
(exit eof) ()

; ---- changement de fenetre
(verif "w2 est invisible"
       '(progn 
          (modify-window w2 () () () () () () 0)
          (fill-window-with-char w1 #/1)
          (fill-window-with-char w2 #/2)))
(affich "Je teste l'appartenance du centre de w1 (doit etre w1)"
        '(and (setq w (find-window midx-w1 midy-w1))
              (win-title w)))
(print "Test des coordonnees locales")
(testsuite)
(progn 
  (map-window w midx-w1 midy-w1 'lx 'ly)
  (list lx ly) ) #.(list (sub midx-w1 (#:window:left w))
                         (sub midy-w1 (#:window:top w)))
(exit eof) ()

(verif "w2 redevient visible"
       '(progn 
          (modify-window w2 () () () () () () 1)
          (fill-window-with-char w1 #/1)
          (fill-window-with-char w2 #/2)))
;------------------------
(sous-titre "#115# La fonction move-behind-window")
(verif "Je cree une 3eme fenetre en -1/3,1/4 de 2x1/4, hilited"
       '(setq w3 (create-window 'window (- tierx) quarty
                               (mul tierx 6) quarty "w3" 1 1)))
(verif "w3 devant w1"
       '(move-behind-window w1 w3))
(verif "w2 devant w3"
       '(move-behind-window w3 w2))
(verif "w1 devant w2 (ordre w1 w2 w3, w2 non visible)"
       '(move-behind-window w2 w1))
(verif "w2 devant w3 (w2 non visible)"
       '(move-behind-window w3 w2))

;----------------------------------------------------------------------------
; ---- destruction des fenetres
(titre "#116# Destruction des fenetres") 
(verif "La fenetre w1 est tuee (w2 doit etre au dessus de w3)"
       '(kill-window w1))
(verif "La fenetre w2 est tuee"
       '(kill-window w2))
(verif "La fenetre w3 est tuee"
       '(kill-window w3))

;----------------------------------------------------------------------------
; ---- fin du test(ouffff...)
(titre "Fin du test du chapitre 18 / fenetres") 

;----------------------------------------------------------------------------
 (terpri)
 (terpri)
 (terpri)
 (bitepilogue)
 (setq automatic ())
;----------------------------------------------------------------------------
;============================================================================
