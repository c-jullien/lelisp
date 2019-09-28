;;;
;;; VIRBIT:  Virtual Bitmap, bitmap management.
;;;
;;; $Source: /usr/cvs/lelisp/llib/virbit.ll,v $
;;; $Date: 2016/05/21 10:36:06 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------



;;;
;;; This file contains bitmap managment functions
;;; 


(eval-when (eval)
	   (unless (getdef '#:display:defun)
		   (libload "virmacros.ll")))

;; Use of the #:display:dump module.
(defvar #:display:dumpdevice
  (if (boundp '#:display:dumpdevice) #:display:dumpdevice ()))

(setq #:sys-package:colon 'bitmap)


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; CREATE-BITMAP ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;
;;; Non exported function. See the next one.

(defun :create-bitmap (d w h bits)
  (let ((b (#:bitmap:make)))
    (:w b w)
    (:h b h)
    (:display b d)
    (cond ((and d (#:display:prologuep d))
	   ;; if a display is in use.
	   (send 'create-bitmap d b)
	   (#:display:bitmaps d (nconc1 (#:display:bitmaps d) b))
	   (:bits b bits))
	  (t
	   ;; if no display in use.
	   (:extend b bits)
	   (print "* Warning : bitmap created before bitprologue.")))
    b))


;;;
;;; Creates a BITMAP of Size (W*H) using default
;;; bits specified by the vector of bitvectors BITS
;;; If argument BITS is missing the bitmap will be cleared
;;; so creation will take the same time than when specified
;;; Every element of the vector BITS describes a line in the bitmap
;;; and every Byte describes 8 pixels.
;;; Bitmaps can now be created before bitprologue : that only fills the
;;; field EXTEND of the bitmap with BITS.

(#:display:defun create-bitmap ((w fix) (h fix) . rest)
   (when (cdr rest)
	 (error 'create-bitmap 'errwna (cdr rest)))
   (let ((bits (if rest
		   (car rest)
		 (makevector h (makestring (:round-to-byte w) 0)))))
     (#:vector:assert 'create-bitmap bits)
     (:create-bitmap (#:display:internal-current-display) w h bits)))


;;;
;;; Given a bitmap or bytemap B created before bitprologue, creates a correct
;;; bitmap (or bytemap) corresponding to display D.

(#:display:defun bitmap-prologue ((d display) (b bitmap))
  (selectq (type-of (:extend b))
	   (vector
	    (:create-bitmap d (:w b) (:h b) (:extend b)))
	   (cons
	    (:create-bytemap d (:w b) (:h b) (:extend b)))
	   (t
	    (error 'bitmap-prologue 'errbpa b))))





;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; WINDOW-BITMAP ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(#:display:defun window-bitmap ((window window))
   ;;; This function creates a new bitmap if not existing
   ;;; The bitmap returned contains the current pixels values displayed
   ;;; on the window WINDOW
  (or (#:graph-env:bitmap (#:window:graph-env window))
      (let ((bitmap (#:bitmap:make)))
	(:display bitmap (#:window:display window))
	(:w bitmap (#:window:width window))
	(:h bitmap (#:window:height window))
	(setq bitmap (send 'create-window-bitmap
			   (#:window:display window)
			   window
			   bitmap))
	(:display bitmap (#:window:display window))
	(:w bitmap (#:window:width window))
	(:h bitmap (#:window:height window))
	(#:graph-env:bitmap (#:window:graph-env window) bitmap)
	bitmap)))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; KILL-BITMAP ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(#:display:defun kill-bitmap ((bitmap bitmap))
   ;;; This frees the bitmap BITMAP
   ;;; Further use of this bitmap is forbidden because
   ;;; memory allocated on the server is freed by this call
  (send 'kill-bitmap (:display bitmap) bitmap)
  (#:display:bitmaps (#:bitmap:display bitmap)
		     (delq bitmap
			   (#:display:bitmaps (#:bitmap:display bitmap))))
  (#:bitmap:extend bitmap ())
  (#:bitmap:display bitmap ()))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; BMREF et BMSET ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


;;;
;;; Now, these functions test if args are out of bounds.

(#:display:defun bmref ((b bitmap) (x fix) (y fix))
  (#:bitmap:assert-in 'bmref b x y)
  (let ((display (:display b)))
    (#:display:assert-current 'bmref display)
    (send 'bmref display b x y)))


(#:display:defun bmset ((b bitmap) (x fix) (y fix) (bit fix))
  (#:bitmap:assert-in 'bmset b x y)
  (let ((display (:display b)))
    (#:display:assert-current 'bmref display)
    (send 'bmset display b x y bit)))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; BYTEREF et BYTESET ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(#:display:defun byteref ((b bitmap) (x fix) (y fix))
  (#:bitmap:assert-in 'byteref b x y)
  (let ((display (:display b)))
    (#:display:assert-current 'byteref display)
    (send 'byteref display b x y)))


(#:display:defun byteset ((b bitmap) (x fix) (y fix) (byte fix))
  (#:bitmap:assert-in 'byteset b x y)
  (let ((display (:display b)))
    (#:display:assert-current 'byteset display)
    (send 'byteset display b x y byte)))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; BITBLIT ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(#:display:defun bitblit ((b1 bitmap) (b2 bitmap)
			  (x1 fix) (y1 fix) (x2 fix) (y2 fix) (w fix) (h fix))
  ;;; See the doc 
  (:assert-same-display 'bitblit b1 b2)
  ;; Eventual call to dump module
  (when #:display:dumpdevice
	(funcall '#:display:dump:bitblit
		 #:display:dumpdevice b1 b2 x1 y1 x2 y2 w h))
  (send 'bitblit (:display b1) b1 b2 x1 y1 x2 y2 w h))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;                                  TOOLS                                      ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defvar #:system:print-bitmap-flag ())

(defun #:sharp:* arg
    (ncons (#:bitvector:read (car arg) ())))


(defun #:sharp:|B| ()
  (let ((first (peekcn)))
    (if (neq first #/C)
	(ncons (apply 'create-bitmap (read)))
      (readcn)
      (ncons (apply 'create-bytemap (read))))))


(defun #:bitmap:bits (bitmap . bits)
  (if (null bits)
      (let* ((hbitmap     (#:bitmap:h bitmap))
	     (wbitmap     (#:bitmap:w bitmap))
	     (strg-size   (:round-to-byte wbitmap))
	     (strg-indmax (sub1 strg-size))
	     (last-bits   (logand wbitmap 7))
	     (vect        (makevector hbitmap ()))
	     (bitvector   ())
	     (i 0))
	(repeat hbitmap
		(setq bitvector (makestring strg-size 0))
		(vset vect i bitvector)
		(typestring bitvector 'bitvector)
		(send 'get-bit-line (:display bitmap) bitmap i bitvector)
		(when (neq last-bits 0)
		      (sset bitvector
			    strg-indmax
			    (mask-field (sref bitvector strg-indmax)
					(sub 8 last-bits)
					8)))
		(setq i (add1 i)))
	vect)
    (let ((vect (car bits))
	  (bitline)
	  (olbitline)
	  (n 0)
	  (i 0))
      (repeat (vlength vect)
	      (setq bitline (vref vect n))
	      (setq n (add1 n))
	      (if (fixp bitline)
		  (repeat bitline
			  (send 'set-bit-line (:display bitmap)
				bitmap i olbitline)
			  (setq i (add1 i)))
		  (send 'set-bit-line (:display bitmap) bitmap i bitline)
		  (setq i (add1 i))
		  (setq olbitline bitline))))))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; CREATE-BYTEMAP ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


;;;
;;; This function is not exported. See create-bytemap.
;;; BYTES-TABLE = (VEC TAB) avec VEC correct.

(defun :create-bytemap (d w h bytes-table)
  (let (b)
    (cond ((not (and d (#:display:prologuep d))) ;; when done befor bitprologue
	   (setq b (:empty-bytemap d w h))
	   (:extend b bytes-table)
	   (print "* Warning : bytemap created before bitprologue")
	   b)
	  ((gt (send 'display-depth d) 1) ;; when done in a color display
	   (setq b (:empty-bytemap d w h))
	   (send 'create-bitmap d b)
	   (send 'bytes b (car bytes-table))
	   (send 'subst-colors (#:bitmap:display b)
		 b (:make-assoc-table (cadr bytes-table)))
	   (#:display:bitmaps d (nconc1 (#:display:bitmaps d) b))
	   b)
	  (t ;; On est en noir & blanc.
	   (:create-bitmap d w h
			   (if (eqn w (slen (vref (car bytes-table) 0)))
			       (:bytes-to-bits bytes-table)
			     (car bytes-table)))))))


(defun :empty-bytemap (d w h)
  (let ((b (#:bitmap:bytemap:make)))
    (:w b w)
    (:h b h)
    (:display b d)
    b))
    

;;;
;;; Creates a ByteMap (or a bitmap when in b&w) with size (W*H)
;;; bytes-table est une liste : (VEC TAB) avec :
;;; VEC : vecteur de bits.
;;; TAB : une table des couleurs (liste de vecteurs [ind r g b mut]).

(#:display:defun create-bytemap ((w fix) (h fix) . rest)
   (:create-bytemap (#:display:internal-current-display)
		    w h
		    (list (if rest
			      (car rest)
			    (makevector h (makestring w 0)))
			  (cadr rest))))


;;;
;;; Magic function which takes a bytes-table et returns a "bits"
;;; usable by CREATE-BITMAP

(defun :bytes-to-bits (bytes-table)
  (let* ((bytes (car bytes-table))
	 (w (slen (vref bytes 0)))
	 (ws (#:bitmap:round-to-byte w))
	 (table (cadr bytes-table))
	 item black-colors bitstring bytestring char
	 (bits (makevector (vlength bytes) ()))
	 )
    ;; black-colors will contain the index list of the black color
    (if table
	(mapc (lambda (item)
		(when (< (+ (vref item 1) (vref item 2) (vref item 3)) 48000)
		      (setq black-colors (cons (vref item 0) black-colors))))
	      table)
      (setq black-colors (ncons (#:color:extend
				 (#:display:foreground
				  (#:display:internal-current-display))))))
    (for (i 0 1 (sub1 (vlength bytes)))
	 (setq bytestring (vref bytes i))
	 (setq bitstring (makestring ws 0))
	 (if (fixp bytestring)
	     (vset bits i bytestring)
	   (for (j 0 1 (sub1 ws))
		(setq char 0)
		(for (k 0 1 7)
		     (when (memq (sref bytestring
				       (min (sub1 w) (add k (mul j 8))))
				 black-colors)
			   (setq char (logor char (logshift 1 (sub 7 k))))))
		(sset bitstring j char))
	   (vset bits i bitstring)))
    bits))



(defun #:bitmap:bytes (bitmap . bytes)
  (if (lt (send 'display-depth (#:bitmap:display bitmap)) 2)
      (ifn bytes 
	   (#:bitmap:bits bitmap)
	   (#:bitmap:bits bitmap (car bytes)))
      (if (null bytes)
	  (let* ((hbitmap (#:bitmap:h bitmap))
		 (wbitmap (#:bitmap:w bitmap))
		 (vect (makevector hbitmap ()))
		 (bitvector ())
		 (i 0))
	    (repeat hbitmap
		    (setq bitvector (makestring wbitmap 0))
		    (vset vect i bitvector)
		    (typestring bitvector 'bitvector)
		    (send 'get-byte-line (#:bitmap:display bitmap) 
			  bitmap i bitvector)
		    (setq i (add1 i)))
	    vect)
	(let ((vect (car bytes))
	      (bitline)
	      (oldbitline)
	      (n 0)
	      (i 0))
	  (repeat (vlength vect)
		  (setq bitline (vref vect n))
		  (setq n (add1 n))
		  (if (fixp bitline)
		      (repeat bitline
			      (send 'set-byte-line (#:bitmap:display bitmap)
				    bitmap i oldbitline)
			      (setq i (add1 i)))
		      (send 'set-byte-line (#:bitmap:display bitmap) 
			    bitmap i bitline)
		      (setq i (add1 i))
		      (setq oldbitline bitline)))))))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; The variable #:SYSTEM:COMPRESSED-ICON allows printing of bitmaps and
;;; bitvector using a compressed format (repeted chars and lines are grouped).
;;; 
;;; Example:
;;; 
;;; #B(40 4 #[#*0000000000
;;;           #*0000000000
;;;           #*0000000000
;;;           #*a5a5a5f3f3])
;;; 
;;; will be printed in compressed mode :
;;; 
;;; #B(40 4 #[#5*00*4
;;;           2
;;;           #5*a5*3f3f3])    
;;; 
;;; 
;;; The #-macro *, is able to read the normal or compressed mode.
;;; If the numerical argument is provided, it's the compressed mode,
;;; if not, it's the normal mode.
;;; 
;;; In the same way #:BITMAP:BITS decodes the compressed mode. One can write:
;;; 
;;; #B(1000 1000 #[*#aa*fd 999])
;;; 
;;; or:
;;; 
;;; #B(1000 1000 #[*125#aa*fd 999])
;;; 
;;; 
;;; 
;;; Format of the compressed mode of the BITVECTORs :
;;; 
;;;                      Internal                          External
;;; 
;;; Nible                0000 xxxx   0000 yyyy             0-9 A-F
;;; Predefined Byte      0001 xxxx                         G-V
;;; Small rep-factor     0010 xxxx                         a-p
;;; Large rep-factor     0011 0xxx   00yy yyyy             q-x
;;; 
;;; Terminal 0s          0011 1110                         +
;;; User rep-factor      0011 1111   0000 xxxx 0000 yyyy   * <h> <h>
;;; ExtraCode (not used) 0011 1xxx                         yzWXYZ
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defconstant :int->ext-encode-string
  "0123456789ABCDEFGHIJKLMNOPQRSTUVabcdefghijklmnopqrstuvwxyzWXYZ+*")


(defconstant :ext->int-encode-string
  (let ((strg-buffer (makestring 128 #$FF)))
    (for (strg-index 0 1 (1- (slength :int->ext-encode-string)))
         (sset strg-buffer
               (sref :int->ext-encode-string strg-index)
               strg-index))
    strg-buffer))


(defconstant :predefined-bytes
  (let ((strg-buffer (makestring 16 0)))
    (sset strg-buffer 00  #$00)
    (sset strg-buffer 01  #$FF)
    (sset strg-buffer 02  #$01)
    (sset strg-buffer 03  #$02)
    (sset strg-buffer 04  #$04)
    (sset strg-buffer 05  #$08)
    (sset strg-buffer 06  #$10)
    (sset strg-buffer 07  #$20)
    (sset strg-buffer 08  #$40)
    (sset strg-buffer 09  #$80)
    (sset strg-buffer 10  #$44)
    (sset strg-buffer 11  #$55)
    (sset strg-buffer 12  #$AA)
    (sset strg-buffer 13  #$11)
    (sset strg-buffer 14  #$C0)
    (sset strg-buffer 15  #$03)
    strg-buffer))


(defvar #:system:compressed-icon
  (when (boundp '#:system:compressed-icon)
	#:system:compressed-icon))


(defmacro :round-to-byte (n)
  `(logshift (add ,n 7) -3))


(defmacro :int->ext-encode (current-byte)
  `(sref :int->ext-encode-string ,current-byte))


(defun :ext->int-encode (current-byte)
  (let ((code (sref :ext->int-encode-string (logand current-byte #$7F))))
    (if (neq code #$FF)
	code
        (error '|#*| 'errsxt (list current-byte)))))


(defvar :stringbuffer (makestring 4000 0))

(defun #:bitvector:read (strg-size strg-buffer)  
  (if (fixp strg-size)
      (let ((previous-byte 0)
	    (current-byte)
	    (strg-index 0))
	(setq strg-buffer (makestring strg-size 0))
	(while (lt strg-index strg-size)
	  (setq current-byte (:ext->int-encode (readcn)))
	  (cond ((le current-byte  #$F)
		 ;; full "double nibble" format.
		 (setq previous-byte
		       (logor (logshift current-byte 4)
			      (:ext->int-encode (readcn))))
		 (sset strg-buffer strg-index previous-byte)
		 (setq strg-index (add1 strg-index)))
		((le current-byte #$1F)
		 ;; predefined character format
		 (setq previous-byte (sref :predefined-bytes
					   (logand current-byte #$F)))
		 (sset strg-buffer strg-index previous-byte)
		 (setq strg-index (add1 strg-index)))
		((le current-byte #$3F)
		 ;; all the repeat sequences
		 (repeat (add1 (cond ((le current-byte #$2F)
				      ;; small repeat
				      (logand current-byte #$F))
				     ((lt current-byte #$3E)
				      ;; large repeat
				      (logor (logshift (logand current-byte
							       #$F)
						       6)
					     (:ext->int-encode (readcn))))
				     ((eq current-byte #$3E)
				      ;; final repeat of 0: "+"
				      (setq strg-index strg-size)
				      -1)
				     ((eq current-byte #$3F)
				      ;; user repeat: "*"
				      (logor (logshift (:ext->int-encode
							(readcn))
						       4)
					     (:ext->int-encode (readcn))))))
			 (sset strg-buffer strg-index previous-byte)
			 (setq strg-index (add1 strg-index))))
		(t (error "#*"  'errsxt current-byte)))))
    (let ((pos 0))
      (untilexit complete
		 (sset :stringbuffer pos
		       (logor (logshift (:conv-to-hex (peekcn)) 4)
			      (progn (readcn)
				     (:conv-to-hex (readcn)))))
		 (incr pos))
      (setq strg-buffer (substring :stringbuffer 0 pos))))
  (typestring strg-buffer 'bitvector)
  strg-buffer)


(defun :conv-to-hex (char)
  (cond ((and (ge char #/0) (le char #/9))
	 (sub char #/0))
	((and (ge char #/A) (le char #/F))
	 (sub char (sub #/A 10)))
	((and (ge char #/a) (le char #/f))
	 (sub char (sub #/a 10)))
	(t (exit complete))))


(defun #:bitvector:prin (bitvector)
  ;; print a bitvector
  (let ((strg-size (slen bitvector))
	(strg-index 0)
	(current-byte))
    (let ((#:system:print-for-read ()))
      (if #:system:compressed-icon
	  ;; \\ This code is wrong is the line is cutted, but with the
	  ;; print-for-read+compressed-icon mode, a terpri is done
	  ;; after each line.
	  (prin "#" strg-size "*")
	  (prin "#*")))
    (if #:system:compressed-icon
	(let ((previous-byte -1)
	      (rep-factor 0))
	  (while (neq strg-index strg-size)
	    (setq current-byte (sref bitvector strg-index))
	    (if (eq current-byte previous-byte)
		(setq rep-factor (add1 rep-factor))
	        (progn
                  (:prin-aux previous-byte rep-factor)
                  (setq rep-factor 0)
                  (setq previous-byte current-byte)))
	    (setq strg-index (add1 strg-index)))
	  (if (and (eq previous-byte 0)
		   (neq rep-factor 0))
	      (princn (:int->ext-encode 62))
	      (:prin-aux previous-byte rep-factor)))
      (repeat strg-size
	      (setq current-byte (sref bitvector strg-index))
	      (princn (:int->ext-encode (logshift current-byte -4)))
	      (princn (:int->ext-encode (logand current-byte #$F)))
	      (setq strg-index (add1 strg-index))))))    


(defun :prin-aux (byte rep-factor)
  ;; print the byte <byte> with a rep factor of <rep-factor>
  (when (gt rep-factor 896)
	;; highest rep factor
	(:prin-aux byte (sub rep-factor 897))
	(setq rep-factor 896))
  (when (neq byte -1)
	;; to initialize the loop
	(let ((index-byte (chrpos byte :predefined-bytes)))
	  (if index-byte
	      ;; predefined byte
	      (princn (:int->ext-encode (add #$10 index-byte)))
	      (progn
		;; 2 nibble byte
		(princn (:int->ext-encode (logshift byte -4)))
		(princn (:int->ext-encode (logand byte #$F)))))))
  (when (neq rep-factor 0)
	;; rep factors start to 0
	(setq rep-factor (sub1 rep-factor))
	(if (lt rep-factor 16)
	    ;; 1 byte rep factor
	    (princn (:int->ext-encode (add rep-factor #$20)))
	    (progn
	      ;;2 byte rep factor
	      (princn (:int->ext-encode (add (logshift rep-factor -6) #$30)))
	      (princn (:int->ext-encode (logand rep-factor #$3F)))))))

(defun #:bitmap:prin (bitmap)
  (let ((hbitmap (:h bitmap))
	(wbitmap (:w bitmap)))
    (let ((#:system:print-for-read ()))
      (if #:system:print-bitmap-flag
	  (prin "(create-bitmap " wbitmap " " hbitmap " #[")
	  (prin "#B("  wbitmap " " hbitmap " #[")))
    (when #:system:print-for-read
	  (with ((rmargin (add1 (slen (outbuf)))))
		(terpri)
		(let* ((bbitmap   (:round-to-byte wbitmap))
		       (bitvect1  (makestring bbitmap 0))
		       (bitvect2  (makestring bbitmap -1))
		       (indmax    (sub1 bbitmap))
		       (last-bits (logand wbitmap 7))
		       (mask      (logshift #$FF (sub 8 last-bits)))
		       (line-index 0)
		       (rep-factor 0))
		  (typestring bitvect1 'bitvector)
		  (typestring bitvect2 'bitvector)
		  (repeat hbitmap
			  (send 'get-bit-line (:display bitmap)
				bitmap line-index bitvect1)
			  (setq line-index (add1 line-index))
			  (when (neq last-bits 0)
				(sset bitvect1
				      indmax
				      (logand (sref bitvect1 indmax) mask)))
			  (if (and #:system:compressed-icon
				   (equal bitvect1 bitvect2)
				   (neq line-index 1))
			      (setq rep-factor (add1 rep-factor))
			      (progn
				(when (neq rep-factor 0)
				      (print rep-factor))
				(print bitvect1)
					;; the "HackMem" exchange!
				(setq bitvect2 (prog1 bitvect1
						 (setq bitvect1 bitvect2)))
				(setq rep-factor 0))))
		  (when (neq rep-factor 0)
			(print rep-factor)))))
    (princn #/])
    (princn #/) )))


(defun #:bitmap:bytemap:prin (bitmap)
  (let ((hbitmap (send 'h bitmap))
	(wbitmap (send 'w bitmap)))
    (let ((#:system:print-for-read ()))
      (if #:system:print-bitmap-flag
	  (prin "(create-bytemap " wbitmap " " hbitmap " #[")
	  (prin "#BC("  wbitmap " " hbitmap " #[")))
    (when #:system:print-for-read
	  (with ((rmargin (add1 (slen (outbuf)))))
		(terpri)
		(let* ((bitvect1  (makestring wbitmap 0))
		       (bitvect2  (makestring wbitmap -1))
		       (indmax    (sub1 wbitmap))
		       (line-index 0)
		       (rep-factor 0))
		  (typestring bitvect1 'bitvector)
		  (typestring bitvect2 'bitvector)
		  (repeat hbitmap
			  (send 'get-byte-line (send 'display bitmap)
				bitmap line-index bitvect1)
			  (setq line-index (add1 line-index))
			  (if (and #:system:compressed-icon
				   (equal bitvect1 bitvect2)
				   (neq line-index 1))
			      (setq rep-factor (add1 rep-factor))
			      (progn
				(when (neq rep-factor 0)
				      (print rep-factor))
				(print bitvect1)
					;; the "HackMem" exchange
				(setq bitvect2 (prog1 bitvect1
						 (setq bitvect1 bitvect2)))
				(setq rep-factor 0))))
		  (when (neq rep-factor 0)
			(print rep-factor)))))
    (princn #/])
    (when #:system:print-bitmap-flag (princn #/'))
    (princn #/( )
    (when #:system:print-for-read
	  (let ((colors (all-colors))
		(col ()))
	    (while (setq col (nextl colors))
	      (princn #/#)
	      (princn #/[)
	      (prin (send 'extend col))
	      (princn #/ )
	      (prin (send 'red-component col))
	      (princn #/ )
	      (prin (send 'green-component col))
	      (princn #/ )
	      (prin (send 'blue-component col))
	      (princn #/ )
	      (prin (send 'mutable col))
	      (princn #/])
	      (terpri))))
    (princn #/))
    (princn #/))))


;;;
;;; Takes a color list (not of type COLOR)
;;; Returns an A-List with the substitutions (old . new) to be done
;;; on the indexes of the bitmap. old and new are fixnums.

(defun :make-assoc-table (colors1)
  (let (table color1 color2)
    (while colors1
      (setq color1 (nextl colors1)
	    color2 (:matching-color color1))
      (when (neq (vref color1 0) (send 'extend color2))
	    (setq table 
		  (acons (vref color1 0) (send 'extend color2) table))))
    table))


;;;
;;; find the closest color for COLOR.

(defun :matching-color (color)
  (let ((colors (all-colors))
	match
	matchcolor
	(minmatch 300000.)
	carcolors)
    (while colors
      (setq carcolors (nextl colors))
      (setq match (+ 
		   (if (neq (send 'mutable carcolors)
			    (vref color 4))
		       150000. 0)
		   (abs (sub (vref color 1) 
			     (send 'red-component carcolors)))
		   (abs (sub (vref color 2) 
			     (send 'green-component carcolors)))
		   (abs (sub (vref color 3) 
			     (send 'blue-component carcolors)))))
      (when (< match minmatch) 
	    (setq minmatch match matchcolor carcolors)))
    matchcolor))


;;;
;;; Obsolete function. Use SUBST-COLORS

(defun substitute-color (b old new)
  (subst-colors b (ncons (cons old new)))) ; definition for compatibility.



;;;
;;; This function makes obsolete function substitute-color.
;;; In a b/w display : does nothing.
;;; In a color display : given a bitmap or a bytemap, substitutes
;;; simultaneously colors.
;;; Second arg is a list ((old1 . new1) ... (oldn . newn)), where OLDi and
;;; NEWi are objets of COLOR class.

(#:display:defun subst-colors ((b bitmap) (l cons))
  (let (s old new)
    (mapc (lambda (i)
	    (#:cons:assert 'subst-colors i)
	    (setq old (car i) new (cdr i))
	    (#:color:assert 'subst-colors old)
	    (#:color:assert 'subst-colors new)
	    (unless (eq old new) ; keeps only true substitutions.
		    (newl s (cons (send 'extend old) (send 'extend new)))))
	  l)
    (when (gt (send 'display-depth (#:bitmap:display b)) 1)
	  (send 'subst-colors (#:bitmap:display b) b s))))


(defun #:display:subst-colors (d b l)
  (error 'subst-colors ':not-yet-implemented d))




;;; New create bytemap 
;;; (create-colored-bytemap (w h fg bg . bits))
;;; For future
