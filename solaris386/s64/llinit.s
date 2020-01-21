	.file	"llinit.asm"
	.version	"02.01"
	.text	
	.align	4
	.data
	.align	4
	.globl	cpkgc
	.globl	savea1
	.globl	savea2
	.globl	savea3
	.globl	savea4
	.globl	zstring000
	.globl	zvector
bimpur:
bstack:
	.long	0
estack:
	.long	0
mstack:
	.long	0
mstack1:
	.long	0
mstack2:
	.long	0
bcode:
	.long	0
ccode:
	.long	0
ecode:
	.long	0
bheap:
	.long	0
cheap:
	.long	0
eheap:
	.long	0
bnumb:
	.long	0
cnumb:
	.long	0
bfloat:
	.long	0
cfloat:
	.long	0
bvect:
	.long	0
cvect:
	.long	0
bstrg:
	.long	0
cstrg:
	.long	0
csymb:
	.long	0
bvar:
	.long	0
ccons:
	.long	0
bold:
	.long	0
eold:
	.long	0
fnumb:
	.long	0
ffloat:
	.long	0
fstrg:
	.long	0
fvect:
	.long	0
fsymb:
	.long	0
fcons:
	.long	0
filiz:
	.long	0
filit:
	.long	0
filin:
	.long	0
llban:
	.long	0
nbsyst:
	.long	0
maxchan:
	.long	0
itstate:
	.long	0
itcount:
	.long	0
hashtab:
	.long	0
tabsyst:
	.long	0
cstsyste:
	.long	0
	.globl	btbin
zvoid:
	.long	0
pnmac1175:
	.byte	0
	.even
zundef:
	.long	0
pnmac1176:
	.string	"_undef_"
	.even
znewnil:
	.long	0
pnmac1177:
	.string	"nil"
	.even
zt:
	.long	0
pnmac1178:
	.string	"t"
	.even
zsyspkgc:
	.long	0
pnmac1179:
	.string	"sys-package"
	.even
pnmac1180:
	.string	"itsoft"
	.even
pnmac1181:
	.string	"super-itsoft"
	.even
pnmac1182:
	.string	"system"
	.even
zsysobslt:
	.long	0
pnmac1183:
	.string	"obsolete"
	.even
zapollo:
	.long	0
pnmac1184:
	.string	"apollo"
	.even
zvaxunix:
	.long	0
pnmac1185:
	.string	"vaxunix"
	.even
zvaxvms:
	.long	0
pnmac1186:
	.string	"vaxvms"
	.even
zcpm86:
	.long	0
pnmac1187:
	.string	"cpm86"
	.even
zpcdos:
	.long	0
pnmac1188:
	.string	"msdos"
	.even
zksun:
	.long	0
pnmac1189:
	.string	"sun"
	.even
zhp9000:
	.long	0
pnmac1190:
	.string	"hp9300"
	.even
zibmrt:
	.long	0
pnmac1191:
	.string	"ibmrt"
	.even
zunigraph:
	.long	0
pnmac1192:
	.string	"cetia"
	.even
zsllc:
	.long	0
pnmac1193:
	.string	"C"
	.even
zlews:
	.long	0
pnmac1194:
	.string	"dpx1000"
	.even
zsun4:
	.long	0
pnmac1195:
	.string	"sun4"
	.even
zatari:
	.long	0
pnmac1196:
	.string	"atari"
	.even
zmacaux:
	.long	0
pnmac1197:
	.string	"macaux"
	.even
zdecstation:
	.long	0
pnmac1198:
	.string	"decstation"
	.even
zsony:
	.long	0
pnmac1199:
	.string	"sony"
	.even
zm88k:
	.long	0
pnmac1200:
	.string	"m88k"
	.even
zsun386i:
	.long	0
pnmac1201:
	.string	"sun386i"
	.even
zaix386:
	.long	0
pnmac1202:
	.string	"aix386"
	.even
zix386:
	.long	0
pnmac1203:
	.string	"ix386"
	.even
zsonyr3000:
	.long	0
pnmac1204:
	.string	"sonyr3000"
	.even
zllmips:
	.long	0
pnmac1205:
	.string	"magnum"
	.even
zrs6000:
	.long	0
pnmac1206:
	.string	"rs6000"
	.even
zsco386:
	.long	0
