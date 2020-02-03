/* GELL 15.26: include file for the module: "tak" */
/*             translation done:            "Wed June 16 93 18:18:05 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLtak_1(), GLtak_2(), GLtak_3(), GLtak_5();
static Ptr GLtak_6(), GLtak_7(), GLtak_8(), GLtak_9();
static Ptr GLtak_11(), GLtak_13(), GLtak_15(), GLtak_17();

/*      trace functions */
static Ptr GDtak_18(), GDtak_19(), GDtak_20();

static Ptr GYtak[12];

static const char GNtak[] = "tak";
static const char GTtak[] = "Wed June 16 93 18:18:05 ";

static struct GellEntry GWtak[] = {
        {GLtak_1,       GDtak_18,       1},     /* check-tak */
        {GLtak_2,       GDtak_19,       1},     /* meter-tak */
        {GLtak_7,       GDtak_20,       2},     /* test-tak */
};

struct GellModule GZtak = {
        GELLMODULESTAMP,
        GNtak,
        GTtak,
        GYtak,
        3,
        GWtak};
