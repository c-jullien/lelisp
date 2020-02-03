/* GELL 15.26: include file for the module: "virgraph" */
/*             translation done:            "Tue Aug  24 93 10:49:02 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLvirgraph_1(), GLvirgraph_5(), GLvirgraph_6(), GLvirgraph_8();
static Ptr GLvirgraph_9(), GLvirgraph_10(), GLvirgraph_11(), GLvirgraph_12();
static Ptr GLvirgraph_13(), GLvirgraph_15(), GLvirgraph_16(), GLvirgraph_17();
static Ptr GLvirgraph_18(), GLvirgraph_19(), GLvirgraph_20(), GLvirgraph_24();
static Ptr GLvirgraph_25(), GLvirgraph_26(), GLvirgraph_27(), GLvirgraph_28();
static Ptr GLvirgraph_29(), GLvirgraph_30(), GLvirgraph_31(), GLvirgraph_35();
static Ptr GLvirgraph_36(), GLvirgraph_38(), GLvirgraph_39(), GLvirgraph_40();
static Ptr GLvirgraph_41(), GLvirgraph_42(), GLvirgraph_43(), GLvirgraph_45();
static Ptr GLvirgraph_46(), GLvirgraph_47(), GLvirgraph_48(), GLvirgraph_49();
static Ptr GLvirgraph_50(), GLvirgraph_54(), GLvirgraph_55(), GLvirgraph_57();
static Ptr GLvirgraph_58(), GLvirgraph_59(), GLvirgraph_60(), GLvirgraph_61();
static Ptr GLvirgraph_63(), GLvirgraph_64(), GLvirgraph_65(), GLvirgraph_66();
static Ptr GLvirgraph_67(), GLvirgraph_71(), GLvirgraph_72(), GLvirgraph_73();
static Ptr GLvirgraph_74(), GLvirgraph_75(), GLvirgraph_76(), GLvirgraph_77();
static Ptr GLvirgraph_78(), GLvirgraph_82(), GLvirgraph_83(), GLvirgraph_85();
static Ptr GLvirgraph_86(), GLvirgraph_87(), GLvirgraph_88(), GLvirgraph_89();
static Ptr GLvirgraph_90(), GLvirgraph_92(), GLvirgraph_93(), GLvirgraph_94();
static Ptr GLvirgraph_95(), GLvirgraph_96(), GLvirgraph_97(), GLvirgraph_101();
static Ptr GLvirgraph_103(), GLvirgraph_104(), GLvirgraph_105(), GLvirgraph_106();
static Ptr GLvirgraph_108(), GLvirgraph_109(), GLvirgraph_110(), GLvirgraph_111();
static Ptr GLvirgraph_112(), GLvirgraph_116(), GLvirgraph_118(), GLvirgraph_119();
static Ptr GLvirgraph_120(), GLvirgraph_121(), GLvirgraph_123(), GLvirgraph_124();
static Ptr GLvirgraph_125(), GLvirgraph_126(), GLvirgraph_127(), GLvirgraph_128();
static Ptr GLvirgraph_129(), GLvirgraph_130(), GLvirgraph_131(), GLvirgraph_132();
static Ptr GLvirgraph_133(), GLvirgraph_134(), GLvirgraph_135(), GLvirgraph_136();
static Ptr GLvirgraph_137(), GLvirgraph_138(), GLvirgraph_139(), GLvirgraph_140();
static Ptr GLvirgraph_141(), GLvirgraph_142(), GLvirgraph_143(), GLvirgraph_144();
static Ptr GLvirgraph_145(), GLvirgraph_146(), GLvirgraph_147(), GLvirgraph_148();
static Ptr GLvirgraph_149(), GLvirgraph_150(), GLvirgraph_151(), GLvirgraph_152();
static Ptr GLvirgraph_153(), GLvirgraph_154(), GLvirgraph_155(), GLvirgraph_156();
static Ptr GLvirgraph_157(), GLvirgraph_158(), GLvirgraph_159(), GLvirgraph_160();
static Ptr GLvirgraph_161(), GLvirgraph_162(), GLvirgraph_163(), GLvirgraph_164();
static Ptr GLvirgraph_165(), GLvirgraph_166(), GLvirgraph_167(), GLvirgraph_168();
static Ptr GLvirgraph_169(), GLvirgraph_170(), GLvirgraph_171(), GLvirgraph_172();
static Ptr GLvirgraph_173(), GLvirgraph_174(), GLvirgraph_175(), GLvirgraph_176();
static Ptr GLvirgraph_177(), GLvirgraph_179(), GLvirgraph_180(), GLvirgraph_182();
static Ptr GLvirgraph_183(), GLvirgraph_184(), GLvirgraph_186(), GLvirgraph_187();
static Ptr GLvirgraph_189(), GLvirgraph_190(), GLvirgraph_192(), GLvirgraph_193();
static Ptr GLvirgraph_195(), GLvirgraph_196(), GLvirgraph_198(), GLvirgraph_199();
static Ptr GLvirgraph_201(), GLvirgraph_202(), GLvirgraph_204(), GLvirgraph_205();
static Ptr GLvirgraph_206(), GLvirgraph_207(), GLvirgraph_208(), GLvirgraph_209();
static Ptr GLvirgraph_210(), GLvirgraph_211(), GLvirgraph_213(), GLvirgraph_214();
static Ptr GLvirgraph_216(), GLvirgraph_217(), GLvirgraph_218(), GLvirgraph_219();
static Ptr GLvirgraph_220(), GLvirgraph_223(), GLvirgraph_225(), GLvirgraph_226();
static Ptr GLvirgraph_227(), GLvirgraph_228(), GLvirgraph_229(), GLvirgraph_231();
static Ptr GLvirgraph_232(), GLvirgraph_233(), GLvirgraph_234(), GLvirgraph_235();
static Ptr GLvirgraph_237(), GLvirgraph_238(), GLvirgraph_239(), GLvirgraph_240();
static Ptr GLvirgraph_241(), GLvirgraph_242(), GLvirgraph_243(), GLvirgraph_245();
static Ptr GLvirgraph_247(), GLvirgraph_248(), GLvirgraph_249(), GLvirgraph_250();
static Ptr GLvirgraph_251(), GLvirgraph_253(), GLvirgraph_254(), GLvirgraph_255();
static Ptr GLvirgraph_257(), GLvirgraph_258(), GLvirgraph_260(), GLvirgraph_261();
static Ptr GLvirgraph_262(), GLvirgraph_264(), GLvirgraph_265(), GLvirgraph_266();
static Ptr GLvirgraph_267(), GLvirgraph_268(), GLvirgraph_270(), GLvirgraph_271();
static Ptr GLvirgraph_273(), GLvirgraph_274(), GLvirgraph_275(), GLvirgraph_276();
static Ptr GLvirgraph_277(), GLvirgraph_278(), GLvirgraph_282(), GLvirgraph_283();
static Ptr GLvirgraph_285(), GLvirgraph_286(), GLvirgraph_287(), GLvirgraph_289();
static Ptr GLvirgraph_290(), GLvirgraph_291(), GLvirgraph_293(), GLvirgraph_294();
static Ptr GLvirgraph_296(), GLvirgraph_298(), GLvirgraph_300(), GLvirgraph_301();
static Ptr GLvirgraph_303(), GLvirgraph_304(), GLvirgraph_306(), GLvirgraph_308();
static Ptr GLvirgraph_309(), GLvirgraph_310(), GLvirgraph_311(), GLvirgraph_313();
static Ptr GLvirgraph_314(), GLvirgraph_316(), GLvirgraph_317(), GLvirgraph_319();
static Ptr GLvirgraph_320(), GLvirgraph_322(), GLvirgraph_323(), GLvirgraph_324();
static Ptr GLvirgraph_326(), GLvirgraph_327(), GLvirgraph_328(), GLvirgraph_329();
static Ptr GLvirgraph_331(), GLvirgraph_332(), GLvirgraph_334(), GLvirgraph_335();
static Ptr GLvirgraph_337(), GLvirgraph_338(), GLvirgraph_340(), GLvirgraph_342();
static Ptr GLvirgraph_343(), GLvirgraph_344(), GLvirgraph_348(), GLvirgraph_349();
static Ptr GLvirgraph_353(), GLvirgraph_354(), GLvirgraph_356(), GLvirgraph_358();
static Ptr GLvirgraph_359();

/*      trace functions */
static Ptr GDvirgraph_360(), GDvirgraph_361(), GDvirgraph_362(), GDvirgraph_363();
static Ptr GDvirgraph_364(), GDvirgraph_365(), GDvirgraph_366(), GDvirgraph_367();
static Ptr GDvirgraph_368(), GDvirgraph_369(), GDvirgraph_370(), GDvirgraph_371();
static Ptr GDvirgraph_372(), GDvirgraph_373(), GDvirgraph_374(), GDvirgraph_375();
static Ptr GDvirgraph_376(), GDvirgraph_377(), GDvirgraph_378(), GDvirgraph_379();
static Ptr GDvirgraph_380(), GDvirgraph_381(), GDvirgraph_382(), GDvirgraph_383();
static Ptr GDvirgraph_384(), GDvirgraph_385(), GDvirgraph_386(), GDvirgraph_387();
static Ptr GDvirgraph_388(), GDvirgraph_389(), GDvirgraph_390(), GDvirgraph_391();
static Ptr GDvirgraph_392(), GDvirgraph_393(), GDvirgraph_394(), GDvirgraph_395();
static Ptr GDvirgraph_396(), GDvirgraph_397(), GDvirgraph_398(), GDvirgraph_399();
static Ptr GDvirgraph_400(), GDvirgraph_401(), GDvirgraph_402(), GDvirgraph_403();
static Ptr GDvirgraph_404(), GDvirgraph_405(), GDvirgraph_406(), GDvirgraph_407();
static Ptr GDvirgraph_408(), GDvirgraph_409(), GDvirgraph_410(), GDvirgraph_411();
static Ptr GDvirgraph_412(), GDvirgraph_413(), GDvirgraph_414(), GDvirgraph_415();
static Ptr GDvirgraph_416(), GDvirgraph_417(), GDvirgraph_418(), GDvirgraph_419();
static Ptr GDvirgraph_420(), GDvirgraph_421(), GDvirgraph_422(), GDvirgraph_423();
static Ptr GDvirgraph_424(), GDvirgraph_425(), GDvirgraph_426(), GDvirgraph_427();
static Ptr GDvirgraph_428(), GDvirgraph_429(), GDvirgraph_430(), GDvirgraph_431();
static Ptr GDvirgraph_432(), GDvirgraph_433(), GDvirgraph_434(), GDvirgraph_435();
static Ptr GDvirgraph_436(), GDvirgraph_437(), GDvirgraph_438(), GDvirgraph_439();
static Ptr GDvirgraph_440(), GDvirgraph_441(), GDvirgraph_442(), GDvirgraph_443();
static Ptr GDvirgraph_444(), GDvirgraph_445(), GDvirgraph_446(), GDvirgraph_447();
static Ptr GDvirgraph_448(), GDvirgraph_449(), GDvirgraph_450(), GDvirgraph_451();
static Ptr GDvirgraph_452(), GDvirgraph_453(), GDvirgraph_454(), GDvirgraph_455();
static Ptr GDvirgraph_456(), GDvirgraph_457(), GDvirgraph_458(), GDvirgraph_459();
static Ptr GDvirgraph_460(), GDvirgraph_461(), GDvirgraph_462(), GDvirgraph_463();
static Ptr GDvirgraph_464(), GDvirgraph_465();

