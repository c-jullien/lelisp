;;;
;;; VIRMENU:  Virtual Bitmap Menus Manager
;;;
;;; $Source: /usr/cvs/lelisp/llib/virmenu.ll,v $
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
        (error 'load 'erricf 'virbitmap))

(setq #:sys-package:colon 'menu)


(defun :itemlist (name active items)
  (let ((res (:itemlist:make)))
    (:itemlist:name res name)
    (:itemlist:active res active)
    (:itemlist:items res items)
    res))

(defun :item (name active value)
  (let ((res (:item:make)))
    (:item:name res name)
    (:item:active res active)
    (:item:value res value)
    res))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(#:display:defun create-menu (title . values)
  ;;; Creates a menu with title TITLE
  ;;; and items specified by the list VALUES
  ;;;
  (when title (setq title (string title))) ;; ensures a string
  (#:display:assert-current 'create-menu (#:display:internal-current-display))
  (let ((menu (#:menu:make))
	(i -1))
    (#:menu:display menu (#:display:internal-current-display))
    (#:menu:title menu title)
    (setq menu (send 'create-menu (#:menu:display menu) menu))
    (#:menu:display menu (#:display:internal-current-display))
    (#:menu:title menu title)
    (#:display:menus (#:display:internal-current-display) 
		     (nconc1 (#:display:menus 
			      (#:display:internal-current-display)) menu))
    (menu-insert-item-list menu 0 title 1)
    (while values
      (menu-insert-item menu 0 (incr i)
			(nextl values) 1 (nextl values)))
    menu))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(#:display:defun kill-menu ((menu menu))
  (let ((d (#:menu:display menu)))
    (#:display:assert 'kill-menu d)
    (send 'kill-menu d menu)
    (#:display:menus d (delq menu (#:display:menus d)))
    (#:menu:extend menu ())
    (#:menu:display menu ())))


(#:display:defun activate-menu ((menu menu) (x fix) (y fix))
   ;;; Activate the menu MENU at position (X,Y) 		 
  (let ((d (#:menu:display menu)))  
    (#:display:assert 'activate-menu d)
    (with ((current-display d))
	  (send 'activate-menu d menu x y))))


(#:display:defun menu-insert-item-list ((menu menu) choix name active)
  (let ((d (#:menu:display menu)))  
    (#:display:assert 'menu-insert-item-list d)
    (:itemlists menu
		(insertnth choix (:itemlists menu) (:itemlist name active ())))
    (send 'menu-insert-item-list d menu choix name active)))


(#:display:defun menu-insert-item ((menu menu) choix index name active value)
  (let ((d (#:menu:display menu)))  
    (#:display:assert 'menu-insert-item d)
    (let ((il (nth choix (:itemlists menu))))
      (when il
	    (:itemlist:items il (insertnth index
					   (:itemlist:items il)
					   (:item name active value)))))
    (send 'menu-insert-item d menu choix index name active value)))


(#:display:defun menu-delete-item-list ((menu menu) choix)
  (let ((d (#:menu:display menu)))  
    (#:display:assert 'menu-delete-item-list d)
    (:itemlists menu (deletenth choix (:itemlists menu)))
    (send 'menu-delete-item-list d menu choix)))


(#:display:defun menu-delete-item ((menu menu) choix index)
  (let ((d (#:menu:display menu)))  
    (#:display:assert 'menu-delete-item d)
    (let ((il (nth choix (:itemlists menu))))
      (when il
	    (:itemlist:items il (deletenth index (:itemlist:items il)))))
    (send 'menu-delete-item d menu choix index)))


(#:display:defun menu-modify-item-list ((menu menu) choix name active)
  (let ((d (#:menu:display menu)))  
    (#:display:assert 'menu-modify-item-list d)
    (let ((il (nth choix (:itemlists menu))))
      (when il
	    (when name (:itemlist:name il (string name)))
	    (when active (:itemlist:active il active))))
    (send 'menu-modify-item-list d menu choix name active)))


(#:display:defun menu-modify-item ((menu menu) choix index name active value)
  (let ((d (#:menu:display menu)))  
    (#:display:assert 'menu-modify-item d)
    (let ((il (nth choix (:itemlists menu)))
	  item
	  )
      (when il
	    (setq item (nth index (:itemlist:items il)))
	    (when name (:item:name item (string name)))
	    (when active (:item:active item active))
	    (when value (:item:value item value))))
    (send 'menu-modify-item d menu choix index name active value)))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;; Utilities
;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

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

