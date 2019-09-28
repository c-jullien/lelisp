!
!	File specnb.s expansion for sparc arch=v8plus.
!	This file is part of Le-Lisp kernel.
!	Generated on Sat Oct   7 17 18:55:46 
!
	.file	"specnb.s"
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
	.global	cpkgc
	.global	evalcar
	.global	evala1
	.global	apply
	.global	ffuncall
	.global	getfns
	.global	nreverse
	.global	fzero
	.global	ffsymbol
	.global	ini_snb
	.global	fldiff
	.seg	"text"
ini_snb:
	.seg	"data1"   
	.align	4
pspe1:
	.asciz	"scale"
	.seg	"text"
bspe1:
	set	5,%l1
	set	pspe1,%l2
	set	scale,%l3
	dec	8,%l3
	set	trash,%l4
	set	._scale,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe2:
	.asciz	"lognot"
	.seg	"text"
bspe2:
	set	6,%l1
	set	pspe2,%l2
	set	lognot,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lognot,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe3:
	.asciz	"logand"
	.seg	"text"
bspe3:
	set	6,%l1
	set	pspe3,%l2
	set	logand,%l3
	dec	8,%l3
	set	trash,%l4
	set	._logand,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe4:
	.asciz	"logor"
	.seg	"text"
bspe4:
	set	5,%l1
	set	pspe4,%l2
	set	logor,%l3
	dec	8,%l3
	set	trash,%l4
	set	._logor,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe5:
	.asciz	"logxor"
	.seg	"text"
bspe5:
	set	6,%l1
	set	pspe5,%l2
	set	logxor,%l3
	dec	8,%l3
	set	trash,%l4
	set	._logxor,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe6:
	.asciz	"logshift"
	.seg	"text"
bspe6:
	set	8,%l1
	set	pspe6,%l2
	set	logshift,%l3
	dec	8,%l3
	set	trash,%l4
	set	._logshift,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe7:
	.asciz	"2**"
	.seg	"text"
bspe7:
	set	3,%l1
	set	pspe7,%l2
	set	dpn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._dpn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe8:
	.asciz	"mask-field"
	.seg	"text"
bspe8:
	set	10,%l1
	set	pspe8,%l2
	set	mskfield,%l3
	dec	8,%l3
	set	trash,%l4
	set	._mskfield,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe9:
	.asciz	"load-byte"
	.seg	"text"
bspe9:
	set	9,%l1
	set	pspe9,%l2
	set	ldbyte,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ldbyte,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe10:
	.asciz	"deposit-byte"
	.seg	"text"
bspe10:
	set	12,%l1
	set	pspe10,%l2
	set	dpbyte,%l3
	dec	8,%l3
	set	trash,%l4
	set	._dpbyte,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe11:
	.asciz	"deposit-field"
	.seg	"text"
bspe11:
	set	13,%l1
	set	pspe11,%l2
	set	dpfield,%l3
	dec	8,%l3
	set	trash,%l4
	set	._dpfield,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe12:
	.asciz	"load-byte-test"
	.seg	"text"
bspe12:
	set	14,%l1
	set	pspe12,%l2
	set	ldbt,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ldbt,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe13:
	.asciz	"oddp"
	.seg	"text"
bspe13:
	set	4,%l1
	set	pspe13,%l2
	set	oddp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._oddp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe14:
	.asciz	"evenp"
	.seg	"text"
bspe14:
	set	5,%l1
	set	pspe14,%l2
	set	evenp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._evenp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe15:
	.asciz	"random"
	.seg	"text"
bspe15:
	set	6,%l1
	set	pspe15,%l2
	set	llrandom,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llrandom,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe16:
	.asciz	"srandom"
	.seg	"text"
bspe16:
	set	7,%l1
	set	pspe16,%l2
	set	llsrandom,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llsrandom,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe17:
	.asciz	"floatp"
	.seg	"text"
bspe17:
	set	6,%l1
	set	pspe17,%l2
	set	floatp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._floatp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe18:
	.asciz	"fixp"
	.seg	"text"
bspe18:
	set	4,%l1
	set	pspe18,%l2
	set	fixp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fixp,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe19:
	.asciz	"plus"
	.seg	"text"
bspe19:
	set	4,%l1
	set	pspe19,%l2
	set	flplus,%l3
	dec	8,%l3
	set	trash,%l4
	set	._flplus,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe20:
	.asciz	"difference"
	.seg	"text"
bspe20:
	set	10,%l1
	set	pspe20,%l2
	set	fldiff,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fldiff,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe21:
	.asciz	"differ"
	.seg	"text"
bspe21:
	set	6,%l1
	set	pspe21,%l2
	set	fldiff,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fldiff,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe22:
	.asciz	"times"
	.seg	"text"
bspe22:
	set	5,%l1
	set	pspe22,%l2
	set	fltimes,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fltimes,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe23:
	.asciz	"divide"
	.seg	"text"
bspe23:
	set	6,%l1
	set	pspe23,%l2
	set	flquo,%l3
	dec	8,%l3
	set	trash,%l4
	set	._flquo,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe24:
	.asciz	"add1"
	.seg	"text"
bspe24:
	set	4,%l1
	set	pspe24,%l2
	set	lladd1,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lladd1,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe25:
	.asciz	"sub1"
	.seg	"text"
bspe25:
	set	4,%l1
	set	pspe25,%l2
	set	llsub1,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llsub1,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe26:
	.asciz	"add"
	.seg	"text"
bspe26:
	set	3,%l1
	set	pspe26,%l2
	set	lladd,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lladd,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe27:
	.asciz	"sub"
	.seg	"text"
bspe27:
	set	3,%l1
	set	pspe27,%l2
	set	llsub,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llsub,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe28:
	.asciz	"mul"
	.seg	"text"
bspe28:
	set	3,%l1
	set	pspe28,%l2
	set	llmul,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llmul,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe29:
	.asciz	"div"
	.seg	"text"
bspe29:
	set	3,%l1
	set	pspe29,%l2
	set	ll_div,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ll_div,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe30:
	.asciz	"rem"
	.seg	"text"
bspe30:
	set	3,%l1
	set	pspe30,%l2
	set	llrem,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llrem,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe31:
	.asciz	"eqn"
	.seg	"text"
bspe31:
	set	3,%l1
	set	pspe31,%l2
	set	lleqn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lleqn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe32:
	.asciz	"neqn"
	.seg	"text"
bspe32:
	set	4,%l1
	set	pspe32,%l2
	set	llneqn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llneqn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe33:
	.asciz	"ge"
	.seg	"text"
bspe33:
	set	2,%l1
	set	pspe33,%l2
	set	llge,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llge,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe34:
	.asciz	"gt"
	.seg	"text"
bspe34:
	set	2,%l1
	set	pspe34,%l2
	set	llgt,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llgt,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe35:
	.asciz	"le"
	.seg	"text"
bspe35:
	set	2,%l1
	set	pspe35,%l2
	set	llle,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llle,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe36:
	.asciz	"lt"
	.seg	"text"
