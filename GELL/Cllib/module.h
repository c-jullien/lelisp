/* GELL 15.26: include file for the module: "module" */
/*             translation done:            "Wed June 16 93 18:00:35 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLmodule_1(), GLmodule_3(), GLmodule_4(), GLmodule_5();
static Ptr GLmodule_6(), GLmodule_8(), GLmodule_9(), GLmodule_10();
static Ptr GLmodule_12(), GLmodule_14(), GLmodule_15(), GLmodule_16();
static Ptr GLmodule_17(), GLmodule_19(), GLmodule_20(), GLmodule_21();
static Ptr GLmodule_23(), GLmodule_24(), GLmodule_25(), GLmodule_26();
static Ptr GLmodule_27(), GLmodule_28(), GLmodule_29(), GLmodule_30();
static Ptr GLmodule_32(), GLmodule_34(), GLmodule_36(), GLmodule_37();
static Ptr GLmodule_38(), GLmodule_40(), GLmodule_41(), GLmodule_42();
static Ptr GLmodule_44(), GLmodule_45(), GLmodule_46(), GLmodule_47();
static Ptr GLmodule_48(), GLmodule_50(), GLmodule_52(), GLmodule_54();
static Ptr GLmodule_55(), GLmodule_56(), GLmodule_57(), GLmodule_58();
static Ptr GLmodule_59(), GLmodule_60(), GLmodule_62(), GLmodule_63();
static Ptr GLmodule_64(), GLmodule_65(), GLmodule_66(), GLmodule_67();
static Ptr GLmodule_69(), GLmodule_70(), GLmodule_71(), GLmodule_72();
static Ptr GLmodule_73(), GLmodule_74(), GLmodule_76(), GLmodule_77();
static Ptr GLmodule_79(), GLmodule_80(), GLmodule_81(), GLmodule_82();
static Ptr GLmodule_83(), GLmodule_84(), GLmodule_85(), GLmodule_86();
static Ptr GLmodule_87(), GLmodule_88(), GLmodule_89(), GLmodule_90();
static Ptr GLmodule_91(), GLmodule_92(), GLmodule_93(), GLmodule_94();
static Ptr GLmodule_95(), GLmodule_96(), GLmodule_97(), GLmodule_98();
static Ptr GLmodule_99(), GLmodule_100(), GLmodule_101(), GLmodule_102();
static Ptr GLmodule_103(), GLmodule_104(), GLmodule_107(), GLmodule_108();
static Ptr GLmodule_109(), GLmodule_110(), GLmodule_111(), GLmodule_113();
static Ptr GLmodule_115(), GLmodule_116(), GLmodule_117(), GLmodule_119();
static Ptr GLmodule_121(), GLmodule_123(), GLmodule_124(), GLmodule_126();
static Ptr GLmodule_127(), GLmodule_129(), GLmodule_130(), GLmodule_131();
static Ptr GLmodule_132(), GLmodule_133(), GLmodule_134(), GLmodule_136();
static Ptr GLmodule_138(), GLmodule_139(), GLmodule_140(), GLmodule_141();
static Ptr GLmodule_142(), GLmodule_143(), GLmodule_145(), GLmodule_146();
static Ptr GLmodule_148(), GLmodule_149(), GLmodule_150(), GLmodule_152();
static Ptr GLmodule_153(), GLmodule_154(), GLmodule_155(), GLmodule_156();
static Ptr GLmodule_158(), GLmodule_159(), GLmodule_160(), GLmodule_161();
static Ptr GLmodule_163(), GLmodule_164(), GLmodule_165(), GLmodule_167();
static Ptr GLmodule_168(), GLmodule_169(), GLmodule_170(), GLmodule_171();
static Ptr GLmodule_172(), GLmodule_173(), GLmodule_174(), GLmodule_176();
static Ptr GLmodule_178(), GLmodule_179(), GLmodule_180(), GLmodule_181();
static Ptr GLmodule_183(), GLmodule_184(), GLmodule_185(), GLmodule_186();
static Ptr GLmodule_188(), GLmodule_189(), GLmodule_190(), GLmodule_191();
static Ptr GLmodule_192(), GLmodule_193(), GLmodule_194(), GLmodule_195();
static Ptr GLmodule_196(), GLmodule_197(), GLmodule_198(), GLmodule_199();
static Ptr GLmodule_200(), GLmodule_201(), GLmodule_202(), GLmodule_203();
static Ptr GLmodule_204(), GLmodule_205(), GLmodule_206(), GLmodule_207();
static Ptr GLmodule_208(), GLmodule_209(), GLmodule_210(), GLmodule_211();
static Ptr GLmodule_213(), GLmodule_214(), GLmodule_216(), GLmodule_218();
static Ptr GLmodule_219(), GLmodule_220(), GLmodule_221(), GLmodule_223();
static Ptr GLmodule_224(), GLmodule_226(), GLmodule_227();

/*      trace functions */
static Ptr GDmodule_228(), GDmodule_229(), GDmodule_230(), GDmodule_231();
static Ptr GDmodule_232(), GDmodule_233(), GDmodule_234(), GDmodule_235();
static Ptr GDmodule_236();

static Ptr GYmodule[119];

static const char GNmodule[] = "module";
static const char GTmodule[] = "Wed June 16 93 18:00:35 ";

static struct GellEntry GWmodule[] = {
        {GLmodule_1,    GDmodule_228,   2},     /* readdefmodule */
        {GLmodule_21,   GDmodule_229,   1},     /* #:module:bol */
        {GLmodule_28,   GDmodule_230,   3},     /* getdefmodule */
        {GLmodule_29,   GDmodule_231,   4},     /* setdefmodule */
        {GLmodule_30,   GDmodule_232,   3},     /* printdefmodule */
        {GLmodule_104,  GDmodule_233,   5},     /* loadmodule */
        {GLmodule_172,  GDmodule_234,   6},     /* autoloadmodule */
        {GLmodule_214,  GDmodule_235,   2},     /* #:module:std-autoload */
        {GLmodule_227,  GDmodule_236,   2},     /* autoloadp */
};

struct GellModule GZmodule = {
        GELLMODULESTAMP,
        GNmodule,
        GTmodule,
        GYmodule,
        9,
        GWmodule};
