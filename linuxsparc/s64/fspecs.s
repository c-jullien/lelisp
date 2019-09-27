!
!	File fspecs.s expansion for sparc arch=v8plus.
!	This file is part of Le-Lisp kernel.
!	Generated on Sat Oct   7 17 18:55:41 
!
	.file	"fspecs.s"
	.align	8 
	.global	mstack
	.global	bvar
	.global	itstate
	.global	itcount
	.global	errfs
	.global	erres
	.global	errnab
	.global	errsym
	.global	errxia
	.global	errwna
	.global	gccons
	.global	cpkgc
	.global	inisymb
	.global	inicst
	.global	dlink
	.global	findtag
	.global	evala1
	.global	apply
	.global	llink
	.global	savea1
	.global	savea2
	.global	savea3
	.global	savea4
	.global	intret
	.global	errname
	.global	intllink
	.global	unbind0
	.global	unbind1
	.global	unbinp1
	.global	unbind2
	.global	unbind3
	.global	unbind4
	.global	unbind5
	.global	unbind6
	.global	unbind7
	.global	unbind8
	.global	unbind9
	.global	unbind10
	.global	evexpg
	.global	unbinp
	.global	evprogn
	.global	evbndext
	.global	bndtrbex
	.global	sysprot
	.global	ffuncall
	.global	evbale
	.global	deset
	.global	loc
	.global	ini_spec
	.seg	"data1"
	.align	4
savits:
	.word 	0
	.seg	"text"
ini_spec:
	.seg	"data1"   
	.align	4
pfsp1:
	.asciz	"schedule"
	.seg	"text"
bfsp1:
	set	8,%l1
	set	pfsp1,%l2
	set	schedule,%l3
	dec	8,%l3
	set	trash,%l4
	set	._schedule,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp2:
	.asciz	"suspend"
	.seg	"text"
bfsp2:
	set	7,%l1
	set	pfsp2,%l2
	set	suspend,%l3
	dec	8,%l3
	set	trash,%l4
	set	._suspend,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp3:
	.asciz	"resume"
	.seg	"text"
bfsp3:
	set	6,%l1
	set	pfsp3,%l2
	set	resume,%l3
	dec	8,%l3
	set	trash,%l4
	set	._resume,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp4:
	.asciz	"tagbody"
	.seg	"text"
bfsp4:
	set	7,%l1
	set	pfsp4,%l2
	set	tagbody,%l3
	dec	8,%l3
	set	trash,%l4
	set	._tagbody,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp5:
	.asciz	"go"
	.seg	"text"
bfsp5:
	set	2,%l1
	set	pfsp5,%l2
	set	go,%l3
	dec	8,%l3
	set	trash,%l4
	set	._go,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp6:
	.asciz	"block"
	.seg	"text"
bfsp6:
	set	5,%l1
	set	pfsp6,%l2
	set	block,%l3
	dec	8,%l3
	set	trash,%l4
	set	._block,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp7:
	.asciz	"return"
	.seg	"text"
bfsp7:
	set	6,%l1
	set	pfsp7,%l2
	set	llret,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llret,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp8:
	.asciz	"return-from"
	.seg	"text"
bfsp8:
	set	11,%l1
	set	pfsp8,%l2
	set	llretf,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llretf,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp9:
	.asciz	"llcp"
	.seg	"text"
bfsp9:
	set 	4,%l1
	set	pfsp9,%l2
	set	367*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	set	367*32,%o3
	add    	%i2,%o3,%o3
	set	cpkgc,%o4
	st   	%o3,[%o4+0]
	.seg	"data1"   
	.align	4
pfsp10:
	.asciz	"cbind0"
	.seg	"text"
bfsp10:
	set	6,%l1
	set	pfsp10,%l2
	set	cbind0,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cbind0,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp11:
	.asciz	"cbind1"
	.seg	"text"
bfsp11:
	set	6,%l1
	set	pfsp11,%l2
	set	cbind1,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cbind1,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp12:
	.asciz	"cbind2"
	.seg	"text"
bfsp12:
	set	6,%l1
	set	pfsp12,%l2
	set	cbind2,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cbind2,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp13:
	.asciz	"cbind3"
	.seg	"text"
bfsp13:
	set	6,%l1
	set	pfsp13,%l2
	set	cbind3,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cbind3,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp14:
	.asciz	"cbindn"
	.seg	"text"
bfsp14:
	set	6,%l1
	set	pfsp14,%l2
	set	cbindn,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cbindn,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	set	unbind1,%l1
	dec	8,%l1
	dec  	4,%l7
	call	loc
	st   	%o7,[%l7+0]
	.align	4
	set	372*32,%l2
	add    	%i2,%l2,%l2
	st   	%l1,[%l2+0]
	.seg	"data1"   
	.align	4
pfsp15:
	.asciz	"cbindl"
	.seg	"text"
bfsp15:
	set	6,%l1
	set	pfsp15,%l2
	set	cbindl,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cbindl,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp16:
	.asciz	"cbinds"
	.seg	"text"
bfsp16:
	set	6,%l1
	set	pfsp16,%l2
	set	cbinds,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cbinds,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp17:
	.asciz	"exit"
	.seg	"text"
bfsp17:
	set	4,%l1
	set	pfsp17,%l2
	set	cexit,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cexit,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp18:
	.asciz	"tag"
	.seg	"text"
bfsp18:
	set	3,%l1
	set	pfsp18,%l2
	set	ctag,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ctag,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	set	unbind3,%l1
	dec	8,%l1
	dec  	4,%l7
	call	loc
	st   	%o7,[%l7+0]
	.align	4
	set	376*32,%l2
	add    	%i2,%l2,%l2
	st   	%l1,[%l2+0]
	.seg	"data1"   
	.align	4
