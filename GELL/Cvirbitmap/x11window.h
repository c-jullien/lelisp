/* GELL 15.26: include file for the module: "x11window" */
/*             translation done:            "Tue Aug  24 93 10:48:39 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLx11window_1(), GLx11window_3(), GLx11window_4(), GLx11window_6();
static Ptr GLx11window_7(), GLx11window_9(), GLx11window_10(), GLx11window_11();
static Ptr GLx11window_12(), GLx11window_13(), GLx11window_14(), GLx11window_15();
static Ptr GLx11window_16(), GLx11window_17(), GLx11window_18(), GLx11window_20();
static Ptr GLx11window_21(), GLx11window_22(), GLx11window_24(), GLx11window_25();
static Ptr GLx11window_26(), GLx11window_28(), GLx11window_30(), GLx11window_31();
static Ptr GLx11window_32(), GLx11window_34(), GLx11window_35(), GLx11window_36();
static Ptr GLx11window_38(), GLx11window_39(), GLx11window_40(), GLx11window_41();
static Ptr GLx11window_42(), GLx11window_43(), GLx11window_44(), GLx11window_46();
static Ptr GLx11window_48(), GLx11window_49(), GLx11window_50(), GLx11window_52();
static Ptr GLx11window_53(), GLx11window_54(), GLx11window_56(), GLx11window_57();
static Ptr GLx11window_58(), GLx11window_60(), GLx11window_61(), GLx11window_63();
static Ptr GLx11window_64(), GLx11window_66(), GLx11window_67(), GLx11window_69();
static Ptr GLx11window_70(), GLx11window_72(), GLx11window_73(), GLx11window_74();
static Ptr GLx11window_76(), GLx11window_77(), GLx11window_78(), GLx11window_79();
static Ptr GLx11window_80(), GLx11window_81(), GLx11window_82(), GLx11window_83();
static Ptr GLx11window_84(), GLx11window_86(), GLx11window_87(), GLx11window_89();
static Ptr GLx11window_91(), GLx11window_92(), GLx11window_93(), GLx11window_95();
static Ptr GLx11window_96(), GLx11window_98(), GLx11window_100(), GLx11window_102();
static Ptr GLx11window_104(), GLx11window_105(), GLx11window_106(), GLx11window_107();
static Ptr GLx11window_108(), GLx11window_109(), GLx11window_110(), GLx11window_111();
static Ptr GLx11window_112(), GLx11window_113(), GLx11window_114(), GLx11window_115();
static Ptr GLx11window_116(), GLx11window_117(), GLx11window_118(), GLx11window_119();
static Ptr GLx11window_120(), GLx11window_121(), GLx11window_122(), GLx11window_123();
static Ptr GLx11window_124(), GLx11window_125(), GLx11window_126(), GLx11window_127();
static Ptr GLx11window_128(), GLx11window_129(), GLx11window_130(), GLx11window_131();
static Ptr GLx11window_132(), GLx11window_134(), GLx11window_135(), GLx11window_136();
static Ptr GLx11window_138(), GLx11window_140(), GLx11window_142(), GLx11window_144();
static Ptr GLx11window_145(), GLx11window_146(), GLx11window_147(), GLx11window_148();
static Ptr GLx11window_149(), GLx11window_150(), GLx11window_151(), GLx11window_152();
static Ptr GLx11window_153(), GLx11window_154(), GLx11window_155(), GLx11window_156();
static Ptr GLx11window_157(), GLx11window_158(), GLx11window_160(), GLx11window_161();
static Ptr GLx11window_162(), GLx11window_163(), GLx11window_164(), GLx11window_166();
static Ptr GLx11window_167(), GLx11window_169(), GLx11window_170(), GLx11window_171();
static Ptr GLx11window_172(), GLx11window_173(), GLx11window_174(), GLx11window_175();
static Ptr GLx11window_176(), GLx11window_177(), GLx11window_178(), GLx11window_179();
static Ptr GLx11window_180(), GLx11window_181(), GLx11window_182(), GLx11window_183();
static Ptr GLx11window_184(), GLx11window_186(), GLx11window_188(), GLx11window_189();
static Ptr GLx11window_191(), GLx11window_192(), GLx11window_193(), GLx11window_194();
static Ptr GLx11window_195(), GLx11window_196(), GLx11window_197(), GLx11window_198();
static Ptr GLx11window_199(), GLx11window_200(), GLx11window_202(), GLx11window_204();
static Ptr GLx11window_205(), GLx11window_206(), GLx11window_208(), GLx11window_210();

/*      trace functions */
static Ptr GDx11window_211(), GDx11window_212(), GDx11window_213(), GDx11window_214();
static Ptr GDx11window_215(), GDx11window_216(), GDx11window_217(), GDx11window_218();
static Ptr GDx11window_219(), GDx11window_220(), GDx11window_221(), GDx11window_222();
static Ptr GDx11window_223(), GDx11window_224(), GDx11window_225(), GDx11window_226();
static Ptr GDx11window_227(), GDx11window_228(), GDx11window_229(), GDx11window_230();
static Ptr GDx11window_231(), GDx11window_232(), GDx11window_233(), GDx11window_234();
static Ptr GDx11window_235(), GDx11window_236(), GDx11window_237(), GDx11window_238();
static Ptr GDx11window_239(), GDx11window_240(), GDx11window_241(), GDx11window_242();
static Ptr GDx11window_243(), GDx11window_244(), GDx11window_245(), GDx11window_246();
static Ptr GDx11window_247(), GDx11window_248(), GDx11window_249(), GDx11window_250();
static Ptr GDx11window_251(), GDx11window_252(), GDx11window_253(), GDx11window_254();

