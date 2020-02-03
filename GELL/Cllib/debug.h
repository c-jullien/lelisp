/* GELL 15.26: include file for the module: "debug" */
/*             translation done:            "Wed June 16 93 18:01:21 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLdebug_1(), GLdebug_4(), GLdebug_6(), GLdebug_7();
static Ptr GLdebug_8(), GLdebug_9(), GLdebug_10(), GLdebug_11();
static Ptr GLdebug_13(), GLdebug_14(), GLdebug_15(), GLdebug_17();
static Ptr GLdebug_18(), GLdebug_20(), GLdebug_21(), GLdebug_22();
static Ptr GLdebug_24(), GLdebug_26(), GLdebug_28(), GLdebug_29();
static Ptr GLdebug_30(), GLdebug_31(), GLdebug_32(), GLdebug_33();
static Ptr GLdebug_34(), GLdebug_35(), GLdebug_36(), GLdebug_38();
static Ptr GLdebug_39(), GLdebug_40(), GLdebug_42(), GLdebug_43();
static Ptr GLdebug_45(), GLdebug_46(), GLdebug_47(), GLdebug_48();
static Ptr GLdebug_49(), GLdebug_50(), GLdebug_52(), GLdebug_54();
static Ptr GLdebug_55(), GLdebug_56(), GLdebug_57(), GLdebug_58();
static Ptr GLdebug_59(), GLdebug_60(), GLdebug_62(), GLdebug_64();
static Ptr GLdebug_65(), GLdebug_66(), GLdebug_67(), GLdebug_68();
static Ptr GLdebug_69(), GLdebug_70(), GLdebug_71(), GLdebug_73();
static Ptr GLdebug_74(), GLdebug_76(), GLdebug_78(), GLdebug_80();
static Ptr GLdebug_81(), GLdebug_83(), GLdebug_84(), GLdebug_85();
static Ptr GLdebug_86(), GLdebug_88(), GLdebug_89(), GLdebug_90();
static Ptr GLdebug_91(), GLdebug_92(), GLdebug_93(), GLdebug_94();
static Ptr GLdebug_95(), GLdebug_97(), GLdebug_98(), GLdebug_100();
static Ptr GLdebug_101(), GLdebug_103(), GLdebug_105(), GLdebug_106();
static Ptr GLdebug_107(), GLdebug_108(), GLdebug_109(), GLdebug_110();
static Ptr GLdebug_111(), GLdebug_112(), GLdebug_113(), GLdebug_114();
static Ptr GLdebug_116(), GLdebug_117(), GLdebug_118(), GLdebug_119();
static Ptr GLdebug_121(), GLdebug_122(), GLdebug_123(), GLdebug_124();
static Ptr GLdebug_125(), GLdebug_127(), GLdebug_128(), GLdebug_130();
static Ptr GLdebug_131(), GLdebug_132(), GLdebug_133(), GLdebug_134();
static Ptr GLdebug_135(), GLdebug_136(), GLdebug_137(), GLdebug_138();
static Ptr GLdebug_140(), GLdebug_141(), GLdebug_143(), GLdebug_144();
static Ptr GLdebug_146(), GLdebug_147(), GLdebug_149(), GLdebug_150();
static Ptr GLdebug_151(), GLdebug_152(), GLdebug_153(), GLdebug_154();
static Ptr GLdebug_155(), GLdebug_156(), GLdebug_158(), GLdebug_159();
static Ptr GLdebug_161(), GLdebug_162(), GLdebug_164(), GLdebug_166();
static Ptr GLdebug_168(), GLdebug_169(), GLdebug_171(), GLdebug_172();
static Ptr GLdebug_173(), GLdebug_174(), GLdebug_176(), GLdebug_178();
static Ptr GLdebug_180(), GLdebug_181(), GLdebug_183(), GLdebug_184();
static Ptr GLdebug_186(), GLdebug_187(), GLdebug_189(), GLdebug_190();
static Ptr GLdebug_192(), GLdebug_194(), GLdebug_196(), GLdebug_197();
static Ptr GLdebug_198(), GLdebug_200(), GLdebug_201(), GLdebug_203();
static Ptr GLdebug_204(), GLdebug_205(), GLdebug_206(), GLdebug_208();
static Ptr GLdebug_209(), GLdebug_211(), GLdebug_212(), GLdebug_213();
static Ptr GLdebug_215(), GLdebug_216(), GLdebug_217(), GLdebug_218();
static Ptr GLdebug_219(), GLdebug_221(), GLdebug_223(), GLdebug_225();
static Ptr GLdebug_226(), GLdebug_228(), GLdebug_229(), GLdebug_232();
static Ptr GLdebug_233(), GLdebug_235(), GLdebug_236(), GLdebug_237();
static Ptr GLdebug_239(), GLdebug_240(), GLdebug_241(), GLdebug_242();
static Ptr GLdebug_244(), GLdebug_246(), GLdebug_248(), GLdebug_249();
static Ptr GLdebug_251(), GLdebug_252(), GLdebug_253(), GLdebug_255();
static Ptr GLdebug_256(), GLdebug_257(), GLdebug_258(), GLdebug_260();
static Ptr GLdebug_261(), GLdebug_262(), GLdebug_264(), GLdebug_265();
static Ptr GLdebug_266(), GLdebug_268(), GLdebug_270(), GLdebug_271();
static Ptr GLdebug_273(), GLdebug_274(), GLdebug_276(), GLdebug_277();
static Ptr GLdebug_278(), GLdebug_279(), GLdebug_281(), GLdebug_282();
static Ptr GLdebug_283(), GLdebug_285(), GLdebug_286(), GLdebug_287();
static Ptr GLdebug_288(), GLdebug_289(), GLdebug_290(), GLdebug_291();
static Ptr GLdebug_292(), GLdebug_293(), GLdebug_294(), GLdebug_295();
static Ptr GLdebug_297(), GLdebug_298(), GLdebug_299(), GLdebug_300();
static Ptr GLdebug_301(), GLdebug_302(), GLdebug_304(), GLdebug_305();
static Ptr GLdebug_306(), GLdebug_307(), GLdebug_308(), GLdebug_310();
static Ptr GLdebug_311(), GLdebug_313(), GLdebug_314(), GLdebug_315();
static Ptr GLdebug_316(), GLdebug_317(), GLdebug_319(), GLdebug_320();
static Ptr GLdebug_322(), GLdebug_323(), GLdebug_324(), GLdebug_326();
static Ptr GLdebug_328(), GLdebug_329(), GLdebug_331(), GLdebug_333();
static Ptr GLdebug_334(), GLdebug_335(), GLdebug_337(), GLdebug_338();
static Ptr GLdebug_339(), GLdebug_341(), GLdebug_342(), GLdebug_343();
static Ptr GLdebug_344(), GLdebug_345(), GLdebug_346(), GLdebug_347();
static Ptr GLdebug_348(), GLdebug_349(), GLdebug_350(), GLdebug_351();
static Ptr GLdebug_352(), GLdebug_353(), GLdebug_354(), GLdebug_355();
static Ptr GLdebug_356(), GLdebug_357(), GLdebug_358(), GLdebug_359();
static Ptr GLdebug_360(), GLdebug_361(), GLdebug_362(), GLdebug_363();
static Ptr GLdebug_364(), GLdebug_366(), GLdebug_367(), GLdebug_368();
static Ptr GLdebug_369(), GLdebug_370(), GLdebug_371(), GLdebug_372();
static Ptr GLdebug_373(), GLdebug_374(), GLdebug_375(), GLdebug_376();
static Ptr GLdebug_377(), GLdebug_378(), GLdebug_379(), GLdebug_380();
static Ptr GLdebug_381(), GLdebug_383(), GLdebug_384(), GLdebug_386();
static Ptr GLdebug_387(), GLdebug_388(), GLdebug_389(), GLdebug_390();
static Ptr GLdebug_391(), GLdebug_392(), GLdebug_393(), GLdebug_394();
static Ptr GLdebug_395(), GLdebug_397(), GLdebug_398(), GLdebug_400();
static Ptr GLdebug_401(), GLdebug_403(), GLdebug_405(), GLdebug_407();
static Ptr GLdebug_409(), GLdebug_411(), GLdebug_412(), GLdebug_413();
static Ptr GLdebug_414(), GLdebug_415(), GLdebug_417(), GLdebug_418();
static Ptr GLdebug_419(), GLdebug_420(), GLdebug_421(), GLdebug_422();
static Ptr GLdebug_423(), GLdebug_425(), GLdebug_426(), GLdebug_427();
static Ptr GLdebug_428(), GLdebug_429(), GLdebug_430(), GLdebug_431();
static Ptr GLdebug_433(), GLdebug_435(), GLdebug_436(), GLdebug_437();
static Ptr GLdebug_438(), GLdebug_439(), GLdebug_440(), GLdebug_442();
static Ptr GLdebug_443(), GLdebug_444(), GLdebug_446(), GLdebug_447();
static Ptr GLdebug_448(), GLdebug_449(), GLdebug_450(), GLdebug_451();
static Ptr GLdebug_452(), GLdebug_453(), GLdebug_454(), GLdebug_455();
static Ptr GLdebug_456(), GLdebug_457(), GLdebug_458(), GLdebug_459();
static Ptr GLdebug_460(), GLdebug_461(), GLdebug_462(), GLdebug_463();
static Ptr GLdebug_464(), GLdebug_465(), GLdebug_466(), GLdebug_467();
static Ptr GLdebug_468(), GLdebug_469(), GLdebug_470(), GLdebug_471();
static Ptr GLdebug_472(), GLdebug_473(), GLdebug_474(), GLdebug_475();
static Ptr GLdebug_476(), GLdebug_477();

/*      trace functions */
static Ptr GDdebug_478(), GDdebug_479(), GDdebug_480(), GDdebug_481();
static Ptr GDdebug_482(), GDdebug_483(), GDdebug_484(), GDdebug_485();
static Ptr GDdebug_486(), GDdebug_487(), GDdebug_488(), GDdebug_489();
static Ptr GDdebug_490(), GDdebug_491(), GDdebug_492(), GDdebug_493();
static Ptr GDdebug_494(), GDdebug_495(), GDdebug_496(), GDdebug_497();
static Ptr GDdebug_498(), GDdebug_499(), GDdebug_500(), GDdebug_501();
static Ptr GDdebug_502(), GDdebug_503(), GDdebug_504(), GDdebug_505();
static Ptr GDdebug_506();

