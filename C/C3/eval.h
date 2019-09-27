/* GELL 15.26: include file for the module: "eval" */
/*             translation done:            "Sat Oct   7 17 20:53:23 " */

/*	impure LLM3 predefined	*/
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GMundef;
extern Ptr GIfcons;
extern Ptr GIbvar;
extern Ptr GMt;
extern Ptr GMvoid;
extern Ptr GMitsoft;
extern Ptr GMsyspkgc;
extern Ptr GImstack;
extern Ptr GIcpkgc;
extern Ptr GMlambda;
extern Ptr GMflambda;
extern Ptr GMmlambda;
extern Ptr GIllink = 0;
extern Ptr GIevalst = 0;
extern Ptr GIforme = 0;
extern Ptr GIfunct = 0;
extern Ptr GIsavea1 = 0;
extern Ptr GIsavea2 = 0;
extern Ptr GIsavea3 = 0;
extern Ptr GIsavea4 = 0;
extern Ptr GIerrname = 0;
extern Ptr GIintret = 0;
extern Ptr GIintllink = 0;
extern Ptr GIdlink = 0;
extern Ptr GIrvbser = 0;
Ptr GMsysits = 0;
Ptr GMeval = 0;
Ptr GMevalwhen = 0;
Ptr GMsymeval = 0;
Ptr GMllarg = 0;
Ptr GMnobind = 0;
Ptr GMtraceval = 0;
Ptr GMstepeval = 0;
Ptr GMuapply = 0;
Ptr GMfuncall = 0;
Ptr GMtag = 0;
Ptr GMevtag = 0;
Ptr GMuntlxit = 0;
Ptr GMffexit = 0;
Ptr GMevexit = 0;
Ptr GMunwind = 0;
Ptr GMunexit = 0;
Ptr GMllock = 0;
Ptr GMprotect = 0;
Ptr GMlet = 0;
Ptr GMletseq = 0;
Ptr GMletv = 0;
Ptr GMletvq = 0;
Ptr GMflet = 0;
Ptr GMfunction = 0;
Ptr GMclosure = 0;
Ptr GMrarrow = 0;
Ptr GMlarrow = 0;
#define GFeval 5
#define GFevalwhen 6
#define GFsymeval 2
#define GFllarg 5
#define GFtraceval 5
#define GFstepeval 5
#define GFfuncall 5
#define GFuapply 5
#define GFlet 12
#define GFletseq 6
#define GFletv 6
#define GFletvq 6
#define GFflet 6
#define GFtag 6
#define GFevtag 6
#define GFevexit 6
#define GFuntlxit 6
#define GFffexit 6
#define GFunexit 6
#define GFunwind 6
#define GFllock 6
#define GFprotect 6
#define GFfunction 6

/*	LLM3 functions	*/
extern Ptr GXunbind7(void), GXunbind5(void), GXunbind3(void), GXunbind1(void);
extern Ptr GXpopja4(void), GXpopj9(void), GXpopj8(void), GXpopj7(void);
extern Ptr GXpopj6(void), GXpopj5(void), GXpopj4(void), GXpopj3(void);
extern Ptr GXpopj2(void), GXpopj1(void), GXpopj0(void), GXfunction(void);
extern Ptr GXprotect(void), GXllock(void), GXunwind(void), GXunexit(void);
extern Ptr GXffexit(void), GXuntlxit(void), GXevexit(void), GXevtag(void);
extern Ptr GXtag(void), GXflet(void), GXletvq(void), GXletv(void);
extern Ptr GXletseq(void), GXlet(void), GXuapply(void), GXstepeval(void);
extern Ptr GXtraceval(void), GXllarg(void), GXsymeval(void), GXevalwhen(void);
extern Ptr GXgettype(void), GXlllength(void), GXdisplace(void), GXevlis(void);
extern Ptr GXnreverse(void), GXfindfn(void), GXgetfns(void), GXgetfn1(void);
extern Ptr GXprobjt(void), GXprobj(void), GXinicst(void), GXinisymb(void);
extern Ptr GXgcnumb(void), GXgcfloat(void), GXgccons(void), GXerrxia(void);
extern Ptr GXerrnab(void), GXerrilb(void), GXerrbal(void), GXerrbpa(void);
extern Ptr GXerroob(void), GXerrwna(void), GXerrudt(void), GXerrudf(void);
extern Ptr GXerrudv(void), GXerrnva(void), GXerrnla(void), GXerrnia(void);
extern Ptr GXerrsym(void), GXerres(void), GXerrfs(void), GXevbale(void);
extern Ptr GXbndtrbex(void), GXunbise(void), GXevbser(void), GXevbndext(void);
extern Ptr GXevprognr(void), GXevprogn(void), GXunbinp(void), GXevexpg(void);
extern Ptr GXfuncall(void), GXffuncall(void), GXapply(void), GXevalc(void);
extern Ptr GXeval(void), GXfindtag(void), GXsysprot(void), GXllsupit(void);
extern Ptr GXllitsoft(void), GXevala1(void), GXevalcar(void), GXunbind10(void);
extern Ptr GXunbind9(void), GXunbind8(void), GXunbind7(void), GXunbind6(void);
extern Ptr GXunbind5(void), GXunbind4(void), GXunbind3(void), GXunbind2(void);
extern Ptr GXunbinp1(void), GXunbind1(void), GXunbind0(void), GXini_eval(void);
extern Ptr GXevalan(void), GXevalt(void);

