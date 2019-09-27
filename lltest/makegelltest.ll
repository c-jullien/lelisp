;;;
;;; testgell.ll:  common for all tests
;;;
;;; $Source: /usr/cvs/lelisp/lltest/makegelltest.ll,v $
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
        (error 'load 'erricf 'testgell))
(setq #:sys-package:colon 'testgell)

(unless (featurep 'testcomm)
	(libloadfile 'testcomm t)
	(libloadfile 'testgellcomm t))

; .Section " Common functions for making GELL test"
(de testfn (?speaki . f)
    ;;
    ;; test function
    ;; ?speaki = t  ; for a log result
    ;;
    (ifn f
	 (error 'testfn "Compiled tests only possible on file" ())
       (let* ((file.lt (pathname (car f)))
	      (file (catenate "g" (pathname-name file.lt)))
	      )
	 (with ((inchan (openi file.lt) )
		)
	       (dogellfn file)
	       )
	 ()
	 )))

(defvar :error-occured ())

(de dogellfn (file)
    ;; globals for easy debug
    ;; - testfnlu     : expression to test
    ;; - testfnval    : therical value
    ;; - testfnres    : calmulate value
    (let ((#:sys-package:itsoft 'test)
	  (file.ll (openo (catenate file ".ll")))
	  (file.lm (openo (catenate file ".lm")))
	  (allfct ())
	  )
      (setq #:system:redef-flag t)      ; no messages
      (setq :error-occured ())
      ;; pour fabriquer le module
      (with ((outchan file.lm))
	    (print "defmodule " file)
	    (print "files (" file ")")
	    (print "export (")
	    )
      ;; on y va...
      (untilexit eof
                 (setq testfnlu (tread))
                 (if (and (consp testfnlu) (eq (car testfnlu) 'test-serie))
		     (with ((outchan file.ll))
					; it's a title.
		       (terpri)
		       (print ";;;      " (cadr testfnlu))
		       (terpri)
		       )
		   (progn 
					; not a title.
		     (setq testfnres (tread))
		     (selectq (#:gell:compiled-p testfnlu testfnres)
		      ((0 1)); rien a faire
		      (2 ; on recopie
		       (with ((outchan file.ll))
			     (:prinfr testfnlu)(terpri))
		       )
		      (t ; on fabrique une fct
		       (let ((fct-name (symbol ()
					       (format ()
						       "~A"
						       testfnlu)) ))
			 (unless (memq fct-name allfct)
				 (newl allfct fct-name)
				 (with ((outchan file.ll))
				       (:prinfr `(de ,fct-name ()
						     ,testfnlu))
				       (terpri)
				       )
				 (with ((outchan file.lm))
				       (:prinfr fct-name)
				       (terpri))
				 )))) )
		   ))
      (with ((outchan file.lm)) (print ")"))
      ))

(defun :prinfr (obj)
  (let ((#:system:print-for-read t))
    (with ((rmargin (add1 (slen (outbuf)))))
	  (prin obj))))


(de tread ()
    (car (catcherror t (read))))

(add-feature 'testgell)


