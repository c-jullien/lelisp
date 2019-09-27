	.file	"fspecs.asm"
	.version	"02.01"
	.text	
	.align	4
	.data
	.align	4
	.globl	mstack
	.globl	fcons
	.globl	bvar
	.globl	zundef
	.globl	zllsystem
	.globl	itstate
	.globl	itcount
	.globl	cpkgc
	.globl	dlink
	.globl	llink
	.globl	savea1
	.globl	savea2
	.globl	savea3
	.globl	savea4
	.globl	intret
	.globl	errname
	.globl	intllink
savits:
	.long	0
pnmac223:
	.string	"schedule"
	.even
pnmac224:
	.string	"suspend"
	.even
pnmac225:
	.string	"resume"
	.even
pnmac226:
	.string	"tagbody"
	.even
pnmac227:
	.string	"go"
	.even
pnmac228:
	.string	"block"
	.even
pnmac229:
	.string	"return"
	.even
pnmac230:
	.string	"return-from"
	.even
zkllcp:
	.long	0
pnmac231:
	.string	"llcp"
	.even
pnmac232:
	.string	"cbind0"
	.even
pnmac233:
	.string	"cbind1"
	.even
pnmac234:
	.string	"cbind2"
	.even
pnmac235:
	.string	"cbind3"
	.even
pnmac236:
	.string	"cbindn"
	.even
pnmac237:
	.string	"cbindl"
	.even
pnmac238:
	.string	"cbinds"
	.even
pnmac239:
	.string	"exit"
	.even
pnmac240:
	.string	"tag"
	.even
pnmac241:
	.string	"prot"
	.even
pnmac242:
	.string	"lock"
	.even
pnmac243:
	.string	"schedule"
	.even
pnmac244:
	.string	"block"
	.even
pnmac245:
	.string	"retfrom"
	.even
pnmac246:
	.string	"go"
	.even
pnmac247:
	.string	"tagbody"
	.even
pnmac248:
	.string	"ffuncall"
	.even
pnmac249:
	.string	"with-interrupts"
	.even
pnmac250:
	.string	"without-interrupts"
	.even
pnmac251:
	.string	"nlist"
	.even
pnmac252:
	.string	"errwna"
	.even
zddlink:
	.long	0
pnmac253:
	.string	"dlink"
	.even
zdllink:
	.long	0
pnmac254:
	.string	"llink"
	.even
zditcnt:
	.long	0
pnmac255:
	.string	"itcount"
	.even
znvar:
	.long	0
pnmac256:
	.string	"n"
	.even
pnmac257:
	.string	"fibd"
	.even
pnmac258:
	.string	"fibl"
	.even
pnmac259:
	.string	"fibml"
	.even
zschedule:
	.long	0
zsuspend:
	.long	0
lab_m__6:
	.string	" error SUSPN "
	.even
zresume:
	.long	0
ztagbody:
	.long	0
zgo:
	.long	0
zblock:
	.long	0
zllret:
	.long	0
zllretf:
	.long	0
zcbind0:
	.long	0
zcbind1:
	.long	0
zcbind2:
	.long	0
zcbind3:
	.long	0
zcbindn:
	.long	0
zcbindl:
	.long	0
zcbinds:
	.long	0
zctag:
	.long	0
zcprot:
	.long	0
zcmplock:
	.long	0
zcsched:
	.long	0
zcblock:
	.long	0
zcexit:
	.long	0
zcretfr:
	.long	0
zcgo:
	.long	0
zctagbody:
	.long	0
zcffuncall:
	.long	0
zcwithit:
	.long	0
zcwithnoit:
	.long	0
zllcpnlist:
	.long	0
zllcperwna:
	.long	0
zfibd:
	.long	0
zfibl:
	.long	0
zfibml:
	.long	0
	.globl	bfloat
	.globl	cfloat
	.globl	ffloat
	.globl	bvect
	.globl	cvect
	.globl	fvect
	.globl	bstrg
	.globl	cstrg
	.globl	fstrg
	.globl	csymb
	.globl	fsymb
	.globl	ccons
	.globl	econs
	.globl	bheap
	.globl	cheap
	.globl	eheap
	.globl	bnumb
	.globl	cnumb
	.globl	bstack
	.globl	estack
	.globl	crwork
	.text
	.align	4
	.globl	errfs
	.globl	erres
	.globl	errnab
	.globl	errsym
	.globl	errxia
	.globl	errwna
	.globl	gccons
	.globl	inisymb
	.globl	inicst
	.globl	findtag
	.globl	evala1
	.globl	apply
	.globl	unbind0
	.globl	unbind1
	.globl	unbinp1
	.globl	unbind2
	.globl	unbind3
	.globl	unbind4
	.globl	unbind5
	.globl	unbind6
	.globl	unbind7
	.globl	unbind8
	.globl	unbind9
	.globl	unbind10
	.globl	evexpg
	.globl	unbinp
	.globl	evprogn
	.globl	evbndext
	.globl	bndtrbex
	.globl	sysprot
	.globl	ffuncall
	.globl	evbale
	.globl	deset
	.globl	loc
	.globl	ini_spec
	.globl	zkllcp
	.globl	_ttyout
	.globl	ithard

	# FENTRY ini_spec
	.align	4
