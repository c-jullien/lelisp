!
!	File physio.s expansion for sparc arch=v8plus.
!	This file is part of Le-Lisp kernel.
!	Generated on Sat Oct   7 17 18:55:37 
!
	.file	"physio.s"
	.align	8 
	.global	bvar
	.global	itsoft
	.global	maxchan
	.global	errnia
	.global	errnaa
	.global	errios
	.global	errwna
	.global	errudf
	.global	errnsa
	.global	getsetn
	.global	gccons
	.global	gcfloat
	.global	gcnumb
	.global	inisymb
	.global	inicst
	.global	ringur
	.global	curread
	.global	cpkgc
	.global	erlec11
	.global	bufout
	.global	pocour
	.global	nbleft
	.global	nbrig
	.global	maxpocou
	.global	outch
	.global	flulin
	.global	findtag
	.global	sysprot
	.global	ffuncall
	.global	savea4
	.global	getfns
	.global	copy
	.global	stringa1
	.global	stringa2
	.global	makestrg
	.global	makevect
	.global	strgallc
	.global	rdpscrn
	.global	ini_pio
	.global	polig
	.global	inmax
	.global	tabchan
	.global	bufch
	.global	rubstrg
	.global	cntrlc
	.global	istream
	.global	ostream
	.global	inphy
	.global	curprmpt
	.global	input
	.global	restcori
	.global	tyo
	.global	tycursor
	.global	tystrg
	.global	tynewln
	.global	curoutch
	.global	lgbuffer
	.global	phytrue
	.seg	"text"
ini_pio:
	set	maxchan,%l1
	ld	[%l1+0],%l1
	mov   	%i2,%l2
	dec  	4,%l7
	call	makevect
	st   	%o7,[%l7+0]
	.align	4
	set	tabchan,%o4
	st   	%l1,[%o4+0]
	set	maxchan,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sub	%o0,3,%o0
	set	maxchan+2,%o4
	sth	%o0,[%o4]
	set	maxchan,%l2
	ld	[%l2+0],%l2
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	add	%l2,1,%l2
	and 	%l2,%l0,%l2
	mov   	%i2,%l1
	set	1,%l3
	set	1024,%o3
	set	lgbuffer,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	inchini
	st   	%o7,[%l7+0]
	.align	4
	mov   	%i2,%l1
	dec  	4,%l7
	call	inopen
	st   	%o7,[%l7+0]
	.align	4
	set	maxchan,%l2
	ld	[%l2+0],%l2
	mov   	%i2,%l1
	set	2,%l3
	dec  	4,%l7
	call	outchini
	st   	%o7,[%l7+0]
	.align	4
	set	maxchan,%l1
	ld	[%l1+0],%l1
	dec  	4,%l7
	call	outopen
	st   	%o7,[%l7+0]
	.align	4
	set	maxchan,%l2
	ld	[%l2+0],%l2
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	add	%l2,2,%l2
	and 	%l2,%l0,%l2
	mov   	%i2,%l1
	set	2,%l3
	dec  	4,%l7
	call	outchini
	st   	%o7,[%l7+0]
	.align	4
	set	maxchan,%l1
	ld	[%l1+0],%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	add	%l1,2,%l1
	and 	%l1,%l0,%l1
	dec  	4,%l7
	call	outchani
	st   	%o7,[%l7+0]
	.align	4
	set	bufout,%o0
	ld	[%o0+0],%o0
	ld	[%o0+0],%o0
	ld	[%o0+4],%l1
	set	maxpocou,%o4
	st   	%l1,[%o4+0]
	inc	1,%l1
	set	nbrig,%o4
	st   	%l1,[%o4+0]
	set	maxchan,%l1
	ld	[%l1+0],%l1
	dec  	4,%l7
	call	outchani
	st   	%o7,[%l7+0]
	.align	4
	set	1,%l1
	mov   	%g0,%l2
	dec  	4,%l7
	call	makestrg
	st   	%o7,[%l7+0]
	.align	4
	set	bufch,%o4
	st   	%l1,[%o4+0]
	set	2,%l1
	set	94,%l2
	dec  	4,%l7
	call	makestrg
	st   	%o7,[%l7+0]
	.align	4
	set	cntrlc,%o4
	st   	%l1,[%o4+0]
	set	3,%l1
	set	8,%l2
	dec  	4,%l7
	call	makestrg
	st   	%o7,[%l7+0]
	.align	4
	set	rubstrg,%o4
	st   	%l1,[%o4+0]
	set	rubstrg,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	set	32,%o0
	stb  	%o0,[%o1+9]
	.seg	"data1"   
	.align	4
pphy1:
	.asciz	"tyi"
	.seg	"text"
bphy1:
	set	3,%l1
	set	pphy1,%l2
	set	tyi,%l3
	dec	8,%l3
	set	trash,%l4
	set	._tyi,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy2:
	.asciz	"tys"
	.seg	"text"
bphy2:
	set	3,%l1
	set	pphy2,%l2
	set	tys,%l3
	dec	8,%l3
	set	trash,%l4
	set	._tys,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy3:
	.asciz	"tyinstring"
	.seg	"text"
bphy3:
	set	10,%l1
	set	pphy3,%l2
	set	tyinstrg,%l3
	dec	8,%l3
	set	trash,%l4
	set	._tyinstrg,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy4:
	.asciz	"tyo"
	.seg	"text"
bphy4:
	set	3,%l1
	set	pphy4,%l2
	set	tyo,%l3
	dec	8,%l3
	set	trash,%l4
	set	._tyo,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy5:
	.asciz	"tyflush"
	.seg	"text"
bphy5:
	set	7,%l1
	set	pphy5,%l2
	set	tyflush,%l3
	dec	8,%l3
	set	trash,%l4
	set	._tyflush,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy6:
	.asciz	"tyback"
	.seg	"text"
bphy6:
	set	6,%l1
	set	pphy6,%l2
	set	tyback,%l3
	dec	8,%l3
	set	trash,%l4
	set	._tyback,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy7:
	.asciz	"tynewline"
	.seg	"text"
bphy7:
	set	9,%l1
	set	pphy7,%l2
	set	tynewln,%l3
	dec	8,%l3
	set	trash,%l4
	set	._tynewln,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy8:
	.asciz	"tycn"
	.seg	"text"
bphy8:
	set	4,%l1
	set	pphy8,%l2
	set	tycn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._tycn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy9:
	.asciz	"tystring"
	.seg	"text"
bphy9:
	set	8,%l1
	set	pphy9,%l2
	set	tystrg,%l3
	dec	8,%l3
	set	trash,%l4
	set	._tystrg,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy10:
	.asciz	"tycursor"
	.seg	"text"
bphy10:
	set	8,%l1
	set	pphy10,%l2
	set	tycursor,%l3
	dec	8,%l3
	set	trash,%l4
	set	._tycursor,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy11:
	.asciz	"tycls"
	.seg	"text"
bphy11:
	set	5,%l1
	set	pphy11,%l2
	set	tycls,%l3
	dec	8,%l3
	set	trash,%l4
	set	._tycls,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy12:
	.asciz	"redisplayscreen"
	.seg	"text"
bphy12:
	set	15,%l1
	set	pphy12,%l2
	set	tyrdspl,%l3
	dec	8,%l3
	set	trash,%l4
	set	._tyrdspl,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy13:
	.asciz	"tty"
	.seg	"text"
bphy13:
	set 	3,%l1
	set	pphy13,%l2
	set	186*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	set	186*32,%o3
	add    	%i2,%o3,%o3
	set	cpkgc,%o4
	st   	%o3,[%o4+0]
	.seg	"data1"   
	.align	4
pphy14:
	.asciz	"tyi"
	.seg	"text"
bphy14:
	set	3,%l1
	set	pphy14,%l2
	set	ttytyi,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ttytyi,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy15:
	.asciz	"tys"
	.seg	"text"
bphy15:
	set	3,%l1
	set	pphy15,%l2
	set	ttytys,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ttytys,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy16:
	.asciz	"tyinstring"
	.seg	"text"
bphy16:
	set	10,%l1
	set	pphy16,%l2
	set	ttytyist,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ttytyist,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy17:
	.asciz	"tyo"
	.seg	"text"
bphy17:
	set	3,%l1
	set	pphy17,%l2
	set	ttytyo,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ttytyo,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy18:
	.asciz	"tyflush"
	.seg	"text"
bphy18:
	set	7,%l1
	set	pphy18,%l2
	set	ttytyflu,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ttytyflu,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy19:
	.asciz	"tyback"
	.seg	"text"
