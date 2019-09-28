!
!	File print.s expansion for sparc arch=v8plus.
!	This file is part of Le-Lisp kernel.
!	Generated on Sat Oct   7 17 18:55:23 
!
	.file	"print.s"
	.align	8 
	.global	bvar
	.global	itsoft
	.global	mstack
	.global	maxchan
	.global	errfsp
	.global	errsym
	.global	errnia
	.global	errnla
	.global	errnva
	.global	erroob
	.global	errvec
	.global	errwna
	.global	getsetn
	.global	gccons
	.global	gcfloat
	.global	gcnumb
	.global	gettype
	.global	ostream
	.global	tystrg
	.global	tynewln
	.global	curoutch
	.global	inisymb
	.global	inicst
	.global	fascii
	.global	cpkgc
	.global	tabch
	.global	ffuncall
	.global	sysprot
	.global	findtag
	.global	unbind3
	.global	dlink
	.global	savea4
	.global	savea1
	.global	getfns
	.global	list
	.global	getnumi
	.global	stringa1
	.global	makestrg
	.global	strgsymb
	.global	ini_print
	.global	outch
	.global	flulin
	.global	bufout
	.global	pocour
	.global	maxpocou
	.global	bufpn
	.global	probj
	.global	probjt
	.global	nbleft
	.global	nbrig
	.global	obase
	.global	iexpld
	.global	lexpld
	.global	u_print
	.seg	"data1"
	.align	4
bufout:
	.word 	0
bufpn:
	.word 	0
obase:
	.word 	0
prmdp:
	.word 	0
prcdp:
	.word 	0
prmlp:
	.word 	0
prclp:
	.word 	0
prmln:
	.word 	0
prcln:
	.word 	0
prmpk:
	.word 	0
prcpk:
	.word 	0
pocour:
	.word 	0
nbleft:
	.word 	0
nbrig:
	.word 	0
maxpocou:
	.word 	0
iexpld:
	.word 	0
lexpld:
	.word 	0
	.seg	"text"
ini_print:
	set	iexpld,%o4
	st   	%i2,[%o4+0]
	set	10,%o3
	set	obase,%o4
	st   	%o3,[%o4+0]
	set	100,%o3
	set	prmdp,%o4
	st   	%o3,[%o4+0]
	set	2000,%o3
	set	prmlp,%o4
	st   	%o3,[%o4+0]
	set	2000,%o3
	set	prmln,%o4
	st   	%o3,[%o4+0]
	set	50,%o3
	set	prmpk,%o4
	st   	%o3,[%o4+0]
	set	nbleft,%o4
	st   	%g0,[%o4+0]
	set	78,%o3
	set	nbrig,%o4
	st   	%o3,[%o4+0]
	set	nbrig,%o3
	ld	[%o3+0],%o3
	set	maxpocou,%o4
	st   	%o3,[%o4+0]
	set	256,%l1
	mov   	%g0,%l2
	dec  	4,%l7
	call	makestrg
	st   	%o7,[%l7+0]
	.align	4
	set	bufpn,%o4
	st   	%l1,[%o4+0]
	.seg	"data1"   
	.align	4
ppri1:
	.asciz	"eol"
	.seg	"text"
bpri1:
	set	3,%l1
	set	ppri1,%l2
	set	eol,%l3
	dec	8,%l3
	set	trash,%l4
	set	._eol,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ppri2:
	.asciz	"flush"
	.seg	"text"
bpri2:
	set	5,%l1
	set	ppri2,%l2
	set	llfflush,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llfflush,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ppri3:
	.asciz	"pratom"
	.seg	"text"
bpri3:
	set	6,%l1
	set	ppri3,%l2
	set	upratom,%l3
	dec	8,%l3
	set	trash,%l4
	set	._upratom,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ppri4:
	.asciz	"prin"
	.seg	"text"
bpri4:
	set	4,%l1
	set	ppri4,%l2
	set	prin,%l3
	dec	8,%l3
	set	trash,%l4
	set	._prin,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ppri5:
	.asciz	"print"
	.seg	"text"
bpri5:
	set	5,%l1
	set	ppri5,%l2
	set	print,%l3
	dec	8,%l3
	set	trash,%l4
	set	._print,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ppri6:
	.asciz	"prinflush"
	.seg	"text"
bpri6:
	set	9,%l1
	set	ppri6,%l2
	set	prinflush,%l3
	dec	8,%l3
	set	trash,%l4
	set	._prinflush,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ppri7:
	.asciz	"terpri"
	.seg	"text"
bpri7:
	set	6,%l1
	set	ppri7,%l2
	set	terpri,%l3
	dec	8,%l3
	set	trash,%l4
	set	._terpri,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ppri8:
	.asciz	"princh"
	.seg	"text"
bpri8:
	set	6,%l1
	set	ppri8,%l2
	set	princh,%l3
	dec	8,%l3
	set	trash,%l4
	set	._princh,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ppri9:
	.asciz	"princn"
	.seg	"text"
bpri9:
	set	6,%l1
	set	ppri9,%l2
	set	princod,%l3
	dec	8,%l3
	set	trash,%l4
	set	._princod,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ppri10:
	.asciz	"ptype"
	.seg	"text"
bpri10:
	set	5,%l1
	set	ppri10,%l2
	set	fptype,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fptype,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ppri11:
	.asciz	"printline"
	.seg	"text"
bpri11:
	set	9,%l1
	set	ppri11,%l2
	set	prline,%l3
	dec	8,%l3
	set	trash,%l4
	set	._prline,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ppri12:
	.asciz	"printlevel"
	.seg	"text"
bpri12:
	set	10,%l1
	set	ppri12,%l2
	set	prlevel,%l3
	dec	8,%l3
	set	trash,%l4
	set	._prlevel,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ppri13:
	.asciz	"printlength"
	.seg	"text"
bpri13:
	set	11,%l1
	set	ppri13,%l2
	set	prlength,%l3
	dec	8,%l3
	set	trash,%l4
	set	._prlength,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ppri14:
	.asciz	"obase"
	.seg	"text"
bpri14:
	set	5,%l1
	set	ppri14,%l2
	set	fobase,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fobase,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ppri15:
	.asciz	"lmargin"
	.seg	"text"
bpri15:
	set	7,%l1
	set	ppri15,%l2
	set	lmargin,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lmargin,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ppri16:
	.asciz	"rmargin"
	.seg	"text"
