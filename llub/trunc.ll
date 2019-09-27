; .EnTete "Le-Lisp (c) version 15.2" " " "Truncate to 254 chars for Lisp files"
; .EnPied "trunc.ll" "%" " "
;
; .Centre "$Header"

;;;;
;;;; Outils de troncation de fichiers pour passage sur VMS.
;;;;




;;;
;;; Prend un fichier dont le pathname est passe' sous forme de chaine de
;;; caracte`res, et cre'e un fichier termine' par "VMS" tronque' a` 254 car.

(defun trunc-file (f)
  (let ((new (catenate f "VMS"))
	(path (pathname f))
	(#:sys-package:colon 'badtrunctovms)
	)
    (let ((#:system:print-for-read t) ; 2 let : c'est fait expres !
	  )
      (with ((inchan (openi path))
	     (outchan (openo new))
	     (rmargin 254)
	     )
	    ;; Cas particulier pour les fichiers .lm :
	    (when (equal (pathname-type path) "lm")
		  (read) ; saute le defmodule
		  (print "defmodule " (setq #:sys-package:colon (read))))
	    ;; On recopie toute la suite avec le nouveau rmargin.
	    (untilexit eof (print (read)))
	    (close (outchan))))
    (print "File " new " created.")
    new
    ))

  
;;;
;;; Tronque tous les fichiers "lo" et "lm" dans le re'pertoire courant.

(defun trunc-all ()
  (let (f)
    (mapc (lambda (path)
	    (setq f (namestring path))
	    (print "Truncating file " f "...")
	    (trunc-file f)
	    )
	  (append (wildcard "*.lm") (wildcard "*.lo")))))
