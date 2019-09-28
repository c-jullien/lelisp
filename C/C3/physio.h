/* GELL 15.26: include file for the module: "physio" */
/*             translation done:            "Sat Oct   7 17 20:53:07 " */

/*	impure LLM3 predefined	*/
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GMundef;
extern Ptr GIfcons;
extern Ptr GIbvar;
extern Ptr GMt;
extern Ptr GMitsoft;
extern Ptr GImaxchan;
extern Ptr GMllsystem;
extern Ptr GMsyspkgc;
extern Ptr GMstinread;
extern Ptr GIringur;
extern Ptr GIcurread;
extern Ptr GIcpkgc;
extern Ptr GIbufout;
extern Ptr GIpocour;
extern Ptr GInbleft;
extern Ptr GInbrig;
extern Ptr GImaxpocou;
extern Ptr GIsavea4;
Ptr GMtyi = 0;
Ptr GMtys = 0;
Ptr GMtyinstrg = 0;
Ptr GMtyo = 0;
Ptr GMtyflush = 0;
Ptr GMtyback = 0;
Ptr GMtynewln = 0;
Ptr GMtycn = 0;
Ptr GMtystrg = 0;
Ptr GMtycursor = 0;
Ptr GMtycls = 0;
Ptr GMtyrdspl = 0;
Ptr GMtty = 0;
Ptr GMttytyi = 0;
Ptr GMttytys = 0;
Ptr GMttytyist = 0;
Ptr GMttytyo = 0;
Ptr GMttytyflu = 0;
Ptr GMttytybac = 0;
Ptr GMttytynew = 0;
Ptr GMttytycn = 0;
Ptr GMttytystr = 0;
Ptr GMttytycur = 0;
Ptr GMttytycls = 0;
Ptr GMttytyrds = 0;
Ptr GMsyspktty = 0;
Ptr GMtyco = 0;
Ptr GMbol = 0;
Ptr GMfinmax = 0;
Ptr GMfinpos = 0;
Ptr GMfinbuf = 0;
Ptr GMlleof = 0;
Ptr GMprompt = 0;
Ptr GMstdprmpt = 0;
Ptr GMrealterm = 0;
Ptr GMlinemode = 0;
Ptr GMopeni = 0;
Ptr GMopeno = 0;
Ptr GMopena = 0;
Ptr GMopenib = 0;
Ptr GMopenob = 0;
Ptr GMopenab = 0;
Ptr GMinput = 0;
Ptr GMinchan = 0;
Ptr GMoutchan = 0;
Ptr GMfchannel = 0;
Ptr GMoutput = 0;
Ptr GMlclose = 0;
Ptr GMdeletfi = 0;
Ptr GMrenamfi = 0;
Ptr GMcopyfi = 0;
Ptr GMprobefi = 0;
Ptr GMsavecor = 0;
Ptr GMrestcor = 0;
Ptr GMcoercns = 0;
Ptr GMmakdir = 0;
Ptr GMremdir = 0;
#define GFtyi 1
#define GFtys 1
#define GFtyinstrg 2
#define GFtyflush 1
#define GFtyo 5
#define GFtyback 2
#define GFtynewln 1
#define GFtycn 2
#define GFtystrg 3
#define GFtycursor 3
#define GFtycls 1
#define GFtyrdspl 5
#define GFttytyi 1
#define GFttytys 1
#define GFttytyist 2
#define GFttytyo 5
#define GFttytyflu 1
#define GFttytybac 2
#define GFttytynew 1
#define GFttytycn 2
#define GFttytystr 3
#define GFttytycur 3
#define GFttytycls 1
#define GFttytyrds 5
#define GFbol 1
#define GFfinmax 5
#define GFfinpos 5
#define GFfinbuf 5
#define GFlleof 2
#define GFprompt 5
#define GFcoercns 2
#define GFopeni 2
#define GFopeno 2
#define GFopena 2
#define GFopenib 2
#define GFopenob 2
#define GFopenab 2
#define GFinput 2
#define GFoutput 2
#define GFinchan 5
#define GFoutchan 5
#define GFfchannel 5
#define GFlclose 5
#define GFdeletfi 2
#define GFrenamfi 3
#define GFcopyfi 3
#define GFmakdir 2
#define GFremdir 2
#define GFprobefi 2
#define GFsavecor 2
#define GFrestcor 2
extern Ptr GIistream = 0;
extern Ptr GIostream = 0;
extern Ptr GItabchan = 0;
extern Ptr GIcurinch = 0;
extern Ptr GIcuroutch = 0;
extern Ptr GIlgbuffer = 0;
extern Ptr GIcntrlc = 0;
extern Ptr GIbufch = 0;
extern Ptr GIrubstrg = 0;
extern Ptr GIcurprmpt = 0;
extern Ptr GIligne = 0;
extern Ptr GIpolig = 0;
extern Ptr GIinmax = 0;

