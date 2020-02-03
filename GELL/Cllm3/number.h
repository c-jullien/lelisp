/* GELL 15.26: include file for the module: "number" */
/*             translation done:            "Wed June 30 93 17:34:48 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GMundef;
extern Ptr GIfcons;
extern Ptr GIbvar;
extern Ptr GMt;
extern Ptr GMvoid;
extern Ptr GMsyspkgc;
extern Ptr GImstack;
extern Ptr GMquote;
extern Ptr GImoinsun = 0;
extern Ptr GIfzero = 0;
extern Ptr GIfltun = 0;
extern Ptr GIfltmun = 0;
extern Ptr GIfltimax = 0;
extern Ptr GIfltimin = 0;
extern Ptr GIcpfnt = 0;
Ptr GMsysgen = 0;
Ptr GMnumberp = 0;
Ptr GMintgerp = 0;
Ptr GMrationalp = 0;
Ptr GMllfloat = 0;
Ptr GMllfix = 0;
Ptr GMlltrunc = 0;
Ptr GMgaadd1 = 0;
Ptr GMgasub1 = 0;
Ptr GMgaabs = 0;
Ptr GMgaplus = 0;
Ptr GMgadinv = 0;
Ptr GMgadiff = 0;
Ptr GMgatimes = 0;
Ptr GMgadrev = 0;
Ptr GMgadiv = 0;
Ptr GMgaquomod = 0;
Ptr GMex = 0;
Ptr GMexmod = 0;
Ptr GMgamod = 0;
Ptr GMgacomp = 0;
Ptr GMgaeqen = 0;
Ptr GMganeqn = 0;
Ptr GMgage = 0;
Ptr GMgagt = 0;
Ptr GMgale = 0;
Ptr GMgalt = 0;
Ptr GMzerop = 0;
Ptr GMplusp = 0;
Ptr GMminusp = 0;
Ptr GMmin = 0;
Ptr GMmax = 0;
Ptr GMllsin = 0;
Ptr GMllcos = 0;
Ptr GMllasin = 0;
Ptr GMllacos = 0;
Ptr GMllatan = 0;
Ptr GMllexp = 0;
Ptr GMlllog = 0;
Ptr GMlllog10 = 0;
Ptr GMllpower = 0;
Ptr GMllsqrt = 0;
#define GFnumberp 2
#define GFintgerp 2
#define GFrationalp 2
#define GFllfloat 2
#define GFlltrunc 2
#define GFllfix 2
#define GFgaadd1 2
#define GFgasub1 2
#define GFgaabs 2
#define GFgaplus 5
#define GFgatimes 5
#define GFgadinv 2
#define GFgadiff 5
#define GFgadrev 2
#define GFgadiv 5
#define GFgaquomod 3
#define GFgamod 3
#define GFgacomp 3
#define GFzerop 2
#define GFminusp 2
#define GFplusp 2
#define GFgaeqen 5
#define GFganeqn 3
#define GFgagt 5
#define GFgage 5
#define GFgalt 5
#define GFgale 5
#define GFmin 5
#define GFmax 5
#define GFllsin 2
#define GFllcos 2
#define GFllasin 2
#define GFllacos 2
#define GFllatan 2
#define GFllexp 2
#define GFlllog 2
#define GFlllog10 2
#define GFllpower 3
#define GFllsqrt 2

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0(), GXlllog10();
extern Ptr GXmax(), GXmin(), GXgale(), GXgage();
extern Ptr GXganeqn(), GXplusp(), GXminusp(), GXzerop();
extern Ptr GXgadiff(), GXgatimes(), GXgaplus(), GXrationalp();
extern Ptr GXbangen1(), GXgamod(), GXnumberp(), GXintgerp();
extern Ptr GXgadrev(), GXgaabs(), GXgaquomod(), GXgasub1();
extern Ptr GXgaadd1(), GXgagt(), GXgalt(), GXgaeqen();
extern Ptr GXgacomp(), GXllsqrt(), GXllpower(), GXlllog();
extern Ptr GXllexp(), GXllatan(), GXllacos(), GXllasin();
extern Ptr GXllcos(), GXllsin(), GXlltrunc(), GXllfloat();
extern Ptr GXllfix(), GXgadiv(), GXgadinv(), GXgatim2i();
extern Ptr GXgadiff2i(), GXgaplus2i(), GXgaeqn(), GXini_nbs();
extern Ptr GXffsymbol(), GXnreverse(), GXgetfns(), GXffuncall();
extern Ptr GXapply(), GXevala1(), GXevalcar(), GXinicst();
extern Ptr GXinisymb(), GXgcnumb(), GXgcfloat(), GXgccons();
extern Ptr GXgettype(), GXerr0dv(), GXerrstl(), GXerrwna();
extern Ptr GXerrnva(), GXerrnla(), GXerrnsa(), GXerrnfa();
extern Ptr GXerrnia(), GXerrnna(), GXerrgen(), GXerrfs();
extern Ptr GXtheend(), GXreenter(), GXevalan(), GXevalt();

/*      intern functions        */
static Ptr GLnumber_1(), GLnumber_2(), GLnumber_3(), GLnumber_4();
static Ptr GLnumber_5(), GLnumber_6(), GLnumber_7(), GLnumber_8();
static Ptr GLnumber_9(), GLnumber_10(), GLnumber_11(), GLnumber_12();
static Ptr GLnumber_13(), GLnumber_14(), GLnumber_15(), GLnumber_16();
static Ptr GLnumber_17(), GLnumber_18(), GLnumber_19(), GLnumber_20();
static Ptr GLnumber_21(), GLnumber_22(), GLnumber_23(), GLnumber_24();
static Ptr GLnumber_25(), GLnumber_26(), GLnumber_27(), GLnumber_28();
static Ptr GLnumber_29(), GLnumber_30(), GLnumber_31(), GLnumber_32();
static Ptr GLnumber_33(), GLnumber_34(), GLnumber_35(), GLnumber_36();
static Ptr GLnumber_37(), GLnumber_38(), GLnumber_39(), GLnumber_40();
static Ptr GLnumber_41(), GLnumber_42(), GLnumber_43(), GLnumber_44();
static Ptr GLnumber_45(), GLnumber_46(), GLnumber_47(), GLnumber_48();
static Ptr GLnumber_49(), GLnumber_50(), GLnumber_51(), GLnumber_52();
static Ptr GLnumber_53(), GLnumber_54(), GLnumber_55(), GLnumber_56();
static Ptr GLnumber_57(), GLnumber_58(), GLnumber_59(), GLnumber_60();
static Ptr GLnumber_61(), GLnumber_62();

