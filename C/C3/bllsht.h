/* GELL 15.26: include file for the module: "bllsht" */
/*             translation done:            "Sat Oct   7 17 20:53:57 " */

/*	impure LLM3 predefined	*/
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

/*	LLM3 functions	*/
extern Ptr GXunbind7(void), GXunbind5(void), GXunbind3(void), GXunbind1(void);
extern Ptr GXpopja4(void), GXpopj9(void), GXpopj8(void), GXpopj7(void);
extern Ptr GXpopj6(void), GXpopj5(void), GXpopj4(void), GXpopj3(void);
extern Ptr GXpopj2(void), GXpopj1(void), GXpopj0(void), GXllcaln(void);
extern Ptr GXllcall(void), GXprecomp(void), GXbltmemory(void), GXmemory(void);
extern Ptr GXaecode(void), GXaccode(void), GXgtadr(void), GXsubadr(void);
extern Ptr GXincradr(void), GXaddadr(void), GXlocint(void), GXvaga1(void);
extern Ptr GXvag(void), GXloc(void), GXepur(void), GXini_bll(void);
extern Ptr GXevalcar(void), GXapply(void), GXinicst(void), GXinisymb(void);
extern Ptr GXgcnumb(void), GXgcfloat(void), GXgccons(void), GXerrfs(void);
extern Ptr GXerrvec(void), GXerrnva(void), GXerrnia(void), GXerrwna(void);
extern Ptr GXerrnda(void), GXtheend(void), GXreenter(void), GXevalan(void);
extern Ptr GXevalt(void);

/*	intern functions	*/
static Ptr GLbllsht_1(void), GLbllsht_2(void), GLbllsht_3(void), GLbllsht_4(void);
static Ptr GLbllsht_5(void), GLbllsht_6(void), GLbllsht_7(void), GLbllsht_8(void);
static Ptr GLbllsht_9(void), GLbllsht_10(void), GLbllsht_11(void), GLbllsht_12(void);
static Ptr GLbllsht_13(void), GLbllsht_14(void), GLbllsht_15(void), GLbllsht_16(void);
static Ptr GLbllsht_17(void), GLbllsht_18(void), GLbllsht_19(void), GLbllsht_20(void);
static Ptr GLbllsht_21(void);

/*	trace functions	*/
static Ptr GDbllsht_22(void), GDbllsht_23(void), GDbllsht_24(void), GDbllsht_25(void);
static Ptr GDbllsht_26(void), GDbllsht_27(void), GDbllsht_28(void), GDbllsht_29(void);
static Ptr GDbllsht_30(void), GDbllsht_31(void), GDbllsht_32(void), GDbllsht_33(void);
static Ptr GDbllsht_34(void), GDbllsht_35(void);

static Ptr GYbllsht[21];

static const char GNbllsht[] = "bllsht";
static const char GTbllsht[] = "Sat Oct   7 17 20:53:57 ";

static struct GellEntry GWbllsht[] = {
	{GXloc,		GDbllsht_22,	2},	/* loc */
	{GXlocint,	GDbllsht_23,	2},	/* locint */
	{GXvag,		GDbllsht_24,	2},	/* vag */
	{GXaddadr,	GDbllsht_25,	3},	/* addadr */
	{GXincradr,	GDbllsht_26,	3},	/* incradr */
	{GXsubadr,	GDbllsht_27,	3},	/* subadr */
	{GXgtadr,	GDbllsht_28,	3},	/* gtadr */
	{GXaccode,	GDbllsht_29,	5},	/* ccode */
	{GXaecode,	GDbllsht_30,	1},	/* ecode */
	{GXmemory,	GDbllsht_31,	5},	/* memory */
	{GXbltmemory,	GDbllsht_32,	4},	/* bltmemory */
	{GXprecomp,	GDbllsht_33,	6},	/* precompile */
	{GXllcall,	GDbllsht_34,	5},	/* call */
	{GXllcaln,	GDbllsht_35,	3},	/* calln */
};

struct GellModule GZbllsht = {
	GELLMODULESTAMP,
	GNbllsht,
	GTbllsht,
	GYbllsht,
	14,
	GWbllsht};
