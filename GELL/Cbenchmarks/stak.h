/* GELL 15.26: include file for the module: "stak" */
/*             translation done:            "Wed June 16 93 18:18:06 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLstak_1(), GLstak_2(), GLstak_3(), GLstak_5();
static Ptr GLstak_6(), GLstak_7(), GLstak_8(), GLstak_9();
static Ptr GLstak_11(), GLstak_13(), GLstak_14(), GLstak_16();
static Ptr GLstak_18(), GLstak_20(), GLstak_22();

/*      trace functions */
static Ptr GDstak_23(), GDstak_24(), GDstak_25();

static Ptr GYstak[21];

static const char GNstak[] = "stak";
static const char GTstak[] = "Wed June 16 93 18:18:06 ";

static struct GellEntry GWstak[] = {
        {GLstak_1,      GDstak_23,      1},     /* check-stak */
        {GLstak_2,      GDstak_24,      1},     /* meter-stak */
        {GLstak_7,      GDstak_25,      2},     /* test-stak */
};

struct GellModule GZstak = {
        GELLMODULESTAMP,
        GNstak,
        GTstak,
        GYstak,
        3,
        GWstak};
