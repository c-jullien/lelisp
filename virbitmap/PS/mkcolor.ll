;;; The function make-color-database creates a new database for
;;; PostScript colors from a rgb.txt file, usually found 
;;; in /usr/lib/X11 directory.
;;; The produced file can replace the former pscolors.dat
;;;
;;; Putting frequently used colors (white, black, greys etc.) at the
;;; beginning will save time.

(setq #:sys-package:colon 'mkcolor)


(defun make-color-database (xfile psfile)
  (let (r g b name colors)
    (with ((inchan (openi xfile))
	   (outchan (openo psfile)))
	  (untilexit eof
		     (setq r (read) g (read) b (read) name (readstring))
		     (for (i 0 1 (sub1 (slen name)))
			  (sset name i (lowercase (sref name i))))
		     (setq name (substring name (spanstring name " 	")))
		     (print  "{" name "}" r " " g " " b)
		     )
	  (close (outchan)))))
