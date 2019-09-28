(eval-when (eval)
	   (unless (getdef '#:display:x11:xbitmap)
		   (libload #u"X11/x11event")))

(defvar #:sys-package:colon '#:display:x11)



(de :kill-window (display win)
    (x11_kill_window (:xdisplay display) (:xwindow win) (:xgraph-env win))
    (:xwindow win ())
    (:xgraph-env win ()))

(de :pop-window (display win)
    (x11_pop_window (:xdisplay display) (:xwindow win))
    win)

(de :move-behind-window (display win1 win2)
    (x11_move_behind_window (:xdisplay display) (:xwindow win1))
    win1)

(de :current-keyboard-focus-window (display win))

(de :uncurrent-keyboard-focus-window (display win))

(de :find-window (display x y)
    (x11_find_window (:xdisplay display) x y))

(defun :map-window (display win :x :y :lx :ly)
    (let ((display-args (:vector-args display)))
      (x11_map_window (:xdisplay display) (:xwindow win) :x :y display-args)
      (set :lx (vref display-args 0))
      (set :ly  (vref display-args 1))))


;;;;;;;;;;;;;;;;;;;;;;; methodes des fenetres ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(de #:image:rectangle:window:set-window-hints (window))

(de #:image:rectangle:window:modify-window-hints (window))


(defun :make-top-extend (window display)
  (let ((extend (or (#:window:extend window) ({top-window}:make))))
    (ifn (#:window:title window)
	 (#:window:title window "lelisp"))
    (ifn ({opaque-window}:window-class extend)
	 ({opaque-window}:window-class extend
				       (#:display:x11:display-class display)))
    (ifn ({opaque-window}:window-name extend)
	 ({opaque-window}:window-name extend (or (#:window:title window)
						 "lelisp")))
    (ifn ({top-window}:icon-title extend)
	 ({top-window}:icon-title extend (or (#:window:title window)
					     "lelisp")))
    (ifn ({opaque-window}:border-pixel extend)
	 ({opaque-window}:border-pixel extend (#:display:foreground display)))
    (#:window:extend window extend)))


(defun :make-opaque-extend (window display)
  (let ((extend (or (#:window:extend window)
		    ({opaque-window}:make))))
    (ifn (#:window:title window)
	 (#:window:title window "lelisp"))
    (ifn ({opaque-window}:window-class extend)
	 ({opaque-window}:window-class extend
				       (#:display:x11:display-class display)))
    (ifn ({opaque-window}:window-name extend)
	 ({opaque-window}:window-name extend (or (#:window:title window)
						 "lelisp")))
    (ifn ({opaque-window}:border-pixel extend)
	 ({opaque-window}:border-pixel extend	
				       (#:display:foreground display)))
    (#:window:extend window extend)))




;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; creating a top window
;;;;;;;;;;;;;;;;;;;;;;;;;;;;    

(defun :create-window (display win)
  (#:image:rectangle:window:window-type win 'opaque)
  (ifn  (#:window:graph-env win)
	(#:window:graph-env win (#:graph-env:make)))
  (let* ( 
	 (display-args (:vector-args display))
	 (vi (#:window:visible win)) 
	 (cursor (vref (:cursor-vector display) (#:window:cursor win)))
	 (extend (:make-top-extend win display))
	 (properties (#:image:rectangle:window:graphic-properties win))
	 )
    (fillvector display-args 0 0 19)
    (vset display-args 0 (#:window:left win))
    (vset display-args 1 (#:window:top win))
    (vset display-args 2 (#:window:width win))
    (vset display-args 3 (#:window:height win))
    (vset display-args 4 (#:window:title  win))
    (vset display-args 5 (or (#:window:hilited win) 
			     (#:window:hilited
			      win
			      (#:display:x11:top-window-border display))))
    (vset display-args 10
	  (:xcolor (or (if (#:window:graph-env win)
			   (#:graph-env:background (#:window:graph-env win)))
		       (#:display:background display))))
    (if ({opaque-window}:border-pixel extend)
	(vset display-args 11 (:xcolor ({opaque-window}:border-pixel extend)))
      (vset display-args 11 
	    (:xcolor ({opaque-window}:border-pixel
		      extend (#:display:foreground display)))))
    (vset display-args 14 
	  (if (#:image:rectangle:window:events-list win)
	      (:compute-event-mask (#:image:rectangle:window:events-list win))
	    (#:image:rectangle:window:events-list win  
						  (:top-events-list display))
	    ({x11window}:events-mask extend (:top-events-mask display))))
    
    (vset display-args 15 ({top-window}:icon-title extend))
    (vset display-args 16 ({opaque-window}:window-class extend))
    (while properties
      (selectq (nextl properties)
	       (backing-store
		(vset display-args 6 1))
	       (save-under
		(vset display-args 7 1))
	       (transient
		(vset display-args 8 1))
	       (iconic-state
		(vset display-args 17 1))
	       (override-redirect
		(vset display-args 9 1))
	       (user-position
		(vset display-args 12 1))
	       (user-size
		(vset display-args 13 1))))
    (vset display-args 18 ({opaque-window}:window-name extend))
    (:window-address win (x11_create_window
			  (:display-address display)
			  win
			  display-args
			  cursor
			  (:window-address (:root-window display))
			  (or vi 1)))
    (:x11-create-graph-env display win)
    win))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; creating a subwindow (Opaque : InputOutput)
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;    

(defun :create-subwindow (display win)
  ;;; If father window is transparent --> window is transparent (Input Only)
  (if (#:window:father win)
      (when (eq (#:image:rectangle:window:window-type (#:window:father win))
	      'transparent)
	  (when (eq (#:image:rectangle:window:window-type win) 'opaque)
		(printerror ':create-subwindow 
			    "Window must be transparent" win))
	  (#:image:rectangle:window:window-type win 'transparent)))
  (let ((type-window (or (#:image:rectangle:window:window-type win)
			 (:default-window-type display))))
    (if (eq type-window 'opaque)
	(:x11-create-subwindow display win)
      (:x11-create-transparent-window display win))))


(defun :x11-create-subwindow (display win)
  (ifn (#:window:graph-env win)
       (#:window:graph-env win (#:graph-env:make)))
  (#:image:rectangle:window:window-type win 'opaque)
  (let* ((display-args (:vector-args display))
	 (vi (#:window:visible win)) 
	 (cursor (vref (:cursor-vector display) 
		       (or (#:window:cursor win)
			   (#:window:cursor win (#:window:cursor
						 (#:window:father win))))))
	 (extend (:make-opaque-extend win display))
	 (properties (#:image:rectangle:window:graphic-properties win)))
    (fillvector display-args  0  0 19)
    (vset display-args 0 (#:window:left win))
    (vset display-args 1 (#:window:top win))
    (vset display-args 2 (#:window:width win))
    (vset display-args 3 (#:window:height win))
    (vset display-args 4
	  (or (#:window:hilited win) 
	      (#:window:hilited win (#:display:x11:subwindow-border display))))
    (vset display-args 8
	  (:xcolor (or (if (#:window:graph-env win)
			   (#:graph-env:background (#:window:graph-env win)))
		       (#:display:background display))))
    (if  ({opaque-window}:border-pixel extend)
	(vset display-args 9 (:xcolor ({opaque-window}:border-pixel extend)))
      (vset display-args 9 
	    (:xcolor ({opaque-window}:border-pixel 
		      extend
		      (#:display:foreground display)))))
    (vset display-args 10
	  (if (#:image:rectangle:window:events-list win)
	      (:compute-event-mask (#:image:rectangle:window:events-list win))
	    (#:image:rectangle:window:events-list win (:opaque-events-list display))
	    ({x11window}:events-mask extend (:opaque-events-mask display))))
    (vset display-args 11 ({opaque-window}:window-class extend))
    (while properties
      (selectq (nextl properties)
	       (backing-store
		(vset display-args 5 1))
	       (save-under
		(vset display-args 6 1))
	       (transient
		(vset display-args 7 1))))
    (vset display-args 12 ({opaque-window}:window-name extend))
    (:window-address win (x11_create_subwindow
			  (:display-address display)
			  win
			  display-args
			  cursor
			  (:window-address (#:window:father win))
			  (or vi 1)))
    (:x11-create-graph-env display win)
    win))


(defun :make-transparent-extend (win display)
  (let ((extend (or (#:window:extend win)
		    ({transparent-window}:make))))
    ({transparent-window}:offset-x extend 0)
    ({transparent-window}:offset-y extend 0)
    (#:window:extend win extend)))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; creating a subwindow (Transparent : InputOnly)
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;    

(defun :x11-create-transparent-window (display win)
  (ifn (#:window:graph-env win)
       (#:window:graph-env win (#:graph-env:make)))
  (#:image:rectangle:window:window-type win 'transparent)
  (let* (
	 (cursor (vref (:cursor-vector display) 
		       (or (#:window:cursor win)
			   (#:window:cursor win (#:window:cursor
						 (#:window:father win))))))
	 (extend (or (#:window:extend win)
		     (:make-transparent-extend win display)))
	 (event-mask
	  (if (#:image:rectangle:window:events-list win)
	      (:compute-event-mask (#:image:rectangle:window:events-list win))
	    (#:image:rectangle:window:events-list win 
				  (:transparent-events-list display))
	    ({x11window}:events-mask extend
				     (:transparent-events-mask display))))
	 (x (#:window:left win))
	 (y (#:window:top win))
	 (w (#:window:width win))
	 (h (#:window:height win))
	 (vi (#:window:visible win))
	 (father (#:window:father win)))
    ({transparent-window}:top-opaque-father 
     extend
     (:calculate-top-opaque-father win))
    (:window-address 
     win (x11_create_transparentwindow 
	  (:display-address display)
	  win x y w h vi event-mask
	  (:window-address father)
	  ))
    (:x11-create-graph-env-for-transparent display win)
    win))


(defun :calculate-top-opaque-father (window)
  (let ((w window))
    (while (and w (eq (#:image:rectangle:window:window-type w) 'transparent))
      (setq w (#:window:father w)))
    w))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Put window as current drawing area 
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun :current-window (display win)
  (:drawing-flag display (send 'is-visible (#:window:extend win) win)))


(defun {transparent-window}:is-visible (extend win)
  (:visible win))


(defun {x11window}:is-visible (extend win)
  (if (eq 1 (#:window:visible win)) t
    ()))


(defun :uncurrent-window (display win)
  (:drawing-flag display ()))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; creating a Graph-env for an Opaque window
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;    

(defun :x11-create-graph-env (display win)
  (let ((ge (or (#:window:graph-env win) (#:graph-env:make))))
    (#:window:graph-env win ge)
    (#:graph-env:pattern ge 1)
    (#:graph-env:clip-x ge 0)
    (#:graph-env:clip-y ge 0)
    (#:graph-env:clip-w ge (#:window:width win))
    (#:graph-env:clip-h ge (#:window:height win))
    (ifn (#:graph-env:foreground ge)
	 (#:graph-env:foreground ge 
				 (or
				  (if (#:display:main-graph-env display)
				      (#:graph-env:foreground
				       (#:display:main-graph-env display)))
				  (#:display:foreground display))))
    (ifn (#:graph-env:background ge)
	 (#:graph-env:background ge 
				 (or (#:graph-env:background ge)
				     (if (#:display:main-graph-env display)
					 (#:graph-env:background
					  (#:display:main-graph-env display)))
				     (#:display:background display))))  
    (#:graph-env:display ge display)
    (#:graph-env:extend ge (#:window:extend win))
    (let ((font (vref (:font-vector display) (#:graph-env:font ge)))
	  (line-style (vref (:line-style-vector display)
			    (#:graph-env:line-style ge)))
	  (pattern (vref (:pattern-vector display)
			 (#:graph-env:pattern ge)))
	  (mode (vref (:mode-vector display) (#:graph-env:mode ge))))
      (:window-xgraph-env win 
			  (x11_new_create_graph_env 
			   (:display-address display)
			   (:window-address win)
			   font
			   (vref line-style 0)
			   (vref line-style 1)
			   pattern
			   mode
			   (:xcolor (#:graph-env:foreground ge))
			   (:xcolor (#:graph-env:background ge))
			   (#:display:x11:graph-env-mode display)))
      (:graph-env-font-y ge (x11_font_ascent font))
      (:graph-env-font-h ge (x11_font_height font))
      (x11_set_clip (:display-address display)
		    (:window-xgraph-env win)
		    0 0
		    (#:window:width win)
		    (#:window:height win))
      )
    ge))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; creating a Graph-env for a Transparent window
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;    

(defun :x11-create-graph-env-for-transparent (display win)
  (let ((ge (or (#:window:graph-env win) (#:graph-env:make))))
    (#:window:graph-env win ge)
    (#:graph-env:pattern ge 1)
    (#:graph-env:clip-x ge 0)
    (#:graph-env:clip-y ge 0)
    (#:graph-env:clip-w ge (#:window:width win))
    (#:graph-env:clip-h ge (#:window:height win))
    (ifn  (#:graph-env:foreground ge)
	  (#:graph-env:foreground ge 
				  (or
				   (if (#:display:main-graph-env display)
				       (#:graph-env:foreground
					(#:display:main-graph-env display)))
				   (#:display:foreground display))))
    (ifn (#:graph-env:background ge)
	 (#:graph-env:background ge 
				 (or (#:graph-env:background ge)
				     (if (#:display:main-graph-env display)
					 (#:graph-env:background
					  (#:display:main-graph-env display)))
				     (#:display:background display))))
    (#:graph-env:display ge display)
    (#:graph-env:extend ge (#:window:extend win))
    (let ((font (vref (:font-vector display) (#:graph-env:font ge)))
	  (line-style (vref (:line-style-vector display)
			    (#:graph-env:line-style ge)))
	  (pattern (vref (:pattern-vector display) (#:graph-env:pattern ge)))
	  (mode (vref (:mode-vector display) (#:graph-env:mode ge))))
      (:window-xgraph-env win (x11_new_create_graph_env 
			       (:display-address display)
			       (:window-address 
				(:top-opaque-window 
				 win))
			       font
			       (vref line-style 0)
			       (vref line-style 1)
			       pattern
			       mode
			       (:xcolor (#:graph-env:foreground ge))
			       (:xcolor (#:graph-env:background ge))
			       (#:display:x11:graph-env-mode display)))
      (:graph-env-font-y ge (x11_font_ascent font))
      (:graph-env-font-h ge (x11_font_height font)))
    (:view-rect ge (#:image:rectangle:make))
    (:transparent-set-clip-for-window display win)
    ge))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; A lot of initialisations for transparent window
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defun #:image:rectangle:window:woffset-x (window)
  (send 'woffset-x (#:window:extend window) window))


(defun #:image:rectangle:window:woffset-y (window)
  (send 'woffset-y (#:window:extend window) window))


(defun {x11window}:woffset-x (extend win)
  0)


(defun {x11window}:woffset-y (extend win)
  0)


(defun {transparent-window}:woffset-x (extend win)
  (:window-offset-x win))


(defun {transparent-window}:woffset-y (extend win)
  (:window-offset-y win))


(defun :set-offsets (win)
  (let ((father (#:window:father win)))
    (:window-offset-x win (if father
			      (add (#:window:left win)
				   (send 'woffset-x father))
			    0))
    (:window-offset-y win (if father
			      (add (#:window:top win) 
				   (send 'woffset-y father))
			    0))))


(defun :set-view-rectangle (win)
  (let* ((ge (#:window:graph-env win))
	 (fa (#:window:father win))
	 (rect (:view-rect ge))
	 )
    (#:image:rectangle:x rect 0)
    (#:image:rectangle:y rect 0)
    (#:image:rectangle:w rect (#:window:width win))
    (#:image:rectangle:h rect (#:window:height win))
    (:view-rect ge (:intersect rect
			       (#:graph-env:clip-x ge)
			       (#:graph-env:clip-y ge)
			       (#:graph-env:clip-w ge)
			       (#:graph-env:clip-h ge)))
    (when (and fa (eq (#:image:rectangle:window:window-type fa) 'transparent))
	  (:view-rect ge
		      (:intersect rect
				  (sub (#:image:rectangle:x 
					(:view-rect (#:window:graph-env fa)))
				       (#:window:left win))
				  (sub (#:image:rectangle:y 
					(:view-rect (#:window:graph-env fa)))
				       (#:window:top win))
				  (#:image:rectangle:w 
				   (:view-rect (#:window:graph-env fa)))
				  (#:image:rectangle:h 
				   (:view-rect (#:window:graph-env fa))))))))


(defun :set-visibility (win)
  (let ((father (#:window:father win))
	(viewrect (:view-rect (#:window:graph-env win)))
	)
    (:window-visible
     win
     (and (eq 1 (#:window:visible win))
	  (or (null father)
	      (and (or (eq (#:image:rectangle:window:window-type father)
			   'opaque)
		       (:visible father))
		   (gt (#:image:rectangle:w viewrect) 0)
		   (gt (#:image:rectangle:h viewrect) 0)))))))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Clearing a window
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun :clear-graph-env (display ge)
  (let ((window (#:display:window display)))
    (if (eq (#:image:rectangle:window:window-type window) 'opaque)
	(:opaque-clear-graph-env window display ge)
      (:transparent-clear-graph-env window display ge))
    window))


(defun :transparent-clear-graph-env (window display ge)
  ;; Clear with The Top Opaque parent background
  (when (:drawing-flag display)
	(let (pr-window pr-ge pr-bg child-bg rect)
	  (setq pr-window (:top-opaque-window window)
		pr-ge (#:window:graph-env pr-window)
		pr-bg (#:graph-env:background pr-ge)
		child-bg (#:graph-env:background (#:window:graph-env window))
		)
	  (when (neq pr-bg child-bg)
		(x11_setwindow_background (:display-address display) 
					  (:window-address pr-window)
					  (:xcolor child-bg)))
	  (setq rect (:view-rect ge))
	  (x11_clear_window (:display-address display)
			    (:window-address pr-window)
			    (add (:window-offset-x window) 
				 (#:image:rectangle:x rect))
			    (add (:window-offset-y window)
				 (#:image:rectangle:y rect))
			    (#:image:rectangle:w rect)
			    (#:image:rectangle:h rect)
			    0)
	  (when (neq pr-bg child-bg)
		(x11_setwindow_background (:display-address display) 
					  (:window-address pr-window)
					  (:xcolor pr-bg)))
	  ))))


(defun :opaque-clear-graph-env (window display ge)
  (x11_clear_window (:display-address display)
		    (:window-address window)
		    (#:graph-env:clip-x ge)
		    (#:graph-env:clip-y ge)
		    (#:graph-env:clip-w ge)
		    (#:graph-env:clip-h ge)
		    0))


(defun :transparent-set-clip-for-subwindows (win display)
  (:transparent-set-clip-for-window display win)
  (mapc (lambda (w) 
	  (:transparent-set-clip-for-subwindows w display))
	(#:window:subwindows win)))


(defun :transparent-set-clip-for-window (display win)
  (:set-offsets win)
  (:set-view-rectangle win)
  (:set-visibility win)
  (let ((ge (#:window:graph-env win))
	rect)
    (setq rect (:view-rect ge))
    (x11_set_clip (:display-address display)
		  (:window-xgraph-env win)
		  (add (#:image:rectangle:x rect) (:window-offset-x win))
		  (add (#:image:rectangle:y rect) (:window-offset-y win))
		  (#:image:rectangle:w rect)
		  (#:image:rectangle:h rect))
    ))


(defun :opaque-set-clip-for-subwindows (win display ge x y w h)
  ;; x, y, w, h may be null.
  (x11_set_clip (:display-address display)
		(:graph-env-address ge)
		(or x 0)
		(or y 0)
		(or w (#:window:width win))
		(or h (#:window:height win))
		)
  (mapc (lambda (subwin)
	  (:set-clip-for-subwindows subwin display (#:window:graph-env subwin)
				    () () () ()))
	(#:window:subwindows win)))





;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Positioning the Clip for Windows 
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defun :current-clip (display ge x y w h)
  (let ((window (#:display:window display)))
    (when window
	  (:set-clip-for-subwindows window display ge x y w h)
	  window)))


(defun :set-clip-for-subwindows (window display ge x y w h)
  (if (eq (#:image:rectangle:window:window-type window) 'opaque)
      (:opaque-set-clip-for-subwindows window display ge x y w h)
    (:transparent-set-clip-for-subwindows window display)))


(defun :intersect (rect x y w h)
  (let ((x0 (#:image:rectangle:x rect))
	(y0 (#:image:rectangle:y rect))
	(w0 (#:image:rectangle:w rect))
	(h0 (#:image:rectangle:h rect))
	(u (add x w))
	(v (add y h)))
    (#:image:rectangle:x rect (or (gt x0 x) x)) 
    (#:image:rectangle:y rect (or (gt y0 y) y)) 
    (#:image:rectangle:w rect (sub (or (lt (add x0 w0) u) u)
				   (#:image:rectangle:x rect)))
    (#:image:rectangle:h rect (sub (or (lt (add y0 h0) v) v)
				   (#:image:rectangle:y rect)))
    rect))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Window Modification
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defun :modify-window (display win x y w h title hilited visible)
  (let ((extend (#:window:extend win)))
    (when title (#:window:title win title))
    (when hilited (#:window:hilited win hilited))
    (when visible (#:window:visible win visible))
    (if (or x y w h)
	(if (and x y w h)
	    (:move-resize-window display win x y w h)
	  (if (or x y)
	      (:move-window display win x y))
	  (if (or w h)
	      (:resize-window display win w h))))
    (if hilited 
	(if (eq (#:image:rectangle:window:window-type win) 'opaque)
	    (:window-border display win hilited)))
    (if title
	(when (eq (#:image:rectangle:window:window-type win) 'opaque)
	      (x11_change_title (:display-address display)
				(:window-address win) title)
	      ;;; Set also the icon title
	      (when (null (#:window:father win))
		    (x11_change_icontitle  (:display-address display)
					   (:window-address win)
					   title))))
    (if visible
	(if (eq (#:window:visible win) 1)
	    (x11_window_map (:display-address display) 
			    (:window-address win))
	  (x11_window_unmap (:display-address display)
			    (:window-address win))))
    (:set-clip-for-subwindows win display (#:window:graph-env win) 0 0 w h)
    ;;; If window WIN was the current-window
    ;;; we must set it again
    (when (eq win (#:display:window display))
          (:current-window display win))
    win))


(defun :window-map (display window)
  (x11_window_map (:display-address display) (:window-address window))
  window)


(defun :window-unmap (display window)
  (x11_window_unmap (:display-address display) (:window-address window))
  window)


(defun :update-window (display win x y w h)
  (when x (#:window:left win x))
  (when y (#:window:top win y))
  (when w (#:window:width win w))
  (when h (#:window:height win h))
  (:set-clip-for-subwindows win display (#:window:graph-env win)
			    0 0
			    (#:window:width win)
			    (#:window:height win)
			    )
  ;; If window WIN was the current-window, we must set it again
  (when (eq win (#:display:window display))
	(:current-window display win))
  win)


(defun :window-clear-region (display window x y w h)
  (unless x
	  (setq x 0))
  (unless y
	  (setq y 0))
  (unless w
	  (setq w (#:window:width window)))
  (unless h
	  (setq h (#:window:height window)))
  (if (eq (#:image:rectangle:window:window-type window) 'opaque)
      (x11_clear_window (:display-address display)
			(:window-address window)
			x y w h 0)
    ;; If window is transparent, we must not erase out of it.
    (let ((rect (:view-rect (#:window:graph-env window))))
      (when (lt x 0)
	    (setq w (add w x) x 0))
      (when (lt y 0)
	    (setq h (add h y) y 0))
      (when (gt (add x w) (#:image:rectangle:w rect))
	    (setq w (sub (#:image:rectangle:w rect) x)))
      (when (gt (add y h) (#:image:rectangle:h rect))
	    (setq h (sub (#:image:rectangle:h rect) y)))
      (x11_clear_window (:display-address display)
			(:window-address (:top-opaque-window window))
			(add x (add (:window-offset-x window) 
				    (#:image:rectangle:x rect)))
			(add y (add (:window-offset-y window)
				    (#:image:rectangle:y rect)))
			w h 0)))
  window)


(defun :window-background (display window bg)
  (if (and (eq (#:image:rectangle:window:window-type window) 'opaque)
	   (neq window (#:display:x11:root-window display)))
      (x11_setwindow_background (:display-address display)
				(:window-address window)
				(:xcolor bg)))
  (when (#:window:graph-env window)
	(#:graph-env:background (#:window:graph-env window) bg)
	(x11_set_background (:display-address display) 
			    (:graph-env-address (#:window:graph-env window))
			    (:xcolor bg))))


(defun :window-border (display window border)
  (ifn (eq (#:image:rectangle:window:window-type window) 'opaque) 
       window
       (if (#:window:father window)
	   (x11_changewindow_border (:display-address display)
				    (:window-address window)
				    border)
	 (x11_topchangewindow_border (:display-address display)
				     (:window-address window)
				     border
				     ({x11window}:events-mask
				      (#:window:extend window))))
       (#:window:hilited window border)))


(defun :set-border-color (display window color)
  (if (eq (#:image:rectangle:window:window-type window) 'opaque)
      (x11_changewindow_bordercolor (:display-address display)
				    (:window-address window)
				    (:xcolor color)))
  color)


(defun :move-window (display window x y)
  (when x (#:window:left window x))
  (when y (#:window:top window y))
  (if (#:window:father window)
      (x11_move_window (:display-address display)
		       (:window-address window)
		       (#:window:left window) (#:window:top window))
    (x11_topmove_window (:display-address display)
			(:window-address window)
			(#:window:left window) (#:window:top window)
			({x11window}:events-mask
			 (#:window:extend window)))))



(defun :resize-window (display window w h)
  (when w (#:window:width window w))
  (when h (#:window:height window h))
  (if (#:window:father window)
      (x11_resize_window (:display-address display)
			 (:window-address window)
			 (#:window:width window) 
			 (#:window:height window))
    (x11_topresize_window (:display-address display)
			  (:window-address window)
			  (#:window:width window) 
			  (#:window:height window)
			  ({x11window}:events-mask (#:window:extend window)))))


(defun :move-resize-window (display window x y w h)
  (when x (#:window:left window x))
  (when y (#:window:top window y))
  (when w (#:window:width window w))
  (when h (#:window:height window h))
  (if (#:window:father window)
      (x11_moveresize_window (:display-address display)
			     (:window-address window)
			     (#:window:left window)
			     (#:window:top window)
			     (#:window:width window)
			     (#:window:height window)
			     )
    (x11_topmoveresize_window
     (:display-address display)
     (:window-address window)
     (#:window:left window)
     (#:window:top window)
     (#:window:width window)
     (#:window:height window)
     ({x11window}:events-mask (#:window:extend window))
     )))


(defun :window-events-list (display window events)
  (let ((extend (#:window:extend window)))
    (x11_changelongmask_window
     (:display-address display)
     (:window-address window)
     ({x11window}:events-mask extend (:compute-event-mask  events))))
  (#:image:rectangle:window:events-list  window events))


(defun :window-title (display window title)
  (x11_change_title (:display-address display)
		    (:window-address window)
		    title)
  (when (null (#:window:father window))
	(x11_change_icontitle (:display-address display)
			      (:window-address window)
			      title))
  (#:window:title window title))


(defun :set-icontitle (display window title)
  (x11_change_icontitle (:display-address display)
			(:window-address window)
			title))


(defun :set-icon-window (display window bitmap)
  (x11_seticon_pixmap  (:display-address display)
		       (:window-address window)
			(:xbitmap bitmap)))


(defun :set-window-bitmap (display window bitmap)
  (x11_set_window_pixmap (:display-address display)
			 (:window-address window)
			 (:xbitmap bitmap)))


(defun :window-state (display window state)
  (selectq state
	   (iconify
	    (x11_setwindow_state  (:display-address display)
				  (:window-address window)
				  1))
	   (map
	    (x11_setwindow_state  (:display-address display)
				  (:window-address window)
				  0))
	   (unmap
	    (:window-unmap display window))
	   (raise
	    (:window-raise display window))
	   (lower
	    (:window-lower display window))
	   (t
	    (error 'window-state ':not-a-valid-argument state)))
  (#:image:rectangle:window:state window state))


(defun :bitmap-to-window (display bitmap)
  ;;; For experimental use Only
  ;;; could be used to bufferise operations
  ;;;
  (let* ((root (#:display:root-window display))
	 (extend ({opaque-window}:make))
	 (window (#:image:rectangle:window:make)))
    (#:window:left window 0)
    (#:window:top window 0)
    (#:window:width window (#:bitmap:w bitmap))
    (#:window:height window (#:bitmap:h bitmap))
    ({x11window}:xwindow extend (:xbitmap bitmap))
    (#:window:cursor window 0)
    (#:window:display window display)
    (#:window:extend window extend)
    (#:image:rectangle:window:window-type window 'opaque)
    (#:window:visible window 1)
    (#:window:hilited window 0)
    (#:image:rectangle:window:state window 'map)
    (#:window:properties window '(bitmap-window))
    (:x11-create-graph-env display window)
    window))


(defun :window-raise (display win)
  (x11_pop_window (:xdisplay display) (:xwindow win)))


(defun :window-lower (display win1)
  (x11_move_behind_window (:xdisplay display) (:xwindow win1)))


(defun :window-change-attributes (display window props-set props-unset)
  ;;; Change window graphiques properties
  ;;; PROPS-SET is the list of new properties to set
  ;;; PROPS-UNSET is the list of properties to unset
  ;;; the possible properties arent : backing-store, override-redirect,
  ;;; save-under and transient
  (if (and
       (eq (#:image:rectangle:window:window-type window) 'opaque)
       (neq window (#:display:x11:root-window display)))
      (let ((flags (makevector 4 0))
	    (attrs (makevector 4 0)))
	(mapc (lambda (x)
		(selectq x
			 (backing-store
			  (vset flags 0 1)
			  (vset attrs 0 1))
			 (save-under
			  (vset flags 1 1)
			  (vset attrs 1 1))
			 (override-redirect
			  (vset flags 2 1)
			  (vset attrs 2 1))
			 (transient
			  (vset flags 3 1)
			  (vset attrs 3 1))))
	      props-set)
	(mapc (lambda (x)
		(selectq x
			 (backing-store
			  (vset flags 0 1)
			  (vset attrs 0 0))
			 (save-under
			  (vset flags 1 1)
			  (vset attrs 1 0))
			 (override-redirect
			  (vset flags 2 1)
			  (vset attrs 2 0))
			 (transient
			  (vset flags 3 1)
			  (vset attrs 3 0))))
	      props-unset)
	(x11_change_attributes (:display-address display)
				(:window-address window)
				flags attrs))))

