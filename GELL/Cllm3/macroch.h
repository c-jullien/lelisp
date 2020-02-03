/* GELL 15.26: include file for the module: "macroch" */
/*             translation done:            "Wed June 30 93 17:34:05 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GMsyspkgc;
extern Ptr GIfcons;
extern Ptr GImstack;
extern Ptr GIbvar;
extern Ptr GMt;
extern Ptr GMllexpr;
extern Ptr GItabch;
extern Ptr GMlread;
extern Ptr GIibase;
extern Ptr GIcpkgc;
extern Ptr GMstatrc;
extern Ptr GIsavea4;
extern Ptr GMfunction;
extern Ptr GMquote;
extern Ptr GMnconc;
extern Ptr GMappend;
extern Ptr GMmcons;
extern Ptr GMllcons;
extern Ptr GMlist;
extern Ptr GMvector;
extern Ptr GItabctyp = 0;
extern Ptr GItabccod = 0;
Ptr GMdmc = 0;
Ptr GMdms = 0;
Ptr GMdefsharp = 0;
Ptr GMllsharp = 0;
Ptr GMsharp = 0;
Ptr GMllcolon = 0;
Ptr GMuser = 0;
Ptr GMllhat = 0;
Ptr GMlllbra = 0;
Ptr GMllrbra = 0;
Ptr GMllquote = 0;
Ptr GMllbquote = 0;
Ptr GMllcomma = 0;
Ptr GMcommaat = 0;
Ptr GMcommadot = 0;
Ptr GMsysharp = 0;
Ptr GMsyscol = 0;
Ptr GMshrpdot = 0;
Ptr GMshrpplu = 0;
Ptr GMshrpmoi = 0;
Ptr GMshrpquo = 0;
Ptr GMshrpsla = 0;
Ptr GMshrpbak = 0;
Ptr GMshrphat = 0;
Ptr GMshrpcol = 0;
Ptr GMshrpdol = 0;
Ptr GMshrpprc = 0;
Ptr GMshrpgui = 0;
Ptr GMshrpbar = 0;
Ptr GMshrppar = 0;
Ptr GMshrpbra = 0;
Ptr GMshrprad = 0;
Ptr GMshrpval = 0;
Ptr GMslowbyte = 0;
Ptr GMtypech = 0;
Ptr GMtypecod = 0;
Ptr GMcnull = 0;
Ptr GMcbcom = 0;
Ptr GMcecom = 0;
Ptr GMcquote = 0;
Ptr GMclpar = 0;
Ptr GMcrpar = 0;
Ptr GMcdot = 0;
Ptr GMcsep = 0;
Ptr GMcpackage = 0;
Ptr GMcsplice = 0;
Ptr GMcmacro = 0;
Ptr GMcstring = 0;
Ptr GMcpname = 0;
Ptr GMcsymb = 0;
Ptr GMcmsymb = 0;
#define GFdmc 6
#define GFdms 6
#define GFdefsharp 6
#define GFllquote 1
#define GFllcomma 1
#define GFllbquote 1
#define GFllsharp 1
#define GFshrpdot 1
#define GFshrpplu 1
#define GFshrpmoi 1
#define GFshrpquo 1
#define GFshrpsla 1
#define GFshrpbak 1
#define GFshrphat 1
#define GFshrpcol 1
#define GFshrpdol 1
#define GFshrpprc 1
#define GFshrprad 2
#define GFshrpgui 1
#define GFshrpbar 1
#define GFshrppar 1
#define GFshrpbra 1
#define GFllcolon 1
#define GFllhat 1
#define GFlllbra 1
#define GFllrbra 1
#define GFtypech 5
#define GFtypecod 5

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0(), GXtypecod();
extern Ptr GXtypech(), GXllrbra(), GXlllbra(), GXllhat();
extern Ptr GXllcolon(), GXshrpbra(), GXshrppar(), GXshrpbar();
extern Ptr GXshrpgui(), GXshrprad(), GXshrpprc(), GXshrpdol();
extern Ptr GXshrpcol(), GXshrphat(), GXshrpbak(), GXshrpsla();
extern Ptr GXshrpquo(), GXshrpmoi(), GXshrpplu(), GXshrpdot();
extern Ptr GXllsharp(), GXllbquote(), GXllcomma(), GXllquote();
extern Ptr GXdefsharp(), GXdms(), GXdmc(), GXini_mach();
extern Ptr GXmakevect(), GXstringa1(), GXkwote(), GXlist();
extern Ptr GXlllength(), GXnreverse(), GXgetprop(), GXsetfn();
extern Ptr GXgetfns(), GXllde(), GXsysprot(), GXevala1();
extern Ptr GXffuncall(), GXbase10p(), GXreaddltd(), GXrdpkgc2();
extern Ptr GXread2(), GXgetcv(), GXrereada4(), GXlread();
extern Ptr GXasciii(), GXgetch(), GXreadi(), GXtrysympk();
extern Ptr GXinicst(), GXinisymb(), GXgcnumb(), GXgcfloat();
extern Ptr GXgccons(), GXerrsym(), GXerrsxt(), GXerroob();
extern Ptr GXerrwna(), GXerrudv(), GXerrudf(), GXerrnia();
extern Ptr GXevalan(), GXevalt();

/*      intern functions        */
static Ptr GLmacroch_1(), GLmacroch_2(), GLmacroch_3(), GLmacroch_4();
static Ptr GLmacroch_5(), GLmacroch_6(), GLmacroch_7(), GLmacroch_8();
static Ptr GLmacroch_9(), GLmacroch_10(), GLmacroch_11(), GLmacroch_12();
static Ptr GLmacroch_13(), GLmacroch_14(), GLmacroch_15(), GLmacroch_16();
static Ptr GLmacroch_17(), GLmacroch_18(), GLmacroch_19(), GLmacroch_20();
static Ptr GLmacroch_21(), GLmacroch_22(), GLmacroch_23(), GLmacroch_24();
static Ptr GLmacroch_25(), GLmacroch_26(), GLmacroch_27(), GLmacroch_28();
static Ptr GLmacroch_29(), GLmacroch_30(), GLmacroch_31(), GLmacroch_32();
static Ptr GLmacroch_33(), GLmacroch_34(), GLmacroch_35(), GLmacroch_36();
static Ptr GLmacroch_37(), GLmacroch_38(), GLmacroch_39(), GLmacroch_40();
static Ptr GLmacroch_41(), GLmacroch_42(), GLmacroch_43(), GLmacroch_44();
static Ptr GLmacroch_45(), GLmacroch_46(), GLmacroch_47(), GLmacroch_48();
static Ptr GLmacroch_49(), GLmacroch_50(), GLmacroch_51(), GLmacroch_52();
static Ptr GLmacroch_53(), GLmacroch_54(), GLmacroch_55(), GLmacroch_56();
static Ptr GLmacroch_57(), GLmacroch_58(), GLmacroch_59(), GLmacroch_60();
static Ptr GLmacroch_61(), GLmacroch_62(), GLmacroch_63(), GLmacroch_64();
static Ptr GLmacroch_65(), GLmacroch_66(), GLmacroch_67(), GLmacroch_68();
static Ptr GLmacroch_69(), GLmacroch_70(), GLmacroch_71(), GLmacroch_72();
static Ptr GLmacroch_73(), GLmacroch_74(), GLmacroch_75(), GLmacroch_76();
static Ptr GLmacroch_77(), GLmacroch_78(), GLmacroch_79(), GLmacroch_80();
static Ptr GLmacroch_81(), GLmacroch_82(), GLmacroch_83(), GLmacroch_84();
static Ptr GLmacroch_85(), GLmacroch_86(), GLmacroch_87(), GLmacroch_88();
static Ptr GLmacroch_89(), GLmacroch_90(), GLmacroch_91(), GLmacroch_92();
static Ptr GLmacroch_93(), GLmacroch_94(), GLmacroch_95(), GLmacroch_96();
static Ptr GLmacroch_97(), GLmacroch_98(), GLmacroch_99(), GLmacroch_100();
static Ptr GLmacroch_101(), GLmacroch_102(), GLmacroch_103(), GLmacroch_104();
static Ptr GLmacroch_105(), GLmacroch_106();