bpri16:
	set	7,%l1
	set	ppri16,%l2
	set	rmargin,%l3
	dec	8,%l3
	set	trash,%l4
	set	._rmargin,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ppri17:
	.asciz	"outpos"
	.seg	"text"
bpri17:
	set	6,%l1
	set	ppri17,%l2
	set	outpos,%l3
	dec	8,%l3
	set	trash,%l4
	set	._outpos,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ppri18:
	.asciz	"outbuf"
	.seg	"text"
bpri18:
	set	6,%l1
	set	ppri18,%l2
	set	outbuf,%l3
	dec	8,%l3
	set	trash,%l4
	set	._outbuf,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ppri19:
	.asciz	"explode"
	.seg	"text"
bpri19:
	set	7,%l1
	set	ppri19,%l2
	set	explode,%l3
	dec	8,%l3
	set	trash,%l4
	set	._explode,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ppri20:
	.asciz	"explodech"
	.seg	"text"
bpri20:
	set	9,%l1
	set	ppri20,%l2
	set	explodech,%l3
	dec	8,%l3
	set	trash,%l4
	set	._explodech,%o0
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
ppri21:
	.asciz	"print-for-read"
	.seg	"text"
bpri21:
	set 	14,%l1
	set	ppri21,%l2
	set	327*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	st   	%i2,[%l1+0]
	.seg	"data1"   
	.align	4
ppri22:
	.asciz	"print-case-flag"
	.seg	"text"
bpri22:
	set 	15,%l1
	set	ppri22,%l2
	set	328*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	st   	%i2,[%l1+0]
	.seg	"data1"   
	.align	4
ppri23:
	.asciz	"print-package-flag"
	.seg	"text"
bpri23:
	set 	18,%l1
	set	ppri23,%l2
	set	329*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,3*32,%o3
	st   	%o3,[%l1+0]
	set	cpkgc,%o4
	st   	%i2,[%o4+0]
	.seg	"data1"   
	.align	4
ppri24:
	.asciz	"#<>"
	.seg	"text"
bpri24:
	set 	3,%l1
	set	ppri24,%l2
	set	330*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
prpopj:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
prtrue:
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
u_print:
	dec  	4,%l7
	call	probj
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	fullin
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
flulin:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	set	308*32,%l1
	add    	%i2,%l1,%l1
	mov   	%i2,%l2
	dec  	4,%l7
	call	itsoft
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
fullin:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	set	307*32,%l1
	add    	%i2,%l1,%l1
	mov   	%i2,%l2
	dec  	4,%l7
	call	itsoft
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

!
!	FENTRY	eol
!
	.seg	"data1"   
	.align	4
.eol:	.word    0
	._eol = 1
	.seg	"text"
	.align	8
	.global	eol
eol:
	dec  	4,%l7
	call	outlin
	st   	%o7,[%l7+0]
	.align	4
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llfflush
!
	.seg	"data1"   
	.align	4
.llfflush:	.word    0
	._llfflush = 1
	.seg	"text"
	.align	8
	.global	llfflush
llfflush:
	set	iexpld,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	bne	prtrue
	nop
	set	pocour,%l2
	ld	[%l2+0],%l2
	mov   	%l2,%o1
	cmp    	%o1,0
	beq	prtrue
	nop
	set	ostream,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	set	maxchan,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	blt	fflush1
	nop
fflush0:
	set	bufout,%l1
	ld	[%l1+0],%l1
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	pocour,%o4
	st   	%g0,[%o4+0]
	dec  	4,%l7
	call	tystrg
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o0
	set	pocour,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ba,a	fflush3
	.align	4
fflush1:
	set	pocour,%l1
	ld	[%l1+0],%l1
	set	curoutch,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,12,%o1
	ld	[%o1+0],%l3
	mov   	%l3,%o1
	cmp    	%o1,2
	beq	fflush2
	nop
	set	ostream,%o0
	ld	[%o0+0],%o0
	set	bufout,%o2
	ld	[%o2+0],%o2
	ld	[%o2+0],%o2
	inc  	8,%o2
	mov   	%l1,%o1
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	mov   	%o2,%o2
	mov   	%o1,%o1
	mov   	%o0,%o0
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	outfl,3
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
	ba,a	fflush3
	.align	4
fflush2:
	set	ostream,%o0
	ld	[%o0+0],%o0
	set	bufout,%o2
	ld	[%o2+0],%o2
	ld	[%o2+0],%o2
	inc  	8,%o2
	mov   	%l1,%o1
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	mov   	%o2,%o2
	mov   	%o1,%o1
	mov   	%o0,%o0
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	outfl,3
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
fflush3:
	dec  	4,%l7
	call	outli2
	st   	%o7,[%l7+0]
	.align	4
	set	pocour,%o4
	st   	%g0,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
outlin:
	set	iexpld,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	bne	expls
	nop
	set	ostream,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	set	maxchan,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	blt	outli1
	nop
	set	bufout,%l1
	ld	[%l1+0],%l1
	set	pocour,%l2
	ld	[%l2+0],%l2
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	pocour,%o4
	st   	%g0,[%o4+0]
	dec  	4,%l7
	call	tystrg
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	tynewln
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o0
	set	pocour,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ba,a	outli2
	.align	4
outli1:
	set	curoutch,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,12,%o1
	ld	[%o1+0],%l3
	mov   	%l3,%o1
	cmp    	%o1,2
	beq	outli11
	nop
	set	ostream,%o0
	ld	[%o0+0],%o0
	set	bufout,%o2
	ld	[%o2+0],%o2
	ld	[%o2+0],%o2
	inc  	8,%o2
	set	pocour,%o1
	ld	[%o1+0],%o1
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	mov   	%o2,%o2
	mov   	%o1,%o1
	mov   	%o0,%o0
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	outfl,3
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
	ba,a	outli2
	.align	4
outli11:
	set	ostream,%o0
	ld	[%o0+0],%o0
	set	bufout,%o2
	ld	[%o2+0],%o2
	ld	[%o2+0],%o2
	inc  	8,%o2
	set	pocour,%o1
	ld	[%o1+0],%o1
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	mov   	%o2,%o2
	mov   	%o1,%o1
	mov   	%o0,%o0
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	outf,3
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
outli2:
	set	pocour,%l2
	ld	[%l2+0],%l2
	set	bufout,%l1
	ld	[%l1+0],%l1
	ba,a	outli4
	.align	4
