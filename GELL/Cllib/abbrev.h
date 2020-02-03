/* GELL 15.26: include file for the module: "abbrev" */
/*             translation done:            "Wed June 16 93 18:01:13 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLabbrev_1(), GLabbrev_2(), GLabbrev_3(), GLabbrev_4();
static Ptr GLabbrev_5(), GLabbrev_7(), GLabbrev_8(), GLabbrev_10();
static Ptr GLabbrev_11(), GLabbrev_12(), GLabbrev_13(), GLabbrev_15();
static Ptr GLabbrev_16(), GLabbrev_17(), GLabbrev_18(), GLabbrev_19();
static Ptr GLabbrev_20(), GLabbrev_22(), GLabbrev_24(), GLabbrev_26();
static Ptr GLabbrev_28(), GLabbrev_30(), GLabbrev_32();

/*      trace functions */
static Ptr GDabbrev_33(), GDabbrev_34(), GDabbrev_35(), GDabbrev_36();
static Ptr GDabbrev_37(), GDabbrev_38(), GDabbrev_39();

static Ptr GYabbrev[28];

static const char GNabbrev[] = "abbrev";
static const char GTabbrev[] = "Wed June 16 93 18:01:13 ";

static struct GellEntry GWabbrev[] = {
        {GLabbrev_1,    GDabbrev_33,    12},    /* defabbrev */
        {GLabbrev_4,    GDabbrev_34,    3},     /* put-abbrev */
        {GLabbrev_8,    GDabbrev_35,    2},     /* rem-abbrev */
        {GLabbrev_11,   GDabbrev_36,    2},     /* get-abbrev */
        {GLabbrev_17,   GDabbrev_37,    2},     /* abbrevp */
        {GLabbrev_18,   GDabbrev_38,    2},     /* has-an-abbrev */
        {GLabbrev_19,   GDabbrev_39,    2},     /* #:symbol:prin */
};

struct GellModule GZabbrev = {
        GELLMODULESTAMP,
        GNabbrev,
        GTabbrev,
        GYabbrev,
        7,
        GWabbrev};
