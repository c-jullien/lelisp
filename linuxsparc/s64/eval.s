!
!	File eval.s expansion for sparc arch=v8plus.
!	This file is part of Le-Lisp kernel.
!	Generated on Sat Oct   7 17 18:55:40 
!
	.file	"eval.s"
	.align	8 
	.global	ini_eval
	.global	unbind0
	.global	unbind1
	.global	unbinp1
	.global	unbind2
	.global	unbind3
	.global	unbind4
	.global	unbind5
	.global	unbind6
	.global	unbind7
	.global	unbind8
	.global	unbind9
	.global	unbind10
	.global	evalcar
	.global	evala1
	.global	evalan
	.global	evalt
	.global	llitsoft
	.global	llsupit
	.global	sysprot
	.global	findtag
	.global	dlink
	.global	llink
	.global	evalst
	.global	forme
	.global	funct
	.global	savea1
	.global	savea2
	.global	savea3
	.global	savea4
	.global	intret
	.global	intllink
	.global	errname
	.global	eval
	.global	evalc
	.global	apply
	.global	ffuncall
	.global	funcall
	.global	evexpg
	.global	unbinp
	.global	evprogn
	.global	evprognr
	.global	evbndext
	.global	evbser
	.global	unbise
	.global	bndtrbex
	.global	evbale
	.global	bvar
	.global	mstack
	.global	errfs
	.global	erres
	.global	errsym
	.global	errnia
	.global	errnla
	.global	errnva
	.global	errudv
	.global	errudf
	.global	errudt
	.global	errwna
	.global	erroob
	.global	errbpa
	.global	errbal
	.global	errilb
	.global	errnab
	.global	errxia
	.global	gccons
	.global	gcfloat
	.global	gcnumb
	.global	inisymb
	.global	inicst
	.global	cpkgc
	.global	probj
	.global	probjt
	.global	getfn1
	.global	getfns
	.global	findfn
	.global	nreverse
	.global	evlis
	.global	displace
	.global	lllength
	.global	gettype
	.seg	"data1"
	.align	4
llink:
	.word 	0
evalst:
	.word 	0
forme:
	.word 	0
funct:
	.word 	0
savea1:
	.word 	0
savea2:
	.word 	0
savea3:
	.word 	0
savea4:
	.word 	0
errname:
	.word 	0
intret:
	.word 	0
intllink:
	.word 	0
dlink:
	.word 	0
rvbser:
	.word 	0
	.seg	"text"
ini_eval:
	add    	%i2,4*32,%o3
	set	cpkgc,%o4
	st   	%o3,[%o4+0]
	.seg	"data1"   
	.align	4
peva1:
	.asciz	"itsoft"
	.seg	"text"
beva1:
	set 	6,%l1
	set	peva1,%l2
	set	331*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	set	cpkgc,%o4
	st   	%i2,[%o4+0]
	.seg	"data1"   
	.align	4
peva2:
	.asciz	"eval"
	.seg	"text"
beva2:
	set	4,%l1
	set	peva2,%l2
	set	eval,%l3
	dec	8,%l3
	set	trash,%l4
	set	._eval,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva3:
	.asciz	"eval-when"
	.seg	"text"
beva3:
	set	9,%l1
	set	peva3,%l2
	set	evalwhen,%l3
	dec	8,%l3
	set	trash,%l4
	set	._evalwhen,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva4:
	.asciz	"symeval"
	.seg	"text"
beva4:
	set	7,%l1
	set	peva4,%l2
	set	symeval,%l3
	dec	8,%l3
	set	trash,%l4
	set	._symeval,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva5:
	.asciz	"arg"
	.seg	"text"
beva5:
	set	3,%l1
	set	peva5,%l2
	set	llarg,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llarg,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva6:
	.asciz	"&nobind"
	.seg	"text"
beva6:
	set 	7,%l1
	set	peva6,%l2
	set	336*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva7:
	.asciz	"traceval"
	.seg	"text"
beva7:
	set	8,%l1
	set	peva7,%l2
	set	traceval,%l3
	dec	8,%l3
	set	trash,%l4
	set	._traceval,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva8:
	.asciz	"stepeval"
	.seg	"text"
beva8:
	set	8,%l1
	set	peva8,%l2
	set	stepeval,%l3
	dec	8,%l3
	set	trash,%l4
	set	._stepeval,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva9:
	.asciz	"apply"
	.seg	"text"
beva9:
	set	5,%l1
	set	peva9,%l2
	set	uapply,%l3
	dec	8,%l3
	set	trash,%l4
	set	._uapply,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva10:
	.asciz	"funcall"
	.seg	"text"
beva10:
	set	7,%l1
	set	peva10,%l2
	set	funcall,%l3
	dec	8,%l3
	set	trash,%l4
	set	._funcall,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva11:
	.asciz	"tag"
	.seg	"text"
beva11:
	set	3,%l1
	set	peva11,%l2
	set	tag,%l3
	dec	8,%l3
	set	trash,%l4
	set	._tag,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva12:
	.asciz	"evtag"
	.seg	"text"
beva12:
	set	5,%l1
	set	peva12,%l2
	set	evtag,%l3
	dec	8,%l3
	set	trash,%l4
	set	._evtag,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva13:
	.asciz	"untilexit"
	.seg	"text"
beva13:
	set	9,%l1
	set	peva13,%l2
	set	untlxit,%l3
	dec	8,%l3
	set	trash,%l4
	set	._untlxit,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva14:
	.asciz	"exit"
	.seg	"text"
beva14:
	set	4,%l1
	set	peva14,%l2
	set	ffexit,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ffexit,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva15:
	.asciz	"evexit"
	.seg	"text"
beva15:
	set	6,%l1
	set	peva15,%l2
	set	evexit,%l3
	dec	8,%l3
	set	trash,%l4
	set	._evexit,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva16:
	.asciz	"unwind"
	.seg	"text"
beva16:
	set	6,%l1
	set	peva16,%l2
	set	unwind,%l3
	dec	8,%l3
	set	trash,%l4
	set	._unwind,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva17:
	.asciz	"unexit"
	.seg	"text"
beva17:
	set	6,%l1
	set	peva17,%l2
	set	unexit,%l3
	dec	8,%l3
	set	trash,%l4
	set	._unexit,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva18:
	.asciz	"lock"
	.seg	"text"
beva18:
	set	4,%l1
	set	peva18,%l2
	set	llock,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llock,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva19:
	.asciz	"protect"
	.seg	"text"
beva19:
	set	7,%l1
	set	peva19,%l2
	set	protect,%l3
	dec	8,%l3
	set	trash,%l4
	set	._protect,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva20:
	.asciz	"let"
	.seg	"text"
beva20:
	set	3,%l1
	set	peva20,%l2
	set	let,%l3
	dec	8,%l3
	set	trash,%l4
	set	._let,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva21:
	.asciz	"lets"
	.seg	"text"
beva21:
	set	4,%l1
	set	peva21,%l2
	set	letseq,%l3
	dec	8,%l3
	set	trash,%l4
	set	._letseq,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva22:
	.asciz	"letv"
	.seg	"text"
beva22:
	set	4,%l1
	set	peva22,%l2
	set	letv,%l3
	dec	8,%l3
	set	trash,%l4
	set	._letv,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva23:
	.asciz	"letvq"
	.seg	"text"
beva23:
	set	5,%l1
	set	peva23,%l2
	set	letvq,%l3
	dec	8,%l3
	set	trash,%l4
	set	._letvq,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva24:
	.asciz	"flet"
	.seg	"text"
beva24:
	set	4,%l1
	set	peva24,%l2
	set	flet,%l3
	dec	8,%l3
	set	trash,%l4
	set	._flet,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva25:
	.asciz	"function"
	.seg	"text"
beva25:
	set	8,%l1
	set	peva25,%l2
	set	function,%l3
	dec	8,%l3
	set	trash,%l4
	set	._function,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva26:
	.asciz	"_closure_"
	.seg	"text"
beva26:
	set 	9,%l1
	set	peva26,%l2
	set	356*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva27:
	.asciz	"-> "
	.seg	"text"
beva27:
	set 	3,%l1
	set	peva27,%l2
	set	357*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
peva28:
	.asciz	"<- "
	.seg	"text"
beva28:
	set 	3,%l1
	set	peva28,%l2
	set	358*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	set	evalst,%o4
	st   	%i2,[%o4+0]
	set	llink,%o4
	st   	%i2,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	eval
!
	.seg	"data1"   
	.align	4
