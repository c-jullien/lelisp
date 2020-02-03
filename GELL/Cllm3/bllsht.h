/* GELL 15.26: include file for the module: "bllsht" */
/*             translation done:            "Wed June 30 93 17:35:06 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GMundef;
extern Ptr GIfcons;
extern Ptr GIbvar;
extern Ptr GMt;
extern Ptr GMvoid;
extern Ptr GMllsystem;
extern Ptr GIccode;
extern Ptr GIecode;
extern Ptr GImstack;
Ptr GMloc = 0;
Ptr GMlocint = 0;
Ptr GMvag = 0;
Ptr GMmemory = 0;
Ptr GMbltmemory = 0;
Ptr GMaddadr = 0;
Ptr GMincradr = 0;
Ptr GMsubadr = 0;
Ptr GMgtadr = 0;
Ptr GMaccode = 0;
Ptr GMaecode = 0;
Ptr GMprecomp = 0;
Ptr GMllcall = 0;
Ptr GMllcaln = 0;
#define GFloc 2
#define GFlocint 2
#define GFvag 2
#define GFaddadr 3
#define GFincradr 3
#define GFsubadr 3
#define GFgtadr 3
#define GFaccode 5
#define GFaecode 1
#define GFmemory 5
#define GFbltmemory 4
#define GFprecomp 6
#define GFllcall 5
#define GFllcaln 3
extern Ptr GIadrtmp = 0;
extern Ptr GIeimpur = 0;

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0(), GXllcaln();
extern Ptr GXllcall(), GXprecomp(), GXbltmemory(), GXmemory();
extern Ptr GXaecode(), GXaccode(), GXgtadr(), GXsubadr();
extern Ptr GXincradr(), GXaddadr(), GXlocint(), GXvaga1();
extern Ptr GXvag(), GXloc(), GXepur(), GXini_bll();
extern Ptr GXevalcar(), GXapply(), GXinicst(), GXinisymb();
extern Ptr GXgcnumb(), GXgcfloat(), GXgccons(), GXerrfs();
extern Ptr GXerrvec(), GXerrnva(), GXerrnia(), GXerrwna();
extern Ptr GXerrnda(), GXtheend(), GXreenter(), GXevalan();
extern Ptr GXevalt();

/*      intern functions        */
static Ptr GLbllsht_1(), GLbllsht_2(), GLbllsht_3(), GLbllsht_4();
static Ptr GLbllsht_5(), GLbllsht_6(), GLbllsht_7(), GLbllsht_8();
static Ptr GLbllsht_9(), GLbllsht_10(), GLbllsht_11(), GLbllsht_12();
static Ptr GLbllsht_13(), GLbllsht_14(), GLbllsht_15(), GLbllsht_16();
static Ptr GLbllsht_17(), GLbllsht_18(), GLbllsht_19(), GLbllsht_20();

/*      trace functions */
static Ptr GDbllsht_21(), GDbllsht_22(), GDbllsht_23(), GDbllsht_24();
static Ptr GDbllsht_25(), GDbllsht_26(), GDbllsht_27(), GDbllsht_28();
static Ptr GDbllsht_29(), GDbllsht_30(), GDbllsht_31(), GDbllsht_32();
static Ptr GDbllsht_33(), GDbllsht_34();

static Ptr GYbllsht[21];

static const char GNbllsht[] = "bllsht";
static const char GTbllsht[] = "Wed June 30 93 17:35:06 ";

static struct GellEntry GWbllsht[] = {
        {GXloc,         GDbllsht_21,    2},     /* loc */
        {GXlocint,      GDbllsht_22,    2},     /* locint */
        {GXvag,         GDbllsht_23,    2},     /* vag */
        {GXaddadr,      GDbllsht_24,    3},     /* addadr */
        {GXincradr,     GDbllsht_25,    3},     /* incradr */
        {GXsubadr,      GDbllsht_26,    3},     /* subadr */
        {GXgtadr,       GDbllsht_27,    3},     /* gtadr */
        {GXaccode,      GDbllsht_28,    5},     /* ccode */
        {GXaecode,      GDbllsht_29,    1},     /* ecode */
        {GXmemory,      GDbllsht_30,    5},     /* memory */
        {GXbltmemory,   GDbllsht_31,    4},     /* bltmemory */
        {GXprecomp,     GDbllsht_32,    6},     /* precompile */
        {GXllcall,      GDbllsht_33,    5},     /* call */
        {GXllcaln,      GDbllsht_34,    3},     /* calln */
};

struct GellModule GZbllsht = {
        GELLMODULESTAMP,
        GNbllsht,
        GTbllsht,
        GYbllsht,
        14,
        GWbllsht};
