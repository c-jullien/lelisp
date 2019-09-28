!
!	File read.s expansion for sparc arch=v8plus.
!	This file is part of Le-Lisp kernel.
!	Generated on Sat Oct   7 17 21:25:18 
!
	.file	"read.s"
	.align	8 
	.global	fsymb
	.global	bvar
	.global	hashtab
	.global	fstrg
	.global	errnia
	.global	errnla
	.global	errnsa
	.global	errsxt
	.global	errsym
	.global	erroob
	.global	errudf
	.global	errudv
	.global	getsetn
	.global	gccons
	.global	gcfloat
	.global	gcnumb
	.global	gcsymb
	.global	hgc
	.global	inphy
	.global	istream
	.global	inmax
	.global	polig
	.global	sysprot
	.global	evala1
	.global	apply
	.global	ffuncall
	.global	savea4
	.global	llde
	.global	getfns
	.global	setfn
	.global	getprop
	.global	nreverse
	.global	lllength
	.global	equal
	.global	gaplus2i
	.global	gatim2i
	.global	gadinv
	.global	gadiv
	.global	stringa1
	.global	strgallc
	.global	makestrg
	.global	makevect
	.global	fascii
	.global	ini_read
	.global	istdsym
	.global	hashint
	.global	inisymb
	.global	inicst
	.global	inasymb
	.global	inacst
	.global	tryatom
	.global	trysymp
	.global	trysymb
	.global	trysympk
	.global	crastrg
	.global	erlec11
	.global	readdltd
	.global	lread
	.global	readi
	.global	getch
	.global	asciii
	.global	rereada4
	.global	getcv
	.global	read2
	.global	rdpkgc2
	.global	base10p
	.global	erlec6
	.global	tsymb
	.global	asymb
	.global	ksymb
	.global	hsymb
	.global	count
	.global	tabch
	.global	cachch
	.global	ibase
	.global	all09
	.global	negatif
	.global	quotes
	.global	getchfl
	.global	ringur
	.global	curread
	.global	rdprd
	.global	impli
	.global	impld
	.global	bufat
	.global	lgbufat
	.global	cpkgc
	.seg	"data1"
	.align	4
tsymb:
	.word 	0
asymb:
	.word 	0
ksymb:
	.word 	0
hsymb:
	.word 	0
count:
	.word 	0
tabch:
	.word 	0
cachch:
	.word 	0
ibase:
	.word 	0
all09:
	.word 	0
negatif:
	.word 	0
quotes:
	.word 	0
getchfl:
	.word 	0
ringur:
	.word 	0
curread:
	.word 	0
rdprd:
	.word 	0
impli:
	.word 	0
impld:
	.word 	0
bufat:
	.word 	0
lgbufat:
	.word 	0
cpkgc:
	.word 	0
	.seg	"text"
ini_read:
	set	ringur,%o4
	st   	%i2,[%o4+0]
	set	curread,%o4
	st   	%i2,[%o4+0]
	set	impli,%o4
	st   	%i2,[%o4+0]
	set	impld,%o4
	st   	%i2,[%o4+0]
	add    	%i2,7*32,%o3
	set	cpkgc,%o4
	st   	%o3,[%o4+0]
	.seg	"data1"   
	.align	4
prea1:
	.asciz	"read-case-flag"
	.seg	"text"
brea1:
	set 	14,%l1
	set	prea1,%l2
	set	231*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	st   	%i2,[%l1+0]
	.seg	"data1"   
	.align	4
prea2:
	.asciz	"in-read-flag"
	.seg	"text"
brea2:
	set 	12,%l1
	set	prea2,%l2
	set	232*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	st   	%i2,[%l1+0]
	set	cpkgc,%o4
	st   	%i2,[%o4+0]
	.seg	"data1"   
	.align	4
prea3:
	.asciz	"read"
	.seg	"text"
brea3:
	set	4,%l1
	set	prea3,%l2
	set	lread,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lread,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea4:
	.asciz	"implode"
	.seg	"text"
brea4:
	set	7,%l1
	set	prea4,%l2
	set	implode,%l3
	dec	8,%l3
	set	trash,%l4
	set	._implode,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea5:
	.asciz	"implodech"
	.seg	"text"
brea5:
	set	9,%l1
	set	prea5,%l2
	set	implodech,%l3
	dec	8,%l3
	set	trash,%l4
	set	._implodech,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea6:
	.asciz	"readch"
	.seg	"text"
brea6:
	set	6,%l1
	set	prea6,%l2
	set	readch,%l3
	dec	8,%l3
	set	trash,%l4
	set	._readch,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea7:
	.asciz	"readcn"
	.seg	"text"
brea7:
	set	6,%l1
	set	prea7,%l2
	set	readcod,%l3
	dec	8,%l3
	set	trash,%l4
	set	._readcod,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea8:
	.asciz	"curread"
	.seg	"text"
brea8:
	set	7,%l1
	set	prea8,%l2
	set	lcuread,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lcuread,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea9:
	.asciz	"teread"
	.seg	"text"
brea9:
	set	6,%l1
	set	prea9,%l2
	set	teread,%l3
	dec	8,%l3
	set	trash,%l4
	set	._teread,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea10:
	.asciz	"reread"
	.seg	"text"
brea10:
	set	6,%l1
	set	prea10,%l2
	set	reread,%l3
	dec	8,%l3
	set	trash,%l4
	set	._reread,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea11:
	.asciz	"readline"
	.seg	"text"
brea11:
	set	8,%l1
	set	prea11,%l2
	set	readline,%l3
	dec	8,%l3
	set	trash,%l4
	set	._readline,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea12:
	.asciz	"readstring"
	.seg	"text"
brea12:
	set	10,%l1
	set	prea12,%l2
	set	readstrg,%l3
	dec	8,%l3
	set	trash,%l4
	set	._readstrg,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea13:
	.asciz	"stratom"
	.seg	"text"
brea13:
	set	7,%l1
	set	prea13,%l2
	set	stratom,%l3
	dec	8,%l3
	set	trash,%l4
	set	._stratom,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea14:
	.asciz	"read-delimited-list"
	.seg	"text"
brea14:
	set	19,%l1
	set	prea14,%l2
	set	readdltd,%l3
	dec	8,%l3
	set	trash,%l4
	set	._readdltd,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea15:
	.asciz	"peekch"
	.seg	"text"
brea15:
	set	6,%l1
	set	prea15,%l2
	set	peekch,%l3
	dec	8,%l3
	set	trash,%l4
	set	._peekch,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea16:
	.asciz	"peekcn"
	.seg	"text"
brea16:
	set	6,%l1
	set	prea16,%l2
	set	peekcn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._peekcn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea17:
	.asciz	"concatpkgc"
	.seg	"text"
brea17:
	set	10,%l1
	set	prea17,%l2
	set	concatpk,%l3
	dec	8,%l3
	set	trash,%l4
	set	._concatpk,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea18:
	.asciz	"ascii"
	.seg	"text"
brea18:
	set	5,%l1
	set	prea18,%l2
	set	fascii,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fascii,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea19:
	.asciz	"cascii"
	.seg	"text"
brea19:
	set	6,%l1
	set	prea19,%l2
	set	cascii,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cascii,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea20:
	.asciz	"uppercase"
	.seg	"text"
brea20:
	set	9,%l1
	set	prea20,%l2
	set	uppercase,%l3
	dec	8,%l3
	set	trash,%l4
	set	._uppercase,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea21:
	.asciz	"lowercase"
	.seg	"text"
brea21:
	set	9,%l1
	set	prea21,%l2
	set	lowercase,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lowercase,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea22:
	.asciz	"asciip"
	.seg	"text"
brea22:
	set	6,%l1
	set	prea22,%l2
	set	asciip,%l3
	dec	8,%l3
	set	trash,%l4
	set	._asciip,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea23:
	.asciz	"digitp"
	.seg	"text"
