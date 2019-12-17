;;;; Author:    C. Jullien
;;;; License:   Simplified BSD license
;;;; GIT:       "$Id$"

;;; Copyright (c) 1988-2020, Eligis
;;;
;;; Redistribution and use in source and binary forms, with or without
;;; modification, are permitted provided that the following conditions are met:
;;; 
;;; 1. Redistributions of source code must retain the above copyright
;;;    notice, this list of conditions and the following disclaimer.
;;; 2. Redistributions in binary form must reproduce the above
;;;    copyright notice, this list of conditions and the following
;;;    disclaimer in the documentation and/or other materials provided
;;;    with the distribution.
;;; 
;;; THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
;;; "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
;;; TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
;;; PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
;;; CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
;;; EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
;;; PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
;;; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
;;; WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
;;; OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
;;; ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

;;; Ve'rification de la version

(unless (>= (version) 15.2)
        (error 'load 'erricf 'mac386))

(defvar #:system:read-case-flag ())

(defvar #:sys-package:colon 'expand)

;;; 15.2	  -	Les Macros  80386
;;;
;;;  attention aux PUSHs MALHEUREUX alors que l'argument est sur la pile !!!
;;;

;;;  Section "Les valeurs des assemblages conditionnels"

(defvalue UNIX        1)	; 1  = V unix ll386 est modifie
(defvalue CALIGN     ())	; pas d'alignement pour les branchements.
(defvalue STATLLM3   ())	; il faut des stats LLM3
(defvalue TABLGC      t)	; le GC utilise une table de bits si 31BITFLOATS
(defvalue GCSTPCP    ())	; le GC est un stop & copy (est-ce utilise?)

;;; SSection "Les assemblages conditionnels du code LLM3"

(defvalue COMPILO     0)	; =0 presence du compilateur
(defvalue DEBUG       0)	; =0 pas de DEBUG de l'initalisateur
(defvalue GCDEBUG     0)	; =0 pas de DEBUG du GC
(defvalue SEDEBUG     0)	; =0 pas de DEBUG du SEND
(defvalue DIVOVFL     1)	; =0 le hard teste le debordement de la division
(defvalue TRUEOVFL    1)	; =1 teste les vrais debordements arithmetiques
(defvalue STOPCOPY    0)	; =0 pas de GC stop & copy
(defvalue SIGBLOCK    1)	; =0 les signaux sont rearmes individuellement.
(defvalue UNDERSCORED 1)	; =0 variables C prefixees par un souligne.
(defvalue SAVEDSTACK  0)        ; =0 gestion speciale de la pile.
(defvalue LLM3-NAMES ())	; =()expanse les noms des equivalences t sinon.
(defvalue MATH387     1)	; =1 genere un Lisp pour le 387, 0 sinon.
(defvalue FLOATSTACK  0)	; =1 flottants resultat dans registre, 0 sinon.
(defvalue RETN        0)	; =1 fonctions appelees nettoient la pile.
(defvalue IT_LOOP     0)	; =1 Appel au window manager lors des INTESTs.

;;; Section "Utilisation des registres"
;;;
;;; cette section definit les "registres" ie variables residant sur la pile
;;;


;;; ===========================================================================
;;;
;;;	M A P     M E M O I R E		au 10/10/88
;;;     -------------------------------------------
;;;
;;; les 4 registres generaux LLM3 sont mis dans les quatres registres generaux
;;; 80386 ainsi le comportement des 4 registres est identique
;;; il aurait peut-etre ete preferable de preserver EAX
;;;
;;;	EAX = A1	EBX = A2	ECX = A3	EDX = A4
;;;
;;;	ESI = BSYMB	EDI = BCONS
;;;
;;;	EBP = rwork (registre de travail)
;;;
;;; !!!  on peut baser une adresse par ESP en 386
;;; l'ecriture [ESP+index*scale+imm] est valide !!!
;;;
;;;	ESP = reserve (acces pile)
;;;
;;; EBP etant un registre de travail il peut etre modifie a tout moment.
;;; ESI et EDI ne doivent etre modifies qu'avec d'infinies precautions. Si leur
;;; valeur est modifiee hors de propos, il est GARANTI que Le-Lisp crashe tres
;;; rapidement.
;;;
;;;	ESP = reserve (pile Le-Lisp)
;;;
;;;	CS = code	DS = ES = SS = DATA
;;;
;;; !!! CS et DS doivent decrire le meme espace physique !!!
;;;
;;;
;;;                                      --- CS, DS=SS=ES=FS=GS
;;;                                      |
;;;                                      V
;;; |-------------------------------------| KERNEL
;;; |		KERNEL (CODE)             |
;;; |-------------------------------------|
;;; |           KERNEL (DATA)             |
;;; |-------------------------------------|
;;;
;;;					 ZONES NON LL
;;;
;;; 		les bits marquage/invisible
;;;
;;; |-------------------------------------|<-- BITMARK
;;; |           BITS DE MARQUAGE          |
;;; |-------------------------------------|<-- BITINV
;;; |		BITS INVISIBLES           |
;;; |-------------------------------------|
;;;
;;; 		zones memoires non LL
;;;
;;; |-------------------------------------|
;;; |             STACK                   |
;;; |-------------------------------------|
;;; |             CODE                    |
;;; |-------------------------------------|
;;; |             HEAP                    |
;;; |-------------------------------------|
;;;
;;;					 ZONES LL
;;;
;;; |-------------------------------------|<-- BNUMB  = BFLOAT
;;; |             FLOAT                   |
;;; |-------------------------------------|<-- EFLOAT = BVECT
;;; |             VECTOR                  |
;;; |-------------------------------------|<-- EVECT  = BSTRG
;;; |             STRING                  |
;;; |-------------------------------------|<-- ESTRG  = BSYMB
;;; |             SYMBOL                  |
;;; |-------------------------------------|<-- ESYMB  = BCONS
;;; |             CONS                    |
;;; |-------------------------------------|<-- ECONS
;;;
;;;
;;;
;;; variables systemes:
;;;
;;; les variables LLM3 (ECONS, ...) sont dans la zone DATA et sont donc
;;; accessibles par DS=ES=SS (r/w) ou CS (read only).
;;;
;;; BITINV  : debut de la zone de bits invisibles
;;; BITMARK : debut de la zone de bits de  marquage
;;;
;;; il faudrait avoir des zones variables et optimiser leur utilisation
;;; ici l'hypothese faite est que Le-Lisp occupe moins de 16Mo donc que 256 Ko
;;; suffisent pour marquer tout objet Lisp et que 256 Ko suffisent aussi pour
;;; typer tout CONS.
;;;
;;; variables 386:
;;;
;;; FACC_0  : DWORD utilise pour retourner les resultats entier du 387
;;;	    il doit etre initialise a 0
;;;
;;; TmpSave : DWORD utilise a discretion pour des sauvegardes temporaires
;;;
;;; Log2e1  : QWORD constante valant 1/log2(e)  (cf LOG)
;;; Log2t1  : QWORD constante valant 1/log2(10) (cf LOG10)
;;;
;;; ces deux constantes doivent etre initialisees en meme temps que Le-Lisp
;;;
;;;
;;; !!!!!                    C O N S E I L                               !!!!!
;;;
;;; d'une facon generale, OP MEM REG est plus rapide que OP REG MEM donc
;;; essayer dans la mesure du possible de mettre les operandes memoire en 
;;; premier ca gagne quelques cycles pour pas cher...
;;;
;;; ===========================================================================
;;;
;;; Tout macro llm3 revient a appeler soit la fonction expgenasm1 pour les
;;; macros a 1 argument soit la fonction expgenasm2 pour celles a 2 arguments.
;;; Pour effectuer un saut, utiliser expgenbra.
;;;
;;; Le coeur de l'expanseur est constitue par la fonction GetParm qui renvoie
;;; l'equivalent 386 d'un argument LLM3
;;;
;;; 	LLM3				386
;;; -------------------------------------------------
;;; A1,A2,A3,A4		 	A1,A2,A3,A4 (en fait EAX, ..., EDX)
;;; BCONS,NIL			BCONS,NIL   (en EDI,ESI)
;;; variable LLM3		DWORD PTR [variable llm3]
;;; (& n)			DWORD PTR [ESP+4*n]
;;; (xxx Ai)			DWORD PTR [Ai+(getvalue xxx)]
;;; (@ label)			OFFSET label
;;; (% label)			OFFSET label
;;; (# n)			n (!!!)
;;;                              attention aux entiers negatifs
;;;				en fait -1 (llm3 donc 16 bits) <> -1 (386)
;;;					-1 (llm3) = 65535 (386)
;;; (. label)			DWORD PTR [symbole? (. label)]
;;;
;;; l'argument suivant n'est pas vraiment LLM3 mais est utile pour les fonctions
;;; genre HxMOVX et consorts
;;;
;;; [base index scale offset size] SIZE PTR [base+index*scale+offset]
;;;
;;;
;;; ===========================================================================
;;;

(defun setBP ()
   ; sert a flagger rwork ==> rwork est utilise: on est prie d'en preserver
   ; la valeur
   (remprop 'rwork 'state)    ; rwork n'est plus utilisable !!!
   ["	mov	ebp,esp"]
   (setq *BP-set* t))

;;; les registres machines LLM3 :

(defregister  A1 	EAX)
(defregister  A1X 	AX)          ; utilisation astucieuse des EQU non?
(defregister  A1H	AH)
(defregister  A1L	AL)
(defregister  A2	EBX)
(defregister  A2X	BX)
(defregister  A2H	BH)
(defregister  A2L	BL)
(defregister  A3	ECX)
(defregister  A3X	CX)
(defregister  A3H	CH)
(defregister  A3L	CL)
(defregister  A4	EDX)
(defregister  A4X       DX)
(defregister  A4H	DH)
(defregister  A4L	DL)

;;; diverses variables LLM3 tres souvent utilisees

(defregister BSYMB	ESI)
(defregister NIL	ESI)

(defregister BCONS	EDI)
(defregister ESYMB	EDI)
;(defregister FCONS	EDI)

;;; les registres machines du 80386

(defregister EAX	EAX)
(defregister AX		AX)
(defregister AH		AH)
(defregister AL		AL)
(defregister EBX	EBX)
(defregister BX		BX)
(defregister BH		BH)
(defregister BL		BL)
(defregister ECX	ECX)
(defregister CX		CX)
(defregister CH		CH)
(defregister CL		CL)
(defregister EDX	EDX)
(defregister DX		DX)
(defregister DH		DH)
(defregister DL		DL)
(defregister ESI	ESI)
(defregister SI		SI)
(defregister EDI	EDI)
(defregister DI		DI)
(defregister EBP	EBP)
(defregister BP		BP)
(defregister ESP	ESP)
(defregister SP		SP)

;;; registre de travail privilegie

(defregister rwork      EBP)
(defregister rworkX     BP)
(defregister rworkXX    BP)

;;; les registres du callg AP.

(defregister AUX0	ESI)
(defregister AUX0X	SI)

(defregister DUX0	EDI)
(defregister DUX0X	DI)

(defregister AXX	AX)
(defregister BXX	BX)
(defregister CXX	CX)
(defregister DXX	DX)

(defregister EAXL	AL)
(defregister CLX	CL)

(defvar llvarlist     ; la liste des variables Le_Lisp qui trainent partout
      '(BFLOAT CFLOAT FFLOAT
        BVECT  CVECT  FVECT
        BSTRG  CSTRG  FSTRG
        BSYMB  CSYMB  FSYMB
	BCONS  CCONS  FCONS  ECONS
        BHEAP  CHEAP  EHEAP
        BNUMB  CNUMB
        BSTACK ESTACK MSTACK
        BVAR
        CRWORK))

(setq mac_lab 0)                       ;  generateur d'etiquettes

(defvalue   NULL       0)                   ; offset nul sur un objet

;;; SSection "Aux proprietes naturelles des symboles"

(defvalue   CVAL       0)                   ; adresse 32 bits
(defvalue   PLIST      4)                   ; adresse 32 bits
(defvalue   FVAL       8)                   ; adresse 32 bits
(defvalue   PKGC       12)                  ; adresse 32 bits
(defvalue   OVAL       16)                  ; adresse 32 bits
(defvalue   ALINK      20)                  ; adresse 32 bits
(defvalue   FTYPE      24)                  ; code 16 bits
(defvalue   PTYPE      26)                  ; code 16 bits
(defvalue   PNAME      28)                  ; adresse de chaine 32 bits
(defvalue   FINSYMB    32)

;;; SSection "Aux chai"nes de caracteres et aux tableaux"

(defvalue   VAL       0)
(defvalue   TYP       4)

;;; SSection "Aux objets sur le HEAP"

(defvalue   OBJ       0)
(defvalue   SIZE      4)
(defvalue   HSIZE     4)                   ; l'assembleur a deja un SIZE
					   ; qu'il defend ferocement

;;; SSection "Aux cellules de liste"

(defvalue   CAR       0)                   ; adresse 32 bits
(defvalue   CDR       4)                   ; adresse 32 bits

;;; SSection "Valeurs des ftypes"

(defvalue   FUNDEF  0)
(defvalue   SUBR0   1)
(defvalue   SUBR1   2)
(defvalue   SUBR2   3)
(defvalue   SUBR3   4)
(defvalue   SUBRN   5)
(defvalue   SUBRF   6)
(defvalue   EXPR    7)
(defvalue   FEXPR   8)
(defvalue   MACRO   9)
(defvalue   DMACRO 10)
(defvalue   SUBRM  11)
(defvalue   SUBRDM 12)

;;; SSection "Les bornes sur entiers"

(defvalue       MINFIX           #$8001)  ; -32767
(defvalue       MAXFIX           32767)
(defvalue       MINUS0           #$8000)

;;; SSection "Les types des caracteres"

(defvalue  TCNULL    0)                 ; CNULL
(defvalue  TCBCOM    1)                 ; debut commentaire
(defvalue  TCECOM    2)                 ; fin de commentaire
(defvalue  TCQUOTE   3)                 ; quote char
(defvalue  TCLPAR    4)                 ; par ouvrante
(defvalue  TCRPAR    5)                 ; par fermante
(defvalue  TCDOT     6)                 ; le point (des listes)
(defvalue  TCSEP     7)                 ; un separateur
(defvalue  TCSPKGC   8)                 ; separateurs de packages
(defvalue  TCSPLICE  9)                 ; splice macro caractere
(defvalue  TCMACRO  10)                 ; macro caractere
(defvalue  TCSTRING 11)                 ; separateur de chaines
(defvalue  TCPNAME  12)                 ; pname normal
(defvalue  TCSYMB   13)                 ; delimiteur de symbole normal
(defvalue  TCMSYMB  14)                 ; symbole mono caractere

;;; SSection "Les types d'unites syntaxiques"

(defvalue  TCOBJ    3)                  ; objet lisp
(defvalue  TCLIST   4)                  ; liste lisp

(defvar XDEBUG         ())	; () = pas de commentaire dans l'assembleur
(defvar dr_exp          t)	; () = les lignes llm3 sont en comment
(defvar HStringSize    10)	; la taille du header string en heap

;;; EDI-reserved doit valoir t si EDI est reserve pour stocker une valeur LLM3
;;; en l'occurence BCONS

(defvar *EDI-reserved* t)	; t si EDI = BCONS ou FCONS

;;; .Section "Les fonctions d'impression spe'cifiques"

(defun #:expand:prin-statop (op))

(defun incpile ()
   ;; incremente le pointeur de pile de 4 octets,a chaque objet empile.
   (setq ptpile (plus 4 ptpile)))

(defun #:expand:genlab ()
   ;; ge'ne`re un nouveau suffixe d'e'tiquette
   (or genlab (setq genlab (concat "__" (incr genlab-counter)))))

(defun #:expand:genflab (label)
   ;; ge'ne`re une nouvelle e'tiquette   (full_label)
   (or genlab (setq genlab (concat label "__" (incr genlab-counter)))))

(defun #:expand:prin-label (l)
   ;; imprime une e'tiquette
   (when (and l (neq *opcod 'equ)) (print (catenate l ":"))))

(defun #:expand:lab (op)
   (#:expand:prin-label op))

(defun #:expand:prin-at (o)
   ;; imprime un atome
   (cond ((not (symbolp o))
          (prin o))
         ((eq (chrnth 0 o) #/$)
          (mapc #'(lambda (x) (princn (lowercase x)))
                (explode o)))
         (t (cond
                  ((getvalue o)
                   (#:expand:prin-at (getval o)))
                  ((getregister o)
                   (prin (getval o)))
                  (t
                   (prin (get-c-name o)))))))

(defun affDB (l)
   (when l
         (prin  (car l))
         (when (cdr l)
               (princn 44))
         (affDB (cdr l))))

(defun #:expand:prin-cons (l)
   (cond
         ((memq (car l) '(|#| |@| |%|))
          (prin "#")
          (cond
                ((and (fixp (cadr l)) (lt (cadr l) 0))
                 (#:expand:prinhex (cadr l)))
                (t (#:expand:prin-at (cadr l)))))
         ((eq (car l) '&)
          ; acce`s direct a` la pile
          (prin (* (cadr l) 4) "[esp]"))
         ((eq (car l) 'strg)
          (let ((l (pname (cadr l))))
               (princn 32 10)
               (prin 'db)
               (princn 32 2)
               (affDB l)))
         ((symbolp (car l))
          (when (and (symbolp (car l))
                     (neq (getvalue (car l)) 0))
                (#:expand:prin-at (car l)))
          (prin "(")
          (#:expand:prin-at (cadr l))
          (prin ")"))
         (t (prin (car l)))))

(defun #:expand:prinhex (n)
   (prin "$")
   (#:expand:prinhexb (logand (logshift n -8) #$FF))
   (#:expand:prinhexb (logand n #$FF)) )

(defun #:expand:prinhexb (n)
   (when (lt n #$10) (princn #/0))
   (with ((obase 16)) (prin n)) )

;;;
;;;                       DEBUT DE L'EXPANSEUR 80386
;;;
;;;

(defins TITLE
        (setq proc_cou ())
        (setq label_0 ())
        (setq segment "CODE")
        ; deux segments seulement qui sont confondus (meme base, meme limite)
        ["	.386p"]
        ["	.387"]
        [""]
        (when (getvalue 'LLM3-NAMES)
          ["	include	" *def-file*])
        ["	include	" *dat-file*]
        [""]
        (selectq syst
           ((win32 win64 win95)
            ["	assume	cs:FLAT,ds:FLAT,es:FLAT,fs:FLAT,gs:FLAT,ss:FLAT"])
           (unix
            ["	assume	cs:code,ds:data,es:data,fs:data,gs:data,ss:data"]))
        [""]
        (if expunix
            ["code	segment word public 'CODE'"]
            ["_TEXT	segment para use32 public 'CODE'"])
        ["	include	" *equ-file*]
        ; modele plat (flat segment: en fait CODE==DATE)
        ; On ouvre le segment data dans le fichier *.DAT correspondant
        (with ((outchan *dat-chan*))
              (if expunix
                  (print "data	segment dword public 'DATA'")
                  (print "_DATA	segment para  use32 public 'DATA'"))))

(defins IMPURE
        (setq segment 'DATA)
        (outchan *dat-chan*))

(defins PURE
        (setq segment 'CODE)
        (outchan *asm-chan*))

(defins LABEL)

(defins ADR
        (unless (or (pgetvalue *label)  ; variable deja stockee
                    (register? *label)) ; pour eviter les BSYMB DD 0 (registre)
                (cond ((eq (numberp \1) 0)
                       ["	dd	0"])
                      ((numberp \1)
                       ["	dw	" \1]
                       ["	dw	0"])
                      (t (selectq syst
                            (win32     ["	dd	offset FLAT:" \1])
                            (win64     ["	dd	offset FLAT:" \1])
                            (win95     ["	dd	offset FLAT:" \1])
                            (unix      ["	dd	offset " \1]))))))

(defins NOP
        ["	nop"])

(defins END
        (code)
        (when *intest*				; cf INTEST
              (mapc (lambda (labels)
                            [(car labels) ":"]
                            (with-C 0
                               (call-C-function 'll_intest))
                            ["	jmp	near ptr " (cdr labels)])
                    *intest*)
              (setq *intest* ()))
        (when *GC_Call*				; cf CONS, NCONS, XCONS,...
              (mapc (lambda (labels)
                            [(car labels) ":"]
                            ["	call	near ptr gccons"]
                            ["	jmp	near ptr " (cdr labels)])
                    *GC_Call*)
              (setq *GC_Call* ()))
        (mapc 'xrefi llvarlist)
        (when proc_cou [proc_cou  "	endp"])
        (if expunix
            ["code	ends"]
            ["_TEXT	ends"])
        ["	end"]
        ; On ferme le segment data dans le fichier *.DAT correspondant
        (with ((outchan *dat-chan*))
              (if expunix
                  (print "data	ends")
        	  (print "_DATA	ends"))))

(defins XREFI
        (xrefi \2))

(defins XREFP
        (xrefp \2))

(defins XDEFI
        (XDEFx))

(defins XDEFP
        (XDEFx))

;;; Section "Les instructions LLM3"

(defins ADDADR
        ;          ADDADR                        ; A3|A1 + A4|A2 -> A3|A1
        ;         Macro LLM3 e'quivalente a` :
        ;          EPLUS    A1,A2,#0,A2,A1       ; ajoute les parties basses
        ;          EPLUS    A3,A4,A2,A2,A3       ; puis la retenue
	(expgenasm2 'ADD 'A1 'A2 t)
        (expgenasm2 'ADC 'A3 'A4 t))

(defins SUBADR
        ;M        Macro LLM3 e'quivalente a` :
        ;M         PUSH      A3                  ; le temps de faire le calcul
        ;M         NEGATE    A2                  ; calcul l'oppose du 2eme arg
        ;M         DECR      A2,SUBADR1          ; A4 <- ex- (CDR a2)
        ;SUBADR1  NEGATE    A4
        ;M         DECR      A4,SUBADR2          ; A2 <- ex- (CAR a2)
        ;SUBADR2  CNBEQ     #$8000,A2,SUBADR3   ; cas bizare du #$8000
        ;M         EPLUS     A2,#1,#0,A3,A2
        ;M         EPLUS     A4,#0,A3,A3,A4      ; (incradr (A2 . A4) 1)
        ;SUBADR3  POP       A3
        ;M         EPLUS     A1,A2,#0,A2,A1      ; ajoute les parties basses
        ;M         EPLUS     A3,A4,A2,A2,A3      ; puis la retenue
        (expgenasm2 'SUB 'A1 'A2 t)
        (expgenasm2 'SBB 'A3 'A4 t))

;;; Here is the new SWPCONS (50 % faster than old style).
;;; With courtesy of Bernard Kerjean and help of Georges Schumacher.
;;; Optimization for 486 and Pentium pipeline made by Christian Jullien.

(defins SWPCONS
   ;; (definstruct SWPCONS (curfreel curcons freel freelm)
   ;;
   ;;         SWPCONS   A1,A4,A2,FREELM
   ;;         La macro pre'ce'dente correspond exactement au code
   ;;         ci-dessous. une e'criture raisonnable en langage
   ;;         machine permet d'obtenir un gain de l'ordre de 2.
   ;;         QSLD (qu'on se le dise).
   ;;
   ;;GCSW1     TCMARK    A4,GCSW2            ; c'e'tait marque' : au suivant
   ;;          MOV       A1,CDR(A4)          ; chaine la liste libre.
   ;;          MOVNIL    CAR(A4)             ; clean, clean
   ;;          MOV       A4,A1               ; nouveau FREE
   ;;          CLINVSBL  A1                  ; plus invisible.
   ;;          INCR      A2                  ; compte
   ;;          CNBLT     A2,#1024,GCSW2      ; pour compter par 1024 k!
   ;;          MOV       #0,A2               ; remet les unites a 0
   ;;          INCR      FREELM              ; increm les milliers (k)!
   ;;GCSW2     NXCONS    A4,GCSW1            ; au suivant
   ;;
   (let ((bs-var (string (get-c-name '_bsymb)))
         (bc-var (string (get-c-name '_bcons))))
        (xrefi 'delta_cons)
        (with ((outchan *equ-chan*))
              (with ((outchan *dat-chan*))
                    ["	extrn	" bs-var ":dword"]
                    ["	extrn	" bc-var ":dword"]
                    ))
       ["	;;"]
       ["	;; new SWPCONS macro"]             ; SWPCONS intro
       ["	;;"]
       ["swpcons_macro	label	near"]
       ["	public	swpcons_macro"]
       (when (eqreg 'bcons 'edi)	           ; si BCONS est = a EDI,
	     ["	push	" 'bcons])                 ; alors le protege
       ["	push	btbin"]                    ; alloc pile pour [btbin]
       ["	mov	ebx,dword ptr [" bs-var "]"]; bsymb dans ebx
       ["	mov	ebp,dword ptr [btbgc]"]    ; btbgc dans ebp
       ["	mov	esi,dword ptr [" bc-var "]"]; bcons dans esi
       ["	sub	esi,dword ptr [bnumb]"] ; 
       ["	shr	esi,6"]                    ; nb d'octets a` sauter
       ["	add	ebp,esi"]                  ; ebp <- l'adr relative
       ["	xor	esi,esi"]                  ; compteur de CONS libres
       ["nextw:"]
       ["	mov	delta_cons,ebx"]           ; pas de regs, protect it
       ["	mov	edi,[esp]"]
       ["	mov	ebx,[ebp]"]                ; ebx les 32 bits TABGC
       ["	add	dword ptr [esp], 4"]       ; avance dans bits invisi.
       ["	and	[edi],ebx"]                ; efface les bits invisi.
       ["	xor	edi,edi"]                  ; 0 = nume'ro du bit courant
       ["	mov	ebx,delta_cons"]           ; restore ebx
       ["nextb:"]
       ["	bt	[ebp],edi"]                ; le bit courant
       ["	jc	short marked"]             ; il e'tait marque'
       ["	mov	[" 'car "+edx],ebx"]       ; lien de la liste
       ["	mov	[" 'cdr "+edx],eax"]       ;
       ["	inc	esi"]                      ; nb de CONS libe're's.
       ["	mov	eax, edx"]                 ; nouvelle liste libre.
       ["marked:"]
       ["	inc	edi"]                      ; index suivant
       ["	add	edx,8"]                    ; CONS suivant
       ["	cmp	edi,32"]                   ; fin des 32 CONS ?
       ["	jne	short nextb"]              ; si non, nextb
       ["	mov	dword ptr [ebp],0"]        ; efface et avance
       ["	add	ebp, 4"]                   ; dans btbgc
       ["	cmp	[econs],edx"]              ; fin de la zone CONS ?
       ["	ja	short nextw"]              ; non ca roule...
       ; A2 <= compteur cons residuels (<1 Kcons)
       ; compteur de Kcons
       ; le nombre de cons recupere est dans esi en format long
       ["	mov	ebx,esi"] ; ebx = A2
       ["	and	ebx,1023"]                 ; les unites <= 1024 dans A2
       ["	mov	ecx,esi"]
       ["	shr	ecx,10"]                   ; les K dans A3
       ["	pop	ebp"]                      ; rend la pile [btbin]
       (when (eqreg 'bcons 'edi)
	     ["	pop	" 'bcons])                 ; restore BCONS
       ["	mov	esi,[" bs-var "]"]         ; remet bsymb dans esi
       ["	;;"]
       ["	;; end SWPCONS macro"]             ; SWPCONS end
       ["	;;"]))

;;;   GCMARK : marquage d'un objet Lisp quelconque qui se trouve dans A1
;;;   Au retour A3 et A4 doivent e^tre inchange'es. (cf ../llm3/gc.llm3).
;;;   Dans cette de'finition ESTACK demande une tole'rance de 2 pointeurs!

(defins GCMARK
       ;; GCMARK
       ;; BFLISP    A1,MARKR            ; je ne sais pas marquer.
       (expgenasm2 'cmp 'bfloat 'a1)
       ["	ja	short markr"]
       (expgenasm2 'cmp 'econs 'a1)
       ["	jbe	short markr"]
       ;; BTMARK    A1,MARKR            ; marque' c'est marque'!
       ;; STMARK    A1                  ; sinon c,a l'est.
       (expgenasm2 'mov 'rwork 'a1)
       ["	sub 	" 'rwork "," 'bnumb]
       ["	shr	ebp,3"]
       ["	push	" 'a1]
       (expgenasm2 'mov 'a1 'btbgc)
       ["	bt	dword ptr [eax]," 'rwork]
       ["	jnc	short " (eti)]
       ["	pop	" 'a1]
       ["	ret"]
       [(eti) ":"]
       (inceti)
       ["	bts	dword ptr [eax]," 'rwork]
       ["	pop	" 'a1]
       ;; BTCONS    A1,MARKL            ; on privilegie les listes.
       (expgenasm2 'cmp 'a1 'bcons)
       ["	jge	short markl"]
       ;; BTVECT    A1,MARKV            ; marquage spe'cialise' vecteurs
       (expgenasm2 'cmp 'bvect 'a1)
       ["	ja	short " (eti)]
       (expgenasm2 'cmp 'bstrg 'a1)
       ["	ja	short markv"]
       [(eti) ":"]
       (inceti)
       ;; BTSTRG    A1,MARKT            ; marquage spe'cialise' chai^nes
       (expgenasm2 'cmp 'bstrg 'a1)
       ["	ja	short " (eti)]
       (expgenasm2 'cmp 'bsymb 'a1)
       ["	ja	short markt"]
       [(eti) ":"]
       (inceti)
       ;; MARKR     RETURN     
       ["markr:"]
       ["	ret"]
       ;; MARKL     CHKSTK    ESTACK,ERRFSGC ; marque la liste contenue dans A1
       ["markl:"]
       (:apply-mac '(() chkstk estack errfsgc))
       ;; PUSH      CDR(A1)             ; sauve le reste
       (expgenasm1 'push '(cdr a1))
       ;; MOV       CAR(A1),A1          ; l'e'le'ment de liste a` marquer.
       (expgenasm2 'mov 'a1 '(car a1))
       ;; CALL      MARK                ; re'curse sur les CARs
       ["	call	near ptr mark"]
       ;; POP       A1                  ; re'cupe`re le CDR
       (expgenasm1 'pop 'a1)
       ;; BRA       MARK                ; ite`re sur les CDRs
       ["	jmp	near ptr mark"]
       ;; MARKV     PUSH      A3        ; A3/A4 inchange's dans MARK.
       ["markv:"]
       (expgenasm1 'push 'a3)
       ;; HGSIZE    A1,A3               ; nombre d'e'le'ments du vecteur.
       (:apply-mac '(() hgsize a1 a3))  ; nombre d'e'le'ments du vecteur.
       ;; PUSH      A1                  ; le vecteur (en &0)
       (expgenasm1 'push 'a1)
       ;; CHKSTK    ESTACK,ERRFSGC      ; erreur fatale!!
       (:apply-mac '(() chkstk estack errfsgc)) ; erreur fatale!!
       ;; BRA       MARKV4              ; de'marre bien la boucle.
       ["	jmp	short markv4"]
       ;; MARKV2    HPXMOV    &0,A3,A1  ; e'le'ment suivant.
       ["markv2:"]
       (:apply-mac '(() hpxmov (& 0) a3 a1)) ; e'le'ment suivant.
       ;; PUSH      A3
       (expgenasm1 'push 'a3)
       ;; CALL      MARK                ; marque l'e'le'ment quelconque.
       ["	call	near ptr mark"]
       ;; POP       A3
       (expgenasm1 'pop 'a3)
       ;; MARKV4    SOBGEZ    A3,MARKV2 ; on boucle sur le nb d'e'le'ments.
       ["markv4:"]
       ["	dec	cx"]
       ["	jge	short markv2"]
       ;; POP       A1                  ; le vecteur
       (expgenasm1 'pop 'a1)
       ;; POP       A3                  ; A3/A4 inchange's dans MARK.
       (expgenasm1 'pop 'a3)
       ;; MARKT     MOV       TYP(A1),A1       ;;; marquage d'un type,
       ["markt:"]
       (expgenasm2 'mov 'a1 '(typ a1))
       ;; BRA       MARK
       ["	jmp	near ptr mark"])

;:;         HOVNI                Dump memoire pour * HEAP-OVNI *
;;; (HOVNI (bheap cheap eheap last_obj_adr))

(defins HOVNI
        ;; With courtesy of B. Kerjean (ILOG)
        (code)
        (with-C 4
           (expgenasm2 'MOV 'rwork \4)
           ["	push	" 'rwork]
           (expgenasm2 'MOV 'rwork \3)
           ["	push	" 'rwork]
           (expgenasm2 'MOV 'rwork \2)
           ["	push	" 'rwork]
           (expgenasm2 'MOV 'rwork \1)
           ["	push	" 'rwork]
           (call-C-function 'llovni)))

(defins INCRINK
        ;; With courtesy of B. Kerjean (ILOG)
        ;; incre'mente \1, si cela de'passe 1024 (1k)
        ;; raz de \1 et incre'mentation de \2
        (inceti)
        (expgenasm1 'inc \1)
        (expgenasm2 'cmp \1 1024)
        ["	jl	short " (eti)]
        (expgenasm2 'mov \1 0)
        (expgenasm1 'inc \2)
        [(eti) ":"])

;;; SSection "Instructions de test de type d'objet Lisp"

;;
;; remarque: CMP reg,memoire = 6 cycles (386), 2 cycles (486)
;;           CMP memoire,reg = 5 cycles (386), 2 cycles (486)
;;

(defins BTFIX
        ;; FIX si il est dans une zone en dessous des floats donc BFLOAT
        ;; est au-dessus
        (expgenasm2 'CMP 'BFLOAT \1)
        (expgenbra 'JA \2))

(defins BFFIX
        ;; FIX si il est dans une zone en dessous des floats donc BFLOAT
        ;; au dessous
        (expgenasm2 'CMP 'BFLOAT \1)
        (expgenbra 'JBE \2))

(defins BTFLOAT
        (cond
              (31BITFLOATS
               (if (register? \1)
                   ["	or	" \1 |,| \1]
                   (expgenasm2 'TEST \1 MSK31FLOAT))
               (expgenbra  'JS \2))
              (t
               (bt2 'BFLOAT 'BVECT))))

(defins BFFLOAT
        (cond
              (31BITFLOATS
               (if (register? \1)
                   ["	or	" \1 |,| \1]
                   (expgenasm2 'TEST \1 MSK31FLOAT))
               (expgenbra  'JNS \2))
              (t
               (bf2 'BFLOAT 'BVECT))))

(defins BTNIL
        ;; \1 = NIL ?
        (expgenasm2 'CMP \1 'NIL)    ; on met NIL apres car c'est un registre
        (expgenbra 'JE \2))

(defins BFNIL
        ;; \1 <> NIL ?
        (expgenasm2 'CMP \1 'NIL)    ; on met NIL apres car c'est un registre
        (expgenbra 'JNE \2))

(defins BTCONS
        ;;  CONS est la derniere zone Lisp -> il suffit de tester BCONS
        (expgenasm2 'CMP \1 'BCONS)
        (if 31BITFLOATS
            (expgenbra 'JGE \2)
            (expgenbra 'JAE \2)))	; permet d'adresser toute la memoire

(defins BFCONS
        ;;  CONS est la derniere zone Lisp -> il suffit de tester BCONS
        (expgenasm2 'CMP \1 'BCONS)
        (if 31BITFLOATS
            (expgenbra 'JL \2)
            (expgenbra 'JB \2)))	; permet d'adresser toute la memoire

(defins BTLISP  (bt2 'BFLOAT 'ECONS))
(defins BFLISP  (bf2 'BFLOAT 'ECONS))
(defins BTVECT  (bt2 'BVECT  'BSTRG))
(defins BFVECT  (bf2 'BVECT  'BSTRG))
(defins BTSTRG  (bt2 'BSTRG  'BSYMB))
(defins BFSTRG  (bf2 'BSTRG  'BSYMB))
(defins BTSYMB  (bt2 'BSYMB  'BCONS))
(defins BFSYMB  (bf2 'BSYMB  'BCONS))

(defins BTNUMB)
(defins BFNUMB  (expgenbra 'JMP \2))

(defins BTVAR   (bt2 'BVAR 'BCONS))
(defins BFVAR   (bf2 'BVAR 'BCONS))

;;; SSection "Instructions qui initialisent la borne des variables"

(defins SETBVAR
        (expgenasm2 'mov 'BVAR \1))

;;; SSection "Manipulations de la pile"

(defins STACK
        ;;  \1 <- ESP
        (expgenasm2 'mov \1 'ESP))

(defins SSTACK
        ;; ESP<- \1
        (expgenasm2 'mov 'ESP \1))

(defins CHKSTK
        ;; encore de la place en STACK? !!! la pile decroit donc ESTACK<=ESP !!!
        (expgenasm2 'CMP \1 'ESP)
        (expgenbra 'JA \2))

(defins PUSH
        (expgenasm1 'PUSH \1))

(defins POP
        (expgenasm1 'POP \1))

(defins POPR
        ;; on pop a partir du SP contenu dans \1
        (expgenasm2 'mov \2 (list 'NULL \1))
        (expgenasm2 'ADD \1 4))

(defins PUSHR
        ;; on push a partir du SP contenu dans \1
        (expgenasm2 'SUB \1 4)
        (expgenasm2 'mov (list 'NULL \1) \2))

(defins TOPST
        ;; idem POP a la diff. que SP non modifie
	(expgenasm2 'mov \1 '(NULL ESP)) )

(defins TOPSTR
        ;; idem POPR mais \1 n'est pas mis a jour
        (expgenasm2 'mov \2 (list 'NULL \1)) )

(defun ExpGenXtop (reg dest)
   (cond
         ((register? dest)
          (expgenasm2 'XCHG (list 'NULL reg) dest))
         (t
          (expgenasm2 'mov 'rwork dest)
          ["	xchg	dword ptr [" reg "]," 'rwork]
          (expgenasm2 'mov dest 'rwork))))

(defins XTOPST
        ;; [sp] <-> \1
	(ExpGenXtop 'ESP \1) )

(defins XTOPSTR
        ;;  idem XTOPST mais via \1
        (unless (register? \1)
                ;; \1 doit etre un registre
                (error 'XTOPSTR 'errbpa (list \1 \2)))
        ;; cf doc pour XTOPSTR !!!
        (ExpGenXtop \1 \2))

(defins ADJSTK
        ;; pop \1 elements de la pile
        (if (immvalue? \1)
            ;; ADD ESP,\1*4
            ["	add	esp," (* (immvalue? \1) 4)]
            ;; else LEA ESP,[ESP+\1*4]
            (expgenasm2 'LEA 'ESP (vector 'ESP \1 4 0 "dword"))))

(defins ADJSTKR
        ;;  idem ADJSTK mais via \1
        (cond
              ((immvalue? \2)
               ;; ADD \1,\2*4
               (ExpGenAdd \1 (* (immvalue? \2) 4) t))
              ((register? \1)
               ;; LEA \1,[\1+\2*4]
               (expgenasm2 'LEA \1 (vector \1 \2 4 0 "dword")))
              (t
               (expgenasm2 'mov 'rwork \2)  ; rwork <- \2 laisser ce MOV !!!
               ["	shl	" 'rwork ",2"]; *4 car on push 32 bits
               (expgenasm2 'ADD \1 'rwork)  ; \1 <- \1 + rwork
               )) )

;;; SSection "Le controle"

(defins BRA
        ;; branchement dans le meme segment = 6.2 % ***
        (expgenbra 'JMP \1))

(defins JMP
        ;; JMP inter module = JMP NEAR !!! (merci le 80386)
        ;; JMP   = 2.9 % ***
        (expgenbra 'JMP \1))

(defins BRX
        ;; saut via une table d'indirection residant dans le code
        ;; \1 est toujours une adresse en code (@ toto)
        (unless (label? \1) (error 'BRX 'errbpa (list \1 \2)))
        (setq \1 (get-real-name (cadr \1)))
        (cond
          ((immvalue? \2)
           ["	jmp	dword ptr cs:[" \1 "+" (* (GetParm \2 ()) 4)"]" ])
          ((register? \2)
           ["	jmp	dword ptr cs:[" \2 "*4+" \1 "]"])
          (t
           ;; a optimiser mais est-ce bien necessaire?
           (expgenasm2 'mov 'rwork \2)
           ["	jmp	dword ptr cs:[" 'rwork "*4+" \1 "]"])))

(defins BRI
        ;; branchement indirect via le contenu de \1
        ["	jmp	" (GetParm \1 ())] )

(defins CALL
        ;;  CALL intra-module
       (expgenbra 'CALL \1))

(defins JCALL
        ;; CALL inter-module (c'est un NEAR)
        (expgenbra 'CALL \1))

(defins CALLI
        ["	call	near ptr " (GetParm \1 ())] )

(defins RETURN
        ["	ret"])

;;; SSection "Les operateurs de boucle"

;;; 0.5 %         SOBGEZ  op,lab     op<-op-1; si op >= 0 branch a lab
;;; 0.2 %         SOBGTZ  op,lab     op<-op-1; si op > 0 branch a lab
;;; On suppose operateur de boucle sur 16 bits et SIGNE

(defins SOBGEZ
        ;; ce n'est pas un LOOP (la comparaison est signee!!!)
        (expgenasm1 'DEC \1 t)
        (expgenbra 'JGE \2) )

(defins SOBGTZ
        ;; ce n'est pas un LOOP (la comparaison est signe!!!)
        (expgenasm1 'DEC \1 t)
        (expgenbra 'JG \2) )

(defins MOV
        (expgenasm2 'mov \2 \1))

(defins MOVNIL
        (expgenasm2 'mov \1 'NIL))

(defins MOVXSP
        ;; op1 -> [ESP][\2]
	;; MOV [ESP+\2*4],\1
        (expgenasm2 'mov (vector 'ESP \2 4 0 "dword") \1)) ; SS:[ESP] <- \1

(defins XSPMOV
        ;; op2 <- SS:[SP][\1]
        ;; MOV \2,[ESP+\1*4]
        (expgenasm2 'mov \2 (vector 'ESP \1 4 0 "dword"))) ; SS:[ESP] -> \2

(defins GFTYPE
        ;; FTYPE(\1) -> \2
	(unless (register? \2)
		;; \2 doit etre un registre a cause de l'utilisation de MOVZX
                (error 'GFTYPE 'errbpa (list \1 \2)) )
        (expgenasm2 'movZX \2 (list 'FTYPE \1)))

(defins GPTYPE
        ;; PTYPE(\1) -> \2
	(unless (register? \2)
                ;; \2 doit etre un registre a cause de l'utilisation de MOVZX
		(error 'GPTYPE 'errbpa (list \1 \2)) )
        (expgenasm2 'movZX \2 (list 'PTYPE \1)) )

(defins SFTYPE
        ;; \1 -> FTYPE(\2)
        (expgenasm2 'mov (list 'FTYPE \2) \1 t))

(defins SPTYPE                          ; \1 -> PTYPE(\2)
        (expgenasm2 'mov (list 'PTYPE \2) \1 t))

;;; SSection "Instructions sur le  HEAP"

;;;         NXHB      size,op     size+ (8 ou 10)+ op  ->  op
;;; NeXt Heap Byte (String)
;;; La taille est inferieure a 64 k.
;;; 10 = 8 + 1 (XENIX aime les "0" en fin de chaine) + 1 (pour etre pair)

(defun push-heap-reg ()
   ;; push les registres utilises par les fonctions de transfert/compare
   ;; sur les chaines. On verifie d'abord si les arguments ne sont pas sur
   ;; la pile s'ils le sont on sauvegar ESP dans EBP
   (when (or (pile? \1) (pile? \2) (pile? \3) (pile? \4) (pile? \5))
         ["	mov	ebp,esp"]
         (setq *BP-set* t)) ; cela evite un bug
   ["	cld"]	     ; pour aller dans le bon sens!
   ["	push	ecx"]     ; compteur de boucle
   (when *EDI-reserved*
         ["	push	edi"])     ; pointeur destination
   ["	push	esi"] )    ; pointeur source

(defun pop-heap-reg ()
       ;; pop les registres pushes par push-heap-reg
       ["	pop	esi"]
       (when *EDI-reserved*
             ["	pop	edi"])
       ["	pop	ecx"] )

(defun prepare-index (reg base index . vector?)
   ;; ressemble a l'ancien HINDIR
   ;; met dans reg le pointeur val(base)+index*(1 or 4 si vector?=t)
   ;; utilise par tous les transferts ou comparaison avec REP CMPS ou MOVS
   ;; sert a initialiser ESI et EDI
   ;;
   ;; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
   ;;
   ;; on check si \1 \2 \3 \4 ou \5 n'est pas ESI ou EDI
   ;; cela evite des bugs du genre mov ESI,EDI suivi d'un mov EDI,ESI...
   ;; comme EDI et ESI sont mapper sur BSYMB et BCONS cela ne devrait pas
   ;; arriver...
   ;;
   ;; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
   ;;
   ;; reg est actuellement soit aux0 (esi), soit rwork (ebp)
   (when (or (eqreg \1 'ESI)
             (eqreg \2 'ESI)
             (eqreg \3 'ESI)
             (eqreg \4 'ESI)
             (eqreg \5 'ESI)
             (eqreg \1 'EDI)
             (eqreg \2 'EDI)
             (eqreg \3 'EDI)
             (eqreg \4 'EDI)
             (eqreg \5 'EDI))
         (tybeep)
         (print "WARNING: prepare-index appelee avec ESI,EDI")
         (tys))
   ; ["; prepare-index called for " reg " from " base]
   (when (equal reg 'rwork)
         ["	push	ebp"])
   (expgenasm2 'mov reg (list 'VAL base)) ; reg = pointeur chaine
   (if (immvalue? index)
       (expgenasm2 'ADD reg (+ 8 (* (immvalue? index) (if vector? 4 1))))
        ;; le 8 sert a sauter l'en-tete (skip header)
       (expgenasm2 'LEA reg (vector reg index (if vector? 4 1) 8 "dword") ))
   (when (equal reg 'rwork)
         ["	mov	dword ptr [crwork],ebp"]
         ["	pop	ebp"]
         ["	mov	ebp,dword ptr [crwork]"]))
   

(defun prepare-index-rwork (base index . vector?)
   ;; met dans rwork le pointeur val(base)+index*(1 or 4 si vector?=t)
   ;; utilise par tous les transferts ou comparaison avec REP CMPS ou MOVS
   ;; sert a initialiser ESI et EDI
   ;;
   ;; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
   ;;
   ;; on check si \1 \2 \3 \4 ou \5 n'est pas ESI ou EDI
   ;; cela evite des bugs du genre mov ESI,EDI suivi d'un mov EDI,ESI...
   ;; comme EDI et ESI sont mapper sur BSYMB et BCONS cela ne devrait pas
   ;; arriver...
   ;;
   ;; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
   ;;
   (when (or (eqreg \1 'ESI)
             (eqreg \2 'ESI)
             (eqreg \3 'ESI)
             (eqreg \4 'ESI)
             (eqreg \5 'ESI)
             (eqreg \1 'EDI)
             (eqreg \2 'EDI)
             (eqreg \3 'EDI)
             (eqreg \4 'EDI)
             (eqreg \5 'EDI))
         (tybeep)
         (print "WARNING: prepare-index appelee avec ESI,EDI")
         (tys))
   ["	push	ebp"]
   (expgenasm2 'mov 'rwork (list 'VAL base)) ; rwork = pointeur chaine
   (if (immvalue? index)
       (expgenasm2 'ADD 'rwork (+ 8 (* (immvalue? index) (if vector? 4 1))))
       ;; le 8 sert a sauter l'en-tete (skip header)
       (expgenasm2 'LEA 'rwork (vector 'rwork index (if vector? 4 1) 8 "dword")))
   ["	mov	dword ptr [crwork],ebp"]
   ["	pop	ebp"])

(defins MOVBM
        ;; transfert \1 octets depuis \2 dans heap(\3)
        (push-heap-reg)
        (expgenasm2 'mov  'ESI \2) ; surtout pas de prepare-index !!!
        (prepare-index 'EDI \3 0)
        (expgenasm2 'mov 'ECX \1)
        ["	rep	movsb"]
        (pop-heap-reg))


(defins NXHB
        ;; il faut toujours tomber sur une adresse paire.
        (cond
              ((register? \2)
               ;; ce qui n'est jamais le cas mais ce qui est fait
               ;; est fait et n'est plus a faire
               (expgenasm2 'LEA \2 (vector \2 \1 1 HStringSize "dword"))
               (expgenasm2 'TEST \2 1)
               ["	jz	short l" @]          ; si adresse paire OK
               (expgenasm1 'INC \2)        ; sinon on la rend paire
               ["l" @ ":"])
              ((register? \1)
               (expgenasm2 'mov 'rwork \2)
               (expgenasm2 'LEA 'rwork (vector 'rwork \1 1 HStringSize "dword"))
               ;; si rwork impair,  on le rend pair
               ["	test	" 'rworkx ",1"]
               ["	jz	short l" @]
               ["	inc	" 'rwork]
               ["l" @ ":"]
               (expgenasm2 'mov \2 'rwork))   ; adresse <- nouvelle adresse
              (t
               (expgenasm2 'mov 'rwork \1) ; rwork <- size
               ["	add	" 'rwork |,| HStringSize]
               ;; si rwork impair,  on le rend pair
               ["	test	" 'rworkx ",1"]
               ["	jz	short l" @]
               ["	inc	" 'rwork]
               ["l" @ ":"]
               (expgenasm2 'ADD \2 'rwork))))  ; adresse <- nouvelle adresse

(defins NXHP
        ;;
        ;; Next Heap Pointer
        ;;
        ;;
        (cond
              ((register? \2)
               (expgenasm2 'LEA \2 (vector \2 \1 4 8 "dword")))
              (t
               (expgenasm2 'LEA 'rwork (vector \2 \1 4 8 "dword"))
               (expgenasm2 'mov \2 'rwork))))

(defins NXHS)                           ; NeXt Heap Symbol
(defins NXHF)                           ; NeXt Heap Float

(defins ADJHEAP
        ;;
        ;; met a jour le pointeur sur le heap de telle maniere que s'il pointe
        ;; sur le marqeur de fin de seg, au retour il pointe sur le premier
        ;; objet du seg suivant.
        ;;
        ;; USELESS
)

(defins HGSIZE
        ;; HeapGetSize: SIZE(\1) -> \2
        ;; recuperation de la taille sur le Heap d'un objet STRING ou VECTOR
        ;; ne pas ecrire SIZE(ai) mais HSIZE(ai) car SIZE est un mot reserve
        ;;
        (expgenasm2 'mov 'rwork (list 'VAL \1))         ; rwork = adresse HEAP
        (expgenasm2 'mov \2 '(HSIZE rwork)) )

(defins HGOBJ
        ;; Heap Get OBJ: OBJ(\1) -> \2
        (expgenasm2 'mov 'rwork (list 'VAL \1))
        (expgenasm2 'mov \2 '(OBJ rwork)) )

(defins HSSIZE
        ;; Heap Set SIZE: \1 -> SIZE(\2)
        (expgenasm2 'mov 'rwork (list 'VAL \2))
        (expgenasm2 'mov '(HSIZE rwork) \1) )

(defins HSOBJ
        ;; Heap Set OBJ: \1 -> OBJ(\2)
        (expgenasm2 'mov 'rwork (list 'VAL \2))
        (expgenasm2 'mov '(OBJ rwork) \1) )

(defins HBLT
        ;; [startsource(\1) endsource(\2)[  ->  [startdest(\3)
        ;; HBLT ne sert que dans gc.llm3 sous la forme HBLT Var1,Var2,Var3
        (push-heap-reg)
        (expgenasm2 'mov 'ESI \1)
        (expgenasm2 'mov 'EDI \3)
        (unless (eqreg \2 'ECX)
                (expgenasm2 'mov 'ECX \2) )
        ["	sub	ecx,esi"]          ; calcule le # de caracteres
        ["	mov	" 'rwork ",ecx"]
        ["	shr	ecx,2"]		  ; ecx <- ecx div 4
        ["	rep	movsd"]            ; recopie par 4 octets
        ["	mov	ecx," 'rwork]
        ["	and	ecx,3"]		  ; ecx <- ecx mod 4
        ["	rep	movsb"]		  ; recopie les derniers octets
        (pop-heap-reg))

;;
;; fonctions sur les chaines
;;
;; GetParm admet des vecteurs en entree:
;; un vecteur est compose de [base index scale size]
;; et GetParm genere "size PTR [[val(base)]+index*scale"
;;

(defins HBXMOV
        ;; string,index,val string[index] -> val  (0.5 %)
        (cond
              ((register? \3)
               (expgenasm2 'movZX  \3 (vector (list 'VAL \1) \2 1 8 "byte")) )
              (t
                 (expgenasm2 'movZX 'rwork
                             (vector (list 'VAL \1) \2 1 8 "byte"))
                 (expgenasm2 'mov \3 'rwork))))

(defins HBMOVX
        ;; \1 -> \2[\3] (\2 est un string)
        (cond
              ((register? \1)
               (expgenasm2 'mov (vector (list 'VAL \2) \3 1 8 "byte")
                           (concat \1 'L) ))
              ((immvalue? \1)
               (expgenasm2 'mov (vector (list 'VAL \2) \3 1 8 "byte") \1))
              (t
               (expgenasm2 'XCHG \1 'EAX)
               (expgenasm2 'mov (vector (list 'VAL \2) \3 1 8 "byte") 'AL)
               (expgenasm2 'XCHG \1 'EAX) )) )


(defins HBMOVM
        ;; n,str1,n1,str2,n2 => \2[\3,\3+\1] -> \4[\5..]
        ;;
        ;; transfert n bytes de str1,n1 dans str2,n2
        ;;
        ;; cas de figure:
        ;;
        ;; 1- [...1...]		         ; no pb : le sens importe peu
        ;;                 [...2...]     ;            debut <-> fin
        ;; test: fin1 < deb2
        ;;
        ;; 2- [...1...]                  ; overlap: il faut aller a reculons
        ;;       [...2...]               ;            debut <- fin (STD)
        ;; test: deb2<=fin1<fin2
        ;;
        ;; 3-       [...1...]            ; no pb : il faut en marche avant
        ;;     [...2...]		 ;            debut -> fin (CLD)
        ;; test: deb1 >= deb2
        ;;
        ;; rem: pour des raisons d'optimisation: on confond les cas 1 et 2 et
        ;; on va toujours a reculons!!!
        ;;
        (push-heap-reg)			; sauve les registres et fait le CLD
        (prepare-index 'ESI \2 \3)
        (prepare-index 'EDI \4 \5)
        (expgenasm2 'mov 'ECX \1)
        ["	jecxz	short l" @]	; rien a faire
        ["	cmp	esi,edi"]
        ["	jae	short l" @]	; cas 3 pas de danger
        ["	dec	ecx"]		; pour eviter de taper trop loin
        ["	add	esi,ecx"]	; aller a la fin de 1
        ["	add	edi,ecx"]	; aller a la fin de 2
        ["	std"]			; aller a reculons
        ["	movsb"]			; pour tenir compte du dec ecx
        ["l" @ ":"]
        ["	rep	movsb"]		; on fait le transfert
        ["	cld"]			; on reset le flag de direction
        (pop-heap-reg))

(defins HBTEQ
        ;; taille string1 index1 string2 index2 label si vrai
        (push-heap-reg)
        (prepare-index 'ESI \2 \3)
        (prepare-index 'EDI \4 \5)
        (expgenasm2 'mov 'ECX \1)
        ["	or	ecx,ecx"]       ; set Zero flag if ECX=0
        ["	repz	cmpsb"]
        (pop-heap-reg)
        (expgenbra 'JZ \6))

;;;
;;; operations sur les VECTEURS
;;;

(defins HPMOVX
        ;; val,vector,index   val -> vector[index]  1.1 %  ***
        ;; MOV dword ptr [val(\2)+\3*4+8],\1
        (expgenasm2 'mov (vector (list 'VAL \2) \3 4 8 "dword") \1 ) )

(defins HPXMOV
        ;; vector,index,val ==> val <- vector[index]
        ;; mov \3,dword ptr [val(\1)+\2*4+8]
        (expgenasm2 'mov \3 (vector (list 'VAL \1) \2 4 8 "dword") ) )

(defins HPMOVM
        ;; n,vect1,n1,vect2,n2 => \2[\3,\3+\1] -> \4[\5..]
        ;;
        ;; transfert n bytes de vect1,n1 dans vect2,n2
        ;;
        ;; cas de figure:
        ;;
        ;; 1- [...1...]		         ; no pb : le sens importe peu
        ;;                 [...2...]     ;            debut <-> fin
        ;; test: fin1 < deb2
        ;;
        ;; 2- [...1...]                  ; overlap: il faut aller a reculons
        ;;       [...2...]               ;            debut <- fin (STD)
        ;; test: deb2<=fin1<fin2
        ;;
        ;; 3-       [...1...]            ; no pb : il faut en marche avant
        ;;     [...2...]		 ;            debut -> fin (CLD)
        ;; test: deb1 >= deb2
        ;;
        ;; rem: pour des raisons d'optimisation: on confond les cas 1 et 2 et
        ;; on va toujours a reculons!!!
        ;;
        (push-heap-reg)			; sauve les registres et fait le CLD
        (prepare-index 'ESI \2 \3 t)
        (prepare-index 'EDI \4 \5 t)
        (unless (eqreg \1 'ECX)
                (expgenasm2 'mov 'ECX \1))
        ["	jecxz	short l" @]	; rien a faire
        ["	cmp	esi,edi"]	; comment sont-ils
        ["	jae	short l" @]	; cas 3 pas de danger
        ["	dec	ecx"]		; pour eviter de taper trop loin
        ["	shl	ecx,2"]		; on travaille en word (* 4)
        ["	add	esi,ecx"]	; aller a la fin de 1
        ["	add	edi,ecx"]	; aller a la fin de 2
        ["	shr	ecx,2"]		; on travaille a nouveau en objets
        ["	std"]			; aller a reculons
        ["	movsd"]			; pour tenir compte du dec ecx
        ["l" @ ":"]
        ["	rep	movsd"]         ; on fait le transfert
        ["	cld"]			; on reset le flag de direction
        (pop-heap-reg))

;;; SSection "Comparaisons de pointeurs"

(defins CABEQ
        (expgenasm2 'CMP \1 \2)
        (expgenbra 'JE \3))

(defins CABNE
        (expgenasm2 'CMP \1 \2)
        (expgenbra 'JNE \3))

(defins CHBLT
        ;; op1,op2,lab --> si op1 < op2 goto lab
        (expgenasm2 'CMP \1 \2)
	;; en cas d'inversion due a une comparaison immediat, autre chose
        (if *danger*
            (expgenbra 'JA \3)
            (expgenbra 'JB \3)))

;;; SSection "Comparaisons arithmetiques"

;;; Comparaison sur 16 bits et signee.

(defins CNBNE (CNBxx 'JNE 'JNE))
(defins CNBEQ (CNBxx 'JE 'JE))
(defins CNBLT (CNBxx 'JL 'JG))
(defins CNBLE (CNBxx 'JLE 'JGE))
(defins CNBGT (CNBxx 'JG 'JL))
(defins CNBGE (CNBxx 'JGE 'JLE))

;;; SSection "Les instructions arithmetiques"

(defun ExpGenDiv (op source secours)
   ;; secours est la pour remplacer rwork car les fonctions de division
   ;; ont une facheuse tendance a pusher EAX et EDX...
   (cond
         ((immvalue? source)
          (expgenasm2 'mov secours source)
          (expgenasm1 op secours t))
         (t
          (expgenasm1 op source t)))) ; division 16 bits

(defun divm (RegName)
   ;; division : quotient + reste
   (let ((args-on-stack ()))
        (cond
              ((and (pile? \1) (pile? \2))
               (print ";; Patch on DIV/REM used")
               (setq args-on-stack t))
              ((not (register? \2))
               ; \2 = register car MOVZX \2,??
               (error 'DIVM 'ERRBPA (list \1 \2 \3))))
        (if (or (pile? \1) (pile? \2))
            ["	mov	ebp,esp"]
            (setq *BP-set* t))
        (unless (immvalue? \1)		; trappe les div par zero
                (expgenasm2 'CMP \1 0)
                (if (null \3)
                    ["	jz	short l9" @]
                    (expgenbra 'JZ \3)))
        (cond
              ((eqreg \1 'EDX)
               (unless (eqreg \2 'EAX)
                       [" push	eax"]
                       (expgenasm2 'mov 'EAX \2) )
               ["	mov	" 'rwork ",edx"]
               ["	cwd"]
               ["	idiv	" 'rworkx]
               (expgenasm2 'movZX \2 RegName)		; recupere le resultat
               ; PUIS restaure EDX et EAX
               ["	mov	edx," 'rwork]		; restaure EDX
               (unless (eqreg \2 'EAX) ["	pop	eax"]) )
              ((and (eqreg \1 'EAX) (eqreg \2 'EDX))
               ;; Special case for \1 == EAX and \2 == EDX
               ["	mov	" 'rwork ",eax"]; sauve \1=eax
               ["	mov	eax,edx"]
               ["	cwd"]
               ["	idiv	" 'rworkx]
               ["	movzx	edx," RegName]
               ["	mov	eax," 'rwork])
              ((eqreg \1 'EAX)
               ;; default case for EAX when \2 != EDX
               (expgenasm2 'XCHG \1 \2)		; EAX <- \2, \2 <- \1
               ["	push	edx"]
               ["	cwd"]
               (ExpGenDiv \2 'rwork)
               ["	movzx	ax," RegName]		; le resultat
               ["	pop	edx"]
               (expgenasm2 'XCHG \2 'EAX))        	; \2 <- res, \1 restaure
              (t
               (unless (eqreg \2 'EAX) ["	push	eax"])	; sauve EAX
               (unless (eqreg \2 'EDX) ["	push	edx"])	; sauve EDX
               (unless (eqreg \2 'EAX)
                       (expgenasm2 'mov 'EAX \2) )		; EAX diviseur
               ["	cwd"]			; signed extend of AX in DX:AX
               (if (eqreg \2 'EAX)
                   (ExpGendiv 'IDIV \1 'RWORK)
                   (ExpGenDiv 'IDIV \1 \2)) ; division 16 BITS signee par \1
               ;; le resultat (AX ou DX) va dans \2 QUI DOIT ETRE UN REGISTRE
               (cond
                     ((not args-on-stack)
                      (expgenasm2 'movzx \2 RegName))
                     (t
                      ["	push	edi"]
                      (expgenasm2 'mov 'EDI \2)
                      (expgenasm2 'movzx 'EDI RegName)
                      (expgenasm2 'mov \2 'EDI)
                      ["	pop	edi"]))
               (unless (eqreg \2 'EDX) ["	pop	edx"])
               (unless (eqreg \2 'EAX) ["	pop	eax"])))
        ["l9" @ ":"]))

(defins QUO
        (divm 'AX))

(defins REM
        (divm 'DX))

(defun ExpGenAdd (dest source . 32bits?)
   ; petite optimisation pour l'addition : cf EPLUS A1,A2,#0,...
   (setq 32bits? (not 32bits?))
   (cond
         ((eq (immvalue? source) 0))
         ;;((eq (immvalue? source) 1) ; bien vu, mais INC n'update pas les flags
         ;; (expgenasm1 'INC dest))
         (t
          (expgenasm2 'ADD dest source 32bits?)) ))

(defins INCR
        (expgenasm1 'INC \1 t) )

(defins DECR
        (expgenasm1 'DEC \1 t) )

(defins PLUS
        (ExpGenAdd  \2 \1)
        (expgenbra 'JO \3) )

(defins DIFF
        (expgenasm2 'SUB \2 \1 t)
        (expgenbra 'JO \3) )

(defins NEGATE
        (expgenasm1 'NEG \1 t))

(defun expgenTimes (dest source)
   (cond
         ((register? dest)
          (expgenasm2 'IMUL dest source t))
         (t
          (expgenasm2 'mov 'rwork dest)
          (expgenasm2 'IMUL 'rwork source t)
          (expgenasm2 'mov dest 'rwork))))

(defins TIMES
        (ExpGenTimes \2 \1)
        (expgenbra 'JO \3) )

;;; SSection "Les instructions arithmetiques etendues"

;;;         EPLUS[  op1,op2,op3
;;;         op1 <-  valeur sur 16 bits
;;;         op2 <-  valeur sur 16 bits
;;;         op3 <-  carry
;;;         op4 ->  poids forts de op1+op2+op3
;;;         op5 ->  poids faibles de op1+op2+op3

(defins EPLUS
  (unless (register? \5) (error 'EPLUS 'ERRBPA (list \1 \2 \3 \4 \5)))
  (cond
        ((eq \1 \5)			; c'est toujours le cas en v15.21
         (ExpGenAdd  \1 \2 t)
         (ExpGenAdd  \1 \3 t)
         (expgenasm2 'mov \4 \1)
         (expgenasm2 'SHR \4 16)
         (expgenasm2 'movZX \1 \1) )
        (t
         (expgenasm2 'mov 'rwork \1)
         (ExpGenAdd  'rwork \2 t)
         (ExpGenAdd  'rwork \3 t)
         (expgenasm2 'movZX \5 'rwork)   ; \5 DOIT ETRE UN REGISTRE 386
         ["	shr	" 'rwork ",16"]	  ; 16 bits poids fort --> poids faible
         (expgenasm2 'mov \4 'rwork) ) ))

;;;  op1,op2,op3,op4,op5,op6
;;;         op5 <-  poids forts de op1*op2+op3+op4
;;;         op6 <-  poids faibles de op1*op2+op3+op4

(defins ETIMES
        (unless (register? \6)
                (error 'ETIMES 'ERRBPA (list \1 \2 \3 \4 \5 \6)))
        (expgenasm2 'mov 'rwork \1)
        (expgenasm2 'IMUL 'rwork \2)
        (ExpGenAdd 'rwork \3 t)
        (ExpGenAdd 'rwork \4 t)
        (expgenasm2 'movZX \6 'rwork)   ; \6 DOIT ETRE UN REGISTRE 386
        ["	shr	" 'rwork ",16"]	; 16 bits poids fort --> poids faible
        (expgenasm2 'mov \5 'rwork))

(defun ExpEdivAux (reg1 reg2)
   ;; exchange (EAX and reg1) and (EDX in reg2) without interfering !!!
   (cond
         ((not (eqreg reg1 'EDX))
          (unless (eqreg reg2 'EDX)
                  (expgenasm2 'XCHG reg2 'EDX))     ;; partie haute
          (unless (eqreg reg1 'EAX)
                  (expgenasm2 'XCHG reg1 'EAX)))    ;; partie basse
        ((eqreg reg2 'EAX)
         ["	xchg	eax,edx"]) ; reg1=edx and reg2=eax
        (t
         (unless (eqreg reg1 'EAX)
                 (expgenasm2 'XCHG reg1 'EAX))     ;; partie basse
         (unless (eqreg reg2 'EDX)
                 (expgenasm2 'XCHG reg2 'EDX)))))  ;; partie haute

;;;         EDIVIDE    op1,op2,op3,op4,op5
;;;         op1 -> integer  poids forts de diviseur
;;;         op2 -> B        poids faibles diviseur
;;;         op3 -> B        dividende
;;;         op4 <-  op1|op2 quo op3
;;;         op5 <-  op1|op2 rem op3

(defins EDIVIDE
	; EDIVIDE EST FAUX en general !!! mais cela marche pour LL 15.21...
        (ExpEdivAux \2 \1)      ; eax <-> \2; edx <-> \1
        (cond
              ((not (register? \3))
               ;; en 16 bits, c'est plus rapide mais faux
               (ExpGenDiv 'DIV \3 'rwork))
              (t
               ["	shl	edx,16"]
               ["	add	eax,edx"]
               ["	xor	edx,edx"]
               (expgenasm1 'div \3)))
	(ExpEdivAux \4 \5))

;         ECOMP op1,op2,lab1,lab2,lab3
;         comparaison 16 bits! non signee! = comparaison 32 bits signee ou non

(defins ECOMP
        (expgenasm2 'CMP \1 \2)      ; compare 32 bits de \1 et \2
        (cond
              ((not *danger*)
               (expgenbra 'JB \3)
               (expgenbra 'JE \4)
               (expgenbra 'JA \5))
              (t
               (expgenbra 'JB \5)
               (expgenbra 'JE \4)
               (expgenbra 'JA \3))))

;;; SSection "Les instructions logiques"

(defins LOR  (expgenasm2 'OR \2 \1 t))   ; arg1 OR  arg2  -> arg2
(defins LXOR (expgenasm2 'XOR \2 \1 t))  ; arg1 XOR arg2  -> arg2
(defins LAND (expgenasm2 'AND \2 \1 t))  ; arg1 AND arg2  -> arg2

(defins LSHIFT
        ; shift \2 de \1 positions (vers => si \1 < 0 et vers <= sinon)
        (cond
              ((immvalue? \1)
               (if (> (immvalue? \1) 0)
                   (expgenasm2 'SHL \2 \1 t)        ; shift 16 bits
                   (expgenasm2 'SHR \2 (- (immvalue? \1)) t) ))
              (t
               (unless (eqreg \1 'ECX)
                       (expgenasm2 'XCHG \1 'ECX))    ; ECX <-> \1
               ["	or	cl,cl"]        ; cmp cl,0
               ["	jl	short l1" @]
               (if (eqreg \2 'ECX)
                   (expgenasm2 'SHL \1 'CL t)   ; XCHG a mis \2 dans \1
                   (expgenasm2 'SHL \2 'CL t) )
               ["	jmp	short l2" @]
               ["l1" @ ":"]
               ["	neg	cl"]
               (if (eqreg \2 'ECX)
                   (expgenasm2 'SHR \1 'CL t)   ; XCHG a mis \2 dans \1
                   (expgenasm2 'SHR \2 'CL t) )
               ["l2" @ ":"]
               (unless (eqreg \1 'ECX)
                       (expgenasm2 'XCHG \1 'ECX))    ; ECX <-> \1
               )))


;;; SSection "CONStructions des cellules de liste"

;;;         SFCONS arg          arg -> FCONS
;;;         GFCONS arg          FCONS -> arg
;;;         NCONS car           car <- (car)
;;;         XCONS cdr,car       car <- (car . cdr)
;;;         CONS car,cdr        cdr <- (car .cdr)
;;;         GCFLIP              echange les zones


(defins SFCONS
        ;; FCONS <- \1
        (expgenasm2 'mov 'FCONS \1))

(defins GFCONS
        ;;  \1 <- FCONS
        (expgenasm2 'mov \1 'FCONS))


(when  (eq (pgetvalue 'STOPCOPY) 0)  ; on n'est pas en STOP&COPY

;;; (defvar *RFCONS* (if (register? 'FCONS) 'FCONS 'rwork))

;;; pour optimiser testcons, au lieu de regarder si FCONS est toujours un cons
;;; et sauter le GC le cas echeant, on fait l'inverse. Comme le cas le plus
;;; frequent est que FCONS est un cons cela nous evite le saut au dessus de
;;; l'appel du GC... d'ou un gain de 4 cycles !!!
;;; la sequence devient
;;;
;;;                     CMP BCONS,FCONS
;;;                     JA  L
;;;               L1:
;;;                     MOV (CAR FCONS),A1
;;;
;;;               ;;; et repousser au niveau du END final grace a *GC_Call*
;;;
;;;               L:
;;;                     CALL NEAR PTR GCCONS
;;;                     JMP NEAR PTR L1
;;;
;;;                     END
;;;

(defvar *GC_Call* ())

(defun testcons ()
   ;;
   ;; teste si la zone des CONS est pleine
   ;;
   ;; en sortie FCONS  pointe sur le 1er Free cons
   ;;
   (xrefp 'GCCONS)
   (expgenasm2 'CMP 'FCONS 'BCONS)   ; FCONS est-il un CONS?
   ["	jb	near ptr l" @]       ; FCONS n'est pas un CONS : GC
   ["l1" @ ":"]
   (newl *GC_Call* (cons (catenate "l" (#:expand:genlab))
                         (catenate "l1" (#:expand:genlab)))))

(defun testrcons ()
   ;; teste si rwork n'a pas ete corrompu dans un MOV
   ;; si oui, le remet a jour et previent: cf fct CONS
   (unless (register? 'FCONS)
           (when (gt *memory* 1)   ; rwork a ete corrompu dans la bagarre
                 (with ((outchan ()))
                       (tybeep)
                       (print "CONS:" \1 |,| \2))
                 (expgenasm2 'mov rwork 'FCONS))))

(defins NCONS
        ;;
        ;; (NCONS 'A) = (A . NIL)
        ;;
        (unless (register? \1) (error 'NCONS 'ERRBPA (list \1)))
        ;; cf ligne (*)
        (testcons)
        (unless (register? \1) (error 'errbpa 'NCONS \1))
        ["	mov	" 'rwork ",dword ptr [" 'fcons "]"]
        (expgenasm2 'mov '(CAR rwork) \1)	; le  car <- \1
        (expgenasm2 'mov \1 'NIL)		; \1 <- nil
        (expgenasm2 'XCHG '(CDR rwork) \1)      ; CDR(cons) <- NIL (*)
        (expgenasm2 'XCHG 'FCONS \1))           ; CDR(cons) <- NIL (*)

(defins XCONS
        ;;
        ;; (XCONS 'A 'B) = (B . A)
        ;;
        (unless (register? \2) (error 'XCONS 'ERRBPA (list \1 \2)))
        ; sinon on aurait des ennuis avec la ligne (*)
        (unless (register? \2) (errbpa 'XCONS (list \1 \2)))
        (testcons)
        ["	mov	" 'rwork ",dword ptr [" 'fcons "]"]
        (expgenasm2 'mov '(CAR rwork) \2)	; le  car <- \2
	(expgenasm2 'mov \2 \1)			; \2<- \1
	; the previous line must *NOT* modified rwork !!!
        (expgenasm2 'XCHG '(CDR rwork) \2)      ; CDR(cons) <- \1 (*)
	(expgenasm2 'XCHG 'FCONS \2))

(defins CONS
        ;;
        ;; (CONS 'A 'B) = (A . B)
        ;;
        (testcons)
        ;; on se sert de BCONS comme reg
        ["	xchg	dword ptr [" 'fcons "]," 'bcons]
        (expgenasm2 'mov '(CAR BCONS) \1)        ; (car FCONS) <- \1
        (cond
              ((register? \2)
               (expgenasm2 'XCHG '(CDR BCONS) \2)	; (cdr FCONS) <- \2
               ; \2 <- new FCONS
               (expgenasm2 'XCHG \2 'BCONS)		; \2 <-  old FCONS
               ; FCONS <- new FCONS
               )
              (t
               (expgenasm2 'mov 'rwork \2)
               ;; rwork = new FCONS
               ["	xchg	[" 'cdr "+" 'bcons "]," 'rwork]
               ;; rwork = old FCONS
               ["	xchg	" 'bcons |,| 'rwork]
               (expgenasm2 'mov \2 'rwork)))
        ["	xchg	dword ptr [" 'fcons "]," 'bcons ])

) ; end when STOPCOPY

(defins GCFLIP)
(defins BTOLD)

;;; SSection "Gestion des caracteres"

;;;        Changement de Casse

(defins UPPERC
        ;; llm3 se charge de controler si le caractere est dans ['A','Z']
        (expgenasm2 'SUB \1 32))


(defins LOWERC
        ;; llm3 se charge de controler si le caractere est dans ['A','Z']
        (expgenasm2 'ADD \1 32))

;;; SSection "Gestion des symboles"
;;;         FENTRY nom (2 mots ),type (1 mot ): declaration d'un point d'entree
;;;         reserve un mot de type .XXX qui contiendra l'adresse
;;;         du symbole XXX, prepare l'adresse de la fonction XXX
;;;         de type XDEF et prepare le ftype ._XXX

(defins FENTRY
        (setq \1 (get-real-name \1))
        (when proc_cou
              [proc_cou "	endp"])
        (setq proc_cou \1)
        (with ((outchan *dat-chan*))
              [(symbole? (list '|.| \1)) "	dd	0"])
        (with ((outchan *equ-chan*))
              ["z_" \1 "	equ	" (getvalue \2)])
        [""]
        [\1  "	proc	near"] )

(defins MAKFNT                  ;  nom,plen,pname  = 4.9 % ***
        (when (eq (cadr (explode \3)) 39)    ;  because quote s'ecrit en
              (setq \3  "''''"))             ;  double
        (setq \1 (get-real-name \1))
        (with ((outchan *dat-chan*))
              (inceti)
              (if (eq (cadr \2) 0)
                  ["pn" (eti) "	db	0"]
                  ["pn" (eti) "	db	" \3])
              ["	even"])
        (expgenasm2 'mov 'A1 \2)
        (expgenasm2 'mov 'A2 (list '|%| (concat "pn" (eti))))
        (expgenasm2 'mov 'A3 (list '|@| \1))
        (expgenasm2 'mov 'A4 (list '|%| (symbole? (list '|.| \1))) )
        ["	push	z_" \1]
        ["	call	near ptr inisymb"])

(defins MAKCST                ;  nom,plen,pname 1.2 % ***
        (inceti)
        (with ((outchan *dat-chan*))
              [(symbole? (list '|.| \1)) "	dd	0"] ; genere $truc DD 0
              (if (eq (cadr \2) 0)
                  ["pn" (eti) "	db	0"]
                  ["pn" (eti) "	db	" \3])
              ["	even"])
        (expgenasm2 'mov 'A1 \2)
        (expgenasm2 'mov 'A2 (list '|%| (concat "pn" (eti))))
        (expgenasm2 'mov 'A3 (list '|%| (symbole? (list '|.| \1))))
        ["	call	near ptr inicst"])

;;;  SSection "Pour avancer dans les zones et compter"

(defins CONVTOK
        (when (or (pile? \1) (pile? \2) (pile? \3) (pile? \4))
              (error 'CONVTOK 'ERRBPA (list \1 \2 \3 \4)))
        (expgenasm2 'MOV 'EBP \2)
        (expgenasm2 'SUB 'EBP \1)
        ["	push	ebp"]
        ["	and	ebp,1023"]	; modulo 1 Ko
        (expgenasm2 'mov \4 'ebp)
        ["	pop	ebp"]
        ["	shr	ebp,10"]
        (expgenasm2 'mov \3 'ebp))

(defins NXNUMB)

(defins NXFLOAT
        (unless 31BITFLOATS
                (nxxx 8 'BVECT)))

(defins NXVECT  (nxxx 8  'BSTRG))
(defins NXSTRG  (nxxx 8  'BSYMB))
(defins NXSYMB  (nxxx 32 'BCONS))
(defins NXCONS  (nxxx 8  'ECONS))

;;;
;;; .SSection "Les Macros LLM3 pour le calcul flottant"
;;;

;;;
;;; dans ces macros il faut s'efforcer d'entrelacer les instructions 386
;;; et 387 pour profiter au maximum du parallelisme !!!
;;;

(defins CVFTOA
        ;; traduction ASCII d'un flottant
        (unless (register? \3)
                (error 'CVFTOA "3rd argument is not a register" \3))
	(prepare-index-rwork \2 0)        ; debut du string sur le heap
        (with-C 1 ;; + 1 float
           ["	push	dword ptr [crwork]"]  ; adresse debut reel string
           (push-float1 \1)                  ; push du flottant
           (call-C-function 'llrt_cvftoa)
           ;; get result (string size) in crwork
	   ["	mov	dword ptr [crwork],eax"])
        ;; \3 recoit la longueur de la chaine
	["	mov	" \3 ",dword ptr [crwork]"])

(defins CVATOF                                ;strg n lab op
        ;; conversion chaine ASCII en flottant
        ["	;; CVATOF"]
        (prepare-index-rwork \1 0)	; rwork <- adresse string
	["	mov	" 'rwork ",dword ptr [crwork]"]
        (cond
              ((register? \2)
               ["	mov	byte ptr [" 'rwork "+" \2 "],0"])
              ((immvalue? \2)
               ["	mov	byte ptr [" 'rwork "+" (immvalue? \2) "],0"])
              (t
               (expgenasm2 'mov 'EAX \2)	; la taille de la strg
               ["	mov	byte ptr [" 'rwork "+eax],0"]))
        (with-C 1
           ["	push	dword ptr [crwork]"]  ; adresse debut reel string
           (call-C-function 'llrt_cvatof)
           (unless (float-stack-p)
                   (let ((accusingle1 (get-c-name 'accusingle1))
                         (accusingle2 (get-c-name 'accusingle2)))
                        (xrefi accusingle1)
                        (xrefi accusingle2)
                        ["	mov	" accusingle1 ",eax"]
                        ["	mov	" accusingle2 ",edx"]
                        ["	fld	qword ptr [" accusingle1 "]"])))
        (expsetfloat \4 t)     ; range le flottant
        ["	;; CVATOF"])

(defins FIX
        ;; un flottant devient un entier 16 bits !!!
        (let ((accusingle1 (get-c-name 'accusingle1)))
             (unless (eqstring *asm-file* "ll386.asm")
                     (xrefi accusingle1))
             (xrefi 'aux1)
             (expgenasmf7 'fld \1)          ; push value onto 387 stack
             ["	fstcw	word ptr [aux1]"]   ; get  current cw
             ["	fstcw	word ptr [aux1+2]"] ; save current cw
             ["	fwait"]
             ["	or	word ptr [aux1],0C00h"] ; set cw to chop to 0
             ["	fldcw	word ptr [aux1]"]
             ["	fistp	word ptr [" accusingle1 "]"]; store it as an integer
             ["	fldcw	word ptr [aux1+2]"] ; reset CW to default mode
             ["	fwait"]
             (expgenasm2 'movzx \1 accusingle1)))

(defins FLOAT
        ;; \1 <- float(\1)
        ;; l'entier devient un flottant !!!
        (let ((accusingle1 (get-c-name 'accusingle1)))
             (unless (eqstring *asm-file* "ll386.asm")
                     (xrefi accusingle1))
             (expgenasm2 'mov accusingle1 \1) ; accusingle1 <- entier
             ["	fild	word ptr [" accusingle1 "]"]
             (expsetfloat \1 ())))    ; range le flottant

(defun expgenopf (op)
   ;; genere le code associe aux operations flottantes a 2 arguments style PLUS
   (with-C 0 ;; +2 floats
      (push-float2 \2)
      (push-float1 \1)
      (call-C-function op)
      (unless (float-stack-p)
              (let ((accusingle1 (get-c-name 'accusingle1))
                    (accusingle2 (get-c-name 'accusingle2)))
                   (xrefi accusingle1)
                   (xrefi accusingle2)
                   ["	mov	" accusingle1 ",eax"]
                   ["	mov	" accusingle2 ",edx"]
                   ["	fld	qword ptr [" accusingle1 "]"])))
   (expsetfloat (if (eq op 'llrt_power) \3 \2) t)) ; range le flottant

(defun expgenop1f (op)
   ;; genere le code associe aux operations flottantes a 1 argument style SIN
   (with-C 0 ;; +1 float
      (push-float1 \1)
      (call-C-function op)
      (unless (float-stack-p)
              (let ((accusingle1 (get-c-name 'accusingle1))
                    (accusingle2 (get-c-name 'accusingle2)))
                   (xrefi accusingle1)
                   (xrefi accusingle2)
                   ["	mov	" accusingle1 ",eax"]
                   ["	mov	" accusingle2 ",edx"]
                   ["	fld	qword ptr [" accusingle1 "]"])))
   (expsetfloat \2 t))   ; range le flottant

(defun expgenopf7 (op)
   ;; genere le code associe aux operations flottantes 387
   (expgenasmf7 'fld \1)
   (expgenasmf7 op \2)
   (expsetfloat \2 ()))

(defins FPLUS
        (expgenopf7 'fadd))

(defins FDIFF
        (expgenopf7 'fsubr))

(defins FTIMES
        (expgenopf7 'fmul))

(defins FQUO
        (expgenopf7 'fdivr))

;;; les tests flottants

(defun expgen-compare-float (op)
   ;; genere le code associe a une comparaison flottante 387
   (when (or (pile? \1) (pile? \2))
         (setBP))
   (expgenasmf7 'fld \1)
   ["	push	eax"]                ; sauve EAX
   (expgenasmf7 'fcomp \2)
   ["	fstsw	ax"]
   ["	sahf"]                       ; store flags 387 in flags 386
   ["	pop	eax"]
   (expgenbra op \3)  )

(defins CFBEQ
        (expgen-compare-float 'JE))

(defins CFBNE
        (expgen-compare-float 'JNE))

(defins CFBLT
        (expgen-compare-float 'JB))

(defins CFBLE
        (expgen-compare-float 'JBE))

(defins CFBGT
        (expgen-compare-float 'JA))

(defins CFBGE
        (expgen-compare-float 'jae))

;;; les fonctions trigo ou speciales

(defun ExpGenTrigf7 (op)			; 387
   (let ((accusingle1 (get-c-name 'accusingle1)))
        (unless (eqstring *asm-file* "ll386.asm")
                (xrefi accusingle1))
        (expgenasmf7 'fld \1)             ; TOS <- X
        ["	" op]                     ; calcule le sinus ou le cosinus
        ["	fstsw	word ptr [" accusingle1 "]"] ; accusingle1 <- status word
        ["	test	word ptr [" accusingle1 "],400h"]; test C2
        ["	jz	short l" @]         ; not set: OK calcul fini
        ; sinon il faut normaliser l'argument
        ["	fldpi"]                   ; TOS <- PI
        ["	fadd	st,st(0)"]        ; TOS <- 2*PI
        ["	fxch"]                    ; st(0) = x, st(1) = 2*PI
        ["l1" @ ":"]
        ["	fprem1"]		; calcule x mod 2*pi
        ["	fstsw	word ptr [" accusingle1 "]"] ; accusingle1 <- status word
        ["	test	word ptr [" accusingle1 "],400h"] ; test C2
        ["	jnz	short l1"  @]	; tant que C2<>0, reduire
        ["	" op]			; recalcule le sinus ou le cosinus
        ["l" @ ":"]
        (expsetfloat \2 ())))

;;;
;;; Macros using 387 FPU equivalent instructions.
;;;

(defun expgen-intrinsic (op)
   ["	;; Calling intrinsic " op]
   (expgenasmf7 'fld \1)          ;; push value onto 387 stack
   ["	" op]
   (expsetfloat \2 nil)           ;; C is not called => nil
   ["	;; Done with " op])

(defins SIN
        (expgen-intrinsic 'fsin))

(defins COS
        (expgen-intrinsic 'fcos))

(defins ASIN
        ;; (expgenop1f 'llrt_asin)  ; call C instead.
        ["	;; Calling intrinsic asin"]
        (expgenasmf7 'fld \1)       ; TOS <- Y
        ["	fst	st(1)"]     ; copy Y dans ST(1)
        ["	fmul	st,st(0)"]  ; ST(0) <- Y*Y
        ["	fld1"]              ; ST(0) <- 1
        ["	fsubr"]             ; ST(0) <- 1-Y*Y
        ["	fsqrt"]             ; ST(0) <- sqrt(1-Y*Y)
        ["	fpatan"]            ; ST(0) <- ASIN(Y)
        (expsetfloat \2 ())
        ["	;; Done with asin"])

(defins ACOS
        ;; (expgenop1f 'llrt_acos)    ; call C isntead.
        ["	;; Calling intrinsic acos"]
        (expgenasmf7 'fld \1)        ; TOS <- Y
        ["	fst	st(1)"]      ; copy Y to ST(1)
        ["	fmul	st,st(0)"]   ; ST(0) <- Y*Y
        ["	fld1"]               ; ST(0) <- 1
        ["	fsubr"]              ; ST(0) <- 1-Y*Y
        ["	fsqrt"]              ; ST(0) <- sqrt(1-Y*Y)
        ["	fxch"]               ; exchange ST(0) and ST(1)
        ["	fpatan"]             ; ST(0) <- ACOS(Y)
        (expsetfloat \2 ())
        ["	;; Done with acos"])

(defins ATAN
        ["	;; Calling intrinsic atan"]
        (expgenasmf7 'fld \1)              ; TOS <- Y
        ["	fld1"]                      ; TOS <- 1
        ["	fpatan"]                    ; TOS <- ATAN(Y)
        (expsetfloat \1 ())
        ["	;; Done with atan"])

(defins EXP   ; exp(x)= 2**(x*log2(e))
;        (expgenop1f 'llrt_exp))
;#|
        ["	;; Calling intrinsic exp"]
        (expgenasmf7 'fld \1)               ; TOS <- X
        ["	fldl2e"]                    ; TOS <- LOG2(e)
        ["	fmul"]                      ; TOS <- X*LOG2(e)
        ["	fld	st(0)"]             ; st(0)=x,st(1)=1,st(2)=x
        ["	frndint"]                   ; st(0)=[x] ( = I ),...
        ["	fxch	st(1)"]             ; st(0)=x,st(1)=1,st(2)=I
        ["	fsub	st(0),st(1)"]       ; st(0)=x-[x] (= F)
        ["	f2xm1"]                     ; st(0)=2**F-1,st(1)=1,st(2)=I
        ["	fld1"]                      ; st(0)=2**F-1,st(1)=1,st(2)=I
        ["	faddp   st(1), st(0)"]      ; st(0)=2**F,st(1)=I
        ["	fscale"]                    ; st(0)=2**(I+F)=2**X, st(1)=I
        (expsetfloat \2 ())
        ["	fstp	st(0)"]		    ; pop stack
        ["	;; Done with exp"])
;|#

(defins POWER  ; x**y = 2**(y*log2(x))
;        (expgenopf 'llrt_power))
;#|
        (unless (equal \1 \3)
                ;; Only support POWER with \1 == \3 as with "POWER A1,A2,A1"
                (error 'POWER 'errbpa (list \1 \3)))
        ["	;; Calling intrinsic power"]
        (expgenasmf7 'fld \2)              ; TOS <- Y
        (expgenasmf7 'fld \1)              ; st(1) = y, st(0) = x
        ["	fyl2x"]                    ; st(0) = x*log2(y)
        ;; Compute 2**st(0) (st(0)=x)
        ["	fld1"]                     ; st(0)=1, st(1)=x
        ["	fld	st(1)"]            ; st(0)=x,st(1)=1,st(2)=x
        ["	frndint"]                  ; st(0)=[x] ( = I ),...
        ["	fxch	st(2)"]            ; st(0)=x,st(1)=1,st(2)=I
        ["	fsub	st,st(2)"]         ; st(0)=x-[x] (= F)
        ["	f2xm1"]                    ; st(0)=2**F-1,st(1)=1,st(2)=I
        ["	fadd"]                     ; st(0)=2**F,st(1)=I
        ["	fscale"]                   ; st(0)=2**(I+F)=2**X, st(1)=I
        (expsetfloat \3 ())                ; Already tested \3 == \1
        ["	fstp	st(0)"]		   ; pop stack
        ["	;; Done with power"])
;|#

(defins LOG
        ["	;; Calling intrinsic log"]
        (expgenasmf7 'fld \1)
        ["	fldln2"]
        ["	fxch	st(1)"]
        ["	fyl2x"]
        (expsetfloat \2 ())
        ["	;; Done with log"])

(defins LOG10
        ["	;; Calling intrinsic log10"]
        (expgenasmf7 'fld \1)
        ["	fldlg2"]
        ["	fxch	st(1)"]
        ["	fyl2x"]
        (expsetfloat \2 ())
        ["	;; Done with log10"])

(defins SQRT
        (expgen-intrinsic 'fsqrt))

; .SSection "Les Macros LLM3 pour la manipulation me'moire"

;;;         HLADR   h,l,result   h,l -> result
;;;         ADRHL   adr,h,l      high adr -> h, low adr -> l
;;;         MEMSET  op1,op2      op1 -> MEM(op2)
;;;         MEMGET  op1,op2      MEM(op1) -> op2
;;;         MEMMOVM src1,src2,dest [src1 src2[ -> [dest ..

(defins ADRHL
        (unless (and (register? \1) (register? \3))
                (error 'ADRHL 'errbpa (list \1 \2 \3)))
        (expgenasm2 'mov \2 \1)
        (expgenasm2 'SHR \2 16)       ; high into low part
        (expgenasm2 'movZX \3 \1))

(defins HLADR
        (cond ((eq \3 \1)
               (expgenasm2 'SHL \3 16)       ; low into high part
               (expgenasm2 'OR \3 \2))
              ((eq \3 \2)
               (expgenasm2 'mov 'rwork \1)     ; rwork <- \1
               ["	shl	" 'rwork ",16"]
               (expgenasm2 'OR \2 'rwork))     ; insert high part
              (t
                 (expgenasm2 'mov \3 \1)
                 (expgenasm2 'SHL \3 16)
                 (expgenasm2 'OR \3 \2)) )      ; insert low part
)

(defins MEMSET
        (unless (and (register? \1) (register? \2))
                (error 'MEMSET 'errbpa (list \1 \2)))
        ;; CJ it should be word, but loader must be rewriten !!
        ["	mov	byte ptr [" \2 "]," (concat \1 "l")])


(defins MEMGET
        (unless (and (register? \1) (register? \2))
                (error 'MEMGET 'errbpa (list \1 \2)))
        ;; CJ it should be word, but loader must be rewriten !!
        ["	movzx	" \2 ", byte ptr [" \1 "]"])

(defins MEMMOVM)

;;; SSection "Les macros LLM3 pour les travaux sur bit"

(defun ExpGenInv (opbit optest)
   (unless (eqstring *asm-file* "ll386.asm")
           (xrefi 'btbin))
   (expgenasm2 'mov 'rwork \1)
   ["	sub	" 'rwork |,| 'bcons]	; offset in CONS
   ["	shr	" 'rwork ",3"]		; offset bit
   ["	push	eax"]
   ["	mov	eax,dword ptr [btbin]"]
   ["	" opbit "	dword ptr [eax]," 'rwork]
   ["	pop	eax"]
   (when optest (expgenbra optest \2)))

(defins BFINVSBL
        (ExpGenInv 'BT 'JNC))

(defins BTINVSBL
        (ExpGenInv 'BT 'JC))

(defins STINVSBL
	(ExpGenInv 'BTS ()) )

(defins CLINVSBL
        (ExpGenInv 'BTR ()) )

;;;
;;;  les bits de marquage GC
;;;

(defun ExpGenMark (opbit optest)
   (xrefi 'btbgc)
   (expgenasm2 'mov 'rwork \1)
   ["	sub	" 'rwork |,| 'bnumb]	; offset in Lisp
   ["	shr	" 'rwork ",3"]		; offset bit (1 object = 1 bit)
   ["	push	eax"]
   ["	mov	eax,dword ptr [btbgc]"]
   ["	" opbit "	dword ptr [eax]," 'rwork]
   ["	pop	eax"]
   (when optest
         (expgenbra optest \2)))

(defins BFMARK
        (ExpGenMark 'BT 'JNC))

(defins BTMARK
        (ExpGenMark 'BT 'JC))

(defins STMARK
        (ExpGenMark 'BTS ()) )

(defins TCMARK
        (ExpGenMark 'BTR 'JC) )

(defins GCSTART)
(defins GCSTOP)

(defins ASS
        (let ((chaine_min ""))
             (mapcar #'(lambda (c)
                        (setq chaine_min
                              (catenate chaine_min
                                        (string (ascii (lowercase c))))))
                     (explode \1))
             [chaine_min]))

;;;
;;; .SSection "Les Macros LLM3 pour les entrees/sorties"
;;;

;;;	passage Lisp - C , C - Lisp

(defins REG_SAV
        ["	push	eax"]
        ["	push	ebx"]
        ["	push	ecx"]
        ["	push	edx"]
        ["	push	esi"]
        ["	push	edi"]
        ["	push	ebp"])

(defins REG_RES
        ["	pop	ebp"]
        ["	pop	edi"]
        ["	pop	esi"]
        ["	pop	edx"]
        ["	pop	ecx"]
        ["	pop	ebx"]
        ["	pop	eax"])

;;;	init et retour du break

(defins RET_LBREAK
        (if (use-not-retn-p)
            ["	ret"]
            ["	ret	4"]))

(defins INIT_LBREAK )
              

;;;	init et retour erreur machine

(defins RET_LMERRO
        (if (use-not-retn-p)
            ["	ret"]
            ["	ret	4"]))

(defins INIT_LMERRO )

(defins DATE
        ;; on utilise directement la GDT dans DATE
        (systemxx1 'cdate ()))


(defins TTYIN
        ;; lit un caractere dans \1 (toujours un registre).
        ;;
        (let ((etiq (#:expand:genflab 'l)))
             (#:expand:prin-label etiq)
             (#:expand:INTEST)
             (with-C 0
                (call-C-function 'ttyin)
                ["	mov	dword ptr [crwork],eax"])
             ["	cmp	dword ptr [crwork],0ffh"]
             (expgenbra 'je etiq)
             ["	mov	" 'rwork ",dword ptr [crwork]"]
             (expgenasm2 'MOV \1 'rwork)))  ; recupere le caractere dans \1

(defins TTYIS
        ;;         TTYIS   OP1,CC     CC=0 SI OP1 EST CHARGE  SINON CC<>0
        ;; lit un caractere sans attente
        ;;
        (unless (register? \1)
                (error 'ttyis 'ERRBPA (list \1 \2)))
        (with-C nil
                ["	push	offset ds:" 'dux1] ; le buffer choisi
                (call-C-function 'ttys)
                (xrefi 'DUX1)
                (when (use-not-retn-p)
                      ["	add	esp,4"])
                ["	cmp	eax,-1"]
                ["	je 	short tys" @]
                ["	xor	eax,eax"]
                ["	mov 	al,byte ptr [" 'dux1 "]"]
                ["tys" @ ":"]
                ["	mov	dword ptr [crwork],eax"])
        ["	mov	" 'rwork ",dword ptr [crwork]"]
        (expgenasm2 'MOVZX \1 'rworkX)  ; le caractere lu (eventuellement)
        ["	shr	" 'rwork ",16"]
        ;; le code erreur
        (expgenasm2 'MOV \2 'rwork))

;;;       TTYINSTR strg,count
;;;       lit une ligne sans echo ni fin de ligne dans strg
;;;       count = nb de car. lus

(defins TTYINSTR
        ;; utilise une fois sous la forme TTYINSTR A1,A1 dans physio.llm3
        ;; on suppose qu'on remplit une chaine nouvelle
        ;; (pas de limitation de place)
        ["	;; Entering TTYINSTR"]
        (prepare-index-rwork \1 0)
        (with-C 2
                ["	push	dword ptr [crwork-4]"] ; taille de la chaine
                ["	push	dword ptr [crwork]"]   ; adresse reelle chaine
                (call-C-function 'ttyinstr)
                ["	mov	dword ptr [crwork],eax"])
        ["	mov	" \2 ",dword ptr [crwork]"]
        ["	;; Leaving TTYINSTR"])

(defins TTYSTRG
        ;; size,string
        (when (or (pile? \1) (pile? \2))
              (error 'TTYSTRG 'ERRBPA (list \1 \2)))
        ["	;; Entering TTYSTRG"]
        (prepare-index-rwork \2 0)
        (with-C 2
                ["	push	dword ptr [crwork]"]   ; adresse reelle chaine
                (expgenasm1 'push \1)          ; #caractere
                (call-C-function 'ttyout))
        ["	;; Leaving TTYSTRG"])

;;;         TTYMSG       LEN,ADR   SORT LE MESSAGE
;;;                      QUI EST UN OPERANDE IMMEDIAT "...."

(defins TTYMSG
        (when (pile? \1)
              (error 'ttymsg 'errbpa \1))
        (with ((outchan *dat-chan*))
              ["lab_m" @ "  db " \2]
              ["	even"])
        (with-C 2
                ["	push	offset ds:lab_m" @]
                (expgenasm1 'push \1)		; nombre de caracteres
                (call-C-function 'ttyout)))

;;;         TTYCRLF             RETOUR CHARIOT SUR UN TTY

(defins TTYCRLF
        (code)
        (with-C 0
           (call-C-function 'ttycrlf)))

;;;
;;; .SSection "gestion des fichiers"
;;;

(defun open1 (fctname)
   ;;
   ;; fonction d'interfacage type #canal,strg,#strg   code erreur
   ;;                                \1    \2              \3
   ;;
   (when (pile? \1)
         (error 'open1 'errbpa (list fctname \1 \2 \3)))
   (code)
   (prepare-index-rwork \2 0)
   (with-C 2
           ["	push	dword ptr [crwork]"]  ; adresse debut reel string
           (expgenasm1 'push \1)              ; no canal
           (call-C-function fctname)
	   ["	mov	dword ptr [crwork],eax"])
   ["	mov	" \3 ",dword ptr [crwork]"]) ; \3 recoit le code.

(defun open2 (fctname)
   ;; --> sortie fichier
   ;; fonction d'interfacage type #canal,strg,#size   code erreur
   ;;                               \1    \2    \3        \4
   ;;
   (when (or (pile? \2) (pile? \1))
         (error 'open2 'errbpa (list fctname \1 \2 \3 \4)) )
   (code)
   (prepare-index-rwork \2 0)
   (with-C 3
           ["	push	dword ptr [crwork]"]  ; adresse debut reel string
           (expgenasm1 'push \3)		; #caractere
           (expgenasm1 'push \1)           ; no canal
           (call-C-function fctname)
	   ["	mov	dword ptr [crwork],eax"])
   ["	mov	" 'rwork ",dword ptr [crwork]"]
   (expgenasm2 'MOV \4 'rwork))    ; \4 <- code erreur

(defun open3 (fctname)
   ;; --> lecture fichier : INBFx
   ;; fonction d'interfacage type #canal,strg,#strg,   #car lus  code erreur
   ;;                              \1    \2       \3          \4
   ;;
   (when (or (pile? \1) (not (register? \3)))
         (error 'open3 'errbpa (list fctname \1 \2 \3 \4)) )
   (code)
   (xrefi 'dux1)		; patch hr le 25/07/89 *ptaille
   (prepare-index-rwork \2 0)
   (with-C 3
           ["	push	offset ds:dux1"]	; nb de caracteres lus
           ["	push	dword ptr [crwork]"]  ; adresse debut reel string
           (expgenasm1 'push \1)
           (call-C-function fctname)
	   ["	mov	dword ptr [crwork],eax"])
   ["	mov	" 'rwork ",dword ptr [crwork]"]
   (expgenasm2 'MOV \3 'dux1)
   (expgenasm2 'MOV \4 'rwork))		; le code erreur

(defins INFILE  (open1 'infile))
(defins OUFILE  (open1 'oufile))
(defins APFILE  (open1 'apfile))
(defins INFILEB (open1 'infileb))
(defins OUFILEB (open1 'oufileb))
(defins APFILEB (open1 'apfileb))


(defins OUTF    (open2 'outf))
(defins OUTFL   (open2 'outfl))
(defins OUTFLB  (open2 'outflb))

(defins INBF    (open3 'inbf))
(defins INBFB   (open3 'inbfb))

(defins FDELE   (systemxx1 'fdele \2))
(defins FPROBE  (systemxx1 'fprobe \2))
(defins MKDIR   (systemxx1 'llmkdir \2))
(defins RMDIR   (systemxx1 'llrmdir \2))

(defins FRENA   (systemxx2 'frena))
(defins FCOPY   (systemxx2 'fcopy))
(defins FCLOS   (systema1  'fclos \2))

;;;
;;; les images memoire
;;;

;;;         CORSAV  STRG,CC      SAUVE UNE IMAGE MEMOIRE

(defins CORSAV
	(xrefp 'hgc)
        (when (eqn (getvalue 'UNDERSCORED) 0)
              (xrefi 'ccode)
              (xrefi '_ccode)
              (xrefi 'cheap)
              (xrefi '_cheap))
	(xrefp 'll_corsav)
	(expgenasm1 'push \1)
	; on commence par un petit GC des familles
	["	call	near ptr hgc"]
        (when (eqn (getvalue 'UNDERSCORED) 0)
              (expgenasm2 'mov '_ccode 'ccode)
              (expgenasm2 'mov '_cheap 'cheap))
	(expgenasm1 'pop \1)
        (prepare-index-rwork \1 0)
        ["	mov	" 'rwork ",dword ptr [crwork]"]
	["	call	near ptr ll_corsav"]	; chaine, recupere dans
	(expgenasm2 'mov \2 'rwork))		; ll_corsav

;;;         COREST STRG,CC      RESTAURE UNE IMAGE MEMOIRE

(defins COREST
	(xrefi 'filiz)
	(xrefp 'll_corest)
        (prepare-index-rwork \1 0)
        ["	mov	" 'rwork ",dword ptr [crwork]"]
	["	cmp	byte ptr [" 'filiz "],0"]
	["	jne	short cor" @]	; le-lisp -r toto
	["cor" @ ":"]
	["	mov	byte ptr [" 'filiz "],0"]
        ["	call	near ptr ll_corest"]
        (expgenasm2 'mov \2 'rwork))

;;;
;;; .SSection "Les fonctions syste`me"
;;;

(defins CLINE (systemxx1 'cline ()) ) ; <STRG> ENVOIE UNE CHAINE AU SYSTEME

(defins OUT
        (let ((out (get-c-name 'out)))
             (xrefp out)
             ["	jmp	near ptr " out]))

(defins RUNTIME
        ;;  OP  RETOURNE LE RUNTIME flottant
        (let ((accusingle1 (get-c-name 'accusingle1))
              (accusingle2 (get-c-name 'accusingle2)))
             (xrefi accusingle2)
             (with-C 0
                (call-C-function 'runtime)
                (unless (float-stack-p)
                        (xrefi accusingle1)
                        ["	mov	" accusingle1 ",eax"]
                        ["	mov	" accusingle2 ",edx"]
                        ["	fld	qword ptr [" accusingle1 "]"]))
             (expsetfloat \1 t)))

(defins SLEEP
        ;; flottant
        (with-C 0 ;; +1 float
           (push-float1 \1)
           (call-C-function 'cdleep)))

(defins SETALARM
        ;; flottant
        (let ((realaccu (get-c-name 'accusingle1)))
             (xrefi realaccu)
             (with-C 0 ;; +1 float
                (push-float1 \1)
                (call-C-function 'setalarm))
             (when (float-stack-p)
                   ["	fstp	st(0)"])))    ; pop stack

(defins GETENVRN
        ;; STRGSOURCE,STRGDEST,SIZERET
        (systemxx2 'getenvrn))

(defins GETGLOBAL
	(systemxx1 'getgloba \2))

(defins CALLG
        ;; arg1 = nombre d'arguments, arg2 = le retour du callg
	(xrefp 'll_callg)
 	(expgenasm1 'push \1)
        (expgenbra 'call 'll_callg)
        (expgenasm2 'mov \2 'rwork))	; le retour de la fct C


(defins ONSTACK
        ;; arg1 = fin de la zone a copier (%CALLTARG)
        ;; arg2 = taille en objets        (AUX1)
        ;; utilise dans le CALLG
        ;;
        ;; ATTENTION !
        ;; On ne peut pas utiliser std et cld a cause d'un bug malhonnete et
        ;; fuyant : il semble que le flag de direction soit modifie sans etre
        ;; remis a sa valeur par une routine d'interruption.
        (expgenasm2 'mov 'ecx \2)	; ecx <- A2
        ["	mov	" 'rwork ",ecx"]; sauvegarde du nb d'objets
        ["	lea	" 'rwork ",[" 'rwork "*4]"]
        ["	sub	esp," 'rwork]
        ["	mov	edi,esp"]
        (expgenasm2 'mov 'esi \1)	; debut de la zone
        ["	sub	esi," 'rwork]
        ["	rep	movsd"]		; transfert
        ["	mov	" 'bcons |,| (string (get-c-name '_bcons))]
        ["	mov	" 'bsymb |,| (string (get-c-name '_bsymb))])
       

;;;
;;; les traductions du CALLG
;;;

(defins FLT_LL_C
        ;; on passe la valeur (soit la taille de 2ptrs)
        (cond
          (31BITFLOATS
           (let ((accusingle1 (get-c-name 'accusingle1))
                 (accusingle2 (get-c-name 'accusingle2)))
                (macunpack32float accusingle1 'aux0)
                ["	fld	dword ptr [" accusingle1 "]"]
                ["	fstp	qword ptr [" accusingle2 "]"]
                (expgenasm2 'mov 'dux0 accusingle2)))     ; poids fort.
          (t
           (expgenasm2 'mov 'dux1 (list 'hsize 'aux0))   ; poids faible
           (expgenasm2 'mov 'dux0 (list 'val   'aux0))))); poids faible

(defins CVTFLT_LL_C
        [";;	New macro CVTFLT_LL_C"]
        (cond
              (31BITFLOATS
                   ["	push	ebp"]
                   ["	mov     ebp,esp"]
                   ["	sub     esp,12"]
                   ["	mov     eax,[ebp+8]"]
                   ["	shl     eax,1"]
                   ["	mov     [ebp-4],eax"]
                   ["	fld    dword ptr [ebp-4]"]
                   (unless (float-stack-p)
                           ["	fstp    qword ptr [ebp-12]"]
                           ["	mov     eax,[ebp-12]"]
                           ["	mov     edx,[ebp-8]"])
                   ["	mov	esp,ebp"]
                   ["	pop	ebp"])
              ((float-stack-p)
               ["	push	ebp"]
               ["	mov	ebp,esp"]
               ["	mov	eax,dword ptr [ebp+8]"]
               ["	fld	qword ptr [eax]"]
               ["	mov	esp,ebp"]
               ["	pop	ebp"])
              (t
               ["	push    ebp"]
               ["	mov     ebp,esp"]
               ["	sub     esp,8"]
               ["	mov     eax,[ebp+8]"]
               ["	mov     edx,[eax]"]
               ["	mov     [ebp-8],edx"]
               ["	mov     edx,[eax+4]"]
               ["	mov     [ebp-4],edx"]
               ["	mov     eax,[ebp-8]"]
               ["	mov     edx,[ebp-4]"]
               ["	mov	esp,ebp"]
               ["	pop	ebp"]))
        ;; return must follow (see LFLOAT_TO_CFLOAT in ll386.llm3)
        )

(defins FLT_C_LL
        (cond
              (31BITFLOATS
               (let ((accusingle1 (get-c-name 'accusingle1))
                     (accusingle2 (get-c-name 'accusingle2)))
                    ["	fld	qword ptr [callreg0]"]
                    ["	fstp	dword ptr [" accusingle1 "]"]
                    ["	fwait"]
                    (macpack32float 'rwork accusingle1)))
              (t
               (alloc-float)		; rwork <-- ptr flottant
               ["	fld	qword ptr [callreg0]"]
               ["	fstp	qword ptr ds:[" 'rwork "]"]
               ["	fwait"])))

(defins RFLT_LL_X
        ;; passage par reference \1 <-- adresse flottant.
        (cond
              (31BITFLOATS
               (let ((accusingle1 (get-c-name 'accusingle1)))
                    (macunpack32float accusingle1 'aux0)
                    ["	fld	dword ptr [" accusingle1 "]"]
                    ["	sub	" \1 ",8"]
                    ["	fstp	qword ptr [" \1 "]"] ; 
                    (expgenasm2 'mov 'aux0 \1)))
              (t
               (expgenasm2 'sub \1 4)
               (expgenasm2 'mov (list 'val \1) (list 'val 'aux0))
               (expgenasm2 'mov (list 'hsize \1) (list 'hsize 'aux0)))))

(defins STRG_LL_C
        ;; indirection sur le heap (dux0 = edi)
        (expgenasm2 'mov \1 (list 'val \1))		; zone heap  <--
        (expgenadd 8 \1 t))				; debut strg <--

(defins STRG_C_LL
        (xrefp 'crastrg)
        (expgenasm2 'mov 'a2 \1)	; sauvegarde de la chaine
        ["	mov	" 'a1 ",0"]		; le compteur
        ["	jmp	near ptr ll_buil1" @]
        ["ll_buil" @ ":"]
        ["	inc	" 'a1x]
        ["ll_buil1" @ ":"]
        ["	cmp	byte ptr [" 'dux0 "+" 'a1 "*1],0"]
        ["	jne	near ptr ll_buil" @]	; on boucle > fin chaine
        ["	push	" 'a1]			; la taille de la chaine
        ["	push	" 'dux0]		; patch GS
        ["	mov	" 'bcons |,| (string (get-c-name '_bcons))] ;; patch GS
        ["	mov	" 'bsymb |,| (string (get-c-name '_bsymb))] ;; patch CJ
        ["	call	near ptr crastrg"]	; a1 = string
        ["	pop	" 'dux0]		; patch GS
        (expgenasm2 'mov \2 'a1)
        (expgenasm1 'pop \3))                   ; la taille de la chaine

(defins VECT_LL_C
	["	;; VECT_LL_C start"]
        (expgenasm2 'mov \1 (list 'val \1))
        (expgenadd 8 \1 t)
	["	;; VECT_LL_C end"])

(defins VECT_C_LL
        ;; vecteur dans arg1, resultat (0 !!!!) dans arg2, longueur dans arg3
        ["	xor	" \2 |,| \2])

(defins FIX_LL_C
        ["	movsx	" 'dux0 |,| 'dux0x])

(defins FIX_C_LL
        ["	mov	" 'rwork |,| 'dux0]
        ["	and	" 'rwork ",0000FFFFh"])		; sur 16 bits

;;; RFIX  &  RFLOAT:  On considere que les RFIX fortran sont tjrs sur
;;; 32bits  (integer*4) parceque c'est comme en C,  et c'est aussi la
;;; taille  des  entiers  dans les tableaux d'entiers en Fortran.  Et
;;; que  les  RFLOAT  fortran sur 64bits (real*8),  parceque c'est la
;;; me^me chose qu'en C,  et le code reste le me^me lorsqu'on rame`ne
;;; un flottant de C ou de fortran,  vers Lisp (type resultat=float).
;;; Par  contre  les  tableaux  de  flottants  seront sur 32 bits car
;;; c'est   tout  ce  que  permet  le  passage  Lisp-fortran  (pb  de
;;; traduction sur place).

;;; RFIX:   entier   LL  dans  DUX0,  a  transformer  en  entier  par
;;; reference.  Pour realiser cette indirection, l'idee est d'allouer
;;; l'entier fortran dans un tableau LLM3 reserve' pour cela.

(defins RFIX_LL_X
        ;; entier 32 bits passe par reference (\1 = sp de references)
	["	;; RFIX_LL_X start"]
        (expgenasm2 'sub \1  4)
	["	movsx	edi,di"]	; CJ  conv 16 -> 32 bits pour les RFIX
        (expgenasm2 'mov (list 'val \1) 'dux0)
	["	;; RFIX_LL_X end"]
	)

(defins FIXV_LL_X
	;; fix vector form LL to be converted in C vector
	;; We get the vector in AUX0 (ESI for Intel)
	["	;; FIXV_LL_X start"]
	["	mov	esi,dword ptr [esi]"]		;; vector is on heap
	["	push	ecx"]				;; save ecx for loop
	["	push	edi"]				;; save work reg edi
	["	add	esi,4"]				;; vector size
	["	mov	ecx,dword ptr [esi]"]		;; set size
	["	add	esi,4"]				;; first element
	["	push	esi"]				;; save pointer
        ["fixvllxcvt	label	near"]			;; start of the loop
	["	cmp	ecx,0"]				;; more elements ?
	["	jle	near ptr fixvllxdone"]		;; all done
	["	mov	edi,dword ptr [esi]"]		;; get value
	["	movsx	edi,di"]			;; 16 -> 32 bits
	["	mov	dword ptr [esi],edi"]		;; re-box
	["	add	esi,4"]				;; next arg
	["	dec	ecx"]				;; one element done
	["	jmp	near ptr fixvllxcvt"]		;; try another loop
	["fixvllxdone	label	near"]			;; end of the loop
	["	pop	esi"]				;; restore heap of vect
	["	pop	edi"]				;; restore edi
	["	pop	ecx"]				;; restore ecx
	["	;; FIXV_LL_X end"]
	)

(defins FIXV_X_LL
	;; fix vector form C to be converted in LL vector
	;; We get the C vector in AUX0 (ESI for Intel)
	["	;; FIXV_X_LL start"]
	["	push	esi"]				;; save pointer
	["	push	ecx"]				;; save ecx for loop
	["	push	edi"]				;; save work reg edi
	["	mov	esi,dword ptr [esi]"]		;; vector is on heap
	["	add	esi,8"]				;; point to 1st elem
	["	mov	ecx,dword ptr [esi-4]"]		;; vector length
        ["fixvxllcvt	label	near"]			;; start of the loop
	["	cmp	ecx,0"]				;; more elements ?
	["	jle	near ptr fixvxlldone"]		;; all done
	["	and	dword ptr [esi],0000FFFFh"]	;; re-box
	["	add	esi,4"]				;; next arg
	["	dec	ecx"]				;; one element done
	["	jmp	near ptr fixvxllcvt"]		;; try another loop
	["fixvxlldone	label	near"]			;; end of the loop
	["	pop	edi"]				;; restore edi
	["	pop	ecx"]				;; restore ecx
	["	pop	esi"]				;; restore heap of vect
	["	;; FIXV_X_LL end"]
	)

(defins FLTV_LL_X
        (when 31BITFLOATS
              (inceti)
              (prepare-index 'aux0 'aux0 0 t)     ; on pointe sur le vecteur
              ["	mov	" 'dux0 ",[" 'aux0 "-4]"]
              ["	dec	" 'dux0]
              [(eti) ":"]
              (macunpack32float (vector 'aux0 'dux0 4 0 "dword")
                                (vector 'aux0 'dux0 4 0 "dword"))
              ["	dec	" 'dux0]
              ["	jns	short " (eti)]))

(defins FLTV_X_LL
        (when 31BITFLOATS
              (inceti)
              (prepare-index 'aux0 'aux0 0 t)     ; on pointe sur le vecteur
              ["	mov	" 'dux0 ",[" 'aux0 "-4]"]
              ["	dec	" 'dux0]
              [(eti) ":"]
              (macpack32float (vector 'aux0 'dux0 4 0 "dword")
                              (vector 'aux0 'dux0 4 0 "dword"))
              ["	dec	" 'dux0]
              ["	jns	short " (eti)]))

;;; .SSection "Les interruptions"
;

;;; Cas ou les evenements du window manager doivent etre explicitement traites.
;;; Pour optimiser intest, au lieu de regarder si itloop est nul et sauter
;;; ll_intest le cas echeant, on fait l'inverse. Comme le cas le plus courant
;;; est que itloop est non nul, cela nous evite le saut au-dessus de l'appel
;;; de ll_intest ... d'ou un gain de 4 cycles.

(defvar *intest* ())

(defins INTEST
        ;; SCRUTE LES ITS
        (xrefi 'itstate)
        (xrefi 'itcount)
        (xrefp 'ithard)			; dans LL386.LLM
        (when (eq (getvalue 'IT_LOOP) 1)
              (let ((ll_intest (get-c-name 'll_intest))
                    (itloop    (get-c-name 'itloop)))
                   (xrefp ll_intest)
                   (xrefi itloop)
                   ["	dec	" itloop]
                   ["	jz	near ptr l_" @]
                   ["l1_" @ ":"]
                   (newl *intest* (cons (catenate "l_" (#:expand:genlab))
                                        (catenate "l1_" (#:expand:genlab))))))
        ["	cmp	word ptr [" 'itcount "],0"]  ; a-y-t-il des its en attente?
        ["	je 	short l" @]		     ; non on arrete
        ["	cmp	word ptr [" 'itstate "],0 "] ; its on?
        ["	je 	short l" @]		     ; non on arrete
        ["	call	near ptr ithard"]
        ["l" @ ":"])

;;; .Section "De'clarations du nombre d'arguments"

(mapc #'(lambda (x)
                (putprop (car x) (cdr x) '#:llm3:narg))
        '(
           (PUSHR            . 2)
           (ONSTACK          . 2)
           (REG_SAV          . 0)
           (REG_RES          . 0)
           (INIT_LBREAK      . 0)
           (INIT_LMERRO      . 0)
           (RET_LBREAK       . 0)
           (RET_LMERRO       . 0)
           (FIX_LL_C         . 0)
           (FLT_LL_C         . 0)
           (CVTFLT_LL_C      . 0)
           (STRG_LL_C        . 1)
           (VECT_LL_C        . 1)
           (RFIX_LL_X        . 1)
           (RFLT_LL_X        . 1)
           (FIXV_LL_X        . 0)
           (FLTV_LL_X        . 0)
           (FIX_C_LL         . 0)
           (FLT_C_LL         . 0)
           (STRG_C_LL        . 3)
           (VECT_C_LL        . 3)
           (FIXV_X_LL        . 0)
           (FLTV_X_LL        . 0)
           (ASS              . 1)
         ))
