!
!	File cntrl.s expansion for sparc arch=v8plus.
!	This file is part of Le-Lisp kernel.
!	Generated on Sat Oct   7 17 21:25:38 
!
	.file	"cntrl.s"
	.align	8 
	.global	hashtab
	.global	mstack
	.global	bvar
	.global	errsym
	.global	errnia
	.global	errnla
	.global	errnva
	.global	errwna
	.global	errvec
	.global	errbal
	.global	erroob
	.global	errfs
	.global	gccons
	.global	gcfloat
	.global	gcnumb
	.global	evalcar
	.global	evala1
	.global	funcall
	.global	ffuncall
	.global	evprogn
	.global	savea1
	.global	savea2
	.global	errname
	.global	inisymb
	.global	inicst
	.global	addprop
	.global	getprop
	.global	putprop
	.global	remprop
	.global	member
	.global	nreverse
	.global	nreconc
	.global	equal
	.global	makevect
	.global	loc
	.global	ini_ctl
	.global	llde
	.global	tabtypfn
	.global	tabcodfn
	.seg	"data1"
	.align	4
tabtypfn:
	.word 	0
tabcodfn:
	.word 	0
	.seg	"text"
ini_ctl:
	.seg	"data1"   
	.align	4
pcnt1:
	.asciz	"loaded-from-file"
	.seg	"text"
bcnt1:
	set 	16,%l1
	set	pcnt1,%l2
	set	396*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,7*32,%o3
	st   	%o3,[%l1+12]
	st   	%i2,[%l1+0]
	set	13,%l1
	mov   	%i2,%l2
	dec  	4,%l7
	call	makevect
	st   	%o7,[%l7+0]
	.align	4
	set	tabtypfn,%o4
	st   	%l1,[%o4+0]
	set	tabtypfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,12,%o1
	add    	%i2,69*32,%o0
	st   	%o0,[%o1+0]
	set	tabtypfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,16,%o1
	add    	%i2,70*32,%o0
	st   	%o0,[%o1+0]
	set	tabtypfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,20,%o1
	add    	%i2,71*32,%o0
	st   	%o0,[%o1+0]
	set	tabtypfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,24,%o1
	add    	%i2,72*32,%o0
	st   	%o0,[%o1+0]
	set	tabtypfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,28,%o1
	add    	%i2,73*32,%o0
	st   	%o0,[%o1+0]
	set	tabtypfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,32,%o1
	add    	%i2,74*32,%o0
	st   	%o0,[%o1+0]
	set	tabtypfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,36,%o1
	add    	%i2,75*32,%o0
	st   	%o0,[%o1+0]
	set	tabtypfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,40,%o1
	add    	%i2,76*32,%o0
	st   	%o0,[%o1+0]
	set	tabtypfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,44,%o1
	add    	%i2,77*32,%o0
	st   	%o0,[%o1+0]
	set	tabtypfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,48,%o1
	add    	%i2,78*32,%o0
	st   	%o0,[%o1+0]
	set	tabtypfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,52,%o1
	add    	%i2,79*32,%o0
	st   	%o0,[%o1+0]
	set	tabtypfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,56,%o1
	add    	%i2,80*32,%o0
	st   	%o0,[%o1+0]
	set	13,%l1
	mov   	%i2,%l2
	dec  	4,%l7
	call	makevect
	st   	%o7,[%l7+0]
	.align	4
	set	tabcodfn,%o4
	st   	%l1,[%o4+0]
	set	tabcodfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,12,%o1
	set	1,%o0
	st   	%o0,[%o1+0]
	set	tabcodfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,16,%o1
	set	2,%o0
	st   	%o0,[%o1+0]
	set	tabcodfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,20,%o1
	set	3,%o0
	st   	%o0,[%o1+0]
	set	tabcodfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,24,%o1
	set	4,%o0
	st   	%o0,[%o1+0]
	set	tabcodfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,28,%o1
	set	5,%o0
	st   	%o0,[%o1+0]
	set	tabcodfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,32,%o1
	set	6,%o0
	st   	%o0,[%o1+0]
	set	tabcodfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,36,%o1
	set	7,%o0
	st   	%o0,[%o1+0]
	set	tabcodfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,40,%o1
	set	8,%o0
	st   	%o0,[%o1+0]
	set	tabcodfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,44,%o1
	set	9,%o0
	st   	%o0,[%o1+0]
	set	tabcodfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,48,%o1
	set	10,%o0
	st   	%o0,[%o1+0]
	set	tabcodfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,52,%o1
	set	11,%o0
	st   	%o0,[%o1+0]
	set	tabcodfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,56,%o1
	set	12,%o0
	st   	%o0,[%o1+0]
	.seg	"data1"   
	.align	4
pcnt2:
	.asciz	"defun"
	.seg	"text"
bcnt2:
	set	5,%l1
	set	pcnt2,%l2
	set	llde,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llde,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt3:
	.asciz	"de"
	.seg	"text"
bcnt3:
	set	2,%l1
	set	pcnt3,%l2
	set	llde,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llde,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt4:
	.asciz	"df"
	.seg	"text"
bcnt4:
	set	2,%l1
	set	pcnt4,%l2
	set	lldf,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lldf,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt5:
	.asciz	"dm"
	.seg	"text"
bcnt5:
	set	2,%l1
	set	pcnt5,%l2
	set	lldm,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lldm,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt6:
	.asciz	"dmd"
	.seg	"text"
bcnt6:
	set	3,%l1
	set	pcnt6,%l2
	set	dmd,%l3
	dec	8,%l3
	set	trash,%l4
	set	._dmd,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt7:
	.asciz	"defmacro"
	.seg	"text"
bcnt7:
	set	8,%l1
	set	pcnt7,%l2
	set	dmd,%l3
	dec	8,%l3
	set	trash,%l4
	set	._dmd,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt8:
	.asciz	"ds"
	.seg	"text"
