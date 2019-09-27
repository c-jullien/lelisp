	.file	"number.asm"
	.version	"02.01"
	.text	
	.align	4
	.data
	.align	4
	.globl	zundef
	.globl	fcons
	.globl	bvar
	.globl	zt
	.globl	zvoid
	.globl	zsyspkgc
	.globl	mstack
	.globl	zquote
moinsun:
	.long	0
fzero:
	.long	0
fltun:
	.long	0
fltmun:
	.long	0
fltimax:
	.long	0
fltimin:
	.long	0
cpfnt:
	.long	0
zsysgen:
	.long	0
pnmac1295:
	.string	"genarith"
	.even
pnmac1296:
	.string	"numberp"
	.even
pnmac1297:
	.string	"integerp"
	.even
pnmac1298:
	.string	"rationalp"
	.even
pnmac1299:
	.string	"float"
	.even
pnmac1300:
	.string	"fix"
	.even
pnmac1301:
	.string	"truncate"
	.even
pnmac1302:
	.string	"1+"
	.even
pnmac1303:
	.string	"1-"
	.even
pnmac1304:
	.string	"abs"
	.even
pnmac1305:
	.string	"+"
	.even
pnmac1306:
	.string	"0-"
	.even
pnmac1307:
	.string	"-"
	.even
pnmac1308:
	.string	"*"
	.even
pnmac1309:
	.string	"1/"
	.even
pnmac1310:
	.string	"//"
	.even
pnmac1311:
	.string	"/"
	.even
pnmac1312:
	.string	"quo"
	.even
pnmac1313:
	.string	"quotient"
	.even
pnmac1314:
	.string	"quomod"
	.even
zex:
	.long	0
pnmac1315:
	.string	"ex"
	.even
zexmod:
	.long	0
pnmac1316:
	.string	"mod"
	.even
pnmac1317:
	.string	"modulo"
	.even
pnmac1318:
	.string	"<?>"
	.even
pnmac1319:
	.string	"="
	.even
pnmac1320:
	.string	"<>"
	.even
pnmac1321:
	.string	"/="
	.even
pnmac1322:
	.string	">="
	.even
pnmac1323:
	.string	">"
	.even
pnmac1324:
	.string	"<="
	.even
pnmac1325:
	.string	"<"
	.even
pnmac1326:
	.string	"zerop"
	.even
pnmac1327:
	.string	"plusp"
	.even
pnmac1328:
	.string	"minusp"
	.even
pnmac1329:
	.string	"min"
	.even
pnmac1330:
	.string	"max"
	.even
pnmac1331:
	.string	"sin"
	.even
pnmac1332:
	.string	"cos"
	.even
pnmac1333:
	.string	"asin"
	.even
pnmac1334:
	.string	"acos"
	.even
pnmac1335:
	.string	"atan"
	.even
pnmac1336:
	.string	"exp"
	.even
pnmac1337:
	.string	"log"
	.even
pnmac1338:
	.string	"log10"
	.even
pnmac1339:
	.string	"power"
	.even
pnmac1340:
	.string	"sqrt"
	.even
pnmac1341:
	.string	"most-positive-fixnum"
	.even
pnmac1342:
	.string	"most-negative-fixnum"
	.even
pnmac1343:
	.string	"minus-0-fixnum"
	.even
	.globl	accusingle1
znumberp:
	.long	0
zintgerp:
	.long	0
zrationalp:
	.long	0
zllfloat:
	.long	0
zlltrunc:
	.long	0
	.globl	aux1
zllfix:
	.long	0
zgaadd1:
	.long	0
zgasub1:
	.long	0
zgaabs:
	.long	0
zgaplus:
	.long	0
zgatimes:
	.long	0
zgadinv:
	.long	0
zgadiff:
	.long	0
zgadrev:
	.long	0
zgadiv:
	.long	0
zgaquomod:
	.long	0
zgamod:
	.long	0
zgacomp:
	.long	0
zzerop:
	.long	0
zminusp:
	.long	0
zplusp:
	.long	0
zgaeqen:
	.long	0
zganeqn:
	.long	0
zgagt:
	.long	0
zgage:
	.long	0
zgalt:
	.long	0
zgale:
	.long	0
zmin:
	.long	0
zmax:
	.long	0
zllsin:
	.long	0
zllcos:
	.long	0
zllasin:
	.long	0
zllacos:
	.long	0
zllatan:
	.long	0
zllexp:
	.long	0
zlllog:
	.long	0
zlllog10:
	.long	0
zllpower:
	.long	0
zllsqrt:
	.long	0
zllfixmax:
	.long	0
zllfixmin:
	.long	0
zllminus0:
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
	.globl	reenter
	.globl	theend
	.globl	errfs
	.globl	errgen
	.globl	errnna
	.globl	errnia
	.globl	errnfa
	.globl	errnsa
	.globl	errnla
	.globl	errnva
	.globl	errwna
	.globl	errstl
	.globl	err0dv
	.globl	gettype
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	inisymb
	.globl	inicst
	.globl	evalcar
	.globl	evala1
	.globl	apply
	.globl	ffuncall
	.globl	getfns
	.globl	nreverse
	.globl	ffsymbol
	.globl	ini_nbs
	.globl	zex
	.globl	gaeqn
	.globl	gaplus2i
	.globl	gadiff2i
	.globl	gatim2i
	.globl	gadinv
	.globl	gadiv
	.globl	llfix
	.globl	llfloat
	.globl	lltrunc
	.globl	zlltrunc
	.globl	llsin
	.globl	llcos
	.globl	llasin
	.globl	llacos
	.globl	llatan
	.globl	llexp
	.globl	lllog
	.globl	llpower
	.globl	llsqrt
	.globl	gacomp
	.globl	gaeqen
	.globl	galt
	.globl	gagt
	.globl	gaadd1
	.globl	gasub1
	.globl	gaquomod
	.globl	zgaquomod
	.globl	gaabs
	.globl	gadrev
	.globl	intgerp
	.globl	numberp
	.globl	gamod
	.globl	bangen1
	.globl	zexmod
	.globl	zllfloat
	.globl	zllfix
	.globl	fzero
	.globl	fltun
	.globl	fltmun
	.globl	fltimax
	.globl	fltimin

	# FENTRY ini_nbs
	.align	4
