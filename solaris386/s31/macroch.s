	.file	"macroch.asm"
	.version	"02.01"
	.text	
	.align	4
	.data
	.align	4
	.globl	zsyspkgc
	.globl	fcons
	.globl	mstack
	.globl	bvar
	.globl	zt
	.globl	zllexpr
	.globl	tabch
	.globl	zlread
	.globl	ibase
	.globl	cpkgc
	.globl	zstatrc
	.globl	savea4
	.globl	zfunction
	.globl	zquote
	.globl	znconc
	.globl	zappend
	.globl	zmcons
	.globl	zllcons
	.globl	zfncons
	.globl	zlist
	.globl	zvector
tabctyp:
	.long	0
tabccod:
	.long	0
pnmac394:
	.string	"dmc"
	.even
pnmac395:
	.string	"dms"
	.even
pnmac396:
	.string	"defsharp"
	.even
pnmac397:
	.string	"#"
	.even
zsharp:
	.long	0
pnmac398:
	.string	"sharp"
	.even
pnmac399:
	.string	":"
	.even
zuser:
	.long	0
pnmac400:
	.string	"user"
	.even
pnmac401:
	.string	"^"
	.even
pnmac402:
	.string	"["
	.even
pnmac403:
	.string	"]"
	.even
pnmac404:
	.string	"'"
	.even
pnmac405:
	.string	"`"
	.even
pnmac406:
	.string	","
	.even
zcommaat:
	.long	0
pnmac407:
	.string	",@"
	.even
zcommadot:
	.long	0
pnmac408:
	.string	",."
	.even
zsysharp:
	.long	0
pnmac409:
	.string	"sharp"
	.even
zsyscol:
	.long	0
pnmac410:
	.string	"colon"
	.even
pnmac411:
	.string	"."
	.even
pnmac412:
	.string	"+"
	.even
pnmac413:
	.string	"-"
	.even
pnmac414:
	.string	"'"
	.even
pnmac415:
	.string	"/"
	.even
pnmac416:
	.string	"\\"
	.even
pnmac417:
	.string	"^"
	.even
pnmac418:
	.string	":"
	.even
pnmac419:
	.string	"$"
	.even
pnmac420:
	.string	"%"
	.even
pnmac421:
	.string	"\""
	.even
pnmac422:
	.string	"|"
	.even
pnmac423:
	.string	"("
	.even
pnmac424:
	.string	"["
	.even
pnmac425:
	.string	"r"
	.even
zshrpval:
	.long	0
pnmac426:
	.string	"value"
	.even
zslowbyte:
	.long	0
pnmac427:
	.string	"lowbyte"
	.even
pnmac428:
	.string	"typech"
	.even
pnmac429:
	.string	"typecn"
	.even
zcnull:
	.long	0
pnmac430:
	.string	"cnull"
	.even
zcbcom:
	.long	0
pnmac431:
	.string	"cbcom"
	.even
zcecom:
	.long	0
pnmac432:
	.string	"cecom"
	.even
zcquote:
	.long	0
pnmac433:
	.string	"cquote"
	.even
zclpar:
	.long	0
pnmac434:
	.string	"clpar"
	.even
zcrpar:
	.long	0
pnmac435:
	.string	"crpar"
	.even
zcdot:
	.long	0
pnmac436:
	.string	"cdot"
	.even
zcsep:
	.long	0
pnmac437:
	.string	"csep"
	.even
zcpackage:
	.long	0
pnmac438:
	.string	"cpkgc"
	.even
zcsplice:
	.long	0
pnmac439:
	.string	"csplice"
	.even
zcmacro:
	.long	0
pnmac440:
	.string	"cmacro"
	.even
zcstring:
	.long	0
pnmac441:
	.string	"cstring"
	.even
zcpname:
	.long	0
pnmac442:
	.string	"cpname"
	.even
zcsymb:
	.long	0
pnmac443:
	.string	"csymb"
	.even
zcmsymb:
	.long	0
pnmac444:
	.string	"cmsymb"
	.even
zdmc:
	.long	0
zdms:
	.long	0
zdefsharp:
	.long	0
zllquote:
	.long	0
zllcomma:
	.long	0
zllbquote:
	.long	0
zllsharp:
	.long	0
zshrpdot:
	.long	0
zshrpplu:
	.long	0
