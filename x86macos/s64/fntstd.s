	.file	"fntstd.asm"
	.version	"02.01"
	.text	
	.align	4
	.data
	.align	4
	.globl	mstack
	.globl	fcons
	.globl	bvar
	.globl	hashtab
	.globl	zundef
	.globl	zt
	.globl	zvoid
	.globl	savea1
	.globl	savea2
	.globl	savea3
	.globl	savea4
	.globl	tabtypfn
	.globl	tabcodfn
	.globl	zquote
	.globl	zprogn
	.globl	zlambda
	.globl	zflambda
	.globl	zmlambda
pnmac977:
	.string	"true"
	.even
pnmac978:
	.string	"false"
	.even
pnmac979:
	.string	"not"
	.even
pnmac980:
	.string	"null"
	.even
pnmac981:
	.string	"atom"
	.even
pnmac982:
	.string	"atomp"
	.even
pnmac983:
	.string	"symbolp"
	.even
pnmac984:
	.string	"variablep"
	.even
pnmac985:
	.string	"constantp"
	.even
pnmac986:
	.string	"vectorp"
	.even
pnmac987:
	.string	"stringp"
	.even
pnmac988:
	.string	"listp"
	.even
pnmac989:
	.string	"nlistp"
	.even
pnmac990:
	.string	"consp"
	.even
pnmac991:
	.string	"boundp"
	.even
pnmac992:
	.string	"eq"
	.even
pnmac993:
	.string	"neq"
	.even
pnmac994:
	.string	"equal"
	.even
pnmac995:
	.string	"nequal"
	.even
pnmac996:
	.string	"memq"
	.even
pnmac997:
	.string	"member"
	.even
pnmac998:
	.string	"tailp"
	.even
pnmac999:
	.string	"last"
	.even
pnmac1000:
	.string	"nthcdr"
	.even
pnmac1001:
	.string	"nth"
	.even
pnmac1002:
	.string	"length"
	.even
pnmac1003:
	.string	"cons"
	.even
pnmac1004:
	.string	"xcons"
	.even
pnmac1005:
	.string	"ncons"
	.even
pnmac1006:
	.string	"mcons"
	.even
pnmac1007:
	.string	"list"
	.even
pnmac1008:
	.string	"evlis"
	.even
pnmac1009:
	.string	"kwote"
	.even
pnmac1010:
	.string	"makelist"
	.even
pnmac1011:
	.string	"reverse"
	.even
pnmac1012:
	.string	"append"
	.even
pnmac1013:
	.string	"append1"
	.even
pnmac1014:
	.string	"remq"
	.even
pnmac1015:
	.string	"remove"
	.even
pnmac1016:
	.string	"copy"
	.even
pnmac1017:
	.string	"copylist"
	.even
pnmac1018:
	.string	"firstn"
	.even
pnmac1019:
	.string	"lastn"
	.even
pnmac1020:
	.string	"subst"
	.even
pnmac1021:
	.string	"oblist"
	.even
pnmac1022:
	.string	"boblist"
	.even
pnmac1023:
	.string	"lhoblist"
	.even
pnmac1024:
	.string	"rplaca"
	.even
pnmac1025:
	.string	"rplacd"
	.even
pnmac1026:
	.string	"rplac"
	.even
pnmac1027:
	.string	"placdl"
	.even
pnmac1028:
	.string	"displace"
	.even
pnmac1029:
	.string	"setq"
	.even
pnmac1030:
	.string	"set"
	.even
pnmac1031:
	.string	"setqq"
	.even
pnmac1032:
	.string	"psetq"
	.even
pnmac1033:
	.string	"deset"
	.even
pnmac1034:
	.string	"desetq"
	.even
pnmac1035:
	.string	"cirlist"
	.even
pnmac1036:
	.string	"nreverse"
	.even
pnmac1037:
	.string	"nsubst"
	.even
pnmac1038:
	.string	"delq"
	.even
pnmac1039:
	.string	"delete"
	.even
pnmac1040:
	.string	"nreconc"
	.even
pnmac1041:
	.string	"nextl"
	.even
pnmac1042:
	.string	"newl"
	.even
pnmac1043:
	.string	"newr"
	.even
pnmac1044:
	.string	"nconc"
	.even
pnmac1045:
	.string	"nconc1"
	.even
pnmac1046:
	.string	"acons"
	.even
pnmac1047:
	.string	"pairlis"
	.even
pnmac1048:
	.string	"assq"
	.even
pnmac1049:
	.string	"assoc"
	.even
pnmac1050:
	.string	"cassq"
	.even
pnmac1051:
	.string	"cassoc"
	.even
pnmac1052:
	.string	"rassq"
	.even
pnmac1053:
	.string	"rassoc"
	.even
pnmac1054:
	.string	"sublis"
	.even
ztrue:
	.long	0
zfalse:
	.long	0
zllnull:
	.long	0
zllnot:
	.long	0
zatom:
	.long	0
zatomp:
	.long	0
zsymbolp:
	.long	0
zvariablep:
	.long	0
zconstantp:
	.long	0
zvectorp:
	.long	0
zstringp:
	.long	0
zlistp:
	.long	0
znlistp:
	.long	0
zconsp:
	.long	0
zboundp:
	.long	0
zlleq:
	.long	0
zneq:
	.long	0
znequal:
	.long	0
zequal:
	.long	0
	.globl	itstate
	.globl	itcount
zmemq:
	.long	0
zmember:
	.long	0
ztailp:
	.long	0
zlast:
	.long	0
znth:
	.long	0
znthcdr:
	.long	0
zlllength:
	.long	0
zllcons:
	.long	0
zfxcons:
	.long	0
zfncons:
	.long	0
zmcons:
	.long	0
zlist:
	.long	0
zevlis:
	.long	0
zkwote:
	.long	0
zmakelist:
	.long	0
zreverse:
	.long	0
zappnd1:
	.long	0
zappend:
	.long	0
zremq:
	.long	0
zllremove:
	.long	0
zcopylist:
	.long	0
zcopy:
	.long	0
	.globl	btbin
zfirstn:
	.long	0
zlastn:
	.long	0
zsubst:
	.long	0
zoblist:
	.long	0
zboblist:
	.long	0
zlhoblist:
	.long	0
zrplaca:
	.long	0
zrplacd:
	.long	0
zrplac:
	.long	0
zdisplace:
	.long	0
zplacdl:
	.long	0
zsetq:
	.long	0
zfset:
	.long	0
zsetqq:
	.long	0
zpsetq:
	.long	0
zdeset:
	.long	0
zdesetq:
	.long	0
zcirlist:
	.long	0
znreconc:
	.long	0
znsubst:
	.long	0
zdelq:
	.long	0
zlldelete:
	.long	0
znreverse:
	.long	0
znextl:
	.long	0
znewl:
	.long	0
znewr:
	.long	0
znconc1:
	.long	0
znconc:
	.long	0
zacons:
	.long	0
zpairlis:
	.long	0
zassq:
	.long	0
zassoc:
	.long	0
zcassq:
	.long	0
zcassoc:
	.long	0
zrassq:
	.long	0
zrassoc:
	.long	0
zsublis:
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
	.globl	errsym
	.globl	errnia
	.globl	errnla
	.globl	errnva
	.globl	errwna
	.globl	errudf
	.globl	errudv
	.globl	erroob
	.globl	errilb
	.globl	errbpa
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	inisymb
	.globl	inicst
	.globl	istdsym
	.globl	evalcar
	.globl	evala1
	.globl	apply
	.globl	gaeqn
	.globl	stringa2
	.globl	strgallc
	.globl	makevect
	.globl	eqstrgi
	.globl	eqvectri
	.globl	ffindex
	.globl	loc
	.globl	vag
	.globl	ini_std
	.globl	member
	.globl	memq
	.globl	list
	.globl	equal
	.globl	nreverse
	.globl	deset
	.globl	lllength
	.globl	displace
	.globl	evlis
	.globl	nreconc
	.globl	kwote
	.globl	copy
	.globl	zllcons
	.globl	zfncons
	.globl	zmcons
	.globl	zllnull
	.globl	zlist
	.globl	znconc
	.globl	zappend
	.globl	ithard

	# FENTRY ini_std
	.align	4
