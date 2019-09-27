;;;; .EnTete	"Le-Lisp version 15.2x" " " "wininit.ll"
;;;; .Date	"2001/05/04"
;;;; .EnPied	"wininit.ll"
;;;; .Version	"1.01"
;;;; .Auteur 	"ELIGIS, C. Jullien"
;;;; .Annexe I	""

(eval-when (eval)
           (unless (getdef '#:display:windows:winbitmap)
                   (libload #u"windows/winstruct")))

(defvar #:sys-package:colon '#:display:windows)

(unless (boundp ':window-activate) 
        (defvar :window-activate ()))

(unless (boundp ':events-list) 
        (defvar :events-list))

(unless (boundp ':default-application-name) 
	(defvar :default-application-name "lelisp"))

(unless (boundp ':default-application-class) 
	(defvar :default-application-class "Lelisp"))

(unless (boundp ':default-fonts)
        (defvar :default-fonts))    

(unless (boundp ':font-buffer-size)
        (defvar :font-buffer-size 32700))

(unless (boundp ':font-all-height)
        (defvar :font-all-height
                #[ 5 6 7 8 9 10 11 12 13 14 15 16 17 18 20 22 25 30 36 48]))

#|
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
|#

(when (eq (valfn ':at-end) 0)
      (synonym ':at-end 'at-end))

(defun at-end args
   (when (and (current-display) 
              (send 'prologuep (current-display)))
         (bitepilogue))
   (:at-end))

(defun :bitprologue (display)
   ;; If you want to add your own font to BV uncomment the next line
   ;; and replace the string by the name of your font.
   ;;
   ;; (:set-optional-fontname "My own Font")
   ;;
   (let ((ge (#:graph-env:make))
        (windispl ()))
        (unless :default-fonts
                (setq :default-fonts
                      (if (= (winversion) 3.0)
                         '("Courier-10"
                           "Terminal-10"
                           "MS Sans Serif-10"
                           "Courier-10")
                          '("Courier New-10-TT"
                            "Courier New-10-TT-Bold"
                            "Courier New-8-TT-Bold"
                            "Courier New-12-TT"))))
        (:vector-args display (makevector 20 0))
        (:default-window-type display `transparent)
        (when :window-activate
              (vset (:vector-args display) 0 1))
        (setq windispl (windows_bitprologue
                                (:vector-args display)
                                :font-all-height
                                (vlength :font-all-height)))
        (if (eq windispl 0)
            (error '#:display:windows:bitprologue
                   "Insufficient memory"
                   display)
            (#:display:extend display windispl)            
            (#:display:xmax   display (vref (:vector-args display) 0))
            (#:display:ymax   display (vref (:vector-args display) 1))   
            
	(:depth display (vref (:vector-args display) 2))
        (:init-mode display)
        (:init-line-style display)   

        (:init-color display)   

        (#:graph-env:foreground ge (#:display:foreground display))
        (#:graph-env:background ge (#:display:background display))
        (#:display:graph-env display ge)
        (:init-pattern display)      

        (:init-font display)         
        (:init-cursor display)            

        (:init-window display)   

    
        (:event-mask display)
        (:initialize-event-responses display)   
        (:flush-event display)
        (:reread display ())   
        (:function-keys display
                    '(
                      (36  . home)
                      (37  . left)
                      (38  . up)
                      (39  . right)
                      (40  . down)
                      (33  . prior)
                      (34  . next)
                      (35  . end)
                      (45  . insert)
                      (46  . cancel)
                      (112 . f1)
                      (113 . f2)
                      (114 . f3)
                      (115 . f4)
                      (116 . f5)
                      (117 . f6)
                      (118 . f7)
                      (119 . f8)
                      (120 . f9)
                      (121 . f10)
                      (122 . f11)
                      (123 . f12)))
        )

   display))

(defun :bitepilogue (display)
   ;; Kills all windows.
   (mapc #'(lambda (window)
              (when (and (null (#:window:father window))
                         (#:window:display window))
                    (kill-window window)))
           (#:display:windows display))

	;; frees all cursors
;  (let ((curs-vector (:cursor-vector display))
;       (i 0)
;       )
;   (when curs-vector
;         (while (lt i (vlength curs-vector))
;           (windows_free_cursor (:display-address display) 
;                                (vref curs-vector i))
;           (setq i (add1 i)))))

   (:cursor-vector display ())
   (:cursors-alist display ())

   ;; Frees Colors
   (when (gt (#:display:windows:depth display)  1)
         (mapc #'(lambda (color)
                    (windows_kill_color ;(:display-address display) 
                             (:wincolor color)))
               (#:display:colors display)))

   ;;; Frees Bitmaps
   (mapc #'(lambda (bitmap)
              (:kill-bitmap display bitmap))
         (#:display:bitmaps display))
  
   ;;; Frees Pattern-Bitmaps
   (for (i 0 1 4)
        (:kill-bitmap display (vref (:pattern-vector display) i)))

   (when (#:display:prologuep display)
         (:font-vector display ()))
;;;;     (:line-style-vector display ())
;;;; No need to free line-style-vector it does'nt have pointer to C ressources
;;;
  
   (:pattern-vector display ())
   (:mode-vector display ())
   (:reread display ())
   (:drawing-flag display ())
   (:function-keys display ())
   (:reread display ())
;  (:events-in-socket display ())
  
   (windows_bitepilogue (#:display:extend display))
   (#:display:extend display ())     

   )

(defun :bitmap-save (display)
  (:bitepilogue display))

(defun :bitmap-restore (display)
  (:bitprologue display))


;;;
;;; Raraichissemement de l'e'cran.
;;; Doit marcher me^me s'il n'y a pas de fene^tre courante.

(defun :bitmap-refresh (display) t)

(defun :bitmap-flush (display) t)

(defun :bitmap-sync (display) t)



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

(defun :standard-busy-cursor (display) 1)

(defun :init-color (display)
   (let ((forename ())
         (backname ())
         (lelispcolors ())
         (fore    (#:color:make))
         (back    (#:color:make))
         (red     (#:color:make))
         (green   (#:color:make))
         (blue    (#:color:make))
         (yellow  (#:color:make))
         (magenta (#:color:make))
         (cyan    (#:color:make))
         (grey    (#:color:make))
         (lgrey   (#:color:make))
         (wheat   (#:color:make)))
        (setq forename "black")
        (setq backname "white")
        (windows_init_table_color)
        (#:color:name        fore    forename)
        (#:color:display     fore    display)
        (:make-color display fore        0     0     0)
        (#:color:name        back    backname)
        (#:color:display     back    display)
        (:make-color display back    32767 32767 32767)
        (#:color:name        red     "red")
        (#:color:display     red     display)
        (:make-color display red     32767     0     0)
        (#:color:name        green   "green")
        (#:color:display     green   display)
        (:make-color display green       0 32767     0)            
        (#:color:name        blue    "blue")
        (#:color:display     blue    display)
        (:make-color display blue        0     0 32767)
        (#:color:name        yellow  "yellow")
        (#:color:display     yellow  display)
        (:make-color display yellow  32767 32767     0)
        (#:color:name        cyan    "cyan")
        (#:color:display     cyan    display)
        (:make-color display cyan        0 32767 32767)
        (#:color:name        magenta "magenta")
        (#:color:display     magenta display)
        (:make-color display magenta 32767     0 32767)
        (#:color:name        grey    "grey")
        (#:color:display     grey    display)
        (:make-color display grey    16384 16384 16384)
        (#:color:name        lgrey   "lightgrey")
        (#:color:display     lgrey   display)
        (:make-color display lgrey   24576 24576 24576)
        (#:color:name        wheat   "wheat")
        (#:color:display     wheat   display)
        (:make-color display wheat   32767 32767 26112)
        (#:display:foreground display fore)
        (#:display:background display back)
        (#:display:colors display
                   (list fore    back       red     green
                         blue    yellow     cyan    magenta
                         grey    lgrey      wheat))))

(defun :init-mode (display)
   (:mode-vector display #[0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15]))

(defun :init-line-style (display)
   (if (null (:line-style-vector display))
       (:line-style-vector display
                           (vector #[0 0] #[1 0] #[1 2] #[1 1] #[2 0]
                                   #[2 0] #[1 3] #[3 0] #[3 0] #[1 4]))))

(defun :display-depth (display)
   (#:display:windows:depth display))

(defun :synchronize (display . onoff)
   (ifn onoff
        (:synchrone display)
        (:synchrone display (car onoff))))

;;; Root window Initialisation
;;;

(defun :init-window (display)
   (let ((root (#:window:make))
         (extend ({winwindow}:make))
         ge)
        (#:window:left    root 0)
        (#:window:top     root 0)
        (#:window:width   root (#:display:xmax display))
        (#:window:height  root (#:display:ymax display))
        (#:window:title   root "root-window")
        (#:window:hilited root 0)
        (#:window:visible root 1)
        (#:window:display root display)
        (#:window:extend  root extend)
        (#:image:rectangle:window:window-type root 'opaque)
        (#:image:rectangle:window:state root 'map)
        (:window-address  root
                (windows_root_window ;(:windows-display display)
                                     root))
        (#:display:root-window display root)

	(:windows-create-graph-env display root)

	(setq ge (#:window:graph-env root))
        (#:display:main-graph-env display ge)
        (#:graph-env:foreground ge (#:display:foreground display))
        (#:graph-env:background ge (#:display:background display))
        (#:display:window display ())
        (#:display:windows display (list root))
        (#:display:graph-env display (#:display:main-graph-env display))))


(defun :initialize-event-responses (display)
   ;;; for every event we give a function
   ;;; default function id :default-code
   ;;; which just set the code of the event to 'no-event
   (let ((responses (makevector 37 ':default-event-code)))
        (vset responses  0 ':ascii-event-code)
        (vset responses  1 ':move-event-code)
        (vset responses  2 ':drag-event-code)    
        (vset responses  3 ':down-event-code)
        (vset responses  4 ':up-event-code)
        (vset responses  5 ':repaint-window-event-code)
        (vset responses  6 ':modify-window-event-code)
        (vset responses  7 ':kill-window-event-code)
        (vset responses  8 ':enterwindow-event-code)
        (vset responses  9 ':leavewindow-event-code)
        (vset responses 10 ':keyboard-focus-event-code)
        (vset responses 11 ':map-window-code)
        (vset responses 12 ':unmap-window-code)
        (vset responses 13 ':functionkey-event-code)
        (vset responses 14 ':doubleclick-event-code)
        (vset responses 15 ':visibility-change-code)
        (vset responses 16 ':command-event-code)
        (:event-responses display responses)))

(defun :init-font (display)
   (let* ((str   (makestring :font-buffer-size 32))
          (nfont (windows_get_fonts str :font-buffer-size))
          (pos1  0)
          (pos2  0)
          (all-fonts ()))
         (for (i 0 1 nfont)
              (setq pos2 (chrpos #/. str pos1))
              (when pos2
                    (when (> pos2 (add1 pos1))
                          (setq all-fonts
                                (acons (substring str pos1 (sub pos2 pos1))
                                       i
                                       all-fonts)))
                    (setq pos1 (add1 pos2))))
         (:font-vector display #[])
        (:all-font-names display (reverse all-fonts))
        (:add-a-font display (car :default-fonts))
        (:add-a-font display (cadr :default-fonts))
        (:add-a-font display (caddr :default-fonts))
        (:add-a-font display (cadddr :default-fonts))))


(defun :add-a-font (display fontname)
   (let ((font (cassoc fontname (:all-font-names display)))
         (val  ()))
        (when font
              ;;; To avoid manipulating non available fonts.
              (setq val (catcherror t (:load-font display fontname)))
              (if val
                  (#:display:font-names display
                                        (acons fontname
                                               (car val)
                                               (#:display:font-names display)))
                  ()))))

(defun :init-cursor (display)
   (let ((key-left-ptr 0)
         (key-watch 1))
        (until (or (eqstring "left-ptr"
                             (vref #:display:cursor-names key-left-ptr))
                   (eq key-left-ptr #:display:cursor-names-length))
               (setq key-left-ptr (add1 key-left-ptr)))
        (until (or (eqstring "watch" (vref #:display:cursor-names key-watch))
                   (eq key-watch #:display:cursor-names-length))
               (setq key-watch (add1 key-watch)))        
        (:cursors-alist display (acons key-left-ptr 0 
                                       (acons key-watch 1 ())))
        (:cursor-vector display (vector (windows_named_cursor "left-ptr")
                                        (windows_named_cursor "watch")))))
        

(defun :init-pattern (display)
   (:pattern-vector display #[])
   ;; 16x16 are generally the more fast patterns.
   (:add-a-pattern display 16 16
                   #[
                      #*0000 #*0000 #*0000 #*0000
                      #*0000 #*0000 #*0000 #*0000
                      #*0000 #*0000 #*0000 #*0000
                      #*0000 #*0000 #*0000 #*0000
                    ])
   (:add-a-pattern display 16 16
                   #[
                      #*ffff #*ffff #*ffff #*ffff
                      #*ffff #*ffff #*ffff #*ffff
                      #*ffff #*ffff #*ffff #*ffff
                      #*ffff #*ffff #*ffff #*ffff
                    ])
   (:add-a-pattern display 16 16
                   #[
                      #*aaaa #*5555 #*aaaa #*5555
                      #*aaaa #*5555 #*aaaa #*5555
                      #*aaaa #*5555 #*aaaa #*5555
                      #*aaaa #*5555 #*aaaa #*5555
                    ])
   (:add-a-pattern display 16 16
                   #[
                      #*8888 #*2222 #*8888 #*2222
                      #*8888 #*2222 #*8888 #*2222
                      #*8888 #*2222 #*8888 #*2222
                      #*8888 #*2222 #*8888 #*2222
                    ])
   (:add-a-pattern display 16 16
                   #[
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
        (:make-pattern display bitmap)))


(defun :event-mask (display)
   (let ((events :events-list))
        (cond ((null events)
               (setq events (list 'ascii-event 
                                  'down-event
                                  'doubleclick-event
                                  'up-event
                                  'drag-event
                                  'functionkey-event
                                  'enterwindow-event
                                  'leavewindow-event
				  'command-event)))
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
        
	(:opaque-events-list display (append1 events 'repaint-event))
        (:top-events-list
             display (append events '(repaint-event modify-window-event)))
        (:transparent-events-list display events)))