bphy19:
	set	6,%l1
	set	pphy19,%l2
	set	ttytybac,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ttytybac,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy20:
	.asciz	"tynewline"
	.seg	"text"
bphy20:
	set	9,%l1
	set	pphy20,%l2
	set	ttytynew,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ttytynew,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy21:
	.asciz	"tycn"
	.seg	"text"
bphy21:
	set	4,%l1
	set	pphy21,%l2
	set	ttytycn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ttytycn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy22:
	.asciz	"tystring"
	.seg	"text"
bphy22:
	set	8,%l1
	set	pphy22,%l2
	set	ttytystr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ttytystr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy23:
	.asciz	"tycursor"
	.seg	"text"
bphy23:
	set	8,%l1
	set	pphy23,%l2
	set	ttytycur,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ttytycur,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy24:
	.asciz	"tycls"
	.seg	"text"
bphy24:
	set	5,%l1
	set	pphy24,%l2
	set	ttytycls,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ttytycls,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy25:
	.asciz	"redisplayscreen"
	.seg	"text"
bphy25:
	set	15,%l1
	set	pphy25,%l2
	set	ttytyrds,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ttytyrds,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,4*32,%o3
	set	cpkgc,%o4
	st   	%o3,[%o4+0]
	.seg	"data1"   
	.align	4
pphy26:
	.asciz	"tty"
	.seg	"text"
bphy26:
	set 	3,%l1
	set	pphy26,%l2
	set	199*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	set	186*32,%o3
	add    	%i2,%o3,%o3
	st   	%o3,[%l1+0]
	set	cpkgc,%o4
	st   	%i2,[%o4+0]
	.seg	"data1"   
	.align	4
pphy27:
	.asciz	"tyco"
	.seg	"text"
bphy27:
	set 	4,%l1
	set	pphy27,%l2
	set	200*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy28:
	.asciz	"bol"
	.seg	"text"
bphy28:
	set	3,%l1
	set	pphy28,%l2
	set	bol,%l3
	dec	8,%l3
	set	trash,%l4
	set	._bol,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy29:
	.asciz	"inmax"
	.seg	"text"
bphy29:
	set	5,%l1
	set	pphy29,%l2
	set	finmax,%l3
	dec	8,%l3
	set	trash,%l4
	set	._finmax,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy30:
	.asciz	"inpos"
	.seg	"text"
bphy30:
	set	5,%l1
	set	pphy30,%l2
	set	finpos,%l3
	dec	8,%l3
	set	trash,%l4
	set	._finpos,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy31:
	.asciz	"inbuf"
	.seg	"text"
bphy31:
	set	5,%l1
	set	pphy31,%l2
	set	finbuf,%l3
	dec	8,%l3
	set	trash,%l4
	set	._finbuf,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy32:
	.asciz	"eof"
	.seg	"text"
bphy32:
	set	3,%l1
	set	pphy32,%l2
	set	lleof,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lleof,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy33:
	.asciz	"prompt"
	.seg	"text"
bphy33:
	set	6,%l1
	set	pphy33,%l2
	set	prompt,%l3
	dec	8,%l3
	set	trash,%l4
	set	._prompt,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy34:
	.asciz	"? "
	.seg	"text"
bphy34:
	set 	2,%l1
	set	pphy34,%l2
	set	207*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l1+28],%o3
	set	curprmpt,%o4
	st   	%o3,[%o4+0]
	add    	%i2,7*32,%o3
	set	cpkgc,%o4
	st   	%o3,[%o4+0]
	.seg	"data1"   
	.align	4
pphy35:
	.asciz	"real-terminal-flag"
	.seg	"text"
bphy35:
	set 	18,%l1
	set	pphy35,%l2
	set	208*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,3*32,%o3
	st   	%o3,[%l1+0]
	.seg	"data1"   
	.align	4
pphy36:
	.asciz	"line-mode-flag"
	.seg	"text"
bphy36:
	set 	14,%l1
	set	pphy36,%l2
	set	209*32,%l3
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
pphy37:
	.asciz	"openi"
	.seg	"text"
bphy37:
	set	5,%l1
	set	pphy37,%l2
	set	openi,%l3
	dec	8,%l3
	set	trash,%l4
	set	._openi,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy38:
	.asciz	"openo"
	.seg	"text"
bphy38:
	set	5,%l1
	set	pphy38,%l2
	set	openo,%l3
	dec	8,%l3
	set	trash,%l4
	set	._openo,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy39:
	.asciz	"opena"
	.seg	"text"
bphy39:
	set	5,%l1
	set	pphy39,%l2
	set	opena,%l3
	dec	8,%l3
	set	trash,%l4
	set	._opena,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy40:
	.asciz	"openib"
	.seg	"text"
bphy40:
	set	6,%l1
	set	pphy40,%l2
	set	openib,%l3
	dec	8,%l3
	set	trash,%l4
	set	._openib,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy41:
	.asciz	"openob"
	.seg	"text"
bphy41:
	set	6,%l1
	set	pphy41,%l2
	set	openob,%l3
	dec	8,%l3
	set	trash,%l4
	set	._openob,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy42:
	.asciz	"openab"
	.seg	"text"
bphy42:
	set	6,%l1
	set	pphy42,%l2
	set	openab,%l3
	dec	8,%l3
	set	trash,%l4
	set	._openab,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy43:
	.asciz	"input"
	.seg	"text"
bphy43:
	set	5,%l1
	set	pphy43,%l2
	set	input,%l3
	dec	8,%l3
	set	trash,%l4
	set	._input,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy44:
	.asciz	"inchan"
	.seg	"text"
bphy44:
	set	6,%l1
	set	pphy44,%l2
	set	inchan,%l3
	dec	8,%l3
	set	trash,%l4
	set	._inchan,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy45:
	.asciz	"outchan"
	.seg	"text"
bphy45:
	set	7,%l1
	set	pphy45,%l2
	set	outchan,%l3
	dec	8,%l3
	set	trash,%l4
	set	._outchan,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy46:
	.asciz	"channel"
	.seg	"text"
bphy46:
	set	7,%l1
	set	pphy46,%l2
	set	fchannel,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fchannel,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy47:
	.asciz	"output"
	.seg	"text"
bphy47:
	set	6,%l1
	set	pphy47,%l2
	set	output,%l3
	dec	8,%l3
	set	trash,%l4
	set	._output,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy48:
	.asciz	"close"
	.seg	"text"
bphy48:
	set	5,%l1
	set	pphy48,%l2
	set	lclose,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lclose,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy49:
	.asciz	"deletefile"
	.seg	"text"
bphy49:
	set	10,%l1
	set	pphy49,%l2
	set	deletfi,%l3
	dec	8,%l3
	set	trash,%l4
	set	._deletfi,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy50:
	.asciz	"renamefile"
	.seg	"text"
bphy50:
	set	10,%l1
	set	pphy50,%l2
	set	renamfi,%l3
	dec	8,%l3
	set	trash,%l4
	set	._renamfi,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy51:
	.asciz	"copyfile"
	.seg	"text"
bphy51:
	set	8,%l1
	set	pphy51,%l2
	set	copyfi,%l3
	dec	8,%l3
	set	trash,%l4
	set	._copyfi,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy52:
	.asciz	"probefile"
	.seg	"text"
bphy52:
	set	9,%l1
	set	pphy52,%l2
	set	probefi,%l3
	dec	8,%l3
	set	trash,%l4
	set	._probefi,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy53:
	.asciz	"save-core"
	.seg	"text"
bphy53:
	set	9,%l1
	set	pphy53,%l2
	set	savecor,%l3
	dec	8,%l3
	set	trash,%l4
	set	._savecor,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy54:
	.asciz	"restore-core"
	.seg	"text"
bphy54:
	set	12,%l1
	set	pphy54,%l2
	set	restcor,%l3
	dec	8,%l3
	set	trash,%l4
	set	._restcor,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy55:
	.asciz	"coerce-namestring"
	.seg	"text"
bphy55:
	set	17,%l1
	set	pphy55,%l2
	set	coercns,%l3
	dec	8,%l3
	set	trash,%l4
	set	._coercns,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy56:
	.asciz	"create-directory"
	.seg	"text"
bphy56:
	set	16,%l1
	set	pphy56,%l2
	set	makdir,%l3
	dec	8,%l3
	set	trash,%l4
	set	._makdir,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pphy57:
	.asciz	"delete-directory"
	.seg	"text"
bphy57:
	set	16,%l1
	set	pphy57,%l2
	set	remdir,%l3
	dec	8,%l3
	set	trash,%l4
	set	._remdir,%o0
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
phytrue:
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	tyi
!
	.seg	"data1"   
	.align	4