.eval:	.word    0
	._eval = 5
	.seg	"text"
	.align	8
eval:
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	evalu2
	nop
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	evalu1
	nop
	set	1,%l1
	set	332*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4
evalu1:
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	dec  	4,%l7
	set	llink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	set	llink,%o4
	st   	%l2,[%o4+0]
	ba,a	evalu3
	.align	4
evalu2:
	ld	[%l7+0],%l1
	inc  	4,%l7
	dec  	4,%l7
	set	llink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	set	llink,%o4
	st   	%i2,[%o4+0]
evalu3:
	set	evala1,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	llink,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
evalc:
	ld	[%l1+0],%l1
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	1,%l4
	ba,a	eval
	.align	4

!
!	FENTRY	evalwhen
!
	.seg	"data1"   
	.align	4
.evalwhen:	.word    0
	._evalwhen = 6
	.seg	"text"
	.align	8
	.global	evalwhen
evalwhen:
	cmp    	%l1,%i3
	blt	evwhen3
	nop
	ld	[%l1+4],%l4
	ld	[%l1+0],%l1
	set	332*32,%l3
	add    	%i2,%l3,%l3
	ba,a	evwhen2
	.align	4
evwhen1:
	ld	[%l1+0],%l2
	cmp	%l2,%l3
	beq	evwhen4
	nop
	ld	[%l1+4],%l1
evwhen2:
	cmp    	%l1,%i3
	bge	evwhen1
	nop
evwhen3:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
evwhen4:
	mov   	%l4,%l1
	set	333*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	eva29
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
eva29:
	ba,a	evprogn
	.align	4

!
!	FENTRY	symeval
!
	.seg	"data1"   
	.align	4
.symeval:	.word    0
	._symeval = 2
	.seg	"text"
	.align	8
	.global	symeval
symeval:
	cmp    	%l1,%i2
	blt  	symeval1
	nop
	cmp    	%l1,%i3
	bge  	symeval1
	nop
	mov   	%l1,%l2
	ld	[%l1+0],%l1
	add    	%i2,1*32,%o1
	cmp	%l1,%o1
	beq	symeval2
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
symeval1:
	set	334*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4
symeval2:
	mov   	%l2,%l1
	set	334*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errudv
	.align	4

!
!	FENTRY	llarg
!
	.seg	"data1"   
	.align	4
.llarg:	.word    0
	._llarg = 5
	.seg	"text"
	.align	8
	.global	llarg
llarg:
	cmp	%l4,%g0
	beq	llarget
	nop
	set	1,%o1
	cmp	%l4,%o1
	beq	llarg1
	nop
	set	1,%l1
	set	335*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4
