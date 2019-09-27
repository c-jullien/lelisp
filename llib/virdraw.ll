;;;
;;; VIRDRAW:  Virtual Bitmap Drwaing Functions
;;;
;;; $Source: /usr/cvs/lelisp/llib/virdraw.ll,v $
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

;;; use the module module #:display:dump

(defvar #:display:dumpdevice
  (if (boundp '#:display:dumpdevice) #:display:dumpdevice ()))

(defvar #:display:dumpsilent)

(defvar #:sys-package:colon 'display)


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; ALL DRAW FUNCTIONS USE :
;;;;;;;   the default display  (see CURRENT-DISPLAY)
;;;;;;;   in the DEFAULT WINDOW of the display (see current-window)
;;;;;;;   with the graphique envornment associated to the window
;;;;;;;        (see the field GRAPH-ENV of the window)
;;;;;;;   But in the FUTURE We 'll ADD the function (CURRENT-GRAPH-ENV)
;;;;;;;   which specifies or returns the CUREENT graphique envirnemnt
;;;;;;; So all X and Y coordinates are relatif the CURRENT WINDOW
;;;;;;; and GRAPHIC attributes are in the CURRENT GRAPHIQUE ENVIRNMENT
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


;;;
;;; (:define-draw XXX parms) defines functions :
;;;  - (XXX parms'...) when parms' is a simplified form of parms
;;;  - (#:display:XXX &nobind)
;;; parms is a parameter list (each can have a type) of function XXX.
;;; parms' is a parameter list under common form used in lelisp.
;;; Mentionned types generate corresponding call to :assert macro.
;;;
;;; Ex : (#:display:define-draw draw-cursor ((x fix) (y fix) state)) defines :
;;; (defun draw-cursor (x y state)
;;;     (#:fix:assert 'draw-cursor x)
;;;     (#:fix:assert 'draw-cursor y)
;;;     (let ((display (#:display:internal-current-display)))
;;;          (#:display:assert-current 'draw-cursor display)
;;;          (when (#:display:window display)
;;;                (send 'draw-cursor display
;;;                      (#:display:graph-env display) x y state))))
;;; (defun #:display:draw-cursor &nobind
;;;     (error 'draw-cursor '#:display:not-yet-inplemented (arg 0)))
;;;
;;; **** WARNING ! :define-draw also generates a call 
;;; to dump functions ( see virmacros.ll )



;;;
;;; Draw a line at position defined by X and Y
;;; This function use the default window and the default graphic environment
;;; environement associated to the window

(:define-draw draw-cursor ((x fix) (y fix) state))


;;;
;;; Draw a string S at position X,Y 
;;; draw only LENGTH caracters of the string begining at position START 

(:define-draw draw-substring
	      ((x fix) (y fix) (s string) (start fix) (length fix)))


;;;
;;; Draw a single character CN at position X,Y

(:define-draw draw-cn ((x fix) (y fix) (cn fix)))


;;; Default method
;;; Default method should be defined before using define-draw, which
;;; would define a default method if it does not exist.

(defun :draw-substring-nobackground (x y string len)
  (draw-substring x y string len))

(:define-draw-no-default draw-substring-nobackground
	      ((x fix) (y fix) (s string) (start fix) (length fix)))

;;;
;;; Draw a single character CN at position X,Y

;;; Default method

(defun :draw-cn-nobackground (x y cn)
  (draw-cn x y cn))

(:define-draw-no-default draw-cn-nobackground ((x fix) (y fix) (cn fix)))

;;;
;;; Draw a Point at position X,Y

(:define-draw draw-point ((x fix) (y fix)))


;;;
;;; Draw A set of points (numbered N)
;;; VX is the vector of  X coordinates and VY is the vector of Y coordinates

(:define-draw draw-polymarker ((n fix) (vx vector) (vy vector)))


;;;
;;; Draw a line from (X0,Y0) to (X1,Y1) relatif to the current WINDOW

(:define-draw draw-line ((x0 fix) (y0 fix) (x1 fix) (y1 fix)))

     
;;;
;;; Draw a POLYLINE defined by N points where VX represent the X coordinates
;;; and VY the vector of Y coordinates relatif
;;; to the current window

(:define-draw draw-polyline ((n fix) (vx vector) (vy vector)))


;;;
;;; Draws a rectangle at position (X,Y) of width W and height H

(:define-draw draw-rectangle ((x fix) (y fix) (w fix) (h fix)))


;;;
;;; Fills a rectangle with the current pattern using current mode

(:define-draw fill-rectangle ((x fix) (y fix) (w fix) (h fix)))


;;;
;;; Hilites a rectangle. That is : swaps current foreground and background
;;; inside it.

(:define-draw highlight-rectangle ((x fix) (y fix) (w fix) (h fix)))


;;;    
;;; Fills an area defined by N points (VX[i],VY[j])

(:define-draw fill-area ((n fix) (vx vector) (vy vector)))


;;;
;;; DRAWs an ellipse with center at position (X,Y) and semi axes (RX,RY)

(:define-draw draw-ellipse ((x fix) (y fix) (rx fix) (ry fix)))


;;;
;;; Fills an ellipse cenetered at (X,Y) with semi axes (RX,RY)

(:define-draw fill-ellipse ((x fix) (y fix) (rx fix) (ry fix)))


;;;
;;; Draws a circle with center at position (x, y) with radius R

(:define-draw draw-circle ((x fix) (y fix) (r fix)))


;;;
;;; Fills a circle cenetered at (x, y) with radius R

(:define-draw fill-circle ((x fix) (y fix) (r fix)))


;;;
;;; Draws an single circular or elliptique ARC centered at  (X,Y) 
;;; The arc is a part of the ellipse or circle of (rx = w) (ry = h)
;;; the ARC is drawn from angle ANGLE1 to angle ANGLE2 
;;; if ANGLE2 is greater than 360 degrees it 's truncated to 360 

(:define-draw draw-arc ((x fix) (y fix) (w fix) (h fix)
                        (angle1 fix) (angle2 fix)))


;;;
;;; Fills an arc (see before)

(:define-draw fill-arc ((x fix) (y fix) (w fix) (h fix) 
                        (angle1 fix) (angle2 fix)))


;;;
;;; Draws N segments defined by Points 
;;; (VX1[i],VY1[i]) and (VX2[i],VY2[i])

(:define-draw draw-segments
	      ((n fix) (vx1 vector) (vy1 vector) (vx2 vector) (vy2 vector)))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;                                  TOOLS                                 ;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(dmd draw-string (x y s)
     `(let ((#:graph-env:arg0 ,s))
	(draw-substring ,x ,y #:graph-env:arg0 0 (slen #:graph-env:arg0))))


;;; Multiple fills & draws functions not in :define-draw  because an error is
;;; not raised whenever their incarnation are undefined.

(defun draw-rectangles (n vx vy vw vh)
  ;; N is the number of rectangles to be drawn.
  ;; vx, vy, vw, vh can be either vectors or fix.
  (#:fix:assert 'draw-rectangles n)
  (unless (fixp vx)
	  (#:vector:assert 'draw-rectangles vx))
  (unless (fixp vy)
	  (#:vector:assert 'draw-rectangles vy))
  (unless (fixp vw)
	  (#:vector:assert 'draw-rectangles vw))
  (unless (fixp vh)
	  (#:vector:assert 'draw-rectangles vh))
  (let ((display (#:display:internal-current-display)))
    (#:display:assert-current 'draw-rectangles display)
    (when (#:display:window display)
	  (when :dumpdevice 
		(funcall '#:display:dump:draw-rectangles
			 display (#:display:graph-env display) 
			 n vx vy vw vh))
	  (send 'draw-rectangles display (#:display:graph-env display) 
		n vx vy vw vh))))


(defun fill-rectangles (n vx vy vw vh)
  ;; N is the number of rectangles to be drawn.
  ;; vx, vy, vw, vh can be either vectors or fix.
  (#:fix:assert 'fill-rectangles n)
  (unless (fixp vx)
	  (#:vector:assert 'fill-rectangles vx))
  (unless (fixp vy)
	  (#:vector:assert 'fill-rectangles vy))
  (unless (fixp vw)
	  (#:vector:assert 'fill-rectangles vw))
  (unless (fixp vh)
	  (#:vector:assert 'fill-rectangles vh))
  (let ((display (#:display:internal-current-display)))
    (#:display:assert-current 'fill-rectangles display)
    (when (#:display:window display)
	  (when :dumpdevice 
		(funcall '#:display:dump:fill-rectangles
			 display (#:display:graph-env display) 
			 n vx vy vw vh))
	  (send 'fill-rectangles display (#:display:graph-env display) 
		n vx vy vw vh))))


(defun #:display:draw-rectangles (d ge n vx vy vw vh)
  ;; Default method calls draw-rectangle
  (let (i)
    (for (i 0 1 (sub1 n))
	 (send 'draw-rectangle d ge
	       (if (fixp vx) vx (vref vx i))
	       (if (fixp vy) vy (vref vy i))
	       (if (fixp vw) vw (vref vw i))
	       (if (fixp vh) vh (vref vh i))
	       ))))


(defun #:display:fill-rectangles (d ge n vx vy vw vh)
  ;; Default method calls fill-rectangle
  (let (i)
    (for (i 0 1 (sub1 n))
	 (send 'fill-rectangle d ge
	       (if (fixp vx) vx (vref vx i))
	       (if (fixp vy) vy (vref vy i))
	       (if (fixp vw) vw (vref vw i))
	       (if (fixp vh) vh (vref vh i))
	       ))))
