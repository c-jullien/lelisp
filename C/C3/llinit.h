/* GELL 15.26: include file for the module: "llinit" */
/*             translation done:            "Sat Oct   7 17 20:52:58 " */

/*	impure LLM3 predefined	*/
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GIcpkgc;
extern Ptr GIsavea1;
extern Ptr GIsavea2;
extern Ptr GIsavea3;
extern Ptr GIsavea4;
extern Ptr GMstring;
extern Ptr GMvector;
extern Ptr GIbstack = 0;
extern Ptr GIestack = 0;
extern Ptr GImstack = 0;
extern Ptr GImstack1 = 0;
extern Ptr GImstack2 = 0;
extern Ptr GIbcode = 0;
extern Ptr GIccode = 0;
extern Ptr GIecode = 0;
extern Ptr GIbheap = 0;
extern Ptr GIcheap = 0;
extern Ptr GIeheap = 0;
extern Ptr GIbnumb = 0;
extern Ptr GIcnumb = 0;
extern Ptr GIbfloat = 0;
extern Ptr GIcfloat = 0;
extern Ptr GIbvect = 0;
extern Ptr GIcvect = 0;
extern Ptr GIbstrg = 0;
extern Ptr GIcstrg = 0;
extern Ptr GIbsymb = 0;
extern Ptr GIcsymb = 0;
extern Ptr GIbvar = 0;
extern Ptr GIbcons = 0;
extern Ptr GIccons = 0;
extern Ptr GIbold = 0;
extern Ptr GIeold = 0;
extern Ptr GIfnumb = 0;
extern Ptr GIffloat = 0;
extern Ptr GIfstrg = 0;
extern Ptr GIfvect = 0;
extern Ptr GIfsymb = 0;
extern Ptr GIfcons = 0;
extern Ptr GIfiliz = 0;
extern Ptr GIfilit = 0;
extern Ptr GIfilin = 0;
extern Ptr GIllban = 0;
extern Ptr GInbsyst = 0;
extern Ptr GImaxchan = 0;
extern Ptr GIitstate = 0;
extern Ptr GIitcount = 0;
extern Ptr GIhashtab = 0;
extern Ptr GItabsyst = 0;
extern Ptr GIcstsyste = 0;
Ptr GMvoid = 0;
Ptr GMundef = 0;
Ptr GMnewnil = 0;
Ptr GMt = 0;
Ptr GMsyspkgc = 0;
Ptr GMitsoft = 0;
Ptr GMsupitsof = 0;
Ptr GMllsystem = 0;
Ptr GMsysobslt = 0;
Ptr GMapollo = 0;
Ptr GMvaxunix = 0;
Ptr GMvaxvms = 0;
Ptr GMcpm86 = 0;
Ptr GMpcdos = 0;
Ptr GMksun = 0;
Ptr GMhp9000 = 0;
Ptr GMibmrt = 0;
Ptr GMunigraph = 0;
Ptr GMsllc = 0;
Ptr GMlews = 0;
Ptr GMsun4 = 0;
Ptr GMatari = 0;
Ptr GMmacaux = 0;
Ptr GMdecstation = 0;
Ptr GMsony = 0;
Ptr GMm88k = 0;
Ptr GMsun386i = 0;
Ptr GMaix386 = 0;
Ptr GMix386 = 0;
Ptr GMsonyr3000 = 0;
Ptr GMllmips = 0;
Ptr GMrs6000 = 0;
Ptr GMsco386 = 0;
Ptr GMos2 = 0;
Ptr GMhp9400 = 0;
Ptr GMiris4d = 0;
Ptr GMsvr4i386 = 0;
Ptr GMos220 = 0;
Ptr GMchp9700 = 0;
Ptr GMcsun4 = 0;
Ptr GMcetia88k = 0;
Ptr GMsun4mbc = 0;
Ptr GMhp9700 = 0;
Ptr GMcalphavms = 0;
Ptr GMnt386 = 0;
Ptr GMnext68k = 0;
Ptr GMsolaris = 0;
Ptr GMcalphaosf = 0;
Ptr GMciris4d = 0;
Ptr GMalphaosf = 0;
Ptr GMsolaris386 = 0;
Ptr GMunixware386 = 0;
Ptr GMirix5 = 0;
Ptr GMalphavms = 0;
Ptr GMlinux = 0;
Ptr GMwin95 = 0;
Ptr GMcygwin = 0;
Ptr GMhp11 = 0;
Ptr GMwin32 = 0;
Ptr GMwin64 = 0;
Ptr GMx86macos = 0;
Ptr GMlinuxsparc = 0;
Ptr GMfreebsd = 0;
Ptr GMnetbsd = 0;
Ptr GMllversion = 0;
Ptr GMnaversion = 0;
Ptr GMstop = 0;
Ptr GMllatend = 0;
Ptr GMherald = 0;
#define GFitsoft 3
#define GFsupitsof 4
#define GFllversion 1
#define GFllsystem 1
#define GFstop 5
#define GFllatend 5
#define GFherald 1

