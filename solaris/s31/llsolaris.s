!
!	File llstart.s expansion for sparc arch=v8plus.
!	This file is part of Le-Lisp kernel.
!	Generated on Sat Oct   7 17 21:25:13 
!
	.file	"llstart.s"
	.align	8 
	.global	bcode
	.global	ccode
	.global	ecode
	.global	bheap
	.global	cheap
	.global	eheap
	.global	bnumb
	.global	cnumb
	.global	bfloat
	.global	cfloat
	.global	bvect
	.global	cvect
	.global	bstrg
	.global	cstrg
	.global	bsymb
	.global	csymb
	.global	bvar
	.global	bcons
	.global	ccons
	.global	bold
	.global	eold
	.global	bstack
	.global	mstack1
	.global	mstack2
	.global	estack
	.global	filin
	.global	filiz
	.global	filit
	.global	nbsyst
	.global	maxchan
	.global	llban
	.global	itcount
	.global	itstate
	.global	btbin
	.global	btbgc
	.global	llinit
	.global	llstart
	.seg	"text"
llstart:
	save	%sp,-168,%sp
	set	spext,%o4
	st   	%sp,[%o4+0]
cpok:
	set	itstate,%o4
	st   	%g0,[%o4+0]
	set	itcount,%o4
	st   	%g0,[%o4+0]
	set	brkcnt,%o4
	st   	%g0,[%o4+0]
	set	mouscnt,%o4
	st   	%g0,[%o4+0]
	set	winchcnt,%o4
	st   	%g0,[%o4+0]
	set	clkcnt,%o4
	st   	%g0,[%o4+0]
	set	bstack,%l7
	ld	[%l7+0],%l7
	call	restore
	nop
	set	1,%o3
	set	state,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	inton,0
	nop
	set	splisp,%l7
	ld	[%l7+0],%l7
	set	1,%o3
	set	state,%o4
	st   	%o3,[%o4+0]
	ld	[%l7+0],%g5
	inc  	4,%l7 
	ld	[%l7+0],%g4
	inc  	4,%l7 
	ld	[%l7+0],%g3
	inc  	4,%l7 
	ld	[%l7+0],%g2
	inc  	4,%l7 
	set	bfloat,%g3
	ld	[%g3+0],%g3
	add    	%i2,83*32,%o3
	set	aprtmsgs,%o4
	st   	%o3,[%o4+0]
	set	aprtmsgs,%o3
	set	prtmsgs,%o4
	st   	%o3,[%o4+0]
	ba,a	llinit
	.align	4
	.global	ll_ttycrlf
	.global	ttycrlf
ll_ttycrlf:
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	ttycrlf,0
	nop
	set	splisp,%l7
	ld	[%l7+0],%l7
	set	1,%o3
	set	state,%o4
	st   	%o3,[%o4+0]
	ld	[%l7+0],%g5
	inc  	4,%l7 
	ld	[%l7+0],%g4
	inc  	4,%l7 
	ld	[%l7+0],%g3
	inc  	4,%l7 
	ld	[%l7+0],%g2
	inc  	4,%l7 
	set	bfloat,%g3
	ld	[%g3+0],%g3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
	.global	ll_ncars
	.global	sparc_g2
	.global	sparc_g3
	.global	sparc_g4
	.global	sparc_g5
	.global	sparc_g6
	.global	sparc_g7
	.seg	"data1"
	.align	4
sfcons:
	.word 	0
	.global	xfloat
xfloat:
	.word 	0
xfloat1:
	.word 	0
ll_ncars:
	.word 	0
sparc_g2:
	.word 	0
sparc_g3:
	.word 	0
sparc_g4:
	.word 	0
sparc_g5:
	.word 	0
sparc_g6:
	.word 	0
sparc_g7:
	.word 	0
fltstring:	.asciz "2." 
	.seg	"text"
	.global	ll_ibcb
	.global	inbfb
ll_ibcb:
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	set	ll_ncars,%o2
	mov   	%o1,%o1
	mov   	%o0,%o0
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	inbfb,3
	nop
	set	splisp,%l7
	ld	[%l7+0],%l7
	set	1,%o3
	set	state,%o4
	st   	%o3,[%o4+0]
	ld	[%l7+0],%g5
	inc  	4,%l7 
	ld	[%l7+0],%g4
	inc  	4,%l7 
	ld	[%l7+0],%g3
	inc  	4,%l7 
	ld	[%l7+0],%g2
	inc  	4,%l7 
	set	bfloat,%g3
	ld	[%g3+0],%g3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
	.global	ll_corsav
	.global	corsav
	.seg	"data1"
	.align	4
name:
	.word 	0
	.seg	"text"
	.global	bllm3
	.global	ellm3
	.global	llucode
	.global	lluheap
	.global	eimpur
	.global	hgc
ll_corsav:
	set	name,%o4
	st   	%o0,[%o4+0]
	set	bcons,%o0
	ld	[%o0+0],%o0
	set	bcons,%o1
	ld	[%o1+0],%o1
	cmp	%o0,%o1
	beq	ll_sav1
	nop
	dec  	4,%l7
	call	hgc
	st   	%o7,[%l7+0]
	.align	4
