/* GELL 15.26: include file for the module: "symbs" */
/*             translation done:            "Wed June 30 93 17:34:36 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GImstack;
extern Ptr GIfcons;
extern Ptr GIbvar;
extern Ptr GMundef;
extern Ptr GIhashtab;
extern Ptr GIcpkgc;
extern Ptr GItabcodfn;
extern Ptr GItabtypfn;
Ptr GMmakunbound = 0;
Ptr GMfplist = 0;
Ptr GMpckgcell = 0;
Ptr GMd3root = 0;
Ptr GMobjval = 0;
Ptr GMvalfn = 0;
Ptr GMtypefn = 0;
Ptr GMsetfn = 0;
Ptr GMremfn = 0;
Ptr GMfindfn = 0;
Ptr GMgetfn1 = 0;
Ptr GMgetfn = 0;
Ptr GMgetsym1 = 0;
Ptr GMgetsymb = 0;
Ptr GMgetbi = 0;
Ptr GMsynonym = 0;
Ptr GMsynqnym = 0;
Ptr GMremob = 0;
Ptr GMgetprop = 0;
Ptr GMgetl = 0;
Ptr GMaddprop = 0;
Ptr GMputprop = 0;
Ptr GMdefprop = 0;
Ptr GMremprop = 0;
Ptr GMfincr = 0;
Ptr GMfdecr = 0;
#define GFmakunbound 2
#define GFfplist 5
#define GFpckgcell 5
#define GFd3root 2
#define GFobjval 5
#define GFvalfn 2
#define GFtypefn 2
#define GFsetfn 4
#define GFgetfn1 3
#define GFgetfn 5
#define GFgetbi 4
#define GFremfn 2
#define GFfindfn 2
#define GFsynonym 3
#define GFsynqnym 6
#define GFremob 2
#define GFgetsymb 5
#define GFgetsym1 3
#define GFgetprop 3
#define GFgetl 3
#define GFaddprop 4
#define GFputprop 4
#define GFdefprop 6
#define GFremprop 3
#define GFfincr 6
#define GFfdecr 6

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0(), GXfdecr();
extern Ptr GXfincr(), GXdefprop(), GXgetl(), GXgetsym1();
extern Ptr GXgetsymb(), GXremob(), GXsynqnym(), GXsynonym();
extern Ptr GXremfn(), GXgetfn(), GXtypefn(), GXvalfn();
extern Ptr GXobjval(), GXd3root(), GXpckgcell(), GXfplist();
extern Ptr GXmakunbound(), GXremprop(), GXaddprop(), GXputprop();
extern Ptr GXgetprop(), GXfindfn(), GXsetfn(), GXgetfns();
extern Ptr GXgetbi(), GXgetfn1(), GXini_sym(), GXvag();
extern Ptr GXloc(), GXgadiff2i(), GXgaplus2i(), GXevalcar();
extern Ptr GXistdsym(), GXinicst(), GXinisymb(), GXgccons();
extern Ptr GXerrnla(), GXerrwna(), GXerrudf(), GXerroob();
extern Ptr GXerrsym(), GXerrnva(), GXevalan(), GXevalt();

/*      intern functions        */
static Ptr GLsymbs_1(), GLsymbs_2(), GLsymbs_3(), GLsymbs_4();
static Ptr GLsymbs_5(), GLsymbs_6(), GLsymbs_7(), GLsymbs_8();
static Ptr GLsymbs_9(), GLsymbs_10(), GLsymbs_11(), GLsymbs_12();
static Ptr GLsymbs_13(), GLsymbs_14(), GLsymbs_15(), GLsymbs_16();
static Ptr GLsymbs_17(), GLsymbs_18(), GLsymbs_19(), GLsymbs_20();
static Ptr GLsymbs_21(), GLsymbs_22(), GLsymbs_23(), GLsymbs_24();
static Ptr GLsymbs_25(), GLsymbs_26(), GLsymbs_27(), GLsymbs_28();
static Ptr GLsymbs_29(), GLsymbs_30(), GLsymbs_31(), GLsymbs_32();
static Ptr GLsymbs_33(), GLsymbs_34(), GLsymbs_35(), GLsymbs_36();
static Ptr GLsymbs_37(), GLsymbs_38(), GLsymbs_39(), GLsymbs_40();
static Ptr GLsymbs_41(), GLsymbs_42(), GLsymbs_43(), GLsymbs_44();
static Ptr GLsymbs_45(), GLsymbs_46(), GLsymbs_47(), GLsymbs_48();
static Ptr GLsymbs_49(), GLsymbs_50(), GLsymbs_51(), GLsymbs_52();
static Ptr GLsymbs_53();

