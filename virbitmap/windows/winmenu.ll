;;;; .EnTete	"Le-Lisp version 15.2x" " " "winmenu.ll"
;;;; .Date	"10/19/94"
;;;; .EnPied	"winmenu.ll"
;;;; .Version	"1.00"
;;;; .Auteur 	"C. Jullien"
;;;; .Annexe I	""

(eval-when (eval)
	   (unless (getdef '#:display:windows:winbitmap)
		   (libload #u"win/winstruct")))


(defvar #:sys-package:colon '#:display:windows)

(unless (boundp ':repaint-events)
        (defvar :repaint-events ()))


;;; To add
;;; Search for ressources 
;;; menuforeground, menubackground, menutitlefont, menufont,selectcolor


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;; les menus lisp ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun menuwindow (le to wi he ti)
   (let ((res (#:image:rectangle:window:menu-window:make)))
        (#:window:left res le)
        (#:window:top res to)
        (#:window:width res wi)
        (#:window:height res he)
        (#:window:title res ti)
        (#:window:hilited res 2)
        (#:window:visible res 1)
        (#:window:graphic-properties res '(save-under override-redirect))
        res))


(defun :create-menu (display menu) 
   (#:menu:extend menu (#:windows:menu:make))
   menu) 


(defun :kill-menu (display menu))


(defun :activate-menu (display menu x y)
   (with ((current-display display))
         (:draw-menu menu x y)
         (:follow-mouse menu)
         (let ((ev ()) (new ()) (events ()))
              (while (eventp)
                     (setq ev (read-event))
                     (setq new (#:event:make))
                     (bltvector new 0 ev 0)
                     (newr events new))
              (while events (add-event (nextl events))))
         (let (x y il item)
              (when (and (setq x (:invertedx menu))
                         (setq y (:invertedy menu))
                         (ge x 0)
                         (ge y 0)
                         (setq il (nth x (#:menu:itemlists menu)))
                         il
                         (setq item (nth y (#:menu:itemlist:items il)))
                         item
                         (neq 0 (#:menu:item:active item)))
                    (#:menu:item:value item)))))


(defun :menu-insert-item (display menu choix index name active value))

(defun :menu-insert-item-list (display menu choix name active))

(defun :menu-delete-item-list (display menu choix))

(defun :menu-delete-item (display menu choix index))

(defun :menu-modify-item-list (display menu choix name active))

(defun :menu-modify-item (display menu choix index name active value))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defun :itemlist:width (il)
   (let ((l (#:menu:itemlist:items il))
         (max 0)
         width)
        (while (consp l)
               (setq width (width-string (#:menu:item:name (nextl l))))
               (when (gt width max) (setq max width)))
        max))


(defun :height (menu)
   (mul (font-height)
        (let ((res 0)
              (l (#:menu:itemlists menu)))
             (while (consp l)
                    (setq res (imax res (length (#:menu:itemlist:items
                                                        (nextl l))))))
             (when (#:menu:title menu)
                   (setq res (add1 res)))
             res)))


(defun :width (menu)
   (let ((title-width (if (#:menu:title menu)
                          (width-string (#:menu:title menu))
                          0))
         (res 0)
         (l (#:menu:itemlists menu)))
        (while (consp l)
               (setq res (add res (:itemlist:width (nextl l)))))
        (imax res title-width)))


(defun width-string (s)
   (width-substring s 0 (slen s)))


(defun :redraw-menu (menu event)
   (let ((x (x-base-space))
         (y (font-ascent)))
        (with ((current-window (:menu-window menu)))
              (when event
                    (current-clip (#:event:x event)
                             (#:event:y event)
                             (#:event:w event)
                             (#:event:h event)))
              (clear-graph-env)  
              ;;; Touched Touched !!
              (ifn (#:menu:title menu) ()
                   (let ((posx (div (sub (:width menu)
                                         (width-string (#:menu:title menu)))
                                    2)))
                        (draw-string (add x posx) y (#:menu:title menu)))
                   (with ((current-mode 6))
                         (fill-rectangle x 0 (:width menu) (font-height)))
                   (setq y (add y (font-height))))
              (mapc (lambda (il)
                            (mapc (lambda (it)
                                     (draw-string x y (#:menu:item:name it))
                                     (setq y (add y (font-height))))
                                  (#:menu:itemlist:items il))
                            (setq y (font-ascent))
                            (setq x (add x (:itemlist:width il))))
                    (#:menu:itemlists menu))
              (when (and (fixp (:invertedx menu)) (fixp (:invertedy menu)))
                    (:invert-item menu (:invertedx menu) (:invertedy menu)))
              (when event
                    (current-clip 0 0
                             (#:window:width (current-window))
                             (#:window:height (current-window))
                             )))))

(defun :find-list (menu x)
   (:find-list1 (#:menu:itemlists menu) x 0))


(defun :find-list1 (ils x res)
   (cond ((lt x 0) ())
         ((null ils) ())
         ((lt x (:itemlist:width (car ils)))
          res)
         (t
            (:find-list1 (cdr ils)
              (sub x (:itemlist:width (car ils)))
              (add1 res)))))


(defun :itemlist-x (menu x)
   (:itemlist-x1 x (#:menu:itemlists menu)))


(defun :itemlist-x1 (x ils)
   (if (eq x 0) 0
       (add (:itemlist:width (car ils))
            (:itemlist-x1 (sub1 x) (cdr ils)))))


(defun :invert-item (menu x y)
   (when y
         (if (ge y 0)
             (let (il item)
                  (when (and x y
                             (setq il (nth x (#:menu:itemlists menu)))
                             (neq 0 (#:menu:itemlist:active il))
                             (setq item (nth y (#:menu:itemlist:items il)))
                             (neq 0 (#:menu:item:active item)))
                        (let ((rx (:itemlist-x menu x))
                              (ry (mul (if (#:menu:title menu) (add1 y) y)
                                       (font-height)))
                              (rw (:itemlist:width il))
                              (rh (font-height)))
                             (with ((current-mode 6))
                                   (fill-rectangle rx ry rw rh)
                                   (:invertedx menu x)
                                   (:invertedy menu y))))))))


(defun :next-position (menu event)
   (let (ev)
        (tag moved
             (while t
                (read-event event)
                (selectq (#:event:code event)
                   (repaint-window-event 
                            (if (eq (:menu-window menu) (#:event:window event))
                                (:redraw-menu menu event)
                                (setq ev (#:event:make))
                                (bltvector ev 0 event 0)
                                (newr :repaint-events ev)))
                   (down-event (exit moved ()))
                   (up-event (exit moved t))
                   (drag-event (exit moved ())))))))


(defvar :ev (#:event:make)) ; remplace un odieux diese-point

(defun :follow-mouse (menu)
   (grab-event (:menu-window menu))
   (bitmap-sync)
   (with ((current-window (:menu-window menu)))
         (let (ix iy nx ny px py (fh (font-height)))
              (setq :repaint-events ())   
              (until (:next-position menu :ev)
                     (setq ny (if (lt (#:event:y :ev) 0)
                                  -1
                                  (div (#:event:y :ev) (or (gt fh 0) 1)))
                           nx (:find-list menu (#:event:x :ev)))
                     (when (#:menu:title menu)
                           (setq ny (sub1 ny)))
                     (when (or (neq nx ix) (neq ny iy))
                           (:invert-item menu ix iy)
                           (setq ix nx iy ny)
                           (:invert-item menu ix iy)))
              (:invertedx menu ix)
              (:invertedy menu iy)
              (while :repaint-events (add-event (nextl :repaint-events)))))
   (ungrab-event)
   (kill-window (:menu-window menu))
   (bitmap-sync)
   (:menu-window menu ()))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;; les menus lisp ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defun :draw-menu (menu x y)
   (setq x (max (add1 (div (:width menu) 2))
                (min x (sub (sub (bitxmax) 3) (div (:width menu) 2)))))
   (setq y (max 1 (min y (sub (sub (bitymax) 3) (:height menu)))))
   (:invertedx menu ())
   (:invertedy menu ())
   (:menu-window menu
     (menuwindow (sub x (div (:width menu) 2))
                 y
                 (:width menu)
                 (:height menu)
                 (#:menu:title menu)))
   (:initialise-menu menu)
   (make-window (:menu-window menu))
   (let ((font (current-font)))
        (with ((current-window (:menu-window menu)))
              (when (and (current-window) font)
                    (current-font font)))))


(defun :initialise-menu (menu) t)
