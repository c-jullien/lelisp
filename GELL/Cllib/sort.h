/* GELL 15.26: include file for the module: "sort" */
/*             translation done:            "Wed June 16 93 18:01:48 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLsort_1(), GLsort_3(), GLsort_4(), GLsort_5();
static Ptr GLsort_7(), GLsort_9(), GLsort_11(), GLsort_13();
static Ptr GLsort_15(), GLsort_16(), GLsort_17(), GLsort_18();
static Ptr GLsort_19(), GLsort_20(), GLsort_21(), GLsort_22();
static Ptr GLsort_23(), GLsort_24(), GLsort_26(), GLsort_28();

/*      trace functions */
static Ptr GDsort_29(), GDsort_30(), GDsort_31(), GDsort_32();
static Ptr GDsort_33();

static Ptr GYsort[19];

static const char GNsort[] = "sort";
static const char GTsort[] = "Wed June 16 93 18:01:48 ";

static struct GellEntry GWsort[] = {
        {GLsort_1,      GDsort_29,      3},     /* sort */
        {GLsort_21,     GDsort_30,      2},     /* sortl */
        {GLsort_22,     GDsort_31,      2},     /* sortn */
        {GLsort_23,     GDsort_32,      2},     /* sortp */
        {GLsort_24,     GDsort_33,      3},     /* pkgcmp */
};

struct GellModule GZsort = {
        GELLMODULESTAMP,
        GNsort,
        GTsort,
        GYsort,
        5,
        GWsort};
