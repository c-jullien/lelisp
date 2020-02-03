/* GELL 15.26: include file for the module: "takr" */
/*             translation done:            "Wed June 16 93 18:18:09 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLtakr_1(), GLtakr_2(), GLtakr_3(), GLtakr_5();
static Ptr GLtakr_6(), GLtakr_7(), GLtakr_8(), GLtakr_9();
static Ptr GLtakr_11(), GLtakr_13(), GLtakr_14(), GLtakr_16();
static Ptr GLtakr_17(), GLtakr_19(), GLtakr_20(), GLtakr_21();
static Ptr GLtakr_23(), GLtakr_24(), GLtakr_26(), GLtakr_27();
static Ptr GLtakr_29(), GLtakr_30(), GLtakr_31(), GLtakr_33();
static Ptr GLtakr_35(), GLtakr_36(), GLtakr_38(), GLtakr_39();
static Ptr GLtakr_40(), GLtakr_42(), GLtakr_43(), GLtakr_45();
static Ptr GLtakr_46(), GLtakr_48(), GLtakr_49(), GLtakr_50();
static Ptr GLtakr_52(), GLtakr_53(), GLtakr_55(), GLtakr_56();
static Ptr GLtakr_58(), GLtakr_59(), GLtakr_61(), GLtakr_63();
static Ptr GLtakr_64(), GLtakr_66(), GLtakr_67(), GLtakr_69();
static Ptr GLtakr_70(), GLtakr_72(), GLtakr_73(), GLtakr_75();
static Ptr GLtakr_76(), GLtakr_77(), GLtakr_79(), GLtakr_80();
static Ptr GLtakr_82(), GLtakr_83(), GLtakr_85(), GLtakr_86();
static Ptr GLtakr_87(), GLtakr_89(), GLtakr_91(), GLtakr_92();
static Ptr GLtakr_94(), GLtakr_95(), GLtakr_96(), GLtakr_98();
static Ptr GLtakr_99(), GLtakr_101(), GLtakr_102(), GLtakr_104();
static Ptr GLtakr_106(), GLtakr_108(), GLtakr_109(), GLtakr_111();
static Ptr GLtakr_112(), GLtakr_114(), GLtakr_116(), GLtakr_117();
static Ptr GLtakr_119(), GLtakr_120(), GLtakr_122(), GLtakr_123();
static Ptr GLtakr_125(), GLtakr_126(), GLtakr_128(), GLtakr_129();
static Ptr GLtakr_131(), GLtakr_132(), GLtakr_134(), GLtakr_135();
static Ptr GLtakr_137(), GLtakr_138(), GLtakr_139(), GLtakr_141();
static Ptr GLtakr_143(), GLtakr_144(), GLtakr_146(), GLtakr_147();
static Ptr GLtakr_149(), GLtakr_150(), GLtakr_152(), GLtakr_153();
static Ptr GLtakr_155(), GLtakr_156(), GLtakr_157(), GLtakr_159();
static Ptr GLtakr_160(), GLtakr_162(), GLtakr_164(), GLtakr_165();
static Ptr GLtakr_167(), GLtakr_169(), GLtakr_170(), GLtakr_172();
static Ptr GLtakr_174(), GLtakr_176(), GLtakr_178(), GLtakr_179();
static Ptr GLtakr_181(), GLtakr_182(), GLtakr_184(), GLtakr_185();
static Ptr GLtakr_187(), GLtakr_189(), GLtakr_191(), GLtakr_192();
static Ptr GLtakr_194(), GLtakr_195(), GLtakr_197(), GLtakr_199();
static Ptr GLtakr_200(), GLtakr_202(), GLtakr_204(), GLtakr_206();
static Ptr GLtakr_208(), GLtakr_209(), GLtakr_211(), GLtakr_213();
static Ptr GLtakr_214(), GLtakr_216(), GLtakr_217(), GLtakr_219();
static Ptr GLtakr_220(), GLtakr_222(), GLtakr_223(), GLtakr_225();
static Ptr GLtakr_227(), GLtakr_228(), GLtakr_230(), GLtakr_231();
static Ptr GLtakr_233(), GLtakr_234(), GLtakr_236(), GLtakr_238();
static Ptr GLtakr_239(), GLtakr_241(), GLtakr_242(), GLtakr_244();
static Ptr GLtakr_246(), GLtakr_248(), GLtakr_249(), GLtakr_251();
static Ptr GLtakr_252(), GLtakr_254(), GLtakr_256(), GLtakr_257();
static Ptr GLtakr_259(), GLtakr_261(), GLtakr_262(), GLtakr_264();
static Ptr GLtakr_266(), GLtakr_267(), GLtakr_269(), GLtakr_270();
static Ptr GLtakr_272(), GLtakr_274(), GLtakr_275(), GLtakr_277();
static Ptr GLtakr_278(), GLtakr_280(), GLtakr_282(), GLtakr_284();
static Ptr GLtakr_285(), GLtakr_287(), GLtakr_288(), GLtakr_290();
static Ptr GLtakr_291(), GLtakr_293(), GLtakr_295(), GLtakr_296();
static Ptr GLtakr_298(), GLtakr_299(), GLtakr_301(), GLtakr_303();
static Ptr GLtakr_304(), GLtakr_306(), GLtakr_308(), GLtakr_310();
static Ptr GLtakr_312(), GLtakr_313(), GLtakr_315(), GLtakr_317();
static Ptr GLtakr_319(), GLtakr_321(), GLtakr_323(), GLtakr_324();
static Ptr GLtakr_326(), GLtakr_328(), GLtakr_330(), GLtakr_331();
static Ptr GLtakr_333(), GLtakr_334(), GLtakr_336(), GLtakr_338();
static Ptr GLtakr_340(), GLtakr_342(), GLtakr_344(), GLtakr_346();
static Ptr GLtakr_348(), GLtakr_350(), GLtakr_352(), GLtakr_354();
static Ptr GLtakr_356(), GLtakr_358(), GLtakr_360(), GLtakr_362();
static Ptr GLtakr_364(), GLtakr_366(), GLtakr_368(), GLtakr_369();
static Ptr GLtakr_371(), GLtakr_373(), GLtakr_375(), GLtakr_376();
static Ptr GLtakr_378(), GLtakr_380(), GLtakr_382(), GLtakr_384();
static Ptr GLtakr_386(), GLtakr_388(), GLtakr_390(), GLtakr_392();
static Ptr GLtakr_394(), GLtakr_395(), GLtakr_397(), GLtakr_398();
static Ptr GLtakr_400(), GLtakr_402(), GLtakr_404(), GLtakr_406();
static Ptr GLtakr_408(), GLtakr_409(), GLtakr_411(), GLtakr_413();
static Ptr GLtakr_415(), GLtakr_417(), GLtakr_419(), GLtakr_420();
static Ptr GLtakr_422(), GLtakr_424(), GLtakr_426(), GLtakr_427();
static Ptr GLtakr_429(), GLtakr_431(), GLtakr_433(), GLtakr_435();
static Ptr GLtakr_437(), GLtakr_439(), GLtakr_441(), GLtakr_442();
static Ptr GLtakr_444(), GLtakr_446(), GLtakr_448(), GLtakr_450();
static Ptr GLtakr_452(), GLtakr_454(), GLtakr_456(), GLtakr_458();
static Ptr GLtakr_460(), GLtakr_462(), GLtakr_464(), GLtakr_465();
static Ptr GLtakr_467(), GLtakr_469(), GLtakr_471(), GLtakr_472();
static Ptr GLtakr_474(), GLtakr_476(), GLtakr_478(), GLtakr_480();
static Ptr GLtakr_482(), GLtakr_484(), GLtakr_486(), GLtakr_488();
static Ptr GLtakr_490(), GLtakr_492(), GLtakr_494(), GLtakr_496();
static Ptr GLtakr_498(), GLtakr_500(), GLtakr_502(), GLtakr_504();
static Ptr GLtakr_506(), GLtakr_507(), GLtakr_509(), GLtakr_511();
static Ptr GLtakr_513(), GLtakr_515(), GLtakr_517(), GLtakr_519();
static Ptr GLtakr_521(), GLtakr_523(), GLtakr_525(), GLtakr_526();
static Ptr GLtakr_528(), GLtakr_530(), GLtakr_532(), GLtakr_534();
static Ptr GLtakr_536(), GLtakr_538(), GLtakr_540(), GLtakr_542();
static Ptr GLtakr_544(), GLtakr_546(), GLtakr_548(), GLtakr_550();
static Ptr GLtakr_552(), GLtakr_554(), GLtakr_556(), GLtakr_558();
static Ptr GLtakr_560(), GLtakr_562(), GLtakr_564(), GLtakr_566();
static Ptr GLtakr_568(), GLtakr_570(), GLtakr_572(), GLtakr_574();
static Ptr GLtakr_576(), GLtakr_578(), GLtakr_580(), GLtakr_582();
static Ptr GLtakr_584(), GLtakr_586(), GLtakr_588(), GLtakr_590();
static Ptr GLtakr_592(), GLtakr_594(), GLtakr_596(), GLtakr_598();
static Ptr GLtakr_600(), GLtakr_602(), GLtakr_604(), GLtakr_606();
static Ptr GLtakr_608(), GLtakr_610(), GLtakr_612(), GLtakr_614();
static Ptr GLtakr_616(), GLtakr_618(), GLtakr_620(), GLtakr_622();
static Ptr GLtakr_624(), GLtakr_626(), GLtakr_628(), GLtakr_630();
static Ptr GLtakr_632(), GLtakr_634(), GLtakr_636(), GLtakr_638();
static Ptr GLtakr_640(), GLtakr_642(), GLtakr_644(), GLtakr_646();
static Ptr GLtakr_648(), GLtakr_650(), GLtakr_652(), GLtakr_654();
static Ptr GLtakr_656(), GLtakr_658(), GLtakr_660(), GLtakr_662();
static Ptr GLtakr_664(), GLtakr_666(), GLtakr_668(), GLtakr_670();
static Ptr GLtakr_672(), GLtakr_674(), GLtakr_676(), GLtakr_678();
static Ptr GLtakr_680(), GLtakr_682(), GLtakr_684(), GLtakr_686();
static Ptr GLtakr_688(), GLtakr_690(), GLtakr_692(), GLtakr_694();
static Ptr GLtakr_696(), GLtakr_698(), GLtakr_700(), GLtakr_702();
static Ptr GLtakr_704(), GLtakr_706(), GLtakr_708(), GLtakr_710();

/*      trace functions */
static Ptr GDtakr_711(), GDtakr_712(), GDtakr_713();

static Ptr GYtakr[12];

static const char GNtakr[] = "takr";
static const char GTtakr[] = "Wed June 16 93 18:18:09 ";

static struct GellEntry GWtakr[] = {
        {GLtakr_1,      GDtakr_711,     1},     /* check-takr */
        {GLtakr_2,      GDtakr_712,     1},     /* meter-takr */
        {GLtakr_7,      GDtakr_713,     2},     /* test-takr */
};

struct GellModule GZtakr = {
        GELLMODULESTAMP,
        GNtakr,
        GTtakr,
        GYtakr,
        3,
        GWtakr};
