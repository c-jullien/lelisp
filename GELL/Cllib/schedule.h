/* GELL 15.26: include file for the module: "schedule" */
/*             translation done:            "Wed June 16 93 18:03:02 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLschedule_1(), GLschedule_3(), GLschedule_4(), GLschedule_5();
static Ptr GLschedule_6(), GLschedule_7(), GLschedule_8(), GLschedule_10();
static Ptr GLschedule_11(), GLschedule_12(), GLschedule_13(), GLschedule_14();
static Ptr GLschedule_15(), GLschedule_16(), GLschedule_18(), GLschedule_19();
static Ptr GLschedule_21(), GLschedule_23(), GLschedule_24(), GLschedule_26();
static Ptr GLschedule_28(), GLschedule_29(), GLschedule_30(), GLschedule_32();
static Ptr GLschedule_34(), GLschedule_35(), GLschedule_36(), GLschedule_37();
static Ptr GLschedule_38(), GLschedule_39(), GLschedule_41(), GLschedule_43();
static Ptr GLschedule_44(), GLschedule_46(), GLschedule_48(), GLschedule_49();
static Ptr GLschedule_51(), GLschedule_52(), GLschedule_53(), GLschedule_55();
static Ptr GLschedule_56(), GLschedule_57(), GLschedule_58(), GLschedule_59();
static Ptr GLschedule_60(), GLschedule_61(), GLschedule_63(), GLschedule_65();
static Ptr GLschedule_66(), GLschedule_67(), GLschedule_69(), GLschedule_71();
static Ptr GLschedule_73(), GLschedule_74(), GLschedule_75();

/*      trace functions */
static Ptr GDschedule_76(), GDschedule_77(), GDschedule_78(), GDschedule_79();
static Ptr GDschedule_80(), GDschedule_81(), GDschedule_82(), GDschedule_83();
static Ptr GDschedule_84(), GDschedule_85(), GDschedule_86();

static Ptr GYschedule[57];

static const char GNschedule[] = "schedule";
static const char GTschedule[] = "Wed June 16 93 18:03:02 ";

static struct GellEntry GWschedule[] = {
        {GLschedule_1,  GDschedule_76,  1},     /* clock */
        {GLschedule_5,  GDschedule_77,  12},    /* clockstart */
        {GLschedule_6,  GDschedule_78,  12},    /* clockstop */
        {GLschedule_7,  GDschedule_79,  6},     /* parallel */
        {GLschedule_15, GDschedule_80,  2},     /* #:parallel:g106 */
        {GLschedule_29, GDschedule_81,  6},     /* parallelvalues */
        {GLschedule_38, GDschedule_82,  2},     /* #:parallelvalues:g107 */
        {GLschedule_52, GDschedule_83,  6},     /* tryinparallel */
        {GLschedule_60, GDschedule_84,  2},     /* #:tryinparallel:g108 */
        {GLschedule_74, GDschedule_85,  12},    /* progn-no-suspend */
        {GLschedule_75, GDschedule_86,  12},    /* letparallel */
};

struct GellModule GZschedule = {
        GELLMODULESTAMP,
        GNschedule,
        GTschedule,
        GYschedule,
        11,
        GWschedule};
