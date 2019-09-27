!
!	File fntstd.s expansion for sparc arch=v8plus.
!	This file is part of Le-Lisp kernel.
!	Generated on Sat Oct   7 17 21:25:39 
!
	.file	"fntstd.s"
	.align	8 
	.global	mstack
	.global	bvar
	.global	hashtab
	.global	errfs
	.global	errsym
	.global	errnia
	.global	errnla
	.global	errnva
	.global	errwna
	.global	errudf
	.global	errudv
	.global	erroob
	.global	errilb
	.global	errbpa
	.global	gccons
	.global	gcfloat
	.global	gcnumb
	.global	inisymb
	.global	inicst
	.global	istdsym
	.global	evalcar
	.global	evala1
	.global	savea1
	.global	savea2
	.global	savea3
	.global	savea4
	.global	apply
	.global	tabtypfn
	.global	tabcodfn
	.global	gaeqn
	.global	stringa2
	.global	strgallc
	.global	makevect
	.global	eqstrgi
	.global	eqvectri
	.global	ffindex
	.global	loc
	.global	vag
	.global	ini_std
	.global	member
	.global	memq
	.global	list
	.global	equal
	.global	nreverse
	.global	deset
	.global	lllength
	.global	displace
	.global	evlis
	.global	nreconc
	.global	kwote
	.global	copy
	.seg	"text"
ini_std:
	.seg	"data1"   
	.align	4
pfnt1:
	.asciz	"true"
	.seg	"text"
bfnt1:
	set	4,%l1
	set	pfnt1,%l2
	set	true,%l3
	dec	8,%l3
	set	trash,%l4
	set	._true,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt2:
	.asciz	"false"
	.seg	"text"
bfnt2:
	set	5,%l1
	set	pfnt2,%l2
	set	false,%l3
	dec	8,%l3
	set	trash,%l4
	set	._false,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt3:
	.asciz	"not"
	.seg	"text"
bfnt3:
	set	3,%l1
	set	pfnt3,%l2
	set	llnot,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llnot,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt4:
	.asciz	"null"
	.seg	"text"
bfnt4:
	set	4,%l1
	set	pfnt4,%l2
	set	llnull,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llnull,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt5:
	.asciz	"atom"
	.seg	"text"
bfnt5:
	set	4,%l1
	set	pfnt5,%l2
	set	atom,%l3
	dec	8,%l3
	set	trash,%l4
	set	._atom,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt6:
	.asciz	"atomp"
	.seg	"text"
bfnt6:
	set	5,%l1
	set	pfnt6,%l2
	set	atomp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._atomp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt7:
	.asciz	"symbolp"
	.seg	"text"
bfnt7:
	set	7,%l1
	set	pfnt7,%l2
	set	symbolp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._symbolp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt8:
	.asciz	"variablep"
	.seg	"text"
bfnt8:
	set	9,%l1
	set	pfnt8,%l2
	set	variablep,%l3
	dec	8,%l3
	set	trash,%l4
	set	._variablep,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt9:
	.asciz	"constantp"
	.seg	"text"
bfnt9:
	set	9,%l1
	set	pfnt9,%l2
	set	constantp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._constantp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt10:
	.asciz	"vectorp"
	.seg	"text"
bfnt10:
	set	7,%l1
	set	pfnt10,%l2
	set	vectorp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._vectorp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt11:
	.asciz	"stringp"
	.seg	"text"
bfnt11:
	set	7,%l1
	set	pfnt11,%l2
	set	stringp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._stringp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt12:
	.asciz	"listp"
	.seg	"text"
bfnt12:
	set	5,%l1
	set	pfnt12,%l2
	set	listp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._listp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt13:
	.asciz	"nlistp"
	.seg	"text"
bfnt13:
	set	6,%l1
	set	pfnt13,%l2
	set	nlistp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._nlistp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt14:
	.asciz	"consp"
	.seg	"text"
bfnt14:
	set	5,%l1
	set	pfnt14,%l2
	set	consp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._consp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt15:
	.asciz	"boundp"
	.seg	"text"
bfnt15:
	set	6,%l1
	set	pfnt15,%l2
	set	boundp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._boundp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt16:
	.asciz	"eq"
	.seg	"text"
bfnt16:
	set	2,%l1
	set	pfnt16,%l2
	set	lleq,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lleq,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt17:
	.asciz	"neq"
	.seg	"text"
bfnt17:
	set	3,%l1
	set	pfnt17,%l2
	set	neq,%l3
	dec	8,%l3
	set	trash,%l4
	set	._neq,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt18:
	.asciz	"equal"
	.seg	"text"
bfnt18:
	set	5,%l1
	set	pfnt18,%l2
	set	equal,%l3
	dec	8,%l3
	set	trash,%l4
	set	._equal,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt19:
	.asciz	"nequal"
	.seg	"text"
bfnt19:
	set	6,%l1
	set	pfnt19,%l2
	set	nequal,%l3
	dec	8,%l3
	set	trash,%l4
	set	._nequal,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt20:
	.asciz	"memq"
	.seg	"text"
bfnt20:
	set	4,%l1
	set	pfnt20,%l2
	set	memq,%l3
	dec	8,%l3
	set	trash,%l4
	set	._memq,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt21:
	.asciz	"member"
	.seg	"text"
bfnt21:
	set	6,%l1
	set	pfnt21,%l2
	set	member,%l3
	dec	8,%l3
	set	trash,%l4
	set	._member,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt22:
	.asciz	"tailp"
	.seg	"text"
bfnt22:
	set	5,%l1
	set	pfnt22,%l2
	set	tailp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._tailp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt23:
	.asciz	"last"
	.seg	"text"
bfnt23:
	set	4,%l1
	set	pfnt23,%l2
	set	last,%l3
	dec	8,%l3
	set	trash,%l4
	set	._last,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt24:
	.asciz	"nthcdr"
	.seg	"text"
bfnt24:
	set	6,%l1
	set	pfnt24,%l2
	set	nthcdr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._nthcdr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt25:
	.asciz	"nth"
	.seg	"text"
bfnt25:
	set	3,%l1
	set	pfnt25,%l2
	set	nth,%l3
	dec	8,%l3
	set	trash,%l4
	set	._nth,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt26:
	.asciz	"length"
	.seg	"text"
bfnt26:
	set	6,%l1
	set	pfnt26,%l2
	set	lllength,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lllength,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt27:
	.asciz	"cons"
	.seg	"text"
bfnt27:
	set	4,%l1
	set	pfnt27,%l2
	set	llcons,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llcons,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt28:
	.asciz	"xcons"
	.seg	"text"
bfnt28:
	set	5,%l1
	set	pfnt28,%l2
	set	fxcons,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fxcons,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt29:
	.asciz	"ncons"
	.seg	"text"
bfnt29:
	set	5,%l1
	set	pfnt29,%l2
	set	fncons,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fncons,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt30:
	.asciz	"mcons"
	.seg	"text"
bfnt30:
	set	5,%l1
	set	pfnt30,%l2
	set	mcons,%l3
	dec	8,%l3
	set	trash,%l4
	set	._mcons,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt31:
	.asciz	"list"
	.seg	"text"
bfnt31:
	set	4,%l1
	set	pfnt31,%l2
	set	list,%l3
	dec	8,%l3
	set	trash,%l4
	set	._list,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt32:
	.asciz	"evlis"
	.seg	"text"
bfnt32:
	set	5,%l1
	set	pfnt32,%l2
	set	evlis,%l3
	dec	8,%l3
	set	trash,%l4
	set	._evlis,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt33:
	.asciz	"kwote"
	.seg	"text"
bfnt33:
	set	5,%l1
	set	pfnt33,%l2
	set	kwote,%l3
	dec	8,%l3
	set	trash,%l4
	set	._kwote,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt34:
	.asciz	"makelist"
	.seg	"text"
bfnt34:
	set	8,%l1
	set	pfnt34,%l2
	set	makelist,%l3
	dec	8,%l3
	set	trash,%l4
	set	._makelist,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt35:
	.asciz	"reverse"
	.seg	"text"
bfnt35:
	set	7,%l1
	set	pfnt35,%l2
	set	reverse,%l3
	dec	8,%l3
	set	trash,%l4
	set	._reverse,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt36:
	.asciz	"append"
	.seg	"text"
bfnt36:
	set	6,%l1
	set	pfnt36,%l2
	set	append,%l3
	dec	8,%l3
	set	trash,%l4
	set	._append,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt37:
	.asciz	"append1"
	.seg	"text"
bfnt37:
	set	7,%l1
	set	pfnt37,%l2
	set	appnd1,%l3
	dec	8,%l3
	set	trash,%l4
	set	._appnd1,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt38:
	.asciz	"remq"
	.seg	"text"
bfnt38:
	set	4,%l1
	set	pfnt38,%l2
	set	remq,%l3
	dec	8,%l3
	set	trash,%l4
	set	._remq,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt39:
	.asciz	"remove"
	.seg	"text"
bfnt39:
	set	6,%l1
	set	pfnt39,%l2
	set	llremove,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llremove,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt40:
	.asciz	"copy"
	.seg	"text"
bfnt40:
	set	4,%l1
	set	pfnt40,%l2
	set	copy,%l3
	dec	8,%l3
	set	trash,%l4
	set	._copy,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt41:
	.asciz	"copylist"
	.seg	"text"
