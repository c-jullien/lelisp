;;; .EnTete "Le_Lisp Version 15.2" " " "Les Macros SUN4"
;;; .sp 2
;;; .SuperTitre "Les Macros LLM3 pour sparc v8"
;;; .Auteur "Greg Nuyens, Christian Jullien"
;;; .ILOGG

;;; .Centre "*****************************************************************"
;;; .Centre " Ce fichier est developpe' et maintenu par ILOG                  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*****************************************************************"
;
;;; .Centre "$Header: /usr/cvs/lelisp/solaris/macsol.ll,v 1.1 2006/12/09 12:47:41 jullien Exp $"

(unless (>= (version) 15)
	 (error 'load "fichier non compatible" 'macsol ))

(setq #:sys-package:colon 'sol)

(setq :debug ())             

#+:debug (print "************* debug mode *************")

;;; .Section "Les valeurs des assemblages conditionnels LLM3"
;;; NB  If *any* of these values are changed, they must be changed in
;;; mksymval.ll.  Then regenerate s/symval.s

(defvalue STATLLM3    ())     ; il faut des stats LLM3
(defvalue 31BITFLOATS T)      ; flottants sur 31 bits.
(defvalue TABLGC      T)      ; le GC utilise une table de bits si 31BITFLOATS
(defvalue GCSTPCP     ())     ; le GC n'est pas un stop et copy
(defvalue SIGBLOCK    1)      ; no need to reinstate signals inside the handler

(defvalue COMPILO     0)      ; =0 pre'sence du compilateur
(defvalue DEBUG       0)      ; =0 pas de DEBUG de l'initalisateur
(defvalue GCDEBUG     0)      ; =0 pas de DEBUG du GC
(defvalue SEDEBUG     0)
(defvalue DIVOVFL     0)      ; =0 le hard teste le de'bordement de la division
(defvalue TRUEOVFL    1)      ; =1 teste les vrais de'bordements arithme'tiques
(defvalue STOPCOPY    0)      ; =0 pas de GC stop & cop

;;; .Section "Utilisation des registres"

;;
;; NOTES on global %gX registers:
;;
;; The  SPARC  V8  ABI  specifies  that registers %g2 through %g4 are
;; reserved  for  application  programs and registers %g5 through %g7
;; are  reserved for the system.  Software outside the control of the
;; application,  including  system  libraries,  cannot  modify  these
;; registers  at  any  time.  Register %g1 is designated as a scratch
;; register,  meaning  that  values  stored  in  it are volatile over
;; function calls.
;;
;; The  SPARC  V9 ABI better defines the use of registers %g2 through
;; %g4.  Register  %g4 is free for general use.  This makes registers
;; %g1,  %g4,  and  %g5 volatile across function calls.  In addition,
;; %g1  and  %g5 are volatile between caller and callee,  if the call
;; is  to  an  external  function  that  goes  through  the procedure
;; linkage table (PLT).  In other words,  %g1 and %g5 may not be used
;; for  passing parameters because the dynamic linker might use these
;; if  the  call is made to an external function in a shared library.
;; Registers  %g2 and %g3 are defined as application specific,  while
;; registers %g6 and %g7 are reserved for system software.
;;
;; Note:  In a multi-threaded environment,  registers %g2 and %g3 are
;; thread  local.  You  do not need to do anything because the system
;; libraries  that  implement the thread-switching automatically save
;; and restore these registers on a thread switch.

;;
;; WARNING:
;; As mentioned above %g5 (V8), %g6 and %g7 may be modified by the system.

(defregister   GZERO   %g0)             ; constant zero register, always 0
(defregister   D0      %g1)		; temp register for callg
(defregister   A0      %g2)		; type of result for callg
(defregister   RBFLOAT %g3)		; de'but de la zone des flottants
(defregister   FCONS   %g4)             ; MUST be saved/restore accoss C calls
(defregister   A5      %g5)		; used in llsolaris.llm3

(defregister   CRES    %o0)		; where C routines return their result
(defregister   X1      %o0)		; auxiliaire 1 
(defregister   X2      %o1)		; auxiliaire 2
(defregister   X3      %o2)		; auxiliaire 3
(defregister   X4      %o3)		; auxiliaire 4
(defregister   X5      %o4)		; auxiliaire 5
(defregister   X6      %o5)		; auxiliaire 6
(defregister   CSP     %sp)		; SP C (same as %o6)
(defregister   LR      %o7)		; link register for lisp

(defregister   SHORT   %l0)		; 16 bit constant 0xffff for arithmetic
(defregister   A1      %l1)		; 
(defregister   A2      %l2)		;   les fameux 4
(defregister   A3      %l3)		;   accus de LISP
(defregister   A4      %l4)		; 
(defregister   RXFLOAT %l5)		; address of floating temp
(defregister   SIGNBIT %l6)		; #$80000000
(defregister   SP      %l7)		; SP Lisp 

(defregister   INARG1  %i0)		; first argument
(defregister   INARG2  %i1)		; second argument
(defregister   INARG3  %i2)		; third argument
(defregister   INARG4  %i3)		; fourth argument

(defregister   RBVECT  %i0)		; de'but de la zone des vecteurs
(defregister   RBSTRG  %i1)		; de'but de la zone des chaines
(defregister   KNIL    %i2)		; adresse de NIL (de'but des symboles)
(defregister   RBSYMB  %i2)		; adresse du premier symbole (NIL)
(defregister   NIL     %i2)		; adresse de NIL (de'but des symboles)
(defregister   RBCONS  %i3)		; de'but de zone liste
(defregister   BP      %i4)		; caml non-volatile 
(defregister   X9      %i4)		; (temp in swpcons)
(defregister   X8      %i5)		;
(defregister   D1      %i5)		; 2nd temp register for callg
;(defregister  FP      %i6)		; frame pointer.
;(defregister  RETADDR %i7)		; return addresse

(defregister   RF0     %f0)		; floating registers
(defregister   RF1     %f1)		; floating registers
(defregister   RF2     %f2)		; floating registers
(defregister   RF3     %f3)		; floating registers
(defregister   RF4     %f4)		; floating registers
(defregister   RF5     %f5)		; floating registers
(defregister   RF6     %f6)		; floating registers

(mapcar (lambda (f) (putprop f t ':floating-register))
	'(rf0 rf1 rf2 rf3 rf4 rf5 rf6))

;;; .Section "La taille du mot"

(defvalue   BYTESPERWORD 4)
(defvar     BYTESPERWORD 4)

;;; .Section "Les Valeurs des symboles d'acce`s"

;;; Fixes values

(defvalue	MINFIX		-32767)
(defvalue	MAXFIX		 32767)
(defvalue	MINUS0		 #$8000)

;;; .SSection "Aux proprie'te's naturelles des symboles"

(defvalue   CVAL       0)               ; adresse 32 bits
(defvalue   PLIST      4)               ; adresse 32 bits
(defvalue   FVAL       8)               ; 32 bits
(defvalue   PKGC       12)              ; adresse 32 bits
(defvalue   OVAL       16)              ; adresse 32 bits
(defvalue   ALINK      20)              ; adresse 32 bits
(defvalue   FTYPE      24)              ; code 16 bits
(defvalue   PTYPE      26)              ; code 16 bits
(defvalue   PNAME      28)              ; adresse de chai^ne 32 bits
(defvalue   FINSYMB    32)

;;; .SSection "Aux chai^nes de caracte`res et aux tableaux"

(defvalue   VAL         0)
(defvalue   TYP         4)

;;; .SSection "Aux cellules de liste"

(defvalue   CAR         0)              ; adresse 32 bits
(defvalue   CDR         4)              ; adresse 32 bits

;;; .SSection "Valeurs des ftypes"

(defvalue   FUNDEF	0)
(defvalue   SUBR0       1)
(defvalue   SUBR1       2)
(defvalue   SUBR2       3)
(defvalue   SUBR3       4)
(defvalue   SUBRN       5)
(defvalue   SUBRF       6)
(defvalue   EXPR        7)
(defvalue   FEXPR       8)
(defvalue   MACRO       9)
(defvalue   DMACRO      10)
(defvalue   SUBRM       11)
(defvalue   SUBRDM      12)

;;; .SSection "les types des caracte`res"

(defvalue  tcnull    0)         	; cnull
(defvalue  tcbcom    1)         	; debut commentaire
(defvalue  tcecom    2)         	; fin de commentaire
(defvalue  tcquote   3)         	; quote char
(defvalue  tclpar    4)         	; par ouvrante 
(defvalue  tcrpar    5)         	; par fermante
(defvalue  tcdot     6)         	; le point (des listes)
(defvalue  tcsep     7)         	; un se'parateur
(defvalue  tcspkgc   8)         	; se'parateurs de packages
(defvalue  tcsplice  9)         	; splice macro caractere
(defvalue  tcmacro  10)         	; macro caractere
(defvalue  tcstring 11)         	; se'parateur de chaines
(defvalue  tcpname  12)         	; pname normal
(defvalue  tcsymb   13)         	; symbole normal
(defvalue  tcmsymb  14)         	; symbole mono caractere

;;; .SSection "les types d'unite's syntaxiques"

(defvalue  tcobj    3)          	; objet lisp
(defvalue  tclist   4)          	; liste lisp

;;; .Section "les fonctions d'impression spe'cifiques"

(defun comment (string)
   ["! " string ])

(defun label-reference ()
    ;; \spade can do nothing
    ;; returns a string which references the label.
    "")

(defun symbol-reference (arg)
    ;; builds something like "29*32" which is symbol 29 times
    ;; the size in bytes of a symbol (32) from rbsymb 
     (catenate (or (getvalsymb arg)
		   (error 'symbol-reference "no valsymb" arg))
	       "*" (getvalue 'finsymb)))

(defun #:expand:genlab ()
    ;; ge'ne`re une nouvelle e'tiquette
    (or genlab (setq genlab (concat (substring current-title 0 3)
				    (incr genlab-counter)))))

(setq current-title 'init)

(defun #:expand:prin-label (l)
    ;; imprime une e'tiquette
    (when l 
          (print l ":")))

(defun #:expand:prin-at (o)
    ;; imprime un atome
    (cond ((fixp o)
	   (if (and (ge o 0) (neq o #$8000))
	       (prin o) ; only print positive, well behaved constants in dec.
	     (#:expand:prinhex o)))
	   ((not (symbolp o))
	    (prin o))
	   (t (if (getvalue o)
		  (#:expand:prin-at (getvalue o))
		(prin o)))))

(defun #:expand:prin-cons (l)
    (cond ((eq (car l) '|#|)
	    ; constante nume'rique ou
	    (#:expand:prin-at (cadr l)))
	   ((memq (car l) '(|@| |%|))
	    ; constante adresse de code (sur 32 bits) ou
	    ; constante adresse de data (sur 32 bits)
	    (prin (cadr l))
	    (label-reference))
	   ((eq (car l) '|&|)
	    ; indirect dans la pile
	    ;  \\ works up to 8 k
	    (prin (mul 4 (cadr l)) "(")
	    (#:expand:prin-at 'sp)
	    (prin ")"))
	   ((eq (car l) 'strg)
	    (prin """")
	    (prin (cadr l))
	    (prin """"))
	   ((symbolp (car l)) 	; \\ acce`s me'moire
	    (when (symbolp (car l))
		  (#:expand:prin-at (car l)))
	    (prin "(")
	    (#:expand:prin-at (cadr l))
	    (prin ")"))
	   (t (prin (car l)))))

(defun #:expand:prinhex (n)
    (prin "0x")
    (#:expand:prinhexb (logand (logshift n -8) #$ff))
    (#:expand:prinhexb (logand n #$ff)))

(defun #:expand:prinhexb (n)
    ;;  \\ prints a byte in hex.
    (when (lt n #$10) (princn #/0))
    (with ((obase 16)) (prin n)) )

(defun allocate-string (string)
  ;; allocates a string.  Since the sun4 does not have the same
  ;; escape character rules as llm3, if the string contains
  ;; an escape, then print it with bytes.  However, if it
  ;; can be read more easily, print as the string.
  (if (scanstring (cadr string) (list #/\ #// #/" )) ; there is a \
      (let ((str (pname (cadr string))) (n 0))
	(when (null str) (prin 0))
	(prin "	.byte 	")
	(while str
	  (prin (nextl str)) 
	  (incr n)
	  (cond ((> n 11) 
		 (setq n 0) 
		 (terpri) 
		 (when str (prin "	.byte 	")))
		(str (prin ","))))
	(terpri))
    ["	.asciz	" string ])) ; throw in a byte so that void will work.
  
;;; .Section "fonctions auxiliaires de ge'ne'ration"

(defun extrn (op type)
    ;; de'finition d'un symbole (op) externe de type (type)
    (unless (or (register? op)
		 (getprop op '#:expand:extern)
		 (= (chrnth 0 op) #/.))
	    ["	" type "	" op] 
	     (putprop op t '#:expand:extern)))

(putprop 'SET '2 '#:llm3:narg)
(definstruct SET (string dest)
  ;; allows the storage of non-LLM3 immediates into a register
  ["	set	" (cadr string) , dest])

(putprop 'XDEFC '1 '#:llm3:narg)
(defins XDEFC
  ;; define an entry that will be called by c.
  ["	.global	" \1])

(putprop 'ALIGNFORDOUBLE '0 '#:llm3:narg)
(defins  ALIGNFORDOUBLE()
  ["	.align	8"])

(defun align ()
  ;; align code. Since branch target must be on word boundaries.
  ["	.align	4"])

(defun alignfn ()
  ;; align code for function. Since branch target must be on word boundaries.
  ["	.align	8"])

(defun alignd ()
  ;; for word data, it must be word aligned.
  ["	.align	4"])

(defun text ()
  ["	.seg	""text"""])

(defun data ()
  ["	.seg	""data1""   "])

(defun nop ()
  (#:expand:nop))

(dmd immediate? (val)
     `(and (consp ,val) (eq (car ,val) '|#|)))

(defun show-sign (immediate-arg)
  ;; when we want an immediate to be sign extended, it must be printed
  ;; with its sign. So convert it to a string, so that prin-at
  ;; doesn't convert it to a 16 bit hex number (which will exceed
  ;; the size  of an immediate field for this machine).
  (string (cadr immediate-arg)))

(defun 11-bit-positive? (val)
  ;; this predicate is really to check for 13 bit immediates, but
  ;; in the case where the index is going to be scaled by 4 (bytes per word)
  (and (immediate? val)
       (13-bit-positive-val? (* 4 (cadr val)))))

(defun 13-bit-positive? (val)
   ;; when this predicate is true, we can use the value as an immediate
   ;; operand even though llm3 is 16 bit and sparc's immediates are 13 bits.
   ;; So -1 to sparc means sign extended 32 bit -1, while LLM3
   ;; means 16 bit -1.
    (and (immediate? val)
	 (13-bit-positive-val? (cadr val))))

(defun 13-bit-positive-val? (val)
    (and (fixp val)
	 (neq val #$8000)
	 (lt val 4096)
	 (ge val 0)))

(defun 13-bit-immediate? (val)
    ;; where we are going to 32 bit
    ;; sign extend the result, we can use any 13-bit
    ;; value as an immediate.
    (and (consp val)
	  (eq (car val) '|#|)
	  (fixp (cadr val))
	  (< -4096 (cadr val))
	  (<= (cadr val) 4095)))

(defun 16-bit-immediate? (val)
    ;; teste si l'argument ? en 16 bits
    (and (consp val)
	  (eq (car val) '|#|)
	  (fixp (cadr val))
	  (< -32768 (cadr val))
	  (<= (cadr val) 32767)))

(defun 4-bit-positive? (val)
    ;; \spade definite junk.
    (immediate? val))

(defun 15-bit-positive? (val)
    ;; \spade definite junk.
    (immediate? val))

(defun prepsrc (arg reg . extend?)
    ;; pre'pare l'argument source "arg"(si registre, toujours un registre
    ;; llm3)
    ;; s'il le faut range l'argument dans l'auxiliaire "reg"
    ;; retourne le nume'ro de registre qui contient l'argument
    ;; The optional argument extend means to sign extend the result
    (cond ((register? arg)
	    ; c'est de'ja` un registre
	   (cond
	    ((car extend?) ; sign extend the result into the reg
	     (:extend arg reg))
       #+nil((floating-register? reg)
	     ;; the destination is a floating register, so we must
	     ;; transfer from the normal reg to a floating register
	     ;; via the memory
	     (:floating-move arg reg))
	    (t ; otherwise, it is already the right kind of register.
	     arg)))
	   ((atom arg)
	    ; c'est un mot me'moire. toutes les adresses de travail
	    ; sont accessibles toujours avec 32 bits car les
	    ; segments code + data partagent le me^me espace adresse.
	    ; les .symb peuvent e^tre optimise's si la table
	    ; symval.ll a e'te' charge'e.
	    (cond ((getvalsymb arg)
		   (if (13-bit-positive-val? (* (getvalue 'finsymb)
					 (getvalsymb arg)))
		       ["	add    	" 'knil, (symbol-reference arg) , reg]
		      ["	set	" (symbol-reference arg) , reg]
		      ["	add    	" 'knil, reg , reg]))
		  (t
		   ["	set	" arg , reg]
		   (:load reg 0 reg)))
	    reg)
	   ((memq (car arg) #:llm3:mem-access)
	    ; access  to one word in memory indirect on the register "cadr arg"
	    (:load (cadr arg) (car arg) reg)
	    reg)
	   ((eq (car arg) '|#|)
	    ; constante nume'rique (ou valeur de constante symbolique)
	     ; the assembler on the sun4 knows how to expand set's into
	     ; "or" or "sethi" or both.
	    (cond 
		  ((symbolp (cadr arg))
		   ; symbolic constant
		   ["	set	" (getvalue (cadr arg)) ,reg ]
		   reg)
		  ((eq (cadr arg) 0)
		   'GZERO)
		  (t
		   ; a unsigned numeric constant of 16 bits.
		   ["	set	" (cadr arg) ,reg ]
		   reg)))
	   ((eq (car arg) '|@|)
	    ; constante adresse de code (sur 32 bits)
	    ["	set	" (cadr arg) ,reg ]
	    ["	dec	" "8" , reg] ; allow 
	    reg)
	   ((eq (car arg) '|%|)
	    ; constante adresse de data (toujours sur 32 bits)
	    ["	set	" (cadr arg) ,reg ]
	    reg)
	   ((eq (car arg) '|&|)
	    ; indirect dans la pile
	    (:load 'sp (mul 4 (cadr arg)) reg)
	    reg)
	   (t (#:expand:err 'prepsrc arg 'nomarg))))

(defun floating-register? (reg)
  (and (symbolp reg) (getprop reg ':floating-register)))

(defun :floating-move (src fdest)
  ;; move the value in register src into floating register fdest
  (cond ((pgetvalue '31BITFLOATS)
	 (:store src 0 'RXFLOAT)
	 (:load 'RXFLOAT 0 fdest))
	(t
	 (cond ((and (floating-register? src) (floating-register? fdest))
		["	fmovs	" src, fdest])
	       ((and (floating-register? src) (register? fdest))
		(:store-double src 0 fdest))
	       ((floating-register? fdest)
	        (cond ((member fdest '(rf1 rf3 rf5))
                       ;; destination register must be even.
		       ["	ldd	" "[" src "+0]" , 'rf6 ]
		       ["	fmovs	" 'rf6 , fdest])
                      (t
		       ["	ldd	" "[" src "+0]" , fdest])))
	       ((and (register? src) (register? fdest))) ;;; do nothing
	       (t (error 'floating-mov src fdest)) ))))

(defun :add (source offset dest)
  ;; adds the register source with offset to dest
  ["	add	" source , offset , dest])

(defun :store (src offset dest)
  ;; stores a register at offset from dest.
  ;; Note that ST works with floating registers. 
  ["	st   	" src , "[" dest "+" offset "]"])

(defun :store-half (src offset dest)
  ;; stores lower 16 bits of register at offset from dest.
  ["	sth   	" src , "[" dest "+" offset "]"])

(defun :store-char (src offset dest)
  ["	stb  	" src , "[" dest "+" offset "]"])

(defun :store-double (src offset dest)
  ["	std 	" src , "[" dest "+" offset "]"])

(defun :load (source offset target)
  ;; loads the register target with the register source + offset.
  ;; \spade verify 13bits of offset.
  ["	ld	" "[" source "+" offset "]" , target])

(defun :load-double (source offset target)
  ["	ldd	" "[" source "+" offset "]" , target])

(defun :load-half (source offset target)
  ;; loads the register target with the register source + offset.
  ;; \spade verify 13bits of offset.
  ["	lduh	" "[" source "+" offset "]" , target])

(defun :load-char (source offset target)
  ;; loads the register target with the register source + offset.
  ;; \spade verify 13bits of offset.
  ["	ldub	" "[" source "+" offset "]" , target])

(defun :extend (source dest)
  ;; sign extend a 16 bit value to 32 bits.
  ["	sll	"  source , "16" , dest]
  ["	sra	" dest , "16" , dest])

(defun movsrc (arg regin)
   ;; transporte l'ope'rande "arg" de n'importe quel type
   ;; dans le registre de nom "regin".
   ;; retourne toujours "regin" en valeur.
   (setq arg (prepsrc arg regin))
   (cond
     ((eq (getvalue arg) (getvalue regin))
      ;; do nothing
      regin)
     ((floating-register? regin)
      (:floating-move arg regin))
     ((floating-register? arg)
      (:floating-move arg regin))
     (t
      ;; they are both normal registers
      ["	mov   	" arg  , regin]))
   regin)

(defun movdest (src dest)
   ;; transporte "src" (qui est toujours un registre pre^t)
   ;; dans "dest" de n'inporte quel type
   (cond ((and (floating-register? dest) (floating-register? src))
	       ["	fmovs	" src , dest])
	 ((or (floating-register? dest) (floating-register? src))
	   (:floating-move src dest))
	 ((register? dest)
	    ; c'est un reg -> reg
	   (if (not (eq (getvalue src) (getvalue dest)))
	       ["	mov   	" src  , dest]))
	 ((atom dest)
	   ; c'est un mot me'moire (accessible avec 32 bits)
	   ["	set	" dest , 'x5]
	   (:store src 0 'x5))
	 ((memq (car dest) #:llm3:mem-access)
	   ; acce`s a` la me'moire indirect par registre
	   ; Guaranteed to have a register in (cadr dest) 
	   (:store src (car dest) (cadr dest)))
	 ((eq (car dest) '|&|)
	   ; indirect dans la pile
	   (:store src (mul 4 (cadr dest)) 'sp))
	 (t (#:expand:err 'movdest src ()))))

(defun ll-call (adr)
    ;; engendre un call adr ou jcall adr en mode lisp
    ;; adr must be on a word boundary.
    ;; adr is any label (20 bit pc rel addressing)
    ["	dec  	" BYTESPERWORD , 'sp]  
    ["	call	" adr]
    (:store 'LR 0 'SP)
    (align))

(defun macalglob (adr)
    ;; appel du sous-programme a` l'adresse globale "adr"
    (extrn adr ".global")
    (ll-call adr))

(defun movaheap (op reg . lenreg)
    ;; charge dans "reg" l'adresse heap de "op"
    ;; optionally load the length of the heap obj in lenreg
    (:load (prepsrc op reg) 0 reg)
    (if lenreg
	(:load reg BYTESPERWORD (car lenreg)))
    ["	inc  	" (* 2 BYTESPERWORD) , reg]
    reg)

(defun movaheabix (op ind reg)
    ;; charge l'adresse heap d'OCTET "op+ind" dans "reg"
    (:load (prepsrc op reg) 0 reg)
    (if (13-bit-positive? ind)
	["	add	" reg , "8" "+" ind , reg ]
	["	inc	" "8" , reg]
	["	add  	"  (prepsrc ind 'x1), reg ,reg]))

(defun movaheapix (op ind reg)
    ;; move address of heap pointer indexed
    ;; charge l'adresse heap de MOT "op+ind" dans "reg"
    (:load (prepsrc op reg) 0 reg)
    (if (and (immediate? ind)
	     (13-bit-positive-val? (add 8 (times 4 (cadr ind)))))
	 (:add reg (add 8 (times 4 (cadr ind))) reg)
	 ["	inc  	" "8" , reg]
	 (movsrc ind 'x1)
	 ["	sll	" 'x1 , "2" , 'x1]
	 ["	add  	" reg , 'x1 , reg]))


(defun blitb (nb source dest aux)
    ;; doit marcher dans les deux sens si la chaine est partage'e
    ;; transfert "nb" octets de "source" vers "dest" en utilisant "aux"
    ;; "nb" est force'ment un registre de travail.
    ["	cmp    	" dest , source ] 
    ["	blt     g" @] ; le bon
    (nop)
    ["	add    	" source , nb , source]          ; pour etre au bout + 1
    ["	ba    f" @]
    ["	add    	" dest , nb , dest] ; delay slot
    (align)
  ["q" @ :"	ldub   	" "[" source "+0]" , aux]
    ["	stb  	" aux , "[" dest "+0]"]
  ["f" @ :"	dec  	" source ]          ; en reculant dans ce cas
    ["	deccc  	" nb ] ; delay slot
    ["	bge      q" @]
    ["	dec  	" dest ]
    ["	ba,a    e"@]    	; \\ done
  ["r" @ :]
    ["	stb  	" aux , "[" dest "+0]" ]
    ["	inc  	" dest] ; delay slot
    ["	inc  	" source ]
  ["g" @ :"	deccc  	" nb ]
    ["	bge,a    r" @]
    ["	ldub   	"  "[" source "+0]" , aux]
  ["e"@ :])

(defun blitw (nb source dest aux)
    ;; transfert "nb" mots de "source" vers "dest" en utilisant "aux"
    ;; "nb" est force'ment un registre de travail.
    ["	cmp    	" dest , source ] 
    ["	blt     g" @] ; le bon
    (nop)
    ["	mov   	" nb ,  aux]
    ["	sll  	" aux , "2" , aux]
    ["	add    	" source , aux , source] ; pour etre au bout + 1(mot)
    ["	ba         f" @]
    ["	add    	" dest , aux , dest]	; delay slot
    (align)
  ["q" @ : ]
	(:load source 0 aux)
        (:store aux 0 dest)
  ["f" @ : "	dec  	" 'BYTESPERWORD ,  source]          ; en reculant 
    ["	deccc  	" nb]
    ["	bge,a   q" @]
    ["	dec  	" 'BYTESPERWORD , dest ] ; delay slot

    ["	ba,a       e"@]    
  ["r" @ :]
    (:store aux 0 dest)
    ["	inc  	" 'BYTESPERWORD ,  dest ]
    ["	inc  	" 'BYTESPERWORD , source ]
  ["g" @ :"	deccc  	" nb]
    ["	bge,a     r" @]
    (:load source 0 aux) ; delay slot
    ["e"@ :])

;;; .Section "les pseudos de llm3"

(defins TITLE   
  ;; nettoyage de la table des symboles (entre 2 assemblages)
  (mapoblist (lambda (x) (when x (remprop x '#:expand:extern))))
  ["!" ]
  ["!	File " (setq current-title \1) ".s expansion for sparc arch=v8plus." ]
  ["!	This file is part of Le-Lisp kernel." ]
  ["!	Generated on " (date) ]
  ["!" ]
  ["	.file	""" \1 ".s""" ]
  ["	.align	8 " ])

(defins PURE
  ["	.seg	""text"""]
  (setq #:expand:pure t))

(defins IMPURE
  ["	.seg	""data1"""]
  (setq #:expand:pure nil)
  (alignd))

(setq #:expand:pure t)

(defins LABEL
  ;; *label is the current label bound in the instruction generator
  ;; \spade should it really do nothing?
  )

(defins ADR
  ;; \\ needs to be word aligned
  ["	.word 	" \1])

(defins NOP
  ["	nop"])

(defins END
  ["! end"])

(defins XDEFI
    (extrn \1 ".global"))

(defins XDEFP
  (extrn \1 ".global"))

(defins XREFI
  (extrn \2 ".global"))

(defins XREFP
  (extrn \2 ".global"))

;;; .Section  "les instructions llm3"

;;; .SSection "instructions de test de type d'objet lisp"

;;; .sssection "avec une seule borne"

(defun btf1xx (borne cond)
  (setq genlab ())			; force the generation of a new label
  (if (13-bit-positive? borne)
      ["	cmp    	" (prepsrc \1 'x1) , borne]
      ["	cmp    	" (prepsrc \1 'x1) , (prepsrc borne 'x2)])
  ["	b" cond "	" \2 ]
  (#:expand:nop)) ; to fill the delay slot.

(defins BTFIX
  (if (pgetvalue '31bitfloats)
      (bt2xx '(|#| 0) 'RBVECT)
      (btf1xx 'RBFLOAT "lt")))

(defins BFFIX
  (if (pgetvalue '31bitfloats)
      (bf2xx '(|#| 0) 'RBVECT)
      (btf1xx 'RBFLOAT "ge")))

(defins BTNIL
  (btf1xx 'knil	"eq"))

(defins BFNIL
  (btf1xx 'knil	"ne"))

(defins BTCONS
  (btf1xx 'rbcons  "ge"))

(defins BFCONS
  (btf1xx 'rbcons  "lt"))

(defins BTLISP
  (extrn 'econs ".global")
  (bt2xx 'bnumb 'econs) )

(defins BFLISP
  (extrn 'econs ".global")
  (bf2xx 'bnumb 'econs) )
 
;;; .sssection "avec 2 bornes"

(defun bt2xx (btype etype)
  ;; bttype
  (setq genlab ())			; force the generation of a new label.
  (setq \1 (prepsrc \1 'x1))
  (if (13-bit-positive? btype)
      ["	cmp	" \1 , btype]
      ["	cmp	" \1 , (prepsrc btype 'x2)])
  ["	blt  	" @]
  (nop) ; \spade check how to cascade the branches properly
  (if (13-bit-positive? etype)
      ["	cmp	" \1 , etype]
      ["	cmp	" \1 , (prepsrc etype 'x2)])
  ["	blt  	" \2]
  (nop)
  [@ :])
 
(defun bf2xx (btype etype)
  ;; bftype
  (setq genlab ())			; force the generation of a new label.
  (setq \1 (prepsrc \1 'x1))
  (if (13-bit-immediate? btype)
      ["	cmp    	" \1 , btype]
      ["	cmp    	" \1 , (prepsrc btype 'x2)])
  ["	blt  	" \2]
  (nop)
  (if (13-bit-immediate? etype)
      ["	cmp    	" \1 , etype]
      ["	cmp    	" \1 , (prepsrc etype 'x2)])
     ["	bge  	" \2]
     (nop))
 
(defins BTNUMB
  (extrn 'bnumb ".global") (bt2xx 'bnumb  'rbfloat))

(defins BFNUMB
  (extrn 'bnumb ".global") (bf2xx 'bnumb  'rbfloat))

(defins BTFLOAT
   (if (pgetvalue '31bitfloats)
       (btf1xx '(|#| 0) "lt")
       (bt2xx 'RBFLOAT 'rbvect)))
 
(defins BFFLOAT
  (if (pgetvalue '31bitfloats)
      (btf1xx '(|#| 0) "ge")
      (bf2xx 'RBFLOAT 'rbvect)))

(defins BTVECT
  (bt2xx 'rbvect  'rbstrg))

(defins BFVECT
  (bf2xx 'rbvect  'rbstrg))

(defins BTSTRG
  (bt2xx 'rbstrg  'rbsymb))

(defins BFSTRG
  (bf2xx 'rbstrg  'rbsymb))

(defins BTSYMB
  (bt2xx 'rbsymb  'rbcons))

(defins BFSYMB
  (bf2xx 'rbsymb  'rbcons))

(defins BTVAR
  (extrn 'bvar ".global") (bt2xx 'bvar   'rbcons))

(defins BFVAR
  (extrn 'bvar ".global") (bf2xx 'bvar   'rbcons))
 
 ;; .SSection "instructions qui initialisent la borne des variables"
 
(defins SETBVAR    
  (extrn 'bvar ".global")
  (#:expand:mov \1 'bvar))
 
;;; .SSection "manipulations de la pile"

;;;         stack   ea          sauve la valeur du pointeur de pile
;;;         sstack  ea          change la valeur du pointeur de pile
;;;         chkstk  val,lab     test le de'bordement de pile
;;;         push    ea,sp       empile un pointeur
;;;         pop     ea          de'pile un pointeur
;;;         popr    sp,ea       de'pile un pointeur
;;;         topst   ea          consulte le sommet de pile
;;;         topstr  sp,ea       consulte le sommet de pile
;;;         xtopst  ea          e'change du sommet de pile avec ea
;;;         xtopstr sp,ea       e'change du sommet de pile avec ea
;;;         adjstk  arg         ajuste la pile   sp = sp + arg
 
'(defins STACK
   (movdest 'sp \1))
 
'(defins SSTACK
   (movsrc \1 'sp))
 
(defins CHKSTK
   ["	cmp    	" 'sp , (prepsrc \1 'x1)]
   ["	blt  	" \2]
   (nop))
 
(defins PUSH 
   ["	dec  	" "4" , 'sp] 
   (:store (prepsrc \1 'x1) 0 'sp))

 
(putprop 'PUSHR 2 '#:llm3:narg)
(defins PUSHR
   ["	dec  	" "4" , \1] 
   (:store (prepsrc \2 'x1) 0 \1))

'(defins POP
   (if (register? \1)
       (:load 'sp 0 \1)
     (:load 'sp 0 'x1)
     (movdest 'x1 \1))
   ["	inc  	" "4" , 'sp])                   

(defins POPR
   (if (register? \2)
       (:load \1 0 \2)
     (:load \1 0 'x1)
     (movdest 'x1 \2))
   ["	inc  	" "4" , \1])                   
 
'(defins TOPST
  (if (register? \1)
      (:load 'sp 0 \1)
    (:load 'sp 0 'x1)
    (movdest 'x1 \1)))
 
(defins TOPSTR
  (if (register? \2)
      (:load \1 0 \2)
    (:load \1 0 'x1)
    (movdest 'x1 \2)))
 
'(defins XTOPST
  (ifn (register? \1)
      ;;  \spade Is this restriction in the llm3 doc?
       (error 'xtopst \1 ())
       (:load 'sp 0 'x1)
       (:store \1 0 'sp)
       ["	mov  	" 'x1 , \1]))

(defins XTOPSTR
  (ifn (register? \2)
       (error 'xtopstr \2 ())
       (:load \1 0 'x1)
       (:store \2 0 \1)
       ["	mov 	" 'x1 , \2 ] ))
 

'(defins ADJSTK
  (if (11-bit-positive? \1)
      ["	inc  	" "4*" \1 , 'sp ]
    (movsrc \1 'x1)
    (:extend 'x1 'x1) ; redundant with the shifts in extend
    ["	sll  	" 'x1 , "2" , 'x1]
    ["	add    	" 'sp , 'x1 , 'sp]))
 
(defins ADJSTKR
   (if (11-bit-positive? \2)
       ["	inc  	" "4*" \2 , \1]
     (movsrc \2 'x1)
     (:extend 'x1 'x1) ; redundant with the shifts in extend
     ["	sll  	" 'x1 , "2" , 'x1]
     ["	add    	" \1 , 'x1 , \1]))
 
 ;; .SSection "le contro^le"
 
 ;;         bra    lab          branchement dans un module
 ;;         jmp    lab          branchement dans un autre module
 ;;         bri    arg          branchement au travers un registre
 ;;         brx    table,index  branchement indirect (table) indexe' (index)
 ;;         call   adr          appel d'un sous-programme
 ;;         jcall  adr          appel d'un sous-programme externe
 ;;         return              retour d'un sous-programme
 
(defins BRA
   ["	ba,a	" \1] ; we annul the delay instruction since we don't
   (align))           ; know what is following.
 
(defins JMP
   ["	ba,a	" \1]
   (align))
 
(defins BRI
  (movsrc \1 'LR)
  ["	inc	"  "8" , 'LR ]
  ["	jmp    	"  'LR]
  (nop)
  (align))
 
(defins BRX
   (movsrc \2 'x1)
   ;; The mov is to guarantee that any llm3 register is preserved.
   ["	sll  	" 'x1 , "2" , 'x1]
   ["	add   	" 'x1 , (prepsrc \1 'x2) , 'x1]
   ;; the 8 is the offset that @ decrements by.
   (:load 'x1 8 'x1)
   ["	jmp 	" 'x1 ]
   (nop)
   (alignd))
 
(defins CALL
   (ll-call \1))
 
(defins JCALL
   (ll-call \1))

;;; CALLI op  (push PC; op -> PC)

(defins CALLI
   ["	dec  	" "4" , 'sp ] 
   (movsrc \1 'x3)
   ["	inc	" "8" , 'x3]
   ["	jmpl	" 'x3 , 'LR ]
   (:store 'LR 0 'sp)  ; in the delay slot
   (align))

(defins RETURN
  ;; do an LLM3 return. (On the sun4, the value on the stack is 8 bytes
  ;; lower than the real return address.)
  (:load 'sp 0 'lr)
  ["	jmp	" 'lr "+" (times 2 BYTESPERWORD)]
  ["	inc  	" 'BYTESPERWORD , 'sp]  ; delay slot of jmpl
  (align))
 
;;; .SSection "les ope'rateurs de boucle"
 
 ;;         sobgez  op,lab     op<-op-1; si op >= 0 branch a` lab
 ;;         sobgtz  op,lab     op<-op-1; si op > 0 branch a` lab
 
(defins SOBGEZ
  ;; Care is taken here to ensure that sign-extended values are
  ;; never left in the LLM3 registers.
  (let ((op (prepsrc \1 'x1)))
    (:extend op op)
    ["	deccc  	" "1" , op]
    (if (eq \1 op)
	(convnb op)
      (movdestnb op \1))
    ["	bge  	" \2 ]
    (nop)
    ))
 
(defins SOBGTZ
  (let ((op (prepsrc \1 'x1)))
    (:extend op op)
    ["	dec  	"  op]
    (when (neq \1 op) (movdest op \1))
    ["	cmp   	" op , "0" ]
    ["	bgt  	" \2 ]
    (nop)
    ["	mov  	" "0", op] ; sinon \1 = #$ffffffff
    (when (neq \1 op) (movdest op \1))))
 
;;; .SSection "les transferts"

;;;         mov s,d      s->d
;;;         movnil d  charge nil dans la destination
;;;         movxsp source,index   source -> sp(index)
;;;         xspmov index,dest   sp(index)  ->  dest
;;;         movbm  size,adrs,strg
;;;                transfert une suite de <size> caracte`res de <adrs>
;;;                dans la chai^ne strg. rajoute toujours un nul en fin!
 
(defins MOV
  (if (register? \2)               ; utilise \2 comme registre de travail
      (movsrc \1 \2)
      (movdest (prepsrc \1 'x4) \2)
	     ))                   ;; la destination est complique'e

(putprop 'SMOV 2 '#:llm3:narg)
(defins SMOV
  (cond ((pgetvalue '31BITFLOATS)
         (if (register? \2)        ; utilise \2 comme registre de travail
	     (movsrc \1 \2)
	     (movdest (prepsrc \1 'x4) \2)
	     ))))                  ;; la destination est complique'e

(putprop 'DMOV 3 '#:llm3:narg)
(defins DMOV
  (cond ((not (pgetvalue '31BITFLOATS))
	 (#:expand:mov \2 'accusingle1)
	 (#:expand:mov \3 'accusingle2)
	 ["	set	accusingle1, %o4"]
	 ["	ldd	[%o4+0]", 'rf0])))

(putprop 'BFLOAT_TO_RBFLOAT 0 '#:llm3:narg)
(defins BFLOAT_TO_RBFLOAT
  (when (not (pgetvalue '31BITFLOATS))
	["	set	bfloat", 'RBFLOAT]
	["	ld	["'RBFLOAT "+0]", 'RBFLOAT])
  )
 
(defins MOVNIL
   (movdest 'knil \1))

(defins MOVXSP
  ;; moves SOURCE into SP(OFFSET)
  (if (11-bit-positive? \2)
      (:store (prepsrc \1 'x1) (times 4 (cadr \2)) 'sp)
    ;; cas normal long.
    (movsrc \2 'x2)
    ["	sll  	" 'x2 , "2" , 'x2]            
    ["	add    	" 'x2 , 'sp , 'x2]
    (:store (prepsrc \1 'x1) 0 'x2)))

(defins XSPMOV
  (cond ((11-bit-positive? \1)
	 (if (register? \2)
	     (:load 'sp (times 4 (cadr \1)) \2)
	   (:load 'x2 (times 4 (cadr \1)) \2)
	   (movdest 'x2 \2)))
	(t (movsrc \1 'x1)
	   ["	sll 	" 'x1 , "2" , 'x1]            
	   ["	add    	" 'x1 , 'sp , 'x1]
	   (if (register? \2)
	       (:load 'x1 0 \2)
	     (:load 'x1 0 'x2)
	     (movdest 'x2 \2)))))
 
(defins MOVBM
  (movsrc \1 'x1)
  (movsrc \2 'x2)
  (movaheap \3 'x3)
  (blitb 'x1 'x2 'x3 'x4))
 
;;; .SSection "les instructions d'acce`s spe'ciales"

;;;         gftype s,d          ftype(s) -> d
;;;         sftype s,d          s -> ftype(d)
;;;         gptype s,d          ptype(s) -> d
;;;         sptype s,d          s -> ptype(d)
 
(defins GFTYPE
  (:load-half \1 (getvalue 'ftype) \2))

(defins SFTYPE
  (:store-half (prepsrc \1 'x1) (getvalue 'ftype) \2))

(defins GPTYPE
  (:load-half \1 (getvalue 'ptype) \2))

(defins SPTYPE
  (:store-half (prepsrc \1 'x1) (getvalue 'ptype) \2))
 
;;; .SSection "instructions sur le  heap"

;;;         nxhb      size,arg     size+ 9?f + arg  ->  arg

(defins NXHB
  ;; \1 = taille en octet, \2 heap source et re'sultat
  ;; garanti une frontie`re de mot (32 bits)
  (movsrc \1 'x1)
  (cond
   ((register? \2)
    ["	add    	" \2 , 'x1 , \2]
    ["	inc  	" "13" , \2 ]
    ["	and  	" \2 , "-4" , \2]); sign extended constant on Sparc (0xfffc)
   (t (movsrc \2 'x2)
      ["	add    	" 'x2 , 'x1 , 'x2]
      ["	inc  	" "13" , 'x2]
      ["	and  	" 'x2 , "-4" , 'x2]
      (movdest 'x2 \2))))

;;;         nxhp      size,arg     size+ 8? + arg  ->  arg

(defins NXHP
 ;; \1 = taille en mots, \2 heap source et re'sultat
 ;; garanti une frontie`re de mot (32 bits), e'videmment!
 (movsrc \1 'x1)
 ["	sll  	" 'x1 , "2" , 'x1]
 (cond ((register? \2)
	 ["	add    	" \2 , 'x1 ,\2]
	 ["	inc  	" "8" , \2]) ; 4 de ptr 4 de taille
	(t (movsrc \2 'x2)
	   ["	add    	" 'x2 , 'x1 , 'x2]
	   ["	inc  	" "8" , 'x2] ; 4 de ptr 4 de taille
	   (movdest 'x2 \2))))

;;;         nxhf      arg     nombre flottant
;;;         cette instruction n'existe pas dans la version sun4

(defins NXHF
 ;(error 'nxhf 'nxhf "doesn't exist.")
 )

(defins NXHS
 ;(error 'nxhs 'nxhs "doesn't exist.")
 )

;;;         hgsize    arg,arg1  size[arg]  ->  arg1

(defins HGSIZE  
  (:load (prepsrc \1 'x1) 0 'x1)
  (if (register? \2)
      (:load 'x1 4 \2)
    (:load 'x1 4 'x2)
    (movdest 'x2 \2)))

;;;         hssize    arg1,arg  arg1 -> size[arg]

(defins HSSIZE
  (:load (prepsrc \2 'x2) 0 'x2)
  (:store (prepsrc \1 'x1) 4 'x2))

;;;         hgobj    arg,arg1   ptr[arg]  ->  arg1

(defins HGOBJ
  (:load (prepsrc \1 'x1) 0 'x1)
  (if (register? \2)
      (:load 'x1 0 \2)
    (:load 'x1 0 'x2)
    (movdest 'x2 \2)))

;;;         hsobj    arg1,arg  arg1 -> ptr[arg]

(defins HSOBJ
  (:load (prepsrc \2 'x2) 0 'x2)
  (:store (prepsrc \1 'x1) 0 'x2))

;;;         hblt  [startsource(\1) endsource(\2)[  ->  startdest(\3)

(defins HBLT
 ;; sur sun4, les adresses sont en octets!
 (movsrc \1 'x1)
 (movsrc \2 'x2)
 ["	sub    	" 'x2 , 'x1 , 'x2]
 ["	sra  	" 'x2 , "2" , 'x2]     ; pour passer en nb de mots (32 bits)
 (movsrc \3 'x3)
 (blitw 'x2 'x1 'x3 'x4))        ; transfert de mots

;;;         hbmovx val,string,index   val -> string[index]

(defins HBMOVX
 (cond ((13-bit-positive? \3)
	 ; index constant
	(:load (prepsrc \2 'x2) 0 'x2)
	(:store-char (prepsrc \1 'x1) (plus 8 (cadr \3)) 'x2))
       (t ; index calcule'
	 (movaheabix \2 \3 'x2)
	 (:store-char (prepsrc \1 'x1) 0 'x2))))

;;;         hbxmov string,index,val     string[index] -> val

(defins HBXMOV
 (movaheabix \1 \2 'x2)
 (if (register? \3)
     (:load-char 'x2 0 \3)
   (:load-char 'x2 0 'x1)
   (movdest 'x1 \3)))

;;;         hbmovm  size,stringsource,indexsource,stringdest,indexdest

(defins HBMOVM
 (movaheabix \2 \3 'x2)
 (movaheabix \4 \5 'x3)
 (movsrc \1 'x1)
 (blitb 'x1 'x2 'x3 'x4))

;;;         hbmovsm size,stringsource,indexsource,memdest

;;; This instruction is an extension useful for the fasl.  It allows one
;;; to blt the contents of a string directly into memory.

(putprop 'HBMOVSM 4 '#:llm3:narg)
(defins HBMOVSM
 (movaheabix \2 \3 'x2) ; put a pointer to the source in x2
 (movsrc \1 'x1)        ; the size
 (movsrc \4 'x3)
 (blitb 'x1 'x2 'x3 'x4))

;;;         hbteq taille string1 index1 string2 index2 label si vrai

(defins HBTEQ
  (movaheabix \2 \3 'x2)
  (movaheabix \4 \5 'x3)
  (movsrc \1 'x1)
  (align)
  ["	ba,a   	" "s" @]
  ["r" @ :]
  (:load-char 'x3 0 'x5)
  ["	cmp   	" 'x4 , 'x5 ]
  ["	bne  	" "n" @]
  (nop)
  ["	inc  	" 'x2 ]
  ["	inc  	" 'x3 ]
  ["s" @ : "	deccc  	" 'x1]
  ["	bge,a  	" "r" @] ; don't do the delay when the branch isn't taken
  (:load-char 'x2 0 'x4) ; delay slot
  (nop)
  ["	ba,a   	" \6]           ; si vrai
  (align)
  ["n" @ :])

;;;         hpmovx val,vector,index   val -> vector[index]

(defins HPMOVX
 (movaheapix \2 \3 'x2)
 (:store (prepsrc \1 'x1) 0 'x2))

;;;         bheap, cheap, eheap, last_obj_adr

(defins HOVNI
  (movsrc \1 'X1)
  (movsrc \2 'X2)
  (movsrc \3 'X3)
  (movsrc \4 'X4)
  (call-c-direct 'llovni 'X1 'X2 'X3 'X4))

;;;         hpxmov vector,index,val     vector[index] -> val

(defins HPXMOV
 (movaheapix \1 \2 'x2)
 (if (register? \3)
     (:load 'x2 0 \3)
   (:load 'x2 0 'x1)
   (movdest 'x1 \3)))

;;;         hpmovm size,vectorsource,indexsource,vectordest,indexdest

(defins HPMOVM
 (movaheapix \2 \3 'x2)
 (movaheapix \4 \5 'x3)
 (movsrc \1 'x1)
 (blitw 'x1 'x2 'x3 'x4))

;;; .SSection "comparaisons de pointeurs"

(defun cabxx (cond)
   ["	cmp	" (prepsrc \1 'x1) , (prepsrc \2 'x2)]
   ["	b" cond "	" \3]
   (nop)) ; another wasted delay slot \spade Use annul bit.

(defins CABEQ
 (cabxx "eq"))

(defins CABNE
 (cabxx "ne"))

(defins CHBLT (cabxx "lt"))

;;; .SSection "comparaisons arithme'tiques"

;;;         cnbxx  toujours sur 16 bits

(defun cnbxxieqn (cond)
  ;; 32 bit compare since both values are non sign-extended.
  ;; since = is commutative, we can change the arg order for immediates.
   (cond ((13-bit-positive? \1)
	   ["	cmp   	" (movsrc \2 'x2), \1 ]
	   ["	b" cond "	" \3]
	   (nop))
         ((13-bit-positive? \2)
	   ["	cmp    	" (movsrc \1 'x2), \2 ]
	   ["	b" cond "	" \3 ]
	   (nop))
         (t  ["	cmp   	"(prepsrc \1 'x1), (prepsrc \2 'x2) ]
	     ["	b" cond "	" \3 ]
	     (nop))))

(defun cnbxx (cond)
   ;; comparaison arithme'tique sur 16 bits signe's
   ;; on suppose que s'il y a une constante c'est en 2e`me ope'rande.
  (:extend (prepsrc \1 'x1) 'x1)
  (cond ((13-bit-immediate? \2)
          ["	cmp   	" 'x1 , (show-sign \2)]
          ["	b" cond "	" \3]
	  (nop))
	(t ; cas le plus long
	  (:extend (prepsrc \2 'x2) 'x2)
          ["	cmp    	" 'x1 ,'x2]
          ["	b" cond "	" \3]
	  (nop))))

(defins CNBEQ
 (cnbxxieqn "eq"))

(defins CNBNE
 (cnbxxieqn "ne"))

(defins CNBLT
 (cnbxx "lt"))

(defins CNBLE
 (cnbxx "le"))

(defins CNBGT
 (cnbxx "gt"))

(defins CNBGE
 (cnbxx "ge"))

;;; .SSection "les instructions arithme'tiques"

;;;         incr  arg1[,lab]                arg1+1 -> arg2
;;;         decr  arg1[,lab]                arg1-1 -> arg2
;;;         plus  arg1,arg2[,lab]           arg1 + arg2 -> arg2
;;;         diff  arg1,arg2[,lab]           arg2 - arg1 ->  arg2
;;;         negate   arg1                   -arg1  ->  arg1
;;;         times  arg1,arg2,[lab]          arg1 * arg2 -> arg2
;;;         quo  arg1,arg2                  arg2 / arg1 -> arg2
;;;         rem  arg1,arg2                  arg2 \ arg1 -> arg2

(defun convnb (reg)
   ;; repasse "reg" en format nombre.
   ;; retourne "reg"
   ["	and 	" reg , 'SHORT , reg ]
   reg)

(defun testovflint (reg arg)
   ;; si "arg" est pre'sent, teste si le contenu du registre "reg"
   ;; n'a pas deborde' sur 16 bits. si oui branchement a` "arg"
   (when (and arg (neq arg t))
	 (:extend reg 'x4)
         ["	cmp    	" 'x4 , reg]
         ["	bne  	" arg]
	 (nop)))

(defun movdestnb (reg arg)
   ;; range la valeur nume'rique dans "reg"
   ;; dans l'ope'rande "arg"
   (cond ((register? arg)
          ["	and	" reg , 'SHORT, arg])
	 ((symbolp arg)
	  ["	set	" arg "+2" , 'x5 ]
	  ["	sth	" reg , "[" 'x5 "]" ])
        (t ; cas le plus long
          (movdest (convnb reg) arg))))

(defun macaro1op (op 2nd)
   (cond ((register? \1)
	   (if (null \2)
	       ;; In LLM3 we are guaranteed that
	       ;; for INCR and DECR without label, we can avoid sign-extension.
	       ["	" op "	" 2nd , \1]
	       ; c'est un grand entier
	       (:extend \1 \1)
	       ["	" op "	" 2nd , \1]
	       (movsrc \1 'x3)  ; copy for the overflow test
	       (convnb \1)
	       (testovflint 'x3 \2)))
         (t  (movsrc \1 'x1)
             ["	" op "	" 2nd , 'x1]
	     (if \2 (movsrc 'x1 'x3)) ; save copy for the overflow test.
             (movdestnb 'x1 \1) ; must install the result, even if ovflw
             (testovflint 'x3 \2))))

(defun macaroaux (reg op)
   ;; fonction auxiliaire de ge'ne'ration des
   ;; instructions arithme'tiques : "reg" contient
   ;; le 2e`me ope'rande pre^t, "op" est l'ope'rateur
   ;; a` appliquer, \1 est le premier ope'rande.
   (cond ((13-bit-immediate? \1)
	  ; if it is an immediate use the 2 operand versions
	  ["	" op "	" reg, (show-sign \1) , reg])
         (t ; le cas plus de'favorable
	  (:extend (prepsrc \1 'x2) 'x2)
          ["	" op "	" reg , 'x2 , reg])))

(defun macaro2op (op)
   (cond ((register? \2)
	  (:extend \2 \2)
	  (macaroaux \2 op)
	  (if \3 (movsrc \2 'x3)) ; copy for the overflow test.
	  (convnb \2)
	  (testovflint 'x3 \3))
         (t
	  (:extend (prepsrc \2 'x1) 'x1)
	  (macaroaux 'x1 op)
	  (if \3 (movsrc 'x1 'x3)) ; copy for the overflow test
	  (movdestnb 'x1 \2)
	  (testovflint 'x3 \3))))

(defun movsrcnb (arg reg)
;; sign-extend arg into reg
  (:extend (prepsrc arg reg) reg)
  reg)

(defins INCR
 (macaro1op "inc" "1"))

(defins DECR
 (macaro1op "dec" "1"))

(defins PLUS
 (macaro2op "add"))

(defins DIFF
 (macaro2op "sub"))

(defins NEGATE
  (setq \2 t)
  ;; \\ macaro1op does the wrong size overflow check?
  (macaro1op "neg" (if (register? \1) \1 'x1)))
)

(defins TIMES
  (movsrcnb \2 'x2)
  (movsrcnb \1 'x1)
  (call-c-direct '.mul 'x1 'x2 () ())
  (movdestnb 'CRES \2)
  (testovflint 'CRES \3)
)

(defins QUO
 ;; LLM3 and C have opposite order of arguments!
  (movsrcnb \2 'x1)
  (movsrcnb \1 'x2)
  (call-c-direct '.div 'x1 'x2 () ())
  (movdestnb 'CRES \2)
  (testovflint 'CRES \3)
 )

(defins REM
  (movsrcnb \2 'x1)
  (movsrcnb \1 'x2)
  (call-c-direct '.rem 'x1 'x2 () ())  ; \spade make this call LL_REM
  (movdestnb 'CRES \2)
  )

;;; .SSection "les instructions arithme'tiques e'tendues"

(defun macswap (val argh argl)
   ;; convertit le contenu 32 bits du registre "val"
   ;; en 2 valeurs de 16 bits :
   ;; dans "argh" les poids forts, "argl" les poids faibles
   ["	mov 	" val , 'x2]            ; le temps du calcul
   ["	srl  	" 'x2 , "16" , 'x2] ; pre^t a` isoler les poids forts
   (movdestnb 'x2 argh)                ; doesn't need to do the convnb
   (movdestnb val argl)
   )               ; range les poids faibles.

;;;         eplus  arg1,arg2,arg3
;;;         arg1 <-  valeur sur 16 bits
;;;         arg2 <-  valeur sur 16 bits
;;;         arg3 <-  carry
;;;         arg4 ->  poids forts de arg1+arg2+arg3
;;;         arg5 ->  poids faibles de arg1+arg2+arg3

(defins EPLUS
 (movsrc \1 'x1)                 ; 1ere valeur (et accu)
 ["	add    	" 'x1 , (prepsrc \2 'x2) , 'x1] ; premie`re somme
 ["	add    	" 'x1 , (prepsrc \3 'x2) , 'x1] ; deuxie`me somme
 (macswap 'x1 \4 \5))

;;;         etimes  arg1,arg2,arg3,arg4,arg5,arg6
;;;         arg5 <-  poids forts de arg1*arg2+arg3+arg4
;;;         arg6 <-  poids faibles de arg1*arg2+arg3+arg4

(defins ETIMES
 (movsrc \2 'x1)
 (movsrc \1 'x2)
 (call-c-direct '.mul 'x1 'x2 () ())
 ["	add    	" 'x1 , (prepsrc \3 'x2) ,'x1] ; premie`re somme
 ["	add    	" 'x1 , (movsrc \4 'x2) , 'x1] ; deuxie`me somme, leaving the result
                 ;; in x1 since macswap uses x2.
 (macswap 'x1 \5 \6))

;;;         edivide    arg1,arg2,arg3,arg4,arg5
;;;         arg1 -> integer  poids forts de diviseur
;;;         arg2 -> b        poids faibles diviseur
;;;         arg3 -> b        dividende
;;;         arg4 <-  arg1-arg2 quo arg3
;;;         arg5 <-  arg1-arg2 rem arg3

(defins EDIVIDE
 (movsrc \1 'x1)                 ; 1ere valeur (et accu)
 ["	sll  	" 'x1 , "16" , 'x1]	; en position poids forts
 ["	or   	" 'x1 , (prepsrc \2 'x3) , 'x1]
 ;; \2 est le 2eme valeur sur 16 bits
 ;; x1 = diviseur sur 32 bits
 (movsrc \3 'x2)                 ; 3eme valeur(dividende) sur 16 bits
                                 ;; don't sign extend this!
 ["	set	equobuf" , 'x3]
 (call-c-direct 'equo 'x1 'x2 'x3 ())
 (movsrc 'equobuf 'x1)
 (movdest 'x1 \4)
 (movsrc 'equobuf2 'x1)
 (movdest 'x1 \5))

;;;         ecomp arg1,arg2,lab1,lab2,lab3
;;;         comparaison 16 bits! non signe'e!

(defins ECOMP
 (movsrc \1 'x1)                 ; 1er arg sur 16 bits
 (movsrc \2 'x2)                 ; 2e`me arg sur 16 bits
 ["	cmp    	" 'x1 , 'x2]
 ["	blt    	" \3] ; \spade Check how to cascade these
 (nop)
 ["	beq   	" \4]
 (nop)
 ["	ba,a   	" \5] 
 )

;;; .SSection "les instructions logiques"

;;;         lor arg1,arg2       arg1 or arg2  -> arg2
;;;         lxor arg1,arg2      arg1 xor arg2  -> arg2
;;;         land arg1,arg2      arg1 AND arg2  -> arg2
;;;         LSHIFT circ, arg   (LOGSHIFT arg circ) -> arg


(defun logop-aux (reg op)
   ;; fonction auxiliaire de ge'ne'ration des
   ;; instructions logiques : "reg" contient
   ;; le 2e`me ope'rande pre^t, "op" est l'ope'rateur
   ;; a` appliquer, \1 est le premier ope'rande.
  (if (13-bit-positive? \1)
      ["	" op "	" reg , \1 , reg]
      ["	" op "	" reg , (prepsrc \1 'x1) , reg]))

(defun logop-2op (op)
   (cond ((register? \2)
	   (logop-aux \2 op))
	 (t  (prepsrc \2 'X1)
             (logop-aux 'X1 op)
             (movdestnb 'X1 \2))))

(defins LOR
 (logop-2op "or"))

(defins LXOR
 (logop-2op "xor"))

(defins LAND
 (logop-2op "and"))

(defins LSHIFT
  (movsrc \2 'X1) ; ope'rande a` decaler 32b
  (:extend (prepsrc \1 'x2) 'x2)		; number of bits to shift
  ["	cmp  	" 'X2 , "0" ]
  ["	bge  	" "M" @]		; vers la mutiplication
  (nop) ; delay
  ["	neg 	" 'X2 , 'X2]		; le compte est positif
  ["	ba       R" @]			; vers le final
  ["	srl  	" 'X1 , 'X2 , 'X1]	; = a division in delay slot
  ["M" @ : "	sll  	" 'X1 , 'X2 , 'X1] ; = une multiplication
  ["R" @ :]				; se'quence commune
  (movdestnb 'X1 \2))			; recharge op2 avec 16 bits

;;; .SSection "Les Instructions sur les nombres flottants"

(defun testfloat ()
   ;; teste s'il reste de la place en zone flottante.
   ;; doit e^tre appele' avant les calculs flottants car les
   ;; registres de travail  X1/2/3/4 seraient perdus par le GC.
   (unless (pgetvalue '31BITFLOATS)
	   (extrn 'ffloat ".global")
	   (setq genlab ())
	   (movsrc 'ffloat 'X3)
	   ["	cmp   	" 'X3 , "0" ]
	   ["	bne	" @]
	   (nop)
	   (#:expand:jcall 'gcfloat)
	   [@ :]
	   ))

(defun storevalfloat (arg)
;;; \\ does nothing because there is no float free list with immediate floats
   ;; range la valeur flottante X1-X2 dans le flottant suivant,
   ;; et rangement de l'adresse de ce flottant dans l'arg "arg"
   ;; il en reste toujours au - 1! car (testfloat) a e'te' appele'.
   ;; bouzille tous les regitres de travail
   (unless (pgetvalue '31BITFLOATS)
	   ["	load 	" 'X3 ",ffloat,L"]      ; la liste libre des flottants
	   ["	load 	" 'X4 , 'X3]     ; X4 <- e'l'ement suivant de la liste
	   ["	st	" 'X4 ",ffloat,L"]      ; mise a` jour de ffloat
	   ;; pas de "	std  " car l'alignement 64 bits n'est pas respecte'!!
	   ["	st	" 'X1 , 'X3 ",4"]       ; poids forts
	   ["	st	" 'X2 , 'X3 ",8"]       ; poids faibles.
	   (movdest 'X3 arg)
	   ))

(defun sun4-makerd ()
  ;; turns a single float already in %rf0 into a double rep'n in %rf0 and %rf1
  ;; in 31bitfloats only
  (if (pgetvalue '31BITFLOATS)
      ["	fstod	" 'rf0 , 'rf0 ]))

(defun sun4-makerd2 ()
  ;; turns a single float already in %rf2 into a double rep'n in %rf2 and %rf3
  ;; in 31bitfloats only
  (if (pgetvalue '31BITFLOATS)
      ["	fstod	" 'rf2 , 'rf2 ]))

(defun makedr (dest)
  ;; takes the value of %f0 and %f1 (which represents a double float)
  ;; and creates its single representation in DEST.
  ["	fdtos	" 'rf0 , 'rf2 ]
  (rolfloat 'rf2 dest))
     
(defun instr2float (instr)
  ;;  floating point calculation using the logical floating ops.
  ;; note that the argument order is opposite for the sun4 float0ing point
  ;; instructions and for LLM3.
   (testfloat)
   (unrolfloat \1 'rf0)
   (unrolfloat \2 'rf2)
   ["	" instr "	" 'rf2 , 'rf0 , 'rf2]
   (rolfloat 'rf2 \2))

(defun unrolfloat (src dest)
   ;; decode a float into an IEEE float in dest.
  (let ((reg (movsrc src 'x1)))      ;; can't just be prep, because
                                     ;; we are going to modify it.
  (cond ((pgetvalue '31BITFLOATS)
	 ["	sll    	" reg , '1 ,  reg ]
	 (movdest reg dest))
	(t
	 (:floating-move reg dest)))))

(putprop 'UNROLLFLOAT 2 '#:llm3:narg)
(defins UNROLLFLOAT ; float1 float2
  ;; used to save the unrollfloat code in the lap.
  (unrolfloat \1 'rf1)
  (unrolfloat \2 'rf3))

(defun rolfloat (src dest)
  ;; take a real float (IEEE) and produce a Le-Lisp float in the
  ;; pseudo accumulator dest.
    (cond ((pgetvalue '31BITFLOATS)
	   (let ((reg (movsrc src 'x1)))
	   ["	srl    	" reg , '1 , reg]
	   ["	bset	" 'SIGNBIT , reg ]
	   (movdest reg dest)))
	  (t
	   (movsrc 'ffloat 'x4)
	   (:load 'x4 0 'x1)
	   (:store-double src 0 'x4)
	   (movdest 'x1 'ffloat)
	   (movdest 'x4 dest)
	   )))

(defun comp2float (operator)
   ;; call c to compare two floating point values
   (unrolfloat \1 'rf0)
   (unrolfloat \2 'rf2)
   (if (pgetvalue '31BITFLOATS)
       ["	fcmps	" 'rf0 , 'rf2];spade depends of floating type.
       ["	fcmpd	" 'rf0 , 'rf2]
       )
   (nop) ; it's a shame, but's it the rules.
   ["	fb" operator"    	" \3]
   (nop))

(defun sign-extend (src dest)
   ;; moves from src to the register dest with sign extended
   (let ((reg (prepsrc src dest)))
      (:extend reg dest)
	dest))

(defins FLOAT
   ;; convert a fix to a float
     (testfloat)
     (sign-extend \1 'x1) ; now we have a 32 bit integer
     (cond ((pgetvalue '31BITFLOATS)
	    (movsrc 'x1 'rf0)
	    ["	fitos	" 'rf0 , 'rf0])  ; make a single
	   (t
	    (:store 'x1 0 'RXFLOAT)
	    (:load  'RXFLOAT 0 'rf0)
	    ["	fitod	" 'rf0 , 'rf0])) ; make a double in rf0 , rf1
     (rolfloat 'rf0 \1))

(defins FIX
   ;; convert a float into a fix
  (cond ((pgetvalue '31BITFLOATS)
	 (unrolfloat \1 'x1)
	 (movsrc 'x1 'rf0)
	 ["	fstoi	" 'rf0 , 'rf0]
	 (movdestnb (movsrc 'rf0 'x1) \1))
	(t
	 (unrolfloat \1 'rf0)
	 ["	fdtoi	" 'rf0 , 'rf0]
	 (:store 'rf0 0 'RXFLOAT)
	 (:load  'RXFLOAT 0 'x1)
	 (movdestnb 'x1 \1))))

;;         CVFTOA    flt,strg, ret(size)
(defins CVFTOA 
  ;; convert a float to a string
  ;; a suspicion that cvstoa now blows up g4 in sunos 4.1.  We will save it 
  ;; away in call-c-direct
  (save-global-registers)
  (cond ((pgetvalue '31BITFLOATS)
	 (unrolfloat \1 'rf0) ; flottant 32bits
	 (sun4-makerd)        ; flottant 64bits danr rf0/rf1
	 (movaheap \2 'x3)
	 (call-c-direct 'llrt_cvftoa 'rf0 'rf1 'x3 ())
	 (movdest 'cres \3))
	(t
	 (:load \1 0 'x1)
	 (:load \1 4 'x2)
	 (movaheap \2 'x3)
	 (call-c-direct 'llrt_cvftoa  'x1 'x2 'x3 ())
	 (movdest 'cres \3)
	 ))
  (restore-global-registers))

;;;         CVATOF    adr,size, lab(si ovf), op

(defins CVATOF
 ;; convert an ascii string to a float
 (testfloat)
 (cond ((pgetvalue '31BITFLOATS)
	(movaheap \1 'X1)  ; \\ is it really ok to store a 0 at the end?
	(movsrc \2 'X3)
	["	add    	" 'X3 , 'X1 , 'X3]
	(:store-char '%g0 0 'x3)
	(call-c-direct 'llrt_cvatof 'X1 () () ())
	["	fdtos	" 'rf0 , 'rf0]   ; make a single in rf0
	(rolfloat 'rf0 \4))
       (t
	(movaheap \1 'X1)
	(movsrc \2 'X3)
	["	add    	" 'X3 , 'X1 , 'X3]
	(:store-char '%g0 0 'x3)
	(call-c-direct 'llrt_cvatof 'X1 () () ())
	(rolfloat 'rf0 \4)
	)))

(defins FPLUS
 (instr2float (if (pgetvalue '31BITFLOATS) "fadds" "faddd")))

(defins FDIFF
 (instr2float (if (pgetvalue '31BITFLOATS) "fsubs" "fsubd")))

(defins FTIMES
 (instr2float (if (pgetvalue '31BITFLOATS) "fmuls" "fmuld")))

(defins FQUO
 (instr2float (if (pgetvalue '31BITFLOATS) "fdivs" "fdivd")))

(defins CFBEQ
 (comp2float "e"))

(defins CFBNE
 (comp2float "ne"))

(defins CFBLT
 (comp2float "l"))

(defins CFBLE
 (comp2float "le"))

(defins CFBGT
 (comp2float "g"))

(defins CFBGE
 (comp2float "ge"))

;;;      SIN/COS .....  arg1,arg2,lab (si erreur ou overflow)

(defun macflmath (arg)
  (testfloat)
  (cond ((pgetvalue '31BITFLOATS)
	 (unrolfloat \1 'rf0) ; 31bitfloats
	 (sun4-makerd)        ; 64bitfloats in rf0/rf1
	 (call-c-direct arg 'rf0 'rf1 () ())
	 ["	fdtos	" 'rf0 , 'rf0]   ; make a single in rf0
	 (rolfloat 'rf0 \2))
	(t
	 ;(#:expand:lisp_reg_sav)
	 ["	ld	" "[" \1 "+0]" , 'x1]
	 ["	ld	" "[" \1 "+4]" , 'x2]
	 (call-c-direct arg 'x1 'x2 () ())
	 ;(#:expand:lisp_reg_res)
	 (rolfloat 'rf0 \2)
 )))

(defins SIN  (macflmath 'llrt_sin))

(defins COS (macflmath 'llrt_cos))

(defins ASIN (macflmath 'llrt_asin))

(defins ACOS (macflmath 'llrt_acos))

(defins ATAN (macflmath 'llrt_atan))

(defins EXP (macflmath 'llrt_exp))

(defins LOG (macflmath 'llrt_log))

(defins LOG10 (macflmath 'llrt_log10))

(defins SQRT (macflmath 'llrt_sqrt))

(defins POWER
 ;; because power is a bit odd (having 3 arguments) we do it
 ;; separately. (a la instr2float)
(testfloat)
(cond ((pgetvalue '31BITFLOATS)
       (unrolfloat \1 'rf0)
       (sun4-makerd)
       (unrolfloat \2 'rf2)
       (sun4-makerd2)
       (call-c-direct 'llrt_power 'rf0 'rf1 'rf2 'rf3)
       ["	fdtos	" 'rf0 , 'rf0]   ; make a single in rf0
       (rolfloat 'rf0 \3))
      (t
       ;(#:expand:lisp_reg_sav)
       ["	ld	" "[" \1 "+0]" , 'x1]
       ["	ld	" "[" \1 "+4]" , 'x2]
       ["	ld	" "[" \2 "+0]" , 'x3]
       ["	ld	" "[" \2 "+4]" , 'x4]
       (call-c-direct 'llrt_power 'x1 'x2 'x3 'x4)
       ;(#:expand:lisp_reg_res)
       (rolfloat 'rf0 \3) )))

;;; .SSection "CONStructions des cellules de liste"

;;;         SFCONS arg          arg -> FCONS
;;;         GFCONS arg          FCONS -> arg
;;;         NCONS car           car <- (car)
;;;         XCONS cdr,car       car <- (car . cdr)
;;;         CONS car,cdr        cdr <- (car .cdr)
;;;         BTOLD op,lab
;;;         GCFLIP

(defins SFCONS
  (#:expand:mov \1 'fcons))

(defins GFCONS
 (movdest (prepsrc 'fcons 'X1) \1))

(defvar cons-register 'FCONS)

(defun testcons ()
   ;; changed to allow fcons in a register.
   ;; charge dans cons-register l'adresse du CONS suivant,
   ;; appel le GCCONS si besoin.
   (extrn 'fcons ".global") 
;;;   (movsrc 'fcons 'x4)  ; uncom

   ["	cmp    	" 'KNIL , cons-register ]
   ["	bne    	" @]
   (nop)
   (#:expand:jcall 'gccons)
   (#:expand:mov 'fcons 'X4) ; uncom
   [@ :])

(defins NCONS
 (testcons)
 (unless (register? \1) 
	  (error 'NCONS \1 \1))
 (:store \1 (getvalue 'CAR) cons-register)
 (movsrc cons-register \1)
 (:load cons-register (getvalue 'CDR) cons-register)
;; (movdest cons-register 'fcons) ; uncom
 (:store 'knil (getvalue 'CDR) \1))

(defins XCONS
 (testcons)
 (unless (register? \2)
	  (error 'XCONS \1 \2))
 (:store \2 (getvalue 'car) cons-register)
 (movsrc cons-register \2)
 (:load cons-register (getvalue 'cdr) cons-register)
;; (movdest cons-register 'fcons) ; uncom
 (:store (prepsrc \1 'x1) 'cdr \2))

(defins CONS
 (testcons)
 (:store (prepsrc \1 'x1) (getvalue 'car) cons-register)
 (movsrc cons-register 'x3)
 (:load cons-register (getvalue 'cdr) cons-register)
;; (movdest cons-register 'fcons) ; uncom
 (cond ((register? \2)
	(:store \2 (getvalue 'cdr) 'x3)
	(movdest 'x3 \2))
       (t (movsrc \2 'X1)
	  (:store 'x1 (getvalue 'cdr) 'x3)
	  (movdest 'X3 \2)))))

(defins BTOLD   ["	nop"])
(defins GCFLIP  ["	nop"])

;;; .SSection "Gestion des caracte`res"

;;;         UPPERC op
;;;         LOWERC op

(defins UPPERC
 (setq \2 \1 \1 '(|#| 32) \3 nil)
 (macaro2op "sub"))

(defins LOWERC
 (setq \2 \1 \1 '(|#| 32) \3 nil)
 (macaro2op "add"))

;;; .SSection "Gestion des symboles"

;;;         FENTRY nom,type     declaration d'un point d'entree
;;;         reserve un mot de type .XXX qui contiendra l'adresse
;;;         du symbole XXX, prepare l'adresse de la fonction XXX
;;;         de type XDEF et prepare le ftype ._XXX

(defins FENTRY
  [ ]
  ["!" ]
  ["!	FENTRY	" \1 ]
  ["!" ]
  (data)
  (alignd)
  ["." \1 :"	.word    0"]
  ["	._" \1 " = " \2]
  (text)
  (alignfn)
  (extrn \1 ".global")
  [\1 :])

;;;         MAKFNT nom,plen,pname

(defins MAKFNT
  (data)
  (alignd)
  ["p" @ : ]
  (allocate-string \3)
  (text)
  ["b" @ :] 
  ["	set	" \2 , 'A1]         ; A1 le plen
  ["	set	" "p"@ , 'A2]       ; A2 le pnam
  (prepsrc `(|@| ,\1) 'A3)         ; A3 la fval
  ["	set	" 'trash ,  'A4]    ; junk fval since inisymb
  ;; presumes that  .foo must indirect to the symbol and will store in
  ;; 
  ["	set	"  "._" \1 , 'X1]      ; le FTYPE (cf FENTRY)
  (#:expand:PUSH 'X1)
  (#:expand:call "inisymb")
 )

;;;         MAKCST    nom,plen,pname

(defins MAKCST
  (data)
  (alignd)
 ["p" @ :]
  (allocate-string \3)
  (text)
 ["b" @ :]
  ["	set 	" \2 , 'A1] ; A1 le plen
  ["	set	" "p"@ (label-reference) , 'A2]
  (symbol-reference (concat '|.| \1)) ; to provoke an error if this symbol
  ;; has no getvalsymb
  (#:expand:mov (concat '|.| \1) 'A3)
  (#:expand:call "inicst"))

;;; .SSection "Les Instructions pour le G.C."

(defun calcmark (table base object)
  ;; calcule dans X1 l'adresse du mot de la table
  ;;         dans X2 le nume'ro du bit de ce mot
  ;;         dans X3 le mot de cette table
  ;; and now leaves the word offset for this object in X4, so that
  ;; in SWPCONS, the offset is only determined once for the TCMARK,
  ;; and the clear invisible.
   ["	sub	" (prepsrc object 'X3)	; adresse de l'objet
                , (prepsrc base 'X4) , 'X3]
   ;; adress - base (offset) now in X3 
   ["	srl	" 'X3 , "3" , 'X3]	; X3 <- nume'ro absolu de l'objet
   ;; divided by 8 for the size of the object
   ["	and	" 'X3 , "31" , 'X2]	; masque sur 5 bits
   ;; X2 <- nume'ro du bit dans le mot
   ["	srl	" 'X3 , "5" , 'X3]	; X3 <- index de mot dans table
   ["	sll	" 'X3 , "2" , 'X4]	; adresse mot  : 2 0s a` droite.
   ["	add	" (prepsrc table 'X1)	; adresse de la table
                 , 'X4 , 'X1]		; X1 <- ad du mot a` lire dans la table
   (:load 'X1 0 'X3))			; X3 <- le mot de la table

;;;         BTMARK reg,lab        saut a 'lab' si 'e' est deja marque

(defun 31bitfloatsjump ()
  ;; Jump to @ if this image is being generated with 31 bit floats.
  ;; Reset the label name so that macros all have different labels.
  (setq genlab ())
  (cond ((pgetvalue '31BITFLOATS)
	 ["	cmp	" \1 , '0]
	 ["	bl	"	@]
	 (nop)) ))

(defins BTMARK
  (31bitfloatsjump)
  (calcmark 'btbgc 'BNUMB \1)
  ["	srl 	" 'X3 , 'X2 , 'X3]
  ["	andcc	" 'X3 , '1 , 'X3]
  ["	bne  	" \2]
  (nop)
  [@ ":"])

;;;         BFMARK e,lab        saut a` "lab" si "e" n'est pas de'ja` marque'

(defins BFMARK
  (31bitfloatsjump)
  (calcmark 'btbgc 'BNUMB \1)
  ["	srl 	" 'X3 , 'X2 , 'X3]
  ["	andcc	" 'X3 , '1 , 'X3]
  ["	beq  	" \2]
  (nop)
  [@ ":"])

;;;         STMARK e            marque l'objet e

(defins STMARK
  (31bitfloatsjump)
  (calcmark 'btbgc 'BNUMB \1)
  (set-bit 'x3 'x2)
  (:store 'x3 0 'x1)
  [@ ":"])

;;;         TCMARK e,lab        test si e est marque :
;;;                             si non ne fait rien
;;;                             si oui enleve la marque et branche a 'lab'

(defins TCMARK
  (31bitfloatsjump)
  (calcmark 'btbgc 'BNUMB \1)
  ["	srl 	" 'X3 , 'X2 , 'X4]
  ["	andcc	" 'X4 , "1" , 'X4]
  ["	beq  	" @]
  (nop)
  (clear-bit 'x3 'x2)
  (:store 'x3 0 'x1)
  ["	ba,a    	" \2]
  (nop)					; \spade check necessity
  [@ ":"])

(defun clear-bit (value bit-to-clear)
  (movsrc '(|#| 1) 'X4)
  ["	sll	" 'x4 , bit-to-clear , 'x4] ; calculate the mask
  ["	andn	" value , 'x4 , value]) ; clear the bit

(defun set-bit (value bit-to-clear)
  (movsrc '(|#| 1) 'X4)
  ["	sll	" 'x4 , bit-to-clear , 'x4] ; calculate the mask
  ["	or	" value , 'x4 , value]) ; set the bit


;;; .SSection "Les Instructions de manipulation du bit invisible"

(defun maccompinv ()
  (calcmark 'btbin 'RBCONS \1))

(defins STINVSBL
 (maccompinv)
 (set-bit 'x3 'x2)
 (:store 'x3 0 'x1)
 ) 

(defins CLINVSBL
 (maccompinv)
 (clear-bit 'x3 'x2)
 (:store 'x3 0 'x1)
 ) 

(defins BTINVSBL
 (maccompinv)
 ["	srl 	" 'X3 , 'X2 , 'X3]
 ["	andcc	" 'X3 , "1" , 'X3]
 ["	bne  	" \2]
 (nop)
 ) 

(defins BFINVSBL
  (maccompinv)
  ["	srl 	" 'X3 , 'X2 , 'X3]
  ["	andcc	" 'X3 , "1" , 'X3]
  ["	beq  	" \2]
  (nop)
  )

;;; .SSection "Pour avancer dans les zones et compter"

(defins CONVTOK
  (movsrc   \1 'X1)
  (movsrc   \2 'X2)
  ["	sub    	" 'X2 , 'X1 , 'X2]
  ["	mov	" 'X2 , 'X3] ; tempo
  ["	and	" 'X3, '1023, 'X3]            ; units <= 1024
  ["	srl  	" 'X2 ",10" , 'X2]
  (movdest 'X3 \4)
  (movdest 'X2 \3))

(defun nxxx (incr borne)
  ["	inc 	" incr , \1 ]
  ["	cmp    	" \1 , (prepsrc borne 'X2)]
  ["	blt  	" \2]
  (nop))

(defins NXNUMB
  (nxxx 4  'RBFLOAT))

(defins NXFLOAT
  (unless (pgetvalue '31bitfloats) (nxxx 8 'RBVECT)))

(defins NXVECT
  (nxxx 8  'RBSTRG))

(defins NXSTRG
  (nxxx 8  'RBSYMB))

(defins NXSYMB
  (nxxx 'FINSYMB 'RBCONS))

(defins NXCONS
  (extrn 'econs ".global")
  (nxxx 8 'econs))

;;; .SSection "Les Instructions d'entre'es/sorties"

;;;         Gestion du canal terminal
;;;         -------------------------

;;;         TTYIN  arg1   caractere -> arg1

(defins TTYIN
  ["b" @ :]
  (#:expand:intest)
  (call-c-direct 'ttyin () () () ())
  ;; if the returned character is -1, then there was an interrupt during
  ;; the read.  ttyin has some problems restarting the read himself
  ;; so we recall it.
  ["	cmp    	" 'X1 , "0xff"] ; return ((unsigned char) -1) from ttyin
  ["	beq    	" "b" @]
  (movdest 'X1 \1))

;;;         TTYIS   arg1,cc     cc=0 si arg1 est charge  sinon cc<>0

(defins TTYIS
  (data)
 ["charttys:      .byte   0"]
  (text)
  ["	set	" "charttys" , 'X1 ]
  (movsrc 'x1 'x3)
  (call-c-direct 'ttys 'X1 () () ())
  (:load-char 'x3 0 'x2)
  (movdest 'X2 \1)
  (movdest 'CRES \2))

;;; 	  TTYINSTR max,strg,count
;;; 	    lit une ligne sans echo ni fin de ligne dans strg
;;; 	  max = nb max. de car. lus
;;; 	  count = nb de car. lus

(defins TTYINSTR
 (movaheap \1 'X1 'X2)                       ; adresse
 (call-c-direct 'ttyinstr 'X1 'X2 () ())
 (movdest 'X1 \2))

;;;         TTYSTRG taille,strg      sort la chaine Lisp

(defins TTYSTRG
 (movsrc \1 'X1)                         ; la taille
 (movaheap \2 'X2)                       ; adresse
 (call-c-direct 'ttyout 'X1 'X2 () ()))

;;;         TTYMSG      len,"chaine"	sort le message (ope'rande imme'diat)

(defins TTYMSG
  (let ((slab (concat "s" (#:expand:genlab)))) ; label has to be a symbol
    #+:debug(if (neq (cadr \1) (slen (cadr \2)))
	       (error 'ttymsg "wrong length" (cadr \2)))
    (data)
    (alignd)
    [slab : "	.asciz	" \2]
    (text)
    (call-c-direct 'ttyout `(|#| ,(slen (cadr \2))) `(|%| ,slab) () ())))


;;;         TTYCRLF             retour chariot dans MSG

(defins TTYCRLF
 (call-c-direct 'ttycrlf () () () ()))

;;;         Gestion des fichiers
;;;         --------------------

;;;         INFILE    canal,strg,cc       ouverture d'un fichier d'entree
;;;         OUFILE    chan,strg,cc        ouverture d'un fichier de sortie
;;;         AFFILE    chan,strg,cc        ouverture d'un fichier en ajout

(defun macofile (sub)
   (movsrc \1 'X1)
   (movaheap \2 'X2)
   (call-c-direct sub 'X1 'X2 () ())
   (movdest 'X1 \3)
   )

(defins INFILE (macofile 'infile))
(defins OUFILE (macofile 'oufile))
(defins APFILE (macofile 'apfile))

(defins INFILEB (macofile 'infile))
(defins OUFILEB (macofile 'oufile))
(defins APFILEB (macofile 'apfile))

;;;         INBF chan,strg,siz,cc    lecture de la ligne suivante sur fichier

(defins INBF
      (movsrc \1 'X1)
      (movaheap \2 'X2)
      (movsrc '(|%| ll_ncars) 'x3)
      (call-c-direct 'inbf 'X1 'X2 'X3 nil)
      (movdest 'X1 \4)
      (movsrc 'll_ncars \3)
 )

(defins INBFB
      (movsrc '(|%| ll_ncars) 'x3)
      (movsrc \1 'X1)
      (movaheap \2 'X2)
      (call-c-direct 'inbfb 'X1 'X2 'X3 nil)
      (movdest 'X1 \4)
      (movsrc 'll_ncars \3)
)

;;;         OUTF      chan,strg,size,cc
;;;         envoie sur le canal 'chan' une chaine 'strg' de taille 'size'
;;;         et envoie une fin de ligne. 
;;;         Retourne le 'cc'

(defins OUTF
 (movsrc \1 'X1)
 (movaheap \2 'X3)
 (movsrc \3 'X2)
 (call-c-direct 'outf 'X1 'X2 'X3 nil)
 (movdest 'X1 \4)
)

;;;         OUTFL     chan,strg,size,cc
;;;         envoie sur le canal 'chan' une chaine 'strg' de taille 'size'
;;;         sans rajouter de marque fin de ligne. 
;;;         Retourne le 'cc'

(defins OUTFL
 (movsrc \1 'X1)
 (movaheap \2 'X3)
 (movsrc \3 'X2)
 (call-c-direct 'outfl 'X1 'X2 'X3 nil)
 (movdest 'X1 \4)
)

(defins OUTFLB
 (movsrc \1 'X1)
 (movaheap \2 'X3)
 (movsrc \3 'X2)
 (call-c-direct 'outfl 'X1 'X2 'X3 nil)
 (movdest 'X1 \4)
 )

;;;         FCLOS ch,cc            ferme le canal ch

(defins FCLOS
 (movsrc \1 'X1)
 (call-c-direct 'fclos 'X1 () () ())
 (movdest 'X1 \2))

;;;         FDELE strg,cc           detruit le fichier fil

(defins FDELE
 (movaheap \1 'X1)
 (call-c-direct 'fdele 'X1 () () ())
 (movdest 'X1 \2))

;;;         FRENA strg1,strg2,cc       renomme un fichier
;;;         old new!

(defins FRENA
 (movaheap \1 'X1)
 (movaheap \2 'X2)
 (call-c-direct 'frena 'X1 'X2 () () )
 (movdest 'X1 \3))

;;;         FCOPY strg1,strg2,cc       copy un fichier
;;;         file newfile!

(defins FCOPY
 (movaheap \1 'X1)
 (movaheap \2 'X2)
 (call-c-direct 'fcopy 'X1 'X2 () () )
 (movdest 'X1 \3))

;;          MKDIR  path,cc          creation d'un repertoire.

(defins MKDIR
 (movaheap \1 'X1)
 (call-c-direct 'llmkdir 'X1 () () ())
 (movdest 'X1 \2))

;;          RMDIR  path,cc          suppression  d'un repertoire.

(defins RMDIR
 (movaheap \1 'X1)
 (call-c-direct 'llrmdir 'X1 () () ())
 (movdest 'X1 \2))

;;;         FPROBE strg,cc          teste l'existence d'un fichier

(defins FPROBE
 (movaheap \1 'X1)
 (call-c-direct 'fprobe 'X1 () () ())
 (movdest 'X1 \2))

;;;         CORSAV strg,cc      sauve une image memoire

(defins CORSAV
 (movaheap \1 'X1)
 (extrn 'll_corsav ".global")
 (ll-call 'll_corsav)
 (movdest 'X1 \2))

;;;         COREST strg,cc      restaure une image memoire

(defins COREST
 (movaheap \1 'X1)
 (extrn 'll_corest ".global")
 (ll-call 'll_corest)
 (movdest 'X1 \2))

;;; .SSection "Les Instructions de manipulation me'moire"

;;;         HLADR   h,l,result   h,l -> result
;;;         ADRHL   adr,h,l      high adr -> h, low adr -> l
;;;         MEMSET  arg1,arg2      arg1 -> MEM(arg2)
;;;         MEMGET  arg1,arg2      MEM(arg1) -> arg2
;;;         MEMMOVM 

(defins HLADR
 (movsrc \1 'X1)                 ; 1ere valeur (et accu)
 (movsrc \2 'X2)                 ; 2eme valeur sur 16 bits
 ["	sll 	" 'x1 , "16" , 'X1 ]     
 ["	or    	" 'X1 , 'X2 , 'X1]    ; H L
 (movdest 'X1 \3))               ; bien range's

(defins ADRHL
 (movsrc \1 'X1)                 ; la val sur 32 bits
 (macswap 'X1 \2 \3))

(defins MEMSET
  (:store-half (prepsrc \1 'X1) 0  (prepsrc \2 'X2)))

(defins MEMGET
  (:load-half (prepsrc \1 'X1) 0 'X1)
  (movdestnb 'X1 \2)) ; \spade destnb is overkill no?

(defins MEMMOVM ; A FAIRE ?!?!?
 )

;;; .SSection "Les fonctions syste`me"

;;;         CLINE   <strg>     envoie une chaine au system

(defins CLINE
 (movaheap \1 'X1)
 (call-c-direct 'cline 'X1 () () ()))

;;;         RUNTIME arg  retourne le runtime

(defins RUNTIME
 (testfloat)
 (call-c-direct 'runtime () () () ())
 (if (pgetvalue '31BITFLOATS)
     (makedr \1)
     (unless (eq \1 'X1) ["	mov	" \1, 'X1]) ;!!!
     (rolfloat 'rf0 \1)))

;;         SLEEP  arg  dort un coup
;; \\ needs to follow double rules
(defins SLEEP
  (cond ((pgetvalue '31BITFLOATS)
	 (unrolfloat \1 'rf0)
	 (sun4-makerd)
	 (call-c-direct 'cdleep 'rf0 'rf1 () ()))
	(t
	 ["	ld	" "[" \1 "+0]" , 'x1]
	 ["	ld	" "[" \1 "+4]" , 'x2]
	 (call-c-direct 'cdleep 'x1 'x2 () ())
	 )))

;;;         DATE op (op est n vecteur de 8 e'le'ments!)
;;;         Attention les effets de bords!

(defins DATE
  (cond ((pgetvalue '31BITFLOATS)
	 (movaheap \1 'X1)
	 (call-c-direct 'cdate 'X1 () () ()))
	(t
	 (movaheap \1 'X1)
	 (call-c-direct 'cdate 'X1 () () ())
	 )))


;;;         INTEST     scrute les ITs

(defins INTEST
   ["	cmp     " (prepsrc 'ITCOUNT 'X1) , "0" ]
   ["	beq    	" @]
   (nop) ; delay
   (#:expand:call 'ithard)
   [@ ":"]
 )

;;;         SETALARM  op met op dans le timer

(defins SETALARM
  (cond ((pgetvalue '31BITFLOATS)
	 (unrolfloat \1 'rf0)
	 (sun4-makerd)
	 (call-c-direct 'setalarm 'rf0 'rf1 () ()))
	(t
	 ["	ld	" "[" \1 "+0]" , 'x1]
	 ["	ld	" "[" \1 "+4]" , 'x2]
	 (call-c-direct  'setalarm 'x1 'x2 () ())
 )))

;;;         GETENVRN   strg, buffstrg, size

(defins GETENVRN
 (movaheap \1 'X1)
 (movaheap \2 'X2)
 (call-c-direct 'getenvrn 'X1 'X2 () ())
 (movdest 'X1 \3))

;;;         GETGLOBAL   <strg>,val

(defins GETGLOBAL
 (movaheap \1 'X1)
 (call-c-direct 'getgloba 'X1 () () ())
 (movdest 'X1 \2))

(putprop 'FLTSTRING 0 '#:llm3:narg)
(definstruct FLTSTRING ()
  ["fltstring:	.asciz ""2."" "])

;;; Access to Frame Local variables
(putprop 'MOVXFP 2 '#:llm3:narg)
(definstruct MOVXFP (source offset)
  ;; stores SOURCE into the frame local variable OFFSET.
  (if (11-bit-positive? offset)
      (:store (prepsrc source 'x1)
	      (sub *frame-size* (times 4 (add (cadr offset) 1))) 'csp)
     (movsrc offset 'x2)
     ["	sll  	" 'x2 , "2" , 'x2]            
     ["	sub    	" 'csp , 'x2 , 'x2]
     (:store (prepsrc source 'x1) *frame-size* 'x2)))

(putprop 'XFPMOV 2 '#:llm3:narg)
(definstruct XFPMOV (offset dest)
  (cond ((11-bit-positive? offset)
	 (if (register? dest)
	     (:load 'csp (sub *frame-size* (mul 4 (add  (cadr offset) 1))) dest)
	   (:load 'csp (sub *frame-size* (mul 4 (add  (cadr offset) 1))) 'x2)
	   (movdest 'x2 dest)))
	(t (movsrc offset 'x1)
	   ["	sll 	" 'x1 , "2" , 'x1]            
	   ["	sub    	" 'csp , 'x1 , 'x1]
	   (if (register? dest)
	       (:load 'x1 *frame-size* dest)
	     (:load 'x1 0 'x2)
	     (movdest 'x2 dest)))))

;;;         CBOUCLE
(putprop 'CBOUCLE 0 '#:llm3:narg)
(definstruct CBOUCLE ()
  (call-c-direct 'cboucle () () () ()))

;;;         CALLG     narg,valret!  contient le nb d'arguments.

(defins CALLG
       (#:expand:push \1)
       (extrn 'll_callg ".global")
	(ll-call 'll_callg)
       (movdest (prepsrc 'CALLREG0 'X1) \2))

(putprop 'CALLR 1 '#:llm3:narg)
(defins CALLR
  ["	call	" \1 ]
  (nop))

;;; An fcall pushes nothing on the stack. LR must be undisturbed during
;;; the call.
(putprop 'FCALL 1 '#:llm3:narg)
(definstruct FCALL (adr)
  ["	call	" adr]
  (nop))

(putprop 'FRETURN 0 '#:llm3:narg)
(definstruct FRETURN ()
  ["	jmp	" 'lr "+" (times 2 BYTESPERWORD)]
  (nop))
  
;;; ONSTACK <fin exclu>,<taille>
(putprop 'ONSTACK 2 '#:llm3:narg)
(defins ONSTACK
   ; move <taille> words from <fin exclu> onto the stack (in preparation 
   ; for a funcall
   (movsrc \1 'a4) 
   (movsrc \2 'a1)	; counter
   (movsrc 'a1 'a2)
   ["	sll	" 'a2 , "2" , 'a2] ; size in bytes
   ["	sub	" 'a4 , 'a2 , 'a4] ; end of the source
   ["	sub	" 'sp , 'a2 , 'sp] ; alloc room for the args
   (movsrc 'sp 'a3)
   ["	ba,a	L" @]
   [@ ": "]
   (:load 'a4 0 'a2)
   (:store 'a2 0 'a3)
   ["	inc	" "4" , 'a4]
   ["	inc	" "4" , 'a3]
   ["L" @ ":"]
   ["	subcc	" 'a1 , "1" ,'a1]
   ["	bge	" @]
   (nop)
   ["D" @ ": "]    )

(putprop 'MOVARGS 2 '#:llm3:narg)
(defins MOVARGS
   (movsrc \1 'a4)			; lowest addr of table
   (movsrc \2 'a1)			; total number of args
   (movsrc 'a1 'a2)
   (movsrc '(|#| 0) 'a5)		; base
   ["	sll	" 'a2 , "2" ,'a2]	; size in bytes
   ["	sub	" 'a4 , 'a2 , 'a4]	; end of the source
   ;;
   ;; outgoing parameters, first arg at bottom (lowest addr)
   ;;
   (:load 'a4  0 'x1)
   (:load 'a4  4 'x2)
   (:load 'a4  8 'x3)
   (:load 'a4 12 'x4)
   (:load 'a4 16 'x5)
   (:load 'a4 20 'x6)
   ["	subcc	" 'a1 , "6" , 'a1]	; the first 6 args went in registers
   ["	ble	D" @]
   ["	add	" 'a4 , "24", 'a4]	; skip up over the args already used.
   ["	add	" 'csp , "23*4" , 'a3]	; end of the destination
   ["	ba,a	L" @]
   [@ ": "]
   (:load 'a4 'a5 'a2)
   (:store 'a2 'a5 'a3)
   ["	inc	" "4" , 'a5]		; move up to the previous arg
   ["L" @ ":"]
   ["	subcc	" 'a1 , "1" , 'a1]
   ["	bge,a	" @]
   (nop)
   ["D" @ ": "]
 )
;;; .Section "De'finitions spe'ciales"

;;; Toutes ces de'finitions ne sont utilise'es que pour le
;;; fichier d'interface entre C et LLM3 : llsun4.llm3

(putprop 'RET 2 '#:llm3:narg)
;; this return biases the stack address by 8 bytes.
(defins  RET  ["	ret  	" \1 , \2]) 

(putprop 'SUN4CALL 1 '#:llm3:narg)
(defins  SUN4CALL
   ["	call 	" \1 ]
   (nop))

;;; used after interrupt calls once all registers have been restored.
(putprop 'SUN4-RETURN 0 '#:llm3:narg)
(defins SUN4-RETURN
  ["	ret 	"] ; this means that we don't explicitly call reg_res_all
  ["	restore	"] )

(putprop 'LEAF-RETURN 0 '#:llm3:narg)
(defins LEAF-RETURN
  ["	retl 	"] ; this doesn't touch the CWP.
  (nop))

(putprop 'CPROCBEGIN 2 '#:llm3:narg)
(defins  CPROCBEGIN
 ;; fabrication d'un block de contro^le a` la C
 ;; Alloue \1 variables locales de taille 1 mot
 ;; Alloue \2 emplacements pour stocker les parame`tres des fn appele'es
 ;;    ["	st   r11,r14,0"]
 ;;    ["	st   r15,r14,8"]
 ;;    ["	move    r15,r14"]
 ;;    (unless (and (eq '|#| (car \1)) (fixp (cadr \1))
 ;;                 (eq '|#| (car \2)) (fixp (cadr \2)))
 ;;            (error 'CPROCBEGIN "pas des FIX"))
 ;;    (setq \1 (cadr \1) \2 (cadr \2))
 ;;    ["	laddr   r14,r14,-" (mul 8 (+ 4 (quo (+ 1 \1) 2) \2 3)) ",L"]
 )

(putprop 'CPROCEND 0 '#:llm3:narg)
(defins  CPROCEND
 ;; fin de proce'dure a` la C
 ;;         ["	load    r11,r15,0"]
 ;;         ["	move    r14,r15"]
 ;;         ["	load    r15,r15,8"]
 ;;         ["	ret     r11,r11"]
 )

(putprop 'ARGMOV 2 '#:llm3:narg)
(defins ARGMOV
 ;; lit l'argument C de nume'ro \1 dans \2
 ;;    (cond ((register? \2)
 ;;           ["	load  	" \2 ",r15,24+8*" \1 ",L"])
 ;;          (t
 ;;           ["	load  	" 'X1 ",r15,24+8*" \1 ",L"]
 ;;           (movdest 'X1 \2)))
 )


(putprop 'MOVLOC 2 '#:llm3:narg)
(defins MOVLOC
 ;; met \1 dans la locale nume'ro \2
 ;;    ["	st  	" (prepsrc \1 'X1) ",r15,-(36+4*" \2 "),L"]
 )

(putprop 'LOCMOV 2 '#:llm3:narg)
(defins LOCMOV
 ;; lit la locale nume'ro \1 dans \2
 ;;    (cond ((register? \2)		
 ;;           ["	load  	" \2 ",r15,-(36+4*" \1 "),L"])
 ;;          (t
 ;;           ["	load  	" 'X1 ",r15,-(36+4*" \1 "),L"]
 ;;           (movdest 'X1 \2)))
 )

(defvalue LOCFRAMEC 0)
(defvalue LOCTYP    1)
(defvalue LOCSPLISP 2)

(putprop 'C_CALL '(1 2 3 4 5) '#:llm3:narg)
(defins  C_CALL (call-c-direct \1 \2 \3 \4 \5))

;;; for llsun4.llm3

(putprop 'RAW_C_CALL '(1 2 3 4 5) '#:llm3:narg)
(defins  RAW_C_CALL (call-c-raw \1 \2 \3 \4 \5))

(defun call-c-raw (adr arg1 arg2 arg3 arg4)
;;; like call-c-direct except used in the case of corest
;;; when no registers should be restored. (not the same
;;; contents of lisp stack on exit)
   (when arg4 (movsrc arg4 'x4)) 
   (when arg3 (movsrc arg3 'x3)) 
   (when arg2 (movsrc arg2 'x2))
   (when arg1 (movsrc arg1 'x1))
   (note-state 'c)
   (use-stack 'c)
   ["	call 	" adr , (number-of-args arg1 arg2 arg3 arg4)]
   )

(putprop 'LISP_REG_SAV '(0) '#:llm3:narg)
(putprop 'LISP_REG_RES '(0) '#:llm3:narg)

(defins LISP_REG_SAV 
  ;; this saves all the registers potentially used by lisp on the
  ;; lisp stack for corsav.
  (#:expand:mov 'sp 'A0)
  (for (i 4 1 30)
       (unless (eq i 14)
	       ;; we don't save the C stack %r14 pointer since the correct
	       ;; value is that of the person calling restore-core.
	       ["	dec  	" "4" , 'A0]
	       (:store (catenate "%r" i) 0 'A0)))
  (#:expand:mov 'A0 'sp))
  
(defins LISP_REG_RES 
  ;; the opposite of LISP_REG_SAV
  (#:expand:mov 'sp 'A0)
  (for (i 30 -1 4)
       (unless (eq i 14)
	       ;; don't save CSP (cf LISP_REG_SAV)
	       (:load 'A0 0 (catenate "%r" i))
	       ["	inc  	" "4" , 'A0]))
  (#:expand:mov 'A0 'sp))

(putprop 'C_REG_SAV '(0) '#:llm3:narg)
(putprop 'C_REG_RES '(0) '#:llm3:narg)

(defins C_REG_SAV
  ;; this allocates a new window, but does not(!) necessarily save
  ;; anything to memory.  LISP_REG_SAV is for corsav and necessarily
  ;; writes on the current lisp stack.
  (save-all-registers))

(defins C_REG_RES
  (restore-all-registers))

;;; the number of registers more than the six that fit in registers. (16 in all)
(defvar *arguments-in-memory* 10)

;;; the space reserved for locals (pushed spext, splisp, etc.) in Lisp's frame.
(defvar *frame-locals* 8)

;;; the total size of the frame (window backup, + locals, + callext args)
;;; must be a multiple of 8.
(if (pgetvalue '31BITFLOATS)
    (defvar *frame-size*
	    (+ 96 (mul 4 *arguments-in-memory*) (mul 4 *frame-locals*)))
    (defvar *frame-size*
	    (+ 96 (mul 4 *arguments-in-memory*) (mul 4 *frame-locals*))))

(defun save-all-registers ()
  ;; this decrements the CWP and updates the new sp in the callees world.
  ["	save	" 'CSP, "-" *frame-size* , 'CSP])

(defun restore-all-registers ()
  ["	restore	"])

;;
;; Save/Restore some global %gX registers.
;;

(defvar *first-global-saved* 2) ;; %g2
(defvar *last-global-saved*  5) ;; %g5

(defun save-global-registers ()
   (for (i *first-global-saved* 1 *last-global-saved*)
	["	dec  	4,%l7 "]
	["	st   	%g" i ",[%l7+0] "]))

(defun restore-global-registers ()
   (for (i *last-global-saved* -1 *first-global-saved*)
	["	ld	[%l7+0],%g" i ]
	["	inc  	4,%l7 "]))

#|
;;
;; In case you need to save %gX register in variables.
;; SPARC_Gx are defined in llsolaris.llm3
;;

(defun save-c-globals ()
   ;; save C global registers in sparc_gX variables
   (for (i *first-global-saved* 1 *last-global-saved*)
	["	set	sparc_g" i ",%g1 "]
	["	st	%g" i ",[%g1+0] "]))

(defun restore-c-globals ()
   ;; restore C global registers in sparc_gX variables
   (for (i *first-global-saved* 1 *last-global-saved*)
	["	set	sparc_g" i ",%g1 "]
	["	ld	[%g1+0],%g" i ]))
|#

(defun call-c-direct (adr arg1 arg2 arg3 arg4)
   ;; appelle un sous-programme e'crit en C
   ;; dont l'adresse est le literal "adr"
   ;; a` 4 arguments maxi.
   ;(movdest 'RBFLOAT 'bfloat)
   (save-global-registers)
   (when arg4 (movsrc arg4 '%o3))
   (when arg3 (movsrc arg3 '%o2))
   (when arg2 (movsrc arg2 '%o1))
   (when arg1 (movsrc arg1 '%o0))
   (note-state 'c)
   ;; it's the callee's responsibility to save the registers that
   ;; he needs to.  (This is better since leaf routines don't need
   ;; to save anything.)
   (use-stack 'c) 
   ["	call 	" adr , (number-of-args arg1 arg2 arg3 arg4)]
   (nop)             ; this is in the delay slot of the call
;-------- after the return
   (use-stack 'lisp)
   (note-state 'lisp)
   (restore-global-registers)
   (if (not (pgetvalue '31BITFLOATS))
       (movsrc 'bfloat 'RBFLOAT)) ;  le C casse aussi %g3
   (movsrc 'bfloat 'RBFLOAT)
   )

(defun use-stack (state)
   (selectq state
	     (lisp 
	      (#:expand:sstack 'splisp))		
	           ; note that this does not record the value of spext
	           ; since it must still be what it was when we called
	           ; the c routine.
	     (c
		   ; save the stack in SPLISP
	      (#:expand:stack 'splisp)
	  '    (#:expand:sstack 'spext)))) ; for now, 

(defun note-state (state)
   ;; records whether we are currently executing c or lisp.
   (selectq state
	     (lisp
	      (#:expand:mov '(|#| 1) 'state))
	     (c
	      (#:expand:mov '(|#| 0) 'state))))


;(defun constant-pool (addr)
;; returns the address of _addr (the literal table for addr)
;;   (label-reference)

(defun number-of-args (arg1 arg2 arg3 arg4)
   ;; returns the number of args supplied in this c call.
   (cond (arg4 4)
         (arg3 3)
	 (arg2 2)
	 (arg1 1)
	 (t 0)))

(defun call-c-direct-fl (adr arg1 arg2 arg3 arg4)
   ;; appelle un sous-programme de la bibliothe`que flottante e'crit en C
   ;; dont l'adresse est dans la registre adr.
   ;; "arg1|arg2"  "arg3|arg4" sont des doubles valeurs flottantes.
       (#:expand:lisp_reg_sav)
       (call-c-direct adr arg1 arg2 arg3 arg4)
       (#:expand:lisp_reg_res))

(putprop 'FIX_C_LL 1 '#:llm3:narg)
(defins FIX_C_LL
   (movdestnb (prepsrc \1 'X1) \1))

(putprop 'FLT_C_LL 2 '#:llm3:narg)
;;; source,destination
(defins FLT_C_LL
 ;; takes a C double (already in the floating point registers) and
 ;; creates a lelisp float
  (testfloat)
  (cond ((pgetvalue '31BITFLOATS)
	 (makedr 'X1)
	 (movdest 'X1 \2))
	(t
	 (rolfloat 'rf0 \2))))

(putprop 'STRG_C_LL 1 '#:llm3:narg)
(defins STRG_C_LL
  (movsrc \1 'A1)			; get the source string
  (movsrc 'a1 'a2)			; remember the beginning
  [ @":"]
  (:load-char 'a1 0 'x1)		; look for the terminating null.
  ["	cmp     " 'X1 , "0"]
  ["	bne,a    	" @ ]
  ["	inc	" 'A1 ]			; delay slot (annulled if no branch)
  ["	sub	" 'A1 , 'A2 , 'A1]	; get the length
  (extrn 'CRASTRG ".global")
  (ll-call 'CRASTRG)
  (movdest 'A1 \1))

(putprop 'VECT_C_LL 1 '#:llm3:narg)
(defins VECT_C_LL
 (movsrc \1 'A1)
 (movsrc 'a1 'a2)			; save the beginning
 [@":"]
 (:load 'a1 0 'x1)
 ["	cmp    	" 'X1 , "0"]
 ["	bne,a  	" @ ]
 ["	inc    	" 'A1 ]			; annulled delay slot
 ["	sub    	" 'A1 , 'A2 , 'A1]
; (extrn 'CRAVECT ".global")
; (ll-call 'CRAVECT)
 (movdest 'A1 \1))

;;; Les Routines Le-Lisp -> externe

(mapc '(lambda (f)
          (putprop f 1 '#:llm3:narg) )
     '(vect_ll_c   fix_ll_c  strg_ll_c   float_ll_c rfix_ll_x
       rfloat_ll_x fixv_ll_x floatv_ll_x fixv_x_ll  floatv_x_ll))

(defins VECT_LL_C
  (movdest (movaheap \1 'x1) \1))

(defins FIX_LL_C 
  (:extend \1 \1))

(defins STRG_LL_C
  (movdest (movaheap \1 'x1) \1))

(defins FLOAT_LL_C
  (unrolfloat \1 'rf0)		 ; shift to make it a c single float
  (sun4-makerd))		 ; leaves double in rf0 | rf1

(putprop 'CVTFLT_LL_C 0 '#:llm3:narg)
(defins CVTFLT_LL_C
  (cond ((pgetvalue '31BITFLOATS)
	 ["	sll	" 'X1,'1, 'X1] ; shift to make a C single float
	 (:store 'X1 "-4" 'csp)            ;     push X1
	 (:load 'csp "-4" 'rf0)            ;     pop rf0
	 ["	fstod	" 'rf0 , 'rf0 ])   ; single rf0 -> double  rf0 | rf1
	(t
	 ["	ldd	" "[" 'X1 "+0]", 'rf0])))

;;; RFIX & RFLOAT:
;;;  On considere que les RFIX ForTran sont toujours sur 32bits (integer*4).
;;;  Et que les RFLOAT ForTran sur 64bits (real*8), parceque c'est
;;;  la me^me chose qu'en C, et le code reste le me^me lorsqu'on
;;;  rame`ne un flottant de C ou de ForTran, vers Lisp (type resultat=float)
;;;  Par contre les tableaux de flottants seront sur 32 bits car c'est
;;;  tout ce que permet ForTran.

(definstruct RFIX_LL_X (llfix)
  ;; RFIX: entier LL dans LLFIX, a transformer en entier par reference dans
  ;; le meme registre.
  ;; Pour realiser cette indirection, l'idee est d'allouer l'entier FORTRAN
  ;; dans un tableau LLM3 reserve' pour cela.
  (:extend llfix llfix)			; sign extend the integer
  (#:expand:mov 'REFARGPTR 'X1)		; get the current ref arg pointer
  (#:expand:pushr 'X1 LLFIX)		; store the extended fix there
  (#:expand:mov 'X1 'REFARGPTR)		; update the reference arg pointer
  (#:expand:mov 'X1 LLFIX))		; return the pointer to the integer

;;; RFLOAT:flottant LL dans result,
;;; a transformer en flottant par reference dans RESULT
;;; En 31bitfloat, il faut deboxer, et transformer en 64 bits, puis
;;; allouer ce flottant, dans le tableau LLM3 fait pour ca.
;;; En 64bitfloat: c'est gratuit: on passe le pointeur
(definstruct RFLOAT_LL_X (llfloat)
(cond ((pgetvalue '31BITFLOATS)
       (unrolfloat llfloat 'rf0)	 ; put an IEEE single in rf0
       (sun4-makerd)			 ; single -> double in rf0,rf1
       (#:expand:mov 'REFARGPTR 'X1)	 ; get the current ref arg pointer
       ["	sub	"'x1, "8", 'x1 ] ; push 2 words on the reference stack
       (:store 'rf0 0 'x1)		 ; store the double there
       (:store 'rf1 4 'x1)		 ; can't use std, since not aligned
       (#:expand:mov 'X1 'REFARGPTR)	 ; update the reference arg pointer
       (#:expand:mov 'X1 llfloat) )))    ; return the pointer to the integer

;; FIXVECTOR: conversion sur place des entiers 16bits en 32bits
(definstruct FIXV_LL_X (vect)
  ;; vect must be a register.
    (movaheap vect vect 'x2)		; heap obj in vect and length in x2
    (#:expand:mov vect 'x1)		; return the pointer to the heap obj
    ["	ba,a  	end"@ ]    
[@ :]
    (:extend 'x3 'x3)			; sign-extend the value
    (:store 'x3 0 'x1)			; and replace it.
    ["	add  	" 'x1 , "4" , 'x1 ]     ; increment the vector pointer
["end"@ : "	deccc  	" "1" , 'x2 ]	; are there any more?
    ["	bge,a  	" @ ]    
    (:load 'x1 0 'x3))			; load the value
 
;;; FLTVECTOR: conversion sur place des flottants 31bits, en 32bits.
(definstruct FLOATV_LL_X (vect)
    (movaheap vect vect 'x2)		; heap obj in vect and length in x2
    (#:expand:mov vect 'x4)		; x4 is the pointer into the vector
    ["	ba,a  	end"@ ]    
[@ :]
    (unrolfloat 'x3 'x3)		; shift the value !!!
    (:store 'x3 0 'x4)			; and replace it.
    ["	add  	" 'x4 , "4" , 'x4 ]     ; increment the vector pointer
["end"@ : "	deccc  	" "1" , 'x2 ]	; are there any more?
    ["	bge,a  	" @ ]    
    (:load 'x4 0 'x3))			; load the value

;;; FIXVECTOR: conversion from 32 bit integers to 16 bit integers
(definstruct FIXV_X_LL (vect)
    (movaheap vect vect 'x2)		; heap obj in vect and length in x2
    (#:expand:mov vect 'x4)		; x4 is the pointer into the vector
    ["	ba,a  	end"@ ]    
[@ :]
    (convnb 'x3)			; produce a 16 bit value
    (:store 'x3 0 'x4)			; and replace it.
    ["	add  	" 'x4 , "4" , 'x4 ]     ; increment the vector pointer
["end"@ : "	deccc  	" "1" , 'x2 ]	; are there any more?
    ["	bge,a  	" @ ]    
    (:load 'x4 0 'x3)			; load the value
    (#:expand:mov 'x4 vect))		; return the pointer to the heap obj
 
;;; FLTVECTOR: conversion from 32 bit floats to LL floats !!!
(definstruct FLOATV_X_LL (vect)
(cond ((pgetvalue '31BITFLOATS)
    (movaheap vect vect 'x2)		; heap obj in x4 and length in x2
    (#:expand:mov vect 'x4)		; x4 is the pointer into the vector
    ["	ba,a  	end"@ ]    
[@ :]
    (rolfloat 'x3 'x3)    		; shift the value
    (:store 'x3 0 'x4)			; and replace it.
    ["	add  	" 'x4, "4" , 'x4 ]      ; increment the vector pointer
["end"@ : "	deccc  	" "1" , 'x2 ]	; are there any more?
    ["	bge,a  	" @ ]    
    (:load 'x4 0 'x3)			; load the value
    (#:expand:mov 'x4 vect)))
)


'(defun add-d-ptr (sp arg0 double)
   (unless (register? sp) (error 'add-d-prt "pas un registre" sp))
   (unless (register? arg0) (error 'add-d-prt "pas un registre" arg0))
   (ifn double
        ["	st  	" arg0 , sp]
        ["	std 	" arg0 , sp])
   ["	laddr  	" sp , sp ",-8"])

(putprop 'ADD_D_PTR 2 '#:llm3:narg)
(defins ADD_D_PTR
 (add-d-ptr \1 \2 ()))

(putprop 'ADD_D_INT 2 '#:llm3:narg)
(defins ADD_D_INT
;; ["	exts    	" 'X1 , (prepsrc \2 'X1)]
 (add-d-ptr \1 'X1 ()))

(putprop 'ADD_D_FLT 2 '#:llm3:narg)
(defins ADD_D_FLT
 ;;    (cond ((pgetvalue '31BITFLOATS)
 ;;           (unrolfloat \2 'X1)
 ;;           ["	makerd 	" 'X1 , 'X1])
 ;;          (t
 ;;            (loadvalfloat \2 'X3 'X1 'X2)))
 ;;    (add-d-ptr \1 'X1 t)
 )

(putprop 'ADD_D_STR 2 '#:llm3:narg)
(defins ADD_D_STR
;; ["	load   	" 'X1 , (prepsrc \2 'X1)]
;; ["	ais    	" 'X1 , '8]
 (add-d-ptr \1 'X1 ())
 )

(putprop 'CV_INT 1 '#:llm3:narg)
(defins CV_INT
;; ["	exts    	" 'X1 , (prepsrc \1 'X1)]
 (movdest 'X1 \1))

(putprop 'CV_FLOAT 1 '#:llm3:narg)
(defins CV_FLOAT
 ;;    (cond ((pgetvalue '31BITFLOATS)
 ;;           (unrolfloat \1 'X1)
 ;;           ["	makerd 	" 'X1 , 'X1])
 ;;          (t
 ;;            (loadvalfloat \1 'X3 'X1 'X2)))
 ;;    ["	std 	" 'X1 , \1]
 )

(putprop 'CV_STR 1 '#:llm3:narg)
(defins CV_STR
 ["	load   	" 'X1 , (prepsrc \1 'X1)]
 ["	ais    	" 'X1 , '8]
 (movdest 'X1 \1))

(putprop 'GET_C_ARG 2 '#:llm3:narg)
(defins GET_C_ARG (comment "GET_C_ARG"))

'(defins GET_C_ARG
 (unless (register? \1) (error 'GET_C_ARG "pas un registre" \1))
 (unless (register? \2) (error 'GET_C_ARG "pas un registre" \2))
 ["	move   	" 'X1 , \1]
 ["	sis    	" 'X1 ",2"]
 ["	sli    	" 'X1 ",2"]
 ["	laddr  	" \2 , 'CSP ",24"]
 ["	a      	" \2 , 'X1])

(putprop 'XREFC 1 '#:llm3:narg)
(defins XREFC (comment "XREFC"))
'(defins XREFC
 ["	.global	" \1]
 ["R" (substring \1 1) ":	.word	" \1])

(putprop 'INIT_LBREAK 0 '#:llm3:narg)
(defins INIT_LBREAK
  ;; called when entering a trap to return to the state of the Lisp
  ;; code that was executing before the trap (e.g. break a` quatre coups).
  ;; On the sparc, it is enough to pop the window register frame
  ;; which corresponds to the trap handlers locals.
  (restore-all-registers)
  ;; we are now in the trap handler's frame.
  (restore-all-registers))

(putprop 'FAKETRAP 1 '#:llm3:narg)
(definstruct FAKETRAP (dest)
  ;; called in the treatment of the break a` quatre coups so that
  ;; at the termination of the trap, we will return to DEST instead
  ;; of the real trap site.  Operates by modifying the sigcontext
  ;; structure (see /usr/include/sys/signal.h).
  (#:expand:MOV `(|%| ,dest) 'a1)
  (:store 'a1 12 'inarg3)
  (:add 'a1 '(|#| 4) 'a1)
  (:store 'a1 16 'inarg3)) 
 
(definstruct SWPCONS (curfreel curcons freel freelm)
  ;; the sweep phase for cons.  This replaces the definition of sweepcons
  ;; in macllm3.ll
  ;; %l4 = *bcons
  ;; %g6 = *econs
  ;; %o7 = btbin
  ;; %o5 = *btbin
  ;; %g7 =  btbgc
  ;; %i5 = *btbgc

  ["	dec  	4,%l7 "]
  ["	st   	%g7,[%l7+0] "]		   ; push %g7 used by C compiler (CJ)
  ["	dec  	4,%l7 "]
  ["	st   	%g6,[%l7+0] "]		   ; push %g6 used by C compiler (CJ)
  ["	dec  	4,%l7 "]
  ["	st   	%o5,[%l7+0] "]		   ; push %o5
  ["	set     econs,%g6 "]
  ["	ld      [%g6+0],%g6 "]

(#:expand:lab 'solswpcons)
  ["	set     btbin,%o7 "]
  ["	ld      [%o7+0],%o7 "]

  ["	set     bnumb,%o3 "]
  ["	ld      [%o3+0],%o3 "]
  ["	sub     %l4,%o3,%o2 "]
  ["	srl     %o2,3,%o2 "]
  ["	and     %o2,31,%o1 "]
  ["	srl     %o2,5,%o2 "]
  ["	sll     %o2,2,%o3 "]
  ["	set     btbgc,%g7 "]
  ["	ld      [%g7+0],%g7 "]
  ["	add     %g7,%o3,%g7 "]

(#:expand:lab 'startword)
  ["	set     1,%o0  "]                  ; nouveau masque
  ["	ld      [%o7+0],%o5 "]             ; o5 = 32 bitgc
  ["	ld      [%g7+0],%i5 "]             ; i5 = 32 bitin

(#:expand:lab 'continueword)
  ["	andcc   %i5,%o0,%g0 "]             ; test bit gc
  ["	bne     finished_word_p "]         ; ya pas
  (nop)
  ["	st      %l1,[%l4+4] "]             ; lien liste libre
  ["	st      %i2,[%l4+0] "]
  ["	mov     %l4,%l1 "]
  (#:expand:INCR freel nil)	           ; freel (compteur)

(#:expand:lab 'finished_word_p)
  ["	inc     8,%l4 "]                   ; cons suivant
  ["	sll     %o0,1,%o0 "]               ; bit suivant
  ["	cmp     %o0,0 "] 	           ; 32 bits ?
  ["	bne     continueword "]            ; nop, ca roule.
  (nop)
  ["	and     %o5,%i5,%o5 "]             ; maj 32 bits invisibles
  ["	mov     %g0,%i5 "]                 ; 0 dans les 32 bits gc

  ["	st      %i5,[%g7+0] "]             ; et rangement 32 bits invisibles
  ["	st      %o5,[%o7+0] "]             ; rangement du 0
  ["	inc     4,%g7 "]                   ; bitin++
  ["	inc     4,%o7 "]                   ; bitgc++
  ["	cmp     %l4,%g6 "]                 ; test econs
  ["	blt     startword "]
  (nop)

  ;; le nombre de cons recupere est dans FREEL en format long
  (#:expand:MOV freel 'X1) ; pour extraire le # de K
  ["	and     " freel, '1023, 'A2] ; les unites <= 1024
  ["	srl	" 'X1 , '(|#| 10) , 'A3] ; les K
  ["	ld	[%l7+0],%o5 "]             ; pop %o5 used by C compiler (CJ)
  ["	inc  	4,%l7 "]
  ["	ld	[%l7+0],%g6 "]             ; pop %g6 used by C compiler (CJ)
  ["	inc  	4,%l7 "]
  ["	ld	[%l7+0],%g7 "]             ; pop %g7 used by C compiler (CJ)
  ["	inc  	4,%l7 "]
)

(definstruct INCRINK (nbu nbk)
  ; incre'mente <nbu>, si cela de'passe 1024 (1k)
  ; raz de <nbu> et incre'mentation de <nbk>
   (let ((lab (#:expand:genlab)))
     (cond ((register? nbu)
	    ["	inc	" '1, nbu ]
	    ["	cmp	" nbu, '1024])
	   (t
	    (movsrc nbu 'x1)
	    ["	inc	" '1, 'x1]
	    (movdest 'x1 nbu)
	    ["	cmp	" 'x1, '1024]))
     ["	blt	" lab]
     (nop)
     (#:expand:MOV '(|#| 0) nbu)
     ;(#:expand:INCR nbk nil)
     (cond ((register? nbk)
	    ["	inc	" '1, nbk ])
	   (t
	    (movsrc nbk 'x1)
	    ["	inc	" '1, 'x1]
	    (movdest 'x1 nbk)))
     [lab:]))

#|
(fset 'offset
   "\"(\" (, ")

(fset 'instr
   "	[\"'	instr'	\" arg1 , arg2 , arg3]")

|#

(defun reload ()
  (loadfile "macssol.ll" t))

;;; statically expand LSHIFT's (they occur in gc, macroch and specnb.)
;;; check about replace (note-state ...) with a SWAP instruction.
;;; shouldn't call use call and jcall jmpl?
;;; make sure noone uses makerd 
;;; why does incr sign-extend?
;;; What is this junk about CRAVECT!!