ini_std:
	movl	$4,%eax
	movl	$pnmac977,%ebx
	movl	$true,%ecx
	movl	$ztrue,%edx
	pushl	$5
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac978,%ebx
	movl	$false,%ecx
	movl	$zfalse,%edx
	pushl	$5
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac979,%ebx
	movl	$llnot,%ecx
	movl	$zllnot,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac980,%ebx
	movl	$llnull,%ecx
	movl	$zllnull,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac981,%ebx
	movl	$atom,%ecx
	movl	$zatom,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac982,%ebx
	movl	$atomp,%ecx
	movl	$zatomp,%edx
	pushl	$2
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac983,%ebx
	movl	$symbolp,%ecx
	movl	$zsymbolp,%edx
	pushl	$2
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac984,%ebx
	movl	$variablep,%ecx
	movl	$zvariablep,%edx
	pushl	$2
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac985,%ebx
	movl	$constantp,%ecx
	movl	$zconstantp,%edx
	pushl	$2
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac986,%ebx
	movl	$vectorp,%ecx
	movl	$zvectorp,%edx
	pushl	$2
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac987,%ebx
	movl	$stringp,%ecx
	movl	$zstringp,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac988,%ebx
	movl	$listp,%ecx
	movl	$zlistp,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac989,%ebx
	movl	$nlistp,%ecx
	movl	$znlistp,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac990,%ebx
	movl	$consp,%ecx
	movl	$zconsp,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac991,%ebx
	movl	$boundp,%ecx
	movl	$zboundp,%edx
	pushl	$2
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac992,%ebx
	movl	$lleq,%ecx
	movl	$zlleq,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac993,%ebx
	movl	$neq,%ecx
	movl	$zneq,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac994,%ebx
	movl	$equal,%ecx
	movl	$zequal,%edx
	pushl	$3
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac995,%ebx
	movl	$nequal,%ecx
	movl	$znequal,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac996,%ebx
	movl	$memq,%ecx
	movl	$zmemq,%edx
	pushl	$3
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac997,%ebx
	movl	$member,%ecx
	movl	$zmember,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac998,%ebx
	movl	$tailp,%ecx
	movl	$ztailp,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac999,%ebx
	movl	$last,%ecx
	movl	$zlast,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1000,%ebx
	movl	$nthcdr,%ecx
	movl	$znthcdr,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1001,%ebx
	movl	$nth,%ecx
	movl	$znth,%edx
	pushl	$3
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1002,%ebx
	movl	$lllength,%ecx
	movl	$zlllength,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1003,%ebx
	movl	$llcons,%ecx
	movl	$zllcons,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1004,%ebx
	movl	$fxcons,%ecx
	movl	$zfxcons,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1005,%ebx
	movl	$fncons,%ecx
	movl	$zfncons,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1006,%ebx
	movl	$mcons,%ecx
	movl	$zmcons,%edx
	pushl	$5
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1007,%ebx
	movl	$list,%ecx
	movl	$zlist,%edx
	pushl	$5
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1008,%ebx
	movl	$evlis,%ecx
	movl	$zevlis,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1009,%ebx
	movl	$kwote,%ecx
	movl	$zkwote,%edx
	pushl	$2
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac1010,%ebx
	movl	$makelist,%ecx
	movl	$zmakelist,%edx
	pushl	$3
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac1011,%ebx
	movl	$reverse,%ecx
	movl	$zreverse,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1012,%ebx
	movl	$append,%ecx
	movl	$zappend,%edx
	pushl	$5
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac1013,%ebx
	movl	$appnd1,%ecx
	movl	$zappnd1,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1014,%ebx
	movl	$remq,%ecx
	movl	$zremq,%edx
	pushl	$3
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1015,%ebx
	movl	$llremove,%ecx
	movl	$zllremove,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1016,%ebx
	movl	$copy,%ecx
	movl	$zcopy,%edx
	pushl	$2
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac1017,%ebx
	movl	$copylist,%ecx
	movl	$zcopylist,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1018,%ebx
	movl	$firstn,%ecx
	movl	$zfirstn,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1019,%ebx
	movl	$lastn,%ecx
	movl	$zlastn,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1020,%ebx
	movl	$subst,%ecx
	movl	$zsubst,%edx
	pushl	$4
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1021,%ebx
	movl	$oblist,%ecx
	movl	$zoblist,%edx
	pushl	$5
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac1022,%ebx
	movl	$boblist,%ecx
	movl	$zboblist,%edx
	pushl	$5
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac1023,%ebx
	movl	$lhoblist,%ecx
	movl	$zlhoblist,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1024,%ebx
	movl	$rplaca,%ecx
	movl	$zrplaca,%edx
	pushl	$3
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1025,%ebx
	movl	$rplacd,%ecx
	movl	$zrplacd,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1026,%ebx
	movl	$rplac,%ecx
	movl	$zrplac,%edx
	pushl	$4
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1027,%ebx
	movl	$placdl,%ecx
	movl	$zplacdl,%edx
	pushl	$3
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac1028,%ebx
	movl	$displace,%ecx
	movl	$zdisplace,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1029,%ebx
	movl	$setq,%ecx
	movl	$zsetq,%edx
	pushl	$6
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1030,%ebx
	movl	$fset,%ecx
	movl	$zfset,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1031,%ebx
	movl	$setqq,%ecx
	movl	$zsetqq,%edx
	pushl	$6
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1032,%ebx
	movl	$psetq,%ecx
	movl	$zpsetq,%edx
	pushl	$6
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1033,%ebx
	movl	$deset,%ecx
	movl	$zdeset,%edx
	pushl	$3
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1034,%ebx
	movl	$desetq,%ecx
	movl	$zdesetq,%edx
	pushl	$6
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac1035,%ebx
	movl	$cirlist,%ecx
	movl	$zcirlist,%edx
	pushl	$5
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac1036,%ebx
	movl	$nreverse,%ecx
	movl	$znreverse,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1037,%ebx
	movl	$nsubst,%ecx
	movl	$znsubst,%edx
	pushl	$4
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1038,%ebx
	movl	$delq,%ecx
	movl	$zdelq,%edx
	pushl	$3
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1039,%ebx
	movl	$lldelete,%ecx
	movl	$zlldelete,%edx
	pushl	$3
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac1040,%ebx
	movl	$nreconc,%ecx
	movl	$znreconc,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1041,%ebx
	movl	$nextl,%ecx
	movl	$znextl,%edx
	pushl	$6
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1042,%ebx
	movl	$newl,%ecx
	movl	$znewl,%edx
	pushl	$6
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1043,%ebx
	movl	$newr,%ecx
	movl	$znewr,%edx
	pushl	$6
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1044,%ebx
	movl	$nconc,%ecx
	movl	$znconc,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1045,%ebx
	movl	$nconc1,%ecx
	movl	$znconc1,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1046,%ebx
	movl	$acons,%ecx
	movl	$zacons,%edx
	pushl	$4
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac1047,%ebx
	movl	$pairlis,%ecx
	movl	$zpairlis,%edx
	pushl	$4
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1048,%ebx
	movl	$assq,%ecx
	movl	$zassq,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1049,%ebx
	movl	$assoc,%ecx
	movl	$zassoc,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1050,%ebx
	movl	$cassq,%ecx
	movl	$zcassq,%edx
	pushl	$3
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1051,%ebx
	movl	$cassoc,%ecx
	movl	$zcassoc,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1052,%ebx
	movl	$rassq,%ecx
	movl	$zrassq,%edx
	pushl	$3
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1053,%ebx
	movl	$rassoc,%ecx
	movl	$zrassoc,%edx
	pushl	$3
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1054,%ebx
	movl	$sublis,%ecx
	movl	$zsublis,%edx
	pushl	$3
	calll	inisymb
	ret	
fntret:
	ret	

	# FENTRY true
	.align	4
true:
	leal	(%esp,%edx,4),%esp
	movl	zt,%eax
	ret	

	# FENTRY false
	.align	4
false:
	leal	(%esp,%edx,4),%esp
	movl	%esi,%eax
	ret	

	# FENTRY llnull
	.align	4
llnull:
	cmpl	%esi,%eax
	je	llnullt
	movl	%esi,%eax
	ret	
llnullt:
	movl	zt,%eax
	ret	

	# FENTRY llnot
	.align	4
llnot:
	cmpl	%esi,%eax
	je	llnott
	movl	%esi,%eax
	ret	
