;;;; .EnTete	"Le-Lisp version 15.2x" " " "winevent.ll"
;;;; .Date	"2001/05/04"
;;;; .EnPied	"winevent.ll"
;;;; .Version	"1.00"
;;;; .Auteur 	"ELIGIS, C. Jullien"
;;;; .Annexe I	""

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; New Events are :
;;;;;;;;;;;;;;;      map-window unmap-window visibility-change client-message
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;; To receive this events we have to add them to the events-list of display
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(eval-when (eval)
	   (unless (getdef '#:display:windows:winbitmap)
		   (libload #u"windows/winstruct")))

(defvar #:sys-package:colon '#:display:windows)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; fonctions sur les evenements ;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun :event-mode (display mode))

(defun :flush-event (display)
   (:reread display ())
   (windows_flush_event ;(:display-address display)
            )
   t)

(defun :eventp (display)
   (or (:reread display)
       (> (windows_eventp ;(:display-address display)
                          ) 0)
))


(defun :read-event (display event)
   (if (:reread display)
       (let ((rereadevent (car (:reread display))))
            (:reread display (cdr (:reread display)))
            (bltvector event 0 rereadevent 0))
       (fillvector event 0 ())
       (#:event:window event 
                       (windowp 
                                (windows_read_event ;(:display-address display) 
                                                    event)))
       (:parse-event display event t))
   event)


(defun :peek-event (display event)
   (if (:reread display)
       (bltvector event 0 (car (:reread display)) 0)
       (fillvector event 0 ())
       (#:event:window event 
                       (windowp
                                (windows_peek_event ;(:display-address display) 
                                                    event)))
       (:parse-event display event t))
   event)

(defun :event-grab (display event)
   (let ((gb (:grab-window display))
         (w  (#:event:window event)))
        (when (and gb
                   (nequal gb w))
              (#:event:window event gb)
              (#:event:w event (#:window:width gb))
              (#:event:h event (#:window:height gb))                
; C              
;                (windows_map_window ;(:windows-display display) 
;                    		(:windows-window gb) 
;                                (#:event:gx event)
;                                (#:event:gy event)
;                                (:vector-args display))
;                (#:event:x event (vref (:vector-args display) 0))
;                (#:event:y event (vref (:vector-args display) 1))

; Lisp
	(let ((newx 0)
              (newy 0))
             (while gb 
                    (setq newx (#:window:left gb))
                    (setq newy (#:window:top gb))
                    (setq gb (#:window:father gb)))
             (#:event:x event (sub (#:event:gx event) newx))
             (#:event:y event (sub (#:event:gy event) newy))))))


(defun :read-mouse (display event)
   (fillvector event 0 ())
   (#:event:window event 
     (windowp
              (windows_read_mouse ;(:display-address display) 
                       event)))
   event)


(defun :add-event (display event)
   (let ((new (#:event:make)))
        (bltvector new 0 event 0)
        (:reread display (nconc1 (:reread display) new))))


(defun :grab-event (display win)
   (:grab-window display win))


(defun :ungrab-event (display)
   (:grab-window display ()))


(defun :itsoft-event (display))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defun :default-event-code (display event)
   (#:event:code event 'no-event))

(defun :ascii-event-code (display event)
   (when (#:display:keyboard-focus-window display)
         (#:event:window event (#:display:keyboard-focus-window display)))
   (#:event:code event ;(if (:ascii-event-p display)
                            'ascii-event
                            ;'no-event)
                            ))

(defun :functionkey-event-code (display event)
   (when (#:display:keyboard-focus-window display)
         (#:event:window event (#:display:keyboard-focus-window display)))
   (#:event:code event (if (and (:functionkey-event-p display)
                                (#:event:detail event
                                  (cassq (#:event:detail event)
                                         (:function-keys display))))
                           'functionkey-event
                           'no-event)))

(defun :down-event-code (display event)
   (:event-grab display event)    
   (#:event:code event 'down-event))

(defun :up-event-code (display event)
   (:event-grab display event)       
   (#:event:code event 'up-event))

(defun :enterwindow-event-code (display event)
   (#:event:code event 'enterwindow-event))

(defun :leavewindow-event-code (display event)
   (#:event:code event 'leavewindow-event))

(defun :drag-event-code (display event)
   (:event-grab display event)       
   (#:event:code event (if (:drag-event-p display) 'drag-event 'no-event)))

(defun :move-event-code (display event)
   (:event-grab display event)       
   (#:event:code event (if (:move-event-p display) 'move-event 'no-event)))

(defun :keyboard-focus-event-code (display event)
   (#:event:code event 'keyboard-focus-event))

(defun :repaint-window-event-code (display event)
  (#:event:code event 'repaint-window-event))

(defun :kill-window-event-code (display event)
   (#:event:code event 'kill-window-event))

(defun :command-event-code (display event)
   (:event-grab display event)    
   (#:event:code event 'command-event))

(defun :modify-window-event-code (display event)
   (let ((detail (#:event:detail event))
         (window (#:event:window event)))
        (#:event:code
                      event                  
                      (if (or 
                              ;; not a window
                              (null window)
                              ;; iconfy
                              (and (eq (#:event:w event) 36)
                                   (eq (#:event:h event) 36))
                              ;; same size, prevent a double redisplay.
                              (and (or (not (#:event:x event))
                                       (eq (#:window:left window)
                                           (#:event:x event)))
                                   (or (not (#:event:y event))
                                       (eq (#:window:top window)
                                           (#:event:y event)))
                                   (or (not (#:event:w event))
                                       (eq (#:window:width window)
                                           (#:event:w event)))
                                   (or (not (#:event:h event))
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
         (when (:map-window-p display)
               (#:event:code event 'map-window))))

(defun :doubleclick-event-code (display event)
   (:event-grab display event)    
   (#:event:code event 'doubleclick-event))

;(defun :client-message-code (display event)
;  (#:event:code event 'no-event)
;  (if (#:event:window event)
;      (when (:client-message-p display)
;	    (#:event:code event 'client-message)
;	    (if (eq (windows_get_format) 8)
;		(#:event:detail event (windows_get_data_string))))))
	  
 
;(defun :visibility-change-code (display event)
;  (#:event:code event 'no-event)
;  (if (#:event:window event)
;      (when (:visibility-change-p display)
;	    (#:event:code event 'visibility-change))))


;(defun :reparent-notify-code (display event)
;  (#:event:code event 'no-event)
;  (if (#:event:window event)
;      (when (:reparent-notify-p display)
;	    (#:event:code event 'reparent-notify))))


(defun :parse-event (display event readp)
   (if (fixp (#:event:code event))
       (let ((fct (vref (:event-responses display) (#:event:code event))))
            (funcall fct display event))))


;;;
;;; Allows Display to recieve event of type EVENT (a symbol : 
;;; 'ascii-event.client-message)
;;; All future created window will select this type of event
;;; if they don't specfy their own events list.

(defun :allow-event (display event)
   (selectq event
            (ascii-event       (:ascii-event-p display t))
            (functionkey-event (:functionkey-event-p display t))
            (move-event        (:move-event-p display t)
                               (:drag-event-p display t))
            (drag-event        (:drag-event-p display t))
            (client-message    (:client-message-p display t))
            (t                 ()))
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

))


;;;
;;; Disallow the use of event of type EVENT
;;; read-event will never return an event of type EVENT

(defun :disallow-event (display event)
   (selectq event
            (ascii-event       (:ascii-event-p display ()))
            (functionkey-event (:functionkey-event-p display ()))
            (move-event        (:move-event-p display ()))
            (drag-event        (:drag-event-p display ()))
            (client-message    (:client-message-p display ()))
            (t                 ()))
   (:events-list
     display (delq event (:events-list display)))
   (:top-events-list
     display (delq event (:top-events-list display)))   
   (:opaque-events-list
     display (delq event (:opaque-events-list display)))     
   (:transparent-events-list
     display (delq event (:transparent-events-list display))))


(defun :allowed-event-p (display event)
   (memq event (:events-list display)))

;;;
;;; double-click management routine. At Windows startup, :doubleclick-flag
;;; is initialized at nil. That way, on double-clic, windows send :
;;;
;;;	down-event, up-event, down-event, up-event
;;;
;;; When it is set to t (:doubleclick-flag t) windows send :
;;;
;;;	down-event, up-event, doubleclick-event, up-event
;;;

(defvar :doubleclick-flag ())

(defun :doubleclick-flag &nobind
   (selectq (arg)
      (0 :doubleclick-flag)
      (1 (if (arg 0)
             (progn
                    (setq :doubleclick-flag t)
                    (windows_dblclks_flag 1))
             (progn
                    (setq :doubleclick-flag nil)
                    (windows_dblclks_flag 0))))
      (t (error ':doubleclick-flag 'errwna (arg)))))
