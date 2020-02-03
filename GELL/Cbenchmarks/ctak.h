/* GELL 15.26: include file for the module: "ctak" */
/*             translation done:            "Wed June 16 93 18:18:07 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLctak_1(), GLctak_2(), GLctak_3(), GLctak_5();
static Ptr GLctak_6(), GLctak_7(), GLctak_8(), GLctak_9();
static Ptr GLctak_11(), GLctak_13(), GLctak_14(), GLctak_15();
static Ptr GLctak_17(), GLctak_18(), GLctak_20(), GLctak_21();
static Ptr GLctak_23();

/*      trace functions */
static Ptr GDctak_24(), GDctak_25(), GDctak_26();

static Ptr GYctak[14];

static const char GNctak[] = "ctak";
static const char GTctak[] = "Wed June 16 93 18:18:07 ";

static struct GellEntry GWctak[] = {
        {GLctak_1,      GDctak_24,      1},     /* check-ctak */
        {GLctak_2,      GDctak_25,      1},     /* meter-ctak */
        {GLctak_7,      GDctak_26,      2},     /* test-ctak */
};

struct GellModule GZctak = {
        GELLMODULESTAMP,
        GNctak,
        GTctak,
        GYctak,
        3,
        GWctak};