llnott:
	movl	zt,%eax
	ret	

	# FENTRY atom
	.align	4
atom:
	cmpl	%edi,%eax
	jb	atomt
	movl	%esi,%eax
	ret	
atomt:
	movl	zt,%eax
	ret	

	# FENTRY atomp
	.align	4
atomp:
	cmpl	%edi,%eax
	jb	atompt
	movl	%esi,%eax
	ret	
atompt:
	movl	zt,%eax
	ret	

	# FENTRY symbolp
	.align	4
symbolp:
	cmpl	%esi,%eax
	jb	lmac1055
	cmpl	%edi,%eax
	jb	symbolpt
lmac1055:
	movl	%esi,%eax
	ret	
symbolpt:
	movl	zt,%eax
	ret	

	# FENTRY variablep
	.align	4
variablep:
	cmpl	%eax,bvar
	ja	lmac1056
	cmpl	%edi,%eax
	jb	varpret
lmac1056:
	movl	%esi,%eax
varpret:
	ret	

	# FENTRY constantp
	.align	4
constantp:
	cmpl	%eax,bfloat
	ja	conpt
	cmpl	%eax,bfloat
	ja	lmac1057
	cmpl	%eax,bvect
	ja	conpt
lmac1057:
	cmpl	%eax,bstrg
	ja	lmac1058
	cmpl	%esi,%eax
	jb	conpt
lmac1058:
	cmpl	%eax,bvect
	ja	lmac1059
	cmpl	%eax,bstrg
	ja	conpt
lmac1059:
	cmpl	%edi,%eax
	jae	conpret
	cmpl	%eax,bvar
	ja	conpt
	cmpl	%edi,%eax
	jae	conpt
conpret:
	movl	%esi,%eax
	ret	
conpt:
	movl	zt,%eax
	ret	

	# FENTRY vectorp
	.align	4
vectorp:
	cmpl	%eax,bvect
	ja	lmac1060
	cmpl	%eax,bstrg
	ja	vectret
lmac1060:
	movl	%esi,%eax
vectret:
	ret	

	# FENTRY stringp
	.align	4
stringp:
	cmpl	%eax,bstrg
	ja	lmac1061
	cmpl	%esi,%eax
	jb	strgret
lmac1061:
	movl	%esi,%eax
strgret:
	ret	

	# FENTRY listp
	.align	4
listp:
	cmpl	%esi,%eax
	je	listpt
	cmpl	%edi,%eax
	jae	listpt
	movl	%esi,%eax
	ret	
listpt:
	movl	zt,%eax
	ret	

	# FENTRY nlistp
	.align	4
nlistp:
	cmpl	%edi,%eax
	jb	nlistpr
	movl	%esi,%eax
nlistpr:
	ret	

	# FENTRY consp
	.align	4
consp:
	cmpl	%edi,%eax
	jae	conspr
	movl	%esi,%eax
conspr:
	ret	

	# FENTRY boundp
	.align	4
boundp:
	cmpl	%esi,%eax
	jb	boundp1
	cmpl	%edi,%eax
	jae	boundp1
	movl	(%eax),%ebx
	cmpl	zundef,%ebx
	jne	boundpt
boundp1:
	movl	%esi,%eax
	ret	
boundpt:
	movl	zt,%eax
	ret	

	# FENTRY lleq
	.align	4
lleq:
	cmpl	%ebx,%eax
	je	lleqt
	movl	%esi,%eax
	ret	
lleqt:
	movl	zt,%eax
	ret	

	# FENTRY neq
	.align	4
neq:
	cmpl	%ebx,%eax
	jne	neqt
	movl	%esi,%eax
	ret	
neqt:
	movl	zt,%eax
	ret	

	# FENTRY nequal
	.align	4
nequal:
	pushl	$llnot
	jmp	equal
	nop	

	# FENTRY equal
	.align	4
equal:
	movl	%esp,%ecx
	calll	equal2
	movl	zt,%eax
	ret	
equaln:
	movl	%ecx,%esp
	movl	%esi,%eax
	ret	
equalnt:
	popl	%ecx
	cmpl	%esi,%eax
	jne	equalntr
	movl	%ecx,%esp
equalntr:
	ret	
equal1:
	cmpl	%edi,%ebx
	jb	equaln
	pushl	4(%eax)
	movl	(%eax),%eax
	pushl	4(%ebx)
	movl	(%ebx),%ebx
	cmpw	$0,itcount
	je	l__1
	cmpw	$0,itstate
	je	l__1
	calll	ithard
l__1:
	cmpl	%ebx,%eax
	jne	equal11
	popl	%ebx
	popl	%eax
	cmpl	%edi,%eax
	jae	equal1
	jmp	equal2
equal11:
	cmpl	%esp,mstack
	ja	errfs
	calll	equal2
	popl	%ebx
	popl	%eax
equal2:
	cmpl	%ebx,%eax
	jne	equal3
	ret	
equal3:
	cmpl	%edi,%eax
	jae	equal1
	cmpl	%esi,%eax
	jb	lmac1062
	cmpl	%edi,%eax
	jb	equaln
lmac1062:
	cmpl	%eax,bvect
	ja	lmac1063
	cmpl	%eax,bstrg
	ja	equal7
lmac1063:
	cmpl	%eax,bstrg
	ja	lmac1064
	cmpl	%esi,%eax
	jb	equal8
lmac1064:
	cmpl	%ebx,bfloat
	jbe	equal4
	cmpl	%eax,bfloat
	ja	equaln
	jmp	equal5
equal4:
	cmpl	%ebx,bfloat
	ja	equaln
	cmpl	%ebx,bvect
	jbe	equaln
equal5:
	pushl	%ecx
	pushl	$equalnt
	jmp	gaeqn
equal7:
	cmpl	%ebx,bvect
	ja	equaln
	cmpl	%ebx,bstrg
	jbe	equaln
	pushl	%ecx
	pushl	$equalnt
	jmp	eqvectri
equal8:
	cmpl	%ebx,bstrg
	ja	equaln
	cmpl	%esi,%ebx
	jae	equaln
	pushl	%ecx
	pushl	$equalnt
	jmp	eqstrgi
savequal:
	pushl	%ebx
	pushl	%ecx
	calll	equal
	popl	%ecx
	popl	%ebx
	ret	

	# FENTRY memq
	.align	4
memq:
	cmpl	%edi,%ebx
	jb	memq2
memq1:
	movl	(%ebx),%ecx
	cmpl	%eax,%ecx
	je	memq3
	movl	4(%ebx),%ebx
	cmpl	%edi,%ebx
	jae	memq1
memq2:
	movl	%esi,%ebx
memq3:
	movl	%ebx,%eax
	ret	

	# FENTRY member
	.align	4
member:
	cmpl	%edi,%ebx
	jae	memb1
	movl	%esi,%eax
	ret	
memb1:
	pushl	%ebx
	pushl	%eax
	movl	(%ebx),%ebx
	calll	equal
	cmpl	%esi,%eax
	jne	memb3
	popl	%eax
	popl	%ebx
	movl	4(%ebx),%ebx
	cmpl	%edi,%ebx
	jae	memb1
	movl	%esi,%eax
	ret	
memb3:
	addl	$4,%esp
	popl	%eax
	ret	

	# FENTRY tailp
	.align	4
tailp:
	jmp	tailp3
tailp2:
	cmpl	%ebx,%eax
	je	tailp9
	movl	4(%ebx),%ebx
	cmpw	$0,itcount
	je	l__2
	cmpw	$0,itstate
	je	l__2
	calll	ithard
l__2:
tailp3:
	cmpl	%edi,%ebx
	jae	tailp2
	movl	%esi,%eax
tailp9:
	ret	

	# FENTRY last
	.align	4
last:
	cmpl	%edi,%eax
	jb	lastret
last1:
	movl	4(%eax),%ebx
	cmpl	%edi,%ebx
	jb	lastret
	movl	4(%ebx),%eax
	cmpl	%edi,%eax
	jae	last1
	movl	%ebx,%eax
lastret:
	ret	

	# FENTRY nth
	.align	4
nth:
	cmpl	%eax,bfloat
	jbe	ntherr
	jmp	nth2
nth1:
	movl	4(%ebx),%ebx
nth2:
	cmpl	%edi,%ebx
	jb	nthf
	decw	%ax
	jge	nth1
	movl	(%ebx),%eax
	ret	
nthf:
	movl	%esi,%eax
	ret	