bspe36:
	set	2,%l1
	set	pspe36,%l2
	set	lllt,%l3
	dec	8,%l3
	set	trash,%l4
	set	._lllt,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe37:
	.asciz	"imin"
	.seg	"text"
bspe37:
	set	4,%l1
	set	pspe37,%l2
	set	llimin,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llimin,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe38:
	.asciz	"imax"
	.seg	"text"
bspe38:
	set	4,%l1
	set	pspe38,%l2
	set	llimax,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llimax,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe39:
	.asciz	"fadd"
	.seg	"text"
bspe39:
	set	4,%l1
	set	pspe39,%l2
	set	llfadd,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llfadd,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe40:
	.asciz	"fsub"
	.seg	"text"
bspe40:
	set	4,%l1
	set	pspe40,%l2
	set	llfsub,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llfsub,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe41:
	.asciz	"fmul"
	.seg	"text"
bspe41:
	set	4,%l1
	set	pspe41,%l2
	set	llfmul,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llfmul,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe42:
	.asciz	"fdiv"
	.seg	"text"
bspe42:
	set	4,%l1
	set	pspe42,%l2
	set	llfdiv,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llfdiv,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe43:
	.asciz	"feqn"
	.seg	"text"
bspe43:
	set	4,%l1
	set	pspe43,%l2
	set	llfeqn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llfeqn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe44:
	.asciz	"fneqn"
	.seg	"text"
bspe44:
	set	5,%l1
	set	pspe44,%l2
	set	llfneqn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llfneqn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe45:
	.asciz	"fge"
	.seg	"text"
bspe45:
	set	3,%l1
	set	pspe45,%l2
	set	llfge,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llfge,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe46:
	.asciz	"fgt"
	.seg	"text"
bspe46:
	set	3,%l1
	set	pspe46,%l2
	set	llfgt,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llfgt,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe47:
	.asciz	"fle"
	.seg	"text"
bspe47:
	set	3,%l1
	set	pspe47,%l2
	set	llfle,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llfle,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe48:
	.asciz	"flt"
	.seg	"text"
bspe48:
	set	3,%l1
	set	pspe48,%l2
	set	llflt,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llflt,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe49:
	.asciz	"fmin"
	.seg	"text"
bspe49:
	set	4,%l1
	set	pspe49,%l2
	set	llfmin,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llfmin,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe50:
	.asciz	"fmax"
	.seg	"text"
bspe50:
	set	4,%l1
	set	pspe50,%l2
	set	llfmax,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llfmax,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	set	367*32,%o3
	add    	%i2,%o3,%o3
	set	cpkgc,%o4
	st   	%o3,[%o4+0]
	.seg	"data1"   
	.align	4
pspe51:
	.asciz	"logshift"
	.seg	"text"
bspe51:
	set	8,%l1
	set	pspe51,%l2
	set	clllsht,%l3
	dec	8,%l3
	set	trash,%l4
	set	._clllsht,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe52:
	.asciz	"mul"
	.seg	"text"
bspe52:
	set	3,%l1
	set	pspe52,%l2
	set	cllmul,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cllmul,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe53:
	.asciz	"div"
	.seg	"text"
bspe53:
	set	3,%l1
	set	pspe53,%l2
	set	clldiv,%l3
	dec	8,%l3
	set	trash,%l4
	set	._clldiv,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe54:
	.asciz	"rem"
	.seg	"text"
bspe54:
	set	3,%l1
	set	pspe54,%l2
	set	cllrem,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cllrem,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe55:
	.asciz	"fadd"
	.seg	"text"
bspe55:
	set	4,%l1
	set	pspe55,%l2
	set	cllfadd,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cllfadd,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe56:
	.asciz	"fsub"
	.seg	"text"
bspe56:
	set	4,%l1
	set	pspe56,%l2
	set	cllfsub,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cllfsub,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe57:
	.asciz	"fmul"
	.seg	"text"
bspe57:
	set	4,%l1
	set	pspe57,%l2
	set	cllfmul,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cllfmul,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe58:
	.asciz	"fdiv"
	.seg	"text"
bspe58:
	set	4,%l1
	set	pspe58,%l2
	set	cllfdiv,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cllfdiv,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe59:
	.asciz	"feqn"
	.seg	"text"
bspe59:
	set	4,%l1
	set	pspe59,%l2
	set	cllfeqn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cllfeqn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe60:
	.asciz	"fneqn"
	.seg	"text"
bspe60:
	set	5,%l1
	set	pspe60,%l2
	set	cllfneqn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cllfneqn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe61:
	.asciz	"fge"
	.seg	"text"
bspe61:
	set	3,%l1
	set	pspe61,%l2
	set	cllfge,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cllfge,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe62:
	.asciz	"fgt"
	.seg	"text"
bspe62:
	set	3,%l1
	set	pspe62,%l2
	set	cllfgt,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cllfgt,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe63:
	.asciz	"fle"
	.seg	"text"
bspe63:
	set	3,%l1
	set	pspe63,%l2
	set	cllfle,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cllfle,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe64:
	.asciz	"flt"
	.seg	"text"
bspe64:
	set	3,%l1
	set	pspe64,%l2
	set	cllflt,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cllflt,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	set	cpkgc,%o4
	st   	%i2,[%o4+0]
	.seg	"data1"   
	.align	4
pspe65:
	.asciz	"regret"
	.seg	"text"
bspe65:
	set 	6,%l1
	set	pspe65,%l2
	set	693*32,%l3
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
pspe66:
	.asciz	"ex+"
	.seg	"text"
bspe66:
	set	3,%l1
	set	pspe66,%l2
	set	exadd,%l3
	dec	8,%l3
	set	trash,%l4
	set	._exadd,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe67:
	.asciz	"ex1+"
	.seg	"text"
bspe67:
	set	4,%l1
	set	pspe67,%l2
	set	exincr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._exincr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe68:
	.asciz	"ex-"
	.seg	"text"
bspe68:
	set	3,%l1
	set	pspe68,%l2
	set	exinv,%l3
	dec	8,%l3
	set	trash,%l4
	set	._exinv,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe69:
	.asciz	"ex*"
	.seg	"text"
bspe69:
	set	3,%l1
	set	pspe69,%l2
	set	exmul,%l3
	dec	8,%l3
	set	trash,%l4
	set	._exmul,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe70:
	.byte 	101,120,47
	.seg	"text"
bspe70:
	set	3,%l1
	set	pspe70,%l2
	set	exdiv,%l3
	dec	8,%l3
	set	trash,%l4
	set	._exdiv,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pspe71:
	.asciz	"ex?"
	.seg	"text"
bspe71:
	set	3,%l1
	set	pspe71,%l2
	set	excomp,%l3
	dec	8,%l3
	set	trash,%l4
	set	._excomp,%o0
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
nfalse:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
rzero:
	mov   	%g0,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
rone:
	set	1,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
banfix3:
	mov   	%l3,%l2
banfix2:
	mov   	%l2,%l1
banfix1:
	mov   	%l4,%l2
	ba,a	errnia
	.align	4
