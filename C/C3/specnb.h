/* GELL 15.26: include file for the module: "specnb" */
/*             translation done:            "Sat Oct   7 17 20:53:47 " */

/*	impure LLM3 predefined	*/
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GMundef;
extern Ptr GIfcons;
extern Ptr GIbvar;
extern Ptr GMt;
extern Ptr GMvoid;
extern Ptr GMsyspkgc;
extern Ptr GImstack;
extern Ptr GIcpkgc;
extern Ptr GMkllcp;
extern Ptr GMquote;
extern Ptr GIfzero;
extern Ptr GMex;
Ptr GMscale = 0;
Ptr GMlognot = 0;
Ptr GMlogand = 0;
Ptr GMlogor = 0;
Ptr GMlogxor = 0;
Ptr GMlogshift = 0;
Ptr GMdpn = 0;
Ptr GMmskfield = 0;
Ptr GMldbyte = 0;
Ptr GMdpbyte = 0;
Ptr GMdpfield = 0;
Ptr GMldbt = 0;
Ptr GModdp = 0;
Ptr GMevenp = 0;
Ptr GMllrandom = 0;
Ptr GMllsrandom = 0;
Ptr GMfloatp = 0;
Ptr GMfixp = 0;
Ptr GMflplus = 0;
Ptr GMfldiff = 0;
Ptr GMfltimes = 0;
Ptr GMflquo = 0;
Ptr GMlladd1 = 0;
Ptr GMllsub1 = 0;
Ptr GMlladd = 0;
Ptr GMllsub = 0;
Ptr GMllmul = 0;
Ptr GMll_div = 0;
Ptr GMllrem = 0;
Ptr GMlleqn = 0;
Ptr GMllneqn = 0;
Ptr GMllge = 0;
Ptr GMllgt = 0;
Ptr GMllle = 0;
Ptr GMlllt = 0;
Ptr GMllimin = 0;
Ptr GMllimax = 0;
Ptr GMllfadd = 0;
Ptr GMllfsub = 0;
Ptr GMllfmul = 0;
Ptr GMllfdiv = 0;
Ptr GMllfeqn = 0;
Ptr GMllfneqn = 0;
Ptr GMllfge = 0;
Ptr GMllfgt = 0;
Ptr GMllfle = 0;
Ptr GMllflt = 0;
Ptr GMllfmin = 0;
Ptr GMllfmax = 0;
Ptr GMclllsht = 0;
Ptr GMcllmul = 0;
Ptr GMclldiv = 0;
Ptr GMcllrem = 0;
Ptr GMcllfadd = 0;
Ptr GMcllfsub = 0;
Ptr GMcllfmul = 0;
Ptr GMcllfdiv = 0;
Ptr GMcllfeqn = 0;
Ptr GMcllfneqn = 0;
Ptr GMcllfge = 0;
Ptr GMcllfgt = 0;
Ptr GMcllfle = 0;
Ptr GMcllflt = 0;
Ptr GMexcarry = 0;
Ptr GMexadd = 0;
Ptr GMexincr = 0;
Ptr GMexinv = 0;
Ptr GMexmul = 0;
Ptr GMexdiv = 0;
Ptr GMexcomp = 0;
#define GFoddp 2
#define GFevenp 2
#define GFlleqn 3
#define GFllneqn 3
#define GFllgt 3
#define GFllge 3
#define GFlllt 3
#define GFllle 3
#define GFllimin 3
#define GFllimax 3
#define GFlladd1 2
#define GFllsub1 2
#define GFlladd 3
#define GFllsub 3
#define GFllmul 3
#define GFll_div 3
#define GFllrem 3
#define GFscale 4
extern Ptr GIrandseed = 0;
#define GFllsrandom 5
#define GFllrandom 3
#define GFlognot 2
#define GFlogand 3
#define GFlogor 3
#define GFlogxor 3
#define GFlogshift 3
#define GFdpn 2
#define GFmskfield 4
#define GFldbyte 4
#define GFldbt 4
#define GFdpbyte 5
#define GFdpfield 5
#define GFllfeqn 3
#define GFllfneqn 3
#define GFllfgt 3
#define GFllfge 3
#define GFllflt 3
#define GFllfle 3
#define GFllfmin 3
#define GFllfmax 3
#define GFllfadd 3
#define GFllfsub 3
#define GFllfmul 3
#define GFllfdiv 3
#define GFclllsht 1
#define GFcllmul 1
#define GFclldiv 1
#define GFcllrem 1
#define GFcllfadd 1
#define GFcllfsub 1
#define GFcllfmul 1
#define GFcllfdiv 1
#define GFcllfeqn 1
#define GFcllfneqn 1
#define GFcllfgt 1
#define GFcllfge 1
#define GFcllflt 1
#define GFcllfle 1
#define GFfloatp 2
#define GFfixp 2
#define GFflplus 5
#define GFfldiff 5
#define GFfltimes 5
#define GFflquo 3
#define GFexadd 3
#define GFexincr 2
#define GFexinv 2
#define GFexmul 4
#define GFexdiv 3
#define GFexcomp 3

