;;;
;;; VIRSTRUCT:  Virtual Bitmap Structures
;;;
;;; $Source: /usr/cvs/lelisp/llib/virstruct.ll,v $
;;; $Date: 2016/05/21 10:36:07 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


;;;
;;; All the Structures used by the Virtual Bitmap
;;; 

(setq #:sys-package:colon 'display)

(unless (>= (version) 15.2)
        (error 'load 'erricf 'virbitmap))



;;;
;;; Display structure
;;; every incarnation defines a subtype of this structure
;;;

(defstruct display
  name            
  package
  device
  xmax
  ymax 
  eventmode
  prologuep
  keyboard-focus-window
  window
  graph-env
  root-window
  main-graph-env
  background
  foreground
  windows
  bitmaps
  menus
  colors            ; list of valid color objects
  font-names        ; Alist (string . fix) font's name
  pattern-bitmaps   ; list of bitmaps used in patterns
  cursor-bitmaps    ; list of (bitmap mask hotx hoty for cursors
  extend
  graph-envs        ; List of all graph env created by the user
                    ;    except those associated to windows
                    ;    Don't forget them in bitmap-save bitmap-restore
  current-selection ; To store current selection (a string) 
                    ; When the display is not an X11 display
                    ; Must be a globale variable for the multi-display
  resource
  named-cursors     ; list of the names of loaded named cursors.
  stipple-bitmaps   ; list of bitmaps used as stipple
  )


;;;
;;; Color structure. No subtype needs to be defined .
;;; Not documented
;;;

(defstruct color 
  name
  red
  green 
  blue
  mutable
  display
  extend)



;;;
;;; Graphic environment structure associated to every window
;;; Not documented
;;; Contains new fields
;;;

(defstruct graph-env 
  (font 0)
  (line-style 0)
  (pattern 1)
  (mode 3)
  foreground 
  background
  (clip-x 0)
  (clip-y 0)
  (clip-w 0)
  (clip-h 0)
  bitmap
  display
  extend
  font-y ;;; New field
  font-h ;;; New field
  stipple ;;; New Field (a bitmap)
  (fill-mode 'pattern) 
      ;;; (filling mode  tiling with tile or width stipple or with Bg)
  (arc-mode 0)
  )


;;;
;;; Event structure Documented
;;; Needs subtypes for every event In future
;;; example : #:event:ascii-event, #:event:down-event, ...
;;;

(eval-when (load eval compile)
(defstruct event 
  code
  window
  detail
  gx
  gy
  x
  y
  w
  h
  b ;;; Border width of window Added 31/08/90
  )
)


;;;
;;; Bitmap structure
;;;

(defstruct bitmap
  w
  h
  extend
  display
)


(defstruct #:bitmap:bytemap)


(defstruct #:bitmap:stipple data)


(eval-when (load eval compile) ; car souvent utilise' au top-level (Aida)
	   (defstruct #:image:rectangle (x 0) (y 0) (w 1) (h 1)))


;;;
;;; Window structure
;;; Contains new fields
;;; Information in field graphic-properties is not portable But is very
;;; useful for X11
;;;

(defstruct #:image:rectangle:window
  title
  hilited
  visible
  graph-env
  extend
  father
  properties
  (cursor 0)
  display
  subwindows
  ;; new fields :
  events-list ;; (list of 'up-event 'down-event  'ascii-event  ...)
  window-type ;; Window type : ('transparent or 'opaque) if () see display
  graphic-properties ;; list of symbols : backing-store, save-under,..
  state            ;; Symbol : 'iconify 'map 'unmap 'raise 'lower
  )


;;;
;;; Bad and Historical LeLisp menu
;;; we recommend the use of Aida menus : They are coming soon
;;;

(defstruct menu
  title
  itemlists
  display
  extend
  )


(defstruct #:menu:itemlist
  name
  active
  items
  )


(defstruct #:menu:item
  name
  active
  value
)


;;; This is a new structure
;;; that reflects information about a font
;;; Some fields will  be unused for some incarnations
;;; Except for X11

(defstruct font-info
  ascent
  descent
  angle
  weight
  minrbearing
  minlbearing
  minascent
  mindescent
  minwidth
  maxrbearing
  maxlbearing
  maxascent
  maxdescent
  maxwidth
  )


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;                      COMPATIBILITY FUNCTIONS
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(dmd #:window:make ()
     '(#:image:rectangle:window:make))

(defun #:window:background (window . color)
  (if color
      (when (#:window:graph-env window)
	    (#:graph-env:background (#:window:graph-env window)
				    (car color)))
    (when (#:window:graph-env window)
	  (#:graph-env:background (#:window:graph-env window)))))


(defmacro #:window:left l
  `(#:image:rectangle:x ,@l))
(defmacro #:window:top l
  `(#:image:rectangle:y ,@l))
(defmacro #:window:width l
  `(#:image:rectangle:w ,@l))
(defmacro #:window:height l
  `(#:image:rectangle:h ,@l))
(defmacro #:window:title l
  `(#:image:rectangle:window:title ,@l))
(defmacro #:window:hilited l
  `(#:image:rectangle:window:hilited ,@l))
(defmacro #:window:visible l
  `(#:image:rectangle:window:visible ,@l))
(defmacro #:window:graph-env l
  `(#:image:rectangle:window:graph-env ,@l))
(defmacro #:window:extend l
  `(#:image:rectangle:window:extend ,@l))
(defmacro #:window:father l
  `(#:image:rectangle:window:father ,@l))
(defmacro #:window:properties l
  `(#:image:rectangle:window:properties ,@l))
(defmacro #:window:cursor l
  `(#:image:rectangle:window:cursor ,@l))
(defmacro #:window:display l
  `(#:image:rectangle:window:display ,@l))
(defmacro #:window:subwindows l
 `(#:image:rectangle:window:subwindows ,@l))
(defmacro #:window:events-list l
  `(#:image:rectangle:window:events-list ,@l))
(defmacro #:window:window-type l
  `(#:image:rectangle:window:window-type ,@l))
(defmacro #:window:graphic-properties l
  `(#:image:rectangle:window:graphic-properties ,@l))
(defmacro #:window:state l
  `(#:image:rectangle:window:state ,@l))
