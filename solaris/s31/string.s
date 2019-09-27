!
!	File string.s expansion for sparc arch=v8plus.
!	This file is part of Le-Lisp kernel.
!	Generated on Sat Oct   7 17 21:25:26 
!
	.file	"string.s"
	.align	8 
	.global	bvar
	.global	eheap
	.global	cheap
	.global	fvect
	.global	fstrg
	.global	errfs
	.global	errwna
	.global	errnia
	.global	errnaa
	.global	errsym
	.global	errvec
	.global	erroob
	.global	errfh
	.global	errnsa
	.global	errstl
	.global	gccons
	.global	gcfloat
	.global	gcnumb
	.global	gcstrg
	.global	gcvect
	.global	hgc
	.global	tyo
	.global	tycursor
	.global	inisymb
	.global	inicst
	.global	trysymp
	.global	trysympk
	.global	hashint
	.global	cpkgc
	.global	bufpn
	.global	obase
	.global	ffuncall
	.global	savea1
	.global	savea2
	.global	savea3
	.global	savea4
	.global	nreverse
	.global	equal
	.global	ini_str
	.global	ffsymbol
	.global	strgallc
	.global	getnumi
	.global	strgsymb
	.global	stringa1
	.global	stringa2
	.global	eqstrgi
	.global	makestrg
	.global	makevect
	.global	eqvectri
	.global	rdpscrn
	.global	ffindex
	.global	bufstrg
	.seg	"data1"
	.align	4
ocheap:
	.word 	0
bufstrg:
	.word 	0
	.seg	"text"
ini_str:
	.seg	"data1"   
	.align	4
pstr1:
	.asciz	"string"
	.seg	"text"
bstr1:
	set	6,%l1
	set	pstr1,%l2
	set	string,%l3
	dec	8,%l3
	set	trash,%l4
	set	._string,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr2:
	.asciz	"plength"
	.seg	"text"
bstr2:
	set	7,%l1
	set	pstr2,%l2
	set	plength,%l3
	dec	8,%l3
	set	trash,%l4
	set	._plength,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr3:
	.asciz	"slength"
	.seg	"text"
bstr3:
	set	7,%l1
	set	pstr3,%l2
	set	slength,%l3
	dec	8,%l3
	set	trash,%l4
	set	._slength,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr4:
	.asciz	"slen"
	.seg	"text"
bstr4:
	set	4,%l1
	set	pstr4,%l2
	set	slen,%l3
	dec	8,%l3
	set	trash,%l4
	set	._slen,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr5:
	.asciz	"sref"
	.seg	"text"
bstr5:
	set	4,%l1
	set	pstr5,%l2
	set	sref,%l3
	dec	8,%l3
	set	trash,%l4
	set	._sref,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr6:
	.asciz	"sset"
	.seg	"text"
bstr6:
	set	4,%l1
	set	pstr6,%l2
	set	sset,%l3
	dec	8,%l3
	set	trash,%l4
	set	._sset,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr7:
	.asciz	"typestring"
	.seg	"text"
bstr7:
	set	10,%l1
	set	pstr7,%l2
	set	typestrg,%l3
	dec	8,%l3
	set	trash,%l4
	set	._typestrg,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr8:
	.asciz	"exchstring"
	.seg	"text"
bstr8:
	set	10,%l1
	set	pstr8,%l2
	set	exchstrg,%l3
	dec	8,%l3
	set	trash,%l4
	set	._exchstrg,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr9:
	.asciz	"catenate"
	.seg	"text"
bstr9:
	set	8,%l1
	set	pstr9,%l2
	set	caten,%l3
	dec	8,%l3
	set	trash,%l4
	set	._caten,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr10:
	.asciz	"eqstring"
	.seg	"text"
bstr10:
	set	8,%l1
	set	pstr10,%l2
	set	eqstring,%l3
	dec	8,%l3
	set	trash,%l4
	set	._eqstring,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr11:
	.asciz	"substring-equal"
	.seg	"text"
bstr11:
	set	15,%l1
	set	pstr11,%l2
	set	subsequal,%l3
	dec	8,%l3
	set	trash,%l4
	set	._subsequal,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr12:
	.asciz	"substring"
	.seg	"text"
bstr12:
	set	9,%l1
	set	pstr12,%l2
	set	substring,%l3
	dec	8,%l3
	set	trash,%l4
	set	._substring,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr13:
	.asciz	"makestring"
	.seg	"text"
bstr13:
	set	10,%l1
	set	pstr13,%l2
	set	makestrg,%l3
	dec	8,%l3
	set	trash,%l4
	set	._makestrg,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr14:
	.asciz	"duplstring"
	.seg	"text"
bstr14:
	set	10,%l1
	set	pstr14,%l2
	set	duplstrg,%l3
	dec	8,%l3
	set	trash,%l4
	set	._duplstrg,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr15:
	.asciz	"bltstring"
	.seg	"text"
bstr15:
	set	9,%l1
	set	pstr15,%l2
	set	bltstrg,%l3
	dec	8,%l3
	set	trash,%l4
	set	._bltstrg,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr16:
	.asciz	"fillstring"
	.seg	"text"
bstr16:
	set	10,%l1
	set	pstr16,%l2
	set	fillstrg,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fillstrg,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr17:
	.asciz	"scanstring"
	.seg	"text"
bstr17:
	set	10,%l1
	set	pstr17,%l2
	set	scanstrg,%l3
	dec	8,%l3
	set	trash,%l4
	set	._scanstrg,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr18:
	.asciz	"spanstring"
	.seg	"text"
bstr18:
	set	10,%l1
	set	pstr18,%l2
	set	spanstrg,%l3
	dec	8,%l3
	set	trash,%l4
	set	._spanstrg,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr19:
	.asciz	"chrpos"
	.seg	"text"
bstr19:
	set	6,%l1
	set	pstr19,%l2
	set	chrpos,%l3
	dec	8,%l3
	set	trash,%l4
	set	._chrpos,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr20:
	.asciz	"chrnth"
	.seg	"text"
bstr20:
	set	6,%l1
	set	pstr20,%l2
	set	chrnth,%l3
	dec	8,%l3
	set	trash,%l4
	set	._chrnth,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr21:
	.asciz	"chrset"
	.seg	"text"
bstr21:
	set	6,%l1
	set	pstr21,%l2
	set	chrset,%l3
	dec	8,%l3
	set	trash,%l4
	set	._chrset,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr22:
	.asciz	"index"
	.seg	"text"
bstr22:
	set	5,%l1
	set	pstr22,%l2
	set	ffindex,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ffindex,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr23:
	.asciz	"hash"
	.seg	"text"
bstr23:
	set	4,%l1
	set	pstr23,%l2
	set	hash,%l3
	dec	8,%l3
	set	trash,%l4
	set	._hash,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr24:
	.asciz	"symbol"
	.seg	"text"
bstr24:
	set	6,%l1
	set	pstr24,%l2
	set	ffsymbol,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ffsymbol,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr25:
	.asciz	"pname"
	.seg	"text"
bstr25:
	set	5,%l1
	set	pstr25,%l2
	set	fpnam,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fpnam,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr26:
	.asciz	"concat"
	.seg	"text"
bstr26:
	set	6,%l1
	set	pstr26,%l2
	set	concat,%l3
	dec	8,%l3
	set	trash,%l4
	set	._concat,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr27:
	.asciz	"gensym"
	.seg	"text"
bstr27:
	set	6,%l1
	set	pstr27,%l2
	set	gensym,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gensym,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr28:
	.asciz	"alphalessp"
	.seg	"text"
bstr28:
	set	10,%l1
	set	pstr28,%l2
	set	alphales,%l3
	dec	8,%l3
	set	trash,%l4
	set	._alphales,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr29:
	.asciz	"bltscreen"
	.seg	"text"
bstr29:
	set	9,%l1
	set	pstr29,%l2
	set	bltscrn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._bltscrn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr30:
	.asciz	"typevector"
	.seg	"text"
bstr30:
	set	10,%l1
	set	pstr30,%l2
	set	typevect,%l3
	dec	8,%l3
	set	trash,%l4
	set	._typevect,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr31:
	.asciz	"exchvector"
	.seg	"text"
bstr31:
	set	10,%l1
	set	pstr31,%l2
	set	exchvect,%l3
	dec	8,%l3
	set	trash,%l4
	set	._exchvect,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr32:
	.asciz	"makevector"
	.seg	"text"
bstr32:
	set	10,%l1
	set	pstr32,%l2
	set	makevect,%l3
	dec	8,%l3
	set	trash,%l4
	set	._makevect,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr33:
	.asciz	"vlength"
	.seg	"text"
bstr33:
	set	7,%l1
	set	pstr33,%l2
	set	vlength,%l3
	dec	8,%l3
	set	trash,%l4
	set	._vlength,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr34:
	.asciz	"eqvector"
	.seg	"text"
bstr34:
	set	8,%l1
	set	pstr34,%l2
	set	eqvector,%l3
	dec	8,%l3
	set	trash,%l4
	set	._eqvector,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr35:
	.asciz	"vref"
	.seg	"text"
bstr35:
	set	4,%l1
	set	pstr35,%l2
	set	vref,%l3
	dec	8,%l3
	set	trash,%l4
	set	._vref,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr36:
	.asciz	"vset"
	.seg	"text"
bstr36:
	set	4,%l1
	set	pstr36,%l2
	set	vset,%l3
	dec	8,%l3
	set	trash,%l4
	set	._vset,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr37:
	.asciz	"bltvector"
	.seg	"text"
bstr37:
	set	9,%l1
	set	pstr37,%l2
	set	bltvect,%l3
	dec	8,%l3
	set	trash,%l4
	set	._bltvect,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr38:
	.asciz	"vector"
	.seg	"text"
bstr38:
	set	6,%l1
	set	pstr38,%l2
	set	vector,%l3
	dec	8,%l3
	set	trash,%l4
	set	._vector,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr39:
	.asciz	"fillvector"
	.seg	"text"
bstr39:
	set	10,%l1
	set	pstr39,%l2
	set	fillvect,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fillvect,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pstr40:
	.asciz	"gensym-string"
	.seg	"text"