pfsp19:
	.asciz	"prot"
	.seg	"text"
bfsp19:
	set	4,%l1
	set	pfsp19,%l2
	set	cprot,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cprot,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	set	unbind7,%l1
	dec	8,%l1
	dec  	4,%l7
	call	loc
	st   	%o7,[%l7+0]
	.align	4
	set	377*32,%l2
	add    	%i2,%l2,%l2
	st   	%l1,[%l2+0]
	.seg	"data1"   
	.align	4
pfsp20:
	.asciz	"lock"
	.seg	"text"
bfsp20:
	set	4,%l1
	set	pfsp20,%l2
	set	cmplock,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cmplock,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	set	unbind5,%l1
	dec	8,%l1
	dec  	4,%l7
	call	loc
	st   	%o7,[%l7+0]
	.align	4
	set	378*32,%l2
	add    	%i2,%l2,%l2
	st   	%l1,[%l2+0]
	.seg	"data1"   
	.align	4
pfsp21:
	.asciz	"schedule"
	.seg	"text"
bfsp21:
	set	8,%l1
	set	pfsp21,%l2
	set	csched,%l3
	dec	8,%l3
	set	trash,%l4
	set	._csched,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp22:
	.asciz	"block"
	.seg	"text"
bfsp22:
	set	5,%l1
	set	pfsp22,%l2
	set	cblock,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cblock,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp23:
	.asciz	"retfrom"
	.seg	"text"
bfsp23:
	set	7,%l1
	set	pfsp23,%l2
	set	cretfr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cretfr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp24:
	.asciz	"go"
	.seg	"text"
bfsp24:
	set	2,%l1
	set	pfsp24,%l2
	set	cgo,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cgo,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp25:
	.asciz	"tagbody"
	.seg	"text"
bfsp25:
	set	7,%l1
	set	pfsp25,%l2
	set	ctagbody,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ctagbody,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp26:
	.asciz	"ffuncall"
	.seg	"text"
bfsp26:
	set	8,%l1
	set	pfsp26,%l2
	set	cffuncall,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cffuncall,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp27:
	.asciz	"with-interrupts"
	.seg	"text"
bfsp27:
	set	15,%l1
	set	pfsp27,%l2
	set	cwithit,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cwithit,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp28:
	.asciz	"without-interrupts"
	.seg	"text"
bfsp28:
	set	18,%l1
	set	pfsp28,%l2
	set	cwithnoit,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cwithnoit,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp29:
	.asciz	"nlist"
	.seg	"text"
bfsp29:
	set	5,%l1
	set	pfsp29,%l2
	set	llcpnlist,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llcpnlist,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp30:
	.asciz	"errwna"
	.seg	"text"
bfsp30:
	set	6,%l1
	set	pfsp30,%l2
	set	llcperwna,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llcperwna,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp31:
	.asciz	"dlink"
	.seg	"text"
bfsp31:
	set 	5,%l1
	set	pfsp31,%l2
	set	389*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	set	dlink,%l1
	dec  	4,%l7
	call	loc
	st   	%o7,[%l7+0]
	.align	4
	set	389*32,%l2
	add    	%i2,%l2,%l2
	st   	%l1,[%l2+0]
	.seg	"data1"   
	.align	4
pfsp32:
	.asciz	"llink"
	.seg	"text"
bfsp32:
	set 	5,%l1
	set	pfsp32,%l2
	set	390*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	set	llink,%l1
	dec  	4,%l7
	call	loc
	st   	%o7,[%l7+0]
	.align	4
	set	390*32,%l2
	add    	%i2,%l2,%l2
	st   	%l1,[%l2+0]
	.seg	"data1"   
	.align	4
pfsp33:
	.asciz	"itcount"
	.seg	"text"
bfsp33:
	set 	7,%l1
	set	pfsp33,%l2
	set	391*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	set	itcount,%l1
	dec  	4,%l7
	call	loc
	st   	%o7,[%l7+0]
	.align	4
	set	391*32,%l2
	add    	%i2,%l2,%l2
	st   	%l1,[%l2+0]
	add    	%i2,7*32,%o3
	set	cpkgc,%o4
	st   	%o3,[%o4+0]
	.seg	"data1"   
	.align	4
pfsp34:
	.asciz	"n"
	.seg	"text"
bfsp34:
	set 	1,%l1
	set	pfsp34,%l2
	set	392*32,%l3
	add    	%i2,%l3,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%l2
	cmp    	%i2,%g4
	bne    	fsp35
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp35:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
	add    	%i2,1*32,%o3
	st   	%o3,[%l1+0]
	st   	%l2,[%l1+16]
	set	cpkgc,%o4
	st   	%i2,[%o4+0]
	.seg	"data1"   
	.align	4
pfsp36:
	.asciz	"fibd"
	.seg	"text"
bfsp36:
	set	4,%l1
	set	pfsp36,%l2
	set	fibd,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fibd,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp37:
	.asciz	"fibl"
	.seg	"text"
bfsp37:
	set	4,%l1
	set	pfsp37,%l2
	set	fibl,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fibl,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pfsp38:
	.asciz	"fibml"
	.seg	"text"
bfsp38:
	set	5,%l1
	set	pfsp38,%l2
	set	fibml,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fibml,%o0
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

!
!	FENTRY	schedule
!
	.seg	"data1"   
	.align	4
.schedule:	.word    0
	._schedule = 6
	.seg	"text"
	.align	8
	.global	schedule