bcnt8:
	set	2,%l1
	set	pcnt8,%l2
	set	llds,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llds,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt9:
	.asciz	"defvar"
	.seg	"text"
bcnt9:
	set	6,%l1
	set	pcnt9,%l2
	set	defvar,%l3
	dec	8,%l3
	set	trash,%l4
	set	._defvar,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt10:
	.asciz	"previous-def"
	.seg	"text"
bcnt10:
	set 	12,%l1
	set	pcnt10,%l2
	set	405*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,7*32,%o3
	st   	%o3,[%l1+12]
	.seg	"data1"   
	.align	4
pcnt11:
	.asciz	"revert"
	.seg	"text"
bcnt11:
	set	6,%l1
	set	pcnt11,%l2
	set	revert,%l3
	dec	8,%l3
	set	trash,%l4
	set	._revert,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt12:
	.asciz	"getdef"
	.seg	"text"
bcnt12:
	set	6,%l1
	set	pcnt12,%l2
	set	getdef,%l3
	dec	8,%l3
	set	trash,%l4
	set	._getdef,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt13:
	.asciz	"makedef"
	.seg	"text"
bcnt13:
	set	7,%l1
	set	pcnt13,%l2
	set	makedef,%l3
	dec	8,%l3
	set	trash,%l4
	set	._makedef,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt14:
	.asciz	"if"
	.seg	"text"
bcnt14:
	set	2,%l1
	set	pcnt14,%l2
	set	llif,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llif,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt15:
	.asciz	"ifn"
	.seg	"text"
bcnt15:
	set	3,%l1
	set	pcnt15,%l2
	set	llifn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llifn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt16:
	.asciz	"when"
	.seg	"text"
bcnt16:
	set	4,%l1
	set	pcnt16,%l2
	set	when,%l3
	dec	8,%l3
	set	trash,%l4
	set	._when,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt17:
	.asciz	"unless"
	.seg	"text"
bcnt17:
	set	6,%l1
	set	pcnt17,%l2
	set	unless,%l3
	dec	8,%l3
	set	trash,%l4
	set	._unless,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt18:
	.asciz	"cond"
	.seg	"text"
bcnt18:
	set	4,%l1
	set	pcnt18,%l2
	set	cond,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cond,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt19:
	.asciz	"or"
	.seg	"text"
bcnt19:
	set	2,%l1
	set	pcnt19,%l2
	set	llor,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llor,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt20:
	.asciz	"and"
	.seg	"text"
bcnt20:
	set	3,%l1
	set	pcnt20,%l2
	set	lland,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lland,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt21:
	.asciz	"while"
	.seg	"text"
bcnt21:
	set	5,%l1
	set	pcnt21,%l2
	set	while,%l3
	dec	8,%l3
	set	trash,%l4
	set	._while,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt22:
	.asciz	"until"
	.seg	"text"
bcnt22:
	set	5,%l1
	set	pcnt22,%l2
	set	until,%l3
	dec	8,%l3
	set	trash,%l4
	set	._until,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt23:
	.asciz	"loop"
	.seg	"text"
bcnt23:
	set	4,%l1
	set	pcnt23,%l2
	set	loop,%l3
	dec	8,%l3
	set	trash,%l4
	set	._loop,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt24:
	.asciz	"repeat"
	.seg	"text"
bcnt24:
	set	6,%l1
	set	pcnt24,%l2
	set	frepeat,%l3
	dec	8,%l3
	set	trash,%l4
	set	._frepeat,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt25:
	.asciz	"selectq"
	.seg	"text"
bcnt25:
	set	7,%l1
	set	pcnt25,%l2
	set	selectq,%l3
	dec	8,%l3
	set	trash,%l4
	set	._selectq,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt26:
	.asciz	"map"
	.seg	"text"
bcnt26:
	set	3,%l1
	set	pcnt26,%l2
	set	map,%l3
	dec	8,%l3
	set	trash,%l4
	set	._map,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt27:
	.asciz	"mapl"
	.seg	"text"
bcnt27:
	set	4,%l1
	set	pcnt27,%l2
	set	map,%l3
	dec	8,%l3
	set	trash,%l4
	set	._map,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt28:
	.asciz	"mapc"
	.seg	"text"
bcnt28:
	set	4,%l1
	set	pcnt28,%l2
	set	mapc,%l3
	dec	8,%l3
	set	trash,%l4
	set	._mapc,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt29:
	.asciz	"maplist"
	.seg	"text"
bcnt29:
	set	7,%l1
	set	pcnt29,%l2
	set	maplist,%l3
	dec	8,%l3
	set	trash,%l4
	set	._maplist,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt30:
	.asciz	"mapcar"
	.seg	"text"
bcnt30:
	set	6,%l1
	set	pcnt30,%l2
	set	mapcar,%l3
	dec	8,%l3
	set	trash,%l4
	set	._mapcar,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt31:
	.asciz	"mapcon"
	.seg	"text"
bcnt31:
	set	6,%l1
	set	pcnt31,%l2
	set	mapcon,%l3
	dec	8,%l3
	set	trash,%l4
	set	._mapcon,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt32:
	.asciz	"mapcan"
	.seg	"text"
bcnt32:
	set	6,%l1
	set	pcnt32,%l2
	set	mapcan,%l3
	dec	8,%l3
	set	trash,%l4
	set	._mapcan,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt33:
	.asciz	"every"
	.seg	"text"
bcnt33:
	set	5,%l1
	set	pcnt33,%l2
	set	fevery,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fevery,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt34:
	.asciz	"any"
	.seg	"text"
bcnt34:
	set	3,%l1
	set	pcnt34,%l2
	set	fany,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fany,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt35:
	.asciz	"mapvector"
	.seg	"text"
bcnt35:
	set	9,%l1
	set	pcnt35,%l2
	set	mapvect,%l3
	dec	8,%l3
	set	trash,%l4
	set	._mapvect,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt36:
	.asciz	"mapoblist"
	.seg	"text"