bstr40:
	set 	13,%l1
	set	pstr40,%l2
	set	739*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,7*32,%o3
	st   	%o3,[%l1+12]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	1,%l1
	set	103,%l2
	dec  	4,%l7
	call	makestrg
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
	st   	%l1,[%l3+0]
	.seg	"data1"   
	.align	4
pstr41:
	.asciz	"gensym-counter"
	.seg	"text"
bstr41:
	set 	14,%l1
	set	pstr41,%l2
	set	740*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,7*32,%o3
	st   	%o3,[%l1+12]
	set	100,%o3
	st   	%o3,[%l1+0]
	set	1024,%l1
	mov   	%g0,%l2
	dec  	4,%l7
	call	makestrg
	st   	%o7,[%l7+0]
	.align	4
	set	bufstrg,%o4
	st   	%l1,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
strgallc:
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	bge	strgall0
	nop
	mov   	%g0,%l2
strgall0:
	set	fstrg,%l1
	ld	[%l1+0],%l1
	cmp    	%l1,%i2
	beq	strgall3
	nop
	set	cheap,%o3
	ld	[%o3+0],%o3
	set	ocheap,%o4
	st   	%o3,[%o4+0]
	mov   	%l2,%o0
	set	cheap,%o1
	ld	[%o1+0],%o1
	add    	%o1,%o0,%o1
	inc  	13,%o1
	and  	%o1,-4,%o1
	set	cheap,%o4
	st   	%o1,[%o4+0]
	set	eheap,%o0
	ld	[%o0+0],%o0
	set	cheap,%o1
	ld	[%o1+0],%o1
	cmp	%o0,%o1
	blt	strgall4
	nop
strgall2:
	ld	[%l1+0],%o3
	set	fstrg,%o4
	st   	%o3,[%o4+0]
	set	ocheap,%o3
	ld	[%o3+0],%o3
	st   	%o3,[%l1+0]
	set	ocheap,%o1
	ld	[%o1+0],%o1
	st   	%l2,[%o1+4]
	set	ocheap,%o1
	ld	[%o1+0],%o1
	st   	%l1,[%o1+0]
	ld	[%l1+0],%o1
	inc	8,%o1
	add  	%l2,%o1,%o1
	stb  	%g0,[%o1+0]
	set	700*32,%o3
	add    	%i2,%o3,%o3
	st   	%o3,[%l1+4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
strgall3:
	dec  	4,%l7
	call	gcstrg
	st   	%o7,[%l7+0]
	.align	4
	ba,a	strgallc
	.align	4
strgall4:
	mov   	%i2,%l1
	set	ocheap,%o3
	ld	[%o3+0],%o3
	set	cheap,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	hgc
	st   	%o7,[%l7+0]
	.align	4
	set	fstrg,%l1
	ld	[%l1+0],%l1
	set	cheap,%o3
	ld	[%o3+0],%o3
	set	ocheap,%o4
	st   	%o3,[%o4+0]
	mov   	%l2,%o0
	set	cheap,%o1
	ld	[%o1+0],%o1
	add    	%o1,%o0,%o1
	inc  	13,%o1
	and  	%o1,-4,%o1
	set	cheap,%o4
	st   	%o1,[%o4+0]
	set	cheap,%o0
	ld	[%o0+0],%o0
	set	eheap,%o1
	ld	[%o1+0],%o1
	cmp	%o0,%o1
	blt	strgall2
	nop
	set	ocheap,%o3
	ld	[%o3+0],%o3
	set	cheap,%o4
	st   	%o3,[%o4+0]
	mov   	%i2,%l1
	ba,a	errfh
	.align	4
getnumi:
	set	0x8000,%o1
	cmp   	%l1,%o1
	beq	getmin
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	bge	getpos
	nop
	set	45,%l4
	dec  	4,%l7
	call	getnumch
	st   	%o7,[%l7+0]
	.align	4
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	neg	%l1,%l1
	mov   	%l1,%o2
	and 	%l1,%l0,%l1
getpos:
	mov   	%l1,%l4
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	set	obase,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
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
	and	%o0,%l0,%l4
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	add	%l4,48,%l4
	and 	%l4,%l0,%l4
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,57
	ble	getpos2
	nop
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	add	%l4,7,%l4
	and 	%l4,%l0,%l4
getpos2:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	set	obase,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
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
	and	%o0,%l0,%l1
	mov   	%l1,%o1
	cmp    	%o1,0
	beq	getnumch
	nop
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	call	getpos
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	ba,a	getnumch
	.align	4
getmin:
	set	35,%l4
	dec  	4,%l7
	call	getnumch
	st   	%o7,[%l7+0]
	.align	4
	set	36,%l4
	dec  	4,%l7
	call	getnumch
	st   	%o7,[%l7+0]
	.align	4
	set	56,%l4
	dec  	4,%l7
	call	getnumch
	st   	%o7,[%l7+0]
	.align	4
	set	48,%l4
	dec  	4,%l7
	call	getnumch
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	getnumch
	st   	%o7,[%l7+0]
	.align	4
getnumch:
	ld	[%l3+0],%o1
	inc	8,%o1
	add  	%l2,%o1,%o1
	stb  	%l4,[%o1+0]
	inc	1,%l2
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
badstr2:
	mov   	%l2,%l1
badstr1:
	set	savea4,%l2
	ld	[%l2+0],%l2
	ba,a	errnsa
	.align	4
badvec2:
	mov   	%l2,%l1
badvec1:
	set	savea4,%l2
	ld	[%l2+0],%l2
	ba,a	errvec
	.align	4
badnbar5:
	set	5,%l1
	ba,a	badnba31
	.align	4
badnbar3:
	set	3,%l1
badnba31:
	set	savea4,%l2
	ld	[%l2+0],%l2
	ba,a	errwna
	.align	4
badnbar4:
	set	4,%l1
	ba,a	badnba31
	.align	4
badoob1:
	set	savea4,%l2
	ld	[%l2+0],%l2
	ba,a	erroob
	.align	4
badfix2:
	mov   	%l2,%l1
badfix1:
	set	savea4,%l2
	ld	[%l2+0],%l2
	ba,a	errnia
	.align	4
badfix3:
	mov   	%l3,%l1
	ba,a	badfix1
	.align	4
badfix4:
	mov   	%l4,%l1
	ba,a	badfix1
	.align	4
badind2:
	mov   	%l2,%l1
badind1:
	set	savea4,%l2
	ld	[%l2+0],%l2
	ba,a	erroob
	.align	4
badind3:
	mov   	%l3,%l1
	ba,a	badind1
	.align	4
badind4:
	mov   	%l4,%l1
	ba,a	badind1
	.align	4
mina1a2:
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	sll	%l1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bgt	mina1a2x
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mina1a2x:
	mov   	%l1,%l2
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mina1a3:
	sll	%l3,16,%o0
	sra	%o0,16,%o0
	sll	%l1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bgt	mina1a3x
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mina1a3x:
	mov   	%l1,%l3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mina1a4:
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	sll	%l1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bgt	mina1a4x
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mina1a4x:
	mov   	%l1,%l4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mina3a1:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l3,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bgt	mina3a1x
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mina3a1x:
	mov   	%l3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mina3a4:
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	sll	%l3,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bgt	mina3a4x
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mina3a4x:
	mov   	%l3,%l4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mina4a1:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bgt	mina4a1x
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mina4a1x:
	mov   	%l4,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mina4a3:
	sll	%l3,16,%o0
	sra	%o0,16,%o0
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bgt	mina4a3x
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mina4a3x:
	mov   	%l4,%l3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
strfalse:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	string
!
	.seg	"data1"   
	.align	4
.string:	.word    0
	._string = 2
	.seg	"text"
	.align	8
	.global	string
string:
	cmp	%l1,%i1
	blt  	str42
	nop
	cmp	%l1,%i2
	blt  	stringr
	nop
str42:
	cmp    	%l1,%i2
	blt  	stringc
	nop
	cmp    	%l1,%i3
	bge  	stringc
	nop
	ld	[%l1+20],%l2
	cmp	%l2,%i1
	blt  	str43
	nop
	cmp	%l2,%i2
	blt  	stringr2
	nop
str43:
	ld	[%l1+28],%l2
	cmp	%l2,%i1
	blt  	str44
	nop
	cmp	%l2,%i2
	blt  	stringr2
	nop
str44:
	ld	[%l2+20],%l2
stringr2:
	mov   	%l2,%l1
stringr:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
stringc:
	set	700*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	ba,a	strgrest
	.align	4
stringa1:
	cmp    	%l1,%i1
	blt  	strgrest
	nop
	cmp    	%l1,%i2
	bge  	strgrest
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
strgsymb:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	ld	[%l1+20],%l2
	cmp	%l2,%i1
	blt  	str45
	nop
	cmp	%l2,%i2
	blt  	strgsyre
	nop
str45:
	ld	[%l1+28],%l2
	cmp	%l2,%i1
	blt  	str46
	nop
	cmp	%l2,%i2
	blt  	strgsyre
	nop
str46:
	ld	[%l2+20],%l2
strgsyre:
	mov   	%l2,%l1
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
strgrest:
	cmp	%l1,%i2
	blt  	str47
	nop
	cmp	%l1,%i3
	blt  	strgsymb
	nop
str47:
	cmp	%l1,%i0
	blt  	str48
	nop
	cmp	%l1,%i1
	blt  	badstr1
	nop
str48:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	set	bufstrg,%l3
	ld	[%l3+0],%l3
	cmp    	%l1,0
	bge	strgnf
	nop
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	mov   	%l1,%o0
	sll    	%o0,1,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fstod	%f0,%f0
	ld	[%l3+0],%o2
	inc  	8,%o2
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	mov   	%o2,%o2
	st   	%f1,[%l5+0]
	ld	[%l5+0],%o1
	st   	%f0,[%l5+0]
	ld	[%l5+0],%o0
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	llrt_cvftoa,3
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
	mov   	%o0,%l2
	ld	[%l7+0],%g5
	inc  	4,%l7 
	ld	[%l7+0],%g4
	inc  	4,%l7 
	ld	[%l7+0],%g3
	inc  	4,%l7 
	ld	[%l7+0],%g2
	inc  	4,%l7 
	ba,a	strgfol
	.align	4
strgnf:
	mov   	%g0,%l2
	dec  	4,%l7
	st   	%l4,[%l7+0]
	cmp    	%l1,0
	blt  	strgnn
	nop
	cmp    	%l1,%i0
	bge  	strgnn
	nop
	dec  	4,%l7
	call	getnumi
	st   	%o7,[%l7+0]
	.align	4
	ba,a	strgfol4
	.align	4
strgnn:
	cmp    	%l1,%i2
	beq	strgfol4
	nop
	cmp    	%l1,%i3
	blt	badstr1
	nop
	ld	[%l1+0],%l4
	cmp    	%l4,0
	blt  	badstr1
	nop
	cmp    	%l4,%i0
	bge  	badstr1
	nop
	dec  	4,%l7
	call	getnumch
	st   	%o7,[%l7+0]
	.align	4
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,1024
	bge	badstr1
	nop
	ld	[%l1+4],%l1
	ba,a	strgnn
	.align	4
strgfol4:
	ld	[%l7+0],%l4
	inc  	4,%l7
strgfol:
	dec  	4,%l7
	call	strgallc
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l3+0],%o1
	add	%o1,8+0,%o1
	ld	[%l1+0],%o2
	add	%o2,8+0,%o2
	mov   	%l2,%o0
	cmp    	%o2,%o1
	blt     gstr49
	nop
	add    	%o1,%o0,%o1
	ba    fstr49
	add    	%o2,%o0,%o2
	.align	4