.tyi:	.word    0
	._tyi = 1
	.seg	"text"
	.align	8
	.global	tyi
tyi:
	set	174*32,%l1
	add    	%i2,%l1,%l1
	ba,a	totty0
	.align	4

!
!	FENTRY	tys
!
	.seg	"data1"   
	.align	4
.tys:	.word    0
	._tys = 1
	.seg	"text"
	.align	8
	.global	tys
tys:
	set	175*32,%l1
	add    	%i2,%l1,%l1
	ba,a	totty0
	.align	4

!
!	FENTRY	tyinstrg
!
	.seg	"data1"   
	.align	4
.tyinstrg:	.word    0
	._tyinstrg = 2
	.seg	"text"
	.align	8
	.global	tyinstrg
tyinstrg:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	1,%l4
	set	176*32,%l1
	add    	%i2,%l1,%l1
	ba,a	totty
	.align	4

!
!	FENTRY	tyflush
!
	.seg	"data1"   
	.align	4
.tyflush:	.word    0
	._tyflush = 1
	.seg	"text"
	.align	8
	.global	tyflush
tyflush:
	set	178*32,%l1
	add    	%i2,%l1,%l1
	ba,a	totty0
	.align	4

!
!	FENTRY	tyo
!
	.seg	"data1"   
	.align	4
.tyo:	.word    0
	._tyo = 5
	.seg	"text"
	.align	8
tyo:
	set	177*32,%l1
	add    	%i2,%l1,%l1
	ba,a	totty
	.align	4

!
!	FENTRY	tyback
!
	.seg	"data1"   
	.align	4
.tyback:	.word    0
	._tyback = 2
	.seg	"text"
	.align	8
	.global	tyback
tyback:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	1,%l4
	set	179*32,%l1
	add    	%i2,%l1,%l1
	ba,a	totty
	.align	4

!
!	FENTRY	tynewln
!
	.seg	"data1"   
	.align	4
.tynewln:	.word    0
	._tynewln = 1
	.seg	"text"
	.align	8
tynewln:
	set	180*32,%l1
	add    	%i2,%l1,%l1
	ba,a	totty0
	.align	4

!
!	FENTRY	tycn
!
	.seg	"data1"   
	.align	4
.tycn:	.word    0
	._tycn = 2
	.seg	"text"
	.align	8
	.global	tycn
tycn:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	1,%l4
	set	181*32,%l1
	add    	%i2,%l1,%l1
	ba,a	totty
	.align	4

!
!	FENTRY	tystrg
!
	.seg	"data1"   
	.align	4
.tystrg:	.word    0
	._tystrg = 3
	.seg	"text"
	.align	8
tystrg:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	2,%l4
	set	182*32,%l1
	add    	%i2,%l1,%l1
	ba,a	totty
	.align	4

!
!	FENTRY	tycursor
!
	.seg	"data1"   
	.align	4
.tycursor:	.word    0
	._tycursor = 3
	.seg	"text"
	.align	8
tycursor:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	2,%l4
	set	183*32,%l1
	add    	%i2,%l1,%l1
	ba,a	totty
	.align	4

!
!	FENTRY	tycls
!
	.seg	"data1"   
	.align	4
.tycls:	.word    0
	._tycls = 1
	.seg	"text"
	.align	8
	.global	tycls
tycls:
	set	184*32,%l1
	add    	%i2,%l1,%l1
	ba,a	totty0
	.align	4

!
!	FENTRY	tyrdspl
!
	.seg	"data1"   
	.align	4
.tyrdspl:	.word    0
	._tyrdspl = 5
	.seg	"text"
	.align	8
	.global	tyrdspl
tyrdspl:
	set	185*32,%l1
	add    	%i2,%l1,%l1
	ba,a	totty
	.align	4
totty0:
	mov   	%g0,%l4
totty:
	dec  	4,%l7
	st   	%l4,[%l7+0]
	mov   	%l1,%l2
	set	199*32,%l1
	add    	%i2,%l1,%l1
	ld	[%l1+0],%l1
	mov   	%i2,%l3
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	call	getfns
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l1,%i2
	beq	tottyer
	nop
	ld	[%l7+0],%l4
	inc  	4,%l7
	ba,a	ffuncall
	.align	4
tottyer:
	set	199*32,%l1
	add    	%i2,%l1,%l1
	ld	[%l1+0],%l1
	ba,a	errudf
	.align	4

!
!	FENTRY	ttytyi
!
	.seg	"data1"   
	.align	4
.ttytyi:	.word    0
	._ttytyi = 1
	.seg	"text"
	.align	8
	.global	ttytyi
ttytyi:
	dec  	4,%l7
	call	tyflush
	st   	%o7,[%l7+0]
	.align	4
bphy58:
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	phy58
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
phy58:
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
	call 	ttyin,0
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
	cmp    	%o0,0xff
	beq    	bphy58
	mov   	%o0,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	ttytys
!
	.seg	"data1"   
	.align	4
.ttytys:	.word    0
	._ttytys = 1
	.seg	"text"
	.align	8
	.global	ttytys
ttytys:
	dec  	4,%l7
	call	tyflush
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
charttys:      .byte   0
	.seg	"text"
	set	charttys,%o0
	mov   	%o0,%o2
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
	call 	ttys,1
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
	ldub	[%o2+0],%o1
	mov   	%o1,%l1
	mov   	%o0,%l2
	mov   	%l2,%o1
	cmp    	%o1,0
	beq	tys9
	nop
	mov   	%i2,%l1
tys9:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	ttytyist
!
	.seg	"data1"   
	.align	4
.ttytyist:	.word    0
	._ttytyist = 2
	.seg	"text"
	.align	8
	.global	ttytyist
ttytyist:
	cmp    	%l1,%i1
	blt  	ttyinr
	nop
	cmp    	%l1,%i2
	bge  	ttyinr
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	tyflush
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l1+0],%o0
	ld	[%o0+4],%o1
	inc  	8,%o0
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
	call 	ttyinstr,2
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
	mov   	%o0,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ttyinr:
	set	189*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnsa
	.align	4

!
!	FENTRY	ttytyo
!
	.seg	"data1"   
	.align	4
.ttytyo:	.word    0
	._ttytyo = 5
	.seg	"text"
	.align	8
	.global	ttytyo
ttytyo:
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	ttytyo9
	nop
	dec  	4,%l7
	st   	%l4,[%l7+0]
	inc	1,%l4
	ba,a	ttytyo2
	.align	4
ttytyo1:
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l1
	cmp    	%l1,%i2
	beq	ttytyo2
	nop
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	call	ttytyoi
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
ttytyo2:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	ttytyo1
	nop
	mov  	0,%l4
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
ttytyo9:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ttytyoi:
	dec  	4,%l7
	set	ostream,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	maxchan,%l1
	ld	[%l1+0],%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	add	%l1,2,%l1
	and 	%l1,%l0,%l1
	dec  	4,%l7
	call	outchani
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	set	ttytyoi1,%l3
	dec	8,%l3
ttytyoi0:
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	call	outchani
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
ttytyoi1:
	cmp    	%l1,%g3
	blt	ttytyof
	nop
	cmp    	%l1,%i3
	bge	ttytyoc
	nop
	cmp	%l1,%i1
	blt  	phy59
	nop
	cmp	%l1,%i2
	blt  	ttytyos
	nop
phy59:
ttytyoer:
	set	190*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnia
	.align	4
ttytyof:
	mov   	%l1,%l4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	outch
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ttytyoc:
	dec  	4,%l7
	st   	%l1,[%l7+0]
ttytyoc1:
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+0],%l4
	dec  	4,%l7
	call	outch
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%i3
	bge	ttytyoc1
	nop
	cmp    	%l1,%i2
	bne	ttytyoer
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ttytyos:
	ld	[%l1+0],%o0
	ld	[%o0+4],%l2
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
	blt	ttytyos1
	nop
	dec  	4,%l7
	call	flulin
	st   	%o7,[%l7+0]
	.align	4
ttytyos1:
	ld	[%l1+0],%o0
	ld	[%o0+4],%l2
	ld	[%l1+0],%o1
	add	%o1,8+0,%o1
	set	bufout,%o2
	ld	[%o2+0],%o2
	ld	[%o2+0],%o2
	inc	8,%o2
	set	pocour,%o0
	ld	[%o0+0],%o0
	add  	%o0,%o2,%o2
	mov   	%l2,%o0
	cmp    	%o2,%o1
	blt     gphy60
	nop
	add    	%o1,%o0,%o1
	ba    fphy60
	add    	%o2,%o0,%o2
	.align	4