brea23:
	set	6,%l1
	set	prea23,%l2
	set	digitp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._digitp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea24:
	.asciz	"letterp"
	.seg	"text"
brea24:
	set	7,%l1
	set	prea24,%l2
	set	letterp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._letterp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
prea25:
	.asciz	"ibase"
	.seg	"text"
brea25:
	set	5,%l1
	set	prea25,%l2
	set	fibase,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fibase,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	set	10,%o3
	set	ibase,%o4
	st   	%o3,[%o4+0]
	set	256,%l1
	set	12,%l2
	dec  	4,%l7
	call	makestrg
	st   	%o7,[%l7+0]
	.align	4
	set	tabch,%o4
	st   	%l1,[%o4+0]
	ld	[%l1+0],%o1
	set	0,%o0
	stb  	%o0,[%o1+8]
	ld	[%l1+0],%o1
	set	7,%o0
	stb  	%o0,[%o1+16]
	ld	[%l1+0],%o1
	set	7,%o0
	stb  	%o0,[%o1+17]
	ld	[%l1+0],%o1
	set	2,%o0
	stb  	%o0,[%o1+18]
	ld	[%l1+0],%o1
	set	7,%o0
	stb  	%o0,[%o1+19]
	ld	[%l1+0],%o1
	set	7,%o0
	stb  	%o0,[%o1+20]
	ld	[%l1+0],%o1
	set	2,%o0
	stb  	%o0,[%o1+21]
	ld	[%l1+0],%o1
	set	7,%o0
	stb  	%o0,[%o1+40]
	ld	[%l1+0],%o1
	set	11,%o0
	stb  	%o0,[%o1+42]
	ld	[%l1+0],%o1
	set	9,%o0
	stb  	%o0,[%o1+43]
	ld	[%l1+0],%o1
	set	10,%o0
	stb  	%o0,[%o1+47]
	ld	[%l1+0],%o1
	set	4,%o0
	stb  	%o0,[%o1+48]
	ld	[%l1+0],%o1
	set	5,%o0
	stb  	%o0,[%o1+49]
	ld	[%l1+0],%o1
	set	10,%o0
	stb  	%o0,[%o1+52]
	ld	[%l1+0],%o1
	set	6,%o0
	stb  	%o0,[%o1+54]
	ld	[%l1+0],%o1
	set	10,%o0
	stb  	%o0,[%o1+66]
	ld	[%l1+0],%o1
	set	1,%o0
	stb  	%o0,[%o1+67]
	ld	[%l1+0],%o1
	set	10,%o0
	stb  	%o0,[%o1+99]
	ld	[%l1+0],%o1
	set	10,%o0
	stb  	%o0,[%o1+101]
	ld	[%l1+0],%o1
	set	10,%o0
	stb  	%o0,[%o1+102]
	ld	[%l1+0],%o1
	set	10,%o0
	stb  	%o0,[%o1+104]
	ld	[%l1+0],%o1
	set	13,%o0
	stb  	%o0,[%o1+132]
	ld	[%l1+0],%o1
	set	0,%o0
	stb  	%o0,[%o1+135]
	set	1024,%o3
	set	lgbufat,%o4
	st   	%o3,[%o4+0]
	set	lgbufat,%l1
	ld	[%l1+0],%l1
	mov   	%g0,%l2
	dec  	4,%l7
	call	makestrg
	st   	%o7,[%l7+0]
	.align	4
	set	bufat,%o4
	st   	%l1,[%o4+0]
	set	128,%l1
	mov   	%g0,%l2
	dec  	4,%l7
	call	makevect
	st   	%o7,[%l7+0]
	.align	4
	set	cachch,%o4
	st   	%l1,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
rdpopj:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
hashint:
	mov   	%l1,%l2
	ld	[%l2+0],%o0
	ld	[%o0+4],%l1
hashfast:
	mov   	%l1,%l3
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,6
	ble	hashcour
	nop
	dec  	4,%l7
	st   	%l3,[%l7+0]
	set	5,%l3
