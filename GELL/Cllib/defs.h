/* GELL 15.26: include file for the module: "defs" */
/*             translation done:            "Wed June 16 93 18:00:40 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLdefs_1(), GLdefs_2(), GLdefs_3(), GLdefs_5();
static Ptr GLdefs_6(), GLdefs_7(), GLdefs_9(), GLdefs_11();
static Ptr GLdefs_12(), GLdefs_13(), GLdefs_15(), GLdefs_17();
static Ptr GLdefs_18(), GLdefs_19(), GLdefs_21(), GLdefs_23();
static Ptr GLdefs_24(), GLdefs_25(), GLdefs_27(), GLdefs_28();
static Ptr GLdefs_29(), GLdefs_31(), GLdefs_32(), GLdefs_33();
static Ptr GLdefs_35(), GLdefs_36(), GLdefs_38(), GLdefs_39();
static Ptr GLdefs_40(), GLdefs_42(), GLdefs_44(), GLdefs_45();
static Ptr GLdefs_47(), GLdefs_49(), GLdefs_50(), GLdefs_52();
static Ptr GLdefs_54(), GLdefs_55(), GLdefs_57(), GLdefs_58();
static Ptr GLdefs_59(), GLdefs_60(), GLdefs_61(), GLdefs_63();
static Ptr GLdefs_65(), GLdefs_66(), GLdefs_67(), GLdefs_68();
static Ptr GLdefs_69(), GLdefs_71(), GLdefs_73(), GLdefs_74();
static Ptr GLdefs_75(), GLdefs_77(), GLdefs_78(), GLdefs_79();
static Ptr GLdefs_81(), GLdefs_83(), GLdefs_85(), GLdefs_86();
static Ptr GLdefs_88(), GLdefs_89(), GLdefs_90(), GLdefs_92();
static Ptr GLdefs_93(), GLdefs_94(), GLdefs_95(), GLdefs_97();
static Ptr GLdefs_99(), GLdefs_101(), GLdefs_102(), GLdefs_103();
static Ptr GLdefs_105(), GLdefs_106(), GLdefs_108(), GLdefs_109();
static Ptr GLdefs_110(), GLdefs_111(), GLdefs_112(), GLdefs_113();
static Ptr GLdefs_114(), GLdefs_115(), GLdefs_116(), GLdefs_117();
static Ptr GLdefs_118(), GLdefs_119(), GLdefs_120(), GLdefs_122();
static Ptr GLdefs_123(), GLdefs_125(), GLdefs_126(), GLdefs_127();
static Ptr GLdefs_128(), GLdefs_129(), GLdefs_131(), GLdefs_133();
static Ptr GLdefs_135(), GLdefs_137(), GLdefs_139(), GLdefs_141();
static Ptr GLdefs_143(), GLdefs_144(), GLdefs_146(), GLdefs_147();
static Ptr GLdefs_149(), GLdefs_151(), GLdefs_153(), GLdefs_155();
static Ptr GLdefs_156(), GLdefs_158(), GLdefs_160(), GLdefs_161();
static Ptr GLdefs_163(), GLdefs_165(), GLdefs_166(), GLdefs_168();
static Ptr GLdefs_170(), GLdefs_171(), GLdefs_173(), GLdefs_175();
static Ptr GLdefs_176(), GLdefs_178(), GLdefs_180(), GLdefs_181();
static Ptr GLdefs_183(), GLdefs_185(), GLdefs_186(), GLdefs_188();
static Ptr GLdefs_190(), GLdefs_191(), GLdefs_192(), GLdefs_193();
static Ptr GLdefs_194(), GLdefs_195(), GLdefs_196(), GLdefs_197();
static Ptr GLdefs_198(), GLdefs_199(), GLdefs_200(), GLdefs_201();
static Ptr GLdefs_202(), GLdefs_203(), GLdefs_204(), GLdefs_205();
static Ptr GLdefs_206(), GLdefs_207(), GLdefs_208(), GLdefs_209();
static Ptr GLdefs_210(), GLdefs_211(), GLdefs_212(), GLdefs_213();
static Ptr GLdefs_214(), GLdefs_215(), GLdefs_216(), GLdefs_217();
static Ptr GLdefs_218(), GLdefs_219(), GLdefs_220(), GLdefs_221();
static Ptr GLdefs_222(), GLdefs_223(), GLdefs_224(), GLdefs_225();
static Ptr GLdefs_226(), GLdefs_227(), GLdefs_228(), GLdefs_229();
static Ptr GLdefs_230(), GLdefs_232(), GLdefs_233(), GLdefs_234();
static Ptr GLdefs_235(), GLdefs_236(), GLdefs_238(), GLdefs_239();
static Ptr GLdefs_240(), GLdefs_241(), GLdefs_242(), GLdefs_243();
static Ptr GLdefs_244(), GLdefs_245(), GLdefs_246(), GLdefs_247();
static Ptr GLdefs_248(), GLdefs_249(), GLdefs_250(), GLdefs_251();
static Ptr GLdefs_252(), GLdefs_253(), GLdefs_254(), GLdefs_255();
static Ptr GLdefs_256(), GLdefs_257(), GLdefs_259(), GLdefs_260();
static Ptr GLdefs_261(), GLdefs_262(), GLdefs_263(), GLdefs_265();
static Ptr GLdefs_266(), GLdefs_267(), GLdefs_268(), GLdefs_269();
static Ptr GLdefs_270(), GLdefs_272(), GLdefs_273(), GLdefs_274();
static Ptr GLdefs_275(), GLdefs_277(), GLdefs_278(), GLdefs_280();
static Ptr GLdefs_282(), GLdefs_283(), GLdefs_284(), GLdefs_285();
static Ptr GLdefs_287(), GLdefs_288(), GLdefs_290(), GLdefs_292();
static Ptr GLdefs_293(), GLdefs_294(), GLdefs_295(), GLdefs_296();
static Ptr GLdefs_297(), GLdefs_298(), GLdefs_299(), GLdefs_301();
static Ptr GLdefs_302(), GLdefs_303(), GLdefs_304(), GLdefs_306();
static Ptr GLdefs_307(), GLdefs_308(), GLdefs_309(), GLdefs_311();
static Ptr GLdefs_312(), GLdefs_313(), GLdefs_314(), GLdefs_315();
static Ptr GLdefs_316(), GLdefs_317(), GLdefs_318(), GLdefs_320();
static Ptr GLdefs_321(), GLdefs_322(), GLdefs_323(), GLdefs_325();
static Ptr GLdefs_326(), GLdefs_327(), GLdefs_328(), GLdefs_330();
static Ptr GLdefs_331(), GLdefs_332(), GLdefs_333(), GLdefs_334();
static Ptr GLdefs_335(), GLdefs_336(), GLdefs_337(), GLdefs_338();
static Ptr GLdefs_339(), GLdefs_340(), GLdefs_341(), GLdefs_342();
static Ptr GLdefs_343(), GLdefs_344(), GLdefs_345(), GLdefs_346();
static Ptr GLdefs_348(), GLdefs_349(), GLdefs_350(), GLdefs_351();
static Ptr GLdefs_352(), GLdefs_353(), GLdefs_354(), GLdefs_355();
static Ptr GLdefs_356(), GLdefs_357(), GLdefs_358(), GLdefs_359();
static Ptr GLdefs_360(), GLdefs_361(), GLdefs_362(), GLdefs_363();
static Ptr GLdefs_364(), GLdefs_365(), GLdefs_366(), GLdefs_367();

/*      trace functions */
static Ptr GDdefs_368(), GDdefs_369(), GDdefs_370(), GDdefs_371();
static Ptr GDdefs_372(), GDdefs_373(), GDdefs_374(), GDdefs_375();
static Ptr GDdefs_376(), GDdefs_377(), GDdefs_378(), GDdefs_379();
static Ptr GDdefs_380(), GDdefs_381(), GDdefs_382(), GDdefs_383();
static Ptr GDdefs_384(), GDdefs_385(), GDdefs_386(), GDdefs_387();
static Ptr GDdefs_388(), GDdefs_389();

