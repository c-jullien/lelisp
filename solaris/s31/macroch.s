!
!	File macroch.s expansion for sparc arch=v8plus.
!	This file is part of Le-Lisp kernel.
!	Generated on Sat Oct   7 17 21:25:19 
!
	.file	"macroch.s"
	.align	8 
	.global	mstack
	.global	bvar
	.global	errnia
	.global	errudf
	.global	errudv
	.global	errwna
	.global	erroob
	.global	errsxt
	.global	errsym
	.global	gccons
	.global	gcfloat
	.global	gcnumb
	.global	inisymb
	.global	inicst
	.global	trysympk
	.global	readi
	.global	getch
	.global	asciii
	.global	lread
	.global	tabch
	.global	ibase
	.global	cpkgc
	.global	rereada4
	.global	getcv
	.global	read2
	.global	rdpkgc2
	.global	readdltd
	.global	base10p
	.global	savea4
	.global	ffuncall
	.global	evala1
	.global	sysprot
	.global	llde
	.global	getfns
	.global	setfn
	.global	getprop
	.global	nreverse
	.global	lllength
	.global	list
	.global	kwote
	.global	stringa1
	.global	makevect
	.global	ini_mach
	.global	tabctyp
	.global	tabccod
	.seg	"data1"
	.align	4
tabctyp:
	.word 	0
tabccod:
	.word 	0
	.seg	"text"
ini_mach:
	.seg	"data1"   
	.align	4
pmac1:
	.asciz	"dmc"
	.seg	"text"
bmac1:
	set	3,%l1
	set	pmac1,%l2
	set	dmc,%l3
	dec	8,%l3
	set	trash,%l4
	set	._dmc,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac2:
	.asciz	"dms"
	.seg	"text"
bmac2:
	set	3,%l1
	set	pmac2,%l2
	set	dms,%l3
	dec	8,%l3
	set	trash,%l4
	set	._dms,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac3:
	.asciz	"defsharp"
	.seg	"text"
bmac3:
	set	8,%l1
	set	pmac3,%l2
	set	defsharp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._defsharp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac4:
	.asciz	"#"
	.seg	"text"
bmac4:
	set	1,%l1
	set	pmac4,%l2
	set	llsharp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llsharp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac5:
	.asciz	"sharp"
	.seg	"text"
bmac5:
	set 	5,%l1
	set	pmac5,%l2
	set	260*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac6:
	.asciz	":"
	.seg	"text"
bmac6:
	set	1,%l1
	set	pmac6,%l2
	set	llcolon,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llcolon,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac7:
	.asciz	"user"
	.seg	"text"
bmac7:
	set 	4,%l1
	set	pmac7,%l2
	set	262*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac8:
	.asciz	"^"
	.seg	"text"
bmac8:
	set	1,%l1
	set	pmac8,%l2
	set	llhat,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llhat,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac9:
	.asciz	"["
	.seg	"text"
bmac9:
	set	1,%l1
	set	pmac9,%l2
	set	lllbra,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lllbra,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac10:
	.asciz	"]"
	.seg	"text"
bmac10:
	set	1,%l1
	set	pmac10,%l2
	set	llrbra,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llrbra,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac11:
	.asciz	"'"
	.seg	"text"
bmac11:
	set	1,%l1
	set	pmac11,%l2
	set	llquote,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llquote,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac12:
	.asciz	"`"
	.seg	"text"
bmac12:
	set	1,%l1
	set	pmac12,%l2
	set	llbquote,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llbquote,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac13:
	.asciz	","
	.seg	"text"
bmac13:
	set	1,%l1
	set	pmac13,%l2
	set	llcomma,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llcomma,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac14:
	.asciz	",@"
	.seg	"text"
bmac14:
	set 	2,%l1
	set	pmac14,%l2
	set	269*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac15:
	.asciz	",."
	.seg	"text"
bmac15:
	set 	2,%l1
	set	pmac15,%l2
	set	270*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,4*32,%o3
	set	cpkgc,%o4
	st   	%o3,[%o4+0]
	.seg	"data1"   
	.align	4
pmac16:
	.asciz	"sharp"
	.seg	"text"
bmac16:
	set 	5,%l1
	set	pmac16,%l2
	set	271*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	set	260*32,%o3
	add    	%i2,%o3,%o3
	st   	%o3,[%l1+0]
	.seg	"data1"   
	.align	4
pmac17:
	.asciz	"colon"
	.seg	"text"
bmac17:
	set 	5,%l1
	set	pmac17,%l2
	set	272*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	set	262*32,%o3
	add    	%i2,%o3,%o3
	st   	%o3,[%l1+0]
	set	260*32,%o3
	add    	%i2,%o3,%o3
	set	cpkgc,%o4
	st   	%o3,[%o4+0]
	.seg	"data1"   
	.align	4
pmac18:
	.asciz	"."
	.seg	"text"
bmac18:
	set	1,%l1
	set	pmac18,%l2
	set	shrpdot,%l3
	dec	8,%l3
	set	trash,%l4
	set	._shrpdot,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac19:
	.asciz	"+"
	.seg	"text"
