/* GELL 15.26: include file for the module: "fntstd" */
/*             translation done:            "Sat Oct   7 17 20:53:38 " */

/*	impure LLM3 predefined	*/
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GImstack;
extern Ptr GIfcons;
extern Ptr GIbvar;
extern Ptr GIhashtab;
extern Ptr GMundef;
extern Ptr GMt;
extern Ptr GMvoid;
extern Ptr GIsavea1;
extern Ptr GIsavea2;
extern Ptr GIsavea3;
extern Ptr GIsavea4;
extern Ptr GItabtypfn;
extern Ptr GItabcodfn;
extern Ptr GMquote;
extern Ptr GMprogn;
extern Ptr GMlambda;
extern Ptr GMflambda;
extern Ptr GMmlambda;
Ptr GMtrue = 0;
Ptr GMfalse = 0;
Ptr GMllnot = 0;
Ptr GMllnull = 0;
Ptr GMatom = 0;
Ptr GMatomp = 0;
Ptr GMsymbolp = 0;
Ptr GMvariablep = 0;
Ptr GMconstantp = 0;
Ptr GMvectorp = 0;
Ptr GMstringp = 0;
Ptr GMlistp = 0;
Ptr GMnlistp = 0;
Ptr GMconsp = 0;
Ptr GMboundp = 0;
Ptr GMlleq = 0;
Ptr GMneq = 0;
Ptr GMequal = 0;
Ptr GMnequal = 0;
Ptr GMmemq = 0;
Ptr GMmember = 0;
Ptr GMtailp = 0;
Ptr GMlast = 0;
Ptr GMnthcdr = 0;
Ptr GMnth = 0;
Ptr GMlllength = 0;
Ptr GMllcons = 0;
Ptr GMfxcons = 0;
Ptr GMfncons = 0;
Ptr GMmcons = 0;
Ptr GMlist = 0;
Ptr GMevlis = 0;
Ptr GMkwote = 0;
Ptr GMmakelist = 0;
Ptr GMreverse = 0;
Ptr GMappend = 0;
Ptr GMappnd1 = 0;
Ptr GMremq = 0;
Ptr GMllremove = 0;
Ptr GMcopy = 0;
Ptr GMcopylist = 0;
Ptr GMfirstn = 0;
Ptr GMlastn = 0;
Ptr GMsubst = 0;
Ptr GMoblist = 0;
Ptr GMboblist = 0;
Ptr GMlhoblist = 0;
Ptr GMrplaca = 0;
Ptr GMrplacd = 0;
Ptr GMrplac = 0;
Ptr GMplacdl = 0;
Ptr GMdisplace = 0;
Ptr GMsetq = 0;
Ptr GMfset = 0;
Ptr GMsetqq = 0;
Ptr GMpsetq = 0;
Ptr GMdeset = 0;
Ptr GMdesetq = 0;
Ptr GMcirlist = 0;
Ptr GMnreverse = 0;
Ptr GMnsubst = 0;
Ptr GMdelq = 0;
Ptr GMlldelete = 0;
Ptr GMnreconc = 0;
Ptr GMnextl = 0;
Ptr GMnewl = 0;
Ptr GMnewr = 0;
Ptr GMnconc = 0;
Ptr GMnconc1 = 0;
Ptr GMacons = 0;
Ptr GMpairlis = 0;
Ptr GMassq = 0;
Ptr GMassoc = 0;
Ptr GMcassq = 0;
Ptr GMcassoc = 0;
Ptr GMrassq = 0;
Ptr GMrassoc = 0;
Ptr GMsublis = 0;
#define GFtrue 5
#define GFfalse 5
#define GFllnull 2
#define GFllnot 2
#define GFatom 2
#define GFatomp 2
#define GFsymbolp 2
#define GFvariablep 2
#define GFconstantp 2
#define GFvectorp 2
#define GFstringp 2
#define GFlistp 2
#define GFnlistp 2
#define GFconsp 2
#define GFboundp 2
#define GFlleq 3
#define GFneq 3
#define GFnequal 3
#define GFequal 3
#define GFmemq 3
#define GFmember 3
#define GFtailp 3
#define GFlast 2
#define GFnth 3
#define GFnthcdr 3
#define GFlllength 2
#define GFllcons 3
#define GFfxcons 3
#define GFfncons 2
#define GFmcons 5
#define GFlist 5
#define GFevlis 2
#define GFkwote 2
#define GFmakelist 3
#define GFreverse 2
#define GFappnd1 3
#define GFappend 5
#define GFremq 3
#define GFllremove 3
#define GFcopylist 2
#define GFcopy 2
#define GFfirstn 3
#define GFlastn 3
#define GFsubst 4
#define GFoblist 5
#define GFboblist 5
#define GFlhoblist 2
#define GFrplaca 3
#define GFrplacd 3
#define GFrplac 4
#define GFdisplace 3
#define GFplacdl 3
#define GFsetq 6
#define GFfset 3
#define GFsetqq 6
#define GFpsetq 6
#define GFdeset 3
#define GFdesetq 6
#define GFcirlist 5
#define GFnreconc 3
#define GFnsubst 4
#define GFdelq 3
#define GFlldelete 3
#define GFnreverse 2
#define GFnextl 6
#define GFnewl 6
#define GFnewr 6
#define GFnconc1 3
#define GFnconc 5
#define GFacons 4
#define GFpairlis 4
#define GFassq 3
#define GFassoc 3
#define GFcassq 3
#define GFcassoc 3
#define GFrassq 3
#define GFrassoc 3
#define GFsublis 3

