/* GELL 15.26: include file for the module: "eval" */
/*             translation done:            "Wed June 30 93 17:34:16 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GMundef;
extern Ptr GIfcons;
extern Ptr GIbvar;
extern Ptr GMt;
extern Ptr GMvoid;
extern Ptr GMitsoft;
extern Ptr GMsyspkgc;
extern Ptr GImstack;
extern Ptr GIcpkgc;
extern Ptr GMlambda;
extern Ptr GMflambda;
extern Ptr GMmlambda;
extern Ptr GIllink = 0;
extern Ptr GIevalst = 0;
extern Ptr GIforme = 0;
extern Ptr GIfunct = 0;
extern Ptr GIsavea1 = 0;
extern Ptr GIsavea2 = 0;
extern Ptr GIsavea3 = 0;
extern Ptr GIsavea4 = 0;
extern Ptr GIerrname = 0;
extern Ptr GIintret = 0;
extern Ptr GIintllink = 0;
extern Ptr GIdlink = 0;
extern Ptr GIrvbser = 0;
Ptr GMsysits = 0;
Ptr GMeval = 0;
Ptr GMevalwhen = 0;
Ptr GMsymeval = 0;
Ptr GMllarg = 0;
Ptr GMnobind = 0;
Ptr GMtraceval = 0;
Ptr GMstepeval = 0;
Ptr GMuapply = 0;
Ptr GMfuncall = 0;
Ptr GMtag = 0;
Ptr GMevtag = 0;
Ptr GMuntlxit = 0;
Ptr GMffexit = 0;
Ptr GMevexit = 0;
Ptr GMunwind = 0;
Ptr GMunexit = 0;
Ptr GMllock = 0;
Ptr GMprotect = 0;
Ptr GMlet = 0;
Ptr GMletseq = 0;
Ptr GMletv = 0;
Ptr GMletvq = 0;
Ptr GMflet = 0;
Ptr GMfunction = 0;
Ptr GMclosure = 0;
Ptr GMrarrow = 0;
Ptr GMlarrow = 0;
#define GFeval 5
#define GFevalwhen 6
#define GFsymeval 2
#define GFllarg 5
#define GFtraceval 5
#define GFstepeval 5
#define GFfuncall 5
#define GFuapply 5
#define GFlet 12
#define GFletseq 6
#define GFletv 6
#define GFletvq 6
#define GFflet 6
#define GFtag 6
#define GFevtag 6
#define GFevexit 6
#define GFuntlxit 6
#define GFffexit 6
#define GFunexit 6
#define GFunwind 6
#define GFllock 6
#define GFprotect 6
#define GFfunction 6

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0(), GXfunction();
extern Ptr GXprotect(), GXllock(), GXunwind(), GXunexit();
extern Ptr GXffexit(), GXuntlxit(), GXevexit(), GXevtag();
extern Ptr GXtag(), GXflet(), GXletvq(), GXletv();
extern Ptr GXletseq(), GXlet(), GXuapply(), GXstepeval();
extern Ptr GXtraceval(), GXllarg(), GXsymeval(), GXevalwhen();
extern Ptr GXgettype(), GXlllength(), GXdisplace(), GXevlis();
extern Ptr GXnreverse(), GXfindfn(), GXgetfns(), GXgetfn1();
extern Ptr GXprobjt(), GXprobj(), GXinicst(), GXinisymb();
extern Ptr GXgcnumb(), GXgcfloat(), GXgccons(), GXerrxia();
extern Ptr GXerrnab(), GXerrilb(), GXerrbal(), GXerrbpa();
extern Ptr GXerroob(), GXerrwna(), GXerrudt(), GXerrudf();
extern Ptr GXerrudv(), GXerrnva(), GXerrnla(), GXerrnia();
extern Ptr GXerrsym(), GXerres(), GXerrfs(), GXevbale();
extern Ptr GXbndtrbex(), GXunbise(), GXevbser(), GXevbndext();
extern Ptr GXevprognr(), GXevprogn(), GXunbinp(), GXevexpg();
extern Ptr GXfuncall(), GXffuncall(), GXapply(), GXevalc();
extern Ptr GXeval(), GXfindtag(), GXsysprot(), GXllsupit();
extern Ptr GXllitsoft(), GXevala1(), GXevalcar(), GXunbind10();
extern Ptr GXunbind9(), GXunbind8(), GXunbind7(), GXunbind6();
extern Ptr GXunbind5(), GXunbind4(), GXunbind3(), GXunbind2();
extern Ptr GXunbinp1(), GXunbind1(), GXunbind0(), GXini_eval();
extern Ptr GXevalan(), GXevalt();

/*      intern functions        */
static Ptr GLeval_1(), GLeval_2(), GLeval_3(), GLeval_4();
static Ptr GLeval_5(), GLeval_6(), GLeval_7(), GLeval_8();
static Ptr GLeval_9(), GLeval_10(), GLeval_11(), GLeval_13();
static Ptr GLeval_14(), GLeval_15(), GLeval_16(), GLeval_17();
static Ptr GLeval_18(), GLeval_19(), GLeval_20(), GLeval_21();
static Ptr GLeval_22(), GLeval_23(), GLeval_24(), GLeval_25();
static Ptr GLeval_26(), GLeval_27(), GLeval_28(), GLeval_29();
static Ptr GLeval_30(), GLeval_31(), GLeval_32(), GLeval_33();
static Ptr GLeval_34(), GLeval_35(), GLeval_36(), GLeval_37();
static Ptr GLeval_38(), GLeval_39(), GLeval_40(), GLeval_41();
static Ptr GLeval_42(), GLeval_43(), GLeval_44(), GLeval_45();
static Ptr GLeval_46(), GLeval_47(), GLeval_48(), GLeval_49();
static Ptr GLeval_50(), GLeval_51(), GLeval_52(), GLeval_53();
static Ptr GLeval_54(), GLeval_55(), GLeval_56(), GLeval_57();
static Ptr GLeval_58(), GLeval_59(), GLeval_60(), GLeval_61();
static Ptr GLeval_62(), GLeval_63(), GLeval_64(), GLeval_65();
static Ptr GLeval_66(), GLeval_67(), GLeval_68(), GLeval_69();
static Ptr GLeval_70(), GLeval_71(), GLeval_72(), GLeval_73();
static Ptr GLeval_74(), GLeval_75(), GLeval_76(), GLeval_77();
static Ptr GLeval_78(), GLeval_79(), GLeval_80(), GLeval_81();
static Ptr GLeval_82(), GLeval_83(), GLeval_84(), GLeval_85();
static Ptr GLeval_86(), GLeval_87(), GLeval_88(), GLeval_89();
static Ptr GLeval_90(), GLeval_91(), GLeval_92(), GLeval_93();
static Ptr GLeval_94(), GLeval_95(), GLeval_96(), GLeval_97();
static Ptr GLeval_98(), GLeval_99(), GLeval_100(), GLeval_101();
static Ptr GLeval_102(), GLeval_103(), GLeval_104(), GLeval_105();
static Ptr GLeval_107(), GLeval_108(), GLeval_109(), GLeval_110();
static Ptr GLeval_111(), GLeval_112(), GLeval_113(), GLeval_114();
static Ptr GLeval_115(), GLeval_116(), GLeval_117(), GLeval_118();
static Ptr GLeval_119(), GLeval_120(), GLeval_121(), GLeval_122();
static Ptr GLeval_123(), GLeval_124(), GLeval_125(), GLeval_126();
static Ptr GLeval_127(), GLeval_128(), GLeval_129(), GLeval_130();
static Ptr GLeval_131(), GLeval_132(), GLeval_133(), GLeval_134();
static Ptr GLeval_135(), GLeval_136(), GLeval_137(), GLeval_138();
static Ptr GLeval_139(), GLeval_140(), GLeval_141(), GLeval_142();
static Ptr GLeval_143(), GLeval_144(), GLeval_145(), GLeval_146();
static Ptr GLeval_147(), GLeval_148(), GLeval_149(), GLeval_150();
static Ptr GLeval_151(), GLeval_152(), GLeval_153(), GLeval_154();
static Ptr GLeval_155(), GLeval_156(), GLeval_157(), GLeval_158();
static Ptr GLeval_159(), GLeval_160(), GLeval_161(), GLeval_162();
static Ptr GLeval_163(), GLeval_164(), GLeval_165(), GLeval_166();
static Ptr GLeval_167(), GLeval_168(), GLeval_169();