pnmac1207:
	.string	"sco386"
	.even
zos2:
	.long	0
pnmac1208:
	.string	"os2"
	.even
zhp9400:
	.long	0
pnmac1209:
	.string	"hp9400"
	.even
ziris4d:
	.long	0
pnmac1210:
	.string	"iris4d"
	.even
zsvr4i386:
	.long	0
pnmac1211:
	.string	"svr4i386"
	.even
zos220:
	.long	0
pnmac1212:
	.string	"os2_2"
	.even
zchp9700:
	.long	0
pnmac1213:
	.string	"Chp9700"
	.even
zcsun4:
	.long	0
pnmac1214:
	.string	"Csun4"
	.even
zcetia88k:
	.long	0
pnmac1215:
	.string	"cetia88k"
	.even
zsun4mbc:
	.long	0
pnmac1216:
	.string	"sun4mbc"
	.even
zhp9700:
	.long	0
pnmac1217:
	.string	"hp9700"
	.even
zcalphavms:
	.long	0
pnmac1218:
	.string	"Calphavms"
	.even
znt386:
	.long	0
pnmac1219:
	.string	"nt386"
	.even
znext68k:
	.long	0
pnmac1220:
	.string	"next68k"
	.even
zsolaris:
	.long	0
pnmac1221:
	.string	"solaris"
	.even
zcalphaosf:
	.long	0
pnmac1222:
	.string	"Calphaosf"
	.even
zciris4d:
	.long	0
pnmac1223:
	.string	"Ciris4d"
	.even
zalphaosf:
	.long	0
pnmac1224:
	.string	"alphaosf"
	.even
zsolaris386:
	.long	0
pnmac1225:
	.string	"solaris386"
	.even
zunixware386:
	.long	0
pnmac1226:
	.string	"unixware386"
	.even
zirix5:
	.long	0
pnmac1227:
	.string	"irix5"
	.even
zalphavms:
	.long	0
pnmac1228:
	.string	"alphavms"
	.even
zlinux:
	.long	0
pnmac1229:
	.string	"linux"
	.even
zwin95:
	.long	0
pnmac1230:
	.string	"win95"
	.even
zcygwin:
	.long	0
pnmac1231:
	.string	"cygwin"
	.even
zhp11:
	.long	0
pnmac1232:
	.string	"hp11"
	.even
zwin32:
	.long	0
pnmac1233:
	.string	"win32"
	.even
zwin64:
	.long	0
pnmac1234:
	.string	"win64"
	.even
zx86macos:
	.long	0
pnmac1235:
	.string	"x86macos"
	.even
zlinuxsparc:
	.long	0
pnmac1236:
	.string	"linuxsparc"
	.even
zfreebsd:
	.long	0
pnmac1237:
	.string	"freebsd"
	.even
znetbsd:
	.long	0
pnmac1238:
	.string	"netbsd"
	.even
pnmac1239:
	.string	"version"
	.even
znaversion:
	.long	0
pnmac1240:
	.string	"15.26"
	.even
pnmac1241:
	.string	"end"
	.even
pnmac1242:
	.string	"at-end"
	.even
pnmac1243:
	.string	"herald"
	.even
lab_m__1:
	.string	"May Le-Lisp be with you. "
	.even
zitsoft:
	.long	0
zsupitsof:
	.long	0
zllversion:
	.long	0
zllsystem:
	.long	0
zstop:
	.long	0
zllatend:
	.long	0
zherald:
	.long	0
lab_m__4:
	.string	"; Le-Lisp (by INRIA) version 15.26  (01/Jan/2020)  ["
	.even
