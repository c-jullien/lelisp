	.file	"ll386.asm"
	.version	"02.01"
	.text	
	.align	4
	.data
	.align	4
	.globl	bcode
	.globl	ecode
	.globl	bheap
	.globl	cheap
	.globl	eheap
	.globl	bnumb
	.globl	cnumb
	.globl	bfloat
	.globl	cfloat
	.globl	bvect
	.globl	cvect
	.globl	bstrg
	.globl	cstrg
	.globl	csymb
	.globl	ccons
	.globl	bstack
	.globl	mstack1
	.globl	mstack2
	.globl	estack
	.globl	filin
	.globl	filiz
	.globl	filit
	.globl	nbsyst
	.globl	maxchan
	.globl	llban
	.globl	ccode
	.globl	bvar
	.globl	bold
	.globl	eold
	.globl	itcount
	.globl	itstate
	.globl	btbin
	.globl	btbgc
	.globl	zprtmsgs
zllstart:
	.long	0
name000:
	.long	0
	.globl	bllm3
	.globl	ellm3
	.globl	llucode
	.globl	lluheap
	.globl	eimpur
	.globl	ffloat
splisp:
	.long	0
savsp1:
	.long	0
sparg:
	.long	0
spext:
	.long	0
spext1:
	.long	0
econs:
	.long	0
bsave:
savsp:
	.long	0
prtmsgs:
	.long	0
bsymb:
	.long	0
bcons:
	.long	0
accudouble1:
	.long	0
	.long	0
accudouble2:
	.long	0
	.long	0
accusingle1:
	.long	0
accusingle2:
	.long	0
dux1:
	.long	0
aux1:
	.long	0
saurwork:
	.long	0
crwork:
	.long	0
state:
	.long	0
callsp:
	.long	0
callsp1:
	.long	0
callgadr:
	.long	0
calltypr:
	.long	0
callreg0:
	.long	0
callreg1:
	.long	0
callnarg:
	.long	0
callsymb:
	.long	0
callbarg:
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
callearg:
	.long	0
calltarg:
calrbarg:
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
calrearg:
	.long	0
callrarg:
extvflag:
	.long	0
brkcnt:
	.long	0
clkcnt:
	.long	0
_mouscnt:
	.long	0
inmouse:
	.long	0
alarm_on:
	.long	0
signum:
	.long	0
delta_cons:
	.long	0
log2e1:
	.long	0
	.long	0
log2t1:
	.long	0
	.long	0
farg1:
	.long	0
farg2:
	.long	0
	.globl	fvect
	.globl	fstrg
	.globl	fsymb
	.globl	fcons
	.globl	mstack
	.text
	.align	4
	.globl	llinit000
	.globl	inton
	.globl	llstart
	.globl	cfadd
	.globl	gcfloat
	.globl	cfsub
	.globl	cfmul
	.globl	cfdiv
	.globl	cfeqn
	.globl	cfneqn
	.globl	cfgt
	.globl	cfge
	.globl	cflt
	.globl	cfle
	.globl	getbstack
	.globl	ll_corsav
	.globl	corsav
	.globl	hgc
	.globl	ll_corest
	.globl	corest
	.globl	llcorgo
	.globl	outner
	.globl	ll_exit
	.globl	exwer
	.globl	outwer
	.globl	ll_break
	.globl	setalarm
	.globl	llpanic
	.globl	sysprot
	.globl	ll_clock
	.globl	ithard
	.globl	llbreak
	.globl	llmouse
	.globl	llclock
	.globl	ll_merro
	.globl	llmerro
	.globl	ll_callg
	.globl	ll_conve
	.globl	ll_build
	.globl	crastrg
	.globl	getsym
	.globl	trysymb
	.globl	pusharg
	.globl	pushargd
	.globl	lispcall
	.globl	ffuncall
	.globl	cfloat_to_lfloat
	.globl	lfloat_to_cfloat
	.globl	splisp
	.globl	econs
	.globl	savsp
	.globl	prtmsgs
	.globl	bsymb
	.globl	bcons
	.globl	accudouble1
	.globl	accudouble2
	.globl	accusingle1
	.globl	accusingle2
	.globl	dux1
	.globl	aux1
	.globl	saurwork
	.globl	crwork
	.globl	state
	.globl	calltarg
	.globl	callrarg
	.globl	_mouscnt
	.globl	inmouse
	.globl	alarm_on
	.globl	delta_cons
	.globl	log2e1
	.globl	log2t1
	.globl	farg1
	.globl	farg2

	# FENTRY cfadd
	.align	4