llarg1:
	dec  	4,%l7
	call	llarget
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	sub	%l1,%o1,%l1
	and 	%l1,%l0,%l1
	mov   	%l1,%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll  	%o0,2,%o0
	add    	%l4,%o0,%l4
	ld	[%l4+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
llarget:
	set	dlink,%l4
	ld	[%l4+0],%l4
	ld	[%l4+0],%l1
	inc  	4,%l4
	set	unbind1,%o1
	dec	8,%o1
	cmp	%l1,%o1
	bne	llarger
	nop
	inc  	4*3,%l4
	ld	[%l4+0],%l1
	inc  	4,%l4
	set	336*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l1,%o1
	bne	llarger
	nop
	ld	[%l4+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
llarger:
	set	335*32,%l2
	add    	%i2,%l2,%l2
	mov   	%i2,%l1
	ba,a	errnab
	.align	4

!
!	FENTRY	traceval
!
	.seg	"data1"   
	.align	4
.traceval:	.word    0
	._traceval = 5
	.seg	"text"
	.align	8
	.global	traceval
traceval:
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	tracev1
	nop
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	tracev2
	nop
	set	1,%l1
	set	337*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4
tracev1:
	ld	[%l7+0],%l1
	inc  	4,%l7
	mov   	%i2,%l2
	ba,a	tracev3
	.align	4
tracev2:
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
tracev3:
	dec  	4,%l7
	st   	%i2,[%l7+0]
	dec  	4,%l7
	set	savea4,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	savea3,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	savea2,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	savea1,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	funct,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	forme,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	evalst,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	add    	%i2,3*32,%o3
	set	evalst,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	set	338*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	llink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	set	llink,%o4
	st   	%l2,[%o4+0]
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind4,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	ba,a	evalan
	.align	4

!
!	FENTRY	stepeval
!
	.seg	"data1"   
	.align	4
.stepeval:	.word    0
	._stepeval = 5
	.seg	"text"
	.align	8
	.global	stepeval
stepeval:
	set	1,%o1
	cmp	%l4,%o1
	beq	stepev1
	nop
	set	2,%o1
	cmp	%l4,%o1
	beq	stepev2
	nop
	set	1,%l1
	set	338*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4
stepev1:
	ld	[%l7+0],%l1
	inc  	4,%l7
	dec  	4,%l7
	set	stepevr,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%i2,[%l7+0]
	ba,a	stepev3
	.align	4
stepev2:
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	dec  	4,%l7
	set	stepevr,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
stepev3:
	set	357*32,%l1
	add    	%i2,%l1,%l1
	dec  	4,%l7
	call	probj
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+4],%l1
	dec  	4,%l7
	call	probjt
	st   	%o7,[%l7+0]
	.align	4
	set	2,%l4
	ba,a	traceval
	.align	4
stepevr:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	358*32,%l1
	add    	%i2,%l1,%l1
	dec  	4,%l7
	call	probj
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	dec  	4,%l7
	call	probjt
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
evalt:
	set	llink,%l2
	ld	[%l2+0],%l2
	cmp    	%i2,%g4
	bne    	eva30
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva30:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
	cmp    	%i2,%g4
	bne    	eva31
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva31:
	st   	%l1,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l2,[%o2+4]
	mov   	%o2,%l2
	set	338*32,%l1
	add    	%i2,%l1,%l1
	dec  	4,%l7
	call	llitsoft
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,3*32,%o3
	set	evalst,%o4
	st   	%o3,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
popj:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
evalcar:
	ld	[%l1+0],%l1
	set	evalst,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	bne	evalt
	nop
	ba,a	evalan
	.align	4
evala1:
	set	evalst,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	bne	evalt
	nop
	ba,a	evalan
	.align	4
evalan:
	cmp    	%l1,%i3
	bge	evalis
	nop
	cmp    	%l1,%g3
	bge	evalat
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
evalis:
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	eva32
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
eva32:
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfs
	nop
	set	forme,%o4
	st   	%l1,[%o4+0]
	ld	[%l1+0],%l2
	ld	[%l1+4],%l1
	cmp    	%l2,%i2
	blt  	evalfv
	nop
	cmp    	%l2,%i3
	bge  	evalfv
	nop
	ld	[%l2+8],%l3
	lduh	[%l2+24],%l4
	mov   	%l4,%o0
	sll  	%o0,2,%o0
	set	teval,%o1
	dec	8,%o1
	add   	%o0,%o1,%o0
	ld	[%o0+8],%o0
	jmp 	%o0
	nop
	.align	4
teval:
	.word 	udfer
	.word 	eval0
	.word 	eval1
	.word 	eval2
	.word 	eval3
	.word 	evaln
	.word 	evalf
	.word 	evexp
	.word 	evfexp
	.word 	evmac
	.word 	evdmac
	.word 	evalm
	.word 	evaldm
evalat:
	cmp    	%l1,%i2
	blt  	evothat
	nop
	cmp    	%l1,%i3
	bge  	evothat
	nop
	mov   	%l1,%l2
	ld	[%l1+0],%l1
	add    	%i2,1*32,%o1
	cmp	%l1,%o1
	beq	evalera8
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
evalera8:
	mov   	%l2,%l1
	set	332*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errudv
	.align	4
evothat:
	cmp	%l1,%i1
	blt  	eva33
	nop
	cmp	%l1,%i2
	blt  	evextyp
	nop
eva33:
	cmp	%l1,%i0
	blt  	eva34
	nop
	cmp	%l1,%i1
	blt  	evextyp
	nop
eva34:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
evextyp:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	ld	[%l1+4],%l1
	cmp    	%l1,%i2
	blt  	evextypr
	nop
	cmp    	%l1,%i3
	bge  	evextypr
	nop
	set	332*32,%l2
	add    	%i2,%l2,%l2
	mov   	%i2,%l3
	dec  	4,%l7
	call	getfns
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	evextypr
	nop
	set	1,%l4
	ba,a	ffuncall
	.align	4
evextypr:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
eval0:
	cmp    	%l1,%i2
	bne	wnaer0
	nop
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
eval1:
	dec  	4,%l7
	st   	%l3,[%l7+0]
	cmp    	%l1,%i3
	blt	wnaer1
	nop
	ld	[%l1+4],%o0
	cmp    	%o0,%i2
	bne	wnaer1d
	nop
	ba,a	evalcar
	.align	4
eval2:
	dec  	4,%l7
	st   	%l3,[%l7+0]
	cmp    	%l1,%i3
	blt	wnaer2
	nop
	ld	[%l1+4],%l3
	cmp    	%l3,%i3
	blt	wnaer23
	nop
	dec  	4,%l7
	ld	[%l3+0],%o0
	st   	%o0,[%l7+0]
	ld	[%l3+4],%o0
	cmp    	%o0,%i2
	bne	wnaer23d
	nop
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	dec  	4,%l7
	call	evala1
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l2
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
eval3:
	dec  	4,%l7
	st   	%l3,[%l7+0]
	cmp    	%l1,%i3
	blt	wnaer3
	nop
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	cmp    	%l1,%i3
	blt	wnaer3
	nop
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	cmp    	%l1,%i3
	blt	wnaer3
	nop
	ld	[%l1+4],%o0
	cmp    	%o0,%i2
	bne	wnaer3d
	nop
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l3
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
evaln:
	cmp    	%l1,%i3
	bge	evalns0
	nop
	cmp    	%l1,%i2
	bne	evbal
	nop
	mov   	%g0,%l4
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
evalns0:
	ld	[%l1+4],%l2
	cmp    	%l2,%i3
	bge	evalns1
	nop
	cmp    	%l2,%i2
	bne	evbal2
	nop
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	set	1,%l4
	mov   	%l1,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
evalns1:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	ld	[%l1+4],%l2
	cmp    	%l2,%i3
	bge	evalnsn
	nop
	cmp    	%l2,%i2
	bne	evbal2
	nop
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	set	2,%l4
	mov   	%l1,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
evalnsn:
	set	1,%l4
evaln1:
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	inc	1,%l4
	cmp    	%l1,%i3
	bge	evaln1
	nop
	cmp    	%l1,%i2
	bne	evbal
	nop
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
evbal2:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	ba,a	evbal1
	.align	4
evbal:
	dec  	4,%l7
	st   	%l1,[%l7+0]
evbal1:
	mov   	%l3,%l1
evbale:
	dec  	4,%l7
	call	findfn
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l2
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	errbal
	.align	4
evalf:
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
evalm:
	dec  	4,%l7
	set	evala1,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	forme,%l1
	ld	[%l1+0],%l1
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
evaldm:
	set	forme,%l1
	ld	[%l1+0],%l1
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	evaldmr,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ld	[%l1+4],%l1
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
evaldmr:
	mov   	%l1,%l2
	ld	[%l7+0],%l1
	inc  	4,%l7
	dec  	4,%l7
	call	displace
	st   	%o7,[%l7+0]
	.align	4
	ba,a	evala1
	.align	4
evexp:
	mov   	%g0,%l4
	cmp    	%l1,%i3
	bge	evexp1
	nop
	ba,a	evexp2
	.align	4
evexp1:
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	inc	1,%l4
	cmp    	%l1,%i3
	bge	evexp1
	nop
evexp2:
	cmp    	%l1,%i2
	bne	everrbal
	nop
	set	errname,%o4
	st   	%l2,[%o4+0]
	set	intllink,%o4
	st   	%i2,[%o4+0]
evbnd:
	set	evexpg,%o3
	dec	8,%o3
	set	intret,%o4
	st   	%o3,[%o4+0]
	set	savea4,%o4
	st   	%l4,[%o4+0]
	set	savea1,%o4
	st   	%l3,[%o4+0]
	ld	[%l3+0],%l3
	set	savea2,%o4
	st   	%l3,[%o4+0]
	cmp    	%l3,%i3
	blt	evbnd6
	nop
evbnd2:
	cmp	%l4,%g0
	beq	evbnr32
	nop
	dec	1,%l4
	ld	[%l3+0],%l2
	cmp    	%l2,%i3
	bge	evbdst
	nop
	ld	[%l2+0],%l1
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%o1
	st   	%o1,[%l2+0]
	mov   	%l4,%o1
	sll  	%o1,2,%o1
	add    	%o1,%l7,%o1
	st   	%l1,[%o1+0]
	ld	[%l3+4],%l3
	cmp    	%l3,%i3
	bge	evbnd2
	nop
	ba,a	evbnd6
	.align	4
evbndext:
	nop
	cmp    	%l3,%i3
	bge	evbnd2
	nop
evbnd6:
	cmp    	%l3,%i2
	beq	evbnd9
	nop
	set	336*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l3,%o1
	beq	evbnd91
	nop
	dec	1,%l4
	set	savea4,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	sub	%o0,%o1,%o0
	set	savea4+2,%o4
	sth	%o0,[%o4]
	inc	1,%l4
	inc	1,%l4
	mov   	%i2,%l1
	ba,a	evbnd8
	.align	4
evbnd7:
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	eva35
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva35:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
evbnd8:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	evbnd7
	nop
	mov  	0,%l4
	dec  	4,%l7
	ld	[%l3+0],%o0
	st   	%o0,[%l7+0]
	st   	%l1,[%l3+0]
evbnd9:
	cmp	%l4,%g0
	bne	evbnr1
	nop
evbnd91:
	set	savea4,%l4
	ld	[%l4+0],%l4
evbnd92:
	set	savea1,%l1
	ld	[%l1+0],%l1
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l2
	set	unbind1,%o1
	dec	8,%o1
	cmp	%l2,%o1
	bne	evbnd94
	nop
	mov   	%l4,%l3
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	add	%l3,3,%l3
	and 	%l3,%l0,%l3
	mov   	%l3,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l2
	cmp	%l2,%l1
	bne	evbnd94
	nop
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	add	%l3,1,%l3
	and 	%l3,%l0,%l3
	mov   	%l3,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l2
	set	336*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l2,%o1
	beq	evbnd94
	nop
	mov   	%l4,%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll  	%o0,2,%o0
	add    	%l7,%o0,%l7
	set	intret,%o7
	ld	[%o7+0],%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
evbnd94:
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	set	savea2,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
evexpn:
	dec  	4,%l7
	set	llink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind1,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	set	intllink,%o3
	ld	[%o3+0],%o3
	set	llink,%o4
	st   	%o3,[%o4+0]
	set	intret,%o7
	ld	[%o7+0],%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
evbnr1:
	mov   	%i2,%l1
	set	savea4,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	sub	%o0,%o1,%o0
	set	savea4+2,%o4
	sth	%o0,[%o4]
	set	savea4,%l1
	ld	[%l1+0],%l1
evbnr2:
	ld	[%l7+0],%l3
	inc  	4,%l7
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	evbnr2
	nop
	mov  	0,%l4
	set	savea4,%l4
	ld	[%l4+0],%l4
evbnr31:
	set	savea1,%o4
	st   	%l1,[%o4+0]
	set	savea2,%l3
	ld	[%l3+0],%l3
	set	errbner,%o3
	dec	8,%o3
	set	savea3,%o4
	st   	%o3,[%o4+0]
	ba,a	unbise
	.align	4
evbnr32:
	set	savea4,%l4
	ld	[%l4+0],%l4
evbnr33:
	set	savea2,%l1
	ld	[%l1+0],%l1
	dec  	4,%l7
	call	lllength
	st   	%o7,[%l7+0]
	.align	4
	ba,a	evbnr31
	.align	4
errbner:
	set	savea1,%l1
	ld	[%l1+0],%l1
	dec  	4,%l7
	call	ferrnam
	st   	%o7,[%l7+0]
	.align	4
	ba,a	errwna
	.align	4
evbser:
	set	rvbser,%l7
	ld	[%l7+0],%l7
	cmp    	%i2,%g4
	bne    	eva36
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva36:
	st   	%l3,[%g4+0]
	mov   	%g4,%l3
	ld	[%g4+4],%g4
	st   	%i2,[%l3+4]
	cmp    	%i2,%g4
	bne    	eva37
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva37:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l3,[%o2+4]
	mov   	%o2,%l3
	set	savea1,%o4
	st   	%l3,[%o4+0]
	set	savea4,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	sub	%o0,%o1,%o0
	set	savea4+2,%o4
	sth	%o0,[%o4]
	mov   	%l4,%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll  	%o0,2,%o0
	add    	%l7,%o0,%l7
	mov   	%i2,%l2
	cmp    	%l1,%i3
	blt	evbser5
	nop
evbser4:
	ld	[%l1+4],%l3
	st   	%l2,[%l1+4]
	mov   	%l1,%l2
	mov   	%l3,%l1
	cmp    	%l1,%i3
	bge	evbser4
	nop
evbser5:
	ld	[%l7+0],%o0
	st   	%l2,[%l7+0]
	mov 	%o0,%l2
	set	savea4,%l4
	ld	[%l4+0],%l4
	set	savea2,%l3
	ld	[%l3+0],%l3
	set	evbser9,%o3
	dec	8,%o3
	set	savea3,%o4
	st   	%o3,[%o4+0]
	ba,a	unbise
	.align	4
evbser9:
	set	savea1,%l1
	ld	[%l1+0],%l1
	dec  	4,%l7
	call	ferrnam
	st   	%o7,[%l7+0]
	.align	4
	ba,a	errilb
	.align	4
evbdst:
	set	savea3,%o4
	st   	%l3,[%o4+0]
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l3
	mov   	%i2,%l1
	set	rvbser,%o4
	st   	%l7,[%o4+0]
	dec  	4,%l7
	call	evbdst1
	st   	%o7,[%l7+0]
	.align	4
	mov   	%i2,%l2
	cmp    	%l1,%i3
	blt	evbdst6
	nop
evbdst4:
	ld	[%l1+4],%l3
	st   	%l2,[%l1+4]
	mov   	%l1,%l2
	mov   	%l3,%l1
	cmp    	%l1,%i3
	bge	evbdst4
	nop
	mov   	%l2,%l1
evbdst6:
	set	savea3,%l3
	ld	[%l3+0],%l3
	mov   	%l4,%o1
	sll  	%o1,2,%o1
	add    	%o1,%l7,%o1
	st   	%l1,[%o1+0]
	ld	[%l3+4],%l3
	cmp    	%l3,%i3
	bge	evbnd2
	nop
	ba,a	evbnd6
	.align	4
evbdst1:
	cmp    	%l3,%i2
	beq	evbdst11
	nop
	cmp    	%l3,%i3
	blt	evbser
	nop
evbdst11:
	dec  	4,%l7
	ld	[%l2+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l2+0],%l2
	cmp    	%l2,%i3
	bge	evbdst8
	nop
	cmp    	%i2,%g4
	bne    	eva38
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva38:
	ld	[%l2+0],%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l3+0],%o3
	st   	%o3,[%l2+0]