ll_sav1:
	mov   	%l7,%g2
	dec  	4,%g2
	st   	%r4,[%g2+0]
	dec  	4,%g2
	st   	%r5,[%g2+0]
	dec  	4,%g2
	st   	%r6,[%g2+0]
	dec  	4,%g2
	st   	%r7,[%g2+0]
	dec  	4,%g2
	st   	%r8,[%g2+0]
	dec  	4,%g2
	st   	%r9,[%g2+0]
	dec  	4,%g2
	st   	%r10,[%g2+0]
	dec  	4,%g2
	st   	%r11,[%g2+0]
	dec  	4,%g2
	st   	%r12,[%g2+0]
	dec  	4,%g2
	st   	%r13,[%g2+0]
	dec  	4,%g2
	st   	%r15,[%g2+0]
	dec  	4,%g2
	st   	%r16,[%g2+0]
	dec  	4,%g2
	st   	%r17,[%g2+0]
	dec  	4,%g2
	st   	%r18,[%g2+0]
	dec  	4,%g2
	st   	%r19,[%g2+0]
	dec  	4,%g2
	st   	%r20,[%g2+0]
	dec  	4,%g2
	st   	%r21,[%g2+0]
	dec  	4,%g2
	st   	%r22,[%g2+0]
	dec  	4,%g2
	st   	%r23,[%g2+0]
	dec  	4,%g2
	st   	%r24,[%g2+0]
	dec  	4,%g2
	st   	%r25,[%g2+0]
	dec  	4,%g2
	st   	%r26,[%g2+0]
	dec  	4,%g2
	st   	%r27,[%g2+0]
	dec  	4,%g2
	st   	%r28,[%g2+0]
	dec  	4,%g2
	st   	%r29,[%g2+0]
	dec  	4,%g2
	st   	%r30,[%g2+0]
	mov   	%g2,%l7
	set	savsp,%o4
	st   	%l7,[%o4+0]
	set	bsave,%o3
	set	bllm3,%o4
	st   	%o3,[%o4+0]
	set	eimpur,%o3
	set	ellm3,%o4
	st   	%o3,[%o4+0]
	set	ccode,%o3
	ld	[%o3+0],%o3
	set	llucode,%o4
	st   	%o3,[%o4+0]
	set	cheap,%o3
	ld	[%o3+0],%o3
	set	lluheap,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	set	name,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	set	name,%o0
	ld	[%o0+0],%o0
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	corsav,1
	nop
	set	splisp,%l7
	ld	[%l7+0],%l7
	set	1,%o3
	set	state,%o4
	st   	%o3,[%o4+0]
	ld	[%l7+0],%g5
	inc  	4,%l7 
	ld	[%l7+0],%g4
	inc  	4,%l7 
	ld	[%l7+0],%g3
	inc  	4,%l7 
	ld	[%l7+0],%g2
	inc  	4,%l7 
	set	bfloat,%g3
	ld	[%g3+0],%g3
	set	xfloat,%o4
	st   	%o0,[%o4+0]
	inc  	4*1,%l7
	set	savsp,%l7
	ld	[%l7+0],%l7
	set	1,%o3
	set	state,%o4
	st   	%o3,[%o4+0]
	mov   	%l1,%o0
	mov   	%l7,%g2
	ld	[%g2+0],%r30
	inc  	4,%g2
	ld	[%g2+0],%r29
	inc  	4,%g2
	ld	[%g2+0],%r28
	inc  	4,%g2
	ld	[%g2+0],%r27
	inc  	4,%g2
	ld	[%g2+0],%r26
	inc  	4,%g2
	ld	[%g2+0],%r25
	inc  	4,%g2
	ld	[%g2+0],%r24
	inc  	4,%g2
	ld	[%g2+0],%r23
	inc  	4,%g2
	ld	[%g2+0],%r22
	inc  	4,%g2
	ld	[%g2+0],%r21
	inc  	4,%g2
	ld	[%g2+0],%r20
	inc  	4,%g2
	ld	[%g2+0],%r19
	inc  	4,%g2
	ld	[%g2+0],%r18
	inc  	4,%g2
	ld	[%g2+0],%r17
	inc  	4,%g2
	ld	[%g2+0],%r16
	inc  	4,%g2
	ld	[%g2+0],%r15
	inc  	4,%g2
	ld	[%g2+0],%r13
	inc  	4,%g2
	ld	[%g2+0],%r12
	inc  	4,%g2
	ld	[%g2+0],%r11
	inc  	4,%g2
	ld	[%g2+0],%r10
	inc  	4,%g2
	ld	[%g2+0],%r9
	inc  	4,%g2
	ld	[%g2+0],%r8
	inc  	4,%g2
	ld	[%g2+0],%r7
	inc  	4,%g2
	ld	[%g2+0],%r6
	inc  	4,%g2
	ld	[%g2+0],%r5
	inc  	4,%g2
	ld	[%g2+0],%r4
	inc  	4,%g2
	mov   	%g2,%l7
	set	xfloat,%o0
	ld	[%o0+0],%o0
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
	.global	ll_corest
	.global	corest
ll_corest:
	set	name,%o4
	st   	%o0,[%o4+0]
	set	savsp1,%o4
	st   	%l7,[%o4+0]
	mov   	%l7,%g2
	dec  	4,%g2
	st   	%r4,[%g2+0]
	dec  	4,%g2
	st   	%r5,[%g2+0]
	dec  	4,%g2
	st   	%r6,[%g2+0]
	dec  	4,%g2
	st   	%r7,[%g2+0]
	dec  	4,%g2
	st   	%r8,[%g2+0]
	dec  	4,%g2
	st   	%r9,[%g2+0]
	dec  	4,%g2
	st   	%r10,[%g2+0]
	dec  	4,%g2
	st   	%r11,[%g2+0]
	dec  	4,%g2
	st   	%r12,[%g2+0]
	dec  	4,%g2
	st   	%r13,[%g2+0]
	dec  	4,%g2
	st   	%r15,[%g2+0]
	dec  	4,%g2
	st   	%r16,[%g2+0]
	dec  	4,%g2
	st   	%r17,[%g2+0]
	dec  	4,%g2
	st   	%r18,[%g2+0]
	dec  	4,%g2
	st   	%r19,[%g2+0]
	dec  	4,%g2
	st   	%r20,[%g2+0]
	dec  	4,%g2
	st   	%r21,[%g2+0]
	dec  	4,%g2
	st   	%r22,[%g2+0]
	dec  	4,%g2
	st   	%r23,[%g2+0]
	dec  	4,%g2
	st   	%r24,[%g2+0]
	dec  	4,%g2
	st   	%r25,[%g2+0]
	dec  	4,%g2
	st   	%r26,[%g2+0]
	dec  	4,%g2
	st   	%r27,[%g2+0]
	dec  	4,%g2
	st   	%r28,[%g2+0]
	dec  	4,%g2
	st   	%r29,[%g2+0]
	dec  	4,%g2
	st   	%r30,[%g2+0]
	mov   	%g2,%l7
	set	savsp,%o4
	st   	%l7,[%o4+0]
	set	bsave,%o3
	set	bllm3,%o4
	st   	%o3,[%o4+0]
