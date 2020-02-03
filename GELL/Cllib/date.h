/* GELL 15.26: include file for the module: "date" */
/*             translation done:            "Thu Jun  24 93 15:51:41 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLdate_1(), GLdate_3(), GLdate_5(), GLdate_7();
static Ptr GLdate_9(), GLdate_10(), GLdate_12(), GLdate_13();
static Ptr GLdate_14(), GLdate_15(), GLdate_16(), GLdate_18();
static Ptr GLdate_19(), GLdate_20(), GLdate_21(), GLdate_23();
static Ptr GLdate_24(), GLdate_25(), GLdate_27(), GLdate_28();
static Ptr GLdate_30(), GLdate_31(), GLdate_33(), GLdate_34();
static Ptr GLdate_35(), GLdate_36(), GLdate_37(), GLdate_38();
static Ptr GLdate_39(), GLdate_40(), GLdate_41(), GLdate_42();
static Ptr GLdate_43(), GLdate_44(), GLdate_45(), GLdate_47();
static Ptr GLdate_48(), GLdate_50(), GLdate_51(), GLdate_52();
static Ptr GLdate_53(), GLdate_55(), GLdate_56(), GLdate_58();
static Ptr GLdate_60(), GLdate_62(), GLdate_64(), GLdate_66();
static Ptr GLdate_67(), GLdate_68(), GLdate_69(), GLdate_70();
static Ptr GLdate_72(), GLdate_73(), GLdate_74(), GLdate_75();
static Ptr GLdate_77(), GLdate_78(), GLdate_80(), GLdate_81();
static Ptr GLdate_82(), GLdate_84(), GLdate_85(), GLdate_87();
static Ptr GLdate_88(), GLdate_90(), GLdate_91();

/*      trace functions */
static Ptr GDdate_92(), GDdate_93(), GDdate_94(), GDdate_95();
static Ptr GDdate_96(), GDdate_97(), GDdate_98(), GDdate_99();
static Ptr GDdate_100(), GDdate_101(), GDdate_102(), GDdate_103();
static Ptr GDdate_104(), GDdate_105(), GDdate_106(), GDdate_107();
static Ptr GDdate_108(), GDdate_109();

static Ptr GYdate[56];

static const char GNdate[] = "date";
static const char GTdate[] = "Thu Jun  24 93 15:51:41 ";

static struct GellEntry GWdate[] = {
        {GLdate_1,      GDdate_92,      2},     /* week-day-number */
        {GLdate_10,     GDdate_93,      2},     /* year-day-number */
        {GLdate_20,     GDdate_94,      3},     /* month-length */
        {GLdate_25,     GDdate_95,      2},     /* leap-year-p */
        {GLdate_34,     GDdate_96,      2},     /* leap-number */
        {GLdate_35,     GDdate_97,      1},     /* #:date:make */
        {GLdate_37,     GDdate_98,      5},     /* #:date:year */
        {GLdate_38,     GDdate_99,      5},     /* #:date:month */
        {GLdate_39,     GDdate_100,     5},     /* #:date:day */
        {GLdate_40,     GDdate_101,     5},     /* #:date:hour */
        {GLdate_41,     GDdate_102,     5},     /* #:date:minute */
        {GLdate_42,     GDdate_103,     5},     /* #:date:second */
        {GLdate_43,     GDdate_104,     5},     /* #:date:msecond */
        {GLdate_44,     GDdate_105,     5},     /* #:date:week-day */
        {GLdate_45,     GDdate_106,     1},     /* create-date */
        {GLdate_51,     GDdate_107,     2},     /* #:date:prin */
        {GLdate_56,     GDdate_108,     2},     /* short-string-date */
        {GLdate_91,     GDdate_109,     2},     /* datep */
};

struct GellModule GZdate = {
        GELLMODULESTAMP,
        GNdate,
        GTdate,
        GYdate,
        18,
        GWdate};