evbdst2:
	ld	[%l3+4],%l3
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l2,%i3
	bge	evbdst1
	nop
	cmp    	%l2,%i2
	beq	evbdst3
	nop
	cmp    	%i2,%g4
	bne    	eva39
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva39:
	ld	[%l2+0],%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	st   	%l3,[%l2+0]
evbdst3:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
evbdst8:
	dec  	4,%l7
	st   	%l3,[%l7+0]
	ld	[%l3+0],%l3
	dec  	4,%l7
	call	evbdst1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
	ba,a	evbdst2
	.align	4
evexpg:
	ld	[%l1+4],%l1
	cmp    	%l1,%i3
	blt	evprogn7
	nop
	ld	[%l1+4],%l2
	cmp    	%l2,%i3
	bge	evprogn2
	nop
	cmp    	%l2,%i2
	bne	evprogn5
	nop
	ba,a	evalcar
	.align	4
evprogn:
	cmp    	%l1,%i3
	blt	evprogn7
	nop
	ld	[%l1+4],%l2
	cmp    	%l2,%i3
	bge	evprogn2
	nop
	cmp    	%l2,%i2
	bne	evprogn5
	nop
	ba,a	evalcar
	.align	4
evprogn2:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	evprognr,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	evalcar
	.align	4
evprognr:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l1+4],%l1
	ld	[%l1+4],%l2
	cmp    	%l2,%i3
	bge	evprogn2
	nop
	cmp    	%l2,%i2
	bne	evprogn5
	nop
	ba,a	evalcar
	.align	4
evprogn5:
	mov   	%l2,%l1
evprogn6:
	dec  	4,%l7
	call	ferrnam
	st   	%o7,[%l7+0]
	.align	4
everrbal:
	ba,a	errbal
	.align	4
evprogn7:
	cmp    	%l1,%i2
	beq	popj
	nop
	ba,a	evprogn6
	.align	4
evmac:
	dec  	4,%l7
	set	evala1,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	forme,%l1
	ld	[%l1+0],%l1
	ba,a	evfexp
	.align	4
evdmac:
	set	forme,%l1
	ld	[%l1+0],%l1
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	evaldmr,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ld	[%l1+4],%l1
evfexp:
	set	errname,%o4
	st   	%l2,[%o4+0]
bndtrb:
	set	evexpg,%o3
	dec	8,%o3
	set	intret,%o4
	st   	%o3,[%o4+0]
	set	savea1,%o4
	st   	%l3,[%o4+0]
	ld	[%l3+0],%l3
	set	savea2,%o4
	st   	%l3,[%o4+0]
bndtrbex:
	mov   	%g0,%l4
	ba,a	bndtrb2
	.align	4
bndtrb1:
	cmp    	%l1,%i3
	blt	evbnr33
	nop
	inc	1,%l4
	ld	[%l3+0],%l2
	cmp    	%l2,%i3
	bge	bndtrb7
	nop
	dec  	4,%l7
	ld	[%l2+0],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+0],%o3
	st   	%o3,[%l2+0]
	ld	[%l1+4],%l1
	ld	[%l3+4],%l3
bndtrb2:
	cmp    	%l3,%i3
	bge	bndtrb1
	nop
	cmp    	%l3,%i2
	beq	bndtrb3
	nop
	set	336*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l3,%o1
	beq	bndtrb5
	nop
	inc	1,%l4
	dec  	4,%l7
	ld	[%l3+0],%o0
	st   	%o0,[%l7+0]
	st   	%l1,[%l3+0]
	ba,a	bndtrb6
	.align	4
bndtrb3:
	cmp    	%l1,%i2
	beq	bndtrb6
	nop
	ba,a	evbnr33
	.align	4
bndtrb4:
	dec  	4,%l7
	ld	[%l1+0],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+4],%l1
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfs
	nop
	inc	1,%l4
bndtrb5:
	cmp    	%l1,%i3
	bge	bndtrb4
	nop
	cmp    	%l1,%i2
	beq	bndtrb6
	nop
	dec  	4,%l7
	call	ferrnam
	st   	%o7,[%l7+0]
	.align	4
	ba,a	errbal
	.align	4
bndtrb6:
	set	savea1,%l1
	ld	[%l1+0],%l1
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l2
	set	unbind1,%o1
	dec	8,%o1
	cmp	%l2,%o1
	bne	evbnd94
	nop
	mov   	%l4,%l3
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	add	%l3,3,%l3
	and 	%l3,%l0,%l3
	mov   	%l3,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l2
	cmp	%l2,%l1
	bne	evbnd94
	nop
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	add	%l3,1,%l3
	and 	%l3,%l0,%l3
	mov   	%l3,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l2
	set	336*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l2,%o1
	beq	evbnd94
	nop
	mov   	%l4,%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll  	%o0,2,%o0
	add    	%l7,%o0,%l7
	set	intret,%o7
	ld	[%o7+0],%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
bndtrb7:
	dec  	4,%l7
	st   	%i2,[%l7+0]
	set	rvbser,%o4
	st   	%l7,[%o4+0]
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	ld	[%l3+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+0],%l3
	mov   	%i2,%l1
	set	savea4,%o4
	st   	%l4,[%o4+0]
	mov   	%g0,%l4
	dec  	4,%l7
	call	evbdst1
	st   	%o7,[%l7+0]
	.align	4
	set	savea4,%l4
	ld	[%l4+0],%l4
	mov   	%i2,%l2
	cmp    	%l1,%i3
	blt	bndtrb9
	nop
bndtrb8:
	ld	[%l1+4],%l3
	st   	%l2,[%l1+4]
	mov   	%l1,%l2
	mov   	%l3,%l1
	cmp    	%l1,%i3
	bge	bndtrb8
	nop
bndtrbz:
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	inc  	4*1,%l7
	dec  	4,%l7
	st   	%l2,[%l7+0]
	ba,a	bndtrb2
	.align	4
