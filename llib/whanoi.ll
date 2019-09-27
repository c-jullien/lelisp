;;;
;;; WHANOI:  The Hanoi Tower, a simple demo of the redisplayscreen.
;;;
;;; $Source: /usr/cvs/lelisp/llib/whanoi.ll,v $
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
        (error 'load 'erricf 'whanoi))

(defvar #:sys-package:colon 'whanoi)

;;; This demo shows the asynchronous redisplay facility
;;; of the virtual TTY (the redisplayscreen function).

;;;
;;; Global objects
;;;

(defstruct needle
     (name         "")		; the symbolic name
     (xpos         0)		; the x-position
     (disks        ()))		; the ordered set of disks.

(defvar :tyxmax+1 0)		; precomputed sizes
(defvar :tyymax+1 0)		; precomputed sizes
(defvar :nsdpy    0)		; nb of redisplayscreens
(defvar :nmv      0)		; nb of moves
(defvar :nscreen  "")		; new screen
(defvar :oscreen  "")		; old screen


;;;
;;; Auxiliary functions
;;;


(defun :coord (x y) 
  ;; compute the coordinates of the point <x> <y>
  (add (mul :tyxmax+1 y) x))


(defun :redisplay ()
  ;; redisplay the screen.
  (redisplayscreen :nscreen :oscreen :tyxmax+1 :tyymax+1)
  (incr :nsdpy)
  ;; to actually see the content of the screen
  (tyflush))


(defun :xystring (x y string)
  ;; fill <:nscreen> from the point <x> <y> with <string>
  (bltstring :nscreen (:coord x y) string))


(defun :xycn (x y cn)
  ;; set the point <x> <y> of <:nscreen>  with <cn>
  (setf (sref :nscreen (:coord x y)) cn))


(defun :xynb (x y nb)
  ;; fill <:nscreen> from the point <x> <y> with the number <nb>
  ;; on 3 characters, right justified.
  (:xynb-aux nb (add (:coord x y) 3)))

(defun :xynb-aux (nb position)
  (when (ge nb 10)
	(:xynb-aux (div nb 10) (sub1 position)))
  (setf (sref :nscreen position) (add #/0 (rem nb 10))))
				 
	
(defun :disk (n)
  ;; return the disk number <n>.
  (vref  #["          |          "     ; 0 = no disk
	   "         =|=         "
	   "        ==|==        "
	   "       ===|===       "
	   "      ====|====      "
	   "     =====|=====     "
	   "    ======|======    "
	   "   =======|=======   "
	   "  ========|========  "
	   " =========|========= "
	   "/////////////////////"     ; 10 = ground
	   "                     "]    ; 11 = to erase 
	n))


;;;
;;; The main functions
;;;


(defun whanoi nb-of-disks
  ;; with an optional argument
  (if (consp nb-of-disks)
      (setq nb-of-disks (car nb-of-disks))
      (progn
	(prinflush "How many disks")
	(setq nb-of-disks (read))))
  (unless (fixp nb-of-disks)
	  (error 'hanoi 'errnia nb-of-disks))
  (unless (and (ge nb-of-disks 0) (lt nb-of-disks 10))
	  (error 'hanoi 'erroob nb-of-disks))
  (setf :nsdpy 0)
  (setf :tyxmax+1 (add1 (tyxmax)))
  (setf :tyymax+1 (add1 (tyymax)))
  (let ((a1 (#:needle:make))
	(a2 (#:needle:make))
	(a3 (#:needle:make)))
    (setf (#:needle:name a1) "<A1>")
    (setf (#:needle:name a2) "<A2>")
    (setf (#:needle:name a3) "<A3>")
    (setf (#:needle:xpos a1) 2)
    (setf (#:needle:xpos a2) 27)
    (setf (#:needle:xpos a3) 52)
    (setf (#:needle:disks a1)
	  (let ((nb nb-of-disks)
		(ld (ncons 10)))
	    (repeat nb (newl ld nb) (setq nb (sub1 nb)))
	    ld))
    (setf (#:needle:disks a2) (ncons 10))
    (setf (#:needle:disks a3) (ncons 10))
    (setf :nmv 0)
    (setf :oscreen (makestring (:coord  0 :tyymax+1) #\sp))
    (setf :nscreen (makestring (:coord  0 :tyymax+1) #\sp))
    (let ((rt (runtime)))
      (typrologue)
      (tycls)
      (:xystring 30 1 "Hanoi Towers")
      (:display a1)
      (:display a2)
      (:display a3)
      (:engine nb-of-disks a1 a3 a2)
      (tyepilogue)
      (tyflush)
      (print "Number of redisplayscreen: " :nsdpy)
      (setq rt (/ (- (runtime) rt) 1000.))
      (print "Total time               : " rt)
      (print "Average time             : " (/ rt :nsdpy))
      'whanoi)))


(defun :engine (n dep arr int)
  ;; the Hanoi recursive engine.
  (when (gt n 0)
	(:engine (sub1 n) dep int arr)
	(:move n dep arr)
	(:engine (sub1 n) int arr dep)))


(defun :move (n dep arr)
  ;; move the disk <n> from <dep> to <arr>
  (:xynb     16 4 (incr :nmv))
  (:xystring 20 4 ": I move the disk ")
  (:xycn     38 4 (add n #/0))
  (:xystring 42 4 " from  ")
  (:xystring 48 4 (#:needle:name dep))
  (:xystring 52 4 "  to  ")
  (:xystring 58 4 (#:needle:name arr))
  (:up    n  (#:needle:xpos dep) (sub 10 (length (#:needle:disks dep))))
  (:horiz n  (#:needle:xpos dep) (#:needle:xpos arr))
  (:down  n  (#:needle:xpos arr) (sub 10 (length (#:needle:disks arr))))
  (tyflush)
  ;; use the same CONS
  (let ((ld (#:needle:disks dep)))
    (setf (#:needle:disks dep) (cdr ld))
    (setf (#:needle:disks arr)
	  (prog1 ld
	         (rplacd ld (#:needle:disks arr))))))


;;;
;;; Display function
;;;

(defun :display (a)
  ;; display a full needle.
  (let ((name (#:needle:name a))
	(x    (#:needle:xpos a))
	(y    21)
	(ld   (reverse (#:needle:disks a))))
    (repeat 10
	    (:xystring x (setq y (sub1 y)) (:disk (or (nextl ld) 0))))
    (:xystring (add x 9) 21 name)
    (:redisplay)))


;;;
;;; How to move a disk
;;;

(defun :up (n x nb)
  ;; up the disk <n> at <x>, <nb> times.
  (let ((y (add nb 10)))
    (repeat (add1 nb)
	    (:xystring x y (:disk n))
	    (:xystring x (add1 y) (:disk 0))
	    (:redisplay) 
	    (setq y (sub1 y)))))


(defun :down (n x nb)
  ;; down the disk <n> at <x>,  <nb> times.
  (let ((y 11))
    (:xystring x 10 (:disk 11))
    (repeat (sub1 nb)
	    (:xystring x y (:disk 0))
	    (:xystring x (setq y (add1 y)) (:disk n))
	    (:redisplay))))


(defun :horiz (n x1 x2)
  ;; move horizontaly the disk <n> from <x1> to <x2>
  (if (gt x1 x2)
      (repeat (sub x1 x2) 
	      (:xystring (setq x1 (sub1 x1)) 10 (:disk n))
	      (:redisplay))
      (repeat (sub x2 x1) 
	      (:xystring (setq x1 (add1 x1)) 10 (:disk n))
	      (:redisplay))))


;;;
;;; Collect the space of this demo
;;;

(defun whanoiend ()
  (mapc 'remob (oblist '#.#:sys-package:colon))
  (libautoload whanoi whanoi)
  'whanoiend)