outli3:
	ld	[%l1+0],%o1
	inc	8,%o1
	add  	%l2,%o1,%o1
	set	32,%o0
	stb  	%o0,[%o1+0]
outli4:
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	deccc  	1,%l2
	and 	%l2,%l0,%l2
	bge  	outli3
	nop
	set	nbleft,%o3
	ld	[%o3+0],%o3
	set	pocour,%o4
	st   	%o3,[%o4+0]
outlret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
chklp:
	set	maxpocou,%o0
	ld	[%o0+0],%o0
	set	nbrig,%o1
	ld	[%o1+0],%o1
	cmp   	%o0,%o1
	bne	flulin
	nop
	set	prclp,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,1
	bne	chklp1
	nop
	set	pocour,%l1
	ld	[%l1+0],%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sub	%l1,3,%l1
	and 	%l1,%l0,%l1
	set	46,%l2
	set	bufout,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l1,%o1,%o1
	stb  	%l2,[%o1+0]
	inc	1,%l1
	set	bufout,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l1,%o1,%o1
	stb  	%l2,[%o1+0]
	inc	1,%l1
	set	bufout,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l1,%o1,%o1
	stb  	%l2,[%o1+0]
	ba,a	probjend
	.align	4
chklp1:
	set	prclp,%o0
	ld	[%o0+0],%o0
	dec	1,%o0
	set	prclp+2,%o4
	sth	%o0,[%o4]
	ba,a	fullin
	.align	4
outch:
	set	iexpld,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	bne	explch
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	pocour,%l1
	ld	[%l1+0],%l1
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	set	maxpocou,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	blt	outch1
	nop
	dec  	4,%l7
	call	chklp
	st   	%o7,[%l7+0]
	.align	4
	set	pocour,%l1
	ld	[%l1+0],%l1
outch1:
	set	bufout,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l1,%o1,%o1
	stb  	%l4,[%o1+0]
	set	pocour,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	pocour+2,%o4
	sth	%o0,[%o4]
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
outsp:
	set	iexpld,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	bne	expls
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	pocour,%l1
	ld	[%l1+0],%l1
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	set	maxpocou,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bge	outsp1
	nop
outsp0:
	set	bufout,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l1,%o1,%o1
	set	32,%o0
	stb  	%o0,[%o1+0]
	set	pocour,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	pocour+2,%o4
	sth	%o0,[%o4]
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
outsp1:
	set	maxpocou,%o0
	ld	[%o0+0],%o0
	set	nbrig,%o1
	ld	[%o1+0],%o1
	cmp   	%o0,%o1
	bne	outsp2
	nop
	dec  	4,%l7
	call	chklp
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
outsp2:
	dec  	4,%l7
	call	chklp
	st   	%o7,[%l7+0]
	.align	4
	set	pocour,%l1
	ld	[%l1+0],%l1
	ba,a	outsp0
	.align	4
outshrp:
	set	iexpld,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	bne	explsh
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	pocour,%l1
	ld	[%l1+0],%l1
	inc	1,%l1
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	set	maxpocou,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	blt	outshrp1
	nop
	dec  	4,%l7
	call	chklp
	st   	%o7,[%l7+0]
	.align	4
	set	pocour,%l1
	ld	[%l1+0],%l1
	inc	1,%l1
outshrp1:
	set	bufout,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l1,%o1,%o1
	stb  	%l4,[%o1+0]
	dec	1,%l1
	set	bufout,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l1,%o1,%o1
	set	35,%o0
	stb  	%o0,[%o1+0]
	set	pocour,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	add	%o0,2,%o0
	set	pocour+2,%o4
	sth	%o0,[%o4]
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
outet:
	set	prcln,%l2
	ld	[%l2+0],%l2
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	outet1
	nop
	mov   	%l2,%o1
	cmp    	%o1,1
	beq	outddd
	nop
outet1:
	set	prcln,%o0
	ld	[%o0+0],%o0
	dec	1,%o0
	set	prcln+2,%o4
	sth	%o0,[%o4]
	set	38,%l4
	ba,a	outch
	.align	4
outddd:
	set	46,%l4
	dec  	4,%l7
	call	outch
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	outch
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	outch
	st   	%o7,[%l7+0]
	.align	4
	ba,a	probjend
	.align	4
pratom:
	set	prcln,%l2
	ld	[%l2+0],%l2
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	pratom1
	nop
	mov   	%l2,%o1
	cmp    	%o1,1
	beq	outddd
	nop
	set	prcln,%o0
	ld	[%o0+0],%o0
	dec	1,%o0
	set	prcln+2,%o4
	sth	%o0,[%o4]
pratom1:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	gettype
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	blt  	pratom2
	nop
	cmp    	%l1,%i3
	bge  	pratom2
	nop
	set	310*32,%l2
	add    	%i2,%l2,%l2
	mov   	%i2,%l3
	dec  	4,%l7
	call	getfns
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	pratom2
	nop
	set	310*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l1,%o1
	beq	pratom2
	nop
	set	1,%l4
	ba,a	ffuncall
	.align	4
pratom2:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	upratom
	.align	4

!
!	FENTRY	upratom
!
	.seg	"data1"   
	.align	4
.upratom:	.word    0
	._upratom = 2
	.seg	"text"
	.align	8
	.global	upratom
upratom:
	cmp	%l1,%i2
	blt  	pri25
	nop
	cmp	%l1,%i3
	blt  	prsympk
	nop
pri25:
	cmp	%l1,0
	blt  	pri26
	nop
	cmp	%l1,%i0
	blt  	prfix
	nop
pri26:
	cmp    	%l1,0
	blt	prfloat
	nop
	cmp	%l1,%i1
	blt  	pri27
	nop
	cmp	%l1,%i2
	blt  	prstrg
	nop
pri27:
	ba,a	prvect
	.align	4
prsympk:
	cmp    	%l1,%i2
	beq	pratnil
	nop
	set	prcpk,%o4
	st   	%g0,[%o4+0]
	set	329*32,%l3
	add    	%i2,%l3,%l3
	ld	[%l3+0],%o0
	cmp    	%o0,%i2
	beq	prsymb
	nop
prsympk0:
	ld	[%l1+12],%l3
	cmp    	%l3,%i2
	beq	prsymb
	nop
