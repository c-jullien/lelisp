/* GELL 15.26: include file for the module: "x11init" */
/*             translation done:            "Tue Aug  24 93 10:48:29 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLx11init_1(), GLx11init_2(), GLx11init_3(), GLx11init_4();
static Ptr GLx11init_5(), GLx11init_7(), GLx11init_8(), GLx11init_9();
static Ptr GLx11init_10(), GLx11init_11(), GLx11init_12(), GLx11init_13();
static Ptr GLx11init_14(), GLx11init_16(), GLx11init_18(), GLx11init_19();
static Ptr GLx11init_21(), GLx11init_22(), GLx11init_24(), GLx11init_25();
static Ptr GLx11init_26(), GLx11init_27(), GLx11init_28(), GLx11init_29();
static Ptr GLx11init_30(), GLx11init_32(), GLx11init_33(), GLx11init_34();
static Ptr GLx11init_35(), GLx11init_36(), GLx11init_38(), GLx11init_39();
static Ptr GLx11init_41(), GLx11init_42(), GLx11init_44(), GLx11init_45();
static Ptr GLx11init_47(), GLx11init_49(), GLx11init_50(), GLx11init_52();
static Ptr GLx11init_53(), GLx11init_55(), GLx11init_57(), GLx11init_58();
static Ptr GLx11init_60(), GLx11init_61(), GLx11init_62(), GLx11init_63();
static Ptr GLx11init_64(), GLx11init_65(), GLx11init_66(), GLx11init_67();
static Ptr GLx11init_68(), GLx11init_70(), GLx11init_71(), GLx11init_72();
static Ptr GLx11init_74(), GLx11init_76(), GLx11init_77(), GLx11init_78();
static Ptr GLx11init_79(), GLx11init_80(), GLx11init_81(), GLx11init_82();
static Ptr GLx11init_83(), GLx11init_84(), GLx11init_85(), GLx11init_86();
static Ptr GLx11init_87(), GLx11init_88(), GLx11init_89(), GLx11init_90();
static Ptr GLx11init_91(), GLx11init_92(), GLx11init_93(), GLx11init_94();
static Ptr GLx11init_96(), GLx11init_97(), GLx11init_98(), GLx11init_99();
static Ptr GLx11init_100(), GLx11init_101(), GLx11init_102(), GLx11init_103();
static Ptr GLx11init_104(), GLx11init_105(), GLx11init_107(), GLx11init_108();
static Ptr GLx11init_110(), GLx11init_112(), GLx11init_114(), GLx11init_116();
static Ptr GLx11init_118(), GLx11init_120(), GLx11init_122(), GLx11init_123();
static Ptr GLx11init_124(), GLx11init_126(), GLx11init_128(), GLx11init_130();
static Ptr GLx11init_132(), GLx11init_133(), GLx11init_135(), GLx11init_136();
static Ptr GLx11init_138(), GLx11init_139(), GLx11init_141(), GLx11init_142();
static Ptr GLx11init_143(), GLx11init_144(), GLx11init_145(), GLx11init_146();
static Ptr GLx11init_147(), GLx11init_148(), GLx11init_149(), GLx11init_150();
static Ptr GLx11init_152(), GLx11init_154(), GLx11init_155(), GLx11init_156();
static Ptr GLx11init_158(), GLx11init_160(), GLx11init_162(), GLx11init_164();
static Ptr GLx11init_166(), GLx11init_167(), GLx11init_169(), GLx11init_171();
static Ptr GLx11init_172(), GLx11init_174(), GLx11init_176(), GLx11init_177();
static Ptr GLx11init_179(), GLx11init_181(), GLx11init_183(), GLx11init_185();
static Ptr GLx11init_186(), GLx11init_190(), GLx11init_192(), GLx11init_194();
static Ptr GLx11init_196(), GLx11init_198(), GLx11init_200(), GLx11init_201();
static Ptr GLx11init_202(), GLx11init_203(), GLx11init_204(), GLx11init_206();
static Ptr GLx11init_207(), GLx11init_209(), GLx11init_211(), GLx11init_212();
static Ptr GLx11init_214(), GLx11init_215(), GLx11init_217();

/*      trace functions */
static Ptr GDx11init_218(), GDx11init_219(), GDx11init_220(), GDx11init_221();
static Ptr GDx11init_222(), GDx11init_223(), GDx11init_224(), GDx11init_225();
static Ptr GDx11init_226(), GDx11init_227(), GDx11init_228(), GDx11init_229();
static Ptr GDx11init_230(), GDx11init_231(), GDx11init_232(), GDx11init_233();
static Ptr GDx11init_234(), GDx11init_235(), GDx11init_236(), GDx11init_237();
static Ptr GDx11init_238(), GDx11init_239(), GDx11init_240(), GDx11init_241();
static Ptr GDx11init_242(), GDx11init_243(), GDx11init_244(), GDx11init_245();
static Ptr GDx11init_246(), GDx11init_247(), GDx11init_248(), GDx11init_249();
static Ptr GDx11init_250(), GDx11init_251(), GDx11init_252(), GDx11init_253();

