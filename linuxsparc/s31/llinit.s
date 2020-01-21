!
!	File llinit.s expansion for sparc arch=v8plus.
!	This file is part of Le-Lisp kernel.
!	Generated on Sat Oct   7 17 18:55:16 
!
	.file	"llinit.s"
	.align	8 
	.global	ll_exit
	.global	exwer
	.global	systop
	.global	ini_top
	.global	errwna
	.global	ini_gc
	.global	gccons
	.global	gcfloat
	.global	gcnumb
	.global	ini_pio
	.global	input
	.global	restcori
	.global	ini_read
	.global	istdsym
	.global	inisymb
	.global	inicst
	.global	cpkgc
	.global	crastrg
	.global	ini_mach
	.global	ini_print
	.global	ini_eval
	.global	savea1
	.global	savea2
	.global	savea3
	.global	savea4
	.global	llitsoft
	.global	llsupit
	.global	ini_spec
	.global	ini_ctl
	.global	ini_cad
	.global	ini_sym
	.global	ini_std
	.global	ini_nbs
	.global	ini_snb
	.global	ini_str
	.global	makevect
	.global	strgsymb
	.global	strgallc
	.global	ini_chr
	.global	ini_ext
	.global	ini_bll
	.global	cstsyste
	.global	bimpur
	.global	bstack
	.global	estack
	.global	mstack
	.global	mstack1
	.global	mstack2
	.global	bcode
	.global	ccode
	.global	ecode
	.global	bheap
	.global	cheap
	.global	eheap
	.global	bnumb
	.global	cnumb
	.global	bfloat
	.global	cfloat
	.global	bvect
	.global	cvect
	.global	bstrg
	.global	cstrg
	.global	bsymb
	.global	csymb
	.global	bvar
	.global	bcons
	.global	ccons
	.global	bold
	.global	eold
	.global	fnumb
	.global	ffloat
	.global	fvect
	.global	fstrg
	.global	fsymb
	.global	hashtab
	.global	itsoft
	.global	filin
	.global	filiz
	.global	filit
	.global	llban
	.global	nbsyst
	.global	maxchan
	.global	itstate
	.global	itcount
	.global	llinit
	.global	reenter
	.global	theend
	.global	llversion
	.global	llsystem
	.global	stop
	.seg	"data1"
	.align	4
bimpur:
bstack:
	.word 	0
estack:
	.word 	0
mstack:
	.word 	0
mstack1:
	.word 	0
mstack2:
	.word 	0
bcode:
	.word 	0
ccode:
	.word 	0
ecode:
	.word 	0
bheap:
	.word 	0
cheap:
	.word 	0
eheap:
	.word 	0
bnumb:
	.word 	0
cnumb:
	.word 	0
bfloat:
	.word 	0
cfloat:
	.word 	0
bvect:
	.word 	0
cvect:
	.word 	0
bstrg:
	.word 	0
cstrg:
	.word 	0
bsymb:
	.word 	0
csymb:
	.word 	0
bvar:
	.word 	0
bcons:
	.word 	0
ccons:
	.word 	0
bold:
	.word 	0
eold:
	.word 	0
fnumb:
	.word 	0
ffloat:
	.word 	0
fstrg:
	.word 	0
fvect:
	.word 	0
fsymb:
	.word 	0
fcons:
	.word 	0
filiz:
	.word 	0
filit:
	.word 	0
filin:
	.word 	0
llban:
	.word 	0
nbsyst:
	.word 	0
maxchan:
	.word 	0
itstate:
	.word 	0
itcount:
	.word 	0
hashtab:
	.word 	0
tabsyst:
	.word 	0
cstsyste:
	.word 	0
	.seg	"text"
llinit:
	set	bstack,%l7
	ld	[%l7+0],%l7
	set	mstack1,%o3
	ld	[%o3+0],%o3
	set	mstack,%o4
	st   	%o3,[%o4+0]
	mov   	%g0,%l1
	set	cnumb,%l2
	ld	[%l2+0],%l2
	set	bnumb,%o1
	ld	[%o1+0],%o1
	cmp    	%l2,%o1
	blt  	ifrns3
	nop
	cmp    	%l2,%g3
	bge  	ifrns3
	nop
