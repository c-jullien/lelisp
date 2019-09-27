;;;
;;; VDT:  a simple "worm" demo.
;;;
;;; $Source: /usr/cvs/lelisp/llib/vdt.ll,v $
;;; $Date: 2016/05/21 10:36:06 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


(unless (>= (version) 15.2)
        (error 'load 'erricf 'vdt))


;;; Small demo of the virtual terminal (VIRTTY) and:
;;;   - use of TYS
;;;   - avoid GCs
;;;   - speed independent of the size of the worm
 
(defun vdt ()
  (let ((dir 'r)              ; symbolic worm's direction
	(lobst)               ; list of obstacles
	(path)                ; worm's path
	(opath)               ; previous worm's path
	(wlength)             ; worm's size
	(x (div (tyxmax) 2))  ; curent position of 
	(y (div (tyymax) 2))  ;    the head
	(xy)                  ; packed current position
	(neck)                ; position of the worm's neck
	(score 0)             ; units of the score
	(tscore 0))           ; thousands of the score
    ;;
    ;; 1) draw the frame
    ;;
    (typrologue)
    (tycls)
    (tyattrib ())
    (tyco 10 0 '#"***   V . D . T .   ***     Score :")
    (tycursor 0 1)
    (repeat (tyxmax) (tyo #/_))
    (tycursor 0 (tyymax))
    (repeat (tyxmax) (tyo #/_))
    (let ((y 1))
      (repeat (tyymax)
	      (tyco 0 y #/|)
	      (tyco (tyxmax) y #/|)
	      (incr y)))
    ;;
    ;; 2) build the worm and the obstacles.
    ;;
    (repeat (setq wlength 5)
	    (newl path (+ (* y 128) (incr x))))
    (mapc (lambda (x y)
	    (newl lobst (+ (* y 128) x))
	    (tyco x y #/X))
	  (list 10 10 (- (tyxmax) 10) 
		(- (tyxmax) 10) (div (tyxmax) 2))
	  (list 5 (- (tyymax) 5) 5 (- (tyymax) 5) 
		(div (tyymax) 2)))
    ;;
    ;; 3) the main loop
    ;;
    ;; wait .. to be prepared
    (tyflush)
    (repeat 10 (gc))
    (untilexit vdt
	       ;; decode command
               (selectq (tys)
                  ((#/s #/h #:tty:left)  (if (neq dir 'r) (setq dir 'l)))
                  ((#/f #/l #:tty:right) (if (neq dir 'l) (setq dir 'r)))
                  ((#/c #/j #:tty:down)  (if (neq dir 'u) (setq dir 'd)))
                  ((#/e #/k #:tty:up)    (if (neq dir 'd) (setq dir 'u)))
                  (#^C (exit vdt))
                  (())
                  (t (tybeep)))
	       ;; erease the tail
               (setq opath path)
               (tyco (rem (car path) 128)
                     (div (nextl path) 128)
                     #/  )
	       ;; create a new obstacle
               (when (= (rem score 100) 99)
                     (newl lobst (car opath))
                     (tyco (rem (car opath) 128)
                           (div (car opath) 128)
                           #/X  ))
	       ;; compute the new position
               (selectq dir
                  (l (decr x) (when (<= x 0)        (exit vdt)))
                  (r (incr x) (when (>= x (tyxmax)) (exit vdt)))
                  (u (decr y) (when (<= y 1)        (exit vdt)))
                  (d (incr y) (when (>= y (tyymax)) (exit vdt)))
                  (t ()))
	       ;; grow ?
               (when (= (rem score 20) 10)
                     (newl path (car opath))
                     (tycursor 60 0)
                     (tyod (incr wlength) 3))
	       ;; test the end of the game
               (setq xy (+ (* y 128) x))
               (when (or (memq xy path) (memq xy lobst))
                     (exit vdt))
	       ;; add without CONS
               (setq neck (last path))
               (rplacd neck (rplac opath xy ()))
	       ;; display head 
               (tyco (rem (car neck) 128) (div (car neck) 128) #/o)
               (tyco x y #/@)
	       ;; display score without CONS
               (when (>= (incr score) 1000)
                     (setq score 0)
                     (tycursor 50 0)
                     (tyod (incr tscore) 3))
               (tycursor 53 0)
               (tyod score 3)
	       ;; compute the wait
               (when (< wlength 150)
                     (repeat 1000)
                     (when (< wlength 100)
                           (repeat 2000)
                           (when (< wlength 50)
                                 (repeat 5000)
                                 (when (< wlength 20)
                                       (repeat 10000)
                                       (when (< wlength 10)
                                             (repeat 20000)))))))
    ;; don't erase the score.
    (tyco 0 (1- (tyymax)) '#"Crashhhh... "))
  (tyflush)
  (print)
  'vdt)))))
 
;;;
;;; Collect the space of this demo
;;;

(defun vdtend ()
  (mapc 'remfn '(vdt vdtend))
  (libautoload vdt vdt))

 