prsympk1:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	ld	[%l1+12],%l1
	dec  	4,%l7
	call	prpkg
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	prsymb
	.align	4
prpkg:
	dec  	4,%l7
	set	prcpk,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	set	prpkg0,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	prcpk,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
prpkg0:
	set	329*32,%l4
	add    	%i2,%l4,%l4
	ld	[%l4+0],%o0
	cmp	%o0,%g0
	bne	prpkg1
	nop
	set	272*32,%l4
	add    	%i2,%l4,%l4
	ld	[%l4+0],%o1
	cmp	%l1,%o1
	bne	prpkg1
	nop
	set	58,%l4
	ba,a	outch
	.align	4
prpkg1:
	set	prcpk,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	prcpk+2,%o4
	sth	%o0,[%o4]
	set	prmpk,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,0
	beq	prpkg2
	nop
	set	prcpk,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	set	prmpk,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	ble	prpkg2
	nop
	ba,a	outddd
	.align	4
prpkg2:
	cmp	%l1,%i2
	blt  	pri28
	nop
	cmp	%l1,%i3
	blt  	prpkgsym
	nop
pri28:
	set	58,%l4
	dec  	4,%l7
	call	outshrp
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	probj0
	st   	%o7,[%l7+0]
	.align	4
	set	58,%l4
	ba,a	outch
	.align	4
prpkgsym:
	ld	[%l1+12],%o0
	cmp    	%o0,%i2
	bne	prsympk1
	nop
	set	58,%l4
	dec  	4,%l7
	set	prsymb,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	outshrp
	.align	4
prsymb:
	set	327*32,%l2
	add    	%i2,%l2,%l2
	ld	[%l2+0],%l2
	cmp    	%l2,%i2
	beq	prat2
	nop
	dec  	4,%l7
	call	chksymb
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l2,%i2
	beq	prat2
	nop
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	add	%l2,2,%l2
	and 	%l2,%l0,%l2
	set	prcpk,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,0
	beq	prat0
	nop
	inc	1,%l2
prat0:
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	set	pocour,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	add	%l2,%o1,%l2
	and 	%l2,%l0,%l2
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	set	maxpocou,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	ble	prat1
	nop
	dec  	4,%l7
	call	chklp
	st   	%o7,[%l7+0]
	.align	4
prat1:
	set	124,%l4
	dec  	4,%l7
	call	outch
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	strgsymb
	st   	%o7,[%l7+0]
	.align	4
	set	savea1,%o4
	st   	%l1,[%o4+0]
	ld	[%l1+0],%o0
	ld	[%o0+4],%l2
	mov   	%g0,%l3
	ba,a	prat12
	.align	4
prat10:
	set	savea1,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	ldub	[%o1+0],%l4
	set	tabch,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l4,%o1,%o1
	ldub	[%o1+0],%l1
	set	13,%o1
	cmp   	%l1,%o1
	bne	prat11
	nop
	dec  	4,%l7
	call	outch
	st   	%o7,[%l7+0]
	.align	4
prat11:
	dec  	4,%l7
	call	outch
	st   	%o7,[%l7+0]
	.align	4
	inc	1,%l3
prat12:
	cmp   	%l3,%l2
	bne	prat10
	nop
	set	124,%l4
	set	prcpk,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,0
	beq	outch
	nop
	dec  	4,%l7
	call	outch
	st   	%o7,[%l7+0]
	.align	4
	set	58,%l4
	ba,a	outch
	.align	4
prat2:
	dec  	4,%l7
	call	strgsymb
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l1+0],%o0
	ld	[%o0+4],%l3
	mov   	%l3,%l2
	set	prcpk,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,0
	beq	prat21
	nop
	inc	1,%l2
prat21:
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	set	pocour,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	add	%l2,%o1,%l2
	and 	%l2,%l0,%l2
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	set	maxpocou,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	ble	prat3
	nop
	dec  	4,%l7
	call	chklp
	st   	%o7,[%l7+0]
	.align	4
prat3:
	mov   	%g0,%l2
	set	328*32,%l4
	add    	%i2,%l4,%l4
	ld	[%l4+0],%l4
	cmp    	%l4,%i2
	bne	prat8
	nop
	ba,a	prathb
	.align	4
prat5:
	ld	[%l1+0],%o1
	inc	8,%o1
	add  	%l2,%o1,%o1
	ldub	[%o1+0],%l4
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,97
	blt	prat6
	nop
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,122
	bgt	prat6
	nop
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	sub	%l4,32,%l4
	and 	%l4,%l0,%l4
prat6:
	dec  	4,%l7
	call	outch
	st   	%o7,[%l7+0]
	.align	4
	inc	1,%l2
prat8:
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	deccc  	1,%l3
	and 	%l3,%l0,%l3
	bge  	prat5
	nop
	set	prcpk,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,0
	beq	prpopj
	nop
	set	58,%l4
	ba,a	outch
	.align	4
pratnil:
	set	40,%l4
	dec  	4,%l7
	call	outch
	st   	%o7,[%l7+0]
	.align	4
	set	41,%l4
	ba,a	outch
	.align	4
chksymb:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	strgsymb
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l1+0],%o0
	ld	[%o0+4],%l2
	mov   	%l2,%o1
	cmp    	%o1,0
	beq	chksymb9
	nop
	dec  	4,%l7
	st   	%l2,[%l7+0]
	mov   	%i2,%l3
	ba,a	chksymb3
	.align	4
chksymb0:
	ld	[%l1+0],%o1
	inc	8,%o1
	add  	%l2,%o1,%o1
	ldub	[%o1+0],%l4
	mov   	%l4,%o1
	cmp    	%o1,43
	beq	chksymb2
	nop
	mov   	%l4,%o1
	cmp    	%o1,45
	beq	chksymb2
	nop
	mov   	%l4,%o1
	cmp    	%o1,101
	beq	chksymb2
	nop
	mov   	%l4,%o1
	cmp    	%o1,69
	beq	chksymb2
	nop
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,48
	blt	chksymb1
	nop
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,57
	ble	chksymb2
	nop
chksymb1:
	inc	1,%l3
chksymb2:
	set	tabch,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l4,%o1,%o1
	ldub	[%o1+0],%l4
	set	12,%o1
	cmp   	%l4,%o1
	bne	chksymb5
	nop
