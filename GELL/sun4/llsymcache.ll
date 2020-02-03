;;; Construit le fichier "cache" de la table des symboles d'un binaire GELL
;;; pour SUN OS 4.1

(defun read4dig (strg ind)
   (let ((n 0))
        (repeat 4
		(setq n (logor (logshift n 4) 
			       (chrpos (sref strg ind) "0123456789abcdef")))
		(setq ind (add1 ind)))
	n))

(defun make-getglobal-cache (ifile ofile)
  (with ((inchan  (openi ifile))
         (outchan (openo ofile))
         (rmargin (add1 (slen (outbuf)))))
        (let (line value name)
             (print "(defvar gell-getglobal-special-cache '(")
	     (untilexit eof
			(setq line (readstring))
			(setq value (cons (read4dig line 0) (read4dig line 4)))
			(setq name (substring line 12))
			(print "	(""" name """ . " value ")"))
	     (print "))"))))