qphy60:	ldub   	[%o1+0],%o3
	stb  	%o3,[%o2+0]
fphy60:	dec  	%o1
	deccc  	%o0
	bge      qphy60
	dec  	%o2
	ba,a    ephy60
rphy60:
	stb  	%o3,[%o2+0]
	inc  	%o2
	inc  	%o1
gphy60:	deccc  	%o0
	bge,a    rphy60
	ldub   	[%o1+0],%o3
ephy60:
	set	pocour,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	add	%o0,%o1,%o0
	set	pocour+2,%o4
	sth	%o0,[%o4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	ttytyflu
!
	.seg	"data1"   
	.align	4
.ttytyflu:	.word    0
	._ttytyflu = 1
	.seg	"text"
	.align	8
	.global	ttytyflu
ttytyflu:
	set	maxchan,%l1
	ld	[%l1+0],%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	add	%l1,2,%l1
	and 	%l1,%l0,%l1
	set	tabchan,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l1,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l1
	ld	[%l1+0],%o1
	add	%o1,20,%o1
	ld	[%o1+0],%l1
	mov   	%l1,%o1
	cmp    	%o1,0
	bne	ttytyfl1
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ttytyfl1:
	dec  	4,%l7
	set	ostream,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	set	maxchan,%l1
	ld	[%l1+0],%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	add	%l1,2,%l1
	and 	%l1,%l0,%l1
	dec  	4,%l7
	call	outchani
	st   	%o7,[%l7+0]
	.align	4
	set	flulin,%l3
	dec	8,%l3
	ba,a	ttytyoi0
	.align	4

!
!	FENTRY	ttytybac
!
	.seg	"data1"   
	.align	4
.ttytybac:	.word    0
	._ttytybac = 2
	.seg	"text"
	.align	8
	.global	ttytybac
ttytybac:
	set	rubstrg,%l1
	ld	[%l1+0],%l1
	set	3,%l2
	ba,a	ttytystr
	.align	4

!
!	FENTRY	ttytynew
!
	.seg	"data1"   
	.align	4
.ttytynew:	.word    0
	._ttytynew = 1
	.seg	"text"
	.align	8
	.global	ttytynew
ttytynew:
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
!	FENTRY	ttytycn
!
	.seg	"data1"   
	.align	4
.ttytycn:	.word    0
	._ttytycn = 2
	.seg	"text"
	.align	8
	.global	ttytycn
ttytycn:
	set	bufch,%l2
	ld	[%l2+0],%l2
	ld	[%l2+0],%o1
	stb  	%l1,[%o1+8]
	set	1,%o0
	ld	[%l2+0],%o1
	inc  	8,%o1
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
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	ttytystr
!
	.seg	"data1"   
	.align	4
.ttytystr:	.word    0
	._ttytystr = 3
	.seg	"text"
	.align	8
	.global	ttytystr
ttytystr:
	cmp    	%l1,%i1
	blt  	tystrers
	nop
	cmp    	%l1,%i2
	bge  	tystrers
	nop
	cmp    	%l2,%g3
	bge	tystrern
	nop
	ld	[%l1+0],%o0
	ld	[%o0+4],%l3
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	ttytyst0
	nop
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	sll	%l3,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	blt	ttytyst1
	nop
ttytyst0:
	mov   	%l3,%l2
ttytyst1:
	mov   	%l2,%o0
	ld	[%l1+0],%o1
	inc  	8,%o1
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
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
tystrers:
	set	182*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnsa
	.align	4
tystrern:
	mov   	%l2,%l1
	set	182*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnia
	.align	4

!
!	FENTRY	ttytycur
!
	.seg	"data1"   
	.align	4
.ttytycur:	.word    0
	._ttytycur = 3
	.seg	"text"
	.align	8
	.global	ttytycur
ttytycur:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	ttytycls
!
	.seg	"data1"   
	.align	4
.ttytycls:	.word    0
	._ttytycls = 1
	.seg	"text"
	.align	8
	.global	ttytycls
ttytycls:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	ttytyrds
!
	.seg	"data1"   
	.align	4
.ttytyrds:	.word    0
	._ttytyrds = 5
	.seg	"text"
	.align	8
	.global	ttytyrds
ttytyrds:
	ba,a	rdpscrn
	.align	4

!
!	FENTRY	bol
!
	.seg	"data1"   
	.align	4
.bol:	.word    0
	._bol = 1
	.seg	"text"
	.align	8
	.global	bol
bol:
	dec  	4,%l7
	call	inphyl
	st   	%o7,[%l7+0]
	.align	4
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	finmax
!
	.seg	"data1"   
	.align	4
.finmax:	.word    0
	._finmax = 5
	.seg	"text"
	.align	8
	.global	finmax
finmax:
	dec  	4,%l7
	st   	%g0,[%l7+0]
	set	ligne,%o0
	ld	[%o0+0],%o0
	ld	[%o0+0],%o0
	ld	[%o0+4],%l2
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	202*32,%l2
	add    	%i2,%l2,%l2
	set	inmax,%l3
	ld	[%l3+0],%l3
	dec  	4,%l7
	call	getsetn
	st   	%o7,[%l7+0]
	.align	4
	set	inmax,%o4
	st   	%l1,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	finpos
!
	.seg	"data1"   
	.align	4
.finpos:	.word    0
	._finpos = 5
	.seg	"text"
	.align	8
	.global	finpos
finpos:
	dec  	4,%l7
	st   	%g0,[%l7+0]
	set	ligne,%o0
	ld	[%o0+0],%o0
	ld	[%o0+0],%o0
	ld	[%o0+4],%l2
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	203*32,%l2
	add    	%i2,%l2,%l2
	set	polig,%l3
	ld	[%l3+0],%l3
	dec  	4,%l7
	call	getsetn
	st   	%o7,[%l7+0]
	.align	4
	set	polig,%o4
	st   	%l1,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	finbuf
!
	.seg	"data1"   
	.align	4
.finbuf:	.word    0
	._finbuf = 5
	.seg	"text"
	.align	8
	.global	finbuf
finbuf:
	mov   	%l4,%o1
	cmp    	%o1,0
	bne	inbu1
	nop
	set	ligne,%l1
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
inbu1:
	set	204*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	inbu2
	nop
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	inbu5
	nop
	set	2,%l1
	set	204*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4
inbu2:
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%g3
	blt	inbu3
	nop
	ba,a	errnia
	.align	4
inbu3:
	set	ligne,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l1,%o1,%o1
	ldub	[%o1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
inbu5:
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%g3
	blt	inbu6
	nop
	ba,a	errnia
	.align	4
inbu6:
	set	ligne,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l1,%o1,%o1
	stb  	%l2,[%o1+0]
	mov   	%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
inphy:
	set	polig,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	set	inmax,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bge	inph2
	nop
	set	ligne,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	set	polig,%o0
	ld	[%o0+0],%o0
	add  	%o0,%o1,%o1
	ldub	[%o1+0],%l4
	set	polig,%o0
	ld	[%o0+0],%o0
	inc	1,%o0
	set	polig+2,%o4
	sth	%o0,[%o4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
inph2:
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	phy61
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
phy61:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	set	201*32,%l1
	add    	%i2,%l1,%l1
	mov   	%i2,%l2
	dec  	4,%l7
	call	itsoft
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	set	polig,%o4
	st   	%g0,[%o4+0]
	ba,a	inphy
	.align	4
inphyl:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%g0,[%l7+0]
	dec  	4,%l7
	st   	%g0,[%l7+0]
inphyl0:
	set	istream,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%g3
	blt	inchf
	nop
inphy1:
	set	curprmpt,%l1
	ld	[%l1+0],%l1
	ld	[%l1+0],%o0
	ld	[%o0+4],%l2
	dec  	4,%l7
	call	tystrg
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g0,%l4
	set	209*32,%l3
	add    	%i2,%l3,%l3
	ld	[%l3+0],%o0
	cmp    	%o0,%i2
	bne	inphln
	nop
	set	208*32,%l3
	add    	%i2,%l3,%l3
	ld	[%l3+0],%l3
	cmp    	%l3,%i2
	beq	inphp3
	nop
inphy3:
	dec  	4,%l7
	call	tyi
	st   	%o7,[%l7+0]
	.align	4
	st   	%l1,[%l7+4]
	mov   	%l1,%o1
	cmp    	%o1,8
	beq	inphy6
	nop
	mov   	%l1,%o1
	cmp    	%o1,127
	beq	inphy6
	nop
	mov   	%l1,%o1
	cmp    	%o1,24
	beq	inphy8
	nop
	mov   	%l1,%o1
	cmp    	%o1,21
	beq	inphy8
	nop
	mov   	%l1,%o1
	cmp    	%o1,13
	beq	inphy9
	nop
	mov   	%l1,%o1
	cmp    	%o1,10
	beq	inphy9
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,32
	blt	inphy5
	nop
	dec  	4,%l7
	call	tycn
	st   	%o7,[%l7+0]
	.align	4
inphy4:
	ld	[%l7+4],%l1
	ld	[%l7+0],%l4
	set	ligne,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l4,%o1,%o1
	stb  	%l1,[%o1+0]
	inc	1,%l4
	st   	%l4,[%l7+0]
	set	ligne,%o0
	ld	[%o0+0],%o0
	ld	[%o0+0],%o0
	ld	[%o0+4],%l1
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	sll	%l1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	blt	inphy3
	nop
	ba,a	inphyd
	.align	4
inphy5:
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	add	%l1,64,%l1
	and 	%l1,%l0,%l1
	set	cntrlc,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	stb  	%l1,[%o1+9]
	set	cntrlc,%l1
	ld	[%l1+0],%l1
	set	2,%l2
	dec  	4,%l7
	call	tystrg
	st   	%o7,[%l7+0]
	.align	4
	ba,a	inphy4
	.align	4
inphy6:
	ld	[%l7+0],%l4
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	inphy3
	nop
	dec	1,%l4
	st   	%l4,[%l7+0]
	dec  	4,%l7
	call	inphy60
	st   	%o7,[%l7+0]
	.align	4
	ba,a	inphy3
	.align	4
inphy60:
	set	ligne,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l4,%o1,%o1
	ldub	[%o1+0],%l1
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,32
	bge	inphy61
	nop
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	add	%l1,64,%l1
	and 	%l1,%l0,%l1
	dec  	4,%l7
	call	tyback
	st   	%o7,[%l7+0]
	.align	4
	set	94,%l1
inphy61:
	ba,a	tyback
	.align	4
inphy8:
	ld	[%l7+0],%l4
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	inphy3
	nop
	ba,a	inphy81
	.align	4
inphy80:
	st   	%l4,[%l7+0]
	dec  	4,%l7
	call	inphy60
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
inphy81:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	inphy80
	nop
	st   	%g0,[%l7+0]
	ba,a	inphy3
	.align	4
inphy9:
	dec  	4,%l7
	call	tynewln
	st   	%o7,[%l7+0]
	.align	4
inphyc:
	ld	[%l7+0],%l4
	set	ligne,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l4,%o1,%o1
	set	13,%o0
	stb  	%o0,[%o1+0]
	inc	1,%l4
	set	ligne,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l4,%o1,%o1
	set	10,%o0
	stb  	%o0,[%o1+0]
	inc	1,%l4
inphyd:
	set	inmax,%o4
	st   	%l4,[%o4+0]
	inc  	4*2,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
inphp2:
	ld	[%l7+0],%l4
	set	ligne,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l4,%o1,%o1
	stb  	%l1,[%o1+0]
	inc	1,%l4
	st   	%l4,[%l7+0]
inphp3:
	dec  	4,%l7
	call	tyi
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%o1
	cmp    	%o1,10
	beq	inphyc
	nop
	mov   	%l1,%o1
	cmp    	%o1,13
	bne	inphp2
	nop
	ba,a	inphyc
	.align	4
inphln:
	set	ligne,%l1
	ld	[%l1+0],%l1
	dec  	4,%l7
	call	tyinstrg
	st   	%o7,[%l7+0]
	.align	4
	st   	%l1,[%l7+0]
	ba,a	inphyc
	.align	4
inchf:
	set	curinch,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,12,%o1
	ld	[%o1+0],%l3
	mov   	%l3,%o1
	cmp    	%o1,1
	beq	inchf00
	nop
	mov   	%l3,%o1
	cmp    	%o1,3
	bne	inchf0
	nop
	set	ll_ncars,%o2
	set	istream,%o0
	ld	[%o0+0],%o0
	set	ligne,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
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
	call 	inbfb,3
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
	mov   	%o0,%l3
	set	ll_ncars,%l4
	ld	[%l4+0],%l4
	st   	%l4,[%l7+0]
	sll	%l3,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	inchf1
	nop
	mov   	%l3,%o1
	cmp    	%o1,1
	beq	inchf3
	nop
	ba,a	inphyd
	.align	4
inchf00:
	set	istream,%o0
	ld	[%o0+0],%o0
	set	ligne,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	set	ll_ncars,%o2
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
	call 	inbf,3
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
	mov   	%o0,%l3
	set	ll_ncars,%l4
	ld	[%l4+0],%l4
	st   	%l4,[%l7+0]
	sll	%l3,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	inchf1
	nop
	mov   	%l3,%o1
	cmp   	%o1,0
	beq	inphyc
	nop
	mov   	%l3,%o1
	cmp   	%o1,1
	beq	inchf3
	nop
	ba,a	inphyd
	.align	4
inchf0:
	mov   	%i2,%l1
	dec  	4,%l7
	call	inchani
	st   	%o7,[%l7+0]
	.align	4
	set	0xFFFC,%l1
	set	217*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errios
	.align	4
inchf1:
	mov   	%i2,%l1
	dec  	4,%l7
	call	inchani
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l3,%l1
	set	217*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errios
	.align	4
inchf3:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	set	205*32,%l1
	add    	%i2,%l1,%l1
	set	istream,%l2
	ld	[%l2+0],%l2
	cmp    	%i2,%g4
	bne    	phy62
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
phy62:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
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
	ba,a	inphyl0
	.align	4

!
!	FENTRY	lleof
!
	.seg	"data1"   
	.align	4
.lleof:	.word    0
	._lleof = 2
	.seg	"text"
	.align	8
	.global	lleof
lleof:
	cmp    	%l1,%i2
	beq	lleof1
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	mov   	%l1,%o0
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
	call 	fclos,1
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
	mov   	%o0,%l2
	mov   	%i2,%l2
	set	tabchan,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l1,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	st   	%l2,[%o1+0]
	mov   	%i2,%l1
	dec  	4,%l7
	call	inchani
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
lleof1:
	set	232*32,%l2
	add    	%i2,%l2,%l2
	ld	[%l2+0],%o0
	cmp    	%o0,%i2
	beq	lleof2
	nop
	ba,a	erlec11
	.align	4
lleof2:
	set	205*32,%l2
	add    	%i2,%l2,%l2
	ba,a	findtag
	.align	4

!
!	FENTRY	prompt
!
	.seg	"data1"   
	.align	4
.prompt:	.word    0
	._prompt = 5
	.seg	"text"
	.align	8
	.global	prompt
prompt:
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	prompt2
	nop
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	prompt1
	nop
	set	2,%l1
	set	206*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4
prompt1:
	ld	[%l7+0],%l1
	inc  	4,%l7
	set	206*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	set	curprmpt,%o4
	st   	%l1,[%o4+0]
prompt2:
	set	curprmpt,%l1
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
prompter:
	set	206*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnaa
	.align	4

!
!	FENTRY	coercns
!
	.seg	"data1"   
	.align	4
.coercns:	.word    0
	._coercns = 2
	.seg	"text"
	.align	8
	.global	coercns
coercns:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
coerci:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	228*32,%l1
	add    	%i2,%l1,%l1
	set	1,%l4
	ba,a	ffuncall
	.align	4
chanalloc:
	set	maxchan,%l2
	ld	[%l2+0],%l2
	ba,a	chanal4
	.align	4
chanal3:
	set	tabchan,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l2,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l3
	cmp    	%l3,%i2
	beq	chanal9
	nop
chanal4:
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	deccc  	1,%l2
	and 	%l2,%l0,%l2
	bge  	chanal3
	nop
	set	0xFFFE,%l2
chanal9:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
inchini:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	set	7,%l1
	mov   	%i2,%l2
	dec  	4,%l7
	call	makevect
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	lgbuffer,%l1
	ld	[%l1+0],%l1
	mov   	%g0,%l2
	dec  	4,%l7
	call	makestrg
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l2+0],%o1
	add	%o1,16,%o1
	st   	%l1,[%o1+0]
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l2+0],%o1
	add	%o1,12,%o1
	st   	%l3,[%o1+0]
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l2+0],%o1
	add	%o1,8,%o1
	st   	%l1,[%o1+0]
	ld	[%l2+0],%o1
	add	%o1,20,%o1
	st   	%g0,[%o1+0]
	ld	[%l2+0],%o1
	add	%o1,24,%o1
	st   	%g0,[%o1+0]
	mov   	%i2,%l1
	ld	[%l2+0],%o1
	add	%o1,28,%o1
	st   	%l1,[%o1+0]
	ld	[%l2+0],%o1
	add	%o1,32,%o1
	st   	%l1,[%o1+0]
	ld	[%l7+0],%l1
	inc  	4,%l7
	set	tabchan,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l1,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	st   	%l2,[%o1+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
outchini:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	set	7,%l1
	mov   	%i2,%l2
	dec  	4,%l7
	call	makevect
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	lgbuffer,%l1
	ld	[%l1+0],%l1
	set	32,%l2
	dec  	4,%l7
	call	makestrg
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l2+0],%o1
	add	%o1,16,%o1
	st   	%l1,[%o1+0]
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l2+0],%o1
	add	%o1,12,%o1
	st   	%l3,[%o1+0]
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l2+0],%o1
	add	%o1,8,%o1
	st   	%l3,[%o1+0]
	ld	[%l2+0],%o1
	add	%o1,20,%o1
	st   	%g0,[%o1+0]
	ld	[%l2+0],%o1
	add	%o1,24,%o1
	set	nbleft,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%o1+0]
	ld	[%l2+0],%o1
	add	%o1,28,%o1
	set	nbrig,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%o1+0]
	ld	[%l2+0],%o1
	add	%o1,32,%o1
	set	maxpocou,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%o1+0]
	ld	[%l7+0],%l1
	inc  	4,%l7
	set	tabchan,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l1,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	st   	%l2,[%o1+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
openr1:
	mov   	%l2,%l1
openr2:
	set	savea4,%l2
	ld	[%l2+0],%l2
	ba,a	errios
	.align	4

!
!	FENTRY	openi
!
	.seg	"data1"   
	.align	4
.openi:	.word    0
	._openi = 2
	.seg	"text"
	.align	8
	.global	openi
openi:
	dec  	4,%l7
	call	coerci
	st   	%o7,[%l7+0]
	.align	4
	set	210*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	chanalloc
	st   	%o7,[%l7+0]
	.align	4
	set	0xFFFE,%o1
	cmp   	%l2,%o1
	beq	openr1
	nop
	mov   	%l2,%o0
	ld	[%l1+0],%o1
	inc  	8,%o1
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
	call 	infile,2
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
	mov   	%o0,%l3
	mov   	%l3,%o1
	cmp    	%o1,0
	bne	openr2
	nop
	set	1,%l3
	ba,a	inchini
	.align	4

!
!	FENTRY	openo
!
	.seg	"data1"   
	.align	4
.openo:	.word    0
	._openo = 2
	.seg	"text"
	.align	8
	.global	openo
openo:
	dec  	4,%l7
	call	coerci
	st   	%o7,[%l7+0]
	.align	4
	set	211*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	chanalloc
	st   	%o7,[%l7+0]
	.align	4
	set	0xFFFE,%o1
	cmp   	%l2,%o1
	beq	openr1
	nop
	mov   	%l2,%o0
	ld	[%l1+0],%o1
	inc  	8,%o1
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
	call 	oufile,2
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
	mov   	%o0,%l4
	mov   	%l4,%o1
	cmp    	%o1,0
	bne	openr2
	nop
	set	2,%l3
	ba,a	outchini
	.align	4

!
!	FENTRY	opena
!
	.seg	"data1"   
	.align	4
.opena:	.word    0
	._opena = 2
	.seg	"text"
	.align	8
	.global	opena
opena:
	dec  	4,%l7
	call	coerci
	st   	%o7,[%l7+0]
	.align	4
	set	212*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	chanalloc
	st   	%o7,[%l7+0]
	.align	4
	set	0xFFFE,%o1
	cmp   	%l2,%o1
	beq	openr1
	nop
	mov   	%l2,%o0
	ld	[%l1+0],%o1
	inc  	8,%o1
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
	call 	apfile,2
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
	mov   	%o0,%l4
	mov   	%l4,%o1
	cmp    	%o1,0
	bne	openr2
	nop
	set	2,%l3
	ba,a	outchini
	.align	4

!
!	FENTRY	openib
!
	.seg	"data1"   
	.align	4
.openib:	.word    0
	._openib = 2
	.seg	"text"
	.align	8
	.global	openib
openib:
	dec  	4,%l7
	call	coerci
	st   	%o7,[%l7+0]
	.align	4
	set	213*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	chanalloc
	st   	%o7,[%l7+0]
	.align	4
	set	0xFFFE,%o1
	cmp   	%l2,%o1
	beq	openr1
	nop
	mov   	%l2,%o0
	ld	[%l1+0],%o1
	inc  	8,%o1
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
	call 	infile,2
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
	mov   	%o0,%l3
	mov   	%l3,%o1
	cmp    	%o1,0
	bne	openr2
	nop
	set	3,%l3
	ba,a	inchini
	.align	4

!
!	FENTRY	openob
!
	.seg	"data1"   
	.align	4
.openob:	.word    0
	._openob = 2
	.seg	"text"
	.align	8
	.global	openob
openob:
	dec  	4,%l7
	call	coerci
	st   	%o7,[%l7+0]
	.align	4
	set	214*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	chanalloc
	st   	%o7,[%l7+0]
	.align	4
	set	0xFFFE,%o1
	cmp   	%l2,%o1
	beq	openr1
	nop
	mov   	%l2,%o0
	ld	[%l1+0],%o1
	inc  	8,%o1
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
	call 	oufile,2
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
	mov   	%o0,%l3
	mov   	%l3,%o1
	cmp    	%o1,0
	bne	openr2
	nop
	set	4,%l3
	ba,a	outchini
	.align	4

!
!	FENTRY	openab
!
	.seg	"data1"   
	.align	4
.openab:	.word    0
	._openab = 2
	.seg	"text"
	.align	8
	.global	openab
openab:
	dec  	4,%l7
	call	coerci
	st   	%o7,[%l7+0]
	.align	4
	set	215*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	chanalloc
	st   	%o7,[%l7+0]
	.align	4
	set	0xFFFE,%o1
	cmp   	%l2,%o1
	beq	openr1
	nop
	mov   	%l2,%o0
	ld	[%l1+0],%o1
	inc  	8,%o1
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
	call 	apfile,2
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
	mov   	%o0,%l3
	mov   	%l3,%o1
	cmp    	%o1,0
	bne	openr2
	nop
	set	4,%l3
	ba,a	outchini
	.align	4

!
!	FENTRY	input
!
	.seg	"data1"   
	.align	4
.input:	.word    0
	._input = 2
	.seg	"text"
	.align	8
input:
	set	istream,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	beq	inputi
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	istream,%l1
	ld	[%l1+0],%l1
	dec  	4,%l7
	call	closeint
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
inputi:
	cmp    	%l1,%i2
	beq	input2
	nop
	dec  	4,%l7
	call	openi
	st   	%o7,[%l7+0]
	.align	4
input2:
	dec  	4,%l7
	call	inchani
	st   	%o7,[%l7+0]
	.align	4
	ba,a	phytrue
	.align	4

!
!	FENTRY	output
!
	.seg	"data1"   
	.align	4
.output:	.word    0
	._output = 2
	.seg	"text"
	.align	8
	.global	output
output:
	set	ostream,%o0
	ld	[%o0+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	set	maxchan,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bge	ouput1
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	ostream,%l1
	ld	[%l1+0],%l1
	dec  	4,%l7
	call	closeint
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
ouput1:
	cmp    	%l1,%i2
	beq	ouput2
	nop
	add    	%i2,3*32,%o1
	cmp	%l1,%o1
	bne	ouput3
	nop
	set	maxchan,%l1
	ld	[%l1+0],%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	add	%l1,2,%l1
	and 	%l1,%l0,%l1
	ba,a	ouput4
	.align	4
ouput2:
	set	maxchan,%l1
	ld	[%l1+0],%l1
	ba,a	ouput4
	.align	4
ouput3:
	dec  	4,%l7
	call	openo
	st   	%o7,[%l7+0]
	.align	4
ouput4:
	dec  	4,%l7
	call	outchani
	st   	%o7,[%l7+0]
	.align	4
	ba,a	phytrue
	.align	4

!
!	FENTRY	inchan
!
	.seg	"data1"   
	.align	4
.inchan:	.word    0
	._inchan = 5
	.seg	"text"
	.align	8
	.global	inchan
inchan:
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	inchget
	nop
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	inchset
	nop
	set	1,%l1
	set	217*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4
inchget:
	set	istream,%l1
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
inchset:
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%g3
	blt	inchst2
	nop
	cmp    	%l1,%i2
	beq	inchst3
	nop
incherr1:
	set	0xFFFD,%l1
incherr2:
	set	217*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errios
	.align	4
inchst2:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	incherr1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	set	maxchan,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bge	incherr1
	nop
	set	tabchan,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l1,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l2
	cmp    	%l2,%i2
	beq	incherr3
	nop
	ld	[%l2+0],%o1
	add	%o1,12,%o1
	ld	[%o1+0],%l2
	mov   	%l2,%o1
	cmp    	%o1,1
	beq	inchani
	nop
	mov   	%l2,%o1
	cmp    	%o1,3
	bne	incherr3
	nop
inchst3:
	ba,a	inchani
	.align	4
incherr3:
	set	0xFFFC,%l1
	ba,a	incherr2
	.align	4
inchani:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	inclose
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
inopen:
	set	istream,%o4
	st   	%l1,[%o4+0]
	cmp    	%l1,%i2
	bne	inchani3
	nop
	set	maxchan,%l2
	ld	[%l2+0],%l2
	inc	1,%l2
	ba,a	inchani4
	.align	4
inchani3:
	mov   	%l1,%l2
inchani4:
	set	tabchan,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l2,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l2
	ld	[%l2+0],%o1
	add	%o1,16,%o1
	ld	[%o1+0],%o0
	set	ligne,%o4
	st   	%o0,[%o4+0]
	ld	[%l2+0],%o1
	add	%o1,20,%o1
	ld	[%o1+0],%o0
	set	polig,%o4
	st   	%o0,[%o4+0]
	ld	[%l2+0],%o1
	add	%o1,24,%o1
	ld	[%o1+0],%o0
	set	inmax,%o4
	st   	%o0,[%o4+0]
	ld	[%l2+0],%o1
	add	%o1,28,%o1
	ld	[%o1+0],%o0
	set	curread,%o4
	st   	%o0,[%o4+0]
	ld	[%l2+0],%o1
	add	%o1,32,%o1
	ld	[%o1+0],%o0
	set	ringur,%o4
	st   	%o0,[%o4+0]
	set	curinch,%o4
	st   	%l2,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
inclose:
	set	istream,%l2
	ld	[%l2+0],%l2
	cmp    	%l2,%i2
	bne	inchani1
	nop
	set	maxchan,%l2
	ld	[%l2+0],%l2
	inc	1,%l2
inchani1:
	set	tabchan,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l2,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l2
	cmp    	%l2,%i2
	beq	inchani2
	nop
	ld	[%l2+0],%o1
	add	%o1,16,%o1
	set	ligne,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%o1+0]
	ld	[%l2+0],%o1
	add	%o1,20,%o1
	set	polig,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%o1+0]
	ld	[%l2+0],%o1
	add	%o1,24,%o1
	set	inmax,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%o1+0]
	ld	[%l2+0],%o1
	add	%o1,28,%o1
	set	curread,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%o1+0]
	ld	[%l2+0],%o1
	add	%o1,32,%o1
	set	ringur,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%o1+0]
