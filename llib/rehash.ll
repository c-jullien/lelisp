; .EnTete "Le_Lisp version 15.2" " " "Optimiseur de pathnames"

; .Titre "Optimiseur de pathnames"
; .Auteur "Pascal Kuczynski"
; .Centre "$Id: rehash.ll,v 1.1 2006/12/09 10:41:04 jullien Exp $

(unless (>= (version) 15.2)
        (error 'load 'erricf 'rehash))

(defvar #:sys-package:colon 'rehash)

(add-feature 'rehash)

;;; l'ide'e est d'optimiser la recherche de fichiers dans
;;; l'arborescence de'crite par la variable #:system:path
;;; En effet cette recherche peut e^tre relativement couteuse (fonction
;;; de la longueur de la liste contenue dans #:system:path et du nombre
;;; de fichiers dans ces re'pertoires.
;;; La fonction PROBEPATHM rede'finie
;;; utilisera la base ainsi mise a` jour avant de reprendre l'algorithme
;;; habituel (pour rester comple`tement dynamique: les erreurs seront
;;; aussi lentes a` se de'clencher!)

; liste des modules charges
(defvar :all-modules ())
; le module entrain d'etre compile
(defvar :compiling-module ())
; les modules importes
(defvar :imported-modules ())
; pour causer
(defvar :verbose (when (boundp ':verbose) :verbose))

(defmacro :pr l
  `(when :verbose (print ,@l) ))

;;; recherche des .lm du repertoire <dir>
(de :rehash.lm (dir)
    ; dir is a pathname dir
    (unless (setq dir (directoryp dir))
	    (error 'rehash 'errunk dir))
    (:pr ";   rehash: adding directory " dir)
    (mapcar (lambda(f)
	      (cons (pathname-name f) f))
	    (expand-pathname (progn (set-pathname-name dir "*")
				    (set-pathname-type dir "lm")
				    dir)) )
    )

; on utilise une liste ( : pas de module hash a` charger! )
(defvar :path.lm (if (boundp ':path.lm)
		     :path.lm
		   (:rehash.lm (pathname #:system:llmod-directory))))

(unless (typefn 'oldprobepathm)
	(synonymq oldprobepathm probepathm))

;;; recherche incrementale du fichier <f> dans la base
(de :probepathm (f)
    (let ((s (pathname-name f)))
      ;; comptage des chargements d'entete de modules
      (let ((v (assoc s :all-modules)) )
	(if v (rplacd v (add1 (cdr v)))
	  (newl :all-modules (cons s 1))))
      ;; recherche du path du module
      (let ((r (cassoc s :path.lm)))
	(or ;; deja dans la base
	    r
	    ;; sinon on l'y met
	    (when (setq r (oldprobepathm f))
		  (let* ((pr (pathname r))
			 (pd (make-pathname ()()(pathname-directory pr) ()()))
			 )
		    (setq :path.lm
			  (nconc :path.lm (:rehash.lm pd)))
		    r))
	    ))
      ))

(de rehashinit ()
(synonymq probepathm :probepathm)

(trace (compilemodule  (entry (setq :compiling-module (car #:trace:arg1))
			      (setq :all-modules ())
			      (setq :imported-modules
				    (mapcar 'string
					    (cons :compiling-module
						  (getdefmodule
						   (readdefmodule
						    :compiling-module)
						   'import) )))
			      )
		       (exit  (:stats :compiling-module)
			      )
		       ))

;(trace (loadfile (when (let ((s (namestring #:trace:arg1)))
;			 (let ((l (slen s)))
;			   (and (gt l 3)
;				(eq (sref s (sub l 1)) #/o)
;				(eq (sref s (sub l 2)) #/l)
;				(eq (sref s (sub l 3)) #/.) ))) )
;		 (entry (printerror 'rehash
;				    "verify EVAL-WHEN inside loading module"
;				    #:trace:arg1))
;		 (exit  ())
;		 ))

t
); end rehashinit

(de :stats (mod)
    (:pr ";;; rehash: " (length :all-modules) " modules were search in path.")
    (when :compiling-module
	  (mapc (lambda((m . n))
;;		  (:pr ";   rehash: " m " met " n " times.")
		  (unless (member m :imported-modules)
		     (when (gt n 1)
			   (:pr ";;; rehash: ** Warning: I don't know why "
				m
				" was seen "
				n
				" times?")
			   )))
		:all-modules))
   )

(defun rehashend ()
;  (untrace loadfile)
  (untrace compilemodule)
  (synonymq probepathm oldprobepathm)
  ())

;;; initialisation
;(eval-when (load eval)
;(rehashinit)
;)