zshrpmoi:
	.long	0
zshrpquo:
	.long	0
zshrpsla:
	.long	0
zshrpbak:
	.long	0
zshrphat:
	.long	0
zshrpcol:
	.long	0
zshrpdol:
	.long	0
zshrpprc:
	.long	0
zshrprad:
	.long	0
zshrpgui:
	.long	0
zshrpbar:
	.long	0
zshrppar:
	.long	0
	.globl	btbin
zshrpbra:
	.long	0
zllcolon:
	.long	0
zllhat:
	.long	0
zlllbra:
	.long	0
zllrbra:
	.long	0
ztypech:
	.long	0
ztypecod:
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
	.globl	errnia
	.globl	errudf
	.globl	errudv
	.globl	errwna
	.globl	erroob
	.globl	errsxt
	.globl	errsym
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	inisymb
	.globl	inicst
	.globl	trysympk
	.globl	readi
	.globl	getch
	.globl	asciii
	.globl	lread
	.globl	rereada4
	.globl	getcv
	.globl	read2
	.globl	rdpkgc2
	.globl	readdltd
	.globl	base10p
	.globl	ffuncall
	.globl	evala1
	.globl	sysprot
	.globl	llde
	.globl	getfns
	.globl	setfn
	.globl	getprop
	.globl	nreverse
	.globl	lllength
	.globl	list
	.globl	kwote
	.globl	stringa1
	.globl	makevect
	.globl	ini_mach
	.globl	zsyscol
	.globl	tabctyp
	.globl	tabccod

	# FENTRY ini_mach
	.align	4