banflt2:
	mov   	%l2,%l1
banflt1:
	mov   	%l4,%l2
	ba,a	errnfa
	.align	4
banmix2:
	mov   	%l2,%l1
banmix1:
	mov   	%l4,%l2
	ba,a	errnna
	.align	4
ban0dv:
	mov   	%l4,%l2
	mov   	%g0,%l1
	ba,a	err0dv
	.align	4
banwna:
	mov   	%l3,%l1
	mov   	%l4,%l2
	ba,a	errwna
	.align	4

!
!	FENTRY	oddp
!
	.seg	"data1"   
	.align	4
.oddp:	.word    0
	._oddp = 2
	.seg	"text"
	.align	8
	.global	oddp
oddp:
	set	641*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	mov   	%l1,%l2
	and	%l2,1,%l2
	mov   	%l2,%o1
	cmp    	%o1,0
	beq	nfalse
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	evenp
!
	.seg	"data1"   
	.align	4
.evenp:	.word    0
	._evenp = 2
	.seg	"text"
	.align	8
	.global	evenp
evenp:
	set	642*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	mov   	%l1,%l2
	and	%l2,1,%l2
	mov   	%l2,%o1
	cmp    	%o1,0
	bne	nfalse
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	lleqn
!
	.seg	"data1"   
	.align	4
.lleqn:	.word    0
	._lleqn = 3
	.seg	"text"
	.align	8
	.global	lleqn
lleqn:
	set	659*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
	nop
	cmp   	%l1,%l2
	bne	nfalse
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llneqn
!
	.seg	"data1"   
	.align	4
.llneqn:	.word    0
	._llneqn = 3
	.seg	"text"
	.align	8
	.global	llneqn
llneqn:
	set	660*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
	nop
	cmp   	%l1,%l2
	beq	nfalse
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llgt
!
	.seg	"data1"   
	.align	4
.llgt:	.word    0
	._llgt = 3
	.seg	"text"
	.align	8
	.global	llgt
llgt:
	set	662*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	ble	nfalse
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llge
!
	.seg	"data1"   
	.align	4
.llge:	.word    0
	._llge = 3
	.seg	"text"
	.align	8
	.global	llge
llge:
	set	661*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	blt	nfalse
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	lllt
!
	.seg	"data1"   
	.align	4
.lllt:	.word    0
	._lllt = 3
	.seg	"text"
	.align	8
	.global	lllt
lllt:
	set	664*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bge	nfalse
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llle
!
	.seg	"data1"   
	.align	4
.llle:	.word    0
	._llle = 3
	.seg	"text"
	.align	8
	.global	llle
llle:
	set	663*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bgt	nfalse
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llimin
!
	.seg	"data1"   
	.align	4
.llimin:	.word    0
	._llimin = 3
	.seg	"text"
	.align	8
	.global	llimin
llimin:
	set	665*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	ble	lliminr
	nop
	mov   	%l2,%l1
lliminr:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llimax
!
	.seg	"data1"   
	.align	4
.llimax:	.word    0
	._llimax = 3
	.seg	"text"
	.align	8
	.global	llimax
llimax:
	set	666*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bgt	llimaxr
	nop
	mov   	%l2,%l1
llimaxr:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	lladd1
!
	.seg	"data1"   
	.align	4
.lladd1:	.word    0
	._lladd1 = 2
	.seg	"text"
	.align	8
	.global	lladd1
lladd1:
	set	652*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	inc	1,%l1
	mov   	%l1,%o2
	and 	%l1,%l0,%l1
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	lla1ret
	nop
lla1ret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llsub1
!
	.seg	"data1"   
	.align	4
.llsub1:	.word    0
	._llsub1 = 2
	.seg	"text"
	.align	8
	.global	llsub1
llsub1:
	set	653*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	dec	1,%l1
	mov   	%l1,%o2
	and 	%l1,%l0,%l1
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	lls1ret
	nop
lls1ret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	lladd
!
	.seg	"data1"   
	.align	4
.lladd:	.word    0
	._lladd = 3
	.seg	"text"
	.align	8
	.global	lladd
lladd:
	set	654*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
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
	bne  	lladdret
	nop
lladdret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llsub
!
	.seg	"data1"   
	.align	4
.llsub:	.word    0
	._llsub = 3
	.seg	"text"
	.align	8
	.global	llsub
llsub:
	set	655*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
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
	bne  	llsubret
	nop
llsubret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llmul
!
	.seg	"data1"   
	.align	4
.llmul:	.word    0
	._llmul = 3
	.seg	"text"
	.align	8
	.global	llmul
llmul:
	set	656*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
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
	bne  	llmulret
	nop
llmulret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	ll_div
!
	.seg	"data1"   
	.align	4
.ll_div:	.word    0
	._ll_div = 3
	.seg	"text"
	.align	8
	.global	ll_div
ll_div:
	set	657*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
	nop
	mov   	%l2,%o1
	cmp    	%o1,0
	beq	ban0dv
	nop
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
	bne  	lldivret
	nop
lldivret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llrem
!
	.seg	"data1"   
	.align	4
.llrem:	.word    0
	._llrem = 3
	.seg	"text"
	.align	8
	.global	llrem
llrem:
	set	658*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
	nop
	mov   	%l2,%o1
	cmp    	%o1,0
	beq	ban0dv
	nop
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
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	scale
!
	.seg	"data1"   
	.align	4
.scale:	.word    0
	._scale = 4
	.seg	"text"
	.align	8
	.global	scale
scale:
	set	629*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
	nop
	cmp    	%l3,%g3
	bge	banfix3
	nop
	mov   	%l3,%o1
	cmp    	%o1,0
	beq	ban0dv
	nop
	mov   	%g0,%l4
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	bge	scale1
	nop
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	neg	%l1,%l1
	mov   	%l1,%o2
	and 	%l1,%l0,%l1
	inc	1,%l4
scale1:
	sll	%l2,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	bge	scale2
	nop
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	neg	%l2,%l2
	mov   	%l2,%o2
	and 	%l2,%l0,%l2
	inc	1,%l4
scale2:
	sll	%l3,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,0
	bge	scale3
	nop
	sll	%l3,16,%l3
	sra	%l3,16,%l3
	neg	%l3,%l3
	mov   	%l3,%o2
	and 	%l3,%l0,%l3
	inc	1,%l4
scale3:
	mov   	%l2,%o0
	mov   	%l1,%o1
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
	add    	%o0,%g0,%o0
	mov   	%g0,%o1
	add    	%o0,%o1,%o0
	mov 	%o0,%o1
	srl  	%o1,16,%o1
	and	%o1,%l0,%l1
	and	%o0,%l0,%l2
	mov   	%l1,%o0
	sll  	%o0,16,%o0
	or   	%o0,%l2,%o0
	mov   	%l3,%o1
	set	equobuf,%o2
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
	call 	equo,3
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
	set	equobuf,%o0
	ld	[%o0+0],%o0
	mov   	%o0,%l1
	set	equobuf2,%o0
	ld	[%o0+0],%o0
	mov   	%o0,%l2
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	scale4
	nop
	mov   	%l4,%o1
	cmp    	%o1,2
	beq	scale4
	nop
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	neg	%l1,%l1
	mov   	%l1,%o2
	and 	%l1,%l0,%l1
