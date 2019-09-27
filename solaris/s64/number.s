!
!	File number.s expansion for sparc arch=v8plus.
!	This file is part of Le-Lisp kernel.
!	Generated on Sat Oct   7 17 21:25:40 
!
	.file	"number.s"
	.align	8 
	.global	bvar
	.global	mstack
	.global	reenter
	.global	theend
	.global	errfs
	.global	errgen
	.global	errnna
	.global	errnia
	.global	errnfa
	.global	errnsa
	.global	errnla
	.global	errnva
	.global	errwna
	.global	errstl
	.global	err0dv
	.global	gettype
	.global	gccons
	.global	gcfloat
	.global	gcnumb
	.global	inisymb
	.global	inicst
	.global	evalcar
	.global	evala1
	.global	apply
	.global	ffuncall
	.global	getfns
	.global	nreverse
	.global	ffsymbol
	.global	ini_nbs
	.global	gaeqn
	.global	gaplus2i
	.global	gadiff2i
	.global	gatim2i
	.global	gadinv
	.global	gadiv
	.global	llfix
	.global	llfloat
	.global	lltrunc
	.global	llsin
	.global	llcos
	.global	llasin
	.global	llacos
	.global	llatan
	.global	llexp
	.global	lllog
	.global	llpower
	.global	llsqrt
	.global	gacomp
	.global	gaeqen
	.global	galt
	.global	gagt
	.global	gaadd1
	.global	gasub1
	.global	gaquomod
	.global	gaabs
	.global	gadrev
	.global	intgerp
	.global	numberp
	.global	gamod
	.global	bangen1
	.global	fzero
	.global	fltun
	.global	fltmun
	.global	fltimax
	.global	fltimin
	.seg	"data1"
	.align	4
moinsun:
	.word 	0
fzero:
	.word 	0
fltun:
	.word 	0
fltmun:
	.word 	0
fltimax:
	.word 	0
fltimin:
	.word 	0
cpfnt:
	.word 	0
	.seg	"text"
ini_nbs:
	.seg	"data1"   
	.align	4
pnum1:
	.asciz	"genarith"
	.seg	"text"
bnum1:
	set 	8,%l1
	set	pnum1,%l2
	set	580*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	st   	%i2,[%l1+0]
	add    	%i2,4*32,%o3
	st   	%o3,[%l1+12]
	.seg	"data1"   
	.align	4
pnum2:
	.asciz	"numberp"
	.seg	"text"
bnum2:
	set	7,%l1
	set	pnum2,%l2
	set	numberp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._numberp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum3:
	.asciz	"integerp"
	.seg	"text"
bnum3:
	set	8,%l1
	set	pnum3,%l2
	set	intgerp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._intgerp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum4:
	.asciz	"rationalp"
	.seg	"text"
bnum4:
	set	9,%l1
	set	pnum4,%l2
	set	rationalp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._rationalp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum5:
	.asciz	"float"
	.seg	"text"
bnum5:
	set	5,%l1
	set	pnum5,%l2
	set	llfloat,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llfloat,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum6:
	.asciz	"fix"
	.seg	"text"
bnum6:
	set	3,%l1
	set	pnum6,%l2
	set	llfix,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llfix,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum7:
	.asciz	"truncate"
	.seg	"text"
bnum7:
	set	8,%l1
	set	pnum7,%l2
	set	lltrunc,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lltrunc,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum8:
	.asciz	"1+"
	.seg	"text"
bnum8:
	set	2,%l1
	set	pnum8,%l2
	set	gaadd1,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gaadd1,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum9:
	.asciz	"1-"
	.seg	"text"
bnum9:
	set	2,%l1
	set	pnum9,%l2
	set	gasub1,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gasub1,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum10:
	.asciz	"abs"
	.seg	"text"
bnum10:
	set	3,%l1
	set	pnum10,%l2
	set	gaabs,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gaabs,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum11:
	.asciz	"+"
	.seg	"text"
bnum11:
	set	1,%l1
	set	pnum11,%l2
	set	gaplus,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gaplus,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum12:
	.asciz	"0-"
	.seg	"text"
bnum12:
	set	2,%l1
	set	pnum12,%l2
	set	gadinv,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gadinv,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum13:
	.asciz	"-"
	.seg	"text"
bnum13:
	set	1,%l1
	set	pnum13,%l2
	set	gadiff,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gadiff,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum14:
	.asciz	"*"
	.seg	"text"
bnum14:
	set	1,%l1
	set	pnum14,%l2
	set	gatimes,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gatimes,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum15:
	.byte 	49,47
	.seg	"text"
bnum15:
	set	2,%l1
	set	pnum15,%l2
	set	gadrev,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gadrev,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum16:
	.byte 	47,47
	.seg	"text"
bnum16:
	set	2,%l1
	set	pnum16,%l2
	set	gadiv,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gadiv,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum17:
	.byte 	47
	.seg	"text"
bnum17:
	set	1,%l1
	set	pnum17,%l2
	set	gadiv,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gadiv,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum18:
	.asciz	"quo"
	.seg	"text"
bnum18:
	set	3,%l1
	set	pnum18,%l2
	set	gaquomod,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gaquomod,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum19:
	.asciz	"quotient"
	.seg	"text"
bnum19:
	set	8,%l1
	set	pnum19,%l2
	set	gaquomod,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gaquomod,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum20:
	.asciz	"quomod"
	.seg	"text"
bnum20:
	set	6,%l1
	set	pnum20,%l2
	set	gaquomod,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gaquomod,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum21:
	.asciz	"ex"
	.seg	"text"
bnum21:
	set 	2,%l1
	set	pnum21,%l2
	set	600*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum22:
	.asciz	"mod"
	.seg	"text"
bnum22:
	set 	3,%l1
	set	pnum22,%l2
	set	601*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	st   	%g0,[%l1+0]
	set	600*32,%o3
	add    	%i2,%o3,%o3
	st   	%o3,[%l1+12]
	.seg	"data1"   
	.align	4
pnum23:
	.asciz	"modulo"
	.seg	"text"
bnum23:
	set	6,%l1
	set	pnum23,%l2
	set	gamod,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gamod,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum24:
	.asciz	"<?>"
	.seg	"text"
bnum24:
	set	3,%l1
	set	pnum24,%l2
	set	gacomp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gacomp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum25:
	.asciz	"="
	.seg	"text"
bnum25:
	set	1,%l1
	set	pnum25,%l2
	set	gaeqen,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gaeqen,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum26:
	.asciz	"<>"
	.seg	"text"
bnum26:
	set	2,%l1
	set	pnum26,%l2
	set	ganeqn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ganeqn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum27:
	.byte 	47,61
	.seg	"text"
bnum27:
	set	2,%l1
	set	pnum27,%l2
	set	ganeqn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ganeqn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum28:
	.asciz	">="
	.seg	"text"
bnum28:
	set	2,%l1
	set	pnum28,%l2
	set	gage,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gage,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum29:
	.asciz	">"
	.seg	"text"
bnum29:
	set	1,%l1
	set	pnum29,%l2
	set	gagt,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gagt,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum30:
	.asciz	"<="
	.seg	"text"
bnum30:
	set	2,%l1
	set	pnum30,%l2
	set	gale,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gale,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum31:
	.asciz	"<"
	.seg	"text"
