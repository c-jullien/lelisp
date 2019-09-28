#|
   Gestion des PRINTER
   $Id: rtprint.ll,v 1.1 2006/12/09 11:22:09 jullien Exp $
|#


;; ----------- exported_function : "#:crunch:print"

(eval-when (load eval compile)
           (defmacro #:crunch:print args
             `(if (ge #:crunch:verbose 2)
                  (with ((outchan ())
			 (rmargin (add1 (slen (outbuf)))) )
                        (print ,@args)))))

;; ----------- exported_function : "#:crunch:printerror"
           
(eval-when (load eval compile)
           (defmacro #:crunch:printerror (a b c)
             `(if (ge #:crunch:verbose 2)
                  (with ((outchan ()))
                        (printerror ,a ,b ,c)))))

;; ----------- exported_function : "#:crunch:pprint"

(eval-when (load eval compile)
           (defmacro #:crunch:pprint args
             `(if (ge #:crunch:verbose 2)
                  (with ((outchan ()))
                        (pprint ,@args)))))

;; ----------- exported_function : "#:crunch:prin"

(eval-when (load eval compile)
           (defmacro #:crunch:prin args
             `(if (ge #:crunch:verbose 2)
                  (with ((outchan ()))
                        (prin ,@args)))))

;; ----------- exported_function : "#:crunch:printf"

(eval-when (load eval compile)
           (defmacro #:crunch:printf args
             `(if (ge #:crunch:verbose 2)
                  (with ((outchan ()))
                        (printf ,@args)
                        (terpri)))))

;; ----------- exported_function : "#:crunch:prinf"

(eval-when (load eval compile)
           (defmacro #:crunch:prinf args
             `(if (ge #:crunch:verbose 2)
                  (with ((outchan ()))
                        (prinf ,@args)))))

;; ----------- exported_function : "#:crunch:prinflush"
           
(eval-when (load eval compile)
           (defmacro #:crunch:prinflush args
             `(if (ge #:crunch:verbose 2)
                  (with ((outchan ()))
                        (prinflush ,@args)))))

;; ----------- exported_function : "#:crunch:terpri"

(eval-when (load eval compile)
           (defmacro #:crunch:terpri args
             `(if (ge #:crunch:verbose 2)
                  (with ((outchan ()))
                        (terpri ,@args)))))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Dans le canal () 
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(eval-when (load eval compile)
           (defmacro #:cruncherr:printerror (a b c)
             `(with ((outchan ()))
                    (let ((#:system:print-for-read ()))
                      (printerror ,a ,b ,c)))))

(eval-when (load eval compile)
           (defmacro #:cruncherr:print args
             `(with ((outchan ()))
                    (let ((#:system:print-for-read ()))
                      (print ,@args)))))

(eval-when (load eval compile)
           (defmacro #:cruncherr:pprint args
             `(with ((outchan ()))
                    (let ((#:system:print-for-read ()))
                      (pprint ,@args)))))

(eval-when (load eval compile)
           (defmacro #:cruncherr:terpri ()
             `(with ((outchan ()))
                    (let ((#:system:print-for-read ()))
                      (terpri)))))

(eval-when (load eval compile)
           (defmacro #:cruncherr:warn msg
             `(with ((outchan ()))
                    (let ((#:system:print-for-read ()))
                      (print "* Warning : " ,@msg)))))

(eval-when (load eval compile)
           (defmacro #:cruncherr:prinflush msg
             `(with ((outchan ()))
                    (let ((#:system:print-for-read ()))
                      (prinflush ,@msg)))))

(defun #:crunch:save-file (file)
  (and 
       (probefile (setq file (pathname file)))
       (let* ((ext (catenate (let ((ext (pathname-type file)))
			       (if (and #:system:dosp (ge (slen ext) 3))
				   (substring ext 0 2)
				 ext))
			     (cond (#:system:unixp "~")
				   (#:system:dosp "~")
				   (t "SAV"))))
	      (save (merge-pathnames
		    (make-pathname ()()()() ext)
		    file)))
         (if (catcherror () (renamefile file save))
	     (#:crunch:advise "Previous file ~A saved in" save file)
	   (printerror 'renamefile "permission denied" save)) )
       ))
