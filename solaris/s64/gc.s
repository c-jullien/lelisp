!
!	File gc.s expansion for sparc arch=v8plus.
!	This file is part of Le-Lisp kernel.
!	Generated on Sat Oct   7 17 21:25:31 
!
	.file	"gc.s"
	.align	8 
	.global	bstack
	.global	bvar
	.global	mstack
	.global	estack
	.global	bcons
	.global	bsymb
	.global	bstrg
	.global	fstrg
	.global	bcode
	.global	ccode
	.global	ecode
	.global	bvect
	.global	fvect
	.global	bheap
	.global	cheap
	.global	eheap
	.global	bnumb
	.global	fnumb
	.global	cnumb
	.global	bfloat
	.global	ffloat
	.global	fsymb
	.global	hashtab
	.global	itsoft
	.global	cstsyste
	.global	itstate
	.global	errfs
	.global	errfsgc
	.global	errfm
	.global	errfr
	.global	errff
	.global	errfn
	.global	errfv
	.global	errato
	.global	errnla
	.global	errwna
	.global	errnaa
	.global	errstc
	.global	errsym
	.global	errudf
	.global	errudm
	.global	erroob
	.global	errvec
	.global	curprmpt
	.global	tabchan
	.global	cntrlc
	.global	bufch
	.global	rubstrg
	.global	inisymb
	.global	inicst
	.global	asymb
	.global	impld
	.global	ringur
	.global	tabch
	.global	cachch
	.global	bufat
	.global	curread
	.global	cpkgc
	.global	impli
	.global	tabctyp
	.global	tabccod
	.global	probjt
	.global	bufpn
	.global	iexpld
	.global	lexpld
	.global	funcall
	.global	ffuncall
	.global	sysprot
	.global	llink
	.global	evalst
	.global	forme
	.global	funct
	.global	savea1
	.global	savea2
	.global	savea3
	.global	savea4
	.global	errname
	.global	intret
	.global	intllink
	.global	tabtypfn
	.global	tabcodfn
	.global	getfns
	.global	getbi
	.global	list
	.global	fzero
	.global	fltun
	.global	fltmun
	.global	fltimax
	.global	fltimin
	.global	bufstrg
	.global	gcinfo
	.global	gettype
	.global	gccons
	.global	gcsymb
	.global	gcstrg
	.global	gcvect
	.global	gcfloat
	.global	gcnumb
	.global	hgc
	.global	ini_gc
	.global	llsend
	.global	gcstmrk
	.global	smpvect
	.global	smpstrg
	.seg	"data1"
	.align	4
ngccons:
	.word 	0
ngcsymb:
	.word 	0
ngcstrg:
	.word 	0
ngcvect:
	.word 	0
ngcfloat:
	.word 	0
ngcnumb:
	.word 	0
ngch:
	.word 	0
ngcuser:
	.word 	0
freenu:
	.word 	0
freenm:
	.word 	0
freefu:
	.word 	0
freefm:
	.word 	0
freevu:
	.word 	0
freevm:
	.word 	0
freesu:
	.word 	0
freesm:
	.word 	0
freeyu:
	.word 	0
freeym:
	.word 	0
freelu:
	.word 	0
freelm:
	.word 	0
swheap:
	.word 	0
cpheap:
	.word 	0
oswheap:
	.word 	0
	.seg	"text"
ini_gc:
	.seg	"data1"   
	.align	4
pgc1:
	.asciz	"gc"
	.seg	"text"
bgc1:
	set	2,%l1
	set	pgc1,%l2
	set	gcuser,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gcuser,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc2:
	.asciz	"gcalarm"
	.seg	"text"
bgc2:
	set	7,%l1
	set	pgc2,%l2
	set	gcalarm,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gcalarm,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc3:
	.asciz	"gc-before-alarm"
	.seg	"text"
bgc3:
	set	15,%l1
	set	pgc3,%l2
	set	gcalarb,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gcalarb,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc4:
	.asciz	"gcinfo"
	.seg	"text"
bgc4:
	set	6,%l1
	set	pgc4,%l2
	set	gcinfo,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gcinfo,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc5:
	.asciz	"code"
	.seg	"text"
bgc5:
	set 	4,%l1
	set	pgc5,%l2
	set	152*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc6:
	.asciz	"heap"
	.seg	"text"
bgc6:
	set 	4,%l1
	set	pgc6,%l2
	set	153*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc7:
	.asciz	"tconscl"
	.seg	"text"
bgc7:
	set	7,%l1
	set	pgc7,%l2
	set	tconscl,%l3
	dec	8,%l3
	set	trash,%l4
	set	._tconscl,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc8:
	.asciz	"tconsmk"
	.seg	"text"
bgc8:
	set	7,%l1
	set	pgc8,%l2
	set	tconsmk,%l3
	dec	8,%l3
	set	trash,%l4
	set	._tconsmk,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc9:
	.asciz	"tcons"
	.seg	"text"
bgc9:
	set	5,%l1
	set	pgc9,%l2
	set	tcons,%l3
	dec	8,%l3
	set	trash,%l4
	set	._tcons,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc10:
	.asciz	"tconsp"
	.seg	"text"
bgc10:
	set	6,%l1
	set	pgc10,%l2
	set	tconsp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._tconsp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc11:
	.asciz	"freecons"
	.seg	"text"
bgc11:
	set	8,%l1
	set	pgc11,%l2
	set	frcons,%l3
	dec	8,%l3
	set	trash,%l4
	set	._frcons,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc12:
	.asciz	"freetree"
	.seg	"text"
bgc12:
	set	8,%l1
	set	pgc12,%l2
	set	frtree,%l3
	dec	8,%l3
	set	trash,%l4
	set	._frtree,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc13:
	.asciz	"type-of"
	.seg	"text"
bgc13:
	set	7,%l1
	set	pgc13,%l2
	set	gettype,%l3
	dec	8,%l3
	set	trash,%l4
	set	._gettype,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc14:
	.asciz	"subtypep"
	.seg	"text"
bgc14:
	set	8,%l1
	set	pgc14,%l2
	set	subtypep,%l3
	dec	8,%l3
	set	trash,%l4
	set	._subtypep,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc15:
	.asciz	"typep"
	.seg	"text"
bgc15:
	set	5,%l1
	set	pgc15,%l2
	set	typep,%l3
	dec	8,%l3
	set	trash,%l4
	set	._typep,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc16:
	.asciz	"send"
	.seg	"text"
bgc16:
	set	4,%l1
	set	pgc16,%l2
	set	llsend,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llsend,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc17:
	.asciz	"send-super"
	.seg	"text"
bgc17:
	set	10,%l1
	set	pgc17,%l2
	set	supsend,%l3
	dec	8,%l3
	set	trash,%l4
	set	._supsend,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc18:
	.asciz	"csend"
	.seg	"text"
bgc18:
	set	5,%l1
	set	pgc18,%l2
	set	csend,%l3
	dec	8,%l3
	set	trash,%l4
	set	._csend,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc19:
	.asciz	"send2"
	.seg	"text"
bgc19:
	set	5,%l1
	set	pgc19,%l2
	set	sendbi,%l3
	dec	8,%l3
	set	trash,%l4
	set	._sendbi,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc20:
	.asciz	"send-error"
	.seg	"text"
bgc20:
	set	10,%l1
	set	pgc20,%l2
	set	senderro,%l3
	dec	8,%l3
	set	trash,%l4
	set	._senderro,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,7*32,%o3
	set	cpkgc,%o4
	st   	%o3,[%o4+0]
	.seg	"data1"   
	.align	4
pgc21:
	.asciz	"structaccess"
	.seg	"text"
bgc21:
	set	12,%l1
	set	pgc21,%l2
	set	strctacc,%l3
	dec	8,%l3
	set	trash,%l4
	set	._strctacc,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc22:
	.asciz	"bignum-type"
	.seg	"text"
bgc22:
	set 	11,%l1
	set	pgc22,%l2
	set	169*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc23:
	.asciz	"mapallvector"
	.seg	"text"
bgc23:
	set	12,%l1
	set	pgc23,%l2
	set	smpvect,%l3
	dec	8,%l3
	set	trash,%l4
	set	._smpvect,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc24:
	.asciz	"mapallstring"
	.seg	"text"
bgc24:
	set	12,%l1
	set	pgc24,%l2
	set	smpstrg,%l3
	dec	8,%l3
	set	trash,%l4
	set	._smpstrg,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pgc25:
	.asciz	"finalize-flag"
	.seg	"text"
bgc25:
	set 	13,%l1
	set	pgc25,%l2
	set	172*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	st   	%i2,[%l1+0]
	.seg	"data1"   
	.align	4
pgc26:
	.asciz	"finalize-function"
	.seg	"text"
bgc26:
	set	17,%l1
	set	pgc26,%l2
	set	fnalzefn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fnalzefn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	set	cpkgc,%o4
	st   	%i2,[%o4+0]
	set	ngccons,%o4
	st   	%g0,[%o4+0]
	set	ngcsymb,%o4
	st   	%g0,[%o4+0]
	set	ngcstrg,%o4
	st   	%g0,[%o4+0]
	set	ngcvect,%o4
	st   	%g0,[%o4+0]
	set	ngcfloat,%o4
	st   	%g0,[%o4+0]
	set	ngcnumb,%o4
	st   	%g0,[%o4+0]
	set	ngcuser,%o4
	st   	%g0,[%o4+0]
	set	ngch,%o4
	st   	%g0,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