qstr49:	ldub   	[%o1+0],%o3
	stb  	%o3,[%o2+0]
fstr49:	dec  	%o1
	deccc  	%o0
	bge      qstr49
	dec  	%o2
	ba,a    estr49
rstr49:
	stb  	%o3,[%o2+0]
	inc  	%o2
	inc  	%o1
gstr49:	deccc  	%o0
	bge,a    rstr49
	ldub   	[%o1+0],%o3
estr49:
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
stringa2:
	cmp    	%l2,%i1
	blt  	stra2c
	nop
	cmp    	%l2,%i2
	bge  	stra2c
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
stra2c:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	mov   	%l2,%l1
	dec  	4,%l7
	call	strgrest
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l2
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
stringa3:
	cmp    	%l3,%i1
	blt  	stra3c
	nop
	cmp    	%l3,%i2
	bge  	stra3c
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
stra3c:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	mov   	%l3,%l1
	dec  	4,%l7
	call	strgrest
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l3
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	plength
!
	.seg	"data1"   
	.align	4
.plength:	.word    0
	._plength = 2
	.seg	"text"
	.align	8
	.global	plength
plength:
	set	701*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l1+0],%o0
	ld	[%o0+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	slength
!
	.seg	"data1"   
	.align	4
.slength:	.word    0
	._slength = 2
	.seg	"text"
	.align	8
	.global	slength
slength:
	set	702*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l1+0],%o0
	ld	[%o0+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	slen
!
	.seg	"data1"   
	.align	4
.slen:	.word    0
	._slen = 2
	.seg	"text"
	.align	8
	.global	slen
slen:
	set	703*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	cmp    	%l1,%i1
	blt  	badstr1
	nop
	cmp    	%l1,%i2
	bge  	badstr1
	nop
	ld	[%l1+0],%o0
	ld	[%o0+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	caten
!
	.seg	"data1"   
	.align	4
.caten:	.word    0
	._caten = 5
	.seg	"text"
	.align	8
	.global	caten
caten:
	set	708*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
caten0:
	mov   	%l4,%l3
	mov   	%g0,%l2
	ba,a	caten2
	.align	4
caten1:
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l1
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l4,%o1
	sll  	%o1,2,%o1
	add    	%o1,%l7,%o1
	st   	%l1,[%o1+0]
	ld	[%l1+0],%o0
	ld	[%o0+4],%l1
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	sll	%l1,16,%o1
	sra	%o1,16,%o1
	add	%l2,%o1,%l2
	mov   	%l2,%o2
	and 	%l2,%l0,%l2
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	catenstl
	nop
caten2:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	caten1
	nop
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	call	strgallc
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	ba,a	caten4
	.align	4
caten3:
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l3+0],%o0
	ld	[%o0+4],%o1
	set	savea1,%o4
	st   	%o1,[%o4+0]
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	set	savea1,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	sub	%l2,%o1,%l2
	and 	%l2,%l0,%l2
	ld	[%l3+0],%o1
	add	%o1,8+0,%o1
	ld	[%l1+0],%o2
	inc	8,%o2
	add  	%l2,%o2,%o2
	set	savea1,%o0
	ld	[%o0+0],%o0
	cmp    	%o2,%o1
	blt     gstr50
	nop
	add    	%o1,%o0,%o1
	ba    fstr50
	add    	%o2,%o0,%o2
	.align	4
qstr50:	ldub   	[%o1+0],%o3
	stb  	%o3,[%o2+0]
fstr50:	dec  	%o1
	deccc  	%o0
	bge      qstr50
	dec  	%o2
	ba,a    estr50
rstr50:
	stb  	%o3,[%o2+0]
	inc  	%o2
	inc  	%o1
gstr50:	deccc  	%o0
	bge,a    rstr50
	ldub   	[%o1+0],%o3
estr50:
caten4:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	caten3
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
catenstl:
	set	32767,%l1
	set	708*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errstl
	.align	4

!
!	FENTRY	subsequal
!
	.seg	"data1"   
	.align	4
.subsequal:	.word    0
	._subsequal = 5
	.seg	"text"
	.align	8
	.global	subsequal
subsequal:
	set	710*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	mov   	%l4,%o1
	cmp    	%o1,5
	bne	badnbar5
	nop
	ld	[%l7+12],%l1
	cmp    	%l1,%i1
	blt  	badstr1
	nop
	cmp    	%l1,%i2
	bge  	badstr1
	nop
	ld	[%l7+4],%l2
	cmp    	%l2,%i1
	blt  	badstr2
	nop
	cmp    	%l2,%i2
	bge  	badstr2
	nop
	ld	[%l7+8],%l3
	cmp    	%l3,0
	blt  	badfix3
	nop
	cmp    	%l3,%i0
	bge  	badfix3
	nop
	sll	%l3,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	badind3
	nop
	ld	[%l7+0],%l4
	cmp    	%l4,0
	blt  	badfix4
	nop
	cmp    	%l4,%i0
	bge  	badfix4
	nop
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	badind4
	nop
	set	savea1,%o4
	st   	%l1,[%o4+0]
	set	savea2,%o4
	st   	%l2,[%o4+0]
	ld	[%l7+16],%l1
	cmp    	%l1,0
	blt  	badfix1
	nop
	cmp    	%l1,%i0
	bge  	badfix1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	badind1
	nop
	mov   	%l1,%l2
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	sll	%l3,16,%o1
	sra	%o1,16,%o1
	add	%l2,%o1,%l2
	and 	%l2,%l0,%l2
	set	savea1,%o0
	ld	[%o0+0],%o0
	ld	[%o0+0],%o0
	ld	[%o0+4],%o1
	set	savea3,%o4
	st   	%o1,[%o4+0]
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	set	savea3,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bgt	badind1
	nop
	mov   	%l1,%l2
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	add	%l2,%o1,%l2
	and 	%l2,%l0,%l2
	set	savea2,%o0
	ld	[%o0+0],%o0
	ld	[%o0+0],%o0
	ld	[%o0+4],%o1
	set	savea3,%o4
	st   	%o1,[%o4+0]
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	set	savea3,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bgt	badind1
	nop
	inc  	4*5,%l7
	set	savea1,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	set	savea2,%o2
	ld	[%o2+0],%o2
	ld	[%o2+0],%o2
	inc	8,%o2
	add  	%l4,%o2,%o2
	mov   	%l1,%o0
	.align	4
	ba,a   	sstr51
rstr51:
	ldub	[%o2+0],%o4
	cmp   	%o3,%o4
	bne  	nstr51
	nop
	inc  	%o1
	inc  	%o2
sstr51:	deccc  	%o0
	bge,a  	rstr51
	ldub	[%o1+0],%o3
	nop
	ba,a   	subseqr
	.align	4
nstr51:
	mov   	%i2,%l1
subseqr:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	eqstring
!
	.seg	"data1"   
	.align	4
.eqstring:	.word    0
	._eqstring = 3
	.seg	"text"
	.align	8
	.global	eqstring
eqstring:
	set	709*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	stringa2
	st   	%o7,[%l7+0]
	.align	4
eqstrgi:
	cmp	%l1,%l2
	beq	sret
	nop
	ld	[%l1+0],%o0
	ld	[%o0+4],%l3
	ld	[%l2+0],%o0
	ld	[%o0+4],%l4
	cmp   	%l3,%l4
	bne	sfalse
	nop
	ld	[%l1+4],%l4
	cmp    	%l4,%i2
	blt  	eqstrg2
	nop
	cmp    	%l4,%i3
	bge  	eqstrg2
	nop
	ld	[%l2+4],%o1
	cmp	%l4,%o1
	bne	sfalse
	nop
	ld	[%l1+0],%o1
	add	%o1,8+0,%o1
	ld	[%l2+0],%o2
	add	%o2,8+0,%o2
	mov   	%l3,%o0
	.align	4
	ba,a   	sstr52
rstr52:
	ldub	[%o2+0],%o4
	cmp   	%o3,%o4
	bne  	nstr52
	nop
	inc  	%o1
	inc  	%o2
sstr52:	deccc  	%o0
	bge,a  	rstr52
	ldub	[%o1+0],%o3
	nop
	ba,a   	sret
	.align	4
nstr52:
sfalse:
	mov   	%i2,%l1
sret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
eqstrg2:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	mov   	%l4,%l1
	ld	[%l2+4],%l2
	dec  	4,%l7
	call	equal
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l4
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l4,%i2
	beq	sfalse2
	nop
	ld	[%l1+0],%o1
	add	%o1,8+0,%o1
	ld	[%l2+0],%o2
	add	%o2,8+0,%o2
	mov   	%l3,%o0
	.align	4
	ba,a   	sstr53
rstr53:
	ldub	[%o2+0],%o4
	cmp   	%o3,%o4
	bne  	nstr53
	nop
	inc  	%o1
	inc  	%o2
sstr53:	deccc  	%o0
	bge,a  	rstr53
	ldub	[%o1+0],%o3
	nop
	ba,a   	sret2
	.align	4
nstr53:
sfalse2:
	mov   	%i2,%l1
sret2:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	substring
!
	.seg	"data1"   
	.align	4
.substring:	.word    0
	._substring = 5
	.seg	"text"
	.align	8
	.global	substring
substring:
	set	711*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	set	32767,%l1
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	substr1
	nop
	mov   	%l4,%o1
	cmp    	%o1,3
	bne	badnbar3
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,0
	blt  	badfix1
	nop
	cmp    	%l1,%i0
	bge  	badfix1
	nop
substr1:
	ld	[%l7+0],%l4
	inc  	4,%l7
	cmp    	%l4,0
	blt  	badfix4
	nop
	cmp    	%l4,%i0
	bge  	badfix4
	nop
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	badind4
	nop
	ld	[%l7+0],%l3
	inc  	4,%l7
	dec  	4,%l7
	call	stringa3
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l3+0],%o0
	ld	[%o0+4],%l2
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	sub	%l2,%o1,%l2
	mov   	%l2,%o2
	and 	%l2,%l0,%l2
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	substr2
	nop