ini_spec:
	movl	$8,%eax
	movl	$pnmac223,%ebx
	movl	$schedule,%ecx
	movl	$zschedule,%edx
	pushl	$6
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac224,%ebx
	movl	$suspend,%ecx
	movl	$zsuspend,%edx
	pushl	$1
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac225,%ebx
	movl	$resume,%ecx
	movl	$zresume,%edx
	pushl	$2
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac226,%ebx
	movl	$tagbody,%ecx
	movl	$ztagbody,%edx
	pushl	$6
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac227,%ebx
	movl	$go,%ecx
	movl	$zgo,%edx
	pushl	$6
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac228,%ebx
	movl	$block,%ecx
	movl	$zblock,%edx
	pushl	$6
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac229,%ebx
	movl	$llret,%ecx
	movl	$zllret,%edx
	pushl	$6
	calll	inisymb
	movl	$11,%eax
	movl	$pnmac230,%ebx
	movl	$llretf,%ecx
	movl	$zllretf,%edx
	pushl	$6
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac231,%ebx
	movl	$zkllcp,%ecx
	calll	inicst
	movl	zkllcp,%ebp
	movl	%ebp,cpkgc
	movl	$6,%eax
	movl	$pnmac232,%ebx
	movl	$cbind0,%ecx
	movl	$zcbind0,%edx
	pushl	$1
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac233,%ebx
	movl	$cbind1,%ecx
	movl	$zcbind1,%edx
	pushl	$1
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac234,%ebx
	movl	$cbind2,%ecx
	movl	$zcbind2,%edx
	pushl	$1
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac235,%ebx
	movl	$cbind3,%ecx
	movl	$zcbind3,%edx
	pushl	$1
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac236,%ebx
	movl	$cbindn,%ecx
	movl	$zcbindn,%edx
	pushl	$1
	calll	inisymb
	movl	$unbind1,%eax
	calll	loc
	movl	zcbindn,%ebx
	movl	%eax,(%ebx)
	movl	$6,%eax
	movl	$pnmac237,%ebx
	movl	$cbindl,%ecx
	movl	$zcbindl,%edx
	pushl	$1
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac238,%ebx
	movl	$cbinds,%ecx
	movl	$zcbinds,%edx
	pushl	$1
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac239,%ebx
	movl	$cexit,%ecx
	movl	$zcexit,%edx
	pushl	$1
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac240,%ebx
	movl	$ctag,%ecx
	movl	$zctag,%edx
	pushl	$1
	calll	inisymb
	movl	$unbind3,%eax
	calll	loc
	movl	zctag,%ebx
	movl	%eax,(%ebx)
	movl	$4,%eax
	movl	$pnmac241,%ebx
	movl	$cprot,%ecx
	movl	$zcprot,%edx
	pushl	$1
	calll	inisymb
	movl	$unbind7,%eax
	calll	loc
	movl	zcprot,%ebx
	movl	%eax,(%ebx)
	movl	$4,%eax
	movl	$pnmac242,%ebx
	movl	$cmplock,%ecx
	movl	$zcmplock,%edx
	pushl	$1
	calll	inisymb
	movl	$unbind5,%eax
	calll	loc
	movl	zcmplock,%ebx
	movl	%eax,(%ebx)
	movl	$8,%eax
	movl	$pnmac243,%ebx
	movl	$csched,%ecx
	movl	$zcsched,%edx
	pushl	$1
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac244,%ebx
	movl	$cblock,%ecx
	movl	$zcblock,%edx
	pushl	$1
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac245,%ebx
	movl	$cretfr,%ecx
	movl	$zcretfr,%edx
	pushl	$1
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac246,%ebx
	movl	$cgo,%ecx
	movl	$zcgo,%edx
	pushl	$1
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac247,%ebx
	movl	$ctagbody,%ecx
	movl	$zctagbody,%edx
	pushl	$1
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac248,%ebx
	movl	$cffuncall,%ecx
	movl	$zcffuncall,%edx
	pushl	$1
	calll	inisymb
	movl	$15,%eax
	movl	$pnmac249,%ebx
	movl	$cwithit,%ecx
	movl	$zcwithit,%edx
	pushl	$1
	calll	inisymb
	movl	$18,%eax
	movl	$pnmac250,%ebx
	movl	$cwithnoit,%ecx
	movl	$zcwithnoit,%edx
	pushl	$1
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac251,%ebx
	movl	$llcpnlist,%ecx
	movl	$zllcpnlist,%edx
	pushl	$1
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac252,%ebx
	movl	$llcperwna,%ecx
	movl	$zllcperwna,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac253,%ebx
	movl	$zddlink,%ecx
	calll	inicst
	movl	$dlink,%eax
	calll	loc
	movl	zddlink,%ebx
	movl	%eax,(%ebx)
	movl	$5,%eax
	movl	$pnmac254,%ebx
	movl	$zdllink,%ecx
	calll	inicst
	movl	$llink,%eax
	calll	loc
	movl	zdllink,%ebx
	movl	%eax,(%ebx)
	movl	$7,%eax
	movl	$pnmac255,%ebx
	movl	$zditcnt,%ecx
	calll	inicst
	movl	$itcount,%eax
	calll	loc
	movl	zditcnt,%ebx
	movl	%eax,(%ebx)
	movl	zllsystem,%ebp
	movl	%ebp,cpkgc
	movl	$1,%eax
	movl	$pnmac256,%ebx
	movl	$znvar,%ecx
	calll	inicst
	movl	%eax,%ebx
	cmpl	%edi,fcons
	jb	l__1