bfnt41:
	set	8,%l1
	set	pfnt41,%l2
	set	copylist,%l3
	dec	8,%l3
	set	trash,%l4
	set	._copylist,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt42:
	.asciz	"firstn"
	.seg	"text"
bfnt42:
	set	6,%l1
	set	pfnt42,%l2
	set	firstn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._firstn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt43:
	.asciz	"lastn"
	.seg	"text"
bfnt43:
	set	5,%l1
	set	pfnt43,%l2
	set	lastn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lastn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt44:
	.asciz	"subst"
	.seg	"text"
bfnt44:
	set	5,%l1
	set	pfnt44,%l2
	set	subst,%l3
	dec	8,%l3
	set	trash,%l4
	set	._subst,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt45:
	.asciz	"oblist"
	.seg	"text"
bfnt45:
	set	6,%l1
	set	pfnt45,%l2
	set	oblist,%l3
	dec	8,%l3
	set	trash,%l4
	set	._oblist,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt46:
	.asciz	"boblist"
	.seg	"text"
bfnt46:
	set	7,%l1
	set	pfnt46,%l2
	set	boblist,%l3
	dec	8,%l3
	set	trash,%l4
	set	._boblist,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt47:
	.asciz	"lhoblist"
	.seg	"text"
bfnt47:
	set	8,%l1
	set	pfnt47,%l2
	set	lhoblist,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lhoblist,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt48:
	.asciz	"rplaca"
	.seg	"text"
bfnt48:
	set	6,%l1
	set	pfnt48,%l2
	set	rplaca,%l3
	dec	8,%l3
	set	trash,%l4
	set	._rplaca,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt49:
	.asciz	"rplacd"
	.seg	"text"
bfnt49:
	set	6,%l1
	set	pfnt49,%l2
	set	rplacd,%l3
	dec	8,%l3
	set	trash,%l4
	set	._rplacd,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt50:
	.asciz	"rplac"
	.seg	"text"
bfnt50:
	set	5,%l1
	set	pfnt50,%l2
	set	rplac,%l3
	dec	8,%l3
	set	trash,%l4
	set	._rplac,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt51:
	.asciz	"placdl"
	.seg	"text"
bfnt51:
	set	6,%l1
	set	pfnt51,%l2
	set	placdl,%l3
	dec	8,%l3
	set	trash,%l4
	set	._placdl,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt52:
	.asciz	"displace"
	.seg	"text"
bfnt52:
	set	8,%l1
	set	pfnt52,%l2
	set	displace,%l3
	dec	8,%l3
	set	trash,%l4
	set	._displace,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt53:
	.asciz	"setq"
	.seg	"text"
bfnt53:
	set	4,%l1
	set	pfnt53,%l2
	set	setq,%l3
	dec	8,%l3
	set	trash,%l4
	set	._setq,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt54:
	.asciz	"set"
	.seg	"text"
bfnt54:
	set	3,%l1
	set	pfnt54,%l2
	set	fset,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fset,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt55:
	.asciz	"setqq"
	.seg	"text"
bfnt55:
	set	5,%l1
	set	pfnt55,%l2
	set	setqq,%l3
	dec	8,%l3
	set	trash,%l4
	set	._setqq,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt56:
	.asciz	"psetq"
	.seg	"text"
bfnt56:
	set	5,%l1
	set	pfnt56,%l2
	set	psetq,%l3
	dec	8,%l3
	set	trash,%l4
	set	._psetq,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt57:
	.asciz	"deset"
	.seg	"text"
bfnt57:
	set	5,%l1
	set	pfnt57,%l2
	set	deset,%l3
	dec	8,%l3
	set	trash,%l4
	set	._deset,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt58:
	.asciz	"desetq"
	.seg	"text"
bfnt58:
	set	6,%l1
	set	pfnt58,%l2
	set	desetq,%l3
	dec	8,%l3
	set	trash,%l4
	set	._desetq,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt59:
	.asciz	"cirlist"
	.seg	"text"
bfnt59:
	set	7,%l1
	set	pfnt59,%l2
	set	cirlist,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cirlist,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt60:
	.asciz	"nreverse"
	.seg	"text"
bfnt60:
	set	8,%l1
	set	pfnt60,%l2
	set	nreverse,%l3
	dec	8,%l3
	set	trash,%l4
	set	._nreverse,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt61:
	.asciz	"nsubst"
	.seg	"text"
bfnt61:
	set	6,%l1
	set	pfnt61,%l2
	set	nsubst,%l3
	dec	8,%l3
	set	trash,%l4
	set	._nsubst,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt62:
	.asciz	"delq"
	.seg	"text"
bfnt62:
	set	4,%l1
	set	pfnt62,%l2
	set	delq,%l3
	dec	8,%l3
	set	trash,%l4
	set	._delq,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt63:
	.asciz	"delete"
	.seg	"text"
bfnt63:
	set	6,%l1
	set	pfnt63,%l2
	set	lldelete,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lldelete,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt64:
	.asciz	"nreconc"
	.seg	"text"
bfnt64:
	set	7,%l1
	set	pfnt64,%l2
	set	nreconc,%l3
	dec	8,%l3
	set	trash,%l4
	set	._nreconc,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt65:
	.asciz	"nextl"
	.seg	"text"
bfnt65:
	set	5,%l1
	set	pfnt65,%l2
	set	nextl,%l3
	dec	8,%l3
	set	trash,%l4
	set	._nextl,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt66:
	.asciz	"newl"
	.seg	"text"
bfnt66:
	set	4,%l1
	set	pfnt66,%l2
	set	newl,%l3
	dec	8,%l3
	set	trash,%l4
	set	._newl,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt67:
	.asciz	"newr"
	.seg	"text"
bfnt67:
	set	4,%l1
	set	pfnt67,%l2
	set	newr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._newr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt68:
	.asciz	"nconc"
	.seg	"text"
bfnt68:
	set	5,%l1
	set	pfnt68,%l2
	set	nconc,%l3
	dec	8,%l3
	set	trash,%l4
	set	._nconc,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt69:
	.asciz	"nconc1"
	.seg	"text"
bfnt69:
	set	6,%l1
	set	pfnt69,%l2
	set	nconc1,%l3
	dec	8,%l3
	set	trash,%l4
	set	._nconc1,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt70:
	.asciz	"acons"
	.seg	"text"
bfnt70:
	set	5,%l1
	set	pfnt70,%l2
	set	acons,%l3
	dec	8,%l3
	set	trash,%l4
	set	._acons,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt71:
	.asciz	"pairlis"
	.seg	"text"
bfnt71:
	set	7,%l1
	set	pfnt71,%l2
	set	pairlis,%l3
	dec	8,%l3
	set	trash,%l4
	set	._pairlis,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt72:
	.asciz	"assq"
	.seg	"text"
bfnt72:
	set	4,%l1
	set	pfnt72,%l2
	set	assq,%l3
	dec	8,%l3
	set	trash,%l4
	set	._assq,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt73:
	.asciz	"assoc"
	.seg	"text"
bfnt73:
	set	5,%l1
	set	pfnt73,%l2
	set	assoc,%l3
	dec	8,%l3
	set	trash,%l4
	set	._assoc,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt74:
	.asciz	"cassq"
	.seg	"text"
bfnt74:
	set	5,%l1
	set	pfnt74,%l2
	set	cassq,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cassq,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt75:
	.asciz	"cassoc"
	.seg	"text"
bfnt75:
	set	6,%l1
	set	pfnt75,%l2
	set	cassoc,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cassoc,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt76:
	.asciz	"rassq"
	.seg	"text"
bfnt76:
	set	5,%l1
	set	pfnt76,%l2
	set	rassq,%l3
	dec	8,%l3
	set	trash,%l4
	set	._rassq,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt77:
	.asciz	"rassoc"
	.seg	"text"
bfnt77:
	set	6,%l1
	set	pfnt77,%l2
	set	rassoc,%l3
	dec	8,%l3
	set	trash,%l4
	set	._rassoc,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfnt78:
	.asciz	"sublis"
	.seg	"text"
bfnt78:
	set	6,%l1
	set	pfnt78,%l2
	set	sublis,%l3
	dec	8,%l3
	set	trash,%l4
	set	._sublis,%o0
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
fntret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	true
!
	.seg	"data1"   
	.align	4
.true:	.word    0
	._true = 5
	.seg	"text"
	.align	8
	.global	true
true:
	mov   	%l4,%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll  	%o0,2,%o0
	add    	%l7,%o0,%l7
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	false
!
	.seg	"data1"   
	.align	4
.false:	.word    0
	._false = 5
	.seg	"text"
	.align	8
	.global	false
false:
	mov   	%l4,%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll  	%o0,2,%o0
	add    	%l7,%o0,%l7
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llnull
!
	.seg	"data1"   
	.align	4
.llnull:	.word    0
	._llnull = 2
	.seg	"text"
	.align	8
	.global	llnull
llnull:
	cmp    	%l1,%i2
	beq	llnullt
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
llnullt:
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llnot
!
	.seg	"data1"   
	.align	4
.llnot:	.word    0
	._llnot = 2
	.seg	"text"
	.align	8
	.global	llnot