ifrns1:
	st   	%l1,[%l2+0]
	mov   	%l2,%l1
	inc 	4,%l2
	cmp    	%l2,%g3
	blt  	ifrns1
	nop
ifrns3:
	set	fnumb,%o4
	st   	%l1,[%o4+0]
	mov   	%g0,%l1
	set	cfloat,%l2
	ld	[%l2+0],%l2
	cmp    	%l2,0
	bge	ifrfs3
	nop
ifrfs1:
	st   	%l1,[%l2+0]
	mov   	%l2,%l1
ifrfs3:
	set	ffloat,%o4
	st   	%l1,[%o4+0]
	mov   	%i2,%l1
	set	cvect,%l2
	ld	[%l2+0],%l2
ifrvs1:
	st   	%l1,[%l2+0]
	mov   	%l2,%l1
	inc 	8,%l2
	cmp    	%l2,%i1
	blt  	ifrvs1
	nop
	set	fvect,%o4
	st   	%l1,[%o4+0]
	mov   	%i2,%l1
	set	cstrg,%l2
	ld	[%l2+0],%l2
ifrss1:
	st   	%l1,[%l2+0]
	mov   	%l2,%l1
	inc 	8,%l2
	cmp    	%l2,%i2
	blt  	ifrss1
	nop
	set	fstrg,%o4
	st   	%l1,[%o4+0]
	set	filiz,%l1
	ld	[%l1+0],%l1
	mov   	%l1,%o1
	cmp    	%o1,0
	beq	initf9
	nop
	set	filit,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,0
	beq	initf9
	nop
	set	filin,%l2
	ld	[%l2+0],%l2
	dec  	4,%l7
	call	crastrg
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	restcori
	st   	%o7,[%l7+0]
	.align	4
initf9:
	set	csymb,%l2
	ld	[%l2+0],%l2
	ba,a	ifrsy2
	.align	4
ifrsy1:
	st   	%l2,[%l1+20]
ifrsy2:
	mov   	%l2,%l1
	inc 	32,%l2
	cmp    	%l2,%i3
	blt  	ifrsy1
	nop
ifrsy3:
	st   	%g0,[%l1+20]
	set	csymb,%o3
	ld	[%o3+0],%o3
	set	fsymb,%o4
	st   	%o3,[%o4+0]
	mov   	%i2,%l1
	set	ccons,%l2
	ld	[%l2+0],%l2
ifrls1:
	st   	%i2,[%l2+0]
	st   	%l1,[%l2+4]
	sub	%l2,%i3,%o2
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
	mov   	%l2,%l1
	.global	econs
	inc 	8,%l2
	set	econs,%o1
	ld	[%o1+0],%o1
	cmp    	%l2,%o1
	blt  	ifrls1
	nop
	mov   	%l1,%g4
	set	savea1,%o4
	st   	%i2,[%o4+0]
	set	savea2,%o4
	st   	%i2,[%o4+0]
	set	savea3,%o4
	st   	%i2,[%o4+0]
	set	savea4,%o4
	st   	%i2,[%o4+0]
	set	997,%l1
	mov   	%i2,%l2
	dec  	4,%l7
	call	makevect
	st   	%o7,[%l7+0]
	.align	4
	set	hashtab,%o4
	st   	%l1,[%o4+0]
	set	hashtab,%o0
	ld	[%o0+0],%o0
	ld	[%o0+0],%o0
	ld	[%o0+4],%l1
	ba,a	inhas2
	.align	4
inhas1:
	set	hashtab,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l1,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	st   	%l1,[%o1+0]
inhas2:
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	deccc  	1,%l1
	and 	%l1,%l0,%l1
	bge  	inhas1
	nop
	.seg	"data1"   
	.align	4
plli1:
	.asciz	""
	.seg	"text"
