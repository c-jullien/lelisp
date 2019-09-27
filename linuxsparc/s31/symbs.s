!
!	File symbs.s expansion for sparc arch=v8plus.
!	This file is part of Le-Lisp kernel.
!	Generated on Sat Oct   7 17 18:55:26 
!
	.file	"symbs.s"
	.align	8 
	.global	mstack
	.global	bvar
	.global	hashtab
	.global	errnva
	.global	errsym
	.global	erroob
	.global	errudf
	.global	errwna
	.global	errnla
	.global	gccons
	.global	cpkgc
	.global	inisymb
	.global	inicst
	.global	istdsym
	.global	evalcar
	.global	tabcodfn
	.global	tabtypfn
	.global	gaplus2i
	.global	gadiff2i
	.global	loc
	.global	vag
	.global	ini_sym
	.global	getfn1
	.global	getbi
	.global	getfns
	.global	setfn
	.global	findfn
	.global	getprop
	.global	putprop
	.global	addprop
	.global	remprop
	.seg	"text"
ini_sym:
	.seg	"data1"   
	.align	4
psym1:
	.asciz	"makunbound"
	.seg	"text"
bsym1:
	set	10,%l1
	set	psym1,%l2
	set	makunbound,%l3
	dec	8,%l3
	set	trash,%l4
	set	._makunbound,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym2:
	.asciz	"plist"
	.seg	"text"
bsym2:
	set	5,%l1
	set	psym2,%l2
	set	fplist,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fplist,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym3:
	.asciz	"packagecell"
	.seg	"text"
bsym3:
	set	11,%l1
	set	psym3,%l2
	set	pckgcell,%l3
	dec	8,%l3
	set	trash,%l4
	set	._pckgcell,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym4:
	.asciz	"3d-root-symbol"
	.seg	"text"
bsym4:
	set	14,%l1
	set	psym4,%l2
	set	d3root,%l3
	dec	8,%l3
	set	trash,%l4
	set	._d3root,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym5:
	.asciz	"objval"
	.seg	"text"
bsym5:
	set	6,%l1
	set	psym5,%l2
	set	objval,%l3
	dec	8,%l3
	set	trash,%l4
	set	._objval,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym6:
	.asciz	"valfn"
	.seg	"text"
bsym6:
	set	5,%l1
	set	psym6,%l2
	set	valfn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._valfn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym7:
	.asciz	"typefn"
	.seg	"text"
bsym7:
	set	6,%l1
	set	psym7,%l2
	set	typefn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._typefn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym8:
	.asciz	"setfn"
	.seg	"text"
bsym8:
	set	5,%l1
	set	psym8,%l2
	set	setfn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._setfn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym9:
	.asciz	"remfn"
	.seg	"text"
bsym9:
	set	5,%l1
	set	psym9,%l2
	set	remfn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._remfn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym10:
	.asciz	"findfn"
	.seg	"text"
bsym10:
	set	6,%l1
	set	psym10,%l2
	set	findfn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._findfn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym11:
	.asciz	"getfn1"
	.seg	"text"
bsym11:
	set	6,%l1
	set	psym11,%l2
	set	getfn1,%l3
	dec	8,%l3
	set	trash,%l4
	set	._getfn1,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym12:
	.asciz	"getfn"
	.seg	"text"
bsym12:
	set	5,%l1
	set	psym12,%l2
	set	getfn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._getfn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym13:
	.asciz	"getsymb1"
	.seg	"text"
bsym13:
	set	8,%l1
	set	psym13,%l2
	set	getsym1,%l3
	dec	8,%l3
	set	trash,%l4
	set	._getsym1,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym14:
	.asciz	"getsymb"
	.seg	"text"
bsym14:
	set	7,%l1
	set	psym14,%l2
	set	getsymb,%l3
	dec	8,%l3
	set	trash,%l4
	set	._getsymb,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym15:
	.asciz	"getfn2"
	.seg	"text"
bsym15:
	set	6,%l1
	set	psym15,%l2
	set	getbi,%l3
	dec	8,%l3
	set	trash,%l4
	set	._getbi,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym16:
	.asciz	"synonym"
	.seg	"text"
bsym16:
	set	7,%l1
	set	psym16,%l2
	set	synonym,%l3
	dec	8,%l3
	set	trash,%l4
	set	._synonym,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym17:
	.asciz	"synonymq"
	.seg	"text"
bsym17:
	set	8,%l1
	set	psym17,%l2
	set	synqnym,%l3
	dec	8,%l3
	set	trash,%l4
	set	._synqnym,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym18:
	.asciz	"remob"
	.seg	"text"