llnot:
	cmp    	%l1,%i2
	beq	llnott
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
llnott:
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	atom
!
	.seg	"data1"   
	.align	4
.atom:	.word    0
	._atom = 2
	.seg	"text"
	.align	8
	.global	atom
atom:
	cmp    	%l1,%i3
	blt	atomt
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
atomt:
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	atomp
!
	.seg	"data1"   
	.align	4
.atomp:	.word    0
	._atomp = 2
	.seg	"text"
	.align	8
	.global	atomp
atomp:
	cmp    	%l1,%i3
	blt	atompt
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
atompt:
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	symbolp
!
	.seg	"data1"   
	.align	4
.symbolp:	.word    0
	._symbolp = 2
	.seg	"text"
	.align	8
	.global	symbolp
symbolp:
	cmp	%l1,%i2
	blt  	fnt79
	nop
	cmp	%l1,%i3
	blt  	symbolpt
	nop
fnt79:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
symbolpt:
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	variablep
!
	.seg	"data1"   
	.align	4
.variablep:	.word    0
	._variablep = 2
	.seg	"text"
	.align	8
	.global	variablep
variablep:
	set	bvar,%o1
	ld	[%o1+0],%o1
	cmp	%l1,%o1
	blt  	fnt80
	nop
	cmp	%l1,%i3
	blt  	varpret
	nop
fnt80:
	mov   	%i2,%l1
varpret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	constantp
!
	.seg	"data1"   
	.align	4
.constantp:	.word    0
	._constantp = 2
	.seg	"text"
	.align	8
	.global	constantp
constantp:
	cmp    	%l1,%g3
	blt	conpt
	nop
	cmp	%l1,%g3
	blt  	fnt81
	nop
	cmp	%l1,%i0
	blt  	conpt
	nop
fnt81:
	cmp	%l1,%i1
	blt  	fnt82
	nop
	cmp	%l1,%i2
	blt  	conpt
	nop
fnt82:
	cmp	%l1,%i0
	blt  	fnt83
	nop
	cmp	%l1,%i1
	blt  	conpt
	nop
fnt83:
	cmp    	%l1,%i3
	bge	conpret
	nop
	set	bvar,%o1
	ld	[%o1+0],%o1
	cmp    	%l1,%o1
	blt  	conpt
	nop
	cmp    	%l1,%i3
	bge  	conpt
	nop
conpret:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
conpt:
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	vectorp
!
	.seg	"data1"   
	.align	4
.vectorp:	.word    0
	._vectorp = 2
	.seg	"text"
	.align	8
	.global	vectorp
vectorp:
	cmp	%l1,%i0
	blt  	fnt84
	nop
	cmp	%l1,%i1
	blt  	vectret
	nop
fnt84:
	mov   	%i2,%l1
vectret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	stringp
!
	.seg	"data1"   
	.align	4
.stringp:	.word    0
	._stringp = 2
	.seg	"text"
	.align	8
	.global	stringp
stringp:
	cmp	%l1,%i1
	blt  	fnt85
	nop
	cmp	%l1,%i2
	blt  	strgret
	nop
fnt85:
	mov   	%i2,%l1
strgret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	listp
!
	.seg	"data1"   
	.align	4
.listp:	.word    0
	._listp = 2
	.seg	"text"
	.align	8
	.global	listp
listp:
	cmp    	%l1,%i2
	beq	listpt
	nop
	cmp    	%l1,%i3
	bge	listpt
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
listpt:
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	nlistp
!
	.seg	"data1"   
	.align	4
.nlistp:	.word    0
	._nlistp = 2
	.seg	"text"
	.align	8
	.global	nlistp
nlistp:
	cmp    	%l1,%i3
	blt	nlistpr
	nop
	mov   	%i2,%l1
nlistpr:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	consp
!
	.seg	"data1"   
	.align	4
.consp:	.word    0
	._consp = 2
	.seg	"text"
	.align	8
	.global	consp
consp:
	cmp    	%l1,%i3
	bge	conspr
	nop
	mov   	%i2,%l1
conspr:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	boundp
!
	.seg	"data1"   
	.align	4
.boundp:	.word    0
	._boundp = 2
	.seg	"text"
	.align	8
	.global	boundp
boundp:
	cmp    	%l1,%i2
	blt  	boundp1
	nop
	cmp    	%l1,%i3
	bge  	boundp1
	nop
	ld	[%l1+0],%l2
	add    	%i2,1*32,%o1
	cmp	%l2,%o1
	bne	boundpt
	nop
boundp1:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
boundpt:
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	lleq
!
	.seg	"data1"   
	.align	4
.lleq:	.word    0
	._lleq = 3
	.seg	"text"
	.align	8
	.global	lleq
lleq:
	cmp	%l1,%l2
	beq	lleqt
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
lleqt:
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	neq
!
	.seg	"data1"   
	.align	4
.neq:	.word    0
	._neq = 3
	.seg	"text"
	.align	8
	.global	neq
neq:
	cmp	%l1,%l2
	bne	neqt
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
neqt:
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	nequal
!
	.seg	"data1"   
	.align	4
.nequal:	.word    0
	._nequal = 3
	.seg	"text"
	.align	8
	.global	nequal
nequal:
	dec  	4,%l7
	set	llnot,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	equal
	.align	4
	nop

!
!	FENTRY	equal
!
	.seg	"data1"   
	.align	4
.equal:	.word    0
	._equal = 3
	.seg	"text"
	.align	8
equal:
	mov   	%l7,%l3
	dec  	4,%l7
	call	equal2
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
equaln:
	mov   	%l3,%l7
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
equalnt:
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%l1,%i2
	bne	equalntr
	nop
	mov   	%l3,%l7
equalntr:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
equal1:
	cmp    	%l2,%i3
	blt	equaln
	nop
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+0],%l1
	dec  	4,%l7
	ld	[%l2+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l2+0],%l2
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	fnt86
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
fnt86:
	cmp	%l1,%l2
	bne	equal11
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%i3
	bge	equal1
	nop
	ba,a	equal2
	.align	4
equal11:
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfs
	nop
	dec  	4,%l7
	call	equal2
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
equal2:
	cmp	%l1,%l2
	bne	equal3
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
equal3:
	cmp    	%l1,%i3
	bge	equal1
	nop
	cmp	%l1,%i2
	blt  	fnt87
	nop
	cmp	%l1,%i3
	blt  	equaln
	nop
fnt87:
	cmp	%l1,%i0
	blt  	fnt88
	nop
	cmp	%l1,%i1
	blt  	equal7
	nop
fnt88:
	cmp	%l1,%i1
	blt  	fnt89
	nop
	cmp	%l1,%i2
	blt  	equal8
	nop
fnt89:
	cmp    	%l2,%g3
	bge	equal4
	nop
	cmp    	%l1,%g3
	blt	equaln
	nop
	ba,a	equal5
	.align	4
equal4:
	cmp    	%l2,%g3
	blt  	equaln
	nop
	cmp    	%l2,%i0
	bge  	equaln
	nop
equal5:
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	set	equalnt,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	gaeqn
	.align	4
equal7:
	cmp    	%l2,%i0
	blt  	equaln
	nop
	cmp    	%l2,%i1
	bge  	equaln
	nop
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	set	equalnt,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	eqvectri
	.align	4
equal8:
	cmp    	%l2,%i1
	blt  	equaln
	nop
	cmp    	%l2,%i2
	bge  	equaln
	nop
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	set	equalnt,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	eqstrgi
	.align	4
savequal:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	call	equal
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	memq
!
	.seg	"data1"   
	.align	4
.memq:	.word    0
	._memq = 3
	.seg	"text"
	.align	8
memq:
	cmp    	%l2,%i3
	blt	memq2
	nop
memq1:
	ld	[%l2+0],%l3
	cmp	%l3,%l1
	beq	memq3
	nop
	ld	[%l2+4],%l2
	cmp    	%l2,%i3
	bge	memq1
	nop
memq2:
	mov   	%i2,%l2
memq3:
	mov   	%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	member
!
	.seg	"data1"   
	.align	4
.member:	.word    0
	._member = 3
	.seg	"text"
	.align	8
member:
	cmp    	%l2,%i3
	bge	memb1
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
memb1:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	ld	[%l2+0],%l2
	dec  	4,%l7
	call	equal
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	bne	memb3
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l2+4],%l2
	cmp    	%l2,%i3
	bge	memb1
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
memb3:
	inc  	4*1,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	tailp
!
	.seg	"data1"   
	.align	4
.tailp:	.word    0
	._tailp = 3
	.seg	"text"
	.align	8
	.global	tailp
tailp:
	ba,a	tailp3
	.align	4
tailp2:
	cmp	%l1,%l2
	beq	tailp9
	nop
	ld	[%l2+4],%l2
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	fnt90
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
fnt90:
tailp3:
	cmp    	%l2,%i3
	bge	tailp2
	nop
	mov   	%i2,%l1
tailp9:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	last
!
	.seg	"data1"   
	.align	4
.last:	.word    0
	._last = 2
	.seg	"text"
	.align	8
	.global	last
last:
	cmp    	%l1,%i3
	blt	lastret
	nop