blli1:
	set 	0,%l1
	set	plli1,%l2
	add    	%i2,0*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,0*32,%o3
	st   	%o3,[%l1+12]
	set	128,%o0
	sth   	%o0,[%l1+26]
	.seg	"data1"   
	.align	4
plli2:
	.asciz	"_undef_"
	.seg	"text"
blli2:
	set 	7,%l1
	set	plli2,%l2
	add    	%i2,1*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli3:
	.asciz	"nil"
	.seg	"text"
blli3:
	set 	3,%l1
	set	plli3,%l2
	add    	%i2,2*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli4:
	.asciz	"t"
	.seg	"text"
blli4:
	set 	1,%l1
	set	plli4,%l2
	add    	%i2,3*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	add    	%i2,0*32,%o3
	set	cpkgc,%o4
	st   	%o3,[%o4+0]
	add    	%i2,2*32,%l1
	add    	%i2,0*32,%o3
	st   	%o3,[%l1+12]
	add    	%i2,0*32,%o3
	st   	%o3,[%l1+0]
	add    	%i2,1*32,%l1
	add    	%i2,0*32,%o3
	st   	%o3,[%l1+12]
	add    	%i2,3*32,%l1
	add    	%i2,0*32,%o3
	st   	%o3,[%l1+12]
	set	fsymb,%o3
	ld	[%o3+0],%o3
	set	bvar,%o4
	st   	%o3,[%o4+0]
	.seg	"data1"   
	.align	4
plli5:
	.asciz	"sys-package"
	.seg	"text"
blli5:
	set 	11,%l1
	set	plli5,%l2
	add    	%i2,4*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	st   	%i2,[%l1+0]
	.seg	"data1"   
	.align	4
plli6:
	.asciz	"itsoft"
	.seg	"text"
blli6:
	set	6,%l1
	set	plli6,%l2
	set	itsoft,%l3
	dec	8,%l3
	set	trash,%l4
	set	._itsoft,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli7:
	.asciz	"super-itsoft"
	.seg	"text"
blli7:
	set	12,%l1
	set	plli7,%l2
	set	supitsof,%l3
	dec	8,%l3
	set	trash,%l4
	set	._supitsof,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli8:
	.asciz	"system"
	.seg	"text"
blli8:
	set	6,%l1
	set	plli8,%l2
	set	llsystem,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llsystem,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli9:
	.asciz	"obsolete"
	.seg	"text"
blli9:
	set 	8,%l1
	set	plli9,%l2
	add    	%i2,8*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli10:
	.asciz	"apollo"
	.seg	"text"
blli10:
	set 	6,%l1
	set	plli10,%l2
	add    	%i2,9*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli11:
	.asciz	"vaxunix"
	.seg	"text"
blli11:
	set 	7,%l1
	set	plli11,%l2
	add    	%i2,10*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli12:
	.asciz	"vaxvms"
	.seg	"text"
blli12:
	set 	6,%l1
	set	plli12,%l2
	add    	%i2,11*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli13:
	.asciz	"cpm86"
	.seg	"text"
blli13:
	set 	5,%l1
	set	plli13,%l2
	add    	%i2,12*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli14:
	.asciz	"msdos"
	.seg	"text"
blli14:
	set 	5,%l1
	set	plli14,%l2
	add    	%i2,13*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli15:
	.asciz	"sun"
	.seg	"text"
blli15:
	set 	3,%l1
	set	plli15,%l2
	add    	%i2,14*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli16:
	.asciz	"hp9300"
	.seg	"text"
blli16:
	set 	6,%l1
	set	plli16,%l2
	add    	%i2,15*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli17:
	.asciz	"ibmrt"
	.seg	"text"
blli17:
	set 	5,%l1
	set	plli17,%l2
	add    	%i2,16*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli18:
	.asciz	"cetia"
	.seg	"text"
blli18:
	set 	5,%l1
	set	plli18,%l2
	add    	%i2,17*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli19:
	.asciz	"C"
	.seg	"text"
