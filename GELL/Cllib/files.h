/* GELL 15.26: include file for the module: "files" */
/*             translation done:            "Wed June 16 93 18:00:33 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLfiles_1(), GLfiles_2(), GLfiles_4(), GLfiles_5();
static Ptr GLfiles_7(), GLfiles_8(), GLfiles_9(), GLfiles_11();
static Ptr GLfiles_13(), GLfiles_14(), GLfiles_16(), GLfiles_17();
static Ptr GLfiles_19(), GLfiles_21(), GLfiles_22(), GLfiles_24();
static Ptr GLfiles_26(), GLfiles_27(), GLfiles_29(), GLfiles_31();
static Ptr GLfiles_32(), GLfiles_33(), GLfiles_34(), GLfiles_36();
static Ptr GLfiles_37(), GLfiles_38(), GLfiles_39(), GLfiles_40();
static Ptr GLfiles_41(), GLfiles_43(), GLfiles_44(), GLfiles_46();
static Ptr GLfiles_48(), GLfiles_50(), GLfiles_51(), GLfiles_52();
static Ptr GLfiles_53(), GLfiles_55(), GLfiles_56(), GLfiles_58();
static Ptr GLfiles_59(), GLfiles_61(), GLfiles_63(), GLfiles_64();
static Ptr GLfiles_65(), GLfiles_67(), GLfiles_68(), GLfiles_69();
static Ptr GLfiles_71(), GLfiles_72(), GLfiles_73(), GLfiles_74();
static Ptr GLfiles_76(), GLfiles_77(), GLfiles_78(), GLfiles_79();
static Ptr GLfiles_80(), GLfiles_81(), GLfiles_82(), GLfiles_84();
static Ptr GLfiles_85(), GLfiles_87(), GLfiles_89(), GLfiles_90();
static Ptr GLfiles_91(), GLfiles_92(), GLfiles_93(), GLfiles_94();
static Ptr GLfiles_95(), GLfiles_97(), GLfiles_99(), GLfiles_100();
static Ptr GLfiles_101(), GLfiles_102(), GLfiles_103(), GLfiles_104();
static Ptr GLfiles_105(), GLfiles_107(), GLfiles_109(), GLfiles_110();
static Ptr GLfiles_112(), GLfiles_114(), GLfiles_116(), GLfiles_117();
static Ptr GLfiles_118(), GLfiles_119(), GLfiles_120(), GLfiles_122();
static Ptr GLfiles_124(), GLfiles_126();

/*      trace functions */
static Ptr GDfiles_127(), GDfiles_128(), GDfiles_129(), GDfiles_130();
static Ptr GDfiles_131(), GDfiles_132(), GDfiles_133(), GDfiles_134();
static Ptr GDfiles_135(), GDfiles_136(), GDfiles_137(), GDfiles_138();
static Ptr GDfiles_139(), GDfiles_140(), GDfiles_141(), GDfiles_142();

static Ptr GYfiles[79];

static const char GNfiles[] = "files";
static const char GTfiles[] = "Wed June 16 93 18:00:33 ";

static struct GellEntry GWfiles[] = {
        {GLfiles_1,     GDfiles_127,    2},     /* featurep */
        {GLfiles_2,     GDfiles_128,    2},     /* add-feature */
        {GLfiles_5,     GDfiles_129,    2},     /* rem-feature */
        {GLfiles_8,     GDfiles_130,    1},     /* list-features */
        {GLfiles_9,     GDfiles_131,    2},     /* probepathf */
        {GLfiles_17,    GDfiles_132,    2},     /* probepathm */
        {GLfiles_22,    GDfiles_133,    2},     /* probepatho */
        {GLfiles_32,    GDfiles_134,    3},     /* search-in-path */
        {GLfiles_64,    GDfiles_135,    6},     /* load */
        {GLfiles_65,    GDfiles_136,    3},     /* loadfile */
        {GLfiles_81,    GDfiles_137,    6},     /* libload */
        {GLfiles_82,    GDfiles_138,    3},     /* libloadfile */
        {GLfiles_85,    GDfiles_139,    2},     /* loadobjectfile */
        {GLfiles_90,    GDfiles_140,    6},     /* autoload */
        {GLfiles_100,   GDfiles_141,    6},     /* libautoload */
        {GLfiles_110,   GDfiles_142,    4},     /* #:system:std-autoload */
};

struct GellModule GZfiles = {
        GELLMODULESTAMP,
        GNfiles,
        GTfiles,
        GYfiles,
        16,
        GWfiles};
