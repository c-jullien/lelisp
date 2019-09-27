;;;
;;; EDLIN:  The Emacs Like Le-Lisp Line Editor.
;;;
;;; $Source: /usr/cvs/lelisp/llib/edlin.ll,v $
;;; $Date: 2016/05/21 10:36:05 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


(unless (>= (version) 15.21)
        (error 'load 'erricf 'edlin))

(defvar #:sys-package:colon 'edlin)

(add-feature 'edlin)


;;;
;;; History Management
;;;

(setq #:sys-package:colon '#:edlin:history)

(defvar :last-string)
(defvar :maxlen 100)

;;; The History starts with an empty line.
(defvar :history '("" "; In principium erat Le-Lisp..."))
(defvar :position :history)

(defun  :show ()
  (terpri 2)
  (:show-aux (cdr :history)))

(defun  :show-aux (history)
  ;; No CONS, allocation in the stack
  (if (null history)
      0
      (let ((no-line (:show-aux (cdr history))))
	(print (setq no-line (add1 no-line)) "        " (car history))
	no-line)))

(defun  :previous ()
  (if (cdr :position)
      (setq :position (cdr :position))
      (tybeep))
  (car :position))

(defun  :next ()
  (if (:endp)
      (tybeep)
      (let ((history :history))
	(until (eq (cdr history) :position)
	       (nextl history))
	(setq :position history)))
  (car :position))

(defun  :add (str)
  (let ((history :history))
    (repeat (sub :maxlen 2) (nextl history))
    (setq :history
	  (rplac (if (null (cdr history))
		     ;; a new CONS
		     (ncons ())
		     ;; use the last CONS
		     (prog1 (cdr history) (rplacd history nil))) 
		 ;; set up the head of history
		 (car :history)
		 ;; and the string to be kept
		 (rplaca :history str)))))

(defun  :find (s)
  (let ((position :position))
    (tag found
	 (while (cdr :position)
	   (:previous)
	   (when (index s (car :position))
		 (exit found (car :position))))
	 (tybeep)
	 (setq :position position)
	 () )))

(defun  :last ()
  (car (setq :position :history)))

(defun  :first ()
  (car (setq :position (last :history))))

(defun  :endp ()
  (eq :position :history))


;;;
;;; Utilities
;;;

(setq #:sys-package:colon '#:edlin:util)

(defvar :tampon (makestring 256 #\sp))

(defun  :insert-in-string (string pos max cn)
  (if (eq pos max)
      (sset string pos cn)
      (bltstring :tampon 0 string pos (sub max pos))
      (sset string pos cn)
      (bltstring string (add1 pos) :tampon 0 (sub max pos))))

(defun  :delete-in-string (string pos max)
  (if (eq pos max)
      (sset string pos (sref string (add1 pos)))
      (bltstring :tampon 0 string (add1 pos) (sub1 (sub max pos)))
      (bltstring string pos :tampon 0 (sub1 (sub max pos)))))


;;;
;;; Input Buffer Management
;;;

(setq #:sys-package:colon 'edlin)

(defun  :image:redisplay ()
  (tycr) (tycleol) (tyflush)
  (tystring (prompt) (slength (prompt)))
  (:image:redisplay-eol 0))

(defun  :image:redisplay-eol (pos)
  (let ((:pos pos))
    (:image:tycleol)
    (:image:move :max))
  (:image:tycleol)
  (setq pos :pos)
  (let ((:pos :max))
    (:image:move pos)))

(defun  :image:move (x)
  (cond ((lt :pos x)
	 (let ((pos :pos))
	   (until (eq pos x)
		  (tyctl tycn (sref :inbuf pos)) 
		  (setq pos (add1 pos)))))
	((gt :pos x)
	 (let ((pos :pos))
	   (until (eq pos x)
		  (tyctl tybs (sref :inbuf 
				    (setq pos (sub1 pos)))))))))

(defun  :image:insert (cn)
  (if (eq :pos :max)
      (tyctl tycn cn)
      ;; a small help for the VT100 terminals
      (unless (tyctl tyinsch cn)
	      (:image:redisplay-eol (sub1 :pos)))))

(defun  :image:delete (cn)
  (unless (tyctl tydelcn cn)
	  (:image:redisplay-eol :pos)))

(defun  :image:delete-without-redisplay (cn)
  (tyctl tydelcn cn))

(defun  :image:tycleol ()
  (unless (tycleol)
	  (tycn #\sp) (tybs #\sp))
  (tyflush))

(defmacro tyctl (tyfnt x)
  `(let ((x ,x))
     (when (lt x #\sp)
	   (,tyfnt #/^)
	   (setq x (logor x #$40)))
     (,tyfnt x)))


;;;
;;; Emacs Like Line Editor
;;;

(setq #:sys-package:colon 'edlin)

(defvar :inbuf)

;;; The kill-buffer is global.
(defvar :kill-buffer (copy (inbuf)))    ; Wipe&Yank copy
(defvar :kill-length 0)                 ; length of the Yank
(defvar :max)
(defvar :pos)

;;; flashing paranthesis tempo
(defvar :loop 1000)

(defun  :bol ()
  (if (or (fixp (inchan))
	  (not #:system:real-terminal-flag)
	  #:system:line-mode-flag)
      (super-itsoft '#.#:sys-package:colon 'bol ())
      (let ((:inbuf (inbuf))	; input buffer
	    (:last-string ())
	    (:pos 0)		; current position
	    (:max 0))
	(tystring (prompt) (slength (prompt)))
	(unless (:history:endp)
		(:do-command #^N))
	(untilexit eoi        ; end of input
		   (:work-on (tyi)))
	(tynewline)
	(inmax :max)
	(inpos 0))))

(defun  :work-on (char)
  (if (and (eq :pos 0) (eq :max 0)
	   (or (eq (typecn char) 'cmacro) (eq (typecn char) 'smacro)))
      (:insert char)
      (or (:do-command char) (:insert char))))

(defun  :insert (char)
  (:util:insert-in-string :inbuf :pos :max char)
  (setq :pos (add1 :pos))
  (setq :max (add1 :max))
  (:image:insert char)
  (when (ge :max (slength :inbuf))
	(exit eoi)))

(defun  :delete (char)
  (:util:delete-in-string :inbuf :pos :max)
  (setq :max (sub1 :max))
  (:image:delete char))

(defun  :delete-without-redisplay (char)
  (:util:delete-in-string :inbuf :pos :max)
  (setq :max (sub1 :max))
  (:image:delete-without-redisplay char))

(defun  :delete-backword ()
  (until (or (eq :pos 0) (:alphap (sref :inbuf (sub1 :pos))))
	 (when (gt :pos 0)
	       (:move (sub1 :pos))
	       (:delete-without-redisplay (sref :inbuf :pos))))
  (while (and (gt :pos 0) (:alphap (sref :inbuf (sub1 :pos))))
    (when (gt :pos 0)
	  (:move (sub1 :pos))
	  (:delete-without-redisplay (sref :inbuf :pos))))
  (:image:redisplay-eol :pos))

(defun  :delete-forword ()
  (until (or (eq :pos :max) (:alphap (sref :inbuf :pos)))
	 (when (lt :pos :max) 
	       (:delete-without-redisplay (sref :inbuf :pos))))
  (while (and (lt :pos :max) (:alphap (sref :inbuf :pos)))
    (when (lt :pos :max) 
	  (:delete-without-redisplay (sref :inbuf :pos))))
  (:image:redisplay-eol :pos))

(defun  :move (x)
  (:image:move x)
  (setq :pos x))

(defun  :do-command (char)
  (block :do-command
         (selectq char
		  (#^A (:move 0))
		  (#^E (:move :max))
		  (#^B (when (gt :pos 0)
			     (:move (sub1 :pos))))
		  (#^F (when (lt :pos :max)
			     (:move (add1 :pos))))
		  ((#\cr #\lf)
		   (exit eoi (:store-line) (:history:last)))
		  (#^O (exit eoi (:store-line)))
		  ((#^H 127)
		   (when (gt :pos 0)
			 (:move (sub1 :pos))
			 (:delete (sref :inbuf :pos))))
		  (#^D (when (lt :pos :max)
			     (:delete (sref :inbuf :pos))))
		  (#^K (setq :last-string ())
		       (:delete-end-of-line))
		  ((#^X #^U) (setq :last-string ())
		   (:delete-begining-of-line))
		  (#^Y (:insert-substring :kill-buffer :kill-length))
		  (#^I (:replace-string (:history:previous)))
		  (#^N (:replace-string (:history:next)))
		  (#^T
		   (when (gt :pos 1)
			 (let ((char1 (sref :inbuf (sub :pos 2)))
			       (char2 (sref :inbuf (sub :pos 1))))
                           (:move (sub :pos 2))
                           (:delete char1) (:delete char2)
                           (:insert char2) (:insert char1))))
		  (#^L (:redisplay))
		  (#/\ (:insert (tyi)))
		  (#\esc (:do-esc-command (tyi)))
		  (#|(|# #/) (:insert-rpar))
	          (t (return-from :do-command ())))
  t ))

(defun  :do-esc-command (char)
  (block :do-esc-command
	 (selectq char
		  (#"0123456789"
		   (let ((count (sub char #/0)))
                     (while (memq (setq char (tyi)) '#"0123456789")
		       (setq count (add (sub char #/0) (mul count 10))))
                     (repeat count (:work-on char))))
		  (#/?
		   (terpri)
		   (with ((inchan (openi (catenate 
					  #:system:llib-directory
					  (if #:system:foreign-language
					      "edahelp"
					      "edhelp")
                                          #:system:lelisp-extension))))
			 (untilexit eof (print (readstring))))
		   (terpri)
		   (:redisplay))
		  (#/b (:backword #^B))
		  (#/f (:forword #^F))
		  ((#^H #\del) (:delete-backword))
		  (#/h (:history:show)
		       (:redisplay))
		  ((#/d #^D) (:delete-forword))
		  (#^G (tybeep))
		  (#/< (:replace-string (:history:first)))
		  (#/> (:replace-string (:history:last)))
		  (#\esc
		   (let ((s (:history:find
			     ;; :last-string is set to () in BOL and ^U
                             (or :last-string
                                 (setq :last-string
                                       (substring :inbuf 0 :max))))))
                     (when s (:replace-string s))))
		  (#\sp (:find-in-oblist :pos))
		  (#/' (let ((pos :pos))
                         (:backword #^B)
                         (:insert #/')
                         (repeat (sub (add1 pos) :pos) (:do-command #^F))))
		  (#/( #|)|# (:move (:backwardparen :pos)))
		     (t (tybeep) (return-from :do-esc-command ())))
		  t ))

(defun  :find-in-oblist (pos)
  (:backword #^B)
  (let ((l (sub pos :pos))
	(s (:search-in-oblist :pos
			      (substring :inbuf :pos (sub pos :pos)))))
    (repeat l (:do-command #^F))
    (cond ((atom s) (tybeep))
	  ((null (cdr s))
	   (setq s (string (car s)))
	   (for (i l 1 (sub1 (slength s)))
		(:insert (sref s i))))
	  (t (terpri)
	     (mapc 'print (setq s (sort 'alphalessp s)))
	     (terpri)
	     (setq s (:comm-string s))
	     (:redisplay)
	     (for (i l 1 (sub1 (slength s)))
		  (:insert (sref s i)))))))

(defun  :store-line ()
  (when (gt :max 0)
	;; allocate and store a new string
	(:history:add (substring :inbuf 0 :max)))
  (sset :inbuf :max #\cr) (setq :max (add1 :max))
  (sset :inbuf :max #\lf) (setq :max (add1 :max)))

(defun  :delete-end-of-line ()
  (bltstring :kill-buffer 0 :inbuf :pos (sub :max :pos))
  (setq :kill-length (sub :max :pos))
  (repeat (sub :max :pos)
	  (when (lt :pos :max)
		(:delete-without-redisplay (sref :inbuf :pos))))
  (:image:redisplay-eol :pos))

(defun  :delete-begining-of-line ()
  (bltstring :kill-buffer 0 :inbuf 0 :pos)
  (setq :kill-length :pos)
  (repeat :pos (when (gt :pos 0)
		     (:move (sub1 :pos))
		     (:delete-without-redisplay (sref :inbuf :pos))))
  (:image:redisplay-eol :pos))

(defun  :insert-substring (s l)
  (for (i 0 1 (sub1 (imin l (slength s))))
       (:insert (sref s i))))

(defun  :replace-string (s)
  (let ((l (slength s)))
    (bltstring :inbuf 0 s 0 l)
    (setq :max l  :pos :max))
  (:redisplay))

(defun  :alphap (char)
  (eq (typecn char) 'cpname))

(defun  :backword (com)
  (until (or (eq :pos 0) (:alphap (sref :inbuf (sub1 :pos))))
	 (:do-command com))
  (while (and (gt :pos 0) (:alphap (sref :inbuf (sub1 :pos))))
    (:do-command com)))

(defun  :forword (com)
  (until (or (eq :pos :max) (:alphap (sref :inbuf :pos)))
	 (:do-command com))
  (while (and (lt :pos :max) (:alphap (sref :inbuf :pos)))
    (:do-command com)))

(defun  :redisplay ()
  (:image:redisplay))

(defun :search-in-oblist (pos string)
  (let (pkgc (npos pos))
    (while (and (gt npos 0)
		(or (memq (chrnth (sub1 npos) :inbuf) '#":#")
		    (:alphap (chrnth (sub1 npos) :inbuf))))
      (setq npos (sub1 npos)))
    (setq pkgc
	  (car (catcherror ()
			   (implode (explode 
				     (substring :inbuf
						npos
						(sub (sub1 pos) npos)))))))
    (maploblist
     (lambda (u)
       (when (and (eq pkgc (packagecell u))
		  (eq 0 (index string (string u) 0)))
	     (ncons u))))))

(defun :comm-string (lsymb)
  ;; lsymb is sorted.
  (let ((s1 (string (car lsymb)))
	(s2 (string (car (last lsymb)))))
    (let ((i 0) (fin (imin (slength s1) (slength s2))))
      (while (and (lt i fin) (eq (sref s1 i) (sref s2 i)))
	(setq i (add1 i)))
      (substring s1 0 i))))

(defun :insert-rpar ()
  (:insert #|(|# #/))
  (:move (prog1 :pos
	        (:move (:backwardparen :pos)) 
		(tyflush)
		(repeat :loop (setq :pos :pos)))))


(defun :backwardparen (pos)
  (let ((depth 1))
    (when (gt pos 0)
	  (setq pos (sub1 pos))
	  (while (and (gt pos 0)
		      (or (neq 'clpar (typecn (sref :inbuf pos)))
			  (gt (setq depth (sub1 depth)) 0)))
	    (setq pos (sub1 pos))
	    (or (neq 'crpar (typecn (sref :inbuf pos)))
		(setq depth (add1 depth))))))
  pos)


;;;
;;; User Fonctions
;;;

(defun  edlin ()
  (unless (memq '#.#:sys-package:colon #:sys-package:itsoft)
	  (setq #:sys-package:itsoft
		(cons '#.#:sys-package:colon #:sys-package:itsoft))))

(defun  edlinend ()
  (setq #:sys-package:itsoft
	(delq '#.#:sys-package:colon #:sys-package:itsoft)))