substr2:
	dec  	4,%l7
	call	mina1a2
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	strgallc
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l3+0],%o1
	inc	8,%o1
	add  	%l4,%o1,%o1
	ld	[%l1+0],%o2
	add	%o2,8+0,%o2
	mov   	%l2,%o0
	cmp    	%o2,%o1
	blt     gstr54
	nop
	add    	%o1,%o0,%o1
	ba    fstr54
	add    	%o2,%o0,%o2
	.align	4
qstr54:	ldub   	[%o1+0],%o3
	stb  	%o3,[%o2+0]
fstr54:	dec  	%o1
	deccc  	%o0
	bge      qstr54
	dec  	%o2
	ba,a    estr54
rstr54:
	stb  	%o3,[%o2+0]
	inc  	%o2
	inc  	%o1
gstr54:	deccc  	%o0
	bge,a    rstr54
	ldub   	[%o1+0],%o3
estr54:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	makestrg
!
	.seg	"data1"   
	.align	4
.makestrg:	.word    0
	._makestrg = 3
	.seg	"text"
	.align	8
makestrg:
	set	712*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	cmp    	%l1,0
	blt  	badfix1
	nop
	cmp    	%l1,%i0
	bge  	badfix1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	bge	makstrg0
	nop
	mov   	%g0,%l1
makstrg0:
	cmp    	%l2,0
	blt  	badfix2
	nop
	cmp    	%l2,%i0
	bge  	badfix2
	nop
	dec  	4,%l7
	st   	%l2,[%l7+0]
	mov   	%l1,%l2
	dec  	4,%l7
	call	strgallc
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
	ba,a	makstrg2
	.align	4
makstrg1:
	ld	[%l1+0],%o1
	inc	8,%o1
	add  	%l2,%o1,%o1
	stb  	%l3,[%o1+0]
makstrg2:
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	deccc  	1,%l2
	and 	%l2,%l0,%l2
	bge  	makstrg1
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	duplstrg
!
	.seg	"data1"   
	.align	4
.duplstrg:	.word    0
	._duplstrg = 3
	.seg	"text"
	.align	8
	.global	duplstrg
duplstrg:
	set	713*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	cmp    	%l1,0
	blt  	badfix1
	nop
	cmp    	%l1,%i0
	bge  	badfix1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	dupserr
	nop
	dec  	4,%l7
	call	stringa2
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l2,%l3
	ld	[%l2+0],%o0
	ld	[%o0+4],%l4
	mov   	%l4,%l2
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	sll	%l1,16,%o0
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
	and	%o0,%l0,%l2
	sll	%o0,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o0
	bne  	dupsstl
	nop
	set	savea1,%o4
	st   	%l1,[%o4+0]
	dec  	4,%l7
	call	strgallc
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g0,%l2
	ba,a	dupstrg2
	.align	4
dupstrg1:
	ld	[%l3+0],%o1
	add	%o1,8+0,%o1
	ld	[%l1+0],%o2
	inc	8,%o2
	add  	%l2,%o2,%o2
	mov   	%l4,%o0
	cmp    	%o2,%o1
	blt     gstr55
	nop
	add    	%o1,%o0,%o1
	ba    fstr55
	add    	%o2,%o0,%o2
	.align	4
qstr55:	ldub   	[%o1+0],%o3
	stb  	%o3,[%o2+0]
fstr55:	dec  	%o1
	deccc  	%o0
	bge      qstr55
	dec  	%o2
	ba,a    estr55
rstr55:
	stb  	%o3,[%o2+0]
	inc  	%o2
	inc  	%o1
gstr55:	deccc  	%o0
	bge,a    rstr55
	ldub   	[%o1+0],%o3
estr55:
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	add	%l2,%o1,%l2
	and 	%l2,%l0,%l2
dupstrg2:
	set	savea1,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	deccc  	1,%o0
	set	savea1+2,%o4
	sth	%o0,[%o4]
	bge  	dupstrg1
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
dupserr:
	set	713*32,%l2
	add    	%i2,%l2,%l2
	ba,a	erroob
	.align	4
dupsstl:
	set	713*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errstl
	.align	4

!
!	FENTRY	bltstrg
!
	.seg	"data1"   
	.align	4
.bltstrg:	.word    0
	._bltstrg = 5
	.seg	"text"
	.align	8
	.global	bltstrg
bltstrg:
	set	714*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	mov   	%l4,%o1
	cmp    	%o1,5
	beq	bltstrg0
	nop
	set	32767,%l3
	mov   	%l4,%o1
	cmp    	%o1,4
	beq	bltstrg1
	nop
	mov   	%g0,%l2
	mov   	%l4,%o1
	cmp    	%o1,3
	bne	badnbar3
	nop
	ba,a	bltstrg2
	.align	4
bltstrg0:
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%l3,0
	blt  	badfix3
	nop
	cmp    	%l3,%i0
	bge  	badfix3
	nop
bltstrg1:
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l2,0
	blt  	badfix2
	nop
	cmp    	%l2,%i0
	bge  	badfix2
	nop
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	badind2
	nop
bltstrg2:
	set	savea2,%o4
	st   	%l2,[%o4+0]
	ld	[%l7+0],%l2
	inc  	4,%l7
	dec  	4,%l7
	call	stringa2
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,0
	blt  	badfix1
	nop
	cmp    	%l1,%i0
	bge  	badfix1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	badind1
	nop
	set	savea1,%o4
	st   	%l1,[%o4+0]
	ld	[%l7+0],%l1
	cmp    	%l1,%i1
	blt  	badstr1
	nop
	cmp    	%l1,%i2
	bge  	badstr1
	nop
	ld	[%l1+0],%o0
	ld	[%o0+4],%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	set	savea1,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	sub	%l1,%o1,%l1
	mov   	%l1,%o2
	and 	%l1,%l0,%l1
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	bltstr3
	nop
bltstr3:
	dec  	4,%l7
	call	mina1a3
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l2+0],%o0
	ld	[%o0+4],%l4
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	set	savea2,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	sub	%l4,%o1,%l4
	mov   	%l4,%o2
	and 	%l4,%l0,%l4
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	bltstr4
	nop
bltstr4:
	dec  	4,%l7
	call	mina4a3
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	sll	%l3,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	ble	bltstrg6
	nop
	ld	[%l2+0],%o1
	inc	8,%o1
	set	savea2,%o0
	ld	[%o0+0],%o0
	add  	%o0,%o1,%o1
	ld	[%l1+0],%o2
	inc	8,%o2
	set	savea1,%o0
	ld	[%o0+0],%o0
	add  	%o0,%o2,%o2
	mov   	%l3,%o0
	cmp    	%o2,%o1
	blt     gstr56
	nop
	add    	%o1,%o0,%o1
	ba    fstr56
	add    	%o2,%o0,%o2
	.align	4
qstr56:	ldub   	[%o1+0],%o3
	stb  	%o3,[%o2+0]
fstr56:	dec  	%o1
	deccc  	%o0
	bge      qstr56
	dec  	%o2
	ba,a    estr56
rstr56:
	stb  	%o3,[%o2+0]
	inc  	%o2
	inc  	%o1
gstr56:	deccc  	%o0
	bge,a    rstr56
	ldub   	[%o1+0],%o3
estr56:
bltstrg6:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	fillstrg
!
	.seg	"data1"   
	.align	4
.fillstrg:	.word    0
	._fillstrg = 5
	.seg	"text"
	.align	8
	.global	fillstrg
fillstrg:
	set	715*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	set	32767,%l1
	mov   	%l4,%o1
	cmp    	%o1,3
	beq	fillstr0
	nop
	mov   	%l4,%o1
	cmp    	%o1,4
	bne	badnbar4
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,0
	blt  	badfix1
	nop
	cmp    	%l1,%i0
	bge  	badfix1
	nop
fillstr0:
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%l3,0
	blt  	badfix3
	nop
	cmp    	%l3,%i0
	bge  	badfix3
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l2,0
	blt  	badfix2
	nop
	cmp    	%l2,%i0
	bge  	badfix2
	nop
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	badind2
	nop
	mov   	%l1,%l4
	ld	[%l7+0],%l1
	cmp    	%l1,%i1
	blt  	badstr1
	nop
	cmp    	%l1,%i2
	bge  	badstr1
	nop
	ld	[%l1+0],%o0
	ld	[%o0+4],%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	sub	%l1,%o1,%l1
	mov   	%l1,%o2
	and 	%l1,%l0,%l1
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	fillstr6
	nop
fillstr6:
	dec  	4,%l7
	call	mina1a4
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	fillstr8
	.align	4
fillstr7:
	ld	[%l1+0],%o1
	inc	8,%o1
	add  	%l2,%o1,%o1
	stb  	%l3,[%o1+0]
	inc	1,%l2