blli19:
	set 	1,%l1
	set	plli19,%l2
	add    	%i2,18*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli20:
	.asciz	"dpx1000"
	.seg	"text"
blli20:
	set 	7,%l1
	set	plli20,%l2
	add    	%i2,19*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli21:
	.asciz	"sun4"
	.seg	"text"
blli21:
	set 	4,%l1
	set	plli21,%l2
	add    	%i2,20*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli22:
	.asciz	"atari"
	.seg	"text"
blli22:
	set 	5,%l1
	set	plli22,%l2
	add    	%i2,21*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli23:
	.asciz	"macaux"
	.seg	"text"
blli23:
	set 	6,%l1
	set	plli23,%l2
	add    	%i2,22*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli24:
	.asciz	"decstation"
	.seg	"text"
blli24:
	set 	10,%l1
	set	plli24,%l2
	add    	%i2,23*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli25:
	.asciz	"sony"
	.seg	"text"
blli25:
	set 	4,%l1
	set	plli25,%l2
	add    	%i2,24*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli26:
	.asciz	"m88k"
	.seg	"text"
blli26:
	set 	4,%l1
	set	plli26,%l2
	add    	%i2,25*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli27:
	.asciz	"sun386i"
	.seg	"text"
blli27:
	set 	7,%l1
	set	plli27,%l2
	add    	%i2,26*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli28:
	.asciz	"aix386"
	.seg	"text"
blli28:
	set 	6,%l1
	set	plli28,%l2
	add    	%i2,27*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli29:
	.asciz	"ix386"
	.seg	"text"
blli29:
	set 	5,%l1
	set	plli29,%l2
	add    	%i2,28*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli30:
	.asciz	"sonyr3000"
	.seg	"text"
blli30:
	set 	9,%l1
	set	plli30,%l2
	add    	%i2,29*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli31:
	.asciz	"magnum"
	.seg	"text"
blli31:
	set 	6,%l1
	set	plli31,%l2
	add    	%i2,30*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli32:
	.asciz	"rs6000"
	.seg	"text"
blli32:
	set 	6,%l1
	set	plli32,%l2
	add    	%i2,31*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli33:
	.asciz	"sco386"
	.seg	"text"
blli33:
	set 	6,%l1
	set	plli33,%l2
	add    	%i2,32*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli34:
	.asciz	"os2"
	.seg	"text"
blli34:
	set 	3,%l1
	set	plli34,%l2
	add    	%i2,33*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli35:
	.asciz	"hp9400"
	.seg	"text"
blli35:
	set 	6,%l1
	set	plli35,%l2
	add    	%i2,34*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli36:
	.asciz	"iris4d"
	.seg	"text"
blli36:
	set 	6,%l1
	set	plli36,%l2
	add    	%i2,35*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli37:
	.asciz	"svr4i386"
	.seg	"text"
blli37:
	set 	8,%l1
	set	plli37,%l2
	add    	%i2,36*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli38:
	.asciz	"os2_2"
	.seg	"text"
blli38:
	set 	5,%l1
	set	plli38,%l2
	add    	%i2,37*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli39:
	.asciz	"Chp9700"
	.seg	"text"
blli39:
	set 	7,%l1
	set	plli39,%l2
	add    	%i2,38*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli40:
	.asciz	"Csun4"
	.seg	"text"
blli40:
	set 	5,%l1
	set	plli40,%l2
	add    	%i2,39*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli41:
	.asciz	"cetia88k"
	.seg	"text"
blli41:
	set 	8,%l1
	set	plli41,%l2
	add    	%i2,40*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli42:
	.asciz	"sun4mbc"
	.seg	"text"
blli42:
	set 	7,%l1
	set	plli42,%l2
	add    	%i2,41*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli43:
	.asciz	"hp9700"
	.seg	"text"
blli43:
	set 	6,%l1
	set	plli43,%l2
	add    	%i2,42*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli44:
	.asciz	"Calphavms"
	.seg	"text"