l1__1:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	movl	zundef,%ebp
	movl	%ebp,(%eax)
	movl	%ebx,16(%eax)
	movl	%esi,cpkgc
	movl	$4,%eax
	movl	$pnmac257,%ebx
	movl	$fibd,%ecx
	movl	$zfibd,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac258,%ebx
	movl	$fibl,%ecx
	movl	$zfibl,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac259,%ebx
	movl	$fibml,%ecx
	movl	$zfibml,%edx
	pushl	$2
	calll	inisymb
	ret	

	# FENTRY schedule
	.align	4
schedule:
	cmpl	%esp,mstack
	ja	errfs
	pushl	(%eax)
	pushl	dlink
	pushl	$unbind8
	movl	%esp,dlink
	movl	zschedule,%ebp
	movl	%ebp,errname
	jmp	evexpg

	# FENTRY suspend
	.align	4
suspend:
	movl	itstate,%ebp
	movl	%ebp,savits
	movl	$0,itstate
	movl	%esi,%eax
	jmp	sus00
sus000:
	cmpl	%edi,fcons
	jb	l__2
l1__2:
	xchgl	%edi,fcons
	movl	%edx,(%edi)
	xchgl	%ebx,4(%edi)
	xchgl	%edi,%ebx
	xchgl	%edi,fcons
	cmpl	%edi,fcons
	jb	l__3
l1__3:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
sus00:
	movl	dlink,%ecx
	movl	%esi,%ebx
	jmp	sus02
sus01:
	popl	%edx
	cmpl	%edi,fcons
	jb	l__4
l1__4:
	xchgl	%edi,fcons
	movl	%edx,(%edi)
	xchgl	%ebx,4(%edi)
	xchgl	%edi,%ebx
	xchgl	%edi,fcons
sus02:
	movl	%esp,%edx
	cmpl	%ecx,%edx
	jne	sus01
	cmpl	%edi,fcons
	jb	l__5
l1__5:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	movl	%esi,%ebx
	popl	%edx
	popl	dlink
	cmpl	$unbind0,%edx
	je	susb0
	cmpl	$unbind1,%edx
	je	susb1
	cmpl	$unbind2,%edx
	je	susb2
	cmpl	$unbind3,%edx
	je	susb3
	cmpl	$unbind4,%edx
	je	susb4
	cmpl	$unbind5,%edx
	je	susb5
	cmpl	$unbind6,%edx
	je	susb6
	cmpl	$unbind7,%edx
	je	susb7
	cmpl	$unbind8,%edx
	je	susb8
	cmpl	$unbind9,%edx
	je	susb9
	cmpl	$unbind10,%edx
	je	susb10
	# Prepare a C function call with 2 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	$lab_m__6
	pushl	$13
	calll	_ttyout
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
susb0:
	jmp	erres
susb1:
	movl	8(%esp),%ebx
	calll	sus100
	cmpl	%edi,fcons
	jb	l__7
l1__7:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	movl	%eax,savea1
	movl	12(%esp),%edx
	addw	$4,%dx
	xorl	%ecx,%ecx
	movl	%esi,%ebx
susb11:
	movl	(%esp,%ecx,4),%eax
	cmpl	%edi,fcons
	jb	l__8
