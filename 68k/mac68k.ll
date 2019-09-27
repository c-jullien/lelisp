; .EnTete "Le-Lisp (c) version 15.2" " " "Les Macros du 68K"
; .EnPied "mac68k.ll" "%" " "
; .SuperTitre "Les Macros LLM3 pour 680x0. Syntaxe MOTOROLA."
;
; .Centre "*****************************************************************"
; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
; .Centre "*****************************************************************"
;
; .Centre "$Header: /usr/cvs/lelisp/68k/mac68k.ll,v 1.2 2016/05/26 08:15:20 jullien Exp $"
 
(unless (>= (version) 15)
        (error 'load 'erricf 'mac68k))

(defvar #:system:read-case-flag ())

(defvar #:sys-package:colon 'expand)


; .Section "Les valeurs des assemblages conditionnels"

; .SSection "Les assemblages conditionnels de l'expanseur"

(defvalue 31BITFLOATS t)      ; nbs flottants sur 31 bits.
(defvalue MC68020 t)          ; du genre SUN3.
(defvalue MC68881 t)          ; pre'sence du coprocesseur flottant. 
(defvalue CALIGN   ())        ; alignement sur des frontie`res de 32 bits.


; .SSection "Les assemblages conditionnels du code LLM3"

                           ; valeurs par de'faut pour le 680x0
(defvalue COMPILO  0)      ; =0 pre'sence du compilateur
(defvalue DEBUG    0)      ; =0 pas de DEBUG de l'initalisateur
(defvalue GCDEBUG  0)      ; =0 pas de DEBUG du GC
(defvalue SEDEBUG  0)      ; =0 pas de DEBUG du SEND
(defvalue DIVOVFL  0)      ; =0 le hard teste le de'bordement de la division
(defvalue TRUEOVFL 1)      ; =1 teste les vrais de'bordements arithme'tiques

; .Section "Utilisation des registres"

; .SSection "Accus LISP"

(defregister   A1      "a1")   ; |
(defregister   A2      "a2")   ; |  les fameux 4
(defregister   A3      "a3")   ; |  accus de LISP
(defregister   A4      "a4")   ; |

; .SSection "Registres Auxiliaires"

(defregister   AUX0    "a0")   ; auxiliaire des macros
(defregister   AUX1    "a6")   ; auxiliaire des macros [HxMOVM, HBTEQ]

(defregister   DUX0    "d0")   ; auxiliaire des macros
(defregister   DUX1    "d1")   ; auxiliaire des macros
(defregister   DUX2    "d5")   ; auxiliaire des macros

(defregister   CUX0    "d0")   ; partie haute du re'sultat au retour de C
(defregister   CUX1    "d1")   ; partie basse du re'sultat au retour de C



(defregister   FUX0    "fp0")  ; auxiliaire des macros pour flottants & 68881
(defregister   FUX1    "fp1")  ; auxiliaire des macros pour flottants & 68881

; .SSection "Registre de pile"

(defregister   SP       "a7")   ; pointeur de pile

; .SSection "Registres de zonage"

(defregister   RBFLOAT  "d2")   ; de'but des zones floats

(defregister   RBVECT   "d3")   ; de'but vecteurs

(defregister   RBSTRG   "d4")   ; de'but chaines

(defregister   RBSYMB   "a5")   ; de'but de la zone des symboles
(defregister   KNIL     "a5")   ; NIL c'est le de'but des symboles
(defregister   NIL      "a5")   ; NIL c'est le de'but des symboles

(defregister   RBVAR    "d6")   ; de'but de la zone des variables

(defregister   RBCONS   "d7")   ; de'but de la zone des CONS

; .SSection "Masques pour les PUSH/POP"

; Les registres a` sauvegarder lors d'appels a` C sont:

(defvar :registers-save
  '(A1 A2 A3 A4 SP RBFLOAT RBVECT RBSTRG RBSYMB NIL RBVAR RBCONS))

;         le masque des registres a donc la te^te (pour un POP et par defaut):
;            A A A A  A A A A  D D D D  D D D D 
;            7 6 5 4  3 2 1 0  7 6 5 4  3 2 1 0

;            0 0 1 1  1 1 1 0  1 1 1 1  1 1 0 0 = 3EFC

(de :reg-mask (reg)
    (selectq (pgetvalue reg)
	     ("a0" #$0100)  ("d0" 0)
	     ("a1" #$0200)  ("d1" #$2)
	     ("a2" #$0400)  ("d2" #$4)
	     ("a3" #$0800)  ("d3" #$8)
	     ("a4" #$1000)  ("d4" #$10)
	     ("a5" #$2000)  ("d5" #$20)
	     ("a6" #$4000)  ("d6" #$40)
	     ("a7" #$8000)  ("d7" #$80)))

(defvar  :POPMASK   #$0000)

(mapc (lambda(r) (logor :POPMASK (:reg-mask r)))
      :registers-save)

(de :reverse16 (16b)
    ; renverse les 16 bits de la valeur <16b>
    (do ((r16b #$0000)
	 (msk  1 (mul msk 2))
	 (i 0 (add1 i)))
	((gt i 15) r16b)
	(setq r16b (logor r16b
			  (logshift (logand 16b msk) (sub 15 (add i i)))))
	))

(defvar  :PUSHMASK  (:reverse16 :POPMASK))

(defvalue   POPMASK   #.:POPMASK)      ;#$3EFC en ge'ne'ral
(defvalue   PUSHMASK  #.:PUSHMASK)     ;#$3F7C en ge'ne'ral
(defvalue   FIXMASK   "#$0000FFFF")

(defvalue       MINFIX           $8001)  ; -32767
(defvalue       MAXFIX           32767)
(defvalue       MINUS0           $8000)

; .SSection "Les Accumulateurs pour dialoguer avec C"

(defvar FLTACC10 'FLTACC10)
(defvar FLTACC11 'FLTACC11)
(defvar FLTACC20 'FLTACC20)
(defvar FLTACC21 'FLTACC21)

#.(defvar predecessor_from_C "_")

; Ces accus sont utilise's dans: common/llfloat.c (ACCUSINGLE1 ACCUSINGLE2)

(defvalue ACCUSINGLE1 #.(catenate predecessor_from_C "ACCUSINGLE1"))
(defvalue ACCUSINGLE2 #.(catenate predecessor_from_C "ACCUSINGLE2"))

; .Section "Les Valeurs des symboles d'acce`s"

; .SSection "Aux proprie'te's naturelles des symboles"

(defvalue   CVAL       0)                   ; adresse 32 bits
(defvalue   PLIST      4)                   ; adresse 32 bits
(defvalue   FVAL       8)                   ; adresse 32 bits
(defvalue   PKGC       12)                  ; adresse 32 bits
(defvalue   OVAL       16)                  ; adresse 32 bits
(defvalue   ALINK      20)                  ; adresse 32 bits
(defvalue   FTYPE      24)                  ; code 16 bits
(defvalue   PTYPE      26)                  ; code 16 bits
(defvalue   PNAME      28)                  ; adresse de chai^ne 32 bits
(defvalue   FINSYMB    32)

; .SSection "Aux chai^nes de caracte`res et aux tableaux"

(defvalue   VAL       0)
(defvalue   TYP       4)

; .SSection "Aux cellules de liste"

(defvalue   CAR       0)                   ; adresse 32 bits
(defvalue   CDR       4)                   ; adresse 32 bits

; .SSection "Valeurs des ftypes"

(defvalue   FUNDEF	0)
(defvalue   SUBR0	1)
(defvalue   SUBR1	2)
(defvalue   SUBR2	3)
(defvalue   SUBR3	4)
(defvalue   SUBRN       5)
(defvalue   SUBRF       6)
(defvalue   EXPR        7)
(defvalue   FEXPR       8)
(defvalue   MACRO       9)
(defvalue   DMACRO      10)
(defvalue   SUBRM       11)
(defvalue   SUBRDM      12)

; .SSection "Les types des caracte`res"

(defvalue  TCNULL    0)		; CNULL
(defvalue  TCBCOM    1)		; debut commentaire
(defvalue  TCECOM    2)		; fin de commentaire
(defvalue  TCQUOTE   3)		; quote char
(defvalue  TCLPAR    4)		; par ouvrante 
(defvalue  TCRPAR    5)		; par fermante
(defvalue  TCDOT     6)		; le point (des listes)
(defvalue  TCSEP     7)		; un se'parateur
(defvalue  TCSPKGC   8)		; se'parateurs de packages
(defvalue  TCSPLICE  9)		; splice macro caractere
(defvalue  TCMACRO  10)		; macro caractere
(defvalue  TCSTRING 11)		; se'parateur de chaines
(defvalue  TCPNAME  12)		; pname normal
(defvalue  TCSYMB   13)		; symbole normal
(defvalue  TCMSYMB  14)		; symbole mono caractere

; .SSection "Les types d'unite's syntaxiques"

(defvalue  TCOBJ    3)		; objet lisp
(defvalue  TCLIST   4)		; liste lisp

; .Section "Les fonctions d'impression spe'cifiques"

(de #:expand:prin-statop (op)
    )

(de :generate-label ()
    ; engendre une e'tiquette locale UNIQUE
    (concat "." (incr genlab-counter)))

(de #:expand:genlab ()
    ; engendre une e'tiquette UNIQUE pour une instruction LLM3
    ; ou bien he'las une macro.
    (or genlab (setq genlab (:generate-label))))


(de #:expand:prin-label (l)
    ; imprime une e'tiquette
    (when (and l (neq *opcod 'equ)) (print l)))

(de #:expand:prin-at (o)
    ; imprime un atome
    (cond ((not (symbolp o))
               (prin o))
          ((eq (chrnth 0 o) #/$)
               (mapc (lambda (x) (princn (lowercase x)))
                     (explode o)))
          (t (if (getvalue o)
                 (#:expand:prin-at (getvalue o))
                 (prin o)))))

(de #:expand:prin-cons (l)
    (cond ((memq (car l) '(|#| |@| |%|))
           (prin "#") 
           (cond ((eq (cadr l) #$8000) (prin "$8000"))
                 ((and (fixp (cadr l)) (lt (cadr l) 0))
                   (#:expand:prinhex (cadr l)) )
                 (t (#:expand:prin-at (cadr l))) ))
          ((eq (car l) '&)
           ; acce`s direct a` la pile
           (prin (* (cadr l) 4) "(" 'SP ")"))
          ((eq (car l) 'strg)
           (let ((l (pname (cadr l))))
                (while l
                       (terpri)
                       (prin "	DC.W	")
                       (if (cdr l)
                           (prin (logor (logshift (nextl l) 8) (nextl l)))
                           (prin (logshift (nextl l) 8))))))
          ((symbolp (car l))
           (when (and (symbolp (car l))
                      (neq (getvalue (car l)) 0))
                 (#:expand:prin-at (car l)))
           (prin "(")
           (#:expand:prin-at (cadr l))
           (prin ")"))
          (t (prin (car l)))))

(de #:expand:prinhex (n)
    (prin "$")
    (#:expand:prinhexb (logand (logshift n -8) #$FF))
    (#:expand:prinhexb (logand n #$FF)) )

(de #:expand:prinhexb (n)
    (when (lt n #$10) (princn #/0))
    (with ((obase 16)) (prin n)) )

; .Section "Les Tests de types spe'cifiques pour 68K"

(de  calign ()
     ; alignement conditionnel
     ; Sur 680x0 le comportement du "prefetch" par rapport a`
     ; l'alignement est trop complexe pour savoir ce qu'il faut
     ; faire. Ce code permet donc de tester ce qu'il se passe
     ; en essayant de comprendre .....
     (when (pgetvalue 'CALIGN)
           ["	ALIGN	2"]))

(de immediat? (op)
    ; teste si l'argument est un imme'diat entier.
    (if (and (consp op)
             (eq (car op) '|#|)
             (fixp (cadr op)))
        t
        ()))

(de short-immediat? (op)
    ; teste si l'argument est un imme'diat entier entre ]0 8]
    ; pour les instructions Arithme'tiques Quick Imme'diat
    (if (and (consp op)
             (eq (car op) '|#|)
             (consp (cdr op))
             (fixp (cadr op))
             (gt (cadr op) 0)
             (le (cadr op) 8))
        t
        ()))

(de imm<128? (op)
    (if (and (consp op)
             (eq (car op) '|#|)
             (fixp (cadr op))
             (ge (cadr op) 0)
             (lt (cadr op) 128))
        t
        ()))

(de memory? (op)
    (if (atom op)
        (not (or (register? op) (numberp op)))
        (not (memq (car op) '(@ % |#|)))))

(de impure-label-imm? (reg)
    (and (consp reg) (eq (car reg) '|%|)))

(de pure-label-imm? (reg)
    (if (and (consp reg) (eq (car reg) '|@|))
	t
        ()))

(de label-imm? (reg)
    (if (and (consp reg)
	     (or (eq (car reg) '|%|)
		 (eq (car reg) '|@|)))
	t
        ()))

(de immediat+8 ((dieze val))
    (if (numberp val)         ; c'est un nombre de'cimal
        (+ val 8)
        (+ 8                        ; c'est $xxxx
           (with ((ibase 16))
                 (implode (cdr (explode val)))))))

(de same-obj? (x y)
    ; teste si les deux objets <x> et <y> sont les memes:
    ;   memes registres(defregister), memes mots memoire(defvalue, defvar,...)
    ; On evitera ainsi peut-etre les MOVE Ax,Ax
    (when (register? x)	(setq x (pgetvalue x)))
    (when (register? y)	(setq y (pgetvalue y)))
    (when (atom x) (setq x (string x)))
    (when (atom y) (setq y (string y)))
    (cond ((and (stringp x)(stringp y))
	   (let ((len (slen x)))
	        (if (neq len (slen y))
		    ()
		    (do ((n 0 (add1 n)))
			((or (eq n len)
			     (neq (lowercase (sref x n))
				  (lowercase (sref y n))))
			 (eq n len))
			))))
	  ((equal x y))))


(de DBRA (label)
    ; beaucoup d'assembleurs n'arrivent pas a` ge'ne'rer cette
    ; instruction : incroyable mais vrai .....
    ; Le compteur est D0 (DUX0) par de'faut.
    ["	DC.W	$51C8"]
    ["	DC.W	" label "-."])

(de DBNE (label)
    ; beaucoup d'assembleurs n'arrivent pas a` ge'ne'rer cette
    ; instruction : incroyable mais vrai .....
    ; Le compteur est D0 (DUX0) par de'faut.
    ["	DC.W	$56C8"]
    ["	DC.W	" label "-."])


; .Section "Les pseudos de LLM3"

(defvar #:expand:lextern ())

(de pure ()
    ["	SECTION 10"])

(de impure ()
    ["	SECTION 15"])

(de xref-def (fnt arg)
    (unless (or (register? arg) (memq arg #:expand:lextern))
            (newl #:expand:lextern arg)
            (when (gt (outpos) 0) (terpri))
            (funcall fnt arg) ))

(de xrefi (adr) ["	XREF	" adr])
(de xdefi (adr) ["	XDEF	" adr])
(de xrefp (adr) ["	XREF	" adr])
(de xdefp (adr) ["	XDEF	" adr])

(definstruct TITLE  (name) (setq #:expand:lextern ()) )
(definstruct PURE   () (pure))
(definstruct IMPURE () (impure))
(definstruct LABEL  ())
(definstruct ADR    (adr)  ["	DC.L	" adr])
(definstruct NOP    () ["	NOP"])
(definstruct END    () [])
(definstruct XREFI  (module nom) (xref-def 'xrefi nom))
(definstruct XDEFI  (nom) (xref-def 'xdefi nom))
(definstruct XREFP  (module nom) (xref-def 'xrefp nom))
(definstruct XDEFP  (nom) (xref-def 'xdefp nom))

; .Section "Les instructions LLM3"

; .SSection "Fonctions auxiliaires de ge'ne'ration"


(de call-global (adr)
    ; appel d'un sous-programme global
    (xref-def 'xrefp adr)
    ["	JSR	" adr])

(de load-heap-adr-in-AUX0 (arg)
    ; charge l'adresse indirect de 'arg' dans 'AUX0'
    (cond ((register? arg)
           ["	MOVE.L	(" arg ")," 'AUX0])
          ((impure-label-imm? arg)
           ["	MOVE.L	" (cadr arg) , 'AUX0])
          (t
           ["	MOVE.L	" arg , 'AUX0]
           ["	MOVE.L	(" 'AUX0 ")," 'AUX0])))

(de load-heap-obj-adr-in-AUX0 (arg)
    ; charge l'adresse des valeurs d'un objet du heap
    (load-heap-adr-in-AUX0 arg)
    ["	ADDQ.L	#8," 'AUX0])

; .SSection "Macros de test de type d'objet Lisp"

;   Test de type ne ne'cessitant qu'une seule borne dans un registre

(de btf1xx (borne cond adr label)
    ["	CMP.L	" adr , borne]
    ["	" cond "	" label])

(definstruct BTFIX (fix label)
    (btf1xx (if (pgetvalue '31BITFLOATS)
                'RBVECT
                'RBFLOAT)
            "BHI"
	    fix label))

(definstruct BFFIX (fix label)
    (btf1xx  (if (pgetvalue '31BITFLOATS)
                 'RBVECT
                 'RBFLOAT)
             "BLS"
	     fix label))

(definstruct BTCONS (cons lab) (btf1xx 'RBCONS  "BLE" cons lab))
(definstruct BFCONS (cons lab) (btf1xx 'RBCONS  "BGT" cons lab))
(definstruct BTNIL  (obj lab)  (btf1xx 'KNIL    "BEQ" obj lab))
(definstruct BFNIL  (obj lab)  (btf1xx 'KNIL    "BNE" obj lab))

;   Test de type avec 2 bornes dans des registres

(de bt2xx (btype etype adr label)
    (let ((continue (:generate-label)))
         (if (register? btype)
	     ["	CMP.L	" adr , btype]
	     ["	MOVE.L	" btype , 'DUX0]
	     ["	CMP.L	" adr , 'DUX0])
	 ["	BHI.S	" continue]
	 (if (register? etype)
	     ["	CMP.L	" adr , etype]
	     ["	MOVE.L	" etype , 'DUX0]
	     ["	CMP.L	" adr , 'DUX0])
	 ["	BHI	" label]
	 [continue]))

(de bf2xx (btype etype adr label)
    (if (register? btype)
        ["	CMP.L	" adr , btype]
        ["	MOVE.L	" btype , 'DUX0]
        ["	CMP.L	" adr , 'DUX0])
    ["	BHI	" label]
    (if (register? etype)
        ["	CMP.L	" adr , etype]
        ["	MOVE.L	" etype , 'DUX0]
        ["	CMP.L	" adr , 'DUX0])
    ["	BLS	" label])

(definstruct BTLISP (obj lab)
    ; teste si l'objet <obj> est un objet Lisp a` marquer!
    ; branchement a` <lab> si vrai.
    (xref-def 'xrefi 'BNUMB)
    (xref-def 'xrefi 'ECONS)
    (bt2xx 'BNUMB   'ECONS obj lab))

(definstruct BFLISP (obj lab)
    ; teste si l'objet <obj> est un objet Lisp a` marquer!
    ; branchement a` <lab> si faux.
    (xref-def 'xrefi 'BNUMB)
    (xref-def 'xrefi 'ECONS)
    (bf2xx 'BNUMB   'ECONS obj lab))

(definstruct BTCODE (adr lab)
    ; ?!?! cette instruction n'est ni utilise'e ni documente'e ?!?!
    (xref-def 'xrefi 'BCODE)
    (xref-def 'xrefi 'CCODE)
    (bt2xx 'BCODE 'CCODE adr lab))

(definstruct BTNUMB (num lab)
    (xref-def 'xrefi 'BNUMB)
    (bt2xx 'BNUMB
	   (if (pgetvalue '31BITFLOATS)
	       'RBVECT
	     'RBFLOAT)
	   num lab))

(definstruct BFNUMB (num lab)
    (xref-def 'xrefi 'BNUMB)
    (bf2xx 'BNUMB
	   (if (pgetvalue '31BITFLOATS)
	       'RBVECT
	     'RBFLOAT)
	   num lab))

(definstruct BTFLOAT (flt lab)
    (ifn (pgetvalue '31BITFLOATS)
	 (bt2xx 'RBFLOAT 'RBVECT flt lab)
	 ["	MOVE.L	" flt , 'DUX0]
	 ["	BLT	" lab]))

(definstruct BFFLOAT (flt lab)
    (ifn (pgetvalue '31BITFLOATS)
	 (bf2xx 'RBFLOAT 'RBVECT flt lab)
	 ["	MOVE.L	" flt , 'DUX0]
	 ["	BGE	" lab]))

(definstruct BTVECT (vect lab)  (bt2xx 'RBVECT  'RBSTRG vect lab))

(definstruct BFVECT (vect lab)  (bf2xx 'RBVECT  'RBSTRG vect lab))

(definstruct BTSTRG (str lab)  (bt2xx 'RBSTRG  'RBSYMB str lab))

(definstruct BFSTRG (str lab)  (bf2xx 'RBSTRG  'RBSYMB str lab))

(definstruct BTSYMB (symb lab)  (bt2xx 'RBSYMB  'RBCONS symb lab))

(definstruct BFSYMB (symb lab)  (bf2xx 'RBSYMB  'RBCONS symb lab))

(definstruct BTVAR (var lab)   (bt2xx 'RBVAR   'RBCONS var lab))

(definstruct BFVAR (var lab)   (bf2xx 'RBVAR   'RBCONS var lab))


; .SSection "Macros qui initialise la borne des variables"

(definstruct SETBVAR (adr)
    ; initialise le registre et le mot memoire
    ["	MOVE.L	" adr , 'RBVAR]
    ["	MOVE.L	" adr , 'BVAR])

; .SSection "Manipulations de la pile"

;         STACK   ea          sauve la valeur du pointeur de pile
;         SSTACK  ea          change la valeur du pointeur de pile
;         CHKSTK  val,lab     test le debordement de pile
;         PUSH    ea,sp       empile un pointeur
;         POP     ea          depile un pointeur
;         POPR    sp,ea       depile un pointeur
;         TOPST   ea          consulte le sommet de pile
;         TOPSTR  sp,ea       consulte le sommet de pile
;         XTOPST  ea          echange du sommet de pile avec ea
;         XTOPSTR sp,ea       echange du sommet de pile avec ea
;         ADJSTK  op          ajuste la pile   SP = SP + op
;         ADJSTKR sp,op       ajuste la pile   SP = SP + op

(definstruct STACK (op) ["	MOVE.L	" 'SP , op])

(definstruct SSTACK (op) ["	MOVE.L	" op , 'SP])

(definstruct CHKSTK (maxsp lab)
    (let ((continue (:generate-label)))
         ["	CMP.L	" maxsp , 'SP]
	 ["	BGT.S	" continue]
	 ["	JMP	" lab]
	 (calign)
      [continue]))

(definstruct PUSH (op)
    (if (pure-label-imm? op)
	["	PEA	" (cadr op)]
	["	MOVE.L	" op ",-(" 'SP ")"]))

(definstruct POP (op)         ["	MOVE.L	(" 'SP ")+," op])

(definstruct POPR (accu op)   ["	MOVE.L	(" accu ")+," op])

(definstruct TOPST (op)       ["	MOVE.L	(" 'SP ")," op])

(definstruct TOPSTR (accu op) ["	MOVE.L  (" accu ")," op])

(definstruct XTOPST (op)
    ["	MOVE.L	(" 'SP ")," 'AUX0]
    ["	MOVE.L	" op ",(" 'SP ")"]
    ["	MOVE.L	" 'AUX0 , op])

(definstruct XTOPSTR (accu op)
    ["	MOVE.L	(" accu ")," 'AUX0]
    ["	MOVE.L	" op ",(" accu ")"]
    ["	MOVE.L	" 'AUX0 , op])

(definstruct ADJSTK (nop)
    (if (immvalue? nop)
	(if (and (le (cadr nop) 2) (ge (cadr nop) 0))
	    ["	ADDQ.L	#" (mul 4 (cadr nop)) , 'SP]
	    ["	ADD.L	#" (mul 4 (cadr nop)) , 'SP] )
        ["	MOVE.L	" nop , 'DUX0]
	["	LSL.L	#2," 'DUX0]
	["	ADD.L	" 'DUX0 , 'SP] ))

(definstruct ADJSTKR (accu op)
    (if (immvalue? op)
	(if (and (le (cadr op) 2) (ge (cadr op) 0))
	    ["	ADDQ.L	#" (mul 4 (cadr op)) , accu]
	    ["	ADD.L	#" (mul 4 (cadr op)) , accu] )
        ["	MOVE.L	" op , 'DUX0]
	["	LSL.L	#2," 'DUX0]
	["	ADD.L	" 'DUX0 , accu] ))

; .SSection "Le contro^le"

;         BRA    lab          branchement dans un module
;         JMP    lab          branchement dans un autre module
;         BRI    op           branchement au travers un registre
;         BRX    table,index  branchement indirect (table) indexe (index)
;         CALL   adr          appel d'un sous-programme
;         JCALL  adr          appel d'un sous-programme externe
;         RETURN              retour d'un sous-programme

(definstruct BRA (lab) 
    ["	BRA	" lab]
    (calign))

(definstruct JMP (lab) 
    ["	JMP	" lab]
    (calign))

(definstruct BRI (op)
    (if (register? op)
	["	JMP	(" op ")"]
	["	MOVE.L	" op , 'AUX0]
	["	JMP	(" 'AUX0 ")"])
    (calign))

(definstruct BRX (adr ind)
    ["	MOVE.L	"  adr , 'AUX0]
    (cond ((and (register? ind)
		(pgetvalue 'MC68020))
	   ["	MOVE.L	(" 'AUX0 , ind ".L*4)," 'AUX0])
	  (t
	   ["	MOVE.W	" ind , 'DUX0]
	   ["	LSL.W	#2," 'DUX0]
	   ["	MOVE.L	(" 'AUX0 , 'DUX0 ".W)," 'AUX0]))
    ["	JMP	(" 'AUX0 ")"]
    (calign))

(definstruct CALL (lab)
    ["	BSR	" lab])

(definstruct JCALL (lab)
    ["	JSR	" lab])

(defins RETURN 
    ["	RTS"]
    (calign))

; .SSection "Les operateurs de boucle"

;         SOBGEZ  reg,lab     reg<-reg-1; si reg >= 0 branch a lab
;         SOBGTZ  reg,lab     reg<-reg-1; si reg > 0 branch a lab

(definstruct SOBGEZ (op lab)
    (if (and (register? op)
	     (pgetvalue 'MC68020))
	(progn ["	SUBQ.W	#1," op]
	       ["	TST.W	" op])
        (progn ["	MOVE.L	" op , 'DUX0]
	       ["	SUBQ.W	#1," 'DUX0]
	       ["	MOVE.L	" 'DUX0 , op]
	       ["	TST.W	" 'DUX0]))
    ["	BGE	" lab] )

(definstruct SOBGTZ (op lab)
    (if (and (register? op)
	     (pgetvalue 'MC68020))
	(progn ["	SUBQ.W	#1," op]
	       ["	TST.W	" op])
        (progn ["	MOVE.L	" op , 'DUX0]
	       ["	SUBQ.W	#1," 'DUX0]
	       ["	MOVE.L	" 'DUX0 , op]
	       ["	TST.W	" 'DUX0]))
    ["	BGT	" lab] )

; .SSection "Les transferts"

;         MOV s,d      s->d
;         MOVNIL d  charge NIL dans la destination
;         MOVXSP source,index   source -> SP(index)
;         XSPMOV index,dest   SP(index)  ->  dest
;         MOVBM  size,adrs,strg
;                transfert une suite de <size> caracteres de <adrs>
;                dans la chaine strg. Rajoute toujours un NUL en fin!

(definstruct MOV (src dest)
    (cond ((label-imm? src)
	   (if (register? dest)
	       ["	LEA	" (cadr src) , dest]
	       ["	LEA	" (cadr src) , 'AUX0]
	       ["	MOVE.L	" 'AUX0 , dest]))
	  ((imm<128? src)
	   ["	MOVEQ	#" (cadr src) , 'DUX1]
	   ["	MOVE.L	" 'DUX1 , dest])
	  (t   ["	MOVE.L	" src , dest])))

(definstruct MOVNIL (dest)  ["	MOVE.L	" 'KNIL , dest])

(definstruct MOVXSP (src dest)
    (cond ((immvalue? dest)
	   (ifn (label-imm? src)
	       ["	MOVE.L	" src , (mul 4 (cadr dest)) "(" 'SP ")"]
	     ["	LEA	" (cadr src) , 'AUX0]
	     ["	MOVE.L	" 'AUX0 , (mul 4 (cadr dest)) "(" 'SP ")"]))
	  ((and (register? dest)
		(pgetvalue 'MC68020))
	   ["	MOVE.L	" src ",(" 'SP "," dest ".L*4)"])
	  (t
	   ["	MOVE.L	" dest , 'DUX0]
	   ["	LSL.L	#2," 'DUX0]
	   ["	MOVE.L	" src ",(" 'SP , 'DUX0 ".L)"] )))

(definstruct XSPMOV (src dest)
    (cond ((immvalue? src)
	   ["	MOVE.L	" (mul 4 (cadr src)) "(" 'SP ")," dest])
	  ((and (register? src)
		(pgetvalue 'MC68020))
	   ["	MOVE.L	(" 'SP , src ".L*4)," dest])
	  (t
	   ["	MOVE.L	" src , 'DUX0]
	   ["	LSL.L	#2," 'DUX0]
	   ["	MOVE.L	(" 'SP , 'DUX0 ".L)," dest] )))


(definstruct MOVBM (size src dest)
    (let ((start (:generate-label))
	  (loop  (:generate-label)))
         ["	MOVE.L	" size , 'DUX0]
	 ["	MOVE.L	" src , 'AUX1]
	 (load-heap-obj-adr-in-AUX0 dest)
	 ["	BRA.S	" start]
	 (calign)
     [loop]
         ["	MOVE.B	(" 'AUX1 ")+,(" 'AUX0 ")+"]
     [start]
         (DBRA loop)
	 ["	CLR.B	(" 'AUX0 ")"]))      ; NULL en fin de chai^ne !

; .SSection "Les instructions d'acce`s spe'ciales"

; les champs de taille WORD sont toujours positifs (sur 15 bits en fait)
; on peut donc faire des MOVE.W dans les registres adresse gra^ce a`
; l'extension de signe 

(de get-word-field (field arg1 arg2)
    (unless (register? arg1)
            ["	MOVE.L	" arg1 , 'AUX0]
            (setq arg1 'AUX0))
    (ifn (memory? arg2)
         ["	MOVE.W	" field "(" arg1 ")" , arg2]
         ["	MOVE.W	" field "(" arg1 ")" , "2+" arg2]))

(de set-word-field (field arg1 arg2)
    (unless (register? arg2)
            ["	MOVE.L	" arg2 , 'AUX0]
            (setq arg2 'AUX0))
    (ifn (memory? arg1)
         ["	MOVE.W	" arg1 , field "(" arg2 ")"]
         ["	MOVE.W	2+" arg1 , field "(" arg2 ")"]))

(definstruct GFTYPE (src dest) (get-word-field 'FTYPE src dest))
(definstruct SFTYPE (src dest) (set-word-field 'FTYPE src dest))

(definstruct GPTYPE (src dest) (get-word-field 'PTYPE src dest))
(definstruct SPTYPE (src dest) (set-word-field 'PTYPE src dest))


; .SSection "Instructions sur le  HEAP"

;         NXHB      SIZE,OP     SIZE+ 9? + OP  ->  OP

(definstruct NXHB (size heap)
    ; Le deuxie`me argument peut-il e^tre un registre?
    ["	MOVE.L	" size , 'DUX0]
    ["	MOVE.L	" heap , 'DUX1]
    ["	ADD.L	" 'DUX0 , 'DUX1]
    ["	ADD.L	#12," 'DUX1]           ; arrondit au double mot
    ["	AND.L	#$FFFFFFFC," 'DUX1]
    ["	MOVE.L	" 'DUX1 , heap])

;         NXHP      SIZE,OP     SIZE*4+ 8? + OP  ->  OP

(definstruct NXHP (size heap)
    ["	MOVE.L	" size , 'DUX0]
    ["	LSL.L	#2," 'DUX0]
    ["	ADDQ.L	#8," 'DUX0]
    ["	ADD.L	" 'DUX0 , heap])

(defins NXHF
    ["	NOP"])

(defins NXHS
    ["	NOP"])

;         HGSIZE    H,OP1  SIZE[H]  ->  OP1

(definstruct HGSIZE (src dest)
    (load-heap-adr-in-AUX0 src)
    ["	MOVE.L	4(" 'AUX0 ")," dest])

;         HSSIZE    OP1,H  OP1 -> SIZE[H]

(definstruct HSSIZE (src dest)
    (load-heap-adr-in-AUX0 dest)
    ["	MOVE.L	" src ",4(" 'AUX0 ")"])

;         HGOBJ     H,OP1   PTR[H]  ->  OP1

(definstruct HGOBJ (src dest)
    (load-heap-adr-in-AUX0 src)
    ["	MOVE.L	(" 'AUX0 ")," dest])

;         HSOBJ    OP1,H  OP1 -> PTR[H]

(definstruct HSOBJ (src dest)
    (load-heap-adr-in-AUX0 dest)
    ["	MOVE.L	" src ",(" 'AUX0 ")"])

;         HBLT  [STARTSOURCE(" \1 ") ENDSOURCE(" \2 ")[  ->  STARTDEST(" \3 ")

(definstruct HBLT (bheap1 eheap1 bheap2)
    (let ((loop (:generate-label)))
         ; MOVE.B -> MOVE.L !!
         ["	MOVE.L	" eheap1 , 'DUX0]
	 ["	MOVE.L	" bheap1 , 'AUX0]
	 ["	SUB.L	" 'AUX0 , 'DUX0]
	 ["	LSR.L	#2," 'DUX0]
	 ["	MOVE.L	" bheap2 , 'AUX1]
   [loop]
         ["	MOVE.L	(" 'AUX0 ")+,(" 'AUX1 ")+"]
	 (DBRA loop)))


(de move-byte-x (value displ basereg indexreg)
    ; transfert la valeur d'octet 
    (cond ((register? value)
           ["	MOVE.W	" value , 'DUX1]
           (if indexreg
               ["	MOVE.B	" 'DUX1 , displ "(" basereg , indexreg ".L)"]
               ["	MOVE.B	" 'DUX1 , displ "(" basereg ")"]))
          ((memory? value)
           (if indexreg
               ["	MOVE.B	3+" value , displ "(" basereg , indexreg ".L)"]
               ["	MOVE.B	3+" value , displ "(" basereg ")"]))
          (t ; immediat
           (if indexreg
               ["	MOVE.B	" value , displ "(" basereg , indexreg ".L)"]
               ["	MOVE.B	" value , displ "(" basereg ")"]))))

(definstruct HBMOVX (src vect n)
    ; HBMOVX VAL,STRING,INDEX   VAL -> STRING[INDEX]
    (load-heap-adr-in-AUX0 vect)
    (cond ((register? n)
	   (move-byte-x src 8 'AUX0 n))
	  ((memory? n)
	   ["	MOVE.L	" n , 'DUX0]
	   (move-byte-x src 8 'AUX0 'DUX0) )
	  ((immediat? n)
	   (move-byte-x src (immediat+8 n) 'AUX0 ()))) )


(de x-move-byte (displ basereg indexreg dest)
    (cond ((register? dest)
           ["	CLR.L	" 'DUX1]
           (if indexreg
               ["	MOVE.B	" displ "(" basereg , indexreg ".L)," 'DUX1]
               ["	MOVE.B	" displ "(" basereg ")" , 'DUX1])
           ["	MOVE.L	" 'DUX1 , dest])
          (t ; memory
           ["	CLR.L	" dest]
           (if indexreg
               ["	MOVE.B	" displ "(" basereg , indexreg ".L),3+" dest]
               ["	MOVE.B	" displ "(" basereg "),3+" dest]))))

(definstruct HBXMOV (vect n dest)
    ;  HBXMOV string,index,val
    (load-heap-adr-in-AUX0 vect)
    (cond ((register? n)
	   (x-move-byte 8 'AUX0 n dest))
	  ((memory? n)
	   ["	MOVE.L	" n , 'DUX0]
	   (x-move-byte 8 'AUX0 'DUX0 dest))
	  ((immediat? n)
	   (x-move-byte  (immediat+8 n) 'AUX0 () dest))))

(de move-indirect (arg1 arg2)
    (if (register? arg1)
        ["	MOVE.L	(" arg1 ")," arg2]
        ["	MOVE.L	" arg1 , arg2]
        ["	MOVE.L	(" arg2 ")," arg2]))

(de HBdebut (taille sequence1 index1 sequence2 index2)
    ["	MOVE.L	" taille , 'DUX0]
    (move-indirect sequence1 'AUX0)
    (if (immediat? index1)
	(if (eq (cadr index1) 0)
	    ["	ADDQ.L	#8," 'AUX0]	    
	    ["	ADD.L	" index1 "+8," 'AUX0])
        ["	ADDQ.L	#8," 'AUX0]
        ["	ADD.L	" index1 , 'AUX0])
    (move-indirect sequence2 'AUX1)
    (if (immediat? index2)
	(if (eq (cadr index2) 0)
	    ["	ADDQ.L	#8," 'AUX1]
	    ["	ADD.L	" index2 "+8," 'AUX1])
        ["	ADDQ.L	#8," 'AUX1]
        ["	ADD.L	" index2 , 'AUX1]))

; HBMOVM SIZE,STRINGSOURCE,INDEXSOURCE,STRINGDEST,INDEXDEST

(definstruct HBMOVM (lg strg1 i1 strg2 i2)
    (let ((loopr    (:generate-label))
	  (loopl    (:generate-label))
	  (goright  (:generate-label))
	  (goleft   (:generate-label))
	  (continue (:generate-label)))
         (HBdebut lg strg1 i1 strg2 i2)
	 ["	CMP.L	" 'AUX0 , 'AUX1]
	 ["	BLT.S	" goright]
	 ["	ADD.L	" 'DUX0 , 'AUX0]
	 ["	ADD.L	" 'DUX0 , 'AUX1]
	 ["	BRA.S	" goleft]
   [loopl]
	 ["	MOVE.B	-(" 'AUX0 "),-(" 'AUX1 ")"]
   [goleft]
         (DBRA loopl)
	 ["	BRA.S	" continue]
   [loopr]
	 ["	MOVE.B	(" 'AUX0 ")+,(" 'AUX1 ")+"]
   [goright]
         (DBRA loopr)
   [continue] ))

; HBTEQ   TAILLE,STRING1,INDEX1,STRING2,INDEX2,LABEL SI VRAI

(definstruct HBTEQ (lg str1 i1 str2 i2 lab) 
    (let ((start    (:generate-label))
	  (loop     (:generate-label))
	  (continue (:generate-label)))
        (HBdebut lg str1 i1 str2 i2)
        ["	CLR.L	" 'DUX1]	; pour forcer Z a` vrai.
        ["	BRA.S	" start]
    [loop]
	[ "	CMPM.B	(" 'AUX0 ")+,(" 'AUX1 ")+"]
    [start]
	(DBNE loop)
        ["	BNE.S	" continue]
        ["	BRA	" lab]
    [continue] ))

; HPMOVX VAL,VECTOR,INDEX   VAL -> VECTOR[INDEX]
; HPXMOV VECTOR,INDEX,VAL     VECTOR[INDEX] -> VAL

(de HPindex (source index)
    (load-heap-obj-adr-in-AUX0 source)
    ["	MOVE.L	" index , 'DUX0]
    ["	LSL.L	#2," 'DUX0])

(definstruct HPMOVX (src vect n)
    ; HPMOVX VAL,VECTOR,INDEX   VAL -> VECTOR[INDEX]
    (cond ((pgetvalue 'MC68020)
	   (load-heap-adr-in-AUX0 vect)
	   (if (register? n)
	       ["	MOVE.L	" src ",8(" 'AUX0 , n ".L*4)"]
	       ["	MOVE.L	" n , 'DUX0]
	       ["	MOVE.L	" src ",8(" 'AUX0 , 'DUX0 ".L*4)"]))
	  (t
	   (HPindex vect n)
	   ["	MOVE.L	" src ",(" 'AUX0 , 'DUX0 ".L)"])))

(definstruct HPXMOV (vect n dest)
    ; HPXMOV VECTOR,INDEX,VAL     VECTOR[INDEX] -> VAL
    (cond ((pgetvalue 'MC68020)
	   (load-heap-adr-in-AUX0 vect)
	   (if (register? n)
	       ["	MOVE.L	8(" 'AUX0 , n ".L*4)," dest]
	       ["	MOVE.L	" n , 'DUX0]
	       ["	MOVE.L	8(" 'AUX0 , 'DUX0 ".L*4)," dest]))
	  (t
	   (HPindex vect n)
	   ["	MOVE.L	(" 'AUX0 , 'DUX0 ".L)," dest])))

; HPMOVM SIZE,VECTORSOURCE,INDEXSOURCE,VECTORDEST,INDEXDEST

(definstruct HPMOVM (len vect1 i1 vect2 i2)
    (let ((loopr    (:generate-label))
	  (loopl    (:generate-label))
	  (goright  (:generate-label))
	  (goleft   (:generate-label))
	  (continue (:generate-label)))
         ["	MOVE.L	" vect1 , 'AUX0]
         ["	MOVE.L	" i1 , 'DUX0]	 
	 ["	MOVE.L	(" 'AUX0 ")," 'AUX0]
	 (if (pgetvalue 'MC68020)
	     ["	LEA	8(" 'AUX0 , 'DUX0 ".L*4)," 'AUX0]	     
	     ["	ADDQ.L	#8" , 'AUX0]
	     ["	LSL.L	#2," 'DUX0]
	     ["	ADD.L	" 'DUX0 , 'AUX0])

         ["	MOVE.L	" vect2 , 'AUX1]
         ["	MOVE.L	" i2 , 'DUX0]	 
	 ["	MOVE.L	(" 'AUX1 ")," 'AUX1]
	 (if (pgetvalue 'MC68020)
	     ["	LEA	8(" 'AUX1 , 'DUX0 ".L*4)," 'AUX1]	     
	     ["	ADDQ.L	#8" , 'AUX1]
	     ["	LSL.L	#2," 'DUX0]
	     ["	ADD.L	" 'DUX0 , 'AUX1])
         ["	MOVE.L	" len , 'DUX0]
	 ["	CMP.L	" 'AUX0 , 'AUX1]
	 ["	BLT.S	" goright]
	 ["	LSL.L	#2," 'DUX0]
	 ["	ADD.L	" 'DUX0 , 'AUX0]
	 ["	ADD.L	" 'DUX0 , 'AUX1]
	 ["	LSR.L	#2," 'DUX0]
	 ["	BRA.S	" goleft]
   [loopl]
	 ["	MOVE.L	-(" 'AUX0 "),-(" 'AUX1 ")"]
   [goleft]
         (DBRA loopl)
	 ["	BRA.S	" continue]
   [loopr]
	 ["	MOVE.L	(" 'AUX0 ")+,(" 'AUX1 ")+"]
   [goright]
         (DBRA loopr)
   [continue] ))

;;; (HOVNI (bheap cheap eheap last_obj_adr))
(definstruct HOVNI (arg1 arg2 arg3 arg4)
  (:MOV arg1 'AUX0)
  (:MOV arg2 'AUX1)
  (:MOV arg3 'DUX0)
  (:MOV arg4 'DUX1)
  (call-global 'll_ovni))

; .SSection "Comparaisons de pointeurs"

(de cxbxx (cond arg1 arg2 label)
    ; comparaison dans le bon sens et branchement
    (when (label-imm? arg2)
          ["	LEA	" (cadr arg2) , 'AUX0]
          (setq arg2 'AUX0))
    (if (register? arg1)
        ["	CMP.L	" arg2 , arg1]
	["	MOVE.L	" arg1 , 'DUX0]
        (unless (and (immediat? arg2)
		     (eq (cadr arg2) 0))
                ["	CMP.L	" arg2 , 'DUX0]))
    ["	" cond "	" label])

(definstruct CABEQ (op1 op2 lab) (cxbxx 'BEQ op1 op2 lab))

(definstruct CABNE (op1 op2 lab) (cxbxx 'BNE op1 op2 lab))

(definstruct CHBLT (op1 op2 lab) (cxbxx 'BLT op1 op2 lab))

; .SSection "comparaisons arithmetiques"

; CNBEQ et CNBNE comme CABEQ et CABNE

(definstruct CNBEQ (op1 op2 lab) (cxbxx 'BEQ op1 op2 lab))

(definstruct CNBNE (op1 op2 lab) (cxbxx 'BNE op1 op2 lab))

(de cnbxx (cond arg1 arg2 label)
    ["	MOVE.L	" arg1 , 'DUX0]
    (cond ((memory? arg2)
           ["	CMP.W	2+" arg2 , 'DUX0])
          (t
           ["	CMP.W	" arg2 , 'DUX0]))
    ["	" cond "	" label])

(definstruct CNBLT (op1 op2 lab) (cnbxx 'BLT op1 op2 lab))

(definstruct CNBLE (op1 op2 lab) (cnbxx 'BLE op1 op2 lab))

(definstruct CNBGT (op1 op2 lab) (cnbxx 'BGT op1 op2 lab))

(definstruct CNBGE (op1 op2 lab) (cnbxx 'BGE op1 op2 lab))

; .SSection "Les instuctions arithme'tiques"

;         INCR  op1[,lab]               op1+1 -> op2
;         DECR  op1[,lab]               op1-1 -> op2
;         PLUS  op1,op2[,lab]           op1 + op2 -> op2
;         DIFF  op1,op2[,lab]           op2 - op1 ->  op2
;         NEGATE   op1                  -op1  ->  op1
;         TIMES  op1,op2,[lab]          op1 * op2 -> op2
;         QUO  op1,op2                  op2 / op1 -> op2
;         REM  op1,op2                  op2 \ op1 -> op2


(de compute-simple-arith (op arg1 arg2)
    ; re'alise   arg1 ADD/SUB arg2 -> arg2        
    (cond ((short-immediat? arg1)
           ["	" op "Q.W	" arg1 , arg2])
          ((memory? arg1)
           ["	" op ".W	2+" arg1 , arg2])
          (t
           ["	" op ".W	" arg1 , arg2])))

(de simple-arith (op arg1 arg2 label)
    ; ne ge`re que les ADD/SUB
    (if (and (register? arg2)
             (null label)
	     (short-immediat? arg1)
             (pgetvalue 'MC68020))
        ; I - Cas simple sans passer par DUX0 et version rapide
        (compute-simple-arith op arg1 arg2)
        ; II - cas complexe, il faut passer par DUX0
        ; 1 - re'cupe`re le second ope'rande dans DUX0
        ["	MOVE.L	" arg2 , 'DUX0]
        ; 2 - re'alise le calcul dans DUX0
        (compute-simple-arith op arg1 'DUX0)
        ; 3 - range la valeur et teste l'ovfl si ne'cessaire.
        (ifn label
             ; pas de test d'overflow  
             ["	MOVE.L	" 'DUX0 , arg2]     ; range le re'sultat
             ; il faut tester l'overflow
	     (let ((continue (:generate-label)))
	          ["	BVC.S	" continue]
		  ["	MOVE.L	" 'DUX0 , arg2]
		  ["	BRA	" label]
              [continue]
		  ["	MOVE.L	" 'DUX0 , arg2]))))  ; range le re'sultat
  
(definstruct INCR (op lab)
    (simple-arith "ADD" '(|#| 1) op lab))

(definstruct DECR (op lab)
    (simple-arith "SUB" '(|#| 1) op lab))

(definstruct PLUS (op1 op2-dest lab)
    (simple-arith 'ADD op1 op2-dest lab))

(definstruct DIFF (op1 op2-dest lab)
    (simple-arith 'SUB op1 op2-dest lab))

(definstruct NEGATE (op-dest)
    ["	MOVE.L	" op-dest , 'DUX0]
    ["	NEG.W	" 'DUX0]
    ["	MOVE.L	" 'DUX0 , op-dest])

(definstruct TIMES (op1 op2-dest lab)
    ["	MOVE.L	" op1 , 'DUX0]
    ["	MOVE.L	" op2-dest , 'DUX1]
    ["	MULS	" 'DUX1 , 'DUX0]
    ["	MOVE.L	" 'DUX0 , 'DUX1]
    ["	AND.L	" 'FIXMASK , 'DUX0]
    ["	MOVE.L	" 'DUX0 , op2-dest]
    (when lab
	  ["	EXT.L	" 'DUX0]
	  ["	CMP.L	" 'DUX0 , 'DUX1]
	  ["	BNE	" lab]))

(definstruct QUO (op1 op2-dest lab)
    ["	MOVE.L	" op1 , 'DUX1]
    ["	MOVE.L	" op2-dest , 'DUX0]
    ["	EXT.L	" 'DUX0]
    ["	DIVS	" 'DUX1 , 'DUX0]
    ["	AND.L	" 'FIXMASK , 'DUX0]
    ["	MOVE.L	" 'DUX0 , op2-dest])
 
(definstruct REM (op1 op2-dest lab)
    ["	MOVE.L	" op1 , 'DUX1]
    ["	MOVE.L	" op2-dest , 'DUX0]
    ["	EXT.L	" 'DUX0]
    ["	DIVS	" 'DUX1 , 'DUX0]
    ["	SWAP	" 'DUX0]
    ["	AND.L	" 'FIXMASK  , 'DUX0]
    ["	MOVE.L	" 'DUX0 , op2-dest])

; .SSection "les instructions arithmetiques etendues"

;        EPLUS  OP1,OP2,OP3,OP4,OP5   
;        OP4 <- high de op1+op2+op3
;        OP5 prend le low

(definstruct EPLUS (op1 op2 op3 high low)
    ["	MOVE.L	" op1 , 'DUX1]
    ["	MOVE.L	" op2 , 'DUX0]
    ["	ADD.L	" 'DUX1 , 'DUX0]
    ["	MOVE.L	" op3 , 'DUX1]
    ["	ADD.L	" 'DUX1 , 'DUX0]
    ["	MOVE.L	" 'DUX0 , 'DUX1]
    ["	AND.L	" 'FIXMASK , 'DUX0]
    ["	MOVE.L	" 'DUX0 , low]
    ["	SWAP	" 'DUX1]
    ["	AND.L	" 'FIXMASK , 'DUX1]
    ["	MOVE.L	" 'DUX1 , high])

;         ETIMES  op1,op2,op3,op4,op5,op6
;         OP5 <-  poids forts de op1*op2+op3+op4
;         OP6 <-  poids faibles

(definstruct ETIMES (op1 op2 op3 op4 high low)
    ["	MOVE.L	" op1 , 'DUX0]
    ["	MOVE.L	" op2 , 'DUX1]
    ["	MULU	" 'DUX1 , 'DUX0]
    ["	ADD.L	" op3 , 'DUX0]
    ["	ADD.L	" op4 , 'DUX0]
    ["	MOVE.L	" 'DUX0 , 'DUX1]
    ["	AND.L	" 'FIXMASK , 'DUX0]
    ["	MOVE.L	" 'DUX0 , low]
    ["	SWAP	" 'DUX1]
    ["	AND.L	" 'FIXMASK , 'DUX1]
    ["	MOVE.L	" 'DUX1 , high])

;         EDIVIDE    op1,op2,op3,op4,op5
;         op1 -> integer  poids forts de diviseur
;         op2 -> B        poids faibles diviseur
;         op3 -> B        dividende
;         op4 <-  op1|op2 quo op3
;         op5 <-  op1|op2 rem op3

(definstruct EDIVIDE (op1 op2 op3 dquo drem)
    ["	MOVE.L	" op1 , 'DUX0]
    ["	SWAP	" 'DUX0]
    ["	MOVE.L	" op2 , 'DUX1]
    ["	OR.W	" 'DUX1 , 'DUX0]
    ["	MOVE.L	" op3 , 'DUX1]
    ["	DIVU	" 'DUX1 , 'DUX0]
    ["	MOVE.L	" 'DUX0 , 'DUX1]
    ["	AND.L	" 'FIXMASK , 'DUX0]
    ["	MOVE.L	" 'DUX0 , dquo]
    ["	SWAP	" 'DUX1]
    ["	AND.L	" 'FIXMASK , 'DUX1]
    ["	MOVE.L	" 'DUX1 , drem])

;         ECOMP OP1,OP2,LAB1,LAB2,LAB3

(definstruct ECOMP   (op1 op2 lab< lab= lab>)
    ["	MOVE.L	" op1 , 'DUX0]
    ["	AND.L	" 'FIXMASK , 'DUX0]
    ["	MOVE.L	" op2 , 'DUX1]
    ["	AND.L	" 'FIXMASK , 'DUX1]
    ["	CMP.L	" 'DUX1 , 'DUX0]
    ["	BLT	" lab<]
    ["	BGT	" lab>]
    ["	BRA	" lab=])

; .SSection "les instructions logiques"

;         LOR OP1,OP2    OP1 OR OP2  -> OP2

(de logic-op (operation op1 op2)
    ["	MOVE.L	" op1 , 'DUX0]
    ["	MOVE.L	" op2 , 'DUX1]
    ["	" operation "	" 'DUX1 , 'DUX0]
    ["	AND.L	" 'FIXMASK , 'DUX0]
    ["	MOVE.L	" 'DUX0 , op2])

(definstruct LOR (op1 op2-dest)  (logic-op 'OR.W op1 op2-dest))

(definstruct LAND (op1 op2-dest) (logic-op 'AND.W op1 op2-dest))

(definstruct LXOR (op1 op2-dest) (logic-op 'EOR.W op1 op2-dest))

(definstruct LSHIFT (dec src-dest)
    (let ((right    (:generate-label))
	  (continue (:generate-label)))
         ["	MOVE.L	" src-dest , 'DUX0]
	 ["	MOVE.L	" dec , 'DUX1]
	 ["	EXT.L	" 'DUX1]
	 ["	BLT.S	" right]
	 ["	LSL.L	" 'DUX1 , 'DUX0]
       	 ["	BRA.S	" continue]
     [right]
         [ "	NEG.L	" 'DUX1]
	 ["	LSR.L	" 'DUX1 , 'DUX0]
     [continue] 
         [ "	AND.L	" 'FIXMASK , 'DUX0]
	 ["	MOVE.L	" 'DUX0 , src-dest]))

; .SSection "Les macros sur les nombres flottants"

(defvalue BIT31FLOAT 0)  ; nume'ro du bit du poids faible de la mantisse
(defvalue ROT31FLOAT 1)  ; nb de bits de decalage des flottants

(defmacro 31bitfloatp ()
   '(pgetvalue '31BITFLOATS))

(defmacro mc68881p ()
   '(pgetvalue 'MC68881))

(de testfloat ()
    ; teste s'il est possible d'allouer un nombre
    ; flottant 64 bits sans de'clencher le GC (et c'est tout)
    (unless (31bitfloatp)
	    (let ((nogc (:generate-label)))
	         (xref-def 'xrefi 'FFLOAT)
		 ["	TST.L	FFLOAT"]
		 ["	BNE.S	" nogc]
		 (call-global 'gcfloat)
              [nogc] )))

(de macunpack32float (arg dest)
    ; pour passer d'un flottant Lisp 31bits a` un flottant 32 bits 68000.
    ; <DEST> EST NECESSAIREMENT un registre DUXx
    (unless (same-obj? arg dest)
	    ["	MOVE.L	" arg , dest])
    ["	ROL.L	#" 'ROT31FLOAT , dest]
    ["	BCLR.L	#" 'BIT31FLOAT , dest] )  ; pour les entiers flottants: 1.0

(de accu-c (number)
    ;  number=10 -> FLTACC10
    ;        =11 -> FLTACC11
    ;        =20 -> FLTACC20
    ;        =21 -> FLTACC21
    (selectq number
	     (10 (xref-def 'xrefi FLTACC10) FLTACC10)
	     (11 (xref-def 'xrefi FLTACC11) FLTACC11)
	     (20 (xref-def 'xrefi FLTACC20) FLTACC20)
	     (21 (xref-def 'xrefi FLTACC21) FLTACC21)))

(de store-68881-llfloat (src dest)
    ; Range un flottant dans <dest>. <dest> est un registre "AUXi" ou "DUXi".
    ; Le fpu 68881 etant present, le source <src> est un registre "FUXi".
    (cond ((31bitfloatp)
	   ["	FMOVE.S	" src , 'DUX0]
	   ["	BSET.L	#" 'BIT31FLOAT , 'DUX0]
	   ["	ROR.L	#" 'ROT31FLOAT , 'DUX0]
	   (unless (same-obj? 'DUX0 dest)
		   ["	MOVE.L	" 'DUX0 , dest]))
	  (t
	   ["	MOVE.L	FFLOAT" , 'AUX0]
	   ["	MOVE.L	(" 'AUX0 ")" , "FFLOAT"]
	   ["	FMOVE.D	" src , "(" 'AUX0 ")"]
	   (unless (same-obj? 'AUX0 dest)
		   ["	MOVE.L	" 'AUX0 , dest]))))
	   
(de float-68881-unaire (instr op res)
    ; Genere l'instruction specialisee <instr> du 68881 avec l'operande <op>
    ; Le resultat est stocke dans <res> qui du type "FUXi".
    (cond ((31bitfloatp)
	   (macunpack32float op 'DUX0); retour au format 32bits
	   ["	" instr ".S	" 'DUX0 , res])
	  ((register? op)
	   ["	" instr ".D	(" op ")" , res])
	  (t
	   ["	MOVE.L	" op , 'AUX0]
	   ["	" instr ".D	(" 'AUX0 ")" , res])))

(de float-68881-binaire (instr op1 op2 res)
    ; Genere l'instruction binaire specialisee <instr> du 68881
    ;   avec les operandes <op1> <op2>.
    ; Le resultat est stocke dans <res>.
    (cond ((31bitfloatp)
	   ; Preparation du 2eme argument:
	   (macunpack32float op2 'DUX0); retour au format 32bits
	   ["	FMOVE.S	" 'DUX0 , res]
	   ; Preparation du 1er argument:
	   (macunpack32float op1 'DUX0); retour au format 32bits
	   ["	" instr ".S	" 'DUX0 , res])
	  (t
	   (cond ((register? op2)
		  ["	FMOVE.D	(" op2 ")" , res])
		 (t
		  ["	MOVE.L	" op2 , 'AUX0]
		  ["	FMOVE.D	(" 'AUX0 ")" , res]))
	   (cond ((register? op1)
		  ["	" instr ".D	(" op1 ")" , res])
		 (t
		  ["	MOVE.L	" op1 , 'AUX0]
		  ["	" instr ".D	(" 'AUX0 ")" , res])))))

(de float-c-unaire (label op)
    ; Genere l'appel a l'etiquette <label> du code C (cf: llfloat.c).
    ; L'argument des procedures C est toujours dans:
    ;   FLTACC1/FLTACC2
    ; En general l'etiquette C est de la forme: LL_[S\D]label
    ;   S => flottant sur 31 bits / D => flottant sur 64 bits
    (cond ((31bitfloatp)
	   (macunpack32float op 'DUX0);retour au format 32bits
	   ["	FMOVE.S	" 'DUX0 , 'FUX0]
	   ["	FMOVE.D " 'FUX0 ",-(" 'SP ")"]
	   ["	MOVE.L	(" 'SP ")+," (accu-c 10)]
	   ["	MOVE.L	(" 'SP ")+," (accu-c 11)])
	  ((register? op)
	   ["	MOVE.L	(" op ")" , (accu-c 10)]; dans les 2 accus C
	   ["	MOVE.L	4(" op ")" , (accu-c 11)]) ;  habituels
	  (t
	   ["	MOVE.L	" op , 'AUX0]
	   ["	MOVE.L	(" 'AUX0 ")" , (accu-c 10)]; dans les 2 accus C
	   ["	MOVE.L	4(" 'AUX0 ")" , (accu-c 11)])) ;  habituels
    (call-global label))

(de float-c-binaire (label op1 op2)
    ; Genere l'appel a l'etiquette <label> de C (cf: llfloat.c).
    ; Les arguments doivent tjrs etre pre'pare's dans:
    ;   FLTACC1[0/1]/FLTACC2[0/1]
    ; Le re'sultat se retrouve toujours dans:
    ;   AUX0 si flottants 31 bits,
    ;   CUX0/CUX1 si flottants 64 bits
    (cond ((31bitfloatp)
	   (macunpack32float op1 'DUX0);retour au format 32bits
	   ["	FMOVE.S	" 'DUX0 , 'FUX0]
	   ["	FMOVE.D " 'FUX0 ",-(" 'SP ")"]
	   ["	MOVE.L	(" 'SP ")+," (accu-c 10)]
	   ["	MOVE.L	(" 'SP ")+," (accu-c 11)]
	   (macunpack32float op2 'DUX0);retour au format 32bits
	   ["	FMOVE.S	" 'DUX0 , 'FUX0]
	   ["	FMOVE.D " 'FUX0 ",-(" 'SP ")"]
	   ["	MOVE.L	(" 'SP ")+," (accu-c 20)]
	   ["	MOVE.L	(" 'SP ")+," (accu-c 21)])
	  (t
	   (cond ((register? op1)
		  ["	MOVE.L	(" op1 ")" , (accu-c 10)]  ; dans les 2 accus C
		  ["	MOVE.L	4(" op1 ")" , (accu-c 11)]) ;  habituels
		 (t
		  ["	MOVE.L	" op1 , 'AUX0]
		  ["	MOVE.L	(" 'AUX0 ")", (accu-c 10)]; dans les 2 accus C
		  ["	MOVE.L	4(" 'AUX0 ")" , (accu-c 11)])) ;  habituels
	   (cond ((register? op2)
		  ["	MOVE.L	(" op2 ")" , (accu-c 20)]; dans les 2 autres
		  ["	MOVE.L	4(" op2 ")" , (accu-c 21)]) ;  accus C
		 (t
		  ["	MOVE.L	" op2 , 'AUX0]
		  ["	MOVE.L	(" 'AUX0 ")" , (accu-c 20)]; dans les 2 autres
		  ["	MOVE.L	4(" 'AUX0 ")" , (accu-c 21)])))) ;  accus C
    (call-global label))
    
(de store-c-llfloat (dest)
    ; Au retour de C, le resultat est tjrs dans:
    ;   AUX0   si flottants 31 bits
    ;   CUX0 & CUX1   si flottants 64 bits.
    ; Ce resultat est range dans <dest>.
    (cond ((31bitfloatp)
	   ["	MOVE.L	" 'AUX0 , 'DUX0]
	   ["	BSET.L	#" 'BIT31FLOAT , 'DUX0]
	   ["	ROR.L	#" 'ROT31FLOAT , 'DUX0]
	   (unless (same-obj? 'DUX0 dest)
		   ["	MOVE.L	" 'DUX0 , dest]))
	  (t
	   ["	MOVE.L	FFLOAT" , 'AUX0]
	   ["	MOVE.L	(" 'AUX0 ")" , "FFLOAT"]
	   ["	MOVE.L	" 'CUX0 , "(" 'AUX0 ")"]
	   ["	MOVE.L	" 'CUX1 , "4(" 'AUX0 ")"]
	   (unless (same-obj? 'AUX0 dest)
		   ["	MOVE.L	" 'AUX0 , dest]))))

(de floatxx1 (label instr op result)
    ; Appel a` la routine C <label>
    ; ou bien l'instruction specialise'e <instr>
    ; L'operation est effectuee sur l'oerande <op> et le
    ;   resultat stocke dans <result>
    (testfloat)
    (cond ((and instr (mc68881p))
	   ; Il y a une instruction specialise'e du 68881:
	   (let ((inter-registre 'FUX0)); registre intermediaire
	     ; On realise le calcul
	     (float-68881-unaire instr op inter-registre)
	     ; On stocke le resultat
	     (store-68881-llfloat inter-registre result)))
          (t
	   ; Sinon on fait un appel a` C
	   (float-c-unaire label op)
	   (store-c-llfloat result))))

(de floatxx2 (label instr op1 op2 result)
    ; Appel a` la routine C <label>
    ; ou bien l'instruction specialise'e <instr>
    (testfloat)
    (cond ((and instr (mc68881p))
           ; Il y a une instruction specialise'e:
	   (let ((inter-registre 'FUX0)); registre intermediaire
	        ; On realise le calcul
	        (float-68881-binaire instr op1 op2 inter-registre)
		; On stocke le resultat
		(store-68881-llfloat inter-registre result)))
          (t
	   ; Sinon on fait un appel a` C
	   (float-c-binaire label op1 op2)
           (cond ((31bitfloatp) ; transformation du resultat double C en float
		  ["	MOVE.L	" 'DUX1 , "-(" 'SP ")"]
		  ["	MOVE.L	" 'DUX0 , "-(" 'SP ")"]
		  ["	FMOVE.D	(" 'SP ")+" , 'FUX0]
		  ["	FMOVE.S	" 'FUX0 , 'DUX0]
		  ["	MOVE.L	" 'DUX0 , 'AUX0]))
	   (store-c-llfloat result))))

(definstruct FPLUS (op1 op2)
  (floatxx2 (if (31bitfloatp) "LL_SPLUS" "LL_DPLUS") ; Label procedure C
	    "FADD"         ; Instruction specialisee 68881
	    op1 op2 op2)) ; operandes & destination

(definstruct FDIFF (op1 op2)
  (floatxx2 (if (31bitfloatp) "LL_SDIFF" "LL_DDIFF") ; Label procedure C
	    "FSUB"         ; Instruction specialisee 68881
	    op1 op2 op2)) ; operandes & destination

(definstruct FQUO (op1 op2)
  (floatxx2 (if (31bitfloatp) "LL_SQUO" "LL_DQUO") ; Label procedure C
	    "FDIV"         ; Instruction specialisee 68881
	    op1 op2 op2)) ; operandes & destination

(definstruct FTIMES (op1 op2)
  (floatxx2 (if (31bitfloatp) "LL_STIMES" "LL_DTIMES") ; Label procedure C
	    "FMUL"         ; Instruction specialisee 68881
	    op1 op2 op2)) ; operandes & destination

(definstruct SIN (op dest)
  (floatxx1 (if (31bitfloatp) "LL_SSIN" "LL_DSIN") ;Label procedure C
	    "FSIN"      ; Instruction specialisee 68881
	    op dest))   ; operande & destination

(definstruct COS (op dest)
  (floatxx1 (if (31bitfloatp) "LL_SCOS" "LL_DCOS") ;Label procedure C
	    "FCOS"      ; Instruction specialisee 68881
	    op dest))   ; operande & destination

(definstruct ASIN (op dest)
  (floatxx1 (if (31bitfloatp) "LL_SASIN" "LL_DASIN") ;Label procedure C
	    "FASIN"     ; Instruction specialisee 68881
	    op dest))   ; operande & destination

(definstruct ACOS (op dest)
  (floatxx1 (if (31bitfloatp) "LL_SACOS" "LL_DACOS") ;Label procedure C
	    "FACOS"     ; Instruction specialisee 68881
	    op dest))   ; operande & destination

(definstruct ATAN (op dest)
  (floatxx1 (if (31bitfloatp) "LL_SATAN" "LL_DATAN") ;Label procedure C
	    "FATAN"     ; Instruction specialisee 68881
	    op dest))   ; operande & destination

(definstruct EXP (op dest)
  (floatxx1 (if (31bitfloatp) "LL_SEXP" "LL_DEXP") ;Label procedure C
	    "FETOX"     ; Instruction specialisee 68881
	    op dest))   ; operande & destination

(definstruct LOG (op dest)
  (floatxx1 (if (31bitfloatp) "LL_SLOG" "LL_DLOG") ;Label procedure C
	    "FLOGN"     ; Instruction specialisee 68881
	    op dest))   ; operande & destination

(definstruct LOG10 (op dest)
  (floatxx1 (if (31bitfloatp) "LL_SLOG10" "LL_DLOG10");Label procedure C
	    "FLOG10"    ; Instruction specialisee 68881
	    op dest))   ; operande & destination

(definstruct SQRT (op dest)
  (floatxx1 (if (31bitfloatp) "LL_SSQRT" "LL_DSQRT") ;Label procedure C
	    "FSQRT"     ; Instruction specialisee 68881
	    op dest))   ; operande & destination

(definstruct POWER (mant exp dest) ;Pas d'instruction specialisee!
  ; on fait en C:
  ;   (floatxx2 (if (31bitfloatp) "LL_SPOWER" "LL_DPOWER")
	(floatxx2 "LL_DPOWER"
	       ()
	       mant exp dest))

(definstruct FLOAT (nb>flt) ; NB>flt -> nb>FLT
   (testfloat)
   (cond ((mc68881p) ; On exploite le 68881
          ["	MOVE.L	" nb>flt , 'DUX0]
          ["	EXT.L	" 'DUX0]
          ["	FMOVE.L	" 'DUX0 , 'FUX0]
	  (store-68881-llfloat 'FUX0 nb>flt))
        (t           ; Sinon on appelle C (cf. common/llfloat.c)
          ["	MOVE.L	" nb>flt , 'DUX0]
          ["	EXT.L	" 'DUX0]
          ["	MOVE.L	" 'DUX0 , 'AUX0]
	  (call-global (if (31bitfloatp) 'LL_SFLOAT 'LL_DFLOAT))
	  (store-c-llfloat nb>flt))))

(definstruct FIX  (flt>fix) ; FLT>fix -> flt>FIX
   (cond ((mc68881p)
	  (float-68881-unaire "FINTRZ" flt>fix 'FUX0)
          ["	FMOVE.L	" 'FUX0 , 'DUX0]
          ["	AND.L	" 'FIXMASK , 'DUX0]
          ["	MOVE.L	" 'DUX0 , flt>fix])
        (t
	  ; On appelle la procedure LL_SFIX ou LL_DFIX selon 31bits ou 64bits
	  ;   et le resultat revient dans CUX0 (cf. common/llfloat.c)
          (float-c-unaire (if (31bitfloatp) "LL_SFIX" "LL_DFIX") flt>fix)
          ["	AND.L	" 'FIXMASK , 'CUX0]
          ["	MOVE.L	" 'CUX0 , flt>fix] )))

(definstruct CVFTOA (flt str lgstr)
        (load-heap-obj-adr-in-AUX0 str)
	(float-c-unaire "LL_CVDTOA" flt)        ;re'sultat dans CUX0
        ["	MOVE.L	" 'CUX0 , lgstr])

(definstruct CVATOF (str lgstr lab dest)
    (testfloat)
    (load-heap-obj-adr-in-AUX0 str)
    ["	MOVE.L	" 'AUX0 , 'DUX0]
    ["	ADD.L	" lgstr , 'AUX0]
    ["	MOVE.B	#0,(" 'AUX0 ")"]
    ["	MOVE.L	" 'DUX0 , 'AUX0]
    (call-global 'LL_CVATOD)                    ; re'sultat de C dans CUX0/CUX1 
    (cond ((31bitfloatp)
	   ["   MOVE.L  " 'CUX1, "-(" 'SP ")"]
	   ["   MOVE.L  " 'CUX0 , "-(" 'SP ")"]
	   ["   FMOVE.D (" 'SP ")+" , 'FUX0]
	   ["	FMOVE.S	" 'FUX0 , 'DUX0]
	   ["	BSET.L	#" 'BIT31FLOAT , 'DUX0]
	   ["	ROR.L	#" 'ROT31FLOAT , 'DUX0]
	   (unless (same-obj? 'DUX0 dest)       ;et stockage dans <dest>
		   ["	MOVE.L	" 'DUX0 , dest]))
	  (t
	   (store-c-llfloat dest))))            ;et stockage dans <dest>


(de cfbxxx (labelC instr op1 op2 lab)
    ; Appel a` la routine C <labelC>
    ; ou bien a` l'instruction spe'cialise'e <instr> si elle existe.
    (cond ((and instr (mc68881p))
	   ; Il y a une instruction specialise'e:
	   ; On realise la comparaison
	   (float-68881-binaire "FCMP" op2 op1 'FUX0)
	   ; On realise le saut
	   ["	" instr "	" lab])
	  (t ; Sinon on fait appel a C:
	   (float-c-binaire labelC op1 op2)
	   ["	CMP.L	#1" , 'DUX0]
	   ["	BEQ	" lab])))

(definstruct CFBEQ (op1 op2 lab)
  (cfbxxx (if (31bitfloatp) "LL_CSBEQ" "LL_CDBEQ") ;label procedure C
	  "FBEQ"        ; Instruction specialisee 68881
	  op1 op2 lab)) ; operandes

(definstruct CFBNE (op1 op2 lab)
  (cfbxxx (if (31bitfloatp) "LL_CSBNE" "LL_CDBNE") ;label procedure C
	  "FBNE"        ; Instruction specialisee 68881
	  op1 op2 lab)) ; operandes

(definstruct CFBGT (op1 op2 lab)
  (cfbxxx (if (31bitfloatp) "LL_CSBGT" "LL_CDBGT") ;label procedure C
	  "FBGT"        ; Instruction specialisee 68881
	  op1 op2 lab)) ; operandes

(definstruct CFBGE (op1 op2 lab)
  (cfbxxx (if (31bitfloatp) "LL_CSBGE" "LL_CDBGE") ;label procedure C
	  "FBGE"        ; Instruction specialisee 68881
	  op1 op2 lab)) ; operandes

(definstruct CFBLT (op1 op2 lab)
  (cfbxxx (if (31bitfloatp) "LL_CSBLT" "LL_CDBLT") ;label procedure C
	  "FBLT"        ; Instruction specialisee 68881
	  op1 op2 lab)) ; operandes

(definstruct CFBLE (op1 op2 lab)
  (cfbxxx (if (31bitfloatp) "LL_CSBLE" "LL_CDBLE") ;label procedure C
	  "FBLE"        ; Instruction specialisee 68881
	  op1 op2 lab)) ; operandes

; .SSection "CONStructions des cellules de liste"

;         SFCONS op           op -> FREE
;         GFCONS arg          FREE -> arg
;         NCONS car           car <- (car)
;         XCONS cdr,car       car <- (car . cdr)
;         CONS car,cdr        cdr <- (car .cdr)
;         GCFLIP              echange les zones

(definstruct SFCONS (src)
    ["	MOVE.L	" src , 'FCONS])

(definstruct GFCONS (dest)
    ["	MOVE.L	" 'FCONS , dest])

(de testcons ()
    ; teste s'il reste un CONS dans la liste libre.
    ; S'il en reste la te^te de la liste libre est
    ; pre'charge'e dans AUX0, s'il n'y en a pas
    ; un Glannage de Cellule est re'alise' et AUX0
    ; est charge' de la me^me manie`re.
    (let ((again (:generate-label))
	  (continue (:generate-label)))
      [again]
         ["	MOVE.L	" 'FCONS , 'AUX0]
	 ["	CMP.L	" 'AUX0 , 'KNIL]
	 ["	BNE.S	" continue]
	 ["	JSR	GCCONS"]
	 ["	BRA.S	" again]
      [continue]))

(definstruct NCONS (car-ret) ; (CAR-ret . NIL) -> car-RET
    (testcons)
    ["	MOVE.L	" car-ret , '(CAR AUX0)]
    ["	MOVE.L	" 'AUX0 , car-ret]
    ["	MOVE.L	" '(CDR AUX0) , 'FCONS]
    ["	MOVE.L	" 'KNIL , 'CDR "(" car-ret ")"])

(definstruct XCONS (cdr car-ret) ; (CAR-ret . CDR ) -> car-RET
    (testcons)
    ["	MOVE.L	" car-ret , '(CAR AUX0)]
    ["	MOVE.L	" 'AUX0 , car-ret]
    ["	MOVE.L	" '(CDR AUX0) , 'FCONS]
    ["	MOVE.L	" cdr , 'CDR "(" car-ret ")"])

(definstruct CONS (car cdr-ret) ; (CAR . CDR-ret) -> cdr-RET
    (testcons)
    ["	MOVE.L	" car , '(CAR AUX0)]
    ["	MOVE.L	" '(CDR AUX0) , 'FCONS ""]
    ["	MOVE.L	" cdr-ret , '(CDR AUX0)]
    ["	MOVE.L	" 'AUX0 , cdr-ret])

; .SSection "Gestion des caracte`res"

(definstruct UPPERC (char)
    ["	SUB.L	#32," char])

(definstruct LOWERC (char)
    ["	ADD.L	#32," char])

; .SSection "Gestion des symboles"

;         FENTRY nom,type     declaration d'un point d'entree
;         reserve un mot de type .XXX qui contiendra l'adresse
;         du symbole XXX, prepare l'adresse de la fonction XXX
;         de type XDEF et prepare le ftype ._XXX

(definstruct FENTRY (lab subr)
    (impure)
    ["." lab "	DC.L	0"]
    ["._" lab "	EQU	" subr]
    (pure)
    (calign)
    [lab] )

;         MAKFNT NOM,PLEN,PNAME

(definstruct MAKFNT (lab plen pname)
    (impure)
    ["P" @ pname]
    (pure)
    ["B" @ "	MOVEQ	" plen , 'DUX0]  ; A1 LE PLEN
    ["	MOVE.L	" 'DUX0 , 'A1]
    ["	LEA	P" @ ",A2"]           	 ; A2 LE PNAM
    ["	LEA	" lab ",A3"]             ; A3 LA FVAL
    ["	LEA	." lab ",A4"]            ; A4 LA .FVAL
    ["	MOVEQ	#._" lab , 'DUX0]
    ["	MOVE.L	" 'DUX0 ",-(" 'SP ")"]	 ; LE TYPE EMPILE
    ["	JSR	INISYMB"])

;         MAKCST    NOM,PLEN,PNAME

(definstruct MAKCST (lab plen pname)
    (impure)
    ["." lab "	DC.L	0"]             ; ADRESSE DU NOM
    ["P" @ pname]
    (pure)
    ["	MOVEQ	" plen , 'DUX0]
    ["	MOVE.L	" 'DUX0 , 'A1]			; A1 le plen
    ["	LEA	P" @ , 'A2]
    ["	LEA	." lab , 'A3]
    ["	JSR	INICST"])


; .SSection "Les Macros LLM3 pour le G.C."

(definstruct GCSTART ()
    ())

(definstruct GCSTOP ()
    ())

(de mactabgc (adr)
    ; retourne l'adresse et la position du bit du marqueur 
    ; de l'objet <adr> dans la table des bits du GC.
    ; au retour DUX0 = nume'ro du bit (0-31)
    ;           AUX0 = adresse du mot de 32 bits de la table
    ;           DUX1 = le contenu du mot de 32 bits de la table.
    (xref-def 'xrefi '_BTBGC)
    (xref-def 'xrefi 'BNUMB)
    ["	MOVE.L	_BTBGC," 'AUX0]        ; AUX0 <- le de'but de la table.
    ["	MOVE.L	" adr , 'DUX0]         ; DUX0 <- l'objet
    ["	SUB.L	" 'BNUMB , 'DUX0]      ; DUX0 <- l'adresse relative.
    ["	LSR.L	#3," 'DUX0]            ; tous les objs sont multiples de 8
    ["	MOVE.L	" 'DUX0 , 'DUX1]       ; DUX0 <- numero du bit (mod 32)
    ["	LSR.L	#5," 'DUX1]            ; DUX1 <- l'index dans la table
    ["	LSL.L	#2," 'DUX1]            ; DUX1 <- index de mot
    ["	ADD.L	" 'DUX1 , 'AUX0]       ; AUX0 <- l'adresse du mot.
    ["	MOVE.L	(" 'AUX0 ")," 'DUX1])  ; DUX1 <- le mot.

(definstruct BTMARK (accu lab)
    (mactabgc accu)
    ["	BTST	" 'DUX0 , 'DUX1]
    ["	BNE	" lab])

(definstruct BFMARK (accu lab)
    (mactabgc accu)
    ["	BTST	" 'DUX0 , 'DUX1]
    ["	BEQ	" lab])

(definstruct STMARK (accu)
    (mactabgc accu)
    ["	BSET	" 'DUX0 , 'DUX1]
    ["	MOVE.L	" 'DUX1 ",(" 'AUX0 ")"])

(definstruct TCMARK (accu lab)
    (let ((continue (:generate-label)))
         (mactabgc accu)
	 ["	BCLR	" 'DUX0 , 'DUX1]
	 ["	BEQ.S	" continue]
	 ["	MOVE.L	" 'DUX1 ",(" 'AUX0 ")"]
	 ["	BRA	" lab]
     [continue]))

; .SSection "Les bits invisibles des CONS"

; Les bits invisibles sont ge're's dans une table de 32 bits pour e^tre 
; compatible avec la macro SWPCONS.

(de invsblbit (cel)
    ; retourne l'adresse et la position du bit invisible
    ; d'un cons <cel> dans la table des bits invisibles.
    ; au retour DUX0 = nume'ro du bit (0-31)
    ;           AUX0 = adresse du mot de 32 bits de la table
    ;           DUX1 = le contenu du mot de32 bits de la table.
    (xref-def 'xrefi 'BTBIN)
    (xref-def 'xrefi 'BNUMB)
    ["	MOVE.L	BTBIN," 'AUX0]         ; AUX0 <- le de'but de la table.
    ["	MOVE.L	" cel , 'DUX0]         ; DUX0 <- l'objet
    ["	SUB.L	" 'RBCONS , 'DUX0]     ; DUX0 <- l'adresse relative.
    ["	LSR.L	#3," 'DUX0]            ; tous les objs sont multiples de 8
    ["	MOVE.L	" 'DUX0 , 'DUX1]       ; DUX0 <- numero du bit (mod 32)
    ["	LSR.L	#5," 'DUX1]            ; DUX1 <- l'index dans la table
    ["	LSL.L	#2," 'DUX1]            ; DUX1 <- index de mot
    ["	ADD.L	" 'DUX1 , 'AUX0]       ; AUX0 <- l'adresse du mot.
    ["	MOVE.L	(" 'AUX0 ")," 'DUX1])  ; DUX1 <- le mot.


(definstruct STINVSBL (accu)
    (invsblbit accu)
    ["	BSET	" 'DUX0 , 'DUX1]
    ["	MOVE.L	" 'DUX1 ",(" 'AUX0 ")"])

(definstruct CLINVSBL (accu)
    (invsblbit accu)
    ["	BCLR	" 'DUX0 , 'DUX1]
    ["	MOVE.L	" 'DUX1 ",(" 'AUX0 ")"])

(definstruct BTINVSBL (accu lab)
    (invsblbit accu)
    ["	BTST	" 'DUX0 , 'DUX1]
    ["	BNE	" lab])

(definstruct BFINVSBL (accu lab)
    (invsblbit accu)
    ["	BTST	" 'DUX0 , 'DUX1]
    ["	BEQ	" lab])

; .SSection "Pour avancer dans les zones et compter"

(definstruct CONVTOK (adr1 adr2 dest1 dest2)
    ["	MOVE.L	" adr2 , 'AUX0]
    ["	SUB.L	" adr1 , 'AUX0]
    ["	MOVE.L	" 'AUX0 , 'DUX1] ; tempo
    ["	AND.L	#$3FF," 'DUX1]   ; les unites <= 1024
    ["	MOVE.L	" 'AUX0 , 'DUX0]
    ["	LSR.L	#8" , 'DUX0]
    ["	LSR.L	#2" , 'DUX0]
    ["	MOVE.L	" 'DUX1 , dest2]
    ["	MOVE.L	" 'DUX0 , dest1])

(de nxxx (incr borne ptr label)
    ["	ADD.L	#" incr , ptr]
    (if (register? borne)
        ["	CMP.L	" ptr , borne]
        ["	MOVE.L	" borne , 'DUX0]
        ["	CMP.L	" ptr , 'DUX0])
    ["	BGT	" label])

(defins NXNUMB) ; (nxxx 4  'RBFLOAT)

(definstruct NXFLOAT (op lab)
    (unless (pgetvalue '31BITFLOATS)
	    (nxxx 8 'RBVECT op lab)))

(definstruct NXVECT (op lab)
    (nxxx 8  'RBSTRG op lab))

(definstruct NXSTRG (op lab)
    (nxxx 8  'RBSYMB op lab))

(definstruct NXSYMB (op lab)
    (nxxx 'FINSYMB 'RBCONS op lab))

(definstruct NXCONS (op lab)
    (xref-def 'xrefi 'ECONS)
    (nxxx 8 'ECONS op lab))

; .SSection "Les Macros LLM3 pour les entre'es/sorties"

;         GESTION DU CANAL TERMINAL
;         -------------------------
;         TTYIN   OP1   " CARACTERE -> OP1

(definstruct TTYIN (dest)
    (let ((again (:generate-label)))
      [again]
	 (call-global 'll_ttyi)
	 ["	CMP.W	#$FF" , 'DUX0] ; return ((unsigned char) -1) from ttyin
	 ["	BEQ.S	" again]
	 ["	MOVE.L	" 'DUX0 , dest]))

;         TTYIS   OP1,CC     CC=0 SI OP1 EST CHARGE  SINON CC<>0

(definstruct TTYIS (dest cc)
    (call-global 'll_ttys)
    (xref-def 'xrefi 'CHARTTYS)
    ["	CLR.L	" 'DUX1]
    ["	MOVE.B	CHARTTYS," 'DUX1]
    ["	MOVE.L	" 'DUX1 , dest]
    ["	MOVE.L	" 'DUX0 , cc])

; 	  TTYINSTR strg,count
;         lit une ligne sans echo ni fin de ligne dans strg
; 	  doit fournir max  = nb max. de car. lus (taille de strg)
; 	  count = nb de car. lus

(definstruct TTYINSTR (strg count)
    (load-heap-adr-in-AUX0 strg)
    ["	MOVE.L	4(" 'AUX0 ")" , 'DUX0]
    (load-heap-obj-adr-in-AUX0 strg)
    (call-global 'll_ttyinstr)
    ["	MOVE.L	" 'DUX0 , count])


;         TTYSTRG SIZE,STRG :  sort la chaine lisp

(definstruct TTYSTRG (size strg)
    ["	MOVE.L	" size , 'DUX0]
    (load-heap-obj-adr-in-AUX0 strg)
    (call-global 'll_ttyo) )

;         TTYMSG       LEN,ADR   sort le message
;                      qui est un operande immediat "...."

(definstruct TTYMSG (size adr)
    (let ((msg  (:generate-label))
	  (skip (:generate-label)))
         ["	BRA.S	" skip]
     [msg]
         [adr]
     [skip]     
         ["	MOVE.L	" size , 'DUX0]
	 ["	LEA	" msg , 'AUX0]
	 (call-global 'll_ttyo) ))

;         TTYCRLF             retour chariot sur un TTY

(definstruct TTYCRLF ()
    (call-global 'll_ttycrlf))

; .SSection "gestion des fichiers"

(de openxxx (label chan strg cc)
    ["	MOVE.L	" chan , 'DUX0]
    (load-heap-obj-adr-in-AUX0 strg)
    (call-global label)
    ["	MOVE.L	" 'DUX0 , cc])

(definstruct INFILE  (chan strg cc)
    (openxxx 'LL_OPI chan strg cc))

(definstruct OUFILE (chan strg cc)
    (openxxx 'LL_OPO chan strg cc))

(definstruct APFILE (chan strg cc)
    (openxxx 'LL_OPA chan strg cc))

(definstruct INFILEB (chan strg cc)
    (openxxx 'LL_OPI chan strg cc))

(definstruct OUFILEB (chan strg cc)
    (openxxx 'LL_OPO chan strg cc))

(definstruct APFILEB (chan strg cc)
    (openxxx 'LL_OPA chan strg cc))

;         INBF CHAN,STRG,SIZ,CC    lecture de la ligne suivante sur fichier

(definstruct INBF (chan strg size cc)
    ["	MOVE.L	" chan , 'DUX0]
    (load-heap-obj-adr-in-AUX0 strg)
    (call-global 'll_ibc)
    ["	MOVE.L	" 'AUX0 , size]
    ["	MOVE.L	" 'DUX0 , cc])

;         INBFB CHAN,STRG,SIZ,CC    lecture de la ligne suivante sur fichier

(definstruct INBFB (chan strg size cc)
    ["	MOVE.L	" chan , 'DUX0]
    (load-heap-obj-adr-in-AUX0 strg)
    (call-global 'll_ibcb)
    ["	MOVE.L	" 'AUX0 , size]
    ["	MOVE.L	" 'DUX0 , cc])

;         OUTF      CHAN,STRG,SIZE,CC
;         envoie sur le canal 'chan'  la chaine 'strg' de taille 'size'
;         et envoie une fin de ligne. 
;         retourne le 'cc'

(definstruct OUTF (chan strg size cc)
    ["	MOVE.L	" chan , 'DUX0]
    (load-heap-obj-adr-in-AUX0 strg)
    ["	MOVE.L	" size , 'DUX1]
    (call-global 'll_sfo)
    ["	MOVE.L	" 'DUX0 , cc])

;         OUTFL     CHAN,STRG,SIZE,CC
;         envoie sur le canal 'chan' la chaine de " 'car "acteres 'strg'
;         sur 'size' " 'car "acteres sans rajouter de marque fin de ligne. 
;         retourne le 'cc'

(definstruct OUTFL (chan strg size cc)
    ["	MOVE.L	" chan , 'DUX0]
    (load-heap-obj-adr-in-AUX0 strg)
    ["	MOVE.L	" size , 'DUX1]
    (call-global 'll_sfl)
    ["	MOVE.L	" 'DUX0 , cc])

;         OUTFLB     CHAN,STRG,SIZE,CC
;         envoie sur le canal 'chan' la chaine de caracteres 'strg'
;         sur 'size' " 'caracteres sans rajouter de marque fin de ligne. 
;         retourne le 'cc'

(definstruct OUTFLB (chan strg size cc)
    ["	MOVE.L	" chan , 'DUX0]
    (load-heap-obj-adr-in-AUX0 strg)
    ["	MOVE.L	" size , 'DUX1]
    (call-global 'll_sfl)
    ["	MOVE.L	" 'DUX0 , cc])

(definstruct FCLOS (chan dest)
    ["	MOVE.L	" chan , 'AUX0]
    (call-global 'll_clo)
    ["	MOVE.L	" 'DUX0 , dest])

(de systemxx0 (label strg)
    ; appel de la routine syste`me "label" avec "strg" comme
    ; argument de type chai^ne de caracte`res Le-Lisp.
    (load-heap-obj-adr-in-AUX0 strg)
    (call-global label) )

(de systemxx1 (label strg dest)
    ; appel de la routine syste`me "label" avec "strg" comme
    ; argument de type chai^ne de caracte`res Le-Lisp.
    ; Au retour le code condition (cc) de la routine est charge'
    ; dans l'ope'rande "dest"
    (load-heap-obj-adr-in-AUX0 strg)
    (call-global label)
    ["	MOVE.L	" 'DUX0 , dest])
   
(de systemxx2 (label strg1 strg2 dest)
    ; appel de la routine syste`me "label" avec "strg1" et "strg2"
    ; comme arguments de type chai^ne de caracte`res Le-Lisp.
    ; Au retour le code condition (cc) de la routine est charge'
    ; dans l'ope'rande "dest"
    ; appelle une routine systeme avec 2 arguments chaines et CC
    (load-heap-obj-adr-in-AUX0 strg1)
    ["	MOVE.L	" 'AUX0 , 'DUX0]
    (load-heap-obj-adr-in-AUX0 strg2)
    (call-global label)
    ["	MOVE.L	" 'DUX0 , dest])

;         FDELE STRG,CC           detruit le fichier 

(definstruct FDELE (strg dest)
    (systemxx1 'LL_DEL strg dest))

;         FRENA STRG1,STRG2,CC       renomme un fichier

(definstruct FRENA (strg1 strg2 dest)
    (systemxx2 'LL_REN strg1 strg2 dest))

;         FCOPY STRG1,STRG2,CC       copy un fichier

(definstruct FCOPY (strg1 strg2 dest)
    (systemxx2 'LL_COP strg1 strg2 dest))

; 	MKDIR strg1,cc		creation d'un repertoire

(definstruct MKDIR (strg dest)
    (systemxx1 'LL_MKDIR strg dest))

; 	RMDIR strg1,cc		suppression d'un repertoire

(definstruct RMDIR (strg dest)
    (systemxx1 'LL_RMDIR strg dest))

; 	FPROBE strg1,cc		teste l'existence d'un fichier

(definstruct FPROBE (strg dest)
    (systemxx1 'LL_PRO strg dest))
    
;         CORSAV STRG,CC      sauve une image memoire

(definstruct CORSAV (strg dest)
    (systemxx1 'LL_CORSAV strg dest))

;         COREST STRG,CC      restaure une image memoire

(definstruct COREST (strg dest)
    (systemxx1 'LL_COREST strg dest))


; .SSection "Les instructions LLM3 pour la manipulation me'moire"

(definstruct HLADR (high low dest)
    ;  HLADR   h,l,result   h,l -> result
    ["	CLR.L	" 'DUX0]
    ["	MOVE.W	" high , 'DUX0]
    ["	CLR.L	" 'DUX1]
    ["	MOVE.W	" low , 'DUX1]
    ["	SWAP	" 'DUX0]
    ["	OR.L	" 'DUX1 , 'DUX0]
    ["	MOVE.L	" 'DUX0 , dest])

(definstruct ADRHL (src high low)
    ;  ADRHL   adr,h,l      high adr -> h, low adr -> l
    ["	MOVE.L	" src , 'DUX0]
    ["	MOVE.L	" 'DUX0 , 'DUX1]  
    ["	SWAP	" 'DUX0]
    ["	AND.L	" 'FIXMASK , 'DUX0]
    ["	MOVE.L	" 'DUX0 , high]
    ["	AND.L	" 'FIXMASK , 'DUX1]
    ["	MOVE.L	" 'DUX1 , low])

(definstruct MEMSET (op1 op2)
    ; MEMSET  op1,op2      op1 -> MEM(op2)
    ["	MOVE.L	" op2 , 'AUX0]
    ["	MOVE.W	" op1 ",(" 'AUX0 ")"])

(definstruct MEMGET (op1 op2)
    ;  MEMGET  op1,op2      MEM(op1) -> op2
    ["	CLR.L	" 'DUX0]
    ["	MOVE.L	" op1 , 'AUX0]
    ["	MOVE.W	(" 'AUX0 ")" , 'DUX0]
    ["	MOVE.L	" 'DUX0 , op2])

(definstruct MEMMOVM (src1 src2 dest)
    ;  MEMMOVM src1,src2,dest [src1 src2[ -> [dest ..
    ;?!?!? cette instruction n'est pas documente'e
    (let ((loop  (:generate-label))
	  (run   (:generate-label)))
         (xref-def 'xrefi 'ITCOUNT)
	 ["	MOVE.L	" src1 , 'AUX0]
	 ["	MOVE.L	" dest , 'AUX1]
	 ["	MOVE.L	" src2 , 'DUX0]
	 ["	ADD.L	" 'DUX0 , 'DUX0]
	 ["	ADD.L	" 'DUX0 , 'DUX0]
	 ["	BRA.S	" run]
     [loop]
         ["	MOVE.L	(" 'AUX0 ")+,(" 'AUX1 ")+"]
     [run]
         (DBRA loop)))

; .SSection "Les fonctions syste`me"

;         CLINE   <STRG>     ENVOIE UNE CHAINE AU SYSTEME

(definstruct CLINE (strg)
    (systemxx0 'LL_CLINE strg))

;         GETWD   <STRG>,<SIZE>    LIT LE WORKING-DIRECTORY

(definstruct GETWD (strg dest)
    (systemxx1 'LL_GETWD strg dest))

;         CHDIR    <STRG>    CHANGE LE WORKING-DIRECTORY

(definstruct CHDIR (strg)
    (systemxx0 'LL_CHDIR strg))

;         RUNTIME OP  retourne le RUNTIME flottant

(definstruct RUNTIME (dest)
    (testfloat)
    (call-global (if (31bitfloatp) 'LL_SRUNT 'LL_DRUNT))
    (store-c-llfloat dest))

;         SLEEP     dort un peu

(definstruct SLEEP (dest)
    (float-c-unaire (if (31bitfloatp) "LL_SLEEP" "LL_DLEEP")
		    dest))

;         DATE op (op est n vecteur de 8 e'le'ments!)
;         Attention les effets de bords!

(definstruct DATE (vect)
    (load-heap-obj-adr-in-AUX0 vect)
    (call-global 'll_date))

;         INTEST     SCRUTE LES ITS

(definstruct INTEST ()
    (let ((continue (:generate-label)))
         (xref-def 'xrefi 'ITCOUNT)
	 ["	TST.L	ITCOUNT"]
	 ["	BEQ.S	" continue]
	 (xref-def 'xrefp 'ITHARD)
	 ["	JSR	ITHARD"]
    [continue]))

;         SETALARM  op   met op dans le timer

(definstruct SETALARM (src)
    (float-c-unaire
       (if (31bitfloatp) "LL_SSETALRM" "LL_DSETALRM"); Label procedure C
       src)); l'argument pour la procedure.

;         GETENVRN   STRGSOURCE,STRGDEST,SIZERET

(definstruct GETENVRN (strg1 strg2 dest)
    (systemxx2 'LL_GETENV strg1 strg2 dest))

;         GETGLOBAL   <STRG>,VAL

(definstruct GETGLOBAL (strg dest)
    (systemxx1 'LL_GETGL strg dest))

;         CALLG     NARG,VALRET

(definstruct CALLG (narg dest)
    ["	MOVE.L	" narg , "-(" 'SP ")"]
    (call-global 'll_callg)
    ["	MOVE.L	" 'AUX0 , dest])

; .Section "Les MACROS LLM3 (cf: ../lltool/macllm3.ll)"

; .SSection "Les macros d'acce'le'ration du GC"

;(definstruct SWPCONS (curfreel curcons freel freelm)
;     (:lab 'swcn1)
;     (:TCMARK curcons 'swcn2)                ; c'etait marque : au suivant
;     (:MOV    curfreel (list 'CDR curcons))  ; chaine
;     (:MOVNIL (list 'CAR curcons))           ; clean, clean
;     (:MOV    curcons curfreel)              ; nouveau FREE
;     (:CLINVSBL  curfreel)                   ; plus invisible.
;     (:INCR freel)                           ; compte
;     (:CNBLT freel '(|#| 1024) 'swcn2)       ; pour compter par 1024 k!
;     (:MOV '(|#| 0) freel)                   ; remet les unites a 0
;     (:INCR freelm)                          ; increm les milliers (k)!
;     (:lab 'swcn2)
;     (:NXCONS curcons 'swcn1))               ; au suivant

(definstruct SWPCONS (curfreel curcons freel freelm)
  (let ((nextw  (:generate-label))
	(nextb  (:generate-label))
	(marked (:generate-label)))
       (xref-def 'xrefi 'BNUMB)
       (xref-def 'xrefi '_BTBGC)
       (xref-def 'xrefi '_BTBIN)
       ["	MOVE.L	_BTBGC," 'AUX0]               ; table de marquage du GC
       ["	MOVE.L	" 'RBCONS , 'DUX0]            ; 
       ["	SUB.L	BNUMB" , 'DUX0]               ; 
       ["	LSR.L	#6" , 'DUX0]                  ; nb d'octets a` sauter
       ["	ADD.L	" 'DUX0 , 'AUX0]              ; AUX0 <- l'adr relative.
       ["	MOVE.L	_BTBIN," 'AUX1]		      ; table des bits invisib
       ["	MOVE.L	ECONS," 'A3]		      ; fin de la zone des CONS
       ["	CLR.L	" 'DUX0]		      ; compteur de CONS libres
  [nextw]
       ["	MOVE.L	(" 'AUX0 ")," 'DUX2]          ; DUX2 les 32 bits TABGC
       ["	CLR.L	" 'DUX1]		      ; nume'ro du bit courant
       ["	AND.L	" 'DUX2 ",(" 'AUX1 ")+"]      ; efface les bits invisi.
  [nextb]
       ["	BTST	" 'DUX1 , 'DUX2]              ; le bit courant
       ["	BNE.S	" marked]		      ; il e'tait marque'
       ["	MOVE.L	" curfreel ",4(" curcons ")"] ; lien de la liste
       ["	ADDQ.L	#1," 'DUX0]		      ; nb de CONS libe're's.
       ["	MOVE.L	" curcons , curfreel]	      ; nouvelle liste libre.
       ["	MOVE.L	" 'NIL ",(" curcons ")"]      ;    libre.
  [marked]
       ["	ADDQ.L	#8," curcons]		      ; CONS suivant.
       ["	ADDQ.L	#1," 'DUX1]		      ; index suivant
       ["	CMP.W	#32," 'DUX1]		      ; fin des 32 CONS
       ["	BLT.S	" nextb]
       ["	CLR.L	(" 'AUX0 ")+"]
       ["	CMP.L	" curcons , 'A3]              ; fin de la zone CONS ?
       ["	BGT.S	" nextw]                      ; non ca roule...

       ;; le nombre de cons recupere est dans DUX0 en format long
       ["	MOVE.L	" 'DUX0 , 'DUX1]              ; pour extraire le # de K
       ["	AND.L	#$3FF," 'DUX1]                ; les unites <= 1024
       ["	MOVE.L	" 'DUX1 , 'A2]                ; dans A2 .
       ["	LSR.L	#8," 'DUX0]                   ; le nb de K
       ["	LSR.L	#2," 'DUX0]                   ; le nb de K
       ["	MOVE.L	" 'DUX0 , 'A3]))              ; dans A3

;   GCMARK : marquage d'un objet Lisp quelconque qui se trouve dans A1
;   Au retour A3 et A4 doivent e^tre inchange'es. (cf ../llm3/gc.llm3).
;   Dans cette de'finition ESTACK demande une tole'rance de 2 pointeurs!

;   Cette routine demande une tole'rance de pile de 2 ptr !

(definstruct  GCMARK  ()
  (let ((mark   (:generate-label))
	(marki  (:generate-label))
	(markr  (:generate-label))
	(markt  (:generate-label))
	(markl  (:generate-label))
	(markv  (:generate-label))
	(markv2 (:generate-label))
	(markv4 (:generate-label))
	(marker (:generate-label)))
   (:lab mark)       
       ; pre'chargement de registres de travail pour la routine
       ; interne de marquage : marki.
       (xref-def 'xrefi 'BNUMB)
       ["	MOVE.L	" 'BNUMB , 'DUX2]
       (xref-def 'xrefi 'ESTACK)
       ["	MOVE.L	" 'ESTACK , 'AUX1]
       (xref-def 'xrefi 'ECONS)
       ["	MOVE.L	" 'ECONS , 'A2]
   (:lab marki)
       ; (:BFLISP 'A1 markr)                ; je ne sais pas marquer.
       ["	CMP.L	" 'A1 , 'DUX2]
       ["	BHI.S	" markr]
       ["	CMP.L	" 'A1 , 'A2]
       ["	BLS.S	" markr]
       ; (:BTMARK 'A1 markr)                ; marque' c'est marque'!
       (xref-def 'xrefi '_BTBGC)
       ["	MOVE.L	_BTBGC," 'AUX0]     ; AUX0 <- le de'but de la table.
       ["	MOVE.L	" 'A1 , 'DUX0]      ; DUX0 <- l'objet
       ["	SUB.L	" 'DUX2 , 'DUX0]    ; DUX0 <- l'adresse relative.
       ["	LSR.L	#3," 'DUX0]         ; tous les objs sont mult de 8
       ["	MOVE.L	" 'DUX0 , 'DUX1]    ; DUX0 <- nume'ro du bit (mod 32
       ["	LSR.L	#5," 'DUX1]         ; DUX1 <- l'index dans la table
       ["	LSL.L	#2," 'DUX1]         ; DUX1 <- index de mot
       ["	ADD.L	" 'DUX1 , 'AUX0]    ; AUX0 <- l'adresse du mot.
       ["	MOVE.L	(" 'AUX0 ")," 'DUX1]; DUX1 <- le mot.
       ["	BTST	" 'DUX0 , 'DUX1]
       ["	BNE.S	" markr]
       ; (:STMARK 'A1)                      ; sinon c,a l'est.
       ["	BSET	" 'DUX0 , 'DUX1]
       ["	MOVE.L	" 'DUX1 ",(" 'AUX0 ")"]
       ; (:BTCONS 'A1 markl)                ; on privilegie les listes.
       ["	CMP.L	" 'A1 , 'RBCONS]
       ["	BLE.S	" markl]
       ; (:BTSYMB 'A1 markr)
       ["	CMP.L	" 'A1 , 'RBSYMB]
       ["	BLE.S	" markr]
       ; (:BTSTRG 'A1 markv)                ; marquage spe'cialise' chai^nes
       ["	CMP.L	" 'A1 , 'RBSTRG]
       ["	BLE.S	" markt]
       ; (:BTVECT 'A1 markv)                ; marquage spe'cialise' vecteurs
       ["	CMP.L	" 'A1 , 'RBVECT]
       ["	BLE.S	" markv]
   (:lab markr)
       (:RETURN)     
   (:lab markt)                             ; marquage d'un type (vect ou strg)
       (:MOV '(TYP A1) 'A1)
       ["	BRA.S	" marki]
   (:lab markl)                             ; marque une liste dans A1
       ; (:CHKSTK 'ESTACK 'ERRFSGC)
       ["	CMP.L	" 'AUX1 , 'SP]
       ["	BLT.S	" marker]
       (:PUSH '(CDR A1))                    ; sauve le reste
       (:MOV  '(CAR A1) 'A1)                ; l'e'le'ment de liste a` marquer.
       ["	BSR.S	" marki]            ; re'curse surles CARs
       (:POP  'A1)                          ; re'cupe`re le reste
       ["	BRA.S	" marki]
   (:lab markv)                             ; marque le vecteur dans A1
       ; (:CHKSTK 'ESTACK 'ERRFSGC)
       ["	CMP.L	" 'AUX1 , 'SP]
       ["	BLT.S	" marker]
       (:PUSH 'A1)                          ; le vecteur (en &0)
       ["	MOVE.L	(" 'A1 ")," 'AUX0]  ; AUX0 = adresse du tas
       ["	ADDQ.L	#4," 'AUX0]         ; pointe sur la taille
       ["	MOVE.L	(" 'AUX0 ")+," 'DUX0]  ; DUX0 = la taille
       ["	BRA.S	" markv4]           ; AUX0 = @ du 1er e'le'ment
   (:lab markv2)
       ["	MOVE.L	(" 'AUX0 ")+," 'A1] ; A1 = e'le'ment suivant
       (:PUSH 'A0)                          ; l'@ des e'le'ments
       (:PUSH 'DUX0)                        ; le compteur
       ["	BSR.S	" marki]            ; marque A1
       (:POP 'DUX0)                         ; le compteur
       (:POP 'A0)                           ; l'@ des e'le'ments
   (:lab markv4)
       (DBRA markv2)                        ; boucle sur DUX0
       (:POP 'A1)                           ; le vecteur
       ["	BRA.S	" markt]            ; vers le marquage du type
   (:lab marker)
       ["	JMP	" 'ERRFSGC]         ; STACKOVF durant le GC!
  ))


; .SSection "Les macros de calcul d'adresses"

(definstruct ADDADR ()
    ;  ADDADR A3|A1 + A4|A2  ->  A3|A1
    ["	MOVE.L	" 'A4 , 'DUX0]     ; high 2nd
    ["	SWAP	" 'DUX0]
    ["	MOVE.L	" 'A2 , 'DUX1]     ; low 2nd
    ["	OR.L	" 'DUX1 , 'DUX0]
    ["	MOVE.L	" 'DUX0 , 'AUX0]
    ["	MOVE.L	" 'A3 , 'DUX0]     ; high 1rst
    ["	SWAP	" 'DUX0]
    ["	MOVE.L	" 'A1 , 'DUX1]     ; low 1rst
    ["	OR.L	" 'DUX1 , 'DUX0]
    ["	ADD.L	" 'AUX0 , 'DUX0]   ; +
    ["	MOVE.L	" 'DUX0 , 'DUX1]  
    ["	SWAP	" 'DUX0]
    ["	AND.L	" 'FIXMASK , 'DUX0]
    ["	MOVE.L	" 'DUX0 , 'A3]
    ["	AND.L	" 'FIXMASK , 'DUX1]
    ["	MOVE.L	" 'DUX1 , 'A1])


(definstruct  SUBADR ()
    ;  ADDADR A3|A1 - A4|A2  ->  A3|A1
    ["	MOVE.L	" 'A4 , 'DUX0]     ; high 2nd
    ["	SWAP	" 'DUX0]
    ["	MOVE.L	" 'A2 , 'DUX1]     ; low 2nd
    ["	OR.L	" 'DUX1 , 'DUX0]
    ["	MOVE.L	" 'DUX0 , 'AUX0]
    ["	MOVE.L	" 'A3 , 'DUX0]     ; high 1rst
    ["	SWAP	" 'DUX0]
    ["	MOVE.L	" 'A1 , 'DUX1]     ; low 1rst
    ["	OR.L	" 'DUX1 , 'DUX0]
    ["	SUB.L	" 'AUX0 , 'DUX0]
    ["	MOVE.L	" 'DUX0 , 'DUX1]  
    ["	SWAP	" 'DUX0]
    ["	AND.L	" 'FIXMASK , 'DUX0]
    ["	MOVE.L	" 'DUX0 , 'A3]
    ["	AND.L	" 'FIXMASK , 'DUX1]
    ["	MOVE.L	" 'DUX1 , 'A1])
