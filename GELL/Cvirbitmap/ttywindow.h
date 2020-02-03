/* GELL 15.26: include file for the module: "ttywindow" */
/*             translation done:            "Tue Aug  24 93 10:49:29 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLttywindow_1(), GLttywindow_2(), GLttywindow_3(), GLttywindow_4();
static Ptr GLttywindow_5(), GLttywindow_6(), GLttywindow_7(), GLttywindow_8();
static Ptr GLttywindow_9(), GLttywindow_10(), GLttywindow_11(), GLttywindow_12();
static Ptr GLttywindow_13(), GLttywindow_14(), GLttywindow_15(), GLttywindow_16();
static Ptr GLttywindow_17(), GLttywindow_18(), GLttywindow_19(), GLttywindow_20();
static Ptr GLttywindow_21(), GLttywindow_22(), GLttywindow_23(), GLttywindow_24();
static Ptr GLttywindow_25(), GLttywindow_26(), GLttywindow_27(), GLttywindow_28();
static Ptr GLttywindow_30(), GLttywindow_32(), GLttywindow_34(), GLttywindow_36();
static Ptr GLttywindow_38(), GLttywindow_40(), GLttywindow_42(), GLttywindow_43();
static Ptr GLttywindow_45(), GLttywindow_46(), GLttywindow_48(), GLttywindow_49();
static Ptr GLttywindow_50(), GLttywindow_52(), GLttywindow_54(), GLttywindow_55();
static Ptr GLttywindow_56(), GLttywindow_57(), GLttywindow_58(), GLttywindow_60();
static Ptr GLttywindow_61(), GLttywindow_62(), GLttywindow_63(), GLttywindow_64();
static Ptr GLttywindow_65(), GLttywindow_67(), GLttywindow_69(), GLttywindow_71();
static Ptr GLttywindow_73(), GLttywindow_74(), GLttywindow_75(), GLttywindow_76();
static Ptr GLttywindow_77(), GLttywindow_78(), GLttywindow_79(), GLttywindow_80();
static Ptr GLttywindow_81(), GLttywindow_82(), GLttywindow_83(), GLttywindow_84();
static Ptr GLttywindow_85(), GLttywindow_87(), GLttywindow_88(), GLttywindow_89();
static Ptr GLttywindow_90(), GLttywindow_91(), GLttywindow_92(), GLttywindow_94();
static Ptr GLttywindow_95(), GLttywindow_97(), GLttywindow_99(), GLttywindow_100();
static Ptr GLttywindow_101(), GLttywindow_102(), GLttywindow_104(), GLttywindow_106();
static Ptr GLttywindow_107(), GLttywindow_108(), GLttywindow_109(), GLttywindow_110();
static Ptr GLttywindow_111(), GLttywindow_113(), GLttywindow_114(), GLttywindow_116();
static Ptr GLttywindow_117(), GLttywindow_118(), GLttywindow_119(), GLttywindow_120();
static Ptr GLttywindow_121(), GLttywindow_122(), GLttywindow_123(), GLttywindow_125();
static Ptr GLttywindow_126(), GLttywindow_128(), GLttywindow_129(), GLttywindow_131();
static Ptr GLttywindow_132(), GLttywindow_133(), GLttywindow_134(), GLttywindow_135();
static Ptr GLttywindow_136(), GLttywindow_137(), GLttywindow_138(), GLttywindow_140();
static Ptr GLttywindow_141(), GLttywindow_142(), GLttywindow_143(), GLttywindow_144();
static Ptr GLttywindow_145(), GLttywindow_146(), GLttywindow_147(), GLttywindow_149();
static Ptr GLttywindow_151(), GLttywindow_152(), GLttywindow_153(), GLttywindow_155();
static Ptr GLttywindow_156(), GLttywindow_158(), GLttywindow_159(), GLttywindow_160();
static Ptr GLttywindow_161(), GLttywindow_162(), GLttywindow_163(), GLttywindow_164();
static Ptr GLttywindow_165(), GLttywindow_166(), GLttywindow_167(), GLttywindow_168();
static Ptr GLttywindow_170(), GLttywindow_171(), GLttywindow_172(), GLttywindow_173();
static Ptr GLttywindow_175(), GLttywindow_176(), GLttywindow_178(), GLttywindow_180();
static Ptr GLttywindow_181(), GLttywindow_183(), GLttywindow_185(), GLttywindow_186();
static Ptr GLttywindow_188(), GLttywindow_189(), GLttywindow_190(), GLttywindow_191();
static Ptr GLttywindow_192();

/*      trace functions */
static Ptr GDttywindow_193(), GDttywindow_194(), GDttywindow_195(), GDttywindow_196();
static Ptr GDttywindow_197(), GDttywindow_198(), GDttywindow_199(), GDttywindow_200();
static Ptr GDttywindow_201(), GDttywindow_202(), GDttywindow_203(), GDttywindow_204();
static Ptr GDttywindow_205(), GDttywindow_206(), GDttywindow_207(), GDttywindow_208();
static Ptr GDttywindow_209(), GDttywindow_210(), GDttywindow_211(), GDttywindow_212();
static Ptr GDttywindow_213(), GDttywindow_214(), GDttywindow_215(), GDttywindow_216();
static Ptr GDttywindow_217(), GDttywindow_218(), GDttywindow_219(), GDttywindow_220();
static Ptr GDttywindow_221(), GDttywindow_222(), GDttywindow_223(), GDttywindow_224();
static Ptr GDttywindow_225(), GDttywindow_226(), GDttywindow_227(), GDttywindow_228();
static Ptr GDttywindow_229(), GDttywindow_230(), GDttywindow_231(), GDttywindow_232();
static Ptr GDttywindow_233(), GDttywindow_234(), GDttywindow_235(), GDttywindow_236();

