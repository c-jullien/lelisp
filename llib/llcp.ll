;;;
;;; LLCP:  a simple Le-Lisp compiler
;;;
;;; $Source: /usr/cvs/lelisp/llib/llcp.ll,v $
;;; $Date: 2016/05/21 10:36:05 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------
 
(unless (>= (version) 15.2)
        (error 'load 'erricf 'llcp))
 
(defvar #:sys-package:colon 'llcp)

(add-feature 'compiler)

;;; This is not the production conpiler COMPLICE.

;;; LLCP: compiles one or several Le-Lisp funtions in a list of LLM3
;;; instructions which will be loaded by a specific loader depending of
;;; the target machine. It can also compiles the content of a file or all
;;; the functions present in memory.

;;; LLCP supposes loaded:
;;; - a loader/assembler LAPxxx
;;; - the files of the compiler macros: ../llib/cpmac.ll
;;; - the standard optimizer: ../llib/peephole.ll

;;; LLCP is minimal, mono-pass with few backtracks and totally
;;; compatible (except in the #:compiler:open-p mode) with the
;;; interpreter.  All bindings are dynamic.


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Declarations
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;
;;; External Global Variables
;;;

;;; #:compiler:open-p : (see the following section)

(defvar #:compiler:open-p t)
 
;;;
;;; Metering Global Variables
;;;

;;; When :stat-flag is set, LLCP prints a lot of statistics.

(unless (boundp ':stat-flag)
        (defvar :stat-flag ()))

#+:stat-flag (defvar :stat-exp         0.)
#+:stat-flag (defvar :stat-exp0        0.)
#+:stat-flag (defvar :stat-exp1        0.)
#+:stat-flag (defvar :stat-expif       0.)
#+:stat-flag (defvar :stat-expsel      0.)
#+:stat-flag (defvar :stat-expoa       0.)
#+:stat-flag (defvar :stat-expwu       0.)
#+:stat-flag (defvar :stat-exprep      0.)
#+:stat-flag (defvar :stat-expp1       0.)
#+:stat-flag (defvar :stat-exppr       0.)
#+:stat-flag (defvar :stat-expsq       0.)
#+:stat-flag (defvar :stat-expnx       0.)
#+:stat-flag (defvar :stat-expfa1      0.)
#+:stat-flag (defvar :stat-open        0.)
#+:stat-flag (defvar :stat-macex       0.)
#+:stat-flag (defvar :stat-open0       0.)
#+:stat-flag (defvar :stat-open1       0.)
#+:stat-flag (defvar :stat-open2       0.)
#+:stat-flag (defvar :stat-open3       0.)
#+:stat-flag (defvar :stat-open31      0.)
#+:stat-flag (defvar :stat-open32      0.)
#+:stat-flag (defvar :stat-open4       0.)
#+:stat-flag (defvar :stat-open41      0.)
#+:stat-flag (defvar :stat-open42      0.)
#+:stat-flag (defvar :stat-open5       0.)
#+:stat-flag (defvar :stat-open51      0.)
#+:stat-flag (defvar :stat-open52      0.)
#+:stat-flag (defvar :stat-open6       0.)
#+:stat-flag (defvar :stat-open61      0.)
#+:stat-flag (defvar :stat-open62      0.)
#+:stat-flag (defvar :stat-subr        0.)
#+:stat-flag (defvar :stat-subr0       0.)
#+:stat-flag (defvar :stat-subr1       0.)
#+:stat-flag (defvar :stat-subr2       0.)
#+:stat-flag (defvar :stat-subr3       0.)
#+:stat-flag (defvar :stat-subrn       0.)
#+:stat-flag (defvar :stat-subrn0      0.)
#+:stat-flag (defvar :stat-subrn1      0.)
#+:stat-flag (defvar :stat-subrn2      0.)
#+:stat-flag (defvar :stat-subrn3      0.)
#+:stat-flag (defvar :stat-subrn4      0.)
#+:stat-flag (defvar :stat-subrf       0.)
#+:stat-flag (defvar :stat-subrp       0.)
#+:stat-flag (defvar :stat-exp-any     0.)
#+:stat-flag (defvar :stat-exp-any1    0.)
#+:stat-flag (defvar :stat-exp-any2    0.)
#+:stat-flag (defvar :stat-exp-2       0.)
#+:stat-flag (defvar :stat-exp-20      0.)
#+:stat-flag (defvar :stat-exp-21      0.)
#+:stat-flag (defvar :stat-exp-3       0.)
#+:stat-flag (defvar :stat-exp-30      0.)
#+:stat-flag (defvar :stat-exp-31      0.)
#+:stat-flag (defvar :stat-pred        0.)
#+:stat-flag (defvar :stat-pred1       0.)
#+:stat-flag (defvar :stat-pred2       0.)
#+:stat-flag (defvar :stat-pred3       0.)
#+:stat-flag (defvar :stat-pred4       0.)
#+:stat-flag (defvar :stat-pred5       0.)
#+:stat-flag (defvar :stat-pred6       0.)
#+:stat-flag (defvar :stat-pred7       0.)
#+:stat-flag (defvar :stat-pred8       0.)
#+:stat-flag (defvar :stat-predlist2   0.)
#+:stat-flag (defvar :stat-predlist3   0.)
#+:stat-flag (defvar :stat-predlist31  0.)
#+:stat-flag (defvar :stat-predlist32  0.)
#+:stat-flag (defvar :stat-diropreg    0.)
#+:stat-flag (defvar :stat-diropreg0   0.)
#+:stat-flag (defvar :stat-diropreg1   0.)
#+:stat-flag (defvar :stat-diropreg2   0.)
#+:stat-flag (defvar :stat-diropreg3   0.)
#+:stat-flag (defvar :stat-diropreg4   0.)
#+:stat-flag (defvar :stat-dirop       0.)
#+:stat-flag (defvar :stat-dirop-nil   0.)
#+:stat-flag (defvar :stat-dirop-a1    0.)
#+:stat-flag (defvar :stat-dirop-a2    0.)
#+:stat-flag (defvar :stat-dirop-a3    0.)
#+:stat-flag (defvar :stat-dirop-a4    0.)
#+:stat-flag (defvar :stat-dirop-t     0.)
#+:stat-flag (defvar :stat-dirop-symb  0.)
#+:stat-flag (defvar :stat-dirop-atom  0.)
#+:stat-flag (defvar :stat-dirop-cons  0.)
#+:stat-flag (defvar :stat-dirop-quote 0.)
#+:stat-flag (defvar :stat-dirop-cd    0.)
#+:stat-flag (defvar :stat-dirop-cd1   0.)
#+:stat-flag (defvar :stat-dirop-rate  0.)
#+:stat-flag (defvar :stat-diropordest 0.)
#+:stat-flag (defvar :stat-diroporany  0.)
#+:stat-flag (defvar :stat-diroporany1 0.)
#+:stat-flag (defvar :stat-diroporany2 0.)
#+:stat-flag (defvar :stat-diroporany3 0.)
#+:stat-flag (defvar :stat-diroporany4 0.)
#+:stat-flag (defun :stat-print ()
                  (print "Nb of EXP      " :stat-exp)
                  (print "    Nb of EXP0     " :stat-exp0)
                  (print "    Nb of EXP1     " :stat-exp1)
                  (print "    Nb of EXPIF    " :stat-expif)
                  (print "    Nb of EXPSEL   " :stat-expsel)
                  (print "    Nb of EXPOA    " :stat-expoa)
                  (print "    Nb of EXPWU    " :stat-expwu)
                  (print "    Nb of EXPREP   " :stat-exprep)
                  (print "    Nb of EXPP1    " :stat-expp1)
                  (print "    Nb of EXPPR    " :stat-exppr)
                  (print "    Nb of EXPSQ    " :stat-expsq)
                  (print "    Nb of EXPNX    " :stat-expnx)
                  (print "    Nb of EXPFA1   " :stat-expfa1)
                  (print "Nb of MACEXP   " :stat-macex)
                  (print "Nb of OPEN     " :stat-open)
                  (print "    Nb of OPEN0    " :stat-open0)
                  (print "    Nb of OPEN1    " :stat-open1)
                  (print "    Nb of OPEN2    " :stat-open2)
                  (print "    Nb of OPEN3    " :stat-open3)
                  (print "        Nb of OPEN31    " :stat-open31)
                  (print "        Nb of OPEN32    " :stat-open32)
                  (print "    Nb of OPEN4   " :stat-open4)
                  (print "        Nb of OPEN41    " :stat-open41)
                  (print "        Nb of OPEN42    " :stat-open42)
                  (print "    Nb of OPEN5    " :stat-open5)
                  (print "        Nb of OPEN51    " :stat-open51)
                  (print "        Nb of OPEN52    " :stat-open52)
                  (print "    Nb of OPEN6    " :stat-open6)
                  (print "        Nb of OPEN61    " :stat-open61)
                  (print "        Nb of OPEN62    " :stat-open62)
                  (print)
                  (print "Nb of SUBR     " :stat-subr)
                  (print "    Nb of SUBR0    " :stat-subr0)
                  (print "    Nb of SUBR1    " :stat-subr1)
                  (print "    Nb of SUBR2    " :stat-subr2)
                  (print "    Nb of SUBR3    " :stat-subr3)
                  (print "    Nb of SUBRN    " :stat-subrn)
                  (print "        Nb of SUBRN0    " :stat-subrn0)
                  (print "        Nb of SUBRN1    " :stat-subrn1)
                  (print "        Nb of SUBRN2    " :stat-subrn2)
                  (print "        Nb of SUBRN3    " :stat-subrn3)
                  (print "        Nb of SUBRN4    " :stat-subrn4)
                  (print "    Nb of SUBRF     " :stat-subrf)
                  (print "    Nb of PARANO    " :stat-subrp)
                  (print)
                  (print "Nb of EXP-ANY   " :stat-exp-any)
                  (print "    Nb of EXP-ANY1  " :stat-exp-any1)
                  (print "    Nb of EXP-ANY2  " :stat-exp-any2)
                  (print)
                  (print "Nb of EXP-2     " :stat-exp-2)
                  (print "    Nb of EXP-20    " :stat-exp-20)
                  (print "    Nb of EXP-21    " :stat-exp-21)
                  (print)
                  (print "Nb of EXP-3     " :stat-exp-3)
                  (print "    Nb of EXP-30    " :stat-exp-30)
                  (print "    Nb of EXP-31    " :stat-exp-31)
                  (print)
                  (print "Nb of PRED      " :stat-pred)
                  (print "    Nb of PRED1     " :stat-pred1)
                  (print "    Nb of PRED2     " :stat-pred2)
                  (print "    Nb of PRED3     " :stat-pred3)
                  (print "    Nb of PRED4     " :stat-pred4)
                  (print "    Nb of PRED5     " :stat-pred5)
                  (print "    Nb of PRED6     " :stat-pred6)
                  (print "    Nb of PRED7     " :stat-pred7)
                  (print "    Nb of PRED8     " :stat-pred8)
                  (print "    Nb of PREDLIST2 " :stat-predlist2)
                  (print "    Nb of PREDLIST3 " :stat-predlist3)
                  (print "          PREDLIST31         " :stat-predlist31)
                  (print "          PREDLIST32         " :stat-predlist32)
                  (print "Nb of DIROPREG  " :stat-diropreg)
                  (print "    Nb of DIROPREG0 " :stat-diropreg0)
                  (print "    Nb of DIROPREG1 " :stat-diropreg1)
                  (print "    Nb of DIROPREG2 " :stat-diropreg2)
                  (print "    Nb of DIROPREG3 " :stat-diropreg3)
                  (print "    Nb of DIROPREG4 " :stat-diropreg4)
                  (print "Nb of DIROP     " :stat-dirop)
                  (print "    Nb DIROP-NIL         " :stat-dirop-nil)
                  (print "    Nb DIROP-A1          " :stat-dirop-a1)
                  (print "    Nb DIROP-A2          " :stat-dirop-a2)
                  (print "    Nb DIROP-A3          " :stat-dirop-a3)
                  (print "    Nb DIROP-A4          " :stat-dirop-a4)
                  (print "    Nb DIROP-T           " :stat-dirop-t)
                  (print "    Nb DIROP-SYMB        " :stat-dirop-symb)
                  (print "    Nb DIROP-ATOM        " :stat-dirop-atom)
                  (print "    Nb DIROP-CONS        " :stat-dirop-cons)
                  (print "    Nb DIROP-QUOTE       " :stat-dirop-quote)
                  (print "    Nb DIROP-CD          " :stat-dirop-cd)
                  (print "        Nb DIROP-CD1         " :stat-dirop-cd1)
                  (print "    Nb DIROP-RATE        " :stat-dirop-rate)
                  (print "Nb of DIROPORDEST   " :stat-diropordest)
                  (print "Nb of DIROPORANY    " :stat-diroporany)
                  (print "    Nb of DIROPORANY1   " :stat-diroporany1)
                  (print "    Nb of DIROPORANY2   " :stat-diroporany2)
                  (print "    Nb of DIROPORANY3   " :stat-diroporany3)
                  (print "    Nb of DIROPORANY4   " :stat-diroporany4)
	      )


;;;
;;; Other Global Variables (for Complice :-))
;;;

(defvar :A1 ())
(defvar :A2 ())
(defvar :A3 ())
(defvar :A4 ())
(defvar :deep ())
(defvar :lex ())
(defvar :lap ())
(defvar #:ld:talkp ())

(defvar :list-commutp            ; list of commutative functions
        '(ADD MUL FADD FMUL LOGAND LOGOR LOGXOR
          EQ  EQUAL))

(defvar :list-subr-open '(       ; see the function :expsubr-open
        (IDENTITY   0     ())
        (CAR        1     CAR)
        (CDR        1     CDR)
        (VLENGTH    2     HGSIZE)
        (SLEN       2     HGSIZE)
        (ADD        3     PLUS)
        (SUB        3     DIFF)
        (MUL        3     TIMES)
        (DIV        3     QUO)
        (REM        3     REM)
        (FADD       3     FPLUS)
        (FSUB       3     FDIFF)
        (FMUL       3     FTIMES)
        (FDIV       3     FQUO)
        (LOGAND     3     LAND)
        (LOGOR      3     LOR)
        (LOGXOR     3     LXOR)
        (LOGSHIFT   3     LSHIFT)
        (VREF       4     HPXMOV)
        (SREF       4     HBXMOV)
        (RPLACA     5     CAR)
        (RPLACD     5     CDR)
        (VSET       6     HPMOVX)
        (SSET       6     HBMOVX)))


;;;
;;; Scepcific functions for Complice
;;;

(unless (featurep 'complice)
	;; don't break Complice
        (defmacro-open NEXTL (var1 . var2)
	  ;; it's a specia form for LLCP
	  ()))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Start the compiler
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defmessage :compiler
  (french  " se compile.")
  (english " is compiling."))

(defmessage :error
  (french "
;***** ERREUR INTERNE DU COMPILATEUR LLCP
;      veuillez envoyer ce message a` :
;      lelisp@ilog.fr
;      avec la fonction en cours de compilation.")
  (english "
;***** INTERNAL ERROR IN LLCP COMPILER:
;      Please send this message to:
;      lelisp@ilog.fr
;      with the current compiling function"))

(defmessage :rerror
  (french "
***** Erreur durant la compilation.
***** La forme a` compiler e'tait : ")
  (english "
***** Error during compilation.
***** The form to compile was:"))

(defmessage :rerror2
  (french  "***** dans la fonction : ")
  (english "***** in the function: "))

(defmessage :in
  (french  " dans ")
  (english " in "))

;;;
;;; Simple compilation functions
;;;

(df  dont-compile #:system:l
     ;; set the indicator "dont-compile" on the list of symbols
     (while #:system:l (putprop (nextl #:system:l) t 'dont-compile)))

(defmacro compile (:xrefnt . :i)
  ;; (compile foo t/nil t/nil t/nil)
  ;; the unevaluated form of the following function
  `(compiler ',:xrefnt ',(car :i) ',(cadr :i) ',(caddr :i)))
 
(defun compiler (:xrefnt . :l)
  ;; <:xrefnt>  list of functions to compile
  ;; <:l>       optionnal flags
  (let ((:all-p) (:talkp) (#:ld:talkp))
    ;; <:all-p>     list of functions which will be not compiled
    ;; <:talkp>     the compiler speaks al lot
    ;; <#:ld:talkp> the loader speaks a lot
    (when (consp :l) (setq :all-p (nextl :l)))
    (when (consp :l) (setq :talkp (nextl :l)))
    (when (consp :l) (setq #:ld:talkp (nextl :l)))
    ;;
    (:compileready)
    ;; the real compilation
    (while :xrefnt
      (when (or :talkp (debug))
	    (princn #/;)
	    (print (car :xrefnt)
		   (get-message ':compiler)))
	    (setq :l (:compiledef (nextl :xrefnt)))
	    (loader :l #:ld:talkp))
      (loader '((END))))
    :xrefnt)

(defun compilefiles (lfilesin fileout)
  ;; compiles the list of files <lfilesin> in the file <fileout>
  (let ((llist))
    (when (atom lfilesin)
	  (setq lfilesin (list lfilesin)))
    (mapc (lambda (f) 
	    (let ((#:sys-package:colon #:sys-package:colon))
	      (unless (probefile f)
		      (if (probefile (catenate f #:system:lelisp-extension))
			  (setq f (catenate f #:system:lelisp-extension))
			  (error 'compilefiles 'errfile f)))
	      (with ((inchan (openi f)))
                    (untilexit eof
			       ;; expand the read
			       (let ((l (#:compiler:macroexpand (read))))
				 #+:stat-flag (incr :stat-macex)
				 (eval l)
				 (when (consp l)
				       (:compilefile-intrf l)))))))
	  lfilesin)
    (:compilerout fileout  (nreverse llist) () ())))

(defun :compilefile-intrf (l)
  ;; <l> is the expanded read form
  ;; add to "llist" the names of the functions to be compiled
  ;; or <l> unchanged if it's not of compilable form.
  (cond ((memq (car l) '(de defun df dm dmd defmacro))
	 (newl llist (cadr l)))
	((and (eq (car l) 'setfn) (consp (cadr l)) (eq (caadr l) 'quote))
	 (newl llist (cadadr l)))
	((eq (car l) 'progn)
	 (mapc ':compilefile-intrf (cdr l)))
	(t (newl llist l))))

(defun :compilerout (:filout :xrefnt :all-p :talkp)
  ;; <:xrefnt> list of functions (or expressions) to be compiled
  ;; <:all-p>  list of functions which will not be compiled.
  (setq :talkp ())
  (:compileready)
  (let ((#:system:print-for-read t))
    (with ((obase 10)
	   (printlevel 1000)
	   (printlength 30000))
	  (output :filout)
	  ;; the real compilation
	  (let ((:xrefnt :xrefnt))
	    (while :xrefnt
	      (let ((f (nextl :xrefnt)))
		;; nextl before the compilation!
		(if (null (symbolp f))
		    (print f)
		  (print `(loader ',(:compiledef f) ()))))))
	  (print '(loader '((end))))
	  (output ()))))

(defun :compileready ()
  ;; prepares the variables and the flags to compile
  ;; the list of functions :xrefnt
  (when (and :xrefnt (symbolp :xrefnt)) 
	(setq :xrefnt (list :xrefnt)))
  ;; functions which will not be compiled
  (when (consp :all-p)
	(mapc (lambda (x) (putprop x t 'dont-compile)) :all-p))
  ;; 1rst flags
  (let ((:l :xrefnt))
    (while :l
      (if (symbolp (car :l))
	  (if (:compilindic (car :l))
	      (nextl :l)
	      (setq :xrefnt (delq (nextl :l) :xrefnt)))
	  (nextl :l)))))

(defun compile-all-in-core i
  ;; compiles ALL the OBLIST
  ;;
  ;; First the EXPR/FEXPR (if some macros use them)
  (let ((i1 (car i)) (i2 (cadr i)))
    (compiler (maploblist (lambda (x)
			    (remprop x '#:system:loaded-from-file)
			    (and (null (getprop x 'dont-compile))
				 (memq (or (car (getprop x 'resetfn))
					   (typefn x))
				       '(EXPR FEXPR)))))
              t
              i1
              i2)
    ;; Followed by all the macros (without risk)
    (compiler (maploblist (lambda (x)
			    (remprop x '#:system:loaded-from-file)
			    (and (null (getprop x 'dont-compile))
				 (memq (or (car (getprop x 'resetfn))
					   (typefn x))
				       '(MACRO DMACRO)))))
              t
              i1
              i2)))
 
(defun :compilindic (:fnt)
  ;; set all the flgas for the function <:fnt> :
  ;;       :fval     (acceded by :getfval)
  ;;       :ftype    (acceded by :getftype/:setftype)
  ;; which is not compiled.
  ;; returns () if the function can't be compiled,
  ;; and T if it's a EXPR/FEXPR/MACRO/DMACRO which can be compiled.
  (if (getprop :fnt 'resetfn)
      (let (((typefn . valfn) (getprop :fnt 'resetfn)))
	(remprop :fnt 'resetfn)
	(:compilindicaux :fnt typefn valfn))
      (:compilindicaux :fnt (typefn :fnt) (valfn :fnt))))

(defun :compilindicaux (:fnt typefn valfn)
  (putprop :fnt valfn ':fval)
  (cond ((eq typefn 'EXPR)
	 (let ((larg (car valfn)))
	   (cond
	    ((null larg)
	     (:setftype :fnt 'SUBR0))
	    ((symbolp larg)
	     (:setftype :fnt 'NSUBR))
	    ((and (null (cdr larg)) (variablep (car larg)))
	     (:setftype :fnt 'SUBR1))
	    ((and (consp (cdr larg)) (null (cddr larg))
		  (variablep (car larg)) 
		  (variablep (cadr larg)))
	     (:setftype :fnt 'SUBR2))
	    ((and (consp (cdr larg)) (consp (cddr larg))
		  (null (cdddr larg)) (variablep (car larg))
		  (variablep (cadr larg))
		  (variablep (caddr larg)))
	     (:setftype :fnt 'SUBR3))
	    (T (:setftype :fnt 'NSUBR)) )))
	((eq (typefn :fnt) 'FEXPR)
	 (:setftype :fnt 'FSUBR))
	((eq (typefn :fnt) 'MACRO)
	 (:setftype :fnt 'MSUBR))
	((eq (typefn :fnt) 'DMACRO)
	 (:setftype :fnt 'DMSUBR))
	(t (:warning ":COMPILINDIC" "function of type" (typefn :fnt))
	   ())))
 
(defun :compiledef (sym)
  ;; compiles and load the function named <sym>
  (let ((fval (:getfval sym))    ; the fval to be compiled.
	(aux1)                   ; global variable of the code generator
	(aux2)                   ; global variable of the code generator
	(aux3))                  ; global variable of the code generator
    (selectq (:getftype sym)
	    (SUBR0 (:compilefnt sym (car fval) (cdr fval)
		     `((FENTRY ,sym SUBR0)
		       (MOV (@ ,sym) A4)
                       (JCALL :CBIND0))
		     () () () () ))
            (SUBR1 (:compilefnt sym (car fval) (cdr fval)
                     `((FENTRY ,sym SUBR1)
                       (MOV (@ ,sym) A4)
                       (MOV ',(car fval) A3)
                       (JCALL :CBIND1))
                     (caar fval) () () () ))
            (SUBR2 (:compilefnt sym (car fval) (cdr fval)
                     `((FENTRY ,sym SUBR2)
                       (MOV (@ ,sym) A4)
                       (MOV ',(car fval) A3)
                       (JCALL :CBIND2))
                      (caar fval) (cadar fval) () () ))
            (SUBR3 (:compilefnt sym (car fval) (cdr fval)
                     `((FENTRY ,sym SUBR3)
                       (PUSH (@ ,sym))
                       (MOV ',(car fval) A4)
                       (JCALL :CBIND3))
                      (caar fval) 
                      (cadar fval) 
                      (caddar fval) () ))
            (NSUBR (:compilefnt sym (car fval) (cdr fval)
                     `((FENTRY ,sym NSUBR)
                       (MOV (@ ,sym) A2)
                       (MOV ',(car fval) A3)
                       (JCALL :CBINDN))
                      () () () ()))
            ((FSUBR MSUBR DMSUBR)
                  (:compilefnt sym (car fval) (cdr fval)
                     `((FENTRY ,sym ,(:getftype sym))
                       (MOV (@ ,sym) A2)
                       (MOV ',(car fval) A3)
                       (JCALL :CBINDS))
                      () () () () ))
            (t (:error (list ":COMPILEFNT " sym 
                             " type " (:getftype sym)))))))

(defun :compilefnt (:fnt :larg l :headlap :A1 :A2 :A3 :A4)
  ;; main compiling function, returns a LAP list.
  ;; <:fnt>       : the name of the function
  ;; <:larg>      : the parameter list
  ;; <l>          : the body to compile
  ;; <:headlap>   : the head of the LAP list
  ;; <:A1>        : the current content of A1
  ;; <:A2>        : the current content of A2
  ;; <:A3>        : the current content of A3
  ;; <:A4>        : the current content of A4
  (let ((:deep 0)          ; current deep stack
	(:lap ())          ; reversed list of instructions
	(:lex ())          ; lexical compilation environment
	(:gencount 1000))  ; label generator
    (when :talkp (pprint (mcons 'de :fnt :larg l)))
    (:progn-last l 'A1 ())
    (setq :lap (nreverse (#:compiler:peephole :lap)))
    (setq :lap (append :headlap :lap))
    (when (and :talkp (not #:ld:talkp))
	  (terpri)
	  (pprint :lap))
    (when (neq :deep 0)
	  (:error "DEEP"))
    :lap))
 

;;;
;;; Compiler Errors
;;;
 
;;; There are 3 kinds of errors:
;;;  - :ERROR   fatal errors. Nothing to do except to fix the compiler
;;;  - :RERROR  internal errors while calling interbally EVAL. Nobody
;;;		knows what to compile.
;;;  - :WARNING	small pb: the generated code is not guaranted.
;;;		This eror occurs in DEBUG mode.


;;; the name of the current function

(defvar :fnt ())

(defun :error (f . lmsg)
  ;; :ERROR
  (with ((outchan ()))
	(when (debug)
	      (print)
	      (print (get-message ':error))
	      (print)
	      (print ";      error type             " f)            
	      (print ";      bag arguments          " lmsg)
	      (print ";      in compiling           " :fnt)
	      (print ";      contents of registers  " 
		     (list :A1 :A2 :A3 :A4))
	      (print ";      stack state            " :deep)
	      (print ";      lexical environment    " :lex)
	      (print ";      end of instructions    " 
		     (reverse (firstn 20 :lap))))))
 
(defun  :rerror (l)
  ;; :RERROR (e.g. during a macro-expansion)
  ;; returns () to continue the process.
  (with ((outchan ()))
	(print (get-message ':rerror) l)
	(print (get-message ':rerror2) :fnt)
	()))

(defun  #:compiler:macro-expand-error (l)
  ;; specific :RERROR during macro-expansion
  (:rerror l))

(defun  :warning (f msg arg)
  ;; :WARNING (if DEBUG mode)
  (with ((outchan ()))
	(when (debug)
	      (princn #/;)
	      (print f (get-message ':in) :fnt " : " msg " : " arg))))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Code Generation Functions
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


;;;
;;; Load instructions in the list :lap
;;;
 
;;; All the generated code is stored in the variable :lap,
;;; bound in the function :compilefnt.

;;; Because of the use of the "peephole" optimiser,
;;; it's impossible to generate the instructions:
;;;         JCALL/CALL/ADJSTK
;;; whith constant and operand of the form:
;;;         etiq
;;;         (@ etiq)
;;; because the peephole can physically modify them.

(defun  :add-code (l)
  ;; add to the list <:lap> the instruction <l>
  (newl :lap l))
 
(defun  :call (x)
  ;; add a CALL
  (newl :lap (list 'JCALL x)))

(defun  :mov (source dest)
  ;; add a MOV
  (newl :lap (list 'MOV source dest)))

(defun  :movq (source dest)
  ;; add a quoted MOV
  (newl :lap (list 'MOV (kwote source) dest)))
 
;;;
;;; Management of the content of registers
;;;
 
;;; The content of registers is stored in the variables :A1, :A2, :A3, :A4.


(defun  :cr (reg val)
  ;; update the content of a register
  (selectq reg
           (A1 (setq :A1 val))
           (A2 (setq :A2 val))
           (A3 (setq :A3 val))
           (A4 (setq :A4 val))
           (t (:error ":CR" reg val))))
 
(defun  :cr-all-nil ()
  ;; reset (to ()) the content of all the registers.
  (setq :A1 () :A2 () :A3 () :A4 ()))
 

;;; a est-il un element de l'arbre l ??
(defun :sup-eq (l a)
  (if (atomp l)
      (eq a l)
    (if (memq a l)
	t
      (cond ((listp (car l))
	     (or (:sup-eq a (car l))
		 (:sup-eq a (cdr l))))
	    (t
	      (:sup-eq a (cdr l)))))))

(defun  :cr-forget (symb)
  ;; forget the content of a register is it contains
  ;; the symbol <symb> (after a SETQ, NEXTL ...)
  (when (:sup-eq :A1 symb) (setq :A1 ()))
  (when (:sup-eq :A2 symb) (setq :A2 ()))
  (when (:sup-eq :A3 symb) (setq :A3 ()))
  (when (:sup-eq :A4 symb) (setq :A4 ())))

(defun  :cr-forget-cons ()
  ;; forget the content of all the registers which contain
  ;; a list (CAR/CDR x) (after a RPLACA/RPLACD)
  (when (consp :A1) (setq :A1 ()))
  (when (consp :A2) (setq :A2 ()))
  (when (consp :A3) (setq :A3 ()))
  (when (consp :A4) (setq :A4 ())))

(defun  :cr-list ()
  ;; retourns the list of the contents of all the registers,
  ;; ((a1 . a2) . (a3 . a4))
  (cons (cons :A1 :A2) (cons :A3 :A4)))
 
(defun  :cr-intersect-list (l)
  ;; returns the intersection of the content of the registers and
  ;; the old contents <l>
  (while (consp l)
    (:cr-intersect (nextl l))))

(defun  :cr-intersect (l)
  ;; update the content of registers with the old content <l>
  (when (and :A1 (nequal (caar l) :A1)) (setq :A1 ()))
  (when (and :A2 (nequal (cdar l) :A2)) (setq :A2 ()))
  (when (and :A3 (nequal (cadr l) :A3)) (setq :A3 ()))
  (when (and :A4 (nequal (cddr l) :A4)) (setq :A4 ())))
 
(defun  :cr-any-reg (reg)
  ;; retourns a free register (> than reg). In the worst case
  ;; we use A4.
  (selectq reg
	   (A1 (if (null :A2) 'A2 (if (null :A3) 'A3 'A4)))
	   (A2 (if (null :A3) 'A3 'A4))
	   (t 'A4))))

;;;
;;; Stack Management
;;;
 
;;; The compiler manages the number of stacked objects since the start
;;; of the function (:size).

(defmacro :return ()
  ;; add a RETURN
  `(:add-code '(RETURN)))

(defun  :push (oper)
  ;; PUSH and object
  (:add-code (list 'PUSH oper))
  (setq :deep (add1 :deep)))
 
(defun  :pushq (oper)
  ;; PUSH a quoted object
  (:add-code (list 'PUSH (kwote oper)))
  (setq :deep (add1 :deep)))

(defun  :pop (oper)
  ;; POP an object
  (when (le :deep 0)
	(:error ":POP" oper))
  (:add-code (list 'POP oper))
  (setq :deep (sub1 :deep)))
 
;;;
;;; Specific FTYPEs management
;;;
 
(defmacro :setftype (sym val)
  `(putprop ,sym ,val ':ftype))
 
(defmacro :getftype (sym)
  `(getprop ,sym ':ftype))
 
(defmacro :getfval (sym)
  `(getprop ,sym ':fval))

;;;
;;; Operand types and local label management
;;;

(defun  :eqp (x)
  ;; something on which CABEQ is relevant
  (if (or (symbolp x) (fixp x))
      t
      ()))
 
(defun  :quotep (x)
  ;; self-evaluated object
  (if (or (and (atomp x) (not (symbolp x)))
	  (eq x T)
	  (and (consp x) (eq (car x) 'quote)))
      t
      ()))
 
(defmacro :genlab ()
  `(setq :gencount (add1 :gencount)))


;;;
;;; Code Generator
;;;
 
(defun :exp (l dest :effectp)
  ;; compiles the expression <l>
  ;; result in register <dest> (A1, A2, A3 ou A4)
  ;; :effectp = T if we compile for (side)effect only
  ;;
  #+:stat-flag (incr :stat-exp)
  ;;
  (cond
   ;;
   ;; each clause has to set up the content of registers (:A1 :A2 :A3 :A4)
   ;;
   ;; ALL the atoms
   ;;
   ((setq aux1 (:dirop l))
    #+:stat-flag (incr :stat-exp0)
    (if :effectp
	(:warning ":EXPU" "unused value" l)
        (when (neq aux1 dest)
	      (:mov aux1 dest))
	(:cr dest l)))
   ;;
   ;; the tragic case of non-symbolic functions
   ;; 
   ((not (symbolp (car l)))
    #+:stat-flag (incr :stat-exp1)
    (unless (eq dest 'A1) (exit not-in-A1))
    (if (and (consp (car l)) (eq (caar l) 'LAMBDA))
	(:app-lambda (cadar l) (cdr l) (cddar l))
        (:parano ':exp "fonction calculee" (car l) l)))
   ;;
   ;; The special forms (FSUBRS)
   ;;
   ((eq (car l) 'IF)
    ;; the unique conditionnal function (EN TO PAN).
    #+:stat-flag (incr :stat-expif)
    (let ((et1 (:genlab))       ; else label
	  (et2 (:genlab))       ; endif label
	  lcr                   ; registers after the "then"
	  deep)                 ; :deep after the "then"
      ;; compilation of the predicate
      (:pred (cadr l) () et1 dest)
      (let ((:A1 :A1)
	    (:A2 :A2)
	    (:A3 :A3) 
	    (:A4 :A4)
	    (:deep :deep))
	;; compilation of "then"
	(:exp (caddr l) dest :effectp)
	(:add-code `(BRA ,et2))
	(:add-code et1)
	(setq lcr (:cr-list) 
	      deep :deep))
      ;; compilation of "else"
      (when (or (null :effectp) (cdddr l))
	    (:progn (cdddr l) dest :effectp))
      (:add-code et2)
      (when (neq :deep deep)
	    (:error 'if :deep deep))
      (:cr-intersect lcr)))
   ((eq (car l) 'SELECTQ)
    ;; le super-selector: uses a dedicated function.
    #+:stat-flag (incr :stat-expsel)
    (:selectq))
   ((memq (car l) '(AND OR))
    ;; control structure (not a predicate)
    #+:stat-flag (incr :stat-expoa)
    (let ((et1 (:genlab))
	  (type (eq (car l) 'AND)))
      (let ((l (cdr l))
	    lcr
	    (inst (list (if type 'BTNIL 'BFNIL) dest et1)))
	(while (consp (cdr l))
	  ;; at least 2 elements
	  (:exp (nextl l) dest ())
	  (:add-code inst)
	  (newl lcr (:cr-list)))
	(if (consp l)
	    ;; the last one
	    (:exp (car l) dest ())
	  ;; no arguments!
	  (:mov (if type ''T 'NIL) dest)
	  (:cr dest ()))
	(:cr-intersect-list lcr)
	(:add-code et1))))
   ((memq (car l) '(WHILE UNTIL))
    ;; simple loops: returned values are the same than the interpreter.
    #+:stat-flag (incr :stat-expwu)
    (let ((et1 (:genlab)) (et2 (:genlab)))
      (:add-code `(BRA ,et2))
      (:add-code et1)
      (:cr-all-nil)
      (:progn (cddr l) dest T)
      (:add-code et2)
      (:cr-all-nil)
      (cond ((eq (car l) 'WHILE)
	     (:pred (cadr l) t et1 dest)
	     (unless :effectp
		     (:mov 'NIL dest)
		     (:cr dest ())))
	    (t ; it's UNTIL
	     (if :effectp
		 (:pred (cadr l) () et1 dest)
	         (:exp (cadr l) dest ())
		 (:add-code `(BTNIL ,dest ,et1)))))
      (:cr-all-nil)))
   ((eq (car l) 'REPEAT)
    ;; the counter/decrement
    #+:stat-flag (incr :stat-exprep)
    (let ((et1 (:genlab)) (et2 (:genlab)))
      (:exp (cadr l) dest ())
      (:add-code `(BRA ,et2))
      (:add-code et1)
      (:push dest)
      (:cr-all-nil)
      (:progn (cddr l) dest T)
      (:pop dest)
      (:add-code et2)
      (:add-code `(SOBGEZ ,dest ,et1))
      (unless :effectp
	      ;; REPEAT retourns T by default
	      (:movq 'T dest))
      (:cr dest ())))
   ((eq (car l) 'PROG1)
    ;; the special form PROG1
    #+:stat-flag (incr :stat-expp1)
    (:expush (cadr l) dest)
    (:progn (cddr l) dest T)
    (:pop dest)
    (:cr dest ()))
   ((eq (car l) 'PROGN)
    ;; PROGN ;
    #+:stat-flag (incr :stat-exppr)
    (:progn (cdr l) dest :effectp))
   ((eq (car l) 'SETQ)
    ;; the multiple affectation
    #+:stat-flag (incr :stat-expsq)
    (if (or :effectp (cdddr l))
	;; not obliged to load "dest" with the value
	(progn (:mov (setq aux1 (:diropordest (caddr l) dest))
		     `(CVALQ ,(cadr l)))
	       ;; forget the value of this symbol
	       (:cr-forget (cadr l))
	       (when (and (symbolp aux1) (neq aux1 'nil))
		     (:cr aux1 (cadr l))))
      ;; obliged to load "dest" with the value
      (progn (:exp (caddr l) dest ())
	     (:mov dest `(CVALQ ,(cadr l)))
	     ;; forget the value of this symbol
	     (:cr-forget (cadr l))
	     (:cr dest (cadr l))))
    (when (cdddr l)
	  ;; multiple SETQ
	  (:exp (cons 'SETQ (cdddr l)) dest :effectp)))
   ((eq (car l) 'NEXTL)
    ;; It's is not a compiler macro inorder to avoid the use
    ;; of PROG1.
    #+:stat-flag (incr :stat-expnx)
    (:exp (if :effectp
	      `(SETQ ,@(when (consp (cddr l))
			     `(,(caddr l) (CAR ,(cadr l))))
		     ,(cadr l) (CDR ,(cadr l)))
	      `(PROG1 ,(if (consp (cddr l))
			   `(SETQ ,(caddr l) (CAR ,(cadr l)))
			   `(CAR ,(cadr l)))
		      (SETQ ,(cadr l) (CDR ,(cadr l)))))
	  dest
	  :effectp))
   ((eq (car l) 'COMMENT)
    (unless :effectp
	    (:movq (car l) dest)
	    (:cr dest ())))
   ((eq (car l) 'LAMBDA)
    ;; explicit lambda: (in the MAPs ...) waiting to find the type
    (let ((f (symbol (packagecell :fnt) 
		     (concat :fnt "-lambda-" (gensym)))))
      (setfn f 'EXPR (cdr l))
      (when (:compilindic f)
	    (newl :xrefnt f))
      (:movq f dest)
      (:cr dest ())))
   ;;
   ;; le pre-compiler ?
   ;;
   ((eq (car l) 'PRECOMPILE)
    (let ((l (caddr l)))
      (while (consp l) (:add-code (nextl l))))
    (eval (cadddr l))
    (let ((l (cddddr l)))
      (when l
	    (unless :effectp
		    (when (neq (car l) dest)
			  (:mov (car l) dest))
		    (:cr dest ())))))
   ;;
   ;; Try the macros
   ;;
   ((neq l (setq aux1 (#:compiler:macroexpand l)))
    #+:stat-flag (incr :stat-macex)
    (:exp aux1 dest :effectp))
   ;;
   ;; the open SUBRs
   ;;
   ((and #:compiler:open-p 
	 (setq aux1 (cassq (car l) :list-subr-open)))
    (:expsubr-open (cdr l) (car aux1) (cadr aux1)))
   ;;
   ((neq dest 'A1)
    ;; impossible if it's not A1
    (exit not-in-A1))
   ;;
   ;; hairy control functions (in A1) with a call to the
   ;; interpreter runtime et generation of activation block.
   ;;
   ((memq (car l) '(TAG EVTAG))
    ;; dynamic escapes
    #+:stat-flag (incr :stat-expfa1)
    (if (eq (car l) 'evtag)
	(:exp (cadr l) 'A1 ())
      (:movq (cadr l) 'A1)
      (:cr 'A1 ()))
    (:specforminter ':TAG 'TAG))
   ((eq (car l) 'EXIT)
    ;; return from an escape
    #+:stat-flag (incr :stat-expfa1)
    (:progn (cddr l) 'A1 () )
    (:movq (cadr l) 'A2)
    (:add-code '(JMP :EXIT))
    (:cr-all-nil))
   ((eq (car l) 'EVEXIT)
    ;; return of a computed escape
    #+:stat-flag (incr :stat-expfa1)
    (:expush (cadr l) 'A1)
    (:progn (cddr l) 'A1 () )
    (:pop 'A2)
    (:add-code '(JMP :EXIT))
    (:cr-all-nil))
   ((eq (car l) 'PROTECT)
    #+:stat-flag (incr :stat-expfa1)
    (let ((et1 (:genlab))
	  (et2 (:genlab))
	  (:deep :deep)
	  (:lex (cons 'PROTECT :lex)))
      (:push `(@ ,et2))
      (setq :deep (add :deep 2)) ; :PROT
      (:mov `(@ ,et1) 'A3)
      (:add-code (list 'JCALL ':PROT))
      (:cr-all-nil)
      (:pop 'A1)
      (:push 'A3)
      (:push 'A1)
      (:push 'A2)
      (:progn (cddr l) 'A1 T)
      (:add-code '(POP A2))
      (:add-code '(POP A1))
      (:return)
      (:add-code et1)
      (:cr-all-nil)
      (:exp (cadr l) 'A1 ())
      (:return)
      (:add-code et2)))
   ((eq (car l) 'LOCK)
    #+:stat-flag (incr :stat-expfa1)
    (:exp (cadr l) 'A1 ())
    (:specforminter ':LOCK 'LOCK))
   ((eq (car l) 'SCHEDULE)
					;; the scheduler
    #+:stat-flag (incr :stat-expfa1)
    (:exp (cadr l) 'A1 ())
    (:specforminter ':SCHEDULE 'SCHEDULE))
   ((eq (car l) 'BLOCK)
    ;;
    #+:stat-flag (incr :stat-expfa1)
    (:movq (cadr l) 'A1)
    (:specforminter ':BLOCK 'BLOCK))
   ((eq (car l) 'RETURN-FROM)
    ;; return from a block
    #+:stat-flag (incr :stat-expfa1)
    (when (not (memq 'BLOCK :lex))
	  (:warning ":RETURN-FROM" "not in a lexical scope" l))
    (:progn (cddr l) 'A1 ())
    (:movq (cadr l) 'A2)
    (:add-code '(JMP :RETFROM))
    (:cr-all-nil))
   ((eq (car l) 'TAGBODY)
    ;; manage the labels
    #+:stat-flag (incr :stat-expfa1)
    (let ((:deep :deep)         ; after the TAGBODY
	  (et (:genlab))        ; label of the end of TAGBODY
	  al)                   ; A-list of local labels
      (:push `(@ ,et))
      ;; create the activation block
      (let ((l (cdr l)) (n 0) et)
	(while (consp l)
	  (when (atom (car l))
		(setq et (:genlab))
		(newl al (cons (car l) et))
		(:push `(@ ,et))
		(:pushq (car l))
		(setq n (add1 n)))
	  (setq l (cdr l)))
	(:pushq n))
      (:add-code (list 'JCALL ':TAGBODY))
      ;; compilation of the body
      (let ((:lex (cons (list 'TAGBODY :deep al) :lex))
	    (l (cdr l)))
	(while (consp l)
	  (if (consp (car l))
	      (:exp (car l) dest T)
	      (:add-code (cassq (car l) al))
	      (:cr-all-nil))
	  (setq l (cdr l)))
	(if :effectp
	    ;; to avoid the removal of (PUSH @ ret) by the peephole
	    (:add-code '(EVAL 'PEEPHOLE))
	    ;; the returned value is always ()
	    (:mov 'NIL dest))
	(:cr-all-nil)
	;; unbind the activation block
	(:return)
	(:add-code et))))
   ((eq (car l) 'GO)
    ;; branch to a TAGBODY label
    #+:stat-flag (incr :stat-expfa1)
    (cond ((and (consp (car :lex))
		(eq (caar :lex) 'TAGBODY)
		(assq (cadr l) (caddar :lex)))
	   (when (neq (sub :deep (cadar :lex)) 0)
		 (:add-code
		  `(ADJSTK (kwote (sub :deep (cadar :lex)))))
		 (setq :deep (cadar :lex)))
	   (:add-code `(BRA ,(cassq (cadr l) (caddar :lex)))))
	  (t 		;  not enough visible
	   (:movq (cadr l) 'A1)
	   (:cr-all-nil)
	   (:add-code '(JMP :GO))))
    (:cr-all-nil))
   (T 
    ;; standard SUBR calls
    (:expsubr)))
  ))

;;;
;;; SUBR generation
;;;

(defun :expsubr-open (larg type inst)
  ;; compile "open" the argument list "larg"
  ;; using the machine instruction "inst"
  ;; the coded type is in  :list-subr-open
  #+:stat-flag (incr :stat-open)
  (selectq type
	 (0 ; SUBR1 LLM3-0 : IDENTITY
	  #+:stat-flag (incr :stat-open0)
	  (:exp (car larg) dest :effectp))
	 (1 ; SUBR1 LLM3-1 :CAR CDR
	  #+:stat-flag (incr :stat-open1)
	  (let ((op (:diropreg (car larg))))
	    (when (null op)
		  (setq op (:exp-any (car larg) dest ())))
	    ;; op contains a register (for the CAR/CDR operand)
	    (:mov (list inst op) dest)
	    (:cr dest
		 ;; dest is not loaded if the form is:
		 ;;  (cxr s), (cxr (cxr s)) or (cxr (cxr (cxr s)))
		 (if (or (symbolp (car larg))
			 (and (consp (car larg))
			      (memq (caar larg) '(CAR CDR))
			      (or (symbolp (cadar larg))
				  (and (consp (cadar larg))
				       (memq (caadar larg) '(CAR CDR))
				       (symbolp (cadr (cadar larg)))))))
		     (list inst (car larg))
		     ()))))
	 (2 ; SUBR1 LLM3-2 :VLENGTH SLEN
	  #+:stat-flag (incr :stat-open2)
	  (:add-code (list inst (:diroporany (car larg) dest) dest))
	  (:cr dest ()))
	 (3 ; SUBR2 LLM3-2 : ADD SUB MUL DIV REM ...
	  #+:stat-flag (incr :stat-open3)
	  (cond ((atom (cadr larg))
		 #+:stat-flag (incr :stat-open31)
		 ;; simple case: don't use :dirop
		 (:exp (car larg) dest ())
		 (:add-code (list inst (:dirop (cadr larg)) dest))
		 (:cr dest ()))
		((neq dest 'A1) (exit not-in-A1))
		(t #+:stat-flag (incr :stat-open32)
		   ;; dest = A1 before calling :exp-2.
		   (:exp-2 (car l) (car larg) (cadr larg))
		   (:add-code `(,inst A2 A1))
		   (:cr dest ()))))
	 (4 ; SUBR2 LLM3-3 : VREF SREF
	  #+:stat-flag (incr :stat-open4)
	  (cond ((and (setq aux1 (:dirop (car larg)))
		      (setq aux2 (:dirop (cadr larg))))
		 #+:stat-flag (incr :stat-open41)
		 (:add-code (list inst aux1 aux2 dest))
		 (:cr dest ()))
		((neq dest 'A1) (exit not-in-A1))
		(t #+:stat-flag (incr :stat-open42)
		   ;; dest = A1 before calling :exp-2.
		   (:exp-2 (car l) (car larg) (cadr larg))
		   (:add-code `(,inst A1 A2 A1))
		   (:cr dest ()))))
	 (5 ; SUBR2 LLM3-2 special : RPLACA RPLACD
	  #+:stat-flag (incr :stat-open5)
	  (cond ((and (symbolp (setq aux1 (:dirop (car larg))))
		      aux1          ; has not to be ()
		      (setq aux2 (:dirop (cadr larg))))
		 #+:stat-flag (incr :stat-open51)
		 (:mov aux2 (list inst aux1))
		 (unless :effectp
			 (when (neq aux1 dest)
			       ;; returns the modified list
			       (:mov aux1 dest)
			       (:cr dest aux1))))
		((neq dest 'A1) (exit not-in-A1))
		(t #+:stat-flag (incr :stat-open52)
		   ;; dest = A1 before calling :exp-2.
		   (:exp-2 (car l) (car larg) (cadr larg))
		   (:mov 'A2 (list inst 'A1))))
	  ;; to desactivate the (CAR ..) in the regsiters :Ax
	  (:cr-forget-cons))
	 (6 ; SUBR3 LLM3-3 : VSET SSET
	  #+:stat-flag (incr :stat-open6)
	  (cond ((and (setq aux1 (:dirop (car larg)))
		      (setq aux2 (:dirop (cadr larg)))
		      (setq aux3 (:dirop (caddr larg))))
		 #+:stat-flag (incr :stat-open61)
		 (:add-code (list inst aux3 aux1 aux2))
		 (when (and (symbolp aux3) (neq aux3 'nil))
		       (:cr aux3 ()))
		 (unless :effectp
			 (when (neq aux3 dest)
			       (:mov aux3 dest)
			       (:cr dest ()))))
		((neq dest 'A1) (exit not-in-A1))
		(t #+:stat-flag (incr :stat-open62)
		   ;; dest = A1 before calling :exp-3.
		   (:exp-3 (car larg) (cadr larg) (caddr larg))
		   (:add-code `(,inst A3 A1 A2))
		   (unless :effectp
			   (:mov 'A3 'A1) 
			   (:cr 'A1 :A3)))))
	 (t (:error ":EXPSUBR-OPEN" (list l inst type)))))

    
(defun :expsubr ()
  ;; standard SUBR functions
  ;; Use the same context than :exp
  ;; dest = A1 before calling :exp-2 or 3.
  #+:stat-flag (incr :stat-subr)
  (selectq (or (:getftype (car l)) (typefn (car l)))
	   (SUBR0
	    #+:stat-flag (incr :stat-subr0)
	    (:call (car l)))
	   (SUBR1
	    #+:stat-flag (incr :stat-subr1)
	    (:exp (cadr l) 'a1 ())
	    (:call (car l)))
	   (SUBR2
	    #+:stat-flag (incr :stat-subr2)
	    (:exp-2 (car l) (cadr l) (caddr l))
	    (:call (car l)))
	   (SUBR3
	    #+:stat-flag (incr :stat-subr3)
	    (:exp-3 (cadr l) (caddr l) (cadddr l))
	    (:call (car l)))
	   (NSUBR
	    #+:stat-flag (incr :stat-subrn)
	    ;; to have an idea of the number of arguments
	    #+:stat-flag (if (= (length l) 1) (incr :stat-subrn0))
	    #+:stat-flag (if (= (length l) 2) (incr :stat-subrn1))
	    #+:stat-flag (if (= (length l) 3) (incr :stat-subrn2))
	    #+:stat-flag (if (= (length l) 4) (incr :stat-subrn3))
	    #+:stat-flag (if (= (length l) 5) (incr :stat-subrn4))
	    (if (consp (cdr l))
		;; at least 1 argument
		(let ((narg 0)
		      (:deep :deep)
		      (fnt (car l))
		      (larg (cdr l))
		      (et (:genlab)))
		  (:push `(@ ,et))
		  (while (consp larg)
		    (:expush (nextl larg) 'A1)
		    (setq narg (add1 narg)))
		  (:movq narg 'A4)
		  (:add-code `(JMP ,fnt))
		  (:add-code et))
	      ;; no arguments (more simple)
	      (:add-code '(MOV '0 A4))
	      (:call (car l))))
	   (FSUBR
	    #+:stat-flag (incr :stat-subrf)
	    (:movq (cdr l) 'A1)
	    (:warning ":EXPSUBR" "FSUBR call" (car l))
	    (:call (car l)))
	   (T ; unknow type
	    #+:stat-flag (incr :stat-subrp)
	    (if (numberp  l)
		;; tragedy for the TCONS
		(:movq l 'A1)
	      (:parano ':expsubr "unknow function" (car l) l))))
  (:cr-all-nil))
 
(defun  :exp-any (l dest :effectp)
  ;; compile <l> in any register
  ;; always returns the name of a register
  #+:stat-flag (incr :stat-exp-any)
  (let ((destany (:cr-any-reg dest)))
    (or (:backtrack (progn (:exp l destany :effectp)
			   #+:stat-flag (incr :stat-exp-any1)
			   destany)
		    ())
	(progn (:exp l dest :effectp)
	       #+:stat-flag (incr :stat-exp-any2)
	       dest))))

(defun :exp-2 (fnt arg1 arg2)
  ;; compile the 2 arguments 'arg1' et 'arg2' of the function 'fnt'
  ;; respectively in A1 and A2.
  ;; dest = always A1.
  #+:stat-flag (incr :stat-exp-2)
  (:backtrack (progn #+:stat-flag (incr :stat-exp-20)
		     (:exp arg1 'A1 ())
		     (:exp arg2 'A2 ()))
	      (progn #+:stat-flag (incr :stat-exp-21)
		     (:expush arg1 'A1)
		     (:exp arg2 'A1 ())
		     (if (memq fnt :list-commutp)
			 (progn (:pop 'A2)
				(:cr 'A2 ()))
		         (progn (:mov 'A1 'A2)
				(:cr 'A2 :A1)
				(:pop 'A1)
				(:cr 'A1 ()))))))
 
(defun :exp-3 (arg1 arg2 arg3)
  ;; compile the 3 arguments 'arg1' 'arg2' 'arg3'
  ;; respectively in A1, A2 and A3.
  ;; dest = always A1.
  #+:stat-flag (incr :stat-exp-3)
  (:backtrack ; A1 A2 A3 are good
   (progn #+:stat-flag (incr :stat-exp-30)
	  (:exp arg1 'A1 ())
	  (:exp arg2 'A2 ())
	  (:exp arg3 'A3 ()))
   ;; wrong
   (progn #+:stat-flag (incr :stat-exp-31)
	  (:expush arg1 'A1)
	  (:expush arg2 'A1)
	  (:exp arg3 'A1 ())
	  (:mov 'A1 'A3)
	  (:cr 'A3 :A1)
	  (:pop 'A2)
	  (:cr 'A2 ())
	  (:pop 'A1)
	  (:cr 'A1 ()))))
 
;;;
;;; Other generation function
;;; 
 
(defun  :specforminter (adr lex)
  ;; call the runtime routine <adr>, update the lexical environment
  ;; with <lex>, and compile a regular body
  (let ((:lex (cons lex :lex))       ; new lexical env
	(:deep :deep)                ; save the deep of the stack
	(et (:genlab)))              ; local label
    (:push `(@ ,et))
    (:add-code `(JCALL ,adr))
    (:cr-all-nil)
    (:progn-last (cddr l) 'A1 :effectp)
    (:cr-all-nil)
    (:add-code et)))

(defun :parano (call msg arg l)
  ;; when the compiler is really affraid, it has to call the interpreter.
  (if (and :all-p
	   (symbolp (car l))
	   (null (getprop (car l) 'dont-compile))
	   (memq (typefn (car l)) '(EXPR FEXPR MACRO DMACRO)))
      ;; add to the external list
      (progn
	(when (:compilindic (car l))
	      (newl :xrefnt (car l)))
	(:exp l dest :effectp))
      (progn
	(unless (and (symbolp (car l))
		     (getprop (car l) 'dont-compile))
		(:warning call (catenate "PARANO : " msg) arg))
	(let ((et (:genlab))
	      (:deep :deep))
	  (:push `(@ ,et))
	  (:pushq l)
	  (:movq 1 'A4)
	  (:add-code '(JMP EVAL))
	  (:add-code et))))
  (:cr-all-nil))
                 
(defun :app-lambda (lvar lval body)
  ;; compile a call to LAMBDA (type LET)
  ;; <lvar> is a tree of variables
  ;; <lval> is a list of unevaluated values
  ;; <body> the body to execute after
  ;; build an activation block ready for :CBINDL
  (let ((:deep :deep)
	(:lex (cons 'lambda :lex))
	(narg 0)
	(et1 (:genlab))
	(et2 (:genlab)))
    (:add-code et1)
    (:push `(@ ,et2))
    (while (consp lval)
      (:expush (nextl lval) 'A1)
      (setq narg (add1 narg)))
    (:movq narg 'A4)
    (:mov `(@ ,et1) 'A2)
    (:movq lvar 'A3)
    (:add-code (list 'JCALL ':CBINDL))
    (:cr-all-nil)
    (:progn-last body 'A1 ())
    (:cr-all-nil)
    (:add-code et2)))
 
(defun :selectq ()
  ;; the SELECTQ specialist (same environment than :exp)
  (let ((selector (cadr l))       ; the selector
	(etfin (:genlab))         ; label of the end of the SELECTQ
	(indict ())               ; if a T is present
	et1                       ; label of the next clause
	lcr)                      ; contain of registers after each clause
    (:exp selector dest ())
    (setq l (cddr l)) 
    (while (consp l)
      (tag :selectq
	   (setq et1 (:genlab))    ; next clause
	   (cond
	    ((atom (car l))       ; we need a list
	     (:warning 'selectq "bad clause" l)
	     (exit :selectq))
	    ((eq (caar l) 't)
	     (setq indict t))    ; the 'otherwise' 
	    ((:eqp (caar l))
	     ;; simple test
	     (:add-code `(CABNE ,dest ,(kwote (caar l)) ,et1)))
	    ((and (consp (caar l)) (every ':eqp (caar l)))
	     ;; open MEMQ
	     (let ((l (caar l)) (et2 (:genlab)))
	       (while (consp (cdr l))
		 (:add-code
		  `(CABEQ ,dest ,(kwote (nextl l)) ,et2)))
	       (:add-code `(CABNE ,dest ,(kwote (car l)) ,et1))
	       (:add-code et2)))
	    (t ; case EQUAL/MEMBER
	     (unless (eq dest 'A1) (exit not-in-A1))
	     (:push 'A1) 
	     (:movq (caar l) 'A2)
	     (:add-code `(JCALL ,(if (atom (caar l)) 'EQUAL 'MEMBER)))
	     (:mov 'A1 'A2)
	     (:pop 'A1)
	     (:cr-all-nil)
	     (:add-code `(BTNIL A2 ,et1))))
	   ;; compilation of the body of a clause
           (let ((:A1 :A1)
                 (:A2 :A2) 
                 (:A3 :A3)
                 (:A4 :A4))
	     (:progn (cdar l) dest :effectp)
	     (when (or (cdr l) (null (or indict :effectp)))
		   (:add-code `(BRA ,etfin)))
	     (newl lcr (:cr-list))))
      (setq l (cdr l))
      (:add-code et1))
    (:cr-intersect-list lcr)
    (unless (or indict :effectp)
	    ;; has to return (0 at the end of the clauses
	    (:mov 'NIL dest)
	    (:cr dest ()))
    (:add-code etfin))))
 
(defun  :expush (l dest)
  ;; compile 'l' and stack it
  ;; use the register 'dest' if needed
  (:push (:diroporany l dest)))
 
(defun  :progn (l dest :effectp)
  ;; compile the PROGN : <l>
  ;; in the destination : <dest>
  ;; has to call :exp to rebind :effectp
  ;; for the compilation of the last form.
  (while (consp (cdr l)) (:exp (nextl l) dest T))
  (:exp (car l) dest :effectp))

(defun  :progn-last (l dest :effectp)
  ;; compile a PROGN in tail position and add RETURN if needed.
  (:progn l dest :effectp)
  (:return))
 
;;;
;;; Predicate Generation
;;;

(defun :pred (l ind etiq dest)
  ;; compile the predicate : 'l'
  ;; if the test returns: 'ind', branch to the label: 'etiq'
  ;; The value of the test is stored in 'dest' (if needed; in this
  ;; case the contet of registers are updated).
  #+:stat-flag (incr :stat-pred)
  (cond
   ;;
   ;; trivial cases and macros
   ;;
   ((null l)
    #+:stat-flag (incr :stat-pred1)
    (if ind () (:add-code `(BRA ,etiq))))
   ((:quotep l)
    #+:stat-flag (incr :stat-pred2)
    (if ind (:add-code `(BRA ,etiq)) () ))
   ((setq aux1 (:dirop l))
    ;; possible direct operand
    #+:stat-flag (incr :stat-pred3)
    (:add-code `(,(if ind 'BFNIL 'BTNIL) ,aux1 ,etiq)))
   ((neq l (setq aux1 (#:compiler:macroexpand l)))
    #+:stat-flag (incr :stat-pred4)
    #+:stat-flag (incr :stat-macex)
    (:pred aux1 ind etiq dest))
   ((atom l)
    ;; I need a CONS
    (:error l))
   (t   ; explode the CAR/CDR
    (:pred-list (car l) (cdr l)))))

(defun  :pred-list (fnt larg)
  (cond
   ;;
   ;; boolean control forms
   ;;
   ((eq fnt 'NOT)
    #+:stat-flag (incr :stat-pred5)
    (:pred (car larg) (not ind) etiq dest))
   ((memq fnt '(AND OR))
    #+:stat-flag (incr :stat-pred6)
    (let (lcr)
      (if (if (eq fnt 'AND) (NOT ind) ind)
	  (progn
	    (while (consp larg) (:pred (nextl larg) ind etiq dest)
		   (newl lcr (:cr-list))))
	  (let ((et (:genlab)))
	    (while (consp (cdr larg))
	      (:pred (nextl larg) (not ind) et dest)
	      (newl lcr (:cr-list)))
	    (:pred (car larg) ind etiq dest)
	    (:add-code et)))
      (:cr-intersect-list lcr)))
   ;;
   ;;  open coded predicate in 'dest'
   ;;
   ((eq fnt 'FIXP)      (:pred-list-aux2 'BTFIX 'BFFIX))
   ((eq fnt 'FLOATP)    (:pred-list-aux2 'BTFLOAT 'BFFLOAT))
   ((eq fnt 'STRINGP)   (:pred-list-aux2 'BTSTRG 'BFSTRG))
   ((eq fnt 'VECTORP)   (:pred-list-aux2 'BTVECT 'BFVECT))
   ((eq fnt 'VARIABLEP) (:pred-list-aux2 'BTVAR 'BFVAR))
   ((eq fnt 'SYMBOLP)   (:pred-list-aux2 'BTSYMB 'BFSYMB))
   ((eq fnt 'ATOM)      (:pred-list-aux2 'BFCONS 'BTCONS))
   ((eq fnt 'CONSP)     (:pred-list-aux2 'BTCONS 'BFCONS))
   ;;
   ;; pointer and arithmetic comparaisons
   ;;
   ((eq fnt 'EQ)    (:pred-list-aux3 'CABEQ 'CABNE))
   ;; NEQ is a compiler macro
   ((eq fnt 'EQN)   (:pred-list-aux3 'CNBEQ 'CNBNE))
   ((eq fnt 'NEQN)  (:pred-list-aux3 'CNBNE 'CNBEQ))
   ((eq fnt 'LT)    (:pred-list-aux3 'CNBLT 'CNBGE))
   ((eq fnt 'LE)    (:pred-list-aux3 'CNBLE 'CNBGT))
   ((eq fnt 'GT)    (:pred-list-aux3 'CNBGT 'CNBLE))
   ((eq fnt 'GE)    (:pred-list-aux3 'CNBGE 'CNBLT))
   ;;
   ((eq fnt 'FEQN)  (:pred-list-aux3 'CFBEQ 'CFBNE))
   ((eq fnt 'FNEQN) (:pred-list-aux3 'CFBNE 'CFBEQ))
   ((eq fnt 'FLT)   (:pred-list-aux3 'CFBLT 'CFBGE))
   ((eq fnt 'FLE)   (:pred-list-aux3 'CFBLE 'CFBGT))
   ((eq fnt 'FGT)   (:pred-list-aux3 'CFBGT 'CFBLE))
   ((eq fnt 'FGE)   (:pred-list-aux3 'CFBGE 'CFBLT))
   ;;
   ;; MEMQ open (like SELECTQ)
   ;;
   ((and (eq fnt 'MEMQ) (:quotep (cadr larg)))
    #+:stat-flag (incr :stat-pred7)
    (:exp (car larg) dest ())
    (setq larg (cadadr larg))
    (if ind
	(while (consp larg)
	  (:add-code (list 'CABEQ dest (kwote (nextl larg)) etiq)))
        (let ((et (:genlab)))
	  (while (consp (cdr larg))
	    (:add-code (list 'CABEQ dest
			     (kwote (nextl larg)) et)))
	  (:add-code (list 'CABNE dest (kwote (car larg)) etiq))
	  (:add-code et))))
   ;;
   ;; end of open coded predicates
   ;;
   (t  ; in all the other cases
    #+:stat-flag (incr :stat-pred8)
    (:exp l dest ())
    (:add-code (list (if ind 'BFNIL 'BTNIL) dest etiq))))))))
 
(defun :pred-list-aux2 (codop1 codop2)
  #+:stat-flag (incr :stat-predlist2)
  (:add-code (list (if ind codop1 codop2)
		   (:diroporany (car larg) dest)
		   etiq)))
 
(defun :pred-list-aux3 (codop1 codop2)
  ;; more difficult: 2 operand instrcutions
  #+:stat-flag (incr :stat-predlist3)
  (let ((op1 (:dirop (car larg)))
	(op2 (:dirop (cadr larg))))
    (unless (and op1 op2)
	    #+:stat-flag (incr :stat-predlist31)
	    (unless (eq dest 'A1) (exit not-in-A1))
	    #+:stat-flag (incr :stat-predlist32)
	    ;; dest = A1 befoe calling :exp-2.
	    (:exp-2 fnt (car larg) (cadr larg))
	    (setq op1 'A1 op2 'A2)
	    (:cr-all-nil))
    (:add-code (list (if ind codop1 codop2) op1 op2 etiq))))


;;;
;;; Selection of Operands
;;;

(defun  :diropreg (l)
  ;; returns () if no register is loaded with <l> otherwise
  ;; returns the register.
  #+:stat-flag (incr :stat-diropreg)
  (cond ((equal l :A1)
	 #+:stat-flag (incr :stat-diropreg1)
	 'A1)
	((equal l :A2)
	 #+:stat-flag (incr :stat-diropreg2)
	 'A2)
	((equal l :A3)
	 #+:stat-flag (incr :stat-diropreg3)
	 'A3)
	((equal l :A4)
	 #+:stat-flag (incr :stat-diropreg4)
	 'A4)
	(t  #+:stat-flag (incr :stat-diropreg0)
	    ())))
 
(defun  :dirop (l)
  ;; returns (if it exists) the LLM3 operand which contains 
  ;; the object <l> and we garantee that nor the registers nor
  ;; the stack will be modified. Returns a symbol if the operand
  ;; is a register.
  ;; Probably the more used function in the code generator.
  #+:stat-flag (incr :stat-dirop)
  (if (atom l)
      (cond ((null l)
	     ;; Beware, the operand 'NIL is not () !!!
	     #+:stat-flag (incr :stat-dirop-nil)
	     'NIL)
	    ((eq l :A1)
	     #+:stat-flag (incr :stat-dirop-a1)
	     'A1)
	    ((eq l :A2)
	     #+:stat-flag (incr :stat-dirop-a2)
	     'A2)
	    ((eq l :A3)
	     #+:stat-flag (incr :stat-dirop-a3)
	     'A3)
	    ((eq l :A4)
	     #+:stat-flag (incr :stat-dirop-a4)
	     'A4)
	    ((eq l 'T)
	     ;; 'T is faster than (cvalq t)
	     #+:stat-flag (incr :stat-dirop-t)
	     ''T)
	    ((symbolp l)
	     ;;  variables
	     #+:stat-flag (incr :stat-dirop-symb)
	     `(CVALQ ,l))
	    (t ; constants : vector/string/numb
	     #+:stat-flag (incr :stat-dirop-atom)
	     `(quote ,l)))
      (cond  ((equal l :A1)
	      #+:stat-flag (incr :stat-dirop-a1)
	      #+:stat-flag (incr :stat-dirop-cons)
	      'A1)
	     ((equal l :A2)
	      #+:stat-flag (incr :stat-dirop-a2)
	      #+:stat-flag (incr :stat-dirop-cons)
	      'A2)
	     ((equal l :A3)
	      #+:stat-flag (incr :stat-dirop-a3)
	      #+:stat-flag (incr :stat-dirop-cons)
	      'A3)
	     ((equal l :A4)
	      #+:stat-flag (incr :stat-dirop-a4)
	      #+:stat-flag (incr :stat-dirop-cons)
	      'A4)
	     ((eq (car l) 'QUOTE)
	      ;; others constants
	      #+:stat-flag (incr :stat-dirop-quote)
	      `,(kwote (cadr l)))
	     ((and #:compiler:open-p
		   (memq (car l) '(CAR CDR)))
	      ;; open CAR and CDR (see for PLIST ...)
	      #+:stat-flag (incr :stat-dirop-cd)
	      (let ((op (:diropreg (cadr l))))
		(if op
		    (progn #+:stat-flag (incr :stat-dirop-cd1)
			   (list (if (eq (car l) 'car) 'CAR 'CDR) op))
		    (progn #+:stat-flag (incr :stat-dirop-rate)
			   ()))))
	     (t #+:stat-flag (incr :stat-dirop-rate)
		()))))

(defun  :diropordest (l dest)
  ;; returns the direct operand or <dest> after the generation of <l>
  #+:stat-flag (incr :stat-diropordest)
  #+:stat-flag (incr :stat-macex)
  (setq l (#:compiler:macroexpand l))
  (cond ((:dirop l))
	((and #:compiler:open-p
	      (consp l)
	      (memq (car l) '(CAR CDR)))
	 (:exp (cadr l) dest ())
	 (list (if (eq (car l) 'car) 'CAR 'CDR) dest))
	(t (:exp l dest ())
	   dest)))


(defun  :diroporany (l dest)
  ;; returns the direct operand or any register greater than <dest> or
  ;; <dest>.
  #+:stat-flag (incr :stat-diroporany)
  #+:stat-flag (incr :stat-macex)
  (setq l (#:compiler:macroexpand l))
  (or (:dirop l)
      (let ((op (:cr-any-reg dest)))
	(:backtrack
	 (progn #+:stat-flag (incr :stat-diroporany1)
		(if (and #:compiler:open-p
			 (consp l)
			 (memq (car l) '(CAR CDR)))
		    (progn #+:stat-flag (incr :stat-diroporany2)
			   (:exp (cadr l) op ())
			   (list (if (eq (car l) 'car)
				     'CAR
				   'CDR)
				 op))
		    (progn #+:stat-flag (incr :stat-diroporany3)
			   (:exp l op ())
			   op)))
	 ()))
      (progn #+:stat-flag (incr :stat-diroporany4)
	     (:exp l dest ())
	     dest)))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; The Backtrack machinery
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defmacro :backtrack body
  `(tag backtrack
	(let ((:save-lap :lap)
	      (:save-A1 :A1)
	      (:save-A2 :A2)
	      (:save-A3 :A3)
	      (:save-A4 :A4)
	      (:save-deep :deep))
	  ,@(mapcan (lambda (e)
		      ;; if you put a backquote, you are dead!
		      (list (list 'tag 'not-in-A1 (list 'exit 'backtrack e))
			    (list 'setq ':lap ':save-lap
				  ':A1 ':save-A1
				  ':A2 ':save-A2
				  ':A3 ':save-A3
				  ':A4 ':save-A4
				  ':deep ':save-deep)))
		    body)))))
