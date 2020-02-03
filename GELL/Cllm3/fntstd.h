/* GELL 15.26: include file for the module: "fntstd" */
/*             translation done:            "Wed June 30 93 17:34:40 " */

/*      impure LLM3 predefined  */
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
Ptr GMremove = 0;
Ptr GMcopy = 0;
Ptr GMcopylist = 0;
Ptr GMfirstn = 0;
Ptr GMlastn = 0;
Ptr GMsubst = 0;
Ptr GMoblist = 0;
Ptr GMboblist = 0;
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
Ptr GMdelete = 0;
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
#define GFremove 3
#define GFcopylist 2
#define GFcopy 2
#define GFfirstn 3
#define GFlastn 3
#define GFsubst 4
#define GFoblist 5
#define GFboblist 5
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
#define GFdelete 3
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

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0(), GXsublis();
extern Ptr GXrassoc(), GXrassq(), GXcassoc(), GXcassq();
extern Ptr GXassoc(), GXassq(), GXpairlis(), GXacons();
extern Ptr GXnconc(), GXnconc1(), GXnewr(), GXnewl();
extern Ptr GXnextl(), GXdelete(), GXdelq(), GXnsubst();
extern Ptr GXcirlist(), GXdesetq(), GXpsetq(), GXsetqq();
extern Ptr GXfset(), GXsetq(), GXplacdl(), GXrplac();
extern Ptr GXrplacd(), GXrplaca(), GXboblist(), GXoblist();
extern Ptr GXsubst(), GXlastn(), GXfirstn(), GXcopylist();
extern Ptr GXremove(), GXremq(), GXappend(), GXappnd1();
extern Ptr GXreverse(), GXmakelist(), GXmcons(), GXfncons();
extern Ptr GXfxcons(), GXllcons(), GXnthcdr(), GXnth();
extern Ptr GXlast(), GXtailp(), GXnequal(), GXneq();
extern Ptr GXlleq(), GXboundp(), GXconsp(), GXnlistp();
extern Ptr GXlistp(), GXstringp(), GXvectorp(), GXconstantp();
extern Ptr GXvariablep(), GXsymbolp(), GXatomp(), GXatom();
extern Ptr GXllnot(), GXllnull(), GXfalse(), GXtrue();
extern Ptr GXcopy(), GXkwote(), GXnreconc(), GXevlis();
extern Ptr GXdisplace(), GXlllength(), GXdeset(), GXnreverse();
extern Ptr GXequal(), GXlist(), GXmemq(), GXmember();
extern Ptr GXini_std(), GXvag(), GXloc(), GXeqvectri();
extern Ptr GXeqstrgi(), GXmakevect(), GXstrgallc(), GXstringa2();
extern Ptr GXgaeqn(), GXapply(), GXevala1(), GXevalcar();
extern Ptr GXistdsym(), GXinicst(), GXinisymb(), GXgcnumb();
extern Ptr GXgcfloat(), GXgccons(), GXerrbpa(), GXerrilb();
extern Ptr GXerroob(), GXerrudv(), GXerrudf(), GXerrwna();
extern Ptr GXerrnva(), GXerrnla(), GXerrnia(), GXerrsym();
extern Ptr GXerrfs(), GXevalan(), GXevalt();

/*      intern functions        */
static Ptr GLfntstd_1(), GLfntstd_2(), GLfntstd_3(), GLfntstd_4();
static Ptr GLfntstd_5(), GLfntstd_6(), GLfntstd_7(), GLfntstd_8();
static Ptr GLfntstd_9(), GLfntstd_10(), GLfntstd_11(), GLfntstd_12();
static Ptr GLfntstd_13(), GLfntstd_14(), GLfntstd_15(), GLfntstd_16();
static Ptr GLfntstd_17(), GLfntstd_18(), GLfntstd_19(), GLfntstd_20();
static Ptr GLfntstd_21(), GLfntstd_22(), GLfntstd_23(), GLfntstd_24();
static Ptr GLfntstd_25(), GLfntstd_26(), GLfntstd_27(), GLfntstd_28();
static Ptr GLfntstd_29(), GLfntstd_30(), GLfntstd_31(), GLfntstd_32();
static Ptr GLfntstd_33(), GLfntstd_34(), GLfntstd_35(), GLfntstd_36();
static Ptr GLfntstd_37(), GLfntstd_38(), GLfntstd_39(), GLfntstd_40();
static Ptr GLfntstd_41(), GLfntstd_42(), GLfntstd_43(), GLfntstd_44();
static Ptr GLfntstd_45(), GLfntstd_46(), GLfntstd_47(), GLfntstd_48();
static Ptr GLfntstd_49(), GLfntstd_50(), GLfntstd_51(), GLfntstd_52();
static Ptr GLfntstd_53(), GLfntstd_54(), GLfntstd_55(), GLfntstd_56();
static Ptr GLfntstd_57(), GLfntstd_58(), GLfntstd_59(), GLfntstd_60();
static Ptr GLfntstd_61(), GLfntstd_62(), GLfntstd_63(), GLfntstd_64();
static Ptr GLfntstd_65(), GLfntstd_66(), GLfntstd_67(), GLfntstd_68();
static Ptr GLfntstd_69(), GLfntstd_70(), GLfntstd_71(), GLfntstd_72();
static Ptr GLfntstd_73(), GLfntstd_74(), GLfntstd_75(), GLfntstd_76();
static Ptr GLfntstd_77(), GLfntstd_78(), GLfntstd_79(), GLfntstd_80();
static Ptr GLfntstd_81(), GLfntstd_82(), GLfntstd_83(), GLfntstd_84();
static Ptr GLfntstd_85(), GLfntstd_86(), GLfntstd_87(), GLfntstd_88();
static Ptr GLfntstd_89(), GLfntstd_90(), GLfntstd_91(), GLfntstd_92();
static Ptr GLfntstd_93(), GLfntstd_94(), GLfntstd_95(), GLfntstd_96();

