; .EnTete "Le-Lisp (c) version 15.2" " " "Compatibilite' Maclisp"
; .EnPied "defun.ll" "%" " "
; .SuperTitre "lexpr et defun"
;
; .Auteur "Alain Be`ges"
;
; .Centre "*****************************************************************"
; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
; .Centre "*****************************************************************"
;
; .Centre "$Header: /usr/cvs/lelisp/llub/defun.ll,v 1.1 2006/12/09 10:41:06 jullien Exp $"

(unless (>= (version) 15.2)
     (error 'load 'erricf 'defun))

(de pkg-gensym (pkg) (symbol pkg (gensym)))

(de vect-to-cons (start len vect)
   (let ((end (sub1 (add start len)))
         (res ()))
       (while (le start end)
              (newr res (vref vect start))
              (incr start))
       res))

; .Section "presentation"

; Ce fichier re'alise la compatibilite' maclisp/lelisp sur
; les points suivants :

; 1) Traitement des lexpr ie fonctions arg, setarg, listify.

; 2) Fonction defun et les commodite's qui lui sont attache'es
;   (les &keywords)

; .SSection "les lexpr maclisp"

; Elles diffe'rent des lexpr lelisp en ce qui suit :

; le corps de la lexpr peut contenir une re'fe'rence a` l'argument 
; sous les formes suivantes :

; - (arg n) fourni le n-ieme e'le'ment de la valeur de l'argument; 

; - (setarg n val) affecte la valeur val au n-ieme e'le'ment de ... ; 

; - (listify n) fourni la liste des n premiers e'le'ments, ou des n 
; derniers si n est ne'gatif.

; .SSection "le defun"

; Il remplace les "de" "df" "dm" de Le_Lisp ; sa syntaxe est :

;- (defun <name> macro <bvl> . <body>)
; .br
;- (defun <name> fexpr <bvl> . <body>)
; .br
;- (defun <name> expr  <bvl> . <body>) ou pour cette dernie`re ...
; .br
;- (defun <name> <bvl> . <body>)

; Il est en outre dote' des commodite's suivantes, relatives a` la
; liste des variables :

; On peut, dans la liste des variables (bvl), faire apparaitre les symboles
; &optional, &key, &rest, &aux (dans cet ordre) ...

; 1) &optional

; Toutes les variables suivants ce mot-clef ne sont pas obligatoires lors
; de l'appel de la fonction ...

; (defun foo (x &optional a1 (a2 v2) (a3 v3 p3)) ...)

; De'finit une expr dont la variable x est obligatoire et les variables
; a1 a2 a3 sont optionnelles ; 

; - si a1 n'est pas lie'e par l'appel, elle sera lie'e a` nil; 

; - si a2 n'est pas lie'e par l'appel, elle sera lie'e a` sa valeur par
;   de'faut, qui est le resultat de l'e'valuation de v2 (v2 peut faire
;   re'fe'rence aux variables pre'ce'demnts lie'es ; les liaisons 
;   se font se'quentiellement); 

; - en ce qui concerne a3 sa valeur par de'faut est bien su^r v3, mais on
;   dispose en plus de la variable p3, qui vaudra t si v3 est lie'e par
;   l'appel, et nil sinon.

; 2) &key

; Il doit suivre &optional

; Toutes les variables introduites pre'ce'dement, optionnelles ou non,
; e'taient positionnelles, en ce sens que c'e'tait la place de l'argument
; actuel dans le corps d'appel de la fonction qui de'cidait de l'argument
; formel (de la variable) auquel il devait e^tre lie';
; .br
; pour tourner cette restriction on introduit les variables  introduites 
; par mot clef :

; (... &key (a x) (b y) ...)

; les mots clef sont ici a et b, et les variables correspondantes x et y.

; Le corps de la fonction (soit foo) pourra contenir les parametres x et y
; (et non a et b !), mais ces parametres seront lie's par un appel du genre :

; (foo ... 'b <valeur a` affecter a` y> ...)

; Il est important de remarquer que 

; (1) on peut lier y avant x (l'ordre n'a pas d'importance : c'est la seule
;    raison d'e^tre de ce type de variable !); 

; (2) ces variables peuvent ou non e^tre lie'es par l'appel, elle sont 
; toujours conside're'es comme optionnelles.

; Finissons en donnant les syntaxes possibles :

; - (... &key x ...)   ou   (... &key (x x) ...)
; .br
; la variable et le mot clef correspondant sont ici confondu; la valeur par
; de'faut de la variable x est nil; 

; - (... &key (a x) ...)
; .br
; la variable est x et le mot clef correspondant est a; la valeur par defaut
; de x est nil; 

; - (... &key ((a x) vx) ...)   ou   (... &key ((x) vx) ...)
; .br
; introduit la variable x (avec ou sans mot clef distinct de x); la valeur
; par de'faut de x sera (le produit de l'e'valuation de) vx; 

; - (... &key ((a x) vx px) ...)   ou   (... &key ((x) vx px) ...)
; .br
; on dispose en plus, par rapport a` l'exemple pre'ce'dent, de la variable
; px qui sera lie'e a` t si x est li'ee par l'appel et nil sinon.


