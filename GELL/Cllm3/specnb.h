/* GELL 15.26: include file for the module: "specnb" */
/*             translation done:            "Wed June 30 93 17:34:54 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GMundef;
extern Ptr GIfcons;
extern Ptr GIbvar;
extern Ptr GMt;
extern Ptr GMvoid;
extern Ptr GMsyspkgc;
extern Ptr GImstack;
extern Ptr GIcpkgc;
extern Ptr GMkllcp;
extern Ptr GMquote;
extern Ptr GIfzero;
extern Ptr GMex;
Ptr GMscale = 0;
Ptr GMlognot = 0;
Ptr GMlogand = 0;
Ptr GMlogor = 0;
Ptr GMlogxor = 0;
Ptr GMlogshift = 0;
Ptr GMdpn = 0;
Ptr GMmskfield = 0;
Ptr GMldbyte = 0;
Ptr GMdpbyte = 0;
Ptr GMdpfield = 0;
Ptr GMldbt = 0;
Ptr GModdp = 0;
Ptr GMevenp = 0;
Ptr GMrandom = 0;
Ptr GMsrandom = 0;
Ptr GMfloatp = 0;
Ptr GMfixp = 0;
Ptr GMflplus = 0;
Ptr GMfldiff = 0;
Ptr GMfltimes = 0;
Ptr GMflquo = 0;
Ptr GMlladd1 = 0;
Ptr GMllsub1 = 0;
Ptr GMlladd = 0;
Ptr GMllsub = 0;
Ptr GMllmul = 0;
Ptr GMlldiv = 0;
Ptr GMllrem = 0;
Ptr GMlleqn = 0;
Ptr GMllneqn = 0;
Ptr GMllge = 0;
Ptr GMllgt = 0;
Ptr GMllle = 0;
Ptr GMlllt = 0;
Ptr GMllimin = 0;
Ptr GMllimax = 0;
Ptr GMllfadd = 0;
Ptr GMllfsub = 0;
Ptr GMllfmul = 0;
Ptr GMllfdiv = 0;
Ptr GMllfeqn = 0;
Ptr GMllfneqn = 0;
Ptr GMllfge = 0;
Ptr GMllfgt = 0;
Ptr GMllfle = 0;
Ptr GMllflt = 0;
Ptr GMllfmin = 0;
Ptr GMllfmax = 0;
Ptr GMclllsht = 0;
Ptr GMcllfadd = 0;
Ptr GMcllfsub = 0;
Ptr GMcllfmul = 0;
Ptr GMcllfdiv = 0;
Ptr GMcllfeqn = 0;
Ptr GMcllfneqn = 0;
Ptr GMcllfge = 0;
Ptr GMcllfgt = 0;
Ptr GMcllfle = 0;
Ptr GMcllflt = 0;
Ptr GMexcarry = 0;
Ptr GMexadd = 0;
Ptr GMexincr = 0;
Ptr GMexinv = 0;
Ptr GMexmul = 0;
Ptr GMexdiv = 0;
Ptr GMexcomp = 0;
#define GFoddp 2
#define GFevenp 2
#define GFlleqn 3
#define GFllneqn 3
#define GFllgt 3
#define GFllge 3
#define GFlllt 3
#define GFllle 3
#define GFllimin 3
#define GFllimax 3
#define GFlladd1 2
#define GFllsub1 2
#define GFlladd 3
#define GFllsub 3
#define GFllmul 3
#define GFlldiv 3
#define GFllrem 3
#define GFscale 4
extern Ptr GIrandseed = 0;
#define GFsrandom 5
#define GFrandom 3
#define GFlognot 2
#define GFlogand 3
#define GFlogor 3
#define GFlogxor 3
#define GFlogshift 3
#define GFdpn 2
#define GFmskfield 4
#define GFldbyte 4
#define GFldbt 4
#define GFdpbyte 5
#define GFdpfield 5
#define GFllfeqn 3
#define GFllfneqn 3
#define GFllfgt 3
#define GFllfge 3
#define GFllflt 3
#define GFllfle 3
#define GFllfmin 3
#define GFllfmax 3
#define GFllfadd 3
#define GFllfsub 3
#define GFllfmul 3
#define GFllfdiv 3
#define GFclllsht 1
#define GFcllfadd 1
#define GFcllfsub 1
#define GFcllfmul 1
#define GFcllfdiv 1
#define GFcllfeqn 1
#define GFcllfneqn 1
#define GFcllfgt 1
#define GFcllfge 1
#define GFcllflt 1
#define GFcllfle 1
#define GFfloatp 2
#define GFfixp 2
#define GFflplus 5
#define GFfldiff 5
#define GFfltimes 5
#define GFflquo 3
#define GFexadd 3
#define GFexincr 2
#define GFexinv 2
#define GFexmul 4
#define GFexdiv 3
#define GFexcomp 3

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0(), GXexcomp();
extern Ptr GXexdiv(), GXexmul(), GXexinv(), GXexincr();
extern Ptr GXexadd(), GXflquo(), GXfltimes(), GXflplus();
extern Ptr GXfixp(), GXfloatp(), GXcllfle(), GXcllflt();
extern Ptr GXcllfge(), GXcllfgt(), GXcllfneqn(), GXcllfeqn();
extern Ptr GXcllfdiv(), GXcllfmul(), GXcllfsub(), GXcllfadd();
extern Ptr GXclllsht(), GXllfdiv(), GXllfmul(), GXllfsub();
extern Ptr GXllfadd(), GXllfmax(), GXllfmin(), GXllfle();
extern Ptr GXllflt(), GXllfge(), GXllfgt(), GXllfneqn();
extern Ptr GXllfeqn(), GXdpfield(), GXdpbyte(), GXldbt();
extern Ptr GXldbyte(), GXmskfield(), GXdpn(), GXlogshift();
extern Ptr GXlogxor(), GXlogor(), GXlogand(), GXlognot();
extern Ptr GXrandom(), GXsrandom(), GXscale(), GXllrem();
extern Ptr GXlldiv(), GXllmul(), GXllsub(), GXlladd();
extern Ptr GXllsub1(), GXlladd1(), GXllimax(), GXllimin();
extern Ptr GXllle(), GXlllt(), GXllge(), GXllgt();
extern Ptr GXllneqn(), GXlleqn(), GXevenp(), GXoddp();
extern Ptr GXfldiff(), GXini_snb(), GXffsymbol(), GXnreverse();
extern Ptr GXgetfns(), GXffuncall(), GXapply(), GXevala1();
extern Ptr GXevalcar(), GXinicst(), GXinisymb(), GXgcnumb();
extern Ptr GXgcfloat(), GXgccons(), GXgettype(), GXerr0dv();
extern Ptr GXerrstl(), GXerrwna(), GXerrnva(), GXerrnla();
extern Ptr GXerrnsa(), GXerrnfa(), GXerrnia(), GXerrnna();
extern Ptr GXerrgen(), GXerrfs(), GXtheend(), GXreenter();
extern Ptr GXevalan(), GXevalt();

/*      intern functions        */
static Ptr GLspecnb_1(), GLspecnb_2(), GLspecnb_3(), GLspecnb_4();
static Ptr GLspecnb_5(), GLspecnb_6(), GLspecnb_7(), GLspecnb_8();
static Ptr GLspecnb_9(), GLspecnb_10(), GLspecnb_11(), GLspecnb_12();
static Ptr GLspecnb_13(), GLspecnb_14(), GLspecnb_15(), GLspecnb_16();