ll_corcall:
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	set	name,%o0
	ld	[%o0+0],%o0
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	corest,1
	nop
	set	splisp,%l7
	ld	[%l7+0],%l7
	set	1,%o3
	set	state,%o4
	st   	%o3,[%o4+0]
	ld	[%l7+0],%g5
	inc  	4,%l7 
	ld	[%l7+0],%g4
	inc  	4,%l7 
	ld	[%l7+0],%g3
	inc  	4,%l7 
	ld	[%l7+0],%g2
	inc  	4,%l7 
	set	bfloat,%g3
	ld	[%g3+0],%g3
	mov   	%o0,%o1
	cmp    	%o1,0
	beq	ll_crest
	nop
	set	savsp1,%l7
	ld	[%l7+0],%l7
	ba,a	ll_corret
	.align	4
ll_crest:
	set	xfloat,%o4
	st   	%o0,[%o4+0]
	set	savsp,%l7
	ld	[%l7+0],%l7
	mov   	%l7,%g2
	ld	[%g2+0],%r30
	inc  	4,%g2
	ld	[%g2+0],%r29
	inc  	4,%g2
	ld	[%g2+0],%r28
	inc  	4,%g2
	ld	[%g2+0],%r27
	inc  	4,%g2
	ld	[%g2+0],%r26
	inc  	4,%g2
	ld	[%g2+0],%r25
	inc  	4,%g2
	ld	[%g2+0],%r24
	inc  	4,%g2
	ld	[%g2+0],%r23
	inc  	4,%g2
	ld	[%g2+0],%r22
	inc  	4,%g2
	ld	[%g2+0],%r21
	inc  	4,%g2
	ld	[%g2+0],%r20
	inc  	4,%g2
	ld	[%g2+0],%r19
	inc  	4,%g2
	ld	[%g2+0],%r18
	inc  	4,%g2
	ld	[%g2+0],%r17
	inc  	4,%g2
	ld	[%g2+0],%r16
	inc  	4,%g2
	ld	[%g2+0],%r15
	inc  	4,%g2
	ld	[%g2+0],%r13
	inc  	4,%g2
	ld	[%g2+0],%r12
	inc  	4,%g2
	ld	[%g2+0],%r11
	inc  	4,%g2
	ld	[%g2+0],%r10
	inc  	4,%g2
	ld	[%g2+0],%r9
	inc  	4,%g2
	ld	[%g2+0],%r8
	inc  	4,%g2
	ld	[%g2+0],%r7
	inc  	4,%g2
	ld	[%g2+0],%r6
	inc  	4,%g2
	ld	[%g2+0],%r5
	inc  	4,%g2
	ld	[%g2+0],%r4
	inc  	4,%g2
	mov   	%g2,%l7
	set	xfloat,%o0
	ld	[%o0+0],%o0
	st   	%i2,[%l7+4]
ll_corret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
	.global	llcorgo
llcorgo:
	set	spext,%o4
	st   	%l7,[%o4+0]
	set	1,%o3
	set	state,%o4
	st   	%o3,[%o4+0]
	set	savsp,%l7
	ld	[%l7+0],%l7
	mov   	%l7,%g2
	ld	[%g2+0],%r30
	inc  	4,%g2
	ld	[%g2+0],%r29
	inc  	4,%g2
	ld	[%g2+0],%r28
	inc  	4,%g2
	ld	[%g2+0],%r27
	inc  	4,%g2
	ld	[%g2+0],%r26
	inc  	4,%g2
	ld	[%g2+0],%r25
	inc  	4,%g2
	ld	[%g2+0],%r24
	inc  	4,%g2
	ld	[%g2+0],%r23
	inc  	4,%g2
	ld	[%g2+0],%r22
	inc  	4,%g2
	ld	[%g2+0],%r21
	inc  	4,%g2
	ld	[%g2+0],%r20
	inc  	4,%g2
	ld	[%g2+0],%r19
	inc  	4,%g2
	ld	[%g2+0],%r18
	inc  	4,%g2
	ld	[%g2+0],%r17
	inc  	4,%g2
	ld	[%g2+0],%r16
	inc  	4,%g2
	ld	[%g2+0],%r15
	inc  	4,%g2
	ld	[%g2+0],%r13
	inc  	4,%g2
	ld	[%g2+0],%r12
	inc  	4,%g2
	ld	[%g2+0],%r11
	inc  	4,%g2
	ld	[%g2+0],%r10
	inc  	4,%g2
	ld	[%g2+0],%r9
	inc  	4,%g2
	ld	[%g2+0],%r8
	inc  	4,%g2
	ld	[%g2+0],%r7
	inc  	4,%g2
	ld	[%g2+0],%r6
	inc  	4,%g2
	ld	[%g2+0],%r5
	inc  	4,%g2
	ld	[%g2+0],%r4
	inc  	4,%g2
	mov   	%g2,%l7
	mov   	%g0,%o0
	st   	%i2,[%l7+4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
	.global	ll_exit
	.global	outner
ll_exit:
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	outner,0
	nop
	set	splisp,%l7
	ld	[%l7+0],%l7
	set	1,%o3
	set	state,%o4
	st   	%o3,[%o4+0]
	ld	[%l7+0],%g5
	inc  	4,%l7 
	ld	[%l7+0],%g4
	inc  	4,%l7 
	ld	[%l7+0],%g3
	inc  	4,%l7 
	ld	[%l7+0],%g2
	inc  	4,%l7 
	set	bfloat,%g3
	ld	[%g3+0],%g3
	.global	exwer
	.global	outwer
exwer:
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	outwer,0
	nop
	set	splisp,%l7
	ld	[%l7+0],%l7
	set	1,%o3
	set	state,%o4
	st   	%o3,[%o4+0]
	ld	[%l7+0],%g5
	inc  	4,%l7 
	ld	[%l7+0],%g4
	inc  	4,%l7 
	ld	[%l7+0],%g3
	inc  	4,%l7 
	ld	[%l7+0],%g2
	inc  	4,%l7 
	set	bfloat,%g3
	ld	[%g3+0],%g3
	.global	ll_break
	.global	llpanic
	.global	setalarm
	.global	sysprot
ll_break:
	save	%sp,-168,%sp
	set	brkcnt,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	brkcnt+2,%o4
	sth	%o0,[%o4]
	set	itcount,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	itcount+2,%o4
	sth	%o0,[%o4]
	call	inton
	nop
	set	brkcnt,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,4
	blt	ll_brear
	nop
	set	ll_panic,%l1
	st   	%l1,[%i2+12]
	add	%l1,4,%l1
	st   	%l1,[%i2+16]
ll_brear:
	ret 	
	restore	
ll_panic:
	set	itstate,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,0
	beq	ll_brear
	nop
	set	state,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,0
	beq	llpanicc
	nop
	set	state,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,1
	beq	llpanicl
	nop
	ba,a	llpanice
	.align	4
llpanicc:
	set	splisp,%l7
	ld	[%l7+0],%l7
	call	enterlispc
	nop
	dec  	4,%l7
	call	gopanic
	st   	%o7,[%l7+0]
	.align	4
	set	0xFFFF,%o0
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
llpanicl:
	set	spext,%o3
	ld	[%o3+0],%o3
	set	spext1,%o4
	st   	%o3,[%o4+0]
	call	restore
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	set	spext1,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	panicl1
	st   	%o7,[%l7+0]
	.align	4
	inc  	4*1,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	.seg	"data1"   
	.align	4
slls1:	.asciz	"Can't continue a hard-break."
	.seg	"text"
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	set	slls1,%o1
	set	28,%o0
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	ttyout,2
	nop
	set	splisp,%l7
	ld	[%l7+0],%l7
	set	1,%o3
	set	state,%o4
	st   	%o3,[%o4+0]
	ld	[%l7+0],%g5
	inc  	4,%l7 
	ld	[%l7+0],%g4
	inc  	4,%l7 
	ld	[%l7+0],%g3
	inc  	4,%l7 
	ld	[%l7+0],%g2
	inc  	4,%l7 
	set	bfloat,%g3
	ld	[%g3+0],%g3
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	ttycrlf,0
	nop
	set	splisp,%l7
	ld	[%l7+0],%l7
	set	1,%o3
	set	state,%o4
	st   	%o3,[%o4+0]
	ld	[%l7+0],%g5
	inc  	4,%l7 
	ld	[%l7+0],%g4
	inc  	4,%l7 
	ld	[%l7+0],%g3
	inc  	4,%l7 
	ld	[%l7+0],%g2
	inc  	4,%l7 
	set	bfloat,%g3
	ld	[%g3+0],%g3
	retl 	
	nop
panicl1:
	set	gopanic,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+4],%o3
	set	spext,%o4
	st   	%o3,[%o4+0]
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
llpanice:
	save	%sp,-168,%sp
	set	sparg,%l7
	ld	[%l7+0],%l7
	call	enterlisp
	nop
	set	sparg,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%sp+152]
	dec  	4,%l7
	call	panice1
	st   	%o7,[%l7+0]
	.align	4
	call	leavelisp
	nop
	restore	
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
panice1:
	set	gopanic,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