bsym18:
	set	5,%l1
	set	psym18,%l2
	set	remob,%l3
	dec	8,%l3
	set	trash,%l4
	set	._remob,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym19:
	.asciz	"get"
	.seg	"text"
bsym19:
	set	3,%l1
	set	psym19,%l2
	set	getprop,%l3
	dec	8,%l3
	set	trash,%l4
	set	._getprop,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym20:
	.asciz	"getprop"
	.seg	"text"
bsym20:
	set	7,%l1
	set	psym20,%l2
	set	getprop,%l3
	dec	8,%l3
	set	trash,%l4
	set	._getprop,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym21:
	.asciz	"getl"
	.seg	"text"
bsym21:
	set	4,%l1
	set	psym21,%l2
	set	getl,%l3
	dec	8,%l3
	set	trash,%l4
	set	._getl,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym22:
	.asciz	"addprop"
	.seg	"text"
bsym22:
	set	7,%l1
	set	psym22,%l2
	set	addprop,%l3
	dec	8,%l3
	set	trash,%l4
	set	._addprop,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym23:
	.asciz	"putprop"
	.seg	"text"
bsym23:
	set	7,%l1
	set	psym23,%l2
	set	putprop,%l3
	dec	8,%l3
	set	trash,%l4
	set	._putprop,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym24:
	.asciz	"defprop"
	.seg	"text"
bsym24:
	set	7,%l1
	set	psym24,%l2
	set	defprop,%l3
	dec	8,%l3
	set	trash,%l4
	set	._defprop,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym25:
	.asciz	"remprop"
	.seg	"text"
bsym25:
	set	7,%l1
	set	psym25,%l2
	set	remprop,%l3
	dec	8,%l3
	set	trash,%l4
	set	._remprop,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym26:
	.asciz	"incr"
	.seg	"text"
bsym26:
	set	4,%l1
	set	psym26,%l2
	set	fincr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fincr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
psym27:
	.asciz	"decr"
	.seg	"text"
bsym27:
	set	4,%l1
	set	psym27,%l2
	set	fdecr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fdecr,%o0
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
sybfalse:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
sybret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	makunbound
!
	.seg	"data1"   
	.align	4
.makunbound:	.word    0
	._makunbound = 2
	.seg	"text"
	.align	8
	.global	makunbound
makunbound:
	set	bvar,%o1
	ld	[%o1+0],%o1
	cmp    	%l1,%o1
	blt  	makuerr
	nop
	cmp    	%l1,%i3
	bge  	makuerr
	nop
	add    	%i2,1*32,%o3
	st   	%o3,[%l1+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
makuerr:
	set	475*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnva
	.align	4

!
!	FENTRY	fplist
!
	.seg	"data1"   
	.align	4
.fplist:	.word    0
	._fplist = 5
	.seg	"text"
	.align	8
	.global	fplist
fplist:
	set	476*32,%l2
	add    	%i2,%l2,%l2
	set	setplist,%l3
	dec	8,%l3
	dec  	4,%l7
	call	getset12
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l1+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
setplist:
	st   	%l1,[%l3+4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	pckgcell
!
	.seg	"data1"   
	.align	4
.pckgcell:	.word    0
	._pckgcell = 5
	.seg	"text"
	.align	8
	.global	pckgcell
pckgcell:
	set	477*32,%l2
	add    	%i2,%l2,%l2
	set	pckgset,%l3
	dec	8,%l3
	dec  	4,%l7
	call	getset12
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l1+12],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
pckgset:
	st   	%l1,[%l3+12]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	d3root
!
	.seg	"data1"   
	.align	4
.d3root:	.word    0
	._d3root = 2
	.seg	"text"
	.align	8
	.global	d3root
d3root:
	ld	[%l1+28],%o0
	cmp    	%o0,%i2
	blt  	d3rootn
	nop
	cmp    	%o0,%i3
	bge  	d3rootn
	nop
	mov   	%l1,%l4
d3roota:
	ld	[%l1+12],%o0
	cmp    	%o0,%i2
	beq	d3rootr
	nop
	ld	[%l1+28],%l1
	cmp	%l1,%l4
	bne	d3roota
	nop
d3rootn:
	mov   	%i2,%l1
d3rootr:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	objval
!
	.seg	"data1"   
	.align	4
.objval:	.word    0
	._objval = 5
	.seg	"text"
	.align	8
	.global	objval
objval:
	set	479*32,%l2
	add    	%i2,%l2,%l2
	set	objvset,%l3
	dec	8,%l3
	dec  	4,%l7
	call	getset12
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l1+16],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
objvset:
	st   	%l1,[%l3+16]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	valfn
