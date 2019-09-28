/* GELL 15.26: include file for the module: "gc" */
/*             translation done:            "Sat Oct   7 17 20:53:02 " */

/*	impure LLM3 predefined	*/
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GIbstack;
extern Ptr GIfcons;
extern Ptr GIbvar;
extern Ptr GImstack;
extern Ptr GIestack;
extern Ptr GIbcons;
extern Ptr GIbsymb;
extern Ptr GIbstrg;
extern Ptr GIfstrg;
extern Ptr GIbcode;
extern Ptr GIccode;
extern Ptr GIecode;
extern Ptr GIbvect;
extern Ptr GIfvect;
extern Ptr GIbheap;
extern Ptr GIcheap;
extern Ptr GIeheap;
extern Ptr GIbnumb;
extern Ptr GIfnumb;
extern Ptr GIcnumb;
extern Ptr GIbfloat;
extern Ptr GIffloat;
extern Ptr GIfsymb;
extern Ptr GIhashtab;
extern Ptr GMvoid;
extern Ptr GMt;
extern Ptr GMundef;
extern Ptr GMitsoft;
extern Ptr GMllsystem;
extern Ptr GIcstsyste;
extern Ptr GIitstate;
extern Ptr GMsyserror;
extern Ptr GIcurprmpt;
extern Ptr GItabchan;
extern Ptr GIcntrlc;
extern Ptr GIbufch;
extern Ptr GIrubstrg;
extern Ptr GIasymb;
extern Ptr GIimpld;
extern Ptr GIringur;
extern Ptr GItabch;
extern Ptr GIcachch;
extern Ptr GIbufat;
extern Ptr GIcurread;
extern Ptr GIcpkgc;
extern Ptr GIimpli;
extern Ptr GItabctyp;
extern Ptr GItabccod;
extern Ptr GIbufpn;
extern Ptr GIiexpld;
extern Ptr GIlexpld;
extern Ptr GIllink;
extern Ptr GIevalst;
extern Ptr GIforme;
extern Ptr GIfunct;
extern Ptr GIsavea1;
extern Ptr GIsavea2;
extern Ptr GIsavea3;
extern Ptr GIsavea4;
extern Ptr GIerrname;
extern Ptr GIintret;
extern Ptr GIintllink;
extern Ptr GItabtypfn;
extern Ptr GItabcodfn;
extern Ptr GMllcons;
extern Ptr GMllnull;
extern Ptr GMllfloat;
extern Ptr GMllfix;
extern Ptr GIfzero;
extern Ptr GIfltun;
extern Ptr GIfltmun;
extern Ptr GIfltimax;
extern Ptr GIfltimin;
extern Ptr GMstring;
extern Ptr GMvector;
extern Ptr GMffsymbol;
extern Ptr GIbufstrg;
extern Ptr GIngccons = 0;
extern Ptr GIngcsymb = 0;
extern Ptr GIngcstrg = 0;
extern Ptr GIngcvect = 0;
extern Ptr GIngcfloat = 0;
extern Ptr GIngcnumb = 0;
extern Ptr GIngch = 0;
extern Ptr GIngcuser = 0;
extern Ptr GIfreenu = 0;
extern Ptr GIfreenm = 0;
extern Ptr GIfreefu = 0;
extern Ptr GIfreefm = 0;
extern Ptr GIfreevu = 0;
extern Ptr GIfreevm = 0;
extern Ptr GIfreesu = 0;
extern Ptr GIfreesm = 0;
extern Ptr GIfreeyu = 0;
extern Ptr GIfreeym = 0;
extern Ptr GIfreelu = 0;
extern Ptr GIfreelm = 0;
extern Ptr GIswheap = 0;
extern Ptr GIcpheap = 0;
extern Ptr GIoswheap = 0;
Ptr GMgcuser = 0;
Ptr GMgcalarm = 0;
Ptr GMgcalarb = 0;
Ptr GMgcinfo = 0;
Ptr GMsizecd = 0;
Ptr GMsizehp = 0;
Ptr GMtconscl = 0;
Ptr GMtconsmk = 0;
Ptr GMtcons = 0;
Ptr GMtconsp = 0;
Ptr GMfrcons = 0;
Ptr GMfrtree = 0;
Ptr GMgettype = 0;
Ptr GMsubtypep = 0;
Ptr GMtypep = 0;
Ptr GMllsend = 0;
Ptr GMsupsend = 0;
Ptr GMcsend = 0;
Ptr GMsendbi = 0;
Ptr GMsenderro = 0;
Ptr GMstrctacc = 0;
Ptr GMbigtype = 0;
Ptr GMsmpvect = 0;
Ptr GMsmpstrg = 0;
Ptr GMfnalzeff = 0;
Ptr GMfnalzefn = 0;
#define GFgcuser 5
#define GFgcalarb 1
#define GFgcalarm 1
#define GFfnalzefn 2
#define GFgcinfo 5
#define GFtcons 3
#define GFtconsmk 2
#define GFtconscl 2
#define GFtconsp 2
#define GFfrcons 2
#define GFfrtree 2
#define GFgettype 2
#define GFtypep 3
#define GFsubtypep 3
#define GFllsend 5
#define GFsenderro 3
#define GFcsend 5
#define GFsupsend 5
#define GFsendbi 5
#define GFstrctacc 5
#define GFsmpvect 2
#define GFsmpstrg 2