bcnt36:
	set	9,%l1
	set	pcnt36,%l2
	set	mapoblist,%l3
	dec	8,%l3
	set	trash,%l4
	set	._mapoblist,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt37:
	.asciz	"mapcoblist"
	.seg	"text"
bcnt37:
	set	10,%l1
	set	pcnt37,%l2
	set	mapcoblist,%l3
	dec	8,%l3
	set	trash,%l4
	set	._mapcoblist,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt38:
	.asciz	"maploblist"
	.seg	"text"
bcnt38:
	set	10,%l1
	set	pcnt38,%l2
	set	maploblist,%l3
	dec	8,%l3
	set	trash,%l4
	set	._maploblist,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt39:
	.asciz	"quote"
	.seg	"text"
bcnt39:
	set	5,%l1
	set	pcnt39,%l2
	set	quote,%l3
	dec	8,%l3
	set	trash,%l4
	set	._quote,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt40:
	.asciz	"lambda"
	.seg	"text"
bcnt40:
	set	6,%l1
	set	pcnt40,%l2
	set	lambda,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lambda,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt41:
	.asciz	"flambda"
	.seg	"text"
bcnt41:
	set	7,%l1
	set	pcnt41,%l2
	set	flambda,%l3
	dec	8,%l3
	set	trash,%l4
	set	._flambda,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt42:
	.asciz	"mlambda"
	.seg	"text"
bcnt42:
	set	7,%l1
	set	pcnt42,%l2
	set	mlambda,%l3
	dec	8,%l3
	set	trash,%l4
	set	._mlambda,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt43:
	.asciz	"identity"
	.seg	"text"
bcnt43:
	set	8,%l1
	set	pcnt43,%l2
	set	llident,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llident,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt44:
	.asciz	"comment"
	.seg	"text"
bcnt44:
	set	7,%l1
	set	pcnt44,%l2
	set	comment,%l3
	dec	8,%l3
	set	trash,%l4
	set	._comment,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt45:
	.asciz	"progn"
	.seg	"text"
bcnt45:
	set	5,%l1
	set	pcnt45,%l2
	set	progn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._progn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt46:
	.asciz	"eprogn"
	.seg	"text"
bcnt46:
	set	6,%l1
	set	pcnt46,%l2
	set	eprogn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._eprogn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt47:
	.asciz	"prog1"
	.seg	"text"
bcnt47:
	set	5,%l1
	set	pcnt47,%l2
	set	prog1,%l3
	dec	8,%l3
	set	trash,%l4
	set	._prog1,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt48:
	.asciz	"exportable-definition"
	.seg	"text"
bcnt48:
	set	21,%l1
	set	pcnt48,%l2
	set	exdef,%l3
	dec	8,%l3
	set	trash,%l4
	set	._exdef,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcnt49:
	.asciz	"prog2"
	.seg	"text"
bcnt49:
	set	5,%l1
	set	pcnt49,%l2
	set	prog2,%l3
	dec	8,%l3
	set	trash,%l4
	set	._prog2,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	set	434*32,%l1
	add    	%i2,%l1,%l1
	st   	%l1,[%l1+0]
	set	435*32,%l1
	add    	%i2,%l1,%l1
	st   	%l1,[%l1+0]
	set	436*32,%l1
	add    	%i2,%l1,%l1
	st   	%l1,[%l1+0]
	set	437*32,%l1
	add    	%i2,%l1,%l1
	st   	%l1,[%l1+0]
cnfalse:
	mov   	%i2,%l1
cnpopj:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
cnttrue:
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
def:
	ld	[%l1+4],%l2
	ld	[%l1+0],%l1
	sth   	%l3,[%l1+24]
	st   	%l2,[%l1+8]
	set	396*32,%l3
	add    	%i2,%l3,%l3
	ld	[%l3+0],%l2
	cmp    	%l2,%i2
	beq	cnpopj
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	putprop
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llde
!
	.seg	"data1"   
	.align	4
.llde:	.word    0
	._llde = 6
	.seg	"text"
	.align	8
llde:
	set	7,%l3
	ba,a	def
	.align	4

!
!	FENTRY	lldf
!
	.seg	"data1"   
	.align	4
.lldf:	.word    0
	._lldf = 6
	.seg	"text"
	.align	8
	.global	lldf
lldf:
	set	8,%l3
	ba,a	def
	.align	4

!
!	FENTRY	lldm
!
	.seg	"data1"   
	.align	4
.lldm:	.word    0
	._lldm = 6
	.seg	"text"
	.align	8
	.global	lldm
lldm:
	set	9,%l3
	ba,a	def
	.align	4

!
!	FENTRY	dmd
!
	.seg	"data1"   
	.align	4
.dmd:	.word    0
	._dmd = 6
	.seg	"text"
	.align	8
	.global	dmd
dmd:
	set	10,%l3
	ba,a	def
	.align	4

!
!	FENTRY	llds
!
	.seg	"data1"   
	.align	4
.llds:	.word    0
	._llds = 6
	.seg	"text"
	.align	8
	.global	llds
llds:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	defvar
!
	.seg	"data1"   
	.align	4
.defvar:	.word    0
	._defvar = 6
	.seg	"text"
	.align	8
	.global	defvar
defvar:
	cmp    	%l1,%i3
	blt	defvar9
	nop
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
	blt  	defverr
	nop
	cmp    	%l2,%i3
	bge  	defverr
	nop
	st   	%l1,[%l2+0]
	mov   	%l2,%l1
	set	396*32,%l3
	add    	%i2,%l3,%l3
	ld	[%l3+0],%l2
	cmp    	%l2,%i2
	beq	defvar9
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	putprop
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
defvar9:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
defverr:
	mov   	%l2,%l1
	set	404*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnva
	.align	4