/*	LLM3 functions	*/
extern Ptr GXunbind7(void), GXunbind5(void), GXunbind3(void), GXunbind1(void);
extern Ptr GXpopja4(void), GXpopj9(void), GXpopj8(void), GXpopj7(void);
extern Ptr GXpopj6(void), GXpopj5(void), GXpopj4(void), GXpopj3(void);
extern Ptr GXpopj2(void), GXpopj1(void), GXpopj0(void), GXsublis(void);
extern Ptr GXrassoc(void), GXrassq(void), GXcassoc(void), GXcassq(void);
extern Ptr GXassoc(void), GXassq(void), GXpairlis(void), GXacons(void);
extern Ptr GXnconc(void), GXnconc1(void), GXnewr(void), GXnewl(void);
extern Ptr GXnextl(void), GXlldelete(void), GXdelq(void), GXnsubst(void);
extern Ptr GXcirlist(void), GXdesetq(void), GXpsetq(void), GXsetqq(void);
extern Ptr GXfset(void), GXsetq(void), GXplacdl(void), GXrplac(void);
extern Ptr GXrplacd(void), GXrplaca(void), GXlhoblist(void), GXboblist(void);
extern Ptr GXoblist(void), GXsubst(void), GXlastn(void), GXfirstn(void);
extern Ptr GXcopylist(void), GXllremove(void), GXremq(void), GXappend(void);
extern Ptr GXappnd1(void), GXreverse(void), GXmakelist(void), GXmcons(void);
extern Ptr GXfncons(void), GXfxcons(void), GXllcons(void), GXnthcdr(void);
extern Ptr GXnth(void), GXlast(void), GXtailp(void), GXnequal(void);
extern Ptr GXneq(void), GXlleq(void), GXboundp(void), GXconsp(void);
extern Ptr GXnlistp(void), GXlistp(void), GXstringp(void), GXvectorp(void);
extern Ptr GXconstantp(void), GXvariablep(void), GXsymbolp(void), GXatomp(void);
extern Ptr GXatom(void), GXllnot(void), GXllnull(void), GXfalse(void);
extern Ptr GXtrue(void), GXcopy(void), GXkwote(void), GXnreconc(void);
extern Ptr GXevlis(void), GXdisplace(void), GXlllength(void), GXdeset(void);
extern Ptr GXnreverse(void), GXequal(void), GXlist(void), GXmemq(void);
extern Ptr GXmember(void), GXini_std(void), GXvag(void), GXloc(void);
extern Ptr GXffindex(void), GXeqvectri(void), GXeqstrgi(void), GXmakevect(void);
extern Ptr GXstrgallc(void), GXstringa2(void), GXgaeqn(void), GXapply(void);
extern Ptr GXevala1(void), GXevalcar(void), GXistdsym(void), GXinicst(void);
extern Ptr GXinisymb(void), GXgcnumb(void), GXgcfloat(void), GXgccons(void);
extern Ptr GXerrbpa(void), GXerrilb(void), GXerroob(void), GXerrudv(void);
extern Ptr GXerrudf(void), GXerrwna(void), GXerrnva(void), GXerrnla(void);
extern Ptr GXerrnia(void), GXerrsym(void), GXerrfs(void), GXevalan(void);
extern Ptr GXevalt(void);

