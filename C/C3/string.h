/* GELL 15.26: include file for the module: "string" */
/*             translation done:            "Sat Oct   7 17 20:53:51 " */

/*	impure LLM3 predefined	*/
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GMundef;
extern Ptr GIfcons;
extern Ptr GIbvar;
extern Ptr GMt;
extern Ptr GMvoid;
extern Ptr GIeheap;
extern Ptr GIcheap;
extern Ptr GIfvect;
extern Ptr GIfstrg;
extern Ptr GMllsystem;
extern Ptr GMtyrdspl;
extern Ptr GIcpkgc;
extern Ptr GIbufpn;
extern Ptr GIobase;
extern Ptr GIsavea1;
extern Ptr GIsavea2;
extern Ptr GIsavea3;
extern Ptr GIsavea4;
extern Ptr GIocheap = 0;
extern Ptr GIbufstrg = 0;
Ptr GMstring = 0;
Ptr GMplength = 0;
Ptr GMslength = 0;
Ptr GMslen = 0;
Ptr GMsref = 0;
Ptr GMsset = 0;
Ptr GMtypestrg = 0;
Ptr GMexchstrg = 0;
Ptr GMcaten = 0;
Ptr GMeqstring = 0;
Ptr GMsubsequal = 0;
Ptr GMsubstring = 0;
Ptr GMmakestrg = 0;
Ptr GMduplstrg = 0;
Ptr GMbltstrg = 0;
Ptr GMfillstrg = 0;
Ptr GMscanstrg = 0;
Ptr GMspanstrg = 0;
Ptr GMchrpos = 0;
Ptr GMchrnth = 0;
Ptr GMchrset = 0;
Ptr GMffindex = 0;
Ptr GMhash = 0;
Ptr GMffsymbol = 0;
Ptr GMfpnam = 0;
Ptr GMconcat = 0;
Ptr GMgensym = 0;
Ptr GMalphales = 0;
Ptr GMbltscrn = 0;
Ptr GMtypevect = 0;
Ptr GMexchvect = 0;
Ptr GMmakevect = 0;
Ptr GMvlength = 0;
Ptr GMeqvector = 0;
Ptr GMvref = 0;
Ptr GMvset = 0;
Ptr GMbltvect = 0;
Ptr GMvector = 0;
Ptr GMfillvect = 0;
Ptr GMgenstrg = 0;
Ptr GMgenscpt = 0;
#define GFstring 2
#define GFplength 2
#define GFslength 2
#define GFslen 2
#define GFcaten 5
#define GFsubsequal 5
#define GFeqstring 3
#define GFsubstring 5
#define GFmakestrg 3
#define GFduplstrg 3
#define GFbltstrg 5
#define GFfillstrg 5
#define GFscanstrg 5
#define GFspanstrg 5
#define GFchrpos 5
#define GFsref 3
#define GFchrnth 3
#define GFsset 4
#define GFchrset 4
#define GFtypestrg 5
#define GFexchstrg 3
#define GFffindex 5
#define GFalphales 3
#define GFffsymbol 3
#define GFconcat 5
#define GFhash 2
#define GFfpnam 2
#define GFgensym 1
extern Ptr GIwd = 0;
extern Ptr GIws = 0;
extern Ptr GIdlx = 0;
extern Ptr GIdly = 0;
extern Ptr GIoldid = 0;
extern Ptr GIoldx = 0;
extern Ptr GIllid = 0;
extern Ptr GIllis = 0;
extern Ptr GIxr = 0;
extern Ptr GIyr = 0;
extern Ptr GIys = 0;
#define GFbltscrn 5
#define GFtypevect 5
#define GFmakevect 3
#define GFvlength 2
#define GFeqvector 3
#define GFvref 3
#define GFvset 4
#define GFbltvect 5
#define GFvector 5
#define GFexchvect 3
#define GFfillvect 5

