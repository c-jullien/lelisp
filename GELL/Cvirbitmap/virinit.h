/* GELL 15.26: include file for the module: "virinit" */
/*             translation done:            "Tue Aug  24 93 10:49:16 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLvirinit_1(), GLvirinit_2(), GLvirinit_4(), GLvirinit_6();
static Ptr GLvirinit_7(), GLvirinit_8(), GLvirinit_10(), GLvirinit_11();
static Ptr GLvirinit_13(), GLvirinit_14(), GLvirinit_17(), GLvirinit_18();
static Ptr GLvirinit_20(), GLvirinit_22(), GLvirinit_24(), GLvirinit_25();
static Ptr GLvirinit_27(), GLvirinit_28(), GLvirinit_29(), GLvirinit_30();
static Ptr GLvirinit_31(), GLvirinit_32(), GLvirinit_33(), GLvirinit_34();
static Ptr GLvirinit_36(), GLvirinit_37(), GLvirinit_38(), GLvirinit_39();
static Ptr GLvirinit_41(), GLvirinit_42(), GLvirinit_43(), GLvirinit_44();
static Ptr GLvirinit_45(), GLvirinit_46(), GLvirinit_47(), GLvirinit_48();
static Ptr GLvirinit_49(), GLvirinit_50(), GLvirinit_51(), GLvirinit_52();
static Ptr GLvirinit_53(), GLvirinit_54(), GLvirinit_56(), GLvirinit_57();
static Ptr GLvirinit_59(), GLvirinit_60(), GLvirinit_61(), GLvirinit_62();
static Ptr GLvirinit_64(), GLvirinit_66(), GLvirinit_67(), GLvirinit_68();
static Ptr GLvirinit_69(), GLvirinit_70(), GLvirinit_72(), GLvirinit_74();
static Ptr GLvirinit_75(), GLvirinit_77(), GLvirinit_79(), GLvirinit_80();
static Ptr GLvirinit_82(), GLvirinit_84(), GLvirinit_85(), GLvirinit_87();
static Ptr GLvirinit_89(), GLvirinit_90(), GLvirinit_92(), GLvirinit_93();
static Ptr GLvirinit_94(), GLvirinit_95(), GLvirinit_96(), GLvirinit_97();
static Ptr GLvirinit_98(), GLvirinit_99(), GLvirinit_100(), GLvirinit_101();
static Ptr GLvirinit_103(), GLvirinit_104(), GLvirinit_105(), GLvirinit_107();
static Ptr GLvirinit_108(), GLvirinit_109(), GLvirinit_110(), GLvirinit_111();
static Ptr GLvirinit_112(), GLvirinit_114(), GLvirinit_115(), GLvirinit_117();
static Ptr GLvirinit_119(), GLvirinit_121(), GLvirinit_123(), GLvirinit_124();
static Ptr GLvirinit_125(), GLvirinit_126(), GLvirinit_127(), GLvirinit_129();
static Ptr GLvirinit_130(), GLvirinit_131(), GLvirinit_132(), GLvirinit_133();
static Ptr GLvirinit_135(), GLvirinit_136(), GLvirinit_137(), GLvirinit_138();
static Ptr GLvirinit_140(), GLvirinit_142(), GLvirinit_143(), GLvirinit_144();
static Ptr GLvirinit_145(), GLvirinit_147(), GLvirinit_149(), GLvirinit_150();
static Ptr GLvirinit_151(), GLvirinit_152(), GLvirinit_154(), GLvirinit_155();
static Ptr GLvirinit_156(), GLvirinit_157(), GLvirinit_159(), GLvirinit_160();
static Ptr GLvirinit_161(), GLvirinit_162(), GLvirinit_163(), GLvirinit_164();
static Ptr GLvirinit_165(), GLvirinit_166(), GLvirinit_168(), GLvirinit_169();
static Ptr GLvirinit_171(), GLvirinit_172(), GLvirinit_173(), GLvirinit_175();
static Ptr GLvirinit_176(), GLvirinit_177(), GLvirinit_178(), GLvirinit_179();
static Ptr GLvirinit_180(), GLvirinit_181(), GLvirinit_182(), GLvirinit_183();
static Ptr GLvirinit_184(), GLvirinit_186(), GLvirinit_188(), GLvirinit_190();
static Ptr GLvirinit_191(), GLvirinit_192(), GLvirinit_193(), GLvirinit_194();
static Ptr GLvirinit_195(), GLvirinit_196(), GLvirinit_197(), GLvirinit_198();
static Ptr GLvirinit_199(), GLvirinit_200(), GLvirinit_201(), GLvirinit_202();
static Ptr GLvirinit_203(), GLvirinit_204(), GLvirinit_206(), GLvirinit_208();
static Ptr GLvirinit_209(), GLvirinit_210(), GLvirinit_211(), GLvirinit_213();
static Ptr GLvirinit_214(), GLvirinit_215(), GLvirinit_216(), GLvirinit_218();
static Ptr GLvirinit_219(), GLvirinit_220(), GLvirinit_221(), GLvirinit_223();
static Ptr GLvirinit_224(), GLvirinit_226(), GLvirinit_227(), GLvirinit_230();
static Ptr GLvirinit_231(), GLvirinit_232(), GLvirinit_233(), GLvirinit_234();
static Ptr GLvirinit_236(), GLvirinit_237(), GLvirinit_238(), GLvirinit_239();
static Ptr GLvirinit_241(), GLvirinit_242(), GLvirinit_244(), GLvirinit_245();
static Ptr GLvirinit_246(), GLvirinit_247(), GLvirinit_249(), GLvirinit_250();
static Ptr GLvirinit_251(), GLvirinit_252(), GLvirinit_254(), GLvirinit_255();
static Ptr GLvirinit_256(), GLvirinit_257(), GLvirinit_259(), GLvirinit_260();
static Ptr GLvirinit_261(), GLvirinit_262(), GLvirinit_264(), GLvirinit_265();
static Ptr GLvirinit_266(), GLvirinit_267(), GLvirinit_269(), GLvirinit_270();
static Ptr GLvirinit_271(), GLvirinit_272(), GLvirinit_274(), GLvirinit_275();
static Ptr GLvirinit_276(), GLvirinit_277(), GLvirinit_279(), GLvirinit_280();
static Ptr GLvirinit_281(), GLvirinit_282(), GLvirinit_284(), GLvirinit_285();
static Ptr GLvirinit_286(), GLvirinit_287(), GLvirinit_289(), GLvirinit_290();
static Ptr GLvirinit_291(), GLvirinit_292(), GLvirinit_294(), GLvirinit_295();
static Ptr GLvirinit_296(), GLvirinit_297(), GLvirinit_299(), GLvirinit_300();
static Ptr GLvirinit_301(), GLvirinit_302(), GLvirinit_304(), GLvirinit_305();
static Ptr GLvirinit_306(), GLvirinit_307(), GLvirinit_309(), GLvirinit_310();
static Ptr GLvirinit_311(), GLvirinit_312(), GLvirinit_314(), GLvirinit_315();
static Ptr GLvirinit_316(), GLvirinit_317(), GLvirinit_319(), GLvirinit_320();
static Ptr GLvirinit_322(), GLvirinit_323(), GLvirinit_325(), GLvirinit_326();
static Ptr GLvirinit_328(), GLvirinit_329(), GLvirinit_331(), GLvirinit_332();
static Ptr GLvirinit_333(), GLvirinit_334(), GLvirinit_335(), GLvirinit_336();
static Ptr GLvirinit_337(), GLvirinit_338(), GLvirinit_339(), GLvirinit_340();
static Ptr GLvirinit_341(), GLvirinit_342(), GLvirinit_343(), GLvirinit_344();
static Ptr GLvirinit_345(), GLvirinit_346(), GLvirinit_347(), GLvirinit_349();
static Ptr GLvirinit_350(), GLvirinit_352(), GLvirinit_353(), GLvirinit_354();
static Ptr GLvirinit_355(), GLvirinit_357(), GLvirinit_358(), GLvirinit_359();
static Ptr GLvirinit_363(), GLvirinit_364(), GLvirinit_365(), GLvirinit_369();
static Ptr GLvirinit_370();

/*      trace functions */
static Ptr GDvirinit_371(), GDvirinit_372(), GDvirinit_373(), GDvirinit_374();
static Ptr GDvirinit_375(), GDvirinit_376(), GDvirinit_377(), GDvirinit_378();
static Ptr GDvirinit_379(), GDvirinit_380(), GDvirinit_381(), GDvirinit_382();
static Ptr GDvirinit_383(), GDvirinit_384(), GDvirinit_385(), GDvirinit_386();
static Ptr GDvirinit_387(), GDvirinit_388(), GDvirinit_389(), GDvirinit_390();
static Ptr GDvirinit_391(), GDvirinit_392(), GDvirinit_393(), GDvirinit_394();
static Ptr GDvirinit_395(), GDvirinit_396(), GDvirinit_397(), GDvirinit_398();
static Ptr GDvirinit_399(), GDvirinit_400(), GDvirinit_401(), GDvirinit_402();
static Ptr GDvirinit_403(), GDvirinit_404(), GDvirinit_405(), GDvirinit_406();
static Ptr GDvirinit_407(), GDvirinit_408(), GDvirinit_409(), GDvirinit_410();
static Ptr GDvirinit_411(), GDvirinit_412(), GDvirinit_413(), GDvirinit_414();
static Ptr GDvirinit_415(), GDvirinit_416(), GDvirinit_417(), GDvirinit_418();
static Ptr GDvirinit_419(), GDvirinit_420(), GDvirinit_421(), GDvirinit_422();
static Ptr GDvirinit_423(), GDvirinit_424(), GDvirinit_425(), GDvirinit_426();