/*	intern functions	*/
static Ptr GLfntstd_1(void), GLfntstd_2(void), GLfntstd_3(void), GLfntstd_4(void);
static Ptr GLfntstd_5(void), GLfntstd_6(void), GLfntstd_7(void), GLfntstd_8(void);
static Ptr GLfntstd_9(void), GLfntstd_10(void), GLfntstd_11(void), GLfntstd_12(void);
static Ptr GLfntstd_13(void), GLfntstd_14(void), GLfntstd_15(void), GLfntstd_16(void);
static Ptr GLfntstd_17(void), GLfntstd_18(void), GLfntstd_19(void), GLfntstd_20(void);
static Ptr GLfntstd_21(void), GLfntstd_22(void), GLfntstd_23(void), GLfntstd_24(void);
static Ptr GLfntstd_25(void), GLfntstd_26(void), GLfntstd_27(void), GLfntstd_28(void);
static Ptr GLfntstd_29(void), GLfntstd_30(void), GLfntstd_31(void), GLfntstd_32(void);
static Ptr GLfntstd_33(void), GLfntstd_34(void), GLfntstd_35(void), GLfntstd_36(void);
static Ptr GLfntstd_37(void), GLfntstd_38(void), GLfntstd_39(void), GLfntstd_40(void);
static Ptr GLfntstd_41(void), GLfntstd_42(void), GLfntstd_43(void), GLfntstd_44(void);
static Ptr GLfntstd_45(void), GLfntstd_46(void), GLfntstd_47(void), GLfntstd_48(void);
static Ptr GLfntstd_49(void), GLfntstd_50(void), GLfntstd_51(void), GLfntstd_52(void);
static Ptr GLfntstd_53(void), GLfntstd_54(void), GLfntstd_55(void), GLfntstd_56(void);
static Ptr GLfntstd_57(void), GLfntstd_58(void), GLfntstd_59(void), GLfntstd_60(void);
static Ptr GLfntstd_61(void), GLfntstd_62(void), GLfntstd_63(void), GLfntstd_64(void);
static Ptr GLfntstd_65(void), GLfntstd_66(void), GLfntstd_67(void), GLfntstd_68(void);
static Ptr GLfntstd_69(void), GLfntstd_70(void), GLfntstd_71(void), GLfntstd_72(void);
static Ptr GLfntstd_73(void), GLfntstd_74(void), GLfntstd_75(void), GLfntstd_76(void);
static Ptr GLfntstd_77(void), GLfntstd_78(void), GLfntstd_79(void), GLfntstd_80(void);
static Ptr GLfntstd_81(void), GLfntstd_82(void), GLfntstd_83(void), GLfntstd_84(void);
static Ptr GLfntstd_85(void), GLfntstd_86(void), GLfntstd_87(void), GLfntstd_88(void);
static Ptr GLfntstd_89(void), GLfntstd_90(void), GLfntstd_91(void), GLfntstd_92(void);
static Ptr GLfntstd_93(void), GLfntstd_94(void), GLfntstd_95(void), GLfntstd_96(void);
static Ptr GLfntstd_97(void), GLfntstd_98(void), GLfntstd_99(void), GLfntstd_100(void);
static Ptr GLfntstd_101(void), GLfntstd_102(void), GLfntstd_103(void);

