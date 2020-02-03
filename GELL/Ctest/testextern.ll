;;; .EnTete "Le-Lisp (c) version 15.2" " " "Test des appels externes"
;;; .EnPied "testextern.ll" "%" " "
;;;
;;; .SuperTitre "Test des appels externes"
;;;
;;;
;;; .Centre "*****************************************************************"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " Il est maintenu par ILOG SA, 2 Avenue Gallie'ni, 94250 Gentilly "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*****************************************************************"
;;;
;;; .Centre "$Header: /nfs/lelisp15/work/lltest/RCS/testextern.ll,v 9.1 92/12/09 18:44:45 kuczynsk Rel $"

(unless (>= (version) 15.25)
        (error 'load 'erricf 'testextern))

(unless (featurep 'testcomm)(libload testcomm))
(unless (featurep 'pathname)(libload path))
(unless (or (featurep '64bitfloats)
	    (eq 0.0 0.0))
	(add-feature '64bitfloats))

(defvar cfilc
  (enough-namestring
    (merge-pathnames #u"testext.c"
                     (make-pathname ()()
                       (pathname-directory #:system:lltest-directory))
   )))
(defvar cfilo "testext.o"))

(when (and #:system:cloadp 
	   (eq (getglobal "cons_en_c") 0))
      (print "; compiling " cfilc)
      (when (probefile cfilo)(deletefile cfilo))
      (cond 
	    ((memq (system) '(decstation magnum sonyr3000 iris4d))
	     (comline (catenate "cc -G 0 -I. -I../"(system)"/C -c " cfilc )) )
	    (t
	     (comline (catenate "cc -I. -I../"(system)"/C -c " cfilc )) ))
      (when (probefile cfilo)
	    (print "; cloading " cfilo)
	    (cload cfilo)
	    (deletefile cfilo))
      )

;; ces 2 fonctions sont en standard dans le binaire lisp
;; on les teste dans tous les cas
(libload testextmin)

(when (neq (getglobal "cons_en_c") 0)
;; les fonctions qui suivent sont definies dans testext.c
;; lequel est soit charge par CLOAD, soit linker statiquement

(print "; doing defexterns ...")
;; toutes les fonctions qui suivent sont definies
;; dans testext.c soit charge' par CLOAD, soit linker statiquement
(defextern _tlno () fix)          ; on essaye en mettant un _
(defextern tlfix (fix) fix)       ;   et en n'en mettant pas

(defextern tlfloat (float) fix)   ;
(defextern tlfloat_ (float) fix)  ;
(defextern tlfloat_1 (float) fix) ; on teste les noms de 8 car. communs
(defextern tlfloat_2 (float float) fix)

(defextern-cache t) ; on en profite pour tester DEFEXTERN-CACHE

(defextern _trfix (rfix))         ; on teste en mettant un _

(defextern _tlstring (string) fix); on teste en mettant un _

(defextern _tlstring3 (string string string) fix)
				  ; on teste les noms de 8 car. communs

(defextern tlvector (vector fix) fix)
				  ; on teste en ne mettant pas de _


(defextern trfloat (rfloat) float)
(defextern trfloat1 (rfloat) float)

(defextern ttabint (fix fixvector))
(defextern ttabintonly (fixvector))
; On ne sait pas passer (& repasser) des tableaux de flottants 64 bits.
(unless (featurep '64bitfloats)
	(defextern ttabflt (fix floatvector))
	(defextern tflt_lispcall (fix floatvector))
	(defextern tflt_getsym (fix floatvector))
	)

(defextern tlt (t) fix)

(defextern tlexternal (external) fix)

(defextern tcfloat (fix) float)
(defextern tcfloat2 (float float) float)
(defextern f_s_to_d () float)

(defextern tcstring (fix) string)
(defextern conv1_tcstring (string) string)
(defextern conv2_tcstring (string string) string)
;peut-etre un jour: (defextern _tcvector (vector fix) vector)
(defextern tct (fix) t)
(defextern tcexternal (fix) external)

(defextern tlnadic (fix fix fix fix fix fix fix fix fix fix fix) fix)
(defextern tnbmaxi (fix fix fix fix fix fix fix fix
		     fix fix fix fix fix fix fix fix
		     fix fix fix fix fix fix fix fix
		     fix fix fix fix fix fix fix fix ))
(defextern tnbmaxf (float float float float float float float float
		     float float float float float float float float
		     float float float float float float float float
		     float float float float float float float float ))
(defextern tnbmaxri (rfix rfix rfix rfix rfix rfix rfix rfix
		      rfix rfix rfix rfix rfix rfix rfix rfix
		      rfix rfix rfix rfix rfix rfix rfix rfix
		      rfix rfix rfix rfix rfix rfix rfix rfix ))
(defextern tnbmaxrf (rfloat rfloat rfloat rfloat rfloat rfloat rfloat rfloat
		      rfloat rfloat rfloat rfloat rfloat rfloat rfloat rfloat
		      rfloat rfloat rfloat rfloat rfloat rfloat rfloat rfloat
		      rfloat rfloat rfloat rfloat rfloat rfloat rfloat rfloat))

(defextern trfixrfloat (rfix rfloat) float)
; On ne sait pas passer (& repasser) des tableaux de flottants 64 bits.
(unless (featurep '64bitfloats)
	(defextern ttabother (fix fix fixvector float float fix
				   floatvector fixvector fix fix))
	)

(defextern struct_un (fix float string) external)
(defextern tltout (fix float string vector fix) fix)
(defextern tlmalloc (fix) external)

(defextern getsym (string) t)
(defextern cons_en_c (t t) t)

(defextern vect_to_list (vector fix) t)

(defextern cfib (fix) fix)
(defextern init_fib ())

;(defextern tlcfloat (fix) float)
(defextern tpafloat () t)		; test pusharg + lispcall float
                       ; On ramene un type T car le resultat rendu, est
                       ;  un flottant qui a ete range' dans la pile lisp
                       ;  avec PUSHARG, donc de'ja` transforme' pour
                       ;  le monde Lisp. Si on mettait FLOAT, on ferait
                       ;  la transformation encore 1 fois!!
(defextern tpamultifloat (float) t)
(defextern tlcstring () string)        ; test returning a string from lisp
                       ; Avec une string, c'est OK car C sait coercer un
                       ;  ptr en un autre pointeur.
(defextern tpastring () fix)		; test pusharg string
(defextern tpamultistrg (string) t)    ; test plusieurs pusharg string

(defextern-cache ()) ; fin du getglobal multiple

; On ne sait pas passer (& repasser) des tableaux de flottants 64 bits.
	(defextern crac (fix)); Test de GC pendant PUSHARG
	(defextern crac2 (fix)); Test de GC pendant 2 PUSHARG
	(defextern croc (fix)); Test de GC pendant GETSYM
	(defextern cric (fix)); Test de GC pendant LISPCALL

(defextern c_i1 (fixvector fix))
(defextern c_i2 (fixvector t t fix string))

(unless (featurep '64bitfloats)
	(defextern c_f1 (floatvector fix))
	(defextern c_f2 (floatvector t t fix string))
)

(defextern test_float_lispcall () t) ; Test de lispcall avec des floats 

(defextern test_openi (string) t) ; test d'appel de openi par LISPCALL
(defextern test_openo (string) t) ; test d'appel de openo par LISPCALL
(defextern test_read_in_file () t) ; test d'appel de read_in_file par LISPCALL
(defextern test_flush () t) ; test d'appel de flush par LISPCALL
(defextern test_close (fix) t) ; test d'appel de close par LISPCALL
(defextern test_deletefile (string) t); test d'appel de deletefile par LISPCALL
(defextern test_renamefile
  (string string) t) ; test d'appel de renamefile par LISPCALL
(defextern test_copyfile
  (string string) t) ; test d'appel de copyfile par LISPCALL
(defextern test_probefile (string) t) ; test d'appel de probefile par LISPCALL
(defextern test_runtime () t) ; test d'appel de runtime par LISPCALL
(defextern test_sleep (float) t) ; test d'appel de sleep par LISPCALL
(defextern test_date () t) ; test d'appel de date par LISPCALL
(defextern test_getenv (string) t) ; test d'appel de getenv par LISPCALL
(defextern test_float (fix) t) ; test d'appel de float par LISPCALL
(defextern test_fix (float) t) ; test d'appel de fix par LISPCALL
(defextern test_string (float) t) ; test d'appel de string par LISPCALL
(defextern test_version () t) ; test d'appel de version par LISPCALL
(defextern test_getglobal (string) t) ; test d'appel de getglobal par LISPCALL
(defextern test_fadd (float float) t) ; test d'appel de fadd par LISPCALL
(defextern test_power (float float) t) ; test d'appel de power par LISPCALL

(defextern cboucle()); pour tester le break (4 coups)quand c'est C qui tourne

(defextern do_not_kill1 () fix)
(defextern c_kill1 () fix)
(defextern c_kill2 (fix fix fix fix fix) fix)

(print "; done.")
(gc t)

(de #:testgc:gcalarm () (setq gcalarm t))

(de fib (n)
    (cond ((eq n 1) 1)
          ((eq n 2) 1)
          (t (add (cfib (sub1 n)) (cfib (sub n 2))))))

(de llcrac (s) ) ; juste pour appeler lisp
(de llcrac2 (s1 s2) ; juste pour appeler lisp
    (unless (and (eqstring s1 "Hello")
		 (eqstring s2 "World"))
	    (print "** ERREUR dans la transmission des chaines par LISPCALL")))
(de llcroc () )  ; juste pour appeler lisp
(de llcric ()(makestring 1 #/a)); pour consommer de la string

(de ll_f1 (fvec lg)
    (c_f1 fvec lg))
(de ll_f2 (fvec lg)
    (let ((v (makevector lg 0.)))
      (c_f2 v v fvec lg "ok")
      (setq ll_f2 v)))
(de ll_f3 (v s)
    (rplacd mem s)
    (rplaca mem v))

(de ll_i1 (fint lg)
    (c_i1 fint lg))
(de ll_i2 (fint lg)
    (let ((v (makevector lg 0)))
      (c_i2 v v fint lg "ok")
      (setq ll_i2 v)))
(de ll_i3 (v s)
    (rplacd mem s)
    (rplaca mem v))


;; pour tester qu'on ne casse pas la pile (rs6000)
(de kill_or_not_kill1 ()
     (with ((outchan (openo "/tmp/llfread")))
	   (print "une ligne")
	   )
     (with ((inchan (openi "/tmp/llfread")))
	   (readcn))
     (deletefile "/tmp/llfread"))

(de ll_kill2 (a1 a2 a3 a4 a5)
    (c_kill2 a1 a2 a3 a4 (* 2 a5))
)


(testfn ()
	(catenate #:system:lltest-directory 
                  "ext.lt"))

); end of testext.c case
