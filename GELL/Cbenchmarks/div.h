/* GELL 15.26: include file for the module: "div" */
/*             translation done:            "Wed June 16 93 18:18:28 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLdiv_1(), GLdiv_3(), GLdiv_4(), GLdiv_5();
static Ptr GLdiv_7(), GLdiv_8(), GLdiv_9(), GLdiv_10();
static Ptr GLdiv_11(), GLdiv_13(), GLdiv_14(), GLdiv_16();
static Ptr GLdiv_17(), GLdiv_18(), GLdiv_20(), GLdiv_21();
static Ptr GLdiv_22(), GLdiv_23(), GLdiv_24(), GLdiv_26();
static Ptr GLdiv_27(), GLdiv_28(), GLdiv_29(), GLdiv_30();
static Ptr GLdiv_32(), GLdiv_33(), GLdiv_34(), GLdiv_36();
static Ptr GLdiv_37(), GLdiv_38(), GLdiv_40();

/*      trace functions */
static Ptr GDdiv_41(), GDdiv_42(), GDdiv_43(), GDdiv_44();
static Ptr GDdiv_45(), GDdiv_46(), GDdiv_47(), GDdiv_48();
static Ptr GDdiv_49();

static Ptr GYdiv[23];

static const char GNdiv[] = "div";
static const char GTdiv[] = "Wed June 16 93 18:18:28 ";

static struct GellEntry GWdiv[] = {
        {GLdiv_1,       GDdiv_41,       1},     /* check-div2iter */
        {GLdiv_4,       GDdiv_42,       1},     /* meter-div2iter */
        {GLdiv_9,       GDdiv_43,       2},     /* test-div2iter */
        {GLdiv_14,      GDdiv_44,       1},     /* check-div2rec */
        {GLdiv_17,      GDdiv_45,       1},     /* meter-div2rec */
        {GLdiv_22,      GDdiv_46,       2},     /* test-div2rec */
        {GLdiv_27,      GDdiv_47,       2},     /* create-n */
        {GLdiv_28,      GDdiv_48,       2},     /* iterative-div2 */
        {GLdiv_30,      GDdiv_49,       2},     /* recursive-div2 */
};

struct GellModule GZdiv = {
        GELLMODULESTAMP,
        GNdiv,
        GTdiv,
        GYdiv,
        9,
        GWdiv};
