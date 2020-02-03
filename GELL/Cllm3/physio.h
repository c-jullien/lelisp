/* GELL 15.26: include file for the module: "physio" */
/*             translation done:            "Wed June 30 93 17:33:51 " */

/*      impure LLM3 predefined  */
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

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0(), GXrestcor();
extern Ptr GXsavecor(), GXprobefi(), GXremdir(), GXmakdir();
extern Ptr GXcopyfi(), GXrenamfi(), GXdeletfi(), GXlclose();
extern Ptr GXfchannel(), GXoutchan(), GXinchan(), GXoutput();
extern Ptr GXopenab(), GXopenob(), GXopenib(), GXopena();
extern Ptr GXopeno(), GXopeni(), GXcoercns(), GXprompt();
extern Ptr GXlleof(), GXfinbuf(), GXfinpos(), GXfinmax();
extern Ptr GXbol(), GXttytyrds(), GXttytycls(), GXttytycur();
extern Ptr GXttytystr(), GXttytycn(), GXttytynew(), GXttytybac();
extern Ptr GXttytyflu(), GXttytyo(), GXttytyist(), GXttytys();
extern Ptr GXttytyi(), GXtyrdspl(), GXtycls(), GXtycn();
extern Ptr GXtyback(), GXtyflush(), GXtyinstrg(), GXtys();
extern Ptr GXtyi(), GXphytrue(), GXtynewln(), GXtystrg();
extern Ptr GXtycursor(), GXtyo(), GXrestcori(), GXinput();
extern Ptr GXinphy(), GXini_pio(), GXrdpscrn(), GXstrgallc();
extern Ptr GXmakevect(), GXmakestrg(), GXstringa2(), GXstringa1();
extern Ptr GXcopy(), GXgetfns(), GXffuncall(), GXsysprot();
extern Ptr GXfindtag(), GXflulin(), GXoutch(), GXerlec11();
extern Ptr GXinicst(), GXinisymb(), GXgcnumb(), GXgcfloat();
extern Ptr GXgccons(), GXgetsetn(), GXerrnsa(), GXerrudf();
extern Ptr GXerrwna(), GXerrios(), GXerrnaa(), GXerrnia();
extern Ptr GXitsoft(), GXevalan(), GXevalt();

