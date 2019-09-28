	.file	"cntrl.asm"
	.version	"02.01"
	.text	
	.align	4
	.data
	.align	4
	.globl	hashtab
	.globl	fcons
	.globl	mstack
	.globl	bvar
	.globl	zundef
	.globl	zt
	.globl	zvoid
	.globl	zllsystem
	.globl	zlsubr0
	.globl	zlsubr1
	.globl	zlsubr2
	.globl	zlsubr3
	.globl	znlsubr
	.globl	zflsubr
	.globl	zllexpr
	.globl	zllfexpr
	.globl	zllmacro
	.globl	zlldmacro
	.globl	zllmsubr
	.globl	zlldmsubr
	.globl	savea1
	.globl	savea2
	.globl	errname
tabtypfn:
	.long	0
tabcodfn:
	.long	0
zlff:
	.long	0
pnmac894:
	.string	"loaded-from-file"
	.even
pnmac895:
	.string	"defun"
	.even
pnmac896:
	.string	"de"
	.even
pnmac897:
	.string	"df"
	.even
pnmac898:
	.string	"dm"
	.even
pnmac899:
	.string	"dmd"
	.even
pnmac900:
	.string	"defmacro"
	.even
pnmac901:
	.string	"ds"
	.even
pnmac902:
	.string	"defvar"
	.even
zprevdef:
	.long	0
pnmac903:
	.string	"previous-def"
	.even
pnmac904:
	.string	"revert"
	.even
pnmac905:
	.string	"getdef"
	.even
pnmac906:
	.string	"makedef"
	.even
pnmac907:
	.string	"if"
	.even
pnmac908:
	.string	"ifn"
	.even
pnmac909:
	.string	"when"
	.even
pnmac910:
	.string	"unless"
	.even
pnmac911:
	.string	"cond"
	.even
pnmac912:
	.string	"or"
	.even
pnmac913:
	.string	"and"
	.even
pnmac914:
	.string	"while"
	.even
pnmac915:
	.string	"until"
	.even
pnmac916:
	.string	"loop"
	.even
pnmac917:
	.string	"repeat"
	.even
pnmac918:
	.string	"selectq"
	.even
pnmac919:
	.string	"map"
	.even
pnmac920:
	.string	"mapl"
	.even
pnmac921:
	.string	"mapc"
	.even
pnmac922:
	.string	"maplist"
	.even
pnmac923:
	.string	"mapcar"
	.even
pnmac924:
	.string	"mapcon"
	.even
pnmac925:
	.string	"mapcan"
	.even
pnmac926:
	.string	"every"
	.even
pnmac927:
	.string	"any"
	.even
pnmac928:
	.string	"mapvector"
	.even
pnmac929:
	.string	"mapoblist"
	.even
pnmac930:
	.string	"mapcoblist"
	.even
pnmac931:
	.string	"maploblist"
	.even
pnmac932:
	.string	"quote"
	.even
pnmac933:
	.string	"lambda"
	.even
pnmac934:
	.string	"flambda"
	.even
pnmac935:
	.string	"mlambda"
	.even
pnmac936:
	.string	"identity"
	.even
pnmac937:
	.string	"comment"
	.even
pnmac938:
	.string	"progn"
	.even
pnmac939:
	.string	"eprogn"
	.even
pnmac940:
	.string	"prog1"
	.even
pnmac941:
	.string	"exportable-definition"
	.even
pnmac942:
	.string	"prog2"
	.even
zllde:
	.long	0
zlldf:
	.long	0
zlldm:
	.long	0
zdmd:
	.long	0
zllds:
	.long	0
zdefvar:
	.long	0
zrevert:
	.long	0
zgetdef:
	.long	0
zmakedef:
	.long	0
zllif:
	.long	0
zllifn:
	.long	0
zwhen:
	.long	0
zunless:
	.long	0
zcond:
	.long	0
zllor:
	.long	0
zlland:
	.long	0
zwhile000:
	.long	0
zuntil:
	.long	0
zloop000:
	.long	0
zfrepeat:
	.long	0
zselectq:
	.long	0
zmap:
	.long	0
zmapc:
	.long	0
zmaplist:
	.long	0
zmapcar:
	.long	0
zmapcon:
	.long	0
zmapcan:
	.long	0
zfevery:
	.long	0
zfany:
	.long	0
zmapvect:
	.long	0
zmapcoblist:
	.long	0
zmaploblist:
	.long	0
zmapoblist:
	.long	0
zquote:
	.long	0
zlambda:
	.long	0
zflambda:
	.long	0
zmlambda:
	.long	0
zcomment000:
	.long	0
zllident:
	.long	0
	.globl	itstate
	.globl	itcount
zeprogn:
	.long	0
zprogn:
	.long	0
zexdef:
	.long	0
zprog1:
	.long	0
