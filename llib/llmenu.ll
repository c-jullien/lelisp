;;;
;;; MENU:  simple menus using the Virtual Bitmap.
;;;
;;; $Source: /usr/cvs/lelisp/llib/llmenu.ll,v $
;;; $Date: 2016/05/21 10:36:05 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


(defvar #:sys-package:colon '#:menu:llmenu)

(defstruct #:menu:llmenu
  name
  invertedx
  invertedy
  (itemlists ()))

(defstruct itemlist
  name
  active
  items)

(defun itemlist (name items)
  (let ((res (#:itemlist:make)))
    (#:itemlist:name res name)
    (#:itemlist:active res active)
    (#:itemlist:items res items)
    res))

(defstruct item
  name
  active
  value)

(defun item (name active value)
  (let ((res (#:item:make)))
    (#:item:name res name)
    (#:item:active res active)
    (#:item:value res value)
    res))

(defun #:bitmap:create-menu (menu)
  (let ((new (:make)))
    (bltvector new 0 menu (vlength menu))
    new))

(defun :kill-menu (menu))

(defun :activate-menu (menu x y)
  (:draw-menu menu x y)
  (:follow-mouse menu)
  (let (x y il item)
    (when (and (setq x (:invertedx menu))
	       (setq y (:invertedy menu))
	       (ge x 0)
	       (ge y 0)
	       (setq il (nth x (:itemlists menu)))
	       il
	       (setq item (nth y (#:itemlist:items il)))
	       item
	       (neq 0 (#:item:active item)))
	  (#:item:value item))))

(defun :height (menu)
  (mul (font-height)
       (apply 'max
	      (cons 0
		    (mapcar (lambda (il)
			      (length (#:itemlist:items il)))
			    (:itemlists menu))))))

(defun width-string (s)
  (width-substring s 0 (slen s)))

(defun #:itemlist:width (il)
  (ifn (consp (#:itemlist:items il)) 0
       (apply 'max
	      (mapcar (lambda (it)
			(width-string (#:item:name it)))
		      (#:itemlist:items il)))))

(defun :width (menu)
  (apply '+
	 (mapcar '#:itemlist:width
		 (:itemlists menu))))

(defun :draw-menu (menu x y)
  (let* ((w (:width menu))
	 (h (:height menu))
	 (window (create-window 'window
				(sub x (div w 2))
				y
				w h
				(:name menu) 1 1))
	 (x (x-base-space))
	 (y (font-ascent)))
    (#:menu:extend menu window)
    (with ((current-window window))
	  (mapc (lambda (il)
		  (mapc (lambda (it)
			  (draw-string x y (#:item:name it))
			  (setq y (+ y (font-height))))
			(#:itemlist:items il))
		  (setq y (font-ascent))
		  (setq x (add x (#:itemlist:width il))))
		  (:itemlists menu)))))

(defun :find-list (menu x)
  (:find-list1 (:itemlists menu) x 0))

(defun :find-list1 (ils x res)
  (cond ((lt x 0) ())
	((null ils) ())
	((lt x (#:itemlist:width (car ils)))
	 res)
	(t
	 (:find-list1 (cdr ils)
		      (sub x (#:itemlist:width (car ils)))
		      (add1 res)))))

(defun :itemlist-x (menu x)
  (:itemlist-x1 x (:itemlists menu)))

(defun :itemlist-x1 (x ils)
  (if (eq x 0) 0
    (add (#:itemlist:width (car ils))
	 (:itemlist-x1 (sub1 x) (cdr ils)))))

(defun :invert-item (menu x y)
  (let (il item)
    (when (and x y
	       (setq il (nth x (:itemlists menu)))
	       (neq 0 (#:itemlist:active il))
	       (setq item (nth y (#:itemlist:items il)))
	       (neq 0 (#:item:active item)))
	  (let ((rx (:itemlist-x menu x))
		(ry (mul y (font-height)))
		(rw (#:itemlist:width il))
		(rh (font-height)))
	    (fill-rectangle rx ry rw rh)))))

(defvar :local-read-mouse:x
  (if (boundp ':local-read-mouse:x)
      :local-read-mouse:x
    0))

(defvar :local-read-mouse:y
  (if (boundp ':local-read-mouse:y)
      :local-read-mouse:y
    0))

(defvar :local-read-mouse:event
  (if (boundp ':local-read-mouse:event)
      :local-read-mouse:event
    #:event:#[0 0 0 0 0 0 0 0 0]))

(defun :local-read-mouse ()
  (read-mouse :local-read-mouse:event)
  (map-window (current-window)
	      (#:event:gx :local-read-mouse:event)
	      (#:event:gy :local-read-mouse:event)
	      ':local-read-mouse:x
	      ':local-read-mouse:y)
  (#:event:window :local-read-mouse:event ())
  (#:event:x :local-read-mouse:event :local-read-mouse:x)
  (#:event:y :local-read-mouse:event :local-read-mouse:y)
  :local-read-mouse:event)
                                                     
(defun :follow-mouse (menu)
  (with ((current-window (#:menu:extend menu)))
	(with ((current-mode 6) (current-pattern 1))
	      (let ((ix ()) (iy ()) nx ny event)
		(ungrab-event)
		(while (progn (setq event (:local-read-mouse))
			      (neq 0 (#:event:detail event)))
		  (setq ny (div (#:event:y event) (font-height))
			nx (:find-list menu (#:event:x event)))
		  (when (or (neq nx ix) (neq ny iy))
			(:invert-item menu ix iy)
			(setq ix nx iy ny)
			(:invert-item menu ix iy)))
		(:invertedx menu ix)
		(:invertedy menu iy))))
  (kill-window (#:menu:extend menu))
  (#:menu:extend menu ()))

(defun :menu-insert-item (menu choix index name active value)
  (let ((il (nth choix (:itemlists menu))))
    (when il
	  (#:itemlist:items il
			    (insertnth index
				       (#:itemlist:items il)
				       (item name active value))))))

(defun :menu-insert-item-list (menu choix name active)
  (:itemlists menu
	      (insertnth choix (:itemlists menu) (itemlist name active))))

(defun :menu-delete-item-list (menu choix)
  (:itemlists menu (deletenth choix (:itemlists menu))))

(defun :menu-delete-item (menu choix index)
  (let ((il (nth choix (:itemlists menu))))
    (when il
	  (#:itemlist:items il
			    (deletenth index (#:itemlist:items il))))))
    
(defun :menu-modify-item-list (menu choix name active)
  (let ((il (nth choix (:itemlists menu))))
    (when il
	  (when name (#:itemlist:name il (string name)))
	  (when active (#:itemlist:name il active)))))

(defun :menu-modify-item (menu choix index name active value)
  (let ((il (nth choix (:itemlists menu))))
    (when il
	  (let ((item (nth index il)))
	    (when name (#:item:name item (string name)))
	    (when active (#:item:name item active))
	    (when value (#:item:name item value))))))

(defun deletenth (n l)
  (cond ((atom l) l)
	((eq n 0) (cdr l))
	(t
	 (rplacd l (deletenth (sub1 n) (cdr l))))))

(defun insertnth (n l i)
  (cond ((atom l) (cons i l))
	((eq n 0) (cons i l))
	(t
	 (rplacd l (insertnth (sub1 n) (cdr l) i)))))