/*	trace functions	*/
static Ptr GDfntstd_104(void), GDfntstd_105(void), GDfntstd_106(void), GDfntstd_107(void);
static Ptr GDfntstd_108(void), GDfntstd_109(void), GDfntstd_110(void), GDfntstd_111(void);
static Ptr GDfntstd_112(void), GDfntstd_113(void), GDfntstd_114(void), GDfntstd_115(void);
static Ptr GDfntstd_116(void), GDfntstd_117(void), GDfntstd_118(void), GDfntstd_119(void);
static Ptr GDfntstd_120(void), GDfntstd_121(void), GDfntstd_122(void), GDfntstd_123(void);
static Ptr GDfntstd_124(void), GDfntstd_125(void), GDfntstd_126(void), GDfntstd_127(void);
static Ptr GDfntstd_128(void), GDfntstd_129(void), GDfntstd_130(void), GDfntstd_131(void);
static Ptr GDfntstd_132(void), GDfntstd_133(void), GDfntstd_134(void), GDfntstd_135(void);
static Ptr GDfntstd_136(void), GDfntstd_137(void), GDfntstd_138(void), GDfntstd_139(void);
static Ptr GDfntstd_140(void), GDfntstd_141(void), GDfntstd_142(void), GDfntstd_143(void);
static Ptr GDfntstd_144(void), GDfntstd_145(void), GDfntstd_146(void), GDfntstd_147(void);
static Ptr GDfntstd_148(void), GDfntstd_149(void), GDfntstd_150(void), GDfntstd_151(void);
static Ptr GDfntstd_152(void), GDfntstd_153(void), GDfntstd_154(void), GDfntstd_155(void);
static Ptr GDfntstd_156(void), GDfntstd_157(void), GDfntstd_158(void), GDfntstd_159(void);
static Ptr GDfntstd_160(void), GDfntstd_161(void), GDfntstd_162(void), GDfntstd_163(void);
static Ptr GDfntstd_164(void), GDfntstd_165(void), GDfntstd_166(void), GDfntstd_167(void);
static Ptr GDfntstd_168(void), GDfntstd_169(void), GDfntstd_170(void), GDfntstd_171(void);
static Ptr GDfntstd_172(void), GDfntstd_173(void), GDfntstd_174(void), GDfntstd_175(void);
static Ptr GDfntstd_176(void), GDfntstd_177(void), GDfntstd_178(void), GDfntstd_179(void);
static Ptr GDfntstd_180(void), GDfntstd_181(void);

static Ptr GYfntstd[84];

static const char GNfntstd[] = "fntstd";
static const char GTfntstd[] = "Sat Oct   7 17 20:53:38 ";

