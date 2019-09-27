!
!	File bllsht.s expansion for sparc arch=v8plus.
!	This file is part of Le-Lisp kernel.
!	Generated on Sat Oct   7 17 18:55:31 
!
	.file	"bllsht.s"
	.align	8 
	.global	bvar
	.global	ccode
	.global	ecode
	.global	reenter
	.global	theend
	.global	mstack
	.global	errnda
	.global	errwna
	.global	errnia
	.global	errnva
	.global	errvec
	.global	errfs
	.global	gccons
	.global	gcfloat
	.global	gcnumb
	.global	inisymb
	.global	inicst
	.global	apply
	.global	evalcar
	.global	ini_bll
	.global	eimpur
	.global	epur
	.global	loc
	.global	vag
	.global	vaga1
	.seg	"text"
ini_bll:
	.seg	"data1"   
	.align	4
pbll1:
	.asciz	"loc"
	.seg	"text"
bbll1:
	set	3,%l1
	set	pbll1,%l2
	set	loc,%l3
	dec	8,%l3
	set	trash,%l4
	set	._loc,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pbll2:
	.asciz	"locint"
	.seg	"text"
bbll2:
	set	6,%l1
	set	pbll2,%l2
	set	locint,%l3
	dec	8,%l3
	set	trash,%l4
	set	._locint,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,7*32,%o3
	st   	%o3,[%l1+12]
	.seg	"data1"   
	.align	4
pbll3:
	.asciz	"vag"
	.seg	"text"
bbll3:
	set	3,%l1
	set	pbll3,%l2
	set	vag,%l3
	dec	8,%l3
	set	trash,%l4
	set	._vag,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pbll4:
	.asciz	"memory"
	.seg	"text"
bbll4:
	set	6,%l1
	set	pbll4,%l2
	set	memory,%l3
	dec	8,%l3
	set	trash,%l4
	set	._memory,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pbll5:
	.asciz	"bltmemory"
	.seg	"text"
bbll5:
	set	9,%l1
	set	pbll5,%l2
	set	bltmemory,%l3
	dec	8,%l3
	set	trash,%l4
	set	._bltmemory,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pbll6:
	.asciz	"addadr"
	.seg	"text"
bbll6:
	set	6,%l1
	set	pbll6,%l2
	set	addadr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._addadr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pbll7:
	.asciz	"incradr"
	.seg	"text"
bbll7:
	set	7,%l1
	set	pbll7,%l2
	set	incradr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._incradr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pbll8:
	.asciz	"subadr"
	.seg	"text"
bbll8:
	set	6,%l1
	set	pbll8,%l2
	set	subadr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._subadr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pbll9:
	.asciz	"gtadr"
	.seg	"text"
bbll9:
	set	5,%l1
	set	pbll9,%l2
	set	gtadr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gtadr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pbll10:
	.asciz	"ccode"
	.seg	"text"
bbll10:
	set	5,%l1
	set	pbll10,%l2
	set	accode,%l3
	dec	8,%l3
	set	trash,%l4
	set	._accode,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,7*32,%o3
	st   	%o3,[%l1+12]
	.seg	"data1"   
	.align	4
pbll11:
	.asciz	"ecode"
	.seg	"text"
bbll11:
	set	5,%l1
	set	pbll11,%l2
	set	aecode,%l3
	dec	8,%l3
	set	trash,%l4
	set	._aecode,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,7*32,%o3
	st   	%o3,[%l1+12]
	.seg	"data1"   
	.align	4
pbll12:
	.asciz	"precompile"
	.seg	"text"
bbll12:
	set	10,%l1
	set	pbll12,%l2
	set	precomp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._precomp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pbll13:
	.asciz	"call"
	.seg	"text"
bbll13:
	set	4,%l1
	set	pbll13,%l2
	set	llcall,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llcall,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pbll14:
	.asciz	"calln"
	.seg	"text"
bbll14:
	set	5,%l1
	set	pbll14,%l2
	set	llcaln,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llcaln,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
	.seg	"text"

!
!	FENTRY	loc
!
	.seg	"data1"   
	.align	4
.loc:	.word    0
	._loc = 2
	.seg	"text"
	.align	8
loc:
	mov   	%l1,%o0
	mov 	%o0,%o1
	srl  	%o1,16,%o1
	and	%o1,%l0,%l2
	and	%o0,%l0,%l1
	mov   	%l2,%o1
	cmp    	%o1,0
	beq	loc9
	nop
	cmp    	%i2,%g4
	bne    	bll15
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
bll15:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
loc9:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	locint
!
	.seg	"data1"   
	.align	4
.locint:	.word    0
	._locint = 2
	.seg	"text"
	.align	8
	.global	locint
