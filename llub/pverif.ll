;;; .EnTete "Le-Lisp (c) version 15.2" " " " Pathnames tools"
;;; .EnPied "pverif.ll" "%" " "
;;;
;;; .SuperTitre "outils de ve'rification des pathnames portables"
;;; .Auteur "Pascal KUCZYNSKI"
;;;
;;; .Centre "*****************************************************************"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " Il est maintenu par ILOG SA, 2 Avenue Gallie'ni, 94250 Gentilly "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*****************************************************************"

;;; .Centre "$Header: /usr/cvs/lelisp/llub/pverif.ll,v 1.1 2006/12/09 10:41:07 jullien Exp $"

;;; Le but de ce fichier est de de'couvrir tous les pathnames capables
;;; de poser un proble`me lors d'un passage de UNIX a` OS/2,
;;; ou de UNIX-BSD a` UNIX-S5, ou de UNIX a` VMS.
;;; Tous ces pathnames sont ceux d'un environnement Le-Lisp donne', c.a.d.
;;; tous les fichiers contenus dans les re'pertoires
;;; de'crits par la variable #:SYSTEM:PATH.

(unless (>= (version) 15.2)
	 (error 'load 'erricf 'pverif))

(unless (featurep 'pathname)
	(loadmodule "path"))

(unless (typefn 'realsystem)
	(synonymq realsystem system)
	(synonymq realdefextern defextern)
	)

(defmessage ERRCONFLICTPATH
  (french "conflit de nom")
  (english "conflict name"))

;;; imported from PATH.LL
(de #:bsd:pathname-check (p) t)
(de #:sys5:pathname-check(p) 
    (let ((l (mcons (pathname-type p)(pathname-name p)(pathname-directory p))))
      (every (lambda(x) (if x
			    (le (slen (string x)) #:sys5:name-length)
			  t)) l )
      )))

(de #:aegis:pathname-check(p) t)


;;; pour le systeme UNIX
(de #:unix:pathname-check (p)
    (and (#:bsd:pathname-check p)
	 (#:sys5:pathname-check p)))

;;; pour le systeme UNIX-S5
(defvar #:sys5:name-length 14)

;; la fct PATHNAME dans le systeme teste'
(de #:sys5:pathname (p)
    (let ((pp (#:unix:pathname p)))
      (when (and (pathname-name pp)
		 (gt (slen (pathname-name pp)) #:sys5:name-length))
	    (set-pathname-name pp
			       (substring (pathname-name pp)
					  0
					  #:sys5:name-length)))
      (when (and (pathname-type pp)
		 (gt (slen (pathname-type pp)) #:sys5:name-length))
	    (set-pathname-type pp
			       (substring (pathname-type pp)
					  0
					  #:sys5:name-length)))
      (when (every (lambda(x) (if x
				  (le (slen (string x)) #:sys5:name-length)
				t))
		   (pathname-directory pp))
	    (set-pathname-directory pp
				    (mapcar (lambda (d)
					      (if (le (slen (string d))
						      #:sys5:name-length)
						  d
						(substring d
							   0
							   #:sys5:name-length)))
					    (pathname-directory pp))) )
      pp))


;;; pour le systeme OS/2 (en attendant d'avoir le vrai code)
(defvar #:os2:name-length 8)
(defvar #:os2:type-length 3)

;; la fct PATHNAME dans le systeme teste'
(de #:os2:pathname (p)
    (let ((pp (#:unix:pathname p)))
      (when (and (pathname-name pp)
		 (gt (slen (pathname-name pp)) #:os2:name-length))
	    (set-pathname-name pp
			       (substring (pathname-name pp)
					  0
					  #:os2:name-length)))
      (when (and (pathname-type pp)
		 (gt (slen (pathname-type pp)) #:os2:type-length))
	    (set-pathname-type pp
			       (substring (pathname-type pp)
					  0
					  #:os2:type-length)))
      pp))

;; la fct de verification de validite dans le systeme teste
(de #:os2:pathname-check (p)
    (and (and (pathname-name p)
	      (le (slen (pathname-name p)) #:os2:name-length))
	 (and (pathname-type p)
	      (le (slen (pathname-type p)) #:os2:type-length))))

;; la fct de test de conflit
(de test-allready (pi p)
    (equal (namestring pi) p))

;; ex: (verif-all-path 'os2)
;;
;; liste disponible: unix,sys5,os2

(de verif-all-path (sys)
    (mapcan #'(lambda(dir)
		(mapcan #'(lambda(p)
			    (verif-path p sys))
			(let ((pdir (pathname dir)))
			  (set-pathname-name pdir "*")
			  (expand-pathname pdir))))
	    #:system:path)
    )

(de verif-path (p to)
    (let (
	  (tcheck (symbol to 'pathname-check))
	  (ttest (symbol () 'test-allready))
	  (newp (funcall (symbol to 'pathname) (namestring p)))
	  (s ())
	  )
      (unless (funcall tcheck p)
	      (if (setq s (get-path newp))
		  (unless (funcall ttest s (namestring p))
;			  (set-path newp p)
			  (list (printerror 'verif-path
					    'ERRCONFLICTPATH
					    (cons p s))) )
		(set-path newp p)
		())
	      )))

(unless (featurep 'hash)
	(loadmodule "hash"))

(defvar realpath-table (make-hash-table-equal))

(de get-path (p)
    (gethash p realpath-table))

(de set-path (p pp)
    (puthash p realpath-table  pp))

(print "; pour verifier que vos paths UNIX sont portables sur OS/2, lancer")
(print "; (VERIF-ALL-PATH 'os2) dans l'environnement a` tester.")
(print "; pour verifier que vos paths UNIX sont portables sur UNIX-S5, lancer")
(print "; (VERIF-ALL-PATH 'sys5) dans l'environnement a` tester.")
(print ";")
(print "; pour connaitre en plus les paths globalement non portables:")
(print "; (SETQ *PORTABLE-PATHNAME* T)")
