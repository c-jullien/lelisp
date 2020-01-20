;;.EnTete "Le_Lisp Version 15.2" " " "Les Macros pour le RS6000"
;;.sp 2
;;.SuperTitre "Les Macros LLM3 pour RS6000"
;;.Auteur "Bernard & Bernard"
;;.INRIA

;;.Centre "*****************************************************************"
;;.Centre " Ce fichier est en lecture seule hors du projet ICSLA de l'INRIA."
;;.Centre " Il est maintenu par ILOG SA, 2 Avenue Gallie'ni, 94250 Gentilly "
;;.Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;.Centre "*****************************************************************"

;;.Centre "$Header: /nfs/lelisp15/work/rs6000/RCS/macrs6000.ll,v 10.1 1993/12/16 16:25:37 kuczynsk Rel kerjean $"

(unless (>= (version) 15)
        (error 'load "fichier non compatible" 'macrs6000) )

;;; Ce qui reste a` faire est annoter par des !!!
;;; Pour que le preprocessing soir vraiment propre il faut:
;;;  1/ Faire un core a` chaque appel de prs6000.
;;;  2/ Ve'rifier en cours d'expansion si il faut faire un prs6000.

(defvar #:sys-package:colon 'expand)

(de :expand-list-of-files (lfile)
    ; expanse une liste de fichiers LLM3
    (while lfile
       (print "expand : j'expanse le fichier : " (car lfile))
       (with ((inchan (#:llm3:openi-llm3 (car lfile)))
              (outchan (openo (catenate :s-dir
                                         (car lfile) ".s"))))
             (:expand-one-file)
             (close (outchan))
             (when (inchan) (close (inchan))) )
       (nextl lfile)))

(defun expand1 (file) (let ((#:llm3:files (ncons file))) (expand)))

;;.Section "Les valeurs des assemblages conditionnels"
;;.SSection "Les assemblages conditionnels de l'expanseur"
(defvalue 31BITFLOATS  T)     ; flottants sur 31 bits.

;;.SSection "Les assemblages conditionnels du code LLM3"
(defvalue COMPILO  0)      ; =0 pre'sence du compilateur
(defvalue DEBUG    0)      ; =0 pas de DEBUG de l'initalisateur
(defvalue GCDEBUG  0)      ; =0 pas de DEBUG du GC
(defvalue SEDEBUG  0)      ; =0 pas de DEBUG du send
(defvalue DIVOVFL  0)      ; =0 le hard teste le de'bordement de la division
(defvalue TRUEOVFL 1)      ; =1 teste les vrais de'bordements arithme'tiques
(defvalue STOPCOPY 0)      ; =0 pas de GC stop & copy

;;.Section "Utilisation des registres"
(defregister   X0       0) ; auxiliaire 0
(defregister   CSP      1) ; SP C 
(defregister   SP       1) ; SP Lisp 
(defregister   TOC      2) ; pointeur sur toc
(defregister   CRES     3)
(defregister   X1       3) ; auxiliaire 1 (and c-result register)
(defregister   X2       4) ; auxiliaire 2
(defregister   X3       5) ; auxiliaire 3
(defregister   X4       6) ; auxiliaire 4
(defregister   X5       7) ; auxiliaire 5 
(defregister   X6       8) ; auxiliaire 6
(defregister   CP      13) ; constant pool for lisp
(defregister   A1      14) ; 
(defregister   A2      15) ;   les fameux 4
(defregister   A3      16) ;   accus de LISP
(defregister   A4      17) ; 
(defregister   RBFLOAT 18) ; there are no floats
(defregister   RBVECT  19) ; de'but de la zone des vecteurs
(defregister   RBSTRG  20) ; de'but de la zone des chaines
(defregister   RBSYMB  21) ; adresse du premier symbole (NIL)
(defregister   NIL     21) ; adresse de NIL (de'but des symboles)
(defregister   RBCONS  22) ; de'but de zone liste
(defregister   RBVAR   23) ; de'but de la zone des variables
(defregister   RADLINK 24) ; adresse de la variable llm3 dlink
(defregister   RALLINK 25) ; adresse de la variable llm3 llink
(defregister   RAITCOUNT 26) ; adresse de la variable llm3 itcount
;(defregister   FFLOAT  27) ; adresse du current free float

;; Les registres flottants
(defregister   F1       1) ; 
(defregister   F2       2) ;  les registres 
(defregister   F3       3) ;  de travail
(defregister   F4       4) ;
(defregister   F5       5)
(defregister   F6       6)
(defregister   F7       7)
(defregister   F8       8)
(defregister   F9       9)
(defregister   F10      10)
(defregister   F11      11)
(defregister   F12      12)
(defregister   F13      13)

;;.Section "Les Valeurs des symboles d'acce`s"

;;; Fixes values

(defvalue	MINFIX		-32767)
(defvalue	MAXFIX		 32767)
(defvalue	MINUS0		 #$8000)

;;.SSection "Aux proprie'te's naturelles des symboles"
(defvalue   CVAL        0)                  ; adresse 32 bits
(defvalue   PLIST       4)                  ; adresse 32 bits
(defvalue   FVAL        8)                  ; 32 bits
(defvalue   PKGC       12)                  ; adresse 32 bits
(defvalue   OVAL       16)                  ; adresse 32 bits
(defvalue   ALINK      20)                  ; adresse 32 bits
(defvalue   FTYPE      24)                  ; code 16 bits
(defvalue   PTYPE      26)                  ; code 16 bits
(defvalue   PNAME      28)                  ; adresse de chai^ne 32 bits
(defvalue   FINSYMB    32)

;;.SSection "Aux chai^nes de caracte`res et aux tableaux"
(defvalue   VAL        0)
(defvalue   TYP        4)

;;.SSection "Aux cellules de liste"
(defvalue   CAR        0)                   ; adresse 32 bits
(defvalue   CDR        4)                   ; adresse 32 bits

;;.SSection "Valeurs des ftypes"
(defvalue   FUNDEF     0)
(defvalue   SUBR0      1)
(defvalue   SUBR1      2)
(defvalue   SUBR2      3)
(defvalue   SUBR3      4)
(defvalue   SUBRN      5)
(defvalue   SUBRF      6)
(defvalue   EXPR       7)
(defvalue   FEXPR      8)
(defvalue   MACRO      9)
(defvalue   DMACRO    10)
(defvalue   SUBRM     11)
(defvalue   SUBRDM    12)

;;.SSection "les types des caracte`res"
(defvalue  TCNULL      0)                   ; CNULL
(defvalue  TCBCOM      1)                   ; debut commentaire
(defvalue  TCECOM      2)                   ; fin de commentaire
(defvalue  TCQUOTE     3)                   ; quote char
(defvalue  TCLPAR      4)                   ; par ouvrante 
(defvalue  TCRPAR      5)                   ; par fermante
(defvalue  TCDOT       6)                   ; le point (des listes)
(defvalue  TCSEP       7)                   ; un se'parateur
(defvalue  TCSPKGC     8)                   ; se'parateurs de packages
(defvalue  TCSPLICE    9)                   ; splice macro caractere
(defvalue  TCMACRO    10)                   ; macro caractere
(defvalue  TCSTRING   11)                   ; se'parateur de chaines
(defvalue  TCPNAME    12)                   ; pname normal
(defvalue  TCSYMB     13)                   ; symbole normal
(defvalue  TCMSYMB    14)                   ; symbole mono caractere

;;.SSection "les types d'unite's syntaxiques"
(defvalue  TCOBJ       3)                   ; objet lisp
(defvalue  TCLIST      4)                   ; liste lisp

;;.Section "De'finition de la machine cible"
(defmacro :rv (r) `(getvalue ,r))
(defun :iv (n) n)
(defun :uv (n)
   (cond
      ((or (not (fixp n)) (ge n 0)) n)
      ((eq n #$8000) "0x8000")
      (t (with ( (obase 16) )
            (let ( (low (logand n #$FF)) )
               (when (lt low #$10) (setq low (catenate "0" low)))
               (catenate "0x" (logshift n -8) low) )))))
(defun :lv (la) la)

(defun :p_globl (nm) (print "	.globl	" nm))
(defun :p_csect (nm) (print "	.csect	" nm))
(defun p_set (nm va) (print "	.set	" nm "," va))
(defun :p_align (n)  (print "	.align	" n))

(defmacro :r0  (f         ) `(print ,f))
(defmacro :r   (f r1      ) `(print ,f (:rv ,r1)))
(defmacro :l   (f la)       `(print ,f (:lv ,la)))
(defmacro :rr  (f r1 r2   ) `(print ,f (:rv ,r1)","(:rv ,r2)))
(defmacro :ri  (f r1 i2   ) `(print ,f (:rv ,r1)","(:uv ,i2)))
(defmacro :rrr (f r1 r2 r3) `(print ,f (:rv ,r1)","(:rv ,r2)","(:rv ,r3)))
(defmacro :rri (f r1 r2 i1) `(print ,f (:rv ,r1)","(:rv ,r2)","(:uv ,i1)))
(defmacro :rrx (f r1 r2 i1) `(print ,f (:rv ,r1)","(:rv ,r2)","(:iv ,i1)))
(defmacro :rir (f r1 i1 r2) `(print ,f (:rv ,r1)","(:iv ,i1)"("(:rv ,r2)")"))
(defmacro :irr (f i1 r1 r2) `(print ,f (:iv ,i1)","(:rv ,r1)","(:rv ,r2)))
(defmacro :iir (f i1 i2 r1) `(print ,f (:iv ,i1)","(:iv ,i2)"("(:rv ,r1)")"))
(defmacro :iri (f i1 r1 i2) `(print ,f (:iv ,i1)","(:rv ,r1)","(:uv ,i2)))
(defmacro :iii (f i1 i2 i3) `(print ,f (:iv ,i1)","(:iv ,i2)","(:iv ,i3)))
(defmacro :ri3 (f r1 r2 i1 i2 i3)
   `(print ,f (:rv ,r1)","(:rv ,r2)","(:iv ,i1)","(:iv ,i2)","(:iv ,i3)) )
(defmacro :r3i (f r1 r2 r3 i1 i2)
   `(print ,f (:rv ,r1)","(:rv ,r2)","(:rv ,r3)","(:iv ,i1)","(:iv ,i2)) )

(defun :r_a     (rd r1 r2      ) (:rrr "	a	" rd r1 r2      ))
(defun :r_ai    (rd rs im      ) (:rrx "	ai	" rd rs im      ))
(defun :r_and   (rd r1 r2      ) (:rrr "	and	" rd r1 r2      ))
(defun :r_andc  (rd r1 r2      ) (:rrr "	andc	" rd r1 r2      ))
(defun :r_andil (rd rs im      ) (:rri "	andil.	" rd rs im      ))
(defun :r_b     (la            ) (:l   "	b	" la            ))
(defun :r_beq   (la            ) (:l   "	beq	" la            ))
(defun :r_bne   (la            ) (:l   "	bne	" la            ))
(defun :r_bgt   (la            ) (:l   "	bgt	" la            ))
(defun :r_bge   (la            ) (:l   "	bge	" la            ))
(defun :r_blt   (la            ) (:l   "	blt	" la            ))
(defun :r_ble   (la            ) (:l   "	ble	" la            ))
(defun :r_bl    (la            ) (:l   "	bl	" la            ))
(defun :r_br    (              ) (:r0  "	br	"               ))
(defun :r_brl   (              ) (:r0  "	brl	"               ))
(defun :r_cal   (rd in rs      ) (:rir "	cal	" rd in rs      ))
(defun :r_cmp   (r1 r2         ) (:irr "	cmp	"  0 r1 r2      ))
(defun :r_cmpi  (rs im         ) (:iri "	cmpi	"  0 rs im      ))
(defun :r_cmpl  (r1 r2         ) (:irr "	cmpl	"  0 r1 r2      ))
(defun :r_cmpli (rs im         ) (:iri "	cmpli	"  0 rs im      ))
(defun :r_cror  (i1 i2 i3      ) (:iii "	cror	" i1 i2 i3      ))
(defun :r_div   (rd r1 r2      ) (:rrr "	div	" rd r1 r2      ))
(defun :r_divs  (rd r1 r2      ) (:rrr "	divs	" rd r1 r2      ))
(defun :r_exts  (rd rs         ) (:rr  "	exts	" rd rs         ))
(defun :r_fa    (rd r1 r2      ) (:rrr "	fa	" rd r1 r2      ))
(defun :r_fcmpu (r1 r2         ) (:irr "	fcmpu	"  0 r1 r2      ))
(defun :r_fd    (rd r1 r2      ) (:rrr "	fd	" rd r1 r2      ))
(defun :r_fm    (rd r1 r2      ) (:rrr "	fm	" rd r1 r2      ))
(defun :r_frsp  (r1 r2         ) (:rr  "	frsp	" r1 r2         ))
(defun :r_fs    (rd r1 r2      ) (:rrr "	fs	" rd r1 r2      ))
(defun :r_l     (rd in rs      ) (:rir "	l	" rd in rs      ))
(defun :r_lbz   (rd in rs      ) (:rir "	lbz	" rd in rs      ))
(defun :r_lbzx  (rd rb ri      ) (:rrr "	lbzx	" rd rb ri      ))
(defun :r_lfd   (id in rs      ) (:rir "	lfd	" id in rs      ))
(defun :r_lfs   (rd in rs      ) (:rir "	lfs	" rd in rs      ))
(defun :r_lhz   (rd in rs      ) (:rir "	lhz	" rd in rs      ))
(defun :r_lil   (rd im         ) (:ri  "	lil	" rd im         ))
(defun :r_liu   (rd im         ) (:ri  "	liu	" rd im         ))
(defun :r_lm    (rd in rs      ) (:rir "	lm	" rd in rs      ))
(defun :r_lmi   (id in rs      ) (:iir "	lm	" id in rs      ))
(defun :r_lx    (rd rb ri      ) (:rrr "	lx	" rd rb ri      ))
(defun :r_maskg (rd r1 r2      ) (:rrr "	maskg	" rd r1 r2      ))
(defun :r_mflr  (rd            ) (:r   "	mflr	" rd            ))
(defun :r_mfmq  (rd            ) (:r   "	mfmq	" rd            ))
(defun :r_mtlr  (rs            ) (:r   "	mtlr	" rs            ))
(defun :r_mtmq  (rs            ) (:r   "	mtmq	" rs            ))
(defun :r_muli  (rd rs im      ) (:rri "	muli	" rd rs im      ))
(defun :r_muls  (rd r1 r2      ) (:rrr "	muls	" rd r1 r2      ))
(defun :r_neg   (rd rs         ) (:rr  "	neg	" rd rs         ))
(defun :r_or    (rd r1 r2      ) (:rrr "	or	" rd r1 r2      ))
(defun :r_oril  (rd rs im      ) (:rri "	oril	" rd rs im      ))
(defun :r_oriu  (rd rs im      ) (:rri "	oriu	" rd rs im      ))
(defun :r_rlnm  (rd r1 r2 i1 i2) (:r3i "	rlnm	" rd r1 r2 i1 i2))
(defun :r_rlinm (rd rs i1 i2 i3) (:ri3 "	rlinm	" rd rs i1 i2 i3))
(defun :r_sf    (rd r1 r2      ) (:rrr "	sf	" rd r1 r2      ))
(defun :r_si    (rd rs im      ) (:rri "	si	" rd rs im      ))
(defun :r_sl    (rd r1 r2      ) (:rrr "	sl	" rd r1 r2      ))
(defun :r_sli   (rd rs im      ) (:rri "	sli	" rd rs im      ))
(defun :r_sr    (rd r1 r2      ) (:rrr "	sr	" rd r1 r2      ))
(defun :r_sri   (rd rs im      ) (:rri "	sri	" rd rs im      ))
(defun :r_st    (rs in rd      ) (:rir "	st	" rs in rd      ))
(defun :r_stb   (rs in rd      ) (:rir "	stb	" rs in rd      ))
(defun :r_stbx  (rs rb ri      ) (:rrr "	stbx	" rs rb ri      ))
(defun :r_stfd  (rs in rd      ) (:rir "	stfd	" rs in rd      ))
(defun :r_stfdu (rs in rd      ) (:rir "	stfdu	" rs in rd      ))
(defun :r_stfs  (rs in rd      ) (:rir "	stfs	" rs in rd      ))
(defun :r_sth   (rs in rd      ) (:rir "	sth	" rs in rd      ))
(defun :r_stm   (rs in rd      ) (:rir "	stm	" rs in rd      ))
(defun :r_stmi  (is in rd      ) (:iir "	stm	" is in rd      ))
(defun :r_stu   (rs in rd      ) (:rir "	stu	" rs in rd      ))
(defun :r_stx   (rs rd ri      ) (:rrr "	stx	" rs rd ri      ))
(defun :r_xor   (rd r1 r2      ) (:rrr "	xor	" rd r1 r2      ))
(defun :r_xoril (rd rs im      ) (:rri "	xoril	" rd rs im      ))
(defun :r_xoriu (rd rs im      ) (:rri "	xoriu	" rd rs im      ))

;;.Section "Les variables globales du macroexpanseur."
(defvar :debug ())             ; will make every label external
#+:debug(print "************* debug mode, all labels are external *******")

;;; Le nom du module LLM3 en cours d'expansion.
(defvar :current-title 'init)

;;; Indicateur spe'cifiant si l'on expanse du code ou de la donne'e.
(defvar :pure? ())

;;.Section "Les fonctions ge'ne'rales au macroexpanseur"
(defvar genlab-counter)
(defun :genlab ()
   ;; ge'ne`re une nouvelle e'tiquette.
   (catenate "." (substring :current-title 0 3) "." (incr genlab-counter)) )

;;.Section "Les fonctions d'impression spe'cifiques"
(defun :prin-label (lab)
   (when (and lab :pure? (not (memq lab :lbrx-labels)))
      ;; Une e'tiquette de code ne correspondant pas a' un tableau de BRX.
      (let ( (state (getprop lab ':label)) )
         (when (eq state 'unsafe-callee) (:r_b lab))
         (when state
            ;; Il existe des CALLs sur cette e'tiquette.
	    (let ( (clab (catenate "C." lab)) )
               (:p_globl clab)
               (:new-label clab) )
            (:r_mflr 'X0)
            (:PUSH 'X0) )
         (when (getprop lab ':vallab) (:p_globl lab))
         (prinflush lab ":")
         ;; Ah! Ah! Ah!
         (when (eq lab 'EPUR) (:NOP)) )))

(defun :new-label (lab)
   (prinflush lab ":") )

;;.Section "Les fonctions communes a` toutes les instructions"
(defmacro :register? (op)
   `(register? ,op) )

(defun :fix? (n)
   (if (and (consp n) (eq (car n) '|#|))
      (let ( (val (cadr n)) )
         (if (fixp val)
            val
            (getvalue val) ))
      () ))

(defun :prepsrc (op reg)
   ;; Pre'pare l'ope'rande source "op", s'il le faut range l'ope'rande
   ;; dans le registre auxiliaire "reg".
   (cond
      ((:register? op)
         ;; Le seul cas ou` l'on ne ge'ne`re pas de code.
         op )
      ((symbolp op)
         ;; Un mot me'moire.
         (let ( (index (getprop op ':symbol-index)) )
            (if index
               ;; Un .symbol donc une adresse effective.
               (:r_cal reg index 'NIL)
               (if (setq index (getprop op ':adr))
                  ;; Un symbol normal.
                  (:r_l reg index 'CP)
                  (error ':prepsrc "Undefined variable" op) ))
            reg ))
      ((not (consp op))
         (error ':prepsrc "Bad operand" op) )
      (t (let* ( (access (car op)) (op (cadr op)) )
            (cond
               ((memq access #:llm3:mem-access)
                  ;; Acce's indirect inde'xe'.
                  (:r_l reg (getvalue access) op) )
               ((eq access '|#|)
                  ;; Constante nume'rique (ou valeur de constante symbolique).
                  (setq op (if (fixp op) op (getvalue op)))
                  (if (ge op 0)
                     ;; Un entier sur 15 bits.
                     (:r_lil reg op)
                     ;; Un entier ne'gatif.
                     (:r_xor reg reg reg)
                     (:r_oril reg reg op) ))
               ((eq access '|@|)
                  (if (memq op :lbrx-labels)
                     ;; Un tableau de BRX.
                     (:r_cal reg (getprop op ':adr) 'CP)
                     ;; Constante adresse de code (sur 32 bits).
                     (:r_l reg (getprop op ':vallab) 'CP) ))
               ((eq access '|%|)
                  ;; Constante adresse de data (toujours sur 32 bits).
                  (:r_cal reg (getprop op ':adr) 'CP) )
               ((eq access '|&|)
                  ;; Indirect dans la pile.
                  (:r_l reg (mul 4 op) 'SP) )
               (t (error ':prepsrc "Bad operand" (list access op))) )
            reg ))))

(defun :movdest (regsrc opdest)
   ;; Transporte "regsrc" dans "dest" qui est de n'inporte quel type.
   (cond
      ((:register? opdest)
         (:r_oril opdest regsrc 0) )
      ((symbolp opdest)
         ;; Un mot me'moire.
         (:r_st regsrc (getprop opdest ':adr) 'CP) )
      (t (let* ( (access (car opdest)) (op (cadr opdest)) )
            (cond
               ((memq access #:llm3:mem-access)
                  ;; Acce's indirect inde'xe'.
                  (:r_st regsrc (getvalue access) op) )
              ((eq access '|&|)
                  ;; Indirect dans la pile.
                  (:r_st regsrc (mul 4 op) 'SP) )
              (t (error ':movdest "Bad operand" opdest)) )))))

(defun :cmprel (cmp lab)
   (selectq cmp (eq (:r_beq lab))
                (ne (:r_bne lab))
                (gt (:r_bgt lab))
                (ge (:r_bge lab))
                (lt (:r_blt lab))
                (le (:r_ble lab)) ))

(defun :rev-op-cmp (cmp)
   (selectq cmp (ge 'le) (gt 'lt) (le 'ge) (lt 'gt) (t cmp)) )

(defun :compare-and-branch (op1 cmp op2 label)
   (let ( (n1 (:fix? op1)) (n2 (:fix? op2)) )
      (cond
         (n1 (:r_cmpli (:prepsrc op2 'X1) n1)
             (:cmprel (:rev-op-cmp cmp) label) )
         (n2 (:r_cmpli (:prepsrc op1 'X1) n2)
             (:cmprel cmp label) )
         (t  (:r_cmpl (:prepsrc op1 'X1) (:prepsrc op2 'X2))
             (:cmprel cmp label) ))))

(defun :compare-signed-and-branch (op1 cmp op2 label)
   (let ( (n1 (:fix? op1)) (n2 (:fix? op2)) )
      (cond
         (n1 (:r_cmpi (:prepsrc op2 'X1) n1)
             (:cmprel (:rev-op-cmp cmp) label) )
         (n2 (:r_cmpi (:prepsrc op1 'X1) n2)
             (:cmprel cmp label) )
         (t  (:r_cmp (:prepsrc op1 'X1) (:prepsrc op2 'X2))
             (:cmprel cmp label) ))))

(defun :bt2xx (arg btype etype label)
   (let ( (cont (:genlab)) (arg (:prepsrc arg 'X3)) )
      (:compare-and-branch arg 'lt btype cont)
      (:compare-and-branch arg 'lt etype label)
      (:new-label cont) ))

(defun :bf2xx (arg btype etype label)
   (let ( (arg (:prepsrc arg 'X3)) )
      (:compare-and-branch arg 'lt btype label)
      (:compare-and-branch arg 'ge etype label) ))

(defun :nxxx (op incr borne lab)
   ;; On suppose que 'op' est un registre et 'incr' un imme'diat.
   (:r_ai op op incr)
   (:compare-and-branch op 'lt (:prepsrc borne 'X1) lab) )

(defun :movaheap (op reg)
   (:r_l reg 0 (:prepsrc op reg))
   (:r_ai reg reg 8) )

(defun :call-c-direct (fn)
   ;; Est-on oblige' de faire tout cela !!!
   (:movdest (:prepsrc '(|#| 0) 'X4) 'STATE)
   (:STACK 'SPLISP)
   (:SSTACK 'SPEXT)
   (:r_si 'SP 'SP 24) ; trois mots pour l'appele'.
   (:p_globl fn)
   (:r_bl fn)
   (:NOP)
   (:r_ai 'SP 'SP 24) ; on depile les trois mots.
   (:SSTACK 'SPLISP)
   (:movdest (:prepsrc '(|#| 1) 'X4) 'STATE) )

;;.Section "Les pseudos-Instructions de LLM3"
(definstruct TITLE (name)
   (setq :current-title name)
   (setq :pure? ())
   (:p_csect "lelisp_txt[PR]") )

(definstruct XREFI (module name))

(definstruct XREFP (module name)
   (:p_globl name) )

(definstruct XDEFI (name))

(definstruct XDEFP (name)
   (:p_globl name) )

(definstruct LABEL())

(definstruct FENTRY (nom type)
   (p_set (catenate "._" nom) (getvalue type))
   (:prin-label nom) )

(definstruct ADR (val)
   (when (and :pure? (symbolp val))
      ;; On de'clare comme externe les e'tiquettes des tables de BRX.
      (:p_globl val) ))

(definstruct PURE () (setq :pure? t))

(definstruct IMPURE () (setq :pure? ()))

(definstruct END ())

;;.Section "Les instructions de base"
;;.SSection "Les transfert de pointeurs"
(definstruct MOV (source destination)
   (if (:register? destination)
      (:load-reg source destination)
      (:movdest (:prepsrc source 'X1) destination) ))

(defun :load-reg (opsrc regdest)
   (unless (eq (:prepsrc opsrc regdest) regdest)
      (:r_oril regdest opsrc 0) ))

;;.SSection "Les comparaisons de pointeurs"
(definstruct CABEQ (op1 op2 lab) (:compare-and-branch op1 'eq op2 lab))
(definstruct CABNE (op1 op2 lab) (:compare-and-branch op1 'ne op2 lab))

;;.SSection "Le contro^le"
(definstruct BRA (lab)
   (:r_b lab) )

(definstruct JMP (lab)
   (:r_b lab) )

(definstruct BRI (op)
   (:r_mtlr (:prepsrc op 'X0))
   (:r_br) )

(definstruct BRX (tab ind)
   (:r_sli 'X1 (:prepsrc ind 'X1) 2)
   (:r_lx 'X0 (:prepsrc tab 'X2) 'X1)
   (:BRI 'X0) )

(defun :sobgXz (n lab cond)
   (let ( (op (:prepsrc n 'X1)) )
      (:r_exts op op)
      (:r_si   op op 1)
      (when (neq n op) (:movdest op n))
      (:compare-signed-and-branch op cond '(|#| 0) lab)
      ; On se sert souvent du fait qu'a` la sortie de la boucle n = 0
      (:MOV '(|#| 0) n) ))

(definstruct SOBGEZ (n lab) (:sobgXz n lab 'ge))
(definstruct SOBGTZ (n lab) (:sobgXz n lab 'gt))

(definstruct NOP ()
   (:r_cror #$f #$f #$f) )

;;.Section "La pile"
;;.SSection "Gestion du pointeur de pile"
;;Les instructions STACK et SSTACK sont des macros qui utilisent l'instruction
;;MOV. Ces instructions sont de'finies dans le fichier macllm3.ll
(definstruct CHKSTK (borne lab)
   (let ( (cont (:genlab)) )
      (:r_cmpl 'SP (:prepsrc borne 'X1))
      (:r_bge cont)
      (:r_b lab)
      (:new-label cont) ))

;;.SSection "Pile de contro^le"
(definstruct CALL (lab)
   (let ( (rlab (catenate "C." lab)) )
      (:p_globl rlab)
      (:r_bl rlab) ))

(definstruct JCALL (lab)
   (:CALL lab) )

(definstruct RETURN ()
   (:POP 'X0)
   (:BRI 'X0) )

;;.SSection "Pile de donne'es"
;;Les instructions TOPST, XTOPST, POP et ADJSTK sont des macros de'finies
;;respectivement a` partir des instructions TOPSTR, XTOPSTR, POPR et ADJSTKR.
;;Ces macroinstructions se trouvent dans le fichier macllm3.
(definstruct TOPSTR (sp op)
   (:MOV `(VAL ,sp) op) )

(definstruct XTOPSTR (sp op)
   (:MOV `(VAL ,sp) 'X2)
   (:MOV op `(VAL ,sp))
   (:MOV 'X2 op) )

(definstruct PUSH (op)
   (:r_stu (:prepsrc op 'X1) -4 'SP) )

(definstruct POPR (sp op)
   (:MOV `(VAL ,sp) op)
   (:r_ai sp sp 4) )

(definstruct ADJSTKR (sp spindex)
   (let ( (n (:fix? spindex)) )
      (cond
         ((and n (not (ge n #$2000)) (not (le n -8192)))
            (:r_ai sp sp (mul 4 n)) )
         (t (:r_exts 'X1 (:prepsrc spindex 'X1))
            ;; !! Ce shift n'est pas arithme'tique.
            (:r_sli 'X1 'X1 2)
            (:r_a sp sp 'X1) ))))

(definstruct MOVXSP (op spindex)
   (let ( (n (:fix? spindex)) )
      (cond
         ((and n (not (ge n #$2000)) (not (le n -8192)))
            (:r_st (:prepsrc op 'X1) (mul 4 n) 'SP) )
        (t (:r_sli 'X3 (:prepsrc spindex 'X1) 2)
           (:r_stx (:prepsrc op 'X2) 'SP 'X3) ))))

(definstruct XSPMOV (spindex op)
   (let ( (n (:fix? spindex)) )
      (cond
         ((and n (not (ge n #$2000)) (not (le n -8192)))
            (:MOV `(|&| ,n) op) )
         (t (:r_sli 'X1 (:prepsrc spindex 'X1) 2)
            (if (:register? op)
               (:r_lx op 'SP 'X1)
               (:r_lx 'X1 'SP 'X1)
               (:movdest 'X1 op) )))))

;;.Section "Le garbage-collector (GC)"
(defun :bit-table-access (op table base)
   ; calcule dans X1 l'adresse du mot de la table
   ;         dans X2 le masque pour le bit de ce mot
   ;         dans X3 le mot de cette table
   (:r_sf 'X3 (:prepsrc base 'X4) (:prepsrc op 'X3))
   (:r_sri 'X3 'X3 3)
   (:r_andil 'X2 'X3 31)
   (:r_sri 'X3 'X3 5)
   (:r_sli 'X3 'X3 2)
   (:r_a 'X1 (:prepsrc table 'X1) 'X3)
   (:r_l 'X3 0 'X1)
   (:r_maskg 'X2 'X2 'X2) )

(definstruct STMARK (accu)
   (:p_globl 'BTBGC)
   (:bit-table-access accu 'BTBGC 'BNUMB)
   (:r_or    'X3 'X3 'X2)
   (:r_st    'X3 0 'X1) )

(definstruct BTMARK (accu lab)
   (:p_globl 'BTBGC)
   (:bit-table-access accu 'BTBGC 'BNUMB)
   ;; !!! Pourquoi pas !!! Aussi BFMARK/TCMARK/BTINVSBL/BFINVSBL/SWPCONS !!!
   ;; (:r_and. 'X3 'X3 'X2)
   ;; (:r_bne lab)
   (:r_and   'X3 'X3 'X2)
   (:compare-and-branch 'X3 'ne '(|#| 0) lab) )

(definstruct BFMARK (accu lab)
   (:p_globl 'BTBGC)
   (:bit-table-access accu 'BTBGC 'BNUMB)
   (:r_and   'X3 'X3 'X2)
   (:compare-and-branch 'X3 'eq '(|#| 0) lab) )

(definstruct TCMARK (accu lab)
   (:p_globl 'BTBGC)
   (let ( (cont (:genlab)) )
      (:bit-table-access accu 'BTBGC 'BNUMB)
      (:r_and   'X4 'X3 'X2)
      (:compare-and-branch 'X4 'eq '(|#| 0) cont)
      (:r_andc 'X3 'X3 'X2)
      (:r_st 'X3 0 'X1)
      (:r_b lab)
      (:new-label cont) ))

(definstruct BTLISP (op lab)
   (:bt2xx op 'BNUMB 'ECONS  lab) )

(definstruct BFLISP (op lab)
   (:bf2xx op 'BNUMB 'ECONS  lab) )

(definstruct CONVTOK (first last dest1 dest2)
   (:r_sf 'X1 (:prepsrc first 'X1) (:prepsrc last 'X2))
   (:load-reg 'X1 'X3)         ; tempo
   (:r_andil 'X3 'X3 '1023)    ; les units
   (:movdest 'X3 dest2)        ; dans dest2
   (if (:register? dest1)
      (:r_sri dest1 'X1 10)
      (:r_sri 'X1 'X1 10)
      (:movdest 'X1 dest1) ))

;;.SSection "Les macros d'acce'le'ration du GC"
(definstruct SWPCONS (curfreel curcons freel freelm)
   (:p_globl 'BTBIN)
   (:p_globl 'BTBGC)
   (let ( (nextw  (:genlab)) (nextb  (:genlab)) (marked (:genlab)) )
      (:r_sf 'X3 (:prepsrc 'BNUMB 'X4) 'RBCONS)      ; Le premier cons.
      (:r_sri 'X3 'X3 6)                             ; Index octet ds BTBGC.
      (:r_a 'X1 (:prepsrc 'BTBGC 'X1) 'X3)           ; X1 <- Ptr ds BTBGC.
      (:load-reg 'BTBIN 'X2)                         ; X2 <- Ptr ds BTBIN.
      (:load-reg 'ECONS 'A3)                         ; A3 <- fin des CONS.
      (:r_lil 'X3 0)                                 ; X3 <- compteur.
   (:new-label nextw)
      (:r_l 'X4 0 'X1)                               ; X4 <- 32 bits de BTBGC.
      (:r_l 'X5 0 'X2)                               ; X5 <- 32 bits de BTBIN.
      (:r_and 'X5 'X5 'X4)                           ; Efface les bits invisi.
      (:r_st 'X5 0 'X2)                              ; Remet en place.
      (:r_ai 'X2 'X2 4)                              ; Avance dans BTBIN.
      (:r_lil 'X5 0)                                 ; X5 <- Compteur de bits
   (:new-label nextb)
      (:r_maskg 'X6 'X5 'X5)                         ; X6 <- Le masque.
      (:r_and 'X6 'X6 'X4)                           ; Extrait le bit de mark.
      (:compare-and-branch 'X6 'ne '(|#| 0) marked)  ; Il est marque'?
      (:r_st curfreel 4 curcons)                     ; Lien sur la free-liste.
      (:r_st 'NIL 0 curcons)                         ; Clean, clean dit-il.
      (:r_oril curfreel curcons 0)                   ; Nouvelle free-liste.
      (:r_ai 'X3 'X3 1)                              ; Un de plus.
   (:new-label marked)
      (:r_ai curcons curcons 8)                      ; Avance dans les cons.
      (:r_ai 'X5 'X5 1)                              ; Un bit de plus.
      (:compare-and-branch 'X5 'lt '(|#| 32) nextb)  ; On de'borde?
      (:r_lil 'X5 0)                                 ; Plus de marque.
      (:r_st 'X5 0 'X1)                              ; Affecte BTBGC.
      (:r_ai 'X1 'X1 4)                              ; Avance dans BTBGC.
      (:compare-and-branch curcons 'lt 'A3 nextw)    ; Fin des cons?
      (:r_andil 'X1 'X3 #$3FF)                       ; Les brouettes
      (:movdest 'X1 freel)                           ;  dans freel.
      (:r_sri 'X3 'X3 10)                            ; Les Kilos
      (:movdest 'X3 freelm) ))                       ; dans freelm


;   GCMARK : marquage d'un objet Lisp quelconque qui se trouve dans A1
;   Au retour A3 et A4 doivent e^tre inchange'es. (cf ../llm3/gc.llm3).
;   Dans cette de'finition ESTACK demande une tole'rance de 2 pointeurs!

(definstruct  GCMARK  ()
   ;; !!! A finir !!!
   (let ( (markr  (:genlab)) (markt  (:genlab)) (markl  (:genlab))
          (markv  (:genlab)) (markv2 (:genlab)) (markv4 (:genlab)) )
      (:BFLISP 'A1 markr)              ; je ne sais pas marquer.
      (:BTMARK 'A1 markr)              ; marque' c'est marque'!
      (:STMARK 'A1)                    ; sinon c,a l'est.
      (:BTCONS 'A1 markl)              ; on privilegie les listes.
      (:BTVECT 'A1 markv)              ; marquage spe'cialise' vecteurs
      (:BTSTRG 'A1 markt)              ; marquage spe'cialise' chai^nes
   (:new-label markr)
      (:RETURN)     
   (:new-label markt)                  ;;; marquage d'un type (vect ou strg)
      (:MOV '(TYP A1) 'A1)
      (:BRA 'MARK)
   (:new-label markl)
      (:CHKSTK 'ESTACK 'ERRFSGC)       ;;; marque la liste contenue dans A1
      (:PUSH '(CDR A1))                ; sauve le reste
      (:MOV  '(CAR A1) 'A1)            ; l'e'le'ment de liste a` marquer.
      (:CALL 'MARK)                    ; re'curse sur le CAR
      (:POP  'A1)                      ; re'cupe`re le reste
      (:BRA 'MARK)                      ; ite`re sur les CDR
   (:new-label markv)                  ;;; marque le vecteur dans A1
      (:PUSH 'A3)                      ; A3/A4 inchange's dans MARK.
      (:HGSIZE 'A1 'A3)                ; nombre d'e'le'ments du vecteur.
      (:PUSH 'A1)                      ; le vecteur (en &0)
      (:CHKSTK 'ESTACK 'ERRFSGC)       ; erreur fatale!!
      (:BRA markv4)                    ; de'marre bien la boucle.
   (:new-label markv2)
      (:HPXMOV '(& 0) 'A3 'A1)         ; e'le'ment suivant.
      (:PUSH 'A3)
      (:CALL 'MARK)                    ; marque l'e'le'ment quelconque.
      (:POP 'A3)
   (:new-label markv4)
      (:SOBGEZ 'A3 markv2)             ; on boucle sur le nb d'e'le'ments.
      (:POP 'A1)                       ; le vecteur
      (:POP 'A3)                       ; A3/A4 inchange's dans MARK.
      (:BRA markt)))

;;.Section "Les cellules de liste (CONS)"
;;.SSection "Organisation me'moire"
(definstruct NXCONS (op lab)
   (:nxxx op 8 'ECONS lab) )

(definstruct SFCONS (op)
   (:MOV op 'FCONS) )

(definstruct GFCONS (op)
   (:MOV 'FCONS op) )

;;.SSection "Test de type cellule de liste"
(definstruct BTCONS (op lab) (:compare-signed-and-branch op 'ge 'RBCONS lab))
(definstruct BFCONS (op lab) (:compare-signed-and-branch op 'lt 'RBCONS lab))

;;.SSection "Cre'ation (allocation) d'une cellule de liste"
;;l'instruction NCONS est une macroinstruction de'finie dans le fichier
;;macllm3.
(defun :docons (le_car le_cdr destination)
   (let ( (lab (:genlab)) )
      (:MOV 'FCONS 'X4)
      (:CABNE 'X4 'NIL lab)
      (:CALL 'GCCONS)
      (:MOV 'FCONS 'X4)
      (:new-label lab)
      (:MOV '(CDR X4) 'FCONS)
      (:MOV le_car '(CAR X4))
      (:MOV le_cdr '(CDR X4))
      (:MOV 'X4 destination) ))

(definstruct CONS (op1 op2)
   (:docons op1 op2 op2) )

(definstruct XCONS (op1 op2)
    (:docons op2 op1 op2) )

;;.SSection "Le GC Stop & Copy"
(definstruct BTOLD (op lab))

(definstruct GCFLIP ())

;;.SSection "Le bit invisible"
;;Se refe'rer a` la section sur le GC.
(definstruct STINVSBL (accu)
   (:p_globl 'BTBIN)
   (:bit-table-access accu 'BTBIN 'RBCONS)
   (:r_or 'X3 'X3 'X2)
   (:r_st 'X3 0 'X1) )

(definstruct CLINVSBL (accu)
   (:p_globl 'BTBIN)
   (:bit-table-access accu 'BTBIN 'RBCONS)
   (:r_andc 'X3 'X3 'X2)
   (:r_st 'X3  0 'X1) )

(definstruct BTINVSBL (accu lab)
   (:p_globl 'BTBIN)
   (:bit-table-access accu 'BTBIN 'RBCONS)
   (:r_and 'X3 'X3 'X2)
   (:compare-and-branch 'X3 'ne '(|#| 0) lab) )

(definstruct BFINVSBL (accu lab)
   (:p_globl 'BTBIN)
   (:bit-table-access accu 'BTBIN 'RBCONS)
   (:r_and 'X3 'X3 'X2)
   (:compare-and-branch 'X3 'eq '(|#| 0) lab) )

;;.Section "NIL"
;;Les trois instructions MOVNIL, BTNIL et BFNIL sont des macroinstructions
;;de'finies dans le fichier macllm3.

;;.Section "Les symboles"
;;.SSection "Organisation me'moire"
(definstruct NXSYMB (op lab)
   (:nxxx op (getvalue 'FINSYMB) 'RBCONS lab) )

;;.SSection "Les tests de type"
(definstruct BTSYMB (op lab) (:bt2xx op 'RBSYMB 'RBCONS lab))
(definstruct BFSYMB (op lab) (:bf2xx op 'RBSYMB 'RBCONS lab))

;;.SSection "Les instructions spe'cialise'es"
(definstruct GFTYPE (symb dest)
   (:r_lhz dest (getvalue 'FTYPE) symb) )

(definstruct SFTYPE (src symb)
   (:r_sth (:prepsrc src 'X1) (getvalue 'FTYPE) symb) )

(definstruct GPTYPE (symb dest)
   (:r_lhz dest (getvalue 'PTYPE) symb) )

(definstruct SPTYPE (src symb)
   (:r_sth (:prepsrc src 'X1) (getvalue 'PTYPE) symb) )

;;.SSection "Cre'ation statique"
(definstruct MAKFNT (nom plen pname)
   (let ( (symb (concat (cadr pname))) )
      ;; Be careful! Some of those are not variables!
      (unless (variablep symb) (setq symb (concat "V." symb)))
      (:load-reg plen 'A1)
      (:r_cal 'A2 (getprop symb ':string-index) 'CP)
      (:r_l 'A3 (getprop nom ':vallab) 'CP)
      (:r_cal 'A4 (getprop 'trash ':adr) 'CP)
      (:r_lil 'X1 (catenate "._" nom))
      (:PUSH 'X1)
      (:CALL 'INISYMB) ))

(definstruct MAKCST (nom plen pname)
   (let ( (symb (concat (cadr pname))) )
      ;; Be careful! Some of those are not variables!
      (unless (variablep symb) (setq symb (concat "V." symb)))
      (:MOV plen 'A1)
      (:r_cal 'A2 (getprop symb ':string-index) 'CP)
      (:r_cal 'A3 (getprop 'trash ':adr) 'CP)
      (:CALL 'INICST) ))

;;.SSection "Les variables"
(definstruct SETBVAR (bvar)
   ; Initialise la borne bvar.
   (setq bvar (:prepsrc bvar 'X2))
   (:MOV bvar 'BVAR)
   (:MOV bvar 'RBVAR) )

(definstruct BTVAR (op lab) (:bt2xx op 'RBVAR 'RBCONS lab))
(definstruct BFVAR (op lab) (:bf2xx op 'RBVAR 'RBCONS lab))

;;.Section "Les nombres"
;;.SSection "Les entiers sur 16 bits"
;;.SSSection "L'organisation me'moire"
(definstruct NXNUMB (op lab) (:nxxx op 4 'RBFLOAT lab))

;;.SSSection "Les tests de type"
(definstruct BTFIX (op lab) (:compare-and-branch op 'lt 'RBFLOAT lab))
(definstruct BFFIX (op lab) (:compare-and-branch op 'ge 'RBFLOAT lab))

(definstruct BTNUMB (op lab) (:bt2xx op 'BNUMB 'RBFLOAT lab))
(definstruct BFNUMB (op lab) (:bf2xx op 'BNUMB 'RBFLOAT lab))

;;.SSSection "Les instructions de calcul"
(defun :arithm-imm (fnt dest src n)
   (selectq fnt (add (:r_ai   dest src n))
                (sub (:r_si   dest src n))
                (mul (:r_muli dest src n))
                (and (:r_andil dest src n))
                (or  (:r_oril  dest src n))
                (xor (:r_xoril dest src n)) ))

(defun :arithm (fnt dest src1 src2)
   (selectq fnt (add (:r_a    dest src1 src2))
                (sub (:r_sf   dest src1 src2))
                (mul (:r_muls dest src1 src2))
                (and (:r_and  dest src1 src2))
                (or  (:r_or   dest src1 src2))
                (xor (:r_xor  dest src1 src2)) ))

(defun :direct-arithm2 (op1 fnt op2 lab)
   (let ( (n (:fix? op1)) )
      (ifn lab
         (if n
            (:arithm-imm fnt 'X2 (:prepsrc op2 'X2) n)
            (:arithm     fnt 'X2 (:prepsrc op1 'X1) (:prepsrc op2 'X2)) )
         (unless n (:r_exts 'X1 (:prepsrc op1 'X1)))
         (:r_exts 'X2 (:prepsrc op2 'X2))
         (if n
            (:arithm-imm fnt 'X2 'X2 n)
            (:arithm fnt 'X2 'X1 'X2) ))
      (:mov-arithm-dest 'X2 op2 lab) ))

(defun :mov-arithm-dest (reg dest ovflab)
   (if (:register? dest)
      (:r_andil dest reg #$FFFF)
      (:r_andil 'X1 reg #$FFFF)
      (:movdest 'X1 dest) )
   (when ovflab
      ;; A refaire !!!
      (:r_exts 'X4 reg)
      (:compare-and-branch 'X4 'ne reg ovflab) ))

(definstruct INCR (op lab) (:direct-arithm2 '(|#| 1) 'add op  lab))
(definstruct DECR (op lab) (:direct-arithm2 '(|#| 1) 'sub op  lab))
(definstruct PLUS (op1 op2 lab) (:direct-arithm2 op1 'add op2 lab))
(definstruct DIFF (op1 op2 lab) (:direct-arithm2 op1 'sub op2 lab))


(definstruct TIMES (op1 op2 lab)
   (let ( (n (:fix? op1)))
      (unless n (:r_exts 'X1 (:prepsrc op1 'X1)))
      (:r_exts 'X2 (:prepsrc op2 'X2))
      (if n
         (:arithm-imm 'mul 'X2 'X2 n)
         (:arithm     'mul 'X2 'X1 'X2) )
      (:mov-arithm-dest 'X2 op2 lab) ))

(definstruct QUO (op1 op2 lab)
   (:r_exts 'X1 (:prepsrc op1 'X1))
   (:r_exts 'X2 (:prepsrc op2 'X2))
   (:r_divs 'X1 'X2 'X1)
   (:mov-arithm-dest 'X1 op2 ()) )

(definstruct REM (op1 op2 lab)
   (:r_exts 'X1 (:prepsrc op1 'X1))
   (:r_exts 'X2 (:prepsrc op2 'X2))
   (:r_divs 'X1 'X2 'X1)
   (:r_mfmq 'X1)
   (:mov-arithm-dest 'X1 op2 ()) )

(definstruct NEGATE (op)
   (:r_exts 'X1 (:prepsrc op 'X1))
   (:r_neg 'X1 'X1)
   (:mov-arithm-dest 'X1 op ()) )

;;.SSSection "Les comparaisons nume'riques entie`res"
(defun :compare-num-and-branch (op1 cmp op2 label)
   (let ( (n1 (:fix? op1)) (n2 (:fix? op2)) )
      (cond
         (n1 (:r_exts 'X1 (:prepsrc op2 'X1))
             (:r_cmpi 'X1 n1)
             (:cmprel (:rev-op-cmp cmp) label) )
         (n2 (:r_exts 'X1 (:prepsrc op1 'X1))
             (:r_cmpi 'X1 n2)
             (:cmprel cmp label) )
         (t  (:r_exts 'X1 (:prepsrc op1 'X1))
             (:r_exts 'X2 (:prepsrc op2 'X2))
             (:r_cmp 'X1 'X2)
             (:cmprel cmp label) ))))

(definstruct CNBEQ (op1 op2 lab) (:compare-and-branch op1 'eq op2 lab))
(definstruct CNBNE (op1 op2 lab) (:compare-and-branch op1 'ne op2 lab))
(definstruct CNBLT (op1 op2 lab) (:compare-num-and-branch op1 'lt op2 lab))
(definstruct CNBLE (op1 op2 lab) (:compare-num-and-branch op1 'le op2 lab))
(definstruct CNBGT (op1 op2 lab) (:compare-num-and-branch op1 'gt op2 lab))
(definstruct CNBGE (op1 op2 lab) (:compare-num-and-branch op1 'ge op2 lab))

;;.SSSection "Les instructions logiques"
(defun :logop (op1 fnt op2)
   (let ( (n (:fix? op1)) (r2 (:prepsrc op2 'X2)) )
      (if n
         (:arithm-imm fnt r2 r2 n)
         (:arithm     fnt r2 (:prepsrc op1 'X1) r2) )
      (unless (eq r2 op2) (:movdest r2 op2)) ))

(definstruct LAND (op1 op2) (:logop op1 'and op2))
(definstruct LOR  (op1 op2) (:logop op1 'or  op2))
(definstruct LXOR (op1 op2) (:logop op1 'xor op2))

(definstruct LSHIFT (nshift op)
   (let ( (n (:fix? nshift)) )
      (if n
         (if (:register? op)
            (:r_rlinm op op (logand n #$1F) 16 31)
            (:r_rlinm 'X2 (:prepsrc op 'X2) (logand n #$1F) 16 31)
            (:movdest 'X2 op) )
         (:r_andil 'X1 (:prepsrc nshift 'X1) #$1F)
         (if (:register? op)
            (:r_rlnm op op 'X1 16 31)
            (:r_rlnm 'X2 (:prepsrc op 'X2) 'X1 16 31)
            (:movdest 'X2 op) ))))

;;.SSection "Les nombres flottants"
;;.SSSection "L'organisation me'moire"
;;Les nombres flottants sont de'finis par la structure LL_FLOAT dont la
;;de'claration se trouve dans le fichier "lelispc.h".
(definstruct NXFLOAT (op lab)
   (unless (pgetvalue '31BITFLOATS)
      (:nxxx op 8 'RBVECT lab) ))

;;.SSSection "Les tests de type nombre flottant"
(definstruct BTFLOAT (op lab)
   (ifn (pgetvalue '31BITFLOATS)
      (:bt2xx op 'RBFLOAT 'RBVECT lab)
      (:compare-signed-and-branch op 'lt '(|#| 0) lab) ))

(definstruct BFFLOAT (op lab)
   (ifn (pgetvalue '31BITFLOATS)
      (:bf2xx op 'RBFLOAT 'RBVECT lab)
      (:compare-signed-and-branch op 'ge '(|#| 0) lab) ))

;;.SSSection "Conversions"
(definstruct FIX (op)
   (:unrol-float op 'F1)
   (:call-c-direct '.fixc)
   (:mov-arithm-dest 'X1 op ()) )

(definstruct FLOAT (op)
   (testfloat)
   (:r_exts 'X1 (:prepsrc op 'X1))
   (:call-c-direct '.floatc)
;;; I take this code from C
;;; double floatc (intval) long intval;{
;;; 	return ((double) intval);
;;; }
;;;   (:r_l 'X2 #$258 'TOC)
;;;   (:r_liu 'X0 #$4330)
;;;   (:r_xoriu 'X1 'X1 #$8000)
;;;   (:r_st 'X0 -16 'SP)
;;;   (:r_st 'X1 -12 'SP)
;;;   (:r_lfd 'F2 0 'X2)
;;;   (:r_lfd 'F1 -16 'SP)
;;;   (:r_fs 'F1 'F1 'F2)
   (:rol-float 'F1 op) )

(definstruct CVFTOA (src strg cnt)
  (:unrol-float src 'F1)
  (:movaheap strg 'X3)
  (:call-c-direct '.llrt_cvftoa)
  (:movdest 'X1 cnt) )

(definstruct CVATOF (strg slen lab flt)
   (testfloat)
   (:movaheap strg 'X1)
   (:r_lil 'X2 0)
   (:r_stbx 'X2 (:prepsrc slen 'X3) 'X1)
   (:call-c-direct '.llrt_cvatof)
   (:rol-float 'F1 flt) )

;;Test s'il est possible d'allouer un flottant 64bits sans GC.
;;Si non on appelle GCFLOAT.
(defun testfloat ()
  (unless (pgetvalue '31BITFLOATS)
	  (let ( (nogc (:genlab)))
	    (:load-reg 'FFLOAT 'X3)
	    (:compare-and-branch 'X3 'ne '(|#| 0) nogc)
	    (:CALL 'GCFLOAT)
	    (:new-label nogc))))

;;.SSSection "Les instructions de base"
;; A (testfloat) must appears before.
(defun :rol-float (op dest)
   ;; On suppose que 'op' est un registre flottant.
   (cond
      ((pgetvalue '31BITFLOATS)
         (:r_frsp op op)          ; stfs ne le transforme pas en float !!!!
         (:r_stfs op 0 'CP)
         (:r_l 'X1 0 'CP)
         (:r_rlinm 'X1 'X1 31 1 31)
         (if (:register? dest)
             (:r_oriu dest 'X1 #$8000)
             (:r_oriu 'X1 'X1 #$8000)
             (:movdest 'X1 dest) ))
      (t (let ( (dreg (if (:register? dest) dest 'X3)) )
            (:load-reg 'FFLOAT dreg)
            (:r_l 'X1 0 dreg)
            (:movdest 'X1 'FFLOAT)
            (:r_stfd op 0 dreg)
            (unless (eq dreg dest) (:movdest dreg dest)) ))))

(defun :unrol-float (op dest)
   ;; On suppose que 'dest' est un registre flottant.
   (cond
      ((pgetvalue '31BITFLOATS)
         (if (:register? op)
            (:r_a 'X1 op op)
            (:r_a 'X1 (:prepsrc op 'X1) 'X1) )
         (:r_st 'X1 0 'CP)
         (:r_lfs dest 0 'CP) )
      (t (:r_lfd dest 0 (:prepsrc op 'X1))) ))

(defun :arith-float (op1 fnt op2)
   (testfloat)
   (:unrol-float op1 'F1)
   (:unrol-float op2 'F2)
   (selectq fnt (add (:r_fa 'F1 'F2 'F1))
                (sub (:r_fs 'F1 'F2 'F1))
                (quo (:r_fd 'F1 'F2 'F1))
                (mul (:r_fm 'F1 'F2 'F1)) )
   (:rol-float 'F1 op2) )

(definstruct FPLUS  (op1 op2) (:arith-float op1 'add op2))
(definstruct FDIFF  (op1 op2) (:arith-float op1 'sub op2))
(definstruct FQUO   (op1 op2) (:arith-float op1 'quo op2))
(definstruct FTIMES (op1 op2) (:arith-float op1 'mul op2))

;;.SSSection "Les comparaisons"
(defun :compare-float-and-branch (op1 cmp op2 lab)
   (:unrol-float op1 'F1)
   (:unrol-float op2 'F2)
   (:r_fcmpu 'F1 'F2)
   (:cmprel cmp lab) )

(definstruct CFBEQ (op1 op2 lab) (:compare-float-and-branch op1 'eq op2 lab))
(definstruct CFBNE (op1 op2 lab) (:compare-float-and-branch op1 'ne op2 lab))
(definstruct CFBGT (op1 op2 lab) (:compare-float-and-branch op1 'gt op2 lab))
(definstruct CFBGE (op1 op2 lab) (:compare-float-and-branch op1 'ge op2 lab))
(definstruct CFBLT (op1 op2 lab) (:compare-float-and-branch op1 'lt op2 lab))
(definstruct CFBLE (op1 op2 lab) (:compare-float-and-branch op1 'le op2 lab))

;;.SSSection "Les fonctions circulaires et mathe'matiques"
(defun :opfloat1 (src fnt dest)
   (testfloat)
   (:unrol-float src 'F1)
   (:call-c-direct fnt)
   (:rol-float 'F1 dest) )

(definstruct SIN   (src dest) (:opfloat1 src '.sin   dest))
(definstruct COS   (src dest) (:opfloat1 src '.cos   dest))
(definstruct ASIN  (src dest) (:opfloat1 src '.asin  dest))
(definstruct ACOS  (src dest) (:opfloat1 src '.acos  dest))
(definstruct ATAN  (src dest) (:opfloat1 src '.atan  dest))
(definstruct EXP   (src dest) (:opfloat1 src '.exp   dest))
(definstruct LOG   (src dest) (:opfloat1 src '.log   dest))
(definstruct LOG10 (src dest) (:opfloat1 src '.log10 dest))
(definstruct SQRT  (src dest) (:opfloat1 src '.sqrt  dest))

(definstruct POWER (src1 src2 dest)
   (testfloat)
   (:unrol-float src1 'F1)
   (:unrol-float src2 'F2)
   (:call-c-direct '.llrt_power)
   (:rol-float 'F1 dest) )

;;.SSection "Les nombres a` pre'cision variable"
(defun :hight-low (src hight low)
   ;; Met les poids forts de 'src' dans 'hight',
   ;;  et les poids faibles dans 'low'. On suppose que 'src' != X3.
   (let ( (reg (:prepsrc src 'X1)) )
      (if (:register? hight)
         (:r_sri hight reg 16)
         (:r_sri 'X3 reg 16)
         (:movdest 'X3 hight) )
      (if (:register? low)
         (:r_andil low reg #$FFFF)
         (:r_andil 'X3 reg #$FFFF)
         (:movdest 'X3 low) )))

(definstruct EPLUS (op1 op2 op3 op4 op5)
   ;; op4 <- HIGHT(op1 + op2 + op3)
   ;; op5 <-   LOW(op1 + op2 + op3)
   (:r_a 'X1 (:prepsrc op1 'X1) (:prepsrc op2 'X2))
   (:r_a 'X1 'X1 (:prepsrc op3 'X2))
   (:hight-low 'X1 op4 op5) )

(definstruct ETIMES (op1 op2 op3 op4 op5 op6)
   ;; op5 <- HIGHT(op1*op2+op3+op4)
   ;; op6 <-   LOW(op1*op2+op3+op4)
   (:r_muls 'X1 (:prepsrc op1 'X1) (:prepsrc op2 'X2))
   (:EPLUS 'X1 op3 op4 op5 op6) )

(definstruct EDIVIDE (op1 op2 op3 op4 op5)
   ;; op4 <- op1:op2 / op3
   ;; op5 <- op1:op2 % op3
   ;; Le compilo C fait des optimisations pour op3 = 1 et op3 > op1:op2!!!
   (:HLADR op1 op2 'X1)
   (:r_mtmq 'X1)
   (:r_lil 'X0 0)
   ;; Il faut peut-e^tre masquer sur 16 bits!!!.
   (if (:register? op4)
      (:r_div op4 'X0 (:prepsrc op3 'X2))
      (:r_div 'X0 'X0 (:prepsrc op3 'X2))
      (:movdest 'X0 op4) )
   (if (:register? op5)
      (:r_mfmq op5)
      (:r_mfmq 'X0)
      (:movdest 'X0 op5) ))

(definstruct ECOMP (op1 op2 lab1 lab2 lab3)
   (:r_cmpl (:prepsrc op1 'X1) (:prepsrc op2 'X2))
   (:cmprel 'lt lab1)
   (:cmprel 'eq lab2)
   (:r_b lab3) )

;;.Section "Les caracte`res"
(definstruct UPPERC (op)
   (:r_si op op 32) )

(definstruct LOWERC (op)
   (:r_ai op op 32) )

;;.Section "Les vecteurs de Pointeurs Lisp"
;;.SSection "Organisation me'moire"
(definstruct NXVECT (op lab) (:nxxx op 8 'RBSTRG lab))

;;.SSection "Les tests de type vecteurs de pointeurs"
(definstruct BTVECT (op lab) (:bt2xx op 'RBVECT 'RBSTRG lab))
(definstruct BFVECT (op lab) (:bf2xx op 'RBVECT 'RBSTRG lab))

;;.Section "Les chai^nes de Caracte`res"
;;.SSection "Organisation me'moire"
(definstruct NXSTRG (op lab) (:nxxx op 8 'RBSYMB lab))

;;.SSection "Les tests de type chai^ne de caracte`res"
(definstruct BTSTRG (op lab) (:bt2xx op 'RBSTRG 'RBSYMB lab))
(definstruct BFSTRG (op lab) (:bf2xx op 'RBSTRG 'RBSYMB lab))

;;.Section "Zone du tas (HEAP)"
;;.SSection "Autres instructions (dixit la doc)"
(definstruct CHBLT (op1 op2 lab)
   (:compare-and-branch op1 'lt op2 lab) )

;;.SSection "La re'cupe'ration de l'espace"
(definstruct NXHB (size op)
   ;; Pour e^tre sur qu'il n'y ait pas de proble`me d'alignement, on debute
   ;; toutes les adresses du tas sur des frontie`res de mots (32 bits en
   ;; ge'ne'ral). Attention on rajoute a` la main le caracte`re `\0`.
   (:r_a 'X2 (:prepsrc size 'X1) (:prepsrc op 'X2))
   (:r_ai 'X2 'X2 13)
   (:r_lil 'X1 3)
   (if (:register? op)
      (:r_andc op 'X2 'X1)
      (:r_andc 'X2 'X2 'X1)
      (:movdest 'X2 op) ))

(definstruct NXHF (heap))

(definstruct NXHP (size op)
   (:r_sli 'X1 (:prepsrc size 'X1) 2)
   (:r_a 'X2 (:prepsrc op 'X2) 'X1)
   (if (:register? op)
      (:r_ai op 'X2 8)
      (:r_ai 'X2 'X2 8)
      (:movdest 'X2 op) ))

(definstruct NXHS (heap))

(definstruct HBLT (ssrc esrc sdest)
   ;; A revoir !!!
   (:load-reg ssrc 'X1)
   (:r_sf 'X2 'X1 (:prepsrc esrc 'X2))
   (:r_sri 'X2 'X2 2)
   (:load-reg sdest 'X3)
   (:blitw 'X2 'X1 'X3 'X4) )

(defun :blitw (nb source dest aux)
   ;; A refaire !!!
   ;; transfert "nb" mots de "source" vers "dest" en utilisant "aux"
   ;; "nb" est force'ment un registre de travail.
   (let ( (l1 (:genlab)) (l2 (:genlab)) (l3 (:genlab)) (l4 (:genlab))
          (l5 (:genlab)) )
      (:r_cmp dest source)
      (:r_ble l4)
      (:movdest nb aux)
      (:r_sli aux aux 2)
      (:r_a source source aux)
      (:r_a dest dest aux)
      (:r_b l2)
      (:new-label l1)
      (:r_l aux 0 source)
      (:r_st aux 0 dest)
      (:new-label l2)
      (:r_si source source 4)
      (:r_si dest dest 4)
      (:r_si nb nb 1)
      (:r_cmpi nb 0)
      (:r_bge l1)
      (:r_b l5)
      (:new-label l3)
      (:r_l aux 0 source)
      (:r_st aux 0 dest)
      (:r_ai source source 4)
      (:r_ai dest dest 4)
      (:new-label l4)
      (:r_si nb nb 1)
      (:r_cmpi nb 0)
      (:r_bge l3)
      (:new-label l5) ))

;;.SSection "Acce`s indexe'"
;;.SSSection "De type octet"
(defun :movaheabix (op ind reg)
   ;; charge l'adresse heap d'octet "op+ind" dans "reg"
   (let ( (n (:fix? ind)) )
      (:r_l reg 0 (:prepsrc op reg))
      (if (and n (lt n #$7FF8))
         (:r_cal reg (add n 8) reg)
         (:r_ai reg reg 8)
         (:r_a reg reg (:prepsrc ind 'X1)) )))

(definstruct HBXMOV (strg ind dest)
   (let ( (n (:fix? ind)) )
      (:r_l 'X1 0 (:prepsrc strg 'X1))
      (cond
         ((and n (lt n #$7FF8))
            (if (:register? dest)
               (:r_lbz dest (add n 8) 'X1)
               (:r_lbz 'X1 (add n 8) 'X1)
               (:movdest 'X1 dest) ))
         (t (:r_ai 'X2 (:prepsrc ind 'X2) 8)
            (if (:register? dest)
               (:r_lbzx dest 'X1 'X2)
               (:r_lbzx 'X1 'X1 'X2)
               (:movdest 'X1 dest) )))))

(definstruct HBMOVX (val strg ind)
   (let ( (n (:fix? ind)) )
      (:r_l 'X1 0 (:prepsrc strg 'X1))
      (cond
         ((and n (lt n #$7FF8))
            (:r_stb (:prepsrc val 'X2) (add n 8) 'X1) )
         (t (:r_ai 'X2 (:prepsrc ind 'X2) 8)
            (:r_stbx (:prepsrc val 'X3) 'X1 'X2) ))))

(definstruct HBMOVM (size strgs inds strgd indd)
   ;; A revoir !!!
   (:movaheabix strgs inds 'X2)
   (:movaheabix strgd indd 'X3)
   (:load-reg size 'X1)
   (:blitb 'X1 'X2 'X3 'X4) )

(defun :blitb (nb source dest aux)
   ;; A revoir !!!
   ;; doit marcher dans les deux sens si la chaine est partage'e
   ;; transfert "nb" octets de "source" vers "dest" en utilisant "aux"
   ;; "nb" est force'ment un registre de travail.
   (let ( (l1 (:genlab)) (l2 (:genlab)) (l3 (:genlab)) (l4 (:genlab))
          (l5 (:genlab)) )
      (:r_cmp dest source)
      (:r_ble l4)
      (:r_a source source nb)
      (:r_a dest dest nb)
      (:r_b l2)
      (:new-label l1)
      (:r_lbz aux 0 source)
      (:r_stb aux 0 dest)
      (:new-label l2)
      (:r_si source source 1)
      (:r_si dest dest 1)
      (:r_si nb nb 1)
      (:r_cmpi nb 0)
      (:r_bge l1)
      (:r_b l5)
      (:new-label l3)
      (:r_lbz aux 0 source)
      (:r_stb aux 0 dest)
      (:r_ai source source 1)
      (:r_ai dest dest 1)
      (:new-label l4)
      (:r_si nb nb 1)
      (:r_cmpi nb 0)
      (:r_bge l3)
      (:new-label l5) ))

(definstruct HBTEQ (size strg1 ind1 strg2 ind2 lab)
   ;; A revoir !!!
   (:movaheabix strg1 ind1 'X2)
   (:movaheabix strg2 ind2 'X3)
   (:load-reg size 'X1)
   (let ( (l1 (:genlab)) (l2 (:genlab)) (l3 (:genlab)) )
      (:r_b l2)
      (:new-label l1)
      (:r_lbz 'X4 0 'X2)
      (:r_lbz 'X5 0 'X3)
      (:r_cmp 'X4 'X5)
      (:r_bne l3)
      (:r_ai 'X2 'X2 1)
      (:r_ai 'X3 'X3 1)
      (:new-label l2)
      (:r_si 'X1 'X1 1)
      (:r_cmpi 'X1 0)
      (:r_bge l1)
      (:r_b lab)
      (:new-label l3) ))

(definstruct MOVBM (size src strg)
   ;; A revoir !!!
   (:load-reg size 'X1)
   (:load-reg src 'X2)
   (:movaheap strg 'X3)
   (:blitb 'X1 'X2 'X3 'X4) )

;;.SSSection "De type pointeurs"
(definstruct HPXMOV (vect ind dest)
   (let ( (n (:fix? ind)) )
      (:r_l 'X1 0 (:prepsrc vect 'X1))
      (cond
         ((and n (lt n #$1FFE))
            ;; The'oriquement le cas > #$2000 peut se faire avec un 'cau'
            ;;   pour se mettre dans la page de 64K puis un 'l', mais j'imagine
            ;;   que ce cas est improbable...
            (if (:register? dest)
               (:r_l dest (add 8 (logshift n 2)) 'X1)
               (:r_l 'X1 (add 8 (logshift n 2)) 'X1)
               (:movdest 'X1 dest) ))
         (t (:r_ai 'X2 (:prepsrc ind 'X2) 2)
            (:r_sli 'X2 'X2 2)
            (if (:register? dest)
               (:r_lx dest 'X1 'X2)
               (:r_lx 'X1 'X1 'X2)
               (:movdest 'X1 dest) )))))

(definstruct HPMOVX (val vect ind)
   (let ( (n (:fix? ind)) )
      (:r_l 'X1 0 (:prepsrc vect 'X1))
      (cond
         ((and n (lt n #$1FFE))
            (:r_st (:prepsrc val 'X3) (add 8 (logshift n 2)) 'X1) )
         (t (:r_ai 'X2 (:prepsrc ind 'X2) 2)
            (:r_sli 'X2 'X2 2)
            (:r_stx (:prepsrc val 'X3) 'X1 'X2) ))))

(defun :movaheapix (op ind reg)
   ;; charge l'adresse heap d'octet "op+ind" dans "reg"
   (let ( (n (:fix? ind)) )
      (:r_l reg 0 (:prepsrc op reg))
      (if (and n (lt n #$1FF8))
         (:r_cal reg (add n (logshift n 2)) reg)
         (:r_ai reg reg 8)
         (:r_sli 'X1 (:prepsrc ind 'X1) 2)
         (:r_a reg reg 'X1) )))

(definstruct HPMOVM (size vects inds vectd indd)
   ;; A revoir !!!
   (:movaheapix vects inds 'X2)
   (:movaheapix vectd indd 'X3)
   (:load-reg size 'X1)
   (:blitw 'X1 'X2 'X3 'X4) )

;;; (HOVNI (bheap cheap eheap last_obj_adr))
(definstruct HOVNI (arg1 arg2 arg3 arg4)
  (:movdest (:prepsrc '(|#| 0) 'X4) 'STATE)
  (when (and arg4 (neq arg4 'X4)) (:load-reg arg4 'X4))
  (when (and arg3 (neq arg3 'X3)) (:load-reg arg3 'X3))
  (when (and arg2 (neq arg2 'X2)) (:load-reg arg2 'X2))
  (when (and arg1 (neq arg1 'X1)) (:load-reg arg1 'X1))
  (:STACK 'SPLISP)
  (:SSTACK 'SPEXT)
  (:r_si 'SP 'SP 24) ; trois mots pour l'appele'.
  (:p_globl '.llovni)
  (:r_bl '.llovni)
  (:NOP)
  (:r_ai 'SP 'SP 24) ; on depile les trois mots.
  (:SSTACK 'SPLISP)
  (:movdest (:prepsrc '(|#| 1) 'X4) 'STATE) )


;;.SSection "Acce`s aux champs cache's"
(definstruct HGSIZE (op dest)
   (:r_l 'X1 0 (:prepsrc op 'X1))
   (if (:register? dest)
      (:r_l dest 4 'X1)
      (:r_l 'X1 4 'X1)
      (:movdest 'X1 dest) ))

(definstruct HSSIZE (val op)
   (:r_l 'X1 0 (:prepsrc op 'X1))
   (:r_st (:prepsrc val 'X2) 4 'X1) )

(definstruct HGOBJ (op dest)
   (:r_l 'X1 0 (:prepsrc op 'X1))
   (if (:register? dest)
      (:r_l dest 0 'X1)
      (:r_l 'X1 0 'X1)
      (:movdest 'X1 dest) ))

(definstruct HSOBJ (val op)
   (:r_l 'X1 0 (:prepsrc op 'X1))
   (:r_st (:prepsrc val 'X2) 0 'X1) )

;;.Section "Les Entre'es/Sorties"
(defun :argcallext (op type reg)
   (selectq type
      (heap (:movaheap op reg))
      (t    (:load-reg op reg)) ))

(defun :callext1 (fnt opret op1 t1)
   (:argcallext op1 t1 'X1)
   (:call-c-direct fnt)
   (when opret (:movdest 'X1 opret)) )

(defun :callext2 (fnt opret op1 t1 op2 t2)
   (:argcallext op1 t1 'X1)
   (:argcallext op2 t2 'X2)
   (:call-c-direct fnt)
   (when opret (:movdest 'X1 opret)) )

(defun :callext3 (fnt opret op1 t1 op2 t2 op3 t3)
   (:argcallext op1 t1 'X1)
   (:argcallext op2 t2 'X2)
   (:argcallext op3 t3 'X3)
   (:call-c-direct fnt)
   (when opret (:movdest 'X1 opret)) )

;;.SSection "Les instructions sur le canal terminal"
(definstruct TTYIN (op)
   ;; Il faut un INTEST !!!
   (:new-label 'ttyin_again)
   (#:expand:intest)
   (:call-c-direct '.ttyin)
   (if (:register? op)
      (:r_andil op 'X1 #$FF)
      (:r_andil 'X1 'X1 #$FF)
      (:movdest 'X1 op) )
   (:r_cmpi 'X1 255) ; code retour -1 donc erreur on IT -> on recommence.
   (:r_beq 'ttyin_again) )

(definstruct TTYIS (op cc)
   (:callext1 '.ttys cc '(|%| TRASH) t)
   (:MOV 'TRASH op)   ; le caractere est sur les 2 bits de poids forts
   (:r_sri op op 24)) ; on le pousse sur les poids faibles

(definstruct TTYINSTR (strg count)
   (:r_l 'X1 0 (:prepsrc strg 'X1))
   (:r_l 'X2 4 'X1)
   (:r_ai 'X1 'X1 8)
   (:call-c-direct '.ttyinstr)
   (:movdest 'X1 count) )

(definstruct TTYMSG (n strg)
   (let ( (symb (concat (cadr strg))) )
      (unless (variablep symb) (setq symb (concat "V." symb)))
      (:MOV n 'X1)
      (:r_cal 'X2 (getprop (concat (cadr strg)) ':string-index) 'CP)
      (:call-c-direct '.ttyout) ))

(definstruct TTYCRLF ()
   (:call-c-direct '.ttycrlf) )

(definstruct TTYSTRG (n strg)
   (:callext2 '.ttyout () n t strg 'heap) )

;;.SSection "Les instructions sur les fichiers"
;;.SSSection "Les instructions sur les fichiers de texte"
(definstruct INFILE (chan strg cc) (:callext2 '.infile cc chan t strg 'heap))
(definstruct OUFILE (chan strg cc) (:callext2 '.oufile cc chan t strg 'heap))
(definstruct APFILE (chan strg cc) (:callext2 '.apfile cc chan t strg 'heap))

(definstruct INBF (chan strg size cc)
   (:callext3 '.inbf cc chan t strg 'heap '(|%| LL_NCARS) t)
   (:MOV 'LL_NCARS size) )

(definstruct OUTF (chan strg size cc)
   (:callext3 '.outf cc chan t size t strg 'heap) )

(definstruct OUTFL (chan strg size cc)
   (:callext3 '.outfl cc chan t size t strg 'heap) )

;;.SSSection "Les instructions sur les fichiers binaires"
(definstruct INFILEB (chan strg cc) (:callext2 '.infile cc chan t strg 'heap))
(definstruct OUFILEB (chan strg cc) (:callext2 '.oufile cc chan t strg 'heap))
(definstruct APFILEB (chan strg cc) (:callext2 '.apfile cc chan t strg 'heap))

(definstruct INBFB (chan strg size cc)
   (:callext3 '.inbfb cc chan t strg 'heap '(|%| LL_NCARS) t)
   (:MOV 'LL_NCARS size) )

(definstruct OUTFLB (chan strg size cc)
   (:callext3 '.outfl cc chan t size t strg 'heap) )

;;.SSSection "Les instructions ge'ne'rales sur les fichiers"
(definstruct FCLOS (chan cc)
   (:callext1 '.fclos cc chan t) )

(definstruct FDELE (strg cc)
   (:callext1 '.fdele cc strg 'heap) )

(definstruct FRENA (strg1 strg2 cc)
   (:callext2 '.frena cc strg1 'heap strg2 'heap) )

(definstruct FCOPY (strg1 strg2 cc)
   (:callext2 '.fcopy cc strg1 'heap strg2 'heap) )

(definstruct MKDIR (strg cc)
   (:callext1 '.llmkdir cc strg 'heap) )

(definstruct rmdir (strg cc)
   (:callext1 '.llrmdir cc strg 'heap) )

(definstruct FPROBE (strg cc)
   (:callext1 '.fprobe cc strg 'heap) )

;;.SSection "Les instructions sur les images me'moire"
(definstruct CORSAV (strg cc)
   (:p_globl 'BLLM3)
   (:p_globl 'ELLM3)
   (:p_globl 'LLUCODE)
   (:p_globl 'LLUHEAP)
   (:XREFP 'GC 'HGC)
   (:CALL 'HGC)
   ;; Pourquoi ne pas faire ces deux MOV dans LLSTART !!!!
   (:MOV '(|%| BSAVE) 'BLLM3)
   (:MOV '(|%| EIMPUR) 'ELLM3)
   (:MOV 'CCODE 'LLUCODE)
   (:MOV 'CHEAP 'LLUHEAP)
   (:movaheap strg 'X1)
   (:CALL 'LL_CORSAV)
   (:movdest 'X1 cc) )

(definstruct COREST (strg cc)
   ;; Pourquoi ne pas faire ce MOV dans LLSTART !!!!
   (:p_globl 'BLLM3)
   (:MOV '(|%| BSAVE) 'BLLM3)
   (:movaheap strg 'X1)
   (:CALL 'LL_COREST)
   (:movdest 'X1 cc) )

;;.Section "Les instructions syste`me"
(definstruct CLINE (strg)
   (:callext1 '.cline () strg 'heap) )

(definstruct RUNTIME (op)
   (testfloat)
   (:call-c-direct '.runtime)
   (:rol-float 'F1 op) )

(definstruct SLEEP (op)
   (:unrol-float op 'F1)
   (:call-c-direct '.cdleep) )

(definstruct DATE (vect)
   (:callext1 '.cdate () vect 'heap) )

(definstruct GETENVRN (strg1 strg2 cnt)
   (:callext2 '.getenvrn cnt strg1 'heap strg2 'heap) )

(definstruct GETGLOBAL (strg op)
   (:callext1 '.getgloba op strg 'heap) )

(definstruct CALLG (op1 op2)
   (:r_si 'SP 'SP 4)
   (:r_st (:prepsrc op1 'X1) 0 'SP)
   (:CALL 'LL_CALLG)
   (:MOV 'CALLREG0 op2) )

;;.Section "Les interruptions"
(definstruct INTEST ()
   (let ( (label (:genlab)) )
      (:compare-and-branch 'ITCOUNT 'eq '(|#| 0) label)
      (:CALL 'ITHARD)
      (:new-label label) ))

(definstruct SETALARM (op)
   (:unrol-float op 'F1)
   (:call-c-direct '.setalarm) )

;;.Section "Les instructions d'acce`s a` la me'moire"
(definstruct ADRHL (adr hight low)
   (:hight-low adr hight low) )

(definstruct HLADR (hight low adr)
   (:r_sli 'X1 (:prepsrc hight 'X1) 16)
   (if (:register? adr)
      (:r_or adr 'X1 (:prepsrc low 'X2))
      (:r_or 'X1 'X1 (:prepsrc low 'X2))
      (:movdest 'X1 adr) ))

(definstruct MEMSET (val ad)
   (:r_sth (:prepsrc val 'X1) 0 (:prepsrc ad 'X2)) )

(definstruct MEMGET (ad result)
   (:r_lhz 'X1 0 (:prepsrc ad 'X1))
   (:mov-arithm-dest 'X1 result ()) )

(definstruct MEMMOVM (src1 cnt dest))

;;.Section "Les instructions spe'cifiques a` la machine"
(defmacro newinstruction (name . fval)
   `(progn (putprop ',name ',(length (car fval)) '#:llm3:narg)
           (definstruct ,name ,@fval) ))

(newinstruction PROLOGUE_LISP ()
   (:r_mflr 'X0)
   (:r_st 'X0 8 'SP)
   (:r_stm 'CP -76 'SP)
   ;; 1. Comprendre pourquoi 420 au lieu de 356 (24 link + 256 param + 76 regs)
   ;; 2. reponse au 1:
   ;; On definit ici la pile locale.
   ;;   420 marche bizarement car pas aligne' sur un mot.
   ;;   356 est le bon calcul mais
   ;;   Il faut aligne' sur un mot donc 360 (45 * 8) marche.
   (:r_stu 'SP -360 'SP)
   (:r_l 'CP "T.lelisp_dat" 'TOC) )

(newinstruction EPILOGUE_LISP ()
   (:r_ai 'SP 'SP 360)
   (:r_lm 'CP -76 'SP)
   (:r_l 'X0 8 'SP)
   (:r_mtlr 'X0)
   (:r_br) )

(newinstruction PROLOGUE_C ()
   (:r_si 'SP 'SP 360) )

(newinstruction EPILOGUE_C ()
   (:r_ai 'SP 'SP 360) )

(newinstruction FUNADR (val))

(newinstruction CALLR (reg)
   (:r_mtlr reg)
   (:r_brl) )

(newinstruction PUSHR (sp op)
   (:r_stu (:prepsrc op 'X1) -4 sp) )

(putprop 'C_CALL '(1 2 3 4 5) '#:llm3:narg)
(definstruct C_CALL (fn arg1 arg2 arg3 arg4)
   (when (and arg4 (neq arg4 'X4)) (:load-reg arg4 'X4))
   (when (and arg3 (neq arg3 'X3)) (:load-reg arg3 'X3))
   (when (and arg2 (neq arg2 'X2)) (:load-reg arg2 'X2))
   (when (and arg1 (neq arg1 'X1)) (:load-reg arg1 'X1))
   (:call-c-direct fn) )

(newinstruction CALL_C_DIRECT (name)
   (:r_bl name) )

(newinstruction ONSTACK (op1 op2)
   ;; move <taille> words from <fin exclu> onto the stack in preparation 
   ;; for a funcall
   (let ( (l1 (:genlab)) (l2 (:genlab)) )
      (:load-reg op1 'A4)
      (:load-reg op2 'A1)          ; counter
      (:load-reg 'A1 'A2)
      (:r_sli 'A2 'A2 2)           ; size in bytes
      (:r_sf 'A4 'A2 'A4)          ; end of the source
      (:r_sf 'SP 'A2 'SP)          ; alloc room for the args
      (:load-reg 'SP 'A3)          ; end of the destination
      (:r_b l2)
      (:new-label l1)
      (:r_l 'A2 0 'A4)
      (:r_st 'A2 0 'A3)
      (:r_ai 'A4 'A4 4)
      (:r_ai 'A3 'A3 4)
      (:new-label l2)
      ;; si. !!!!
      (:r_si 'A1 'A1 1)
      (:r_cmpi 'A1 0)
      (:r_bge l1) ))

(newinstruction MOVARGS (argsp narg)
   (:r_stm 'CP 280 'SP) ; peut etre (:r_stm 'CP 76 'SP)  a voir.
   (:movdest (:prepsrc argsp 'X1) 'X1)
   (:r_lmi  24  224 'X1)
   (:r_stmi 24  248 'SP)
   (:r_lmi   5  116 'X1)
   (:r_stmi  5  140 'SP)
   (:r_lmi   4    4 'X1)
   (:r_stmi  4   28 'SP)
   (:r_l     'X1  0 'X1)
   (:r_lmi  13  280 'SP)
   (:movdest (:prepsrc 'floatsp 'A2) 'A2)
   (:r_lfd  'F1  0 'A2)
   (:r_lfd  'F2  8 'A2)
   (:r_lfd  'F3 16 'A2)
   (:r_lfd  'F4 24 'A2)
   (:r_lfd  'F5 32 'A2)
   (:r_lfd  'F6 40 'A2)
   (:r_lfd  'F7 48 'A2)
   (:r_lfd  'F8 56 'A2)
   (:r_lfd  'F9 64 'A2)
   (:r_lfd 'F10 72 'A2)
   (:r_lfd 'F11 80 'A2)
   (:r_lfd 'F12 88 'A2)
   (:r_lfd 'F13 96 'A2) )

(newinstruction FIX_LL_C   (reg) (:r_exts reg reg))
(newinstruction STRG_LL_C  (reg) (:movaheap reg 'X1) (:movdest 'X1 reg))
(newinstruction VECT_LL_C  (reg) (:movaheap reg 'X1) (:movdest 'X1 reg))
(newinstruction FLOAT_LL_C (reg)
   (:unrol-float reg 'F1)
   (:MOV 'FLOATSP 'X3)
   (:r_stfdu 'F1 -8 'X3)
   ;; Pourquoi !!!!
   (:r_l 'X1 0 'X3)
   (:r_l 'X2 4 'X3)
   (:MOV 'X3 'FLOATSP) )

;;; convertion de X1 ( lisp float ) dans F1 ( C double)
;;; et retour a l'appelant. On ne sort pas du monde C.

(newinstruction CVTFLT_LL_C ()
   (:r_mflr 'X0)
   (:r_st 'X0 8 'CSP)
   (cond
      ((pgetvalue '31BITFLOATS)
       (:r_a 'X1 'X1 'X1)
       (:r_st 'X1 0 'CSP)
       (:r_lfs 'F1 0 'CSP)
       (:r_stfd 'F1 -8 'CSP)
       (:r_lfd 'F1 -8 'CSP))
      (t (:r_lfd 'F1 0 'X1)))
   (:r_l 'X0 8 'SP)
   (:r_mtlr 'X0)
   (:r_br) )

(newinstruction FIX_C_LL (op)
   (:r_andil 'X1 (:prepsrc op 'X1) #$FFFF)
   (:movdest 'X1 op) )

(newinstruction FLT_C_LL (op1 op2)
  ;; On suppose que F1 est toujours valide.
  (testfloat)
  (:rol-float 'F1 op1) )

(newinstruction STRG_C_LL (op)
   (let ( (l1 (:genlab)) (l2 (:genlab)) )
      (:MOV op 'A1)    ; get the source string
      (:MOV 'A1 'A2)   ; remember the beginning 
      (:r_b l1)
      (:new-label l2)
      (:r_ai 'A1 'A1 '1)
      (:new-label l1)
      (:r_lbz 'X1 0 'A1)
      (:r_cmpi 'X1 0)
      (:r_bne l2)
      (:r_sf 'A1 'A2 'A1)
      (:p_globl "crastrg")
      (:CALL 'CRASTRG)
      (:movdest 'A1 op) ))


(newinstruction VECT_C_LL (op)
   ;; !!! What !!!
)

;;; RFIX & RFLOAT:
;;;  On considere que les RFIX ForTran sont toujours sur 32bits (integer*4).
;;;  Et que les RFLOAT ForTran sur 64bits (real*8), parceque c'est
;;;  la me^me chose qu'en C, et le code reste le me^me lorsqu'on
;;;  rame`ne un flottant de C ou de ForTran, vers Lisp (type resultat=float)
;;;  Par contre les tableaux de flottants seront sur 32 bits car c'est
;;;  tout ce que permet ForTran.

(newinstruction RFIX_LL_X (llfix)
   ;; RFIX: entier LL dans LLFIX, a transformer en entier par reference dans
   ;; le meme registre.
   ;; Pour realiser cette indirection, l'idee est d'allouer l'entier ForTran
   ;;  dans un tableau LLM3 reserve' pour cela.
   (:r_exts llfix llfix)      ; sign extend the integer
   (:MOV 'REFARGPTR 'X1)      ; get the current ref arg pointer
   (:PUSHR 'X1 llfIX)         ; store the extended fix there
   (:MOV 'X1 'REFARGPTR)      ; update the reference arg pointer
   (:MOV 'X1 llfix) )         ; return the pointer to the integer

;;; RFLOAT:flottant LL dans result,
;;; a transformer en flottant par reference dans RESULT
;;; En 31bitfloat, il faut deboxer, et transformer en 64 bits, puis
;;; allouer ce flottant, dans le tableau LLM3 fait pour ca.
;;; En 64bitfloat: c'est gratuit: on passe le pointeur
(newinstruction RFLOAT_LL_X (llfloat)
   (:unrol-float llfloat 'F1)           ; put an IEEE double in F1
   (:MOV 'REFARGPTR 'X3)		; get the current ref arg pointer
   (:r_si 'x3 'x3 8)                    ; push 2 words on the reference stack
   (:r_stfd 'F1 0 'x3)                  ; store the double there
   (:MOV 'X3 'REFARGPTR)                ; update the reference arg POINTER
   (:MOV 'X3 llfloat) )		        ; return the pointer to the integer

(newinstruction FIXV_X_LL (vect)
   (let ( (l1 (:genlab)) (l2 (:genlab)) )
      (:movaheap vect vect)		; heap obj in vect and length in X2
      (:r_l 'X2 -4 vect)
      (:load-reg vect 'X4)              ; X4 is the pointer into the vector
      (:r_b l2)
      (:new-label l1)
      (:r_l 'X3 0 'X4)                  ; load the value
      (:r_andil 'X3 'X3 #$FFFF)         ; produce a 16 bit value
      (:r_st 'X3 0 'X4)			; and replace it.
      (:r_ai 'X4 'X4 4)                 ; increment the vector pointer
      (:new-label l2)
      ;; si.!!!!
      (:r_si 'X2 'X2 1)                 ; are there any more?
      (:r_cmpi 'X2 0)
      (:r_bge l1)
     ;; Pourquoi !!!
      (:movdest 'X4 vect) ))            ; return the pointer to the heap obj

(newinstruction FIXV_LL_X (vect)
   (let ( (l1 (:genlab)) (l2 (:genlab)) )
      (:movaheap vect vect)
      (:r_l 'X2 -4 vect)		; heap obj in vect and length in X2
      (:load-reg vect 'X4)              ; X4 is the pointer into the vector
      (:r_b l2)
      (:new-label l1)
      (:r_l 'X3 0 'X4)                  ; load the value
      (:r_exts 'X3 'X3)			; sign-extend the value
      (:r_st 'X3 0 'X4)			; and replace it.
      (:r_ai 'X4 'X4 4)                 ; increment the vector pointer
      (:new-label l2)
      ;; si.!!!!
      (:r_si 'X2 'X2 1)                 ; are there any more?
      (:r_cmpi 'X2 0)
      (:r_bge l1) ))
 
(newinstruction FLOATV_X_LL (vect)
   (let ( (l1 (:genlab)) (l2 (:genlab)) )
      (:movaheap vect vect)		; heap obj in X4 and length in X2
      (:r_l 'X2 -4 vect)
      (:load-reg vect 'x4)		; x4 is the pointer into the vector
      (:r_b l2)
      (:new-label l1)
      (:r_l 'x3 0 'x4)			; load the value
      (:r_sri 'X3 'X3 1)    		; shift the value
      (:r_oriu 'X3 'X3 #$8000)
      (:r_st 'x3 0 'x4)			; and replace it.
      (:r_ai 'x4 'x4 4)                 ; increment the vector pointer
      (:new-label l2)
      ;; si.!!!!
      (:r_si 'x2 'x2 1)	; are there any more?
      (:r_cmpi 'X2 0)
      (:r_bge l1)
     ;; Pourquoi !!!
      (:movdest 'X4 vect) ))            ; return the pointer to the heap obj
 
(newinstruction FLOATV_LL_X (vect)
   (let ( (l1 (:genlab)) (l2 (:genlab)) )
      (:movaheap vect vect)		; heap obj in x4 and length in x2
      (:r_l 'X2 -4 vect)
      (:load-reg vect 'x4)		; x4 is the pointer into the vector
      (:r_b l2)
      (:new-label l1)
      (:r_l 'x3 0 'x4)			; load the value
      (:r_a 'X3 'X3 'X3)		; shift the value
      (:r_st 'x3 0 'x4)			; and replace it.
      (:r_ai 'x4 'x4 4)                 ; increment the vector pointer
      (:new-label l2)
      ;; si.!!!!
      (:r_si 'x2 'x2 1)	; are there any more?
      (:r_cmpi 'X2 0)
      (:r_bge l1) ))

;;.Section "Le preprocessing de l'ensemble des fichiers LLM3"
;;.SSection "La fonction principale"
(defvar :lbrx-labels ())
(defun prs6000 ()
    (let ((in-if-stack '(t))
          (:sequential ())
          (:section ())
          (:index 0)
          (:callee '(GCCONS INISYMB INICST GCFLOAT HGC CRASTRG
                     RESTORE LL_CALLG ITHARD LL_CORSAV LL_COREST))
          (:safe-label ())
          (:ladr ())
          (:lsymb ())
          (:lvallab ())
          (:lstring ()) )
      (#:llm3:process-list-of-files ':process (cons 'llrs6000 #:llm3:files))
      ;; Les e'tiquettes de CALLs
      (setq :callee (nreverse :callee) :safe-label (nreverse :safe-label))
      (setq :ladr (nreverse :ladr) :lsymb (nreverse :lsymb)
            :lstring (nreverse :lstring) )
      (mapc (lambda (name) (putprop name 'safe-callee ':label))
            (inter :callee :safe-label) )
      (mapc (lambda (name) (putprop name 'unsafe-callee ':label))
            (differ :callee :safe-label) )
      ;; Les donne'es sur 32 bits.
      (setq :index (:create-adr :index :ladr ':adr))
      (putprop 'EIMPUR :index ':adr)      ; Done by hand !!!!
      (setq :index (:create-adr :index :lvallab ':vallab))
      ;; Les chai^nes de caracte`res.
      (setq :index (:create-string :index :lstring))
      ;; Les symbols lisp.
      (:create-symb 0 :lsymb)
      ;; On cre'e le fichier assembleur contenant toutes les donne'es.
     (with ( (outchan (openo "preproc.s")) )
         (print "	.toc")
         (print "T.lelisp_dat:	.tc	lelisp_dat[TC],lelisp_dat[RW]")
         (print "	.csect	lelisp_dat[RW]")
         (:s-dump-adr :ladr :lvallab)
         (:s-dump-string :lstring)
         (close (outchan)) )))

(defun inter (l1 l2)
   (cond
      ((null l1) ())
      ((memq (car l1) l2) (cons (car l1) (inter (cdr l1) l2)))
      (t (inter (cdr l1) l2)) ))

(defun differ (l1 l2)
   (cond
      ((null l1) ())
      ((memq (car l1) l2) (differ (cdr l1) l2))
      (t (cons (car l1) (differ (cdr l1) l2))) ))

;;.SSection "processing des lignes LLM3"
(defun :process (ligne)
   (when (consp ligne)
      (selectq (cadr ligne)
         (ENDC (nextl in-if-stack))
         (IFNE (newl in-if-stack
                  (and (symbolp (caddr ligne))
                       (neq (getvalue (caddr ligne)) 0) )))
         (IFEQ (newl in-if-stack 
                  (and (symbolp (caddr ligne))
                       (eq (getvalue (caddr ligne)) 0) )))
         (t (when (car in-if-stack)
               (unless (eq (cadr ligne) 'BRX)
                  (mapc ':process-operand (cddr ligne)) )
               (when (car ligne) (:new-label-occur (car ligne)))
               (:process2 (car ligne) (cadr ligne) (cddr ligne)) )))))

(defun :process-operand (op)
   (when (and (consp op) (eq (car op) '|@|) (not (memq (cadr op) :lvallab)))
      (newl :lvallab (cadr op)) ))

(defun :process2 (label codop larg)
   (selectq codop
      (ADR 
         (newl :ladr (cons label (car larg))) )
      (FUNADR
         (newl :ladr (cons label (car larg)))
         (newl :ladr (cons () "TOC[tc0]"))
         (newl :ladr (cons () 0)) )
      ((MAKFNT MAKCST)
         (setq :sequential t)
         (let ( ((nom plen pname) larg) symb )
            (unless (variablep (setq symb (concat (cadr pname))))
               (setq symb (concat "V." symb)) )
            (newl :lstring (cons symb (cadr pname)))
            (newl :lsymb nom) ))
      (TTYMSG
         (setq :sequential t)
         (let ( ((len strg) larg) symb )
            (unless (variablep (setq symb (concat (cadr strg))))
               (setq symb (concat "V." symb)) )
            (newl :lstring (cons symb (cadr strg))) ))
      (FENTRY
         (let ( (nom (car larg)) )
            (:new-label-occur nom)
            (:new-call-occur nom)
            (unless (memq nom :lvallab) (newl :lvallab nom)) ))
      ((CALL JCALL)
         (setq :sequential t)
         (:new-call-occur (car larg)) )
      (BRX
         (setq :sequential ())
         (let ( (tab (car larg)) )
            (when (and (consp tab) (eq (car tab) '|@|))
               (newl :lbrx-labels (cadr tab)) )))
      (TITLE
         (print "Je travaille sur: " (car larg))
         (setq :sequential ()) )
      ((BRA JMP BRI RETURN)
         (setq :sequential ()) )
      ((XREFI XREFP XDEFI XDEFP PURE IMPURE END))
      (t (setq :sequential t)) ))

(defun :new-label-occur (lab)
   (unless (or :sequential (memq lab :safe-label))
      (newl :safe-label lab) ))

(defun :new-call-occur (lab)
   (unless (memq lab :callee) (newl :callee lab)) )

;;.Section "Fonctions auxilliaires"
(defun :s-dump-adr (ladr lvallab)
   (mapc (lambda ((lab . val))
            (when (symbolp val) (print "	.globl	" val))
            (when lab (print "	.globl	" lab) (prin lab ":"))
            (print "	.long	" val) )
         ladr )
   (mapc (lambda (name) (print "	.globl	" name)
                        (print "	.long	" name) )
         lvallab ))

(defun :s-dump-string (lstring)
   (mapc
      (lambda ((name . s)) (:p_byte s))
      lstring ))

(defun :p_byte (s)
   (let ( (i 1) (n (slen s)) )
      (prin "	.byte	")
      (when (gt n 0)
         (ifn (chrpos #/" s)
            (let ((#:system:print-for-read t)) (prin s))
            (prin (sref s 0))
            (until (eq i n) (prin "," (sref s i)) (setq i (add1 i))) ))
      (terpri) ))

(defun :create-adr (index ladr ind)
   (mapc (lambda (l) (when (consp l) (setq l (car l)))
                     (when l (putprop l index ind))
                     (setq index (add index 4)) )
         ladr )
   index )

(defun :create-string (index lstrg)
   (mapc (lambda ((name . s)) (putprop name index ':string-index)
                              (setq index (add index (slen s))) )
         lstrg )
   index )

(defun :create-symb (index lsymb)
   (mapc (lambda (name) (putprop (concat "." name) index ':symbol-index)
                        (setq index (add index 32)) )
         lsymb ))
