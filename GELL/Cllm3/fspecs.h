/* GELL 15.26: include file for the module: "fspecs" */
/*             translation done:            "Wed June 30 93 17:34:24 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GImstack;
extern Ptr GIfcons;
extern Ptr GIbvar;
extern Ptr GMundef;
extern Ptr GMllsystem;
extern Ptr GIitstate;
extern Ptr GIitcount;
extern Ptr GIcpkgc;
extern Ptr GIdlink;
extern Ptr GIllink;
extern Ptr GIsavea1;
extern Ptr GIsavea2;
extern Ptr GIsavea3;
extern Ptr GIsavea4;
extern Ptr GIintret;
extern Ptr GIerrname;
extern Ptr GIintllink;
extern Ptr GIerrname;
extern Ptr GIsavits = 0;
Ptr GMschedule = 0;
Ptr GMsuspend = 0;
Ptr GMresume = 0;
Ptr GMtagbody = 0;
Ptr GMgo = 0;
Ptr GMblock = 0;
Ptr GMllret = 0;
Ptr GMllretf = 0;
Ptr GMkllcp = 0;
Ptr GMcbind0 = 0;
Ptr GMcbind1 = 0;
Ptr GMcbind2 = 0;
Ptr GMcbind3 = 0;
Ptr GMcbindn = 0;
Ptr GMcbindl = 0;
Ptr GMcbinds = 0;
Ptr GMcexit = 0;
Ptr GMctag = 0;
Ptr GMcprot = 0;
Ptr GMcmplock = 0;
Ptr GMcsched = 0;
Ptr GMcblock = 0;
Ptr GMcretfr = 0;
Ptr GMcgo = 0;
Ptr GMctagbody = 0;
Ptr GMcffuncall = 0;
Ptr GMcwithit = 0;
Ptr GMcwithnoit = 0;
Ptr GMddlink = 0;
Ptr GMdllink = 0;
Ptr GMditcnt = 0;
Ptr GMnvar = 0;
Ptr GMfibd = 0;
Ptr GMfibl = 0;
Ptr GMfibml = 0;
#define GFschedule 6
#define GFsuspend 1
#define GFresume 2
#define GFtagbody 6
#define GFgo 6
#define GFblock 6
#define GFllret 6
#define GFllretf 6
#define GFcbind0 1
#define GFcbind1 1
#define GFcbind2 1
#define GFcbind3 1
#define GFcbindn 1
#define GFcbindl 1
#define GFcbinds 1
#define GFctag 1
#define GFcprot 1
#define GFcmplock 1
#define GFcsched 1
#define GFcblock 1
#define GFcexit 1
#define GFcretfr 1
#define GFcgo 1
#define GFctagbody 1
#define GFcffuncall 1
#define GFcwithit 1
#define GFcwithnoit 1
#define GFfibd 2
#define GFfibl 2
#define GFfibml 2

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0(), GXfibml();
extern Ptr GXfibl(), GXfibd(), GXcwithnoit(), GXcwithit();
extern Ptr GXcffuncall(), GXctagbody(), GXcgo(), GXcretfr();
extern Ptr GXcexit(), GXcblock(), GXcsched(), GXcmplock();
extern Ptr GXcprot(), GXctag(), GXcbinds(), GXcbindl();
extern Ptr GXcbindn(), GXcbind3(), GXcbind2(), GXcbind1();
extern Ptr GXcbind0(), GXllretf(), GXllret(), GXblock();
extern Ptr GXgo(), GXtagbody(), GXresume(), GXsuspend();
extern Ptr GXschedule(), GXini_spec(), GXloc(), GXdeset();
extern Ptr GXevbale(), GXffuncall(), GXsysprot(), GXbndtrbex();
extern Ptr GXevbndext(), GXevprogn(), GXunbinp(), GXevexpg();
extern Ptr GXunbind10(), GXunbind9(), GXunbind8(), GXunbind7();
extern Ptr GXunbind6(), GXunbind5(), GXunbind4(), GXunbind3();
extern Ptr GXunbind2(), GXunbinp1(), GXunbind1(), GXunbind0();
extern Ptr GXapply(), GXevala1(), GXfindtag(), GXinicst();
extern Ptr GXinisymb(), GXgccons(), GXerrxia(), GXerrsym();
extern Ptr GXerrnab(), GXerres(), GXerrfs(), GXevalan();
extern Ptr GXevalt();

/*      intern functions        */
static Ptr GLfspecs_1(), GLfspecs_2(), GLfspecs_3(), GLfspecs_4();
static Ptr GLfspecs_5(), GLfspecs_6(), GLfspecs_7(), GLfspecs_8();
static Ptr GLfspecs_9(), GLfspecs_10(), GLfspecs_11(), GLfspecs_12();
static Ptr GLfspecs_13(), GLfspecs_14(), GLfspecs_15(), GLfspecs_16();
static Ptr GLfspecs_17(), GLfspecs_18(), GLfspecs_19(), GLfspecs_20();
static Ptr GLfspecs_21(), GLfspecs_22(), GLfspecs_23(), GLfspecs_24();
static Ptr GLfspecs_25(), GLfspecs_26(), GLfspecs_27(), GLfspecs_28();
static Ptr GLfspecs_29(), GLfspecs_30(), GLfspecs_31(), GLfspecs_32();
static Ptr GLfspecs_33(), GLfspecs_34(), GLfspecs_35(), GLfspecs_36();
static Ptr GLfspecs_37(), GLfspecs_38(), GLfspecs_39(), GLfspecs_40();
static Ptr GLfspecs_41(), GLfspecs_42(), GLfspecs_43(), GLfspecs_44();
static Ptr GLfspecs_45(), GLfspecs_46(), GLfspecs_47(), GLfspecs_48();
static Ptr GLfspecs_49(), GLfspecs_50(), GLfspecs_51(), GLfspecs_52();
static Ptr GLfspecs_53();

