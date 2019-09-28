/* GELL 15.26: include file for the module: "symbs" */
/*             translation done:            "Sat Oct   7 17 20:53:36 " */

/*	impure LLM3 predefined	*/
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GImstack;
extern Ptr GIfcons;
extern Ptr GIbvar;
extern Ptr GMundef;
extern Ptr GIhashtab;
extern Ptr GIcpkgc;
extern Ptr GItabcodfn;
extern Ptr GItabtypfn;
Ptr GMmakunbound = 0;
Ptr GMfplist = 0;
Ptr GMpckgcell = 0;
Ptr GMd3root = 0;
Ptr GMobjval = 0;
Ptr GMvalfn = 0;
Ptr GMtypefn = 0;
Ptr GMsetfn = 0;
Ptr GMremfn = 0;
Ptr GMfindfn = 0;
Ptr GMgetfn1 = 0;
Ptr GMgetfn = 0;
Ptr GMgetsym1 = 0;
Ptr GMgetsymb = 0;
Ptr GMgetbi = 0;
Ptr GMsynonym = 0;
Ptr GMsynqnym = 0;
Ptr GMremob = 0;
Ptr GMgetprop = 0;
Ptr GMgetl = 0;
Ptr GMaddprop = 0;
Ptr GMputprop = 0;
Ptr GMdefprop = 0;
Ptr GMremprop = 0;
Ptr GMfincr = 0;
Ptr GMfdecr = 0;
#define GFmakunbound 2
#define GFfplist 5
#define GFpckgcell 5
#define GFd3root 2
#define GFobjval 5
#define GFvalfn 2
#define GFtypefn 2
#define GFsetfn 4
#define GFgetfn1 3
#define GFgetfn 5
#define GFgetbi 4
#define GFremfn 2
#define GFfindfn 2
#define GFsynonym 3
#define GFsynqnym 6
#define GFremob 2
#define GFgetsymb 5
#define GFgetsym1 3
#define GFgetprop 3
#define GFgetl 3
#define GFaddprop 4
#define GFputprop 4
#define GFdefprop 6
#define GFremprop 3
#define GFfincr 6
#define GFfdecr 6

/*	LLM3 functions	*/
extern Ptr GXunbind7(void), GXunbind5(void), GXunbind3(void), GXunbind1(void);
extern Ptr GXpopja4(void), GXpopj9(void), GXpopj8(void), GXpopj7(void);
extern Ptr GXpopj6(void), GXpopj5(void), GXpopj4(void), GXpopj3(void);
extern Ptr GXpopj2(void), GXpopj1(void), GXpopj0(void), GXfdecr(void);
extern Ptr GXfincr(void), GXdefprop(void), GXgetl(void), GXgetsym1(void);
extern Ptr GXgetsymb(void), GXremob(void), GXsynqnym(void), GXsynonym(void);
extern Ptr GXremfn(void), GXgetfn(void), GXtypefn(void), GXvalfn(void);
extern Ptr GXobjval(void), GXd3root(void), GXpckgcell(void), GXfplist(void);
extern Ptr GXmakunbound(void), GXremprop(void), GXaddprop(void), GXputprop(void);
extern Ptr GXgetprop(void), GXfindfn(void), GXsetfn(void), GXgetfns(void);
extern Ptr GXgetbi(void), GXgetfn1(void), GXini_sym(void), GXvag(void);
extern Ptr GXloc(void), GXgadiff2i(void), GXgaplus2i(void), GXevalcar(void);
extern Ptr GXistdsym(void), GXinicst(void), GXinisymb(void), GXgccons(void);
extern Ptr GXerrnla(void), GXerrwna(void), GXerrudf(void), GXerroob(void);
extern Ptr GXerrsym(void), GXerrnva(void), GXevalan(void), GXevalt(void);

