/* GELL 15.26: include file for the module: "macroch" */
/*             translation done:            "Sat Oct   7 17 20:53:16 " */

/*	impure LLM3 predefined	*/
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GMsyspkgc;
extern Ptr GIfcons;
extern Ptr GImstack;
extern Ptr GIbvar;
extern Ptr GMt;
extern Ptr GMllexpr;
extern Ptr GItabch;
extern Ptr GMlread;
extern Ptr GIibase;
extern Ptr GIcpkgc;
extern Ptr GMstatrc;
extern Ptr GIsavea4;
extern Ptr GMfunction;
extern Ptr GMquote;
extern Ptr GMnconc;
extern Ptr GMappend;
extern Ptr GMmcons;
extern Ptr GMllcons;
extern Ptr GMfncons;
extern Ptr GMlist;
extern Ptr GMvector;
extern Ptr GItabctyp = 0;
extern Ptr GItabccod = 0;
Ptr GMdmc = 0;
Ptr GMdms = 0;
Ptr GMdefsharp = 0;
Ptr GMllsharp = 0;
Ptr GMsharp = 0;
Ptr GMllcolon = 0;
Ptr GMuser = 0;
Ptr GMllhat = 0;
Ptr GMlllbra = 0;
Ptr GMllrbra = 0;
Ptr GMllquote = 0;
Ptr GMllbquote = 0;
Ptr GMllcomma = 0;
Ptr GMcommaat = 0;
Ptr GMcommadot = 0;
Ptr GMsysharp = 0;
Ptr GMsyscol = 0;
Ptr GMshrpdot = 0;
Ptr GMshrpplu = 0;
Ptr GMshrpmoi = 0;
Ptr GMshrpquo = 0;
Ptr GMshrpsla = 0;
Ptr GMshrpbak = 0;
Ptr GMshrphat = 0;
Ptr GMshrpcol = 0;
Ptr GMshrpdol = 0;
Ptr GMshrpprc = 0;
Ptr GMshrpgui = 0;
Ptr GMshrpbar = 0;
Ptr GMshrppar = 0;
Ptr GMshrpbra = 0;
Ptr GMshrprad = 0;
Ptr GMshrpval = 0;
Ptr GMslowbyte = 0;
Ptr GMtypech = 0;
Ptr GMtypecod = 0;
Ptr GMcnull = 0;
Ptr GMcbcom = 0;
Ptr GMcecom = 0;
Ptr GMcquote = 0;
Ptr GMclpar = 0;
Ptr GMcrpar = 0;
Ptr GMcdot = 0;
Ptr GMcsep = 0;
Ptr GMcpackage = 0;
Ptr GMcsplice = 0;
Ptr GMcmacro = 0;
Ptr GMcstring = 0;
Ptr GMcpname = 0;
Ptr GMcsymb = 0;
Ptr GMcmsymb = 0;
#define GFdmc 6
#define GFdms 6
#define GFdefsharp 6
#define GFllquote 1
#define GFllcomma 1
#define GFllbquote 1
#define GFllsharp 1
#define GFshrpdot 1
#define GFshrpplu 1
#define GFshrpmoi 1
#define GFshrpquo 1
#define GFshrpsla 1
#define GFshrpbak 1
#define GFshrphat 1
#define GFshrpcol 1
#define GFshrpdol 1
#define GFshrpprc 1
#define GFshrprad 2
#define GFshrpgui 1
#define GFshrpbar 1
#define GFshrppar 1
#define GFshrpbra 1
#define GFllcolon 1
#define GFllhat 1
#define GFlllbra 1
#define GFllrbra 1
#define GFtypech 5
#define GFtypecod 5

