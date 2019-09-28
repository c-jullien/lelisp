!
!	File toperr.s expansion for sparc arch=v8plus.
!	This file is part of Le-Lisp kernel.
!	Generated on Sat Oct   7 17 21:25:14 
!
	.file	"toperr.s"
	.align	8 
	.global	llsystem
	.global	bvar
	.global	itsoft
	.global	reenter
	.global	itstate
	.global	bstack
	.global	mstack
	.global	mstack1
	.global	mstack2
	.global	gccons
	.global	gcfloat
	.global	gcnumb
	.global	inisymb
	.global	inicst
	.global	cpkgc
	.global	bufat
	.global	tryatom
	.global	lread
	.global	probj
	.global	probjt
	.global	u_print
	.global	dlink
	.global	findtag
	.global	eval
	.global	evala1
	.global	sysprot
	.global	savea4
	.global	unbind0
	.global	unbind1
	.global	unbind2
	.global	unbind3
	.global	unbind4
	.global	unbind5
	.global	unbind6
	.global	unbind7
	.global	unbind8
	.global	unbind9
	.global	unbind10
	.global	evprogn
	.global	evprognr
	.global	nreverse
	.global	fldiff
	.global	stringa1
	.global	makevect
	.global	loc
	.global	vaga1
	.global	ini_top
	.global	systop
	.global	errfs
	.global	errfn
	.global	errfsgc
	.global	erres
	.global	errff
	.global	errfsp
	.global	errfr
	.global	errfv
	.global	errfh
	.global	err0dv
	.global	errato
	.global	errfm
	.global	errudv
	.global	errudf
	.global	errudm
	.global	errudt
	.global	errbpa
	.global	errbal
	.global	errwna
	.global	errilb
	.global	errnaa
	.global	errnna
	.global	errnia
	.global	errnfa
	.global	errnsa
	.global	errnla
	.global	errvec
	.global	errsym
	.global	errnva
	.global	errnda
	.global	errstc
	.global	errstl
	.global	errbdf
	.global	erroob
	.global	errios
	.global	errsxt
	.global	errgen
	.global	errnab
	.global	errxia
	.global	llbreak
	.global	llpanic
	.global	llmerro
	.global	llmouse
	.global	llclock
	.global	getsetn
	.seg	"text"
ini_top:
	.seg	"data1"   
	.align	4
ptop1:
	.asciz	"subr0"
	.seg	"text"
btop1:
	set 	5,%l1
	set	ptop1,%l2
	add    	%i2,69*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop2:
	.asciz	"subr1"
	.seg	"text"
btop2:
	set 	5,%l1
	set	ptop2,%l2
	add    	%i2,70*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop3:
	.asciz	"subr2"
	.seg	"text"
btop3:
	set 	5,%l1
	set	ptop3,%l2
	add    	%i2,71*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop4:
	.asciz	"subr3"
	.seg	"text"
btop4:
	set 	5,%l1
	set	ptop4,%l2
	add    	%i2,72*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop5:
	.asciz	"nsubr"
	.seg	"text"
btop5:
	set 	5,%l1
	set	ptop5,%l2
	add    	%i2,73*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop6:
	.asciz	"fsubr"
	.seg	"text"
btop6:
	set 	5,%l1
	set	ptop6,%l2
	add    	%i2,74*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop7:
	.asciz	"expr"
	.seg	"text"
btop7:
	set 	4,%l1
	set	ptop7,%l2
	add    	%i2,75*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop8:
	.asciz	"fexpr"
	.seg	"text"
btop8:
	set 	5,%l1
	set	ptop8,%l2
	add    	%i2,76*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop9:
	.asciz	"macro"
	.seg	"text"
btop9:
	set 	5,%l1
	set	ptop9,%l2
	add    	%i2,77*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop10:
	.asciz	"dmacro"
	.seg	"text"
btop10:
	set 	6,%l1
	set	ptop10,%l2
	add    	%i2,78*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop11:
	.asciz	"msubr"
	.seg	"text"
btop11:
	set 	5,%l1
	set	ptop11,%l2
	add    	%i2,79*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop12:
	.asciz	"dmsubr"
	.seg	"text"
btop12:
	set 	6,%l1
	set	ptop12,%l2
	add    	%i2,80*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop13:
	.asciz	"toplevel"
	.seg	"text"
btop13:
	set	8,%l1
	set	ptop13,%l2
	set	toplevel,%l3
	dec	8,%l3
	set	trash,%l4
	set	._toplevel,%o0
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
ptop14:
	.asciz	"toplevel-flag"
	.seg	"text"
btop14:
	set 	13,%l1
	set	ptop14,%l2
	add    	%i2,82*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,3*32,%o3
	st   	%o3,[%l1+0]
	.seg	"data1"   
	.align	4
ptop15:
	.asciz	"print-msgs"
	.seg	"text"
btop15:
	set 	10,%l1
	set	ptop15,%l2
	add    	%i2,83*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	set	1,%o3
	st   	%o3,[%l1+0]
	.seg	"data1"   
	.align	4
ptop16:
	.asciz	"length-float"
	.seg	"text"
btop16:
	set 	12,%l1
	set	ptop16,%l2
	add    	%i2,84*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	set	3,%o3
	st   	%o3,[%l1+0]
	.seg	"data1"   
	.align	4
ptop17:
	.asciz	"error-tag"
	.seg	"text"
