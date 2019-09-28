/* GELL 15.26: include file for the module: "number" */
/*             translation done:            "Sat Oct   7 17 20:53:44 " */

/*	impure LLM3 predefined	*/
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GMundef;
extern Ptr GIfcons;
extern Ptr GIbvar;
extern Ptr GMt;
extern Ptr GMvoid;
extern Ptr GMsyspkgc;
extern Ptr GImstack;
extern Ptr GMquote;
extern Ptr GImoinsun = 0;
extern Ptr GIfzero = 0;
extern Ptr GIfltun = 0;
extern Ptr GIfltmun = 0;
extern Ptr GIfltimax = 0;
extern Ptr GIfltimin = 0;
extern Ptr GIcpfnt = 0;
Ptr GMsysgen = 0;
Ptr GMnumberp = 0;
Ptr GMintgerp = 0;
Ptr GMrationalp = 0;
Ptr GMllfloat = 0;
Ptr GMllfix = 0;
Ptr GMlltrunc = 0;
Ptr GMgaadd1 = 0;
Ptr GMgasub1 = 0;
Ptr GMgaabs = 0;
Ptr GMgaplus = 0;
Ptr GMgadinv = 0;
Ptr GMgadiff = 0;
Ptr GMgatimes = 0;
Ptr GMgadrev = 0;
Ptr GMgadiv = 0;
Ptr GMgaquomod = 0;
Ptr GMex = 0;
Ptr GMexmod = 0;
Ptr GMgamod = 0;
Ptr GMgacomp = 0;
Ptr GMgaeqen = 0;
Ptr GMganeqn = 0;
Ptr GMgage = 0;
Ptr GMgagt = 0;
Ptr GMgale = 0;
Ptr GMgalt = 0;
Ptr GMzerop = 0;
Ptr GMplusp = 0;
Ptr GMminusp = 0;
Ptr GMmin = 0;
Ptr GMmax = 0;
Ptr GMllsin = 0;
Ptr GMllcos = 0;
Ptr GMllasin = 0;
Ptr GMllacos = 0;
Ptr GMllatan = 0;
Ptr GMllexp = 0;
Ptr GMlllog = 0;
Ptr GMlllog10 = 0;
Ptr GMllpower = 0;
Ptr GMllsqrt = 0;
Ptr GMllfixmax = 0;
Ptr GMllfixmin = 0;
Ptr GMllminus0 = 0;
#define GFnumberp 2
#define GFintgerp 2
#define GFrationalp 2
#define GFllfloat 2
#define GFlltrunc 2
#define GFllfix 2
#define GFgaadd1 2
#define GFgasub1 2
#define GFgaabs 2
#define GFgaplus 5
#define GFgatimes 5
#define GFgadinv 2
#define GFgadiff 5
#define GFgadrev 2
#define GFgadiv 5
#define GFgaquomod 3
#define GFgamod 3
#define GFgacomp 3
#define GFzerop 2
#define GFminusp 2
#define GFplusp 2
#define GFgaeqen 5
#define GFganeqn 3
#define GFgagt 5
#define GFgage 5
#define GFgalt 5
#define GFgale 5
#define GFmin 5
#define GFmax 5
#define GFllsin 2
#define GFllcos 2
#define GFllasin 2
#define GFllacos 2
#define GFllatan 2
#define GFllexp 2
#define GFlllog 2
#define GFlllog10 2
#define GFllpower 3
#define GFllsqrt 2
#define GFllfixmax 1
#define GFllfixmin 1
#define GFllminus0 1