schedule:
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfs
	nop
	dec  	4,%l7
	ld	[%l1+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind8,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	set	359*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	ba,a	evexpg
	.align	4

!
!	FENTRY	suspend
!
	.seg	"data1"   
	.align	4
.suspend:	.word    0
	._suspend = 1
	.seg	"text"
	.align	8
	.global	suspend
suspend:
	set	itstate,%o3
	ld	[%o3+0],%o3
	set	savits,%o4
	st   	%o3,[%o4+0]
	set	itstate,%o4
	st   	%g0,[%o4+0]
	mov   	%i2,%l1
	ba,a	sus00
	.align	4
sus000:
	cmp    	%i2,%g4
	bne    	fsp39
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp39:
	st   	%l4,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l2,[%o2+4]
	mov   	%o2,%l2
	cmp    	%i2,%g4
	bne    	fsp40
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp40:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
sus00:
	set	dlink,%l3
	ld	[%l3+0],%l3
	mov   	%i2,%l2
	ba,a	sus02
	.align	4
sus01:
	ld	[%l7+0],%l4
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	fsp41
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp41:
	st   	%l4,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l2,[%o2+4]
	mov   	%o2,%l2
sus02:
	mov   	%l7,%l4
	cmp	%l4,%l3
	bne	sus01
	nop
	cmp    	%i2,%g4
	bne    	fsp42
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp42:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	mov   	%i2,%l2
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	dlink,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	set	unbind0,%o1
	dec	8,%o1
	cmp	%l4,%o1
	beq	susb0
	nop
	set	unbind1,%o1
	dec	8,%o1
	cmp	%l4,%o1
	beq	susb1
	nop
	set	unbind2,%o1
	dec	8,%o1
	cmp	%l4,%o1
	beq	susb2
	nop
	set	unbind3,%o1
	dec	8,%o1
	cmp	%l4,%o1
	beq	susb3
	nop
	set	unbind4,%o1
	dec	8,%o1
	cmp	%l4,%o1
	beq	susb4
	nop
	set	unbind5,%o1
	dec	8,%o1
	cmp	%l4,%o1
	beq	susb5
	nop
	set	unbind6,%o1
	dec	8,%o1
	cmp	%l4,%o1
	beq	susb6
	nop
	set	unbind7,%o1
	dec	8,%o1
	cmp	%l4,%o1
	beq	susb7
	nop
	set	unbind8,%o1
	dec	8,%o1
	cmp	%l4,%o1
	beq	susb8
	nop
	set	unbind9,%o1
	dec	8,%o1
	cmp	%l4,%o1
	beq	susb9
	nop
	set	unbind10,%o1
	dec	8,%o1
	cmp	%l4,%o1
	beq	susb10
	nop
	.seg	"data1"   
	.align	4
sfsp43:	.asciz	" error SUSPN "
	.seg	"text"
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	set	sfsp43,%o1
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
susb0:
	ba,a	erres
	.align	4
susb1:
	ld	[%l7+8],%l2
	dec  	4,%l7
	call	sus100
	st   	%o7,[%l7+0]
	.align	4
	cmp    	%i2,%g4
	bne    	fsp44
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp44:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
	set	savea1,%o4
	st   	%l1,[%o4+0]
	ld	[%l7+12],%l4
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	add	%l4,4,%l4
	and 	%l4,%l0,%l4
	mov   	%g0,%l3
	mov   	%i2,%l2
susb11:
	mov   	%l3,%o0
	sll 	%o0,2,%o0
	add    	%o0,%l7,%o0
	ld	[%o0+0],%l1
	cmp    	%i2,%g4
	bne    	fsp45
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp45:
	st   	%l1,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l2,[%o2+4]
	mov   	%o2,%l2
	inc	1,%l3
susb12:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	dec  	%l4
	cmp   	%l4,0
	bgt  	susb11
	nop
	mov  	0,%l4
	set	savea1,%l1
	ld	[%l1+0],%l1
	set	susb13,%l3
	dec	8,%l3
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	ba,a	unbinp1
	.align	4
susb13:
	set	unbind1,%l4
	dec	8,%l4
	ba,a	sus000
	.align	4
sus100:
	cmp    	%l2,%i3
	blt	sus101
	nop
	dec  	4,%l7
	ld	[%l2+0],%o0
	st   	%o0,[%l7+0]
	ld	[%l2+4],%l2
	dec  	4,%l7
	call	sus100
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o0
	st   	%l2,[%l7+0]
	mov 	%o0,%l2
	dec  	4,%l7
	call	sus100
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	fsp46
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp46:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%l3,[%l2+4]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
sus101:
	cmp    	%l2,%i2
	beq	sus102
	nop
	ld	[%l2+0],%l2
sus102:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
susb2:
	ld	[%l7+0],%l3
	inc  	4,%l7
	cmp	%l3,%g0
	beq	sus23
	nop
	lduh	[%l3+24],%l4
	cmp    	%i2,%g4
	bne    	fsp47
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp47:
	st   	%l4,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l2,[%o2+4]
	mov   	%o2,%l2
	ld	[%l7+0],%l4
	inc  	4,%l7
	sth   	%l4,[%l3+24]
	cmp    	%i2,%g4
	bne    	fsp48
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp48:
	ld	[%l3+8],%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l2,[%o2+4]
	mov   	%o2,%l2
	ld	[%l7+0],%o0
	st   	%o0,[%l3+8]
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	fsp49
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp49:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l2,[%o2+4]
	mov   	%o2,%l2
	ba,a	susb2
	.align	4
sus23:
	set	unbind2,%l4
	dec	8,%l4
	ba,a	sus000
	.align	4
susb3:
susb5:
susb6:
susb7:
susb9:
susb10:
	ld	[%l7+0],%l2
	inc  	4,%l7
	ba,a	sus000
	.align	4
susb4:
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	fsp50
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp50:
	st   	%l3,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l2,[%o2+4]
	mov   	%o2,%l2
	ba,a	sus000
	.align	4
susb8:
	ld	[%l7+0],%l3
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind8,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	cmp    	%i2,%g4
	bne    	fsp51
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp51:
	st   	%l1,[%g4+0]
	mov   	%g4,%l1
	ld	[%g4+4],%g4
	st   	%i2,[%l1+4]
	mov   	%l1,%l2
	mov   	%l3,%l1
	set	savits,%o3
	ld	[%o3+0],%o3
	set	itstate,%o4
	st   	%o3,[%o4+0]
	ba,a	apply
	.align	4

!
!	FENTRY	resume
!
	.seg	"data1"   
	.align	4
.resume:	.word    0
	._resume = 2
	.seg	"text"
	.align	8
	.global	resume
resume:
	set	itstate,%o3
	ld	[%o3+0],%o3
	set	savits,%o4
	st   	%o3,[%o4+0]
	set	itstate,%o4
	st   	%g0,[%o4+0]
	cmp    	%l1,%i2
	beq	resso
	nop
restes:
	set	dlink,%l7
	ld	[%l7+0],%l7
	ld	[%l7+0],%l3
	set	unbind8,%o1
	dec	8,%o1
	cmp	%l3,%o1
	beq	resfin
	nop
	set	restes,%l3
	dec	8,%l3
	ba,a	unbinp
	.align	4
res00:
	ld	[%l1+0],%l2
	ld	[%l1+4],%l1
	ld	[%l2+0],%l3
	ld	[%l2+4],%l2
	set	unbind2,%o0
	dec	8,%o0
	cmp	%o0,%l3
	beq	res20
	nop
	set	unbind4,%o0
	dec	8,%o0
	cmp	%o0,%l3
	beq	res40
	nop
	set	unbind1,%o0
	dec	8,%o0
	cmp	%o0,%l3
	bne	resn1
	nop
res11:
	cmp    	%l2,%i2
	beq	res12
	nop
	dec  	4,%l7
	ld	[%l2+0],%o0
	st   	%o0,[%l7+0]
	ld	[%l2+4],%l2
	ba,a	res11
	.align	4
res12:
	ld	[%l7+0],%o0
	set	llink,%o4
	st   	%o0,[%o4+0]
	ld	[%l1+0],%l2
	dec  	4,%l7
	ld	[%l1+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l7+12],%l1
	dec  	4,%l7
	call	deset
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind1,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	ba,a	resfin
	.align	4
res20:
	dec  	4,%l7
	st   	%g0,[%l7+0]
res21:
	cmp    	%l2,%i2
	beq	res22
	nop
	ld	[%l2+0],%l3
	ld	[%l2+4],%l2
	dec  	4,%l7
	ld	[%l3+8],%o0
	st   	%o0,[%l7+0]
	ld	[%l2+0],%o3
	st   	%o3,[%l3+8]
	ld	[%l2+4],%l2
	lduh	[%l3+24],%l4
	dec  	4,%l7
	st   	%l4,[%l7+0]
	ld	[%l2+0],%l4
	sth   	%l4,[%l3+24]
	ld	[%l2+4],%l2
	dec  	4,%l7
	st   	%l3,[%l7+0]
	ba,a	res21
	.align	4
res22:
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind2,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	ba,a	resfin
	.align	4
res40:
	dec  	4,%l7
	ld	[%l2+4],%o0
	st   	%o0,[%l7+0]
	ld	[%l2+0],%l2
resn1:
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
resfin:
	ld	[%l1+0],%l2
	ld	[%l1+4],%l1
res14:
	cmp    	%l2,%i2
	beq	res15
	nop
	dec  	4,%l7
	ld	[%l2+0],%o0
	st   	%o0,[%l7+0]
	ld	[%l2+4],%l2
	ba,a	res14
	.align	4
res15:
	ld	[%l1+4],%o0
	cmp    	%o0,%i2
	bne	res00
	nop
resso:
	mov   	%i2,%l2
	mov   	%i2,%l3
	mov   	%i2,%l4
	set	savits,%o3
	ld	[%o3+0],%o3
	set	itstate,%o4
	st   	%o3,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	tagbody
!
	.seg	"data1"   
	.align	4
.tagbody:	.word    0
	._tagbody = 6
	.seg	"text"
	.align	8
	.global	tagbody
tagbody:
	cmp    	%l1,%i3
	blt	tagbdr
	nop
	mov   	%l1,%l3
	mov   	%g0,%l4
tagbdr2:
	ld	[%l3+0],%l2
	ld	[%l3+4],%l3
	cmp    	%l2,%i3
	bge	tagbdr3
	nop
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	inc	1,%l4
tagbdr3:
	cmp    	%l3,%i3
	bge	tagbdr2
	nop
	dec  	4,%l7
	st   	%l4,[%l7+0]
	mov   	%g0,%l2
	cmp    	%i2,%g4
	bne    	fsp52
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp52:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind9,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	set	dlink,%o3
	ld	[%o3+0],%o3
	st   	%o3,[%l2+4]
	cmp    	%i2,%g4
	bne    	fsp53
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp53:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	set	llink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%o2+4]
	set	llink,%o4
	st   	%o2,[%o4+0]
	mov   	%l1,%l2
	ba,a	tagbd4
	.align	4