ntherr:
	movl	znth,%ebx
	jmp	errnia

	# FENTRY nthcdr
	.align	4
nthcdr:
	cmpl	%eax,bfloat
	jbe	nthcerr
	jmp	nthc2
nthc1:
	movl	4(%ebx),%ebx
nthc2:
	cmpl	%edi,%ebx
	jb	nthcf
	decw	%ax
	jge	nthc1
	movl	%ebx,%eax
	ret	
nthcf:
	movl	%esi,%eax
	ret	
nthcerr:
	movl	znthcdr,%ebx
	jmp	errnia

	# FENTRY lllength
	.align	4
lllength:
	xorl	%ebx,%ebx
	cmpl	%edi,%eax
	jb	lengt2
lengt1:
	movl	4(%eax),%eax
	incw	%bx
	cmpl	%edi,%eax
	jae	lengt1
lengt2:
	movl	%ebx,%eax
	ret	

	# FENTRY llcons
	.align	4
llcons:
	cmpl	%edi,fcons
	jb	l__3
l1__3:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%ebx,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	ret	

	# FENTRY fxcons
	.align	4
fxcons:
	cmpl	%edi,fcons
	jb	l__4
l1__4:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	ret	

	# FENTRY fncons
	.align	4
fncons:
	cmpl	%edi,fcons
	jb	l__5
l1__5:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	ret	

	# FENTRY mcons
	.align	4
mcons:
	orw	%dx,%dx
	je	mconsf
	popl	%eax
	jmp	mcons2
mcons1:
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__6
l1__6:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
mcons2:
	decw	%dx
	jg	mcons1
	ret	
mconsf:
	movl	%esi,%eax
	ret	

	# FENTRY list
	.align	4
list:
	movl	%esi,%eax
	jmp	lists2
lists1:
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__7
l1__7:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
lists2:
	decw	%dx
	jge	lists1
	ret	

	# FENTRY evlis
	.align	4
evlis:
	cmpl	%edi,%eax
	jb	fntret
	pushl	4(%eax)
	calll	evalcar
	popl	%ecx
	cmpl	%edi,fcons
	jb	l__8
l1__8:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	pushl	%eax
list1:
	cmpl	%edi,%ecx
	jb	list2
	pushl	%eax
	pushl	4(%ecx)
	movl	(%ecx),%eax
	calll	evala1
	popl	%ecx
	cmpl	%edi,fcons
	jb	l__9
l1__9:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	popl	%ebx
	movl	%eax,4(%ebx)
	jmp	list1
list2:
	popl	%eax
	ret	

	# FENTRY kwote
	.align	4
kwote:
	cmpl	%edi,fcons
	jb	l__10
l1__10:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	cmpl	%edi,fcons
	jb	l__11
l1__11:
	xchgl	%edi,fcons
	movl	zquote,%ebp
	movl	%ebp,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	ret	

	# FENTRY makelist
	.align	4
makelist:
	cmpl	%eax,bfloat
	jbe	makeler
	movl	%esi,%ecx
	jmp	makel3
makel2:
	cmpl	%edi,fcons
	jb	l__12
l1__12:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%ecx,4(%edi)
	xchgl	%edi,%ecx
	xchgl	%edi,fcons
makel3:
	decw	%ax
	jge	makel2
	movl	%ecx,%eax
	ret	
makeler:
	movl	zmakelist,%ebx
	jmp	errnia

	# FENTRY reverse
	.align	4
reverse:
	movl	%esi,%ebx
	jmp	rev2
rev1:
	movl	(%eax),%ecx
	movl	4(%eax),%eax
	cmpl	%edi,fcons
	jb	l__13
l1__13:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%ebx,4(%edi)
	xchgl	%edi,%ebx
	xchgl	%edi,fcons
rev2:
	cmpl	%edi,%eax
	jae	rev1
	movl	%ebx,%eax
	ret	

	# FENTRY appnd1
	.align	4
appnd1:
	cmpl	%edi,fcons
	jb	l__14
l1__14:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	pushl	%eax
	pushl	%ebx
	movl	$2,%edx
	jmp	append

	# FENTRY append
	.align	4
append:
	orw	%dx,%dx
	je	appendf
	popl	%eax
	jmp	append4
append1:
	popl	%ebx
	cmpl	%edi,%ebx
	jb	append4
	cmpl	%edi,fcons
	jb	l__15
l1__15:
	xchgl	%edi,fcons
	movl	(%ebx),%ebp
	movl	%ebp,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	pushl	%eax
	jmp	append3
append2:
	cmpl	%edi,fcons
	jb	l__16
l1__16:
	xchgl	%edi,fcons
	movl	(%ebx),%ebp
	movl	%ebp,(%edi)
	movl	4(%eax),%ebp
	xchgl	%ebp,4(%edi)
	xchgl	%ebp,%edi
	movl	%ebp,4(%eax)
	xchgl	%edi,fcons
	movl	4(%eax),%eax
append3:
	movl	4(%ebx),%ebx
	cmpw	$0,itcount
	je	l__17
	cmpw	$0,itstate
	je	l__17
	calll	ithard
l__17:
	cmpl	%edi,%ebx
	jae	append2
	popl	%eax
append4:
	decw	%dx
	jg	append1
	ret	
appendf:
	movl	%esi,%eax
	ret	

	# FENTRY remq
	.align	4
remq:
	cmpl	%edi,%ebx
	jae	remq6
	movl	%ebx,%eax
	ret	
remq6:
	movl	(%ebx),%ecx
	movl	4(%ebx),%ebx
	cmpl	%eax,%ecx
	je	remq
	cmpw	$0,itcount
	je	l__18
	cmpw	$0,itstate
	je	l__18
	calll	ithard
l__18:
	cmpl	%esp,mstack
	ja	errfs
	pushl	%ecx
	calll	remq
	popl	%ecx
	cmpl	%edi,fcons
	jb	l__19
l1__19:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	ret	

	# FENTRY llremove
	.align	4
llremove:
	movl	%ebx,%ecx
remv1:
	cmpl	%edi,%ecx
	jae	remv4
	movl	%ecx,%eax
	ret	
remv4:
	cmpl	%esp,mstack
	ja	errfs
	pushl	%eax
	movl	(%ecx),%ebx
	calll	savequal
	movl	%eax,%edx
	popl	%eax
	movl	4(%ecx),%ecx
	cmpl	%esi,%edx
	jne	remv1
	pushl	%ebx
	calll	remv1
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__20
l1__20:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	ret	

	# FENTRY copylist
	.align	4
copylist:
	cmpl	%edi,%eax
	jb	fntret
	cmpw	$0,itcount
	je	l__21
	cmpw	$0,itstate
	je	l__21
	calll	ithard
l__21:
	cmpl	%esp,mstack
	ja	errfs
	pushl	4(%eax)
	movl	(%eax),%eax
	calll	copylist
	xchgl	%eax,(%esp)
	calll	copylist
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__22
l1__22:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	ret	

	# FENTRY copy
	.align	4
copy:
	cmpw	$0,itcount
	je	l__23
	cmpw	$0,itstate
	je	l__23
	calll	ithard
l__23:
	cmpl	%esp,mstack
	ja	errfs
	cmpl	%edi,%eax
	jb	copy3
	pushl	4(%eax)
	movl	%eax,%ebp
	subl	%edi,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbin,%eax
	btl	%ebp,(%eax)
	popl	%eax
	jc	copy2
	movl	(%eax),%eax
	calll	copy
	xchgl	%eax,(%esp)
	calll	copy
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__24
l1__24:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	ret	
copy2:
	movl	(%eax),%eax
	calll	copy
	xchgl	%eax,(%esp)
	calll	copy
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__25
l1__25:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	movl	%eax,%ebp
	subl	%edi,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbin,%eax
	btsl	%ebp,(%eax)
	popl	%eax
	ret	
copy3:
	cmpl	%eax,bstrg
	ja	copy4
	cmpl	%esi,%eax
	jae	copy4
	pushl	%eax
	movl	(%eax),%ebp
	movl	4(%ebp),%ebx
	calll	strgallc
	popl	%ecx
	movl	4(%ecx),%ebp
	movl	%ebp,4(%eax)
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	(%ecx),%esi
	addl	$8,%esi
	movl	(%eax),%edi
	addl	$8,%edi
	movl	%ebx,%ecx
	jecxz	l__26
	cmpl	%edi,%esi
	jae	l__26
	decl	%ecx
	addl	%ecx,%esi
	addl	%ecx,%edi
	std
	movsb
