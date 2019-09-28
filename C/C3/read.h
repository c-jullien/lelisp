/* GELL 15.26: include file for the module: "read" */
/*             translation done:            "Sat Oct   7 17 20:53:12 " */

/*	impure LLM3 predefined	*/
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GIfsymb;
extern Ptr GIfcons;
extern Ptr GIbvar;
extern Ptr GMvoid;
extern Ptr GMundef;
extern Ptr GMt;
extern Ptr GMllsystem;
extern Ptr GMsyspkgc;
extern Ptr GIhashtab;
extern Ptr GIfstrg;
extern Ptr GMllexpr;
extern Ptr GIistream;
extern Ptr GIinmax;
extern Ptr GIpolig;
extern Ptr GMsyscol;
extern Ptr GIsavea4;
extern Ptr GMquote;
extern Ptr GMllcons;
extern Ptr GMmcons;
extern Ptr GItsymb = 0;
extern Ptr GIasymb = 0;
extern Ptr GIksymb = 0;
extern Ptr GIhsymb = 0;
extern Ptr GIcount = 0;
extern Ptr GItabch = 0;
extern Ptr GIcachch = 0;
extern Ptr GIibase = 0;
extern Ptr GIall09 = 0;
extern Ptr GInegatif = 0;
extern Ptr GIquotes = 0;
extern Ptr GIgetchfl = 0;
extern Ptr GIringur = 0;
extern Ptr GIcurread = 0;
extern Ptr GIrdprd = 0;
extern Ptr GIimpli = 0;
extern Ptr GIimpld = 0;
extern Ptr GIbufat = 0;
extern Ptr GIlgbufat = 0;
extern Ptr GIcpkgc = 0;
Ptr GMstatrc = 0;
Ptr GMstinread = 0;
Ptr GMlread = 0;
Ptr GMimplode = 0;
Ptr GMimplodech = 0;
Ptr GMreadch = 0;
Ptr GMreadcod = 0;
Ptr GMlcuread = 0;
Ptr GMteread = 0;
Ptr GMreread = 0;
Ptr GMreadline = 0;
Ptr GMreadstrg = 0;
Ptr GMstratom = 0;
Ptr GMreaddltd = 0;
Ptr GMpeekch = 0;
Ptr GMpeekcn = 0;
Ptr GMconcatpk = 0;
Ptr GMfascii = 0;
Ptr GMcascii = 0;
Ptr GMuppercase = 0;
Ptr GMlowercase = 0;
Ptr GMasciip = 0;
Ptr GMdigitp = 0;
Ptr GMletterp = 0;
Ptr GMfibase = 0;
#define GFlread 1
#define GFimplode 2
#define GFimplodech 2
#define GFreadch 1
#define GFreadcod 1
#define GFlcuread 1
#define GFteread 1
#define GFreread 2
#define GFpeekch 1
#define GFpeekcn 1
#define GFreadline 1
#define GFstratom 4
#define GFreadstrg 1
#define GFreaddltd 2
#define GFfascii 2
#define GFcascii 2
#define GFconcatpk 3
#define GFuppercase 2
#define GFlowercase 2
#define GFasciip 2
#define GFdigitp 2
#define GFletterp 2
#define GFfibase 5

/*	LLM3 functions	*/
extern Ptr GXunbind7(void), GXunbind5(void), GXunbind3(void), GXunbind1(void);
extern Ptr GXpopja4(void), GXpopj9(void), GXpopj8(void), GXpopj7(void);
extern Ptr GXpopj6(void), GXpopj5(void), GXpopj4(void), GXpopj3(void);
extern Ptr GXpopj2(void), GXpopj1(void), GXpopj0(void), GXfibase(void);
extern Ptr GXletterp(void), GXdigitp(void), GXasciip(void), GXlowercase(void);
extern Ptr GXuppercase(void), GXconcatpk(void), GXcascii(void), GXreadstrg(void);
extern Ptr GXstratom(void), GXreadline(void), GXpeekcn(void), GXpeekch(void);
extern Ptr GXreread(void), GXteread(void), GXlcuread(void), GXreadcod(void);
extern Ptr GXreadch(void), GXimplodech(void), GXimplode(void), GXerlec6(void);
extern Ptr GXbase10p(void), GXrdpkgc2(void), GXread2(void), GXgetcv(void);
extern Ptr GXrereada4(void), GXasciii(void), GXgetch(void), GXreadi(void);
extern Ptr GXlread(void), GXreaddltd(void), GXerlec11(void), GXcrastrg(void);
extern Ptr GXtrysympk(void), GXtrysymb(void), GXtrysymp(void), GXtryatom(void);
extern Ptr GXinacst(void), GXinasymb(void), GXinicst(void), GXinisymb(void);
extern Ptr GXhashint(void), GXistdsym(void), GXini_read(void), GXfascii(void);
extern Ptr GXmakevect(void), GXmakestrg(void), GXstrgallc(void), GXstringa1(void);
extern Ptr GXgadiv(void), GXgadinv(void), GXgatim2i(void), GXgaplus2i(void);
extern Ptr GXequal(void), GXlllength(void), GXnreverse(void), GXgetprop(void);
extern Ptr GXsetfn(void), GXgetfns(void), GXllde(void), GXffuncall(void);
extern Ptr GXapply(void), GXevala1(void), GXsysprot(void), GXinphy(void);
extern Ptr GXhgc(void), GXgcsymb(void), GXgcnumb(void), GXgcfloat(void);
extern Ptr GXgccons(void), GXgetsetn(void), GXerrudv(void), GXerrudf(void);
extern Ptr GXerroob(void), GXerrsym(void), GXerrsxt(void), GXerrnsa(void);
extern Ptr GXerrnla(void), GXerrnia(void), GXevalan(void), GXevalt(void);