/*	intern functions	*/
static Ptr GLeval_1(void), GLeval_2(void), GLeval_3(void), GLeval_4(void);
static Ptr GLeval_5(void), GLeval_6(void), GLeval_7(void), GLeval_8(void);
static Ptr GLeval_9(void), GLeval_10(void), GLeval_11(void), GLeval_13(void);
static Ptr GLeval_14(void), GLeval_15(void), GLeval_16(void), GLeval_17(void);
static Ptr GLeval_18(void), GLeval_19(void), GLeval_20(void), GLeval_21(void);
static Ptr GLeval_22(void), GLeval_23(void), GLeval_24(void), GLeval_25(void);
static Ptr GLeval_26(void), GLeval_27(void), GLeval_28(void), GLeval_29(void);
static Ptr GLeval_30(void), GLeval_31(void), GLeval_32(void), GLeval_33(void);
static Ptr GLeval_34(void), GLeval_35(void), GLeval_36(void), GLeval_37(void);
static Ptr GLeval_38(void), GLeval_39(void), GLeval_40(void), GLeval_41(void);
static Ptr GLeval_42(void), GLeval_43(void), GLeval_44(void), GLeval_45(void);
static Ptr GLeval_46(void), GLeval_47(void), GLeval_48(void), GLeval_49(void);
static Ptr GLeval_50(void), GLeval_51(void), GLeval_52(void), GLeval_53(void);
static Ptr GLeval_54(void), GLeval_55(void), GLeval_56(void), GLeval_57(void);
static Ptr GLeval_58(void), GLeval_59(void), GLeval_60(void), GLeval_61(void);
static Ptr GLeval_62(void), GLeval_63(void), GLeval_64(void), GLeval_65(void);
static Ptr GLeval_66(void), GLeval_67(void), GLeval_68(void), GLeval_69(void);
static Ptr GLeval_70(void), GLeval_71(void), GLeval_72(void), GLeval_73(void);
static Ptr GLeval_74(void), GLeval_75(void), GLeval_76(void), GLeval_77(void);
static Ptr GLeval_78(void), GLeval_79(void), GLeval_80(void), GLeval_81(void);
static Ptr GLeval_82(void), GLeval_83(void), GLeval_84(void), GLeval_85(void);
static Ptr GLeval_86(void), GLeval_87(void), GLeval_88(void), GLeval_89(void);
static Ptr GLeval_90(void), GLeval_91(void), GLeval_92(void), GLeval_93(void);
static Ptr GLeval_94(void), GLeval_95(void), GLeval_96(void), GLeval_97(void);
static Ptr GLeval_98(void), GLeval_99(void), GLeval_100(void), GLeval_101(void);
static Ptr GLeval_102(void), GLeval_103(void), GLeval_104(void), GLeval_105(void);
static Ptr GLeval_107(void), GLeval_108(void), GLeval_109(void), GLeval_110(void);
static Ptr GLeval_111(void), GLeval_112(void), GLeval_113(void), GLeval_114(void);
static Ptr GLeval_115(void), GLeval_116(void), GLeval_117(void), GLeval_118(void);
static Ptr GLeval_119(void), GLeval_120(void), GLeval_121(void), GLeval_122(void);
static Ptr GLeval_123(void), GLeval_124(void), GLeval_125(void), GLeval_126(void);
static Ptr GLeval_127(void), GLeval_128(void), GLeval_129(void), GLeval_130(void);
static Ptr GLeval_131(void), GLeval_132(void), GLeval_133(void), GLeval_134(void);
static Ptr GLeval_135(void), GLeval_136(void), GLeval_137(void), GLeval_138(void);
static Ptr GLeval_139(void), GLeval_140(void), GLeval_141(void), GLeval_142(void);
static Ptr GLeval_143(void), GLeval_144(void), GLeval_145(void), GLeval_146(void);
static Ptr GLeval_147(void), GLeval_148(void), GLeval_149(void), GLeval_150(void);
static Ptr GLeval_151(void), GLeval_152(void), GLeval_153(void), GLeval_154(void);
static Ptr GLeval_155(void), GLeval_156(void), GLeval_157(void), GLeval_158(void);
static Ptr GLeval_159(void), GLeval_160(void), GLeval_161(void), GLeval_162(void);
static Ptr GLeval_163(void), GLeval_164(void), GLeval_165(void), GLeval_166(void);
static Ptr GLeval_167(void), GLeval_168(void), GLeval_169(void);

