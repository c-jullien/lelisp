;;.EnTete "Le_Lisp Version 15.2" " " "Les Macros pour C"
;;.EnPied "maC.ll" "%"
;;.sp 2
;;.SuperTitre "Les Macros LLM3 pour C"
;;.Auteur "Bernard Serpette"
;;.INRIA

(unless (>= (version) 15.2)
        (error 'load "fichier non compatible" 'macc ))
(defvar #:sys-package:colon 'expand)

;;.Section "Les valeurs des assemblages conditionnels"
;;.SSection "Les assemblages conditionnels de l'expanseur"
(defvalue STATLLM3     0)     ; pas de statistiques LLM3
(defvalue 31BITFLOATS ())     ; pas de flottants sur 31 bits.
(defvalue TABLGC       0)     ; le GC utilise une table de bits si 31BITFLOATS
(defvalue GCSTPCP     ())     ; le GC n'est pas un stop et copy

;;.SSection "Les assemblages conditionnels du code LLM3"
(defvalue COMPILO  0)
(defvalue DEBUG    0)
(defvalue GCDEBUG  0)
(defvalue SEDEBUG  0)

;;.Section "Les variables globales du macro-expanseur."
(defvar :labels ())
(defvar :C-functions ())
(defvar :state ())

;;.Section "Les fonctions ge'ne'rales au macroexpanseur"
(defun :genlab ())

;;.Section "Les fonctions d'impression spe'cifiques"
(defun :prin-statop (op))
(defun :prin-spec-pro (typ))
(defun :prin-statarg (op)
   (when (and (consp op) (eq (car op) '|@|))
      (is-a-C-function (cadr op)) ))

(defun :prin-label (l)
   (when (and l (neq :state 'impure))
	 (newl :labels l) ))

(defun :prin-at (o))

(defun :prin-cons (l))

;;.Section "Les fonctions communes a` toutes les instructions"
(defun is-a-C-function (lab)
   (unless (memq lab :C-functions)
	   (newl :C-functions lab)))

(defun break-function ()
   (when (neq (car :labels) '*)
	 (newl :labels '*)))

(defun goto-label (lab)
   ; re'fe'rence a` une e'tiquette.
   (when lab
	 ; car certaines e'tiquettes ne sont pas
	 ; re'ellement fournies (cf PLUS ...)
	 (newl :labels (ncons lab)) ))

;;.Section "Les pseudos-Instructions de LLM3"
(definstruct TITLE (nom)
   (setq :labels (ncons nom))
   (setq :C-functions ())
   (setq :state 'title) )

(definstruct XREFI (module nom))
(definstruct XREFP (module nom) (is-a-C-function nom))
(definstruct XDEFI (nom))
(definstruct XDEFP (nom) (is-a-C-function nom))

(definstruct LABEL ())

(definstruct FENTRY (nom type)
   (break-function)
   (is-a-C-function nom))

(definstruct ADR (adr)
   (unless (eq :state 'impure)
      (is-a-C-function adr) ))

(definstruct PURE () (setq :state 'pure))
(definstruct IMPURE () (setq :state 'impure))

(definstruct END ()
   (setq :labels (nreverse :labels))
   (doit (car :labels) (cons () (cdr :labels)) :C-functions) )

;;.Section "Les instructions de base"
;;.SSection "Les transfert de pointeurs"
(definstruct MOV (source destination))

;;.SSection "Les comparaisons de pointeurs"
(definstruct CABEQ (op1 op2 lab) (goto-label lab))
(definstruct CABNE (op1 op2 lab) (goto-label lab))

;;.SSection "Le contro^le"
(definstruct BRA (lab) (goto-label lab))
(definstruct JMP (lab) (goto-label lab))

(definstruct BRI (op) )
(definstruct BRX (tab ind) (break-function))

(definstruct SOBGEZ (n lab) (goto-label lab))
(definstruct SOBGTZ (n lab) (goto-label lab))
(definstruct NOP ())

;;.Section "La pile"
;;.SSection "Gestion du pointeur de pile"
(definstruct STACK (op))
(definstruct SSTACK (op))
(definstruct CHKSTK (borne lab) (goto-label lab))

;;.SSection "Pile de contro^le"
(definstruct CALL (lab)
   (break-function)
   (is-a-C-function lab) )

(definstruct JCALL (lab)
   (break-function)
   (is-a-C-function lab) )

(definstruct RETURN ())

;;.SSection "Pile de donne'es"
(definstruct TOPST (op))
(definstruct XTOPST (op))
(definstruct POP (op))
(definstruct ADJSTK (op))
(definstruct TOPSTR (sp op))
(definstruct XTOPSTR (sp op))
(definstruct PUSH (op))
(definstruct POPR (sp op))
(definstruct ADJSTKR (sp n))
(definstruct MOVXSP (op spindex))
(definstruct XSPMOV (spindex op))

;;.Section "Le garbage-collector (GC)"
(definstruct STMARK (accu))
(definstruct BTMARK (accu lab) (goto-label lab))
(definstruct BFMARK (accu lab) (goto-label lab))
(definstruct TCMARK (accu lab) (goto-label lab))
(definstruct BTLISP (op lab) (goto-label lab))
(definstruct BFLISP (op lab) (goto-label lab))
(definstruct CONVTOK (first last dest))

(definstruct GCSTART ())
(definstruct GCSTOP ())
(definstruct SWPCONS (op1 op2 op3 op4))

;;.Section "Les cellules de liste (CONS)"
;;.SSection "Organisation me'moire"
(definstruct NXCONS (op lab) (goto-label lab))
(definstruct SFCONS (op))
(definstruct GFCONS (op))

;;.SSection "Test de type cellule de liste"
(definstruct BTCONS (op lab) (goto-label lab))
(definstruct BFCONS (op lab) (goto-label lab))

;;.SSection "Cre'ation (allocation) d'une cellule de liste"
(definstruct NCONS (op))
(definstruct CONS (op1 op2)) 
(definstruct XCONS (op1 op2))

;;.SSection "Le bit invisible"
;;Se refe'rer a` la section sur le GC.
(definstruct STINVSBL (accu))
(definstruct CLINVSBL (accu))
(definstruct BTINVSBL (accu lab) (goto-label lab))
(definstruct BFINVSBL (accu lab) (goto-label lab))

;;.Section "NIL"
(definstruct MOVNIL (op))
(definstruct BTNIL (op lab) (goto-label lab))
(definstruct BFNIL (op lab) (goto-label lab))

;;.Section "Les symboles"
;;.SSection "Organisation me'moire"
(definstruct NXSYMB (op lab) (goto-label lab))

;;.SSection "Les test de type"
(definstruct BTSYMB (op lab) (goto-label lab))
(definstruct BFSYMB (op lab) (goto-label lab))

;;.SSection "Les instructions spe'cialise'es"
(definstruct GFTYPE (symb dest))
(definstruct SFTYPE (src symb))
(definstruct GPTYPE (symb dest))
(definstruct SPTYPE (src symb))

;;.SSection "Cre'ation statique"
(definstruct MAKFNT (nom plen pname))
(definstruct MAKCST (nom plen pname))

;;.SSection "Les variables"
(definstruct SETBVAR (bvar))
(definstruct BTVAR (op lab) (goto-label lab))
(definstruct BFVAR (op lab) (goto-label lab))

;;.Section "Les nombres"
;;.SSection "Les entiers sur 16 bits"
;;.SSSection "L'organisation me'moire"
(definstruct NXNUMB (op lab) (goto-label lab))

;;.SSSection "Les tests de type"
(definstruct BTFIX (op lab) (goto-label lab))
(definstruct BFFIX (op lab) (goto-label lab))
(definstruct BTNUMB (op lab) (goto-label lab))
(definstruct BFNUMB (op lab) (goto-label lab))

;;.SSSection "Les instruction de calcul"
(definstruct INCR (op lab) (goto-label lab))
(definstruct DECR (op lab) (goto-label lab))
(definstruct PLUS (op1 op2 lab) (goto-label lab))
(definstruct DIFF (op1 op2 lab) (goto-label lab))
(definstruct NEGATE (op))
(definstruct TIMES (op1 op2 lab) (goto-label lab))
(definstruct QUO (op1 op2 lab) (goto-label lab))
(definstruct REM (op1 op2 lab) (goto-label lab))

;;.SSSection "Les comparaisons nume'riques entie`res"
(definstruct CNBEQ (op1 op2 lab) (goto-label lab))
(definstruct CNBNE (op1 op2 lab) (goto-label lab))
(definstruct CNBLT (op1 op2 lab) (goto-label lab))
(definstruct CNBLE (op1 op2 lab) (goto-label lab))
(definstruct CNBGT (op1 op2 lab) (goto-label lab))
(definstruct CNBGE (op1 op2 lab) (goto-label lab))

;;.SSSection "Les instructions logiques"
(definstruct LAND (op1 op2))
(definstruct LOR  (op1 op2))
(definstruct LXOR (op1 op2))
(definstruct LSHIFT (op1 op2))

;;.SSection "Les nombres flottants"
;;.SSSection "L'organisation me'moire"
(definstruct NXFLOAT (op lab) (goto-label lab))

;;.SSSection "Les test de type nombre flottant"
(definstruct BTFLOAT (op lab) (goto-label lab))
(definstruct BFFLOAT (op lab) (goto-label lab))

;;.SSSection "Conversions"
(definstruct FIX (op))
(definstruct FLOAT (op))
(definstruct CVFTOA (src strg cnt))
(definstruct CVATOF (strg slen lab flt))

;;.SSSection "Les instructions de base"
(definstruct FPLUS (op1 op2)) 
(definstruct FDIFF (op1 op2)) 
(definstruct FQUO (op1 op2) )
(definstruct FTIMES (op1 op2))

;;.SSSection "Les comparaisons"
(definstruct CFBEQ (op1 op2 lab) (goto-label lab))
(definstruct CFBNE (op1 op2 lab) (goto-label lab))
(definstruct CFBGT (op1 op2 lab) (goto-label lab))
(definstruct CFBGE (op1 op2 lab) (goto-label lab))
(definstruct CFBLT (op1 op2 lab) (goto-label lab))
(definstruct CFBLE (op1 op2 lab) (goto-label lab))

;;.SSSection "Les fonctions circulaires et mathe'matiques"
(definstruct SIN (src dest) )
(definstruct COS (src dest) )
(definstruct ASIN (src dest) )
(definstruct ACOS (src dest) )
(definstruct ATAN (src dest) )
(definstruct EXP (src dest) )
(definstruct LOG (src dest) )
(definstruct LOG10 (src dest) )
(definstruct SQRT (src dest) )
(definstruct POWER (src1 src2 dest) )

;;.SSection "Les nombres a` pre'cision variable"
(definstruct EPLUS (op1 op2 op3 op4 op5))
(definstruct ETIMES (op1 op2 op3 op4 op5 op6))
(definstruct EDIVIDE (op1 op2 op3 op4 op5))

(definstruct ECOMP (op1 op2 lab1 lab2 lab3)
   (goto-label lab1)
   (goto-label lab3)
   (goto-label lab2))

;;.Section "Les caracte`res"
(definstruct UPPERC (op))
(definstruct LOWERC (op))

;;.Section "Les vecteurs de Pointeurs Lisp"
;;.SSection "Organisation me'moire"
(definstruct NXVECT (op lab)
   (goto-label lab))

;;.SSection "Les tests de type vecteurs de pointeur"
(definstruct BTVECT (op lab)
   (goto-label lab))

(definstruct BFVECT (op lab)
   (goto-label lab))

;;.Section "Les chai^nes de Caracte`res"
;;.SSection "Organisation me'moire"
(definstruct NXSTRG (op lab)
   (goto-label lab))

;;.SSection "Les tests de type chai^ne de caracte`res"
(definstruct BTSTRG (op lab)
   (goto-label lab))

(definstruct BFSTRG (op lab)
   (goto-label lab))

;;.Section "Zone du tas (HEAP)"
;;.SSection "Autres instructions (dixit la doc)"
(definstruct CHBLT (op1 op2 lab)
   (goto-label lab))

;;.SSection "La re'cupe'ration de l'espace"
(definstruct NXHB (size op))
(definstruct NXHF (heap))
(definstruct NXHP (size op))
(definstruct NXHS (heap))
(definstruct HBLT (ssrc esrc sdest))

;;.SSection "Acce`s indexe'"
;;.SSSection "De type octet"
(definstruct HBXMOV (strg ind dest))
(definstruct HBMOVX (val strg ind))
(definstruct HBMOVM (size strgs inds strgd indd))

(definstruct HBTEQ (size strg1 ind1 strg2 ind2 lab)
   (goto-label lab))

(definstruct MOVBM (size src strg))

;;.SSSection "De type pointeurs"
(definstruct HPXMOV (vect ind dest))
(definstruct HPMOVX (val vect ind))
(definstruct HPMOVM (size vects inds vectd indd))

;;.SSection "Acce`s aux champs cache's"
(definstruct HGSIZE (op dest))
(definstruct HSSIZE (val op))
(definstruct HGOBJ (op dest))
(definstruct HSOBJ (val op))

;;.Section "Les Entre'es/Sorties"
;;.SSection "Les instructions sur le canal terminal"
(definstruct TTYIN (op))
(definstruct TTYIS (op cc))
(definstruct TTYINSTR (strg count))
(definstruct TTYMSG (n strg))
(definstruct TTYCRLF ())
(definstruct TTYSTRG (n strg))

;;.SSection "Les instructions sur les fichiers"
;;.SSSection "Les instructions sur les fichiers de texte"
(definstruct INFILE (chan strg cc))
(definstruct OUFILE (chan strg cc))
(definstruct APFILE (chan strg cc))
(definstruct INBF (chan strg size cc))
(definstruct OUTF (chan strg size cc))
(definstruct OUTFL (chan strg size cc))

;;.SSSection "Les instructions sur les fichiers binaires"
(definstruct INFILEB (chan strg cc))
(definstruct OUFILEB (chan strg cc))
(definstruct APFILEB (chan strg cc))
(definstruct INBFB (chan strg size cc))
(definstruct OUTFLB (chan strg size cc))

;;.SSSection "Les instructions ge'ne'rales sur les fichiers"
(definstruct FCLOS (chan cc))
(definstruct FDELE (strg cc))
(definstruct FRENA (strg1 strg2 cc))
(definstruct FCOPY (strg1 strg2 cc))
(definstruct FPROBE (strg cc))

;;.SSection "Les instructions sur les images me'moire"
(definstruct CORSAV (strg cc))
(definstruct COREST (strg cc))

;;.Section "Les instructions syste`me"
(definstruct CLINE (strg))
(definstruct RUNTIME (op))
(definstruct SLEEP (op))
(definstruct DATE (op))
(definstruct GETENVRN (strg1 strg2 cnt))
(definstruct GETGLOBAL (strg op))
(definstruct CALLG (op1 op2))

;;.Section "Les interruptions"
(definstruct INTEST ())

(definstruct SETALARM (op))

;;.Section "Les instructions d'acce`s a` la me'moire"
(definstruct ADRHL (adr h l))
(definstruct HLADR (h l adr))
(definstruct MEMSET (op1 op2))
(definstruct MEMGET (op1 op2))
(definstruct MEMMOVM (src1 src2 dest))

;;.Section "Sorties spe'cifiques de l'optimisateur"

; <labelist> est une liste de la forme qui contient :
;      <symb>    a` la de'finition de l'e'tiquette <symb>
;      (<symb>)  pour une reference a` cette e'tiquette
;      *         en cas de CALL (mur)
; <cfunctlist> est une liste qui contient le nom des e'tiquettes
;      qui sont su^res d'e^tre des fonctions C :
;          - les XDEFP, XREFP
;          - les FENTRY, les ADR
;          - les adresses JCALLe'es ou CALLe'es


(defvar doit-debug ())

(defun doit (module-name labelist cfunctlist)
   (with ((outchan (opena "localabel")))
	 (when doit-debug
	       (print "********** " module-name)
	       (lmargin 6)
	       (print "  << labelist >> ") (mapc 'print labelist)
	       (lmargin 0) (terpri) (lmargin 6)
	       (print "  << cfunctlist >> ") (mapc 'print cfunctlist) 
	       (lmargin 0) (terpri))
      (print (cons module-name (hack labelist cfunctlist)))
      (close (outchan)) ))


(defmacro zip (before after)
    `(setq ,after (prog1 (cdr ,after)
		         (setq ,before (rplacd ,after ,before)))))


(defun hack (labelist cfunctlist)
    ; prend une <labelist> comple`te et une <cfunclist>
    ; et retourne la "vraie"  liste des e'tiquettes locales.
    (let ((localabel ())
          ; pour travailler rapidement avant et apre`s l'e'tiquette courante,
          ; on ge`re 2 ptr sur les listes : before et after 
	  (lbefore (ncons (car labelist)))
	  (lafter (cdr labelist)))
         (while (consp lafter)
	        (unless (or (consp (car lafter))            ; c'est une ref
			    (eq (car lafter) '*)            ; c'est un mur
			    (memq (car lafter) cfunctlist)) ; jamais local
			; contro^le si l'e'tiquette est utilise'e
			; au dela` des murs : si oui c'est rate',
			(let ((reflabel (ncons (car lafter))))
			     (unless (or (member reflabel (memq '* lbefore))
					 (member reflabel (memq '* lafter)))
				; si a` l'inte'rieur des murs, c'est un
				; candidat a` la recherche locale.
				(newl localabel
				      (rechloc (car lafter) lbefore lafter)))))
		(zip lbefore lafter))
	 (when doit-debug
	       (lmargin 6)
	       (print "== localabel apre`s rechloc")
	       (mapc 'print localabel)
	       (lmargin 0)
	       (terpri))
	 (setq localabel (rechdep localabel))
	 (when doit-debug
	       (lmargin 6)
	       (print "== localabel apre`s recdep")
	       (mapc 'print localabel)
	       (lmargin 0)
	       (terpri))
	 localabel))


(defun rechloc (lab lbefore lafter)
    ; Il n'y a pas de re'fe'rence en dehors des murs locaux :
    ; recherche les de'pendances entre les 2 murs.
    ; Retourne pour chaque candidat a` la localite'
    ; une liste de la forme (candidat ref1 ref2 ...)
    ; Les refI e'tant d'autres candidats a` la localite'
    ;    s'ils sont tous locaux (cf la fonction "rechdep"),
    ;    <candidat> le sera aussi!
    (let ((reflab (ncons lab))
	  (dependances ())
	  (ldep ()))
         (while (and lbefore (neq (car lbefore) '*))
		(cond ((symbolp (car lbefore))
		       (newl ldep (car lbefore)))
		      ((equal reflab (car lbefore))
		       (setq dependances (append dependances ldep))
		       (setq ldep ()))
		      (t ()))
		(nextl lbefore))
	 (setq ldep ())
         (while (and lafter (neq (car lafter) '*))
		(cond ((symbolp (car lafter))
		       (newl ldep (car lafter)))
		      ((equal reflab (car lafter))
		       (setq dependances (append dependances ldep))
		       (setq ldep ()))
		      (t ()))
		(nextl lafter))
	 (cons lab dependances)))


(defun rechdep (localabel)
    ; recherche des de'pendances locales
    ; <localabel> est une liste ((<candidat1> . <ref1N>) .. (<candidatN ..))
    ; pas tre`s fier de c,a ... les n passes peuvent couter
    ; un peu cher!

    (let ((new (mapcan (lambda (dep)
			 (if (every (lambda (ldep) (assq ldep localabel))
				    (cdr dep))
			     (ncons dep)
			     ()))
		       localabel)))
        (if (= (length localabel) (length new))
	    (mapcar 'car new)
	    (rechdep new localabel))))



'(defun rechdep-aux (localabel allocalabel)
    (let ((new (mapcan (lambda (dep)
			 (if (every (lambda (ldep) (cassq ldep allocalabel))
				    (cdr dep))
			     (ncons dep)
			     ()))
		       localabel)))
        (if (= (length localabel) (length new))
	    (mapcar 'car new)
	    (rechdep-aux new allocalabel))))