ini_nbs:
	movl	$8,%eax
	movl	$pnmac1295,%ebx
	movl	$zsysgen,%ecx
	calll	inicst
	movl	%esi,(%eax)
	movl	zsyspkgc,%ebp
	movl	%ebp,12(%eax)
	movl	$7,%eax
	movl	$pnmac1296,%ebx
	movl	$numberp,%ecx
	movl	$znumberp,%edx
	pushl	$2
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac1297,%ebx
	movl	$intgerp,%ecx
	movl	$zintgerp,%edx
	pushl	$2
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac1298,%ebx
	movl	$rationalp,%ecx
	movl	$zrationalp,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1299,%ebx
	movl	$llfloat,%ecx
	movl	$zllfloat,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1300,%ebx
	movl	$llfix,%ecx
	movl	$zllfix,%edx
	pushl	$2
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac1301,%ebx
	movl	$lltrunc,%ecx
	movl	$zlltrunc,%edx
	pushl	$2
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac1302,%ebx
	movl	$gaadd1,%ecx
	movl	$zgaadd1,%edx
	pushl	$2
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac1303,%ebx
	movl	$gasub1,%ecx
	movl	$zgasub1,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1304,%ebx
	movl	$gaabs,%ecx
	movl	$zgaabs,%edx
	pushl	$2
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac1305,%ebx
	movl	$gaplus,%ecx
	movl	$zgaplus,%edx
	pushl	$5
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac1306,%ebx
	movl	$gadinv,%ecx
	movl	$zgadinv,%edx
	pushl	$2
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac1307,%ebx
	movl	$gadiff,%ecx
	movl	$zgadiff,%edx
	pushl	$5
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac1308,%ebx
	movl	$gatimes,%ecx
	movl	$zgatimes,%edx
	pushl	$5
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac1309,%ebx
	movl	$gadrev,%ecx
	movl	$zgadrev,%edx
	pushl	$2
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac1310,%ebx
	movl	$gadiv,%ecx
	movl	$zgadiv,%edx
	pushl	$5
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac1311,%ebx
	movl	$gadiv,%ecx
	movl	$zgadiv,%edx
	pushl	$5
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1312,%ebx
	movl	$gaquomod,%ecx
	movl	$zgaquomod,%edx
	pushl	$3
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac1313,%ebx
	movl	$gaquomod,%ecx
	movl	$zgaquomod,%edx
	pushl	$3
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1314,%ebx
	movl	$gaquomod,%ecx
	movl	$zgaquomod,%edx
	pushl	$3
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac1315,%ebx
	movl	$zex,%ecx
	calll	inicst
	movl	$3,%eax
	movl	$pnmac1316,%ebx
	movl	$zexmod,%ecx
	calll	inicst
	movl	$0,(%eax)
	movl	zex,%ebp
	movl	%ebp,12(%eax)
	movl	$6,%eax
	movl	$pnmac1317,%ebx
	movl	$gamod,%ecx
	movl	$zgamod,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1318,%ebx
	movl	$gacomp,%ecx
	movl	$zgacomp,%edx
	pushl	$3
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac1319,%ebx
	movl	$gaeqen,%ecx
	movl	$zgaeqen,%edx
	pushl	$5
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac1320,%ebx
	movl	$ganeqn,%ecx
	movl	$zganeqn,%edx
	pushl	$3
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac1321,%ebx
	movl	$ganeqn,%ecx
	movl	$zganeqn,%edx
	pushl	$3
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac1322,%ebx
	movl	$gage,%ecx
	movl	$zgage,%edx
	pushl	$5
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac1323,%ebx
	movl	$gagt,%ecx
	movl	$zgagt,%edx
	pushl	$5
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac1324,%ebx
	movl	$gale,%ecx
	movl	$zgale,%edx
	pushl	$5
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac1325,%ebx
	movl	$galt,%ecx
	movl	$zgalt,%edx
	pushl	$5
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1326,%ebx
	movl	$zerop,%ecx
	movl	$zzerop,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1327,%ebx
	movl	$plusp,%ecx
	movl	$zplusp,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1328,%ebx
	movl	$minusp,%ecx
	movl	$zminusp,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1329,%ebx
	movl	$min,%ecx
	movl	$zmin,%edx
	pushl	$5
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1330,%ebx
	movl	$max,%ecx
	movl	$zmax,%edx
	pushl	$5
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1331,%ebx
	movl	$llsin,%ecx
	movl	$zllsin,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1332,%ebx
	movl	$llcos,%ecx
	movl	$zllcos,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1333,%ebx
	movl	$llasin,%ecx
	movl	$zllasin,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1334,%ebx
	movl	$llacos,%ecx
	movl	$zllacos,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1335,%ebx
	movl	$llatan,%ecx
	movl	$zllatan,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1336,%ebx
	movl	$llexp,%ecx
	movl	$zllexp,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1337,%ebx
	movl	$lllog,%ecx
	movl	$zlllog,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1338,%ebx
	movl	$lllog10,%ecx
	movl	$zlllog10,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1339,%ebx
	movl	$llpower,%ecx
	movl	$zllpower,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1340,%ebx
	movl	$llsqrt,%ecx
	movl	$zllsqrt,%edx
	pushl	$2
	calll	inisymb
	movl	$20,%eax
	movl	$pnmac1341,%ebx
	movl	$llfixmax,%ecx
	movl	$zllfixmax,%edx
	pushl	$1
	calll	inisymb
	movl	$20,%eax
	movl	$pnmac1342,%ebx
	movl	$llfixmin,%ecx
	movl	$zllfixmin,%edx
	pushl	$1
	calll	inisymb
	movl	$14,%eax
	movl	$pnmac1343,%ebx
	movl	$llminus0,%ecx
	movl	$zllminus0,%edx
	pushl	$1
	calll	inisymb
	movl	$65536+-1,%eax
	movl	%eax,moinsun
	xorl	%eax,%eax
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__1
	calll	gcfloat
laf__1:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	movl	%eax,fzero
	movl	$1,%eax
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__2
	calll	gcfloat
laf__2:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	movl	%eax,fltun
	movl	$65536+-1,%eax
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__3
	calll	gcfloat
laf__3:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	movl	%eax,fltmun
	movl	$32767,%eax
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__4
	calll	gcfloat
laf__4:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	movl	%eax,fltimax
	movl	$65536+-32767,%eax
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__5
	calll	gcfloat
laf__5:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	movl	%eax,fltimin
	ret	
bangen:
	pushl	%ecx
	calll	gettype
	pushl	%eax
	cmpl	%esi,%eax
	jb	bangerr
	cmpl	%edi,%eax
	jae	bangerr
	movl	%ecx,%ebx
	movl	%esi,%ecx
	calll	getfns
	cmpl	%esi,%eax
	jne	bangencal
	movl	(%esp),%ebx
	movl	zsysgen,%eax
	movl	(%eax),%eax
	cmpl	%esi,%eax
	je	bangerr
	cmpl	%esi,%eax
	jb	bangerr
	cmpl	%edi,%eax
	jae	bangerr
	calll	ffsymbol
	movl	4(%esp),%ebx
	movl	%esi,%ecx
	calll	getfns
	cmpl	%esi,%eax
	je	bangerr
bangencal:
	addl	$12,%esp
	popl	%edx
	jmp	ffuncall
