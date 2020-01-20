	.csect	lelisp_txt[PR]
	.globl	ini_eval
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
	.globl	evalcar
	.globl	evala1
	.globl	evalan
	.globl	evalt
	.globl	llitsoft
	.globl	llsupit
	.globl	sysprot
	.globl	findtag
	.globl	eval
	.globl	evalc
	.globl	apply
	.globl	ffuncall
	.globl	funcall
	.globl	evexpg
	.globl	unbinp
	.globl	evprogn
	.globl	evprognr
	.globl	evbndext
	.globl	evbser
	.globl	unbise
	.globl	bndtrbex
	.globl	evbale
	.globl	errfs
	.globl	erres
	.globl	errsym
	.globl	errnia
	.globl	errnla
	.globl	errnva
	.globl	errudv
	.globl	errudf
	.globl	errudt
	.globl	errwna
	.globl	erroob
	.globl	errbpa
	.globl	errbal
	.globl	errilb
	.globl	errnab
	.globl	errxia
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	inisymb
	.globl	inicst
	.globl	probj
	.globl	probjt
	.globl	getfn1
	.globl	getfns
	.globl	findfn
	.globl	nreverse
	.globl	evlis
	.globl	displace
	.globl	lllength
	.globl	gettype
	.globl	C.ini_eval
C.ini_eval:	mflr	0
	stu	0,-4(1)
