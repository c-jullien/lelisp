/* GELL 15.26: include file for the module: "destru" */
/*             translation done:            "Wed June 16 93 18:18:23 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLdestru_1(), GLdestru_2(), GLdestru_3(), GLdestru_5();
static Ptr GLdestru_6(), GLdestru_7(), GLdestru_8(), GLdestru_9();
static Ptr GLdestru_11(), GLdestru_12(), GLdestru_13(), GLdestru_14();
static Ptr GLdestru_15(), GLdestru_16(), GLdestru_17(), GLdestru_18();

/*      trace functions */
static Ptr GDdestru_19(), GDdestru_20(), GDdestru_21();

static Ptr GYdestru[13];

static const char GNdestru[] = "destru";
static const char GTdestru[] = "Wed June 16 93 18:18:23 ";

static struct GellEntry GWdestru[] = {
        {GLdestru_1,    GDdestru_19,    1},     /* check-destru */
        {GLdestru_2,    GDdestru_20,    1},     /* meter-destru */
        {GLdestru_7,    GDdestru_21,    2},     /* test-destru */
};

struct GellModule GZdestru = {
        GELLMODULESTAMP,
        GNdestru,
        GTdestru,
        GYdestru,
        3,
        GWdestru};