cfadd:
	movl	farg1,%ebp
	fldl	(%ebp)
	movl	farg2,%ebp
	faddl	(%ebp)
	cmpl	$0,ffloat
	jne	laf__1
	calll	gcfloat
laf__1:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,farg2
	fstpl	(%ebp)
	fwait
	ret	
cfsub:
	movl	farg1,%ebp
	fldl	(%ebp)
	movl	farg2,%ebp
	fsubrl	(%ebp)
	cmpl	$0,ffloat
	jne	laf__2
	calll	gcfloat
laf__2:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,farg2
	fstpl	(%ebp)
	fwait
	ret	
cfmul:
	movl	farg1,%ebp
	fldl	(%ebp)
	movl	farg2,%ebp
	fmull	(%ebp)
	cmpl	$0,ffloat
	jne	laf__3
	calll	gcfloat
laf__3:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,farg2
	fstpl	(%ebp)
	fwait
	ret	
cfdiv:
	movl	farg1,%ebp
	fldl	(%ebp)
	movl	farg2,%ebp
	fdivrl	(%ebp)
	cmpl	$0,ffloat
	jne	laf__4
	calll	gcfloat
laf__4:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,farg2
	fstpl	(%ebp)
	fwait
	ret	
cret1:
	ret	
cfeqn:
	movl	farg1,%ebp
	fldl	(%ebp)
	pushl	%eax
	movl	farg2,%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	je	cret1
	movl	%esi,farg2
	ret	
cfneqn:
	movl	farg1,%ebp
	fldl	(%ebp)
	pushl	%eax
	movl	farg2,%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	jne	cret1
	movl	%esi,farg2
	ret	
cfgt:
	movl	farg1,%ebp
	fldl	(%ebp)
	pushl	%eax
	movl	farg2,%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	ja	cret1
	movl	%esi,farg2
	ret	
cfge:
	movl	farg1,%ebp
	fldl	(%ebp)
	pushl	%eax
	movl	farg2,%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	jae	cret1
	movl	%esi,farg2
	ret	
cflt:
	movl	farg1,%ebp
	fldl	(%ebp)
	pushl	%eax
	movl	farg2,%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	jb	cret1
	movl	%esi,farg2
	ret	
cfle:
	movl	farg1,%ebp
	fldl	(%ebp)
	pushl	%eax
	movl	farg2,%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	jbe	cret1
	movl	%esi,farg2
	ret	

	# FENTRY llstart
	.align	4
llstart:
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	%ebp
	movl	%esp,spext
	movl	$0,itstate
	movl	$0,itcount
	movl	$0,brkcnt
	movl	$0,_mouscnt
	movl	$0,clkcnt
	movl	bsymb,%esi
	movl	bcons,%edi
	movl	bcons,%ebp
	movl	%ebp,bold
	movl	$zprtmsgs,prtmsgs
	calll	inton
	movl	%edi,%ebp
	subl	bnumb,%ebp
	shrl	$3,%ebp
	movl	%ebp,delta_cons
	finit
	movl	$1,state
	jmp	llinit000
getbstack:
	pushl	%ebp
	movl	%esp,%ebp
	pushl	%ebx
	pushl	%ecx
	movl	%esp,%ebx
	andl	$0x0fffff000,%ebx
	subl	12(%ebp),%ebx
	movl	%ebx,%eax
	movl	8(%ebp),%ecx
	subl	%ecx,%ebx
getbstack2:
	pushl	$0
	cmpl	%ebx,%esp
	ja	getbstack2
	popl	%ecx
	popl	%ebx
	movl	%ebp,%esp
	leave
	ret	
