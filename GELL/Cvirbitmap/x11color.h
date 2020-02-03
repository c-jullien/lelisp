/* GELL 15.26: include file for the module: "x11color" */
/*             translation done:            "Tue Aug  24 93 10:48:19 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLx11color_1(), GLx11color_3(), GLx11color_4(), GLx11color_5();
static Ptr GLx11color_6(), GLx11color_7(), GLx11color_8(), GLx11color_9();
static Ptr GLx11color_10(), GLx11color_12(), GLx11color_14(), GLx11color_15();
static Ptr GLx11color_17(), GLx11color_19(), GLx11color_21(), GLx11color_23();
static Ptr GLx11color_25(), GLx11color_27(), GLx11color_29(), GLx11color_31();
static Ptr GLx11color_33(), GLx11color_34(), GLx11color_36(), GLx11color_37();
static Ptr GLx11color_38(), GLx11color_40(), GLx11color_41(), GLx11color_42();
static Ptr GLx11color_43(), GLx11color_45(), GLx11color_46(), GLx11color_47();
static Ptr GLx11color_49(), GLx11color_50(), GLx11color_52(), GLx11color_54();
static Ptr GLx11color_56(), GLx11color_58(), GLx11color_60(), GLx11color_61();
static Ptr GLx11color_62(), GLx11color_63(), GLx11color_65(), GLx11color_67();
static Ptr GLx11color_69(), GLx11color_71(), GLx11color_72(), GLx11color_73();
static Ptr GLx11color_74(), GLx11color_75(), GLx11color_76(), GLx11color_77();
static Ptr GLx11color_78(), GLx11color_79(), GLx11color_80(), GLx11color_81();
static Ptr GLx11color_82(), GLx11color_84(), GLx11color_85(), GLx11color_86();
static Ptr GLx11color_87(), GLx11color_88(), GLx11color_89(), GLx11color_90();
static Ptr GLx11color_91(), GLx11color_93();

/*      trace functions */
static Ptr GDx11color_94(), GDx11color_95(), GDx11color_96(), GDx11color_97();
static Ptr GDx11color_98(), GDx11color_99(), GDx11color_100(), GDx11color_101();
static Ptr GDx11color_102(), GDx11color_103(), GDx11color_104();

static Ptr GYx11color[70];

static const char GNx11color[] = "x11color";
static const char GTx11color[] = "Tue Aug  24 93 10:48:19 ";

static struct GellEntry GWx11color[] = {
        {GLx11color_1,  GDx11color_94,  3},     /* #:display:x11:get-default */
        {GLx11color_15, GDx11color_95,  2},     /* #:display:x11:init-color */
        {GLx11color_73, GDx11color_96,  5},     /* #:display:x11:make-color */
        {GLx11color_78, GDx11color_97,  5},     /* #:display:x11:make-mutable-color */
        {GLx11color_82, GDx11color_98,  4},     /* #:display:x11:make-named-color */
        {GLx11color_85, GDx11color_99,  3},     /* #:display:x11:kill-color */
        {GLx11color_86, GDx11color_100, 4},     /* #:display:x11:red-component */
        {GLx11color_87, GDx11color_101, 4},     /* #:display:x11:green-component */
        {GLx11color_88, GDx11color_102, 4},     /* #:display:x11:blue-component */
        {GLx11color_89, GDx11color_103, 4},     /* #:display:x11:name-to-rgb */
        {GLx11color_91, GDx11color_104, 4},     /* #:display:x11:get-rgb-values */
};

struct GellModule GZx11color = {
        GELLMODULESTAMP,
        GNx11color,
        GTx11color,
        GYx11color,
        11,
        GWx11color};
