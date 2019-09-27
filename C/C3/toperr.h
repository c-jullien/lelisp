/* GELL 15.26: include file for the module: "toperr" */
/*             translation done:            "Sat Oct   7 17 20:52:59 " */

/*	impure LLM3 predefined	*/
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
Ptr GMlltclock = 0;
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
#define GFlltclock 1

/*	LLM3 functions	*/
extern Ptr GXunbind7(void), GXunbind5(void), GXunbind3(void), GXunbind1(void);
extern Ptr GXpopja4(void), GXpopj9(void), GXpopj8(void), GXpopj7(void);
extern Ptr GXpopj6(void), GXpopj5(void), GXpopj4(void), GXpopj3(void);
extern Ptr GXpopj2(void), GXpopj1(void), GXpopj0(void), GXlltclock(void);
extern Ptr GXmouse(void), GXuserit(void), GXsysdebug(void), GXsyserror(void);
extern Ptr GXlerror(void), GXllshwstk(void), GXlltime(void), GXwithnoit(void);
extern Ptr GXwithit(void), GXclkalarm(void), GXlldate(void), GXllsleep(void);
extern Ptr GXrunt(void), GXllcallx(void), GXllgetadr(void), GXllgetenv(void);
extern Ptr GXllcline(void), GXcstack(void), GXtoplevel(void), GXgetsetn(void);
extern Ptr GXllclock(void), GXllmouse(void), GXllmerro(void), GXllpanic(void);
extern Ptr GXllbreak(void), GXerrxia(void), GXerrnab(void), GXerrgen(void);
extern Ptr GXerrsxt(void), GXerrios(void), GXerroob(void), GXerrbdf(void);
extern Ptr GXerrstl(void), GXerrstc(void), GXerrnda(void), GXerrnva(void);
extern Ptr GXerrsym(void), GXerrvec(void), GXerrnla(void), GXerrnsa(void);
extern Ptr GXerrnfa(void), GXerrnia(void), GXerrnna(void), GXerrnaa(void);
extern Ptr GXerrilb(void), GXerrwna(void), GXerrbal(void), GXerrbpa(void);
extern Ptr GXerrudt(void), GXerrudm(void), GXerrudf(void), GXerrudv(void);
extern Ptr GXerrfm(void), GXerrato(void), GXerr0dv(void), GXerrfh(void);
extern Ptr GXerrfv(void), GXerrfr(void), GXerrfsp(void), GXerrff(void);
extern Ptr GXerres(void), GXerrfsgc(void), GXerrfn(void), GXerrfs(void);
extern Ptr GXsystop(void), GXini_top(void), GXvaga1(void), GXloc(void);
extern Ptr GXmakevect(void), GXstringa1(void), GXfldiff(void), GXnreverse(void);
extern Ptr GXevprognr(void), GXevprogn(void), GXunbind10(void), GXunbind9(void);
extern Ptr GXunbind8(void), GXunbind7(void), GXunbind6(void), GXunbind5(void);
extern Ptr GXunbind4(void), GXunbind3(void), GXunbind2(void), GXunbind1(void);
extern Ptr GXunbind0(void), GXsysprot(void), GXevala1(void), GXeval(void);
extern Ptr GXfindtag(void), GXu_print(void), GXprobjt(void), GXprobj(void);
extern Ptr GXlread(void), GXtryatom(void), GXinicst(void), GXinisymb(void);
extern Ptr GXgcnumb(void), GXgcfloat(void), GXgccons(void), GXreenter(void);
extern Ptr GXitsoft(void), GXllsystem(void), GXevalan(void), GXevalt(void);