bnum31:
	set	1,%l1
	set	pnum31,%l2
	set	galt,%l3
	dec	8,%l3
	set	trash,%l4
	set	._galt,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum32:
	.asciz	"zerop"
	.seg	"text"
bnum32:
	set	5,%l1
	set	pnum32,%l2
	set	zerop,%l3
	dec	8,%l3
	set	trash,%l4
	set	._zerop,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum33:
	.asciz	"plusp"
	.seg	"text"
bnum33:
	set	5,%l1
	set	pnum33,%l2
	set	plusp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._plusp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum34:
	.asciz	"minusp"
	.seg	"text"
bnum34:
	set	6,%l1
	set	pnum34,%l2
	set	minusp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._minusp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum35:
	.asciz	"min"
	.seg	"text"
bnum35:
	set	3,%l1
	set	pnum35,%l2
	set	min,%l3
	dec	8,%l3
	set	trash,%l4
	set	._min,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum36:
	.asciz	"max"
	.seg	"text"
bnum36:
	set	3,%l1
	set	pnum36,%l2
	set	max,%l3
	dec	8,%l3
	set	trash,%l4
	set	._max,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum37:
	.asciz	"sin"
	.seg	"text"
bnum37:
	set	3,%l1
	set	pnum37,%l2
	set	llsin,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llsin,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum38:
	.asciz	"cos"
	.seg	"text"
bnum38:
	set	3,%l1
	set	pnum38,%l2
	set	llcos,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llcos,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum39:
	.asciz	"asin"
	.seg	"text"
bnum39:
	set	4,%l1
	set	pnum39,%l2
	set	llasin,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llasin,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum40:
	.asciz	"acos"
	.seg	"text"
bnum40:
	set	4,%l1
	set	pnum40,%l2
	set	llacos,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llacos,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum41:
	.asciz	"atan"
	.seg	"text"
bnum41:
	set	4,%l1
	set	pnum41,%l2
	set	llatan,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llatan,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum42:
	.asciz	"exp"
	.seg	"text"
bnum42:
	set	3,%l1
	set	pnum42,%l2
	set	llexp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llexp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum43:
	.asciz	"log"
	.seg	"text"
bnum43:
	set	3,%l1
	set	pnum43,%l2
	set	lllog,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lllog,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum44:
	.asciz	"log10"
	.seg	"text"
bnum44:
	set	5,%l1
	set	pnum44,%l2
	set	lllog10,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lllog10,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum45:
	.asciz	"power"
	.seg	"text"
bnum45:
	set	5,%l1
	set	pnum45,%l2
	set	llpower,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llpower,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum46:
	.asciz	"sqrt"
	.seg	"text"
bnum46:
	set	4,%l1
	set	pnum46,%l2
	set	llsqrt,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llsqrt,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum47:
	.asciz	"most-positive-fixnum"
	.seg	"text"
bnum47:
	set	20,%l1
	set	pnum47,%l2
	set	llfixmax,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llfixmax,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum48:
	.asciz	"most-negative-fixnum"
	.seg	"text"
bnum48:
	set	20,%l1
	set	pnum48,%l2
	set	llfixmin,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llfixmin,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pnum49:
	.asciz	"minus-0-fixnum"
	.seg	"text"
bnum49:
	set	14,%l1
	set	pnum49,%l2
	set	llminus0,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llminus0,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	set	0xFFFF,%l1
	set	moinsun,%o4
	st   	%l1,[%o4+0]
	mov   	%g0,%l1
	.global	ffloat
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num50
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num50:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	set	fzero,%o4
	st   	%l1,[%o4+0]
	set	1,%l1
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num51
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num51:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	set	fltun,%o4
	st   	%l1,[%o4+0]
	set	0xFFFF,%l1
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num52
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num52:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	set	fltmun,%o4
	st   	%l1,[%o4+0]
	set	32767,%l1
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num53
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num53:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	set	fltimax,%o4
	st   	%l1,[%o4+0]
	set	0x8001,%l1
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num54
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num54:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	set	fltimin,%o4
	st   	%l1,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
bangen:
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	call	gettype
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	cmp    	%l1,%i2
	blt  	bangerr
	nop
	cmp    	%l1,%i3
	bge  	bangerr
	nop
	mov   	%l3,%l2
	mov   	%i2,%l3
	dec  	4,%l7
	call	getfns
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	bne	bangencal
	nop
	ld	[%l7+0],%l2
	set	580*32,%l1
	add    	%i2,%l1,%l1
	ld	[%l1+0],%l1
	cmp    	%l1,%i2
	beq	bangerr
	nop
	cmp    	%l1,%i2
	blt  	bangerr
	nop
	cmp    	%l1,%i3
	bge  	bangerr
	nop
	dec  	4,%l7
	call	ffsymbol
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+4],%l2
	mov   	%i2,%l3
	dec  	4,%l7
	call	getfns
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	bangerr
	nop
bangencal:
	inc  	4*3,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	ba,a	ffuncall
	.align	4
bangerr:
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
bangen1:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	1,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	bangen
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	errgen
	.align	4
bangen2:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	set	2,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	bangen
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	num55
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
num55:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	num56
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
num56:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ba,a	errgen
	.align	4

!
!	FENTRY	numberp
!
	.seg	"data1"   
	.align	4
.numberp:	.word    0
	._numberp = 2
	.seg	"text"
	.align	8
numberp:
	cmp    	%l1,%g3
	blt	nbpt
	nop
	cmp	%l1,%g3
	blt  	num57
	nop
	cmp	%l1,%i0
	blt  	nbpt
	nop
num57:
	set	581*32,%l2
	add    	%i2,%l2,%l2
nbpgen:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	gettype
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	blt  	nbpn
	nop
	cmp    	%l1,%i3
	bge  	nbpn
	nop
	mov   	%i2,%l3
	dec  	4,%l7
	call	getfns
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	nbpn
	nop
	set	1,%l4
	ba,a	ffuncall
	.align	4
nbpn:
	inc  	4*1,%l7
nbpnil:
	mov   	%i2,%l1
nbpt:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	intgerp
!
	.seg	"data1"   
	.align	4
.intgerp:	.word    0
	._intgerp = 2
	.seg	"text"
	.align	8
intgerp:
	cmp    	%l1,%g3
	blt	nbpt
	nop
	cmp	%l1,%g3
	blt  	num58
	nop
	cmp	%l1,%i0
	blt  	nbpnil
	nop
num58:
	set	582*32,%l2
	add    	%i2,%l2,%l2
	ba,a	nbpgen
	.align	4

!
!	FENTRY	rationalp
!
	.seg	"data1"   
	.align	4
.rationalp:	.word    0
	._rationalp = 2
	.seg	"text"
	.align	8
	.global	rationalp
rationalp:
	cmp    	%l1,%g3
	blt	nbpt
	nop
	cmp	%l1,%g3
	blt  	num59
	nop
	cmp	%l1,%i0
	blt  	nbpnil
	nop
num59:
	set	583*32,%l2
	add    	%i2,%l2,%l2
	ba,a	nbpgen
	.align	4

!
!	FENTRY	llfloat
!
	.seg	"data1"   
	.align	4
.llfloat:	.word    0
	._llfloat = 2
	.seg	"text"
	.align	8