inchani2:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	outchan
!
	.seg	"data1"   
	.align	4
.outchan:	.word    0
	._outchan = 5
	.seg	"text"
	.align	8
	.global	outchan
outchan:
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	ouchget
	nop
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	ouchset
	nop
	set	1,%l1
	set	218*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4
ouchget:
	set	ostream,%l1
	ld	[%l1+0],%l1
	set	maxchan,%l2
	ld	[%l2+0],%l2
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	blt	ouchget2
	nop
	cmp   	%l1,%l2
	beq	ouchget1
	nop
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ouchget1:
	mov   	%i2,%l1
ouchget2:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ouchset:
	ld	[%l7+0],%l1
	cmp    	%l1,%g3
	blt	ouchst2
	nop
	cmp    	%l1,%i2
	beq	ouchst1
	nop
	add    	%i2,3*32,%o1
	cmp	%l1,%o1
	bne	oucherr1
	nop
	set	maxchan,%l1
	ld	[%l1+0],%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	add	%l1,2,%l1
	and 	%l1,%l0,%l1
	ba,a	ouchst3
	.align	4
ouchst1:
	set	maxchan,%l1
	ld	[%l1+0],%l1
	ba,a	ouchst3
	.align	4
ouchst2:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	oucherr1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	set	maxchan,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bge	oucherr1
	nop
	set	tabchan,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l1,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l2
	cmp    	%l2,%i2
	beq	oucherr3
	nop
	ld	[%l2+0],%o1
	add	%o1,12,%o1
	ld	[%o1+0],%l2
	mov   	%l2,%o1
	cmp    	%o1,4
	beq	ouchst3
	nop
	mov   	%l2,%o1
	cmp    	%o1,2
	bne	oucherr3
	nop
