/* GELL 15.26: include file for the module: "carcdr" */
/*             translation done:            "Wed June 30 93 17:34:34 " */

/*      impure LLM3 predefined  */
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

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0(), GXcddddr();
extern Ptr GXcdddar(), GXcddadr(), GXcddaar(), GXcdaddr();
extern Ptr GXcdadar(), GXcdaadr(), GXcdaaar(), GXcadddr();
extern Ptr GXcaddar(), GXcadadr(), GXcadaar(), GXcaaddr();
extern Ptr GXcaadar(), GXcaaadr(), GXcaaaar(), GXcdddr();
extern Ptr GXcddar(), GXcdadr(), GXcdaar(), GXcaddr();
extern Ptr GXcadar(), GXcaadr(), GXcaaar(), GXcddr();
extern Ptr GXcdar(), GXcadr(), GXca2r(), GXfcdr();
extern Ptr GXfcar(), GXini_cad(), GXerrnla(), GXinisymb();
extern Ptr GXevalan(), GXevalt();

/*      intern functions        */
static Ptr GLcarcdr_1(), GLcarcdr_2(), GLcarcdr_3(), GLcarcdr_4();
static Ptr GLcarcdr_5(), GLcarcdr_6(), GLcarcdr_7(), GLcarcdr_8();
static Ptr GLcarcdr_9();

/*      trace functions */
static Ptr GDcarcdr_10(), GDcarcdr_11(), GDcarcdr_12(), GDcarcdr_13();
static Ptr GDcarcdr_14(), GDcarcdr_15(), GDcarcdr_16(), GDcarcdr_17();
static Ptr GDcarcdr_18(), GDcarcdr_19(), GDcarcdr_20(), GDcarcdr_21();
static Ptr GDcarcdr_22(), GDcarcdr_23(), GDcarcdr_24(), GDcarcdr_25();
static Ptr GDcarcdr_26(), GDcarcdr_27(), GDcarcdr_28(), GDcarcdr_29();
static Ptr GDcarcdr_30(), GDcarcdr_31(), GDcarcdr_32(), GDcarcdr_33();
static Ptr GDcarcdr_34(), GDcarcdr_35(), GDcarcdr_36(), GDcarcdr_37();
static Ptr GDcarcdr_38(), GDcarcdr_39();

static Ptr GYcarcdr[32];

static const char GNcarcdr[] = "carcdr";
static const char GTcarcdr[] = "Wed June 30 93 17:34:34 ";

static struct GellEntry GWcarcdr[] = {
        {GXfcar,        GDcarcdr_10,    2},     /* car */
        {GXfcdr,        GDcarcdr_11,    2},     /* cdr */
        {GXca2r,        GDcarcdr_12,    2},     /* caar */
        {GXcadr,        GDcarcdr_13,    2},     /* cadr */
        {GXcdar,        GDcarcdr_14,    2},     /* cdar */
        {GXcddr,        GDcarcdr_15,    2},     /* cddr */
        {GXcaaar,       GDcarcdr_16,    2},     /* caaar */
        {GXcaadr,       GDcarcdr_17,    2},     /* caadr */
        {GXcadar,       GDcarcdr_18,    2},     /* cadar */
        {GXcaddr,       GDcarcdr_19,    2},     /* caddr */
        {GXcdaar,       GDcarcdr_20,    2},     /* cdaar */
        {GXcdadr,       GDcarcdr_21,    2},     /* cdadr */
        {GXcddar,       GDcarcdr_22,    2},     /* cddar */
        {GXcdddr,       GDcarcdr_23,    2},     /* cdddr */
        {GXcaaaar,      GDcarcdr_24,    2},     /* caaaar */
        {GXcaaadr,      GDcarcdr_25,    2},     /* caaadr */
        {GXcaadar,      GDcarcdr_26,    2},     /* caadar */
        {GXcaaddr,      GDcarcdr_27,    2},     /* caaddr */
        {GXcadaar,      GDcarcdr_28,    2},     /* cadaar */
        {GXcadadr,      GDcarcdr_29,    2},     /* cadadr */
        {GXcaddar,      GDcarcdr_30,    2},     /* caddar */
        {GXcadddr,      GDcarcdr_31,    2},     /* cadddr */
        {GXcdaaar,      GDcarcdr_32,    2},     /* cdaaar */
        {GXcdaadr,      GDcarcdr_33,    2},     /* cdaadr */
        {GXcdadar,      GDcarcdr_34,    2},     /* cdadar */
        {GXcdaddr,      GDcarcdr_35,    2},     /* cdaddr */
        {GXcddaar,      GDcarcdr_36,    2},     /* cddaar */
        {GXcddadr,      GDcarcdr_37,    2},     /* cddadr */
        {GXcdddar,      GDcarcdr_38,    2},     /* cdddar */
        {GXcddddr,      GDcarcdr_39,    2},     /* cddddr */
};

struct GellModule GZcarcdr = {
        GELLMODULESTAMP,
        GNcarcdr,
        GTcarcdr,
        GYcarcdr,
        30,
        GWcarcdr};
