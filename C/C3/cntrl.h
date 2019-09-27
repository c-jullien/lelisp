/* GELL 15.26: include file for the module: "cntrl" */
/*             translation done:            "Sat Oct   7 17 20:53:31 " */

/*	impure LLM3 predefined	*/
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GIhashtab;
extern Ptr GIfcons;
extern Ptr GImstack;
extern Ptr GIbvar;
extern Ptr GMundef;
extern Ptr GMt;
extern Ptr GMvoid;
extern Ptr GMllsystem;
extern Ptr GMlsubr0;
extern Ptr GMlsubr1;
extern Ptr GMlsubr2;
extern Ptr GMlsubr3;
extern Ptr GMnlsubr;
extern Ptr GMflsubr;
extern Ptr GMllexpr;
extern Ptr GMllfexpr;
extern Ptr GMllmacro;
extern Ptr GMlldmacro;
extern Ptr GMllmsubr;
extern Ptr GMlldmsubr;
extern Ptr GIsavea1;
extern Ptr GIsavea2;
extern Ptr GIerrname;
extern Ptr GItabtypfn = 0;
extern Ptr GItabcodfn = 0;
Ptr GMlff = 0;
Ptr GMllde = 0;
Ptr GMlldf = 0;
Ptr GMlldm = 0;
Ptr GMdmd = 0;
Ptr GMllds = 0;
Ptr GMdefvar = 0;
Ptr GMprevdef = 0;
Ptr GMrevert = 0;
Ptr GMgetdef = 0;
Ptr GMmakedef = 0;
Ptr GMllif = 0;
Ptr GMllifn = 0;
Ptr GMwhen = 0;
Ptr GMunless = 0;
Ptr GMcond = 0;
Ptr GMllor = 0;
Ptr GMlland = 0;
Ptr GMwhile = 0;
Ptr GMuntil = 0;
Ptr GMloop = 0;
Ptr GMfrepeat = 0;
Ptr GMselectq = 0;
Ptr GMmap = 0;
Ptr GMmapc = 0;
Ptr GMmaplist = 0;
Ptr GMmapcar = 0;
Ptr GMmapcon = 0;
Ptr GMmapcan = 0;
Ptr GMfevery = 0;
Ptr GMfany = 0;
Ptr GMmapvect = 0;
Ptr GMmapoblist = 0;
Ptr GMmapcoblist = 0;
Ptr GMmaploblist = 0;
Ptr GMquote = 0;
Ptr GMlambda = 0;
Ptr GMflambda = 0;
Ptr GMmlambda = 0;
Ptr GMllident = 0;
Ptr GMcomment = 0;
Ptr GMprogn = 0;
Ptr GMeprogn = 0;
Ptr GMprog1 = 0;
Ptr GMexdef = 0;
Ptr GMprog2 = 0;
#define GFllde 6
#define GFlldf 6
#define GFlldm 6
#define GFdmd 6
#define GFllds 6
#define GFdefvar 6
#define GFrevert 2
#define GFgetdef 2
#define GFmakedef 4
#define GFllif 6
#define GFllifn 6
#define GFwhen 6
#define GFunless 6
#define GFcond 6
#define GFllor 6
#define GFlland 6
#define GFwhile 6
#define GFuntil 6
#define GFloop 6
#define GFfrepeat 6
#define GFselectq 6
#define GFmap 5
#define GFmapc 5
#define GFmaplist 5
#define GFmapcar 5
#define GFmapcon 5
#define GFmapcan 5
#define GFfevery 5
#define GFfany 5
#define GFmapvect 3
#define GFmapcoblist 2
#define GFmaploblist 2
#define GFmapoblist 2
#define GFquote 6
#define GFlambda 6
#define GFflambda 6
#define GFmlambda 6
#define GFcomment 6
#define GFllident 2
#define GFeprogn 2
#define GFprogn 6
#define GFexdef 6
#define GFprog1 6
#define GFprog2 6

