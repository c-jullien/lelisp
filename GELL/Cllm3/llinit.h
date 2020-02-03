/* GELL 15.26: include file for the module: "llinit" */
/*             translation done:            "Wed June 30 93 17:33:38 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GIcpkgc;
extern Ptr GIsavea1;
extern Ptr GIsavea2;
extern Ptr GIsavea3;
extern Ptr GIsavea4;
extern Ptr GMstring;
extern Ptr GMvector;
extern Ptr GIbstack = 0;
extern Ptr GIestack = 0;
extern Ptr GImstack = 0;
extern Ptr GImstack1 = 0;
extern Ptr GImstack2 = 0;
extern Ptr GIbcode = 0;
extern Ptr GIccode = 0;
extern Ptr GIecode = 0;
extern Ptr GIbheap = 0;
extern Ptr GIcheap = 0;
extern Ptr GIeheap = 0;
extern Ptr GIbnumb = 0;
extern Ptr GIcnumb = 0;
extern Ptr GIbfloat = 0;
extern Ptr GIcfloat = 0;
extern Ptr GIbvect = 0;
extern Ptr GIcvect = 0;
extern Ptr GIbstrg = 0;
extern Ptr GIcstrg = 0;
extern Ptr GIbsymb = 0;
extern Ptr GIcsymb = 0;
extern Ptr GIbvar = 0;
extern Ptr GIbcons = 0;
extern Ptr GIccons = 0;
extern Ptr GIbold = 0;
extern Ptr GIeold = 0;
extern Ptr GIfnumb = 0;
extern Ptr GIffloat = 0;
extern Ptr GIfstrg = 0;
extern Ptr GIfvect = 0;
extern Ptr GIfsymb = 0;
extern Ptr GIfcons = 0;
extern Ptr GIfiliz = 0;
extern Ptr GIfilit = 0;
extern Ptr GIfilin = 0;
extern Ptr GIllban = 0;
extern Ptr GInbsyst = 0;
extern Ptr GImaxchan = 0;
extern Ptr GIitstate = 0;
extern Ptr GIitcount = 0;
extern Ptr GIhashtab = 0;
extern Ptr GItabsyst = 0;
extern Ptr GIcstsyste = 0;
Ptr GMvoid = 0;
Ptr GMundef = 0;
Ptr GMnewnil = 0;
Ptr GMt = 0;
Ptr GMsyspkgc = 0;
Ptr GMitsoft = 0;
Ptr GMsupitsof = 0;
Ptr GMllsystem = 0;
Ptr GMversados = 0;
Ptr GMvme = 0;
Ptr GMmicromega = 0;
Ptr GMapollo = 0;
Ptr GMsm90 = 0;
Ptr GMpe32os = 0;
Ptr GMpe32unix = 0;
Ptr GMvaxunix = 0;
Ptr GMvaxvms = 0;
Ptr GMmultics = 0;
Ptr GMmetheus = 0;
Ptr GMuniv68 = 0;
Ptr GMcpm86 = 0;
Ptr GMpcdos = 0;
Ptr GMmacii = 0;
Ptr GMvaxis3 = 0;
Ptr GMmacint = 0;
Ptr GMsps9 = 0;
Ptr GMbellmac = 0;
Ptr GMvmuts = 0;
Ptr GMpcs = 0;
Ptr GMksun = 0;
Ptr GMhp9000 = 0;
Ptr GMmetavise = 0;
Ptr GMgould = 0;
Ptr GMibmrt = 0;
Ptr GMpyramid = 0;
Ptr GMsequent = 0;
Ptr GMunigraph = 0;
Ptr GMcl1000 = 0;
Ptr GMcl1020 = 0;
Ptr GMtek43 = 0;
Ptr GMsllc = 0;
Ptr GMlews = 0;
Ptr GMsun4 = 0;
Ptr GMatari = 0;
Ptr GMconvex = 0;
Ptr GMmacaux = 0;
Ptr GMdecstation = 0;
Ptr GMsony = 0;
Ptr GMm88k = 0;
Ptr GMsun386 = 0;
Ptr GMaix386 = 0;
Ptr GMix386 = 0;
Ptr GMsonyr3000 = 0;
Ptr GMllmips = 0;
Ptr GMrs6000 = 0;
Ptr GMsco386 = 0;
Ptr GMos2 = 0;
Ptr GMhp9400 = 0;
Ptr GMiris4d = 0;
Ptr GMsvr4i386 = 0;
Ptr GMos220 = 0;
Ptr GMchp9700 = 0;
Ptr GMcsun4 = 0;
Ptr GMcetia88k = 0;
Ptr GMsun4mbc = 0;
Ptr GMhp9700 = 0;
Ptr GMcalphavms = 0;
Ptr GMnt386 = 0;
Ptr GMnext68k = 0;
Ptr GMsolaris = 0;
Ptr GMcalphaosf = 0;
Ptr GMciris4d = 0;
Ptr GMll65 = 0;
Ptr GMll66 = 0;
Ptr GMll67 = 0;
Ptr GMll68 = 0;
Ptr GMll69 = 0;
Ptr GMll70 = 0;
Ptr GMllversion = 0;
Ptr GMnaversion = 0;
Ptr GMstop = 0;
Ptr GMherald = 0;
#define GFitsoft 3
#define GFsupitsof 4
#define GFllversion 1
#define GFllsystem 1
#define GFstop 5
#define GFherald 1

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0(), GXherald();
extern Ptr GXsupitsof(), GXstop(), GXllsystem(), GXllversion();
extern Ptr GXtheend(), GXreenter(), GXllinit(), GXitsoft();
extern Ptr GXini_bll(), GXini_ext(), GXini_chr(), GXstrgallc();
extern Ptr GXstrgsymb(), GXmakevect(), GXini_str(), GXini_snb();
extern Ptr GXini_nbs(), GXini_std(), GXini_sym(), GXini_cad();
extern Ptr GXini_ctl(), GXini_spec(), GXllsupit(), GXllitsoft();
extern Ptr GXini_eval(), GXini_print(), GXini_mach(), GXcrastrg();
extern Ptr GXinicst(), GXinisymb(), GXistdsym(), GXini_read();
extern Ptr GXrestcori(), GXinput(), GXini_pio(), GXgcnumb();
extern Ptr GXgcfloat(), GXgccons(), GXini_gc(), GXerrwna();
extern Ptr GXini_top(), GXsystop(), GXexwer(), GXll_exit();
extern Ptr GXevalan(), GXevalt();

/*      intern functions        */
static Ptr GLllinit_1(), GLllinit_2(), GLllinit_3(), GLllinit_4();
static Ptr GLllinit_5(), GLllinit_6(), GLllinit_7(), GLllinit_8();
static Ptr GLllinit_9(), GLllinit_10(), GLllinit_11(), GLllinit_12();
static Ptr GLllinit_13(), GLllinit_14(), GLllinit_15(), GLllinit_16();
static Ptr GLllinit_17(), GLllinit_18(), GLllinit_19(), GLllinit_20();
static Ptr GLllinit_21(), GLllinit_22(), GLllinit_23(), GLllinit_24();
static Ptr GLllinit_25(), GLllinit_26(), GLllinit_27();

/*      trace functions */
static Ptr GDllinit_28(), GDllinit_29(), GDllinit_30(), GDllinit_31();
static Ptr GDllinit_32(), GDllinit_33();

static Ptr GYllinit[11];

static const char GNllinit[] = "llinit";
static const char GTllinit[] = "Wed June 30 93 17:33:38 ";

static struct GellEntry GWllinit[] = {
        {GXitsoft,      GDllinit_28,    3},     /* itsoft */
        {GXsupitsof,    GDllinit_29,    4},     /* super-itsoft */
        {GXllversion,   GDllinit_30,    1},     /* version */
        {GXllsystem,    GDllinit_31,    1},     /* system */
        {GXstop,        GDllinit_32,    5},     /* end */
        {GXherald,      GDllinit_33,    1},     /* herald */
};

struct GellModule GZllinit = {
        GELLMODULESTAMP,
        GNllinit,
        GTllinit,
        GYllinit,
        6,
        GWllinit};
