/* GELL 15.26: include file for the module: "carcdr" */
/*             translation done:            "Sat Oct   7 17 20:53:34 " */

/*	impure LLM3 predefined	*/
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GIfcons;
extern Ptr GIbvar;
Ptr GMfcar = 0;
Ptr GMfcdr = 0;
Ptr GMca2r = 0;
Ptr GMcadr = 0;
Ptr GMcdar = 0;
Ptr GMcddr = 0;
Ptr GMcaaar = 0;
Ptr GMcaadr = 0;
Ptr GMcadar = 0;
Ptr GMcaddr = 0;
Ptr GMcdaar = 0;
Ptr GMcdadr = 0;
Ptr GMcddar = 0;
Ptr GMcdddr = 0;
Ptr GMcaaaar = 0;
Ptr GMcaaadr = 0;
Ptr GMcaadar = 0;
Ptr GMcaaddr = 0;
Ptr GMcadaar = 0;
Ptr GMcadadr = 0;
Ptr GMcaddar = 0;
Ptr GMcadddr = 0;
Ptr GMcdaaar = 0;
Ptr GMcdaadr = 0;
Ptr GMcdadar = 0;
Ptr GMcdaddr = 0;
Ptr GMcddaar = 0;
Ptr GMcddadr = 0;
Ptr GMcdddar = 0;
Ptr GMcddddr = 0;
#define GFfcar 2
#define GFfcdr 2
#define GFca2r 2
#define GFcadr 2
#define GFcdar 2
#define GFcddr 2
#define GFcaaar 2
#define GFcaadr 2
#define GFcadar 2
#define GFcaddr 2
#define GFcdaar 2
#define GFcdadr 2
#define GFcddar 2
#define GFcdddr 2
#define GFcaaaar 2
#define GFcaaadr 2
#define GFcaadar 2
#define GFcaaddr 2
#define GFcadaar 2
#define GFcadadr 2
#define GFcaddar 2
#define GFcadddr 2
#define GFcdaaar 2
#define GFcdaadr 2
#define GFcdadar 2
#define GFcdaddr 2
#define GFcddaar 2
#define GFcddadr 2
#define GFcdddar 2
#define GFcddddr 2

/*	LLM3 functions	*/
extern Ptr GXunbind7(void), GXunbind5(void), GXunbind3(void), GXunbind1(void);
extern Ptr GXpopja4(void), GXpopj9(void), GXpopj8(void), GXpopj7(void);
extern Ptr GXpopj6(void), GXpopj5(void), GXpopj4(void), GXpopj3(void);
extern Ptr GXpopj2(void), GXpopj1(void), GXpopj0(void), GXcddddr(void);
extern Ptr GXcdddar(void), GXcddadr(void), GXcddaar(void), GXcdaddr(void);
extern Ptr GXcdadar(void), GXcdaadr(void), GXcdaaar(void), GXcadddr(void);
extern Ptr GXcaddar(void), GXcadadr(void), GXcadaar(void), GXcaaddr(void);
extern Ptr GXcaadar(void), GXcaaadr(void), GXcaaaar(void), GXcdddr(void);
extern Ptr GXcddar(void), GXcdadr(void), GXcdaar(void), GXcaddr(void);
extern Ptr GXcadar(void), GXcaadr(void), GXcaaar(void), GXcddr(void);
extern Ptr GXcdar(void), GXcadr(void), GXca2r(void), GXfcdr(void);
extern Ptr GXfcar(void), GXini_cad(void), GXerrnla(void), GXinisymb(void);
extern Ptr GXevalan(void), GXevalt(void);

/*	intern functions	*/
static Ptr GLcarcdr_1(void), GLcarcdr_2(void), GLcarcdr_3(void), GLcarcdr_4(void);
static Ptr GLcarcdr_5(void), GLcarcdr_6(void), GLcarcdr_7(void), GLcarcdr_8(void);
static Ptr GLcarcdr_9(void);