static Ptr GYvirgraph[188];

static const char GNvirgraph[] = "virgraph";
static const char GTvirgraph[] = "Tue Aug  24 93 10:49:02 ";

static struct GellEntry GWvirgraph[] = {
        {GLvirgraph_1,  GDvirgraph_360, 5},     /* graph-env-font */
        {GLvirgraph_11, GDvirgraph_361, 5},     /* current-font */
        {GLvirgraph_18, GDvirgraph_362, 5},     /* #:display:graph-env-font */
        {GLvirgraph_19, GDvirgraph_363, 5},     /* #:display:current-font */
        {GLvirgraph_20, GDvirgraph_364, 5},     /* graph-env-mode */
        {GLvirgraph_26, GDvirgraph_365, 5},     /* current-mode */
        {GLvirgraph_29, GDvirgraph_366, 5},     /* #:display:graph-env-mode */
        {GLvirgraph_30, GDvirgraph_367, 5},     /* #:display:current-mode */
        {GLvirgraph_31, GDvirgraph_368, 5},     /* graph-env-pattern */
        {GLvirgraph_41, GDvirgraph_369, 5},     /* current-pattern */
        {GLvirgraph_48, GDvirgraph_370, 5},     /* #:display:graph-env-pattern */
        {GLvirgraph_49, GDvirgraph_371, 5},     /* #:display:current-pattern */
        {GLvirgraph_50, GDvirgraph_372, 5},     /* graph-env-stipple */
        {GLvirgraph_59, GDvirgraph_373, 5},     /* current-stipple */
        {GLvirgraph_65, GDvirgraph_374, 5},     /* #:display:graph-env-stipple */
        {GLvirgraph_66, GDvirgraph_375, 5},     /* #:display:current-stipple */
        {GLvirgraph_67, GDvirgraph_376, 5},     /* graph-env-fill-mode */
        {GLvirgraph_73, GDvirgraph_377, 5},     /* current-fill-mode */
        {GLvirgraph_76, GDvirgraph_378, 5},     /* #:display:graph-env-fill-mode */
        {GLvirgraph_77, GDvirgraph_379, 5},     /* #:display:current-fill-mode */
        {GLvirgraph_78, GDvirgraph_380, 5},     /* graph-env-line-style */
        {GLvirgraph_88, GDvirgraph_381, 5},     /* current-line-style */
        {GLvirgraph_95, GDvirgraph_382, 5},     /* #:display:graph-env-line-style */
        {GLvirgraph_96, GDvirgraph_383, 5},     /* #:display:current-line-style */
        {GLvirgraph_97, GDvirgraph_384, 5},     /* graph-env-foreground */
        {GLvirgraph_105,        GDvirgraph_385, 5},     /* current-foreground */
        {GLvirgraph_110,        GDvirgraph_386, 5},     /* #:display:graph-env-foreground */
        {GLvirgraph_111,        GDvirgraph_387, 5},     /* #:display:current-foreground */
        {GLvirgraph_112,        GDvirgraph_388, 5},     /* graph-env-background */
        {GLvirgraph_120,        GDvirgraph_389, 5},     /* current-background */
        {GLvirgraph_125,        GDvirgraph_390, 5},     /* #:display:graph-env-background */
        {GLvirgraph_126,        GDvirgraph_391, 5},     /* #:display:current-background */
        {GLvirgraph_127,        GDvirgraph_392, 1},     /* clear-graph-env */
        {GLvirgraph_128,        GDvirgraph_393, 5},     /* #:display:clear-graph-env */
        {GLvirgraph_129,        GDvirgraph_394, 1},     /* font-height */
        {GLvirgraph_130,        GDvirgraph_395, 5},     /* #:display:font-height */
        {GLvirgraph_131,        GDvirgraph_396, 1},     /* font-ascent */
        {GLvirgraph_132,        GDvirgraph_397, 5},     /* #:display:font-ascent */
        {GLvirgraph_133,        GDvirgraph_398, 1},     /* font-max */
        {GLvirgraph_134,        GDvirgraph_399, 5},     /* #:display:font-max */
        {GLvirgraph_135,        GDvirgraph_400, 1},     /* line-style-max */
        {GLvirgraph_136,        GDvirgraph_401, 5},     /* #:display:line-style-max */
        {GLvirgraph_137,        GDvirgraph_402, 1},     /* pattern-max */
        {GLvirgraph_138,        GDvirgraph_403, 5},     /* #:display:pattern-max */
        {GLvirgraph_139,        GDvirgraph_404, 1},     /* cursor-max */
        {GLvirgraph_140,        GDvirgraph_405, 5},     /* #:display:cursor-max */
        {GLvirgraph_141,        GDvirgraph_406, 4},     /* width-substring */
        {GLvirgraph_142,        GDvirgraph_407, 5},     /* #:display:width-substring */
        {GLvirgraph_143,        GDvirgraph_408, 4},     /* height-substring */
        {GLvirgraph_144,        GDvirgraph_409, 5},     /* #:display:height-substring */
        {GLvirgraph_145,        GDvirgraph_410, 4},     /* x-base-substring */
        {GLvirgraph_146,        GDvirgraph_411, 5},     /* #:display:x-base-substring */
        {GLvirgraph_147,        GDvirgraph_412, 4},     /* y-base-substring */
        {GLvirgraph_148,        GDvirgraph_413, 5},     /* #:display:y-base-substring */
        {GLvirgraph_149,        GDvirgraph_414, 4},     /* x-inc-substring */
        {GLvirgraph_150,        GDvirgraph_415, 5},     /* #:display:x-inc-substring */
        {GLvirgraph_151,        GDvirgraph_416, 4},     /* y-inc-substring */
        {GLvirgraph_152,        GDvirgraph_417, 5},     /* #:display:y-inc-substring */
        {GLvirgraph_153,        GDvirgraph_418, 5},     /* #:display:load-font */
        {GLvirgraph_154,        GDvirgraph_419, 5},     /* #:display:get-font-names */
        {GLvirgraph_155,        GDvirgraph_420, 5},     /* #:display:get-font-info */
        {GLvirgraph_156,        GDvirgraph_421, 5},     /* #:display:graph-env-set-clip */
        {GLvirgraph_157,        GDvirgraph_422, 5},     /* #:display:graph-env-set-clips */
        {GLvirgraph_158,        GDvirgraph_423, 5},     /* #:display:graph-env-change-values */
        {GLvirgraph_159,        GDvirgraph_424, 5},     /* #:display:graph-env-subwindow-mode */
        {GLvirgraph_160,        GDvirgraph_425, 5},     /* #:display:make-graph-env */
        {GLvirgraph_161,        GDvirgraph_426, 5},     /* #:display:kill-graph-env */
        {GLvirgraph_162,        GDvirgraph_427, 5},     /* #:display:kill-stipple */
        {GLvirgraph_163,        GDvirgraph_428, 5},     /* #:display:create-stipple */
        {GLvirgraph_164,        GDvirgraph_429, 5},     /* #:display:make-line-style */
        {GLvirgraph_165,        GDvirgraph_430, 5},     /* #:display:make-pattern */
        {GLvirgraph_166,        GDvirgraph_431, 5},     /* #:display:make-cursor */
        {GLvirgraph_167,        GDvirgraph_432, 5},     /* #:display:make-named-cursor */
        {GLvirgraph_168,        GDvirgraph_433, 5},     /* #:display:cursor-name */
        {GLvirgraph_169,        GDvirgraph_434, 5},     /* #:display:move-cursor */
        {GLvirgraph_170,        GDvirgraph_435, 5},     /* #:display:current-clip */
        {GLvirgraph_171,        GDvirgraph_436, 5},     /* #:display:current-cursor */
        {GLvirgraph_172,        GDvirgraph_437, 5},     /* current-clip */
        {GLvirgraph_176,        GDvirgraph_438, 2},     /* load-font */
        {GLvirgraph_183,        GDvirgraph_439, 2},     /* font-name */
        {GLvirgraph_190,        GDvirgraph_440, 2},     /* make-pattern */
        {GLvirgraph_196,        GDvirgraph_441, 4},     /* create-stipple */
        {GLvirgraph_202,        GDvirgraph_442, 2},     /* make-stipple-bitmap */
        {GLvirgraph_211,        GDvirgraph_443, 2},     /* make-stipple */
        {GLvirgraph_214,        GDvirgraph_444, 3},     /* make-stipple-2 */
        {GLvirgraph_220,        GDvirgraph_445, 5},     /* create-stipple16 */
        {GLvirgraph_239,        GDvirgraph_446, 1},     /* width-space */
        {GLvirgraph_240,        GDvirgraph_447, 1},     /* height-space */
        {GLvirgraph_241,        GDvirgraph_448, 1},     /* x-base-space */
        {GLvirgraph_242,        GDvirgraph_449, 1},     /* y-base-space */
        {GLvirgraph_243,        GDvirgraph_450, 5},     /* make-cursor */
        {GLvirgraph_254,        GDvirgraph_451, 2},     /* make-named-cursor */
        {GLvirgraph_261,        GDvirgraph_452, 2},     /* cursor-name */
        {GLvirgraph_266,        GDvirgraph_453, 5},     /* current-cursor */
        {GLvirgraph_276,        GDvirgraph_454, 3},     /* move-cursor */
        {GLvirgraph_277,        GDvirgraph_455, 3},     /* make-line-style */
        {GLvirgraph_278,        GDvirgraph_456, 5},     /* make-graph-env */
        {GLvirgraph_304,        GDvirgraph_457, 2},     /* kill-graph-env */
        {GLvirgraph_310,        GDvirgraph_458, 2},     /* kill-stipple */
        {GLvirgraph_320,        GDvirgraph_459, 5},     /* graph-env-set-clip */
        {GLvirgraph_324,        GDvirgraph_460, 5},     /* graph-env-set-clips */
        {GLvirgraph_328,        GDvirgraph_461, 5},     /* current-graph-env */
        {GLvirgraph_335,        GDvirgraph_462, 5},     /* graph-env-change-values */
        {GLvirgraph_338,        GDvirgraph_463, 3},     /* graph-env-subwindow-mode */
        {GLvirgraph_344,        GDvirgraph_464, 5},     /* display-get-font-names */
        {GLvirgraph_349,        GDvirgraph_465, 5},     /* display-get-font-info */
};

struct GellModule GZvirgraph = {
        GELLMODULESTAMP,
        GNvirgraph,
        GTvirgraph,
        GYvirgraph,
        106,
        GWvirgraph};
