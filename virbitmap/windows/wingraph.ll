;;;; .EnTete	"Le-Lisp version 15.2x" " " "wingraph.ll"
;;;; .Date	"2003/05/25"
;;;; .EnPied	"wingraph.ll"
;;;; .Version	"1.00"
;;;; .Auteur 	"ELIGIS, C. Jullien"
;;;; .Annexe I	""

(eval-when (eval)
	   (unless (getdef '#:display:windows:winbitmap)
		   (libload #u"windows/winstruct")))

(defvar #:sys-package:colon '#:display:windows)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Changing Graphic Attributes
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun :current-font (display graph-env font)
   (let ((winfont (vref (:font-vector display) font)))
        (windows_set_font
               ; (:display-address display)
                 (:graph-env-address graph-env)
                 winfont)
        (:graph-env-font-y
                graph-env
                (windows_font_ascent winfont))
        (:graph-env-font-h
                graph-env
                (windows_font_height winfont))))

(defun :current-line-style (display graph-env line-style)
   (let ((style (vref (:line-style-vector display) line-style)))
        (windows_set_line_style
               ; (:display-address display)
                 (:graph-env-address graph-env)
                 (vref style 0)
                 (vref style 1)
                 (:wincolor (#:graph-env:foreground graph-env)))))


(defun :current-pattern (display graph-env pattern)
   (when (eq (#:graph-env:fill-mode graph-env) 'pattern)
         (windows_set_fill_mode
                ; (:windows-display display)
                  (:graph-env-address graph-env)
                  (:winbitmap (vref (:pattern-vector display) pattern))
                  pattern
                  1))
   (when (eq (#:graph-env:fill-mode graph-env) 'foreground)
         (windows_set_fill_mode
                ; (:windows-display display)
                  (:graph-env-address graph-env)
                  0
                  pattern
                  0)))

(defun :current-mode (display graph-env mode)
   (windows_set_mode
          ; (:display-address display)
            (:graph-env-address graph-env)
            (vref (:mode-vector display) mode)))

(defun :current-foreground (display graph-env fore)
   (let ((style (vref (:line-style-vector display)
                      (#:graph-env:line-style graph-env))))
        (windows_set_foreground ;(:display-address display)
                 (:graph-env-address graph-env)
                 (:wincolor fore)
                 (vref style 0)
                 (vref style 1)))
   (when (#:graph-env:stipple graph-env)
         (:current-stipple display graph-env (#:graph-env:stipple graph-env)))
   (:current-pattern display graph-env (#:graph-env:pattern graph-env)))

(defun :current-background (display graph-env back)
   (windows_set_background
          ; (:display-address display)
            (:graph-env-address graph-env)
            (:wincolor back))
   (windows_set_background
          ; (:display-address display)
            (:graph-env-address (#:display:main-graph-env display))
            (:wincolor back))
   (when (#:graph-env:stipple graph-env)
         (:current-stipple display graph-env (#:graph-env:stipple graph-env)))
   (:current-pattern display graph-env (#:graph-env:pattern graph-env))
   (let ((window (#:display:window display)))
        (when (and window
                   (eq (#:window:graph-env window) graph-env)
                   (neq window (#:display:root-window display))
                   (eq (#:image:rectangle:window:window-type window) 'opaque))
              (windows_set_window_background
                       ; (:display-address display)
                       (:window-address window)
                       (:wincolor back)))))

(defun :current-arc-mode (display graph-env mode)
   (#:graph-env:arc-mode graph-env mode))

(defun :line-style-max (display)
   (sub1 (vlength (:line-style-vector display))))

(defun :pattern-max (display)
   (sub1 (vlength (:pattern-vector display))))

(defun :make-pattern (display  bitmap)
   (let ((nbpattern (vlength (:pattern-vector display))))
        (:pattern-vector display
                 (bltvector (makevector (add1 nbpattern) 0)
                            0 (:pattern-vector display)
                            0 nbpattern))
        (vset (:pattern-vector display) nbpattern bitmap)
        nbpattern))

(defun :make-line-style (display  width style)
   (let ((vect-line (makevector 2 0))
         (nbstyle (vlength (:line-style-vector display))))
        (:line-style-vector display
               (bltvector (makevector (add1 nbstyle) 0)
                          0 (:line-style-vector display)
                          0 nbstyle))
        (vset vect-line 0 width)
        (vset vect-line 1 style)
        (vset (:line-style-vector display) nbstyle vect-line)
        nbstyle))

(defun :width-substring (display graph-env string start length)
   (let* ((slen (slen string))
          (maxle (sub slen start)))
         (ifn (le start slen)
              0
              (when (gt length maxle)
                    (setq length maxle))
              (windows_width_string
                       (:graph-env-address graph-env)
                       string start length))))

(defun :height-substring (display graph-env string start length)
   (let* ((slen (slen string))
          (maxle (sub slen start)))
         (ifn (lt start slen)
              (setq string #:display:space start 0 length 1)
              (when (gt length maxle)
                    (setq length maxle)))
         (windows_height_string
                  (:graph-env-address graph-env)
                  string start length)))

(defun :x-base-substring (display graph-env string start length)
   (let* ((slen (slen string))
          (maxle (sub slen start)))
         (ifn (lt start slen)
              (setq string #:display:space start 0 length 1)
              (when (gt length maxle)
                    (setq length maxle)))
         0))

(defun :y-base-substring (display graph-env string start length)
   (let* ((slen (slen string))
          (maxle (sub slen start)))
         (ifn (lt start slen)
              (setq string #:display:space start 0 length 1)
              (when (gt length maxle)
                    (setq length maxle)))
         (windows_height_string
                  (:graph-env-address graph-env)
                  string start length)))

(defun :x-inc-substring (display graph-env string start length)
   (:width-substring display graph-env string start length))

(defun :y-inc-substring (display graph-env string start length)
   0)

(defun :cursor-max (display)
   (sub1 (vlength (#:display:windows:cursor-vector display))))

(defun :make-cursor (display b1 b2 x y)
   (let ((bytevector1 "")
         (bytevector2 "")
         (bytevector3 ())
         (w           (min (#:bitmap:w b1) (#:bitmap:w b2)))
         (h           (min (#:bitmap:h b1) (#:bitmap:h b2)))
         (hdc1        (:winbitmap b1))
         (hdc2        (:winbitmap b2))
         (cursor      ())
         (nbcursor    0))
	(setq bytevector3 (makestring w 32))
        (for (i 0 1 h)
             (windows_get_byte_line hdc1 0 i bytevector3 w h 1)
             (setq bytevector1 (catenate bytevector1 bytevector3))
             (windows_get_byte_line hdc2 0 i bytevector3 w h 1)
             (setq bytevector2 (catenate bytevector2 bytevector3)))
	(setq cursor (windows_create_cursor bytevector1 bytevector2 w) )
        (ifn (eq cursor 0)
             (setq nbcursor (:add-cursor display cursor)))
        nbcursor))

;;;
;;; returns number of cursor corresponding to KEY which is an index in
;;; #:display:cursor-names.
;;; returns () if not found.

(defun :make-named-cursor (display key)
   (let ((name (vref #:display:cursor-names key))
         (al (:cursors-alist display))
         (nbcursor 0)
         cursor)
        (or (cassq key al)
	;; not yet loaded.
	(let ((cursor (windows_named_cursor
                             ; (:display display)
                               name)))
             (unless (eq cursor 0)
                     (setq nbcursor (:add-cursor display cursor))
                     (:cursors-alist display (acons key nbcursor al))
                     nbcursor)))))


;;;
;;; Add a new cursor to the cursor-vector of the display.
;;; returns number of the new cursor in the vector.

(defun :add-cursor (display cursor)
   (let ((nbcursor (vlength (:cursor-vector display))))
        (:cursor-vector
                display
                (bltvector (makevector (add1 nbcursor) 0)
                           0 (:cursor-vector display) 0 nbcursor))
        (vset (:cursor-vector display) nbcursor cursor)
        nbcursor))

;;;
;;; Given a (lisp) number of cursor, returns its name if he has one, else ().

(defun :cursor-name (display nbcursor)
   ; (let ((key (car (rassq (vref (:cursor-vector display) nbcursor)
   ;        			 (:cursors-alist display)))))
   (let ((key (car (rassq nbcursor (:cursors-alist display)))))
        (when key
              (vref #:display:cursor-names key))))


(defun :current-cursor (display cursor)
   (when (#:display:window display)
         (windows_set_cursor
                ; (:windows-display display)
                  (:windows-window (#:display:window display))
                  (vref (:cursor-vector display) cursor))))


(defun :move-cursor (display x y)
   (windows_move_cursor
            ; (:windows-display display)
            x y))


(defun :font-ascent (display graph-env)
   ;; Not so simple, must deal with the current env (see x-base-substring)
   (:graph-env-font-y graph-env))


(defun :font-height (display graph-env)
   ;; Not so simple, must deal with the current env (see y-base-substring)
   (:graph-env-font-h graph-env))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;; Create a Graph-env without specifing a window
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun :make-graph-env (display graph-env . win)
   (let ((ex-win-gc (:window-address
                             (or (car win) (#:display:root-window display)))))
        (#:graph-env:display graph-env display)
        (#:graph-env:extend graph-env ({winwindow}:make))
        (let ((font       (vref (:font-vector display)
                                (#:graph-env:font graph-env)))
              (line-style (vref (:line-style-vector display)
                                (#:graph-env:line-style graph-env)))
              (fill-mode  (#:graph-env:fill-mode graph-env))
              (fillmode   ())
              (bitmap     ())
              (mode       (vref (:mode-vector display)
                                (#:graph-env:mode graph-env))))
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
                   (setq bitmap (:winbitmap (#:graph-env:stipple graph-env))))
                (t (error ':current-fill-mode "invalid mode" fill-mode)))
             (:graph-env-address
                     graph-env
                     (windows_new_create_graph_env
                            ; (:display-address display)
                              ex-win-gc
                              font
                              (vref line-style 0)
                              (vref line-style 1)
                              bitmap
                              (#:graph-env:pattern graph-env)
                              fillmode
                              mode
                              (:wincolor (#:graph-env:foreground graph-env))
                              (:wincolor (#:graph-env:background graph-env))))
             (:graph-env-address graph-env)
             (:graph-env-font-y graph-env (windows_font_ascent font))
             (:graph-env-font-h graph-env (windows_font_height font))
             graph-env)))


(defun :kill-graph-env (display graph-env)
   (windows_free_graph_env
          ; (:display-address display)
            (:graph-env-address graph-env))
   (:graph-env-address graph-env ()))


(defun :graph-env-set-clip (display graph-env x y w h)
  (windows_set_clip
         ; (:display-address display)
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
  (windows_set_clips
         ; (:display-address display)
           (:graph-env-address graph-env)
           vx vy vw vh n))


(defun :graph-env-change-values (display graph-env font mode pattern
					 line-style fg bg)
  ;;; Changes the GC values FONT MODE ...
  ;;; arguments could be NIL


    (when font
	  (#:graph-env:font graph-env font)
          (:current-font display graph-env font))
    (when mode
       	  (#:graph-env:mode graph-env mode)
          (:current-mode display graph-env mode))
    (when pattern
       	  (#:graph-env:pattern graph-env pattern)
          (:current-pattern display graph-env pattern))
    (when line-style
	  (#:graph-env:line-style graph-env line-style)
          (:current-line-style display graph-env line-style))
    (when fg
	  (#:graph-env:foreground graph-env fg)
          (:current-foreground display graph-env fg))
    (when bg
	  (#:graph-env:background graph-env bg)
          (:current-background display graph-env bg)))


(defun :graph-env-subwindow-mode (display graph-env mode) mode)


;;;; Fonts

(defun :font-max (display)
   (sub1 (vlength (:font-vector display))))


(defun :load-font (display fontname)
   (let ((font (cassoc fontname (:all-font-names display)))
         (nbfont (vlength (:font-vector display))))
        (unless font
                (error 'load-font '#:display:err-not-a-font-name fontname))
        (:font-vector display (bltvector (makevector (add1 nbfont) 0)
                                         0 (:font-vector display)
                                         0 nbfont))
        (vset (:font-vector display) nbfont font)
        (windows_load_font font)
        nbfont))

(defun :system-font-name ()
   (if (>= (winversion) 5.0)
       (let ((font-name (:get-font-names (current-display) 1 "Tahoma-8-TT")))
	    (if (consp font-name)
		;; TrueType enabled, returns the real font.
		(car font-name)
		(catenate "Arial-" (windows_system_font_size) "-TT-Bold")))
       (catenate "Arial-" (windows_system_font_size) "-TT-Bold")))

;;; Return a structure FONT-INFO containing information
;;; about font FONTNAME
;;; return () if fontname does'nt exist


(defun :get-font-info (display fontname font-info)
   (let ((font (cassoc fontname (:all-font-names display))))
        (when font
              (windows_font_info font font-info)
              font-info)))

;;;
;;; Returns a list of fonts.
;;; Maximum fonts wanted must be less than MAXNAMES.
;;; Font names must match pattern PATTERN with wildcard '*' or '?'

(defun :get-font-names (display maxnames pattern)
   (let ((nfont 0)
         (result1 (:all-font-names display))
         result2
         (p1 pattern)
         p2 pos* pos? i)
        (while (and (> (slen p1) 0) (> (length result1) 0))
               (setq pos* (chrpos #/* p1))
               (if (eq pos* 0)
                   (setq p1 (substring p1 1))
                   (setq pos? (chrpos #/? p1))
                   (if (eq pos? 0)
                       (progn (setq p1 (substring p1 1))
                              (setq result2 ())
                              (mapc (lambda (c)
                                       (when (setq p2 (substring (car c) 1))
                                             (setq result2
                                                   (acons
                                                           p2
                                                           (cdr c)
                                                           result2))))
                                    result1)
                              (setq result1 result2))
                       (if pos*
                           (if pos?
                               (setq i (min pos* pos?))
                               (setq i pos*))
                           (if pos?
                               (setq i pos?)
                               (setq i 0)))
                       (setq result2 ())
                       (if (eq i 0)
                           (progn
                                  (setq p2 p1)
                                  (setq p1 "")
                                  (mapc (lambda (c)
                                          (when (and (car c)
                                                     (eqstring p2 (car c)))
                                                (setq result2
                                                      (acons
                                                         (substring (car c) i)
                                                         (cdr c)
                                                         result2))))
                                        result1))

                           (setq p2 (substring p1 0 i))
                           (setq p1 (substring p1 i))
                           (mapc (lambda (c)
                                    (setq i (index p2 (car c) 0))
                                    (when i (setq result2
                                                  (acons
                                                         (substring (car c) i)
                                                         (cdr c)
                                                         result2))))
                                 result1))
                       (setq result1 result2))))
        (setq result2 (firstn maxnames result1))
        (when result2
              (setq result1 (:all-font-names display))
              (mapcar #'(lambda (c)
                           (car (rassoc (cdr c) result1)))
                      result2))))


;;;     (current-stipple stipple) postionne le champ stiple de
;;;        la fenetre courante
;;;

(defun :current-stipple (display graph-env stipple)
  (when (and stipple
             (or (eq (#:graph-env:fill-mode graph-env) 'transparentstipple)
            	 (eq (#:graph-env:fill-mode graph-env) 'opaquestipple)))
        (windows_set_fill_mode
	 ;(:windows-display display)
	 (:graph-env-address graph-env)
	 (:winbitmap stipple)
         (#:graph-env:pattern graph-env)
	 2)))


;;;     (current-fill-mode . fill-mode) fonction a 0 ou 1 argument
;;;        positionne ou consulte le champ fill-mode du graph env courant
;;;        fill-mode est un symbole parmi :
;;;                    'foreground (on remplit avec la couleur du foreground)
;;;                    'pattern (on remplit avec les patterns lisp)
;;;                    'transparentstipple (on remplit avec le foreground
;;;                                    masque' par le stipple)
;;;                    'opaquestipple (on remplit avec le foreground
;;;                              les pixels mis a` 1 dasn le stipple et avec
;;;                              le bacground les autres)

(defun :current-fill-mode (display graph-env fill-mode)
  (unless fill-mode (setq fill-mode 'foreground))
  (if (or
          (#:graph-env:stipple graph-env)
          (eq fill-mode 'foreground)
          (eq fill-mode 'pattern))
      (let (fillmode (bitmap 0))
           (selectq fill-mode
              (foreground
                 (setq fillmode 0) (setq bitmap 0))
              (pattern
                 (setq fillmode 1)
                 (setq bitmap (:winbitmap (vref (:pattern-vector display)
                                                (#:graph-env:pattern graph-env)))))
              ((transparentstipple opaquestipple)
                 (setq fillmode 2)
                 (setq bitmap (:winbitmap (#:graph-env:stipple graph-env))))
              (t (error ':current-fill-mode "invalid mode" fill-mode)))

	(windows_set_fill_mode
               ; (:windows-display display)
                 (:graph-env-address graph-env)
                 bitmap
                 (#:graph-env:pattern graph-env)
                 fillmode))
      (error ':current-fill-mode
             "no existent stipple for this graph-env" graph-env)))

(defun :mutable-flag (flag)
   (windows_mutable (if flag 1 0)))

(defun :hilight-flag (flag)
   (windows_hilight (if flag 1 0)))

(defun :set-optional-fontname (font)
   (windows_set_optional_fontname font))


(eval-when (load eval compile)

   (defstruct #:sys-windows:windows-parameters

   ;;;
   ;;; 1) System Metrics
   ;;;

           SM_CXSCREEN
           SM_CYSCREEN
           SM_CXVSCROLL
           SM_CYHSCROLL
           SM_CYCAPTION
           SM_CXBORDER
           SM_CYBORDER
           SM_CXDLGFRAME
           SM_CYDLGFRAME
           SM_CYVTHUMB
           SM_CXHTHUMB
           SM_CXICON
           SM_CYICON
           SM_CXCURSOR
           SM_CYCURSOR
           SM_CYMENU
           SM_CXFULLSCREEN
           SM_CYFULLSCREEN
           SM_CYKANJIWINDOW
           SM_MOUSEPRESENT
           SM_CYVSCROLL
           SM_CXHSCROLL
           SM_DEBUG
           SM_SWAPBUTTON
           SM_RESERVED1
           SM_RESERVED2
           SM_RESERVED3
           SM_RESERVED4
           SM_CXMIN
           SM_CYMIN
           SM_CXSIZE
           SM_CYSIZE
           SM_CXFRAME
           SM_CYFRAME
           SM_CXMINTRACK
           SM_CYMINTRACK
           ;;
           ;;	Valid only for Windows 3.1 and above
           ;;
           SM_CXDOUBLECLK
           SM_CYDOUBLECLK
           SM_CXICONSPACING
           SM_CYICONSPACING
           SM_MENUDROPALIGNMENT
           SM_PENWINDOWS
           SM_DBCSENABLED
           ;;
           ;;	Valid only for Windows _NT
           ;;
           SM_CMOUSEBUTTONS

   ;;;
   ;;; 2) Default system char size (SYSTEM_FIXED_FONT)
   ;;;

	   SYSTEM_FIXED_WIDTH
	   SYSTEM_FIXED_HEIGHT

   ;;;
   ;;; 3) Display parameters
   ;;;

           HORZSIZE
           VERTSIZE
           HORZRES
           VERTRES
           BITSPIXEL
           PLANES
           ASPECTX
           ASPECTY
           ASPECTXY
           LOGPIXELSX
           LOGPIXELSY
           SIZEPALETTE
           COLORRES
           NUMRESERVED

   ;;;
   ;;; 4) System Colors
   ;;;

           (COLOR_SCROLLBAR             #[0 0 0])
           (COLOR_BACKGROUND            #[0 0 0])
           (COLOR_ACTIVECAPTION         #[0 0 0])
           (COLOR_INACTIVECAPTION       #[0 0 0])
           (COLOR_MENU                  #[0 0 0])
           (COLOR_WINDOW                #[0 0 0])
           (COLOR_WINDOWFRAME           #[0 0 0])
           (COLOR_MENUTEXT              #[0 0 0])
           (COLOR_WINDOWTEXT            #[0 0 0])
           (COLOR_CAPTIONTEXT           #[0 0 0])
           (COLOR_ACTIVEBORDER          #[0 0 0])
           (COLOR_INACTIVEBORDER        #[0 0 0])
           (COLOR_APPWORKSPACE          #[0 0 0])
           (COLOR_HIGHLIGHT             #[0 0 0])
           (COLOR_HIGHLIGHTTEXT         #[0 0 0])
           (COLOR_BTNFACE               #[0 0 0])
           (COLOR_BTNSHADOW             #[0 0 0])
           (COLOR_GRAYTEXT              #[0 0 0])
           (COLOR_BTNTEXT               #[0 0 0])
           ;;;
           ;;;	Valid only for Windows 3.1 and above
           ;;;
           (COLOR_INACTIVECAPTIONTEXT   #[0 0 0])
           (COLOR_BTNHIGHLIGHT          #[0 0 0])
           ;;;
           ;;;	Valid only for Windows 4.0 and above
           ;;;
	   (COLOR_3DDKSHADOW		#[0 0 0])
	   (COLOR_3DLIGHT		#[0 0 0])
	   (COLOR_INFOTEXT		#[0 0 0])
	   (COLOR_INFOBK		#[0 0 0])

   ;;;
   ;;; 5) System Palette Colors (20 first)
   ;;;

           (PALETTE_ENTRY_00            #[0 0 0])
           (PALETTE_ENTRY_01            #[0 0 0])
           (PALETTE_ENTRY_02            #[0 0 0])
           (PALETTE_ENTRY_03            #[0 0 0])
           (PALETTE_ENTRY_04            #[0 0 0])
           (PALETTE_ENTRY_05            #[0 0 0])
           (PALETTE_ENTRY_06            #[0 0 0])
           (PALETTE_ENTRY_07            #[0 0 0])
           (PALETTE_ENTRY_08            #[0 0 0])
           (PALETTE_ENTRY_09            #[0 0 0])
           (PALETTE_ENTRY_10            #[0 0 0])
           (PALETTE_ENTRY_11            #[0 0 0])
           (PALETTE_ENTRY_12            #[0 0 0])
           (PALETTE_ENTRY_13            #[0 0 0])
           (PALETTE_ENTRY_14            #[0 0 0])
           (PALETTE_ENTRY_15            #[0 0 0])
           (PALETTE_ENTRY_16            #[0 0 0])
           (PALETTE_ENTRY_17            #[0 0 0])
           (PALETTE_ENTRY_18            #[0 0 0])
           (PALETTE_ENTRY_19            #[0 0 0])

   ;;;
   ;;; 6) Work area
   ;;;

	   (WORK_AREA                   #[0 0 0 0])
   )

)

(defun :get-sys-color (param index sys-color)
   (let ((f (symbol '#:sys-windows:windows-parameters sys-color)))
        (windows_system_color index (funcall f param))))

(defun :get-pal-color (param index sys-color)
   (let ((f (symbol '#:sys-windows:windows-parameters sys-color)))
        (windows_palette_color index (funcall f param))))

(defun :get-work-area (param work-area)
   (let ((f (symbol '#:sys-windows:windows-parameters 'WORK_AREA)))
        (windows_system_work_area (funcall f param))))

(defvar :system-parameters (#:sys-windows:windows-parameters:make))

(defun :system-parameters ()
   (let ((params :system-parameters)
         (i -1))
        (windows_system_parameters (vlength params) params)
        ;;;
        ;;;	System colors
        ;;;
        (:get-sys-color params (incr i) 'COLOR_SCROLLBAR)
        (:get-sys-color params (incr i) 'COLOR_BACKGROUND)
        (:get-sys-color params (incr i) 'COLOR_ACTIVECAPTION)
        (:get-sys-color params (incr i) 'COLOR_INACTIVECAPTION)
        (:get-sys-color params (incr i) 'COLOR_MENU)
        (:get-sys-color params (incr i) 'COLOR_WINDOW)
        (:get-sys-color params (incr i) 'COLOR_WINDOWFRAME)
        (:get-sys-color params (incr i) 'COLOR_MENUTEXT)
        (:get-sys-color params (incr i) 'COLOR_WINDOWTEXT)
        (:get-sys-color params (incr i) 'COLOR_CAPTIONTEXT)
        (:get-sys-color params (incr i) 'COLOR_ACTIVEBORDER)
        (:get-sys-color params (incr i) 'COLOR_INACTIVEBORDER)
        (:get-sys-color params (incr i) 'COLOR_APPWORKSPACE)
        (:get-sys-color params (incr i) 'COLOR_HIGHLIGHT)
        (:get-sys-color params (incr i) 'COLOR_HIGHLIGHTTEXT)
        (:get-sys-color params (incr i) 'COLOR_BTNFACE)
        (:get-sys-color params (incr i) 'COLOR_BTNSHADOW)
        (:get-sys-color params (incr i) 'COLOR_GRAYTEXT)
        (:get-sys-color params (incr i) 'COLOR_BTNTEXT)
        ;;;
        ;;;	Valid only for Windows 3.1 and above
        ;;;
        (:get-sys-color params (incr i) 'COLOR_INACTIVECAPTIONTEXT)
        (:get-sys-color params (incr i) 'COLOR_BTNHIGHLIGHT)
	;;;
	;;;	Valid only for Windows 4.0 and above
	;;;
	;;; Dark shadow for three-dimensional display elements. 
	(:get-sys-color params (incr i) 'COLOR_3DDKSHADOW)
	;;; Light  color  for three-dimensional display elements (for
	;;; edges facing the light source.)
	(:get-sys-color params (incr i) 'COLOR_3DLIGHT)
	;;; Text color for tooltip controls.
	(:get-sys-color params (incr i) 'COLOR_INFOTEXT)
	;;; Background color for tooltip controls.
	(:get-sys-color params (incr i) 'COLOR_INFOBK)
        ;;;
        ;;;	Palette colors
        ;;;
        (setq i -1)
        (:get-pal-color params (incr i) 'PALETTE_ENTRY_00)
        (:get-pal-color params (incr i) 'PALETTE_ENTRY_01)
        (:get-pal-color params (incr i) 'PALETTE_ENTRY_02)
        (:get-pal-color params (incr i) 'PALETTE_ENTRY_03)
        (:get-pal-color params (incr i) 'PALETTE_ENTRY_04)
        (:get-pal-color params (incr i) 'PALETTE_ENTRY_05)
        (:get-pal-color params (incr i) 'PALETTE_ENTRY_06)
        (:get-pal-color params (incr i) 'PALETTE_ENTRY_07)
        (:get-pal-color params (incr i) 'PALETTE_ENTRY_08)
        (:get-pal-color params (incr i) 'PALETTE_ENTRY_09)
        (:get-pal-color params (incr i) 'PALETTE_ENTRY_10)
        (:get-pal-color params (incr i) 'PALETTE_ENTRY_11)
        (:get-pal-color params (incr i) 'PALETTE_ENTRY_12)
        (:get-pal-color params (incr i) 'PALETTE_ENTRY_13)
        (:get-pal-color params (incr i) 'PALETTE_ENTRY_14)
        (:get-pal-color params (incr i) 'PALETTE_ENTRY_15)
        (:get-pal-color params (incr i) 'PALETTE_ENTRY_16)
        (:get-pal-color params (incr i) 'PALETTE_ENTRY_17)
        (:get-pal-color params (incr i) 'PALETTE_ENTRY_18)
        (:get-pal-color params (incr i) 'PALETTE_ENTRY_19)
	;;
	;;
	;;
	(:get-work-area params 'WORK_AREA)
        params))