ll_corsav:
	movl	%ebp,name000
	cmpl	bcons,%edi
	je	ll_sav1
	pushl	%edi
	calll	hgc
	popl	%edi
ll_sav1:
	movl	%esp,savsp
	movl	$bsave,bllm3
	movl	$eimpur,ellm3
	movl	ccode,%ebp
	movl	%ebp,llucode
	movl	cheap,%ebp
	movl	%ebp,lluheap
	movl	spext,%esp
	movl	$2,state
	pushl	name000
	calll	corsav
	movl	%eax,%ebp
	addl	$4,%esp
	movl	savsp,%esp
	movl	$1,state
	ret	
ll_corest:
	movl	%esp,savsp1
	movl	%ebp,name000
	movl	%esp,savsp
	movl	spext,%esp
	movl	$2,state
	movl	$bsave,bllm3
	pushl	name000
	calll	corest
	orw	%ax,%ax
	je	ll_crest
	movl	$1,state
	movl	savsp1,%esp
	jmp	ll_corret
ll_crest:
	movl	%eax,%ebp
	movl	savsp,%esp
	movl	$1,state
	movl	%esi,4(%esp)
ll_corret:
	ret	
llcorgo:
	movl	%esp,spext
	movl	$1,state
	movl	savsp,%esp
	movl	bsymb,%esi
	movl	bcons,%edi
	movl	%esi,%eax
	addl	$8,%esp
	ret	
ll_exit:
	movl	spext,%esp
	jmp	outner
exwer:
	movl	spext,%esp
	jmp	outwer
ll_break:
	incw	brkcnt
	incw	itcount
	calll	inton
	cmpw	$4,brkcnt
	jge	ll_panic
ll_brear:
	ret	
ll_panic:
	cmpw	$0,itstate
	je	ll_brear
	cmpw	$0,state
	je	llpanicc
	cmpw	$1,state
	je	llpanicl
	jmp	llpanice
llpanicc:
	movl	splisp,%esp
	movl	$1,state
	popl	%ebp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	calll	gopanic
	movl	$65536+-1,%ebp
	ret	
llpanicl:
	movl	spext,%ebp
	movl	%ebp,spext1
	calll	restore
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	spext1
	calll	panicl1
	addl	$4,%esp
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	ret	
panicl1:
	movl	$gopanic,%ecx
	calll	sysprot
	popl	%eax
	movl	4(%esp),%ebp
	movl	%ebp,spext
	jmp	*%ecx
llpanice:
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	%ebp
	pushl	splisp
	pushl	sparg
	pushl	spext
	movl	%esp,spext
	movl	sparg,%esp
	movl	$1,state
	calll	panice1
	movl	spext1,%esp
	movl	$2,state
	addl	$12,%esp
	popl	%ebp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	ret	
panice1:
	calll	restore
	movl	$gopanic,%ecx
	calll	sysprot
	popl	%eax
	movl	spext,%ebp
	movl	%ebp,spext1
	movl	spext,%edx
	movl	(%edx),%ebp
	movl	%ebp,spext
	addl	$4,%edx
	movl	(%edx),%ebp
	movl	%ebp,sparg
	addl	$4,%edx
	movl	(%edx),%ebp
	movl	%ebp,splisp
	addl	$4,%edx
	jmp	*%ecx
gopanic:
	calll	restore
	movw	brkcnt,%bp
	subw	%bp,itcount
	movl	$0,brkcnt
	movl	$gopanic1,%ecx
	calll	sysprot
	popl	%eax
	movl	$1,itstate
	jmp	*%ecx
gopanic1:
	movl	$0,itstate
	jmp	llpanic
restore:
	movl	bsymb,%esi
	movl	bcons,%edi
	ret	
ll_clock:
	cmpw	$1,clkcnt
	je	llclk1
	movl	$1,clkcnt
	incw	itcount
llclk1:
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	%ebp
	calll	inton
	popl	%ebp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	ret	
ithard:
	cmpw	$0,itstate
	je	ithardr
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	calll	ithardd
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	ret	
ithardd:
	movl	$ithard0,%ecx
	calll	sysprot
	popl	%eax
	movl	$1,itstate
	jmp	*%ecx