/*	LLM3 functions	*/
extern Ptr GXunbind7(void), GXunbind5(void), GXunbind3(void), GXunbind1(void);
extern Ptr GXpopja4(void), GXpopj9(void), GXpopj8(void), GXpopj7(void);
extern Ptr GXpopj6(void), GXpopj5(void), GXpopj4(void), GXpopj3(void);
extern Ptr GXpopj2(void), GXpopj1(void), GXpopj0(void), GXherald(void);
extern Ptr GXllatend(void), GXsupitsof(void), GXstop(void), GXllsystem(void);
extern Ptr GXllversion(void), GXtheend(void), GXreenter(void), GXllinit(void);
extern Ptr GXitsoft(void), GXini_bll(void), GXini_ext(void), GXini_chr(void);
extern Ptr GXstrgallc(void), GXstrgsymb(void), GXmakevect(void), GXini_str(void);
extern Ptr GXini_snb(void), GXini_nbs(void), GXini_std(void), GXini_sym(void);
extern Ptr GXini_cad(void), GXini_ctl(void), GXini_spec(void), GXllsupit(void);
extern Ptr GXllitsoft(void), GXini_eval(void), GXini_print(void), GXini_mach(void);
extern Ptr GXcrastrg(void), GXinicst(void), GXinisymb(void), GXistdsym(void);
extern Ptr GXini_read(void), GXrestcori(void), GXinput(void), GXini_pio(void);
extern Ptr GXgcnumb(void), GXgcfloat(void), GXgccons(void), GXini_gc(void);
extern Ptr GXerrwna(void), GXini_top(void), GXsystop(void), GXexwer(void);
extern Ptr GXll_exit(void), GXevalan(void), GXevalt(void);

/*	intern functions	*/
static Ptr GLllinit_1(void), GLllinit_2(void), GLllinit_3(void), GLllinit_4(void);
static Ptr GLllinit_5(void), GLllinit_6(void), GLllinit_7(void), GLllinit_8(void);
static Ptr GLllinit_9(void), GLllinit_10(void), GLllinit_11(void), GLllinit_12(void);
static Ptr GLllinit_13(void), GLllinit_14(void), GLllinit_15(void), GLllinit_16(void);
static Ptr GLllinit_17(void), GLllinit_18(void), GLllinit_19(void), GLllinit_20(void);
static Ptr GLllinit_21(void), GLllinit_22(void), GLllinit_23(void), GLllinit_24(void);
static Ptr GLllinit_25(void), GLllinit_26(void), GLllinit_27(void), GLllinit_28(void);
static Ptr GLllinit_29(void);

/*	trace functions	*/
static Ptr GDllinit_30(void), GDllinit_31(void), GDllinit_32(void), GDllinit_33(void);
static Ptr GDllinit_34(void), GDllinit_35(void), GDllinit_36(void);

static Ptr GYllinit[12];

static const char GNllinit[] = "llinit";
static const char GTllinit[] = "Sat Oct   7 17 20:52:58 ";

static struct GellEntry GWllinit[] = {
	{GXitsoft,	GDllinit_30,	3},	/* itsoft */
	{GXsupitsof,	GDllinit_31,	4},	/* super-itsoft */
	{GXllversion,	GDllinit_32,	1},	/* version */
	{GXllsystem,	GDllinit_33,	1},	/* system */
	{GXstop,	GDllinit_34,	5},	/* end */
	{GXllatend,	GDllinit_35,	5},	/* at-end */
	{GXherald,	GDllinit_36,	1},	/* herald */
};

struct GellModule GZllinit = {
	GELLMODULESTAMP,
	GNllinit,
	GTllinit,
	GYllinit,
	7,
	GWllinit};