ouchst3:
	dec  	4,%l7
	call	outchani
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
oucherr3:
	set	0xFFFC,%l1
	ba,a	oucherr2
	.align	4
oucherr1:
	set	0xFFFD,%l1
oucherr2:
	set	218*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errios
	.align	4
outchani:
	dec  	4,%l7
	call	outclose
	st   	%o7,[%l7+0]
	.align	4
outopen:
	set	ostream,%o4
	st   	%l1,[%o4+0]
outchai3:
	mov   	%l1,%l2
outchai4:
	set	tabchan,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l2,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l2
	ld	[%l2+0],%o1
	add	%o1,16,%o1
	ld	[%o1+0],%o0
	set	bufout,%o4
	st   	%o0,[%o4+0]
	ld	[%l2+0],%o1
	add	%o1,20,%o1
	ld	[%o1+0],%o0
	set	pocour,%o4
	st   	%o0,[%o4+0]
	ld	[%l2+0],%o1
	add	%o1,24,%o1
	ld	[%o1+0],%o0
	set	nbleft,%o4
	st   	%o0,[%o4+0]
	ld	[%l2+0],%o1
	add	%o1,28,%o1
	ld	[%o1+0],%o0
	set	nbrig,%o4
	st   	%o0,[%o4+0]
	ld	[%l2+0],%o1
	add	%o1,32,%o1
	ld	[%o1+0],%o0
	set	maxpocou,%o4
	st   	%o0,[%o4+0]
	set	curoutch,%o4
	st   	%l2,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