btop17:
	set 	9,%l1
	set	ptop17,%l2
	add    	%i2,85*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	set	cpkgc,%o4
	st   	%i2,[%o4+0]
	.seg	"data1"   
	.align	4
ptop18:
	.asciz	"runtime"
	.seg	"text"
btop18:
	set	7,%l1
	set	ptop18,%l2
	set	runt,%l3
	dec	8,%l3
	set	trash,%l4
	set	._runt,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop19:
	.asciz	"sleep"
	.seg	"text"
btop19:
	set	5,%l1
	set	ptop19,%l2
	set	llsleep,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llsleep,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop20:
	.asciz	"date"
	.seg	"text"
btop20:
	set	4,%l1
	set	ptop20,%l2
	set	lldate,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lldate,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop21:
	.asciz	"clockalarm"
	.seg	"text"
btop21:
	set	10,%l1
	set	ptop21,%l2
	set	clkalarm,%l3
	dec	8,%l3
	set	trash,%l4
	set	._clkalarm,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop22:
	.asciz	"with-interrupts"
	.seg	"text"
btop22:
	set	15,%l1
	set	ptop22,%l2
	set	withit,%l3
	dec	8,%l3
	set	trash,%l4
	set	._withit,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop23:
	.asciz	"without-interrupts"
	.seg	"text"
btop23:
	set	18,%l1
	set	ptop23,%l2
	set	withnoit,%l3
	dec	8,%l3
	set	trash,%l4
	set	._withnoit,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop24:
	.asciz	"time"
	.seg	"text"
btop24:
	set	4,%l1
	set	ptop24,%l2
	set	lltime,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lltime,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop25:
	.asciz	"stack-info"
	.seg	"text"
btop25:
	set	10,%l1
	set	ptop25,%l2
	set	llshwstk,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llshwstk,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop26:
	.asciz	"comline"
	.seg	"text"
btop26:
	set	7,%l1
	set	ptop26,%l2
	set	llcline,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llcline,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop27:
	.asciz	"getenv"
	.seg	"text"
btop27:
	set	6,%l1
	set	ptop27,%l2
	set	llgetenv,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llgetenv,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop28:
	.asciz	"getglobal"
	.seg	"text"
btop28:
	set	9,%l1
	set	ptop28,%l2
	set	llgetadr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llgetadr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop29:
	.asciz	"callextern"
	.seg	"text"
btop29:
	set	10,%l1
	set	ptop29,%l2
	set	llcallx,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llcallx,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop30:
	.asciz	"cstack"
	.seg	"text"
btop30:
	set	6,%l1
	set	ptop30,%l2
	set	cstack,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cstack,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop31:
	.asciz	"syserror"
	.seg	"text"
btop31:
	set	8,%l1
	set	ptop31,%l2
	set	syserror,%l3
	dec	8,%l3
	set	trash,%l4
	set	._syserror,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop32:
	.asciz	"error"
	.seg	"text"
btop32:
	set	5,%l1
	set	ptop32,%l2
	set	lerror,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lerror,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop33:
	.asciz	"sysdebug"
	.seg	"text"
btop33:
	set	8,%l1
	set	ptop33,%l2
	set	sysdebug,%l3
	dec	8,%l3
	set	trash,%l4
	set	._sysdebug,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	st   	%i2,[%l1+0]
	.seg	"data1"   
	.align	4
ptop34:
	.asciz	"** "
	.seg	"text"
btop34:
	set 	3,%l1
	set	ptop34,%l2
	add    	%i2,102*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop35:
	.asciz	" : "
	.seg	"text"
btop35:
	set 	3,%l1
	set	ptop35,%l2
	add    	%i2,103*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop36:
	.asciz	"errfstk"
	.seg	"text"
btop36:
	set 	7,%l1
	set	ptop36,%l2
	add    	%i2,104*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop37:
	.asciz	"errfsgc"
	.seg	"text"
btop37:
	set 	7,%l1
	set	ptop37,%l2
	add    	%i2,105*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop38:
	.asciz	"errfsud"
	.seg	"text"
btop38:
	set 	7,%l1
	set	ptop38,%l2
	add    	%i2,106*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop39:
	.asciz	"errfpgc"
	.seg	"text"
btop39:
	set 	7,%l1
	set	ptop39,%l2
	add    	%i2,107*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop40:
	.asciz	"errfsym"
	.seg	"text"
btop40:
	set 	7,%l1
	set	ptop40,%l2
	add    	%i2,108*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop41:
	.asciz	"errfcns"
	.seg	"text"
btop41:
	set 	7,%l1
	set	ptop41,%l2
	add    	%i2,109*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop42:
	.asciz	"errfflt"
	.seg	"text"
btop42:
	set 	7,%l1
	set	ptop42,%l2
	add    	%i2,110*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop43:
	.asciz	"errffix"
	.seg	"text"
btop43:
	set 	7,%l1
	set	ptop43,%l2
	add    	%i2,111*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop44:
	.asciz	"errfhep"
	.seg	"text"
btop44:
	set 	7,%l1
	set	ptop44,%l2
	add    	%i2,112*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop45:
	.asciz	"errfstr"
	.seg	"text"
btop45:
	set 	7,%l1
	set	ptop45,%l2
	add    	%i2,113*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop46:
	.asciz	"errfvec"
	.seg	"text"
