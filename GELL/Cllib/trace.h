/* GELL 15.26: include file for the module: "trace" */
/*             translation done:            "Wed June 16 93 18:01:33 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLtrace_1(), GLtrace_2(), GLtrace_4(), GLtrace_5();
static Ptr GLtrace_7(), GLtrace_9(), GLtrace_10(), GLtrace_11();
static Ptr GLtrace_12(), GLtrace_13(), GLtrace_15(), GLtrace_16();
static Ptr GLtrace_17(), GLtrace_19(), GLtrace_20(), GLtrace_21();
static Ptr GLtrace_22(), GLtrace_23(), GLtrace_24(), GLtrace_26();
static Ptr GLtrace_28(), GLtrace_29(), GLtrace_31(), GLtrace_33();
static Ptr GLtrace_34(), GLtrace_36(), GLtrace_37(), GLtrace_39();
static Ptr GLtrace_40(), GLtrace_42(), GLtrace_44(), GLtrace_46();
static Ptr GLtrace_47(), GLtrace_48(), GLtrace_49(), GLtrace_50();
static Ptr GLtrace_51(), GLtrace_52(), GLtrace_53(), GLtrace_55();
static Ptr GLtrace_56(), GLtrace_57(), GLtrace_58(), GLtrace_60();
static Ptr GLtrace_61(), GLtrace_63(), GLtrace_64(), GLtrace_65();
static Ptr GLtrace_66(), GLtrace_68(), GLtrace_70(), GLtrace_71();
static Ptr GLtrace_72(), GLtrace_73(), GLtrace_74(), GLtrace_75();
static Ptr GLtrace_76(), GLtrace_77(), GLtrace_78(), GLtrace_80();
static Ptr GLtrace_81(), GLtrace_82(), GLtrace_83(), GLtrace_84();
static Ptr GLtrace_85(), GLtrace_87(), GLtrace_88(), GLtrace_89();
static Ptr GLtrace_90(), GLtrace_91(), GLtrace_92(), GLtrace_93();
static Ptr GLtrace_94(), GLtrace_95(), GLtrace_96(), GLtrace_97();
static Ptr GLtrace_98(), GLtrace_99(), GLtrace_100(), GLtrace_101();
static Ptr GLtrace_102(), GLtrace_103(), GLtrace_104(), GLtrace_105();
static Ptr GLtrace_106(), GLtrace_107(), GLtrace_109(), GLtrace_110();
static Ptr GLtrace_111(), GLtrace_112(), GLtrace_113(), GLtrace_114();
static Ptr GLtrace_115(), GLtrace_116(), GLtrace_118(), GLtrace_119();
static Ptr GLtrace_121(), GLtrace_122(), GLtrace_124(), GLtrace_125();
static Ptr GLtrace_127(), GLtrace_129(), GLtrace_130(), GLtrace_132();
static Ptr GLtrace_134(), GLtrace_135(), GLtrace_136(), GLtrace_137();
static Ptr GLtrace_138(), GLtrace_139(), GLtrace_140(), GLtrace_141();
static Ptr GLtrace_142(), GLtrace_143(), GLtrace_144(), GLtrace_145();
static Ptr GLtrace_146(), GLtrace_147(), GLtrace_148(), GLtrace_149();
static Ptr GLtrace_150(), GLtrace_151(), GLtrace_152(), GLtrace_153();
static Ptr GLtrace_154(), GLtrace_155(), GLtrace_156(), GLtrace_158();
static Ptr GLtrace_160(), GLtrace_162(), GLtrace_163(), GLtrace_164();
static Ptr GLtrace_166(), GLtrace_167(), GLtrace_168(), GLtrace_169();
static Ptr GLtrace_170(), GLtrace_171(), GLtrace_172(), GLtrace_174();
static Ptr GLtrace_176(), GLtrace_177(), GLtrace_179(), GLtrace_180();
static Ptr GLtrace_181(), GLtrace_182(), GLtrace_184(), GLtrace_185();
static Ptr GLtrace_187(), GLtrace_188(), GLtrace_189(), GLtrace_190();
static Ptr GLtrace_191(), GLtrace_192(), GLtrace_193(), GLtrace_194();
static Ptr GLtrace_195(), GLtrace_196(), GLtrace_197(), GLtrace_198();
static Ptr GLtrace_199(), GLtrace_200(), GLtrace_201(), GLtrace_203();
static Ptr GLtrace_204(), GLtrace_205(), GLtrace_206(), GLtrace_207();
static Ptr GLtrace_208(), GLtrace_209(), GLtrace_210(), GLtrace_211();
static Ptr GLtrace_212(), GLtrace_214(), GLtrace_216(), GLtrace_217();
static Ptr GLtrace_218(), GLtrace_219(), GLtrace_220(), GLtrace_222();
static Ptr GLtrace_223(), GLtrace_224(), GLtrace_225(), GLtrace_226();
static Ptr GLtrace_227(), GLtrace_229(), GLtrace_230(), GLtrace_231();
static Ptr GLtrace_232(), GLtrace_234(), GLtrace_235(), GLtrace_236();
static Ptr GLtrace_237(), GLtrace_238(), GLtrace_240(), GLtrace_242();
static Ptr GLtrace_243(), GLtrace_244(), GLtrace_245(), GLtrace_246();
static Ptr GLtrace_247(), GLtrace_248(), GLtrace_249(), GLtrace_251();
static Ptr GLtrace_252(), GLtrace_254(), GLtrace_255(), GLtrace_257();
static Ptr GLtrace_258(), GLtrace_260(), GLtrace_261(), GLtrace_263();
static Ptr GLtrace_264(), GLtrace_266(), GLtrace_267(), GLtrace_269();
static Ptr GLtrace_270(), GLtrace_271(), GLtrace_272(), GLtrace_273();
static Ptr GLtrace_274(), GLtrace_275(), GLtrace_276(), GLtrace_278();
static Ptr GLtrace_279(), GLtrace_281(), GLtrace_283(), GLtrace_285();
static Ptr GLtrace_286(), GLtrace_287(), GLtrace_289(), GLtrace_290();
static Ptr GLtrace_291(), GLtrace_292(), GLtrace_293(), GLtrace_295();
static Ptr GLtrace_297(), GLtrace_298(), GLtrace_300(), GLtrace_301();
static Ptr GLtrace_303(), GLtrace_305(), GLtrace_306(), GLtrace_307();
static Ptr GLtrace_308(), GLtrace_309(), GLtrace_311(), GLtrace_312();
static Ptr GLtrace_313(), GLtrace_314(), GLtrace_316(), GLtrace_317();
static Ptr GLtrace_319(), GLtrace_320(), GLtrace_321(), GLtrace_323();
static Ptr GLtrace_324(), GLtrace_326(), GLtrace_328(), GLtrace_330();

/*      trace functions */
static Ptr GDtrace_331(), GDtrace_332(), GDtrace_333(), GDtrace_334();
static Ptr GDtrace_335(), GDtrace_336(), GDtrace_337(), GDtrace_338();
static Ptr GDtrace_339(), GDtrace_340(), GDtrace_341(), GDtrace_342();

