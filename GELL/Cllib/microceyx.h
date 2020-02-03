/* GELL 15.26: include file for the module: "microceyx" */
/*             translation done:            "Wed June 16 93 18:01:14 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLmicroceyx_1(), GLmicroceyx_2(), GLmicroceyx_3(), GLmicroceyx_5();
static Ptr GLmicroceyx_6(), GLmicroceyx_8(), GLmicroceyx_10(), GLmicroceyx_11();
static Ptr GLmicroceyx_12(), GLmicroceyx_14(), GLmicroceyx_15(), GLmicroceyx_16();
static Ptr GLmicroceyx_17(), GLmicroceyx_18(), GLmicroceyx_19(), GLmicroceyx_20();
static Ptr GLmicroceyx_21(), GLmicroceyx_22(), GLmicroceyx_23(), GLmicroceyx_24();
static Ptr GLmicroceyx_26(), GLmicroceyx_27(), GLmicroceyx_29(), GLmicroceyx_31();
static Ptr GLmicroceyx_33(), GLmicroceyx_34(), GLmicroceyx_36(), GLmicroceyx_37();
static Ptr GLmicroceyx_38(), GLmicroceyx_40(), GLmicroceyx_41(), GLmicroceyx_42();
static Ptr GLmicroceyx_44(), GLmicroceyx_45(), GLmicroceyx_47(), GLmicroceyx_48();
static Ptr GLmicroceyx_49(), GLmicroceyx_50(), GLmicroceyx_51(), GLmicroceyx_53();
static Ptr GLmicroceyx_54(), GLmicroceyx_55(), GLmicroceyx_56(), GLmicroceyx_58();
static Ptr GLmicroceyx_59(), GLmicroceyx_60(), GLmicroceyx_61(), GLmicroceyx_62();
static Ptr GLmicroceyx_63(), GLmicroceyx_64(), GLmicroceyx_65(), GLmicroceyx_66();
static Ptr GLmicroceyx_67(), GLmicroceyx_69(), GLmicroceyx_71(), GLmicroceyx_72();
static Ptr GLmicroceyx_73(), GLmicroceyx_75(), GLmicroceyx_76(), GLmicroceyx_77();
static Ptr GLmicroceyx_78(), GLmicroceyx_80(), GLmicroceyx_81(), GLmicroceyx_82();
static Ptr GLmicroceyx_84(), GLmicroceyx_85(), GLmicroceyx_87(), GLmicroceyx_88();
static Ptr GLmicroceyx_90(), GLmicroceyx_91(), GLmicroceyx_92(), GLmicroceyx_94();
static Ptr GLmicroceyx_95(), GLmicroceyx_96(), GLmicroceyx_98(), GLmicroceyx_99();
static Ptr GLmicroceyx_100(), GLmicroceyx_101(), GLmicroceyx_102(), GLmicroceyx_104();
static Ptr GLmicroceyx_105(), GLmicroceyx_107(), GLmicroceyx_108(), GLmicroceyx_109();
static Ptr GLmicroceyx_110(), GLmicroceyx_112(), GLmicroceyx_113(), GLmicroceyx_114();
static Ptr GLmicroceyx_115(), GLmicroceyx_116(), GLmicroceyx_118(), GLmicroceyx_119();
static Ptr GLmicroceyx_120(), GLmicroceyx_121(), GLmicroceyx_122(), GLmicroceyx_124();
static Ptr GLmicroceyx_125(), GLmicroceyx_126(), GLmicroceyx_127(), GLmicroceyx_128();
static Ptr GLmicroceyx_129(), GLmicroceyx_130(), GLmicroceyx_132(), GLmicroceyx_133();
static Ptr GLmicroceyx_134(), GLmicroceyx_135(), GLmicroceyx_136(), GLmicroceyx_138();
static Ptr GLmicroceyx_139(), GLmicroceyx_140(), GLmicroceyx_141(), GLmicroceyx_142();
static Ptr GLmicroceyx_143(), GLmicroceyx_144(), GLmicroceyx_146(), GLmicroceyx_148();
static Ptr GLmicroceyx_149(), GLmicroceyx_150(), GLmicroceyx_152(), GLmicroceyx_153();
static Ptr GLmicroceyx_155(), GLmicroceyx_157(), GLmicroceyx_158(), GLmicroceyx_160();
static Ptr GLmicroceyx_161(), GLmicroceyx_162(), GLmicroceyx_164(), GLmicroceyx_165();
static Ptr GLmicroceyx_166(), GLmicroceyx_167(), GLmicroceyx_168(), GLmicroceyx_169();
static Ptr GLmicroceyx_171(), GLmicroceyx_172(), GLmicroceyx_174(), GLmicroceyx_175();
static Ptr GLmicroceyx_176(), GLmicroceyx_178(), GLmicroceyx_179(), GLmicroceyx_180();
static Ptr GLmicroceyx_181(), GLmicroceyx_182(), GLmicroceyx_183(), GLmicroceyx_185();
static Ptr GLmicroceyx_186(), GLmicroceyx_187(), GLmicroceyx_189(), GLmicroceyx_191();
static Ptr GLmicroceyx_192(), GLmicroceyx_193(), GLmicroceyx_195(), GLmicroceyx_197();
static Ptr GLmicroceyx_198(), GLmicroceyx_199(), GLmicroceyx_201(), GLmicroceyx_202();
static Ptr GLmicroceyx_203(), GLmicroceyx_205(), GLmicroceyx_207(), GLmicroceyx_208();
static Ptr GLmicroceyx_209(), GLmicroceyx_210(), GLmicroceyx_211(), GLmicroceyx_212();
static Ptr GLmicroceyx_214(), GLmicroceyx_215(), GLmicroceyx_216(), GLmicroceyx_217();
static Ptr GLmicroceyx_218(), GLmicroceyx_219(), GLmicroceyx_220(), GLmicroceyx_221();
static Ptr GLmicroceyx_222(), GLmicroceyx_223(), GLmicroceyx_224(), GLmicroceyx_225();
static Ptr GLmicroceyx_226(), GLmicroceyx_229(), GLmicroceyx_231(), GLmicroceyx_232();

/*      trace functions */
static Ptr GDmicroceyx_233(), GDmicroceyx_234(), GDmicroceyx_235(), GDmicroceyx_236();
static Ptr GDmicroceyx_237(), GDmicroceyx_238(), GDmicroceyx_239(), GDmicroceyx_240();
static Ptr GDmicroceyx_241(), GDmicroceyx_242(), GDmicroceyx_243(), GDmicroceyx_244();
static Ptr GDmicroceyx_245(), GDmicroceyx_246(), GDmicroceyx_247(), GDmicroceyx_248();
static Ptr GDmicroceyx_249();