l1__8:
	xchgl	%edi,fcons
	movl	%eax,(%edi)
	xchgl	%ebx,4(%edi)
	xchgl	%edi,%ebx
	xchgl	%edi,fcons
	incw	%cx
susb12:
	decw	%dx
	jg	susb11
	movl	savea1,%eax
	movl	$susb13,%ecx
	pushl	dlink
	jmp	unbinp1
susb13:
	movl	$unbind1,%edx
	jmp	sus000
sus100:
	cmpl	%edi,%ebx
	jl	sus101
	pushl	(%ebx)
	movl	4(%ebx),%ebx
	calll	sus100
	xchgl	%ebx,(%esp)
	calll	sus100
	popl	%ecx
	cmpl	%edi,fcons
	jb	l__9
l1__9:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%ecx,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	ret	
sus101:
	cmpl	%esi,%ebx
	je	sus102
	movl	(%ebx),%ebx
sus102:
	ret	
susb2:
	popl	%ecx
	orl	%ecx,%ecx
	je	sus23
	movzwl	24(%ecx),%edx
	cmpl	%edi,fcons
	jb	l__10
l1__10:
	xchgl	%edi,fcons
	movl	%edx,(%edi)
	xchgl	%ebx,4(%edi)
	xchgl	%edi,%ebx
	xchgl	%edi,fcons
	popl	%edx
	movw	%dx,24(%ecx)
	cmpl	%edi,fcons
	jb	l__11
l1__11:
	xchgl	%edi,fcons
	movl	8(%ecx),%ebp
	movl	%ebp,(%edi)
	xchgl	%ebx,4(%edi)
	xchgl	%edi,%ebx
	xchgl	%edi,fcons
	popl	8(%ecx)
	cmpl	%edi,fcons
	jb	l__12
l1__12:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%ebx,4(%edi)
	xchgl	%edi,%ebx
	xchgl	%edi,fcons
	jmp	susb2
sus23:
	movl	$unbind2,%edx
	jmp	sus000
susb3:
susb5:
susb6:
susb7:
susb9:
susb10:
	popl	%ebx
	jmp	sus000
susb4:
	popl	%ecx
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__13
l1__13:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%ebx,4(%edi)
	xchgl	%edi,%ebx
	xchgl	%edi,fcons
	jmp	sus000
susb8:
	movl	(%esp),%ecx
	pushl	dlink
	pushl	$unbind8
	movl	%esp,dlink
	cmpl	%edi,fcons
	jb	l__14
l1__14:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	movl	%eax,%ebx
	movl	%ecx,%eax
	movl	savits,%ebp
	movl	%ebp,itstate
	jmp	apply

	# FENTRY resume
	.align	4
resume:
	movl	itstate,%ebp
	movl	%ebp,savits
	movl	$0,itstate
	cmpl	%esi,%eax
	je	resso
restes:
	movl	dlink,%esp
	movl	(%esp),%ecx
	cmpl	$unbind8,%ecx
	je	resfin
	movl	$restes,%ecx
	jmp	unbinp
res00:
	movl	(%eax),%ebx
	movl	4(%eax),%eax
	movl	(%ebx),%ecx
	movl	4(%ebx),%ebx
	cmpl	$unbind2,%ecx
	je	res20
	cmpl	$unbind4,%ecx
	je	res40
	cmpl	$unbind1,%ecx
	jne	resn1
res11:
	cmpl	%esi,%ebx
	je	res12
	pushl	(%ebx)
	movl	4(%ebx),%ebx
	jmp	res11
res12:
	movl	(%esp),%ebp
	movl	%ebp,llink
	movl	(%eax),%ebx
	pushl	4(%eax)
	movl	12(%esp),%eax
	calll	deset
	popl	%eax
	pushl	dlink
	pushl	$unbind1
	movl	%esp,dlink
	jmp	resfin
res20:
	pushl	$0
res21:
	cmpl	%esi,%ebx
	je	res22
	movl	(%ebx),%ecx
	movl	4(%ebx),%ebx
	pushl	8(%ecx)
	movl	(%ebx),%ebp
	movl	%ebp,8(%ecx)
	movl	4(%ebx),%ebx
	movzwl	24(%ecx),%edx
	pushl	%edx
	movl	(%ebx),%edx
	movw	%dx,24(%ecx)
	movl	4(%ebx),%ebx
	pushl	%ecx
	jmp	res21
res22:
	pushl	dlink
	pushl	$unbind2
	movl	%esp,dlink
	jmp	resfin
res40:
	pushl	4(%ebx)
	movl	(%ebx),%ebx
resn1:
	pushl	%ebx
	pushl	dlink
	pushl	%ecx
	movl	%esp,dlink
resfin:
	movl	(%eax),%ebx
	movl	4(%eax),%eax