/*	intern functions	*/
static Ptr GLread_1(void), GLread_2(void), GLread_3(void), GLread_4(void);
static Ptr GLread_5(void), GLread_6(void), GLread_7(void), GLread_8(void);
static Ptr GLread_9(void), GLread_10(void), GLread_11(void), GLread_12(void);
static Ptr GLread_13(void), GLread_14(void), GLread_15(void), GLread_16(void);
static Ptr GLread_17(void), GLread_18(void), GLread_19(void), GLread_20(void);
static Ptr GLread_21(void), GLread_22(void), GLread_23(void), GLread_24(void);
static Ptr GLread_25(void), GLread_26(void), GLread_27(void), GLread_28(void);
static Ptr GLread_29(void), GLread_30(void), GLread_31(void), GLread_32(void);
static Ptr GLread_33(void), GLread_34(void), GLread_35(void), GLread_36(void);
static Ptr GLread_37(void), GLread_38(void), GLread_39(void), GLread_40(void);
static Ptr GLread_41(void), GLread_42(void), GLread_43(void), GLread_44(void);
static Ptr GLread_45(void), GLread_46(void), GLread_47(void), GLread_48(void);
static Ptr GLread_49(void), GLread_50(void), GLread_51(void), GLread_52(void);
static Ptr GLread_53(void), GLread_54(void), GLread_55(void), GLread_56(void);
static Ptr GLread_57(void), GLread_58(void), GLread_59(void), GLread_60(void);
static Ptr GLread_61(void), GLread_62(void), GLread_63(void), GLread_64(void);
static Ptr GLread_65(void), GLread_66(void), GLread_67(void), GLread_68(void);
static Ptr GLread_69(void), GLread_70(void), GLread_71(void), GLread_72(void);
static Ptr GLread_73(void), GLread_74(void), GLread_75(void), GLread_77(void);
static Ptr GLread_78(void), GLread_79(void), GLread_80(void), GLread_81(void);
static Ptr GLread_82(void), GLread_83(void), GLread_84(void), GLread_85(void);
static Ptr GLread_86(void), GLread_87(void), GLread_88(void), GLread_89(void);
static Ptr GLread_90(void), GLread_91(void), GLread_92(void), GLread_93(void);
static Ptr GLread_94(void), GLread_95(void), GLread_96(void), GLread_97(void);
static Ptr GLread_98(void), GLread_99(void), GLread_100(void), GLread_102(void);
static Ptr GLread_103(void), GLread_104(void), GLread_105(void), GLread_106(void);
static Ptr GLread_107(void), GLread_108(void), GLread_109(void), GLread_110(void);
static Ptr GLread_112(void), GLread_113(void), GLread_114(void), GLread_115(void);
static Ptr GLread_116(void), GLread_117(void), GLread_118(void), GLread_119(void);
static Ptr GLread_120(void), GLread_121(void), GLread_122(void), GLread_123(void);
static Ptr GLread_124(void), GLread_125(void), GLread_126(void), GLread_127(void);
static Ptr GLread_128(void), GLread_129(void), GLread_130(void), GLread_131(void);
static Ptr GLread_132(void), GLread_133(void), GLread_134(void), GLread_135(void);
static Ptr GLread_136(void), GLread_137(void), GLread_138(void), GLread_139(void);
static Ptr GLread_140(void), GLread_141(void), GLread_142(void), GLread_143(void);
static Ptr GLread_144(void), GLread_145(void), GLread_146(void), GLread_147(void);
static Ptr GLread_148(void), GLread_150(void), GLread_151(void), GLread_152(void);
static Ptr GLread_153(void), GLread_155(void), GLread_156(void), GLread_157(void);
static Ptr GLread_158(void), GLread_159(void), GLread_160(void), GLread_161(void);
static Ptr GLread_162(void), GLread_164(void), GLread_165(void), GLread_166(void);
static Ptr GLread_167(void), GLread_168(void), GLread_169(void), GLread_170(void);
static Ptr GLread_171(void), GLread_172(void), GLread_173(void), GLread_174(void);
static Ptr GLread_175(void), GLread_176(void), GLread_177(void), GLread_178(void);
static Ptr GLread_179(void), GLread_180(void), GLread_181(void), GLread_182(void);
static Ptr GLread_183(void), GLread_184(void), GLread_185(void), GLread_186(void);
static Ptr GLread_187(void), GLread_188(void), GLread_189(void), GLread_190(void);
static Ptr GLread_191(void), GLread_192(void), GLread_193(void), GLread_194(void);
static Ptr GLread_195(void), GLread_196(void), GLread_197(void), GLread_198(void);
static Ptr GLread_199(void), GLread_200(void);