scale4:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
	.seg	"data1"
	.align	4
randseed:
	.word 	0
	.seg	"text"

!
!	FENTRY	llsrandom
!
	.seg	"data1"   
	.align	4
.llsrandom:	.word    0
	._llsrandom = 5
	.seg	"text"
	.align	8
	.global	llsrandom
llsrandom:
	mov   	%l4,%l3
	set	644*32,%l4
	add    	%i2,%l4,%l4
	mov   	%l3,%o1
	cmp    	%o1,0
	beq	srand1
	nop
	mov   	%l3,%o1
	cmp    	%o1,1
	beq	srand0
	nop
	ba,a	banwna
	.align	4
srand0:
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%g3
	bge	banfix1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	set	31213,%o1
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
	set	bfloat,%g3
	ld	[%g3+0],%g3
	and	%o0,%l0,%l1
	set	randseed,%o4
	st   	%l1,[%o4+0]
srand1:
	set	randseed,%l1
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llrandom
!
	.seg	"data1"   
	.align	4
.llrandom:	.word    0
	._llrandom = 3
	.seg	"text"
	.align	8
	.global	llrandom
llrandom:
	set	643*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
	nop
	cmp   	%l1,%l2
	beq	random1
	nop
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	blt	random2
	nop
	mov   	%l1,%l3
	mov   	%l2,%l1
	mov   	%l3,%l2
random2:
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	sll	%l1,16,%o1
	sra	%o1,16,%o1
	sub	%l2,%o1,%l2
	and 	%l2,%l0,%l2
random3:
	set	randseed,%l3
	ld	[%l3+0],%l3
	set	92,%o0
	mov   	%l3,%o1
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
	set	2731,%o1
	add    	%o0,%o1,%o0
	mov   	%g0,%o1
	add    	%o0,%o1,%o0
	mov 	%o0,%o1
	srl  	%o1,16,%o1
	and	%o1,%l0,%l3
	and	%o0,%l0,%l4
	mov   	%l3,%o0
	sll  	%o0,16,%o0
	or   	%o0,%l4,%o0
	set	31213,%o1
	set	equobuf,%o2
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
	call 	equo,3
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
	set	equobuf,%o0
	ld	[%o0+0],%o0
	mov   	%o0,%l3
	set	equobuf2,%o0
	ld	[%o0+0],%o0
	mov   	%o0,%l4
	set	randseed,%o4
	st   	%l4,[%o4+0]
	mov   	%l2,%o0
	mov   	%l4,%o1
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
	add    	%o0,%g0,%o0
	mov   	%g0,%o1
	add    	%o0,%o1,%o0
	mov 	%o0,%o1
	srl  	%o1,16,%o1
	and	%o1,%l0,%l3
	and	%o0,%l0,%l4
	mov   	%l3,%o0
	sll  	%o0,16,%o0
	or   	%o0,%l4,%o0
	set	31213,%o1
	set	equobuf,%o2
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
	call 	equo,3
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
	set	equobuf,%o0
	ld	[%o0+0],%o0
	mov   	%o0,%l3
	set	equobuf2,%o0
	ld	[%o0+0],%o0
	mov   	%o0,%l4
	sll	%l3,16,%o0
	sra	%o0,16,%o0
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	cmp    	%o0,%o1
	bgt	random3
	nop
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sll	%l3,16,%o1
	sra	%o1,16,%o1
	add	%l1,%o1,%l1
	and 	%l1,%l0,%l1
random1:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	lognot
!
	.seg	"data1"   
	.align	4
.lognot:	.word    0
	._lognot = 2
	.seg	"text"
	.align	8
	.global	lognot
lognot:
	set	630*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	set	0xFFFF,%o0
	xor	%l1,%o0,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	logand
!
	.seg	"data1"   
	.align	4
.logand:	.word    0
	._logand = 3
	.seg	"text"
	.align	8
	.global	logand
logand:
	set	631*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
	nop
	and	%l1,%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	logor
!
	.seg	"data1"   
	.align	4
.logor:	.word    0
	._logor = 3
	.seg	"text"
	.align	8
	.global	logor
logor:
	set	632*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
	nop
	or	%l1,%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	logxor
!
	.seg	"data1"   
	.align	4
.logxor:	.word    0
	._logxor = 3
	.seg	"text"
	.align	8
	.global	logxor
logxor:
	set	633*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
	nop
	xor	%l1,%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	logshift
!
	.seg	"data1"   
	.align	4
.logshift:	.word    0
	._logshift = 3
	.seg	"text"
	.align	8
	.global	logshift
logshift:
	set	634*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
	nop
	mov   	%l1,%o0
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	cmp  	%o1,0
	bge  	Mspe72
	nop
	neg 	%o1,%o1
	ba       Rspe72
	srl  	%o0,%o1,%o0
Mspe72:	sll  	%o0,%o1,%o0
Rspe72:
	and	%o0,%l0,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	dpn
!
	.seg	"data1"   
	.align	4
.dpn:	.word    0
	._dpn = 2
	.seg	"text"
	.align	8
	.global	dpn
dpn:
	set	635*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	mov   	%l1,%l2
	set	1,%l1
	mov   	%l1,%o0
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	cmp  	%o1,0
	bge  	Mspe73
	nop
	neg 	%o1,%o1
	ba       Rspe73
	srl  	%o0,%o1,%o0
Mspe73:	sll  	%o0,%o1,%o0
Rspe73:
	and	%o0,%l0,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	mskfield
!
	.seg	"data1"   
	.align	4
.mskfield:	.word    0
	._mskfield = 4
	.seg	"text"
	.align	8
	.global	mskfield
mskfield:
	set	636*32,%l4
	add    	%i2,%l4,%l4
mskf0:
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
	nop
	cmp    	%l3,%g3
	bge	banfix3
	nop
	set	1,%l4
	mov   	%l4,%o0
	sll	%l3,16,%o1
	sra	%o1,16,%o1
	cmp  	%o1,0
	bge  	Mspe74
	nop
	neg 	%o1,%o1
	ba       Rspe74
	srl  	%o0,%o1,%o0
Mspe74:	sll  	%o0,%o1,%o0
Rspe74:
	and	%o0,%l0,%l4
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec	1,%l4
	mov   	%l4,%o2
	and 	%l4,%l0,%l4
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	mskf1
	nop
mskf1:
	mov   	%l4,%o0
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	cmp  	%o1,0
	bge  	Mspe75
	nop
	neg 	%o1,%o1
	ba       Rspe75
	srl  	%o0,%o1,%o0
Mspe75:	sll  	%o0,%o1,%o0
Rspe75:
	and	%o0,%l0,%l4
	and	%l1,%l4,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	ldbyte
!
	.seg	"data1"   
	.align	4