zprog2:
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
	.globl	errsym
	.globl	errnia
	.globl	errnla
	.globl	errnva
	.globl	errwna
	.globl	errvec
	.globl	errbal
	.globl	erroob
	.globl	errfs
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	evalcar
	.globl	evala1
	.globl	funcall
	.globl	ffuncall
	.globl	evprogn
	.globl	inisymb
	.globl	inicst
	.globl	addprop
	.globl	getprop
	.globl	putprop
	.globl	remprop
	.globl	member
	.globl	nreverse
	.globl	nreconc
	.globl	equal
	.globl	makevect
	.globl	loc
	.globl	ini_ctl
	.globl	llde
	.globl	zquote
	.globl	zlambda
	.globl	zflambda
	.globl	zmlambda
	.globl	zprogn
	.globl	tabtypfn
	.globl	tabcodfn
	.globl	ithard

	# FENTRY ini_ctl
	.align	4
ini_ctl:
	movl	$16,%eax
	movl	$pnmac894,%ebx
	movl	$zlff,%ecx
	calll	inicst
	movl	zllsystem,%ebp
	movl	%ebp,12(%eax)
	movl	%esi,(%eax)
	movl	$13,%eax
	movl	%esi,%ebx
	calll	makevect
	movl	%eax,tabtypfn
	movl	tabtypfn,%ebp
	movl	(%ebp),%ebp
	pushl	zlsubr0
	popl	12(%ebp)
	movl	tabtypfn,%ebp
	movl	(%ebp),%ebp
	pushl	zlsubr1
	popl	16(%ebp)
	movl	tabtypfn,%ebp
	movl	(%ebp),%ebp
	pushl	zlsubr2
	popl	20(%ebp)
	movl	tabtypfn,%ebp
	movl	(%ebp),%ebp
	pushl	zlsubr3
	popl	24(%ebp)
	movl	tabtypfn,%ebp
	movl	(%ebp),%ebp
	pushl	znlsubr
	popl	28(%ebp)
	movl	tabtypfn,%ebp
	movl	(%ebp),%ebp
	pushl	zflsubr
	popl	32(%ebp)
	movl	tabtypfn,%ebp
	movl	(%ebp),%ebp
	pushl	zllexpr
	popl	36(%ebp)
	movl	tabtypfn,%ebp
	movl	(%ebp),%ebp
	pushl	zllfexpr
	popl	40(%ebp)
	movl	tabtypfn,%ebp
	movl	(%ebp),%ebp
	pushl	zllmacro
	popl	44(%ebp)
	movl	tabtypfn,%ebp
	movl	(%ebp),%ebp
	pushl	zlldmacro
	popl	48(%ebp)
	movl	tabtypfn,%ebp
	movl	(%ebp),%ebp
	pushl	zllmsubr
	popl	52(%ebp)
	movl	tabtypfn,%ebp
	movl	(%ebp),%ebp
	pushl	zlldmsubr
	popl	56(%ebp)
	movl	$13,%eax
	movl	%esi,%ebx
	calll	makevect
	movl	%eax,tabcodfn
	movl	tabcodfn,%ebp
	movl	(%ebp),%ebp
	movl	$1,12(%ebp)
	movl	tabcodfn,%ebp
	movl	(%ebp),%ebp
	movl	$2,16(%ebp)
	movl	tabcodfn,%ebp
	movl	(%ebp),%ebp
	movl	$3,20(%ebp)
	movl	tabcodfn,%ebp
	movl	(%ebp),%ebp
	movl	$4,24(%ebp)
	movl	tabcodfn,%ebp
	movl	(%ebp),%ebp
	movl	$5,28(%ebp)
	movl	tabcodfn,%ebp
	movl	(%ebp),%ebp
	movl	$6,32(%ebp)
	movl	tabcodfn,%ebp
	movl	(%ebp),%ebp
	movl	$7,36(%ebp)
	movl	tabcodfn,%ebp
	movl	(%ebp),%ebp
	movl	$8,40(%ebp)
	movl	tabcodfn,%ebp
	movl	(%ebp),%ebp
	movl	$9,44(%ebp)
	movl	tabcodfn,%ebp
	movl	(%ebp),%ebp
	movl	$10,48(%ebp)
	movl	tabcodfn,%ebp
	movl	(%ebp),%ebp
	movl	$11,52(%ebp)
	movl	tabcodfn,%ebp
	movl	(%ebp),%ebp
	movl	$12,56(%ebp)
	movl	$5,%eax
	movl	$pnmac895,%ebx
	movl	$llde,%ecx
	movl	$zllde,%edx
	pushl	$6
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac896,%ebx
	movl	$llde,%ecx
	movl	$zllde,%edx
	pushl	$6
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac897,%ebx
	movl	$lldf,%ecx
	movl	$zlldf,%edx
	pushl	$6
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac898,%ebx
	movl	$lldm,%ecx
	movl	$zlldm,%edx
	pushl	$6
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac899,%ebx
	movl	$dmd,%ecx
	movl	$zdmd,%edx
	pushl	$6
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac900,%ebx
	movl	$dmd,%ecx
	movl	$zdmd,%edx
	pushl	$6
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac901,%ebx
	movl	$llds,%ecx
	movl	$zllds,%edx
	pushl	$6
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac902,%ebx
	movl	$defvar,%ecx
	movl	$zdefvar,%edx
	pushl	$6
	calll	inisymb
	movl	$12,%eax
	movl	$pnmac903,%ebx
	movl	$zprevdef,%ecx
	calll	inicst
	movl	zllsystem,%ebp
	movl	%ebp,12(%eax)
	movl	$6,%eax
	movl	$pnmac904,%ebx
	movl	$revert,%ecx
	movl	$zrevert,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac905,%ebx
	movl	$getdef,%ecx
	movl	$zgetdef,%edx
	pushl	$2
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac906,%ebx
	movl	$makedef,%ecx
	movl	$zmakedef,%edx
	pushl	$4
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac907,%ebx
	movl	$llif,%ecx
	movl	$zllif,%edx
	pushl	$6
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac908,%ebx
	movl	$llifn,%ecx
	movl	$zllifn,%edx
	pushl	$6
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac909,%ebx
	movl	$when,%ecx
	movl	$zwhen,%edx
	pushl	$6
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac910,%ebx
	movl	$unless,%ecx
	movl	$zunless,%edx
	pushl	$6
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac911,%ebx
	movl	$cond,%ecx
	movl	$zcond,%edx
	pushl	$6
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac912,%ebx
	movl	$llor,%ecx
	movl	$zllor,%edx
	pushl	$6
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac913,%ebx
	movl	$lland,%ecx
	movl	$zlland,%edx
	pushl	$6
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac914,%ebx
	movl	$while000,%ecx
	movl	$zwhile000,%edx
	pushl	$6
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac915,%ebx
	movl	$until,%ecx
	movl	$zuntil,%edx
	pushl	$6
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac916,%ebx
	movl	$loop000,%ecx
	movl	$zloop000,%edx
	pushl	$6
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac917,%ebx
	movl	$frepeat,%ecx
	movl	$zfrepeat,%edx
	pushl	$6
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac918,%ebx
	movl	$selectq,%ecx
	movl	$zselectq,%edx
	pushl	$6
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac919,%ebx
	movl	$map,%ecx
	movl	$zmap,%edx
	pushl	$5
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac920,%ebx
	movl	$map,%ecx
	movl	$zmap,%edx
	pushl	$5
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac921,%ebx
	movl	$mapc,%ecx
	movl	$zmapc,%edx
	pushl	$5
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac922,%ebx
	movl	$maplist,%ecx
	movl	$zmaplist,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac923,%ebx
	movl	$mapcar,%ecx
	movl	$zmapcar,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac924,%ebx
	movl	$mapcon,%ecx
	movl	$zmapcon,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac925,%ebx
	movl	$mapcan,%ecx
	movl	$zmapcan,%edx
	pushl	$5
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac926,%ebx
	movl	$fevery,%ecx
	movl	$zfevery,%edx
	pushl	$5
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac927,%ebx
	movl	$fany,%ecx
	movl	$zfany,%edx
	pushl	$5
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac928,%ebx
	movl	$mapvect,%ecx
	movl	$zmapvect,%edx
	pushl	$3
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac929,%ebx
	movl	$mapoblist,%ecx
	movl	$zmapoblist,%edx
	pushl	$2
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac930,%ebx
	movl	$mapcoblist,%ecx
	movl	$zmapcoblist,%edx
	pushl	$2
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac931,%ebx
	movl	$maploblist,%ecx
	movl	$zmaploblist,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac932,%ebx
	movl	$quote,%ecx
	movl	$zquote,%edx
	pushl	$6
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac933,%ebx
	movl	$lambda,%ecx
	movl	$zlambda,%edx
	pushl	$6
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac934,%ebx
	movl	$flambda,%ecx
	movl	$zflambda,%edx
	pushl	$6
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac935,%ebx
	movl	$mlambda,%ecx
	movl	$zmlambda,%edx
	pushl	$6
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac936,%ebx
	movl	$llident,%ecx
	movl	$zllident,%edx
	pushl	$2
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac937,%ebx
	movl	$comment000,%ecx
	movl	$zcomment000,%edx
	pushl	$6
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac938,%ebx
	movl	$progn,%ecx
	movl	$zprogn,%edx
	pushl	$6
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac939,%ebx
	movl	$eprogn,%ecx
	movl	$zeprogn,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac940,%ebx
	movl	$prog1,%ecx
	movl	$zprog1,%edx
	pushl	$6
	calll	inisymb
	movl	$21,%eax
	movl	$pnmac941,%ebx
	movl	$exdef,%ecx
	movl	$zexdef,%edx
	pushl	$6
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac942,%ebx
	movl	$prog2,%ecx
	movl	$zprog2,%edx
	pushl	$6
	calll	inisymb
	movl	zquote,%eax
	movl	%eax,(%eax)
	movl	zlambda,%eax
	movl	%eax,(%eax)
	movl	zflambda,%eax
	movl	%eax,(%eax)
	movl	zmlambda,%eax
	movl	%eax,(%eax)
