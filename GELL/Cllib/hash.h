/* GELL 15.26: include file for the module: "hash" */
/*             translation done:            "Thu Jul   8 93 21:26:13 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLhash_1(), GLhash_2(), GLhash_3(), GLhash_4();
static Ptr GLhash_6(), GLhash_7(), GLhash_8(), GLhash_9();
static Ptr GLhash_10(), GLhash_11(), GLhash_12(), GLhash_13();
static Ptr GLhash_14(), GLhash_15(), GLhash_16(), GLhash_17();
static Ptr GLhash_18(), GLhash_19(), GLhash_20(), GLhash_21();
static Ptr GLhash_22(), GLhash_23(), GLhash_24(), GLhash_25();
static Ptr GLhash_27(), GLhash_28(), GLhash_29(), GLhash_30();
static Ptr GLhash_32(), GLhash_33(), GLhash_34(), GLhash_36();
static Ptr GLhash_37(), GLhash_39(), GLhash_40(), GLhash_42();
static Ptr GLhash_44(), GLhash_45(), GLhash_47(), GLhash_48();
static Ptr GLhash_49(), GLhash_50(), GLhash_52(), GLhash_53();
static Ptr GLhash_54(), GLhash_55(), GLhash_56(), GLhash_57();
static Ptr GLhash_59(), GLhash_61(), GLhash_63(), GLhash_64();
static Ptr GLhash_65(), GLhash_66(), GLhash_68(), GLhash_69();
static Ptr GLhash_71(), GLhash_73(), GLhash_75(), GLhash_76();
static Ptr GLhash_78(), GLhash_80(), GLhash_81(), GLhash_83();
static Ptr GLhash_84(), GLhash_86(), GLhash_88(), GLhash_89();
static Ptr GLhash_91(), GLhash_93(), GLhash_94(), GLhash_96();
static Ptr GLhash_98(), GLhash_99(), GLhash_101(), GLhash_102();
static Ptr GLhash_103(), GLhash_105(), GLhash_106(), GLhash_108();
static Ptr GLhash_109(), GLhash_111(), GLhash_112(), GLhash_114();
static Ptr GLhash_115(), GLhash_117(), GLhash_118(), GLhash_119();
static Ptr GLhash_120(), GLhash_121(), GLhash_122(), GLhash_124();
static Ptr GLhash_125(), GLhash_126(), GLhash_127(), GLhash_128();
static Ptr GLhash_130(), GLhash_132(), GLhash_134(), GLhash_135();
static Ptr GLhash_136(), GLhash_138(), GLhash_140(), GLhash_142();
static Ptr GLhash_143(), GLhash_144(), GLhash_145(), GLhash_146();
static Ptr GLhash_147(), GLhash_148(), GLhash_150(), GLhash_151();
static Ptr GLhash_153(), GLhash_154(), GLhash_158(), GLhash_159();
static Ptr GLhash_161(), GLhash_162(), GLhash_164(), GLhash_165();
static Ptr GLhash_166(), GLhash_167(), GLhash_169(), GLhash_170();
static Ptr GLhash_171(), GLhash_172(), GLhash_174(), GLhash_175();
static Ptr GLhash_177(), GLhash_178(), GLhash_179(), GLhash_180();
static Ptr GLhash_181(), GLhash_182(), GLhash_183(), GLhash_184();
static Ptr GLhash_185(), GLhash_187(), GLhash_188(), GLhash_189();
static Ptr GLhash_190(), GLhash_191(), GLhash_192(), GLhash_193();
static Ptr GLhash_195(), GLhash_196(), GLhash_198(), GLhash_199();
static Ptr GLhash_200(), GLhash_201(), GLhash_202(), GLhash_203();
static Ptr GLhash_204(), GLhash_205(), GLhash_206(), GLhash_207();
static Ptr GLhash_209(), GLhash_210(), GLhash_212(), GLhash_213();
static Ptr GLhash_214();

/*      trace functions */
static Ptr GDhash_215(), GDhash_216(), GDhash_217(), GDhash_218();
static Ptr GDhash_219(), GDhash_220(), GDhash_221(), GDhash_222();
static Ptr GDhash_223(), GDhash_224(), GDhash_225(), GDhash_226();
static Ptr GDhash_227(), GDhash_228(), GDhash_229(), GDhash_230();
static Ptr GDhash_231(), GDhash_232();

static Ptr GYhash[101];

static const char GNhash[] = "hash";
static const char GThash[] = "Thu Jul   8 93 21:26:13 ";

static struct GellEntry GWhash[] = {
        {GLhash_3,      GDhash_215,     5},     /* #:hash-table:vect */
        {GLhash_4,      GDhash_216,     2},     /* hash-table-p */
        {GLhash_7,      GDhash_217,     2},     /* #:hash-table:eval */
        {GLhash_8,      GDhash_218,     2},     /* #:hash-table:prin */
        {GLhash_23,     GDhash_219,     5},     /* make-hash-table-eq */
        {GLhash_29,     GDhash_220,     5},     /* make-hash-table-equal */
        {GLhash_33,     GDhash_221,     5},     /* make-hash-table */
        {GLhash_45,     GDhash_222,     2},     /* sxhash */
        {GLhash_154,    GDhash_223,     5},     /* gethash */
        {GLhash_159,    GDhash_224,     4},     /* puthash */
        {GLhash_162,    GDhash_225,     5},     /* inchash */
        {GLhash_167,    GDhash_226,     5},     /* dechash */
        {GLhash_172,    GDhash_227,     3},     /* remhash */
        {GLhash_175,    GDhash_228,     3},     /* maphash */
        {GLhash_185,    GDhash_229,     2},     /* clrhash */
        {GLhash_193,    GDhash_230,     2},     /* hash-table-count */
        {GLhash_196,    GDhash_231,     2},     /* hash-table-values */
        {GLhash_199,    GDhash_232,     3},     /* #:hash-table:print-stat */
};

struct GellModule GZhash = {
        GELLMODULESTAMP,
        GNhash,
        GThash,
        GYhash,
        18,
        GWhash};
