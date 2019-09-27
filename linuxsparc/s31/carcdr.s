!
!	File carcdr.s expansion for sparc arch=v8plus.
!	This file is part of Le-Lisp kernel.
!	Generated on Sat Oct   7 17 18:55:26 
!
	.file	"carcdr.s"
	.align	8 
	.global	bvar
	.global	inisymb
	.global	errnla
	.global	ini_cad
	.seg	"text"
ini_cad:
	.seg	"data1"   
	.align	4
pcar1:
	.asciz	"car"
	.seg	"text"
bcar1:
	set	3,%l1
	set	pcar1,%l2
	set	fcar,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fcar,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar2:
	.asciz	"cdr"
	.seg	"text"
bcar2:
	set	3,%l1
	set	pcar2,%l2
	set	fcdr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._fcdr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar3:
	.asciz	"caar"
	.seg	"text"
bcar3:
	set	4,%l1
	set	pcar3,%l2
	set	ca2r,%l3
	dec	8,%l3
	set	trash,%l4
	set	._ca2r,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar4:
	.asciz	"cadr"
	.seg	"text"
bcar4:
	set	4,%l1
	set	pcar4,%l2
	set	cadr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cadr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar5:
	.asciz	"cdar"
	.seg	"text"
bcar5:
	set	4,%l1
	set	pcar5,%l2
	set	cdar,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cdar,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar6:
	.asciz	"cddr"
	.seg	"text"
bcar6:
	set	4,%l1
	set	pcar6,%l2
	set	cddr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cddr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar7:
	.asciz	"caaar"
	.seg	"text"
bcar7:
	set	5,%l1
	set	pcar7,%l2
	set	caaar,%l3
	dec	8,%l3
	set	trash,%l4
	set	._caaar,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar8:
	.asciz	"caadr"
	.seg	"text"
bcar8:
	set	5,%l1
	set	pcar8,%l2
	set	caadr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._caadr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar9:
	.asciz	"cadar"
	.seg	"text"
bcar9:
	set	5,%l1
	set	pcar9,%l2
	set	cadar,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cadar,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar10:
	.asciz	"caddr"
	.seg	"text"
bcar10:
	set	5,%l1
	set	pcar10,%l2
	set	caddr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._caddr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar11:
	.asciz	"cdaar"
	.seg	"text"
bcar11:
	set	5,%l1
	set	pcar11,%l2
	set	cdaar,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cdaar,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar12:
	.asciz	"cdadr"
	.seg	"text"
bcar12:
	set	5,%l1
	set	pcar12,%l2
	set	cdadr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cdadr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar13:
	.asciz	"cddar"
	.seg	"text"
bcar13:
	set	5,%l1
	set	pcar13,%l2
	set	cddar,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cddar,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar14:
	.asciz	"cdddr"
	.seg	"text"
bcar14:
	set	5,%l1
	set	pcar14,%l2
	set	cdddr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cdddr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar15:
	.asciz	"caaaar"
	.seg	"text"
bcar15:
	set	6,%l1
	set	pcar15,%l2
	set	caaaar,%l3
	dec	8,%l3
	set	trash,%l4
	set	._caaaar,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar16:
	.asciz	"caaadr"
	.seg	"text"
bcar16:
	set	6,%l1
	set	pcar16,%l2
	set	caaadr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._caaadr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar17:
	.asciz	"caadar"
	.seg	"text"
bcar17:
	set	6,%l1
	set	pcar17,%l2
	set	caadar,%l3
	dec	8,%l3
	set	trash,%l4
	set	._caadar,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar18:
	.asciz	"caaddr"
	.seg	"text"
bcar18:
	set	6,%l1
	set	pcar18,%l2
	set	caaddr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._caaddr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar19:
	.asciz	"cadaar"
	.seg	"text"
bcar19:
	set	6,%l1
	set	pcar19,%l2
	set	cadaar,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cadaar,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar20:
	.asciz	"cadadr"
	.seg	"text"
bcar20:
	set	6,%l1
	set	pcar20,%l2
	set	cadadr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cadadr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar21:
	.asciz	"caddar"
	.seg	"text"
bcar21:
	set	6,%l1
	set	pcar21,%l2
	set	caddar,%l3
	dec	8,%l3
	set	trash,%l4
	set	._caddar,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar22:
	.asciz	"cadddr"
	.seg	"text"
bcar22:
	set	6,%l1
	set	pcar22,%l2
	set	cadddr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cadddr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar23:
	.asciz	"cdaaar"
	.seg	"text"