hgc:
	set	ngch,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	ngch+2,%o4
	sth	%o0,[%o4]
	ba,a	gcgo
	.align	4
gccons:
	set	ngccons,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	ngccons+2,%o4
	sth	%o0,[%o4]
	dec  	4,%l7
	call	gcgo
	st   	%o7,[%l7+0]
	.align	4
	set	freelm,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	bgt	gcret
	nop
	set	freelu,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,400
	bge	gcret
	nop
	ba,a	errfm
	.align	4
gcsymb:
	set	ngcsymb,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	ngcsymb+2,%o4
	sth	%o0,[%o4]
	dec  	4,%l7
	call	gcgo
	st   	%o7,[%l7+0]
	.align	4
	set	fsymb,%o0
	ld	[%o0+0],%o0
	cmp	%o0,%g0
	bne	gcret
	nop
	ba,a	errato
	.align	4
gcstrg:
	set	ngcstrg,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	ngcstrg+2,%o4
	sth	%o0,[%o4]
	dec  	4,%l7
	call	gcgo
	st   	%o7,[%l7+0]
	.align	4
	set	fstrg,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	bne	gcret
	nop
	ba,a	errfr
	.align	4
gcvect:
	set	ngcvect,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	ngcvect+2,%o4
	sth	%o0,[%o4]
	dec  	4,%l7
	call	gcgo
	st   	%o7,[%l7+0]
	.align	4
	set	fvect,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	bne	gcret
	nop
	ba,a	errfv
	.align	4
gcfloat:
	set	ngcfloat,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	ngcfloat+2,%o4
	sth	%o0,[%o4]
	dec  	4,%l7
	call	gcgo
	st   	%o7,[%l7+0]
	.align	4
	set	freefm,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	bgt	gcret
	nop
	set	freefu,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	bgt	gcret
	nop
	ba,a	errff
	.align	4
gcnumb:
	set	ngcnumb,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	ngcnumb+2,%o4
	sth	%o0,[%o4]
	dec  	4,%l7
	call	gcgo
	st   	%o7,[%l7+0]
	.align	4
	set	freenm,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	bgt	gcret
	nop
	set	freenu,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	bgt	gcret
	nop
	ba,a	errfn
	.align	4
gcret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gcgo:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	set	llink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	evalst,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	forme,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	funct,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	savea1,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	savea2,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	savea3,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	savea4,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	errname,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	intret,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	intllink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	iexpld,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	impli,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	ringur,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	curread,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	impld,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	lexpld,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	mov   	%l7,%l4
	dec  	4,%l7
	set	asymb,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	tabch,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	cachch,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	bufat,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	cpkgc,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	tabtypfn,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	tabcodfn,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	tabctyp,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	tabccod,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	bufpn,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	bufstrg,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	curprmpt,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	tabchan,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	cntrlc,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	bufch,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	rubstrg,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	cstsyste,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	fzero,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	fltun,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	fltmun,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	fltimax,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	fltimin,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	set	iexpld,%o4
	st   	%i2,[%o4+0]
	set	impli,%o4
	st   	%i2,[%o4+0]
	set	llink,%o4
	st   	%i2,[%o4+0]
	set	150*32,%l1
	add    	%i2,%l1,%l1
	mov   	%i2,%l2
	dec  	4,%l7
	call	itsoft
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	gcnoit
	st   	%o7,[%l7+0]
	.align	4
	set	149*32,%l1
	add    	%i2,%l1,%l1
	mov   	%i2,%l2
	dec  	4,%l7
	call	itsoft
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	mov   	%l4,%l7
	ld	[%l7+0],%o0
	set	lexpld,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	impld,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	curread,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	ringur,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	impli,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	iexpld,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	intllink,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	intret,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	errname,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	savea4,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	savea3,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	savea2,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	savea1,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	funct,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	forme,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	evalst,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	llink,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
gcend:
gcpopj:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gcnoit:
	set	itstate,%o0
	ld	[%o0+0],%o0
	cmp	%o0,%g0
	beq	gcst0
	nop
	set	gcst00,%l3
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
gcst00:
	set	itstate,%o4
	st   	%g0,[%o4+0]
gcst0:
gcstmrk:
	mov   	%l7,%l4
	set	bstack,%l3
	ld	[%l3+0],%l3
gcst1:
	ld	[%l4+0],%l1
	inc  	4,%l4
	dec  	4,%l7
	call	mark
	st   	%o7,[%l7+0]
	.align	4
	cmp	%l4,%l3
	bne	gcst1
	nop
	set	hashtab,%l1
	ld	[%l1+0],%l1
	set	bnumb,%o3
	ld	[%o3+0],%o3
	sub	%l1,%o3,%o2
	srl	%o2,3,%o2
	and	%o2,31,%o1
	srl	%o2,5,%o2
	sll	%o2,2,%o3
	set	btbgc,%o0
	ld	[%o0+0],%o0
	add	%o0,%o3,%o0
	ld	[%o0+0],%o2
	set	1,%o3
	sll	%o3,%o1,%o3
	or	%o2,%o3,%o2
	st   	%o2,[%o0+0]
gc27:
	set	hashtab,%o0
	ld	[%o0+0],%o0
	ld	[%o0+0],%o0
	ld	[%o0+4],%l4
	dec	1,%l4
gcat0:
	set	hashtab,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l4,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l4
	ba,a	gcat8
	.align	4
gcat1:
	mov   	%l4,%l3
	ld	[%l4+28],%o0
	cmp	%o0,%i1
	blt  	gc28
	nop
	cmp	%o0,%i2
	blt  	gcat5
	nop
gc28:
gcat2:
	ld	[%l4+28],%l4
gcat5:
	ld	[%l4+0],%l1
	add    	%i2,1*32,%o1
	cmp	%l1,%o1
	beq	gcatm1
	nop
	dec  	4,%l7
	call	mark
	st   	%o7,[%l7+0]
	.align	4
gcatm1:
	ld	[%l4+4],%l1
	cmp    	%l1,%i2
	beq	gcatm2
	nop
	dec  	4,%l7
	call	mark
	st   	%o7,[%l7+0]
	.align	4
gcatm2:
	ld	[%l4+8],%l1
	cmp	%l1,%g0
	beq	gcatm3
	nop
	dec  	4,%l7
	call	mark
	st   	%o7,[%l7+0]
	.align	4
gcatm3:
	ld	[%l4+12],%l1
	cmp    	%l1,%i2
	beq	gcatm4
	nop
	dec  	4,%l7
	call	mark
	st   	%o7,[%l7+0]
	.align	4
gcatm4:
	ld	[%l4+16],%l1
	cmp    	%l1,%i2
	beq	gcatm5
	nop
	dec  	4,%l7
	call	mark
	st   	%o7,[%l7+0]
	.align	4
gcatm5:
	ld	[%l4+20],%l1
	cmp	%l1,%i1
	blt  	gc29
	nop
	cmp	%l1,%i2
	blt  	gcatm9
	nop
gc29:
	ld	[%l4+28],%l1
	cmp	%l1,%i1
	blt  	gc30
	nop
	cmp	%l1,%i2
	blt  	gcatm9
	nop
gc30:
	ld	[%l1+20],%l1
gcatm9:
	dec  	4,%l7
	call	mark
	st   	%o7,[%l7+0]
	.align	4
	cmp	%l4,%l3
	bne	gcat2
	nop
gcat6:
	ld	[%l4+20],%l4
gcat8:
	cmp	%l4,%i2
	blt  	gc31
	nop
	cmp	%l4,%i3
	blt  	gcat1
	nop
gc31:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	gcat0
	nop
gcat9:
	ba,a	gcfnlz
	.align	4
mark:
lab102:
	.global	econs
	set	bnumb,%o1
	ld	[%o1+0],%o1
	cmp    	%l1,%o1
	blt  	lab103
	nop
	set	econs,%o1
	ld	[%o1+0],%o1
	cmp    	%l1,%o1
	bge  	lab103
	nop
	set	bnumb,%o3
	ld	[%o3+0],%o3
	sub	%l1,%o3,%o2
	srl	%o2,3,%o2
	and	%o2,31,%o1
	srl	%o2,5,%o2
	sll	%o2,2,%o3
	set	btbgc,%o0
	ld	[%o0+0],%o0
	add	%o0,%o3,%o0
	ld	[%o0+0],%o2
	srl 	%o2,%o1,%o2
	andcc	%o2,1,%o2
	bne  	lab103
	nop
gc32:
	set	bnumb,%o3
	ld	[%o3+0],%o3
	sub	%l1,%o3,%o2
	srl	%o2,3,%o2
	and	%o2,31,%o1
	srl	%o2,5,%o2
	sll	%o2,2,%o3
	set	btbgc,%o0
	ld	[%o0+0],%o0
	add	%o0,%o3,%o0
	ld	[%o0+0],%o2
	set	1,%o3
	sll	%o3,%o1,%o3
	or	%o2,%o3,%o2
	st   	%o2,[%o0+0]