tagbd2:
	ld	[%l2+0],%l1
	cmp    	%l1,%i3
	blt	tagbd3
	nop
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	call	evala1
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
tagbd3:
	ld	[%l2+4],%l2
tagbd4:
	cmp    	%l2,%i3
	bge	tagbd2
	nop
tagbdr:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	go
!
	.seg	"data1"   
	.align	4
.go:	.word    0
	._go = 6
	.seg	"text"
	.align	8
	.global	go
go:
	ld	[%l1+0],%l1
llgof1:
	set	llink,%l4
	ld	[%l4+0],%l4
	ba,a	llgof6
	.align	4
llgof2:
	ld	[%l4+0],%l3
	ld	[%l3+0],%o0
	cmp	%o0,%g0
	bne	llgof5
	nop
	ld	[%l3+4],%l2
	cmp    	%l2,%i2
	beq	llgof5
	nop
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	inc  	4*3,%l2
	ld	[%l2+0],%l4
	inc  	4,%l2
	ba,a	llgof4
	.align	4
llgof3:
	ld	[%l2+0],%l3
	cmp	%l3,%l1
	beq	llgof7
	nop
	inc  	4*2,%l2
llgof4:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	llgof3
	nop
	inc  	4*1,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
llgof5:
	ld	[%l4+4],%l4
