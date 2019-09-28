;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;; la structure qui conserve toutes les informations utiles sur
;;; l'environnement de compilation
;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
  

(eval-when (load eval compile)
(defabbrev llmodulereferences llmodulereferences)
)

(eval-when (load eval compile)
(defstruct {llmodulereferences}
  projectname
  modulesimport
  modulesexport
  modulesotherdef
  modulesinternal
;  modulescpenv
;  includes
  )
)

(setq #:sys-package:colon '{llmodulereferences})


(defun current-mr mr
  (if mr
      (setq #:crunch:current-mr (car mr))
    #:crunch:current-mr))

;;;
;;; Cree un module-reference vide.
(defun standardmodulereferences l
  (let ((res ({llmodulereferences}:make)))
    ({llmodulereferences}:projectname res (car l))
    res))

(eval-when (load eval compile)
(defmacro read-modules-references (file)
  `(current-mr (:read-from-file (standardmodulereferences) ,file)))
)

(defun :merge-modules-references (mr1 mr2)
  (let (
	(mdep1  (:modulesimport mr1))
	(mexp1  (:modulesexport mr1))
	(mabb1  (:modulesotherdef mr1))
	(mint1  (:modulesinternal mr1))
	(mdep2  (:modulesimport mr2))
	(mexp2  (:modulesexport mr2))
	(mabb2  (:modulesotherdef mr2))
	(mint2  (:modulesinternal mr2))
	)
					; verification
    (mapc (lambda(m)
	    (if (and (assoc (car m) mdep1)
		     (neq (:projectname mr1)(:projectname mr2))
		     (:projectname mr1)
		     (:projectname mr2)
		     )
		(#:crunch:warning 10 (car m)
				  (:projectname mr1)(:projectname mr2))))
	  mdep2)
    (:modulesimport mr1 (nunion mdep1 mdep2
				(lambda(x y)(eq (car x)(car y)))))
    (:modulesexport mr1 (nunion mexp1 mexp2
				(lambda(x y)(eq (car x)(car y)))))
    (:modulesotherdef mr1 (nunion mabb1 mabb2
				  (lambda(x y)(eq (car x)(car y)))))
    (:modulesinternal mr1 (nunion mint1 mint2
				  (lambda(x y)(eq (car x)(car y)))))
    (current-mr mr1)
    ))

;;;
;;; calcul
;;;

;; Remplit une structure mr a partir du fichier file.ref
(de :read-from-file (mr file)
    (let ((l (:readpair file)))
      (while l
	(funcall (getfn '#.#:sys-package:colon (nextl l)) mr (nextl l))))
    mr)

;;;
;;; Recopie  le contenu de mr dans le .ref

(defun :write-to-file (mr file)
  (#:crunch:advise UPDATEREF file)
  (let ((chan (openo file)))
    (protect
     (with ((outchan chan)
	    (lmargin 0)
	    (printlength 0)
	    (printline 0)
	    (printlevel 0))
	   (print)
	   (pprint mr)
	   (prinflush))
     (close chan))))


(de :pretty (mr)
    (let ((#:system:print-with-abbrev-flag ()))
      (mapc (lambda(f)
	      (print f)
	      (pprint (funcall (getfn '#.#:sys-package:colon f) mr))
	      )
	    (cdr (get '{llmodulereferences} 'defstruct)) )
      ))

;; Lit un fichier .ref 
(de :readpair (filename)
    (let (list)
      (#:crunch:advise READFILE filename)
      (ifn (and filename (probefile filename))
           (printerror 'read 'READFILEFAILED filename)
           (with ((inchan (#:crunch:openi filename)))
                 (untilexit eof
                            (newr list (read))
                            ))
	   )
      list
      ))
	    
;;;
;;; Rend l'element de list qui possede what dans son cdr.

(defun :member-in-cdr (list what)
  (let (xxx)
    (tag found
	 (mapc (lambda (l)
		 (when (memq what (cdr l))
		       (setq xxx l)
		       (exit found)))
	       list))
    xxx))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;; Fonctions de reconstruction des fichiers  .ref

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


;;; take a project PRJ-NAME and it's REF-FILE and a diagnostic DGNC
;;; return a module-reference structure filled.
;;; the reference-file is updated if necessary.
(defun :update-base (name ref-file dgnc)
  (let ((mr (if (probefile ref-file)
		({llmodulereferences}:read-from-file
		 (standardmodulereferences)
		 ref-file)
	      (standardmodulereferences)) )
	(mod ({diagnostic}:module-name dgnc))
	rewrite
	)
    ({llmodulereferences}:projectname mr name)

    (let ((mds (:modulesimport mr))
	  (import (if #:crunch:keep-wrong
		      (union ({diagnostic}:excess-imports dgnc)
			     ({diagnostic}:necessary-imports dgnc))
		    ({diagnostic}:necessary-imports dgnc)))
	  md)
      (unless (and (set-equal import (cdr (setq md (assq mod mds))))
		   md)
	      (setq rewrite t)
	      (cond
	       (md (rplacd md import))
	       (import (:modulesimport mr (nconc1 mds (cons mod import))) )
	       (t (:modulesimport mr (nconc1 mds (ncons mod))) ))
	      ))

    (let ((mes (:modulesexport mr))
	  (export ({diagnostic}:all-exports dgnc))
	  me)
      (unless (and (set-equal export (cdr (setq me (assq mod mes))) 'equal)
		   me)
	      (cond
	       (me (setq rewrite t)
		   (rplacd me export))
	       (export (setq rewrite t)
		       (:modulesexport mr (nconc1 mes (cons mod export))) ))
	      ))

    (let ((mas (:modulesotherdef mr))
	  (other ({diagnostic}:other-definitions dgnc))
	  ma)
      (unless (and (set-equal other (cdr (setq ma (assq mod mas))))
		   ma)
	      (cond
	       (ma (setq rewrite t)
		   (rplacd ma other))
	       (other (setq rewrite t)
		      (:modulesotherdef mr (nconc1 mas (cons mod other))) ))
	      )) 

    (unless #:crunch:keep-all-exports
	    (let ((mis (:modulesinternal mr))
		  (internal ({diagnostic}:internal-functions dgnc))
		  mi)
	      (unless (and (set-equal internal (cdr (setq mi (assq mod mis))) )
			   mi)
		      (cond
		       (mi (setq rewrite t)
			   (rplacd mi internal))
		       (internal (setq rewrite t)
				 (:modulesinternal mr
						   (nconc1 mis
							   (cons mod internal))) ))
		      )))

    (ifn rewrite
	 (#:crunch:advise NONEEDWRITE ref-file)
	 (unless #:crunch:keep-old
		 (#:crunch:save-file ref-file)
		 (:write-to-file mr ref-file)))
    mr))

;;;
;;; Etant donne' une fonction, ou autre chose. Qui l'exporte ?

;; return modules list which define <func> and export export it
(defun func-from (func)
  (:all-memq-in-cdr func
		    ({llmodulereferences}:modulesexport (current-mr))))

;; return modules list which define <str> structure and export export it
(defun struct-from (str)
  (:all-member-in-cdr str
		      ({llmodulereferences}:modulesexport (current-mr))))

;; return modules list which define <func> but no export it
(defun intern-from (func)
  (:all-memq-in-cdr func
		    ({llmodulereferences}:modulesinternal (current-mr))))

;; return modules list which define <thing>
(defun other-from (thing)
  (:all-memq-in-cdr thing
		    ({llmodulereferences}:modulesotherdef (current-mr))))

;; old form "abbrev-from"
(defun abbrev-from (abb)
  (other-from abb))

(defun :all-memq-in-cdr (e l)
  (mapcan (lambda (exp)
            (when (memq e (cdr exp))
                  (ncons (car exp))))
          l))

(defun :all-member-in-cdr (e l)
  (mapcan (lambda (exp)
            (when (member e (cdr exp))
                  (ncons (car exp))))
          l))


