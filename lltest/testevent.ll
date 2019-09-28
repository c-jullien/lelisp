;============================================================================
;----------------------------------------------------------------------------
;
; fichier ***test3.ll***
; 14.01.88 Ilog/ing bounthara
; test du dispositif de pointage, chapitre 19
;
;============================================================================
;
; Test du bitmap virtuel
; Le-Lisp v15.2 du 1er Aout 1987
; Test du chapitre 19
;
; le dispositif de pointage
; fonctions testees:
; . current-keyboard-focus-window (*)
; . event-mode (*)
; . eventp
; . read-event
; . peek-event
; . flush-event
; . add-event
; . event (*)
; . grab-event
; 
; . read-mouse
;
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
;
;
; *** la variable globale #:event:code n'est pas teste'e 
;============================================================================
; dernier numero test : #319#
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
(print "Les tests contenus dans ce fichier portent sur les fonctions du")
(print "chapitre 19. ""Le dispositif de Pointage"".")
(print "L'ordre des tests est le suivant:")
(print ". Structure et diffe'rents types d'e've`nements")
(print ". La queue d'e've`nements")
(print ". Les modes de fonctionnement de la souris")
(print ". Consultation synchrone de la souris")
(print "Les tests sont structure'e de la facon suivante:")
(print ". 1 fenetre")
(print ". 2 fenetres")
(print ". 1 niveau de sous-fenetre")
(print ". 2 niveaux de sous-fenetre")
(print "Les tests utilisent les 3/4 haut-gauche de l'ecran.")
(print 
"----------------------------------------------------------------------------")
(terpri)
;============================================================================
(sous-titre "#301# Creation d'UNE fenetre avec create-window")
(verif "Fene^tre w1 en 1/4,1/4 de 1/4x1/4, hilited, visible"
        '(setq w1 (create-window 'window quartx quarty quartx quarty 
                                 "w1" 1 1)))

;------------------------
; ---- Test avec SEULEMENT UNE fenetre
(sous-titre "#302# Fenetre totalement visible")

;------------------------
; ---- la queue d'evenements
(titre "#303# La Queue d'evenements")

