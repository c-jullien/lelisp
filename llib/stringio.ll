;;;
;;; STRINGIO:  Perform I/O on strings.
;;;
;;; $Source: /usr/cvs/lelisp/llib/stringio.ll,v $
;;; $Date: 2016/05/21 10:36:06 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


;;; Performs reasonnable I/O on strings, using the Software Interupts,
;;; which avoid any allocation except when explicilty asked for.


(unless (>= (version) 15.25)
        (error 'load 'erricf 'stringio))

(defvar #:sys-package:colon 'stringio)

(add-feature 'stringio)


;;; ------------------------------------------------------------
;;;		Read from String
;;;  ------------------------------------------------------------

;;;
;;; A global buffer for read:
;;;
;;; - :string-in-buffer = the buffer itself where the characters are read
;;; - :string-in-bindex = the curent read index on that buffer
;;; - :sbuf             = size of inbuf
;;; - :buf              = temporary buffer for saving inbuf

(defvar :string-in-buffer ())
(defvar :string-in-bindex 0)
(defvar :sbuf (slen (inbuf)))
(defvar :buf (makestring :sbuf #\sp))

(defun read-from-string (strg)
  (if (stringp strg)
      (with-input-from-string strg (read))
    strg))

(defmacro with-input-from-string (strg . body)
  `(with ((inchan ()))
	(let
	    ((:n (imin (slen ,strg) :sbuf))
	     (:res ())
	     (:p (inpos))
	     (:m (inmax))
	     (:string-in-bindex 0)
	     (:string-in-buffer ,strg))
	  (bltstring :buf 0 (inbuf) 0 :n)
	  (inpos 0)
	  (inmax 0)
	  (setq :res
		(tag :eos
		     (let ((#:sys-package:itsoft
			    (cons ':in #:sys-package:itsoft)))
		       (progn ,@body))))
	  (bltstring (inbuf) 0 :buf 0 :n)
	  (inpos :p)
	  (inmax :m)
	  :res)))

(defun :in:bol ()
  (:bol :string-in-buffer))

(defun :in:syserror (f m b)
  (:aux-error ':in f m b))

(defun :bol (s)
  (let* ((i 0)
	 (c :string-in-bindex)
	 (l (slength s))
	 (r (sub l c))
	 (j (sub :sbuf 2)))
    (when (gt j r) (setq j r))
    (when (eq :string-in-bindex l) (exit :eos ()))
    (bltstring (inbuf) i s c j)
    (setq c (add c j))
    (setq :string-in-bindex (add :string-in-bindex j))
    (when (eq c l)
	  (inbuf j #\cr)
	  (inbuf (setq j (add1 j)) #\lf))
    (inmax j)))

;;; ------------------------------------------------------------
;;;		Write into a String
;;;  ------------------------------------------------------------

;;;
;;; A global buffer for write:
;;;
;;; - :string-out-buffer = the buffer itself where the characters are inserted
;;; - :string-out-length = the length of this buffer
;;; - :string-out-bindex = the curent insertion index on this buffer
;;;

(defvar :string-out-length 1024)
(defvar :string-out-buffer ())
(defvar :string-out-bindex 0)
(defvar :string-out-outpos ())

(defun print-to-string (obj)
  ;; returns a newly allocated string of the printed representation
  ;; of the object <obj>.
  (unless (stringp :string-out-buffer)
	  ;; this string is allocated at the first use of print-to-string
	  (setq :string-out-buffer (makestring :string-out-length #\sp)))
  (substring :string-out-buffer
	     0
	     (with-output-to-string :string-out-buffer 
				    0
				    (prin obj))))

(defmacro with-output-to-string (:strg :pos . :body)
  ;; return the number of characters printed in the string <:strg>
  ;; starting at position <:pos> by all the printing done during the
  ;; evaluation of <:body>
  ;;
  ;; to avoid multiple evaluations of ,:strg and ,:pos
  `(let ((:strg ,:strg)
	 (:pos  ,:pos))
     ;; check the arguments' types
     (unless (stringp :strg) (error 'with-output-to-string 'errnsa :strg))
     (unless (fixp    :pos)  (error 'with-output-to-string 'errnia :pos))
     ;; use the standard outbuf buffer
     (with ((outchan ()))
	   ;; dynamic binding of the copy buffer
	   (let ((:string-out-buffer :strg)
		 (:string-out-length (slen :strg))
		 (:string-out-bindex :pos)
		 (:string-out-outpos (outpos)))
	     (with ((outpos :string-out-outpos)
		    (rmargin (add1 (slen (outbuf)))))
		   ;; to compute the final size
		   (let ((startpos :string-out-bindex))
		     ;; exit :eos is called if the receiver overflows
		     (tag :eos
			  ;; set the ITsoft
			  (let ((#:sys-package:itsoft
				 (cons ':out #:sys-package:itsoft)))
			    ;; evaluate the :body
			    (progn ,@:body)
			    ;; in order to raise the last "eol" ITsoft
			    (terpri)))
		     ;; compute the number of written characters
		     (sub :string-out-bindex startpos)))))))

;;;
;;; The ITsofts: same behaviour for "eol" and "flush"
;;;

(defun :out:syserror (f m b)
  (:aux-error ':out f m b))

(defun :out:eol ()
  (:copy-output-buffer))

(defun :out:flush ()
  (:copy-output-buffer))

(defun :copy-output-buffer ()
  ;; copy the writen output buffer in the copy buffer
  (let* ((outpos :string-out-outpos)
	 (obflen (sub (outpos) outpos)))
    (bltstring :string-out-buffer :string-out-bindex (outbuf) outpos obflen)
    (outpos outpos)
    (setq :string-out-bindex (add :string-out-bindex obflen))
    (when (ge :string-out-bindex :string-out-length)
	  (setq :string-out-bindex :string-out-length)
	  (exit :eos))))
  
;;; 
;;; Errors: has to restore the previous ITsofts.
;;; 

(defun :aux-error (package f m b)
  (let ((#:sys-package:itsoft (remq package #:sys-package:itsoft)))
    (itsoft 'syserror (list f m b))))


