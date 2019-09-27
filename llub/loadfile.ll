;;;
;;; LOADFILE:  a checked loadfile.
;;;
;;; $Source: /usr/cvs/lelisp/llub/loadfile.ll,v $
;;; $Date: 2016/05/21 10:36:08 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is a contribution of Le-Lisp version 15.
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

;;;
;;; Checked version of "loadfile" which prints the line number
;;; if a "read error" occurs.
;;;

(unless (>= (version) 15.2)
     (error 'load 'erricf 'loadfile))

;;;
;;; this package is mandatory.
;;;

(defvar #:sys-package:colon 'system)

(unless (boundp ':current-line)
        (defvar :current-line)
        (defvar :curread)
        (defvar :read-line)
        (defvar :loaded-from-file))
        
;;;
;;; Messages
;;;

(defmessage :ERRLOADFILEINFILE  (english "Error in file: ")
                                (french  "Erreur dans le fichier : "))
(defmessage :ERRLOADFILEATLINE  (english "at line: ")
                                (french  "a` la ligne : "))
(defmessage :ERRLOADFILEREADING (english "while reading: ")
                                (french  "durant la lecture de : "))

;;;
;;; The new "lodfile" function
;;;

(defun loadfile (file redef?)
  (ifn (probefile file)
       (error 'loadfile 'errfile file)
       (let ((:current-line 0)
	     :read-line
	     :curread
	     (#:sys-package:itsoft 
	           (ifn (memq ':loadfile #:sys-package:itsoft)
			(cons ':loadfile #:sys-package:itsoft)
			#:sys-package:itsoft))
	     :loaded-from-file
	     (:redef-flag redef?)
	     (#:sys-package:colon #:sys-package:colon)
	     (:in-read-flag ()))
	 (with ((inchan (openi file)))
	       (protect
		(untilexit eof 
			   (setq :read-line (add1 :current-line))
			   (setq :loaded-from-file (cons file :read-line))
			   (eval (read)))
		(when (inchan) (close (inchan)))))
	 file)))

;;;
;;; The ITsofts
;;;

(defun :loadfile:bol ()
  (incr :current-line)
  (super-itsoft ':loadfile 'bol ()))

(defun :loadfile:eof (n)
  (setq :curread (with ((inchan n)) (curread)))
  (super-itsoft ':loadfile 'eof (list n)))

(defun :loadfile:syserror (:f :m :b)
  (prin "** "
	(get-message ':ERRLOADFILEINFILE)
	(car :loaded-from-file)
	(get-message ':ERRLOADFILEATLINE))
  (if (and (eq :m 'errsxt)
	   (memq :b '(2 3 5 11))
	   (<> :read-line :current-line))
      (print :read-line "-" :current-line)
      (print :current-line))
  (unless :curread (setq :curread (curread)))
  (when :curread
	(with ((printline 1)) 
	      (print "** "
		     (get-message ':ERRLOADFILEREADING)
		     (cdr :curread))))
  (super-itsoft ':loadfile 'syserror (list :f :m :b)))