static Ptr GYttywindow[105];

static const char GNttywindow[] = "ttywindow";
static const char GTttywindow[] = "Tue Aug  24 93 10:49:29 ";

static struct GellEntry GWttywindow[] = {
        {GLttywindow_1, GDttywindow_193,        1},     /* #:image:rectangle:window:tty:make */
        {GLttywindow_3, GDttywindow_194,        5},     /* #:image:rectangle:window:tty:x */
        {GLttywindow_4, GDttywindow_195,        5},     /* #:image:rectangle:window:tty:y */
        {GLttywindow_5, GDttywindow_196,        5},     /* #:image:rectangle:window:tty:w */
        {GLttywindow_6, GDttywindow_197,        5},     /* #:image:rectangle:window:tty:h */
        {GLttywindow_7, GDttywindow_198,        5},     /* #:image:rectangle:window:tty:title */
        {GLttywindow_8, GDttywindow_199,        5},     /* #:image:rectangle:window:tty:hilited
 */
        {GLttywindow_9, GDttywindow_200,        5},     /* #:image:rectangle:window:tty:visible
 */
        {GLttywindow_10,        GDttywindow_201,        5},     /* #:image:rectangle:window:tty:
graph-env */
        {GLttywindow_11,        GDttywindow_202,        5},     /* #:image:rectangle:window:tty:extend
 */
        {GLttywindow_12,        GDttywindow_203,        5},     /* #:image:rectangle:window:tty:father
 */
        {GLttywindow_13,        GDttywindow_204,        5},     /* #:image:rectangle:window:tty:
properties */
        {GLttywindow_14,        GDttywindow_205,        5},     /* #:image:rectangle:window:tty:cursor
 */
        {GLttywindow_15,        GDttywindow_206,        5},     /* #:image:rectangle:window:tty:display
 */
        {GLttywindow_16,        GDttywindow_207,        5},     /* #:image:rectangle:window:tty:
subwindows */
        {GLttywindow_17,        GDttywindow_208,        5},     /* #:image:rectangle:window:tty:
events-list */
        {GLttywindow_18,        GDttywindow_209,        5},     /* #:image:rectangle:window:tty:
window-type */
        {GLttywindow_19,        GDttywindow_210,        5},     /* #:image:rectangle:window:tty:
graphic-properties */
        {GLttywindow_20,        GDttywindow_211,        5},     /* #:image:rectangle:window:tty:state
 */
        {GLttywindow_21,        GDttywindow_212,        5},     /* #:image:rectangle:window:tty:cx */
        {GLttywindow_22,        GDttywindow_213,        5},     /* #:image:rectangle:window:tty:cy */
        {GLttywindow_23,        GDttywindow_214,        5},     /* #:image:rectangle:window:tty:lmargin
 */
        {GLttywindow_24,        GDttywindow_215,        5},     /* #:image:rectangle:window:tty:rmargin
 */
        {GLttywindow_25,        GDttywindow_216,        5},     /* #:image:rectangle:window:tty:
tyshowcursor */
        {GLttywindow_26,        GDttywindow_217,        5},     /* #:image:rectangle:window:tty:tty */
        {GLttywindow_27,        GDttywindow_218,        5},     /* #:image:rectangle:window:tty:itsoft
 */
        {GLttywindow_28,        GDttywindow_219,        5},     /* #:image:rectangle:window:tty:create
 */
        {GLttywindow_43,        GDttywindow_220,        2},     /* #:image:rectangle:window:tty:
current-window */
        {GLttywindow_50,        GDttywindow_221,        2},     /* #:image:rectangle:window:tty:
uncurrent-window */
        {GLttywindow_61,        GDttywindow_222,        5},     /* #:image:rectangle:window:tty:
modify-window */
        {GLttywindow_77,        GDttywindow_223,        2},     /* #:tty:window:tycn */
        {GLttywindow_78,        GDttywindow_224,        3},     /* #:tty:window:tystring */
        {GLttywindow_88,        GDttywindow_225,        1},     /* #:tty:window:tynewline */
        {GLttywindow_135,       GDttywindow_226,        2},     /* #:tty:window:tybs */
        {GLttywindow_141,       GDttywindow_227,        1},     /* #:tty:window:tycr */
        {GLttywindow_143,       GDttywindow_228,        1},     /* #:tty:window:tycleol */
        {GLttywindow_152,       GDttywindow_229,        1},     /* #:tty:window:tycls */
        {GLttywindow_153,       GDttywindow_230,        2},     /* #:tty:window:tyattrib */
        {GLttywindow_156,       GDttywindow_231,        1},     /* #:tty:window:tyi */
        {GLttywindow_168,       GDttywindow_232,        1},     /* #:tty:window:tys */
        {GLttywindow_173,       GDttywindow_233,        3},     /* #:tty:window:tycursor */
        {GLttywindow_186,       GDttywindow_234,        2},     /* #:tty:window:tyback */
        {GLttywindow_191,       GDttywindow_235,        2},     /* #:tty:window:tydelcn */
        {GLttywindow_192,       GDttywindow_236,        2},     /* #:tty:window:tyinscn */
};

struct GellModule GZttywindow = {
        GELLMODULESTAMP,
        GNttywindow,
        GTttywindow,
        GYttywindow,
        44,
        GWttywindow};