static Ptr GYx11window[116];

static const char GNx11window[] = "x11window";
static const char GTx11window[] = "Tue Aug  24 93 10:48:39 ";

static struct GellEntry GWx11window[] = {
        {GLx11window_1, GDx11window_211,        3},     /* #:display:x11:kill-window */
        {GLx11window_4, GDx11window_212,        3},     /* #:display:x11:pop-window */
        {GLx11window_7, GDx11window_213,        4},     /* #:display:x11:move-behind-window */
        {GLx11window_10,        GDx11window_214,        3},     /* #:display:x11:
current-keyboard-focus-window */
        {GLx11window_11,        GDx11window_215,        3},     /* #:display:x11:
uncurrent-keyboard-focus-window */
        {GLx11window_12,        GDx11window_216,        4},     /* #:display:x11:find-window */
        {GLx11window_13,        GDx11window_217,        5},     /* #:display:x11:map-window */
        {GLx11window_15,        GDx11window_218,        2},     /* #:image:rectangle:window:
set-window-hints */
        {GLx11window_16,        GDx11window_219,        2},     /* #:image:rectangle:window:
modify-window-hints */
        {GLx11window_25,        GDx11window_220,        3},     /* #:display:x11:create-window */
        {GLx11window_39,        GDx11window_221,        3},     /* #:display:x11:create-subwindow */
        {GLx11window_78,        GDx11window_222,        3},     /* #:display:x11:current-window */
        {GLx11window_80,        GDx11window_223,        3},     /* #:tclass:x11window:
transparent-window:is-visible */
        {GLx11window_81,        GDx11window_224,        3},     /* #:tclass:x11window:is-visible */
        {GLx11window_82,        GDx11window_225,        3},     /* #:display:x11:uncurrent-window */
        {GLx11window_83,        GDx11window_226,        3},     /* #:display:x11:x11-create-graph-env
 */
        {GLx11window_106,       GDx11window_227,        2},     /* #:image:rectangle:window:woffset-x
 */
        {GLx11window_107,       GDx11window_228,        2},     /* #:image:rectangle:window:woffset-y
 */
        {GLx11window_108,       GDx11window_229,        3},     /* #:tclass:x11window:woffset-x */
        {GLx11window_109,       GDx11window_230,        3},     /* #:tclass:x11window:woffset-y */
        {GLx11window_110,       GDx11window_231,        3},     /* #:tclass:x11window:
transparent-window:woffset-x */
        {GLx11window_111,       GDx11window_232,        3},     /* #:tclass:x11window:
transparent-window:woffset-y */
        {GLx11window_125,       GDx11window_233,        3},     /* #:display:x11:clear-graph-env */
        {GLx11window_150,       GDx11window_234,        5},     /* #:display:x11:current-clip */
        {GLx11window_153,       GDx11window_235,        5},     /* #:display:x11:
set-clip-for-subwindows */
        {GLx11window_154,       GDx11window_236,        5},     /* #:display:x11:modify-window */
        {GLx11window_164,       GDx11window_237,        3},     /* #:display:x11:window-map */
        {GLx11window_167,       GDx11window_238,        3},     /* #:display:x11:window-unmap */
        {GLx11window_170,       GDx11window_239,        5},     /* #:display:x11:update-window */
        {GLx11window_173,       GDx11window_240,        5},     /* #:display:x11:window-clear-region
 */
        {GLx11window_175,       GDx11window_241,        4},     /* #:display:x11:window-background */
        {GLx11window_177,       GDx11window_242,        4},     /* #:display:x11:window-border */
        {GLx11window_179,       GDx11window_243,        4},     /* #:display:x11:set-border-color */
        {GLx11window_181,       GDx11window_244,        5},     /* #:display:x11:move-window */
        {GLx11window_182,       GDx11window_245,        5},     /* #:display:x11:resize-window */
        {GLx11window_183,       GDx11window_246,        5},     /* #:display:x11:move-resize-window */
        {GLx11window_184,       GDx11window_247,        4},     /* #:display:x11:window-events-list */
        {GLx11window_189,       GDx11window_248,        4},     /* #:display:x11:window-title */
        {GLx11window_193,       GDx11window_249,        4},     /* #:display:x11:set-icontitle */
        {GLx11window_194,       GDx11window_250,        4},     /* #:display:x11:set-icon-window */
        {GLx11window_195,       GDx11window_251,        4},     /* #:display:x11:set-window-bitmap */
        {GLx11window_196,       GDx11window_252,        4},     /* #:display:x11:window-state */
        {GLx11window_200,       GDx11window_253,        3},     /* #:display:x11:bitmap-to-window */
        {GLx11window_205,       GDx11window_254,        5},     /* #:display:x11:
window-change-attributes */
};

struct GellModule GZx11window = {
        GELLMODULESTAMP,
        GNx11window,
        GTx11window,
        GYx11window,
        44,
        GWx11window};