/*      trace functions */
static Ptr GDfntstd_97(), GDfntstd_98(), GDfntstd_99(), GDfntstd_100();
static Ptr GDfntstd_101(), GDfntstd_102(), GDfntstd_103(), GDfntstd_104();
static Ptr GDfntstd_105(), GDfntstd_106(), GDfntstd_107(), GDfntstd_108();
static Ptr GDfntstd_109(), GDfntstd_110(), GDfntstd_111(), GDfntstd_112();
static Ptr GDfntstd_113(), GDfntstd_114(), GDfntstd_115(), GDfntstd_116();
static Ptr GDfntstd_117(), GDfntstd_118(), GDfntstd_119(), GDfntstd_120();
static Ptr GDfntstd_121(), GDfntstd_122(), GDfntstd_123(), GDfntstd_124();
static Ptr GDfntstd_125(), GDfntstd_126(), GDfntstd_127(), GDfntstd_128();
static Ptr GDfntstd_129(), GDfntstd_130(), GDfntstd_131(), GDfntstd_132();
static Ptr GDfntstd_133(), GDfntstd_134(), GDfntstd_135(), GDfntstd_136();
static Ptr GDfntstd_137(), GDfntstd_138(), GDfntstd_139(), GDfntstd_140();
static Ptr GDfntstd_141(), GDfntstd_142(), GDfntstd_143(), GDfntstd_144();
static Ptr GDfntstd_145(), GDfntstd_146(), GDfntstd_147(), GDfntstd_148();
static Ptr GDfntstd_149(), GDfntstd_150(), GDfntstd_151(), GDfntstd_152();
static Ptr GDfntstd_153(), GDfntstd_154(), GDfntstd_155(), GDfntstd_156();
static Ptr GDfntstd_157(), GDfntstd_158(), GDfntstd_159(), GDfntstd_160();
static Ptr GDfntstd_161(), GDfntstd_162(), GDfntstd_163(), GDfntstd_164();
static Ptr GDfntstd_165(), GDfntstd_166(), GDfntstd_167(), GDfntstd_168();
static Ptr GDfntstd_169(), GDfntstd_170(), GDfntstd_171(), GDfntstd_172();
static Ptr GDfntstd_173();

static Ptr GYfntstd[83];

static const char GNfntstd[] = "fntstd";
static const char GTfntstd[] = "Wed June 30 93 17:34:40 ";