ithard0:
	movl	$0,itstate
	cmpw	$0,brkcnt
	je	ithard1
	movw	brkcnt,%bp
	subw	%bp,itcount
	movl	$0,brkcnt
	calll	llbreak
ithard1:
	cmpw	$1,_mouscnt
	jne	ithard2
	decw	itcount
	movl	$0,_mouscnt
	calll	llmouse
ithard2:
	cmpw	$0,clkcnt
	je	ithardr
	movl	$0,itcount
	movl	$0,clkcnt
	calll	llclock
ithardr:
	ret	
ll_merro:
	movl	4(%esp),%ebp
	movl	%ebp,signum
	calll	inton
	cmpw	$0,state
	je	llmerroc
	cmpw	$1,state
	je	llmerrol
	jmp	llmerroe
llmerroc:
	movl	splisp,%esp
	movl	$1,state
	popl	%ebp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	calll	restore
	movl	signum,%ebx
	calll	llmerro
	movl	$65536+-1,%ebp
	ret	
llmerrol:
	calll	restore
	movl	signum,%ebx
	calll	llmerro
	ret	
llmerroe:
	movl	splisp,%esp
	movl	$1,state
	calll	restore
merroe1:
	movl	signum,%ebx
	calll	llmerro
	jmp	merroe1
ll_callg:
	movl	callsp,%ebp
	movl	%ebp,callsp1
	movl	%esp,callsp
	movl	4(%esp),%ebp
	movl	%ebp,callnarg
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	movl	callsp,%edx
	pushl	callsp1
	movl	callnarg,%ebp
	leal	(%edx,%ebp,4),%edx
	movl	(%edx),%ebp
	movl	%ebp,calltypr
	pushl	calltypr
	pushl	splisp
	calll	call_c1
	addl	$12,%esp
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	movl	calltypr,%esi
	movl	callreg0,%edi
	movl	callreg1,%ebp
	movl	%ebp,dux1
	cmpw	$2,%si
	jne	ll_callg0
	fstpl	callreg0
ll_callg0:
	calll	ll_build
	popl	%ecx
	popl	%edx
	movl	bsymb,%esi
	movl	bcons,%edi
	jmp	*%ecx
call_c1:
	movl	$call_c2,%ecx
	calll	sysprot
	movl	extvflag,%eax
	cmpl	%esi,%eax
	je	noextv
	calll	extvrest
noextv:
	popl	%eax
	movl	4(%esp),%ebp
	movl	%ebp,splisp
	movl	8(%esp),%ebp
	movl	%ebp,calltypr
	movl	12(%esp),%ebp
	movl	%ebp,callsp
	jmp	*%ecx
call_c2:
	movl	%esp,splisp
	movl	%esp,sparg
	movl	$2,state
	movl	spext,%esp
	movl	callsp,%edx
	addl	$8,%edx
	movl	callnarg,%ecx
	calll	ll_conve
	movl	(%edx),%ebp
	movl	%ebp,calltypr
	addl	$4,%edx
	movl	(%edx),%ebp
	movl	%ebp,callgadr
	addl	$4,%edx
	movl	%esp,spext1
	movl	aux1,%ecx
	movl	%ecx,%ebp
	leal	(,%ebp,4),%ebp
	subl	%ebp,%esp
	movl	%esp,%edi
	movl	$calltarg,%esi
	subl	%ebp,%esi
	rep
	movsl
	movl	bcons,%edi
	movl	bsymb,%esi
	pushl	$call_c5
	movl	callgadr,%ecx
	jmp	*%ecx
call_c5:
	movl	spext1,%esp
	movl	%eax,callreg0
	movl	%edx,callreg1
	movl	splisp,%esp
	movl	$1,state
	calll	restore
	ret	
extvrest:
	movl	callsp,%eax
	addl	$4,%eax
	movl	(%eax),%ebp
	movl	%ebp,aux1
	addl	$4,%eax
	jmp	extv1
