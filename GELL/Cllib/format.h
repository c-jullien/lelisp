/* GELL 15.26: include file for the module: "format" */
/*             translation done:            "Wed June 16 93 18:01:57 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLformat_1(), GLformat_5(), GLformat_7(), GLformat_8();
static Ptr GLformat_9(), GLformat_10(), GLformat_14(), GLformat_16();
static Ptr GLformat_17(), GLformat_18(), GLformat_19(), GLformat_20();
static Ptr GLformat_21(), GLformat_22(), GLformat_23(), GLformat_24();
static Ptr GLformat_25(), GLformat_27(), GLformat_28(), GLformat_29();
static Ptr GLformat_31(), GLformat_32(), GLformat_33(), GLformat_34();
static Ptr GLformat_35(), GLformat_36(), GLformat_38(), GLformat_39();
static Ptr GLformat_41(), GLformat_42(), GLformat_43(), GLformat_44();
static Ptr GLformat_46(), GLformat_47(), GLformat_48(), GLformat_50();
static Ptr GLformat_51(), GLformat_52(), GLformat_54(), GLformat_55();
static Ptr GLformat_57(), GLformat_58(), GLformat_59(), GLformat_60();
static Ptr GLformat_61(), GLformat_62(), GLformat_63(), GLformat_64();
static Ptr GLformat_65(), GLformat_66(), GLformat_67(), GLformat_68();
static Ptr GLformat_69(), GLformat_70(), GLformat_71(), GLformat_72();
static Ptr GLformat_73(), GLformat_74(), GLformat_75(), GLformat_76();
static Ptr GLformat_77(), GLformat_78(), GLformat_79(), GLformat_81();
static Ptr GLformat_82(), GLformat_83(), GLformat_84(), GLformat_85();
static Ptr GLformat_87(), GLformat_88(), GLformat_90(), GLformat_91();
static Ptr GLformat_92(), GLformat_93(), GLformat_95(), GLformat_96();
static Ptr GLformat_97(), GLformat_99(), GLformat_101(), GLformat_102();
static Ptr GLformat_103(), GLformat_104(), GLformat_105(), GLformat_107();
static Ptr GLformat_108(), GLformat_109(), GLformat_111(), GLformat_112();
static Ptr GLformat_113(), GLformat_114(), GLformat_115(), GLformat_116();
static Ptr GLformat_117(), GLformat_118(), GLformat_120(), GLformat_121();
static Ptr GLformat_123(), GLformat_124(), GLformat_125(), GLformat_126();
static Ptr GLformat_128(), GLformat_129(), GLformat_131(), GLformat_132();
static Ptr GLformat_133(), GLformat_134(), GLformat_136(), GLformat_138();
static Ptr GLformat_139(), GLformat_140(), GLformat_141(), GLformat_142();
static Ptr GLformat_144(), GLformat_146(), GLformat_147(), GLformat_148();
static Ptr GLformat_149(), GLformat_150(), GLformat_152(), GLformat_154();
static Ptr GLformat_155(), GLformat_156(), GLformat_157(), GLformat_158();
static Ptr GLformat_160(), GLformat_162(), GLformat_163(), GLformat_164();
static Ptr GLformat_165(), GLformat_166(), GLformat_167(), GLformat_168();
static Ptr GLformat_170(), GLformat_172(), GLformat_173(), GLformat_174();
static Ptr GLformat_175(), GLformat_177(), GLformat_178(), GLformat_179();
static Ptr GLformat_181(), GLformat_182(), GLformat_183(), GLformat_184();
static Ptr GLformat_185(), GLformat_186(), GLformat_188(), GLformat_189();
static Ptr GLformat_190(), GLformat_191(), GLformat_192(), GLformat_193();
static Ptr GLformat_194(), GLformat_195(), GLformat_196(), GLformat_197();
static Ptr GLformat_198(), GLformat_199(), GLformat_200(), GLformat_201();
static Ptr GLformat_202(), GLformat_203(), GLformat_204(), GLformat_206();
static Ptr GLformat_207(), GLformat_209(), GLformat_211(), GLformat_212();
static Ptr GLformat_213(), GLformat_214(), GLformat_215(), GLformat_216();
static Ptr GLformat_218(), GLformat_219(), GLformat_220(), GLformat_222();
static Ptr GLformat_223(), GLformat_224(), GLformat_226(), GLformat_227();
static Ptr GLformat_229(), GLformat_230(), GLformat_232(), GLformat_234();
static Ptr GLformat_235(), GLformat_236(), GLformat_237(), GLformat_238();
static Ptr GLformat_240(), GLformat_241(), GLformat_243(), GLformat_245();
static Ptr GLformat_246(), GLformat_247(), GLformat_248(), GLformat_249();
static Ptr GLformat_250(), GLformat_252(), GLformat_254(), GLformat_255();
static Ptr GLformat_257(), GLformat_258(), GLformat_259(), GLformat_261();
static Ptr GLformat_262(), GLformat_263(), GLformat_265(), GLformat_266();
static Ptr GLformat_267(), GLformat_268(), GLformat_269(), GLformat_270();
static Ptr GLformat_271(), GLformat_273(), GLformat_274(), GLformat_275();
static Ptr GLformat_276(), GLformat_278(), GLformat_280(), GLformat_281();
static Ptr GLformat_282(), GLformat_283(), GLformat_284(), GLformat_285();
static Ptr GLformat_286(), GLformat_287(), GLformat_288(), GLformat_289();
static Ptr GLformat_291(), GLformat_293(), GLformat_294(), GLformat_295();
static Ptr GLformat_297(), GLformat_298(), GLformat_299(), GLformat_300();
static Ptr GLformat_301(), GLformat_302(), GLformat_303(), GLformat_304();
static Ptr GLformat_305(), GLformat_306(), GLformat_307(), GLformat_308();
static Ptr GLformat_310(), GLformat_311(), GLformat_312(), GLformat_313();
static Ptr GLformat_314(), GLformat_316(), GLformat_317(), GLformat_318();
static Ptr GLformat_319(), GLformat_320(), GLformat_321(), GLformat_322();
static Ptr GLformat_323(), GLformat_324(), GLformat_325(), GLformat_326();
static Ptr GLformat_327(), GLformat_328(), GLformat_329(), GLformat_330();
static Ptr GLformat_331(), GLformat_332(), GLformat_333(), GLformat_335();
static Ptr GLformat_336(), GLformat_338(), GLformat_339(), GLformat_341();
static Ptr GLformat_342(), GLformat_343(), GLformat_344(), GLformat_345();
static Ptr GLformat_346(), GLformat_347(), GLformat_349(), GLformat_350();
static Ptr GLformat_351(), GLformat_352(), GLformat_354(), GLformat_356();
static Ptr GLformat_357(), GLformat_359(), GLformat_360(), GLformat_361();
static Ptr GLformat_362(), GLformat_363(), GLformat_365(), GLformat_366();
static Ptr GLformat_367(), GLformat_368(), GLformat_370(), GLformat_371();
static Ptr GLformat_372(), GLformat_373(), GLformat_375(), GLformat_377();
static Ptr GLformat_378(), GLformat_379(), GLformat_381(), GLformat_382();
static Ptr GLformat_383(), GLformat_384(), GLformat_386(), GLformat_387();
static Ptr GLformat_388(), GLformat_389(), GLformat_391(), GLformat_392();
static Ptr GLformat_393(), GLformat_395(), GLformat_397(), GLformat_398();
static Ptr GLformat_399(), GLformat_400(), GLformat_401(), GLformat_402();
static Ptr GLformat_404(), GLformat_406(), GLformat_408(), GLformat_409();
static Ptr GLformat_411(), GLformat_412(), GLformat_413(), GLformat_414();
static Ptr GLformat_416(), GLformat_418(), GLformat_419(), GLformat_421();
static Ptr GLformat_422(), GLformat_423(), GLformat_424(), GLformat_426();
static Ptr GLformat_427(), GLformat_428(), GLformat_430(), GLformat_431();
static Ptr GLformat_432(), GLformat_433(), GLformat_434(), GLformat_435();
static Ptr GLformat_437(), GLformat_438(), GLformat_439(), GLformat_440();
static Ptr GLformat_442(), GLformat_443(), GLformat_445(), GLformat_446();
static Ptr GLformat_448(), GLformat_450(), GLformat_451(), GLformat_453();
static Ptr GLformat_455(), GLformat_457(), GLformat_459(), GLformat_460();
static Ptr GLformat_461(), GLformat_462(), GLformat_463(), GLformat_464();
static Ptr GLformat_465(), GLformat_466(), GLformat_467(), GLformat_468();
static Ptr GLformat_469(), GLformat_470(), GLformat_471(), GLformat_472();
static Ptr GLformat_474(), GLformat_475(), GLformat_477(), GLformat_478();
static Ptr GLformat_480(), GLformat_482(), GLformat_483(), GLformat_484();
static Ptr GLformat_485(), GLformat_487(), GLformat_488(), GLformat_490();
static Ptr GLformat_491(), GLformat_492(), GLformat_493(), GLformat_494();
static Ptr GLformat_495(), GLformat_497(), GLformat_498(), GLformat_499();
static Ptr GLformat_500(), GLformat_501(), GLformat_502(), GLformat_503();
static Ptr GLformat_504(), GLformat_506(), GLformat_508(), GLformat_509();
static Ptr GLformat_510(), GLformat_511(), GLformat_512(), GLformat_514();
static Ptr GLformat_515(), GLformat_517(), GLformat_518(), GLformat_519();
static Ptr GLformat_521(), GLformat_523(), GLformat_525(), GLformat_526();
static Ptr GLformat_527(), GLformat_528(), GLformat_529(), GLformat_531();
static Ptr GLformat_532(), GLformat_533(), GLformat_535(), GLformat_537();
static Ptr GLformat_538(), GLformat_540(), GLformat_541(), GLformat_542();
static Ptr GLformat_544(), GLformat_545(), GLformat_546(), GLformat_548();
static Ptr GLformat_549(), GLformat_551(), GLformat_552(), GLformat_554();
static Ptr GLformat_555(), GLformat_557(), GLformat_558(), GLformat_560();
static Ptr GLformat_562(), GLformat_563(), GLformat_565(), GLformat_567();
static Ptr GLformat_568(), GLformat_569(), GLformat_570(), GLformat_572();
static Ptr GLformat_573(), GLformat_574(), GLformat_576(), GLformat_577();
static Ptr GLformat_578(), GLformat_579(), GLformat_580(), GLformat_582();
static Ptr GLformat_583(), GLformat_585(), GLformat_587(), GLformat_588();
static Ptr GLformat_590(), GLformat_591(), GLformat_592(), GLformat_594();
static Ptr GLformat_595(), GLformat_596(), GLformat_598(), GLformat_599();
static Ptr GLformat_600(), GLformat_602(), GLformat_603(), GLformat_604();
static Ptr GLformat_606(), GLformat_607(), GLformat_609(), GLformat_610();
static Ptr GLformat_611(), GLformat_612(), GLformat_614(), GLformat_615();
static Ptr GLformat_617(), GLformat_618(), GLformat_620(), GLformat_621();
static Ptr GLformat_622(), GLformat_624(), GLformat_625(), GLformat_627();
static Ptr GLformat_628(), GLformat_629(), GLformat_630(), GLformat_632();
static Ptr GLformat_634(), GLformat_635(), GLformat_636(), GLformat_638();
static Ptr GLformat_640(), GLformat_641(), GLformat_643(), GLformat_644();
static Ptr GLformat_645(), GLformat_646(), GLformat_647(), GLformat_648();
static Ptr GLformat_649(), GLformat_651(), GLformat_652(), GLformat_654();
static Ptr GLformat_656(), GLformat_657(), GLformat_658(), GLformat_659();
static Ptr GLformat_661();

/*      trace functions */
static Ptr GDformat_662(), GDformat_663();

static Ptr GYformat[157];

static const char GNformat[] = "format";
static const char GTformat[] = "Wed June 16 93 18:01:57 ";

static struct GellEntry GWformat[] = {
        {GLformat_1,    GDformat_662,   5},     /* prinf */
        {GLformat_10,   GDformat_663,   5},     /* format */
};

struct GellModule GZformat = {
        GELLMODULESTAMP,
        GNformat,
        GTformat,
        GYformat,
        2,
        GWformat};
