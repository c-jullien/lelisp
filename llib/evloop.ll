;;;
;;; EVLOOP:  The Event Loop for Le-Lisp
;;;
;;; $Source: /usr/cvs/lelisp/llib/evloop.ll,v $
;;; $Date: 2016/05/21 10:36:05 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


;;; Event loop for Le-Lisp.
;;; On VMS, fd IS A CHANNEL
;;;
;;; We need:
;;;
;;;      (evloop-select)
;;;            wait until something to read in a file descriptor
;;;            and then call the functions associated to File descriptor
;;;            ready for read
;;; 
;;;      (evloop-readp)
;;;            if something to read in a file (s) descriptor (s)
;;;            then call the functions associated to File Descriptor
;;;            ready for read
;;;
;;;      (evloop-add-input fd manage-function arg-to-use)
;;;            add the FD to the global
;;;            loop so when there is something to read 
;;;            function manage-events is called.
;;;
;;;      (evloop-delete-input fd)
;;;            remove the FD from the standard loop
;;;
;;;      (evloop-change-manage-function fd 
;;;                     new-manage-function new-arg)
;;;            change the function to call for FD
;;;
;;;       
;;;      (evloop-input-managed-p fd) 
;;;      	is fd in the event loop ?
;;;
;;;      (evloop-allow-tty-input)    ;;; Allow input on xterm
;;;
;;;      (evloop-disallow-tty-input) ;;; Disallow input on xterm
;;;
;;;      Be careful to use these functions in the break loop
;;;      when disallowing the tty
;;;
;;;      (evloop-init)  ;;; Intialize the event loop
;;;
;;;      (evloop-restart) ;;; Restart the event loop
;;;
;;;      (evloop-stop)    ;;; Stop the event loop
;;;
;;;      (:set-timeout seconds milliseconds)  ;;; No Need for this 
;;;
;;;      Set the time maximum to wait until  something to read
;;;      we don't really need this
;;; 
;;;     (evloop-add-output fd manage-function arg-to-use)
;;;  
;;;     (evloop-delete-output fd)
;;;            remove the FD from the standard loop
;;;
;;;     (evloop-change-output-manage-function fd 
;;;                     new-manage-function new-arg)
;;;            change the function to call for FD
;;;
;;;       
;;; Two implementations (are) could be proposed
;;; depending of using the Xt Intrinsic or Not
;;;
;;; With motif (the Xt Intrinsic) w'ill use
;;; AddTimeout for the CLOCK
;;; AddInputMask for the select
;;; and then call XtNextEvent XtDispatchEvent forever
;;;

