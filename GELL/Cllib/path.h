/* GELL 15.26: include file for the module: "path" */
/*             translation done:            "Wed June 16 93 18:00:53 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern long lldirectoryp();
extern long llgetwd();
extern Ptr llopendir();
extern Ptr llreaddir();
extern long llclosedir();
extern long cchdir();

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLpath_1(), GLpath_2(), GLpath_3(), GLpath_5();
static Ptr GLpath_6(), GLpath_8(), GLpath_9(), GLpath_11();
static Ptr GLpath_12(), GLpath_14(), GLpath_15(), GLpath_16();
static Ptr GLpath_18(), GLpath_19(), GLpath_21(), GLpath_22();
static Ptr GLpath_24(), GLpath_25(), GLpath_27(), GLpath_28();
static Ptr GLpath_30(), GLpath_31(), GLpath_33(), GLpath_34();
static Ptr GLpath_36(), GLpath_37(), GLpath_39(), GLpath_40();
static Ptr GLpath_42(), GLpath_43(), GLpath_45(), GLpath_46();
static Ptr GLpath_48(), GLpath_49(), GLpath_51(), GLpath_52();
static Ptr GLpath_54(), GLpath_55(), GLpath_57(), GLpath_58();
static Ptr GLpath_60(), GLpath_62(), GLpath_63(), GLpath_65();
static Ptr GLpath_66(), GLpath_68(), GLpath_69(), GLpath_71();
static Ptr GLpath_73(), GLpath_74(), GLpath_76(), GLpath_78();
static Ptr GLpath_79(), GLpath_81(), GLpath_82(), GLpath_84();
static Ptr GLpath_86(), GLpath_87(), GLpath_89(), GLpath_91();
static Ptr GLpath_92(), GLpath_93(), GLpath_95(), GLpath_96();
static Ptr GLpath_97(), GLpath_98(), GLpath_99(), GLpath_101();
static Ptr GLpath_102(), GLpath_103(), GLpath_105(), GLpath_106();
static Ptr GLpath_107(), GLpath_109(), GLpath_110(), GLpath_111();
static Ptr GLpath_112(), GLpath_113(), GLpath_114(), GLpath_115();
static Ptr GLpath_116(), GLpath_117(), GLpath_118(), GLpath_119();
static Ptr GLpath_120(), GLpath_121(), GLpath_122(), GLpath_123();
static Ptr GLpath_124(), GLpath_126(), GLpath_127(), GLpath_129();
static Ptr GLpath_131(), GLpath_133(), GLpath_134(), GLpath_135();
static Ptr GLpath_137(), GLpath_138(), GLpath_139(), GLpath_140();
static Ptr GLpath_141(), GLpath_143(), GLpath_144(), GLpath_146();
static Ptr GLpath_147(), GLpath_148(), GLpath_150(), GLpath_151();
static Ptr GLpath_152(), GLpath_154(), GLpath_155(), GLpath_157();
static Ptr GLpath_158(), GLpath_160(), GLpath_162(), GLpath_163();
static Ptr GLpath_165(), GLpath_166(), GLpath_167(), GLpath_169();
static Ptr GLpath_171(), GLpath_172(), GLpath_174(), GLpath_175();
static Ptr GLpath_177(), GLpath_179(), GLpath_181(), GLpath_183();
static Ptr GLpath_185(), GLpath_187(), GLpath_188(), GLpath_189();
static Ptr GLpath_190(), GLpath_192(), GLpath_193(), GLpath_195();
static Ptr GLpath_196(), GLpath_198(), GLpath_200(), GLpath_201();
static Ptr GLpath_202(), GLpath_204(), GLpath_205(), GLpath_207();
static Ptr GLpath_209(), GLpath_210(), GLpath_211(), GLpath_212();
static Ptr GLpath_213(), GLpath_215(), GLpath_217(), GLpath_218();
static Ptr GLpath_219(), GLpath_220(), GLpath_221(), GLpath_222();
static Ptr GLpath_223(), GLpath_224(), GLpath_226(), GLpath_227();
static Ptr GLpath_228(), GLpath_229(), GLpath_230(), GLpath_231();
static Ptr GLpath_232(), GLpath_233(), GLpath_235(), GLpath_236();
static Ptr GLpath_237(), GLpath_238(), GLpath_239(), GLpath_240();
static Ptr GLpath_241(), GLpath_242(), GLpath_243(), GLpath_245();
static Ptr GLpath_246(), GLpath_247(), GLpath_248(), GLpath_249();
static Ptr GLpath_250(), GLpath_251(), GLpath_252(), GLpath_253();
static Ptr GLpath_254(), GLpath_255(), GLpath_256(), GLpath_257();
static Ptr GLpath_258(), GLpath_260(), GLpath_261(), GLpath_262();
static Ptr GLpath_264(), GLpath_265(), GLpath_267(), GLpath_268();
static Ptr GLpath_270(), GLpath_271(), GLpath_273(), GLpath_274();
static Ptr GLpath_276(), GLpath_277(), GLpath_278(), GLpath_279();
static Ptr GLpath_280(), GLpath_281(), GLpath_282(), GLpath_283();
static Ptr GLpath_284(), GLpath_285(), GLpath_286(), GLpath_288();
static Ptr GLpath_289(), GLpath_293(), GLpath_294(), GLpath_296();
static Ptr GLpath_297(), GLpath_299(), GLpath_300(), GLpath_302();
static Ptr GLpath_303(), GLpath_304(), GLpath_306(), GLpath_307();
static Ptr GLpath_308(), GLpath_310(), GLpath_311(), GLpath_312();
static Ptr GLpath_313(), GLpath_314(), GLpath_315(), GLpath_317();
static Ptr GLpath_318(), GLpath_319(), GLpath_321(), GLpath_323();
static Ptr GLpath_325(), GLpath_326(), GLpath_328(), GLpath_330();
static Ptr GLpath_332(), GLpath_334(), GLpath_335(), GLpath_337();
static Ptr GLpath_339(), GLpath_341(), GLpath_342(), GLpath_345();
static Ptr GLpath_347(), GLpath_349(), GLpath_351(), GLpath_353();
static Ptr GLpath_355(), GLpath_357(), GLpath_359(), GLpath_361();
static Ptr GLpath_363(), GLpath_364(), GLpath_365(), GLpath_367();
static Ptr GLpath_369(), GLpath_370(), GLpath_372(), GLpath_373();
static Ptr GLpath_374(), GLpath_376(), GLpath_378(), GLpath_379();
static Ptr GLpath_380(), GLpath_381(), GLpath_382(), GLpath_384();
static Ptr GLpath_386(), GLpath_387(), GLpath_389(), GLpath_390();
static Ptr GLpath_391(), GLpath_392(), GLpath_394(), GLpath_396();
static Ptr GLpath_397(), GLpath_399(), GLpath_400(), GLpath_401();
static Ptr GLpath_402(), GLpath_404(), GLpath_406(), GLpath_407();
static Ptr GLpath_408(), GLpath_410(), GLpath_411(), GLpath_412();
static Ptr GLpath_414(), GLpath_415(), GLpath_416(), GLpath_417();
static Ptr GLpath_418(), GLpath_420(), GLpath_421(), GLpath_423();
static Ptr GLpath_425(), GLpath_427(), GLpath_428(), GLpath_429();
static Ptr GLpath_430(), GLpath_431(), GLpath_432(), GLpath_434();
static Ptr GLpath_435(), GLpath_437(), GLpath_439(), GLpath_440();
static Ptr GLpath_442(), GLpath_444(), GLpath_446(), GLpath_447();
static Ptr GLpath_448(), GLpath_450(), GLpath_451(), GLpath_453();
static Ptr GLpath_454(), GLpath_456(), GLpath_457(), GLpath_458();
static Ptr GLpath_459(), GLpath_461(), GLpath_462(), GLpath_464();
static Ptr GLpath_465(), GLpath_467(), GLpath_468(), GLpath_470();
static Ptr GLpath_472(), GLpath_474(), GLpath_476(), GLpath_477();
static Ptr GLpath_479(), GLpath_480(), GLpath_481(), GLpath_482();
static Ptr GLpath_484(), GLpath_485(), GLpath_487(), GLpath_489();
static Ptr GLpath_491(), GLpath_493(), GLpath_495(), GLpath_497();
static Ptr GLpath_498(), GLpath_499(), GLpath_501(), GLpath_502();
static Ptr GLpath_503(), GLpath_504(), GLpath_506(), GLpath_507();
static Ptr GLpath_509(), GLpath_510(), GLpath_511(), GLpath_512();
static Ptr GLpath_513(), GLpath_514(), GLpath_515(), GLpath_516();
static Ptr GLpath_518(), GLpath_520(), GLpath_521(), GLpath_522();
static Ptr GLpath_523(), GLpath_525(), GLpath_526(), GLpath_527();
static Ptr GLpath_528(), GLpath_529(), GLpath_530(), GLpath_532();
static Ptr GLpath_534(), GLpath_535(), GLpath_537(), GLpath_538();
static Ptr GLpath_540(), GLpath_541(), GLpath_543(), GLpath_545();
static Ptr GLpath_547(), GLpath_549(), GLpath_550(), GLpath_552();
static Ptr GLpath_553(), GLpath_555(), GLpath_557(), GLpath_558();
static Ptr GLpath_559(), GLpath_561(), GLpath_563(), GLpath_565();
static Ptr GLpath_567(), GLpath_568(), GLpath_570(), GLpath_572();
static Ptr GLpath_574(), GLpath_575(), GLpath_577(), GLpath_579();
static Ptr GLpath_580(), GLpath_582(), GLpath_583(), GLpath_584();
static Ptr GLpath_585(), GLpath_587(), GLpath_589(), GLpath_590();
static Ptr GLpath_592(), GLpath_594(), GLpath_595(), GLpath_596();
static Ptr GLpath_597(), GLpath_598(), GLpath_599(), GLpath_600();
static Ptr GLpath_602(), GLpath_603(), GLpath_604(), GLpath_605();
static Ptr GLpath_607(), GLpath_608(), GLpath_610(), GLpath_611();
static Ptr GLpath_612(), GLpath_613(), GLpath_614(), GLpath_615();
static Ptr GLpath_616(), GLpath_617(), GLpath_618(), GLpath_619();
static Ptr GLpath_620(), GLpath_621(), GLpath_623(), GLpath_624();
static Ptr GLpath_625(), GLpath_626(), GLpath_627(), GLpath_628();
static Ptr GLpath_629(), GLpath_630(), GLpath_632(), GLpath_633();
static Ptr GLpath_634(), GLpath_636(), GLpath_637(), GLpath_638();

/*      trace functions */
static Ptr GDpath_639(), GDpath_640(), GDpath_641(), GDpath_642();
static Ptr GDpath_643(), GDpath_644(), GDpath_645(), GDpath_646();
static Ptr GDpath_647(), GDpath_648(), GDpath_649(), GDpath_650();
static Ptr GDpath_651(), GDpath_652(), GDpath_653(), GDpath_654();
static Ptr GDpath_655(), GDpath_656(), GDpath_657(), GDpath_658();
static Ptr GDpath_659(), GDpath_660(), GDpath_661(), GDpath_662();
static Ptr GDpath_663(), GDpath_664(), GDpath_665(), GDpath_666();
static Ptr GDpath_667(), GDpath_668(), GDpath_669(), GDpath_670();
static Ptr GDpath_671(), GDpath_672(), GDpath_673(), GDpath_674();
static Ptr GDpath_675(), GDpath_676(), GDpath_677();

