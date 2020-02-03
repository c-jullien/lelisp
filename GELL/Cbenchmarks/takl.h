/* GELL 15.26: include file for the module: "takl" */
/*             translation done:            "Wed June 16 93 18:18:08 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLtakl_1(), GLtakl_2(), GLtakl_3(), GLtakl_5();
static Ptr GLtakl_6(), GLtakl_7(), GLtakl_8(), GLtakl_9();
static Ptr GLtakl_11(), GLtakl_12(), GLtakl_13(), GLtakl_15();
static Ptr GLtakl_17(), GLtakl_18(), GLtakl_20(), GLtakl_22();
static Ptr GLtakl_24();

/*      trace functions */
static Ptr GDtakl_25(), GDtakl_26(), GDtakl_27(), GDtakl_28();

static Ptr GYtakl[17];

static const char GNtakl[] = "takl";
static const char GTtakl[] = "Wed June 16 93 18:18:08 ";

static struct GellEntry GWtakl[] = {
        {GLtakl_1,      GDtakl_25,      1},     /* check-takl */
        {GLtakl_2,      GDtakl_26,      1},     /* meter-takl */
        {GLtakl_7,      GDtakl_27,      2},     /* test-takl */
        {GLtakl_12,     GDtakl_28,      2},     /* listn */
};

struct GellModule GZtakl = {
        GELLMODULESTAMP,
        GNtakl,
        GTtakl,
        GYtakl,
        4,
        GWtakl};