/*	LLM3 functions	*/
extern Ptr GXunbind7(void), GXunbind5(void), GXunbind3(void), GXunbind1(void);
extern Ptr GXpopja4(void), GXpopj9(void), GXpopj8(void), GXpopj7(void);
extern Ptr GXpopj6(void), GXpopj5(void), GXpopj4(void), GXpopj3(void);
extern Ptr GXpopj2(void), GXpopj1(void), GXpopj0(void), GXexcomp(void);
extern Ptr GXexdiv(void), GXexmul(void), GXexinv(void), GXexincr(void);
extern Ptr GXexadd(void), GXflquo(void), GXfltimes(void), GXflplus(void);
extern Ptr GXfixp(void), GXfloatp(void), GXcllfle(void), GXcllflt(void);
extern Ptr GXcllfge(void), GXcllfgt(void), GXcllfneqn(void), GXcllfeqn(void);
extern Ptr GXcllfdiv(void), GXcllfmul(void), GXcllfsub(void), GXcllfadd(void);
extern Ptr GXcllrem(void), GXclldiv(void), GXcllmul(void), GXclllsht(void);
extern Ptr GXllfdiv(void), GXllfmul(void), GXllfsub(void), GXllfadd(void);
extern Ptr GXllfmax(void), GXllfmin(void), GXllfle(void), GXllflt(void);
extern Ptr GXllfge(void), GXllfgt(void), GXllfneqn(void), GXllfeqn(void);
extern Ptr GXdpfield(void), GXdpbyte(void), GXldbt(void), GXldbyte(void);
extern Ptr GXmskfield(void), GXdpn(void), GXlogshift(void), GXlogxor(void);
extern Ptr GXlogor(void), GXlogand(void), GXlognot(void), GXllrandom(void);
extern Ptr GXllsrandom(void), GXscale(void), GXllrem(void), GXll_div(void);
extern Ptr GXllmul(void), GXllsub(void), GXlladd(void), GXllsub1(void);
extern Ptr GXlladd1(void), GXllimax(void), GXllimin(void), GXllle(void);
extern Ptr GXlllt(void), GXllge(void), GXllgt(void), GXllneqn(void);
extern Ptr GXlleqn(void), GXevenp(void), GXoddp(void), GXfldiff(void);
extern Ptr GXini_snb(void), GXffsymbol(void), GXnreverse(void), GXgetfns(void);
extern Ptr GXffuncall(void), GXapply(void), GXevala1(void), GXevalcar(void);
extern Ptr GXinicst(void), GXinisymb(void), GXgcnumb(void), GXgcfloat(void);
extern Ptr GXgccons(void), GXgettype(void), GXerr0dv(void), GXerrstl(void);
extern Ptr GXerrwna(void), GXerrnva(void), GXerrnla(void), GXerrnsa(void);
extern Ptr GXerrnfa(void), GXerrnia(void), GXerrnna(void), GXerrgen(void);
extern Ptr GXerrfs(void), GXtheend(void), GXreenter(void), GXevalan(void);
extern Ptr GXevalt(void);