cnfalse:
	movl	%esi,%eax
cnpopj:
	ret	
cnttrue:
	movl	zt,%eax
	ret	
def:
	movl	4(%eax),%ebx
	movl	(%eax),%eax
	movw	%cx,24(%eax)
	movl	%ebx,8(%eax)
	movl	zlff,%ecx
	movl	(%ecx),%ebx
	cmpl	%esi,%ebx
	je	cnpopj
	pushl	%eax
	calll	putprop
	popl	%eax
	ret	

	# FENTRY llde
	.align	4
llde:
	movl	$7,%ecx
	jmp	def

	# FENTRY lldf
	.align	4
lldf:
	movl	$8,%ecx
	jmp	def

	# FENTRY lldm
	.align	4
lldm:
	movl	$9,%ecx
	jmp	def

	# FENTRY dmd
	.align	4
dmd:
	movl	$10,%ecx
	jmp	def

	# FENTRY llds
	.align	4
llds:
	movl	%esi,%eax
	ret	

	# FENTRY defvar
	.align	4
defvar:
	cmpl	%edi,%eax
	jb	defvar9
	pushl	(%eax)
	movl	4(%eax),%eax
	calll	evalcar
	popl	%ebx
	cmpl	%ebx,bvar
	ja	defverr
	cmpl	%edi,%ebx
	jae	defverr
	movl	%eax,(%ebx)
	movl	%ebx,%eax
	movl	zlff,%ecx
	movl	(%ecx),%ebx
	cmpl	%esi,%ebx
	je	defvar9
	pushl	%eax
	calll	putprop
	popl	%eax