static Ptr GYdefs[189];

static const char GNdefs[] = "defs";
static const char GTdefs[] = "Wed June 16 93 18:00:40 ";

static struct GellEntry GWdefs[] = {
        {GLdefs_1,      GDdefs_368,     2},     /* macroexpand */
        {GLdefs_36,     GDdefs_369,     2},     /* macroexpand1 */
        {GLdefs_58,     GDdefs_370,     12},    /* with */
        {GLdefs_120,    GDdefs_371,     4},     /* resetfn */
        {GLdefs_156,    GDdefs_372,     6},     /* de */
        {GLdefs_161,    GDdefs_373,     6},     /* df */
        {GLdefs_166,    GDdefs_374,     6},     /* dm */
        {GLdefs_171,    GDdefs_375,     6},     /* dmd */
        {GLdefs_176,    GDdefs_376,     6},     /* defmacro */
        {GLdefs_181,    GDdefs_377,     6},     /* defun */
        {GLdefs_186,    GDdefs_378,     6},     /* ds */
        {GLdefs_191,    GDdefs_379,     12},    /* letn */
        {GLdefs_195,    GDdefs_380,     12},    /* slet */
        {GLdefs_201,    GDdefs_381,     6},     /* dynamic */
        {GLdefs_228,    GDdefs_382,     12},    /* for */
        {GLdefs_273,    GDdefs_383,     12},    /* prog */
        {GLdefs_283,    GDdefs_384,     12},    /* prog* */
        {GLdefs_293,    GDdefs_385,     12},    /* do */
        {GLdefs_312,    GDdefs_386,     12},    /* do* */
        {GLdefs_331,    GDdefs_387,     12},    /* backtrack */
        {GLdefs_349,    GDdefs_388,     12},    /* catch-all-but */
        {GLdefs_355,    GDdefs_389,     3},     /* closure */
};

struct GellModule GZdefs = {
        GELLMODULESTAMP,
        GNdefs,
        GTdefs,
        GYdefs,
        22,
        GWdefs};