llgof6:
	cmp    	%l4,%i3
	bge	llgof2
	nop
	set	363*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnab
	.align	4
llgof7:
	inc  	4*1,%l2
	ld	[%l2+0],%l2
	ld	[%l7+0],%l1
llgof8:
	set	dlink,%l4
	ld	[%l4+0],%l4
	mov   	%l4,%l7
	cmp	%l4,%l1
	beq	llgof9
	nop
	set	llgof8,%l3
	dec	8,%l3
	ba,a	unbinp
	.align	4
llgof9:
	.global	econs
	set	bnumb,%o1
	ld	[%o1+0],%o1
	cmp	%l2,%o1
	blt  	fsp54
	nop
	set	econs,%o1
	ld	[%o1+0],%o1
	cmp	%l2,%o1
	blt  	tagbd4
	nop
fsp54:
	mov   	%l2,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4

!
!	FENTRY	block
!
	.seg	"data1"   
	.align	4
.block:	.word    0
	._block = 6
	.seg	"text"
	.align	8
	.global	block
block:
	ld	[%l1+0],%l2
	cmp    	%l2,%i2
	blt  	blckerr
	nop
	cmp    	%l2,%i3
	bge  	blckerr
	nop
	cmp    	%i2,%g4
	bne    	fsp55
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp55:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
	mov   	%l2,%l3
	cmp    	%i2,%g4
	bne    	fsp56
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp56:
	set	1,%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l2,[%o2+4]
	mov   	%o2,%l2
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind10,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	set	dlink,%o3
	ld	[%o3+0],%o3
	st   	%o3,[%l3+4]
	cmp    	%i2,%g4
	bne    	fsp57
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp57:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	set	llink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%o2+4]
	set	llink,%o4
	st   	%o2,[%o4+0]
	set	364*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	ba,a	evexpg
	.align	4
blckerr:
	mov   	%l2,%l1
	set	364*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errsym
	.align	4

!
!	FENTRY	llret
!
	.seg	"data1"   
	.align	4
.llret:	.word    0
	._llret = 6
	.seg	"text"
	.align	8
	.global	llret
llret:
	mov   	%i2,%l2
	dec  	4,%l7
	st   	%l2,[%l7+0]
	set	365*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
	ba,a	llretf1
	.align	4

!
!	FENTRY	llretf
!
	.seg	"data1"   
	.align	4
.llretf:	.word    0
	._llretf = 6
	.seg	"text"
	.align	8
	.global	llretf
llretf:
	dec  	4,%l7
	ld	[%l1+0],%o0
	st   	%o0,[%l7+0]
	ld	[%l1+4],%l1
	set	366*32,%o3
	add    	%i2,%o3,%o3
	set	errname,%o4
	st   	%o3,[%o4+0]
llretf1:
	dec  	4,%l7
	call	evprogn
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
llretg:
	set	llink,%l4
	ld	[%l4+0],%l4
	ba,a	llretf4
	.align	4
llretf2:
	ld	[%l4+0],%l3
	ld	[%l3+0],%o0
	set	1,%o1
	cmp	%o0,%o1
	bne	llretf3
	nop
	ld	[%l3+4],%l3
	ld	[%l3+0],%o0
	cmp	%o0,%l2
	beq	llretf6
	nop
llretf3:
	ld	[%l4+4],%l4
llretf4:
	cmp    	%l4,%i3
	bge	llretf2
	nop
	mov   	%l2,%l1
	set	366*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errnab
	.align	4
llretf6:
	ld	[%l3+4],%o0
	cmp    	%o0,%i2
	bne	llretr2
	nop
	mov   	%l2,%l1
	set	366*32,%l2
	add    	%i2,%l2,%l2
	ba,a	errxia
	.align	4
llretr2:
	ld	[%l3+4],%l2
llretr3:
	set	dlink,%l4
	ld	[%l4+0],%l4
	mov   	%l4,%l7
	ld	[%l7+0],%l3
	set	unbind10,%o1
	dec	8,%o1
	cmp	%l3,%o1
	bne	llretr4
	nop
	cmp	%l2,%l4
	beq	llretr9
	nop
llretr4:
	set	llretr3,%l3
	dec	8,%l3
	ba,a	unbinp
	.align	4
llretr9:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cbind0
!
	.seg	"data1"   
	.align	4
.cbind0:	.word    0
	._cbind0 = 1
	.seg	"text"
	.align	8
	.global	cbind0
cbind0:
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	fsp58
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
fsp58:
	ld	[%l7+4],%o0
	set	unbind1,%o1
	dec	8,%o1
	cmp	%o0,%o1
	bne	cbind0g
	nop
	ld	[%l7+16],%o0
	cmp	%o0,%l4
	bne	cbind0g
	nop
	set	llink,%o4
	st   	%i2,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
