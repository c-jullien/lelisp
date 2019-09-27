;;;
;;; VIRWINDOW:  Virtual Bitmap Manager
;;;
;;; $Source: /usr/cvs/lelisp/llib/virwindow.ll,v $
;;; $Date: 2016/05/21 10:36:07 $
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

(setq #:sys-package:colon 'window)

(eval-when (load eval compile) ; used in virinit too
	   (unless (boundp '#:window:all-windows)
		   (defvar #:window:all-windows))
	   (defvar #:window:current-window)
	   (defvar #:window:current-keyboard-focus-window)
	   )

(unless (boundp '#:graph-env:current-graph-env)
	(defvar #:graph-env:current-graph-env))

(defvar #:check-window:x)
(defvar #:check-window:y)



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(#:display:defun create-window ((type symbol) (le fix) (to fix) (wi fix)
				(he fix) ti (hi fix) (vi fix))
  (setq type (compat-type type))
  (let ((create (getfn1 type 'create)))
    (unless create
	    (error 'create-window '#:display:errnotawindowtype type))
    (funcall create le to wi he ti hi vi)))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(#:display:defun create-subwindow ((type symbol) (le fix) (to fix) (wi fix)
				   (he fix) ti hi vi fa)
  (when fa (#:window:assert 'create-subwindow fa))
  (setq type (compat-type type))
  (let ((create (getfn1 type 'create)))
    (unless create
	    (error 'create-window '#:display:errnotawindowtype type))
    (funcall create le to wi he ti hi vi fa)))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(#:display:defun make-window ((window window))
  (#:display:assert-current 'make-window (#:display:internal-current-display))
  (let ((father (#:window:father window)))
    (when father
	  ;;(#:window:cursor window (#:window:cursor father))
	  (#:window:display window (#:window:display father))
	  (#:window:subwindows father
			       (cons window (#:window:subwindows father)))))
  (unless (#:window:display window)
	  (#:window:display window (#:display:internal-current-display)))
  (unless (#:window:cursor window)
	  (#:window:cursor window 0))
  (#:window:subwindows window ())
  (with ((current-display (#:window:display window)))
	(setq #:window:all-windows
	      (#:display:windows (#:window:display window)
				 (nconc1 (#:display:windows
					  (#:window:display window))
					 window)))
	(send 'make-window window)
	(when (#:window:graph-env window)
	      (unless (#:graph-env:display (#:window:graph-env window))
		      (#:graph-env:display (#:window:graph-env window)
					   (#:window:display window))))
	window))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defun current-window &nobind
  (let ((n (arg))
	(window (arg 0))
	(display (#:display:internal-current-display))
	)
    (selectq
     n
     (0
      (when display (#:display:window display)))
     (1
      (when window
	    (:assert 'current-window window)
	    (setq display (#:window:display window)))
      (cond ((null display)
	     ())
	    ((eq window (#:display:window display))
	     (current-display display)
	     window) ;; If current window is unchanged, does nothing special.
	    (t
	     ;; The current display is set according to the window
	     ;; Using "with" restores the old display AND the old window ...
	     (current-display display)
	     (when (#:display:window display)
		   (send 'uncurrent-window (#:display:window display)))
	     (setq #:window:current-window
		   (#:display:window display window))
	     (setq #:graph-env:current-graph-env
		   (#:display:graph-env display
					(if window
					    (#:window:graph-env window)
					  (#:display:main-graph-env
					   display))))
	     (when (#:display:window display)
		   (send 'current-window (#:display:window display)))
	     window)))
     (t
      (error 'current-window 'errwna n)))))





;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(#:display:defun modify-window ((window window) le to wi he ti hi vi)
  (let ((d (#:window:display window)))
    (#:display:assert-current 'modify-window d)
    (when (and (neq (#:display:root-window d) window)
	       (or le to wi he ti hi vi))
	  (when (or wi he)
		(let* ((ge (#:window:graph-env window))
		       (b (#:graph-env:bitmap ge)))
		  (#:graph-env:clip-x ge 0)
		  (#:graph-env:clip-y ge 0)
		  (#:graph-env:clip-w ge (or wi (#:window:width window)))
		  (#:graph-env:clip-h ge (or he (#:window:height window)))
		  (when b
			(#:bitmap:w b (#:graph-env:clip-w ge))
			(#:bitmap:h b (#:graph-env:clip-h ge)))))
	  (with ((current-display d))
		(send 'modify-window window le to wi he ti hi vi))
	  window)))


(#:display:defun update-window ((window window) le to wi he)
  (let ((d (#:window:display window)))
    (#:display:assert-current 'update-window d)
    (when (and (neq (#:display:root-window d) window)
	       (or le to wi he))
	  (when (or wi he)
		(let* ((ge (#:window:graph-env window))
		       (b (#:graph-env:bitmap ge)))
		  (#:graph-env:clip-x ge 0)
		  (#:graph-env:clip-y ge 0)
		  (#:graph-env:clip-w ge (or wi (#:window:width window)))
		  (#:graph-env:clip-h ge (or he (#:window:height window)))
		  (when b
			(#:bitmap:w b (#:graph-env:clip-w ge))
			(#:bitmap:h b (#:graph-env:clip-h ge)))))
	  (with ((current-display d))
		(send 'update-window window le to wi he))
	  window)))
  


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(#:display:defun kill-window ((window window))
  (let ((d (#:window:display window)))
    (#:display:assert-current 'kill-window d)
    (when (neq (#:display:root-window d) window)
	  (mapc 'kill-window (#:window:subwindows window))
	  (when (#:window:father window)
		(#:window:subwindows 
		 (#:window:father window)
		 (delq window (#:window:subwindows (#:window:father window)))))
	  (with ((current-display d))
		(when (eq window (#:display:window d))
		      (current-window ()))
		(when (eq window (#:display:keyboard-focus-window d))
		      (current-keyboard-focus-window ()))
		(setq #:window:all-windows
		      (#:display:windows d (delq window
						 (#:display:windows d))))
		(send 'kill-window window)
		(#:window:display window ())
		(#:window:extend window ())
		(when (#:window:graph-env window)
		      (#:graph-env:display (#:window:graph-env window) ())
		      (#:graph-env:extend  (#:window:graph-env window) ())
		      (#:graph-env:bitmap (#:window:graph-env window) ()))))))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(#:display:defun pop-window ((window window))
  (let ((d (#:window:display window))
	fa
	)
    (#:display:assert-current 'pop-window d)
    (when (neq (#:display:root-window d) window)
	  (with ((current-display d))
		(setq #:window:all-windows
		      (#:display:windows d
					 (nconc1
					  (delq window (#:display:windows d))
					  window)))
		(when (#:window:father window)
		      (setq fa (#:window:father window))
		      (#:window:subwindows 
		       fa
		       (cons window (delq window (#:window:subwindows fa)))))
		(send 'pop-window window)))))


(#:display:defun move-behind-window ((window1 window) (window2 window))
  (:assert-same-display 'move-behind-window window1 window2)
  (when (and (neq window1 window2)
	     (neq window1 (#:display:root-window
			   (#:display:internal-current-display)))
	     (neq window2 (#:display:root-window
			   (#:display:internal-current-display))))
	(let (all2)
	  (with ((current-display (#:window:display window1)))
		(#:display:windows (#:window:display window1)
				   (delq window1
					 (nreverse (#:display:windows
						    (#:window:display window1)
						    ))))
		(setq all2 (memq window2 (#:display:windows
					  (#:window:display window2))))
		(rplacd all2 (cons window1 (cdr all2)))
		(setq #:window:all-windows
		      (#:display:windows (#:window:display window2)
					 (nreverse (#:display:windows
						    (#:window:display
						     window2)))))
		(when (and (#:window:father window1)
			   (eq (#:window:father window1)
			       (#:window:father window2)))
		      (let ((fa (#:window:father window1)))
			(#:window:subwindows 
			 fa
			 (delq window2 
			       (nreverse (#:window:subwindows fa))))
			(setq all2 (memq window1 (#:window:subwindows fa)))
			(rplacd all2 (cons window2 (cdr all2)))
			(#:window:subwindows 
			 fa
			 (nreverse (#:window:subwindows fa)))))
		(send 'move-behind-window window1 window2)))))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun current-keyboard-focus-window &nobind
  (if (eq 0 (arg))
      (#:display:keyboard-focus-window (#:display:internal-current-display))
    (let ((window (arg 0)))
      (if window
	  (:assert 'current-keyboard-focus-window window))
      (let ((display (if window (#:window:display window) 
		       (#:display:internal-current-display))))
	(when  display
	       (with ((current-display display))
		     (when (#:display:keyboard-focus-window display)
			   (send 'uncurrent-keyboard-focus-window
				 (#:display:keyboard-focus-window display)))
		     (setq #:window:current-keyboard-focus-window
			   (#:display:keyboard-focus-window display window))
		     (when window                 
			   (send 'current-keyboard-focus-window window))
		     window))))))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;
;;; Function which-window is in virevent.ll and calls find-window method too.

(#:display:defun find-window ((x fix) (y fix))
  (#:display:assert-current 'find-window (#:display:internal-current-display))
  (send 'find-window (#:display:internal-current-display) x y))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(#:display:defun map-window ((window window) :x :y :lx :ly)
  (#:display:assert-current 'map-window (#:window:display window))
  (send 'map-window window :x :y :lx :ly)
  ())





;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;                         TOOLS                                          ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defun windowp (window)
  (and (typep window '#:image:rectangle:window)
       (#:window:extend window)
       (#:window:display window)
       window))
       ;;; (memq window (#:display:windows (#:window:display window)))


(defun subwindowp (window1 window2)
  (and (windowp window1)
       (windowp window2)
       (subwindowp1 window1 window2)))


(defun subwindowp1 (window1 window2)
  (ifn window1 ()
       (if (eq window1 window2)
	   window1
	   (subwindowp1 (#:window:father window1) window2))))


(#:display:defun check-window-position ((window window))
  (#:display:assert-current 'check-window-position (#:window:display window))
  (map-window window 0 0 '#:check-window:x '#:check-window:y)
  (setq #:check-window:x (sub 0 #:check-window:x))
  (setq #:check-window:y (sub 0 #:check-window:y))
  (unless (and (eq (#:window:left window) #:check-window:x)
	       (eq (#:window:top  window) #:check-window:y))
	  (update-window window #:check-window:x #:check-window:y () ())))


(dmd define-window-property-accessor (propertyname)
     `(defun ,(symbol '#:image:rectangle:window propertyname) &nobind
	(if (eq (arg) 1)
	    (cassq ',propertyname
		   (#:image:rectangle:window:properties (arg 0)))
	    (#:image:rectangle:window:set-property
	     (arg 0)
	     ',propertyname (arg 1)))))


(defun #:image:rectangle:window:set-property (window name val)
  (let ((pair (assq name (#:image:rectangle:window:properties window))))
    (if pair
	(rplacd pair val)
        (#:image:rectangle:window:properties
	   window
	   (acons name val (#:image:rectangle:window:properties window))))))


(defun compat-type (type)
  (selectq type 
	   (window '#:image:rectangle:window)
	   (#:window:tty '#:image:rectangle:window:tty)
	   (t type)))


(defun #:image:rectangle:window:create (le to wi he ti hi vi . fa)
  (let ((window (#:window:make)))
    (#:window:left window le)
    (#:window:top window to)
    (#:window:width window wi)
    (#:window:height window he)
    (#:window:title window (if (eqstring "" ti) "Le-Lisp" ti))
    (#:window:hilited window hi)
    (#:window:visible window vi)
    (#:window:father window (when fa (car fa)))
    (make-window window)))


(defun #:image:rectangle:window:prin (window)
  (princn #/#)
  (princn #/<)
  (prin (type-of window))
  (princn #\sp)
  (prin (#:window:title window))
  (princn #/>))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;                            INDIRECTIONS                                     ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun #:image:rectangle:window:make-window (window)
  (if (#:window:father window)
      (send 'create-subwindow (#:window:display window) window)
      (send 'create-window (#:window:display window) window))
  window)


(defun #:image:rectangle:window:current-window (window)
  (send 'current-window (#:window:display window) window))


(defun #:image:rectangle:window:uncurrent-window (window)
  (send 'uncurrent-window (#:window:display window) window))


(defun #:image:rectangle:window:modify-window (window le to wi he ti hi vi)
  (when (or wi he)
	(let* ((ge (#:window:graph-env window))
	       (b (#:graph-env:bitmap ge)))
	  (#:graph-env:clip-x ge 0)
	  (#:graph-env:clip-y ge 0)
	  (#:graph-env:clip-w ge (or wi (#:window:width window)))
	  (#:graph-env:clip-h ge (or he (#:window:height window)))
	  (when b
		(#:bitmap:w b (#:graph-env:clip-w ge))
		(#:bitmap:h b (#:graph-env:clip-h ge)))))
  (send 'modify-window (#:window:display window) 
	window le to wi he ti hi vi))


(defun #:image:rectangle:window:update-window (window le to wi he)
  (when (or wi he)
	(let* ((ge (#:window:graph-env window))
	       (b (#:graph-env:bitmap ge)))
	  (#:graph-env:clip-x ge 0)
	  (#:graph-env:clip-y ge 0)
	  (#:graph-env:clip-w ge (or wi (#:window:width window)))
	  (#:graph-env:clip-h ge (or he (#:window:height window)))
	  (when b
		(#:bitmap:w b (#:graph-env:clip-w ge))
		(#:bitmap:h b (#:graph-env:clip-h ge)))))
  (send 'update-window (#:window:display window) window le to wi he))


(defun #:image:rectangle:window:kill-window (window)
  (send 'kill-window (#:window:display window) window))


(defun #:image:rectangle:window:pop-window (window)
  (send 'pop-window (#:window:display window) window)) 


(defun #:image:rectangle:window:move-behind-window (window1 window2)
  (send 'move-behind-window (#:window:display window1) window1 window2))


(defun #:image:rectangle:window:current-keyboard-focus-window (window)
  (send 'current-keyboard-focus-window (#:window:display window) window))


(defun #:image:rectangle:window:uncurrent-keyboard-focus-window (window)
  (send 'uncurrent-keyboard-focus-window (#:window:display window) window))


(defun #:image:rectangle:window:map-window (window :x :y :lx :ly)
  (send 'map-window (#:window:display window) window :x :y :lx :ly))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;; News functions
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(#:display:defun move-window ((window window) le to)
  (#:display:assert-current 'move-window (#:window:display window))
  (when (and (neq (#:display:root-window
		   (#:display:internal-current-display)) window)
	     (or le to))
	(send 'move-window window le to))
  window)


(#:display:defun resize-window ((window window) wi he)
  (#:display:assert-current 'resize-window (#:window:display window))
  (when (and (neq (#:display:root-window
		   (#:display:internal-current-display)) window)
	     (or wi he))
	(let* ((ge (#:window:graph-env window))
	       (b (#:graph-env:bitmap ge)))
	  (#:graph-env:clip-x ge 0)
	  (#:graph-env:clip-y ge 0)
	  (#:graph-env:clip-w ge (or wi (#:window:width window)))
	  (#:graph-env:clip-h ge (or he (#:window:height window)))
	  (when b
		(#:bitmap:w b (#:graph-env:clip-w ge))
		(#:bitmap:h b (#:graph-env:clip-h ge)))
	  (send 'resize-window window wi he)))
  window)


(#:display:defun move-resize-window ((window window) le to wi he)
  (#:display:assert-current 'move-resize-window (#:window:display window))
  (when (and (neq (#:display:root-window
		   (#:display:internal-current-display)) window)
	     (or le to wi he ))
	(let* ((ge (#:window:graph-env window))
	       (b (#:graph-env:bitmap ge)))
	  (#:graph-env:clip-x ge 0)
	  (#:graph-env:clip-y ge 0)
	  (#:graph-env:clip-w ge (or wi (#:window:width window)))
	  (#:graph-env:clip-h ge (or he (#:window:height window)))
	  (when b
		(#:bitmap:w b (#:graph-env:clip-w ge))
		(#:bitmap:h b (#:graph-env:clip-h ge)))
	  (send 'move-resize-window window le to wi he)))
  window)


(#:display:defun window-events-list ((window window) . events)
  (#:display:assert-current 'window-events-list (#:window:display window))
  (if events
      (when (neq (#:display:root-window (#:display:internal-current-display))
		 window)
	    (send 'window-events-list window (car events)))
    (#:image:rectangle:window:events-list window)))


(#:display:defun window-title ((window window) . title)
  (#:display:assert-current 'window-title (#:window:display window))
  (if title
      (when (neq (#:display:root-window (#:display:internal-current-display))
		 window)
	    (send 'window-title window (car title)))
    (#:image:rectangle:window:title window)))



;;; To iconify or map a window 

(defun :test-window-state (window state) 
  (if (member state '(iconify map unmap lower raise))
      t
    (error 'window-state '#:display:not-a-valid-argument state)))


(#:display:defun window-state ((window window) . state)
  (if state
      (when (and (:test-window-state window (car state))
		 (neq (#:display:root-window
		       (#:display:internal-current-display))
		      window))
	    (#:display:assert-current 'window-state (#:window:display window))
	    (send 'window-state window (car state)))
    (#:image:rectangle:window:state window)))


(#:display:defun window-background ((window window) . color)
  (if color
      (when (and (neq (#:display:root-window
		       (#:display:internal-current-display))
		      window))
	    (#:display:assert-current 'window-background
				      (#:window:display window))
	    (send 'window-background window (car color)))
    (if (#:window:graph-env window)
	(#:graph-env:background (#:window:graph-env window)))))
   


(#:display:defun window-border ((window window) . border)
  (if border
      (when (neq (#:display:root-window (#:display:internal-current-display))
		 window)
	    (#:display:assert-current 'window-border (#:window:display window))
	    (send 'window-border window (car border)))
    (#:image:rectangle:window:hilited window)))


(#:display:defun window-clear-region ((window window) (x fix) (y fix)
				      (w fix) (h fix))
  (#:display:assert-current 'window-clear-region (#:window:display window))
  (send 'window-clear-region window x y w h)
  window)


(defun #:image:rectangle:window:window-clear-region (window x y w h)
  (let ((display (#:window:display window)))
    (unless (and #:display:dumpdevice #:display:dumpsilent)
            (send 'window-clear-region display window x y w h))))


;;;; Methods that could be redefined


(defun #:image:rectangle:window:move-window (window le to)
  (let ((display (#:window:display window)))
    (with ((current-display display))
	  (send 'move-window display  window le to))))


(defun #:image:rectangle:window:resize-window (window wi he)
  (let ((display (#:window:display window)))
    (with ((current-display display))
	  (send 'resize-window display window wi he))))


(defun #:image:rectangle:window:move-resize-window (window le to wi he)
  (let ((display (#:window:display window)))
    (with ((current-display display))
	  (send 'move-resize-window display window le to wi he))))


(defun #:image:rectangle:window:window-events-list (window events)
  (send 'window-events-list (#:window:display window) window events))


(defun #:image:rectangle:window:window-title (window title)
  (send 'window-title (#:window:display window) window title))


(defun #:image:rectangle:window:window-state (window state)
  (send 'window-state (#:window:display window) window  state))


(defun #:image:rectangle:window:window-background (window color)
  (send 'window-background (#:window:display window) window  color))


(defun #:image:rectangle:window:window-border (window border)
  (send 'window-border (#:window:display window) window  border))


(#:display:defun window-graph-env ((window window))
  (#:display:assert-current 'window-graph-env (#:window:display window))
  (send 'window-graph-env window))


(defun #:image:rectangle:window:window-graph-env (window)
  (#:window:graph-env window))


(#:display:defun window-change-attributes ((window window) (props-set cons)
					   (props-unset cons))
  ;;; Change the graphic-properties of the window Window
  ;;; PROPS-SET is the list of proerties to add
  ;;; exemple '(save-under backing-store ...)
  ;;; PROPS-UNSET is the list to delete
  ;;;
  (#:display:assert-current 'window-change-attributes
			    (#:window:display window))
  (when (neq (#:display:root-window (#:display:internal-current-display))
	     window)
	(send 'window-change-attributes window props-set props-unset)))


(defun #:image:rectangle:window:window-change-attributes 
  (window props-set props-unset)
  (send 'window-change-attributes (#:window:display window)
	window props-set props-unset)
  (#:image:rectangle:window:graphic-properties window props-set))



(defun  #:window:create l
  (apply '#:image:rectangle:window:create l))

(defun  #:window:prin (window)
  (#:image:rectangle:window:prin window))
