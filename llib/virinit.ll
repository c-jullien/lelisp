;;;
;;; VIRINIT:  Virtual Bitmap Initialization Primitives.
;;;
;;; $Source: /usr/cvs/lelisp/llib/virinit.ll,v $
;;; $Date: 2016/05/21 10:36:06 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

(unless (>= (version) 15.2)
        (error 'load 'erricf 'virbitmap))

(eval-when (eval)
	   (unless (getdef '#:display:defun)
		   (libload "virmacros.ll")))

(add-feature 'virbitmap)

(setq #:sys-package:colon 'display)


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;                                 GLOBALS
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defmessage :errnotadisplay
  (french "n'est pas un dispositif d'affichage")
  (english "not a display"))

(defmessage :not-a-color-display
  (french "ce n'est pas un dispositif d'affichage couleur")
  (english "not a color display"))

(defmessage :errnotawindow
  (french "l'argument n'est pas une fene^tre")
  (english "not a window"))

(defmessage :errnotawindowtype
  (french "l'argument n'est pas un type de fene^tre")
  (english "not a window type"))

(defmessage :errnotabitmap
  (french "l'argument n'est pas un bitmap")
  (english "not a bitmap"))

(defmessage :errnotamenu
  (french "l'argument n'est pas un menu")
  (english "not a menu"))

(defmessage :errnotacolor
  (french "l'argument n'est pas une couleur")
  (english "not a color"))

(defmessage :err-not-a-valid-pattern
  (french "l'argument n'est pas un motif")
  (english "not a pattern"))

(defmessage :err-not-a-valid-mode
  (french "l'argument n'est pas un mode valide")
  (english "not a valid function"))

(defmessage :err-not-a-line-style
  (french "l'argument n'est pas un style de ligne valide")
  (english "not a valid line style"))

(defmessage :err-not-a-valid-cursor
  (french "l'argument n'est pas un curseur valide")
  (english "not a valid cursor"))

(defmessage :err-not-a-valid-graph-env
  (french "l'argument n'est pas un environnement graphique valide")
  (english "not a valid graphic environment"))

(defmessage :errnotafont
  (french "l'argument n'est pas un nume'ro de police de caracte`res")
  (english "not a valid font number"))

(defmessage :err-not-a-font-name
  (french "l'argument n'est pas un nom de police de caracte`res")
  (english "not a valid font name"))

(defmessage :errnotamutable
  (french "l'argument n'est pas une couleur modifiable")
  (english "not a mutable color"))

(defmessage :errbitmapinuse
  (french "pattern utilise' comme motif ou curseur")
  (english "bitmap used as a pattern or a cursor"))

(defmessage :errnotasaveddisplay
  (french "pas un display sauve' par BITMAP-SAVE")
  (english "not a display saved by BITMAP-SAVE"))

(defmessage :not-yet-implemented
  (french "fonction non implemente'e")
  (english "not implemented"))

(defmessage :not-a-valid-argument
  (french "parame`tre incorrect")
  (english "not a valid argument"))

(defmessage :no-current-display
  (french "pas de dispositif d'affichage courant")
  (english "no current display"))

(defmessage :no-current-window
  (french "pas de fene^tre courante")
  (english "no current window"))

(defmessage :err-diff-display
  (french "les dispositifs d'affichage sont diffe'rents")
  (english "displays are different"))

(defmessage :err-not-a-cursor-name
  (french "l'argument n'est pas un nom de curseur")
  (english "not a cursor name"))




(defvar #:sys-package:bitmap
  (when (boundp '#:sys-package:bitmap)
	#:sys-package:bitmap))

(defvar #:bitmap:name
  (when (boundp '#:bitmap:name)
	#:bitmap:name))

(defconstant #:display:default-bitmap 'bvtty)

(defvar #:display:all-bitmaps
  (when (boundp '#:display:all-bitmaps)
	#:display:all-bitmaps))

(defvar #:display:all-displays
  (when (boundp '#:display:all-displays)
	#:display:all-displays))

(defvar #:window:prologuep
  (when (boundp '#:window:prologuep)
	#:window:prologuep))

(defvar #:graph-env:main-graph-env
  (when (boundp '#:graph-env:main-graph-env)
	#:graph-env:main-graph-env))

(defconstant #:mode:set 3)
(defconstant #:mode:or 7)
(defconstant #:mode:xor 6)
(defconstant #:mode:not 12)


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;                             LOADING
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defun inibitmap &nobind
  ;; Initializes the Display of type BITMAP
  ;; Loads modules associated with this display
  (setq #:bitmap:name (symbol () (cond ((eq (arg) 1) (arg 0))
				       ((getenv "BITMAP"))
				       (t #:display:default-bitmap))))
  (unless (cassq #:bitmap:name #:display:all-bitmaps)
	  (let ((file (catenate #:system:virbitmap-directory
				#:bitmap:name
				#:system:lelisp-extension)))
	    (if (probefile file)
		(loadfile file t)
	        (error 'inibitmap 'errfile file)))
	  (unless (cassq #:bitmap:name #:display:all-bitmaps)
		  (setq #:display:all-bitmaps
			(acons #:bitmap:name #:sys-package:bitmap
			       #:display:all-bitmaps))))
  #:bitmap:name)



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;                                  DISPLAY                                  ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; The following fields have to be initialized for each Virtual Bitmap:
;;;     #:display:root-window    with the root-window
;;;     #:window:windows         at least the root window
;;;     #:display:foreground     
;;;     #:display:background     
;;;     #:display:colors         with the color list (at least
;;;                               foreground and background)
;;;     #:display:font-names     with the font name list

(defun bitprologue args
    ;;; Open a connexion to the the display NAME using the device DEVICE
    ;;; if arguments are not supplied this function uses the default
    ;;; DISPLAY 
  (let ((name (when args (nextl args)))
	(device (when args (nextl args))))
    (when #:display:all-bitmaps
	  (unless name (setq name (caar #:display:all-bitmaps)))
	  (let* ((package (cassq name #:display:all-bitmaps))
		 (display (if (and package
				   (getfn1 package 'make)
				   (subtypep package 'display))
			      (new package)
			      (new 'display))))
	    (#:display:name display name)
	    (#:display:package display package)
	    (#:display:device display device)
	    (send 'bitprologue display)
	    (newl #:display:all-displays display)
	    (#:display:prologuep display t)
	    (unless (:internal-current-display)
		    (current-display display))
	    display))))

(:define-default-method bitprologue)



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;; (bitmap-save) (bitmap-save <displays>) (bitmap-save t)
;;; Save the windows, menus, icones, fonts, patterns, colors and cursors
;;; of the actual DISPLAY (without arguments) or of all the open DISPLAYs
;;; if the argument = T or of a list of DISPLAYs.
;;; Returns the list of all the saved DISPLAYs ready to be given 
;;; to the BITMAP-RESTORE function.

(defun bitmap-save &nobind
  (let ((displays (cond ((eq (arg) 0)
			 (list (:internal-current-display)))
			((eq (arg 0) t)
			 #:display:all-displays)
			(t
			 (unless (listp (arg 0)) ; car mapc ne le teste pas.
				 (error 'bitmap-save 'errnla (arg 0)))
			 (arg 0)))))
    (mapc ':save-a-display displays)
    ;; If no more curent display, take the 1rst one.
    (unless (:internal-current-display)
	    (current-display (car #:display:all-displays)))
    displays))


;;;
;;; Modify all the fields of a DISPLAY. They will not point on any
;;; structures of the screen system.
;;; This DISPLAY is removed from the display list.
;;; If it was the current display, the current diplay is set to ()

(defun :save-a-display (display)
  (unless (typep display 'display)
	  (error 'bitmap-save '#:display:errnotadisplay display))
  (let ((saved-windows (append (#:display:windows display) ()))
	(saved-bitmaps
	 (mapcar (lambda (i)
		   (list i
			 (#:bitmap:w i)
			 (#:bitmap:h i)
			 (#:bitmap:bytes i)))
		 (#:display:bitmaps display)))
	(saved-menus (append (#:display:menus display) ()))
	(saved-colors (append (#:display:colors display) ()))
	(saved-fonts (mapcar 'car (#:display:font-names display)))
	(saved-patterns (append (#:display:pattern-bitmaps display) ()))
	(saved-cursors (append (#:display:cursor-bitmaps display) ()))
	(saved-stipples 
	 (mapcar (lambda (i)
		   (list i
			 (#:bitmap:w i)
			 (#:bitmap:h i)
			 (#:bitmap:stipple:data i)))
		 (#:display:stipple-bitmaps display)))
	(saved-current-window (#:display:window display))
	(saved-focus-window (#:display:keyboard-focus-window display))
	(saved-event-mode (#:display:eventmode display))
	(saved-predefined (list 'saved-display
				(#:display:root-window display)
				(#:display:foreground display)
				(#:display:background display)
				(when (eq display (:internal-current-display))
				      t)
				)))
    (newl saved-bitmaps (:save-colortable saved-colors))
    (setq saved-windows (delq (#:display:root-window display) saved-windows))
    (mapc (lambda (window)
	    (unless (#:window:father window)
		    (check-window-position window)))
	  saved-windows)
    (setq saved-colors (delq (#:display:foreground display) saved-colors))
    (setq saved-colors (delq (#:display:background display) saved-colors))
    ;; because (font-name) works on the curent display
    (with ((current-display display))
	  (setq saved-fonts
		(delq (font-name (standard-roman-font)) saved-fonts))
	  (setq saved-fonts
		(delq (font-name (standard-bold-font)) saved-fonts))
	  (setq saved-fonts (delq (font-name (large-roman-font)) saved-fonts))
	  (setq saved-fonts (delq (font-name (small-roman-font)) saved-fonts))
	  (current-window ())
	  (flush-event))
    (when (#:display:prologuep display)
	  (send 'bitmap-save display)
	  (:do-close display))
    (mapc (lambda (w) (#:window:extend w ()))
	  saved-windows)
    ;; \\ Why not  kill and free Resources?    
    (#:display:eventmode display saved-event-mode)
    (#:display:window display saved-current-window)
    (#:display:keyboard-focus-window display saved-focus-window)
    (#:display:windows display saved-windows)
    (#:display:menus display saved-menus)
    (#:display:bitmaps display saved-bitmaps)
    (#:display:menus display saved-menus)
    (#:display:colors display saved-colors)
    (#:display:font-names display saved-fonts)
    (#:display:pattern-bitmaps display saved-patterns)
    (#:display:cursor-bitmaps display saved-cursors)
    (#:display:stipple-bitmaps display saved-stipples)
    (#:display:extend display saved-predefined)
    display))


(defun :save-colortable (colors)
  (mapcar (lambda (c)
	    (vector (#:color:extend c)
		    (#:color:red c)
		    (#:color:green c)
		    (#:color:blue c)
		    (#:color:mutable c)))
	  colors))
;;;
;;; BITMAP-RESTORE (re)opens a list of displays saved by BITMAP-SAVE
;;; #:SYS-PACKAGE:TTY is updated in order to print error messages.

(defun bitmap-restore (displays)
  (unless (listp displays)
	  (error 'bitmap-restore 'errnla displays))
  (let ((#:sys-package:tty 'tty))
    (mapc ':restore-a-display displays)
    displays))


;;;
;;; Full RESTORE of a DISPLAY
;;; The current display is set (as it was at the SAVE-BITMAP times)

(defun :restore-a-display (display)
  (unless (typep display 'display)
	  (error 'bitmap-restore '#:display:errnotadisplay display))
  (unless (and (consp (#:display:extend display))
	       (eq 'saved-display (car (#:display:extend display))))
	  (error 'bitmap-restore ':errnotasaveddisplay display))
  (let ((saved-windows (#:display:windows display))
	(saved-bitmaps (cdr (#:display:bitmaps display)))
	(colortable (car (#:display:bitmaps display)))
	(saved-menus (#:display:menus display))
	(saved-colors (#:display:colors display))
	(saved-fonts (#:display:font-names display))
	(saved-patterns (#:display:pattern-bitmaps display))
	(saved-cursors (#:display:cursor-bitmaps display))
	(saved-stipples (#:display:stipple-bitmaps display))
	(saved-named-cursors (nreverse (#:display:named-cursors display)))
	(saved-root-window (#:display:root-window display))
	(saved-current-window (#:display:window display))
	(saved-focus-window (#:display:keyboard-focus-window display))
	(saved-event-mode (#:display:eventmode display))
	(saved-predefined (#:display:extend display))
	old
	)
    (#:display:windows display ())
    (#:display:bitmaps display ())
    (#:display:stipple-bitmaps display ())
    (#:display:menus display ())
    (#:display:colors display ())
    (#:display:font-names display ())
    (#:display:pattern-bitmaps display ())
    (#:display:cursor-bitmaps display ())
    (#:display:named-cursors display ())
    (#:display:extend display ())
    
    ;; Simulate a BITPROLOGUE on a previously allocated DISPLAY
    (send 'bitmap-restore display)
    (newl #:display:all-displays display)
    (#:display:prologuep display t)

    ;; (re)construction of all the objets
    (with ((current-display display))

	  (setq old (cadr saved-predefined))
	  (:exchange-and-subst (root-window) old (#:display:windows display))
	  (#:display:root-window display old)

	  (setq old (caddr saved-predefined))
	  (:exchange-and-subst (standard-foreground)
			       old
			       (#:display:colors display))
	  (#:display:foreground display old)
	  (#:graph-env:foreground (#:display:main-graph-env display) old)

	  (setq old (caddr (cdr saved-predefined)))
	  (:exchange-and-subst (standard-background)
			       old
			       (#:display:colors display))
	  (#:display:background display old)
	  (#:graph-env:background (#:display:main-graph-env display) old)
	  ;; color restore
	  (mapc (lambda (c)
		  (unless
		   (catcherror  t
		     (:exchange-and-subst
		      (if (#:color:name c)
			  (make-named-color (#:color:name c))
			  (if (#:color:mutable c)
			      (make-mutable-color (#:color:red c)
						  (#:color:green c)
						  (#:color:blue c))
			      (make-color (#:color:red c)
					  (#:color:green c)
					  (#:color:blue c))))
		      c
		      (#:display:colors display)))
		   (error 'restore-core "Error for color" c)))
		saved-colors)
	  ;; bitmaps.
	  (mapc
	   (lambda ((i w h bytes))
	     (unless
	      (catcherror
	       t
	       (:exchange-and-subst
		(let (bwbitmap
		      (bitmap (create-bytemap w h bytes colortable)))
		  (if (eq (type-of i) '#:bitmap:bytemap)
		      bitmap
		      (setq bwbitmap (create-bitmap w h))
		      (bitblit bwbitmap bitmap 0 0 0 0 w h)
		      (kill-bitmap bitmap)
		      bwbitmap))
		i
		(#:display:bitmaps display)))
	      (error 'restore-core "Error for bitmap" i)))
	   saved-bitmaps)
	  ;;; stipples
	  (mapc
	   (lambda ((i w h data))
	     (unless
	      (catcherror
	       t
	       (:exchange-and-subst
		(create-stipple w h data)
		i
		(#:display:stipple-bitmaps display)))
	      (error 'restore-core "Error for stipple" i)))
	   saved-stipples)
	  ;; fonts.
	  (mapc
	   (lambda (f)
	     (unless
	      (catcherror t (load-font f))
	      (error 'restore-core "Error for font" f)))
	   saved-fonts)
	  ;; patterns.
	  (mapc (lambda (pat)
		  (unless
		   (catcherror t (make-pattern pat))
		   (error 'restore-core "Error for pattern" pat)))
		saved-patterns)
	  ;; cursors.
	  (mapc (lambda ((b1 b2 x y))
		  (unless
		   (catcherror t (make-cursor b1 b2 x y))
		   (error 'restore-core "Error for cursor" b1)))
		saved-cursors)
	  ;; named cursors.
	  (mapc
	   (lambda (name)
	     (unless
	      (catcherror t (make-named-cursor name))
	      (error 'restore-core "Error for named cursor" name)))
	   saved-named-cursors)
	  ;; windows.
	  (unless
	   (catcherror t (:recreate-windows display saved-windows))
	   (error 'restore-core "Error for one window of " saved-windows))
	  ;; Menus.
	  (unless
	   (catcherror t (:recreate-menus display saved-menus))
	   (error 'restore-core "Error for one menu of " saved-menus))
	  ;; Current window.
	  (current-window saved-current-window)
	  (current-keyboard-focus-window saved-focus-window)
	  (event-mode saved-event-mode)
	  )
    
    ;; Set the new current display
    (when (caddr (cddr saved-predefined))
	  (current-display display))

    display))


(defun :recreate-windows (display windows)
  ;; (re)construct the sub-windows of the window list.
  ;; If a window has a father which is not reconstructed,
  ;; it is added at the end of the list. The fathers are
  ;; always reconstructed before the sons.
  (when windows
	(let ((window (car windows))
	      ge)
	  (if (and (#:window:father window)
		   (not (windowp (#:window:father window))))
	      (:recreate-windows display (append1 (cdr windows) window))
	    ;; else
	    (setq ge (#:window:graph-env window))
	    (unless ge
		    (error ':recreate-windows "impossible error 1" window))
	    (let ((bm (#:graph-env:bitmap ge))
		  (font (#:graph-env:font ge))
		  (line-style (#:graph-env:line-style ge))
		  (pattern (#:graph-env:pattern ge))
		  (mode (#:graph-env:mode ge))
		  (foreground (#:graph-env:foreground ge))
		  (background (#:graph-env:background ge))
		  (clip-x (#:graph-env:clip-x ge))
		  (clip-y (#:graph-env:clip-y ge))
		  (clip-w (#:graph-env:clip-w ge))
		  (clip-h (#:graph-env:clip-h ge))
		  (cursor (#:window:cursor window))
		  )
	      (make-window window)
	      (with ((current-window window))
		    (current-font font)
		    (current-line-style line-style)
		    (current-pattern pattern)
		    (current-mode mode)
		    (current-foreground foreground)
		    (current-background background)
		    (current-clip clip-x clip-y clip-w clip-h)
		    (current-cursor cursor)
		    )
	      (when bm
		    ;; Bug window-bitmap will return #:graph-env:bitmap
		    ;; which is the old BITMAP
		    (#:graph-env:bitmap (#:window:graph-env window) ())
		    (let ((newbm (window-bitmap window)))
		      (exchvector newbm bm)
		      (#:graph-env:bitmap (#:window:graph-env window) bm))))
	    (:recreate-windows display (cdr windows))))))


(defun :recreate-menus (display menus)
  ;; reconstruct the menus from the menu list.
  (mapc (lambda (menu)
	  (let ((new-menu (create-menu (#:menu:title menu))))
	    (mapc (lambda (il)
		    (menu-insert-item-list
		     new-menu
		     0
		     (#:menu:itemlist:name il)
		     (#:menu:itemlist:active il))
		    (mapc (lambda (i)
			    (menu-insert-item
			     new-menu
			     0
			     0
			     (#:menu:item:name i)
			     (#:menu:item:active i)
			     (#:menu:item:value i)))
			  (reverse (#:menu:itemlist:items il))))
		  (reverse (#:menu:itemlists menu)))
	    (:exchange-and-subst new-menu menu (#:display:menus display))))
	menus))


(defun :exchange-and-subst (new old newlist)
  (when old
	(exchvector new old)
	(rplaca (memq new newlist) old)))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun bitepilogue displays
  ;; Closes the connexion to the DISPLAYS or to the default display
  ;; frees everything
  (cond ((eq displays ())
	 (setq displays (list (:internal-current-display))))
	((eq (car displays) t)
	 (setq displays #:display:all-displays)))
  (mapc (lambda (d)
	  (#:display:assert 'bitepilogue d)
	  (when (#:display:prologuep d)
		(send 'bitepilogue d)
		(:do-close d)))
	displays))


(:define-default-method bitepilogue)


;;;
;;; Close the display and remoe it from the display list.
;;; If it was the current display, the current display is set to ()

(defun :do-close (d)
  (#:display:device d ())
  (#:display:prologuep d ())
  (#:display:eventmode d ())
  (#:display:xmax d ())
  (#:display:ymax d ())
  (#:display:keyboard-focus-window d ())
  (#:display:window d ())
  (#:display:graph-env d ())
  (#:display:root-window d ())
  (#:display:main-graph-env d ())
  (#:display:windows d ())
  (#:display:bitmaps d ())
  (#:display:menus d ())
  (#:display:colors d ())
  (#:display:font-names d ())
  (#:display:pattern-bitmaps d ())
  (#:display:cursor-bitmaps d ())
  (#:display:extend d ())
  (setq #:display:all-displays (delq d #:display:all-displays))
  (when (eq d (:internal-current-display))
	(current-display ())))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;
;;; (:define-n XXX ...) define the functions:
;;;  - (XXX &nobind)
;;;  - (#:display:func &nobind)
;;;
;;; Ex : (#:display:define-n bitmap-refresh) generates:
;;; (defun bitmap-refresh &nobind
;;;   (let ((display (if (eq (arg) 1)
;;;                      (arg 0)
;;;                    (progn #:display:current-display))))
;;;     (#:display:assert 'bitmap-refresh display)
;;;     (send 'bitmap-refresh display)))
;;; (defun #:display:bitmap-refresh &nobind
;;;   (error 'bitmap-refresh '#:display:not-yet-inplemented (arg 0)))

(#:display:define-n bitmap-refresh)
(#:display:define-n bitmap-flush)
(#:display:define-n bitmap-sync)
(#:display:define-n standard-roman-font)
(#:display:define-n standard-bold-font)
(#:display:define-n large-roman-font)
(#:display:define-n small-roman-font)
(#:display:define-n standard-foreground-pattern)
(#:display:define-n standard-background-pattern)
(#:display:define-n standard-medium-gray-pattern)
(#:display:define-n standard-light-gray-pattern)
(#:display:define-n standard-dark-gray-pattern)
(#:display:define-n standard-lelisp-cursor)
(#:display:define-n standard-gc-cursor)
(#:display:define-n standard-busy-cursor)


(defun bitxmax &nobind
  (let ((display (if (eq (arg) 1)
		     (arg 0)
		     (#:display:internal-current-display))))
    (#:display:assert 'bitxmax display)
    (#:display:xmax display)))


(defun bitymax &nobind
  (let ((display (if (eq (arg) 1)
		     (arg 0)
		     (#:display:internal-current-display))))
    (#:display:assert 'bitymax display)
    (#:display:ymax display)))


(defun root-window &nobind
  (let ((display (if (eq (arg) 1)
		     (arg 0)
		     (#:display:internal-current-display))))
    (#:display:assert 'root-window display)
    (#:display:root-window display)))


(defun standard-foreground ()
  (let ((display (:internal-current-display)))
    (#:display:assert 'standard-foreground display)
    (#:display:foreground display)))


(defun standard-background ()
  (let ((display (:internal-current-display)))
    (#:display:assert 'standard-background display)
    (#:display:background display)))




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;                                 WINDOW                                ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;



(defvar #:graph-env:current-graph-env
  (when (boundp '#:graph-env:current-graph-env)
	#:graph-env:current-graph-env))

(defvar #:graph-env:main-graph-env
  (when (boundp '#:graph-env:main-graph-env)
	#:graph-env:main-graph-env))

(defvar #:window:prologuep
  (when (boundp '#:window:prologuep)
	#:window:prologuep))




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;                          INHERITED METHODS
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defun #:display:bitmap-save (display)
    (send 'bitepilogue display))


(defun #:display:bitmap-restore (display)
    (send 'bitprologue display))


;;;
;;; Now prints extend too.

(defun #:display:prin (d)
  (princn #/#)
  (princn #/<)
  (prin (#:display:package d))
  (princn #\sp)
  (prin (#:display:name d))
  (princn #\sp)
  (prin (#:display:device d))
  (princn #\sp)
  (prin (#:display:extend d))
  (princn #/>))


;;;
;;; Default methods:

(defun #:display:current-display (display)
  (setq #:bitmap:name (#:display:name display))
  (setq #:sys-package:bitmap (#:display:package display))
  (set (getsymb #:sys-package:bitmap 'xmax) (#:display:xmax display))
  (set (getsymb #:sys-package:bitmap 'ymax) (#:display:ymax display))
  (setq #:window:prologuep (#:display:prologuep display))
  (setq #:window:all-windows (#:display:windows display))
  (setq #:window:current-window (#:display:window display))
  (setq #:graph-env:main-graph-env (#:display:main-graph-env display))
  (setq #:graph-env:current-graph-env (#:display:graph-env display))
  (setq #:window:current-keyboard-focus-window
	(#:display:keyboard-focus-window display)))


(#:display:defun display-store-selection ((display display) (buffer string))
  ;;; Stores the selection represented by the string BUFFER
  ;;; into the global buffer associated to the display
  ;;; This uses CUT and PASTE offered by the Selection Mechanism of X window
  ;;; (ClipBoard property) and so shares this selection with other X11 clients
  ;;; In the other case this stores the selection in the field
  ;;; current-selection of the structure DISPLAY
  (send 'store-selection display buffer))



;;; Returns current selection or ()

(#:display:defun display-get-selection ((display display))
  ;;; Returns the Current Selection Buffer (a string)
  ;;; within X, it is a selection shared by all X clients 
  (send 'get-selection display))


(defun #:display:store-selection (display buffer)
  (#:display:current-selection display buffer))


(defun #:display:get-selection (display)
  (#:display:current-selection display))


(#:display:defun display-depth ((display display))
  ;;; Returns the Depth of the display DISPLAY
  ;;; if the return depth is greater than 1 this is a color display
  (send 'display-depth display))

(:define-default-method display-depth)


(#:display:defun display-synchronize ((display display) . flag)
 ;;; If FLAG is set TRUE then the display represented by
 ;;; DISPLAY will be synchrone
 ;;; other way display will be asynchrone if this mode is supported
 ;;; like in X11
    (if flag
	(send 'synchronize display (car flag))
      (send 'synchronize display)))

(:define-default-method synchronize)


(#:display:defun default-window-type ((display display) . type)
  (if type
      (send 'default-window-type display (car type))
    (send 'default-window-type display)))

(defun #:display:default-window-type &nobind
  'transparent)