chksymb3:
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	deccc  	1,%l2
	and 	%l2,%l0,%l2
	bge  	chksymb0
	nop
	cmp    	%l3,%i2
	beq	chksymb4
	nop
	inc  	4*1,%l7
	mov   	%i2,%l2
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
chksymb4:
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
chksymb5:
	mov   	%l2,%l3
	ld	[%l7+0],%l2
	inc  	4,%l7
	ba,a	chksymb7
	.align	4
chksymb6:
	ld	[%l1+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	ldub	[%o1+0],%l4
	set	tabch,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l4,%o1,%o1
	ldub	[%o1+0],%l4
chksymb7:
	set	13,%o1
	cmp   	%l4,%o1
	bne	chksymb8
	nop
	inc	1,%l2
chksymb8:
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	deccc  	1,%l3
	and 	%l3,%l0,%l3
	bge  	chksymb6
	nop
chksymb9:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
chkstrg:
	ld	[%l1+0],%o0
	ld	[%o0+4],%l3
	mov   	%l3,%l2
	mov   	%l3,%o1
	cmp    	%o1,0
	beq	chkstrg3
	nop
	ba,a	chkstrg2
	.align	4
chkstrg1:
	ld	[%l1+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	ldub	[%o1+0],%l4
	set	tabch,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l4,%o1,%o1
	ldub	[%o1+0],%l4
	set	11,%o1
	cmp   	%l4,%o1
	bne	chkstrg2
	nop
	inc	1,%l2
chkstrg2:
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	deccc  	1,%l3
	and 	%l3,%l0,%l3
	bge  	chkstrg1
	nop
chkstrg3:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
prtypvec:
	ld	[%l1+4],%o0
	set	737*32,%o1
	add    	%i2,%o1,%o1
	cmp	%o0,%o1
	beq	prpopj
	nop
	ld	[%l1+4],%o0
	set	700*32,%o1
	add    	%i2,%o1,%o1
	cmp	%o0,%o1
	beq	prpopj
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	ld	[%l1+4],%l1
	dec  	4,%l7
	call	prpkg
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
prstrg:
	dec  	4,%l7
	call	prtypvec
	st   	%o7,[%l7+0]
	.align	4
	set	327*32,%l2
	add    	%i2,%l2,%l2
	ld	[%l2+0],%l2
	cmp    	%l2,%i2
	bne	prstr5
	nop
	ld	[%l1+0],%o0
	ld	[%o0+4],%l3
	mov   	%l3,%l2
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	set	pocour,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	add	%l2,%o1,%l2
	and 	%l2,%l0,%l2
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	set	maxpocou,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	ble	prathb
	nop
	set	iexpld,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	bne	prathb
	nop
	dec  	4,%l7
	call	chklp
	st   	%o7,[%l7+0]
	.align	4
prathb:
	mov   	%g0,%l2
	ba,a	prathb4
	.align	4
prathb2:
	ld	[%l1+0],%o1
	inc	8,%o1
	add  	%l2,%o1,%o1
	ldub	[%o1+0],%l4
	dec  	4,%l7
	call	outch
	st   	%o7,[%l7+0]
	.align	4
	inc	1,%l2
prathb4:
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	deccc  	1,%l3
	and 	%l3,%l0,%l3
	bge  	prathb2
	nop
	set	prcpk,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,0
	beq	prpopj
	nop
	set	58,%l4
	ba,a	outch
	.align	4
prstr5:
	dec  	4,%l7
	call	chkstrg
	st   	%o7,[%l7+0]
	.align	4
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	add	%l2,2,%l2
	and 	%l2,%l0,%l2
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	set	pocour,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	add	%l2,%o1,%l2
	and 	%l2,%l0,%l2
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	add	%l2,2,%l2
	and 	%l2,%l0,%l2
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	set	maxpocou,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	ble	prstr6
	nop
	set	iexpld,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	bne	prstrg
	nop
	dec  	4,%l7
	call	chklp
	st   	%o7,[%l7+0]
	.align	4
prstr6:
	set	34,%l4
	dec  	4,%l7
	call	outch
	st   	%o7,[%l7+0]
	.align	4
	set	savea1,%o4
	st   	%l1,[%o4+0]
	ld	[%l1+0],%o0
	ld	[%o0+4],%l1
	mov   	%g0,%l3
prstr60:
	cmp   	%l3,%l1
	beq	prstr63
	nop
	set	savea1,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	ldub	[%o1+0],%l4
	set	tabch,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l4,%o1,%o1
	ldub	[%o1+0],%l2
	set	11,%o1
	cmp   	%l2,%o1
	bne	prstr61
	nop
	dec  	4,%l7
	call	outch
	st   	%o7,[%l7+0]
	.align	4
prstr61:
	dec  	4,%l7
	call	outch
	st   	%o7,[%l7+0]
	.align	4
	inc	1,%l3
	ba,a	prstr60
	.align	4
prstr63:
	set	34,%l4
	ba,a	outch
	.align	4
prvect:
	set	prcdp,%l2
	ld	[%l2+0],%l2
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	ble	prvect11
	nop
	mov   	%l2,%o1
	cmp    	%o1,1
	bne	prvect1
	nop
	ba,a	outet
	.align	4
prvect1:
	set	prcdp,%o0
	ld	[%o0+0],%o0
	dec	1,%o0
	set	prcdp+2,%o4
	sth	%o0,[%o4]
prvect11:
	dec  	4,%l7
	call	prtypvec
	st   	%o7,[%l7+0]
	.align	4
prvectv:
	set	91,%l4
	dec  	4,%l7
	call	outshrp
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	prvectin
	st   	%o7,[%l7+0]
	.align	4
	set	93,%l4
	ba,a	outch
	.align	4
prvectin:
	ld	[%l1+0],%o0
	ld	[%o0+4],%l2
	mov   	%g0,%l3
	ba,a	prvect6
	.align	4
prvect2:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	ld	[%l1+0],%o1
	inc  	8,%o1
	mov   	%l3,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l1
	dec  	4,%l7
	call	probj0
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	prvect4
	nop
	dec  	4,%l7
	call	outsp
	st   	%o7,[%l7+0]
	.align	4
prvect4:
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	inc	1,%l3
	ld	[%l7+0],%l1
	inc  	4,%l7
prvect6:
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	deccc  	1,%l2
	and 	%l2,%l0,%l2
	bge  	prvect2
	nop
prvect9:
	set	prcdp,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	ble	prvect91
	nop
	set	prcdp,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	prcdp+2,%o4
	sth	%o0,[%o4]
prvect91:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
prfloat:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	bufpn,%l3
	ld	[%l3+0],%l3
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
	ba,a	prnum0
	.align	4
prfix:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	bufpn,%l3
	ld	[%l3+0],%l3
	mov   	%g0,%l2
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	call	getnumi
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
prnum0:
	mov   	%l2,%l3
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	set	pocour,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	add	%l3,%o1,%l3
	and 	%l3,%l0,%l3
	sll	%l3,16,%o0
	sra	%o0,16,%o0
	set	maxpocou,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	ble	prnum1
	nop
	dec  	4,%l7
	call	chklp
	st   	%o7,[%l7+0]
	.align	4
prnum1:
	mov   	%g0,%l1
	ba,a	prnum4
	.align	4
prnum3:
	set	bufpn,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l1,%o1,%o1
	ldub	[%o1+0],%l4
	dec  	4,%l7
	call	outch
	st   	%o7,[%l7+0]
	.align	4
	inc	1,%l1
prnum4:
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	deccc  	1,%l2
	and 	%l2,%l0,%l2
	bge  	prnum3
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
probj:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	probje,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	310*32,%o0
	add    	%i2,%o0,%o0
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
	ba,a	probj01
	.align	4
probje:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
probjend:
	set	310*32,%l2
	add    	%i2,%l2,%l2
	ba,a	findtag
	.align	4
probj01:
	set	prmlp,%o3
	ld	[%o3+0],%o3
	set	prclp,%o4
	st   	%o3,[%o4+0]
	set	prmln,%l2
	ld	[%l2+0],%l2
	mov   	%l2,%o1
	cmp    	%o1,0
	beq	probj02
	nop
	inc	1,%l2
probj02:
	set	prcln,%o4
	st   	%l2,[%o4+0]
	set	prmdp,%l2
	ld	[%l2+0],%l2
	mov   	%l2,%o1
	cmp    	%o1,0
	beq	probj03
	nop
	inc	1,%l2
probj03:
	set	prcdp,%o4
	st   	%l2,[%o4+0]
probj0:
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	pri29
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
pri29:
	cmp	%l1,0
	blt  	pri30
	nop
	cmp	%l1,%i0
	blt  	pratom
	nop
pri30:
	cmp    	%l1,0
	blt	pratom
	nop
	.global	econs
	set	bnumb,%o1
	ld	[%o1+0],%o1
	cmp	%l1,%o1
	blt  	pri31
	nop
	set	econs,%o1
	ld	[%o1+0],%o1
	cmp	%l1,%o1
	blt  	probj0t
	nop
pri31:
	set	330*32,%l1
	add    	%i2,%l1,%l1
	ba,a	prsymb
	.align	4
probj0t:
	cmp    	%l1,%i3
	blt	pratom
	nop
	set	prcdp,%l2
	ld	[%l2+0],%l2
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	ble	probj11
	nop
	mov   	%l2,%o1
	cmp    	%o1,1
	bne	probj1
	nop
	ba,a	outet
	.align	4
probj1:
	set	prcdp,%o0
	ld	[%o0+0],%o0
	dec	1,%o0
	set	prcdp+2,%o4
	sth	%o0,[%o4]
probj11:
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
	beq  	probj3
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	gettype
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	blt  	probj12
	nop
	cmp    	%l1,%i3
	bge  	probj12
	nop
	set	310*32,%l2
	add    	%i2,%l2,%l2
	mov   	%i2,%l3
	dec  	4,%l7
	call	getfns
	st   	%o7,[%l7+0]
	.align	4
	set	310*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l1,%o1
	beq	probj12
	nop
	cmp    	%l1,%i2
	beq	probj12
	nop
	set	1,%l4
	ba,a	ffuncall
	.align	4
probj12:
	ld	[%l7+0],%l1
	inc  	4,%l7
probj2:
	set	40,%l4
	dec  	4,%l7
	call	outshrp
	st   	%o7,[%l7+0]
	.align	4
	ba,a	probj7
	.align	4
probj3:
	ld	[%l1+0],%l2
	set	434*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l2,%o1
	bne	probj5
	nop
	ld	[%l1+4],%l2
	cmp    	%l2,%i3
	blt	probj5
	nop
	ld	[%l2+4],%o0
	cmp    	%o0,%i2
	bne	probj5
	nop
	set	39,%l4
	dec  	4,%l7
	call	outch
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l2+0],%l1
	set	prcdp,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	ble	probj4
	nop
	set	prcdp,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	prcdp+2,%o4
	sth	%o0,[%o4]
probj4:
	ba,a	probj0
	.align	4
probj5:
	set	40,%l4
	dec  	4,%l7
	call	outch
	st   	%o7,[%l7+0]
	.align	4
	ba,a	probj7
	.align	4
probjd:
	set	46,%l4
	ba,a	outch
	.align	4
probj6:
	dec  	4,%l7
	call	outsp
	st   	%o7,[%l7+0]
	.align	4
probj7:
probj8:
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfsp
	nop
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+0],%l1
	dec  	4,%l7
	call	probj0
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%i2
	beq	probj9
	nop
	cmp    	%l1,%i3
	blt	probjk
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
	beq  	probj6
	nop
