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

;;; Ve'rification de la version.

(unless (>= (version) 15.2)
        (error 'load 'erricf 'llm3))

;;; Tous les symboles pre'ce'de's de ':' seront de'finis dans le package LLM3.

(defvar #:sys-package:colon 'llm3)

;;; Gestion et lecture de fichiers LLM3

(setq #:system:read-case-flag ())

;;; .Section "Les variables globales"

;;; le directory des sources LLM3

(defvar #:llm3:dir-source "../llm3/")

(defvar #:llm3:files          ; la liste des fichiers LLM3
	'( bllsht  carcdr  chars  cntrl   eval    extend
           fntstd  fspecs  gc     ll386   llinit  macroch  number
           physio  print   read   specnb  string  symbs    toperr))

(defvar #:llm3:linst ())       ; la liste des instructions LLM3

(defvar #:llm3:lpseudo ())     ; la liste des pseudos instructions LLM3

(defvar #:llm3:loper ())       ; la liste des types d'ope'randes

(defvar #:llm3:mem-access      ; liste des acces a la memoire Lisp
        '(VAL     CAR     CDR     TYP     CVAL    PNAME
          PLIST   FVAL    ALINK   PKGC    OVAL ))


;;; .Section "Fonctions de lecture des fichiers LLM3"

(defun #:llm3:openi-llm3 (file)
   ;; ouverture d'un fichier LLM3
   (let ((f file))
        (cond ((probefile (setq f (catenate file ".llm3")))
               (openi f))
              ((probefile (setq f (catenate #:llm3:dir-source
                                            file
                                            ".llm3")))
               (openi f))
              (t (error '#:llm3:openi-llm3 'ERRIOS file)))))

(defun #:llm3:process-list-of-files (process lfile . process-newfile)
   ;; lecture d'une liste de fichiers LLM3 "lfile"
   ;; chaque ligne de ce fichier sera traite'e
   ;; au moyen de la fonction "process"
   (with ((inchan (#:llm3:openi-llm3 (car lfile))))
         (when (consp process-newfile)
               (funcall (car process-newfile) (car lfile)))
         (catcherror t
                     ;; expanse un seul fichier
                     (#:llm3:process-one-file process))))

(defun #:llm3:process-one-file (process)
   (clean_symbol)
   (with ((typecn #/, cmsymb)
          (typecn #/. cmsymb)
          (typecn #/% cmsymb)
          (typecn #/: cmsymb)
          (typecn #/$ cmsymb)
          (typecn #/& cmsymb)
          (typecn #/@ cmsymb))
         (flet ((|#| ()
                  (list '|#|
                        (selectq (peekcn)
                                 (#// (readcn) (readcn))
                                 (#/^ (readcn)
                                   (logand (readcn) #$1F))
                                 (#/$ (readcn) (with ((ibase 16)) (read)))
                                 (t (read))))))
               (untilexit eof
                          (funcall process
                                   (#:llm3:nextinst (#:llm3:nextline)))))))

(defun #:llm3:nextline ()
   ;; retourne une nouvelle ligne sans interpre'tation des ope'randes
   (let ((l (readline))
         (i))
        (if (or (null l) (eq (car l) #/;))
                             (#:llm3:nextline)
                             (setq i (memq (car l) '(#\SP #\TAB))
                                   l (implode (cons #/(  (nconc l  '(#\CR #\LF #/))))))
                             (cond ((null l) (#:llm3:nextline))
                                   ((not i) l)
                                   (t
                                      (if (equal l #$8000)
                                          (catenate (caadr l) "H")
                                          (cons '|| l)))))))

(defun #:llm3:nextinst (ligne)
   (when (cddr ligne)
         (rplacd (cdr ligne) (#:llm3:larg (cddr ligne) (cadr ligne))))
   (setq ligne  (subst '(|#| 8000H) '(|#| #$8000) ligne))
   (unless dr_exp
           (print "	 ;" ligne) )
   ligne)

(defun #:llm3:larg (larg opcod)
   ;; larg est le reste des descriptions des ope'randes
   ;; retourne la liste des ope'randes en format Lisp
   (cond ((null larg)
          ; fin de la liste d'argument
          ())
         ((and (stringp (car larg))  (equal opcod 'ass))
          (cons (car larg) (#:llm3:largcont (cdr larg))))
         ((stringp (car larg))	; ancienne version
          ; une constante de chai^ne
          (cons (catenate "'"  (car larg) "'") (#:llm3:largcont (cdr larg))))
         ((memq (car larg) '(A1 A2 A3 A4))
          ; un des quatres accumulateurs
          (cons (car larg) (#:llm3:largcont (cdr larg))))
         ((eq (car larg) '|,|)
          ; se'parateur d'arguments
          (#:llm3:err "mauvais argument 0" larg ligne))
         ((memq (car larg) #:llm3:mem-access)
          ; acce`s a` la me'moire indirect par registre
          (if (consp (cadr larg))
              (if (memq (caadr larg) '(A1 A2 A3 A4))
                  (cons (list (car larg) (caadr larg))
                        (#:llm3:largcont (cddr larg)))
                  (#:llm3:err "mauvais argument 1" larg ligne))
              (#:llm3:err "mauvais argument 2" larg ligne)))
         ((eq (car larg) '|#|)
          ; une constante nume'rique
          (if (or (fixp (cadr larg)) (symbolp (cadr larg)))
              (cons (list '|#| (cadr larg))
                    (#:llm3:largcont (cddr larg)))
              (#:llm3:err "mauvais argument 3" larg ligne)))
         ((eq (car larg) '&)
          ; acce`s direct a` la pile
          (cond ((and (fixp (cadr larg)) (>= (cadr larg) 0))
                 (cons (list (car larg) (cadr larg))
                       (#:llm3:largcont (cddr larg))))
                (t (#:llm3:err "mauvais argument 4" larg ligne))))
         ((memq (car larg) '(|@| |%|))
          ; une constante d'adresse code (@) ou donnee (%)
          (cond ((symbolp (cadr larg))
                 ;                         (print "larg = " (cddr larg))
                 (cons (list (car larg) (cadr larg))
                       (#:llm3:largcont (cddr larg))))
                (t (#:llm3:err "mauvais argument 5" larg ligne))))
         ((equal (car (explode (car larg))) 46)
          (cond ((symbolp (cadr larg))
                 (cons (list (car larg) (cadr larg))
                       (#:llm3:largcont (cddr larg))))
                (t (#:llm3:err "mauvais argument 5" larg ligne))))
         ((atom (car larg))
          ; une adresse en memoire, une constante de chaine ou un nb!
          (cons (car larg) (#:llm3:largcont (cdr larg))))
         (t ; une erreur
            (#:llm3:err "mauvais argument 4" larg ligne))))

(defun #:llm3:largcont (larg)
   ;; teste la continuation des arguments
   ;; larg est le reste
   (cond ((null larg) ())
         ((eq (car larg) '|,|)
          (#:llm3:larg (cdr larg) ()))
         (t (#:llm3:err "mauvais argument 6" larg ligne))))

(defun #:llm3:err (msg arg line)
   (error 'EXPAND msg (list arg " dans la ligne " line)))

;;;.Section "De'termination du type d'un ope'rande LLM3"

;;; Ces types sont dans la liste #:llm3:loper

(defun #:llm3:type-operand (arg)
   (cond ((null arg)                      ; pas d'argument
          ())
         ((memq arg '(a1 a2 a3 a4))       ; un des 4 accus
          arg)
         ((eq arg 'nil)                   ; l'ope'rande NIL
          arg)
         ((atom arg)
          (cond ((= (chrnth 0 arg) #/.)    ; .SYMBOL
                 'imat)
                ((symbolp arg)        ; mot me'moire
                 'memadr)
                (t 'const)))          ; d'autres constantes
         ((memq (car arg) #:llm3:mem-access)  ; un acces indirect memoire
          (car arg))
         ((eq (car arg) '|#|)            ; une constante nume'rique
          'numb)
         ((memq (car arg) '(|@| |%|))    ; constante adresse ou donne'e
          'imad)
         ((eq (car arg) '&)              ; acce`s direct a` la pile
          'stack)
         ((eq (car arg) 'strg)           ; une constante de chai^ne
          'const)
         (t ())))                        ; un autre type

;;; .Section "De'finition des instructions LLM3"

;;; Dans cette section sont de'crites toutes les instructions LLM3 et
;;; leurs proprie'te's. Ces valeurs sont utilise'es par tous les
;;; programmes manipulant les instructions LLM3 (expanseurs, programmes
;;; de statistiques ...).

;;; Les proprie'te's suivantes seront sur les P-listes des instructions :
;;;
;;;	#:llm3:narg	le nb d'arguments de l'instruction
;;;			nombre ou liste de nombres
;;;	#:llm3:typarg	le types de ces arguments
;;;			liste de t ou () si l'ope'rande est une adresse
;;;	#:llm3:typspec	liste des types spe'ciaux des ope'randes
;;;			pc = modification du PC
;;;			pcmod = modification du PC conditionnelle
;;;			stack = utilisation d'un mot de pile

;;; .SSection "Fonctions de de'finition des noms LLM3"

(df defoper (nom val)
   ;; de'finition d'un nouvel oper'rande
   (putprop nom val '#:llm3:oper)
   (newl #:llm3:loper nom))

(df defpseudo (nom val)
   ;; de'finition d'une pseudo instructions
   (putprop nom val '#:llm3:narg)
   (newl #:llm3:lpseudo nom))

(df defllm3 (nom val1 . val2)
   ;; de'finition du nombre d'arguments d'une instruction LLM3
   (newl #:llm3:linst nom)
   (putprop nom val1 '#:llm3:narg)
   (when (consp val2)
         (putprop nom (car val2) '#:llm3:typarg))
   (when (consp (cdr val2))
         (putprop nom (cadr val2) '#:llm3:typspec)))

;;; .SSection "Initialisation des instructions"

(defoper	A1	"accumulateur1")
(defoper	A2	"accumulateur2")
(defoper	A3	"accumulateur3")
(defoper	A4	"accumulateur4")

(defoper	VAL	"acces memoire indirect")
(defoper	TYP	"type vecteur ou chaine")
(defoper	CAR	"acces memoire au CAR")
(defoper	CDR	"acces memoire au CDR")
(defoper	CVAL	"acces memoire a la C valeur")
(defoper	PLIST	"acces memoire a la Pliste")
(defoper	FVAL	"acces memoire a la F valeur")
(defoper	FTYPE	"acces memoire au Ftype")
(defoper	ALINK	"acces memoire au Alink")
(defoper	OVAL	"acces memoire a la Obj Val")
(defoper	PKGC	"acces au champ package")
(defoper	PNAME	"acces memoire au P Name")

(defoper	IMAT	"adresse immediate d'un symbole")
(defoper	IMAD	"adresse immediate d'etiquette")
(defoper	MEMADR	"adresse memoire de travail")
(defoper	CONST	"valeur immediate constante")
(defoper	NUMB	"valeur numerique")
(defoper	PCMOD	"modification du PC")

(defvar #:llm3:loper (sortl (reverse #:llm3:loper)))


(defpseudo	ADR		1)
(defpseudo	END		0)
(defpseudo	ENDC		0)
(defpseudo	FENTRY		2)
(defpseudo	IFEQ		1)
(defpseudo	IFNE		1)
(defpseudo	IMPURE		0)
(defpseudo	LABEL		0)
(defpseudo	PURE		0)
(defpseudo	TITLE		1)
(defpseudo	XDEFI		1)
(defpseudo	XDEFP		1)
(defpseudo	XREFI		2)
(defpseudo	XREFP		2)


(defllm3	ACOS		2	t		())
(defllm3	ADDADR		0	t		()) ; macro
(defllm3	ADJSTK		1	t		())
(defllm3	ADJSTKR		2	t		())
(defllm3	ADRHL		3	t		())
(defllm3	APFILE		3	t		())
(defllm3	APFILEB		3	t		())
(defllm3	ASIN		2	t		())
(defllm3	ATAN		2	t		())
(defllm3	BFCONS		2	(t ())		(pccond))
(defllm3	BFFIX		2	(t ())		(pccond))
(defllm3	BFFLOAT		2	(t ())		(pccond))
(defllm3	BFINVSBL	2	(t ())		(pccond))
(defllm3	BFLISP		2	(t ())		(pccond))
(defllm3	BFMARK		2	(t ())		(pccond))
(defllm3	BFNIL		2	(t ())		(pccond))
(defllm3	BFNUMB		2	(t ())		(pccond))
(defllm3	BFSTRG		2	(t ())		(pccond))
(defllm3	BFSYMB		2	(t ())		(pccond))
(defllm3	BFVAR		2	(t ())		(pccond))
(defllm3	BFVECT		2	(t ())		(pccond))
(defllm3	BRA		1	()		(pc))
(defllm3	BRI		1	t		(pc))
(defllm3	BRX		2	t		(pc))
(defllm3	BTCODE		2	(t ())		(pccond))
(defllm3	BTCONS		2	(t ())		(pccond))
(defllm3	BTFIX		2	(t ())		(pccond))
(defllm3	BTFLOAT		2	(t ())		(pccond))
(defllm3	BTINVSBL	2	(t ())		(pccond))
(defllm3	BTLISP		2	(t ())		(pccond))
(defllm3	BTMARK		2	(t ())		(pccond))
(defllm3	BTNIL		2	(t ())		(pccond))
(defllm3	BTNUMB		2	(t ())		(pccond))
(defllm3	BTOLD		2	(t ())		(pccond))
(defllm3	BTSTRG		2	(t ())		(pccond))
(defllm3	BTSYMB		2	(t ())		(pccond))
(defllm3	BTVAR		2	(t ())		(pccond))
(defllm3	BTVECT		2	(t ())		(pccond))
(defllm3	CABEQ		3	(t t ())	(pccond))
(defllm3	CABNE		3	(t t ())	(pccond))
(defllm3	CALL		1	()		(stack pc))
(defllm3	CALLI		1	t		(stack pc))
(defllm3	CALLG		2	t		())
(defllm3	CFBEQ		3	(t t ())	(pccond))
(defllm3	CFBGE		3	(t t ())	(pccond))
(defllm3	CFBGT		3	(t t ())	(pccond))
(defllm3	CFBLE		3	(t t ())	(pccond))
(defllm3	CFBLT		3	(t t ())	(pccond))
(defllm3	CFBNE		3	(t t ())	(pccond))
(defllm3	CHBLT		3	(t t ())	(objind))
(defllm3	CHDIR		1	t		())
(defllm3	CHKSTK		2	(t ())		(pccond))
(defllm3	CLINE		1	t		())
(defllm3	CLINVSBL	1	t		())
(defllm3	CNBEQ		3	(t t ())	(pccond))
(defllm3	CNBGE		3	(t t ())	(pccond))
(defllm3	CNBGT		3	(t t ())	(pccond))
(defllm3	CNBLE		3	(t t ())	(pccond))
(defllm3	CNBLT		3	(t t ())	(pccond))
(defllm3	CNBNE		3	(t t ())	(pccond))
(defllm3	CONS		2	t		())
(defllm3	CONVTOK		4	t		())
(defllm3	COREST		2	t		())
(defllm3	CORSAV		2	t		())
(defllm3	COS		2	t		())
(defllm3	CVATOF		4	(t t () t)	())
(defllm3	CVFTOA		3	t		())
(defllm3	DATE		1	t		())
(defllm3	DECR		(1 2)	(t ())		(pccond))
(defllm3	DIFF		(2 3)	(t t ())	(pccond))
(defllm3	ECOMP		5	t		())
(defllm3	EDIVIDE		5	t		())
(defllm3	EPLUS		5	t		())
(defllm3	ETIMES		6	t		())
(defllm3	EXP		2	t		())
(defllm3	FCLOS		2	t		())
(defllm3	FCOPY		3	t		())
(defllm3	FDELE		2	t		())
(defllm3	FDIFF		2	t		())
(defllm3	FIX		1	t		())
(defllm3	FLOAT		1	t		())
(defllm3	FPLUS		2	t		())
(defllm3	FPROBE		2	t		())
(defllm3	FQUO		2	t		())
(defllm3	FRENA		3	t		())
(defllm3	FTIMES		2	t		())
(defllm3	GCFLIP		0	t		())
(defllm3	GCMARK		0	t		())
(defllm3	GCSTART		0	t		())
(defllm3	GCSTOP		0	t		())
(defllm3	GETENVRN	3	t		())
(defllm3	GETGLOBAL	2	t		())
(defllm3	GETWD		2	t		())
(defllm3	GFTYPE		2	t		())
(defllm3	GFCONS		1	t		())
(defllm3	GPTYPE		2	t		())
(defllm3	HBLT		3	t		(objind))
(defllm3	HBMOVM		5	t		(objind))
(defllm3	HBMOVX		3	t		(objind))
(defllm3	HBTEQ		6	(t t t t t ())	(pccond objind))
(defllm3	HBXMOV		3	t		(objind))
(defllm3	HGOBJ		2	t		(objind))
(defllm3	HGSIZE		2	t		(objind))
(defllm3	HLADR		3	t		())
(defllm3	HOVNI           4       t               ())
(defllm3	HPMOVM		5	t		(objind))
(defllm3	HPMOVX		3	t		(objind))
(defllm3	HPXMOV		3	t		(objind))
(defllm3	HSOBJ		2	t		(objind))
(defllm3	HSSIZE		2	t		(objind))
(defllm3	INBF		4	t		())
(defllm3	INBFB		4	t		())
(defllm3	INCR		(1 2)	t		())
(defllm3	INCRINK		2	t		())
(defllm3	INFILE		3	t		())
(defllm3	INFILEB		3	t		())
(defllm3	INTEST		0	t		())
(defllm3	JCALL		1	()		(stack pc))
(defllm3	JMP		1	()		(pc))
(defllm3	LAND		2	t		())
(defllm3	LOG		2	t		())
(defllm3	LOG10		2	t		())
(defllm3	LOR		2	t		())
(defllm3	LOWERC		1	t		())
(defllm3	LSHIFT		2	t		())
(defllm3	LXOR		2	t		())
(defllm3	MAKCST		3	()		())
(defllm3	MAKFNT		3	()		())
(defllm3	MEMGET		2	t		())
(defllm3	MEMMOVM		3	t		())
(defllm3	MEMSET		2	t		())
(defllm3	MKDIR		2	t		())
(defllm3	MOV		2	t		())
(defllm3	MOVBM		3	t		())
(defllm3	MOVNIL		1	t		())
(defllm3	MOVXSP		2	t		(stack))
(defllm3	NCONS		1	t		())
(defllm3	NEGATE		1	t		())
(defllm3	NOP		0	()		())
(defllm3	NXCONS		2	(t ())		(pcond))
(defllm3	NXFLOAT		2	(t ())		(pcond))
(defllm3	NXHB		2	t               ())
(defllm3	NXHF		1	t               ())
(defllm3	NXHP		2	t               ())
(defllm3	NXHS		1	t               ())
(defllm3	NXNUMB		2	(t ())		(pcond))
(defllm3	NXSTRG		2	(t ())		(pcond))
(defllm3	NXSYMB		2	(t ())		(pcond))
(defllm3	NXVECT		2	(t ())		(pcond))
(defllm3	OUFILE		3	t		())
(defllm3	OUFILEB		3	t		())
(defllm3	OUTF		4	t		())
(defllm3	OUTFL		4	t		())
(defllm3	OUTFLB		4	t		())
(defllm3	PLUS		(2 3)	(t t ())	(pccond))
(defllm3	POP		1	t		(stack))
(defllm3	POPR		2	t		(stack))
(defllm3	POWER		3	t		())
(defllm3	PUSH		1	t		(stack))
(defllm3	QUO		(2 3)	(t t ())	())
(defllm3	REM		(2 3)	(t t ())	())
(defllm3	RETURN		0	t		(stack pc))
(defllm3	RMDIR		2	t		())
(defllm3	RUNTIME		1	t		())
(defllm3	SETALARM	1	t		())
(defllm3	SETBVAR		1	t		())
(defllm3	SFCONS		1	t		())
(defllm3	SFTYPE		2	t		())
(defllm3	SIN		2	t		())
(defllm3	SLEEP		1	t		())
(defllm3	SOBGEZ		2	(t ())		(pccond))
(defllm3	SOBGTZ		2	(t ())		(pccond))
(defllm3	SPTYPE		2	t		())
(defllm3	SQRT		2	t		())
(defllm3	SSTACK		1	t		())
(defllm3	STACK		1	t		())
(defllm3	STINVSBL	1	t		())
(defllm3	STMARK		1	t		())
(defllm3	SUBADR		0	t		()) ; macro
(defllm3	SWPCONS		4	t		()) ; macro
(defllm3	TCMARK		2	(t ())		(pccond))
(defllm3	TIMES		(2 3)	(t t ())	(pccond))
(defllm3	TOPST		1	t		())
(defllm3	TOPSTR		2	t		())
(defllm3	TTYCRLF		0	t		())
(defllm3	TTYIN		1	t		())
(defllm3	TTYIS		2	t		())
(defllm3	TTYINSTR        2	t		())
(defllm3	TTYMSG		2	t		())
(defllm3	TTYSTRG		2	t		())
(defllm3	UPPERC		1	t		())
(defllm3	XCONS		2	t		())
(defllm3	XSPMOV		2	t		(stack))
(defllm3	XTOPST		1	t		(stack))
(defllm3	XTOPSTR		2	t		(stack))

; .Section "Les Macros LLM3 par de'faut"

; Elles sont dans le fichier ../lltoo/macllm3.ll