l__26:
	rep
	movsb
	cld
	popl	%esi
	popl	%edi
	popl	%ecx
	ret	
copy4:
	cmpl	%eax,bvect
	ja	fntret
	cmpl	%eax,bstrg
	jbe	fntret
	pushl	%eax
	movl	(%eax),%ebp
	movl	4(%ebp),%eax
	pushl	%eax
	movl	%esi,%ebx
	calll	makevect
	movl	%eax,%ebx
	popl	%edx
	popl	%ecx
	movl	4(%ecx),%ebp
	movl	%ebp,4(%eax)
	jmp	copy6
copy5:
	pushl	%edx
	pushl	%ecx
	pushl	%ebx
	movl	(%ecx),%ebp
	movl	8(%ebp,%edx,4),%eax
	calll	copy
	popl	%ebx
	popl	%ecx
	popl	%edx
	movl	(%ebx),%ebp
	movl	%eax,8(%ebp,%edx,4)
copy6:
	decw	%dx
	jge	copy5
	movl	%ebx,%eax
	ret	

	# FENTRY firstn
	.align	4
firstn:
	movl	zfirstn,%edx
	cmpl	%eax,bfloat
	jbe	firserr1
	cmpl	%edi,%ebx
	jb	firserr2
	orw	%ax,%ax
	jle	firsf
	movl	(%ebx),%ecx
	cmpl	%edi,fcons
	jb	l__27
l1__27:
	movl	fcons,%ebp
	movl	%ecx,(%ebp)
	movl	%esi,%ecx
	xchgl	%ecx,4(%ebp)
	xchgl	%ecx,fcons
	pushl	%ecx
	jmp	firs1
firs0:
	movl	4(%ebx),%ebx
	cmpl	%edi,%ebx
	jb	firs3
	movl	(%ebx),%ecx
	cmpl	%edi,fcons
	jb	l__28
l1__28:
	movl	fcons,%ebp
	movl	%ecx,(%ebp)
	movl	%esi,%ecx
	xchgl	%ecx,4(%ebp)
	xchgl	%ecx,fcons
	movl	%ecx,4(%edx)
firs1:
	movl	%ecx,%edx
	decw	%ax
	jg	firs0
firs3:
	popl	%eax
	ret	
firsf:
	movl	%esi,%eax
	ret	
firserr1:
	movl	%edx,%ebx
	jmp	errnia
firserr2:
	movl	%ebx,%eax
	ret	

	# FENTRY lastn
	.align	4
lastn:
	movl	zlastn,%edx
	cmpl	%eax,bfloat
	jbe	firserr1
	cmpl	%edi,%ebx
	jb	firserr2
	orw	%ax,%ax
	jle	lastnf
	movl	%ebx,%ecx
lastn0:
	movl	4(%ebx),%ebx
	orw	%ax,%ax
	je	lastn1
	decw	%ax
	jmp	lastn2
lastn1:
	movl	4(%ecx),%ecx
lastn2:
	cmpl	%edi,%ebx
	jae	lastn0
	pushl	%ecx
	movl	%esi,%eax
	pushl	%eax
	movl	$2,%edx
	jmp	append
lastnf:
	movl	%esi,%eax
	ret	

	# FENTRY subst
	.align	4
subst:
	cmpl	%esp,mstack
	ja	errfs
	pushl	%eax
	movl	%ecx,%eax
	popl	%ecx
substt2:
	pushl	%eax
	calll	savequal
	cmpl	%esi,%eax
	je	substt4
	popl	%eax
	movl	%ecx,%eax
substt3:
	ret	
substt4:
	popl	%eax
	cmpl	%edi,%eax
	jb	substt3
	pushl	%eax
	pushl	4(%eax)
	movl	(%eax),%eax
	calll	substt2
	xchgl	%eax,(%esp)
	calll	substt2
	popl	%edx
	xchgl	%ebx,(%esp)
	cmpl	%edx,(%ebx)
	jne	substt8
	cmpl	%eax,4(%ebx)
	jne	substt8
	movl	%ebx,%eax
	popl	%ebx
	ret	
substt8:
	cmpl	%edi,fcons
	jb	l__29
l1__29:
	xchgl	%edi,fcons
	movl	%edx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	popl	%ebx
	ret	

	# FENTRY oblist
	.align	4
oblist:
	movl	%esi,%eax
	movl	%esi,%ebx
	orw	%dx,%dx
	je	oblist0
	popl	%ebx
	cmpw	$1,%dx
	je	oblist0
	popl	%ecx
	cmpw	$2,%dx
	je	oblisp0
	movl	$2,%eax
	movl	zoblist,%ebx
	jmp	errwna
oblist0:
	cmpl	%esi,%ebx
	jb	obliser1
	cmpl	%edi,%ebx
	jae	obliser1
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	4(%ebp),%edx
	decw	%dx
oblist1:
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%edx,4),%edx
	jmp	oblist8
oblist2:
	movl	%edx,%ecx
	movl	28(%edx),%ebp
	cmpl	%ebp,bstrg
	ja	lmac1065
	cmpl	%ebp,%esi
	ja	oblist4
lmac1065:
oblist3:
	movl	28(%edx),%edx
oblist4:
oblist5:
	cmpl	%esi,%ebx
	je	oblist6
	cmpl	%ebx,12(%edx)
	jne	oblist7
oblist6:
	cmpl	%edi,fcons
	jb	l__30
l1__30:
	xchgl	%edi,fcons
	movl	%edx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
oblist7:
	cmpl	%ecx,%edx
	jne	oblist3
	movl	20(%edx),%edx
oblist8:
	cmpl	%esi,%edx
	jb	lmac1066
	cmpl	%edi,%edx
	jb	oblist2
lmac1066:
	decw	%dx
	jge	oblist1
	ret	
oblisp0:
	cmpl	%esi,%ebx
	jb	obliser1
	cmpl	%edi,%ebx
	jae	obliser1
	cmpl	%esi,%ecx
	jb	obliser2
	cmpl	%edi,%ecx
	jae	obliser2
	movl	%ebx,%edx
	movl	28(%edx),%ebp
	cmpl	%ebp,bstrg
	ja	lmac1067
	cmpl	%ebp,%esi
	ja	oblisp3
lmac1067:
oblisp2:
	movl	28(%edx),%edx
oblisp3:
	cmpl	%esi,%ecx
	je	oblisp4
	cmpl	%ecx,12(%edx)
	jne	oblisp5
oblisp4:
	cmpl	%edi,fcons
	jb	l__31
l1__31:
	xchgl	%edi,fcons
	movl	%edx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
oblisp5:
	cmpl	%ebx,%edx
	jne	oblisp2
	ret	
obliser1:
	movl	%ebx,%eax
	jmp	obliser3
obliser2:
	movl	%ecx,%eax
obliser3:
	movl	zoblist,%ebx
	jmp	errsym

	# FENTRY boblist
	.align	4
boblist:
	cmpw	$1,%dx
	je	boblon
	orw	%dx,%dx
	je	boblis1
	movl	$1,%eax
	movl	zboblist,%ebx
	jmp	errwna
boblis1:
	movl	%esi,%edx
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	4(%ebp),%eax
	jmp	boblis9
boblis2:
	pushl	%eax
	calll	boblon2
	cmpl	%edi,fcons
	jb	l__32
l1__32:
	xchgl	%edi,fcons
	movl	%eax,(%edi)
	xchgl	%edx,4(%edi)
	xchgl	%edi,%edx
	xchgl	%edi,fcons
	popl	%eax
boblis9:
	decw	%ax
	jge	boblis2
	movl	%edx,%eax
	ret	
boblon:
	popl	%eax
	cmpl	%eax,bfloat
	ja	boblon1
bobloer:
	movl	zboblist,%ebx
	jmp	errnia
bobloer2:
	movl	zboblist,%ebx
	jmp	erroob
boblon1:
	orw	%ax,%ax
	jl	bobloer2
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	4(%ebp),%ebx
	cmpw	%bx,%ax
	jge	bobloer2
boblon2:
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%eax,4),%ebx
	movl	%esi,%eax
	jmp	boblon8
