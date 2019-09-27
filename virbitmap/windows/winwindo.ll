;;;; .EnTete	"Le-Lisp version 15.2x" " " "winwindow.ll"
;;;; .Date	"2003/05/25"
;;;; .EnPied	"winwindow.ll"
;;;; .Version	"1.00"
;;;; .Auteur 	"C. Jullien"
;;;; .Annexe I	""

(eval-when (eval)
	   (unless (getdef '#:display:windows:winbitmap)
		   (libload #u"windows/winstruct")))
  
(defvar #:sys-package:colon '#:display:windows)
        
(defun :kill-window (display win)
    (windows_kill_window
           ; (:windows-display display) 
             (:windows-window win) 
             (if (eq (#:image:rectangle:window:window-type win) 'transparent)
                 0
                 (:windows-graph-env win)))
    (:windows-window win ())
    (:windows-graph-env win ()))

(defun :pop-window (display win)
    (windows_pop_window
           ; (:windows-display display) 
             (:windows-window win))
    win)

(defun :move-behind-window (display win1 win2)
    (when (eq (#:window:father win1) (#:window:father win2))
          (windows_move_behind_window
                 ; (:windows-display display) 
                   (:windows-window win1)
                   (:windows-window win2)))
    win1)

(defun :current-keyboard-focus-window (display win)
)
#|	Nothing to do !!
   (windows_keyboard_focus
          ; (:windows-display display)
            (:windows-window win)
            1))
|#

(defun :uncurrent-keyboard-focus-window (display win)
)
#|	Nothing to do !!
   (windows_keyboard_focus
          ; (:windows-display display)
            (:windows-window win)
            0))
|#

(defun :find-window (display x y)
   (windowp (windows_find_window
                   ; (:windisplay display) 
                     x y)))

(defun :map-window (display win :x :y :lx :ly)
   (let ((display-args (:vector-args display)))
        (windows_map_window
               ; (:windows-display display) 
                 (:windows-window win) :x :y display-args)
        (set :lx (vref display-args 0))
        (set :ly (vref display-args 1))))

;;;;;;;;;;;;;;;;;;;;;;; windows methods ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun #:image:rectangle:window:set-window-hints (window))

(defun #:image:rectangle:window:modify-window-hints (window))

(defun :make-top-extend (window display)
   (let ((extend (or (#:window:extend window) ({top-window}:make))))
        (#:window:extend window extend)))

(defun :make-opaque-extend (window display)
   (let ((extend (or (#:window:extend window) ({opaque-window}:make))))
        (#:window:extend window extend)))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; creating a top window
;;;;;;;;;;;;;;;;;;;;;;;;;;;;    

(defun :create-window (display win)
   (#:image:rectangle:window:window-type win 'opaque)
   (ifn (#:window:graph-env win)
        (#:window:graph-env win (#:graph-env:make)))
   (let* ((display-args (:vector-args display))
          (vi (#:window:visible win)) 
          (cursor (vref (:cursor-vector display) (#:window:cursor win)))
          (extend (:make-top-extend win display))
          (properties (#:image:rectangle:window:graphic-properties win)))
         (fillvector display-args 0 0 20)
         (vset display-args 0 (#:window:left win))
         (vset display-args 1 (#:window:top win))
         (vset display-args 2 (#:window:width win))
         (vset display-args 3 (#:window:height win))
         (vset display-args 4 (or (#:window:hilited win) 
                                  (#:window:hilited
                                    win
                                    (:top-window-border display))))
         (while properties
                (selectq (nextl properties)
                         (save-under        (vset display-args  5 1))
                         (override-redirect (vset display-args  6 1))
                         (transient         (vset display-args 19 1))))
	(:window-address win (windows_create_window
                                    ; (:display-address display)
                                    display-args
                                    (#:window:title win)
                                    cursor
                                    (or vi 1)
                                    win
                                    ))
        (ifn (eq (:window-address win) 0)
             (:windows-create-graph-env display win)
             (error ':create-window "Insufficient Memory" win))
        (if vi
            (#:image:rectangle:window:state win 'map)
            (#:image:rectangle:window:state win 'unmap))
        (unless (#:image:rectangle:window:events-list win)
                (#:image:rectangle:window:events-list win  
                  (:top-events-list display)))
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
            (:windows-create-subwindow display win)
            (:windows-create-transparent-window display win))))

(defun :windows-create-subwindow (display win)
   (ifn (#:window:graph-env win)
        (#:window:graph-env win (#:graph-env:make)))
   (#:image:rectangle:window:window-type win 'opaque)
   (let* ((display-args (:vector-args display))
          (vi (#:window:visible win)) 
          (cursor (vref (:cursor-vector display) 
                        (or (#:window:cursor win)
                            (#:window:cursor win (#:window:cursor
                                                   (#:window:father win))))))
          (extend (:make-top-extend win display))
          (properties (#:image:rectangle:window:graphic-properties win)))
	(fillvector display-args  0  0 19)
        (vset display-args 0 (#:window:left win))
        (vset display-args 1 (#:window:top win))
        (vset display-args 2 (#:window:width win))
        (vset display-args 3 (#:window:height win))
        (:window-address win (windows_create_subwindow
                                    ; (:display-address display)
                                    display-args
                                    (#:window:title  win)
                                    cursor
                                    (or vi 1)
                                    (:window-address (#:window:father win))
                                    win
                                    ))
	(ifn (eq (:window-address win) 0)
             (:windows-create-graph-env display win)
             (error ':create-subwindow "Insufficient Memory" win))
	(unless (#:image:rectangle:window:events-list win)
                (#:image:rectangle:window:events-list win 
                        (:opaque-events-list display)))
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

(defun :windows-create-transparent-window (display win)
   (ifn (#:window:graph-env win)
        (#:window:graph-env win (#:graph-env:make)))
   (#:image:rectangle:window:window-type win 'transparent)
   (let* ((cursor (vref (:cursor-vector display) 
                        (or (#:window:cursor win)
                            (#:window:cursor win (#:window:cursor
                                                     (#:window:father win))))))
          (extend (or (#:window:extend win)
                      (:make-transparent-extend win display)))
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
                 win
                 (windows_create_transwindow 
                        ; (:display-address display)
                        x y w h cursor vi
                        (:window-address father)
                        win))
	(ifn (eq (:window-address win) 0)
             (:windows-create-graph-env-for-transparent display win)
             (error ':create-transparent-window "Insufficient Memory" win))
	(unless (#:image:rectangle:window:events-list win)
                (#:image:rectangle:window:events-list win 
                  (:transparent-events-list display)))
	win))

(defun :calculate-top-opaque-father (window)
   (let ((w window))
        (while (and w
                    (eq (#:image:rectangle:window:window-type w) 'transparent))
               (setq w (#:window:father w)))
        w))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Put window as current drawing area 
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun :current-window (display win)
   (when win
         (:drawing-flag display (send 'is-visible (#:window:extend win) win))
	 (let* ((graph-env (#:window:graph-env win))
                (windows-graph-env (:window-graph-env win))
                (display-args (:vector-args display))
                bitmap
                (fill-mode (#:graph-env:fill-mode graph-env))
                fillmode
                (style (vref (:line-style-vector display) 
                             (#:graph-env:line-style graph-env))))
               (vset display-args 0
                     (vref (:mode-vector display) 
                           (#:graph-env:mode graph-env)))
               (vset display-args 1
                     (:wincolor (#:graph-env:foreground graph-env)))
               (vset display-args 2
                     (:wincolor (#:graph-env:background graph-env)))
               (vset display-args 3
                     (vref (:font-vector display) 
                           (#:graph-env:font graph-env)))
               (vset display-args 4
                     (vref style 0))
               (vset display-args 5
                     (vref style 1))
               (selectq fill-mode
                  (foreground 
                     (setq fillmode 0)
                     (setq bitmap 0))
                  (pattern 
                     (setq fillmode 1) 
                     (setq bitmap
                           (:winbitmap (vref (:pattern-vector display)
                                             (#:graph-env:pattern graph-env)))))
                  ((transparentstipple opaquestipple) 
                     (setq fillmode 2)
                     (setq bitmap (:winbitmap (#:graph-env:stipple 
                                                    graph-env)))))
               (vset display-args  6 bitmap)
               (vset display-args 11 (#:graph-env:pattern graph-env))
               (vset display-args 12 fillmode)
	  (if (eq (#:image:rectangle:window:window-type win) 'opaque)
              (progn
                     (vset display-args  7 (#:graph-env:clip-x graph-env))
                     (vset display-args  8 (#:graph-env:clip-y graph-env))
                     (vset display-args  9 (#:graph-env:clip-w graph-env))
                     (vset display-args 10 (#:graph-env:clip-h graph-env))
                     (windows_current_window
                              windows-graph-env
                              (:window-address win) 
                              display-args))
              (let ((rect (:view-rect graph-env)))
                  (vset display-args 7
                        (add (#:image:rectangle:x rect) (:window-offset-x win)))
                  (vset display-args 8
                        (add (#:image:rectangle:y rect) (:window-offset-y win)))
                  (vset display-args 9
                        (#:image:rectangle:w rect))
                  (vset display-args 10
                        (#:image:rectangle:h rect))
                  (windows_current_window
                          windows-graph-env
                          (:window-address (:top-opaque-window win))
                          display-args))))))

(defun {transparent-window}:is-visible (extend win)
   (:visible win))

(defun {winwindow}:is-visible (extend win)
   (if (eq 1 (#:window:visible win))
       t
       ()))

(defun :uncurrent-window (display win)
   (:drawing-flag display ()))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; creating a Graph-env for an Opaque window
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;    

(defun :windows-create-graph-env (display win)
   (let ((ge (or (#:window:graph-env win) (#:graph-env:make))))
        (#:window:graph-env win ge)
        (#:graph-env:pattern ge 1)
        (#:graph-env:clip-x ge 0)
        (#:graph-env:clip-y ge 0)
        (#:graph-env:clip-w ge (#:window:width win))
        (#:graph-env:clip-h ge (#:window:height win))
        (ifn (#:graph-env:foreground ge)
             (#:graph-env:foreground
                      ge 
                     (or
                         (if (#:display:main-graph-env display)
                             (#:graph-env:foreground
                               (#:display:main-graph-env display)))
                         (#:display:foreground display))))
        (ifn (#:graph-env:background ge)
             (#:graph-env:background
                      ge 
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
              (fill-mode (#:graph-env:fill-mode ge))
              fillmode
              bitmap
              (mode (vref (:mode-vector display) (#:graph-env:mode ge))))
             (selectq fill-mode
                      (foreground 
                                  (setq fillmode 0) (setq bitmap 0))
                      (pattern 
                               (setq fillmode 1) 
                               (setq bitmap (:winbitmap (vref (:pattern-vector display)
                                                              (#:graph-env:pattern ge)))))
                      ((transparentstipple opaquestipple) 
                       (setq fillmode 2)
                       (setq bitmap (:winbitmap (#:graph-env:stipple ge))))
                      (t (error ':current-fill-mode "invalid mode"
                                fill-mode)))
	(:window-graph-env win (windows_new_create_graph_env 
                                        ;(:display-address display)
                                        (:window-address win)
                                        font
                                        (vref line-style 0)
                                        (vref line-style 1)
                                        bitmap
                                        (#:graph-env:pattern ge)
                                        fillmode
                                        mode
                                        (:wincolor (#:graph-env:foreground ge))
                                        (:wincolor (#:graph-env:background ge))
                                        ))
        (when (eq (:window-graph-env win) 0)
              (unless (eq (#:display:root-window display) win)
                      (error ':create-graph-env "Insufficient Memory" win)))
        (:graph-env-font-y ge (windows_font_ascent font))
        (:graph-env-font-h ge (windows_font_height font))
	(windows_set_clip
               ; (:display-address display)
                 (:window-graph-env win)
                 0 0
                 (#:window:width win)
                 (#:window:height win))
    )))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; creating a Graph-env for a Transparent window
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;    

(defun :windows-create-graph-env-for-transparent (display win)
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
    (let ((font       (vref (:font-vector display) (#:graph-env:font ge)))
	  (line-style (vref (:line-style-vector display)
                            (#:graph-env:line-style ge)))
	  (pattern    (vref (:pattern-vector display)
                            (#:graph-env:pattern ge)))
	  (mode       (vref (:mode-vector display) (#:graph-env:mode ge))))
	(:window-graph-env win (:window-graph-env (:top-opaque-window win)))
        (:graph-env-font-y ge (windows_font_ascent font))
        (:graph-env-font-h ge (windows_font_height font))
	(:view-rect ge (#:image:rectangle:make))
        (:transparent-set-clip-for-window display win)
	ge)))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; A lot of initialisations for transparent window
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun #:image:rectangle:window:woffset-x (window)
   (send 'woffset-x (#:window:extend window) window))

(defun #:image:rectangle:window:woffset-y (window)
   (send 'woffset-y (#:window:extend window) window))

(defun {winwindow}:woffset-x (extend win)
   0)

(defun {winwindow}:woffset-y (extend win)
   0)

(defun {transparent-window}:woffset-x (extend win)
   (:window-offset-x win))

(defun {transparent-window}:woffset-y (extend win)
   (:window-offset-y win))

(defun :transparent-set-clip-for-window (display win)
  (let* ((father (#:window:father win))
         (ge (#:window:graph-env win))         
	 (rect (:view-rect ge)))
    (:window-offset-x win (add (#:window:left win)
				   (send 'woffset-x father)))
    (:window-offset-y win (add (#:window:top win) 
				   (send 'woffset-y father)))
    (#:image:rectangle:x rect 0)
    (#:image:rectangle:y rect 0)
    (#:image:rectangle:w rect (#:window:width win))
    (#:image:rectangle:h rect (#:window:height win))
    (:view-rect ge (:intersect rect
			       (#:graph-env:clip-x ge)
			       (#:graph-env:clip-y ge)
			       (#:graph-env:clip-w ge)
			       (#:graph-env:clip-h ge)))
    (when father
          (if (eq (#:image:rectangle:window:window-type father) 'transparent)
              (let ((fa-view-rect (:view-rect (#:window:graph-env father))))
                   (:view-rect ge
		      (:intersect rect
				  (sub (#:image:rectangle:x fa-view-rect)
				       (#:window:left win))
				  (sub (#:image:rectangle:y  fa-view-rect)
				       (#:window:top win))
				  (#:image:rectangle:w fa-view-rect)
				  (#:image:rectangle:h fa-view-rect))))
              (let ((fa-ge (#:window:graph-env father)))
                   (:view-rect ge
                      (:intersect rect 
                       		  (sub (#:graph-env:clip-x fa-ge)
				       (#:window:left win))
                                  (sub (#:graph-env:clip-y fa-ge)
				       (#:window:top win))
                                  (#:graph-env:clip-w fa-ge)
                                  (#:graph-env:clip-h fa-ge))))))
    (:window-visible
     win
     (and (eq 1 (#:window:visible win))
	  (or (null father)
	      (and (or (eq (#:image:rectangle:window:window-type father)
			   'opaque)
		       (:visible father))
		   (gt (#:image:rectangle:w rect) 0)
		   (gt (#:image:rectangle:h rect) 0)))))))

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
;;        ;;  compatible bug removed form X11
;;	  (setq pr-window (:top-opaque-window window)
;;		pr-ge (#:window:graph-env pr-window)
;;		pr-bg (#:graph-env:background pr-ge)
;;		child-bg (#:graph-env:background (#:window:graph-env window))
;;		)
;;	  (when (neq pr-bg child-bg)
;;		(windows_set_background ;(:display-address display) 
;;				    (:graph-env-address pr-ge)
;;				    (:wincolor child-bg)))
	  (setq rect (:view-rect ge))
	  (windows_clear_window ;(:display-address display)
			    (:window-address (:top-opaque-window window))
                            (:window-graph-env (:top-opaque-window window))
			    (add (:window-offset-x window) 
				 (#:image:rectangle:x rect))
			    (add (:window-offset-y window)
				 (#:image:rectangle:y rect))
			    (#:image:rectangle:w rect)
			    (#:image:rectangle:h rect)
			    )
;;        ;; compatible bug removed form X11
;;	  (when (neq pr-bg child-bg)
;;		(windows_set_background ;(:display-address display) 
;;				    (:graph-env-address pr-ge)
;;				    (:wincolor pr-bg)))
	  )))

(defun :opaque-clear-graph-env (window display ge)
   (windows_clear_window ;(:display-address display)
		    (:window-address window)
                    (:window-graph-env window)
		    (#:graph-env:clip-x ge)
		    (#:graph-env:clip-y ge)
		    (#:graph-env:clip-w ge)
		    (#:graph-env:clip-h ge)))

(defun :transparent-set-clip-for-subwindows (win display)
   (:transparent-set-clip-for-window display win)
   (mapc (lambda (w) 
            (:transparent-set-clip-for-subwindows w display))
         (#:window:subwindows win)))

(defun :transparent-set-current-clip (display win)
  (let ((ge (#:window:graph-env win))
	rect)
    (setq rect (:view-rect ge))
    (windows_set_clip ;(:display-address display)
         	  (:graph-env-address ge)
		  (add (#:image:rectangle:x rect) (:window-offset-x win))
		  (add (#:image:rectangle:y rect) (:window-offset-y win))
                  (or (gt (#:image:rectangle:w rect) 0) 0)
                  (or (gt (#:image:rectangle:h rect) 0) 0))))

(defun :opaque-set-clip-for-subwindows (win display ge x y w h)
  ;; x, y, w, h may be null.
  (mapc (lambda (subwin)
	  (:set-clip-for-subwindows subwin display (#:window:graph-env subwin)
				    () () () ()))
        (#:window:subwindows win))
   (windows_set_clip ;(:display-address display)
      		(:graph-env-address ge)
		(or x 0)
		(or y 0)
		(or w (#:window:width win))
		(or h (#:window:height win))
		))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Positioning the Clip for Windows 
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun :current-clip (display ge x y w h)
  (let ((window (#:display:window display)))
    (when window
	  (:set-clip-for-subwindows window display ge x y w h)
          (when (eq (#:image:rectangle:window:window-type window) 'transparent)
                (:transparent-set-current-clip display window))
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
                                       (#:image:rectangle:x rect)) )
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

	(if title
            (when (eq (#:image:rectangle:window:window-type win) 'opaque)
                  (windows_change_title ;(:display-address display)
                           (:window-address win) title)))
        
	(if visible
            (if (eq (#:window:visible win) 1)
                (windows_window_map ;(:display-address display) 
                         (:window-address win))
                (windows_window_unmap ;(:display-address display)
                         (:window-address win))))
        (if hilited 
            (if (eq (#:image:rectangle:window:window-type win) 'opaque)
                (:window-border display win hilited)))
        win))


(defun :window-map (display window)
   (windows_window_map ;(:display-address display)
            (:window-address window))
   window)

(defun :window-unmap (display window)
   (windows_window_unmap ;(:display-address display)
            (:window-address window))
   window)

(defun :set-foreground-window (display window)
   ;; undocumented function.
   (windows_set_foreground_window ;(:display-address display)
	    (:window-address window))
   window)

(defun :window-transient (display window)
   (windows_window_transient ;(:display-address display)
            (:window-address window) 1)
   window)

(defun :window-toplevel (display window)
   (windows_window_transient ;(:display-address display)
            (:window-address window) 0)
   window)

(defun :update-window (display win x y w h)
   (when x (#:window:left win x))
   (when y (#:window:top win y))
   (when w (#:window:width win w))
   (when h (#:window:height win h)
         (:update-subwindows display win))
   (:set-clip-for-subwindows win display (#:window:graph-env win)
                             0 0
                             (#:window:width win)
                             (#:window:height win)
                             )
   (when (#:display:window display)
         (:current-window display (#:display:window display)))
   win)

(defun :window-clear-region (display window x y w h)
  (unless (eq window (#:display:window display))
          (:current-window display window))      
  (unless x
	  (setq x 0))
  (unless y
	  (setq y 0))
  (unless w
	  (setq w (#:window:width window)))
  (unless h
	  (setq h (#:window:height window)))
  (if (eq (#:image:rectangle:window:window-type window) 'opaque)
      (windows_clear_window ;(:display-address display)
			(:window-address window)
			(:window-graph-env window)                        
			x y w h)
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
      (windows_clear_window ;(:display-address display)
			(:window-address (:top-opaque-window window))
			(:window-graph-env (:top-opaque-window window))
			(add x (add (:window-offset-x window) 
				    (#:image:rectangle:x rect)))
			(add y (add (:window-offset-y window)
				    (#:image:rectangle:y rect)))
			w h)))
  (when	  (#:display:window display)
          (:current-window display (#:display:window display)))
  window)

(defun :window-background (display window bg)
   (when (#:window:graph-env window)
         (#:graph-env:background (#:window:graph-env window) bg)
         (windows_set_window_background ;(:display-address display) 
                  (:window-address window)
                  (:wincolor bg))))


(defun :window-border (display window border)
   (unless (#:window:father window)
           (windows_topchangewindow_border ;(:display-address display)
                    (:window-address window)
                    border))
   (#:window:hilited window border))

(defun :activate-window (display window)
   ;; Not part of the BV,  but Windows needs sometimes this function
   ;; To activate the window,  we  make  call windows_topmove_window
   ;; with the same x and y (no actual move) but with flag sets to 1
   ;; to bring the window on top and set the activation flag.
   (unless (#:window:father window)
           (windows_topmove_window ;(:display-address display)
                    (:window-address window)
                    (#:window:left window)
                    (#:window:top window)
                    1)))

(defun :move-window (display window x y)
   (when x (#:window:left window x))
   (when y (#:window:top window y))
   (if (#:window:father window)
       (windows_move_window ;(:display-address display)
                (:window-address window)
                (#:window:left window)
                (#:window:top window))
       (windows_topmove_window ;(:display-address display)
                (:window-address window)
                (#:window:left window)
                (#:window:top window)
                0))
   (:set-clip-for-subwindows window display 
         (#:window:graph-env window) 
         x y 
         (#:window:width window)
         (#:window:height window))
   (when (#:display:window display)
         (:current-window display (#:display:window display))))

(defun :resize-window (display window w h)
  (when w (#:window:width window w))
  (when h (#:window:height window h))
  (if (#:window:father window)
      (windows_resize_window ;(:display-address display)
			 (:window-address window)
			 (#:window:width window) 
			 (#:window:height window))
      (windows_topresize_window ;(:display-address display)
                          (:window-address window)
			  (#:window:width window) 
			  (#:window:height window)
                          ))
    (when h (:update-subwindows display window))
    (:set-clip-for-subwindows window display 
      	(#:window:graph-env window) 
        (#:window:left window)
        (#:window:top window)
        w h)
    (when (#:display:window display)
          (:current-window display (#:display:window display))))

(defun :move-resize-window (display window x y w h)
  (when x (#:window:left window x))
  (when y (#:window:top window y))
  (when w (#:window:width window w))
  (when h (#:window:height window h))
  (if (#:window:father window)
      (windows_moveresize_window ;(:display-address display)
			     (:window-address window)
			     (#:window:left window)
			     (#:window:top window)
			     (#:window:width window)
			     (#:window:height window)
			     )
    (windows_topmoveresize_window
        ;(:display-address display)
        (:window-address window)
        (#:window:left window)
        (#:window:top window)
        (#:window:width window)
        (#:window:height window)))
    (when h (:update-subwindows display window))
    (:set-clip-for-subwindows window display 
      	(#:window:graph-env window) x y w h)
    (when   (#:display:window display)
            (:current-window display (#:display:window display))))

(defun :window-events-list (display window events)
  (#:image:rectangle:window:events-list  window events))

(defun :window-title (display window title)
  (windows_change_title ;(:display-address display)
		    (:window-address window)
		    title)
  (#:window:title window title))

(defun :window-state (display window state)
  (selectq state
	   (iconify
                     (windows_set_window_state  ;(:display-address display)
                              (:window-address window)
                              1))
	   (map
                     (:window-map display window)
                     (windows_set_window_state  ;(:display-address display)
                              (:window-address window)
                              0))
	   (unmap
                     (:window-unmap display window))
	   (raise
                     (:window-raise display window))
	   (lower
                     (:window-lower display window))
	   (transient
		     (:window-transient display window))
	   (toplevel
		     (:window-toplevel display window))
           (activate
                     ;; BV extension to specific to windows
                     (:activate-window display window)
                     (setq state 'raise))
	   (t
                     (error 'window-state ':not-a-valid-argument state)))
  (#:image:rectangle:window:state window state))

(defun :window-raise (display win)
   (windows_pop_window ;(:windows-display display) 
            (:windows-window win)))

(defun :window-lower (display win1)
   (windows_push_window ;(:windows-display display) 
            (:windows-window win1)))

(defun :window-change-attributes (display window props-set props-unset)
   ;; Change window graphiques properties
   ;; PROPS-SET is the list of new properties to set
   ;; PROPS-UNSET is the list of properties to unset
   ;; the possible properties arent : backing-store, override-redirect,
   ;; save-under and transient
   (while props-set
          (selectq (nextl props-set)
		   (transient  (:window-transient display window))))
   (while props-unset
          (selectq (nextl props-unset)
		   (transient  (:window-toplevel display window))))
   )

(defun :update-subwindows (display win)
  (mapc (lambda (subwin)
                (windows_move_window ;(:display-address display)
                    (:window-address subwin)
                    (#:window:left subwin) (#:window:top subwin)))
;		(:update-subwindows display subwin))
	(#:window:subwindows win)))