extv2:
	movl	(%eax),%edi
	addl	$4,%eax
	cmpw	$7,%di
	jne	extv3
	movl	(%eax),%esi
	addl	$4,%eax
	# FIXV_X_LL start
	pushl	%esi
	pushl	%ecx
	pushl	%edi
	movl	(%esi),%esi
	addl	$8,%esi
	movl	-4(%esi),%ecx
fixvxllcvt:
	cmpl	$0,%ecx
	jle	fixvxlldone
	andl	$0x0000ffff,(%esi)
	addl	$4,%esi
	decl	%ecx
	jmp	fixvxllcvt
fixvxlldone:
	popl	%edi
	popl	%ecx
	popl	%esi
	# FIXV_X_LL end
	jmp	extv1
extv3:
	cmpw	$8,%di
	jne	extv4
	movl	(%eax),%esi
	addl	$4,%eax
	jmp	extv1
extv4:
	addl	$4,%eax
extv1:
	decw	aux1
	decw	aux1
	jg	extv2
	ret	
ll_conve:
	movl	$calltarg,%eax
	movl	$callrarg,%ebx
	movl	%esi,extvflag
	subw	$2,%cx
	movl	$0,aux1
	jmp	ll_convl
ll_conv0:
	decw	%cx
	incw	aux1
	movl	(%edx),%edi
	addl	$4,%edx
	movl	(%edx),%esi
	addl	$4,%edx
ll_conv1:
	cmpw	$1,%di
	jne	ll_conv2
	movl	%esi,%edi
	movswl	%di,%edi
	subl	$4,%eax
	movl	%edi,(%eax)
	jmp	ll_convl
ll_conv2:
	cmpw	$2,%di
	jne	ll_conv3
	movl	4(%esi),%ebp
	movl	%ebp,dux1
	movl	(%esi),%edi
	subl	$4,%eax
	movl	dux1,%ebp
	movl	%ebp,(%eax)
	subl	$4,%eax
	movl	%edi,(%eax)
	incw	aux1
	jmp	ll_convl
ll_conv3:
	cmpw	$3,%di
	jne	ll_conv4
	movl	(%esi),%esi
	addl	$8,%esi
	subl	$4,%eax
	movl	%esi,(%eax)
	jmp	ll_convl
ll_conv4:
	cmpw	$4,%di
	jne	ll_conv5
	# VECT_LL_C start
	movl	(%esi),%esi
	addl	$8,%esi
	# VECT_LL_C end
	subl	$4,%eax
	movl	%esi,(%eax)
	jmp	ll_convl
ll_conv5:
	cmpw	$5,%di
	jne	ll_conv6
	movl	%esi,%edi
	# RFIX_LL_X start
	subl	$4,%ebx
	movswl	%di,%edi
	movl	%edi,(%ebx)
	# RFIX_LL_X end
	subl	$4,%eax
	movl	%ebx,(%eax)
	jmp	ll_convl
ll_conv6:
	cmpw	$6,%di
	jne	ll_conv7
	subl	$4,%ebx
	movl	(%esi),%ebp
	movl	%ebp,(%ebx)
	movl	4(%esi),%ebp
	movl	%ebp,4(%ebx)
	subl	$4,%eax
	movl	%ebx,(%eax)
	jmp	ll_convl
ll_conv7:
	cmpw	$7,%di
	jne	ll_conv8
	# FIXV_LL_X start
	movl	(%esi),%esi
	pushl	%ecx
	pushl	%edi
	addl	$4,%esi
	movl	(%esi),%ecx
	addl	$4,%esi
	pushl	%esi
fixvllxcvt:
	cmpl	$0,%ecx
	jle	fixvllxdone
	movl	(%esi),%edi
	movswl	%di,%edi
	movl	%edi,(%esi)
	addl	$4,%esi
	decl	%ecx
	jmp	fixvllxcvt
fixvllxdone:
	popl	%esi
	popl	%edi
	popl	%ecx
	# FIXV_LL_X end
	subl	$4,%eax
	movl	%esi,(%eax)
	movl	$0,extvflag
	jmp	ll_convl
