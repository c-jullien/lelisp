!
!	File extend.s expansion for sparc arch=v8plus.
!	This file is part of Le-Lisp kernel.
!	Generated on Sat Oct   7 17 18:55:31 
!
	.file	"extend.s"
	.align	8 
	.global	inisymb
	.global	inicst
	.global	mstack
	.global	bvar
	.global	errfs
	.global	gccons
	.global	gcfloat
	.global	gcnumb
	.global	hashtab
	.global	probj
	.global	probjt
	.global	errnia
	.global	errnla
	.global	errnva
	.global	errwna
	.global	evalcar
	.global	apply
	.global	loc
	.global	tabtypfn
	.global	ini_ext
	.seg	"text"
	.seg	"text"
ini_ext:
	.seg	"data1"   
	.align	4
pext1:
	.asciz	"bltsmem"
	.seg	"text"
bext1:
	set	7,%l1
	set	pext1,%l2
	set	bltsmem,%l3
	dec	8,%l3
	set	trash,%l4
	set	._bltsmem,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pext2:
	.asciz	"readc*"
	.seg	"text"
bext2:
	set	6,%l1
	set	pext2,%l2
	set	readcs,%l3
	dec	8,%l3
	set	trash,%l4
	set	._readcs,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pext3:
	.asciz	"cloop"
	.seg	"text"
bext3:
	set	5,%l1
	set	pext3,%l2
	set	cloop,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cloop,%o0
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
	.seg	"text"

!
!	FENTRY	bltsmem
!
	.seg	"data1"   
	.align	4
.bltsmem:	.word    0
	._bltsmem = 5
	.seg	"text"
	.align	8
	.global	bltsmem
bltsmem:
	ld	[%l7+0],%l4
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l2+0],%o1
	inc	8,%o1
	add  	%l3,%o1,%o1
	mov   	%l1,%o0
	mov   	%l4,%o2
	cmp    	%o2,%o1
	blt     gext4
	nop
	add    	%o1,%o0,%o1
	ba    fext4
	add    	%o2,%o0,%o2
	.align	4
qext4:	ldub   	[%o1+0],%o3
	stb  	%o3,[%o2+0]
fext4:	dec  	%o1
	deccc  	%o0
	bge      qext4
	dec  	%o2
	ba,a    eext4
rext4:
	stb  	%o3,[%o2+0]
	inc  	%o2
	inc  	%o1
gext4:	deccc  	%o0
	bge,a    rext4
	ldub   	[%o1+0],%o3
eext4:
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	readcs
!
	.seg	"data1"   
	.align	4
.readcs:	.word    0
	._readcs = 3
	.seg	"text"
	.align	8
	.global	readcs
readcs:
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	set	ll_ncars,%o3
	mov   	%l1,%o2
	mov   	%l2,%o1
	set	istream,%o0
	ld	[%o0+0],%o0
	set	state,%o4
	st   	%g0,[%o4+0]
	set	splisp,%o4
	st   	%l7,[%o4+0]
	call 	inb,4
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
!	FENTRY	cloop
!
	.seg	"data1"   
	.align	4
.cloop:	.word    0
	._cloop = 2
	.seg	"text"
	.align	8
	.global	cloop
cloop:
	mov   	%l1,%l2
	mov   	%i4,%l1
	mov   	%l2,%i4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
	.seg	"data1"
	.align	4
! end