static Ptr GYmicroceyx[107];

static const char GNmicroceyx[] = "microceyx";
static const char GTmicroceyx[] = "Wed June 16 93 18:01:14 ";

static struct GellEntry GWmicroceyx[] = {
        {GLmicroceyx_21,        GDmicroceyx_233,        12},    /* deftclass */
        {GLmicroceyx_42,        GDmicroceyx_234,        12},    /* defrecord */
        {GLmicroceyx_143,       GDmicroceyx_235,        2},     /* tclass-namep */
        {GLmicroceyx_149,       GDmicroceyx_236,        2},     /* record-namep */
        {GLmicroceyx_153,       GDmicroceyx_237,        2},     /* field-list */
        {GLmicroceyx_165,       GDmicroceyx_238,        12},    /* defmake */
        {GLmicroceyx_172,       GDmicroceyx_239,        12},    /* omakeq */
        {GLmicroceyx_187,       GDmicroceyx_240,        12},    /* ogetq */
        {GLmicroceyx_193,       GDmicroceyx_241,        12},    /* oputq */
        {GLmicroceyx_199,       GDmicroceyx_242,        12},    /* omatchq */
        {GLmicroceyx_203,       GDmicroceyx_243,        12},    /* demethod */
        {GLmicroceyx_218,       GDmicroceyx_244,        3},     /* send-error */
        {GLmicroceyx_220,       GDmicroceyx_245,        12},    /* sendq */
        {GLmicroceyx_222,       GDmicroceyx_246,        12},    /* sendf */
        {GLmicroceyx_224,       GDmicroceyx_247,        12},    /* sendfq */
        {GLmicroceyx_226,       GDmicroceyx_248,        5},     /* plink */
        {GLmicroceyx_232,       GDmicroceyx_249,        12},    /* <=p */
};

struct GellModule GZmicroceyx = {
        GELLMODULESTAMP,
        GNmicroceyx,
        GTmicroceyx,
        GYmicroceyx,
        17,
        GWmicroceyx};