lab_m__5:
	.string	"]"
	.even
	.globl	econs
	.globl	crwork
	.text
	.align	4
	.globl	ll_exit
	.globl	exwer
	.globl	systop
	.globl	ini_top
	.globl	errwna
	.globl	ini_gc
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	ini_pio
	.globl	input
	.globl	restcori
	.globl	ini_read
	.globl	istdsym
	.globl	inisymb
	.globl	inicst
	.globl	crastrg
	.globl	ini_mach
	.globl	ini_print
	.globl	ini_eval
	.globl	llitsoft
	.globl	llsupit
	.globl	ini_spec
	.globl	ini_ctl
	.globl	ini_cad
	.globl	ini_sym
	.globl	ini_std
	.globl	ini_nbs
	.globl	ini_snb
	.globl	ini_str
	.globl	makevect
	.globl	strgsymb
	.globl	strgallc
	.globl	ini_chr
	.globl	ini_ext
	.globl	ini_bll
	.globl	cstsyste
	.globl	bimpur
	.globl	bstack
	.globl	estack
	.globl	mstack
	.globl	mstack1
	.globl	mstack2
	.globl	bcode
	.globl	ccode
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
	.globl	bvar
	.globl	ccons
	.globl	bold
	.globl	eold
	.globl	fnumb
	.globl	ffloat
	.globl	fvect
	.globl	fstrg
	.globl	fsymb
	.globl	fcons
	.globl	hashtab
	.globl	zundef
	.globl	zsyspkgc
	.globl	zvoid
	.globl	zitsoft
	.globl	itsoft
	.globl	zllsystem
	.globl	filin
	.globl	filiz
	.globl	filit
	.globl	llban
	.globl	nbsyst
	.globl	maxchan
	.globl	itstate
	.globl	itcount
	.globl	llinit000
	.globl	reenter
	.globl	theend
	.globl	zt
	.globl	llversion
	.globl	llsystem
	.globl	stop
	.globl	ttyout
	.globl	ttycrlf
	.globl	llrt_cvatof

	# FENTRY llinit000
	.align	4
llinit000:
	movl	bstack,%esp
	movl	mstack1,%ebp
	movl	%ebp,mstack
	xorl	%eax,%eax
	movl	cnumb,%ebx
	jmp	ifrns3
ifrns1:
	movl	%eax,(%ebx)
	movl	%ebx,%eax
ifrns3:
	movl	%eax,fnumb
	xorl	%eax,%eax
	movl	cfloat,%ebx
	cmpl	%ebx,bfloat
	ja	ifrfs3
	cmpl	%ebx,bvect
	jbe	ifrfs3
ifrfs1:
	movl	%eax,(%ebx)
	movl	%ebx,%eax
	addl	$8,%ebx
	cmpl	%ebx,bvect
	ja	ifrfs1
ifrfs3:
	movl	%eax,ffloat
	movl	%esi,%eax
	movl	cvect,%ebx
ifrvs1:
	movl	%eax,(%ebx)
	movl	%ebx,%eax
	addl	$8,%ebx
	cmpl	%ebx,bstrg
	ja	ifrvs1
	movl	%eax,fvect
	movl	%esi,%eax
	movl	cstrg,%ebx
ifrss1:
	movl	%eax,(%ebx)
	movl	%ebx,%eax
	addl	$8,%ebx
	cmpl	%ebx,%esi
	ja	ifrss1
	movl	%eax,fstrg
	movl	filiz,%eax
	orw	%ax,%ax
	je	initf9
	cmpw	$0,filit
	je	initf9
	movl	filin,%ebx
	calll	crastrg
	calll	restcori
initf9:
	movl	csymb,%ebx
	jmp	ifrsy2
ifrsy1:
	movl	%ebx,20(%eax)
ifrsy2:
	movl	%ebx,%eax
	addl	$32,%ebx
	cmpl	%ebx,%edi
	ja	ifrsy1
ifrsy3:
	movl	$0,20(%eax)
	movl	csymb,%ebp
	movl	%ebp,fsymb
	movl	%esi,%eax
	movl	ccons,%ebx
ifrls1:
	movl	%esi,(%ebx)
	movl	%eax,4(%ebx)
	movl	%ebx,%ebp
	subl	%edi,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbin,%eax
	btrl	%ebp,(%eax)
	popl	%eax
	movl	%ebx,%eax
	addl	$8,%ebx
	cmpl	%ebx,econs
	ja	ifrls1
	movl	%eax,fcons
	movl	%esi,savea1
	movl	%esi,savea2
	movl	%esi,savea3
	movl	%esi,savea4
	movl	$997,%eax
	movl	%esi,%ebx
	calll	makevect
	movl	%eax,hashtab
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	4(%ebp),%eax
	jmp	inhas2
