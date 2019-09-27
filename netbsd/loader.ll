;;;; .EnTete	"Le-Lisp version 15.2x" " " "loader.ll"
;;;; .Date	"1998/05/28"
;;;; .EnPied	"loader.ll"
;;;; .Version	"1.10"
;;;; .Auteur 	"ELIGIS, C. Jullien"
;;;; .Annexe I	""

(defvar #:sys-package:colon 'lap386)

;;;
;;; .SSection "Les messages d'erreur"
;;;

(defmessage #:loader:ERRMDU
  (french "Module de'ja` charge', rechargement du module")
  (english "Module already in use, loading again"))

;;;
;;; .SSection "Les fonctions de definition utiles"
;;;

(defvar :31bitfloats (eq 0.0 0.0))

(defmacro :defvalue (nom val)
   ;; de'finition d'une constante
   `(putprop (symbol #.(kwote #:sys-package:colon) ',nom) ,val ':value))

(defmacro :getvalue (nom)
   ;; recherche valeur d'une variable
   (or (fixp nom)
       `(getprop (symbol #.(kwote #:sys-package:colon) ,nom) ':value)))

(eval-when (eval local-compile)
   (defun :getvalue1 (nom)
          ;; recherche valeur d'une constante
          (or (fixp nom)
              (getprop (symbol #.(kwote #:sys-package:colon) nom) ':value))))

;;;
;;; pour acceder aux champs d'un objet LISP
;;;

;;; .SSection "Aux proprietes naturelles des symboles"

(:defvalue   CVAL       0)			; adresse 32 bits
(:defvalue   PLIST      4)			; adresse 32 bits
(:defvalue   FVAL       8)			; adresse 32 bits
(:defvalue   PKGC       12)			; adresse 32 bits
(:defvalue   OVAL       16)			; adresse 32 bits
(:defvalue   ALINK      20)			; adresse 32 bits
(:defvalue   FTYPE      24)			; code 16 bits
(:defvalue   PTYPE      26)			; code 16 bits
(:defvalue   PNAME      28)			; adresse de chaine 32 bits
(:defvalue   FINSYMB    32)

;;; .SSection "Pour les symboles quotes"

(:defvalue   CVALQ     #.(:getvalue1 'CVAL))
(:defvalue   FVALQ     #.(:getvalue1 'FVAL))

;;; .SSection "Aux chai"nes de caracteres et aux tableaux"

(:defvalue   VAL       0)
(:defvalue   TYP       4)

;;; .SSection "Aux objets sur le HEAP"

(:defvalue   OBJ       0)
(:defvalue   SIZE      4)
(:defvalue   HVAL      8)

;;; .SSection "Aux cellules de liste"

(:defvalue   CAR       0)
(:defvalue   CDR       4)

;;; .SSection "Pour homogeneiser"

(:defvalue   QUOTE     0)
(:defvalue   NULL      0)

(defvar :mem-access
        (if (boundp ':mem-access)
            :mem-access
            ; noms symboliques des acce`s indexe's
            '(val     typ				; string / vector
              car     cdr				; cons
              cval    pname   plist   fval
              alink   pkgc    oval			; atom
              obj     size				; heap
              null)))

(defvar :memq-access (if (boundp ':memq-access)
                         :memq-access
                         '(cvalq fvalq quote)))

(unless (getdef ':make-cirlist-vectors)
        (defun :make-cirlist-vectors (list-size vector-size)
               (let ((l ()))
                    (repeat list-size (newl l (makevector vector-size ())))
                    (apply #'cirlist l))))

(defvar :vectors (if (boundp ':vectors)
                     :vectors
                     (:make-cirlist-vectors 6 7)))

;;;
;;; .Section "Les constantes propres au 80386"
;;;

;;;
;;; .SSection "Les registres"
;;;

;;;
;;; les registres ge'ne'raux
;;;

(eval-when (eval local-compile)
   (defun :defregister (obj val)
          (putprop (symbol #.(kwote #:sys-package:colon) obj) val ':reg)))

(:defregister 'A1       0)			; EAX
(:defregister 'A2       3)			; EBX
(:defregister 'A3       1)			; ECX
(:defregister 'A4       2)			; EDX
(:defregister 'NIL      6)			; ESI
(:defregister ()        6)			; ESI
(:defregister 'BSYMB    6)			; ESI
(:defregister 'BCONS    7)			; EDI

(:defregister 'EAX      0)
(:defregister 'EBX      3)
(:defregister 'ECX      1)
(:defregister 'EDX      2)
(:defregister 'ESP      4)
(:defregister 'EBP      5)
(:defregister 'ESI      6)
(:defregister 'EDI      7)

(:defregister 'RWORK    5)			; BP

(defun :register? (obj)
   (and (symbolp obj)
        (getprop (symbol #.(kwote #:sys-package:colon) obj) ':reg)))

;;;
;;; les fcts de non chargement (remplace le dont-compile)
;;;

(defun dont-load (fct)
   (putprop fct t ':dont-load?))

(defmacro :dont-load? (fct)
   `(getprop ,fct ':dont-load?))

;;;
;;; definit les fonctions non chargeables (en general les defmacro)
;;;

(mapc 'dont-load
      '(:compiled? :compiled-type?
        :decr :incr
        :getvalue :defvalue
        :AddLocalLabel :eti
        :inc@eti :@eti :inceti :dont-load?))

(defvar :compiled-function-type
        '(subr0 subr1 subr2 subr3 nsubr fsubr msubr dmsubr))

(defun :error (f a)
   ;; erreur dans la fonction "f" sur l'argument "a"
   (terpri)
   (print "** LOADER : " f " : " a)
   (error 'loader f a))

;;;
;;; gestion des etiquettes
;;;

(defmacro :inc@eti ()
   `(setq :@-lab (add1 :@-lab)))

(defmacro :@eti ()
   `(catenate "@" :@-lab))

(defmacro :inceti ()
   `(setq :mac-lab (add1 :mac-lab)))

(defmacro :eti ()
   `(catenate "mac" :mac-lab))

(defmacro :AddLocalLabel (obj)
   `(newl :llabels (ncons ,obj)))

(defmacro :incr (x . val)
   ;; version entiere de incr
   (ifn val
        `(setq ,x (add1 ,x))
        `(setq ,x (add ,x ,val))))

(defmacro :decr (x . val)
   ;; version entiere de decr
   (ifn val
        `(setq ,x (sub1 ,x))
        `(setq ,x (sub ,x ,val))))

(defmacro :compiled-type? (var)
   `(memq ,var :compiled-function-type))

(defmacro :compiled? (var)
   `(memq (typefn ,var) :compiled-function-type))

(defmacro :exchange (x y)
   `(setq ,x (prog1 ,y (setq ,y ,x))))

;;;
;;; .Section "Sorties et Dumps Hexade'cimal"
;;;

(defun :prinhex (n)
   ;; imprime sur 2 chiffres hexa le nb n
   (when (not (fixp n)) (:error ':prinhex n))
   (when (lt n 0)       (setq n (logand n #$FF)))
   (when (lt n 16)      (princn #/0))
   (with ((obase 16))   (prin n)))

(defun :prin4hex (n)
   ;; imprime sur 4 chiffres hexa le nb n
   ;; imprime sur 8 chiffres hexa le cons n=(n1 . n2)
   (ifn (fixp n)
        (ifn (consp n)
             (:error ':prinhex n)
             (:prin4hex (car n))
             (:prin4hex (cdr n)))
        (:prinhex (logshift n -8))
        (:prinhex (logand n #$FF))))

;;;
;;; les immediats
;;;

(defun :immediat8? (val)
   ;; un entier compris entre -128 et +127
   (and (fixp val) (ge val -128) (le val 127)))

;;;
;;; .Section "Les fonctions auxiliaires de chargement me'moire"
;;;

(defun :1byte (obj)
   ;; chargement d'un octet en me'moire a` partir de
   ;; l'adresse contenue dans :pc-current, et gestion de cette valeur.
   (when obj
         (when :talkp
               ;; impression du code en hexade'cimal.
               (when (gt :nwl :lmax)
                     (setq :nwl 0)
                     (terpri)
                     (outpos 30)
                     (:prin4hex :pc-current)
                     (prin "  "))
               (:incr :nwl)
               (prin " ")
               (:prinhex obj))
         (unless (gtadr :pc-current (#:system:ecode))
                 (memory :pc-current obj)
                 (incradr :pc-current 1))))

(defmacro :inst (l)
   ;; charge une liste d'instructions.
   `(mapc ':1byte ,l))

(defmacro :instl l
   ;; idem sans parenthese --> c'est FAUX
   ;; !!! la version fexpr (de :instl l (mapc ':1byte l)) n'est pas <=> dmd
   `(mapc ':1byte (evlis ',l)))

(defun :16bits (obj)
   (:1byte (logand obj #$FF))
   (:1byte (logshift obj -8)))

(defun :32bits (obj)
   ;; poke au format 32 bits donc -1 = ffffffff
   (cond ((consp obj)
          (:16bits (cdr obj))
          (:16bits (car obj)))
         (t
           (:16bits obj)
           (if (ge obj 0)
               (:16bits 0)
               (:16bits -1)))))

(defun :dword (obj size)
   (ifn size
        (:32bits obj)
        (if (fixp obj)
            (:16bits obj)
            (error 'size 'errbpa obj))))

(defun :16bits1 (adr obj)
   (memory adr (logand obj #$FF))
   (memory (incradr adr 1) (logshift obj -8))
   (incradr adr 1))

(defun :32bits1 (adr obj)
   ;; poke relatif de 32bits donc -1 = ffffffff
   ;; a utilise pour poker les offsets !!!
   (cond ((consp obj)
          (:16bits1 adr (cdr obj))
          (:16bits1 adr (car obj)))
         (t
           (:16bits1 adr obj)
           (if (ge obj 0)
               (:16bits1 adr  0)
               (:16bits1 adr -1)))))

;;;
;;; .Section "Gestion des tables"
;;;

(defun :setref (sym adr)
   ;; ajoute le symbole <sym> (a l'adresse <adr>)
   ;; dans la table des references des objets Le-Lisp
   (when sym
         (if (and (consp sym) (eq (car sym)'|@|))	; etiq a referencer
             (:offset (cadr sym) () t))))

(defun :addlabel (sym adr)
   ;; ajoute le symbole <sym> (a l'adresse <adr>)
   ;; dans la table des e'tiquettes locales :llabels-nr
   (setq adr (copylist adr))
   (let ((val (assq sym :llabels-nr)))
        (if val
            (rplacd val (cons (copylist adr) (cdr val)))
            (newl :llabels-nr (list sym adr)))))

(defun :addentry (sym adr)
   ;; ajoute le symbole <sym> (a l'adresse <adr>)
   ;; dans la table des entries :entries-nr
   (setq adr (copylist adr))
   (let ((val (assq sym :entries-nr)))
        (if val
            (rplacd val (cons adr  (cdr val)))
            (newl :entries-nr (list sym adr)))))

(defun :clean-llitt ()
   ;; nettoie et sauve la table des litte'raux :saved-by-loader
   ;; dans :global-saved-by-loader sous forme d'un vecteur
   ;; si il n'y a pas eu de TITLE dans :module sinon.
   ;; ne doit e^tre fait qu'au END.
   (let ((l :saved-by-loader)
         (i -1)
         v)
        (while l
               (if (and (symbolp (car l))
                        (or (boundp (car l))
                            (typefn (car l))))
                   (setq :saved-by-loader (delq (nextl l) :saved-by-loader))
                   (nextl l)))
        (setq l (length :saved-by-loader))
        (when (gt l 0)
              (setq v (makevector l ()))
              (while :saved-by-loader
                     (vset v (:incr i) (nextl :saved-by-loader)))
              (if :module
                  (progn
                         (when (get :module ':saved-by-loader)
                               (printerror 'loader
                                           '#:loader:ERRMDU
                                           :module))
                         ;; A faire dans tous les cas !!!
                         (putprop :module v ':saved-by-loader))
                  (newl :global-saved-by-loader v)) )
        (setq :module ())))

(defun :add-llitt (obj)
   ;; ajoute un litte'ral a` la table des litte'raux :saved-by-loader
   (or (fixp obj)
       (memq obj :saved-by-loader)
       (newl :saved-by-loader obj)))

;;;
;;; .Section "Fonctions de calcul d'adresse"
;;;

;;;
;;; resolution des references avant
;;;

(defun :solve-aux (ref)
   (:32bits1 (cdr ref)
             (if (car ref)
                 (subadr (subadr :pc-current (cdr ref)) 4)
                 :pc-current)))

(defun :foundlabel (obj)
   ;; rencontre d'une etiquette, on l'ajoute dans la liste des etiquettes
   ;; on resoud les reference avant ou arriere.
   ;;
   ;; (print obj :llabels)
   (newl :llabels (cons obj (ncons (copylist :pc-current))))
   ;; (print :llabels :llabels-nr)
   ;; resoud les etiquettes
   (mapc ':solve-aux (cassq obj :llabels-nr))
   (setq :llabels-nr (delete (assq obj :llabels-nr) :llabels-nr)))

;;;
;;; .Section "Les types LLM3"
;;;

;;; un operande LLM3 est soit un atome soit une liste.
;;; A chaque type est associe un predicat de test note -->
;;;
;;; des registres --> :register?
;;;
;;; un element de :var-list : une variable LLM3
;;; --> llm3var?
;;;
;;; sinon c'est un operande direct etendu se trouvant dans LD-DIR
;;;
;;; (& n)	: un acces PILE (n est un entier). Le haut de la pile = 0
;;; --> :pile?
;;;
;;; (@ <lab>)	: l'adresse d'une etiquette LLM3
;;; --> :llabel?
;;;
;;; (eval <e>)	: appel de l'interprete sur <e>
;;;
;;; (x <reg>)	: ou x dans :mem-access => acces indirect sur registre LLM3
;;; --> :llindirect/q?
;;;
;;; (x <symb>) : ou x dans (CVALQ FVALQ) => acces indirect symbole
;;; --> :llindirect/q?
;;;
;;; (QUOTE <exp>) : une constante Lisp de n'importe quel type ie son adresse
;;; --> :immvalue? pour les constantes numeriques

(defun :immvalue? (x)
   (and (consp x) (eq (car x) 'QUOTE) (loc (cadr x))))

;;;
;;; les variables globales
;;;

;;; indique une inversion d'arguments par exemple cnbge '1 a1
;;; doit generer cmp a1,1 et non cmp 1,a1
;;; t --> les arguments ont ete inverse donc inverser le test
;;; () --> no pb
;;; utilise par op2arg en cas de cmp xxx,yyy

(defvar *swap-arg* ())

;;; si  *rwork-in-use* = t => rwork est positionne: ON NE DOIT PLUS Y
;;; TOUCHER!!!   utiliser  par  getparm  et  :mov  pour  traiter  les
;;; instructions  HxMOX  ou  HxXMOV  dans les cas batards ou les 2 ou
;;; les  3  arguments  sont en memoire...  Dans ce cas EBP (RWORK) ne
;;; suffit pas...

(defvar *rwork-in-use* ())

;;; si  on  doit utiliser et EBP et EDI alors on pushe ce dernier ==>
;;; patcher  les  arguments  sur la pile utiliser par getparm dans le
;;; cas  ou  pour  un  vector,  la base ET l'index sont en memoire...
;;; utilisation: cf *rwork-in-use*

(defvar *edi-pushed* ())

(defun :get-range (immvalue length)
   ;; renvoie le range d'un immediat
   ;; si length=t renvoie la taille en byte de la valeur
   ;; sinon 1=imm8, 2=imm32
   (if (and (fixp immvalue) (:immediat8? immvalue))
       1				; imm8
       (if length 4 2)))		; imm32

(defun :set-modrm-for-reg-2 (op386)
   ;; regarde si op386 et si oui change son modrm en modrm pour reg en 2eme arg
   (when (eq (vref op386 0) 0)			; si c'est un registre
         (vset op386 2 (add (logshift (vref op386 2) -3) #$C0))))

(defun :setrwork (val)
   ;; genere un mov rwork,size ptr val			; cf :mov
   (setq *rwork-in-use* t)
   (:poke-op #$8B 40 val))				; 40 = 8 * 5 (EBP)

(defun :resetrwork (val)
   ;; genere un mov size ptr val,rwork			; cf :mov
   (:set-modrm-for-reg-2 val)				; bon modrm pour reg
   (:poke-op #$89 40 val))				; 40 = 8 * 5 (EBP)

(defun :fill-vector (vect elt0 elt1 elt2 elt3 elt4 elt5 elt6)
   (vset vect 0 elt0)
   (vset vect 1 elt1)
   (vset vect 2 elt2)
   (vset vect 3 elt3)
   (vset vect 4 elt4)
   (vset vect 5 elt5)
   (vset vect 6 elt6)
   vect)

(defun :fill-vector-imm-imm (vect obj dpt)
   (if (neq (vref vect 1) 2)		; pas imm32
       (error ':getparm '"immediat hors limite" obj); erreur!
       ; sinon on met a jour l'adresse
       (when (and (fixp dpt) (neq dpt 0))
             (vset vect 5 (addadr (vref vect 5) (cons 0 dpt)))
             ; sans oublier la reference !!!
             (when (vref vect 6)
                   (vset vect 6 (cons (vref vect 6) dpt))))
       (vset vect 0 1)				; memoire
       (vset vect 1 7)				; mem32
       (vset vect 2 05))			; modRM
   vect)

(defun :fill-vector-reg-reg (reg1 reg2 scale dpt size)
   (when (and (neq (:register? reg1) 5)	; reg <> EBP
              (eq dpt 0))
         (setq dpt ()))			; [ecx] est <> de [ecx+0]
   (:fill-vector
          (nextl :vectors)
          1					; memoire
          (if size 5 7)				; mem8 ou mem16
          (if dpt #$44 4)			; modRM
          (add (logshift (:register? reg2) 3)	; SIB
               (add (:register? reg1)
                    (selectq scale
                             (1 #$00)
                             (2 #$40)
                             (4 #$80)
                             (8 #$C0))))
          (if dpt 1 0)				; # bytes a poker
          dpt					; quoi poker
          ()))

(defun :fill-vector-reg-dpt (vect reg dpt size)
   ;; genere un vecteur correspondant a size ptr [reg+dpt]
   (when (and (neq (:register? reg) 5)	; reg <> EBP
              (eq dpt 0))
         (setq dpt ()))				; [ecx] est <> de [ecx+0]
   (vset vect 0 1)				; memoire
   (vset vect 1 (if size 5 7))			; mem8 or mem32
   (vset vect 2 (:register? reg))		; modRM = # registre de reg
   (vset vect 3 (when (eq (:register? reg) 4)	; SIB
                      #$24))			; cas particulier ESP
   (vset vect 5 dpt) 			 	; quoi poker
   (ifn dpt
        (vset vect 4 0)				; 0 byte a poker
        (vset vect 2 (add (vref vect 2)		; mod RM
                          (if (eq (:get-range dpt ()) 1) #$40 #$80)))
        (vset vect 4 (:get-range dpt t)))	; # byte
   vect)

(defun :fill-vector-mem-dpt (vect mem dpt size)
   ;; genere un vecteur correspondant a size ptr [mem+dpt]
   ;; vect doit le vecteur correspondant a mem.
   (if (atom mem)				; variable simple
       (:fill-vector-imm-imm vect (cons mem dpt) dpt)
       ; sinon on met la memoire dans RWORK (air connu)
       (:setrwork vect)
       ; on reset la reference
       (vset vect 6 ())
       ; et on genere un size ptr [rwork+dpt]
       (:fill-vector-reg-dpt vect 'rwork dpt size)))

(defun :fill-vector-imm-reg (imm reg scale dpt size)
   ;; genere size ptr [reg*scale+(imm+dpt)]
   (:fill-vector
          (nextl :vectors)
          1					; memoire
          (if size 5 7)				; mem8-mem32
          #$04					; modrm = SIB
          (add (logshift (:register? reg) 3)	; SIB
               (selectq scale
                        (1 #$05)
                        (2 #$45)
                        (4 #$85)
                        (8 #$C5)))
          4					; 4 octets a poker
          (addadr (vref imm 5) (or dpt 0))
          (vref imm 6)))

(defun :mul32 (vect n)
   ;; realise une multiplication 32 bits de la 5eme case de vect
   ;; remarque: n=1,[2],4,[8] (2 et 8 ne sont pas utilises actuellement...)
   ;; cette fonction n'est utilisee que pour les acces indirects scales
   ;; cf [base '45 4 ...]
   (let ((p (vref vect 5)))
        (selectq n
                 (1 p)
                 (4 (setq p (addadr p p))
                    (addadr p p)))))

(defun :poke-op (opcode modrm op386)
   ;; poke en memoire une operation
   ;; op386 est un vecteur resultat d'un appel a getparm
   (if (fixp opcode)
       (:1byte opcode)					; OPCODE
       (:1byte (car opcode))
       (:1byte (cadr opcode)))
   (when modrm (:1byte (add modrm (vref op386 2))))	; MODRM
   (when (vref op386 3) (:1byte (vref op386 3)))	; SIB
   (selectq (vref op386 4)				; # byte a poker
            ((() 0) t)					; rien a faire
            (1 (:1byte (vref op386 5)))			; poke les bytes
            (4 (:setref (vref op386 6) :pc-current)	; reference objet
               (:32bits (vref op386 5)))))

(defun :change-stack-offset (vect delta)
   ;; incremente de delta le n d'un argument type (& n)
   ;; renvoie le vecteur associe modifie
   (let ((tmp (add (vref vect 5) 4)))
        (vset vect 5 tmp)			; nouvel offset dans la pile
        (vset vect 4 (:get-range tmp t))	; nouvelle taille
        (vset vect 2 (add (logshift (:get-range tmp ()) 6) 4))))

(defvar *flagA2B* ())

(defun :getparm (obj)
   ;; input : objet LLM3
   ;; output: vector de translation 386
   ;;	0 : type generique
   ;;		0 : register (reg)
   ;;		1 : memory   (mem)
   ;;		2 : immediat (imm)
   ;;			ce type sert a reconnaitre la config pour un opcode
   ;;			sur deux arguments: en effet il suffit de calculer :
   ;;			   (src [0]*3+dest[0]) si on a a faire (op dest src)
   ;;			le resultat vaut
   ;;				<0 : erreur
   ;;				 0 : reg-reg
   ;;				 1 : reg-mem
   ;;				 2 : reg imm
   ;;				 3 : mem-reg
   ;;				 4 : mem-mem
   ;;				 5 : mem-imm
   ;;				>5 : erreur
   ;;	1 : type precise
   ;;		   0 : registre
   ;;		   1 : imm8
   ;;		   2 : imm16 (unused)
   ;;		   3 : imm32
   ;;		   4 : reserved
   ;;		   5 : mem8
   ;;		   6 : mem16 (unused)
   ;;		   7 : mem32
   ;;		-255 : error
   ;;	2 : modRM associe
   ;;	3 : SIB associe
   ;;	4 : nombre de bytes a poker en final hors opcode, ModRm, SIB
   ;;	5 : bytes a poker (imm, offset variable,...)
   ;;	6 : nom de l'objet a referencer le cas echeant
   ;;

   ;; traitement de faveur pour CBINDN TAG LOCK et PROT
   (ifn (memq obj :special-list)
        (setq *flagA2B* ())
        (setq *flagA2B* t)
        (setq obj (kwote (symeval (symbol 'llcp obj)))))

   (cond ((atom obj)
          (cond ((vectorp obj)	; [base index scale dpt8 size]
                 ; note: genere size ptr [base+index*scale+dpt8]
                 ; scale et offset doivent etre soit ()
                 ; soit des entiers 8 bits !!!
                 ; vector n'est utilise qu'a usage interne...
                 (let ((base  (:getparm (vref obj 0)))
                       (index (:getparm (vref obj 1)))
                       (scale (vref obj 2))
                       (dpt8  (vref obj 3))
                       (size  (vref obj 4)))
                      ;; base-index
                      (selectq (add (times (vref base 0) 3) (vref index 0))
                          (0			; reg-reg (le pied!)
                            (:fill-vector-reg-reg
                              (vref obj 0)		; base
                              (vref obj 1)		; index
                              scale dpt8 size))
                          (1			; reg-mem
                             (:setrwork index)	; mov RWORK,index
                             ; on genere un size ptr [base+rwork*scale+dpt]
                             (:fill-vector-reg-reg
                               (vref obj 0) 'rwork scale dpt8 size))
                          (2			; reg-imm
                             (unless (fixp (vref index 5))
                                     (error ':getparm
                                            '"index hors limite" obj))
                             ; on remplit le vecteur d'index avec le resultat
                             (:fill-vector-reg-dpt
                               index
                               (vref obj 0)
                               (addadr (:mul32 index scale)
                                       (or dpt8 0))
                               size))
                          (3			; mem-reg
                             (:setrwork base)	; mov RWORK,base
                             ; on genere un size ptr [rwork+index*scale+dpt]
                             (:fill-vector-reg-reg
                               'rwork (vref obj 1) scale dpt8 size))
                          (4			; mem-mem
                             ; il faut mettre la base dans RWORK et pas
                             ; l'index car getparm a pu deja utiliser la base
                             ; pour la base
                             (:setrwork base)		; mov RWORK,base
                             ; on met l'index dans EDI (ie BCONS)
                             (setq *edi-pushed* t)
                             (:1byte #$57)		; push  EDI
                             (when (eq (car (vref obj 1)) '|&|)	; l'index est dans la pile
                                   (:change-stack-offset index 4))
                             (:poke-op #$8B 56 index)		; mov EDI,index
                             ; genere size ptr [EBP+EDI*scale+dpt8]
                             (:fill-vector
                               (nextl :vectors)
                               1				; memoire
                               (if size 5 7)			; mem8-mem32
                               #$44				; modRM
                               (add #$3D			; SIB
                                    (selectq scale
                                             (1 0)
                                             (2 #$40)
                                             (4 #$80)
                                             (8 #$C0)))
                               1                   	; size a poker
                               (or dpt8 0)		; quoi poker
                               ()))
                          (5				; mem-imm
                            (unless (fixp (vref index 5))
                                    (error ':getparm '"index hors limite" obj))
                            ; on remplit le vecteur memoire avec le resultat
                            (:fill-vector-mem-dpt base
                              (vref obj 0)
                              (addadr (:mul32 index scale)
                                      (or dpt8 0))
                              size))
                          (6				; imm-reg
                                (:fill-vector-imm-reg
                                  base (vref obj 1) scale dpt8 size))
                          (7				; imm-mem
                            ; on met memoire dans un registre (ie rwork)
                            (:setrwork index)
                            (:fill-vector-imm-reg
                              base 'rwork scale dpt8 size)))))
                ((:register? obj)
                 (:fill-vector
                   (nextl :vectors)
                   0					; registre
                   0					; registre
                   ; par convention, le modrm d'un registre est celui du
                   ; registre considere comme 1er argument.
                   ; la fonction :set-modrm-for-reg-2 se charge de
                   ; rectifier le tir...
                   (logshift (:register? obj) 3)	; ModRm
                   ()					; pas de SIB
                   0					; size a poker
                   ()					; rien a poker de special
                   ()))
                ((boundp (symbol #.(kwote #:sys-package:colon) obj)); llm3var?
                 (:fill-vector
                   (nextl :vectors)
                   1					; memoire
                   7					; mem32
                   05					; ModRM
                   ()					; pas de SIB
                   4					; size a poker
                   (symeval (symbol #.(kwote #:sys-package:colon) obj))
                   ()))
                (t )))
         ((eq (car obj) 'QUOTE)				; immvalue?
          ; le LET suivant sert a traiter le cas du mov '_undef_,a1
          (let ((symb (if (fixp (cadr obj)) (cadr obj) t)))
               (when (or (not (symbolp (cadr obj)))
                         (variablep (cadr obj)))
                     (:add-llitt (cadr obj)))
               (:fill-vector
                 (nextl :vectors)
                 2					; immediat
                 (:get-range symb ())			; imm8 ou imm32 ?
                 ()					; pas de modRM associe
                 ()					; pas de SIB
                 (:get-range symb t)			; # byte a poker
                 (if *flagA2B*
                     (eval obj)
                     (loc (cadr obj))); byte(s) a poker
                 (when (and symb (variablep (cadr obj)))
                       (cadr obj)))))
         ((eq (car obj) '|&|)			; access pile (remarque n=16 bits!)
          (let ((n (logshift (cadr obj) 2)))	; on accede la pile par 4 bytes
               ; genere size ptr [esp+n*4]
               (:fill-vector
                 (nextl :vectors)
                 1					; reference memoire
                 7					; memoire 32 bits
                 (add (if (eq n 0)			; modRM
                          0
                          (logshift (:get-range n ()) 6))
                      4)
                 #$24					; SIB
                 (if (eq n 0) 0 (:get-range n t))	; # bytes a poker
                 n
                 ())))
         ((memq (car obj) :mem-access)
          (let ((dpt (:getvalue (car obj)))
                (obj386 (:getparm (cadr obj))))
               (selectq (vref obj386 0)
                   (0				; reg (cas normal)
                     (:fill-vector-reg-dpt obj386 (cadr obj) dpt ()))
                   (1				; memoire
                      (:fill-vector-mem-dpt obj386 (cadr obj) dpt ()))
                   (2 					; immediat
                      (:fill-vector-imm-imm obj386 (cadr obj) dpt)))))
         ((memq (car obj) :memq-access)
          (:add-llitt (cadr obj))
          (:fill-vector
            (nextl :vectors)
            1						; reference memoire
            7						; memoire 32 bits
            #$05					; ModRm : [disp32]
            ()						; pas de SIB
            4						; size a poker: tjrs 32 bits
            (addadr (loc (cadr obj))			; dword a poker
                    (:getvalue (car obj)))
            (cadr obj)))
         ((eq (car obj) '|@|)				; etiquette
          (let ((offset (:offset (cadr obj) () ())))
               (:fill-vector
                 (nextl :vectors)
                 2					; immediat
                 3					; imm32
                 ()					; ModRM
                 ()					; SIB
                 4					; 4 bytes a poker
                 offset					; offset absolu etiquette
                 (when (equal offset '(-1 . 0))
                       obj))))))

(defun :op1arg (opcode modrm opreg opimm size)
   ;; utilise pour toutes les operations a 1 argument
   ;; opcode+modrm --> operation sur mem32 ou mem16 (cf size)
   ;; opreg        --> operation sur reg32 ou reg16
   ;; opimm        --> push imm32
   ;; size --> () = 32 bits; t = 16 bits
   (let ((n (:getparm :arg1)))			; translate :arg1 en 386
        (when size
              (:1byte #$66))			; prefixe 16 bits
        (selectq (vref n 0)
            (0
               ;; arg1 est un registre
               (if opreg
                   (:1byte (add opreg (:register? :arg1)))
                   (:1byte opcode)
                   (:1byte (add modrm (add (:register? :arg1) #$C0)))))
            (1
               ;; arg1 est une ref memoire
               (:poke-op opcode modrm n))
            (2
               ;; un immediat donc PUSH
               ;; traitement du (push '#$8000) ou (push '-1) sur 32 bits
               ;; on doit pusher 00008000 ou 0000FFFF pas FFFF8000 ou FFFFFFFF
               (when (and (not size)
                          (consp :arg1)
                          (eq (car :arg1) 'quote)
                          (fixp (cadr :arg1))		; :arg1 : forme 'numb
                          (lt (cadr :arg1) 0))
                     (vset n 4 4)			; imm2
                     (vset n 5 (cons 0 (cadr :arg1))))
               (selectq (vref n 4)
                        (1 (:1byte #$6A)		; imm8
                           (:1byte (vref n 5)))
                        (4 (:1byte #$68)		; imm32
                           (:setref (vref n 6) :pc-current); reference objet
                           (:dword (vref n 5) size)))))))

(defun :op2arg (opcode modrm size)
   ;; utilise pour toutes les operations a 2 arguments
   ;; size = t --> 16 bits
   ;; size = () --> 32 bits
   ;;
   ;; ATTENTION: op arg1,arg2 LLM3 se traduit en op386 arg2,arg1 sur le 386 !!!
   ;; reg-mem signifie donc que arg2 est un reg et arg1 est une ref memoire.
   ;;
   ;; renvoie () si cas impossible (cf imm-imm)
   ;;
   ;; op2arg est utilisee pour traiter les instructions suivantes
   ;; nom : opcode 	modRM
   ;; ---   ------	-----
   ;; ADD : 01		0
   ;; AND : 21		4
   ;; CMP : 39		7
   ;; LEA : 8D 		()
   ;; OR  : 09		1
   ;; SUB : 29		5
   ;; XOR : 31		6
   ;;
   (let ((n1 (:getparm :arg1))
         (n2 (:getparm :arg2))
         (ntyp 0))
        (setq ntyp (add (vref n1 0) (times (vref n2 0) 3)))
        (if (le ntyp 5)
            ; cas normal
            (setq *swap-arg* ())
            ; sinon on est dans un cas barbare imm-xxx
            ; on swap (ce n'est utilise que par CMP)
            (setq *swap-arg* t)
            (setq :arg1 (prog1 :arg2 (setq :arg2 :arg1)))
            (setq n1 (prog1 n2 (setq n2 n1)))
            (setq ntyp (add (vref n1 0) (times (vref n2 0) 3))))
        ; pour le cmp, l'ordre des arguments est l'inverse de l'ordre normal
        ; ainsi sub a1,a2  ==> a2 <- a2-a1
        ; mais cnbgt a1,a2 ==> a1 > a2    !!!
        (when (eq modrm 56) (setq *swap-arg* (not *swap-arg*)))
        (if (eq opcode #$8D)			; cas particulier du LEA
            (ifn (and (eq (vref n1 0) 1)	; tjrs lea reg,mem
                      (eq (vref n2 0) 0))
                 (error 'lea 'errbpa (list :arg1 :arg2))
                 (:poke-op opcode (vref n2 2) n1))
            ; toute la suite du code est dans le else du IF !!!
            (when (and (eq modrm 56)		; cas particulier du cmp
                       (not size)		; en 32 bits
                       ; cmp -1,a1 genere un cmp imm8 qui est expanse
                       ; en ffffffff pas en 0000ffff: donc dans ce cas
                       ; (cabeq '-1 a1) renvoie tjrs () meme si a1=-1
                       ; (car c'est -1 sur 16 bits)....
                       (fixp (vref n1 5))
                       (lt (vref n1 5) 0))		; negatif
                  ; alors remettre au format 32 bits
                  (vset n1 4 4)
                  (vset n1 5 (cons 0 (vref n1 5))))	; a la mode 16 bits
            (when (and size (or (neq (vref n1 0) 1)
                                (neq (vref n2 0) 1)))
                  (:1byte #$66))	 		; prefixe 16 bits
            (selectq ntyp
                (0
                   ;; reg-reg
                   (:1byte opcode)			; opcode
                   (:1byte (add (vref n1 2)		; modRM
                                (add (:register? :arg2) #$C0))))
                (1
                   ;; reg-mem
                   (:poke-op (add opcode 2) (vref n2 2) n1))
                (2
                   ;; reg-imm
                   (selectq (vref n1 4)
                       (1
                          ;; imm8
                          (:1byte #$83)
                          (:1byte (add modRM (add (:register? :arg2) #$C0)))
                          (:1byte (vref n1 5)))
                       (4
                          ;; imm32
                          (:1byte #$81)
                          (:1byte (add modRM (add (:register? :arg2) #$C0)))
                          (:setref (vref n1 6) :pc-current)
                          (:dword (vref n1 5) size))))
                (3
                   ;; mem-reg
                   (:poke-op opcode (vref n1 2) n2))
                (4
                   ;; mem-mem
                   (:setrwork n1)
                   (when size (:1byte #$66))		; mettre le prefixe
                   (:poke-op opcode 40 n2))		; op avec RWORK (EBP)
                (5
                   ;; mem-imm
                   (selectq (vref n1 4)
                       (1
                          ;; imm8
                          (:poke-op #$83 modRM n2)
                          (:1byte (vref n1 5)))
                       (4
                          ;; imm32
                          (:poke-op #$81 modRM n2)
                          (:setref (vref n1 6) :pc-current)
                          (:dword (vref n1 5) size))))
                (t ())))))

(defun :mov (dest src size)
   ;; genere MOV dest,src
   ;; si size=() --> 32 bits
   ;; si size=t  --> 8 bits !!! et PAS 16 !!!!!!
   ;;
   (setq *rwork-in-use* ())
   (setq *edi-pushed* ())
   (let ((n1 (prog1 (:getparm src) (setq *rwork-in-use* ())))
         (n2 (:getparm dest)))
        (when (and (eq (vref n1 0) 2)		; si n1 est un immediat
                   (not size)			; reference 32 bits
                   (fixp (vref n1 5)))		; pour que -1 = 0000fffff
              (vset n1 5 (cons 0 (vref n1 5))))	; et pas fffffff
        (selectq (add (vref n1 0) (times (vref n2 0) 3))
            (0
               ;; reg-reg
               (:1byte #$89)			; opcode
               (:1byte (add (vref n1 2)		; modRM
                            (add (:register? dest) #$C0))))
            (1
               ;; reg-mem
               (:poke-op (if size '(#$0F #$B6) #$8B) (vref n2 2) n1))
            (2
               ;; reg-imm (imm32)
               (:1byte (add #$B8 (:register? dest)))
               (:setref (vref n1 6) :pc-current)
               (:32bits (vref n1 5)))
            (3
               ;; mem-reg
               (:poke-op (if size #$88 #$89) (vref n1 2) n2))
            (4
               ;; mem-mem ???
               (when *edi-pushed*
                     (when (and (consp dest)
                                (eq (car dest) '|&|))	; => dest arg sur pile
                           ;; on l'update pour tenir compte du push EDI
                           (:change-stack-offset n2 4))
                     (when (and (consp src)
                                (eq (car src) '|&|))	; => src arg sur pile
                           (:change-stack-offset n1 4)))
               (ifn *rwork-in-use*
                    (progn
                           (:poke-op (if size '(#$0F #$B6) #$8B) 40 n1); RWORK<-:arg1
                           (:poke-op #$89 40 n2))		; mov n2,RWORK (EBP)
                    ;; on ne doit pas utiliser rwork car il l'est par :arg2
                    (:poke-op #$FF 48 n1)		; push :arg1
                    (ifn size
                         (:poke-op #$8F 0 n2)		; pop :arg2
                         ;; else on est en mode 8 bits
                         (let ((regaux (ifn (eq (:register? :arg3) 0)	; EAX?
                                            0		; non : regaux = EAX
                                            8)))	; oui : regaux = ECX
                              (:1byte #$87)
                              (:1byte (add #$04 regaux)); xchg regaux,[esp]
                              (:1byte #$24)
                              (:poke-op #$88 regaux n2)	; mov :arg2,byte regaux
                              ;; pop eax
                              (:1byte (add #$58 (logshift regaux -3)))))))
            (5
               ;; mem-imm
               (if size
                   ;; imm8
                   (progn (:poke-op #$C6 0 n2)
                          (:1byte (vref n1 5)))
                   ;; else imm32
                   (:poke-op #$C7 0 n2)
                   (:setref (vref n1 6) :pc-current)
                   (:32bits (vref n1 5)))))
        (when *edi-pushed* (:1byte #$5F))))		; pop edi

(defun :divm (reg-res)		; division : quotient + reste
   ;; reg-res= 0 (ie EAX) --> quotient
   ;; reg-res= 2 (ie EDX) --> remainder
   (if (memq (:register? :arg2) '(0 2))			; if :arg2 = eax or edx
       (let ((coreg (sub 2 (:register? :arg2)))
             (n1 (:getparm :arg1)))
            (if (neq (vref n1 0) 2)		; n1 n'est pas un immediat
                ;; then on sauve l'autre registre dans RWORK
                (progn (:1byte #$8B)
                       (:1byte (add #$E8 coreg)))	; mov RWORK,coreg
                ; sinon c'est dans la pile et on met :arg1 dans rwork
                (:1byte (add #$50 (sub 2 (:register? :arg2))))	; push registre
                (:1byte #$BD)
                (:32bits (vref n1 5))	; mov RWORK,imm32
                (setq :arg1 'rwork))
            (unless (eq (:register? :arg2) 0)		; :arg2 <> EAX
                    (:1byte #$8B) (:1byte #$C2))	; mov eax,edx
            (:1byte #$66)
            (:1byte #$99)		 		; sign ext ax in dx:ax
            (when (eq (:register? :arg1) 2)		; :arg1 = EDX
                  (setq :arg1 'rwork))			; :arg1 devient rwork
            (when (eq (:register? :arg1) 0)		; :arg1 = EDX patch AP
                  (setq :arg1 'rwork))			; :arg1 devient rwork
            ; idiv :arg1
            (:1byte #$66)				; division 16 bits
            (:poke-op #$F7
                      #$38
                      (if (:register? :arg1)
                          (if (eq :arg1 'rwork)
                              (:fill-vector
                                (nextl :vectors) 0 0 #$C5 () 0 () ())
                              (vset n1
                                    2
                                    (add #$C0 (:register? :arg1)))
                              n1)
                          n1))
            (when (= reg-res 2)
                  ; and %edx,FFFFh
                  (:inst '(#$81 #$E2 #$FF #$FF #$00 #$00)))
            (unless (eq (:register? :arg2) reg-res)	; :arg2 <> reg-res
                    ; mov arg2,res
                    (:1byte #$8B) (:1byte (add (logshift (:register? :arg2) 3)
                                               (add #$C0 reg-res))))
            (if (eq (vref n1 0) 2)			; :arg1 = imm
                ; pop coreg
                (:1byte (add #$58 (sub 2 (:register? :arg2))))
                ; else mov coreg,rwork
                (:1byte #$89)
                (:1byte (add #$E8 coreg))))		; let
       ; else : cas general
       ; pas de setrwork dans ce qui suit car :arg1 peut etre un immediat!!!
       (:mov 'RWORK :arg1 ())			; RWORK <- :arg1
       (when (and (consp :arg2) (eq (car :arg2) '|&|))	; pile? arg2
             ; si arg2 est dans la pile, on update sa position de 2 car on va
             ; pusher eax et edx
             (setq :arg2 (list '|&| (add (cadr :arg2) 2))))
       (:1byte #$50)				    ; push eax
       (:1byte #$52)				    ; push edx
       ;; clean the high part of eax and edx - THIS FIX A BUG !! [CJ]
       (:inst '(#$B8 #$00 #$00 #$00 #$00))	    ; mov  eax,0
       (:inst '(#$BA #$00 #$00 #$00 #$00))	    ; mov  edx,0
       (let ((n2 (:getparm :arg2)))
            (:set-modrm-for-reg-2 n2)
            (:poke-op #$8B 0 n2)		    ; mov eax,:arg2
            (:1byte #$66)
            (:1byte #$99)			    ; sign extend ax in dx:ax
            (:1byte #$66)
            (:1byte #$F7)
            (:1byte #$FD)			    ; IDIV RWORK
            (:poke-op #$89 (logshift reg-res 3) n2) ; mov :arg2,eax ou edx
            (:1byte #$5A)			    ; pop edx
            (:1byte #$58))))			    ; pop eax

;;; LE CHARGEUR 386 PROPREMENT DIT

;;
;; Assemble et charge pour un 80386 une liste d'instructions LAP
;; en 1 passe et demie.
;;
;; pour compiler: 1) se place dans \lelisp\system
;;		  2) lancer Le-Lisp + complice a partir d'un core deja cree
;;		  3) positionner #:complice:parano-flag a ()
;;		  4) positionner #:compiler:open-p a t (fait par defaut)
;;		  5) evaluer (compilemodule "loader" ())
;;		  6) patcher loader.lo en enlevant tout ce qui n'est dans une
;;		     instruction (loader '(...))
;;

(unless (boundp ':stat?)
   ;; t => le chargeur fait ses propres stats
   ;; attention : :stat? ne sert que pour la fabrication du chargeur (macro +)
   (defvar :stat? ()))

(unless (featurep 'loader)
   (add-feature 'loader))

(defvar :verbose?
        ;; t => dump ecran par defaut
        (if (boundp ':verbose?)
            :verbose?
            ()))

(unless (boundp ':macro?)
   ;; t => les macros compilees (msubr ou dmsubr) ne sont pas chargees
   (defvar :macro? ()))

;
; .SSection "les fonctions non chargeables"
;

(dont-load ':ins0)

 #+ :stat? (mapc 'dont-load '(:maxsv :addsv :setsv :getsv))

; .SSection "les utilitaires de test"
;************************************

(defun loaderend ()
    (mapc 'remob (oblist #.(kwote #:sys-package:colon))))

; pour les stats
 #+ :stat?
(progn

(unless (boundp ':stat-local-counter)
       (defvar :stat-local-counter 0.))

(unless (boundp ':stat-vector)
        (setq :stat-vector (makevector 8 0.))
               ; 0 : en-tete local
               ; 1 : compteur local instructions LLM3
               ; 2 : compteur local octets
               ; 3 : facteur d'expansion maximum pour le module
               ; 4 : en-tete global
               ; 5 : compteur global instructions LLM3
               ; 6 : compteur global octets
               ; 7 : facteur d'expansion maximum global
               (vset :stat-vector 0 "POUR CE MODULE :")
               (vset :stat-vector 4 "GLOBALEMENT :"))

(dmd :getsv (ou)
   ; reference la case ou de :stat-vector
   `(vref :stat-vector ,ou))

(dmd :setsv (ou combien)
   ; met combien dans la case ou de :stat-vector
   `(vset :stat-vector ,ou ,combien))

(dmd :addsv (ou combien)
   ; ajoute a la case ou du vector :stat-vector combien
   `(:setsv ,ou (+ (:getsv ,ou) ,combien)))

(dmd :maxsv (ou quoi)
   ; change le max du vector :stat-vector
   `(when (fgt ,quoi (:getsv ,ou))
   (:setsv ,ou ,quoi)))

(defun :fabs (n)
   (if (lt n 0) (+ 65536. n) (float n)))

(defun :update-inst-counter (arg)
   ; arg = () : on initialise
   ; arg = t  : on finalise
   (ifn arg
        (setq :pc-current-aux (copylist :pc-current))
        (let ((bytecount (subadr :pc-current :pc-current-aux)))
             (setq bytecount
                   (if (consp bytecount)
                       (fadd (fmul (:fabs (car bytecount)) 65536.0)
                             (:fabs (cdr bytecount)))
                       (:fabs bytecount)))
             (:addsv 1 1)
             (setq :stat-local-counter
                   (fadd :stat-local-counter bytecount))
             (:addsv 5 1)
             (:addsv 6 bytecount)
             (:maxsv 3 bytecount)
             (:maxsv 7 bytecount)
             (when (feqn bytecount 0.)
                   (with ((outchan ()))
                         (print "WARNING : not loaded --> " obj))))))

(defun loaderstat ()
   (loader '((end)))
   (with ((obase 10))
         (let ((i 0))
              (until (gt i 4)
                     (terpri)
                     (print (:getsv i))
                     (terpri)
                     (print "Nombre d'instructions LLM3                 : "
                            (:getsv (:incr i)))
                     (print "Taille en octets                           : "
                            (:getsv (:incr i)))
                     (print "Nombre moyen d'octets par instruction LLM3 : "
                            (if (fneqn (:getsv (sub1 i)) 0.)
                                (/ (:getsv i) (:getsv (sub1 i)))
                                0.))
                     (print "facteur d'expansion maximal                : "
                            (:getsv (:incr i)))
                     (:incr i))))
   ())

)	; progn de :stat?

;;;
;;; .Section "Les variables globales du chargeur"
;;;

(defvar :lmax				; taille max 1 ligne pour le dump
        (if (boundp ':lmax)
            :lmax
            11))

(defvar :mac-lab			;  generateur d'etiquettes 1
        (if (boundp ':mac-lab)
            :mac-lab
            0))

(defvar :@-lab				;  generateur d'etiquettes 2
        (if (boundp ':@-lab)
            :@-lab
            0))

(defvar :warning-ifct-list		; liste fncts interpretees appelees
        (if (boundp ':warning-ifct-list)
            :warning-ifct-list
            ()))

(defvar :entry-list			; liste des points d'entre'e locaux
        (if (boundp ':entry-list)
            :entry-list
            ()))

(defvar :entries-nr			; A-liste des ENTRIES non re'solues
        (if (boundp ':entries-nr)
            :entries-nr
            ()))

(defvar :dont-load-i			; instruction non chargeable
        (if (boundp ':dont-load-i)
            :dont-load-i
            ()))

(defvar :no-error-flag			; flag d'erreur chargement
        (if (boundp ':no-error-flag)
            :no-error-flag
                 t))

(defvar :special-list
        (if (boundp ':special-list)
            :special-list
            '(CBINDN TAG LOCK PROT))); valeur=cval #:llcp:

;;; pour eviter trop de getglobal on fait les getglobal sur toutes
;;; les variables LLM3 utilisables par le chargeur

(unless (boundp ':alloc-float)
        (setq :alloc-float (getglobal '_alloc_float))
        (when (eq :alloc-float 0)
              (setq :alloc-float ())))

;;; si alloc-float = 0 alors on est dans le nx lisp
;;; sinon on est dans l'ancien lisp a base de 387

;inutile (defextern-cache t)	; on en profite du DEFEXTERN-CACHE

(mapc #'(lambda (x)
            (let ((sym (symbol #:sys-package:colon x))
                  (val ()))
                 (if (boundp sym)
                     (eval `(defvar ,sym ',(symeval sym)))
                     (if (eq (setq val (getglobal x)) 0)
                         (error 'getglobal 'errbpa x)
                         (if (numberp val)
                             ;; Patch pour (SUBADR ..) qui change les adresses
                             ;; supe'rieures a` #$8000 en adresses ne'gatives !
                             (setq val (cons 0 val)))
                         (eval `(defvar ,sym ',val))))))
        '(bcode bfloat bvect bstrg bvar econs dlink llink))

(unless :alloc-float
        ;; donc nx lisp avec flottant en C
        (mapc #'(lambda (x)
                    (let ((sym (symbol #:sys-package:colon x))
                          (val ()))
                         (if (boundp sym)
                             (eval `(defvar ,sym ',(symeval sym)))
                             (if (eq (setq val (getglobal x)) 0)
                                 (error 'getglobal 'errbpa x)
                                 (if (numberp val)
                                     ;; Patch pour (SUBADR ..) qui change les
                                     ;; adresses supe'rieures a` #$8000 en
                                     ;; adresses ne'gatives !
                                     (setq val (cons 0 val)))
                                 (eval `(defvar ,sym ',val))))))
                ; les variables utilisees par le loader pour les flottants
                '(farg1 farg2  cfadd cfsub cfmul cfdiv
                        cfeqn cfneqn cfgt  cfge  cflt  cfle)))

;inutile (defextern-cache ())			; fin du getglobal multiple

;;; LLM3-var

(defvar :module				; Le nom du module en cours de charg.
        (if (boundp ':module)
            :module
            ()))

(defvar :saved-by-loader		; liste des litte'raux entre 2 ENDs.
        (if (boundp ':saved-by-loader)
            :saved-by-loader
            ()))

(defvar :global-saved-by-loader		; liste de vecteurs de litte'raux.
        (if (boundp ':global-saved-by-loader)
            :global-saved-by-loader
            '(())))

;;;
;;; .SSection "Les indicateurs conditionnels du chargeur"
;;;

(defvar #:ld:special-case-loader
        (if (boundp '#:ld:special-case-loader)
            #:ld:special-case-loader
            ()))			; mise a jour retardee valfn

(unless (boundp '#:ld:shared-strings)
        (defvar #:ld:shared-strings ())); rend les constantes de chai^ne EQ

;;;
;;; .Section "Interpre'tation d'un objet"
;;;

(defvar :talkp      ())
(defvar :f          ())
(defvar :arg        ())

(defun :ins (obj)
   ;; charge un objet (instruction ou pseudo) en me'moire
   (when :talkp
         (if (consp obj) (outpos 4))
         (prin obj)
         (when (ge (outpos) 30) (terpri))
         (outpos 30)
         (:prin4hex :pc-current)
         (prin "  "))

   (cond ((and :dont-load-i (nequal obj '(ENDL))))
         ((null obj))
         ((atom obj)
          ; une e'tiquette locale (symbole ou nb)
          (:foundlabel obj))
         (t
          (setq :arg   (cdr obj))
          (setq :codop (car obj)
                :arg1  (cadr obj)
                :arg2  (caddr obj)
                :arg3  (cadddr obj))

          (selectq :codop

              ;
              ; les pseudos-instructions de de'claration
              ;

              (ABORT	; Pour re'cupe'rer de la me'moire en cas scraschhhh.
                     )

              (ENTRY	; (ENTRY <name> <ftype> <lparam>)
                  ; si la fonction est chargeable
                  (unless (setq :dont-load-i (:dont-load? :arg1))
                          ; charge les indicateurs
                          (newl :entry-list
                                (list :arg1
                                      (if (:compiled-type? :arg2)
                                          :arg2
                                          (:error "ENTRY" obj))
                                      :arg3))
                          (putprop :arg1 (copylist :pc-current) ':fval)
                          ; re'solution des re'fe'rences avants.
                          (mapc ':solve-aux (cassq :arg1 :entries-nr))
                          (setq :entries-nr
                                (delete (assq :arg1 :entries-nr) :entries-nr))
                          (setq :fntname :arg1)))

              (ENDL		; fin d'une fonction locale
                  (when :talkp (terpri))
                  (setq :dont-load-i ())
                  (when :llabels-nr
                        (setq :llabels-nr ())
                        (:error "references locales non resolues":llabels-nr)))

              (END		; fin d'un module
                  ; ve'rification de l'entry-list
                  (:ins0 '(ENDL))
                  #+ :stat? (:setsv 2 :stat-local-counter)
                  #+ :stat? (setq :stat-local-counter 0.)
                  (while :entry-list
                         (remprop (caar :entry-list) ':fval)
                         (remprop (caar :entry-list) '#:llcp:ftype)
                         (remprop (caar :entry-list) '#:llcp:fval)
                         (remprop (caar :entry-list) '#:system:loaded-from-file)
                         (nextl :entry-list))
                  (:clean-llitt)
                  (when :entries-nr
                        (:error "Il reste des ENTRY non resolus "
                          (prog1 :entries-nr (setq :entries-nr ()))))
                  (when #:ld:special-case-loader
                        (while (and (consp #:ld:special-case-loader)
                                    (consp (car #:ld:special-case-loader)))
                               (apply 'setfn
                                      (nextl #:ld:special-case-loader)))))

              (EVAL 	; (EVAL s)		e'valuation a` LOAD-TIME
                  (catcherror t (eval :arg1)))

              (FENTRY	; (FENTRY <name> <ftype> <lparam>)
                  ; si la fonction est chargeable
                  (unless (setq :dont-load-i (:dont-load? :arg1))
                          ; enle`ve les indicateurs (a` ve'rifier ?!?!?)
                          (remprop :arg1 '#:system:loaded-from-file)
                          (let ((:valaux (copylist :pc-current)))
                               (if #:ld:special-case-loader
                                   (newl #:ld:special-case-loader
                                         (list :arg1 :arg2 :valaux))
                                   (remprop :arg1 '#:llcp:ftype)
                                   (remprop :arg1 '#:llcp:fval)
                                   (setfn :arg1 :arg2 :valaux))
                               (newl :llabels (list :arg1 :valaux))
                               (remprop :arg1 ':entry)
                               (setq :fntname :arg1))))

              (LOCAL	; (LOCAL <name>)
                  ; rend le symbole local a` une fonction.
                  (:AddLocalLabel :arg1))

              (TITLE	; (TITLE de'finition du nom du module)
                  #+ :stat? (setq :stat-local-counter 0.)
                  (setq :module :arg1))

              ; appel de la partie de'pendante des  machines!
              ; :machins  contient le ge'ne'rateur d'instructions.
              (t (:machins obj)))))))

(defmacro :ins0 (obj)
   ;; idem mais non bavard
   `(let ((:talkp ()))
   (:ins ,obj)))

;;;
;;; les super-fonctions appelees par tout le monde
;;;

(defun :offset (etiq rel? ref?)
   ;; rel? = t --> adresse relative sur 32 bits
   ;; rel? = () --> offset absolu sur 32 bits
   ;; ref? = t --> etiquette referencee
   (let ((valadr (or (car (cassq etiq :llabels))	; e'tiq locale
                     (and (symbolp etiq)		; ENTRY deja chargee
                          (getprop etiq ':fval)))))
        (if valadr
            ;; then etiq deja connue: on renvoie son offset
            (if rel?
                (subadr (subadr valadr :pc-current) 4)
                valadr)
            (when ref?
                  (if (and (symbolp etiq) (null (assq etiq :llabels)))
                      (:addentry etiq (cons rel? (copylist :pc-current)))
                      (:addlabel etiq (cons rel? (copylist :pc-current)))))
            '(-1 . 0))))

(defun :val32 (etiq rel?)
   ;; poke 32 bits correspondant a l'adresse d'etiq ou 0 si non-resolue
   ;; etiq peut etre une etiquette simple (saut relatif 32 bits)
   ;; ou une liste (dpt etiq) : appel indirect absolu sur 32 bits
   ;; dans ce dernier cas on sauve la reference a etiq pour le
   ;; cloader (:setref)
   (cond ((consp etiq)				; saut absolu via la FVAL apriori
          (:setref etiq :pc-current)		; reference l'etiquette
          (:32bits (addadr (loc (cadr etiq))	; poke adresse
                           (:getvalue (car etiq)))))
         (t ; saut relatif sur 32 bits
            (:32bits (:offset etiq rel? t)))))

(defun :inverse-test (opcode)
   ;; renvoie le test reciproque de opcode par exemple (:inverse-test jl) = jg
   ;; si a<b alors b>a
   (let ((rel8 (lt opcode #$80)))		; pour traiter les Jcc rel 8
        (sub (selectq (add opcode (if rel8 #$10 0))	; traite les Jcc rel32
                 (#$87 #$82)				; ja jb
                 (#$82 #$87)				; jb ja
                 (#$83 #$86)				; jae jbe
                 (#$86 #$83)				; jbe jae
;                (#$84 #$84)				; je je
;                (#$85 #$85)				; jne jne
                 (#$8F #$8C)				; jg jl
                 (#$8C #$8F)				; jl jg
                 (#$8D #$8E)				; jge jle
                 (#$8E #$8D)				; jle jge
                 (t (add opcode (if rel8 #$10 0))))
             (if rel8 #$10 0))))

(defun :go-etiq (opcode modrm label)
   ;; opcode = opcode du saut rel32
   ;; modrm = modificateur du modrm pour un saut indirect (JMP ou JCALL)
   (when *swap-arg*
         (setq opcode (if (consp opcode)
                          (list (car opcode)
                                (:inverse-test (cadr opcode)))
                          (:inverse-test opcode)))
         (setq *swap-arg* ()))
   (cond ((not modrm)
          ; saut relatif sur 32 bits
          (ifn (consp opcode)
               (:1byte opcode)
               (:1byte (car opcode))
               (:1byte (cadr opcode)))
          (:val32 label t))
         ((atom label)
          (:1byte #$FF)				; opcode dword ptr [??]
          (:1byte (add modrm 5))
          (:add-llitt label)			; et oui...
          (:val32 (list 'FVALQ label) t))))

(defun :bx2 (inf sup type fct)
   ;; teste si :arg1 est compris entre inf et sup
   ;; si oui saut en :arg2
   ;; type=() --> BFxxxx
   ;; type=t  --> BTxxxx
   ;; fct = fonction lisp a evaluer si :arg1 est une constante
   ;; traitement du cas constant
   (if (and (consp :arg1) (eq (car :arg1) 'quote))	; constante
       (when (eq (if (funcall fct (cadr :arg1)) t ()) type)
             (:go-etiq #$E9 () :arg2))
       (let ((gagne :arg2)
             (perdu (catenate "perdu" (:@eti))))
            (:AddLocalLabel perdu)
            (unless (or (:register? :arg1)
                        (and (:register? inf) (:register? sup)))
                    (:setrwork (:getparm :arg1)); si :arg1 n'est pas un reg
                    (setq :arg1 'rwork))		; on l'y  met...
            (when inf
                  (setq :arg2 inf)
                  (:op2arg #$39 56 ())		; comp 32 bits arg1 < inf?
                  (if sup
                      (:go-etiq '(#$0F #$82)()(if type perdu gagne)); jb: typ <>
                      (if (and :31bitfloats (eq inf 'BCONS))
                          (:go-etiq (list #$0F (if type #$8D #$8C)) () gagne)
                          (:go-etiq (list #$0F (if type #$83 #$82)) () gagne))))
            (when sup
                  (setq :arg2 sup)
                  (:op2arg #$39 56 ())		; comp 32 bits arg1 >= sup?
                  (:go-etiq (list #$0F (if type #$82 #$83)) () gagne))	;jb,jae
            (:foundlabel perdu))))

; version 387 natif
 #+ :alloc-float
(defun :prep-arg-float ()
   ; prepare l'argument pour un appel flottant
   ; renvoie le vecteur associe a :arg1
   (let ((n (copy (:getparm :arg1))))
        (selectq (vref n 0)
            (0 (setq :arg1 (list 'NULL :arg1)))
            (1 (:setrwork n)
               (setq :arg1 '(NULL RWORK)))
            (2 (unless (floatp (cadr :arg1))
                       (error 'float 'errbpa :arg1))
               (setq :arg1 (list 'null :Arg1))))
        n))

(defun :test-imm (pred)
   ;; renvoie () si :arg1 et :arg2 ne sont pas des constantes
   ;; sinon si (pred (cadr:arg1) (cadr :arg2)) est vrai, alors genere jmp :Arg3
   ;; utilise dans les comparaisons constante constante
   (when (and (consp :arg1) (consp :arg2)
              (eq (car :arg1) 'quote)
              (eq (car :arg2) 'quote))		; :arg1 et :arg2 sont des cstes
         (when (funcall pred (cadr :arg1) (cadr :arg2))	; pred vrai
               (:go-etiq #$E9 () :arg3))
         t))

 #- :alloc-float
;;; nx lisp avec flottant en C
(defun :fcall (fct saut)
   ;; operation flottante: genere Call fct, si saut=t alors btnil arg2,arg3
   ;;
   (:mov 'farg1 :arg1 ())			; farg1 <- arg1
   (:mov 'farg2 :arg2 ())			; farg2 <- arg2
   (:1byte #$E8)				; CALL fct saut relatif
   (:32bits (subadr (subadr fct :pc-current) 4)); see :offset
   (ifn  saut
        (:mov :arg2 'farg2 ())			; arg2 <- resultat
        ; else
        ; bfnil farg2,arg3
        (setq :arg1 'NIL)
        (setq :arg2 'farg2)
        (:op2arg #$39 56 ())			; cmp nil,farg2
        (:go-etiq '(#$0F #$85) () :arg3)))	; saut si JNE

; sinon version 387 natif avec vieux lisp
 #+ :alloc-float
(defun :fcall (modrm saut)
   ;; operation flottante
   ;;
   (let ((n2))
        (:prep-arg-float)
        (:op1arg #$DD 0 () () ())		; fld qword ptr [:arg1]
        (setq :arg1 :arg2)
        (setq n2 (:prep-arg-float))
        (:op1arg #$DC modrm () () ())		; fop qword ptr [:arg2]
        (ifn saut
             (progn (:1byte #$FF)		; call dword [alloc_float]
                    (:1byte #$15)
                    (:32bits #.(symbol #:sys-package:colon 'alloc-float))
                    (setq :arg1 '(null rwork))
                    (:op1arg #$DD 24 () () ())	; fstp qword ptr [rwork]
                    (:resetrwork n2)		; :arg2 <- RWORK
                    (:1byte #$9B))		; fwait
             ; else
             (:1byte #$50)			; push eax
             (:1byte #$DF)
             (:1byte #$E0)			; fstsw ax
             (:1byte #$9E)			; sahf
             (:1byte #$58)			; pop eax
             ; jsaut :arg3
             (:go-etiq saut () :arg3))))

(defun :gen-test-float (arg label type)			; test	arg1,80000000h
   (if (and (consp arg) (eq (car arg) 'quote))		; constante
       (when (eq type (if (floatp (cadr arg)) t ()))
             (:go-etiq #$E9 () label))			; jmp	label
       (let ((n (:getparm arg)))
            (selectq (vref n 0)
                (0
                   ;; arg1 est un registre : on fait un or.
                   (let ((reg (:register? arg)))
                        (:1byte #$09)			; or	reg,reg
                        (:1byte (add (add #$C0 reg) (mul 8 reg)))))
                (1
                   ;; arg1 est une reference memoire	; test	mem,80000000h
                   (:poke-op #$F7 0 n)
                   (:dword '(#$8000 . 0) ()))
                (t
                   ;; erreur
                   (error ':getparm '"index hors limite" obj))))
       (if type
           (:go-etiq '(#$0F #$88) () label)		; js	label
           (:go-etiq '(#$0F #$89) () label))))		; jns	label

(defun :machins (obj)
   ;; re'alise le chargement de l'instruction obj
   ;; pretraitement des arguments
   (mapc #'(lambda (x)
              (let ((xname x))
                   (setq x (symeval x))
                   (cond ((equal x ''_undef_))	; because (mov '_undef_ a1)
                         ((consp x)
                          (selectq (car x)
                              (QUOTE
                                     (unless (cadr x)	; '() = nil
                                             (set xname 'nil)))
                              (EVAL
                                    (set xname (eval (cadr x))))
                              ((|&| |@| car cdr cval plist fval pkgc null
                                 oval alink pname val typ cvalq fvalq))
                              ((symbolp (car x))
                               (let ((:f (getfn1 'LD-IND (car x))))
                                    (if :f
                                        (funcall :f x)
                                        (error 'loader 'errudf x)))))))))
           '(:arg1 :arg2 :arg3))
   (:inc@eti)
   #+ :stat? (:update-inst-counter ())
   (selectq :codop

       (CAR
           ;; MOV (CAR x) x
           (:ins `(MOV (CAR ,:arg1) ,:arg1)))

       (CDR
           ;; MOV (CDR x) x
           (:ins `(MOV (CDR ,:arg1) ,:arg1)))

       (MOV
           ;; MOV source dest
           (:mov :arg2 :arg1 ()))

       (PUSH
           ;;
           (:op1arg #$FF 48 #$50 #$68 ()))

       (POP
           ;;
           (:op1arg #$8F 0 #$58 () ()))

       (JCALL
           ;; CALL inter-module
           (:go-etiq #$E8 16 :arg1))

       (JMP
           ;;  JMP inter module = JMP FAR PTR
           (:go-etiq #$E9 32 :arg1))

       (CALL
           ;; cf JCALL
           (:go-etiq #$E8 () :arg1))

       (BRA
           ;; saut INTRA-MODULE	; jmp near sur 32 bits
           (:go-etiq #$E9 () :arg1))

       (RETURN
           (:1byte #$C3))

       ;;
       ;; comparaisons 32 bits
       ;;

       (CABEQ
           ;; CABEQ op1 op2 lab
           (cond ((:test-imm 'eq))
                 ((equal :arg1 :arg2) (:go-etiq #$E9 () :arg3))
                 (t
                   (when (:op2arg #$39 56 ())			; cmp op1 op2
                         (:go-etiq '(#$0F #$84) () :arg3)))))	; saut si JE

       (CABNE
           ;; CABNE op1 op2 lab
           (cond ((:test-imm 'neq))
                 ((equal :arg1 :arg2))
                 (t
                   (when (:op2arg #$39 56 ())			; cmp op1 op2
                         (:go-etiq '(#$0F #$85) () :arg3)))))	; saut si JNE

       (BTNIL
           ;; BTNIL op lab <=> CABEQ op '() lab
           (setq :arg3 :arg2)
           (setq :arg2 'NIL)
           (:op2arg #$39 56 ())				; cmp op1 op2
           (:go-etiq '(#$0F #$84) () :arg3))		; saut si JE

       (BFNIL
           ;; BFNIL op lab <=> CABNE op '() lab
           (setq :arg3 :arg2)
           (setq :arg2 'NIL)
           (:op2arg #$39 56 ())				; cmp op1 op2
           (:go-etiq '(#$0F #$85) () :arg3))		; saut si JNE

       ;;
       ;; tests de type
       ;;

       (BTVAR
           ;; BTVAR op lab
           (:bx2 'BVAR 'BCONS t  'variablep))

       (BFVAR
           ;; BFVAR op lab
           (:bx2 'BVAR 'BCONS () 'variablep))

       (BTCONS
           ;; BTCONS op lab
           (:bx2 'BCONS ()    t  'consp))

       (BFCONS
           ;; BFCONS op lab
           (:bx2 'BCONS ()    () 'consp))

       (BTFIX
           ;; BTFIX op lab
           (:bx2 () 'BFLOAT   t  'fixp))

       (BFFIX
           ;; BFFIX op lab
           (:bx2 () 'BFLOAT   () 'fixp))

       (BTFLOAT
           ;; BTFLOAT op lab
           (ifn :31bitfloats
                (:bx2 'BFLOAT 'BVECT t  'floatp)
                (:gen-test-float :arg1 :arg2 t)))

       (BFFLOAT
           ;; BFFLOAT op lab
           (ifn :31bitfloats
                (:bx2 'BFLOAT 'BVECT () 'floatp)
                (:gen-test-float :arg1 :arg2 ())))

       (BTSTRG
           ;; BTSTRG op lab
           (:bx2 'BSTRG 'NIL   t   'stringp))

       (BFSTRG
           ;; BFSTRG op lab
           (:bx2 'BSTRG 'NIL   ()  'stringp))

       (BTVECT
           ;; BTVECT op lab
           (:bx2 'BVECT 'BSTRG t   'vectorp))

       (BFVECT
           ;; BFVECT op lab
           (:bx2 'BVECT 'BSTRG ()  'vectorp))

       (BTSYMB
           ;; BTSYMB op lab
           (:bx2 'NIL   'BCONS t   'symbolp))

       (BFSYMB
           ;; BFSYMB op lab
           (:bx2 'NIL 'BCONS  ()   'symbolp))

       ;;
       ;; Les comparaisons entieres
       ;;

       (CNBEQ
           ;; CNBEQ op1 op2 lab
           (unless (:test-imm 'eqn)
                   (:op2arg #$39 56 t)			; comparaison 16 bits
                   (:go-etiq '(#$0F #$84) () :arg3)))	; JE

       (CNBNE
           ;; CNBNE op1 op2 lab
           (unless (:test-imm 'neqn)
                   (:op2arg #$39 56 t)			; comparaison 16 bits
                   (:go-etiq '(#$0F #$85) () :arg3)))	; JNE

       (CNBLT
           ;; CNBLT op1 op2 lab
           (unless (:test-imm 'lt)
                   (:op2arg #$39 56 t)			; comparaison 16 bits
                   (:go-etiq '(#$0F #$8C) () :arg3)))	; JL

       (CNBLE
           ;; CNBLE op1 op2 lab
           (unless (:test-imm 'le)
                   (:op2arg #$39 56 t)			; comparaison 16 bits
                   (:go-etiq '(#$0F #$8E) () :arg3)))	; JLE

       (CNBGT
           ;; CNBGT op1 op2 lab
           (unless (:test-imm 'gt)
                   (:op2arg #$39 56 t)			; comparaison 16 bits
                   (:go-etiq '(#$0F #$8F) () :arg3)))	; JG

       (CNBGE
           ;; CNBGE op1 op2 lab
           (unless (:test-imm 'ge)
                   (:op2arg #$39 56 t)			; comparaison 16 bits
                   (:go-etiq '(#$0F #$8D) () :arg3)))	; JGE

       ;;
       ;;  Les comparaisons arithme'tiques flottantes.
       ;;

       (CFBEQ
           ;; CFBEQ op1 op2 lab
           (unless (:test-imm 'feqn)
                   #- :alloc-float (:fcall :CFEQN t)
                   #+ :alloc-float (:fcall 24 '(#$0F #$84))))

       (CFBNE
           ;; CFBNE op1 op2 lab
           (unless (:test-imm 'fneqn)
                   #- :alloc-float (:fcall :CFNEQN t)
                   #+ :alloc-float (:fcall 24 '(#$0F #$85))))

       (CFBLT
           ;; CFBLT op1 op2 lab
           (unless (:test-imm 'flt)
                   #- :alloc-float (:fcall :CFLT t)
                   #+ :alloc-float (:fcall 24 '(#$0F #$82))))

       (CFBLE
           ;; CFBLE op1 op2 lab
           (unless (:test-imm 'fle)
                   #- :alloc-float (:fcall :CFLE t)
                   #+ :alloc-float (:fcall 24 '(#$0F #$86))))

       (CFBGT
           ;; CFBGT op1 op2 lab
           (unless (:test-imm 'fgt)
                   #- :alloc-float (:fcall  :CFGT t)
                   #+ :alloc-float (:fcall 24 '(#$0F #$87))))

       (CFBGE
           ;; CFBGE op1 op2 lab
           (unless (:test-imm 'fge)
                   #- :alloc-float (:fcall :CFGE t)
                   #+ :alloc-float (:fcall 24 '(#$0F #$83))))

       ;;
       ;; Les instructions arithme'tiques
       ;;

       (DECR
           ;; DECR op
           (:op1arg #$FF 8 #$48 () t))

       (DIFF
           ;; DIFF op1 op2
           (cond ((eq (:immvalue? :arg1) 0))
                 ((eq (:immvalue? :arg1) 1)		; si c'est op2-1
                  (setq :arg1 :arg2)
                  (:op1arg #$FF 8 #$48 () t))		; alors decr op2
                 (t (:op2arg #$29 40 t))))

       (INCR
           ;; INCR op
           (:op1arg #$FF 0 #$40 () t))

       (PLUS
           ;; PLUS op1 op2
           (cond ((eq (:immvalue? :arg1) 0))
                 ((eq (:immvalue? :arg1) 1)		; si c'est op2+1
                  (setq :arg1 :arg2)
                  (:op1arg #$FF 0 #$40 () t))		; alors incr op2
                 (t (:op2arg #$01 0 t))))

       (LAND
           ;; LAND op1 op2
           (:op2arg #$21 32 t))

       (LOR
           ;; LOR op1 op2
           (:op2arg #$09 8 t))

       (LXOR
           ;; LXOR op1 op2
           (:op2arg #$31 48 t))

       (LSHIFT
           ;; LSHIFT circ op ???
           (let ((n1 (:getparm :arg1))
                 (n2 (:getparm :arg2))
                 (la-fin (catenate "fin" (:@eti)))
                 (shr (catenate "shr" (:@eti)))
                 (modrm 32))				; /4 = SHL /5 = SHR
                (:set-modrm-for-reg-2 n2)
                (:set-modrm-for-reg-2 n1)
                (if (eq (vref n1 0) 2)			; :arg1 est un immediat
                    (let ((n (vref n1 5)))
                         (when (consp n) (error 'LSHIFT 'errbpa obj))
                         (when (lt n 0)			; :arg1 < 0
                               (setq modrm 40)		; SHR
                               (setq n (sub 0 n))); n <- |n|
                         (setq n (logand n #$FF))	; on ne garde que 8 bits
                         (unless (eqn n 0)
                                 (:1byte #$66)		; 16 bits
                                 (:poke-op (if (eqn n 1) #$D1 #$C1)
                                   modrm n2)		; SHL/R :arg2
                                 (unless (eqn n 1) (:1byte n))))
                    ; else :arg1 n'est pas un immediat
                    (:AddLocalLabel la-fin)
                    (:AddLocalLabel shr)
                    (when (eq (:register? :arg2) 1)	; :arg2 = ecx
                          ; si :arg2=ecx alors on le transforme en RWORK car
                          ; ECX est modifie...
                          (setq n2
                                (:fill-vector
                                  (nextl :vectors) 0 0 #$C5 () 0 () ()))
                          (setq :arg2 'rwork))
                    (unless (eq (:register? :arg1) 1)	; :arg1 <> ECX
                            (:1byte #$8B)
                            (:1byte #$E9)		; mov RWORK,ECX
                            (:poke-op #$8B 8 n1))	; mov ECX,:arg1
                    (:1byte #$66)
                    (:1byte #$09)			; or cx,cx = cmp cx,0
                    (:1byte #$C9)
                    (:go-etiq '(#$0F #$88) () shr)	; jl shr
                    (:1byte #$66)			; prefixe 16 bits
                    (:poke-op #$D3 32 n2)		; shl :arg2,cl
                    (:go-etiq #$E9 () la-fin)		; jmp la-fin
                    (:foundlabel shr)
                    (:1byte #$F7)
                    (:1byte #$D9)			; neg ecx
                    (:1byte #$66)			; prefixe 16 bits
                    (:poke-op #$D3 40 n2)		; shr :arg2,cl
                    (:foundlabel la-fin)
                    (unless (eq (:register? :arg1) 1)	; :arg1 <> ECX
                            (:1byte #$89)
                            (:1byte #$E9)))))		; mov ECX,RWORK

       (NEGATE
           ;; NEGATE op
           (:op1arg #$F7 24 () () t))

       (REM
           (:divm 2))

       (QUO
           (:divm 0))

       (TIMES
           (let ((n1 (:getparm :arg1))
                 (n2 (:getparm :arg2)))
                (unless (eq (vref n2 0) 0)	; n2 n'est pas un registre
                        (:setrwork n2)		; transfert dans RWORK
                        (setq :arg2 'rwork))
                (:1byte #$66) 	 		; prefixe 16 bits
                (selectq (vref n1 0)
                    ((0 1)			; reg-reg or reg-mem
                     (:set-modrm-for-reg-2 n1)
                     (:poke-op '(#$0F #$AF) (logshift (:register? :arg2) 3) n1))
                    (2				; reg-imm
                     (selectq (vref n1 4)
                         (1			; imm8
                          (:1byte #$6B)
                          (:1byte (add (times (:register? :arg2) 9) #$C0))
                          (:1byte (vref n1 5)))
                         (4			; imm32
                          (:1byte #$69)
                          (:1byte (add (times (:register? :arg2) 9) #$C0))
                          (:16bits (vref n1 5))))))
                (when (eq :arg2 'rwork) (:resetrwork n2))))

       ;;
       ;;  Les instructions arithme'tiques flottantes
       ;;

       (FPLUS
            #- :alloc-float (:fcall :CFADD ())
            #+ :alloc-float (:fcall 0 ()))

       (FDIFF
            #- :alloc-float (:fcall :CFSUB ())
            #+ :alloc-float (:fcall 40 ()))

       (FTIMES
            #- :alloc-float (:fcall :CFMUL ())
            #+ :alloc-float (:fcall 8  ()))

       (FQUO
            #- :alloc-float (:fcall :CFDIV ())
            #+ :alloc-float (:fcall 56  ()))

       ;;
       ;;  Les autres instructions (par ordre alpha)
       ;;

       (ADJSTK
           ;; ADJSTK 'nb
           (setq :arg2 'ESP)
           (if (:immvalue? :arg1)
               (unless (eq (:immvalue? :arg1) 0)
                       ; :arg1 <- :arg1 * 4
                       (setq :arg1 (kwote (logshift (:immvalue? :arg1) 2)))
                       (:op2arg #$01 0 ()))	; add esp,4*:arg1
               (setq :arg1
                     (:fill-vector (nextl :vectors) 'ESP :arg1 4 0 () () ()))
               (:op2arg #$8D () ())))		; lea 'ESP,...

       (HGSIZE
           ;; HGSIZE vector/string arg2
           (:setrwork (:getparm (list 'VAL :arg1)))
           (:mov :arg2 '(SIZE rwork) ()))

       (HBMOVX
           ;; val,string,index   val -> string[index]
           (:mov (:fill-vector
                   (nextl :vectors) (list 'VAL :arg2) :arg3 1 8 () () ())
                 :arg1
                 t))

       (HBXMOV
           ;; string,index,val ==> val <- string[index]
           (:mov :arg3
                 (:fill-vector
                   (nextl :vectors) (list 'VAL :arg1) :arg2 1 8 () () ())
                 t))

       (HPMOVX
           ;; val,vector,index   val -> vector[index]
           (:mov (:fill-vector
                   (nextl :vectors) (list 'VAL :arg2) :arg3 4 8 () () ())
                 :arg1
                 ()))

       (HPXMOV
           ;; vector,index,val ==> val <- vector[index]
           (:mov :arg3
                 (:fill-vector
                   (nextl :vectors) (list 'VAL :arg1) :arg2 4 8 () () ())
                 ()))

       (MOVXSP
           ;; SS:[SP][\2] <- op1
           (:mov (:fill-vector (nextl :vectors) 'ESP :arg2 4 0 () () ())
                 :arg1
                 ()))

       (XSPMOV
           ;; op2 <- SS:[SP][\1]
           (:mov :arg2
                 (:fill-vector (nextl :vectors) 'ESP :arg1 4 0 () () ())
                 ()))

       (SOBGEZ
           ;; SOBGEZ op lab
           (:op1arg #$FF 8 #$48 () t)		; dec arg1
           (:go-etiq '(#$0F #$8D) () :arg2))	; JGE lab

       (SSTACK
           ;; ESP <- :arg1
           (:mov 'ESP :arg1 ()))

       (STACK
           ;; :arg1 <- SS:SP
           (:mov :arg1 'ESP ()))

       (BRI
           ;; branchement indirect via le contenu de :arg1
           (:op1arg #$FF 32 () () ()))

       (CALLI
           ;; saut indirect via le contenu de :arg1
           (:op1arg #$FF 16 () () ()))

       (BRX
           ;; BRX l1 ... ln index
           ;; saut via une table d'indirection residant dans le code (adr=:arg2)
           (let ((label (catenate "L1" (:@eti)))
                 (table :arg1))
                (:AddLocalLabel label)
                (setq :arg1
                      (:fill-vector
                        (nextl :vectors) (list '|@| label) :arg2 4 () () () ()))
                ; jmp dword ptr [label+4*:arg2]
                (:op1arg #$FF 32 () () ())	; jmp indirect 32bits
                (:foundlabel label)
                (mapc #'(lambda (etiq) (:val32 (cadr etiq) ())) table)))

       (NOP
           (:1byte #$90))

       ((setq :f (getfn1 'LD-CODOP :codop))
        (apply :f :arg))

       (t
           ;; c'est donc une erreur
           (error  'loader "instruction inconnue" :codop)))

   #+ :stat? (:update-inst-counter t))

;;;
;;; .Section "Fonctions principales de chargement"
;;;

(defun loaderesolve ()
   (loader '((end))))

(defvar :pc-current
        (if (boundp ':pc-current)
            :pc-current
            0))

(defvar :llabels
        (if (boundp ':llabels)
            :llabels
            ()))

(defvar :llabels-nr
        (if (boundp ':llabels-nr)
            :llabels-nr
            ()))

(defvar :fntname
        (if (boundp ':fntname)
            :fntname
            'loader))

(defvar :codop
        (if (boundp ':codop)
            :codop
            ()))

(defvar :arg1
        (if (boundp ':arg1)
            :arg1
            ()))

(defvar :arg2
        (if (boundp ':arg2)
            :arg2
            ()))

(defvar :arg3
        (if (boundp ':arg3)
            :arg3
            ()))

 #+ :stat? (defvar :pc-current-aux
                  (if (boundp ':pc-current-aux)
                      :pc-current-aux
                      0))

(defvar :nwl
        (if (boundp ':nwl)
            :nwl
            0)))

(defun loader (:lobj . :talkp1)
   ;; <:lobj> est la liste des objets a` charger
   ;; <:talkp> = T si on de'sire un listage hexa du chargement
   (setq :talkp (or (car :talkp1) :verbose?)
         :pc-current  (#:system:ccode)	; le compteur ordinal courant
         :llabels    ()			; A-liste des e'tiquettes locales
         :llabels-nr ()			; A-liste des e'tiq. loc. non re'solues
         :fntname    'loader)		; fonction en cours de chargement
   #+ :stat? (setq :pc-current-aux 0)
   #+ :stat? (when (fneqn (:getsv 2) 0.); il faut initialiser un nx module
                   (:setsv 1 0.)
                   (:setsv 2 0.)
                   (:setsv 3 0.))
   (while :lobj
          (setq :nwl 0)
          (when (gtadr :pc-current (#:system:ecode))
                (with ((outchan ()))
		      (error 'loader 'ERRFCOD ())
                      (exit #:system:toplevel-tag)))
          (setq :no-error-flag
                (and (catcherror t (:ins (nextl :lobj)))
                     :no-error-flag))
          ; en cas d'erreur, positionner le flag d'erreur
          (when :talkp (terpri)))
   ; test des re'fe'rences non re'solues
   (:ins '(ENDL))
   (if :no-error-flag
       (prog1 (#:system:ccode)
              (#:system:ccode :pc-current))
       (setq :no-error-flag t)
       (printerror 'loader "fonction non chargee" :fntname))))

