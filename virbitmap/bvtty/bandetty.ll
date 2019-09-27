; .Entete "virbitmap/bandetty.ll" "" "Fene^trage sur terminal virtuel"
; 
; .Section "Le multifene^trage sur le terminal virtuel"
; .SSection "Description du bitmap attache' au terminal virtuel"
; $Header: /usr/cvs/lelisp/virbitmap/bvtty/bandetty.ll,v 1.1 2006/12/09 12:23:02 jullien Exp $

(defvar #:sys-package:bitmap '#:bitmap:bandetty)
(defvar #:sys-package:colon #:sys-package:bitmap)

(defmessage ERRNOTIMPLEMENTED (french "Pas encore imple'mente'")
                              (english "Not yet implemented"))

(unless (boundp ':main-tty)
	
	(defvar :xmax (sub1 (tyxmax)))
	(defvar :ymax (tyymax))
	
	; Le terminal sous-jacent
	(defvar :main-tty 'tty))

(de :bitprologue ()
    (tyflush)
    (typrologue)
    (setq :screen
	  (makestring (mul (add1 (bitxmax)) (add1 (bitymax))) #\sp))
    (setq :oscreen (copy :screen))
    (setq :blankscreen (copy :screen))
    (setq :main-tty #:sys-package:tty)
    (setq #:graph-env:main-graph-env (#:graph-env:make))
    (setq #:graph-env:current-graph-env #:graph-env:main-graph-env)
    (#:bitmap:bitprologue))

(de :bitepilogue ()
    (tyflush)
    (#:bitmap:bitepilogue)
    (setq #:sys-package:tty :main-tty)
    (tyepilogue)
    (tyflush))

(de :bitmap-refresh ()
    (:full-redisplay))

(de :bitmap-flush ())

(dmd with-main-tty body
     `(progn (tyflush)
	     (let ((#:sys-package:tty :main-tty))
	       (protect (progn ,@body)
			(tyflush)))))

; .Section "Implantation du fene^trage virtuel sur terminal virtuel"

; .SSection "Structure des fene^tres"
; Le champ extend contient la me'moire d'e'cran de la fene^tre.
; La fonction de cre'ation cre'e cet e'cran et affiche la fene^tre

(de :create-window (w)
    (#:window:width w (add1 (bitxmax)))
    (#:window:left w 0)
    (#:window:extend
     w 
     (:make-framed-screen (#:window:width w) (#:window:height w)
			  (#:window:title w) (#:window:hilited w)))
    (#:window:graph-env w (#:graph-env:make))
    (:redisplay t 0 0 0 0))

(de :create-subwindow (w)
    (error ':create-subwindow 'ERRNOTIMPLEMENTED ()))

(de :make-framed-screen (wi he ti hi)
    (let ((s (makestring (mul (add wi 2) (add he 2)) #/.)))
         (bltscreen s :blankscreen 
             (add wi 2) (add he 2)
             (add1 (bitxmax)) (add1 (bitymax))
             1 1
             0 0 
             wi he)
         (unless (= hi 0)
                 (fillstring s 0 #/= (add 2 wi)))
         (bltstring s 1 ti 0 (min (slen ti) wi))
         s))

; .SSection "Re'alisation des ope'rations primitives sur les fene^tres"

(de #:image:rectangle:window:current-window (win))

(de #:image:rectangle:window:uncurrent-window (win)
    (setq #:graph-env:current-graph-env #:graph-env:main-graph-env))

(de #:image:rectangle:window:modify-window (win le to wi he ti hi vi) ;
    (when le
          (setq le 0)
          (#:window:left win le))
    (when to 
          (#:window:top win to))
    (when (or wi he)
          (unless wi (setq wi (add1 (bitxmax))))
          (unless he (setq he (#:window:height win)))
          (let ((ns
		 (:make-framed-screen
		  wi he (#:window:title win) (#:window:hilited win))))
	    (bltscreen ns (#:window:extend win)
		       (add 2 wi) (add 2 he)
		       (add 2 (#:window:width win))
		       (add 2 (#:window:height win))
		       1 1 
		       1 1
		       (min wi (#:window:width win))
		       (min he (#:window:height win)))
	    (#:window:extend win ns)
	    (#:window:width win wi)
	    (#:window:height win he)))
    (when (or ti hi)
          (when ti (#:window:title win ti))
          (when hi (#:window:hilited win hi))
          (fillstring (#:window:extend win) 
		      0
		      (if (= (#:window:hilited win) 0) #/. #/=)
		      (add 2 (#:window:width win)))
          (bltstring (#:window:extend win) 1
		     (#:window:title win) 0
		     (#:window:width win)))
    (when vi
          (#:window:visible win vi))
    (:redisplay t 0 0 0 0)
    win)

(de #:image:rectangle:window:kill-window (win)
    (:redisplay t 0 0 0 0))

(de #:image:rectangle:window:pop-window (win)
    (:redisplay t 0 0 0 0))

(de #:image:rectangle:window:move-behind-window (win1 win2)
    (:redisplay t 0 0 0 0))

(de #:image:rectangle:window:current-keyboard-focus-window (win))

(de #:image:rectangle:window:uncurrent-keyboard-focus-window (win))

(de :find-window (x y)
    (error ':find-window 'ERRNOTIMPLEMENTED ()))

(unless (boundp ':lx)
	(defvar :lx)
	(defvar :ly))

(de #:image:rectangle:window:map-window (:win :x :y :lx :ly)
    (set :lx (sub :x (#:window:left :win)))
    (set :ly (sub :y (#:window:top :win))))

; Les souris (hummm le clavier en fait..)

(unless (boundp ':reread)
	(defvar :reread ()))

(de :event-mode (mode))

(de :eventp ()
    (or :reread
        (let ((cn (with-main-tty (tys))))
          (when cn
                (setq :reread (ncons cn))))))

(de :read-event (event)
    (make-ascii-event
     event
     (if :reread (nextl :reread) (with-main-tty (tyi)))))

(de :peek-event (event)
    (make-ascii-event
     event
     (if :reread (car :reread)
       (car (setq :reread (ncons (with-main-tty (tyi))))))))

(de :flush-event ()
    (setq :reread ()))

(de :add-event (event))

(de :grab-event (window)
    (error ':grab-event 'ERRNOTIMPLEMENTED window))

(de :ungrab-event ()
    (error ':ungrab-event 'ERRNOTIMPLEMENTED ()))

(de :itsoft-event (event)
    (error ':itsoft-event 'ERRNOTIMPLEMENTED event))

(de :read-mouse (event)
    (#:event:x event 0)
    (#:event:y event 0)
    (#:event:gx event 0)
    (#:event:gy event 0)
    (#:event:window event ())
    (#:event:detail event 0))

(de make-ascii-event (event cn)
    (#:event:detail event cn)
    (#:event:code event 'ascii-event)
    (#:event:window event (current-keyboard-focus-window))
    (#:event:x event 0)
    (#:event:y event 0)
    (#:event:gx event 0)
    (#:event:gy event 0)
    event)

; .Section "La me'canique de gestion de l'e'cran"
; C'est ici qu'est re'alise' le de'coupage de l'e'cran en fene^tres.

; La gestion de l'e'cran ne'cessite l'emploi de plusieurs chai^nes de
; caracte`res de'crivant la me'moire d'e'cran.

(unless (boundp ':blankscreen)

	; me'moire d'e'cran
	(defvar :screen)

	; la seconde me'moire pour le redisplayscreen
	(defvar :oscreen)

	; un blanc pour effacer vite fait
	(defvar :blankscreen)

	(defvar :flag t)
	(defvar :delayed ()))

(dmd :normalizeq (var mini maxi)
    `(progn
           (setq ,var (min ,var ,maxi))
           (setq ,var (max ,var ,mini))))

(de :delayed-redisplay l
    (newl :delayed l))

(de :flush-delayed-redisplay (w le to wi he)
    (ifn :delayed
         (:do-redisplay w le to wi he)
         (setq :delayed (nreverse :delayed))
         (while :delayed
                (apply ':do-redisplay (nextl :delayed)))
         (unless (eq w t)
                 (:do-redisplay w le to wi he))))

(de :redisplay (w le to wi he)
    (ifn  :flag
          (:delayed-redisplay w le to wi he)
          (:flush-delayed-redisplay w le to wi he)))

(de :do-redisplay (w le to wi he)
    (let ((:flag ()))
         (tyflush)
         (let (rmargin)
              (with ((outchan t))
                    (setq rmargin (rmargin))
                    (rmargin (add1 (slen (outbuf)))))
              (protect
                      (let ((#:sys-package:tty :main-tty))
                           (cond 
                                 ((eq w t)
                                  (bltscreen
                                      :screen :blankscreen
                                      (add1 (bitxmax)) (add1 (bitymax)))
                                  (mapc ':redisplay1 #:window:all-windows)
                                  (redisplayscreen :screen :oscreen
                                      (add1 (bitxmax)) (add1 (bitymax))))
                                 ((<> (#:window:visible w) 0)
                                  (mapc (lambda (w)
                                                (:redisplay1-mini w le to
                                                    wi he))
                                        (memq w #:window:all-windows))
                                  (:normalizeq le 0 (add1 (bitxmax)))
                                  (:normalizeq wi 0 (add1 (bitxmax)))
                                  (:normalizeq to 0 (add1 (bitymax)))
                                  (:normalizeq he 0 (add1 (bitymax)))
                                  (redisplayscreen :screen :oscreen 
                                      (add1 (bitxmax)) (add1 (bitymax))
                                      (add1 (bitxmax)) (add1 (bitymax))
                                      le to
                                      le to
                                      wi he))
                                 (t ()))
                           (tyflush))
                      (with ((outchan t))
                            (rmargin rmargin))))))

(de :redisplay1 (win)
    (unless (= (#:window:visible win) 0)
            (bltscreen :screen (#:window:extend win)
                (add1 (bitxmax)) (add1 (bitymax))
                (add 2 (#:window:width win)) (add 2 (#:window:height win))
                (sub1 (#:window:left win)) (sub1 (#:window:top win))
                0 0
                (add 2 (#:window:width win)) (add 2 (#:window:height win)))))

(de :redisplay1-mini (win le to wi he)
    (unless (= (#:window:visible win) 0)
            (bltscreen :screen (#:window:extend win)
                (add1 (bitxmax)) (add1 (bitymax))
                (add 2 (#:window:width win)) (add 2 (#:window:height win))
                le to
                (add1 (sub le (#:window:left win)))
                (add1 (sub to (#:window:top win)))
                wi he)))

(de :full-redisplay ()
    (let ((:flag ())) (tyflush))
    (with-main-tty (tycls))
    (bltscreen :oscreen :blankscreen (bitxmax) (bitymax))
    (:redisplay t 0 0 0 0))

;  Pour contourner le bug du redisplay non re'entrant

(de #:tty:window:redisplayscreen l
    (let ((:flag ()))
         (apply '#:tty:redisplayscreen l))
    (:redisplay t 0 0 0 0))

(de #:tty:window:tycls ()
    (for (i 0 1 (tyymax)) (tycursor 0 i) (tycleol))
    (tycursor 0 0))

(de #:tty:window:tycleol ()
    (let ((cw (eq (current-window) (car (last #:window:all-windows))))
          (not-all-white
           (tag not-all-white
                (for (i (add (mul (add1 (#:image:rectangle:window:tty:cy (current-window)))
                                  (add 2 (#:window:width (current-window))))
                             (add1 (#:image:rectangle:window:tty:cx (current-window)))) 1
                             (sub  (mul (add 2
                                             (#:image:rectangle:window:tty:cy (current-window)))
                                        (add 2
                                             (#:window:width (current-window))))
                                   2))
                     (when (neq #\sp
                                (sref (#:window:extend (current-window)) i)
                                )
                           (exit not-all-white t)))
                ())))
      (bltscreen
       (#:window:extend (current-window))
       :blankscreen
       (add 2 (#:window:width (current-window)))
       (add 2 (#:window:height (current-window)))
       (add1 (bitxmax)) 1
       (add1 (#:image:rectangle:window:tty:cx (current-window)))
       (add1 (#:image:rectangle:window:tty:cy (current-window))) 0 0
       (#:window:width (current-window)) 1)
      (ifn cw
           (:redisplay t 0 0 0 0)
           (when not-all-white
                 (with-main-tty
                  (tycursor
                   (add (#:window:left (current-window))
                        (#:image:rectangle:window:tty:cx (current-window)))
                   (add (#:window:top (current-window))
                        (#:image:rectangle:window:tty:cy (current-window))))
                  (tycleol))
                 (bltscreen
                  :screen
                  :blankscreen
                  (add1 (bitxmax))
                  (add1 (bitymax)))
                 (mapc ':redisplay1
                       (memq (current-window) #:window:all-windows))
                 (bltscreen
                  :oscreen
                  :screen
                  (add1 (bitxmax))
                  (add1 (bitymax)))))))

(de #:tty:window:tynewline ()
    (when #:tty:window:page-mode (tycleol))
    (#:image:rectangle:window:tty:cx (current-window) 0)
    (#:image:rectangle:window:tty:cy
     (current-window)
     (add (#:image:rectangle:window:tty:cy (current-window)) (height-space)))
    (when (gt (sub (add (#:image:rectangle:window:tty:cy (current-window)) (height-space))
                   (y-base-space))
              (#:window:height (current-window)))
          (if #:tty:window:page-mode
              (tycls)
            (bltscreen
             (#:window:extend (current-window))
             (#:window:extend (current-window))
             (add 2 (#:window:width (current-window)))
             (add 2 (#:window:height (current-window)))
             (add 2 (#:window:width (current-window)))
             (add 2 (#:window:height (current-window)))
             1 1
             1 2
             (#:window:width (current-window))
             (sub1 (#:window:height (current-window))))
            (bltscreen 
             (#:window:extend (current-window))
             :blankscreen
             (add 2 (#:window:width (current-window)))
             (add 2 (#:window:height (current-window)))
             (add1 (bitxmax)) 1
             1 (#:window:height (current-window))
             0 0
             (#:window:width (current-window)) 1)
            (if (eq (current-window) (car (last #:window:all-windows)))
                (let ((#:sys-package:tty #:bitmap:bandetty:main-tty))
                  (tycursor
                   0
                   (#:window:top (current-window)))
                  (tydelln)
                  (tycursor
                   0
                   (sub1 (add (#:window:top (current-window))
                              (#:window:height (current-window)))))
                  (tyinsln)
                  (tyflush)
                  (bltscreen :screen :blankscreen (add1 (bitxmax)) (add1 (bitymax)))
                  (mapc ':redisplay1 (memq (current-window) #:window:all-windows))
                  (bltscreen :oscreen :screen (add1 (bitxmax)) (add1 (bitymax))))
              (:redisplay t 0 0 0 0))
            (#:image:rectangle:window:tty:cy
             (current-window)
             (sub1 (#:image:rectangle:window:tty:cy (current-window))))
            )))

; Pour le tyi


(de #:tty:window:tybeep ()
    (with-main-tty (tybeep)))

; les icones

(de :create-bitmap (a) a)
(de :create-window-bitmap (w a) a)
(de :get-bit-line (b i l))
(de :set-bit-line (b i l))
(de :kill-bitmap (b))
(de :bmset (b x y bi))
(de :bmref (b x y))
(de :bitblit (a b c d e f g h))

; .Section "Les environnements graphiques sur virtty"
; L'environnement graphique minimum comporte uniquement les primitives 
; d'affichage de texte. Les mesures de texte sont en chasse fixe.

(defvar #:sys-package:colon 'graph-env)

; .SSection "Affichage de texte"

(de :clear-graph-env (ge)
    (bltscreen (#:window:extend #:window:current-window)
      #:bitmap:bandetty:blankscreen 
      (add 2 (#:window:width #:window:current-window))
      (add 2 (#:window:height #:window:current-window))
      (add1 (bitxmax)) (add1 (bitymax))
      1 1
      0 0 
      (#:window:width #:window:current-window)
      (#:window:height #:window:current-window))
    (#:bitmap:bandetty:redisplay t 0 0 0 0))

(de :draw-cursor (ge x y st)
    (when (and #:bitmap:bandetty:flag
               (neqn 0 (#:window:visible #:window:current-window))
               (tyshowcursor))
          (tyflush)
          (let ((#:sys-package:tty #:bitmap:bandetty:main-tty))
               (tyshowcursor st)
               (when st
                     (tycursor
                         (add x (#:window:left (current-window)))
                         (add y (#:window:top (current-window)))))
               (tyflush))))

(de :draw-substring (ge x y s st le)
    (when #:window:current-window
          (setq x (max x 0))
          (setq y (max y 0))
          (setq le (min (sub (#:window:width (current-window)) x) le))
          (let ((xdeb (add (add1 x)
                           (mul
                               (add 2
                                    (#:window:width #:window:current-window))
                               (add1 y)))))
               (bltstring (#:window:extend #:window:current-window) 
                   xdeb
                   s st le)
               (when (eq (:font ge) 1)
                     (setq s (#:window:extend #:window:current-window))
                     (for (i xdeb
                             1 
                             (sub1 (add xdeb (min le (slen s)))))
                          (sset s i (logor (sref s i) #$80)))))
          (#:bitmap:bandetty:redisplay #:window:current-window 
           (add x (#:window:left #:window:current-window))
           (add y (#:window:top #:window:current-window))
           le 1)))

; .SSection "Mesure de texte"

(de :height-substring (ge s st le)    1)
(de :width-substring  (ge s st le)    (max 0 (min le (sub (slen s) st))))
(de :x-base-substring (ge s st le)    0)
(de :y-base-substring (ge s st le)    0)
(de :x-inc-substring  (ge s st le)    (:width-substring ge s st le))
(de :y-inc-substring  (ge s st le)    0)

(de :current-font (ge font))

(de :font-max (ge) 1)

(de :load-font (ge font)
    (error ':load-font 'erroob font))

; le vrai graphique

(de :current-clip (ge x y w h)
    (error ':current-clip 'ERRNOTIMPLEMENTED (list x y w h)))

(de :current-line-style (ge line-style))

(de :line-style-max (ge)
    0)

(de :current-pattern (ge pattern))

(de :pattern-max (ge)
    0)

(de :current-mode (ge mode))

(de :draw-polyline (ge n vx vy))

(de :draw-polymarker (ge n vx vy))

(de :fill-area (ge n vx vy))

(de :draw-ellipse (ge x y rx ry))

(de :fill-ellipse (ge x y rx ry))