/*      trace functions */
static Ptr GDeval_170(), GDeval_171(), GDeval_172(), GDeval_173();
static Ptr GDeval_174(), GDeval_175(), GDeval_176(), GDeval_177();
static Ptr GDeval_178(), GDeval_179(), GDeval_180(), GDeval_181();
static Ptr GDeval_182(), GDeval_183(), GDeval_184(), GDeval_185();
static Ptr GDeval_186(), GDeval_187(), GDeval_188(), GDeval_189();
static Ptr GDeval_190(), GDeval_191(), GDeval_192();

Ptr (* brx_eval_12 []) () = {
        GLeval_13,
        GLeval_14,
        GLeval_15,
        GLeval_16,
        GLeval_17,
        GLeval_18,
        GLeval_19,
        GLeval_20,
        GLeval_21,
        GLeval_22,
        GLeval_23,
        GLeval_24,
        GLeval_25};
Ptr (* brx_eval_106 []) () = {
        GLeval_107,
        GLeval_108,
        GLeval_109,
        GLeval_110,
        GLeval_111,
        GLeval_112,
        GLeval_113,
        GLeval_114,
        GLeval_114,
        GLeval_115,
        GLeval_116,
        GLeval_117,
        GLeval_118};

static Ptr GYeval[27];

static const char GNeval[] = "eval";
static const char GTeval[] = "Wed June 30 93 17:34:16 ";

