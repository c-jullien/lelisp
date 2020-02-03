/* GELL 15.26: include file for the module: "virbit" */
/*             translation done:            "Tue Aug  24 93 10:48:50 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLvirbit_1(), GLvirbit_3(), GLvirbit_4(), GLvirbit_5();
static Ptr GLvirbit_7(), GLvirbit_8(), GLvirbit_9(), GLvirbit_12();
static Ptr GLvirbit_14(), GLvirbit_16(), GLvirbit_17(), GLvirbit_19();
static Ptr GLvirbit_21(), GLvirbit_23(), GLvirbit_24(), GLvirbit_25();
static Ptr GLvirbit_27(), GLvirbit_29(), GLvirbit_30(), GLvirbit_31();
static Ptr GLvirbit_33(), GLvirbit_34(), GLvirbit_36(), GLvirbit_37();
static Ptr GLvirbit_39(), GLvirbit_40(), GLvirbit_42(), GLvirbit_43();
static Ptr GLvirbit_45(), GLvirbit_46(), GLvirbit_48(), GLvirbit_49();
static Ptr GLvirbit_51(), GLvirbit_53(), GLvirbit_54(), GLvirbit_55();
static Ptr GLvirbit_56(), GLvirbit_57(), GLvirbit_60(), GLvirbit_62();
static Ptr GLvirbit_63(), GLvirbit_64(), GLvirbit_66(), GLvirbit_68();
static Ptr GLvirbit_69(), GLvirbit_71(), GLvirbit_72(), GLvirbit_75();
static Ptr GLvirbit_77(), GLvirbit_78(), GLvirbit_79(), GLvirbit_81();
static Ptr GLvirbit_82(), GLvirbit_83(), GLvirbit_85(), GLvirbit_86();
static Ptr GLvirbit_87(), GLvirbit_88(), GLvirbit_89(), GLvirbit_90();
static Ptr GLvirbit_91(), GLvirbit_92(), GLvirbit_93(), GLvirbit_94();
static Ptr GLvirbit_96(), GLvirbit_97(), GLvirbit_98(), GLvirbit_99();
static Ptr GLvirbit_100(), GLvirbit_102(), GLvirbit_103(), GLvirbit_104();
static Ptr GLvirbit_105(), GLvirbit_107(), GLvirbit_108(), GLvirbit_110();
static Ptr GLvirbit_111(), GLvirbit_113(), GLvirbit_114(), GLvirbit_115();
static Ptr GLvirbit_117(), GLvirbit_118(), GLvirbit_121(), GLvirbit_122();
static Ptr GLvirbit_124(), GLvirbit_126(), GLvirbit_128(), GLvirbit_129();
static Ptr GLvirbit_130(), GLvirbit_131(), GLvirbit_132(), GLvirbit_133();
static Ptr GLvirbit_134(), GLvirbit_135(), GLvirbit_136(), GLvirbit_137();
static Ptr GLvirbit_139(), GLvirbit_140(), GLvirbit_141(), GLvirbit_142();
static Ptr GLvirbit_143(), GLvirbit_144(), GLvirbit_145(), GLvirbit_146();
static Ptr GLvirbit_147(), GLvirbit_148(), GLvirbit_149(), GLvirbit_150();
static Ptr GLvirbit_151(), GLvirbit_154(), GLvirbit_155(), GLvirbit_157();
static Ptr GLvirbit_158(), GLvirbit_159(), GLvirbit_161(), GLvirbit_162();
static Ptr GLvirbit_163(), GLvirbit_164(), GLvirbit_165(), GLvirbit_166();
static Ptr GLvirbit_167(), GLvirbit_168(), GLvirbit_169(), GLvirbit_170();
static Ptr GLvirbit_171(), GLvirbit_172(), GLvirbit_173(), GLvirbit_174();
static Ptr GLvirbit_176(), GLvirbit_177(), GLvirbit_178(), GLvirbit_180();
static Ptr GLvirbit_182(), GLvirbit_183(), GLvirbit_185(), GLvirbit_187();
static Ptr GLvirbit_188(), GLvirbit_189(), GLvirbit_190(), GLvirbit_192();
static Ptr GLvirbit_194(), GLvirbit_195(), GLvirbit_197(), GLvirbit_199();
static Ptr GLvirbit_201(), GLvirbit_203(), GLvirbit_204(), GLvirbit_205();
static Ptr GLvirbit_206(), GLvirbit_208(), GLvirbit_210(), GLvirbit_211();
static Ptr GLvirbit_213(), GLvirbit_215(), GLvirbit_217(), GLvirbit_219();
static Ptr GLvirbit_220(), GLvirbit_221(), GLvirbit_222(), GLvirbit_223();
static Ptr GLvirbit_224(), GLvirbit_225(), GLvirbit_226(), GLvirbit_228();
static Ptr GLvirbit_229(), GLvirbit_230(), GLvirbit_231(), GLvirbit_232();
static Ptr GLvirbit_233(), GLvirbit_234(), GLvirbit_236(), GLvirbit_237();
static Ptr GLvirbit_238(), GLvirbit_239(), GLvirbit_240(), GLvirbit_241();
static Ptr GLvirbit_242(), GLvirbit_243(), GLvirbit_244(), GLvirbit_245();
static Ptr GLvirbit_246(), GLvirbit_247(), GLvirbit_248(), GLvirbit_249();
static Ptr GLvirbit_251(), GLvirbit_253(), GLvirbit_254(), GLvirbit_255();
static Ptr GLvirbit_256(), GLvirbit_257(), GLvirbit_259(), GLvirbit_260();
static Ptr GLvirbit_261(), GLvirbit_262(), GLvirbit_263(), GLvirbit_264();
static Ptr GLvirbit_265(), GLvirbit_266(), GLvirbit_267(), GLvirbit_268();
static Ptr GLvirbit_269(), GLvirbit_270(), GLvirbit_271(), GLvirbit_272();
static Ptr GLvirbit_273(), GLvirbit_274(), GLvirbit_275(), GLvirbit_276();
static Ptr GLvirbit_278(), GLvirbit_280(), GLvirbit_281(), GLvirbit_282();
static Ptr GLvirbit_283(), GLvirbit_284(), GLvirbit_285(), GLvirbit_287();
static Ptr GLvirbit_288(), GLvirbit_289(), GLvirbit_290(), GLvirbit_291();
static Ptr GLvirbit_292(), GLvirbit_293(), GLvirbit_294(), GLvirbit_295();
static Ptr GLvirbit_296(), GLvirbit_297(), GLvirbit_298(), GLvirbit_299();
static Ptr GLvirbit_300(), GLvirbit_301(), GLvirbit_302(), GLvirbit_303();
static Ptr GLvirbit_304(), GLvirbit_305(), GLvirbit_306(), GLvirbit_307();
static Ptr GLvirbit_308(), GLvirbit_309(), GLvirbit_310(), GLvirbit_311();
static Ptr GLvirbit_312(), GLvirbit_313(), GLvirbit_314(), GLvirbit_315();
static Ptr GLvirbit_316(), GLvirbit_317(), GLvirbit_318(), GLvirbit_319();
static Ptr GLvirbit_320(), GLvirbit_322(), GLvirbit_323(), GLvirbit_324();
static Ptr GLvirbit_325(), GLvirbit_327(), GLvirbit_328(), GLvirbit_329();
static Ptr GLvirbit_330(), GLvirbit_331(), GLvirbit_332(), GLvirbit_333();
static Ptr GLvirbit_335(), GLvirbit_336(), GLvirbit_338(), GLvirbit_339();
static Ptr GLvirbit_341(), GLvirbit_342(), GLvirbit_343(), GLvirbit_344();
static Ptr GLvirbit_346(), GLvirbit_348(), GLvirbit_349(), GLvirbit_350();
static Ptr GLvirbit_352(), GLvirbit_354(), GLvirbit_356(), GLvirbit_357();
static Ptr GLvirbit_358(), GLvirbit_359(), GLvirbit_360(), GLvirbit_361();

/*      trace functions */
static Ptr GDvirbit_362(), GDvirbit_363(), GDvirbit_364(), GDvirbit_365();
static Ptr GDvirbit_366(), GDvirbit_367(), GDvirbit_368(), GDvirbit_369();
static Ptr GDvirbit_370(), GDvirbit_371(), GDvirbit_372(), GDvirbit_373();
static Ptr GDvirbit_374(), GDvirbit_375(), GDvirbit_376(), GDvirbit_377();
static Ptr GDvirbit_378(), GDvirbit_379(), GDvirbit_380(), GDvirbit_381();
static Ptr GDvirbit_382();