static Ptr GYdebug[235];

static const char GNdebug[] = "debug";
static const char GTdebug[] = "Wed June 16 93 18:01:21 ";

static struct GellEntry GWdebug[] = {
        {GLdebug_1,     GDdebug_478,    5},     /* printstack */
        {GLdebug_46,    GDdebug_479,    6},     /* debug */
        {GLdebug_49,    GDdebug_480,    1},     /* break */
        {GLdebug_69,    GDdebug_481,    2},     /* debug-command */
        {GLdebug_71,    GDdebug_482,    2},     /* #:system:debug:break-loop:g115 */
        {GLdebug_122,   GDdebug_483,    1},     /* #:system:debug:toplevel */
        {GLdebug_128,   GDdebug_484,    1},     /* #:system:debug:bol */
        {GLdebug_229,   GDdebug_485,    5},     /* #:system:debug:printstack */
        {GLdebug_232,   GDdebug_486,    1},     /* #:system:debug:print-current-variables */
        {GLdebug_256,   GDdebug_487,    1},     /* #:system:debug:print-error */
        {GLdebug_266,   GDdebug_488,    1},     /* #:system:debug:print-current-function */
        {GLdebug_279,   GDdebug_489,    1},     /* #:system:debug:down-stack */
        {GLdebug_283,   GDdebug_490,    1},     /* #:system:debug:up-stack */
        {GLdebug_288,   GDdebug_491,    1},     /* #:system:debug:continue */
        {GLdebug_305,   GDdebug_492,    1},     /* #:system:debug:help */
        {GLdebug_345,   GDdebug_493,    2},     /* #:system:debug:find-expr:g116 */
        {GLdebug_349,   GDdebug_494,    2},     /* #:system:debug:find-expr:g117 */
        {GLdebug_352,   GDdebug_495,    2},     /* #:system:debug:find-expr:g118 */
        {GLdebug_355,   GDdebug_496,    2},     /* #:system:debug:find-expr:g119 */
        {GLdebug_358,   GDdebug_497,    2},     /* #:system:debug:find-expr:g120 */
        {GLdebug_361,   GDdebug_498,    2},     /* #:system:debug:find-expr:g121 */
        {GLdebug_364,   GDdebug_499,    2},     /* #:system:debug:find-expr:g122 */
        {GLdebug_370,   GDdebug_500,    2},     /* #:system:debug:find-error:g123 */
        {GLdebug_375,   GDdebug_501,    2},     /* #:system:debug:find-error:g124 */
        {GLdebug_378,   GDdebug_502,    2},     /* #:system:debug:find-error:g125 */
        {GLdebug_381,   GDdebug_503,    2},     /* #:system:debug:find-error:g126 */
        {GLdebug_412,   GDdebug_504,    2},     /* #:system:debug:hilited:prin */
        {GLdebug_419,   GDdebug_505,    2},     /* #:tty:system:hilited:tyattrib */
        {GLdebug_423,   GDdebug_506,    1},     /* #:system:debug:hilited:eol */
};

struct GellModule GZdebug = {
        GELLMODULESTAMP,
        GNdebug,
        GTdebug,
        GYdebug,
        29,
        GWdebug};
