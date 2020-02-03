/* GELL 15.26: include file for the module: "messages" */
/*             translation done:            "Wed June 16 93 18:00:27 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLmessages_1(), GLmessages_2(), GLmessages_3(), GLmessages_4();
static Ptr GLmessages_5(), GLmessages_7(), GLmessages_9(), GLmessages_10();
static Ptr GLmessages_12(), GLmessages_13(), GLmessages_14(), GLmessages_15();
static Ptr GLmessages_16(), GLmessages_17(), GLmessages_19(), GLmessages_20();
static Ptr GLmessages_21(), GLmessages_22(), GLmessages_23(), GLmessages_24();
static Ptr GLmessages_25(), GLmessages_27(), GLmessages_28(), GLmessages_30();
static Ptr GLmessages_31(), GLmessages_32(), GLmessages_33(), GLmessages_34();
static Ptr GLmessages_36(), GLmessages_38(), GLmessages_39(), GLmessages_41();
static Ptr GLmessages_43(), GLmessages_44(), GLmessages_45(), GLmessages_46();
static Ptr GLmessages_47(), GLmessages_48(), GLmessages_49(), GLmessages_51();
static Ptr GLmessages_52(), GLmessages_53(), GLmessages_54(), GLmessages_55();
static Ptr GLmessages_57(), GLmessages_58(), GLmessages_59(), GLmessages_60();
static Ptr GLmessages_61(), GLmessages_62(), GLmessages_63(), GLmessages_64();
static Ptr GLmessages_65(), GLmessages_66(), GLmessages_67(), GLmessages_68();
static Ptr GLmessages_69(), GLmessages_71(), GLmessages_72(), GLmessages_73();
static Ptr GLmessages_74();

/*      trace functions */
static Ptr GDmessages_75(), GDmessages_76(), GDmessages_77(), GDmessages_78();
static Ptr GDmessages_79(), GDmessages_80(), GDmessages_81(), GDmessages_82();
static Ptr GDmessages_83(), GDmessages_84(), GDmessages_85(), GDmessages_86();
static Ptr GDmessages_87(), GDmessages_88(), GDmessages_89();

static Ptr GYmessages[54];

static const char GNmessages[] = "messages";
static const char GTmessages[] = "Wed June 16 93 18:00:27 ";

static struct GellEntry GWmessages[] = {
        {GLmessages_1,  GDmessages_75,  2},     /* record-language */
        {GLmessages_2,  GDmessages_76,  2},     /* remove-language */
        {GLmessages_5,  GDmessages_77,  2},     /* #:remove-language:g105 */
        {GLmessages_13, GDmessages_78,  1},     /* message-languages */
        {GLmessages_14, GDmessages_79,  2},     /* get-all-messages */
        {GLmessages_17, GDmessages_80,  2},     /* #:get-all-messages:g106 */
        {GLmessages_20, GDmessages_81,  5},     /* current-language */
        {GLmessages_32, GDmessages_82,  5},     /* default-language */
        {GLmessages_33, GDmessages_83,  2},     /* get-message */
        {GLmessages_39, GDmessages_84,  2},     /* get-message-p */
        {GLmessages_44, GDmessages_85,  4},     /* put-message */
        {GLmessages_45, GDmessages_86,  5},     /* #:messages:put-message */
        {GLmessages_52, GDmessages_87,  3},     /* remove-message */
        {GLmessages_58, GDmessages_88,  12},    /* defmessage */
        {GLmessages_69, GDmessages_89,  1},     /* #:sharp:m */
};

struct GellModule GZmessages = {
        GELLMODULESTAMP,
        GNmessages,
        GTmessages,
        GYmessages,
        15,
        GWmessages};
