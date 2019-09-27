(defvar #:sys-package:colon '#:display:x11)


(defmessage errnomorecolors
  (french "plus de couleurs disponibles")
  (english "no more colours available"))
              ;;;a^ ;colors pour les americains!



(unless (boundp ':grey4-colors)
	(defvar :grey4-colors
	  '("grey" "lightgrey")))

(unless (boundp ':grey12-colors)
	(defvar :grey12-colors
	  '("grey" "lightgrey" "grey20" "grey30"
	    "grey40" "grey50" "grey60" "grey70" "grey80"
	    "grey90")))


(unless (boundp ':default-colors)
	(defvar :default-colors
	  '("red" "green" "blue" "yellow" "cyan"
	    "magenta" "grey" "lightgrey")))

(unless (boundp ':color24-colors)
	(defvar :color24-colors
	  '("red" "pink" "firebrick"
	    "green" "palegreen" "forestgreen"
	    "blue" "lightsteelblue" "navyblue"
	    "yellow" "mediumgoldenrod" "goldenrod"
	    "cyan" "turquoise" "mediumturquoise"
	    "magenta" "plum" "orchid"
	    "grey" "lightgrey" "grey30" "grey70" 
	    )))

(unless (boundp ':color49-colors)
	(defvar :color49-colors
	  '("red" "pink" "orange" 
	    "firebrick" "salmon" "indianred"
	    "green" "palegreen" "limegreen" 
	    "forestgreen" "mediumseagreen" "darkgreen"
	    "blue" "lightsteelblue" "mediumblue" 
	    "navyblue" "cornflowerblue" "midnightblue"
	    "yellow" "mediumgoldenrod" "wheat" 
	    "goldenrod" "khaki" "darkolivegreen"
	    "cyan" "turquoise" "lightblue"
	    "mediumturquoise" "cadetblue" "darkslateblue"
	    "magenta" "plum" "thistle" 
	    "orchid" "blueviolet" "violet"
	    "grey" "lightgrey" "grey10" "grey20" "grey30" "grey40"
	    "grey50" "grey60" "grey70" "grey80" "grey90"
	    )))


(defun :get-default (display name)
  ;; retrouve dans le .Xdefaults, la valeur associe'e a name.
  ;; les blancs en tete et en queue sont enleves.
  (let ((s (x11_get_default (:xdisplay display) (:display-class display) name))
	l)
    (while (and (gt (slen s) 0) (eq (sref s 0) #\SP))
      (setq s (substring s 1)))
    (while (and (gt (setq l (slen s)) 0) (eq (sref s (sub1 l)) #\SP))
      (setq s (substring s 0 (sub1 l))))
    s))


(defun :all-but-once (list)
  (when list (cons (car list) (remq (car list) (:all-but-once (cdr list))))))


(defun :init-color (display)
  (let ((forename (:get-default display "foreground"))
	(backname (:get-default display "background"))
	(lelispcolors (:get-default display "colors"))
	(lelispreversevideo (:get-default display "reversevideo"))
	(fore (#:color:make))
	(back (#:color:make))
	planemask)
    (when (eqstring forename "")
	  (setq forename "black"))
    (when (eqstring backname "")
	  (setq backname "white"))
    (when (eqstring lelispreversevideo "on")
	  (setq forename "white" backname "black"))
    (#:color:name fore forename)
    (#:color:display fore display)

    ;;;
    ;;; [ AA 13/05/93 ]
    ;;; Protect the code from non available default colors.
    ;;;
    (unless (catcherror t
                        (#:display:x11:make-named-color
                         display fore forename))
            (setq forename "black")
            (#:color:name fore forename)
            (#:display:x11:make-named-color
             display fore forename))
    (#:color:name back backname)
    (#:color:display back display)
    (unless (catcherror t
                        (#:display:x11:make-named-color
                         display back backname))
            (setq backname "white")
            (#:color:name back backname)
            (#:display:x11:make-named-color
             display back backname))
    (#:display:foreground display fore)
    (#:display:background display back)
    (#:display:colors display (list fore back))
    (setq planemask
	  (if (eq (#:color:extend fore) (#:color:extend back))
	      1
	    (:compute-mask (#:color:extend fore) (#:color:extend back) 1)))
    (#:display:colors 
     display
     (:all-but-once
      (append
       (#:display:colors display)
       (mapcan (lambda (c) (catcherror
			    () 
			    (let ((color (#:color:make)))
			      (#:color:display color display)
			      (#:color:name color c)
			      (:make-named-color display color c))))
	       (selectq lelispcolors
			(("" "standard" "color10") :default-colors)
			("none" ())
			(("grey4" "grey") :grey4-colors)
			(("grey12" "shade"):grey12-colors)
			(("color24" "basic") :color24-colors)
			(("color49" "extended") :color49-colors))))))
    (x11_init_pixels
     (:xdisplay display)
     (#:color:extend fore) (#:color:extend back) planemask)
    (if (neq 0 (logand (#:color:extend fore) planemask))
	(:mode-vector display #[0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15])
      (:mode-vector display #[15 7 11 3 13 5 9 1 14 6 10 2 12 4 8 0]))))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; les couleurs ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(unless (boundp ':rgb) (defvar :rgb #[() () ()]))

(defun :make-color (display color r g b)
  (let ((c (x11_make_color (:xdisplay display) r g b :rgb)))
    (when (eq c -1)
	  (error ':make-color 'errnomorecolors (list r g b)))
    (:do-color display color c :rgb)))


(defun :make-mutable-color (display color r g b)
  (vset :rgb 0 r)
  (vset :rgb 1 g)
  (vset :rgb 2 b)
  (let ((c (x11_make_mutable_color (:xdisplay display) r g b)))
    (when (eq c -1)
	  (error ':make-mutable-color 'errnomorecolors (list r g b)))
    (:do-color display color c :rgb)))


(defun :make-named-color (display color s)
  (let ((c (x11_make_named_color (:xdisplay display) s :rgb)))
    (when (eq c -1)
	  (error ':make-named-color '#:display:errnotacolor s))
    (when (eq c -2)
	  (error ':make-named-color 'errnomorecolors s))
    (:do-color display color c :rgb)))


(de :do-color (display color xcolor rgb)
    (or (any (lambda (c) (when (eq (:xcolor c) xcolor) c))
             (#:display:colors display))
        (progn
          (#:color:red color (vref rgb 0))
          (#:color:green color (vref rgb 1))
          (#:color:blue color (vref rgb 2))
          (:xcolor color xcolor)
          color)))


;;;
;;; Kills a color.
;;; Does nothing in a b/w display.

(defun :kill-color (display c)
  (when (gt (:depth display) 1)
	(x11_kill_color (:xdisplay display) (:xcolor c))))


(de :red-component (display color red)
    (x11_color_component (:xdisplay display) (:xcolor color) 
                        red (#:color:green color) (#:color:blue color) 0))

(de :green-component (display color green)
    (x11_color_component (:xdisplay display) (:xcolor color) 
                        (#:color:red color) green (#:color:blue color) 1))

(de :blue-component (display color blue)
    (x11_color_component (:xdisplay display) (:xcolor color) 
                        (#:color:red color) (#:color:green color) blue 2))



(de :compute-mask (p1 p2 m)
    (if (neq (logand p1 m) (logand p2 m))
        m
        (:compute-mask p1 p2 (logshift m 1))))



;;;
;;; Given a color named NAME, returns the RGB values or () if it fails.

(defun :name-to-rgb (display name rgb)
  (when (eq (x11_lookup_named_color (:display-address display) name :rgb rgb)
	    0)
	rgb))



;;;
;;; Given a colored pixel value, returns corresponding RGB values.

(defun :get-rgb-values (display pixel rgb)
  (x11_query_color (:display-address display) pixel rgb)
  rgb)