gc33:
	cmp    	%l1,%i3
	bge	lab105
	nop
	cmp	%l1,%i0
	blt  	gc34
	nop
	cmp	%l1,%i1
	blt  	lab106
	nop
gc34:
	cmp	%l1,%i1
	blt  	gc35
	nop
	cmp	%l1,%i2
	blt  	lab104
	nop
gc35:
lab103:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
lab105:
	set	estack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfsgc
	nop
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+0],%l1
	dec  	4,%l7
	call	lab102
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	lab102
	.align	4
lab106:
	dec  	4,%l7
	st   	%l3,[%l7+0]
	ld	[%l1+0],%o0
	ld	[%o0+4],%l3
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	estack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfsgc
	nop
	ba,a	lab108
	.align	4
lab107:
	ld	[%l7+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l3,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l1
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	call	lab102
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
lab108:
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	deccc  	1,%l3
	and 	%l3,%l0,%l3
	bge  	lab107
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
lab104:
	ld	[%l1+4],%l1
	ba,a	lab102
	.align	4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gcfnlz:
	set	172*32,%l2
	add    	%i2,%l2,%l2
	ld	[%l2+0],%l2
	cmp    	%l2,%i2
	beq	gcfnlz9
	nop
	set	173*32,%l2
	add    	%i2,%l2,%l2
	lduh	[%l2+24],%l3
	set	2,%o1
	cmp	%l3,%o1
	bne	gcfnlz9
	nop
	ld	[%l2+8],%l3
	set	bvect,%l1
	ld	[%l1+0],%l1
gcfnlz2:
	set	bnumb,%o3
	ld	[%o3+0],%o3
	sub	%l1,%o3,%o2
	srl	%o2,3,%o2
	and	%o2,31,%o1
	srl	%o2,5,%o2
	sll	%o2,2,%o3
	set	btbgc,%o0
	ld	[%o0+0],%o0
	add	%o0,%o3,%o0
	ld	[%o0+0],%o2
	srl 	%o2,%o1,%o2
	andcc	%o2,1,%o2
	bne  	gcfnlz8
	nop
gc36:
	ld	[%l1+0],%l2
	cmp    	%l2,%i2
	beq	gcfnlz8
	nop
	cmp	%l2,%i0
	blt  	gc37
	nop
	cmp	%l2,%i1
	blt  	gcfnlz8
	nop
gc37:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	set	gcfnlz6,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
gcfnlz6:
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
gcfnlz8:
	inc 	8,%l1
	cmp    	%l1,%i1
	blt  	gcfnlz2
	nop
gcfnlz9:
	ba,a	gcompact
	.align	4
gcompact:
	set	bheap,%l3
	ld	[%l3+0],%l3
	set	bheap,%l4
	ld	[%l4+0],%l4
	ba,a	hsweep8
	.align	4
hsweep2:
	ld	[%l3+0],%l1
	cmp	%l1,%i1
	blt  	gc38
	nop
	cmp	%l1,%i2
	blt  	hsweep4
	nop
gc38:
	cmp	%l1,%i0
	blt  	gc39
	nop
	cmp	%l1,%i1
	blt  	hsweep5
	nop
gc39:
	cmp	%l1,%g3
	blt  	gc40
	nop
	cmp	%l1,%i0
	blt  	hsweep6
	nop
gc40:
	cmp	%l1,%i2
	blt  	gc41
	nop
	cmp	%l1,%i3
	blt  	hsweep7
	nop
gc41:
	.seg	"data1"   
	.align	4
sgc42:	.asciz	"* HEAP-OVNI *"
	.seg	"text"
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	set	sgc42,%o1
	set	13,%o0
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
	set	bheap,%o0
	ld	[%o0+0],%o0
	set	cheap,%o1
	ld	[%o1+0],%o1
	set	eheap,%o2
	ld	[%o2+0],%o2
	set	oswheap,%o3
	ld	[%o3+0],%o3
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
	call 	llovni,4
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
	ba,a	hsweep9
	.align	4
hsweep4:
	set	oswheap,%o4
	st   	%l3,[%o4+0]
	ld	[%l3+4],%l2
	mov   	%l2,%o0
	add    	%l3,%o0,%l3
	inc  	13,%l3
	and  	%l3,-4,%l3
	set	bnumb,%o3
	ld	[%o3+0],%o3
	sub	%l1,%o3,%o2
	srl	%o2,3,%o2
	and	%o2,31,%o1
	srl	%o2,5,%o2
	sll	%o2,2,%o3
	set	btbgc,%o0
	ld	[%o0+0],%o0
	add	%o0,%o3,%o0
	ld	[%o0+0],%o2
	srl 	%o2,%o1,%o2
	andcc	%o2,1,%o2
	beq  	hsweep8
	nop
gc43:
	set	oswheap,%o0
	ld	[%o0+0],%o0
	cmp	%o0,%l4
	bne	hsweep41
	nop
	mov   	%l3,%l4
	ba,a	hsweep8
	.align	4
hsweep41:
	set	oswheap,%o0
	ld	[%o0+0],%o0
	mov   	%l3,%o1
	sub    	%o1,%o0,%o1
	sra  	%o1,2,%o1
	mov   	%l4,%o2
	cmp    	%o2,%o0
	blt     ggc44
	nop
	mov   	%o1,%o3
	sll  	%o3,2,%o3
	add    	%o0,%o3,%o0
	ba         fgc44
	add    	%o2,%o3,%o2
	.align	4
qgc44:
	ld	[%o0+0],%o3
	st   	%o3,[%o2+0]
fgc44:	dec  	4,%o0
	deccc  	%o1
	bge,a   qgc44
	dec  	4,%o2
	ba,a       egc44
rgc44:
	st   	%o3,[%o2+0]
	inc  	4,%o2
	inc  	4,%o0
ggc44:	deccc  	%o1
	bge,a     rgc44
	ld	[%o0+0],%o3
egc44:
	st   	%l4,[%l1+0]
	mov   	%l2,%o0
	add    	%l4,%o0,%l4
	inc  	13,%l4
	and  	%l4,-4,%l4
	ba,a	hsweep8
	.align	4
hsweep5:
	set	oswheap,%o4
	st   	%l3,[%o4+0]
	ld	[%l3+4],%l2
	mov   	%l2,%o0
	sll  	%o0,2,%o0
	add    	%l3,%o0,%l3
	inc  	8,%l3
	set	bnumb,%o3
	ld	[%o3+0],%o3
	sub	%l1,%o3,%o2
	srl	%o2,3,%o2
	and	%o2,31,%o1
	srl	%o2,5,%o2
	sll	%o2,2,%o3
	set	btbgc,%o0
	ld	[%o0+0],%o0
	add	%o0,%o3,%o0
	ld	[%o0+0],%o2
	srl 	%o2,%o1,%o2
	andcc	%o2,1,%o2
	beq  	hsweep8
	nop
gc45:
	set	oswheap,%o0
	ld	[%o0+0],%o0
	cmp	%o0,%l4
	bne	hsweep51
	nop
	mov   	%l3,%l4
	ba,a	hsweep8
	.align	4
hsweep51:
	set	oswheap,%o0
	ld	[%o0+0],%o0
	mov   	%l3,%o1
	sub    	%o1,%o0,%o1
	sra  	%o1,2,%o1
	mov   	%l4,%o2
	cmp    	%o2,%o0
	blt     ggc46
	nop
	mov   	%o1,%o3
	sll  	%o3,2,%o3
	add    	%o0,%o3,%o0
	ba         fgc46
	add    	%o2,%o3,%o2
	.align	4
qgc46:
	ld	[%o0+0],%o3
	st   	%o3,[%o2+0]
fgc46:	dec  	4,%o0
	deccc  	%o1
	bge,a   qgc46
	dec  	4,%o2
	ba,a       egc46
rgc46:
	st   	%o3,[%o2+0]
	inc  	4,%o2
	inc  	4,%o0
ggc46:	deccc  	%o1
	bge,a     rgc46
	ld	[%o0+0],%o3
egc46:
	st   	%l4,[%l1+0]
	mov   	%l2,%o0
	sll  	%o0,2,%o0
	add    	%l4,%o0,%l4
	inc  	8,%l4
	ba,a	hsweep8
	.align	4
hsweep6:
	set	oswheap,%o4
	st   	%l3,[%o4+0]
	set	bnumb,%o3
	ld	[%o3+0],%o3
	sub	%l1,%o3,%o2
	srl	%o2,3,%o2
	and	%o2,31,%o1
	srl	%o2,5,%o2
	sll	%o2,2,%o3
	set	btbgc,%o0
	ld	[%o0+0],%o0
	add	%o0,%o3,%o0
	ld	[%o0+0],%o2
	srl 	%o2,%o1,%o2
	andcc	%o2,1,%o2
	beq  	hsweep8
	nop
gc47:
	set	oswheap,%o0
	ld	[%o0+0],%o0
	cmp	%o0,%l4
	bne	hsweep61
	nop
	mov   	%l3,%l4
	ba,a	hsweep8
	.align	4
hsweep61:
	set	oswheap,%o0
	ld	[%o0+0],%o0
	set	swheap,%o1
	ld	[%o1+0],%o1
	sub    	%o1,%o0,%o1
	sra  	%o1,2,%o1
	mov   	%l4,%o2
	cmp    	%o2,%o0
	blt     ggc48
	nop
	mov   	%o1,%o3
	sll  	%o3,2,%o3
	add    	%o0,%o3,%o0
	ba         fgc48
	add    	%o2,%o3,%o2
	.align	4
qgc48:
	ld	[%o0+0],%o3
	st   	%o3,[%o2+0]
fgc48:	dec  	4,%o0
	deccc  	%o1
	bge,a   qgc48
	dec  	4,%o2
	ba,a       egc48
rgc48:
	st   	%o3,[%o2+0]
	inc  	4,%o2
	inc  	4,%o0
ggc48:	deccc  	%o1
	bge,a     rgc48
	ld	[%o0+0],%o3
egc48:
	st   	%l4,[%l1+0]
	ba,a	hsweep8
	.align	4
hsweep7:
	set	oswheap,%o4
	st   	%l3,[%o4+0]
	set	bnumb,%o3
	ld	[%o3+0],%o3
	sub	%l1,%o3,%o2
	srl	%o2,3,%o2
	and	%o2,31,%o1
	srl	%o2,5,%o2
	sll	%o2,2,%o3
	set	btbgc,%o0
	ld	[%o0+0],%o0
	add	%o0,%o3,%o0
	ld	[%o0+0],%o2
	srl 	%o2,%o1,%o2
	andcc	%o2,1,%o2
	beq  	hsweep8
	nop
gc49:
	set	oswheap,%o0
	ld	[%o0+0],%o0
	cmp	%o0,%l4
	bne	hsweep71
	nop
	mov   	%l3,%l4
	ba,a	hsweep8
	.align	4
hsweep71:
	set	oswheap,%o0
	ld	[%o0+0],%o0
	mov   	%l3,%o1
	sub    	%o1,%o0,%o1
	sra  	%o1,2,%o1
	mov   	%l4,%o2
	cmp    	%o2,%o0
	blt     ggc50
	nop
	mov   	%o1,%o3
	sll  	%o3,2,%o3
	add    	%o0,%o3,%o0
	ba         fgc50
	add    	%o2,%o3,%o2
	.align	4
qgc50:
	ld	[%o0+0],%o3
	st   	%o3,[%o2+0]
fgc50:	dec  	4,%o0
	deccc  	%o1
	bge,a   qgc50
	dec  	4,%o2
	ba,a       egc50
rgc50:
	st   	%o3,[%o2+0]
	inc  	4,%o2
	inc  	4,%o0
ggc50:	deccc  	%o1
	bge,a     rgc50
	ld	[%o0+0],%o3
egc50:
	st   	%l4,[%l1+0]
hsweep8:
	set	cheap,%o1
	ld	[%o1+0],%o1
	cmp	%l3,%o1
	blt	hsweep2
	nop
	set	cheap,%o4
	st   	%l4,[%o4+0]
hsweep9:
	ba,a	gcsweep
	.align	4
gcsweep:
	mov   	%g0,%l1
	mov   	%g0,%l2
	mov   	%g0,%l3
	set	cnumb,%l4
	ld	[%l4+0],%l4
	set	bnumb,%o1
	ld	[%o1+0],%o1
	cmp    	%l4,%o1
	blt  	gcswn4
	nop
	cmp    	%l4,%g3
	bge  	gcswn4
	nop
gcswn1:
	set	bnumb,%o3
	ld	[%o3+0],%o3
	sub	%l4,%o3,%o2
	srl	%o2,3,%o2
	and	%o2,31,%o1
	srl	%o2,5,%o2
	sll	%o2,2,%o3
	set	btbgc,%o0
	ld	[%o0+0],%o0
	add	%o0,%o3,%o0
	ld	[%o0+0],%o2
	srl 	%o2,%o1,%o3
	andcc	%o3,1,%o3
	beq  	gc51
	nop
	set	1,%o3
	sll	%o3,%o1,%o3
	andn	%o2,%o3,%o2
	st   	%o2,[%o0+0]
	ba,a    	gcswn3
	nop
gc51:
	st   	%l1,[%l4+0]
	mov   	%l4,%l1
	inc	1,%l2
	cmp	%l2,1024
	blt	gc52
	nop
	mov   	%g0,%l2
	inc	1,%l3
gc52:
gcswn3:
	inc 	4,%l4
	cmp    	%l4,%g3
	blt  	gcswn1
	nop
gcswn4:
	set	fnumb,%o4
	st   	%l1,[%o4+0]
	set	freenu,%o4
	st   	%l2,[%o4+0]
	set	freenm,%o4
	st   	%l3,[%o4+0]
	mov   	%g0,%l1
	mov   	%g0,%l2
	mov   	%g0,%l3
	set	bfloat,%l4
	ld	[%l4+0],%l4
	cmp    	%l4,%g3
	blt  	gcswf4
	nop
	cmp    	%l4,%i0
	bge  	gcswf4
	nop
gcswf1:
	set	bnumb,%o3
	ld	[%o3+0],%o3
	sub	%l4,%o3,%o2
	srl	%o2,3,%o2
	and	%o2,31,%o1
	srl	%o2,5,%o2
	sll	%o2,2,%o3
	set	btbgc,%o0
	ld	[%o0+0],%o0
	add	%o0,%o3,%o0
	ld	[%o0+0],%o2
	srl 	%o2,%o1,%o3
	andcc	%o3,1,%o3
	beq  	gc53
	nop
	set	1,%o3
	sll	%o3,%o1,%o3
	andn	%o2,%o3,%o2
	st   	%o2,[%o0+0]
	ba,a    	gcswf3
	nop
gc53:
	st   	%l1,[%l4+0]
	mov   	%l4,%l1
	inc	1,%l2
	cmp	%l2,1024
	blt	gc54
	nop
	mov   	%g0,%l2
	inc	1,%l3
gc54:
gcswf3:
	inc 	8,%l4
	cmp    	%l4,%i0
	blt  	gcswf1
	nop
gcswf4:
	set	ffloat,%o4
	st   	%l1,[%o4+0]
	set	freefu,%o4
	st   	%l2,[%o4+0]
	set	freefm,%o4
	st   	%l3,[%o4+0]
	mov   	%i2,%l1
	mov   	%g0,%l2
	mov   	%g0,%l3
	set	bvect,%l4
	ld	[%l4+0],%l4
gcswv1:
	set	bnumb,%o3
	ld	[%o3+0],%o3
	sub	%l4,%o3,%o2
	srl	%o2,3,%o2
	and	%o2,31,%o1
	srl	%o2,5,%o2
	sll	%o2,2,%o3
	set	btbgc,%o0
	ld	[%o0+0],%o0
	add	%o0,%o3,%o0
	ld	[%o0+0],%o2
	srl 	%o2,%o1,%o3
	andcc	%o3,1,%o3
	beq  	gc55
	nop
	set	1,%o3
	sll	%o3,%o1,%o3
	andn	%o2,%o3,%o2
	st   	%o2,[%o0+0]
	ba,a    	gcswv2
	nop
gc55:
	st   	%l1,[%l4+0]
	mov   	%l4,%l1
	inc	1,%l2
	cmp	%l2,1024
	blt	gc56
	nop
	mov   	%g0,%l2
	inc	1,%l3
gc56:
gcswv2:
	inc 	8,%l4
	cmp    	%l4,%i1
	blt  	gcswv1
	nop
	set	fvect,%o4
	st   	%l1,[%o4+0]
	set	freevu,%o4
	st   	%l2,[%o4+0]
	set	freevm,%o4
	st   	%l3,[%o4+0]
	mov   	%i2,%l1
	mov   	%g0,%l2
	mov   	%g0,%l3
	set	bstrg,%l4
	ld	[%l4+0],%l4
gcsws1:
	set	bnumb,%o3
	ld	[%o3+0],%o3
	sub	%l4,%o3,%o2
	srl	%o2,3,%o2
	and	%o2,31,%o1
	srl	%o2,5,%o2
	sll	%o2,2,%o3
	set	btbgc,%o0
	ld	[%o0+0],%o0
	add	%o0,%o3,%o0
	ld	[%o0+0],%o2
	srl 	%o2,%o1,%o3
	andcc	%o3,1,%o3
	beq  	gc57
	nop
	set	1,%o3
	sll	%o3,%o1,%o3
	andn	%o2,%o3,%o2
	st   	%o2,[%o0+0]
	ba,a    	gcsws2
	nop
gc57:
	st   	%l1,[%l4+0]
	mov   	%l4,%l1
	inc	1,%l2
	cmp	%l2,1024
	blt	gc58
	nop
	mov   	%g0,%l2
	inc	1,%l3
gc58:
gcsws2:
	inc 	8,%l4
	cmp    	%l4,%i2
	blt  	gcsws1
	nop
	set	fstrg,%o4
	st   	%l1,[%o4+0]
	set	freesu,%o4
	st   	%l2,[%o4+0]
	set	freesm,%o4
	st   	%l3,[%o4+0]
	mov   	%g0,%l2
	mov   	%g0,%l3
	set	fsymb,%l1
	ld	[%l1+0],%l1
	ba,a	gcswyc3
	.align	4
gcswyc2:
	ld	[%l1+20],%l1
	inc	1,%l2
	cmp	%l2,1024
	blt	gc59
	nop
	mov   	%g0,%l2
	inc	1,%l3
gc59:
gcswyc3:
	cmp	%l1,%i2
	blt  	gc60
	nop
	cmp	%l1,%i3
	blt  	gcswyc2
	nop
gc60:
	set	freeyu,%o4
	st   	%l2,[%o4+0]
	set	freeym,%o4
	st   	%l3,[%o4+0]
	set	hashtab,%o0
	ld	[%o0+0],%o0
	ld	[%o0+0],%o0
	ld	[%o0+4],%l1
	ba,a	gcswy9
	.align	4
gcswy2:
	mov   	%l1,%l2
	set	hashtab,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l1,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l1
	ba,a	gcswy8
	.align	4
gcswy3:
	mov   	%l1,%l3
	mov   	%l1,%l4
gcswy4:
	set	bnumb,%o3
	ld	[%o3+0],%o3
	sub	%l1,%o3,%o2
	srl	%o2,3,%o2
	and	%o2,31,%o1
	srl	%o2,5,%o2
	sll	%o2,2,%o3
	set	btbgc,%o0
	ld	[%o0+0],%o0
	add	%o0,%o3,%o0
	ld	[%o0+0],%o2
	srl 	%o2,%o1,%o3
	andcc	%o3,1,%o3
	beq  	gc61
	nop
	set	1,%o3
	sll	%o3,%o1,%o3
	andn	%o2,%o3,%o2
	st   	%o2,[%o0+0]
	ba,a    	gcswy5
	nop
gc61:
	set	bvar,%o1
	ld	[%o1+0],%o1
	cmp    	%l1,%o1
	blt  	gcswy5
	nop
	cmp    	%l1,%i3
	bge  	gcswy5
	nop
	ld	[%l1+0],%o0
	add    	%i2,1*32,%o1
	cmp	%o0,%o1
	bne	gcswy5
	nop
	ld	[%l1+4],%o0
	cmp    	%o0,%i2
	bne	gcswy5
	nop
	ld	[%l1+16],%o0
	cmp    	%o0,%i2
	bne	gcswy5
	nop
	dec  	4,%l7
	st   	%l2,[%l7+0]
	lduh	[%l1+24],%l2
	mov   	%l2,%o1
	cmp    	%o1,0
	beq	gcswys
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
gcswy5:
	ld	[%l1+28],%o0
	cmp	%o0,%i1
	blt  	gc62
	nop
	cmp	%o0,%i2
	blt  	gcswy6
	nop
gc62:
gcswy50:
	mov   	%l1,%l4
	ld	[%l1+28],%l1
	cmp	%l1,%l3
	bne	gcswy4
	nop
gcswy6:
	mov   	%l3,%l2
	ld	[%l3+20],%l1
gcswy8:
	cmp	%l1,%i2
	blt  	gc63
	nop
	cmp	%l1,%i3
	blt  	gcswy3
	nop
gc63:
gcswy9:
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	deccc  	1,%l1
	and 	%l1,%l0,%l1
	bge  	gcswy2
	nop
	ba,a	gcswcons
	.align	4
gcswys:
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l1+28],%o0
	cmp	%o0,%i1
	blt  	gc64
	nop
	cmp	%o0,%i2
	blt  	gcswys1
	nop