inhas1:
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	%eax,8(%ebp,%eax,4)
inhas2:
	decw	%ax
	jge	inhas1
	xorl	%eax,%eax
	movl	$pnmac1175,%ebx
	movl	$zvoid,%ecx
	calll	inicst
	movl	zvoid,%ebp
	movl	%ebp,12(%eax)
	movw	$128,26(%eax)
	movl	$7,%eax
	movl	$pnmac1176,%ebx
	movl	$zundef,%ecx
	calll	inicst
	movl	$3,%eax
	movl	$pnmac1177,%ebx
	movl	$znewnil,%ecx
	calll	inicst
	movl	$1,%eax
	movl	$pnmac1178,%ebx
	movl	$zt,%ecx
	calll	inicst
	movl	zvoid,%ebp
	movl	%ebp,cpkgc
	movl	znewnil,%eax
	movl	zvoid,%ebp
	movl	%ebp,12(%eax)
	movl	zvoid,%ebp
	movl	%ebp,(%eax)
	movl	zundef,%eax
	movl	zvoid,%ebp
	movl	%ebp,12(%eax)
	movl	zt,%eax
	movl	zvoid,%ebp
	movl	%ebp,12(%eax)
	movl	fsymb,%ebp
	movl	%ebp,bvar
	movl	$11,%eax
	movl	$pnmac1179,%ebx
	movl	$zsyspkgc,%ecx
	calll	inicst
	movl	%esi,(%eax)
	movl	$6,%eax
	movl	$pnmac1180,%ebx
	movl	$itsoft,%ecx
	movl	$zitsoft,%edx
	pushl	$3
	calll	inisymb
	movl	$12,%eax
	movl	$pnmac1181,%ebx
	movl	$supitsof,%ecx
	movl	$zsupitsof,%edx
	pushl	$4
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1182,%ebx
	movl	$llsystem,%ecx
	movl	$zllsystem,%edx
	pushl	$1
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac1183,%ebx
	movl	$zsysobslt,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1184,%ebx
	movl	$zapollo,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac1185,%ebx
	movl	$zvaxunix,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1186,%ebx
	movl	$zvaxvms,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1187,%ebx
	movl	$zcpm86,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1188,%ebx
	movl	$zpcdos,%ecx
	calll	inicst
	movl	$3,%eax
	movl	$pnmac1189,%ebx
	movl	$zksun,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1190,%ebx
	movl	$zhp9000,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1191,%ebx
	movl	$zibmrt,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1192,%ebx
	movl	$zunigraph,%ecx
	calll	inicst
	movl	$1,%eax
	movl	$pnmac1193,%ebx
	movl	$zsllc,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac1194,%ebx
	movl	$zlews,%ecx
	calll	inicst
	movl	$4,%eax
	movl	$pnmac1195,%ebx
	movl	$zsun4,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1196,%ebx
	movl	$zatari,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1197,%ebx
	movl	$zmacaux,%ecx
	calll	inicst
	movl	$10,%eax
	movl	$pnmac1198,%ebx
	movl	$zdecstation,%ecx
	calll	inicst
	movl	$4,%eax
	movl	$pnmac1199,%ebx
	movl	$zsony,%ecx
	calll	inicst
	movl	$4,%eax
	movl	$pnmac1200,%ebx
	movl	$zm88k,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac1201,%ebx
	movl	$zsun386i,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1202,%ebx
	movl	$zaix386,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1203,%ebx
	movl	$zix386,%ecx
	calll	inicst
	movl	$9,%eax
	movl	$pnmac1204,%ebx
	movl	$zsonyr3000,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1205,%ebx
	movl	$zllmips,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1206,%ebx
	movl	$zrs6000,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1207,%ebx
	movl	$zsco386,%ecx
	calll	inicst
	movl	$3,%eax
	movl	$pnmac1208,%ebx
	movl	$zos2,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1209,%ebx
	movl	$zhp9400,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1210,%ebx
	movl	$ziris4d,%ecx
	calll	inicst
	movl	$8,%eax
	movl	$pnmac1211,%ebx
	movl	$zsvr4i386,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1212,%ebx
	movl	$zos220,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac1213,%ebx
	movl	$zchp9700,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1214,%ebx
	movl	$zcsun4,%ecx
	calll	inicst
	movl	$8,%eax
	movl	$pnmac1215,%ebx
	movl	$zcetia88k,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac1216,%ebx
	movl	$zsun4mbc,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1217,%ebx
	movl	$zhp9700,%ecx
	calll	inicst
	movl	$9,%eax
	movl	$pnmac1218,%ebx
	movl	$zcalphavms,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1219,%ebx
	movl	$znt386,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac1220,%ebx
	movl	$znext68k,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac1221,%ebx
	movl	$zsolaris,%ecx
	calll	inicst
	movl	$9,%eax
	movl	$pnmac1222,%ebx
	movl	$zcalphaosf,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac1223,%ebx
	movl	$zciris4d,%ecx
	calll	inicst
	movl	$8,%eax
	movl	$pnmac1224,%ebx
	movl	$zalphaosf,%ecx
	calll	inicst
	movl	$10,%eax
	movl	$pnmac1225,%ebx
	movl	$zsolaris386,%ecx
	calll	inicst
	movl	$11,%eax
	movl	$pnmac1226,%ebx
	movl	$zunixware386,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1227,%ebx
	movl	$zirix5,%ecx
	calll	inicst
	movl	$8,%eax
	movl	$pnmac1228,%ebx
	movl	$zalphavms,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1229,%ebx
	movl	$zlinux,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1230,%ebx
	movl	$zwin95,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1231,%ebx
	movl	$zcygwin,%ecx
	calll	inicst
	movl	$4,%eax
	movl	$pnmac1232,%ebx
	movl	$zhp11,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1233,%ebx
	movl	$zwin32,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1234,%ebx
	movl	$zwin64,%ecx
	calll	inicst
	movl	$8,%eax
	movl	$pnmac1235,%ebx
	movl	$zx86macos,%ecx
	calll	inicst
	movl	$10,%eax
	movl	$pnmac1236,%ebx
	movl	$zlinuxsparc,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac1237,%ebx
	movl	$zfreebsd,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1238,%ebx
	movl	$znetbsd,%ecx
	calll	inicst
	movl	$80,%eax
	movl	zsysobslt,%ebx
	calll	makevect
	movl	%eax,tabsyst
	movl	(%eax),%ebp
	pushl	zapollo
	popl	24(%ebp)
	movl	(%eax),%ebp
	pushl	zvaxunix
	popl	40(%ebp)
	movl	(%eax),%ebp
	pushl	zvaxvms
	popl	44(%ebp)
	movl	(%eax),%ebp
	pushl	zcpm86
	popl	60(%ebp)
	movl	(%eax),%ebp
	pushl	zpcdos
	popl	64(%ebp)
	movl	(%eax),%ebp
	pushl	zksun
	popl	96(%ebp)
	movl	(%eax),%ebp
	pushl	zhp9000
	popl	100(%ebp)
	movl	(%eax),%ebp
	pushl	zibmrt
	popl	112(%ebp)
	movl	(%eax),%ebp
	pushl	zunigraph
	popl	124(%ebp)
	movl	(%eax),%ebp
	pushl	zsllc
	popl	140(%ebp)
	movl	(%eax),%ebp
	pushl	zlews
	popl	144(%ebp)
	movl	(%eax),%ebp
	pushl	zsun4
	popl	148(%ebp)
	movl	(%eax),%ebp
	pushl	zatari
	popl	152(%ebp)
	movl	(%eax),%ebp
	pushl	zmacaux
	popl	160(%ebp)
	movl	(%eax),%ebp
	pushl	zdecstation
	popl	164(%ebp)
	movl	(%eax),%ebp
	pushl	zsony
	popl	168(%ebp)
	movl	(%eax),%ebp
	pushl	zm88k
	popl	172(%ebp)
	movl	(%eax),%ebp
	pushl	zsun386i
	popl	176(%ebp)
	movl	(%eax),%ebp
	pushl	zaix386
	popl	180(%ebp)
	movl	(%eax),%ebp
	pushl	zix386
	popl	184(%ebp)
	movl	(%eax),%ebp
	pushl	zsonyr3000
	popl	188(%ebp)
	movl	(%eax),%ebp
	pushl	zllmips
	popl	192(%ebp)
	movl	(%eax),%ebp
	pushl	zrs6000
	popl	196(%ebp)
	movl	(%eax),%ebp
	pushl	zsco386
	popl	200(%ebp)
	movl	(%eax),%ebp
	pushl	zos2
	popl	204(%ebp)
	movl	(%eax),%ebp
	pushl	zhp9400
	popl	208(%ebp)
	movl	(%eax),%ebp
	pushl	ziris4d
	popl	212(%ebp)
	movl	(%eax),%ebp
	pushl	zsvr4i386
	popl	216(%ebp)
	movl	(%eax),%ebp
	pushl	zos220
	popl	220(%ebp)
	movl	(%eax),%ebp
	pushl	zchp9700
	popl	224(%ebp)
	movl	(%eax),%ebp
	pushl	zcsun4
	popl	228(%ebp)
	movl	(%eax),%ebp
	pushl	zcetia88k
	popl	232(%ebp)
	movl	(%eax),%ebp
	pushl	zsun4mbc
	popl	236(%ebp)
	movl	(%eax),%ebp
	pushl	zhp9700
	popl	240(%ebp)
	movl	(%eax),%ebp
	pushl	zcalphavms
	popl	244(%ebp)
	movl	(%eax),%ebp
	pushl	znt386
	popl	248(%ebp)
	movl	(%eax),%ebp
	pushl	znext68k
	popl	252(%ebp)
	movl	(%eax),%ebp
	pushl	zsolaris
	popl	256(%ebp)
	movl	(%eax),%ebp
	pushl	zcalphaosf
	popl	260(%ebp)
	movl	(%eax),%ebp
	pushl	zciris4d
	popl	264(%ebp)
	movl	(%eax),%ebp
	pushl	zalphaosf
	popl	268(%ebp)
	movl	(%eax),%ebp
	pushl	zsolaris386
	popl	272(%ebp)
	movl	(%eax),%ebp
	pushl	zunixware386
	popl	276(%ebp)
	movl	(%eax),%ebp
	pushl	zirix5
	popl	280(%ebp)
	movl	(%eax),%ebp
	pushl	zalphavms
	popl	284(%ebp)
	movl	(%eax),%ebp
	pushl	zlinux
	popl	288(%ebp)
	movl	(%eax),%ebp
	pushl	zwin95
	popl	292(%ebp)
	movl	(%eax),%ebp
	pushl	zcygwin
	popl	296(%ebp)
	movl	(%eax),%ebp
	pushl	zhp11
	popl	300(%ebp)
	movl	(%eax),%ebp
	pushl	zwin32
	popl	304(%ebp)
	movl	(%eax),%ebp
	pushl	zwin64
	popl	308(%ebp)
	movl	(%eax),%ebp
	pushl	zx86macos
	popl	312(%ebp)
	movl	(%eax),%ebp
	pushl	zlinuxsparc
	popl	316(%ebp)
	movl	(%eax),%ebp
	pushl	zfreebsd
	popl	320(%ebp)
	movl	(%eax),%ebp
	pushl	znetbsd
	popl	324(%ebp)
	movl	tabsyst,%ebp
	movl	(%ebp),%ebp
	pushl	%edi
	movl	%ebp,%edi
	movl	nbsyst,%ebp
	leal	8(%edi,%ebp,4),%ebp
	popl	%edi
	movl	(%ebp),%eax
	movl	%eax,cstsyste
	movl	tabsyst,%ebp
	movl	(%ebp),%ebp
	movl	4(%ebp),%eax
	decw	%ax
