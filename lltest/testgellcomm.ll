;;;
;;; testgellcomm.ll:  common for all tests
;;;
;;; $Source: /usr/cvs/lelisp/lltest/testgellcomm.ll,v $
;;; $Date: 2016/05/21 10:36:07 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

(unless (>= (version) 15.2)
        (error 'load 'erricf 'testgellcomm))

(unless (featurep 'testcomm)
	(libloadfile 'testcomm t))

(setq #:sys-package:colon 'testcomm)

(setq #:system:read-case-flag ())

; .Section " Common functions for GELL test"
(de testfn (?speaki . file)
    ;; if no file then read on current input
    ;;
    ;; test function
    ;; ?speaki = t  ; for a log result
    ;;
    (if file
	(let* ((file.lt (pathname (car file)))
	       (file.le (catenate "g" (pathname-name file.lt)
				  ".le"))
	      )
	  (libloadfile file.le t)
	  (with ((inchan (openi file.lt)))
		(dotestfn)
		(exit))
	  (dotestfn)
	  (exit eof))
      )
)

(defvar :error-occured ())

(de #:gell:compiled-p (read eval)
    (cond
      ;; les formes non compilees mais testees qd meme
      ((or ; avec les atom
	   (atom read)
	   ; avec les affectations
	   (memq (car read)
		 '(setq defvar))
	   )
       0)
      ;; les formes non testees en compile
      ((or
	   ; avec les flet
	   (eq (car read) 'flet)
	   ; avec les erreurs
	   (and (consp eval)
		(memq (car eval)
		      '(
			err0dv
			errbal
			errbdf
			errbpa
			errgen
			errilb
			errios
			errnab
			errnfa
			errnia
			errnla
			errnna
			errnsa
			errnva
			erroob
			errstc
			errstl
			errsxt
			errsym
			errudf
			errudv
			errvec
			errwna
			errxia
			)
	   )) )
       1)
      ;; les definitions de fct
      ((memq (car read)
	     '(de defun df defmacro dm
		  deftclass defstruct lambda flambda))
       0)
      ;; on compile le reste
      (t
       t)
      ))

(de dotestfn ()
    ;; globals for easy debug
    ;; - testfnlu     : expression to test
    ;; - testfnval    : therical value
    ;; - testfnres    : calculate value
    (let ((#:sys-package:itsoft 'test))
      (setq #:system:redef-flag t)      ; no messages
      (setq :error-occured ())
      (untilexit eof
                 ; processing errors
                 (setq testfnlu (tread))
                 (if (and (consp testfnlu) (eq (car testfnlu) 'test-serie))
                     (progn
		       ; it's a title.
                       (if (cddr testfnlu)
                           (setq ?speaki (caddr testfnlu)))
                       (ifn ?speaki
                            (print "      " (cadr testfnlu))
                            (terpri) (print (cadr testfnlu)) (terpri)))
		     (progn 
		       ; not a title.
		       (setq testfnres (tread))
		       ; print before any side effects.
		       (when ?speaki
			     (prin "          " testfnlu " = ")
			     (:prinfr testfnres)
			     (print))
		       (setq testfnval
			     (catcherror t
			      (selectq (#:gell:compiled-p testfnlu testfnres)
				 ;; formes evaluees
				 (0
				  (eval testfnlu))
				 ;; formes non testees (error ...)
				 (1
				  testfnres)
				 ;; definitions deja faites en GELL
				 (2
				  testfnres)
				 ;; les formes compilees & testees
				 (t
				  (funcall (symbol ()
						   (format ()
							   "~A"
							   testfnlu)))
				  )) ))
		       (setq :flt-error-flag ())
		       (unless (:equalp (car testfnval) testfnres)
			       (setq :error-occured t)
			       (prin (if :flt-error-flag
					 "*FLT*"  "*****")
				     (if #:system:foreign-language
					 " the value of: "
				         " la valeur de : "))
			       (:prinfr testfnlu)
			       (prin (if #:system:foreign-language
					 " should be: "
				         " devrait e^tre : "))
			       (:prinfr testfnres)
			       (prin (if #:system:foreign-language
					 " and not:  "
				         " et non pas :  "))
			       (:prinfr (car testfnval))
			       (terpri)) )))))

(defun :prinfr (obj)
  (let ((#:system:print-for-read t))
    (prin obj)))


(de #:test:syserror (f m a)
    ; return list (name-error fnt)
    (err (list (list m f a))))

(de tread ()
    (car (catcherror t (read))))

(add-feature 'testgellcomm)