/*      trace functions */
static Ptr GDfspecs_54(), GDfspecs_55(), GDfspecs_56(), GDfspecs_57();
static Ptr GDfspecs_58(), GDfspecs_59(), GDfspecs_60(), GDfspecs_61();
static Ptr GDfspecs_62(), GDfspecs_63(), GDfspecs_64(), GDfspecs_65();
static Ptr GDfspecs_66(), GDfspecs_67(), GDfspecs_68(), GDfspecs_69();
static Ptr GDfspecs_70(), GDfspecs_71(), GDfspecs_72(), GDfspecs_73();
static Ptr GDfspecs_74(), GDfspecs_75(), GDfspecs_76(), GDfspecs_77();
static Ptr GDfspecs_78(), GDfspecs_79(), GDfspecs_80(), GDfspecs_81();
static Ptr GDfspecs_82(), GDfspecs_83();

static Ptr GYfspecs[34];

static const char GNfspecs[] = "fspecs";
static const char GTfspecs[] = "Wed June 30 93 17:34:24 ";

static struct GellEntry GWfspecs[] = {
        {GXschedule,    GDfspecs_54,    6},     /* schedule */
        {GXsuspend,     GDfspecs_55,    1},     /* suspend */
        {GXresume,      GDfspecs_56,    2},     /* resume */
        {GXtagbody,     GDfspecs_57,    6},     /* tagbody */
        {GXgo,          GDfspecs_58,    6},     /* go */
        {GXblock,       GDfspecs_59,    6},     /* block */
        {GXllret,       GDfspecs_60,    6},     /* return */
        {GXllretf,      GDfspecs_61,    6},     /* return-from */
        {GXcbind0,      GDfspecs_62,    1},     /* cbind0 */
        {GXcbind1,      GDfspecs_63,    1},     /* cbind1 */
        {GXcbind2,      GDfspecs_64,    1},     /* cbind2 */
        {GXcbind3,      GDfspecs_65,    1},     /* cbind3 */
        {GXcbindn,      GDfspecs_66,    1},     /* cbindn */
        {GXcbindl,      GDfspecs_67,    1},     /* cbindl */
        {GXcbinds,      GDfspecs_68,    1},     /* cbinds */
        {GXctag,        GDfspecs_69,    1},     /* tag */
        {GXcprot,       GDfspecs_70,    1},     /* prot */
        {GXcmplock,     GDfspecs_71,    1},     /* lock */
        {GXcsched,      GDfspecs_72,    1},     /* #:gell:schedule */
        {GXcblock,      GDfspecs_73,    1},     /* #:gell:block */
        {GXcexit,       GDfspecs_74,    1},     /* exit */
        {GXcretfr,      GDfspecs_75,    1},     /* retfrom */
        {GXcgo,         GDfspecs_76,    1},     /* #:gell:go */
        {GXctagbody,    GDfspecs_77,    1},     /* #:gell:tagbody */
        {GXcffuncall,   GDfspecs_78,    1},     /* ffuncall */
        {GXcwithit,     GDfspecs_79,    1},     /* with-interrupts */
        {GXcwithnoit,   GDfspecs_80,    1},     /* without-interrupts */
        {GXfibd,        GDfspecs_81,    2},     /* fibd */
        {GXfibl,        GDfspecs_82,    2},     /* fibl */
        {GXfibml,       GDfspecs_83,    2},     /* fibml */
};

struct GellModule GZfspecs = {
        GELLMODULESTAMP,
        GNfspecs,
        GTfspecs,
        GYfspecs,
        30,
        GWfspecs};