/*	LLM3 functions	*/
extern Ptr GXunbind7(void), GXunbind5(void), GXunbind3(void), GXunbind1(void);
extern Ptr GXpopja4(void), GXpopj9(void), GXpopj8(void), GXpopj7(void);
extern Ptr GXpopj6(void), GXpopj5(void), GXpopj4(void), GXpopj3(void);
extern Ptr GXpopj2(void), GXpopj1(void), GXpopj0(void), GXtypecod(void);
extern Ptr GXtypech(void), GXllrbra(void), GXlllbra(void), GXllhat(void);
extern Ptr GXllcolon(void), GXshrpbra(void), GXshrppar(void), GXshrpbar(void);
extern Ptr GXshrpgui(void), GXshrprad(void), GXshrpprc(void), GXshrpdol(void);
extern Ptr GXshrpcol(void), GXshrphat(void), GXshrpbak(void), GXshrpsla(void);
extern Ptr GXshrpquo(void), GXshrpmoi(void), GXshrpplu(void), GXshrpdot(void);
extern Ptr GXllsharp(void), GXllbquote(void), GXllcomma(void), GXllquote(void);
extern Ptr GXdefsharp(void), GXdms(void), GXdmc(void), GXini_mach(void);
extern Ptr GXmakevect(void), GXstringa1(void), GXkwote(void), GXlist(void);
extern Ptr GXlllength(void), GXnreverse(void), GXgetprop(void), GXsetfn(void);
extern Ptr GXgetfns(void), GXllde(void), GXsysprot(void), GXevala1(void);
extern Ptr GXffuncall(void), GXbase10p(void), GXreaddltd(void), GXrdpkgc2(void);
extern Ptr GXread2(void), GXgetcv(void), GXrereada4(void), GXlread(void);
extern Ptr GXasciii(void), GXgetch(void), GXreadi(void), GXtrysympk(void);
extern Ptr GXinicst(void), GXinisymb(void), GXgcnumb(void), GXgcfloat(void);
extern Ptr GXgccons(void), GXerrsym(void), GXerrsxt(void), GXerroob(void);
extern Ptr GXerrwna(void), GXerrudv(void), GXerrudf(void), GXerrnia(void);
extern Ptr GXevalan(void), GXevalt(void);

/*	intern functions	*/
static Ptr GLmacroch_1(void), GLmacroch_2(void), GLmacroch_3(void), GLmacroch_4(void);
static Ptr GLmacroch_5(void), GLmacroch_6(void), GLmacroch_7(void), GLmacroch_8(void);
static Ptr GLmacroch_9(void), GLmacroch_10(void), GLmacroch_11(void), GLmacroch_12(void);
static Ptr GLmacroch_13(void), GLmacroch_14(void), GLmacroch_15(void), GLmacroch_16(void);
static Ptr GLmacroch_17(void), GLmacroch_18(void), GLmacroch_19(void), GLmacroch_20(void);
static Ptr GLmacroch_21(void), GLmacroch_22(void), GLmacroch_23(void), GLmacroch_24(void);
static Ptr GLmacroch_25(void), GLmacroch_26(void), GLmacroch_27(void), GLmacroch_28(void);
static Ptr GLmacroch_29(void), GLmacroch_30(void), GLmacroch_31(void), GLmacroch_32(void);
static Ptr GLmacroch_33(void), GLmacroch_34(void), GLmacroch_35(void), GLmacroch_36(void);
static Ptr GLmacroch_37(void), GLmacroch_38(void), GLmacroch_39(void), GLmacroch_40(void);
static Ptr GLmacroch_41(void), GLmacroch_42(void), GLmacroch_43(void), GLmacroch_44(void);
static Ptr GLmacroch_45(void), GLmacroch_46(void), GLmacroch_47(void), GLmacroch_48(void);
static Ptr GLmacroch_49(void), GLmacroch_50(void), GLmacroch_51(void), GLmacroch_52(void);
static Ptr GLmacroch_53(void), GLmacroch_54(void), GLmacroch_55(void), GLmacroch_56(void);
static Ptr GLmacroch_57(void), GLmacroch_58(void), GLmacroch_59(void), GLmacroch_60(void);
static Ptr GLmacroch_61(void), GLmacroch_62(void), GLmacroch_63(void), GLmacroch_64(void);
static Ptr GLmacroch_65(void), GLmacroch_66(void), GLmacroch_67(void), GLmacroch_68(void);
static Ptr GLmacroch_69(void), GLmacroch_70(void), GLmacroch_71(void), GLmacroch_72(void);
static Ptr GLmacroch_73(void), GLmacroch_74(void), GLmacroch_75(void), GLmacroch_76(void);
static Ptr GLmacroch_77(void), GLmacroch_78(void), GLmacroch_79(void), GLmacroch_80(void);
static Ptr GLmacroch_81(void), GLmacroch_82(void), GLmacroch_83(void), GLmacroch_84(void);
static Ptr GLmacroch_85(void), GLmacroch_86(void), GLmacroch_87(void), GLmacroch_88(void);
static Ptr GLmacroch_89(void), GLmacroch_90(void), GLmacroch_91(void), GLmacroch_92(void);
static Ptr GLmacroch_93(void), GLmacroch_94(void), GLmacroch_95(void), GLmacroch_96(void);
static Ptr GLmacroch_97(void), GLmacroch_98(void), GLmacroch_99(void), GLmacroch_100(void);
static Ptr GLmacroch_101(void), GLmacroch_102(void), GLmacroch_103(void), GLmacroch_104(void);
static Ptr GLmacroch_105(void), GLmacroch_106(void);