!
	.seg	"data1"   
	.align	4
.valfn:	.word    0
	._valfn = 2
	.seg	"text"
	.align	8
	.global	valfn
valfn:
	cmp    	%l1,%i2
	blt  	valferr
	nop
	cmp    	%l1,%i3
	bge  	valferr
	nop
	ld	[%l1+8],%l1
	.global	econs
	set	bnumb,%o1
	ld	[%o1+0],%o1
	cmp	%l1,%o1
	blt  	sym28
	nop
	set	econs,%o1
	ld	[%o1+0],%o1
	cmp	%l1,%o1
	blt  	valfnr
	nop
sym28:
	ba,a	loc
	.align	4
valferr:
	set	480*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4
valfnr:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	typefn
!
	.seg	"data1"   
	.align	4
.typefn:	.word    0
	._typefn = 2
	.seg	"text"
	.align	8
	.global	typefn
typefn:
	cmp    	%l1,%i2
	blt  	typefer1
	nop
	cmp    	%l1,%i3
	bge  	typefer1
	nop
	lduh	[%l1+24],%l1
	set	tabcodfn,%l2
	ld	[%l2+0],%l2
	ld	[%l2+0],%o0
	ld	[%o0+4],%l3
	dec	1,%l3
typefn1:
	ld	[%l2+0],%o1
	inc  	8,%o1
	mov   	%l3,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l4
	cmp	%l4,%l1
	beq	typefn2
	nop
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	dec  	%l3
	cmp   	%l3,0
	bgt  	typefn1
	nop
	mov  	0,%l3
typefn2:
	set	tabtypfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l3,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
typefer1:
	set	481*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4
typefer2:
	set	481*32,%l2
	add    	%i2,%l2,%l2
	ba,a	erroob
	.align	4

!
!	FENTRY	setfn
!
	.seg	"data1"   
	.align	4
.setfn:	.word    0
	._setfn = 4
	.seg	"text"
	.align	8
setfn:
	set	bvar,%o1
	ld	[%o1+0],%o1
	cmp    	%l1,%o1
	blt  	setfner2
	nop
	cmp    	%l1,%i3
	bge  	setfner2
	nop
	cmp    	%l2,%i2
	blt  	setfner1
	nop
	cmp    	%l2,%i3
	bge  	setfner1
	nop
	dec  	4,%l7
	st   	%l3,[%l7+0]
	set	tabtypfn,%o0
	ld	[%o0+0],%o0
	ld	[%o0+0],%o0
	ld	[%o0+4],%l4
	ba,a	setfn3
	.align	4
setfner1:
	mov   	%l2,%l1
	set	482*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4
setfner2:
	set	482*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnva
	.align	4
setfner3:
	set	482*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l3,%l1
	ba,a	erroob
	.align	4
setfn2:
	set	tabtypfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l4,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l3
	cmp	%l3,%l2
	beq	setfn4
	nop
setfn3:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	setfn2
	nop
	ba,a	setfner3
	.align	4
setfn4:
	set	tabcodfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l4,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l4
	sth   	%l4,[%l1+24]
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	cmp    	%l1,%i3
	blt	setfn5
	nop
	ld	[%l1+0],%o0
	cmp    	%o0,0
	blt  	setfn6
	nop
	cmp    	%o0,%i0
	bge  	setfn6
	nop
setfn5:
	dec  	4,%l7
	call	vag
	st   	%o7,[%l7+0]
	.align	4
setfn6:
	mov   	%l1,%l2
	ld	[%l7+0],%l1
	inc  	4,%l7
	st   	%l2,[%l1+8]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	getfn1
!
	.seg	"data1"   
	.align	4
.getfn1:	.word    0
	._getfn1 = 3
	.seg	"text"
	.align	8
getfn1:
	cmp    	%l1,%i2
	blt  	getfn1r2
	nop
	cmp    	%l1,%i3
	bge  	getfn1r2
	nop
	cmp    	%l2,%i2
	blt  	getfn1r1
	nop
	cmp    	%l2,%i3
	bge  	getfn1r1
	nop
	ld	[%l2+12],%o0
	cmp    	%o0,%i2
	bne	sybfalse
	nop
getfn1i:
	dec  	4,%l7
	call	getsym1i
	st   	%o7,[%l7+0]
	.align	4
	lduh	[%l1+24],%l2
	mov   	%l2,%o1
	cmp    	%o1,0
	beq	sybfalse
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getfn1r1:
	mov   	%l2,%l1