clrsyst:
	movl	tabsyst,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%eax,4),%ebx
	movl	zundef,%ebp
	movl	%ebp,(%ebx)
	decw	%ax
	jg	clrsyst
	movl	$7,%eax
	movl	$pnmac1239,%ebx
	movl	$llversion,%ecx
	movl	$zllversion,%edx
	pushl	$1
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1240,%ebx
	movl	$znaversion,%ecx
	calll	inicst
	movl	$3,%eax
	movl	$pnmac1241,%ebx
	movl	$stop,%ecx
	movl	$zstop,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1242,%ebx
	movl	$llatend,%ecx
	movl	$zllatend,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1243,%ebx
	movl	$herald,%ecx
	movl	$zherald,%edx
	pushl	$1
	calll	inisymb
	calll	ini_top
	calll	ini_gc
	calll	ini_pio
	calll	ini_read
	calll	ini_mach
	calll	ini_print
	calll	ini_eval
	calll	ini_spec
	calll	ini_ctl
	calll	ini_cad
	calll	ini_sym
	calll	ini_std
	calll	ini_nbs
	calll	ini_snb
	calll	ini_chr
	calll	ini_str
	calll	ini_ext
	calll	ini_bll
	movl	%esi,%eax
	movl	28(%eax),%eax
	movl	zstring000,%ebp
	movl	%ebp,4(%eax)
	movl	bstrg,%eax
	movl	zstring000,%ebx
