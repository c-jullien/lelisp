;;; .EnTete "Le-Lisp (c) version 15.2" " " "Les statistiques statiques LLM3"
;;; .EnPied "statcode.ll" "%" " "
;;; .SuperTitre "Les statistiques statiques LLM3"
;;;
;;; .Centre "*****************************************************************"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*****************************************************************"
;;;
;;; .Centre "$Header: /usr/cvs/lelisp/lltool/statcode.ll,v 1.4 2017/06/11 11:58:30 jullien Exp $"

(unless (>= (version) 15)
        (error 'load 'erricf 'statcode))

; Ce programme permet de re'aliser toutes sortes de statistiques
; statiques sur le code du syste`me Le_Lisp en LLM3.

(setq #:system:read-case-flag ())

; .Section "Un paquet de variables et fonctions auxiliaires"

(dmd incrprop (symb prop)
     `(putprop ,symb (1+ (or (getprop ,symb ,prop) 0)) ,prop))

(defvar CTAB (ascii #\TAB))

(de #:statcode:err (m a l)		
    (error 'statcode m (list a l))))

; .Section "Le top-level des statistiques statiques"

(de statcode lfile
    ;
    ; les variables locales du convertisseur
    ;
    (let ((runtime (runtime))         ; le temps des stats
          (nligne 0)                  ; le nb de lignes lues
          (nlcode 0)                  ; le nb de ligne de code
          (ninstr 0)                  ; le nb d'instructions
          (noperand 0)                ; le nombre d'operades
         ) 
         (setq runtime (runtime))
         (#:llm3:process-list-of-files '#:statcode:process
				       (if (consp lfile)
					   (car lfile)
					   #:llm3:files))
         ; impression des stats
         (with ((outchan (openo "statcode.n")))
           (let ((l) (c))
              (setq l (sortl (copy #:llm3:lpseudo)))
              (setq l (mapcar (lambda (x) 
                                 (list x 
                                     (or (numberp
					     (getprop x '#:statcode:count))
                                     0)))
                              l))
              (#:statcode:printable
	                 "Occurrences statiques des pseudos-instructions"
                         "Nombre de pseudos-instructions : "
                         l
                         (- nlcode ninstr))
              (setq l (sortl
                         (maploblist (lambda (x)
                              (when (and (getprop x '#:statcode:count)
                                         (not (memq x #:llm3:lpseudo)))
                                    x)))))
              (setq l (mapcar (lambda (x) 
                                (list x (or (numberp (getprop x 
                                                       '#:statcode:count))
                                       0)))
                              l))
              (#:statcode:printable
	                 "Occurrences statiques des instructions (alpha)"
                         "Nombre d'instructions : "
                         l
                         ninstr)
              (setq l (sort (lambda (l1 l2) 
                              (if (= (cadr l1) (cadr l2))
                                  (alphalessp (car l1) (car l2))
                                  (> (cadr l1) (cadr l2))))
                            (mapcoblist (lambda (x)
                              (when (and (getprop x '#:statcode:count)
                                         (not (memq x #:llm3:lpseudo)))
                                    (ncons (list x 
                                          (or (fixp (getprop x 
                                                          '#:statcode:count))
                                              0))))))))
              (#:statcode:printable
	                 "Occurrences statiques des instructions (par nombre)"
                         "Nombre d'instructions : "
                         l
                         ninstr)
              (setq l (sortl
                         (mapcoblist (lambda (x)
                              (when (and (setq c 
                                           (getprop x '#:statcode:operand))
                                         (> c 9))
                                    (list x))))))
              (setq l (mapcar (lambda (l) 
                                  (list l (getprop l '#:statcode:operand)))
                              l))
              (#:statcode:printable "Occurrences statiques des ope'randes"
                         "Nombre d'ope'randes : "
                         l
                         noperand)))))


; .Section "Analyse d'une instruction simple"

(de #:statcode:process (ligne)
    (cond
       ((null ligne) ())
       (t  (incr nlcode)
           (let ((label (car ligne))
                 (codop (cadr ligne))
                 (larg (cddr ligne)))
                (when codop
                      (incrprop codop '#:statcode:count))
                      (unless (memq codop #:llm3:lpseudo)
                              (incr ninstr))
                      (when (setq n (getprop codop '#:llm3:narg))
                            (unless (if (numberp n)
                                        (= (length larg) n)
                                        (member (length larg) n))
                                    (#:statcode:err "nombre d'argument"
				                    ligne)))
                      (unless (memq codop #:llm3:lpseudo)
                              (mapc (lambda (op type)
                                      (incr noperand)
				      (if type
				          (#:statcode:countoper op)
					  (incrprop 'label
					            '#:statcode:operand)))
				    larg
				    (or (consp (getprop codop '#:llm3:typarg))
					(cirlist (getprop codop 
						          '#:llm3:typarg))))
                 )))))))

(de  #:statcode:countoper (arg)
     (let ((type (#:llm3:type-operand arg)))
          (when type
                (incrprop type '#:statcode:operand))))

; .Section "Impression d'un tableau complet"

(de #:statcode:printable (titre msg l m)
    ; titre du tableau
    ; msg = type de m
    ; l est la liste des items
    ; m est le total
    (terpri 2)
    (print ".Titre "" " titre """")
    (print ".DebLL 6")
    (terpri 2)
    (print msg m)
    (terpri 2)
    (let ((c 0) (n))
         (setq c 0)
         (while l
                (prin (incr c))
                (outpos 5)
                (mapc 'princn (mapcar 'uppercase (explode (caar l))))
                (outpos 15)
                (prin (cadar l))
                (outpos 22)
                (#:statcode:prinpc (cadar l) m)
                (terpri)
                (nextl l)))
    (print ".FinLL")))

(de #:statcode:prinpc (n m)
    ; imprime le pourcentage de n/m  sous la forme  xx.x %
    (if (zerop m)
        (prin " 0.0 %")
        (setq n (scale n 1000 m))
	(let ((pc (div n 10)))
	     (if (lt pc 10)
		 (prin " " pc)
	         (prin pc)))
        (prin "." (rem n 10) " %")))