bmac19:
	set	1,%l1
	set	pmac19,%l2
	set	shrpplu,%l3
	dec	8,%l3
	set	trash,%l4
	set	._shrpplu,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac20:
	.asciz	"-"
	.seg	"text"
bmac20:
	set	1,%l1
	set	pmac20,%l2
	set	shrpmoi,%l3
	dec	8,%l3
	set	trash,%l4
	set	._shrpmoi,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac21:
	.asciz	"'"
	.seg	"text"
bmac21:
	set	1,%l1
	set	pmac21,%l2
	set	shrpquo,%l3
	dec	8,%l3
	set	trash,%l4
	set	._shrpquo,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac22:
	.byte 	47
	.seg	"text"
bmac22:
	set	1,%l1
	set	pmac22,%l2
	set	shrpsla,%l3
	dec	8,%l3
	set	trash,%l4
	set	._shrpsla,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac23:
	.byte 	92
	.seg	"text"
bmac23:
	set	1,%l1
	set	pmac23,%l2
	set	shrpbak,%l3
	dec	8,%l3
	set	trash,%l4
	set	._shrpbak,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac24:
	.asciz	"^"
	.seg	"text"
bmac24:
	set	1,%l1
	set	pmac24,%l2
	set	shrphat,%l3
	dec	8,%l3
	set	trash,%l4
	set	._shrphat,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac25:
	.asciz	":"
	.seg	"text"
bmac25:
	set	1,%l1
	set	pmac25,%l2
	set	shrpcol,%l3
	dec	8,%l3
	set	trash,%l4
	set	._shrpcol,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac26:
	.asciz	"$"
	.seg	"text"
bmac26:
	set	1,%l1
	set	pmac26,%l2
	set	shrpdol,%l3
	dec	8,%l3
	set	trash,%l4
	set	._shrpdol,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac27:
	.asciz	"%"
	.seg	"text"
bmac27:
	set	1,%l1
	set	pmac27,%l2
	set	shrpprc,%l3
	dec	8,%l3
	set	trash,%l4
	set	._shrpprc,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac28:
	.byte 	34
	.seg	"text"
bmac28:
	set	1,%l1
	set	pmac28,%l2
	set	shrpgui,%l3
	dec	8,%l3
	set	trash,%l4
	set	._shrpgui,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac29:
	.asciz	"|"
	.seg	"text"
bmac29:
	set	1,%l1
	set	pmac29,%l2
	set	shrpbar,%l3
	dec	8,%l3
	set	trash,%l4
	set	._shrpbar,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac30:
	.asciz	"("
	.seg	"text"
bmac30:
	set	1,%l1
	set	pmac30,%l2
	set	shrppar,%l3
	dec	8,%l3
	set	trash,%l4
	set	._shrppar,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac31:
	.asciz	"["
	.seg	"text"
bmac31:
	set	1,%l1
	set	pmac31,%l2
	set	shrpbra,%l3
	dec	8,%l3
	set	trash,%l4
	set	._shrpbra,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac32:
	.asciz	"r"
	.seg	"text"
bmac32:
	set	1,%l1
	set	pmac32,%l2
	set	shrprad,%l3
	dec	8,%l3
	set	trash,%l4
	set	._shrprad,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac33:
	.asciz	"value"
	.seg	"text"
bmac33:
	set 	5,%l1
	set	pmac33,%l2
	set	288*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac34:
	.asciz	"lowbyte"
	.seg	"text"
bmac34:
	set 	7,%l1
	set	pmac34,%l2
	set	289*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	set	cpkgc,%o4
	st   	%i2,[%o4+0]
	.seg	"data1"   
	.align	4
pmac35:
	.asciz	"typech"
	.seg	"text"
bmac35:
	set	6,%l1
	set	pmac35,%l2
	set	typech,%l3
	dec	8,%l3
	set	trash,%l4
	set	._typech,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac36:
	.asciz	"typecn"
	.seg	"text"
bmac36:
	set	6,%l1
	set	pmac36,%l2
	set	typecod,%l3
	dec	8,%l3
	set	trash,%l4
	set	._typecod,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac37:
	.asciz	"cnull"
	.seg	"text"
bmac37:
	set 	5,%l1
	set	pmac37,%l2
	set	292*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac38:
	.asciz	"cbcom"
	.seg	"text"
bmac38:
	set 	5,%l1
	set	pmac38,%l2
	set	293*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac39:
	.asciz	"cecom"
	.seg	"text"
bmac39:
	set 	5,%l1
	set	pmac39,%l2
	set	294*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac40:
	.asciz	"cquote"
	.seg	"text"
bmac40:
	set 	6,%l1
	set	pmac40,%l2
	set	295*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac41:
	.asciz	"clpar"
	.seg	"text"
bmac41:
	set 	5,%l1
	set	pmac41,%l2
	set	296*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac42:
	.asciz	"crpar"
	.seg	"text"