static Ptr GYvirbit[130];

static const char GNvirbit[] = "virbit";
static const char GTvirbit[] = "Tue Aug  24 93 10:48:50 ";

static struct GellEntry GWvirbit[] = {
        {GLvirbit_9,    GDvirbit_362,   5},     /* create-bitmap */
        {GLvirbit_17,   GDvirbit_363,   3},     /* bitmap-prologue */
        {GLvirbit_25,   GDvirbit_364,   2},     /* window-bitmap */
        {GLvirbit_31,   GDvirbit_365,   2},     /* kill-bitmap */
        {GLvirbit_37,   GDvirbit_366,   4},     /* bmref */
        {GLvirbit_40,   GDvirbit_367,   5},     /* bmset */
        {GLvirbit_43,   GDvirbit_368,   4},     /* byteref */
        {GLvirbit_46,   GDvirbit_369,   5},     /* byteset */
        {GLvirbit_49,   GDvirbit_370,   5},     /* bitblit */
        {GLvirbit_57,   GDvirbit_371,   5},     /* #:sharp:* */
        {GLvirbit_60,   GDvirbit_372,   1},     /* #:sharp:B */
        {GLvirbit_72,   GDvirbit_373,   5},     /* #:bitmap:bits */
        {GLvirbit_118,  GDvirbit_374,   5},     /* create-bytemap */
        {GLvirbit_151,  GDvirbit_375,   5},     /* #:bitmap:bytes */
        {GLvirbit_173,  GDvirbit_376,   3},     /* #:bitvector:read */
        {GLvirbit_221,  GDvirbit_377,   2},     /* #:bitvector:prin */
        {GLvirbit_242,  GDvirbit_378,   2},     /* #:bitmap:prin */
        {GLvirbit_267,  GDvirbit_379,   2},     /* #:bitmap:bytemap:prin */
        {GLvirbit_343,  GDvirbit_380,   4},     /* substitute-color */
        {GLvirbit_344,  GDvirbit_381,   3},     /* subst-colors */
        {GLvirbit_361,  GDvirbit_382,   4},     /* #:display:subst-colors */
};

struct GellModule GZvirbit = {
        GELLMODULESTAMP,
        GNvirbit,
        GTvirbit,
        GYvirbit,
        21,
        GWvirbit};