probjk:
	dec  	4,%l7
	call	outsp
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	probjd
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	outsp
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	probj0
	st   	%o7,[%l7+0]
	.align	4
probj9:
	set	41,%l4
	set	prcdp,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	ble	probj91
	nop
	set	prcdp,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	prcdp+2,%o4
	sth	%o0,[%o4]
probj91:
	ba,a	outch
	.align	4
probjt:
	dec  	4,%l7
	set	chklp,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	probj
	.align	4

!
!	FENTRY	prin
!
	.seg	"data1"   
	.align	4
.prin:	.word    0
	._prin = 5
	.seg	"text"
	.align	8
	.global	prin
prin:
	dec  	4,%l7
	call	prinn
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
prinn:
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	prinnr
	nop
	inc	1,%l4
	dec  	4,%l7
	st   	%l4,[%l7+0]
	ba,a	prinn1
	.align	4
prinn0:
	set	327*32,%l1
	add    	%i2,%l1,%l1
	ld	[%l1+0],%l1
	cmp    	%l1,%i2
	beq	prinn1
	nop
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	set	prinn2,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	310*32,%o0
	add    	%i2,%o0,%o0
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
	ba,a	outsp
	.align	4
prinn2:
	ld	[%l7+0],%l4
	inc  	4,%l7