cbind0g:
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfs
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
	dec  	4,%l7
	st   	%g0,[%l7+0]
	dec  	4,%l7
	st   	%i2,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	set	llink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	set	llink,%o4
	st   	%i2,[%o4+0]
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind1,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	mov   	%l2,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4

!
!	FENTRY	cbind1
!
	.seg	"data1"   
	.align	4
.cbind1:	.word    0
	._cbind1 = 1
	.seg	"text"
	.align	8
	.global	cbind1
cbind1:
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	fsp59
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
fsp59:
	ld	[%l7+4],%o0
	set	unbind1,%o1
	dec	8,%o1
	cmp	%o0,%o1
	bne	cbind1g
	nop
	ld	[%l7+16],%o0
	cmp	%o0,%l4
	bne	cbind1g
	nop
	ld	[%l3+0],%l2
	st   	%l1,[%l2+0]
	set	llink,%o4
	st   	%i2,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
cbind1g:
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfs
	nop
	ld	[%l7+0],%l2
	dec  	4,%l7
	set	1,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	ld	[%l3+0],%l4
	ld	[%l4+0],%o3
	st   	%o3,[%l7+12]
	st   	%l1,[%l4+0]
	dec  	4,%l7
	set	llink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	set	llink,%o4
	st   	%i2,[%o4+0]
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind1,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	mov   	%l2,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4

!
!	FENTRY	cbind2
!
	.seg	"data1"   
	.align	4
.cbind2:	.word    0
	._cbind2 = 1
	.seg	"text"
	.align	8
	.global	cbind2
cbind2:
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	fsp60
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
fsp60:
	ld	[%l7+4],%o0
	set	unbind1,%o1
	dec	8,%o1
	cmp	%o0,%o1
	bne	cbind2g
	nop
	ld	[%l7+16],%o0
	cmp	%o0,%l4
	bne	cbind2g
	nop
	ld	[%l3+0],%l4
	st   	%l1,[%l4+0]
	ld	[%l3+4],%l4
	ld	[%l4+0],%l3
	st   	%l2,[%l3+0]
	set	llink,%o4
	st   	%i2,[%o4+0]
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
cbind2g:
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfs
	nop
	ld	[%l7+0],%o0
	set	savea2,%o4
	st   	%o0,[%o4+0]
	set	0xFFFF,%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll  	%o0,2,%o0
	add    	%l7,%o0,%l7
	dec  	4,%l7
	set	2,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l4,[%l7+0]
	ld	[%l3+0],%l4
	ld	[%l4+0],%o3
	st   	%o3,[%l7+16]
	st   	%l1,[%l4+0]
	ld	[%l3+4],%l4
	ld	[%l4+0],%l4
	ld	[%l4+0],%o3
	st   	%o3,[%l7+12]
	st   	%l2,[%l4+0]
	dec  	4,%l7
	set	llink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	set	llink,%o4
	st   	%i2,[%o4+0]
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind1,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	set	savea2,%o7
	ld	[%o7+0],%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4

!
!	FENTRY	cbind3
!
	.seg	"data1"   
	.align	4
.cbind3:	.word    0
	._cbind3 = 1
	.seg	"text"
	.align	8
	.global	cbind3
cbind3:
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	fsp61
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
fsp61:
	set	savea3,%o4
	st   	%l3,[%o4+0]
	ld	[%l7+0],%o0
	set	savea2,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	savea4,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	unbind1,%o1
	dec	8,%o1
	cmp	%o0,%o1
	bne	cbind3g
	nop
	ld	[%l7+12],%o0
	set	savea4,%o1
	ld	[%o1+0],%o1
	cmp	%o0,%o1
	bne	cbind3g
	nop
	ld	[%l4+0],%l3
	st   	%l1,[%l3+0]
	ld	[%l4+4],%l4
	ld	[%l4+0],%l3
	st   	%l2,[%l3+0]
	ld	[%l4+4],%l4
	ld	[%l4+0],%l4
	set	savea3,%l3
	ld	[%l3+0],%l3
	st   	%l3,[%l4+0]
	set	llink,%o4
	st   	%i2,[%o4+0]
	set	savea2,%o7
	ld	[%o7+0],%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
cbind3g:
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfs
	nop
	set	0xFFFD,%o0
	sll	%o0,16,%o0
	sra	%o0,16,%o0
	sll  	%o0,2,%o0
	add    	%l7,%o0,%l7
	set	savea1,%o4
	st   	%l4,[%o4+0]
	ld	[%l4+0],%l3
	ld	[%l3+0],%o3
	st   	%o3,[%l7+8]
	st   	%l1,[%l3+0]
	ld	[%l4+4],%l4
	ld	[%l4+0],%l3
	ld	[%l3+0],%o3
	st   	%o3,[%l7+4]
	st   	%l2,[%l3+0]
	ld	[%l4+4],%l4
	ld	[%l4+0],%l4
	ld	[%l4+0],%o3
	st   	%o3,[%l7+0]
	set	savea3,%l3
	ld	[%l3+0],%l3
	st   	%l3,[%l4+0]
	dec  	4,%l7
	set	3,%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	savea1,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	savea4,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	llink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	set	llink,%o4
	st   	%i2,[%o4+0]
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind1,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	set	savea2,%o7
	ld	[%o7+0],%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4

!
!	FENTRY	cbindn
!
	.seg	"data1"   
	.align	4
.cbindn:	.word    0
	._cbindn = 1
	.seg	"text"
	.align	8
	.global	cbindn
cbindn:
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	fsp62
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
fsp62:
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfs
	nop
	set	intllink,%o4
	st   	%i2,[%o4+0]
cbindnc:
	ld	[%l7+0],%o0
	set	intret,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
