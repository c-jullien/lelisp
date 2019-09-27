;;;
;;; testfloat.ll:  floating functions tests
;;;
;;; $Source: /usr/cvs/lelisp/lltest/testfloat.ll,v $
;;; $Date: 2016/05/21 10:36:07 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------



; Tests and performance measures of floating functions.
; Le-Lisp > 15.2

(unless (>= (version) 15.2)
        (error 'load 'erricf 'testfloat))

(setq #:sys-package:colon 'testfloat)

(unless (featurep 'testcomm)
       (libload testcomm t))
; Pour les 64bitfloats
(unless (or (featurep '64bitfloats)
            (eq 0. 0.))
	(add-feature '64bitfloats))

(defvar :counter 10000)            ; (nb loops for one test)

(defvar :speak ())                 ; compiler not speaky

(de testfloat (file)
  (let ((tti 0.)                      ; total time interpreted
	(ttc 0.)                      ; total time compiled
	                              ;  64 bits ? .
	(64bitfloatp (featurep '64bitfloats)))
    (with ((inchan (openi file)))
	  (untilexit eof
	    (let* ((form (read));(nextl l))
                  (formeval `(repeat :counter ,form))
                  (trueval (read));(nextl l))
                  timi
                  timc
                  nam
                  val)
                 (setq val (eval form))
                 (unless (#:testcomm:equalp val trueval)
			 (if #:system:foreign-language
			     (print "**** value of " form
                                " is " trueval " an not " val)
			     (print "**** la valeur de " form
				" est " trueval " pas " val)))
                 (when 64bitfloatp (gc))
                 (setq timi (fsub (time formeval) :ovhi))
                 (setq tti (fadd tti timi))
		 (if (featurep 'compiler)
		    (progn (setq nam (concat "testfloat" (gensym)))
			   (eval `(de ,nam () ,formeval))
			   (compiler nam () :speak :speak)
			   (when 64bitfloatp (gc))
			   (setq timc (fsub (time '(funcall nam)) :ovhc))
			   (if (flt timc 1.e-10) ;  negligible value in tests
			       (setq timc 0.))   ;
			   (setq ttc (fadd ttc timc)))
		   (setq ttc 0.))
                 (print (format ()  
                    "~S~20T= ~@? : ~5,2F ~40Tinterpreted, ~5,2F ~58Tcompiled."
                     form
		     (if 64bitfloatp
			 (if (numberp val) "~19@F" "~S~41T")
		         (if (numberp val) "~9@F" "~S~31T"))
		     val timi timc) ))))
       (print)
       (print (if #:system:foreign-language
		  "total interpreted time = "
		  "temps total interprete = ") tti)
       (print (if #:system:foreign-language
		  "total compiled time    = "
		  "temps total compile    = ") ttc)))

(de :ovhc ()
    (repeat :counter 'ok))

(when (featurep 'compiler)
      (compiler ':ovhc () :speak :speak))

(gc)
(defvar :ovhi (time '(repeat :counter 'ok)))         ; overhead interpreted
(gc)
(if (featurep 'compiler)
    (defvar :ovhc (time '(:ovhc)))                   ; overhead compiled
    (defvar :ovhc 0.))

(if #:system:foreign-language
    (progn
      (print "Test of floats:")
      (print)
      (print "System type: " (system) " " (version))
      (print "Features   : " #:system:features-list)
      (print "Number of loops      = " :counter)
      (print "Interpreted overhead = " :ovhi)
      (print "Compiled overhead    = " :ovhc)
      )
  (progn
    (print "Test des flottants:")
    (print)
    (print "Type du systeme: " (system) " " (version))
    (print "Traits presents: " #:system:features-list)
    (print "Nombre de boucles   = " :counter)
    (print "Overhead interprete = " :ovhi)
    (print "Overhead compile    = " :ovhc)))
(print)

(testfloat
 (catenate #:system:lltest-directory
	   "float.lt"))