static Ptr GYpath[137];

static const char GNpath[] = "path";
static const char GTpath[] = "Wed June 16 93 18:00:53 ";

static struct GellEntry GWpath[] = {
        {GLpath_1,      GDpath_639,     1},     /* #:pathname:make */
        {GLpath_3,      GDpath_640,     2},     /* pathnamep */
        {GLpath_6,      GDpath_641,     2},     /* namestring */
        {GLpath_16,     GDpath_642,     2},     /* pathname-host */
        {GLpath_22,     GDpath_643,     2},     /* pathname-device */
        {GLpath_28,     GDpath_644,     2},     /* pathname-directory */
        {GLpath_34,     GDpath_645,     2},     /* pathname-name */
        {GLpath_40,     GDpath_646,     2},     /* pathname-type */
        {GLpath_46,     GDpath_647,     2},     /* pathname-version */
        {GLpath_52,     GDpath_648,     3},     /* set-pathname-host */
        {GLpath_55,     GDpath_649,     3},     /* set-pathname-device */
        {GLpath_58,     GDpath_650,     3},     /* set-pathname-directory */
        {GLpath_63,     GDpath_651,     3},     /* set-pathname-name */
        {GLpath_66,     GDpath_652,     3},     /* set-pathname-type */
        {GLpath_69,     GDpath_653,     3},     /* set-pathname-version */
        {GLpath_74,     GDpath_654,     2},     /* copy-pathname */
        {GLpath_79,     GDpath_655,     2},     /* pathname */
        {GLpath_87,     GDpath_656,     2},     /* #:unix:pathname */
        {GLpath_175,    GDpath_657,     3},     /* equal-pathname */
        {GLpath_188,    GDpath_658,     1},     /* user-homedir-pathname */
        {GLpath_190,    GDpath_659,     5},     /* control-file-pathname */
        {GLpath_211,    GDpath_660,     2},     /* temporary-file-pathname */
        {GLpath_255,    GDpath_661,     2},     /* portable-pathname-p */
        {GLpath_278,    GDpath_662,     2},     /* #:pathname:prin */
        {GLpath_289,    GDpath_663,     5},     /* make-pathname */
        {GLpath_294,    GDpath_664,     2},     /* file-namestring */
        {GLpath_297,    GDpath_665,     2},     /* directory-namestring */
        {GLpath_300,    GDpath_666,     2},     /* host-namestring */
        {GLpath_304,    GDpath_667,     2},     /* device-namestring */
        {GLpath_319,    GDpath_668,     3},     /* merge-pathnames */
        {GLpath_326,    GDpath_669,     3},     /* combine-pathnames */
        {GLpath_342,    GDpath_670,     5},     /* enough-namestring */
        {GLpath_364,    GDpath_671,     2},     /* true-pathname */
        {GLpath_390,    GDpath_672,     5},     /* current-directory */
        {GLpath_408,    GDpath_673,     2},     /* directoryp */
        {GLpath_447,    GDpath_674,     2},     /* expand-pathname */
        {GLpath_458,    GDpath_675,     3},     /* map-expand-pathname */
        {GLpath_633,    GDpath_676,     2},     /* wildcard */
        {GLpath_634,    GDpath_677,     2},     /* coerce-namestring */
};

struct GellModule GZpath = {
        GELLMODULESTAMP,
        GNpath,
        GTpath,
        GYpath,
        39,
        GWpath};