bmac42:
	set 	5,%l1
	set	pmac42,%l2
	set	297*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac43:
	.asciz	"cdot"
	.seg	"text"
bmac43:
	set 	4,%l1
	set	pmac43,%l2
	set	298*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac44:
	.asciz	"csep"
	.seg	"text"
bmac44:
	set 	4,%l1
	set	pmac44,%l2
	set	299*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac45:
	.asciz	"cpkgc"
	.seg	"text"
bmac45:
	set 	5,%l1
	set	pmac45,%l2
	set	300*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac46:
	.asciz	"csplice"
	.seg	"text"
bmac46:
	set 	7,%l1
	set	pmac46,%l2
	set	301*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac47:
	.asciz	"cmacro"
	.seg	"text"
bmac47:
	set 	6,%l1
	set	pmac47,%l2
	set	302*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac48:
	.asciz	"cstring"
	.seg	"text"
bmac48:
	set 	7,%l1
	set	pmac48,%l2
	set	303*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac49:
	.asciz	"cpname"
	.seg	"text"
bmac49:
	set 	6,%l1
	set	pmac49,%l2
	set	304*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac50:
	.asciz	"csymb"
	.seg	"text"
bmac50:
	set 	5,%l1
	set	pmac50,%l2
	set	305*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pmac51:
	.asciz	"cmsymb"
	.seg	"text"