/*	trace functions	*/
static Ptr GDread_201(void), GDread_202(void), GDread_203(void), GDread_204(void);
static Ptr GDread_205(void), GDread_206(void), GDread_207(void), GDread_208(void);
static Ptr GDread_209(void), GDread_210(void), GDread_211(void), GDread_212(void);
static Ptr GDread_213(void), GDread_214(void), GDread_215(void), GDread_216(void);
static Ptr GDread_217(void), GDread_218(void), GDread_219(void), GDread_220(void);
static Ptr GDread_221(void), GDread_222(void), GDread_223(void);

Ptr (* brx_read_101 []) () = {
	GXgetcv,
	GLread_102,
	GLread_103,
	GLread_104,
	GXpopj0,
	GXpopj0,
	GXpopj0,
	GXpopj0,
	GXpopj0,
	GXpopj0,
	GXpopj0,
	GXpopj0,
	GLread_105,
	GXpopj0,
	GXpopj0};
Ptr (* brx_read_111 []) () = {
	GLread_98,
	GLread_98,
	GLread_98,
	GLread_98,
	GLread_112,
	GLread_113,
	GLread_114,
	GLread_109,
	GLread_115,
	GLread_116,
	GLread_117,
	GLread_118,
	GLread_119,
	GLread_120,
	GLread_121};
Ptr (* brx_read_149 []) () = {
	GXread2,
	GLread_150,
	GLread_150,
	GXpopj0,
	GLread_151};
Ptr (* brx_read_154 []) () = {
	GLread_155,
	GLread_156,
	GLread_157,
	GLread_158,
	GLread_159};
Ptr (* brx_read_163 []) () = {
	GLread_164,
	GLread_165,
	GLread_164,
	GLread_164,
	GLread_164};

static Ptr GYread[29];

static const char GNread[] = "read";
static const char GTread[] = "Sat Oct   7 17 20:53:12 ";

static struct GellEntry GWread[] = {
	{GXlread,	GDread_201,	1},	/* read */
	{GXimplode,	GDread_202,	2},	/* implode */
	{GXimplodech,	GDread_203,	2},	/* implodech */
	{GXreadch,	GDread_204,	1},	/* readch */
	{GXreadcod,	GDread_205,	1},	/* readcn */
	{GXlcuread,	GDread_206,	1},	/* curread */
	{GXteread,	GDread_207,	1},	/* teread */
	{GXreread,	GDread_208,	2},	/* reread */
	{GXpeekch,	GDread_209,	1},	/* peekch */
	{GXpeekcn,	GDread_210,	1},	/* peekcn */
	{GXreadline,	GDread_211,	1},	/* readline */
	{GXstratom,	GDread_212,	4},	/* stratom */
	{GXreadstrg,	GDread_213,	1},	/* readstring */
	{GXreaddltd,	GDread_214,	2},	/* read-delimited-list */
	{GXfascii,	GDread_215,	2},	/* ascii */
	{GXcascii,	GDread_216,	2},	/* cascii */
	{GXconcatpk,	GDread_217,	3},	/* concatpkgc */
	{GXuppercase,	GDread_218,	2},	/* uppercase */
	{GXlowercase,	GDread_219,	2},	/* lowercase */
	{GXasciip,	GDread_220,	2},	/* asciip */
	{GXdigitp,	GDread_221,	2},	/* digitp */
	{GXletterp,	GDread_222,	2},	/* letterp */
	{GXfibase,	GDread_223,	5},	/* ibase */
};

struct GellModule GZread = {
	GELLMODULESTAMP,
	GNread,
	GTread,
	GYread,
	23,
	GWread};