/*	LLM3 functions	*/
extern Ptr GXunbind7(void), GXunbind5(void), GXunbind3(void), GXunbind1(void);
extern Ptr GXpopja4(void), GXpopj9(void), GXpopj8(void), GXpopj7(void);
extern Ptr GXpopj6(void), GXpopj5(void), GXpopj4(void), GXpopj3(void);
extern Ptr GXpopj2(void), GXpopj1(void), GXpopj0(void), GXrestcor(void);
extern Ptr GXsavecor(void), GXprobefi(void), GXremdir(void), GXmakdir(void);
extern Ptr GXcopyfi(void), GXrenamfi(void), GXdeletfi(void), GXlclose(void);
extern Ptr GXfchannel(void), GXoutchan(void), GXinchan(void), GXoutput(void);
extern Ptr GXopenab(void), GXopenob(void), GXopenib(void), GXopena(void);
extern Ptr GXopeno(void), GXopeni(void), GXcoercns(void), GXprompt(void);
extern Ptr GXlleof(void), GXfinbuf(void), GXfinpos(void), GXfinmax(void);
extern Ptr GXbol(void), GXttytyrds(void), GXttytycls(void), GXttytycur(void);
extern Ptr GXttytystr(void), GXttytycn(void), GXttytynew(void), GXttytybac(void);
extern Ptr GXttytyflu(void), GXttytyo(void), GXttytyist(void), GXttytys(void);
extern Ptr GXttytyi(void), GXtyrdspl(void), GXtycls(void), GXtycn(void);
extern Ptr GXtyback(void), GXtyflush(void), GXtyinstrg(void), GXtys(void);
extern Ptr GXtyi(void), GXphytrue(void), GXtynewln(void), GXtystrg(void);
extern Ptr GXtycursor(void), GXtyo(void), GXrestcori(void), GXinput(void);
extern Ptr GXinphy(void), GXini_pio(void), GXrdpscrn(void), GXstrgallc(void);
extern Ptr GXmakevect(void), GXmakestrg(void), GXstringa2(void), GXstringa1(void);
extern Ptr GXcopy(void), GXgetfns(void), GXffuncall(void), GXsysprot(void);
extern Ptr GXfindtag(void), GXflulin(void), GXoutch(void), GXerlec11(void);
extern Ptr GXinicst(void), GXinisymb(void), GXgcnumb(void), GXgcfloat(void);
extern Ptr GXgccons(void), GXgetsetn(void), GXerrnsa(void), GXerrudf(void);
extern Ptr GXerrwna(void), GXerrios(void), GXerrnaa(void), GXerrnia(void);
extern Ptr GXitsoft(void), GXevalan(void), GXevalt(void);