/*	LLM3 functions	*/
extern Ptr GXunbind7(void), GXunbind5(void), GXunbind3(void), GXunbind1(void);
extern Ptr GXpopja4(void), GXpopj9(void), GXpopj8(void), GXpopj7(void);
extern Ptr GXpopj6(void), GXpopj5(void), GXpopj4(void), GXpopj3(void);
extern Ptr GXpopj2(void), GXpopj1(void), GXpopj0(void), GXprog2(void);
extern Ptr GXprog1(void), GXexdef(void), GXprogn(void), GXeprogn(void);
extern Ptr GXllident(void), GXcomment(void), GXmlambda(void), GXflambda(void);
extern Ptr GXlambda(void), GXquote(void), GXmapoblist(void), GXmaploblist(void);
extern Ptr GXmapcoblist(void), GXmapvect(void), GXfany(void), GXfevery(void);
extern Ptr GXmapcan(void), GXmapcon(void), GXmapcar(void), GXmaplist(void);
extern Ptr GXmapc(void), GXmap(void), GXselectq(void), GXfrepeat(void);
extern Ptr GXloop(void), GXuntil(void), GXwhile(void), GXlland(void);
extern Ptr GXllor(void), GXcond(void), GXunless(void), GXwhen(void);
extern Ptr GXllifn(void), GXllif(void), GXmakedef(void), GXgetdef(void);
extern Ptr GXrevert(void), GXdefvar(void), GXllds(void), GXdmd(void);
extern Ptr GXlldm(void), GXlldf(void), GXllde(void), GXini_ctl(void);
extern Ptr GXloc(void), GXmakevect(void), GXequal(void), GXnreconc(void);
extern Ptr GXnreverse(void), GXmember(void), GXremprop(void), GXputprop(void);
extern Ptr GXgetprop(void), GXaddprop(void), GXinicst(void), GXinisymb(void);
extern Ptr GXevprogn(void), GXffuncall(void), GXfuncall(void), GXevala1(void);
extern Ptr GXevalcar(void), GXgcnumb(void), GXgcfloat(void), GXgccons(void);
extern Ptr GXerrfs(void), GXerroob(void), GXerrbal(void), GXerrvec(void);
extern Ptr GXerrwna(void), GXerrnva(void), GXerrnla(void), GXerrnia(void);
extern Ptr GXerrsym(void), GXevalan(void), GXevalt(void);

/*	intern functions	*/
static Ptr GLcntrl_1(void), GLcntrl_2(void), GLcntrl_3(void), GLcntrl_4(void);
static Ptr GLcntrl_5(void), GLcntrl_6(void), GLcntrl_7(void), GLcntrl_8(void);
static Ptr GLcntrl_9(void), GLcntrl_10(void), GLcntrl_11(void), GLcntrl_13(void);
static Ptr GLcntrl_14(void), GLcntrl_15(void), GLcntrl_16(void), GLcntrl_17(void);
static Ptr GLcntrl_18(void), GLcntrl_19(void), GLcntrl_20(void), GLcntrl_21(void);
static Ptr GLcntrl_22(void), GLcntrl_23(void), GLcntrl_24(void), GLcntrl_25(void);
static Ptr GLcntrl_26(void), GLcntrl_27(void), GLcntrl_28(void), GLcntrl_29(void);
static Ptr GLcntrl_30(void), GLcntrl_31(void), GLcntrl_32(void), GLcntrl_33(void);
static Ptr GLcntrl_34(void), GLcntrl_35(void), GLcntrl_36(void), GLcntrl_37(void);
static Ptr GLcntrl_38(void), GLcntrl_39(void), GLcntrl_40(void), GLcntrl_41(void);
static Ptr GLcntrl_42(void), GLcntrl_43(void), GLcntrl_44(void), GLcntrl_45(void);
static Ptr GLcntrl_46(void), GLcntrl_47(void), GLcntrl_48(void), GLcntrl_49(void);
static Ptr GLcntrl_50(void), GLcntrl_51(void), GLcntrl_52(void), GLcntrl_53(void);
static Ptr GLcntrl_54(void), GLcntrl_55(void), GLcntrl_56(void), GLcntrl_57(void);
static Ptr GLcntrl_58(void), GLcntrl_59(void), GLcntrl_60(void), GLcntrl_61(void);
static Ptr GLcntrl_62(void), GLcntrl_63(void), GLcntrl_64(void), GLcntrl_65(void);
static Ptr GLcntrl_66(void), GLcntrl_67(void), GLcntrl_68(void), GLcntrl_69(void);
static Ptr GLcntrl_70(void), GLcntrl_71(void), GLcntrl_72(void), GLcntrl_73(void);
static Ptr GLcntrl_74(void), GLcntrl_75(void), GLcntrl_76(void), GLcntrl_77(void);
static Ptr GLcntrl_78(void), GLcntrl_79(void), GLcntrl_80(void), GLcntrl_81(void);
static Ptr GLcntrl_82(void), GLcntrl_83(void), GLcntrl_84(void), GLcntrl_85(void);
static Ptr GLcntrl_86(void), GLcntrl_87(void), GLcntrl_88(void), GLcntrl_89(void);
static Ptr GLcntrl_90(void), GLcntrl_91(void), GLcntrl_92(void), GLcntrl_93(void);
static Ptr GLcntrl_94(void), GLcntrl_95(void), GLcntrl_96(void), GLcntrl_97(void);
static Ptr GLcntrl_98(void), GLcntrl_99(void), GLcntrl_100(void), GLcntrl_101(void);
static Ptr GLcntrl_102(void), GLcntrl_103(void), GLcntrl_104(void), GLcntrl_105(void);
static Ptr GLcntrl_106(void), GLcntrl_107(void), GLcntrl_108(void);

