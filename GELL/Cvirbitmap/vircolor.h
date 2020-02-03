/* GELL 15.26: include file for the module: "vircolor" */
/*             translation done:            "Tue Aug  24 93 10:48:48 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLvircolor_1(), GLvircolor_2(), GLvircolor_3(), GLvircolor_4();
static Ptr GLvircolor_6(), GLvircolor_7(), GLvircolor_8(), GLvircolor_9();
static Ptr GLvircolor_10(), GLvircolor_11(), GLvircolor_12(), GLvircolor_13();
static Ptr GLvircolor_14(), GLvircolor_15(), GLvircolor_16(), GLvircolor_17();
static Ptr GLvircolor_19(), GLvircolor_20(), GLvircolor_21(), GLvircolor_23();
static Ptr GLvircolor_24(), GLvircolor_26(), GLvircolor_27(), GLvircolor_28();
static Ptr GLvircolor_30(), GLvircolor_31(), GLvircolor_33(), GLvircolor_34();
static Ptr GLvircolor_35(), GLvircolor_37(), GLvircolor_38(), GLvircolor_40();
static Ptr GLvircolor_41(), GLvircolor_43(), GLvircolor_44(), GLvircolor_46();
static Ptr GLvircolor_47(), GLvircolor_48(), GLvircolor_50(), GLvircolor_51();
static Ptr GLvircolor_52(), GLvircolor_54(), GLvircolor_55(), GLvircolor_56();
static Ptr GLvircolor_58(), GLvircolor_59(), GLvircolor_61(), GLvircolor_63();
static Ptr GLvircolor_64(), GLvircolor_65(), GLvircolor_67(), GLvircolor_69();
static Ptr GLvircolor_70();

/*      trace functions */
static Ptr GDvircolor_71(), GDvircolor_72(), GDvircolor_73(), GDvircolor_74();
static Ptr GDvircolor_75(), GDvircolor_76(), GDvircolor_77(), GDvircolor_78();
static Ptr GDvircolor_79(), GDvircolor_80(), GDvircolor_81();

static Ptr GYvircolor[35];

static const char GNvircolor[] = "vircolor";
static const char GTvircolor[] = "Tue Aug  24 93 10:48:48 ";

static struct GellEntry GWvircolor[] = {
        {GLvircolor_1,  GDvircolor_71,  2},     /* #:color:prin */
        {GLvircolor_17, GDvircolor_72,  4},     /* make-color */
        {GLvircolor_24, GDvircolor_73,  4},     /* make-mutable-color */
        {GLvircolor_31, GDvircolor_74,  2},     /* make-named-color */
        {GLvircolor_38, GDvircolor_75,  2},     /* kill-color */
        {GLvircolor_44, GDvircolor_76,  5},     /* red-component */
        {GLvircolor_48, GDvircolor_77,  5},     /* blue-component */
        {GLvircolor_52, GDvircolor_78,  5},     /* green-component */
        {GLvircolor_56, GDvircolor_79,  5},     /* all-colors */
        {GLvircolor_59, GDvircolor_80,  2},     /* name-to-rgb */
        {GLvircolor_65, GDvircolor_81,  2},     /* get-rgb-values */
};

struct GellModule GZvircolor = {
        GELLMODULESTAMP,
        GNvircolor,
        GTvircolor,
        GYvircolor,
        11,
        GWvircolor};