gc64:
	cmp	%l1,%l3
	bne	gcswys2
	nop
	ba,a	gcswys3
	.align	4
gcswys1:
	ld	[%l1+20],%l4
	cmp    	%l2,%g3
	blt	gcswys12
	nop
	st   	%l4,[%l2+20]
	ba,a	gcswys14
	.align	4
gcswys12:
	set	hashtab,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l2,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	st   	%l4,[%o1+0]
gcswys14:
	set	fsymb,%o3
	ld	[%o3+0],%o3
	st   	%o3,[%l1+20]
	set	fsymb,%o4
	st   	%l1,[%o4+0]
	set	freeyu,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	freeyu,%o4
	st   	%o0,[%o4+0]
	cmp	%o0,1024
	blt	gc65
	nop
	set	freeyu,%o4
	st   	%g0,[%o4+0]
	set	freeym,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	freeym,%o4
	st   	%o0,[%o4+0]
gc65:
	mov   	%l4,%l1
	ba,a	gcswy8
	.align	4
gcswys2:
	ld	[%l1+28],%o3
	st   	%o3,[%l4+28]
	ld	[%l3+28],%o1
	cmp	%l3,%o1
	beq	gcswys20
	nop
	set	fsymb,%o3
	ld	[%o3+0],%o3
	st   	%o3,[%l1+20]
	set	fsymb,%o4
	st   	%l1,[%o4+0]
	set	freeyu,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	freeyu,%o4
	st   	%o0,[%o4+0]
	cmp	%o0,1024
	blt	gc66
	nop
	set	freeyu,%o4
	st   	%g0,[%o4+0]
	set	freeym,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	freeym,%o4
	st   	%o0,[%o4+0]