prinn1:
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l1
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	call	probj
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	dec	1,%l4
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,1
	bgt	prinn0
	nop
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l3
	ld	[%l7+0],%l4
	inc  	4,%l7
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
prinnr:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	print
!
	.seg	"data1"   
	.align	4
.print:	.word    0
	._print = 5
	.seg	"text"
	.align	8
	.global	print
print:
	dec  	4,%l7
	call	prinn
	st   	%o7,[%l7+0]
	.align	4
	ba,a	fullin
	.align	4

!
!	FENTRY	prinflush
!
	.seg	"data1"   
	.align	4
.prinflush:	.word    0
	._prinflush = 5
	.seg	"text"
	.align	8
	.global	prinflush
prinflush:
	dec  	4,%l7
	call	prinn
	st   	%o7,[%l7+0]
	.align	4
	ba,a	flulin
	.align	4

!
!	FENTRY	terpri
!
	.seg	"data1"   
	.align	4
.terpri:	.word    0
	._terpri = 5
	.seg	"text"
	.align	8
	.global	terpri
terpri:
	set	313*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	terpr2
	nop
	set	1,%l1
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	terpr6
	nop
	ba,a	errwna
	.align	4
terpr2:
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp	%l1,0
	blt  	pri32
	nop
	cmp	%l1,%i0
	blt  	terpr6
	nop
pri32:
	ba,a	errnia
	.align	4
terpr5:
	dec  	4,%l7
	call	fullin
	st   	%o7,[%l7+0]
	.align	4
terpr6:
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	deccc  	1,%l1
	and 	%l1,%l0,%l1
	bge  	terpr5
	nop
	ba,a	prtrue
	.align	4

!
!	FENTRY	princh
!
	.seg	"data1"   
	.align	4
.princh:	.word    0
	._princh = 5
	.seg	"text"
	.align	8
	.global	princh
princh:
	set	1,%l2
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	princh1
	nop
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	princh2
	nop
	set	2,%l1
	set	314*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4
princh2:
	ld	[%l7+0],%l2
	inc  	4,%l7
princh1:
	cmp	%l2,0
	blt  	pri33
	nop
	cmp	%l2,%i0
	blt  	princh3
	nop
pri33:
	mov   	%l2,%l1
	set	314*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnia
	.align	4
princh3:
	ld	[%l7+0],%l1
	set	314*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l1+0],%o1
	add	%o1,8+0,%o1
	ldub	[%o1+0],%l4
	dec  	4,%l7
	call	princr1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
princr1:
	set	prmlp,%o3
	ld	[%o3+0],%o3
	set	prclp,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	set	310*32,%o0
	add    	%i2,%o0,%o0
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
	ba,a	princr3
	.align	4
princr2:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	call	outch
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
princr3:
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	deccc  	1,%l2
	and 	%l2,%l0,%l2
	bge  	princr2
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	princod
!
	.seg	"data1"   
	.align	4
.princod:	.word    0
	._princod = 5
	.seg	"text"
	.align	8
	.global	princod
princod:
	set	1,%l2
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	princd1
	nop
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	princd0
	nop
	set	2,%l1
	set	315*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4
princd0:
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp	%l2,0
	blt  	pri34
	nop
	cmp	%l2,%i0
	blt  	princd1
	nop
pri34:
	mov   	%l2,%l1
	set	315*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnia
	.align	4
princd1:
	ld	[%l7+0],%l4
	cmp	%l4,0
	blt  	pri35
	nop
	cmp	%l4,%i0
	blt  	princd2
	nop
pri35:
	mov   	%l4,%l1
	set	315*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnia
	.align	4
princd2:
	dec  	4,%l7
	call	princr1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	explode
!
	.seg	"data1"   
	.align	4
.explode:	.word    0
	._explode = 2
	.seg	"text"
	.align	8
	.global	explode
explode:
	dec  	4,%l7
	set	lexpld,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	iexpld,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	set	explode1,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	iexpld,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	lexpld,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
explode1:
	mov   	%i2,%l2
	cmp    	%i2,%g4
	bne    	pri36
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
pri36:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	lexpld,%o4
	st   	%l2,[%o4+0]
	add    	%i2,3*32,%o3
	set	iexpld,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	probj
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l1+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	explodech
!
	.seg	"data1"   
	.align	4
.explodech:	.word    0
	._explodech = 2
	.seg	"text"
	.align	8
	.global	explodech
explodech:
	dec  	4,%l7
	call	explode
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l2
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
expldech1:
	cmp    	%l2,%i3
	blt	expldech2
	nop
	ld	[%l2+0],%l1
	st   	%l2,[%l7+0]
	dec  	4,%l7
	call	fascii
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	st   	%l1,[%l2+0]
	ld	[%l2+4],%l2
	ba,a	expldech1
	.align	4
expldech2:
	inc  	4*1,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
expls:
	dec  	4,%l7
	st   	%l4,[%l7+0]
	set	32,%l4
	ba,a	explch1
	.align	4
explsh:
	dec  	4,%l7
	st   	%l4,[%l7+0]
	set	35,%l4
	dec  	4,%l7
	call	explch
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	ba,a	explch1
	.align	4
explch:
	dec  	4,%l7
	st   	%l4,[%l7+0]
explch1:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	cmp    	%i2,%g4
	bne    	pri37
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
pri37:
	st   	%l4,[%g4+0]
	mov   	%g4,%l4
	ld	[%g4+4],%g4
	st   	%i2,[%l4+4]
	set	lexpld,%l2
	ld	[%l2+0],%l2
	st   	%l4,[%l2+4]
	set	lexpld,%o4
	st   	%l4,[%o4+0]
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	fptype
!
	.seg	"data1"   
	.align	4
.fptype:	.word    0
	._fptype = 5
	.seg	"text"
	.align	8
	.global	fptype
fptype:
	set	316*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	ptyp1
	nop
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	ptyp2
	nop
	set	2,%l1
	ba,a	errwna
	.align	4
