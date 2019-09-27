; .EnTete "Le-Lisp (c) version 15.2" " " "Statistiques Temporelles"
; .EnPied "timetrace.ll" "%" " "
; .SuperTitre "Package de statistiques temporelles"
;
; .Auteur "Bertrand Serlet"
;
; .Centre "*****************************************************************"
; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
; .Centre "*****************************************************************"
;
; .Centre "$Header: /usr/cvs/lelisp/llub/timetrace.ll,v 1.1 2006/12/09 10:41:07 jullien Exp $"

(unless (>= (version) 15.2)
     (error 'load 'erricf 'timetrace))

; .Section "Utilisation"

;  (timetrace foo bar ...) timetrace les fonctions foo bar ...
;  (timetrace t foo bar ...) donne les resultats pour foo bar ..
; et REMET LES COMPTEURS A ZERO pour les fonctions foo bar ...
;  (timetrace t) donne tous les resultats
; et remet les compteurs a zero de toutes les fonctions
;  (timetrace) donne la liste des fonctions time-tracees
;  (timetrace () foo bar ...) enleve la timetrace de foo bar ...
;  (timetrace ()) enleve toutes les timetraces
;  (timetrace file <file>) timetrace toutes les fonctions ayant la proprie'te'
; '#:system:loaded-from-file e'gale a` ce fichier

; (tt ...) EST UN SYNONYME DE (timetrace ...)

; ATTENTION: La loi de Heisenberg s'applique a` timetrace.
;  En effet :
;  1) Les fonctions re'cursives terminales ne le sont plus sous timetrace
;  2) Timetrace fait CONSer (Horreur!)
;  3) Une fonction timetrace'e est plus lente.
;  En outre, pour des petites fonctions, les temps donne's sont
; statistiques.
; En conse'quence, l'auteur de'cline toute responsabilite' sur l'usage
; de ce package.

; .Section "Structure de donne'es"

; On met sur la plist de la fonction sous l'indicateur 'timetrace:
;  - le nombre de passages dans cette fonction 
;  - le temps passe dans cette fonction
; sous la forme d'un cons (nb . temps).
; L'ancienne definition se met en 'timetrace-old

; Trois variables globales contiennent :
;  - la liste des fonctions timetrace'es (#:timetrace:timetraced)
;  - le temps courant (#:timetrace:runtime)
;  - la pile de fonctions timetrace'es courante (#:timetrace:stack)

(defvar #:timetrace:timetraced ())
(defvar #:timetrace:runtime -32000)
(defvar #:timetrace:stack ())

; .Section "Code"

(df timetrace call
    (setq #:timetrace:runtime (runtime) 
          #:timetrace:stack '(#:timetrace:top-level))
    (putprop '#:timetrace:top-level (cons 0 0.) 'timetrace)
    (cond 
      ((null call) #:timetrace:timetraced)
      ((not (listp call)) (error 'timetrace 'errsxt call))
      ((or (equal (car call) ()) (equal (car call) 'nil))
       (mapc '#:timetrace:off (or (cdr call) #:timetrace:timetraced)))
      ((equal (car call) 'file)
       (mapoblist (lambda (x)
                  (when (and (equal (cadr call) 
                                    (get x '#:system:loaded-from-file))
                             (getdef x)
                             (memq (typefn x) '(expr subr0 subr1 subr2
                                                     subr3 nsubr)))
                        (prin x " ") (#:timetrace:on x))))
       (terpri))
      ((or (equal (car call) t) (equal (car call) 't))
       ; trie en ordre decroissant de temps la liste des re'sultats
       (let ((l (mapcar (lambda (x)
                          ; retourne (nom nb . temps)
                          (prog1
                             (cons x (getprop x 'timetrace))
                             (putprop x (cons 0 0.) 'timetrace)))
                        (or (cdr call) #:timetrace:timetraced))))
            (while l
                   (let ((max -32000) (l2 l))
                        (while l2 (setq max (max max (cddr (nextl l2)))))
                        (while l
                               (cond
                                 ((= 0 (cadar l)) (nextl l))
                                 ((< (cddar l) max) (newl l2 (nextl l)))
                                 (t (print "Temps=" (cddar l) 
                                           "  Nb=" (cadar l)
                                           "  Fonc: " (car (nextl l))))))
                        (setq l l2)))))
      (t 
        (mapcar '#:timetrace:on call))))

; pour facilite' d'e'criture
(synonymq tt timetrace)

; met la timetrace sur la fonction x
(de #:timetrace:on (x)
    (#:timetrace:off x)
    (if (or (not (memq (typefn x) 
                       '(expr subr0 subr1 subr2 subr3 
                         nsubr fexpr fsubr)))
            (memq x '(runtime call calln + plus - difference car cdr 
                      rplaca rplacd getprop 1+ setq)))
         ; la liste des fonctions utilisees
         (print 'timetrace "function un-timetraceable" x)
         (newl #:timetrace:timetraced x)
         (putprop x (cons (typefn x) (valfn x)) 'timetrace-old)
         (putprop x (cons 0 0.) 'timetrace)
         (let ((larg) (body))
              (setq larg (selectq (typefn x)
                                  ((expr fexpr) (car (valfn x)))
                                  (subr0 ())
                                  (subr1 '(arg1))
                                  (subr2 '(arg1 arg2))
                                  (subr3 '(arg1 arg2 arg3))
                                  ((nsubr fsubr) 'args)))
              (setq body (selectq (typefn x)
                                  ((expr fexpr) (cdr (valfn x)))
                                  ((subr0 subr1 subr2 subr3)
                                   (list `(call ',(valfn x)
                                                ,(car larg) ,(cadr larg)
                                                ,(caddr larg))))
                                  (fsubr
                                   (list `(call ',(valfn x) ,larg () ())))
                                  (nsubr (list `(calln ',(valfn x) ,larg)))))
              (setfn x (selectq (typefn x)
                                ((fexpr fsubr) 'fexpr)
                                (t 'expr))
                     `(,larg (protect
                               (progn
                                  (#:timetrace:propd (car #:timetrace:stack))
                                  (#:timetrace:propa ',x)
                                  (newl #:timetrace:stack ',x)
                                  ,@body)
                            (#:timetrace:propd (nextl #:timetrace:stack)))))))
    x)

(de #:timetrace:off (x)
    (remprop x 'timetrace)
    (when (getprop x 'timetrace-old)
          (setfn x (car (getprop x 'timetrace-old))
                 (cdr (getprop x 'timetrace-old)))
          (remprop x 'timetrace-old))
    (setq #:timetrace:timetraced (delq x #:timetrace:timetraced)))

(de #:timetrace:propa (#:timetrace:nom)
    (setq #:timetrace:nom (getprop #:timetrace:nom 'timetrace))
    (rplaca #:timetrace:nom (1+ (car #:timetrace:nom))))

(de #:timetrace:propd (#:timetrace:nom)
    (setq #:timetrace:nom (getprop #:timetrace:nom 'timetrace))
    (rplacd #:timetrace:nom (plus (difference (cdr #:timetrace:nom) 
                                              #:timetrace:runtime)
                               (setq #:timetrace:runtime (runtime)))))