forcstr2:
	movl	%ebx,4(%eax)
	addl	$8,%eax
	cmpl	%eax,%esi
	ja	forcstr2
	movl	bvect,%eax
	movl	zvector,%ebx
forcvec2:
	movl	%ebx,4(%eax)
	addl	$8,%eax
	cmpl	%eax,bstrg
	ja	forcvec2
	movl	%esi,%eax
topmin:
	cmpw	$0,llban
	jne	imin2
	calll	herald
imin2:
	movl	filiz,%eax
	orw	%ax,%ax
	je	imin4
	movl	filin,%ebx
	calll	crastrg
	cmpw	$0,filit
	je	imin3
	calll	restcori
	jmp	imin4
imin3:
	calll	input
imin4:
reenter:
	movl	bstack,%esp
	movl	mstack1,%ebp
	movl	%ebp,mstack
	movl	$0,itcount
	movl	$1,itstate
	jmp	systop
theend:
	# Prepare a C function call with 2 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	$lab_m__1
	pushl	$25
	calll	ttyout
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	# Prepare a C function call with 0 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	calll	ttycrlf
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	calll	ll_exit
	ret	

	# FENTRY itsoft
	.align	4
itsoft:
	jmp	llitsoft

	# FENTRY supitsof
	.align	4
supitsof:
	jmp	llsupit

	# FENTRY llversion
	.align	4
