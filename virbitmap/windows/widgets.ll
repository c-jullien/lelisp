;;;; .EnTete	"Le-Lisp version 15.24" " " "widgets.ll"
;;;; .Date	"1997/12/23"
;;;; .EnPied	"widgets.ll"
;;;; .Version	"1.00"
;;;; .Auteur 	"C. Jullien"
;;;; .Annexe I	""

;;; Check for version

(unless (>= (version) 15.2)
        (error 'load 'erricf 'widgets))

;;; Define default package WIDGETS.

(eval-when (eval)
	   (unless (getdef '#:display:windows:winbitmap)
		   (libload #u"windows/winstruct")))

(defvar #:sys-package:colon '#:display:windows)

;;;
;;; Tools
;;;

(defextern |WinInitWidgets| () fix)

(defvar :is-widgets-initialized ())

(defun :check-widget-initialized ()
   (unless :is-widgets-initialized
           (if (= (|WinInitWidgets|) 1)
               (setq :is-widgets-initialized t)
               (error '|WinInitWidgets| "Cannot initialize" ()))))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;									     ;;;
;;;                  -*-   M E S S A G E - B O X   -*-                       ;;;
;;;									     ;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defextern |WinMessage| (string fix fix))

(defun win-message (msg icon button)
   (when (and (<= 0 icon 3) (<= 0 button 5))
         (let ((response #[ok cancel abort retry ignore yes no])
               (ret ))
              (when (<= 0 (setq ret (|WinMessage| msg icon button)) 6)
                    (vref response ret)))))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;									     ;;;
;;;                      -*-   B U T T O N S   -*-                           ;;;
;;;									     ;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;
;;; 1/2) Virtual-Bitmap interface
;;;

(defextern windows_create_button   (vector string t fix t t) t)
(defextern windows_getstate_button (t) fix)
(defextern windows_setstate_button (t fix) fix)
(defextern windows_getcheck_button (t) fix)
(defextern windows_setcheck_button (t fix) fix)
(defextern windows_enable_button   (t fix) fix))
(defextern windows_display_button  (t) fix))

(eval-when (load eval compile)
     (defstruct #:image:rectangle:window:button
                (button-style 0)
                (check        0)
                (callback     #'(lambda (id button) (print id " " button)))))

(defvar #:image:rectangle:window:button:pushbutton)
(defvar #:image:rectangle:window:button:defpushbutton)
(defvar #:image:rectangle:window:button:checkbox)
(defvar #:image:rectangle:window:button:autocheckbox)
(defvar #:image:rectangle:window:button:radiobutton)
(defvar #:image:rectangle:window:button:3state)
(defvar #:image:rectangle:window:button:auto3state)
(defvar #:image:rectangle:window:button:groupbox)
(defvar #:image:rectangle:window:button:userbutton)
(defvar #:image:rectangle:window:button:autoradiobutton)

;; Callback method (called from C)

(defun button-callback (win button)
   (funcall (send 'callback win) win button))

(defun win-create-button (type le to wi he ti hi vi fa)
   (#:display:windows:check-widget-initialized)
;  (when fa (#:window:assert 'win-create-button fa))
   (setq type
         (selectq type
            (pushbutton      '#:image:rectangle:window:button:pushbutton)
            (defpushbutton   '#:image:rectangle:window:button:defpushbutton)
            (checkbox        '#:image:rectangle:window:button:checkbox)
            (autocheckbox    '#:image:rectangle:window:button:autocheckbox)
            (radiobutton     '#:image:rectangle:window:button:radiobutton)
            (3state          '#:image:rectangle:window:button:3state)
            (auto3state      '#:image:rectangle:window:button:auto3state)
            (groupbox        '#:image:rectangle:window:button:groupbox)
            (userbutton      '#:image:rectangle:window:button:userbutton)
            (autoradiobutton '#:image:rectangle:window:button:autoradiobutton)
            (t               type)))
   (let ((create (getfn type 'create)))
        (unless create
                (error 'win-create-button '#:display:errnotawindowtype type))
        (funcall create type le to wi he ti hi vi fa)))

(defun #:image:rectangle:window:button:create (sty le to wi he ti hi vi fa)
   (let ((window (#:image:rectangle:window:button:make)))
        (#:window:left    window le)
        (#:window:top     window to)
        (#:window:width   window wi)
        (#:window:height  window he)
        (#:window:title   window (if (eqstring "" ti) "Button" ti))
        (#:window:hilited window hi)
        (#:window:visible window vi)
        (#:window:father  window fa)
        (#:image:rectangle:window:button:button-style
             window
             (selectq sty
                 (#:image:rectangle:window:button:pushbutton      0)
                 (#:image:rectangle:window:button:defpushbutton   1)
                 (#:image:rectangle:window:button:checkbox        2)
                 (#:image:rectangle:window:button:autocheckbox    3)
                 (#:image:rectangle:window:button:radiobutton     4)
                 (#:image:rectangle:window:button:3state          5)
                 (#:image:rectangle:window:button:auto3state      6)
                 (#:image:rectangle:window:button:groupbox        7)
                 (#:image:rectangle:window:button:userbutton      8)
                 (#:image:rectangle:window:button:autoradiobutton 9)
                 (t                                               0)))
        (make-window window)))

(defun #:image:rectangle:window:button:make-window (window)
   (send 'create-button (#:window:display window) window))

(defun #:image:rectangle:window:button:get-state (window)
   (windows_getstate_button (:window-address window)))

(defun #:image:rectangle:window:button:set-state (window state)
   (windows_setstate_button (:window-address window) (if state 1 0)))

(defun #:image:rectangle:window:button:get-check (window)
   (windows_getcheck_button (:window-address window)))

(defun #:image:rectangle:window:button:set-check (window check)
   (windows_setcheck_button (:window-address window) (if (memq check '(0 1 2)) check 1)))

(defun #:image:rectangle:window:button:enable (window state)
   (windows_enable_button (:window-address window) (if state 1 0)))

(defun #:image:rectangle:window:button:display (window)
   (windows_display_button (:window-address window)))

;;;
;;; 2/2) Windows API interface
;;;

(defun :create-button (display win)
   ;;; If father window is transparent --> window is transparent (Input Only)
   (if (#:window:father win)
       (when (eq (#:image:rectangle:window:window-type (#:window:father win))
                 'transparent)
             (when (eq (#:image:rectangle:window:window-type win) 'opaque)
                   (printerror ':create-button 
                               "Window must be transparent" win))
             (#:image:rectangle:window:window-type win 'transparent)))
   (let ((type-window (or (#:image:rectangle:window:window-type win)
                          (:default-window-type display))))
        (:windows-create-button display win)))

(defun :windows-create-button (display win)
   (ifn (#:window:graph-env win)
        (#:window:graph-env win (#:graph-env:make)))
   (#:image:rectangle:window:window-type win 'opaque)
   (let* ((display-args (:vector-args display))
          (vi           (#:window:visible win)) 
          (cursor       (vref (:cursor-vector display) 
                              (or (#:window:cursor win)
                                  (#:window:cursor
                                            win
                                            (#:window:cursor
                                                  (#:window:father win))))))
          (extend       (:make-top-extend win display))
          (properties   (#:image:rectangle:window:graphic-properties win)))
	(fillvector display-args  0  0 19)
        (vset display-args 0 (#:window:left   win))
        (vset display-args 1 (#:window:top    win))
        (vset display-args 2 (#:window:width  win))
        (vset display-args 3 (#:window:height win))
        (vset display-args 4 (#:image:rectangle:window:button:button-style win))
	(:window-address
                win
                (windows_create_button
                        ; (:display-address display) ;; not used in Windows
                        display-args
                        (#:window:title win)
                        cursor
                        (or vi 1)
                        (:window-address (#:window:father win))
                        win))
	(if (eq (:window-address win) 0)
            (error ':create-button "Insufficient Memory" win))
        ;;	No graph env with buttons
        ;;      (:windows-create-graph-env display win)
        (unless (#:image:rectangle:window:events-list win)
                (#:image:rectangle:window:events-list win 
                  (:opaque-events-list display)))
	win))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;;                     -*-   S C R O L L E R   -*-                          ;;;
;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;
;;; 1/2) Virtual-Bitmap interface
;;;

(defextern windows_create_scroll    (vector string t fix t t) t)
(defextern windows_get_scroll_pos   (t) fix)
(defextern windows_set_scroll_pos   (t fix) fix)
(defextern windows_set_scroll_range (t fix fix) fix)
(defextern windows_display_scroll   (t) fix))
(defextern windows_enable_scroll    (t fix) fix))

(eval-when (load eval compile)
     (defstruct #:image:rectangle:window:scroll
                (scroller-style 0)
                (callback       #'(lambda (id code pos)
                                     (selectq code
                                        (0  ;; SB_LINEUP
                                            (send 'val id
                                                  (max
                                                       (- (send 'val id)
                                                          (send 'inc id))
                                                       (send 'min id))))
                                        (1  ;; SB_LINEDOWN
                                            (send 'val id
                                                  (min
                                                       (+ (send 'val id)
                                                          (send 'inc id))
                                                       (send 'max id))))
                                        (2  ;; SB_PAGEUP
                                            (send 'val id
                                                  (max
                                                       (- (send 'val id)
                                                          (send 'show id))
                                                       (send 'min id))))
                                        (3  ;; SB_PAGEDOWN
                                            (send 'val id
                                                  (min
                                                       (+ (send 'val id)
                                                          (send 'show id))
                                                       (send 'max id))))
                                        (4  ;; SB_THUMPOSITION
                                            (send 'val id pos))
                                        (5  ;; SB_THUMTRACK
                                            (send 'val id pos)))
                                     (send 'set-scroll-pos id (send 'val id))
                                     (print id " Code : " code
                                               " Pos : " (send 'val id))))
                (min            0)
                (max            100)
                (show           10)
                (inc            1)
                (val            0)))

(defvar #:image:rectangle:window:scroll:vertical-scroller)
(defvar #:image:rectangle:window:scroll:horizontal-scroller)

;; Callback method (called from C)

(defun scroll-callback (win code pos)
   (funcall (send 'callback win) win code pos))

(defun win-create-scroll (type le to wi he min max show inc val vi fa)
   (#:display:windows:check-widget-initialized)
;  (when fa (#:window:assert 'win-create-scroll fa))
   (setq type
     (selectq type
       (vertical-scroller   #:image:rectangle:window:scroll:vertical-scroller)
       (horizontal-scroller #:image:rectangle:window:scroll:horizontal-scroller)
       (t                   type)))
   (let ((create (getfn type 'create)))
        (unless create
                (error 'win-create-scroll '#:display:errnotawindowtype type))
        (funcall create type le to wi he min max show inc val vi fa)))

(defun #:image:rectangle:window:scroll:create (sty le to wi he min max show inc val vi fa)
   (let ((window (#:image:rectangle:window:scroll:make)))
        (#:window:left    window le)
        (#:window:top     window to)
        (#:window:width   window wi)
        (#:window:height  window he)
        (#:window:title   window "")
        (#:window:hilited window 0)
        (#:window:visible window vi)
        (#:window:father  window fa)
        (#:image:rectangle:window:scroll:min  window min)
        (#:image:rectangle:window:scroll:max  window max)
        (#:image:rectangle:window:scroll:show window show)
        (#:image:rectangle:window:scroll:inc  window inc)
        (#:image:rectangle:window:scroll:val  window val)
        (#:image:rectangle:window:scroll:scroller-style
             window
             (selectq sty
                 (#:image:rectangle:window:scroll:vertical-scroller   0)
                 (#:image:rectangle:window:scroll:horizontal-scroller 1)
                 (t                                                   0)))
        (make-window window)))

(defun #:image:rectangle:window:scroll:make-window (window)
   (send 'create-scroll (#:window:display window) window))

(defun #:image:rectangle:window:scroll:set-scroll-pos (window pos)
   (windows_set_scroll_pos (:window-address window) pos)
   (send 'val window pos))

(defun #:image:rectangle:window:scroll:get-scroll-pos (window)
   (send 'val window (windows_get_scroll_pos (:window-address window))))

(defun #:image:rectangle:window:scroll:set-scroll-range (window min max)
   (send 'min window min)
   (send 'max window max)
   (windows_set_scroll_range (:window-address window) min max))

(defun #:image:rectangle:window:scroll:enable (window state)
   (windows_enable_scroll (:window-address window) (if state 1 0)))

(defun #:image:rectangle:window:scroll:display (window)
   (windows_display_scroll (:window-address window)))

;;;
;;; 2/2) Windows API interface
;;;

(defun :create-scroll (display win)
   ;;; If father window is transparent --> window is transparent (Input Only)
   (if (#:window:father win)
       (when (eq (#:image:rectangle:window:window-type (#:window:father win))
                 'transparent)
             (when (eq (#:image:rectangle:window:window-type win) 'opaque)
                   (printerror ':create-scroll 
                               "Window must be transparent" win))
             (#:image:rectangle:window:window-type win 'transparent)))
   (let ((type-window (or (#:image:rectangle:window:window-type win)
                          (:default-window-type display))))
        (:windows-create-scroll display win)))

(defun :windows-create-scroll (display win)
   (ifn (#:window:graph-env win)
        (#:window:graph-env win (#:graph-env:make)))
   (#:image:rectangle:window:window-type win 'opaque)
   (let* ((display-args (:vector-args display))
          (vi           (#:window:visible win)) 
          (cursor       (vref (:cursor-vector display) 
                              (or (#:window:cursor win)
                                  (#:window:cursor
                                            win
                                            (#:window:cursor
                                                   (#:window:father win))))))
          (extend       (:make-top-extend win display))
          (properties   (#:image:rectangle:window:graphic-properties win)))
        
	(fillvector display-args  0  0 19)
        (vset display-args 0 (#:window:left   win))
        (vset display-args 1 (#:window:top    win))
        (vset display-args 2 (#:window:width  win))
        (vset display-args 3 (#:window:height win))
        (vset display-args 4 (#:image:rectangle:window:scroll:scroller-style win))
        (vset display-args 5 (#:image:rectangle:window:scroll:min  win))
        (vset display-args 6 (#:image:rectangle:window:scroll:max  win))
        (vset display-args 7 (#:image:rectangle:window:scroll:show win))
        (vset display-args 8 (#:image:rectangle:window:scroll:inc  win))
        (vset display-args 9 (#:image:rectangle:window:scroll:val  win))

	(:window-address
                win
                (windows_create_scroll
                        ; (:display-address display) ;; not used in Windows
                        display-args
                        (#:window:title win)
                        cursor
                        (or vi 1)
                        (:window-address (#:window:father win))
                        win))

	(if (eq (:window-address win) 0)
            (error ':create-scroll "Insufficient Memory" win))

;;	No graph env with buttons
;;      (:windows-create-graph-env display win)

	(unless (#:image:rectangle:window:events-list win)
                (#:image:rectangle:window:events-list win 
                  (:opaque-events-list display)))

	win))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;									     ;;;
;;;                      -*-   L I S T B O X   -*-                           ;;;
;;;									     ;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;
;;; 1/2) Virtual-Bitmap interface
;;;

(defextern windows_create_listbox      (vector string t fix t t) t)
(defextern windows_addstring_listbox   (t string) fix)
(defextern windows_delstring_listbox   (t fix) fix)
(defextern windows_getstring_listbox   (t fix string) fix)
(defextern windows_getindex_listbox    (t) fix)
(defextern windows_getindexes_listbox  (t fix vector) fix)
(defextern windows_clearsel_listbox    (t) fix)

(eval-when (load eval compile)
     (defstruct #:image:rectangle:window:listbox
                (listbox-style 0)
                (callback      #'(lambda (id) (print id)))))

(defvar #:image:rectangle:window:listbox:simple-selection)
(defvar #:image:rectangle:window:listbox:multiple-selection)

;; Callback method (called from C)

(defun listbox-callback (win)
   (funcall (send 'callback win) win))

(defun win-create-listbox (type le to wi he ti hi vi fa)
   (#:display:windows:check-widget-initialized)
;  (when fa (#:window:assert 'win-create-listbox fa))
   (setq type
         (selectq type
            (simple-selection    #:image:rectangle:window:listbox:simple-selection)
            (multiple-selection  #:image:rectangle:window:listbox:multiple-selection)
            (t                   type)))
   (let ((create (getfn type 'create)))
        (unless create
                (error 'win-create-listbox '#:display:errnotawindowtype type))
        (funcall create type le to wi he ti hi vi fa)))

(defun #:image:rectangle:window:listbox:create (sty le to wi he ti hi vi fa)
   (let ((window (#:image:rectangle:window:listbox:make)))
        (#:window:left    window le)
        (#:window:top     window to)
        (#:window:width   window wi)
        (#:window:height  window he)
        (#:window:title   window (if (eqstring "" ti) "Button" ti))
        (#:window:hilited window hi)
        (#:window:visible window vi)
        (#:window:father  window fa)
        (#:image:rectangle:window:listbox:listbox-style
             window
             (selectq sty
                 (#:image:rectangle:window:listbox:simple-selection   0)
                 (#:image:rectangle:window:listbox:multiple-selection 1)
                 (t                                                   0)))
        (make-window window)))

(defun #:image:rectangle:window:listbox:make-window (window)
   (send 'create-listbox (#:window:display window) window))

(defun #:image:rectangle:window:listbox:addstring (window label)
   (windows_addstring_listbox (:window-address window) label))

(defun #:image:rectangle:window:listbox:delstring (window index)
   (windows_delstring_listbox (:window-address window) index))

(defvar #:image:rectangle:window:listbox:vector-len   64)
(defvar #:image:rectangle:window:listbox:vector-index
        (makevector #:image:rectangle:window:listbox:vector-len -1))

(defun #:image:rectangle:window:listbox:get-selection (window)
   (if (eq (#:image:rectangle:window:listbox:listbox-style window) 0)
       (let ((s (makestring 128 0))
             (i (windows_getindex_listbox (:window-address window))))
            (windows_getstring_listbox (:window-address window) i s)
            (setq s (substring s 0 (chrpos 0 s)))
            (when (> (slen s) 0)
                  (list s)))
       (let ((s (makestring 128 0))
             (r ())
             (i (windows_getindexes_listbox
                        (:window-address window)
                        #:image:rectangle:window:listbox:vector-len
                        #:image:rectangle:window:listbox:vector-index)))
            (for (j 0 1 (- i 1))
                 (windows_getstring_listbox
                         (:window-address window)
                         (vref #:image:rectangle:window:listbox:vector-index j)
                         s)
                 (newl r (substring s 0 (chrpos 0 s))))
            (nreverse r))))

(defun #:image:rectangle:window:listbox:clear-selection (window)
   (windows_clearsel_listbox (:window-address window)))

;;;
;;; 2/2) Windows API interface
;;;

(defun :create-listbox (display win)
   ;;; If father window is transparent --> window is transparent (Input Only)
   (if (#:window:father win)
       (when (eq (#:image:rectangle:window:window-type (#:window:father win))
                 'transparent)
             (when (eq (#:image:rectangle:window:window-type win) 'opaque)
                   (printerror ':create-listbox 
                               "Window must be transparent" win))
             (#:image:rectangle:window:window-type win 'transparent)))
   (let ((type-window (or (#:image:rectangle:window:window-type win)
                          (:default-window-type display))))
        (:windows-create-listbox display win)))

(defun :windows-create-listbox (display win)
   (ifn (#:window:graph-env win)
        (#:window:graph-env win (#:graph-env:make)))
   (#:image:rectangle:window:window-type win 'opaque)
   (let* ((display-args (:vector-args display))
          (vi           (#:window:visible win)) 
          (cursor       (vref (:cursor-vector display) 
                              (or (#:window:cursor win)
                                  (#:window:cursor
                                            win
                                            (#:window:cursor
                                                  (#:window:father win))))))
          (extend       (:make-top-extend win display))
          (properties   (#:image:rectangle:window:graphic-properties win)))
	(fillvector display-args  0  0 19)
        (vset display-args 0 (#:window:left   win))
        (vset display-args 1 (#:window:top    win))
        (vset display-args 2 (#:window:width  win))
        (vset display-args 3 (#:window:height win))
        (vset display-args 4 (#:image:rectangle:window:listbox:listbox-style win))
        (:window-address
                win
                (windows_create_listbox
                        ; (:display-address display) ;; not used in Windows
                        display-args
                        (#:window:title win)
                        cursor
                        (or vi 1)
                        (:window-address (#:window:father win))
                        win))
	(if (eq (:window-address win) 0)
            (error ':create-listbox "Insufficient Memory" win))
        ;;	No graph env with listboxs
        ;;      (:windows-create-graph-env display win)
        (unless (#:image:rectangle:window:events-list win)
                (#:image:rectangle:window:events-list win 
                  (:opaque-events-list display)))
	win))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;									     ;;;
;;;                    -*-   O N L I N E   H E L P   -*-                     ;;;
;;;									     ;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defextern windows_help (string fix string) fix)

(defun #:display:windows:help (help-file code token)
   (windows_help help-file code token))

;;; Test case :

'(defun test-widgets ()
   (setq w0 (create-window 'window 500 100 500 500 "Main" 1 1))
   (setq w1 (win-create-button '#:image:rectangle:window:button:pushbutton
                 50 100 175   30 "PushButton" 1 1 w0))
   (setq w2 (win-create-button '#:image:rectangle:window:button:defpushbutton
                 50 150 175   30 "DefPushButton" 1 1 w0))
   (setq w3 (win-create-button '#:image:rectangle:window:button:checkbox
                 50 200 175   30 "CheckBox" 1 1 w0))
   (setq w4 (win-create-button '#:image:rectangle:window:button:autocheckbox
                 50 250 175   30 "AutoCheckBox" 1 1 w0))
   (setq w5 (win-create-button '#:image:rectangle:window:button:radiobutton
                 300 100 175  30 "RadioButton" 1 1 w0))
   (setq w6 (win-create-button '#:image:rectangle:window:button:3state
                 300 150 175  30 "3State" 1 1 w0))
   (setq w7 (win-create-button '#:image:rectangle:window:button:auto3state
                 300 200 175  30 "Auto3State" 1 1 w0))
   (setq w8 (win-create-button '#:image:rectangle:window:button:autoradiobutton
                 300 250 175  30 "AutoRadioButton" 1 1 w0))
   (setq g1 (win-create-button '#:image:rectangle:window:button:groupbox
                  40  50 440 250 "GroupBox" 1 1 w0))
   (setq s1 (win-create-scroll '#:image:rectangle:window:scroll:vertical-scroller
                   8  50  18 250 -100 100  30    2    0 1 w0))
   (setq s2 (win-create-scroll '#:image:rectangle:window:scroll:horizontal-scroller
                  40 320 440  18 -500 500 100   10 -200 1 w0))
#|
   Bug in Windows version (DO NOT USE !!)

   (setq l1 (win-create-listbox '#:image:rectangle:window:listbox:simple-selection
                  40 380 200 200 "ListBox 1" 1 1 w0))
   (repeat 64 (send 'addstring l1 (string (gensym))))
   (setq l2 (win-create-listbox '#:image:rectangle:window:listbox:multiple-selection
                 280 380 200 200 "ListBox 2" 1 1 w0))
   (repeat 64 (send 'addstring l2 (string (gensym))))
|#
   )