.ldbyte:	.word    0
	._ldbyte = 4
	.seg	"text"
	.align	8
	.global	ldbyte
ldbyte:
	set	637*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
	nop
	cmp    	%l3,%g3
	bge	banfix3
	nop
	set	1,%l4
	mov   	%l4,%o0
	sll	%l3,16,%o1
	sra	%o1,16,%o1
	cmp  	%o1,0
	bge  	Mspe76
	nop
	neg 	%o1,%o1
	ba       Rspe76
	srl  	%o0,%o1,%o0
Mspe76:	sll  	%o0,%o1,%o0
Rspe76:
	and	%o0,%l0,%l4
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec	1,%l4
	mov   	%l4,%o2
	and 	%l4,%l0,%l4
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	ldby1
	nop
ldby1:
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	neg	%l2,%l2
	mov   	%l2,%o2
	and 	%l2,%l0,%l2
	mov   	%l1,%o0
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	cmp  	%o1,0
	bge  	Mspe77
	nop
	neg 	%o1,%o1
	ba       Rspe77
	srl  	%o0,%o1,%o0
Mspe77:	sll  	%o0,%o1,%o0
Rspe77:
	and	%o0,%l0,%l1
	and	%l1,%l4,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	ldbt
!
	.seg	"data1"   
	.align	4
.ldbt:	.word    0
	._ldbt = 4
	.seg	"text"
	.align	8
	.global	ldbt
ldbt:
	set	640*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	bge	banfix1
	nop
	cmp    	%l2,%g3
	bge	banfix2
	nop
	cmp    	%l3,%g3
	bge	banfix3
	nop
	set	1,%l4
	mov   	%l4,%o0
	sll	%l3,16,%o1
	sra	%o1,16,%o1
	cmp  	%o1,0
	bge  	Mspe78
	nop
	neg 	%o1,%o1
	ba       Rspe78
	srl  	%o0,%o1,%o0
Mspe78:	sll  	%o0,%o1,%o0
Rspe78:
	and	%o0,%l0,%l4
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec	1,%l4
	mov   	%l4,%o2
	and 	%l4,%l0,%l4
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	ldbt1
	nop
ldbt1:
	sll	%l2,16,%l2
	sra	%l2,16,%l2
	neg	%l2,%l2
	mov   	%l2,%o2
	and 	%l2,%l0,%l2
	mov   	%l1,%o0
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	cmp  	%o1,0
	bge  	Mspe79
	nop
	neg 	%o1,%o1
	ba       Rspe79
	srl  	%o0,%o1,%o0
Mspe79:	sll  	%o0,%o1,%o0
Rspe79:
	and	%o0,%l0,%l1
	and	%l1,%l4,%l1
	mov   	%l1,%o1
	cmp    	%o1,0
	beq	nfalse
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	dpbyte
!
	.seg	"data1"   
	.align	4
.dpbyte:	.word    0
	._dpbyte = 5
	.seg	"text"
	.align	8
	.global	dpbyte
dpbyte:
	mov   	%l4,%l3
	set	638*32,%l4
	add    	%i2,%l4,%l4
	ba,a	dpfi0
	.align	4

!
!	FENTRY	dpfield
!
	.seg	"data1"   
	.align	4
.dpfield:	.word    0
	._dpfield = 5
	.seg	"text"
	.align	8
	.global	dpfield
dpfield:
	mov   	%l4,%l3
	set	639*32,%l4
	add    	%i2,%l4,%l4
dpfi0:
	mov   	%l3,%o1
	cmp    	%o1,4
	bne	banwna
	nop
	ld	[%l7+12],%l1
	cmp    	%l1,%g3
	bge	banfix1
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	set	639*32,%o1
	add    	%i2,%o1,%o1
	cmp	%l4,%o1
	beq	dpfi1
	nop
	mov   	%l1,%o0
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	cmp  	%o1,0
	bge  	Mspe80
	nop
	neg 	%o1,%o1
	ba       Rspe80
	srl  	%o0,%o1,%o0
Mspe80:	sll  	%o0,%o1,%o0
Rspe80:
	and	%o0,%l0,%l1
dpfi1:
	dec  	4,%l7
	call	mskf0
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	set	0xFFFF,%o0
	xor	%l4,%o0,%l4
	and	%l2,%l4,%l2
	or	%l1,%l2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llfeqn
!
	.seg	"data1"   
	.align	4
.llfeqn:	.word    0
	._llfeqn = 3
	.seg	"text"
	.align	8
	.global	llfeqn
llfeqn:
	set	671*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	blt  	banflt1
	nop
	cmp    	%l1,%i0
	bge  	banflt1
	nop
	cmp    	%l2,%g3
	blt  	banflt2
	nop
	cmp    	%l2,%i0
	bge  	banflt2
	nop
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	mov   	%l2,%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbne    	nfalse
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llfneqn
!
	.seg	"data1"   
	.align	4
.llfneqn:	.word    0
	._llfneqn = 3
	.seg	"text"
	.align	8
	.global	llfneqn
llfneqn:
	set	672*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	blt  	banflt1
	nop
	cmp    	%l1,%i0
	bge  	banflt1
	nop
	cmp    	%l2,%g3
	blt  	banflt2
	nop
	cmp    	%l2,%i0
	bge  	banflt2
	nop
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	mov   	%l2,%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbe    	nfalse
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llfgt
!
	.seg	"data1"   
	.align	4
.llfgt:	.word    0
	._llfgt = 3
	.seg	"text"
	.align	8
	.global	llfgt
llfgt:
	set	674*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	blt  	banflt1
	nop
	cmp    	%l1,%i0
	bge  	banflt1
	nop
	cmp    	%l2,%g3
	blt  	banflt2
	nop
	cmp    	%l2,%i0
	bge  	banflt2
	nop
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	mov   	%l2,%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fble    	nfalse
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llfge
!
	.seg	"data1"   
	.align	4
.llfge:	.word    0
	._llfge = 3
	.seg	"text"
	.align	8
	.global	llfge
llfge:
	set	673*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	blt  	banflt1
	nop
	cmp    	%l1,%i0
	bge  	banflt1
	nop
	cmp    	%l2,%g3
	blt  	banflt2
	nop
	cmp    	%l2,%i0
	bge  	banflt2
	nop
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	mov   	%l2,%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbl    	nfalse
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llflt
!
	.seg	"data1"   
	.align	4
.llflt:	.word    0
	._llflt = 3
	.seg	"text"
	.align	8
	.global	llflt
llflt:
	set	676*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	blt  	banflt1
	nop
	cmp    	%l1,%i0
	bge  	banflt1
	nop
	cmp    	%l2,%g3
	blt  	banflt2
	nop
	cmp    	%l2,%i0
	bge  	banflt2
	nop
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	mov   	%l2,%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbge    	nfalse
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llfle
!
	.seg	"data1"   
	.align	4
.llfle:	.word    0
	._llfle = 3
	.seg	"text"
	.align	8
	.global	llfle