/*	intern functions	*/
static Ptr GLsymbs_1(void), GLsymbs_2(void), GLsymbs_3(void), GLsymbs_4(void);
static Ptr GLsymbs_5(void), GLsymbs_6(void), GLsymbs_7(void), GLsymbs_8(void);
static Ptr GLsymbs_9(void), GLsymbs_10(void), GLsymbs_11(void), GLsymbs_12(void);
static Ptr GLsymbs_13(void), GLsymbs_14(void), GLsymbs_15(void), GLsymbs_16(void);
static Ptr GLsymbs_17(void), GLsymbs_18(void), GLsymbs_19(void), GLsymbs_20(void);
static Ptr GLsymbs_21(void), GLsymbs_22(void), GLsymbs_23(void), GLsymbs_24(void);
static Ptr GLsymbs_25(void), GLsymbs_26(void), GLsymbs_27(void), GLsymbs_28(void);
static Ptr GLsymbs_29(void), GLsymbs_30(void), GLsymbs_31(void), GLsymbs_32(void);
static Ptr GLsymbs_33(void), GLsymbs_34(void), GLsymbs_35(void), GLsymbs_36(void);
static Ptr GLsymbs_37(void), GLsymbs_38(void), GLsymbs_39(void), GLsymbs_40(void);
static Ptr GLsymbs_41(void), GLsymbs_42(void), GLsymbs_43(void), GLsymbs_44(void);
static Ptr GLsymbs_45(void), GLsymbs_46(void), GLsymbs_47(void), GLsymbs_48(void);
static Ptr GLsymbs_49(void), GLsymbs_50(void), GLsymbs_51(void), GLsymbs_52(void);
static Ptr GLsymbs_53(void);

/*	trace functions	*/
static Ptr GDsymbs_54(void), GDsymbs_55(void), GDsymbs_56(void), GDsymbs_57(void);
static Ptr GDsymbs_58(void), GDsymbs_59(void), GDsymbs_60(void), GDsymbs_61(void);
static Ptr GDsymbs_62(void), GDsymbs_63(void), GDsymbs_64(void), GDsymbs_65(void);
static Ptr GDsymbs_66(void), GDsymbs_67(void), GDsymbs_68(void), GDsymbs_69(void);
static Ptr GDsymbs_70(void), GDsymbs_71(void), GDsymbs_72(void), GDsymbs_73(void);
static Ptr GDsymbs_74(void), GDsymbs_75(void), GDsymbs_76(void), GDsymbs_77(void);
static Ptr GDsymbs_78(void), GDsymbs_79(void);

static Ptr GYsymbs[32];

static const char GNsymbs[] = "symbs";
static const char GTsymbs[] = "Sat Oct   7 17 20:53:36 ";

static struct GellEntry GWsymbs[] = {
	{GXmakunbound,	GDsymbs_54,	2},	/* makunbound */
	{GXfplist,	GDsymbs_55,	5},	/* plist */
	{GXpckgcell,	GDsymbs_56,	5},	/* packagecell */
	{GXd3root,	GDsymbs_57,	2},	/* 3d-root-symbol */
	{GXobjval,	GDsymbs_58,	5},	/* objval */
	{GXvalfn,	GDsymbs_59,	2},	/* valfn */
	{GXtypefn,	GDsymbs_60,	2},	/* typefn */
	{GXsetfn,	GDsymbs_61,	4},	/* setfn */
	{GXgetfn1,	GDsymbs_62,	3},	/* getfn1 */
	{GXgetfn,	GDsymbs_63,	5},	/* getfn */
	{GXgetbi,	GDsymbs_64,	4},	/* getfn2 */
	{GXremfn,	GDsymbs_65,	2},	/* remfn */
	{GXfindfn,	GDsymbs_66,	2},	/* findfn */
	{GXsynonym,	GDsymbs_67,	3},	/* synonym */
	{GXsynqnym,	GDsymbs_68,	6},	/* synonymq */
	{GXremob,	GDsymbs_69,	2},	/* remob */
	{GXgetsymb,	GDsymbs_70,	5},	/* getsymb */
	{GXgetsym1,	GDsymbs_71,	3},	/* getsymb1 */
	{GXgetprop,	GDsymbs_72,	3},	/* get */
	{GXgetl,	GDsymbs_73,	3},	/* getl */
	{GXaddprop,	GDsymbs_74,	4},	/* addprop */
	{GXputprop,	GDsymbs_75,	4},	/* putprop */
	{GXdefprop,	GDsymbs_76,	6},	/* defprop */
	{GXremprop,	GDsymbs_77,	3},	/* remprop */
	{GXfincr,	GDsymbs_78,	6},	/* incr */
	{GXfdecr,	GDsymbs_79,	6},	/* decr */
};

struct GellModule GZsymbs = {
	GELLMODULESTAMP,
	GNsymbs,
	GTsymbs,
	GYsymbs,
	26,
	GWsymbs};