btop46:
	set 	7,%l1
	set	ptop46,%l2
	add    	%i2,114*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop47:
	.asciz	"errmac"
	.seg	"text"
btop47:
	set 	6,%l1
	set	ptop47,%l2
	add    	%i2,115*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop48:
	.asciz	"errudv"
	.seg	"text"
btop48:
	set 	6,%l1
	set	ptop48,%l2
	add    	%i2,116*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop49:
	.asciz	"errudf"
	.seg	"text"
btop49:
	set 	6,%l1
	set	ptop49,%l2
	add    	%i2,117*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop50:
	.asciz	"errudm"
	.seg	"text"
btop50:
	set 	6,%l1
	set	ptop50,%l2
	add    	%i2,118*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop51:
	.asciz	"errudt"
	.seg	"text"
btop51:
	set 	6,%l1
	set	ptop51,%l2
	add    	%i2,119*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop52:
	.asciz	"errbdf"
	.seg	"text"
btop52:
	set 	6,%l1
	set	ptop52,%l2
	add    	%i2,120*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop53:
	.asciz	"errwna"
	.seg	"text"
btop53:
	set 	6,%l1
	set	ptop53,%l2
	add    	%i2,121*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop54:
	.asciz	"errbpa"
	.seg	"text"
btop54:
	set 	6,%l1
	set	ptop54,%l2
	add    	%i2,122*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop55:
	.asciz	"errbal"
	.seg	"text"
btop55:
	set 	6,%l1
	set	ptop55,%l2
	add    	%i2,123*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop56:
	.asciz	"errilb"
	.seg	"text"
btop56:
	set 	6,%l1
	set	ptop56,%l2
	add    	%i2,124*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop57:
	.asciz	"errsxt"
	.seg	"text"
btop57:
	set 	6,%l1
	set	ptop57,%l2
	add    	%i2,125*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop58:
	.asciz	"errios"
	.seg	"text"
btop58:
	set 	6,%l1
	set	ptop58,%l2
	add    	%i2,126*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop59:
	.asciz	"err0dv"
	.seg	"text"
btop59:
	set 	6,%l1
	set	ptop59,%l2
	add    	%i2,127*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop60:
	.asciz	"errnna"
	.seg	"text"
btop60:
	set 	6,%l1
	set	ptop60,%l2
	set	128*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop61:
	.asciz	"errnia"
	.seg	"text"
btop61:
	set 	6,%l1
	set	ptop61,%l2
	set	129*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop62:
	.asciz	"errnfa"
	.seg	"text"
btop62:
	set 	6,%l1
	set	ptop62,%l2
	set	130*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop63:
	.asciz	"errnsa"
	.seg	"text"
btop63:
	set 	6,%l1
	set	ptop63,%l2
	set	131*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop64:
	.asciz	"errnaa"
	.seg	"text"
btop64:
	set 	6,%l1
	set	ptop64,%l2
	set	132*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop65:
	.asciz	"errnla"
	.seg	"text"
btop65:
	set 	6,%l1
	set	ptop65,%l2
	set	133*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop66:
	.asciz	"errnva"
	.seg	"text"
btop66:
	set 	6,%l1
	set	ptop66,%l2
	set	134*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop67:
	.asciz	"erroob"
	.seg	"text"
btop67:
	set 	6,%l1
	set	ptop67,%l2
	set	135*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop68:
	.asciz	"errstl"
	.seg	"text"
btop68:
	set 	6,%l1
	set	ptop68,%l2
	set	136*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop69:
	.asciz	"errvec"
	.seg	"text"
btop69:
	set 	6,%l1
	set	ptop69,%l2
	set	137*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop70:
	.asciz	"errnda"
	.seg	"text"
btop70:
	set 	6,%l1
	set	ptop70,%l2
	set	138*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop71:
	.asciz	"errstc"
	.seg	"text"
btop71:
	set 	6,%l1
	set	ptop71,%l2
	set	139*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop72:
	.asciz	"errsym"
	.seg	"text"
btop72:
	set 	6,%l1
	set	ptop72,%l2
	set	140*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop73:
	.asciz	"errgen"
	.seg	"text"
btop73:
	set 	6,%l1
	set	ptop73,%l2
	set	141*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop74:
	.asciz	"errnab"
	.seg	"text"
btop74:
	set 	6,%l1
	set	ptop74,%l2
	set	142*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop75:
	.asciz	"errxia"
	.seg	"text"
btop75:
	set 	6,%l1
	set	ptop75,%l2
	set	143*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop76:
	.asciz	"break"
	.seg	"text"
btop76:
	set 	5,%l1
	set	ptop76,%l2
	set	144*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop77:
	.asciz	"user-interrupt"
	.seg	"text"
btop77:
	set	14,%l1
	set	ptop77,%l2
	set	userit,%l3
	dec	8,%l3
	set	trash,%l4
	set	._userit,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop78:
	.asciz	"mouse"
	.seg	"text"
btop78:
	set	5,%l1
	set	ptop78,%l2
	set	mouse,%l3
	dec	8,%l3
	set	trash,%l4
	set	._mouse,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
ptop79:
	.asciz	"clock"
	.seg	"text"