!
!	FENTRY	revert
!
	.seg	"data1"   
	.align	4
.revert:	.word    0
	._revert = 2
	.seg	"text"
	.align	8
	.global	revert
revert:
	set	405*32,%l2
	add    	%i2,%l2,%l2
	dec  	4,%l7
	call	getprop
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	cnpopj
	nop
	ba,a	evala1
	.align	4

!
!	FENTRY	getdef
!
	.seg	"data1"   
	.align	4
.getdef:	.word    0
	._getdef = 2
	.seg	"text"
	.align	8
	.global	getdef
getdef:
	cmp    	%l1,%i2
	blt  	gtdefe
	nop
	cmp    	%l1,%i3
	bge  	gtdefe
	nop
	lduh	[%l1+24],%l2
	ld	[%l1+8],%l3
	ba,a	defsuit
	.align	4
gtdefe:
	set	407*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4

!
!	FENTRY	makedef
!
	.seg	"data1"   
	.align	4
.makedef:	.word    0
	._makedef = 4
	.seg	"text"
	.align	8
	.global	makedef
makedef:
	cmp    	%l2,%g3
	bge	uncod0
	nop
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	uncodtr
	nop
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,12
	ble	defsuit
	nop
uncodtr:
	set	408*32,%l2
	add    	%i2,%l2,%l2
	ba,a	erroob
	.align	4
uncod0:
	dec  	4,%l7
	st   	%l3,[%l7+0]
	set	tabtypfn,%o0
	ld	[%o0+0],%o0
	ld	[%o0+0],%o0
	ld	[%o0+4],%l4
	ba,a	uncod2
	.align	4
uncod1:
	set	tabtypfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l4,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l3
	cmp	%l3,%l2
	beq	uncod3
	nop
uncod2:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	uncod1
	nop
	mov  	0,%l4
uncod3:
	mov   	%l4,%l2
	ld	[%l7+0],%l3
	inc  	4,%l7
defsuit:
	mov   	%l2,%o0
	sll  	%o0,2,%o0
	set	tbmakdef,%o1
	dec	8,%o1
	add   	%o0,%o1,%o0
	ld	[%o0+8],%o0
	jmp 	%o0
	nop
	.align	4
tbmakdef:
	.word 	mkdef0
	.word 	mkdef1
	.word 	mkdef1
	.word 	mkdef1
	.word 	mkdef1
	.word 	mkdef1
	.word 	mkdef1
	.word 	mkdef2
	.word 	mkdef3
	.word 	mkdef4
	.word 	mkdef5
	.word 	mkdef1
	.word 	mkdef1
mkdef0:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mkdef1:
	.global	econs
	set	bnumb,%o1
	ld	[%o1+0],%o1
	cmp	%l3,%o1
	blt  	cnt50
	nop
	set	econs,%o1
	ld	[%o1+0],%o1
	cmp	%l3,%o1
	blt  	mkdef10
	nop
cnt50:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	mov   	%l3,%l1
	dec  	4,%l7
	call	loc
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l3
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
mkdef10:
	cmp    	%i2,%g4
	bne    	cnt51
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
cnt51:
	st   	%l3,[%g4+0]
	mov   	%g4,%l3
	ld	[%g4+4],%g4
	st   	%i2,[%l3+4]
	set	tabtypfn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l2,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l2
	cmp    	%i2,%g4
	bne    	cnt52
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
cnt52:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l3,[%o2+4]
	mov   	%o2,%l3
	set	403*32,%l4
	add    	%i2,%l4,%l4
	ba,a	mkdef8
	.align	4
mkdef2:
	set	398*32,%l4
	add    	%i2,%l4,%l4
	ba,a	mkdef8
	.align	4
mkdef3:
	set	399*32,%l4
	add    	%i2,%l4,%l4
	ba,a	mkdef8
	.align	4
mkdef4:
	set	400*32,%l4
	add    	%i2,%l4,%l4
	ba,a	mkdef8
	.align	4
mkdef5:
	set	402*32,%l4
	add    	%i2,%l4,%l4
mkdef8:
	cmp    	%i2,%g4
	bne    	cnt53
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
cnt53:
	st   	%l1,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l3,[%o2+4]
	mov   	%o2,%l3
	cmp    	%i2,%g4
	bne    	cnt54
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
cnt54:
	st   	%l4,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l3,[%o2+4]
	mov   	%o2,%l3
	mov   	%l3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llif
!
	.seg	"data1"   
	.align	4
.llif:	.word    0
	._llif = 6
	.seg	"text"
	.align	8
	.global	llif
llif:
	cmp    	%l1,%i3
	blt	ifer2
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
	cmp    	%l2,%i3
	blt	ifer1
	nop
	ld	[%l2+4],%l3
	set	409*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	cmp    	%l1,%i2
	beq	progna3
	nop
	ld	[%l2+0],%l1
	ba,a	evala1
	.align	4
ifer1:
	mov   	%l2,%l1
ifer2:
	cmp    	%l1,%i2
	beq	cnpopj
	nop
	set	409*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errbal
	.align	4

!
!	FENTRY	llifn
!
	.seg	"data1"   
	.align	4
.llifn:	.word    0
	._llifn = 6
	.seg	"text"
	.align	8
	.global	llifn
llifn:
	cmp    	%l1,%i3
	blt	ifner2
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
	cmp    	%l2,%i3
	blt	ifner1
	nop
	ld	[%l2+4],%l3
	set	410*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	cmp    	%l1,%i2
	bne	progna3
	nop
	ld	[%l2+0],%l1
	ba,a	evala1
	.align	4
ifner1:
	mov   	%l2,%l1
ifner2:
	cmp    	%l1,%i2
	beq	cnpopj
	nop
	set	410*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errbal
	.align	4

!
!	FENTRY	when
!
	.seg	"data1"   
	.align	4
