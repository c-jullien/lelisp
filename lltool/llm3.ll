;;;
;;; LLM3:  LLM3/part1: The LLM3 constants.
;;;
;;; $Source: /usr/cvs/lelisp/lltool/llm3.ll,v $
;;; $Date: 2016/05/21 14:44:51 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


(unless (>= (version) 15)
        (error 'load 'erricf 'llm3))
 
;;; In order to create an expander memory-image, load the
;;; following files in this order:
;;;
;;; 1 - The LLM3 constants            ../lltool/llm3.ll
;;; 2 - The generic expander          ../lltool/expand.ll
;;; 3 - The predefined macros         ../lltool/macllm3.ll
;;; 4 - The machine specific macros   ../XXX/macXXX.ll

(setq #:system:read-case-flag ())

;;;
;;; Global variables
;;;

(defvar #:llm3:dir-source      ; LLM3 source directory
        "../llm3/")

(defvar #:llm3:files           ; LLM3 files list
        '(llinit  toperr  gc      physio  read    macroch
          print   eval    fspecs  cntrl   carcdr  symbs
          fntstd  number  specnb  chars   string  extend  bllsht))

(defvar #:llm3:linst ())       ; LLM3 instructions list

(defvar #:llm3:lpseudo ())     ; LLM3 pseudo-instruction list

(defvar #:llm3:loper ())       ; operand type list

(defvar #:llm3:mem-access      ; Lisp memory access list
        '(VAL     CAR     CDR     TYP     CVAL    PNAME
          PLIST   FVAL    ALINK   PKGC    OVAL ))


;;;
;;; Read an LLM3 file
;;;

(defun #:llm3:openi-llm3 (file)
  ;; open an LLM3 file
  (let ((f file))
    (cond ((probefile (setq f (catenate file ".llm3")))
	   (openi f))
	  ((probefile (setq f (catenate #:llm3:dir-source
					file
					".llm3")))
	   (openi f))
	  (t (error '#:llm3:openi-llm3 'ERRIOS file)))))

(defun #:llm3:process-list-of-files (process lfile . process-newfile)
  ;; read a list of LLM3 files. Each line will be processed
  ;; using the <process> function.
  (while lfile
    (with ((inchan (#:llm3:openi-llm3 (car lfile))))
	  (when (consp process-newfile)
		(funcall (car process-newfile) (car lfile)))
	  (catcherror t      ;; expand 1 file
		      (#:llm3:process-one-file process)))
    (nextl lfile))))

(defun #:llm3:process-one-file (process)
  (with ((typecn #/,   cmsymb)
	 (typecn #/.   cpname)
	 (typecn #/%   cmsymb)
	 (typecn #/:   cmsymb)
	 (typecn #/&   cmsymb)
	 (typecn #\CR  cmsymb)
	 (typecn #/;   cmsymb)
	 (typecn #/@   cmsymb))
	(flet ((|#| ()
		(list
		 (list '|#|
		       (selectq (peekcn)
				(#// (readcn) (readcn))
				(#/^ (readcn) 
				     (logand (readcn) #$1F))
				(#/$ (readcn) (with ((ibase 16)) (read)))
				(t (read)))))))
	      (untilexit eof
			 (funcall process
				  (#:llm3:nextinst (#:llm3:nextline)))))))


(setq #:llm3:listsep (list (ascii #/;) (ascii #\CR)))

(defun  #:llm3:nextline ()
  ;; returns a new line (without interpreting operands)
  (let ((l)
	(w)
	(i))
    (inpos (inmax))
    (setq i (memq (peekcn) '(#\SP #\TAB)))
    (until (memq (setq w (read)) #:llm3:listsep)
	   (newl l w))
    (cond ((null l) (#:llm3:nextline))
	  ((not i) (nreverse l))
	  (t (cons '|| (nreverse l))))))

(defun #:llm3:nextinst (ligne)
  (when (cddr ligne) 
	(rplacd (cdr ligne) (#:llm3:larg (cddr ligne))))
  ligne)

(defun #:llm3:larg (larg)
  ;; <larg> is the rest of the description of the operands
  ;; returns the operand list using a Lisp format
  (cond ((null larg) 
	 ;; end of argument list
	 ())
	((stringp (car larg))
	 ;; a string constant
	 (cons (list 'strg (car larg)) (#:llm3:largcont (cdr larg))))
	((memq (car larg) '(A1 A2 A3 A4))
	 ;; one of the four accumulators
	 (cons (car larg) (#:llm3:largcont (cdr larg))))
	((eq (car larg) '|,|)
	 ;; argument separator
	 (#:llm3:err "bag argument 0" larg ligne))
	((memq (car larg) #:llm3:mem-access)
	 ;; indirect register memory access
	 (if (consp (cadr larg))
	     (if (memq (caadr larg) '(A1 A2 A3 A4))
		 (cons (list (car larg) (caadr larg))
		       (#:llm3:largcont (cddr larg)))
	         (#:llm3:err "bad argument 1" larg ligne))
	     (#:llm3:err "bad argument 2" larg ligne)))
	((eq (car larg) '&)
	 ;; direct stack access
	 (cond ((and (fixp (cadr larg)) (>= (cadr larg) 0))
		(cons (list (car larg) (cadr larg))
		      (#:llm3:largcont (cddr larg))))
	       (t (#:llm3:err "bad argument 4" larg ligne))))
	((memq (car larg) '(|@| |%|))
	 ;; a address constant: code (@) or data (%)
	 (cond ((symbolp (cadr larg))
		(cons (list (car larg) (cadr larg))
		      (#:llm3:largcont (cddr larg))))
	       (t (#:llm3:err "bad argument 5" larg ligne))))
	((atom (car larg))
	 ;; memory address, string constant or number.
	 (cons (car larg) (#:llm3:largcont (cdr larg))))
	((and (consp (car larg)) (eq (caar larg) '|#|))
	 ;; a numerical constant
	 (if (or (fixp (cadar larg)) (symbolp (cadar larg)))
	     (cons (car larg)
		   (#:llm3:largcont (cdr larg)))
	     (#:llm3:err "bad argument 6" larg ligne)))
	(t ;; an error
	  (#:llm3:err "bad argument 7" larg ligne))))

(defun #:llm3:largcont (larg)
  ;; check the argument continuation
  ;; <larg> is the rest
  (cond ((null larg) ())
	((eq (car larg) '|,|)
	 (#:llm3:larg (cdr larg)))
	(t (#:llm3:err "bad argument 8" larg ligne))))

(defun #:llm3:err (msg arg line)
  (error 'EXPAND msg (list arg " at line " line)))

;;;
;;; Find the type of an LLM3 operand
;;;


;;; These types are in the #:llm3:oper list


(defun  #:llm3:type-operand (arg)
  (cond ((null arg)                      ; no arguments
	 ())
	((memq arg '(a1 a2 a3 a4))       ; one on the four accumulators
	 arg)
	((eq arg 'nil)                   ; the NIL operand
	 arg)
	((eq arg 'sp)                    ; the SP operand
	 arg)
	((atom arg)
	 (cond ((= (chrnth 0 arg) #/.)   ; .SYMBOL
		'imat)
	       ((symbolp arg)            ; word in memory
		'memadr)
	       (t 'const)))              ; other constant
            ((memq (car arg) #:llm3:mem-access)  ; indirect memory acess
             (car arg))
            ((eq (car arg) '|#|)            ; a numerical constant
             'numb)
            ((memq (car arg) '(|@| |%|))    ; constant address or data
             'imad)
            ((eq (car arg) '&)              ; stack direct access
             'stack)
            ((eq (car arg) 'strg)           ; string constant
             'const)
            (t ())))                        ; other type

;;;
;;; Definition of the LLM3 instructions
;;;
;;;
;;; The following properties will be set on the P-List of the
;;; instruction name:
;;;
;;;	#:llm3:narg	the number of arguments or a list of numbers
;;;	#:llm3:typarg	arguments types (t or () if these arguments
;;;			is an address)
;;;	#:llm3:typspec	special type of operand
;			pc    = PC modification
;			pcmod = conditionnal PC modification
;			stack = use a word in the stack


(df defoper (nom val)
    ;; define a new operand
    (putprop nom val '#:llm3:oper)
    (newl #:llm3:loper nom))

(df defpseudo (nom val)
    ;; define a pseudo-instruction
    (putprop nom val '#:llm3:narg)
    (newl #:llm3:lpseudo nom))

(df defllm3 (nom val1 . val2)
    ;; define the argument number of an instruction
    (newl #:llm3:linst nom)
    (putprop nom val1 '#:llm3:narg)
    (when (consp val2)
          (putprop nom (car val2) '#:llm3:typarg))
    (when (consp (cdr val2))
          (putprop nom (cadr val2) '#:llm3:typspec)))

;;;
;;; Initialization 
;;;

(defoper	A1	"accumulator1")
(defoper	A2	"accumulator2")
(defoper	A3	"accumulator3")
(defoper	A4	"accumulator4")

(defoper	VAL	"indirect memory access")
(defoper	TYP	"string or vector type")
(defoper	CAR	"CAR memory access")
(defoper	CDR	"CDR memory access")
(defoper	CVAL	"Symbol Value memory access")
(defoper	PLIST	"Symbol P-List memory access")
(defoper	FVAL	"Symbol Function Value memory access")
(defoper	FTYPE	"Symbol Function type memory access")
(defoper	ALINK	"Symbol A-Link memory access")
(defoper	OVAL	"Symbol Obj Val memory access")
(defoper	PKGC	"Symbol Package cell memory access")
(defoper	PNAME	"Symbol Pname memory access")

(defoper	IMAT	"symbol immediate address")
(defoper	IMAD	"label immediate address")
(defoper	MEMADR	"memory address")
(defoper	CONST	"constant immediate value")
(defoper	NUMB	"numerical value")
(defoper	PCMOD	"PC modification")

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
(defllm3        ADDADR          0       t               ()) ; macro
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
(defllm3	BFNIL		2	(t ())		(pccond))  ; macro
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
(defllm3	BTNIL		2	(t ())		(pccond))  ; macro
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
(defllm3        DATE            1       t               ())
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
(defllm3        GCMARK          0       t               ())
(defllm3        GCSTART         0       t               ())
(defllm3        GCSTOP          0       t               ())
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
(defllm3	HOVNI           4       t               ())  ; macro
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
(defllm3	MOVNIL		1	t		())   ; macro
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
(defllm3        SUBADR          0       t               ()) ; macro
(defllm3        SWPCONS         4       t               ()) ; macro
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

;;;
;;; All the macros are on the file ../lltool/macllm3.ll
;;;