/*      trace functions */
static Ptr GDmacroch_107(), GDmacroch_108(), GDmacroch_109(), GDmacroch_110();
static Ptr GDmacroch_111(), GDmacroch_112(), GDmacroch_113(), GDmacroch_114();
static Ptr GDmacroch_115(), GDmacroch_116(), GDmacroch_117(), GDmacroch_118();
static Ptr GDmacroch_119(), GDmacroch_120(), GDmacroch_121(), GDmacroch_122();
static Ptr GDmacroch_123(), GDmacroch_124(), GDmacroch_125(), GDmacroch_126();
static Ptr GDmacroch_127(), GDmacroch_128(), GDmacroch_129(), GDmacroch_130();
static Ptr GDmacroch_131(), GDmacroch_132(), GDmacroch_133(), GDmacroch_134();

static Ptr GYmacroch[33];

static const char GNmacroch[] = "macroch";
static const char GTmacroch[] = "Wed June 30 93 17:34:05 ";

static struct GellEntry GWmacroch[] = {
        {GXdmc,         GDmacroch_107,  6},     /* dmc */
        {GXdms,         GDmacroch_108,  6},     /* dms */
        {GXdefsharp,    GDmacroch_109,  6},     /* defsharp */
        {GXllquote,     GDmacroch_110,  1},     /* ' */
        {GXllcomma,     GDmacroch_111,  1},     /* , */
        {GXllbquote,    GDmacroch_112,  1},     /* ` */
        {GXllsharp,     GDmacroch_113,  1},     /* # */
        {GXshrpdot,     GDmacroch_114,  1},     /* . */
        {GXshrpplu,     GDmacroch_115,  1},     /* + */
        {GXshrpmoi,     GDmacroch_116,  1},     /* - */
        {GXshrpquo,     GDmacroch_117,  1},     /* #:gell:' */
        {GXshrpsla,     GDmacroch_118,  1},     /* / */
        {GXshrpbak,     GDmacroch_119,  1},     /* \ */
        {GXshrphat,     GDmacroch_120,  1},     /* #:gell:^ */
        {GXshrpcol,     GDmacroch_121,  1},     /* #:gell:: */
        {GXshrpdol,     GDmacroch_122,  1},     /* $ */
        {GXshrpprc,     GDmacroch_123,  1},     /* % */
        {GXshrprad,     GDmacroch_124,  2},     /* r */
        {GXshrpgui,     GDmacroch_125,  1},     /* " */
        {GXshrpbar,     GDmacroch_126,  1},     /* | */
        {GXshrppar,     GDmacroch_127,  1},     /* ( */
        {GXshrpbra,     GDmacroch_128,  1},     /* #:gell:[ */
        {GXllcolon,     GDmacroch_129,  1},     /* : */
        {GXllhat,       GDmacroch_130,  1},     /* ^ */
        {GXlllbra,      GDmacroch_131,  1},     /* [ */
        {GXllrbra,      GDmacroch_132,  1},     /* ] */
        {GXtypech,      GDmacroch_133,  5},     /* typech */
        {GXtypecod,     GDmacroch_134,  5},     /* typecn */
};

struct GellModule GZmacroch = {
        GELLMODULESTAMP,
        GNmacroch,
        GTmacroch,
        GYmacroch,
        28,
        GWmacroch};
