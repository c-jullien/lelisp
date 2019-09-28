; .EnTete "Le-Lisp (c) version 15.2" " " "See big objects"
; .EnPied "seebigob.ll" "%" " "
; .SuperTitre "See big objects"
;
; .Centre "$Header:"

;;;
;;; A set of functions to see big objects in a core image
;;;

(unless (>= (version) 15.2)
     (error 'load 'erricf 'loadfile))

;;;
;;; The package
;;;

(setq #:sys-package:colon 'seebigo)


;;;
;;; Big Lists
;;;

(defun :cir-length-p (lst max)
  ;; returns t if (length lst) > max
  (:cir-length-p-aux lst max () 0))

(defun :cir-length-p-aux (lst max see n)
  (cond ((atom lst) ())
	((memq lst see) ())
	((> n max) t)
	(t (:cir-length-p-aux (cdr lst) max (cons lst see) (incr n)))))

(defun :cir-length (lst)
  ;; compute the length of a List even if it's circular
  (:cir-length-aux lst () 0))

(defun :cir-length-aux (lst see n)
  (cond ((atom lst) n)
	((memq lst see) n)
	(t (:cir-length-aux (cdr lst) (cons lst see) (incr n)))))

(defun :check-list (name msg max lst)
  (when (:cir-length-p lst max)
	(print "Big list in " msg " of: " name 
	       ", length: " (:cir-length lst))))
  
(defun see-big-lists larg
  (let ((max (if (null larg) 1000 (car larg)))
	(msg ()))
    ;; check the symbols
    (mapoblist (lambda (symb)
		 (when (boundp symb)
		       (:check-list symb "cval"  max (symeval symb)))
		 (:check-list symb "plist" max (plist symb))))
    'see-big-lists))

;;;
;;; The user functions
;;;

(print "(see-big-lists [n]) see the long lists > n")