res14:
	cmpl	%esi,%ebx
	je	res15
	pushl	(%ebx)
	movl	4(%ebx),%ebx
	jmp	res14
res15:
	cmpl	%esi,4(%eax)
	jne	res00
resso:
	movl	%esi,%ebx
	movl	%esi,%ecx
	movl	%esi,%edx
	movl	savits,%ebp
	movl	%ebp,itstate
	ret	

	# FENTRY tagbody
	.align	4
tagbody:
	cmpl	%edi,%eax
	jl	tagbdr
	movl	%eax,%ecx
	xorl	%edx,%edx
tagbdr2:
	movl	(%ecx),%ebx
	movl	4(%ecx),%ecx
	cmpl	%edi,%ebx
	jge	tagbdr3
	pushl	%ecx
	pushl	%ebx
	incw	%dx
tagbdr3:
	cmpl	%edi,%ecx
	jge	tagbdr2
	pushl	%edx
	xorl	%ebx,%ebx
	cmpl	%edi,fcons
	jb	l__15
l1__15:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	pushl	%ebx
	pushl	dlink
	pushl	$unbind9
	movl	%esp,dlink
	movl	dlink,%ebp
	movl	%ebp,4(%ebx)
	cmpl	%edi,fcons
	jb	l__16
l1__16:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	movl	llink,%ebp
	xchgl	%ebp,4(%edi)
	xchgl	%ebp,%edi
	movl	%ebp,llink
	xchgl	%edi,fcons
	movl	%eax,%ebx
	jmp	tagbd4
tagbd2:
	movl	(%ebx),%eax
	cmpl	%edi,%eax
	jl	tagbd3
	pushl	%ebx
	calll	evala1
	popl	%ebx
tagbd3:
	movl	4(%ebx),%ebx
tagbd4:
	cmpl	%edi,%ebx
	jge	tagbd2
tagbdr:
	movl	%esi,%eax
	ret	

	# FENTRY go
	.align	4
go:
	movl	(%eax),%eax
llgof1:
	movl	llink,%edx
	jmp	llgof6
llgof2:
	movl	(%edx),%ecx
	cmpl	$0,(%ecx)
	jne	llgof5
	movl	4(%ecx),%ebx
	cmpl	%esi,%ebx
	je	llgof5
	pushl	%edx
	pushl	%ebx
	addl	$12,%ebx
	movl	(%ebx),%edx
	addl	$4,%ebx
	jmp	llgof4
llgof3:
	movl	(%ebx),%ecx
	cmpl	%eax,%ecx
	je	llgof7
	addl	$8,%ebx
llgof4:
	decw	%dx
	jge	llgof3
	addl	$4,%esp
	popl	%edx
llgof5:
	movl	4(%edx),%edx
llgof6:
	cmpl	%edi,%edx
	jge	llgof2
	movl	zgo,%ebx
	jmp	errnab
llgof7:
	addl	$4,%ebx
	movl	(%ebx),%ebx
	movl	(%esp),%eax
llgof8:
	movl	dlink,%edx
	movl	%edx,%esp
	cmpl	%eax,%edx
	je	llgof9
	movl	$llgof8,%ecx
	jmp	unbinp
llgof9:
	cmpl	%ebx,bfloat
	ja	lmac260
	cmpl	%ebx,econs
	ja	tagbd4
lmac260:
	jmp	*%ebx

	# FENTRY block
	.align	4
block:
	movl	(%eax),%ebx
	cmpl	%esi,%ebx
	jb	blckerr
	cmpl	%edi,%ebx
	jae	blckerr
	cmpl	%edi,fcons
	jb	l__17
l1__17:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	movl	%ebx,%ecx
	cmpl	%edi,fcons
	jb	l__18
l1__18:
	xchgl	%edi,fcons
	movl	$1,(%edi)
	xchgl	%ebx,4(%edi)
	xchgl	%edi,%ebx
	xchgl	%edi,fcons
	pushl	%ecx
	pushl	dlink
	pushl	$unbind10
	movl	%esp,dlink
	movl	dlink,%ebp
	movl	%ebp,4(%ecx)
	cmpl	%edi,fcons
	jb	l__19
l1__19:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	movl	llink,%ebp
	xchgl	%ebp,4(%edi)
	xchgl	%ebp,%edi
	movl	%ebp,llink
	xchgl	%edi,fcons
	movl	zblock,%ebp
	movl	%ebp,errname
	jmp	evexpg
blckerr:
	movl	%ebx,%eax
	movl	zblock,%ebx
	jmp	errsym

	# FENTRY llret
	.align	4
llret:
	movl	%esi,%ebx
	pushl	%ebx
	movl	zllret,%ebp
	movl	%ebp,errname
	jmp	llretf1

	# FENTRY llretf
	.align	4
