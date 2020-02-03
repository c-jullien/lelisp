/* GELL 15.26: include file for the module: "traverse" */
/*             translation done:            "Wed June 16 93 18:18:24 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLtraverse_1(), GLtraverse_2(), GLtraverse_3(), GLtraverse_5();
static Ptr GLtraverse_6(), GLtraverse_7(), GLtraverse_8(), GLtraverse_9();
static Ptr GLtraverse_11(), GLtraverse_12(), GLtraverse_13(), GLtraverse_14();
static Ptr GLtraverse_16(), GLtraverse_17(), GLtraverse_18(), GLtraverse_19();
static Ptr GLtraverse_20(), GLtraverse_22(), GLtraverse_23(), GLtraverse_24();
static Ptr GLtraverse_26(), GLtraverse_27(), GLtraverse_28(), GLtraverse_29();
static Ptr GLtraverse_30(), GLtraverse_31(), GLtraverse_32(), GLtraverse_33();
static Ptr GLtraverse_34(), GLtraverse_35(), GLtraverse_36(), GLtraverse_37();
static Ptr GLtraverse_38(), GLtraverse_40(), GLtraverse_41(), GLtraverse_42();
static Ptr GLtraverse_44(), GLtraverse_45(), GLtraverse_47(), GLtraverse_49();
static Ptr GLtraverse_50(), GLtraverse_51(), GLtraverse_53(), GLtraverse_55();
static Ptr GLtraverse_57(), GLtraverse_59(), GLtraverse_61(), GLtraverse_63();
static Ptr GLtraverse_64(), GLtraverse_65(), GLtraverse_66(), GLtraverse_67();
static Ptr GLtraverse_69(), GLtraverse_70(), GLtraverse_72(), GLtraverse_74();
static Ptr GLtraverse_75(), GLtraverse_76(), GLtraverse_78(), GLtraverse_80();
static Ptr GLtraverse_82(), GLtraverse_84(), GLtraverse_86();

/*      trace functions */
static Ptr GDtraverse_87(), GDtraverse_88(), GDtraverse_89(), GDtraverse_90();
static Ptr GDtraverse_91(), GDtraverse_92(), GDtraverse_93();

static Ptr GYtraverse[30];

static const char GNtraverse[] = "traverse";
static const char GTtraverse[] = "Wed June 16 93 18:18:24 ";

static struct GellEntry GWtraverse[] = {
        {GLtraverse_1,  GDtraverse_87,  1},     /* check-travinit */
        {GLtraverse_2,  GDtraverse_88,  1},     /* meter-travinit */
        {GLtraverse_7,  GDtraverse_89,  2},     /* test-travinit */
        {GLtraverse_12, GDtraverse_90,  1},     /* check-travrun */
        {GLtraverse_13, GDtraverse_91,  1},     /* meter-travrun */
        {GLtraverse_18, GDtraverse_92,  2},     /* test-travrun */
        {GLtraverse_28, GDtraverse_93,  1},     /* traverse-seed */
};

struct GellModule GZtraverse = {
        GELLMODULESTAMP,
        GNtraverse,
        GTtraverse,
        GYtraverse,
        7,
        GWtraverse};
