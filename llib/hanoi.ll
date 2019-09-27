;;;
;;; HANOI:  The Hanoi Tower, a simple demo of the virtual TTY.
;;;
;;; $Source: /usr/cvs/lelisp/llib/hanoi.ll,v $
;;; $Date: 2016/05/21 10:36:05 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


(unless (>= (version) 15.2)
        (error 'load  'erricf 'hanoi))

(defvar #:sys-package:colon 'hanoi)

;;;
;;; Global objects
;;;

(defstruct needle
     (name         "")		; the symbolic name
     (xpos         0)		; the x-position
     (disks        ()))		; the ordered set of disks.

(defvar  :nmv 0)		; nb of moves.


;;;
;;;
;;;

(defun :disk (n)
  ;; returns the disk number <n>.
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


(defun hanoi nb-of-disks
  ;; the top-level function
  (if (consp nb-of-disks)
      (setq nb-of-disks (car nb-of-disks))
      (progn
	(prinflush "How many disks")
	(setq nb-of-disks (read))))
  (unless (fixp nb-of-disks)
	  (error 'hanoi 'errnia nb-of-disks))
  (unless (and (gt nb-of-disks 0) (lt nb-of-disks 10))
	  (error 'hanoi 'erroob nb-of-disks))
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
    (typrologue)
    (with ((tyshowcursor ()))
	  (tycls)
	  (tycot 30 1 '#"Hanoi Towers")
	  (:display a1)
	  (:display a2)
	  (:display a3)
	  (:engine nb-of-disks a1 a3 a2))
    (tyepilogue)
    (tyflush)
    'hanoi))


(defun :display (a)
  ;; display a full needle.
  (let ((name (#:needle:name a))
	(x    (#:needle:xpos a))
	(y    21)
	(ld   (reverse (#:needle:disks a))))
    (repeat 10
	    (tyco x (setq y (sub1 y)) (:disk (or (nextl ld) 0))))
    (tyco (add x 9) 21 name)))


(defun :engine (n dep arr int)
  ;; the Hanoi recursive engine.
  (when (gt n 0)
	(:engine (sub1 n) dep int arr)
	(:move n dep arr)
	(:engine (sub1 n) int arr dep))))


(defun :move (n dep arr)
  ;; performs a complete graphical move.
  (tycursor 18 5)
  (tyod (incr :nmv) 1)
  (tyco 22 5
	": I move the disk " (add #/0 n)
	" from " (#:needle:name dep)
        " to "   (#:needle:name arr))
  (:up    n (#:needle:xpos dep) (sub 10 (length (#:needle:disks dep))))
  (:horiz n (#:needle:xpos dep) (#:needle:xpos arr))
  (:down  n (#:needle:xpos arr) (sub 10 (length (#:needle:disks arr))))
  (tyflush)
  ;; use the same CONS
  (let ((ld (#:needle:disks dep)))
    (setf (#:needle:disks dep) (cdr ld))
    (setf (#:needle:disks arr)
	  (prog1 ld
	         (rplacd ld (#:needle:disks arr))))))


(defun :up (n x nb)
  ;; up the disk <n> in <x>,  <nb> times.
  (let ((y (add nb 10)))
    (repeat (add1 nb)
	    (tyco x y (:disk n))
	    (tyco x (add1 y) (:disk 0))
	    (setq y (sub1 y)))))


(defun :down (n x nb)
  ;; down the disk <n> in <x>,  <nb> times.
  (let ((y 11))
    (tyco x 10 (:disk 11))
    (repeat (sub1 nb)
	    (tyco x y (:disk 0))
	    (tyco x (setq y (add1 y)) (:disk n))))))


(defun :horiz (n x1 x2)
  ;; move horizontally the disk <n> from <x1> to <x2>
  (let ((disk (:disk n)))
    (if (gt x1 x2)
	(repeat (sub x1 x2) (tyco (setq x1 (sub1 x1)) 10 disk))
        (repeat (sub x2 x1) (tyco (setq x1 (add1 x1)) 10 disk)))))

;;;
;;; Collect the space of this demo
;;;

(defun hanoiend ()
  (mapc 'remob (oblist '#.#:sys-package:colon))
  (libautoload hanoi hanoi)
  'hanoiend)



