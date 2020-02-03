; .EnTete "Le_Lisp Version 15.2" " " "Les Macros pour C"
; .EnPied "maC.ll" "%" "macC.ll"
; .sp 2
; .SuperTitre "Les Macros LLM3 pour C"
; .Auteur  "Bernard Serpette"
; .Auteur2 "Jerome Chailloux"

(unless (>= (version) 15.2)
        (error 'load 'erricf 'macC ))

(defvar #:sys-package:colon 'expand)

; .Section "Pre'sentation"

; Le fichier ../C/lelispc.h defini certaines constantes pouvant varier selon
; les types de machines.

; .Section "Les valeurs des assemblages conditionnels"

; .SSection "Les assemblages conditionnels de l'expanseur"

(defvalue STATLLM3    ())     ; statistiques LLM3
(defvalue 31BITFLOATS t)      ; flottants sur 31 bits.

; .SSection "Les assemblages conditionnels du code LLM3"

(defvalue COMPILO  0)
(defvalue DEBUG    0)
(defvalue GCDEBUG  0)
(defvalue SEDEBUG  0)
(defvalue DIVOVFL  0)
(defvalue STOPCOPY 0)

; .Section "Utilisation des registres"

; Les cinq registres rapides LLM3 (A1, A2, A3, A4 et SP) sont des variables
; globales C.

; .Section "Les Valeurs des symboles d'acce`s"

; .SSection "Aux proprie'te's naturelles des symboles"

(defvalue   CVAL       0)
(defvalue   PLIST      1)
(defvalue   FVAL       2)
(defvalue   PKGC       3)
(defvalue   OVAL       4)
(defvalue   ALINK      5)
(defvalue   PFTYPE     6)
(defvalue   PNAME      7)
(defvalue   FINSYMB    8)

; .SSection "Aux chai^nes de caracte`res et aux tableaux"

(defvalue   VAL        0)
(defvalue   TYP        1)

; .SSection "Aux cellules de liste"

(defvalue   CAR        0)
(defvalue   CDR        1)

; .SSection "Valeurs des ftypes"

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
(defvalue   DMACRO     10)
(defvalue   SUBRM      11)
(defvalue   SUBRDM     12)

; .SSection "Les types des caracte`res"

(defvalue  TCNULL      0)         ; CNULL
(defvalue  TCBCOM      1)         ; debut commentaire
(defvalue  TCECOM      2)         ; fin de commentaire
(defvalue  TCQUOTE     3)         ; quote char
(defvalue  TCLPAR      4)         ; par ouvrante 
(defvalue  TCRPAR      5)         ; par fermante
(defvalue  TCDOT       6)         ; le point (des listes)
(defvalue  TCSEP       7)         ; un se'parateur
(defvalue  TCSPKGC     8)         ; se'parateurs de packages
(defvalue  TCSPLICE    9)         ; splice macro caractere
(defvalue  TCMACRO    10)         ; macro caractere
(defvalue  TCSTRING   11)         ; se'parateur de chaines
(defvalue  TCPNAME    12)         ; pname normal
(defvalue  TCSYMB     13)         ; symbole normal
(defvalue  TCMSYMB    14)         ; symbole mono caractere

; .SSection "Les types d'unite's syntaxiques"

(defvalue  TCOBJ       3)         ; objet lisp
(defvalue  TCLIST      4)         ; liste lisp

; .Section "Les variables globales du macroexpanseur."

;  :RETURN-IS-PRODUCT? est mis a` T de`s que l'on a expanse' un return C,
;  cela e'vite de produire du "code not reached".
(defvar :return-is-product? ())

;  Contient la liste des variables (externes ou non) de'clare'es dans
;  le fichier <file>.h.
(defvar :variable-list ())

;  Contient la liste des fonctions de'clare'es (toujours externe) dans
;  le fichier <file>.h.
(defvar :function-list ())

;  Nume'ro du canal ouvert en e'criture sur le fichier <file>.h
(defvar :include-channel ())

;  :STATE contient soit IMPURE, BRX, PURE ou TITLE.
(defvar :state ())

;  :LAST-BRX contient la liste des fonctions d'indirection d'un BRX.
(defvar :last-brx ())

;  :LOCAL-LABELS sont les e'tiquettes LLM3 qui peuvent e^tre conside're'es
; comme des e'tiquettes C. Cette A-liste a e'te' engendre'e automatiquement
; dans le fichier"localabel" par la commande "dolocalabel".
;  Si vous n'en voulez pas, de'truisez ce fichier.
(defun :init-local-labels ()
     (let (l (in (catcherror t (openi "localabel"))))
          (when (consp in)
		(with ((inchan (car in)))
		      (untilexit eof
				 (newl l (read)))
		      (nreverse l)))))

(defvar :local-labels-module ())

; .Section "Les fonctions ge'ne'rales au macroexpanseur"

(defun :genlab ()
   ; ge'ne`re une nouvelle e'tiquette
   (setq genlab (incr genlab-counter)))

; .Section "Les fonctions d'impression spe'cifiques"

(defun :prin-label (l)
   ; imprime une e'tiquette
   (when l
      (if (eq :state 'impure)
         ; Une variable globale, l'initialisation vient avec ADR.
         (with ( (outchan :include-channel) )
            (prinflush "Ptr " l " ") )
         (if (and (eq :state 'brx) (eq *opcod 'ADR))
            ; C'est le premier e'le'ment d'un BRX
            (setq last-brx (ncons l))
            (when (eq :state 'brx)
               ; Le tableau du BRX est fini.
               (setq :state 'pure)
               (with ( (outchan :include-channel) )
                  (setq last-brx (nreverse last-brx))
                  (print "Ptr (* l_" (nextl last-brx) "[]) () = {")
                  (while last-brx (print "l_" (nextl last-brx) ","))
                  (print "};") ))
            ; Toutes les e'tiquettes sont des fonctions C.
            (new-function-entry-point l l) ))))

(defun :prin-at (o)
   (if (symbolp o)
      (let ( (s (string o)) )
         (selectq (sref s 0)
            (#/.
               ; l'adresse d'un symbole: .foo -> s_foo (Cf MAKFNT & MAKCST)
               (prin "s_")
               (:prinstring s 1 (slen s)) )
            ; Le cas $ n'existe plus maintenant, il est remplace' par #$
            (t (if (getvalue o)
                  (:prin-at (getvalue o))
                  (prin s) ))))
      ; Les chaines de caracte`res et les petits entiers.
      (prin o) ))

(defun :prin-cons (l)
   (selectq (car l)
      (|%|
         ; Adresse d'un mot me'moire.
         (prin "((Ptr) &" (cadr l) ")") )
      (|#|
         ; Les constantes nume'riques sur 16 bits.
         (cond
            ((eq (cadr l) #$8000) (prin "(Ptr) ((UFIX) 0x8000)"))
            ((and (fixp (cadr l)) (lt (cadr l) 0))
               (prin "(Ptr) ((UFIX) ")
               (:prinhex (cadr l))
               (prin ")"))
            (t (prin "(Ptr) ")
               (:prin-at (cadr l))) ))
      (|@|
         (if (eq *opcod 'brx)
            ; Adresse de la table d'indirection.
            (prin "l_" (cadr l))
            ; Adresse d'une e'tiquette.
            (prin "((Ptr) l_" (cadr l) ")") ))
      (&
         ; acce`s direct a` la pile
         (prin "(sp + " (cadr l) ")->Val") )
      (strg
         ; Une chai^ne de caracte`res.
         (setq l (cadr l))
         (cond
            ((and (eq (slen l) 1) (eq (sref l 0) #/"))
               ; La chai^ne contenant le caracte`re guillemet.
               (prin """\""""") )
            ((and (eq (slen l) 1) (eq (sref l 0) #/\))
               ; La chai^ne contenant le caracte`re back-slash.
               (prin """\\""") )
            (t (prin """" l """")) ))
      (t ; Les acce`s a` la me'moire: (cdr a1) -> (a1 + 1)->Val
         (prin "(" (cadr l) " + " )
         (:prin-at (car l))
         (prin ")->Val") )))

(defun :prinstring (s d e)
   (unless (eq d e)
      (princn (sref s d))
      (:prinstring s (add1 d) e)))

(defun :prinhex (n)
    (prin "0x")
    (:prinhexb (logand (logshift n -8) #$FF))
    (:prinhexb (logand n #$FF)) )

(defun :prinhexb (n)
    (when (lt n #$10) (princn #/0))
    (with ((obase 16)) (prin n)) )

; .Section "Les fonctions communes a` toutes les instructions"

(defmacro return? (val)
   `(setq :return-is-product? ,val) )

; Par de'faut tous les constantes nume'riques entie`res sont castre'es en
; (Ptr) pour les (MOV (# 2) A1), par contre ce castrage ne doit pas e^tre
; fait pour les entiers conside're's comme index (comme dans HBXMOV par
; exemple) dans ce cas on enle`ve a` la main le #, ainsi les entiers
; direct (sans le #) sont tout au plus castre's en (int).

(defmacro direct-fix (s)
   `(when (and (consp ,s) (eq (car ,s) '|#|))
      (setq ,s (cadr ,s)) ))

(defun goto-label (label ret)
   ; Un branchement peut correspondre a` un retour au moniteur du
   ; Compteur Ordinal e'crit en C.
   (return? ret)
   (if (memq label :local-labels-module)
      (print "	goto loc_" label ";")
      (print "	return ((Ptr) l_" label ");") ))

(defun new-function-entry-point (go-before name)
   (if (memq name :local-labels-module)
      (print "loc_" name ":	")
      (if (eq go-before name)
         (unless :return-is-product? (goto-label name t))
         (goto-label go-before t) )
      ["}"]
      (declare-function name)
      (function-entry-point name) ))

(defun function-entry-point (name)
   (return? ())
   ["Ptr l_" name "() {"] )

(defun compare-Ad-and-branch (arg1 cond arg2 label)
   ; Compare arg1 avec arg2 nom signe's
   ; Se branche a` label si la condition est ve'rifie'e.
   ["	if ((Ad) (" arg1 ") " cond " (Ad) (" arg2 "))"]
   (goto-label label ()) )

(defun compare-int-and-branch (arg1 cond arg2 label)
   ; Compare arg1 avec arg2 signe's
   ; Se branche a` label si la condition est ve'rifie'e.
   ["	if ((int) (" arg1 ") " cond " (int) (" arg2 "))"]
   (goto-label label ()) )

(defun bt2xx (arg btype etype label)
   ; Test de type avec 2 bornes.
   ["	if ((" arg " >= " btype ") && (" arg " < " etype "))"]
   (goto-label label ()) )

(defun bf2xx (arg btype etype label)
   ; Test de type avec 2 bornes.
   ["	if ((" arg " < " btype ") || (" arg " >= " etype "))"]
   (goto-label label ()) )

(defun nxxx (op incr borne lab)
   ; Incre'mente "op" de "incr" Ptr et teste si le re'sultat ne
   ; de'passe pas "borne".
   ["	" op " += " incr ";"]
   (compare-Ad-and-branch op "<" borne lab))

; .Section "Les pseudos-Instructions de LLM3"
(defun declare-function (name)
   (unless (memq name :function-list)
      (newl :function-list name)
      (with ( (outchan :include-channel) )
         ["extern Ptr l_" name "();"] )))

(defun external-variable (name)
   (unless (or (register? name) (memq name :variable-list))
      (newl :variable-list name)
      (with ( (outchan :include-channel) )
         ["extern Ptr " name ";"] )))

(defun internal-variable (name)
   (unless (or (register? name) (memq name :variable-list))
      (newl :variable-list name)
      (with ( (outchan :include-channel) )
         ["Ptr " name " = 0;"] )))

(defun thn (var l)
   (cond
      ((null l) (error thn " n'est pas un fichier llm3" var))
      ((eq (car l) var) 1)
      (t (add1 (thn var (cdr l)))) ))

(definstruct TITLE (nom)
   ; Il ne faut pas que genlab produise des nombres identiques entre les
   ; divers fichiers LLM3.
   (setq  genlab-counter (mul 1000 (thn nom #:llm3:files)))
   (setq :variable-list ())
   (setq :function-list ())
   (setq :include-channel (openo (catenate nom ".h")))
   (setq :state 'title)
   (setq :local-labels (:init-local-labels))
   (setq :local-labels-module (cassq nom :local-labels))
   (return? ())
   ["#include ""lelispc.h"" "]
   ["#include """ nom ".h"""] )

(definstruct XREFI (module nom)
   (external-variable nom) )

(definstruct XREFP (module nom)
   (declare-function nom) )

(definstruct XDEFI (nom))

(definstruct XDEFP (nom))

(definstruct LABEL ()
   (when (eq :state 'impure)
      ; L'initialisation d'un ADR qui doit suivre.
      (with ( (outchan :include-channel) )
         [" = 0;"] )))

(definstruct FENTRY (nom type)
   (with ( (outchan :include-channel) )
      ["#define f_" nom " " type] )
   (internal-variable (concat "s_" nom))
   (new-function-entry-point nom nom) )

(definstruct ADR (adr)
   (if (eq :state 'impure)
      (with ( (outchan :include-channel) )
         [" = " adr ";"])
      ; Le cas du BRX
      (newl last-brx adr)
      (declare-function adr) ))

(definstruct PURE ()
   (unless (eq :state 'pure)
      (function-entry-point (:genlab)) )
   (setq :state 'pure))

(definstruct IMPURE ()
   (when (eq :state 'pure)
      ["}"])
   (setq :state 'impure))

(definstruct END ()
   (when (eq :state 'pure)
      ["}"])
   (close :include-channel) )

; .Section "Les instructions de base"
; .SSection "Les transfert de pointeurs"
(definstruct MOV (source destination)
   (return? ())
   ["	" destination " = " source ";"])

; .SSection "Les comparaisons de pointeurs"
(definstruct CABEQ (op1 op2 lab)
   ["	if (" op1 " == " op2 ")"]
   (goto-label lab ()) )

(definstruct CABNE (op1 op2 lab)
   ["	if (" op1 " != " op2 ")"]
   (goto-label lab ()) )

; .SSection "Le contro^le"
(definstruct BRA (lab)
   (goto-label lab t) )

(definstruct JMP (lab)
   (:BRA lab) )

(definstruct BRI (op)
   (return? t)
   ["	return (" op ");"] )

(definstruct BRX (tab ind)
   (return? t)
   (setq :state 'brx)
   ["	return ((Ptr) (" tab "[(int) " ind "]));"] )

(definstruct SOBGEZ (n lab)
   ["	{register FIX fixaux;"]
   ["	 fixaux = (FIX) " n " - 1;"]
   ["	 " n " = (Ptr) fixaux;"]
   ["	 if (fixaux >= 0) "]
   (goto-label lab ())
   ["	}"])

(definstruct SOBGTZ (n lab)
   ["	{register FIX fixaux;"]
   ["	 fixaux = (FIX) " n " - 1;"]
   ["	 if (fixaux > 0) {"]
   ["	 " n " = (Ptr) fixaux;"]
   (goto-label lab ())
   ["	 } else " n " = (Ptr) 0;}"])

(definstruct NOP ())

; .Section "La pile"
; .SSection "Gestion du pointeur de pile"
; Les instructions STACK et SSTACK sont des macros qui utilisent l'instruction
; MOV. Ces instructions sont de'finies dans le fichier macllm3.ll
(definstruct CHKSTK (borne lab)
   (compare-Ad-and-branch 'sp "<" borne lab))

; .SSection "Pile de contro^le"
(defun call-internal (lab f)
   ["	(--sp)->Val = ((Ptr) l_" f ");"]
   (new-function-entry-point lab f) )

(definstruct CALL (lab)
   ; Si l'on pouvait savoir si l'instruction suivante avait un label!!
   (let ( (f (:genlab)) )
        (call-internal lab f)))

(definstruct JCALL (lab)
   (let ( (f (:genlab)) )
        (call-internal lab f)))

(definstruct RETURN ()
   (return? t)
   ["	return ((sp++)->Val);"] )

; .SSection "Pile de donne'es"

(definstruct TOPST (op)
   (return? ())
   ["	" op " = sp->Val;"] )

(definstruct TOPSTR (sp op)
   (return? ())
   ["	" op " = " sp "->Val;"] )

(definstruct XTOPST (op)
   (return? ())
   ["	{register Ptr aux;"]
   ["		aux = sp->Val;"]
   ["		sp->Val = " op ";"]
   ["		" op " = aux;"]
   ["	}"])

(definstruct XTOPSTR (sp op)
   (return? ())
   ["	{register Ptr aux;"]
   ["		aux = " sp "->Val;"]
   ["		" sp "->Val = " op ";"]
   ["		" op " = aux;"]
   ["	}"])

(definstruct PUSH (op)
   (return? ())
   ["	(--sp)->Val = " op ";"] )

(definstruct POP (op)
   (return? ())
   ["	" op " = (sp++)->Val;"] )

(definstruct POPR (sp op)
   (return? ())
   ["	" op " = (" sp "++)->Val;"] )

(definstruct ADJSTK (n)
   (direct-fix n)
   (return? ())
   ["	sp += (int) " n ";"])

(definstruct ADJSTKR (sp n)
   (direct-fix n)
   (return? ())
   ["	" sp " += (int) " n ";"])

(definstruct MOVXSP (op spindex)
   (direct-fix spindex)
   (return? ())
   ["	(sp + (int) " spindex ")->Val = " op ";"] )

(definstruct XSPMOV (spindex op)
   (direct-fix spindex)
   (return? ())
   ["	" op " = (sp + (int) " spindex ")->Val;"] )

; .Section "Le garbage-collector (GC)"
; Si la taille en bits des caracte`res n'est pas une puissance de 2 il faut
; faire des division et des restes!!!
(defun mactabgc (obj)
   ; Calcule dans le registre "aux" un index de caracte`re associe' a` "obj".
   ; Calcule dans le registre "mask" le masque associe'e a` "obj".
   ["	{register Ad aux, mask;"]
   ["		aux = (Ad) " obj ";"]
   ; Calcule dans "aux" l'index de bits.
   ["		aux -= (Ad) bnumb;"]
   ["		aux >>= MINSHIFTGC;"]
   ; Calcule dans "mask" l'index de bits au niveau caracte`re.
   ["		mask = 1;"]
   ["		mask <<= (aux & MASKCHAR);"]
   ; Calcule dans "aux" l'index de caracte`re.
   ["		aux >>= PBITCHAR;"] )

(definstruct STMARK (accu)
   (return? ())
   (mactabgc accu)
   ["		btbgc[aux] |= mask;"]
   ["	}"] )

(definstruct BTMARK (accu lab)
   (mactabgc accu)
   ["		aux = btbgc[aux] & mask;"]
   ["		if (aux != 0)"]
   (goto-label lab ())
   ["	}"] )

(definstruct BFMARK (accu lab)
   (mactabgc accu)
   ["		aux = btbgc[aux] & mask;"]
   ["		if (aux == 0)"]
   (goto-label lab ())
   ["	}"] )

(definstruct TCMARK (accu lab)
   (mactabgc accu)
   ["		if (btbgc[aux] & mask) {"]
   ["			btbgc[aux] &= ~mask;"]
   (goto-label lab ())
   ["	}	}"] )

(definstruct BTLISP (op lab)
   (bt2xx op 'BNUMB   'ECONS  lab) )

(definstruct BFLISP (op lab)
   (bf2xx op 'BNUMB   'ECONS  lab) )

(definstruct CONVTOK (first last dest)
   (return? ())
   ["	" dest " = (Ptr) (((Ad) " last " - (Ad) " first ") >> 10);"] )

(definstruct SWPCONS (curfreel curcons freel freelm)
   ["	{ register Ad aux, mask;"]
   ["	  register Ptr rega4, rega1, regecons, regbnumb, regbcons, regnil;"]
   ["	  register int cnt;"]
   ["	  register unsigned char *regbtbgc, *regbtbin;"]
   ["	  cnt = 0;"]
   ["	  rega1 = a1;"]
   ["	  rega4 = a4;"]
   ["	  regbnumb = bnumb;"]
   ["	  regbcons = bcons;"]
   ["	  regecons = econs;"]
   ["	  regnil = nil;"]
   ["	  regbtbgc = btbgc;"]
   ["	  regbtbin = btbin;"]
   ["	  do {"]
   ["		  aux = (Ad) rega4;"]
   ["		  aux -= (Ad) regbnumb;"]
   ["		  aux >>= MINSHIFTGC;"]
   ["		  mask = 1;"]
   ["		  mask <<= (aux & MASKCHAR);"]
   ["		  aux >>= PBITCHAR;"]
   ["		  if (regbtbgc[aux] & mask) {"]
   ["			  regbtbgc[aux] &= ~mask;"]
   ["		  } else {"]
   ["			  (rega4 + 1)->Val = rega1;"]
   ["			  (rega4 + 0)->Val = regnil;"]
   ["			  rega1 = rega4;"]
   ["			  aux = (Ad) rega4;"]
   ["			  aux -= (Ad) regbcons;"]
   ["			  aux >>= MINSHIFTINVSBL + PBITCHAR;"]
   ["			  regbtbin[aux] &= ~mask;"]
   ["			  cnt++;"]
   ["		  }"]
   ["		  rega4 += 2;"]
   ["	  } while (rega4 < regecons);"]
   ["	  a1 = rega1;"]
   ["	  a4 = rega4;"]
   ["	  freelm = (Ptr) (cnt >> 10);"]
   ["	  a2 = (Ptr) (cnt & 0x3FF); /* 10 bits */"]
   ["        }"]
)

(definstruct GCMARK ()
   ; suppose que l'e'tiquette juste au dessus est "mark"!!
   ["{register Ptr rega1;"]
   ["	extern Ptr l_mark2 ();"]
   ["	extern Ptr l_mark3 ();"]
   ["	extern Ptr l_mark4 ();"]
   ["	extern Ptr l_mark5 ();"]

   [" remark:"]
   [" 	rega1 = a1;"]
   ["	if ((rega1 < bnumb) || (rega1 >= econs)) return ((sp++)->Val);"]
   ["	{register Ad aux, mask;"]
   ["		aux = (Ad) rega1;"]
   ["		aux -= (Ad) bnumb;"]
   ["		aux >>= MINSHIFTGC;"]
   ["		mask = 1;"]
   ["		mask <<= (aux & MASKCHAR);"]
   ["		aux >>= PBITCHAR;"]
   ["		if ((btbgc[aux] & mask) != 0) return ((sp++)->Val);"]
   ["		btbgc[aux] |= mask;"]
   ["	}"]
   ["	if (rega1 >= bcons) goto loc_lab108;"]
   ["	if ((rega1 >= bvect) && (rega1 < bstrg)) return ((Ptr) l_mark3);"]
   ["	if ((rega1 >= bstrg) && (rega1 < bsymb)) "]
   ["		{a1 = (rega1 + 1)->Val; goto remark;}"]
   ["	return ((sp++)->Val);"]
   ["loc_lab108:	"]
   ["	if (sp < estack) return ((Ptr) l_errfsgc);"]
   ["	(--sp)->Val = (rega1 + 1)->Val;"]
   ["	a1 = (rega1 + 0)->Val;"]
   ["	(--sp)->Val = ((Ptr) l_mark2);"]
   ["	goto remark;"]
   ["}}"]

   ["Ptr l_mark2() {"]
   ["	a1 = (sp++)->Val;"]
   ["	return ((Ptr) l_mark);"]
   ["}"]

   ["Ptr l_mark3() {"]
   ["	(--sp)->Val = a3;"]
   ["	a3 = (a1->Val + 1)->Val;"]
   ["	(--sp)->Val = a1;"]
   ["	if (sp < estack) return ((Ptr) l_errfsgc);"]
   ["	a3 = (Ptr) ((UFIX) ((FIX) a3 - (FIX) 1));"]
   ["	if ((FIX) a3 >= (FIX) 0) return ((Ptr) l_mark4);"]
   ["	a1 = (sp++)->Val;"]
   ["	a3 = (sp++)->Val;"]
   ["	a1 = (a1 + 1)->Val;"]
   ["	return ((Ptr) l_mark);"]
   ["}"]

   ["Ptr l_mark4() {"]
   ["	a1 = ((sp + 0)->Val->Val + 2 + (int) a3)->Val;"]
   ["	(--sp)->Val = a3;"]
   ["	(--sp)->Val = ((Ptr) l_mark5);"]
   ["	return ((Ptr) l_mark);"]
   ["}"]

   ["Ptr l_mark5() {"]
   ["	a3 = (sp++)->Val;"]
   ["	a3 = (Ptr) ((UFIX) ((FIX) a3 - (FIX) 1));"]
   ["	if ((FIX) a3 >= (FIX) 0) return ((Ptr) l_mark4);"]
   ["	a1 = (sp++)->Val;"]
   ["	a3 = (sp++)->Val;"]
   ["	a1 = (a1 + 1)->Val;"]
   ["	return ((Ptr) l_mark);"]
   ["}"]

   ["Ptr l_mark8() {"]
)

; .Section "Les cellules de liste (CONS)"
; .SSection "Organisation me'moire"
(definstruct NXCONS (op lab)
   (nxxx op 2 'ECONS lab) )

(definstruct SFCONS (op)
   (:MOV op 'FCONS) )

(definstruct GFCONS (op)
   (:MOV 'FCONS op) )

; .SSection "Test de type cellule de liste"
(definstruct BTCONS (op lab)
   (compare-int-and-branch op ">=" 'BCONS lab))

(definstruct BFCONS (op lab)
   (compare-int-and-branch op "<" 'BCONS lab))

; .SSection "Cre'ation (allocation) d'une cellule de liste"
; l'instruction NCONS est une macroinstruction de'finie dans le fichier
; macllm3.
(defun docons (le_car le_cdr destination)
   ["	if (fcons == nil) ll_gccons();"]
   ["	{register Ptr aux = fcons;"]
   (:MOV '(cdr aux) 'fcons)
   (:MOV le_car '(car aux))
   (:MOV le_cdr '(cdr aux))
   (:MOV 'aux destination)
   ["	}"])

(definstruct CONS (op1 op2)
   (docons op1 op2 op2) )

(definstruct XCONS (op1 op2)
    (docons op2 op1 op2) )

; .SSection "Le bit invisible"
; Se refe'rer a` la section sur le GC.
(defun mactabin (obj)
   ; Calcule dans le registre "aux" un index de caracte`re associe' a` "obj".
   ; Calcule dans le registre "mask" le masque associe'e a` "obj".
   ["	{register Ad aux, mask;"]
   ["		aux = (Ad) " obj ";"]
   ; Calcule dans "aux" l'index de bits.
   ["		aux -= (Ad) bcons;"]
   ["		aux >>= MINSHIFTINVSBL;"]
   ; Calcule dans "mask" l'index de bits au niveau caracte`re.
   ["		mask = 1;"]
   ["		mask <<= (aux & MASKCHAR);"]
   ; Calcule dans "aux" l'index de caracte`re.
   ["		aux >>= PBITCHAR;"] )

(definstruct STINVSBL (accu)
   (return? ())
   (mactabin accu)
   ["		btbin[aux] |= mask;}"])

(definstruct CLINVSBL (accu)
   (mactabin accu)
   (return? ())
   ["		btbin[aux] &= ~mask;}"])

(definstruct BTINVSBL (accu lab)
   (mactabin accu)
   ["		aux = btbin[aux] & mask;"]
   ["		if (aux != 0)"]
   (goto-label lab ())
   ["	}"] )


(definstruct BFINVSBL (accu lab)
   (mactabin accu)
   ["		aux = btbin[aux] & mask;"]
   ["		if (aux == 0)"]
   (goto-label lab ())
   ["	}"] )

; .Section "NIL"

(definstruct MOVNIL (destination)
   (return? ())
   ["	" destination " = nil;"])

(definstruct BTNIL (op lab)
   (compare-Ad-and-branch op "==" 'nil lab) )

(definstruct BFNIL (op lab)
   (compare-Ad-and-branch op "!=" 'nil lab) )

; .Section "Les symboles"
; .SSection "Organisation me'moire"
(definstruct NXSYMB (op lab)
  (nxxx op 'FINSYMB 'BCONS lab))

; .SSection "Les tests de type"
(definstruct BTSYMB (op lab)
   (bt2xx op 'BSYMB   'BCONS  lab))

(definstruct BFSYMB (op lab)
   (bf2xx op 'BSYMB   'BCONS  lab))

; .SSection "Les instructions spe'cialise'es"

(definstruct GFTYPE (symb dest)
   (return? ())
   (setq symb `(PFTYPE ,symb))
   ["	{register UFIX aux;"]
   ["	 aux = (UFIX) (" symb ");"]
   ["	 " dest " = (Ptr) aux;}"])

(definstruct SFTYPE (src symb)
   (return? ())
   (direct-fix src)
   (setq symb `(PFTYPE ,symb))
   ["	{register int aux1, aux2;"]
   ["	 aux1 = (int) (" symb ");"]
   ["	 aux1 = aux1 & HIGHTMASK;"]
   ["	 aux2 = (int) (" src ");"]
   ["	 aux1 = aux1 | aux2;"]
   ["	 " symb " = (Ptr) aux1;}"])

(definstruct GPTYPE (symb dest)
   (return? ())
   (setq symb `(PFTYPE ,symb))
   ["	{register int aux;"]
   ["	 aux = (int) (" symb ");"]
   ["	 aux = aux >> HIGHTSHIFT;"]
   ["	 " dest " = (Ptr) aux;}"])

(definstruct SPTYPE (src symb)
   (return? ())
   (direct-fix src)
   (setq symb `(PFTYPE ,symb))
   ["	{register int aux1, aux2;"]
   ["	 aux1 = (int) (" symb ");"]
   ["	 aux2 = (int) (" src ");"]
   ["	 aux2 = aux2 << HIGHTSHIFT;"]
   ["	 aux1 = aux1 | aux2;"]
   ["	 " symb " = (Ptr) aux1;}"])

; .SSection "Cre'ation statique"

(definstruct MAKFNT (nom plen pname)
   (declare-function nom)
   (internal-variable (concat "s_" nom))
   ["	a1 = " plen ";"]
   ["	a2 = (Ptr) " pname ";"]
   ["	a4 = (Ptr) &s_" nom ";"]
   ["	a3 = (Ptr) l_" nom ";"]
   ["	(--sp)->Val = (Ptr) f_" nom ";"]
   ["	ll_inisymb();"])

(definstruct MAKCST (nom plen pname)
   (internal-variable (concat "s_" nom))
   ["	a1 = " plen ";"]
   ["	a2 = (Ptr) " pname ";"]
   ["	a3 = (Ptr) &s_" nom ";"]
   ["	ll_inicst();"])

; .SSection "Les variables"

(definstruct SETBVAR (bvar)
   ; initialise la borne bvar
   (:MOV bvar 'bvar))

(definstruct BTVAR (op lab)
   (bt2xx op 'BVAR    'BCONS  lab))

(definstruct BFVAR (op lab)
   (bf2xx op 'BVAR    'BCONS  lab))

; .Section "Les nombres"

; .SSection "Les entiers sur 16 bits"

; .SSSection "L'organisation me'moire"

(definstruct NXNUMB (op lab)
   (nxxx op 1 'BFLOAT lab))

; .SSSection "Les tests de type"

(definstruct BTFIX (op lab)
   (compare-Ad-and-branch op "<" (if (getvalue '31BITFLOATS) 'BVECT 'BFLOAT) lab))

(definstruct BFFIX (op lab)
   (compare-Ad-and-branch op ">=" (if (getvalue '31BITFLOATS) 'BVECT 'BFLOAT) lab))

(definstruct BTNUMB (op lab)
   (bt2xx op 'BNUMB  (if (getvalue '31BITFLOATS) 'BVECT 'BFLOAT) lab))

(definstruct BFNUMB (op lab)
   (bf2xx op 'BNUMB  (if (getvalue '31BITFLOATS) 'BVECT 'BFLOAT) lab))

; .SSSection "Les instructions de calcul"

(defun arith (exp1 op exp2 dest ovf)
   (return? ())
   (if (null ovf)
       ["	" dest " = (Ptr) ((UFIX) ((FIX) " exp1 " " op " (FIX) " exp2 "));"]
       ["     {register int intaux;"]
       ["     intaux = (int) ((FIX) " exp1 " " op " (FIX) " exp2 ");"]
       ["     " dest " = (Ptr) ((UFIX) intaux);"]
       ["     if ((intaux > HUDGEMAX) || (intaux < HUDGEMIN))"]
       (goto-label ovf ())
       ["     }"] ))

(defun logic (exp1 op exp2 dest)
   (return? ())
   ["	" dest " = (Ptr) ((UFIX) ((UFIX) " exp1 " " op " (UFIX) " exp2 "));"])


(definstruct INCR (op lab)
   (arith op '+ '1 op lab))

(definstruct DECR (op lab)
   (arith op '- '1 op lab))

(definstruct PLUS (op1 op2 lab)
   (direct-fix op1)
   (arith op2 '+ op1 op2 lab))

(definstruct DIFF (op1 op2 lab)
   (direct-fix op1)
   (arith op2 '- op1 op2 lab))

(definstruct NEGATE (op)
   (arith '0 '- op op ()) )

(definstruct TIMES (op1 op2 lab)
   (direct-fix op1)
   (arith op2 '* op1 op2 lab))

(definstruct QUO (op1 op2 lab)
   (direct-fix op1)
   (arith op2 '/ op1 op2 lab))

(definstruct REM (op1 op2 lab)
   (direct-fix op1)
   (arith op2 '% op1 op2 lab))

; .SSSection "Les comparaisons nume'riques entie`res"

(defun cnbxx (op1 cond op2 lab)
   (direct-fix op1)
   (direct-fix op2)
   ["	if ((FIX) " op1 " " cond " (FIX) " op2 ")"]
   (goto-label lab ()))

(definstruct CNBEQ (op1 op2 lab)
   (:CABEQ op1 op2 lab))

(definstruct CNBNE (op1 op2 lab)
   (:CABNE op1 op2 lab))

(definstruct CNBLT (op1 op2 lab)
   (cnbxx op1 "<" op2 lab))

(definstruct CNBLE (op1 op2 lab)
   (cnbxx op1 "<=" op2 lab))

(definstruct CNBGT (op1 op2 lab)
   (cnbxx op1 ">" op2 lab))

(definstruct CNBGE (op1 op2 lab)
   (cnbxx op1 ">=" op2 lab))

; .SSSection "Les instructions logiques"

(definstruct LAND (op1 op2)
   (logic op2 "&" op1 op2))

(definstruct LOR  (op1 op2)
   (logic op2 "|" op1 op2))

(definstruct LXOR (op1 op2)
   (logic op2 "^" op1 op2))

(definstruct LSHIFT (op1 op2)
   (return? ())
   (direct-fix op1)
   (direct-fix op2)
   ["	{register FIX aux;"]
   ["		aux = (FIX) " op1 ";"]
   ["		if (aux >= 0)"]
   ["			aux = (int) " op2 " << aux;"]
   ["		else	aux = (int) " op2 " >> -aux;"]
   ["		" op2 " = (Ptr) ((UFIX)  aux);"]
   ["	}"] )

; .SSection "Les nombres flottants"

; .SSSection "L'organisation me'moire"

; Les nombres flottants sont de'finis par l'union LL_FLOAT dont la
; de'claration se trouve dans le fichier "lelispc.h".
(definstruct NXFLOAT (op lab)
   (nxxx op "(sizeof(union LL_FLOAT) / sizeof(Ptr))" 'BVECT lab))

; .SSSection "Les tests de type nombre flottant"

(definstruct BTFLOAT (op lab)
   (if (getvalue '31BITFLOATS)
       (compare-int-and-branch op "<" "0" lab)
       (bt2xx op 'BFLOAT  'BVECT  lab)))

(definstruct BFFLOAT (op lab)
   (if (getvalue '31BITFLOATS)
       (compare-int-and-branch op ">=" "0" lab)
       (bf2xx op 'BFLOAT  'BVECT  lab)))

; .SSSection "Conversions"

(defun testfloat ()
   ; toujours appele'e dans un (null (getvalue '31BITFLOATS))
   ["	if (ffloat == 0) ll_gcfloat();"]
   ["	{register Float aux = (Float) ffloat;"]
   ["		ffloat = aux->Next;"])

(definstruct FIX (op)
   (return? ())
   (if (getvalue '31BITFLOATS)
       (progn
	 ["	" op " = Lfloat_to_Lfix (" op ");"])
       (progn 
	 ["	{register short aux;"]
	 ["		aux = ((Float) " op ")->Val;"]
	 ["		" op " = (Ptr) ((UFIX) aux);}"])))


(definstruct FLOAT (op)
   (direct-fix op)
   (if (getvalue '31BITFLOATS)
       ["	" op " = Lfix_to_Lfloat (" op ");"]
       (progn
	 (testfloat)
	 ["		aux->Val = (FIX) " op ";"]
	 ["		" op " = (Ptr) aux;"]
	 ["	}"])))

(definstruct CVFTOA (src strg cnt)
   (return? ())
   (if (getvalue '31BITFLOATS)
       ["	" cnt " = (Ptr) cvftoa ( Lfloat_to_Cfloat (" src "), " strg "->Val + 2);"]
       ["	" cnt " = (Ptr) cvftoa (((Float) " src ")->Val, " strg "->Val + 2);"]))


(definstruct CVATOF (strg slen lab flt)
   (direct-fix slen)
   ["		{register char *saux;"]
   ["			saux = (char *) (" strg "->Val + 2);"]
   ["			*(saux + (int) " slen ") = '\0';"]
   (if (getvalue '31BITFLOATS)
       (progn
	 ["			" flt " = Cfloat_to_Lfloat (cvatof (saux));"]
	 ["	}"])
       (progn
	 (testfloat)
	 ["			aux->Val = cvatof(saux);"]
      	 ["			" flt " = (Ptr) aux;"]
	 ["	}	}"])))


; .SSSection "Les instructions de base"

(defun opfloat (o1 f o2)
   (if (getvalue '31BITFLOATS)
       (progn
	 ["	" o2 " = Cfloat_to_Lfloat (Lfloat_to_Cfloat (" o2  ") " f " Lfloat_to_Cfloat (" o1 "));"])
       (progn
	 (testfloat)
	 ["	aux->Val = ((Float) " o2 ")->Val " f " ((Float) " o1 ")->Val;"]
	 ["	" o2 " = (Ptr) aux;"]
	 ["	}"])))

(definstruct FPLUS (op1 op2)
   (opfloat op1 "+" op2))

(definstruct FDIFF (op1 op2)
   (opfloat op1 "-" op2))

(definstruct FQUO (op1 op2)
   (opfloat op1 "/" op2))

(definstruct FTIMES (op1 op2)
   (opfloat op1 "*" op2))

; .SSSection "Les comparaisons"

(defun cfbxx (op1 cond op2 lab)
   (if (getvalue '31BITFLOATS)
       ["	if (Lfloat_to_Cfloat (" op1 ") " cond " Lfloat_to_Cfloat (" op2 "))"]
       ["	if (((Float) " op1 ")->Val " cond " ((Float) " op2 ")->Val)"])
   (goto-label lab ()) )

(definstruct CFBEQ (op1 op2 lab)
 (cfbxx op1 "==" op2 lab))

(definstruct CFBNE (op1 op2 lab)
 (cfbxx op1 "!=" op2 lab))

(definstruct CFBGT (op1 op2 lab)
 (cfbxx op1 ">" op2 lab ))

(definstruct CFBGE (op1 op2 lab)
 (cfbxx op1 ">=" op2 lab))

(definstruct CFBLT (op1 op2 lab)
 (cfbxx op1 "<" op2 lab ))

(definstruct CFBLE (op1 op2 lab)
 (cfbxx op1 "<=" op2 lab))

; .SSSection "Les fonctions circulaires et mathe'matiques"

(defun opfloat1 (src fnt dest)
   (if (getvalue '31BITFLOATS)
       ["	" dest " = Cfloat_to_Lfloat ( " fnt " (Lfloat_to_Cfloat (" src ")));"]
       (progn
	 (testfloat)
	 ["		aux->Val = " fnt "(((Float) " src ")->Val);"]
	 ["		" dest " = (Ptr) aux;"]
	 ["	}"])))

(defun opfloat3 (op1 fnt op2 op3)
   (if (getvalue '31BITFLOATS)
       ["	" op3 " = Cfloat_to_Lfloat (" fnt " (Lfloat_to_Cfloat (" op1 "), (Lfloat_to_Cfloat (" op2 "))));"]
       (progn
	 (testfloat)
	 ["	aux->Val = " fnt "(((Float) " op1 ")->Val, ((Float) " op2 ")->Val);"]
	 ["	" op3 " = (Ptr) aux;"]
	 ["	}"])))

(definstruct SIN (src dest)
   (opfloat1 src 'sin dest))

(definstruct COS (src dest)
   (opfloat1 src 'cos dest))

(definstruct ASIN (src dest)
   (opfloat1 src 'asin dest))

(definstruct ACOS (src dest)
   (opfloat1 src 'acos dest))

(definstruct ATAN (src dest)
   (opfloat1 src 'atan dest))

(definstruct EXP (src dest)
   (opfloat1 src 'exp dest))

(definstruct LOG (src dest)
   (opfloat1 src 'log dest))

(definstruct LOG10 (src dest)
   (opfloat1 src 'log10 dest))

(definstruct SQRT (src dest)
   (opfloat1 src 'sqrt dest))

(definstruct POWER (src1 src2 dest)
   (opfloat3 src1 'pow src2 dest))

; .SSection "Les nombres a` pre'cision variable"

(defun hight-low (hight low)
   (return? ())
   ["		" hight " = (Ptr) (aux >> HIGHTSHIFT);"]
   ["		" low " = (Ptr) (aux & LOWMASK);"]
   ["	}"] )

(definstruct EPLUS (op1 op2 op3 op4 op5)
   ["	{register Ad aux;"]
   ["		aux = (Ad) " op1 " + (Ad) " op2 " + (Ad) " op3 ";"]
   (hight-low op4 op5) )

(definstruct ETIMES (op1 op2 op3 op4 op5 op6)
   ["	{register Ad aux;"]
   ["	aux = (Ad) " op1 " * (Ad) " op2 " + (Ad) " op3 " + (Ad) " op4 ";"]
   (hight-low op5 op6) )

(definstruct EDIVIDE (op1 op2 op3 op4 op5)
   (direct-fix op3)
   (return? ())
   ["	{register Ad aux;"]
   ["		aux = (Ad) " op1 ";"]
   ["		aux = (aux << HIGHTSHIFT) | ((Ad)" op2 ");"]
   ["		" op5 " = (Ptr) (aux % ((Ad) " op3 "));"]
   ["		aux = aux / ((Ad) " op3 ");"]
   ["		" op4 " = (Ptr) ((UFIX) aux);"]
   ["	}"] )

(definstruct ECOMP (op1 op2 lab1 lab2 lab3)
   (setq :return-is-product? t :sreturn t)
   ["	if (((UFIX) " op1 ") < ((UFIX) " op2 "))"]
   (goto-label lab1 ())
   ["	else if (((UFIX) " op1 ") > ((UFIX) " op2 "))"]
   (goto-label lab3 ())
   ["	else"]
   (goto-label lab2 t) )

; .Section "Les caracte`res"

(definstruct UPPERC (op)
   (return? ())
   ["	" op " = (Ptr) ((int) " op " - 32);"] )

(definstruct LOWERC (op)
   (return? ())
   ["	" op " = (Ptr) ((int) " op " + 32);"] )

; .Section "Les vecteurs de Pointeurs Lisp"

; .SSection "Organisation me'moire"

(definstruct NXVECT (op lab)
   (nxxx op 2 'BSTRG lab))

; .SSection "Les tests de type vecteurs de pointeurs"

(definstruct BTVECT (op lab)
   (bt2xx op 'BVECT   'BSTRG  lab))

(definstruct BFVECT (op lab)
   (bf2xx op 'BVECT   'BSTRG  lab))

; .Section "Les chai^nes de Caracte`res"

; .SSection "Organisation me'moire"

(definstruct NXSTRG (op lab)
   (nxxx op 2 'BSYMB lab))

; .SSection "Les tests de type chai^ne de caracte`res"
(definstruct BTSTRG (op lab)
   (bt2xx op 'BSTRG   'BSYMB  lab))

(definstruct BFSTRG (op lab)
   (bf2xx op 'BSTRG   'BSYMB  lab))

; .Section "Zone du tas (HEAP)"

; .SSection "Autres instructions (dixit la doc)"

(definstruct CHBLT (op1 op2 lab)
   (compare-Ad-and-branch op1 "<" op2 lab) )

; .SSection "La re'cupe'ration de l'espace"

(definstruct NXHB (size op)
   ; Pour e^tre sur qu'il n'y ait pas de proble`me d'alignement, on debute
   ; toutes les adresses du tas sur des frontie`res de mots (32 bits en
   ; ge'ne'ral). Attention on rajoute a` la main le caracte`re `\0`.
   (return? ())
   (direct-fix size)
   ["	" op " += 3 + (((int) " size ") / sizeof(Ptr));"] )

(definstruct NXHF (heap))

(definstruct NXHP (size op)
   (return? ())
   (direct-fix size)
   ["	" op " = (" op " + 2 + (int) " size ");"])

(definstruct NXHS (heap))

(definstruct HBLT (ssrc esrc sdest)
   (return? ())
   ["	{register char *src, *dest, *fin;"]
   ["		src = (char *) " ssrc ";"]
   ["		dest = (char *) " sdest ";"]
   ["		fin = (char *) " esrc ";"]
   ["		while (src != fin) *dest++ = *src++;"]
   ["	}"])

; .SSection "Acce`s indexe'"

; .SSSection "De type octet"

(definstruct HBXMOV (strg ind dest)
   (direct-fix ind)
   (return? ())
   ["	" dest " = (Ptr) ((unsigned char) *(((char *) (" 
                         strg "->Val + 2)) + (int) " ind "));"]))

(definstruct HBMOVX (val strg ind)
   (direct-fix ind)
   (direct-fix val)
   (return? ())
   ["	*((char *) (" strg "->Val + 2) + (int) " ind ") = "
                           "(char) " val ";"])

(definstruct HBMOVM (size strgs inds strgd indd)
   (direct-fix size)
   (direct-fix inds)
   (direct-fix indd)
   (return? ())
   ["	{register char *r1, *r2; register int r3;"]
   ["		r1 = (char *) (" strgs "->Val + 2);"]
   ["		r2 = (char *) (" strgd "->Val + 2);"]
   ["		r3 = (int) " size ";"]
   (if (and (eq inds 0) (eq indd 0))
       (progn
	 ["		while (r3--) *r2++ = *r1++;"]
	 ["	}"])
       (progn
	 ["		if ((r1 == r2) && ((FIX) " inds " < (FIX) " indd ")) {"]
	 ["			r1 += r3 + (int) " inds ";"]
	 ["			r2 += r3 + (int) " indd ";"]
	 ["			while (r3--) *--r2 = *--r1;"]
	 ["		} else {"]
	 ["			r1 += (int) " inds ";"]
	 ["			r2 += (int) " indd ";"]
	 ["			while (r3--) *r2++ = *r1++;"]
	 ["	}	}"])))

(definstruct HBTEQ (size strg1 ind1 strg2 ind2 lab)
   (direct-fix size)
   (direct-fix ind1)
   (direct-fix ind2)
   (let ((et (concat 'hbteq (:genlab))))
     ["	{register char *r1, *r2; register int r3;"]
     ["		r1 = (char *) (" strg1 "->Val + 2);"]
     ["		r1 += (int) " ind1 ";"]
     ["		r2 = (char *) (" strg2 "->Val + 2);"]
     ["		r2 += (int) " ind2 ";"]
     ["		r3 = (int) " size ";"]
     ["		if (r3 > 0) while (r3--) if (*r2++ != *r1++) goto " et ";"]
     (goto-label lab ())
     ["	}"]
     [et ":"]))

(definstruct MOVBM (size src strg)
   (direct-fix size)
   (return? ())
   ["	{register char *r1, *r2; register int r3;"]
   ["		r1 = (char *) " src ";"]
   ["		r2 = (char *) (" strg "->Val + 2);"]
   ["		r3 = (int) " size " + 1;"]
   ["		if (r3 > 0) while (r3--) *r2++ = *r1++;"]
   ["	}"])

; .SSSection "De type pointeurs"

(definstruct HPXMOV (vect ind dest)
   (direct-fix ind)
   (return? ())
   ["	" dest " = (" vect "->Val + 2 + (int) " ind ")->Val;"])

(definstruct HPMOVX (val vect ind)
   (direct-fix ind)
   (return? ())
   ["	(" vect "->Val + 2 + (int) " ind ")->Val = " val ";"])

(definstruct HPMOVM (size vects inds vectd indd)
   (direct-fix inds)
   (direct-fix indd)
   (direct-fix size)
   (return? ())
   ["	{register Ptr r1, r2; register int r3;"]
   ["		r1 = (Ptr) (" vects "->Val + 2);"]
   ["		r2 = (Ptr) (" vectd "->Val + 2);"]
   ["		r3 = (int) " size ";"]
   (if (and (eq inds 0) (eq indd 0))
       (progn
	 ["		while (r3--) (r2++)->Val = (r1++)->Val;"]
	 ["	}"])
       (progn
	 ["		if ((r1 == r2) && ((FIX) " inds " < (FIX) " indd ")) {"]
	 ["			r1 += r3 + (int) " inds ";"]
	 ["			r2 += r3 + (int) " indd ";"]
	 ["			while (r3--) (--r2)->Val = (--r1)->Val;"]
	 ["		} else {"]
	 ["			r1 += (int) " inds ";"]
	 ["			r2 += (int) " indd ";"]
	 ["			while (r3--) (r2++)->Val = (r1++)->Val;"]
	 ["	}	}"])))

; .SSection "Acce`s aux champs cache's"

(definstruct HGSIZE (op dest)
   (return? ())
   ["	" dest " = (" op "->Val + 1)->Val;"])

(definstruct HSSIZE (val op)
   (return? ())
   ["	(" op "->Val + 1)->Val = " val ";"])

(definstruct HGOBJ (op dest)
   (return? ())
   ["	" dest " = (" op "->Val)->Val;"])

(definstruct HSOBJ (val op)
   (return? ())
   ["	(" op "->Val)->Val = " val ";"])

; .Section "Les Entre'es/Sorties"

; .SSection "Les instructions sur le canal terminal"

(definstruct TTYIN (op)
   (return? ())
   (let ( (et (concat 'tty (:genlab))) )
      (new-function-entry-point et et)
      (:INTEST)
      ["	" op " = (Ptr) ttyin();"]
      ["	if (" op " == (Ptr) -1)"]
      (goto-label et ()) ))

(definstruct TTYIS (op cc)
   (return? ())
   ["	{register int aux;"]
   ["		aux = ttys(charttys);"]
   ["		" cc " = (Ptr) aux;"]
   ["		aux = *charttys;"]
   ["		" op " = (Ptr) aux;"]
   ["	}"] )

(definstruct TTYINSTR (strg count)
   (return? ())
   ["	" count " = (Ptr) ttyinstr(" strg "->Val + 2,"]
   ["			 	(" strg "->Val + 1)->Val);"])

(definstruct TTYMSG (n strg)
   (return? ())
   ["	ttyout(" n ", " strg ");"])

(definstruct TTYCRLF ()
   (return? ())
   ["	ttyout(2, ""\n\r"");"])

(definstruct TTYSTRG (n strg)
   (return? ())
   ["	ttyout(" n ", " strg "->Val + 2);"])

; .SSection "Les instructions sur les fichiers"

; .SSSection "Les instructions sur les fichiers de texte"

(defun openxxx (cc fnt chan strg)
   (return? ())
   ["	" cc " = (Ptr) " fnt "(" chan ", " strg "->Val + 2);"])

(definstruct INFILE (chan strg cc)
   (openxxx cc 'infile chan strg))

(definstruct OUFILE (chan strg cc)
   (openxxx cc 'oufile chan strg))

(definstruct APFILE (chan strg cc)
   (openxxx cc 'apfile chan strg))

(definstruct INBF (chan strg size cc)
   (return? ())
   ["	" cc " = (Ptr) inbf(" chan ", " strg "->Val + 2, &" size ");"] )

(definstruct OUTF (chan strg size cc)
   (return? ())
   ["	" cc " = (Ptr) outf(" chan ", " size ", " strg "->Val + 2);"])

(definstruct OUTFL (chan strg size cc)
   (return? ())
   ["	" cc " = (Ptr) outfl(" chan ", " size ", " strg "->Val + 2);"])

; .SSSection "Les instructions sur les fichiers binaires"

(definstruct INFILEB (chan strg cc)
   (openxxx cc 'infile chan strg))

(definstruct OUFILEB (chan strg cc)
   (openxxx cc 'oufile chan strg))

(definstruct APFILEB (chan strg cc)
   (openxxx cc 'apfile chan strg))

(definstruct INBFB (chan strg size cc)
   (return? ())
   ["	" cc " = (Ptr) inbfb(" chan ", " strg "->Val + 2,  &" size ");"] )

(definstruct OUTFLB (chan strg size cc)
   (return? ())
   ["	" cc " = (Ptr) outfl(" chan ", " size ", " strg "->Val + 2);"])

; .SSSection "Les instructions ge'ne'rales sur les fichiers"

(defun systemxx0 (fnt strg)
   (return? ())
   ["	" fnt "(" strg "->Val + 2);"])

(defun systemxx1 (cc fnt strg)
   (return? ())
   ["	" cc " = (Ptr) " fnt "(" strg "->Val + 2);"])
   
(defun systemxx2 (cc fnt strg1 strg2)
   (return? ())
   ["	" cc " = (Ptr) " fnt "(" strg1 "->Val + 2, " strg2 "->Val + 2);"])

(definstruct FCLOS (chan cc)
   (return? ())
   ["	" cc " = (Ptr) fclos(" chan ");"])

(definstruct FDELE (strg cc)
   (systemxx1 cc 'fdele strg))

(definstruct FRENA (strg1 strg2 cc)
   (systemxx2 cc 'frena strg1 strg2))

(definstruct FCOPY (strg1 strg2 cc)
   (systemxx2 cc 'fcopy strg1 strg2))

(definstruct FPROBE (strg cc)
   (systemxx1 cc 'fprobe strg))

; .SSection "Les instructions sur les images me'moire"

(definstruct CORSAV (strg cc)
   (mapc 'external-variable
      '(bllm3 bsave ellm3 eimpur llucode ccode lluheap cheap) )
   ["	bllm3 = (Ptr) &bsave;"]
   ["	ellm3 = (Ptr) &eimpur;"]
   ["	llucode = ccode;"]
   ["	lluheap = cheap;"]
   (systemxx1 cc 'll_corsav strg) )

(definstruct COREST (strg cc)
   (mapc 'external-variable
      '(bllm3 bsave) )
   ["	bllm3 = (Ptr) &bsave;"]
   (systemxx1 cc 'll_corest strg) )

; .Section "Les instructions syste`me"

(definstruct CLINE (strg)
   (systemxx0 'cline strg))

(definstruct RUNTIME (op)
   (if (getvalue '31BITFLOATS)
       (progn
	 ["	" op " = Cfloat_to_Lfloat (runtime ());"])
       (progn
	 (testfloat)
	 ["		aux->Val = runtime();"]
	 ["		" op " = (Ptr) aux;"]
	 ["	}"])))

(definstruct SLEEP (op)
   (if (getvalue '31BITFLOATS)
       ["	csleep (Lfloat_to_Cfloat (" op "));"]
       ["	csleep(((Float) " op ")->Val);"] ))

(definstruct DATE (op)
   (systemxx0 'cdate op))

(definstruct GETENVRN (strg1 strg2 cnt)
   (systemxx2 cnt 'getenvrn strg1 strg2))

(definstruct GETGLOBAL (strg op)
   (systemxx1 op 'getgloba strg))

(definstruct CALLG (op1 op2)
   ["	" op2 " = (Ptr) ll_callg(" op1 , op2 ");"] )

; .Section "Les interruptions"

(definstruct INTEST ()
   ["	if ((itcount != 0) && (itstate != 0)) ll_ithard ();"])

(definstruct SETALARM (op)
   (if (getvalue '31BITFLOATS)
       (progn
	 ["	" op " = Cfloat_to_Lfloat (setalarm (Lfloat_to_Cfloat (" op ")));"])
       (progn
	 (testfloat)
	 ["		if (((Float) " op ")->Val != 0.) raz_clkcnt();"]
	 ["		aux->Val = setalarm(((Float) " op ")->Val);"]
	 ["		" op " = (Ptr) aux;"]
	 ["	}"] )))

; .Section "Les instructions d'acce`s a` la me'moire"

(definstruct ADRHL (adr h l)
   (return? ())
   ["	" h " = (Ptr) ((Ad) " adr " >> HIGHTSHIFT);"]
   ["	" l " = (Ptr) ((Ad) " adr " & LOWMASK);"])

(definstruct HLADR (h l adr)
   (return? ())
   ["	" adr " = (Ptr) (((Ad) " h " << HIGHTSHIFT) + (Ad) " l ");"])

(definstruct MEMSET (val ad))

(definstruct MEMGET (ad result))

(definstruct MEMMOVM (src1 cnt dest))