gc66:
	mov   	%l4,%l1
	ba,a	gcswy50
	.align	4
gcswys20:
	ld	[%l1+20],%o3
	st   	%o3,[%l3+28]
	set	fsymb,%o3
	ld	[%o3+0],%o3
	st   	%o3,[%l1+20]
	set	fsymb,%o4
	st   	%l1,[%o4+0]
	set	freeyu,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	freeyu,%o4
	st   	%o0,[%o4+0]
	cmp	%o0,1024
	blt	gc67
	nop
	set	freeyu,%o4
	st   	%g0,[%o4+0]
	set	freeym,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	freeym,%o4
	st   	%o0,[%o4+0]
gc67:
	ba,a	gcswy6
	.align	4
gcswys3:
	cmp    	%l2,%g3
	blt	gcswys30
	nop
	ld	[%l3+28],%o3
	st   	%o3,[%l2+20]
	ba,a	gcswys31
	.align	4
gcswys30:
	set	hashtab,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l2,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%l3+28],%o0
	st   	%o0,[%o1+0]
gcswys31:
	mov   	%l3,%l4
gcswys32:
	ld	[%l4+28],%l4
	ld	[%l4+28],%o0
	cmp	%o0,%l3
	bne	gcswys32
	nop
	ld	[%l3+28],%o3
	st   	%o3,[%l4+28]
	ld	[%l3+28],%l3
	ld	[%l3+28],%o1
	cmp	%l3,%o1
	bne	gcswys33
	nop
	ld	[%l3+20],%o3
	st   	%o3,[%l3+28]
	ld	[%l1+20],%o3
	st   	%o3,[%l3+20]
	ba,a	gcswys34
	.align	4
gcswys33:
	ld	[%l1+20],%o3
	st   	%o3,[%l3+20]
gcswys34:
	set	fsymb,%o3
	ld	[%o3+0],%o3
	st   	%o3,[%l1+20]
	set	fsymb,%o4
	st   	%l1,[%o4+0]
	set	freeyu,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	freeyu,%o4
	st   	%o0,[%o4+0]
	cmp	%o0,1024
	blt	gc68
	nop
	set	freeyu,%o4
	st   	%g0,[%o4+0]
	set	freeym,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	freeym,%o4
	st   	%o0,[%o4+0]
gc68:
	mov   	%l3,%l1
	ba,a	gcswy3
	.align	4
	.global	gcswcons
gcswcons:
	mov   	%i2,%l1
	mov   	%g0,%l2
	mov   	%g0,%l3
	set	bcons,%l4
	ld	[%l4+0],%l4
	dec  	4,%l7 
	st   	%g7,[%l7+0] 
	dec  	4,%l7 
	st   	%g6,[%l7+0] 
	dec  	4,%l7 
	st   	%o5,[%l7+0] 
	set     econs,%g6 
	ld      [%g6+0],%g6 
solswpcons:
	set     btbin,%o7 
	ld      [%o7+0],%o7 
	set     bnumb,%o3 
	ld      [%o3+0],%o3 
	sub     %l4,%o3,%o2 
	srl     %o2,3,%o2 
	and     %o2,31,%o1 
	srl     %o2,5,%o2 
	sll     %o2,2,%o3 
	set     btbgc,%g7 
	ld      [%g7+0],%g7 
	add     %g7,%o3,%g7 
startword:
	set     1,%o0  
	ld      [%o7+0],%o5 
	ld      [%g7+0],%i5 
continueword:
	andcc   %i5,%o0,%g0 
	bne     finished_word_p 
	nop
	st      %l1,[%l4+4] 
	st      %i2,[%l4+0] 
	mov     %l4,%l1 
	inc	1,%l2