/*	intern functions	*/
static Ptr GLphysio_1(void), GLphysio_2(void), GLphysio_3(void), GLphysio_4(void);
static Ptr GLphysio_5(void), GLphysio_6(void), GLphysio_7(void), GLphysio_8(void);
static Ptr GLphysio_9(void), GLphysio_10(void), GLphysio_11(void), GLphysio_12(void);
static Ptr GLphysio_13(void), GLphysio_14(void), GLphysio_15(void), GLphysio_16(void);
static Ptr GLphysio_17(void), GLphysio_18(void), GLphysio_19(void), GLphysio_20(void);
static Ptr GLphysio_21(void), GLphysio_22(void), GLphysio_23(void), GLphysio_24(void);
static Ptr GLphysio_25(void), GLphysio_26(void), GLphysio_27(void), GLphysio_28(void);
static Ptr GLphysio_29(void), GLphysio_30(void), GLphysio_31(void), GLphysio_32(void);
static Ptr GLphysio_33(void), GLphysio_34(void), GLphysio_35(void), GLphysio_36(void);
static Ptr GLphysio_37(void), GLphysio_38(void), GLphysio_39(void), GLphysio_40(void);
static Ptr GLphysio_41(void), GLphysio_42(void), GLphysio_43(void), GLphysio_44(void);
static Ptr GLphysio_45(void), GLphysio_46(void), GLphysio_47(void), GLphysio_48(void);
static Ptr GLphysio_49(void), GLphysio_50(void), GLphysio_51(void), GLphysio_52(void);
static Ptr GLphysio_53(void), GLphysio_54(void), GLphysio_55(void), GLphysio_56(void);
static Ptr GLphysio_57(void), GLphysio_58(void), GLphysio_59(void), GLphysio_60(void);
static Ptr GLphysio_61(void), GLphysio_62(void), GLphysio_63(void), GLphysio_64(void);
static Ptr GLphysio_65(void), GLphysio_66(void), GLphysio_67(void), GLphysio_68(void);
static Ptr GLphysio_69(void), GLphysio_70(void), GLphysio_71(void), GLphysio_72(void);
static Ptr GLphysio_73(void), GLphysio_74(void), GLphysio_75(void), GLphysio_76(void);
static Ptr GLphysio_77(void), GLphysio_78(void), GLphysio_79(void), GLphysio_80(void);
static Ptr GLphysio_81(void), GLphysio_82(void), GLphysio_83(void), GLphysio_84(void);
static Ptr GLphysio_85(void), GLphysio_86(void), GLphysio_87(void), GLphysio_88(void);
static Ptr GLphysio_89(void), GLphysio_90(void), GLphysio_91(void), GLphysio_92(void);
static Ptr GLphysio_93(void), GLphysio_94(void), GLphysio_95(void), GLphysio_96(void);
static Ptr GLphysio_97(void), GLphysio_98(void), GLphysio_99(void), GLphysio_100(void);
static Ptr GLphysio_101(void), GLphysio_102(void), GLphysio_103(void), GLphysio_104(void);
static Ptr GLphysio_105(void), GLphysio_106(void), GLphysio_107(void), GLphysio_108(void);
static Ptr GLphysio_109(void), GLphysio_110(void), GLphysio_111(void), GLphysio_112(void);
static Ptr GLphysio_113(void), GLphysio_114(void), GLphysio_115(void), GLphysio_116(void);
static Ptr GLphysio_117(void), GLphysio_118(void), GLphysio_119(void), GLphysio_120(void);
static Ptr GLphysio_121(void), GLphysio_122(void), GLphysio_123(void), GLphysio_124(void);
static Ptr GLphysio_125(void), GLphysio_126(void), GLphysio_127(void), GLphysio_128(void);
static Ptr GLphysio_129(void), GLphysio_130(void), GLphysio_131(void), GLphysio_132(void);
static Ptr GLphysio_133(void), GLphysio_134(void), GLphysio_135(void), GLphysio_136(void);
static Ptr GLphysio_137(void), GLphysio_138(void), GLphysio_139(void), GLphysio_140(void);
static Ptr GLphysio_141(void), GLphysio_142(void), GLphysio_143(void), GLphysio_144(void);
static Ptr GLphysio_145(void), GLphysio_146(void);

/*	trace functions	*/
static Ptr GDphysio_147(void), GDphysio_148(void), GDphysio_149(void), GDphysio_150(void);
static Ptr GDphysio_151(void), GDphysio_152(void), GDphysio_153(void), GDphysio_154(void);
static Ptr GDphysio_155(void), GDphysio_156(void), GDphysio_157(void), GDphysio_158(void);
static Ptr GDphysio_159(void), GDphysio_160(void), GDphysio_161(void), GDphysio_162(void);
static Ptr GDphysio_163(void), GDphysio_164(void), GDphysio_165(void), GDphysio_166(void);
static Ptr GDphysio_167(void), GDphysio_168(void), GDphysio_169(void), GDphysio_170(void);
static Ptr GDphysio_171(void), GDphysio_172(void), GDphysio_173(void), GDphysio_174(void);
static Ptr GDphysio_175(void), GDphysio_176(void), GDphysio_177(void), GDphysio_178(void);
static Ptr GDphysio_179(void), GDphysio_180(void), GDphysio_181(void), GDphysio_182(void);
static Ptr GDphysio_183(void), GDphysio_184(void), GDphysio_185(void), GDphysio_186(void);
static Ptr GDphysio_187(void), GDphysio_188(void), GDphysio_189(void), GDphysio_190(void);
static Ptr GDphysio_191(void), GDphysio_192(void), GDphysio_193(void), GDphysio_194(void);
static Ptr GDphysio_195(void), GDphysio_196(void), GDphysio_197(void);

