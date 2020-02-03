/* GELL 15.26: include file for the module: "product" */
/*             translation done:            "Wed June 16 93 18:03:04 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLproduct_1(), GLproduct_4(), GLproduct_5(), GLproduct_6();
static Ptr GLproduct_8(), GLproduct_9(), GLproduct_10(), GLproduct_11();
static Ptr GLproduct_12(), GLproduct_14(), GLproduct_15(), GLproduct_16();
static Ptr GLproduct_18(), GLproduct_19(), GLproduct_20(), GLproduct_22();
static Ptr GLproduct_23(), GLproduct_25(), GLproduct_26(), GLproduct_28();
static Ptr GLproduct_29(), GLproduct_31(), GLproduct_33(), GLproduct_34();
static Ptr GLproduct_36(), GLproduct_37(), GLproduct_39(), GLproduct_40();
static Ptr GLproduct_42(), GLproduct_43(), GLproduct_45(), GLproduct_46();
static Ptr GLproduct_48(), GLproduct_49(), GLproduct_50(), GLproduct_52();
static Ptr GLproduct_54(), GLproduct_55(), GLproduct_56(), GLproduct_57();
static Ptr GLproduct_58(), GLproduct_59(), GLproduct_60(), GLproduct_61();
static Ptr GLproduct_62(), GLproduct_64(), GLproduct_65(), GLproduct_66();
static Ptr GLproduct_67(), GLproduct_68(), GLproduct_69();

/*      trace functions */
static Ptr GDproduct_70(), GDproduct_71(), GDproduct_72(), GDproduct_73();
static Ptr GDproduct_74(), GDproduct_75(), GDproduct_76(), GDproduct_77();
static Ptr GDproduct_78(), GDproduct_79(), GDproduct_80(), GDproduct_81();
static Ptr GDproduct_82();

static Ptr GYproduct[47];

static const char GNproduct[] = "product";
static const char GTproduct[] = "Wed June 16 93 18:03:04 ";

static struct GellEntry GWproduct[] = {
        {GLproduct_1,   GDproduct_70,   5},     /* product-build-info */
        {GLproduct_20,  GDproduct_71,   2},     /* product-id */
        {GLproduct_23,  GDproduct_72,   3},     /* set-product-id */
        {GLproduct_26,  GDproduct_73,   2},     /* product-date */
        {GLproduct_29,  GDproduct_74,   3},     /* set-product-date */
        {GLproduct_34,  GDproduct_75,   2},     /* product-version */
        {GLproduct_37,  GDproduct_76,   3},     /* set-product-version */
        {GLproduct_40,  GDproduct_77,   2},     /* product-subversion */
        {GLproduct_43,  GDproduct_78,   3},     /* set-product-subversion */
        {GLproduct_46,  GDproduct_79,   2},     /* product-comment */
        {GLproduct_49,  GDproduct_80,   3},     /* set-product-comment */
        {GLproduct_55,  GDproduct_81,   1},     /* product-all-names */
        {GLproduct_62,  GDproduct_82,   2},     /* product-print */
};

struct GellModule GZproduct = {
        GELLMODULESTAMP,
        GNproduct,
        GTproduct,
        GYproduct,
        13,
        GWproduct};