llretf:
	pushl	(%eax)
	movl	4(%eax),%eax
	movl	zllretf,%ebp
	movl	%ebp,errname
llretf1:
	calll	evprogn
	popl	%ebx
llretg:
	movl	llink,%edx
	jmp	llretf4
llretf2:
	movl	(%edx),%ecx
	cmpl	$1,(%ecx)
	jne	llretf3
	movl	4(%ecx),%ecx
	cmpl	%ebx,(%ecx)
	je	llretf6
llretf3:
	movl	4(%edx),%edx
llretf4:
	cmpl	%edi,%edx
	jge	llretf2
	movl	%ebx,%eax
	movl	zllretf,%ebx
	jmp	errnab
llretf6:
	cmpl	%esi,4(%ecx)
	jne	llretr2
	movl	%ebx,%eax
	movl	zllretf,%ebx
	jmp	errxia
llretr2:
	movl	4(%ecx),%ebx
llretr3:
	movl	dlink,%edx
	movl	%edx,%esp
	movl	(%esp),%ecx
	cmpl	$unbind10,%ecx
	jne	llretr4
	cmpl	%edx,%ebx
	je	llretr9
llretr4:
	movl	$llretr3,%ecx
	jmp	unbinp
llretr9:
	ret	

	# FENTRY cbind0
	.align	4
cbind0:
	cmpw	$0,itcount
	je	l__20
	cmpw	$0,itstate
	je	l__20
	calll	ithard
l__20:
	cmpl	$unbind1,4(%esp)
	jne	cbind0g
	cmpl	%edx,16(%esp)
	jne	cbind0g
	movl	%esi,llink
	ret	
cbind0g:
	cmpl	%esp,mstack
	ja	errfs
	popl	%ebx
	pushl	$0
	pushl	%esi
	pushl	%edx
	pushl	llink
	movl	%esi,llink
	pushl	dlink
	pushl	$unbind1
	movl	%esp,dlink
	jmp	*%ebx

	# FENTRY cbind1
	.align	4
cbind1:
	cmpw	$0,itcount
	je	l__21
	cmpw	$0,itstate
	je	l__21
	calll	ithard
l__21:
	cmpl	$unbind1,4(%esp)
	jne	cbind1g
	cmpl	%edx,16(%esp)
	jne	cbind1g
	movl	(%ecx),%ebx
	movl	%eax,(%ebx)
	movl	%esi,llink
	ret	
cbind1g:
	cmpl	%esp,mstack
	ja	errfs
	movl	(%esp),%ebx
	pushl	$1
	pushl	%ecx
	pushl	%edx
	movl	(%ecx),%edx
	movl	(%edx),%ebp
	movl	%ebp,12(%esp)
	movl	%eax,(%edx)
	pushl	llink
	movl	%esi,llink
	pushl	dlink
	pushl	$unbind1
	movl	%esp,dlink
	jmp	*%ebx

	# FENTRY cbind2
	.align	4
cbind2:
	cmpw	$0,itcount
	je	l__22
	cmpw	$0,itstate
	je	l__22
	calll	ithard
l__22:
	cmpl	$unbind1,4(%esp)
	jne	cbind2g
	cmpl	%edx,16(%esp)
	jne	cbind2g
	movl	(%ecx),%edx
	movl	%eax,(%edx)
	movl	4(%ecx),%edx
	movl	(%edx),%ecx
	movl	%ebx,(%ecx)
	movl	%esi,llink
	ret	
cbind2g:
	cmpl	%esp,mstack
	ja	errfs
	movl	(%esp),%ebp
	movl	%ebp,savea2
	addl	$-4,%esp
	pushl	$2
	pushl	%ecx
	pushl	%edx
	movl	(%ecx),%edx
	movl	(%edx),%ebp
	movl	%ebp,16(%esp)
	movl	%eax,(%edx)
	movl	4(%ecx),%edx
	movl	(%edx),%edx
	movl	(%edx),%ebp
	movl	%ebp,12(%esp)
	movl	%ebx,(%edx)
	pushl	llink
	movl	%esi,llink
	pushl	dlink
	pushl	$unbind1
	movl	%esp,dlink
	jmp	*savea2

	# FENTRY cbind3
	.align	4
cbind3:
	cmpw	$0,itcount
	je	l__23
	cmpw	$0,itstate
	je	l__23
	calll	ithard
