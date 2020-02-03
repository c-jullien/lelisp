/* GELL 15.26: include file for the module: "libcir" */
/*             translation done:            "Wed June 16 93 18:01:44 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLlibcir_1(), GLlibcir_3(), GLlibcir_4(), GLlibcir_6();
static Ptr GLlibcir_7(), GLlibcir_9(), GLlibcir_10(), GLlibcir_11();
static Ptr GLlibcir_13(), GLlibcir_14(), GLlibcir_15(), GLlibcir_16();
static Ptr GLlibcir_18(), GLlibcir_19(), GLlibcir_21(), GLlibcir_22();
static Ptr GLlibcir_24(), GLlibcir_25(), GLlibcir_27(), GLlibcir_28();
static Ptr GLlibcir_29(), GLlibcir_31(), GLlibcir_32(), GLlibcir_34();
static Ptr GLlibcir_35(), GLlibcir_36(), GLlibcir_37(), GLlibcir_39();
static Ptr GLlibcir_41(), GLlibcir_42(), GLlibcir_44(), GLlibcir_46();
static Ptr GLlibcir_48(), GLlibcir_50(), GLlibcir_51(), GLlibcir_53();
static Ptr GLlibcir_55(), GLlibcir_56(), GLlibcir_57(), GLlibcir_58();
static Ptr GLlibcir_60(), GLlibcir_61(), GLlibcir_62(), GLlibcir_64();
static Ptr GLlibcir_66(), GLlibcir_68(), GLlibcir_69(), GLlibcir_70();
static Ptr GLlibcir_72(), GLlibcir_73(), GLlibcir_74(), GLlibcir_76();
static Ptr GLlibcir_78(), GLlibcir_80(), GLlibcir_81(), GLlibcir_82();
static Ptr GLlibcir_84(), GLlibcir_86(), GLlibcir_87(), GLlibcir_89();
static Ptr GLlibcir_90(), GLlibcir_92(), GLlibcir_93(), GLlibcir_95();
static Ptr GLlibcir_97(), GLlibcir_98(), GLlibcir_100(), GLlibcir_101();
static Ptr GLlibcir_102(), GLlibcir_103(), GLlibcir_104(), GLlibcir_105();
static Ptr GLlibcir_106(), GLlibcir_108(), GLlibcir_109(), GLlibcir_110();
static Ptr GLlibcir_111(), GLlibcir_112(), GLlibcir_113(), GLlibcir_114();
static Ptr GLlibcir_115(), GLlibcir_117(), GLlibcir_118(), GLlibcir_119();
static Ptr GLlibcir_120(), GLlibcir_121(), GLlibcir_122(), GLlibcir_123();
static Ptr GLlibcir_125(), GLlibcir_126(), GLlibcir_128(), GLlibcir_129();
static Ptr GLlibcir_131(), GLlibcir_132(), GLlibcir_134(), GLlibcir_136();
static Ptr GLlibcir_137(), GLlibcir_138(), GLlibcir_140(), GLlibcir_141();
static Ptr GLlibcir_143(), GLlibcir_144(), GLlibcir_146(), GLlibcir_147();
static Ptr GLlibcir_148(), GLlibcir_149(), GLlibcir_151(), GLlibcir_152();
static Ptr GLlibcir_154(), GLlibcir_155(), GLlibcir_157(), GLlibcir_158();
static Ptr GLlibcir_159(), GLlibcir_161(), GLlibcir_163(), GLlibcir_164();
static Ptr GLlibcir_166(), GLlibcir_168(), GLlibcir_170(), GLlibcir_171();
static Ptr GLlibcir_173(), GLlibcir_175(), GLlibcir_176(), GLlibcir_178();
static Ptr GLlibcir_180(), GLlibcir_181(), GLlibcir_182(), GLlibcir_183();
static Ptr GLlibcir_185(), GLlibcir_186();

/*      trace functions */
static Ptr GDlibcir_187(), GDlibcir_188(), GDlibcir_189(), GDlibcir_190();
static Ptr GDlibcir_191(), GDlibcir_192(), GDlibcir_193(), GDlibcir_194();

static Ptr GYlibcir[62];

static const char GNlibcir[] = "libcir";
static const char GTlibcir[] = "Wed June 16 93 18:01:44 ";

static struct GellEntry GWlibcir[] = {
        {GLlibcir_1,    GDlibcir_187,   2},     /* cirprint */
        {GLlibcir_4,    GDlibcir_188,   2},     /* cirprinflush */
        {GLlibcir_7,    GDlibcir_189,   2},     /* cirprin */
        {GLlibcir_105,  GDlibcir_190,   1},     /* #:libcir:double */
        {GLlibcir_111,  GDlibcir_191,   2},     /* #:libcir:replace */
        {GLlibcir_123,  GDlibcir_192,   3},     /* cirnequal */
        {GLlibcir_126,  GDlibcir_193,   3},     /* cirequal */
        {GLlibcir_155,  GDlibcir_194,   2},     /* circopy */
};

struct GellModule GZlibcir = {
        GELLMODULESTAMP,
        GNlibcir,
        GTlibcir,
        GYlibcir,
        8,
        GWlibcir};
