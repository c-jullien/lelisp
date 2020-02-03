/* GELL 15.26: include file for the module: "cntrl" */
/*             translation done:            "Wed June 30 93 17:34:29 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GIhashtab;
extern Ptr GIfcons;
extern Ptr GImstack;
extern Ptr GIbvar;
extern Ptr GMundef;
extern Ptr GMt;
extern Ptr GMvoid;
extern Ptr GMllsystem;
extern Ptr GMlsubr0;
extern Ptr GMlsubr1;
extern Ptr GMlsubr2;
extern Ptr GMlsubr3;
extern Ptr GMnlsubr;
extern Ptr GMflsubr;
extern Ptr GMllexpr;
extern Ptr GMllfexpr;
extern Ptr GMllmacro;
extern Ptr GMlldmacro;
extern Ptr GMllmsubr;
extern Ptr GMlldmsubr;
extern Ptr GIsavea1;
extern Ptr GIsavea2;
extern Ptr GIerrname;
extern Ptr GItabtypfn = 0;
extern Ptr GItabcodfn = 0;
Ptr GMlff = 0;
Ptr GMllde = 0;
Ptr GMlldf = 0;
Ptr GMdm = 0;
Ptr GMdmd = 0;
Ptr GMllds = 0;
Ptr GMdefvar = 0;
Ptr GMprevdef = 0;
Ptr GMrevert = 0;
Ptr GMgetdef = 0;
Ptr GMmakedef = 0;
Ptr GMif = 0;
Ptr GMifn = 0;
Ptr GMwhen = 0;
Ptr GMunless = 0;
Ptr GMcond = 0;
Ptr GMllor = 0;
Ptr GMlland = 0;
Ptr GMwhile = 0;
Ptr GMuntil = 0;
Ptr GMloop = 0;
Ptr GMfrepeat = 0;
Ptr GMselectq = 0;
Ptr GMmap = 0;
Ptr GMmapc = 0;
Ptr GMmaplist = 0;
Ptr GMmapcar = 0;
Ptr GMmapcon = 0;
Ptr GMmapcan = 0;
Ptr GMfevery = 0;
Ptr GMfany = 0;
Ptr GMmapvect = 0;
Ptr GMmapoblist = 0;
Ptr GMmapcoblist = 0;
Ptr GMmaploblist = 0;
Ptr GMquote = 0;
Ptr GMlambda = 0;
Ptr GMflambda = 0;
Ptr GMmlambda = 0;
Ptr GMllid = 0;
Ptr GMcomment = 0;
Ptr GMprogn = 0;
Ptr GMeprogn = 0;
Ptr GMprog1 = 0;
Ptr GMexdef = 0;
Ptr GMprog2 = 0;
#define GFllde 6
#define GFlldf 6
#define GFdm 6
#define GFdmd 6
#define GFllds 6
#define GFdefvar 6
#define GFrevert 2
#define GFgetdef 2
#define GFmakedef 4
#define GFif 6
#define GFifn 6
#define GFwhen 6
#define GFunless 6
#define GFcond 6
#define GFllor 6
#define GFlland 6
#define GFwhile 6
#define GFuntil 6
#define GFloop 6
#define GFfrepeat 6
#define GFselectq 6
#define GFmap 5
#define GFmapc 5
#define GFmaplist 5
#define GFmapcar 5
#define GFmapcon 5
#define GFmapcan 5
#define GFfevery 5
#define GFfany 5
#define GFmapvect 3
#define GFmapcoblist 2
#define GFmaploblist 2
#define GFmapoblist 2
#define GFquote 6
#define GFlambda 6
#define GFflambda 6
#define GFmlambda 6
#define GFcomment 6
#define GFllid 2
#define GFeprogn 2
#define GFprogn 6
#define GFexdef 6
#define GFprog1 6
#define GFprog2 6

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0(), GXprog2();
extern Ptr GXprog1(), GXexdef(), GXprogn(), GXeprogn();
extern Ptr GXllid(), GXcomment(), GXmlambda(), GXflambda();
extern Ptr GXlambda(), GXquote(), GXmapoblist(), GXmaploblist();
extern Ptr GXmapcoblist(), GXmapvect(), GXfany(), GXfevery();
extern Ptr GXmapcan(), GXmapcon(), GXmapcar(), GXmaplist();
extern Ptr GXmapc(), GXmap(), GXselectq(), GXfrepeat();
extern Ptr GXloop(), GXuntil(), GXwhile(), GXlland();
extern Ptr GXllor(), GXcond(), GXunless(), GXwhen();
extern Ptr GXifn(), GXif(), GXmakedef(), GXgetdef();
extern Ptr GXrevert(), GXdefvar(), GXllds(), GXdmd();
extern Ptr GXdm(), GXlldf(), GXllde(), GXini_ctl();
extern Ptr GXloc(), GXmakevect(), GXequal(), GXnreconc();
extern Ptr GXnreverse(), GXmember(), GXremprop(), GXputprop();
extern Ptr GXgetprop(), GXaddprop(), GXinicst(), GXinisymb();
extern Ptr GXevprogn(), GXffuncall(), GXfuncall(), GXevala1();
extern Ptr GXevalcar(), GXgcnumb(), GXgcfloat(), GXgccons();
extern Ptr GXerrfs(), GXerroob(), GXerrbal(), GXerrvec();
extern Ptr GXerrwna(), GXerrnva(), GXerrnla(), GXerrnia();
extern Ptr GXerrsym(), GXevalan(), GXevalt();

/*      intern functions        */
static Ptr GLcntrl_1(), GLcntrl_2(), GLcntrl_3(), GLcntrl_4();
static Ptr GLcntrl_5(), GLcntrl_6(), GLcntrl_7(), GLcntrl_8();
static Ptr GLcntrl_9(), GLcntrl_10(), GLcntrl_11(), GLcntrl_13();
static Ptr GLcntrl_14(), GLcntrl_15(), GLcntrl_16(), GLcntrl_17();
static Ptr GLcntrl_18(), GLcntrl_19(), GLcntrl_20(), GLcntrl_21();
static Ptr GLcntrl_22(), GLcntrl_23(), GLcntrl_24(), GLcntrl_25();
static Ptr GLcntrl_26(), GLcntrl_27(), GLcntrl_28(), GLcntrl_29();
static Ptr GLcntrl_30(), GLcntrl_31(), GLcntrl_32(), GLcntrl_33();
static Ptr GLcntrl_34(), GLcntrl_35(), GLcntrl_36(), GLcntrl_37();
static Ptr GLcntrl_38(), GLcntrl_39(), GLcntrl_40(), GLcntrl_41();
static Ptr GLcntrl_42(), GLcntrl_43(), GLcntrl_44(), GLcntrl_45();
static Ptr GLcntrl_46(), GLcntrl_47(), GLcntrl_48(), GLcntrl_49();
static Ptr GLcntrl_50(), GLcntrl_51(), GLcntrl_52(), GLcntrl_53();
static Ptr GLcntrl_54(), GLcntrl_55(), GLcntrl_56(), GLcntrl_57();
static Ptr GLcntrl_58(), GLcntrl_59(), GLcntrl_60(), GLcntrl_61();
static Ptr GLcntrl_62(), GLcntrl_63(), GLcntrl_64(), GLcntrl_65();
static Ptr GLcntrl_66(), GLcntrl_67(), GLcntrl_68(), GLcntrl_69();
static Ptr GLcntrl_70(), GLcntrl_71(), GLcntrl_72(), GLcntrl_73();
static Ptr GLcntrl_74(), GLcntrl_75(), GLcntrl_76(), GLcntrl_77();
static Ptr GLcntrl_78(), GLcntrl_79(), GLcntrl_80(), GLcntrl_81();
static Ptr GLcntrl_82(), GLcntrl_83(), GLcntrl_84(), GLcntrl_85();
static Ptr GLcntrl_86(), GLcntrl_87(), GLcntrl_88(), GLcntrl_89();
static Ptr GLcntrl_90(), GLcntrl_91(), GLcntrl_92(), GLcntrl_93();
static Ptr GLcntrl_94(), GLcntrl_95(), GLcntrl_96(), GLcntrl_97();
static Ptr GLcntrl_98(), GLcntrl_99(), GLcntrl_100(), GLcntrl_101();
static Ptr GLcntrl_102(), GLcntrl_103(), GLcntrl_104(), GLcntrl_105();
static Ptr GLcntrl_106(), GLcntrl_107(), GLcntrl_108();