static Ptr GYphysio[56];

static const char GNphysio[] = "physio";
static const char GTphysio[] = "Sat Oct   7 17 20:53:07 ";

static struct GellEntry GWphysio[] = {
	{GXtyi,		GDphysio_147,	1},	/* tyi */
	{GXtys,		GDphysio_148,	1},	/* tys */
	{GXtyinstrg,	GDphysio_149,	2},	/* tyinstring */
	{GXtyflush,	GDphysio_150,	1},	/* tyflush */
	{GXtyo,		GDphysio_151,	5},	/* tyo */
	{GXtyback,	GDphysio_152,	2},	/* tyback */
	{GXtynewln,	GDphysio_153,	1},	/* tynewline */
	{GXtycn,	GDphysio_154,	2},	/* tycn */
	{GXtystrg,	GDphysio_155,	3},	/* tystring */
	{GXtycursor,	GDphysio_156,	3},	/* tycursor */
	{GXtycls,	GDphysio_157,	1},	/* tycls */
	{GXtyrdspl,	GDphysio_158,	5},	/* redisplayscreen */
	{GXttytyi,	GDphysio_159,	1},	/* #:gell:tyi */
	{GXttytys,	GDphysio_160,	1},	/* #:gell:tys */
	{GXttytyist,	GDphysio_161,	2},	/* #:gell:tyinstring */
	{GXttytyo,	GDphysio_162,	5},	/* #:gell:tyo */
	{GXttytyflu,	GDphysio_163,	1},	/* #:gell:tyflush */
	{GXttytybac,	GDphysio_164,	2},	/* #:gell:tyback */
	{GXttytynew,	GDphysio_165,	1},	/* #:gell:tynewline */
	{GXttytycn,	GDphysio_166,	2},	/* #:gell:tycn */
	{GXttytystr,	GDphysio_167,	3},	/* #:gell:tystring */
	{GXttytycur,	GDphysio_168,	3},	/* #:gell:tycursor */
	{GXttytycls,	GDphysio_169,	1},	/* #:gell:tycls */
	{GXttytyrds,	GDphysio_170,	5},	/* #:gell:redisplayscreen */
	{GXbol,		GDphysio_171,	1},	/* bol */
	{GXfinmax,	GDphysio_172,	5},	/* inmax */
	{GXfinpos,	GDphysio_173,	5},	/* inpos */
	{GXfinbuf,	GDphysio_174,	5},	/* inbuf */
	{GXlleof,	GDphysio_175,	2},	/* eof */
	{GXprompt,	GDphysio_176,	5},	/* prompt */
	{GXcoercns,	GDphysio_177,	2},	/* coerce-namestring */
	{GXopeni,	GDphysio_178,	2},	/* openi */
	{GXopeno,	GDphysio_179,	2},	/* openo */
	{GXopena,	GDphysio_180,	2},	/* opena */
	{GXopenib,	GDphysio_181,	2},	/* openib */
	{GXopenob,	GDphysio_182,	2},	/* openob */
	{GXopenab,	GDphysio_183,	2},	/* openab */
	{GXinput,	GDphysio_184,	2},	/* input */
	{GXoutput,	GDphysio_185,	2},	/* output */
	{GXinchan,	GDphysio_186,	5},	/* inchan */
	{GXoutchan,	GDphysio_187,	5},	/* outchan */
	{GXfchannel,	GDphysio_188,	5},	/* channel */
	{GXlclose,	GDphysio_189,	5},	/* close */
	{GXdeletfi,	GDphysio_190,	2},	/* deletefile */
	{GXrenamfi,	GDphysio_191,	3},	/* renamefile */
	{GXcopyfi,	GDphysio_192,	3},	/* copyfile */
	{GXmakdir,	GDphysio_193,	2},	/* create-directory */
	{GXremdir,	GDphysio_194,	2},	/* delete-directory */
	{GXprobefi,	GDphysio_195,	2},	/* probefile */
	{GXsavecor,	GDphysio_196,	2},	/* save-core */
	{GXrestcor,	GDphysio_197,	2},	/* restore-core */
};

struct GellModule GZphysio = {
	GELLMODULESTAMP,
	GNphysio,
	GTphysio,
	GYphysio,
	51,
	GWphysio};