/*	LLM3 functions	*/
extern Ptr GXunbind7(void), GXunbind5(void), GXunbind3(void), GXunbind1(void);
extern Ptr GXpopja4(void), GXpopj9(void), GXpopj8(void), GXpopj7(void);
extern Ptr GXpopj6(void), GXpopj5(void), GXpopj4(void), GXpopj3(void);
extern Ptr GXpopj2(void), GXpopj1(void), GXpopj0(void), GXfillvect(void);
extern Ptr GXexchvect(void), GXvector(void), GXbltvect(void), GXvset(void);
extern Ptr GXvref(void), GXeqvector(void), GXvlength(void), GXtypevect(void);
extern Ptr GXbltscrn(void), GXgensym(void), GXfpnam(void), GXhash(void);
extern Ptr GXconcat(void), GXalphales(void), GXexchstrg(void), GXtypestrg(void);
extern Ptr GXchrset(void), GXsset(void), GXchrnth(void), GXsref(void);
extern Ptr GXchrpos(void), GXspanstrg(void), GXscanstrg(void), GXfillstrg(void);
extern Ptr GXbltstrg(void), GXduplstrg(void), GXsubstring(void), GXeqstring(void);
extern Ptr GXsubsequal(void), GXcaten(void), GXslen(void), GXslength(void);
extern Ptr GXplength(void), GXstring(void), GXffindex(void), GXrdpscrn(void);
extern Ptr GXeqvectri(void), GXmakevect(void), GXmakestrg(void), GXeqstrgi(void);
extern Ptr GXstringa2(void), GXstringa1(void), GXstrgsymb(void), GXgetnumi(void);
extern Ptr GXstrgallc(void), GXffsymbol(void), GXini_str(void), GXequal(void);
extern Ptr GXnreverse(void), GXffuncall(void), GXhashint(void), GXtrysympk(void);
extern Ptr GXtrysymp(void), GXinicst(void), GXinisymb(void), GXtycursor(void);
extern Ptr GXtyo(void), GXhgc(void), GXgcvect(void), GXgcstrg(void);
extern Ptr GXgcnumb(void), GXgcfloat(void), GXgccons(void), GXerrstl(void);
extern Ptr GXerrnsa(void), GXerrfh(void), GXerroob(void), GXerrvec(void);
extern Ptr GXerrsym(void), GXerrnaa(void), GXerrnia(void), GXerrwna(void);
extern Ptr GXerrfs(void), GXevalan(void), GXevalt(void);

/*	intern functions	*/
static Ptr GLstring_1(void), GLstring_2(void), GLstring_3(void), GLstring_4(void);
static Ptr GLstring_5(void), GLstring_6(void), GLstring_7(void), GLstring_8(void);
static Ptr GLstring_9(void), GLstring_10(void), GLstring_11(void), GLstring_12(void);
static Ptr GLstring_13(void), GLstring_14(void), GLstring_15(void), GLstring_16(void);
static Ptr GLstring_17(void), GLstring_18(void), GLstring_19(void), GLstring_20(void);
static Ptr GLstring_21(void), GLstring_22(void), GLstring_23(void), GLstring_24(void);
static Ptr GLstring_25(void), GLstring_26(void), GLstring_27(void), GLstring_28(void);
static Ptr GLstring_29(void), GLstring_30(void), GLstring_31(void), GLstring_32(void);
static Ptr GLstring_33(void), GLstring_34(void), GLstring_35(void), GLstring_36(void);
static Ptr GLstring_37(void), GLstring_38(void), GLstring_39(void), GLstring_40(void);
static Ptr GLstring_41(void), GLstring_42(void), GLstring_43(void), GLstring_44(void);
static Ptr GLstring_45(void), GLstring_46(void), GLstring_47(void), GLstring_48(void);
static Ptr GLstring_49(void), GLstring_50(void), GLstring_51(void), GLstring_52(void);
static Ptr GLstring_53(void), GLstring_54(void), GLstring_55(void), GLstring_57(void);
static Ptr GLstring_59(void), GLstring_61(void), GLstring_62(void), GLstring_63(void);
static Ptr GLstring_64(void), GLstring_65(void), GLstring_66(void), GLstring_67(void);
static Ptr GLstring_68(void), GLstring_69(void), GLstring_70(void), GLstring_71(void);
static Ptr GLstring_72(void), GLstring_73(void), GLstring_74(void), GLstring_75(void);
static Ptr GLstring_76(void), GLstring_77(void), GLstring_78(void), GLstring_79(void);
static Ptr GLstring_80(void), GLstring_81(void), GLstring_83(void), GLstring_84(void);
static Ptr GLstring_85(void), GLstring_86(void), GLstring_87(void), GLstring_88(void);
static Ptr GLstring_89(void), GLstring_90(void), GLstring_92(void), GLstring_93(void);
static Ptr GLstring_94(void), GLstring_95(void), GLstring_96(void), GLstring_97(void);
static Ptr GLstring_98(void), GLstring_99(void), GLstring_100(void), GLstring_101(void);
static Ptr GLstring_102(void), GLstring_103(void), GLstring_104(void), GLstring_105(void);
static Ptr GLstring_106(void), GLstring_107(void), GLstring_108(void), GLstring_109(void);
static Ptr GLstring_110(void), GLstring_111(void), GLstring_112(void), GLstring_113(void);
static Ptr GLstring_114(void), GLstring_115(void), GLstring_116(void), GLstring_117(void);
static Ptr GLstring_118(void), GLstring_119(void), GLstring_120(void), GLstring_121(void);
static Ptr GLstring_122(void);

