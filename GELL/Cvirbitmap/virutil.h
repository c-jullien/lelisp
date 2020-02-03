/* GELL 15.26: include file for the module: "virutil" */
/*             translation done:            "Tue Aug  24 93 10:48:45 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLvirutil_1(), GLvirutil_2(), GLvirutil_3(), GLvirutil_4();
static Ptr GLvirutil_5(), GLvirutil_6(), GLvirutil_7(), GLvirutil_8();
static Ptr GLvirutil_9(), GLvirutil_10(), GLvirutil_11(), GLvirutil_12();
static Ptr GLvirutil_13(), GLvirutil_14(), GLvirutil_15(), GLvirutil_16();
static Ptr GLvirutil_17(), GLvirutil_18(), GLvirutil_19(), GLvirutil_20();
static Ptr GLvirutil_21(), GLvirutil_22(), GLvirutil_23(), GLvirutil_24();
static Ptr GLvirutil_25(), GLvirutil_28(), GLvirutil_29(), GLvirutil_31();
static Ptr GLvirutil_32();

/*      trace functions */
static Ptr GDvirutil_33(), GDvirutil_34(), GDvirutil_35(), GDvirutil_36();
static Ptr GDvirutil_37(), GDvirutil_38(), GDvirutil_39(), GDvirutil_40();
static Ptr GDvirutil_41(), GDvirutil_42(), GDvirutil_43(), GDvirutil_44();
static Ptr GDvirutil_45(), GDvirutil_46();

static Ptr GYvirutil[39];

static const char GNvirutil[] = "virutil";
static const char GTvirutil[] = "Tue Aug  24 93 10:48:45 ";

static struct GellEntry GWvirutil[] = {
        {GLvirutil_1,   GDvirutil_33,   1},     /* #:color:make */
        {GLvirutil_3,   GDvirutil_34,   1},     /* #:graph-env:make */
        {GLvirutil_5,   GDvirutil_35,   1},     /* #:event:make */
        {GLvirutil_7,   GDvirutil_36,   1},     /* #:bitmap:make */
        {GLvirutil_9,   GDvirutil_37,   1},     /* #:bitmap:bytemap:make */
        {GLvirutil_11,  GDvirutil_38,   1},     /* #:bitmap:stipple:make */
        {GLvirutil_13,  GDvirutil_39,   1},     /* #:image:rectangle:make */
        {GLvirutil_15,  GDvirutil_40,   1},     /* #:image:rectangle:window:make */
        {GLvirutil_17,  GDvirutil_41,   1},     /* #:menu:make */
        {GLvirutil_19,  GDvirutil_42,   1},     /* #:menu:itemlist:make */
        {GLvirutil_21,  GDvirutil_43,   1},     /* #:menu:item:make */
        {GLvirutil_23,  GDvirutil_44,   1},     /* #:font-info:make */
        {GLvirutil_25,  GDvirutil_45,   5},     /* #:window:background */
        {GLvirutil_28,  GDvirutil_46,   5},     /* current-display */
};

struct GellModule GZvirutil = {
        GELLMODULESTAMP,
        GNvirutil,
        GTvirutil,
        GYvirutil,
        14,
        GWvirutil};