/*      trace functions */
static Ptr GDcntrl_109(), GDcntrl_110(), GDcntrl_111(), GDcntrl_112();
static Ptr GDcntrl_113(), GDcntrl_114(), GDcntrl_115(), GDcntrl_116();
static Ptr GDcntrl_117(), GDcntrl_118(), GDcntrl_119(), GDcntrl_120();
static Ptr GDcntrl_121(), GDcntrl_122(), GDcntrl_123(), GDcntrl_124();
static Ptr GDcntrl_125(), GDcntrl_126(), GDcntrl_127(), GDcntrl_128();
static Ptr GDcntrl_129(), GDcntrl_130(), GDcntrl_131(), GDcntrl_132();
static Ptr GDcntrl_133(), GDcntrl_134(), GDcntrl_135(), GDcntrl_136();
static Ptr GDcntrl_137(), GDcntrl_138(), GDcntrl_139(), GDcntrl_140();
static Ptr GDcntrl_141(), GDcntrl_142(), GDcntrl_143(), GDcntrl_144();
static Ptr GDcntrl_145(), GDcntrl_146(), GDcntrl_147(), GDcntrl_148();
static Ptr GDcntrl_149(), GDcntrl_150(), GDcntrl_151(), GDcntrl_152();

Ptr (* brx_cntrl_12 []) () = {
        GLcntrl_13,
        GLcntrl_14,
        GLcntrl_14,
        GLcntrl_14,
        GLcntrl_14,
        GLcntrl_14,
        GLcntrl_14,
        GLcntrl_15,
        GLcntrl_16,
        GLcntrl_17,
        GLcntrl_18,
        GLcntrl_14,
        GLcntrl_14};

