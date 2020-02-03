/* GELL 15.26: include file for the module: "gc" */
/*             translation done:            "Wed June 30 93 17:33:45 " */

/*      impure LLM3 predefined  */
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
#define GFgcuser 5
#define GFgcalarb 1
#define GFgcalarm 1
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

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0(), GXstrctacc();
extern Ptr GXsendbi(), GXsupsend(), GXcsend(), GXsenderro();
extern Ptr GXsubtypep(), GXtypep(), GXfrtree(), GXfrcons();
extern Ptr GXtconsp(), GXtconscl(), GXtconsmk(), GXtcons();
extern Ptr GXgcalarm(), GXgcalarb(), GXgcuser(), GXgcswcons();
extern Ptr GXsmpstrg(), GXsmpvect(), GXgcstmrk(), GXllsend();
extern Ptr GXini_gc(), GXhgc(), GXgcnumb(), GXgcfloat();
extern Ptr GXgcvect(), GXgcstrg(), GXgcsymb(), GXgccons();
extern Ptr GXgettype(), GXgcinfo(), GXlist(), GXgetbi();
extern Ptr GXgetfns(), GXsysprot(), GXffuncall(), GXfuncall();
extern Ptr GXprobjt(), GXinicst(), GXinisymb(), GXerrvec();
extern Ptr GXerroob(), GXerrudm(), GXerrudf(), GXerrsym();
extern Ptr GXerrstc(), GXerrnaa(), GXerrwna(), GXerrnla();
extern Ptr GXerrato(), GXerrfv(), GXerrfn(), GXerrff();
extern Ptr GXerrfr(), GXerrfm(), GXerrfsgc(), GXerrfs();
extern Ptr GXitsoft(), GXevalan(), GXevalt();

/*      intern functions        */
static Ptr GLgc_1(), GLgc_2(), GLgc_3(), GLgc_4();
static Ptr GLgc_5(), GLgc_6(), GLgc_7(), GLgc_8();
static Ptr GLgc_9(), GLgc_10(), GLgc_11(), GLgc_12();
static Ptr GLgc_13(), GLgc_14(), GLgc_15(), GLgc_16();
static Ptr GLgc_17(), GLgc_18(), GLgc_19(), GLgc_20();
static Ptr GLgc_21(), GLgc_22(), GLgc_23(), GLgc_24();
static Ptr GLgc_25(), GLgc_26(), GLgc_27(), GLgc_28();
static Ptr GLgc_29(), GLgc_30(), GLgc_39(), GLgc_40();
static Ptr GLgc_41(), GLgc_42(), GLgc_44(), GLgc_54();
static Ptr GLgc_55(), GLgc_56(), GLgc_57(), GLgc_58();
static Ptr GLgc_59(), GLgc_60(), GLgc_61(), GLgc_62();
static Ptr GLgc_63(), GLgc_64(), GLgc_71(), GLgc_72();
static Ptr GLgc_73(), GLgc_74(), GLgc_75(), GLgc_76();
static Ptr GLgc_77(), GLgc_78(), GLgc_79(), GLgc_80();
static Ptr GLgc_81(), GLgc_82(), GLgc_83(), GLgc_84();
static Ptr GLgc_85(), GLgc_86(), GLgc_87(), GLgc_88();
static Ptr GLgc_89(), GLgc_90(), GLgc_91(), GLgc_92();
static Ptr GLgc_93(), GLgc_94(), GLgc_95(), GLgc_96();
static Ptr GLgc_97(), GLgc_98(), GLgc_99(), GLgc_100();
static Ptr GLgc_101(), GLgc_102(), GLgc_103(), GLgc_104();
static Ptr GLgc_105(), GLgc_106(), GLgc_107(), GLgc_108();
static Ptr GLgc_109(), GLgc_110(), GLgc_111(), GLgc_112();
static Ptr GLgc_113(), GLgc_114(), GLgc_115();

/*      trace functions */
static Ptr GDgc_116(), GDgc_117(), GDgc_118(), GDgc_119();
static Ptr GDgc_120(), GDgc_121(), GDgc_122(), GDgc_123();
static Ptr GDgc_124(), GDgc_125(), GDgc_126(), GDgc_127();
static Ptr GDgc_128(), GDgc_129(), GDgc_130(), GDgc_131();
static Ptr GDgc_132(), GDgc_133(), GDgc_134(), GDgc_135();
static Ptr GDgc_136();

static Ptr GYgc[26];

static const char GNgc[] = "gc";
static const char GTgc[] = "Wed June 30 93 17:33:45 ";

static struct GellEntry GWgc[] = {
        {GXgcuser,      GDgc_116,       5},     /* gc */
        {GXgcalarb,     GDgc_117,       1},     /* gc-before-alarm */
        {GXgcalarm,     GDgc_118,       1},     /* gcalarm */
        {GXgcinfo,      GDgc_119,       5},     /* gcinfo */
        {GXtcons,       GDgc_120,       3},     /* tcons */
        {GXtconsmk,     GDgc_121,       2},     /* tconsmk */
        {GXtconscl,     GDgc_122,       2},     /* tconscl */
        {GXtconsp,      GDgc_123,       2},     /* tconsp */
        {GXfrcons,      GDgc_124,       2},     /* freecons */
        {GXfrtree,      GDgc_125,       2},     /* freetree */
        {GXgettype,     GDgc_126,       2},     /* type-of */
        {GXtypep,       GDgc_127,       3},     /* typep */
        {GXsubtypep,    GDgc_128,       3},     /* subtypep */
        {GXllsend,      GDgc_129,       5},     /* send */
        {GXsenderro,    GDgc_130,       3},     /* send-error */
        {GXcsend,       GDgc_131,       5},     /* csend */
        {GXsupsend,     GDgc_132,       5},     /* send-super */
        {GXsendbi,      GDgc_133,       5},     /* send2 */
        {GXstrctacc,    GDgc_134,       5},     /* structaccess */
        {GXsmpvect,     GDgc_135,       2},     /* mapallvector */
        {GXsmpstrg,     GDgc_136,       2},     /* mapallstring */
};

struct GellModule GZgc = {
        GELLMODULESTAMP,
        GNgc,
        GTgc,
        GYgc,
        21,
        GWgc};