locint:
	mov   	%l1,%o0
	mov 	%o0,%o1
	srl  	%o1,16,%o1
	and	%o1,%l0,%l2
	and	%o0,%l0,%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	add	%l1,%o1,%l1
	and 	%l1,%l0,%l1
	set	32767,%o0
	and	%l1,%o0,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	vag
!
	.seg	"data1"   
	.align	4
.vag:	.word    0
	._vag = 2
	.seg	"text"
	.align	8
vag:
	set	746*32,%l2
	add    	%i2,%l2,%l2
vaga1:
	cmp    	%l1,%i3
	blt	vagc
	nop
	ld	[%l1+0],%o0
	cmp    	%o0,0
	blt  	vagerr
	nop
	cmp    	%o0,%i0
	bge  	vagerr
	nop
	ld	[%l1+4],%o0
	cmp    	%o0,0
	blt  	vagerr
	nop
	cmp    	%o0,%i0
	bge  	vagerr
	nop
	ld	[%l1+0],%l2
	ld	[%l1+4],%l1
	mov   	%l2,%o0
	mov   	%l1,%o1
	sll 	%o0,16,%o0
	or    	%o0,%o1,%o0
	mov   	%o0,%l1
vagret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
vagc:
	cmp    	%l1,0
	blt  	vagerr
	nop
	cmp    	%l1,%i0
	bge  	vagerr
	nop
	.global	bnumb
	set	bnumb,%o1
	ld	[%o1+0],%o1
	cmp    	%l1,%o1
	blt  	vagret
	nop
	cmp    	%l1,%g3
	bge  	vagret
	nop
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
vagerr3:
	mov   	%l3,%l1
vagerr:
	ba,a	errnda
	.align	4
vaga3:
	cmp    	%l3,%i3
	blt	vaga3c
	nop
	ld	[%l3+0],%o0
	cmp    	%o0,0
	blt  	vagerr3
	nop
	cmp    	%o0,%i0
	bge  	vagerr3
	nop
	ld	[%l3+4],%o0
	cmp    	%o0,0
	blt  	vagerr3
	nop
	cmp    	%o0,%i0
	bge  	vagerr3
	nop
	ld	[%l3+0],%l2
	ld	[%l3+4],%l3
	mov   	%l2,%o0
	mov   	%l3,%o1
	sll 	%o0,16,%o0
	or    	%o0,%o1,%o0
	mov   	%o0,%l3
vaga3ret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
vaga3c:
	cmp    	%l3,0
	blt  	vagerr3
	nop
	cmp    	%l3,%i0
	bge  	vagerr3
	nop
	set	bnumb,%o1
	ld	[%o1+0],%o1
	cmp    	%l3,%o1
	blt  	vaga3ret
	nop
	cmp    	%l3,%g3
	bge  	vaga3ret
	nop
	ld	[%l3+0],%l3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	addadr
!
	.seg	"data1"   
	.align	4
.addadr:	.word    0
	._addadr = 3
	.seg	"text"
	.align	8
	.global	addadr
addadr:
	set	749*32,%o3
	add    	%i2,%o3,%o3
	set	adrtmp,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	adrverif
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%o0
	add    	%o0,%l2,%o0
	add    	%o0,%g0,%o0
	mov 	%o0,%o1
	srl  	%o1,16,%o1
	and	%o1,%l0,%l2
	and	%o0,%l0,%l1
	mov   	%l3,%o0
	add    	%o0,%l4,%o0
	add    	%o0,%l2,%o0
	mov 	%o0,%o1
	srl  	%o1,16,%o1
	and	%o1,%l0,%l2
	and	%o0,%l0,%l3
	ba,a	adrcreat
	.align	4

!
!	FENTRY	incradr
!
	.seg	"data1"   
	.align	4
.incradr:	.word    0
	._incradr = 3
	.seg	"text"
	.align	8
	.global	incradr
incradr:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	750*32,%o3
	add    	%i2,%o3,%o3
	set	adrtmp,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	adrverif
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%o0
	add    	%o0,%l2,%o0
	add    	%o0,%g0,%o0
	mov 	%o0,%o1
	srl  	%o1,16,%o1
	and	%o1,%l0,%l2
	and	%o0,%l0,%l1
	mov   	%l3,%o0
	add    	%o0,%l4,%o0
	add    	%o0,%l2,%o0
	mov 	%o0,%o1
	srl  	%o1,16,%o1
	and	%o1,%l0,%l2
	and	%o0,%l0,%l3
	ld	[%l7+0],%l4
	inc  	4,%l7
	mov   	%l3,%o1
	cmp    	%o1,0
	bne	incadr2
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	bge	incadr3
	nop
incadr2:
	set	0xFFFF,%o1
	cmp   	%l3,%o1
	beq	incadr3
	nop
	cmp    	%l4,%i3
	blt	incadr1
	nop
	st   	%l3,[%l4+0]
	st   	%l1,[%l4+4]
	mov   	%l4,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