llfle:
	set	675*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	blt  	banflt1
	nop
	cmp    	%l1,%i0
	bge  	banflt1
	nop
	cmp    	%l2,%g3
	blt  	banflt2
	nop
	cmp    	%l2,%i0
	bge  	banflt2
	nop
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	mov   	%l2,%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbg    	nfalse
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llfmin
!
	.seg	"data1"   
	.align	4
.llfmin:	.word    0
	._llfmin = 3
	.seg	"text"
	.align	8
	.global	llfmin
llfmin:
	set	677*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	blt  	banflt1
	nop
	cmp    	%l1,%i0
	bge  	banflt1
	nop
	cmp    	%l2,%g3
	blt  	banflt2
	nop
	cmp    	%l2,%i0
	bge  	banflt2
	nop
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	mov   	%l2,%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fble    	llfminr
	nop
	mov   	%l2,%l1
llfminr:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llfmax
!
	.seg	"data1"   
	.align	4
.llfmax:	.word    0
	._llfmax = 3
	.seg	"text"
	.align	8
	.global	llfmax
llfmax:
	set	678*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	blt  	banflt1
	nop
	cmp    	%l1,%i0
	bge  	banflt1
	nop
	cmp    	%l2,%g3
	blt  	banflt2
	nop
	cmp    	%l2,%i0
	bge  	banflt2
	nop
	mov   	%l1,%o0
	ldd	[%o0+0],%f0
	mov   	%l2,%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbg    	llfmaxr
	nop
	mov   	%l2,%l1
llfmaxr:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llfadd
!
	.seg	"data1"   
	.align	4
.llfadd:	.word    0
	._llfadd = 3
	.seg	"text"
	.align	8
	.global	llfadd
llfadd:
	set	667*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	blt  	banflt1
	nop
	cmp    	%l1,%i0
	bge  	banflt1
	nop
	cmp    	%l2,%g3
	blt  	banflt2
	nop
	cmp    	%l2,%i0
	bge  	banflt2
	nop
	.global	ffloat
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe81
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe81:
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

!
!	FENTRY	llfsub
!
	.seg	"data1"   
	.align	4
.llfsub:	.word    0
	._llfsub = 3
	.seg	"text"
	.align	8
	.global	llfsub
llfsub:
	set	668*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	blt  	banflt1
	nop
	cmp    	%l1,%i0
	bge  	banflt1
	nop
	cmp    	%l2,%g3
	blt  	banflt2
	nop
	cmp    	%l2,%i0
	bge  	banflt2
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe82
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe82:
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

!
!	FENTRY	llfmul
!
	.seg	"data1"   
	.align	4
.llfmul:	.word    0
	._llfmul = 3
	.seg	"text"
	.align	8
	.global	llfmul
llfmul:
	set	669*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	blt  	banflt1
	nop
	cmp    	%l1,%i0
	bge  	banflt1
	nop
	cmp    	%l2,%g3
	blt  	banflt2
	nop
	cmp    	%l2,%i0
	bge  	banflt2
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe83
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe83:
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

!
!	FENTRY	llfdiv
!
	.seg	"data1"   
	.align	4
.llfdiv:	.word    0
	._llfdiv = 3
	.seg	"text"
	.align	8
	.global	llfdiv
llfdiv:
	set	670*32,%l4
	add    	%i2,%l4,%l4
	cmp    	%l1,%g3
	blt  	banflt1
	nop
	cmp    	%l1,%i0
	bge  	banflt1
	nop
	cmp    	%l2,%g3
	blt  	banflt2
	nop
	cmp    	%l2,%i0
	bge  	banflt2
	nop
	mov   	%l2,%o0
	ldd	[%o0+0],%f0
	set	fzero,%o0
	ld	[%o0+0],%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbe    	ban0dv
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe84
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe84:
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
!	FENTRY	clllsht
!
	.seg	"data1"   
	.align	4
.clllsht:	.word    0
	._clllsht = 1
	.seg	"text"
	.align	8
	.global	clllsht
clllsht:
	ld	[%l7+8],%o0
	ld	[%l7+0],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	cmp  	%o1,0
	bge  	Mspe85
	nop
	neg 	%o1,%o1
	ba       Rspe85
	srl  	%o0,%o1,%o0
Mspe85:	sll  	%o0,%o1,%o0
Rspe85:
	and 	%o0,%l0,%o0
	st   	%o0,[%l7+8]
	inc  	4*1,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cllmul
!
	.seg	"data1"   
	.align	4
.cllmul:	.word    0
	._cllmul = 1
	.seg	"text"
	.align	8
	.global	cllmul
cllmul:
	ld	[%l7+8],%o1
	sll	%o1,16,%o1
	sra	%o1,16,%o1
	ld	[%l7+0],%o0
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
	and 	%o0,%l0,%o0
	st   	%o0,[%l7+8]
	inc  	4*1,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	clldiv
!
	.seg	"data1"   
	.align	4
.clldiv:	.word    0
	._clldiv = 1
	.seg	"text"
	.align	8
	.global	clldiv
clldiv:
	ld	[%l7+8],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	ld	[%l7+0],%o1
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
	set	bfloat,%g3
	ld	[%g3+0],%g3
	and 	%o0,%l0,%o0
	st   	%o0,[%l7+8]
	inc  	4*1,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cllrem
!
	.seg	"data1"   
	.align	4
.cllrem:	.word    0
	._cllrem = 1
	.seg	"text"
	.align	8
	.global	cllrem
cllrem:
	ld	[%l7+8],%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	ld	[%l7+0],%o1
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
	set	bfloat,%g3
	ld	[%g3+0],%g3
	and 	%o0,%l0,%o0
	st   	%o0,[%l7+8]
	inc  	4*1,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cllfadd
!
	.seg	"data1"   
	.align	4
.cllfadd:	.word    0
	._cllfadd = 1
	.seg	"text"
	.align	8
	.global	cllfadd
cllfadd:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe86
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe86:
	ld	[%l7+0],%o0
	ldd	[%o0+0],%f0
	ld	[%l7+8],%o0
	ldd	[%o0+0],%f2
	faddd	%f2,%f0,%f2
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f2,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	st   	%o3,[%l7+8]
	inc  	4*1,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cllfsub
!
	.seg	"data1"   
	.align	4
.cllfsub:	.word    0
	._cllfsub = 1
	.seg	"text"
	.align	8
	.global	cllfsub
cllfsub:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe87
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe87:
	ld	[%l7+0],%o0
	ldd	[%o0+0],%f0
	ld	[%l7+8],%o0
	ldd	[%o0+0],%f2
	fsubd	%f2,%f0,%f2
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f2,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	st   	%o3,[%l7+8]
	inc  	4*1,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cllfmul
!
	.seg	"data1"   
	.align	4
.cllfmul:	.word    0
	._cllfmul = 1
	.seg	"text"
	.align	8
	.global	cllfmul
cllfmul:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe88
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe88:
	ld	[%l7+0],%o0
	ldd	[%o0+0],%f0
	ld	[%l7+8],%o0
	ldd	[%o0+0],%f2
	fmuld	%f2,%f0,%f2
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f2,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	st   	%o3,[%l7+8]
	inc  	4*1,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cllfdiv