ini_eval:	cal	3,128(21)
	st	3,1452(13)
	lil	14,6
	cal	15,6949(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	st	21,1452(13)
	lil	14,4
	cal	15,6955(13)
	l	16,3780(13)
	cal	17,164(13)
	lil	3,._eval
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,6959(13)
	l	16,3772(13)
	cal	17,164(13)
	lil	3,._evalwhen
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,6968(13)
	l	16,3768(13)
	cal	17,164(13)
	lil	3,._symeval
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,6975(13)
	l	16,3764(13)
	cal	17,164(13)
	lil	3,._llarg
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,6978(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,8
	cal	15,6985(13)
	l	16,3760(13)
	cal	17,164(13)
	lil	3,._traceval
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,6993(13)
	l	16,3756(13)
	cal	17,164(13)
	lil	3,._stepeval
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7001(13)
	l	16,3724(13)
	cal	17,164(13)
	lil	3,._uapply
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,7006(13)
	l	16,3732(13)
	cal	17,164(13)
	lil	3,._funcall
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,7222(13)
	l	16,3696(13)
	cal	17,164(13)
	lil	3,._tag
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7016(13)
	l	16,3692(13)
	cal	17,164(13)
	lil	3,._evtag
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,7021(13)
	l	16,3684(13)
	cal	17,164(13)
	lil	3,._untlxit
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7218(13)
	l	16,3680(13)
	cal	17,164(13)
	lil	3,._ffexit
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7034(13)
	l	16,3688(13)
	cal	17,164(13)
	lil	3,._evexit
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7040(13)
	l	16,3664(13)
	cal	17,164(13)
	lil	3,._unwind
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7046(13)
	l	16,3672(13)
	cal	17,164(13)
	lil	3,._unexit
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7229(13)
	l	16,3656(13)
	cal	17,164(13)
	lil	3,._llock
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,7056(13)
	l	16,3652(13)
	cal	17,164(13)
	lil	3,._protect
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,7063(13)
	l	16,3716(13)
	cal	17,164(13)
	lil	3,._let
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7066(13)
	l	16,3712(13)
	cal	17,164(13)
	lil	3,._letseq
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7070(13)
	l	16,3708(13)
	cal	17,164(13)
	lil	3,._letv
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7074(13)
	l	16,3704(13)
	cal	17,164(13)
	lil	3,._letvq
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7079(13)
	l	16,3700(13)
	cal	17,164(13)
	lil	3,._flet
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,7083(13)
	l	16,3648(13)
	cal	17,164(13)
	lil	3,._function
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,7091(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,3
	cal	15,7100(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,3
	cal	15,7103(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	st	21,1716(13)
	st	21,1712(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._eval,5
	.globl	C.eval
C.eval:	mflr	0
	stu	0,-4(1)
	.globl	eval
eval:	cmpli	0,17,1
	beq	evalu2
	cmpli	0,17,2
	beq	evalu1
	lil	14,1
	cal	15,10624(21)
	b	errwna
evalu1:	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	l	3,1712(13)
	stu	3,-4(1)
	st	15,1712(13)
	b	evalu3
evalu2:	l	14,0(1)
	ai	1,1,4
	l	3,1712(13)
	stu	3,-4(1)
	st	21,1712(13)
evalu3:	l	16,3776(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	l	3,0(1)
	st	3,1712(13)
	ai	1,1,4
	mtlr	16
	br	
evalc:	l	14,0(14)
	stu	14,-4(1)
	lil	17,1
	b	eval
	.set	._evalwhen,6
	.globl	C.evalwhen
C.evalwhen:	mflr	0
	stu	0,-4(1)
	.globl	evalwhen
evalwhen:	cmp	0,14,22
	blt	evwhen3
	l	17,4(14)
	l	14,0(14)
	cal	16,10624(21)
	b	evwhen2
evwhen1:	l	15,0(14)
	cmpl	0,15,16
	beq	evwhen4
	l	14,4(14)
evwhen2:	cmp	0,14,22
	bge	evwhen1
evwhen3:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
evwhen4:	oril	14,17,0
	cal	3,10656(21)
	st	3,1744(13)
	l	3,1216(13)
	cmpli	0,3,0
	beq	.eva.1
	.globl	C.ithard
	bl	C.ithard
.eva.1:	b	evprogn
	.set	._symeval,2
	.globl	C.symeval
C.symeval:	mflr	0
	stu	0,-4(1)
	.globl	symeval
symeval:	cmpl	0,14,21
	blt	symeval1
	cmpl	0,14,22
	bge	symeval1
	oril	15,14,0
	l	14,0(14)
	cal	4,32(21)
	cmpl	0,14,4
	beq	symeval2
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
symeval1:	cal	15,10688(21)
	b	errsym
symeval2:	oril	14,15,0
	cal	15,10688(21)
	b	errudv
	.set	._llarg,5
	.globl	C.llarg
C.llarg:	mflr	0
	stu	0,-4(1)
	.globl	llarg
llarg:	cmpli	0,17,0
	beq	llarget
	cmpli	0,17,1
	beq	llarg1
	lil	14,1
	cal	15,10720(21)
	b	errwna
llarg1:	.globl	C.llarget
	bl	C.llarget
	l	15,0(1)
	ai	1,1,4
	sf	4,15,14
	andil.	14,4,0xFFFF
	exts	3,14
	sli	3,3,2
	a	17,17,3
	l	14,0(17)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.llarget
C.llarget:	mflr	0
	stu	0,-4(1)
llarget:	l	17,1756(13)
	l	14,0(17)
	ai	17,17,4
	l	4,4612(13)
	cmpl	0,14,4
	bne	llarger
	ai	17,17,12
	l	14,0(17)
	ai	17,17,4
	cal	4,10752(21)
	cmpl	0,14,4
	bne	llarger
	l	14,0(17)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
llarger:	cal	15,10720(21)
	oril	14,21,0
	b	errnab
	.set	._traceval,5
	.globl	C.traceval
C.traceval:	mflr	0
	stu	0,-4(1)
	.globl	traceval
traceval:	cmpli	0,17,1
	beq	tracev1
	cmpli	0,17,2
	beq	tracev2
	lil	14,1
	cal	15,10784(21)
	b	errwna
tracev1:	l	14,0(1)
	ai	1,1,4
	oril	15,21,0
	b	tracev3
tracev2:	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
tracev3:	stu	21,-4(1)
	l	3,1740(13)
	stu	3,-4(1)
	l	3,1736(13)
	stu	3,-4(1)
	l	3,1732(13)
	stu	3,-4(1)
	l	3,1728(13)
	stu	3,-4(1)
	l	3,1724(13)
	stu	3,-4(1)
	l	3,1720(13)
	stu	3,-4(1)
	l	3,1716(13)
	stu	3,-4(1)
	cal	3,96(21)
	st	3,1716(13)
	cal	3,10816(21)
	stu	3,-4(1)
	l	3,1712(13)
	stu	3,-4(1)
	st	15,1712(13)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4600(13)
	stu	3,-4(1)
	st	1,1756(13)
	b	evalan
	.set	._stepeval,5
	.globl	C.stepeval
C.stepeval:	mflr	0
	stu	0,-4(1)
	.globl	stepeval
stepeval:	cmpli	0,17,1
	beq	stepev1
	cmpli	0,17,2
	beq	stepev2
	lil	14,1
	cal	15,10816(21)
	b	errwna
stepev1:	l	14,0(1)
	ai	1,1,4
	l	3,3752(13)
	stu	3,-4(1)
	stu	14,-4(1)
	stu	21,-4(1)
	b	stepev3
stepev2:	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	l	3,3752(13)
	stu	3,-4(1)
	stu	14,-4(1)
	stu	15,-4(1)
stepev3:	cal	14,11424(21)
	.globl	C.probj
	bl	C.probj
	l	14,4(1)
	.globl	C.probjt
	bl	C.probjt
	lil	17,2
	b	traceval
	.globl	stepevr
stepevr:	stu	14,-4(1)
	cal	14,11456(21)
	.globl	C.probj
	bl	C.probj
	l	14,0(1)
	.globl	C.probjt
	bl	C.probjt
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
evalt:	l	15,1712(13)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.2
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.2:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	21,4(6)
	oril	15,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.3
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.3:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	15,4(6)
	oril	15,6,0
	cal	14,10816(21)
	.globl	C.llitsoft
	bl	C.llitsoft
	cal	3,96(21)
	st	3,1716(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	popj
popj:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.evalcar
C.evalcar:	mflr	0
	stu	0,-4(1)
evalcar:	l	14,0(14)
	l	3,1716(13)
	cmpl	0,3,21
	bne	evalt
	b	evalan
	.globl	C.evala1
C.evala1:	mflr	0
	stu	0,-4(1)
	.globl	evala1
evala1:	l	3,1716(13)
	cmpl	0,3,21
	bne	evalt
	b	evalan
evalan:	cmp	0,14,22
	bge	evalis
	cmpl	0,14,18
	bge	evalat
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
evalis:	l	3,1216(13)
	cmpli	0,3,0
	beq	.eva.4
	.globl	C.ithard
	bl	C.ithard
.eva.4:	l	3,1068(13)
	cmpl	0,1,3
	bge	.eva.5
	b	errfs
.eva.5:	st	14,1720(13)
	l	15,0(14)
	l	14,4(14)
	cmpl	0,15,21
	blt	evalfv
	cmpl	0,15,22
	bge	evalfv
	l	16,8(15)
	lhz	17,24(15)
	sli	3,17,2
	cal	4,1764(13)
	lx	0,4,3
	mtlr	0
	br	
	.globl	udfer
	.globl	eval0
	.globl	eval1
	.globl	eval2
	.globl	eval3
	.globl	evaln
	.globl	evalf
	.globl	evexp
	.globl	evfexp
	.globl	evmac
	.globl	evdmac
	.globl	evalm
	.globl	evaldm
evalat:	cmpl	0,14,21
	blt	evothat
	cmpl	0,14,22
	bge	evothat
	oril	15,14,0
	l	14,0(14)
	cal	4,32(21)
	cmpl	0,14,4
	beq	evalera8
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
evalera8:	oril	14,15,0
	cal	15,10624(21)
	b	errudv
evothat:	cmpl	0,14,20
	blt	.eva.6
	cmpl	0,14,21
	blt	evextyp
.eva.6:	cmpl	0,14,19
	blt	.eva.7
	cmpl	0,14,20
	blt	evextyp
.eva.7:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
evextyp:	stu	14,-4(1)
	l	14,4(14)
	cmpl	0,14,21
	blt	evextypr
	cmpl	0,14,22
	bge	evextypr
	cal	15,10624(21)
	oril	16,21,0
	.globl	C.getfns
	bl	C.getfns
	cmpl	0,14,21
	beq	evextypr
	lil	17,1
	b	ffuncall
evextypr:	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
eval0:	cmpl	0,14,21
	bne	wnaer0
	mtlr	16
	br	
eval1:	stu	16,-4(1)
	cmp	0,14,22
	blt	wnaer1
	l	3,4(14)
	cmpl	0,3,21
	bne	wnaer1d
	b	evalcar
eval2:	stu	16,-4(1)
	cmp	0,14,22
	blt	wnaer2
	l	16,4(14)
	cmp	0,16,22
	blt	wnaer23
	l	3,0(16)
	stu	3,-4(1)
	l	3,4(16)
	cmpl	0,3,21
	bne	wnaer23d
	.globl	C.evalcar
	bl	C.evalcar
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	.globl	C.evala1
	bl	C.evala1
	oril	15,14,0
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
eval3:	stu	16,-4(1)
	cmp	0,14,22
	blt	wnaer3
	l	3,4(14)
	stu	3,-4(1)
	stu	15,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	15,0(1)
	ai	1,1,4
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	cmp	0,14,22
	blt	wnaer3
	l	3,4(14)
	stu	3,-4(1)
	stu	15,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	15,0(1)
	ai	1,1,4
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	cmp	0,14,22
	blt	wnaer3
	l	3,4(14)
	cmpl	0,3,21
	bne	wnaer3d
	.globl	C.evalcar
	bl	C.evalcar
	oril	16,14,0
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
evaln:	cmp	0,14,22
	bge	evalns0
	cmpl	0,14,21
	bne	evbal
	lil	17,0
	mtlr	16
	br	
evalns0:	l	15,4(14)
	cmp	0,15,22
	bge	evalns1
	cmpl	0,15,21
	bne	evbal2
	stu	16,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	lil	17,1
	mtlr	14
	br	
evalns1:	stu	15,-4(1)
	stu	16,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	16,0(1)
	ai	1,1,4
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	l	15,4(14)
	cmp	0,15,22
	bge	evalnsn
	cmpl	0,15,21
	bne	evbal2
	stu	16,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	lil	17,2
	mtlr	14
	br	
evalnsn:	lil	17,1
evaln1:	l	3,4(14)
	stu	3,-4(1)
	stu	17,-4(1)
	stu	16,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	16,0(1)
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	ai	4,17,1
	andil.	17,4,0xFFFF
	cmp	0,14,22
	bge	evaln1
	cmpl	0,14,21
	bne	evbal
	mtlr	16
	br	
evbal2:	stu	15,-4(1)
	b	evbal1
evbal:	stu	14,-4(1)
evbal1:	oril	14,16,0
evbale:	.globl	C.findfn
	bl	C.findfn
	oril	15,14,0
	l	14,0(1)
	ai	1,1,4
	b	errbal
evalf:	mtlr	16
	br	
evalm:	l	3,3776(13)
	stu	3,-4(1)
	l	14,1720(13)
	mtlr	16
	br	
evaldm:	l	14,1720(13)
	stu	14,-4(1)
	l	3,3748(13)
	stu	3,-4(1)
	l	14,4(14)
	mtlr	16
	br	
	.globl	evaldmr
evaldmr:	oril	15,14,0
	l	14,0(1)
	ai	1,1,4
	.globl	C.displace
	bl	C.displace
	b	evala1
evexp:	lil	17,0
	cmp	0,14,22
	bge	evexp1
	b	evexp2
evexp1:	l	3,4(14)
	stu	3,-4(1)
	stu	17,-4(1)
	stu	16,-4(1)
	stu	15,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	15,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	ai	4,17,1
	andil.	17,4,0xFFFF
	cmp	0,14,22
	bge	evexp1
evexp2:	cmpl	0,14,21
	bne	everrbal
	st	15,1744(13)
	st	21,1752(13)
evbnd:	l	3,3744(13)
	st	3,1748(13)
	st	17,1740(13)
	st	16,1728(13)
	l	16,0(16)
	st	16,1732(13)
	cmp	0,16,22
	blt	evbnd6
evbnd2:	cmpli	0,17,0
	beq	evbnr32
	si	4,17,1
	andil.	17,4,0xFFFF
	l	15,0(16)
	cmp	0,15,22
	bge	evbdst
	l	14,0(15)
	sli	3,17,2
	lx	3,1,3
	st	3,0(15)
	sli	5,17,2
	stx	14,1,5
	l	16,4(16)
	cmp	0,16,22
	bge	evbnd2
	b	evbnd6
evbndext:	cror	15,15,15
	cmp	0,16,22
	bge	evbnd2
evbnd6:	cmpl	0,16,21
	beq	evbnd9
	cal	4,10752(21)
	cmpl	0,16,4
	beq	evbnd91
	si	4,17,1
	andil.	17,4,0xFFFF
	l	4,1740(13)
	sf	4,17,4
	andil.	3,4,0xFFFF
	st	3,1740(13)
	ai	4,17,1
	andil.	17,4,0xFFFF
	ai	4,17,1
	andil.	17,4,0xFFFF
	oril	14,21,0
	b	evbnd8
evbnd7:	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.8
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.8:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
evbnd8:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	evbnd7
	lil	17,0
	l	3,0(16)
	stu	3,-4(1)
	st	14,0(16)
evbnd9:	cmpli	0,17,0
	bne	evbnr1
evbnd91:	l	17,1740(13)
evbnd92:	l	14,1728(13)
	sli	3,17,2
	lx	15,1,3
	l	4,4612(13)
	cmpl	0,15,4
	bne	evbnd94
	oril	16,17,0
	ai	4,16,3
	andil.	16,4,0xFFFF
	sli	3,16,2
	lx	15,1,3
	cmpl	0,15,14
	bne	evbnd94
	ai	4,16,1
	andil.	16,4,0xFFFF
	sli	3,16,2
	lx	15,1,3
	cal	4,10752(21)
	cmpl	0,15,4
	beq	evbnd94
	exts	3,17
	sli	3,3,2
	a	1,1,3
	l	0,1748(13)
	mtlr	0
	br	
evbnd94:	stu	17,-4(1)
	l	3,1732(13)
	stu	3,-4(1)
	stu	14,-4(1)
evexpn:	l	3,1712(13)
	stu	3,-4(1)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4612(13)
	stu	3,-4(1)
	st	1,1756(13)
	l	3,1752(13)
	st	3,1712(13)
	l	0,1748(13)
	mtlr	0
	br	
evbnr1:	oril	14,21,0
	l	4,1740(13)
	sf	4,17,4
	andil.	3,4,0xFFFF
	st	3,1740(13)
	l	14,1740(13)
evbnr2:	l	16,0(1)
	ai	1,1,4
	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	evbnr2
	lil	17,0
	l	17,1740(13)
evbnr31:	st	14,1728(13)
	l	16,1732(13)
	l	3,3740(13)
	st	3,1736(13)
	b	unbise
evbnr32:	l	17,1740(13)
evbnr33:	l	14,1732(13)
	.globl	C.lllength
	bl	C.lllength
	b	evbnr31
	.globl	errbner
errbner:	l	14,1728(13)
	.globl	C.ferrnam
	bl	C.ferrnam
	b	errwna
evbser:	l	1,1760(13)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.9
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.9:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	21,4(6)
	oril	16,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.10
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.10:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	16,4(6)
	oril	16,6,0
	st	16,1728(13)
	l	4,1740(13)
	sf	4,17,4
	andil.	3,4,0xFFFF
	st	3,1740(13)
	exts	3,17
	sli	3,3,2
	a	1,1,3
	oril	15,21,0
	cmp	0,14,22
	blt	evbser5
evbser4:	l	16,4(14)
	st	15,4(14)
	oril	15,14,0
	oril	14,16,0
	cmp	0,14,22
	bge	evbser4
evbser5:	l	4,0(1)
	st	15,0(1)
	oril	15,4,0
	l	17,1740(13)
	l	16,1732(13)
	l	3,3736(13)
	st	3,1736(13)
	b	unbise
	.globl	evbser9
evbser9:	l	14,1728(13)
	.globl	C.ferrnam
	bl	C.ferrnam
	b	errilb
evbdst:	st	16,1736(13)
	sli	3,17,2
	lx	16,1,3
	oril	14,21,0
	st	1,1760(13)
	.globl	C.evbdst1
	bl	C.evbdst1
	oril	15,21,0
	cmp	0,14,22
	blt	evbdst6
evbdst4:	l	16,4(14)
	st	15,4(14)
	oril	15,14,0
	oril	14,16,0
	cmp	0,14,22
	bge	evbdst4
	oril	14,15,0
evbdst6:	l	16,1736(13)
	sli	5,17,2
	stx	14,1,5
	l	16,4(16)
	cmp	0,16,22
	bge	evbnd2
	b	evbnd6
	.globl	C.evbdst1
C.evbdst1:	mflr	0
	stu	0,-4(1)
evbdst1:	cmpl	0,16,21
	beq	evbdst11
	cmp	0,16,22
	blt	evbser
evbdst11:	l	3,4(15)
	stu	3,-4(1)
	l	15,0(15)
	cmp	0,15,22
	bge	evbdst8
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.11
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.11:	l	3,4(6)
	st	3,1184(13)
	l	3,0(15)
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	l	3,0(16)
	st	3,0(15)
evbdst2:	l	16,4(16)
	l	15,0(1)
	ai	1,1,4
	cmp	0,15,22
	bge	evbdst1
	cmpl	0,15,21
	beq	evbdst3
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.12
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.12:	l	3,4(6)
	st	3,1184(13)
	l	3,0(15)
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	st	16,0(15)
evbdst3:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
evbdst8:	stu	16,-4(1)
	l	16,0(16)
	.globl	C.evbdst1
	bl	C.evbdst1
	l	16,0(1)
	ai	1,1,4
	b	evbdst2
	.globl	evexpg
evexpg:	l	14,4(14)
	cmp	0,14,22
	blt	evprogn7
	l	15,4(14)
	cmp	0,15,22
	bge	evprogn2
	cmpl	0,15,21
	bne	evprogn5
	b	evalcar
	.globl	C.evprogn
C.evprogn:	mflr	0
	stu	0,-4(1)
evprogn:	cmp	0,14,22
	blt	evprogn7
	l	15,4(14)
	cmp	0,15,22
	bge	evprogn2
	cmpl	0,15,21
	bne	evprogn5
	b	evalcar
evprogn2:	stu	14,-4(1)
	l	3,4616(13)
	stu	3,-4(1)
	b	evalcar
	.globl	evprognr
evprognr:	l	14,0(1)
	ai	1,1,4
	l	14,4(14)
	l	15,4(14)
	cmp	0,15,22
	bge	evprogn2
	cmpl	0,15,21
	bne	evprogn5
	b	evalcar
evprogn5:	oril	14,15,0
evprogn6:	.globl	C.ferrnam
	bl	C.ferrnam
everrbal:	b	errbal
evprogn7:	cmpl	0,14,21
	beq	popj
	b	evprogn6
evmac:	l	3,3776(13)
	stu	3,-4(1)
	l	14,1720(13)
	b	evfexp
evdmac:	l	14,1720(13)
	stu	14,-4(1)
	l	3,3748(13)
	stu	3,-4(1)
	l	14,4(14)
evfexp:	st	15,1744(13)
bndtrb:	l	3,3744(13)
	st	3,1748(13)
	st	16,1728(13)
	l	16,0(16)
	st	16,1732(13)
bndtrbex:	lil	17,0
	b	bndtrb2
bndtrb1:	cmp	0,14,22
	blt	evbnr33
	ai	4,17,1
	andil.	17,4,0xFFFF
	l	15,0(16)
	cmp	0,15,22
	bge	bndtrb7
	l	3,0(15)
	stu	3,-4(1)
	l	3,0(14)
	st	3,0(15)
	l	14,4(14)
	l	16,4(16)
bndtrb2:	cmp	0,16,22
	bge	bndtrb1
	cmpl	0,16,21
	beq	bndtrb3
	cal	4,10752(21)
	cmpl	0,16,4
	beq	bndtrb5
	ai	4,17,1
	andil.	17,4,0xFFFF
	l	3,0(16)
	stu	3,-4(1)
	st	14,0(16)
	b	bndtrb6
bndtrb3:	cmpl	0,14,21
	beq	bndtrb6
	b	evbnr33
bndtrb4:	l	3,0(14)
	stu	3,-4(1)
	l	14,4(14)
	l	3,1068(13)
	cmpl	0,1,3
	bge	.eva.13
	b	errfs
.eva.13:	ai	4,17,1
	andil.	17,4,0xFFFF
bndtrb5:	cmp	0,14,22
	bge	bndtrb4
	cmpl	0,14,21
	beq	bndtrb6
	.globl	C.ferrnam
	bl	C.ferrnam
	b	errbal
bndtrb6:	l	14,1728(13)
	sli	3,17,2
	lx	15,1,3
	l	4,4612(13)
	cmpl	0,15,4
	bne	evbnd94
	oril	16,17,0
	ai	4,16,3
	andil.	16,4,0xFFFF
	sli	3,16,2
	lx	15,1,3
	cmpl	0,15,14
	bne	evbnd94
	ai	4,16,1
	andil.	16,4,0xFFFF
	sli	3,16,2
	lx	15,1,3
	cal	4,10752(21)
	cmpl	0,15,4
	beq	evbnd94
	exts	3,17
	sli	3,3,2
	a	1,1,3
	l	0,1748(13)
	mtlr	0
	br	
bndtrb7:	stu	21,-4(1)
	st	1,1760(13)
	l	3,4(14)
	stu	3,-4(1)
	l	3,4(16)
	stu	3,-4(1)
	l	16,0(14)
	oril	14,21,0
	st	17,1740(13)
	lil	17,0
	.globl	C.evbdst1
	bl	C.evbdst1
	l	17,1740(13)
	oril	15,21,0
	cmp	0,14,22
	blt	bndtrb9
bndtrb8:	l	16,4(14)
	st	15,4(14)
	oril	15,14,0
	oril	14,16,0
	cmp	0,14,22
	bge	bndtrb8
bndtrbz:	l	16,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	ai	1,1,4
	stu	15,-4(1)
	b	bndtrb2
bndtrb9:	oril	15,21,0
	b	bndtrbz
evalfv:	cmp	0,15,22
	blt	udfer
	l	16,0(15)
	cal	4,13920(21)
	cmpl	0,16,4
	beq	evalll
	cal	4,13952(21)
	cmpl	0,16,4
	beq	evallf
	cal	4,13984(21)
	cmpl	0,16,4
	beq	evallm
	cal	4,11392(21)
	cmpl	0,16,4
	beq	evallc
	b	udfer
evalll:	l	16,4(15)
	cal	3,13920(21)
	st	3,1744(13)
	.globl	C.verlpar
	bl	C.verlpar
	cal	15,13920(21)
	lil	17,0
	b	evalll2
evalll1:	l	3,4(14)
	stu	3,-4(1)
	stu	17,-4(1)
	stu	16,-4(1)
	stu	15,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	15,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	ai	4,17,1
	andil.	17,4,0xFFFF
evalll2:	cmp	0,14,22
	bge	evalll1
	cmpl	0,14,21
	bne	everrbal
	st	15,1744(13)
	l	3,1712(13)
	st	3,1752(13)
	b	evbnd
evallf:	l	16,4(15)
	cal	3,13952(21)
	st	3,1744(13)
	l	3,1712(13)
	st	3,1752(13)
	.globl	C.verlpar
	bl	C.verlpar
	b	bndtrb
evallm:	l	14,1720(13)
	l	16,4(15)
	l	3,3776(13)
	stu	3,-4(1)
	cal	3,13984(21)
	st	3,1744(13)
	l	3,1712(13)
	st	3,1752(13)
	.globl	C.verlpar
	bl	C.verlpar
	b	bndtrb
evallc:	l	15,4(15)
	l	16,4(15)
	cal	3,11392(21)
	st	3,1744(13)
	l	3,0(15)
	st	3,1752(13)
	b	evexp
udfer:	l	17,1720(13)
	sf	5,22,17
	sri	5,5,3
	andil.	4,5,31
	sri	5,5,5
	sli	5,5,2
	lil	3,1
	sl	4,3,4
	l	3,180(13)
	a	3,3,5
	l	5,0(3)
	and	5,5,4
	cmpli	0,5,0
	beq	udfer8
	oril	14,17,0
	.globl	C.gettype
	bl	C.gettype
	cmpl	0,14,21
	blt	udfer8
	cmpl	0,14,22
	bge	udfer8
	cmpl	0,14,21
	beq	udfer8
	stu	15,-4(1)
	cal	15,10624(21)
	oril	16,21,0
	.globl	C.getfns
	bl	C.getfns
	l	15,0(1)
	ai	1,1,4
	cmpl	0,14,21
	beq	udfer8
	l	3,1720(13)
	stu	3,-4(1)
	lil	17,1
	b	ffuncall
udfer8:	stu	14,-4(1)
	oril	14,15,0
	cal	15,10624(21)
	.globl	C.errudf
	bl	C.errudf
	oril	15,14,0
	l	14,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.14
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.14:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
	b	evalan
xwnaer0:	oril	15,14,0
	b	wnaer00
wnaer0:	cmpl	0,14,21
	beq	wnaer00
	cmp	0,14,22
	blt	balr1
wnaer00:	lil	14,0
	b	wnaer
xwnaer1:	oril	15,14,0
	b	wnaer10
wnaer1d:	l	14,4(14)
wnaer1:	cmpl	0,14,21
	beq	wnaer10
	cmp	0,14,22
	blt	balr1
wnaer10:	lil	14,1
	b	wnaer
xwnaer2:	oril	15,14,0
	b	wnaer20
wnaer23d:	l	16,4(16)
wnaer23:	oril	14,16,0
wnaer2:	cmpl	0,14,21
	beq	wnaer20
	cmp	0,14,22
	blt	balr1
wnaer20:	lil	14,2
	b	wnaer
xwnaer3:	oril	15,14,0
	b	wnaer30
wnaer3d:	l	14,4(14)
wnaer3:	cmpl	0,14,21
	beq	wnaer30
	cmp	0,14,22
	blt	balr1
wnaer30:	lil	14,3
wnaer:	b	errwna
balr1:	b	errbal
	.set	._funcall,5
	.globl	C.funcall
C.funcall:	mflr	0
	stu	0,-4(1)
	.globl	funcall
funcall:	cal	3,10880(21)
	st	3,1744(13)
	cmpli	0,17,0
	beq	funcerwn
funcall0:	si	4,17,1
	andil.	17,4,0xFFFF
	sli	3,17,2
	lx	14,1,3
	sli	5,17,2
	l	4,3728(13)
	stx	4,1,5
ffuncall:	st	21,1752(13)
	cmpl	0,14,21
	blt	applys
	cmpl	0,14,22
	bge	applys
	lhz	16,24(14)
	sli	3,16,2
	cal	4,1816(13)
	lx	0,4,3
	mtlr	0
	br	
	.globl	fncludf
	.globl	fncal0
	.globl	fncal1
	.globl	fncal2
	.globl	fncal3
	.globl	fncaln
	.globl	fncalf
	.globl	fncalex
	.globl	fncalex
	.globl	fncalmc
	.globl	fncalmd
	.globl	fncalm
	.globl	fncaldm
funcerwn:	oril	14,17,0
	.globl	C.ferrnam
	bl	C.ferrnam
	b	errwna
fncludf:	stu	17,-4(1)
	.globl	C.ferrnam
	bl	C.ferrnam
	.globl	C.errudf
	bl	C.errudf
	l	17,0(1)
	ai	1,1,4
	b	ffuncall
fncal0:	cmpli	0,17,0
	bne	xwnaer0
	l	0,8(14)
	mtlr	0
	br	
fncal1:	cmpli	0,17,1
	bne	xwnaer1
	l	17,8(14)
	l	14,0(1)
	ai	1,1,4
	mtlr	17
	br	
fncal2:	cmpli	0,17,2
	bne	xwnaer2
	l	15,0(1)
	ai	1,1,4
	l	17,8(14)
	l	14,0(1)
	ai	1,1,4
	mtlr	17
	br	
fncal3:	cmpli	0,17,3
	bne	xwnaer3
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	17,8(14)
	l	14,0(1)
	ai	1,1,4
	mtlr	17
	br	
fncaln:	l	0,8(14)
	mtlr	0
	br	
fncalf:	l	15,8(14)
	oril	14,21,0
	b	fncalf2
fncalf1:	l	16,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.15
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.15:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	14,4(6)
	oril	14,6,0
fncalf2:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	fncalf1
	lil	17,0
	mtlr	15
	br	
fncalm:	l	15,8(14)
	oril	14,21,0
	b	fncalm2
fncalm1:	l	16,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.16
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.16:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	14,4(6)
	oril	14,6,0
fncalm2:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	fncalm1
	lil	17,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.17
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.17:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	14,4(6)
	oril	14,6,0
	l	3,3776(13)
	stu	3,-4(1)
	mtlr	15
	br	
fncaldm:	l	15,8(14)
	oril	14,21,0
	b	fncaldm2
fncaldm1:	l	16,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.18
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.18:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	14,4(6)
	oril	14,6,0
fncaldm2:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	fncaldm1
	lil	17,0
	stu	14,-4(1)
	l	3,3748(13)
	stu	3,-4(1)
	mtlr	15
	br	
fncalex:	l	16,8(14)
	st	14,1744(13)
	b	evbnd
fncalmc:	l	16,8(14)
	st	14,1744(13)
	oril	14,21,0
	b	fncalmc2
fncalmc1:	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.19
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.19:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
fncalmc2:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	fncalmc1
	lil	17,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.20
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.20:	l	3,4(6)
	st	3,1184(13)
	l	3,1744(13)
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	l	3,3776(13)
	stu	3,-4(1)
	b	bndtrb
fncalmd:	l	16,8(14)
	st	14,1744(13)
	oril	14,21,0
	b	fncalmd2
fncalmd1:	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.21
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.21:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
fncalmd2:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	fncalmd1
	lil	17,0
	stu	14,-4(1)
	l	3,3748(13)
	stu	3,-4(1)
	b	bndtrb
applys:	cmp	0,14,22
	blt	fncludf
	l	16,0(14)
	cal	4,13920(21)
	cmpl	0,16,4
	beq	applyll
	cal	4,13952(21)
	cmpl	0,16,4
	beq	applylf
	cal	4,11392(21)
	cmpl	0,16,4
	beq	applylc
	b	fncludf
applyll:	cal	3,13920(21)
	st	3,1744(13)
	b	applylf1
applylf:	cal	3,13952(21)
	st	3,1744(13)
applylf1:	l	16,4(14)
	.globl	C.verlpar
	bl	C.verlpar
	b	evbnd
applylc:	cal	3,11392(21)
	st	3,1744(13)
	l	14,4(14)
	l	3,0(14)
	st	3,1752(13)
	l	16,4(14)
	b	evbnd
	.set	._uapply,5
	.globl	C.uapply
C.uapply:	mflr	0
	stu	0,-4(1)
	.globl	uapply
uapply:	cal	3,10848(21)
	st	3,1744(13)
	exts	3,17
	cmpi	0,3,2
	blt	uapplyer
	l	15,0(1)
	ai	1,1,4
	si	4,17,1
	andil.	17,4,0xFFFF
	b	uapply3
uapply2:	l	3,0(15)
	stu	3,-4(1)
	l	3,1068(13)
	cmpl	0,1,3
	bge	.eva.22
	b	errfs
.eva.22:	l	15,4(15)
	ai	4,17,1
	andil.	17,4,0xFFFF
uapply3:	cmp	0,15,22
	bge	uapply2
	cmpl	0,15,21
	beq	funcall0
	oril	14,15,0
	si	4,17,1
	andil.	17,4,0xFFFF
	sli	3,17,2
	lx	15,1,3
	b	errbal
uapplyer:	lil	14,2
	cal	15,10848(21)
	b	errwna
	.globl	C.apply
C.apply:	mflr	0
	stu	0,-4(1)
apply:	stu	14,-4(1)
	stu	15,-4(1)
	lil	17,2
	b	uapply
unbinp:	l	17,0(1)
	ai	1,1,4
	l	4,4612(13)
	cmpl	0,17,4
	beq	unbinp1
	l	4,4608(13)
	cmpl	0,17,4
	beq	unbinp2
	l	4,4604(13)
	cmpl	0,17,4
	beq	unbinp3
	l	4,4600(13)
	cmpl	0,17,4
	beq	unbinp4
	l	4,4596(13)
	cmpl	0,17,4
	beq	unbinp5
	l	4,4592(13)
	cmpl	0,17,4
	beq	unbinp6
	l	4,4588(13)
	cmpl	0,17,4
	beq	unbinp7
	l	4,4584(13)
	cmpl	0,17,4
	beq	unbinp8
	l	4,4580(13)
	cmpl	0,17,4
	beq	unbinp9
	l	4,4576(13)
	cmpl	0,17,4
	beq	unbinp10
	lil	3,14
	cal	4,7106(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.ttyout
	bl	.ttyout
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	.globl	unbind0
unbind0:	cror	15,15,15
unbinp0:	b	erres
	.globl	unbind1
unbind1:	l	16,3728(13)
unbinp1:	st	16,1736(13)
	l	3,0(1)
	st	3,1756(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1712(13)
	ai	1,1,4
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
unbise:	cmpli	0,17,1
	bne	unbis19
	cmp	0,16,22
	blt	unbis14
	l	3,0(16)
	cmp	0,3,22
	bge	unbis19
	l	16,0(16)
	l	3,0(1)
	st	3,0(16)
	ai	1,1,4
	l	0,1736(13)
	mtlr	0
	br	
unbis14:	cal	4,10752(21)
	cmpl	0,16,4
	beq	unbis15
	l	3,0(1)
	st	3,0(16)
	ai	1,1,4
	l	0,1736(13)
	mtlr	0
	br	
unbis15:	ai	1,1,4
	l	0,1736(13)
	mtlr	0
	br	
unbis19:	st	17,1740(13)
	st	15,1732(13)
	b	unbid15
unbid12:	cmpli	0,17,0
	beq	unbid18
	l	15,0(16)
	l	16,4(16)
	cmp	0,15,22
	bge	unbid19
	si	4,17,1
	andil.	17,4,0xFFFF
	sli	3,17,2
	lx	3,1,3
	st	3,0(15)
unbid15:	cmp	0,16,22
	bge	unbid12
	cmpl	0,16,21
	beq	unbid18
	cal	4,10752(21)
	cmpl	0,16,4
	beq	unbid18
	cmpli	0,17,0
	beq	unbid18
	si	4,17,1
	andil.	17,4,0xFFFF
	sli	3,17,2
	lx	3,1,3
	st	3,0(16)
unbid18:	l	15,1732(13)
	l	3,1740(13)
	exts	3,3
	sli	3,3,2
	a	1,1,3
	l	0,1736(13)
	mtlr	0
	br	
unbid19:	stu	16,-4(1)
	sli	3,17,2
	lx	16,1,3
	.globl	C.unbides1
	bl	C.unbides1
	l	16,0(1)
	ai	1,1,4
	si	4,17,1
	andil.	17,4,0xFFFF
	b	unbid15
unbides0:	l	3,3720(13)
	stu	3,-4(1)
	b	unbides1
	.globl	C.unbides1
C.unbides1:	mflr	0
	stu	0,-4(1)
unbides1:	cmpl	0,16,21
	beq	unbides3
	l	3,4(15)
	stu	3,-4(1)
	l	15,0(15)
	cmp	0,15,22
	bge	unbides0
	l	3,0(16)
	st	3,0(15)
	l	16,4(16)
	.globl	unbides2
unbides2:	l	15,0(1)
	ai	1,1,4
	cmp	0,15,22
	bge	unbides1
	cmpl	0,15,21
	beq	unbides3
	l	3,0(16)
	st	3,0(15)
	l	16,4(16)
unbides3:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	unbind2
unbind2:	l	16,3728(13)
unbinp2:	l	3,0(1)
	st	3,1756(13)
	ai	1,1,4
	st	16,1736(13)
	b	unbdw7
unbdw6:	l	16,0(1)
	ai	1,1,4
	sth	16,24(17)
	l	3,0(1)
	st	3,8(17)
	ai	1,1,4
unbdw7:	l	17,0(1)
	ai	1,1,4
	cmpli	0,17,0
	bne	unbdw6
	l	0,1736(13)
	mtlr	0
	br	
	.globl	unbind3
unbind3:	l	3,0(1)
	st	3,1756(13)
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
unbinp3:	l	3,0(1)
	st	3,1756(13)
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	mtlr	16
	br	
	.globl	unbind4
unbind4:	l	16,3728(13)
unbinp4:	l	3,0(1)
	st	3,1756(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1712(13)
	ai	1,1,4
	ai	1,1,4
	l	3,0(1)
	st	3,1716(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1720(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1724(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1728(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1732(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1736(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1740(13)
	ai	1,1,4
	ai	1,1,4
	mtlr	16
	br	
	.globl	unbind5
unbind5:	l	16,3728(13)
unbinp5:	l	3,0(1)
	st	3,1756(13)
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	stu	16,-4(1)
	stu	15,-4(1)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.23
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.23:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	oril	15,21,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.24
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.24:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
	oril	15,14,0
	oril	14,17,0
	.globl	C.apply
	bl	C.apply
	l	15,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	unbind6
unbind6:	l	16,3728(13)
unbinp6:	l	3,0(1)
	st	3,1756(13)
	ai	1,1,4
	l	4,0(1)
	st	16,0(1)
	oril	16,4,0
	stu	15,-4(1)
	stu	14,-4(1)
	oril	14,16,0
	.globl	C.evprogn
	bl	C.evprogn
	l	14,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	unbind7
unbind7:	l	16,3728(13)
unbinp7:	l	3,0(1)
	st	3,1756(13)
	ai	1,1,4
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	mtlr	14
	br	
	.globl	unbind8
unbind8:	l	3,0(1)
	st	3,1756(13)
	ai	1,1,8
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
unbinp8:	l	3,0(1)
	st	3,1756(13)
	ai	1,1,8
	mtlr	16
	br	
	.globl	unbind9
unbind9:	l	16,3728(13)
unbinp9:	l	3,0(1)
	st	3,1756(13)
	l	17,1712(13)
	l	3,4(17)
	st	3,1712(13)
	l	17,0(17)
	st	21,4(17)
	ai	1,1,8
	l	17,0(1)
	ai	1,1,4
	a	4,17,17
	andil.	17,4,0xFFFF
	exts	3,17
	sli	3,3,2
	a	1,1,3
	mtlr	16
	br	
	.globl	unbind10
unbind10:	l	16,3728(13)
unbinp10:	l	3,0(1)
	st	3,1756(13)
	l	17,1712(13)
	l	3,4(17)
	st	3,1712(13)
	l	17,0(17)
	l	17,4(17)
	st	21,4(17)
	ai	1,1,8
	mtlr	16
	br	
	.set	._let,12
	.globl	C.let
C.let:	mflr	0
	stu	0,-4(1)
	.globl	let
let:	l	3,4(14)
	stu	3,-4(1)
	l	14,0(14)
	oril	15,21,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.25
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.25:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	21,4(6)
	oril	15,6,0
	stu	15,-4(1)
	oril	16,21,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.26
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.26:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	21,4(6)
	oril	16,6,0
	stu	16,-4(1)
let2:	cmp	0,14,22
	blt	let8
	l	17,0(14)
	l	3,4(14)
	stu	3,-4(1)
	cmp	0,17,22
	bge	let3
	oril	14,17,0
	oril	17,21,0
	b	let4
let3:	l	14,0(17)
	l	17,4(17)
let4:	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.27
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.27:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	st	14,4(15)
	oril	15,14,0
	cmpl	0,17,21
	beq	let5
	cmp	0,17,22
	blt	letwla1
	l	3,4(17)
	cmpl	0,3,21
	bne	letwla1
let5:	l	14,0(17)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.28
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.28:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	st	14,4(16)
	oril	16,14,0
	l	14,0(1)
	ai	1,1,4
	b	let2
let8:	l	14,0(1)
	ai	1,1,4
	l	14,4(14)
	l	15,0(1)
	ai	1,1,4
	l	15,4(15)
	l	17,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.29
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.29:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	17,4(6)
	oril	15,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.30
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.30:	l	3,4(6)
	st	3,1184(13)
	cal	3,13920(21)
	st	3,0(6)
	st	15,4(6)
	oril	15,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.31
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.31:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
letwla1:	oril	14,17,0
letwla2:	cal	15,11200(21)
	b	errwna
	.set	._letseq,6
	.globl	C.letseq
C.letseq:	mflr	0
	stu	0,-4(1)
	.globl	letseq
letseq:	cal	14,11232(21)
	cal	15,10624(21)
	b	errudf
	.set	._letv,6
	.globl	C.letv
C.letv:	mflr	0
	stu	0,-4(1)
	.globl	letv
letv:	l	3,4(14)
	stu	3,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	l	3,4(14)
	stu	3,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	cal	3,11264(21)
	st	3,1744(13)
letvq2:	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.32
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.32:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	16,4(6)
	oril	16,6,0
	l	3,1712(13)
	st	3,1752(13)
	.globl	C.verlpar
	bl	C.verlpar
	b	bndtrb
	.set	._letvq,6
	.globl	C.letvq
C.letvq:	mflr	0
	stu	0,-4(1)
	.globl	letvq
letvq:	l	3,0(14)
	stu	3,-4(1)
	l	14,4(14)
	l	3,4(14)
	stu	3,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	cal	3,11296(21)
	st	3,1744(13)
	b	letvq2
	.set	._flet,6
	.globl	C.flet
C.flet:	mflr	0
	stu	0,-4(1)
	.globl	flet
flet:	cmp	0,14,22
	blt	fleterr1
	l	15,0(14)
	l	3,4(14)
	st	3,1728(13)
	lil	3,0
	stu	3,-4(1)
	b	flet3
flet2:	l	14,0(15)
	cmp	0,14,22
	blt	fleterr1
	l	16,0(14)
	cmpl	0,16,23
	blt	fleterr2
	cmpl	0,16,22
	bge	fleterr2
	l	3,8(16)
	stu	3,-4(1)
	l	3,4(14)
	st	3,8(16)
	lhz	17,24(16)
	stu	17,-4(1)
	lil	3,7
	sth	3,24(16)
	stu	16,-4(1)
	l	15,4(15)
flet3:	cmp	0,15,22
	bge	flet2
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4608(13)
	stu	3,-4(1)
	st	1,1756(13)
	l	14,1728(13)
	cal	3,11328(21)
	st	3,1744(13)
	b	evprogn
fleterr1:	cal	15,11328(21)
	b	errnla
fleterr2:	oril	14,16,0
	cal	15,11328(21)
	b	errnva
	.set	._tag,6
	.globl	C.tag
C.tag:	mflr	0
	stu	0,-4(1)
	.globl	tag
tag:	l	3,0(14)
	stu	3,-4(1)
tag3:	l	3,1756(13)
	stu	3,-4(1)
	l	3,4604(13)
	stu	3,-4(1)
	st	1,1756(13)
	cal	3,10912(21)
	st	3,1744(13)
	b	evexpg
	.set	._evtag,6
	.globl	C.evtag
C.evtag:	mflr	0
	stu	0,-4(1)
	.globl	evtag
evtag:	stu	14,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	cmpl	0,14,21
	blt	evtagerr
	cmpl	0,14,22
	bge	evtagerr
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	b	tag3
evtagerr:	l	15,0(1)
	ai	1,1,4
	cal	15,10944(21)
	b	errsym
	.set	._evexit,6
	.globl	C.evexit
C.evexit:	mflr	0
	stu	0,-4(1)
	.globl	evexit
evexit:	l	3,4(14)
	stu	3,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	cal	3,11040(21)
	st	3,1744(13)
	b	exit1
	.set	._untlxit,6
	.globl	C.untlxit
C.untlxit:	mflr	0
	stu	0,-4(1)
	.globl	untlxit
untlxit:	l	3,0(14)
	stu	3,-4(1)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4604(13)
	stu	3,-4(1)
	st	1,1756(13)
	l	3,4(14)
	stu	3,-4(1)
untlxit1:	l	14,0(1)
	cal	3,10976(21)
	st	3,1744(13)
	.globl	C.evprogn
	bl	C.evprogn
	b	untlxit1
	.set	._ffexit,6
	.globl	C.ffexit
C.ffexit:	mflr	0
	stu	0,-4(1)
	.globl	ffexit
ffexit:	l	3,0(14)
	stu	3,-4(1)
	l	14,4(14)
	cal	3,11008(21)
	st	3,1744(13)
exit1:	.globl	C.evprogn
	bl	C.evprogn
	l	15,0(1)
	ai	1,1,4
	.globl	findtag
findtag:	l	1,1756(13)
	l	16,0(1)
	l	4,4604(13)
	cmpl	0,16,4
	beq	evesc3
	l	4,4596(13)
	cmpl	0,16,4
	beq	evesc4
	l	16,3676(13)
	b	unbinp
evesc3:	ai	1,1,4
	l	3,0(1)
	st	3,1756(13)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	cmpl	0,15,16
	bne	findtag
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
evesc4:	ai	1,1,4
	l	3,0(1)
	st	3,1756(13)
	ai	1,1,4
	stu	15,-4(1)
	stu	14,-4(1)
	lil	17,3
	b	funcall
	.set	._unexit,6
	.globl	C.unexit
C.unexit:	mflr	0
	stu	0,-4(1)
	.globl	unexit
unexit:	l	15,0(14)
	l	14,4(14)
	.globl	uvesc1
uvesc1:	l	1,1756(13)
	l	16,0(1)
	l	4,4604(13)
	cmpl	0,16,4
	beq	uvesc3
	l	4,4596(13)
	cmpl	0,16,4
	beq	uvesc4
	l	16,3668(13)
	b	unbinp
uvesc3:	ai	1,1,4
	l	3,0(1)
	st	3,1756(13)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	cmpl	0,15,16
	bne	uvesc1
	cal	3,11104(21)
	st	3,1744(13)
	b	evprogn
uvesc4:	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.33
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.33:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.34
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.34:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
	oril	15,14,0
	l	3,0(1)
	st	3,1756(13)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	b	apply
	.set	._unwind,6
	.globl	C.unwind
C.unwind:	mflr	0
	stu	0,-4(1)
	.globl	unwind
unwind:	l	3,4(14)
	stu	3,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	15,0(1)
	ai	1,1,4
	cmpl	0,14,18
	blt	unwind4
	cal	15,11072(21)
	b	errnia
unwind3:	l	1,1756(13)
	l	16,3660(13)
	b	unbinp
	.globl	unwind4
unwind4:	exts	14,14
	si	14,14,1
	cmpi	0,14,0
	bge	unwind3
	lil	14,0
	oril	14,15,0
	cal	3,11072(21)
	st	3,1744(13)
	b	evprogn
	.globl	C.llitsoft
C.llitsoft:	mflr	0
	stu	0,-4(1)
llitsoft:	cal	16,10592(21)
	l	16,0(16)
	b	llitsofi
llsupit:	cal	17,10592(21)
	l	17,0(17)
	b	llsupit1
llsupit0:	l	5,0(17)
	cmpl	0,5,21
	blt	llitster
	cmpl	0,5,22
	bge	llitster
	l	4,0(17)
	cmpl	0,14,4
	beq	llsupit3
	l	17,4(17)
llsupit1:	cmp	0,17,22
	bge	llsupit0
	cmpl	0,17,21
	blt	llitster
	cmpl	0,17,22
	bge	llitster
llsupit2:	cmpl	0,14,17
	beq	llsupit4
	cmpl	0,17,21
	beq	llitster
	l	17,12(17)
	b	llsupit2
llsupit3:	oril	14,15,0
	oril	15,16,0
	l	16,4(17)
	b	llitsofi
llsupit4:	oril	14,15,0
	oril	15,16,0
	l	16,12(17)
	b	llitsofi
llitsofi:	stu	15,-4(1)
	l	3,1740(13)
	stu	3,-4(1)
	l	3,1736(13)
	stu	3,-4(1)
	l	3,1732(13)
	stu	3,-4(1)
	l	3,1728(13)
	stu	3,-4(1)
	l	3,1724(13)
	stu	3,-4(1)
	l	3,1720(13)
	stu	3,-4(1)
	l	3,1716(13)
	stu	3,-4(1)
	stu	14,-4(1)
	l	3,1712(13)
	stu	3,-4(1)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4600(13)
	stu	3,-4(1)
	st	1,1756(13)
	st	21,1712(13)
	st	21,1716(13)
	stu	15,-4(1)
	oril	15,14,0
	oril	14,16,0
	.globl	C.findits
	bl	C.findits
	cmpl	0,14,21
	beq	llitster
	l	15,0(1)
	ai	1,1,4
	b	apply
llitster:	oril	14,15,0
	cal	15,160(21)
	cal	16,10592(21)
	st	21,0(16)
	b	errudf
findits0:	l	14,0(1)
	ai	1,1,4
	b	findits
	.globl	C.findits
C.findits:	mflr	0
	stu	0,-4(1)
findits:	cmp	0,14,22
	bge	findits1
	cmpl	0,14,21
	blt	llitster
	cmpl	0,14,22
	bge	llitster
	lil	16,0
	stu	15,-4(1)
	.globl	C.getfns
	bl	C.getfns
	l	15,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
findits1:	l	3,4(14)
	stu	3,-4(1)
	l	14,0(14)
	cmpl	0,14,21
	blt	llitster
	cmpl	0,14,22
	bge	llitster
	stu	15,-4(1)
	.globl	C.getfn1
	bl	C.getfn1
	l	15,0(1)
	ai	1,1,4
	cmpl	0,14,21
	beq	findits0
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llock,6
	.globl	C.llock
C.llock:	mflr	0
	stu	0,-4(1)
	.globl	llock
llock:	stu	14,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4596(13)
	stu	3,-4(1)
	st	1,1756(13)
	cal	3,11136(21)
	st	3,1744(13)
	b	evexpg
	.set	._protect,6
	.globl	C.protect
C.protect:	mflr	0
	stu	0,-4(1)
	.globl	protect
protect:	l	3,4(14)
	stu	3,-4(1)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4592(13)
	stu	3,-4(1)
	st	1,1756(13)
	b	evalcar
	.globl	C.sysprot
C.sysprot:	mflr	0
	stu	0,-4(1)
sysprot:	l	3,1756(13)
	stu	3,-4(1)
	l	3,4588(13)
	stu	3,-4(1)
	st	1,1756(13)
	mtlr	16
	br	
	.set	._function,6
	.globl	C.function
C.function:	mflr	0
	stu	0,-4(1)
	.globl	function
function:	cmp	0,14,22
	blt	funcret
	l	14,0(14)
	cmp	0,14,22
	blt	funcret
	l	3,1712(13)
	cmpl	0,3,21
	beq	funcret
	l	3,0(14)
	cal	4,13920(21)
	cmpl	0,3,4
	bne	funcret
	l	14,4(14)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.35
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.35:	l	3,4(6)
	st	3,1184(13)
	l	3,1712(13)
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.eva.36
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.eva.36:	l	3,4(6)
	st	3,1184(13)
	cal	3,11392(21)
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
funcret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.verlpar
C.verlpar:	mflr	0
	stu	0,-4(1)
verlpar:	cmp	0,16,22
	blt	vererr
	stu	16,-4(1)
	l	16,0(16)
	.globl	C.verlpar4
	bl	C.verlpar4
	l	16,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
verlpar3:	l	3,4(16)
	stu	3,-4(1)
	l	16,0(16)
	.globl	C.verlpar5
	bl	C.verlpar5
	l	16,0(1)
	ai	1,1,4
	b	verlpar4
	.globl	C.verlpar4
C.verlpar4:	mflr	0
	stu	0,-4(1)
verlpar4:	cmpl	0,16,21
	beq	verlpar9
	b	verlpar5
	.globl	C.verlpar5
C.verlpar5:	mflr	0
	stu	0,-4(1)
verlpar5:	cmp	0,16,22
	bge	verlpar3
	cmpl	0,16,23
	blt	.eva.37
	cmpl	0,16,22
	blt	verlpar9
.eva.37:vererr:	oril	14,16,0
	.globl	C.ferrnam
	bl	C.ferrnam
	b	errbpa
verlpar9:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.ferrnam
C.ferrnam:	mflr	0
	stu	0,-4(1)
ferrnam:	l	15,1744(13)
	cmpl	0,15,18
	bge	ferrname
	stu	14,-4(1)
	stu	15,-4(1)
	oril	14,15,0
	.globl	C.findfn
	bl	C.findfn
	cmpl	0,14,21
	beq	ferrnam1
	l	15,0(1)
	ai	1,1,4
	oril	15,14,0
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ferrnam1:	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
ferrname:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
