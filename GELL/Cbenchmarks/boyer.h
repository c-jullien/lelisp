/* GELL 15.26: include file for the module: "boyer" */
/*             translation done:            "Wed June 16 93 18:18:19 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLboyer_1(), GLboyer_2(), GLboyer_3(), GLboyer_5();
static Ptr GLboyer_6(), GLboyer_7(), GLboyer_8(), GLboyer_9();
static Ptr GLboyer_11(), GLboyer_12(), GLboyer_13(), GLboyer_15();
static Ptr GLboyer_16(), GLboyer_18(), GLboyer_19(), GLboyer_21();
static Ptr GLboyer_22(), GLboyer_24(), GLboyer_26(), GLboyer_27();
static Ptr GLboyer_29(), GLboyer_30(), GLboyer_31(), GLboyer_32();
static Ptr GLboyer_34(), GLboyer_35(), GLboyer_37(), GLboyer_38();
static Ptr GLboyer_40(), GLboyer_41(), GLboyer_43(), GLboyer_45();
static Ptr GLboyer_47(), GLboyer_48(), GLboyer_50(), GLboyer_51();
static Ptr GLboyer_52(), GLboyer_54(), GLboyer_55(), GLboyer_57();
static Ptr GLboyer_58(), GLboyer_60(), GLboyer_62(), GLboyer_64();
static Ptr GLboyer_65(), GLboyer_67(), GLboyer_69();

/*      trace functions */
static Ptr GDboyer_70(), GDboyer_71(), GDboyer_72(), GDboyer_73();

static Ptr GYboyer[27];

static const char GNboyer[] = "boyer";
static const char GTboyer[] = "Wed June 16 93 18:18:19 ";

static struct GellEntry GWboyer[] = {
        {GLboyer_1,     GDboyer_70,     1},     /* check-boyer */
        {GLboyer_2,     GDboyer_71,     1},     /* meter-boyer */
        {GLboyer_7,     GDboyer_72,     2},     /* test-boyer */
        {GLboyer_51,    GDboyer_73,     1},     /* boyer-setup */
};

struct GellModule GZboyer = {
        GELLMODULESTAMP,
        GNboyer,
        GTboyer,
        GYboyer,
        4,
        GWboyer};
