(eval-when (eval)
	   (unless (getdef '#:display:x11:xbitmap)
		   (libload #u"X11/x11struct")))

(defvar #:sys-package:colon '#:display:x11)


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Drawing and Drawing(s)
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;; 2 internal functions

(defun :draw-cursor (display ge x y st)
  (when (:drawing-flag display)
	(let ((color (if st (#:graph-env:foreground ge)
		       (#:graph-env:background ge)))
	      (xbase (x-base-space))
	      (ybase (:graph-env-font-y ge))
	      (height (:graph-env-font-h ge))
	      (window (#:display:window display))
	      )
	  (setq x (sub x xbase) y (sub y ybase))
	  (x11_set_foreground (:display-address display)
			      (:graph-env-address ge) 
			      (:xcolor color))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)
	      (x11_draw_line (:display-address  display)
			     (:window-address window)
			     (:graph-env-address ge)
			     x y x (sub1 (add y height)))
	    (let ((offset-x (:window-offset-x window))
		  (offset-y (:window-offset-y window)))
	      (x11_draw_line (:display-address display)
			     (:window-address (:top-opaque-window window))
			     (:graph-env-address ge)
			     (add x offset-x)
			     (add y offset-y)
			     (add x offset-x)
			     (add (sub1 (add y height)) offset-y))))
	  (x11_set_foreground (:display-address display)
			      (:graph-env-address ge)
			      (:xcolor (#:graph-env:foreground ge))))))


;;;
;;; Always use x11_draw_string if we want x11_draw_image_string just
;;; fill a rectangle and then use draw-string
;;; Let's try anyway ...

(defun :draw-substring (display ge x y string start length)
  (when (:drawing-flag display)
	(let ((window (#:display:window display))
	      (x0 x) (y0 y)
	      (slen (slen string))
	      xwin maxle)
	  (setq maxle (sub slen start))
	  (when (le start slen)
		(when (gt length maxle)
		      (setq length maxle))
		(if (eq (#:image:rectangle:window:window-type window) 'opaque)
		    (setq xwin (:window-address window))
		  (setq xwin (:window-address (:top-opaque-window window))
			x (add (:window-offset-x window) x)
			y (add (:window-offset-y window) y)
			))
		(if (eq (#:graph-env:mode ge) #:mode:set)
		    (x11_draw_image_string (:display-address display) xwin
					   (:graph-env-address ge)
					   x y string start length)
		  (x11_draw_string (:display-address display) xwin
				   (:graph-env-address ge)
				   x y string start length))))))

;;;
;;; Ainsi, on est sur que draw-cn et draw-substring sont parfaitement synchro.

(defun :draw-cn (display ge x y cn)
  (let ((str "X"))
    (chrset 0 str cn)
    (:draw-substring display ge x y str 0 1)))

(defun :draw-substring-nobackground (display ge x y string start length)
  (when (:drawing-flag display)
	(let ((window (#:display:window display))
	      (slen (slen string))
	      xwin maxle)
	  (setq maxle (sub slen start))
	  (when (le start slen)
		(when (gt length maxle)
		      (setq length maxle))
		(if (eq (#:image:rectangle:window:window-type window) 'opaque)
		    (setq xwin (:window-address window))
		  (setq xwin (:window-address (:top-opaque-window window))
			x (add (:window-offset-x window) x)
			y (add (:window-offset-y window) y)
			))
		(x11_draw_string (:display-address display) xwin
				 (:graph-env-address ge)
				 x y string start length)))))


;;;
;;; Ainsi, on est sur que draw-cn et draw-substring sont parfaitement synchro.

(defun :draw-cn-nobackground (display ge x y cn)
  (let ((str "X"))
    (chrset 0 str cn)
    (:draw-substring-nobackground display ge x y str 0 1)))


(defun :draw-point (display ge x y)
  (when (:drawing-flag display)
	(let ((window (#:display:window display)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)     
	      (x11_draw_point (:display-address display) 
			      (:window-address window)
			      (:graph-env-address ge)
			      x y)
	    (x11_draw_point (:display-address  display) 
			    (:window-address (:top-opaque-window window))
			    (:graph-env-address ge)
			    (add (:window-offset-x window) x)
			    (add (:window-offset-y window) y))))))



;;;
;;; Now, (:draw-line x0 y0 x1 y1) and (:draw-line x1 y1 x0 y0) are identical.

(defun :draw-line (display ge x0 y0 x1 y1)
  (when (gt x0 x1)
	(psetq x0 x1 x1 x0 y0 y1 y1 y0))
  (when (:drawing-flag display)
	(:set-solid-draws display ge)
	(let ((window (#:display:window display)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)
	      (x11_draw_line (:display-address display)
			     (:window-address window)
			     (:graph-env-address ge)
			     x0 y0 x1 y1)
	    (let ((offset-x (:window-offset-x window))
		  (offset-y (:window-offset-y window))
		  )
	      (x11_draw_line (:display-address display)
			     (:window-address (:top-opaque-window window))
			     (:graph-env-address ge)
			     (add x0 offset-x)
			     (add y0 offset-y)
			     (add x1 offset-x)
			     (add y1 offset-y)))))
	(:reset-solid-draws display ge)))


(defun :draw-rectangle (display ge x y w h)
  (when (:drawing-flag display)
	(:set-solid-draws display ge)
	(let ((window (#:display:window display)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque) 
	      (x11_draw_rectangle (:display-address display)
				  (:window-address window)
				  (:graph-env-address ge)
				  x y w h)
	    (x11_draw_rectangle (:display-address  display)
				(:window-address (:top-opaque-window window))
				(:graph-env-address ge)
				(add x (:window-offset-x window))
				(add y (:window-offset-y window))
				w h)))
	(:reset-solid-draws display ge)))


;;;;; NEW NEW

(defun :draw-arc (display ge x y w h angle1 angle2)
  (when (:drawing-flag display)
	(:set-solid-draws display ge)
	(let ((window (#:display:window display))
	      (delta (sub angle2 angle1))
	      )
	  (when (lt delta 0)
		(setq delta (add delta 360)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)
	      (x11_draw_arc (:display-address  display)
			    (:window-address window)
			    (:graph-env-address ge)
			    x y w h angle1 delta)
	    (x11_draw_arc (:display-address display)
			  (:window-address (:top-opaque-window window))
			  (:graph-env-address ge)
			  (add (:window-offset-x window) x)
			  (add (:window-offset-y window) y)
			  w h angle1 delta)))
	(:reset-solid-draws display ge)))


(defun :draw-ellipse (display ge x y rx ry)
  (when (:drawing-flag display)
	(:set-solid-draws display ge)
	(let ((window (#:display:window display)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)
	      (x11_draw_arc (:display-address  display)
			    (:window-address window)
			    (:graph-env-address ge)
			    x y (add rx rx) (add ry ry) 0 360)
	    (x11_draw_arc (:display-address display)
			  (:window-address (:top-opaque-window window))
			  (:graph-env-address ge)
			  (add (:window-offset-x window) x)
			  (add (:window-offset-y window) y)
			  (add rx rx) (add ry ry) 0 360)))
	(:reset-solid-draws display ge)))



(defun :draw-circle (display ge x y r)
  (when (:drawing-flag display)
	(:set-solid-draws display ge)
	(let ((window (#:display:window display)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)
	      (x11_draw_arc (:display-address  display)
			    (:window-address window)
			    (:graph-env-address ge)
			    x y (add r r) (add r r) 0 360)
	    (x11_draw_arc (:display-address  display)
			  (:window-address (:top-opaque-window window))
			  (:graph-env-address ge)
			  (add (:window-offset-x window) x)
			  (add (:window-offset-y window) y)
			  (add r r) (add r r) 0 360)))
	(:reset-solid-draws display ge)))



(defun :fill-rectangle (display ge x y w h)
  (when (:drawing-flag display)
	(let ((pattern (#:graph-env:pattern ge))
	      (fg (#:graph-env:foreground ge))
	      (bg (#:graph-env:background ge))
	      (fill-mode (#:graph-env:fill-mode ge))
	      (window (#:display:window display))
	      )
	  (when (and (eq 0 pattern)
		     (eq fill-mode 'pattern))
		(x11_set_foreground (:display-address display)
				    (:graph-env-address ge) 
				    (:xcolor bg)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)
	      (x11_fill_rectangle (:display-address display)
				  (:window-address window)
				  (:graph-env-address ge)
				  x y w h)
	    (x11_fill_rectangle (:display-address  display)
				(:window-address (:top-opaque-window window))
				(:graph-env-address ge)
				(add (:window-offset-x window) x)
				(add (:window-offset-y window) y)
				w h))
	  (when (and (eq 0 pattern)
		     (eq fill-mode 'pattern))
		(x11_set_foreground (:display-address display)
				    (:graph-env-address ge) 
				    (:xcolor fg))))))


;;;
;;; Swaps background and foreground inside a rectangle.
;;; Uses a dummy color which is foreground xor background.

(defun :highlight-rectangle (display ge x y w h)
  (let ((window (#:display:window display))
	(old-fore (:xcolor (#:graph-env:foreground ge)))
	dummy)
    (setq dummy (logxor old-fore (:xcolor (#:graph-env:background ge))))
    (with ((current-mode #:mode:xor)) ; incontournable.
	  ;; il faut en plus un xor qui ne passe pas par le mode-vector
	  (x11_set_mode (:display-address display)
			(:graph-env-address ge)
			#:mode:xor)
	  (x11_set_foreground (:display-address display)
			      (:graph-env-address ge) 
			      dummy)
	  (x11_set_planemask (:display-address display)
			     (:graph-env-address ge)
			     '(255 . -1))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)
	      (x11_fill_rectangle (:display-address display)
				  (:window-address window)
				  (:graph-env-address ge)
				  x y w h)
	    (x11_fill_rectangle (:display-address  display)
				(:window-address (:top-opaque-window window))
				(:graph-env-address ge)
				(add (:window-offset-x window) x)
				(add (:window-offset-y window) y)
				w h))
	  (x11_set_foreground (:display-address display)
			      (:graph-env-address ge) 
			      old-fore))))





;;;; NEW NEW

(defun :fill-arc (display ge x y w h angle1 angle2)
  (when (:drawing-flag display)
	(let ((pattern (#:graph-env:pattern ge))
	      (fg (#:graph-env:foreground ge))
	      (bg (#:graph-env:background ge))
	      (window (#:display:window display))
	      (delta (sub angle2 angle1))
	      (fill-mode (#:graph-env:fill-mode ge)))
	  (when (lt delta 0)
		(setq delta (add delta 360)))
	  (when (and (eq 0 pattern)
		     (eq fill-mode 'pattern))
		(x11_set_foreground (:display-address display)
				    (:graph-env-address ge) 
				    (:xcolor bg)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)  
	      (x11_fill_arc (:display-address display)
			    (:window-address window)
			    (:graph-env-address ge)
			    x y w h angle1 delta)
	    (:transparent-fill-arc window ge display x y w h angle1 delta
				   pattern))
	  (when (and (eq 0 pattern)
		     (eq fill-mode 'pattern))
		(x11_set_foreground (:display-address display)
				    (:graph-env-address ge) 
				    (:xcolor fg))))))


(defun :transparent-fill-arc (window ge display x y w h angle1 delta pattern)
  (x11_fill_arc (:display-address  display)
		(:window-address (:top-opaque-window window))
		(:graph-env-address ge)
		(add (:window-offset-x window) x)
		(add (:window-offset-y window) y)
		w h angle1 delta))


(defun :fill-ellipse (display ge x y rx ry)
  (when (:drawing-flag display)
	(let ((pattern (#:graph-env:pattern ge))
	      (fg (#:graph-env:foreground ge))
	      (bg (#:graph-env:background ge))
	      (window (#:display:window display))
	      (fill-mode (#:graph-env:fill-mode ge)))
	  (when (and (eq 0 pattern)
		     (eq fill-mode 'pattern))
		(x11_set_foreground (:display-address display)
				    (:graph-env-address ge) 
				    (:xcolor bg)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)  
	      (x11_fill_arc (:display-address display)
			    (:window-address window)
			    (:graph-env-address ge)
			    x y  (add rx rx) (add ry ry) 0 360)
	    (:transparent-fill-arc window ge display x y 
				   (add rx rx) (add ry ry) 0 360
				   pattern))
	  (when (and (eq 0 pattern)
		     (eq fill-mode 'pattern))
		(x11_set_foreground (:display-address display)
				    (:graph-env-address ge) 
				    (:xcolor fg))))))

(defun :fill-circle (display ge x y r)
 (when (:drawing-flag display)
       (let ((pattern (#:graph-env:pattern ge))
	     (fg (#:graph-env:foreground ge))
	     (bg (#:graph-env:background ge))
	     (window (#:display:window display))
	     (fill-mode (#:graph-env:fill-mode ge)))
	 (when (and (eq 0 pattern)
		    (eq fill-mode 'pattern))
	       (x11_set_foreground (:display-address display)
				   (:graph-env-address ge) 
				   (:xcolor bg)))
	 (if (eq (#:image:rectangle:window:window-type window) 'opaque)  
	     (x11_fill_arc (:display-address display)
			   (:window-address window)
			   (:graph-env-address ge)
			   x y  (add r r) (add r r) 0 360)
	   (:transparent-fill-arc window ge display x y 
				  (add r r) (add r r) 0 360
				  pattern))
	 (when (and (eq 0 pattern)
		    (eq fill-mode 'pattern))
	       (x11_set_foreground (:display-address display)
				   (:graph-env-address ge) 
				   (:xcolor fg))))))




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;; Multiple Draws in One request
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


;;;
;;; These dummy-vectors are passed to C.

(defvar :vx #[0])
(defvar :vy #[0])
(defvar :vw #[0])
(defvar :vh #[0])


(defun :fill-area (display ge n vx vy)
  (when (:drawing-flag display)
	(let ((pattern (#:graph-env:pattern ge))
	      (fg (#:graph-env:foreground ge))
	      (bg (#:graph-env:background ge))
	      (window (#:display:window display))
	      (fill-mode (#:graph-env:fill-mode ge)))
	  (when (and (eq 0 pattern)
		     (eq fill-mode 'pattern))
		(x11_set_foreground (:display-address display)
				    (:graph-env-address ge) 
				    (:xcolor bg)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)
	      (x11_fill_area (:display-address display)
			     (:window-address window)
			     (:graph-env-address ge)
			     vx vy n 0 0)
	    (x11_fill_area (:display-address display)
			   (:window-address (:top-opaque-window window))
			   (:graph-env-address ge)
			   vx vy n
			   (:window-offset-x window)
			   (:window-offset-y window)
			   ))
	  (when (and (eq 0 pattern)
		     (eq fill-mode 'pattern))
		(x11_set_foreground (:display-address display)
				    (:graph-env-address ge) 
				    (:xcolor fg))))))


(defun :draw-polyline (display ge n vx vy)
  (when (:drawing-flag display)
	(:set-solid-draws display ge)
	(let ((window (#:display:window display)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)    
	      (x11_draw_lines (:display-address display)
			      (:window-address window)
			      (:graph-env-address ge)
			      vx vy n 0 0)
	    (x11_draw_lines (:display-address display)
			    (:window-address (:top-opaque-window window))
			    (:graph-env-address ge)
			    vx vy n
			    (:window-offset-x window)
			    (:window-offset-y window))))
	(:reset-solid-draws display ge)))


(defun :draw-polymarker (display ge n vx vy)
  (when (:drawing-flag display)
	(let ((window (#:display:window display)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)
	      (x11_draw_points (:display-address display)
			       (:window-address window)
			       (:graph-env-address ge)
			       vx vy n
			       0 0)
	    (x11_draw_points (:display-address display)
			     (:window-address (:top-opaque-window window))
			     (:graph-env-address ge)
			     vx vy n
			     (:window-offset-x window)
			     (:window-offset-y window)
			     )))))



;;;; NEW NEW

(defun :draw-segments (display ge n vx1 vy1 vx2 vy2)
  ;; Draws a set of line segments on the display DISPLAY.  The
  ;; beginning x components of the segments are in the vector VX1; the
  ;; final x components in VX2.  Similarly for the y components in VY1
  ;; and VY2.  The number of segments to draw is the integer N.  The
  ;; graphic context is GE.  Nothing of interest is returned.
  (when (:drawing-flag display)
	(:set-solid-draws display ge)
	(let ((window (#:display:window display))
	      )
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque) 
	      (x11_draw_segments (:display-address display)
				 (:window-address window)
				 (:graph-env-address ge)
				 vx1 vy1 vx2 vy2 n 0 0)
	    (x11_draw_segments (:display-address display)
			       (:window-address (:top-opaque-window window))
			       (:graph-env-address ge)
			       vx1 vy1 vx2 vy2 n
			       (:window-offset-x window)
			       (:window-offset-y window))))
	(:reset-solid-draws display ge)))


(defun :draw-rectangles (display ge n vx vy vw vh)
  ;; Draws a set of rectangles on the display DISPLAY.
  ;; The number of rectangles to draw is the integer N.  The
  ;; graphic context is GE.  Nothing of interest is returned.
  (when (:drawing-flag display)
	(:set-solid-draws display ge)
	(let ((window (#:display:window display))
	      (flag 0)
	      )
	  (ifn (fixp vx)
	       (setq flag (logor flag 1))
	       (vset :vx 0 vx) (setq vx :vx))
	  (ifn (fixp vy)
	       (setq flag (logor flag 2))
	       (vset :vy 0 vy) (setq vy :vy))
	  (ifn (fixp vw)
	       (setq flag (logor flag 4))
	       (vset :vw 0 vw) (setq vw :vw))
	  (ifn (fixp vh)
	       (setq flag (logor flag 8))
	       (vset :vh 0 vh) (setq vh :vh))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)
	      (x11_draw_rectangles (:display-address display)
				   (:window-address window)
				   (:graph-env-address ge)
				   vx vy vw vh n 0 0 flag)
	    (x11_draw_rectangles (:display-address display)
				 (:window-address (:top-opaque-window window))
				 (:graph-env-address ge)
				 vx vy vw vh n
				 (:window-offset-x window)
				 (:window-offset-y window)
				 flag)))
	(:reset-solid-draws display ge)))



(defun :fill-rectangles (display ge n vx vy vw vh)
  ;; Fills a set of rectangles on the display DISPLAY.
  ;; The number of rectangles to fill is the integer N.  The
  ;; graphic context is GE.  Nothing of interest is returned.
  (when (:drawing-flag display)
	(let ((window (#:display:window display))
	      (pattern (#:graph-env:pattern ge))
	      (fg (#:graph-env:foreground ge))
	      (bg (#:graph-env:background ge))
	      (flag 0)
	      (fill-mode (#:graph-env:fill-mode ge)))
	  (ifn (fixp vx)
	       (setq flag (logor flag 1))
	       (vset :vx 0 vx) (setq vx :vx))
	  (ifn (fixp vy)
	       (setq flag (logor flag 2))
	       (vset :vy 0 vy) (setq vy :vy))
	  (ifn (fixp vw)
	       (setq flag (logor flag 4))
	       (vset :vw 0 vw) (setq vw :vw))
	  (ifn (fixp vh)
	       (setq flag (logor flag 8))
	       (vset :vh 0 vh) (setq vh :vh))
	  (when (and (eq 0 pattern)
		     (eq fill-mode 'pattern))
		(x11_set_foreground (:display-address display)
				    (:graph-env-address ge) 
				    (:xcolor bg)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque) 
	      (x11_fill_rectangles (:display-address display)
				   (:window-address window)
				   (:graph-env-address ge)
				   vx vy vw vh n 0 0 flag)
	    (x11_fill_rectangles 
	     (:display-address display)
	     (:window-address (:top-opaque-window window))
	     (:graph-env-address ge)
	     vx vy vw vh n
	     (:window-offset-x window)
	     (:window-offset-y window)
	     flag))
	 (when (and (eq 0 pattern)
		    (eq fill-mode 'pattern))
	       (x11_set_foreground (:display-address display)
				   (:graph-env-address ge) 
				   (:xcolor fg))))))
  

;;; These functions are called to ensure that the pattern or
;;; the stipple is not used when drawing (not filling).
;;; :solid-draws can be set to have this -often whished-
;;; behaviour. If :solid-draws is (), the behaviour
;;; is standard, ie as defined in X ... ie machine dependent.

(defvar :solid-draws)

(defmacro :set-solid-draws (display ge)
  `(when :solid-draws (:set-solid-draws-i ,display ,ge)))

(defmacro :reset-solid-draws (display ge)
  `(when :solid-draws (:reset-solid-draws-i ,display ,ge)))

(defun :set-solid-draws-i (display ge)
  (when (or (and (eq (#:graph-env:fill-mode ge) 'pattern)
		 (gt (#:graph-env:pattern ge) 1))
	    (and (#:graph-env:stipple ge)
		 (memq (#:graph-env:fill-mode ge)
		       '(transparentstipple opaquestipple))))
	(x11_set_fill_mode (:display-address display)
			   (:graph-env-address ge) 0)))

(defun :reset-solid-draws-i (display ge)
  (cond
   ((and (eq (#:graph-env:fill-mode ge) 'pattern)
	 (gt (#:graph-env:pattern ge) 1))
    (x11_set_fill_mode (:display-address display)
		       (:graph-env-address ge) 1))
   ((and (#:graph-env:stipple ge)
	 (eq (#:graph-env:fill-mode ge) 'transparentstipple))
    (x11_set_fill_mode (:display-address display)
		       (:graph-env-address ge) 3))	 
   ((and (#:graph-env:stipple ge)
	 (eq (#:graph-env:fill-mode ge) 'opaquestipple))
    (x11_set_fill_mode (:display-address display)
		       (:graph-env-address ge) 2))
   ))