bangerr:
	popl	%edx
	popl	%ebx
	ret	
bangen1:
	pushl	%eax
	pushl	$1
	calll	bangen
	popl	%edx
	popl	%eax
	jmp	errgen
bangen2:
	pushl	%eax
	pushl	%ebx
	pushl	$2
	calll	bangen
	popl	%edx
	popl	%eax
	cmpl	%edi,fcons
	jb	l__6
l1__6:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	popl	%ecx
	cmpl	%edi,fcons
	jb	l__7
l1__7:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	jmp	errgen

	# FENTRY numberp
	.align	4
numberp:
	cmpl	%eax,bfloat
	ja	nbpt
	cmpl	%eax,bfloat
	ja	lmac1344
	cmpl	%eax,bvect
	ja	nbpt
lmac1344:
	movl	znumberp,%ebx
nbpgen:
	pushl	%eax
	calll	gettype
	cmpl	%esi,%eax
	jb	nbpn
	cmpl	%edi,%eax
	jae	nbpn
	movl	%esi,%ecx
	calll	getfns
	cmpl	%esi,%eax
	je	nbpn
	movl	$1,%edx
	jmp	ffuncall
nbpn:
	addl	$4,%esp
nbpnil:
	movl	%esi,%eax
nbpt:
	ret	

	# FENTRY intgerp
	.align	4
intgerp:
	cmpl	%eax,bfloat
	ja	nbpt
	cmpl	%eax,bfloat
	ja	lmac1345
	cmpl	%eax,bvect
	ja	nbpnil
lmac1345:
	movl	zintgerp,%ebx
	jmp	nbpgen

	# FENTRY rationalp
	.align	4
rationalp:
	cmpl	%eax,bfloat
	ja	nbpt
	cmpl	%eax,bfloat
	ja	lmac1346
	cmpl	%eax,bvect
	ja	nbpnil
lmac1346:
	movl	zrationalp,%ebx
	jmp	nbpgen

	# FENTRY llfloat
	.align	4
llfloat:
	cmpl	%eax,bfloat
	jbe	llfloatf
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__8
	calll	gcfloat
laf__8:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
llfloatr:
	ret	
llfloatf:
	cmpl	%eax,bfloat
	ja	lmac1347
	cmpl	%eax,bvect
	ja	llfloatr
lmac1347:
	movl	zllfloat,%ecx
	jmp	bangen1

	# FENTRY lltrunc
	.align	4
lltrunc:
lltrunc1:
	movl	zlltrunc,%ecx
	cmpl	%eax,bfloat
	ja	lltrcret
	cmpl	%eax,bfloat
	ja	bangen1
	cmpl	%eax,bvect
	jbe	bangen1
	fldl	(%eax)
	pushl	%eax
	movl	fltimin,%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	jb	bangen1
	fldl	(%eax)
	pushl	%eax
	movl	fltimax,%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	ja	bangen1
	fldl	(%eax)
	fstcw	aux1
	fstcw	aux1+2
	fwait
	orw	$0x0c00,aux1
	fldcw	aux1
	fistp	accusingle1
	fldcw	aux1+2
	fwait
	movzwl	accusingle1,%eax
lltrcret:
	ret	

	# FENTRY llfix
	.align	4
llfix:
	jmp	lltrunc1

	# FENTRY gaadd1
	.align	4
gaadd1:
	movl	%eax,%ebx
	cmpl	%eax,bfloat
	jbe	gaadd2
	addw	$1,%ax
	jo	gaadd3
	cmpw	$0x8000,%ax
	je	gaadd3
	ret	
gaadd2:
	cmpl	%eax,bfloat
	ja	gaadd3
	cmpl	%eax,bvect
	jbe	gaadd3
	movl	fltun,%ebp
	fldl	(%ebp)
	faddl	(%eax)
	cmpl	$0,ffloat
	jne	laf__9
	calll	gcfloat
laf__9:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	ret	
gaadd3:
	movl	%ebx,%eax
	movl	$1,%ebx
	movl	zgaplus,%ecx
	jmp	bangen2

	# FENTRY gasub1
	.align	4
gasub1:
	movl	%eax,%ebx
	cmpl	%eax,bfloat
	jbe	gasub2
	subw	$1,%ax
	jo	gasub3
	cmpw	$0x8000,%ax
	je	gasub3
	ret	
gasub2:
	cmpl	%eax,bfloat
	ja	gasub3
	cmpl	%eax,bvect
	jbe	gasub3
	movl	fltun,%ebp
	fldl	(%ebp)
	fsubrl	(%eax)
	cmpl	$0,ffloat
	jne	laf__10
	calll	gcfloat
laf__10:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	ret	
gasub3:
	movl	%ebx,%eax
	movl	$1,%ebx
	movl	zgadiff,%ecx
	jmp	bangen2

	# FENTRY gaabs
	.align	4
gaabs:
	xorl	%ebx,%ebx
	cmpl	%eax,bfloat
	jbe	gaabs2
	cmpw	$0x8000,%ax
	je	gaabs3
	cmpw	%bx,%ax
	jge	gaabsret
	subw	%ax,%bx
	jo	gaabs3
	movl	%ebx,%eax
gaabsret:
	ret	
gaabs2:
	cmpl	%eax,bfloat
	ja	gaabs3
	cmpl	%eax,bvect
	jbe	gaabs3
	movl	fzero,%ebx
	fldl	(%eax)
	pushl	%eax
	fcompl	(%ebx)
	fstsw	%ax
	sahf
	popl	%eax
	jae	gaabsret
	fldl	(%eax)
	fsubrl	(%ebx)
	cmpl	$0,ffloat
	jne	laf__11
	calll	gcfloat
laf__11:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%ebx
	fstpl	(%ebp)
	fwait
	movl	%ebx,%eax
	ret	
gaabs3:
	movl	zgaabs,%ecx
	jmp	bangen1

	# FENTRY gaplus
	.align	4
gaplus:
	cmpw	$2,%dx
	jne	gapplus
	popl	%ebx
	popl	%eax
gaplus2i:
	movl	%eax,%ecx
	cmpl	%eax,bfloat
	jbe	gapplus0
	cmpl	%ebx,bfloat
	jbe	gapplus1
	addw	%bx,%ax
	jo	gapplus1
	cmpw	$0x8000,%ax
	je	gapplus1
	ret	
gapplus0:
	cmpl	%eax,bfloat
	ja	gapplus1
	cmpl	%eax,bvect
	jbe	gapplus1
	cmpl	%ebx,bfloat
	ja	gapplus1
	cmpl	%ebx,bvect
	jbe	gapplus1
	fldl	(%ebx)
	faddl	(%eax)
	cmpl	$0,ffloat
	jne	laf__12
	calll	gcfloat
laf__12:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	ret	
gapplus1:
	pushl	%ecx
	pushl	%ebx