bndtrb9:
	mov   	%i2,%l2
	ba,a	bndtrbz
	.align	4
evalfv:
	cmp    	%l2,%i3
	blt	udfer
	nop
	ld	[%l2+0],%l3
	set	435*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l3,%o1
	beq	evalll
	nop
	set	436*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l3,%o1
	beq	evallf
	nop
	set	437*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l3,%o1
	beq	evallm
	nop
	set	356*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l3,%o1
	beq	evallc
	nop
	ba,a	udfer
	.align	4
evalll:
	ld	[%l2+4],%l3
	set	435*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	verlpar
	st   	%o7,[%l7+0]
	.align	4
	set	435*32,%l2
	add    	%i2,%l2,%l2
	mov   	%g0,%l4
	ba,a	evalll2
	.align	4
evalll1:
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	inc	1,%l4
evalll2:
	cmp    	%l1,%i3
	bge	evalll1
	nop
	cmp    	%l1,%i2
	bne	everrbal
	nop
	set	errname,%o4
	st   	%l2,[%o4+0]
	set	llink,%o3
	ld	[%o3+0],%o3
	set	intllink,%o4
	st   	%o3,[%o4+0]
	ba,a	evbnd
	.align	4
evallf:
	ld	[%l2+4],%l3
	set	436*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	set	llink,%o3
	ld	[%o3+0],%o3
	set	intllink,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	verlpar
	st   	%o7,[%l7+0]
	.align	4
	ba,a	bndtrb
	.align	4
evallm:
	set	forme,%l1
	ld	[%l1+0],%l1
	ld	[%l2+4],%l3
	dec  	4,%l7
	set	evala1,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	437*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	set	llink,%o3
	ld	[%o3+0],%o3
	set	intllink,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	verlpar
	st   	%o7,[%l7+0]
	.align	4
	ba,a	bndtrb
	.align	4
evallc:
	ld	[%l2+4],%l2
	ld	[%l2+4],%l3
	set	356*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	ld	[%l2+0],%o3
	set	intllink,%o4
	st   	%o3,[%o4+0]
	ba,a	evexp
	.align	4
udfer:
	set	forme,%l4
	ld	[%l4+0],%l4
	sub	%l4,%i3,%o2
	srl	%o2,3,%o2
	and	%o2,31,%o1
	srl	%o2,5,%o2
	sll	%o2,2,%o3
	set	btbin,%o0
	ld	[%o0+0],%o0
	add	%o0,%o3,%o0
	ld	[%o0+0],%o2
	srl 	%o2,%o1,%o2
	andcc	%o2,1,%o2
	beq  	udfer8
	nop
	mov   	%l4,%l1
	dec  	4,%l7
	call	gettype
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	blt  	udfer8
	nop
	cmp    	%l1,%i3
	bge  	udfer8
	nop
	cmp    	%l1,%i2
	beq	udfer8
	nop
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	332*32,%l2
	add    	%i2,%l2,%l2
	mov   	%i2,%l3
	dec  	4,%l7
	call	getfns
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l1,%i2
	beq	udfer8
	nop
	dec  	4,%l7
	set	forme,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	set	1,%l4
	ba,a	ffuncall
	.align	4
udfer8:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	mov   	%l2,%l1
	set	332*32,%l2
	add    	%i2,%l2,%l2
	dec  	4,%l7
	call	errudf
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l2
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	eva40
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva40:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ba,a	evalan
	.align	4
xwnaer0:
	mov   	%l1,%l2
	ba,a	wnaer00
	.align	4
wnaer0:
	cmp    	%l1,%i2
	beq	wnaer00
	nop
	cmp    	%l1,%i3
	blt	balr1
	nop
wnaer00:
	mov   	%g0,%l1
	ba,a	wnaer
	.align	4
xwnaer1:
	mov   	%l1,%l2
	ba,a	wnaer10
	.align	4
wnaer1d:
	ld	[%l1+4],%l1
wnaer1:
	cmp    	%l1,%i2
	beq	wnaer10
	nop
	cmp    	%l1,%i3
	blt	balr1
	nop
wnaer10:
	set	1,%l1
	ba,a	wnaer
	.align	4
xwnaer2:
	mov   	%l1,%l2
	ba,a	wnaer20
	.align	4
wnaer23d:
	ld	[%l3+4],%l3
wnaer23:
	mov   	%l3,%l1
wnaer2:
	cmp    	%l1,%i2
	beq	wnaer20
	nop
	cmp    	%l1,%i3
	blt	balr1
	nop
wnaer20:
	set	2,%l1
	ba,a	wnaer
	.align	4
xwnaer3:
	mov   	%l1,%l2
	ba,a	wnaer30
	.align	4
wnaer3d:
	ld	[%l1+4],%l1
wnaer3:
	cmp    	%l1,%i2
	beq	wnaer30
	nop
	cmp    	%l1,%i3
	blt	balr1
	nop
wnaer30:
	set	3,%l1
wnaer:
	ba,a	errwna
	.align	4
balr1:
	ba,a	errbal
	.align	4

!
!	FENTRY	funcall
!
	.seg	"data1"   
	.align	4
.funcall:	.word    0
	._funcall = 5
	.seg	"text"
	.align	8
funcall:
	set	340*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	funcerwn
	nop
funcall0:
	dec	1,%l4
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l1
	mov   	%l4,%o1
	sll  	%o1,2,%o1
	add    	%o1,%l7,%o1
	set	popj,%o0
	dec	8,%o0
	st   	%o0,[%o1+0]
ffuncall:
	set	intllink,%o4
	st   	%i2,[%o4+0]
	cmp    	%l1,%i2
	blt  	applys
	nop
	cmp    	%l1,%i3
	bge  	applys
	nop
	lduh	[%l1+24],%l3
	mov   	%l3,%o0
	sll  	%o0,2,%o0
	set	tfuncall,%o1
	dec	8,%o1
	add   	%o0,%o1,%o0
	ld	[%o0+8],%o0
	jmp 	%o0
	nop
	.align	4
tfuncall:
	.word 	fncludf
	.word 	fncal0
	.word 	fncal1
	.word 	fncal2
	.word 	fncal3
	.word 	fncaln
	.word 	fncalf
	.word 	fncalex
	.word 	fncalex
	.word 	fncalmc
	.word 	fncalmd
	.word 	fncalm
	.word 	fncaldm
funcerwn:
	mov   	%l4,%l1
	dec  	4,%l7
	call	ferrnam
	st   	%o7,[%l7+0]
	.align	4
	ba,a	errwna
	.align	4
fncludf:
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	call	ferrnam
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	errudf
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	ba,a	ffuncall
	.align	4
fncal0:
	mov   	%l4,%o1
	cmp    	%o1,0
	bne	xwnaer0
	nop
	ld	[%l1+8],%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
fncal1:
	mov   	%l4,%o1
	cmp    	%o1,1
	bne	xwnaer1
	nop
	ld	[%l1+8],%l4
	ld	[%l7+0],%l1
	inc  	4,%l7
	mov   	%l4,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
fncal2:
	mov   	%l4,%o1
	cmp    	%o1,2
	bne	xwnaer2
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l1+8],%l4
	ld	[%l7+0],%l1
	inc  	4,%l7
	mov   	%l4,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
fncal3:
	mov   	%l4,%o1
	cmp    	%o1,3
	bne	xwnaer3
	nop
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l1+8],%l4
	ld	[%l7+0],%l1
	inc  	4,%l7
	mov   	%l4,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
fncaln:
	ld	[%l1+8],%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
fncalf:
	ld	[%l1+8],%l2
	mov   	%i2,%l1
	ba,a	fncalf2
	.align	4
fncalf1:
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	eva41
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva41:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
fncalf2:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	fncalf1
	nop
	mov   	%l2,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
fncalm:
	ld	[%l1+8],%l2
	mov   	%i2,%l1
	ba,a	fncalm2
	.align	4
fncalm1:
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	eva42
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva42:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
fncalm2:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	fncalm1
	nop
	cmp    	%i2,%g4
	bne    	eva43
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva43:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	dec  	4,%l7
	set	evala1,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	mov   	%l2,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
fncaldm:
	ld	[%l1+8],%l2
	mov   	%i2,%l1
	ba,a	fncaldm2
	.align	4
fncaldm1:
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	eva44
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva44:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
fncaldm2:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	fncaldm1
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	evaldmr,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	mov   	%l2,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
fncalex:
	ld	[%l1+8],%l3
	set	errname,%o4
	st   	%l1,[%o4+0]
	ba,a	evbnd
	.align	4
