/* GELL 15.26: include file for the module: "array" */
/*             translation done:            "Wed June 16 93 18:01:49 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLarray_1(), GLarray_4(), GLarray_6(), GLarray_8();
static Ptr GLarray_9(), GLarray_10(), GLarray_11(), GLarray_12();
static Ptr GLarray_13(), GLarray_14(), GLarray_15(), GLarray_16();
static Ptr GLarray_17(), GLarray_19(), GLarray_21(), GLarray_22();
static Ptr GLarray_23(), GLarray_24(), GLarray_26(), GLarray_28();
static Ptr GLarray_30();

/*      trace functions */
static Ptr GDarray_31(), GDarray_32(), GDarray_33();

static Ptr GYarray[23];

static const char GNarray[] = "array";
static const char GTarray[] = "Wed June 16 93 18:01:49 ";

static struct GellEntry GWarray[] = {
        {GLarray_1,     GDarray_31,     5},     /* makearray */
        {GLarray_15,    GDarray_32,     12},    /* aref */
        {GLarray_22,    GDarray_33,     12},    /* aset */
};

struct GellModule GZarray = {
        GELLMODULESTAMP,
        GNarray,
        GTarray,
        GYarray,
        3,
        GWarray};