getfn1r2:
	set	485*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4

!
!	FENTRY	getfn
!
	.seg	"data1"   
	.align	4
.getfn:	.word    0
	._getfn = 5
	.seg	"text"
	.align	8
	.global	getfn
getfn:
	set	486*32,%l2
	add    	%i2,%l2,%l2
	mov   	%g0,%l3
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	getfn2
	nop
	mov   	%l4,%o1
	cmp    	%o1,3
	beq	getfn3
	nop
	set	3,%l1
	ba,a	errwna
	.align	4
getfn3:
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%l3,%i2
	blt  	getfner3
	nop
	cmp    	%l3,%i3
	bge  	getfner3
	nop
getfn2:
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	getfns
	.align	4
getfner1:
	mov   	%l2,%l1
getfner2:
	set	486*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4
getfner3:
	mov   	%l3,%l1
	ba,a	errsym
	.align	4
getfns:
	cmp    	%l2,%i2
	blt  	getfner1
	nop
	cmp    	%l2,%i3
	bge  	getfner1
	nop
	cmp	%l1,%i2
	blt  	sym29
	nop
	cmp	%l1,%i3
	blt  	getfn5
	nop
sym29:
	cmp    	%l1,%i3
	blt	getfner2
	nop
	mov   	%l1,%l4
	cmp    	%l4,%i3
	bge	getfnm1
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getfnm1:
	ld	[%l4+0],%l1
	cmp    	%l1,%i2
	blt  	getfner2
	nop
	cmp    	%l1,%i3
	bge  	getfner2
	nop
	dec  	4,%l7
	ld	[%l4+4],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	getfn5
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	getfnm2
	nop
	inc  	4*1,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getfnm2:
	ld	[%l7+0],%l4
	inc  	4,%l7
	cmp    	%l4,%i3
	bge	getfnm1
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getfn5:
	ld	[%l2+28],%o0
	cmp	%o0,%i1
	blt  	sym30
	nop
	cmp	%o0,%i2
	blt  	getfnone
	nop
sym30:
	cmp    	%l1,%i3
	blt	getfn8
	nop
getfn7:
	ld	[%l1+4],%l4
	ld	[%l1+0],%l1
	cmp    	%l4,%i2
	beq	getfn8
	nop
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	call	getfn8
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	cmp    	%l1,%i2
	bne	getfnrt
	nop
	mov   	%l4,%l1
	cmp    	%l1,%i3
	blt	getfn8
	nop
	ba,a	getfn7
	.align	4
getfnrt:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getfn8:
getfn80:
	mov   	%l2,%l4
getfn81:
	ld	[%l2+12],%o0
	cmp	%o0,%l1
	beq	getfn9
	nop
	ld	[%l2+28],%l2
	cmp	%l2,%l4
	bne	getfn81
	nop
getfn82:
	cmp    	%l1,%i2
	beq	getfn83
	nop
	ld	[%l1+12],%l1
	cmp	%l1,%l3
	bne	getfn84
	nop
getfn83:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getfn84:
	cmp    	%l1,%i3
	blt	getfn80
	nop
	ba,a	getfn7
	.align	4
getfn9:
	dec  	4,%l7
	st   	%l3,[%l7+0]
	lduh	[%l2+24],%l3
	mov   	%l3,%o1
	cmp    	%o1,0
	beq	getfn91
	nop
	ld	[%l7+0],%l3
	inc  	4,%l7
	mov   	%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getfn91:
	ld	[%l7+0],%l3
	inc  	4,%l7
	ba,a	getfn82
	.align	4
getfnone:
	lduh	[%l2+24],%l4
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	sybfalse
	nop
	ld	[%l2+12],%l4
getfno1:
	cmp    	%l1,%i3
	blt	getfno3
	nop
getfno2:
	ld	[%l1+4],%l4
	ld	[%l1+0],%l1
	cmp    	%l4,%i2
	beq	getfno3
	nop
	dec  	4,%l7
	st   	%l4,[%l7+0]
	ld	[%l2+12],%l4
	dec  	4,%l7
	call	getfno3
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	cmp    	%l1,%i2
	bne	getfnor
	nop
	mov   	%l4,%l1
	ba,a	getfno2
	.align	4
getfnor:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getfno3:
	cmp	%l1,%l4
	beq	getfno9
	nop
	cmp    	%l1,%i2
	beq	sybfalse
	nop
	ld	[%l1+12],%l1
	cmp	%l1,%l3
	bne	getfno1
	nop
getfnof:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getfno9:
	mov   	%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	getbi
!
	.seg	"data1"   
	.align	4