fncalmc:
	ld	[%l1+8],%l3
	set	errname,%o4
	st   	%l1,[%o4+0]
	mov   	%i2,%l1
	ba,a	fncalmc2
	.align	4
fncalmc1:
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	eva45
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva45:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
fncalmc2:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	fncalmc1
	nop
	cmp    	%i2,%g4
	bne    	eva46
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva46:
	set	errname,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	dec  	4,%l7
	set	evala1,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	bndtrb
	.align	4
fncalmd:
	ld	[%l1+8],%l3
	set	errname,%o4
	st   	%l1,[%o4+0]
	mov   	%i2,%l1
	ba,a	fncalmd2
	.align	4
fncalmd1:
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	eva47
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva47:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
fncalmd2:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	fncalmd1
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	evaldmr,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	bndtrb
	.align	4
applys:
	cmp    	%l1,%i3
	blt	fncludf
	nop
	ld	[%l1+0],%l3
	set	435*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l3,%o1
	beq	applyll
	nop
	set	436*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l3,%o1
	beq	applylf
	nop
	set	356*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l3,%o1
	beq	applylc
	nop
	ba,a	fncludf
	.align	4
applyll:
	set	435*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	ba,a	applylf1
	.align	4
applylf:
	set	436*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
applylf1:
	ld	[%l1+4],%l3
	dec  	4,%l7
	call	verlpar
	st   	%o7,[%l7+0]
	.align	4
	ba,a	evbnd
	.align	4
applylc:
	set	356*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	ld	[%l1+4],%l1
	ld	[%l1+0],%o3
	set	intllink,%o4
	st   	%o3,[%o4+0]
	ld	[%l1+4],%l3
	ba,a	evbnd
	.align	4

!
!	FENTRY	uapply
!
	.seg	"data1"   
	.align	4
.uapply:	.word    0
	._uapply = 5
	.seg	"text"
	.align	8
	.global	uapply
uapply:
	set	339*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,2
	blt	uapplyer
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
	dec	1,%l4
	ba,a	uapply3
	.align	4
uapply2:
	dec  	4,%l7
	ld	[%l2+0],%o0
	st   	%o0,[%l7+0]
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfs
	nop
	ld	[%l2+4],%l2
	inc	1,%l4
uapply3:
	cmp    	%l2,%i3
	bge	uapply2
	nop
	cmp    	%l2,%i2
	beq	funcall0
	nop
	mov   	%l2,%l1
	dec	1,%l4
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l2
	ba,a	errbal
	.align	4
uapplyer:
	set	2,%l1
	set	339*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4
apply:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	2,%l4
	ba,a	uapply
	.align	4
unbinp:
	ld	[%l7+0],%l4
	inc  	4,%l7
	set	unbind1,%o1
	dec	8,%o1
	cmp	%l4,%o1
	beq	unbinp1
	nop
	set	unbind2,%o1
	dec	8,%o1
	cmp	%l4,%o1
	beq	unbinp2
	nop
	set	unbind3,%o1
	dec	8,%o1
	cmp	%l4,%o1
	beq	unbinp3
	nop
	set	unbind4,%o1
	dec	8,%o1
	cmp	%l4,%o1
	beq	unbinp4
	nop
	set	unbind5,%o1
	dec	8,%o1
	cmp	%l4,%o1
	beq	unbinp5
	nop
	set	unbind6,%o1
	dec	8,%o1
	cmp	%l4,%o1
	beq	unbinp6
	nop
	set	unbind7,%o1
	dec	8,%o1
	cmp	%l4,%o1
	beq	unbinp7
	nop
	set	unbind8,%o1
	dec	8,%o1
	cmp	%l4,%o1
	beq	unbinp8
	nop
	set	unbind9,%o1
	dec	8,%o1
	cmp	%l4,%o1
	beq	unbinp9
	nop
	set	unbind10,%o1
	dec	8,%o1
	cmp	%l4,%o1
	beq	unbinp10
	nop
	.seg	"data1"   
	.align	4
seva48:	.asciz	" error UNBINP "
	.seg	"text"
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	set	seva48,%o1
	set	14,%o0
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
	set	bfloat,%g3
	ld	[%g3+0],%g3
unbind0:
	nop
unbinp0:
	ba,a	erres
	.align	4
unbind1:
	set	popj,%l3
	dec	8,%l3
unbinp1:
	set	savea3,%o4
	st   	%l3,[%o4+0]
	ld	[%l7+0],%o0
	set	dlink,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	llink,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	inc  	4*1,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
unbise:
	set	1,%o1
	cmp	%l4,%o1
	bne	unbis19
	nop
	cmp    	%l3,%i3
	blt	unbis14
	nop
	ld	[%l3+0],%o0
	cmp    	%o0,%i3
	bge	unbis19
	nop
	ld	[%l3+0],%l3
	ld	[%l7+0],%o0
	st   	%o0,[%l3+0]
	inc  	4,%l7
	set	savea3,%o7
	ld	[%o7+0],%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
unbis14:
	set	336*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l3,%o1
	beq	unbis15
	nop
	ld	[%l7+0],%o0
	st   	%o0,[%l3+0]
	inc  	4,%l7
	set	savea3,%o7
	ld	[%o7+0],%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
unbis15:
	inc  	4*1,%l7
	set	savea3,%o7
	ld	[%o7+0],%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
unbis19:
	set	savea4,%o4
	st   	%l4,[%o4+0]
	set	savea2,%o4
	st   	%l2,[%o4+0]
	ba,a	unbid15
	.align	4
unbid12:
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	unbid18
	nop
	ld	[%l3+0],%l2
	ld	[%l3+4],%l3
	cmp    	%l2,%i3
	bge	unbid19
	nop
	dec	1,%l4
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%o1
	st   	%o1,[%l2+0]
unbid15:
	cmp    	%l3,%i3
	bge	unbid12
	nop
	cmp    	%l3,%i2
	beq	unbid18
	nop
	set	336*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l3,%o1
	beq	unbid18
	nop
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	unbid18
	nop
	dec	1,%l4
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%o1
	st   	%o1,[%l3+0]
unbid18:
	set	savea2,%l2
	ld	[%l2+0],%l2
	set	savea4,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll  	%o0,2,%o0
	add    	%l7,%o0,%l7
	set	savea3,%o7
	ld	[%o7+0],%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
unbid19:
	dec  	4,%l7
	st   	%l3,[%l7+0]
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l3
	dec  	4,%l7
	call	unbides1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
	dec	1,%l4
	ba,a	unbid15
	.align	4
unbides0:
	dec  	4,%l7
	set	unbides2,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
unbides1:
	cmp    	%l3,%i2
	beq	unbides3
	nop
	dec  	4,%l7
	ld	[%l2+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l2+0],%l2
	cmp    	%l2,%i3
	bge	unbides0
	nop
	ld	[%l3+0],%o3
	st   	%o3,[%l2+0]
	ld	[%l3+4],%l3
unbides2:
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l2,%i3
	bge	unbides1
	nop
	cmp    	%l2,%i2
	beq	unbides3
	nop
	ld	[%l3+0],%o3
	st   	%o3,[%l2+0]
	ld	[%l3+4],%l3
unbides3:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
unbind2:
	set	popj,%l3
	dec	8,%l3
unbinp2:
	ld	[%l7+0],%o0
	set	dlink,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	set	savea3,%o4
	st   	%l3,[%o4+0]
	ba,a	unbdw7
	.align	4
unbdw6:
	ld	[%l7+0],%l3
	inc  	4,%l7
	sth   	%l3,[%l4+24]
	ld	[%l7+0],%o0
	st   	%o0,[%l4+8]
	inc  	4,%l7
unbdw7:
	ld	[%l7+0],%l4
	inc  	4,%l7
	cmp	%l4,%g0
	bne	unbdw6
	nop
	set	savea3,%o7
	ld	[%o7+0],%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
unbind3:
	ld	[%l7+0],%o0
	set	dlink,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
unbinp3:
	ld	[%l7+0],%o0
	set	dlink,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
unbind4:
	set	popj,%l3
	dec	8,%l3
unbinp4:
	ld	[%l7+0],%o0
	set	dlink,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	llink,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	inc  	4*1,%l7
	ld	[%l7+0],%o0
	set	evalst,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	forme,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	funct,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	savea1,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	savea2,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	savea3,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	savea4,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	inc  	4*1,%l7
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
unbind5:
	set	popj,%l3
	dec	8,%l3
