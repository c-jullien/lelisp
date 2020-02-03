

(defvar lind ())

(de ct (l)
    (if (null l)
	()
        (let ((al (assq (car l) lind)))
	     (if al
                 (rplacd al (add1 (cdr al)))
                 (newl lind (cons (car l) 1))))))
	    

(de pl ()
    (mapoblist (lambda (symb) (ct (plist symb)))))

                        