static struct GellEntry GWfntstd[] = {
        {GXtrue,        GDfntstd_97,    5},     /* true */
        {GXfalse,       GDfntstd_98,    5},     /* false */
        {GXllnull,      GDfntstd_99,    2},     /* null */
        {GXllnot,       GDfntstd_100,   2},     /* not */
        {GXatom,        GDfntstd_101,   2},     /* atom */
        {GXatomp,       GDfntstd_102,   2},     /* atomp */
        {GXsymbolp,     GDfntstd_103,   2},     /* symbolp */
        {GXvariablep,   GDfntstd_104,   2},     /* variablep */
        {GXconstantp,   GDfntstd_105,   2},     /* constantp */
        {GXvectorp,     GDfntstd_106,   2},     /* vectorp */
        {GXstringp,     GDfntstd_107,   2},     /* stringp */
        {GXlistp,       GDfntstd_108,   2},     /* listp */
        {GXnlistp,      GDfntstd_109,   2},     /* nlistp */
        {GXconsp,       GDfntstd_110,   2},     /* consp */
        {GXboundp,      GDfntstd_111,   2},     /* boundp */
        {GXlleq,        GDfntstd_112,   3},     /* eq */
        {GXneq,         GDfntstd_113,   3},     /* neq */
        {GXnequal,      GDfntstd_114,   3},     /* nequal */
        {GXequal,       GDfntstd_115,   3},     /* equal */
        {GXmemq,        GDfntstd_116,   3},     /* memq */
        {GXmember,      GDfntstd_117,   3},     /* member */
        {GXtailp,       GDfntstd_118,   3},     /* tailp */
        {GXlast,        GDfntstd_119,   2},     /* last */
        {GXnth,         GDfntstd_120,   3},     /* nth */
        {GXnthcdr,      GDfntstd_121,   3},     /* nthcdr */
        {GXlllength,    GDfntstd_122,   2},     /* length */
        {GXllcons,      GDfntstd_123,   3},     /* cons */
        {GXfxcons,      GDfntstd_124,   3},     /* xcons */
        {GXfncons,      GDfntstd_125,   2},     /* ncons */
        {GXmcons,       GDfntstd_126,   5},     /* mcons */
        {GXlist,        GDfntstd_127,   5},     /* list */
        {GXevlis,       GDfntstd_128,   2},     /* evlis */
        {GXkwote,       GDfntstd_129,   2},     /* kwote */
        {GXmakelist,    GDfntstd_130,   3},     /* makelist */
        {GXreverse,     GDfntstd_131,   2},     /* reverse */
        {GXappnd1,      GDfntstd_132,   3},     /* append1 */
        {GXappend,      GDfntstd_133,   5},     /* append */
        {GXremq,        GDfntstd_134,   3},     /* remq */
        {GXremove,      GDfntstd_135,   3},     /* remove */
        {GXcopylist,    GDfntstd_136,   2},     /* copylist */
        {GXcopy,        GDfntstd_137,   2},     /* copy */
        {GXfirstn,      GDfntstd_138,   3},     /* firstn */
        {GXlastn,       GDfntstd_139,   3},     /* lastn */
        {GXsubst,       GDfntstd_140,   4},     /* subst */
        {GXoblist,      GDfntstd_141,   5},     /* oblist */
        {GXboblist,     GDfntstd_142,   5},     /* boblist */
        {GXrplaca,      GDfntstd_143,   3},     /* rplaca */
        {GXrplacd,      GDfntstd_144,   3},     /* rplacd */
        {GXrplac,       GDfntstd_145,   4},     /* rplac */
        {GXdisplace,    GDfntstd_146,   3},     /* displace */
        {GXplacdl,      GDfntstd_147,   3},     /* placdl */
        {GXsetq,        GDfntstd_148,   6},     /* setq */
        {GXfset,        GDfntstd_149,   3},     /* set */
        {GXsetqq,       GDfntstd_150,   6},     /* setqq */
        {GXpsetq,       GDfntstd_151,   6},     /* psetq */
        {GXdeset,       GDfntstd_152,   3},     /* deset */
        {GXdesetq,      GDfntstd_153,   6},     /* desetq */
        {GXcirlist,     GDfntstd_154,   5},     /* cirlist */
        {GXnreconc,     GDfntstd_155,   3},     /* nreconc */
        {GXnsubst,      GDfntstd_156,   4},     /* nsubst */
        {GXdelq,        GDfntstd_157,   3},     /* delq */
        {GXdelete,      GDfntstd_158,   3},     /* delete */
        {GXnreverse,    GDfntstd_159,   2},     /* nreverse */
        {GXnextl,       GDfntstd_160,   6},     /* nextl */
        {GXnewl,        GDfntstd_161,   6},     /* newl */
        {GXnewr,        GDfntstd_162,   6},     /* newr */
        {GXnconc1,      GDfntstd_163,   3},     /* nconc1 */
        {GXnconc,       GDfntstd_164,   5},     /* nconc */
        {GXacons,       GDfntstd_165,   4},     /* acons */
        {GXpairlis,     GDfntstd_166,   4},     /* pairlis */
        {GXassq,        GDfntstd_167,   3},     /* assq */
        {GXassoc,       GDfntstd_168,   3},     /* assoc */
        {GXcassq,       GDfntstd_169,   3},     /* cassq */
        {GXcassoc,      GDfntstd_170,   3},     /* cassoc */
        {GXrassq,       GDfntstd_171,   3},     /* rassq */
        {GXrassoc,      GDfntstd_172,   3},     /* rassoc */
        {GXsublis,      GDfntstd_173,   3},     /* sublis */
};

struct GellModule GZfntstd = {
        GELLMODULESTAMP,
        GNfntstd,
        GTfntstd,
        GYfntstd,
        77,
        GWfntstd};