bcar23:
	set	6,%l1
	set	pcar23,%l2
	set	cdaaar,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cdaaar,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar24:
	.asciz	"cdaadr"
	.seg	"text"
bcar24:
	set	6,%l1
	set	pcar24,%l2
	set	cdaadr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cdaadr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar25:
	.asciz	"cdadar"
	.seg	"text"
bcar25:
	set	6,%l1
	set	pcar25,%l2
	set	cdadar,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cdadar,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar26:
	.asciz	"cdaddr"
	.seg	"text"
bcar26:
	set	6,%l1
	set	pcar26,%l2
	set	cdaddr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cdaddr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar27:
	.asciz	"cddaar"
	.seg	"text"
bcar27:
	set	6,%l1
	set	pcar27,%l2
	set	cddaar,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cddaar,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar28:
	.asciz	"cddadr"
	.seg	"text"
bcar28:
	set	6,%l1
	set	pcar28,%l2
	set	cddadr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cddadr,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar29:
	.asciz	"cdddar"
	.seg	"text"
bcar29:
	set	6,%l1
	set	pcar29,%l2
	set	cdddar,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cdddar,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
pcar30:
	.asciz	"cddddr"
	.seg	"text"
bcar30:
	set	6,%l1
	set	pcar30,%l2
	set	cddddr,%l3
	dec	8,%l3
	set	trash,%l4
	set	._cddddr,%o0
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
carerr:
	cmp    	%l1,%i2
	beq	careret
	nop
	mov   	%l3,%l1
	ba,a	errnla
	.align	4
careret:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	fcar
!
	.seg	"data1"   
	.align	4
.fcar:	.word    0
	._fcar = 2
	.seg	"text"
	.align	8
	.global	fcar
fcar:
	set	445*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	fcdr
!
	.seg	"data1"   
	.align	4
.fcdr:	.word    0
	._fcdr = 2
	.seg	"text"
	.align	8
	.global	fcdr
fcdr:
	set	446*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	ca2r
!
	.seg	"data1"   
	.align	4
.ca2r:	.word    0
	._ca2r = 2
	.seg	"text"
	.align	8
	.global	ca2r
ca2r:
	set	447*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cadr
!
	.seg	"data1"   
	.align	4
.cadr:	.word    0
	._cadr = 2
	.seg	"text"
	.align	8
	.global	cadr
cadr:
	set	448*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cdar
!
	.seg	"data1"   
	.align	4
.cdar:	.word    0
	._cdar = 2
	.seg	"text"
	.align	8
	.global	cdar
cdar:
	set	449*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cddr
!
	.seg	"data1"   
	.align	4
.cddr:	.word    0
	._cddr = 2
	.seg	"text"
	.align	8
	.global	cddr
cddr:
	set	450*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	caaar
!
	.seg	"data1"   
	.align	4
.caaar:	.word    0
	._caaar = 2
	.seg	"text"
	.align	8
	.global	caaar
caaar:
	set	451*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
caaar1:
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	caadr
!
	.seg	"data1"   
	.align	4
.caadr:	.word    0
	._caadr = 2
	.seg	"text"
	.align	8
	.global	caadr
caadr:
	set	452*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
caadr1:
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cadar
!
	.seg	"data1"   
	.align	4
.cadar:	.word    0
	._cadar = 2
	.seg	"text"
	.align	8
	.global	cadar
cadar:
	set	453*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
cadar1:
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	caddr
!
	.seg	"data1"   
	.align	4
.caddr:	.word    0
	._caddr = 2
	.seg	"text"
	.align	8
	.global	caddr
caddr:
	set	454*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cdaar
!
	.seg	"data1"   
	.align	4
.cdaar:	.word    0
	._cdaar = 2
	.seg	"text"
	.align	8
	.global	cdaar
cdaar:
	set	455*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
cdaar1:
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cdadr
!
	.seg	"data1"   
	.align	4
.cdadr:	.word    0
	._cdadr = 2
	.seg	"text"
	.align	8
	.global	cdadr
cdadr:
	set	456*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
cdadr1:
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cddar
!
	.seg	"data1"   
	.align	4
.cddar:	.word    0
	._cddar = 2
	.seg	"text"
	.align	8
	.global	cddar
cddar:
	set	457*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
cddar1:
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cdddr
!
	.seg	"data1"   
	.align	4
.cdddr:	.word    0
	._cdddr = 2
	.seg	"text"
	.align	8
	.global	cdddr