l__23:
	movl	%ecx,savea3
	popl	savea2
	popl	savea4
	cmpl	$unbind1,(%esp)
	jne	cbind3g
	movl	savea4,%ebp
	cmpl	%ebp,12(%esp)
	jne	cbind3g
	movl	(%edx),%ecx
	movl	%eax,(%ecx)
	movl	4(%edx),%edx
	movl	(%edx),%ecx
	movl	%ebx,(%ecx)
	movl	4(%edx),%edx
	movl	(%edx),%edx
	movl	savea3,%ecx
	movl	%ecx,(%edx)
	movl	%esi,llink
	jmp	*savea2
cbind3g:
	cmpl	%esp,mstack
	ja	errfs
	addl	$-12,%esp
	movl	%edx,savea1
	movl	(%edx),%ecx
	movl	(%ecx),%ebp
	movl	%ebp,8(%esp)
	movl	%eax,(%ecx)
	movl	4(%edx),%edx
	movl	(%edx),%ecx
	movl	(%ecx),%ebp
	movl	%ebp,4(%esp)
	movl	%ebx,(%ecx)
	movl	4(%edx),%edx
	movl	(%edx),%edx
	movl	(%edx),%ebp
	movl	%ebp,(%esp)
	movl	savea3,%ecx
	movl	%ecx,(%edx)
	pushl	$3
	pushl	savea1
	pushl	savea4
	pushl	llink
	movl	%esi,llink
	pushl	dlink
	pushl	$unbind1
	movl	%esp,dlink
	jmp	*savea2

	# FENTRY cbindn
	.align	4
cbindn:
	cmpw	$0,itcount
	je	l__24
	cmpw	$0,itstate
	je	l__24
	calll	ithard
l__24:
	cmpl	%esp,mstack
	ja	errfs
	movl	%esi,intllink
cbindnc:
	popl	intret
cbindnn:
	movl	%ecx,savea2
	movl	%edx,savea4
	movl	%ebx,savea1
	movl	%ebx,errname
	jmp	evbndext

	# FENTRY cbindl
	.align	4
cbindl:
	cmpw	$0,itcount
	je	l__25
	cmpw	$0,itstate
	je	l__25
	calll	ithard
l__25:
	cmpl	%esp,mstack
	ja	errfs
	movl	llink,%ebp
	movl	%ebp,intllink
	jmp	cbindnc

	# FENTRY cbinds
	.align	4
cbinds:
	cmpw	$0,itcount
	je	l__26
	cmpw	$0,itstate
	je	l__26
	calll	ithard
l__26:
	popl	intret
	movl	%esi,intllink
	movl	%ecx,savea2
	movl	%ebx,savea1
	movl	%ebx,errname
	jmp	bndtrbex

	# FENTRY ctag
	.align	4
ctag:
	popl	%ebx
	pushl	%eax
	pushl	dlink
	pushl	$unbind3
	movl	%esp,dlink
	jmp	*%ebx

	# FENTRY cprot
	.align	4
cprot:
	jmp	sysprot

	# FENTRY cmplock
	.align	4
cmplock:
	popl	%ebx
	pushl	%eax
	pushl	dlink
	pushl	$unbind5
	movl	%esp,dlink
	jmp	*%ebx

	# FENTRY csched
	.align	4
csched:
	cmpl	%esp,mstack
	ja	errfs
	popl	%ebx
	pushl	%eax
	pushl	dlink
	pushl	$unbind8
	movl	%esp,dlink
	jmp	*%ebx

	# FENTRY cblock
	.align	4
cblock:
	movl	%eax,%ebx
	popl	%eax
	cmpl	%esi,%ebx
	jb	blckerr
	cmpl	%edi,%ebx
	jae	blckerr
	cmpl	%edi,fcons
	jb	l__27
l1__27:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	movl	%ebx,%ecx
	cmpl	%edi,fcons
	jb	l__28
l1__28:
	xchgl	%edi,fcons
	movl	$1,(%edi)
	xchgl	%ebx,4(%edi)
	xchgl	%edi,%ebx
	xchgl	%edi,fcons
	pushl	%ecx
	pushl	dlink
	pushl	$unbind10
	movl	%esp,dlink
	movl	dlink,%ebp
	movl	%ebp,4(%ecx)
	cmpl	%edi,fcons
	jb	l__29
l1__29:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	movl	llink,%ebp
	xchgl	%ebp,4(%edi)
	xchgl	%ebp,%edi
	movl	%ebp,llink
	xchgl	%edi,fcons
	jmp	*%eax

	# FENTRY cexit
	.align	4
cexit:
	jmp	findtag

	# FENTRY cretfr
	.align	4
cretfr:
	jmp	llretg

	# FENTRY cgo
	.align	4
cgo:
	jmp	llgof1

	# FENTRY ctagbody
	.align	4
ctagbody:
	popl	%eax
	xorl	%ebx,%ebx
	cmpl	%edi,fcons
	jb	l__30
