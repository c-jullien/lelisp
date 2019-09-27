;;; .EnTete "Le_Lisp version 15.2" " " "Le chargeur me'moire SPARC"
;;; .Centre "$Header: /usr/cvs/lelisp/linuxsparc/loader.ll,v 1.2 2017/10/05 04:04:48 jullien Exp $"

;;; .sp 2
;;; .SuperTitre "Le Chargeur Me'moire SPARC"
;;; .Auteur "Greg Nuyens"
;;; .INRIA

;;; $Revision: 1.2 $

;;; .Centre "*****************************************************************"
;;; .Centre " Ce fichier est develope' et maintenu par : "
;;; .Centre " ILOG SA, 2 Avenue Gallie'ni, 94250 Gentilly "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*****************************************************************"

;;; Assemble et charge pour un SPARC une liste d'instructions LLM3
;;; en 1 seule passe.

(unless (>= (version) 15.2)
        (error 'load 'erricf 'lapsparc))

(defvar #:sys-package:colon 'ldsparc)

(add-feature 'loader)
(defvar :cause ())

;;; .Section "Strate'gie de la re'solution des e'tiquettes"

;;;  1 - les e'tiquettes locales a` une fonction
;;;  2 - les e'tiquettes locales a` un module
;;;  3 - les e'tiquettes globales a` tout le syste`me Le_Lisp

;;; Ce chargeur est capable de produire du code relogeable, ce qui va
;;; permettre de compacter la zone code.

;;; .SSection "Les e'tiquettes locales a` une fonction (LOCAL)"

;;; Une e'tiquette nume'rique est toujours de type LOCAL. Ce trait est
;;; utilise' par le compilateur pour engendrer des e'tiquettes a` peu de frais.
;;; Une e'tiquette symbolique locale doit e^tre de'clare'e avant sa premie`re
;;; utilisation au moyen de la pseudo LOCAL. Cette de'claration permet
;;; d'e'viter des conflits de noms, mais le compilateur n'utilise jamais
;;; ce trait.

;;; Ces e'tiquettes doivent e^tre re'solues a` la fin
;;; de la liste des instructions ou a` l'apparition de la pseudo ENDL.
;;; Si elles ne le sont pas, le chargeur de'clenche une erreur.

;;; .SSection "Les e'tiquettes locales a` un module"

;;; Les e'tiquettes de ce type, toujours symboliques, ne sont pas de'clare'es.
;;; Elles sont de'finies au moyen de la pseudo ENTRY.
;;; Elles peuvent ne pas e^tre re'solues entre deux appels du chargeur mais
;;; doivent l'e^tre a` l'apparition de la pseudo END.
;;; Si elles ne le sont pas, le chargeur de'clenche une erreur.
;;;  Ces e'tiquettes sont dans un des 2 e'tats suivants :
;;;  1 - elles ne sont pas de'finies : leur nom est dans la A-liste
;;; :entries-not-resolved qui contient en valeur la liste des adresses
;;; ou` il faudra charger la ve'ritable adresse quand elle apparaitra.
;;; Ces de'placements sont sur 16 bits actuellement!
;;; ?!?!? Que se passe-il avec des modules limite's a` 32k ?!?!?
;;; ?!?!?     Y a t il beaucoup de gens que cela generait  ?!?!?
;;;  2 - elles viennent d'apparai^tre (ENTRY). Il n'y a plus qu'un seul
;;; indicateur :fval qui contient la ve'ritable adresse.
;;; De plus le symbole est enleve' de :entries-not-resolved et est ajoute'
;;; dans la liste :entry-list.
;;;  3 - le END survient, toutes ces e'tiquettes sont de'truites
;;; de la liste :entry-list, les indicateurs :fval sont de'truits.
;;; S'il reste des noms dans :entries-not-resolved une erreur est
;;; de'clenche'e. Rien ne reste donc de propre au chargeur, ces
;;; e'tiquettes sont des candidats de choix pour le prochain GC.

;;; .SSection "Les e'tiquettes globales"
;;; Les e'tiquettes de ce type, toujours symboliques, ne sont utilise'es
;;; qu'avec les instructions JCALL et JMP.
;;; Elles sont de'finies au moyen de la pseudo FENTRY qui charge, de`s
;;; cette de'finition, la FVAL/FTYPE de cette fonction.
;;; Elles peuvent ne pas e^tre re'solues entre deux appels du chargeur
;;; qui ne s'en appercoit jamais car il engendre toujours un acce`s
;;; correspondant a` (FVAL 'symb), ce qui permet en plus de les rede'finir
;;; et de les recompiler (i.e. si je recharge le module pretty avec pprint
;;; comme externe, tous les autres modules continueront a` fonctionner
;;; avec ce nouveau module).
;;; Les noms des fonctions standard sont des e'tiquettes globales.

;;; .bp
;;; .Section "Les variables globales du chargeur"

; .SSection "Les messages d'erreur"

(defmessage #:loader:ERRMDU
  (french "Module de'ja` charge', rechargement du module")
  (english "Module already in use, loading again"))

;;; .SSection "Les indicateurs conditionnels du chargeur"

(defvar :31bitfloats (eq 0. 0.)) ; les nbs flottants sur 31 bits
                             ; (utile pour rendre les floats non litteraux)

;;; Indicater allowing all link-editting to happen at the end of the module.
(defvar #:ld:special-case-loader ()))

(defvar #:ld:shared-strings ())       ; rend les constantes de chai^ne EQ

;;; .Section "Les variables globales du chargeur"

(defvar :Ecode
        ;; fin de la zone code.
        (subadr (#:system:ecode) 64))

(defvar :mem-access
        ;; noms symboliques des acce`s indexe's
        '(val     car     cdr     cval    pname
          plist   fval    alink   pkgc    oval    typ))

(defvar :locnil (loc ()))               ; adresse du symbole ()

(defvar :adrBVAR `(adr ,(loc 'sys-package))) ; a modifier si modif dans llinit

(defvar :entry-list ())                 ; liste des points d'entre'e locaux

(defvar :entries-not-resolved ())       ; A-liste des ENTRIES non re'solus

(defvar :module
  (when (boundp ':module)               ; Le nom du module en cours de charg.
        :module))

(defvar :saved-by-loader
  (when (boundp ':saved-by-loader)      ; liste des litte'raux entre 2 ENDs.
        :saved-by-loader))

(defvar :global-saved-by-loader         ; liste de vecteurs de litte'raux.
  (if (boundp ':global-saved-by-loader)
      :global-saved-by-loader
    '(
      ;; Ces variables ne sont pas sauve'es par :clean-litt (dynamique).
      #[:lobj :talkp :PCcurrent :llabels :llabels-not-resolved :fntname
	      :codop :arg1 :arg2 :arg3 :localstack :valaux :f :nwl :obj
	      :obj1 :obj2 :obj3])))

;;; .Section "Les constantes propres au SPARC"

(defmacro :defvalue (nom val)
     ;; de'finition d'une constante SPARC
     `(putprop ',nom ,val ':value))

(defun :getvalue (nom)
    ;; recherche d'une constante SPARC
    (cond ((null nom) (:error ':getvalue nom))
          ((fixp nom) nom)
          ((symbolp nom)
                (let ((val (getprop nom ':value)))
                     (if val (:getvalue val)
                         (:error ':getvalue nom))))
          (t (:error ':getvalue nom))))

;;; .SSection "Vidage du cache"

(ifn (typefn 'iflushb) (defun iflushb (x y) ()))

;;; .SSection "Les registres"

(defun :register? (obj)
    ;; teste si l'argument est un registre SPARC
    (memq obj :registers))

(defun :floating-register? (obj)
  ;; test si l'argument est un registre flottant sparc
  (memq obj '(rf1 rf2 rf3)))

(defvar :registers nil)
(defmacro :defregister (reg val)
    ;; defines reg to be register number val
    `(progn
       (setq :registers (cons ',reg :registers))
       (:defvalue ,reg ,val)))

;;; Any changes here must be registered in macsparc.ll and vice versa.
(:defregister     RZERO  0) ; the constant zero register
;(:defregister   SPEXT  3) ; registers that are not modified by C. Gulp!
(:defregister   FCONS  4)
;(:defregister   SPLISP 5)
;(:defregister   STATE  6)

(:defregister   CRES   8) ; %o0  where C routines return their result
(:defregister   X1     8) ; %o0  auxiliaire 1
(:defregister   X2     9) ; %o1 auxiliaire 2
(:defregister   X3     10) ; %o2 auxiliaire 3
(:defregister   X4     11) ; %o3 auxiliaire 4
(:defregister   X5     12) ; %o4 auxiliaire 5
(:defregister   X6     13) ; %o5 auxiliaire 6
(:defregister   CSP    14) ; %sp SP C (= %o6 = '%14)
(:defregister   LINKR  15) ; %o7 link register for the call instruction.

(:defregister   SHORT  16) ; %l0  16 bit constant 0xffff for arithmetic
(:defregister   A1     17) ; %l1
(:defregister   A2     18) ; %l2    les fameux 4
(:defregister   A3     19) ; %l3    accus de LISP
(:defregister   A4     20) ; %l4
(:defregister   RXFLOAT 21) ; %l5  address of floating temp
(:defregister   SIGNBIT 22) ; %l6  #$80000000
(:defregister   SP      23) ; %l7  Lisp stack pointer

(:defregister   INARG1  24) ; %i0 register in which 1er argument is received.
(:defregister   INARG2  25) ; %i1 second argument
(:defregister   INARG3  26) ; %i2 third argument
(:defregister   INARG4  27) ; %i3 fourth argument

(:defregister RBFLOAT 3)     ; %g3 de'but de la zone des flottants
;(:defregister RBFLOAT 24)   ; %i0 pas de zone float
(:defregister   RBVECT  24)  ; %i0 de'but de la zone des vecteurs
(:defregister   RBSTRG  25)  ; %i1 de'but de la zone des chaines
(:defregister   KNIL    26)  ; %i2 adresse de NIL (de'but des symboes)
(:defregister   RBSYMB  26)  ; %i2 adresse du premier symbole (NIL)
(:defregister   NIL     26)  ; %i2 adresse de NIL (de'but des symboles)
(:defregister   RBCONS  27)  ; %i3 de'but de zone liste
(:defregister   CAMLBP  28)  ; %i4 pointeur de bloc pour CAML

(:defregister   RF0    0)		; floating point registers
(:defregister   RF1    1)
(:defregister   RF2    2)
(:defregister   RF3    3)

;;; .SSection "Les constantes d'acce`s"

(:defvalue car 0)
(:defvalue cdr 4)

(:defvalue   cval       0)
(:defvalue   plist      4)
(:defvalue   fval       8)
(:defvalue   pkgc       12)
(:defvalue   oval       16)
(:defvalue   alink      20)
(:defvalue   pname      28)

(:defvalue   val       0)
(:defvalue   typ       4)

;;; All fvals are 8 less than the real address to allow to permit the use of
;;; of the SPARC call instruction.
(defvar :code-bias 8)

;;; .SSection "Les tests"

(defvar :test1 '((mov a1 a4)))
(defvar :test2 '((mov '1 a1)))
(defvar :fiblap '(
		 (fentry fiblap subr1)
		 (cnbgt a1 '2 100)
		 (mov '1 a1)
		 (return)
	      100
	         (diff '1 a1)
		 (push a1)
		 (call fiblap)
		 (mov a1 a2)
		 (pop a1)
		 (push a2)
		 (diff '1 a1)
		 (call fiblap)
		 (pop a2)
		 (plus a2 a1)
		 (return)))

;;; .SSection "Les instructions par ordre alpha"

(defmacro :definst (format-type opcode mnemonic format)
     ;; defines the opcode and format for a mnemonic
     ;; FORMAT-TYPE is the 2 bit field identifying the major division
     ;;          (1, 2 or 3)
     ;; OPCODE is the opcode within the major division.
     ;; MNEMONIC is the symbol used in the rest of this file
     (setq mnemonic (symbol #:sys-package:colon mnemonic))
    `(progn
       (putprop ',mnemonic ',format ':format)
       (putprop ',mnemonic (:assemble-format-type ,format-type) ':format-type)
       (:defvalue ,mnemonic ,opcode)))

(defun :format (mnemonic)
    ;; returns the instruction format for this mnemonic
    (getprop mnemonic ':format))

(defmacro :format-type (mnemonic)
     ;; returns the major opcode division for this mnemonic.
     `(getprop ,mnemonic ':format-type))

(defmacro :assemble-format-type (type)
  ;; take the "op" field (top two bits of every instruction) represented
  ;; as a 2 bit number and shift it to the correct position.
  `(logshift ,type 14))

(defmacro :assemble-opcode (op)
  ;; take the "op3" field (top two bits of every instruction) represented
  ;; as a 6 bit number and shift it to the correct position.
  `(logshift ,op 3))

;;; Instructions by format type.
;;; See Appendix F of Sun-4 Assembly Language Reference Manual
;;; (in the format diagrams the indices are the first bit of the field.
;;;  a dash is a bit, the crosses are just dividers)

;;; Format Type 1 (CALL)
;;;  3  2
;;;  1  9
;;; +--+------------------------------+
;;; |op| disp30                       |
;;; +--+------------------------------+

;;; Format Type 2

;;; Format 2a (SETHI)
;;; 3   2     2   2
;;; 1   9     4   1
;;; +--+-----+---+--------------------+
;;; |op|  rd |op2|imm22               |
;;; +--+-----+---+--------------------+

;;; Format 2b (BRANCH)
;;; 3   2 2    2   2
;;; 1   9 8    4   1
;;; +--+-+----+---+--------------------+
;;; |op|a|cond|op2|disp22              |
;;; +--+-+----+---+--------------------+

;;; Format Type 3 others

;;; Format 3a (i2reg = integer two register)
;;;  (SPARC uses same format for alternate space identifier format.)
;;;
;;; 3   2     2      1     1 1
;;; 1   9     4      8     3 2        4
;;; +--+-----+------+-----+-+--------+-----+
;;; |op|  rd | op3  | rs1 |i| asi    | rs2 |
;;; +--+-----+------+-----+-+--------+-----+

;;; FORMAT 3b (SIMM13 =short immediate 13)
;;;
;;; 3   2     2      1     1 1
;;; 1   9     4      8     3 2        4
;;; +--+-----+------+-----+-+-------------+
;;; |op|  rd | op3  | rs1 |i| simm13      |
;;; +--+-----+------+-----+-+-------------+

;;; Format 3c (FPOP =flointing point operation)
;;;
;;; 3   2     2      1     1
;;; 1   9     4      8     3         4
;;; +--+-----+------+-----+---------+-----+
;;; |op|  rd | op3  | rs1 | opf     | rs2 |
;;; +--+-----+------+-----+---------+-----+

(defmacro :definst-3ab (format-type opcode mnemonic)
     ;; since many instructions have both a 3a and 3b
     ;; versions (immediate and two register), this macro
     ;; provides an interface to these versions.
     (let ((inst1 (symbol #:sys-package:colon (catenate mnemonic "-simm13")))
	   (inst2 (symbol #:sys-package:colon mnemonic)))
       `(progn
	  (putprop ',inst1 'simm13 ':format)
	  (putprop ',inst1 (:assemble-format-type ,format-type) ':format-type)
	  (putprop ',inst2 'i2reg ':format)
	  (putprop ',inst2 (:assemble-format-type ,format-type) ':format-type)
	  (:defvalue ,inst1 (:assemble-opcode ,opcode))
	  (:defvalue ,inst2 (:assemble-opcode ,opcode)))))

;;; Instruction Definitions according to Appendix F

;;; Format 1 instructions
(:definst 1 1 call call)

;;; Format 2 instructions
(:definst 0 (logshift 0 6) UNIMP branch)
(:definst 0 (logshift 1 6) unimplemented unimplemented)
(:definst 0 (logshift 2 6) b branch)	; specified by integer condition code
(:definst 0 (logshift 3 6) unimplemented unimplemented)
(:definst 0 (logshift 4 6) sethi sethi)
(:definst 0 (logshift 5 6) unimplemented unimplemented)
(:definst 0 (logshift 6 6) fb branch)	; specified by floating condition code
(:definst 0 (logshift 7 6) cb branch)	; specified by coprocessor cond code

;;; condition codes for branch instructions.

;;; integer condition codes
(:defvalue :n (logshift 0 9))		; never
(:defvalue :e (logshift 1 9))		; equal
(:defvalue :le (logshift 2 9))		; less than or equal
(:defvalue :l (logshift 3 9))		; less than
(:defvalue :leu (logshift 4 9))		; less than or equal, unsigned
(:defvalue :cs (logshift 5 9))		; carry set
(:defvalue :neg (logshift 6 9))		; negative
(:defvalue :vs (logshift 7 9))		; overflow set
(:defvalue :a (logshift 8 9))		; always
(:defvalue :ne (logshift 9 9))		; not equal
(:defvalue :g (logshift 10 9))		; greater than
(:defvalue :ge (logshift 11 9))		; greater than or equal
(:defvalue :gu (logshift 12 9))		; greater than, unsigned
(:defvalue :cc (logshift 13 9))		; carry clear (less than, unsigned)
(:defvalue :pos (logshift 14 9))	; positive
(:defvalue :vc (logshift 15 9))		; overflow clear

;;; Table F-10 floating point condition codes.
(:defvalue :f-ne (logshift 1 9))	; not equal
(:defvalue :f-l (logshift 4 9))		; less than
(:defvalue :f-g (logshift 6 9))		; greater than
(:defvalue :f-e (logshift 9 9))		; equal
(:defvalue :f-ge (logshift 11 9))	; greater than or equal
(:defvalue :f-le (logshift 13 9))	; less than or equal

;;; Format 3 instructions
(:definst-3ab 2 0 add)
(:definst-3ab 2 1 and)
(:definst-3ab 2 2 or)
(:definst-3ab 2 3 xor)
(:definst-3ab 2 4 sub)
(:definst-3ab 2 5 andn)
(:definst-3ab 2 6 orn)
(:definst-3ab 2 7 xnor)
(:definst-3ab 2 8 addx)
(:definst-3ab 2 9 unimplemented)
(:definst-3ab 2 10 unimplemented)
(:definst-3ab 2 11 unimplemented)
(:definst-3ab 2 12 subx)
(:definst-3ab 2 13 unimplemented)
(:definst-3ab 2 14 unimplemented)
(:definst-3ab 2 15 unimplemented)
(:definst-3ab 2 16 addcc)
(:definst-3ab 2 17 andcc)
(:definst-3ab 2 18 orcc)
(:definst-3ab 2 19 xorcc)
(:definst-3ab 2 20 subcc)
(:definst-3ab 2 21 andncc)
(:definst-3ab 2 22 orncc)
(:definst-3ab 2 23 xnorcc)
(:definst-3ab 2 24 addxcc)
(:definst-3ab 2 25 unimplemented)
(:definst-3ab 2 26 unimplemented)
(:definst-3ab 2 27 unimplemented)
(:definst-3ab 2 28 subxcc)
(:definst-3ab 2 29 unimplemented)
(:definst-3ab 2 30 unimplemented)
(:definst-3ab 2 31 unimplemented)

;;; table F-4

(:definst-3ab 2 32 taddcc)
(:definst-3ab 2 33 tsubcc)
(:definst-3ab 2 34 taddcctv)
(:definst-3ab 2 35 tsubcctv)
(:definst-3ab 2 36 mulscc)
(:definst-3ab 2 37 sll)
(:definst-3ab 2 38 srl)
(:definst-3ab 2 39 sra)
(:definst-3ab 2 40 rdy)
(:definst-3ab 2 41 rdpsr)
(:definst-3ab 2 42 rdwim)
(:definst-3ab 2 43 rdtbr)
(:definst-3ab 2 44 unimplemented)
(:definst-3ab 2 45 unimplemented)
(:definst-3ab 2 46 unimplemented)
(:definst-3ab 2 47 unimplemented)
(:definst-3ab 2 48 wry)
(:definst-3ab 2 49 wrpsr)
(:definst-3ab 2 50 wrwim)
(:definst-3ab 2 51 wrtbr)
(:definst 2 (:assemble-opcode 52) fpop fpop) ; floating point format
(:definst 2 (:assemble-opcode 53) fpop2 fpop)
(:definst-3ab 2 54 cpop1)
(:definst-3ab 2 55 cpop2)
(:definst-3ab 2 56 jmpl)
(:definst-3ab 2 57 rett)
(:definst-3ab 2 58 t)			; specified by integer cond codes
(:definst-3ab 2 59 iflush)
(:definst-3ab 2 60 save)
(:definst-3ab 2 61 restore)
(:definst-3ab 2 62 unimplemented)
(:definst-3ab 2 63 unimplemented)

;;; table F-5

(:definst-3ab 3 0 ld)
(:definst-3ab 3 1 ldub)
(:definst-3ab 3 2 lduh)
(:definst-3ab 3 3 ldd)
(:definst-3ab 3 4 st)
(:definst-3ab 3 5 stb)
(:definst-3ab 3 6 sth)
(:definst-3ab 3 7 std)
(:definst-3ab 3 8 unimplemented)
(:definst-3ab 3 9 ldsb)
(:definst-3ab 3 10 ldsh)
(:definst-3ab 3 11 unimplemented)
(:definst-3ab 3 12 unimplemented)
(:definst-3ab 3 13 ldstub)
(:definst-3ab 3 14 unimplemented)
(:definst-3ab 3 15 swap)
(:definst-3ab 3 16 lda)
(:definst-3ab 3 17 lduba)
(:definst-3ab 3 18 lduha)
(:definst-3ab 3 19 ldda)
(:definst-3ab 3 20 sta)
(:definst-3ab 3 21 stba)
(:definst-3ab 3 22 stha)
(:definst-3ab 3 23 stda)
(:definst-3ab 3 24 unimplemented)
(:definst-3ab 3 25 ldsba)
(:definst-3ab 3 26 sdsha)
(:definst-3ab 3 27 unimplemented)
(:definst-3ab 3 28 unimplemented)
(:definst-3ab 3 29 ldstuba)
(:definst-3ab 3 30 unimplemented)
(:definst-3ab 3 31 swapa)

;;; Table F-6

(:definst-3ab 3 32 ldf)
(:definst-3ab 3 33 ldfsr)
(:definst-3ab 3 34 unimplemented)
(:definst-3ab 3 35 lddf)
(:definst-3ab 3 36 stf)
(:definst-3ab 3 37 stfsr)
(:definst-3ab 3 38 stdfq)
(:definst-3ab 3 39 stdf)
;;; 101000 - 101111 unimplemented
(:definst-3ab 3 48 ldc)
(:definst-3ab 3 49 ldcsr)
(:definst-3ab 3 50 unimplemented)
(:definst-3ab 3 51 lddc)
(:definst-3ab 3 52 stc)
(:definst-3ab 3 53 stcsr)
(:definst-3ab 3 54 stdcq)
(:definst-3ab 3 55 stdc)
;;; 111000 - 111111 unimplemented

;;; .SSection "floating point operations"
;;; subset of table F-7

(:defvalue :fmovs (logshift 1 5))
(:defvalue :fnegs (logshift 5 5))
(:defvalue :fabss (logshift 9 5))
(:defvalue :fsqrts (logshift 41 5))
(:defvalue :fadds (logshift 65 5))
(:defvalue :fsubs (logshift 69 5))
(:defvalue :fmuls (logshift 73 5))
(:defvalue :fdivs (logshift 77 5))
(:defvalue :fdtos (logshift 196 5))
(:defvalue :fstod (logshift 201 5))

;;; F-8
(:defvalue :fcmps (logshift 81 5))

 #+:cause(print "Finished loading instructions")

;;; Definitions of pseudo instructions for compatibility with
;;; Sparc assembler format.

(defmacro :mov (src dest)
     ;; register to register transfer.
     `(:inst ':or 'rzero ,src ,dest))

(defmacro :move-immediate (src dest)
     ;; short-immediate-13 to register transfer.
     `(:inst ':or-simm13 'rzero ,src ,dest))

;;; The addresses of globals in the LLM3 code

(defvar #:ldsparc:floatcompare)
(mapc #'(lambda (symbol) (set (symbol #:sys-package:colon symbol)
			      (getglobal symbol)))
      '(ll_rem ll_quo ll_times floatcompare))

(defun :error (f a)
  ;; erreur dans la fonction "f" sur l'argument "a"
  (with ((outchan ()))
	(print "** loader : " f " : " a))
  (error 'loader f a))

;;; .Section "Interpre'tation d'un objet"

(defun :ins (:obj)
  ;; charge un objet (instruction ou pseudo) en me'moire
  (when :talkp
	(if (consp :obj) (outpos 4))
	(prin :obj)
	(when (>= (outpos) 30) (terpri))
	(outpos 30)
	(:prinhex :PCcurrent)
	(prin "  "))
  (cond
   ((null :obj) ())
   ((atom :obj)
    ;; une e'tiquette locale (symbole ou nb) :
    ;; on la rajoute dans :llabels
    (newl :llabels (cons :obj (copylist :PCcurrent)))
    ;; re'solution des re'fe'rences avants
    (:solve-label :obj))
   (t  (setq :codop (car :obj)
	     :arg1  (cadr :obj)
	     :arg2  (caddr :obj)
	     :arg3  (cadddr :obj)
	     :localstack 0)
       (selectq :codop
		;
		;; les pseudos-instructions de de'claration
		;
		(ABORT ; Pour re'cupe'rer de la me'moire en cas scraschhhh.
                 )
		(ENTRY   ; (ENTRY <name> <ftype> <lparam>)
		 ;; charge les indicateurs
		 (newl :entry-list
		       (list :arg1
			     (if (memq :arg2
				       '(SUBR0 SUBR1 SUBR2 SUBR3
					       NSUBR FSUBR MSUBR DMSUBR))
				 :arg2
			       (:error "ENTRY" :obj))
			     :arg3))
		 ;; re'solution des re'fe'rences avants.
		 (:solventry :arg1)
		 ;; since the entry is a local object, notice that is
		 ;; the real (unbiased) address.  Only @ and bri do the
		 ;; biasing locally.
		 (putprop :arg1 (copylist :PCcurrent) ':fval)
		 (setq :fntname :arg1))
		(ENDL ; fin d'une fonction locale
		 (when :talkp (terpri))
		 (when :llabels-not-resolved
		       (:error "references locales non resolues"
			       :llabels-not-resolved)))
		(END  ; fin d'un module
		 ;; ve'rification de l'entry-list
		 (:ins '(ENDL))
		 (when :entries-not-resolved
		       (:error "Il reste des ENTRY non resolus "
			       :entries-not-resolved))
		 (while :entry-list
		   (remprop (caar :entry-list) ':fval)
		   (remprop (caar :entry-list) '#:llcp:ftype)
		   (remprop (caar :entry-list) '#:llcp:fval)
		   (remprop (caar :entry-list)
			    '#:system:loaded-from-file)
		   (nextl :entry-list))
		 (when #:ld:special-case-loader
		       (while
			   (and (consp #:ld:special-case-loader)
				(consp
				 (car #:ld:special-case-loader)))
			 (apply 'setfn
				(nextl #:ld:special-case-loader))))
		 (:clean-llitt))
		(EVAL     ; (EVAL s)  e'valuation a` LOAD-TIME
		 (catcherror t (eval :arg1)))
		(FENTRY   ; (FENTRY <name> <ftype> <lparam>)
		 ;; enle`ve les indicateurs (a` ve'rifier ?!?!?)
		 (remprop :arg1 '#:system:loaded-from-file)
		 (setq :valaux :PCcurrent)
		 (cond
		  (#:ld:special-case-loader
		   ; we are bootstrapping the loader, so don't change the
		   ; function cell yet.
		   (newl #:ld:special-case-loader
			 (list :arg1 :arg2 (:biased-code :valaux))))
		  (t
		   (remprop :arg1 '#:llcp:ftype)
		   (remprop :arg1 '#:llcp:fval)
		   (setfn :arg1 :arg2 (:biased-code :valaux))))
		 (newl :llabels (cons :arg1 (copylist :PCcurrent)))
		 (setq :fntname :arg1))
		(LOCAL  ; (LOCAL <name>)
		 ;; rend le symbole local a` une fonction.
		 (newl :llabels (ncons :arg1)))
		(TITLE  ; (TITLE de'finition du nom du module)
		 (setq :module :arg1))
		;; appel de la partie de'pendante des  machines!
		;; :machins  contient le ge'ne'rateur d'instructions.
		(t (:machins :obj))))))

 #+:cause(print "loading machins")

(defun :machins (:obj)
  ;; re'alise le chargement de l'instruction :obj
  (let ((:obj1 (cadr :obj)) (:obj2 (caddr :obj)) (:obj3 (cadddr :obj)))
    (selectq (car :obj)
             (MOV      ; (MOV source dest)
	      (if (:register? :obj2)
		  (:movsrc :obj1 :obj2)
		(:movdest (:prepsrc :obj1 'X1) :obj2)))
             (PUSH
	      ;; (PUSH <op>)  ==  subi SP 4
	      ;; store32 (prepsrc :obj1 'X1) SP 0
	      (setq :obj1 (:prepsrc :obj1 'X1))
	      (:inst ':sub-simm13 'SP 4 'SP)
	      (:store32disp :obj1 0 'sp))
             (JCALL    ; (JCALL <sym>) ==  jsb (FVAL :arg1)
	      (:inst ':sub-simm13 'SP 4 'SP)
	      (:inst ':jmpl-simm13
		     (:movsrc `(fvalq ,:obj1) 'linkr) :code-bias 'linkr)
	      (:store32disp 'linkr 0 'sp))
             (JMP     ; (JUMP <sym>) == (JMP) (FVALQ <sym>)
	      (:movsrc `(fvalq ,:obj1) 'linkr)
	      (:inst ':jmpl-simm13 'linkr :code-bias 'rzero)
	      (:nop))
             (CAR
	      ;; (CAR A1/A2/A3)  ==  load rx,rx,0
	      (:load32disp :obj1 (:getvalue 'car) :obj1))
             (CDR
	      ;; (CDR A1/A2/A3)  ==  load rx,rx,CDr
	      (:load32disp :obj1 (:getvalue 'cdr) :obj1))
             (CABNE    ; (CABNE op1 op2 lab)
	      ;; br<>s op1 op2 lab
	      (:compare-and-branch ':b ':ne :obj1 :obj2 :obj3)
	      (:nop))
             (RETURN
	      ;; (RETURN)  ==  load 'X4 SP 0; addi SP 4; ret X4 X4
	      (:load32disp 'sp 0 'x4)
	      (:inst ':jmpl-simm13 'x4 8 'RZERO) ; throw away the retadr
	      (:inst ':add-simm13 'SP 4  'SP))
             (BRA
	      ;; (BRA <lab>)  ==  br lab
	      ;; Branch Always with no delay instruction.
	      ;; (No delay is needed because ba,a never executes the delay.)
	      (:branch ':b ':a :obj1 :annul))
             (BTNIL    ; (BTNIL op lab)
	      (:compare-single-bound 'KNIL ':e))
             (CABEQ    ; (CABEQ op1 op2 lab)
	      ;; br=s op1 op2 lab
	      (:compare-and-branch ':b ':e :obj1 :obj2 :obj3)
	      (:nop))
             (POP
	      ;; (POP <op>)  == load :obj1 SP 0; addi SP 4
	      (cond ((:register? :obj1)
		     (:load32disp 'SP 0 :obj1)
		     (:inst ':add-simm13 'SP 4  'SP))
		    (t
		     (:load32disp 'SP 0 'X1)
		     (:inst ':add-simm13 'SP 4  'SP)
		     (:movdest 'X1 :obj1))))
             (BFNIL    ; (BFNIL op lab)
	      (:compare-single-bound 'KNIL ':ne))
             (BTCONS   ; (BTCONS op lab)
	      (:compare-single-bound 'RBCONS ':ge))
             (BFCONS   ; (BFCONS op lab)
	      (:compare-single-bound 'RBCONS ':l))
             ;
             ;; les tests de type
             ;
             (BTFIX   ; (BTNUMB op lab)
	      (if :31bitfloats
		  (:branch-if-inside-range ''0 'RBVECT)
		  (:compare-single-bound 'RBFLOAT ':l)))
             (BFFIX   ; (BFNUMB op lab)
	      (if :31bitfloats
		  (:branch-if-outside-range ''0 'RBVECT)
		  (:compare-single-bound 'RBFLOAT ':ge)))
             (BTFLOAT  ; (BTFLOAT op1 lab)
	      (if :31bitfloats
		  (:compare-single-bound ''0 ':l)
		(:branch-if-inside-range 'RBFLOAT 'RBVECT)))
             (BFFLOAT  ; (BFFLOAT op1 lab)
	      (if :31bitfloats
		  (:compare-single-bound ''0 ':ge)
		(:branch-if-outside-range 'RBFLOAT 'RBVECT)))
             (BTSTRG   ; (BTSTRG op1 lab)
	      (:branch-if-inside-range 'RBSTRG 'RBSYMB))
             (BFSTRG   ; (BFSTRG op1 lab)
	      (:branch-if-outside-range 'RBSTRG 'RBSYMB))
             (BTVECT   ; (BTVECT op1 lab)
	      (:branch-if-inside-range 'RBVECT 'RBSTRG))
             (BFVECT   ; (BFVECT op1 lab)
	      (:branch-if-outside-range 'RBVECT 'RBSTRG))
             (BTSYMB   ; (BTSYMB op1 lab)
	      (:branch-if-inside-range 'RBSYMB 'RBCONS))
             (BFSYMB   ; (BFSYMB op1 lab)
	      (:branch-if-outside-range 'RBSYMB 'RBCONS))
             (BTVAR    ; (BTVAR op1 lab)
	      (:branch-if-inside-range :adrBVAR 'RBCONS))
             (BFVAR    ; (BFVAR op1 lab)
	      (:branch-if-outside-range :adrBVAR 'RBCONS))
             ;
             ;;  Les comparaisons entieres
             ;
             (CNBEQ    ; (CNBEQ op1 op2 lab)
	      (:cnbxxieqn ':e))
             (CNBNE    ; (CNBNE op1 op2 lab)
	      (:cnbxxieqn ':ne))
             (CNBLT    ; (CNBLT op1 op2 lab)
	      (:cnbxx ':l))
             (CNBLE    ; (CNBLE op1 op2 lab)
	      (:cnbxx ':le))
             (CNBGT    ; (CNBGT op1 op2 lab)
	      (:cnbxx ':g))
             (CNBGE    ; (CNBGE op1 op2 lab)
	      (:cnbxx ':ge))
             ;
             ;;  Les comparaisons arithme'tiques flottantes.
             ;
             (CFBEQ    ; (CFBEQ op1 op2 lab)
	      (if :31bitfloats
		  (:comp2float ':f-e)
		  (:generatecall2subr 'cllfeqn :obj3)))
             (CFBNE    ; (CFBNE op1 op2 lab)
	      (if :31bitfloats
		  (:comp2float ':f-ne)
		  (:generatecall2subr 'cllfneqn :obj3)))
             (CFBLT    ; (CFBLT op1 op2 lab)
	      (if :31bitfloats
		  (:comp2float ':f-l)
		  (:generatecall2subr 'cllflt :obj3)))
             (CFBLE    ; (CFBLE op1 op2 lab)
	      (if :31bitfloats
		  (:comp2float ':f-le)
		  (:generatecall2subr 'cllfle :obj3)))
             (CFBGT    ; (CFBGT op1 op2 lab)
	      (if :31bitfloats
		  (:comp2float ':f-g)
		  (:generatecall2subr 'cllfgt :obj3)))
             (CFBGE    ; (CFBGE op1 op2 lab)
	      (if :31bitfloats
		  (:comp2float ':f-ge)
		  (:generatecall2subr 'cllfge :obj3)))
             ;;
             ;; Les instructions arithme'tiques
             ;
             (DECR     ; (DECR op)
	      (:macaro1op ':sub-simm13 1))
             (DIFF      ; (DIFF op1 op2)
	      (:macaro2op ':sub))
             (INCR     ; (INCR op)
	      (:macaro1op ':add-simm13 1))
             (LAND   ; (LAND op1 op2)
                     (:logop-2op ':and ':and-simm13))
             (LOR    ; (LOR op1 op2)
                     (:logop-2op ':or ':or-simm13))
             (LXOR   ; (LXOR op1 op2)
                     (:logop-2op ':xor ':xor-simm13))
             (LSHIFT ; (LSHIFT #positions op)
		     (:lshift :obj1 :obj2))
             (NEGATE    ; (NEGATE op)
	      (:sign-extend (:prepsrc :obj1 'x1) 'x1)
	      (:inst ':sub 'rzero 'x1 'x1)
	      (:movdestnb 'x1 :obj1))
             (PLUS      ; (PLUS op1 op2)
                 (:macaro2op ':add))
             (REM
                 (:c-arith-2op ':ll_rem))
             (QUO
	      (if (and (:positive-immediate? :obj1)
		       (:power-of-two? (cadr :obj1)))
		  (:arithmetic-shift `',(sub 0 (:log-base-2 (cadr :obj1))) :obj2)
		(:c-arith-2op ':ll_quo)))
             (TIMES
	      (if (and (:positive-immediate? :obj1)
		       (:power-of-two? (cadr :obj1)))
		  (:lshift `',(:log-base-2 (cadr :obj1)) :obj2)
		(:c-arith-2op ':ll_times)))
             ;
             ;;  Les instructions arithme'tiques flottantes
             ;
             (FPLUS  (:instr2float ':fadds))
             (FDIFF  (:instr2float ':fsubs))
             (FTIMES (:instr2float ':fmuls))
             (FQUO   (:instr2float ':fdivs))
             ;
             ;;  Les autres instructions (par ordre alpha)
             ;
             (ADJSTK   ; (ADJSTK 'nb)
	      (if (:13-bit-immediate? :obj1)
		  (:laddr32disp 'sp (mul 4 (cadr :obj1)) 'sp)
		(:movsrc :obj1 'X1)
		(:sign-extend 'x1 'x1)
		(:words-to-bytes 'X1)
		(:inst ':add 'SP 'X1 'SP)))
             (BRI
	      (:inst ':jmpl-simm13 (:prepsrc :obj1 'X1) :code-bias 'RZERO)
	      (:nop))
             (BRX ; (BRX (l1 ... ln) index)
	      (:movsrc :obj2 'x1)
	      (:words-to-bytes 'x1)
	      (:laddr32loc
	       (:aa  (logshift (:size (:sethi :ld :add :ld :jmpl :nop)) 2)
		     :PCcurrent)
	       'X2)
	      (:inst ':add 'x1 'x2 'x1)   ; add the offset (now in bytes)
	      (:inst ':ld 'x1 0 'x1)
	      (:inst ':jmpl 'X1 'rzero 'rzero)
	      (:nop)
	      (while :obj1
		(:val32abs
		 (:absolute-reference
		  (cadr (nextl :obj1)) ':solve-contig-abs))))
             (CALL
	      ;; (CALL <sym>)
	      (:ll-call :obj1))
             (HBMOVX   ; (HBMOVX val string index)
	      (cond
	       ((and (:immediate? :obj3)
		     (:13-bit-positive-value? (add 8 (cadr :obj3))))
		;; index constant
		(:load32disp (:prepsrc :obj2 'X2) 0 'X2) ; ptr into heap
		;; nb, :stb has dest reg as last arg!
		(:inst ':stb-simm13
		       'x2 (add 8 (cadr :obj3)) (:prepsrc :obj1 'X1)))
	       (t ; index calcule'
		(:movaheabix :obj2 :obj3 'X2)
		(:inst ':stb 'X2 'rzero (:prepsrc :obj1 'X1)))))
             (HBXMOV  ; (HBXMOV string index dest) string[index] -> dest
	      (:movaheabix :obj1 :obj2 'X2)
	      (if (:register? :obj3)
		  (:inst ':ldub 'X2 0 :obj3)
		(:inst ':ldub 'X2 0 'X1)
		(:movdest 'X1 :obj3)))
             (HGSIZE   ; (HGSIZE vector/string arg2)
	      (:load32disp (:prepsrc :obj1 'X1) 0 'X1)
	      (if (:register? :obj2)
		  (:load32disp 'X1 '4 :obj2)
		(:load32disp 'X1 '4 'X2)
		(:movdest 'X2 :obj2)))
             (HPMOVX   ; (HPMOVX val vector index)
	      (:movaheap :obj2 :obj3 'X2)
	      (:store32disp (:prepsrc :obj1 'X1) 0 'X2))
             (HPXMOV   ; (HPXMOV vector index val)
	      (:movaheap :obj1 :obj2 'X2)
	      (if (:register? :obj3)
		  (:load32disp 'X2 0 :obj3)
		(progn (:load32disp 'X2 0 'X1)
		       (:movdest 'X1 :obj3))))
             (MOVXSP   ; (MOVXSP val depl)
                 ;; on ajoute le de'placement au haut de pile
		 ; \\ should optimize immediate?
                 (:movsrc :obj2 'X2)
		 (:words-to-bytes 'X2)
                 (:inst ':add 'X2 'SP 'X2)
                 (:store32disp (:prepsrc :obj1 'X1) 0 'X2))
             (NOP
                 (:nop))
             (SOBGEZ   ; (SOBGEZ op lab)
	      (let ((r1 (:prepsrc :obj1 'X1)))
		(:sign-extend r1 r1)
		(:inst ':subcc-simm13 r1 1 r1)
		(if (eq r1 :obj1)
		    (:convnb r1)
		  (:movdestnb r1 :obj1))
		(:branch ':b ':ge :obj2 :annul)
		(:nop)))
             (SSTACK   ; (SSTACK <op>) movl op,sp
                 (:movsrc :obj1 'SP))
             (STACK
                 (:movdest 'SP :obj1))
             (XSPMOV   ; (XSPMOV depl val)
                 (:movsrc :obj1 'X1)
		 (:words-to-bytes 'X1)
                 (:inst ':add 'X1 'SP 'X1)
                 (if (:register? :obj2)
                     (:load32disp 'X1 0 :obj2)
                     (:load32disp 'X1 0 'x2)
                     (:movdest 'X2 :obj2)))
             (t ; c'est donc une erreur
                (:error ':machins :obj1)))))

;;; .Section "Auxiliaires de chargement d'instructions"

(defun :ll-call (label)
  ;; Calls (not jcalls!) are done with this.
  ;; It can transfer anywhere in the 32 bit address space.
  ;; adr is any label (30 bit pc rel addressing)
  (:inst ':sub-simm13 'SP 4 'SP)
  (:inst ':call (:rshiftadr (:relative-reference label ':solve-call-rel)))
  (:store32disp 'linkr 0 'sp))

(defun :ll-call-loc (loc)
  ;; like ll-call, except takes a known location as an argument
  ;; instead of a label.
  (:inst ':sub-simm13 'SP 4 'SP)
  (:inst ':call (:rshiftadr (:sa loc :PCcurrent)))
  (:store32disp 'linkr 0 'sp))

;;; .Section "Auxiliaires de chargement"

(defun :immediate? (val)
  (and (consp val)
       (eq (car val) 'quote)))

(defun :positive-immediate? (val)
  (and (consp val)
       (eq (car val) 'quote)
       (lt 0 (cadr val))))

(defun :13-bit-immediate? (val)
  ;; tests if an llm3 operand is an immediate.
    (and (consp val)
         (eq (car val) 'quote)
         (neqn (cadr val) #$8000)
	 (:13-bit-value? (cadr val))))

(defun :13-bit-positive-immediate? (val)
  ;; tests if an llm3 operand is an immediate.
    (and (consp val)
         (eq (car val) 'quote)
         (neqn (cadr val) #$8000)
	 (:13-bit-positive-value? (cadr val))))

(defun :13-bit-negative-immediate? (val)
  ;; tests if an llm3 operand is an immediate whose additive inverse
  ;; can be contained in 13 bits.
  (and (consp val)
       (eq (car val) 'quote)
       (neqn (cadr val) #$8000)
       (:13-bit-positive-value? (sub 0 (cadr val)))))

(defun :13-bit-value? (val)
    ;; tests if val is a value which can be stored in the 13 bit
    ;; signed constants of the sparc.
    (and (fixp val)
	 (ge val -4096)
	 (lt val 4095)))

(defun :13-bit-positive-value? (val)
    ;; tests if val is a value which can be stored in the 13 bit
    ;; signed constants of the sparc
    (and (fixp val)
	 (ge val 0)
	 (lt val 4095)))

(defun :nop ()
  ;; assembles a nop instruction .
  ;; On the sparc this is [:sethi 0,%g0]
  (:inst ':sethi 0 'rzero)
  (:1word 0))

(de :PC-align (pc)
    ;; simply adds to the PC to align on a 32 bit boundary.
    (if (neqn 0 (logand 3 (or (fixp pc) (cdr pc))))
        (addadr pc 2)
        pc))

(defun :movaheabix (operand index reg)
  ;; Load the byte heap address OPERAND+INDEX into REG.
  (:load32disp (:prepsrc operand reg) 0 reg)
  (if (and (:immediate? index)
	   (:13-bit-positive-value? (add 8 (cadr index))))
      (:laddr32disp reg (add 8 (cadr index)) reg)
    (:inst ':add-simm13 reg 8  reg)
    (:inst ':add reg (:prepsrc index 'X1) reg)))

(defun :c-arith-2op (ll-target)
    ;; prepares the arguments, then calls the llm3 routine ll-target (which is
    ;; a loc) and puts the result in the right place.
    (:movsrc :obj1 'x3)
    (:movsrc :obj2 'x4)
    (:ll-call-loc (symeval ll-target))
    (:movdest 'x4 :obj2))

(defun :generatecall2subr (ll-target lab)
  ;;prepares the arguments, then calls the llm3 routine ll-target (which is
  ;; a loc) and puts the result in the right place.
  ;; le push du premier argument
     (let ((:obj2 (:prepsrc :obj2 'X1)))
       (:inst ':sub-simm13 'SP 4 'SP)
       (:store32disp :obj2 0 'sp))
  ;; le push de l'adresse de retour
     (:inst ':sub-simm13 'SP 4 'SP)
     (:laddr32loc
	    (addadr :PCcurrent (if (:register? :obj1) 24 32)) 'X1)
     (:store32disp 'X1 0 'sp)
      (when (and (consp :obj1) (eq (car :obj1) '|&|))
	    (setq :obj1 `(|&| ,(add 2 (cadr :obj1)))))
  ;; le push du deuxieme argument
     (let ((:obj1 (:prepsrc :obj1 'X1)))
       (:inst ':sub-simm13 'SP 4 'SP)
       (:store32disp :obj1 0 'sp))
  ;; le saut
    (:laddr32loc (getglobal ll-target) 'X4)
    (:inst ':jmpl 'X4 0 'RZERO) ; JMP
    (:nop)
  ;; le POP du resultat
    (cond (lab
	   (:load32disp 'SP 0 'X1)
	   (:inst ':add-simm13 'SP 4 'SP)
	   (:compare-immediate 'X1 0)
	   (:branch ':b ':ne lab ())
	   (:nop))
	  ((:register? :obj2)
	   (:load32disp 'SP 0 :obj2)
	   (:inst ':add-simm13 'SP 4  'SP))
	  (t
	   (:load32disp 'SP 0 'X1)
	   (:inst ':add-simm13 'SP 4 'SP)
	   (:movdest 'X1 :obj2))))

	(defun :instr2float (instr)
	  ;; load a 2 operand floating point operation.
	  (cond (:31bitfloats
		 (:unrolfloat :obj1 'rf1)
		 (:unrolfloat :obj2 'rf2)
		 (:inst ':fpop instr 'rf2 'rf1 'rf2)
		 (:rolfloat 'rf2 :obj2))
		(t
		 (selectq instr (:fadds (:generatecall2subr 'cllfadd ()) )
				(:fsubs (:generatecall2subr 'cllfsub ()) )
				(:fdivs (:generatecall2subr 'cllfdiv ()) )
				(:fmuls (:generatecall2subr 'cllfmul ()) )
				)
		 )))

(defun :unrolfloat (src freg)
  ;; decode a 31 bit float into the floating register
  (let ((reg (:movsrc src 'x1)))
    (:inst ':sll-simm13 reg 1 reg)
    (:movsrc reg freg)))

(defun :rolfloat (freg dest)
  ;; encodes the IEEE float in the floating register freg as a
  ;;  Le-Lisp 31 bit float in dest.
  (:floating-store freg 'x1)
  (:inst ':srl-simm13 'x1 1 'x1)
  (:inst ':or 'signbit 'x1 'x1)
  (:movdest 'x1 dest)))

(defun :floating-load (src fdest)
  ;; move the value in register src into floating register fdest
  ;; Hard to believe that a reg->reg transfer has to pass by memory,
  ;; but there it is folx.  Thanks, Sun Microsystems.
  (:assert (:floating-register? fdest) :floating-move)
  (:store32disp src 0 'RXFLOAT)
  (:inst ':ldf 'rxfloat 'rzero fdest))

(defun :floating-store (fsource dest)
  ;; move the value in  floating register fsource into register dest.
  ;; Just another inexpensive Sparc operation. ;-)
  (:assert (:floating-register? fsource) :floating-store)
  (:inst ':stf  'rxfloat 'rzero fsource)
  (:load32disp 'RXFLOAT 0 dest))

(defun :comp2float (cond)
  ;; assemble a comparison (cond) between two floats
  (:movsrc :obj1 'x1)
  (:movsrc :obj2 'x3)
  (:ll-call-loc :floatcompare)
  (:inst ':fpop2 ':fcmps 'rf1 'rf3 'rzero) ; 31bitsbug
  ;; This nop shouldn't be necessary according to the manuals
  ;; but we have had problems on the machines with FPU's.
  (:nop)
  (:branch ':fb cond :obj3 ())
  (:nop))				; sigh

(defun :cnbxx (cond)
  ;; comparaison arithme'tique sur 16 bits signe's
  ;; on suppose que s'il y a une constante c'est en 2e`me ope'rande.
  (:sign-extend (:prepsrc :obj1 'X1) 'X1)
  (cond ((:13-bit-immediate? :obj2)
	 ;; petit entier sur 13 bits
	 (:compare-immediate 'x1 (cadr :obj2))
	 (:branch ':b cond :obj3 :annul)
	 (:nop))
	(t
	 (:sign-extend (:prepsrc :obj2 'X2) 'X2)
	 (:compare 'x1 'x2)
	 (:branch ':b cond :obj3 :annul)
	 (:nop))))

(defun :cnbxxieqn (cond)
    ;; comparaison arithme'tique sur 32 bits si = ou /=
  ;; first tries to get away with a compare immediate.
  (cond ((:13-bit-positive-immediate? :obj1)
	 (:compare-immediate (:prepsrc :obj2 'x2) (cadr :obj1))
	 (:branch ':b cond :obj3 ())
	 (:nop))
	((:13-bit-positive-immediate? :obj2)
	 (:compare-immediate (:prepsrc :obj1 'x2) (cadr :obj2))
	 (:branch ':b cond :obj3 ())
	 (:nop))
	(t
	 (:compare-and-branch ':b cond :obj1 :obj2 :obj3)
	 (:nop))))

(defun :compare-single-bound (borne cond)
  ;; branches if (:obj1 cond borne) is true.
  (:compare-and-branch ':b cond :obj1 borne :obj2)
  (:nop))

(defun :branch-if-outside-range (btype etype)
    (unless (:register? etype) (:error ':branch-if-outside-range etype))
    (setq :obj1 (:prepsrc :obj1 'X1))
    (:compare :obj1 (:prepsrc btype 'x2))
    (:branch ':b ':l :obj2 :annul)
    (:nop)
    (:compare :obj1 (:prepsrc etype 'x2))
    (:branch ':b':ge :obj2 :annul)
    (:nop))

(defun :branch-if-inside-range (btype etype)
    (unless (:register? etype) (:error ':branch-if-inside-range etype))
    (setq :obj1 (:prepsrc :obj1 'X1))
    (:compare :obj1 (:prepsrc btype 'x2))
    (:short-relative-branch ':b ':l (:size (:nop :subcc :ld :b :nop)))
    (:compare :obj1 (:prepsrc etype 'x2))
    (:branch ':b ':l :obj2 :annul)
    (:nop))

(defun :compare (reg1 reg2)
  ;; generates the compare pseudo-instruction, setting the condition codes.
  (:assert (and (:register? reg1) (:register? reg2)) :compare)
  (:inst ':subcc reg1 reg2 'rzero)))

(defmacro :compare-immediate (reg immediate)
  ;; generates a compare pseudo, for the case of a 13 bit immediate.
  `(:inst ':subcc-simm13 ,reg ,immediate 'rzero))

(defmacro :size (instr-list)
    ;; returns the size in 32 bit word of the instruction list
    ;; Very easy on Sparc, since everything has the same size.
     `(length ',instr-list))

;;; .Section "Les fonctions de chargement des ope'randes"

(defun :prepsrc (arg reg)
    ;; pre'pare l'argument source "arg"
    ;; s'il le faut range l'argument dans l'auxiliaire "reg"
    ;; retourne le nume'ro de registre qui contient l'argument
    (cond ((eq arg 'nil)
           ;; ope'rande nil
           'KNIL)
          ((:register? arg)
           ;; c'est de'ja` un registre
           arg)
          ((atom arg)
           ;; c'est un mot me'moire.
           (cond ((memq arg '(LLINK DLINK ITCOUNT))
		  (:load32loc (symeval (symbol 'llcp arg)) reg)
                  reg)
                 ((memq arg '(CBINDN TAG LOCK PROT))
		  ; \\ why does the previous one load memory while
		  ; this one only loads the address?
		  (:laddr32loc (symeval (symbol 'llcp arg)) reg)
                  reg)
                 (t
		  ;; \spade What does this mess do?
                   ;; ne doit jamais arriver pour le compilo
                   ;; sauf en cas de nouvelles de'finitions.
                   (if (and (symbolp arg)
                            (getfn1 'ld-dir arg))
                       (funcall (getfn1 'ld-dir arg) arg)
                       (:error ':prepsrc arg)))))
          ((memq (car arg) :mem-access)
           ;; acce`s a` la me'moire indirect par registre
	   ;; ( note that (cadr arg) must be a register)
	   (:load32disp (cadr arg) (:getvalue (car arg)) reg)
           reg)
          (t
            (selectq (car arg)
                (QUOTE
                      ;; constante Lisp
                      (cond
		       ;((or (fixp (cadr arg)) (floatp (cadr arg)))
		       ((if :31bitfloats
			    (or (fixp (cadr arg)) (floatp (cadr arg)))
			    (fixp (cadr arg)))
			;; an immediate.
			;; just load it as binary.
			;; \spade 64bitfloats
			(if (eq (cadr arg) 0)
			    'rzero	; Can use the constant zero reg.
			  (:laddr32 (cadr arg) reg)))
		       (t
			     ; c'est un litte'ral a` sauver
    			     (ifn (stringp (cadr arg))
				  (:add-llitt (cadr arg))
				  (:add-llitts arg))
			     (:laddr32 (cadr arg) reg))))
                (CVALQ
                      ;; adresse d'une CVAL de symbole
		      (:assert (symbolp (cadr arg)) :prepsrc)
		      (:load32abs (cadr arg) reg)
		      (:add-llitt (cadr arg))
                      reg)
                (FVALQ
                      ;; adresse d'une FVAL de symbole
                      (:assert (symbolp (cadr arg)) :prepsrc)
		      (:laddr32 (cadr arg) reg) ; load the atom adr
		      (:load32disp reg (:getvalue 'fval) reg) ; indirect
					                      ; through fn cell
		      (:add-llitt (cadr arg))
                      reg)
                (|&|
                 (:load32disp 'SP (mul 4 (cadr arg)) reg)
                 reg)
                ((|@| adr)
		 (:laddr32loc
		  (:biased-code (:absolute-reference (cadr arg) ':solve-code-abs))
		  reg)
                 reg)
                (eval
		 ;; Pour calculer des ope'randes a` load time.
		 (:prepsrc (eval (cadr arg)) reg))
                (t (:error ':prepsrc arg))))))))

(defun :movsrc (arg destreg)
    ;; transporte l'ope'rande "arg" de n'importe quel type
    ;; dans le registre de nom "destreg"
    ;; retourne toujours "destreg" en valeur.
  (let ((temp (:prepsrc arg destreg)))
    (cond
     ((eq temp destreg) ; nothing to do
      )
     ((:floating-register? destreg)
      (:floating-load temp destreg))
     (t (:mov temp destreg)))
    destreg))

(defun :movdest (src dest)
  ;; transporte "src" (toujours registre) vers "dest"
  (cond
   ((:floating-register? src)
    (:floating-store src dest))
   ((:register? dest)
    ;; reg -> reg
    (:mov src dest))
   ((atom dest)
    (:assert (memq dest '(LLINK DLINK ITCOUNT)) ':movdest)
      (:store32loc src (symeval (symbol 'llcp dest)) 'x4))
   ((memq (car dest) :mem-access)
    ;; reg -> mem
    (:store32disp src (:getvalue (car dest)) (cadr dest)))
   ((eq (car dest) 'cvalq)
    ;; reg -> CVAL symbole
    (:assert (symbolp (cadr dest)) :movdest)
    (:store32abs src (cadr dest) 'x4)
    (:add-llitt (cadr dest)))
   ((eq (car dest) '|&|)
    (:store32disp src (mul 4 (cadr dest)) 'SP))
   ((eq (car dest) 'eval)
    ;; Pour calculer des ope'randes a` load time.
    (:movdest src (eval (cadr dest))))
   (t (:error ':movdest dest)))))

(defun :movdestnb (reg arg)
    ;; range la valeur nume'rique dans "reg"
    ;; dans l'ope'rande "arg"
    (cond ((:register? arg)
	   (:inst ':and reg 'short arg))
          (t ; le cas plus long
           (:movdest (:convnb reg) arg))))

(defun :movsrcnb (arg reg)
  ;; sign-extend arg into reg
  (:sign-extend (:prepsrc arg reg) reg)
  reg)

;;; .Section "Les fonctions auxiliares de ge'ne'ration"

(defun :macaheap (op reg)
    ;; charge dans "reg" l'adresse heap de op
    (:inst ':ld-simm13 (:prepsrc op reg) 0 reg)
    (:inst ':add-simm13 reg 8  reg))

;(de :movaheab (op ind reg)
;;    ; charge l'adresse heap d'octet op+ind dans reg
;;    (:macaheap op reg)
;;    (:inst ':add reg (:prepsrc ind 'X1) reg))

(defun :movaheap (op ind reg)
    ;; charge l'adresse heap de mot op+ind dans reg
    (:macaheap op reg)
    (:movsrc ind 'X1)
    (:words-to-bytes 'X1)
    (:inst ':add reg 'X1 reg))

(defun :convnb (reg)
    ;; repasse en format 16 bits
    (:inst ':and reg 'short reg)
    reg)

(defun :macaro1op (op 2nd)
  ;; 1 operand arithmetic instructions.
  (:movsrcnb :obj1 'x1)
  (:inst op 'x1 2nd 'x1)
  (:movdestnb 'x1 :obj1)))

(defun :macaro2op (op)
  ;; 2 operand arithmetic operation. result in :obj2
  ;; \spade, couldn't this just prepsrc one of the args in place?
  (:sign-extend (:prepsrc :obj2 'x1) 'x1)
  (:sign-extend (:prepsrc :obj1 'x2) 'x2)
  (:inst op 'X1 'X2 'X1)
  (:movdestnb 'X1 :obj2))

(defmacro :power-of-two? (x)
  ;; return t if x is a positive integer power of two.
  `(let ((pos (abs ,x)))		; really want fixabs
     (and (not (eq pos 0))
	  (eq 0 (logand pos (sub1 pos))))))

(defun :log-base-2 (x)
  ;; return the log base 2 of x.  If x is negative return -log(-x)
  ;; BK : toute utilisation de calcul flottant a cet endroit est perilleuse
  ;; car il y a des problemes de precision de calcul en 31bitfloats.
  (if (eq x 1) 0
    (let ((y (abs x)) (pu 1))
      (while (neq y 2)
	(setq y (div y 2))
	(incr pu))
      (if (lt x 0) (sub 0 pu)
	pu))))

(defun :lshift-aux (object operation amount)
  ;; generate the instructions for an immediate shift.
  (let ((reg (:prepsrc object 'x1)))
    (:inst operation reg amount reg)
    (:movdestnb reg object)))

(defun :lshift (amount object)
    (cond ((:13-bit-positive-immediate? amount)
	   ; immediate positive, generate a left shift.
	   (:lshift-aux object ':sll-simm13 (cadr amount)))
	  ((:13-bit-negative-immediate? amount)
	   (:lshift-aux object ':srl-simm13 (sub 0 (cadr amount))))
	  (t
	   ; otherwise the full blown dynamic sign test
	   (:sign-extend (:prepsrc amount 'x2) 'x2)
	   (let ((reg (:prepsrc object 'X1)))
	     (:compare-immediate 'x2 0)
	     (:short-relative-branch
	      ':b ':ge (:size (:bge :nop :twoc :sr :b :nop)))
	     (:inst ':sub 'rzero 'x2 'x2)
	     (:inst ':srl reg 'X2 reg)
	     (:short-relative-branch ':b ':a (:size (:b :nop :sll)))
	     (:inst ':sll reg 'X2 reg)
	     (:movdestnb reg object)))))

(defun :constant-arithmetic-shift (object operation amount)
  ;; generate the instructions for an immediate shift.
  (let ((reg (:sign-extend (:prepsrc object 'x1) 'x1)))
    (:inst operation reg amount reg)
    (:movdestnb reg object)))

(defun :arithmetic-shift (amount object)
  ;; The lap instruction ashift doesn't exist in 15.22, but optimizations
  ;; in lapsparc already generate it.
  (cond ((:13-bit-positive-immediate? amount)
	 ; immediate positive, generate a left shift.
	 (:constant-arithmetic-shift object ':sll-simm13 (cadr amount)))
	((:13-bit-negative-immediate? amount)
	 (:constant-arithmetic-shift object ':sra-simm13
				     (sub 0 (cadr amount))))
	(t
	 ; otherwise the full blown dynamic sign test
	 (:sign-extend (:prepsrc amount 'x2) 'x2)
	 (let ((reg (:sign-extend (:prepsrc object 'X1) 'x1)))
	   (:compare-immediate 'x2 0)
	   (:short-relative-branch
	    ':b ':ge (:size (:bge :nop :twoc :sr :b :nop)))
	   (:inst ':sub 'rzero 'x2 'x2)
	   (:inst ':sra reg 'X2 reg)
	   (:short-relative-branch ':b ':a (:size (:b :nop :sll)))
	   (:inst ':sll reg 'X2 reg)
	   (:movdestnb reg object)))))

(defun :logop-aux (reg op immediate-op)
    ;; fonction auxiliaire de ge'ne'ration des
    ;; instructions logiques : "reg" contient
    ;; le 2e`me ope'rande pre^t, "op" est l'ope'rateur
    ;; a` appliquer, :obj1 est le premier ope'rande.
    (cond ((:13-bit-positive-immediate? :obj1)
	   ;; 12 bit integer (otherwise the immediate field is sign-extended.)
           (:inst immediate-op reg (cadr :obj1) reg))
          (t ; le cas le plus de'favorable
           (:inst op reg (:prepsrc :obj1 'x2) reg))))

(defun :logop-2op (op immediate-op)
    ;; decides whether to assemble the immediate or full version of a
    ;; logical operator.
    (cond ((:register? :obj2)
	   (:logop-aux :obj2 op immediate-op))
          (t  (:prepsrc :obj2 'X1)
              (:logop-aux 'X1 op immediate-op)
              (:movdestnb 'X1 :obj2))))

;;; .Section "Les fonctions auxiliaires de chargement me'moire"

;;; .SSection "branch handling routines"

 #+:cause(print "branch routines")

(defun :compare-and-branch (type code op1 op2 adr)
  ;; generates the compare and the branch
  ;; used for places that can't benefit by compare immediate.
  ;; TYPE is :b, :fb or :cb.
  ;; CODE is a condition code appropriate to the branch.
  (:compare (:prepsrc op1 'X1) (:prepsrc op2 'X2))
  (:branch type code adr ()))

(defun :branch (type code adr annul)
    ;; calculates the pc rel displacement to adr
    (let ((offset-in-words (:rshiftadr (:relative-reference adr ':solve-22rel))))
        (:inst type code offset-in-words annul)))

(defun :short-relative-branch (type code displacement)
  ;; for immediate branches.  Takes displacement in 32 bit words.
  (:inst type code displacement ())
  (:nop)))

;;; .SSection "address accessors."

(defun :high-loc (addr)
  ;; given an address (cons or fixp) returns the top 16 bits.
  (if (fixp addr)
      (logshift addr -16)
    (car addr)))

(defun :low-loc (addr)
  ;; returns the low-order 16 bits.
  (or (fixp addr) (cdr addr)))

;;; variable that controls whether or not assertions are verified
(defvar :verify-assertions ())

;;; variable that says not to do the loader bootstrap
(defvar :bootstrap t)

(defun :debug (onoff)
     (if onoff
	(de :inst (code . args)
	    ; test version
;	    (print)
	    (prin code "	")
	    (map
	     (lambda (args)
	       (prin (car args))
	       (if (cdr args) (prin ",")))
	     args)
	    (print))  )); remove this comment to enable printing the instructions

(defun :inst &nobind
  (selectq (:format (arg 0))
	   (simm13 (:inst-simm13 (arg 0) (arg 1)(arg 2) (arg 3)))
	   (i2reg  (:inst-i2reg (arg 0) (arg 1) (arg 2) (arg 3)))
	   (branch  (:inst-branch (arg 0) (arg 1) (arg 2) (arg 3)))
	   (call (:inst-call (arg 1)))
	   (sethi (:inst-sethi (arg 1) (arg 2)))
	   (fpop (:inst-fpop (arg 0) (arg 1) (arg 2) (arg 3) (arg 4)))
	   (t  (:error "unknown format or instruction in :inst : "
		       (arg 0)))))))

 #-:bootstrap
(:debug ())

(defmacro :inst-simm13 (opcode3 source-reg simm13 dest-reg)
     ;; load a 13 bit short immediate case of format 3
    `(progn
       (:1word (logor (:format-type ,opcode3)
		    (logor (logshift (:getvalue ,dest-reg) 9)
			   (logor (:getvalue ,opcode3)
				  (logshift (:getvalue ,source-reg) -2)))))
       (:1word (logor (logshift (:getvalue ,source-reg) 14)
		      (logor #.(logshift 1 13)
			     (logand ,simm13 #$1fff))))))

(defmacro :inst-i2reg (opcode3 source-reg source-reg-2 dest-reg)
     ;; load a 2 source register instruction of format 3
    `(progn
       ;; make sure that it is really a 2 reg call, and not
       ;; an accidental 13 bit immediate.
       (:assert (let ((val (:getvalue ,source-reg-2)))
		  (and (<= 0 val) (<= val 31))) ':inst-i2reg)
       (:1word (logor (:format-type ,opcode3)
		    (logor (logshift (:getvalue ,dest-reg) 9)
			   (logor (:getvalue ,opcode3)
				  (logshift (:getvalue ,source-reg) -2)))))
       (:1word (logor (logshift (:getvalue ,source-reg) 14)
			     (:getvalue ,source-reg-2)))))

(defmacro :inst-sethi (top6bits dest-reg)
     ;; Assembles the first 16 bits of a set hi instruction.
     ;; The rest (the rest of the constant and the or instruction)
     ;; are installed with :1word.  (see :sethi).
     `(:1word (logor (logshift (:getvalue ,dest-reg) 9)
		     (logor #.(logshift 4 6)
			    ,top6bits))))

(defvar :annul (logshift 1 13))		; the annul bit for branches.

(defmacro :inst-branch (branch-type ccode byte-offset annul)
     ;; Load a format 2 b (22 bit pc-rel branch) format instruction.
     ;; These may be integer, floating-point or coprocessor branches.
     ;; (branch-type = b, fb, cb)
     ;; If annul is set, the delay instruction is annulled when
     ;; the branch is not taken.
     (:assert (consp byte-offset) ':inst-byte-offset)
    `(progn
       (:1word
	(logor
	 (or ,annul 0)
	 (logor
	  (:getvalue ,ccode)
	  (logor
	   (:getvalue ,branch-type)
	   (logand (:high-loc ,byte-offset) #$3f))))) ; low 6 bits of hi-order word
       (:1word (:low-loc ,byte-offset))))

(defmacro :inst-call (word-offset)
  ;; Load a call (30 bit pc-rel jump and link) format instruction.
  `(progn
     (:1word (logor ,(:format-type ':call)
		    (logand #$3fff (:high-loc ,word-offset))))
     (:1word (:low-loc ,word-offset))))

(defmacro :inst-fpop (opcode3 opf source-reg source-reg2 dest-reg)
  ;; load a floating point format (3c) instruction (very similar to simm13.)
  `(progn
     (:1word (logor (:format-type ,opcode3)
		    (logor (logshift (:getvalue ,dest-reg) 9)
			   (logor (:getvalue ,opcode3)
				  (logshift (:getvalue ,source-reg) -2)))))
     (:1word (logor (logshift (:getvalue ,source-reg) 14)
		    (logor (:getvalue ,opf)
			   (:getvalue ,source-reg2))))))

;; .SSection "Simple memory access primitives"
 #+:cause(print "loading memory primitives")

;; Note that the "load" functions have an argument list of the form
;; (source offset destination) which is the Sparc's convention,
;; but unfamiliar to many people.

(defun :val32abs (obj)
    ;; chargement d'une valeur absolue de 32 bits
    (cond ((fixp obj)
           (:1word (logshift obj -16))	; some fixp's > 64k
           (:1word obj))
          ((consp obj)
            (:1word (car obj))
            (:1word (cdr obj)))
          (t (:error ':val32abs obj))))

(defun :store32disp (reg disp dest-accu)
    ;; generates the instructions to store a 32 bit absolute value to memory
    ;; at dest-accu
    (:assert (:register? dest-accu) :store32disp)
    ;; note that the store is the exception in Sparc instructions, in that
    ;; the source is in the rd field (usually destination register).
    (:inst ':st-simm13 dest-accu disp reg))

(defun :laddr32disp (sourcereg disp destreg)
  ;; load destreg with sourcereg+disp (sign extended)
  (:assert (:13-bit-value? disp) :laddr32disp)
  (:inst ':add-simm13 sourcereg disp destreg)
  destreg)

(defun :laddr32 (obj reg)
    ;; generates the instructions to load a 32 bit immediate
  (cond ((fixp obj)
	 (if (:13-bit-positive-value? obj)
	     ;; must be pos, since -1 means 0xffff,
	     ;; but immediates are sign-extended on sparc.
	     (:move-immediate obj reg)
	   (:laddr32loc (cons (logshift obj -16) obj) reg)))
	(t
	 (:laddr32loc (loc obj) reg)))
    reg)

(defmacro :words-to-bytes (reg)
  ;; converts the value in reg from a word quantity to a byte quantity.
  `(:inst ':sll-simm13 ,reg 2 ,reg))

(defun :sign-extend (source dest)
  ;; sign extend a 16 bit value to 32 bits
  (if (eq (:getvalue source) (:getvalue 'rzero))
      (:mov source dest)		; no need to sign-extend zero.
    (:inst ':sll-simm13 source 16 dest)
    (:inst ':sra-simm13 dest 16 dest)
    dest))

(defmacro :lo10 (val)
     ;; gives the low-order 10 bits
     `(logand #$3ff ,val))

(defmacro :hi6 (val)
     ;; gives the high-order 6 bits of a 16 bit quantity
     `(logshift ,val -10))

(defmacro :sethi (loc reg)
  ;; generates a single 32 bit sethi instruction which will put
  ;; the highorder 22 bits of loc into reg.
  `(progn
     ;; First, stuff the opcode and top six bits of the 22 bit constant
     ;; we will eventually furnish to the sethi instruction.
     (:inst ':sethi (:hi6 (:high-loc ,loc)) ,reg)
     ;; now stuff the rest of the 22 bit constant in the same (32 bit)
     ;; instruction.
     (:1word (logor (logshift (:lo10 (:high-loc ,loc)) 6)
		    (logshift (:low-loc ,loc) -10)))))

(defun :laddr32loc (loc reg)
  ;; generates the instructions to load the 32 bit address represented
  ;; by LOC in to REG.
  (:sethi loc reg)
  ;; now generate an instruction which or's in the last 10 bits.
  (:inst ':or-simm13 reg (logand #$3ff (:low-loc loc)) reg)
  reg)

(defun :load32abs (obj reg)
  ;; generates the instructions to load a long from a 32 bit memory address
  ;; Since there are only 13 bit immediates, we directly call :load32loc
  ;; \spade Why does only CVALQ need this ?
  (:load32loc (loc obj) reg))

(defun :load32loc (loc-of-obj reg)
  ;; Generates the instructions to load a 32 bit immediate in loc form.
  ;; When we are making fasl, we cannot optimize by knowing the
  ;; address we are loading because
  ;; when we reload this code (fasload time), the address will be different.
  ;; This can change the size of the code, which will screw up the relative
  ;; branches we don't want to recalculate.
  (:sethi loc-of-obj reg)
  (:inst ':ld-simm13 reg (:lo10 (:low-loc loc-of-obj)) reg)
  reg)

(defun :load32disp (accu disp destreg)
    ;; generates the instructions to load a 32 bit absolute value from memory
    (:assert (and (:register? accu) (:13-bit-value? disp)) :load32disp)
    (:inst ':ld-simm13 accu disp destreg)
    destreg)

(defun :store32abs (reg obj via)
  ;; reg is stored at obj
  ;; Analagously to :load32abs, on the sparc, everything is just a call to
  ;; store32loc.
  (:store32loc reg (loc obj) via))

(defun :store32loc (source-reg loc via)
   ;; store reg at the address specified by loc
  (:sethi loc via)
  (:store32disp source-reg (:lo10 (:low-loc loc)) via)))

(defmacro :assert (form where)
  (if :verify-assertions
     `(ifn ,form (:error ',where ',form))
    ()))

(defun :1word (obj)
    ;; chargement d'un mot de 16 bits en me'moire a` l'adresse
    ;; contenue dans :PCcurrent, et gestion de cette valeur.
    (when :talkp
          ;; impression du code en hexade'cimal.
          (when (> :nwl 6)
                (setq :nwl 0)
                (terpri)
                (outpos 30)
                (:prinhex :PCcurrent)
                (prin "  "))
          (incr :nwl)
          (prin " ")
          (:prinhex obj))
    (if (gtadr :PCcurrent :Ecode)
        (with ((outchan ()))
              (print (get-message 'ERRFCOD))
              (exit #:system:toplevel-tag))
        (memory :PCcurrent obj)
	(setq :PCcurrent (incradr :PCcurrent 2))))

;;; .Section "Fonctions de calcul d'adresse"

;;; .SSection "Les adresses absolues sur 32 bits"

(defun :valadr (adr)
    ;; calcule la valeur d'une adresse, locale a` un module, de type :
    ;; symbole, numb ou constante de type (nh . nl)
    ;; retourne une adresse (h . l) ou bien () si non de'finie
    (cond
       ((atom adr)
          ;; e'tiquette symbolique ou nume'rique
          (cond ((cassq adr :llabels)
                   ;; e'tiquette locale re'solue
                   )
                ((and (symbolp adr) (getprop  adr ':fval))
                   ;; les fonctions ENTRY de'ja` charge'es (avant END!)
                   )
                (t ; sinon non de'finie
                   ())))
       (t ; les constantes adresses de type (h . l)
          (if (and (fixp (car adr)) (fixp (cdr adr)))
              adr
              (:error "VALADR" adr)))))

;;; The unresolved address must have high order bits so that it is not optimized
;;; to a short anywhere
(defvar :unresolved-address '(#$f0f0 . #$f0f0))

(defun :absolute-reference (adr solve-fn)
  ;; return a 32 bit absolute address for ADR.
  ;; Solve-fn is the function that will be applied to this reference
  ;; when forward references are resolved.
  (let ((valadr (:valadr adr)))
    (if valadr
	valadr
      (if (and (symbolp adr) (null (assq adr :llabels)))
	  (:addentry solve-fn adr (copy :PCcurrent))
	(:addlabel solve-fn adr (copy :PCcurrent)))
      :unresolved-address)))

(defun :relative-reference (adr solve-fn)
  ;; retourne un de'placement par rapport a` PC ou :unresolved-address
  (let ((valadr  (:valadr adr)))
    (if valadr
	(:sa valadr :PCcurrent)
      (if (and (symbolp adr) (null (assq adr :llabels)))
	  (:addentry solve-fn adr (copy :PCcurrent))
	(:addlabel solve-fn adr (copy :PCcurrent)))
      :unresolved-address)))

(defun :rshiftadr (adr)
  ;; shifts an address right by 2 bits.
  (if (fixp adr)
      (logshift adr -2)
    (let ((bits (logand (:high-loc adr) 3)))
      (rplacd adr (logor (logshift bits 14)
			 (logshift (:low-loc adr) -2)))
      (rplaca adr (quo (:high-loc adr) 4)))))

(defun :solve-22rel (ref)
    ;; installs the 22 bit offset in a branch format instruction
    (let ((relval (:rshiftadr (:sa :PCcurrent ref))))
         (memory ref (logor
		      (logand (memory ref) #$ffc0)
		      (logand (car relval) #$3f)))
         (memory (addadr ref 2) (cdr relval))))

(defun :solve-call-rel (ref)
  ;; installs the 30 bit word offset in a call instruction.
  (let ((absval (:rshiftadr (:sa :PCcurrent ref))))
    (memory ref (logor 16384 ; #.(:format-type ':call)
		       (:high-loc absval)))
    (memory (addadr ref 2) (:low-loc absval))))

(defun :solve-abs (ref)
  (:install-in-sethi ref :PCcurrent))

(defun :solve-code-abs (ref)
  ;; label resolution function which biases the address once it has been found.
  (:install-in-sethi ref (:biased-code :PCcurrent)))

(defun :install-in-sethi (ref loc)
  ;; installs the 32 bit address LOC in a sethi, *-simm13 pair at REF.
  ;; First install the top 16 bits of the sethi.
  (memory ref (logor (logand (memory ref) #$ffc0)
		     (:hi6 (car Loc))))
  ;; then install the "middle" 16 bits of the address.
  (memory (addadr ref 2)
	  (logor (logshift (:lo10 (:high-loc Loc)) 6)
		 (logshift (:low-loc Loc) -10)))
  ;; then install the last 10 as the simm13 field of the *-simm13 instruction.
  (memory (addadr ref 6)
	  (logor (logand (memory (addadr ref 6)) #$e000)
		 (logand #$3ff (:low-loc Loc
)))))

(defun :solve-contig-abs (ref)
;; installs the 32 bit address in 32 contiguous bits
         (memory ref (:high-loc :PCcurrent))
         (memory (addadr ref 2) (:low-loc :PCcurrent)))

(defun :solve-label (obj)
  ;; called when a label appears.  Look in :llabels-not-resolved
  ;; (the unresolved references).
  ;; For each pair found for obj in :llabels-not-resolved,
  ;; we call the appropriate
  ;; function to resolve the absolute or relative use of the label.
    (mapc #':apply-solve-fn
          (cassq obj :llabels-not-resolved))
    (setq :llabels-not-resolved
          (delete (assq obj :llabels-not-resolved) :llabels-not-resolved)))

(defun :solventry (obj)
    (mapc #':apply-solve-fn
          (cassq obj :entries-not-resolved))
    (setq :entries-not-resolved
          (delete (assq obj :entries-not-resolved) :entries-not-resolved)))

(defun :apply-solve-fn (fn-adr)
  ;; calls the appropriate solve-fn on the address
  ;; Of course, this whole function would be a funcall, except
  ;; then complice can't compile it correctly.
  (selectq (car fn-adr)
	   (:solve-abs (:solve-abs (cdr fn-adr)))
	   (:solve-code-abs (:solve-code-abs (cdr fn-adr)))
	   (:solve-22rel
	    (:solve-22rel (cdr fn-adr)))
	   (:solve-contig-abs
	    (:solve-contig-abs (cdr fn-adr)))
	   (:solve-call-rel
	    (:solve-call-rel (cdr fn-adr)))
	   (t (:error "unknown solve-function." (car fn-adr))))))

(defun :aa (a1 a2)
    (setq #:ex:regret 0)
    (xcons (ex+
              (if (consp a1) (cdr a1) a1)
              (if (consp a2) (cdr a2) a2))
           (ex+
              (if (consp a1) (car a1) 0)
              (if (consp a2) (car a2) 0))))

(defmacro :biased-code (addr)
  ;; returns the code address decremented by 8 as is required by the
  ;; sparc return.
  `(:sa ,addr :code-bias))

(defun :sa (a1 a2)
  (:aa (:aa a1 1)
       (cons (if (consp a2) (ex- (car a2)) -1)
	     (if (consp a2) (ex- (cdr a2)) (ex- a2)))))

;;; .Section "Gestion des tables"

(defun :addlabel (solve-fn sym adr)
    ;; rajoute le symbole <sym> (a l'adresse <adr>)
    ;; dans la table des e'tiquettes locales
    (let ((val (assq sym :llabels-not-resolved)))
         (if val
             (rplacd val (cons (cons solve-fn adr) (cdr val)))
             (newl :llabels-not-resolved (list sym (cons solve-fn adr))))))

(defun :addentry (solve-fn sym adr)
    ;; rajoute le symbole <sym> (a l'adresse <adr>)
    ;; dans la table des entre'es locales a` etre resoulu par solve-fn
    (let ((val (assq sym :entries-not-resolved)))
         (if val
             (rplacd val (cons (cons solve-fn adr) (cdr val)))
             (newl :entries-not-resolved (list sym (cons solve-fn adr))))))

 #-:bootstrap
;; while still debugging...
(defun :reset
  (setq :entries-not-resolved ()))

(defun  :clean-llitt ()
     ;; nettoie et sauve la table des litte'raux :saved-by-loader
     ;; dans :global-saved-by-loader sous forme d'un vecteur si
     ;; si il n'y a pas eu de TITLE dans :module sinon.
     ;; ne doit e^tre fait qu'au END.
     (let ((l :saved-by-loader)
           (i -1)
           v)
          (while l
                 (if (and (symbolp (car l))
                          (or (boundp (car l))
                              (typefn (car l))))
                     (setq :saved-by-loader
                           (delq (nextl l) :saved-by-loader))
                    (nextl l)))
         (when (gt (length :saved-by-loader) 0)
                  (setq v (makevector (length :saved-by-loader) ()))
                  (while :saved-by-loader
                         (vset v (setq i (add i 1)) (nextl :saved-by-loader)))
                  (if :module
		      (progn
			(when (get :module ':saved-by-loader)
			   (printerror 'loader
				       '#:loader:ERRMDU
				       :module))
                      (putprop :module v ':saved-by-loader))
                      (newl :global-saved-by-loader v)))
         (setq :module ()) ))

(defun :add-llitt (obj)
    ;; rajoute un litte'ral a` la table des litte'raux :saved-by-loader
    (cond ((memq obj :saved-by-loader))
          (t (newl :saved-by-loader obj))))

(defun :add-llitts (obj)
    ;; rajoute une chai^ne de caracte`res a` la table des litte'raux
    ;; en essayant de partager les chai^nes.
    ;; ?!?!?! Cette ide'e d'Ascander est toujours en discussion ?!?!?
    (let ((s (and #:ld:shared-strings (member (cadr obj) :saved-by-loader))))
         (ifn s
              (newl :saved-by-loader (cadr obj))
              (rplaca (cdr obj) (car s)))))

;;; .Section "Sorties et Dumps Hexade'cimal"

(defun :prinhex (n)
    ;; imprime sur 4 ou 8 chiffres hexa le nb ou l'adresse n
    (cond ((fixp n)
           (:prinhexb (logand (logshift n -8) #$FF))
           (:prinhexb (logand n #$FF)))
          ((consp n)
	    (prin "0x")
           (:prinhex (car n)) (prin " ")
           (:prinhex (cdr n)))
          (t (:error ':prinhex n)))
    ())

(defun :prinhexb (n)
    ;; imprime sur 2 chiffres hexa le nb n
    (cond ((not (fixp n)) (:error ':prinhexb n))
          ((< n 0) (setq n 255))
          ((< n 16) (princn #/0)))
    (with ((obase 16)) (prin n)))

(defun :mem (fn . n)
    (:memory-dump (loc (valfn fn)) (or (car n) 9)) fn)

(defun :memory-dump (adr n)
    ;; dump la memoire en hexa de <adr> sur <n> mots
    (setq adr (copy adr))       ;  pour le incradr
    (until (<= n 0)
           (:prinhex adr)
           (outpos 15)
           (repeat 8 (:prinhex (memory adr))
                     (prin " ")
                     (incradr adr 2)
                     (decr n))
           (terpri)))

;;; .Section "Chargement des points d'entree speciaux du lap/llcp"

;;; .Section "Fonctions principales de chargement"

(defun loaderesolve () (loader '((end))))

(defun loader
 (:lobj . :talkp)
    ;; <:lobj> est la liste des objets a` charger
    ;; <:talkp> = T si on de'sire un listage hexa du chargement
; (print "Next loader?")(tyi)
    (when (consp :talkp)                ; l'argument est optionnel!
          (setq :talkp (car :talkp)))
    (let ((:PCcurrent
	   (:pc-align (#:system:ccode))) ; le compteur ordinal courant
          (:llabels)                    ; A-liste des e'tiquettes locales
          (:llabels-not-resolved)       ; A-L. des e'tiq. loc. non re'solues
          (:fntname 'loader)            ; fonction en cours de chargement
          :codop                        ; variable globale de travail
          :arg1                         ;    itou
          :arg2                         ;    itou
          :arg3                         ;    itou
          :localstack                   ;    ?!?!?!?!?!?
          :valaux                       ;    itou pour des valeurs locales.
          :f                            ;    itou (pour des getfn1)
          (:nwl 0)                      ;    itou pour tabler le code produit.
          (#:ex:regret))                ; pour rester propre
         ;; le re'cupe'rateur d'erreur syste`me
;;         (catcherror t
             ;; le re'cupe'rateur des erreurs du chargeur
             (tag :tagerr
                  ;; #:system:ccode ne sera actualise'
                  ;; que si tout se passe bien sans erreur
                  (while :lobj
                         (setq :nwl 0)
                         (when (gtadr :PCcurrent :Ecode)
                               (with ((outchan ()))
                                     (print (get-message 'ERRFCOD))
                                     (exit #:system:toplevel-tag)))
                         (:ins (nextl :lobj))
                         (when :talkp (terpri)))
                  ;; test des re'fe'rences non re'solues
                  (:ins '(ENDL))
                  ; flush le cache d'instruction
                  (iflushb (#:system:ccode) :PCcurrent)
		  ; actualise le nouveau de'but de la zone code
		  (#:system:ccode :PCcurrent)))
;	     )
         ()))

;;; Get rid of the interpreted versions of the internal functions.
;;; Must terminate the module first.
(loader '((end)))

(unless (or (eq (typefn 'loaderesolve) 'expr) (get 'loaderesolve 'resetfn))
    (mapc
         (lambda (m)
                 (when (typefn m)
                       (remfn m)
                       (remprop m '#:system:loaded-from-file)))
         (oblist '#.#:sys-package:colon)))

; .Section "Bootstrap"

(when (neq (typefn 'iflushb2) 'subr2)
      ; le flush du cache du iris4d
      (loader '(
          (fentry iflushb2 subr2)
          (entry iflushb2 subr2)
          (push a2)
          (push (@ 100))
          (push (eval (kwote (getglobal 'iflushb))))
          (push '1)
          (jcall vag)
          (push a1)
          (push '0)
          (mov (& 5) a1)
          (jcall vag)
          (push a1)
          (push '0)
          (mov '6 a4)
          (jmp callextern)
      100 (adjstk '1)
          (return)
          (end))
       ()))

;; pour flusher le code de iflushb
;; qui est dans le cache DATA, un petit getglobal.
(eval-when (eval)
	   ;; bootstrap du GETGLOBAL !?!? (histoire de malloc)?!?!?
	   (getglobal "iflushb")
)

(synonymq iflushb iflushb2)