gopanic:
	set	itcount,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	set	brkcnt,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	sub	%o0,%o1,%o0
	set	itcount+2,%o4
	sth	%o0,[%o4]
	set	brkcnt,%o4
	st   	%g0,[%o4+0]
	set	gopanic1,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	set	1,%o3
	set	itstate,%o4
	st   	%o3,[%o4+0]
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
gopanic1:
	set	itstate,%o4
	st   	%g0,[%o4+0]
	ba,a	llpanic
	.align	4
leavelisp:
	ld	[%sp+152],%o1
	set	calltypr,%o4
	st   	%o1,[%o4+0]
	ld	[%sp+156],%o1
	set	spext,%o4
	st   	%o1,[%o4+0]
	ld	[%sp+160],%o1
	set	state,%o4
	st   	%o1,[%o4+0]
	ld	[%sp+164],%o1
	set	splisp,%o4
	st   	%o1,[%o4+0]
	set	sfcons,%o4
	st   	%g4,[%o4+0]
	jmp	%o7+8
	nop
enterlisp:
	set	sfcons,%g4
	ld	[%g4+0],%g4
enterlispc:
	set	splisp,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%sp+164]
	set	state,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%sp+160]
	set	spext,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%sp+156]
	set	spext,%o4
	st   	%sp,[%o4+0]
	set	1,%o3
	set	state,%o4
	st   	%o3,[%o4+0]
restore:
	set	bvect,%i0
	ld	[%i0+0],%i0
	set	bstrg,%i1
	ld	[%i1+0],%i1
	set	bsymb,%i2
	ld	[%i2+0],%i2
	set	bcons,%i3
	ld	[%i3+0],%i3
	set	bfloat,%g3
	ld	[%g3+0],%g3
	set	0xFFFF,%l0
	set	xfloat,%l5
	set	0x80000000,%l6
	jmp	%o7+8
	nop
	.global	ll_mouse
ll_mouse:
	set	mouscnt,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,1
	beq	llmous1
	nop
	set	1,%o3
	set	mouscnt,%o4
	st   	%o3,[%o4+0]
	set	itcount,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	itcount+2,%o4
	sth	%o0,[%o4]
llmous1:
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	inton,0
	nop
	set	splisp,%l7
	ld	[%l7+0],%l7
	set	1,%o3
	set	state,%o4
	st   	%o3,[%o4+0]
	ld	[%l7+0],%g5
	inc  	4,%l7 
	ld	[%l7+0],%g4
	inc  	4,%l7 
	ld	[%l7+0],%g3
	inc  	4,%l7 
	ld	[%l7+0],%g2
	inc  	4,%l7 
	set	bfloat,%g3
	ld	[%g3+0],%g3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
	.global	ll_clock
ll_clock:
	save	%sp,-168,%sp
	set	clkcnt,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,1
	beq	llclk1
	nop
	set	1,%o3
	set	clkcnt,%o4
	st   	%o3,[%o4+0]
	set	itcount,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	itcount+2,%o4
	sth	%o0,[%o4]
llclk1:
	call	inton
	nop
	ret 	
	restore	
	.global	ithard
	.global	llbreak
	.global	llmouse
	.global	llclock
ithard:
	set	itstate,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,0
	beq	ithardr
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	call	ithardd
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ithardd:
	set	ithard0,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	set	1,%o3
	set	itstate,%o4
	st   	%o3,[%o4+0]
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
ithard0:
	set	itstate,%o4
	st   	%g0,[%o4+0]
	set	brkcnt,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,0
	beq	ithard1
	nop
	set	itcount,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	set	brkcnt,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	sub	%o0,%o1,%o0
	set	itcount+2,%o4
	sth	%o0,[%o4]
	set	brkcnt,%o4
	st   	%g0,[%o4+0]
	dec  	4,%l7
	call	llbreak
	st   	%o7,[%l7+0]
	.align	4