; ---- les variables
(sous-titre "#304# Les variables #:event:...")
(testsuite)
(boundp '#:event:x) t
(boundp '#:event:y) t
(boundp '#:event:code) t
(boundp '#:event:move-event) t
(boundp '#:event:click-event) t
(exit eof) ()

(verif "Clickez dans w1"
       '(wait-click-in-window w1))

(testsuite)

; ----  eventp 
(progn (print  "eventp") t) t
(progn (wait) 
       (not (eventp))) ()

; ---- flush-event
(progn (print  "flush-event") t) t
(progn (print "Vidage de la queue d'evts") 
       (wait)
       (flush-event) t) t
(not (eventp)) t

; ---- read et peek-event et local-read-event
(progn (print "read-event, peek-event et local-read-event")
       (my-flush-event) t) t
; ----
(progn (print "peek-event")
       (wait)
       (peek-event) t) t
(setq e (list #:event:x #:event:y) bidon t) t
(progn (peek-event) t) t
(list #:event:x #:event:y) #.e
; ----
(progn (print "read & peek-event")
       (wait)
       (setq evt (#:event:make)) 
       (peek-event evt)
       (setq e (list (#:event:gx evt) (#:event:gy evt)))
       t) t
(progn (read-event) t) t
(list #:event:x #:event:y) #.e
; ----
(progn (print "(#:event:xx)")
       (wait)
       (peek-event) t) t
(setq e (list #:event:x #:event:y) bidon t) t
(progn (read-event evt) t) t
(list (#:event:gx evt) (#:event:gy evt)) #.e
; ----
(progn (print "local-read-event")
       (wait)
       (peek-event evt)
       (setq e (list (#:event:x evt) (#:event:y evt)))
       t) t
(current-window (#:event:window evt)) #.(#:event:window evt)
(progn (local-read-event) t) t
(list #:event:x #:event:y) #.e
; ---- map-window, find-window
(progn (print "find-window, map-window")
       (wait)
       (read-event evt)
       t) t
(setq w (find-window (#:event:gx evt) (#:event:gy evt))) #.(#:event:window evt)
(progn (map-window w (#:event:gx evt) (#:event:gy evt) 'lx 'ly)
       (list lx ly)) #.(list (#:event:x evt) (#:event:y evt))
; ----

; ---- add-event
(progn (print "add-event") t) t
(progn (my-flush-event) t) t
(progn (add-event 10 11 12) t) t
(progn (setq evt (#:event:make))
       (#:event:window evt w1)
       (#:event:gx evt (#:window:left w1))
       (#:event:gy evt (#:window:top w1))
       (#:event:code evt 13) (add-event evt) t) t
; ----
(progn (setq evt (read-event)) t) t
(list #:event:x #:event:y) (10 11)
(current-window w1) #.w1
(progn (local-read-event) t) t
(list #:event:x #:event:y) (0 0)
; ---- grab-event
(progn (print "grab-event") t) t
(grab-event w1)  #.w1
(progn (my-flush-event) t) t
(wait) t
(setq ok t) t
(progn (while (and (eventp) ok)
         (setq evt (read-event))
         (when (neq (#:event:window evt) w1) 
               (setq ok ()) 
               (print "grab-event error: " (#:event:window evt))))
       ok) t
(exit eof) ()

;------------------------
(titre "#305# Les modes de fonctionnement de la souris")
(sous-titre "#305# Non teste pour le moment..")
(print "Les 2 modes valides sont : .interruption souris , ou` l'interruption")
(print "                            programmable de nom event est declenchee")
(print "                            juste avant l'ajout de tout evt dans la")
(print "                            queue")
(print "                           .raccourci (concernant l'evt MOVE-EVENT)")
; ---- la fonction event-mode
(affich "event-mode courant"
        '(event-mode))

;----------------------------------------------------------------------------
; ---- Test avec DEUX fenetres
(titre "#307# Maintenant avec DEUX fenetres")
(sous-titre "#308# Fenetre totalement visible")
(verif "Fene^tre w2 en 2/3,1/3 de 1/3x1/3, hilited, visible"
       '(setq w2 (create-window 'window (mul 2 tierx) 
                                tiery tierx tiery "w2" 1 1)))
(verif "Je remplis w1 de 1 et w2 de 2"
       '(progn (fill-window-with-char w1 #/1)
               (fill-window-with-char w2 #/2)))
;(verif "Bougez la souris (""a"" pour arreter)"
;       '(test-event ()))
(verif "Click-clack"
       '(progn 
          (wait-click-in-window w2)
          (wait-click-in-window w1)))
; ----
(sous-titre "#309# Les 2 fenetres se chevauchent")
(verif "w2 en 1/3,1/3"
       '(modify-window w2 tierx tiery () () () () ()))
;(verif "Bougez la souris (""a"" pour arreter)"
;       '(test-event ()))
(verif "Click-clack"
       '(progn 
          (wait-click-in-window w2)
          (wait-click-in-window w1)))
; ----
(sous-titre "#310# Les 2 fenetres sont superposees")
(verif "w2 en 1/4,1/4"
       '(modify-window w2 quartx quarty () () () () ()))
(verif "w1 en sup-gauche(w2) + 10,10"
       '(modify-window w1 (add (#:window:left w2) 10)
                       (add (#:window:top w2) 10)
                       () () () () ()))
(verif "w1 au premier plan"
       '(pop-window w1))
;(verif "Bougez la souris (""a"" pour arreter)"
;       '(test-event ()))
(verif "Click-clack"
       '(progn 
          (wait-click-in-window w2)
          (wait-click-in-window w1)))
; ---- 
(sous-titre "#311# Invisibilite") 
(verif "w1 est invisible"
       '(modify-window w1 () () () () () () 0))
;(verif "Bougez la souris (""a"" pour arreter)"
;       '(test-event ()))
(verif "Click-clack"
       '(progn 
          (wait-click-in-window w2)
          (wait-click-in-window w1)))
(verif "w1 redevient visible"
       '(modify-window w1 () () () () () () 1))

;----------------------------------------------------------------------------
; ---- Test avec les sous-fenetres
(titre "#312# Le sous fenetrage (UN niveau)")
; ----
(sous-titre "#313# Une seule sous-fenetre")
(verif "Sous-fenetre sw3 avec un cadre de 3/4x2/3 en 1/6,1/4 visible"
       '(setq sw3 (create-subwindow 'window    
                          (div (#:window:width w1) 6)
                          (div (#:window:height w1) 4)
                          (mul (div (#:window:width w1) 4) 3)
                          (mul (div (#:window:height w1) 3) 2)
                          "sw3" 0 1 w1)))
(verif "Je remplis w1 de 1, sw3 de 3 et w2 de 2"
       '(progn (fill-window-with-char w1 #/1)
               (fill-window-with-char w2 #/2)
               (fill-window-with-char sw3 #/3)))
;(verif "Bougez la souris (""a"" pour arreter)"
;       '(test-event ()))
(verif "Click-clack"
       '(progn 
          (wait-click-in-window sw3)
          (wait-click-in-window w1)))

; ----
(sous-titre "#314# Creation d'une seconde sous-fenetre soeur sw4 avec make-window")
(verif "sw4 en 0,0 de 1/2x1/2, visible "
       '(let ()
          (setq sw4 (#:window:make))
          (#:window:left sw4 0)
          (#:window:top sw4 0)
          (#:window:width sw4 (div (#:window:width w1) 2))
          (#:window:height sw4 (div (#:window:height w1) 2))
          (#:window:hilited sw4 0)
          (#:window:visible sw4 1)
          (#:window:father sw4 w1)
          (#:window:title sw4 "sw4")
          (make-window sw4)))
(verif "Je remplis w1 de 1, sw3 de 3, sw4 de 4 et w2 de 2"
       '(progn (fill-window-with-char w1 #/1)
               (fill-window-with-char w2 #/2)
               (fill-window-with-char sw3 #/3)
               (fill-window-with-char sw4 #/4)))
;(verif "Bougez la souris (""a"" pour arreter)"
;       '(test-event ()))
(verif "Click-clack"
       '(progn 
          (wait-click-in-window sw4)
          (wait-click-in-window sw3)
          (wait-click-in-window w1)))

;----------------------------------------------------------------------------
; --- maintenant, UNE sous-fenetre de sous-fenetre
(titre "#315# Maintenant, une SOUS-SOUS-fenetre")
(sous-titre "#316# Creation d'une sous-fenetre de la sous-fenetre sw3")
(verif "Sous-fenetre sw5 de sw3 de 3/4x2/3 (de sw3)  en 1/8,1/8 visible"
       '(setq sw5 (create-subwindow 'window    
                          (div (#:window:width sw3) 8)
                          (div (#:window:height sw3) 8)
                          (mul (div (#:window:width sw3) 4) 3)
                          (mul (div (#:window:height sw3) 3) 2)
                          "sw5" 0 1 sw3)))
(verif "Je remplis w1 de 1, sw3 de 3, sw4 de 4 et sw5 de 5 et w2 de 2"
       '(progn (fill-window-with-char w1 #/1)
               (fill-window-with-char w2 #/2)
               (fill-window-with-char sw3 #/3)
               (fill-window-with-char sw5 #/5)
               (fill-window-with-char sw4 #/4)))
;(verif "Bougez la souris (""a"" pour arreter)"
;       '(test-event ()))
(verif "Click-clack"
       '(progn 
          (wait-click-in-window sw4)
          (wait-click-in-window sw3)
          (wait-click-in-window sw5)))

;----------------------------------------------------------------------------
; ---- pointage sur un caractere affiche
(titre "#317# Pointage d'un caractere dans une fenetre")
(verif "Je remplis w1 de 1, sw3 de 3, sw4 de 4 et sw5 de 5 et w2 de 2"
       '(progn (fill-window-with-char w1 #/1)
               (fill-window-with-char w2 #/2)
               (fill-window-with-char sw3 #/3)
               (fill-window-with-char sw5 #/5)
               (fill-window-with-char sw4 #/4)))
(affich "Le point 20,20 par rapport a sw5 appartient a la fenetre"
        '(win-title 
          (find-window (add (#:window:left w1) (add (#:window:left sw5) 20))
                       (add (#:window:top w1) (add (#:window:top sw5) 20)))))
(verif "Caractere a pointer en 20,20 par rapport a sw5"
       '(pointage-car sw5 20 20))
(verif "sw3 au dessus de sw4 (et a fortiori sw5 au dessus de sw4!)"
       '(progn (move-behind-window sw4 sw3)
               (fill-window-with-char w1 #/ )
               (fill-window-with-char w2 #/ )
               (fill-window-with-char sw4 #/4)
               (fill-window-with-char sw3 #/3)
               (fill-window-with-char sw5 #/5)))
(affich "Le point 20,20 par rapport a sw5 appartient a la fenetre"
        '(win-title 
          (find-window (add (#:window:left w1) (add (#:window:left sw5) 20))
                       (add (#:window:top w1) (add (#:window:top sw5) 20)))))
(verif "Caractere a pointer  en 20,20 par rapport a sw5"
       '(pointage-car sw5 20 20))
(verif "w1 au dessus de sw4 (sw4 doit rester visible)"
       '(progn (move-behind-window sw4 w1)
               (fill-window-with-char w1 #/ )
               (fill-window-with-char w2 #/ )
               (fill-window-with-char sw4 #/4)
               (fill-window-with-char sw3 #/3)
               (fill-window-with-char sw5 #/5)))
(affich "Le point 20,20 par rapport a w1 appartient a la fenetre"
        '(win-title 
          (find-window (add (#:window:left w1) 20)
                       (add (#:window:top w1) 20))))
(verif "Caractere a pointer  en 20,20 par rapport a w1"
       '(pointage-car w1 20 20))
(verif "sw4 devient invisible"
       '(progn (modify-window sw4 () () () () () () 0)
               (fill-window-with-char w1 #/ )
               (fill-window-with-char w2 #/ )
               (fill-window-with-char sw4 #/4)
               (fill-window-with-char sw3 #/3)
               (fill-window-with-char sw5 #/5)))
(verif "Caractere a pointer en 20,20 par rapport a w1"
       '(pointage-car w1 20 20))

;----------------------------------------------------------------------------
; ---- consultation synchrone de la souris
(titre "#318# Consultation synchrone de la souris")
(attendre)
(verif "Deplacez vous dans w1 (qui a toujours des sous-fenetres visibles)"
       '(test-mouse w1))
(verif "Toutes les sous-fenetres de w1 sont invisibles"
       '(progn (modify-window sw3 () () () () () () 0)
               (modify-window sw4 () () () () () () 0)
               (test-mouse w1)))
      
;(print "Bougez la souris (appuyez sur une touche pour arreter)")
;(attendre)
;(test-mouse)

;----------------------------------------------------------------------------
; ---- destruction des fenetres
(titre "#319# Destruction des fenetres") 
(verif "La fenetre w1 est tuee"
       '(kill-window w1))
(verif "La fenetre w2 est tuee"
       '(kill-window w2))

;----------------------------------------------------------------------------
; ---- fin du test(ouffff...)
(titre "Fin du test sur le dispositif de pointage") 

;----------------------------------------------------------------------------
 (terpri)
 (terpri)
 (terpri)
 (bitepilogue)
 (setq automatic ())
;----------------------------------------------------------------------------
;============================================================================