ini_mach:
	movl	$3,%eax
	movl	$pnmac394,%ebx
	movl	$dmc,%ecx
	movl	$zdmc,%edx
	pushl	$6
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac395,%ebx
	movl	$dms,%ecx
	movl	$zdms,%edx
	pushl	$6
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac396,%ebx
	movl	$defsharp,%ecx
	movl	$zdefsharp,%edx
	pushl	$6
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac397,%ebx
	movl	$llsharp,%ecx
	movl	$zllsharp,%edx
	pushl	$1
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac398,%ebx
	movl	$zsharp,%ecx
	calll	inicst
	movl	$1,%eax
	movl	$pnmac399,%ebx
	movl	$llcolon,%ecx
	movl	$zllcolon,%edx
	pushl	$1
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac400,%ebx
	movl	$zuser,%ecx
	calll	inicst
	movl	$1,%eax
	movl	$pnmac401,%ebx
	movl	$llhat,%ecx
	movl	$zllhat,%edx
	pushl	$1
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac402,%ebx
	movl	$lllbra,%ecx
	movl	$zlllbra,%edx
	pushl	$1
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac403,%ebx
	movl	$llrbra,%ecx
	movl	$zllrbra,%edx
	pushl	$1
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac404,%ebx
	movl	$llquote,%ecx
	movl	$zllquote,%edx
	pushl	$1
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac405,%ebx
	movl	$llbquote,%ecx
	movl	$zllbquote,%edx
	pushl	$1
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac406,%ebx
	movl	$llcomma,%ecx
	movl	$zllcomma,%edx
	pushl	$1
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac407,%ebx
	movl	$zcommaat,%ecx
	calll	inicst
	movl	$2,%eax
	movl	$pnmac408,%ebx
	movl	$zcommadot,%ecx
	calll	inicst
	movl	zsyspkgc,%ebp
	movl	%ebp,cpkgc
	movl	$5,%eax
	movl	$pnmac409,%ebx
	movl	$zsysharp,%ecx
	calll	inicst
	movl	zsharp,%ebp
	movl	%ebp,(%eax)
	movl	$5,%eax
	movl	$pnmac410,%ebx
	movl	$zsyscol,%ecx
	calll	inicst
	movl	zuser,%ebp
	movl	%ebp,(%eax)
	movl	zsharp,%ebp
	movl	%ebp,cpkgc
	movl	$1,%eax
	movl	$pnmac411,%ebx
	movl	$shrpdot,%ecx
	movl	$zshrpdot,%edx
	pushl	$1
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac412,%ebx
	movl	$shrpplu,%ecx
	movl	$zshrpplu,%edx
	pushl	$1
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac413,%ebx
	movl	$shrpmoi,%ecx
	movl	$zshrpmoi,%edx
	pushl	$1
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac414,%ebx
	movl	$shrpquo,%ecx
	movl	$zshrpquo,%edx
	pushl	$1
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac415,%ebx
	movl	$shrpsla,%ecx
	movl	$zshrpsla,%edx
	pushl	$1
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac416,%ebx
	movl	$shrpbak,%ecx
	movl	$zshrpbak,%edx
	pushl	$1
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac417,%ebx
	movl	$shrphat,%ecx
	movl	$zshrphat,%edx
	pushl	$1
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac418,%ebx
	movl	$shrpcol,%ecx
	movl	$zshrpcol,%edx
	pushl	$1
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac419,%ebx
	movl	$shrpdol,%ecx
	movl	$zshrpdol,%edx
	pushl	$1
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac420,%ebx
	movl	$shrpprc,%ecx
	movl	$zshrpprc,%edx
	pushl	$1
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac421,%ebx
	movl	$shrpgui,%ecx
	movl	$zshrpgui,%edx
	pushl	$1
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac422,%ebx
	movl	$shrpbar,%ecx
	movl	$zshrpbar,%edx
	pushl	$1
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac423,%ebx
	movl	$shrppar,%ecx
	movl	$zshrppar,%edx
	pushl	$1
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac424,%ebx
	movl	$shrpbra,%ecx
	movl	$zshrpbra,%edx
	pushl	$1
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac425,%ebx
	movl	$shrprad,%ecx
	movl	$zshrprad,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac426,%ebx
	movl	$zshrpval,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac427,%ebx
	movl	$zslowbyte,%ecx
	calll	inicst
	movl	%esi,cpkgc
	movl	$6,%eax
	movl	$pnmac428,%ebx
	movl	$typech,%ecx
	movl	$ztypech,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac429,%ebx
	movl	$typecod,%ecx
	movl	$ztypecod,%edx
	pushl	$5
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac430,%ebx
	movl	$zcnull,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac431,%ebx
	movl	$zcbcom,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac432,%ebx
	movl	$zcecom,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac433,%ebx
	movl	$zcquote,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac434,%ebx
	movl	$zclpar,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac435,%ebx
	movl	$zcrpar,%ecx
	calll	inicst
	movl	$4,%eax
	movl	$pnmac436,%ebx
	movl	$zcdot,%ecx
	calll	inicst
	movl	$4,%eax
	movl	$pnmac437,%ebx
	movl	$zcsep,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac438,%ebx
	movl	$zcpackage,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac439,%ebx
	movl	$zcsplice,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac440,%ebx
	movl	$zcmacro,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac441,%ebx
	movl	$zcstring,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac442,%ebx
	movl	$zcpname,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac443,%ebx
	movl	$zcsymb,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac444,%ebx
	movl	$zcmsymb,%ecx
	calll	inicst
	movl	$15,%eax
	movl	%esi,%ebx
	calll	makevect
	movl	%eax,tabctyp
	movl	(%eax),%ebp
	pushl	zcnull
	popl	8(%ebp)
	movl	(%eax),%ebp
	pushl	zcbcom
	popl	12(%ebp)
	movl	(%eax),%ebp
	pushl	zcecom
	popl	16(%ebp)
	movl	(%eax),%ebp
	pushl	zcquote
	popl	20(%ebp)
	movl	(%eax),%ebp
	pushl	zclpar
	popl	24(%ebp)
	movl	(%eax),%ebp
	pushl	zcrpar
	popl	28(%ebp)
	movl	(%eax),%ebp
	pushl	zcdot
	popl	32(%ebp)
	movl	(%eax),%ebp
	pushl	zcsep
	popl	36(%ebp)
	movl	(%eax),%ebp
	pushl	zcpackage
	popl	40(%ebp)
	movl	(%eax),%ebp
	pushl	zcsplice
	popl	44(%ebp)
	movl	(%eax),%ebp
	pushl	zcmacro
	popl	48(%ebp)
	movl	(%eax),%ebp
	pushl	zcstring
	popl	52(%ebp)
	movl	(%eax),%ebp
	pushl	zcpname
	popl	56(%ebp)
	movl	(%eax),%ebp
	pushl	zcsymb
	popl	60(%ebp)
	movl	(%eax),%ebp
	pushl	zcmsymb
	popl	64(%ebp)
	movl	$15,%eax
	movl	%esi,%ebx
	calll	makevect
	movl	%eax,tabccod
	movl	(%eax),%ebp
	movl	$0,8(%ebp)
	movl	(%eax),%ebp
	movl	$1,12(%ebp)
	movl	(%eax),%ebp
	movl	$2,16(%ebp)
	movl	(%eax),%ebp
	movl	$3,20(%ebp)
	movl	(%eax),%ebp
	movl	$4,24(%ebp)
	movl	(%eax),%ebp
	movl	$5,28(%ebp)
	movl	(%eax),%ebp
	movl	$6,32(%ebp)
	movl	(%eax),%ebp
	movl	$7,36(%ebp)
	movl	(%eax),%ebp
	movl	$8,40(%ebp)
	movl	(%eax),%ebp
	movl	$9,44(%ebp)
	movl	(%eax),%ebp
	movl	$10,48(%ebp)
	movl	(%eax),%ebp
	movl	$11,52(%ebp)
	movl	(%eax),%ebp
	movl	$12,56(%ebp)
	movl	(%eax),%ebp
	movl	$13,60(%ebp)
	movl	(%eax),%ebp
	movl	$14,64(%ebp)
	ret	

	# FENTRY dmc
	.align	4