/*	LLM3 functions	*/
extern Ptr GXunbind7(void), GXunbind5(void), GXunbind3(void), GXunbind1(void);
extern Ptr GXpopja4(void), GXpopj9(void), GXpopj8(void), GXpopj7(void);
extern Ptr GXpopj6(void), GXpopj5(void), GXpopj4(void), GXpopj3(void);
extern Ptr GXpopj2(void), GXpopj1(void), GXpopj0(void), GXllminus0(void);
extern Ptr GXllfixmin(void), GXllfixmax(void), GXlllog10(void), GXmax(void);
extern Ptr GXmin(void), GXgale(void), GXgage(void), GXganeqn(void);
extern Ptr GXplusp(void), GXminusp(void), GXzerop(void), GXgadiff(void);
extern Ptr GXgatimes(void), GXgaplus(void), GXrationalp(void), GXbangen1(void);
extern Ptr GXgamod(void), GXnumberp(void), GXintgerp(void), GXgadrev(void);
extern Ptr GXgaabs(void), GXgaquomod(void), GXgasub1(void), GXgaadd1(void);
extern Ptr GXgagt(void), GXgalt(void), GXgaeqen(void), GXgacomp(void);
extern Ptr GXllsqrt(void), GXllpower(void), GXlllog(void), GXllexp(void);
extern Ptr GXllatan(void), GXllacos(void), GXllasin(void), GXllcos(void);
extern Ptr GXllsin(void), GXlltrunc(void), GXllfloat(void), GXllfix(void);
extern Ptr GXgadiv(void), GXgadinv(void), GXgatim2i(void), GXgadiff2i(void);
extern Ptr GXgaplus2i(void), GXgaeqn(void), GXini_nbs(void), GXffsymbol(void);
extern Ptr GXnreverse(void), GXgetfns(void), GXffuncall(void), GXapply(void);
extern Ptr GXevala1(void), GXevalcar(void), GXinicst(void), GXinisymb(void);
extern Ptr GXgcnumb(void), GXgcfloat(void), GXgccons(void), GXgettype(void);
extern Ptr GXerr0dv(void), GXerrstl(void), GXerrwna(void), GXerrnva(void);
extern Ptr GXerrnla(void), GXerrnsa(void), GXerrnfa(void), GXerrnia(void);
extern Ptr GXerrnna(void), GXerrgen(void), GXerrfs(void), GXtheend(void);
extern Ptr GXreenter(void), GXevalan(void), GXevalt(void);

/*	intern functions	*/
static Ptr GLnumber_1(void), GLnumber_2(void), GLnumber_3(void), GLnumber_4(void);
static Ptr GLnumber_5(void), GLnumber_6(void), GLnumber_7(void), GLnumber_8(void);
static Ptr GLnumber_9(void), GLnumber_10(void), GLnumber_11(void), GLnumber_12(void);
static Ptr GLnumber_13(void), GLnumber_14(void), GLnumber_15(void), GLnumber_16(void);
static Ptr GLnumber_17(void), GLnumber_18(void), GLnumber_19(void), GLnumber_20(void);
static Ptr GLnumber_21(void), GLnumber_22(void), GLnumber_23(void), GLnumber_24(void);
static Ptr GLnumber_25(void), GLnumber_26(void), GLnumber_27(void), GLnumber_28(void);
static Ptr GLnumber_29(void), GLnumber_30(void), GLnumber_31(void), GLnumber_32(void);
static Ptr GLnumber_33(void), GLnumber_34(void), GLnumber_35(void), GLnumber_36(void);
static Ptr GLnumber_37(void), GLnumber_38(void), GLnumber_39(void), GLnumber_40(void);
static Ptr GLnumber_41(void), GLnumber_42(void), GLnumber_43(void), GLnumber_44(void);
static Ptr GLnumber_45(void), GLnumber_46(void), GLnumber_47(void), GLnumber_48(void);
static Ptr GLnumber_49(void), GLnumber_50(void), GLnumber_51(void), GLnumber_52(void);
static Ptr GLnumber_53(void), GLnumber_54(void), GLnumber_55(void), GLnumber_56(void);
static Ptr GLnumber_57(void), GLnumber_58(void), GLnumber_59(void), GLnumber_60(void);
static Ptr GLnumber_61(void), GLnumber_62(void);