unbinp5:
	ld	[%l7+0],%o0
	set	dlink,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	cmp    	%i2,%g4
	bne    	eva49
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva49:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	mov   	%i2,%l2
	cmp    	%i2,%g4
	bne    	eva50
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva50:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	mov   	%l1,%l2
	mov   	%l4,%l1
	dec  	4,%l7
	call	apply
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
unbind6:
	set	popj,%l3
	dec	8,%l3
unbinp6:
	ld	[%l7+0],%o0
	set	dlink,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	st   	%l3,[%l7+0]
	mov 	%o0,%l3
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	mov   	%l3,%l1
	dec  	4,%l7
	call	evprogn
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
unbind7:
	set	popj,%l3
	dec	8,%l3
unbinp7:
	ld	[%l7+0],%o0
	set	dlink,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	mov   	%l1,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
unbind8:
	ld	[%l7+0],%o0
	set	dlink,%o4
	st   	%o0,[%o4+0]
	inc  	4*2,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
unbinp8:
	ld	[%l7+0],%o0
	set	dlink,%o4
	st   	%o0,[%o4+0]
	inc  	4*2,%l7
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
unbind9:
	set	popj,%l3
	dec	8,%l3
unbinp9:
	ld	[%l7+0],%o0
	set	dlink,%o4
	st   	%o0,[%o4+0]
	set	llink,%l4
	ld	[%l4+0],%l4
	ld	[%l4+4],%o3
	set	llink,%o4
	st   	%o3,[%o4+0]
	ld	[%l4+0],%l4
	st   	%i2,[%l4+4]
	inc  	4*2,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	add	%l4,%o1,%l4
	and 	%l4,%l0,%l4
	mov   	%l4,%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll  	%o0,2,%o0
	add    	%l7,%o0,%l7
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
unbind10:
	set	popj,%l3
	dec	8,%l3
unbinp10:
	ld	[%l7+0],%o0
	set	dlink,%o4
	st   	%o0,[%o4+0]
	set	llink,%l4
	ld	[%l4+0],%l4
	ld	[%l4+4],%o3
	set	llink,%o4
	st   	%o3,[%o4+0]
	ld	[%l4+0],%l4
	ld	[%l4+4],%l4
	st   	%i2,[%l4+4]
	inc  	4*2,%l7
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4

!
!	FENTRY	let
!
	.seg	"data1"   
	.align	4
.let:	.word    0
	._let = 12
	.seg	"text"
	.align	8
	.global	let
let:
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+0],%l1
	mov   	%i2,%l2
	cmp    	%i2,%g4
	bne    	eva51
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva51:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	mov   	%i2,%l3
	cmp    	%i2,%g4
	bne    	eva52
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva52:
	st   	%l3,[%g4+0]
	mov   	%g4,%l3
	ld	[%g4+4],%g4
	st   	%i2,[%l3+4]
	dec  	4,%l7
	st   	%l3,[%l7+0]
let2:
	cmp    	%l1,%i3
	blt	let8
	nop
	ld	[%l1+0],%l4
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	cmp    	%l4,%i3
	bge	let3
	nop
	mov   	%l4,%l1
	mov   	%i2,%l4
	ba,a	let4
	.align	4
let3:
	ld	[%l4+0],%l1
	ld	[%l4+4],%l4
let4:
	cmp    	%i2,%g4
	bne    	eva53
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva53:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	st   	%l1,[%l2+4]
	mov   	%l1,%l2
	cmp    	%l4,%i2
	beq	let5
	nop
	cmp    	%l4,%i3
	blt	letwla1
	nop
	ld	[%l4+4],%o0
	cmp    	%o0,%i2
	bne	letwla1
	nop
let5:
	ld	[%l4+0],%l1
	cmp    	%i2,%g4
	bne    	eva54
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva54:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	st   	%l1,[%l3+4]
	mov   	%l1,%l3
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	let2
	.align	4
let8:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l1+4],%l1
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l2+4],%l2
	ld	[%l7+0],%l4
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	eva55
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva55:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%l4,[%l2+4]
	cmp    	%i2,%g4
	bne    	eva56
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva56:
	set	435*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l2,[%o2+4]
	mov   	%o2,%l2
	cmp    	%i2,%g4
	bne    	eva57
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva57:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
letwla1:
	mov   	%l4,%l1
letwla2:
	set	350*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4

!
!	FENTRY	letseq
!
	.seg	"data1"   
	.align	4
.letseq:	.word    0
	._letseq = 6
	.seg	"text"
	.align	8
	.global	letseq
letseq:
	set	351*32,%l1
	add    	%i2,%l1,%l1
	set	332*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errudf
	.align	4

!
!	FENTRY	letv
!
	.seg	"data1"   
	.align	4
.letv:	.word    0
	._letv = 6
	.seg	"text"
	.align	8
	.global	letv
letv:
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	set	352*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
letvq2:
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	eva58
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva58:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l3,[%o2+4]
	mov   	%o2,%l3
	set	llink,%o3
	ld	[%o3+0],%o3
	set	intllink,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	verlpar
	st   	%o7,[%l7+0]
	.align	4
	ba,a	bndtrb
	.align	4

!
!	FENTRY	letvq
!
	.seg	"data1"   
	.align	4
.letvq:	.word    0
	._letvq = 6
	.seg	"text"
	.align	8
	.global	letvq
letvq:
	dec  	4,%l7
	ld	[%l1+0],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+4],%l1
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	set	353*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	ba,a	letvq2
	.align	4

!
!	FENTRY	flet
!
	.seg	"data1"   
	.align	4
.flet:	.word    0
	._flet = 6
	.seg	"text"
	.align	8
	.global	flet
flet:
	cmp    	%l1,%i3
	blt	fleterr1
	nop
	ld	[%l1+0],%l2
	ld	[%l1+4],%o3
	set	savea1,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	st   	%g0,[%l7+0]
	ba,a	flet3
	.align	4
flet2:
	ld	[%l2+0],%l1
	cmp    	%l1,%i3
	blt	fleterr1
	nop
	ld	[%l1+0],%l3
	set	bvar,%o1
	ld	[%o1+0],%o1
	cmp    	%l3,%o1
	blt  	fleterr2
	nop
	cmp    	%l3,%i3
	bge  	fleterr2
	nop
	dec  	4,%l7
	ld	[%l3+8],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+4],%o3
	st   	%o3,[%l3+8]
	lduh	[%l3+24],%l4
	dec  	4,%l7
	st   	%l4,[%l7+0]
	set	7,%o0
	sth   	%o0,[%l3+24]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	ld	[%l2+4],%l2
flet3:
	cmp    	%l2,%i3
	bge	flet2
	nop
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind2,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	set	savea1,%l1
	ld	[%l1+0],%l1
	set	354*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	ba,a	evprogn
	.align	4
fleterr1:
	set	354*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnla
	.align	4
fleterr2:
	mov   	%l3,%l1
	set	354*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnva
	.align	4

!
!	FENTRY	tag
!
	.seg	"data1"   
	.align	4
.tag:	.word    0
	._tag = 6
	.seg	"text"
	.align	8
	.global	tag
tag:
	dec  	4,%l7
	ld	[%l1+0],%o0
	st   	%o0,[%l7+0]
tag3:
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind3,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	set	341*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	ba,a	evexpg
	.align	4

!
!	FENTRY	evtag
!
	.seg	"data1"   
	.align	4
.evtag:	.word    0
	._evtag = 6
	.seg	"text"
	.align	8
	.global	evtag
evtag:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	blt  	evtagerr
	nop
	cmp    	%l1,%i3
	bge  	evtagerr
	nop
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	ba,a	tag3
	.align	4
evtagerr:
	ld	[%l7+0],%l2
	inc  	4,%l7
	set	342*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4

!
!	FENTRY	evexit
!
	.seg	"data1"   
	.align	4
.evexit:	.word    0
	._evexit = 6
	.seg	"text"
	.align	8
	.global	evexit
evexit:
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	set	345*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	ba,a	exit1
	.align	4

!
!	FENTRY	untlxit
!
	.seg	"data1"   
	.align	4
.untlxit:	.word    0
	._untlxit = 6
	.seg	"text"
	.align	8
	.global	untlxit