blli44:
	set 	9,%l1
	set	plli44,%l2
	add    	%i2,43*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli45:
	.asciz	"nt386"
	.seg	"text"
blli45:
	set 	5,%l1
	set	plli45,%l2
	add    	%i2,44*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli46:
	.asciz	"next68k"
	.seg	"text"
blli46:
	set 	7,%l1
	set	plli46,%l2
	add    	%i2,45*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli47:
	.asciz	"solaris"
	.seg	"text"
blli47:
	set 	7,%l1
	set	plli47,%l2
	add    	%i2,46*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli48:
	.asciz	"Calphaosf"
	.seg	"text"
blli48:
	set 	9,%l1
	set	plli48,%l2
	add    	%i2,47*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli49:
	.asciz	"Ciris4d"
	.seg	"text"
blli49:
	set 	7,%l1
	set	plli49,%l2
	add    	%i2,48*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli50:
	.asciz	"alphaosf"
	.seg	"text"
blli50:
	set 	8,%l1
	set	plli50,%l2
	add    	%i2,49*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli51:
	.asciz	"solaris386"
	.seg	"text"
blli51:
	set 	10,%l1
	set	plli51,%l2
	add    	%i2,50*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli52:
	.asciz	"unixware386"
	.seg	"text"
blli52:
	set 	11,%l1
	set	plli52,%l2
	add    	%i2,51*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli53:
	.asciz	"irix5"
	.seg	"text"
blli53:
	set 	5,%l1
	set	plli53,%l2
	add    	%i2,52*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli54:
	.asciz	"alphavms"
	.seg	"text"
blli54:
	set 	8,%l1
	set	plli54,%l2
	add    	%i2,53*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli55:
	.asciz	"linux"
	.seg	"text"
blli55:
	set 	5,%l1
	set	plli55,%l2
	add    	%i2,54*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli56:
	.asciz	"win95"
	.seg	"text"
blli56:
	set 	5,%l1
	set	plli56,%l2
	add    	%i2,55*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli57:
	.asciz	"cygwin"
	.seg	"text"
blli57:
	set 	6,%l1
	set	plli57,%l2
	add    	%i2,56*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli58:
	.asciz	"hp11"
	.seg	"text"
blli58:
	set 	4,%l1
	set	plli58,%l2
	add    	%i2,57*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli59:
	.asciz	"win32"
	.seg	"text"
blli59:
	set 	5,%l1
	set	plli59,%l2
	add    	%i2,58*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli60:
	.asciz	"win64"
	.seg	"text"
blli60:
	set 	5,%l1
	set	plli60,%l2
	add    	%i2,59*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli61:
	.asciz	"x86macos"
	.seg	"text"
blli61:
	set 	8,%l1
	set	plli61,%l2
	add    	%i2,60*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli62:
	.asciz	"linuxsparc"
	.seg	"text"
blli62:
	set 	10,%l1
	set	plli62,%l2
	add    	%i2,61*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli63:
	.asciz	"freebsd"
	.seg	"text"
blli63:
	set 	7,%l1
	set	plli63,%l2
	add    	%i2,62*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli64:
	.asciz	"netbsd"
	.seg	"text"