last1:
	ld	[%l1+4],%l2
	cmp    	%l2,%i3
	blt	lastret
	nop
	ld	[%l2+4],%l1
	cmp    	%l1,%i3
	bge	last1
	nop
	mov   	%l2,%l1
lastret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	nth
!
	.seg	"data1"   
	.align	4
.nth:	.word    0
	._nth = 3
	.seg	"text"
	.align	8
	.global	nth
nth:
	cmp    	%l1,%g3
	bge	ntherr
	nop
	ba,a	nth2
	.align	4
nth1:
	ld	[%l2+4],%l2
nth2:
	cmp    	%l2,%i3
	blt	nthf
	nop
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	deccc  	1,%l1
	and 	%l1,%l0,%l1
	bge  	nth1
	nop
	ld	[%l2+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
nthf:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ntherr:
	set	526*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnia
	.align	4

!
!	FENTRY	nthcdr
!
	.seg	"data1"   
	.align	4
.nthcdr:	.word    0
	._nthcdr = 3
	.seg	"text"
	.align	8
	.global	nthcdr
nthcdr:
	cmp    	%l1,%g3
	bge	nthcerr
	nop
	ba,a	nthc2
	.align	4
nthc1:
	ld	[%l2+4],%l2
nthc2:
	cmp    	%l2,%i3
	blt	nthcf
	nop
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	deccc  	1,%l1
	and 	%l1,%l0,%l1
	bge  	nthc1
	nop
	mov   	%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
nthcf:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
nthcerr:
	set	525*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnia
	.align	4

!
!	FENTRY	lllength
!
	.seg	"data1"   
	.align	4
.lllength:	.word    0
	._lllength = 2
	.seg	"text"
	.align	8
lllength:
	mov   	%g0,%l2
	cmp    	%l1,%i3
	blt	lengt2
	nop
lengt1:
	ld	[%l1+4],%l1
	inc	1,%l2
	cmp    	%l1,%i3
	bge	lengt1
	nop
lengt2:
	mov   	%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llcons
!
	.seg	"data1"   
	.align	4
.llcons:	.word    0
	._llcons = 3
	.seg	"text"
	.align	8
	.global	llcons
llcons:
	cmp    	%i2,%g4
	bne    	fnt91
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt91:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%l2,[%l1+4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	fxcons
!
	.seg	"data1"   
	.align	4
.fxcons:	.word    0
	._fxcons = 3
	.seg	"text"
	.align	8
	.global	fxcons
fxcons:
	cmp    	%i2,%g4
	bne    	fnt92
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt92:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	fncons
!
	.seg	"data1"   
	.align	4
.fncons:	.word    0
	._fncons = 2
	.seg	"text"
	.align	8
	.global	fncons
fncons:
	cmp    	%i2,%g4
	bne    	fnt93
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt93:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	mcons
!
	.seg	"data1"   
	.align	4
.mcons:	.word    0
	._mcons = 5
	.seg	"text"
	.align	8
	.global	mcons
mcons:
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	mconsf
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	mcons2
	.align	4
mcons1:
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	fnt94
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt94:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
mcons2:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	mcons1
	nop
	mov  	0,%l4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mconsf:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	list
!
	.seg	"data1"   
	.align	4
.list:	.word    0
	._list = 5
	.seg	"text"
	.align	8
list:
	mov   	%i2,%l1
	ba,a	lists2
	.align	4
lists1:
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	fnt95
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt95:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
lists2:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	lists1
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	evlis
!
	.seg	"data1"   
	.align	4
.evlis:	.word    0
	._evlis = 2
	.seg	"text"
	.align	8
evlis:
	cmp    	%l1,%i3
	blt	fntret
	nop
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	fnt96
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt96:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	dec  	4,%l7
	st   	%l1,[%l7+0]
list1:
	cmp    	%l3,%i3
	blt	list2
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	ld	[%l3+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l3+0],%l1
	dec  	4,%l7
	call	evala1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	fnt97
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt97:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	ld	[%l7+0],%l2
	inc  	4,%l7
	st   	%l1,[%l2+4]
	ba,a	list1
	.align	4
list2:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	kwote
!
	.seg	"data1"   
	.align	4
.kwote:	.word    0
	._kwote = 2
	.seg	"text"
	.align	8
kwote:
	cmp    	%i2,%g4
	bne    	fnt98
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt98:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	cmp    	%i2,%g4
	bne    	fnt99
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt99:
	set	434*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	makelist
!
	.seg	"data1"   
	.align	4
.makelist:	.word    0
	._makelist = 3
	.seg	"text"
	.align	8
	.global	makelist
makelist:
	cmp    	%l1,%g3
	bge	makeler
	nop
	mov   	%i2,%l3
	ba,a	makel3
	.align	4
makel2:
	cmp    	%i2,%g4
	bne    	fnt100
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt100:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l3,[%o2+4]
	mov   	%o2,%l3
makel3:
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	deccc  	1,%l1
	and 	%l1,%l0,%l1
	bge  	makel2
	nop
	mov   	%l3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
makeler:
	set	535*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnia
	.align	4

!
!	FENTRY	reverse
!
	.seg	"data1"   
	.align	4
.reverse:	.word    0
	._reverse = 2
	.seg	"text"
	.align	8
	.global	reverse
reverse:
	mov   	%i2,%l2
	ba,a	rev2
	.align	4
rev1:
	ld	[%l1+0],%l3
	ld	[%l1+4],%l1
	cmp    	%i2,%g4
	bne    	fnt101
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt101:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l2,[%o2+4]
	mov   	%o2,%l2
rev2:
	cmp    	%l1,%i3
	bge	rev1
	nop
	mov   	%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	appnd1
!
	.seg	"data1"   
	.align	4
.appnd1:	.word    0
	._appnd1 = 3
	.seg	"text"
	.align	8
	.global	appnd1
appnd1:
	cmp    	%i2,%g4
	bne    	fnt102
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt102:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	2,%l4
	ba,a	append
	.align	4

!
!	FENTRY	append
!
	.seg	"data1"   
	.align	4
.append:	.word    0
	._append = 5
	.seg	"text"
	.align	8
	.global	append
append:
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	appendf
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	append4
	.align	4
append1:
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l2,%i3
	blt	append4
	nop
	cmp    	%i2,%g4
	bne    	fnt103
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt103:
	ld	[%l2+0],%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	dec  	4,%l7
	st   	%l1,[%l7+0]
	ba,a	append3
	.align	4
append2:
	cmp    	%i2,%g4
	bne    	fnt104
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt104:
	ld	[%l2+0],%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	ld	[%l1+4],%o0
	st   	%o0,[%o2+4]
	st   	%o2,[%l1+4]
	ld	[%l1+4],%l1
append3:
	ld	[%l2+4],%l2
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	fnt105
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
fnt105:
	cmp    	%l2,%i3
	bge	append2
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
append4:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	append1
	nop
	mov  	0,%l4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
appendf:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	remq
!
	.seg	"data1"   
	.align	4
.remq:	.word    0
	._remq = 3
	.seg	"text"
	.align	8
	.global	remq
remq:
	cmp    	%l2,%i3
	bge	remq6
	nop
	mov   	%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
remq6:
	ld	[%l2+0],%l3
	ld	[%l2+4],%l2
	cmp	%l3,%l1
	beq	remq
	nop
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	fnt106
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
fnt106:
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfs
	nop
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	call	remq
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	fnt107
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt107:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llremove
!
	.seg	"data1"   
	.align	4
.llremove:	.word    0
	._llremove = 3
	.seg	"text"
	.align	8
	.global	llremove
llremove:
	mov   	%l2,%l3
remv1:
	cmp    	%l3,%i3
	bge	remv4
	nop
	mov   	%l3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
remv4:
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfs
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	ld	[%l3+0],%l2
	dec  	4,%l7
	call	savequal
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l3+4],%l3
	cmp    	%l4,%i2
	bne	remv1
	nop
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	call	remv1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	fnt108
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt108:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	copylist
!
	.seg	"data1"   
	.align	4
.copylist:	.word    0
	._copylist = 2
	.seg	"text"
	.align	8
	.global	copylist
copylist:
	cmp    	%l1,%i3
	blt	fntret
	nop
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	fnt109
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
fnt109:
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfs
	nop
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+0],%l1
	dec  	4,%l7
	call	copylist
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	dec  	4,%l7
	call	copylist
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	fnt110
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt110:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	copy
!
	.seg	"data1"   
	.align	4
.copy:	.word    0
	._copy = 2
	.seg	"text"
	.align	8