/*      trace functions */
static Ptr GDsymbs_54(), GDsymbs_55(), GDsymbs_56(), GDsymbs_57();
static Ptr GDsymbs_58(), GDsymbs_59(), GDsymbs_60(), GDsymbs_61();
static Ptr GDsymbs_62(), GDsymbs_63(), GDsymbs_64(), GDsymbs_65();
static Ptr GDsymbs_66(), GDsymbs_67(), GDsymbs_68(), GDsymbs_69();
static Ptr GDsymbs_70(), GDsymbs_71(), GDsymbs_72(), GDsymbs_73();
static Ptr GDsymbs_74(), GDsymbs_75(), GDsymbs_76(), GDsymbs_77();
static Ptr GDsymbs_78(), GDsymbs_79();

static Ptr GYsymbs[32];

static const char GNsymbs[] = "symbs";
static const char GTsymbs[] = "Wed June 30 93 17:34:36 ";

static struct GellEntry GWsymbs[] = {
        {GXmakunbound,  GDsymbs_54,     2},     /* makunbound */
        {GXfplist,      GDsymbs_55,     5},     /* plist */
        {GXpckgcell,    GDsymbs_56,     5},     /* packagecell */
        {GXd3root,      GDsymbs_57,     2},     /* 3d-root-symbol */
        {GXobjval,      GDsymbs_58,     5},     /* objval */
        {GXvalfn,       GDsymbs_59,     2},     /* valfn */
        {GXtypefn,      GDsymbs_60,     2},     /* typefn */
        {GXsetfn,       GDsymbs_61,     4},     /* setfn */
        {GXgetfn1,      GDsymbs_62,     3},     /* getfn1 */
        {GXgetfn,       GDsymbs_63,     5},     /* getfn */
        {GXgetbi,       GDsymbs_64,     4},     /* getfn2 */
        {GXremfn,       GDsymbs_65,     2},     /* remfn */
        {GXfindfn,      GDsymbs_66,     2},     /* findfn */
        {GXsynonym,     GDsymbs_67,     3},     /* synonym */
        {GXsynqnym,     GDsymbs_68,     6},     /* synonymq */
        {GXremob,       GDsymbs_69,     2},     /* remob */
        {GXgetsymb,     GDsymbs_70,     5},     /* getsymb */
        {GXgetsym1,     GDsymbs_71,     3},     /* getsymb1 */
        {GXgetprop,     GDsymbs_72,     3},     /* get */
        {GXgetl,        GDsymbs_73,     3},     /* getl */
        {GXaddprop,     GDsymbs_74,     4},     /* addprop */
        {GXputprop,     GDsymbs_75,     4},     /* putprop */
        {GXdefprop,     GDsymbs_76,     6},     /* defprop */
        {GXremprop,     GDsymbs_77,     3},     /* remprop */
        {GXfincr,       GDsymbs_78,     6},     /* incr */
        {GXfdecr,       GDsymbs_79,     6},     /* decr */
};

struct GellModule GZsymbs = {
        GELLMODULESTAMP,
        GNsymbs,
        GTsymbs,
        GYsymbs,
        26,
        GWsymbs};
