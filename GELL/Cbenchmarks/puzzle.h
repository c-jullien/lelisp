/* GELL 15.26: include file for the module: "puzzle" */
/*             translation done:            "Wed June 16 93 18:18:31 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLpuzzle_1(), GLpuzzle_2(), GLpuzzle_3(), GLpuzzle_5();
static Ptr GLpuzzle_6(), GLpuzzle_7(), GLpuzzle_8(), GLpuzzle_9();
static Ptr GLpuzzle_11(), GLpuzzle_12(), GLpuzzle_13(), GLpuzzle_14();
static Ptr GLpuzzle_15(), GLpuzzle_16(), GLpuzzle_17(), GLpuzzle_18();
static Ptr GLpuzzle_20(), GLpuzzle_21(), GLpuzzle_23(), GLpuzzle_25();
static Ptr GLpuzzle_26(), GLpuzzle_28(), GLpuzzle_29(), GLpuzzle_30();
static Ptr GLpuzzle_31(), GLpuzzle_32(), GLpuzzle_33(), GLpuzzle_34();
static Ptr GLpuzzle_35(), GLpuzzle_36(), GLpuzzle_37(), GLpuzzle_38();
static Ptr GLpuzzle_39(), GLpuzzle_40(), GLpuzzle_41(), GLpuzzle_42();
static Ptr GLpuzzle_44(), GLpuzzle_45(), GLpuzzle_47(), GLpuzzle_48();
static Ptr GLpuzzle_50(), GLpuzzle_51();

/*      trace functions */
static Ptr GDpuzzle_52(), GDpuzzle_53(), GDpuzzle_54();

static Ptr GYpuzzle[28];

static const char GNpuzzle[] = "puzzle";
static const char GTpuzzle[] = "Wed June 16 93 18:18:31 ";

static struct GellEntry GWpuzzle[] = {
        {GLpuzzle_1,    GDpuzzle_52,    1},     /* check-puzzle */
        {GLpuzzle_2,    GDpuzzle_53,    1},     /* meter-puzzle */
        {GLpuzzle_7,    GDpuzzle_54,    2},     /* test-puzzle */
};

struct GellModule GZpuzzle = {
        GELLMODULESTAMP,
        GNpuzzle,
        GTpuzzle,
        GYpuzzle,
        3,
        GWpuzzle};