blli64:
	set 	6,%l1
	set	plli64,%l2
	add    	%i2,63*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	set	80,%l1
	add    	%i2,8*32,%l2
	dec  	4,%l7
	call	makevect
	st   	%o7,[%l7+0]
	.align	4
	set	tabsyst,%o4
	st   	%l1,[%o4+0]
	ld	[%l1+0],%o1
	add	%o1,24,%o1
	add    	%i2,9*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,40,%o1
	add    	%i2,10*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,44,%o1
	add    	%i2,11*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,60,%o1
	add    	%i2,12*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,64,%o1
	add    	%i2,13*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,96,%o1
	add    	%i2,14*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,100,%o1
	add    	%i2,15*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,112,%o1
	add    	%i2,16*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,124,%o1
	add    	%i2,17*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,140,%o1
	add    	%i2,18*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,144,%o1
	add    	%i2,19*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,148,%o1
	add    	%i2,20*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,152,%o1
	add    	%i2,21*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,160,%o1
	add    	%i2,22*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,164,%o1
	add    	%i2,23*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,168,%o1
	add    	%i2,24*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,172,%o1
	add    	%i2,25*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,176,%o1
	add    	%i2,26*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,180,%o1
	add    	%i2,27*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,184,%o1
	add    	%i2,28*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,188,%o1
	add    	%i2,29*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,192,%o1
	add    	%i2,30*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,196,%o1
	add    	%i2,31*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,200,%o1
	add    	%i2,32*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,204,%o1
	add    	%i2,33*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,208,%o1
	add    	%i2,34*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,212,%o1
	add    	%i2,35*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,216,%o1
	add    	%i2,36*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,220,%o1
	add    	%i2,37*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,224,%o1
	add    	%i2,38*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,228,%o1
	add    	%i2,39*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,232,%o1
	add    	%i2,40*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,236,%o1
	add    	%i2,41*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,240,%o1
	add    	%i2,42*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,244,%o1
	add    	%i2,43*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,248,%o1
	add    	%i2,44*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,252,%o1
	add    	%i2,45*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,256,%o1
	add    	%i2,46*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,260,%o1
	add    	%i2,47*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,264,%o1
	add    	%i2,48*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,268,%o1
	add    	%i2,49*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,272,%o1
	add    	%i2,50*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,276,%o1
	add    	%i2,51*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,280,%o1
	add    	%i2,52*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,284,%o1
	add    	%i2,53*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,288,%o1
	add    	%i2,54*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,292,%o1
	add    	%i2,55*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,296,%o1
	add    	%i2,56*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,300,%o1
	add    	%i2,57*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,304,%o1
	add    	%i2,58*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,308,%o1
	add    	%i2,59*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,312,%o1
	add    	%i2,60*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,316,%o1
	add    	%i2,61*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,320,%o1
	add    	%i2,62*32,%o0
	st   	%o0,[%o1+0]
	ld	[%l1+0],%o1
	add	%o1,324,%o1
	add    	%i2,63*32,%o0
	st   	%o0,[%o1+0]
	set	tabsyst,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	set	nbsyst,%o0
	ld	[%o0+0],%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l1
	set	cstsyste,%o4
	st   	%l1,[%o4+0]
	set	tabsyst,%o0
	ld	[%o0+0],%o0
	ld	[%o0+0],%o0
	ld	[%o0+4],%l1
	dec	1,%l1
clrsyst:
	set	tabsyst,%o1
	ld	[%o1+0],%o1
	ld	[%o1+0],%o1
	inc  	8,%o1
	mov   	%l1,%o0
	sll	%o0,2,%o0
	add  	%o1,%o0,%o1
	ld	[%o1+0],%l2
	add    	%i2,1*32,%o3
	st   	%o3,[%l2+0]
	sll	%l1,16,%l1
	sra	%l1,16,%l1
	dec  	%l1
	cmp   	%l1,0
	bgt  	clrsyst
	nop
	mov  	0,%l1
	.seg	"data1"   
	.align	4
plli65:
	.asciz	"version"
	.seg	"text"
blli65:
	set	7,%l1
	set	plli65,%l2
	set	llversion,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llversion,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli66:
	.asciz	"15.26"
	.seg	"text"
blli66:
	set 	5,%l1
	set	plli66,%l2
	add    	%i2,65*32,%l3
	dec  	4,%l7
	call	inicst
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli67:
	.asciz	"end"
	.seg	"text"
blli67:
	set	3,%l1
	set	plli67,%l2
	set	stop,%l3
	dec	8,%l3
	set	trash,%l4
	set	._stop,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli68:
	.asciz	"at-end"
	.seg	"text"
blli68:
	set	6,%l1
	set	plli68,%l2
	set	llatend,%l3
	dec	8,%l3
	set	trash,%l4
	set	._llatend,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	.seg	"data1"   
	.align	4