btop79:
	set	5,%l1
	set	ptop79,%l2
	set	lltclock,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lltclock,%o0
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
systop:
	set	dlink,%o4
	st   	%i2,[%o4+0]
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind0,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
systop2:
	add    	%i2,81*32,%l1
	mov   	%i2,%l2
	dec  	4,%l7
	call	itsoft
	st   	%o7,[%l7+0]
	.align	4
	ba,a	systop2
	.align	4

!
!	FENTRY	toplevel
!
	.seg	"data1"   
	.align	4
.toplevel:	.word    0
	._toplevel = 1
	.seg	"text"
	.align	8
	.global	toplevel
toplevel:
	dec  	4,%l7
	call	lread
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	set	toplevr,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%i2,[%l7+0]
	set	2,%l4
	ba,a	eval
	.align	4
toplevr:
	add    	%i2,82*32,%l2
	ld	[%l2+0],%l2
	cmp    	%l2,%i2
	beq	toplend
	nop
	.seg	"data1"   
	.align	4
stop80:	.asciz	"= "
	.seg	"text"
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	set	stop80,%o1
	set	2,%o0
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
	dec  	4,%l7
	call	u_print
	st   	%o7,[%l7+0]
	.align	4
toplend:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cstack
!
	.seg	"data1"   
	.align	4
.cstack:	.word    0
	._cstack = 1
	.seg	"text"
	.align	8
	.global	cstack
cstack:
	mov   	%i2,%l1
	dec  	4,%l7
	st   	%l1,[%l7+0]
	mov   	%l7,%l2
	set	dlink,%l4
	ld	[%l4+0],%l4
evstck0:
	cmp	%l2,%l4
	beq	evstck1
	nop
	ld	[%l2+0],%l1
	inc  	4,%l2
	set	evprognr,%o1
	dec	8,%o1
	cmp	%l1,%o1
	bne	evstck0
	nop
	ld	[%l2+0],%l1
	inc  	4,%l2
	cmp    	%i2,%g4
	bne    	top81
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top81:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	cmp    	%i2,%g4
	bne    	top82
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top82:
	set	11,%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	cmp    	%i2,%g4
	bne    	top83
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top83:
	st   	%l1,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	ld	[%l7+0],%o0
	st   	%o0,[%o2+4]
	st   	%o2,[%l7+0]
	ba,a	evstck0
	.align	4
evstck1:
	mov   	%i2,%l1
	ld	[%l4+0],%l3
	inc  	4,%l4
	set	unbind0,%o1
	dec	8,%o1
	cmp	%l3,%o1
	beq	evstkf
	nop
	set	unbind1,%o1
	dec	8,%o1
	cmp	%l3,%o1
	beq	evstkl
	nop
	set	unbind2,%o1
	dec	8,%o1
	cmp	%l3,%o1
	beq	evstka
	nop
	set	unbind3,%o1
	dec	8,%o1
	cmp	%l3,%o1
	beq	evstke
	nop
	set	unbind4,%o1
	dec	8,%o1
	cmp	%l3,%o1
	beq	evstks
	nop
	set	unbind5,%o1
	dec	8,%o1
	cmp	%l3,%o1
	beq	evstkb
	nop
	set	unbind6,%o1
	dec	8,%o1
	cmp	%l3,%o1
	beq	evstku
	nop
	set	unbind7,%o1
	dec	8,%o1
	cmp	%l3,%o1
	beq	evstky
	nop
	set	unbind8,%o1
	dec	8,%o1
	cmp	%l3,%o1
	beq	evstkh
	nop
	set	unbind9,%o1
	dec	8,%o1
	cmp	%l3,%o1
	beq	evstkt
	nop
	set	unbind10,%o1
	dec	8,%o1
	cmp	%l3,%o1
	beq	evstkk
	nop
	.seg	"data1"   
	.align	4
stop84:	.asciz	" error EVSTKF "
	.seg	"text"
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	set	stop84,%o1
	set	14,%o0
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
evstkf:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ba,a	nreverse
	.align	4
evstck2:
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	set	savea4,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	nreverse
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	top85
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top85:
	st   	%l1,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	ld	[%l7+0],%o0
	st   	%o0,[%o2+4]
	st   	%o2,[%l7+0]
	ba,a	evstck0
	.align	4
evstkl:
	cmp    	%i2,%g4
	bne    	top86
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top86:
	set	1,%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l4+0],%o0
	set	savea4,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l4
	ld	[%l4+0],%l3
	inc  	4,%l4
	cmp    	%i2,%g4
	bne    	top87
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top87:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l4+0],%l3
	inc  	4,%l4
	cmp    	%i2,%g4
	bne    	top88
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top88:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l4+0],%l3
	inc  	4,%l4
	cmp    	%i2,%g4
	bne    	top89
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top89:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l4+0],%l2
	inc  	4,%l4
	ba,a	evstkl2
	.align	4
evstkl1:
	ld	[%l4+0],%l3
	inc  	4,%l4
	cmp    	%i2,%g4
	bne    	top90
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top90:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
evstkl2:
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	deccc  	1,%l2
	and 	%l2,%l0,%l2
	bge  	evstkl1
	nop
	ba,a	evstck2
	.align	4
evstka:
	cmp    	%i2,%g4
	bne    	top91
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top91:
	set	2,%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l4+0],%l2
	inc  	4,%l4
	ba,a	evstka4
	.align	4