/*	trace functions	*/
static Ptr GDeval_170(void), GDeval_171(void), GDeval_172(void), GDeval_173(void);
static Ptr GDeval_174(void), GDeval_175(void), GDeval_176(void), GDeval_177(void);
static Ptr GDeval_178(void), GDeval_179(void), GDeval_180(void), GDeval_181(void);
static Ptr GDeval_182(void), GDeval_183(void), GDeval_184(void), GDeval_185(void);
static Ptr GDeval_186(void), GDeval_187(void), GDeval_188(void), GDeval_189(void);
static Ptr GDeval_190(void), GDeval_191(void), GDeval_192(void);

Ptr (* brx_eval_12 []) () = {
	GLeval_13,
	GLeval_14,
	GLeval_15,
	GLeval_16,
	GLeval_17,
	GLeval_18,
	GLeval_19,
	GLeval_20,
	GLeval_21,
	GLeval_22,
	GLeval_23,
	GLeval_24,
	GLeval_25};
Ptr (* brx_eval_106 []) () = {
	GLeval_107,
	GLeval_108,
	GLeval_109,
	GLeval_110,
	GLeval_111,
	GLeval_112,
	GLeval_113,
	GLeval_114,
	GLeval_114,
	GLeval_115,
	GLeval_116,
	GLeval_117,
	GLeval_118};

static Ptr GYeval[27];

static const char GNeval[] = "eval";
static const char GTeval[] = "Sat Oct   7 17 20:53:23 ";

static struct GellEntry GWeval[] = {
	{GXeval,	GDeval_170,	5},	/* eval */
	{GXevalwhen,	GDeval_171,	6},	/* eval-when */
	{GXsymeval,	GDeval_172,	2},	/* symeval */
	{GXllarg,	GDeval_173,	5},	/* arg */
	{GXtraceval,	GDeval_174,	5},	/* traceval */
	{GXstepeval,	GDeval_175,	5},	/* stepeval */
	{GXfuncall,	GDeval_176,	5},	/* funcall */
	{GXuapply,	GDeval_177,	5},	/* apply */
	{GXlet,		GDeval_178,	12},	/* let */
	{GXletseq,	GDeval_179,	6},	/* lets */
	{GXletv,	GDeval_180,	6},	/* letv */
	{GXletvq,	GDeval_181,	6},	/* letvq */
	{GXflet,	GDeval_182,	6},	/* flet */
	{GXtag,		GDeval_183,	6},	/* tag */
	{GXevtag,	GDeval_184,	6},	/* evtag */
	{GXevexit,	GDeval_185,	6},	/* evexit */
	{GXuntlxit,	GDeval_186,	6},	/* untilexit */
	{GXffexit,	GDeval_187,	6},	/* exit */
	{GXunexit,	GDeval_188,	6},	/* unexit */
	{GXunwind,	GDeval_189,	6},	/* unwind */
	{GXllock,	GDeval_190,	6},	/* lock */
	{GXprotect,	GDeval_191,	6},	/* protect */
	{GXfunction,	GDeval_192,	6},	/* function */
};

struct GellModule GZeval = {
	GELLMODULESTAMP,
	GNeval,
	GTeval,
	GYeval,
	23,
	GWeval};