cdddr:
	set	458*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
cdddr1:
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	caaaar
!
	.seg	"data1"   
	.align	4
.caaaar:	.word    0
	._caaaar = 2
	.seg	"text"
	.align	8
	.global	caaaar
caaaar:
	set	459*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	ba,a	caaar1
	.align	4

!
!	FENTRY	caaadr
!
	.seg	"data1"   
	.align	4
.caaadr:	.word    0
	._caaadr = 2
	.seg	"text"
	.align	8
	.global	caaadr
caaadr:
	set	460*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	ba,a	caaar1
	.align	4

!
!	FENTRY	caadar
!
	.seg	"data1"   
	.align	4
.caadar:	.word    0
	._caadar = 2
	.seg	"text"
	.align	8
	.global	caadar
caadar:
	set	461*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	ba,a	caadr1
	.align	4

!
!	FENTRY	caaddr
!
	.seg	"data1"   
	.align	4
.caaddr:	.word    0
	._caaddr = 2
	.seg	"text"
	.align	8
	.global	caaddr
caaddr:
	set	462*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	ba,a	caadr1
	.align	4

!
!	FENTRY	cadaar
!
	.seg	"data1"   
	.align	4
.cadaar:	.word    0
	._cadaar = 2
	.seg	"text"
	.align	8
	.global	cadaar
cadaar:
	set	463*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	ba,a	cadar1
	.align	4

!
!	FENTRY	cadadr
!
	.seg	"data1"   
	.align	4
.cadadr:	.word    0
	._cadadr = 2
	.seg	"text"
	.align	8
	.global	cadadr
cadadr:
	set	464*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	ba,a	cadar1
	.align	4

!
!	FENTRY	caddar
!
	.seg	"data1"   
	.align	4
.caddar:	.word    0
	._caddar = 2
	.seg	"text"
	.align	8
	.global	caddar
caddar:
	set	465*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cadddr
!
	.seg	"data1"   
	.align	4
.cadddr:	.word    0
	._cadddr = 2
	.seg	"text"
	.align	8
	.global	cadddr
cadddr:
	set	466*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	cdaaar
!
	.seg	"data1"   
	.align	4
.cdaaar:	.word    0
	._cdaaar = 2
	.seg	"text"
	.align	8
	.global	cdaaar
cdaaar:
	set	467*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	ba,a	cdaar1
	.align	4

!
!	FENTRY	cdaadr
!
	.seg	"data1"   
	.align	4
.cdaadr:	.word    0
	._cdaadr = 2
	.seg	"text"
	.align	8
	.global	cdaadr
cdaadr:
	set	468*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	ba,a	cdaar1
	.align	4

!
!	FENTRY	cdadar
!
	.seg	"data1"   
	.align	4
.cdadar:	.word    0
	._cdadar = 2
	.seg	"text"
	.align	8
	.global	cdadar
cdadar:
	set	469*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	ba,a	cdadr1
	.align	4

!
!	FENTRY	cdaddr
!
	.seg	"data1"   
	.align	4
.cdaddr:	.word    0
	._cdaddr = 2
	.seg	"text"
	.align	8
	.global	cdaddr
cdaddr:
	set	470*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	ba,a	cdadr1
	.align	4

!
!	FENTRY	cddaar
!
	.seg	"data1"   
	.align	4
.cddaar:	.word    0
	._cddaar = 2
	.seg	"text"
	.align	8
	.global	cddaar
cddaar:
	set	471*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	ba,a	cddar1
	.align	4

!
!	FENTRY	cddadr
!
	.seg	"data1"   
	.align	4
.cddadr:	.word    0
	._cddadr = 2
	.seg	"text"
	.align	8
	.global	cddadr
cddadr:
	set	472*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	ba,a	cddar1
	.align	4

!
!	FENTRY	cdddar
!
	.seg	"data1"   
	.align	4
.cdddar:	.word    0
	._cdddar = 2
	.seg	"text"
	.align	8
	.global	cdddar
cdddar:
	set	473*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+0],%l1
	ba,a	cdddr1
	.align	4

!
!	FENTRY	cddddr
!
	.seg	"data1"   
	.align	4
.cddddr:	.word    0
	._cddddr = 2
	.seg	"text"
	.align	8
	.global	cddddr
cddddr:
	set	474*32,%l2
	add    	%i2,%l2,%l2
	mov   	%l1,%l3
	cmp    	%l1,%i3
	blt	carerr
	nop
	ld	[%l1+4],%l1
	ba,a	cdddr1
	.align	4
! end
