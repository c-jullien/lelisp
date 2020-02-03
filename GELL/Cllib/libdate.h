/* GELL 15.26: include file for the module: "libdate" */
/*             translation done:            "Wed June 16 93 18:02:26 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern long getfdate();

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLlibdate_1(), GLlibdate_3(), GLlibdate_5(), GLlibdate_7();
static Ptr GLlibdate_9(), GLlibdate_10(), GLlibdate_11(), GLlibdate_13();
static Ptr GLlibdate_14(), GLlibdate_15(), GLlibdate_17(), GLlibdate_18();
static Ptr GLlibdate_19(), GLlibdate_21(), GLlibdate_22(), GLlibdate_23();
static Ptr GLlibdate_25(), GLlibdate_26(), GLlibdate_27(), GLlibdate_28();
static Ptr GLlibdate_30(), GLlibdate_31(), GLlibdate_32(), GLlibdate_34();
static Ptr GLlibdate_35(), GLlibdate_36(), GLlibdate_38(), GLlibdate_39();
static Ptr GLlibdate_40(), GLlibdate_42(), GLlibdate_43(), GLlibdate_45();
static Ptr GLlibdate_47(), GLlibdate_48(), GLlibdate_50(), GLlibdate_51();
static Ptr GLlibdate_53(), GLlibdate_55(), GLlibdate_56(), GLlibdate_57();
static Ptr GLlibdate_58(), GLlibdate_59(), GLlibdate_60(), GLlibdate_61();
static Ptr GLlibdate_62(), GLlibdate_63(), GLlibdate_64(), GLlibdate_65();
static Ptr GLlibdate_66(), GLlibdate_68(), GLlibdate_69(), GLlibdate_71();
static Ptr GLlibdate_73(), GLlibdate_74(), GLlibdate_75(), GLlibdate_76();
static Ptr GLlibdate_77(), GLlibdate_78(), GLlibdate_80(), GLlibdate_81();
static Ptr GLlibdate_83(), GLlibdate_84(), GLlibdate_85(), GLlibdate_87();
static Ptr GLlibdate_89(), GLlibdate_90(), GLlibdate_91(), GLlibdate_93();
static Ptr GLlibdate_95(), GLlibdate_96(), GLlibdate_98(), GLlibdate_100();
static Ptr GLlibdate_102(), GLlibdate_103(), GLlibdate_105(), GLlibdate_107();
static Ptr GLlibdate_108(), GLlibdate_110(), GLlibdate_111(), GLlibdate_113();
static Ptr GLlibdate_114(), GLlibdate_115(), GLlibdate_116(), GLlibdate_118();
static Ptr GLlibdate_119(), GLlibdate_120(), GLlibdate_121(), GLlibdate_123();
static Ptr GLlibdate_124(), GLlibdate_125(), GLlibdate_126(), GLlibdate_128();
static Ptr GLlibdate_129(), GLlibdate_130(), GLlibdate_131(), GLlibdate_132();
static Ptr GLlibdate_134(), GLlibdate_135(), GLlibdate_137(), GLlibdate_138();
static Ptr GLlibdate_139(), GLlibdate_140(), GLlibdate_141(), GLlibdate_143();
static Ptr GLlibdate_144(), GLlibdate_146(), GLlibdate_148(), GLlibdate_149();
static Ptr GLlibdate_150(), GLlibdate_152(), GLlibdate_154(), GLlibdate_156();
static Ptr GLlibdate_157(), GLlibdate_158(), GLlibdate_159(), GLlibdate_160();
static Ptr GLlibdate_162(), GLlibdate_163(), GLlibdate_164(), GLlibdate_165();
static Ptr GLlibdate_166(), GLlibdate_168(), GLlibdate_169(), GLlibdate_170();
static Ptr GLlibdate_172(), GLlibdate_173(), GLlibdate_175(), GLlibdate_176();
static Ptr GLlibdate_177(), GLlibdate_179(), GLlibdate_181(), GLlibdate_182();
static Ptr GLlibdate_183(), GLlibdate_184(), GLlibdate_186(), GLlibdate_188();
static Ptr GLlibdate_190(), GLlibdate_192(), GLlibdate_194();

/*      trace functions */
static Ptr GDlibdate_195(), GDlibdate_196(), GDlibdate_197(), GDlibdate_198();
static Ptr GDlibdate_199(), GDlibdate_200(), GDlibdate_201(), GDlibdate_202();
static Ptr GDlibdate_203(), GDlibdate_204();

static Ptr GYlibdate[63];

static const char GNlibdate[] = "libdate";
static const char GTlibdate[] = "Wed June 16 93 18:02:26 ";

static struct GellEntry GWlibdate[] = {
        {GLlibdate_1,   GDlibdate_195,  2},     /* long-string-date */
        {GLlibdate_43,  GDlibdate_196,  3},     /* eqdate */
        {GLlibdate_48,  GDlibdate_197,  3},     /* /=date */
        {GLlibdate_62,  GDlibdate_198,  3},     /* <date */
        {GLlibdate_63,  GDlibdate_199,  3},     /* <=date */
        {GLlibdate_64,  GDlibdate_200,  3},     /* >date */
        {GLlibdate_65,  GDlibdate_201,  3},     /* >=date */
        {GLlibdate_66,  GDlibdate_202,  2},     /* date-to-number */
        {GLlibdate_78,  GDlibdate_203,  2},     /* number-to-date */
        {GLlibdate_184, GDlibdate_204,  2},     /* date-of-file */
};

struct GellModule GZlibdate = {
        GELLMODULESTAMP,
        GNlibdate,
        GTlibdate,
        GYlibdate,
        10,
        GWlibdate};
