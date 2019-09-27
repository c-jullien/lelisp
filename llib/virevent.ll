;;;
;;; VIREVENT:  Virtual Bitmap, event manager.
;;;
;;; $Source: /usr/cvs/lelisp/llib/virevent.ll,v $
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
        (error 'load 'erricf 'virbitmap))

(eval-when (eval)
	   (unless (getdef '#:display:defun)
		   (libload "virmacros.ll")))

(setq #:sys-package:colon 'mouse)

;;;
;;; New events are :  unmap-window, map-window, client-message-code,
;;;  visibility-change
;;; These Global Variables Are really DOCUMENTED
;;;

(defvar #:mouse:event
  (if (boundp '#:mouse:event)
      #:mouse:event
    (#:event:make)))

(defvar #:mouse:event-mode
  (if (boundp '#:mouse:event-mode)
      #:mouse:event-mode
    0))

(defvar #:mouse:x
  (when (boundp '#:mouse:x)
	#:mouse:x))

(defvar #:mouse:y
  (when (boundp '#:mouse:y)
	#:mouse:y))

(defvar #:mouse:state
  (when (boundp '#:mouse:state)
	#:mouse:state))

(defvar #:event:code
  (when (boundp '#:event:code)
	#:event:code))

(defvar #:event:x)

(defvar #:event:y)



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defun which-window ()
  (#:display:assert-current 'which-window (#:display:internal-current-display))
  (#:event:window (read-mouse)))


(defun parse-event (event)
  ;;
  ;; Puts information of the event EVENT in Global variables
  ;;
  (setq #:event:x (#:event:gx event))
  (setq #:event:y (#:event:gy event))
  (setq #:event:code (selectq (#:event:code event)
			      (ascii-event (#:event:detail event))
			      ((move-event up-event) 257)
			      ((down-event drag-event) 258)
			      (t 256))))


(defun parse-mouse (event)
  (setq #:mouse:x (#:event:gx event))
  (setq #:mouse:y (#:event:gy event))
  (setq #:mouse:state (#:event:detail event)))




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;
;;; Who still uses that ?
;;; Today every window can choose its own events
;;;

(defun event-mode &nobind
  (when (#:display:internal-current-display)
	(if (eq (arg) 0) 
	    (#:display:eventmode (#:display:internal-current-display))
	    (send 'event-mode (#:display:internal-current-display) (arg 0))
            (setq #:mouse:event-mode 
                  (#:display:eventmode 
		   (#:display:internal-current-display) (arg 0))))))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun eventp ()
  ;; Returns True if there are pending events
  ;; () other way
  ;; But doesn't wait
  (when (#:display:internal-current-display)
	(send 'eventp (#:display:internal-current-display))))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun read-event &nobind
  ;; This blocks until there is a  event and returns it after flush
  ;; it from the queue of Le-Lisp DISPLAY or the real queue of the system
  (when (#:display:internal-current-display)
	(let ((event (if (eq (arg) 1) (arg 0) #:mouse:event)))
	  (send 'read-event (#:display:internal-current-display) event)
	  (parse-event event)
	  event)))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun peek-event &nobind
  ;; This blocks until there is a valid event and returns it .
  ;; this function lets the event in the queue
  (when (#:display:internal-current-display)
	(let ((event (if (eq (arg) 1) (arg 0) #:mouse:event)))
	  (send 'peek-event (#:display:internal-current-display) event)
	  (parse-event event)
	  event)))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun local-read-event ()
  ;; Be Careful '#:event:x and '#:event:y are used in C as Pointers
  ;; of int values
  (when (#:display:internal-current-display)
	(read-event #:mouse:event)
	(map-window (current-window)
		    #:event:x #:event:y '#:event:x '#:event:y)))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun flush-event ()
  (when (#:display:internal-current-display)
	(send 'flush-event (#:display:internal-current-display))))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun add-event &nobind
  (when (#:display:internal-current-display)
	(cond ((eq (arg) 1)
	       (send 'add-event (#:display:internal-current-display) (arg 0)))
	      ((eq (arg) 3)
	       (#:event:gx #:mouse:event (arg 0))
	       (#:event:gy #:mouse:event (arg 1))
	       (#:event:code #:mouse:event (arg 2))
	       (send 'add-event
		     (#:display:internal-current-display) #:mouse:event)))))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defun grab-event (window)
  ;; This really Grabs the pointer to window WINDOW. 
  ;; So the side effect is global to all users of the system (in X11)
  ;; Must be followed by a Call to UNGRAB-EVENT
  (if (windowp window)
      (progn (#:window:assert 'grab-event window)
	     (send 'grab-event (#:window:display window) window)
	     window)
      (when (#:display:internal-current-display)
	    (send 'ungrab-event (#:display:internal-current-display))
	    ())))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun ungrab-event ()
  (when (#:display:internal-current-display)
	(send 'ungrab-event (#:display:internal-current-display))))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(de itsoft-event ()
    (when (#:display:internal-current-display)
          (send 'itsoft-event (#:display:internal-current-display))))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun read-mouse &nobind
  ;; Just read the coordinates of the mouse and
  ;; return them as an event
  ;; The cost of this call is very important (in X11)
  (when (#:display:internal-current-display)
	(let ((event (if (eq (arg) 1) (arg 0) #:mouse:event)))
	  (send 'read-mouse (#:display:internal-current-display) event)
	  (parse-mouse event)
	  event)))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;                                  TOOLS                                      ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(#:display:defun allow-event ((display display) (event symbol))
  (send 'allow-event display event)
  event
  )


(#:display:defun disallow-event ((display display) (event symbol))
  (send 'disallow-event display event)
  event
  )


(#:display:defun allowed-event-p ((d display) (event symbol))
  (when (send 'allowed-event-p d event)
	event))



;;;
;;; List of methods to be defined :

(#:display:define-default-method event-mode)
(#:display:define-default-method eventp)
(#:display:define-default-method read-event)
(#:display:define-default-method peek-event)
(#:display:define-default-method flush-event)
(#:display:define-default-method add-event)
(#:display:define-default-method grab-event)
(#:display:define-default-method ungrab-event)
(#:display:define-default-method isoft-event)
(#:display:define-default-method allow-event)
(#:display:define-default-method disallow-event)
(#:display:define-default-method allowed-event-p)
(#:display:define-default-method read-mouse)
