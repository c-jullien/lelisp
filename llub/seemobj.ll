;;;
;;; SEEMOBJ:  print various informations on objects in memory.
;;;
;;; $Source: /usr/cvs/lelisp/llub/seemobj.ll,v $
;;; $Date: 2016/05/21 10:36:08 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is a contribution of Le-Lisp version 15.
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------



(unless (>= (version) 15.25)
        (error 'load 'erricf 'seemobj))

(defvar #:sys-package:colon 'seemobj)


;;; ------------------------------------------------------------
;;; Print various informations on objects present in memory
;;; ------------------------------------------------------------

;;;
;;; On modules.
;;;

(defun see-module-size threshold
  (setq threshold (:threshold 'see-module-size threshold))
  (let ((lmod)		; list of present modules
	(modi)		; a module information
	(tot 0.0))
    (mapoblist (lambda (symb)
		 (setq modi (getprop symb '#:module:limit))
		 (when modi
		       (newl lmod (mcons symb 
					 (:address-to-float 
					     (subadr (cdr modi) (car modi)))
					 modi)))))
    (when (floatp threshold)
	  (setq lmod
		(mapcan (lambda (slot) 
			  (when (>= (cadr slot) threshold) (ncons slot)))
			lmod)))
    (setq lmod
	  (if (floatp threshold)
	      (sort (lambda (x y) (> (cadr x) (cadr y))) lmod)
	      (sort (lambda (x y) (alphalessp (car x) (car y))) lmod)))
    (print "Number of modules: " (length lmod))
    (print " Name           Start     End       Size(byte)")
    (mapc (lambda (slot)
	    (prin (car slot))
	    (outpos 15)
	    (:prin-address (caddr slot))
	    (outpos 25)
	    (:prin-address (cdddr slot))
	    (outpos 35)
	    (incr tot (cadr slot))
	    (:printf " ~8,0F" (cadr slot)))
	  lmod)
    (:printf "Total size:~35T ~8,0F" tot)))
    
;;;
;;; On packages.
;;;

(defun see-packages threshold
  ;; print the use of the packagecells
  (setq threshold (:threshold 'see-packages threshold))
  (let ((al (ncons (cons () 0.))))
    (mapoblist (lambda (symb)
		 (when (symbolp (packagecell symb))
		       (:incralist (packagecell symb) al))))
    (:print-simple-alist "symbols" al threshold)))

;;;
;;; On P-lists
;;;

(defun see-plists threshold
  ;; print the use of the property lists.
  (setq threshold (:threshold 'see-plists threshold))
  (let ((al (ncons (cons () 0.)))
	(pl))
    (mapoblist (lambda (symb)
		 (setq pl (plist symb))
		 (while pl 
		   (:incralist (car pl) al)
		   (setq pl (cddr pl)))))
    (:print-simple-alist "P-list element" al threshold)))

;;;
;;; On function type.
;;;

(defun see-function-type threshold
  ;; print the use of the function type.
  (setq threshold (:threshold 'see-function-type threshold))
  (let ((al (ncons (cons () 0.))))
    (mapoblist (lambda (symb)
		 (when (typefn symb)
		       (:incralist (typefn symb) al))))
    (:print-simple-alist "functions" al threshold)))


;;;
;;; On messages.
;;;

(defun see-messages threshold
  ;; see the use of messages.
  (setq threshold (:threshold 'seenessages threshold))
  (print "Current language: " (current-language))
  (let ((al (mapcar (lambda (lang) 
		      (cons lang (length (get-all-messages lang))))
		    (message-languages))))
    (:print-simple-alist "messages" al threshold)))

;;;
;;; On vectors
;;;

(defun see-vectors threshold
  ;; see the vectors.
  (setq threshold (:threshold 'see-vectors threshold))
  (let ((result (ncons (ncons 'vector)))  
	;; A-list ((typ (len1 . n) (len2 . m)..) ....)
	(total 0))
    (#:system:mapallvector 
     (lambda (vect)
       (incr total)
       (let ((typ (typevector vect))
	     (len (vlength vect)))
	 (let ((slot (assq typ result)))
	   (if slot
	       (let ((val (assq len (cdr slot))))
		 (if val
		     (rplacd val (1+ (cdr val)))
	             (rplacd slot (acons len 1.0 (cdr slot)))))
	       (newl result (list typ (cons len 1.0))))))))
    (print "Number of vectors: " total)
    (:print-types threshold result)))

;;;
;;; On strings.
;;;

(defun see-strings threshold
  ;; see the strings.
  (setq threshold (:threshold 'see-strings threshold))
  (let ((result (ncons (ncons 'string)))
	;; A-list ((typ (len1 . n) (len2 . m)..) ....)
	(total 0))
    (#:system:mapallstring
     (lambda (strg)
       (incr total)
       (let ((typ (typestring strg))
	     (len (slength strg)))
	 (let ((slot (assq typ result)))
	   (if slot
	       (let ((val (assq len (cdr slot))))
		 (if val
		     (rplacd val (1+ (cdr val)))
	             (rplacd slot (acons len 1.0 (cdr slot)))))
	       (newl result (list typ (cons len 1.0))))))))
    (print "Number of strings: " total)
    (:print-types threshold result)))

;;;
;;; On long lists
;;;

(defun :walk (obj path seen)
  (cond ((not (boundp 'obj)) ())
	((memq obj :global-long) ())
	((consp obj)
	 (newl path (cons 'list 0))
	 (when (:cir-length-p obj :global-max)
	       (newl :global-long obj)
	       (:print-list obj path))
	 (while (and (consp obj) (not (memq obj seen)))
	   (newl seen obj)
	   (rplacd (car path) (1+ (cdar path)))
	   (:walk (nextl obj) path seen)))
	((vectorp obj)
	 (newl seen obj)
	 (newl path (cons (typevector obj) 0))
	 (for (i 0 1 (sub1 (vlength obj)))
	      (let ((val (vref obj i)))
		(when (and (consp val) (not (memq val seen)))
		      (newl seen val)
		      (rplacd (car path) i)
		      (:walk val path seen)))))
	(t ())))
	 
(defun :walk-main (obj path)
    (:walk obj path ()))

(defun :print-list (lst path)
  (setq path (reverse path))
  (print "Long list from " (caar path) " of " (cdar path)
	 ", length: " (:cir-length lst))
  (let ((lmargin 0))
    (mapc (lambda (path)
	    (princn #\sp (incr lmargin 2))
	    (print (car path) " [" (cdr path) "]"))
	  (cdr path)))
  (with ((printline 3)
	 (printlength 30)
	 (lmargin 10))
	(princn #\sp (lmargin))
	(let ((#:system:print-for-read ()))
	  (prin lst)))
  (print))

(defun :cir-length-p (lst max)
  ;; returns t if (length lst) > max
  ;; handle circular lists.
  (:cir-length-p-aux lst max () 0.))

(defun :cir-length-p-aux (lst max seen n)
  (cond ((atom lst) ())
	((memq lst seen) ())
	((> n max) t)
	(t (:cir-length-p-aux (cdr lst) max (cons lst seen) (incr n)))))

(defun :cir-length (lst)
  ;; compute the length of a List even if it's circular
  (:cir-length-aux lst () 0.))

(defun :cir-length-aux (lst seen n)
  (cond ((atom lst) n)
	((memq lst seen) n)
	(t (:cir-length-aux (cdr lst) (cons lst seen) (incr n)))))

(defun see-1 (symb)
  (let ((max 100)
	(msg ()))
    (let ((:global-max max)
	  (:global-long ()))
      (when (boundp symb)
	    (:walk-main (symeval symb) (acons 'cval symb ()))))))


(defun see-lists threshold
  (let ((max (or (:threshold 'see-lists threshold) 100.))
	(msg ()))
    (let ((:global-max max)
	  (:global-long ()))
    ;; check the symbols
    (mapoblist (lambda (symb)
		 (when (neq (packagecell symb) '#.#:sys-package:colon)
		       (when (boundp symb)
			     (:walk-main (symeval symb) (acons 'cval symb ())))
		       (:walk-main (plist symb) (acons 'plist symb ()))
		       (:walk-main (valfn symb) (acons 'fval symb ())))))
    'see-lists)))


;;;
;;; Utilities
;;;

(defmacro :printf largs
  ;; doesn't exist in 15.25
  `(progn (prinf ,@largs) (print)))

(defun :threshold (fnt threshold)
  (when (consp threshold)
	(let ((value (car threshold)))
	  (cond ((fixp value) (setq value (float value)))
		((floatp value))
		(t (error fnt 'erroob value))))))

(defun :incralist (key al)
  ;; increment a counter for the key <key> on the a-list <al>
  (let ((slot (assq key al)))
     (if (consp slot)
	 (rplacd slot (+ (cdr slot) 1.))
         (nconc1 al (cons key 1.))))))

(defun :print-simple-alist (msg al threshold)
  ;; print the result of a simple a-list
  (let ((tot 0.)
	(size 0))
    (when (floatp threshold)
	  (setq al (mapcan (lambda (slot)
			     (when (>= (cdr slot) threshold) (ncons slot)))
			   al)))
    (setq tot (apply '+ (mapcar 'cdr al)))
    (setq size (add 4 (apply 'max (mapcar (lambda (slot)
					    (length (explode (car slot))))
					  al))))
    (when (ge size 40) (setq size 40))
    (prin " Name:") (outpos size) (print "      #")
    (mapc (lambda (slot)
	    (when (<> (cdr slot) 0.0)
		  (:prin-the-abbrev (car slot))
		  (when (ge (outpos) size) (print))
		  (outpos size)
		  (prinf "~8,0F     ~3D %"
			 (cdr slot)
			 (fix (/ (* (cdr slot) 100.) tot)) " %")
		  (print)))
	  (if (floatp threshold)
	      (sort (lambda (x y) (> (cdr x) (cdr y))) al)
	      (sort (lambda (x y) (pkgcmp (car x) (car y))) al)))
    (print "Total number of " msg ": " tot)))

(defun :print-types (threshold result)
  ;; print the result of see-strings or see-vectors
  (when (floatp threshold)
	(setq result 
	      (mapcan (lambda (slot)
			(when (>= (apply '+ (mapcar 'cdr (cdr slot)))
				  threshold)
			      (ncons slot)))
		      result)))
  (mapc (lambda (slot)
	  (rplacd slot (sort (lambda (x y) (< (car x) (car y))) (cdr slot))))
	result)
  (setq result (sort (lambda (x y) (pkgcmp (car x) (car y))) result))
  (print "      Type                   Size       #")
  (mapc (lambda (slot)
	  (:prin-the-abbrev (car slot))
	  (mapc (lambda (couple)
		  (outpos 30)
		  (prin (car couple))
		  (outpos 40)
		  (print (cdr couple)))
		(cdr slot)))
	result)))

(defun :prin-the-abbrev (symb)
  ;; print the name of a symbol or the corresponding abbreviation
  (if (symbolp symb)
      (let ((abb (has-an-abbrev symb)))
	(if abb
	    (prin "{" abb "}")
	    (prin symb)))
      (prin symb)))

(defun :prin-address (adr)
  ;; print an address in hexa
  (cond ((fixp adr)
	 (:prinhexb (logand (logshift adr -8) #$FF))
	 (:prinhexb (logand adr #$FF)))
	((consp adr)
	 (:prin-address (car adr))
	 (:prin-address (cdr adr)))
	(t (error ":prin-address, bad arg" adr))))

(defun :prinhexb (n)
  ;; print with 2 hexa digits the number <n> (16 bits)
  (cond ((not (fixp n)) (:error "prinhexb, bad arg" n))
	((lt n 0) (setq n #$FF))
	((lt n 16) (princn #/0)))
  (with ((obase 16)) (prin n)))

(defun :address-to-float (adr)
  (if (fixp adr)
      (if (ge adr 0)
	  adr
	  (+ 32768. (logand adr #$7FFF)))
      (+ (* 32768. (:address-to-float (car adr)))
	 (:address-to-float (cdr adr)))))


;;;
;;; Done.
;;;


(print ";; (see-lists         [n])   to print the use of long lists.")
(print ";; (see-vectors       [n])   to print the use of vectors.")
(print ";; (see-strings       [n])   to print the use of strings.")
(print ";; (see-packages      [n])   to print the use of packages.")
(print ";; (see-plists        [n])   to print the use of property lists.")
(print ";; (see-function-type [n])   to print the use of functions.")
(print ";; (see-messages      [n])   to print the use of messages.")
(print ";; (see-module-size   [n])   to print the size of the loaded modules.")
(print ";;                           [n] is a numerical threshold.")
       