.when:	.word    0
	._when = 6
	.seg	"text"
	.align	8
	.global	when
when:
	cmp    	%l1,%i3
	blt	whener1
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
	set	411*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	cmp    	%l1,%i2
	bne	progna3
	nop
whenr:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
whener1:
	cmp    	%l1,%i2
	beq	whenr
	nop
	set	411*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errbal
	.align	4

!
!	FENTRY	unless
!
	.seg	"data1"   
	.align	4
.unless:	.word    0
	._unless = 6
	.seg	"text"
	.align	8
	.global	unless
unless:
	cmp    	%l1,%i3
	blt	unler1
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
	set	412*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	cmp    	%l1,%i2
	beq	progna3
	nop
	mov   	%i2,%l1
unlesr:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
unler1:
	cmp    	%l1,%i2
	beq	unlesr
	nop
	set	412*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errbal
	.align	4

!
!	FENTRY	cond
!
	.seg	"data1"   
	.align	4
.cond:	.word    0
	._cond = 6
	.seg	"text"
	.align	8
	.global	cond
cond:
	mov   	%l1,%l2
cond1:
	cmp    	%l2,%i3
	blt	conder3
	nop
	dec  	4,%l7
	ld	[%l2+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l2+0],%l1
	cmp    	%l1,%i3
	blt	conder1
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
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l1,%i2
	beq	cond1
	nop
	set	413*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	cmp    	%l3,%i3
	bge	progna3
	nop
	cmp    	%l3,%i2
	beq	condret
	nop
	mov   	%l3,%l1
	ba,a	conder4
	.align	4
condret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
conder1:
	cmp    	%l1,%i2
	bne	conder2
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
	ba,a	cond1
	.align	4
conder2:
	set	413*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnla
	.align	4
conder3:
	mov   	%l2,%l1
	cmp    	%l1,%i2
	bne	conder4
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
conder4:
	set	413*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errbal
	.align	4

!
!	FENTRY	llor
!
	.seg	"data1"   
	.align	4
.llor:	.word    0
	._llor = 6
	.seg	"text"
	.align	8
	.global	llor
llor:
	cmp    	%l1,%i3
	bge	or2
	nop
	cmp    	%l1,%i2
	beq	cnpopj
	nop
	ba,a	orer2
	.align	4
or1:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	bne	pret
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
or2:
	ld	[%l1+4],%l2
	cmp    	%l2,%i3
	bge	or1
	nop
	cmp    	%l2,%i2
	bne	orer1
	nop
	ba,a	evalcar
	.align	4
orer1:
	mov   	%l2,%l1
orer2:
	set	414*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errbal
	.align	4

!
!	FENTRY	lland
!
	.seg	"data1"   
	.align	4
.lland:	.word    0
	._lland = 6
	.seg	"text"
	.align	8
	.global	lland
lland:
	cmp    	%l1,%i3
	bge	and2
	nop
	cmp    	%l1,%i2
	beq	cnttrue
	nop
	ba,a	ander2
	.align	4
and1:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	pret
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
and2:
	ld	[%l1+4],%l2
	cmp    	%l2,%i3
	bge	and1
	nop
	cmp    	%l2,%i2
	bne	ander1
	nop
	ba,a	evalcar
	.align	4
pret:
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ander1:
	mov   	%l2,%l1
ander2:
	set	415*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errbal
	.align	4

!
!	FENTRY	while
!
	.seg	"data1"   
	.align	4
.while:	.word    0
	._while = 6
	.seg	"text"
	.align	8
	.global	while
while:
	cmp    	%l1,%i3
	blt	whiler
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	ba,a	while2
	.align	4
while1:
	ld	[%l7+0],%l1
	ld	[%l1+4],%l1
	set	416*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	iprogn
	st   	%o7,[%l7+0]
	.align	4
while2:
	ld	[%l7+0],%l1
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	bne	while1
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
whileret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
whiler:
	cmp    	%l1,%i2
	beq	whileret
	nop
	set	416*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errbal
	.align	4

!
!	FENTRY	until
!
	.seg	"data1"   
	.align	4
.until:	.word    0
	._until = 6
	.seg	"text"
	.align	8
	.global	until
until:
	cmp    	%l1,%i3
	blt	untiler
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	ba,a	until2
	.align	4
until1:
	ld	[%l7+0],%l1
	ld	[%l1+4],%l1
	set	417*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	iprogn
	st   	%o7,[%l7+0]
	.align	4
until2:
	ld	[%l7+0],%l1
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	until1
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
untilret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
untiler:
	cmp    	%l1,%i2
	beq	untilret
	nop
	set	417*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errbal
	.align	4

!
!	FENTRY	loop
!
	.seg	"data1"   
	.align	4
.loop:	.word    0
	._loop = 6
	.seg	"text"
	.align	8
	.global	loop
loop:
	dec  	4,%l7
	st   	%l1,[%l7+0]
loop1:
	ld	[%l7+0],%l1
	set	418*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	iprogn
	st   	%o7,[%l7+0]
	.align	4
	ba,a	loop1
	.align	4

!
!	FENTRY	frepeat
!
	.seg	"data1"   
	.align	4
.frepeat:	.word    0
	._frepeat = 6
	.seg	"text"
	.align	8
	.global	frepeat
frepeat:
	cmp    	%l1,%i3
	blt	freper
	nop
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l2
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l2,%g3
	blt	repeat2
	nop
	mov   	%l2,%l1
	set	419*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnia
	.align	4
repeat1:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	419*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	iprogn
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
repeat2:
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	deccc  	1,%l2
	and 	%l2,%l0,%l2
	bge  	repeat1
	nop
	ba,a	cnttrue
	.align	4
freper:
	cmp    	%l1,%i2
	beq	cnttrue
	nop
	set	419*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errbal
	.align	4

!
!	FENTRY	selectq
!
	.seg	"data1"   
	.align	4