fillstr8:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	fillstr7
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	scanstrg
!
	.seg	"data1"   
	.align	4
.scanstrg:	.word    0
	._scanstrg = 5
	.seg	"text"
	.align	8
	.global	scanstrg
scanstrg:
	set	716*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
sanstrg1:
	mov   	%g0,%l3
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	sanstrg2
	nop
	mov   	%l4,%o1
	cmp    	%o1,3
	bne	badnbar3
	nop
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%l3,0
	blt  	badfix3
	nop
	cmp    	%l3,%i0
	bge  	badfix3
	nop
	sll	%l3,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	badind3
	nop
sanstrg2:
	ld	[%l7+0],%l2
	inc  	4,%l7
	dec  	4,%l7
	call	stringa2
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l1+0],%o0
	ld	[%o0+4],%l4
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	sll	%l3,16,%o1
	sra	%o1,16,%o1
	sub	%l4,%o1,%l4
	mov   	%l4,%o2
	and 	%l4,%l0,%l4
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	sanstrg4
	nop
	ba,a	sanstrg4
	.align	4
sanstrg3:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	ld	[%l1+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	ldub	[%o1+0],%l4
	ld	[%l2+0],%o0
	ld	[%o0+4],%l3
	ba,a	sanpos6
	.align	4
sanpos5:
	ld	[%l2+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	ldub	[%o1+0],%l1
	cmp	%l4,%l1
	beq	sanpos9
	nop
sanpos6:
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	deccc  	1,%l3
	and 	%l3,%l0,%l3
	bge  	sanpos5
	nop
	set	716*32,%o0
	add    	%i2,%o0,%o0
	set	savea4,%o1
	ld	[%o1+0],%o1
	cmp	%o0,%o1
	bne	sanstrg6
	nop
	ba,a	sanposf
	.align	4
sanpos9:
	set	717*32,%o0
	add    	%i2,%o0,%o0
	set	savea4,%o1
	ld	[%o1+0],%o1
	cmp	%o0,%o1
	bne	sanstrg6
	nop
sanposf:
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	inc	1,%l3
sanstrg4:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	sanstrg3
	nop
	ba,a	strfalse
	.align	4
sanstrg6:
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	spanstrg
!
	.seg	"data1"   
	.align	4
.spanstrg:	.word    0
	._spanstrg = 5
	.seg	"text"
	.align	8
	.global	spanstrg
spanstrg:
	set	717*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	ba,a	sanstrg1
	.align	4

!
!	FENTRY	chrpos
!
	.seg	"data1"   
	.align	4
.chrpos:	.word    0
	._chrpos = 5
	.seg	"text"
	.align	8
	.global	chrpos
chrpos:
	set	718*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	mov   	%g0,%l3
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	chrpos1
	nop
	mov   	%l4,%o1
	cmp    	%o1,3
	bne	badnbar3
	nop
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%l3,0
	blt  	badfix3
	nop
	cmp    	%l3,%i0
	bge  	badfix3
	nop
	sll	%l3,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	badind3
	nop
chrpos1:
	ld	[%l7+0],%l2
	inc  	4,%l7
	dec  	4,%l7
	call	stringa2
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,0
	blt  	badfix1
	nop
	cmp    	%l1,%i0
	bge  	badfix1
	nop
	and	%l1,255,%l1
	ld	[%l2+0],%o0
	ld	[%o0+4],%l4
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	sll	%l3,16,%o1
	sra	%o1,16,%o1
	sub	%l4,%o1,%l4
	mov   	%l4,%o2
	and 	%l4,%l0,%l4
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	chrpos3
	nop
	ba,a	chrpos3
	.align	4
chrpos2:
	ld	[%l2+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	ldub	[%o1+0],%o0
	set	savea1,%o4
	st   	%o0,[%o4+0]
	set	savea1,%o0
	ld	[%o0+0],%o0
	cmp	%o0,%l1
	beq	chrpos5
	nop
	inc	1,%l3
chrpos3:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	chrpos2
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
chrpos5:
	mov   	%l3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	sref
!
	.seg	"data1"   
	.align	4
.sref:	.word    0
	._sref = 3
	.seg	"text"
	.align	8
	.global	sref
sref:
	set	704*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	cmp    	%l1,%i1
	blt  	badstr1
	nop
	cmp    	%l1,%i2
	bge  	badstr1
	nop
	cmp    	%l2,0
	blt  	badfix2
	nop
	cmp    	%l2,%i0
	bge  	badfix2
	nop
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	badind2
	nop
	ld	[%l1+0],%o0
	ld	[%o0+4],%l3
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	sll	%l3,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bge	badind2
	nop
	ld	[%l1+0],%o1
	inc	8,%o1
	add  	%l2,%o1,%o1
	ldub	[%o1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	chrnth
!
	.seg	"data1"   
	.align	4
.chrnth:	.word    0
	._chrnth = 3
	.seg	"text"
	.align	8
	.global	chrnth
chrnth:
	set	719*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa2
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,0
	blt  	badfix1
	nop
	cmp    	%l1,%i0
	bge  	badfix1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	strfalse
	nop
	ld	[%l2+0],%o0
	ld	[%o0+4],%l3
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l3,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bge	strfalse
	nop
	ld	[%l2+0],%o1
	inc	8,%o1
	add  	%l1,%o1,%o1
	ldub	[%o1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	sset
!
	.seg	"data1"   
	.align	4
.sset:	.word    0
	._sset = 4
	.seg	"text"
	.align	8
	.global	sset
sset:
	set	705*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	mov   	%l1,%l4
	mov   	%l2,%l1
	mov   	%l4,%l2
	cmp    	%l2,%i1
	blt  	badstr2
	nop
	cmp    	%l2,%i2
	bge  	badstr2
	nop
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	call	chrset5
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	chrset
!
	.seg	"data1"   
	.align	4
.chrset:	.word    0
	._chrset = 4
	.seg	"text"
	.align	8
	.global	chrset
chrset:
	set	720*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa2
	st   	%o7,[%l7+0]
	.align	4
chrset5:
	cmp    	%l1,0
	blt  	badfix1
	nop
	cmp    	%l1,%i0
	bge  	badfix1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	badind1
	nop
	cmp    	%l3,0
	blt  	badfix3
	nop
	cmp    	%l3,%i0
	bge  	badfix3
	nop
	ld	[%l2+0],%o0
	ld	[%o0+4],%l4
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bge	badind1
	nop
	ld	[%l2+0],%o1
	inc	8,%o1
	add  	%l1,%o1,%o1
	stb  	%l3,[%o1+0]
	mov   	%l3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	typestrg
!
	.seg	"data1"   
	.align	4
.typestrg:	.word    0
	._typestrg = 5
	.seg	"text"
	.align	8
	.global	typestrg
typestrg:
	set	706*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	typesg
	nop
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	typess
	nop
	set	1,%l1
	ba,a	errwna
	.align	4
typesg:
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%i1
	blt  	typeser3
	nop
	cmp    	%l1,%i2
	bge  	typeser3
	nop
typesg2:
	ld	[%l1+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
typess:
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp	%l1,%i2
	blt  	str57
	nop
	cmp	%l1,%i3
	blt  	types2
	nop
str57:
	cmp    	%l1,%i3
	blt	typeser2
	nop
types2:
	cmp    	%l1,%i2
	beq	typeser2
	nop
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%l3,%i1
	blt  	typeser1
	nop
	cmp    	%l3,%i2
	bge  	typeser1
	nop
	st   	%l1,[%l3+4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
typeser1:
	mov   	%l3,%l1
typeser3:
	ba,a	errnsa
	.align	4
typeser2:
	ba,a	errsym
	.align	4

!
!	FENTRY	exchstrg
!
	.seg	"data1"   
	.align	4
.exchstrg:	.word    0
	._exchstrg = 3
	.seg	"text"
	.align	8
	.global	exchstrg
exchstrg:
	set	707*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	cmp    	%l1,%i1
	blt  	badstr1
	nop
	cmp    	%l1,%i2
	bge  	badstr1
	nop
	cmp    	%l2,%i1
	blt  	badstr2
	nop
	cmp    	%l2,%i2
	bge  	badstr2
	nop
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	ld	[%l2+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+0],%o3
	set	ocheap,%o4
	st   	%o3,[%o4+0]
	ld	[%l2+0],%o3
	st   	%o3,[%l1+0]
	set	ocheap,%o3
	ld	[%o3+0],%o3
	st   	%o3,[%l2+0]
	ld	[%l1+0],%o1
	st   	%l1,[%o1+0]
	ld	[%l2+0],%o1
	st   	%l2,[%o1+0]
	ld	[%l7+0],%o0
	st   	%o0,[%l1+4]
	inc  	4,%l7
	ld	[%l7+0],%o0
	st   	%o0,[%l2+4]
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	ffindex
!
	.seg	"data1"   
	.align	4
.ffindex:	.word    0
	._ffindex = 5
	.seg	"text"
	.align	8
ffindex:
	set	721*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	mov   	%g0,%l3
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	ffindg3
	nop
	mov   	%l4,%o1
	cmp    	%o1,3
	bne	badnbar3
	nop
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%l3,0
	blt  	badfix3
	nop
	cmp    	%l3,%i0
	bge  	badfix3
	nop
	sll	%l3,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	badind3
	nop
ffindg3:
	ld	[%l7+0],%l2
	inc  	4,%l7
	dec  	4,%l7
	call	stringa2
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l2+0],%o0
	ld	[%o0+4],%l4
	ld	[%l1+0],%o0
	ld	[%o0+4],%o1
	set	savea1,%o4
	st   	%o1,[%o4+0]
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	set	savea1,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	sub	%l4,%o1,%l4
	and 	%l4,%l0,%l4
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	sll	%l3,16,%o1
	sra	%o1,16,%o1
	sub	%l4,%o1,%l4
	and 	%l4,%l0,%l4
	inc	1,%l4
	ba,a	ffindex4
	.align	4
ffindex3:
	ld	[%l2+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	ld	[%l1+0],%o2
	add	%o2,8+0,%o2
	set	savea1,%o0
	ld	[%o0+0],%o0
	.align	4
	ba,a   	sstr58
rstr58:
	ldub	[%o2+0],%o4
	cmp   	%o3,%o4
	bne  	nstr58
	nop
	inc  	%o1
	inc  	%o2
sstr58:	deccc  	%o0
	bge,a  	rstr58
	ldub	[%o1+0],%o3
	nop
	ba,a   	ffindex6
	.align	4
nstr58:
	inc	1,%l3
ffindex4:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	ffindex3
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ffindex6:
	mov   	%l3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	alphales
!
	.seg	"data1"   
	.align	4
.alphales:	.word    0
	._alphales = 3
	.seg	"text"
	.align	8
	.global	alphales
alphales:
	set	727*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	stringa2
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l1+0],%o0
	ld	[%o0+4],%l3
	ld	[%l2+0],%o0
	ld	[%o0+4],%l4
	dec  	4,%l7
	call	mina3a4
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g0,%l3
	ba,a	alpha2
	.align	4
alpha1:
	ld	[%l1+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	ldub	[%o1+0],%o0
	set	savea1,%o4
	st   	%o0,[%o4+0]
	ld	[%l2+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	ldub	[%o1+0],%o0
	set	savea2,%o4
	st   	%o0,[%o4+0]
	set	savea1,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	set	savea2,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	blt	strue
	nop
	set	savea1,%o0
	ld	[%o0+0],%o0
	set	savea2,%o1
	ld	[%o1+0],%o1
	cmp   	%o0,%o1
	bne	strfalse
	nop
	inc	1,%l3
alpha2:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	alpha1
	nop
	ld	[%l1+0],%o0
	ld	[%o0+4],%l4
	cmp   	%l4,%l3
	bne	strfalse
	nop
strue:
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	ffsymbol
!
	.seg	"data1"   
	.align	4
.ffsymbol:	.word    0
	._ffsymbol = 3
	.seg	"text"
	.align	8
ffsymbol:
	cmp    	%l2,%i2
	blt  	ffsymb1
	nop
	cmp    	%l2,%i3
	bge  	ffsymb1
	nop
	ba,a	trysympk
	.align	4
ffsymb1:
	set	723*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa2
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	blt  	ffsymbr2
	nop
	cmp    	%l1,%i3
	bge  	ffsymbr2
	nop
	ba,a	trysymp
	.align	4
ffsymbr2:
	set	723*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4

!
!	FENTRY	concat
!
	.seg	"data1"   
	.align	4
.concat:	.word    0
	._concat = 5
	.seg	"text"
	.align	8
	.global	concat
concat:
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%o1
	set	savea2,%o4
	st   	%o1,[%o4+0]
	mov   	%l4,%o1
	sll  	%o1,2,%o1
	add    	%o1,%l7,%o1
	set	concat9,%o0
	dec	8,%o0
	st   	%o0,[%o1+0]
	set	725*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	ba,a	caten0
	.align	4
concat9:
	mov   	%l1,%l2
	mov   	%i2,%l1
	dec  	4,%l7
	set	savea2,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	ba,a	trysymp
	.align	4

!
!	FENTRY	hash
!
	.seg	"data1"   
	.align	4
.hash:	.word    0
	._hash = 2
	.seg	"text"
	.align	8
	.global	hash
hash:
	set	722*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	ba,a	hashint
	.align	4

!
!	FENTRY	fpnam
!
	.seg	"data1"   
	.align	4
.fpnam:	.word    0
	._fpnam = 2
	.seg	"text"
	.align	8
	.global	fpnam
fpnam:
	set	724*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l1+0],%o0
	ld	[%o0+4],%l2
	mov   	%l1,%l3
	mov   	%i2,%l1
	ba,a	fpnam2
	.align	4
fpnam1:
	ld	[%l3+0],%o1
	inc	8,%o1
	add  	%l2,%o1,%o1
	ldub	[%o1+0],%l4
	cmp    	%i2,%g4
	bne    	str59
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
str59:
	st   	%l4,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
fpnam2:
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	deccc  	1,%l2
	and 	%l2,%l0,%l2
	bge  	fpnam1
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	gensym
!
	.seg	"data1"   
	.align	4
.gensym:	.word    0
	._gensym = 1
	.seg	"text"
	.align	8
	.global	gensym
gensym:
	set	739*32,%l1
	add    	%i2,%l1,%l1
	dec  	4,%l7
	ld	[%l1+0],%o0
	st   	%o0,[%l7+0]
	set	740*32,%l2
	add    	%i2,%l2,%l2
	ld	[%l2+0],%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	inc	1,%l1
	mov   	%l1,%o2
	and 	%l1,%l0,%l1
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	gennerr
	nop
gennerr:
	st   	%l1,[%l2+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	2,%l4
	ba,a	concat
	.align	4
rdpscrn:
	set	185*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	ba,a	bltscrn0
	.align	4
rdpscrn1:
	set	savea1,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	set	savea2,%o2
	ld	[%o2+0],%o2
	ld	[%o2+0],%o2
	inc	8,%o2
	add  	%l3,%o2,%o2
	set	dlx,%o0
	ld	[%o0+0],%o0
	.align	4
	ba,a   	sstr60
rstr60:
	ldub	[%o2+0],%o4
	cmp   	%o3,%o4
	bne  	nstr60
	nop
	inc  	%o1
	inc  	%o2
sstr60:	deccc  	%o0
	bge,a  	rstr60
	ldub	[%o1+0],%o3
	nop
	ba,a   	rdpscrn5
	.align	4
nstr60:
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	set	dlx,%l4
	ld	[%l4+0],%l4
	set	oldid,%o4
	st   	%l3,[%o4+0]
	set	oldid,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	add	%o0,%o1,%o0
	set	oldid+2,%o4
	sth	%o0,[%o4]
	set	xr,%o3
	ld	[%o3+0],%o3
	set	oldx,%o4
	st   	%o3,[%o4+0]
	set	oldx,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	add	%o0,%o1,%o0
	set	oldx+2,%o4
	sth	%o0,[%o4]
rdpscrn3:
	set	savea1,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	ldub	[%o1+0],%l1
	set	savea2,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	ldub	[%o1+0],%l2
	set	savea2,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	stb  	%l1,[%o1+0]
	cmp   	%l1,%l2
	bne	scrnaff
	nop
rdpscrn4:
	inc	1,%l3
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	rdpscrn3
	nop
	mov  	0,%l4
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
rdpscrn5:
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	set	wd,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	add	%l3,%o1,%l3
	and 	%l3,%l0,%l3
	set	yr,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	yr+2,%o4
	sth	%o0,[%o4]
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	rdpscrn1
	nop
	mov  	0,%l4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
scrnaff:
	dec  	4,%l7
	set	savea1,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	savea2,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,32
	bge	scrnaff0
	nop
	set	46,%l1
scrnaff0:
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	set	oldid,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	sub	%l3,%o1,%l3
	and 	%l3,%l0,%l3
	set	oldid,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll	%l3,16,%o1
	sra	%o1,16,%o1
	add	%o0,%o1,%o0
	set	oldid+2,%o4
	sth	%o0,[%o4]
	set	oldx,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll	%l3,16,%o1
	sra	%o1,16,%o1
	add	%o0,%o1,%o0
	set	oldx+2,%o4
	sth	%o0,[%o4]
	mov   	%l3,%l4
	dec  	4,%l7
	set	scrnaff3,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	mov   	%l3,%o1
	cmp    	%o1,1
	bne	scrnaff4
	nop
scrnaff1:
	dec  	4,%l7
	st   	%l1,[%l7+0]
scrnaff2:
	ba,a	tyo
	.align	4
scrnaff3:
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	savea2,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	savea1,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ba,a	rdpscrn4
	.align	4
scrnaff4:
	ld	[%l7+4],%l2
	dec	1,%l2
	mov   	%l3,%o1
	cmp    	%o1,3
	bne	scrnaff7
	nop
	dec	1,%l2
	set	savea1,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l2,%o1,%o1
	ldub	[%o1+0],%l3
	dec  	4,%l7
	st   	%l3,[%l7+0]
	inc	1,%l2
scrnaff6:
	set	savea1,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l2,%o1,%o1
	ldub	[%o1+0],%l3
	dec  	4,%l7
	st   	%l3,[%l7+0]
	ba,a	scrnaff1
	.align	4
scrnaff7:
	mov   	%l3,%o1
	cmp    	%o1,2
	beq	scrnaff6
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	oldx,%l1
	ld	[%l1+0],%l1
	set	yr,%l2
	ld	[%l2+0],%l2
	dec  	4,%l7
	call	tycursor
	st   	%o7,[%l7+0]
	.align	4
	set	1,%l4
	ba,a	scrnaff2
	.align	4
	.seg	"data1"
	.align	4
wd:
	.word 	0
ws:
	.word 	0
dlx:
	.word 	0
dly:
	.word 	0
oldid:
	.word 	0
oldx:
	.word 	0
llid:
	.word 	0
llis:
	.word 	0
xr:
	.word 	0
yr:
	.word 	0
ys:
	.word 	0
	.seg	"text"
	.seg	"text"
clipscrn:
	cmp    	%l1,0
	blt  	badfix1
	nop
	cmp    	%l1,%i0
	bge  	badfix1
	nop
	mov   	%g0,%l4
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	clipscr3
	nop
	mov   	%l1,%l3
clipscr1:
	cmp    	%l2,0
	blt  	badfix2
	nop
	cmp    	%l2,%i0
	bge  	badfix2
	nop
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	clipscr4
	nop
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	add	%l4,%o1,%l4
	and 	%l4,%l0,%l4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
clipscr3:
	mov   	%g0,%l3
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	sll	%l1,16,%o1
	sra	%o1,16,%o1
	sub	%l4,%o1,%l4
	and 	%l4,%l0,%l4
	ba,a	clipscr1
	.align	4
clipscr4:
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	sub	%l3,%o1,%l3
	and 	%l3,%l0,%l3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mina1dlx:
	set	dlx,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll	%l1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bgt	minx1
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
minx1:
	set	dlx,%o4
	st   	%l1,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mina1dly:
	set	dly,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll	%l1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bgt	miny1
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
miny1:
	set	dly,%o4
	st   	%l1,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	bltscrn
!
	.seg	"data1"   
	.align	4
.bltscrn:	.word    0
	._bltscrn = 5
	.seg	"text"
	.align	8
	.global	bltscrn
bltscrn:
	set	728*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
bltscrn0:
	ld	[%l7+0],%l1
	inc  	4,%l7
	mov   	%l4,%o1
	cmp    	%o1,12
	beq	bltscrna
	nop
	mov   	%l4,%o1
	cmp    	%o1,4
	bne	badnbar4
	nop
	cmp    	%l1,0
	blt  	badfix1
	nop
	cmp    	%l1,%i0
	bge  	badfix1
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l2,0
	blt  	badfix2
	nop
	cmp    	%l2,%i0
	bge  	badfix2
	nop
	set	dlx,%o4
	st   	%l2,[%o4+0]
	set	dly,%o4
	st   	%l1,[%o4+0]
	set	ws,%o4
	st   	%l2,[%o4+0]
	set	wd,%o4
	st   	%l2,[%o4+0]
	set	llid,%o4
	st   	%g0,[%o4+0]
	set	xr,%o4
	st   	%g0,[%o4+0]
	set	yr,%o4
	st   	%g0,[%o4+0]
	set	llis,%o4
	st   	%g0,[%o4+0]
	mov   	%g0,%l3
	mov   	%g0,%l4
	ba,a	bltscrnb
	.align	4
bltscrna:
	cmp    	%l1,0
	blt  	badfix1
	nop
	cmp    	%l1,%i0
	bge  	badfix1
	nop
	set	dly,%o4
	st   	%l1,[%o4+0]
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,0
	blt  	badfix1
	nop
	cmp    	%l1,%i0
	bge  	badfix1
	nop
	set	dlx,%o4
	st   	%l1,[%o4+0]
	ld	[%l7+0],%o0
	set	ys,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	yr,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	dec  	4,%l7
	call	clipscrn
	st   	%o7,[%l7+0]
	.align	4
	set	xr,%o4
	st   	%l3,[%o4+0]
	set	llid,%o4
	st   	%l3,[%o4+0]
	set	llis,%o4
	st   	%l4,[%o4+0]
	set	ys,%l2
	ld	[%l2+0],%l2
	set	yr,%l1
	ld	[%l1+0],%l1
	dec  	4,%l7
	call	clipscrn
	st   	%o7,[%l7+0]
	.align	4
	set	yr,%o4
	st   	%l3,[%o4+0]
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,0
	blt  	badfix1
	nop
	cmp    	%l1,%i0
	bge  	badfix1
	nop
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	sub	%l1,%o1,%l1
	and 	%l1,%l0,%l1
	dec  	4,%l7
	call	mina1dly
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,0
	blt  	badfix1
	nop
	cmp    	%l1,%i0
	bge  	badfix1
	nop
	set	ws,%o4
	st   	%l1,[%o4+0]
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	set	llis,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	sub	%l1,%o1,%l1
	and 	%l1,%l0,%l1
	dec  	4,%l7
	call	mina1dlx
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,0
	blt  	badfix1
	nop
	cmp    	%l1,%i0
	bge  	badfix1
	nop
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sll	%l3,16,%o1
	sra	%o1,16,%o1
	sub	%l1,%o1,%l1
	and 	%l1,%l0,%l1
	dec  	4,%l7
	call	mina1dly
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,0
	blt  	badfix1
	nop
	cmp    	%l1,%i0
	bge  	badfix1
	nop
	set	wd,%o4
	st   	%l1,[%o4+0]
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	set	llid,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	sub	%l1,%o1,%l1
	and 	%l1,%l0,%l1
	dec  	4,%l7
	call	mina1dlx
	st   	%o7,[%l7+0]
	.align	4
bltscrnb:
	ld	[%l7+0],%o0
	set	savea2,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	set	savea2,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i1
	blt  	bltscrn8
	nop
	cmp    	%o0,%i2
	bge  	bltscrn8
	nop
	ld	[%l7+0],%o0
	set	savea1,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	set	savea1,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i1
	blt  	bltscrn9
	nop
	cmp    	%o0,%i2
	bge  	bltscrn9
	nop
	set	dlx,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	ble	bltscrn7
	nop
	set	dly,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	ble	bltscrn7
	nop
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	set	ws,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
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
	and	%o0,%l0,%l4
	set	llis,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	add	%o0,%o1,%o0
	set	llis+2,%o4
	sth	%o0,[%o4]
	set	dly,%l4
	ld	[%l4+0],%l4
	sll	%l3,16,%o1
	sra	%o1,16,%o1
	set	wd,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
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
	and	%o0,%l0,%l3
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	set	llid,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	add	%l3,%o1,%l3
	and 	%l3,%l0,%l3
	set	185*32,%o0
	add    	%i2,%o0,%o0
	set	savea4,%o1
	ld	[%o1+0],%o1
	cmp	%o0,%o1
	beq	rdpscrn1
	nop
	set	dlx,%l1
	ld	[%l1+0],%l1
	set	llis,%l2
	ld	[%l2+0],%l2
bltscrn6:
	set	savea2,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l2,%o1,%o1
	set	savea1,%o2
	ld	[%o2+0],%o2
	ld	[%o2+0],%o2
	inc	8,%o2
	add  	%l3,%o2,%o2
	mov   	%l1,%o0
	cmp    	%o2,%o1
	blt     gstr61
	nop
	add    	%o1,%o0,%o1
	ba    fstr61
	add    	%o2,%o0,%o2
	.align	4
qstr61:	ldub   	[%o1+0],%o3
	stb  	%o3,[%o2+0]
fstr61:	dec  	%o1
	deccc  	%o0
	bge      qstr61
	dec  	%o2
	ba,a    estr61
rstr61:
	stb  	%o3,[%o2+0]
	inc  	%o2
	inc  	%o1
gstr61:	deccc  	%o0
	bge,a    rstr61
	ldub   	[%o1+0],%o3
estr61:
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	set	wd,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	add	%l3,%o1,%l3
	and 	%l3,%l0,%l3
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	set	ws,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	add	%l2,%o1,%l2
	and 	%l2,%l0,%l2
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	bltscrn6
	nop
	mov  	0,%l4
bltscrn7:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
bltscrn8:
	set	savea2,%l1
	ld	[%l1+0],%l1
	ba,a	badstr1
	.align	4
bltscrn9:
	set	savea1,%l1
	ld	[%l1+0],%l1
	ba,a	badstr1
	.align	4

!
!	FENTRY	typevect
!
	.seg	"data1"   
	.align	4
.typevect:	.word    0
	._typevect = 5
	.seg	"text"
	.align	8
	.global	typevect
typevect:
	set	729*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	typevg
	nop
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	typevs
	nop
	set	1,%l1
	ba,a	errwna
	.align	4
typevg:
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%i0
	blt  	typever3
	nop
	cmp    	%l1,%i1
	bge  	typever3
	nop
	ld	[%l1+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
typevs:
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp	%l1,%i2
	blt  	str62
	nop
	cmp	%l1,%i3
	blt  	typevs2
	nop
str62:
	cmp    	%l1,%i3
	blt	typever2
	nop
typevs2:
	cmp    	%l1,%i2
	beq	typever2
	nop
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%l3,%i0
	blt  	typever1
	nop
	cmp    	%l3,%i1
	bge  	typever1
	nop
	st   	%l1,[%l3+4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
typever1:
	mov   	%l3,%l1
typever3:
	ba,a	errvec
	.align	4
typever2:
	ba,a	errsym
	.align	4

!
!	FENTRY	makevect
!
	.seg	"data1"   
	.align	4
.makevect:	.word    0
	._makevect = 3
	.seg	"text"
	.align	8
makevect:
	set	731*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	cmp    	%l1,0
	blt  	badfix1
	nop
	cmp    	%l1,%i0
	bge  	badfix1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	badind1
	nop
	mov   	%l1,%l3
makvect0:
	set	fvect,%l1
	ld	[%l1+0],%l1
	cmp    	%l1,%i2
	beq	makvect3
	nop
	set	cheap,%o3
	ld	[%o3+0],%o3
	set	ocheap,%o4
	st   	%o3,[%o4+0]
	mov   	%l3,%o0
	sll  	%o0,2,%o0
	set	cheap,%o1
	ld	[%o1+0],%o1
	add    	%o1,%o0,%o1
	inc  	8,%o1
	set	cheap,%o4
	st   	%o1,[%o4+0]
	set	eheap,%o0
	ld	[%o0+0],%o0
	set	cheap,%o1
	ld	[%o1+0],%o1
	cmp	%o0,%o1
	blt	makvect4
	nop
makvect2:
	ld	[%l1+0],%o3
	set	fvect,%o4
	st   	%o3,[%o4+0]
	set	ocheap,%o3
	ld	[%o3+0],%o3
	st   	%o3,[%l1+0]
	set	ocheap,%o1
	ld	[%o1+0],%o1
	st   	%l3,[%o1+4]
	set	ocheap,%o1
	ld	[%o1+0],%o1
	st   	%l1,[%o1+0]
	ba,a	vectfil4
	.align	4
vectfil1:
	ld	[%l1+0],%o1
	inc  	8,%o1
	mov   	%l3,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	st   	%l2,[%o1+0]
vectfil4:
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	deccc  	1,%l3
	and 	%l3,%l0,%l3
	bge  	vectfil1
	nop
	set	737*32,%o3
	add    	%i2,%o3,%o3
	st   	%o3,[%l1+4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
makvect3:
	dec  	4,%l7
	call	gcvect
	st   	%o7,[%l7+0]
	.align	4
	ba,a	makvect0
	.align	4
makvect4:
	mov   	%i2,%l1
	set	ocheap,%o3
	ld	[%o3+0],%o3
	set	cheap,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	hgc
	st   	%o7,[%l7+0]
	.align	4
	set	fvect,%l1
	ld	[%l1+0],%l1
	set	cheap,%o3
	ld	[%o3+0],%o3
	set	ocheap,%o4
	st   	%o3,[%o4+0]
	mov   	%l3,%o0
	sll  	%o0,2,%o0
	set	cheap,%o1
	ld	[%o1+0],%o1
	add    	%o1,%o0,%o1
	inc  	8,%o1
	set	cheap,%o4
	st   	%o1,[%o4+0]
	set	cheap,%o0
	ld	[%o0+0],%o0
	set	eheap,%o1
	ld	[%o1+0],%o1
	cmp	%o0,%o1
	blt	makvect2
	nop
	mov   	%i2,%l1
	set	ocheap,%o3
	ld	[%o3+0],%o3
	set	cheap,%o4
	st   	%o3,[%o4+0]
	ba,a	errfh
	.align	4

!
!	FENTRY	vlength
!
	.seg	"data1"   
	.align	4
.vlength:	.word    0
	._vlength = 2
	.seg	"text"
	.align	8
	.global	vlength
vlength:
	set	732*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	cmp    	%l1,%i0
	blt  	badvec1
	nop
	cmp    	%l1,%i1
	bge  	badvec1
	nop
	ld	[%l1+0],%o0
	ld	[%o0+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	eqvector
!
	.seg	"data1"   
	.align	4
.eqvector:	.word    0
	._eqvector = 3
	.seg	"text"
	.align	8
	.global	eqvector
eqvector:
	set	733*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	cmp    	%l1,%i0
	blt  	badvec1
	nop
	cmp    	%l1,%i1
	bge  	badvec1
	nop
	cmp    	%l2,%i0
	blt  	badvec2
	nop
	cmp    	%l2,%i1
	bge  	badvec2
	nop
eqvectri:
	ld	[%l1+0],%o0
	ld	[%o0+4],%l3
	ld	[%l2+0],%o0
	ld	[%o0+4],%l4
	cmp   	%l3,%l4
	bne	strfalse
	nop
	ld	[%l1+4],%l4
	cmp    	%l4,%i2
	blt  	eqvect6
	nop
	cmp    	%l4,%i3
	bge  	eqvect6
	nop
	ld	[%l2+4],%o1
	cmp	%l4,%o1
	bne	strfalse
	nop
	ba,a	eqvect5
	.align	4
eqvect4:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	ld	[%l1+0],%o1
	inc  	8,%o1
	mov   	%l3,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l1
	ld	[%l2+0],%o1
	inc  	8,%o1
	mov   	%l3,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l2
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	call	equal
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l4
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l4,%i2
	beq	strfalse
	nop
eqvect5:
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	deccc  	1,%l3
	and 	%l3,%l0,%l3
	bge  	eqvect4
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
eqvect6:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	mov   	%l4,%l1
	ld	[%l2+4],%l2
	dec  	4,%l7
	call	equal
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l4
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l4,%i2
	bne	eqvect5
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	vref
!
	.seg	"data1"   
	.align	4
.vref:	.word    0
	._vref = 3
	.seg	"text"
	.align	8
	.global	vref
vref:
	set	734*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	cmp    	%l2,0
	blt  	badfix2
	nop
	cmp    	%l2,%i0
	bge  	badfix2
	nop
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	badind2
	nop
	cmp    	%l1,%i0
	blt  	badvec1
	nop
	cmp    	%l1,%i1
	bge  	badvec1
	nop
	ld	[%l1+0],%o0
	ld	[%o0+4],%l3
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	sll	%l3,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bge	badind2
	nop
	ld	[%l1+0],%o1
	inc  	8,%o1
	mov   	%l2,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	vset
!
	.seg	"data1"   
	.align	4
.vset:	.word    0
	._vset = 4
	.seg	"text"
	.align	8
	.global	vset
vset:
	set	735*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	cmp    	%l2,0
	blt  	badfix2
	nop
	cmp    	%l2,%i0
	bge  	badfix2
	nop
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	badind2
	nop
	cmp    	%l1,%i0
	blt  	badvec1
	nop
	cmp    	%l1,%i1
	bge  	badvec1
	nop
	ld	[%l1+0],%o0
	ld	[%o0+4],%l4
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bge	badind2
	nop
	ld	[%l1+0],%o1
	inc  	8,%o1
	mov   	%l2,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	st   	%l3,[%o1+0]
	mov   	%l3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	bltvect
!
	.seg	"data1"   
	.align	4
.bltvect:	.word    0
	._bltvect = 5
	.seg	"text"
	.align	8
	.global	bltvect
bltvect:
	set	736*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	mov   	%l4,%o1
	cmp    	%o1,5
	beq	bltvect0
	nop
	set	32767,%l3
	mov   	%l4,%o1
	cmp    	%o1,4
	beq	bltvect1
	nop
	mov   	%g0,%l2
	mov   	%l4,%o1
	cmp    	%o1,3
	bne	badnbar3
	nop
	ba,a	bltvect2
	.align	4
bltvect0:
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%l3,0
	blt  	badfix3
	nop
	cmp    	%l3,%i0
	bge  	badfix3
	nop
bltvect1:
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l2,0
	blt  	badfix2
	nop
	cmp    	%l2,%i0
	bge  	badfix2
	nop
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	badind2
	nop
bltvect2:
	set	savea2,%o4
	st   	%l2,[%o4+0]
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l2,%i0
	blt  	badvec2
	nop
	cmp    	%l2,%i1
	bge  	badvec2
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,0
	blt  	badfix1
	nop
	cmp    	%l1,%i0
	bge  	badfix1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	badind1
	nop
	set	savea1,%o4
	st   	%l1,[%o4+0]
	ld	[%l7+0],%l1
	cmp    	%l1,%i0
	blt  	badvec1
	nop
	cmp    	%l1,%i1
	bge  	badvec1
	nop
	ld	[%l1+0],%o0
	ld	[%o0+4],%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	set	savea1,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	sub	%l1,%o1,%l1
	and 	%l1,%l0,%l1
	dec  	4,%l7
	call	mina1a3
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l2+0],%o0
	ld	[%o0+4],%l4
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	set	savea2,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	sub	%l4,%o1,%l4
	and 	%l4,%l0,%l4
	dec  	4,%l7
	call	mina4a3
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	sll	%l3,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	ble	bltvect6
	nop
	ld	[%l2+0],%o1
	inc  	8,%o1
	set	savea2,%o0
	ld	[%o0+0],%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%l1+0],%o2
	inc  	8,%o2
	set	savea1,%o0
	ld	[%o0+0],%o0
	sll	%o0,2,%o0
	add  	%o2,%o0,%o2
	mov   	%l3,%o0
	cmp    	%o2,%o1
	blt     gstr63
	nop
	mov   	%o0,%o3
	sll  	%o3,2,%o3
	add    	%o1,%o3,%o1
	ba         fstr63
	add    	%o2,%o3,%o2
	.align	4
qstr63:
	ld	[%o1+0],%o3
	st   	%o3,[%o2+0]
fstr63:	dec  	4,%o1
	deccc  	%o0
	bge,a   qstr63
	dec  	4,%o2
	ba,a       estr63
rstr63:
	st   	%o3,[%o2+0]
	inc  	4,%o2
	inc  	4,%o1
gstr63:	deccc  	%o0
	bge,a     rstr63
	ld	[%o1+0],%o3
estr63:
bltvect6:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	vector
!
	.seg	"data1"   
	.align	4
.vector:	.word    0
	._vector = 5
	.seg	"text"
	.align	8
	.global	vector
vector:
	mov   	%l4,%l1
	dec  	4,%l7
	st   	%l1,[%l7+0]
	mov   	%i2,%l2
	dec  	4,%l7
	call	makevect
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	ba,a	vector2
	.align	4
vector1:
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l1+0],%o1
	inc  	8,%o1
	mov   	%l4,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	st   	%l2,[%o1+0]
vector2:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	vector1
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	exchvect
!
	.seg	"data1"   
	.align	4
.exchvect:	.word    0
	._exchvect = 3
	.seg	"text"
	.align	8
	.global	exchvect
exchvect:
	set	730*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	cmp    	%l1,%i0
	blt  	badvec1
	nop
	cmp    	%l1,%i1
	bge  	badvec1
	nop
	cmp    	%l2,%i0
	blt  	badvec2
	nop
	cmp    	%l2,%i1
	bge  	badvec2
	nop
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	ld	[%l2+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+0],%o3
	set	ocheap,%o4
	st   	%o3,[%o4+0]
	ld	[%l2+0],%o3
	st   	%o3,[%l1+0]
	set	ocheap,%o3
	ld	[%o3+0],%o3
	st   	%o3,[%l2+0]
	ld	[%l1+0],%o1
	st   	%l1,[%o1+0]
	ld	[%l2+0],%o1
	st   	%l2,[%o1+0]
	ld	[%l7+0],%o0
	st   	%o0,[%l1+4]
	inc  	4,%l7
	ld	[%l7+0],%o0
	st   	%o0,[%l2+4]
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	fillvect
!
	.seg	"data1"   
	.align	4
.fillvect:	.word    0
	._fillvect = 5
	.seg	"text"
	.align	8
	.global	fillvect
fillvect:
	set	738*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	set	32767,%l1
	mov   	%l4,%o1
	cmp    	%o1,3
	beq	fillvec0
	nop
	mov   	%l4,%o1
	cmp    	%o1,4
	bne	badnbar4
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,0
	blt  	badfix1
	nop
	cmp    	%l1,%i0
	bge  	badfix1
	nop
fillvec0:
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l2,0
	blt  	badfix2
	nop
	cmp    	%l2,%i0
	bge  	badfix2
	nop
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	badind2
	nop
	mov   	%l1,%l4
	ld	[%l7+0],%l1
	cmp    	%l1,%i0
	blt  	badvec1
	nop
	cmp    	%l1,%i1
	bge  	badvec1
	nop
	ld	[%l1+0],%o0
	ld	[%o0+4],%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	sub	%l1,%o1,%l1
	mov   	%l1,%o2
	and 	%l1,%l0,%l1
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	fillvec6
	nop
fillvec6:
	dec  	4,%l7
	call	mina1a4
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	fillvec8
	.align	4
fillvec7:
	ld	[%l1+0],%o1
	inc  	8,%o1
	mov   	%l2,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	st   	%l3,[%o1+0]
	inc	1,%l2
fillvec8:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	fillvec7
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
! end
