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
   (error 'load 'erricf 'masm2as))

;;; Tous les symboles precedes de ':' seront definis dans le package MASM2AS

(defvar #:sys-package:colon 'masm2as)

(defvar *path*       "")
(defvar *debug*      ())
(defvar *s-dir*      "")
(defvar *asm-ext*    ".asm")
(defvar *s-ext*      ".s")
(defvar *files*     '(bllsht   carcdr   cntrl    chars    eval
                      extend   fntstd   fspecs   gc       ll386
                      llinit   macroch  number   physio   print
                      read     specnb   string   symbs    toperr))

(defvar *in-line*   t)
(defvar *masm-line* ())
(defvar *package*   '#.#:sys-package:colon)
(defvar *equates*   ())

(defvar *file*      ())
(defvar *label*     ())
(defvar *codop*     ())
(defvar *arg1*      ())
(defvar *arg2*      ())
(defvar *size1*     ())
(defvar *size2*     ())
(defvar *near1*     ())
(defvar *near2*     ())

(defun basename (f)
   (let ((n (chrpos #// f 0)))
        (ifn n
             f
             (incr n)
             (setq *path* (catenate *path* (substring f 0 n)))
             (basename (substring f n)))))

(defun translate-file (file out)
   (setq *path* "")
   (setq *file* (basename (string file)))
   (with ((inchan (openi file))
          (outchan (if out (openo out) (outchan))))
         (let ((#:sys-package:itsoft (if (memq *package* #:sys-package:itsoft)
                                         #:sys-package:itsoft
                                         (cons *package* #:sys-package:itsoft)))
               (t1 (typecn #/+))
               (t2 (typecn #/-))
               (t3 (typecn #/*))
               (t4 (typecn #/[))
               (t5 (typecn #/]))
               (t6 (typecn #/,))
               (t7 (typecn #/:))
               (t8 (typecn #/'))
               (t9 (typecn #/.)))

	       (mapc #'(lambda (c) (typecn c cmsymb))  '(#/+ #/- #/* #/[ #/,))
               (mapc #'(lambda (c) (typecn c csep))    '(#/: #/]))
               (mapc #'(lambda (c) (typecn c cpname))  '(#/.))
               (mapc #'(lambda (c) (typecn c cstring)) '(#/'))
               (protect
                        (untilexit eof
                                   (get-as-line)
                                   (if *codop*
                                       (let ((pr (symbol *package* *codop*)))
                                            (if (eq (valfn pr) 0)
                                                (print-as)
                                                (funcall pr)))
                                       (print-as)))
                        (typecn #/+ t1)
                        (typecn #/- t2)
                        (typecn #/* t3)
                        (typecn #/[ t4)
                        (typecn #/] t5)
                        (typecn #/, t6)
                        (typecn #/: t7)
                        (typecn #/' t8)
                        (typecn #/. t9)
                        (when (and out (outchan))
                              (close (outchan))))))
   file)

(defun get-as-line ()
   (setq *masm-line* (read-line))
   (setq *label* (convert (nextl *masm-line*))) ; label (if any)
   (setq *codop* (nextl *masm-line*)) ; codop
   (when (memq *codop* '(rep repz repnz))
         ;; Ex: rep mov %eax,%ebx
         (when *label*
               (print *label* ":"))
         (print "	" *codop*)
         (setq *label* ())
         (setq *codop* (nextl *masm-line*)))
   (setq *arg1*  (get-arg t))         ; arg1
   (setq *arg2*  (get-arg ())))       ; arg2

(defun read-line ()
   (setq *in-line* t)
   (inmax 0)
   (untilexit :eol
              (if (and *in-line* (memq (peekcn) '(#/ #\TAB)))
                  (newl *masm-line* ())
                  (newl *masm-line* (read))))
   (setq *masm-line* (nreverse *masm-line*)))

(defun get-arg (flag)
   (let ((arg ()) (token ()))
        (untilexit arg
                   (ifn *masm-line*
                        (exit arg)
                        (selectq (setq token (nextl *masm-line*))
                           (|,| (when flag (exit arg)))
                           ('st (newl arg
                                      (concat (convert token)
                                              (if (consp (car *masm-line*))
                                                  (catenate
                                                     "("
                                                     (string (car (nextl *masm-line*)))
                                                     ")")
                                                  ""))))
                           (t   (newl arg (convert token))))))
        (setq arg (nreverse arg))
        (if flag
            (setq *size1* (get-size arg) *near1* (get-jmp arg))
            (setq *size2* (get-size arg) *near2* (get-jmp arg)))
        (as-arg arg)))

(defun get-size (arg)
   (selectq (car arg)
            ((word %ax %bx %cx %dx %si %di %sp %bp) "w")
            ((byte %ah %al %bh %bl %ch %cl %dh %dl) "b")
            ((qword) "l")                                   ; pour les flottants
            ((|%st(0)| |%st(1)| |%st(2)|
              |%st(3)| |%st(4)| |%st(5)|
              |%st(6)| |%st(7)| |%st|)  "")                 ; pour les flottants
            (t (cond
                     ((float-op-p *codop*) (if arg "s" "")) ; pour les flottants
                     ((fixp arg) "w")
                     (t "l")))))

(defun get-jmp (arg)
   (if (and (memq (car arg) '(near short))
            (not (registerp (car (last arg)))))
       ""
       "*"))

(defun float-op-p (arg)
   (and arg                             ; car toutes les instructions flottantes
        (eq (sref (string arg) 0) #/f))); commencent par f et ce sont les seules

(defun registerp (arg)
   (and arg (symbolp arg) (eq (sref (string arg) 0) #/%)))

(defun as-arg (arg)
   (let ((mem ()) (sreg ()))
        (cond
              ;; immediate: 20 -> $20
              ((and (numberp (car arg)) (null (cdr arg)))
               (when (eq *codop* 'db)
                     (setq *codop* 'byte))
               (if (or (eq #$8000 (car arg)) (equal 32768 (car arg)))
                   '$0x8000
                   (catenate '$ (car arg))))
              ;; signed immediate: -20 -> $-20
              ((and (memq (car arg) '(- +)) (numberp (cadr arg)))
               (catenate '$ (car arg) (cadr arg)))
              ;; hex number : 400h -> $0x400
              ((hex-number (car arg)))
              ;; offset data [foo] -> $foo
              ((eq (car arg) 'offset)
               (catenate '|$| (car (last arg))))
              ;; near|short ptr foo -> foo
              ((memq (car arg) '(near short))
               (car (last arg)))
              ;; dword ptr [ .. ]
              ((setq mem (cdr (memq '|[| arg)))
               (setq sreg
                     (or (car (memq '%cs arg))
                         (car (memq '%ds arg))
                         (car (memq '%es arg))
                         (car (memq '%ss arg))))
               (cond
                     ;; dword ptr [foo] -> foo
                     ((and (numberp (car mem)) (null (registerp (caddr mem))))
                      (if (neq (car mem) 0)
                          (catenate (caddr mem) '+ (car mem))
                          (caddr mem)))
                     ((and (numberp (caddr mem)) (null (registerp (car mem))))
                      (if (neq (car mem) 0)
                          (catenate (car mem) '+ (caddr mem))
                          (caddr mem)))
                     ((and (null (registerp (car mem))) (null (cdr mem)))
                      (car mem))
                     ;; dword ptr []
                     (t (normalize sreg mem))))
              ((and (consp (car arg)) (equal (caar arg) 65536))
               (apply 'catenate (cons "$65536" (cdar arg))))
              (t
                (car arg)))))

(defun hex-number (arg)
   (let ((str))
        (when (or (and (symbolp arg) (setq str (string arg)))
                  (and (stringp arg) (setq str arg)))
              (let ((size (1- (slen str)))
                    (i    0))
                   (when (and (ge size 0) (memq (sref str size) '(#/h #/H)))
                         (while (and (< i size)
                                     (memq (sref str i)
                                           '(#/0 #/1 #/2 #/3 #/4 #/5 #/6 #/7
                                             #/8 #/9 #/a #/b #/c #/d #/e #/f
                                             #/A #/B #/C #/D #/E #/F)))
                                (incr i))
                         (when (= i size)
                               (catenate "$0x" (substring str 0 size))))))))

(defun normalize (sreg mem)
   ;; sreg:[base+index*scale+offset] -> sreg:offset(base,index,scale)
   (let ((offset ()) (base ()) (index ()) (scale ()) (token ()) (negative ()))
        (while mem
               (setq token (nextl mem))
               (cond
                     ((eq (cadr mem) '*)
                      (if (numberp (car mem))
                          (setq offset (* (car mem) (caddr mem)))
	                  (setq index (car mem))
                          (setq scale (caddr mem)))
                      (setq mem (cdddr mem)))
                     ((numberp token)
                      (when (neq token 0)
                            (setq offset (if negative (- token) token))))
                     ((eq (car mem) '*)
                      (if (numberp token)
                          (setq offset (* token (cadr mem)))
	                  (setq index token)
                          (setq scale (cadr mem)))
                      (setq mem (cddr mem)))
                     ((eq token '+)
                      ;; Just skip
                      )
                     ((eq token '-)
                      (setq negative t)
                      )
                     (t
                        (if (or base index)
                            (if (registerp token)
                                (setq index token)
                                (setq offset token))
                            (setq base token)))))
        (setq token ())
        (newl token '|)|)
        (when scale
              (newl token scale)
              (newl token '|,|))
        (when (or index scale)
              (newl token index)
              (newl token '|,|))
        (when (or base index scale)
              (newl token base))
        (newl token '|(|)
        (when offset
              (newl token offset))
        (when sreg
              (newl token (catenate sreg ":")))
        (apply 'catenate token)))

 ;; global variable set only when line is a comment (starting with ';'
(defvar *as-comment* ())

(defun print-as ()
  (when *as-comment*
    (print *as-comment*)
    (setq *as-comment* ()))
   (when (or *label* *codop* *arg1* *arg2*)
         (tag eol
              (when (eq *codop* 'label)
                    (setq *codop* ())
                    (setq *arg1*  ()))
              (when *label*
                    (prin *label* ":"))
              (if (null *codop*)
                  (exit eol)
                  (prin (ascii #\TAB) *codop*))
              (ifn *arg2*
                   (when *arg1*
                         (prin *size1* (ascii #\TAB)))
                   (prin *size2* (ascii #\TAB) *arg2* ","))
              (when *arg1*
                    (prin *arg1*)))
         (terpri)))

(defun tab-stop (i)
  ;; compute position of next tab-stop
  (+ i (- 8 (rem (+ i 8) 8))))

(defun masm-comment-to-as-comment (buf)
   ;; Convert masm comment to as comment, buf is the full line to process
   ;; When a comment is detected, save as comment translation to *as-comment*
   (let ((i 0)
	 (start 0)
         (cvt nil)
	 (pos 0)
	 (max (slength buf))
         (comment (sref ";" 0)))
        ;; skip spaces and remember the location of first non-space character.
        (while (and (< i max)
                    (memq (sref buf i) '(#\TAB #/ ))) ; tab or space
	  (if (eq (sref buf i) #\TAB)
	      (setq pos (tab-stop pos))
	      (setq pos (+ pos 1)))
	  (setq i (+ i 1)))
	;; Check if next character is the a comment.
        (while (and (< i max)
                    (eq (sref buf i) comment))
	       (setq cvt t)
               (setq i (+ i 1)))
	(when cvt
	  (setq start i)
	  ;; find last character position in this line.
	  (while (and (< i max)
		      (not (memq (sref buf i) '(10 13)))) ; \n or \r
	    (setq i (+ i 1)))
	  ;; set as comment line.
	  (setq *as-comment*
		(catenate (if (= pos 8)
			      (makestring 1 #\TAB) ;; prefer a tab
			      (makestring pos #/ ))
			  "#"
			  (substring buf start (- i start)))))))

(defun :bol ()
   (ifn *in-line*
        (exit :eol)
        (super-itsoft '#.#:sys-package:colon 'bol ())
	(masm-comment-to-as-comment (substring (inbuf) 0 (- (inmax) 2)))
        (when *debug*
              (print "/" (substring (inbuf) 0 (- (inmax) 2))))
        (setq *in-line* ())))

(dmc |[| ()
     (let ((line ()))
          (untilexit |]|
                     (newl line (read)))
          (cons 'print (nreverse line))))

(dmc |]| ()
     (exit |]|))

(defmacro def-as (codop label . body)
   `(defun ,(symbol *package* codop) ()
           (when ,label
                 (print *label* ":"))
           (progn ,@body)))

(defun convert (arg)
   (selectq arg

            ;; 32 bits registers

            ((eax a1)			'%eax)
            ((ebx a2)			'%ebx)
            ((ecx a3)			'%ecx)
            ((edx a4)			'%edx)
            ((esi nil aux0)		'%esi)
            ((edi esymb dux0)		'%edi)
            ((ebp rwork)		'%ebp)
            ((esp)			'%esp)

            ;; 16 bits registers

            ((ax a1x eaxx axx)		'%ax)
            ((bx a2x ebxx)		'%bx)
            ((cx a3x ecxx)		'%cx)
            ((dx a4x edxx dxx)		'%dx)
            ((si aux0x)			'%si)
            ((di dux0x)			'%di)
            ((sp)			'%sp)
            ((bp rworkx rworkxx)	'%bp)

            ;; 8 bits registers

            ((ah a1h eaxh)		'%ah)
            ((al a1l)			'%al)
            ((bh a2h ebxh)		'%bh)
            ((bl a2l)			'%bl)
            ((ch a3h ecxh)		'%ch)
            ((cl a3l clx)		'%cl)
            ((dh a4h edxh)		'%dh)
            ((dl a4l)			'%dl)

            ;; Segment register

            (ds				'%ds)
            (es				'%es)
            (ss				'%ss)
            (cs				'%cs)

            ;; Control registers

            ((cr0)			'%cr0)
            ((cr2)			'%cr2)
            ((cr3)			'%cr3)

            ;; Debug registers

            ((dr0)			'%db0)
            ((dr1)			'%db1)
            ((dr2)			'%db2)
            ((dr3)			'%db3)
            ((dr6)			'%db6)
            ((dr7)			'%db7)

            ;; Test registers

            ((tr6)			'%tr6)
            ((tr7)			'%tr7)

            ;; math coprocessor registers

            ((st)			'%st)

            ;; Symbol fields

            (null			0)
            ((cval val obj car)		0)
            ((cdr plist typ hsize pl)	4)
            (fval			8)
            (pkgc			12)
            (oval			16)
            (alink			20)
            (ftype			24)
            (ptype			26)
            (pname			28)
            (finsymb			32)

            ;; Special cases

            ;; Default

            (t (or (cassq arg *equates*) arg))))

(defun header ()
   (setq *equate* ())
   ["	.file	""" *file* """"]
   ["	.version	""02.01"""]
   ["	.text	"]
   ["	.align	4"])

(defun include (arg)
   (if (neq *arg1* 'll386.def)
       (translate-file (catenate *path* arg) ())))

(defun align ()
   ["	.align	4"])

(defun skip-$ (arg)
   (when arg
         (setq arg (string arg))
         (if (eq (sref arg 0) #/$)
             (substring arg 1)
             arg)))

(defun valid-str (arg)
   (if (null arg)
       "\"""
       (if (eqstring (string arg) "\")
           "\\"
           arg)))

(defun imul ()
   (if (eq (sref (string *arg2*) 0) #/$)
       ["	imul" *size1* "	" *arg2* "," *arg1* "," *arg1*]
       ["	imul" *size1* "	" *arg2* "," *arg1*]))

(defun float-op-1 (op)
   ["	" op "	" (or *arg1* "")])

(defun float-op-2 (op)
   ["	" op *size1* "	" (or *arg2* "") (if *arg2* "," "") (or *arg1* "")])

(def-as add	*label* ["	add" *size1* "	" *arg2* "," *arg1*])
(def-as and	*label* ["	and" *size1* "	" *arg2* "," *arg1*])
(def-as call	*label*	["	calll	" *near1* *arg1*])
(def-as cmp	*label* ["	cmp" *size1* "	" *arg2* "," *arg1*])
(def-as cwd	*label* ["	cwtd"])
;; FPU translations
(def-as fadd    *label* (float-op-2 (if *arg1* 'fadd 'faddp)))
(def-as fdiv    *label* (float-op-2 (if *arg1* 'fdiv 'fdivp)))
(def-as fdivr   *label* (float-op-2 (if *arg1* 'fdivr 'fdiv)))
(def-as fild    *label* ["	fild	" *arg1*])
(def-as fistp   *label* ["	fistp	" *arg1*])
(def-as fld     *label* ["	fld"  *size1* "	" *arg1*])
(def-as fldcw   *label* ["	fldcw	" *arg1*])
(def-as fmul    *label* (float-op-2 (if *arg1* 'fmul 'fmulp)))
(def-as fmulp   *label* ["	fmulp	" *arg2* "," *arg1* ])
(def-as fstcw   *label* ["	fstcw	" *arg1*])
(def-as fstp    *label* ["	fstp" *size1* "	" *arg1*])
(def-as fstsw   *label* ["	fstsw	" *arg1*])
(def-as fsub    *label* (float-op-2 (if *arg1* 'fsub  'fsubp)))
(def-as fsubr   *label* (float-op-2 (if *arg1* 'fsubr  'fsubp)))
(def-as fsubp   *label* (float-op-2 (if *arg1* 'fsubp  'fsubrp)))
(def-as fsubrp  *label* (float-op-2 (if *arg1* 'fsubrp 'fsubp)))
(def-as fxch    *label* (float-op-1 'fxch))
;;
(def-as imul	*label* (imul))
(def-as jmp	*label*	["	jmp	" *near1* *arg1*])
(def-as ja	*label*	["	ja	" *near1* *arg1*])
(def-as jae	*label* ["	jae	" *near1* *arg1*])
(def-as jb	*label* ["	jb	" *near1* *arg1*])
(def-as jbe	*label* ["	jbe	" *near1* *arg1*])
(def-as jc	*label* ["	jc	" *near1* *arg1*])
(def-as je	*label* ["	je	" *near1* *arg1*])
;#+(member (system) '(linux))
(def-as jecxz	*label* ["	jecxz	" *near1* *arg1*])
;#-(member (system) '(linux))
;(def-as jecxz	*label* ["	jcxz	" *near1* *arg1*])
(def-as jg	*label* ["	jg	" *near1* *arg1*])
(def-as jge	*label* ["	jge	" *near1* *arg1*])
(def-as jl	*label* ["	jl	" *near1* *arg1*])
(def-as jle	*label* ["	jle	" *near1* *arg1*])
(def-as jna	*label* ["	jna	" *near1* *arg1*])
(def-as jnae	*label* ["	jnae	" *near1* *arg1*])
(def-as jnb	*label* ["	jnb	" *near1* *arg1*])
(def-as jnbe	*label* ["	jnbe	" *near1* *arg1*])
(def-as jnc	*label* ["	jnc	" *near1* *arg1*])
(def-as jne	*label* ["	jne	" *near1* *arg1*])
(def-as jng	*label* ["	jng	" *near1* *arg1*])
(def-as jnge	*label* ["	jnge	" *near1* *arg1*])
(def-as jnl	*label* ["	jnl	" *near1* *arg1*])
(def-as jnle	*label* ["	jnle	" *near1* *arg1*])
(def-as jno	*label* ["	jno	" *near1* *arg1*])
(def-as jnp	*label* ["	jnp	" *near1* *arg1*])
(def-as jns	*label* ["	jns	" *near1* *arg1*])
(def-as jnz	*label* ["	jnz	" *near1* *arg1*])
(def-as jo	*label* ["	jo	" *near1* *arg1*])
(def-as jp	*label* ["	jp	" *near1* *arg1*])
(def-as jpe	*label* ["	jpe	" *near1* *arg1*])
(def-as jpo	*label* ["	jpo	" *near1* *arg1*])
(def-as js	*label* ["	js	" *near1* *arg1*])
(def-as jz	*label* ["	jz	" *near1* *arg1*])
(def-as loopnz	*label* ["	loopnz	" *arg1*])
(def-as mov	*label*	["	mov"  *size1* "	" *arg2* "," *arg1*])
(def-as movsd	*label*	["	movsl"])
(def-as movsx	*label*	["	movs" *size2* *size1* "	" *arg2* "," *arg1*])
(def-as movzx	*label*	["	movz" *size2* *size1* "	" *arg2* "," *arg1*])
(def-as nop	*label*	["	nop	"])
(def-as or	*label* ["	or" *size1* "	" *arg2* "," *arg1*])
(def-as ret	*label*	["	ret	"])
(def-as shr	*label* ["	shr" *size1* "	" *arg2* "," *arg1*])
(def-as shl	*label* ["	shl" *size1* "	" *arg2* "," *arg1*])
(def-as sub	*label* ["	sub" *size1* "	" *arg2* "," *arg1*])
(def-as test	*label* ["	test" *size1* "	" *arg2* "," *arg1*])
(def-as xor	*label* ["	xor" *size1* "	" *arg2* "," *arg1*])

(def-as assume	())
(def-as end	()	(setq *equate* ()))
(def-as endp	())
(def-as ends	())
(def-as include ()	(include *arg1*))
(def-as	label	*label*)
(def-as proc	()	[] ["	# FENTRY " *label*] (align) [*label* ":"])
(def-as public	()	["	.globl	" *arg1*])
(def-as extrn	()	["	.globl	" *arg1*])
(def-as equ	()	(setq *equates* (acons *label* *arg1* *equates*)))
(def-as	byte	*label*	["	.byte	" (skip-$ *arg1*)])
(def-as	db	*label*	["	.string	" """" (valid-str *arg1*) """"])
(def-as dw	*label* ["	.value	" *arg1*])
(def-as	dd	*label*	["	.long	" (substring *arg1* 1)])
(def-as even	()	["	.even"])
(def-as .386p	()	(header))
(def-as .387	())
(def-as align	()	(align))
(def-as segment	()	["	." (if (eq *label* 'data) 'data 'text)] (align))

(defun translate-all ()
   (translate-files *files*)
   t)

(defun translate-files (lfile)
   (mapc #'translate lfile)
   t)

(defun translate (file)
   (let ((name (if (chrpos #/. file)
                   (substring file 0 (chrpos #/. file))
                   file)))
        (setq *asm-dir* (catenate syst
                                  "/asm"
                                  (if 31BITFLOATS 31 64)
                                  "fpu"
                                  "/"))
        (setq *s-dir*   (catenate syst
                                  "/s"
                                  (if 31BITFLOATS "31" "64")
                                  "fpu"
                                  "/"))
        (print name ".asm"
               (makestring (- 9 (slength name)) #/ )
               " -> " name ".s")
        (translate-file (catenate *asm-dir* name *asm-ext*)
                        (catenate *s-dir* name *s-ext*))))