/*	trace functions	*/
static Ptr GDcarcdr_10(void), GDcarcdr_11(void), GDcarcdr_12(void), GDcarcdr_13(void);
static Ptr GDcarcdr_14(void), GDcarcdr_15(void), GDcarcdr_16(void), GDcarcdr_17(void);
static Ptr GDcarcdr_18(void), GDcarcdr_19(void), GDcarcdr_20(void), GDcarcdr_21(void);
static Ptr GDcarcdr_22(void), GDcarcdr_23(void), GDcarcdr_24(void), GDcarcdr_25(void);
static Ptr GDcarcdr_26(void), GDcarcdr_27(void), GDcarcdr_28(void), GDcarcdr_29(void);
static Ptr GDcarcdr_30(void), GDcarcdr_31(void), GDcarcdr_32(void), GDcarcdr_33(void);
static Ptr GDcarcdr_34(void), GDcarcdr_35(void), GDcarcdr_36(void), GDcarcdr_37(void);
static Ptr GDcarcdr_38(void), GDcarcdr_39(void);

static Ptr GYcarcdr[32];

static const char GNcarcdr[] = "carcdr";
static const char GTcarcdr[] = "Sat Oct   7 17 20:53:34 ";

static struct GellEntry GWcarcdr[] = {
	{GXfcar,	GDcarcdr_10,	2},	/* car */
	{GXfcdr,	GDcarcdr_11,	2},	/* cdr */
	{GXca2r,	GDcarcdr_12,	2},	/* caar */
	{GXcadr,	GDcarcdr_13,	2},	/* cadr */
	{GXcdar,	GDcarcdr_14,	2},	/* cdar */
	{GXcddr,	GDcarcdr_15,	2},	/* cddr */
	{GXcaaar,	GDcarcdr_16,	2},	/* caaar */
	{GXcaadr,	GDcarcdr_17,	2},	/* caadr */
	{GXcadar,	GDcarcdr_18,	2},	/* cadar */
	{GXcaddr,	GDcarcdr_19,	2},	/* caddr */
	{GXcdaar,	GDcarcdr_20,	2},	/* cdaar */
	{GXcdadr,	GDcarcdr_21,	2},	/* cdadr */
	{GXcddar,	GDcarcdr_22,	2},	/* cddar */
	{GXcdddr,	GDcarcdr_23,	2},	/* cdddr */
	{GXcaaaar,	GDcarcdr_24,	2},	/* caaaar */
	{GXcaaadr,	GDcarcdr_25,	2},	/* caaadr */
	{GXcaadar,	GDcarcdr_26,	2},	/* caadar */
	{GXcaaddr,	GDcarcdr_27,	2},	/* caaddr */
	{GXcadaar,	GDcarcdr_28,	2},	/* cadaar */
	{GXcadadr,	GDcarcdr_29,	2},	/* cadadr */
	{GXcaddar,	GDcarcdr_30,	2},	/* caddar */
	{GXcadddr,	GDcarcdr_31,	2},	/* cadddr */
	{GXcdaaar,	GDcarcdr_32,	2},	/* cdaaar */
	{GXcdaadr,	GDcarcdr_33,	2},	/* cdaadr */
	{GXcdadar,	GDcarcdr_34,	2},	/* cdadar */
	{GXcdaddr,	GDcarcdr_35,	2},	/* cdaddr */
	{GXcddaar,	GDcarcdr_36,	2},	/* cddaar */
	{GXcddadr,	GDcarcdr_37,	2},	/* cddadr */
	{GXcdddar,	GDcarcdr_38,	2},	/* cdddar */
	{GXcddddr,	GDcarcdr_39,	2},	/* cddddr */
};

struct GellModule GZcarcdr = {
	GELLMODULESTAMP,
	GNcarcdr,
	GTcarcdr,
	GYcarcdr,
	30,
	GWcarcdr};
