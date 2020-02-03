/* GELL 15.26: include file for the module: "deriv" */
/*             translation done:            "Wed June 16 93 18:18:26 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLderiv_1(), GLderiv_2(), GLderiv_3(), GLderiv_5();
static Ptr GLderiv_6(), GLderiv_7(), GLderiv_8(), GLderiv_9();
static Ptr GLderiv_11(), GLderiv_12(), GLderiv_14(), GLderiv_15();
static Ptr GLderiv_16(), GLderiv_17(), GLderiv_18(), GLderiv_20();
static Ptr GLderiv_21(), GLderiv_22(), GLderiv_23(), GLderiv_25();
static Ptr GLderiv_26(), GLderiv_27(), GLderiv_28(), GLderiv_30();
static Ptr GLderiv_31(), GLderiv_32(), GLderiv_34(), GLderiv_35();
static Ptr GLderiv_36(), GLderiv_38(), GLderiv_39(), GLderiv_40();
static Ptr GLderiv_42();

/*      trace functions */
static Ptr GDderiv_43(), GDderiv_44(), GDderiv_45(), GDderiv_46();

static Ptr GYderiv[22];

static const char GNderiv[] = "deriv";
static const char GTderiv[] = "Wed June 16 93 18:18:26 ";

static struct GellEntry GWderiv[] = {
        {GLderiv_1,     GDderiv_43,     1},     /* check-deriv */
        {GLderiv_2,     GDderiv_44,     1},     /* meter-deriv */
        {GLderiv_7,     GDderiv_45,     2},     /* test-deriv */
        {GLderiv_15,    GDderiv_46,     2},     /* deriv */
};

struct GellModule GZderiv = {
        GELLMODULESTAMP,
        GNderiv,
        GTderiv,
        GYderiv,
        4,
        GWderiv};