llfloat:
	cmp    	%l1,%g3
	bge	llfloatf
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num60
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num60:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
llfloatr:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
llfloatf:
	cmp	%l1,%g3
	blt  	num61
	nop
	cmp	%l1,%i0
	blt  	llfloatr
	nop
num61:
	set	584*32,%l3
	add    	%i2,%l3,%l3
	ba,a	bangen1
	.align	4

!
!	FENTRY	lltrunc
!
	.seg	"data1"   
	.align	4
.lltrunc:	.word    0
	._lltrunc = 2
	.seg	"text"
	.align	8
lltrunc:
lltrunc1:
	set	586*32,%l3
	add    	%i2,%l3,%l3
	cmp    	%l1,%g3
	blt	lltrcret
	nop
	cmp    	%l1,%g3
	blt  	bangen1
	nop
	cmp    	%l1,%i0
	bge  	bangen1
	nop
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	set	fltimin,%o0
	ld	[%o0+0],%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbl    	bangen1
	nop
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	set	fltimax,%o0
	ld	[%o0+0],%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbg    	bangen1
	nop
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	fdtoi	%f0,%f0
	st   	%f0,[%l5+0]
	ld	[%l5+0],%o0
	and	%o0,%l0,%l1
lltrcret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llfix
!
	.seg	"data1"   
	.align	4
.llfix:	.word    0
	._llfix = 2
	.seg	"text"
	.align	8
llfix:
	ba,a	lltrunc1
	.align	4

!
!	FENTRY	gaadd1
!
	.seg	"data1"   
	.align	4
.gaadd1:	.word    0
	._gaadd1 = 2
	.seg	"text"
	.align	8
gaadd1:
	mov   	%l1,%l2
	cmp    	%l1,%g3
	bge	gaadd2
	nop
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	add	%l1,1,%l1
	mov   	%l1,%o2
	and 	%l1,%l0,%l1
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	gaadd3
	nop
	set	0x8000,%o1
	cmp   	%l1,%o1
	beq	gaadd3
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gaadd2:
	cmp    	%l1,%g3
	blt  	gaadd3
	nop
	cmp    	%l1,%i0
	bge  	gaadd3
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num62
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num62:
	set	fltun,%o0
	ld	[%o0+0],%o0
	ldd	[%o0+0],%f0
	mov   	%l1,%o0
	ldd	[%o0+0],%f2
	faddd	%f2,%f0,%f2
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f2,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gaadd3:
	mov   	%l2,%l1
	set	1,%l2
	set	590*32,%l3
	add    	%i2,%l3,%l3
	ba,a	bangen2
	.align	4

!
!	FENTRY	gasub1
!
	.seg	"data1"   
	.align	4
.gasub1:	.word    0
	._gasub1 = 2
	.seg	"text"
	.align	8
gasub1:
	mov   	%l1,%l2
	cmp    	%l1,%g3
	bge	gasub2
	nop
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sub	%l1,1,%l1
	mov   	%l1,%o2
	and 	%l1,%l0,%l1
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	gasub3
	nop
	set	0x8000,%o1
	cmp   	%l1,%o1
	beq	gasub3
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gasub2:
	cmp    	%l1,%g3
	blt  	gasub3
	nop
	cmp    	%l1,%i0
	bge  	gasub3
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num63
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num63:
	set	fltun,%o0
	ld	[%o0+0],%o0
	ldd	[%o0+0],%f0
	mov   	%l1,%o0
	ldd	[%o0+0],%f2
	fsubd	%f2,%f0,%f2
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f2,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gasub3:
	mov   	%l2,%l1
	set	1,%l2
	set	592*32,%l3
	add    	%i2,%l3,%l3
	ba,a	bangen2
	.align	4

!
!	FENTRY	gaabs
!
	.seg	"data1"   
	.align	4
.gaabs:	.word    0
	._gaabs = 2
	.seg	"text"
	.align	8
gaabs:
	mov   	%g0,%l2
	cmp    	%l1,%g3
	bge	gaabs2
	nop
	set	0x8000,%o1
	cmp   	%l1,%o1
	beq	gaabs3
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bge	gaabsret
	nop
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	sll	%l1,16,%o1
	sra	%o1,16,%o1
	sub	%l2,%o1,%l2
	mov   	%l2,%o2
	and 	%l2,%l0,%l2
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	gaabs3
	nop
	mov   	%l2,%l1
gaabsret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gaabs2:
	cmp    	%l1,%g3
	blt  	gaabs3
	nop
	cmp    	%l1,%i0
	bge  	gaabs3
	nop
	set	fzero,%l2
	ld	[%l2+0],%l2
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	mov   	%l2,%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbge    	gaabsret
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num64
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num64:
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	mov   	%l2,%o0
	ldd	[%o0+0],%f2
	fsubd	%f2,%f0,%f2
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f2,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l2
	mov   	%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gaabs3:
	set	589*32,%l3
	add    	%i2,%l3,%l3
	ba,a	bangen1
	.align	4

!
!	FENTRY	gaplus
!
	.seg	"data1"   
	.align	4
.gaplus:	.word    0
	._gaplus = 5
	.seg	"text"
	.align	8
	.global	gaplus
gaplus:
	mov   	%l4,%o1
	cmp    	%o1,2
	bne	gapplus
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
gaplus2i:
	mov   	%l1,%l3
	cmp    	%l1,%g3
	bge	gapplus0
	nop
	cmp    	%l2,%g3
	bge	gapplus1
	nop
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	add	%l1,%o1,%l1
	mov   	%l1,%o2
	and 	%l1,%l0,%l1
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	gapplus1
	nop
	set	0x8000,%o1
	cmp   	%l1,%o1
	beq	gapplus1
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gapplus0:
	cmp    	%l1,%g3
	blt  	gapplus1
	nop
	cmp    	%l1,%i0
	bge  	gapplus1
	nop
	cmp    	%l2,%g3
	blt  	gapplus1
	nop
	cmp    	%l2,%i0
	bge  	gapplus1
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num65
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num65:
	mov   	%l2,%o0
	ldd	[%o0+0],%f0
	mov   	%l1,%o0
	ldd	[%o0+0],%f2
	faddd	%f2,%f0,%f2
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f2,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gapplus1:
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
gapplus:
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	gaprt0
	nop
	mov   	%l4,%o1
	cmp    	%o1,1
	bne	gaplus0
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%g3
	blt	gaprret
	nop
	cmp	%l1,%g3
	blt  	num66
	nop
	cmp	%l1,%i0
	blt  	gaprret
	nop
num66:
	mov   	%g0,%l2
	set	590*32,%l3
	add    	%i2,%l3,%l3
	ba,a	bangen2
	.align	4
gaprt0:
	mov   	%l4,%l1
gaprret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gaplus0:
	dec  	4,%l7
	st   	%l4,[%l7+0]
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l1
gaplus1:
	cmp    	%l1,%g3
	blt	gaplfx1
	nop
	cmp	%l1,%g3
	blt  	num67
	nop
	cmp	%l1,%i0
	blt  	gaplfl3
	nop
num67:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	gaplgn0
	nop
	mov  	0,%l4
