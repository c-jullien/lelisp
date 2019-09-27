;;;; .EnTete	"Le-Lisp version 15.26" " " "allfonts.ll"
;;;; .Date	"2002/03/20"
;;;; .EnPied	"allfonts.ll"
;;;; .Version	"1.00"
;;;; .Auteur 	"C. Jullien"
;;;; .Annexe I	""

;;; Ve'rification de la version.

(unless (>= (version) 15.2)
        (error 'load 'erricf 'allfonts))

(defvar #:sys-package:colon 'allfonts)

(defun save-allfonts ()
   (with ((outchan (openo "allfonts")))
	 (mapc (lambda (x)
		  (print x))
	       (#:display:windows:get-font-names (current-display) 10000 "*"))
	 (close (outchan))))
