;;;; .EnTete	"Le-Lisp version 15.2x" " " "winbitmap.ll"
;;;; .Date	"1998/01/19"
;;;; .EnPied	"winbitmap.ll"
;;;; .Version	"1.00"
;;;; .Auteur 	"C. Jullien"
;;;; .Annexe I	""

(eval-when (eval)
           (unless (getdef '#:display:windows:winbitmap)
                   (libload #u"windows/winstruct")))

(defvar #:sys-package:colon '#:display:windows)


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;; les memoires de points ;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun :create-bitmap (display bitmap)
   (let ((wind (:windows-display display))
         (ge   (#:display:graph-env display)))
        (#:bitmap:extend bitmap (#:windows:bitmap:make))
        (when (eq 0 (:winbitmap bitmap (windows_create_bitmap ;wind
                                                (#:bitmap:w bitmap)
                                                (#:bitmap:h bitmap))))
              (error ':create-bitmap "Insufficient Memory" bitmap))
        bitmap))

(defun :kill-bitmap (display bitmap)
   (unless (:window-bitmap bitmap)
           (when (:winbitmap bitmap)
                 (windows_kill_bitmap ;(:windows-display display)
                          (:winbitmap bitmap))))
   (:window-bitmap bitmap ())
   (:winbitmap bitmap ()))


(defun :get-bit-line (display bitmap y bitvector)
  (let ((x 0)
        (win (:window-bitmap bitmap))
        )
    (when (and win
               (eq (#:image:rectangle:window:window-type win) 'transparent))
          (setq x (add x (:window-offset-x win)))
          (setq y (add y (:window-offset-y win))) )
    (windows_get_bit_line  ;(:windows-display display)
                      (:winbitmap bitmap) x y
                      bitvector (#:bitmap:w bitmap)
                      (:wincolor (#:graph-env:background
                                  (#:display:graph-env display)))
                      (if win 0 1))

))

(defun :set-bit-line (display bitmap y bitvector)
  ;; is used with default-gc with colors defined during last create-bitmap.
  (let ((x 0)
        (win (:window-bitmap bitmap))
        (ge (#:display:graph-env display)))
    (when (and win
               (eq (#:image:rectangle:window:window-type win) 'transparent))
          (setq x (add x (:window-offset-x win)))
          (setq y (add y (:window-offset-y win))) )

    (windows_set_bit_line ;wind
                      (:winbitmap bitmap) x y
                      bitvector (#:bitmap:w bitmap)
                      (:wincolor (#:graph-env:background ge))
                      (:wincolor (#:graph-env:foreground ge))
                      (if win 0 1))
))


(defun :bmref (display bitmap x y)
    (let ((win (:window-bitmap bitmap))
         )
         (when (and win
                   (eq (#:image:rectangle:window:window-type win) 'transparent))
               (setq x (add x (:window-offset-x win)))
               (setq y (add y (:window-offset-y win))) )

         (windows_bmref ;(:windows-display display)
                  (:winbitmap bitmap) x y
                  (:wincolor (#:graph-env:background
                               (#:display:graph-env display)))
                  (if win 0 1))
))


(defun :bmset (display bitmap x y bit)
  (let ((win (:window-bitmap bitmap))
        (ge (#:display:graph-env display)))

       (when (and win
                  (eq (#:image:rectangle:window:window-type win) 'transparent))
             (setq x (add x (:window-offset-x win)))
             (setq y (add y (:window-offset-y win))) )

       (windows_bmset ;(:windows-display display)
                (:winbitmap bitmap) x y bit
                (:wincolor (#:graph-env:background ge))
                (:wincolor (#:graph-env:foreground ge))
                (if win 0 1))
    bit))


(defun :get-byte-line (display bitmap y bytevector)
   (let ((x 0)
         (win (:window-bitmap bitmap)))
        (when (and win
                   (eq (#:image:rectangle:window:window-type win) 'transparent))
              (setq x (add x (:window-offset-x win)))
              (setq y (add y (:window-offset-y win))) )

	(windows_get_byte_line ;(:windows-display display)
                 (:winbitmap bitmap) x y bytevector
                 (#:bitmap:w bitmap)
                 (#:bitmap:h bitmap)
                 (if win 0 1))
))

(defun :set-byte-line (display bitmap y bytevector)
  (let ((x 0)
        (win (:window-bitmap bitmap))
       )
       (when (and win
                  (eq (#:image:rectangle:window:window-type win) 'transparent))
             (setq x (add x (:window-offset-x win)))
             (setq y (add y (:window-offset-y win))) )

       (windows_set_byte_line ;(:windows-display display)
                (:winbitmap bitmap) x y
                bytevector (#:bitmap:w bitmap)
                (if win 0 1))
))

(defun :byteref (display bitmap x y)
  (let ((win (:window-bitmap bitmap))
        )
       (when (and win
                  (eq (#:image:rectangle:window:window-type win) 'transparent))
             (setq x (add x (:window-offset-x win)))
             (setq y (add y (:window-offset-y win))) )
       (windows_byteref ;(:windows-display display)
                (:winbitmap bitmap) x y
                (if win 0 1))
))

(defun :byteset (display bitmap x y byte)
  (let ((win (:window-bitmap bitmap))
        )
       (when (and win
                  (eq (#:image:rectangle:window:window-type win) 'transparent))
             (setq x (add x (:window-offset-x win)))
             (setq y (add y (:window-offset-y win))) )
       (windows_byteset ;(:windows-display display)
                (:winbitmap bitmap) x y  byte
                (if win 0 1))
       byte))

(defun :bitblit (display b1 b2 x1 y1 x2 y2 w h)
;; Copy from (x2, y2, w, h) to (x1, y1, w, h).
  (let* ((w1 (:window-bitmap b1))
        (w2 (:window-bitmap b2))
        (cw (#:display:window display))
        xx1 yy1 ww hh visible
        (maxdeborde ())
        (mindeborde ())
        (topw2 w2)
        )
    (when (lt x1 0)
          (setq x2 (sub x2 x1) w (add w x1) x1 0))
    (when (lt y1 0)
          (setq y2 (sub y2 y1) h (add h y1) y1 0))
    (when (lt x2 0)
          (setq x1 (sub x1 x2) w (add w x2) x2 0))
    (when (lt y2 0)
          (setq y1 (sub y1 y2) h (add h y2) y2 0))
    (when (gt (add x2 w) (#:bitmap:w b2))
          (setq w (sub (#:bitmap:w b2) x2)))
    (when (gt (add y2 h) (#:bitmap:h b2))
          (setq h (sub (#:bitmap:h b2) y2)))

    ;; Les coordonne'es deviennent absolues pour les fene^tres transparentes.

    (if (and w1 (eq (#:image:rectangle:window:window-type w1) 'transparent))
        (progn
          (setq xx1 (add x1 (:window-offset-x w1)))
          (setq yy1 (add y1 (:window-offset-y w1))))

        (setq xx1 x1)
        (setq yy1 y1))

    (when (and w2 (eq (#:image:rectangle:window:window-type w2) 'transparent))
          (setq x2 (add x2 (:window-offset-x w2)))
          (setq y2 (add y2 (:window-offset-y w2))) )
    (setq ww w)
    (setq hh h)
    (when w2
          (while (send 'father topw2)
                 (setq topw2 (send 'father topw2)))
          (when (gt (+ x2 w (send 'x topw2)) (#:display:xmax display))
                  (setq maxdeborde t)
                  (setq w (sub (sub (#:display:xmax display) x2)
                                    (send 'x topw2))))
          (when (gt (+ y2 h (send 'y topw2)) (#:display:ymax display))
                  (setq maxdeborde t)
                  (setq h (sub (sub (#:display:ymax display) y2)
                                    (send 'y topw2))))
          (when (lt (add x2 (send 'x topw2)) 0)
                  (setq mindeborde t)
                  (setq ww (sub w (sub (abs (send 'x topw2)) (abs x2)))))
          (when (lt (add y2 (send 'y topw2)) 0)
                  (setq mindeborde t)
                  (setq hh (sub h (sub (abs (send 'y topw2)) (abs y2))))))

    (when w1
          (:current-window display w1))

    (when (and (gt w 0) (gt h 0))
          (setq visible
           (windows_bitblit
                ;(:windows-display display)
                (:winbitmap b1) (:winbitmap b2)
                xx1 yy1 x2 y2 w h
                (if w1
                    (:windows-graph-env w1)
                    (:graph-env-address
                        (#:display:main-graph-env display)))
                (if w1 0 1)
                (if w2 0 1) ))
          (when (and w2
                     w1)
                (when (or (neq visible 2) maxdeborde mindeborde)
                      (when maxdeborde
                            (when (gt ww w)
                                  (window-clear-region
                                      w1 (add x1 w) y1 (sub ww w) (add y1 hh)))
                            (when (gt hh h)
                                  (window-clear-region
                                      w1 x1 (add y1 h) (add x1 ww) (sub hh h))))
                      (when mindeborde
                            (when (lt ww w)
                                  (window-clear-region w1 x1 y1 ww h))
                            (when (lt hh h)
                                  (window-clear-region w1 x1 y1 w hh)))

                      (let ((ev (#:event:make))
                            lastev)
                           (if (eq (#:image:rectangle:window:window-type w1)
                                   'transparent)
                               (progn
                                      (#:event:window  ev (:top-opaque-window w1))
                                      (#:event:x ev (add x1 (:window-offset-x w1)))
                                      (#:event:y ev (add y1 (:window-offset-y w1))))
                               (#:event:window  ev w1)
                               (#:event:x ev x1)
                               (#:event:y ev y1))
                           (#:event:code ev 'repaint-window-event)
                           (#:event:w ev ww)
                           (#:event:h ev hh)
                           (unless (and (setq lastev (car (last (:reread display))))
                                        (eq (#:event:window ev)
                                            (#:event:window lastev)))
                                   (:reread display (nconc1 (:reread display) ev)))))))
    (when w1
          (:current-window display cw))))


;;; Window Bitmap


(defun :create-window-bitmap (display window bitmap)
  (#:bitmap:extend bitmap (#:windows:bitmap:make))
  (:window-bitmap bitmap window)
  (:winbitmap bitmap (:window-graph-env
                    (if (eq (#:image:rectangle:window:window-type window)
                            'transparent)
                        (:top-opaque-window window)
                      window)))
  bitmap)


;;;
;;; Substitution of colors in a bytemap.
;;; L is a liste of (OLD . NEW) where OLD and NEW are fix.

(defun :subst-colors (d b l)
  (let* ((size (length l))
         (v1 (makevector size ()))
         (v2 (makevector size ()))
         (i 0)
         )
    (mapc (lambda ((old . new))
            (vset v1 i old)
            (vset v2 i new)
            (setq i (add1 i))
            )
          l)
    (windows_subst_colors ;(:display-address d)
                      (:winbitmap b) v1 v2 size
                      (#:bitmap:w b) (#:bitmap:h b)
                      (if (:window-bitmap b) 0 1))
))


(defun :create-stipple (display stipple  data)
  (#:bitmap:extend stipple (#:windows:bitmap:make))
  (:winbitmap stipple
            (windows_create_stipple ;(:windows-display display)
                                (#:bitmap:w stipple)
                                (#:bitmap:h stipple)
                                data)))

(defun :kill-stipple (display stipple)
  (windows_kill_bitmap ;(:windows-display display)
                        (:winbitmap stipple)))
