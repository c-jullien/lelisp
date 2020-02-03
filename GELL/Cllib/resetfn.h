/* GELL 15.26: include file for the module: "resetfn" */
/*             translation done:            "Wed June 16 93 18:02:59 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLresetfn_1(), GLresetfn_3(), GLresetfn_4(), GLresetfn_6();
static Ptr GLresetfn_7(), GLresetfn_9(), GLresetfn_10(), GLresetfn_12();
static Ptr GLresetfn_13(), GLresetfn_15(), GLresetfn_16(), GLresetfn_18();
static Ptr GLresetfn_19(), GLresetfn_21(), GLresetfn_22(), GLresetfn_24();
static Ptr GLresetfn_26(), GLresetfn_28(), GLresetfn_29(), GLresetfn_30();
static Ptr GLresetfn_31(), GLresetfn_32(), GLresetfn_34(), GLresetfn_35();
static Ptr GLresetfn_36(), GLresetfn_37(), GLresetfn_38(), GLresetfn_39();
static Ptr GLresetfn_41(), GLresetfn_43(), GLresetfn_45(), GLresetfn_47();
static Ptr GLresetfn_48(), GLresetfn_50(), GLresetfn_51(), GLresetfn_53();
static Ptr GLresetfn_55(), GLresetfn_57(), GLresetfn_59();

/*      trace functions */
static Ptr GDresetfn_60(), GDresetfn_61(), GDresetfn_62(), GDresetfn_63();
static Ptr GDresetfn_64(), GDresetfn_65(), GDresetfn_66(), GDresetfn_67();

static Ptr GYresetfn[42];

static const char GNresetfn[] = "resetfn";
static const char GTresetfn[] = "Wed June 16 93 18:02:59 ";

static struct GellEntry GWresetfn[] = {
        {GLresetfn_1,   GDresetfn_60,   1},     /* #:gell-resetfn:get-body */
        {GLresetfn_4,   GDresetfn_61,   1},     /* #:gell-resetfn:function-0 */
        {GLresetfn_7,   GDresetfn_62,   1},     /* #:gell-resetfn:function-1 */
        {GLresetfn_10,  GDresetfn_63,   1},     /* #:gell-resetfn:function-2 */
        {GLresetfn_13,  GDresetfn_64,   1},     /* #:gell-resetfn:function-3 */
        {GLresetfn_16,  GDresetfn_65,   1},     /* #:gell-resetfn:function-n */
        {GLresetfn_19,  GDresetfn_66,   1},     /* #:gell-resetfn:function-f */
        {GLresetfn_32,  GDresetfn_67,   4},     /* resetfn */
};

struct GellModule GZresetfn = {
        GELLMODULESTAMP,
        GNresetfn,
        GTresetfn,
        GYresetfn,
        8,
        GWresetfn};
