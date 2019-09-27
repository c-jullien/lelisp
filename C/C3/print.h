/* GELL 15.26: include file for the module: "print" */
/*             translation done:            "Sat Oct   7 17 20:53:19 " */

/*	impure LLM3 predefined	*/
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GMundef;
extern Ptr GIfcons;
extern Ptr GIbvar;
extern Ptr GMt;
extern Ptr GMvoid;
extern Ptr GMllsystem;
extern Ptr GMitsoft;
extern Ptr GImstack;
extern Ptr GImaxchan;
extern Ptr GIostream;
extern Ptr GIcuroutch;
extern Ptr GIcpkgc;
extern Ptr GItabch;
extern Ptr GMsyscol;
extern Ptr GIdlink;
extern Ptr GIsavea4;
extern Ptr GIsavea1;
extern Ptr GMquote;
extern Ptr GMvector;
extern Ptr GMstring;
extern Ptr GIbufout = 0;
extern Ptr GIbufpn = 0;
extern Ptr GIobase = 0;
extern Ptr GIprmdp = 0;
extern Ptr GIprcdp = 0;
extern Ptr GIprmlp = 0;
extern Ptr GIprclp = 0;
extern Ptr GIprmln = 0;
extern Ptr GIprcln = 0;
extern Ptr GIprmpk = 0;
extern Ptr GIprcpk = 0;
extern Ptr GIpocour = 0;
extern Ptr GInbleft = 0;
extern Ptr GInbrig = 0;
extern Ptr GImaxpocou = 0;
extern Ptr GIiexpld = 0;
extern Ptr GIlexpld = 0;
Ptr GMeol = 0;
Ptr GMllfflush = 0;
Ptr GMupratom = 0;
Ptr GMprin = 0;
Ptr GMprint = 0;
Ptr GMprinflush = 0;
Ptr GMterpri = 0;
Ptr GMprinch = 0;
Ptr GMprincod = 0;
Ptr GMfptype = 0;
Ptr GMprline = 0;
Ptr GMprlevel = 0;
Ptr GMprlength = 0;
Ptr GMfobase = 0;
Ptr GMlmargin = 0;
Ptr GMrmargin = 0;
Ptr GMoutpos = 0;
Ptr GMoutbuf = 0;
Ptr GMexplode = 0;
Ptr GMexplodech = 0;
Ptr GMstatpr = 0;
Ptr GMstatpc = 0;
Ptr GMstatpk = 0;
Ptr GMudprs = 0;
#define GFeol 1
#define GFllfflush 1
#define GFupratom 2
#define GFprin 5
#define GFprint 5
#define GFprinflush 5
#define GFterpri 5
#define GFprinch 5
#define GFprincod 5
#define GFexplode 2
#define GFexplodech 2
#define GFfptype 5
#define GFfobase 5
#define GFprline 5
#define GFprlevel 5
#define GFprlength 5
#define GFlmargin 5
#define GFrmargin 5
#define GFoutpos 5
#define GFoutbuf 5

/*	LLM3 functions	*/
extern Ptr GXunbind7(void), GXunbind5(void), GXunbind3(void), GXunbind1(void);
extern Ptr GXpopja4(void), GXpopj9(void), GXpopj8(void), GXpopj7(void);
extern Ptr GXpopj6(void), GXpopj5(void), GXpopj4(void), GXpopj3(void);
extern Ptr GXpopj2(void), GXpopj1(void), GXpopj0(void), GXoutbuf(void);
extern Ptr GXoutpos(void), GXrmargin(void), GXlmargin(void), GXprlength(void);
extern Ptr GXprlevel(void), GXprline(void), GXfobase(void), GXfptype(void);
extern Ptr GXexplodech(void), GXexplode(void), GXprincod(void), GXprinch(void);
extern Ptr GXterpri(void), GXprinflush(void), GXprint(void), GXprin(void);
extern Ptr GXupratom(void), GXllfflush(void), GXeol(void), GXu_print(void);
extern Ptr GXprobjt(void), GXprobj(void), GXflulin(void), GXoutch(void);
extern Ptr GXini_print(void), GXstrgsymb(void), GXmakestrg(void), GXstringa1(void);
extern Ptr GXgetnumi(void), GXlist(void), GXgetfns(void), GXunbind3(void);
extern Ptr GXfindtag(void), GXsysprot(void), GXffuncall(void), GXfascii(void);
extern Ptr GXinicst(void), GXinisymb(void), GXtynewln(void), GXtystrg(void);
extern Ptr GXgettype(void), GXgcnumb(void), GXgcfloat(void), GXgccons(void);
extern Ptr GXgetsetn(void), GXerrwna(void), GXerrvec(void), GXerroob(void);
extern Ptr GXerrnva(void), GXerrnla(void), GXerrnia(void), GXerrsym(void);
extern Ptr GXerrfsp(void), GXitsoft(void), GXevalan(void), GXevalt(void);

