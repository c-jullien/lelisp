/* GELL 15.26: include file for the module: "print" */
/*             translation done:            "Wed June 30 93 17:34:10 " */

/*      impure LLM3 predefined  */
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
#define GFfptype 5
#define GFfobase 5
#define GFprline 5
#define GFprlevel 5
#define GFprlength 5
#define GFlmargin 5
#define GFrmargin 5
#define GFoutpos 5
#define GFoutbuf 5

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0(), GXoutbuf();
extern Ptr GXoutpos(), GXrmargin(), GXlmargin(), GXprlength();
extern Ptr GXprlevel(), GXprline(), GXfobase(), GXfptype();
extern Ptr GXexplode(), GXprincod(), GXprinch(), GXterpri();
extern Ptr GXprinflush(), GXprint(), GXprin(), GXupratom();
extern Ptr GXllfflush(), GXeol(), GXu_print(), GXprobjt();
extern Ptr GXprobj(), GXflulin(), GXoutch(), GXini_print();
extern Ptr GXstrgsymb(), GXmakestrg(), GXstringa1(), GXgetnumi();
extern Ptr GXlist(), GXgetfns(), GXunbind3(), GXfindtag();
extern Ptr GXsysprot(), GXffuncall(), GXinicst(), GXinisymb();
extern Ptr GXtynewln(), GXtystrg(), GXgettype(), GXgcnumb();
extern Ptr GXgcfloat(), GXgccons(), GXgetsetn(), GXerrwna();
extern Ptr GXerrvec(), GXerroob(), GXerrnva(), GXerrnla();
extern Ptr GXerrnia(), GXerrsym(), GXerrfsp(), GXitsoft();
extern Ptr GXevalan(), GXevalt();

/*      intern functions        */
static Ptr GLprint_1(), GLprint_2(), GLprint_3(), GLprint_4();
static Ptr GLprint_5(), GLprint_6(), GLprint_7(), GLprint_8();
static Ptr GLprint_9(), GLprint_10(), GLprint_11(), GLprint_12();
static Ptr GLprint_13(), GLprint_14(), GLprint_15(), GLprint_16();
static Ptr GLprint_17(), GLprint_18(), GLprint_19(), GLprint_20();
static Ptr GLprint_21(), GLprint_22(), GLprint_23(), GLprint_24();
static Ptr GLprint_25(), GLprint_26(), GLprint_27(), GLprint_28();
static Ptr GLprint_29(), GLprint_30(), GLprint_31(), GLprint_32();
static Ptr GLprint_33(), GLprint_34(), GLprint_35(), GLprint_36();
static Ptr GLprint_37(), GLprint_38(), GLprint_39(), GLprint_40();
static Ptr GLprint_41(), GLprint_42(), GLprint_43(), GLprint_44();
static Ptr GLprint_45(), GLprint_46(), GLprint_47(), GLprint_48();
static Ptr GLprint_49(), GLprint_50(), GLprint_51(), GLprint_52();
static Ptr GLprint_53(), GLprint_54(), GLprint_55(), GLprint_56();
static Ptr GLprint_57(), GLprint_58(), GLprint_59(), GLprint_60();
static Ptr GLprint_61(), GLprint_62(), GLprint_63(), GLprint_64();
static Ptr GLprint_65(), GLprint_66(), GLprint_67(), GLprint_68();
static Ptr GLprint_69(), GLprint_70(), GLprint_71(), GLprint_72();
static Ptr GLprint_73(), GLprint_74(), GLprint_75(), GLprint_76();
static Ptr GLprint_77(), GLprint_78(), GLprint_79(), GLprint_80();
static Ptr GLprint_81(), GLprint_82(), GLprint_83(), GLprint_84();
static Ptr GLprint_85(), GLprint_86(), GLprint_87(), GLprint_88();
static Ptr GLprint_89(), GLprint_90(), GLprint_91(), GLprint_92();
static Ptr GLprint_93(), GLprint_94(), GLprint_95(), GLprint_96();
static Ptr GLprint_97(), GLprint_98(), GLprint_99(), GLprint_100();
static Ptr GLprint_101(), GLprint_102(), GLprint_103(), GLprint_104();
static Ptr GLprint_105(), GLprint_106(), GLprint_107(), GLprint_108();
static Ptr GLprint_109(), GLprint_110(), GLprint_111(), GLprint_112();
static Ptr GLprint_113(), GLprint_114(), GLprint_115(), GLprint_116();
static Ptr GLprint_117(), GLprint_118(), GLprint_119(), GLprint_120();
static Ptr GLprint_121(), GLprint_122(), GLprint_123(), GLprint_124();
static Ptr GLprint_125(), GLprint_126(), GLprint_127(), GLprint_128();
static Ptr GLprint_129(), GLprint_130(), GLprint_131(), GLprint_132();
static Ptr GLprint_133(), GLprint_134(), GLprint_135(), GLprint_136();
static Ptr GLprint_137(), GLprint_138(), GLprint_139(), GLprint_140();
static Ptr GLprint_141(), GLprint_142(), GLprint_143(), GLprint_144();
static Ptr GLprint_145(), GLprint_146(), GLprint_147(), GLprint_148();
static Ptr GLprint_149();

/*      trace functions */
static Ptr GDprint_150(), GDprint_151(), GDprint_152(), GDprint_153();
static Ptr GDprint_154(), GDprint_155(), GDprint_156(), GDprint_157();
static Ptr GDprint_158(), GDprint_159(), GDprint_160(), GDprint_161();
static Ptr GDprint_162(), GDprint_163(), GDprint_164(), GDprint_165();
static Ptr GDprint_166(), GDprint_167(), GDprint_168();

static Ptr GYprint[23];

static const char GNprint[] = "print";
static const char GTprint[] = "Wed June 30 93 17:34:10 ";

static struct GellEntry GWprint[] = {
        {GXeol,         GDprint_150,    1},     /* eol */
        {GXllfflush,    GDprint_151,    1},     /* flush */
        {GXupratom,     GDprint_152,    2},     /* pratom */
        {GXprin,        GDprint_153,    5},     /* prin */
        {GXprint,       GDprint_154,    5},     /* print */
        {GXprinflush,   GDprint_155,    5},     /* prinflush */
        {GXterpri,      GDprint_156,    5},     /* terpri */
        {GXprinch,      GDprint_157,    5},     /* princh */
        {GXprincod,     GDprint_158,    5},     /* princn */
        {GXexplode,     GDprint_159,    2},     /* explode */
        {GXfptype,      GDprint_160,    5},     /* ptype */
        {GXfobase,      GDprint_161,    5},     /* obase */
        {GXprline,      GDprint_162,    5},     /* printline */
        {GXprlevel,     GDprint_163,    5},     /* printlevel */
        {GXprlength,    GDprint_164,    5},     /* printlength */
        {GXlmargin,     GDprint_165,    5},     /* lmargin */
        {GXrmargin,     GDprint_166,    5},     /* rmargin */
        {GXoutpos,      GDprint_167,    5},     /* outpos */
        {GXoutbuf,      GDprint_168,    5},     /* outbuf */
};

struct GellModule GZprint = {
        GELLMODULESTAMP,
        GNprint,
        GTprint,
        GYprint,
        19,
        GWprint};