.selectq:	.word    0
	._selectq = 6
	.seg	"text"
	.align	8
	.global	selectq
selectq:
	cmp    	%l1,%i3
	blt	selecer1
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
	ba,a	selec5
	.align	4
selec1:
	ld	[%l3+0],%l2
	ld	[%l3+4],%l3
	cmp    	%l2,%i3
	blt	selecer2
	nop
	ld	[%l2+4],%l4
	ld	[%l2+0],%l2
	add    	%i2,3*32,%o1
	cmp	%l2,%o1
	beq	selec7
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	cmp    	%l2,%i3
	blt	selec2
	nop
	dec  	4,%l7
	call	member
	st   	%o7,[%l7+0]
	.align	4
	ba,a	selec3
	.align	4
selec2:
	dec  	4,%l7
	call	equal
	st   	%o7,[%l7+0]
	.align	4
selec3:
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l1,%i2
	bne	selec6
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
selec5:
	cmp    	%l3,%i3
	bge	selec1
	nop
	mov   	%l3,%l1
selecer1:
	cmp    	%l1,%i2
	beq	cnpopj
	nop
	set	420*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errbal
	.align	4
selecer2:
	cmp    	%l2,%i2
	beq	selec5
	nop
	mov   	%l2,%l1
	set	420*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnla
	.align	4
selec6:
	ld	[%l7+0],%l1
	inc  	4,%l7
selec7:
	mov   	%l4,%l1
	set	420*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	ba,a	iprogn
	.align	4

!
!	FENTRY	map
!
	.seg	"data1"   
	.align	4
.map:	.word    0
	._map = 5
	.seg	"text"
	.align	8
	.global	map
map:
	set	422*32,%l2
	add    	%i2,%l2,%l2
	dec  	4,%l7
	st   	%g0,[%l7+0]
	dec  	4,%l7
	set	map1,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	mov   	%i2,%l3
allmap:
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,1
	ble	maper
	nop
map1:
	ld	[%l7+12],%l4
	ld	[%l7+8],%l1
	ld	[%l7+4],%l2
	dec  	4,%l7
	st   	%l1,[%l7+0]
	mov   	%l2,%l3
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	add	%l3,4,%l3
	and 	%l3,%l0,%l3
	mov   	%l3,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l1
	ba,a	map3
	.align	4
map2:
	mov   	%l3,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l1
	cmp    	%l1,%i3
	blt	map4
	nop
	mov   	%l3,%o1
	sll  	%o1,2,%o1
	add    	%o1,%l7,%o1
	ld	[%l1+4],%o0
	st   	%o0,[%o1+0]
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	map3
	nop
	ld	[%l1+0],%l1
map3:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	dec  	%l2
	cmp   	%l2,0
	bgt  	map2
	nop
	mov  	0,%l2
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	sub	%l3,4,%l3
	and 	%l3,%l0,%l3
	mov   	%l3,%l4
	ba,a	funcall
	.align	4
map4:
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	sub	%l3,%o1,%l3
	and 	%l3,%l0,%l3
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	sub	%l3,3,%l3
	and 	%l3,%l0,%l3
	mov   	%l3,%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll  	%o0,2,%o0
	add    	%l7,%o0,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	add	%l3,2,%l3
	and 	%l3,%l0,%l3
	mov   	%l3,%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll  	%o0,2,%o0
	add    	%l7,%o0,%l7
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	map5
	nop
	ba,a	nreverse
	.align	4
map5:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
map6:
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	cnt55
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
cnt55:
	st   	%l1,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l2,[%o2+4]
	mov   	%o2,%l2
	dec  	4,%l7
	st   	%l2,[%l7+0]
	ba,a	map1
	.align	4
map7:
	cmp    	%l1,%i3
	blt	map1
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
	dec  	4,%l7
	call	nreconc
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	ba,a	map1
	.align	4
map8:
	st   	%l1,[%l7+0]
	cmp    	%l1,%i2
	bne	map1
	nop
	ba,a	map10
	.align	4
map9:
	st   	%l1,[%l7+0]
	cmp    	%l1,%i2
	beq	map1
	nop
map10:
	inc  	4*1,%l7
	ld	[%l7+0],%l4
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	add	%l4,3,%l4
	and 	%l4,%l0,%l4
	mov   	%l4,%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll  	%o0,2,%o0
	add    	%l7,%o0,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
maper:
	mov   	%l4,%l1
	ba,a	errwna
	.align	4
allmapun:
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
mapun1:
	ld	[%l7+8],%l2
	cmp    	%l2,%i3
	blt	mapun4
	nop
	ld	[%l2+4],%o0
	st   	%o0,[%l7+8]
	ld	[%l7+4],%l3
	ld	[%l7+12],%l1
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	ld	[%l2+0],%o0
	st   	%o0,[%l7+0]
	set	1,%l4
	ba,a	ffuncall
	.align	4
mapun4:
	ld	[%l7+0],%l1
	inc  	4,%l7
	inc  	4*3,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	mapun5
	nop
	ba,a	nreverse
	.align	4
mapun5:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mapun6:
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	cnt56
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
cnt56:
	st   	%l1,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l2,[%o2+4]
	mov   	%o2,%l2
	dec  	4,%l7
	st   	%l2,[%l7+0]
	ba,a	mapun1
	.align	4
mapun7:
	cmp    	%l1,%i3
	blt	mapun1
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
	dec  	4,%l7
	call	nreconc
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	ba,a	mapun1
	.align	4
mapun8:
	st   	%l1,[%l7+0]
	cmp    	%l1,%i2
	bne	mapun1
	nop
	inc  	4*5,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mapun9:
	cmp    	%l1,%i2
	beq	mapun1
	nop
	inc  	4*5,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	mapc
!
	.seg	"data1"   
	.align	4
.mapc:	.word    0
	._mapc = 5
	.seg	"text"
	.align	8
	.global	mapc