l1__30:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	pushl	%ebx
	pushl	dlink
	pushl	$unbind9
	movl	%esp,dlink
	movl	dlink,%ebp
	movl	%ebp,4(%ebx)
	cmpl	%edi,fcons
	jb	l__31
l1__31:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	movl	llink,%ebp
	xchgl	%ebp,4(%edi)
	xchgl	%ebp,%edi
	movl	%ebp,llink
	xchgl	%edi,fcons
	jmp	*%eax

	# FENTRY cffuncall
	.align	4
cffuncall:
	jmp	ffuncall

	# FENTRY cwithit
	.align	4
cwithit:
	popl	%eax
	pushl	itstate
	movl	$cwithit1,%ecx
	calll	sysprot
	popl	%eax
	popl	itstate
	jmp	*%ecx
cwithit1:
	movl	$1,itstate
	jmp	*%eax

	# FENTRY cwithnoit
	.align	4
cwithnoit:
	popl	%eax
	pushl	itstate
	movl	$cwithno1,%ecx
	calll	sysprot
	popl	%eax
	popl	itstate
	jmp	*%ecx
cwithno1:
	movl	$0,itstate
	jmp	*%eax

	# FENTRY llcpnlist
	.align	4
llcpnlist:
	movl	%esi,%eax
	orl	%edx,%edx
	jne	llcpnl1
	ret	
llcpnl1:
	popl	%ecx
	jmp	llcpnl3
llcpnl2:
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__32
l1__32:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
llcpnl3:
	decw	%dx
	jge	llcpnl2
	jmp	*%ecx

	# FENTRY llcperwna
	.align	4
llcperwna:
	movl	%eax,%ecx
	movl	%ebx,%eax
	movl	%ecx,%ebx
	jmp	errwna

	# FENTRY fibd
	.align	4
fibd:
	movl	znvar,%ecx
	movl	16(%ecx),%ecx
	movl	zfibd,%edx
	calll	cbind1
	cmpw	$1,%ax
	jne	fibd2
	movl	$1,%eax
	ret	
fibd2:
	cmpw	$2,%ax
	jne	fibd3
	movl	$1,%eax
	ret	
fibd3:
	decw	%ax
	calll	fibd
	pushl	%eax
	movl	znvar,%eax
	movl	(%eax),%eax
	subw	$2,%ax
	calll	fibd
	popl	%ebx
	addw	%bx,%ax
	ret	

	# FENTRY fibl
	.align	4
fibl:
	pushl	%eax
	cmpw	$1,%ax
	jne	fibl2
	movl	$1,%eax
	jmp	fibl9
fibl2:
	cmpw	$2,%ax
	jne	fibl3
	movl	$1,%eax
	jmp	fibl9
fibl3:
	decw	%ax
	calll	fibl
	pushl	%eax
	movl	4(%esp),%eax
	subw	$2,%ax
	calll	fibl
	popl	%ebx
	addw	%bx,%ax
fibl9:
	addl	$4,%esp
	ret	

	# FENTRY fibml
	.align	4
fibml:
	cmpw	$2,%ax
	jle	fibmlr
	pushl	%eax
	decw	%ax
	calll	fibml
	xchgl	%eax,(%esp)
	subw	$2,%ax
	calll	fibml
	popl	%ebx
	addw	%bx,%ax
	ret	
fibmlr:
	movl	$1,%eax
	ret	
l__32:
	calll	gccons
	jmp	l1__32
l__31:
	calll	gccons
	jmp	l1__31
l__30:
	calll	gccons
	jmp	l1__30
l__29:
	calll	gccons
	jmp	l1__29
l__28:
	calll	gccons
	jmp	l1__28
l__27:
	calll	gccons
	jmp	l1__27
l__19:
	calll	gccons
	jmp	l1__19
l__18:
	calll	gccons
	jmp	l1__18
l__17:
	calll	gccons
	jmp	l1__17
l__16:
	calll	gccons
	jmp	l1__16
l__15:
	calll	gccons
	jmp	l1__15
l__14:
	calll	gccons
	jmp	l1__14
l__13:
	calll	gccons
	jmp	l1__13
l__12:
	calll	gccons
	jmp	l1__12
l__11:
	calll	gccons
	jmp	l1__11
l__10:
	calll	gccons
	jmp	l1__10
l__9:
	calll	gccons
	jmp	l1__9
l__8:
	calll	gccons
	jmp	l1__8
l__7:
	calll	gccons
	jmp	l1__7
l__5:
	calll	gccons
	jmp	l1__5
l__4:
	calll	gccons
	jmp	l1__4
l__3:
	calll	gccons
	jmp	l1__3
l__2:
	calll	gccons
	jmp	l1__2
l__1:
	calll	gccons
	jmp	l1__1