/*	trace functions	*/
static Ptr GDcntrl_109(void), GDcntrl_110(void), GDcntrl_111(void), GDcntrl_112(void);
static Ptr GDcntrl_113(void), GDcntrl_114(void), GDcntrl_115(void), GDcntrl_116(void);
static Ptr GDcntrl_117(void), GDcntrl_118(void), GDcntrl_119(void), GDcntrl_120(void);
static Ptr GDcntrl_121(void), GDcntrl_122(void), GDcntrl_123(void), GDcntrl_124(void);
static Ptr GDcntrl_125(void), GDcntrl_126(void), GDcntrl_127(void), GDcntrl_128(void);
static Ptr GDcntrl_129(void), GDcntrl_130(void), GDcntrl_131(void), GDcntrl_132(void);
static Ptr GDcntrl_133(void), GDcntrl_134(void), GDcntrl_135(void), GDcntrl_136(void);
static Ptr GDcntrl_137(void), GDcntrl_138(void), GDcntrl_139(void), GDcntrl_140(void);
static Ptr GDcntrl_141(void), GDcntrl_142(void), GDcntrl_143(void), GDcntrl_144(void);
static Ptr GDcntrl_145(void), GDcntrl_146(void), GDcntrl_147(void), GDcntrl_148(void);
static Ptr GDcntrl_149(void), GDcntrl_150(void), GDcntrl_151(void), GDcntrl_152(void);

Ptr (* brx_cntrl_12 []) () = {
	GLcntrl_13,
	GLcntrl_14,
	GLcntrl_14,
	GLcntrl_14,
	GLcntrl_14,
	GLcntrl_14,
	GLcntrl_14,
	GLcntrl_15,
	GLcntrl_16,
	GLcntrl_17,
	GLcntrl_18,
	GLcntrl_14,
	GLcntrl_14};

static Ptr GYcntrl[50];

static const char GNcntrl[] = "cntrl";
static const char GTcntrl[] = "Sat Oct   7 17 20:53:31 ";

static struct GellEntry GWcntrl[] = {
	{GXllde,	GDcntrl_109,	6},	/* defun */
	{GXlldf,	GDcntrl_110,	6},	/* df */
	{GXlldm,	GDcntrl_111,	6},	/* dm */
	{GXdmd,		GDcntrl_112,	6},	/* dmd */
	{GXllds,	GDcntrl_113,	6},	/* ds */
	{GXdefvar,	GDcntrl_114,	6},	/* defvar */
	{GXrevert,	GDcntrl_115,	2},	/* revert */
	{GXgetdef,	GDcntrl_116,	2},	/* getdef */
	{GXmakedef,	GDcntrl_117,	4},	/* makedef */
	{GXllif,	GDcntrl_118,	6},	/* if */
	{GXllifn,	GDcntrl_119,	6},	/* ifn */
	{GXwhen,	GDcntrl_120,	6},	/* when */
	{GXunless,	GDcntrl_121,	6},	/* unless */
	{GXcond,	GDcntrl_122,	6},	/* cond */
	{GXllor,	GDcntrl_123,	6},	/* or */
	{GXlland,	GDcntrl_124,	6},	/* and */
	{GXwhile,	GDcntrl_125,	6},	/* while */
	{GXuntil,	GDcntrl_126,	6},	/* until */
	{GXloop,	GDcntrl_127,	6},	/* loop */
	{GXfrepeat,	GDcntrl_128,	6},	/* repeat */
	{GXselectq,	GDcntrl_129,	6},	/* selectq */
	{GXmap,		GDcntrl_130,	5},	/* map */
	{GXmapc,	GDcntrl_131,	5},	/* mapc */
	{GXmaplist,	GDcntrl_132,	5},	/* maplist */
	{GXmapcar,	GDcntrl_133,	5},	/* mapcar */
	{GXmapcon,	GDcntrl_134,	5},	/* mapcon */
	{GXmapcan,	GDcntrl_135,	5},	/* mapcan */
	{GXfevery,	GDcntrl_136,	5},	/* every */
	{GXfany,	GDcntrl_137,	5},	/* any */
	{GXmapvect,	GDcntrl_138,	3},	/* mapvector */
	{GXmapcoblist,	GDcntrl_139,	2},	/* mapcoblist */
	{GXmaploblist,	GDcntrl_140,	2},	/* maploblist */
	{GXmapoblist,	GDcntrl_141,	2},	/* mapoblist */
	{GXquote,	GDcntrl_142,	6},	/* quote */
	{GXlambda,	GDcntrl_143,	6},	/* lambda */
	{GXflambda,	GDcntrl_144,	6},	/* flambda */
	{GXmlambda,	GDcntrl_145,	6},	/* mlambda */
	{GXcomment,	GDcntrl_146,	6},	/* comment */
	{GXllident,	GDcntrl_147,	2},	/* identity */
	{GXeprogn,	GDcntrl_148,	2},	/* eprogn */
	{GXprogn,	GDcntrl_149,	6},	/* progn */
	{GXexdef,	GDcntrl_150,	6},	/* exportable-definition */
	{GXprog1,	GDcntrl_151,	6},	/* prog1 */
	{GXprog2,	GDcntrl_152,	6},	/* prog2 */
};

struct GellModule GZcntrl = {
	GELLMODULESTAMP,
	GNcntrl,
	GTcntrl,
	GYcntrl,
	44,
	GWcntrl};