evstka3:
	cmp    	%i2,%g4
	bne    	top92
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top92:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l4+0],%l3
	inc  	4,%l4
	cmp    	%i2,%g4
	bne    	top93
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top93:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l4+0],%l3
	inc  	4,%l4
	cmp    	%i2,%g4
	bne    	top94
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top94:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
evstka4:
	ld	[%l4+0],%l3
	inc  	4,%l4
	mov   	%l3,%o1
	cmp    	%o1,0
	bne	evstka3
	nop
	set	savea4,%o4
	st   	%l2,[%o4+0]
	ba,a	evstck2
	.align	4
evstke:
	set	3,%l2
	ba,a	evstkb1
	.align	4
evstks:
	cmp    	%i2,%g4
	bne    	top95
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top95:
	set	4,%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l4+0],%o0
	set	savea4,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l4
	set	10,%l2
	ba,a	evstkl2
	.align	4
evstkb:
	set	5,%l2
evstkb1:
	cmp    	%i2,%g4
	bne    	top96
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top96:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l4+0],%o0
	set	savea4,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l4
evstkb2:
	set	1,%l2
	ba,a	evstkl2
	.align	4
evstku:
	set	6,%l2
	ba,a	evstkb1
	.align	4
evstky:
	cmp    	%i2,%g4
	bne    	top97
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top97:
	set	7,%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l4+0],%o0
	set	savea4,%o4
	st   	%o0,[%o4+0]
	inc  	4*1,%l4
	ba,a	evstck2
	.align	4
evstkh:
	set	8,%l2
	ba,a	evstkb1
	.align	4
evstkt:
	cmp    	%i2,%g4
	bne    	top98
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top98:
	set	9,%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	ld	[%l4+0],%o0
	set	savea4,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l4
	inc  	4*1,%l4
	ld	[%l4+0],%l2
	inc  	4,%l4
	ba,a	evstkl2
	.align	4
evstkk:
	set	10,%l2
	ba,a	evstkb1
	.align	4

!
!	FENTRY	llcline
!
	.seg	"data1"   
	.align	4
.llcline:	.word    0
	._llcline = 2
	.seg	"text"
	.align	8
	.global	llcline
llcline:
	add    	%i2,94*32,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	set	itstate,%o0
	ld	[%o0+0],%o0
	cmp	%o0,%g0
	beq	llclin2
	nop
	set	llclin1,%l3
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
llclin1:
	set	itstate,%o4
	st   	%g0,[%o4+0]
llclin2:
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
	call 	cline,1
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
	add    	%i2,3*32,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llgetenv
!
	.seg	"data1"   
	.align	4
.llgetenv:	.word    0
	._llgetenv = 2
	.seg	"text"
	.align	8
	.global	llgetenv
llgetenv:
	add    	%i2,95*32,%o3
	set	savea4,%o4
	st   	%o3,[%o4+0]
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l1+0],%o0
	inc  	8,%o0
	set	bufat,%o1
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
	mov   	%o1,%o1
	mov   	%o0,%o0
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	getenvrn,2
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
	mov   	%o0,%l1
	mov   	%l1,%o1
	cmp    	%o1,0
	bne	gtenv8
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
gtenv8:
	set	bufat,%l2
	ld	[%l2+0],%l2
	ba,a	tryatom
	.align	4

!
!	FENTRY	llgetadr
!
	.seg	"data1"   
	.align	4
.llgetadr:	.word    0
	._llgetadr = 2
	.seg	"text"
	.align	8
	.global	llgetadr
llgetadr:
	add    	%i2,96*32,%o3
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
	call 	getgloba,1
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
	mov   	%o0,%l1
	ba,a	loc
	.align	4

!
!	FENTRY	llcallx
!
	.seg	"data1"   
	.align	4
.llcallx:	.word    0
	._llcallx = 5
	.seg	"text"
	.align	8
	.global	llcallx
llcallx:
	dec	1,%l4
	mov   	%l4,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l1
	add    	%i2,97*32,%l2
	dec  	4,%l7
	call	vaga1
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l4,%o1
	sll  	%o1,2,%o1
	add    	%o1,%l7,%o1
	st   	%l1,[%o1+0]
	inc	1,%l4
	dec  	4,%l7
	st   	%l4,[%l7+0]
	.global	ll_callg
	dec  	4,%l7
	call	ll_callg
	st   	%o7,[%l7+0]
	.align	4
	set	callreg0,%o0
	ld	[%o0+0],%o0
	mov   	%o0,%l1
	mov   	%l4,%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll  	%o0,2,%o0
	add    	%l7,%o0,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	runt
!
	.seg	"data1"   
	.align	4
.runt:	.word    0
	._runt = 1
	.seg	"text"
	.align	8
	.global	runt
runt:
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
	call 	runtime,0
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
	fdtos	%f0,%f2
	st   	%f2,[%l5+0]
	ld	[%l5+0],%o0
	srl    	%o0,1,%o0
	bset	%l6,%o0
	mov   	%o0,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llsleep
!
	.seg	"data1"   
	.align	4
.llsleep:	.word    0
	._llsleep = 2
	.seg	"text"
	.align	8
	.global	llsleep
llsleep:
	cmp    	%l1,0
	blt	llsleep1
	nop
	cmp    	%l1,0
	blt  	llsleep2
	nop
	cmp    	%l1,%i0
	bge  	llsleep2
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitos	%f0,%f0
	st   	%f0,[%l5+0]
	ld	[%l5+0],%o0
	srl    	%o0,1,%o0
	bset	%l6,%o0
	mov   	%o0,%l1