!
	.seg	"data1"   
	.align	4
.cllfdiv:	.word    0
	._cllfdiv = 1
	.seg	"text"
	.align	8
	.global	cllfdiv
cllfdiv:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe89
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe89:
	ld	[%l7+0],%o0
	ldd	[%o0+0],%f0
	ld	[%l7+8],%o0
	ldd	[%o0+0],%f2
	fdivd	%f2,%f0,%f2
	set	ffloat,%o3
	ld	[%o3+0],%o3
	ld	[%o3+0],%o0
	std 	%f2,[%o3+0]
	set	ffloat,%o4
	st   	%o0,[%o4+0]
	st   	%o3,[%l7+8]
	inc  	4*1,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
cllret1:
	set	1,%o3
	st   	%o3,[%l7+8]
	inc  	4*1,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cllfeqn
!
	.seg	"data1"   
	.align	4
.cllfeqn:	.word    0
	._cllfeqn = 1
	.seg	"text"
	.align	8
	.global	cllfeqn
cllfeqn:
	ld	[%l7+0],%o0
	ldd	[%o0+0],%f0
	ld	[%l7+8],%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbe    	cllret1
	nop
	st   	%g0,[%l7+8]
	inc  	4*1,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cllfneqn
!
	.seg	"data1"   
	.align	4
.cllfneqn:	.word    0
	._cllfneqn = 1
	.seg	"text"
	.align	8
	.global	cllfneqn
cllfneqn:
	ld	[%l7+0],%o0
	ldd	[%o0+0],%f0
	ld	[%l7+8],%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbne    	cllret1
	nop
	st   	%g0,[%l7+8]
	inc  	4*1,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cllfgt
!
	.seg	"data1"   
	.align	4
.cllfgt:	.word    0
	._cllfgt = 1
	.seg	"text"
	.align	8
	.global	cllfgt
cllfgt:
	ld	[%l7+0],%o0
	ldd	[%o0+0],%f0
	ld	[%l7+8],%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbg    	cllret1
	nop
	st   	%g0,[%l7+8]
	inc  	4*1,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cllfge
!
	.seg	"data1"   
	.align	4
.cllfge:	.word    0
	._cllfge = 1
	.seg	"text"
	.align	8
	.global	cllfge
cllfge:
	ld	[%l7+0],%o0
	ldd	[%o0+0],%f0
	ld	[%l7+8],%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbge    	cllret1
	nop
	st   	%g0,[%l7+8]
	inc  	4*1,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cllflt
!
	.seg	"data1"   
	.align	4
.cllflt:	.word    0
	._cllflt = 1
	.seg	"text"
	.align	8
	.global	cllflt
cllflt:
	ld	[%l7+0],%o0
	ldd	[%o0+0],%f0
	ld	[%l7+8],%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fbl    	cllret1
	nop
	st   	%g0,[%l7+8]
	inc  	4*1,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cllfle
!
	.seg	"data1"   
	.align	4
.cllfle:	.word    0
	._cllfle = 1
	.seg	"text"
	.align	8
	.global	cllfle
cllfle:
	ld	[%l7+0],%o0
	ldd	[%o0+0],%f0
	ld	[%l7+8],%o0
	ldd	[%o0+0],%f2
	fcmpd	%f0,%f2
	nop
	fble    	cllret1
	nop
	st   	%g0,[%l7+8]
	inc  	4*1,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	floatp
!
	.seg	"data1"   
	.align	4
.floatp:	.word    0
	._floatp = 2
	.seg	"text"
	.align	8
	.global	floatp
floatp:
	cmp	%l1,%g3
	blt  	spe90
	nop
	cmp	%l1,%i0
	blt  	floatp2
	nop
spe90:
	mov   	%i2,%l1
floatp2:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	fixp
!
	.seg	"data1"   
	.align	4
.fixp:	.word    0
	._fixp = 2
	.seg	"text"
	.align	8
	.global	fixp
fixp:
	cmp    	%l1,%g3
	blt	fixp2
	nop
	mov   	%i2,%l1
fixp2:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	flplus
!
	.seg	"data1"   
	.align	4
.flplus:	.word    0
	._flplus = 5
	.seg	"text"
	.align	8
	.global	flplus
flplus:
	mov   	%g0,%l1
	ba,a	fplus2
	.align	4
fplus1:
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp	%l2,%g3
	blt  	spe91
	nop
	cmp	%l2,%i0
	blt  	fplus5
	nop
spe91:
	cmp    	%l2,%g3
	bge	fpluser1
	nop
	mov   	%l1,%l3
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
	bne  	fplus4
	nop
fplus2:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	fplus1
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
fplus4:
	mov   	%l3,%l1
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe92
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe92:
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
	ba,a	fplus7
	.align	4
fplus5:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe93
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe93:
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
	ba,a	fplus8
	.align	4
fplus6:
	ld	[%l7+0],%l2
	inc  	4,%l7
fplus7:
	cmp	%l2,%g3
	blt  	spe94
	nop
	cmp	%l2,%i0
	blt  	fplus8
	nop
spe94:
	cmp    	%l2,%g3
	bge	fpluser1
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe95
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe95:
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
fplus8:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe96
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe96:
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
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	fplus6
	nop
fplus9:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
fpluser1:
	mov   	%l2,%l1
fpluser2:
	set	647*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnna
	.align	4

!
!	FENTRY	fldiff
!
	.seg	"data1"   
	.align	4
.fldiff:	.word    0
	._fldiff = 5
	.seg	"text"
	.align	8
fldiff:
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	rzero
	nop
	mov   	%l4,%o1
	cmp    	%o1,1
	bne	fdif1
	nop
	mov   	%g0,%l1
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	dec  	4,%l7
	st   	%l1,[%l7+0]
	inc	1,%l4
fdif1:
	mov   	%g0,%l2
	ba,a	fdif3
	.align	4
fdif2:
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp	%l1,%g3
	blt  	spe97
	nop
	cmp	%l1,%i0
	blt  	fdif5
	nop
spe97:
	cmp    	%l1,%g3
	bge	fdiferr2
	nop
	mov   	%l2,%l3
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
	bne  	fdif4
	nop
fdif3:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	fdif2
	nop
	mov  	0,%l4
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp	%l1,%g3
	blt  	spe98
	nop
	cmp	%l1,%i0
	blt  	fdif10
	nop
spe98:
	cmp    	%l1,%g3
	bge	fdiferr2
	nop
	mov   	%l1,%l3
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
	bne  	fdif91
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
fdif4:
	mov   	%l3,%l2
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe99
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe99:
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
fdif5:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe100
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe100:
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
	ba,a	fdif7
	.align	4
fdif6:
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp	%l1,%g3
	blt  	spe101
	nop
	cmp	%l1,%i0
	blt  	fdif7
	nop
