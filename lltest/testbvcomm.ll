;----------------------------------------------------------------------------
; fichier ***testbvcomm.ll***
; les fonctions communes utilisees pour le test
;----------------------------------------------------------------------------

(unless (current-display)
	(bitprologue))

;;;; Correction Pour X11
(when (eq #:bitmap:name '|X11|)
      (synonymq y-base-space font-ascent)              
      (synonymq height-space font-height) )

(setq #:sys-package:colon 'testbvcomm)
(defvar :forme)

; remis a jour quand "titre" est appele
(defvar jump ())
(defvar automatic ())
; remis a jour quand "sous-titre" est appele
(defvar skiping ())

(unless (boundp '#:testcomm:error-occured)
        (defvar #:testcomm:error-occured t))
(unless (boundp ':repeat-value)
        (defvar :repeat-value 100))
(unless (boundp ':cputime-test)
        (defvar :cputime-test))
(defvar :chaine-bidon "xxxx")
;----------------------------------------------------------------------------
(de prin-with-blanks L
    ; on utilise un affichage deroulant 
    ; seule la donnee colonne est utilise'e
    (prinflush)
    (prin (makestring (car L) #/ ))
    (apply 'prin (cdr L))
    (prinflush))

(defvar lectcar-pushed ())

; ---- utilise les fonctions
; . tys
; . tyi 
; du terminal virtuel
(de lectcar (prompt)
    ; imprime un prompt et attend une frappe au clavier
    ; si on frappe "j" alors la variable automaticV et jump son positionnees
    ;  cela permet de sauter de "titre" en "titre" sans afficher les 
    ;  messages
    ; si on frappe "a" alors la variable automatic est positionnee
    ; si on frappe "s" alors la variable skiping est positionnee
    ; si on frappe "e" alors l'expression contenu dans #:testbvcomm:forme est
    ;  pretty-printe'e
    ; si on frappe "!", on rentre dans une boucle lelisp pour 
    ;  evaluer certaines expressions (utiles)
    ; si on frappe ^d, pour arreter la lecture du fichier test
    (if (or skiping automatic jump)
        ; lorsque le test tourne en automatique, jump ou skiping, alors les
        ; commandes caracteres suivants peuvent etre traitees
        (selectq (tys)
                 (#^d (terpri)
                      (print "Lecture arretee!")
                      (exit eof))
                 (#\SP (reset-all-vars))
                 ((#/j #/J) (setq automatic t jump t skiping ()))
                 ((#/a #/A) (setq automatic t jump () skiping ()))
                 ((#/s #/S) (setq automatic () jump () skiping t)))
      ; sinon, lorsque l'on est dans la boucle de lecture d'une commande
      (prinflush prompt)
      (while (tys))
      (selectq (tyi)
               (#^d (terpri)
                    (print "Lecture arretee!")
                    (exit eof))
               ((#/? #/h #/H) 
                (with ((push-lectcar t))
                      (help-lectcar)
                      (lectcar prompt)))
               (#/e
                (with ((push-lectcar t))
                      (terpri)
                      (pprint :forme)
                      (lectcar prompt)))
               (#/! 
                (with ((push-lectcar t))
                      (lelisp-loop)
                      (lectcar prompt)))
               ((#/t #/T)
                (setq :cputime-test t))
               ((#/n #/N) 
                (setq :cputime-test t)
                (read-repeat-value))
               ((#/j #/J) (setq automatic t jump t))
               ((#/a #/A) (setq automatic t))
               ((#/s #/S) (setq skiping t)))
      ; et un newline, un...
      (unless lectcar-pushed 
              (terpri)
              (prinflush))))

(de read-repeat-value ()
    (terpri)
    (prinflush "Nombre d'execution ( =< 9999 ; default " 
               :repeat-value ") : ")
    (prinflush
     (setq :repeat-value 
           (let ((n (tyinstring :chaine-bidon)))
             (setq n (car (catcherror 
                           ()
                           (implode
                            (explode 
                             (substring :chaine-bidon 0 n))))))
             (if (and n (fixp n) (gt n 0))
                 n
               :repeat-value)))))
    

(dmd push-lectcar L
     (if (consp L) 
         `(setq lectcar-pushed ,(car L))
       `lectcar-pushed))

(de help-lectcar ()
    (terpri)
    (print "Quelques explications...")
    (print " ^D, pour arreter la lecture du fichier test")
    (print " ""j"" alors la variable automatic et jump")
    (print "     son positionnees. Cela permet de sauter de ""titre"" en ")
    (print "  ""titre"" sans afficher les messages")
    (print " ""a"" alors la variable automatic est positionnee")
    (print " ""s"" alors la variable skiping est positionnee")
    (print " ""e"" pour afficher l'expression a` e'valuer ou venant d'e^tre")
    (print "     e'value'e")
    (print " ""t"" pour calculer le temps cpu de la prochaine evaluation")
    (print "     d'une expression du test.")
    (print "     ATTENTION aux operations avec des EFFETS de BORD!!!")
    (print " ""n"" pour specifier le nombre entier d'operations a repeter")
    (print "     (entre 1 et 9999). Ce nombre servira pour le calcul du")
    (print "     temps cpu (cf ""t"").")
    (print " ""!"" on rentre dans une boucle lelisp pour ")
    (print "     evaluer certaines expressions (utiles)"))

; entrer dans une boucle lelisp
(de lelisp-loop ()
    (with ((prompt "[lisp]: ")
           (inchan ()))
          (let ((to-eval ())
                (res-eval ()))
            (terpri)
            (print "Vous entrez dans une nouvelle "
                   "boucle d'interprete Lelisp"
                   "((end) pour arreter)")
            (flush)
            (untilexit arret-lelisp-loop
                       (setq to-eval (read))
                       (if (equal to-eval '(end))
                           (exit arret-lelisp-loop))
                       (catcherror t
                                   (setq res-eval (eval to-eval))
                                   (print "= " res-eval))))))

(de attendre ()
    ; vide la memoire tampon et imprime le message "<vu>" et
    ; attend une frappe de caractere
    (my-flush-event)
    (bitmap-flush)
    (lectcar "--<vu>?"))

(de :eval-test (expr)
    (when (and :cputime-test (fixp :repeat-value))
          (let ((time))
            (catcherror 
             t
             (print "Expression a evaluer:")
             (pprint expr)
             (prinflush "temps cpu/oper. (calcule sur " 
                        :repeat-value " operations) : ")
             (setq time 
                   (time '(repeat :repeat-value 
                                 (eval expr))))
             (setq time (/ (* time 1000) :repeat-value))
             (print time " cpu millisecs")))
          (setq :cputime-test ()))
    (catcherror t (eval expr)))

(de verif (message forme)
    ; imprime "message" qui de'crit ce que l'on va voir, attend,
    ; e'value forme, puis attend.
    (setq :forme forme)
    (my-flush-event)
    (bitmap-flush)
    (unless jump 
            (prin-with-blanks 0 "??? " message)
            (terpri))
    (lectcar "--<go>?")
    (:eval-test forme)
    (check-event-list)
    (my-flush-event)
    (bitmap-flush)
    (lectcar "--<ok>?"))

(de affich (message forme)
    ; imprime "message" qui de'crit ce que l'on va voir, attend,
    ; affiche le resultat de l'e'valuation de "forme", puis attend.
    (setq :forme forme)
    (my-flush-event)
    (bitmap-flush)
    (unless (or automatic skiping jump)
	    (prin-with-blanks 0 "??? " message)
            (terpri))
    (lectcar "--<go>?")
    (let ((str (car (:eval-test forme))))
      (check-event-list)
      (my-flush-event)
      (bitmap-flush) 
      (unless jump 
              (prin-with-blanks 0 ">>> " message " = "  str))
      (terpri)
      (lectcar "--<ok>?")))

(de titre (msg)
    (terpri)
    (prin-with-blanks 18 msg)
    (terpri)
    (prin-with-blanks 18 (makestring (slen msg) #/=))
    (terpri)
    (my-flush-event)
    (reset-all-vars)
    (bitmap-flush))

(de reset-all-vars ()
    (setq jump ())
    (setq automatic ())
    (setq skiping ()))
    
(de sous-titre (msg)
    (setq skiping ())
    (prin-with-blanks 2 msg)
    (terpri)
    (prin-with-blanks 2 (makestring (slen msg) #/-))
    (terpri)
    (my-flush-event)
    (setq skiping ())
    (bitmap-flush))

(de testsuite ()
    ; passe temporairement en mode testfn, et attend quand
    ; la liste est finie
    (lock 
     '(lambda (tag val) 
        (when #:testcomm:error-occured 
              (reset-all-vars)
              (attendre)))
     (testfn ())))

(dmd printvals l
     `(progn (mapc (lambda (v) (print v " = " (eval v)))
                   '(,.l))
             (attendre)))
;----------------------------------------------------------------------------
; les fonctions communes utilisees pour le test
;----------------------------------------------------------------------------
; ---- quelques variables utiles

(defvar   demix (quo (bitxmax) 2))
(defvar   demiy (quo (bitymax) 2))
(defvar   tierx (quo (bitxmax) 3))
(defvar   tiery (quo (bitymax) 3))
(defvar   quartx (quo (bitxmax) 4))
(defvar   quarty (quo (bitymax) 4))
(defvar   top0 50)
(defvar   left0 50))

;  ---- les dimensions d'un caractere
(setq bidon (create-window 'window 0 0 1 1 "" 0 0))
(current-window bidon)
; ---- il est necessaire de specifier une current-window pour utiliser les 
; ---- fonctions height-space et width-space
(defvar   haut-car (height-space))
(defvar   larg-car (width-space))
(kill-window bidon)
;----------------------------------------------------------------------------
; ---- tuer toutes les fenetres
(de k-w ()
    (mapc '(lambda (w)
             (catcherror t (kill-window w)))
          (reverse (cdr #:window:all-windows)))
    (bitmap-flush))

; ---- retourne la chaine nom de la fenetre specifiee 
(dmd win-title (w)
     `(and ,w (catenate """" (#:window:title ,w) """")))

; ---- wait...
(de wait () 
    (my-flush-event)
;    (until (or skiping jump automatic (eventp))
    (until (eventp)
           (prinflush "Bougez la souris et clickez dans une des fenetres Lisp")
           (repeat 3 (progn (repeat 32767) 
                             (prinflush ".")))
           (terpri))
    t)
;----------------------------------------------------------------------------
; ---- pour observer la queue d'evts
(de test-event (nevent)
    (let ()
      (my-flush-event)
      (setq down-on ())
      (untilexit arret
                 (setq E (read-event))
                 (prin
                  "-gx= " (#:event:gx E) 
                  " gy= " (#:event:gy E) 
                  " x= " (#:event:x E) 
                  " y= " (#:event:y E) 
                  " code= " (#:event:code E)
                  " (win=" 
                  (#:window:title (#:event:window E)) ")")
                 (process-event E)
                 (prinflush))))

; ---- renvoie un message pour tout type d'evenement
; ---- et traite tous les evts issus du systeme hote (check-one-event)
(de process-event (E)
    (selectq (#:event:code E)
             (ascii-event
              (print " {touche """ 
                     (ascii (#:event:detail)) """}")
              (when (or (eq (#:event:detail E) 65 ) 
                        (eq (#:event:detail E) 97)) ; "a" ou "A"
                    (exit arret)))
             ((enterwindow-event leavewindow-event)
              (terpri))
             (down-event
              (print " {detail=" (#:event:detail) "}")
              (fill-window-with-char Ewin #/#)
              (when down-on
                    (terpri)
                    (print "Il y a un down-event qui n'a pas eu de "
                           "up-event"))
              (setq down-on t))
             (drag-event
              (print " {detail=" (#:event:detail) "}"))
             (up-event
              (print " {detail=" (#:event:detail) "}")
              (current-window Ewin)
              (clear-graph-env)
              (unless down-on 
                      (terpri)
                      (print "Il y a un up-event qui n'a pas "
                             "eu de down-event"))
              (setq down-on ()))
             ; les evenements suivants sont generes par le systeme "hote"
             (t (check-one-event E))))
;----------------------------------------------------------------------------
; ---- checker si le systeme a envoye des evenements modificatifs...
; ---- et en tenir compte
(de check-event-list ()
    (let (E)
      (while (eventp)
        (setq E (read-event))
        (catcherror t (check-one-event E)))))

; ---- le flush-event qui traite les evts au lieu de les balancer...
(de my-flush-event ()
    (check-event-list))

; ---- pour checker UN evenement 
(de check-one-event (E)
    (selectq (#:event:code E)
             (modify-window-event
              (terpri)
              (print "$$$$$ modify-window-event: ")
              (print "Le systeme a ajoute un evt ""modify-window"" pour ")
              (print "la fenetre " (#:window:title (#:event:window E)))
              (affiche-diffs E)
              (terpri)
              (update-window (#:event:window E)
                             (#:event:gx E) (#:event:gy E)
                             (#:event:w E) (#:event:h E)))
	     (kill-window-event
              (terpri)
              (print "$$$$$ kill-window-event: ")
              (print "La fenetre " (#:window:title Ewin) " a ete ")
              (print "tue'e par un agent exte'rieur a LeLisp.")
              (kill-window (#:event:window E)))
             (repaint-window-event
              (print "$$$$$ repaint-window-event"))
             (keyboard-focus-event
              (terpri)
              (print "$$$$$ keyboard-focus-event: ")
              (print "Le systeme hote a change le proprietaire du clavier, ")
              (print "qui devient " (#:window:title (#:event:window E)))
              (current-keyboard-focus-window (#:event:window E)))
             ((ascii-event 
               down-event
               drag-event
               up-event
               enterwindow-event
               leavewindow-event)
              t)
             (t 
              (print "$$$$$ ovni-event, code = " (#:event:code E)))))

; --- pour afficher les differences de valeurs
(de affiche-diffs (modif-E)
    (let ((win (#:event:window E)))
      (print "window :" (win-title win))
      (print "#:event:code   :" (#:event:code modif-E))
      (print "#:event:detail :" (#:event:detail modif-E))
      (print "changements (old/new)")
      (affiche-diff "left (gx) " (#:window:left win) (#:event:gx modif-E))
      (affiche-diff "top  (gy) " (#:window:top win) (#:event:gy modif-E))
      (affiche-diff "width     " (#:window:width win) (#:event:w modif-E))
      (affiche-diff "height    " (#:window:height win) (#:event:h modif-E))))

(de affiche-diff (label old new)
    (let ()
      (prin label " : " old "/" new)
      (if (and new (nequal new old))
          (terpri)
        (print " **inchange**"))))
;----------------------------------------------------------------------------
; ---- pour remplir une fenetre avec un certain caractere
(de fill-window-with-char (win cn)
    (current-window win)
    (let* (
           (incrx (width-space))
           (incry (height-space))
           (width (#:window:width win))
           (height (#:window:height win))
           (ypos 0)
           (row (add1 (div width incrx)))
           (line (add1 (div height incry)))
           (line-cn (makestring row cn)))
      (repeat line 
              (my-draw-string 0 ypos line-cn)
              (incr ypos incry))))

; --- mettons provisoirement qq titres pour les fenetres 
(de label-wins l
    (mapc (lambda (w) 
            (current-window w)
            (my-draw-string 0 0 
                            (or (#:window:title w)
                                "NULL")))
          l))

; --- to display all the properties of a window 
(de disp-props (w)
    (let ()
      (print "---proprietes de fene^tres---")
      (disp-eval2 #:window:left (#:window:left w))
      (disp-eval2 #:window:top (#:window:top w))
      (disp-eval2 #:window:width (#:window:width  w))
      (disp-eval2 #:window:height (#:window:height w))
      (disp-eval2 #:window:title (#:window:title w))
      (disp-eval2 #:window:hilited (#:window:hilited w))
      (disp-eval2 #:window:visible (#:window:visible w))
      (disp-eval2 #:window:grah-env (#:window:graph-env w))
      (disp-eval2 #:window:father (#:window:father w))
      (disp-eval2 #:window:properties (#:window:properties w))
      (disp-eval2 #:window:extend (#:window:extend w))))

; ---- affiche le car de l'expression puis le re'sultat de l'e'valuation
(df disp-eval (L)
    (let ()
      (print (car L) " = " (catcherror t (eval L)))))

(df disp-eval2 (label val)
    (let ()
      (print label " = " (catcherror t (eval val)))))
;----------------------------------------------------------------------------
; ---- il faut ajuster les coordonnees a fournir aux fonctions draw-xxx
(dmd add-x-base (l)
    `(add ,l (x-base-space)))
(dmd add-y-base (l)
    `(add ,l (y-base-space)))

; ----certaines fonctions sont "revues"
(de my-draw-string (x y str)
    (draw-string (add-x-base x)
                 (add-y-base y)
                 str))
(de my-draw-substring (x y str p l)
    (draw-substring (add-x-base x)
                 (add-y-base y)
                 str p l))
(de my-draw-cn (x y cn)
    (draw-cn (add-x-base x)
                 (add-y-base y)
                 cn))
(de my-draw-cursor (x y i)
    (draw-cursor (add-x-base x)
                 (add-y-base y)
                 i))
;----------------------------------------------------------------------------
; ---- quelques fonctions pour afficher des caracteres dans les fenetres 
; ---- la chaine "aqw456pt;y" apparait dans le coin sup gauche de la 
; ---- fenetre courante
(de aff-gau-hau ()
       (my-draw-string 0 0 "aqw456pt;y"))

; ---- affiche la chaine "aqw456pt;y" centree sur la derniere ligne de w
(de aff-cen-der ()
       (my-draw-string 
                (div (sub (#:window:width (current-window)) 
                          (width-substring "aqw456pt;y"0 10)) 2)
                (sub (#:window:height (current-window)) haut-car)
                "aqw456pt;y"))
    
; ---- affiche la lettre "D" dans la derniere colonne, centree verticalement 
(de aff-der-cen ()
       (my-draw-cn (sub (#:window:width (current-window)) larg-car)
                 (div (sub (#:window:height (current-window)) haut-car) 2)
                 #/D))

; ---- les fonctions d'ecriture des chaines de caractere
(dmd test-env-graph-min  (w)
     `(progn 
       (current-window ,w)
       ; la queue en particulier du caractere (ex: q, y)
       (print "Les caracteres (si visibles) doivent etre vu en entier"
              " dans la fenetre.")
       (verif (catenate "clear " (win-title ,w))
              '(clear-graph-env))
       (verif (catenate 
               "la chaine ""aqw456pt;y"" apparait dans le coin sup gauche de "
               (win-title ,w))
              '(aff-gau-hau))
       (verif (catenate 
               "les 3,4,5eme cars de ""ABCDEFGH"" dans le coin sup gauche de "
               (win-title ,w))
              '(my-draw-substring 0 0 "ABCDEFGH" 2 3))
       (verif (catenate
               "la chaine ""aqw456pt;y"" centree sur la derniere ligne de "
               (win-title ,w))
              '(aff-cen-der))
       (verif (catenate
               "Le curseur entre les caracteres ""5"" et ""6"" de la 1ere ligne de "
               (win-title ,w))
              '(my-draw-cursor (width-substring "aqw456pt;y" 0 5) 0 t))
       (verif (catenate
               "Le curseur devient invisible dans "
               (win-title ,w))
              '(my-draw-cursor (width-substring "aqw456pt;y" 0 5) 0()))
       (verif (catenate
               "Le caractere ""6"" de la 1ere ligne devient ""*"" dans "
               (win-title ,w))
              '(my-draw-cn (width-substring "aqw456pt;y" 0 5) 0 #/*))
       (verif (catenate
               "Le caractere ""D"" sur la derniere colonne centre verticalement de "
               (win-title ,w))
              '(aff-der-cen))))

; --- un peu plus petit
(dmd small-test-env-graph-min  (w)
     `(progn 
       (current-window ,w)
       ; la queue en particulier du caractere (ex: q, y)
       (print "Les caracteres (si visibles) doivent etre vu en entier"
              " dans la fenetre.")
       (verif (catenate "clear" (win-title ,w))
              '(clear-graph-env))
       (verif (catenate 
               "la chaine ""aqw456pt;y"" apparait dans le coin sup gauche de "
               (win-title ,w))
              '(aff-gau-hau))
       (verif (catenate
               "la chaine ""aqw456pt;y"" centree sur la derniere ligne de "
               (win-title ,w))
              '(aff-cen-der))
       (verif (catenate
               "Le caractere ""D"" sur la derniere colonne centre verticalement de "
               (win-title ,w))
              '(aff-der-cen))))

; ---- appliquer les differentes fonctions sur les fenetres
(dmd test-window (w)
     `(progn 
        (verif (catenate (win-title ,w) " devient non-hilited")
               '(modify-window ,w () () () () () 0 ()))
        (verif (catenate (win-title ,w) " devient invisible")
               '(modify-window ,w () () () () () () 0))
        (verif (catenate (win-title ,w) " reapparait et mis en valeur")
               '(modify-window ,w () () () () () 1 1))
        (verif (catenate 
                "le titre devient ""fenetre " (win-title ,w) """")
               '(modify-window ,w () () () () 
                               (catenate "fenetre " (win-title ,w)) () ()))
        (verif (catenate 
                "la hauteur de " (win-title ,w) " est reduite de moitie")
               '(modify-window ,w () () () 
                               (div (#:window:height ,w) 2) () () ()))
        (verif (catenate 
                "la largeur de " (win-title ,w) " est reduite de moitie")
               '(modify-window ,w () () 
                               (div (#:window:width ,w) 2) () () () ()))
        (verif (catenate (win-title ,w) 
                       " reprend ses dim. initiales (hx2,wx2)")
               '(modify-window ,w () () 
                               (mul (#:window:width ,w) 2) 
                               (mul (#:window:height ,w) 2) () () ()))))

; ---- appliquer les differentes fonctions sur lessous-fenetres
(dmd test-subwindow (w)
     `(progn 
        (verif (catenate (win-title ,w) " reapparait et mis en valeur")
               '(progn (clear-graph-env-father ,w)
                       (modify-window ,w () () () () () 1 1)
                       (fill-window-with-char ,w #/#)))
        (verif (catenate 
                "la hauteur de " (win-title ,w) " est reduite de moitie")
               '(progn (clear-graph-env-father ,w)
                       (modify-window ,w () () () 
                                      (div (#:window:height ,w) 2) () () ())
                       (fill-window-with-char ,w #/#)))
        (verif (catenate 
                "la largeur de " (win-title ,w) " est reduite de moitie")
               '(progn (clear-graph-env-father ,w)
                       (modify-window ,w () () 
                                      (div (#:window:width ,w) 2) () () () ())
                       (fill-window-with-char ,w #/#)))
        (verif (catenate (win-title ,w) 
                       " reprend ses dim. initiales (hx2,wx2)")
               '(progn (clear-graph-env-father ,w)
                       (modify-window ,w () () 
                                      (mul (#:window:width ,w) 2) 
                                      (mul (#:window:height ,w) 2) () () ())
                       (fill-window-with-char ,w #/#)))))

; ---- appliquer les differentes fonctions sur lessous-fenetres
(dmd test-clip-window (w)
     `(let ((x (#:window:left ,w))
            (y (#:window:top ,w)))
        (verif (catenate "Je remplis " (win-title ,w) " avec ?")
               '(fill-window-with-char ,w #/?))
        (verif (catenate (win-title ,w) 
                ":(clip): largeur= x2 , hauteur= x2, pos. en 5,5 " )
               '(progn (clear-graph-env-father ,w)
                       (modify-window ,w 5 5
                                      (mul (#:window:width ,w) 2) 
                                      (mul (#:window:height ,w) 2) () () ())
                       (fill-window-with-char ,w #/#)))
        (verif (catenate "(clip): " (win-title ,w) 
                       " reprend ses dim. initiales (h/2,w/2)")
               '(progn (clear-graph-env-father ,w)
                       (modify-window ,w () ()
                                      (div (#:window:width ,w) 2) 
                                      (div (#:window:height ,w) 2) 
                                      () () ())))
        (verif (catenate (win-title ,w) 
                ":(clip): largeur= x2 , hauteur= x2; je la remplis de #" )
               '(progn (clear-graph-env-father ,w)
                       (modify-window ,w () ()
                                      (mul (#:window:width ,w) 2) 
                                      (mul (#:window:height ,w) 2) () () ())
                       (fill-window-with-char ,w #/#)))
        (clear-graph-env)
        (verif "Je set le clip a w/3,h/3,w/3,h/3 et je remplis de #"
               '(progn (current-clip (div (#:window:width ,w) 3)
                              (div (#:window:height ,w) 3)
                              (div (#:window:width ,w) 3)
                              (div (#:window:height ,w) 3))
                       (fill-window-with-char ,w #/#)))
        (verif (catenate "(clip): " (win-title ,w) 
                       " reprend ses dim. (h/2,w/2) et sa pos. initiales")
               '(progn (clear-graph-env-father ,w)
                       (modify-window ,w x y
                                      (div (#:window:width ,w) 2) 
                                      (div (#:window:height ,w) 2) 
                                      () () ())))))

; ---- pour tester le clip dans une sous-fenetre
(dmd test-clip-subwindow (w)
     `(let* ((oldx (#:window:left ,w))
             (oldy (#:window:top ,w))
             (oldw (#:window:width ,w))
             (oldh (#:window:height ,w))
             (father (#:window:father ,w))
             (oldx-f (#:window:left father))
             (oldy-f (#:window:top father)))
        (verif (catenate "Je remplis " (win-title ,w) " avec ? et son pere "
                         (win-title father) " de *")
               '(progn 
                  (fill-window-with-char father #/*)
                  (fill-window-with-char ,w #/?)))
        (verif (catenate (win-title ,w) 
                "prend les dim. de son pere")
               '(progn (modify-window ,w () ()
                                      (#:window:width father) 
                                      (#:window:height father) () () ())
                       (fill-window-with-char ,w #/?)))
        (verif (catenate "Le pere " (win-title father) 
                         " double de taille (h & w) et va en 0,0")
               '(progn (modify-window father  0 0 
                                      (mul (#:window:width father) 2) 
                                      (mul (#:window:height father) 2) 
                                      () () ())
                  (fill-window-with-char father #/*)
                  (fill-window-with-char ,w #/?)))
        (verif (catenate (win-title ,w) 
                         " double de taille (h & w)")
               '(progn (modify-window ,w () ()
                                      (mul (#:window:width ,w) 2) 
                                      (mul (#:window:height ,w) 2) 
                                      () () ())
                  (fill-window-with-char father #/*)
                  (fill-window-with-char ,w #/?)))
        (verif (catenate (win-title ,w) " et " (win-title father)
                         " reprennent leur dim. intiales")
               '(progn (clear-graph-env-father ,w)
                       (modify-window father oldx-f oldy-f
                                      (div (#:window:width father) 2) 
                                      (div (#:window:height father) 2) 
                                      () () ())
                       (modify-window ,w oldx oldy oldw oldh () () ())
                  (fill-window-with-char father #/*)
                  (fill-window-with-char ,w #/?)))
        (verif (catenate 
                "Je set le clip du pere "
                (win-title father) " a w/3,h/3,w/3,h/3 et je le remplis de c")
               '(progn  (current-window father)
                        (current-clip (div (#:window:width father) 3)
                              (div (#:window:height father) 3)
                              (div (#:window:width father) 3)
                              (div (#:window:height father) 3))
                        (fill-window-with-char father #/c)))
        (verif (catenate 
                "Je remplis " (win-title ,w) 
                " de C (clip du pere = w/3,h/3,w/3,h/3, zone ""c"")!$!")
               '(progn
                  (fill-window-with-char ,w #/C)))
        (verif (catenate "Clip du pere " (win-title father)
                         " reprend ses valeurs")
               '(progn 
                  (current-window father)
                  (current-clip 0 0 (#:window:width father)
                                (#:window:height father))
                  (fill-window-with-char father #/c)
                  (fill-window-with-char ,w #/?)))))

; ---- effacer l'envt graphique de la fenetre mere
(dmd clear-graph-env-father (w)
     `(and (current-window (#:window:father ,w))
           (clear-graph-env)))           

; ---- les deplacements des sous-fenetres
(dmd test-move-subwindow (w)
     `(let ((tmp-left (#:window:left ,w))
            (tmp-top (#:window:top ,w)))
        (verif (catenate (win-title ,w) 
                       " se deplace vers la gauche de sa largeur")
               '(progn (clear-graph-env-father ,w)
                       (modify-window ,w (sub (#:window:left ,w) 
                                              (#:window:width ,w))
                                      () () () () () ())
                       (fill-window-with-char ,w #/#)))
        (verif (catenate (win-title ,w) 
                       " se deplace vers le haut de sa hauteur")
               '(progn (clear-graph-env-father ,w)
                       (modify-window ,w () (sub (#:window:top ,w)
                                                 (#:window:height ,w))
                                      () () () () ())
                       (fill-window-with-char ,w #/#)))
        (verif (catenate (win-title ,w) 
                       " se deplace en coin-sup-gauche(pere)+(-20,-20)")
               '(progn (clear-graph-env-father ,w)
                       (modify-window ,w -20 -20 () () () () ())
                       (clear-graph-env-father ,w)
                       (fill-window-with-char ,w #/#)))
        (verif "Le rectangle de clip devient 10,10,40x40 (zone visible 30x30)"
               '(progn (current-window ,w)
                       (current-clip 10 10 40 40)
                       (fill-window-with-char ,w #/c)))
        (verif (catenate "J'efface " (win-title ,w))
               '(progn (current-window ,w)
                       (clear-graph-env)))
        (verif (catenate "Le rectangle de clip devient toute la sous-fenetre"
                         (win-title ,w))
               '(progn (current-window ,w)
                       (current-clip 0 0 (#:window:width ,w)
                                     (#:window:height ,w))
                       (fill-window-with-char ,w #/d)))
        (verif (catenate (win-title ,w) 
                       " triple ses dimensions")
               '(progn (clear-graph-env-father ,w)
                       (modify-window ,w () () 
                                      (mul (#:window:width ,w) 3) 
                                      (mul (#:window:height ,w) 3) () () ())
                       (fill-window-with-char ,w #/#)))
        (verif (catenate (win-title ,w) " revient a sa position initiale")
               '(progn (clear-graph-env-father ,w)
                       (modify-window ,w tmp-left tmp-top 
                                      (div (#:window:width ,w) 3) 
                                      (div (#:window:height ,w) 3) () () ())
                       (fill-window-with-char ,w #/#)))))
        
; ---- les deplacements (les variables globales tierx,tiery sont utilisees)
(dmd test-move (w)
     `(let ((tmp-left (#:window:left ,w))
            (tmp-top (#:window:top ,w)))
        (verif (catenate (win-title ,w) 
                       " se deplace vers la gauche de 1/3 largeur d'ecran")
               '(modify-window ,w (sub (#:window:left ,w) tierx)
                               () () () () () ()))
        (verif (catenate (win-title ,w) 
                       " se deplace vers le haut de 1/3 haut.ecran")
               '(modify-window ,w () (sub (#:window:top ,w) tiery)
                               () () () () ()))
        (verif (catenate (win-title ,w) 
                       " se deplace vers la droite de 1/3 largeur ecran")
               '(modify-window ,w (add (#:window:left ,w) tierx) 
                               () () () () () ()))
        (verif (catenate (win-title ,w) " revient a sa position initiale")
               '(modify-window ,w tmp-left tmp-top () () () () ()))))
;----------------------------------------------------------------------------
; ---- pointage sur un caractere affiche
; ---- affiche le caractere "O" et demande a l'utilisateur de pointer sur ce 
; ---- caractere
(de pointage-car (win x y)
    (let* 
        ((okx ())
         (oky ())
         (down-count 10)
         (ev-win ())
         (lx ())
         (ly ())
         (tx (div (width-space) 2))
         (ty (div (height-space) 2))
         (xm (add x tx))
         (ym (add y ty)))
      (current-window win)
      (my-draw-cn x y 79)
      (bitmap-flush)
      ;      (print "Caractere en " x "," y "dans " (win-title win))
      (print "Pointez la souris sur ""O"" et clickez (10 essais)")
      (untilexit arret
                 (unless (neq (#:event:code (setq evt (read-event))) 
                              'down-event)
                         (setq ev-win (#:event:window evt))
                         (map-window win 
                                     (#:event:gx evt)
                                     (#:event:gy evt) 'lx 'ly)
                         (prin (win-title ev-win) ":") 
                         (setq dx (div (sub lx xm) tx)
                               dy (div (sub ly ym) ty))
                         (cond ((lt dx 0) (prin "plus a droite...")
                                (setq okx ()))
                               ((gt dx 0) (prin "plus a gauche...")
                                (setq okx ()))
                               (t (setq okx t)))
                         (cond ((lt dy 0) (prin "plus bas...")
                                (setq oky ()))
                               ((gt dy 0) (prin "plus haut...")
                                (setq oky ()))
                               (t (setq oky t)))
                         (terpri)
                         (when (and okx oky)
                               (ifn (eq win ev-win)
                                    (print "Vous etes sur le caractere "
                                           "dans la fenetre "
                                           (win-title ev-win)
                                           " et non dans "
                                           (win-title win) "!")
                                    (print "Vous l'avez eu"))
                               (my-draw-cn x y 42)
                               (bitmap-flush)
                               (exit arret))
                         (decr down-count)
                         (when (eq down-count 0)
                               (print "Vos 10 essais sont passes.")
                               (my-draw-cn x y 42)
                               (bitmap-flush)
                               (exit arret))))))

; ---- wait for a simple click (down-event followed by up-event) in the 
; ---- specified window <win>
(de wait-click-in-window (win)
    (let ((E (#:event:make))
          (ev-win ())
          (last-is-down-event ()))
      (prinflush "  Clickez (down/up) sur " 
                 (win-title win) " (""a"" pour arreter)")
      (terpri)
      (my-flush-event)
      (untilexit arret
                 (setq E (read-event))
;                 (print (#:event:code E) " "
;                        (win-title (#:event:window E)))
                 (selectq (#:event:code E)
                          (down-event
                           (prinflush "Vous etes dans " 
                                      (win-title (#:event:window E))))
                          (up-event
                           (if  (eq (setq ev-win (#:event:window E)) win)
                               (ifn last-is-down-event
                                    (prin ": un click plus bref, svp!")
                                 (terpri)
                                 (exit arret)))
                           (terpri))
                          (ascii-event
                           (if  (eq (#:event:detail E) #/a)
                               (exit arret))))
                 (setq last-is-down-event 
                       (eq 'down-event (#:event:code E))))))

; ---- quadrille la fenetre specifiee et indique la position de la souris
; ---- quand elle est dans cette fenetre selon le systeme de coordonnees
; ---- de cette fenetre (exit en tapant une touche au clavier)
(de test-mouse (win)
    (let ()
      (print "Deplacez la souris dans la fenetre " (win-title win) )
      (print "et clickez pour avoir ses coordonnees. ")
      (print "Appuyez sur n'importe quelle touche pour arreter.")
      (quad-window win)
      (my-flush-event)
      (untilexit arret
                 (read-mouse)
                 (when (not (zerop  #:mouse:state))
                       (setq window (find-window 
                                     (setq mx #:mouse:x)
                                     (setq my #:mouse:y)))
                       (if (neq window win)
                             (print "Vous n'etes pas dans " (win-title win)) 
                             (map-window win mx my 'lx 'ly)
                             (print "Souris en " (convert-to-scale lx ly))))
                 (if (eventp)
                     (when (eq (#:event:code (read-event))
                               'ascii-event)
                           (exit arret))))
      (teread)
      (my-flush-event)))

; ---- quadrille une window donnee en affichant les ordonnees et abcisses
(de quad-window (win)
   (with  ((current-window win))
          ;    (clear-graph-env)
          (let ((h (#:window:height win))
                (w (#:window:width win))
                (incx (add1 (mul (width-space) 2)))
                (incy (add1 (height-space)))
                (count 0))
            (print "Quadrillage de " (win-title win) 
                   " (toutes les unites vert. & horiz.)")
            (current-pattern 0)
            (current-line-style 0)
            (current-mode #:mode:set)
            (setq count 0)
            (for (i incy incy h)
                 (incr count)
                 (draw-line 0 i w i)
                 (my-draw-string 0 (add1 i) (string count)))
            (setq count 0)
            (for (i incx incx w)
                 (incr count)
                 (draw-line i 0 i h)
                 (my-draw-substring (add1 i)  0 (string count) 0 2))
            (bitmap-flush))))

; ---- quadrille une window donnee en affichant les ordonnees et abcisses
(de quad-window1 (win)
    (with  ((current-window win))
           ;    (clear-graph-env)
           (let ((h (#:window:height win))
                 (w (#:window:width win))
                 (incx (add1 (mul (width-space) 10)))
                 (incy (add1 (mul (height-space) 5))))
             (print "Quadrillage de " (win-title win) 
                    " (toutes les 5 unites vert. & horiz.)")
             (current-pattern 0)
             (current-line-style 0)
             (current-mode #:mode:set)
             (for (i incy incy h)
                  (draw-line 0 i w i))
             (for (i incx incx w)
                  (draw-line i 0 i h))
            (bitmap-flush))))

; ---- quadrille une window donnee en affichant les ordonnees et abcisses
(de fill-rectangle-window (win)
    (with ((current-window win))
          ;    (clear-graph-env)
          (let ((h (#:window:height win))
                (w (#:window:width win))
                (incx (add1 (mul (width-space) 4)))
                (incy (add1 (mul (height-space) 2))))
            (print "Quadrillage de " (win-title win) 
                   " avec fill-rectangle")
            (current-pattern 1)
            (current-mode #:mode:set)
            (for (i incy incy h)
                 (fill-rectangle 0 i w (height-space)))
            (for (i incx incx w)
                 (fill-rectangle i 0 (width-space) h))
            (bitmap-flush))))

; pour calculer les coordonnees d'un point dans une fenetre en utilisant le
; ---- systeme de coordonnees suivant  (coherence avec quad-window)
(de convert-to-scale (lx ly)
    (list (div lx (add1 (mul (width-space) 2)))
          (div ly (add1 (height-space)))))
;----------------------------------------------------------------------------
(add-feature 'testbvcomm)     
;----------------------------------------------------------------------------