gaplus2:
	ld	[%l7+0],%l4
	inc  	4,%l7
	mov   	%l4,%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll  	%o0,2,%o0
	add    	%l7,%o0,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gaplfx0:
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l2
	cmp	%l2,%g3
	blt  	num68
	nop
	cmp	%l2,%i0
	blt  	gaplfl0
	nop
num68:
	cmp    	%l2,%g3
	bge	gaplgn1
	nop
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
	bne  	gaplgn0
	nop
	set	0x8000,%o1
	cmp   	%l2,%o1
	beq	gaplgn0
	nop
	mov   	%l2,%l1
gaplfx1:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	gaplfx0
	nop
	mov  	0,%l4
	ba,a	gaplus2
	.align	4
gaplfl0:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num69
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num69:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ba,a	gaplfl2
	.align	4
gaplfl1:
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l2
	cmp	%l2,%g3
	blt  	num70
	nop
	cmp	%l2,%i0
	blt  	gaplfl2
	nop
num70:
	cmp    	%l2,%g3
	bge	gaplgn1
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num71
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num71:
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l2
gaplfl2:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num72
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num72:
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	mov   	%l2,%o0
	ldd	[%o0+0],%f2
	faddd	%f2,%f0,%f2
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f2,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l2
	mov   	%l2,%l1
gaplfl3:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	gaplfl1
	nop
	mov  	0,%l4
	ba,a	gaplus2
	.align	4
gaplgn0:
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l2
gaplgn1:
	dec  	4,%l7
	st   	%l4,[%l7+0]
	set	590*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	bangen2
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	ba,a	gaplus1
	.align	4

!
!	FENTRY	gatimes
!
	.seg	"data1"   
	.align	4
.gatimes:	.word    0
	._gatimes = 5
	.seg	"text"
	.align	8
	.global	gatimes
gatimes:
	mov   	%l4,%o1
	cmp    	%o1,2
	bne	gattimes
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
gatim2i:
	mov   	%l1,%l3
	cmp    	%l1,%g3
	bge	gattimes0
	nop
	cmp    	%l2,%g3
	bge	gattimes1
	nop
	sll	%l1,16,%o1
	sra	%o1,16,%o1
	sll	%l2,16,%o0
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
	set	bfloat,%g3
	ld	[%g3+0],%g3
	and	%o0,%l0,%l1
	sll	%o0,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o0
	bne  	gattimes1
	nop
	set	0x8000,%o1
	cmp   	%l1,%o1
	beq	gattimes1
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gattimes0:
	cmp    	%l1,%g3
	blt  	gattimes1
	nop
	cmp    	%l1,%i0
	bge  	gattimes1
	nop
	cmp    	%l2,%g3
	blt  	gattimes1
	nop
	cmp    	%l2,%i0
	bge  	gattimes1
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num73
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num73:
	mov   	%l2,%o0
	ldd	[%o0+0],%f0
	mov   	%l1,%o0
	ldd	[%o0+0],%f2
	fmuld	%f2,%f0,%f2
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f2,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gattimes1:
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
gattimes:
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	gatrt0
	nop
	mov   	%l4,%o1
	cmp    	%o1,1
	bne	gatime0
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%g3
	blt	gatrret
	nop
	cmp	%l1,%g3
	blt  	num74
	nop
	cmp	%l1,%i0
	blt  	gatrret
	nop
num74:
	set	1,%l2
	set	593*32,%l3
	add    	%i2,%l3,%l3
	ba,a	bangen2
	.align	4
gatrret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gatrt0:
	set	1,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gatime0:
	dec  	4,%l7
	st   	%l4,[%l7+0]
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l1
gatime1:
	cmp    	%l1,%g3
	blt	gatifx1
	nop
	cmp	%l1,%g3
	blt  	num75
	nop
	cmp	%l1,%i0
	blt  	gatifl3
	nop
num75:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	gatign0
	nop
	mov  	0,%l4
gatime2:
	ld	[%l7+0],%l4
	inc  	4,%l7
	mov   	%l4,%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll  	%o0,2,%o0
	add    	%l7,%o0,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gatifx0:
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l2
	cmp	%l2,%g3
	blt  	num76
	nop
	cmp	%l2,%i0
	blt  	gatifl0
	nop
num76:
	cmp    	%l2,%g3
	bge	gatign1
	nop
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
	set	bfloat,%g3
	ld	[%g3+0],%g3
	and	%o0,%l0,%l2
	sll	%o0,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o0
	bne  	gatign0
	nop
	set	0x8000,%o1
	cmp   	%l2,%o1
	beq	gatign0
	nop
	mov   	%l2,%l1
gatifx1:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	gatifx0
	nop
	mov  	0,%l4
	ba,a	gatime2
	.align	4
gatifl0:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num77
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num77:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ba,a	gatifl2
	.align	4
gatifl1:
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l2
	cmp	%l2,%g3
	blt  	num78
	nop
	cmp	%l2,%i0
	blt  	gatifl2
	nop
num78:
	cmp    	%l2,%g3
	bge	gatign1
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num79
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num79:
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l2
gatifl2:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num80
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num80:
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	mov   	%l2,%o0
	ldd	[%o0+0],%f2
	fmuld	%f2,%f0,%f2
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f2,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l2
	mov   	%l2,%l1
gatifl3:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	gatifl1
	nop
	mov  	0,%l4
	ba,a	gatime2
	.align	4
gatign0:
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l2
gatign1:
	dec  	4,%l7
	st   	%l4,[%l7+0]
	set	593*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	bangen2
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	ba,a	gatime1
	.align	4

!
!	FENTRY	gadinv
!
	.seg	"data1"   
	.align	4
.gadinv:	.word    0
	._gadinv = 2
	.seg	"text"
	.align	8
gadinv:
	mov   	%l1,%l2
	ba,a	gadneg
	.align	4

!
!	FENTRY	gadiff
!
	.seg	"data1"   
	.align	4
.gadiff:	.word    0
	._gadiff = 5
	.seg	"text"
	.align	8
	.global	gadiff
gadiff:
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	gadiff2
	nop
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	gadiff1
	nop
	mov   	%l4,%o1
	cmp    	%o1,0
	bne	gadiff3
	nop
	mov   	%l4,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gadiff1:
	ld	[%l7+0],%l2
	inc  	4,%l7
gadneg:
	mov   	%g0,%l1
	cmp    	%l2,%g3
	blt	gadneg2
	nop
	cmp	%l2,%g3
	blt  	num81
	nop
	cmp	%l2,%i0
	blt  	gadneg3
	nop
num81:
gadneg1:
	set	591*32,%l3
	add    	%i2,%l3,%l3
	mov   	%l2,%l1
	ba,a	bangen1
	.align	4
gadneg2:
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
	bne  	gadneg1
	nop
	set	0x8000,%o1
	cmp   	%l1,%o1
	beq	gadneg1
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gadneg3:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num82
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num82:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num83
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num83:
	mov   	%l2,%o0
	ldd	[%o0+0],%f0
	mov   	%l1,%o0
	ldd	[%o0+0],%f2
	fsubd	%f2,%f0,%f2
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f2,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gadiff2:
	ld	[%l7+0],%l1
	inc  	4,%l7
gadiffp:
	mov   	%l1,%l2
	ld	[%l7+0],%l1
	inc  	4,%l7
