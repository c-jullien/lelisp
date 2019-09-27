;;;
;;; TTYWINDOW:  a VIRTTY based on the Virtual Bitmap.
;;;
;;; $Source: /usr/cvs/lelisp/llib/ttywindow.ll,v $
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
        (error 'load 'erricf 'ttywindow))

(defvar #:sys-package:colon 'window)

(defvar #:tty:window:tyshowcursor
  (if (boundp '#:tty:window:tyshowcursor)
      #:tty:window:tyshowcursor
      t))

(defstruct #:image:rectangle:window:tty
  (cx 0)                      ; x cursor position (pixel)
  (cy 0)                      ; y cursor position (pixel)
  (lmargin)                   ; old left margin
  (rmargin)                   ; old right margin
  (tyshowcursor t)            ; to see/hide the cursor
  (tty '#:tty:window)         ; VIRTTY type
  (itsoft)                    ; the itsofts
  )

(defun #:image:rectangle:window:tty:create (to le wi he ti hi vi)
  (let ((window (#:image:rectangle:window:tty:make)))
    ;; Create a tty window 
    (#:window:left window le)
    (#:window:top window to)
    (#:window:width window wi)
    (#:window:height window he)
    (#:window:title window (if (eqstring "" ti) "Le-Lisp" ti))
    (#:window:hilited window hi)
    (#:window:visible window vi)
    (make-window window)
    (#:image:rectangle:window:tty:cx window (x-base-space))
    (#:image:rectangle:window:tty:cy window (font-ascent))
    (#:image:rectangle:window:tty:lmargin window 0)
    (#:image:rectangle:window:tty:rmargin window
					  (quo (:width window) (width-space)))
    (#:image:rectangle:window:tty:itsoft 
     window (if (memq '#.#:sys-package:colon #:sys-package:itsoft)
		#:sys-package:itsoft
	      (cons '#.#:sys-package:colon #:sys-package:itsoft)))
    window))



;;; CURRENT-WINDOW with a window of type #:WINDOW:TTY, selects
;;; a virtty named #:TTY:WINDOW and add the #:WINDOW:TTY to
;;; the itsoft package.

;;; Margins if the () channel and the size of the screen are set
;;; at the window selection.

(defun #:image:rectangle:window:tty:current-window (win)
  (:flip-tty win)
  (:adjust win)
  (send-super '#:image:rectangle:window:tty 'current-window win))

(defun #:image:rectangle:window:tty:uncurrent-window (win)
  (itsoft 'flush ())
  (tyflush)
  (when (eq (outchan) ())
	(#:image:rectangle:window:tty:lmargin win (lmargin))
	(#:image:rectangle:window:tty:rmargin win (rmargin)))
  (:flip-tty win)
  (send-super '#:image:rectangle:window:tty 'uncurrent-window win))

(defun #:image:rectangle:window:tty:modify-window (win x y w h ti hi vi)
  (send-super '#:image:rectangle:window:tty 'modify-window
	      win x y w h ti hi vi)
  (when (and (eq win (current-window)) (or w h))
	(:adjust win)))
    
;;; 
;;; Set the new virtty
;;;

(defun :flip-tty (win)
  (let ((tty #:sys-package:tty)
	(itsoft #:sys-package:itsoft)
	(tyshowcursor (tyshowcursor)))
    (setq #:sys-package:tty (#:image:rectangle:window:tty:tty win))
    (setq #:sys-package:itsoft (#:image:rectangle:window:tty:itsoft win))
    (tyshowcursor (#:image:rectangle:window:tty:tyshowcursor win))
    (#:image:rectangle:window:tty:tty win tty)
    (#:image:rectangle:window:tty:itsoft win itsoft)
    (#:image:rectangle:window:tty:tyshowcursor win tyshowcursor)
    ))

;;;
;;; Adjust the margins and the size of the screen
;;;

(defun :adjust (win)
  (setq #:tty:window:xmax (sub1 (quo (:width win) (width-space)))
	#:tty:window:ymax (sub1 (quo (:height win) (font-height))))
  (setq #:tty:xmax #:tty:window:xmax  ; compatibilite' vy5
	#:tty:ymax #:tty:window:ymax)
  (when (eq (outchan) ())
	(rmargin (#:image:rectangle:window:tty:rmargin win))
	(lmargin (#:image:rectangle:window:tty:lmargin win)))
)


;;;
;;; Define the new VIRTTY
;;;

(defun #:tty:window:tycn (cn)
  (let ((s "x"))
    (sset s 0 cn)
    (#:tty:window:tystring s 1)))    
    
(defun #:tty:window:tystring (s l)
  (draw-substring (#:image:rectangle:window:tty:cx (current-window))
		  (#:image:rectangle:window:tty:cy (current-window))
		  s 0 l)
  (#:image:rectangle:window:tty:cx (current-window)
	      (min (:width (current-window))
		   (add (#:image:rectangle:window:tty:cx (current-window))
			(x-inc-substring s 0 l)))))
    
(defvar #:tty:window:page-mode t)

(defun #:tty:window:tynewline ()
  (when #:tty:window:page-mode 
	(tycleol))
  (#:image:rectangle:window:tty:cx (current-window) 0)
  (#:image:rectangle:window:tty:cy (current-window) 
	    (add (#:image:rectangle:window:tty:cy (current-window)) 
		 (font-height)))
  (when (gt (sub (add (#:image:rectangle:window:tty:cy (current-window)) 
		      (font-height))
		 (font-ascent))
	    (:height (current-window)))
	(if #:tty:window:page-mode
	    (tycls)
	    (let ((scroll-height 
		   (mul
		    (add1 (div (div (#:window:height (current-window)) 3)
			       (font-height)))
		    (font-height))))
	      (with ((current-mode #:mode:set))
		    (bitblit (window-bitmap (current-window))
                             (window-bitmap (current-window))
                             0 0 
                             0 scroll-height
                             (#:window:width (current-window))
                             (sub (#:window:height (current-window))
                                  scroll-height))
		    (#:image:rectangle:window:tty:cy (current-window)
			(sub (#:image:rectangle:window:tty:cy (current-window))
			     scroll-height))
		    (current-mode 0)
		    (bitblit (window-bitmap (current-window))
                             (window-bitmap (current-window))
                             0 (sub (#:image:rectangle:window:tty:cy 
				     (current-window)) 
                                    (font-ascent))
                             0 0
                             (#:window:width (current-window))
                             (#:window:height (current-window))))))))
    
(defun #:tty:window:tybs (cn)
  (let ((s "x"))
    (sset s 0 cn)
    (#:image:rectangle:window:tty:cx (current-window)
	   (max 0 (sub (#:image:rectangle:window:tty:cx (current-window))
		       (x-inc-substring s 0 1))))))
                               

(defun #:tty:window:tycr ()
  (#:image:rectangle:window:tty:cx (current-window) 0))

;;;
;;; Clear the screen
;;;

;;; The portable version (without bitblit) uses strings of spaces.

(defvar :blankscreen (makestring 256 #\sp))

(defun #:tty:window:tycleol ()
  (draw-substring (#:image:rectangle:window:tty:cx (current-window))
		  (#:image:rectangle:window:tty:cy (current-window))
		  :blankscreen 
		  0
		  (quo (sub (:width (current-window))
			    (#:image:rectangle:window:tty:cx (current-window)))
		       (width-space))))

(defun #:tty:window:tycls ()
  (tycursor 0 0)
  (clear-graph-env))

;;;
;;; Attribute management
;;;

(defvar #:tty:window:tyattrib ())

(defun #:tty:window:tyattrib (a)
  (itsoft 'flush ())
  (current-font (if a 1 0)))

;;; Read a character (manage the cursor)

(defvar :event (#:event:make))

(defun #:tty:window:tyi ()
  (tyflush)
  (when (tyshowcursor)
	(draw-cursor (#:image:rectangle:window:tty:cx (current-window))
		     (#:image:rectangle:window:tty:cy (current-window)) t))
  (read-event :event)
  (until (eq (#:event:code :event) 'ascii-event)
	 (read-event :event))
  (when (tyshowcursor)
	(draw-cursor
	 (#:image:rectangle:window:tty:cx (current-window))
	 (#:image:rectangle:window:tty:cy (current-window))
	 ()))
  (#:event:detail :event))

(defvar #:event:code)

(defun #:tty:window:tys ()
  (when (eventp)
	(read-event :event)
	(if (neq (#:event:code :event) 'ascii-event)
	    (#:tty:window:tys)
	    (#:event:detail :event))))

;;;
;;; Use only the fixed-size fonts.
;;;

;;;
;;; Screen size (updated  during the window selection)
;;;

(defvar #:tty:window:xmax 79)
(defvar #:tty:window:ymax 23)

(defun #:tty:window:tycursor (x y)
  (tyflush)
  (#:image:rectangle:window:tty:cx (current-window)
	    (add (x-base-space) (mul (width-space) x)))
  (#:image:rectangle:window:tty:cy (current-window) 
	    (add (font-ascent)  (mul (font-height) y))))

(defun #:tty:window:tyback (cn)
  (tybs cn)
  (draw-cn (#:image:rectangle:window:tty:cx (current-window))
	   (#:image:rectangle:window:tty:cy (current-window))
	   #\sp)
  )
    

(defun #:tty:window:tydelcn (cn))
(defun #:tty:window:tyinscn (cn))