incadr1:
	cmp    	%i2,%g4
	bne    	bll16
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
bll16:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
incadr3:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	subadr
!
	.seg	"data1"   
	.align	4
.subadr:	.word    0
	._subadr = 3
	.seg	"text"
	.align	8
	.global	subadr
subadr:
	set	751*32,%o3
	add    	%i2,%o3,%o3
	set	adrtmp,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	adrverif
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l3,[%l7+0]
	set	0xFFFF,%o0
	xor	%l2,%o0,%l2
	set	0xFFFF,%o0
	xor	%l4,%o0,%l4
	mov   	%l2,%o0
	set	1,%o1
	add    	%o0,%o1,%o0
	add    	%o0,%g0,%o0
	mov 	%o0,%o1
	srl  	%o1,16,%o1
	and	%o1,%l0,%l3
	and	%o0,%l0,%l2
	mov   	%l4,%o0
	add    	%o0,%g0,%o0
	add    	%o0,%l3,%o0
	mov 	%o0,%o1
	srl  	%o1,16,%o1
	and	%o1,%l0,%l3
	and	%o0,%l0,%l4
	ld	[%l7+0],%l3
	inc  	4,%l7
	mov   	%l1,%o0
	add    	%o0,%l2,%o0
	add    	%o0,%g0,%o0
	mov 	%o0,%o1
	srl  	%o1,16,%o1
	and	%o1,%l0,%l2
	and	%o0,%l0,%l1
	mov   	%l3,%o0
	add    	%o0,%l4,%o0
	add    	%o0,%l2,%o0
	mov 	%o0,%o1
	srl  	%o1,16,%o1
	and	%o1,%l0,%l2
	and	%o0,%l0,%l3
	ba,a	adrcreat
	.align	4

!
!	FENTRY	gtadr
!
	.seg	"data1"   
	.align	4
.gtadr:	.word    0
	._gtadr = 3
	.seg	"text"
	.align	8
	.global	gtadr
gtadr:
	set	752*32,%o3
	add    	%i2,%o3,%o3
	set	adrtmp,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	adrverif
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l3,%o0
	mov   	%l4,%o1
	cmp    	%o0,%o1
	blt    	gtadr0
	nop
	beq   	gtadr1
	nop
	ba,a   	gtadr2
gtadr1:
	mov   	%l1,%o0
	mov   	%l2,%o1
	cmp    	%o0,%o1
	blt    	gtadr0
	nop
	beq   	gtadr0
	nop
	ba,a   	gtadr2
gtadr2:
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gtadr0:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
adrverif:
	cmp    	%l1,%i3
	bge	adrver1
	nop
	cmp    	%l1,0
	blt  	adrerr1
	nop
	cmp    	%l1,%i0
	bge  	adrerr1
	nop
	mov   	%g0,%l3
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	bge	adrver4
	nop
	set	0xFFFF,%l3
adrver4:
	cmp    	%l2,%i3
	bge	adrver2
	nop
	cmp    	%l2,0
	blt  	adrerr2
	nop
	cmp    	%l2,%i0
	bge  	adrerr2
	nop
	mov   	%g0,%l4
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	bge	adrver5
	nop
	set	0xFFFF,%l4
adrver5:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
adrver2:
	ld	[%l2+0],%l4
	cmp    	%l4,0
	blt  	adrerr2
	nop
	cmp    	%l4,%i0
	bge  	adrerr2
	nop
	ld	[%l2+4],%o0
	cmp    	%o0,0
	blt  	adrerr2
	nop
	cmp    	%o0,%i0
	bge  	adrerr2
	nop
	ld	[%l2+4],%l2
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
adrver1:
	cmp    	%l2,%i3
	bge	adrver3
	nop
	cmp    	%l2,0
	blt  	adrerr2
	nop
	cmp    	%l2,%i0
	bge  	adrerr2
	nop
	ld	[%l1+0],%l3
	cmp    	%l3,0
	blt  	adrerr1
	nop
	cmp    	%l3,%i0
	bge  	adrerr1
	nop
	mov   	%g0,%l4
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	bge	adrver6
	nop
	set	0xFFFF,%l4