ithard1:
	set	mouscnt,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,1
	bne	ithard2
	nop
	set	itcount,%o0
	ld	[%o0+0],%o0
	dec	1,%o0
	set	itcount+2,%o4
	sth	%o0,[%o4]
	set	mouscnt,%o4
	st   	%g0,[%o4+0]
	dec  	4,%l7
	call	llmouse
	st   	%o7,[%l7+0]
	.align	4
ithard2:
	set	clkcnt,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,0
	beq	ithardr
	nop
	set	itcount,%o4
	st   	%g0,[%o4+0]
	set	clkcnt,%o4
	st   	%g0,[%o4+0]
	dec  	4,%l7
	call	llclock
	st   	%o7,[%l7+0]
	.align	4
ithardr:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
	.global	ll_merro
	.global	llmerro
ll_merro:
	save	%sp,-168,%sp
	call	inton
	nop
	set	signum,%o4
	st   	%i0,[%o4+0]
llmerrod:
	set	state,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,0
	beq	llmerroc
	nop
	set	state,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,1
	beq	llmerrol
	nop
	ba,a	llmerroe
	.align	4
llmerroc:
	set	splisp,%l7
	ld	[%l7+0],%l7
	call	enterlispc
	nop
merroc1:
	set	signum,%l2
	ld	[%l2+0],%l2
	dec  	4,%l7
	call	llmerro
	st   	%o7,[%l7+0]
	.align	4
	ba,a	merroc1
	.align	4
	.global	llmerrol
llmerrol:
	restore	
	restore	
	call	restore
	nop
merrol1:
	set	signum,%l2
	ld	[%l2+0],%l2
	dec  	4,%l7
	call	llmerro
	st   	%o7,[%l7+0]
	.align	4
	ba,a	merrol1
	.align	4
llmerroe:
	set	splisp,%l7
	ld	[%l7+0],%l7
	call	enterlisp
	nop
merroe1:
	set	signum,%l2
	ld	[%l2+0],%l2
	dec  	4,%l7
	call	llmerro
	st   	%o7,[%l7+0]
	.align	4
	ba,a	merroe1
	.align	4
	.global	equobuf
	.global	equobuf2
	.seg	"data1"
	.align	4
equobuf:
	.word 	0
equobuf2:
	.word 	0
	.seg	"text"
	.global	ll_rem
	.global	ll_quo
	.global	ll_times
ll_rem:
	sll	%o3,16,%o0
	sra	%o0,16,%o0
	sll	%o2,16,%o1
	sra	%o1,16,%o1
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	mov   	%o1,%o1
	mov   	%o0,%o0
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	.rem,2
	nop
	set	splisp,%l7
	ld	[%l7+0],%l7
	set	1,%o3
	set	state,%o4
	st   	%o3,[%o4+0]
	ld	[%l7+0],%g5
	inc  	4,%l7 
	ld	[%l7+0],%g4
	inc  	4,%l7 
	ld	[%l7+0],%g3
	inc  	4,%l7 
	ld	[%l7+0],%g2
	inc  	4,%l7 
	set	bfloat,%g3
	ld	[%g3+0],%g3
	and	%o0,%l0,%o3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ll_quo:
	sll	%o3,16,%o0
	sra	%o0,16,%o0
	sll	%o2,16,%o1
	sra	%o1,16,%o1
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	mov   	%o1,%o1
	mov   	%o0,%o0
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	.div,2
	nop
	set	splisp,%l7
	ld	[%l7+0],%l7
	set	1,%o3
	set	state,%o4
	st   	%o3,[%o4+0]
	ld	[%l7+0],%g5
	inc  	4,%l7 
	ld	[%l7+0],%g4
	inc  	4,%l7 
	ld	[%l7+0],%g3
	inc  	4,%l7 
	ld	[%l7+0],%g2
	inc  	4,%l7 
	set	bfloat,%g3
	ld	[%g3+0],%g3
	and	%o0,%l0,%o3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ll_times:
	sll	%o3,16,%o1
	sra	%o1,16,%o1
	sll	%o2,16,%o0
	sra	%o0,16,%o0
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	mov   	%o1,%o1
	mov   	%o0,%o0
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	.mul,2
	nop
	set	splisp,%l7
	ld	[%l7+0],%l7
	set	1,%o3
	set	state,%o4
	st   	%o3,[%o4+0]
	ld	[%l7+0],%g5
	inc  	4,%l7 
	ld	[%l7+0],%g4
	inc  	4,%l7 
	ld	[%l7+0],%g3
	inc  	4,%l7 
	ld	[%l7+0],%g2
	inc  	4,%l7 
	set	bfloat,%g3
	ld	[%g3+0],%g3
	and	%o0,%l0,%o3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
	.global	floatcompare
floatcompare:
	sll    	%o0,1,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f1
	mov   	%o2,%o0
	sll    	%o0,1,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
	.global	gcfloat
	.global	ffloat
	.global	ll_callg
ll_callg:
	set	callsp,%o4
	st   	%l7,[%o4+0]
	ld	[%l7+4],%o3
	set	callnarg,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	set	sfcons,%o4
	st   	%g4,[%o4+0]
	set	callsp,%l4
	ld	[%l4+0],%l4
	set	callnarg,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll  	%o0,2,%o0
	add    	%l4,%o0,%l4
	ld	[%l4+0],%o0
	set	calltypr,%o4
	st   	%o0,[%o4+0]
	dec  	4,%l7
	set	calltypr,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	splisp,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	call_c1
	st   	%o7,[%l7+0]
	.align	4
	inc  	4*2,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	set	bcons,%i3
	ld	[%i3+0],%i3
	set	calltypr,%g2
	ld	[%g2+0],%g2
	set	callreg0,%g1
	ld	[%g1+0],%g1
	set	callreg1,%i5
	ld	[%i5+0],%i5
	dec  	4,%l7
	call	ll_build
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
call_c1:
	set	call_c2,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	extvrest
	st   	%o7,[%l7+0]
	.align	4