ll_conv8:
	cmpw	$8,%di
	jne	ll_conv9
	subl	$4,%eax
	movl	%esi,(%eax)
	movl	$0,extvflag
	jmp	ll_convl
ll_conv9:
	subl	$4,%eax
	movl	%esi,(%eax)
ll_convl:
	decw	%cx
	jg	ll_conv0
	ret	
ll_build:
ll_buil1:
	cmpw	$1,%si
	jne	ll_buil2
	movl	%edi,%ebp
	andl	$0x0000ffff,%ebp
	ret	
ll_buil2:
	cmpw	$2,%si
	jne	ll_buil3
	cmpl	$0,ffloat
	jne	laf__5
	calll	gcfloat
laf__5:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	fldl	callreg0
	fstpl	%ds:(%ebp)
	fwait
	ret	
ll_buil3:
	cmpw	$3,%si
	jne	ll_buil4
	movl	%edi,%ebx
	movl	$0,%eax
	jmp	ll_buil1__6
ll_buil__6:
	incw	%ax
ll_buil1__6:
	cmpb	$0,(%edi,%eax,1)
	jne	ll_buil__6
	pushl	%eax
	pushl	%edi
	movl	bcons,%edi
	movl	bsymb,%esi
	calll	crastrg
	popl	%edi
	movl	%eax,%ebp
	popl	%edi
	ret	
ll_buil4:
	cmpw	$4,%si
	jne	ll_buil5
	xorl	%ebp,%ebp
	ret	
ll_buil5:
	movl	%edi,%ebp
	ret	
getsym:
	movl	%ebp,saurwork
	movl	4(%esp),%ebp
	movl	%ebp,callreg0
	movl	saurwork,%ebp
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	%ebp
	pushl	splisp
	pushl	spext
	movl	%esp,spext
	movl	sparg,%esp
	movl	$1,state
	calll	getsym1
	movl	%edx,%esp
	movl	$2,state
	popl	%ebp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	movl	callreg0,%eax
	ret	
getsym1:
	calll	restore
	movl	$getsym2,%ecx
	calll	sysprot
	popl	%eax
	movl	spext,%edx
	movl	(%edx),%ebp
	movl	%ebp,spext
	addl	$4,%edx
	movl	(%edx),%ebp
	movl	%ebp,splisp
	addl	$4,%edx
	jmp	*%ecx
getsym2:
	pushl	%edi
	movl	callreg0,%edi
	movl	%edi,%ebx
	movl	$0,%eax
	jmp	ll_buil1__7
ll_buil__7:
	incw	%ax
ll_buil1__7:
	cmpb	$0,(%edi,%eax,1)
	jne	ll_buil__7
	pushl	%eax
	pushl	%edi
	movl	bcons,%edi
	movl	bsymb,%esi
	calll	crastrg
	popl	%edi
	movl	%eax,%ebx
	popl	%eax
	popl	%edi
	calll	trysymb
	movl	%eax,callreg0
	ret	
pushargd:
pusharg:
	movl	%ebp,saurwork
	movl	12(%esp),%ebp
	movl	%ebp,callreg1
	movl	8(%esp),%ebp
	movl	%ebp,callreg0
	movl	4(%esp),%ebp
	movl	%ebp,calltypr
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	%ebp
	pushl	splisp
	pushl	spext
	movl	%esp,spext
	movl	sparg,%esp
	movl	$1,state
	calll	restore
	movl	callreg0,%edi
	movl	callreg1,%ebp
	movl	%ebp,dux1
	movl	calltypr,%esi
	calll	ll_build
	pushl	%ebp
	movl	%esp,sparg
	movl	spext,%ebp
	movl	%ebp,spext1
	movl	spext,%edx
	movl	(%edx),%ebp
	movl	%ebp,spext
	addl	$4,%edx
	movl	(%edx),%ebp
	movl	%ebp,splisp
	addl	$4,%edx
	movl	%edx,%esp
	movl	$2,state
	popl	%ebp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	movl	saurwork,%ebp
	ret	