/*      intern functions        */
static Ptr GLphysio_1(), GLphysio_2(), GLphysio_3(), GLphysio_4();
static Ptr GLphysio_5(), GLphysio_6(), GLphysio_7(), GLphysio_8();
static Ptr GLphysio_9(), GLphysio_10(), GLphysio_11(), GLphysio_12();
static Ptr GLphysio_13(), GLphysio_14(), GLphysio_15(), GLphysio_16();
static Ptr GLphysio_17(), GLphysio_18(), GLphysio_19(), GLphysio_20();
static Ptr GLphysio_21(), GLphysio_22(), GLphysio_23(), GLphysio_24();
static Ptr GLphysio_25(), GLphysio_26(), GLphysio_27(), GLphysio_28();
static Ptr GLphysio_29(), GLphysio_30(), GLphysio_31(), GLphysio_32();
static Ptr GLphysio_33(), GLphysio_34(), GLphysio_35(), GLphysio_36();
static Ptr GLphysio_37(), GLphysio_38(), GLphysio_39(), GLphysio_40();
static Ptr GLphysio_41(), GLphysio_42(), GLphysio_43(), GLphysio_44();
static Ptr GLphysio_45(), GLphysio_46(), GLphysio_47(), GLphysio_48();
static Ptr GLphysio_49(), GLphysio_50(), GLphysio_51(), GLphysio_52();
static Ptr GLphysio_53(), GLphysio_54(), GLphysio_55(), GLphysio_56();
static Ptr GLphysio_57(), GLphysio_58(), GLphysio_59(), GLphysio_60();
static Ptr GLphysio_61(), GLphysio_62(), GLphysio_63(), GLphysio_64();
static Ptr GLphysio_65(), GLphysio_66(), GLphysio_67(), GLphysio_68();
static Ptr GLphysio_69(), GLphysio_70(), GLphysio_71(), GLphysio_72();
static Ptr GLphysio_73(), GLphysio_74(), GLphysio_75(), GLphysio_76();
static Ptr GLphysio_77(), GLphysio_78(), GLphysio_79(), GLphysio_80();
static Ptr GLphysio_81(), GLphysio_82(), GLphysio_83(), GLphysio_84();
static Ptr GLphysio_85(), GLphysio_86(), GLphysio_87(), GLphysio_88();
static Ptr GLphysio_89(), GLphysio_90(), GLphysio_91(), GLphysio_92();
static Ptr GLphysio_93(), GLphysio_94(), GLphysio_95(), GLphysio_96();
static Ptr GLphysio_97(), GLphysio_98(), GLphysio_99(), GLphysio_100();
static Ptr GLphysio_101(), GLphysio_102(), GLphysio_103(), GLphysio_104();
static Ptr GLphysio_105(), GLphysio_106(), GLphysio_107(), GLphysio_108();
static Ptr GLphysio_109(), GLphysio_110(), GLphysio_111(), GLphysio_112();
static Ptr GLphysio_113(), GLphysio_114(), GLphysio_115(), GLphysio_116();
static Ptr GLphysio_117(), GLphysio_118(), GLphysio_119(), GLphysio_120();
static Ptr GLphysio_121(), GLphysio_122(), GLphysio_123(), GLphysio_124();
static Ptr GLphysio_125(), GLphysio_126(), GLphysio_127(), GLphysio_128();
static Ptr GLphysio_129(), GLphysio_130(), GLphysio_131(), GLphysio_132();
static Ptr GLphysio_133(), GLphysio_134(), GLphysio_135(), GLphysio_136();
static Ptr GLphysio_137(), GLphysio_138(), GLphysio_139(), GLphysio_140();
static Ptr GLphysio_141(), GLphysio_142(), GLphysio_143(), GLphysio_144();
static Ptr GLphysio_145(), GLphysio_146();

/*      trace functions */
static Ptr GDphysio_147(), GDphysio_148(), GDphysio_149(), GDphysio_150();
static Ptr GDphysio_151(), GDphysio_152(), GDphysio_153(), GDphysio_154();
static Ptr GDphysio_155(), GDphysio_156(), GDphysio_157(), GDphysio_158();
static Ptr GDphysio_159(), GDphysio_160(), GDphysio_161(), GDphysio_162();
static Ptr GDphysio_163(), GDphysio_164(), GDphysio_165(), GDphysio_166();
static Ptr GDphysio_167(), GDphysio_168(), GDphysio_169(), GDphysio_170();
static Ptr GDphysio_171(), GDphysio_172(), GDphysio_173(), GDphysio_174();
static Ptr GDphysio_175(), GDphysio_176(), GDphysio_177(), GDphysio_178();
static Ptr GDphysio_179(), GDphysio_180(), GDphysio_181(), GDphysio_182();
static Ptr GDphysio_183(), GDphysio_184(), GDphysio_185(), GDphysio_186();
static Ptr GDphysio_187(), GDphysio_188(), GDphysio_189(), GDphysio_190();
static Ptr GDphysio_191(), GDphysio_192(), GDphysio_193(), GDphysio_194();
static Ptr GDphysio_195(), GDphysio_196(), GDphysio_197();

static Ptr GYphysio[56];

static const char GNphysio[] = "physio";
static const char GTphysio[] = "Wed June 30 93 17:33:51 ";