bmac51:
	set 	6,%l1
	set	pmac51,%l2
	set	306*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	set	15,%l1
	mov   	%i2,%l2
	dec  	4,%l7
	call	makevect
	st   	%o7,[%l7+0]
	.align	4
	set	tabctyp,%o4
	st   	%l1,[%o4+0]
	ld	[%l1+0],%o1
	add	%o1,8,%o1
	set	292*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,12,%o1
	set	293*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,16,%o1
	set	294*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,20,%o1
	set	295*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,24,%o1
	set	296*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,28,%o1
	set	297*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,32,%o1
	set	298*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,36,%o1
	set	299*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,40,%o1
	set	300*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,44,%o1
	set	301*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,48,%o1
	set	302*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,52,%o1
	set	303*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,56,%o1
	set	304*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,60,%o1
	set	305*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,64,%o1
	set	306*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%o1+0]
	set	15,%l1
	mov   	%i2,%l2
	dec  	4,%l7
	call	makevect
	st   	%o7,[%l7+0]
	.align	4
	set	tabccod,%o4
	st   	%l1,[%o4+0]
	ld	[%l1+0],%o1
	add	%o1,8,%o1
	set	0,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,12,%o1
	set	1,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,16,%o1
	set	2,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,20,%o1
	set	3,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,24,%o1
	set	4,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,28,%o1
	set	5,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,32,%o1
	set	6,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,36,%o1
	set	7,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,40,%o1
	set	8,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,44,%o1
	set	9,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,48,%o1
	set	10,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,52,%o1
	set	11,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,56,%o1
	set	12,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,60,%o1
	set	13,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,64,%o1
	set	14,%o0
	st   	%o0,[%o1+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	dmc
!
	.seg	"data1"   
	.align	4
.dmc:	.word    0
	._dmc = 6
	.seg	"text"
	.align	8
	.global	dmc
dmc:
	dec  	4,%l7
	call	llde
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	dmcret,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	10,%o0
	st   	%o0,[%l7+0]
	set	2,%l4
	ba,a	typech
	.align	4
dmcret:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	dms
!
	.seg	"data1"   
	.align	4
.dms:	.word    0
	._dms = 6
	.seg	"text"
	.align	8
	.global	dms
dms:
	dec  	4,%l7
	call	llde
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	dmcret,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	9,%o0
	st   	%o0,[%l7+0]
	set	2,%l4
	ba,a	typech
	.align	4

!
!	FENTRY	defsharp
!
	.seg	"data1"   
	.align	4
.defsharp:	.word    0
	._defsharp = 6
	.seg	"text"
	.align	8
	.global	defsharp
defsharp:
	ld	[%l1+0],%l2
	cmp    	%l2,%i2
	blt  	defshrer
	nop
	cmp    	%l2,%i3
	bge  	defshrer
	nop
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	set	271*32,%l1
	add    	%i2,%l1,%l1
	ld	[%l1+0],%l1
	dec  	4,%l7
	call	trysympk
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,75*32,%l2
	ld	[%l7+0],%l3
	inc  	4,%l7
	dec  	4,%l7
	call	setfn
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
defshrer:
	mov   	%l2,%l1
	set	258*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4

!
!	FENTRY	llquote
!
	.seg	"data1"   
	.align	4
.llquote:	.word    0
	._llquote = 1
	.seg	"text"
	.align	8
	.global	llquote
llquote:
	dec  	4,%l7
	call	readi
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%i2,%g4
	bne    	mac52
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac52:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	cmp    	%i2,%g4
	bne    	mac53
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac53:
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
!	FENTRY	llcomma
!
	.seg	"data1"   
	.align	4
.llcomma:	.word    0
	._llcomma = 1
	.seg	"text"
	.align	8
	.global	llcomma
llcomma:
	set	12,%l1
	set	268*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsxt
	.align	4
commain:
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l4,%o1
	cmp    	%o1,64
	beq	commain1
	nop
	mov   	%l4,%o1
	cmp    	%o1,46
	beq	commain2
	nop
	dec  	4,%l7
	call	rereada4
	st   	%o7,[%l7+0]
	.align	4
	set	268*32,%l1
	add    	%i2,%l1,%l1
commain0:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	readi
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	mac54
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac54:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
commain1:
	set	269*32,%l1
	add    	%i2,%l1,%l1
	ba,a	commain0
	.align	4
commain2:
	set	270*32,%l1
	add    	%i2,%l1,%l1
	ba,a	commain0
	.align	4

!
!	FENTRY	llbquote
!
	.seg	"data1"   
	.align	4
.llbquote:	.word    0
	._llbquote = 1
	.seg	"text"
	.align	8
	.global	llbquote
llbquote:
	set	268*32,%l1
	add    	%i2,%l1,%l1
	dec  	4,%l7
	ld	[%l1+8],%o0
	st   	%o0,[%l7+0]
	lduh	[%l1+24],%l2
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	llbquot1,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	set	268*32,%l1
	add    	%i2,%l1,%l1
	ld	[%l7+4],%o0
	sth   	%o0,[%l1+24]
	ld	[%l7+8],%o3
	st   	%o3,[%l1+8]
	ld	[%l7+0],%l1
	inc  	4*3,%l7
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
llbquot1:
	set	commain,%o3
	dec	8,%o3
	st   	%o3,[%l1+8]
	set	1,%o0
	sth   	%o0,[%l1+24]
	dec  	4,%l7
	call	readi
	st   	%o7,[%l7+0]
	.align	4
	ba,a	backquot
	.align	4
backcste:
	cmp    	%l1,%i2
	beq	backcst9
	nop
	cmp    	%l1,%i3
	blt	backcst8
	nop
	ld	[%l1+0],%l4
	set	434*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l4,%o1
	bne	backcst8
	nop
	ld	[%l1+4],%l4
	ld	[%l4+4],%o0
	cmp    	%o0,%i2
	beq	backcst9
	nop
backcst8:
	mov   	%i2,%l4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
backcst9:
	add    	%i2,3*32,%l4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
backquot:
	cmp    	%l1,%i2
	bne	backquo0
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
backquo0:
	cmp    	%l1,%i3
	bge	backquo1
	nop
	ba,a	kwote
	.align	4
backquo1:
	ld	[%l1+0],%l2
	set	268*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l2,%o1
	bne	backquo2
	nop
	ld	[%l1+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
backquo2:
	set	269*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l2,%o1
	beq	backquor
	nop
	set	270*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l2,%o1
	beq	backquor
	nop
	cmp    	%l2,%i3
	blt	backquo3
	nop
	ld	[%l2+0],%o0
	set	269*32,%o1
	add    	%i2,%o1,%o1
	cmp	%o0,%o1
	beq	backquo4
	nop
	ld	[%l2+0],%o0
	set	270*32,%o1
	add    	%i2,%o1,%o1
	cmp	%o0,%o1
	beq	backquo5
	nop
backquo3:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	ld	[%l1+4],%l1
	dec  	4,%l7
	call	backquot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	dec  	4,%l7
	call	backquot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l2,%i2
	bne	backqu32
	nop
	dec  	4,%l7
	call	backcste
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l4,%i2
	beq	backqu31
	nop
	ld	[%l1+4],%l1
	ld	[%l1+0],%l1
	cmp    	%i2,%g4
	bne    	mac55
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac55:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	ba,a	kwote
	.align	4
backqu31:
	cmp    	%i2,%g4
	bne    	mac56
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac56:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	cmp    	%i2,%g4
	bne    	mac57
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac57:
	set	530*32,%o0
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
backqu32:
	dec  	4,%l7
	call	backcste
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l4,%i2
	beq	backqu34
	nop
	mov   	%l1,%l3
	mov   	%l2,%l1
	dec  	4,%l7
	call	backcste
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l4,%i2
	beq	backqu33
	nop
	ld	[%l1+4],%l1
	ld	[%l1+0],%l1
	ld	[%l3+4],%l3
	cmp    	%i2,%g4
	bne    	mac58
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac58:
	ld	[%l3+0],%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ba,a	kwote
	.align	4
backqu33:
	mov   	%l3,%l1
backqu34:
	cmp    	%l2,%i3
	blt	backqu36
	nop
	ld	[%l2+0],%l3
	set	528*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l3,%o1
	bne	backqu35
	nop
	dec  	4,%l7
	set	531*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	ld	[%l2+4],%l2
	dec  	4,%l7
	ld	[%l2+0],%o0
	st   	%o0,[%l7+0]
	ld	[%l2+4],%l2
	dec  	4,%l7
	ld	[%l2+0],%o0
	st   	%o0,[%l7+0]
	set	4,%l4
	ba,a	list
	.align	4
backqu35:
	set	530*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l3,%o1
	beq	backqu37
	nop
	set	532*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l3,%o1
	beq	backqu38
	nop
	set	531*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l3,%o1
	beq	backqu38
	nop
backqu36:
	cmp    	%i2,%g4
	bne    	mac59
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac59:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
	set	528*32,%l3
	add    	%i2,%l3,%l3
	ba,a	backquo7
	.align	4
backqu37:
	set	532*32,%l3
	add    	%i2,%l3,%l3
backqu38:
	ld	[%l2+4],%l2
	ba,a	backquo7
	.align	4
backquo4:
	ld	[%l1+0],%l2
	dec  	4,%l7
	ld	[%l2+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+4],%l1
	dec  	4,%l7
	call	backquot
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	bne	backqu41
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
backqu41:
	cmp    	%l1,%i3
	blt	backqu42
	nop
	ld	[%l1+0],%o0
	set	537*32,%o1
	add    	%i2,%o1,%o1
	cmp	%o0,%o1
	bne	backqu42
	nop
	ld	[%l1+4],%l1
	ba,a	backqu43
	.align	4
backqu42:
	cmp    	%i2,%g4
	bne    	mac60
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac60:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
backqu43:
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	mac61
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac61:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	cmp    	%i2,%g4
	bne    	mac62
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac62:
	set	537*32,%o0
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
backquo5:
	ld	[%l1+4],%o0
	cmp    	%o0,%i2
	bne	backqu51
	nop
	ld	[%l1+0],%l1
	ld	[%l1+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
backqu51:
	dec  	4,%l7
	ld	[%l1+0],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+4],%l1
	dec  	4,%l7
	call	backquot
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%i2,%g4
	bne    	mac63
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac63:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	mac64
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac64:
	ld	[%l2+4],%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	cmp    	%i2,%g4
	bne    	mac65
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac65:
	set	569*32,%o0
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
backquo7:
	cmp    	%i2,%g4
	bne    	mac66
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac66:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%l2,[%l1+4]
	cmp    	%i2,%g4
	bne    	mac67
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac67:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
backquor:
	set	12,%l1
	set	267*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsxt
	.align	4

!
!	FENTRY	llsharp
!
	.seg	"data1"   
	.align	4
.llsharp:	.word    0
	._llsharp = 1
	.seg	"text"
	.align	8
	.global	llsharp
llsharp:
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	base10p
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	rdsh4
	nop
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	sub	%l4,48,%l4
	and 	%l4,%l0,%l4
	dec  	4,%l7
	st   	%l4,[%l7+0]
	ba,a	rdsh3
	.align	4
rdsh2:
	ld	[%l7+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	set	10,%o0
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
	and 	%o0,%l0,%o0
	st   	%o0,[%l7+0]
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	sub	%l4,48,%l4
	and 	%l4,%l0,%l4
	ld	[%l7+0],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll	%l4,16,%o1
	sra	%o1,16,%o1
	add	%o0,%o1,%o0
	and 	%o0,%l0,%o0
	st   	%o0,[%l7+0]
rdsh3:
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	base10p
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	bne	rdsh2
	nop
	dec  	4,%l7
	set	1,%o0
	st   	%o0,[%l7+0]
	ba,a	rdsh5
	.align	4
rdsh4:
	dec  	4,%l7
	st   	%g0,[%l7+0]
rdsh5:
	dec  	4,%l7
	call	asciii
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l2
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	271*32,%l1
	add    	%i2,%l1,%l1
	ld	[%l1+0],%l1
	mov   	%i2,%l3
	dec  	4,%l7
	call	getfns
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	rdshr
	nop
	inc  	4*1,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	ba,a	ffuncall
	.align	4
rdshr:
	ld	[%l7+0],%l1
	inc  	4,%l7
	set	259*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errudf
	.align	4

!
!	FENTRY	shrpdot
!
	.seg	"data1"   
	.align	4
.shrpdot:	.word    0
	._shrpdot = 1
	.seg	"text"
	.align	8
	.global	shrpdot
shrpdot:
	dec  	4,%l7
	call	readi
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	evala1
	st   	%o7,[%l7+0]
	.align	4
shrpdot1:
	cmp    	%i2,%g4
	bne    	mac68
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac68:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	shrpplu
!
	.seg	"data1"   
	.align	4
.shrpplu:	.word    0
	._shrpplu = 1
	.seg	"text"
	.align	8
	.global	shrpplu
shrpplu:
	dec  	4,%l7
	call	readi
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	evala1
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	beq	shrpplu1
	nop
shrpplu0:
	dec  	4,%l7
	set	shrpdot1,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	readi
	.align	4
shrpplu1:
	dec  	4,%l7
	call	readi
	st   	%o7,[%l7+0]
	.align	4
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	shrpmoi
!
	.seg	"data1"   
	.align	4
.shrpmoi:	.word    0
	._shrpmoi = 1
	.seg	"text"
	.align	8
	.global	shrpmoi
shrpmoi:
	dec  	4,%l7
	call	readi
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	evala1
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i2
	bne	shrpplu1
	nop
	ba,a	shrpplu0
	.align	4

!
!	FENTRY	shrpquo
!
	.seg	"data1"   
	.align	4
.shrpquo:	.word    0
	._shrpquo = 1
	.seg	"text"
	.align	8
	.global	shrpquo
shrpquo:
	dec  	4,%l7
	call	readi
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%i2,%g4
	bne    	mac69
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac69:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	cmp    	%i2,%g4
	bne    	mac70
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac70:
	set	355*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ba,a	shrpdot1
	.align	4

!
!	FENTRY	shrpsla
!
	.seg	"data1"   
	.align	4
.shrpsla:	.word    0
	._shrpsla = 1
	.seg	"text"
	.align	8
	.global	shrpsla
shrpsla:
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l4,%l1
	ba,a	lowbyte
	.align	4

!
!	FENTRY	shrpbak
!
	.seg	"data1"   
	.align	4
.shrpbak:	.word    0
	._shrpbak = 1
	.seg	"text"
	.align	8
	.global	shrpbak
shrpbak:
	set	231*32,%l2
	add    	%i2,%l2,%l2
	dec  	4,%l7
	ld	[%l2+0],%o0
	st   	%o0,[%l7+0]
	st   	%i2,[%l2+0]
	dec  	4,%l7
	call	readi
	st   	%o7,[%l7+0]
	.align	4
	set	231*32,%l2
	add    	%i2,%l2,%l2
	ld	[%l7+0],%o0
	st   	%o0,[%l2+0]
	inc  	4,%l7
	set	288*32,%l2
	add    	%i2,%l2,%l2
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	getprop
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%l1,%i2
	bne	lowbyte
	nop
shrpbak1:
	mov   	%l2,%l1
	set	288*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errudv
	.align	4

!
!	FENTRY	shrphat
!
	.seg	"data1"   
	.align	4
.shrphat:	.word    0
	._shrphat = 1
	.seg	"text"
	.align	8
	.global	shrphat
shrphat:
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	and	%l4,31,%l4
	mov   	%l4,%l1
	ba,a	lowbyte
	.align	4

!
!	FENTRY	shrpcol
!
	.seg	"data1"   
	.align	4
.shrpcol:	.word    0
	._shrpcol = 1
	.seg	"text"
	.align	8
	.global	shrpcol
shrpcol:
	set	tabch,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	add	%o1,8+58,%o1
	ldub	[%o1+0],%l2
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	set	cpkgc,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	set	shrpcol1,%l3
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
	set	tabch,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	ld	[%l7+0],%o0
	stb  	%o0,[%o1+66]
	inc  	4*1,%l7
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
shrpcol1:
	set	cpkgc,%o4
	st   	%i2,[%o4+0]
	set	tabch,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	set	8,%o0
	stb  	%o0,[%o1+66]
	dec  	4,%l7
	call	readi
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i3
	blt	shrpcol3
	nop
	dec  	4,%l7
	call	getcv
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l4,%o1
	cmp    	%o1,58
	beq	shrpcol2
	nop
	dec  	4,%l7
	call	rereada4
	st   	%o7,[%l7+0]
	.align	4
	ba,a	shrpcol3
	.align	4
shrpcol2:
	set	cpkgc,%o4
	st   	%l1,[%o4+0]
	dec  	4,%l7
	call	readi
	st   	%o7,[%l7+0]
	.align	4
shrpcol3:
	cmp    	%i2,%g4
	bne    	mac71
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac71:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
shrpcoer:
	set	6,%l1
	set	280*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsxt
	.align	4

!
!	FENTRY	shrpdol
!
	.seg	"data1"   
	.align	4
.shrpdol:	.word    0
	._shrpdol = 1
	.seg	"text"
	.align	8
	.global	shrpdol
shrpdol:
	dec  	4,%l7
	set	281*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%l7+0]
	set	16,%l1
	ba,a	shrprad1
	.align	4

!
!	FENTRY	shrpprc
!
	.seg	"data1"   
	.align	4
.shrpprc:	.word    0
	._shrpprc = 1
	.seg	"text"
	.align	8
	.global	shrpprc
shrpprc:
	dec  	4,%l7
	set	282*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%l7+0]
	set	2,%l1
	ba,a	shrprad1
	.align	4

!
!	FENTRY	shrprad
!
	.seg	"data1"   
	.align	4
.shrprad:	.word    0
	._shrprad = 2
	.seg	"text"
	.align	8
	.global	shrprad
shrprad:
	dec  	4,%l7
	set	287*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%l7+0]
