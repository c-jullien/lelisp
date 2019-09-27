;;;; Next two eval-whens allow ^Ax11


(eval-when (load eval)
	   (defvar #:sys-package:bitmap
	     '#:display:x11))

(eval-when (load eval)
	   (setq #:display:all-bitmaps
		 (acons '|X11| #:sys-package:bitmap
			#:display:all-bitmaps)))

;;;;

(eval-when (eval)
	   (unless (getdef '#:display:x11:xbitmap)
		   (libload "virbit")
		   (libload #u"X11/x11graph")))

(defvar #:sys-package:colon '#:display:x11)


(defvar #:display:all-bitmaps
  (when (boundp '#:display:all-bitmaps)
	#:display:all-bitmaps))


(defmessage errnoshellvariable
  (french "pas de variable d'environnement")
  (english "unbound shell variable"))

(defmessage errbadx11version
  (french "mauvaise version de x-window")
  (english "bad x-window version"))

(defmessage :bad-display
  (french "connection refuse'e")
  (english "connexion refused"))

(defmessage xioerror
  (french "erreur fatale d'entree/sortie xwindow")
  (english "xwindow io fatal error"))

(unless (boundp ':bit-reverse-vector)
	(defvar :bit-reverse-vector))


(unless (boundp ':file-descriptor-mask) (defvar :file-descriptor-mask 0))

(unless (boundp ':device) (defvar :device))

(unless (boundp ':events-list) 
	(defvar :events-list
	  (list 'down-event 'up-event 'ascii-event 'drag-event
		'enterwindow-event 'leavewindow-event)))

(unless (boundp ':override-redirect) (defvar :override-redirect))

(unless (boundp ':default-application-name) 
	(defvar :default-application-name "lelisp"))

(unless (boundp ':default-application-class) 
	(defvar :default-application-class "Lelisp"))

(unless (boundp ':default-x11r2-fonts)
        (defvar :default-x11r2-fonts 
          '("vtsingle" 
            "vtbold" 
            "6x10"
            "swd-s30")))

(unless (boundp ':default-x11r3-fonts)
        (defvar :default-x11r3-fonts 
          '("-adobe-courier-medium-r-normal--12-120-75-75-m-70-iso8859-1"
            "-adobe-courier-bold-r-normal--12-120-75-75-m-70-iso8859-1"
            "-adobe-courier-medium-r-normal--10-100-75-75-m-60-iso8859-1"
            "-adobe-courier-medium-r-normal--18-180-75-75-m-110-iso8859-1")))


;;;
;;; New : default-gc-cursor which was a pirate (88) is now a watch (150).

(defvar :default-cursors '(68 150 82))

;;;
;;; Setting and checking the current application name and class
;;;
(defun current-application-name &nobind
  (selectq (arg)
	   (0
	    :default-application-name)
	   (1
            (progn
              (unless (eq :default-application-name (arg 0))
                (setq :default-application-name (arg 0)))
              :default-application-name))
           (t
	    (error 'current-application-name 'errwna (arg)))))

(defun current-application-class &nobind
  (selectq (arg)
	   (0
	    :default-application-class)
	   (1
            (progn
              (unless (eq :default-application-class (arg 0))
                (setq :default-application-class (arg 0)))
              :default-application-class))
           (t
            (error 'current-application-class 'errwna (arg)))))

(defun :get-app-name ()
  (x11_setappname :default-application-name))

(defun :get-app-class ()
  (x11_setappclass :default-application-class))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;; references c ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;; see file x11_def.ll



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;; fonctions relatives a` l'affichage ;;;;;;;;;;;;;;;;;;;;;;;;

(unless (boundp ':xmax) (defvar :xmax))
(unless (boundp ':ymax) (defvar :ymax))
(unless (boundp ':fd)   (defvar :fd))
(unless (boundp ':depth)   (defvar :depth))

#|
(defvar :reverse-bit-machines '(vaxvms vaxunix decstation))
|#

;;;
;;; Use of funcall inside this function allows no recompilation the module
;;; on VMS.

(defun :bitprologue (display)
  (let ((:xmax 0)
	(:ymax 0)
	(:fd 0)
	(vms? #:system:vmsp)
	)
    (unless (#:display:prologuep display)
	    (when vms?
		  (let ((#:system:path "lelisp$disk:[virbitmap.x11]"))
		    (libloadfile "x11_def.lo" ())))
	    (unless (#:display:device display)
		    (#:display:device
		     display
		     (if vms?
			 (funcall 'vaxvms_trnlnm "decw$display" "")
		       (or (getenv "DISPLAY") :device))))
	    (unless (#:display:device display)
		    (error ':bitprologue 'errnoshellvariable "DISPLAY"))
	    (:initialise display)
	    (let ((vect-args (makevector 4 0))
		  (dev (catenate (#:display:device display)))
		  (mask (:event-mask display))
		  (bit (if :override-redirect 1 0))
		  )
	      (:display-address
	       display
	       (if vms?
		   (funcall 'x11_bitprologue dev
			    (funcall 'vaxvms_trnlnm "sys$node" "")
			    mask bit vect-args)
		 (funcall 'x11_bitprologue dev mask bit vect-args)))
	      (when (:notaddressp (:display-address display))
		    (error 'bitprologue ':bad-display display))
	      (setq :xmax (vref vect-args 0))
	      (setq :ymax (vref vect-args 1))
	      (setq :fd (vref vect-args 2))
	      (setq :depth (vref vect-args 3)))
	    (:display-class display :default-application-name)
	    (#:display:x11:depth display
				 (x11_depth (:display-address display)))
	    (catcherror t (:init-display display :xmax :ymax :fd))
	    (catcherror t (:init-color display))
	    (catcherror t (:init-cursor display))
	    (catcherror t (:init-font display))
	    (catcherror t (:init-line-style display))
	    (:initialize-event-responses display)
	    ;;; Initialize the vector (code --> response)
	    (#:display:x11:reverse-bit-flag
	     display
	     (if (eq (x11_bitmapbitorder (:display-address display)) 1) t ()))
	    (unless :bit-reverse-vector
		    (setq :bit-reverse-vector
			  #[#%0000 #%1000 #%0100 #%1100
			  #%0010 #%1010 #%0110 #%1110
			  #%0001 #%1001 #%0101 #%1101
			  #%0011 #%1011 #%0111 #%1111]))
	    (catcherror t (:init-pattern display))
	    (:init-window display)
	    (:reread display ())
	    (:vector-args display (makevector 20 0))
	    ;; L'information suivante est garde'e en cas de bitmap-save.
	    (unless (:default-window-type display)
		    (:default-window-type display 'transparent))
	    (if (:synchrone display)
		(#:display:x11:synchronize display t))
	    display)))


;;;
;;; Frees all resources, kills all top windows.
;;; Finally closes connection to the display.

(defun :bitepilogue (display)
  ;; Kills all top windows.
  (mapc (lambda(window)
	  (when (and (null (#:window:father window))
		     (#:window:display window))
		(send 'kill-window window)))
	(#:display:windows display))
  ;; frees all cursors
  (let ((curs-vector (:cursor-vector display))
	(i 0)
	)
    (when curs-vector
	  (while (lt i (vlength curs-vector))
	    (x11_free_cursor (:xdisplay display) (vref curs-vector i))
	    (setq i (add1 i)))))
  (:cursor-vector display ())
  (:cursors-alist display ())

  ;; Frees Colors Openwindows Does'nt Like It
  '(when (gt (#:display:x11:depth display)  1)
	(mapc (lambda(color)
		(x11_kill_color (:xdisplay display) (:xcolor color)))
	      (#:display:colors display)))
  ;;; Frees Bitmaps
  (mapc (lambda(bitmap)
	  (x11_kill_bitmap (:xdisplay display) (:xbitmap bitmap)))
	(#:display:bitmaps display))
  (when (#:display:prologuep display)
	(:font-vector display ()))
;;;;          (:line-style-vector display ())
;;;; No need to free line-style-vector it does'nt have pointer to C ressources
;;;
  
  (:pattern-vector display ())
  (:mode-vector display ())
  (:reread display ())
  (:drawing-flag display ())
  (:function-keys display ())
  (:reread display ())
  (setq :file-descriptor-mask (logxor :file-descriptor-mask 
				      (2** (:file-descriptor display))
				      ))
  (:file-descriptor display 0)
  (:events-in-socket display ())
  (x11_bitepilogue (:xdisplay display)))


(defun :bitmap-save (display)
  (:bitepilogue display))


(defun :bitmap-restore (display)
  (:bitprologue display))


;;;
;;; Raffraichissemement de l'e'cran.
;;; Doit marcher me^me s'il n'y a pas de fene^tre courante.

(defun :bitmap-refresh (display)
  (let ((win (#:display:window display)))
    (x11_bitmap_refresh (:xdisplay display) 
			(vref (:cursor-vector display) 
			      (if win (#:window:cursor win) 0)))))


(defun :bitmap-flush (display)
  (x11_bitmap_flush (:xdisplay display)))


(defun :bitmap-sync (display)
  (x11_bitmap_sync (:xdisplay display)))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; fonctions defauts ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun :standard-roman-font (display) 0)

(defun :standard-bold-font (display) 1)

(defun :small-roman-font (display) 2)

(defun :large-roman-font (display) 3)

(defun :standard-background-pattern (display) 0)

(defun :standard-foreground-pattern (display) 1)

(defun :standard-medium-gray-pattern (display) 2)

(defun :standard-light-gray-pattern (display) 3)

(defun :standard-dark-gray-pattern (display) 4)

(defun :standard-lelisp-cursor (display) 0)

(defun :standard-gc-cursor (display) 1)

(defun :standard-busy-cursor (display) 2)



;;;;;;;;;;;;;;;;;;;;;;;;; fonctions d'initialisation ;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun :initialise (display)
    (:function-keys display
                    '((#$ff08 . backspace)
                      (#$ff09 . tab)
                      (#$ff0a . linefeed)
                      (#$ff0b . clear)
                      (#$ff0d . return)
                      (#$ff13 . pause)
                      (#$ff1b . escape)
                      (#$ffff . delete)
                      (#$ff20 . multi-key)
                      (#$ff21 . kanji)
                      (#$ff50 . home)
                      (#$ff51 . left)
                      (#$ff52 . up)
                      (#$ff53 . right)
                      (#$ff54 . down)
                      (#$ff55 . prior)
                      (#$ff56 . next)
                      (#$ff57 . end)
                      (#$ff58 . begin)
                      (#$ff60 . select)
                      (#$ff61 . print)
                      (#$ff62 . execute)
                      (#$ff63 . insert)
                      (#$ff65 . undo)
                      (#$ff66 . redo)
                      (#$ff67 . menu)
                      (#$ff68 . find)
                      (#$ff69 . cancel)
                      (#$ff6a . help)
                      (#$ff6b . break)
                      (#$ff7e . mode-switch)
                      (#$ff7e . script-switch)
                      (#$ff7f . num-lock)
                      (#$ff80 . kp-space)
                      (#$ff89 . kp-tab)
                      (#$ff8d . kp-enter)
                      (#$ff91 . kp-f1)
                      (#$ff92 . kp-f2)
                      (#$ff93 . kp-f3)
                      (#$ff94 . kp-f4)
                      (#$ffbd . kp-equal)
                      (#$ffaa . kp-multiply)
                      (#$ffab . kp-add)
                      (#$ffac . kp-separator)
                      (#$ffad . kp-subtract)
                      (#$ffae . kp-decimal)
                      (#$ffaf . kp-divide)
                      (#$ffb0 . kp-0)
                      (#$ffb1 . kp-1)
                      (#$ffb2 . kp-2)
                      (#$ffb3 . kp-3)
                      (#$ffb4 . kp-4)
                      (#$ffb5 . kp-5)
                      (#$ffb6 . kp-6)
                      (#$ffb7 . kp-7)
                      (#$ffb8 . kp-8)
                      (#$ffb9 . kp-9)
                      (#$ffbe . f1)
                      (#$ffbf . f2)
                      (#$ffc0 . f3)
                      (#$ffc1 . f4)
                      (#$ffc2 . f5)
                      (#$ffc3 . f6)
                      (#$ffc4 . f7)
                      (#$ffc5 . f8)
                      (#$ffc6 . f9)
                      (#$ffc7 . f10)
                      (#$ffc8 . f11)
                      (#$ffc8 . l1)
                      (#$ffc9 . f12)
                      (#$ffc9 . l2)
                      (#$ffca . f13)
                      (#$ffca . l3)
                      (#$ffcb . f14)
                      (#$ffcb . l4)
                      (#$ffcc . f15)
                      (#$ffcc . l5)
                      (#$ffcd . f16)
                      (#$ffcd . l6)
                      (#$ffce . f17)
                      (#$ffce . l7)
                      (#$ffcf . f18)
                      (#$ffcf . l8)
                      (#$ffd0 . f19)
                      (#$ffd0 . l9)
                      (#$ffd1 . f20)
                      (#$ffd1 . l10)
                      (#$ffd2 . f21)
                      (#$ffd2 . r1)
                      (#$ffd3 . f22)
                      (#$ffd3 . r2)
                      (#$ffd4 . f23)
                      (#$ffd4 . r3)
                      (#$ffd5 . f24)
                      (#$ffd5 . r4)
                      (#$ffd6 . f25)
                      (#$ffd6 . r5)
                      (#$ffd7 . f26)
                      (#$ffd7 . r6)
                      (#$ffd8 . f27)
                      (#$ffd8 . r7)
                      (#$ffd9 . f28)
                      (#$ffd9 . r8)
                      (#$ffda . f29)
                      (#$ffda . r9)
                      (#$ffdb . f30)
                      (#$ffdb . r10)
                      (#$ffdc . f31)
                      (#$ffdc . r11)
                      (#$ffdd . f32)
                      (#$ffdd . r12)
                      (#$ffde . r13)
                      (#$ffde . f33)
                      (#$ffdf . f34)
                      (#$ffdf . r14)
                      (#$ffe0 . f35)
                      (#$ffe0 . r15)
                      (#$ffe1 . shift-l)
                      (#$ffe2 . shift-r)
                      (#$ffe3 . control-l)
                      (#$ffe4 . control-r)
                      (#$ffe5 . caps-lock)
                      (#$ffe6 . shift-lock)
                      (#$ffe7 . meta-l)
                      (#$ffe8 . meta-r)
                      (#$ffe9 . alt-l)
                      (#$ffea . alt-r)
                      (#$ffeb . super-l)
                      (#$ffec . super-r)
                      (#$ffed . hyper-l)
                      (#$ffee . hyper-r)))
    (x11_initialise ()  ':xerror ':xioerror))


(defun :xerror (mes1 mes2)
  (if #:system:vmsp
      (printerror 'errx (catenate mes1 mes2) ())
    (error 'errx (catenate mes1 mes2) ())))


(defun :xioerror ()
  ;;; Fatal IO error
    (let ((display (current-display)))
      (setq #:sys-package:tty 'tty)
      (setq #:sys-package:itsoft ())
      (error ':ioerror 'xioerror display)))


(defun :event-mask (display)
    (let ((events :events-list))
      (cond ((null events)
             (setq events (list 'ascii-event 
                                'down-event 'up-event
				'drag-event
				'functionkey-event
                                'enterwindow-event 'leavewindow-event
				)))
            ((and (memq 'move-event events)
                  (not (memq 'drag-event events)))
             (setq events (newr events 'drag-event))))
      (if (memq 'ascii-event events)
	  (:ascii-event-p display t))
      (if (memq 'functionkey-event events)
	  (:functionkey-event-p display t))
      (if (memq 'move-event events)
	  (:move-event-p display t))
      (if (memq 'drag-event events)
	  (:drag-event-p display t))
      (:map-window-p display t)
      (:unmap-window-p display t)
      (:reparent-notify-p display t)
      (:visibility-change-p display t)
      (if (memq 'client-message events)
	  (:client-message-p display t))
      (:events-list display events)
      (:opaque-events-list display (append1 events 
					 'repaint-event))
      (:top-events-list display (append events 
					   '(
					    repaint-event
					    modify-window-event)))
     (:transparent-events-list display events)
     (:top-events-mask display (:compute-event-mask
				(:top-events-list display)))
     (:opaque-events-mask display (:compute-event-mask
				   (:opaque-events-list display)))
     (:transparent-events-mask display (:compute-event-mask
					(:transparent-events-list display)))
      (let ((mask 0))
        (while events
          (selectq (nextl events)
                   (ascii-event (setq mask (logor mask 1)))            
                   (functionkey-event (setq mask (logor mask 1))) 
                   (down-event  (setq mask (logor mask 4)))            
                   (up-event    (setq mask (logor mask 8)))            
                   (enterwindow-event (setq mask (logor mask 16)))           
                   (leavewindow-event (setq mask (logor mask 32)))
                   (drag-event (setq mask (logor mask 8192)))
                   (move-event (setq mask (logor mask 64)))
                   (t ())))
        mask)))


(defun :init-display (display xmax ymax fd)
    (setq :file-descriptor-mask
	  ;; This code was commented. At least on Linux and HPUX11
	  ;; it is needed.
          (logor :file-descriptor-mask (2** (:file-descriptor display fd))))
    (#:display:xmax display xmax)
    (#:display:ymax display ymax)
    (let ((version (x11_x_version (:xdisplay display)))
          (release (x11_x_release (:xdisplay display)))
          (revision (x11_x_revision (:xdisplay display))))
      (:version display (catenate "x" version "r" release "r" revision))
      (unless (eq version 11)
              (error ':bitprologue 'errbadx11version (:version display)))))


(defun :init-font (display)
  (:font-vector display #[])
  (let ((defaults (if (eq (x11_x_release (:xdisplay display)) 2)
		      :default-x11r2-fonts
		    :default-x11r3-fonts)))
    (:add-a-font display "font" (car defaults))
    (:add-a-font display "attributefont" (cadr defaults))
    (:add-a-font display "smallfont" (caddr defaults))
    (:add-a-font display "largefont" (cadddr defaults))))


(defun :add-a-font (display item default)
  (let ((name (:get-default display item)))
    (when (eq 0 (slen name))
      (setq name default))
    ;;; Try fixed 
    ;;;
    ;;; [ AA 13/05/93 ]
    ;;; To avoid manipulating non available fonts.
    (let ((val (catcherror t
                 (:load-font display name))))
      (if val
          (#:display:font-names
           display
           (acons name
                  (car val)
                  (#:display:font-names display)))))))

(defun :init-line-style (display)
  (if (null (:line-style-vector display))
      (:line-style-vector display
			  (vector
			   #[0 0] #[1 0] #[1 1] #[1 2] #[2 0] #[2 1] #[2 2]
			   #[3 0] #[3 1] #[3 2]))))


(defun :init-pattern (display)
  (:pattern-vector display #[])
  ;; 16x16 are generally the more fast patterns.
  (:add-a-pattern display 16 16 #[
		  #*0000 #*0000 #*0000 #*0000
		  #*0000 #*0000 #*0000 #*0000
		  #*0000 #*0000 #*0000 #*0000
		  #*0000 #*0000 #*0000 #*0000
		  ])
  (:add-a-pattern display 16 16 #[
		  #*ffff #*ffff #*ffff #*ffff
		  #*ffff #*ffff #*ffff #*ffff
		  #*ffff #*ffff #*ffff #*ffff
		  #*ffff #*ffff #*ffff #*ffff
		  ])
  (:add-a-pattern display 16 16 #[
		  #*aaaa #*5555 #*aaaa #*5555
		  #*aaaa #*5555 #*aaaa #*5555
		  #*aaaa #*5555 #*aaaa #*5555
		  #*aaaa #*5555 #*aaaa #*5555
		  ])
  (:add-a-pattern display 16 16 #[
		  #*8888 #*2222 #*8888 #*2222
		  #*8888 #*2222 #*8888 #*2222
		  #*8888 #*2222 #*8888 #*2222
		  #*8888 #*2222 #*8888 #*2222
		  ])
  (:add-a-pattern display 16 16 #[
		  #*7777 #*dddd #*7777 #*dddd
		  #*7777 #*dddd #*7777 #*dddd
		  #*7777 #*dddd #*7777 #*dddd
		  #*7777 #*dddd #*7777 #*dddd
		  ])
  )


(defun :add-a-pattern (display w h bits)
  (let ((bitmap (#:bitmap:make)))
    (#:bitmap:w bitmap w)
    (#:bitmap:h bitmap h)
    (#:bitmap:display bitmap display)
    (:create-bitmap display bitmap)
    (#:bitmap:bits bitmap bits)
    (:make-pattern display  bitmap)))


(defun :init-cursor (display)
  (:cursor-vector display (makevector 3 0))
  (:cursors-alist display ())
  (let ((lelispcursor (:get-default display "cursor"))
	(gccursor (:get-default display "gccursor"))
	(busycursor (:get-default display "busycursor"))
	)
    (setq lelispcursor (if (eqstring lelispcursor "")
			   (car :default-cursors)
			 (read-from-string lelispcursor))
	  gccursor (if (eqstring gccursor "")
		       (cadr :default-cursors)
		     (read-from-string  gccursor))
	  busycursor (if (eqstring busycursor "")
			 (caddr :default-cursors)
		       (read-from-string busycursor))
	  )
    (vset (:cursor-vector display) 
	  0 (x11_create_cursor (:xdisplay display) lelispcursor))
    (vset (:cursor-vector display) 
	  1 (x11_create_cursor (:xdisplay display) gccursor))
    (vset (:cursor-vector display)
	  2 (x11_create_cursor (:xdisplay display) busycursor)))
  (#:display:cursor-bitmaps display ()))




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;                         miscelaneous
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun :synchronize (display . onoff)
  (ifn onoff
       (:synchrone display)
       ;; else
       (x11_synchronize (:xdisplay display) (if (car onoff) 1 0))
       (:synchrone display (car onoff))))
     




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Window Creation
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;; Root window Initialisation
;;;


(defun :init-window (display)
  (let ((root (#:window:make))
	(extend ({x11window}:make))
	ge)
    (#:window:left root 0)
    (#:window:top root 0)
    (#:window:width root (add1 (#:display:xmax display)))
    (#:window:height root (add1 (#:display:ymax display)))
    (#:window:title root "root-window")
    (#:window:hilited root 0)
    (#:window:visible root (if (eq :depth (:depth display)) 1 0))
    (#:window:display root display)
    (#:window:extend root extend)
    (#:image:rectangle:window:window-type root 'opaque)
    (#:image:rectangle:window:state root 'map)
    (:window-address root (x11_root_window (:xdisplay display)))
    (:x11-create-graph-env display root)
    (setq ge (#:window:graph-env root))
    (x11_graph_subwindow_mode (:display-address display)
			      (:graph-env-address ge)
			      1) ;;; 1 is C type Enum  IncludeINferiors
                                 ;;; Draw in root-window will draw
                                 ;;; in subwindows too.
    (#:display:root-window display root)
    (#:display:main-graph-env display ge)
    (#:graph-env:foreground ge (#:display:foreground display))
    (#:graph-env:background ge (#:display:background display))
    (#:display:window display ())
    (#:display:windows display (list root))
    (#:display:graph-env display (#:display:main-graph-env display))
    ))


(defun :store-selection (display buffer)
  (x11_store_bytes (:display-address display)
		    buffer 
		    (slen buffer)))


(defun :get-selection (display)
  (let (bytes nbbytes
	      (vl (vector 0)))
    (setq bytes (x11_fetch_bytes (:display-address display) vl))
    (setq nbbytes (vref vl 0))
    (if (gt nbbytes 0)
	(let ((llstring (makestring nbbytes 0)))
	  (x11_bytes_to_llstring bytes llstring nbbytes)
	  llstring)
      ())))


(defun :display-depth (display)
  (#:display:x11:depth display))


(defun :initialize-event-responses (display)
  ;;; This create a vector of 37 elements (the maximum number of event
  ;;; in X11 )
  ;;; for every event we give a function
  ;;; default function id :default-code
  ;;; which just set the code of the event to 'no-event
  (let ((responses (makevector 37 ':default-event-code)))
    (vset responses 2 ':ascii-event-code)
    (vset responses 36 ':functionkey-event-code)
    (vset responses 4 ':down-event-code)
    (vset responses 5 ':up-event-code)
    (vset responses 6 ':movedrag-event-code)
    (vset responses 7 ':enterwindow-event-code)
    (vset responses 8 ':leavewindow-event-code)
    (vset responses 9 ':keyboard-focus-event-code)
    (vset responses 10 ':keyboard-focus-event-code)
    (vset responses 12 ':repaint-window-event-code)
    (vset responses 13 ':repaint-window-event-code)
    (vset responses 17 ':kill-window-event-code)
    (vset responses 22 ':modify-window-event-code)
    (vset responses 18 ':unmap-window-code)
    (vset responses 19 ':map-window-code)
    (vset responses 33 ':client-message-code)
    (vset responses 15 ':visibility-change-code)
    (vset responses 21 ':reparent-notify-code)
    (:event-responses display responses)))


(defun :get-xdisplay (display)
  (if (and
       (typep display '#:display:x11)
       (#:display:extend display))
      (x11_xdisplay (:display-address display))))