/*	intern functions	*/
static Ptr GLspecnb_1(void), GLspecnb_2(void), GLspecnb_3(void), GLspecnb_4(void);
static Ptr GLspecnb_5(void), GLspecnb_6(void), GLspecnb_7(void), GLspecnb_8(void);
static Ptr GLspecnb_9(void), GLspecnb_10(void), GLspecnb_11(void), GLspecnb_12(void);
static Ptr GLspecnb_13(void), GLspecnb_14(void), GLspecnb_15(void), GLspecnb_16(void);

/*	trace functions	*/
static Ptr GDspecnb_17(void), GDspecnb_18(void), GDspecnb_19(void), GDspecnb_20(void);
static Ptr GDspecnb_21(void), GDspecnb_22(void), GDspecnb_23(void), GDspecnb_24(void);
static Ptr GDspecnb_25(void), GDspecnb_26(void), GDspecnb_27(void), GDspecnb_28(void);
static Ptr GDspecnb_29(void), GDspecnb_30(void), GDspecnb_31(void), GDspecnb_32(void);
static Ptr GDspecnb_33(void), GDspecnb_34(void), GDspecnb_35(void), GDspecnb_36(void);
static Ptr GDspecnb_37(void), GDspecnb_38(void), GDspecnb_39(void), GDspecnb_40(void);
static Ptr GDspecnb_41(void), GDspecnb_42(void), GDspecnb_43(void), GDspecnb_44(void);
static Ptr GDspecnb_45(void), GDspecnb_46(void), GDspecnb_47(void), GDspecnb_48(void);
static Ptr GDspecnb_49(void), GDspecnb_50(void), GDspecnb_51(void), GDspecnb_52(void);
static Ptr GDspecnb_53(void), GDspecnb_54(void), GDspecnb_55(void), GDspecnb_56(void);
static Ptr GDspecnb_57(void), GDspecnb_58(void), GDspecnb_59(void), GDspecnb_60(void);
static Ptr GDspecnb_61(void), GDspecnb_62(void), GDspecnb_63(void), GDspecnb_64(void);
static Ptr GDspecnb_65(void), GDspecnb_66(void), GDspecnb_67(void), GDspecnb_68(void);
static Ptr GDspecnb_69(void), GDspecnb_70(void), GDspecnb_71(void), GDspecnb_72(void);
static Ptr GDspecnb_73(void), GDspecnb_74(void), GDspecnb_75(void), GDspecnb_76(void);
static Ptr GDspecnb_77(void), GDspecnb_78(void), GDspecnb_79(void), GDspecnb_80(void);
static Ptr GDspecnb_81(void), GDspecnb_82(void), GDspecnb_83(void), GDspecnb_84(void);
static Ptr GDspecnb_85(void);

static Ptr GYspecnb[75];

static const char GNspecnb[] = "specnb";
static const char GTspecnb[] = "Sat Oct   7 17 20:53:47 ";