finished_word_p:
	inc     8,%l4 
	sll     %o0,1,%o0 
	cmp     %o0,0 
	bne     continueword 
	nop
	and     %o5,%i5,%o5 
	mov     %g0,%i5 
	st      %i5,[%g7+0] 
	st      %o5,[%o7+0] 
	inc     4,%g7 
	inc     4,%o7 
	cmp     %l4,%g6 
	blt     startword 
	nop
	mov   	%l2,%o0
	and     %l2,1023,%l2
	srl	%o0,10,%l3
	ld	[%l7+0],%o5 
	inc  	4,%l7 
	ld	[%l7+0],%g6 
	inc  	4,%l7 
	ld	[%l7+0],%g7 
	inc  	4,%l7 
	mov   	%l1,%g4
	set	freelu,%o4
	st   	%l2,[%o4+0]
	set	freelm,%o4
	st   	%l3,[%o4+0]
	ba,a	gcswend
	.align	4
gcswend:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	gcuser
!
	.seg	"data1"   
	.align	4
.gcuser:	.word    0
	._gcuser = 5
	.seg	"text"
	.align	8
	.global	gcuser
gcuser:
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	gcuser5
	nop
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	gcuser4
	nop
	set	1,%l1
	set	148*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4
gcuser4:
	mov   	%i2,%l1
	dec  	4,%l7
	st   	%l1,[%l7+0]
gcuser5:
	set	ngcuser,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	ngcuser+2,%o4
	sth	%o0,[%o4]
	dec  	4,%l7
	call	gcgo
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%i2
	bne	gcinfo0
	nop
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	gcalarb
!
	.seg	"data1"   
	.align	4
.gcalarb:	.word    0
	._gcalarb = 1
	.seg	"text"
	.align	8
	.global	gcalarb
gcalarb:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	gcalarm
!
	.seg	"data1"   
	.align	4
.gcalarm:	.word    0
	._gcalarm = 1
	.seg	"text"
	.align	8
	.global	gcalarm
gcalarm:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	fnalzefn
!
	.seg	"data1"   
	.align	4
.fnalzefn:	.word    0
	._fnalzefn = 2
	.seg	"text"
	.align	8
	.global	fnalzefn
fnalzefn:
	.seg	"data1"   
	.align	4
sgc69:	.asciz	"Calling #:system:finalize-function"
	.seg	"text"
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	set	sgc69,%o1
	set	34,%o0
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
	set	bfloat,%g3
	ld	[%g3+0],%g3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	gcinfo
!
	.seg	"data1"   
	.align	4
.gcinfo:	.word    0
	._gcinfo = 5
	.seg	"text"
	.align	8
gcinfo:
	cmp	%l4,%g0
	beq	gcinfo0
	nop
	set	1,%o1
	cmp	%l4,%o1
	beq	gcinfo1
	nop
	set	1,%l1
	set	151*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4
gcinfo0:
	mov   	%i2,%l4
gcinfou:
	dec  	4,%l7
	set	148*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	ngccons,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	ngcsymb,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	ngcstrg,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	ngcvect,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	ngcfloat,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	ngcnumb,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	ngch,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	ngcuser,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	528*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%l7+0]
	set	freelu,%l1
	ld	[%l1+0],%l1
	set	freelm,%l2
	ld	[%l2+0],%l2
	dec  	4,%l7
	call	gcinfz
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	723*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%l7+0]
	set	freeyu,%l1
	ld	[%l1+0],%l1
	set	freeym,%l2
	ld	[%l2+0],%l2
	dec  	4,%l7
	call	gcinfz
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	700*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%l7+0]
	set	freesu,%l1
	ld	[%l1+0],%l1
	set	freesm,%l2
	ld	[%l2+0],%l2
	dec  	4,%l7
	call	gcinfz
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	737*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%l7+0]
	set	freevu,%l1
	ld	[%l1+0],%l1
	set	freevm,%l2
	ld	[%l2+0],%l2
	dec  	4,%l7
	call	gcinfz
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	584*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%l7+0]
	set	freefu,%l1
	ld	[%l1+0],%l1
	set	freefm,%l2
	ld	[%l2+0],%l2
	dec  	4,%l7
	call	gcinfz
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	585*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%l7+0]
	set	freenu,%l1
	ld	[%l1+0],%l1
	set	freenm,%l2
	ld	[%l2+0],%l2
	dec  	4,%l7
	call	gcinfz
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	153*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%l7+0]
	cmp    	%l4,%i2
	beq	gcinfou2
	nop
	set	bheap,%o0
	ld	[%o0+0],%o0
	set	eheap,%o1
	ld	[%o1+0],%o1
	sub    	%o1,%o0,%o1
	mov	%o1,%o2
	and	%o2,1023,%o2
	srl  	%o1,10,%o1
	mov   	%o2,%l1
	mov   	%o1,%l2
	ba,a	gcinfou3
	.align	4
gcinfou2:
	set	cheap,%o0
	ld	[%o0+0],%o0
	set	eheap,%o1
	ld	[%o1+0],%o1
	sub    	%o1,%o0,%o1
	mov	%o1,%o2
	and	%o2,1023,%o2
	srl  	%o1,10,%o1
	mov   	%o2,%l1
	mov   	%o1,%l2
gcinfou3:
	cmp    	%i2,%g4
	bne    	gc70
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
gc70:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%l1,[%l2+4]
	mov   	%l2,%l1
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	152*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%l7+0]
	cmp    	%l4,%i2
	beq	gcinfou4
	nop
	set	bcode,%o0
	ld	[%o0+0],%o0
	set	ecode,%o1
	ld	[%o1+0],%o1
	sub    	%o1,%o0,%o1
	mov	%o1,%o2
	and	%o2,1023,%o2
	srl  	%o1,10,%o1
	mov   	%o2,%l1
	mov   	%o1,%l2
	ba,a	gcinfou5
	.align	4
gcinfou4:
	set	ccode,%o0
	ld	[%o0+0],%o0
	set	ecode,%o1
	ld	[%o1+0],%o1
	sub    	%o1,%o0,%o1
	mov	%o1,%o2
	and	%o2,1023,%o2
	srl  	%o1,10,%o1
	mov   	%o2,%l1
	mov   	%o1,%l2
gcinfou5:
	cmp    	%i2,%g4
	bne    	gc71
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
gc71:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%l1,[%l2+4]
	mov   	%l2,%l1
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	25,%l4
	ba,a	list
	.align	4
gcinfo1:
	ld	[%l7+0],%l1
	inc  	4,%l7
	mov   	%g0,%l2
	mov   	%g0,%l3
	set	bnumb,%l4
	ld	[%l4+0],%l4
	set	bnumb,%o1
	ld	[%o1+0],%o1
	cmp    	%l4,%o1
	blt  	gcinfon9
	nop
	cmp    	%l4,%g3
	bge  	gcinfon9
	nop
gcinfon1:
	inc	1,%l2
	cmp	%l2,1024
	blt	gc72
	nop
	mov   	%g0,%l2
	inc	1,%l3
gc72:
	inc 	4,%l4
	cmp    	%l4,%g3
	blt  	gcinfon1
	nop
gcinfon9:
	set	freenu,%o4
	st   	%l2,[%o4+0]
	set	freenm,%o4
	st   	%l3,[%o4+0]
	mov   	%g0,%l2
	mov   	%g0,%l3
	set	bfloat,%l4
	ld	[%l4+0],%l4
	cmp    	%l4,%g3
	blt  	gcinfof9
	nop
	cmp    	%l4,%i0
	bge  	gcinfof9
	nop
gcinfof1:
	inc	1,%l2
	cmp	%l2,1024
	blt	gc73
	nop
	mov   	%g0,%l2
	inc	1,%l3
gc73:
	inc 	8,%l4
	cmp    	%l4,%i0
	blt  	gcinfof1
	nop
gcinfof9:
	set	freefu,%o4
	st   	%l2,[%o4+0]
	set	freefm,%o4
	st   	%l3,[%o4+0]
	mov   	%g0,%l2
	mov   	%g0,%l3
	set	bvect,%l4
	ld	[%l4+0],%l4
gcinfov1:
	inc	1,%l2
	cmp	%l2,1024
	blt	gc74
	nop
	mov   	%g0,%l2
	inc	1,%l3
gc74:
	inc 	8,%l4
	cmp    	%l4,%i1
	blt  	gcinfov1
	nop
	set	freevu,%o4
	st   	%l2,[%o4+0]
	set	freevm,%o4
	st   	%l3,[%o4+0]
	mov   	%g0,%l2
	mov   	%g0,%l3
	set	bstrg,%l4
	ld	[%l4+0],%l4
gcinfos1:
	inc	1,%l2
	cmp	%l2,1024
	blt	gc75
	nop
	mov   	%g0,%l2
	inc	1,%l3
gc75:
	inc 	8,%l4
	cmp    	%l4,%i2
	blt  	gcinfos1
	nop
	set	freesu,%o4
	st   	%l2,[%o4+0]
	set	freesm,%o4
	st   	%l3,[%o4+0]
	mov   	%g0,%l2
	mov   	%g0,%l3
	set	bsymb,%l4
	ld	[%l4+0],%l4
gcinfoy1:
	inc	1,%l2
	cmp	%l2,1024
	blt	gc76
	nop
	mov   	%g0,%l2
	inc	1,%l3
gc76:
	inc 	32,%l4
	cmp    	%l4,%i3
	blt  	gcinfoy1
	nop
	set	freeyu,%o4
	st   	%l2,[%o4+0]
	set	freeym,%o4
	st   	%l3,[%o4+0]
	mov   	%g0,%l2
	mov   	%g0,%l3
	set	bcons,%l4
	ld	[%l4+0],%l4