static struct GellEntry GWeval[] = {
        {GXeval,        GDeval_170,     5},     /* eval */
        {GXevalwhen,    GDeval_171,     6},     /* eval-when */
        {GXsymeval,     GDeval_172,     2},     /* symeval */
        {GXllarg,       GDeval_173,     5},     /* arg */
        {GXtraceval,    GDeval_174,     5},     /* traceval */
        {GXstepeval,    GDeval_175,     5},     /* stepeval */
        {GXfuncall,     GDeval_176,     5},     /* funcall */
        {GXuapply,      GDeval_177,     5},     /* apply */
        {GXlet,         GDeval_178,     12},    /* let */
        {GXletseq,      GDeval_179,     6},     /* lets */
        {GXletv,        GDeval_180,     6},     /* letv */
        {GXletvq,       GDeval_181,     6},     /* letvq */
        {GXflet,        GDeval_182,     6},     /* flet */
        {GXtag,         GDeval_183,     6},     /* tag */
        {GXevtag,       GDeval_184,     6},     /* evtag */
        {GXevexit,      GDeval_185,     6},     /* evexit */
        {GXuntlxit,     GDeval_186,     6},     /* untilexit */
        {GXffexit,      GDeval_187,     6},     /* exit */
        {GXunexit,      GDeval_188,     6},     /* unexit */
        {GXunwind,      GDeval_189,     6},     /* unwind */
        {GXllock,       GDeval_190,     6},     /* lock */
        {GXprotect,     GDeval_191,     6},     /* protect */
        {GXfunction,    GDeval_192,     6},     /* function */
};

struct GellModule GZeval = {
        GELLMODULESTAMP,
        GNeval,
        GTeval,
        GYeval,
        23,
        GWeval};