hashf1:
	ld	[%l2+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	ldub	[%o1+0],%l4
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sll	%l1,16,%o1
	sra	%o1,16,%o1
	add	%l1,%o1,%l1
	and 	%l1,%l0,%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	add	%l1,%o1,%l1
	and 	%l1,%l0,%l1
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	deccc  	1,%l3
	and 	%l3,%l0,%l3
	bge  	hashf1
	nop
	set	5,%l3
hashf5:
	ld	[%l7+0],%o0
	st   	%l3,[%l7+0]
	mov 	%o0,%l3
	dec	1,%l3
	ld	[%l2+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	ldub	[%o1+0],%l4
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sll	%l1,16,%o1
	sra	%o1,16,%o1
	add	%l1,%o1,%l1
	and 	%l1,%l0,%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	add	%l1,%o1,%l1
	and 	%l1,%l0,%l1
	ld	[%l7+0],%o0
	st   	%l3,[%l7+0]
	mov 	%o0,%l3
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	deccc  	1,%l3
	and 	%l3,%l0,%l3
	bge  	hashf5
	nop
	ld	[%l7+0],%l3
	inc  	4,%l7
	ba,a	hashend
	.align	4
hashcour:
	mov   	%l1,%o1
	cmp    	%o1,0
	beq	hashret
	nop
	ba,a	hashcou3
	.align	4
hashcou1:
	ld	[%l2+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	ldub	[%o1+0],%l4
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sll	%l1,16,%o1
	sra	%o1,16,%o1
	add	%l1,%o1,%l1
	and 	%l1,%l0,%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	add	%l1,%o1,%l1
	and 	%l1,%l0,%l1
hashcou3:
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	deccc  	1,%l3
	and 	%l3,%l0,%l3
	bge  	hashcou1
	nop
hashend:
	set	32767,%o0
	and	%l1,%o0,%l1
	set	hashtab,%o0
	ld	[%o0+0],%o0
	ld	[%o0+0],%o0
	ld	[%o0+4],%l4
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l4,16,%o1
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
	and	%o0,%l0,%l1
hashret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
inisymb:
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	call	crastrg
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l2
	dec  	4,%l7
	call	crasymb
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	st   	%l4,[%l1+8]
	ld	[%l7+0],%l4
	inc  	4,%l7
	cmp    	%l4,%i2
	beq	inisymr
	nop
	st   	%l1,[%l4+0]
inisymr:
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	sth   	%l4,[%l1+24]
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
inicst:
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	call	crastrg
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l2
	dec  	4,%l7
	call	crasymb
	st   	%o7,[%l7+0]
	.align	4
	st   	%l1,[%l1+0]
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%l3,%i2
	beq	inicstr
	nop
	st   	%l1,[%l3+0]
inicstr:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
crasymb:
	dec  	4,%l7
	call	symballc
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	cpkgc,%o3
	ld	[%o3+0],%o3
	st   	%o3,[%l1+12]
	st   	%l2,[%l1+28]
	ld	[%l2+0],%o0
	ld	[%o0+4],%l1
	dec  	4,%l7
	call	trysymb0
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	mov   	%l2,%o1
	cmp    	%o1,1
	beq	plac2d
	nop
	mov   	%l2,%o1
	cmp    	%o1,2
	beq	plac3d12
	nop
	ba,a	plac3d2n
	.align	4
inasymb:
	add    	%i2,1*32,%o3
	st   	%o3,[%l1+0]
inasymb2:
	st   	%i2,[%l1+4]
	sth   	%g0,[%l1+26]
	set	cpkgc,%o3
	ld	[%o3+0],%o3
	st   	%o3,[%l1+12]
	st   	%i2,[%l1+16]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	ld	[%l1+28],%l2
	ld	[%l2+0],%o0
	ld	[%o0+4],%l1
	dec  	4,%l7
	call	trysymb0
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	mov   	%l2,%o1
	cmp    	%o1,1
	beq	plac2d
	nop
	mov   	%l2,%o1
	cmp    	%o1,2
	beq	plac3d12
	nop
	ba,a	plac3d2n
	.align	4
inacst:
	st   	%l1,[%l1+0]
	st   	%g0,[%l1+8]
	set	0,%o0
	sth   	%o0,[%l1+24]
	ba,a	inasymb2
	.align	4
makefix:
	set	negatif,%o4
	st   	%i2,[%o4+0]
	mov   	%g0,%l3
makefix0:
	mov   	%g0,%l1
	ld	[%l2+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	ldub	[%o1+0],%l4
	mov   	%l4,%o1
	cmp    	%o1,43
	beq	makefix8
	nop
	mov   	%l4,%o1
	cmp    	%o1,45
	bne	makefix1
	nop
	set	negatif,%o4
	st   	%l4,[%o4+0]
	ba,a	makefix8
	.align	4
makefix1:
	ld	[%l2+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	ldub	[%o1+0],%l4
	mov   	%l4,%o1
	cmp    	%o1,47
	beq	makefxr1
	nop
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,48
	blt	makefxd1
	nop
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,57
	bgt	makefxd1
	nop
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	sub	%l4,48,%l4
	and 	%l4,%l0,%l4
	ba,a	makefix2
	.align	4
makefxd1:
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,65
	blt	makefxd2
	nop
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,90
	bgt	makefxd2
	nop
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	sub	%l4,65,%l4
	and 	%l4,%l0,%l4
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	add	%l4,10,%l4
	and 	%l4,%l0,%l4
	ba,a	makefix2
	.align	4
makefxd2:
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,97
	blt	makefix2
	nop
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,122
	bgt	makefix2
	nop
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	sub	%l4,97,%l4
	and 	%l4,%l0,%l4
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	add	%l4,10,%l4
	and 	%l4,%l0,%l4
makefix2:
	set	ibase,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,10
	beq	makefix6
	nop
	sll	%l1,16,%o1
	sra	%o1,16,%o1
	set	ibase,%o0
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
	and	%o0,%l0,%l1
	sll	%o0,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o0
	bne  	makefix3
	nop
makefix3:
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	add	%l1,%o1,%l1
	mov   	%l1,%o2
	and 	%l1,%l0,%l1
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	makefix4
	nop
makefix4:
	ba,a	makefix8
	.align	4
makefix6:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	set	ibase,%l2
	ld	[%l2+0],%l2
	set	2,%l4
	dec  	4,%l7
	call	gatim2i
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	set	2,%l4
	dec  	4,%l7
	call	gaplus2i
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
makefix8:
	inc	1,%l3
	set	tsymb,%o1
	ld	[%o1+0],%o1
	cmp   	%l3,%o1
	bne	makefix1
	nop
	set	negatif,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	beq	makefixr
	nop
	ba,a	gadinv
	.align	4
makefixr:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
makefxr1:
	set	negatif,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	beq	makefixr2
	nop
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	call	gadinv
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
makefixr2:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	inc	1,%l3
	set	negatif,%o4
	st   	%i2,[%o4+0]
	dec  	4,%l7
	call	makefix0
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	2,%l4
	ba,a	gadiv
	.align	4
makeflo:
	ld	[%l2+0],%o0
	inc  	8,%o0
	set	tsymb,%o2
	ld	[%o2+0],%o2
	add    	%o2,%o0,%o2
	stb  	%g0,[%o2+0]
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	mov   	%o0,%o0
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	llrt_cvatof,1
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
	fdtos	%f0,%f0
	st   	%f0,[%l5+0]
	ld	[%l5+0],%o0
	srl    	%o0,1,%o0
	bset	%l6,%o0
	mov   	%o0,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
nextfix:
	set	tsymb,%o1
	ld	[%o1+0],%o1
	cmp   	%l3,%o1
	bne	nextxxx
	nop
	inc  	4*1,%l7
	ba,a	makefix
	.align	4
nextflo:
	set	tsymb,%o1
	ld	[%o1+0],%o1
	cmp   	%l3,%o1
	bne	nextxxx
	nop
	inc  	4*1,%l7
	ba,a	makeflo
	.align	4
nextsym:
	set	tsymb,%o1
	ld	[%o1+0],%o1
	cmp   	%l3,%o1
	bne	nextxxx
	nop
	inc  	4*1,%l7
	ba,a	trysymi
	.align	4
nextxxx:
	ld	[%l2+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	ldub	[%o1+0],%l4
	inc	1,%l3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
digitpi:
	mov   	%l4,%l1
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,48
	blt	digitpi1
	nop
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,57
	bgt	digitpi1
	nop
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sub	%l1,48,%l1
	and 	%l1,%l0,%l1
	ba,a	digitpi9
	.align	4
digitpi1:
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,65
	blt	digitpi2
	nop
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,90
	bgt	digitpi2
	nop
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sub	%l1,65,%l1
	and 	%l1,%l0,%l1
	ba,a	digitpi8
	.align	4
digitpi2:
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,97
	blt	digitpif
	nop
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,122
	bgt	digitpif
	nop
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sub	%l1,97,%l1
	and 	%l1,%l0,%l1
digitpi8:
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	add	%l1,10,%l1
	and 	%l1,%l0,%l1
digitpi9:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	set	ibase,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bge	digitpif
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,57
	ble	digitpt
	nop
	set	all09,%o4
	st   	%i2,[%o4+0]
digitpit:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
digitpif:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
base10p:
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,48
	blt	digitpif
	nop
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,57
	bgt	digitpif
	nop
	mov   	%l4,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
tryatom:
	mov   	%l1,%o1
	cmp    	%o1,0
	bne	trynum
	nop
	set	cpkgc,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	bne	trynum
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
trynum:
	set	tsymb,%o4
	st   	%l1,[%o4+0]
	set	asymb,%o4
	st   	%l2,[%o4+0]
	set	quotes,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	bne	trysymi
	nop
	mov   	%g0,%l3
	set	all09,%o4
	st   	%l3,[%o4+0]
	dec  	4,%l7
	call	nextsym
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l4,%o1
	cmp    	%o1,46
	beq	tryflo0
	nop
	mov   	%l4,%o1
	cmp    	%o1,45
	beq	tryfix0
	nop
	mov   	%l4,%o1
	cmp    	%o1,43
	beq	tryfix0
	nop
	dec  	4,%l7
	call	digitpi
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	bne	tryfix1
	nop
	ba,a	trysymi
	.align	4
tryfix0:
	dec  	4,%l7
	call	nextsym
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l4,%o1
	cmp    	%o1,46
	beq	tryflo0
	nop
	dec  	4,%l7
	call	digitpi
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	trysymi
	nop
tryfix1:
	dec  	4,%l7
	call	nextfix
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	digitpi
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	bne	tryfix1
	nop
	mov   	%l4,%o1
	cmp    	%o1,46
	beq	tryflo2
	nop
	mov   	%l4,%o1
	cmp    	%o1,69
	beq	tryflo3
	nop
	mov   	%l4,%o1
	cmp    	%o1,101
	beq	tryflo3
	nop
	mov   	%l4,%o1
	cmp    	%o1,47
	beq	tryfix2
	nop
	ba,a	trysymi
	.align	4
tryfix2:
	dec  	4,%l7
	call	nextsym
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l4,%o1
	cmp    	%o1,43
	beq	tryfix3
	nop
	mov   	%l4,%o1
	cmp    	%o1,45
	beq	tryfix3
	nop
	dec  	4,%l7
	call	digitpi
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	trysymi
	nop
	ba,a	tryfix4
	.align	4
tryfix3:
	dec  	4,%l7
	call	nextsym
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	digitpi
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	trysymi
	nop
tryfix4:
	dec  	4,%l7
	call	nextfix
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	digitpi
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	bne	tryfix4
	nop
	ba,a	trysymi
	.align	4
tryflo0:
	dec  	4,%l7
	call	nextsym
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	base10p
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	trysymi
	nop
tryflo1:
	dec  	4,%l7
	call	nextflo
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	base10p
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	bne	tryflo1
	nop
	mov   	%l4,%o1
	cmp    	%o1,69
	beq	tryflo4
	nop
	mov   	%l4,%o1
	cmp    	%o1,101
	beq	tryflo4
	nop
	ba,a	trysymi
	.align	4
tryflo2:
	set	all09,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	bne	tryflo1
	nop
	ba,a	trysymi
	.align	4
tryflo3:
	set	all09,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	beq	trysymi
	nop
tryflo4:
	dec  	4,%l7
	call	nextsym
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	base10p
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	bne	tryflo6
	nop
	mov   	%l4,%o1
	cmp    	%o1,45
	beq	tryflo5
	nop
	mov   	%l4,%o1
	cmp    	%o1,43
	bne	trysymi
	nop
tryflo5:
	dec  	4,%l7
	call	nextsym
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	base10p
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	trysymi
	nop
tryflo6:
	dec  	4,%l7
	call	nextflo
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	base10p
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	bne	tryflo6
	nop
	ba,a	trysymi
	.align	4
trysymi:
	set	tsymb,%l1
	ld	[%l1+0],%l1
trysymb:
	dec  	4,%l7
	call	trysymb0
	st   	%o7,[%l7+0]
	.align	4
trysymbx:
	mov   	%l2,%o1
	cmp    	%o1,0
	beq	trysymre
	nop
	mov   	%l2,%o1
	cmp    	%o1,1
	beq	mak2d
	nop
	mov   	%l2,%o1
	cmp    	%o1,2
	beq	mak3d12
	nop
mak3d2n:
	dec  	4,%l7
	call	symballc
	st   	%o7,[%l7+0]
	.align	4
plac3d2n:
	ld	[%l4+28],%l3
	st   	%l3,[%l1+28]
	st   	%l1,[%l4+28]
	ld	[%l3+20],%o3
	st   	%o3,[%l1+20]
trysymre:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mak3d12:
	dec  	4,%l7
	call	symballc
	st   	%o7,[%l7+0]
	.align	4
plac3d12:
	ld	[%l4+28],%o3
	st   	%o3,[%l1+20]
	st   	%l1,[%l4+28]
	st   	%l4,[%l1+28]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
mak2d:
	set	tsymb,%l2
	ld	[%l2+0],%l2
	dec  	4,%l7
	call	strgallc
	st   	%o7,[%l7+0]
	.align	4
	set	asymb,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,8+0,%o1
	ld	[%l1+0],%o2
	add	%o2,8+0,%o2
	mov   	%l2,%o0
	cmp    	%o2,%o1
	blt     grea26
	nop
	add    	%o1,%o0,%o1
	ba    frea26
	add    	%o2,%o0,%o2
	.align	4
qrea26:	ldub   	[%o1+0],%o3
	stb  	%o3,[%o2+0]
frea26:	dec  	%o1
	deccc  	%o0
	bge      qrea26
	dec  	%o2
	ba,a    erea26
rrea26:
	stb  	%o3,[%o2+0]
	inc  	%o2
	inc  	%o1
grea26:	deccc  	%o0
	bge,a    rrea26
	ldub   	[%o1+0],%o3
erea26:
	mov   	%l1,%l2
	dec  	4,%l7
	call	symballc
	st   	%o7,[%l7+0]
	.align	4
	st   	%l2,[%l1+28]
	set	ksymb,%l4
	ld	[%l4+0],%l4
plac2d:
	set	hashtab,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l4,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%o0
	st   	%o0,[%l1+20]
	set	hashtab,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l4,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	st   	%l1,[%o1+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
trysymb0:
	set	tsymb,%o4
	st   	%l1,[%o4+0]
	set	asymb,%o4
	st   	%l2,[%o4+0]
	dec  	4,%l7
	call	hashfast
	st   	%o7,[%l7+0]
	.align	4
	set	ksymb,%o4
	st   	%l1,[%o4+0]
	set	hashtab,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l1,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l3
	set	hsymb,%o4
	st   	%l3,[%o4+0]
	set	tsymb,%l1
	ld	[%l1+0],%l1
	ba,a	trysymb6
	.align	4
trysymb1:
	ld	[%l3+28],%l4
	cmp	%l4,%i1
	blt  	rea27
	nop
	cmp	%l4,%i2
	blt  	trysymb2
	nop
rea27:
	ld	[%l4+20],%l4
trysymb2:
	ld	[%l4+0],%o0
	ld	[%o0+4],%l2
	cmp   	%l1,%l2
	bne	trysymb5
	nop
	set	asymb,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,8+0,%o1
	ld	[%l4+0],%o2
	add	%o2,8+0,%o2
	mov   	%l1,%o0
	.align	4
	ba,a   	srea28
rrea28:
	ldub	[%o2+0],%o4
	cmp   	%o3,%o4
	bne  	nrea28
	nop
	inc  	%o1
	inc  	%o2
srea28:	deccc  	%o0
	bge,a  	rrea28
	ldub	[%o1+0],%o3
	nop
	ba,a   	trysymb8
	.align	4
nrea28:
trysymb5:
	set	hsymb,%o4
	st   	%l3,[%o4+0]
	ld	[%l3+20],%l3
trysymb6:
	cmp    	%l3,0
	blt  	trysymb1
	nop
	cmp    	%l3,%i0
	bge  	trysymb1
	nop
	set	1,%l2
	set	ksymb,%l4
	ld	[%l4+0],%l4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
trysymb8:
	mov   	%l3,%l1
	set	hsymb,%l2
	ld	[%l2+0],%l2
	cmp	%l1,%l2
	beq	trysy3d
	nop
	ld	[%l1+20],%o3
	st   	%o3,[%l2+20]
	set	ksymb,%l3
	ld	[%l3+0],%l3
	set	hashtab,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l3,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%o0
	st   	%o0,[%l1+20]
	set	hashtab,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l3,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	st   	%l1,[%o1+0]
	ba,a	trysy3d
	.align	4
trysymp:
	dec  	4,%l7
	set	cpkgc,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	set	cpkgc,%o4
	st   	%l1,[%o4+0]
	ld	[%l2+0],%o0
	ld	[%o0+4],%l1
	set	trysymb,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	cpkgc,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
trysympk:
	dec  	4,%l7
	set	cpkgc,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	set	cpkgc,%o4
	st   	%l1,[%o4+0]
	mov   	%l2,%l1
	set	trysymp1,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	cpkgc,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
trysymp1:
	dec  	4,%l7
	set	trysymbx,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	trysy3d
	.align	4
pkgcequ:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	ld	[%l1+12],%l1
	set	cpkgc,%l2
	ld	[%l2+0],%l2
	dec  	4,%l7
	call	equal
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l2
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
trysy3d:
	set	cpkgc,%l4
	ld	[%l4+0],%l4
	cmp	%l4,%i2
	blt  	rea29
	nop
	cmp	%l4,%i3
	blt  	trysy3s
	nop
rea29:
trysy3c:
	dec  	4,%l7
	call	pkgcequ
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l2,%i2
	bne	trysyr4
	nop
	ld	[%l1+28],%o0
	cmp    	%o0,%i1
	blt  	trysy3c0
	nop
	cmp    	%o0,%i2
	bge  	trysy3c0
	nop
trysyr1:
	set	2,%l2
	mov   	%l1,%l4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
trysy3c0:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
trysy3c1:
	ld	[%l1+28],%l1
	dec  	4,%l7
	call	pkgcequ
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l2,%i2
	bne	trysyr3
	nop
	ld	[%l1+20],%o0
	cmp	%o0,%i1
	blt  	rea30
	nop
	cmp	%o0,%i2
	blt  	trysy3c2
	nop
rea30:
	st   	%l1,[%l7+4]
trysy3c2:
	ld	[%l7+0],%o1
	cmp	%l1,%o1
	bne	trysy3c1
	nop
	inc  	4*1,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
trysyr2:
	set	3,%l2
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
trysyr3:
	inc  	4*2,%l7
trysyr4:
	mov   	%g0,%l2
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
trysy3s:
	ld	[%l1+12],%o1
	cmp	%l4,%o1
	beq	trysyr4
	nop
	ld	[%l1+28],%o0
	cmp	%o0,%i1
	blt  	rea31
	nop
	cmp	%o0,%i2
	blt  	trysyr1
	nop
rea31:
	mov   	%l1,%l2
	mov   	%l1,%l3
trysy31:
	ld	[%l1+28],%l1
	ld	[%l1+12],%o1
	cmp	%l4,%o1
	beq	trysyr4
	nop
	ld	[%l1+20],%o0
	cmp	%o0,%i1
	blt  	rea32
	nop
	cmp	%o0,%i2
	blt  	trysy32
	nop
rea32:
	mov   	%l1,%l2
trysy32:
	cmp	%l1,%l3
	bne	trysy31
	nop
	mov   	%l2,%l4
	ba,a	trysyr2
	.align	4
istdsym:
	add    	%i2,1*32,%o3
	st   	%o3,[%l1+0]
	st   	%i2,[%l1+4]
	st   	%g0,[%l1+8]
	set	0,%o0
	sth   	%o0,[%l1+24]
	sth   	%g0,[%l1+26]
	st   	%i2,[%l1+16]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
symballc:
	set	fsymb,%l1
	ld	[%l1+0],%l1
	cmp	%l1,%g0
	bne	symball1
	nop
	dec  	4,%l7
	call	gcsymb
	st   	%o7,[%l7+0]
	.align	4
	set	fsymb,%l1
	ld	[%l1+0],%l1
symball1:
	ld	[%l1+20],%o3
	set	fsymb,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	istdsym
	st   	%o7,[%l7+0]
	.align	4
	set	cpkgc,%o3
	ld	[%o3+0],%o3
	st   	%o3,[%l1+12]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
crastrg:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	mov   	%l1,%l2
	dec  	4,%l7
	call	strgallc
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
	mov   	%l2,%o0
	mov   	%l3,%o1
	ld	[%l1+0],%o2
	inc  	8,%o2
	cmp    	%o2,%o1
	blt     grea33
	nop
	add    	%o1,%o0,%o1
	ba    frea33
	add    	%o2,%o0,%o2
	.align	4
qrea33:	ldub   	[%o1+0],%o3
	stb  	%o3,[%o2+0]
frea33:	dec  	%o1
	deccc  	%o0
	bge      qrea33
	dec  	%o2
	ba,a    erea33
rrea33:
	stb  	%o3,[%o2+0]
	inc  	%o2
	inc  	%o1
grea33:	deccc  	%o0
	bge,a    rrea33
	ldub   	[%o1+0],%o3
erea33:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getch:
	set	ringur,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	beq	getch1
	nop
	set	1,%o3
	set	getchfl,%o4
	st   	%o3,[%o4+0]
	set	ringur,%l4
	ld	[%l4+0],%l4
	ld	[%l4+4],%o3
	set	ringur,%o4
	st   	%o3,[%o4+0]
	ld	[%l4+0],%l4
	ba,a	getch2
	.align	4
getch1:
	set	impli,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	bne	getch3
	nop
	set	getchfl,%o4
	st   	%g0,[%o4+0]
	dec  	4,%l7
	call	inphy
	st   	%o7,[%l7+0]
	.align	4
getch2:
	set	12,%l3
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,255
	bgt	getch21
	nop
	set	tabch,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l4,%o1,%o1
	ldub	[%o1+0],%l3
getch21:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getch3:
	set	impld,%l4
	ld	[%l4+0],%l4
	set	2,%o3
	set	getchfl,%o4
	st   	%o3,[%o4+0]
	cmp    	%l4,%i2
	beq	getch4
	nop
	cmp    	%l4,%i3
	blt	erlec1
	nop
	ld	[%l4+4],%o3
	set	impld,%o4
	st   	%o3,[%o4+0]
	ld	[%l4+0],%l4
	cmp    	%l4,0
	blt  	erlec9
	nop
	cmp    	%l4,%i0
	bge  	erlec9
	nop
	ba,a	getch2
	.align	4
getch4:
	set	impld,%o4
	st   	%g0,[%o4+0]
	set	32,%l4
	ba,a	getch2
	.align	4
getcv:
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l3,%o0
	sll  	%o0,2,%o0
	set	tgetcv,%o1
	dec	8,%o1
	add   	%o0,%o1,%o0
	ld	[%o0+8],%o0
	jmp 	%o0
	nop
	.align	4
tgetcv:
	.word 	getcv
	.word 	getcvc
	.word 	getcvs
	.word 	getcv1
	.word 	getcvr
	.word 	getcvr
	.word 	getcvr
	.word 	getcvr
	.word 	getcvr
	.word 	getcvr
	.word 	getcvr
	.word 	getcvr
	.word 	getcv2
	.word 	getcvr
	.word 	getcvr
getcvr:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getcv1:
	set	quotes,%o4
	st   	%l4,[%o4+0]
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	set	12,%l3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getcv2:
	set	231*32,%l3
	add    	%i2,%l3,%l3
	ld	[%l3+0],%o0
	cmp    	%o0,%i2
	bne	getcv3
	nop
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,65
	blt	getcv3
	nop
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,90
	bgt	getcv3
	nop
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	add	%l4,32,%l4
	and 	%l4,%l0,%l4
getcv3:
	set	12,%l3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getcvc:
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	set	2,%o1
	cmp   	%l3,%o1
	bne	getcvc
	nop
getcvs:
	set	7,%l3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
rd1:
	set	quotes,%o4
	st   	%i2,[%o4+0]
	mov   	%g0,%l2
rdsep:
	dec  	4,%l7
	call	getcv
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l3,%o0
	sll  	%o0,2,%o0
	set	rdtb1,%o1
	dec	8,%o1
	add   	%o0,%o1,%o0
	ld	[%o0+8],%o0
	jmp 	%o0
	nop
	.align	4
rdtb1:
	.word 	erlec1
	.word 	erlec1
	.word 	erlec1
	.word 	erlec1
	.word 	rdparo
	.word 	rdparf
	.word 	rddot
	.word 	rdsep
	.word 	rdpkgc
	.word 	rdsplic
	.word 	rdmac
	.word 	rdstr
	.word 	rdpname
	.word 	rdsymb
	.word 	rdmsymb
rdparo:
	set	rdprd,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	rdprd+2,%o4
	sth	%o0,[%o4]
	set	0,%l3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
rdparf:
	set	rdprd,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	deccc  	1,%o0
	set	rdprd+2,%o4
	sth	%o0,[%o4]
	bge  	rdparfr
	nop
	set	rdprd,%o4
	st   	%g0,[%o4+0]
rdparfr:
	set	1,%l3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
rddot:
	mov   	%l4,%o1
	cmp    	%o1,46
	bne	rddot1
	nop
	dec  	4,%l7
	call	getcv
	st   	%o7,[%l7+0]
	.align	4
	set	12,%o1
	cmp   	%l3,%o1
	beq	rddot2
	nop
	set	2,%l3
	ba,a	rereada4
	.align	4
rddot1:
	set	2,%l3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
rddot2:
	set	bufat,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	set	46,%o0
	stb  	%o0,[%o1+8]
	set	1,%l2
	ba,a	rdpname
	.align	4
rdpkgc:
	set	272*32,%l1
	add    	%i2,%l1,%l1
	ld	[%l1+0],%l1
	ba,a	rdpkgc2
	.align	4
rdpkgc1:
	mov   	%l2,%l1
	set	bufat,%l2
	ld	[%l2+0],%l2
	dec  	4,%l7
	call	tryatom
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	blt  	erlec6
	nop
	cmp    	%l1,%i3
	bge  	erlec6
	nop
rdpkgc2:
	dec  	4,%l7
	set	cpkgc,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	set	cpkgc,%o4
	st   	%l1,[%o4+0]
	set	readi,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	cpkgc,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	dec  	4,%l7
	st   	%l3,[%l7+0]
	set	3,%l3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
rdsplic:
	dec  	4,%l7
	call	asciii
	st   	%o7,[%l7+0]
	.align	4
	mov   	%i2,%l2
	dec  	4,%l7
	call	apply
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	rdsplic1
	nop
	cmp    	%l1,%i3
	bge	rdsplic1
	nop
	ba,a	erlec10
	.align	4
rdsplic1:
	set	4,%l3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
rdmac:
	dec  	4,%l7
	call	asciii
	st   	%o7,[%l7+0]
	.align	4
	mov   	%i2,%l2
	dec  	4,%l7
	call	apply
	st   	%o7,[%l7+0]
	.align	4
rdretobj:
	set	3,%l3
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
rdstr0:
	set	bufat,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l2,%o1,%o1
	stb  	%l4,[%o1+0]
	inc	1,%l2
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	set	lgbufat,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bge	erlec2
	nop
rdstr:
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	set	11,%o1
	cmp   	%l3,%o1
	bne	rdstr0
	nop
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	set	11,%o1
	cmp   	%l3,%o1
	beq	rdstr0
	nop
	dec  	4,%l7
	call	rereada4
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	strgallc
	st   	%o7,[%l7+0]
	.align	4
	set	bufat,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,8+0,%o1
	ld	[%l1+0],%o2
	add	%o2,8+0,%o2
	mov   	%l2,%o0
	cmp    	%o2,%o1
	blt     grea34
	nop
	add    	%o1,%o0,%o1
	ba    frea34
	add    	%o2,%o0,%o2
	.align	4
qrea34:	ldub   	[%o1+0],%o3
	stb  	%o3,[%o2+0]
frea34:	dec  	%o1
	deccc  	%o0
	bge      qrea34
	dec  	%o2
	ba,a    erea34
rrea34:
	stb  	%o3,[%o2+0]
	inc  	%o2
	inc  	%o1
grea34:	deccc  	%o0
	bge,a    rrea34
	ldub   	[%o1+0],%o3
erea34:
	set	cpkgc,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	beq	rdretobj
	nop
	set	cpkgc,%o3
	ld	[%o3+0],%o3
	st   	%o3,[%l1+4]
	ba,a	rdretobj
	.align	4
rdpname:
	set	bufat,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l2,%o1,%o1
	stb  	%l4,[%o1+0]
	inc	1,%l2
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,128
	bge	erlec3
	nop
	dec  	4,%l7
	call	getcv
	st   	%o7,[%l7+0]
	.align	4
	set	12,%o1
	cmp   	%l3,%o1
	beq	rdpname
	nop
	set	6,%o1
	cmp   	%l3,%o1
	beq	rdpname
	nop
rdfinsym:
	set	8,%o1
	cmp   	%l3,%o1
	beq	rdpkgc1
	nop
	dec  	4,%l7
	call	rereada4
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l2,%l1
	set	bufat,%l2
	ld	[%l2+0],%l2
	dec  	4,%l7
	call	tryatom
	st   	%o7,[%l7+0]
	.align	4
	ba,a	rdretobj
	.align	4
rdsymb:
	set	quotes,%o4
	st   	%l4,[%o4+0]
	ba,a	rdsymb1
	.align	4
rdsymb0:
	set	bufat,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l2,%o1,%o1
	stb  	%l4,[%o1+0]
	inc	1,%l2
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,256
	bge	erlec5
	nop
rdsymb1:
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	set	13,%o1
	cmp   	%l3,%o1
	bne	rdsymb0
	nop
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	set	13,%o1
	cmp   	%l3,%o1
	beq	rdsymb0
	nop
	ba,a	rdfinsym
	.align	4
rdmsymb:
	set	quotes,%o4
	st   	%l4,[%o4+0]
	set	bufat,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	stb  	%l4,[%o1+8]
	set	1,%l2
	dec  	4,%l7
	call	getcv
	st   	%o7,[%l7+0]
	.align	4
	ba,a	rdfinsym
	.align	4
readi:
	dec  	4,%l7
	call	rd1
	st   	%o7,[%l7+0]
	.align	4
read0:
	mov   	%l3,%o0
	sll  	%o0,2,%o0
	set	readt1,%o1
	dec	8,%o1
	add   	%o0,%o1,%o0
	ld	[%o0+8],%o0
	jmp 	%o0
	nop
	.align	4
readt1:
	.word 	read2
	.word 	erlec4
	.word 	erlec4
	.word 	rdpopj
	.word 	read1
read1:
	ld	[%l1+4],%o0
	cmp    	%o0,%i2
	bne	erlec10
	nop
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
read2:
	dec  	4,%l7
	set	curread,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	set	238*32,%l1
	add    	%i2,%l1,%l1
	cmp    	%i2,%g4
	bne    	rea35
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
rea35:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	curread,%o4
	st   	%l1,[%o4+0]
read3:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	rd1
	st   	%o7,[%l7+0]
	.align	4
read31:
	mov   	%l3,%o0
	sll  	%o0,2,%o0
	set	readt2,%o1
	dec	8,%o1
	add   	%o0,%o1,%o0
	ld	[%o0+8],%o0
	jmp 	%o0
	nop
	.align	4
readt2:
	.word 	read6
	.word 	read7
	.word 	read9
	.word 	read4
	.word 	read5
read4:
	cmp    	%i2,%g4
	bne    	rea36
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
rea36:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	ld	[%l7+0],%l2
	inc  	4,%l7
	st   	%l1,[%l2+4]
	ba,a	read3
	.align	4
read5:
	cmp    	%l1,%i3
	bge	read51
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	read3
	.align	4
read51:
	ld	[%l7+0],%l2
	inc  	4,%l7
	st   	%l1,[%l2+4]
read52:
	ld	[%l1+4],%o0
	cmp    	%o0,%i3
	blt	read3
	nop
	ld	[%l1+4],%l1
	ba,a	read52
	.align	4
read6:
	dec  	4,%l7
	set	read4,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	read2
	.align	4
read7:
	ld	[%l7+0],%l1
	inc  	4,%l7
read71:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l1+4],%l1
	ld	[%l7+0],%o0
	set	curread,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
read9:
	dec  	4,%l7
	call	readi
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	rd1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	mov   	%l3,%o0
	sll  	%o0,2,%o0
	set	readt3,%o1
	dec	8,%o1
	add   	%o0,%o1,%o0
	ld	[%o0+8],%o0
	jmp 	%o0
	nop
	.align	4
readt3:
	.word 	erlec7
	.word 	read91
	.word 	erlec7
	.word 	erlec7
	.word 	erlec7
read91:
	st   	%l1,[%l2+4]
	ba,a	read71
	.align	4
erlec1:
	set	1,%l1
	ba,a	erlec
	.align	4
erlec2:
	set	2,%l1
	ba,a	erlec
	.align	4
erlec3:
	set	3,%l1
	ba,a	erlec
	.align	4
erlec4:
	set	4,%l1
	ba,a	erlec
	.align	4
erlec5:
	set	5,%l1
	ba,a	erlec
	.align	4
erlec6:
	set	6,%l1
	ba,a	erlec
	.align	4
erlec7:
	set	7,%l1
	ba,a	erlec
	.align	4
erlec8:
	set	8,%l1
	ba,a	erlec
	.align	4
erlec9:
	set	9,%l1
	ba,a	erlec
	.align	4
erlec10:
	set	10,%l1
	ba,a	erlec
	.align	4
erlec11:
	set	11,%l1
	ba,a	erlec
	.align	4
erlec:
	set	impli,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	bne	erlecc1
	nop
	set	233*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsxt
	.align	4
erlecc1:
	set	234*32,%l2
	add    	%i2,%l2,%l2
	set	impli,%o4
	st   	%i2,[%o4+0]
	set	impld,%o4
	st   	%i2,[%o4+0]
	ba,a	errsxt
	.align	4

!
!	FENTRY	lread
!
	.seg	"data1"   
	.align	4
.lread:	.word    0
	._lread = 1
	.seg	"text"
	.align	8
lread:
	dec  	4,%l7
	call	getcv
	st   	%o7,[%l7+0]
	.align	4
	set	5,%o1
	cmp   	%l3,%o1
	beq	lread
	nop
	set	7,%o1
	cmp   	%l3,%o1
	beq	lread
	nop
	dec  	4,%l7
	call	rereada4
	st   	%o7,[%l7+0]
	.align	4
	set	232*32,%l1
	add    	%i2,%l1,%l1
	dec  	4,%l7
	ld	[%l1+0],%o0
	st   	%o0,[%l7+0]
	add    	%i2,3*32,%o3
	st   	%o3,[%l1+0]
	set	readi,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
lreadend:
	ld	[%l7+0],%l1
	inc  	4,%l7
	set	232*32,%l4
	add    	%i2,%l4,%l4
	ld	[%l7+0],%o0
	st   	%o0,[%l4+0]
	inc  	4,%l7
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4

!
!	FENTRY	implode
!
	.seg	"data1"   
	.align	4
.implode:	.word    0
	._implode = 2
	.seg	"text"
	.align	8
	.global	implode
implode:
	dec  	4,%l7
	set	impld,%o0
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
	set	impld,%o4
	st   	%l1,[%o4+0]
	add    	%i2,3*32,%o3
	set	impli,%o4
	st   	%o3,[%o4+0]
	set	ringur,%o4
	st   	%i2,[%o4+0]
	set	readi,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
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
	set	impld,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4

!
!	FENTRY	implodech
!
	.seg	"data1"   
	.align	4
.implodech:	.word    0
	._implodech = 2
	.seg	"text"
	.align	8
	.global	implodech
implodech:
	mov   	%l1,%l2
	mov   	%i2,%l3
impldech1:
	cmp    	%l2,%i3
	blt	impldech2
	nop
	ld	[%l2+0],%l1
	dec  	4,%l7
	call	cascii
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%i2,%g4
	bne    	rea37
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
rea37:
	st   	%l1,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l3,[%o2+4]
	mov   	%o2,%l3
	ld	[%l2+4],%l2
	ba,a	impldech1
	.align	4
impldech2:
	mov   	%l3,%l1
	dec  	4,%l7
	call	nreverse
	st   	%o7,[%l7+0]
	.align	4
	ba,a	implode
	.align	4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	readch
!
	.seg	"data1"   
	.align	4
.readch:	.word    0
	._readch = 1
	.seg	"text"
	.align	8
	.global	readch
readch:
	dec  	4,%l7
	set	asciii,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	getch
	.align	4

!
!	FENTRY	readcod
!
	.seg	"data1"   
	.align	4
.readcod:	.word    0
	._readcod = 1
	.seg	"text"
	.align	8
	.global	readcod
readcod:
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l4,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	lcuread
!
	.seg	"data1"   
	.align	4
.lcuread:	.word    0
	._lcuread = 1
	.seg	"text"
	.align	8
	.global	lcuread
lcuread:
	set	curread,%l1
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	teread
!
	.seg	"data1"   
	.align	4
.teread:	.word    0
	._teread = 1
	.seg	"text"
	.align	8
	.global	teread
teread:
	set	ringur,%o4
	st   	%i2,[%o4+0]
	set	inmax,%o4
	st   	%g0,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	reread
!
	.seg	"data1"   
	.align	4
.reread:	.word    0
	._reread = 2
	.seg	"text"
	.align	8
	.global	reread
reread:
	cmp    	%l1,%i2
	beq	reread9
	nop
	cmp    	%l1,%i3
	blt	rereade
	nop
	mov   	%i2,%l2
	cmp    	%i2,%g4
	bne    	rea38
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
rea38:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
	dec  	4,%l7
	st   	%l2,[%l7+0]
reread4:
	ld	[%l1+0],%l3
	cmp    	%i2,%g4
	bne    	rea39
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
rea39:
	st   	%l3,[%g4+0]
	mov   	%g4,%l3
	ld	[%g4+4],%g4
	st   	%i2,[%l3+4]
	st   	%l3,[%l2+4]
	mov   	%l3,%l2
	ld	[%l1+4],%l1
	cmp    	%l1,%i3
	bge	reread4
	nop
	set	ringur,%o3
	ld	[%o3+0],%o3
	st   	%o3,[%l2+4]
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l1+4],%l1
	set	ringur,%o4
	st   	%l1,[%o4+0]
reread9:
	set	ringur,%l1
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
rereade:
	set	240*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnla
	.align	4
rereada4:
	set	getchfl,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,0
	bne	rrda41
	nop
	set	polig,%o0
	ld	[%o0+0],%o0
	dec	1,%o0
	set	polig+2,%o4
	sth	%o0,[%o4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
rrda41:
	cmp    	%i2,%g4
	bne    	rea40
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
rea40:
	st   	%l4,[%g4+0]
	mov   	%g4,%l4
	ld	[%g4+4],%g4
	set	ringur,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l4+4]
	set	ringur,%o4
	st   	%l4,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	peekch
!
	.seg	"data1"   
	.align	4
.peekch:	.word    0
	._peekch = 1
	.seg	"text"
	.align	8
	.global	peekch
peekch:
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	call	rereada4
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	ba,a	asciii
	.align	4

!
!	FENTRY	peekcn
!
	.seg	"data1"   
	.align	4
.peekcn:	.word    0
	._peekcn = 1
	.seg	"text"
	.align	8
	.global	peekcn
peekcn:
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l4,%l1
	ba,a	rereada4
	.align	4

!
!	FENTRY	readline
!
	.seg	"data1"   
	.align	4
.readline:	.word    0
	._readline = 1
	.seg	"text"
	.align	8
	.global	readline
readline:
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	mov   	%i2,%l1
	mov   	%l4,%o1
	cmp    	%o1,13
	bne	readl2
	nop
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	mov   	%i2,%l1
	mov   	%l4,%o1
	cmp    	%o1,10
	bne	readl2
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
readl2:
	mov   	%l4,%o1
	cmp    	%o1,10
	beq	readl4
	nop
readl3:
	mov   	%l4,%o1
	cmp    	%o1,10
	beq	readl5
	nop
	cmp    	%i2,%g4
	bne    	rea41
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
rea41:
	st   	%l4,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
readl4:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	mov   	%l4,%o1
	cmp    	%o1,13
	bne	readl3
	nop
readl5:
	ba,a	nreverse
	.align	4

!
!	FENTRY	stratom
!
	.seg	"data1"   
	.align	4
.stratom:	.word    0
	._stratom = 4
	.seg	"text"
	.align	8
	.global	stratom
stratom:
	cmp    	%l1,0
	blt  	erstrat1
	nop
	cmp    	%l1,%i0
	bge  	erstrat1
	nop
	cmp    	%l2,%i1
	blt  	erstrat2
	nop
	cmp    	%l2,%i2
	bge  	erstrat2
	nop
	set	quotes,%o4
	st   	%l3,[%o4+0]
	ba,a	tryatom
	.align	4
erstrat1:
	set	243*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnia
	.align	4
erstrat2:
	mov   	%l2,%l1
	set	243*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnsa
	.align	4

!
!	FENTRY	readstrg
!
	.seg	"data1"   
	.align	4
.readstrg:	.word    0
	._readstrg = 1
	.seg	"text"
	.align	8
	.global	readstrg
readstrg:
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g0,%l2
	mov   	%l4,%o1
	cmp    	%o1,10
	beq	reads4
	nop
	mov   	%l4,%o1
	cmp    	%o1,13
	bne	reads3
	nop
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g0,%l2
reads3:
	mov   	%l4,%o1
	cmp    	%o1,10
	beq	reads5
	nop
	set	bufat,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l2,%o1,%o1
	stb  	%l4,[%o1+0]
	set	lgbufat,%o1
	ld	[%o1+0],%o1
	cmp   	%l2,%o1
	beq	reads5
	nop
	inc	1,%l2
reads4:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	mov   	%l4,%o1
	cmp    	%o1,13
	bne	reads3
	nop
reads5:
	dec  	4,%l7
	call	strgallc
	st   	%o7,[%l7+0]
	.align	4
	set	bufat,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,8+0,%o1
	ld	[%l1+0],%o2
	add	%o2,8+0,%o2
	mov   	%l2,%o0
	cmp    	%o2,%o1
	blt     grea42
	nop
	add    	%o1,%o0,%o1
	ba    frea42
	add    	%o2,%o0,%o2
	.align	4
qrea42:	ldub   	[%o1+0],%o3
	stb  	%o3,[%o2+0]
frea42:	dec  	%o1
	deccc  	%o0
	bge      qrea42
	dec  	%o2
	ba,a    erea42
rrea42:
	stb  	%o3,[%o2+0]
	inc  	%o2
	inc  	%o1
grea42:	deccc  	%o0
	bge,a    rrea42
	ldub   	[%o1+0],%o3
erea42:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	readdltd
!
	.seg	"data1"   
	.align	4
.readdltd:	.word    0
	._readdltd = 2
	.seg	"text"
	.align	8
readdltd:
	cmp    	%l1,0
	blt  	readdltr
	nop
	cmp    	%l1,%i0
	bge  	readdltr
	nop
	set	tabch,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l1,%o1,%o1
	ldub	[%o1+0],%l2
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	tabch,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l1,%o1,%o1
	set	5,%o0
	stb  	%o0,[%o1+0]
	set	read2,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	set	tabch,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l4,%o1,%o1
	stb  	%l2,[%o1+0]
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
readdltr:
	set	244*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnia
	.align	4
asciii:
	mov   	%l4,%l1
	cmp    	%l1,0
	blt  	ascierr
	nop
	cmp    	%l1,%i0
	bge  	ascierr
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	fascii3
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,128
	bge	fascii3
	nop
	set	cachch,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l1,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l2
	cmp    	%l2,%i2
	blt  	fascii3
	nop
	cmp    	%l2,%i3
	bge  	fascii3
	nop
	mov   	%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
fascii3:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	mov   	%g0,%l2
	set	bufat,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l2,%o1,%o1
	stb  	%l1,[%o1+0]
	inc	1,%l2
	mov   	%l2,%l1
	set	bufat,%l2
	ld	[%l2+0],%l2
	dec  	4,%l7
	set	cpkgc,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	set	fascii8,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	cpkgc,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l1,%i2
	blt  	fascii7
	nop
	cmp    	%l1,%i3
	bge  	fascii7
	nop
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	fascii7
	nop
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,128
	bge	fascii7
	nop
	set	cachch,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l2,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	st   	%l1,[%o1+0]
fascii7:
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
fascii8:
	set	cpkgc,%o4
	st   	%i2,[%o4+0]
	ba,a	tryatom
	.align	4
ascierr:
	set	248*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnia
	.align	4

!
!	FENTRY	fascii
!
	.seg	"data1"   
	.align	4
.fascii:	.word    0
	._fascii = 2
	.seg	"text"
	.align	8
fascii:
	mov   	%l1,%l4
	ba,a	asciii
	.align	4

!
!	FENTRY	cascii
!
	.seg	"data1"   
	.align	4
.cascii:	.word    0
	._cascii = 2
	.seg	"text"
	.align	8
	.global	cascii
cascii:
	set	249*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l1+0],%o1
	add	%o1,8+0,%o1
	ldub	[%o1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	concatpk
!
	.seg	"data1"   
	.align	4
.concatpk:	.word    0
	._concatpk = 3
	.seg	"text"
	.align	8
	.global	concatpk
concatpk:
	cmp    	%l1,%i2
	blt  	concpkr1
	nop
	cmp    	%l1,%i3
	bge  	concpkr1
	nop
	cmp    	%l2,%i2
	blt  	concpkr2
	nop
	cmp    	%l2,%i3
	bge  	concpkr2
	nop
concpk0:
	cmp    	%l2,%i2
	beq	concpkr
	nop
	dec  	4,%l7
	st   	%l2,[%l7+0]
	ld	[%l2+12],%l2
	dec  	4,%l7
	call	concpk0
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	ba,a	trysympk
	.align	4
concpkr:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
concpkr2:
	mov   	%l2,%l1
concpkr1:
	set	247*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4

!
!	FENTRY	uppercase
!
	.seg	"data1"   
	.align	4
.uppercase:	.word    0
	._uppercase = 2
	.seg	"text"
	.align	8
	.global	uppercase
uppercase:
	cmp    	%l1,0
	blt  	upper9
	nop
	cmp    	%l1,%i0
	bge  	upper9
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,97
	blt	upper8
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,122
	bgt	upper8
	nop
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sub	%l1,32,%l1
	and 	%l1,%l0,%l1
upper8:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
upper9:
	set	250*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnia
	.align	4

!
!	FENTRY	lowercase
!
	.seg	"data1"   
	.align	4
.lowercase:	.word    0
	._lowercase = 2
	.seg	"text"
	.align	8
	.global	lowercase
lowercase:
	cmp    	%l1,0
	blt  	lower9
	nop
	cmp    	%l1,%i0
	bge  	lower9
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,65
	blt	lower8
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,90
	bgt	lower8
	nop
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	add	%l1,32,%l1
	and 	%l1,%l0,%l1
lower8:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
lower9:
	set	251*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnia
	.align	4

!
!	FENTRY	asciip
!
	.seg	"data1"   
	.align	4
.asciip:	.word    0
	._asciip = 2
	.seg	"text"
	.align	8
	.global	asciip
asciip:
	cmp    	%l1,0
	blt  	asciipn
	nop
	cmp    	%l1,%i0
	bge  	asciipn
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	asciipn
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,255
	ble	asciipt
	nop
asciipn:
	mov   	%i2,%l1
asciipt:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	digitp
!
	.seg	"data1"   
	.align	4
.digitp:	.word    0
	._digitp = 2
	.seg	"text"
	.align	8
	.global	digitp
digitp:
	cmp    	%l1,0
	blt  	digitpn
	nop
	cmp    	%l1,%i0
	bge  	digitpn
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,48
	blt	digitpn
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,57
	ble	digitpt
	nop
digitpn:
	mov   	%i2,%l1
digitpt:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	letterp
!
	.seg	"data1"   
	.align	4
.letterp:	.word    0
	._letterp = 2
	.seg	"text"
	.align	8
	.global	letterp
letterp:
	cmp    	%l1,0
	blt  	lettern
	nop
	cmp    	%l1,%i0
	bge  	lettern
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,65
	blt	lettere
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,90
	ble	lettert
	nop
lettere:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,97
	blt	lettern
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,122
	ble	lettert
	nop
lettern:
	mov   	%i2,%l1
lettert:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	fibase
!
	.seg	"data1"   
	.align	4
.fibase:	.word    0
	._fibase = 5
	.seg	"text"
	.align	8
	.global	fibase
fibase:
	set	255*32,%l2
	add    	%i2,%l2,%l2
	set	ibase,%l3
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
	set	ibase,%o4
	st   	%l1,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
! end