llsleep1:
	mov   	%l1,%o0
	sll    	%o0,1,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fstod	%f0,%f0
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	st   	%f1,[%l5+0]
	ld	[%l5+0],%o1
	st   	%f0,[%l5+0]
	ld	[%l5+0],%o0
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	cdleep,2
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
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
llsleep2:
	add    	%i2,87*32,%l2
	ba,a	errnna
	.align	4

!
!	FENTRY	lldate
!
	.seg	"data1"   
	.align	4
.lldate:	.word    0
	._lldate = 1
	.seg	"text"
	.align	8
	.global	lldate
lldate:
	set	8,%l1
	mov   	%i2,%l2
	dec  	4,%l7
	call	makevect
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,88*32,%o3
	st   	%o3,[%l1+4]
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
	call 	cdate,1
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
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	clkalarm
!
	.seg	"data1"   
	.align	4
.clkalarm:	.word    0
	._clkalarm = 2
	.seg	"text"
	.align	8
	.global	clkalarm
clkalarm:
	cmp    	%l1,0
	blt	alrms1
	nop
	cmp    	%l1,0
	blt  	alrmer2
	nop
	cmp    	%l1,%i0
	bge  	alrmer2
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fitos	%f0,%f0
	st   	%f0,[%l5+0]
	ld	[%l5+0],%o0
	srl    	%o0,1,%o0
	bset	%l6,%o0
	mov   	%o0,%l1
alrms1:
	mov   	%l1,%o0
	sll    	%o0,1,%o0
	st   	%o0,[%l5+0]
	ld	[%l5+0],%f0
	fstod	%f0,%f0
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	st   	%f1,[%l5+0]
	ld	[%l5+0],%o1
	st   	%f0,[%l5+0]
	ld	[%l5+0],%o0
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	setalarm,2
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
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
alrmer2:
	add    	%i2,89*32,%l2
	ba,a	errnna
	.align	4

!
!	FENTRY	withit
!
	.seg	"data1"   
	.align	4
.withit:	.word    0
	._withit = 6
	.seg	"text"
	.align	8
	.global	withit
withit:
	set	itstate,%o0
	ld	[%o0+0],%o0
	cmp	%o0,%g0
	bne	withit2
	nop
	set	withit1,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	set	itstate,%o4
	st   	%g0,[%o4+0]
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
withit1:
	set	1,%o3
	set	itstate,%o4
	st   	%o3,[%o4+0]
withit2:
	ba,a	evprogn
	.align	4

!
!	FENTRY	withnoit
!
	.seg	"data1"   
	.align	4
.withnoit:	.word    0
	._withnoit = 6
	.seg	"text"
	.align	8
	.global	withnoit
withnoit:
	set	itstate,%o0
	ld	[%o0+0],%o0
	cmp	%o0,%g0
	beq	withno2
	nop
	set	withno1,%l3
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
withno1:
	set	itstate,%o4
	st   	%g0,[%o4+0]
withno2:
	ba,a	evprogn
	.align	4

!
!	FENTRY	lltime
!
	.seg	"data1"   
	.align	4
.lltime:	.word    0
	._lltime = 2
	.seg	"text"
	.align	8
	.global	lltime
lltime:
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
	call 	runtime,0
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
	fdtos	%f0,%f2
	st   	%f2,[%l5+0]
	ld	[%l5+0],%o0
	srl    	%o0,1,%o0
	bset	%l6,%o0
	mov   	%o0,%l2
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	call	evala1
	st   	%o7,[%l7+0]
	.align	4
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
	call 	runtime,0
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
	fdtos	%f0,%f2
	st   	%f2,[%l5+0]
	ld	[%l5+0],%o0
	srl    	%o0,1,%o0
	bset	%l6,%o0
	mov   	%o0,%l1
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	2,%l4
	ba,a	fldiff
	.align	4

!
!	FENTRY	llshwstk
!
	.seg	"data1"   
	.align	4
.llshwstk:	.word    0
	._llshwstk = 2
	.seg	"text"
	.align	8
	.global	llshwstk
llshwstk:
	mov   	%l7,%l4
	set	bstack,%l2
	ld	[%l2+0],%l2
	set	mstack,%l3
	ld	[%l3+0],%l3
llshwstk1:
	cmp    	%l7,%l3
	blt  	llshwstk2
	nop
	dec  	4,%l7
	st   	%l2,[%l7+0]
	ba,a	llshwstk1
	.align	4
llshwstk2:
	mov   	%l4,%l7
	dec  	4,%l7
	call	evala1
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l7,%l3
	mov   	%g0,%l1
	mov   	%g0,%l2
llshwstk3:
	set	0xFFFF,%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll  	%o0,2,%o0
	add    	%l7,%o0,%l7
	ld	[%l7+0],%l4
	set	bstack,%o0
	ld	[%o0+0],%o0
	cmp	%o0,%l4
	beq	llshwstk4
	nop
	inc	1,%l1
	cmp	%l1,1024
	blt	top99
	nop
	mov   	%g0,%l1
	inc	1,%l2
top99:
	ba,a	llshwstk3
	.align	4
llshwstk4:
	mov   	%l3,%l7
	mov   	%l2,%o1
	cmp   	%o1,0
	beq	llshwstk5
	nop
	cmp    	%i2,%g4
	bne    	top100
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top100:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
llshwstk5:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	lerror
!
	.seg	"data1"   
	.align	4