gcinfol1:
	inc	1,%l2
	cmp	%l2,1024
	blt	gc77
	nop
	mov   	%g0,%l2
	inc	1,%l3
gc77:
	inc 	8,%l4
	set	econs,%o1
	ld	[%o1+0],%o1
	cmp    	%l4,%o1
	blt  	gcinfol1
	nop
	set	freelu,%o4
	st   	%l2,[%o4+0]
	set	freelm,%o4
	st   	%l3,[%o4+0]
	mov   	%g0,%l4
	ba,a	gcinfou
	.align	4
gcinfz:
	mov   	%l2,%o1
	cmp    	%o1,0
	beq	gcinfz9
	nop
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,32
	bge	gcinfz1
	nop
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	set	1024,%o0
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
	set	bfloat,%g3
	ld	[%g3+0],%g3
	and	%o0,%l0,%l2
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	add	%l1,%o1,%l1
	and 	%l1,%l0,%l1
	ba,a	gcinfz9
	.align	4
gcinfz1:
	cmp    	%i2,%g4
	bne    	gc78
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
gc78:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%l1,[%l2+4]
	mov   	%l2,%l1
gcinfz9:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	tcons
!
	.seg	"data1"   
	.align	4
.tcons:	.word    0
	._tcons = 3
	.seg	"text"
	.align	8
	.global	tcons
tcons:
	cmp    	%i2,%g4
	bne    	gc79
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
gc79:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%l2,[%l1+4]
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

!
!	FENTRY	tconsmk
!
	.seg	"data1"   
	.align	4
.tconsmk:	.word    0
	._tconsmk = 2
	.seg	"text"
	.align	8
	.global	tconsmk
tconsmk:
	cmp    	%l1,%i3
	blt	tcmker
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
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
tcmker:
	set	155*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnla
	.align	4

!
!	FENTRY	tconscl
!
	.seg	"data1"   
	.align	4
.tconscl:	.word    0
	._tconscl = 2
	.seg	"text"
	.align	8
	.global	tconscl