cbindnn:
	set	savea2,%o4
	st   	%l3,[%o4+0]
	set	savea4,%o4
	st   	%l4,[%o4+0]
	set	savea1,%o4
	st   	%l2,[%o4+0]
	set	errname,%o4
	st   	%l2,[%o4+0]
	ba,a	evbndext
	.align	4

!
!	FENTRY	cbindl
!
	.seg	"data1"   
	.align	4
.cbindl:	.word    0
	._cbindl = 1
	.seg	"text"
	.align	8
	.global	cbindl
cbindl:
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	fsp63
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
fsp63:
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfs
	nop
	set	llink,%o3
	ld	[%o3+0],%o3
	set	intllink,%o4
	st   	%o3,[%o4+0]
	ba,a	cbindnc
	.align	4

!
!	FENTRY	cbinds
!
	.seg	"data1"   
	.align	4
.cbinds:	.word    0
	._cbinds = 1
	.seg	"text"
	.align	8
	.global	cbinds
cbinds:
	set	itcount,%o0
	ld	[%o0+0],%o0
	cmp     %o0,0
	beq    	fsp64
	nop
	dec  	4,%l7
	call	ithard
	st   	%o7,[%l7+0]
	.align	4
fsp64:
	ld	[%l7+0],%o0
	set	intret,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	set	intllink,%o4
	st   	%i2,[%o4+0]
	set	savea2,%o4
	st   	%l3,[%o4+0]
	set	savea1,%o4
	st   	%l2,[%o4+0]
	set	errname,%o4
	st   	%l2,[%o4+0]
	ba,a	bndtrbex
	.align	4

!
!	FENTRY	ctag
!
	.seg	"data1"   
	.align	4
.ctag:	.word    0
	._ctag = 1
	.seg	"text"
	.align	8
	.global	ctag
ctag:
	ld	[%l7+0],%l2
	inc  	4,%l7
	dec  	4,%l7
	st   	%l1,[%l7+0]
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
	mov   	%l2,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4

!
!	FENTRY	cprot
!
	.seg	"data1"   
	.align	4
.cprot:	.word    0
	._cprot = 1
	.seg	"text"
	.align	8
	.global	cprot
cprot:
	ba,a	sysprot
	.align	4

!
!	FENTRY	cmplock
!
	.seg	"data1"   
	.align	4
.cmplock:	.word    0
	._cmplock = 1
	.seg	"text"
	.align	8
	.global	cmplock
cmplock:
	ld	[%l7+0],%l2
	inc  	4,%l7
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind5,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	mov   	%l2,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4

!
!	FENTRY	csched
!
	.seg	"data1"   
	.align	4
.csched:	.word    0
	._csched = 1
	.seg	"text"
	.align	8
	.global	csched
csched:
	set	mstack,%o0
	ld	[%o0+0],%o0
	cmp    	%l7,%o0
	blt  	errfs
	nop
	ld	[%l7+0],%l2
	inc  	4,%l7
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind8,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	mov   	%l2,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4

!
!	FENTRY	cblock
!
	.seg	"data1"   
	.align	4
.cblock:	.word    0
	._cblock = 1
	.seg	"text"
	.align	8
	.global	cblock
cblock:
	mov   	%l1,%l2
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l2,%i2
	blt  	blckerr
	nop
	cmp    	%l2,%i3
	bge  	blckerr
	nop
	cmp    	%i2,%g4
	bne    	fsp65
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp65:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
	mov   	%l2,%l3
	cmp    	%i2,%g4
	bne    	fsp66
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp66:
	set	1,%o0
	st   	%o0,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l2,[%o2+4]
	mov   	%o2,%l2
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind10,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	set	dlink,%o3
	ld	[%o3+0],%o3
	st   	%o3,[%l3+4]
	cmp    	%i2,%g4
	bne    	fsp67
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp67:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	set	llink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%o2+4]
	set	llink,%o4
	st   	%o2,[%o4+0]
	mov   	%l1,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4

!
!	FENTRY	cexit
!
	.seg	"data1"   
	.align	4
.cexit:	.word    0
	._cexit = 1
	.seg	"text"
	.align	8
	.global	cexit
cexit:
	ba,a	findtag
	.align	4

!
!	FENTRY	cretfr
!
	.seg	"data1"   
	.align	4
.cretfr:	.word    0
	._cretfr = 1
	.seg	"text"
	.align	8
	.global	cretfr
cretfr:
	ba,a	llretg
	.align	4

!
!	FENTRY	cgo
!
	.seg	"data1"   
	.align	4
.cgo:	.word    0
	._cgo = 1
	.seg	"text"
	.align	8
	.global	cgo
cgo:
	ba,a	llgof1
	.align	4

!
!	FENTRY	ctagbody
!
	.seg	"data1"   
	.align	4
.ctagbody:	.word    0
	._ctagbody = 1
	.seg	"text"
	.align	8
	.global	ctagbody
ctagbody:
	ld	[%l7+0],%l1
	inc  	4,%l7
	mov   	%g0,%l2
	cmp    	%i2,%g4
	bne    	fsp68
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp68:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	set	dlink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	dec  	4,%l7
	set	unbind9,%o0
	dec	8,%o0
	st   	%o0,[%l7+0]
	set	dlink,%o4
	st   	%l7,[%o4+0]
	set	dlink,%o3
	ld	[%o3+0],%o3
	st   	%o3,[%l2+4]
	cmp    	%i2,%g4
	bne    	fsp69
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp69:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	set	llink,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%o2+4]
	set	llink,%o4
	st   	%o2,[%o4+0]
	mov   	%l1,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4

!
!	FENTRY	cffuncall
!
	.seg	"data1"   
	.align	4
.cffuncall:	.word    0
	._cffuncall = 1
	.seg	"text"
	.align	8
	.global	cffuncall
