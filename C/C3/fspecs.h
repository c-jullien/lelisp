/* GELL 15.26: include file for the module: "fspecs" */
/*             translation done:            "Sat Oct   7 17 20:53:28 " */

/*	impure LLM3 predefined	*/
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
Ptr GMllcpnlist = 0;
Ptr GMllcperwna = 0;
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
#define GFllcpnlist 1
#define GFllcperwna 3
#define GFfibd 2
#define GFfibl 2
#define GFfibml 2

/*	LLM3 functions	*/
extern Ptr GXunbind7(void), GXunbind5(void), GXunbind3(void), GXunbind1(void);
extern Ptr GXpopja4(void), GXpopj9(void), GXpopj8(void), GXpopj7(void);
extern Ptr GXpopj6(void), GXpopj5(void), GXpopj4(void), GXpopj3(void);
extern Ptr GXpopj2(void), GXpopj1(void), GXpopj0(void), GXfibml(void);
extern Ptr GXfibl(void), GXfibd(void), GXllcperwna(void), GXllcpnlist(void);
extern Ptr GXcwithnoit(void), GXcwithit(void), GXcffuncall(void), GXctagbody(void);
extern Ptr GXcgo(void), GXcretfr(void), GXcexit(void), GXcblock(void);
extern Ptr GXcsched(void), GXcmplock(void), GXcprot(void), GXctag(void);
extern Ptr GXcbinds(void), GXcbindl(void), GXcbindn(void), GXcbind3(void);
extern Ptr GXcbind2(void), GXcbind1(void), GXcbind0(void), GXllretf(void);
extern Ptr GXllret(void), GXblock(void), GXgo(void), GXtagbody(void);
extern Ptr GXresume(void), GXsuspend(void), GXschedule(void), GXini_spec(void);
extern Ptr GXloc(void), GXdeset(void), GXevbale(void), GXffuncall(void);
extern Ptr GXsysprot(void), GXbndtrbex(void), GXevbndext(void), GXevprogn(void);
extern Ptr GXunbinp(void), GXevexpg(void), GXunbind10(void), GXunbind9(void);
extern Ptr GXunbind8(void), GXunbind7(void), GXunbind6(void), GXunbind5(void);
extern Ptr GXunbind4(void), GXunbind3(void), GXunbind2(void), GXunbinp1(void);
extern Ptr GXunbind1(void), GXunbind0(void), GXapply(void), GXevala1(void);
extern Ptr GXfindtag(void), GXinicst(void), GXinisymb(void), GXgccons(void);
extern Ptr GXerrwna(void), GXerrxia(void), GXerrsym(void), GXerrnab(void);
extern Ptr GXerres(void), GXerrfs(void), GXevalan(void), GXevalt(void);

/*	intern functions	*/
static Ptr GLfspecs_1(void), GLfspecs_2(void), GLfspecs_3(void), GLfspecs_4(void);
static Ptr GLfspecs_5(void), GLfspecs_6(void), GLfspecs_7(void), GLfspecs_8(void);
static Ptr GLfspecs_9(void), GLfspecs_10(void), GLfspecs_11(void), GLfspecs_12(void);
static Ptr GLfspecs_13(void), GLfspecs_14(void), GLfspecs_15(void), GLfspecs_16(void);
static Ptr GLfspecs_17(void), GLfspecs_18(void), GLfspecs_19(void), GLfspecs_20(void);
static Ptr GLfspecs_21(void), GLfspecs_22(void), GLfspecs_23(void), GLfspecs_24(void);
static Ptr GLfspecs_25(void), GLfspecs_26(void), GLfspecs_27(void), GLfspecs_28(void);
static Ptr GLfspecs_29(void), GLfspecs_30(void), GLfspecs_31(void), GLfspecs_32(void);
static Ptr GLfspecs_33(void), GLfspecs_34(void), GLfspecs_35(void), GLfspecs_36(void);
static Ptr GLfspecs_37(void), GLfspecs_38(void), GLfspecs_39(void), GLfspecs_40(void);
static Ptr GLfspecs_41(void), GLfspecs_42(void), GLfspecs_43(void), GLfspecs_44(void);
static Ptr GLfspecs_45(void), GLfspecs_46(void), GLfspecs_47(void), GLfspecs_48(void);
static Ptr GLfspecs_49(void), GLfspecs_50(void), GLfspecs_51(void), GLfspecs_52(void);
static Ptr GLfspecs_53(void);