static struct GellEntry GWfntstd[] = {
	{GXtrue,	GDfntstd_104,	5},	/* true */
	{GXfalse,	GDfntstd_105,	5},	/* false */
	{GXllnull,	GDfntstd_106,	2},	/* null */
	{GXllnot,	GDfntstd_107,	2},	/* not */
	{GXatom,	GDfntstd_108,	2},	/* atom */
	{GXatomp,	GDfntstd_109,	2},	/* atomp */
	{GXsymbolp,	GDfntstd_110,	2},	/* symbolp */
	{GXvariablep,	GDfntstd_111,	2},	/* variablep */
	{GXconstantp,	GDfntstd_112,	2},	/* constantp */
	{GXvectorp,	GDfntstd_113,	2},	/* vectorp */
	{GXstringp,	GDfntstd_114,	2},	/* stringp */
	{GXlistp,	GDfntstd_115,	2},	/* listp */
	{GXnlistp,	GDfntstd_116,	2},	/* nlistp */
	{GXconsp,	GDfntstd_117,	2},	/* consp */
	{GXboundp,	GDfntstd_118,	2},	/* boundp */
	{GXlleq,	GDfntstd_119,	3},	/* eq */
	{GXneq,		GDfntstd_120,	3},	/* neq */
	{GXnequal,	GDfntstd_121,	3},	/* nequal */
	{GXequal,	GDfntstd_122,	3},	/* equal */
	{GXmemq,	GDfntstd_123,	3},	/* memq */
	{GXmember,	GDfntstd_124,	3},	/* member */
	{GXtailp,	GDfntstd_125,	3},	/* tailp */
	{GXlast,	GDfntstd_126,	2},	/* last */
	{GXnth,		GDfntstd_127,	3},	/* nth */
	{GXnthcdr,	GDfntstd_128,	3},	/* nthcdr */
	{GXlllength,	GDfntstd_129,	2},	/* length */
	{GXllcons,	GDfntstd_130,	3},	/* cons */
	{GXfxcons,	GDfntstd_131,	3},	/* xcons */
	{GXfncons,	GDfntstd_132,	2},	/* ncons */
	{GXmcons,	GDfntstd_133,	5},	/* mcons */
	{GXlist,	GDfntstd_134,	5},	/* list */
	{GXevlis,	GDfntstd_135,	2},	/* evlis */
	{GXkwote,	GDfntstd_136,	2},	/* kwote */
	{GXmakelist,	GDfntstd_137,	3},	/* makelist */
	{GXreverse,	GDfntstd_138,	2},	/* reverse */
	{GXappnd1,	GDfntstd_139,	3},	/* append1 */
	{GXappend,	GDfntstd_140,	5},	/* append */
	{GXremq,	GDfntstd_141,	3},	/* remq */
	{GXllremove,	GDfntstd_142,	3},	/* remove */
	{GXcopylist,	GDfntstd_143,	2},	/* copylist */
	{GXcopy,	GDfntstd_144,	2},	/* copy */
	{GXfirstn,	GDfntstd_145,	3},	/* firstn */
	{GXlastn,	GDfntstd_146,	3},	/* lastn */
	{GXsubst,	GDfntstd_147,	4},	/* subst */
	{GXoblist,	GDfntstd_148,	5},	/* oblist */
	{GXboblist,	GDfntstd_149,	5},	/* boblist */
	{GXlhoblist,	GDfntstd_150,	2},	/* lhoblist */
	{GXrplaca,	GDfntstd_151,	3},	/* rplaca */
	{GXrplacd,	GDfntstd_152,	3},	/* rplacd */
	{GXrplac,	GDfntstd_153,	4},	/* rplac */
	{GXdisplace,	GDfntstd_154,	3},	/* displace */
	{GXplacdl,	GDfntstd_155,	3},	/* placdl */
	{GXsetq,	GDfntstd_156,	6},	/* setq */
	{GXfset,	GDfntstd_157,	3},	/* set */
	{GXsetqq,	GDfntstd_158,	6},	/* setqq */
	{GXpsetq,	GDfntstd_159,	6},	/* psetq */
	{GXdeset,	GDfntstd_160,	3},	/* deset */
	{GXdesetq,	GDfntstd_161,	6},	/* desetq */
	{GXcirlist,	GDfntstd_162,	5},	/* cirlist */
	{GXnreconc,	GDfntstd_163,	3},	/* nreconc */
	{GXnsubst,	GDfntstd_164,	4},	/* nsubst */
	{GXdelq,	GDfntstd_165,	3},	/* delq */
	{GXlldelete,	GDfntstd_166,	3},	/* delete */
	{GXnreverse,	GDfntstd_167,	2},	/* nreverse */
	{GXnextl,	GDfntstd_168,	6},	/* nextl */
	{GXnewl,	GDfntstd_169,	6},	/* newl */
	{GXnewr,	GDfntstd_170,	6},	/* newr */
	{GXnconc1,	GDfntstd_171,	3},	/* nconc1 */
	{GXnconc,	GDfntstd_172,	5},	/* nconc */
	{GXacons,	GDfntstd_173,	4},	/* acons */
	{GXpairlis,	GDfntstd_174,	4},	/* pairlis */
	{GXassq,	GDfntstd_175,	3},	/* assq */
	{GXassoc,	GDfntstd_176,	3},	/* assoc */
	{GXcassq,	GDfntstd_177,	3},	/* cassq */
	{GXcassoc,	GDfntstd_178,	3},	/* cassoc */
	{GXrassq,	GDfntstd_179,	3},	/* rassq */
	{GXrassoc,	GDfntstd_180,	3},	/* rassoc */
	{GXsublis,	GDfntstd_181,	3},	/* sublis */
};

struct GellModule GZfntstd = {
	GELLMODULESTAMP,
	GNfntstd,
	GTfntstd,
	GYfntstd,
	78,
	GWfntstd};