.getbi:	.word    0
	._getbi = 4
	.seg	"text"
	.align	8
getbi:
	cmp    	%l1,%i2
	blt  	getbier1
	nop
	cmp    	%l1,%i3
	bge  	getbier1
	nop
	cmp    	%l2,%i2
	blt  	getbier2
	nop
	cmp    	%l2,%i3
	bge  	getbier2
	nop
	cmp    	%l3,%i2
	blt  	getbier3
	nop
	cmp    	%l3,%i3
	bge  	getbier3
	nop
	ld	[%l3+12],%o0
	cmp    	%o0,%i2
	bne	sybfalse
	nop
getbi1:
	dec  	4,%l7
	st   	%l2,[%l7+0]
getbi2:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	getbi1i
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	bne	getbi9
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l2+12],%l2
	cmp    	%l2,%i2
	bne	getbi2
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l1+12],%l1
	cmp    	%l1,%i2
	bne	getbi1
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getbi9:
	inc  	4*2,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getbier3:
	mov   	%l3,%l1
	ba,a	getbier1
	.align	4
getbier2:
	mov   	%l2,%l1
getbier1:
	set	489*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4
getbi1i:
	ld	[%l3+12],%l4
	cmp    	%l4,%i3
	blt	getbi1i1
	nop
	ld	[%l4+0],%o0
	cmp	%o0,%l1
	bne	getbi1i1
	nop
	ld	[%l4+4],%o0
	cmp	%o0,%l2
	bne	getbi1i1
	nop
	lduh	[%l3+24],%l4
	mov   	%l4,%o1
	cmp    	%o1,0
	bne	getbi1i9
	nop
getbi1i1:
	ld	[%l3+28],%o0
	cmp	%o0,%i1
	blt  	sym31
	nop
	cmp	%o0,%i2
	blt  	sybfalse
	nop
sym31:
	dec  	4,%l7
	st   	%l3,[%l7+0]
getbi1i2:
	ld	[%l3+28],%l3
	ld	[%l3+12],%l4
	cmp    	%l4,%i3
	blt	getbi1i3
	nop
	ld	[%l4+0],%o0
	cmp	%o0,%l1
	bne	getbi1i3
	nop
	ld	[%l4+4],%o0
	cmp	%o0,%l2
	bne	getbi1i3
	nop
	lduh	[%l3+24],%l4
	mov   	%l4,%o1
	cmp    	%o1,0
	bne	getbi1i8
	nop
getbi1i3:
	ld	[%l7+0],%o1
	cmp	%l3,%o1
	bne	getbi1i2
	nop
	inc  	4*1,%l7
	ba,a	sybfalse
	.align	4
getbi1i8:
	inc  	4*1,%l7
getbi1i9:
	mov   	%l3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	remfn
!
	.seg	"data1"   
	.align	4
.remfn:	.word    0
	._remfn = 2
	.seg	"text"
	.align	8
	.global	remfn
remfn:
	cmp    	%l1,%i2
	blt  	makunfner
	nop
	cmp    	%l1,%i3
	bge  	makunfner
	nop
	st   	%g0,[%l1+8]
	sth   	%g0,[%l1+24]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
makunfner:
	set	483*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4

!
!	FENTRY	findfn
!
	.seg	"data1"   
	.align	4
.findfn:	.word    0
	._findfn = 2
	.seg	"text"
	.align	8
findfn:
	mov   	%l1,%l2
	set	hashtab,%o0
	ld	[%o0+0],%o0
	ld	[%o0+0],%o0
	ld	[%o0+4],%l1
	dec	1,%l1
findfn1:
	set	hashtab,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l1,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l1
	ba,a	findfn8
	.align	4
findfn2:
	mov   	%l1,%l3
	ld	[%l1+28],%o0
	cmp	%o0,%i1
	blt  	sym32
	nop
	cmp	%o0,%i2
	blt  	findfn4
	nop
sym32:
findfn3:
	ld	[%l1+28],%l1
findfn4:
	ld	[%l1+8],%o0
	cmp	%o0,%l2
	beq	findfn9
	nop
	cmp	%l1,%l3
	bne	findfn3
	nop
	ld	[%l1+20],%l1
findfn8:
	cmp	%l1,%i2
	blt  	sym33
	nop
	cmp	%l1,%i3
	blt  	findfn2
	nop
sym33:
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	deccc  	1,%l1
	and 	%l1,%l0,%l1
	bge  	findfn1
	nop
	mov   	%i2,%l1
findfn9:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	synonym
!
	.seg	"data1"   
	.align	4