mapc:
	mov   	%i2,%l3
	dec  	4,%l7
	set	1,%o0
	st   	%o0,[%l7+0]
	mov   	%l4,%o1
	cmp    	%o1,2
	bne	mapcn
	nop
	dec  	4,%l7
	set	mapun1,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	allmapun
	.align	4
mapcn:
	set	423*32,%l2
	add    	%i2,%l2,%l2
	dec  	4,%l7
	set	map1,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	allmap
	.align	4

!
!	FENTRY	maplist
!
	.seg	"data1"   
	.align	4
.maplist:	.word    0
	._maplist = 5
	.seg	"text"
	.align	8
	.global	maplist
maplist:
	mov   	%i2,%l3
	set	424*32,%l2
	add    	%i2,%l2,%l2
	dec  	4,%l7
	st   	%g0,[%l7+0]
	dec  	4,%l7
	set	map6,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	allmap
	.align	4

!
!	FENTRY	mapcar
!
	.seg	"data1"   
	.align	4
.mapcar:	.word    0
	._mapcar = 5
	.seg	"text"
	.align	8
	.global	mapcar
mapcar:
	mov   	%i2,%l3
	dec  	4,%l7
	set	1,%o0
	st   	%o0,[%l7+0]
	mov   	%l4,%o1
	cmp    	%o1,2
	bne	mapcarn
	nop
	dec  	4,%l7
	set	mapun6,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	allmapun
	.align	4
mapcarn:
	set	425*32,%l2
	add    	%i2,%l2,%l2
	dec  	4,%l7
	set	map6,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	allmap
	.align	4

!
!	FENTRY	mapcon
!
	.seg	"data1"   
	.align	4
.mapcon:	.word    0
	._mapcon = 5
	.seg	"text"
	.align	8
	.global	mapcon
mapcon:
	set	426*32,%l2
	add    	%i2,%l2,%l2
	mov   	%i2,%l3
	dec  	4,%l7
	st   	%g0,[%l7+0]
	dec  	4,%l7
	set	map7,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	allmap
	.align	4

!
!	FENTRY	mapcan
!
	.seg	"data1"   
	.align	4
.mapcan:	.word    0
	._mapcan = 5
	.seg	"text"
	.align	8
	.global	mapcan
mapcan:
	mov   	%i2,%l3
	dec  	4,%l7
	set	1,%o0
	st   	%o0,[%l7+0]
	mov   	%l4,%o1
	cmp    	%o1,2
	bne	mapcann
	nop
	dec  	4,%l7
	set	mapun7,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	allmapun
	.align	4
mapcann:
	set	427*32,%l2
	add    	%i2,%l2,%l2
	dec  	4,%l7
	set	map7,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	allmap
	.align	4

!
!	FENTRY	fevery
!
	.seg	"data1"   
	.align	4
.fevery:	.word    0
	._fevery = 5
	.seg	"text"
	.align	8
	.global	fevery
fevery:
	add    	%i2,3*32,%l3
	dec  	4,%l7
	set	2,%o0
	st   	%o0,[%l7+0]
	mov   	%l4,%o1
	cmp    	%o1,2
	bne	feveryn
	nop
	dec  	4,%l7
	set	mapun8,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	allmapun
	.align	4
feveryn:
	set	428*32,%l2
	add    	%i2,%l2,%l2
	dec  	4,%l7
	set	map8,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	allmap
	.align	4

!
!	FENTRY	fany
!
	.seg	"data1"   
	.align	4
.fany:	.word    0
	._fany = 5
	.seg	"text"
	.align	8
	.global	fany
fany:
	mov   	%i2,%l3
	dec  	4,%l7
	set	2,%o0
	st   	%o0,[%l7+0]
	mov   	%l4,%o1
	cmp    	%o1,2
	bne	fanyn
	nop
	dec  	4,%l7
	set	mapun9,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	allmapun
	.align	4
fanyn:
	set	429*32,%l2
	add    	%i2,%l2,%l2
	dec  	4,%l7
	set	map9,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	allmap
	.align	4

!
!	FENTRY	mapvect
!
	.seg	"data1"   
	.align	4
.mapvect:	.word    0
	._mapvect = 3
	.seg	"text"
	.align	8
	.global	mapvect
mapvect:
	cmp    	%l2,%i0
	blt  	mapvect9
	nop
	cmp    	%l2,%i1
	bge  	mapvect9
	nop
	mov   	%g0,%l3
	ld	[%l2+0],%o0
	ld	[%o0+4],%l4
	ba,a	mapvect8
	.align	4
mapvect1:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	ld	[%l2+0],%o1
	inc  	8,%o1
	mov   	%l3,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l3
	dec  	4,%l7
	set	mapvect2,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	set	1,%l4
	ba,a	ffuncall
	.align	4
mapvect2:
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	inc	1,%l3
mapvect8:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	mapvect1
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mapvect9:
	mov   	%l2,%l1
	set	430*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errvec
	.align	4

!
!	FENTRY	mapcoblist
!
	.seg	"data1"   
	.align	4
.mapcoblist:	.word    0
	._mapcoblist = 2
	.seg	"text"
	.align	8
	.global	mapcoblist
mapcoblist:
	dec  	4,%l7
	set	mapcobco,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
allmapob:
	mov   	%i2,%l4
	set	hashtab,%o0
	ld	[%o0+0],%o0
	ld	[%o0+0],%o0
	ld	[%o0+4],%l3
	dec	1,%l3
mapcob0:
	set	hashtab,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l3,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l3
	ba,a	mapcob7
	.align	4
mapcob1:
	mov   	%l3,%l2
	ld	[%l2+28],%o0
	cmp	%o0,%i1
	blt  	cnt57
	nop
	cmp	%o0,%i2
	blt  	mapcob3
	nop
cnt57:
mapcob2:
	ld	[%l2+28],%l2