boblon3:
	cmpl	zundef,%ebx
	je	boblon7
	movl	28(%ebx),%ebp
	cmpl	%ebp,bstrg
	ja	lmac1068
	cmpl	%ebp,%esi
	ja	boblon6
lmac1068:
	pushl	%edx
	movl	%esi,%edx
	movl	%ebx,%ecx
boblon4:
	movl	28(%ecx),%ecx
	cmpl	%edi,fcons
	jb	l__33
l1__33:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%edx,4(%edi)
	xchgl	%edi,%edx
	xchgl	%edi,fcons
	cmpl	%ebx,%ecx
	jne	boblon4
	cmpl	%edi,fcons
	jb	l__34
l1__34:
	xchgl	%edi,fcons
	movl	%edx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	popl	%edx
	jmp	boblon7
boblon6:
	cmpl	%edi,fcons
	jb	l__35
l1__35:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
boblon7:
	movl	20(%ebx),%ebx
boblon8:
	cmpl	%esi,%ebx
	jb	lmac1069
	cmpl	%edi,%ebx
	jb	boblon3
lmac1069:
	ret	

	# FENTRY lhoblist
	.align	4
lhoblist:
	movl	%eax,%ebx
	movl	zlhoblist,%ebp
	movl	%ebp,savea4
	calll	stringa2
	movl	%esi,%eax
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	4(%ebp),%edx
	decw	%dx
lhoblist1:
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%edx,4),%edx
	jmp	lhoblist8
lhoblist2:
	movl	%edx,%ecx
	movl	28(%edx),%ebp
	cmpl	%ebp,bstrg
	ja	lmac1070
	cmpl	%ebp,%esi
	ja	lhoblist4
lmac1070:
lhoblist3:
	movl	28(%edx),%edx
lhoblist4:
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	$lhoblist5
	pushl	%ebx
	pushl	%edx
	movl	$2,%edx
	jmp	ffindex
lhoblist5:
	popl	%edx
	popl	%ecx
	popl	%ebx
	cmpl	%esi,%eax
	jne	lhoblist6
	popl	%eax
	jmp	lhoblist7
lhoblist6:
	popl	%eax
	cmpl	%edi,fcons
	jb	l__36
l1__36:
	xchgl	%edi,fcons
	movl	%edx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
lhoblist7:
	cmpl	%ecx,%edx
	jne	lhoblist3
	movl	20(%edx),%edx
lhoblist8:
	cmpl	%esi,%edx
	jb	lmac1071
	cmpl	%edi,%edx
	jb	lhoblist2
lmac1071:
	decw	%dx
	jge	lhoblist1
	ret	

	# FENTRY rplaca
	.align	4
rplaca:
	cmpl	%edi,%eax
	jb	rplaca1
	movl	%ebx,(%eax)
	ret	
rplaca1:
	movl	zrplaca,%ebx
	jmp	errnla

	# FENTRY rplacd
	.align	4
rplacd:
	cmpl	%edi,%eax
	jb	rplacd1
	movl	%ebx,4(%eax)
	ret	
rplacd1:
	movl	zrplacd,%ebx
	jmp	errnla

	# FENTRY rplac
	.align	4
rplac:
	cmpl	%edi,%eax
	jb	rplac1
	movl	%ebx,(%eax)
	movl	%ecx,4(%eax)
	ret	
rplac1:
	movl	zrplac,%ebx
	jmp	errnla

	# FENTRY displace
	.align	4
displace:
	cmpl	%edi,%eax
	jb	displ2
	cmpl	%edi,%ebx
	jae	displ1
	movl	zprogn,%ebp
	movl	%ebp,(%eax)
	cmpl	%edi,fcons
	jb	l__37
l1__37:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	movl	%ebx,4(%eax)
	ret	
displ1:
	movl	(%ebx),%ebp
	movl	%ebp,(%eax)
	movl	4(%ebx),%ebp
	movl	%ebp,4(%eax)
	movl	%ebx,%ebp
	subl	%edi,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbin,%eax
	btl	%ebp,(%eax)
	popl	%eax
	jnc	displret
	movl	%eax,%ebp
	subl	%edi,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbin,%eax
	btsl	%ebp,(%eax)
	popl	%eax
displret:
	ret	
displ2:
	movl	zdisplace,%ebx
	jmp	errnla

	# FENTRY placdl
	.align	4
placdl:
	cmpl	%edi,%eax
	jb	placd1
	cmpl	%edi,fcons
	jb	l__38
l1__38:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	movl	%ebx,4(%eax)
	movl	%ebx,%eax
	ret	
placd1:
	movl	zplacdl,%ebx
	jmp	errnla

	# FENTRY setq
	.align	4
setq:
	movl	%eax,%ebx
	cmpl	%edi,%ebx
	jae	setq1
	ret	
setq1:
	movl	%ebx,%eax
	pushl	(%eax)
	movl	4(%eax),%eax
	cmpl	%edi,%eax
	jb	setqer2
	pushl	4(%eax)
	calll	evalcar
	popl	%ebx
	popl	%ecx
	cmpl	%ecx,bvar
	ja	setqer1
	cmpl	%edi,%ecx
	jae	setqer1
	movl	%eax,(%ecx)
	cmpl	%edi,%ebx
	jae	setq1
	ret	
setqer1:
	movl	%ecx,%eax
	movl	zsetq,%ebx
	jmp	errnva
setqer2:
	movl	$2,%eax
	movl	zsetq,%ebx
	jmp	errwna

	# FENTRY fset
	.align	4
fset:
	cmpl	%eax,bvar
	ja	seterr
	cmpl	%edi,%eax
	jae	seterr
	movl	%ebx,(%eax)
	movl	%ebx,%eax
	ret	
seterr:
	movl	zfset,%ebx
	jmp	errnva

	# FENTRY setqq
	.align	4
setqq:
	movl	%esi,%ecx
	jmp	setqq3
setqq1:
	movl	(%eax),%ebx
	cmpl	%ebx,bvar
	ja	setqqer1
	cmpl	%edi,%ebx
	jae	setqqer1
	movl	4(%eax),%eax
	cmpl	%edi,%eax
	jb	setqqer2
	movl	(%eax),%ecx
	movl	%ecx,(%ebx)
	movl	4(%eax),%eax
setqq3:
	cmpl	%edi,%eax
	jae	setqq1
	movl	%ecx,%eax
	ret	
setqqer1:
	movl	%ebx,%eax
	movl	zsetqq,%ebx
	jmp	errnva
setqqer2:
	movl	$2,%eax
	movl	zsetqq,%ebx
	jmp	errwna

	# FENTRY psetq
	.align	4
psetq:
	xorl	%edx,%edx
	jmp	psetq5
psetq2:
	movl	(%eax),%ebx
	cmpl	%ebx,bvar
	ja	psetqerr
	cmpl	%edi,%ebx
	jae	psetqerr
	pushl	%ebx
	movl	4(%eax),%eax
	pushl	%eax
	pushl	%edx
	calll	evalcar
	popl	%edx
	xchgl	%eax,(%esp)
	movl	4(%eax),%eax
	incw	%dx
psetq5:
	cmpl	%edi,%eax
	jae	psetq2
	jmp	psetq4
psetq3:
	popl	%eax
	popl	%ebx
	movl	%eax,(%ebx)
psetq4:
	decw	%dx
	jge	psetq3
	ret	
psetqerr:
	movl	%ebx,%eax
	movl	zpsetq,%ebx
	jmp	errnva

	# FENTRY deset
	.align	4
deset:
	movl	zdeset,%edx
deset0:
	movl	%edx,savea4
	calll	deset4
	movl	zt,%eax
	ret	
deset2:
	cmpl	%edi,%ebx
	jb	deset6
	pushl	4(%eax)
	pushl	4(%ebx)
	movl	(%eax),%eax
	movl	(%ebx),%ebx
	calll	deset5
	popl	%ebx
	popl	%eax
deset4:
	cmpl	%esi,%eax
	je	fntret
deset5:
	cmpl	%edi,%eax
	jae	deset2
	cmpl	%eax,bvar
	ja	lmac1072
	cmpl	%edi,%eax
	jb	deset8
lmac1072:
	movl	savea4,%ebx
	jmp	errbpa
deset6:
	cmpl	%edi,fcons
	jb	l__39
l1__39:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	cmpl	%edi,fcons
	jb	l__40
l1__40:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%ebx,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	movl	savea4,%ebx
	jmp	errilb
