/* GELL 15.26: include file for the module: "browse" */
/*             translation done:            "Wed June 16 93 18:18:20 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLbrowse_1(), GLbrowse_2(), GLbrowse_3(), GLbrowse_5();
static Ptr GLbrowse_6(), GLbrowse_7(), GLbrowse_8(), GLbrowse_9();
static Ptr GLbrowse_11(), GLbrowse_12(), GLbrowse_14(), GLbrowse_16();
static Ptr GLbrowse_17(), GLbrowse_18(), GLbrowse_19(), GLbrowse_20();
static Ptr GLbrowse_22(), GLbrowse_24(), GLbrowse_26(), GLbrowse_27();
static Ptr GLbrowse_28(), GLbrowse_30(), GLbrowse_32(), GLbrowse_34();
static Ptr GLbrowse_35(), GLbrowse_36(), GLbrowse_37(), GLbrowse_38();
static Ptr GLbrowse_40(), GLbrowse_41(), GLbrowse_42(), GLbrowse_44();
static Ptr GLbrowse_46(), GLbrowse_47(), GLbrowse_49(), GLbrowse_50();
static Ptr GLbrowse_52(), GLbrowse_54(), GLbrowse_55(), GLbrowse_57();
static Ptr GLbrowse_58(), GLbrowse_59(), GLbrowse_60(), GLbrowse_61();
static Ptr GLbrowse_63(), GLbrowse_64(), GLbrowse_65(), GLbrowse_67();
static Ptr GLbrowse_68(), GLbrowse_70(), GLbrowse_71(), GLbrowse_72();
static Ptr GLbrowse_73(), GLbrowse_74(), GLbrowse_75(), GLbrowse_77();
static Ptr GLbrowse_78(), GLbrowse_79(), GLbrowse_81();

/*      trace functions */
static Ptr GDbrowse_82(), GDbrowse_83(), GDbrowse_84();

static Ptr GYbrowse[26];

static const char GNbrowse[] = "browse";
static const char GTbrowse[] = "Wed June 16 93 18:18:20 ";

static struct GellEntry GWbrowse[] = {
        {GLbrowse_1,    GDbrowse_82,    1},     /* check-browse */
        {GLbrowse_2,    GDbrowse_83,    1},     /* meter-browse */
        {GLbrowse_7,    GDbrowse_84,    2},     /* test-browse */
};

struct GellModule GZbrowse = {
        GELLMODULESTAMP,
        GNbrowse,
        GTbrowse,
        GYbrowse,
        3,
        GWbrowse};
