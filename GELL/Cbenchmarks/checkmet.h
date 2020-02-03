/* GELL 15.26: include file for the module: "checkmet" */
/*             translation done:            "Wed June 16 93 18:18:04 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLcheckmet_1(), GLcheckmet_2(), GLcheckmet_4(), GLcheckmet_5();

/*      trace functions */
static Ptr GDcheckmet_6(), GDcheckmet_7();

static Ptr GYcheckmet[15];

static const char GNcheckmet[] = "checkmet";
static const char GTcheckmet[] = "Wed June 16 93 18:18:04 ";

static struct GellEntry GWcheckmet[] = {
        {GLcheckmet_1,  GDcheckmet_6,   3},     /* check-value */
        {GLcheckmet_5,  GDcheckmet_7,   12},    /* perform-meter */
};

struct GellModule GZcheckmet = {
        GELLMODULESTAMP,
        GNcheckmet,
        GTcheckmet,
        GYcheckmet,
        2,
        GWcheckmet};