defvar9:
	ret	
defverr:
	movl	%ebx,%eax
	movl	zdefvar,%ebx
	jmp	errnva

	# FENTRY revert
	.align	4
revert:
	movl	zprevdef,%ebx
	calll	getprop
	cmpl	%esi,%eax
	je	cnpopj
	jmp	evala1

	# FENTRY getdef
	.align	4
getdef:
	cmpl	%esi,%eax
	jb	gtdefe
	cmpl	%edi,%eax
	jae	gtdefe
	movzwl	24(%eax),%ebx
	movl	8(%eax),%ecx
	jmp	defsuit
gtdefe:
	movl	zgetdef,%ebx
	jmp	errsym

	# FENTRY makedef
	.align	4
makedef:
	cmpl	%ebx,bfloat
	jbe	uncod0
	orw	%bx,%bx
	jl	uncodtr
	cmpw	$12,%bx
	jle	defsuit
uncodtr:
	movl	zmakedef,%ebx
	jmp	erroob
uncod0:
	pushl	%ecx
	movl	tabtypfn,%ebp
	movl	(%ebp),%ebp
	movl	4(%ebp),%edx
	jmp	uncod2
uncod1:
	movl	tabtypfn,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%edx,4),%ecx
	cmpl	%ebx,%ecx
	je	uncod3
uncod2:
	decw	%dx
	jg	uncod1
uncod3:
	movl	%edx,%ebx
	popl	%ecx
defsuit:
	jmp	*%cs:tbmakdef(,%ebx,4)
tbmakdef:
	.long	mkdef0
	.long	mkdef1
	.long	mkdef1
	.long	mkdef1
	.long	mkdef1
	.long	mkdef1
	.long	mkdef1
	.long	mkdef2
	.long	mkdef3
	.long	mkdef4
	.long	mkdef5
	.long	mkdef1
	.long	mkdef1
mkdef0:
	movl	%esi,%eax
	ret	
mkdef1:
	cmpl	%ecx,bfloat
	ja	lmac943
	cmpl	%ecx,econs
	ja	mkdef10
lmac943:
	pushl	%eax
	pushl	%ebx
	movl	%ecx,%eax
	calll	loc
	movl	%eax,%ecx
	popl	%ebx
	popl	%eax
mkdef10:
	cmpl	%edi,fcons
	jb	l__1
l1__1:
	movl	fcons,%ebp
	movl	%ecx,(%ebp)
	movl	%esi,%ecx
	xchgl	%ecx,4(%ebp)
	xchgl	%ecx,fcons
	movl	tabtypfn,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%ebx,4),%ebx
	cmpl	%edi,fcons
	jb	l__2
l1__2:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%ecx,4(%edi)
	xchgl	%edi,%ecx
	xchgl	%edi,fcons
	movl	zllds,%edx
	jmp	mkdef8
mkdef2:
	movl	zllde,%edx
	jmp	mkdef8
mkdef3:
	movl	zlldf,%edx
	jmp	mkdef8
mkdef4:
	movl	zlldm,%edx
	jmp	mkdef8
mkdef5:
	movl	zdmd,%edx
mkdef8:
	cmpl	%edi,fcons
	jb	l__3
l1__3:
	xchgl	%edi,fcons
	movl	%eax,(%edi)
	xchgl	%ecx,4(%edi)
	xchgl	%edi,%ecx
	xchgl	%edi,fcons
	cmpl	%edi,fcons
	jb	l__4