.lerror:	.word    0
	._lerror = 4
	.seg	"text"
	.align	8
	.global	lerror
lerror:
	cmp    	%i2,%g4
	bne    	top101
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top101:
	st   	%l3,[%g4+0]
	mov   	%g4,%l3
	ld	[%g4+4],%g4
	st   	%i2,[%l3+4]
	cmp    	%i2,%g4
	bne    	top102
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top102:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l3,[%o2+4]
	mov   	%o2,%l3
	cmp    	%i2,%g4
	bne    	top103
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top103:
	st   	%l1,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l3,[%o2+4]
	mov   	%o2,%l3
	mov   	%l3,%l2
	add    	%i2,99*32,%l1
	ba,a	itsoft
	.align	4
serror:
	cmp    	%i2,%g4
	bne    	top104
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top104:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	cmp    	%i2,%g4
	bne    	top105
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top105:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	cmp    	%i2,%g4
	bne    	top106
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top106:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%l1,[%l2+4]
	add    	%i2,99*32,%l1
	ba,a	itsoft
	.align	4
ferror:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	ld	[%l1+0],%l2
	cmp	%l2,%i1
	blt  	top107
	nop
	cmp	%l2,%i2
	blt  	ferror1
	nop
top107:
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l2
ferror1:
	ld	[%l2+0],%o0
	ld	[%o0+4],%l1
	mov   	%l1,%o0
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
	ld	[%l7+0],%l1
	inc  	4,%l7
ferror2:
	mov   	%i2,%l1
	add    	%i2,85*32,%l2
	mov   	%i2,%l3
	mov   	%i2,%l4
	ba,a	findtag
	.align	4

!
!	FENTRY	syserror
!
	.seg	"data1"   
	.align	4
.syserror:	.word    0
	._syserror = 4
	.seg	"text"
	.align	8
	.global	syserror
syserror:
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	add    	%i2,102*32,%l1
	dec  	4,%l7
	call	probj
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	dec  	4,%l7
	call	probj
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,103*32,%l1
	dec  	4,%l7
	call	probj
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	dec  	4,%l7
	call	probj
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,103*32,%l1
	dec  	4,%l7
	call	probj
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	dec  	4,%l7
	call	probjt
	st   	%o7,[%l7+0]
	.align	4
	ba,a	reenter
	.align	4

!
!	FENTRY	sysdebug
!
	.seg	"data1"   
	.align	4
.sysdebug:	.word    0
	._sysdebug = 1
	.seg	"text"
	.align	8
	.global	sysdebug
sysdebug:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
errfs:
	add    	%i2,104*32,%l1
	set	mstack2,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	ferror
	nop
	set	errfs0,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	set	mstack1,%o3
	ld	[%o3+0],%o3
	set	mstack,%o4
	st   	%o3,[%o4+0]
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
errfs0:
	set	mstack2,%o3
	ld	[%o3+0],%o3
	set	mstack,%o4
	st   	%o3,[%o4+0]
	mov   	%l1,%l3
	set	332*32,%l2
	add    	%i2,%l2,%l2
	mov   	%i2,%l1
	ba,a	serror
	.align	4
errfsgc:
	add    	%i2,105*32,%l1
	ba,a	ferror
	.align	4
erres:
	add    	%i2,106*32,%l1
	ld	[%l1+0],%l2
	cmp	%l2,%i1
	blt  	top108
	nop
	cmp	%l2,%i2
	blt  	erres2
	nop
top108:
	dec  	4,%l7
	call	stringa1
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l2
erres2:
	ld	[%l2+0],%o0
	ld	[%o0+4],%l1
	mov   	%l1,%o0
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
	ba,a	reenter
	.align	4
errfsp:
	add    	%i2,107*32,%l1
	ba,a	ferror
	.align	4
errato:
	add    	%i2,108*32,%l1
	ba,a	ferror
	.align	4
errfm:
	add    	%i2,109*32,%l1
	ba,a	ferror
	.align	4
errff:
	add    	%i2,110*32,%l1
	ba,a	ferror
	.align	4
errfn:
	add    	%i2,111*32,%l1
	ba,a	ferror
	.align	4
errfh:
	add    	%i2,112*32,%l1
	ba,a	ferror
	.align	4
errfr:
	add    	%i2,113*32,%l1
	ba,a	ferror
	.align	4
errfv:
	add    	%i2,114*32,%l1
	ba,a	ferror
	.align	4
errudv:
	add    	%i2,116*32,%l3
	ba,a	serror
	.align	4
errudf:
	add    	%i2,117*32,%l3
	ba,a	serror
	.align	4
errudm:
	add    	%i2,118*32,%l3
	ba,a	serror
	.align	4
errudt:
	add    	%i2,119*32,%l3
	ba,a	serror
	.align	4
errbdf:
	add    	%i2,120*32,%l3
	ba,a	serror
	.align	4
errwna:
	add    	%i2,121*32,%l3
	ba,a	serror
	.align	4
errbpa:
	add    	%i2,122*32,%l3
	ba,a	serror
	.align	4
errbal:
	add    	%i2,123*32,%l3
	ba,a	serror
	.align	4
errilb:
	add    	%i2,124*32,%l3
	ba,a	serror
	.align	4