.synonym:	.word    0
	._synonym = 3
	.seg	"text"
	.align	8
	.global	synonym
synonym:
	cmp    	%l1,%i2
	blt  	synmerr2
	nop
	cmp    	%l1,%i3
	bge  	synmerr2
	nop
	cmp    	%l1,%i2
	beq	synmerr2
	nop
	cmp	%l2,%i2
	blt  	sym34
	nop
	cmp	%l2,%i3
	blt  	synom
	nop
sym34:
	mov   	%l2,%l1
synmerr2:
	set	490*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4
synom:
	lduh	[%l2+24],%l3
	mov   	%l3,%o1
	cmp    	%o1,0
	beq	synmerr3
	nop
	sth   	%l3,[%l1+24]
	ld	[%l2+8],%o3
	st   	%o3,[%l1+8]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
synmerr3:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	mov   	%l2,%l1
	set	490*32,%l2
	add    	%i2,%l2,%l2
	dec  	4,%l7
	call	errudf
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	synonym
	.align	4

!
!	FENTRY	synqnym
!
	.seg	"data1"   
	.align	4
.synqnym:	.word    0
	._synqnym = 6
	.seg	"text"
	.align	8
	.global	synqnym
synqnym:
	ld	[%l1+4],%l2
	ld	[%l1+0],%l1
	ld	[%l2+0],%l2
	cmp    	%l1,%i2
	blt  	synmerq2
	nop
	cmp    	%l1,%i3
	bge  	synmerq2
	nop
	cmp    	%l1,%i2
	beq	synmerq2
	nop
	cmp    	%l2,%i2
	blt  	synmerq1
	nop
	cmp    	%l2,%i3
	bge  	synmerq1
	nop
	ba,a	synom
	.align	4
synmerq1:
	mov   	%l2,%l1
synmerq2:
	set	491*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4

!
!	FENTRY	remob
!
	.seg	"data1"   
	.align	4
.remob:	.word    0
	._remob = 2
	.seg	"text"
	.align	8
	.global	remob
remob:
	set	bvar,%o1
	ld	[%o1+0],%o1
	cmp    	%l1,%o1
	blt  	remoberr
	nop
	cmp    	%l1,%i3
	bge  	remoberr
	nop
	ba,a	istdsym
	.align	4
remoberr:
	set	492*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4

!
!	FENTRY	getsymb
!
	.seg	"data1"   
	.align	4
.getsymb:	.word    0
	._getsymb = 5
	.seg	"text"
	.align	8
	.global	getsymb
getsymb:
	mov   	%l4,%o1
	cmp    	%o1,3
	beq	getsymb0
	nop
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	getsymb1
	nop
	set	488*32,%l2
	add    	%i2,%l2,%l2
	set	3,%l1
	ba,a	errwna
	.align	4
getsymb0:
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp	%l3,%i2
	blt  	sym35
	nop
	cmp	%l3,%i3
	blt  	getsymb2
	nop
sym35:
	mov   	%l3,%l1
	set	488*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4
getsymb1:
	mov   	%g0,%l3
getsymb2:
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	getsymi
	.align	4
getsymi:
	cmp    	%l2,%i2
	blt  	getsymer
	nop
	cmp    	%l2,%i3
	bge  	getsymer
	nop
getsymi1:
	cmp	%l1,%i2
	blt  	sym36
	nop
	cmp	%l1,%i3
	blt  	getsymi3
	nop
sym36:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getsymi3:
	cmp	%l1,%l3
	beq	sybfalse
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	getsym1i
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	bne	getsymi5
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%i2
	beq	sybfalse
	nop
	ld	[%l1+12],%l1
	ba,a	getsymi1
	.align	4
getsymi5:
	inc  	4*1,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getsymer:
	set	488*32,%l1
	add    	%i2,%l1,%l1
	ba,a	errsym
	.align	4

!
!	FENTRY	getsym1
!
	.seg	"data1"   
	.align	4
.getsym1:	.word    0
	._getsym1 = 3
	.seg	"text"
	.align	8
	.global	getsym1
getsym1:
	cmp    	%l1,%i2
	blt  	getsy1r1
	nop
	cmp    	%l1,%i3
	bge  	getsy1r1
	nop
	cmp    	%l2,%i2
	blt  	getsy1r2
	nop
	cmp    	%l2,%i3
	bge  	getsy1r2
	nop
	ld	[%l2+12],%o0
	cmp    	%o0,%i2
	bne	sybfalse
	nop