lispcall:
	movl	%ebp,saurwork
	movl	4(%esp),%ebp
	movl	%ebp,calltypr
	movl	8(%esp),%ebp
	movl	%ebp,callnarg
	movl	12(%esp),%ebp
	movl	%ebp,callsymb
	movl	saurwork,%ebp
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	%ebp
	pushl	calltypr
	pushl	splisp
	pushl	spext
	movl	%esp,spext
	movl	sparg,%esp
	movl	$1,state
	calll	call_l1
	movl	calltypr,%esi
	calll	ll_resl
	movl	%edi,callreg0
	movl	dux1,%ebp
	movl	%ebp,callreg1
	movl	spext1,%esp
	movl	$2,state
	addl	$12,%esp
	movl	splisp,%ebp
	movl	%ebp,sparg
	popl	%ebp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	movl	callreg0,%eax
	movl	callreg1,%edx
	ret	
call_l1:
	calll	restore
	movl	$call_l2,%ecx
	calll	sysprot
	popl	callreg0
	movl	spext,%ebp
	movl	%ebp,spext1
	movl	spext,%edx
	movl	(%edx),%ebp
	movl	%ebp,spext
	addl	$4,%edx
	movl	(%edx),%ebp
	movl	%ebp,splisp
	addl	$4,%edx
	movl	(%edx),%ebp
	movl	%ebp,calltypr
	jmp	*%ecx
call_l2:
	movl	sparg,%edx
	movl	callnarg,%ebp
	leal	(%edx,%ebp,4),%edx
	movl	callnarg,%ecx
	movl	%ecx,%ebp
	leal	(,%ebp,4),%ebp
	subl	%ebp,%esp
	movl	%esp,%edi
	movl	%edx,%esi
	subl	%ebp,%esi
	rep
	movsl
	movl	bcons,%edi
	movl	bsymb,%esi
	movl	callsymb,%eax
	movl	callnarg,%edx
	jmp	ffuncall
ll_resl:
ll_res1:
	cmpw	$1,%si
	jne	ll_res2
	movl	callreg0,%edi
	movswl	%di,%edi
	ret	
ll_res2:
	cmpw	$2,%si
	jne	ll_res3
	movl	callreg0,%edi
	movl	4(%esi),%ebp
	movl	%ebp,dux1
	movl	(%esi),%edi
	ret	
ll_res3:
	cmpw	$3,%si
	jne	ll_res4
	movl	callreg0,%esi
	movl	(%esi),%esi
	addl	$8,%esi
	movl	%esi,%edi
	ret	
ll_res4:
	cmpw	$4,%si
	jne	ll_res5
	movl	callreg0,%esi
	# VECT_LL_C start
	movl	(%esi),%esi
	addl	$8,%esi
	# VECT_LL_C end
	movl	%esi,%edi
	ret	
ll_res5:
	movl	callreg0,%edi
	ret	
cfloat_to_lfloat:
	movl	%ebp,saurwork
	movl	8(%esp),%ebp
	movl	%ebp,callreg1
	movl	4(%esp),%ebp
	movl	%ebp,callreg0
	movl	saurwork,%ebp
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	%ebp
	pushl	splisp
	pushl	spext
	movl	%esp,spext
	movl	sparg,%esp
	movl	$1,state
	calll	restore
	movl	callreg0,%edi
	movl	callreg1,%ebp
	movl	%ebp,dux1
	cmpl	$0,ffloat
	jne	laf__8
	calll	gcfloat
laf__8:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	fldl	callreg0
	fstpl	%ds:(%ebp)
	fwait
	movl	%ebp,callreg0
	movl	spext,%ebp
	movl	%ebp,spext1
	movl	spext,%edx
	movl	(%edx),%ebp
	movl	%ebp,spext
	addl	$4,%edx
	movl	(%edx),%ebp
	movl	%ebp,splisp
	addl	$4,%edx
	movl	%edx,%esp
	movl	$2,state
	popl	%ebp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	movl	callreg0,%eax
	ret	
lfloat_to_cfloat:
#	New macro CVTFLT_LL_C
	pushl	%ebp
	movl	%esp,%ebp
	movl	8(%ebp),%eax
	fldl	(%eax)
	movl	%ebp,%esp
	popl	%ebp
	ret	
