/* GELL 15.26: include file for the module: "dderiv" */
/*             translation done:            "Wed June 16 93 18:18:27 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLdderiv_1(), GLdderiv_2(), GLdderiv_3(), GLdderiv_5();
static Ptr GLdderiv_6(), GLdderiv_7(), GLdderiv_8(), GLdderiv_9();
static Ptr GLdderiv_11(), GLdderiv_12(), GLdderiv_14(), GLdderiv_15();
static Ptr GLdderiv_16(), GLdderiv_17(), GLdderiv_19(), GLdderiv_20();
static Ptr GLdderiv_21(), GLdderiv_22(), GLdderiv_24(), GLdderiv_25();
static Ptr GLdderiv_26(), GLdderiv_27(), GLdderiv_29(), GLdderiv_30();
static Ptr GLdderiv_31(), GLdderiv_33(), GLdderiv_34(), GLdderiv_35();
static Ptr GLdderiv_37(), GLdderiv_38(), GLdderiv_40(), GLdderiv_41();
static Ptr GLdderiv_42(), GLdderiv_44();

/*      trace functions */
static Ptr GDdderiv_45(), GDdderiv_46(), GDdderiv_47(), GDdderiv_48();
static Ptr GDdderiv_49(), GDdderiv_50(), GDdderiv_51(), GDdderiv_52();

static Ptr GYdderiv[28];

static const char GNdderiv[] = "dderiv";
static const char GTdderiv[] = "Wed June 16 93 18:18:27 ";

static struct GellEntry GWdderiv[] = {
        {GLdderiv_1,    GDdderiv_45,    1},     /* check-dderiv */
        {GLdderiv_2,    GDdderiv_46,    1},     /* meter-dderiv */
        {GLdderiv_7,    GDdderiv_47,    2},     /* test-dderiv */
        {GLdderiv_15,   GDdderiv_48,    2},     /* +dderiv */
        {GLdderiv_20,   GDdderiv_49,    2},     /* -dderiv */
        {GLdderiv_25,   GDdderiv_50,    2},     /* *dderiv */
        {GLdderiv_30,   GDdderiv_51,    2},     /* /dderiv */
        {GLdderiv_38,   GDdderiv_52,    2},     /* dderiv */
};

struct GellModule GZdderiv = {
        GELLMODULESTAMP,
        GNdderiv,
        GTdderiv,
        GYdderiv,
        8,
        GWdderiv};