/*	intern functions	*/
static Ptr GLtoperr_1(void), GLtoperr_2(void), GLtoperr_3(void), GLtoperr_4(void);
static Ptr GLtoperr_5(void), GLtoperr_6(void), GLtoperr_7(void), GLtoperr_8(void);
static Ptr GLtoperr_9(void), GLtoperr_10(void), GLtoperr_11(void), GLtoperr_12(void);
static Ptr GLtoperr_13(void), GLtoperr_14(void), GLtoperr_15(void), GLtoperr_16(void);
static Ptr GLtoperr_17(void), GLtoperr_18(void), GLtoperr_19(void), GLtoperr_20(void);
static Ptr GLtoperr_21(void), GLtoperr_22(void), GLtoperr_23(void), GLtoperr_24(void);
static Ptr GLtoperr_25(void), GLtoperr_26(void), GLtoperr_27(void), GLtoperr_28(void);
static Ptr GLtoperr_29(void), GLtoperr_30(void), GLtoperr_31(void), GLtoperr_32(void);
static Ptr GLtoperr_33(void), GLtoperr_34(void), GLtoperr_36(void), GLtoperr_37(void);
static Ptr GLtoperr_38(void), GLtoperr_39(void), GLtoperr_40(void), GLtoperr_41(void);
static Ptr GLtoperr_42(void), GLtoperr_43(void), GLtoperr_44(void), GLtoperr_45(void);
static Ptr GLtoperr_46(void), GLtoperr_47(void), GLtoperr_48(void), GLtoperr_49(void);
static Ptr GLtoperr_50(void), GLtoperr_51(void), GLtoperr_52(void), GLtoperr_53(void);
static Ptr GLtoperr_54(void), GLtoperr_55(void), GLtoperr_56(void), GLtoperr_57(void);

/*	trace functions	*/
static Ptr GDtoperr_58(void), GDtoperr_59(void), GDtoperr_60(void), GDtoperr_61(void);
static Ptr GDtoperr_62(void), GDtoperr_63(void), GDtoperr_64(void), GDtoperr_65(void);
static Ptr GDtoperr_66(void), GDtoperr_67(void), GDtoperr_68(void), GDtoperr_69(void);
static Ptr GDtoperr_70(void), GDtoperr_71(void), GDtoperr_72(void), GDtoperr_73(void);
static Ptr GDtoperr_74(void), GDtoperr_75(void), GDtoperr_76(void), GDtoperr_77(void);

static Ptr GYtoperr[26];

static const char GNtoperr[] = "toperr";
static const char GTtoperr[] = "Sat Oct   7 17 20:52:59 ";

static struct GellEntry GWtoperr[] = {
	{GXtoplevel,	GDtoperr_58,	1},	/* toplevel */
	{GXcstack,	GDtoperr_59,	1},	/* cstack */
	{GXllcline,	GDtoperr_60,	2},	/* comline */
	{GXllgetenv,	GDtoperr_61,	2},	/* getenv */
	{GXllgetadr,	GDtoperr_62,	2},	/* getglobal */
	{GXllcallx,	GDtoperr_63,	5},	/* callextern */
	{GXrunt,	GDtoperr_64,	1},	/* runtime */
	{GXllsleep,	GDtoperr_65,	2},	/* sleep */
	{GXlldate,	GDtoperr_66,	1},	/* date */
	{GXclkalarm,	GDtoperr_67,	2},	/* clockalarm */
	{GXwithit,	GDtoperr_68,	6},	/* with-interrupts */
	{GXwithnoit,	GDtoperr_69,	6},	/* without-interrupts */
	{GXlltime,	GDtoperr_70,	2},	/* time */
	{GXllshwstk,	GDtoperr_71,	2},	/* stack-info */
	{GXlerror,	GDtoperr_72,	4},	/* error */
	{GXsyserror,	GDtoperr_73,	4},	/* syserror */
	{GXsysdebug,	GDtoperr_74,	1},	/* sysdebug */
	{GXuserit,	GDtoperr_75,	1},	/* user-interrupt */
	{GXmouse,	GDtoperr_76,	1},	/* mouse */
	{GXlltclock,	GDtoperr_77,	1},	/* clock */
};

struct GellModule GZtoperr = {
	GELLMODULESTAMP,
	GNtoperr,
	GTtoperr,
	GYtoperr,
	20,
	GWtoperr};
