;;;; .EnTete	"Le-Lisp version 15.2x" " " "longname.ll"
;;;; .Date	"2003/05/23"
;;;; .EnPied	"longname.ll"
;;;; .Version	"1.00"
;;;; .Auteur 	"Eligis, C. Jullien"

(unless (>= (version) 15.2)
	 (error 'load 'erricf 'pathname))

#+(memq (system) '(win32 win64 win95 nt386))

(defextern set_long_filename (fix) fix)

(defun long-filename &nobind
   (if (arg)
       (if (eq (set_long_filename (if (arg 0) 1 0)) 1) t ())
       (if (eq (set_long_filename -1) 1) t ())))

#-(memq (system) '(win32 win64 win95 nt386))
(defun long-filename &nobind)