spe101:
	cmp    	%l1,%g3
	bge	fdiferr2
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe102
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe102:
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
fdif7:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe103
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe103:
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
fdif8:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	fdif6
	nop
	mov  	0,%l4
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp	%l1,%g3
	blt  	spe104
	nop
	cmp	%l1,%i0
	blt  	fdif9
	nop
spe104:
	cmp    	%l1,%g3
	bge	fdiferr2
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe105
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe105:
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
fdif9:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe106
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe106:
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
fdif91:
	mov   	%l3,%l1
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe107
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe107:
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
fdif10:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe108
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe108:
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
	ba,a	fdif9
	.align	4
fdiferr1:
	mov   	%l2,%l1
fdiferr2:
	set	649*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnna
	.align	4

!
!	FENTRY	fltimes
!
	.seg	"data1"   
	.align	4
.fltimes:	.word    0
	._fltimes = 5
	.seg	"text"
	.align	8
	.global	fltimes
fltimes:
	set	1,%l1
	ba,a	ftime2
	.align	4
ftime1:
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp	%l2,%g3
	blt  	spe109
	nop
	cmp	%l2,%i0
	blt  	ftime5
	nop
spe109:
	cmp    	%l2,%g3
	bge	ftimerr1
	nop
	mov   	%l1,%l3
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
	bne  	ftime4
	nop
ftime2:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	ftime1
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ftime4:
	mov   	%l3,%l1
ftime5:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe110
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe110:
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
	ba,a	ftime7
	.align	4
ftime6:
	ld	[%l7+0],%l2
	inc  	4,%l7
ftime7:
	cmp	%l2,%g3
	blt  	spe111
	nop
	cmp	%l2,%i0
	blt  	ftime8
	nop
spe111:
	cmp    	%l2,%g3
	bge	ftimerr1
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe112
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe112:
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
ftime8:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe113
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe113:
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
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	ftime6
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
ftimerr1:
	mov   	%l2,%l1
ftimerr2:
	set	650*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnna
	.align	4

!
!	FENTRY	flquo
!
	.seg	"data1"   
	.align	4
.flquo:	.word    0
	._flquo = 3
	.seg	"text"
	.align	8
	.global	flquo
flquo:
	set	651*32,%l4
	add    	%i2,%l4,%l4
	cmp	%l1,%g3
	blt  	spe114
	nop
	cmp	%l1,%i0
	blt  	fquo2
	nop
spe114:
	cmp	%l2,%g3
	blt  	spe115
	nop
	cmp	%l2,%i0
	blt  	fquo3
	nop
spe115:
	cmp    	%l1,%g3
	bge	banmix1
	nop
	cmp    	%l2,%g3
	bge	banmix2
	nop
	mov   	%l2,%o1
	cmp    	%o1,0
	beq	fquoovf
	nop
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
	bne	fquo1
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
	bne  	fquoovf
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
fquo1:
	mov   	%l3,%l1
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe116
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe116:
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
	ba,a	fquo3
	.align	4
fquo2:
	cmp	%l2,%g3
	blt  	spe117
	nop
	cmp	%l2,%i0
	blt  	fquo4
	nop
spe117:
	cmp    	%l2,%g3
	bge	banmix2
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe118
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe118:
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
	ba,a	fquo4
	.align	4
fquo3:
	cmp    	%l1,%g3
	bge	banmix1
	nop
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe119
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe119:
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
fquo4:
	set	ffloat,%o2
	ld	[%o2+0],%o2
	cmp   	%o2,0
	bne	spe120
	nop
	dec  	4,%l7
	call	gcfloat
	st   	%o7,[%l7+0]
	.align	4
spe120:
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
fquoovf:
	mov   	%g0,%l1
	set	651*32,%l2
	add    	%i2,%l2,%l2
	ba,a	err0dv
	.align	4

!
!	FENTRY	exadd
!
	.seg	"data1"   
	.align	4
.exadd:	.word    0
	._exadd = 3
	.seg	"text"
	.align	8
	.global	exadd
exadd:
	set	693*32,%l3
	add    	%i2,%l3,%l3
	mov   	%l1,%o0
	add    	%o0,%l2,%o0
	ld	[%l3+0],%o1
	add    	%o0,%o1,%o0
	mov 	%o0,%o1
	srl  	%o1,16,%o1
	and 	%o1,%l0,%o1
	st   	%o1,[%l3+0]
	and	%o0,%l0,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	exincr
!
	.seg	"data1"   
	.align	4
.exincr:	.word    0
	._exincr = 2
	.seg	"text"
	.align	8
	.global	exincr
exincr:
	set	693*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%o0
	set	1,%o1
	add    	%o0,%o1,%o0
	ld	[%l2+0],%o1
	add    	%o0,%o1,%o0
	mov 	%o0,%o1
	srl  	%o1,16,%o1
	and 	%o1,%l0,%o1
	st   	%o1,[%l2+0]
	and	%o0,%l0,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	exinv
!
	.seg	"data1"   
	.align	4
.exinv:	.word    0
	._exinv = 2
	.seg	"text"
	.align	8
	.global	exinv
exinv:
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	neg	%l1,%l1
	mov   	%l1,%o2
	and 	%l1,%l0,%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	dec	1,%l1
	mov   	%l1,%o2
	and 	%l1,%l0,%l1
	sll	%o2,16,%o3
	sra	%o3,16,%o3
	cmp    	%o3,%o2
	bne  	exinvret
	nop
exinvret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	exmul
!
	.seg	"data1"   
	.align	4
.exmul:	.word    0
	._exmul = 4
	.seg	"text"
	.align	8
	.global	exmul
exmul:
	set	693*32,%l4
	add    	%i2,%l4,%l4
	mov   	%l2,%o0
	mov   	%l1,%o1
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
	add    	%o0,%l3,%o0
	ld	[%l4+0],%o1
	add    	%o0,%o1,%o0
	mov 	%o0,%o1
	srl  	%o1,16,%o1
	and 	%o1,%l0,%o1
	st   	%o1,[%l4+0]
	and	%o0,%l0,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	exdiv
!
	.seg	"data1"   
	.align	4
.exdiv:	.word    0
	._exdiv = 3
	.seg	"text"
	.align	8
	.global	exdiv
exdiv:
	set	693*32,%l3
	add    	%i2,%l3,%l3
	ld	[%l3+0],%o0
	sll  	%o0,16,%o0
	or   	%o0,%l1,%o0
	mov   	%l2,%o1
	set	equobuf,%o2
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
	call 	equo,3
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
	set	equobuf,%o0
	ld	[%o0+0],%o0
	mov   	%o0,%l1
	set	equobuf2,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l3+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	excomp
!
	.seg	"data1"   
	.align	4
.excomp:	.word    0
	._excomp = 3
	.seg	"text"
	.align	8
	.global	excomp
excomp:
	mov   	%l1,%o0
	mov   	%l2,%o1
	cmp    	%o0,%o1
	blt    	excomp1
	nop
	beq   	excomp2
	nop
	ba,a   	excomp3
excomp1:
	set	0xFFFF,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
excomp2:
	mov   	%g0,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
excomp3:
	set	1,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
! end
