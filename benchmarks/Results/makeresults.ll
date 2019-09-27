; .EnTete "Le_Lisp version 15.23" " " "Edition des re'sultats"
; .EnPied "makeres.ll" "%" " "
; .nr % 1
; .Auteur "Je'ro^me Chailloux"

; Imprime les tableaux des re'sultats des tests des benchmarks
; pour Le-Lisp 15.2

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; aller chercher les resultats
; pour la compatibilite', c'est un peu lourd!
(let ((file (pathname #:system:loaded-from-file)))
  (set-pathname-name file "results")
  (if (probefile file)
      (loadfile file t)
    (set-pathname-name file "makeresults")
    (loadfile file t)
    ))

(defvar list-results
        (if (boundp 'list-results-ok) list-results-ok list-results))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
(defvar testnames '(
(fib20 .	"a well know lisper's benchmark")
(tak .		"about recursive calls and arguments (lexical binding)")
(stak .		"about recursive calls and dynamic binding")
(ctak .		"using dynamics escape")
(takl .		"using recurive calls and LISTS but without arithmetic")
(takr .		"who defeats code memory cache")
(boyer .	"theorem proving using big LISTS")
(browse .	"about dynamics LIST's operations and SYMBOL's PLIST")
(destru .	"about destructives LIST's operations")
(travinit .	"creates tree structure (DEFSTRUCT)")
(travrun .	"traverses tree structure (DEFSTRUCT)")
(deriv .	"symbolic derivative benchmark with lot of CONS")
(dderiv .	"symbolic derivative benchmark with PLIST")
(div2iter .	"iterative algorith for divide by 2, using LISTS")
(div2recur .	"recursive algorith for divide by 2, using LISTS")
(fft .		"FFT benchmark with a lot of float's operations")
(puzzle .	"intensive use of arrays")
(triang .	"intensive use of vectors")
))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defvar number-of-columns 7)  ; le nombre de colonnes

(defvar benchfilename
  (if (boundp 'benchfilename)
      benchfilename
    "results.txt"))   ; le nom du fichier de sortie

(defvar titlebench
  (if (boundp 'titlebench)
      titlebench
    "Publics results on Le-Lisp's licences"))

(defun makeres ntests
   ; fonction principale d'impression des tests.
   ; lance la totalite' des impressions des benchmarks
  (with ((outchan (openo benchfilename))
	 (rmargin (1+ (slen (outbuf)))) )
	(print)
	;; le header
	(makeheader list-results)
	;; tri par test
	(print)
	(makesortest list-results)
	(print)
	;; on lance les tableaux sur les ni 1er tests: ntests=(n1 n2 n3 ...)
	;;  ou sur les 17 tests par defaut
	(let ((ntests (or ntests '(17)) ))
	  (setq list-results (mapcar (lambda(r)
				       (if (eq (caar (cadr r)) 'fib20)
					   (list (car r)(cdadr r))
					 r))
				     list-results))
	  (mapc 'maketab-time  (cirlist list-results) ntests)
	  (mapc 'maketab-ratio (cirlist list-results) ntests)
;;;	  (mapc 'maketab-moy (cirlist list-results) ntests)
	  )
	(print)
	(close (outchan))))

(defun makeheader (list-results)
  (print (format () "~15T********************************************"))
  (print (format () "~15T*~23T~35@A*" "Benchmarks Le-Lisp 15.2"))
  (when (stringp titlebench)
	(setq titlebench (list titlebench)))
  (mapc (lambda(s)
	  (print (format () "~15T*~18T~40@A*" s)) )
	titlebench)
  (print (format () "~15T********************************************"))
  (print)
  ;; affichage des mnemoniques complets
  (print)
  (print "============  Machine's Full Names List")
  (print)
  (fullname (mapcar (lambda (i)
		      (cons (caddr (car i)) ;nickname
			    (caar i)))      ;fullname
		    list-results))
  (print "")
  )

(defun fullname (names)
  (prinf  "~2T~9@A~14T~50@A"
	  "Nickname"
	  "Full Name ( Os ) processor & optionnaly frequency")
  (terpri)(terpri)
  (let ((nicknames (sortl (mapcar 'car names))))
    (while nicknames
      (prinf "~3T~9@A~15T~45@A"
	     (car nicknames)
	     (cdr (assq (car nicknames) names)))
      (setq nicknames (delete (car nicknames) nicknames))
      (terpri)
      ))
)

(defun makesortest (list-results)
  (print "============  Sort on tests")(terpri)
  (mapc 'maketest1
	; la liste des noms des tests
	(mapcar 'car (cadar list-results)))
  )

(defun maketest1 (nom)
   ; sort un tableau par nom de test
   (maketest1p (cons nom                                         ; nom du test
		     (mapcan (lambda (x)
			       (let ((val ; temps du test "nom"
				          (car (cassq nom (cadr x)))))
				 (if (and (floatp val)
					  (<> val 0.0))
				     (let ((nick (concat (caddar x)))
					   (vers (cadddr (car x)))
					   (flt  (cadddr (cdar x)))
					   get
					   )
				       (setq get (getprop nick nom))
				       (if (and (equal (car get) vers)
						(or flt (cddr get))
						(not (eq nom 'fft)) )
					   ()
					 (putprop nick
						  (mcons vers val flt)
						  nom)
					 (ncons (mcons val nick vers flt))
					 ))) ))
			     list-results))))

(defun maketest1p (l)
  (let ((nom (nextl l)))
   (prinf "Test name: ~A ~20T: ~A" nom (cassq nom testnames))
   (terpri)(terpri)
   ; tri de toutes les machines sur le test "nom"
   (setq l (sort (lambda (x y) (< (car x) (car y))) l))
   (let ((minval (caar l)))
     (mapc (lambda (x)
	     (remprop (cadr x) nom)
	     (prinf "~8T~A  ~20T ~A  ~31T ~7,3F ~39T ~5,0F%"
		    (cadr x)
		    (caddr x)
		    (car x)
		    (* 100 (/ (car x) minval)))
	     (when (and (cdddr x);64bitfloats
			(eq nom 'fft))
		   (prin " (...with floats on 64 bits.)"))
	     (print))
	   l)))
  ; affichage d'un test par feuille
  (print ""))

(defun maketab-time (list-results nbtest)
   ; fabrique un tableau par temps sur "nbtest"
   (print "============  Timings on " nbtest " tests.")
   (print "               only TIME is considerate : best is best!")
   (maketabl list-results
	     nbtest
	     ()
	     t)
   (print "")
   )

(defun maketab-ratio (list-results nbtest)
   ; fabrique un tableau des rapports de performances sur les meilleurs tps
   (print "============  Ratios on " nbtest " tests.")
   (print "               only RATIO with best time, is considerate, bench by bench.")
   (maketabl (make-ratio-results (make-list-bestimes list-results)
				 list-results)
	     nbtest
	     '((moyarith . "Moy.Arith.")
	       (moygeo . "Moy. Geom.")
	       )
	     t)
   (print "")
   )

(defun maketab-moy (list-results nbtest)
   ; fabrique un tableau des rapports sur la moyenne
   (print "============  Median ratios on " nbtest " tests.")
   (print "               only RATIO with median time, is considerate, bench by bench.")
   (maketabl (make-ratio-results (make-list-moytimes list-results)
				 list-results)
	     nbtest
	     ()
	     ())
   (print "")
   )

(defun make-ratio-results (refer res)
   ; <refer> la liste des temps de reference servant de base aux calculs
   ; <res> la liste des re'sultats
   (mapcar (lambda (refer res1)
	     (list (car res1)
		   (mapcar (lambda (test1 refer1)
			     (list (car test1)
				   (if (= (cadr refer1) 0)
				       "Inf."
				     (/
				      (cadr test1)
				      (cadr refer1)))))
			   (cadr res1)
			   refer)))
	   (cirlist refer)
	   res))

(defun make-list-bestimes (l)
   ; fabrique la liste de tous les meilleurs temps, bench par bench,
   ; toutes machines, tous portages confondus.
   (let (bestime)
        (for (i 0 1 (1- (length (cadar l))))
	     (newl bestime (list (car (nth i (cadar l)))
				 (apply 'min
					(mapcar (lambda (l)
						  (or (numberp
						       (cadr (nth i (cadr l))))
						      1000.))
						l)))))
	(reverse bestime)))

(defun make-list-moytimes (l)
  ; fabrique la liste de toutes les moyennes, bench par bench,
  ; toutes machines, tous portages confondus.
  (let ((moy ()))
    (for (i 0 1 (sub1 (length (cadar l))))
	 (newl moy (list (car (nth i (cadar l)))
			 (let ((n 0))
			   (/ (apply '+
				     (mapcan
				      (lambda (l)
					(let ((x (cadr (nth i (cadr l)))))
					  (when (numberp x)
						(incr n)
						(list x)
						) ))
				      l))
			    n)) )))
    (reverse moy)))

;; affichage des tableaux
(setq number-of-tab-by-page 2)

(defun maketabl (list-results nbtest fct with-%??)
  ;; fabrique un tableau par temps
  ;; <list-results> la listes de tous les resultats
  ;; <nbtest> le nbre de test consideres
  ;; <fct> l'operation utilisee pour afficher une moyenne
  ;; <with-%??> on affiche le pourcentage ou non
  (let* ((lres (sort (lambda (l1 l2)
		       (< (cadr l1) (cadr l2)))
		     (mapcar (lambda (l) 
			       (list ;entete
				     (car l)
				     ; total
				     (apply '+
					 (firstn nbtest
						 (mapcar
						  (lambda(x)
						    (or (numberp (cadr x))
							0))
						  (cadr l)) ))
				     ; colonne de nombres
				     (cadr l)))
			     list-results)))
	  (minval (cadar lres))
	  (number-of-tab 0)
	  )
     (print)
     (while (consp lres)
       (if (le (incr number-of-tab) number-of-tab-by-page)
	   (print)
	 (print "")
	 (setq number-of-tab 1))
       ;; affichage du langage et de la version
       (let ((l lres))
	 (outpos 11)
	 (repeat number-of-columns
		 (prinf "~A~9T" (or (cadddr (car (nextl l))) " ")))
         (print))
       ;; affichage du nom de la machine
       (let ((l lres))
	 (outpos 11)
	 (repeat number-of-columns
		 (prinf "~A~9T" (or (caddar (nextl l)) " ")))
	 (print))
       ;; ligne blanche ou {64bitfloats}
       (let ((l lres))
	 (outpos 11)
	 (repeat number-of-columns
		 (prinf "~A~9T"
			(if (cadr (cdddar (nextl l)))
			    "{64 bits}"
			  " ")))
	 (print))
       ;; affichage des temps des NBTEST tests
       (let ((i -1))
	 (repeat nbtest
		 (let ((l lres))
		   (prinf "~A~10T"  (car (nth (incr i) (caddar l))))
		   (repeat number-of-columns
			   (prn2 (cadr (nth i (caddr (nextl l))))))
		   (print))))
       (print)
       ;; affichage du total
       (let ((l lres))
	 (prinf "~A~10T" "Total")
	 (repeat number-of-columns
		 (prn2 (cadr (nextl l)))))
       (print)
       ;; affichage eventuel du pourcentage (sur le total)
       (when with-%??
	     (let ((l lres) (val ))
	       (prinf "~12T")
	       (repeat number-of-columns
		       (setq val (cadr (nextl l)))
		       (if (floatp val)
			   (prinf "~4F%~9T" (* 100 (/ val minval)))
			 (prinf "~9T"))))
	     )
       (print)
       (print)
       ;; affichage eventuel de moyenne(s)
       (let ((fm fct))
	 (while fm
	   (let ((l lres)(f (nextl fm)))
	     (when (consp f)
		   (prinf "~A~10T" (cdr f))
		   (repeat number-of-columns
			   (prn2 (apply (car f)
					(mapcar 'cadr (caddr (nextl l)))) ))
		   ))
	   (print)))
       (print)
       (setq lres (nthcdr number-of-columns lres)))
     (print)))


(defun prn2 (val)
  (if (numberp val)
      (if (floatp val)
	  (if (flt val 0.1)
	      (prinf "~8,3F~9T" val)
	    (prinf "~7,2F~9T" val))
	(prn2 (float val)) )
    (prinf "    -~9T")))

(defun moyarith lval
  (setq lval (mapcan (lambda (val) (when (floatp val) (ncons val))) lval))
  (and lval
       (/ (apply '+ lval)
	  (length lval))))

(defun moygeo lval
  (setq lval (mapcan (lambda (val) (when (floatp val) (ncons val))) lval))
  (and lval

;; from JR
;;    (power (apply '+ (mapcar 'power lval (cirlist (length lval))))
;;	   (/ 1 (length lval))))

;; from PP
	 (power (apply '* lval)
		(/ 1 (length lval)))

	 ))

; et c'est parti!

(print "(makeres) ; to build " benchfilename)