gadiff2i:
	mov   	%l1,%l3
	cmp    	%l1,%g3
	blt	gadiffp1
	nop
	cmp	%l1,%g3
	blt  	num84
	nop
	cmp	%l1,%i0
	blt  	gadiffp3
	nop
num84:
gadiffp0:
	mov   	%l3,%l1
	set	592*32,%l3
	add    	%i2,%l3,%l3
	ba,a	bangen2
	.align	4
gadiffp1:
	cmp    	%l2,%g3
	bge	gadiffp2
	nop
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
	bne  	gadiffp0
	nop
	set	0x8000,%o1
	cmp   	%l1,%o1
	beq	gadiffp0
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gadiffp2:
	cmp    	%l2,%g3
	blt  	gadiffp0
	nop
	cmp    	%l2,%i0
	bge  	gadiffp0
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num85
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num85:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ba,a	gadiffp5
	.align	4
gadiffp3:
	cmp    	%l2,%g3
	bge	gadiffp4
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num86
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num86:
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l2
	ba,a	gadiffp5
	.align	4
gadiffp4:
	cmp    	%l2,%g3
	blt  	gadiffp0
	nop
	cmp    	%l2,%i0
	bge  	gadiffp0
	nop
gadiffp5:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num87
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num87:
	mov   	%l2,%o0
	ldd	[%o0+0],%f0
	mov   	%l1,%o0
	ldd	[%o0+0],%f2
	fsubd	%f2,%f0,%f2
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f2,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gadiff3:
	dec	1,%l4
	dec	1,%l4
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l1
	mov   	%l4,%o1
	sll  	%o1,2,%o1
	add    	%o1,%l7,%o1
	set	gadiffp,%o0
	dec	8,%o0
	st   	%o0,[%o1+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	inc	1,%l4
	ba,a	gaplus1
	.align	4

!
!	FENTRY	gadrev
!
	.seg	"data1"   
	.align	4
.gadrev:	.word    0
	._gadrev = 2
	.seg	"text"
	.align	8
gadrev:
	mov   	%l1,%l2
	ba,a	garev
	.align	4

!
!	FENTRY	gadiv
!
	.seg	"data1"   
	.align	4
.gadiv:	.word    0
	._gadiv = 5
	.seg	"text"
	.align	8
gadiv:
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	gadiv2
	nop
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	gadiv1
	nop
	mov   	%l4,%o1
	cmp    	%o1,0
	bne	gadiv3
	nop
garevret:
	set	1,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gadiv1:
	ld	[%l7+0],%l2
	inc  	4,%l7
garev:
	set	1,%o1
	cmp	%l2,%o1
	beq	garevret
	nop
	cmp    	%l2,%g3
	blt	garev1
	nop
	cmp	%l2,%g3
	blt  	num88
	nop
	cmp	%l2,%i0
	blt  	garev2
	nop
num88:
garev1:
	set	594*32,%l3
	add    	%i2,%l3,%l3
	mov   	%l2,%l1
	ba,a	bangen1
	.align	4
garev2:
	set	1,%l1
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num89
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num89:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num90
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num90:
	mov   	%l2,%o0
	ldd	[%o0+0],%f0
	mov   	%l1,%o0
	ldd	[%o0+0],%f2
	fdivd	%f2,%f0,%f2
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f2,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gadiv2:
	ld	[%l7+0],%l1
	inc  	4,%l7
gadivt:
	mov   	%l1,%l2
	ld	[%l7+0],%l1
	inc  	4,%l7
	mov   	%l1,%l3
	cmp    	%l1,%g3
	blt	gadivt1
	nop
	cmp	%l1,%g3
	blt  	num91
	nop
	cmp	%l1,%i0
	blt  	gadivt3
	nop
num91:
gadivt0:
	mov   	%l3,%l1
	set	596*32,%l3
	add    	%i2,%l3,%l3
	ba,a	bangen2
	.align	4
gadivt1:
	cmp    	%l2,%g3
	bge	gadivt2
	nop
	mov   	%l2,%o1
	cmp    	%o1,0
	beq	gadivt0
	nop
gadivt11:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l2,16,%o1
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
	set	bfloat,%g3
	ld	[%g3+0],%g3
	and	%o0,%l0,%l1
	mov   	%l1,%o1
	cmp    	%o1,0
	bne	gadivt0
	nop
	mov   	%l3,%l1
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l2,16,%o1
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
	set	bfloat,%g3
	ld	[%g3+0],%g3
	and	%o0,%l0,%l1
	sll	%o0,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o0
	bne  	gadivt0
	nop
	set	0x8000,%o1
	cmp   	%l1,%o1
	beq	gadivt0
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gadivt2:
	cmp    	%l2,%g3
	blt  	gadivt0
	nop
	cmp    	%l2,%i0
	bge  	gadivt0
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num92
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num92:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ba,a	gadivt5
	.align	4
gadivt3:
	cmp    	%l2,%g3
	bge	gadivt4
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num93
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num93:
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l2
	ba,a	gadivt5
	.align	4
gadivt4:
	cmp    	%l2,%g3
	blt  	gadivt0
	nop
	cmp    	%l2,%i0
	bge  	gadivt0
	nop
gadivt5:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num94
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num94:
	mov   	%l2,%o0
	ldd	[%o0+0],%f0
	mov   	%l1,%o0
	ldd	[%o0+0],%f2
	fdivd	%f2,%f0,%f2
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f2,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gadiv3:
	dec	1,%l4
	dec	1,%l4
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l1
	mov   	%l4,%o1
	sll  	%o1,2,%o1
	add    	%o1,%l7,%o1
	set	gadivt,%o0
	dec	8,%o0
	st   	%o0,[%o1+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	inc	1,%l4
	ba,a	gatime1
	.align	4

!
!	FENTRY	gaquomod
!
	.seg	"data1"   
	.align	4
.gaquomod:	.word    0
	._gaquomod = 3
	.seg	"text"
	.align	8
gaquomod:
	set	599*32,%l3
	add    	%i2,%l3,%l3
	cmp	%l1,%g3
	blt  	num95
	nop
	cmp	%l1,%i0
	blt  	bangen2
	nop
num95:
	cmp	%l2,%g3
	blt  	num96
	nop
	cmp	%l2,%i0
	blt  	bangen2
	nop
num96:
	cmp    	%l1,%g3
	bge	bangen2
	nop
	cmp    	%l2,%g3
	bge	bangen2
	nop
	mov   	%l2,%o1
	cmp    	%o1,0
	beq	bangen2
	nop
gaquomod1:
	mov   	%l1,%l3
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l2,16,%o1
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
	set	bfloat,%g3
	ld	[%g3+0],%g3
	and	%o0,%l0,%l1
	sll	%o0,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o0
	bne  	gaquomodg
	nop
	set	0x8000,%o1
	cmp   	%l1,%o1
	beq	gaquomodg
	nop
	mov   	%l3,%l4
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	sll	%l2,16,%o1
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
	set	bfloat,%g3
	ld	[%g3+0],%g3
	and	%o0,%l0,%l4
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	bge	gamodret
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	bgt	gaquomod3
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	gaquomod2
	nop
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	ble	gaquomod3
	nop
gaquomod2:
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	dec	1,%l1
	mov   	%l1,%o2
	and 	%l1,%l0,%l1
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	gaquomodg
	nop
	ba,a	gaquoret
	.align	4
gaquomod3:
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	inc	1,%l1
	mov   	%l1,%o2
	and 	%l1,%l0,%l1
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	gaquomodg
	nop
gaquoret:
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	bge	gamodr3
	nop
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	neg	%l2,%l2
	mov   	%l2,%o2
	and 	%l2,%l0,%l2
gamodr3:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	add	%l4,%o1,%l4
	mov   	%l4,%o2
	and 	%l4,%l0,%l4
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	gaquomodg
	nop
gamodret:
	set	601*32,%l2
	add    	%i2,%l2,%l2
	st   	%l4,[%l2+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gaquomodg:
	mov   	%l3,%l1
	set	599*32,%l3
	add    	%i2,%l3,%l3
	ba,a	bangen2
	.align	4
gaquo2:
	cmp	%l2,%g3
	blt  	num97
	nop
	cmp	%l2,%i0
	blt  	gaquo4
	nop
num97:
	cmp    	%l2,%g3
	bge	bangen2
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num98
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num98:
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l2
	ba,a	gaquo4
	.align	4
gaquo3:
	cmp    	%l1,%g3
	bge	bangen2
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num99
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num99:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
gaquo4:
	mov   	%l1,%l3
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num100
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num100:
	mov   	%l2,%o0
	ldd	[%o0+0],%f0
	mov   	%l1,%o0
	ldd	[%o0+0],%f2
	fdivd	%f2,%f0,%f2
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f2,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	gamod
!
	.seg	"data1"   
	.align	4
.gamod:	.word    0
	._gamod = 3
	.seg	"text"
	.align	8
gamod:
	dec  	4,%l7
	call	gaquomod
	st   	%o7,[%l7+0]
	.align	4
	set	601*32,%l1
	add    	%i2,%l1,%l1
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gacom:
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,2
	bge	gacom0
	nop
	set	2,%l1
	set	cpfnt,%l2
	ld	[%l2+0],%l2
	ba,a	errwna
	.align	4
gacom0:
	dec  	4,%l7
	st   	%l4,[%l7+0]
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l1
gacom1:
	cmp    	%l1,%g3
	blt	gacomfx1
	nop
	cmp	%l1,%g3
	blt  	num101
	nop
	cmp	%l1,%i0
	blt  	gacomfl3
	nop
num101:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	gacomgn0
	nop
	mov  	0,%l4
gacom2:
	ld	[%l7+0],%l4
	inc  	4,%l7
	dec	1,%l4
	mov   	%l4,%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll  	%o0,2,%o0
	add    	%l7,%o0,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gacom3:
	mov   	%i2,%l1
	ld	[%l7+0],%l4
	inc  	4,%l7
	mov   	%l4,%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll  	%o0,2,%o0
	add    	%l7,%o0,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gacomfx0:
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l2
	cmp	%l2,%g3
	blt  	num102
	nop
	cmp	%l2,%i0
	blt  	gacomfl0
	nop
num102:
	cmp    	%l2,%g3
	bge	gacomgn1
	nop
	cmp   	%l1,%l2
	beq	gacomfx2
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bgt	gacomfx3
	nop
	set	4,%l1
	ba,a	gacomfx4
	.align	4
gacomfx2:
	set	2,%l1
	ba,a	gacomfx4
	.align	4
gacomfx3:
	set	1,%l1
gacomfx4:
	and	%l1,%l3,%l1
	mov   	%l1,%o1
	cmp    	%o1,0
	beq	gacom3
	nop
	mov   	%l2,%l1
gacomfx1:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	gacomfx0
	nop
	mov  	0,%l4
	ba,a	gacom2
	.align	4
gacomfl0:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num103
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num103:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ba,a	gacomfl2
	.align	4
gacomfl1:
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l2
	cmp	%l2,%g3
	blt  	num104
	nop
	cmp	%l2,%i0
	blt  	gacomfl2
	nop
num104:
	cmp    	%l2,%g3
	bge	gacomgn1
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num105
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num105:
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l2
gacomfl2:
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	mov   	%l2,%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbe    	gacomfl4
	nop
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	mov   	%l2,%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbg    	gacomfl5
	nop
	set	4,%l1
	ba,a	gacomfl6
	.align	4
gacomfl4:
	set	2,%l1
	ba,a	gacomfl6
	.align	4
gacomfl5:
	set	1,%l1
gacomfl6:
	and	%l1,%l3,%l1
	mov   	%l1,%o1
	cmp    	%o1,0
	beq	gacom3
	nop
	mov   	%l2,%l1
gacomfl3:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	gacomfl1
	nop
	mov  	0,%l4
	ba,a	gacom2
	.align	4
gacomgn0:
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l2
gacomgn1:
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	603*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	bangensp2
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	cmp    	%l1,%g3
	bge	gacom3
	nop
	mov   	%l1,%o1
	cmp    	%o1,0
	beq	gacomgn2
	nop
	mov   	%l1,%o1
	cmp    	%o1,1
	beq	gacomgn3
	nop
	set	moinsun,%o1
	ld	[%o1+0],%o1
	cmp   	%l1,%o1
	bne	gacom3
	nop
	set	4,%l1
	ba,a	gacomgn4
	.align	4
gacomgn2:
	set	2,%l1
	ba,a	gacomgn4
	.align	4
gacomgn3:
	set	1,%l1
gacomgn4:
	and	%l1,%l3,%l1
	mov   	%l1,%o1
	cmp    	%o1,0
	beq	gacom3
	nop
	mov   	%l2,%l1
	ba,a	gacom1
	.align	4
bangensp2:
	dec  	4,%l7
	set	oneret,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	set	2,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	bangen
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+8],%l1
	set	cpfnt,%l3
	ld	[%l3+0],%l3
	set	tworet,%o0
	dec	8,%o0
	st   	%o0,[%l7+12]
	dec  	4,%l7
	call	bangen
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	num106
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
num106:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	num107
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
num107:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ba,a	errgen
	.align	4
oneret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
tworet:
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	cmp    	%l1,%i2
	beq	gacom3
	nop
	mov   	%l2,%l1
	ba,a	gacom1
	.align	4

!
!	FENTRY	gacomp
!
	.seg	"data1"   
	.align	4
.gacomp:	.word    0
	._gacomp = 3
	.seg	"text"
	.align	8
gacomp:
	set	603*32,%l3
	add    	%i2,%l3,%l3
	cmp    	%l1,%g3
	blt	gacomp5
	nop
	cmp    	%l1,%g3
	blt  	bangen2
	nop
	cmp    	%l1,%i0
	bge  	bangen2
	nop
	cmp	%l2,%g3
	blt  	num108
	nop
	cmp	%l2,%i0
	blt  	gacomp1
	nop
num108:
	cmp    	%l2,%g3
	bge	bangen2
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num109
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num109:
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l2
gacomp1:
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	mov   	%l2,%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbe    	gacomp3
	nop
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	mov   	%l2,%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbg    	gacomp4
	nop
gacomp2:
	set	moinsun,%l1
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gacomp3:
	mov   	%g0,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gacomp4:
	set	1,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gacomp5:
	cmp    	%l2,%g3
	blt	gacomp6
	nop
	cmp    	%l2,%g3
	blt  	bangen2
	nop
	cmp    	%l2,%i0
	bge  	bangen2
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num110
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num110:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ba,a	gacomp1
	.align	4
gacomp6:
	cmp   	%l1,%l2
	beq	gacomp3
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bgt	gacomp4
	nop
	ba,a	gacomp2
	.align	4

!
!	FENTRY	zerop
!
	.seg	"data1"   
	.align	4
.zerop:	.word    0
	._zerop = 2
	.seg	"text"
	.align	8
	.global	zerop
zerop:
	set	611*32,%o3
	add    	%i2,%o3,%o3
	set	cpfnt,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%g0,[%l7+0]
	set	2,%l4
	set	2,%l3
	ba,a	gacom
	.align	4

!
!	FENTRY	minusp
!
	.seg	"data1"   
	.align	4
.minusp:	.word    0
	._minusp = 2
	.seg	"text"
	.align	8
	.global	minusp
minusp:
	set	613*32,%o3
	add    	%i2,%o3,%o3
	set	cpfnt,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%g0,[%l7+0]
	set	2,%l4
	set	4,%l3
	ba,a	gacom
	.align	4

!
!	FENTRY	plusp
!
	.seg	"data1"   
	.align	4
.plusp:	.word    0
	._plusp = 2
	.seg	"text"
	.align	8
	.global	plusp
plusp:
	set	612*32,%o3
	add    	%i2,%o3,%o3
	set	cpfnt,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%g0,[%l7+0]
	set	2,%l4
	set	3,%l3
	ba,a	gacom
	.align	4
gaeqn:
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	set	gaeqnret,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	604*32,%o3
	add    	%i2,%o3,%o3
	set	cpfnt,%o4
	st   	%o3,[%o4+0]
	set	2,%l4
	set	2,%l3
	ba,a	gacom
	.align	4
gaeqnret:
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	gaeqen
!
	.seg	"data1"   
	.align	4
.gaeqen:	.word    0
	._gaeqen = 5
	.seg	"text"
	.align	8
gaeqen:
	set	2,%o1
	cmp	%l4,%o1
	bne	gaeqen2
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%g3
	bge	gaeqen1
	nop
	cmp    	%l2,%g3
	bge	gaeqen1
	nop
	cmp   	%l1,%l2
	beq	gaeqqn0
	nop
	mov   	%i2,%l1
gaeqqn0:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gaeqen1:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
gaeqen2:
	set	604*32,%o3
	add    	%i2,%o3,%o3
	set	cpfnt,%o4
	st   	%o3,[%o4+0]
	set	2,%l3
	ba,a	gacom
	.align	4

!
!	FENTRY	ganeqn
!
	.seg	"data1"   
	.align	4
.ganeqn:	.word    0
	._ganeqn = 3
	.seg	"text"
	.align	8
	.global	ganeqn
ganeqn:
	cmp    	%l1,%g3
	bge	ganen1
	nop
	cmp    	%l2,%g3
	bge	ganen1
	nop
	cmp   	%l1,%l2
	bne	ganen0
	nop
	mov   	%i2,%l1
ganen0:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ganen1:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	606*32,%o3
	add    	%i2,%o3,%o3
	set	cpfnt,%o4
	st   	%o3,[%o4+0]
	set	5,%l3
	set	2,%l4
	ba,a	gacom
	.align	4

!
!	FENTRY	gagt
!
	.seg	"data1"   
	.align	4
.gagt:	.word    0
	._gagt = 5
	.seg	"text"
	.align	8
gagt:
	set	608*32,%o3
	add    	%i2,%o3,%o3
	set	cpfnt,%o4
	st   	%o3,[%o4+0]
	set	1,%l3
	ba,a	gacom
	.align	4

!
!	FENTRY	gage
!
	.seg	"data1"   
	.align	4
.gage:	.word    0
	._gage = 5
	.seg	"text"
	.align	8
	.global	gage
gage:
	set	607*32,%o3
	add    	%i2,%o3,%o3
	set	cpfnt,%o4
	st   	%o3,[%o4+0]
	set	3,%l3
	ba,a	gacom
	.align	4

!
!	FENTRY	galt
!
	.seg	"data1"   
	.align	4
.galt:	.word    0
	._galt = 5
	.seg	"text"
	.align	8
galt:
	set	610*32,%o3
	add    	%i2,%o3,%o3
	set	cpfnt,%o4
	st   	%o3,[%o4+0]
	set	4,%l3
	ba,a	gacom
	.align	4

!
!	FENTRY	gale
!
	.seg	"data1"   
	.align	4
.gale:	.word    0
	._gale = 5
	.seg	"text"
	.align	8
	.global	gale
gale:
	set	609*32,%o3
	add    	%i2,%o3,%o3
	set	cpfnt,%o4
	st   	%o3,[%o4+0]
	set	6,%l3
	ba,a	gacom
	.align	4

!
!	FENTRY	min
!
	.seg	"data1"   
	.align	4
.min:	.word    0
	._min = 5
	.seg	"text"
	.align	8
	.global	min
min:
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	minerr
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	min3
	.align	4
min1:
	ld	[%l7+0],%l2
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	call	mintwo
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	cmp    	%l1,%i2
	bne	min2
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	min3
	.align	4
min2:
	inc  	4*1,%l7
min3:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	min1
	nop
	mov  	0,%l4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
minerr:
	set	1,%l1
	set	614*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4
mintwo:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	2,%l4
	ba,a	galt
	.align	4

!
!	FENTRY	max
!
	.seg	"data1"   
	.align	4
.max:	.word    0
	._max = 5
	.seg	"text"
	.align	8
	.global	max
max:
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	maxerr
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	max3
	.align	4
max1:
	ld	[%l7+0],%l2
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	call	maxtwo
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	cmp    	%l1,%i2
	bne	max2
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	max3
	.align	4
max2:
	inc  	4*1,%l7
max3:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	max1
	nop
	mov  	0,%l4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
maxerr:
	set	1,%l1
	set	615*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4
maxtwo:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	2,%l4
	ba,a	gagt
	.align	4

!
!	FENTRY	llsin
!
	.seg	"data1"   
	.align	4
.llsin:	.word    0
	._llsin = 2
	.seg	"text"
	.align	8
llsin:
	set	616*32,%l3
	add    	%i2,%l3,%l3
	cmp	%l1,%g3
	blt  	num111
	nop
	cmp	%l1,%i0
	blt  	sin2
	nop
num111:
	cmp    	%l1,%g3
	bge	bangen1
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num112
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num112:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
sin2:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num113
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num113:
	ld	[%l1+0],%o0
	ld	[%l1+4],%o1
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
	call 	llrt_sin,2
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
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llcos
!
	.seg	"data1"   
	.align	4
.llcos:	.word    0
	._llcos = 2
	.seg	"text"
	.align	8
llcos:
	set	617*32,%l3
	add    	%i2,%l3,%l3
	cmp	%l1,%g3
	blt  	num114
	nop
	cmp	%l1,%i0
	blt  	cos2
	nop
num114:
	cmp    	%l1,%g3
	bge	bangen1
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num115
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num115:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
cos2:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num116
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num116:
	ld	[%l1+0],%o0
	ld	[%l1+4],%o1
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
	call 	llrt_cos,2
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
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llasin
!
	.seg	"data1"   
	.align	4
.llasin:	.word    0
	._llasin = 2
	.seg	"text"
	.align	8
llasin:
	set	618*32,%l3
	add    	%i2,%l3,%l3
	cmp	%l1,%g3
	blt  	num117
	nop
	cmp	%l1,%i0
	blt  	asin2
	nop
num117:
	cmp    	%l1,%g3
	bge	bangen1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,1
	bgt	bangen1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	set	moinsun,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	blt	bangen1
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num118
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num118:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ba,a	asin3
	.align	4
asin2:
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	set	fltun,%o0
	ld	[%o0+0],%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbg    	bangen1
	nop
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	set	fltmun,%o0
	ld	[%o0+0],%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbl    	bangen1
	nop
asin3:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num119
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num119:
	ld	[%l1+0],%o0
	ld	[%l1+4],%o1
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
	call 	llrt_asin,2
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
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llacos
!
	.seg	"data1"   
	.align	4
.llacos:	.word    0
	._llacos = 2
	.seg	"text"
	.align	8
llacos:
	set	619*32,%l3
	add    	%i2,%l3,%l3
	cmp	%l1,%g3
	blt  	num120
	nop
	cmp	%l1,%i0
	blt  	acos2
	nop
num120:
	cmp    	%l1,%g3
	bge	bangen1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,1
	bgt	bangen1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	set	moinsun,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	blt	bangen1
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num121
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num121:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ba,a	acos3
	.align	4
acos2:
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	set	fltun,%o0
	ld	[%o0+0],%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbg    	bangen1
	nop
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	set	fltmun,%o0
	ld	[%o0+0],%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbl    	bangen1
	nop
acos3:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num122
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num122:
	ld	[%l1+0],%o0
	ld	[%l1+4],%o1
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
	call 	llrt_acos,2
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
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llatan
!
	.seg	"data1"   
	.align	4
.llatan:	.word    0
	._llatan = 2
	.seg	"text"
	.align	8
llatan:
	set	620*32,%l3
	add    	%i2,%l3,%l3
	cmp	%l1,%g3
	blt  	num123
	nop
	cmp	%l1,%i0
	blt  	atan2
	nop
num123:
	cmp    	%l1,%g3
	bge	bangen1
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num124
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num124:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
atan2:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num125
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num125:
	ld	[%l1+0],%o0
	ld	[%l1+4],%o1
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
	call 	llrt_atan,2
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
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llexp
!
	.seg	"data1"   
	.align	4
.llexp:	.word    0
	._llexp = 2
	.seg	"text"
	.align	8
llexp:
	set	621*32,%l3
	add    	%i2,%l3,%l3
	cmp	%l1,%g3
	blt  	num126
	nop
	cmp	%l1,%i0
	blt  	exp2
	nop
num126:
	cmp    	%l1,%g3
	bge	bangen1
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num127
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num127:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
exp2:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num128
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num128:
	ld	[%l1+0],%o0
	ld	[%l1+4],%o1
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
	call 	llrt_exp,2
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
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	lllog
!
	.seg	"data1"   
	.align	4
.lllog:	.word    0
	._lllog = 2
	.seg	"text"
	.align	8
lllog:
	set	622*32,%l3
	add    	%i2,%l3,%l3
	cmp	%l1,%g3
	blt  	num129
	nop
	cmp	%l1,%i0
	blt  	log2
	nop
num129:
	cmp    	%l1,%g3
	bge	bangen1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	ble	bangen1
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num130
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num130:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ba,a	log3
	.align	4
log2:
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	set	fzero,%o0
	ld	[%o0+0],%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fble    	bangen1
	nop
log3:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num131
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num131:
	ld	[%l1+0],%o0
	ld	[%l1+4],%o1
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
	call 	llrt_log,2
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
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	lllog10
!
	.seg	"data1"   
	.align	4
.lllog10:	.word    0
	._lllog10 = 2
	.seg	"text"
	.align	8
	.global	lllog10
lllog10:
	set	623*32,%l3
	add    	%i2,%l3,%l3
	cmp	%l1,%g3
	blt  	num132
	nop
	cmp	%l1,%i0
	blt  	log102
	nop
num132:
	cmp    	%l1,%g3
	bge	bangen1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	ble	bangen1
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num133
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num133:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ba,a	log103
	.align	4
log102:
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	set	fzero,%o0
	ld	[%o0+0],%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fble    	bangen1
	nop
log103:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num134
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num134:
	ld	[%l1+0],%o0
	ld	[%l1+4],%o1
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
	call 	llrt_log10,2
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
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llpower
!
	.seg	"data1"   
	.align	4
.llpower:	.word    0
	._llpower = 3
	.seg	"text"
	.align	8
llpower:
	set	624*32,%l3
	add    	%i2,%l3,%l3
	cmp	%l1,%g3
	blt  	num135
	nop
	cmp	%l1,%i0
	blt  	power2
	nop
num135:
	cmp    	%l1,%g3
	bge	bangen2
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num136
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num136:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
power2:
	cmp	%l2,%g3
	blt  	num137
	nop
	cmp	%l2,%i0
	blt  	power3
	nop
num137:
	cmp    	%l2,%g3
	bge	bangen2
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num138
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num138:
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l2
power3:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num139
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num139:
	ld	[%l1+0],%o0
	ld	[%l1+4],%o1
	ld	[%l2+0],%o2
	ld	[%l2+4],%o3
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	mov   	%o3,%o3
	mov   	%o2,%o2
	mov   	%o1,%o1
	mov   	%o0,%o0
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	llrt_power,4
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
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llsqrt
!
	.seg	"data1"   
	.align	4
.llsqrt:	.word    0
	._llsqrt = 2
	.seg	"text"
	.align	8
llsqrt:
	set	625*32,%l3
	add    	%i2,%l3,%l3
	cmp	%l1,%g3
	blt  	num140
	nop
	cmp	%l1,%i0
	blt  	sqrt2
	nop
num140:
	cmp    	%l1,%g3
	bge	bangen1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	bangen1
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num141
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num141:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitod	%f0,%f0
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ba,a	sqrt3
	.align	4
sqrt2:
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	set	fzero,%o0
	ld	[%o0+0],%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbl    	bangen1
	nop
sqrt3:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	num142
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
num142:
	ld	[%l1+0],%o0
	ld	[%l1+4],%o1
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
	call 	llrt_sqrt,2
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
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f0,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	mov   	%o3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llfixmax
!
	.seg	"data1"   
	.align	4
.llfixmax:	.word    0
	._llfixmax = 1
	.seg	"text"
	.align	8
	.global	llfixmax
llfixmax:
	set	32767,%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	add	%l1,0,%l1
	and 	%l1,%l0,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llfixmin
!
	.seg	"data1"   
	.align	4
.llfixmin:	.word    0
	._llfixmin = 1
	.seg	"text"
	.align	8
	.global	llfixmin
llfixmin:
	set	0x8001,%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	add	%l1,0,%l1
	and 	%l1,%l0,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llminus0
!
	.seg	"data1"   
	.align	4
.llminus0:	.word    0
	._llminus0 = 1
	.seg	"text"
	.align	8
	.global	llminus0
llminus0:
	set	0x8000,%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	add	%l1,0,%l1
	and 	%l1,%l0,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
! end
