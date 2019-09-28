;;;
;;; La liste des tests automatiques du BV.
;;; Ce fichier est charge' par tbv.ll

;;; .Centre "$Header: /usr/cvs/lelisp/lltest/tbvdata.ll,v 1.1 2006/12/09 11:22:16 jullien Exp $"




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

  

                 (test-serie "Test de create-window")

(create-window 1 2 3 4 5 6 7 8)        (errsym create-window 1)
(progn (setq :win (create-window '#:image:rectangle:window
				 51 23 300 200 "psshh" 1 1)) ()) ()
(progn (:wait-expose :win)
       (null (windowp :win)))                 ()


                 (test-serie "Tests de bitblit")

;;;
;;; Sur RS6000, tout bitblit a l'inte'rieur dans une quelconque zone d'une
;;; fenetre dont le bord gauche sort de l'ecran est sans effet.
;;; De plus, on prend quelques precautions, car un window-bitmap est en
;;; theorie inexploitable si une partie est hors ecran, hors la theorie se
;;; verifie parfaitement sur Apollo.
(current-window :win)                         #.:win
;; Un met le bout gauche de la fenetre hors ecran.
(progn (setq :bi1 (window-bitmap :win)) ())            ()
(bmref :bi1 100 50)                                    0
(progn (draw-line 0 50 300 50)
       (bitmap-flush)
       (sleep 1)
       ()) ()
(bmref :bi1 100 50)                                    1
(progn (modify-window :win -10 () () () () () ()) (bitmap-flush) ())  ()
(progn (bitblit (window-bitmap :win) (window-bitmap :win) 30 0 30 20 200 150)
       (bitmap-flush)
       (sleep 1)
       ()) ()
(progn (modify-window :win 10 () () () () () ())
       (bitmap-flush)
       (sleep 1)
       (bitmap-sync)
       ())  ()
;; Si le test suivant echoue, c'est que le segment n'a pas bouge'.
(bmref :bi1 100 50)                                    0

;;;
;;; On verifie que le bitblit vers un bitmap avec window, est coherent avec
;;; le current-mode.
(progn
  (setq :bi1 (create-bitmap 16 16
			    #[#2*+ #2*IP #2*JP #2*KP #2*LFE #2*MJ #2*NJ #2*OJ
			    #2*60J #2*30J #2*18FE #2*0CFE #2*06P #2*VP #2*IP
			    #2*+ ]) ; fleche gauche.
	) ()) ()
;; On bitblite en or, mais dans un ordre different.
(:compare 25 25
	  '(with ((current-mode #:mode:or))
		 (bitblit (window-bitmap (current-window)) :bi1 0 0 0 0 25 25)
		 (bitblit (window-bitmap (current-window)) :bi1 3 5 0 0 25 25))
	  '(with ((current-mode #:mode:or))
		 (bitblit (window-bitmap (current-window)) :bi1 3 5 0 0 25 25)
		 (bitblit (window-bitmap (current-window)) :bi1 0 0 0 0 25 25))
	  ) t




                 (test-serie "Test de modify-window")

(find-window 100 100)                         #.:win
;; Ceci cassa sur X.
(progn (modify-window :win () () 0 0 () () ()) ())  ()
(progn (kill-window :win)
       (:wait-kill))                          ()




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


                 (test-serie "Test de vircolor")

(red-component)            (errwna red-component ())
(red-component 1 2 3)      (errwna red-component 3)
(blue-component)           (errwna blue-component ())
(blue-component 1 2 4)     (errwna blue-component 4)
(green-component)          (errwna green-component ())
(green-component 1 2 5)    (errwna green-component 5)

;;;
;;; Inutile de tester si red-component rend la meme chose sur white et red...

(type-of (setq :black (make-named-color "black"))) color
(type-of (setq :white (make-named-color "white"))) color
(type-of (setq :red (make-named-color "red")))     color
(red-component :black)                             0
(green-component :black)                           0
(blue-component :black)                            0
(neq (red-component :white) (green-component :white)) ()
(neq (red-component :white) (blue-component :white))  ()
(green-component :red)                             0
(blue-component :red)                              0
(null (and (memq :black (all-colors)) (memq :white (all-colors))))
                                                   ()