llversion:
	movl	znaversion,%eax
	movl	28(%eax),%eax
	# CVATOF
	pushl	%ebp
	movl	(%eax),%ebp
	addl	$8,%ebp
	movl	%ebp,crwork
	popl	%ebp
	movl	crwork,%ebp
	movb	$0,5(%ebp)
	# Prepare a C function call with 1 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	crwork
	calll	llrt_cvatof
	addl	$4,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
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
	# CVATOF
llversr:
	ret	

	# FENTRY llsystem
	.align	4
llsystem:
	movl	cstsyste,%eax
	ret	

	# FENTRY stop
	.align	4
stop:
	cmpw	$1,%dx
	jg	stop6
	pushl	%edx
	pushl	%ecx
	pushl	%ebx
	pushl	%eax
	orw	%dx,%dx
	je	stop3
	movl	16(%esp),%ebx
	cmpl	%edi,fcons
	jb	l__3
l1__3:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	jmp	stop4
stop3:
	movl	%esi,%ebx
stop4:
	movl	zllatend,%eax
	calll	itsoft
	popl	%eax
	popl	%ebx
	popl	%ecx
	popl	%edx
	orw	%dx,%dx
	je	theend
	popl	%eax
	cmpl	%esi,%eax
	je	stop5
	calll	exwer
stop5:
	calll	ll_exit
	ret	
stop6:
	xorl	%eax,%eax
	movl	zstop,%ebx
	jmp	errwna

	# FENTRY llatend
	.align	4
llatend:
	cmpw	$1,%dx
	jg	llatend2
	cmpw	$1,%dx
	je	llatend1
	movl	%esi,%eax
	ret	
llatend1:
	popl	%eax
	ret	
llatend2:
	xorl	%eax,%eax
	movl	zllatend,%ebx
	jmp	errwna

	# FENTRY herald
	.align	4
herald:
	# Prepare a C function call with 2 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	$lab_m__4
	pushl	$52
	calll	ttyout
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	movl	cstsyste,%eax
	calll	strgsymb
	movl	(%eax),%ebp
	movl	4(%ebp),%ebx
	# Entering TTYSTRG
	pushl	%ebp
	movl	(%eax),%ebp
	addl	$8,%ebp
	movl	%ebp,crwork
	popl	%ebp
	# Prepare a C function call with 2 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	crwork
	pushl	%ebx
	calll	ttyout
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	# Leaving TTYSTRG
	# Prepare a C function call with 2 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	$lab_m__5
	pushl	$1
	calll	ttyout
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	# Prepare a C function call with 0 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	calll	ttycrlf
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	movl	%esi,%eax
	ret	
l__3:
	calll	gccons
	jmp	l1__3