static Ptr GYtrace[199];

static const char GNtrace[] = "trace";
static const char GTtrace[] = "Wed June 16 93 18:01:33 ";

static struct GellEntry GWtrace[] = {
        {GLtrace_1,     GDtrace_331,    12},    /* #:trace:output */
        {GLtrace_10,    GDtrace_332,    6},     /* trace */
        {GLtrace_22,    GDtrace_333,    6},     /* untrace */
        {GLtrace_29,    GDtrace_334,    2},     /* #:trace:untrace-one */
        {GLtrace_116,   GDtrace_335,    2},     /* #:trace:trace-one */
        {GLtrace_167,   GDtrace_336,    6},     /* step */
        {GLtrace_177,   GDtrace_337,    3},     /* #:step:stepeval */
        {GLtrace_182,   GDtrace_338,    6},     /* unstep */
        {GLtrace_185,   GDtrace_339,    6},     /* cstep */
        {GLtrace_312,   GDtrace_340,    1},     /* stepend */
        {GLtrace_317,   GDtrace_341,    1},     /* tracend */
        {GLtrace_324,   GDtrace_342,    1},     /* debugend */
};

struct GellModule GZtrace = {
        GELLMODULESTAMP,
        GNtrace,
        GTtrace,
        GYtrace,
        12,
        GWtrace};