plli69:
	.asciz	"herald"
	.seg	"text"
blli69:
	set	6,%l1
	set	plli69,%l2
	set	herald,%l3
	dec	8,%l3
	set	trash,%l4
	set	._herald,%o0
	dec  	4,%l7
	st   	%o0,[%l7+0]
	dec  	4,%l7
	call	inisymb
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	ini_top
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	ini_gc
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	ini_pio
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	ini_read
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	ini_mach
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	ini_print
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	ini_eval
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	ini_spec
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	ini_ctl
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	ini_cad
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	ini_sym
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	ini_std
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	ini_nbs
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	ini_snb
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	ini_chr
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	ini_str
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	ini_ext
	st   	%o7,[%l7+0]
	.align	4
	dec  	4,%l7
	call	ini_bll
	st   	%o7,[%l7+0]
	.align	4
	mov   	%i2,%l1
	ld	[%l1+28],%l1
	set	700*32,%o3
	add    	%i2,%o3,%o3
	st   	%o3,[%l1+4]
	set	bstrg,%l1
	ld	[%l1+0],%l1
	set	700*32,%l2
	add    	%i2,%l2,%l2
forcstr2:
	st   	%l2,[%l1+4]
	inc 	8,%l1
	cmp    	%l1,%i2
	blt  	forcstr2
	nop
	set	bvect,%l1
	ld	[%l1+0],%l1
	set	737*32,%l2
	add    	%i2,%l2,%l2
forcvec2:
	st   	%l2,[%l1+4]
	inc 	8,%l1
	cmp    	%l1,%i1
	blt  	forcvec2
	nop
	mov   	%i2,%l1
topmin:
	set	llban,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,0
	bne	imin2
	nop
	dec  	4,%l7
	call	herald
	st   	%o7,[%l7+0]
	.align	4
imin2:
	set	filiz,%l1
	ld	[%l1+0],%l1
	mov   	%l1,%o1
	cmp    	%o1,0
	beq	imin4
	nop
	set	filin,%l2
	ld	[%l2+0],%l2
	dec  	4,%l7
	call	crastrg
	st   	%o7,[%l7+0]
	.align	4
	set	filit,%o1
	ld	[%o1+0],%o1
	cmp    	%o1,0
	beq	imin3
	nop
	dec  	4,%l7
	call	restcori
	st   	%o7,[%l7+0]
	.align	4
	ba,a	imin4
	.align	4
imin3:
	dec  	4,%l7
	call	input
	st   	%o7,[%l7+0]
	.align	4
imin4:
reenter:
	set	bstack,%l7
	ld	[%l7+0],%l7
	set	mstack1,%o3
	ld	[%o3+0],%o3
	set	mstack,%o4
	st   	%o3,[%o4+0]
	set	itcount,%o4
	st   	%g0,[%o4+0]
	set	1,%o3
	set	itstate,%o4
	st   	%o3,[%o4+0]
	ba,a	systop
	.align	4
theend:
	.seg	"data1"   
	.align	4
slli70:	.asciz	"May Le-Lisp be with you. "
	.seg	"text"
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	set	slli70,%o1
	set	25,%o0
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
	dec  	4,%l7
	call	ll_exit
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	itsoft
!
	.seg	"data1"   
	.align	4
.itsoft:	.word    0
	._itsoft = 3
	.seg	"text"
	.align	8
itsoft:
	ba,a	llitsoft
	.align	4

!
!	FENTRY	supitsof
!
	.seg	"data1"   
	.align	4
.supitsof:	.word    0
	._supitsof = 4
	.seg	"text"
	.align	8
	.global	supitsof
supitsof:
	ba,a	llsupit
	.align	4

!
!	FENTRY	llversion
!
	.seg	"data1"   
	.align	4
.llversion:	.word    0
	._llversion = 1
	.seg	"text"
	.align	8