gapplus:
	orw	%dx,%dx
	je	gaprt0
	cmpw	$1,%dx
	jne	gaplus0
	popl	%eax
	cmpl	%eax,bfloat
	ja	gaprret
	cmpl	%eax,bfloat
	ja	lmac1348
	cmpl	%eax,bvect
	ja	gaprret
lmac1348:
	xorl	%ebx,%ebx
	movl	zgaplus,%ecx
	jmp	bangen2
gaprt0:
	movl	%edx,%eax
gaprret:
	ret	
gaplus0:
	pushl	%edx
	movl	(%esp,%edx,4),%eax
gaplus1:
	cmpl	%eax,bfloat
	ja	gaplfx1
	cmpl	%eax,bfloat
	ja	lmac1349
	cmpl	%eax,bvect
	ja	gaplfl3
lmac1349:
	decw	%dx
	jg	gaplgn0
gaplus2:
	popl	%edx
	leal	(%esp,%edx,4),%esp
	ret	
gaplfx0:
	movl	(%esp,%edx,4),%ebx
	cmpl	%ebx,bfloat
	ja	lmac1350
	cmpl	%ebx,bvect
	ja	gaplfl0
lmac1350:
	cmpl	%ebx,bfloat
	jbe	gaplgn1
	addw	%ax,%bx
	jo	gaplgn0
	cmpw	$0x8000,%bx
	je	gaplgn0
	movl	%ebx,%eax
gaplfx1:
	decw	%dx
	jg	gaplfx0
	jmp	gaplus2
gaplfl0:
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__13
	calll	gcfloat
laf__13:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	jmp	gaplfl2
gaplfl1:
	movl	(%esp,%edx,4),%ebx
	cmpl	%ebx,bfloat
	ja	lmac1351
	cmpl	%ebx,bvect
	ja	gaplfl2
lmac1351:
	cmpl	%ebx,bfloat
	jbe	gaplgn1
	movl	%ebx,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__14
	calll	gcfloat
laf__14:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%ebx
	fstpl	(%ebp)
	fwait
gaplfl2:
	fldl	(%eax)
	faddl	(%ebx)
	cmpl	$0,ffloat
	jne	laf__15
	calll	gcfloat
laf__15:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%ebx
	fstpl	(%ebp)
	fwait
	movl	%ebx,%eax
gaplfl3:
	decw	%dx
	jg	gaplfl1
	jmp	gaplus2
gaplgn0:
	movl	(%esp,%edx,4),%ebx
gaplgn1:
	pushl	%edx
	movl	zgaplus,%ecx
	calll	bangen2
	popl	%edx
	jmp	gaplus1

	# FENTRY gatimes
	.align	4
gatimes:
	cmpw	$2,%dx
	jne	gattimes
	popl	%ebx
	popl	%eax
gatim2i:
	movl	%eax,%ecx
	cmpl	%eax,bfloat
	jbe	gattimes0
	cmpl	%ebx,bfloat
	jbe	gattimes1
	imulw	%bx,%ax
	jo	gattimes1
	cmpw	$0x8000,%ax
	je	gattimes1
	ret	
gattimes0:
	cmpl	%eax,bfloat
	ja	gattimes1
	cmpl	%eax,bvect
	jbe	gattimes1
	cmpl	%ebx,bfloat
	ja	gattimes1
	cmpl	%ebx,bvect
	jbe	gattimes1
	fldl	(%ebx)
	fmull	(%eax)
	cmpl	$0,ffloat
	jne	laf__16
	calll	gcfloat
laf__16:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	ret	
gattimes1:
	pushl	%ecx
	pushl	%ebx
gattimes:
	orw	%dx,%dx
	je	gatrt0
	cmpw	$1,%dx
	jne	gatime0
	popl	%eax
	cmpl	%eax,bfloat
	ja	gatrret
	cmpl	%eax,bfloat
	ja	lmac1352
	cmpl	%eax,bvect
	ja	gatrret
lmac1352:
	movl	$1,%ebx
	movl	zgatimes,%ecx
	jmp	bangen2
gatrret:
	ret	
gatrt0:
	movl	$1,%eax
	ret	
gatime0:
	pushl	%edx
	movl	(%esp,%edx,4),%eax
gatime1:
	cmpl	%eax,bfloat
	ja	gatifx1
	cmpl	%eax,bfloat
	ja	lmac1353
	cmpl	%eax,bvect
	ja	gatifl3
lmac1353:
	decw	%dx
	jg	gatign0
gatime2:
	popl	%edx
	leal	(%esp,%edx,4),%esp
	ret	
gatifx0:
	movl	(%esp,%edx,4),%ebx
	cmpl	%ebx,bfloat
	ja	lmac1354
	cmpl	%ebx,bvect
	ja	gatifl0
lmac1354:
	cmpl	%ebx,bfloat
	jbe	gatign1
	imulw	%ax,%bx
	jo	gatign0
	cmpw	$0x8000,%bx
	je	gatign0
	movl	%ebx,%eax
gatifx1:
	decw	%dx
	jg	gatifx0
	jmp	gatime2
gatifl0:
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__17
	calll	gcfloat
laf__17:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	jmp	gatifl2
gatifl1:
	movl	(%esp,%edx,4),%ebx
	cmpl	%ebx,bfloat
	ja	lmac1355
	cmpl	%ebx,bvect
	ja	gatifl2
lmac1355:
	cmpl	%ebx,bfloat
	jbe	gatign1
	movl	%ebx,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__18
	calll	gcfloat
laf__18:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%ebx
	fstpl	(%ebp)
	fwait
gatifl2:
	fldl	(%eax)
	fmull	(%ebx)
	cmpl	$0,ffloat
	jne	laf__19
	calll	gcfloat
laf__19:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%ebx
	fstpl	(%ebp)
	fwait
	movl	%ebx,%eax
gatifl3:
	decw	%dx
	jg	gatifl1
	jmp	gatime2
gatign0:
	movl	(%esp,%edx,4),%ebx
gatign1:
	pushl	%edx
	movl	zgatimes,%ecx
	calll	bangen2
	popl	%edx
	jmp	gatime1

	# FENTRY gadinv
	.align	4
gadinv:
	movl	%eax,%ebx
	jmp	gadneg

	# FENTRY gadiff
	.align	4
gadiff:
	cmpw	$2,%dx
	je	gadiff2
	cmpw	$1,%dx
	je	gadiff1
	orw	%dx,%dx
	jne	gadiff3
	movl	%edx,%eax
	ret	
gadiff1:
	popl	%ebx
gadneg:
	xorl	%eax,%eax
	cmpl	%ebx,bfloat
	ja	gadneg2
	cmpl	%ebx,bfloat
	ja	lmac1356
	cmpl	%ebx,bvect
	ja	gadneg3