shrprad1:
	dec  	4,%l7
	call	shrprad2
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i3
	blt	shrpradr
	nop
	ld	[%l1+0],%o0
	cmp    	%o0,0
	blt  	shrpradr
	nop
	cmp    	%o0,%i0
	bge  	shrpradr
	nop
	inc  	4*1,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
shrprad2:
	dec  	4,%l7
	set	ibase,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	set	ibase,%o4
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
	set	ibase,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	mac72
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac72:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
shrpradr:
	ld	[%l7+0],%l2
	inc  	4,%l7
	ba,a	errsxt
	.align	4

!
!	FENTRY	shrpgui
!
	.seg	"data1"   
	.align	4
.shrpgui:	.word    0
	._shrpgui = 1
	.seg	"text"
	.align	8
	.global	shrpgui
shrpgui:
	mov   	%i2,%l1
	ba,a	shrpgui2
	.align	4
shrpgui1:
	cmp    	%i2,%g4
	bne    	mac73
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac73:
	st   	%l4,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
shrpgui2:
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l4,%o1
	cmp    	%o1,34
	bne	shrpgui1
	nop
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l4,%o1
	cmp    	%o1,34
	beq	shrpgui1
	nop
	dec  	4,%l7
	call	rereada4
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	nreverse
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%i2,%g4
	bne    	mac74
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac74:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	shrpbar
!
	.seg	"data1"   
	.align	4