dmc:
	calll	llde
	pushl	%eax
	pushl	$dmcret
	pushl	%eax
	pushl	$10
	movl	$2,%edx
	jmp	typech
dmcret:
	popl	%eax
	ret	

	# FENTRY dms
	.align	4
dms:
	calll	llde
	pushl	%eax
	pushl	$dmcret
	pushl	%eax
	pushl	$9
	movl	$2,%edx
	jmp	typech

	# FENTRY defsharp
	.align	4
defsharp:
	movl	(%eax),%ebx
	cmpl	%esi,%ebx
	jb	defshrer
	cmpl	%edi,%ebx
	jae	defshrer
	pushl	%ebx
	pushl	4(%eax)
	movl	zsysharp,%eax
	movl	(%eax),%eax
	calll	trysympk
	movl	zllexpr,%ebx
	popl	%ecx
	calll	setfn
	popl	%eax
	ret	
defshrer:
	movl	%ebx,%eax
	movl	zdefsharp,%ebx
	jmp	errsym

	# FENTRY llquote
	.align	4
llquote:
	calll	readi
	cmpl	%edi,fcons
	jb	l__1
l1__1:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	cmpl	%edi,fcons
	jb	l__2
l1__2:
	xchgl	%edi,fcons
	movl	zquote,%ebp
	movl	%ebp,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	ret	

	# FENTRY llcomma
	.align	4
llcomma:
	movl	$12,%eax
	movl	zllcomma,%ebx
	jmp	errsxt
commain:
	calll	getch
	cmpw	$64,%dx
	je	commain1
	cmpw	$46,%dx
	je	commain2
	calll	rereada4
	movl	zllcomma,%eax
commain0:
	pushl	%eax
	calll	readi
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__3
l1__3:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	ret	
commain1:
	movl	zcommaat,%eax
	jmp	commain0
commain2:
	movl	zcommadot,%eax
	jmp	commain0

	# FENTRY llbquote
	.align	4
llbquote:
	movl	zllcomma,%eax
	pushl	8(%eax)
	movzwl	24(%eax),%ebx
	pushl	%ebx
	movl	$llbquot1,%ecx
	calll	sysprot
	movl	zllcomma,%eax
	movw	4(%esp),%bp
	movw	%bp,24(%eax)
	movl	8(%esp),%ebp
	movl	%ebp,8(%eax)
	movl	(%esp),%eax
	addl	$12,%esp
	jmp	*%ecx
llbquot1:
	movl	$commain,8(%eax)
	movw	$1,24(%eax)
	calll	readi
	jmp	backquot
backcste:
	cmpl	%esi,%eax
	je	backcst9
	cmpl	%edi,%eax
	jl	backcst8
	movl	(%eax),%edx
	cmpl	zquote,%edx
	jne	backcst8
	movl	4(%eax),%edx
	cmpl	%esi,4(%edx)
	je	backcst9