untlxit:
	dec  	4,%l7
	ld	[%l1+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind3,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
untlxit1:
	ld	[%l7+0],%l1
	set	343*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	evprogn
	st   	%o7,[%l7+0]
	.align	4
	ba,a	untlxit1
	.align	4

!
!	FENTRY	ffexit
!
	.seg	"data1"   
	.align	4
.ffexit:	.word    0
	._ffexit = 6
	.seg	"text"
	.align	8
	.global	ffexit
ffexit:
	dec  	4,%l7
	ld	[%l1+0],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+4],%l1
	set	344*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
exit1:
	dec  	4,%l7
	call	evprogn
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
findtag:
	set	dlink,%l7
	ld	[%l7+0],%l7
	ld	[%l7+0],%l3
	set	unbind3,%o1
	dec	8,%o1
	cmp	%l3,%o1
	beq	evesc3
	nop
	set	unbind5,%o1
	dec	8,%o1
	cmp	%l3,%o1
	beq	evesc4
	nop
	set	findtag,%l3
	dec	8,%l3
	ba,a	unbinp
	.align	4
evesc3:
	inc  	4*1,%l7
	ld	[%l7+0],%o0
	set	dlink,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp	%l2,%l3
	bne	findtag
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
evesc4:
	inc  	4*1,%l7
	ld	[%l7+0],%o0
	set	dlink,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	3,%l4
	ba,a	funcall
	.align	4

!
!	FENTRY	unexit
!
	.seg	"data1"   
	.align	4
.unexit:	.word    0
	._unexit = 6
	.seg	"text"
	.align	8
	.global	unexit
unexit:
	ld	[%l1+0],%l2
	ld	[%l1+4],%l1
uvesc1:
	set	dlink,%l7
	ld	[%l7+0],%l7
	ld	[%l7+0],%l3
	set	unbind3,%o1
	dec	8,%o1
	cmp	%l3,%o1
	beq	uvesc3
	nop
	set	unbind5,%o1
	dec	8,%o1
	cmp	%l3,%o1
	beq	uvesc4
	nop
	set	uvesc1,%l3
	dec	8,%l3
	ba,a	unbinp
	.align	4
uvesc3:
	inc  	4*1,%l7
	ld	[%l7+0],%o0
	set	dlink,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp	%l2,%l3
	bne	uvesc1
	nop
	set	347*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	ba,a	evprogn
	.align	4
uvesc4:
	inc  	4*1,%l7
	cmp    	%i2,%g4
	bne    	eva59
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva59:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	cmp    	%i2,%g4
	bne    	eva60
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva60:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	mov   	%l1,%l2
	ld	[%l7+0],%o0
	set	dlink,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	apply
	.align	4

!
!	FENTRY	unwind
!
	.seg	"data1"   
	.align	4
.unwind:	.word    0
	._unwind = 6
	.seg	"text"
	.align	8
	.global	unwind
unwind:
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l1,%g3
	blt	unwind4
	nop
	set	346*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnia
	.align	4
unwind3:
	set	dlink,%l7
	ld	[%l7+0],%l7
	set	unwind4,%l3
	dec	8,%l3
	ba,a	unbinp
	.align	4
unwind4:
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	deccc  	1,%l1
	and 	%l1,%l0,%l1
	bge  	unwind3
	nop
	mov   	%l2,%l1
	set	346*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	ba,a	evprogn
	.align	4
llitsoft:
	set	331*32,%l3
	add    	%i2,%l3,%l3
	ld	[%l3+0],%l3
	ba,a	llitsofi
	.align	4
llsupit:
	set	331*32,%l4
	add    	%i2,%l4,%l4
	ld	[%l4+0],%l4
	ba,a	llsupit1
	.align	4
llsupit0:
	ld	[%l4+0],%o0
	cmp    	%o0,%i2
	blt  	llitster
	nop
	cmp    	%o0,%i3
	bge  	llitster
	nop
	ld	[%l4+0],%o1
	cmp	%l1,%o1
	beq	llsupit3
	nop
	ld	[%l4+4],%l4
llsupit1:
	cmp    	%l4,%i3
	bge	llsupit0
	nop
	cmp    	%l4,%i2
	blt  	llitster
	nop
	cmp    	%l4,%i3
	bge  	llitster
	nop
llsupit2:
	cmp	%l1,%l4
	beq	llsupit4
	nop
	cmp    	%l4,%i2
	beq	llitster
	nop
	ld	[%l4+12],%l4
	ba,a	llsupit2
	.align	4
llsupit3:
	mov   	%l2,%l1
	mov   	%l3,%l2
	ld	[%l4+4],%l3
	ba,a	llitsofi
	.align	4
llsupit4:
	mov   	%l2,%l1
	mov   	%l3,%l2
	ld	[%l4+12],%l3
	ba,a	llitsofi
	.align	4
llitsofi:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	set	savea4,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	savea3,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	savea2,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	savea1,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	funct,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	forme,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	evalst,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	llink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind4,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	set	llink,%o4
	st   	%i2,[%o4+0]
	set	evalst,%o4
	st   	%i2,[%o4+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	mov   	%l1,%l2
	mov   	%l3,%l1
	dec  	4,%l7
	call	findits
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	llitster
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
	ba,a	apply
	.align	4
llitster:
	mov   	%l2,%l1
	add    	%i2,5*32,%l2
	set	331*32,%l3
	add    	%i2,%l3,%l3
	st   	%i2,[%l3+0]
	ba,a	errudf
	.align	4
findits0:
	ld	[%l7+0],%l1
	inc  	4,%l7
findits:
	cmp    	%l1,%i3
	bge	findits1
	nop
	cmp    	%l1,%i2
	blt  	llitster
	nop
	cmp    	%l1,%i3
	bge  	llitster
	nop
	mov   	%g0,%l3
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	call	getfns
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
findits1:
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+0],%l1
	cmp    	%l1,%i2
	blt  	llitster
	nop
	cmp    	%l1,%i3
	bge  	llitster
	nop
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	call	getfn1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l1,%i2
	beq	findits0
	nop
	inc  	4*1,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llock
!
	.seg	"data1"   
	.align	4
.llock:	.word    0
	._llock = 6
	.seg	"text"
	.align	8
	.global	llock
llock:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind5,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	set	348*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	ba,a	evexpg
	.align	4

!
!	FENTRY	protect
!
	.seg	"data1"   
	.align	4
.protect:	.word    0
	._protect = 6
	.seg	"text"
	.align	8
	.global	protect
protect:
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind6,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	ba,a	evalcar
	.align	4
sysprot:
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind7,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4

!
!	FENTRY	function
!
	.seg	"data1"   
	.align	4
.function:	.word    0
	._function = 6
	.seg	"text"
	.align	8
	.global	function
function:
	cmp    	%l1,%i3
	blt	funcret
	nop
	ld	[%l1+0],%l1
	cmp    	%l1,%i3
	blt	funcret
	nop
	set	llink,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	beq	funcret
	nop
	ld	[%l1+0],%o0
	set	435*32,%o1
	add    	%i2,%o1,%o1
	cmp	%o0,%o1
	bne	funcret
	nop
	ld	[%l1+4],%l1
	cmp    	%i2,%g4
	bne    	eva61
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva61:
	set	llink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	cmp    	%i2,%g4
	bne    	eva62
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
eva62:
	set	356*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
funcret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
verlpar:
	cmp    	%l3,%i3
	blt	vererr
	nop
	dec  	4,%l7
	st   	%l3,[%l7+0]
	ld	[%l3+0],%l3
	dec  	4,%l7
	call	verlpar4
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
verlpar3:
	dec  	4,%l7
	ld	[%l3+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l3+0],%l3
	dec  	4,%l7
	call	verlpar5
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
verlpar4:
	cmp    	%l3,%i2
	beq	verlpar9
	nop
verlpar5:
	cmp    	%l3,%i3
	bge	verlpar3
	nop
	set	bvar,%o1
	ld	[%o1+0],%o1
	cmp	%l3,%o1
	blt  	eva63
	nop
	cmp	%l3,%i3
	blt  	verlpar9
	nop
eva63:
vererr:
	mov   	%l3,%l1
	dec  	4,%l7
	call	ferrnam
	st   	%o7,[%l7+0]
	.align	4
	ba,a	errbpa
	.align	4
verlpar9:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ferrnam:
	set	errname,%l2
	ld	[%l2+0],%l2
	cmp    	%l2,%g3
	bge	ferrname
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	mov   	%l2,%l1
	dec  	4,%l7
	call	findfn
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	ferrnam1
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
	mov   	%l1,%l2
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ferrnam1:
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
ferrname:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
! end