(unless (and (>= (version) 15.2))
	(error 'load 'erricf 'event-loop))

(add-feature 'event-loop)

(setq #:sys-package:colon 'event-loop)

;;;
;;; Number of files descriptors
;;;

(defvar :number-of-file-descriptors-in
  (if (boundp ':number-of-file-descriptors-in)
      :number-of-file-descriptors-in
      0))

(defvar :number-of-file-descriptors-out
  (if (boundp ':number-of-file-descriptors-out)
      :number-of-file-descriptors-out
      0))

(defvar :initialized
  (if (boundp ':initialized)
      :initialized
      ()))

(defvar #:display:all-displays
  (if (boundp '#:display:all-displays)
      #:display:all-displays
      ()))


;;; List of current file descriptors
;;; this list will contain the pair (file-descriptor . manage-function)
;;; manage-function is the function to call  when there is something to 
;;; read in this file descriptor

(defvar :all-file-descriptors-in
  (if (boundp ':all-file-descriptors-in)
      :all-file-descriptors-in
      ()))

(defvar :all-file-descriptors-out
  (if (boundp ':all-file-descriptors-out)
      :all-file-descriptors-out
      ()))

;;;
;;; Mask of file descriptors 
;;;

(defvar :mask-file-descriptors-in
  (if (boundp ':mask-file-descriptors-in)
      :mask-file-descriptors-in
      0))

(defvar :mask-file-descriptors-out
  (if (boundp ':mask-file-descriptors-out)
      :mask-file-descriptors-out
      0))


;;;
;;; A vector of :NUMBER-OF-FILE-DESCRIPTORS elements : will be used
;;; to search result in C

(defvar :result-file-descriptors
  (if (boundp ':result-file-descriptors)
      :result-file-descriptors
      ()))

(defvar :type-file-descriptors
  (if (boundp ':type-file-descriptors)
      :type-file-descriptors
      ()))

;;; Global variable that indicates if something to read in the standard
;;; input

(defvar :something-to-read
  (if (boundp ':something-to-read)
      :something-to-read
      ()))

;;; Function to call for timeout
;;;

(defvar :timeout-handler
  (if (boundp ':timeout-handler)
      :timeout-handler
    ()))


;;;
;;; Messages.

(defmessage :not-initialized
  (french "La boucle n'est pas initialise'e")
  (english "event loop not initialized"))

(defmessage :can-not-change
  (french "mapping inexistant pour l'entre'e")
  (english "no mapping associated to the file descriptor"))



#+(eq (system) 'vaxvms)
(progn
  (defvar :buffer
    (if (boundp ':buffer)
	:buffer
      (makestring 2 0)))
  (defvar :terminal-name
    (if (boundp ':terminal-name)
	:terminal-name
      "TT"))
  (defvar :terminal-mbx-name
    (if (boundp ':terminal-mbx-name)
	:terminal-mbx-name
      "LELISP_MBX"))
;;; Channel for standard Input 
  (defvar :in-channel
    (if (boundp ':in-channel)
	:in-channel
      ()))
  (defvar :real-in-channel
    (if (boundp ':real-in-channel)
	:real-in-channel
      ()))
;;; All displays registered for event loop
  (defvar :registered-displays
    (if (boundp ':registered-displays)
	:registered-displays
      ()))
  (defvar :all-channels-in
    (if (boundp ':all-channels-in)
	:all-channels-in
      ()))
  (defvar :all-channels-out
    (if (boundp ':all-channels-out)
	:all-channels-out
      ()))
  (defvar :tmp-vector
    (if (boundp ':tmp-vector)
	:tmp-vector
      (makevector 2 0)))
  )

#+#:system:unixp
(progn
  (defextern-cache t)
  
  (defextern evloop_set_timeout (fix fix))
  (defextern evloop_build_mask (vector fix) external)
  (defextern evloop_select_in (external vector) fix)
  (defextern evloop_busy_select (external  vector) fix)
  (defextern evloop_add_file_descriptor (external fix))
  (defextern evloop_remove_file_descriptor (external fix))
  (defextern evloop_init () external)
  (defextern evloop_mask_to_fds (external vector) fix)
  (defextern evloop_get_errno () fix)
  (defextern evloop_get_out_mask () external)
  (defextern evloop_select_in_out (external external vector vector) fix)
  (defextern evloop_test_if_valid_fd (fix fix) fix)
  ;; From lelisp.c
  ;;  return 1 when process is forground, 0 when process is background
  (defextern is_ll_fg () fix)
  (defextern is_ll_foreground () fix)

  (defextern-cache ())
  )


;;;
;;; Cas tordu ou le sys-package est celui d'aida
;;; mais le cher utilisateur a quand meme tape un caractere dans
;;; le xterm 
;;; il faut vider le standard input sinon on va boucler en 100% cpu
;;;
;;; Deuxieme probleme si on est en background on est qd meme interrompu mais
;;; on a pas le droit de lire sur le stdin (0) sinon on bloque on tty input

(defun :tty-input (fd)
  (let ((mode (is_ll_fg)))
    (when (eq mode 0) (setq mode (is_ll_foreground)))
    (when (eq mode 1)
	  (if (neq #:sys-package:tty '#:tty:evloop)
	      (#:tty:tyi) ;;; vide le caractere du buffer Ou alors 100% CPU
	    (setq :something-to-read t)))))


;;;
;;; The new tyi
;;; Waits until something to read 
;;; The New tyi does all the work (multiplexing by using UNIX select Or VMS 
;;; AST)
;;; Until there is something to read in the standard Input

#+#:system:unixp
(defun #:tty:evloop:tyi ()
  (tyflush)  ;;; For edlin and companies
;  (identity 't)
  (or (tys)
      (progn
	(when :initialized
	      (while (null :something-to-read)
		(mapc (lambda (display)
			(send 'bitmap-flush display))
		      #:display:all-displays)
		(evloop-select)
		(tyflush))
	      (setq :something-to-read ()))
	(#:tty:tyi))))
#+(eq (system) 'vaxvms)
(defun #:tty:evloop:tyi ()
  (tyflush)  ;;; For edlin and companies
  (or (tys)
      (progn
	(when :initialized
	      (while  (null :something-to-read)
		(mapc (lambda (display)
			(send 'bitmap-flush display))
		      #:display:all-displays)
		(evloop-select)
		(tyflush))
	      (setq :something-to-read ()))
	(if (null :real-in-channel)
	    (#:tty:tyi)
	  (channel_in_read  :real-in-channel :buffer 1) 
	  (sref :buffer 0)))))


;;;
;;; Initialisation to be done only Once

#+#:system:unixp
(defun :init ()
  ;; Initialises all global variables  in LeLisp and in C
  ;;
  ;; C initialize
  ;; and  set the timeout to 0 so we will block indefinitivley (!)
  ;; Set the mask to 1  (1 << 0)
  (setq :mask-file-descriptors-in (evloop_init))
  (setq :mask-file-descriptors-out (evloop_get_out_mask))
  ;;; Initialise mask to the standard input
  (setq :number-of-file-descriptors-in 1)
  (setq :number-of-file-descriptors-out 0)
   ;;; set the manage-function to call fo standard input with argument 0
  (setq :all-file-descriptors-in
	(list (cons 0 (cons ':tty-input 0))))
  (setq :all-file-descriptors-out ())
  ;;; initial the result vector
  (setq :result-file-descriptors (makevector 1 0)) ;;; Used in select
  (setq :type-file-descriptors (makevector 1 0))   ;;; Used in select
  (setq :initialized t)
  
  t)
#+(eq (system) 'vaxvms)
(defun :init ()
  ;; First defexternize
  (let ((#:system:path "lelisp$disk:[llobj]"))
    (libloadfile "evloop_def.lo" ()))
  ;;
  (let ((code 0) (v-tmp (makevector 2 0)))
  ;;; Initialise all global variables  in LeLisp and in C
  ;;;
  ;;; C initialize
  ;;; and  set the timeout to 0 so we will block indefinitivley (!)
    (setq :number-of-file-descriptors-in 1)
    (setq :number-of-file-descriptors-out 0)
    
   ;;; Associate a mailbox to the terminal TT
    (setq :in-channel (evloop_get_in_channel 
		       :terminal-name 
		       :terminal-mbx-name v-tmp))
  		 ;;; channel for standard Input
    (setq :real-in-channel (vref v-tmp 1))

    (if (neq (vref v-tmp 0) 1)
	(error 'evloop-init "can't initialise" (vref v-tmp 0)))
    
    (setq code  (evloop_init :in-channel 1)) ;;; C initialisation
    (if (neq code 1)        
	(error 'evloop-init "can't initialise" code))

    (setq :all-file-descriptors-in
	  (list (cons :in-channel
		      (cons
		       ':tty-input :in-channel))))
    (setq :all-file-descriptors-out ())
  ;;; initial the result vector
    (setq :all-channels-in (makevector 1 0)) ;;; Used in SELECT
    (setq :all-channels-out (makevector 1 0))   ;;; Used in SELECT
    (setq :initialized t)
    t))


;;; User initialisation routine of the standard loop
;;;
(defun evloop-init ()
  ;; Initializes and starts the event loop
  (:init)
  (setq #:sys-package:tty '#:tty:evloop)
  )


;;; Ask if standard event loop is initialized
;;;
(defun evloop-initialized-p ()
  :initialized)

;;; Restart the event loop
;;;
(defun evloop-restart ()
  ;;; Initialize and start the event loop
  (setq #:sys-package:tty '#:tty:evloop))

;;; Stop the event loop
(defun evloop-stop ()
  ;;; Disallow the event loop
  (setq #:sys-package:tty 'tty))

(defun evloop-set-timeout (secs millisecs)
  ;;; Set the timeout this could be called by clockalarm
  ;;;
  (ifn (and (fixp secs) (ge secs 0))
       (error 'evloop-set-timeout 'errbpa  secs))
  (ifn (and (fixp millisecs) (ge millisecs 0))
       (error 'evloop-set-timeout 'errbpa  millisecs))
  (when (ge millisecs 1000)
	(evloop-set-timeout (add secs (div millisecs 1000))
			    (rem millisecs 1000)))
  (evloop_set_timeout secs millisecs)
  t)

;;; This  Wait until something to Read or Write Then Manage It

#+#:system:unixp
(defun evloop-select ()
  (if (null (evloop-initialized-p))
      (error 'evloop-select ':not-initialized ()))
  ;;; Here all work is done
  ;;; 
  (if (or 
       (gt :number-of-file-descriptors-in 0)
       (gt :number-of-file-descriptors-out 0))
      (let (read-outp number-result)
	(when (gt :number-of-file-descriptors-out 0)
	      (setq read-outp t))
	(setq
	 number-result (if read-outp
			   (evloop_select_in_out :mask-file-descriptors-in
						 :mask-file-descriptors-out
						 :result-file-descriptors
						 :type-file-descriptors)
			 (evloop_select_in :mask-file-descriptors-in
					   :result-file-descriptors)))
	
	(selectq number-result
		 (-1
	      ;;; We are interrupted Or an error occured
	      ;;; we can see errno 
		  (:select-error)
		  )
		 (0
	      ;;; Timeout expired 
	      ;;; so we can call Timeout handler 
		  (when :timeout-handler
			(funcall :timeout-handler))
		  t)
		 (t
	      ;;; There is something to read
		  (let ((i 0) 
			(copy-result :result-file-descriptors)
			(copy-type :type-file-descriptors)
			pair fd manage-function arg-to-use)
		    (while (lt i number-result)
		      (setq fd (vref copy-result i))
		      (if (or
			   (null read-outp)
			   (eq (vref copy-type i) 0))
			  (setq pair (assq fd  :all-file-descriptors-in))
			(setq pair (assq fd  :all-file-descriptors-out))
			)
		      (setq manage-function (cadr pair))
		      (setq arg-to-use (cddr pair)) 
		      (if manage-function
			  (funcall manage-function arg-to-use))
		      (setq i (add1 i))))
		  t)))
    (printerror 'evloop-select "empty event loop " ())
    (evloop-stop)))

#+(eq (system) 'vaxvms)
(defun evloop-select ()
  (if (null (evloop-initialized-p))
      (error 'evloop-select ':not-initialized ()))
  ;;; Here all work is done
  ;;; 
  (if (or (gt :number-of-file-descriptors-in 0)
	  (gt :number-of-file-descriptors-out 0)
	  :registered-displays)
      (let ((number-result 0))
	(setq
	 number-result (evloop_wait_alls :all-channels-in :all-channels-out
					 :tmp-vector))
	(selectq number-result
		 (-1 ;;; Timeout
		  (when :timeout-handler
			(funcall :timeout-handler))
		  t)
		 (0
		  ;;; Perhaps a lelisp interrupt or a graphic event
		  (:test-graphic-events)
		  t)
		 (t
	      ;;; There is something to read 
		  (let ((i 0) pair fd manage-function arg-to-use)
		    (while (lt i (vref :tmp-vector 0))
		      (setq fd (vref :all-channels-in i))
		      (setq pair (assq fd  :all-file-descriptors-in))
		      (setq manage-function (cadr pair))
		      (setq arg-to-use (cddr pair)) 
		      (if manage-function
			  (funcall manage-function arg-to-use))
		      (setq i (add1 i)))
		    (setq i 0)
	      ;;; There is something to write
		    (while (lt i (vref :tmp-vector 1))
		      (setq fd (vref :all-channels-out i))
		      (setq pair (assq fd  :all-file-descriptors-out))
		      (setq manage-function (cadr pair))
		      (setq arg-to-use (cddr pair)) 
		      (if manage-function
			  (funcall manage-function arg-to-use))
		      (setq i (add1 i))))	      
              ;;; Is There a graphical events
		  (:test-graphic-events)
		  t)))
    (printerror 'evloop-select "empty event loop " ())
    (evloop-stop)))


;;; Wait until something ready and then return the first one 
;;; a cons (fd . (arg . function))

#+#:system:unixp
(defun evloop-wait ()
  (if (null (evloop-initialized-p))
      (error 'evloop-wait ':not-initialized ()))
  ;;; Here all work is done
  ;;; 
  (if (gt :number-of-file-descriptors-in 0)
      (let ((number-result (evloop_select_in :mask-file-descriptors-in
					     :result-file-descriptors)))
	(selectq number-result
		 (-1
	      ;;; We are interrupted Or an error occured
	      ;;; we can see errno 
		  (:select-error)
		  )
		 (0
	      ;;; Timeout expired 
	      ;;; so we can call Timeout handler 
		  (when :timeout-handler
			(funcall :timeout-handler))
		  t)
		 (t
	      ;;; There is something to read
		  (if (eq number-result 1)
		      (assq (vref :result-file-descriptors 0)
			    :all-file-descriptors-in)
		    (let ((i 0) alls pair fd)
		      (while (lt i number-result)
			(setq fd (vref :result-file-descriptors i))
			(setq pair (assq fd  :all-file-descriptors-in))
			(newl alls pair)
			(setq i (add1 i)))
		      alls)))))))
#+(eq (system) 'vaxvms)
(defun evloop-wait ()
  (if (null (evloop-initialized-p))
      (error 'evloop-select ':not-initialized ()))
  ;;; Here all work is done
  ;;; 
  (let ((number-result 0))
    (when (or 
	   (gt :number-of-file-descriptors-in 0)
	   (gt :number-of-file-descriptors-out 0)
	   :registered-displays)
	  (setq
	   number-result (evloop_wait_alls :all-channels-in :all-channels-out
					   :tmp-vector)))
    (selectq number-result
	     (-1 ;;; Timeout
	      (when :timeout-handler
		    (funcall :timeout-handler))
	      ())
	     (0
		  ;;; Perhaps a lelisp interrupt or a graphic event
	      (:return-read-displays)
	      )
	     (t
	      ;;; Is There a graphical events
	      (let ((i 0) res)
		(setq res
		      (or
		       (:return-read-displays)
	      ;;; There is something to read 
		       (if (gt (vref :tmp-vector 0) 0)
			   (assq (vref :all-channels-in 0)
				 :all-file-descriptors-in)
			 (assq (vref :all-channels-out 0)
			       :all-file-descriptors-out)))
		      )
		res)))))


;;; This If something to Read Then Manage It (Don't Wait)

#+#:system:unixp
(defun evloop-readp ()
  (if (null (evloop-initialized-p))
      (error 'evloop-readp ':not-initialized ()))
  ;;; Here all work is done
  ;;; 
  (if (gt :number-of-file-descriptors-in 0)
      (let ((number-result (evloop_busy_select :mask-file-descriptors-in
					       :result-file-descriptors)))
	(selectq number-result
		 (-1
	      ;;; We are interrupted 
	      ;;; we can see errno 
		  (:select-error)
		  ())
		 (0
	      ;;; Timeout expired 
	      ;;; so we can call CLOCK 
		  ())
		 (t
		  t))))))
#+(eq (system) 'vaxvms)
(defun evloop-readp ()
  (if (null (evloop-initialized-p))
      (error 'evloop-select ':not-initialized ()))
  ;;; Here all work is done
  ;;; 
  (let (( number-result 0))
    (when (or (gt :number-of-file-descriptors-in 0)
	      (gt :number-of-file-descriptors-out 0)
	      :registered-displays)
	  (setq
	   number-result (evloop_busy_wait :all-channels-in :all-channels-out
					   :tmp-vector)))
    (selectq number-result
	     (-1 ;;; Timeout
	      ())
	     (0
		  ;;; Perhaps a lelisp interrupt or a graphic event
	      (if (:return-read-displays)
		  t))
	     (t
	      t))))


(defun :test-if-function-exist (err-funct funct)
  (ifn (getdef funct)
       (error err-funct 'errudf funct)))


#+#:system:unixp
(defun evloop-add-input (fd manage-function arg-to-use)
  (if (null (evloop-initialized-p))
      (error 'evloop-add-input ':not-initialized ()))
  ;;; Add a new file descriptor FD to the standard event loop
  ;;; USE MANAGE-FUNCTION with argument ARG-TO-USE
  ;;; when FD is ready for READ
  (ifn (fixp fd)
       (error 'evloop-add-input 'errnia fd))
  (unless (assq fd :all-file-descriptors-in)
	  (:test-if-function-exist 'evloop-add-input manage-function)
  ;;; increment the total number of file decriptors
	  (setq :number-of-file-descriptors-in 
		(add1 :number-of-file-descriptors-in))
  ;;; add it to the curent mask
	  (evloop_add_file_descriptor 
	   :mask-file-descriptors-in
	   fd)
  ;;; add the pair fd manage function 
	  (setq :all-file-descriptors-in
		(acons  fd (cons manage-function arg-to-use)
			:all-file-descriptors-in))
  ;;; Reinitialise the result vector
	  (setq :result-file-descriptors (makevector 
					  (add
					   :number-of-file-descriptors-in
					   :number-of-file-descriptors-out)
					  0))
	  (setq :type-file-descriptors (makevector 
					(add
					 :number-of-file-descriptors-in
					 :number-of-file-descriptors-out)
					0))
	  t))
#+(eq (system) 'vaxvms)
(defun evloop-add-input (fd manage-function arg-to-use . type-fd)
  (let ((fdtype (if (car type-fd) 
		    (if (eq (car type-fd) 'mailbox) 0
		      (error 'evloop-add-input
			     "Not supported" (car type-fd)))
		  0))) ;;; supports only mailbox for the moment
    (if (null (evloop-initialized-p))
	(error 'evloop-add-input ':not-initialized ()))
  ;;; Add a new file descriptor FD to the standard event loop
  ;;; USE MANAGE-FUNCTION with argument ARG-TO-USE
  ;;; when FD is ready for READ
    (ifn (fixp fd)
	 (error 'evloop-add-input ':not-a-fix fd))
    (unless (assq fd :all-file-descriptors-in)
	    (:test-if-function-exist 'evloop-add-input manage-function)
	    (let ((code (evloop_add_channel fd fdtype)))
	      (if (neq   
		   code
		   1)
		  (error 'evloop_add_channel
			 "Error setting AST"  code)))
  ;;; increment the total number of file decriptors
	    (setq :number-of-file-descriptors-in 
		  (add1 :number-of-file-descriptors-in))
	    
  ;;; add the pair fd manage function 
	    (setq :all-file-descriptors-in
		  (acons  fd (cons manage-function arg-to-use)
			  :all-file-descriptors-in))
  ;;; Reinitialise the result vector
	    (setq :all-channels-in (makevector 
				    :number-of-file-descriptors-in
				    0))
	    
	    t)))


#+#:system:unixp
(defun evloop-remove-input (fd)
  (if (null (evloop-initialized-p))
      (error 'evloop-remove-input ':not-initialized ()))
  ;;; Remove the file descriptor FD from the standard event loop
  ;;;
  (when (assq fd :all-file-descriptors-in)
	
  ;;; decrement the total number of file decriptors
	(setq :number-of-file-descriptors-in
	      (sub1 :number-of-file-descriptors-in))
  ;;; add it to the curent mask
	(evloop_remove_file_descriptor 
	 :mask-file-descriptors-in
	 fd)
  ;;; delete the pair fd manage function 
	(let ((old-pair (assq fd :all-file-descriptors-in)))
	  (setq :all-file-descriptors-in
		(delete old-pair :all-file-descriptors-in))))
    ;;; Reinitialise the result vector
	t)
#+(eq (system) 'vaxvms)
(defun evloop-remove-input (fd)
  (if (null (evloop-initialized-p))
      (error 'evloop-remove-input ':not-initialized ()))
  ;;; Remove the file descriptor FD from the standard event loop
  ;;;
  (ifn (fixp fd)
       (error 'evloop-add-remove-input ':not-a-fix fd))
  (when  (assq fd :all-file-descriptors-in)
  ;;; decrement the total number of file decriptors
	 (setq :number-of-file-descriptors-in
	       (sub1 :number-of-file-descriptors-in))
	 
  ;;; delete the pair fd manage function 
	 (let ((old-pair (assq fd :all-file-descriptors-in)))
	   (setq :all-file-descriptors-in
		 (delete old-pair :all-file-descriptors-in)))
    ;;; Reinitialise the result vector
	 (evloop_remove_channel fd))
  t)


(defun evloop-change-manage-function (fd new-manage-function new-arg)
  ;; The new function to call when there something to read
  ;; in file descriptor FD is NEW-MANAGE-FUNCTION
  ;; But user must call ADD-FILE-DESCRIPTOR before 
  ;; calling this function
  ;; other way an error will be displayed
  (ifn (fixp fd)
       (error ':change-manage-function 'errnia fd))
  (:test-if-function-exist ':change-manage-function new-manage-function)
  (let ((old-pair (assq fd :all-file-descriptors-in)))
    (ifn old-pair
	 (error ':change-manage-function ':can-not-change fd)
	 (setq :all-file-descriptors-in
	       (delete old-pair :all-file-descriptors-in))
	 (setq :all-file-descriptors-in 
	       (acons fd (cons
			  new-manage-function
			  new-arg)
		      :all-file-descriptors-in ))))
  t)


;;; Don't Read in the standard Input
;;;

#+#:system:unixp
(defun evloop-disallow-tty-input ()
  (when (assq 0 :all-file-descriptors-in)
	(evloop-remove-input 0)))
#+(eq (system) 'vaxvms)
(defun evloop-disallow-tty-input ()
  (when (assq :in-channel :all-file-descriptors-in)
	(evloop-remove-input :in-channel)
        (evloop_deassign :real-in-channel)
        (evloop_deassign :in-channel)
        ))




;;; Allow use of standard Input

#+#:system:unixp
(defun evloop-allow-tty-input ()
  (when (null (assq 0 :all-file-descriptors-in))
	(evloop-add-input 0 ':tty-input 0)))
#+(eq (system) 'vaxvms)
(defun evloop-allow-tty-input ()
  (let ((v-tmp #[0 0]))
    (unless (assq :in-channel :all-file-descriptors-in)
	    (setq :in-channel (evloop_get_in_channel
			       :terminal-name
			       :terminal-mbx-name v-tmp))
	    ;; channel for standard Input
	    (setq :real-in-channel (vref v-tmp 1))
	    (evloop-add-input :in-channel ':tty-inputs:init :in-channel))))



;;; Is file decriptor used in standard event loop
(defun evloop-input-managed-p (fd)
  (ifn (fixp fd)
       (error 'evloop-input-managed-p 'errnia fd))
  (if (assq fd #:event-loop:all-file-descriptors-in)
      t
    ()))


#+#:system:unixp
(defun :select-error ()
  (let ( list-fds (code (evloop_get_errno)))
    (selectq code
	     (1
	      (mapc (lambda(pair)
		      (ifn (:test-if-valid-fd (car pair) 1)
			   (progn
			     (newl list-fds (car pair))
			     (evloop-remove-input (car pair)))))
		    :all-file-descriptors-in)
		;;;(evloop-stop)
	      (printerror
	       ':select 
	       "One of the bit masks specified an invalid descriptor"
	       list-fds)
	      (tyflush)  ;;; To see the message
	      )
	     (3
	      (evloop-stop)
	      (printerror 
	       ':select 
	       "Null number of file descriptors" 
	       :all-file-descriptors-in)
	      (tyflush) ;;;to see the message
	      )
	       (2 ;;; A signal was delivered ,
		  ;;; so we call explicitly intest by identity .
		(identity 't)))))
;		;;; We must scan one time on standart input .
;		(setq :something-to-read t)))))

(defun evloop-set-timeout-handler (handler)
  (when handler 
	(:test-if-function-exist 'evloop-set-timeout-handler handler))
  (setq :timeout-handler handler)
  t)


#+#:system:unixp
(defun :test-if-valid-fd (fd in-p)
  (if (eq (evloop_test_if_valid_fd fd in-p) 1)
      t
    ()))


#+#:system:unixp
(defun evloop-add-output (fd manage-function arg-to-use)
  (if (null (evloop-initialized-p))
      (error 'evloop-add-output ':not-initialized ()))
  ;;; Add a new file descriptor FD to the standard event loop
  ;;; USE MANAGE-FUNCTION with argument ARG-TO-USE
  ;;; when FD is ready for READ
  (ifn (fixp fd)
       (error 'evloop-add-output 'errnia fd))
  (unless (assq fd :all-file-descriptors-out)
	  (:test-if-function-exist 'evloop-add-output manage-function)
  ;;; increment the total number of file decriptors
	  (setq :number-of-file-descriptors-out 
		(add1 :number-of-file-descriptors-out))
  ;;; add it to the curent mask
	  (evloop_add_file_descriptor 
	   :mask-file-descriptors-out
	   fd)
  ;;; add the pair fd manage function 
	  (setq :all-file-descriptors-out
		(acons  fd (cons manage-function arg-to-use)
			:all-file-descriptors-out))
  ;;; Reinitialise the result vector
	  (setq :result-file-descriptors (makevector 
					  (add
					   :number-of-file-descriptors-in
					   :number-of-file-descriptors-out)
					  0))
	  (setq :type-file-descriptors (makevector 
					(add
					 :number-of-file-descriptors-in
					 :number-of-file-descriptors-out)
					0))
	  t))
#+(eq (system) 'vaxvms)
(defun evloop-add-output (fd manage-function arg-to-use . type-fd)
  (let ((fdtype (if (car type-fd) 
		    (if (eq (car type-fd) 'mailbox) 1
		      (error 'evloop-add-input
			     "Not supported" (car type-fd)))
		  1))) ;;; supports only mailbox for the moment
    (if (null (evloop-initialized-p))
	(error 'evloop-add-output ':not-initialized ()))
  ;;; Add a new file descriptor FD to the standard event loop
  ;;; USE MANAGE-FUNCTION with argument ARG-TO-USE
  ;;; when FD is ready for READ
    (ifn (fixp fd)
	 (error 'evloop-add-output ':not-a-fix fd))
    (unless (assq fd :all-file-descriptors-out)
	    (:test-if-function-exist 'evloop-add-output manage-function)
	    (let ((code (evloop_add_channel fd fdtype)))
	      (if (neq   
		   code
		   1)
		  (error 'evloop_add_channel
			 "Error setting AST"  code)))
  ;;; increment the total number of file decriptors
	    (setq :number-of-file-descriptors-out 
		  (add1 :number-of-file-descriptors-out))
  ;;; add the pair fd manage function 
	    (setq :all-file-descriptors-out
		  (acons  fd (cons manage-function arg-to-use)
			  :all-file-descriptors-out))
  ;;; Reinitialise the result vector
	    (setq :all-channels-out (makevector 
				     :number-of-file-descriptors-out
				     0))
	    
	    
	    t)))


#+#:system:unixp
(defun evloop-remove-output (fd)
  (if (null (evloop-initialized-p))
      (error 'evloop-remove-output ':not-initialized ()))
  ;; Remove the file descriptor FD from the standard event loop
  (when (assq fd :all-file-descriptors-out)
	(ifn (fixp fd)
	     (error 'evloop-remove-output 'errnia fd))
	;; decrement the total number of file decriptors
	(setq :number-of-file-descriptors-out
	      (sub1 :number-of-file-descriptors-out))
	;; add it to the curent mask
	(evloop_remove_file_descriptor 
	 :mask-file-descriptors-out
	 fd)
	;; delete the pair fd manage function 
	(let ((old-pair (assq fd :all-file-descriptors-out)))
	  (setq :all-file-descriptors-out
		(delete old-pair :all-file-descriptors-out))))
  ;; Reinitialise the result vector
  t)

#+(eq (system) 'vaxvms)
(defun evloop-remove-output (fd)
  (if (null (evloop-initialized-p))
      (error 'evloop-remove-output ':not-initialized ()))
  ;; Remove the file descriptor FD from the standard event loop
  (ifn (fixp fd)
       (error 'evloop-remove-output ':not-a-fix fd))
  (when  (assq fd :all-file-descriptors-out)
	 ;; decrement the total number of file decriptors
	 (setq :number-of-file-descriptors-out
	       (sub1 :number-of-file-descriptors-out))
	 ;; add it to the curent mask
	 ;; delete the pair fd manage function 
	 (let ((old-pair (assq fd :all-file-descriptors-out)))
	   (setq :all-file-descriptors-out
		 (delete old-pair :all-file-descriptors-out)))
	 ;; Reinitialise the result vector
	 (evloop_remove_channel fd))
  t)


(defun evloop-change-output-manage-function (fd new-manage-function new-arg)
  ;; The new function to call when there something to read
  ;; in file descriptor FD is NEW-MANAGE-FUNCTION
  ;; But user must call ADD-FILE-DESCRIPTOR before 
  ;; calling this function
  ;; other way an error will be displayed
  (ifn (fixp fd)
       (error 'evloop-change-output-manage-function 'errnia fd))
  (:test-if-function-exist 'evloop-change-output-manage-function
			   new-manage-function)
  (let ((old-pair (assq fd :all-file-descriptors-out)))
    (ifn old-pair
	 (error ':change-manage-function ':can-not-change fd)
	 (setq :all-file-descriptors-out
	       (delete old-pair :all-file-descriptors-out))
	 (setq :all-file-descriptors-out
	       (acons fd (cons
			  new-manage-function
			  new-arg)
		      :all-file-descriptors-out ))))
  t)


#+(eq (system) 'vaxvms)
(defun :test-graphic-events ()
  (mapc (lambda(pair)
	  (current-display  (car pair))
	  (when (eventp) (funcall (cdr pair) (car pair)) ))
	:registered-displays))

#+(eq (system) 'vaxvms)
(defun :return-read-displays ()
  (any (lambda(pair)
	 (current-display  (car pair))
	 (if (eventp) pair)) ;;; To be UNIX compatible (AIE AIE !)
       :registered-displays))


#+#:system:unixp
(defun evloop-add-display (display . manage-function)
  (let ((fd (send 'file-descriptor display))
	(funct (or (car manage-function) ':evloop-display-manage)))
    (:test-if-function-exist 'evloop-add-display funct)
    (evloop-add-input fd funct display)))

#+(eq (system) 'vaxvms)
(defun evloop-add-display (display . function)
  (setq function (or (car function)
		     ':evloop-display-manage))
  (:test-if-function-exist 'evloop-add-display function)
  (unless (assq display :registered-displays)
	  (setq :registered-displays
		(acons display function :registered-displays))))

(defun :evloop-display-manage (display)
  (current-display display)
  (while (eventp) 
    (print (read-event))))

#+#:system:unixp
(defun evloop-remove-display (display)
  (let ((fd (send 'file-descriptor display)))
    (evloop-remove-input fd)))

#+(eq (system) 'vaxvms)
(defun evloop-remove-display (display)
  (let ((res (assq display :registered-displays)))
    (when res
	  (setq :registered-displays (delete res :registered-displays)))))


#+#:system:unixp
(defun evloop-display-managed-p (display)
  (let ((fd (send 'file-descriptor display)))
    (evloop-input-managed-p fd)))

#+(eq (system) 'vaxvms)
(defun evloop-display-managed-p (display)
  (if (assq display :registered-displays) t ()))


#+(eq (system) 'vaxvms)
(progn

  (defun evloop-assign (device)
    (let (channel)
      (setq channel (evloop_assign device :tmp-vector))
      (if (neq (vref :tmp-vector 0) 1)
	  (error 'evloop-assign "assign device error" (vref :tmp-vector 0)))
      channel))
  
  (defun evloop-deassign (channel)
    (evloop_deassign channel))
  
  (defun channel-read (channel buffer length)
    (let (nb (code #[0 0]))
      (setq nb (channel_read channel buffer length code))
      (if (neq (vref code 0) 1)
	  (error 'channel-read "sys$qiow code is" (vref code 0))
	  nb)))
  
  (defun channel-write (channel buffer length)
    (let (nb (code #[0 0]))
      (setq nb (channel_write channel buffer length code))
      (if (neq (vref code 0) 1)
	  (error 'channel-write "sys$qiow code is" (vref code 0))
	  nb)))
  
  (defun channel-wait-write (channel buffer length)
    (let (nb (code #[0 0]))
      (setq nb (channel_wait_write channel buffer length code))
      (if (neq (vref code 0) 1)
	  (error 'channel-wait-write "sys$qiow code is" (vref code 0))
	  nb)))
  
  (defun mailbox-create (mailbox permanentp  maxbuf buflength)
    (let ((code #[0 0])
	  (perm (if permanentp 1 0))
	  (maxb (or maxbuf 0))
	  (bufl (or buflength 0))
	  channel)
      (setq channel (mailbox_create mailbox perm maxb bufl code))
      (if (eq  (vref code 0) 1)
	  channel
	  (error 'mailbox_create "error creating mailbox " (vref code 0)))))
  
  (defun mailbox-delete (channel)
    (mailbox_delete channel))
  
  )