l1__4:
	xchgl	%edi,fcons
	movl	%edx,(%edi)
	xchgl	%ecx,4(%edi)
	xchgl	%edi,%ecx
	xchgl	%edi,fcons
	movl	%ecx,%eax
	ret	

	# FENTRY llif
	.align	4
llif:
	cmpl	%edi,%eax
	jb	ifer2
	pushl	4(%eax)
	calll	evalcar
	popl	%ebx
	cmpl	%edi,%ebx
	jb	ifer1
	movl	4(%ebx),%ecx
	movl	zllif,%ebp
	movl	%ebp,errname
	cmpl	%esi,%eax
	je	progna3
	movl	(%ebx),%eax
	jmp	evala1
ifer1:
	movl	%ebx,%eax
ifer2:
	cmpl	%esi,%eax
	je	cnpopj
	movl	zllif,%ebx
	jmp	errbal

	# FENTRY llifn
	.align	4
llifn:
	cmpl	%edi,%eax
	jb	ifner2
	pushl	4(%eax)
	calll	evalcar
	popl	%ebx
	cmpl	%edi,%ebx
	jb	ifner1
	movl	4(%ebx),%ecx
	movl	zllifn,%ebp
	movl	%ebp,errname
	cmpl	%esi,%eax
	jne	progna3
	movl	(%ebx),%eax
	jmp	evala1
ifner1:
	movl	%ebx,%eax
ifner2:
	cmpl	%esi,%eax
	je	cnpopj
	movl	zllifn,%ebx
	jmp	errbal

	# FENTRY when
	.align	4
when:
	cmpl	%edi,%eax
	jb	whener1
	pushl	4(%eax)
	calll	evalcar
	popl	%ecx
	movl	zwhen,%ebp
	movl	%ebp,errname
	cmpl	%esi,%eax
	jne	progna3
whenr:
	ret	
whener1:
	cmpl	%esi,%eax
	je	whenr
	movl	zwhen,%ebx
	jmp	errbal

	# FENTRY unless
	.align	4
unless:
	cmpl	%edi,%eax
	jb	unler1
	pushl	4(%eax)
	calll	evalcar
	popl	%ecx
	movl	zunless,%ebp
	movl	%ebp,errname
	cmpl	%esi,%eax
	je	progna3
	movl	%esi,%eax
unlesr:
	ret	
unler1:
	cmpl	%esi,%eax
	je	unlesr
	movl	zunless,%ebx
	jmp	errbal

	# FENTRY cond
	.align	4
cond:
	movl	%eax,%ebx
cond1:
	cmpl	%edi,%ebx
	jb	conder3
	pushl	4(%ebx)
	movl	(%ebx),%eax
	cmpl	%edi,%eax
	jb	conder1
	pushl	4(%eax)
	calll	evalcar
	popl	%ecx
	popl	%ebx
	cmpl	%esi,%eax
	je	cond1
	movl	zcond,%ebp
	movl	%ebp,errname
	cmpl	%edi,%ecx
	jae	progna3
	cmpl	%esi,%ecx
	je	condret
	movl	%ecx,%eax
	jmp	conder4
condret:
	ret	
conder1:
	cmpl	%esi,%eax
	jne	conder2
	popl	%ebx
	jmp	cond1
conder2:
	movl	zcond,%ebx
	jmp	errnla
conder3:
	movl	%ebx,%eax
	cmpl	%esi,%eax
	jne	conder4
	ret	
conder4:
	movl	zcond,%ebx
	jmp	errbal

	# FENTRY llor
	.align	4
llor:
	cmpl	%edi,%eax
	jae	or2
	cmpl	%esi,%eax
	je	cnpopj
	jmp	orer2
or1:
	pushl	%ebx
	calll	evalcar
	cmpl	%esi,%eax
	jne	pret
	popl	%eax
or2:
	movl	4(%eax),%ebx
	cmpl	%edi,%ebx
	jae	or1
	cmpl	%esi,%ebx
	jne	orer1
	jmp	evalcar
orer1:
	movl	%ebx,%eax
orer2:
	movl	zllor,%ebx
	jmp	errbal

	# FENTRY lland
	.align	4
lland:
	cmpl	%edi,%eax
	jae	and2
	cmpl	%esi,%eax
	je	cnttrue
	jmp	ander2
and1:
	pushl	%ebx
	calll	evalcar
	cmpl	%esi,%eax
	je	pret
	popl	%eax
and2:
	movl	4(%eax),%ebx
	cmpl	%edi,%ebx
	jae	and1
	cmpl	%esi,%ebx
	jne	ander1
	jmp	evalcar
pret:
	popl	%ebx
	ret	
ander1:
	movl	%ebx,%eax
ander2:
	movl	zlland,%ebx
	jmp	errbal

	# FENTRY while000
	.align	4
while000:
	cmpl	%edi,%eax
	jb	whiler
	pushl	%eax
	jmp	while2
while1:
	movl	(%esp),%eax
	movl	4(%eax),%eax
	movl	zwhile000,%ebp
	movl	%ebp,errname
	calll	iprogn