cffuncall:
	ba,a	ffuncall
	.align	4

!
!	FENTRY	cwithit
!
	.seg	"data1"   
	.align	4
.cwithit:	.word    0
	._cwithit = 1
	.seg	"text"
	.align	8
	.global	cwithit
cwithit:
	ld	[%l7+0],%l1
	inc  	4,%l7
	dec  	4,%l7
	set	itstate,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	set	cwithit1,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	itstate,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
cwithit1:
	set	1,%o3
	set	itstate,%o4
	st   	%o3,[%o4+0]
	mov   	%l1,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4

!
!	FENTRY	cwithnoit
!
	.seg	"data1"   
	.align	4
.cwithnoit:	.word    0
	._cwithnoit = 1
	.seg	"text"
	.align	8
	.global	cwithnoit
cwithnoit:
	ld	[%l7+0],%l1
	inc  	4,%l7
	dec  	4,%l7
	set	itstate,%o0
	ld	[%o0+0],%o0
	st   	%o0,[%l7+0]
	set	cwithno1,%l3
	dec	8,%l3
	dec  	4,%l7
	call	sysprot
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o0
	set	itstate,%o4
	st   	%o0,[%o4+0]
	inc  	4,%l7
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4
cwithno1:
	set	itstate,%o4
	st   	%g0,[%o4+0]
	mov   	%l1,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4

!
!	FENTRY	llcpnlist
!
	.seg	"data1"   
	.align	4
.llcpnlist:	.word    0
	._llcpnlist = 1
	.seg	"text"
	.align	8
	.global	llcpnlist
llcpnlist:
	mov   	%i2,%l1
	cmp	%l4,%g0
	bne	llcpnl1
	nop
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
llcpnl1:
	ld	[%l7+0],%l3
	inc  	4,%l7
	ba,a	llcpnl3
	.align	4
llcpnl2:
	ld	[%l7+0],%l2
	inc  	4,%l7
	cmp    	%i2,%g4
	bne    	fsp70
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
fsp70:
	st   	%l2,[%g4+0]
	mov   	%g4,%o2
	ld	[%g4+4],%g4
	st   	%l1,[%o2+4]
	mov   	%o2,%l1
llcpnl3:
	sll	%l4,16,%l4
	sra	%l4,16,%l4
	deccc  	1,%l4
	and 	%l4,%l0,%l4
	bge  	llcpnl2
	nop
	mov   	%l3,%o7
	inc	8,%o7
	jmp    	%o7
	nop
	.align	4

!
!	FENTRY	llcperwna
!
	.seg	"data1"   
	.align	4
.llcperwna:	.word    0
	._llcperwna = 3
	.seg	"text"
	.align	8
	.global	llcperwna
llcperwna:
	mov   	%l1,%l3
	mov   	%l2,%l1
	mov   	%l3,%l2
	ba,a	errwna
	.align	4

!
!	FENTRY	fibd
!
	.seg	"data1"   
	.align	4
.fibd:	.word    0
	._fibd = 2
	.seg	"text"
	.align	8
	.global	fibd
fibd:
	set	392*32,%l3
	add    	%i2,%l3,%l3
	ld	[%l3+16],%l3
	set	393*32,%l4
	add    	%i2,%l4,%l4
	dec  	4,%l7
	call	cbind1
	st   	%o7,[%l7+0]
	.align	4
	mov   	%l1,%o1
	cmp    	%o1,1
	bne	fibd2
	nop
	set	1,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
fibd2:
	mov   	%l1,%o1
	cmp    	%o1,2
	bne	fibd3
	nop
	set	1,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
fibd3:
	dec	1,%l1
	dec  	4,%l7
	call	fibd
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	set	392*32,%l1
	add    	%i2,%l1,%l1
	ld	[%l1+0],%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sub	%l1,2,%l1
	and 	%l1,%l0,%l1
	dec  	4,%l7
	call	fibd
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	add	%l1,%o1,%l1
	and 	%l1,%l0,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	fibl
!
	.seg	"data1"   
	.align	4
.fibl:	.word    0
	._fibl = 2
	.seg	"text"
	.align	8
	.global	fibl
fibl:
	dec  	4,%l7
	st   	%l1,[%l7+0]
	mov   	%l1,%o1
	cmp    	%o1,1
	bne	fibl2
	nop
	set	1,%l1
	ba,a	fibl9
	.align	4
fibl2:
	mov   	%l1,%o1
	cmp    	%o1,2
	bne	fibl3
	nop
	set	1,%l1
	ba,a	fibl9
	.align	4
fibl3:
	dec	1,%l1
	dec  	4,%l7
	call	fibl
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	st   	%l1,[%l7+0]
	ld	[%l7+4],%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sub	%l1,2,%l1
	and 	%l1,%l0,%l1
	dec  	4,%l7
	call	fibl
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	add	%l1,%o1,%l1
	and 	%l1,%l0,%l1
fibl9:
	inc  	4*1,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	fibml
!
	.seg	"data1"   
	.align	4
.fibml:	.word    0
	._fibml = 2
	.seg	"text"
	.align	8
	.global	fibml
fibml:
	sll	%l1,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,2
	ble	fibmlr
	nop
	dec  	4,%l7
	st   	%l1,[%l7+0]
	dec	1,%l1
	dec  	4,%l7
	call	fibml
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o0
	st   	%l1,[%l7+0]
	mov 	%o0,%l1
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sub	%l1,2,%l1
	and 	%l1,%l0,%l1
	dec  	4,%l7
	call	fibml
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l2
	inc  	4,%l7
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	sll	%l2,16,%o1
	sra	%o1,16,%o1
	add	%l1,%o1,%l1
	and 	%l1,%l0,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
fibmlr:
	set	1,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
! end
