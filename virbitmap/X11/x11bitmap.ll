(eval-when (eval)
	   (unless (getdef '#:display:x11:xbitmap)
		   (libload #u"X11/x11struct")))

(defvar #:sys-package:colon '#:display:x11)

(unless (boundp ':bit-reverse-vector)
	(defvar :bit-reverse-vector))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;; les memoires de points ;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun :create-bitmap (display bitmap)
  (let ((xd (:xdisplay display))
	(ge (#:display:graph-env display))
	xgc)
    (#:bitmap:extend bitmap (#:x11:bitmap:make))
    (:xbitmap bitmap (x11_create_bitmap xd
					(#:bitmap:w bitmap)
					(#:bitmap:h bitmap)))
    ;; Le create-bitmap est documente' comme utilisant le (current-background)
    ;; et le (current-foreground). On force donc ceux du default-gc qui sera
    ;; utilise' ensuite par set-bit-line.
    (when ge
	  (setq xgc (x11_default_gc xd))
	  (x11_set_background xd xgc (:xcolor (#:graph-env:background ge)))
	  (x11_set_foreground xd xgc (:xcolor (#:graph-env:foreground ge)))
	  ))
  bitmap)


(de :kill-bitmap (display bitmap)
    (unless (:window-bitmap bitmap)
	    (when (:xbitmap bitmap)
                  (x11_kill_bitmap (:xdisplay display) (:xbitmap bitmap))))
    (:window-bitmap bitmap ())
    (:xbitmap bitmap ()))


(defun :get-bit-line (display bitmap y bitvector)
  (let ((x 0)
	(win (:window-bitmap bitmap))
	)
    (when (and win
	       (eq (#:image:rectangle:window:window-type win) 'transparent))
	  (setq x (add x (:window-offset-x win)))
	  (setq y (add y (:window-offset-y win))))
    (x11_get_bit_line (:xdisplay display)
		      (:xbitmap bitmap) x y bitvector (#:bitmap:w bitmap))
    ))


(defun :set-bit-line (display bitmap y bitvector)
  ;; is used with default-gc with colors defined during last create-bitmap.
  (let ((x 0)
	(win (:window-bitmap bitmap))
	(xd (:xdisplay display))
	xgc)
    (when (and win
	       (eq (#:image:rectangle:window:window-type win) 'transparent))
	  (setq x (add x (:window-offset-x win)))
	  (setq y (add y (:window-offset-y win))))
    ;;    (when (:reverse-bit-flag display)
    ;;	  (:reverse-bit-vector bitvector))
    (setq xgc (x11_default_gc xd))
    (x11_set_bit_line xd (:xbitmap bitmap)
		      x y bitvector (#:bitmap:w bitmap) xgc)
    ;;    (when (:reverse-bit-flag display)
    ;;	  (:reverse-bit-vector bitvector))
    ))



(defun :bmref (display bitmap x y)
  (let ((win (:window-bitmap bitmap))
	)
    (when (and win
	       (eq (#:image:rectangle:window:window-type win) 'transparent))
	  (setq x (add x (:window-offset-x win)))
	  (setq y (add y (:window-offset-y win))))
    (x11_bmref (:xdisplay display) (:xbitmap bitmap) x y)))


(defun :bmset (display bitmap x y bit)
  (let ((win (:window-bitmap bitmap))
	(ge (#:display:graph-env display))
	xgc)
    (when (and win
	       (eq (#:image:rectangle:window:window-type win) 'transparent))
	  (setq x (add x (:window-offset-x win)))
	  (setq y (add y (:window-offset-y win))))
    (setq xgc (if (and ge (#:graph-env:extend ge))
		  (:graph-env-address ge)
		(x11_default_gc (:xdisplay display))))
    (x11_bmset (:xdisplay display) (:xbitmap bitmap) x y bit xgc)
    bit))


(defun :get-byte-line (display bitmap y bytevector)
  (let ((x 0)
	(win (:window-bitmap bitmap))
	)
    (when (and win
	       (eq (#:image:rectangle:window:window-type win) 'transparent))
	  (setq x (add x (:window-offset-x win)))
	  (setq y (add y (:window-offset-y win))))
    (x11_get_byte_line (:xdisplay display)
                       (:xbitmap bitmap) x y bytevector 
                       (#:bitmap:w bitmap))))


(defun :set-byte-line (display bitmap y bytevector)
  (let ((x 0)
	(win (:window-bitmap bitmap))
	)
    (when (and win
	       (eq (#:image:rectangle:window:window-type win) 'transparent))
	  (setq x (add x (:window-offset-x win)))
	  (setq y (add y (:window-offset-y win))))
    (x11_set_byte_line (:xdisplay display)
                       (:xbitmap bitmap) x y bytevector (#:bitmap:w bitmap))))


(defun :byteref (display bitmap x y)
  (let ((win (:window-bitmap bitmap))
	)
    (when (and win
	       (eq (#:image:rectangle:window:window-type win) 'transparent))
	  (setq x (add x (:window-offset-x win)))
	  (setq y (add y (:window-offset-y win))))
    (x11_byteref (:xdisplay display) (:xbitmap bitmap) x y)))


(defun :byteset (display bitmap x y byte)
  (let ((win (:window-bitmap bitmap))
	)
    (when (and win
	       (eq (#:image:rectangle:window:window-type win) 'transparent))
	  (setq x (add x (:window-offset-x win)))
	  (setq y (add y (:window-offset-y win))))
    (x11_byteset (:xdisplay display) (:xbitmap bitmap) x y byte)
    byte))


(de :reverse-bit-vector (bitvector)
    (for (i 0 1 (sub1 (slen bitvector)))
	 (sset bitvector i (:bit-reverse (sref bitvector i)))))


(de :bit-reverse (n)
    (logor
     (logshift (vref #:display:x11:bit-reverse-vector (logand n #$f)) 4)
     (vref #:display:x11:bit-reverse-vector (logshift n -4))))


(defun :bitblit (display b1 b2 x1 y1 x2 y2 w h)
  ;; Copy from (x2, y2, w, h) to (x1, y1, w, h).
  (let ((w1 (:window-bitmap b1))
	(w2 (:window-bitmap b2))
	)
    ;; Ces tests sont faits dans tous les cas, sinon sur RS6000 les zones
    ;; scrolle'es peuvent attaquer la root-window.
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
    (when (and w1 (eq (#:image:rectangle:window:window-type w1) 'transparent))
	  (setq x1 (add x1 (:window-offset-x w1))
		y1 (add y1 (:window-offset-y w1))
		))
    (when (and w2 (eq (#:image:rectangle:window:window-type w2) 'transparent))
	  (setq x2 (add x2 (:window-offset-x w2))
		y2 (add y2 (:window-offset-y w2))
		))
    ;; On prend le graph-env de la fenetre destination si on la trouve.
    ;; Sinon on prend le main-graph-env du display. On ne profite donc pas du
    ;; dernier (current-mode) sur les bitmaps sans fenetre, contrairement a ce
    ;; que dit la doc. Mais si on prend le graph-env courant, c'est tout Aida
    ;; qui s'effondre (Paint, ...)
    (when (and (gt w 0) (gt h 0))
	  (x11_bitblit
	   (:xdisplay display) (:xbitmap b1) (:xbitmap b2)
	   x1 y1 x2 y2 w h
	   (if w1
	       (:xgraph-env w1)
	     (:graph-env-address (#:display:main-graph-env display)))))))


;;; Window Bitmap


(defun :create-window-bitmap (display window bitmap)
  (#:bitmap:extend bitmap (#:x11:bitmap:make))
  (:window-bitmap bitmap window)
  (:xbitmap bitmap (:window-address
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
    (x11_subst_colors (:display-address d) (:xbitmap b) v1 v2 size
		      (#:bitmap:w b) (#:bitmap:h b))))


;;;
;;; Les stipples
;;;

(defun :create-stipple (display stipple  data)
  (:reverse-bit-vector data)
  (#:bitmap:extend stipple (#:x11:bitmap:make))
  (:xbitmap stipple 
	    (x11_create_stipple (:xdisplay display)
				(#:bitmap:w stipple)
				(#:bitmap:h stipple)
				data))
  (:reverse-bit-vector data))


(defun :kill-stipple (display stipple)
  (x11_kill_bitmap (:xdisplay display) (:xbitmap stipple)))