while2:
	movl	(%esp),%eax
	calll	evalcar
	cmpl	%esi,%eax
	jne	while1
	popl	%ebx
whileret:
	ret	
whiler:
	cmpl	%esi,%eax
	je	whileret
	movl	zwhile000,%ebx
	jmp	errbal

	# FENTRY until
	.align	4
until:
	cmpl	%edi,%eax
	jb	untiler
	pushl	%eax
	jmp	until2
until1:
	movl	(%esp),%eax
	movl	4(%eax),%eax
	movl	zuntil,%ebp
	movl	%ebp,errname
	calll	iprogn
until2:
	movl	(%esp),%eax
	calll	evalcar
	cmpl	%esi,%eax
	je	until1
	popl	%ebx
untilret:
	ret	
untiler:
	cmpl	%esi,%eax
	je	untilret
	movl	zuntil,%ebx
	jmp	errbal

	# FENTRY loop000
	.align	4
loop000:
	pushl	%eax
loop1:
	movl	(%esp),%eax
	movl	zloop000,%ebp
	movl	%ebp,errname
	calll	iprogn
	jmp	loop1

	# FENTRY frepeat
	.align	4
frepeat:
	cmpl	%edi,%eax
	jb	freper
	pushl	4(%eax)
	calll	evalcar
	movl	%eax,%ebx
	popl	%eax
	cmpl	%ebx,bfloat
	ja	repeat2
	movl	%ebx,%eax
	movl	zfrepeat,%ebx
	jmp	errnia
repeat1:
	pushl	%eax
	pushl	%ebx
	movl	zfrepeat,%ebp
	movl	%ebp,errname
	calll	iprogn
	popl	%ebx
	popl	%eax
repeat2:
	decw	%bx
	jge	repeat1
	jmp	cnttrue
freper:
	cmpl	%esi,%eax
	je	cnttrue
	movl	zfrepeat,%ebx
	jmp	errbal

	# FENTRY selectq
	.align	4
selectq:
	cmpl	%edi,%eax
	jb	selecer1
	pushl	4(%eax)
	calll	evalcar
	popl	%ecx
	jmp	selec5
selec1:
	movl	(%ecx),%ebx
	movl	4(%ecx),%ecx
	cmpl	%edi,%ebx
	jb	selecer2
	movl	4(%ebx),%edx
	movl	(%ebx),%ebx
	cmpl	zt,%ebx
	je	selec7
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	cmpl	%edi,%ebx
	jb	selec2
	calll	member
	jmp	selec3
selec2:
	calll	equal
selec3:
	popl	%edx
	popl	%ecx
	popl	%ebx
	cmpl	%esi,%eax
	jne	selec6
	popl	%eax
selec5:
	cmpl	%edi,%ecx
	jae	selec1
	movl	%ecx,%eax
selecer1:
	cmpl	%esi,%eax
	je	cnpopj
	movl	zselectq,%ebx
	jmp	errbal
selecer2:
	cmpl	%esi,%ebx
	je	selec5
	movl	%ebx,%eax
	movl	zselectq,%ebx
	jmp	errnla
selec6:
	popl	%eax
selec7:
	movl	%edx,%eax
	movl	zselectq,%ebp
	movl	%ebp,errname
	jmp	iprogn

	# FENTRY map
	.align	4
map:
	movl	zmap,%ebx
	pushl	$0
	pushl	$map1
	movl	%esi,%ecx
allmap:
	pushl	%edx
	pushl	%ecx
	cmpw	$1,%dx
	jle	maper
map1:
	movl	12(%esp),%edx
	movl	8(%esp),%eax
	movl	4(%esp),%ebx
	pushl	%eax
	movl	%ebx,%ecx
	addw	$4,%cx
	movl	(%esp,%ecx,4),%eax
	jmp	map3
map2:
	movl	(%esp,%ecx,4),%eax
	cmpl	%edi,%eax
	jb	map4
	movl	4(%eax),%ebp
	movl	%ebp,(%esp,%ecx,4)
	orw	%dx,%dx
	je	map3
	movl	(%eax),%eax
map3:
	pushl	%eax
	decw	%bx
	jg	map2
	subw	$4,%cx
	movl	%ecx,%edx
	jmp	funcall
map4:
	subw	%bx,%cx
	subw	$3,%cx
	leal	(%esp,%ecx,4),%esp
	popl	%eax
	popl	%ecx
	addw	$2,%cx
	leal	(%esp,%ecx,4),%esp
	cmpw	$2,%dx
	je	map5
	jmp	nreverse
map5:
	ret	
map6:
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__5
l1__5:
	xchgl	%edi,fcons
	movl	%eax,(%edi)
	xchgl	%ebx,4(%edi)
	xchgl	%edi,%ebx
	xchgl	%edi,fcons
	pushl	%ebx
	jmp	map1
map7:
	cmpl	%edi,%eax
	jb	map1
	popl	%ebx
	calll	nreconc
	pushl	%eax
	jmp	map1
map8:
	movl	%eax,(%esp)
	cmpl	%esi,%eax
	jne	map1
	jmp	map10