backcst8:
	movl	%esi,%edx
	ret	
backcst9:
	movl	zt,%edx
	ret	
backquot:
	cmpl	%esi,%eax
	jne	backquo0
	ret	
backquo0:
	cmpl	%edi,%eax
	jge	backquo1
	jmp	kwote
backquo1:
	movl	(%eax),%ebx
	cmpl	zllcomma,%ebx
	jne	backquo2
	movl	4(%eax),%eax
	ret	
backquo2:
	cmpl	zcommaat,%ebx
	je	backquor
	cmpl	zcommadot,%ebx
	je	backquor
	cmpl	%edi,%ebx
	jl	backquo3
	movl	zcommaat,%ebp
	cmpl	%ebp,(%ebx)
	je	backquo4
	movl	zcommadot,%ebp
	cmpl	%ebp,(%ebx)
	je	backquo5
backquo3:
	pushl	%ebx
	movl	4(%eax),%eax
	calll	backquot
	xchgl	%eax,(%esp)
	calll	backquot
	popl	%ebx
	cmpl	%esi,%ebx
	jne	backqu32
	calll	backcste
	cmpl	%esi,%edx
	je	backqu31
	movl	4(%eax),%eax
	movl	(%eax),%eax
	cmpl	%edi,fcons
	jb	l__4
l1__4:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	jmp	kwote
backqu31:
	cmpl	%edi,fcons
	jb	l__5
l1__5:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	cmpl	%edi,fcons
	jb	l__6
l1__6:
	xchgl	%edi,fcons
	movl	zfncons,%ebp
	movl	%ebp,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	ret	
backqu32:
	calll	backcste
	cmpl	%esi,%edx
	je	backqu34
	movl	%eax,%ecx
	movl	%ebx,%eax
	calll	backcste
	cmpl	%esi,%edx
	je	backqu33
	movl	4(%eax),%eax
	movl	(%eax),%eax
	movl	4(%ecx),%ecx
	cmpl	%edi,fcons
	jb	l__7
l1__7:
	xchgl	%edi,fcons
	movl	(%ecx),%ebp
	movl	%ebp,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	jmp	kwote
backqu33:
	movl	%ecx,%eax
backqu34:
	cmpl	%edi,%ebx
	jl	backqu36
	movl	(%ebx),%ecx
	cmpl	zllcons,%ecx
	jne	backqu35
	pushl	zmcons
	pushl	%eax
	movl	4(%ebx),%ebx
	pushl	(%ebx)
	movl	4(%ebx),%ebx
	pushl	(%ebx)
	movl	$4,%edx
	jmp	list
backqu35:
	cmpl	zfncons,%ecx
	je	backqu37
	cmpl	zlist,%ecx
	je	backqu38
	cmpl	zmcons,%ecx
	je	backqu38
backqu36:
	cmpl	%edi,fcons
	jb	l__8
l1__8:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	movl	zllcons,%ecx
	jmp	backquo7
backqu37:
	movl	zlist,%ecx
backqu38:
	movl	4(%ebx),%ebx
	jmp	backquo7
backquo4:
	movl	(%eax),%ebx
	pushl	4(%ebx)
	movl	4(%eax),%eax
	calll	backquot
	cmpl	%esi,%eax
	jne	backqu41
	popl	%eax
	ret	
backqu41:
	cmpl	%edi,%eax
	jl	backqu42
	movl	zappend,%ebp
	cmpl	%ebp,(%eax)
	jne	backqu42
	movl	4(%eax),%eax
	jmp	backqu43
backqu42:
	cmpl	%edi,fcons
	jb	l__9
l1__9:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
backqu43:
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__10
l1__10:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	cmpl	%edi,fcons
	jb	l__11
l1__11:
	xchgl	%edi,fcons
	movl	zappend,%ebp
	movl	%ebp,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	ret	
backquo5:
	cmpl	%esi,4(%eax)
	jne	backqu51
	movl	(%eax),%eax
	movl	4(%eax),%eax
	ret	
backqu51:
	pushl	(%eax)
	movl	4(%eax),%eax
	calll	backquot
	cmpl	%edi,fcons
	jb	l__12
l1__12:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__13
l1__13:
	xchgl	%edi,fcons
	movl	4(%ebx),%ebp
	movl	%ebp,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	cmpl	%edi,fcons
	jb	l__14