ptyp1:
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%i2
	blt  	ptyper1
	nop
	cmp    	%l1,%i3
	bge  	ptyper1
	nop
	lduh	[%l1+26],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ptyp2:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%l3,%i2
	blt  	ptyper1
	nop
	cmp    	%l3,%i3
	bge  	ptyper1
	nop
	sth   	%l1,[%l3+26]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ptyper1:
	ba,a	errsym
	.align	4
ptyper2:
	mov   	%l3,%l1
	ba,a	errnia
	.align	4

!
!	FENTRY	fobase
!
	.seg	"data1"   
	.align	4
.fobase:	.word    0
	._fobase = 5
	.seg	"text"
	.align	8
	.global	fobase
fobase:
	set	320*32,%l2
	add    	%i2,%l2,%l2
	set	obase,%l3
	ld	[%l3+0],%l3
	dec  	4,%l7
	set	2,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	36,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	getsetn
	st   	%o7,[%l7+0]
	.align	4
	set	obase,%o4
	st   	%l1,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	prline
!
	.seg	"data1"   
	.align	4
.prline:	.word    0
	._prline = 5
	.seg	"text"
	.align	8
	.global	prline
prline:
	set	317*32,%l2
	add    	%i2,%l2,%l2
	set	prmlp,%l3
	ld	[%l3+0],%l3
	dec  	4,%l7
	st   	%g0,[%l7+0]
	dec  	4,%l7
	set	32767,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	getsetn
	st   	%o7,[%l7+0]
	.align	4
	set	prmlp,%o4
	st   	%l1,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	prlevel
!
	.seg	"data1"   
	.align	4
.prlevel:	.word    0
	._prlevel = 5
	.seg	"text"
	.align	8
	.global	prlevel
prlevel:
	set	318*32,%l2
	add    	%i2,%l2,%l2
	set	prmdp,%l3
	ld	[%l3+0],%l3
	dec  	4,%l7
	st   	%g0,[%l7+0]
	dec  	4,%l7
	set	32767,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	getsetn
	st   	%o7,[%l7+0]
	.align	4
	set	prmdp,%o4
	st   	%l1,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	prlength
!
	.seg	"data1"   
	.align	4
.prlength:	.word    0
	._prlength = 5
	.seg	"text"
	.align	8
	.global	prlength
prlength:
	set	319*32,%l2
	add    	%i2,%l2,%l2
	set	prmln,%l3
	ld	[%l3+0],%l3
	dec  	4,%l7
	st   	%g0,[%l7+0]
	dec  	4,%l7
	set	32767,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	getsetn
	st   	%o7,[%l7+0]
	.align	4
	set	prmln,%o4
	st   	%l1,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
tespos:
	cmp    	%l1,0
	blt  	poser2
	nop
	cmp    	%l1,%i0
	bge  	poser2
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	poser
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	set	maxpocou,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	ble	prpopj
	nop
poser:
	mov   	%l4,%l2
	ba,a	erroob
	.align	4
poser2:
	mov   	%l4,%l2
	ba,a	errnia
	.align	4

!
!	FENTRY	lmargin
!
	.seg	"data1"   
	.align	4
.lmargin:	.word    0
	._lmargin = 5
	.seg	"text"
	.align	8
	.global	lmargin
lmargin:
	set	321*32,%l2
	add    	%i2,%l2,%l2
	set	nbleft,%l3
	ld	[%l3+0],%l3
	dec  	4,%l7
	st   	%g0,[%l7+0]
	dec  	4,%l7
	set	nbrig,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	getsetn
	st   	%o7,[%l7+0]
	.align	4
	set	nbleft,%o4
	st   	%l1,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	rmargin
!
	.seg	"data1"   
	.align	4
.rmargin:	.word    0
	._rmargin = 5
	.seg	"text"
	.align	8
	.global	rmargin
rmargin:
	dec  	4,%l7
	set	1,%o0
	st   	%o0,[%l7+0]
	set	bufout,%o0
	ld	[%o0+0],%o0
	ld	[%o0+0],%o0
	ld	[%o0+4],%l2
	inc	1,%l2
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	322*32,%l2
	add    	%i2,%l2,%l2
	set	nbrig,%l3
	ld	[%l3+0],%l3
	dec  	4,%l7
	call	getsetn
	st   	%o7,[%l7+0]
	.align	4
	set	nbrig,%o4
	st   	%l1,[%o4+0]
	set	bufout,%o0
	ld	[%o0+0],%o0
	ld	[%o0+0],%o0
	ld	[%o0+4],%l2
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	ble	rmargin1
	nop
	mov   	%l2,%l1
rmargin1:
	set	maxpocou,%o4
	st   	%l1,[%o4+0]
	set	nbrig,%l1
	ld	[%l1+0],%l1
rmargin2:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	outpos
!
	.seg	"data1"   
	.align	4
.outpos:	.word    0
	._outpos = 5
	.seg	"text"
	.align	8
	.global	outpos
outpos:
	set	323*32,%l2
	add    	%i2,%l2,%l2
	set	pocour,%l3
	ld	[%l3+0],%l3
	dec  	4,%l7
	st   	%g0,[%l7+0]
	dec  	4,%l7
	set	maxpocou,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	getsetn
	st   	%o7,[%l7+0]
	.align	4
	set	pocour,%o4
	st   	%l1,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	outbuf
!
	.seg	"data1"   
	.align	4
.outbuf:	.word    0
	._outbuf = 5
	.seg	"text"
	.align	8
	.global	outbuf
outbuf:
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	outbu1
	nop
	mov   	%i2,%l2
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	outbu5
	nop
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	outbu4
	nop
	set	1,%l1
	set	324*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4
outbu1:
	set	bufout,%l1
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
outbu4:
	ld	[%l7+0],%l2
	inc  	4,%l7
outbu5:
	ld	[%l7+0],%l1
	inc  	4,%l7
	set	324*32,%l4
	add    	%i2,%l4,%l4
	dec  	4,%l7
	call	tespos
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l2,%i2
	beq	outbu6
	nop
	cmp    	%l2,0
	blt  	outbuer
	nop
	cmp    	%l2,%i0
	bge  	outbuer
	nop
	set	bufout,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l1,%o1,%o1
	stb  	%l2,[%o1+0]
outbu6:
	set	bufout,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l1,%o1,%o1
	ldub	[%o1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
outbuer:
	mov   	%l2,%l1
	mov   	%l4,%l2
	ba,a	errnia
	.align	4
! end