adrver6:
	ld	[%l1+4],%o0
	cmp    	%o0,0
	blt  	adrerr1
	nop
	cmp    	%o0,%i0
	bge  	adrerr1
	nop
	ld	[%l1+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
adrver3:
	ld	[%l1+0],%l3
	cmp    	%l3,0
	blt  	adrerr1
	nop
	cmp    	%l3,%i0
	bge  	adrerr1
	nop
	ld	[%l2+0],%l4
	cmp    	%l4,0
	blt  	adrerr2
	nop
	cmp    	%l4,%i0
	bge  	adrerr2
	nop
	ld	[%l1+4],%o0
	cmp    	%o0,0
	blt  	adrerr1
	nop
	cmp    	%o0,%i0
	bge  	adrerr1
	nop
	ld	[%l1+4],%l1
	ld	[%l2+4],%o0
	cmp    	%o0,0
	blt  	adrerr2
	nop
	cmp    	%o0,%i0
	bge  	adrerr2
	nop
	ld	[%l2+4],%l2
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
adrerr2:
	mov   	%l2,%l1
adrerr1:
	set	adrtmp,%l2
	ld	[%l2+0],%l2
	ba,a	errnda
	.align	4
adrcreat:
	mov   	%l3,%o1
	cmp    	%o1,0
	bne	adrcrea1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	adrcrea2
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
adrcrea1:
	set	0xFFFF,%o1
	cmp   	%l3,%o1
	bne	adrcrea2
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	adrcrear
	nop
adrcrea2:
	cmp    	%i2,%g4
	bne    	bll17
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
bll17:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
adrcrear:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	accode
!
	.seg	"data1"   
	.align	4
.accode:	.word    0
	._accode = 5
	.seg	"text"
	.align	8
	.global	accode
accode:
	set	753*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	accodeg
	nop
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	accodes
	nop
	set	1,%l1
	ba,a	errwna
	.align	4
accodes:
	ld	[%l7+0],%l1
	inc  	4,%l7
	dec  	4,%l7
	call	vaga1
	st   	%o7,[%l7+0]
	.align	4
	set	ccode,%o4
	st   	%l1,[%o4+0]
accodeg:
	set	ccode,%l1
	ld	[%l1+0],%l1
	ba,a	loc
	.align	4

!
!	FENTRY	aecode
!
	.seg	"data1"   
	.align	4
.aecode:	.word    0
	._aecode = 1
	.seg	"text"
	.align	8
	.global	aecode
aecode:
	set	ecode,%l1
	ld	[%l1+0],%l1
	ba,a	loc
	.align	4

!
!	FENTRY	memory
!
	.seg	"data1"   
	.align	4
.memory:	.word    0
	._memory = 5
	.seg	"text"
	.align	8
	.global	memory
memory:
	set	747*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l4,%o1
	cmp    	%o1,2
	bne	memor2
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	dec  	4,%l7
	call	vaga3
	st   	%o7,[%l7+0]
	.align	4
	sth   	%l1,[%l3+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
memor2:
	mov   	%l4,%o1
	cmp    	%o1,1
	bne	memor3
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	dec  	4,%l7
	call	vaga1
	st   	%o7,[%l7+0]
	.align	4
	lduh	[%l1+0],%o0
	and	%o0,%l0,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
memor3:
	set	2,%l1
	ba,a	errwna
	.align	4

!
!	FENTRY	bltmemory
!
	.seg	"data1"   
	.align	4
.bltmemory:	.word    0
	._bltmemory = 4
	.seg	"text"
	.align	8
	.global	bltmemory
bltmemory:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	748*32,%l2
	add    	%i2,%l2,%l2
	dec  	4,%l7
	call	vaga1
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	vaga3
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l4
	ld	[%l7+0],%l1
	dec  	4,%l7
	call	vaga1
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l4,%l2
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	precomp
!
	.seg	"data1"   
	.align	4
.precomp:	.word    0
	._precomp = 6
	.seg	"text"
	.align	8
	.global	precomp
precomp:
	ba,a	evalcar
	.align	4

!
!	FENTRY	llcall
!
	.seg	"data1"   
	.align	4
.llcall:	.word    0
	._llcall = 5
	.seg	"text"
	.align	8
	.global	llcall
llcall:
	mov   	%l4,%o1
	cmp    	%o1,4
	bne	callerr1
	nop
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	call	vaga1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	mov   	%l1,%l2
	mov   	%l4,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
callerr1:
	set	756*32,%l2
	add    	%i2,%l2,%l2
	set	4,%l1
	ba,a	errwna
	.align	4

!
!	FENTRY	llcaln
!
	.seg	"data1"   
	.align	4
.llcaln:	.word    0
	._llcaln = 3
	.seg	"text"
	.align	8
	.global	llcaln
llcaln:
	mov   	%l2,%l3
	set	757*32,%l2
	add    	%i2,%l2,%l2
	dec  	4,%l7
	call	vaga1
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g0,%l4
	ba,a	calln3
	.align	4
calln2:
	dec  	4,%l7
	ld	[%l3+0],%o0
	st   	%o0,[%l7+0]
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfs
	nop
	ld	[%l3+4],%l3
	inc	1,%l4
calln3:
	cmp    	%l3,%i3
	bge	calln2
	nop
	mov   	%l1,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
epur:
	.seg	"data1"
	.align	4
adrtmp:
	.word 	0
eimpur:
	.word 	0
! end
