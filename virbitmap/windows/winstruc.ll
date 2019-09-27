;;;; .EnTete	"Le-Lisp version 15.2x" " " "winstruct.ll"
;;;; .Date	"1997/09/26"
;;;; .EnPied	"winstruct.ll"
;;;; .Version	"1.00"
;;;; .Auteur 	"ELIGIS, C. Jullien"
;;;; .Annexe I	""

;;; Ve'rification de la version.

(eval-when (eval)
	   (unless (getdef '#:graph-env:font-y)
		   (libload "virstruct")))

(defvar #:sys-package:colon '#:display:windows)

;;;;;;;;;;;;;;;;;;;;;;;;;;;; windows structures ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(eval-when (load eval compile)
	   (defstruct #:display:windows 
                      drawing-flag
                      function-keys
                      line-style-vector
                      pattern-vector
                      cursor-vector
                      font-vector
                      mode-vector
                      cursors-alist
                      args-vector        
                      default-window-type
                      depth
                      reread
                      event-responses
                      events-list    
                      top-events-list
                      opaque-events-list
                      transparent-events-list         
                      drag-event-p
                      move-event-p
                      functionkey-event-p
                      ascii-event-p
                      unmap-window-p
                      map-window-p
                      client-message-p          
                      visibility-change-p       
                      reparent-notify-p         
                      grab-window
                      synchrone
                      (top-window-border 2)
                      all-font-names
                      transient-window-p
             ))

(eval-when (eval compile load)
	   (deftclass winwindow
                      windows-window    ;; (pointer to windows window : window)
                      windows-graph-env ;; (pointer to graphic context)
))

;;; opaque window (general case)
(eval-when (load eval compile)
	   (deftclass {winwindow}:opaque-window
	     ))

;;; special top window
(eval-when (load eval compile)
	   (deftclass {opaque-window}:top-window
	     ))

;;; special input only window
(eval-when (load eval compile)
	   (deftclass {winwindow}:transparent-window
                      visible           ; t or ()
                      view-rect         ; the portion of window to display
                      offset-x          ; offset x to the opaque window father
                      offset-y          ; offset y to the opaque window father
                      top-opaque-father ; The first ancestor of the window which
                      ;;; is opaque
	     ))
(eval-when (load eval compile)
	   (defstruct #:windows:bitmap
                      window
                      winbitmap))

(eval-when (load eval compile)
	   (defstruct #:windows:menu
                      invertedx
                      invertedy
                      window))


(eval-when (load eval compile)
	   (defstruct #:image:rectangle:window:menu-window))


(eval-when (load eval compile)
	   
	   (dmd :display-address (dpy . val)
		(if val
                   `(#:display:extend ,dpy ,. val)
                   `(#:display:extend ,dpy)))
	   
	   (dmd :vector-args (dpy . val)
		(if val
		   `(#:display:windows:args-vector ,dpy ,. val)
		   `(#:display:windows:args-vector ,dpy)))

	   (dmd :window-address (win . val)
		(if val
		   `({winwindow}:windows-window (#:window:extend ,win) ,. val)
		   `({winwindow}:windows-window (#:window:extend ,win))))

	   (dmd :window-graph-env (win . val)
		(if val
		   `({winwindow}:windows-graph-env (#:window:extend ,win) ,. val)
		   `({winwindow}:windows-graph-env (#:window:extend ,win))))

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
		   `({winwindow}:windows-graph-env (#:graph-env:extend ,ge) ,. val)
		   `({winwindow}:windows-graph-env (#:graph-env:extend ,ge))))
           
) ; eval-when


(eval-when (load eval compile)
	   (dmd :windows-display (dpy . val)
		(if val
		   `(#:display:extend ,dpy ,. val)
		   `(#:display:extend ,dpy)))

       	   (dmd :windows-window (win . val)
		(if val
		   `({winwindow}:windows-window (#:window:extend ,win) ,. val)
		   `({winwindow}:windows-window (#:window:extend ,win))))

	   (dmd :windows-graph-env (win . val)
		(if val
		   `({winwindow}:windows-graph-env (#:window:extend ,win) ,. val)
		   `({winwindow}:windows-graph-env (#:window:extend ,win))))
           
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
	   
	   (dmd :wincolor (c . val)
		(if val
		   `(#:color:extend ,c ,. val)
		   `(#:color:extend ,c)))
	   
	   (dmd :winbitmap (bitmap . val)
		(if val
		   `(#:windows:bitmap:winbitmap (#:bitmap:extend ,bitmap) ,. val)
		   `(#:windows:bitmap:winbitmap (#:bitmap:extend ,bitmap))))
	   
	   (dmd :window-bitmap (bitmap . val)
		(if val
		   `(#:windows:bitmap:window (#:bitmap:extend ,bitmap) ,. val)
		   `(#:windows:bitmap:window (#:bitmap:extend ,bitmap))))

	   (dmd :menu-window (menu . val)
		(if val
		   `(#:windows:menu:window (#:menu:extend ,menu) ,. val)
		   `(#:windows:menu:window (#:menu:extend ,menu))))
	   
	   (dmd :invertedx (menu . val)
		(if val
		   `(#:windows:menu:invertedx (#:menu:extend ,menu) ,. val)
		   `(#:windows:menu:invertedx (#:menu:extend ,menu))))
	   
	   (dmd :invertedy (menu . val)
		(if val
		   `(#:windows:menu:invertedy (#:menu:extend ,menu) ,. val)
		   `(#:windows:menu:invertedy (#:menu:extend ,menu))))
	   
)

(eval-when (load eval compile)
	   (dmd :top-opaque-window (window)
		`({transparent-window}:top-opaque-father
                              (#:window:extend ,window))))