getsym1i:
	ld	[%l2+12],%o0
	cmp	%o0,%l1
	beq	getsym12
	nop
	ld	[%l2+28],%o0
	cmp	%o0,%i1
	blt  	sym37
	nop
	cmp	%o0,%i2
	blt  	sybfalse
	nop
sym37:
	mov   	%l2,%l4
getsym11:
	ld	[%l2+28],%l2
	ld	[%l2+12],%o0
	cmp	%o0,%l1
	beq	getsym12
	nop
	cmp	%l2,%l4
	bne	getsym11
	nop
	ba,a	sybfalse
	.align	4
getsym12:
	mov   	%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getsy1r2:
	mov   	%l2,%l1
getsy1r1:
	set	487*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4
geti:
	ld	[%l1+4],%l4
	mov   	%i2,%l3
	ba,a	geti3
	.align	4
geti2:
	ld	[%l4+0],%o1
	cmp	%l2,%o1
	beq	getiret
	nop
	ld	[%l4+4],%l4
	cmp    	%l4,%i3
	blt	geti4
	nop
	mov   	%l4,%l3
	ld	[%l4+4],%l4
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	sym38
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
sym38:
geti3:
	cmp    	%l4,%i3
	bge	geti2
	nop
geti4:
	mov   	%i2,%l4
getiret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	getprop
!
	.seg	"data1"   
	.align	4
.getprop:	.word    0
	._getprop = 3
	.seg	"text"
	.align	8
getprop:
	cmp    	%l1,%i2
	beq	getpr4
	nop
	cmp    	%l1,%i2
	blt  	geterr
	nop
	cmp    	%l1,%i3
	bge  	geterr
	nop
	ld	[%l1+4],%l4
	cmp    	%l4,%i3
	blt	getpr4
	nop
getpr2:
	ld	[%l4+0],%o1
	cmp	%l2,%o1
	beq	getpr5
	nop
	ld	[%l4+4],%l4
	cmp    	%l4,%i3
	blt	getpr4
	nop
	ld	[%l4+4],%l4
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	sym39
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
sym39:
	cmp    	%l4,%i3
	bge	getpr2
	nop
getpr4:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getpr5:
	ld	[%l4+4],%l4
	cmp    	%l4,%i3
	blt	getpr4
	nop
	ld	[%l4+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
geterr:
	set	494*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4

!
!	FENTRY	getl
!
	.seg	"data1"   
	.align	4
.getl:	.word    0
	._getl = 3
	.seg	"text"
	.align	8
	.global	getl
getl:
	cmp    	%l1,%i2
	beq	sybfalse
	nop
	cmp    	%l1,%i2
	blt  	getlerr
	nop
	cmp    	%l1,%i3
	bge  	getlerr
	nop
	cmp    	%l2,%i2
	beq	sybfalse
	nop
	cmp    	%l2,%i3
	blt	getlerr2
	nop
	ld	[%l1+4],%l1
	ba,a	getl7
	.align	4
getl1:
	ld	[%l1+0],%l3
	dec  	4,%l7
	st   	%l2,[%l7+0]
getl2:
	ld	[%l2+0],%l4
	cmp	%l3,%l4
	beq	getl8
	nop
	ld	[%l2+4],%l2
	cmp    	%l2,%i3
	bge	getl2
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l1+4],%l1
	cmp    	%l1,%i3
	blt	getl7
	nop
	ld	[%l1+4],%l1
getl7:
	cmp    	%l1,%i3
	bge	getl1
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getl8:
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getlerr:
	set	495*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4
getlerr2:
	mov   	%l2,%l1
	set	495*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnla
	.align	4

!
!	FENTRY	addprop
!
	.seg	"data1"   
	.align	4
.addprop:	.word    0
	._addprop = 4
	.seg	"text"
	.align	8
addprop:
	cmp    	%l1,%i2
	blt  	addpret
	nop
	cmp    	%l1,%i3
	bge  	addpret
	nop
	cmp    	%l1,%i2
	beq	addpret
	nop
	ld	[%l1+4],%l4
	cmp    	%i2,%g4
	bne    	sym40
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
sym40:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l4,[%o2+4]
	mov   	%o2,%l4
	cmp    	%i2,%g4
	bne    	sym41
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
sym41:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l4,[%o2+4]
	mov   	%o2,%l4
	st   	%l4,[%l1+4]
	mov   	%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
addpret:
	set	496*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnva
	.align	4

!
!	FENTRY	putprop
!
	.seg	"data1"   
	.align	4
.putprop:	.word    0
	._putprop = 4
	.seg	"text"
	.align	8