outclose:
	set	ostream,%l2
	ld	[%l2+0],%l2
outchai1:
	set	tabchan,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l2,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l2
	cmp    	%l2,%i2
	beq	outchai2
	nop
	ld	[%l2+0],%o1
	add	%o1,16,%o1
	set	bufout,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%o1+0]
	ld	[%l2+0],%o1
	add	%o1,20,%o1
	set	pocour,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%o1+0]
	ld	[%l2+0],%o1
	add	%o1,24,%o1
	set	nbleft,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%o1+0]
	ld	[%l2+0],%o1
	add	%o1,28,%o1
	set	nbrig,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%o1+0]
	ld	[%l2+0],%o1
	add	%o1,32,%o1
	set	maxpocou,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%o1+0]
outchai2:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	fchannel
!
	.seg	"data1"   
	.align	4
.fchannel:	.word    0
	._fchannel = 5
	.seg	"text"
	.align	8
	.global	fchannel
fchannel:
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	fchan5
	nop
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	fchan1
	nop
	set	1,%l1
	set	219*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errwna
	.align	4
fchan1:
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%g3
	blt	fchan2
	nop
	add    	%i2,3*32,%o1
	cmp	%l1,%o1
	beq	fchan8
	nop
	set	219*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnia
	.align	4
fchan2:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	fchan4
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	set	maxchan,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bge	fchan4
	nop