/*      trace functions */
static Ptr GDnumber_63(), GDnumber_64(), GDnumber_65(), GDnumber_66();
static Ptr GDnumber_67(), GDnumber_68(), GDnumber_69(), GDnumber_70();
static Ptr GDnumber_71(), GDnumber_72(), GDnumber_73(), GDnumber_74();
static Ptr GDnumber_75(), GDnumber_76(), GDnumber_77(), GDnumber_78();
static Ptr GDnumber_79(), GDnumber_80(), GDnumber_81(), GDnumber_82();
static Ptr GDnumber_83(), GDnumber_84(), GDnumber_85(), GDnumber_86();
static Ptr GDnumber_87(), GDnumber_88(), GDnumber_89(), GDnumber_90();
static Ptr GDnumber_91(), GDnumber_92(), GDnumber_93(), GDnumber_94();
static Ptr GDnumber_95(), GDnumber_96(), GDnumber_97(), GDnumber_98();
static Ptr GDnumber_99(), GDnumber_100(), GDnumber_101();

static Ptr GYnumber[43];

static const char GNnumber[] = "number";
static const char GTnumber[] = "Wed June 30 93 17:34:48 ";

static struct GellEntry GWnumber[] = {
        {GXnumberp,     GDnumber_63,    2},     /* numberp */
        {GXintgerp,     GDnumber_64,    2},     /* integerp */
        {GXrationalp,   GDnumber_65,    2},     /* rationalp */
        {GXllfloat,     GDnumber_66,    2},     /* float */
        {GXlltrunc,     GDnumber_67,    2},     /* truncate */
        {GXllfix,       GDnumber_68,    2},     /* fix */
        {GXgaadd1,      GDnumber_69,    2},     /* 1+ */
        {GXgasub1,      GDnumber_70,    2},     /* 1- */
        {GXgaabs,       GDnumber_71,    2},     /* abs */
        {GXgaplus,      GDnumber_72,    5},     /* + */
        {GXgatimes,     GDnumber_73,    5},     /* * */
        {GXgadinv,      GDnumber_74,    2},     /* 0- */
        {GXgadiff,      GDnumber_75,    5},     /* - */
        {GXgadrev,      GDnumber_76,    2},     /* 1/ */
        {GXgadiv,       GDnumber_77,    5},     /* // */
        {GXgaquomod,    GDnumber_78,    3},     /* quo */
        {GXgamod,       GDnumber_79,    3},     /* modulo */
        {GXgacomp,      GDnumber_80,    3},     /* <?> */
        {GXzerop,       GDnumber_81,    2},     /* zerop */
        {GXminusp,      GDnumber_82,    2},     /* minusp */
        {GXplusp,       GDnumber_83,    2},     /* plusp */
        {GXgaeqen,      GDnumber_84,    5},     /* = */
        {GXganeqn,      GDnumber_85,    3},     /* <> */
        {GXgagt,        GDnumber_86,    5},     /* > */
        {GXgage,        GDnumber_87,    5},     /* >= */
        {GXgalt,        GDnumber_88,    5},     /* < */
        {GXgale,        GDnumber_89,    5},     /* <= */
        {GXmin,         GDnumber_90,    5},     /* min */
        {GXmax,         GDnumber_91,    5},     /* max */
        {GXllsin,       GDnumber_92,    2},     /* sin */
        {GXllcos,       GDnumber_93,    2},     /* cos */
        {GXllasin,      GDnumber_94,    2},     /* asin */
        {GXllacos,      GDnumber_95,    2},     /* acos */
        {GXllatan,      GDnumber_96,    2},     /* atan */
        {GXllexp,       GDnumber_97,    2},     /* exp */
        {GXlllog,       GDnumber_98,    2},     /* log */
        {GXlllog10,     GDnumber_99,    2},     /* log10 */
        {GXllpower,     GDnumber_100,   3},     /* power */
        {GXllsqrt,      GDnumber_101,   2},     /* sqrt */
};

struct GellModule GZnumber = {
        GELLMODULESTAMP,
        GNnumber,
        GTnumber,
        GYnumber,
        39,
        GWnumber};