static struct GellEntry GWspecnb[] = {
	{GXoddp,	GDspecnb_17,	2},	/* oddp */
	{GXevenp,	GDspecnb_18,	2},	/* evenp */
	{GXlleqn,	GDspecnb_19,	3},	/* eqn */
	{GXllneqn,	GDspecnb_20,	3},	/* neqn */
	{GXllgt,	GDspecnb_21,	3},	/* gt */
	{GXllge,	GDspecnb_22,	3},	/* ge */
	{GXlllt,	GDspecnb_23,	3},	/* lt */
	{GXllle,	GDspecnb_24,	3},	/* le */
	{GXllimin,	GDspecnb_25,	3},	/* imin */
	{GXllimax,	GDspecnb_26,	3},	/* imax */
	{GXlladd1,	GDspecnb_27,	2},	/* add1 */
	{GXllsub1,	GDspecnb_28,	2},	/* sub1 */
	{GXlladd,	GDspecnb_29,	3},	/* add */
	{GXllsub,	GDspecnb_30,	3},	/* sub */
	{GXllmul,	GDspecnb_31,	3},	/* mul */
	{GXll_div,	GDspecnb_32,	3},	/* div */
	{GXllrem,	GDspecnb_33,	3},	/* rem */
	{GXscale,	GDspecnb_34,	4},	/* scale */
	{GXllsrandom,	GDspecnb_35,	5},	/* srandom */
	{GXllrandom,	GDspecnb_36,	3},	/* random */
	{GXlognot,	GDspecnb_37,	2},	/* lognot */
	{GXlogand,	GDspecnb_38,	3},	/* logand */
	{GXlogor,	GDspecnb_39,	3},	/* logor */
	{GXlogxor,	GDspecnb_40,	3},	/* logxor */
	{GXlogshift,	GDspecnb_41,	3},	/* logshift */
	{GXdpn,		GDspecnb_42,	2},	/* 2** */
	{GXmskfield,	GDspecnb_43,	4},	/* mask-field */
	{GXldbyte,	GDspecnb_44,	4},	/* load-byte */
	{GXldbt,	GDspecnb_45,	4},	/* load-byte-test */
	{GXdpbyte,	GDspecnb_46,	5},	/* deposit-byte */
	{GXdpfield,	GDspecnb_47,	5},	/* deposit-field */
	{GXllfeqn,	GDspecnb_48,	3},	/* feqn */
	{GXllfneqn,	GDspecnb_49,	3},	/* fneqn */
	{GXllfgt,	GDspecnb_50,	3},	/* fgt */
	{GXllfge,	GDspecnb_51,	3},	/* fge */
	{GXllflt,	GDspecnb_52,	3},	/* flt */
	{GXllfle,	GDspecnb_53,	3},	/* fle */
	{GXllfmin,	GDspecnb_54,	3},	/* fmin */
	{GXllfmax,	GDspecnb_55,	3},	/* fmax */
	{GXllfadd,	GDspecnb_56,	3},	/* fadd */
	{GXllfsub,	GDspecnb_57,	3},	/* fsub */
	{GXllfmul,	GDspecnb_58,	3},	/* fmul */
	{GXllfdiv,	GDspecnb_59,	3},	/* fdiv */
	{GXclllsht,	GDspecnb_60,	1},	/* #:gell:logshift */
	{GXcllmul,	GDspecnb_61,	1},	/* #:gell:mul */
	{GXclldiv,	GDspecnb_62,	1},	/* #:gell:div */
	{GXcllrem,	GDspecnb_63,	1},	/* #:gell:rem */
	{GXcllfadd,	GDspecnb_64,	1},	/* #:gell:fadd */
	{GXcllfsub,	GDspecnb_65,	1},	/* #:gell:fsub */
	{GXcllfmul,	GDspecnb_66,	1},	/* #:gell:fmul */
	{GXcllfdiv,	GDspecnb_67,	1},	/* #:gell:fdiv */
	{GXcllfeqn,	GDspecnb_68,	1},	/* #:gell:feqn */
	{GXcllfneqn,	GDspecnb_69,	1},	/* #:gell:fneqn */
	{GXcllfgt,	GDspecnb_70,	1},	/* #:gell:fgt */
	{GXcllfge,	GDspecnb_71,	1},	/* #:gell:fge */
	{GXcllflt,	GDspecnb_72,	1},	/* #:gell:flt */
	{GXcllfle,	GDspecnb_73,	1},	/* #:gell:fle */
	{GXfloatp,	GDspecnb_74,	2},	/* floatp */
	{GXfixp,	GDspecnb_75,	2},	/* fixp */
	{GXflplus,	GDspecnb_76,	5},	/* plus */
	{GXfldiff,	GDspecnb_77,	5},	/* difference */
	{GXfltimes,	GDspecnb_78,	5},	/* times */
	{GXflquo,	GDspecnb_79,	3},	/* divide */
	{GXexadd,	GDspecnb_80,	3},	/* ex+ */
	{GXexincr,	GDspecnb_81,	2},	/* ex1+ */
	{GXexinv,	GDspecnb_82,	2},	/* ex- */
	{GXexmul,	GDspecnb_83,	4},	/* ex* */
	{GXexdiv,	GDspecnb_84,	3},	/* ex/ */
	{GXexcomp,	GDspecnb_85,	3},	/* ex? */
};

struct GellModule GZspecnb = {
	GELLMODULESTAMP,
	GNspecnb,
	GTspecnb,
	GYspecnb,
	69,
	GWspecnb};