putprop:
	cmp    	%l1,%i2
	blt  	putperr
	nop
	cmp    	%l1,%i3
	bge  	putperr
	nop
	cmp    	%l1,%i2
	beq	putperr
	nop
	dec  	4,%l7
	st   	%l2,[%l7+0]
	mov   	%l3,%l2
	dec  	4,%l7
	call	geti
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l2,%l3
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l4,%i3
	blt	addprop
	nop
	ld	[%l4+4],%l4
	cmp    	%l4,%i3
	blt	sybfalse
	nop
	st   	%l2,[%l4+0]
	mov   	%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
putperr:
	set	497*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnva
	.align	4

!
!	FENTRY	defprop
!
	.seg	"data1"   
	.align	4
.defprop:	.word    0
	._defprop = 6
	.seg	"text"
	.align	8
	.global	defprop
defprop:
	cmp    	%l1,%i3
	blt	defperr
	nop
	ld	[%l1+4],%l4
	ld	[%l1+0],%l1
	cmp    	%l4,%i3
	blt	defperr
	nop
	ld	[%l4+0],%l2
	ld	[%l4+4],%l3
	cmp    	%l3,%i3
	blt	defperr
	nop
	ld	[%l3+0],%l3
	ba,a	putprop
	.align	4
defperr:
	set	498*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnva
	.align	4

!
!	FENTRY	remprop
!
	.seg	"data1"   
	.align	4
.remprop:	.word    0
	._remprop = 3
	.seg	"text"
	.align	8
remprop:
	cmp    	%l1,%i2
	blt  	remperr
	nop
	cmp    	%l1,%i3
	bge  	remperr
	nop
	dec  	4,%l7
	call	geti
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l4,%i3
	blt	sybfalse
	nop
	dec  	4,%l7
	st   	%l4,[%l7+0]
	ld	[%l4+4],%l2
	cmp    	%l2,%i3
	blt	rempr2
	nop
	ld	[%l2+4],%l2
rempr2:
	cmp    	%l3,%i3
	blt	rempr4
	nop
	st   	%l2,[%l3+4]
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
rempr4:
	st   	%l2,[%l1+4]
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
remperr:
	set	499*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnva
	.align	4
getset12:
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	getseta
	nop
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	getsetb
	nop
	set	2,%l1
	ba,a	errwna
	.align	4
getseta:
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%i2
	blt  	getsetc
	nop
	cmp    	%l1,%i3
	bge  	getsetc
	nop
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
getsetb:
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o0
	st   	%l3,[%l7+0]
	mov 	%o0,%l3
	cmp    	%l3,%i2
	blt  	getsetd
	nop
	cmp    	%l3,%i3
	bge  	getsetd
	nop
	cmp    	%l3,%i2
	beq	getsetd
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getsetd:
	mov   	%l3,%l1
getsetc:
	ba,a	errsym
	.align	4

!
!	FENTRY	fincr
!
	.seg	"data1"   
	.align	4
.fincr:	.word    0
	._fincr = 6
	.seg	"text"
	.align	8
	.global	fincr
fincr:
	dec  	4,%l7
	ld	[%l1+0],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+4],%l1
	cmp    	%l1,%i2
	bne	incr2
	nop
	set	1,%l1
	ba,a	incr3
	.align	4
incr2:
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
incr3:
	mov   	%l1,%l2
	ld	[%l7+0],%l1
	set	bvar,%o1
	ld	[%o1+0],%o1
	cmp    	%l1,%o1
	blt  	increrr1
	nop
	cmp    	%l1,%i3
	bge  	increrr1
	nop
	ld	[%l1+0],%l1
	set	2,%l4
	dec  	4,%l7
	call	gaplus2i
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	st   	%l1,[%l2+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
increrr1:
	set	500*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnva
	.align	4

!
!	FENTRY	fdecr
!
	.seg	"data1"   
	.align	4
.fdecr:	.word    0
	._fdecr = 6
	.seg	"text"
	.align	8
	.global	fdecr
fdecr:
	dec  	4,%l7
	ld	[%l1+0],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+4],%l1
	cmp    	%l1,%i2
	bne	decr2
	nop
	set	1,%l1
	ba,a	decr3
	.align	4
decr2:
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
decr3:
	mov   	%l1,%l2
	ld	[%l7+0],%l1
	set	bvar,%o1
	ld	[%o1+0],%o1
	cmp    	%l1,%o1
	blt  	decrerr1
	nop
	cmp    	%l1,%i3
	bge  	decrerr1
	nop
	ld	[%l1+0],%l1
	dec  	4,%l7
	call	gadiff2i
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	st   	%l1,[%l2+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
decrerr1:
	set	501*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnva
	.align	4
! end
