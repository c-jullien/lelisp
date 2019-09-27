;;; .EnTete "Le-Lisp (c) version 15.2" " " "Test des appels externes Fortran"
;;; .EnPied "testfortran.ll" "%" " "
;;;
;;; .SuperTitre "Test des appels externes Fortran"
;;;
;;;
;;; .Centre "*****************************************************************"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*****************************************************************"
;;;
;;; .Centre "$Header: /usr/cvs/lelisp/lltest/testfortran.ll,v 1.2 2016/05/22 05:38:15 jullien Exp $"

(unless (>= (version) 15.2)
        (error 'load 'erricf 'testfortran))

(unless (featurep 'testcomm)(libload testcomm))
(unless (featurep 'pathname)(libload path))
(unless (or (featurep '64bitfloats)
	    (eq 0.0 0.0))
	(add-feature '64bitfloats))

(defvar cfilf
  (enough-namestring
    (merge-pathnames #u"testfortran.f"
                     (make-pathname ()()
                        (pathname-directory #:system:lltest-directory))
		     )))
(defvar cfilo "testfortran.o"))

(when (and #:system:cloadp
	   (eq (getglobal "_rfix1_") 0))
      (print "compiling " cfilf)
      (when (probefile cfilo)(deletefile cfilo))
      (comline (catenate "f77 -c " cfilf " -o " cfilo))
      (when (probefile cfilo)
	    (print "cloading " cfilo)
	    (cload cfilo)
	    (deletefile cfilo))
      )

;;; Tableau des correspondances de type:
;;;  Le-lisp  ;  Fortran        ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;   rfix    ; INTEGER*4       ;
;;;  rfloat   ; REAL*8          ;
;;; fixvector ; INTEGER*4 (lg)  ;
;;;floatvector; REAL*4 (lg)     ; Impossible en 64bitfloats!!   
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;; lancement des tests

(testfn t
	(catenate #:system:lltest-directory
		  (if (and (member (system) '(win32 win64 win95))
			   (not (eq (getglobal '|RFIX1|) 0)))
		      "msfort.lt"
		      "fortran.lt")))