fchan21:
	set	tabchan,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l1,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l1
	cmp    	%l1,%i2
	beq	fchan3
	nop
	ld	[%l1+0],%o1
	add	%o1,8,%o1
	ld	[%o1+0],%l2
	cmp    	%i2,%g4
	bne    	phy63
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
phy63:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
	ld	[%l1+0],%o1
	add	%o1,12,%o1
	ld	[%o1+0],%l1
	cmp    	%i2,%g4
	bne    	phy64
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
phy64:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%l2,[%l1+4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
fchan3:
	mov   	%i2,%l2
	cmp    	%i2,%g4
	bne    	phy65
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
phy65:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
	mov   	%g0,%l1
	cmp    	%i2,%g4
	bne    	phy66
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
phy66:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%l2,[%l1+4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
fchan4:
	set	0xFFFD,%l1
	set	219*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errios
	.align	4
fchan5:
	mov   	%i2,%l3
	set	maxchan,%l4
	ld	[%l4+0],%l4
	ba,a	fchan7
	.align	4
fchan6:
	mov   	%l4,%l1
	dec  	4,%l7
	call	fchan21
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%i2,%g4
	bne    	phy67
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
phy67:
	st   	%l1,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l3,[%o2+4]
	mov   	%o2,%l3
fchan7:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	fchan6
	nop
	set	maxchan,%l4
	ld	[%l4+0],%l4
	mov   	%l3,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
fchan8:
	set	tabchan,%l1
	ld	[%l1+0],%l1
	ba,a	copy
	.align	4

!
!	FENTRY	lclose
!
	.seg	"data1"   
	.align	4
.lclose:	.word    0
	._lclose = 5
	.seg	"text"
	.align	8
	.global	lclose
lclose:
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	lclose8
	nop
	mov   	%l4,%o1
	cmp    	%o1,0
	bne	closer1
	nop
	mov   	%i2,%l4
	set	maxchan,%l1
	ld	[%l1+0],%l1
	set	tabchan,%l2
	ld	[%l2+0],%l2
	dec	1,%l1
lclose1:
	ld	[%l2+0],%o1
	inc  	8,%o1
	mov   	%l1,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l3
	cmp    	%l3,%i2
	beq	lclose2
	nop
	ld	[%l2+0],%o1
	inc  	8,%o1
	mov   	%l1,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	st   	%l4,[%o1+0]
	mov   	%l1,%o0
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
	call 	fclos,1
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
	mov   	%o0,%l3
	mov   	%l3,%o1
	cmp    	%o1,0
	bne	closer0
	nop
lclose2:
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	deccc  	1,%l1
	and 	%l1,%l0,%l1
	bge  	lclose1
	nop
	set	maxchan,%l1
	ld	[%l1+0],%l1
	dec  	4,%l7
	call	outchani
	st   	%o7,[%l7+0]
	.align	4
	ba,a	phytrue
	.align	4
lclose8:
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%g3
	bge	closer4
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	closer2
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	set	maxchan,%o1
	ld	[%o1+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bge	closer2
	nop
	set	tabchan,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l1,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l2
	cmp    	%l2,%i2
	bne	closeint
	nop
closer0:
	set	0xFFFC,%l1
	ba,a	closer3
	.align	4
closer1:
	set	221*32,%l2
	add    	%i2,%l2,%l2
	set	1,%l1
	ba,a	errwna
	.align	4
closer2:
	set	0xFFFD,%l1
closer3:
	set	221*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errios
	.align	4
closer4:
	set	221*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnia
	.align	4
closeint:
	mov   	%i2,%l2
	set	tabchan,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l1,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	st   	%l2,[%o1+0]
	mov   	%l1,%o0
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
	call 	fclos,1
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
	mov   	%o0,%l2
	mov   	%l2,%o1
	cmp    	%o1,0
	beq	phytrue
	nop
	set	221*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errios
	.align	4

!
!	FENTRY	deletfi
!
	.seg	"data1"   
	.align	4
.deletfi:	.word    0
	._deletfi = 2
	.seg	"text"
	.align	8
	.global	deletfi
deletfi:
	dec  	4,%l7
	call	coerci
	st   	%o7,[%l7+0]
	.align	4
	set	222*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l1+0],%o0
	inc  	8,%o0
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
	call 	fdele,1
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
	mov   	%o0,%l1
	mov   	%l1,%o1
	cmp    	%o1,0
	beq	phytrue
	nop
	set	222*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errios
	.align	4

!
!	FENTRY	renamfi
!
	.seg	"data1"   
	.align	4
.renamfi:	.word    0
	._renamfi = 3
	.seg	"text"
	.align	8
	.global	renamfi
renamfi:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	call	coerci
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	dec  	4,%l7
	call	coerci
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l2
	ld	[%l7+0],%l1
	inc  	4,%l7
	set	223*32,%o3
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
	inc  	8,%o0
	ld	[%l2+0],%o1
	inc  	8,%o1
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
	call 	frena,2
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
	mov   	%o0,%l1
	mov   	%l1,%o1
	cmp    	%o1,0
	beq	phytrue
	nop
	set	223*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errios
	.align	4

!
!	FENTRY	copyfi
!
	.seg	"data1"   
	.align	4
.copyfi:	.word    0
	._copyfi = 3
	.seg	"text"
	.align	8
	.global	copyfi
copyfi:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	call	coerci
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	dec  	4,%l7
	call	coerci
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l2
	ld	[%l7+0],%l1
	inc  	4,%l7
	set	224*32,%o3
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
	inc  	8,%o0
	ld	[%l2+0],%o1
	inc  	8,%o1
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
	call 	fcopy,2
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
	mov   	%o0,%l1
	mov   	%l1,%o1
	cmp    	%o1,0
	beq	phytrue
	nop
	set	224*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errios
	.align	4

!
!	FENTRY	makdir
!
	.seg	"data1"   
	.align	4
.makdir:	.word    0
	._makdir = 2
	.seg	"text"
	.align	8
	.global	makdir
makdir:
	dec  	4,%l7
	call	coerci
	st   	%o7,[%l7+0]
	.align	4
	set	229*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l1+0],%o0
	inc  	8,%o0
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
	call 	llmkdir,1
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
	mov   	%o0,%l1
	mov   	%l1,%o1
	cmp    	%o1,0
	beq	phytrue
	nop
	set	229*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errios
	.align	4

!
!	FENTRY	remdir
!
	.seg	"data1"   
	.align	4
.remdir:	.word    0
	._remdir = 2
	.seg	"text"
	.align	8
	.global	remdir
remdir:
	dec  	4,%l7
	call	coerci
	st   	%o7,[%l7+0]
	.align	4
	set	230*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l1+0],%o0
	inc  	8,%o0
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
	call 	llrmdir,1
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
	mov   	%o0,%l1
	mov   	%l1,%o1
	cmp    	%o1,0
	beq	phytrue
	nop
	set	230*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errios
	.align	4

!
!	FENTRY	probefi
!
	.seg	"data1"   
	.align	4
.probefi:	.word    0
	._probefi = 2
	.seg	"text"
	.align	8
	.global	probefi
probefi:
	dec  	4,%l7
	call	coerci
	st   	%o7,[%l7+0]
	.align	4
	set	225*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l1+0],%o0
	inc  	8,%o0
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
	call 	fprobe,1
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
	mov   	%o0,%l1
	mov   	%l1,%o1
	cmp    	%o1,0
	beq	phytrue
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	savecor
!
	.seg	"data1"   
	.align	4
.savecor:	.word    0
	._savecor = 2
	.seg	"text"
	.align	8
	.global	savecor
savecor:
	dec  	4,%l7
	call	coerci
	st   	%o7,[%l7+0]
	.align	4
	set	226*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	add    	%i2,3*32,%o0
	st   	%o0,[%l7+0]
	ld	[%l1+0],%o0
	inc  	8,%o0
	.global	ll_corsav
	dec  	4,%l7
	call	ll_corsav
	st   	%o7,[%l7+0]
	.align	4
	mov   	%o0,%l1
	mov   	%l1,%o1
	cmp    	%o1,0
	beq	corres
	nop
	set	226*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errios
	.align	4
corres:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	restcor
!
	.seg	"data1"   
	.align	4
.restcor:	.word    0
	._restcor = 2
	.seg	"text"
	.align	8
	.global	restcor
restcor:
	dec  	4,%l7
	call	coerci
	st   	%o7,[%l7+0]
	.align	4
	set	227*32,%o3
	add    	%i2,%o3,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
restcori:
	ld	[%l1+0],%o0
	inc  	8,%o0
	.global	ll_corest
	dec  	4,%l7
	call	ll_corest
	st   	%o7,[%l7+0]
	.align	4
	mov   	%o0,%l1
	mov   	%l1,%o1
	cmp    	%o1,0
	beq	restres
	nop
	set	227*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errios
	.align	4
restres:
	ld	[%l7+0],%l1
	inc  	4,%l7
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
	.seg	"data1"
	.align	4
istream:
	.word 	0
ostream:
	.word 	0
tabchan:
	.word 	0
curinch:
	.word 	0
curoutch:
	.word 	0
lgbuffer:
	.word 	0
cntrlc:
	.word 	0
bufch:
	.word 	0
rubstrg:
	.word 	0
curprmpt:
	.word 	0
ligne:
	.word 	0
polig:
	.word 	0
inmax:
	.word 	0
! end