/*	trace functions	*/
static Ptr GDmacroch_107(void), GDmacroch_108(void), GDmacroch_109(void), GDmacroch_110(void);
static Ptr GDmacroch_111(void), GDmacroch_112(void), GDmacroch_113(void), GDmacroch_114(void);
static Ptr GDmacroch_115(void), GDmacroch_116(void), GDmacroch_117(void), GDmacroch_118(void);
static Ptr GDmacroch_119(void), GDmacroch_120(void), GDmacroch_121(void), GDmacroch_122(void);
static Ptr GDmacroch_123(void), GDmacroch_124(void), GDmacroch_125(void), GDmacroch_126(void);
static Ptr GDmacroch_127(void), GDmacroch_128(void), GDmacroch_129(void), GDmacroch_130(void);
static Ptr GDmacroch_131(void), GDmacroch_132(void), GDmacroch_133(void), GDmacroch_134(void);

static Ptr GYmacroch[33];

static const char GNmacroch[] = "macroch";
static const char GTmacroch[] = "Sat Oct   7 17 20:53:16 ";

static struct GellEntry GWmacroch[] = {
	{GXdmc,		GDmacroch_107,	6},	/* dmc */
	{GXdms,		GDmacroch_108,	6},	/* dms */
	{GXdefsharp,	GDmacroch_109,	6},	/* defsharp */
	{GXllquote,	GDmacroch_110,	1},	/* ' */
	{GXllcomma,	GDmacroch_111,	1},	/* , */
	{GXllbquote,	GDmacroch_112,	1},	/* ` */
	{GXllsharp,	GDmacroch_113,	1},	/* # */
	{GXshrpdot,	GDmacroch_114,	1},	/* . */
	{GXshrpplu,	GDmacroch_115,	1},	/* + */
	{GXshrpmoi,	GDmacroch_116,	1},	/* - */
	{GXshrpquo,	GDmacroch_117,	1},	/* #:gell:' */
	{GXshrpsla,	GDmacroch_118,	1},	/* / */
	{GXshrpbak,	GDmacroch_119,	1},	/* \ */
	{GXshrphat,	GDmacroch_120,	1},	/* #:gell:^ */
	{GXshrpcol,	GDmacroch_121,	1},	/* #:gell:: */
	{GXshrpdol,	GDmacroch_122,	1},	/* $ */
	{GXshrpprc,	GDmacroch_123,	1},	/* % */
	{GXshrprad,	GDmacroch_124,	2},	/* r */
	{GXshrpgui,	GDmacroch_125,	1},	/* " */
	{GXshrpbar,	GDmacroch_126,	1},	/* | */
	{GXshrppar,	GDmacroch_127,	1},	/* ( */
	{GXshrpbra,	GDmacroch_128,	1},	/* #:gell:[ */
	{GXllcolon,	GDmacroch_129,	1},	/* : */
	{GXllhat,	GDmacroch_130,	1},	/* ^ */
	{GXlllbra,	GDmacroch_131,	1},	/* [ */
	{GXllrbra,	GDmacroch_132,	1},	/* ] */
	{GXtypech,	GDmacroch_133,	5},	/* typech */
	{GXtypecod,	GDmacroch_134,	5},	/* typecn */
};

struct GellModule GZmacroch = {
	GELLMODULESTAMP,
	GNmacroch,
	GTmacroch,
	GYmacroch,
	28,
	GWmacroch};
