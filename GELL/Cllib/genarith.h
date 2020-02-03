/* GELL 15.26: include file for the module: "genarith" */
/*             translation done:            "Wed June 16 93 18:00:49 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLgenarith_1(), GLgenarith_2(), GLgenarith_4(), GLgenarith_6();
static Ptr GLgenarith_7(), GLgenarith_8(), GLgenarith_9(), GLgenarith_11();
static Ptr GLgenarith_13(), GLgenarith_14(), GLgenarith_15(), GLgenarith_17();
static Ptr GLgenarith_18(), GLgenarith_19(), GLgenarith_21(), GLgenarith_23();
static Ptr GLgenarith_24(), GLgenarith_25(), GLgenarith_26(), GLgenarith_27();
static Ptr GLgenarith_29(), GLgenarith_31(), GLgenarith_32(), GLgenarith_33();
static Ptr GLgenarith_35(), GLgenarith_36(), GLgenarith_37(), GLgenarith_39();
static Ptr GLgenarith_41(), GLgenarith_42(), GLgenarith_43(), GLgenarith_45();
static Ptr GLgenarith_46(), GLgenarith_49(), GLgenarith_51(), GLgenarith_53();
static Ptr GLgenarith_54(), GLgenarith_55(), GLgenarith_57(), GLgenarith_58();
static Ptr GLgenarith_59(), GLgenarith_60(), GLgenarith_61(), GLgenarith_63();
static Ptr GLgenarith_65(), GLgenarith_66(), GLgenarith_67(), GLgenarith_68();
static Ptr GLgenarith_69(), GLgenarith_70(), GLgenarith_72(), GLgenarith_74();
static Ptr GLgenarith_76(), GLgenarith_78(), GLgenarith_80(), GLgenarith_82();
static Ptr GLgenarith_84(), GLgenarith_85(), GLgenarith_86(), GLgenarith_87();
static Ptr GLgenarith_88(), GLgenarith_90(), GLgenarith_91();

/*      trace functions */
static Ptr GDgenarith_92(), GDgenarith_93(), GDgenarith_94(), GDgenarith_95();
static Ptr GDgenarith_96(), GDgenarith_97(), GDgenarith_98(), GDgenarith_99();
static Ptr GDgenarith_100(), GDgenarith_101();

static Ptr GYgenarith[33];

static const char GNgenarith[] = "genarith";
static const char GTgenarith[] = "Wed June 16 93 18:00:49 ";

static struct GellEntry GWgenarith[] = {
        {GLgenarith_1,  GDgenarith_92,  3},     /* #:genarith:+ */
        {GLgenarith_8,  GDgenarith_93,  3},     /* #:genarith:- */
        {GLgenarith_14, GDgenarith_94,  2},     /* #:genarith:0- */
        {GLgenarith_18, GDgenarith_95,  3},     /* #:genarith:* */
        {GLgenarith_24, GDgenarith_96,  3},     /* #:genarith:/ */
        {GLgenarith_32, GDgenarith_97,  2},     /* #:genarith:1/ */
        {GLgenarith_36, GDgenarith_98,  3},     /* #:genarith:quomod */
        {GLgenarith_49, GDgenarith_99,  2},     /* floor */
        {GLgenarith_55, GDgenarith_100, 2},     /* ceiling */
        {GLgenarith_59, GDgenarith_101, 3},     /* round */
};

struct GellModule GZgenarith = {
        GELLMODULESTAMP,
        GNgenarith,
        GTgenarith,
        GYgenarith,
        10,
        GWgenarith};
