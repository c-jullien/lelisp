
(defun cpackages ()
   ; returns an Alist ((pkgc . count) ... (pkgc . count))
   (let ((al '( ( () . 0) ))
	 (tot 0))
     (mapoblist (lambda (symb)
		  (setq tot (add1 tot))
		  (countpkgc (packagecell symb) al)))
     (mapc (lambda (slot)
	     (prinf "~S ~40T ~4D ~44T ~3D %"
		    (car slot)
		    (cdr slot)
		    (fix (/ (* (cdr slot) 100.) tot)))
	     (print))
	   (sort (lambda (x y) (if (eq (cdr x) (cdr y))
				   (pkgcmp (car x) (car y))
				   (gt (cdr x) (cdr y))))
		 al))))


(defun countpkgc (pkgc al)
  (let ((slot (assq pkgc al)))
     (if (consp slot)
	 (rplacd slot (add1 (cdr slot)))
         (nconc1 al (cons pkgc 1))))))


		