noextv:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+4],%o3
	set	splisp,%o4
	st   	%o3,[%o4+0]
	ld	[%l7+8],%o3
	set	calltypr,%o4
	st   	%o3,[%o4+0]
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
call_c2:
	set	splisp,%o4
	st   	%l7,[%o4+0]
	set	sparg,%o4
	st   	%l7,[%o4+0]
	set	2,%o3
	set	state,%o4
	st   	%o3,[%o4+0]
	set	callsp,%l4
	ld	[%l4+0],%l4
	inc  	4*2,%l4
	set	callnarg,%l3
	ld	[%l3+0],%l3
	dec  	4,%l7
	call	ll_conve
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l4+0],%o0
	set	calltypr,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l4
	ld	[%l4+0],%o0
	set	callgadr,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l4
movargs:
	set	calltarg,%l4
	mov   	%g5,%l1
	mov   	%l1,%l2
	mov   	%g0,%g5
	sll	%l2,2,%l2
	sub	%l4,%l2,%l4
	ld	[%l4+0],%o0
	ld	[%l4+4],%o1
	ld	[%l4+8],%o2
	ld	[%l4+12],%o3
	ld	[%l4+16],%o4
	ld	[%l4+20],%o5
	subcc	%l1,6,%l1
	ble	Dlls2
	add	%l4,24,%l4
	add	%sp,23*4,%l3
	ba,a	Llls2
lls2: 
	ld	[%l4+%g5],%l2
	st   	%l2,[%l3+%g5]
	inc	4,%g5
Llls2:
	subcc	%l1,1,%l1
	bge,a	lls2
	nop
Dlls2: 
	set	callgadr,%l3
	ld	[%l3+0],%l3
	call	%l3
	nop
call_c5:
	set	callreg0,%o4
	st   	%o0,[%o4+0]
	set	splisp,%l7
	ld	[%l7+0],%l7
	set	1,%o3
	set	state,%o4
	st   	%o3,[%o4+0]
	call	restore
	nop
	set	sfcons,%g4
	ld	[%g4+0],%g4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
extvrest:
	mov   	%l7,%l1
	inc  	4*10,%l1
	ld	[%l1+0],%g5
	inc  	4,%l1
	ba,a	extv1
	.align	4
extv2:
	ld	[%l1+0],%l4
	inc  	4,%l1
	mov   	%l4,%o1
	cmp    	%o1,7
	bne	extv3
	nop
	ld	[%l1+0],%l2
	inc  	4,%l1
	ld	[%l2+0],%l2
	ld	[%l2+4],%o1
	inc  	8,%l2
	mov   	%l2,%o3
	ba,a  	endlls3
lls3:
	and 	%o2,%l0,%o2
	st   	%o2,[%o3+0]
	add  	%o3,4,%o3
endlls3:	deccc  	1,%o1
	bge,a  	lls3
	ld	[%o3+0],%o2
	mov   	%o3,%l2
	ba,a	extv1
	.align	4
extv3:
	mov   	%l4,%o1
	cmp    	%o1,8
	bne	extv4
	nop
	ld	[%l1+0],%l2
	inc  	4,%l1
	ld	[%l2+0],%l2
	ld	[%l2+4],%o1
	inc  	8,%l2
	mov   	%l2,%o3
	ba,a  	endlls4
lls4:
	mov   	%o2,%o0
	srl    	%o0,1,%o0
	bset	%l6,%o0
	mov   	%o0,%o2
	st   	%o2,[%o3+0]
	add  	%o3,4,%o3
endlls4:	deccc  	1,%o1
	bge,a  	lls4
	ld	[%o3+0],%o2
	mov   	%o3,%l2
	ba,a	extv1
	.align	4
extv4:
	inc  	4*1,%l1
extv1:
	dec	1,%g5
	sll	%g5,16,%g5
	sra	%g5,16,%g5
	dec  	%g5
	cmp   	%g5,0
	bgt  	extv2
	nop
	mov  	0,%g5
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
	.global	ll_conve
ll_conve:
	set	calltarg,%l1
	set	callrarg,%o3
	set	refargptr,%o4
	st   	%o3,[%o4+0]
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	sub	%l3,2,%l3
	and 	%l3,%l0,%l3
	mov   	%g0,%g5
	ba,a	ll_convl
	.align	4
ll_conv0:
	dec	1,%l3
	inc	1,%g5
	ld	[%l4+0],%g1
	inc  	4,%l4
	ld	[%l4+0],%l2
	inc  	4,%l4
ll_conv1:
	mov   	%g1,%o1
	cmp    	%o1,1
	bne	ll_conv2
	nop
	mov   	%l2,%o2
	sll	%o2,16,%o2
	sra	%o2,16,%o2
	dec  	4,%l1
	st   	%o2,[%l1+0]
	ba,a	ll_convl
	.align	4
ll_conv2:
	mov   	%g1,%o1
	cmp    	%o1,2
	bne	ll_conv3
	nop
	mov   	%l2,%o0
	sll    	%o0,1,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fstod	%f0,%f0
	dec  	4,%l1
	st   	%f1,[%l1+0]
	dec  	4,%l1
	st   	%f0,[%l1+0]
	inc	1,%g5
	ba,a	ll_convl
	.align	4
ll_conv3:
	mov   	%g1,%o1
	cmp    	%o1,3
	bne	ll_conv4
	nop
	ld	[%l2+0],%o0
	inc  	8,%o0
	mov   	%o0,%l2
	dec  	4,%l1
	st   	%l2,[%l1+0]
	ba,a	ll_convl
	.align	4
ll_conv4:
	mov   	%g1,%o1
	cmp    	%o1,4
	bne	ll_conv5
	nop
	ld	[%l2+0],%o0
	inc  	8,%o0
	mov   	%o0,%l2
	dec  	4,%l1
	st   	%l2,[%l1+0]
	ba,a	ll_convl
	.align	4
ll_conv5:
	mov   	%g1,%o1
	cmp    	%o1,5
	bne	ll_conv6
	nop
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	set	refargptr,%o0
	ld	[%o0+0],%o0
	dec  	4,%o0
	st   	%l2,[%o0+0]
	set	refargptr,%o4
	st   	%o0,[%o4+0]
	mov   	%o0,%l2
	dec  	4,%l1
	st   	%l2,[%l1+0]
	ba,a	ll_convl
	.align	4