.shrpbar:	.word    0
	._shrpbar = 1
	.seg	"text"
	.align	8
	.global	shrpbar
shrpbar:
	dec  	4,%l7
	call	getcv
	st   	%o7,[%l7+0]
	.align	4
shrpbari:
	mov   	%l4,%o1
	cmp    	%o1,35
	beq	shrpbar0
	nop
	mov   	%l4,%o1
	cmp    	%o1,124
	bne	shrpbar
	nop
	dec  	4,%l7
	call	getcv
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l4,%o1
	cmp    	%o1,35
	bne	shrpbari
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
shrpbar0:
	dec  	4,%l7
	call	getcv
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l4,%o1
	cmp    	%o1,124
	bne	shrpbari
	nop
	dec  	4,%l7
	set	shrpbar,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	ba,a	shrpbar
	.align	4

!
!	FENTRY	shrppar
!
	.seg	"data1"   
	.align	4
.shrppar:	.word    0
	._shrppar = 1
	.seg	"text"
	.align	8
	.global	shrppar
shrppar:
	dec  	4,%l7
	call	read2
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%l1,%i3
	blt	shrpprr
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
shrpprr:
	cmp    	%i2,%g4
	bne    	mac75
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
mac75:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	shrpbra
!
	.seg	"data1"   
	.align	4