/*	LLM3 functions	*/
extern Ptr GXunbind7(void), GXunbind5(void), GXunbind3(void), GXunbind1(void);
extern Ptr GXpopja4(void), GXpopj9(void), GXpopj8(void), GXpopj7(void);
extern Ptr GXpopj6(void), GXpopj5(void), GXpopj4(void), GXpopj3(void);
extern Ptr GXpopj2(void), GXpopj1(void), GXpopj0(void), GXstrctacc(void);
extern Ptr GXsendbi(void), GXsupsend(void), GXcsend(void), GXsenderro(void);
extern Ptr GXsubtypep(void), GXtypep(void), GXfrtree(void), GXfrcons(void);
extern Ptr GXtconsp(void), GXtconscl(void), GXtconsmk(void), GXtcons(void);
extern Ptr GXfnalzefn(void), GXgcalarm(void), GXgcalarb(void), GXgcuser(void);
extern Ptr GXgcswcons(void), GXsmpstrg(void), GXsmpvect(void), GXgcstmrk(void);
extern Ptr GXllsend(void), GXini_gc(void), GXhgc(void), GXgcnumb(void);
extern Ptr GXgcfloat(void), GXgcvect(void), GXgcstrg(void), GXgcsymb(void);
extern Ptr GXgccons(void), GXgettype(void), GXgcinfo(void), GXlist(void);
extern Ptr GXgetbi(void), GXgetfns(void), GXsysprot(void), GXffuncall(void);
extern Ptr GXfuncall(void), GXprobjt(void), GXinicst(void), GXinisymb(void);
extern Ptr GXerrvec(void), GXerroob(void), GXerrudm(void), GXerrudf(void);
extern Ptr GXerrsym(void), GXerrstc(void), GXerrnaa(void), GXerrwna(void);
extern Ptr GXerrnla(void), GXerrato(void), GXerrfv(void), GXerrfn(void);
extern Ptr GXerrff(void), GXerrfr(void), GXerrfm(void), GXerrfsgc(void);
extern Ptr GXerrfs(void), GXitsoft(void), GXevalan(void), GXevalt(void);