/*	intern functions	*/
static Ptr GLprint_1(void), GLprint_2(void), GLprint_3(void), GLprint_4(void);
static Ptr GLprint_5(void), GLprint_6(void), GLprint_7(void), GLprint_8(void);
static Ptr GLprint_9(void), GLprint_10(void), GLprint_11(void), GLprint_12(void);
static Ptr GLprint_13(void), GLprint_14(void), GLprint_15(void), GLprint_16(void);
static Ptr GLprint_17(void), GLprint_18(void), GLprint_19(void), GLprint_20(void);
static Ptr GLprint_21(void), GLprint_22(void), GLprint_23(void), GLprint_24(void);
static Ptr GLprint_25(void), GLprint_26(void), GLprint_27(void), GLprint_28(void);
static Ptr GLprint_29(void), GLprint_30(void), GLprint_31(void), GLprint_32(void);
static Ptr GLprint_33(void), GLprint_34(void), GLprint_35(void), GLprint_36(void);
static Ptr GLprint_37(void), GLprint_38(void), GLprint_39(void), GLprint_40(void);
static Ptr GLprint_41(void), GLprint_42(void), GLprint_43(void), GLprint_44(void);
static Ptr GLprint_45(void), GLprint_46(void), GLprint_47(void), GLprint_48(void);
static Ptr GLprint_49(void), GLprint_50(void), GLprint_51(void), GLprint_52(void);
static Ptr GLprint_53(void), GLprint_54(void), GLprint_55(void), GLprint_56(void);
static Ptr GLprint_57(void), GLprint_58(void), GLprint_59(void), GLprint_60(void);
static Ptr GLprint_61(void), GLprint_62(void), GLprint_63(void), GLprint_64(void);
static Ptr GLprint_65(void), GLprint_66(void), GLprint_67(void), GLprint_68(void);
static Ptr GLprint_69(void), GLprint_70(void), GLprint_71(void), GLprint_72(void);
static Ptr GLprint_73(void), GLprint_74(void), GLprint_75(void), GLprint_76(void);
static Ptr GLprint_77(void), GLprint_78(void), GLprint_79(void), GLprint_80(void);
static Ptr GLprint_81(void), GLprint_82(void), GLprint_83(void), GLprint_84(void);
static Ptr GLprint_85(void), GLprint_86(void), GLprint_87(void), GLprint_88(void);
static Ptr GLprint_89(void), GLprint_90(void), GLprint_91(void), GLprint_92(void);
static Ptr GLprint_93(void), GLprint_94(void), GLprint_95(void), GLprint_96(void);
static Ptr GLprint_97(void), GLprint_98(void), GLprint_99(void), GLprint_100(void);
static Ptr GLprint_101(void), GLprint_102(void), GLprint_103(void), GLprint_104(void);
static Ptr GLprint_105(void), GLprint_106(void), GLprint_107(void), GLprint_108(void);
static Ptr GLprint_109(void), GLprint_110(void), GLprint_111(void), GLprint_112(void);
static Ptr GLprint_113(void), GLprint_114(void), GLprint_115(void), GLprint_116(void);
static Ptr GLprint_117(void), GLprint_118(void), GLprint_119(void), GLprint_120(void);
static Ptr GLprint_121(void), GLprint_122(void), GLprint_123(void), GLprint_124(void);
static Ptr GLprint_125(void), GLprint_126(void), GLprint_127(void), GLprint_128(void);
static Ptr GLprint_129(void), GLprint_130(void), GLprint_131(void), GLprint_132(void);
static Ptr GLprint_133(void), GLprint_134(void), GLprint_135(void), GLprint_136(void);
static Ptr GLprint_137(void), GLprint_138(void), GLprint_139(void), GLprint_140(void);
static Ptr GLprint_141(void), GLprint_142(void), GLprint_143(void), GLprint_144(void);
static Ptr GLprint_145(void), GLprint_146(void), GLprint_147(void), GLprint_148(void);
static Ptr GLprint_149(void), GLprint_150(void), GLprint_151(void), GLprint_152(void);
static Ptr GLprint_153(void);

/*	trace functions	*/
static Ptr GDprint_154(void), GDprint_155(void), GDprint_156(void), GDprint_157(void);
static Ptr GDprint_158(void), GDprint_159(void), GDprint_160(void), GDprint_161(void);
static Ptr GDprint_162(void), GDprint_163(void), GDprint_164(void), GDprint_165(void);
static Ptr GDprint_166(void), GDprint_167(void), GDprint_168(void), GDprint_169(void);
static Ptr GDprint_170(void), GDprint_171(void), GDprint_172(void), GDprint_173(void);

static Ptr GYprint[24];

static const char GNprint[] = "print";
static const char GTprint[] = "Sat Oct   7 17 20:53:19 ";

static struct GellEntry GWprint[] = {
	{GXeol,		GDprint_154,	1},	/* eol */
	{GXllfflush,	GDprint_155,	1},	/* flush */
	{GXupratom,	GDprint_156,	2},	/* pratom */
	{GXprin,	GDprint_157,	5},	/* prin */
	{GXprint,	GDprint_158,	5},	/* print */
	{GXprinflush,	GDprint_159,	5},	/* prinflush */
	{GXterpri,	GDprint_160,	5},	/* terpri */
	{GXprinch,	GDprint_161,	5},	/* princh */
	{GXprincod,	GDprint_162,	5},	/* princn */
	{GXexplode,	GDprint_163,	2},	/* explode */
	{GXexplodech,	GDprint_164,	2},	/* explodech */
	{GXfptype,	GDprint_165,	5},	/* ptype */
	{GXfobase,	GDprint_166,	5},	/* obase */
	{GXprline,	GDprint_167,	5},	/* printline */
	{GXprlevel,	GDprint_168,	5},	/* printlevel */
	{GXprlength,	GDprint_169,	5},	/* printlength */
	{GXlmargin,	GDprint_170,	5},	/* lmargin */
	{GXrmargin,	GDprint_171,	5},	/* rmargin */
	{GXoutpos,	GDprint_172,	5},	/* outpos */
	{GXoutbuf,	GDprint_173,	5},	/* outbuf */
};

struct GellModule GZprint = {
	GELLMODULESTAMP,
	GNprint,
	GTprint,
	GYprint,
	20,
	GWprint};
