;;;
;;; VIRGRAPH:  Virtual Bitmap Graphic Environment Mangement.
;;;
;;; $Source: /usr/cvs/lelisp/llib/virgraph.ll,v $
;;; $Date: 2016/05/21 10:36:06 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


(eval-when (eval)
	   (unless (getdef '#:display:defun)
		   (libload "virmacros.ll")))

(setq #:sys-package:colon 'display)



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; New functions
;;;;;;;;;;;;;;;;;;   make-graph-env
;;;;;;;;;;;;;;;;;;   kill-graph-env
;;;;;;;;;;;;;;;;;;   graph-env-set-clip
;;;;;;;;;;;;;;;;;;   graph-env-font
;;;;;;;;;;;;;;;;;;   graph-env-pattern
;;;;;;;;;;;;;;;;;;   graph-env-mode
;;;;;;;;;;;;;;;;;;   graph-env-line-style
;;;;;;;;;;;;;;;;;;   graph-env-background
;;;;;;;;;;;;;;;;;;   graph-env-foreground
;;;;;;;;;;;;;;;;;;   current-graph-env 
;;;;;;;;;;;;;;;;;;
;;;stipples;;;;;;;   create-stipple
;;;;;;;;;;;;;;;;;;   current-stipple
;;;;;;;;;;;;;;;;;;   current-fill-mode
;;;;;;;;;;;;;;;;;;   kill-stipple
;;;;;;;;;;;;;;;;;;   graph-env-stipple
;;;;;;;;;;;;;;;;;;   graph-env-fill-mode
;;;;;;;;;;;;;;;;;;
;;; We need to add
;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;   graph-env-draw-cursor
;;;;;;;;;;;;;;;;;;   graph-env-font-height
;;;;;;;;;;;;;;;;;;   graph-env-font-ascent
;;;;;;;;;;;;;;;;;;   graph-env-width-substring
;;;;;;;;;;;;;;;;;;   graph-env-height-substring
;;;;;;;;;;;;;;;;;;   graph-env-x-base-substring
;;;;;;;;;;;;;;;;;;   graph-env-y-base-substring
;;;;;;;;;;;;;;;;;;   graph-env-x-inc-substring
;;;;;;;;;;;;;;;;;;   graph-env-y-inc-substring
;;;;;;;;;;;;;;;;;;   graph-env-width-space
;;;;;;;;;;;;;;;;;;   graph-env-x-base-space
;;;;;;;;;;;;;;;;;;   graph-env-y-base-space
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;




;;;; All function builders are defined in file VIRMACROS.LL



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;
;;; The first argument is the name of the field. The second one is his type
;;; (when different of the name)
;;; 
;;; (:define-graph-env XXX ...) defines functions :
;;;  - (current-XXX &nobind)
;;;  - (graph-env-XXX graph-env . x)
;;;  - (#:display:current-XXX &nobind)
;;;  - (#:display:graph-env-XXX &nobind)
;;;
;;; Ex : (:define-graph-env foreground color) defines :
;;; (defun current-foreground &nobind
;;;     (let ((arg (arg))
;;;           (new-x (arg 0))
;;;           (display (#:display:internal-current-display))
;;;           graph-env old-x)
;;;         (when (gt arg 1) (error 'current-foreground 'errwna arg))
;;;         (#:display:assert-current 'current-foreground display)
;;;         (setq graph-env (#:display:graph-env display)
;;;                old-x (#:graph-env:foreground graph-env))
;;;          (if (or (eq 0 arg) (eq old-x new-x))
;;;              old-x
;;;              (#:color:assert 'current-foreground new-x)
;;;              (send 'current-foreground display graph-env new-x)
;;;              (#:graph-env:foreground graph-env new-x))))
;;; (defun graph-env-foreground (graph-env . x)
;;;     (#:graph-env:assert 'graph-env-foreground graph-env)
;;;     (let ((display (#:graph-env:display graph-env)) num)
;;;          (ifn x
;;;               (#:graph-env:foreground graph-env)
;;;               (setq num (car x))
;;;               (#:color:assert 'graph-env-foreground num)
;;;               (send 'current-foreground display graph-env num)
;;;               (#:graph-env:foreground graph-env num))))
;;; (defun #:display:current-foreground &nobind
;;;     (error 'current-foreground '#:display:not-yet-inplemented (arg 0)))
;;; (defun #:display:graph-env-foreground &nobind
;;;     (error 'graph-env-foreground '#:display:not-yet-inplemented (arg 0)))

;;; These variable-functions read/change a graphic attribute in the graph-env
;;; or in the graph-env associated with the current window.
;;; In X11, current-background changes the background of the current window.

(:define-graph-env font)
(:define-graph-env mode)
(:define-graph-env arc-mode fix)
(:define-graph-env pattern)
(:define-graph-env stipple)
(:define-graph-env fill-mode)
(:define-graph-env line-style)
(:define-graph-env foreground color)
(:define-graph-env background color)



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;
;;; (:define-0 XXX graph-env? . default) defines functions :
;;;  - (XXX) which sends method XXX to the display using graph-env if boolean
;;;  graph-env? is t.
;;;  - (#:display:XXX &nobind) returns the third argument or exits with error
;;;  if missing.
;;;
;;; Ex1 : (#:display:define-0 font-height t (height-space)) defines :
;;; (defun font-height ()
;;;     (let ((display (#:display:internal-current-display)))
;;;          (#:display:assert-current 'font-height display)
;;;          (send 'font-height display (#:display:graph-env display))))
;;; (defun #:display:font-height &nobind
;;;     (height-space))
;;;
;;; Ex2 : (#:display:define-0 font-max ()) defines :
;;; (defun font-max ()
;;;     (let ((display (#:display:internal-current-display)))
;;;          (#:display:assert-current 'font-max display)
;;;          (send 'font-max display)))
;;; (defun #:display:font-max &nobind
;;;     (error 'font-max '#:display:not-yet-inplemented (arg 0)))


;;;
;;; Clears  the current window.
;;; Should be defined in virwindow.ll
;;;

(:define-0 clear-graph-env t)


;;;
;;; Returns height and ascent corresponding to the font of current graph-env.
;;; That is allways Bugged, specially in X11.
;;; You'd better use display-get-font-info.

(:define-0 font-height t)
(:define-0 font-ascent t)


;;;
;;; Returns number of loaded fonts minus 1.

(:define-0 font-max ())


;;;
;;; Returns number of defined style-max minus 1.

(:define-0 line-style-max ())


;;;
;;; Returns number of defined patterns minus 1.

(:define-0 pattern-max ())


;;;
;;; Returns number of defined cursors minus 1.

(:define-0 cursor-max ())





;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;
;;; Functions which manage strings.
;;;
;;; (:define-string-func XXX) defines functions :
;;;  - (XXX s start length) 
;;;  - (#:display:XXX &nobind)
;;;
;;; Ex : (#:display:define-string-func width-substring) defines :
;;; (defun width-substring (s start length)
;;;     (let ((display (#:display:internal-current-display)))
;;;          (#:display:assert-current 'width-substring display)
;;;          (send 'width-substring display
;;;                (#:display:graph-env display) s start length)))
;;; (defun #:display:width-substring &nobind
;;;     (error 'width-substring '#:display:not-yet-inplemented (arg 0)))

;;; Metric informations using current font for string S beginning at START
;;; with LENGTH characters.

(:define-string-func width-substring)
(:define-string-func height-substring)
(:define-string-func x-base-substring)
(:define-string-func y-base-substring)
(:define-string-func x-inc-substring)
(:define-string-func y-inc-substring)



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;
;;; Default methods. They are defined to prevent from bad surprises.
;;; They just call error function.
;;;
;;; (:define:default-method XXX) defines function :
;;;  - (#:display:XXX &nobind) which sends an error if the methods is not
;;; defined for the display
;;;
;;; Ex : (#:display:define-default-method move-cursor) defines :
;;; (defun #:display:move-cursor &nobind
;;;     (error 'move-cursor '#:display:not-yet-inplemented (arg 0)))


(:define-default-method load-font)
(:define-default-method get-font-names)
(:define-default-method get-font-info)
(:define-default-method graph-env-set-clip)
(:define-default-method graph-env-set-clips)
(:define-default-method graph-env-change-values)
(:define-default-method graph-env-subwindow-mode)
(:define-default-method make-graph-env)
(:define-default-method kill-graph-env)
(:define-default-method kill-stipple)
(:define-default-method create-stipple)
(:define-default-method make-line-style)
(:define-default-method make-pattern)
(:define-default-method make-cursor)
(:define-default-method make-named-cursor)
(:define-default-method cursor-name)
(:define-default-method move-cursor)
(:define-default-method current-clip)
(:define-default-method current-cursor)






;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defvar #:clip:x 0)
(defvar #:clip:y 0)
(defvar #:clip:w 0)
(defvar #:clip:h 0)


;;;
;;; Can't use it in a "with"

(defmessage :err-current-clip
  (french "Cette fonction prend 0 ou 4 arguments")
  (english "This function takes 0 or 4 arguments")
  )


;;;
;;; Sets clip region of the current window to (x,y,w,h) when given.
;;; Else sets global variables #:clip:x #:clip:y #:clip:w #:clip:h to values
;;; of the clip region of the current window.

(defun current-clip &nobind
  (#:display:assert-current 'current-clip (:internal-current-display))
  (selectq (arg)
	   (0
	    (let ((graph-env (#:display:graph-env (:internal-current-display)))
		  )
	      (setq #:clip:x (#:graph-env:clip-x graph-env))
	      (setq #:clip:y (#:graph-env:clip-y graph-env))
	      (setq #:clip:w (#:graph-env:clip-w graph-env))
	      (setq #:clip:h (#:graph-env:clip-h graph-env))
	      ))
	   (4
	    (let ((graph-env (#:display:graph-env (:internal-current-display)))
		  (x (arg 0))
		  (y (arg 1))
		  (w (arg 2))
		  (h (arg 3))
		  )
	      (#:fix:assert 'current-clip x)
	      (#:fix:assert 'current-clip y)
	      (#:fix:assert 'current-clip w)
	      (#:fix:assert 'current-clip h)
	      (#:graph-env:clip-x graph-env x)
	      (#:graph-env:clip-y graph-env y)
	      (#:graph-env:clip-w graph-env w)
	      (#:graph-env:clip-h graph-env h)
	      (send 'current-clip (:internal-current-display)
		    graph-env x y w h)))
	   (t
	    (error 'current-clip ':err-current-clip (arg))))
  ())





;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;; Be Careful argument graph-env suppressed ??????


;;;
;;; Loads font named FONT. If it doesn't exist, exits with error
;;; #:display:err-not-a-font-name instead of erroob until V15.23.1

(#:display:defun load-font ((name string))
  (let ((display (:internal-current-display))
	f) 
    (#:display:assert-current 'load-font display)
    ;; Dewildcardify when possible.
    (setq name (or (car (send 'get-font-names display 1 name)) name))
    (or (cassoc name (#:display:font-names display))
	(progn
	  (setq f (send 'load-font display name))
	  (#:display:font-names display (nconc1 (#:display:font-names display)
						(cons name f)))
	  f))))




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


;;;
;;; Returns name of font number FONT.

(#:display:defun font-name ((font font))
  (let ((display (:internal-current-display))
	pair) 
    (#:display:assert-current 'font-name display)
    (setq pair (rassoc font (#:display:font-names display)))
    (unless pair
	    (error 'font-name ':errnotafont font))
    (car pair)))




;;; Be Careful argument graph-env not needed

;;;
;;; Given a bitmap BITMAP (could be a bytemap, creates corresponding PATTERN

(#:display:defun make-pattern ((bitmap bitmap))
 (let ((display (#:bitmap:display bitmap))
       b)
   (#:display:assert-current 'make-pattern display)
   ;;    (with ((current-display display)))
   (setq b (send 'make-pattern display bitmap))
   (#:display:pattern-bitmaps display
			      (nconc1 (#:display:pattern-bitmaps display)
				      bitmap))
   b))



;;;; Stipples

(#:display:defun create-stipple ((w fix) (h fix) (data string))
		 (let ((display (#:display:internal-current-display)))
		   (#:display:assert-current 'create-stipple display)
		   (let ((stipple (#:bitmap:stipple:make)))
		     (#:bitmap:w stipple w)
		     (#:bitmap:h stipple h)
		     (#:bitmap:display stipple display)
		     (#:bitmap:stipple:data stipple data)
		     (send 'create-stipple display
			   stipple data)
		     (#:display:stipple-bitmaps
		      display
		      (nconc1 (#:display:stipple-bitmaps  display)
			      stipple))
		     stipple
		     )))


;;;; Usefull creation functions on stipples

(defmessage :errnotfixorstring
  (french "ni un entier, ni une chaine")
  (english "not a fix or a string"))

(eval-when (load eval compile)
	   (defvar #:stipple:width 16)
	   (defvar #:stipple:height 16))


(defun make-stipple-bitmap (b)
  (unless (and (eq (type-of b) 'bitmap)
	       (eqn (#:bitmap:w b) 16)
	       (eqn (#:bitmap:h b) 16))
	  (error 'make-stipple-bitmap 'errbpa b))
  (let ((s "") (bits (send 'bits b)))
    (for (i 0 1 (sub1 (vlength bits)))
	 (setq s (catenate s (vref bits i))))
    (create-stipple 16 16 s)))

(defun make-stipple (n) ;;; Make a stipple from an int (ex #$a4a4)
  (unless (fixp n)      ;;; expand to a bitmap 16 * 16
	  (error 'make-stipple 'errbpa n))
  (let* ((byte1 (logand (logshift n -8) #$ff))
	 (byte2 (logand n #$ff))
	 (width  (div #:stipple:width 16))
	 (height #:stipple:height)
	 (stipple (makestring (mul (mul width 2) height) 0))
	 (i 0)
	 (j 0)
	 (i-j 0))
    (while (lt j height)
      (while (lt i width)
	(sset stipple i-j byte1)
	(setq i-j (add1 i-j))
	(sset stipple i-j  byte2)
	(setq i-j (add1 i-j)
	      i (add1 i)))
      (setq i 0
	    j (add1 j)))
    (typestring stipple 'bitvector)
   ;;; (print "stipple " stipple)
    (create-stipple #:stipple:width #:stipple:height stipple)))

;;; 
(defun make-stipple-2 (l1 l2) ;;; Make a stipple from two int int (ex #$a4a4)
  ;; Given arguments are formed :
  ;;           l1 = b1:b2
  ;;           l2 = b3:b4
  ;;   created stipple will be b1b2
  ;;                           b3b4
  ;;                           ....
  (unless (fixp l1)      ;;; expand to a bitmap 16 * 16
	  (error 'make-stipple 'errbpa l1))
  (unless (fixp l2)      ;;; expand to a bitmap 16 * 16 OR 32*32
	  (error 'make-stipple 'errbpa l2))
  (let* ((width  (div #:stipple:width 4))
	 (height #:stipple:height)
	 (stipple (makestring (mul  width height) 0))
	 (j width)
	 )
    (typestring stipple 'bitvector)
    ;;; On remplit les deux premieres lignes
    (sset stipple 0 (logand (logshift l1 -8) #$ff))
    (sset stipple 1 (logand l1 #$ff))
    (sset stipple 2 (logand (logshift l2 -8) #$ff))
    (sset stipple 3 (logand l2 #$ff))
    (while (lt j (mul height width))
      (bltstring stipple j stipple 0 width)
      (setq j (add width j)))
    (create-stipple #:stipple:width #:stipple:height stipple)))

(defun create-stipple16 args
  (selectq (length args)
	   (1
	    (if (stringp (car args))
		(create-stipple 16 16 (car args))
		;;; Should be a fix
	      (ifn (fixp (car args))
		   (error ':create-stipple16 ':errnotfixorstring (car args))
		   ;; it is a fix
		   ;; data is #XxYy
		   ;; stipple is XxXx YyYy....
		   (let ((data  (makestring 32 0))
			 (loop 4))
		     (sset data 0 (logand (logshift (car args) -8) #$ff))
		     (sset data 1 (sref data 0))
		     (sset data 2 (logand (car args) #$ff))
		     (sset data 3 (sref data 2))
		     (while (lt loop 32)
		       (bltstring data loop data 0 4)
		       (setq loop (add loop 4)))
		     (create-stipple 16 16 data)
		     ))))
	   (2
	    ;; data is #XxYy #ZzTt
	    ;; stipple is XxXx YyYy ZzZz TtTt ....
	    (let* ((data  (makestring 32 0))
		   (l1 (car  args))
		   (l2 (cadr args))
		   (loop 8)
		   )
	      (#:fix:assert ':create-stipple l1)
	      (#:fix:assert ':create-stipple l2)
	      (sset data 0 (logand (logshift l1 -8) #$ff))
	      (sset data 1 (sref data 0))
	      (sset data 2 (logand l1 #$ff))
	      (sset data 3 (sref data 2))
	      (sset data 4 (logand (logshift l2 -8) #$ff))
	      (sset data 5 (sref data 4))
	      (sset data 6 (logand l2 #$ff))
	      (sset data 7 (sref data 6))
	      (while (lt loop 32)
		(bltstring data loop data 0 8)
		(setq loop (add 8 loop)))
	      (create-stipple 16 16 data))
	    )
	   (4
	    ;; data is #XXxx #YyYy #ZzZz #TtTt
	    ;; stipple is XXxx YYyy ZZzz TTtt ....
	    ;;
	    ;;  try #$081C #$22C1 #$8001 #$0204
	    ;;   or #$F874 #$2247 #$8F17 #$2270
	    ;;   or #$8080 #$413E #$0808 #$14E3
	    (let* ((data (makestring 32 0))
		   (l1 (car    args))
		   (l2 (cadr   args))
		   (l3 (caddr  args))
		   (l4 (cadddr args))
		   )
	      (#:fix:assert 'create-stipple16 l1)
	      (#:fix:assert 'create-stipple16 l2)
	      (#:fix:assert 'create-stipple16 l3)
	      (#:fix:assert 'create-stipple16 l4)
	      (sset data  0 (logand (logshift l1 -8) #$ff))
	      (sset data  1 (sref data  0))
	      (sset data  2 (logand l1 #$ff))
	      (sset data  3 (sref data  2))
	      (sset data  4 (logand (logshift l2 -8) #$ff))
	      (sset data  5 (sref data  4))
	      (sset data  6 (logand l2 #$ff))
	      (sset data  7 (sref data  6))
	      (sset data  8 (logand (logshift l3 -8) #$ff))
	      (sset data  9 (sref data  8))
	      (sset data 10 (logand l3 #$ff))
	      (sset data 11 (sref data 10))
	      (sset data 12 (logand (logshift l4 -8) #$ff))
	      (sset data 13 (sref data 12))
	      (sset data 14 (logand l4 #$ff))
	      (sset data 15 (sref data 14))
	      (bltstring data 16 data 0 16)
	      (create-stipple 16 16 data)
	      )
	    )
	   (t (error ':create-stipple16 'errwna (length args))))
  )


(defconstant #:display:space "M")

;;; Theses functions are obsolete
;;; Use display-get-font-info instead
;;; or x-base-substring y-base-substring width-substring height-substring 

(defun width-space ()
  (width-substring  #:display:space 0 1))

(defun height-space ()
  (font-height))

(defun x-base-space ()
  (x-base-substring #:display:space 0 1))

(defun y-base-space ()
  (font-ascent))




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;                               CURSOR                                     ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


;;;
;;; Now tests if (x,y) is inside bitmap b2.

(#:display:defun make-cursor ((b1 bitmap) (b2 bitmap) (x fix) (y fix))
  (#:bitmap:assert-same-display 'make-cursor b1 b2)
  (#:bitmap:assert-in 'make-cursor b2 x y)
  (let ((display (#:bitmap:display b1)))
    (#:display:assert-current 'make-cursor display)
    (prog1 (send 'make-cursor display b1 b2 x y)
      (#:display:cursor-bitmaps display
				(nconc1 (#:display:cursor-bitmaps display)
					(list b1 b2 x y))))))


;;;
;;; This vector contains valid cursor names.
;;; Internally, those strings are never used. What is used is the KEY, that
;;; is the index in the vector :cursor-names.

(eval-when (load eval compile)
	   (defvar :cursor-names
	     #["circle" "cross" "crosshair" "diamond-cross" "dot"
	     "exchange" "fleur" "left-hand" "heart" "iron-cross"
	     "left-ptr" "mouse" "pencil" "pirate" "plus"
	     "question" "sizing" "spray" "watch" "i-beam"
	     ])
	   )

(eval-when (load eval compile)
	   (defvar :cursor-names-length (vlength :cursor-names))
	   )


;;;
;;; returns cursor named NAME. Exits in error if not found.

(#:display:defun make-named-cursor ((name string))
  (let ((display (:internal-current-display))
	(key 0)
	cursor
	)
    (#:display:assert-current 'make-named-cursor display)
    (until (eqstring name (vref :cursor-names key))
      (setq key (add1 key))
      (when (eq key :cursor-names-length)
	    (error 'make-named-cursor '#:display:err-not-a-cursor-name name)))
    (setq cursor (send 'make-named-cursor display key))
    (unless cursor
	    (error 'make-named-cursor '#:display:not-a-valid-cursor name))
    (unless (member name (#:display:named-cursors display))
	    (#:display:named-cursors
	     display
	     (cons name (#:display:named-cursors display))))
    cursor))


;;;
;;; Given a (lisp) number of cursor, returns its name if he has one, else ().
;;; Exits in error if cursor doesn't exist.

(#:display:defun cursor-name ((number cursor))
  (let ((display (:internal-current-display)))
    (#:display:assert-current 'cursor-name display)
    (send 'cursor-name display number)))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun current-cursor &nobind
  (let ((arg (arg))
	(cursor (when (gt (arg) 0) (arg 0)))
	(display (:internal-current-display))
	window old-c)
    (when (gt arg 1)
	  (error 'current-cursor 'errwna arg))
    (#:display:assert-current 'current-cursor display)
    (when (gt arg 0)
	  (#:cursor:assert 'current-cursor cursor))	
    (when (setq window (#:display:window display))
	  (#:window:assert 'current-cursor window)
	  (setq old-c (#:window:cursor window))
	  (if (or (eq 0 arg) (eq old-c cursor))
	      old-c
	    (send 'current-cursor display cursor)
	    (#:window:cursor window cursor)))))



(#:display:defun move-cursor ((x fix) (y fix))
  (let ((display (:internal-current-display)))
    (#:display:assert-current 'move-cursor display)
    (send 'move-cursor display x y)))



(#:display:defun make-line-style ((width fix) (style fix))
  (let ((display (:internal-current-display)))
    (#:display:assert-current 'max-line-style display)
    (send 'make-line-style display width style)))


(#:display:defun make-graph-env ((display display) (font font)
				 (line-style line-style) (pattern pattern)
				 (mode mode) (fg color) (bg color) . window)
  (let ((graph-env (#:graph-env:make)))
    (#:graph-env:font graph-env font)
    (#:graph-env:line-style graph-env line-style)
    (#:graph-env:pattern graph-env pattern)
    (#:graph-env:mode graph-env mode)
    (#:graph-env:foreground graph-env fg)
    (#:graph-env:background graph-env bg)
    (if window
	(send 'make-graph-env display graph-env (car window))
      (send 'make-graph-env display graph-env))
    (#:display:graph-envs display
			  (nconc1 (#:display:graph-envs display) graph-env))
    graph-env))


(#:display:defun kill-graph-env ((graph-env graph-env))
  (let ((display (#:graph-env:display graph-env)))
    (#:display:graph-envs display
			  (delq graph-env (#:display:graph-envs display)))
    (send 'kill-graph-env display graph-env)
  t))


(#:display:defun kill-stipple ((stipple stipple))
  (let ((display (#:display:internal-current-display)))
    (#:stipple:assert 'kill-stipple stipple)
    (#:display:assert-current 'kill-stipple display)
    (send 'kill-stipple display stipple)
    (#:display:stipple-bitmaps display
			       (delq stipple
				     (#:display:stipple-bitmaps display)))
    ())))



(#:display:defun graph-env-set-clip ((graph-env graph-env) (x fix) (y fix)
				     (w fix) (h fix))
  (let ((display (#:graph-env:display graph-env)))
    (send 'graph-env-set-clip display graph-env x y w h)
    (#:graph-env:clip-x graph-env x)
    (#:graph-env:clip-y graph-env y)
    (#:graph-env:clip-w graph-env w)
    (#:graph-env:clip-h graph-env h)
    t))




;;;; Very useful for X11

(#:display:defun graph-env-set-clips ((graph-env graph-env) (n fix) (vx vector)
				      (vy vector) (vw vector) (vh vector))
  (let ((display (#:graph-env:display graph-env)))
    (send 'graph-env-set-clips display graph-env n vx vy vw vh)
     t))


(defun current-graph-env &nobind
  (selectq (arg)
	   (0
	    (#:display:assert 'current-graph-env
			      (#:display:internal-current-display))
	    (#:display:graph-env (#:display:internal-current-display)))
	   (1
	    (#:graph-env:assert 'current-graph-env (arg 0))
	    (#:display:graph-env (#:graph-env:display (arg 0)) (arg 0))
	    (setq #:graph-env:current-graph-env (arg 0)))
	   (t
	    (error 'current-graph-env 'errwna (arg)))))



;;;
;;; Changes values in a graph-env. Some arguments may be null.

(#:display:defun graph-env-change-values ((graph-env graph-env) font mode
					  pattern line-style fg bg)
  (let ((display (#:graph-env:display graph-env)))
    (send 'graph-env-change-values display graph-env
	  font mode pattern line-style fg bg)))


(#:display:defun graph-env-subwindow-mode ((graph-env graph-env) (value fix))
  ;;; Set the subwindow mode of the GRAPH-ENV
  ;;; VALUE is an integer :
  ;;; 0 (Clip By children when drawing in a window)
  ;;; 1 Draw also in subwindow
  ;;; This function is useful only for X windows
   (let ((display (#:graph-env:display graph-env)))
    (#:display:assert 'graph-env-subwindow-mode display)
    (send 'graph-env-subwindow-mode display graph-env value)
    t))


;;;
;;; Returns a list of fonts which name matches a given pattern.
;;; Maximum number of returned fonts will be MAXNAMES
;;; Font names must match pattern PATTERN with wildcard '*' or '?'

(#:display:defun display-get-font-names ((display display) (maxnames fix) . r)
  (let ((pattern (if r (car r) "*")))
    (#:string:assert 'display-get-font-names pattern)
    (send 'get-font-names display maxnames pattern)))


(#:display:defun display-get-font-info
		 ((display display) (fontname string) . font-info)
  ;;; Returns a structure FONT-INFO containing information
  ;;; about font FONTNAME
  ;;; return () if fontname does'nt exist
 (setq font-info (or (car font-info) (#:font-info:make)))
 (unless (typep font-info '#:font-info)
	 (error 'display-get-font-info ':not-a-valid-argument font-info))
 (fillvector font-info 0 () (vlength font-info))
 (send 'get-font-info display fontname font-info))
