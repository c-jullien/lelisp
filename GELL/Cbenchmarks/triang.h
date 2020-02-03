/* GELL 15.26: include file for the module: "triang" */
/*             translation done:            "Wed June 16 93 18:18:33 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLtriang_1(), GLtriang_2(), GLtriang_3(), GLtriang_5();
static Ptr GLtriang_6(), GLtriang_7(), GLtriang_8(), GLtriang_9();
static Ptr GLtriang_11(), GLtriang_12(), GLtriang_13(), GLtriang_14();
static Ptr GLtriang_15(), GLtriang_17(), GLtriang_19(), GLtriang_20();
static Ptr GLtriang_21(), GLtriang_22(), GLtriang_24(), GLtriang_26();

/*      trace functions */
static Ptr GDtriang_27(), GDtriang_28(), GDtriang_29();

static Ptr GYtriang[21];

static const char GNtriang[] = "triang";
static const char GTtriang[] = "Wed June 16 93 18:18:33 ";

static struct GellEntry GWtriang[] = {
        {GLtriang_1,    GDtriang_27,    1},     /* check-triang */
        {GLtriang_2,    GDtriang_28,    1},     /* meter-triang */
        {GLtriang_7,    GDtriang_29,    2},     /* test-triang */
};

struct GellModule GZtriang = {
        GELLMODULESTAMP,
        GNtriang,
        GTtriang,
        GYtriang,
        3,
        GWtriang};