.shrpbra:	.word    0
	._shrpbra = 1
	.seg	"text"
	.align	8
	.global	shrpbra
shrpbra:
	dec  	4,%l7
	call	shrpbra0
	st   	%o7,[%l7+0]
	.align	4
	set	cpkgc,%o0
	ld	[%o0+0],%o0
	cmp    	%o0,%i2
	beq	shrpbrar
	nop
	set	cpkgc,%o3
	ld	[%o3+0],%o3
	st   	%o3,[%l1+4]
shrpbrar:
	ba,a	shrpdot1
	.align	4
shrpbra0:
	dec  	4,%l7
	set	cpkgc,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	set	shrpbra1,%l3
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
shrpbra1:
	set	cpkgc,%o4
	st   	%i2,[%o4+0]
	set	93,%l1
	dec  	4,%l7
	call	readdltd
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	lllength
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	mov   	%i2,%l2
	dec  	4,%l7
	call	makevect
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	mov   	%g0,%l4
	ba,a	shrpbra3
	.align	4
shrpbra2:
	ld	[%l1+0],%o1
	inc  	8,%o1
	mov   	%l4,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%l2+0],%o0
	st   	%o0,[%o1+0]
	ld	[%l2+4],%l2
	inc	1,%l4
shrpbra3:
	cmp   	%l4,%l3
	bne	shrpbra2
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
lowbyte:
	dec  	4,%l7
	set	shrpdot1,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l4,%o1
	cmp    	%o1,124
	beq	lowbyte0
	nop
	ba,a	rereada4
	.align	4
lowbyte0:
	cmp    	%l1,0
	blt  	lowbyte5
	nop
	cmp    	%l1,%i0
	bge  	lowbyte5
	nop
	mov   	%l1,%o0
	set	8,%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp  	%o1,0
	bge  	Mmac76
	nop
	neg 	%o1,%o1
	ba       Rmac76
	srl  	%o0,%o1,%o0
Mmac76:	sll  	%o0,%o1,%o0
Rmac76:
	and	%o0,%l0,%l1
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l4,%o1
	cmp    	%o1,47
	beq	lowbyte2
	nop
	mov   	%l4,%o1
	cmp    	%o1,94
	beq	lowbyte3
	nop
	mov   	%l4,%o1
	cmp    	%o1,92
	beq	lowbyte4
	nop
	mov   	%l4,%l1
	set	289*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsxt
	.align	4
lowbyte2:
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
lowbytre:
	or	%l1,%l4,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
lowbyte3:
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	and	%l4,31,%l4
	ba,a	lowbytre
	.align	4
