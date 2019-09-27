(eval-when (eval)
	   (unless (getdef '#:display:x11:xbitmap)
		   (libload #u"X11/x11struct")))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; New Events are :
;;;;;;;;;;;;;;;      map-window unmap-window visibility-change client-message
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;; To receive this events we have to add them to the events-list of display
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defvar #:sys-package:colon '#:display:x11)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; fonctions sur les evenements ;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(de :event-mode (display mode))

(de :flush-event (display)
    (:reread display ())
    (x11_flush_event (:xdisplay display))
    (:events-in-socket display ()))

(de :eventp (display)
    (or (:reread display)
        (x11_eventp (:xdisplay display))
        (:events-in-socket display)))


(defun :read-event (display event)
  (if (:reread display)
      (let ((rereadevent (car (:reread display))))
	(:reread display (cdr (:reread display)))
	(bltvector event 0 rereadevent 0))
    (fillvector event 0 ())
    (x11_read_event (:xdisplay display) event)
    (:parse-event display event t))
  event))


(defun :peek-event (display event)
  (if (:reread display)
      (bltvector event 0 (car (:reread display)) 0)
    (fillvector event 0 ())
    (x11_peek_event (:xdisplay display) event)
    (:parse-event display event t))
  event))


(de :read-mouse (display event)
    (fillvector event 0 ())
    (x11_read_mouse (:xdisplay display) event))


(de :add-event (display event)
    (let ((new (#:event:make)))
      (bltvector new 0 event 0)
      (:reread display (nconc1 (:reread display) new))))


;;; When POinter is grabbed by this function
;;; the cursor is the window that ask for the grab
(defun :grab-event (display win)
    (let ((cursor  (vref (:cursor-vector display) (#:window:cursor win))))
      (x11_grab_event (:xdisplay display) (:xwindow win) cursor)))


(de :ungrab-event (display)
    (x11_ungrab_event (:xdisplay display)))


(de :itsoft-event (display))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defun :default-event-code (display event)
  (#:event:code event 'no-event))


(defun :ascii-event-code (display event)
  (when (#:display:keyboard-focus-window display)
	(#:event:window event
			(#:display:keyboard-focus-window display)))
  (#:event:code event (if (:ascii-event-p display)
			  'ascii-event
			'no-event)))
(defun :functionkey-event-code (display event)
  (when (#:display:keyboard-focus-window display)
	(#:event:window event
			(#:display:keyboard-focus-window display)))
  (#:event:detail event
		  (cassq (#:event:detail event)
			 (:function-keys display)))
  (#:event:code event (if (:functionkey-event-p display)
			  'functionkey-event
			'no-event)))


(defun :down-event-code (display event)
   (#:event:code event 'down-event))


(defun :up-event-code (display event)
   (#:event:code event 'up-event))


(defun :enterwindow-event-code (display event)
   (#:event:code event 'enterwindow-event))


(defun :leavewindow-event-code (display event)
   (#:event:code event 'leavewindow-event))


(defun :movedrag-event-code (display event)
  (#:event:code event (if (#:event:detail event)
			  (if (:drag-event-p display) 'drag-event 'no-event)
			(if (:move-event-p display) 'move-event 'no-event))))


(defun :keyboard-focus-event-code (display event)
  (#:event:detail event (when (eq 9 (#:event:code event)) t))
  (#:event:code event 'keyboard-focus-event))


(defun :repaint-window-event-code (display event)
  (#:event:code event 'repaint-window-event))


(defun :kill-window-event-code (display event)
  (#:event:code event 'kill-window-event))


(defun :modify-window-event-code (display event)
  (let ((detail (#:event:detail event))
	(window (#:event:window event)))
    ;;; ICCCM Compliant
    ;;; When it is a top window
    ;;; and the event is sent by the Window Manager
    ;;; Coordinates are relative to the parent
    ;;; which is not the Root window
    (when (and window (null (#:window:father window))
	       (fixp detail) (eq detail 0))
	  (#:event:x event (#:event:gx event))
	  (#:event:y event (#:event:gy event)))
     (#:event:code
      event                  
      (if (or (null window)
	      (and (or (not (#:event:x event))
		       (eq (#:window:left window)
			   (#:event:x event)))
		   (or (not (#:event:y event))
		       (eq (#:window:top window)
			   (#:event:y event)))
		   (or (not (#:event:w event))
		       (eq (#:window:width window)
			   (#:event:w event)))
		   (or  (not (#:event:h event))
			(eq (#:window:height window)
			    (#:event:h event)))))
	  'no-event 
	'modify-window-event))))


(defun :unmap-window-code (display event)
  (#:event:code event 'no-event)
  (when (#:event:window event)
	(#:image:rectangle:window:state (#:event:window event) 'unmap)
	(when (:unmap-window-p display)
	      (#:event:code event 'unmap-window))))


(defun :map-window-code (display event)
  (#:event:code event 'no-event)
  (when (#:event:window event)
	(#:image:rectangle:window:state (#:event:window event) 'map)
	(when (:map-window-p  display)
	      (#:event:code event 'map-window))))

	
(defun :client-message-code (display event)
  (#:event:code event 'no-event)
  (if (#:event:window event)
      (when (:client-message-p display)
	    (#:event:code event 'client-message)
	    (if (eq (x11_get_format) 8)
		(#:event:detail event (x11_get_data_string))))))
	  
 
(defun :visibility-change-code (display event)
  (#:event:code event 'no-event)
  (if (#:event:window event)
      (when (:visibility-change-p display)
	    (#:event:code event 'visibility-change))))


(defun :reparent-notify-code (display event)
  (#:event:code event 'no-event)
  (if (#:event:window event)
      (when (:reparent-notify-p display)
	    (#:event:code event 'reparent-notify))))
	

(defun :parse-event (display event readp)
  (if (fixp (#:event:code event))
      (let ((fct (vref (:event-responses display) (#:event:code event))))
	(funcall fct display event))))
#|   
(defun :parse-event (display event readp)
  (selectq (#:event:code event)
	   (2
	    (when (#:display:keyboard-focus-window display)
		  (#:event:window event
				  (#:display:keyboard-focus-window display)))
	    (#:event:code event (if (memq 'ascii-event
					  (:events-list display))
				    'ascii-event
				  'no-event)))
	   (36
	    (when (#:display:keyboard-focus-window display)
		  (#:event:window event
				  (#:display:keyboard-focus-window display)))
	    (#:event:detail event
			    (cassq (#:event:detail event)
				   (:function-keys display)))
	    (#:event:code event (if (memq 'functionkey-event
					  (:events-list display))
				    'functionkey-event
				  'no-event)))
	   (4
	    (#:event:code event 'down-event))
	   (5
	    (#:event:code event 'up-event))
	   (6
              (#:event:code event
                            (if (#:event:detail event)
                                (if (memq 'drag-event (:events-list display))
                                    'drag-event
                                  'no-event)
                              (if (memq 'move-event (:events-list display))
                                  'move-event
                                'no-event))))
	   (7
	    (#:event:code event 'enterwindow-event))
	   (8
	    (#:event:code event 'leavewindow-event))
	   ((9 10)
	    (#:event:detail event (when (eq 9 (#:event:code event)) t))
	    (#:event:code event 'keyboard-focus-event))
	   ((12 13)
              (#:event:code event 'repaint-window-event))
	   (17
	    (if (windowp (#:event:window event))
		(#:event:code event 'kill-window-event)
	      (#:event:code event 'no-event)))
	   (22
	    (let ((window (#:event:window event)))
                (#:event:code
                 event                  
                 (if (or (null window)
                         (and (or (not (#:event:x event))
                                  (eq (#:window:left window)
                                      (#:event:x event)))
                              (or (not (#:event:y event))
                                  (eq (#:window:top window)
                                      (#:event:y event)))
                              (or (not (#:event:w event))
                                  (eq (#:window:width window)
                                      (#:event:w event)))
                              (or  (not (#:event:h event))
                                   (eq (#:window:height window)
                                       (#:event:h event)))))
                     'no-event 
                   'modify-window-event))))
	   (18 ;;; UnMap Notify
	      (#:event:code event 'no-event)
	      (#:window:state (#:event:window event) 'unmap)
	      (if (#:event:window event)
		  (when (memq  'unmap-window (:events-list display))
			(#:event:code event 'map-window))))
	   
	   (19 ;;; Map Notify
	    (#:event:code event 'no-event)
	    (#:window:state (#:event:window event) 'map)
	    (if (#:event:window event)
		(when (memq  'map-window (:events-list display))
		      (#:event:code event 'map-window))))
	   (33 ;;; Client Message
	    (#:event:code event 'no-event)
	    (if (#:event:window event)
		   (when (memq  'client-message (:events-list display))
			 (#:event:code event 'client-message)
			 (if (eq (x11_get_format) 8)
			     (#:event:detail event (x11_get_data_string))))))
	   
	   (15 ;;; Visibility Changed
	    (#:event:code event 'no-event)
	    (if (#:event:window event)
		(when (memq  'visibility-change (:events-list display))
		      (#:event:code event 'visibility-change))))
	   (21 ;;; Reparent Notify
	    (#:event:code event 'no-event)
	     (if (#:event:window event)
		 (when (memq  'reparent-notify (:events-list display))
		       (#:event:code event 'reparent-notify))))
	   (t
	    (#:event:code event 'no-event)))))

|#


(defun :compute-event-mask (events)
  (let* ((i 0)
	 (l (length events))
	 (vector-mask (makevector l 0))
	 )
   ;;; (vset vector-mask 0 19) ;;; SubstructureNotufyMask  (Always need it ?)
    (mapc
     (lambda(x)
       (selectq x
		((ascii-event functionkey-event)
		 (vset vector-mask i 0))
		(down-event
		 (vset vector-mask i 2))
		(up-event
		 (vset vector-mask i 3))
		(enterwindow-event
		 (vset vector-mask i 4))
		(leavewindow-event
		 (vset vector-mask i 5))
		(drag-event
		 (vset vector-mask i 13))
		(move-event
		 (vset vector-mask i 6))
		(repaint-event
		 (vset vector-mask i 15))
		(modify-window-event 
		 (vset vector-mask i 17))
		(visibility-change
		 (vset vector-mask i 16))
		(map-window 
		 (vset vector-mask i 17))
		(unmap-window 
		 (vset vector-mask i 17))
		(reparent-notify 
		 (vset vector-mask i 17))
		(client-message)
		(keyboard-focus-event 
		 (vset vector-mask i 21))
		(t
		 (printerror ':compute-event-mask "Not a valid X11 event" x)))
       (setq i (add1 i)))
     events)
    (x11_build_mask vector-mask  l)))



;;;
;;; Allows Display to recieve event of type EVENT (a symbol : 
;;; 'ascii-event.client-message)
;;; All future created window will select this type of event
;;; if they don't specfy their own events list.

(defun :allow-event (display event)
  (selectq event
	   (ascii-event
	    (:ascii-event-p display t))
	   (functionkey-event
	    (:functionkey-event-p display t))
	   (move-event
	    (:move-event-p display t)
	    (:drag-event-p display t))
	   (drag-event
	    (:drag-event-p display t))
	   (client-message
	    (:client-message-p display t))
	   (t ()))
  (let ((events (:events-list display)))
    (unless (memq event events)
	    (setq events (newr events event)))
    (if (and (memq 'move-event events)
	     (not (memq 'drag-event events)))
	(setq events (newr events 'drag-event)))
    (:events-list display events)
    (:top-events-list display
		      (append events '(repaint-event modify-window-event)))
    (:opaque-events-list display (append1 events 'repaint-event))
    (:transparent-events-list display events)
    (:top-events-mask display (:compute-event-mask (:top-events-list display)))
    (:opaque-events-mask display
			 (:compute-event-mask (:opaque-events-list display)))
    (:transparent-events-mask
     display (:compute-event-mask (:transparent-events-list display)))))


;;;
;;; Disallow the use of event of type EVENT
;;; read-event will never return an event of type EVENT

(defun :disallow-event (display event)
  (selectq event
	   (ascii-event
	    (:ascii-event-p display ()))
	   (functionkey-event
	    (:functionkey-event-p display ()))
	   (move-event
	    (:move-event-p display ()))
	   (drag-event
	    (:drag-event-p display ()))
	   (client-message
	    (:client-message-p display ()))
	   (t ()))
  (:top-events-list display (delq event 
				  (:top-events-list display)))   
  (:opaque-events-list display (delq event
				     (:opaque-events-list display)))     
  (:transparent-events-list display 
			    (delq event 
				  (:transparent-events-list display)))    
  (:top-events-mask display (:compute-event-mask
			     (:top-events-list display)))
  (:opaque-events-mask display (:compute-event-mask
				(:opaque-events-list display)))
  (:transparent-events-mask display (:compute-event-mask
				     (:transparent-events-list display))))



(defun :allowed-event-p (display event)
  (memq event (:events-list display)))