ll_conv6:
	mov   	%g1,%o1
	cmp    	%o1,6
	bne	ll_conv7
	nop
	mov   	%l2,%o0
	sll    	%o0,1,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fstod	%f0,%f0
	set	refargptr,%o0
	ld	[%o0+0],%o0
	sub	%o0,8,%o0
	st   	%f0,[%o0+0]
	st   	%f1,[%o0+4]
	set	refargptr,%o4
	st   	%o0,[%o4+0]
	mov   	%o0,%l2
	dec  	4,%l1
	st   	%l2,[%l1+0]
	ba,a	ll_convl
	.align	4
ll_conv7:
	mov   	%g1,%o1
	cmp    	%o1,7
	bne	ll_conv8
	nop
	ld	[%l2+0],%l2
	ld	[%l2+4],%o1
	inc  	8,%l2
	mov   	%l2,%o0
	ba,a  	endlls5
lls5:
	sll	%o2,16,%o2
	sra	%o2,16,%o2
	st   	%o2,[%o0+0]
	add  	%o0,4,%o0
endlls5:	deccc  	1,%o1
	bge,a  	lls5
	ld	[%o0+0],%o2
	dec  	4,%l1
	st   	%l2,[%l1+0]
	ba,a	ll_convl
	.align	4
ll_conv8:
	mov   	%g1,%o1
	cmp    	%o1,8
	bne	ll_conv9
	nop
	ld	[%l2+0],%l2
	ld	[%l2+4],%o1
	inc  	8,%l2
	mov   	%l2,%o3
	ba,a  	endlls6
lls6:
	mov   	%o2,%o0
	sll    	%o0,1,%o0
	mov   	%o0,%o2
	st   	%o2,[%o3+0]
	add  	%o3,4,%o3
endlls6:	deccc  	1,%o1
	bge,a  	lls6
	ld	[%o3+0],%o2
	dec  	4,%l1
	st   	%l2,[%l1+0]
	ba,a	ll_convl
	.align	4
ll_conv9:
	dec  	4,%l1
	st   	%l2,[%l1+0]
ll_convl:
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	dec  	%l3
	cmp   	%l3,0
	bgt  	ll_conv0
	nop
	mov  	0,%l3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
	.global	ll_build
ll_build:
ll_buil1:
	mov   	%g2,%o1
	cmp    	%o1,1
	bne	ll_buil2
	nop
	and	%g1,%l0,%g1
	set	callreg0,%o4
	st   	%g1,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ll_buil2:
	mov   	%g2,%o1
	cmp    	%o1,2
	bne	ll_buil3
	nop
	fdtos	%f0,%f2
	st   	%f2,[%l5+0]
	ld	[%l5+0],%o0
	srl    	%o0,1,%o0
	bset	%l6,%o0
	mov   	%o0,%g1
	set	callreg0,%o4
	st   	%g1,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ll_buil3:
	mov   	%g2,%o1
	cmp    	%o1,3
	bne	ll_buil4
	nop
	mov   	%g1,%l1
	mov   	%l1,%l2
lls7:
	ldub	[%l1+0],%o0
	cmp     %o0,0
	bne,a    	lls7
	inc	%l1
	sub	%l1,%l2,%l1
	.global	crastrg
	dec  	4,%l7
	call	crastrg
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%g1
	set	callreg0,%o4
	st   	%g1,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ll_buil4:
	mov   	%g2,%o1
	cmp    	%o1,4
	bne	ll_buil5
	nop
	mov   	%g1,%l1
	mov   	%l1,%l2
lls8:
	ld	[%l1+0],%o0
	cmp    	%o0,0
	bne,a  	lls8
	inc    	%l1
	sub    	%l1,%l2,%l1
	mov   	%l1,%g1
	set	callreg0,%o4
	st   	%g1,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ll_buil5:
	set	callreg0,%o4
	st   	%g1,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
	.global	lispcall
	.global	getsym
	.global	pusharg
	.global	pushargd
	.global	cfloat_to_lfloat
	.global	lfloat_to_cfloat
lispcall:
	save	%sp,-168,%sp
	set	calltypr,%o4
	st   	%i0,[%o4+0]
	set	callnarg,%o4
	st   	%i1,[%o4+0]
	set	callsymb,%o4
	st   	%i2,[%o4+0]
	set	calltypr,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%sp+152]
	set	sparg,%l7
	ld	[%l7+0],%l7
	dec  	4,%l7
	call	call_l1
	st   	%o7,[%l7+0]
	.align	4
	set	calltypr,%g2
	ld	[%g2+0],%g2
	dec  	4,%l7
	call	ll_resl
	st   	%o7,[%l7+0]
	.align	4
	ret 	
	restore	
call_l1:
	call	enterlisp
	nop
	set	1,%o3
	set	state,%o4
	st   	%o3,[%o4+0]
	set	calltypr,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%sp+152]
	set	call_l2,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o0
	set	callreg0,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%sp+152],%o1
	set	calltypr,%o4
	st   	%o1,[%o4+0]
	ld	[%sp+156],%o1
	set	spext,%o4
	st   	%o1,[%o4+0]
	ld	[%sp+160],%o1
	set	state,%o4
	st   	%o1,[%o4+0]
	ld	[%sp+164],%o1
	set	splisp,%o4
	st   	%o1,[%o4+0]
	set	splisp,%o3
	ld	[%o3+0],%o3
	set	sparg,%o4
	st   	%o3,[%o4+0]
	set	sfcons,%o4
	st   	%g4,[%o4+0]
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
call_l2:
	set	sparg,%l4
	ld	[%l4+0],%l4
	set	callnarg,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll  	%o0,2,%o0
	add    	%l4,%o0,%l4
	set	callnarg,%l1
	ld	[%l1+0],%l1
	mov   	%l1,%l2
	sll	%l2,2,%l2
	sub	%l4,%l2,%l4
	sub	%l7,%l2,%l7
	mov   	%l7,%l3
	ba,a	Llls9
lls9: 
	ld	[%l4+0],%l2
	st   	%l2,[%l3+0]
	inc	4,%l4
	inc	4,%l3
Llls9:
	subcc	%l1,1,%l1
	bge	lls9
	nop
Dlls9: 
	set	callsymb,%l1
	ld	[%l1+0],%l1
	set	callnarg,%l4
	ld	[%l4+0],%l4
	ba,a	ffuncall
	.align	4
