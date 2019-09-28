;;;;;; .EnTete "Le-Lisp (c) version 15.2" " " "Fichier de test"
;;; .EnPied "testbv.ll" "%" " "
;;;
;;; .SuperTitre "Testeur automatique des fonctions du BV."
;;;
;;; .Centre "*****************************************************************"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*****************************************************************"

; .Centre "$Header: /usr/cvs/lelisp/lltest/testbv.ll,v 1.2 2016/05/22 05:38:15 jullien Exp $"

;


;;;(unless (featurep 'testcomm) (libload testcomm t))

(unless (current-display)
	(bitprologue))


(setq #:sys-package:colon 'testbv)

;;;
;;; A mettre a` T si on veut que ca cause.

(unless (boundp ':verbose)
	(defvar :verbose ()))



;;;
;;; Rede'finition de prin, print et terpri pour assurer tout affichage sur le
;;; xterm.

(unless (getdef 'old-print) ; si on passait deux fois...
	(synonymq old-terpri terpri)
	(defun terpri #:recette:l
	  (let ((#:sys-package:tty 'tty))
	    (apply 'old-terpri #:recette:l)))
	
	(synonymq old-prin prin)
	(defun prin #:recette:l
	  (let ((#:sys-package:tty 'tty))
	    (apply 'old-prin #:recette:l)))
	
	(synonymq old-print print) ; en dernier, c'est plus discret.
	(defun print #:recette:l
	  (let ((#:sys-package:tty 'tty))
	    (apply 'old-print #:recette:l))))






;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;; DEFINITION D'UTILITAIRES POUR LES TESTS.

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;




;;;
;;; Une macro permettant d'essayer une action jusqu'a` ce qu'elle rende une
;;; valeur de re'fe'rence avec un maximum de N essais (5 par de'faut) et des
;;; intervalles de temps de une seconde entre chaque essai.
;;; Le re'sultat est t en cas de succe's et () en cas d'echec.
;;; On n'utilise pas l'instruction (sleep)
;;; qui peut interfe'rer avec la gestion des interruptions.
;;; Ex : (:try '(eq (send 'x window) 6))

(defun :try (expr ref . rest)
  (let ((:max (or (car rest) 8))
	(:n 1)
	:t :e :bool
	)
    (until (or (setq :bool (equal (setq :e (eval expr)) ref)) (gt :n :max))
	   (print "Retry " :n "... " :e)
	   (incr :n)
	   (setq :t (send 'second (date)))
	   (while (progn (process-pending-events)
			 (eq :t (send 'second (date))))))
    (null (null :bool))))


;;;
;;; Prend une fene^tre opaque et rend le "bits" correspondant a` une zone
;;; particulie`re.

(defun :bits (win x y w h m)
  (let ((aux (create-bytemap w h)))
    (bitblit aux (window-bitmap win) 0 0 x y w h)
    (prog1 (send m aux)
      (kill-bitmap aux))))


;;;
;;; Un utilitaire pour savoir si deux ope'rations graphiques ont le me^me
;;; effet.
;;; Ex : (:compare 500 600
;;;          '(draw-line 0 0 100 100)
;;;          '(progn (draw-line 0 0 50 50) (draw-line 50 50 100 100)))

(defun :compare (w h exp1 exp2)
  (let ((:m (if (eq 1 (send 'display-depth (current-display))) 'bits 'bytes))
	(:x1 w)
	(:y1 0)
	(:x2 0)
	(:y2 h)
	:w :w1 :w2 :b0 :b1 :b2 :al)
    (setq :w (create-window 'window 10 20 (add (add w w) 2) (add h h) "" 1 1))
    (setq :w1 (create-subwindow 'window :x1 :y1 w h "" 1 1 :w))
    (setq :w2 (create-subwindow 'window :x2 :y2 w h "" 1 1 :w))
    (:wait-expose :w)
    (setq :b0 (:bits :w :x1 :y1 w h :m))
    ;; (print "j'evalue exp1")
    (with ((current-window :w1))
	  (eval exp1))
    ;; (print "j'evalue exp2")
    (with ((current-window :w2))
	  (eval exp2))
    (bitmap-flush)
    (setq :b1 (:bits :w :x1 :y1 w h :m))
    (setq :b2 (:bits :w :x2 :y2 w h :m))
    (kill-window :w) (:wait-kill)
    (bitmap-flush)
    (cond ((null (eqvector :b1 :b2))
	   (print "+++ Les actions graphiques sont diffe'rentes...")
	   (print "DESSIN 1 :")
	   (setq :al (:print-bytes :b1 ()))
	   (print "DESSIN 2 :")
	   (setq :al (:print-bytes :b2 :al))
	   (mapc (lambda ((val . n))
		   (print (ascii n) " correspond a` la valeur " val))
		 :al)
	   ())
	  ((eqvector :b0 :b1)
	   (print "+++ Les actions graphiques sont sans effet...")
	   ())
	  (t t))))


(defun :wait-expose (window)
  (bitmap-flush)
  (unless (#:window:father window)
	  (if (memq #:bitmap:name '(|X11| pm windows))
	      (let (ev)
		(while (or (neq (#:event:code (setq ev (read-event)))
				'repaint-window-event
				)
			   (neq (#:event:window ev) window))))))
  (bitmap-sync)
  )


(defun :wait-kill ()
  (if (eq #:bitmap:name '|X11|)
      (until (eq (#:event:code (read-event)) 'kill-window-event))
    (bitmap-flush))
  (bitmap-sync)
  ()
  )


(defun :flush-events ()
  (while (eventp)
    (print (read-event))))


;;;
;;; Une fonction pour afficher des "bytes" de bitmap.

(defun :print-bytes (bytes :al)
  (with ((rmargin (add1 (slen (outbuf)))))
	(let ((cpt #/A)
	      n val i j line)
	  (setq n (sub1 (slen (vref bytes 0))))
	  (prin "     ")
	  (for (j 0 1 n)
	       (prin (div j 10)))
	  (terpri)
	  (prin "     ")
	  (for (j 0 1 n)
	       (prin (rem j 10)))
	  (terpri)
	  (prin "     ")
	  (for (j 0 1 n)
	       (prin "*"))
	  (terpri)
	  (for (i 0 1 (sub1 (vlength bytes)))
	       (setq line (vref bytes i))
	       (prin (div i 10) (rem i 10) " * ")
	       (for (j 0 1 (sub1 (slen line)))
		    (setq val (chrnth j line)
			  n (cassq val :al))
		    (unless n
			    (setq n cpt
				  cpt (add1 cpt))
			    (newr :al (cons val n)))
		    (prin (ascii n)))
	       (terpri))
	  (terpri)
	  ))
  :al)



;; Partie recuperee de testcomm.ll

(defvar :error-occured ())

(de testfn (?speaki . file)
    ; si file n'est pas fourni on lit sur le canal d'entre'e courant
    ;
    ; la fonction de test
    ; ?speaki = t  si on desire un "log" du resultat.
    ;
    (if file
        (with ((inchan (openi (car file))))
              (dotestfn))
        (dotestfn)
        (exit eof)))

(de tread ()
    (car (catcherror t (read))))

(de dotestfn ()
    ; On utilise certaines variables globales, ce qui permet un debug facile
    ; - testfnlu     : la forme a tester
    ; - testfnval    : la valeur theorique
    ; - testfnres    : la valeur calculee
    (let ((#:sys-package:itsoft '#.#:sys-package:colon))
      (setq #:system:redef-flag t)      ; faire taire les messages
      (setq :error-occured ())
      (untilexit eof
                 ; pour egalement traiter les erreurs
                 (setq testfnlu (tread))
                 (if (and (consp testfnlu) (eq (car testfnlu) 'test-serie))
                     (progn
                       (if (cddr testfnlu)
                           (setq ?speaki (caddr testfnlu)))
                       (ifn ?speaki
                            (print "      " (cadr testfnlu))
                            (terpri) (print (cadr testfnlu)) (terpri)))
                   (setq testfnres (tread))
                   (setq testfnval (catcherror () (eval testfnlu)))
                   (when ?speaki
                         (print "          " testfnlu " = " testfnres))
		   (setq testfnval (if testfnval (car testfnval)
				     :error-occured))
                   (unless (equal testfnval testfnres)
			   (prin "***** la valeur de " testfnlu )
			   (prin " devrait e^tre " testfnres)
			   (prin " et non pas    " testfnval)
			   (terpri)) ))))

(defun :syserror (f m a)
  (when :verbose
	(print "- " f " - " m " - " a))
  (setq :error-occured (list m f a))
  (super-itsoft '#.#:sys-package:colon 'syserror (list f m a)))






;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;; LANCEMENT DES TESTS

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


;;;
;;; Les tests a` effectuer dans des contextes diffe'rents.

(defun :tests ()
  (let ((fic (probepathf (catenate "bv" #:bitmap:name ".lt"))))
    (if fic
	(testfn :verbose fic)
      (print "====== PAS DE TESTS SPECIFIQUES A " #:bitmap:name " =====")
      (terpri 2)))
  ;; Tests spe'cifiques couleur/n&b.
  (testfn :verbose
	  (catenate #:system:lltest-directory
		    (if (eq (display-depth (current-display)) 1)
				   "bvnb.lt"
				 "bvcolor.lt")))
  ;; Tests ge'ne'raux.
  (testfn :verbose
	  (catenate #:system:lltest-directory 
		    "bvdata.lt"))
  )


;;;
;;; Si on utilise le nouveau BV, les tests sont exe'cute's deux fois (fenetres
;;; opaques et transparentes).

(if (getdef 'subst-colors) ; nouveau BV.
    (mapc (lambda (w-type)
	    (terpri 2)
	    (print "===== TEST AVEC FENETRES " w-type " =====")
	    (terpri)
	    (default-window-type (current-display) w-type)
	    (:tests))
	  '(
	    transparent
	    opaque
	    ))
  (:tests))