map9:
	movl	%eax,(%esp)
	cmpl	%esi,%eax
	je	map1
map10:
	addl	$4,%esp
	movl	(%esp),%edx
	addw	$3,%dx
	leal	(%esp,%edx,4),%esp
	ret	
maper:
	movl	%edx,%eax
	jmp	errwna
allmapun:
	popl	%edx
	popl	%eax
	popl	%ebx
	xchgl	%eax,(%esp)
	pushl	%eax
	pushl	%ebx
	pushl	%edx
	pushl	%ecx
mapun1:
	movl	8(%esp),%ebx
	cmpl	%edi,%ebx
	jb	mapun4
	movl	4(%ebx),%ebp
	movl	%ebp,8(%esp)
	movl	4(%esp),%ecx
	movl	12(%esp),%eax
	pushl	%ecx
	pushl	(%ebx)
	movl	$1,%edx
	jmp	ffuncall
mapun4:
	popl	%eax
	addl	$12,%esp
	popl	%edx
	cmpw	$2,%dx
	je	mapun5
	jmp	nreverse
mapun5:
	ret	
mapun6:
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__6
l1__6:
	xchgl	%edi,fcons
	movl	%eax,(%edi)
	xchgl	%ebx,4(%edi)
	xchgl	%edi,%ebx
	xchgl	%edi,fcons
	pushl	%ebx
	jmp	mapun1
mapun7:
	cmpl	%edi,%eax
	jb	mapun1
	popl	%ebx
	calll	nreconc
	pushl	%eax
	jmp	mapun1
mapun8:
	movl	%eax,(%esp)
	cmpl	%esi,%eax
	jne	mapun1
	addl	$20,%esp
	ret	
mapun9:
	cmpl	%esi,%eax
	je	mapun1
	addl	$20,%esp
	ret	

	# FENTRY mapc
	.align	4
mapc:
	movl	%esi,%ecx
	pushl	$1
	cmpw	$2,%dx
	jne	mapcn
	pushl	$mapun1
	jmp	allmapun
mapcn:
	movl	zmapc,%ebx
	pushl	$map1
	jmp	allmap

	# FENTRY maplist
	.align	4
maplist:
	movl	%esi,%ecx
	movl	zmaplist,%ebx
	pushl	$0
	pushl	$map6
	jmp	allmap

	# FENTRY mapcar
	.align	4
mapcar:
	movl	%esi,%ecx
	pushl	$1
	cmpw	$2,%dx
	jne	mapcarn
	pushl	$mapun6
	jmp	allmapun
mapcarn:
	movl	zmapcar,%ebx
	pushl	$map6
	jmp	allmap

	# FENTRY mapcon
	.align	4
mapcon:
	movl	zmapcon,%ebx
	movl	%esi,%ecx
	pushl	$0
	pushl	$map7
	jmp	allmap

	# FENTRY mapcan
	.align	4
mapcan:
	movl	%esi,%ecx
	pushl	$1
	cmpw	$2,%dx
	jne	mapcann
	pushl	$mapun7
	jmp	allmapun
mapcann:
	movl	zmapcan,%ebx
	pushl	$map7
	jmp	allmap

	# FENTRY fevery
	.align	4
fevery:
	movl	zt,%ecx
	pushl	$2
	cmpw	$2,%dx
	jne	feveryn
	pushl	$mapun8
	jmp	allmapun
feveryn:
	movl	zfevery,%ebx
	pushl	$map8
	jmp	allmap

	# FENTRY fany
	.align	4
fany:
	movl	%esi,%ecx
	pushl	$2
	cmpw	$2,%dx
	jne	fanyn
	pushl	$mapun9
	jmp	allmapun
fanyn:
	movl	zfany,%ebx
	pushl	$map9
	jmp	allmap

	# FENTRY mapvect
	.align	4
mapvect:
	cmpl	%ebx,bvect
	ja	mapvect9
	cmpl	%ebx,bstrg
	jbe	mapvect9
	xorl	%ecx,%ecx
	movl	(%ebx),%ebp
	movl	4(%ebp),%edx
	jmp	mapvect8
mapvect1:
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	movl	(%ebx),%ebp
	movl	8(%ebp,%ecx,4),%ecx
	pushl	$mapvect2
	pushl	%ecx
	movl	$1,%edx
	jmp	ffuncall
mapvect2:
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	incw	%cx
mapvect8:
	decw	%dx
	jge	mapvect1
	movl	%esi,%eax
	ret	
mapvect9:
	movl	%ebx,%eax
	movl	zmapvect,%ebx
	jmp	errvec

	# FENTRY mapcoblist
	.align	4
mapcoblist:
	pushl	$mapcobco
allmapob:
	movl	%esi,%edx
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	4(%ebp),%ecx
	decw	%cx
mapcob0:
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%ecx,4),%ecx
	jmp	mapcob7
mapcob1:
	movl	%ecx,%ebx
	movl	28(%ebx),%ebp
	cmpl	%ebp,bstrg
	ja	lmac944
	cmpl	%ebp,%esi
	ja	mapcob3