/*      trace functions */
static Ptr GDspecnb_17(), GDspecnb_18(), GDspecnb_19(), GDspecnb_20();
static Ptr GDspecnb_21(), GDspecnb_22(), GDspecnb_23(), GDspecnb_24();
static Ptr GDspecnb_25(), GDspecnb_26(), GDspecnb_27(), GDspecnb_28();
static Ptr GDspecnb_29(), GDspecnb_30(), GDspecnb_31(), GDspecnb_32();
static Ptr GDspecnb_33(), GDspecnb_34(), GDspecnb_35(), GDspecnb_36();
static Ptr GDspecnb_37(), GDspecnb_38(), GDspecnb_39(), GDspecnb_40();
static Ptr GDspecnb_41(), GDspecnb_42(), GDspecnb_43(), GDspecnb_44();
static Ptr GDspecnb_45(), GDspecnb_46(), GDspecnb_47(), GDspecnb_48();
static Ptr GDspecnb_49(), GDspecnb_50(), GDspecnb_51(), GDspecnb_52();
static Ptr GDspecnb_53(), GDspecnb_54(), GDspecnb_55(), GDspecnb_56();
static Ptr GDspecnb_57(), GDspecnb_58(), GDspecnb_59(), GDspecnb_60();
static Ptr GDspecnb_61(), GDspecnb_62(), GDspecnb_63(), GDspecnb_64();
static Ptr GDspecnb_65(), GDspecnb_66(), GDspecnb_67(), GDspecnb_68();
static Ptr GDspecnb_69(), GDspecnb_70(), GDspecnb_71(), GDspecnb_72();
static Ptr GDspecnb_73(), GDspecnb_74(), GDspecnb_75(), GDspecnb_76();
static Ptr GDspecnb_77(), GDspecnb_78(), GDspecnb_79(), GDspecnb_80();
static Ptr GDspecnb_81(), GDspecnb_82();

static Ptr GYspecnb[72];

static const char GNspecnb[] = "specnb";
static const char GTspecnb[] = "Wed June 30 93 17:34:54 ";