/*	trace functions	*/
static Ptr GDfspecs_54(void), GDfspecs_55(void), GDfspecs_56(void), GDfspecs_57(void);
static Ptr GDfspecs_58(void), GDfspecs_59(void), GDfspecs_60(void), GDfspecs_61(void);
static Ptr GDfspecs_62(void), GDfspecs_63(void), GDfspecs_64(void), GDfspecs_65(void);
static Ptr GDfspecs_66(void), GDfspecs_67(void), GDfspecs_68(void), GDfspecs_69(void);
static Ptr GDfspecs_70(void), GDfspecs_71(void), GDfspecs_72(void), GDfspecs_73(void);
static Ptr GDfspecs_74(void), GDfspecs_75(void), GDfspecs_76(void), GDfspecs_77(void);
static Ptr GDfspecs_78(void), GDfspecs_79(void), GDfspecs_80(void), GDfspecs_81(void);
static Ptr GDfspecs_82(void), GDfspecs_83(void), GDfspecs_84(void), GDfspecs_85(void);

static Ptr GYfspecs[37];

static const char GNfspecs[] = "fspecs";
static const char GTfspecs[] = "Sat Oct   7 17 20:53:28 ";

static struct GellEntry GWfspecs[] = {
	{GXschedule,	GDfspecs_54,	6},	/* schedule */
	{GXsuspend,	GDfspecs_55,	1},	/* suspend */
	{GXresume,	GDfspecs_56,	2},	/* resume */
	{GXtagbody,	GDfspecs_57,	6},	/* tagbody */
	{GXgo,		GDfspecs_58,	6},	/* go */
	{GXblock,	GDfspecs_59,	6},	/* block */
	{GXllret,	GDfspecs_60,	6},	/* return */
	{GXllretf,	GDfspecs_61,	6},	/* return-from */
	{GXcbind0,	GDfspecs_62,	1},	/* cbind0 */
	{GXcbind1,	GDfspecs_63,	1},	/* cbind1 */
	{GXcbind2,	GDfspecs_64,	1},	/* cbind2 */
	{GXcbind3,	GDfspecs_65,	1},	/* cbind3 */
	{GXcbindn,	GDfspecs_66,	1},	/* cbindn */
	{GXcbindl,	GDfspecs_67,	1},	/* cbindl */
	{GXcbinds,	GDfspecs_68,	1},	/* cbinds */
	{GXctag,	GDfspecs_69,	1},	/* tag */
	{GXcprot,	GDfspecs_70,	1},	/* prot */
	{GXcmplock,	GDfspecs_71,	1},	/* lock */
	{GXcsched,	GDfspecs_72,	1},	/* #:gell:schedule */
	{GXcblock,	GDfspecs_73,	1},	/* #:gell:block */
	{GXcexit,	GDfspecs_74,	1},	/* exit */
	{GXcretfr,	GDfspecs_75,	1},	/* retfrom */
	{GXcgo,		GDfspecs_76,	1},	/* #:gell:go */
	{GXctagbody,	GDfspecs_77,	1},	/* #:gell:tagbody */
	{GXcffuncall,	GDfspecs_78,	1},	/* ffuncall */
	{GXcwithit,	GDfspecs_79,	1},	/* with-interrupts */
	{GXcwithnoit,	GDfspecs_80,	1},	/* without-interrupts */
	{GXllcpnlist,	GDfspecs_81,	1},	/* nlist */
	{GXllcperwna,	GDfspecs_82,	3},	/* errwna */
	{GXfibd,	GDfspecs_83,	2},	/* fibd */
	{GXfibl,	GDfspecs_84,	2},	/* fibl */
	{GXfibml,	GDfspecs_85,	2},	/* fibml */
};

struct GellModule GZfspecs = {
	GELLMODULESTAMP,
	GNfspecs,
	GTfspecs,
	GYfspecs,
	32,
	GWfspecs};