static struct GellEntry GWphysio[] = {
        {GXtyi,         GDphysio_147,   1},     /* tyi */
        {GXtys,         GDphysio_148,   1},     /* tys */
        {GXtyinstrg,    GDphysio_149,   2},     /* tyinstring */
        {GXtyflush,     GDphysio_150,   1},     /* tyflush */
        {GXtyo,         GDphysio_151,   5},     /* tyo */
        {GXtyback,      GDphysio_152,   2},     /* tyback */
        {GXtynewln,     GDphysio_153,   1},     /* tynewline */
        {GXtycn,        GDphysio_154,   2},     /* tycn */
        {GXtystrg,      GDphysio_155,   3},     /* tystring */
        {GXtycursor,    GDphysio_156,   3},     /* tycursor */
        {GXtycls,       GDphysio_157,   1},     /* tycls */
        {GXtyrdspl,     GDphysio_158,   5},     /* redisplayscreen */
        {GXttytyi,      GDphysio_159,   1},     /* #:gell:tyi */
        {GXttytys,      GDphysio_160,   1},     /* #:gell:tys */
        {GXttytyist,    GDphysio_161,   2},     /* #:gell:tyinstring */
        {GXttytyo,      GDphysio_162,   5},     /* #:gell:tyo */
        {GXttytyflu,    GDphysio_163,   1},     /* #:gell:tyflush */
        {GXttytybac,    GDphysio_164,   2},     /* #:gell:tyback */
        {GXttytynew,    GDphysio_165,   1},     /* #:gell:tynewline */
        {GXttytycn,     GDphysio_166,   2},     /* #:gell:tycn */
        {GXttytystr,    GDphysio_167,   3},     /* #:gell:tystring */
        {GXttytycur,    GDphysio_168,   3},     /* #:gell:tycursor */
        {GXttytycls,    GDphysio_169,   1},     /* #:gell:tycls */
        {GXttytyrds,    GDphysio_170,   5},     /* #:gell:redisplayscreen */
        {GXbol,         GDphysio_171,   1},     /* bol */
        {GXfinmax,      GDphysio_172,   5},     /* inmax */
        {GXfinpos,      GDphysio_173,   5},     /* inpos */
        {GXfinbuf,      GDphysio_174,   5},     /* inbuf */
        {GXlleof,       GDphysio_175,   2},     /* eof */
        {GXprompt,      GDphysio_176,   5},     /* prompt */
        {GXcoercns,     GDphysio_177,   2},     /* coerce-namestring */
        {GXopeni,       GDphysio_178,   2},     /* openi */
        {GXopeno,       GDphysio_179,   2},     /* openo */
        {GXopena,       GDphysio_180,   2},     /* opena */
        {GXopenib,      GDphysio_181,   2},     /* openib */
        {GXopenob,      GDphysio_182,   2},     /* openob */
        {GXopenab,      GDphysio_183,   2},     /* openab */
        {GXinput,       GDphysio_184,   2},     /* input */
        {GXoutput,      GDphysio_185,   2},     /* output */
        {GXinchan,      GDphysio_186,   5},     /* inchan */
        {GXoutchan,     GDphysio_187,   5},     /* outchan */
        {GXfchannel,    GDphysio_188,   5},     /* channel */
        {GXlclose,      GDphysio_189,   5},     /* close */
        {GXdeletfi,     GDphysio_190,   2},     /* deletefile */
        {GXrenamfi,     GDphysio_191,   3},     /* renamefile */
        {GXcopyfi,      GDphysio_192,   3},     /* copyfile */
        {GXmakdir,      GDphysio_193,   2},     /* create-directory */
        {GXremdir,      GDphysio_194,   2},     /* delete-directory */
        {GXprobefi,     GDphysio_195,   2},     /* probefile */
        {GXsavecor,     GDphysio_196,   2},     /* save-core */
        {GXrestcor,     GDphysio_197,   2},     /* restore-core */
};

struct GellModule GZphysio = {
        GELLMODULESTAMP,
        GNphysio,
        GTphysio,
        GYphysio,
        51,
        GWphysio};