mapcob3:
	add    	%i2,1*32,%o1
	cmp	%l2,%o1
	beq	mapcob6
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	ld	[%l7+16],%l4
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	1,%l4
	ba,a	ffuncall
	.align	4
mapcob5:
	ld	[%l7+0],%l4
	inc  	4,%l7
mapcob5a:
	ld	[%l7+0],%l2
	inc  	4,%l7
mapcob5b:
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
mapcob6:
	cmp	%l3,%l2
	bne	mapcob2
	nop
	ld	[%l3+20],%l3
mapcob7:
	cmp	%l3,%i2
	blt  	cnt58
	nop
	cmp	%l3,%i3
	blt  	mapcob1
	nop
cnt58:
mapcob8:
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	deccc  	1,%l3
	and 	%l3,%l0,%l3
	bge  	mapcob0
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	mov   	%l4,%l1
	ba,a	nreverse
	.align	4
maplobco:
	cmp    	%l1,%i2
	beq	mapcob5
	nop
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	cnt59
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
cnt59:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l4,[%o2+4]
	mov   	%o2,%l4
	ba,a	mapcob5b
	.align	4
mapcobco:
	cmp    	%l1,%i3
	blt	mapcob5
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
	dec  	4,%l7
	call	nreconc
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l4
	ba,a	mapcob5a
	.align	4

!
!	FENTRY	maploblist
!
	.seg	"data1"   
	.align	4
.maploblist:	.word    0
	._maploblist = 2
	.seg	"text"
	.align	8
	.global	maploblist
maploblist:
	dec  	4,%l7
	set	maplobco,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	allmapob
	.align	4

!
!	FENTRY	mapoblist
!
	.seg	"data1"   
	.align	4
.mapoblist:	.word    0
	._mapoblist = 2
	.seg	"text"
	.align	8
	.global	mapoblist
mapoblist:
	dec  	4,%l7
	set	mapcob5,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	allmapob
	.align	4

!
!	FENTRY	quote
!
	.seg	"data1"   
	.align	4
.quote:	.word    0
	._quote = 6
	.seg	"text"
	.align	8
	.global	quote
quote:
	ld	[%l1+4],%l2
	cmp    	%l2,%i2
	bne	quoterr
	nop
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
quoterr:
	set	1,%l1
	set	434*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4

!
!	FENTRY	lambda
!
	.seg	"data1"   
	.align	4
.lambda:	.word    0
	._lambda = 6
	.seg	"text"
	.align	8
	.global	lambda
lambda:
	cmp    	%i2,%g4
	bne    	cnt60
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
cnt60:
	set	435*32,%o0
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
!	FENTRY	flambda
!
	.seg	"data1"   
	.align	4
.flambda:	.word    0
	._flambda = 6
	.seg	"text"
	.align	8
	.global	flambda
flambda:
	cmp    	%i2,%g4
	bne    	cnt61
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
cnt61:
	set	436*32,%o0
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
!	FENTRY	mlambda
!
	.seg	"data1"   
	.align	4
.mlambda:	.word    0
	._mlambda = 6
	.seg	"text"
	.align	8
	.global	mlambda
mlambda:
	cmp    	%i2,%g4
	bne    	cnt62
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
cnt62:
	set	437*32,%o0
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
!	FENTRY	comment
!
	.seg	"data1"   
	.align	4
.comment:	.word    0
	._comment = 6
	.seg	"text"
	.align	8
	.global	comment
comment:
	set	439*32,%l1
	add    	%i2,%l1,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llident
!
	.seg	"data1"   
	.align	4
.llident:	.word    0
	._llident = 2
	.seg	"text"
	.align	8
	.global	llident
llident:
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	cnt63
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
cnt63:
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfs
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
progna3:
	mov   	%l3,%l1
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	cnt64
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
cnt64:
	cmp    	%l1,%i3
	blt	progna35
	nop
	ld	[%l1+4],%l2
	cmp    	%l2,%i2
	beq	progna36
	nop
progna35:
	ba,a	evprogn
	.align	4
progna36:
	ba,a	evalcar
	.align	4

!
!	FENTRY	eprogn
!
	.seg	"data1"   
	.align	4
.eprogn:	.word    0
	._eprogn = 2
	.seg	"text"
	.align	8
	.global	eprogn
eprogn:
	set	441*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	cnt65
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
cnt65:
	ba,a	evprogn
	.align	4

!
!	FENTRY	progn
!
	.seg	"data1"   
	.align	4
.progn:	.word    0
	._progn = 6
	.seg	"text"
	.align	8
	.global	progn
progn:
	set	440*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
iprogn:
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	cnt66
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
cnt66:
	ba,a	evprogn
	.align	4

!
!	FENTRY	exdef
!
	.seg	"data1"   
	.align	4
.exdef:	.word    0
	._exdef = 6
	.seg	"text"
	.align	8
	.global	exdef
exdef:
	ba,a	prog1
	.align	4

!
!	FENTRY	prog1
!
	.seg	"data1"   
	.align	4
.prog1:	.word    0
	._prog1 = 6
	.seg	"text"
	.align	8
	.global	prog1
prog1:
	cmp    	%l1,%i3
	blt	prog1e
	nop
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
	set	442*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	iprogn
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
prog1r:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
prog1e:
	cmp    	%l1,%i2
	beq	prog1r
	nop
	set	442*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errbal
	.align	4

!
!	FENTRY	prog2
!
	.seg	"data1"   
	.align	4
.prog2:	.word    0
	._prog2 = 6
	.seg	"text"
	.align	8
	.global	prog2
prog2:
	cmp    	%l1,%i3
	blt	prog2e
	nop
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	evalcar
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%i3
	blt	prog2e
	nop
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
	set	444*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	iprogn
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
prog2r:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
prog2e:
	cmp    	%l1,%i2
	beq	prog2r
	nop
	set	444*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errbal
	.align	4
! end