l1__14:
	xchgl	%edi,fcons
	movl	znconc,%ebp
	movl	%ebp,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	ret	
backquo7:
	cmpl	%edi,fcons
	jb	l__15
l1__15:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%ebx,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	cmpl	%edi,fcons
	jb	l__16
l1__16:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	ret	
backquor:
	movl	$12,%eax
	movl	zllbquote,%ebx
	jmp	errsxt

	# FENTRY llsharp
	.align	4
llsharp:
	calll	getch
	calll	base10p
	cmpl	%esi,%eax
	je	rdsh4
	subw	$48,%dx
	pushl	%edx
	jmp	rdsh3
rdsh2:
	movl	(%esp),%ebp
	imulw	$10,%bp,%bp
	movl	%ebp,(%esp)
	subw	$48,%dx
	addw	%dx,(%esp)
rdsh3:
	calll	getch
	calll	base10p
	cmpl	%esi,%eax
	jne	rdsh2
	pushl	$1
	jmp	rdsh5
rdsh4:
	pushl	$0
rdsh5:
	calll	asciii
	movl	%eax,%ebx
	pushl	%eax
	movl	zsysharp,%eax
	movl	(%eax),%eax
	movl	%esi,%ecx
	calll	getfns
	cmpl	%esi,%eax
	je	rdshr
	addl	$4,%esp
	popl	%edx
	jmp	ffuncall
rdshr:
	popl	%eax
	movl	zllsharp,%ebx
	jmp	errudf

	# FENTRY shrpdot
	.align	4
shrpdot:
	calll	readi
	calll	evala1
shrpdot1:
	cmpl	%edi,fcons
	jb	l__17
l1__17:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	ret	

	# FENTRY shrpplu
	.align	4
shrpplu:
	calll	readi
	calll	evala1
	cmpl	%esi,%eax
	je	shrpplu1
shrpplu0:
	pushl	$shrpdot1
	jmp	readi
shrpplu1:
	calll	readi
	movl	%esi,%eax
	ret	

	# FENTRY shrpmoi
	.align	4
shrpmoi:
	calll	readi
	calll	evala1
	cmpl	%esi,%eax
	jne	shrpplu1
	jmp	shrpplu0

	# FENTRY shrpquo
	.align	4
shrpquo:
	calll	readi
	cmpl	%edi,fcons
	jb	l__18
l1__18:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	cmpl	%edi,fcons
	jb	l__19
l1__19:
	xchgl	%edi,fcons
	movl	zfunction,%ebp
	movl	%ebp,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	jmp	shrpdot1

	# FENTRY shrpsla
	.align	4
shrpsla:
	calll	getch
	movl	%edx,%eax
	jmp	lowbyte

	# FENTRY shrpbak
	.align	4
shrpbak:
	movl	zstatrc,%ebx
	pushl	(%ebx)
	movl	%esi,(%ebx)
	calll	readi
	movl	zstatrc,%ebx
	popl	(%ebx)
	movl	zshrpval,%ebx
	pushl	%eax
	calll	getprop
	popl	%ebx
	cmpl	%esi,%eax
	jne	lowbyte
shrpbak1:
	movl	%ebx,%eax
	movl	zshrpval,%ebx
	jmp	errudv

	# FENTRY shrphat
	.align	4
shrphat:
	calll	getch
	andw	$31,%dx
	movl	%edx,%eax
	jmp	lowbyte

	# FENTRY shrpcol
	.align	4
shrpcol:
	movl	tabch,%ebp
	movl	(%ebp),%ebp
	movzbl	66(%ebp),%ebx
	pushl	%ebx
	pushl	cpkgc
	movl	$shrpcol1,%ecx
	calll	sysprot
	popl	%eax
	popl	cpkgc
	xchgl	%eax,(%esp)
	movl	tabch,%ebp
	movl	(%ebp),%ebp
	movb	%al,66(%ebp)
	xchgl	%eax,(%esp)
	addl	$4,%esp
	jmp	*%ecx
shrpcol1:
	movl	%esi,cpkgc
	movl	tabch,%ebp
	movl	(%ebp),%ebp
	movb	$8,66(%ebp)
	calll	readi
	cmpl	%edi,%eax
	jl	shrpcol3
	calll	getcv
	cmpw	$58,%dx
	je	shrpcol2
	calll	rereada4
	jmp	shrpcol3