lmac1356:
gadneg1:
	movl	zgadinv,%ecx
	movl	%ebx,%eax
	jmp	bangen1
gadneg2:
	subw	%bx,%ax
	jo	gadneg1
	cmpw	$0x8000,%ax
	je	gadneg1
	ret	
gadneg3:
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__20
	calll	gcfloat
laf__20:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	fldl	(%ebx)
	fsubrl	(%eax)
	cmpl	$0,ffloat
	jne	laf__21
	calll	gcfloat
laf__21:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	ret	
gadiff2:
	popl	%eax
gadiffp:
	movl	%eax,%ebx
	popl	%eax
gadiff2i:
	movl	%eax,%ecx
	cmpl	%eax,bfloat
	ja	gadiffp1
	cmpl	%eax,bfloat
	ja	lmac1357
	cmpl	%eax,bvect
	ja	gadiffp3
lmac1357:
gadiffp0:
	movl	%ecx,%eax
	movl	zgadiff,%ecx
	jmp	bangen2
gadiffp1:
	cmpl	%ebx,bfloat
	jbe	gadiffp2
	subw	%bx,%ax
	jo	gadiffp0
	cmpw	$0x8000,%ax
	je	gadiffp0
	ret	
gadiffp2:
	cmpl	%ebx,bfloat
	ja	gadiffp0
	cmpl	%ebx,bvect
	jbe	gadiffp0
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__22
	calll	gcfloat
laf__22:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	jmp	gadiffp5
gadiffp3:
	cmpl	%ebx,bfloat
	jbe	gadiffp4
	movl	%ebx,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__23
	calll	gcfloat
laf__23:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%ebx
	fstpl	(%ebp)
	fwait
	jmp	gadiffp5
gadiffp4:
	cmpl	%ebx,bfloat
	ja	gadiffp0
	cmpl	%ebx,bvect
	jbe	gadiffp0
gadiffp5:
	fldl	(%ebx)
	fsubrl	(%eax)
	cmpl	$0,ffloat
	jne	laf__24
	calll	gcfloat
laf__24:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	ret	
gadiff3:
	decw	%dx
	decw	%dx
	movl	(%esp,%edx,4),%eax
	movl	$gadiffp,(%esp,%edx,4)
	pushl	%edx
	incw	%dx
	jmp	gaplus1

	# FENTRY gadrev
	.align	4
gadrev:
	movl	%eax,%ebx
	jmp	garev

	# FENTRY gadiv
	.align	4
gadiv:
	cmpw	$2,%dx
	je	gadiv2
	cmpw	$1,%dx
	je	gadiv1
	orw	%dx,%dx
	jne	gadiv3
garevret:
	movl	$1,%eax
	ret	
gadiv1:
	popl	%ebx
garev:
	cmpl	$1,%ebx
	je	garevret
	cmpl	%ebx,bfloat
	ja	garev1
	cmpl	%ebx,bfloat
	ja	lmac1358
	cmpl	%ebx,bvect
	ja	garev2
lmac1358:
garev1:
	movl	zgadrev,%ecx
	movl	%ebx,%eax
	jmp	bangen1
garev2:
	movl	$1,%eax
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__25
	calll	gcfloat
laf__25:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	fldl	(%ebx)
	fdivrl	(%eax)
	cmpl	$0,ffloat
	jne	laf__26
	calll	gcfloat
laf__26:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	ret	
gadiv2:
	popl	%eax
gadivt:
	movl	%eax,%ebx
	popl	%eax
	movl	%eax,%ecx
	cmpl	%eax,bfloat
	ja	gadivt1
	cmpl	%eax,bfloat
	ja	lmac1359
	cmpl	%eax,bvect
	ja	gadivt3
lmac1359:
gadivt0:
	movl	%ecx,%eax
	movl	zgadiv,%ecx
	jmp	bangen2
gadivt1:
	cmpl	%ebx,bfloat
	jbe	gadivt2
	orw	%bx,%bx
	je	gadivt0
	cmpw	$0x8000,%ax
	jne	gadivt11
	cmpw	$65536+-1,%bx
	je	gadivt0
gadivt11:
	orl	%ebx,%ebx
	jz	l9__27
	pushl	%edx
	cwtd
	idivw	%bx
	movzwl	%dx,%eax
	popl	%edx
l9__27:
	orw	%ax,%ax
	jne	gadivt0
	movl	%ecx,%eax
	orl	%ebx,%ebx
	jz	gadivt0
	pushl	%edx
	cwtd
	idivw	%bx
	movzwl	%ax,%eax
	popl	%edx
l9__28:
	cmpw	$0x8000,%ax
	je	gadivt0
	ret	
gadivt2:
	cmpl	%ebx,bfloat
	ja	gadivt0
	cmpl	%ebx,bvect
	jbe	gadivt0
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__29
	calll	gcfloat
laf__29:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	jmp	gadivt5
gadivt3:
	cmpl	%ebx,bfloat
	jbe	gadivt4
	movl	%ebx,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__30
	calll	gcfloat
laf__30:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%ebx
	fstpl	(%ebp)
	fwait
	jmp	gadivt5
gadivt4:
	cmpl	%ebx,bfloat
	ja	gadivt0
	cmpl	%ebx,bvect
	jbe	gadivt0
gadivt5:
	fldl	(%ebx)
	fdivrl	(%eax)
	cmpl	$0,ffloat
	jne	laf__31
	calll	gcfloat
laf__31:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	ret	
gadiv3:
	decw	%dx
	decw	%dx
	movl	(%esp,%edx,4),%eax
	movl	$gadivt,(%esp,%edx,4)
	pushl	%edx
	incw	%dx
	jmp	gatime1

	# FENTRY gaquomod
	.align	4
gaquomod:
	movl	zgaquomod,%ecx
	cmpl	%eax,bfloat
	ja	lmac1360
	cmpl	%eax,bvect
	ja	bangen2
lmac1360:
	cmpl	%ebx,bfloat
	ja	lmac1361
	cmpl	%ebx,bvect
	ja	bangen2
lmac1361:
	cmpl	%eax,bfloat
	jbe	bangen2
	cmpl	%ebx,bfloat
	jbe	bangen2
	orw	%bx,%bx
	je	bangen2
	cmpw	$0x8000,%ax
	jne	gaquomod1
	cmpw	$65536+-1,%bx
	je	bangen2
gaquomod1:
	movl	%eax,%ecx
	orl	%ebx,%ebx
	jz	gaquomodg
	pushl	%edx
	cwtd
	idivw	%bx
	movzwl	%ax,%eax
	popl	%edx
l9__32:
	cmpw	$0x8000,%ax
	je	gaquomodg
	movl	%ecx,%edx
	orl	%ebx,%ebx
	jz	l9__33
	pushl	%eax
	movl	%edx,%eax
	cwtd
	idivw	%bx
	movzwl	%dx,%edx
	popl	%eax