errsxt:
	add    	%i2,125*32,%l3
	ba,a	serror
	.align	4
errios:
	add    	%i2,126*32,%l3
	ba,a	serror
	.align	4
err0dv:
	add    	%i2,127*32,%l3
	ba,a	serror
	.align	4
errnaa:
	set	132*32,%l3
	add    	%i2,%l3,%l3
	ba,a	serror
	.align	4
errnna:
	set	128*32,%l3
	add    	%i2,%l3,%l3
	ba,a	serror
	.align	4
errnia:
	set	129*32,%l3
	add    	%i2,%l3,%l3
	ba,a	serror
	.align	4
errnfa:
	set	130*32,%l3
	add    	%i2,%l3,%l3
	ba,a	serror
	.align	4
errnsa:
	set	131*32,%l3
	add    	%i2,%l3,%l3
	ba,a	serror
	.align	4
errnla:
	set	133*32,%l3
	add    	%i2,%l3,%l3
	ba,a	serror
	.align	4
errnva:
	set	134*32,%l3
	add    	%i2,%l3,%l3
	ba,a	serror
	.align	4
errstl:
	set	136*32,%l3
	add    	%i2,%l3,%l3
	ba,a	serror
	.align	4
erroob:
	set	135*32,%l3
	add    	%i2,%l3,%l3
	ba,a	serror
	.align	4
errvec:
	set	137*32,%l3
	add    	%i2,%l3,%l3
	ba,a	serror
	.align	4
errnda:
	set	138*32,%l3
	add    	%i2,%l3,%l3
	ba,a	serror
	.align	4
errstc:
	set	139*32,%l3
	add    	%i2,%l3,%l3
	ba,a	serror
	.align	4
errsym:
	set	140*32,%l3
	add    	%i2,%l3,%l3
	ba,a	serror
	.align	4
errgen:
	set	141*32,%l3
	add    	%i2,%l3,%l3
	ba,a	serror
	.align	4
errnab:
	set	142*32,%l3
	add    	%i2,%l3,%l3
	ba,a	serror
	.align	4
errxia:
	set	143*32,%l3
	add    	%i2,%l3,%l3
	ba,a	serror
	.align	4
llmerro:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	call	llsystem
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%i2,%g4
	bne    	top109
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top109:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
	cmp    	%i2,%g4
	bne    	top110
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top110:
	add    	%i2,115*32,%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l2,[%o2+4]
	mov   	%o2,%l2
	cmp    	%i2,%g4
	bne    	top111
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top111:
	st   	%l1,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l2,[%o2+4]
	mov   	%o2,%l2
	add    	%i2,99*32,%l1
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
llbreak:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	set	145*32,%l1
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
llpanic:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	mov   	%i2,%l2
	cmp    	%i2,%g4
	bne    	top112
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top112:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
	cmp    	%i2,%g4
	bne    	top113
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top113:
	set	144*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l2,[%o2+4]
	mov   	%o2,%l2
	cmp    	%i2,%g4
	bne    	top114
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top114:
	set	144*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l2,[%o2+4]
	mov   	%o2,%l2
	add    	%i2,99*32,%l1
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
llmouse:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	mov   	%i2,%l2
	set	146*32,%l1
	add    	%i2,%l1,%l1
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
llclock:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	set	147*32,%l1
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
!	FENTRY	userit
!
	.seg	"data1"   
	.align	4
.userit:	.word    0
	._userit = 1
	.seg	"text"
	.align	8
	.global	userit
userit:
	set	itstate,%o0
	ld	[%o0+0],%o0
	set	1,%o1
	cmp	%o0,%o1
	beq	userit2
	nop
	set	userit1,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	set	itstate,%o4
	st   	%g0,[%o4+0]
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
userit1:
	set	1,%o3
	set	itstate,%o4
	st   	%o3,[%o4+0]
userit2:
	mov   	%i2,%l2
	cmp    	%i2,%g4
	bne    	top115
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top115:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
	cmp    	%i2,%g4
	bne    	top116
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top116:
	set	144*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l2,[%o2+4]
	mov   	%o2,%l2
	cmp    	%i2,%g4
	bne    	top117
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
top117:
	set	144*32,%o0
	add    	%i2,%o0,%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l2,[%o2+4]
	mov   	%o2,%l2
	add    	%i2,99*32,%l1
	ba,a	itsoft
	.align	4

!
!	FENTRY	mouse
!
	.seg	"data1"   
	.align	4
.mouse:	.word    0
	._mouse = 1
	.seg	"text"
	.align	8
	.global	mouse
mouse:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	lltclock
!
	.seg	"data1"   
	.align	4
.lltclock:	.word    0
	._lltclock = 1
	.seg	"text"
	.align	8
	.global	lltclock
lltclock:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
getsetn:
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	getsetn1
	nop
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	getsetn2
	nop
	set	1,%l1
	ba,a	errwna
	.align	4
getsetn1:
	ld	[%l7+0],%l4
	inc  	4,%l7
	mov   	%l3,%l1
	inc  	4*2,%l7
	mov   	%l4,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
getsetn2:
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+4],%l1
	cmp    	%l1,0
	blt  	errnia
	nop
	cmp    	%l1,%i0
	bge  	errnia
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l3,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bgt	erroob
	nop
	ld	[%l7+0],%l3
	inc  	4,%l7
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l3,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	blt	erroob
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	mov   	%l4,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
! end