shrpcol2:
	movl	%eax,cpkgc
	calll	readi
shrpcol3:
	cmpl	%edi,fcons
	jb	l__20
l1__20:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	ret	
shrpcoer:
	movl	$6,%eax
	movl	zshrpcol,%ebx
	jmp	errsxt

	# FENTRY shrpdol
	.align	4
shrpdol:
	pushl	zshrpdol
	movl	$16,%eax
	jmp	shrprad1

	# FENTRY shrpprc
	.align	4
shrpprc:
	pushl	zshrpprc
	movl	$2,%eax
	jmp	shrprad1

	# FENTRY shrprad
	.align	4
shrprad:
	pushl	zshrprad
shrprad1:
	calll	shrprad2
	cmpl	%edi,%eax
	jl	shrpradr
	movl	(%eax),%ebp
	cmpl	%ebp,bfloat
	jbe	shrpradr
	addl	$4,%esp
	ret	
shrprad2:
	pushl	ibase
	movl	%eax,ibase
	movl	$readi,%ecx
	calll	sysprot
	popl	%eax
	popl	ibase
	cmpl	%edi,fcons
	jb	l__21
l1__21:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	jmp	*%ecx
shrpradr:
	popl	%ebx
	jmp	errsxt

	# FENTRY shrpgui
	.align	4
shrpgui:
	movl	%esi,%eax
	jmp	shrpgui2
shrpgui1:
	cmpl	%edi,fcons
	jb	l__22
l1__22:
	xchgl	%edi,fcons
	movl	%edx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
shrpgui2:
	calll	getch
	cmpw	$34,%dx
	jne	shrpgui1
	calll	getch
	cmpw	$34,%dx
	je	shrpgui1
	calll	rereada4
	calll	nreverse
	cmpl	%edi,fcons
	jb	l__23
l1__23:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	ret	

	# FENTRY shrpbar
	.align	4
shrpbar:
	calll	getcv
shrpbari:
	cmpw	$35,%dx
	je	shrpbar0
	cmpw	$124,%dx
	jne	shrpbar
	calll	getcv
	cmpw	$35,%dx
	jne	shrpbari
	movl	%esi,%eax
	ret	
shrpbar0:
	calll	getcv
	cmpw	$124,%dx
	jne	shrpbari
	pushl	$shrpbar
	jmp	shrpbar

	# FENTRY shrppar
	.align	4
shrppar:
	calll	read2
	cmpl	%edi,%eax
	jl	shrpprr
	movl	%eax,%ebp
	subl	%edi,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbin,%eax
	btsl	%ebp,(%eax)
	popl	%eax
shrpprr:
	cmpl	%edi,fcons
	jb	l__24
l1__24:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	ret	

	# FENTRY shrpbra
	.align	4
shrpbra:
	calll	shrpbra0
	cmpl	%esi,cpkgc
	je	shrpbrar
	movl	cpkgc,%ebp
	movl	%ebp,4(%eax)
shrpbrar:
	jmp	shrpdot1
shrpbra0:
	pushl	cpkgc
	movl	$shrpbra1,%ecx
	calll	sysprot
	popl	%eax
	popl	cpkgc
	jmp	*%ecx
shrpbra1:
	movl	%esi,cpkgc
	movl	$93,%eax
	calll	readdltd
	pushl	%eax
	calll	lllength
	pushl	%eax
	movl	%esi,%ebx
	calll	makevect
	popl	%ecx
	popl	%ebx
	xorl	%edx,%edx
	jmp	shrpbra3
shrpbra2:
	movl	(%eax),%ebp
	pushl	(%ebx)
	popl	8(%ebp,%edx,4)
	movl	4(%ebx),%ebx
	incw	%dx
shrpbra3:
	cmpw	%cx,%dx
	jne	shrpbra2
	ret	
lowbyte:
	pushl	$shrpdot1
	calll	getch
	cmpw	$124,%dx
	je	lowbyte0
	jmp	rereada4
lowbyte0:
	cmpl	%eax,bfloat
	jbe	lowbyte5
	shlw	$8,%ax
	calll	getch
	cmpw	$47,%dx
	je	lowbyte2
	cmpw	$94,%dx
	je	lowbyte3
	cmpw	$92,%dx
	je	lowbyte4
	movl	%edx,%eax
	movl	zslowbyte,%ebx
	jmp	errsxt