copy:
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	fnt111
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
fnt111:
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfs
	nop
	cmp    	%l1,%i3
	blt	copy3
	nop
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	sub	%l1,%i3,%o2
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
	bne  	copy2
	nop
	ld	[%l1+0],%l1
	dec  	4,%l7
	call	copy
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	dec  	4,%l7
	call	copy
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	fnt112
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt112:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
copy2:
	ld	[%l1+0],%l1
	dec  	4,%l7
	call	copy
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	dec  	4,%l7
	call	copy
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	fnt113
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt113:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	sub	%l1,%i3,%o2
	srl	%o2,3,%o2
	and	%o2,31,%o1
	srl	%o2,5,%o2
	sll	%o2,2,%o3
	set	btbin,%o0
	ld	[%o0+0],%o0
	add	%o0,%o3,%o0
	ld	[%o0+0],%o2
	set	1,%o3
	sll	%o3,%o1,%o3
	or	%o2,%o3,%o2
	st   	%o2,[%o0+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
copy3:
	cmp    	%l1,%i1
	blt  	copy4
	nop
	cmp    	%l1,%i2
	bge  	copy4
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	ld	[%l1+0],%o0
	ld	[%o0+4],%l2
	dec  	4,%l7
	call	strgallc
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l3+4],%o3
	st   	%o3,[%l1+4]
	ld	[%l3+0],%o1
	add	%o1,8+0,%o1
	ld	[%l1+0],%o2
	add	%o2,8+0,%o2
	mov   	%l2,%o0
	cmp    	%o2,%o1
	blt     gfnt114
	nop
	add    	%o1,%o0,%o1
	ba    ffnt114
	add    	%o2,%o0,%o2
	.align	4
qfnt114:	ldub   	[%o1+0],%o3
	stb  	%o3,[%o2+0]
ffnt114:	dec  	%o1
	deccc  	%o0
	bge      qfnt114
	dec  	%o2
	ba,a    efnt114
rfnt114:
	stb  	%o3,[%o2+0]
	inc  	%o2
	inc  	%o1
gfnt114:	deccc  	%o0
	bge,a    rfnt114
	ldub   	[%o1+0],%o3
efnt114:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
copy4:
	cmp    	%l1,%i0
	blt  	fntret
	nop
	cmp    	%l1,%i1
	bge  	fntret
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	ld	[%l1+0],%o0
	ld	[%o0+4],%l1
	dec  	4,%l7
	st   	%l1,[%l7+0]
	mov   	%i2,%l2
	dec  	4,%l7
	call	makevect
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l2
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l3+4],%o3
	st   	%o3,[%l1+4]
	ba,a	copy6
	.align	4
copy5:
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	ld	[%l3+0],%o1
	inc  	8,%o1
	mov   	%l4,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l1
	dec  	4,%l7
	call	copy
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l2+0],%o1
	inc  	8,%o1
	mov   	%l4,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	st   	%l1,[%o1+0]
copy6:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	copy5
	nop
	mov   	%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	firstn
!
	.seg	"data1"   
	.align	4
.firstn:	.word    0
	._firstn = 3
	.seg	"text"
	.align	8
	.global	firstn
firstn:
	set	543*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	firserr1
	nop
	cmp    	%l2,%i3
	blt	firserr2
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	ble	firsf
	nop
	ld	[%l2+0],%l3
	cmp    	%i2,%g4
	bne    	fnt115
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt115:
	st   	%l3,[%g4+0]
	mov   	%g4,%l3
	ld	[%g4+4],%g4
	st   	%i2,[%l3+4]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	ba,a	firs1
	.align	4
firs0:
	ld	[%l2+4],%l2
	cmp    	%l2,%i3
	blt	firs3
	nop
	ld	[%l2+0],%l3
	cmp    	%i2,%g4
	bne    	fnt116
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt116:
	st   	%l3,[%g4+0]
	mov   	%g4,%l3
	ld	[%g4+4],%g4
	st   	%i2,[%l3+4]
	st   	%l3,[%l4+4]
firs1:
	mov   	%l3,%l4
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	dec  	%l1
	cmp   	%l1,0
	bgt  	firs0
	nop
	mov  	0,%l1
firs3:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
firsf:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
firserr1:
	mov   	%l4,%l2
	ba,a	errnia
	.align	4
firserr2:
	mov   	%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	lastn
!
	.seg	"data1"   
	.align	4
.lastn:	.word    0
	._lastn = 3
	.seg	"text"
	.align	8
	.global	lastn
lastn:
	set	544*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	firserr1
	nop
	cmp    	%l2,%i3
	blt	firserr2
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	ble	lastnf
	nop
	mov   	%l2,%l3
lastn0:
	ld	[%l2+4],%l2
	mov   	%l1,%o1
	cmp   	%o1,0
	beq	lastn1
	nop
	dec	1,%l1
	ba,a	lastn2
	.align	4
lastn1:
	ld	[%l3+4],%l3
lastn2:
	cmp    	%l2,%i3
	bge	lastn0
	nop
	dec  	4,%l7
	st   	%l3,[%l7+0]
	mov   	%i2,%l1
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	2,%l4
	ba,a	append
	.align	4
lastnf:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	subst
!
	.seg	"data1"   
	.align	4
.subst:	.word    0
	._subst = 4
	.seg	"text"
	.align	8
	.global	subst
subst:
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfs
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	mov   	%l3,%l1
	ld	[%l7+0],%l3
	inc  	4,%l7
substt2:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	savequal
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	substt4
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	mov   	%l3,%l1
substt3:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
substt4:
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%i3
	blt	substt3
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+0],%l1
	dec  	4,%l7
	call	substt2
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	dec  	4,%l7
	call	substt2
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%o0
	st   	%l2,[%l7+0]
	mov 	%o0,%l2
	ld	[%l2+0],%o0
	cmp	%o0,%l4
	bne	substt8
	nop
	ld	[%l2+4],%o0
	cmp	%o0,%l1
	bne	substt8
	nop
	mov   	%l2,%l1
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
substt8:
	cmp    	%i2,%g4
	bne    	fnt117
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt117:
	st   	%l4,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	oblist
!
	.seg	"data1"   
	.align	4
.oblist:	.word    0
	._oblist = 5
	.seg	"text"
	.align	8
	.global	oblist
oblist:
	mov   	%i2,%l1
	mov   	%i2,%l2
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	oblist0
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	oblist0
	nop
	ld	[%l7+0],%l3
	inc  	4,%l7
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	oblisp0
	nop
	set	2,%l1
	set	546*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4
oblist0:
	cmp    	%l2,%i2
	blt  	obliser1
	nop
	cmp    	%l2,%i3
	bge  	obliser1
	nop
	set	hashtab,%o0
	ld	[%o0+0],%o0
	ld	[%o0+0],%o0
	ld	[%o0+4],%l4
	dec	1,%l4
oblist1:
	set	hashtab,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l4,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l4
	ba,a	oblist8
	.align	4
oblist2:
	mov   	%l4,%l3
	ld	[%l4+28],%o0
	cmp	%o0,%i1
	blt  	fnt118
	nop
	cmp	%o0,%i2
	blt  	oblist4
	nop
fnt118:
oblist3:
	ld	[%l4+28],%l4
oblist4:
oblist5:
	cmp    	%l2,%i2
	beq	oblist6
	nop
	ld	[%l4+12],%o0
	cmp	%o0,%l2
	bne	oblist7
	nop
oblist6:
	cmp    	%i2,%g4
	bne    	fnt119
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt119:
	st   	%l4,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
oblist7:
	cmp	%l4,%l3
	bne	oblist3
	nop
	ld	[%l4+20],%l4
oblist8:
	cmp	%l4,%i2
	blt  	fnt120
	nop
	cmp	%l4,%i3
	blt  	oblist2
	nop
fnt120:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	oblist1
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
oblisp0:
	cmp    	%l2,%i2
	blt  	obliser1
	nop
	cmp    	%l2,%i3
	bge  	obliser1
	nop
	cmp    	%l3,%i2
	blt  	obliser2
	nop
	cmp    	%l3,%i3
	bge  	obliser2
	nop
	mov   	%l2,%l4
	ld	[%l4+28],%o0
	cmp	%o0,%i1
	blt  	fnt121
	nop
	cmp	%o0,%i2
	blt  	oblisp3
	nop
fnt121:
oblisp2:
	ld	[%l4+28],%l4
oblisp3:
	cmp    	%l3,%i2
	beq	oblisp4
	nop
	ld	[%l4+12],%o0
	cmp	%o0,%l3
	bne	oblisp5
	nop
oblisp4:
	cmp    	%i2,%g4
	bne    	fnt122
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt122:
	st   	%l4,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
oblisp5:
	cmp	%l4,%l2
	bne	oblisp2
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
obliser1:
	mov   	%l2,%l1
	ba,a	obliser3
	.align	4
obliser2:
	mov   	%l3,%l1
obliser3:
	set	546*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4

!
!	FENTRY	boblist
!
	.seg	"data1"   
	.align	4
.boblist:	.word    0
	._boblist = 5
	.seg	"text"
	.align	8
	.global	boblist
boblist:
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	boblon
	nop
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	boblis1
	nop
	set	1,%l1
	set	547*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4
boblis1:
	mov   	%i2,%l4
	set	hashtab,%o0
	ld	[%o0+0],%o0
	ld	[%o0+0],%o0
	ld	[%o0+4],%l1
	ba,a	boblis9
	.align	4
boblis2:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	boblon2
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%i2,%g4
	bne    	fnt123
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt123:
	st   	%l1,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l4,[%o2+4]
	mov   	%o2,%l4
	ld	[%l7+0],%l1
	inc  	4,%l7
boblis9:
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	deccc  	1,%l1
	and 	%l1,%l0,%l1
	bge  	boblis2
	nop
	mov   	%l4,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
boblon:
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%g3
	blt	boblon1
	nop
bobloer:
	set	547*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnia
	.align	4