deset8:
	movl	%ebx,(%eax)
	ret	

	# FENTRY desetq
	.align	4
desetq:
	pushl	(%eax)
	movl	4(%eax),%eax
	calll	evalcar
	movl	%eax,%ebx
	popl	%eax
	movl	zdesetq,%edx
	jmp	deset0

	# FENTRY cirlist
	.align	4
cirlist:
	orw	%dx,%dx
	je	cirlistf
	popl	%eax
	cmpl	%edi,fcons
	jb	l__41
l1__41:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	movl	%eax,%ecx
	jmp	cirlist3
cirlist2:
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__42
l1__42:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
cirlist3:
	decw	%dx
	jg	cirlist2
	movl	%eax,4(%ecx)
	ret	
cirlistf:
	movl	%esi,%eax
	ret	

	# FENTRY nreconc
	.align	4
nreconc:
	jmp	frev2
frev1:
	movl	4(%eax),%ecx
	movl	%ebx,4(%eax)
	cmpl	%edi,%ecx
	jb	frevret
	movl	4(%ecx),%ebx
	movl	%eax,4(%ecx)
	cmpl	%edi,%ebx
	jb	frev9
	movl	4(%ebx),%eax
	movl	%ecx,4(%ebx)
frev2:
	cmpl	%edi,%eax
	jae	frev1
	movl	%ebx,%eax
	ret	
frev9:
	movl	%ecx,%eax
frevret:
	ret	

	# FENTRY nsubst
	.align	4
nsubst:
	movl	%eax,%edx
nsloop:
	cmpl	%esp,mstack
	ja	errfs
	pushl	%ecx
	movl	%ecx,%eax
	pushl	%edx
	calll	savequal
	popl	%edx
	cmpl	%esi,%eax
	je	nsub0
	movl	%edx,%eax
	popl	%ecx
	ret	
nsub2:
	movl	4(%ecx),%ecx
	cmpw	$0,itcount
	je	l__43
	cmpw	$0,itstate
	je	l__43
	calll	ithard
l__43:
nsub0:
	cmpl	%edi,%ecx
	jb	nsubret
	pushl	%ecx
	movl	(%ecx),%ecx
	calll	nsloop
	popl	%ecx
	movl	%eax,(%ecx)
nsub1:
	movl	4(%ecx),%eax
	pushl	%edx
	calll	savequal
	popl	%edx
	cmpl	%esi,%eax
	je	nsub2
nsub3:
	movl	%edx,4(%ecx)
nsubret:
	popl	%eax
	ret	

	# FENTRY delq
	.align	4
delq:
delq0:
	cmpl	%edi,%ebx
	jb	delqret
	cmpl	%eax,(%ebx)
	jne	delq1
	movl	4(%ebx),%ebx
	jmp	delq0
delq1:
	movl	%ebx,%edx
delq2:
	movl	%edx,%ecx
delq3:
	movl	4(%edx),%edx
	cmpl	%edi,%edx
	jb	delqret
	cmpl	%eax,(%edx)
	jne	delq2
	movl	4(%edx),%ebp
	movl	%ebp,4(%ecx)
	cmpw	$0,itcount
	je	l__44
	cmpw	$0,itstate
	je	l__44
	calll	ithard
l__44:
	jmp	delq3
delqret:
	movl	%ebx,%eax
	ret	

	# FENTRY lldelete
	.align	4
lldelete:
	jmp	dele4
dele0:
	pushl	%eax
	movl	(%ebx),%ebx
	calll	equal
	cmpl	%esi,%eax
	je	dele1
	popl	%eax
	popl	%ebx
	movl	4(%ebx),%ebx
dele4:
	pushl	%ebx
	cmpl	%edi,%ebx
	jae	dele0
deleret:
	popl	%eax
	ret	
dele1:
	popl	%ebx
	movl	(%esp),%edx
dele2:
	movl	%edx,%ecx
dele3:
	movl	4(%edx),%edx
	cmpl	%edi,%edx
	jb	deleret
	movl	(%edx),%eax
	pushl	%edx
	calll	savequal
	popl	%edx
	cmpl	%esi,%eax
	je	dele2
	movl	4(%edx),%ebp
	movl	%ebp,4(%ecx)
	cmpw	$0,itcount
	je	l__45
	cmpw	$0,itstate
	je	l__45
	calll	ithard
l__45:
	jmp	dele3

	# FENTRY nreverse
	.align	4
nreverse:
	movl	%esi,%ebx
	cmpl	%edi,%eax
	jb	nrev2
nrev1:
	movl	4(%eax),%ecx
	movl	%ebx,4(%eax)
	cmpl	%edi,%ecx
	jb	nrev9
	movl	4(%ecx),%ebx
	movl	%eax,4(%ecx)
	cmpl	%edi,%ebx
	jb	nrev3
	movl	4(%ebx),%eax
	movl	%ecx,4(%ebx)
	cmpl	%edi,%eax
	jae	nrev1
nrev2:
	movl	%ebx,%eax
	ret	
nrev3:
	movl	%ecx,%eax
nrev9:
	ret	

	# FENTRY nextl
	.align	4
nextl:
	movl	(%eax),%ebx
	cmpl	%ebx,bvar
	ja	nextlerr
	cmpl	%edi,%ebx
	jae	nextlerr
	pushl	4(%eax)
	movl	(%ebx),%ecx
	cmpl	%edi,%ecx
	jae	nextl4
	cmpl	%esi,%ecx
	je	nextl4
	movl	%ebx,%eax
	movl	znextl,%ebx
	jmp	errnla
nextl4:
	movl	(%ecx),%eax
	movl	4(%ecx),%ecx
	movl	%ecx,(%ebx)
	popl	%ebx
	cmpl	%edi,%ebx
	jb	nextl9
	movl	(%ebx),%ebx
	cmpl	%ebx,bvar
	ja	nextlerr
	cmpl	%edi,%ebx
	jae	nextlerr
	movl	%eax,(%ebx)
nextl9:
	ret	
nextlerr:
	movl	%ebx,%eax
	movl	znextl,%ebx
	jmp	errnva

	# FENTRY newl
	.align	4
newl:
	pushl	(%eax)
	movl	4(%eax),%eax
	calll	evalcar
	popl	%ebx
	cmpl	%ebx,bvar
	ja	newlerr
	cmpl	%edi,%ebx
	jae	newlerr
	movl	(%ebx),%ecx
	cmpl	zundef,%ecx
	je	newlerr1
	cmpl	%edi,fcons
	jb	l__46
l1__46:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%ecx,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	movl	%eax,(%ebx)
	ret	
newlerr:
	movl	%ebx,%eax
	movl	znewl,%ebx
	jmp	errnva
newlerr1:
	movl	%ebx,%eax
	movl	znewl,%ebx
	jmp	errudv

	# FENTRY newr
	.align	4
newr:
	movl	(%eax),%ebx
	cmpl	%ebx,bvar
	ja	newrerr
	cmpl	%edi,%ebx
	jae	newrerr
	pushl	%ebx
	movl	4(%eax),%eax
	calll	evalcar
	popl	%ebx
	movl	(%ebx),%ecx
	cmpl	%edi,fcons
	jb	l__47
l1__47:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	cmpl	%edi,%ecx
	jae	newr3
	movl	%eax,(%ebx)
	jmp	newr9
newr3:
	pushl	%ecx
	jmp	newr6
newr4:
	movl	%edx,%ecx
newr6:
	movl	4(%ecx),%edx
	cmpl	%edi,%edx
	jae	newr4
	movl	%eax,4(%ecx)
	popl	%eax
newr9:
	ret	
newrerr:
	movl	%ebx,%eax
	movl	znewr,%ebx
	jmp	errnva

	# FENTRY nconc1
	.align	4
nconc1:
	cmpl	%edi,fcons
	jb	l__48
l1__48:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	pushl	%eax
	pushl	%ebx
	movl	$2,%edx
	jmp	nconc
	nop	

	# FENTRY nconc
	.align	4
nconc:
	orw	%dx,%dx
	je	fnconcf
	popl	%eax
	jmp	fnconc4
fnconc1:
	movl	(%esp),%ebx
	cmpl	%edi,%ebx
	jae	fnconc3
	popl	%ebx
	jmp	fnconc4
fnconc2:
	movl	4(%ebx),%ebx
	cmpw	$0,itcount
	je	l__49
	cmpw	$0,itstate
	je	l__49
	calll	ithard