; 3) &rest

; Ce mot-clef doit suivre &optional et &key (si pre'sents); 

; la liste de variable (a b c &rest v) est e'quivalente a` la liste de 
; variables Le_Lisp

; (a b c . v)

; &rest ne doit e^tre suivi que d'un seul symbole

; 4) &aux

; Il doit suivre &optional, &key et &rest (si ils sont pre'sents) ; 

; ( ... &aux a (aa vv) ...)

; introduit simplement des variables locales :

; - a initialise'e a` nil et

; - aa initialise'e a` vv (ou` vv est une expression pouvant faire toutes
; les re'fe'rences avants possibles).

; Ceci est simule' par un slet.

; .SSection "exemple"

; ? (defun foo (x &optional y &key ((ka a) 1 pa) &rest r &aux (q 1) (w 2))
;             . <body>)

; = (de foo (x . #:maclisp:defun:g160)

;      (slet ((y (if (lt 0 (length #:maclisp:defun:g160))
;                    (nth 0 #:maclisp:defun:g160)
;                    ()))

;             (#:maclisp:defun:g160 (nthcdr 1 #:maclisp:defun:g160)))

;           (let ((a ()) (pa ()))
               
;               (#:maclisp:defun:kwd-bind-key
;                  '#:maclisp:defun:g160
;                  '(((ka a) 1 pa)))

;                 (setq r #:maclisp:defun:g160)

;                 (slet ((q 1) (w 2)) . <body>))))


; .Section "lambda revisite'"

; 1) traitement des lexpr ...

(defvar #:maclisp:lexpr:len 70)	; pourquoi pas

(defvar #:maclisp:lexpr:bvl-vector (makevector #:maclisp:lexpr:len ()))

(de #:maclisp:lexpr:init-bvl-vector (n)
   (setq #:maclisp:lexpr:len n)
   (setq #:maclisp:lexpr:bvl-vector (makevector n ())))

(de listify (n) 		; n est un fix positif ou negatif
   (if (ge n 0)
      (vect-to-cons 0 n #:maclisp:lexpr:bvl-vector)
      (vect-to-cons (add1 (add #:maclisp:lexpr:len n)) (mul n -1)
                    #:maclisp:lexpr:bvl-vector)))

(de arg (n) (vref #:maclisp:lexpr:bvl-vector (sub1 n)))

(de setarg (n val) (vset #:maclisp:lexpr:bvl-vector (sub1 n) val))

(de #:maclisp:lexpr:aux (a) 	; l'atome a doit avoir une liste pour valeur
   (let ((l (length a))
         (i 0))
       (when (gt l #:maclisp:lexpr:len) (#:maclisp:lexpr:init-bvl-vector l))
       (while (lt i l)
             (vset #:maclisp:lexpr:bvl-vector i (nextl a))
             (incr i))))

(de #:maclisp:lexpr (symb body) 
   `(lambda ,symb (#:maclisp:lexpr:aux ,symb) . ,body))

; l'ecriture de la fonction lambda elle-me^me est repousse'e a` plus tard.

; 2) dans certaines incarnations de maclisp nil peut e^tre present dans la
;    la liste des variables (bvl) d'une lambda ...

; pour parer cette botte on substitue au(x) nil(s) pre'sents dans la bvl
; des variables #:maclisp:lexpr:nil:gensym qui seront lie'es en pure perte.
; On garde ainsi bonne contenance (ie on ne touche pas a` l'e'valuateur).

(de #:maclisp:lexpr:subst-nil-to-gensym (bvl)
   (cond ((null bvl) (pkg-gensym '#:maclisp:lexpr:nil))
         ((atom bvl) bvl)
         (t (rplac bvl 
                   (#:maclisp:lexpr:subst-nil-to-gensym (car bvl))
                   (if (null (cdr bvl))
                       ()
                       (#:maclisp:lexpr:subst-nil-to-gensym (cdr bvl)))))))

(de #:maclisp:lexpr:nil-in-bvl (bvl body)
   `(lambda ,(#:maclisp:lexpr:subst-nil-to-gensym bvl) . ,body))

; 3) la fonction lambda elle-me^me

(df lambda (bvl . body)
    (if (atom bvl)		; lexpr donc ...
        (#:maclisp:lexpr bvl body)
        (#:maclisp:lexpr:nil-in-bvl bvl body)))

; .Section "le defun"

(defvar #:maclisp:&keywords '(&optional &rest &aux &key))


(de #:maclisp:defun:kwd-input (kwd dvl) 	; quoi est a` qui ?
   (let ((aux (cdr (memq kwd dvl)))
         (res ()))
       (when aux 		; sans c/a c'est pas la peine
          (while (not (or (null aux)
                          (memq (car aux) #:maclisp:&keywords)))
                (newr res (nextl aux))))
       res))

(de #:maclisp:defun:kwd-optl (var optl)

 ; traitement des variables introduites par &optional; 
 ; on fabrique la liste de liaison du slet correspondant ...
 ; (la valeur de) var est le nom de la variable qui servira a` lier les
 ; variables introduites apres &optional &rest et &key .

   (let ((i 0)
         (l-optl (length optl))
         (res ()))

       (while (lt i l-optl) (let ((elm (nth i optl)))
             (cond

                 ; premier cas : une variable seule

                  ((symbolp elm)
                   (newr res
`(,elm (if (lt ,i (length ,var)) (nth ,i ,var) ()))))

                 ; deuxieme cas : un couple var. val. initiale par defaut

                  ((eq 2 (length elm))
                   (newr res
`(,(car elm) (if (lt ,i (length ,var)) (nth ,i ,var) ,(cadr elm)))))

                 ; troisieme cas : un triplet

                  ((eq 3 (length elm))
                   (newr res
`(,(car elm) (if (lt ,i (length ,var)) (nth ,i ,var) ,(cadr elm))))
                   (newr res
`(,(caddr elm) (if (lt ,i (length ,var)) t ())))))
              
             (incr i)))

       (newr res `(,var (nthcdr ,i ,var)))

       res))

(de #:maclisp:defun:kwd-key-aux (kwd)

 ; petit pre'traitement de la liste des variables du type &key pour lui
 ; donner une syntaxe uniforme (... ((kx x) vx px) ...)

   (let ((res ()))
       (unless (null kwd)
          (while (consp kwd)
             (newr res
                  (let ((x (car kwd)))
                      (cond
   ((symbolp x) `((,x ,x) () ())) ; de la forme x
   ((symbolp (car x)) `(,x () ())) ; de la forme (kx x)
   (t `(,(if (null (cdar x)) `(,(caar x) ,(caar x)) (car x)) 
                                                           ,(cadr x)
                                                           ,(caddr x))))))
          (nextl kwd)))
       res))

(de #:maclisp:defun:kwd-key (key)

 ; fabrique la liste du let correspondant apres traitement de key
 ; par #:maclisp:defun:kwd-key-aux ; 
 ; on lie les variables a` nil : le seul interet de ceci est de "localiser"
 ; les variables pour pouvoir les lier a` l'aide de setq a` l'interieur de
 ; ce let (cf fonction suivante et exemples)

   (let ((res ()))
       (while key (let ((k (car key)))
             (newr res `(,(cadar k) ()))
             (when (caddr k) (newr res `(,(caddr k) ())))
             (nextl key)))
       res))

(de #:maclisp:defun:kwd-bind-key (var key)

 ; va faire les liaisons a` l'aide de setq(s) mais sera appelle'e a` 
 ; l'interieur d'un let; 
 ; la valeur de var est le nom de la variable (cre'e par un gensym) dont la
 ; valeur correspond a` la partie &key et &rest des arguments
 ; actuels ; 
 ; (la valeur de) key est une liste de la forme (... ((kx x) vx px) ...) ou`
 ; vx et px peuvent e^tre e'gaux a` nil.
 ; apres l'appel de cette fonction les x et px seront lie's et var contiendra
 ; ce que doit contenir la variable de &rest si elle existe

   (while key 
         (letvq ((kx x) vx px) (car key)
               (let ((yes (memq kx (eval var)))) ; on en a un
                   (if yes
                       (progn
                          (set x (cadr yes))
                          (set var (delete (car yes) (eval var)))
                          (set var (delete (cadr yes) (eval var)))
                          (when px (set px t)))
                       (set x (eval vx)))))
         (nextl key)))


(de #:maclisp:defun:kwd-aux (aux)

 ; fabrique la liste du slet correspondant

   (if aux
       (mapcar (lambda (x) (if (symbolp x) (list x) x)) aux)
       ()))


(de #:maclisp:defun:dvl (dvl body)	; dvl pour defun variables list

   (if (symbolp dvl) 

      `(,dvl (#:maclisp:lexpr:aux ,dvl) . ,body) ; c'etait une lexpr

       (let ((tvar ()) ; pour l'instant
             (optl (#:maclisp:defun:kwd-input '&optional dvl))
             (rest (car (#:maclisp:defun:kwd-input '&rest dvl)))
             (key  (#:maclisp:defun:kwd-key-aux
                      (#:maclisp:defun:kwd-input '&key dvl)))
             (aux  (#:maclisp:defun:kwd-input '&aux dvl))
             (var  (pkg-gensym '#:maclisp:defun)))

       ; on remplie la liste des vraies variables tvar

            (while (not (or (memq (car dvl) #:maclisp:&keywords)
                            (null dvl)))
                  (newr tvar (nextl dvl)))

       ; puis on commence par l'interieur : d'abord les "aux"     

            (unless (null aux) (setq body
                   `((slet ,(#:maclisp:defun:kwd-aux aux) . ,body))))

       ; puis le "rest" (que l'on "localise" avec un let)
            
            (unless (null rest) (setq body
                   `((let ((,rest ,var)) . ,body))))

       ; puis les "key"

            (unless (null key) (setq body
                   `((let ,(#:maclisp:defun:kwd-key key)            
                         (#:maclisp:defun:kwd-bind-key ,(kwote var)
                                                       ,(kwote key))
                         . ,body))))
             
       ; puis les "optl"

            (unless (null optl) (setq body
                   `((slet ,(#:maclisp:defun:kwd-optl var optl) . ,body))))

       ; puis on rajoute les variables

            (if  (and (null optl)
                      (null rest)
                      (null key)
                      (null aux))

                (newl body tvar)

                (newl body (nconc tvar var))))))


(dmd defun l 

    (cond 
          ((eq 'expr (cadr l))
           `(de ,(car l) . ,(#:maclisp:defun:dvl (caddr l) (cdddr l))))

          ((eq 'fexpr (cadr l))
           `(df ,(car l) . ,(#:maclisp:defun:dvl (caddr l) (cdddr l))))

          ((eq 'macro (cadr l))
           `(dm ,(car l) . ,(#:maclisp:defun:dvl (caddr l) (cdddr l))))

          (t `(de ,(car l) . ,(#:maclisp:defun:dvl (cadr l) (cddr l))))))

; c'est fini