lowbyte2:
	calll	getch
lowbytre:
	orw	%dx,%ax
	ret	
lowbyte3:
	calll	getch
	andw	$31,%dx
	jmp	lowbytre
lowbyte4:
	pushl	%eax
	calll	readi
	pushl	%eax
	movl	zshrpval,%ebx
	calll	getprop
	popl	%ebx
	popl	%edx
	cmpl	%esi,%eax
	je	shrpbak1
	cmpl	%eax,bfloat
	ja	lowbytre
lowbyte5:
	movl	%eax,%ebx
	movl	zshrpval,%eax
	jmp	errnia

	# FENTRY llcolon
	.align	4
llcolon:
	movl	zsyscol,%eax
	movl	(%eax),%eax
	movl	tabch,%ebp
	movl	(%ebp),%ebp
	movb	$8,66(%ebp)
	movl	$rdpkgc2,%ecx
	calll	sysprot
	movl	tabch,%ebp
	movl	(%ebp),%ebp
	movb	$10,66(%ebp)
	popl	%eax
	jmp	*%ecx

	# FENTRY llhat
	.align	4
llhat:
	calll	getch
	andw	$31,%dx
	jmp	asciii

	# FENTRY lllbra
	.align	4
lllbra:
	movl	zlllbra,%eax
lllbra1:
	movl	zlread,%ebx
	jmp	errudf

	# FENTRY llrbra
	.align	4
llrbra:
	movl	zllrbra,%eax
	jmp	lllbra1

	# FENTRY typech
	.align	4
typech:
	movl	ztypech,%ebx
typech0:
	cmpw	$1,%dx
	je	typechg1
	cmpw	$2,%dx
	je	typechs1
	movl	$2,%eax
	jmp	errwna
typechs1:
	popl	%eax
	cmpl	%eax,bfloat
	ja	typechs5
	movl	$14,%ecx
typechs2:
	movl	tabctyp,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%ecx,4),%edx
	cmpl	%edx,%eax
	je	typechs4
	decw	%cx
	jge	typechs2
	jmp	typechr1
typechs4:
	movl	%ecx,%eax
	jmp	typechs6
typechs5:
	orw	%ax,%ax
	jl	typechr2
	cmpw	$14,%ax
	jg	typechr2
typechs6:
	movl	tabccod,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%eax,4),%eax
	xchgl	%eax,(%esp)
	cmpl	ztypech,%ebx
	je	typechs7
	cmpl	%eax,bfloat
	jbe	typechr1
	orw	%ax,%ax
	jl	typechr2
	cmpw	$256,%ax
	jge	typechr2
	jmp	typechs8
typechs7:
	movl	%ebx,savea4
	calll	stringa1
	movl	(%eax),%ebp
	movzbl	8(%ebp),%eax
typechs8:
	popl	%ebx
	movl	tabch,%ebp
	movl	(%ebp),%ebp
	movb	%bl,8(%ebp,%eax)
	movl	tabctyp,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%ebx,4),%eax
	ret	
typechg1:
	popl	%eax
	cmpl	ztypech,%ebx
	je	typechg5
	cmpl	%eax,bfloat
	jbe	typechr1
	orw	%ax,%ax
	jl	typechr2
	cmpw	$256,%ax
	jge	typechr2
	jmp	typechg7
typechg5:
	movl	%ebx,savea4
	calll	stringa1
	movl	(%eax),%ebp
	movzbl	8(%ebp),%eax
typechg7:
	movl	tabch,%ebp
	movl	(%ebp),%ebp
	movzbl	8(%ebp,%eax),%eax
	movl	tabctyp,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%eax,4),%eax
	ret	
typechr1:
	jmp	errnia
typechr2:
	jmp	erroob

	# FENTRY typecod
	.align	4
typecod:
	movl	ztypecod,%ebx
	jmp	typech0
l__24:
	calll	gccons
	jmp	l1__24
l__23:
	calll	gccons
	jmp	l1__23
l__22:
	calll	gccons
	jmp	l1__22
l__21:
	calll	gccons
	jmp	l1__21
l__20:
	calll	gccons
	jmp	l1__20
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
l__6:
	calll	gccons
	jmp	l1__6
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