tconscl:
	cmp    	%l1,%i3
	blt	tccler
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
	andn	%o2,%o3,%o2
	st   	%o2,[%o0+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
tccler:
	set	154*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnla
	.align	4

!
!	FENTRY	tconsp
!
	.seg	"data1"   
	.align	4
.tconsp:	.word    0
	._tconsp = 2
	.seg	"text"
	.align	8
	.global	tconsp
tconsp:
	cmp    	%l1,%i3
	blt	tconsp1
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
	srl 	%o2,%o1,%o2
	andcc	%o2,1,%o2
	bne  	tconsp2
	nop
tconsp1:
	mov   	%i2,%l1
tconsp2:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	frcons
!
	.seg	"data1"   
	.align	4
.frcons:	.word    0
	._frcons = 2
	.seg	"text"
	.align	8
	.global	frcons
frcons:
	set	itstate,%o0
	ld	[%o0+0],%o0
	cmp	%o0,%g0
	beq	frcs1
	nop
	set	frcs0,%l3
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
frcs0:
	set	itstate,%o4
	st   	%g0,[%o4+0]
frcs1:
	mov   	%g4,%l2
	cmp    	%l1,%i3
	blt	frcser
	nop
	st   	%i2,[%l1+0]
	st   	%l2,[%l1+4]
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
	andn	%o2,%o3,%o2
	st   	%o2,[%o0+0]
	mov   	%l1,%g4
	mov   	%i2,%l2
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
frcser:
	set	158*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnla
	.align	4

!
!	FENTRY	frtree
!
	.seg	"data1"   
	.align	4
.frtree:	.word    0
	._frtree = 2
	.seg	"text"
	.align	8
	.global	frtree
frtree:
	set	itstate,%o0
	ld	[%o0+0],%o0
	cmp	%o0,%g0
	beq	frtr1
	nop
	set	frtr0,%l3
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
frtr0:
	set	itstate,%o4
	st   	%g0,[%o4+0]
frtr1:
	mov   	%g4,%l4
	dec  	4,%l7
	call	frtr3
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l4,%g4
	mov   	%i2,%l4
	mov   	%i2,%l3
	mov   	%i2,%l2
	mov   	%i2,%l1
frtret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
frtr2:
	mov   	%l3,%l1
frtr3:
	cmp    	%l1,%i3
	blt	frtret
	nop
frtr4:
	ld	[%l1+0],%l2
	ld	[%l1+4],%l3
	st   	%l4,[%l1+4]
	st   	%i2,[%l1+0]
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
	andn	%o2,%o3,%o2
	st   	%o2,[%o0+0]
	mov   	%l1,%l4
	cmp    	%l2,%i3
	blt	frtr2
	nop
	dec  	4,%l7
	st   	%l3,[%l7+0]
	mov   	%l2,%l1
	dec  	4,%l7
	call	frtr4
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	frtr3
	.align	4

!
!	FENTRY	gettype
!
	.seg	"data1"   
	.align	4
.gettype:	.word    0
	._gettype = 2
	.seg	"text"
	.align	8
gettype:
	cmp    	%l1,%i3
	blt	gettype0
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
	srl 	%o2,%o1,%o2
	andcc	%o2,1,%o2
	beq  	gettype2
	nop
	ld	[%l1+0],%l1
	cmp	%l1,%i2
	blt  	gc80
	nop
	cmp	%l1,%i3
	blt  	gettyper
	nop
gc80:
	cmp    	%l1,%g3
	blt	gettypfx
	nop
	cmp    	%l1,%i3
	blt	gettyper
	nop
	ld	[%l1+0],%o0
	cmp    	%o0,%i2
	blt  	gettypfx
	nop
	cmp    	%o0,%i3
	bge  	gettypfx
	nop
gettyper:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gettype0:
	cmp	%l1,%i0
	blt  	gc81
	nop
	cmp	%l1,%i1
	blt  	gettype1
	nop
gc81:
	cmp    	%l1,%g3
	blt	gettype6
	nop
	cmp	%l1,%g3
	blt  	gc82
	nop
	cmp	%l1,%i0
	blt  	gettype5
	nop
gc82:
	cmp	%l1,%i1
	blt  	gc83
	nop
	cmp	%l1,%i2
	blt  	gettype1
	nop
gc83:
	cmp    	%l1,%i2
	beq	gettype3
	nop
	cmp	%l1,%i2
	blt  	gc84
	nop
	cmp	%l1,%i3
	blt  	gettype4
	nop
gc84:
gettype6:
	set	585*32,%l1
	add    	%i2,%l1,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gettype1:
	ld	[%l1+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gettype2:
	set	528*32,%l1
	add    	%i2,%l1,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gettype3:
	set	505*32,%l1
	add    	%i2,%l1,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gettype4:
	set	723*32,%l1
	add    	%i2,%l1,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gettype5:
	set	584*32,%l1
	add    	%i2,%l1,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gettypfx:
	set	169*32,%l1
	add    	%i2,%l1,%l1
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	typep
!
	.seg	"data1"   
	.align	4
.typep:	.word    0
	._typep = 3
	.seg	"text"
	.align	8
	.global	typep
typep:
	dec  	4,%l7
	set	subtypep,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	gettype
	.align	4

!
!	FENTRY	subtypep
!
	.seg	"data1"   
	.align	4
.subtypep:	.word    0
	._subtypep = 3
	.seg	"text"
	.align	8
	.global	subtypep
subtypep:
	cmp    	%l1,%i2
	blt  	subtypr1
	nop
	cmp    	%l1,%i3
	bge  	subtypr1
	nop
	cmp    	%l2,%i2
	blt  	subtypr2
	nop
	cmp    	%l2,%i3
	bge  	subtypr2
	nop
	ba,a	subtyp1
	.align	4
subtyp0:
	ld	[%l1+12],%l1
subtyp1:
	cmp	%l1,%l2
	beq	subtyp3
	nop
	cmp    	%l1,%i3
	bge	subtyp5
	nop
	cmp    	%l1,%i2
	blt  	subtyp2
	nop
	cmp    	%l1,%i3
	bge  	subtyp2
	nop
	cmp    	%l1,%i2
	bne	subtyp0
	nop
subtyp2:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
subtyp3:
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
subtyp4:
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%i3
	blt	subtyp7
	nop
subtyp5:
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+0],%l1
	dec  	4,%l7
	call	subtyp7
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	subtyp4
	nop
	inc  	4*1,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
subtyp6:
	ld	[%l1+12],%l1
subtyp7:
	cmp	%l1,%l2
	beq	subtyp9
	nop
	cmp    	%l1,%i3
	bge	subtyp5
	nop
	cmp    	%l1,%i2
	blt  	subtyp8
	nop
	cmp    	%l1,%i3
	bge  	subtyp8
	nop
	cmp    	%l1,%i2
	bne	subtyp6
	nop
subtyp8:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
subtyp9:
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
subtypr2:
	mov   	%l2,%l1
subtypr1:
	set	161*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4

!
!	FENTRY	llsend
!
	.seg	"data1"   
	.align	4
.llsend:	.word    0
	._llsend = 5
	.seg	"text"
	.align	8
llsend:
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,1
	ble	sender
	nop
	dec	1,%l4
	dec	1,%l4
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l1
	inc	1,%l4
	cmp    	%l1,%i0
	blt  	send2
	nop
	cmp    	%l1,%i1
	bge  	send2
	nop
	ld	[%l1+4],%l1
send1:
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l2
	add    	%i2,0*32,%l3
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	call	getfns
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	cmp    	%l1,%i2
	beq	send3
	nop
	mov   	%l4,%o1
	sll  	%o1,2,%o1
	add    	%o1,%l7,%o1
	set	gcpopj,%o0
	dec	8,%o0
	st   	%o0,[%o1+0]
	ba,a	ffuncall
	.align	4
send2:
	dec  	4,%l7
	call	gettype
	st   	%o7,[%l7+0]
	.align	4
	ba,a	send1
	.align	4
send3:
	mov   	%l4,%l3
	ba,a	send5
	.align	4
send4:
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	gc85
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
gc85:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
send5:
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	deccc  	1,%l3
	and 	%l3,%l0,%l3
	bge  	send4
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	2,%l4
	set	167*32,%l1
	add    	%i2,%l1,%l1
	ba,a	ffuncall
	.align	4
sender:
	set	2,%l1
	set	163*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4

!
!	FENTRY	senderro
!
	.seg	"data1"   
	.align	4
.senderro:	.word    0
	._senderro = 3
	.seg	"text"
	.align	8
	.global	senderro
senderro:
	cmp    	%i2,%g4
	bne    	gc86
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
gc86:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%l2,[%l1+4]
	set	163*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errudm
	.align	4

!
!	FENTRY	csend
!
	.seg	"data1"   
	.align	4
.csend:	.word    0
	._csend = 5
	.seg	"text"
	.align	8
	.global	csend
csend:
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,2
	ble	csender
	nop
	dec  	4,%l7
	set	csend1,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	dec	1,%l4
	dec	1,%l4
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l1
	ba,a	gettype
	.align	4
csend1:
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l2
	add    	%i2,0*32,%l3
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	call	getfns
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	cmp    	%l1,%i2
	beq	csend3
	nop
	mov   	%l4,%o1
	sll  	%o1,2,%o1
	add    	%o1,%l7,%o1
	set	gcpopj,%o0
	dec	8,%o0
	st   	%o0,[%o1+0]
	inc	1,%l4
	mov   	%l4,%o1
	sll  	%o1,2,%o1
	add    	%o1,%l7,%o1
	set	gcpopj,%o0
	dec	8,%o0
	st   	%o0,[%o1+0]
	dec	1,%l4
	ba,a	ffuncall
	.align	4
csend3:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	add	%l4,2,%l4
	and 	%l4,%l0,%l4
	ba,a	funcall
	.align	4
csender:
	set	3,%l1
	set	165*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4

!
!	FENTRY	supsend
!
	.seg	"data1"   
	.align	4
.supsend:	.word    0
	._supsend = 5
	.seg	"text"
	.align	8
	.global	supsend
supsend:
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,2
	ble	supsenr1
	nop
	dec  	4,%l7
	st   	%l4,[%l7+0]
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l2
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	sub	%l4,2,%l4
	and 	%l4,%l0,%l4
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l1
	dec  	4,%l7
	call	typep
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	supsenr3
	nop
	ld	[%l7+0],%l4
	inc  	4,%l7
	dec	1,%l4
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l1
	cmp    	%l1,%i2
	blt  	supsenr2
	nop
	cmp    	%l1,%i3
	bge  	supsenr2
	nop
	ld	[%l1+12],%l1
	mov   	%l4,%o1
	sll  	%o1,2,%o1
	add    	%o1,%l7,%o1
	set	gcpopj,%o0
	dec	8,%o0
	st   	%o0,[%o1+0]
	dec	1,%l4
	ba,a	send1
	.align	4
supsenr1:
	set	3,%l1
	set	164*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4
supsenr2:
	set	164*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4
supsenr3:
	set	164*32,%l2
	add    	%i2,%l2,%l2
	ld	[%l7+0],%l4
	inc  	4,%l7
	dec	1,%l4
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l1
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	sub	%l4,2,%l4
	and 	%l4,%l0,%l4
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l3
	cmp    	%i2,%g4
	bne    	gc87
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
gc87:
	st   	%l3,[%g4+0]
	mov   	%g4,%l3
	ld	[%g4+4],%g4
	st   	%i2,[%l3+4]
	cmp    	%i2,%g4
	bne    	gc88
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
gc88:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%l3,[%l1+4]
	ba,a	erroob
	.align	4

!
!	FENTRY	sendbi
!
	.seg	"data1"   
	.align	4
.sendbi:	.word    0
	._sendbi = 5
	.seg	"text"
	.align	8
	.global	sendbi
sendbi:
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,2
	ble	sendbier
	nop
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec	1,%l4
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l1
	dec  	4,%l7
	call	gettype
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l1
	dec  	4,%l7
	call	gettype
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l2
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	dec	1,%l4
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l3
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	call	getbi
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	cmp    	%l1,%i2
	beq	sendbi3
	nop
	mov   	%l4,%o1
	sll  	%o1,2,%o1
	add    	%o1,%l7,%o1
	set	gcpopj,%o0
	dec	8,%o0
	st   	%o0,[%o1+0]
	ba,a	ffuncall
	.align	4
sendbi2:
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	gc89
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
gc89:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
sendbi3:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	sendbi2
	nop
	set	166*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errudm
	.align	4
sendbier:
	set	3,%l1
	set	166*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4

!
!	FENTRY	strctacc
!
	.seg	"data1"   
	.align	4
.strctacc:	.word    0
	._strctacc = 5
	.seg	"text"
	.align	8
	.global	strctacc
strctacc:
	mov   	%l4,%o1
	cmp    	%o1,5
	bne	fieldr1
	nop
	ld	[%l7+8],%l1
	cmp    	%l1,%i0
	blt  	fieldr2
	nop
	cmp    	%l1,%i1
	bge  	fieldr2
	nop
	ld	[%l7+16],%l2
	cmp    	%l2,%i2
	blt  	fieldr3
	nop
	cmp    	%l2,%i3
	bge  	fieldr3
	nop
	ld	[%l2+12],%l2
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	call	typep
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l1,%i2
	beq	fieldr4
	nop
	ld	[%l7+12],%l3
	sll	%l3,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	fieldr5
	nop
	ld	[%l2+0],%o0
	ld	[%o0+4],%l4
	sll	%l3,16,%o0
	sra	%o0,16,%o0
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bge	fieldr4
	nop
	ld	[%l7+0],%l4
fieldn:
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	fieldget
	nop
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	fieldset
	nop
	set	1,%l1
	ld	[%l7+16],%l2
	ba,a	errwna
	.align	4
fieldget:
	ld	[%l2+0],%o1
	inc  	8,%o1
	mov   	%l3,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l1
	inc  	4*5,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
fieldset:
	ld	[%l7+4],%l1
	ld	[%l2+0],%o1
	inc  	8,%o1
	mov   	%l3,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	st   	%l1,[%o1+0]
	inc  	4*5,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
fieldr1:
	set	5,%l1
	set	168*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4
fieldr4:
	mov   	%l2,%l1
fieldr2:
	ld	[%l7+16],%l2
	ba,a	errstc
	.align	4
fieldr3:
	mov   	%l2,%l1
	ld	[%l7+16],%l2
	ba,a	errnaa
	.align	4
fieldr5:
	mov   	%l3,%l1
	set	168*32,%l2
	add    	%i2,%l2,%l2
	ba,a	erroob
	.align	4

!
!	FENTRY	smpvect
!
	.seg	"data1"   
	.align	4
.smpvect:	.word    0
	._smpvect = 2
	.seg	"text"
	.align	8
smpvect:
	set	bvect,%l2
	ld	[%l2+0],%l2
smpvect2:
	ld	[%l2+0],%o0
	cmp	%o0,%i0
	blt  	gc90
	nop
	cmp	%o0,%i1
	blt  	smpvect4
	nop
gc90:
	ld	[%l2+0],%o0
	cmp    	%o0,%i2
	beq	smpvect4
	nop
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	smpvect3,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	2,%l4
	ba,a	funcall
	.align	4
smpvect3:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
smpvect4:
	inc 	8,%l2
	cmp    	%l2,%i1
	blt  	smpvect2
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	smpstrg
!
	.seg	"data1"   
	.align	4
.smpstrg:	.word    0
	._smpstrg = 2
	.seg	"text"
	.align	8
smpstrg:
	set	bstrg,%l2
	ld	[%l2+0],%l2
smpstrg2:
	ld	[%l2+0],%o0
	cmp	%o0,%i1
	blt  	gc91
	nop
	cmp	%o0,%i2
	blt  	smpstrg4
	nop
gc91:
	ld	[%l2+0],%o0
	cmp    	%o0,%i2
	beq	smpstrg4
	nop
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	smpstrg3,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	2,%l4
	ba,a	funcall
	.align	4
smpstrg3:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
smpstrg4:
	inc 	8,%l2
	cmp    	%l2,%i2
	blt  	smpstrg2
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
! end
