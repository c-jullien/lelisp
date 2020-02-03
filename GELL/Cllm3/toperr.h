/* GELL 15.26: include file for the module: "toperr" */
/*             translation done:            "Wed June 30 93 17:33:41 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GIfcons;
extern Ptr GIbvar;
extern Ptr GMt;
extern Ptr GMitsoft;
extern Ptr GMllsystem;
extern Ptr GIitstate;
extern Ptr GIbstack;
extern Ptr GImstack;
extern Ptr GImstack1;
extern Ptr GImstack2;
extern Ptr GIcpkgc;
extern Ptr GIbufat;
extern Ptr GIdlink;
extern Ptr GIsavea4;
extern Ptr GMeval;
Ptr GMlsubr0 = 0;
Ptr GMlsubr1 = 0;
Ptr GMlsubr2 = 0;
Ptr GMlsubr3 = 0;
Ptr GMnlsubr = 0;
Ptr GMflsubr = 0;
Ptr GMllexpr = 0;
Ptr GMllfexpr = 0;
Ptr GMllmacro = 0;
Ptr GMlldmacro = 0;
Ptr GMllmsubr = 0;
Ptr GMlldmsubr = 0;
Ptr GMtoplevel = 0;
Ptr GMstatoplevel = 0;
Ptr GMprtmsgs = 0;
Ptr GMprtfltl = 0;
Ptr GMfatalerror = 0;
Ptr GMrunt = 0;
Ptr GMllsleep = 0;
Ptr GMlldate = 0;
Ptr GMclkalarm = 0;
Ptr GMwithit = 0;
Ptr GMwithnoit = 0;
Ptr GMlltime = 0;
Ptr GMllshwstk = 0;
Ptr GMllcline = 0;
Ptr GMllgetenv = 0;
Ptr GMllgetadr = 0;
Ptr GMllcallx = 0;
Ptr GMcstack = 0;
Ptr GMsyserror = 0;
Ptr GMlerror = 0;
Ptr GMsysdebug = 0;
Ptr GMmserror = 0;
Ptr GMcolon = 0;
Ptr GMerrfstk = 0;
Ptr GMerrfsgc = 0;
Ptr GMerrfsud = 0;
Ptr GMerrfpgc = 0;
Ptr GMerrfsym = 0;
Ptr GMerrfcns = 0;
Ptr GMerrfflt = 0;
Ptr GMerrffix = 0;
Ptr GMerrfhep = 0;
Ptr GMerrfstr = 0;
Ptr GMerrfvec = 0;
Ptr GMerrmac = 0;
Ptr GMerrudv = 0;
Ptr GMerrudf = 0;
Ptr GMerrudm = 0;
Ptr GMerrudt = 0;
Ptr GMerrbdf = 0;
Ptr GMerrwna = 0;
Ptr GMerrbpa = 0;
Ptr GMerrbal = 0;
Ptr GMerrilb = 0;
Ptr GMerrsxt = 0;
Ptr GMerrios = 0;
Ptr GMerr0dv = 0;
Ptr GMerrnna = 0;
Ptr GMerrnia = 0;
Ptr GMerrnfa = 0;
Ptr GMerrnsa = 0;
Ptr GMerrnaa = 0;
Ptr GMerrnla = 0;
Ptr GMerrnva = 0;
Ptr GMerroob = 0;
Ptr GMerrstl = 0;
Ptr GMerrvec = 0;
Ptr GMerrnda = 0;
Ptr GMerrstc = 0;
Ptr GMerrsym = 0;
Ptr GMerrgen = 0;
Ptr GMerrnab = 0;
Ptr GMerrxia = 0;
Ptr GMbreak = 0;
Ptr GMuserit = 0;
Ptr GMmouse = 0;
Ptr GMclock = 0;
#define GFtoplevel 1
#define GFcstack 1
#define GFllcline 2
#define GFllgetenv 2
#define GFllgetadr 2
#define GFllcallx 5
#define GFrunt 1
#define GFllsleep 2
#define GFlldate 1
#define GFclkalarm 2
#define GFwithit 6
#define GFwithnoit 6
#define GFlltime 2
#define GFllshwstk 2
#define GFlerror 4
#define GFsyserror 4
#define GFsysdebug 1
#define GFuserit 1
#define GFmouse 1
#define GFclock 1

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0(), GXclock();
extern Ptr GXmouse(), GXuserit(), GXsysdebug(), GXsyserror();
extern Ptr GXlerror(), GXllshwstk(), GXlltime(), GXwithnoit();
extern Ptr GXwithit(), GXclkalarm(), GXlldate(), GXllsleep();
extern Ptr GXrunt(), GXllcallx(), GXllgetadr(), GXllgetenv();
extern Ptr GXllcline(), GXcstack(), GXtoplevel(), GXgetsetn();
extern Ptr GXllclock(), GXllmouse(), GXllmerro(), GXllpanic();
extern Ptr GXllbreak(), GXerrxia(), GXerrnab(), GXerrgen();
extern Ptr GXerrsxt(), GXerrios(), GXerroob(), GXerrbdf();
extern Ptr GXerrstl(), GXerrstc(), GXerrnda(), GXerrnva();
extern Ptr GXerrsym(), GXerrvec(), GXerrnla(), GXerrnsa();
extern Ptr GXerrnfa(), GXerrnia(), GXerrnna(), GXerrnaa();
extern Ptr GXerrilb(), GXerrwna(), GXerrbal(), GXerrbpa();
extern Ptr GXerrudt(), GXerrudm(), GXerrudf(), GXerrudv();
extern Ptr GXerrfm(), GXerrato(), GXerr0dv(), GXerrfh();
extern Ptr GXerrfv(), GXerrfr(), GXerrfsp(), GXerrff();
extern Ptr GXerres(), GXerrfsgc(), GXerrfn(), GXerrfs();
extern Ptr GXsystop(), GXini_top(), GXvaga1(), GXloc();
extern Ptr GXmakevect(), GXstringa1(), GXfldiff(), GXnreverse();
extern Ptr GXevprognr(), GXevprogn(), GXunbind10(), GXunbind9();
extern Ptr GXunbind8(), GXunbind7(), GXunbind6(), GXunbind5();
extern Ptr GXunbind4(), GXunbind3(), GXunbind2(), GXunbind1();
extern Ptr GXunbind0(), GXsysprot(), GXevala1(), GXeval();
extern Ptr GXfindtag(), GXu_print(), GXprobjt(), GXprobj();
extern Ptr GXlread(), GXtryatom(), GXinicst(), GXinisymb();
extern Ptr GXgcnumb(), GXgcfloat(), GXgccons(), GXreenter();
extern Ptr GXitsoft(), GXllsystem(), GXevalan(), GXevalt();

/*      intern functions        */
static Ptr GLtoperr_1(), GLtoperr_2(), GLtoperr_3(), GLtoperr_4();
static Ptr GLtoperr_5(), GLtoperr_6(), GLtoperr_7(), GLtoperr_8();
static Ptr GLtoperr_9(), GLtoperr_10(), GLtoperr_11(), GLtoperr_12();
static Ptr GLtoperr_13(), GLtoperr_14(), GLtoperr_15(), GLtoperr_16();
static Ptr GLtoperr_17(), GLtoperr_18(), GLtoperr_19(), GLtoperr_20();
static Ptr GLtoperr_21(), GLtoperr_22(), GLtoperr_23(), GLtoperr_24();
static Ptr GLtoperr_25(), GLtoperr_26(), GLtoperr_27(), GLtoperr_28();
static Ptr GLtoperr_29(), GLtoperr_30(), GLtoperr_31(), GLtoperr_32();
static Ptr GLtoperr_33(), GLtoperr_34(), GLtoperr_36(), GLtoperr_37();
static Ptr GLtoperr_38(), GLtoperr_39(), GLtoperr_40(), GLtoperr_41();
static Ptr GLtoperr_42(), GLtoperr_43(), GLtoperr_44(), GLtoperr_45();
static Ptr GLtoperr_46(), GLtoperr_47(), GLtoperr_48(), GLtoperr_49();
static Ptr GLtoperr_50(), GLtoperr_51(), GLtoperr_52(), GLtoperr_53();
static Ptr GLtoperr_54(), GLtoperr_55(), GLtoperr_56(), GLtoperr_57();