static Ptr GYvirinit[178];

static const char GNvirinit[] = "virinit";
static const char GTvirinit[] = "Tue Aug  24 93 10:49:16 ";

static struct GellEntry GWvirinit[] = {
        {GLvirinit_1,   GDvirinit_371,  5},     /* inibitmap */
        {GLvirinit_14,  GDvirinit_372,  5},     /* bitprologue */
        {GLvirinit_30,  GDvirinit_373,  5},     /* #:display:bitprologue */
        {GLvirinit_31,  GDvirinit_374,  5},     /* bitmap-save */
        {GLvirinit_101, GDvirinit_375,  2},     /* bitmap-restore */
        {GLvirinit_227, GDvirinit_376,  5},     /* bitepilogue */
        {GLvirinit_239, GDvirinit_377,  5},     /* #:display:bitepilogue */
        {GLvirinit_242, GDvirinit_378,  5},     /* bitmap-refresh */
        {GLvirinit_246, GDvirinit_379,  5},     /* #:display:bitmap-refresh */
        {GLvirinit_247, GDvirinit_380,  5},     /* bitmap-flush */
        {GLvirinit_251, GDvirinit_381,  5},     /* #:display:bitmap-flush */
        {GLvirinit_252, GDvirinit_382,  5},     /* bitmap-sync */
        {GLvirinit_256, GDvirinit_383,  5},     /* #:display:bitmap-sync */
        {GLvirinit_257, GDvirinit_384,  5},     /* standard-roman-font */
        {GLvirinit_261, GDvirinit_385,  5},     /* #:display:standard-roman-font */
        {GLvirinit_262, GDvirinit_386,  5},     /* standard-bold-font */
        {GLvirinit_266, GDvirinit_387,  5},     /* #:display:standard-bold-font */
        {GLvirinit_267, GDvirinit_388,  5},     /* large-roman-font */
        {GLvirinit_271, GDvirinit_389,  5},     /* #:display:large-roman-font */
        {GLvirinit_272, GDvirinit_390,  5},     /* small-roman-font */
        {GLvirinit_276, GDvirinit_391,  5},     /* #:display:small-roman-font */
        {GLvirinit_277, GDvirinit_392,  5},     /* standard-foreground-pattern */
        {GLvirinit_281, GDvirinit_393,  5},     /* #:display:standard-foreground-pattern
 */
        {GLvirinit_282, GDvirinit_394,  5},     /* standard-background-pattern */
        {GLvirinit_286, GDvirinit_395,  5},     /* #:display:standard-background-pattern
 */
        {GLvirinit_287, GDvirinit_396,  5},     /* standard-medium-gray-pattern */
        {GLvirinit_291, GDvirinit_397,  5},     /* #:display:standard-medium-gray-pattern
 */
        {GLvirinit_292, GDvirinit_398,  5},     /* standard-light-gray-pattern */
        {GLvirinit_296, GDvirinit_399,  5},     /* #:display:standard-light-gray-pattern
 */
        {GLvirinit_297, GDvirinit_400,  5},     /* standard-dark-gray-pattern */
        {GLvirinit_301, GDvirinit_401,  5},     /* #:display:standard-dark-gray-pattern */
        {GLvirinit_302, GDvirinit_402,  5},     /* standard-lelisp-cursor */
        {GLvirinit_306, GDvirinit_403,  5},     /* #:display:standard-lelisp-cursor */
        {GLvirinit_307, GDvirinit_404,  5},     /* standard-gc-cursor */
        {GLvirinit_311, GDvirinit_405,  5},     /* #:display:standard-gc-cursor */
        {GLvirinit_312, GDvirinit_406,  5},     /* standard-busy-cursor */
        {GLvirinit_316, GDvirinit_407,  5},     /* #:display:standard-busy-cursor */
        {GLvirinit_317, GDvirinit_408,  5},     /* bitxmax */
        {GLvirinit_320, GDvirinit_409,  5},     /* bitymax */
        {GLvirinit_323, GDvirinit_410,  5},     /* root-window */
        {GLvirinit_326, GDvirinit_411,  1},     /* standard-foreground */
        {GLvirinit_329, GDvirinit_412,  1},     /* standard-background */
        {GLvirinit_332, GDvirinit_413,  2},     /* #:display:bitmap-save */
        {GLvirinit_333, GDvirinit_414,  2},     /* #:display:bitmap-restore */
        {GLvirinit_334, GDvirinit_415,  2},     /* #:display:prin */
        {GLvirinit_344, GDvirinit_416,  2},     /* #:display:current-display */
        {GLvirinit_347, GDvirinit_417,  3},     /* display-store-selection */
        {GLvirinit_350, GDvirinit_418,  2},     /* display-get-selection */
        {GLvirinit_353, GDvirinit_419,  3},     /* #:display:store-selection */
        {GLvirinit_354, GDvirinit_420,  2},     /* #:display:get-selection */
        {GLvirinit_355, GDvirinit_421,  2},     /* display-depth */
        {GLvirinit_358, GDvirinit_422,  5},     /* #:display:display-depth */
        {GLvirinit_359, GDvirinit_423,  5},     /* display-synchronize */
        {GLvirinit_364, GDvirinit_424,  5},     /* #:display:synchronize */
        {GLvirinit_365, GDvirinit_425,  5},     /* default-window-type */
        {GLvirinit_370, GDvirinit_426,  5},     /* #:display:default-window-type */
};

struct GellModule GZvirinit = {
        GELLMODULESTAMP,
        GNvirinit,
        GTvirinit,
        GYvirinit,
        56,
        GWvirinit};