static Ptr GYx11init[205];

static const char GNx11init[] = "x11init";
static const char GTx11init[] = "Tue Aug  24 93 10:48:29 ";

static struct GellEntry GWx11init[] = {
        {GLx11init_1,   GDx11init_218,  5},     /* current-application-name */
        {GLx11init_2,   GDx11init_219,  5},     /* current-application-class */
        {GLx11init_3,   GDx11init_220,  1},     /* #:display:x11:get-app-name */
        {GLx11init_4,   GDx11init_221,  1},     /* #:display:x11:get-app-class */
        {GLx11init_5,   GDx11init_222,  2},     /* #:display:x11:bitprologue */
        {GLx11init_63,  GDx11init_223,  2},     /* #:display:x11:bitepilogue */
        {GLx11init_77,  GDx11init_224,  2},     /* #:display:x11:bitmap-save */
        {GLx11init_78,  GDx11init_225,  2},     /* #:display:x11:bitmap-restore */
        {GLx11init_79,  GDx11init_226,  2},     /* #:display:x11:bitmap-refresh */
        {GLx11init_80,  GDx11init_227,  2},     /* #:display:x11:bitmap-flush */
        {GLx11init_81,  GDx11init_228,  2},     /* #:display:x11:bitmap-sync */
        {GLx11init_82,  GDx11init_229,  2},     /* #:display:x11:standard-roman-font */
        {GLx11init_83,  GDx11init_230,  2},     /* #:display:x11:standard-bold-font */
        {GLx11init_84,  GDx11init_231,  2},     /* #:display:x11:small-roman-font */
        {GLx11init_85,  GDx11init_232,  2},     /* #:display:x11:large-roman-font */
        {GLx11init_86,  GDx11init_233,  2},     /* #:display:x11:
standard-background-pattern */
        {GLx11init_87,  GDx11init_234,  2},     /* #:display:x11:
standard-foreground-pattern */
        {GLx11init_88,  GDx11init_235,  2},     /* #:display:x11:
standard-medium-gray-pattern */
        {GLx11init_89,  GDx11init_236,  2},     /* #:display:x11:
standard-light-gray-pattern */
        {GLx11init_90,  GDx11init_237,  2},     /* #:display:x11:standard-dark-gray-pattern
 */
        {GLx11init_91,  GDx11init_238,  2},     /* #:display:x11:standard-lelisp-cursor */
        {GLx11init_92,  GDx11init_239,  2},     /* #:display:x11:standard-gc-cursor */
        {GLx11init_93,  GDx11init_240,  2},     /* #:display:x11:standard-busy-cursor */
        {GLx11init_94,  GDx11init_241,  3},     /* #:display:x11:xerror */
        {GLx11init_100, GDx11init_242,  1},     /* #:display:x11:xioerror */
        {GLx11init_124, GDx11init_243,  2},     /* #:display:x11:init-font */
        {GLx11init_133, GDx11init_244,  4},     /* #:display:x11:add-a-font */
        {GLx11init_142, GDx11init_245,  2},     /* #:display:x11:init-line-style */
        {GLx11init_145, GDx11init_246,  2},     /* #:display:x11:init-pattern */
        {GLx11init_150, GDx11init_247,  5},     /* #:display:x11:add-a-pattern */
        {GLx11init_156, GDx11init_248,  2},     /* #:display:x11:init-cursor */
        {GLx11init_186, GDx11init_249,  5},     /* #:display:x11:synchronize */
        {GLx11init_202, GDx11init_250,  3},     /* #:display:x11:store-selection */
        {GLx11init_203, GDx11init_251,  2},     /* #:display:x11:get-selection */
        {GLx11init_212, GDx11init_252,  2},     /* #:display:x11:display-depth */
        {GLx11init_215, GDx11init_253,  2},     /* #:display:x11:get-xdisplay */
};

struct GellModule GZx11init = {
        GELLMODULESTAMP,
        GNx11init,
        GTx11init,
        GYx11init,
        36,
        GWx11init};