llversion:
	add    	%i2,65*32,%l1
	ld	[%l1+28],%l1
	ld	[%l1+0],%o0
	inc  	8,%o0
	set	5,%o2
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
llversr:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	llsystem
!
	.seg	"data1"   
	.align	4
.llsystem:	.word    0
	._llsystem = 1
	.seg	"text"
	.align	8
llsystem:
	set	cstsyste,%l1
	ld	[%l1+0],%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4

!
!	FENTRY	stop
!
	.seg	"data1"   
	.align	4
.stop:	.word    0
	._stop = 5
	.seg	"text"
	.align	8
stop:
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,1
	bgt	stop6
	nop
	dec  	4,%l7
	st   	%l4,[%l7+0]
	dec  	4,%l7
	st   	%l3,[%l7+0]
	dec  	4,%l7
	st   	%l2,[%l7+0]
	dec  	4,%l7
	st   	%l1,[%l7+0]
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	stop3
	nop
	ld	[%l7+16],%l2
	cmp    	%i2,%g4
	bne    	lli71
	nop
	dec  	4,%l7
	call	gccons
	st   	%o7,[%l7+0]
	.align	4
	mov   	%g4,%o3
lli71:
	st   	%l2,[%g4+0]
	mov   	%g4,%l2
	ld	[%g4+4],%g4
	st   	%i2,[%l2+4]
	ba,a	stop4
	.align	4
stop3:
	mov   	%i2,%l2
stop4:
	add    	%i2,67*32,%l1
	dec  	4,%l7
	call	itsoft
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%l2
	inc  	4,%l7
	ld	[%l7+0],%l3
	inc  	4,%l7
	ld	[%l7+0],%l4
	inc  	4,%l7
	mov   	%l4,%o1
	cmp    	%o1,0
	beq	theend
	nop
	ld	[%l7+0],%l1
	inc  	4,%l7
	cmp    	%l1,%i2
	beq	stop5
	nop
	dec  	4,%l7
	call	exwer
	st   	%o7,[%l7+0]
	.align	4
stop5:
	dec  	4,%l7
	call	ll_exit
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
stop6:
	mov   	%g0,%l1
	add    	%i2,66*32,%l2
	ba,a	errwna
	.align	4

!
!	FENTRY	llatend
!
	.seg	"data1"   
	.align	4
.llatend:	.word    0
	._llatend = 5
	.seg	"text"
	.align	8
	.global	llatend
llatend:
	sll	%l4,16,%o0
	sra	%o0,16,%o0
	cmp   	%o0,1
	bgt	llatend2
	nop
	mov   	%l4,%o1
	cmp    	%o1,1
	beq	llatend1
	nop
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
llatend1:
	ld	[%l7+0],%l1
	inc  	4,%l7
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
llatend2:
	mov   	%g0,%l1
	add    	%i2,67*32,%l2
	ba,a	errwna
	.align	4

!
!	FENTRY	herald
!
	.seg	"data1"   
	.align	4
.herald:	.word    0
	._herald = 1
	.seg	"text"
	.align	8
	.global	herald
herald:
	.seg	"data1"   
	.align	4
slli72:	.asciz	"; Le-Lisp (by INRIA) version 15.26  (01/Jan/2020)  ["
	.seg	"text"
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	set	slli72,%o1
	set	52,%o0
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
	set	cstsyste,%l1
	ld	[%l1+0],%l1
	dec  	4,%l7
	call	strgsymb
	st   	%o7,[%l7+0]
	.align	4
	ld	[%l1+0],%o0
	ld	[%o0+4],%l2
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
	.seg	"data1"   
	.align	4
slli73:	.asciz	"]"
	.seg	"text"
	dec  	4,%l7 
	st   	%g2,[%l7+0] 
	dec  	4,%l7 
	st   	%g3,[%l7+0] 
	dec  	4,%l7 
	st   	%g4,[%l7+0] 
	dec  	4,%l7 
	st   	%g5,[%l7+0] 
	set	slli73,%o1
	set	1,%o0
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
	mov   	%i2,%l1
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
! end