static Ptr GYcntrl[50];

static const char GNcntrl[] = "cntrl";
static const char GTcntrl[] = "Wed June 30 93 17:34:29 ";

static struct GellEntry GWcntrl[] = {
        {GXllde,        GDcntrl_109,    6},     /* defun */
        {GXlldf,        GDcntrl_110,    6},     /* df */
        {GXdm,          GDcntrl_111,    6},     /* dm */
        {GXdmd,         GDcntrl_112,    6},     /* dmd */
        {GXllds,        GDcntrl_113,    6},     /* ds */
        {GXdefvar,      GDcntrl_114,    6},     /* defvar */
        {GXrevert,      GDcntrl_115,    2},     /* revert */
        {GXgetdef,      GDcntrl_116,    2},     /* getdef */
        {GXmakedef,     GDcntrl_117,    4},     /* makedef */
        {GXif,          GDcntrl_118,    6},     /* if */
        {GXifn,         GDcntrl_119,    6},     /* ifn */
        {GXwhen,        GDcntrl_120,    6},     /* when */
        {GXunless,      GDcntrl_121,    6},     /* unless */
        {GXcond,        GDcntrl_122,    6},     /* cond */
        {GXllor,        GDcntrl_123,    6},     /* or */
        {GXlland,       GDcntrl_124,    6},     /* and */
        {GXwhile,       GDcntrl_125,    6},     /* while */
        {GXuntil,       GDcntrl_126,    6},     /* until */
        {GXloop,        GDcntrl_127,    6},     /* loop */
        {GXfrepeat,     GDcntrl_128,    6},     /* repeat */
        {GXselectq,     GDcntrl_129,    6},     /* selectq */
        {GXmap,         GDcntrl_130,    5},     /* map */
        {GXmapc,        GDcntrl_131,    5},     /* mapc */
        {GXmaplist,     GDcntrl_132,    5},     /* maplist */
        {GXmapcar,      GDcntrl_133,    5},     /* mapcar */
        {GXmapcon,      GDcntrl_134,    5},     /* mapcon */
        {GXmapcan,      GDcntrl_135,    5},     /* mapcan */
        {GXfevery,      GDcntrl_136,    5},     /* every */
        {GXfany,        GDcntrl_137,    5},     /* any */
        {GXmapvect,     GDcntrl_138,    3},     /* mapvector */
        {GXmapcoblist,  GDcntrl_139,    2},     /* mapcoblist */
        {GXmaploblist,  GDcntrl_140,    2},     /* maploblist */
        {GXmapoblist,   GDcntrl_141,    2},     /* mapoblist */
        {GXquote,       GDcntrl_142,    6},     /* quote */
        {GXlambda,      GDcntrl_143,    6},     /* lambda */
        {GXflambda,     GDcntrl_144,    6},     /* flambda */
        {GXmlambda,     GDcntrl_145,    6},     /* mlambda */
        {GXcomment,     GDcntrl_146,    6},     /* comment */
        {GXllid,        GDcntrl_147,    2},     /* identity */
        {GXeprogn,      GDcntrl_148,    2},     /* eprogn */
        {GXprogn,       GDcntrl_149,    6},     /* progn */
        {GXexdef,       GDcntrl_150,    6},     /* exportable-definition */
        {GXprog1,       GDcntrl_151,    6},     /* prog1 */
        {GXprog2,       GDcntrl_152,    6},     /* prog2 */
};

struct GellModule GZcntrl = {
        GELLMODULESTAMP,
        GNcntrl,
        GTcntrl,
        GYcntrl,
        44,
        GWcntrl};