ll_resl:
ll_res1:
	mov   	%g2,%o1
	cmp   	%o1,1
	bne	ll_res2
	nop
	set	callreg0,%i0
	ld	[%i0+0],%i0
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ll_res2:
	mov   	%g2,%o1
	cmp   	%o1,2
	bne	ll_res3
	nop
	set	callreg0,%o0
	ld	[%o0+0],%o0
	sll    	%o0,1,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fstod	%f0,%f0
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ll_res3:
	mov   	%g2,%o1
	cmp   	%o1,3
	bne	ll_res4
	nop
	set	callreg0,%i0
	ld	[%i0+0],%i0
	ld	[%i0+0],%o0
	inc  	8,%o0
	mov   	%o0,%i0
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ll_res4:
	mov   	%g2,%o1
	cmp   	%o1,4
	bne	ll_res5
	nop
	set	callreg0,%i0
	ld	[%i0+0],%i0
	ld	[%i0+0],%o0
	inc  	8,%o0
	mov   	%o0,%i0
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ll_res5:
	set	callreg0,%i0
	ld	[%i0+0],%i0
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getsym:
	save	%sp,-168,%sp
	set	callreg0,%o4
	st   	%i0,[%o4+0]
	set	sparg,%l7
	ld	[%l7+0],%l7
	call	enterlisp
	nop
	dec  	4,%l7
	call	llgetsym1
	st   	%o7,[%l7+0]
	.align	4
	set	callreg0,%i0
	ld	[%i0+0],%i0
	call	leavelisp
	nop
	ret 	
	restore	
llgetsym1:
	set	getsym2,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
getsym2:
	set	callreg0,%l3
	ld	[%l3+0],%l3
	mov   	%l3,%l1
	mov   	%l1,%l2
lls10:
	ldub	[%l1+0],%o0
	cmp     %o0,0
	bne,a    	lls10
	inc	%l1
	sub	%l1,%l2,%l1
	dec  	4,%l7
	call	crastrg
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l3
	mov   	%l3,%l2
	ld	[%l2+0],%o0
	ld	[%o0+4],%l1
	dec  	4,%l7
	call	trysymb
	st   	%o7,[%l7+0]
	.align	4
	set	callreg0,%o4
	st   	%l1,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
pushargd:
pusharg:
	save	%sp,-168,%sp
	mov   	%sp,%l7
	set	calltypr,%o4
	st   	%i0,[%o4+0]
	set	callreg0,%o4
	st   	%i1,[%o4+0]
	set	callreg1,%o4
	st   	%i2,[%o4+0]
	set	sparg,%l7
	ld	[%l7+0],%l7
	call	enterlisp
	nop
	set	callreg0,%g1
	ld	[%g1+0],%g1
	set	callreg1,%i5
	ld	[%i5+0],%i5
	set	calltypr,%g2
	ld	[%g2+0],%g2
	st   	%g1,[%l5+0]
	ld	[%l5+0],%f0
	st   	%i5,[%l5+0]
	ld	[%l5+0],%f1
	dec  	4,%l7
	call	ll_build
	st   	%o7,[%l7+0]
	.align	4
	set	sparg,%l1
	ld	[%l1+0],%l1
	dec  	4,%l1
	set	callreg0,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l1+0]
	set	sparg,%o4
	st   	%l1,[%o4+0]
	call	leavelisp
	nop
	ret 	
	restore	
cfloat_to_lfloat:
	save	%sp,-168,%sp
	mov   	%sp,%l7
	set	callreg0,%o4
	st   	%i0,[%o4+0]
	set	callreg1,%o4
	st   	%i1,[%o4+0]
	call	enterlisp
	nop
	set	callreg0,%g1
	ld	[%g1+0],%g1
	set	callreg1,%i5
	ld	[%i5+0],%i5
	st   	%g1,[%l5+0]
	ld	[%l5+0],%f0
	st   	%i5,[%l5+0]
	ld	[%l5+0],%f1
	fdtos	%f0,%f2
	st   	%f2,[%l5+0]
	ld	[%l5+0],%o0
	srl    	%o0,1,%o0
	bset	%l6,%o0
	mov   	%o0,%g1
	set	callreg0,%o4
	st   	%g1,[%o4+0]
	call	leavelisp
	nop
	restore	
	set	callreg0,%o0
	ld	[%o0+0],%o0
	retl 	
	nop
lfloat_to_cfloat:
	sll	%o0,1,%o0
	st   	%o0,[%sp+-4]
	ld	[%sp+-4],%f0
	fstod	%f0,%f0
	retl 	
	nop
	.global	splisp
	.global	spext1
	.global	spext
	.global	sparg
	.global	trash
	.global	refargptr
	.seg	"data1"
	.align	4
splisp:
	.word 	0
savsp1:
	.word 	0
sparg:
	.word 	0
spext:
	.word 	0
spext1:
	.word 	0
trash:
	.word 	0
refargptr:
	.word 	0
	.global	econs
econs:
	.word 	0
bsave:
savsp:
	.word 	0
aprtmsgs:
	.word 	0
	.global	prtmsgs
prtmsgs:
	.word 	0
	.global	fltacc10
	.global	fltacc11
	.global	fltacc20
	.global	fltacc21
	.global	accusingle1
	.global	accusingle2
	.align	8
accusingle1:
	.word 	0
accusingle2:
	.word 	0
fltacc10:
	.word 	0
fltacc11:
	.word 	0
fltacc20:
	.word 	0
fltacc21:
	.word 	0
	.global	state
	.global	callreg0
state:
	.word 	0
callsp:
	.word 	0
callgadr:
	.word 	0
calltypr:
	.word 	0
callreg0:
	.word 	0
callreg1:
	.word 	0
callnarg:
	.word 	0
callsymb:
	.word 	0
callbarg:
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
callearg:
	.word 	0
	.global	calltarg
calltarg:
calrbarg:
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
	.word 	0
calrearg:
	.word 	0
	.global	callrarg
callrarg:
prev_sw:
	.word 	0
	.global	mouscnt
brkcnt:
	.word 	0
clkcnt:
	.word 	0
mouscnt:
	.word 	0
winchcnt:
	.word 	0
	.global	x_mouse
	.global	y_mouse
	.global	sw_mouse
x_mouse:
	.word 	0
y_mouse:
	.word 	0
sw_mouse:
	.word 	0
	.global	inmouse
inmouse:
	.word 	0
	.global	alarm_on
alarm_on:
	.word 	0
signum:
	.word 	0