lowbyte4:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	call	readi
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	288*32,%l2
	add    	%i2,%l2,%l2
	dec  	4,%l7
	call	getprop
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	cmp    	%l1,%i2
	beq	shrpbak1
	nop
	cmp	%l1,0
	blt  	mac77
	nop
	cmp	%l1,%i0
	blt  	lowbytre
	nop
mac77:
lowbyte5:
	mov   	%l1,%l2
	set	288*32,%l1
	add    	%i2,%l1,%l1
	ba,a	errnia
	.align	4

!
!	FENTRY	llcolon
!
	.seg	"data1"   
	.align	4
.llcolon:	.word    0
	._llcolon = 1
	.seg	"text"
	.align	8
	.global	llcolon
llcolon:
	set	272*32,%l1
	add    	%i2,%l1,%l1
	ld	[%l1+0],%l1
	set	tabch,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	set	8,%o0
	stb  	%o0,[%o1+66]
	set	rdpkgc2,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	set	tabch,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	set	10,%o0
	stb  	%o0,[%o1+66]
	ld	[%l7+0],%l1
	inc  	4,%l7
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4

!
!	FENTRY	llhat
!
	.seg	"data1"   
	.align	4
.llhat:	.word    0
	._llhat = 1
	.seg	"text"
	.align	8
	.global	llhat
llhat:
	dec  	4,%l7
	call	getch
	st   	%o7,[%l7+0]
	.align	4
	and	%l4,31,%l4
	ba,a	asciii
	.align	4

!
!	FENTRY	lllbra
!
	.seg	"data1"   
	.align	4
.lllbra:	.word    0
	._lllbra = 1
	.seg	"text"
	.align	8
	.global	lllbra
lllbra:
	set	264*32,%l1
	add    	%i2,%l1,%l1
lllbra1:
	set	233*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errudf
	.align	4

!
!	FENTRY	llrbra
!
	.seg	"data1"   
	.align	4
.llrbra:	.word    0
	._llrbra = 1
	.seg	"text"
	.align	8
	.global	llrbra
llrbra:
	set	265*32,%l1
	add    	%i2,%l1,%l1
	ba,a	lllbra1
	.align	4

!
!	FENTRY	typech
!
	.seg	"data1"   
	.align	4
.typech:	.word    0
	._typech = 5
	.seg	"text"
	.align	8
	.global	typech
typech:
	set	290*32,%l2
	add    	%i2,%l2,%l2
typech0:
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	typechg1
	nop
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	typechs1
	nop
	set	2,%l1
	ba,a	errwna
	.align	4
typechs1:
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp	%l1,0
	blt  	mac78
	nop
	cmp	%l1,%i0
	blt  	typechs5
	nop
mac78:
	set	14,%l3
typechs2:
	set	tabctyp,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l3,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l4
	cmp	%l1,%l4
	beq	typechs4
	nop
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	deccc  	1,%l3
	and 	%l3,%l0,%l3
	bge  	typechs2
	nop
	ba,a	typechr1
	.align	4
typechs4:
	mov   	%l3,%l1
	ba,a	typechs6
	.align	4
typechs5:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	typechr2
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	set	14,%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bgt	typechr2
	nop
typechs6:
	set	tabccod,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l1,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l1
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	set	290*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l2,%o1
	beq	typechs7
	nop
	cmp    	%l1,0
	blt  	typechr1
	nop
	cmp    	%l1,%i0
	bge  	typechr1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	typechr2
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,256
	bge	typechr2
	nop
	ba,a	typechs8
	.align	4
typechs7:
	set	savea4,%o4
	st   	%l2,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l1+0],%o1
	add	%o1,8+0,%o1
	ldub	[%o1+0],%l1
typechs8:
	ld	[%l7+0],%l2
	inc  	4,%l7
	set	tabch,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l1,%o1,%o1
	stb  	%l2,[%o1+0]
	set	tabctyp,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l2,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
typechg1:
	ld	[%l7+0],%l1
	inc  	4,%l7
	set	290*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l2,%o1
	beq	typechg5
	nop
	cmp    	%l1,0
	blt  	typechr1
	nop
	cmp    	%l1,%i0
	bge  	typechr1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	blt	typechr2
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,256
	bge	typechr2
	nop
	ba,a	typechg7
	.align	4
typechg5:
	set	savea4,%o4
	st   	%l2,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l1+0],%o1
	add	%o1,8+0,%o1
	ldub	[%o1+0],%l1
typechg7:
	set	tabch,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc	8,%o1
	add  	%l1,%o1,%o1
	ldub	[%o1+0],%l1
	set	tabctyp,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l1,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
typechr1:
	ba,a	errnia
	.align	4
typechr2:
	ba,a	erroob
	.align	4

!
!	FENTRY	typecod
!
	.seg	"data1"   
	.align	4
.typecod:	.word    0
	._typecod = 5
	.seg	"text"
	.align	8
	.global	typecod
typecod:
	set	291*32,%l2
	add    	%i2,%l2,%l2
	ba,a	typech0
	.align	4
! end