l9__33:
	orw	%dx,%dx
	jge	gamodret
	orw	%ax,%ax
	jg	gaquomod3
	orw	%ax,%ax
	jl	gaquomod2
	orw	%bx,%bx
	jle	gaquomod3
gaquomod2:
	decw	%ax
	jmp	gaquoret
gaquomod3:
	incw	%ax
gaquoret:
	orw	%bx,%bx
	jge	gamodr3
	negw	%bx
gamodr3:
	addw	%bx,%dx
	jo	gaquomodg
gamodret:
	movl	zexmod,%ebx
	movl	%edx,(%ebx)
	ret	
gaquomodg:
	movl	%ecx,%eax
	movl	zgaquomod,%ecx
	jmp	bangen2
gaquo2:
	cmpl	%ebx,bfloat
	ja	lmac1362
	cmpl	%ebx,bvect
	ja	gaquo4
lmac1362:
	cmpl	%ebx,bfloat
	jbe	bangen2
	movl	%ebx,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__34
	calll	gcfloat
laf__34:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%ebx
	fstpl	(%ebp)
	fwait
	jmp	gaquo4
gaquo3:
	cmpl	%eax,bfloat
	jbe	bangen2
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__35
	calll	gcfloat
laf__35:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
gaquo4:
	movl	%eax,%ecx
	fldl	(%ebx)
	fdivrl	(%eax)
	cmpl	$0,ffloat
	jne	laf__36
	calll	gcfloat
laf__36:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	ret	

	# FENTRY gamod
	.align	4
gamod:
	calll	gaquomod
	movl	zexmod,%eax
	movl	(%eax),%eax
	ret	
gacom:
	cmpw	$2,%dx
	jge	gacom0
	movl	$2,%eax
	movl	cpfnt,%ebx
	jmp	errwna
gacom0:
	pushl	%edx
	movl	(%esp,%edx,4),%eax
gacom1:
	cmpl	%eax,bfloat
	ja	gacomfx1
	cmpl	%eax,bfloat
	ja	lmac1363
	cmpl	%eax,bvect
	ja	gacomfl3
lmac1363:
	decw	%dx
	jg	gacomgn0
gacom2:
	popl	%edx
	decw	%dx
	leal	(%esp,%edx,4),%esp
	popl	%eax
	ret	
gacom3:
	movl	%esi,%eax
	popl	%edx
	leal	(%esp,%edx,4),%esp
	ret	
gacomfx0:
	movl	(%esp,%edx,4),%ebx
	cmpl	%ebx,bfloat
	ja	lmac1364
	cmpl	%ebx,bvect
	ja	gacomfl0
lmac1364:
	cmpl	%ebx,bfloat
	jbe	gacomgn1
	cmpw	%bx,%ax
	je	gacomfx2
	cmpw	%bx,%ax
	jg	gacomfx3
	movl	$4,%eax
	jmp	gacomfx4
gacomfx2:
	movl	$2,%eax
	jmp	gacomfx4
gacomfx3:
	movl	$1,%eax
gacomfx4:
	andw	%cx,%ax
	orw	%ax,%ax
	je	gacom3
	movl	%ebx,%eax
gacomfx1:
	decw	%dx
	jg	gacomfx0
	jmp	gacom2
gacomfl0:
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__37
	calll	gcfloat
laf__37:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	jmp	gacomfl2
gacomfl1:
	movl	(%esp,%edx,4),%ebx
	cmpl	%ebx,bfloat
	ja	lmac1365
	cmpl	%ebx,bvect
	ja	gacomfl2
lmac1365:
	cmpl	%ebx,bfloat
	jbe	gacomgn1
	movl	%ebx,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__38
	calll	gcfloat
laf__38:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%ebx
	fstpl	(%ebp)
	fwait
gacomfl2:
	fldl	(%eax)
	pushl	%eax
	fcompl	(%ebx)
	fstsw	%ax
	sahf
	popl	%eax
	je	gacomfl4
	fldl	(%eax)
	pushl	%eax
	fcompl	(%ebx)
	fstsw	%ax
	sahf
	popl	%eax
	ja	gacomfl5
	movl	$4,%eax
	jmp	gacomfl6
gacomfl4:
	movl	$2,%eax
	jmp	gacomfl6
gacomfl5:
	movl	$1,%eax
gacomfl6:
	andw	%cx,%ax
	orw	%ax,%ax
	je	gacom3
	movl	%ebx,%eax
gacomfl3:
	decw	%dx
	jg	gacomfl1
	jmp	gacom2
gacomgn0:
	movl	(%esp,%edx,4),%ebx
gacomgn1:
	pushl	%edx
	pushl	%ecx
	pushl	%ebx
	movl	zgacomp,%ecx
	calll	bangensp2
	popl	%ebx
	popl	%ecx
	popl	%edx
	cmpl	%eax,bfloat
	jbe	gacom3
	orw	%ax,%ax
	je	gacomgn2
	cmpw	$1,%ax
	je	gacomgn3
	cmpw	moinsun,%ax
	jne	gacom3
	movl	$4,%eax
	jmp	gacomgn4
gacomgn2:
	movl	$2,%eax
	jmp	gacomgn4
gacomgn3:
	movl	$1,%eax
gacomgn4:
	andw	%cx,%ax
	orw	%ax,%ax
	je	gacom3
	movl	%ebx,%eax
	jmp	gacom1
bangensp2:
	pushl	$oneret
	pushl	%eax
	pushl	%ebx
	pushl	$2
	calll	bangen
	movl	8(%esp),%eax
	movl	cpfnt,%ecx
	movl	$tworet,12(%esp)
	calll	bangen
	popl	%edx
	popl	%eax
	cmpl	%edi,fcons
	jb	l__39
l1__39:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	popl	%ecx
	cmpl	%edi,fcons
	jb	l__40
l1__40:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	jmp	errgen
oneret:
	ret	
tworet:
	popl	%edx
	popl	%ebx
	popl	%ecx
	popl	%edx
	cmpl	%esi,%eax
	je	gacom3
	movl	%ebx,%eax
	jmp	gacom1

	# FENTRY gacomp
	.align	4
gacomp:
	movl	zgacomp,%ecx
	cmpl	%eax,bfloat
	ja	gacomp5
	cmpl	%eax,bfloat
	ja	bangen2
	cmpl	%eax,bvect
	jbe	bangen2
	cmpl	%ebx,bfloat
	ja	lmac1366
	cmpl	%ebx,bvect
	ja	gacomp1
lmac1366:
	cmpl	%ebx,bfloat
	jbe	bangen2
	movl	%ebx,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__41
	calll	gcfloat
laf__41:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%ebx
	fstpl	(%ebp)
	fwait