lmac944:
mapcob2:
	movl	28(%ebx),%ebx
mapcob3:
	cmpl	zundef,%ebx
	je	mapcob6
	pushl	%eax
	pushl	%ecx
	pushl	%ebx
	pushl	%edx
	movl	16(%esp),%edx
	pushl	%edx
	pushl	%ebx
	movl	$1,%edx
	jmp	ffuncall
mapcob5:
	popl	%edx
mapcob5a:
	popl	%ebx
mapcob5b:
	popl	%ecx
	popl	%eax
mapcob6:
	cmpl	%ebx,%ecx
	jne	mapcob2
	movl	20(%ecx),%ecx
mapcob7:
	cmpl	%esi,%ecx
	jb	lmac945
	cmpl	%edi,%ecx
	jb	mapcob1
lmac945:
mapcob8:
	decw	%cx
	jge	mapcob0
	popl	%eax
	movl	%edx,%eax
	jmp	nreverse
maplobco:
	cmpl	%esi,%eax
	je	mapcob5
	popl	%edx
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__7
l1__7:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%edx,4(%edi)
	xchgl	%edi,%edx
	xchgl	%edi,fcons
	jmp	mapcob5b
mapcobco:
	cmpl	%edi,%eax
	jb	mapcob5
	popl	%ebx
	calll	nreconc
	movl	%eax,%edx
	jmp	mapcob5a

	# FENTRY maploblist
	.align	4
maploblist:
	pushl	$maplobco
	jmp	allmapob

	# FENTRY mapoblist
	.align	4
mapoblist:
	pushl	$mapcob5
	jmp	allmapob

	# FENTRY quote
	.align	4
quote:
	movl	4(%eax),%ebx
	cmpl	%esi,%ebx
	jne	quoterr
	movl	(%eax),%eax
	ret	
quoterr:
	movl	$1,%eax
	movl	zquote,%ebx
	jmp	errwna

	# FENTRY lambda
	.align	4
lambda:
	cmpl	%edi,fcons
	jb	l__8
l1__8:
	xchgl	%edi,fcons
	movl	zlambda,%ebp
	movl	%ebp,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	ret	

	# FENTRY flambda
	.align	4
flambda:
	cmpl	%edi,fcons
	jb	l__9
l1__9:
	xchgl	%edi,fcons
	movl	zflambda,%ebp
	movl	%ebp,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	ret	

	# FENTRY mlambda
	.align	4
mlambda:
	cmpl	%edi,fcons
	jb	l__10
l1__10:
	xchgl	%edi,fcons
	movl	zmlambda,%ebp
	movl	%ebp,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	ret	

	# FENTRY comment000
	.align	4
comment000:
	movl	zcomment000,%eax
	ret	

	# FENTRY llident
	.align	4
llident:
	cmpw	$0,itcount
	je	l__11
	cmpw	$0,itstate
	je	l__11
	calll	ithard
l__11:
	cmpl	%esp,mstack
	ja	errfs
	ret	
progna3:
	movl	%ecx,%eax
	cmpw	$0,itcount
	je	l__12
	cmpw	$0,itstate
	je	l__12
	calll	ithard
l__12:
	cmpl	%edi,%eax
	jb	progna35
	movl	4(%eax),%ebx
	cmpl	%esi,%ebx
	je	progna36
progna35:
	jmp	evprogn
progna36:
	jmp	evalcar

	# FENTRY eprogn
	.align	4
eprogn:
	movl	zeprogn,%ebp
	movl	%ebp,errname
	cmpw	$0,itcount
	je	l__13
	cmpw	$0,itstate
	je	l__13
	calll	ithard
l__13:
	jmp	evprogn

	# FENTRY progn
	.align	4
progn:
	movl	zprogn,%ebp
	movl	%ebp,errname
iprogn:
	cmpw	$0,itcount
	je	l__14
	cmpw	$0,itstate
	je	l__14
	calll	ithard
l__14:
	jmp	evprogn

	# FENTRY exdef
	.align	4
exdef:
	jmp	prog1

	# FENTRY prog1
	.align	4
prog1:
	cmpl	%edi,%eax
	jb	prog1e
	pushl	4(%eax)
	calll	evalcar
	xchgl	%eax,(%esp)
	movl	zprog1,%ebp
	movl	%ebp,errname
	calll	iprogn
	popl	%eax
prog1r:
	ret	
prog1e:
	cmpl	%esi,%eax
	je	prog1r
	movl	zprog1,%ebx
	jmp	errbal

	# FENTRY prog2
	.align	4
prog2:
	cmpl	%edi,%eax
	jb	prog2e
	pushl	4(%eax)
	calll	evalcar
	popl	%eax
	cmpl	%edi,%eax
	jb	prog2e
	pushl	4(%eax)
	calll	evalcar
	xchgl	%eax,(%esp)
	movl	zprog2,%ebp
	movl	%ebp,errname
	calll	iprogn
	popl	%eax
prog2r:
	ret	
prog2e:
	cmpl	%esi,%eax
	je	prog2r
	movl	zprog2,%ebx
	jmp	errbal
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
