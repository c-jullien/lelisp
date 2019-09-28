(eval-when (eval)
	   (unless (getdef '#:display:x11:xbitmap)
		   (libload #u"X11/x11struct")))

(defvar #:sys-package:colon '#:display:x11)


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Changing Graphic Attributes 
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;



(defun :current-font (display graph-env font)
  (let ((xfont (vref (:font-vector display) font)))
    (x11_set_font (:display-address display)
		  (:graph-env-address graph-env)
		  xfont)
    (:graph-env-font-y graph-env (x11_font_ascent xfont))
    (:graph-env-font-h graph-env (x11_font_height xfont))))


(defun :current-line-style (display graph-env line-style)
  (let ((style (vref (:line-style-vector display) line-style)))
    (x11_set_line_style (:display-address display)
			(:graph-env-address graph-env)
			(vref style 0)
			(vref style 1))))


(defun :current-pattern (display graph-env pattern)
  (x11_set_pattern (:display-address display)
		   (:graph-env-address graph-env)
		   (vref (:pattern-vector display) pattern))
  (when (eq (#:graph-env:fill-mode graph-env) 'pattern)
	(x11_set_fill_mode (:display-address display)
			   (:graph-env-address graph-env)
			   (if (le pattern 1)
			       0 1))))

(defun :current-mode (display graph-env mode)
  (x11_set_mode (:display-address display)
		(:graph-env-address graph-env)
		(vref (:mode-vector display) mode)))

(defun :current-arc-mode (display graph-env mode)
  (x11_set_arc_mode (:display-address display)
                    (:graph-env-address graph-env)
                    mode))

(defun :current-foreground (display graph-env fore)
  (x11_set_foreground (:display-address display)
		      (:graph-env-address graph-env) 
		      (:xcolor fore)))


;;;
;;; This function Does stupid things setting the background of the
;;; GRAPH-ENV, the background of MAIN GRAPH-ENV and the WINDOW BACKGROUND
;;; This is because there is no difference between a Window and its
;;; GRAPH-ENV and because drawing function don't know the GRAPH-ENV they use

(defun :current-background (display graph-env back)
  (x11_set_background (:display-address display) 
		      (:graph-env-address graph-env)
		      (:xcolor back))
  (x11_set_background (:display-address display) 
		      (:graph-env-address (#:display:main-graph-env display))
		      (:xcolor back))
  (let ((window (#:display:window display)))
    (when (and window 
               (null (memq 'bitmap-window (#:window:properties window)))
	       (eq (#:window:graph-env window) graph-env)
	       (neq window (#:display:x11:root-window display))
	       (eq (#:image:rectangle:window:window-type window) 'opaque))
	  (x11_setwindow_background (:display-address display)
				    (:window-address window)
				    (:xcolor back)))))


(de :line-style-max (display)
    (sub1 (vlength (:line-style-vector display))))


(de :pattern-max (display)
    (sub1 (vlength (:pattern-vector display))))


(de :make-pattern (display  bitmap)
    (let ((nbpattern (vlength (:pattern-vector display))))
      (:pattern-vector display
                       (bltvector (makevector (add1 nbpattern) 0)
                                  0 (:pattern-vector display) 
                                  0 nbpattern))
      (vset (:pattern-vector display) nbpattern (:xbitmap bitmap))
      nbpattern))


(defun :make-line-style (display  width style)
  (let ((vect-line (makevector 2 0))
	(found ())
	(i 0)
	(nbstyle (vlength (:line-style-vector display))))
    (vset vect-line 0 width)
    (vset vect-line 1 style)
    (while (lt i nbstyle)
      (when (eqvector vect-line (vref (:line-style-vector display) i))
	    (setq found i))
      (incr i))
    (if found
	found
      (:line-style-vector display
			  (bltvector (makevector (add1 nbstyle) 0)
				     0 (:line-style-vector display) 
				     0 nbstyle))
      (vset (:line-style-vector display) nbstyle vect-line)
      nbstyle)))


;;;; Fonts

(defun :font-max (display)
  (sub1 (vlength (:font-vector display))))


;;;
;;; Error message has changed...

(defun :load-font (display font)
  (let ((xfont (x11_load_font (:xdisplay display) font))
	(nbfont (vlength (:font-vector display)))
	)
    (when (:notaddressp xfont)
	  (error 'load-font '#:display:err-not-a-font-name font))
    (:font-vector display (bltvector (makevector (add1 nbfont) 0)
				     0 (:font-vector display) 
				     0 nbfont))
    (vset (:font-vector display) nbfont xfont)
    nbfont))


(de :width-substring (display graph-env string start length)
    (let* ((slen (slen string))
           (maxle (sub slen start)))
      (ifn (le start slen)
           0
           (when (gt length maxle)
                 (setq length maxle))
           (x11_width_string
	    (vref (:font-vector display) (#:graph-env:font graph-env))
                            string start length))))


(de :height-substring (display graph-env string start length)
    (let* ((slen (slen string))
           (maxle (sub slen start)))
      (ifn (lt start slen)
           (setq string #:display:space start 0 length 1)
           (when (gt length maxle)
                 (setq length maxle)))
      (x11_height_string
       (vref (:font-vector display) (#:graph-env:font graph-env))
                        string start length)))


(de :x-base-substring (display graph-env string start length)
    (let* ((slen (slen string))
           (maxle (sub slen start)))
      (ifn (lt start slen)
           (setq string #:display:space start 0 length 1)
           (when (gt length maxle)
                 (setq length maxle)))
      (x11_x_base_string
       (vref (:font-vector display) (#:graph-env:font graph-env))
                        string start length)))


(de :y-base-substring (display graph-env string start length)
    (let* ((slen (slen string))
           (maxle (sub slen start)))
      (ifn (lt start slen)
           (setq string #:display:space start 0 length 1)
           (when (gt length maxle)
                 (setq length maxle)))
      (x11_y_base_string
       (vref (:font-vector display) (#:graph-env:font graph-env))
                        string start length)))


(de :x-inc-substring (display graph-env string start length)
    (:width-substring display graph-env string start length))


(de :y-inc-substring (display graph-env string start length)
    0)



(de :cursor-max (display)
    (sub1 (vlength (#:display:x11:cursor-vector display))))


(defun :make-cursor (display b1 b2 x y)
  (let* ((bb1 (x11_pixmap_to_bitmap
	       (:xdisplay display)
	       (:xbitmap b1) (#:bitmap:w b1) (#:bitmap:h b1)))
	 (bb2 (x11_pixmap_to_bitmap
	       (:xdisplay display)
	       (:xbitmap b2) (#:bitmap:w b2) (#:bitmap:h b2)))
	 (fg (#:graph-env:foreground (#:display:graph-env display)))
	 (bg (#:graph-env:background (#:display:graph-env display)))
	 (xcursor (x11_make_cursor (:xdisplay display) 
				   bb1 bb2
				   (#:color:red fg)
				   (#:color:green fg)
				   (#:color:blue fg)
				   (#:color:red bg)
				   (#:color:green bg)
				   (#:color:blue bg)
				   x y)))
    (:add-xcursor display xcursor)
    ))


;;;
;;; returns number of cursor corresponding to KEY which is an index in
;;; #:display:cursor-names.
;;; returns () if not found.

(defun :make-named-cursor (display key)
  (let ((al (:cursors-alist display))
	nbcursor)
    (or (cassoc key al)
	;; not yet loaded.
	(let ((xcursor (x11_create_cursor (:xdisplay display)
					  (vref :xnumbers key))))
	  (when xcursor
		(setq nbcursor (:add-xcursor display xcursor))
		(:cursors-alist display (acons key nbcursor al))
		nbcursor)))))


;;;
;;; This vector exactly matches the vector #:display:cursor-names

(defvar :xnumbers #[
  24  30  34  36  38
  50  52  60  62  66
  68  84  86  88  90
  92 120 124 150 152
  ])


;;;
;;; Given a (lisp) number of cursor, returns its name if he has one, else ().

(defun :cursor-name (display nbcursor)
  (let ((key (car (rassq nbcursor (:cursors-alist display)))))
    (when key
	  (vref #:display:cursor-names key))))


;;;
;;; Add a new X cursor to the cursor-vector of the display.
;;; returns number of the new cursor in the vector.

(defun :add-xcursor (display xcursor)
  (let ((nbcursor (vlength (:cursor-vector display))))
    (:cursor-vector display
		    (bltvector (makevector (add1 nbcursor) 0)
			       0 (:cursor-vector display) 0 nbcursor))
    (vset (:cursor-vector display) nbcursor xcursor)
    nbcursor))
  

(de :current-cursor (display cursor)
    (when (#:display:window display)
          (x11_set_cursor (:xdisplay display)
                             (:xwindow (#:display:window display))
                             (vref (:cursor-vector display) cursor))))


(de :move-cursor (display x y)
    (x11_move_cursor (:xdisplay display) x y))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;                         pb polices x11r3
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defun :font-ascent (display graph-env)
  (:graph-env-font-y graph-env))


(defun :font-height (display graph-env)
  (:graph-env-font-h graph-env))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;; Stipples
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun :current-stipple (display graph-env stipple)
  (ifn stipple
       (unless (memq (#:graph-env:fill-mode graph-env) '(foreground pattern))
	       (x11_set_fill_mode 
		(:xdisplay display)
		(:graph-env-address graph-env)
		0))
       (x11_set_stipple (:display-address display)
			(:graph-env-address graph-env)
			(:xbitmap stipple))
       (selectq (#:graph-env:fill-mode graph-env)
		(transparentstipple
		 (x11_set_fill_mode (:xdisplay display) 
				    (:graph-env-address graph-env)
				    3))
		(opaquestipple
		 (x11_set_fill_mode (:xdisplay display)
				    (:graph-env-address graph-env)
				    2)))))


(defun :current-fill-mode (display graph-env fill-mode)
  (unless fill-mode (setq fill-mode 'foreground))
  (if (or
       (#:graph-env:stipple graph-env)
       (eq fill-mode 'foreground)
       (eq fill-mode 'pattern))
      (let ((fillmode
	     (selectq fill-mode
		      (foreground 0)
		      (pattern (if (le (#:graph-env:pattern graph-env) 1)
				   0 1))
		      (transparentstipple 3)
		      (opaquestipple  2)
		      (t (error ':current-fill-mode "invalid mode"
				fill-mode)))))
	(x11_set_fill_mode 
	 (:xdisplay display)
	 (:graph-env-address graph-env)
	 fillmode))
    (error ':current-fill-mode
	   "no existent stipple for this graph-env" graph-env)))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;; Create a Graph-env without specifing a window
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun :make-graph-env (display graph-env . win)
  (let ((ex-win-gc (:window-address
		    (or (car win) (#:display:X11:root-window display)))))
    (#:graph-env:display graph-env display)
    (#:graph-env:extend graph-env ({x11window}:make))
    (let ((font (vref (:font-vector display) 
		      (#:graph-env:font graph-env)))
	  (line-style (vref (:line-style-vector display)
			    (#:graph-env:line-style graph-env)))
	  (pattern (vref (:pattern-vector display)
			 (#:graph-env:pattern graph-env)))
	  (mode (vref (:mode-vector display)
		      (#:graph-env:mode graph-env))))
      (:graph-env-address graph-env 
			  (x11_new_create_graph_env 
			   (:display-address display)
			   ex-win-gc
			   font
			   (vref line-style 0)
			   (vref line-style 1)
			   pattern
			   mode 
			   (:xcolor (#:graph-env:foreground
				     graph-env))
			   (:xcolor (#:graph-env:background
				     graph-env))
			   (#:display:x11:graph-env-mode display)))
      (:graph-env-font-y graph-env (x11_font_ascent font))
      (:graph-env-font-h graph-env (x11_font_height font)))
    graph-env))


(defun :kill-graph-env (display graph-env)
  (x11_free_graph_env (:display-address display)
		      (:graph-env-address graph-env))
  (:graph-env-address graph-env ()))


(defun :graph-env-set-clip (display graph-env x y w h)
  (x11_set_clip (:display-address display)
		 (:graph-env-address graph-env)
		 x y w h))


(defun :graph-env-set-clips (display graph-env n vx vy vw vh)
  ;; Set the clip in the graph-env GRAPH-ENVof the display DISPLAY
  ;; the clip is a list of an unsorted list of rectangles
  ;; specified by the coordinates VX,VY and of sizes specified
  ;; by VW and VH
  ;; This function could be of graph-envart interest with X11 
  ;; because the server always send a list of Expose events 
  ;; when an Expose event correspond to a Region
  (x11_set_clips (:display-address display) (:graph-env-address graph-env)
		  vx vy vw vh n))



;;;
;;; A null C adress.
;;; To be changed in V16.

(defmacro :null-address () '0)



(defun :graph-env-change-values (display graph-env font mode pattern 
					 line-style fg bg)
  ;;; Changes the GC values FONT MODE ...
  ;;; arguments could be NIL
  ;;; FLAGS  is a vector of flags indicating if value changes or not
  ;;; exemple if FLAGS[0]=1 FONT is changed
  ;;;            FLAGS[0]=0 FONT is unchanged
  (let ((flags (makevector 6 0))
	(xfont (:null-address)) ;; A default dummy address.
	(xmode 0)
	(xpattern (:null-address))
	(xls0 0)
	(xls1 0)
	(xfg 0)
	(xbg 0)
	xls
	)
    (when font
	  (#:graph-env:font graph-env font)
	  (setq xfont (vref (:font-vector display) font))
	  (vset flags 0 1))
    (when mode
	  (#:graph-env:mode graph-env mode)
	  (setq xmode (vref (:mode-vector display) mode))
	  (vset flags 1 1))
    (when pattern
	  (#:graph-env:pattern graph-env pattern)
	  (setq xpattern (vref (:pattern-vector display) pattern))
	  (vset flags 2 1))
    (when line-style
	  (#:graph-env:line-style graph-env line-style)
	  (setq xls (vref (:line-style-vector display) line-style)
		xls0 (vref xls 0)
		xls1 (vref xls 1)
		)
	  (vset flags 3 1))
    (when fg
	  (#:graph-env:foreground graph-env fg)
	  (setq xfg (:xcolor fg))
	  (vset flags 4 1))
    (when bg
	  (#:graph-env:background graph-env bg)
	  (setq xbg (:xcolor bg))
	  (vset flags 5 1))
    (x11_change_gc_values (:display-address display)
			  (:graph-env-address graph-env)
			  flags xfont xmode xpattern xls0 xls1 xfg xbg)))


(defun :graph-env-subwindow-mode (display graph-env mode)
  (if (fixp mode)
      (x11_graph_subwindow_mode (:display-address display)
				(:graph-env-address graph-env)
				mode)))


;;;
;;; Returns a list of fonts.
;;; Maximum fonts wanted must be less than MAXNAMES.
;;; Font names must match pattern PATTERN with wildcard '*' or '?'
;;; Result given by x11_list_fonts has to be corrected, because some implemen-
;;; tations return multiple result for patterns which don't contain wilcards
;;; or are case dependant.

(defun :get-font-names (display maxnames pattern)
  (let ((l (x11_list_fonts (:display-address display)
			   pattern maxnames 'list ())))
    (cond ((scanstring  pattern "*?" 0) ; wildcards.
	   l)
	  ((null l)
	   ())
	  ((cdr l) ; pathologic case : no wildcard, many results
	   (list pattern))
	  (t ; no wildcard, one result : returns it.
	   l))))


(defun :get-font-info (display fontname font-info)
  ;;; Return a structure FONT-INFO containing information
  ;;; about font FONTNAME
  ;;; return () if fontname does'nt exist
  (let* (result 
	 (font (cassoc fontname (#:display:font-names display)))
	 (xfont (if font
		    (vref (:font-vector display) font)
		  0)))
    (setq result (x11_font_info (:display-address display)
				fontname
				xfont
				font-info))
    (if (eq result 0)
	()
      font-info)))  


(defun :graph-env-planemask (display graph-env planes)
  (if (fixp planes)
      (x11_set_planemask (:display-address display)
			 (:graph-env-address graph-env)
			 planes)))