/*	intern functions	*/
static Ptr GLgc_1(void), GLgc_2(void), GLgc_3(void), GLgc_4(void);
static Ptr GLgc_5(void), GLgc_6(void), GLgc_7(void), GLgc_8(void);
static Ptr GLgc_9(void), GLgc_10(void), GLgc_11(void), GLgc_12(void);
static Ptr GLgc_13(void), GLgc_14(void), GLgc_15(void), GLgc_16(void);
static Ptr GLgc_17(void), GLgc_18(void), GLgc_19(void), GLgc_20(void);
static Ptr GLgc_21(void), GLgc_22(void), GLgc_23(void), GLgc_24(void);
static Ptr GLgc_25(void), GLgc_26(void), GLgc_27(void), GLgc_28(void);
static Ptr GLgc_29(void), GLgc_30(void), GLgc_39(void), GLgc_40(void);
static Ptr GLgc_41(void), GLgc_42(void), GLgc_44(void), GLgc_45(void);
static Ptr GLgc_46(void), GLgc_47(void), GLgc_48(void), GLgc_58(void);
static Ptr GLgc_59(void), GLgc_60(void), GLgc_61(void), GLgc_62(void);
static Ptr GLgc_63(void), GLgc_64(void), GLgc_65(void), GLgc_66(void);
static Ptr GLgc_67(void), GLgc_68(void), GLgc_75(void), GLgc_76(void);
static Ptr GLgc_77(void), GLgc_78(void), GLgc_79(void), GLgc_80(void);
static Ptr GLgc_81(void), GLgc_82(void), GLgc_83(void), GLgc_84(void);
static Ptr GLgc_85(void), GLgc_86(void), GLgc_87(void), GLgc_88(void);
static Ptr GLgc_89(void), GLgc_90(void), GLgc_91(void), GLgc_92(void);
static Ptr GLgc_93(void), GLgc_94(void), GLgc_95(void), GLgc_96(void);
static Ptr GLgc_97(void), GLgc_98(void), GLgc_99(void), GLgc_100(void);
static Ptr GLgc_101(void), GLgc_102(void), GLgc_103(void), GLgc_104(void);
static Ptr GLgc_105(void), GLgc_106(void), GLgc_107(void), GLgc_108(void);
static Ptr GLgc_109(void), GLgc_110(void), GLgc_111(void), GLgc_112(void);
static Ptr GLgc_113(void), GLgc_114(void), GLgc_115(void), GLgc_116(void);
static Ptr GLgc_117(void), GLgc_118(void), GLgc_119(void);

/*	trace functions	*/
static Ptr GDgc_120(void), GDgc_121(void), GDgc_122(void), GDgc_123(void);
static Ptr GDgc_124(void), GDgc_125(void), GDgc_126(void), GDgc_127(void);
static Ptr GDgc_128(void), GDgc_129(void), GDgc_130(void), GDgc_131(void);
static Ptr GDgc_132(void), GDgc_133(void), GDgc_134(void), GDgc_135(void);
static Ptr GDgc_136(void), GDgc_137(void), GDgc_138(void), GDgc_139(void);
static Ptr GDgc_140(void), GDgc_141(void);

static Ptr GYgc[27];

static const char GNgc[] = "gc";
static const char GTgc[] = "Sat Oct   7 17 20:53:02 ";

static struct GellEntry GWgc[] = {
	{GXgcuser,	GDgc_120,	5},	/* gc */
	{GXgcalarb,	GDgc_121,	1},	/* gc-before-alarm */
	{GXgcalarm,	GDgc_122,	1},	/* gcalarm */
	{GXfnalzefn,	GDgc_123,	2},	/* finalize-function */
	{GXgcinfo,	GDgc_124,	5},	/* gcinfo */
	{GXtcons,	GDgc_125,	3},	/* tcons */
	{GXtconsmk,	GDgc_126,	2},	/* tconsmk */
	{GXtconscl,	GDgc_127,	2},	/* tconscl */
	{GXtconsp,	GDgc_128,	2},	/* tconsp */
	{GXfrcons,	GDgc_129,	2},	/* freecons */
	{GXfrtree,	GDgc_130,	2},	/* freetree */
	{GXgettype,	GDgc_131,	2},	/* type-of */
	{GXtypep,	GDgc_132,	3},	/* typep */
	{GXsubtypep,	GDgc_133,	3},	/* subtypep */
	{GXllsend,	GDgc_134,	5},	/* send */
	{GXsenderro,	GDgc_135,	3},	/* send-error */
	{GXcsend,	GDgc_136,	5},	/* csend */
	{GXsupsend,	GDgc_137,	5},	/* send-super */
	{GXsendbi,	GDgc_138,	5},	/* send2 */
	{GXstrctacc,	GDgc_139,	5},	/* structaccess */
	{GXsmpvect,	GDgc_140,	2},	/* mapallvector */
	{GXsmpstrg,	GDgc_141,	2},	/* mapallstring */
};

struct GellModule GZgc = {
	GELLMODULESTAMP,
	GNgc,
	GTgc,
	GYgc,
	22,
	GWgc};