static struct GellEntry GWspecnb[] = {
        {GXoddp,        GDspecnb_17,    2},     /* oddp */
        {GXevenp,       GDspecnb_18,    2},     /* evenp */
        {GXlleqn,       GDspecnb_19,    3},     /* eqn */
        {GXllneqn,      GDspecnb_20,    3},     /* neqn */
        {GXllgt,        GDspecnb_21,    3},     /* gt */
        {GXllge,        GDspecnb_22,    3},     /* ge */
        {GXlllt,        GDspecnb_23,    3},     /* lt */
        {GXllle,        GDspecnb_24,    3},     /* le */
        {GXllimin,      GDspecnb_25,    3},     /* imin */
        {GXllimax,      GDspecnb_26,    3},     /* imax */
        {GXlladd1,      GDspecnb_27,    2},     /* add1 */
        {GXllsub1,      GDspecnb_28,    2},     /* sub1 */
        {GXlladd,       GDspecnb_29,    3},     /* add */
        {GXllsub,       GDspecnb_30,    3},     /* sub */
        {GXllmul,       GDspecnb_31,    3},     /* mul */
        {GXlldiv,       GDspecnb_32,    3},     /* div */
        {GXllrem,       GDspecnb_33,    3},     /* rem */
        {GXscale,       GDspecnb_34,    4},     /* scale */
        {GXsrandom,     GDspecnb_35,    5},     /* srandom */
        {GXrandom,      GDspecnb_36,    3},     /* random */
        {GXlognot,      GDspecnb_37,    2},     /* lognot */
        {GXlogand,      GDspecnb_38,    3},     /* logand */
        {GXlogor,       GDspecnb_39,    3},     /* logor */
        {GXlogxor,      GDspecnb_40,    3},     /* logxor */
        {GXlogshift,    GDspecnb_41,    3},     /* logshift */
        {GXdpn,         GDspecnb_42,    2},     /* 2** */
        {GXmskfield,    GDspecnb_43,    4},     /* mask-field */
        {GXldbyte,      GDspecnb_44,    4},     /* load-byte */
        {GXldbt,        GDspecnb_45,    4},     /* load-byte-test */
        {GXdpbyte,      GDspecnb_46,    5},     /* deposit-byte */
        {GXdpfield,     GDspecnb_47,    5},     /* deposit-field */
        {GXllfeqn,      GDspecnb_48,    3},     /* feqn */
        {GXllfneqn,     GDspecnb_49,    3},     /* fneqn */
        {GXllfgt,       GDspecnb_50,    3},     /* fgt */
        {GXllfge,       GDspecnb_51,    3},     /* fge */
        {GXllflt,       GDspecnb_52,    3},     /* flt */
        {GXllfle,       GDspecnb_53,    3},     /* fle */
        {GXllfmin,      GDspecnb_54,    3},     /* fmin */
        {GXllfmax,      GDspecnb_55,    3},     /* fmax */
        {GXllfadd,      GDspecnb_56,    3},     /* fadd */
        {GXllfsub,      GDspecnb_57,    3},     /* fsub */
        {GXllfmul,      GDspecnb_58,    3},     /* fmul */
        {GXllfdiv,      GDspecnb_59,    3},     /* fdiv */
        {GXclllsht,     GDspecnb_60,    1},     /* #:gell:logshift */
        {GXcllfadd,     GDspecnb_61,    1},     /* #:gell:fadd */
        {GXcllfsub,     GDspecnb_62,    1},     /* #:gell:fsub */
        {GXcllfmul,     GDspecnb_63,    1},     /* #:gell:fmul */
        {GXcllfdiv,     GDspecnb_64,    1},     /* #:gell:fdiv */
        {GXcllfeqn,     GDspecnb_65,    1},     /* #:gell:feqn */
        {GXcllfneqn,    GDspecnb_66,    1},     /* #:gell:fneqn */
        {GXcllfgt,      GDspecnb_67,    1},     /* #:gell:fgt */
        {GXcllfge,      GDspecnb_68,    1},     /* #:gell:fge */
        {GXcllflt,      GDspecnb_69,    1},     /* #:gell:flt */
        {GXcllfle,      GDspecnb_70,    1},     /* #:gell:fle */
        {GXfloatp,      GDspecnb_71,    2},     /* floatp */
        {GXfixp,        GDspecnb_72,    2},     /* fixp */
        {GXflplus,      GDspecnb_73,    5},     /* plus */
        {GXfldiff,      GDspecnb_74,    5},     /* difference */
        {GXfltimes,     GDspecnb_75,    5},     /* times */
        {GXflquo,       GDspecnb_76,    3},     /* divide */
        {GXexadd,       GDspecnb_77,    3},     /* ex+ */
        {GXexincr,      GDspecnb_78,    2},     /* ex1+ */
        {GXexinv,       GDspecnb_79,    2},     /* ex- */
        {GXexmul,       GDspecnb_80,    4},     /* ex* */
        {GXexdiv,       GDspecnb_81,    3},     /* ex/ */
        {GXexcomp,      GDspecnb_82,    3},     /* ex? */
};

struct GellModule GZspecnb = {
        GELLMODULESTAMP,
        GNspecnb,
        GTspecnb,
        GYspecnb,
        66,
        GWspecnb};