bobloer2:
	set	547*32,%l2
	add    	%i2,%l2,%l2
	ba,a	erroob
	.align	4
boblon1:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	bobloer2
	nop
	set	hashtab,%o0
	ld	[%o0+0],%o0
	ld	[%o0+0],%o0
	ld	[%o0+4],%l2
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bge	bobloer2
	nop
boblon2:
	set	hashtab,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l1,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l2
	mov   	%i2,%l1
	ba,a	boblon8
	.align	4
boblon3:
	add    	%i2,1*32,%o1
	cmp	%l2,%o1
	beq	boblon7
	nop
	ld	[%l2+28],%o0
	cmp	%o0,%i1
	blt  	fnt124
	nop
	cmp	%o0,%i2
	blt  	boblon6
	nop
fnt124:
	dec  	4,%l7
	st   	%l4,[%l7+0]
	mov   	%i2,%l4
	mov   	%l2,%l3
boblon4:
	ld	[%l3+28],%l3
	cmp    	%i2,%g4
	bne    	fnt125
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt125:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l4,[%o2+4]
	mov   	%o2,%l4
	cmp	%l3,%l2
	bne	boblon4
	nop
	cmp    	%i2,%g4
	bne    	fnt126
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt126:
	st   	%l4,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l7+0],%l4
	inc  	4,%l7
	ba,a	boblon7
	.align	4
boblon6:
	cmp    	%i2,%g4
	bne    	fnt127
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt127:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
boblon7:
	ld	[%l2+20],%l2
boblon8:
	cmp	%l2,%i2
	blt  	fnt128
	nop
	cmp	%l2,%i3
	blt  	boblon3
	nop
fnt128:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	lhoblist
!
	.seg	"data1"   
	.align	4
.lhoblist:	.word    0
	._lhoblist = 2
	.seg	"text"
	.align	8
	.global	lhoblist
lhoblist:
	mov   	%l1,%l2
	set	548*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa2
	st   	%o7,[%l7+0]
	.align	4
	mov   	%i2,%l1
	set	hashtab,%o0
	ld	[%o0+0],%o0
	ld	[%o0+0],%o0
	ld	[%o0+4],%l4
	dec	1,%l4
lhoblist1:
	set	hashtab,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l4,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l4
	ba,a	lhoblist8
	.align	4
lhoblist2:
	mov   	%l4,%l3
	ld	[%l4+28],%o0
	cmp	%o0,%i1
	blt  	fnt129
	nop
	cmp	%o0,%i2
	blt  	lhoblist4
	nop
fnt129:
lhoblist3:
	ld	[%l4+28],%l4
lhoblist4:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	set	lhoblist5,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	set	2,%l4
	ba,a	ffindex
	.align	4
lhoblist5:
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l1,%i2
	bne	lhoblist6
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	lhoblist7
	.align	4
lhoblist6:
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	fnt130
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt130:
	st   	%l4,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
lhoblist7:
	cmp	%l4,%l3
	bne	lhoblist3
	nop
	ld	[%l4+20],%l4
lhoblist8:
	cmp	%l4,%i2
	blt  	fnt131
	nop
	cmp	%l4,%i3
	blt  	lhoblist2
	nop
fnt131:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	lhoblist1
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	rplaca
!
	.seg	"data1"   
	.align	4
.rplaca:	.word    0
	._rplaca = 3
	.seg	"text"
	.align	8
	.global	rplaca