/*	trace functions	*/
static Ptr GDnumber_63(void), GDnumber_64(void), GDnumber_65(void), GDnumber_66(void);
static Ptr GDnumber_67(void), GDnumber_68(void), GDnumber_69(void), GDnumber_70(void);
static Ptr GDnumber_71(void), GDnumber_72(void), GDnumber_73(void), GDnumber_74(void);
static Ptr GDnumber_75(void), GDnumber_76(void), GDnumber_77(void), GDnumber_78(void);
static Ptr GDnumber_79(void), GDnumber_80(void), GDnumber_81(void), GDnumber_82(void);
static Ptr GDnumber_83(void), GDnumber_84(void), GDnumber_85(void), GDnumber_86(void);
static Ptr GDnumber_87(void), GDnumber_88(void), GDnumber_89(void), GDnumber_90(void);
static Ptr GDnumber_91(void), GDnumber_92(void), GDnumber_93(void), GDnumber_94(void);
static Ptr GDnumber_95(void), GDnumber_96(void), GDnumber_97(void), GDnumber_98(void);
static Ptr GDnumber_99(void), GDnumber_100(void), GDnumber_101(void), GDnumber_102(void);
static Ptr GDnumber_103(void), GDnumber_104(void);

static Ptr GYnumber[47];

static const char GNnumber[] = "number";
static const char GTnumber[] = "Sat Oct   7 17 20:53:44 ";

static struct GellEntry GWnumber[] = {
	{GXnumberp,	GDnumber_63,	2},	/* numberp */
	{GXintgerp,	GDnumber_64,	2},	/* integerp */
	{GXrationalp,	GDnumber_65,	2},	/* rationalp */
	{GXllfloat,	GDnumber_66,	2},	/* float */
	{GXlltrunc,	GDnumber_67,	2},	/* truncate */
	{GXllfix,	GDnumber_68,	2},	/* fix */
	{GXgaadd1,	GDnumber_69,	2},	/* 1+ */
	{GXgasub1,	GDnumber_70,	2},	/* 1- */
	{GXgaabs,	GDnumber_71,	2},	/* abs */
	{GXgaplus,	GDnumber_72,	5},	/* + */
	{GXgatimes,	GDnumber_73,	5},	/* * */
	{GXgadinv,	GDnumber_74,	2},	/* 0- */
	{GXgadiff,	GDnumber_75,	5},	/* - */
	{GXgadrev,	GDnumber_76,	2},	/* 1/ */
	{GXgadiv,	GDnumber_77,	5},	/* // */
	{GXgaquomod,	GDnumber_78,	3},	/* quo */
	{GXgamod,	GDnumber_79,	3},	/* modulo */
	{GXgacomp,	GDnumber_80,	3},	/* <?> */
	{GXzerop,	GDnumber_81,	2},	/* zerop */
	{GXminusp,	GDnumber_82,	2},	/* minusp */
	{GXplusp,	GDnumber_83,	2},	/* plusp */
	{GXgaeqen,	GDnumber_84,	5},	/* = */
	{GXganeqn,	GDnumber_85,	3},	/* <> */
	{GXgagt,	GDnumber_86,	5},	/* > */
	{GXgage,	GDnumber_87,	5},	/* >= */
	{GXgalt,	GDnumber_88,	5},	/* < */
	{GXgale,	GDnumber_89,	5},	/* <= */
	{GXmin,		GDnumber_90,	5},	/* min */
	{GXmax,		GDnumber_91,	5},	/* max */
	{GXllsin,	GDnumber_92,	2},	/* sin */
	{GXllcos,	GDnumber_93,	2},	/* cos */
	{GXllasin,	GDnumber_94,	2},	/* asin */
	{GXllacos,	GDnumber_95,	2},	/* acos */
	{GXllatan,	GDnumber_96,	2},	/* atan */
	{GXllexp,	GDnumber_97,	2},	/* exp */
	{GXlllog,	GDnumber_98,	2},	/* log */
	{GXlllog10,	GDnumber_99,	2},	/* log10 */
	{GXllpower,	GDnumber_100,	3},	/* power */
	{GXllsqrt,	GDnumber_101,	2},	/* sqrt */
	{GXllfixmax,	GDnumber_102,	1},	/* most-positive-fixnum */
	{GXllfixmin,	GDnumber_103,	1},	/* most-negative-fixnum */
	{GXllminus0,	GDnumber_104,	1},	/* minus-0-fixnum */
};

struct GellModule GZnumber = {
	GELLMODULESTAMP,
	GNnumber,
	GTnumber,
	GYnumber,
	42,
	GWnumber};