gacomp1:
	fldl	(%eax)
	pushl	%eax
	fcompl	(%ebx)
	fstsw	%ax
	sahf
	popl	%eax
	je	gacomp3
	fldl	(%eax)
	pushl	%eax
	fcompl	(%ebx)
	fstsw	%ax
	sahf
	popl	%eax
	ja	gacomp4
gacomp2:
	movl	moinsun,%eax
	ret	
gacomp3:
	xorl	%eax,%eax
	ret	
gacomp4:
	movl	$1,%eax
	ret	
gacomp5:
	cmpl	%ebx,bfloat
	ja	gacomp6
	cmpl	%ebx,bfloat
	ja	bangen2
	cmpl	%ebx,bvect
	jbe	bangen2
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__42
	calll	gcfloat
laf__42:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	jmp	gacomp1
gacomp6:
	cmpw	%bx,%ax
	je	gacomp3
	cmpw	%bx,%ax
	jg	gacomp4
	jmp	gacomp2

	# FENTRY zerop
	.align	4
zerop:
	movl	zzerop,%ebp
	movl	%ebp,cpfnt
	pushl	%eax
	pushl	$0
	movl	$2,%edx
	movl	$2,%ecx
	jmp	gacom

	# FENTRY minusp
	.align	4
minusp:
	movl	zminusp,%ebp
	movl	%ebp,cpfnt
	pushl	%eax
	pushl	$0
	movl	$2,%edx
	movl	$4,%ecx
	jmp	gacom

	# FENTRY plusp
	.align	4
plusp:
	movl	zplusp,%ebp
	movl	%ebp,cpfnt
	pushl	%eax
	pushl	$0
	movl	$2,%edx
	movl	$3,%ecx
	jmp	gacom
gaeqn:
	pushl	%ecx
	pushl	$gaeqnret
	pushl	%eax
	pushl	%ebx
	movl	zgaeqen,%ebp
	movl	%ebp,cpfnt
	movl	$2,%edx
	movl	$2,%ecx
	jmp	gacom
gaeqnret:
	popl	%ecx
	ret	

	# FENTRY gaeqen
	.align	4
gaeqen:
	cmpl	$2,%edx
	jne	gaeqen2
	popl	%ebx
	popl	%eax
	cmpl	%eax,bfloat
	jbe	gaeqen1
	cmpl	%ebx,bfloat
	jbe	gaeqen1
	cmpw	%bx,%ax
	je	gaeqqn0
	movl	%esi,%eax
gaeqqn0:
	ret	
gaeqen1:
	pushl	%eax
	pushl	%ebx
gaeqen2:
	movl	zgaeqen,%ebp
	movl	%ebp,cpfnt
	movl	$2,%ecx
	jmp	gacom

	# FENTRY ganeqn
	.align	4
ganeqn:
	cmpl	%eax,bfloat
	jbe	ganen1
	cmpl	%ebx,bfloat
	jbe	ganen1
	cmpw	%bx,%ax
	jne	ganen0
	movl	%esi,%eax
ganen0:
	ret	
ganen1:
	pushl	%eax
	pushl	%ebx
	movl	zganeqn,%ebp
	movl	%ebp,cpfnt
	movl	$5,%ecx
	movl	$2,%edx
	jmp	gacom

	# FENTRY gagt
	.align	4
gagt:
	movl	zgagt,%ebp
	movl	%ebp,cpfnt
	movl	$1,%ecx
	jmp	gacom

	# FENTRY gage
	.align	4
gage:
	movl	zgage,%ebp
	movl	%ebp,cpfnt
	movl	$3,%ecx
	jmp	gacom

	# FENTRY galt
	.align	4
galt:
	movl	zgalt,%ebp
	movl	%ebp,cpfnt
	movl	$4,%ecx
	jmp	gacom

	# FENTRY gale
	.align	4
gale:
	movl	zgale,%ebp
	movl	%ebp,cpfnt
	movl	$6,%ecx
	jmp	gacom

	# FENTRY min
	.align	4
min:
	orw	%dx,%dx
	je	minerr
	popl	%eax
	jmp	min3
min1:
	movl	(%esp),%ebx
	pushl	%edx
	calll	mintwo
	popl	%edx
	cmpl	%esi,%eax
	jne	min2
	popl	%eax
	jmp	min3
min2:
	addl	$4,%esp
min3:
	decw	%dx
	jg	min1
	ret	
minerr:
	movl	$1,%eax
	movl	zmin,%ebx
	jmp	errwna
mintwo:
	pushl	%eax
	pushl	%ebx
	movl	$2,%edx
	jmp	galt

	# FENTRY max
	.align	4
max:
	orw	%dx,%dx
	je	maxerr
	popl	%eax
	jmp	max3
max1:
	movl	(%esp),%ebx
	pushl	%edx
	calll	maxtwo
	popl	%edx
	cmpl	%esi,%eax
	jne	max2
	popl	%eax
	jmp	max3
max2:
	addl	$4,%esp
max3:
	decw	%dx
	jg	max1
	ret	
maxerr:
	movl	$1,%eax
	movl	zmax,%ebx
	jmp	errwna
maxtwo:
	pushl	%eax
	pushl	%ebx
	movl	$2,%edx
	jmp	gagt

	# FENTRY llsin
	.align	4
llsin:
	movl	zllsin,%ecx
	cmpl	%eax,bfloat
	ja	lmac1367
	cmpl	%eax,bvect
	ja	sin2
lmac1367:
	cmpl	%eax,bfloat
	jbe	bangen1
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__43
	calll	gcfloat
laf__43:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
sin2:
	# Calling intrinsic fsin
	fldl	(%eax)
	fsin
	cmpl	$0,ffloat
	jne	laf__44
	calll	gcfloat
laf__44:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	# Done with fsin
	ret	

	# FENTRY llcos
	.align	4
llcos:
	movl	zllcos,%ecx
	cmpl	%eax,bfloat
	ja	lmac1368
	cmpl	%eax,bvect
	ja	cos2
lmac1368:
	cmpl	%eax,bfloat
	jbe	bangen1
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__45
	calll	gcfloat
laf__45:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
cos2:
	# Calling intrinsic fcos
	fldl	(%eax)
	fcos
	cmpl	$0,ffloat
	jne	laf__46
	calll	gcfloat
laf__46:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	# Done with fcos
	ret	

	# FENTRY llasin
	.align	4
llasin:
	movl	zllasin,%ecx
	cmpl	%eax,bfloat
	ja	lmac1369
	cmpl	%eax,bvect
	ja	asin2
lmac1369:
	cmpl	%eax,bfloat
	jbe	bangen1
	cmpw	$1,%ax
	jg	bangen1
	cmpw	moinsun,%ax
	jl	bangen1
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__47
	calll	gcfloat
laf__47:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	jmp	asin3
asin2:
	fldl	(%eax)
	pushl	%eax
	movl	fltun,%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	ja	bangen1
	fldl	(%eax)
	pushl	%eax
	movl	fltmun,%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	jb	bangen1