/*	trace functions	*/
static Ptr GDstring_123(void), GDstring_124(void), GDstring_125(void), GDstring_126(void);
static Ptr GDstring_127(void), GDstring_128(void), GDstring_129(void), GDstring_130(void);
static Ptr GDstring_131(void), GDstring_132(void), GDstring_133(void), GDstring_134(void);
static Ptr GDstring_135(void), GDstring_136(void), GDstring_137(void), GDstring_138(void);
static Ptr GDstring_139(void), GDstring_140(void), GDstring_141(void), GDstring_142(void);
static Ptr GDstring_143(void), GDstring_144(void), GDstring_145(void), GDstring_146(void);
static Ptr GDstring_147(void), GDstring_148(void), GDstring_149(void), GDstring_150(void);
static Ptr GDstring_151(void), GDstring_152(void), GDstring_153(void), GDstring_154(void);
static Ptr GDstring_155(void), GDstring_156(void), GDstring_157(void), GDstring_158(void);
static Ptr GDstring_159(void), GDstring_160(void), GDstring_161(void);

static Ptr GYstring[45];

static const char GNstring[] = "string";
static const char GTstring[] = "Sat Oct   7 17 20:53:51 ";

static struct GellEntry GWstring[] = {
	{GXstring,	GDstring_123,	2},	/* string */
	{GXplength,	GDstring_124,	2},	/* plength */
	{GXslength,	GDstring_125,	2},	/* slength */
	{GXslen,	GDstring_126,	2},	/* slen */
	{GXcaten,	GDstring_127,	5},	/* catenate */
	{GXsubsequal,	GDstring_128,	5},	/* substring-equal */
	{GXeqstring,	GDstring_129,	3},	/* eqstring */
	{GXsubstring,	GDstring_130,	5},	/* substring */
	{GXmakestrg,	GDstring_131,	3},	/* makestring */
	{GXduplstrg,	GDstring_132,	3},	/* duplstring */
	{GXbltstrg,	GDstring_133,	5},	/* bltstring */
	{GXfillstrg,	GDstring_134,	5},	/* fillstring */
	{GXscanstrg,	GDstring_135,	5},	/* scanstring */
	{GXspanstrg,	GDstring_136,	5},	/* spanstring */
	{GXchrpos,	GDstring_137,	5},	/* chrpos */
	{GXsref,	GDstring_138,	3},	/* sref */
	{GXchrnth,	GDstring_139,	3},	/* chrnth */
	{GXsset,	GDstring_140,	4},	/* sset */
	{GXchrset,	GDstring_141,	4},	/* chrset */
	{GXtypestrg,	GDstring_142,	5},	/* typestring */
	{GXexchstrg,	GDstring_143,	3},	/* exchstring */
	{GXffindex,	GDstring_144,	5},	/* index */
	{GXalphales,	GDstring_145,	3},	/* alphalessp */
	{GXffsymbol,	GDstring_146,	3},	/* symbol */
	{GXconcat,	GDstring_147,	5},	/* concat */
	{GXhash,	GDstring_148,	2},	/* hash */
	{GXfpnam,	GDstring_149,	2},	/* pname */
	{GXgensym,	GDstring_150,	1},	/* gensym */
	{GXbltscrn,	GDstring_151,	5},	/* bltscreen */
	{GXtypevect,	GDstring_152,	5},	/* typevector */
	{GXmakevect,	GDstring_153,	3},	/* makevector */
	{GXvlength,	GDstring_154,	2},	/* vlength */
	{GXeqvector,	GDstring_155,	3},	/* eqvector */
	{GXvref,	GDstring_156,	3},	/* vref */
	{GXvset,	GDstring_157,	4},	/* vset */
	{GXbltvect,	GDstring_158,	5},	/* bltvector */
	{GXvector,	GDstring_159,	5},	/* vector */
	{GXexchvect,	GDstring_160,	3},	/* exchvector */
	{GXfillvect,	GDstring_161,	5},	/* fillvector */
};

struct GellModule GZstring = {
	GELLMODULESTAMP,
	GNstring,
	GTstring,
	GYstring,
	39,
	GWstring};