rplaca:
	cmp    	%l1,%i3
	blt	rplaca1
	nop
	st   	%l2,[%l1+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
rplaca1:
	set	549*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnla
	.align	4

!
!	FENTRY	rplacd
!
	.seg	"data1"   
	.align	4
.rplacd:	.word    0
	._rplacd = 3
	.seg	"text"
	.align	8
	.global	rplacd
rplacd:
	cmp    	%l1,%i3
	blt	rplacd1
	nop
	st   	%l2,[%l1+4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
rplacd1:
	set	550*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnla
	.align	4

!
!	FENTRY	rplac
!
	.seg	"data1"   
	.align	4
.rplac:	.word    0
	._rplac = 4
	.seg	"text"
	.align	8
	.global	rplac
rplac:
	cmp    	%l1,%i3
	blt	rplac1
	nop
	st   	%l2,[%l1+0]
	st   	%l3,[%l1+4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
rplac1:
	set	551*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnla
	.align	4

!
!	FENTRY	displace
!
	.seg	"data1"   
	.align	4
.displace:	.word    0
	._displace = 3
	.seg	"text"
	.align	8
displace:
	cmp    	%l1,%i3
	blt	displ2
	nop
	cmp    	%l2,%i3
	bge	displ1
	nop
	set	440*32,%o3
	add    	%i2,%o3,%o3
	st   	%o3,[%l1+0]
	cmp    	%i2,%g4
	bne    	fnt132
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt132:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
	st   	%l2,[%l1+4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
displ1:
	ld	[%l2+0],%o3
	st   	%o3,[%l1+0]
	ld	[%l2+4],%o3
	st   	%o3,[%l1+4]
	sub	%l2,%i3,%o2
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
	beq  	displret
	nop
	sub	%l1,%i3,%o2
	srl	%o2,3,%o2
	and	%o2,31,%o1
	srl	%o2,5,%o2
	sll	%o2,2,%o3
	set	btbin,%o0
	ld	[%o0+0],%o0
	add	%o0,%o3,%o0
	ld	[%o0+0],%o2
	set	1,%o3
	sll	%o3,%o1,%o3
	or	%o2,%o3,%o2
	st   	%o2,[%o0+0]
displret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
displ2:
	set	553*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnla
	.align	4

!
!	FENTRY	placdl
!
	.seg	"data1"   
	.align	4
.placdl:	.word    0
	._placdl = 3
	.seg	"text"
	.align	8
	.global	placdl
placdl:
	cmp    	%l1,%i3
	blt	placd1
	nop
	cmp    	%i2,%g4
	bne    	fnt133
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt133:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
	st   	%l2,[%l1+4]
	mov   	%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
placd1:
	set	552*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnla
	.align	4

!
!	FENTRY	setq
!
	.seg	"data1"   
	.align	4
.setq:	.word    0
	._setq = 6
	.seg	"text"
	.align	8
	.global	setq
setq:
	mov   	%l1,%l2
	cmp    	%l2,%i3
	bge	setq1
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
setq1:
	mov   	%l2,%l1
	dec  	4,%l7
	ld	[%l1+0],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+4],%l1
	cmp    	%l1,%i3
	blt	setqer2
	nop
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	set	bvar,%o1
	ld	[%o1+0],%o1
	cmp    	%l3,%o1
	blt  	setqer1
	nop
	cmp    	%l3,%i3
	bge  	setqer1
	nop
	st   	%l1,[%l3+0]
	cmp    	%l2,%i3
	bge	setq1
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
setqer1:
	mov   	%l3,%l1
	set	554*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnva
	.align	4
setqer2:
	set	2,%l1
	set	554*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4

!
!	FENTRY	fset
!
	.seg	"data1"   
	.align	4
.fset:	.word    0
	._fset = 3
	.seg	"text"
	.align	8
	.global	fset
fset:
	set	bvar,%o1
	ld	[%o1+0],%o1
	cmp    	%l1,%o1
	blt  	seterr
	nop
	cmp    	%l1,%i3
	bge  	seterr
	nop
	st   	%l2,[%l1+0]
	mov   	%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
seterr:
	set	555*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnva
	.align	4

!
!	FENTRY	setqq
!
	.seg	"data1"   
	.align	4
.setqq:	.word    0
	._setqq = 6
	.seg	"text"
	.align	8
	.global	setqq
setqq:
	mov   	%i2,%l3
	ba,a	setqq3
	.align	4
setqq1:
	ld	[%l1+0],%l2
	set	bvar,%o1
	ld	[%o1+0],%o1
	cmp    	%l2,%o1
	blt  	setqqer1
	nop
	cmp    	%l2,%i3
	bge  	setqqer1
	nop
	ld	[%l1+4],%l1
	cmp    	%l1,%i3
	blt	setqqer2
	nop
	ld	[%l1+0],%l3
	st   	%l3,[%l2+0]
	ld	[%l1+4],%l1
setqq3:
	cmp    	%l1,%i3
	bge	setqq1
	nop
	mov   	%l3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
setqqer1:
	mov   	%l2,%l1
	set	556*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnva
	.align	4
setqqer2:
	set	2,%l1
	set	556*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4

!
!	FENTRY	psetq
!
	.seg	"data1"   
	.align	4
.psetq:	.word    0
	._psetq = 6
	.seg	"text"
	.align	8
	.global	psetq
psetq:
	mov   	%g0,%l4
	ba,a	psetq5
	.align	4
psetq2:
	ld	[%l1+0],%l2
	set	bvar,%o1
	ld	[%o1+0],%o1
	cmp    	%l2,%o1
	blt  	psetqerr
	nop
	cmp    	%l2,%i3
	bge  	psetqerr
	nop
	dec  	4,%l7
	st   	%l2,[%l7+0]
	ld	[%l1+4],%l1
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	ld	[%l1+4],%l1
	inc	1,%l4
psetq5:
	cmp    	%l1,%i3
	bge	psetq2
	nop
	ba,a	psetq4
	.align	4
psetq3:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	st   	%l1,[%l2+0]
psetq4:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	psetq3
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
psetqerr:
	mov   	%l2,%l1
	set	557*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnva
	.align	4

!
!	FENTRY	deset
!
	.seg	"data1"   
	.align	4
.deset:	.word    0
	._deset = 3
	.seg	"text"
	.align	8
deset:
	set	558*32,%l4
	add    	%i2,%l4,%l4
deset0:
	set	savea4,%o4
	st   	%l4,[%o4+0]
	dec  	4,%l7
	call	deset4
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
deset2:
	cmp    	%l2,%i3
	blt	deset6
	nop
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	ld	[%l2+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+0],%l1
	ld	[%l2+0],%l2
	dec  	4,%l7
	call	deset5
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
deset4:
	cmp    	%l1,%i2
	beq	fntret
	nop
deset5:
	cmp    	%l1,%i3
	bge	deset2
	nop
	set	bvar,%o1
	ld	[%o1+0],%o1
	cmp	%l1,%o1
	blt  	fnt134
	nop
	cmp	%l1,%i3
	blt  	deset8
	nop
fnt134:
	set	savea4,%l2
	ld	[%l2+0],%l2
	ba,a	errbpa
	.align	4
deset6:
	cmp    	%i2,%g4
	bne    	fnt135
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt135:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
	cmp    	%i2,%g4
	bne    	fnt136
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt136:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%l2,[%l1+4]
	set	savea4,%l2
	ld	[%l2+0],%l2
	ba,a	errilb
	.align	4
deset8:
	st   	%l2,[%l1+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	desetq
!
	.seg	"data1"   
	.align	4
.desetq:	.word    0
	._desetq = 6
	.seg	"text"
	.align	8
	.global	desetq
desetq:
	dec  	4,%l7
	ld	[%l1+0],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+4],%l1
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l2
	ld	[%l7+0],%l1
	inc  	4,%l7
	set	559*32,%l4
	add    	%i2,%l4,%l4
	ba,a	deset0
	.align	4

!
!	FENTRY	cirlist
!
	.seg	"data1"   
	.align	4
.cirlist:	.word    0
	._cirlist = 5
	.seg	"text"
	.align	8
	.global	cirlist
cirlist:
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	cirlistf
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	fnt137
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt137:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	mov   	%l1,%l3
	ba,a	cirlist3
	.align	4
cirlist2:
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	fnt138
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt138:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
cirlist3:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	cirlist2
	nop
	mov  	0,%l4
	st   	%l1,[%l3+4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
cirlistf:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	nreconc
!
	.seg	"data1"   
	.align	4
.nreconc:	.word    0
	._nreconc = 3
	.seg	"text"
	.align	8
nreconc:
	ba,a	frev2
	.align	4
frev1:
	ld	[%l1+4],%l3
	st   	%l2,[%l1+4]
	cmp    	%l3,%i3
	blt	frevret
	nop
	ld	[%l3+4],%l2
	st   	%l1,[%l3+4]
	cmp    	%l2,%i3
	blt	frev9
	nop
	ld	[%l2+4],%l1
	st   	%l3,[%l2+4]
frev2:
	cmp    	%l1,%i3
	bge	frev1
	nop
	mov   	%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
frev9:
	mov   	%l3,%l1
frevret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	nsubst
!
	.seg	"data1"   
	.align	4
.nsubst:	.word    0
	._nsubst = 4
	.seg	"text"
	.align	8
	.global	nsubst
nsubst:
	mov   	%l1,%l4
nsloop:
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfs
	nop
	dec  	4,%l7
	st   	%l3,[%l7+0]
	mov   	%l3,%l1
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	call	savequal
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	cmp    	%l1,%i2
	beq	nsub0
	nop
	mov   	%l4,%l1
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
nsub2:
	ld	[%l3+4],%l3
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	fnt139
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
fnt139:
nsub0:
	cmp    	%l3,%i3
	blt	nsubret
	nop
	dec  	4,%l7
	st   	%l3,[%l7+0]
	ld	[%l3+0],%l3
	dec  	4,%l7
	call	nsloop
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
	st   	%l1,[%l3+0]
nsub1:
	ld	[%l3+4],%l1
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	call	savequal
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	cmp    	%l1,%i2
	beq	nsub2
	nop
nsub3:
	st   	%l4,[%l3+4]
nsubret:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	delq
!
	.seg	"data1"   
	.align	4
.delq:	.word    0
	._delq = 3
	.seg	"text"
	.align	8
	.global	delq
delq:
delq0:
	cmp    	%l2,%i3
	blt	delqret
	nop
	ld	[%l2+0],%o0
	cmp	%o0,%l1
	bne	delq1
	nop
	ld	[%l2+4],%l2
	ba,a	delq0
	.align	4
delq1:
	mov   	%l2,%l4
delq2:
	mov   	%l4,%l3
delq3:
	ld	[%l4+4],%l4
	cmp    	%l4,%i3
	blt	delqret
	nop
	ld	[%l4+0],%o0
	cmp	%o0,%l1
	bne	delq2
	nop
	ld	[%l4+4],%o3
	st   	%o3,[%l3+4]
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	fnt140
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
fnt140:
	ba,a	delq3
	.align	4
delqret:
	mov   	%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	lldelete
!
	.seg	"data1"   
	.align	4
.lldelete:	.word    0
	._lldelete = 3
	.seg	"text"
	.align	8
	.global	lldelete
lldelete:
	ba,a	dele4
	.align	4
dele0:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	ld	[%l2+0],%l2
	dec  	4,%l7
	call	equal
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	dele1
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l2+4],%l2
dele4:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	cmp    	%l2,%i3
	bge	dele0
	nop
deleret:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
dele1:
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l4
dele2:
	mov   	%l4,%l3
dele3:
	ld	[%l4+4],%l4
	cmp    	%l4,%i3
	blt	deleret
	nop
	ld	[%l4+0],%l1
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	call	savequal
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	cmp    	%l1,%i2
	beq	dele2
	nop
	ld	[%l4+4],%o3
	st   	%o3,[%l3+4]
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	fnt141
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
fnt141:
	ba,a	dele3
	.align	4

!
!	FENTRY	nreverse
!
	.seg	"data1"   
	.align	4
.nreverse:	.word    0
	._nreverse = 2
	.seg	"text"
	.align	8
nreverse:
	mov   	%i2,%l2
	cmp    	%l1,%i3
	blt	nrev2
	nop
nrev1:
	ld	[%l1+4],%l3
	st   	%l2,[%l1+4]
	cmp    	%l3,%i3
	blt	nrev9
	nop
	ld	[%l3+4],%l2
	st   	%l1,[%l3+4]
	cmp    	%l2,%i3
	blt	nrev3
	nop
	ld	[%l2+4],%l1
	st   	%l3,[%l2+4]
	cmp    	%l1,%i3
	bge	nrev1
	nop
nrev2:
	mov   	%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
nrev3:
	mov   	%l3,%l1
nrev9:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	nextl
!
	.seg	"data1"   
	.align	4
.nextl:	.word    0
	._nextl = 6
	.seg	"text"
	.align	8
	.global	nextl
nextl:
	ld	[%l1+0],%l2
	set	bvar,%o1
	ld	[%o1+0],%o1
	cmp    	%l2,%o1
	blt  	nextlerr
	nop
	cmp    	%l2,%i3
	bge  	nextlerr
	nop
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l2+0],%l3
	cmp    	%l3,%i3
	bge	nextl4
	nop
	cmp    	%l3,%i2
	beq	nextl4
	nop
	mov   	%l2,%l1
	set	566*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnla
	.align	4
nextl4:
	ld	[%l3+0],%l1
	ld	[%l3+4],%l3
	st   	%l3,[%l2+0]
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l2,%i3
	blt	nextl9
	nop
	ld	[%l2+0],%l2
	set	bvar,%o1
	ld	[%o1+0],%o1
	cmp    	%l2,%o1
	blt  	nextlerr
	nop
	cmp    	%l2,%i3
	bge  	nextlerr
	nop
	st   	%l1,[%l2+0]
nextl9:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
nextlerr:
	mov   	%l2,%l1
	set	566*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnva
	.align	4

!
!	FENTRY	newl
!
	.seg	"data1"   
	.align	4
.newl:	.word    0
	._newl = 6
	.seg	"text"
	.align	8
	.global	newl
newl:
	dec  	4,%l7
	ld	[%l1+0],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+4],%l1
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	set	bvar,%o1
	ld	[%o1+0],%o1
	cmp    	%l2,%o1
	blt  	newlerr
	nop
	cmp    	%l2,%i3
	bge  	newlerr
	nop
	ld	[%l2+0],%l3
	add    	%i2,1*32,%o1
	cmp	%l3,%o1
	beq	newlerr1
	nop
	cmp    	%i2,%g4
	bne    	fnt142
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt142:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%l3,[%l1+4]
	st   	%l1,[%l2+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
newlerr:
	mov   	%l2,%l1
	set	567*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnva
	.align	4
newlerr1:
	mov   	%l2,%l1
	set	567*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errudv
	.align	4

!
!	FENTRY	newr
!
	.seg	"data1"   
	.align	4
.newr:	.word    0
	._newr = 6
	.seg	"text"
	.align	8
	.global	newr
newr:
	ld	[%l1+0],%l2
	set	bvar,%o1
	ld	[%o1+0],%o1
	cmp    	%l2,%o1
	blt  	newrerr
	nop
	cmp    	%l2,%i3
	bge  	newrerr
	nop
	dec  	4,%l7
	st   	%l2,[%l7+0]
	ld	[%l1+4],%l1
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l2+0],%l3
	cmp    	%i2,%g4
	bne    	fnt143
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt143:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	cmp    	%l3,%i3
	bge	newr3
	nop
	st   	%l1,[%l2+0]
	ba,a	newr9
	.align	4
newr3:
	dec  	4,%l7
	st   	%l3,[%l7+0]
	ba,a	newr6
	.align	4
newr4:
	mov   	%l4,%l3
newr6:
	ld	[%l3+4],%l4
	cmp    	%l4,%i3
	bge	newr4
	nop
	st   	%l1,[%l3+4]
	ld	[%l7+0],%l1
	inc  	4,%l7
newr9:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
newrerr:
	mov   	%l2,%l1
	set	568*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnva
	.align	4

!
!	FENTRY	nconc1
!
	.seg	"data1"   
	.align	4
.nconc1:	.word    0
	._nconc1 = 3
	.seg	"text"
	.align	8
	.global	nconc1
nconc1:
	cmp    	%i2,%g4
	bne    	fnt144
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt144:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	2,%l4
	ba,a	nconc
	.align	4
	nop

!
!	FENTRY	nconc
!
	.seg	"data1"   
	.align	4
.nconc:	.word    0
	._nconc = 5
	.seg	"text"
	.align	8
	.global	nconc
nconc:
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	fnconcf
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	fnconc4
	.align	4
fnconc1:
	ld	[%l7+0],%l2
	cmp    	%l2,%i3
	bge	fnconc3
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
	ba,a	fnconc4
	.align	4
fnconc2:
	ld	[%l2+4],%l2
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	fnt145
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
fnt145:
fnconc3:
	ld	[%l2+4],%o0
	cmp    	%o0,%i3
	bge	fnconc2
	nop
	st   	%l1,[%l2+4]
	ld	[%l7+0],%l1
	inc  	4,%l7
fnconc4:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	fnconc1
	nop
	mov  	0,%l4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
fnconcf:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	acons
!
	.seg	"data1"   
	.align	4
.acons:	.word    0
	._acons = 4
	.seg	"text"
	.align	8
	.global	acons
acons:
	dec  	4,%l7
	st   	%l3,[%l7+0]
	cmp    	%i2,%g4
	bne    	fnt146
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt146:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%l2,[%l1+4]
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	fnt147
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt147:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%l2,[%l1+4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	pairlis
!
	.seg	"data1"   
	.align	4
.pairlis:	.word    0
	._pairlis = 4
	.seg	"text"
	.align	8
	.global	pairlis
pairlis:
	mov   	%i2,%l4
	cmp    	%i2,%g4
	bne    	fnt148
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt148:
	st   	%l4,[%g4+0]
	mov   	%g4,%l4
	ld	[%g4+4],%g4
	st   	%i2,[%l4+4]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	ba,a	pairlis5
	.align	4
pairlis2:
	ld	[%l2+0],%l3
	cmp    	%i2,%g4
	bne    	fnt149
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt149:
	ld	[%l1+0],%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l3,[%o2+4]
	mov   	%o2,%l3
	cmp    	%i2,%g4
	bne    	fnt150
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt150:
	st   	%l3,[%g4+0]
	mov   	%g4,%l3
	ld	[%g4+4],%g4
	st   	%i2,[%l3+4]
	st   	%l3,[%l4+4]
	mov   	%l3,%l4
	ld	[%l1+4],%l1
	ld	[%l2+4],%l2
pairlis5:
	cmp    	%l1,%i3
	blt	pairlis8
	nop
	cmp    	%l2,%i3
	bge	pairlis2
	nop
	cmp    	%l2,%i2
	beq	pairlis2
	nop
	mov   	%l2,%l1
	set	572*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnla
	.align	4
pairlis8:
	ld	[%l7+0],%l1
	inc  	4,%l7
	st   	%l1,[%l4+4]
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l1+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	assq
!
	.seg	"data1"   
	.align	4
.assq:	.word    0
	._assq = 3
	.seg	"text"
	.align	8
	.global	assq
assq:
	cmp    	%l2,%i3
	blt	assq3
	nop
	mov   	%l1,%l3
assq1:
	ld	[%l2+0],%l1
	cmp    	%l1,%i3
	blt	assq2
	nop
	ld	[%l1+0],%l4
	cmp	%l4,%l3
	beq	assqret
	nop
assq2:
	ld	[%l2+4],%l2
	cmp    	%l2,%i3
	bge	assq1
	nop
assq3:
	mov   	%i2,%l1
assqret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	assoc
!
	.seg	"data1"   
	.align	4
.assoc:	.word    0
	._assoc = 3
	.seg	"text"
	.align	8
	.global	assoc
assoc:
	cmp    	%l2,%i3
	bge	asso1
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
asso1:
	ld	[%l2+0],%l3
	cmp    	%l3,%i3
	blt	asso5
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	ld	[%l3+0],%l2
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	call	equal
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	bne	asso9
	nop
	inc  	4*1,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
asso5:
	ld	[%l2+4],%l2
	cmp    	%l2,%i3
	bge	asso1
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
asso9:
	ld	[%l7+0],%l1
	inc  	4,%l7
	inc  	4*2,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cassq
!
	.seg	"data1"   
	.align	4
.cassq:	.word    0
	._cassq = 3
	.seg	"text"
	.align	8
	.global	cassq
cassq:
	ba,a	cassq3
	.align	4
cassq1:
	ld	[%l2+0],%l3
	cmp    	%l3,%i3
	blt	cassq2
	nop
	ld	[%l3+0],%l4
	cmp	%l4,%l1
	beq	cassq4
	nop
cassq2:
	ld	[%l2+4],%l2
cassq3:
	cmp    	%l2,%i3
	bge	cassq1
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
cassq4:
	ld	[%l3+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cassoc
!
	.seg	"data1"   
	.align	4
.cassoc:	.word    0
	._cassoc = 3
	.seg	"text"
	.align	8
	.global	cassoc
cassoc:
	ba,a	casso8
	.align	4
casso1:
	ld	[%l2+0],%l3
	cmp    	%l3,%i3
	blt	casso5
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	ld	[%l3+0],%l2
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	call	equal
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	bne	casso9
	nop
	inc  	4*1,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
casso5:
	ld	[%l2+4],%l2
casso8:
	cmp    	%l2,%i3
	bge	casso1
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
casso9:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l1+4],%l1
	inc  	4*2,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	rassq
!
	.seg	"data1"   
	.align	4
.rassq:	.word    0
	._rassq = 3
	.seg	"text"
	.align	8
	.global	rassq
rassq:
	cmp    	%l2,%i3
	blt	rassq3
	nop
	mov   	%l1,%l3
rassq1:
	ld	[%l2+0],%l1
	cmp    	%l1,%i3
	blt	rassq2
	nop
	ld	[%l1+4],%l4
	cmp	%l4,%l3
	beq	rassqret
	nop
rassq2:
	ld	[%l2+4],%l2
	cmp    	%l2,%i3
	bge	rassq1
	nop
rassq3:
	mov   	%i2,%l1
rassqret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	rassoc
!
	.seg	"data1"   
	.align	4
.rassoc:	.word    0
	._rassoc = 3
	.seg	"text"
	.align	8
	.global	rassoc
rassoc:
	ba,a	rasso8
	.align	4
rasso1:
	ld	[%l2+0],%l3
	cmp    	%l3,%i3
	blt	rasso5
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	ld	[%l3+4],%l2
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	call	equal
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	bne	rasso9
	nop
	inc  	4*1,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
rasso5:
	ld	[%l2+4],%l2
rasso8:
	cmp    	%l2,%i3
	bge	rasso1
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
rasso9:
	ld	[%l7+0],%l1
	inc  	4,%l7
	inc  	4*2,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	sublis
!
	.seg	"data1"   
	.align	4
.sublis:	.word    0
	._sublis = 3
	.seg	"text"
	.align	8
	.global	sublis
sublis:
	cmp    	%l2,%i3
	bge	sublis5
	nop
	dec  	4,%l7
	st   	%l2,[%l7+0]
	mov   	%l1,%l2
	ld	[%l7+0],%l1
	dec  	4,%l7
	call	assq
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	sublis2
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l1+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
sublis2:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
sublis5:
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	fnt151
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
fnt151:
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfs
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	ld	[%l2+0],%l2
	dec  	4,%l7
	call	sublis
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	dec  	4,%l7
	st   	%l2,[%l7+0]
	ld	[%l2+4],%l2
	dec  	4,%l7
	call	sublis
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l3+4],%o1
	cmp	%l1,%o1
	bne	sublis8
	nop
	ld	[%l3+0],%o1
	cmp	%l2,%o1
	bne	sublis8
	nop
	mov   	%l3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
sublis8:
	cmp    	%i2,%g4
	bne    	fnt152
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fnt152:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
! end