asin3:
	# Calling intrinsic asin
	fldl	(%eax)
	fst	%st(1)
	fmul	%st(0),%st
	fld1
	fsubp	
	fsqrt
	fpatan
	cmpl	$0,ffloat
	jne	laf__48
	calll	gcfloat
laf__48:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	# Done with asin
	ret	

	# FENTRY llacos
	.align	4
llacos:
	movl	zllacos,%ecx
	cmpl	%eax,bfloat
	ja	lmac1370
	cmpl	%eax,bvect
	ja	acos2
lmac1370:
	cmpl	%eax,bfloat
	jbe	bangen1
	cmpw	$1,%ax
	jg	bangen1
	cmpw	moinsun,%ax
	jl	bangen1
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__49
	calll	gcfloat
laf__49:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	jmp	acos3
acos2:
	fldl	(%eax)
	pushl	%eax
	movl	fltun,%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	ja	bangen1
	fldl	(%eax)
	pushl	%eax
	movl	fltmun,%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	jb	bangen1
acos3:
	# Calling intrinsic acos
	fldl	(%eax)
	fst	%st(1)
	fmul	%st(0),%st
	fld1
	fsubp	
	fsqrt
	fxch	
	fpatan
	cmpl	$0,ffloat
	jne	laf__50
	calll	gcfloat
laf__50:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	# Done with acos
	ret	

	# FENTRY llatan
	.align	4
llatan:
	movl	zllatan,%ecx
	cmpl	%eax,bfloat
	ja	lmac1371
	cmpl	%eax,bvect
	ja	atan2
lmac1371:
	cmpl	%eax,bfloat
	jbe	bangen1
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__51
	calll	gcfloat
laf__51:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
atan2:
	# Calling intrinsic atan
	fldl	(%eax)
	fld1
	fpatan
	cmpl	$0,ffloat
	jne	laf__52
	calll	gcfloat
laf__52:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	# Done with atan
	ret	

	# FENTRY llexp
	.align	4
llexp:
	movl	zllexp,%ecx
	cmpl	%eax,bfloat
	ja	lmac1372
	cmpl	%eax,bvect
	ja	exp2
lmac1372:
	cmpl	%eax,bfloat
	jbe	bangen1
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__53
	calll	gcfloat
laf__53:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
exp2:
	# Calling intrinsic exp
	fldl	(%eax)
	fldl2e
	fmulp	
	fld	%st(0)
	frndint
	fxch	%st(1)
	fsub	%st(1),%st(0)
	f2xm1
	fld1
	faddp	%st(0),%st(1)
	fscale
	cmpl	$0,ffloat
	jne	laf__54
	calll	gcfloat
laf__54:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	fstp	%st(0)
	# Done with exp
	ret	

	# FENTRY lllog
	.align	4
lllog:
	movl	zlllog,%ecx
	cmpl	%eax,bfloat
	ja	lmac1373
	cmpl	%eax,bvect
	ja	log2
lmac1373:
	cmpl	%eax,bfloat
	jbe	bangen1
	orw	%ax,%ax
	jle	bangen1
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__55
	calll	gcfloat
laf__55:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	jmp	log3
log2:
	fldl	(%eax)
	pushl	%eax
	movl	fzero,%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	jbe	bangen1
log3:
	# Calling intrinsic log
	fldl	(%eax)
	fldln2
	fxch	%st(1)
	fyl2x
	cmpl	$0,ffloat
	jne	laf__56
	calll	gcfloat
laf__56:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	# Done with log
	ret	

	# FENTRY lllog10
	.align	4
lllog10:
	movl	zlllog10,%ecx
	cmpl	%eax,bfloat
	ja	lmac1374
	cmpl	%eax,bvect
	ja	log102
lmac1374:
	cmpl	%eax,bfloat
	jbe	bangen1
	orw	%ax,%ax
	jle	bangen1
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__57
	calll	gcfloat
laf__57:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	jmp	log103
log102:
	fldl	(%eax)
	pushl	%eax
	movl	fzero,%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	jbe	bangen1
log103:
	# Calling intrinsic log10
	fldl	(%eax)
	fldlg2
	fxch	%st(1)
	fyl2x
	cmpl	$0,ffloat
	jne	laf__58
	calll	gcfloat
laf__58:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	# Done with log10
	ret	

	# FENTRY llpower
	.align	4
llpower:
	movl	zllpower,%ecx
	cmpl	%eax,bfloat
	ja	lmac1375
	cmpl	%eax,bvect
	ja	power2
lmac1375:
	cmpl	%eax,bfloat
	jbe	bangen2
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__59
	calll	gcfloat
laf__59:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
power2:
	cmpl	%ebx,bfloat
	ja	lmac1376
	cmpl	%ebx,bvect
	ja	power3
lmac1376:
	cmpl	%ebx,bfloat
	jbe	bangen2
	movl	%ebx,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__60
	calll	gcfloat
laf__60:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%ebx
	fstpl	(%ebp)
	fwait
power3:
	# Calling intrinsic power
	fldl	(%ebx)
	fldl	(%eax)
	fyl2x
	fld1
	fld	%st(1)
	frndint
	fxch	%st(2)
	fsub	%st(2),%st
	f2xm1
	faddp	
	fscale
	cmpl	$0,ffloat
	jne	laf__61
	calll	gcfloat
laf__61:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	fstp	%st(0)
	# Done with power
	ret	

	# FENTRY llsqrt
	.align	4
llsqrt:
	movl	zllsqrt,%ecx
	cmpl	%eax,bfloat
	ja	lmac1377
	cmpl	%eax,bvect
	ja	sqrt2
lmac1377:
	cmpl	%eax,bfloat
	jbe	bangen1
	orw	%ax,%ax
	jl	bangen1
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__62
	calll	gcfloat
laf__62:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	jmp	sqrt3
sqrt2:
	fldl	(%eax)
	pushl	%eax
	movl	fzero,%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	jb	bangen1
sqrt3:
	# Calling intrinsic fsqrt
	fldl	(%eax)
	fsqrt
	cmpl	$0,ffloat
	jne	laf__63
	calll	gcfloat
laf__63:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	# Done with fsqrt
	ret	

	# FENTRY llfixmax
	.align	4
llfixmax:
	movl	$32767,%eax
	ret	

	# FENTRY llfixmin
	.align	4
llfixmin:
	movl	$65536+-32767,%eax
	ret	

	# FENTRY llminus0
	.align	4
llminus0:
	movl	$0x8000,%eax
	ret	
l__40:
	calll	gccons
	jmp	l1__40
l__39:
	calll	gccons
	jmp	l1__39
l__7:
	calll	gccons
	jmp	l1__7
l__6:
	calll	gccons
	jmp	l1__6
