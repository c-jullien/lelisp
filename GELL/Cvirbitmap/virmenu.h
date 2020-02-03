/* GELL 15.26: include file for the module: "virmenu" */
/*             translation done:            "Tue Aug  24 93 10:48:46 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLvirmenu_1(), GLvirmenu_3(), GLvirmenu_4(), GLvirmenu_6();
static Ptr GLvirmenu_7(), GLvirmenu_10(), GLvirmenu_12(), GLvirmenu_14();
static Ptr GLvirmenu_15(), GLvirmenu_17(), GLvirmenu_18(), GLvirmenu_19();
static Ptr GLvirmenu_21(), GLvirmenu_22(), GLvirmenu_24(), GLvirmenu_26();
static Ptr GLvirmenu_27(), GLvirmenu_29(), GLvirmenu_30(), GLvirmenu_32();
static Ptr GLvirmenu_34(), GLvirmenu_35(), GLvirmenu_36(), GLvirmenu_37();
static Ptr GLvirmenu_38(), GLvirmenu_39(), GLvirmenu_40(), GLvirmenu_42();
static Ptr GLvirmenu_44(), GLvirmenu_46(), GLvirmenu_48(), GLvirmenu_49();
static Ptr GLvirmenu_50(), GLvirmenu_52(), GLvirmenu_54(), GLvirmenu_56();
static Ptr GLvirmenu_57(), GLvirmenu_59(), GLvirmenu_61(), GLvirmenu_62();
static Ptr GLvirmenu_64(), GLvirmenu_66(), GLvirmenu_68(), GLvirmenu_69();
static Ptr GLvirmenu_70(), GLvirmenu_72(), GLvirmenu_74(), GLvirmenu_76();
static Ptr GLvirmenu_77(), GLvirmenu_79(), GLvirmenu_80(), GLvirmenu_82();
static Ptr GLvirmenu_84(), GLvirmenu_86(), GLvirmenu_87(), GLvirmenu_88();
static Ptr GLvirmenu_90(), GLvirmenu_91(), GLvirmenu_93(), GLvirmenu_95();
static Ptr GLvirmenu_97(), GLvirmenu_98(), GLvirmenu_100(), GLvirmenu_101();
static Ptr GLvirmenu_103(), GLvirmenu_105(), GLvirmenu_107();

/*      trace functions */
static Ptr GDvirmenu_108(), GDvirmenu_109(), GDvirmenu_110(), GDvirmenu_111();
static Ptr GDvirmenu_112(), GDvirmenu_113(), GDvirmenu_114(), GDvirmenu_115();
static Ptr GDvirmenu_116();

static Ptr GYvirmenu[33];

static const char GNvirmenu[] = "virmenu";
static const char GTvirmenu[] = "Tue Aug  24 93 10:48:46 ";

static struct GellEntry GWvirmenu[] = {
        {GLvirmenu_7,   GDvirmenu_108,  5},     /* create-menu */
        {GLvirmenu_22,  GDvirmenu_109,  2},     /* kill-menu */
        {GLvirmenu_30,  GDvirmenu_110,  4},     /* activate-menu */
        {GLvirmenu_40,  GDvirmenu_111,  5},     /* menu-insert-item-list */
        {GLvirmenu_50,  GDvirmenu_112,  5},     /* menu-insert-item */
        {GLvirmenu_62,  GDvirmenu_113,  3},     /* menu-delete-item-list */
        {GLvirmenu_70,  GDvirmenu_114,  4},     /* menu-delete-item */
        {GLvirmenu_80,  GDvirmenu_115,  5},     /* menu-modify-item-list */
        {GLvirmenu_91,  GDvirmenu_116,  5},     /* menu-modify-item */
};

struct GellModule GZvirmenu = {
        GELLMODULESTAMP,
        GNvirmenu,
        GTvirmenu,
        GYvirmenu,
        9,
        GWvirmenu};