;; Ceci ne marchait pas en n/b car ca allouait du noir (non kill-able).
(progn (kill-color :red) ())                       ()
(type-of (setq :red (make-named-color "red")))     color





;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


        (test-serie "Test de virmenu")

(type-of (setq :me (create-menu 5)))             menu
(type-of (setq :me (create-menu ())))            menu
(progn (kill-menu :me) ())                      ()




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


        (test-serie "Test de virbit")
; doit etre apre`s vircolor

(progn (setq :b (create-bitmap 100 50))
       (bitmap-flush)
       (bmref :b 23 45)
       )                                           0
(null (send 'display :b))                          ()
(progn (bmset :b 23 45 1)
       (bmref :b 23 45))                           1
(progn (kill-bitmap :b)
       (send 'display :b))                         ()




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


        (test-serie "Test de virevent")

;; Juste pour s'assurer que les accesseurs sont bien exporte's.
(progn (setq :ev1 (#:event:make))
       (send 'x :ev1 36)
       (send 'x :ev1))                 36
;; Pour tester which-window, on cre'e une fene^tre juste a` l'endroit de la
;; souris.
(progn (setq :ev1 (read-mouse)
	     :x1 (#:event:gx :ev1)
	     :y1 (#:event:gy :ev1)
	     :wi1 (create-window 'window (sub :x1 100) (sub :y1 30)
				 134 45 "wi1" 1 1))
       ())                                        ()
(progn (:wait-expose :wi1)
       (which-window))                            #.:wi1





;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


        (test-serie "Test de virdraw")

(:compare 50 50
          '(draw-line 0 0 12 17)
          '(progn (draw-line 0 0 12 17)
		  (with ((current-window ())) (draw-line 0 0 50 50)))
	  )                                        t
(let ((y 50))
  (:compare 50 y
	    '(draw-substring 0 y "Amour" 0 1)
	    '(draw-cn 0 y #/A)))                   t
(:compare 10 10
	  '(progn (draw-point 3 6) (draw-point 7 2))
	  '(draw-polymarker 2 #[3 7] #[6 2]))      t
(:compare 10 10
	  '(draw-point 4 5)
	  '(with ((current-line-style 0)) (draw-line 4 5 4 5))
	  )                                        t
;; Attention : le draw-line est commutatif sur X11, mais pas draw-polyline.
(:compare 10 10
	  '(progn (draw-line 1 4 2 9) (draw-line 2 9 7 3))
	  '(draw-polyline 3 #[1 2 7] #[4 9 3]))    t
;; (:compare 15 25 est insuffisant avec le WM de decstation)
(:compare 20 25
	  '(progn (draw-line 0 0 0 20) (draw-line 0 20 10 20)
		  (draw-line 10 20 10 0) (draw-line 10 0 0 0))
	  '(draw-rectangle 0 0 10 20))             t
;; Un draw-rectangle de hauteur 0 ne fait rien.
;; Un draw-rectangle de hauteur 1 a une hauteur de 2 pixels, etc..
(:compare 10 10
	  '(draw-rectangle 3 4 5 1)
	  '(with ((current-line-style 0))
		 (draw-line 3 4 8 4) (draw-line 3 5 8 5))
	  )                                        t
;; Deux exemples sur les rapports pervers entre les fonctions graphiques.
(:compare 10 10
	  '(with ((current-line-style 0)) (draw-line 3 4 8 4))
	  '(fill-rectangle 3 4 6 1))               t
(:compare 10 10
	  '(draw-rectangle 3 4 5 1)
	  '(fill-rectangle 3 4 6 2))               t
(:compare 20 20
	  '(fill-rectangle 3 4 5 6)
	  '(fill-area 4 #[3 8 8 3] #[4 4 10 10]))  t
(:compare 20 20
	  '(draw-ellipse 5 5 5 5)
	  '(draw-circle 5 5 5))                    t
(:compare 60 60
	  '(fill-ellipse 25 25 25 25)
	  '(fill-circle 25 25 25))                 t
(:compare 60 60
	  '(with ((current-mode #:mode:xor))
		 (repeat 2 (draw-point 20 20))
		 (draw-point 30 30))
	  '(draw-point 30 30))                     t
(:compare 50 50
          '(progn (fill-rectangle 3 3 40 40)
		  (with ((current-mode #:mode:not))
			(draw-line 12 4 28 34)))
          '(progn (fill-rectangle 3 3 40 40)
		  (with ((current-mode #:mode:xor))
			(draw-line 12 4 28 34)))
	  )                                        t
;; Marche mal sur openwindow n/b sun4.
(:compare 50 50
	  '(with ((current-mode #:mode:or))
		 (draw-substring 0 30 "tutu" 0 4)
		 (draw-substring 0 30 "pouet" 0 5)
		 )
	  '(with ((current-mode #:mode:or))
		 (draw-substring 0 30 "pouet" 0 5)
		 (draw-substring 0 30 "tutu" 0 4)
		 )
	  )                                        t
(:compare 50 50
	  '(with ((current-mode #:mode:xor))
		 (draw-substring 0 30 "tutu" 0 4)
		 (draw-substring 0 30 "pouet" 0 5)
		 )
	  '(with ((current-mode #:mode:xor))
		 (draw-substring 0 30 "pouet" 0 5)
		 (draw-substring 0 30 "tutu" 0 4)
		 )
	  )                                        t





;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


        (test-serie "Test de virgraph")

;; Le current-clip sort en segmentation fault sur PC/Unix
(progn (current-clip)
       (setq :x #:clip:x :y #:clip:y :w #:clip:w :h #:clip:h)
       (current-clip 0 20 50 60)
       (current-clip)
       ())                                         ()
#:clip:x                                           0
#:clip:y                                           20
#:clip:w                                           50
#:clip:h                                           60
(progn (current-clip :x :y :w :h) ())              ()
(progn (current-clip) ())                          ()
#:clip:x                                           #.:x
#:clip:y                                           #.:y
#:clip:w                                           #.:w
#:clip:h                                           #.:h

;;;
;;; Elle doit e^tre appele'e avec 0 ou 4 e'le'ments, donc jamais dans un
;;; with.
(current-clip 5)                (#:display:err-current-clip current-clip 1)
(current-clip 1 2 3 4 5)        (#:display:err-current-clip current-clip 5)


;; On fabrique un curseur avec deux bitmaps 30*30. Sur certaines machines
;; il vaut mieux ne pas de'passer 32*32
(progn (setq :cmax (add1 (cursor-max))
	     :bi1 (create-bitmap 30 30)
	     :bi2 (create-bitmap 30 30)
	     )
       (make-cursor :bi1 :bi2 25 20)
       ())                                         ()
(cursor-max)                                       #.:cmax
(load-font "houbahop")     (#:display:err-not-a-font-name load-font "houbahop")





        (test-serie "Test de bitmap-save/restore")

;; Ce qui est autorise' et ce qui ne l'est pas.
(bitmap-save 5)                                    (errnla bitmap-save 5)
(bitmap-save ())                                   ()
(bitmap-restore 5)                                 (errnla bitmap-restore 5)
(bitmap-restore ())                                ()

;; On regarde si le bitmap-save/restore conserve l'information.
(setq :cd (current-display)
      :ex (send 'extend :cd)
      :nw (send 'windows (current-display))
      :dd (send 'display-depth (current-display))
      :x1 (send 'x :wi1)
      :y1 (send 'y :wi1)
      :evm (event-mode)
      :fmax (font-max))                            #.(font-max)
(setq :lmax (line-style-max))                      #.(line-style-max)
(setq :pmax (pattern-max))                         #.(pattern-max)
(progn (setq :a (bitmap-save)) ())                 ()
(current-display)                                  ()
(current-window)                                   ()
(progn (bitmap-restore :a) ())                     ()
;; Le retour de la fene^tre...
(progn (:wait-expose :wi1) ())                     ()

;; On ve'rifie que le monde n'a pas trop change'.
(current-display)                                  #.:cd
(cursor-max)                                       #.:cmax
(font-max)                                         #.:fmax
(line-style-max)                                   #.:lmax
(pattern-max)                                      #.:pmax
(event-mode)                                       #.:evm
(send 'windows (current-display))                  #.:nw
(send 'display-depth (current-display))            #.:dd
(and :evm (not (fixp :evm)))                       ()
(null (windowp :wi1))                              ()
;; Par contre le extend du display doit avoir change'
(eq :ex (send 'extend (current-display)))          ()






;;;;;;;;;;;;;;;;;;;;;;; NOUVEAUTES DU BV....



        (test-serie "Test des nouveaute's de virwindow")


(current-window 1 2)                   (errwna current-window 2)
(move-window 1 2 3)                    (#:display:errnotawindow move-window 1)
(window-events-list 1)    (#:display:errnotawindow window-events-list 1)
(progn (window-events-list :wi1) ())   ()
(with ((window-title :wi1 "tacapouet"))
      (window-title :wi1))             "tacapouet"
(symbolp (window-state :wi1))          t
(with ((window-state :wi1 'iconify))
      (window-state :wi1))             iconify
(with ((window-background :wi1 :red))
      (window-background :wi1))        #.:red
(with ((window-border :wi1 8))
      (window-border :wi1))            8
(window-clear-region :wi1 1 2 3 4)     #.:wi1
(typep (window-graph-env :wi1) 'graph-env)
                                       t
(progn (window-change-attributes :wi1 () ()) ())
                                       ()



        (test-serie "Test des nouveaute's de virdraw")

(:compare 20 20
	  '(draw-ellipse 5 10 3 7)
	  '(draw-arc 5 10 6 14 0 360))             t
(:compare 20 20
	  '(fill-ellipse 5 10 3 7)
	  '(fill-arc 5 10 6 14 0 360))             t
;; Attention : le draw-line est commutatif sur X11, mais pas draw-segments.
(:compare 10 10
	  '(progn (draw-line 2 9 7 3) (draw-line 7 3 8 4))
	  '(draw-segments 2 #[2 7] #[9 3] #[7 8] #[3 4]))
                                                   t
(:compare 10 10
	  '(progn (draw-rectangle 2 9 11 3) (draw-rectangle 7 3 8 4))
	  '(draw-rectangles 2 #[2 7] #[9 3] #[11 8] #[3 4]))
                                                   t
(:compare 10 10
	  '(progn (fill-rectangle 2 9 7 3) (fill-rectangle 7 5 8 4))
	  '(fill-rectangles 2 #[2 7] #[9 5] #[7 8] #[3 4]))
                                                   t
;; On teste que ces fonctions acceptent aussi bien des vecteurs que des entiers
;; en agument.
(:compare 20 20
	  '(draw-rectangles 2 1 #[9 5] 7 #[3 4])
	  '(draw-rectangles 2 #[1 1] #[9 5] #[7 7] #[3 4]))
                                                   t
(:compare 10 10
	  '(draw-rectangles 2 #[2 7] 1 #[7 8] #[9 9])
	  '(draw-rectangles 2 #[2 7] #[1 1] #[7 8] 9))
                                                   t
(:compare 15 15
	  '(fill-rectangles 2 1 #[9 5] 7 #[3 4])
	  '(fill-rectangles 2 #[1 1] #[9 5] #[7 7] #[3 4]))
                                                   t
(:compare 10 10
	  '(fill-rectangles 2 #[2 7] 8 #[7 8] #[2 2])
	  '(fill-rectangles 2 #[2 7] #[8 8] #[7 8] 2))
                                                   t




        (test-serie "Test des nouveaute's de virinit")

(current-display 'a 'b)   (errwna current-display 2)
(bitmap-restore '(a))     (#:display:errnotadisplay bitmap-restore a)
(display-store-selection 1 "dfsaf")
                          (#:display:errnotadisplay display-store-selection 1)
(display-store-selection (current-display) 2)
                          (errnsa display-store-selection 2)
(progn (display-store-selection (current-display) "bonjour")
       (display-get-selection (current-display)))
                          "bonjour"
(lt (display-depth (current-display)) 0)
                          ()
(type-of (root-window))   #:image:rectangle:window

;; Ceci cassait vilainement avec l'ancien BV.
(with ((current-window ()))
      (bitmap-refresh)
      ())                               ()



        (test-serie "Test des nouveaute's de vircolor")

(make-color 'a 2 3)                     (errnia make-color a)
(make-mutable-color 1 'b 3)             (errnia make-mutable-color b)
(make-named-color 6)                    (errnsa make-named-color 6)
(kill-color 16)                         (#:display:errnotacolor kill-color 16)

(name-to-rgb "black")                   #[0 0 0]
(< (vref (name-to-rgb "white") 0) 30000)                    ()
(< (vref (name-to-rgb "white") 1) 30000)                    ()
(< (vref (name-to-rgb "white") 2) 30000)                    ()



        (test-serie "Test des nouveaute's de virbit")

;; On fait une sortie de bornes, mais toujours dans la memoire du bitmap
;; sinon ca peut peter tres fort.
(bmset :bi1 80 162 1)                     (erroob bmset 80)
(bmref :bi1 10 155)                       (erroob bmref 155)

;; Tests de subst-colors.
(subst-colors 1 ())             (#:display:errnotabitmap subst-colors 1)
(subst-colors :bi1 '(a b))      (errnla subst-colors a)
(subst-colors :bi1 '((a . b)))  (#:display:errnotacolor subst-colors a)

;; create-bitmap peut maintenant e^tre effectue' avant le bitprologue.
(progn (print "Warning message must occur now...")
       (type-of (setq :bi3 (create-bitmap 2 2 #[#*40 #*00]))))    bitmap
(send 'bits :bi3)                                         #[#*40 #*00]
(bmref :bi3 0 0)                                          0
(bmref :bi3 0 1)                                          0
(bmref :bi3 1 0)                                          1
(bmref :bi3 1 1)                                          0
(typep (send 'extend :bi3) 'vector)                       ()
(bitmap-prologue (current-display) :bi3)
                            (errbpa bitmap-prologue #.:bi3)
(progn (setq :bi5 ())
       (setq :bs1 (bitmap-save))
       ())                                                ()
;;; A partir d'ici : plus de display.
(type-of (setq :bi4 (create-bitmap 2 2 #[#*40 #*00])))    bitmap
(type-of (send 'extend :bi4))                             vector
;; bmset n'est pas prote'ge' contre ca.
;(bmset :bi4 1 1 1)          (#:display:no-current-display bmset ())
(bitmap-prologue (current-display) :bi4)
                            (#:display:no-current-display bitmap-prologue ())
(progn (bitmap-restore :bs1) ())                          ()
(progn (:wait-expose :wi1)
       ;; A partir d'ici : il y a nouveau un display.
       ())                                                ()
(progn (setq :bi5 (bitmap-prologue (current-display) :bi4))
       (type-of :bi5))                                    bitmap
(typep (send 'extend :bi5) 'vector)                       ()
(bmref :bi5 0 0)                                          0
(bmref :bi5 0 1)                                          0
(bmref :bi5 1 0)                                          1
(bmref :bi5 1 1)                                          0






        (test-serie "Test des nouveaute's de virgraph")

(font-name 2001)      (#:display:errnotafont font-name 2001)
(current-foreground 3)
                      (#:display:errnotacolor current-foreground 3)
(current-graph-env 5) (#:display:err-not-a-valid-graph-env current-graph-env 5)
(current-graph-env 'a 'b) (errwna current-graph-env 2)
(current-font 1789)   (#:display:errnotafont current-font 1789)
(make-graph-env 1 2 3 4 5 6 7)
                      (#:display:errnotadisplay make-graph-env 1)
(make-cursor 1 2 3 4) (#:display:errnotabitmap make-cursor 1)
(move-cursor 3 'a)    (errnia move-cursor a)
(make-line-style 4 'b)
                      (errnia make-line-style b)
(progn (setq :nls (line-style-max))
       (type-of (setq :ls (make-line-style 1 2))))
                                       fix
(sub1 (line-style-max))                #.:nls
;(progn (setq :ge (make-graph-env (current-display) (current-font)
;				 (current-line-style) (current-pattern)
;				 (current-mode) (current-foreground)
;				 (current-background)))
;       ())            ()
;(graph-env-font :ge)                   #.(current-font)
;(graph-env-mode :ge)                   #.(current-mode)
;(graph-env-pattern :ge)                #.(current-pattern)
;(with ((graph-env-line-style :ge :ls))
;      (graph-env-line-style :ge))      #.:ls
;(graph-env-line-style :ge))            #.(current-line-style)
;(graph-env-foreground :ge)             #.(current-foreground)
;(graph-env-background :ge)             #.(current-background)
;(graph-env-set-clip :ge 1 2 3 4)       t
;(graph-env-set-clips :ge 2 #[1 2] #[3 4] #[5 6] #[7 8])
;                                       t
;(progn (graph-env-change-values :ge () () () :ls () ())
;       (graph-env-line-style :ge))     #.:ls
;(graph-env-subwindow-mode :ge 1)       t
;(kill-graph-env :ge)                   t

(type-of (setq :fn (display-get-font-names (current-display) 5)))   cons
(display-get-font-names (current-display) 5 "*")                    #.:fn
(type-of (setq :nf1 (font-name (standard-roman-font))))             string
(display-get-font-names (current-display) 500 :nf1)        #.(ncons :nf1)
(not (member :nf1 (display-get-font-names (current-display)
					  500 (catenate :nf1 "*"))))
                                                                    ()

(type-of (setq :nf2 (font-name (standard-bold-font))))              string
(progn (display-get-font-info (current-display) :nf2) ())           ()
(progn (setq :fi1 (#:font-info:make))
       (display-get-font-info (current-display) :nf2 :fi1) ())      ()
;; Les curseurs nomme's.
(type-of (setq :cu1 (make-named-cursor "pirate")))                  fix
(with ((current-window :wi1))
      (current-cursor :cu1))                                        #.:cu1
(type-of (setq :cu2 (cursor-max)))                                  fix
;; On ve'rifie qu'ils ne sont pas recre'e's inutilement.
(make-named-cursor "pirate")                                        #.:cu2
(make-named-cursor "tacapouet")
            (#:display:err-not-a-cursor-name make-named-cursor "tacapouet")
(cursor-name :cu1)                                                  "pirate"
(cursor-name 0)                                                     ()
(current-cursor 0 0)  (errwna current-cursor 2)
(current-cursor 1998) (#:display:err-not-a-valid-cursor current-cursor 1998)
(cursor-name 1999)    (#:display:err-not-a-valid-cursor cursor-name 1999)
;; On ve'rifie que le bitmap-save pre'serve les curseurs nomme's.
(progn (setq :cm1 (cursor-max))
       (bitmap-restore (bitmap-save))
       (:wait-expose :wi1)
       ())                                                          ()
(cursor-max)                                                        #.:cm1
(make-named-cursor "pirate")                                        #.:cu1





(allow-event (current-display) 'move-event)                 move-event
(allow-event (current-display) 'functionkey-event)          functionkey-event
(allowed-event-p (current-display) 'functionkey-event)      functionkey-event
(disallow-event (current-display) 'move-event)              move-event
(allowed-event-p (current-display) 'move-event)             ()

;; tester le debordement dans make-cursor.



;;;
;;; On laisse l'endroit aussi propre qu'on aurait aime' le trouver en arrivant.

(progn (kill-window :wi1)
       (:wait-kill))                    ()