/*      trace functions */
static Ptr GDtoperr_58(), GDtoperr_59(), GDtoperr_60(), GDtoperr_61();
static Ptr GDtoperr_62(), GDtoperr_63(), GDtoperr_64(), GDtoperr_65();
static Ptr GDtoperr_66(), GDtoperr_67(), GDtoperr_68(), GDtoperr_69();
static Ptr GDtoperr_70(), GDtoperr_71(), GDtoperr_72(), GDtoperr_73();
static Ptr GDtoperr_74(), GDtoperr_75(), GDtoperr_76(), GDtoperr_77();

static Ptr GYtoperr[26];

static const char GNtoperr[] = "toperr";
static const char GTtoperr[] = "Wed June 30 93 17:33:41 ";

static struct GellEntry GWtoperr[] = {
        {GXtoplevel,    GDtoperr_58,    1},     /* toplevel */
        {GXcstack,      GDtoperr_59,    1},     /* cstack */
        {GXllcline,     GDtoperr_60,    2},     /* comline */
        {GXllgetenv,    GDtoperr_61,    2},     /* getenv */
        {GXllgetadr,    GDtoperr_62,    2},     /* getglobal */
        {GXllcallx,     GDtoperr_63,    5},     /* callextern */
        {GXrunt,        GDtoperr_64,    1},     /* runtime */
        {GXllsleep,     GDtoperr_65,    2},     /* sleep */
        {GXlldate,      GDtoperr_66,    1},     /* date */
        {GXclkalarm,    GDtoperr_67,    2},     /* clockalarm */
        {GXwithit,      GDtoperr_68,    6},     /* with-interrupts */
        {GXwithnoit,    GDtoperr_69,    6},     /* without-interrupts */
        {GXlltime,      GDtoperr_70,    2},     /* time */
        {GXllshwstk,    GDtoperr_71,    2},     /* stack-info */
        {GXlerror,      GDtoperr_72,    4},     /* error */
        {GXsyserror,    GDtoperr_73,    4},     /* syserror */
        {GXsysdebug,    GDtoperr_74,    1},     /* sysdebug */
        {GXuserit,      GDtoperr_75,    1},     /* user-interrupt */
        {GXmouse,       GDtoperr_76,    1},     /* mouse */
        {GXclock,       GDtoperr_77,    1},     /* clock */
};

struct GellModule GZtoperr = {
        GELLMODULESTAMP,
        GNtoperr,
        GTtoperr,
        GYtoperr,
        20,
        GWtoperr};