l__49:
fnconc3:
	cmpl	%edi,4(%ebx)
	jae	fnconc2
	movl	%eax,4(%ebx)
	popl	%eax
fnconc4:
	decw	%dx
	jg	fnconc1
	ret	
fnconcf:
	movl	%esi,%eax
	ret	

	# FENTRY acons
	.align	4
acons:
	pushl	%ecx
	cmpl	%edi,fcons
	jb	l__50
l1__50:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%ebx,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__51
l1__51:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%ebx,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	ret	

	# FENTRY pairlis
	.align	4
pairlis:
	movl	%esi,%edx
	cmpl	%edi,fcons
	jb	l__52
l1__52:
	movl	fcons,%ebp
	movl	%edx,(%ebp)
	movl	%esi,%edx
	xchgl	%edx,4(%ebp)
	xchgl	%edx,fcons
	pushl	%edx
	pushl	%ecx
	jmp	pairlis5
pairlis2:
	movl	(%ebx),%ecx
	cmpl	%edi,fcons
	jb	l__53
l1__53:
	xchgl	%edi,fcons
	movl	(%eax),%ebp
	movl	%ebp,(%edi)
	xchgl	%ecx,4(%edi)
	xchgl	%edi,%ecx
	xchgl	%edi,fcons
	cmpl	%edi,fcons
	jb	l__54
l1__54:
	movl	fcons,%ebp
	movl	%ecx,(%ebp)
	movl	%esi,%ecx
	xchgl	%ecx,4(%ebp)
	xchgl	%ecx,fcons
	movl	%ecx,4(%edx)
	movl	%ecx,%edx
	movl	4(%eax),%eax
	movl	4(%ebx),%ebx
pairlis5:
	cmpl	%edi,%eax
	jb	pairlis8
	cmpl	%edi,%ebx
	jae	pairlis2
	cmpl	%esi,%ebx
	je	pairlis2
	movl	%ebx,%eax
	movl	zpairlis,%ebx
	jmp	errnla
pairlis8:
	popl	%eax
	movl	%eax,4(%edx)
	popl	%eax
	movl	4(%eax),%eax
	ret	

	# FENTRY assq
	.align	4
assq:
	cmpl	%edi,%ebx
	jb	assq3
	movl	%eax,%ecx
assq1:
	movl	(%ebx),%eax
	cmpl	%edi,%eax
	jb	assq2
	movl	(%eax),%edx
	cmpl	%ecx,%edx
	je	assqret
assq2:
	movl	4(%ebx),%ebx
	cmpl	%edi,%ebx
	jae	assq1
assq3:
	movl	%esi,%eax
assqret:
	ret	

	# FENTRY assoc
	.align	4
assoc:
	cmpl	%edi,%ebx
	jae	asso1
	movl	%esi,%eax
	ret	
asso1:
	movl	(%ebx),%ecx
	cmpl	%edi,%ecx
	jb	asso5
	pushl	%eax
	pushl	%ebx
	movl	(%ecx),%ebx
	pushl	%ecx
	calll	equal
	cmpl	%esi,%eax
	jne	asso9
	addl	$4,%esp
	popl	%ebx
	popl	%eax
asso5:
	movl	4(%ebx),%ebx
	cmpl	%edi,%ebx
	jae	asso1
	movl	%esi,%eax
	ret	
asso9:
	popl	%eax
	addl	$8,%esp
	ret	

	# FENTRY cassq
	.align	4
cassq:
	jmp	cassq3
cassq1:
	movl	(%ebx),%ecx
	cmpl	%edi,%ecx
	jb	cassq2
	movl	(%ecx),%edx
	cmpl	%eax,%edx
	je	cassq4
cassq2:
	movl	4(%ebx),%ebx
cassq3:
	cmpl	%edi,%ebx
	jae	cassq1
	movl	%esi,%eax
	ret	
cassq4:
	movl	4(%ecx),%eax
	ret	

	# FENTRY cassoc
	.align	4
cassoc:
	jmp	casso8
casso1:
	movl	(%ebx),%ecx
	cmpl	%edi,%ecx
	jb	casso5
	pushl	%eax
	pushl	%ebx
	movl	(%ecx),%ebx
	pushl	%ecx
	calll	equal
	cmpl	%esi,%eax
	jne	casso9
	addl	$4,%esp
	popl	%ebx
	popl	%eax
casso5:
	movl	4(%ebx),%ebx
casso8:
	cmpl	%edi,%ebx
	jae	casso1
	movl	%esi,%eax
	ret	
casso9:
	popl	%eax
	movl	4(%eax),%eax
	addl	$8,%esp
	ret	

	# FENTRY rassq
	.align	4
rassq:
	cmpl	%edi,%ebx
	jb	rassq3
	movl	%eax,%ecx
rassq1:
	movl	(%ebx),%eax
	cmpl	%edi,%eax
	jb	rassq2
	movl	4(%eax),%edx
	cmpl	%ecx,%edx
	je	rassqret
rassq2:
	movl	4(%ebx),%ebx
	cmpl	%edi,%ebx
	jae	rassq1
rassq3:
	movl	%esi,%eax
rassqret:
	ret	

	# FENTRY rassoc
	.align	4
rassoc:
	jmp	rasso8
rasso1:
	movl	(%ebx),%ecx
	cmpl	%edi,%ecx
	jb	rasso5
	pushl	%eax
	pushl	%ebx
	movl	4(%ecx),%ebx
	pushl	%ecx
	calll	equal
	cmpl	%esi,%eax
	jne	rasso9
	addl	$4,%esp
	popl	%ebx
	popl	%eax
rasso5:
	movl	4(%ebx),%ebx
rasso8:
	cmpl	%edi,%ebx
	jae	rasso1
	movl	%esi,%eax
	ret	
rasso9:
	popl	%eax
	addl	$8,%esp
	ret	

	# FENTRY sublis
	.align	4
sublis:
	cmpl	%edi,%ebx
	jae	sublis5
	pushl	%ebx
	movl	%eax,%ebx
	movl	(%esp),%eax
	calll	assq
	cmpl	%esi,%eax
	je	sublis2
	popl	%ebx
	movl	4(%eax),%eax
	ret	
sublis2:
	popl	%eax
	ret	
sublis5:
	cmpw	$0,itcount
	je	l__55
	cmpw	$0,itstate
	je	l__55
	calll	ithard
l__55:
	cmpl	%esp,mstack
	ja	errfs
	pushl	%eax
	pushl	%ebx
	movl	(%ebx),%ebx
	calll	sublis
	popl	%ebx
	xchgl	%eax,(%esp)
	pushl	%ebx
	movl	4(%ebx),%ebx
	calll	sublis
	popl	%ecx
	popl	%ebx
	cmpl	4(%ecx),%eax
	jne	sublis8
	cmpl	(%ecx),%ebx
	jne	sublis8
	movl	%ecx,%eax
	ret	
sublis8:
	cmpl	%edi,fcons
	jb	l__56
l1__56:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	ret	
l__56:
	calll	gccons
	jmp	l1__56
l__54:
	calll	gccons
	jmp	l1__54
l__53:
	calll	gccons
	jmp	l1__53
l__52:
	calll	gccons
	jmp	l1__52
l__51:
	calll	gccons
	jmp	l1__51
l__50:
	calll	gccons
	jmp	l1__50
l__48:
	calll	gccons
	jmp	l1__48
l__47:
	calll	gccons
	jmp	l1__47
l__46:
	calll	gccons
	jmp	l1__46
l__42:
	calll	gccons
	jmp	l1__42
l__41:
	calll	gccons
	jmp	l1__41
l__40:
	calll	gccons
	jmp	l1__40
l__39:
	calll	gccons
	jmp	l1__39
l__38:
	calll	gccons
	jmp	l1__38
l__37:
	calll	gccons
	jmp	l1__37
l__36:
	calll	gccons
	jmp	l1__36
l__35:
	calll	gccons
	jmp	l1__35
l__34:
	calll	gccons
	jmp	l1__34
l__33:
	calll	gccons
	jmp	l1__33
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
l__25:
	calll	gccons
	jmp	l1__25
l__24:
	calll	gccons
	jmp	l1__24
l__22:
	calll	gccons
	jmp	l1__22
l__20:
	calll	gccons
	jmp	l1__20
l__19:
	calll	gccons
	jmp	l1__19
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
