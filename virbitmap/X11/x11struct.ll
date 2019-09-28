(eval-when (eval)
	   (unless (getdef '#:graph-env:font-y)
		   (libload "virstruct")))

(setq #:sys-package:colon '#:display:x11)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; les structures ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(eval-when (load eval compile)
	   (defstruct #:display:x11 
	     (file-descriptor 0)
	     events-in-socket
	     reread
	     drawing-flag
	     events-list
	     function-keys
	     line-style-vector
	     pattern-vector
	     cursor-vector
	     font-vector
	     mode-vector
	     version
	     top-events-list           ;;;; 
	     opaque-events-list        ;;;; 
	     transparent-events-list   ;;;;
	     top-events-mask           ;;;;
	     opaque-events-mask        ;;;;
	     transparent-events-mask   ;;;;
	     reverse-bit-flag          ;;;;
	     default-window-type       ;;;;
	     args-vector               ;;;;
	     depth                     ;;;; Number of Planes
	     (display-class "Lelisp")  ;;;; Default Class name (always "Lelisp")
	     (top-window-border 2)     ;;;; Border width of top windows
	     (subwindow-border 1)      ;;;; Border width of  subwindows
	     (graph-env-mode 0)        ;;;; (0 clip Bychildren 1 No)
	     drag-event-p              ;;;; do we allow drag-event
	     move-event-p              ;;;; do we allow move-event
	     functionkey-event-p       ;;;; 
	     ascii-event-p             ;;;; 
	     unmap-window-p            ;;;; 
	     map-window-p              ;;;; 
	     client-message-p          ;;;;
	     visibility-change-p       ;;;;
	     reparent-notify-p         ;;;;
	     event-responses           ;;;; vector of functions by code 
	     (synchrone   ())          ;;;; indicates if display is synchrone
	     cursors-alist             ;;;; alist of (key . nbcursor)
	     ) ;;;;; modified
	   )

(eval-when (load eval compile)
	   (defstruct #:x11:bitmap
	     window
	     xbitmap)
	   )

(eval-when (load eval compile)
	   (defstruct #:x11:menu
	     invertedx
	     invertedy
	     window)
	   )


(eval-when (load eval compile)
	   (defstruct #:image:rectangle:window:menu-window))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;; the new vb (june - 29 - 1990)
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;; general x11 window
(eval-when (eval compile load)
	   (deftclass x11window
	     xwindow          ;;;; (pointer to x11 window : window)
	     xgraph-env       ;;;; (pointer to graphic contextc)
	     events-mask      ;;;; Mask of X11 events (A enlever !!!)
	     ))

;;; opaque window (general case)
(eval-when (load eval compile)
	   (deftclass {x11window}:opaque-window
	     border-pixel          ;;;; (color : border color)
	     window-name           ;;;; (window name to use in ressource)
	     window-class          ;;;; (window class name to use in ressoure)
	     ;;;; Default class is always "Lelisp"
	     
	     ))

;;; special top window
(eval-when (load eval compile)
	   (deftclass {opaque-window}:top-window
	     icon-title            
 ;;;; (string to be displayed when window is iconfied)
 ;;; (string to display when window manager add title bar)
	     ))

;;; special input only window
(eval-when (load eval compile)
	   (deftclass {x11window}:transparent-window
	     visible               ;;;; (t or ())
	     view-rect             ;;;; (the portion of window to display)
	     offset-x          ;;;; (offset x to the opaque window father)
	     offset-y          ;;;; (offset y to the opaque window father)
	     top-opaque-father ;;;; The first ancestor of the window which
	     ;;; is opaque
	     ))



(eval-when (load eval compile)
	   
	   (dmd :display-address (dpy . val)
		(if val
		    `(#:display:extend ,dpy ,. val)
		  `(#:display:extend ,dpy)))
	   
	   (dmd :vector-args (dpy . val)
		(if val
		    `(#:display:x11:args-vector ,dpy ,. val)
		  `(#:display:x11:args-vector ,dpy)))
	   
	   (dmd :window-address (win . val)
		(if val
		    `({x11window}:xwindow (#:window:extend ,win) ,. val)
		  `({x11window}:xwindow (#:window:extend ,win))))
	   
	   (dmd :window-xgraph-env (win . val)
		(if val
		    `({x11window}:xgraph-env (#:window:extend ,win) ,. val)
		  `({x11window}:xgraph-env (#:window:extend ,win))))
	   
	   (dmd :graph-env-view-rect (ge . val)
		(if val
		    `({transparent-window}:view-rect (#:graph-env:extend ,ge) ,. val)
		  `({transparent-window}:view-rect (#:graph-env:extend ,ge))))
	   
	   
	   
	   (dmd :graph-env-font-y (ge . val)
		(if val
		    `(#:graph-env:font-y ,ge ,. val)
		  `(#:graph-env:font-y ,ge)))
	   
	   (dmd :graph-env-font-h (ge . val)
		(if val
		    `(#:graph-env:font-h ,ge ,. val)
		  `(#:graph-env:font-h ,ge)))
	   
	   (dmd :window-offset-x (win . val)
		(if val
		    `({transparent-window}:offset-x (#:window:extend ,win) ,. val)
		  `({transparent-window}:offset-x (#:window:extend ,win))))
	   
	   (dmd :window-offset-y (win . val)
		(if val
		    `({transparent-window}:offset-y (#:window:extend ,win) ,. val)
		  `({transparent-window}:offset-y (#:window:extend ,win))))
	   
	   (dmd :window-visible (win . val)
		(if val
		    `({transparent-window}:visible (#:window:extend ,win) ,. val)
		  `({transparent-window}:visible (#:window:extend ,win))))
	   
	   
	   (dmd :graph-env-address (ge . val)
		(if val
		    `({x11window}:xgraph-env (#:graph-env:extend ,ge) ,. val)
		  `({x11window}:xgraph-env (#:graph-env:extend ,ge))))

) ; eval-when	   
	   
	   
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;; macros d'ecriture ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(eval-when (load eval compile)
	   (dmd :xdisplay (dpy . val)
		(if val
		    `(#:display:extend ,dpy ,. val)
		  `(#:display:extend ,dpy)))
	   
	   (dmd :xwindow (win . val)
		(if val
		    `({x11window}:xwindow (#:window:extend ,win) ,. val)
		  `({x11window}:xwindow (#:window:extend ,win))))
	   
	   (dmd :xgraph-env (win . val)
		(if val
		    `({x11window}:xgraph-env (#:window:extend ,win) ,. val)
		  `({x11window}:xgraph-env (#:window:extend ,win))))
	   
	   
	   (dmd :view-rect (ge . val)
		(if val
		    `({transparent-window}:view-rect (#:graph-env:extend ,ge) ,. val)
		  `({transparent-window}:view-rect (#:graph-env:extend ,ge))))
	   
	   (dmd :offset-x (win . val)
		(if val
		    `({transparent-window}:offset-x (#:window:extend ,win) ,. val)
		  `({transparent-window}:offset-x (#:window:extend ,win))))
	   
	   (dmd :offset-y (win . val)
		(if val
		    `({transparent-window}:offset-y (#:window:extend ,win) ,. val)
		  `({transparent-window}:offset-y (#:window:extend ,win))))
	   
	   (dmd :visible (win . val)
		(if val
		    `({transparent-window}:visible (#:window:extend ,win) ,. val)
		  `({transparent-window}:visible (#:window:extend ,win))))
	   
	   
	   (dmd :xcolor (c . val)
		(if val
		    `(#:color:extend ,c ,. val)
		  `(#:color:extend ,c)))
	   
	   (dmd :xbitmap (bitmap . val)
		(if val
		    `(#:x11:bitmap:xbitmap (#:bitmap:extend ,bitmap) ,. val)
		  `(#:x11:bitmap:xbitmap (#:bitmap:extend ,bitmap))))
	   
	   (dmd :window-bitmap (bitmap . val)
		(if val
		    `(#:x11:bitmap:window (#:bitmap:extend ,bitmap) ,. val)
		  `(#:x11:bitmap:window (#:bitmap:extend ,bitmap))))
	   
	   (dmd :menu-window (menu . val)
		(if val
		    `(#:x11:menu:window (#:menu:extend ,menu) ,. val)
		  `(#:x11:menu:window (#:menu:extend ,menu))))
	   
	   (dmd :invertedx (menu . val)
		(if val
		    `(#:x11:menu:invertedx (#:menu:extend ,menu) ,. val)
		  `(#:x11:menu:invertedx (#:menu:extend ,menu))))
	   
	   (dmd :invertedy (menu . val)
		(if val
		    `(#:x11:menu:invertedy (#:menu:extend ,menu) ,. val)
		  `(#:x11:menu:invertedy (#:menu:extend ,menu))))
	   
	   
;;; To be changed in Version 16
	   
	   (dmd :notaddressp (address)
		`(eq 0 ,address)
		)) ; du eval-when


(eval-when (load eval compile)
	   (dmd :top-opaque-window (window)
		`({transparent-window}:top-opaque-father
		  (#:window:extend ,window))))
