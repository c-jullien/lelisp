;;;; .EnTete	"Le-Lisp version 15.26" " " "windraw.ll"
;;;; .Date	"04/01/94"
;;;; .EnPied	"windraw.ll"
;;;; .Version	"1.01"
;;;; .Auteur 	"C. Jullien"
;;;; .Annexe I	""

(eval-when (eval)
	   (unless (getdef '#:display:windows:winbitmap)
		   (libload #u"windows/winstruct")))

(defvar #:sys-package:colon '#:display:windows)


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Drawing and Drawing(s)
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defun :draw-cursor (display ge x y st)
  (when (:drawing-flag display)
	(let ((color (if st (#:graph-env:foreground ge)
		       (#:graph-env:background ge)))
              (style (vref (:line-style-vector display)
         	       (#:graph-env:line-style ge)))
	      (xbase (x-base-space))
	      (ybase (:graph-env-font-y ge))
	      (height (:graph-env-font-h ge))
	      (window (#:display:window display))
	      )
	  (setq x (sub x xbase) y (sub y ybase))
	  (windows_set_foreground ;(:display-address display)
			      (:graph-env-address ge) 
			      (:wincolor color)
                              (vref style 0)
                   	      (vref style 1))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)
	      (windows_draw_line ;(:display-address  display)
			     (:window-address window)
			     (:graph-env-address ge)
			     x y x (sub1 (add y height)))
	    (let ((offset-x (:window-offset-x window))
		  (offset-y (:window-offset-y window)))
	      (windows_draw_line ;(:display-address display)
			     (:window-address (:top-opaque-window window))
			     (:graph-env-address ge)
			     (add x offset-x)
			     (add y offset-y)
			     (add x offset-x)
			     (add (sub1 (add y height)) offset-y))))
	  (windows_set_foreground ;(:display-address display)
			      (:graph-env-address ge)
			      (:wincolor (#:graph-env:foreground ge))
                              (vref style 0)
                   	      (vref style 1)))))



(defun :draw-substring (display ge x y string start length)
   (when (ge length 0)
         (let ((newstart  (imax start 0))
               newlength)
              (setq newlength (imin length (- (slen string) newstart)))
              (when (:drawing-flag display)
                    (let ((old-pattern (#:graph-env:pattern ge)))
                         (:current-pattern display ge 0)
                         (:fill-rectangle display
                                          ge
                                          (sub x (x-base-space))
                                          (sub y (y-base-space))
                                          (width-substring string newstart newlength)
                                          (height-space))
                         (:current-pattern display ge old-pattern))
                    (unless (or (eq #:mode:not (#:graph-env:mode ge))
                                (eq 0 (#:graph-env:mode ge)))
                            (let ((window (#:display:window display))
                                  (slen (slen string))
                                  winadr maxle)
                                 (setq maxle (sub slen newstart))
                                 (when (le newstart slen)
                                       (when (gt newlength maxle)
                                             (setq newlength maxle))
                                       (if (eq (#:image:rectangle:window:window-type window) 'opaque)
                                           (setq winadr (:window-address window))
                                           (setq winadr (:window-address (:top-opaque-window window))
                                                 x (add (:window-offset-x window) x)
                                                 y (add (:window-offset-y window) y)
                                                 ))
                                       (windows_draw_string ;(:display-address display) 
                                                winadr
                                                (:graph-env-address ge)
                                                x (sub y (:graph-env-font-y ge))
                                                string newstart newlength
                                                ))))))))

(defun :draw-cn (display ge x y cn)
  (when (:drawing-flag display)
        (let ((old-pattern (#:graph-env:pattern ge)))
             (:current-pattern display ge 0)
             (:fill-rectangle
                    	display
                    	ge
	  	 	(sub x (x-base-space))
	   		(sub y (y-base-space))
	  	 	(width-substring (string (ascii cn)) 0 1)
	  	 	(height-space))
             (:current-pattern display ge old-pattern))
    	(unless (or (eq #:mode:not (#:graph-env:mode ge))
                    (eq 0 (#:graph-env:mode ge)))
		(let ((window (#:display:window display)))
	  	(if (eq (#:image:rectangle:window:window-type window) 'opaque)
	      		(windows_draw_cn ;(:display-address display) 
			      (:window-address window)
			      (:graph-env-address ge)
			      x  (sub y (:graph-env-font-y ge)) cn)
	    		(windows_draw_cn ;(:display-address  display) 
			    (:window-address (:top-opaque-window window))
			    (:graph-env-address ge)
			    (add (:window-offset-x window) x)
			    (sub (add (:window-offset-y window) y)
                                 (:graph-env-font-y ge))
                            cn))))))


;;;
;;; 2 undocumented BV functions used by AIDA
;;;
;;;	:draw-cn-nobackground
;;;	:draw-substring-nobackground

(defun :draw-substring-nobackground (display ge x y string start length)
   (when (ge length 0)
         (let ((newstart  (imax start 0))
               newlength)
              (setq newlength (imin length (- (slen string) newstart)))
              (when (:drawing-flag display)
#|
                    ;; It seems to work in Windows 3.1 when commented out
                    (let ((old-pattern (#:graph-env:pattern ge)))
                         (:current-pattern display ge 0)
                         (:fill-rectangle display
                                          ge
                                          (sub x (x-base-space))
                                          (sub y (y-base-space))
                                          (width-substring string newstart newlength)
                                          (height-space))
                         (:current-pattern display ge old-pattern))
|#
                    (unless (or (eq #:mode:not (#:graph-env:mode ge))
                                (eq 0 (#:graph-env:mode ge)))
                            (let ((window (#:display:window display))
                                  (slen (slen string))
                                  winadr maxle)
                                 (setq maxle (sub slen newstart))
                                 (when (le newstart slen)
                                       (when (gt newlength maxle)
                                             (setq newlength maxle))
                                       (if (eq (#:image:rectangle:window:window-type window) 'opaque)
                                           (setq winadr (:window-address window))
                                           (setq winadr (:window-address (:top-opaque-window window))
                                                 x (add (:window-offset-x window) x)
                                                 y (add (:window-offset-y window) y)
                                                 ))
                                       (windows_draw_string_noback
                                                ;(:display-address display) 
                                                winadr
                                                (:graph-env-address ge)
                                                x (sub y (:graph-env-font-y ge))
                                                string newstart newlength
                                                ))))))))

(defun :draw-cn-nobackground (display ge x y cn)
   (when (:drawing-flag display)
#|
         ;; It seems to work in Windows 3.1 when commented out
         (let ((old-pattern (#:graph-env:pattern ge)))
              (:current-pattern display ge 0)
              (:fill-rectangle display
                               ge
                               (sub x (x-base-space))
                               (sub y (y-base-space))
                               (width-substring (string (ascii cn)) 0 1)
                               (height-space))
              (:current-pattern display ge old-pattern))
|#
	 (unless (or (eq #:mode:not (#:graph-env:mode ge))
                     (eq 0 (#:graph-env:mode ge)))
                 (let ((window (#:display:window display)))
                      (if (eq (#:image:rectangle:window:window-type window)
                              'opaque)
                          (windows_draw_cn_noback
                                   ;(:display-address display) 
                                   (:window-address window)
                                   (:graph-env-address ge)
                                   x  (sub y (:graph-env-font-y ge)) cn)
                          (windows_draw_cn_noback
                                   ;(:display-address  display) 
                                   (:window-address (:top-opaque-window window))
                                   (:graph-env-address ge)
                                   (add (:window-offset-x window) x)
                                   (sub (add (:window-offset-y window) y)
                                        (:graph-env-font-y ge))
                                   cn))))))

(defun :draw-point (display ge x y)
  (when (:drawing-flag display)
	(let ((window (#:display:window display)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)     
	      (windows_draw_point ;(:display-address display) 
			      (:window-address window)
			      (:graph-env-address ge)
			      x y)
	    (windows_draw_point ;(:display-address  display) 
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
	(let ((window (#:display:window display)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)
	      (windows_draw_line ;(:display-address display)
			     (:window-address window)
			     (:graph-env-address ge)
			     x0 y0 x1 y1)
	    (let ((offset-x (:window-offset-x window))
		  (offset-y (:window-offset-y window))
		  )
	      (windows_draw_line ;(:display-address display)
			     (:window-address (:top-opaque-window window))
			     (:graph-env-address ge)
			     (add x0 offset-x)
			     (add y0 offset-y)
			     (add x1 offset-x)
			     (add y1 offset-y)))))))


(defun :draw-rectangle (display ge x y w h)
  (when (:drawing-flag display)
	(let ((window (#:display:window display)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque) 
	      (windows_draw_rectangle ;(:display-address display)
				  (:window-address window)
				  (:graph-env-address ge)
				  x y w h)
	    (windows_draw_rectangle ;(:display-address  display)
				(:window-address (:top-opaque-window window))
				(:graph-env-address ge)
				(add x (:window-offset-x window))
				(add y (:window-offset-y window))
				w h)))))


;;;;; NEW NEW

(defun :draw-arc (display ge x y w h angle1 angle2)
  (when (:drawing-flag display)
	(let ((window (#:display:window display)))
             (if (eq (#:image:rectangle:window:window-type window) 'opaque)
                 (windows_draw_arc ;(:display-address  display)
                          (:window-address window)
                          (:graph-env-address ge)
                          x y (div w 2) (div h 2) angle1 angle2)
                 (windows_draw_arc ;(:display-address display)
                          (:window-address (:top-opaque-window window))
                          (:graph-env-address ge)
                          (add (:window-offset-x window) x)
                          (add (:window-offset-y window) y)
			  (div w 2) (div h 2) angle1 angle2)))))


(defun :draw-ellipse (display ge x y rx ry)
  (when (:drawing-flag display)
	(let ((window (#:display:window display)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)
	      (windows_draw_arc ;(:display-address  display)
			    (:window-address window)
			    (:graph-env-address ge)
			    x y rx ry 0 360)
	    (windows_draw_arc ;(:display-address display)
			  (:window-address (:top-opaque-window window))
			  (:graph-env-address ge)
			  (add (:window-offset-x window) x)
			  (add (:window-offset-y window) y)
			  rx ry 0 360)))))



(defun :draw-circle (display ge x y r)
  (when (:drawing-flag display)
	(let ((window (#:display:window display)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)
	      (windows_draw_arc ;(:display-address  display)
			    (:window-address window)
			    (:graph-env-address ge)
			    x y r r 0 360)
	    (windows_draw_arc ;(:display-address  display)
			  (:window-address (:top-opaque-window window))
			  (:graph-env-address ge)
			  (add (:window-offset-x window) x)
			  (add (:window-offset-y window) y)
			  r r 0 360)))))



(defun :fill-rectangle (display ge x y w h)
  (when (:drawing-flag display)
	(let ((window (#:display:window display)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)
	      (windows_fill_rectangle ;(:display-address display)
				  (:window-address window)
				  (:graph-env-address ge)
				  x y w h )
	    (windows_fill_rectangle ;(:display-address  display)
				(:window-address (:top-opaque-window window))
				(:graph-env-address ge)
				(add (:window-offset-x window) x)
				(add (:window-offset-y window) y)
				w h ))
          )))


;;;
;;; Swaps background and foreground inside a rectangle.


(defun :highlight-rectangle (display ge x y w h)
   
  (let ((window (#:display:window display)))
    (with ((current-mode #:mode:xor))
    (if (eq (#:image:rectangle:window:window-type window) 'opaque)
	      (windows_fill_rectangle ;(:display-address display)
				  (:window-address window)
				  (:graph-env-address ge)
				  x y w h)
              (windows_fill_rectangle ;(:display-address  display)
				(:window-address (:top-opaque-window window))
				(:graph-env-address ge)
				(add (:window-offset-x window) x)
				(add (:window-offset-y window) y)
				w h)))
))


;;;; NEW NEW

(defun :fill-arc (display ge x y w h angle1 angle2)
  (when (:drawing-flag display)
	(let ((window (#:display:window display)))
             (if (eq (#:image:rectangle:window:window-type window) 'opaque)  
                 (if (eq (#:graph-env:arc-mode ge) 0)
                     (windows_fill_arc ;(:display-address display)
                              (:window-address window)
                              (:graph-env-address ge)
                              x y (div w 2) (div h 2) angle1 angle2)
                     (windows_fill_chord ;(:display-address display)
                              (:window-address window)
                              (:graph-env-address ge)
                              x y (div w 2) (div h 2) angle1 angle2))
                 (:transparent-fill-arc
                               window
                               ge
                               display
                               x y
                               (div w 2) (div h 2)
                               angle1 angle2)))))


(defun :transparent-fill-arc (window ge display x y w h angle1 angle2)
   (if (eq (#:graph-env:arc-mode ge) 0)
       (windows_fill_arc ;(:display-address  display)
                (:window-address (:top-opaque-window window))
                (:graph-env-address ge)
		(add (:window-offset-x window) x)
		(add (:window-offset-y window) y)
		w h
                angle1 angle2)
       (windows_fill_chord ;(:display-address  display)
                (:window-address (:top-opaque-window window))
                (:graph-env-address ge)
		(add (:window-offset-x window) x)
		(add (:window-offset-y window) y)
		w h
                angle1 angle2)))

(defun :fill-ellipse (display ge x y rx ry)
  (when (:drawing-flag display)
	(let ((window (#:display:window display)))
             (if (eq (#:image:rectangle:window:window-type window) 'opaque)  
                 (windows_fill_arc ;(:display-address display)
                          (:window-address window)
                          (:graph-env-address ge)
                          x y rx ry 0 360)
                 (:transparent-fill-arc
                          window ge display x y 
                          rx ry 0 360)))))

(defun :fill-circle (display ge x y r)
 (when (:drawing-flag display)
	(let ((window (#:display:window display)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)  
	      (windows_fill_arc ;(:display-address display)
			    (:window-address window)
			    (:graph-env-address ge)
			    x y r r 0 360
			    )
	    (:transparent-fill-arc window ge display x y 
				   r r 0 360
				   ))

          )))




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
	(let ((window (#:display:window display)))
       	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)
	      (windows_fill_area ;(:display-address display)
			     (:window-address window)
			     (:graph-env-address ge)
			     vx vy n  0 0)
	    (windows_fill_area ;(:display-address display)
			   (:window-address (:top-opaque-window window))
			   (:graph-env-address ge)
			   vx vy n 
			   (:window-offset-x window)
			   (:window-offset-y window)
			   ))
          )))

					
(defun :draw-polyline (display ge n vx vy)
  (when (:drawing-flag display)
	(let ((window (#:display:window display)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)    
	      (windows_draw_lines ;(:display-address display)
			      (:window-address window)
			      (:graph-env-address ge)
			      vx vy n 0 0)
	    (windows_draw_lines ;(:display-address display)
			    (:window-address (:top-opaque-window window))
			    (:graph-env-address ge)
			    vx vy n
			    (:window-offset-x window)
			    (:window-offset-y window))))))


(defun :draw-polymarker (display ge n vx vy)
  (when (:drawing-flag display)
	(let ((window (#:display:window display)))
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque)
	      (windows_draw_points ;(:display-address display)
			       (:window-address window)
			       (:graph-env-address ge)
			       vx vy n
			       0 0)
	    (windows_draw_points ;(:display-address display)
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
	(let ((window (#:display:window display))
	      )
	  (if (eq (#:image:rectangle:window:window-type window) 'opaque) 
	      (windows_draw_segments ;(:display-address display)
				 (:window-address window)
				 (:graph-env-address ge)
				 vx1 vy1 vx2 vy2 n 0 0)
	    (windows_draw_segments ;(:display-address display)
			       (:window-address (:top-opaque-window window))
			       (:graph-env-address ge)
			       vx1 vy1 vx2 vy2 n
			       (:window-offset-x window)
			       (:window-offset-y window))))))


(defun :draw-rectangles (display ge n vx vy vw vh)
  ;; Draws a set of rectangles on the display DISPLAY.
  ;; The number of rectangles to draw is the integer N.  The
  ;; graphic context is GE.  Nothing of interest is returned.
  (when (:drawing-flag display)
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
	      (windows_draw_rectangles ;(:display-address display)
				   (:window-address window)
				   (:graph-env-address ge)
				   vx vy vw vh n 0 0 flag)
	    (windows_draw_rectangles ;(:display-address display)
				 (:window-address (:top-opaque-window window))
				 (:graph-env-address ge)
				 vx vy vw vh n
				 (:window-offset-x window)
				 (:window-offset-y window)
				 flag)))))



(defun :fill-rectangles (display ge n vx vy vw vh)
  ;; Fills a set of rectangles on the display DISPLAY.
  ;; The number of rectangles to fill is the integer N.  The
  ;; graphic context is GE.  Nothing of interest is returned.
  (when (:drawing-flag display)
	(let ((window (#:display:window display))
	      (flag 0))
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
	      (windows_fill_rectangles ;(:display-address display)
				   (:window-address window)
				   (:graph-env-address ge)
				   vx vy vw vh n  0 0 flag)
	    (windows_fill_rectangles ;(:display-address display)
				 (:window-address (:top-opaque-window window))
				 (:graph-env-address ge)
				 vx vy vw vh n 
				 (:window-offset-x window)
				 (:window-offset-y window)
				 flag))
)))
