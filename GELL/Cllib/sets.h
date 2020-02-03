/* GELL 15.26: include file for the module: "sets" */
/*             translation done:            "Wed June 16 93 18:02:31 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLsets_1(), GLsets_3(), GLsets_4(), GLsets_5();
static Ptr GLsets_7(), GLsets_8(), GLsets_9(), GLsets_11();
static Ptr GLsets_13(), GLsets_14(), GLsets_15(), GLsets_16();
static Ptr GLsets_17(), GLsets_19(), GLsets_20(), GLsets_21();
static Ptr GLsets_23(), GLsets_24(), GLsets_26(), GLsets_28();
static Ptr GLsets_29(), GLsets_30(), GLsets_32(), GLsets_33();
static Ptr GLsets_35(), GLsets_36(), GLsets_37(), GLsets_39();
static Ptr GLsets_41(), GLsets_42(), GLsets_44(), GLsets_45();
static Ptr GLsets_47(), GLsets_48(), GLsets_50(), GLsets_52();
static Ptr GLsets_53(), GLsets_54(), GLsets_55(), GLsets_56();
static Ptr GLsets_58(), GLsets_59(), GLsets_61(), GLsets_63();
static Ptr GLsets_64(), GLsets_65(), GLsets_66(), GLsets_67();
static Ptr GLsets_69(), GLsets_70(), GLsets_72(), GLsets_74();
static Ptr GLsets_76(), GLsets_77(), GLsets_79(), GLsets_81();
static Ptr GLsets_82(), GLsets_83(), GLsets_84(), GLsets_85();
static Ptr GLsets_87(), GLsets_88(), GLsets_90(), GLsets_92();
static Ptr GLsets_93(), GLsets_94(), GLsets_95(), GLsets_96();
static Ptr GLsets_98(), GLsets_99(), GLsets_101(), GLsets_103();
static Ptr GLsets_105(), GLsets_106(), GLsets_108(), GLsets_110();
static Ptr GLsets_111(), GLsets_112(), GLsets_114(), GLsets_116();
static Ptr GLsets_118(), GLsets_120(), GLsets_121(), GLsets_123();
static Ptr GLsets_125(), GLsets_126(), GLsets_127(), GLsets_129();
static Ptr GLsets_130(), GLsets_132(), GLsets_133(), GLsets_135();
static Ptr GLsets_136(), GLsets_138(), GLsets_140(), GLsets_141();
static Ptr GLsets_143(), GLsets_145(), GLsets_146(), GLsets_148();
static Ptr GLsets_149(), GLsets_151(), GLsets_153(), GLsets_154();
static Ptr GLsets_155(), GLsets_157(), GLsets_158(), GLsets_160();
static Ptr GLsets_162(), GLsets_163(), GLsets_164(), GLsets_165();
static Ptr GLsets_167(), GLsets_168(), GLsets_170(), GLsets_171();
static Ptr GLsets_173(), GLsets_174(), GLsets_175(), GLsets_176();
static Ptr GLsets_177(), GLsets_178(), GLsets_179(), GLsets_180();
static Ptr GLsets_181(), GLsets_182(), GLsets_183(), GLsets_185();
static Ptr GLsets_186(), GLsets_188(), GLsets_189(), GLsets_190();
static Ptr GLsets_191(), GLsets_192(), GLsets_194(), GLsets_195();
static Ptr GLsets_197(), GLsets_198(), GLsets_200(), GLsets_202();

/*      trace functions */
static Ptr GDsets_203(), GDsets_204(), GDsets_205(), GDsets_206();
static Ptr GDsets_207(), GDsets_208(), GDsets_209(), GDsets_210();
static Ptr GDsets_211(), GDsets_212(), GDsets_213(), GDsets_214();
static Ptr GDsets_215(), GDsets_216();

static Ptr GYsets[34];

static const char GNsets[] = "sets";
static const char GTsets[] = "Wed June 16 93 18:02:31 ";

static struct GellEntry GWsets[] = {
        {GLsets_1,      GDsets_203,     5},     /* adjoin */
        {GLsets_9,      GDsets_204,     5},     /* union */
        {GLsets_24,     GDsets_205,     5},     /* nunion */
        {GLsets_48,     GDsets_206,     5},     /* intersection */
        {GLsets_59,     GDsets_207,     5},     /* nintersection */
        {GLsets_77,     GDsets_208,     5},     /* set-difference */
        {GLsets_88,     GDsets_209,     5},     /* nset-difference */
        {GLsets_106,    GDsets_210,     5},     /* set-exclusive-or */
        {GLsets_121,    GDsets_211,     5},     /* nset-exclusive-or */
        {GLsets_149,    GDsets_212,     5},     /* subsetp */
        {GLsets_158,    GDsets_213,     5},     /* set-equal */
        {GLsets_171,    GDsets_214,     5},     /* transitive-closure */
        {GLsets_195,    GDsets_215,     2},     /* power-set */
        {GLsets_198,    GDsets_216,     3},     /* cartesian-product */
};

struct GellModule GZsets = {
        GELLMODULESTAMP,
        GNsets,
        GTsets,
        GYsets,
        14,
        GWsets};
