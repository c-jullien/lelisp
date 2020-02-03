/* GELL 15.26: include file for the module: "virbitmap" */
/*             translation done:            "Tue Aug  24 93 10:49:23 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLvirbitmap_1(), GLvirbitmap_2(), GLvirbitmap_3(), GLvirbitmap_4();
static Ptr GLvirbitmap_5(), GLvirbitmap_6(), GLvirbitmap_7(), GLvirbitmap_8();
static Ptr GLvirbitmap_9(), GLvirbitmap_10(), GLvirbitmap_11(), GLvirbitmap_12();
static Ptr GLvirbitmap_13(), GLvirbitmap_14(), GLvirbitmap_15(), GLvirbitmap_16();
static Ptr GLvirbitmap_17(), GLvirbitmap_18(), GLvirbitmap_19(), GLvirbitmap_20();
static Ptr GLvirbitmap_21(), GLvirbitmap_22(), GLvirbitmap_23(), GLvirbitmap_24();
static Ptr GLvirbitmap_25(), GLvirbitmap_26(), GLvirbitmap_27(), GLvirbitmap_28();
static Ptr GLvirbitmap_29(), GLvirbitmap_30(), GLvirbitmap_31(), GLvirbitmap_32();
static Ptr GLvirbitmap_33(), GLvirbitmap_34(), GLvirbitmap_35(), GLvirbitmap_36();
static Ptr GLvirbitmap_37(), GLvirbitmap_38(), GLvirbitmap_39(), GLvirbitmap_40();
static Ptr GLvirbitmap_41(), GLvirbitmap_42(), GLvirbitmap_43(), GLvirbitmap_44();
static Ptr GLvirbitmap_45(), GLvirbitmap_46(), GLvirbitmap_47(), GLvirbitmap_48();
static Ptr GLvirbitmap_49(), GLvirbitmap_50(), GLvirbitmap_51(), GLvirbitmap_52();
static Ptr GLvirbitmap_53(), GLvirbitmap_54(), GLvirbitmap_55(), GLvirbitmap_56();
static Ptr GLvirbitmap_57(), GLvirbitmap_58(), GLvirbitmap_59(), GLvirbitmap_60();
static Ptr GLvirbitmap_61(), GLvirbitmap_62(), GLvirbitmap_63(), GLvirbitmap_64();
static Ptr GLvirbitmap_65(), GLvirbitmap_66(), GLvirbitmap_67(), GLvirbitmap_68();
static Ptr GLvirbitmap_69(), GLvirbitmap_70(), GLvirbitmap_71(), GLvirbitmap_72();
static Ptr GLvirbitmap_73(), GLvirbitmap_74(), GLvirbitmap_75(), GLvirbitmap_76();
static Ptr GLvirbitmap_77(), GLvirbitmap_78(), GLvirbitmap_79(), GLvirbitmap_80();
static Ptr GLvirbitmap_81(), GLvirbitmap_82(), GLvirbitmap_83(), GLvirbitmap_84();
static Ptr GLvirbitmap_85(), GLvirbitmap_86(), GLvirbitmap_87(), GLvirbitmap_88();
static Ptr GLvirbitmap_89(), GLvirbitmap_90(), GLvirbitmap_91(), GLvirbitmap_92();
static Ptr GLvirbitmap_93(), GLvirbitmap_94(), GLvirbitmap_95(), GLvirbitmap_96();
static Ptr GLvirbitmap_97(), GLvirbitmap_98(), GLvirbitmap_99(), GLvirbitmap_100();
static Ptr GLvirbitmap_101(), GLvirbitmap_102(), GLvirbitmap_103(), GLvirbitmap_104();
static Ptr GLvirbitmap_105(), GLvirbitmap_106(), GLvirbitmap_107(), GLvirbitmap_108();
static Ptr GLvirbitmap_109(), GLvirbitmap_110(), GLvirbitmap_111(), GLvirbitmap_112();
static Ptr GLvirbitmap_113(), GLvirbitmap_114(), GLvirbitmap_115(), GLvirbitmap_116();
static Ptr GLvirbitmap_119(), GLvirbitmap_120(), GLvirbitmap_121(), GLvirbitmap_122();
static Ptr GLvirbitmap_123(), GLvirbitmap_124(), GLvirbitmap_125(), GLvirbitmap_126();
static Ptr GLvirbitmap_127(), GLvirbitmap_128(), GLvirbitmap_129(), GLvirbitmap_130();
static Ptr GLvirbitmap_131(), GLvirbitmap_132(), GLvirbitmap_133(), GLvirbitmap_134();
static Ptr GLvirbitmap_135(), GLvirbitmap_136();

/*      trace functions */
static Ptr GDvirbitmap_137(), GDvirbitmap_138(), GDvirbitmap_139(), GDvirbitmap_140();
static Ptr GDvirbitmap_141(), GDvirbitmap_142(), GDvirbitmap_143(), GDvirbitmap_144();
static Ptr GDvirbitmap_145(), GDvirbitmap_146(), GDvirbitmap_147(), GDvirbitmap_148();
static Ptr GDvirbitmap_149(), GDvirbitmap_150(), GDvirbitmap_151(), GDvirbitmap_152();
static Ptr GDvirbitmap_153(), GDvirbitmap_154(), GDvirbitmap_155(), GDvirbitmap_156();
static Ptr GDvirbitmap_157(), GDvirbitmap_158(), GDvirbitmap_159(), GDvirbitmap_160();
static Ptr GDvirbitmap_161(), GDvirbitmap_162(), GDvirbitmap_163(), GDvirbitmap_164();
static Ptr GDvirbitmap_165(), GDvirbitmap_166(), GDvirbitmap_167(), GDvirbitmap_168();
static Ptr GDvirbitmap_169(), GDvirbitmap_170(), GDvirbitmap_171(), GDvirbitmap_172();
static Ptr GDvirbitmap_173(), GDvirbitmap_174(), GDvirbitmap_175(), GDvirbitmap_176();
static Ptr GDvirbitmap_177(), GDvirbitmap_178(), GDvirbitmap_179(), GDvirbitmap_180();
static Ptr GDvirbitmap_181(), GDvirbitmap_182(), GDvirbitmap_183(), GDvirbitmap_184();
static Ptr GDvirbitmap_185(), GDvirbitmap_186(), GDvirbitmap_187(), GDvirbitmap_188();
static Ptr GDvirbitmap_189(), GDvirbitmap_190(), GDvirbitmap_191(), GDvirbitmap_192();
static Ptr GDvirbitmap_193(), GDvirbitmap_194(), GDvirbitmap_195(), GDvirbitmap_196();
static Ptr GDvirbitmap_197(), GDvirbitmap_198(), GDvirbitmap_199(), GDvirbitmap_200();
static Ptr GDvirbitmap_201(), GDvirbitmap_202(), GDvirbitmap_203(), GDvirbitmap_204();
static Ptr GDvirbitmap_205(), GDvirbitmap_206(), GDvirbitmap_207(), GDvirbitmap_208();
static Ptr GDvirbitmap_209(), GDvirbitmap_210(), GDvirbitmap_211(), GDvirbitmap_212();
static Ptr GDvirbitmap_213(), GDvirbitmap_214(), GDvirbitmap_215(), GDvirbitmap_216();
static Ptr GDvirbitmap_217(), GDvirbitmap_218(), GDvirbitmap_219(), GDvirbitmap_220();
static Ptr GDvirbitmap_221(), GDvirbitmap_222(), GDvirbitmap_223(), GDvirbitmap_224();
static Ptr GDvirbitmap_225(), GDvirbitmap_226(), GDvirbitmap_227(), GDvirbitmap_228();
static Ptr GDvirbitmap_229(), GDvirbitmap_230(), GDvirbitmap_231(), GDvirbitmap_232();
static Ptr GDvirbitmap_233(), GDvirbitmap_234(), GDvirbitmap_235(), GDvirbitmap_236();
static Ptr GDvirbitmap_237(), GDvirbitmap_238(), GDvirbitmap_239(), GDvirbitmap_240();
static Ptr GDvirbitmap_241(), GDvirbitmap_242(), GDvirbitmap_243(), GDvirbitmap_244();
static Ptr GDvirbitmap_245(), GDvirbitmap_246(), GDvirbitmap_247(), GDvirbitmap_248();
static Ptr GDvirbitmap_249(), GDvirbitmap_250(), GDvirbitmap_251(), GDvirbitmap_252();
static Ptr GDvirbitmap_253(), GDvirbitmap_254(), GDvirbitmap_255(), GDvirbitmap_256();
static Ptr GDvirbitmap_257(), GDvirbitmap_258(), GDvirbitmap_259(), GDvirbitmap_260();
static Ptr GDvirbitmap_261(), GDvirbitmap_262(), GDvirbitmap_263(), GDvirbitmap_264();
static Ptr GDvirbitmap_265(), GDvirbitmap_266();

static Ptr GYvirbitmap[142];

static const char GNvirbitmap[] = "virbitmap";
static const char GTvirbitmap[] = "Tue Aug  24 93 10:49:23 ";

static struct GellEntry GWvirbitmap[] = {
        {GLvirbitmap_1, GDvirbitmap_137,        1},     /* #:display:make */
        {GLvirbitmap_3, GDvirbitmap_138,        5},     /* #:display:name */
        {GLvirbitmap_4, GDvirbitmap_139,        5},     /* #:display:package */
        {GLvirbitmap_5, GDvirbitmap_140,        5},     /* #:display:device */
        {GLvirbitmap_6, GDvirbitmap_141,        5},     /* #:display:xmax */
        {GLvirbitmap_7, GDvirbitmap_142,        5},     /* #:display:ymax */
        {GLvirbitmap_8, GDvirbitmap_143,        5},     /* #:display:eventmode */
        {GLvirbitmap_9, GDvirbitmap_144,        5},     /* #:display:prologuep */
        {GLvirbitmap_10,        GDvirbitmap_145,        5},     /* #:display:keyboard-focus-window */
        {GLvirbitmap_11,        GDvirbitmap_146,        5},     /* #:display:window */
        {GLvirbitmap_12,        GDvirbitmap_147,        5},     /* #:display:graph-env */
        {GLvirbitmap_13,        GDvirbitmap_148,        5},     /* #:display:root-window */
        {GLvirbitmap_14,        GDvirbitmap_149,        5},     /* #:display:main-graph-env */
        {GLvirbitmap_15,        GDvirbitmap_150,        5},     /* #:display:background */
        {GLvirbitmap_16,        GDvirbitmap_151,        5},     /* #:display:foreground */
        {GLvirbitmap_17,        GDvirbitmap_152,        5},     /* #:display:windows */
        {GLvirbitmap_18,        GDvirbitmap_153,        5},     /* #:display:bitmaps */
        {GLvirbitmap_19,        GDvirbitmap_154,        5},     /* #:display:menus */
        {GLvirbitmap_20,        GDvirbitmap_155,        5},     /* #:display:colors */
        {GLvirbitmap_21,        GDvirbitmap_156,        5},     /* #:display:font-names */
        {GLvirbitmap_22,        GDvirbitmap_157,        5},     /* #:display:pattern-bitmaps */
        {GLvirbitmap_23,        GDvirbitmap_158,        5},     /* #:display:cursor-bitmaps */
        {GLvirbitmap_24,        GDvirbitmap_159,        5},     /* #:display:extend */
        {GLvirbitmap_25,        GDvirbitmap_160,        5},     /* #:display:graph-envs */
        {GLvirbitmap_26,        GDvirbitmap_161,        5},     /* #:display:current-selection */
        {GLvirbitmap_27,        GDvirbitmap_162,        5},     /* #:display:resource */
        {GLvirbitmap_28,        GDvirbitmap_163,        5},     /* #:display:named-cursors */
        {GLvirbitmap_29,        GDvirbitmap_164,        5},     /* #:display:stipple-bitmaps */
        {GLvirbitmap_30,        GDvirbitmap_165,        5},     /* #:color:name */
        {GLvirbitmap_31,        GDvirbitmap_166,        5},     /* #:color:red */
        {GLvirbitmap_32,        GDvirbitmap_167,        5},     /* #:color:green */
        {GLvirbitmap_33,        GDvirbitmap_168,        5},     /* #:color:blue */
        {GLvirbitmap_34,        GDvirbitmap_169,        5},     /* #:color:mutable */
        {GLvirbitmap_35,        GDvirbitmap_170,        5},     /* #:color:display */
        {GLvirbitmap_36,        GDvirbitmap_171,        5},     /* #:color:extend */
        {GLvirbitmap_37,        GDvirbitmap_172,        5},     /* #:graph-env:font */
        {GLvirbitmap_38,        GDvirbitmap_173,        5},     /* #:graph-env:line-style */
        {GLvirbitmap_39,        GDvirbitmap_174,        5},     /* #:graph-env:pattern */
        {GLvirbitmap_40,        GDvirbitmap_175,        5},     /* #:graph-env:mode */
        {GLvirbitmap_41,        GDvirbitmap_176,        5},     /* #:graph-env:foreground */
        {GLvirbitmap_42,        GDvirbitmap_177,        5},     /* #:graph-env:background */
        {GLvirbitmap_43,        GDvirbitmap_178,        5},     /* #:graph-env:clip-x */
        {GLvirbitmap_44,        GDvirbitmap_179,        5},     /* #:graph-env:clip-y */
        {GLvirbitmap_45,        GDvirbitmap_180,        5},     /* #:graph-env:clip-w */
        {GLvirbitmap_46,        GDvirbitmap_181,        5},     /* #:graph-env:clip-h */
        {GLvirbitmap_47,        GDvirbitmap_182,        5},     /* #:graph-env:bitmap */
        {GLvirbitmap_48,        GDvirbitmap_183,        5},     /* #:graph-env:display */
        {GLvirbitmap_49,        GDvirbitmap_184,        5},     /* #:graph-env:extend */
        {GLvirbitmap_50,        GDvirbitmap_185,        5},     /* #:graph-env:stipple */
        {GLvirbitmap_51,        GDvirbitmap_186,        5},     /* #:graph-env:fill-mode */
        {GLvirbitmap_52,        GDvirbitmap_187,        1},     /* #:event:make */
        {GLvirbitmap_54,        GDvirbitmap_188,        5},     /* #:event:code */
        {GLvirbitmap_55,        GDvirbitmap_189,        5},     /* #:event:window */
        {GLvirbitmap_56,        GDvirbitmap_190,        5},     /* #:event:detail */
        {GLvirbitmap_57,        GDvirbitmap_191,        5},     /* #:event:gx */
        {GLvirbitmap_58,        GDvirbitmap_192,        5},     /* #:event:gy */
        {GLvirbitmap_59,        GDvirbitmap_193,        5},     /* #:event:x */
        {GLvirbitmap_60,        GDvirbitmap_194,        5},     /* #:event:y */
        {GLvirbitmap_61,        GDvirbitmap_195,        5},     /* #:event:w */
        {GLvirbitmap_62,        GDvirbitmap_196,        5},     /* #:event:h */
        {GLvirbitmap_63,        GDvirbitmap_197,        5},     /* #:event:b */
        {GLvirbitmap_64,        GDvirbitmap_198,        5},     /* #:bitmap:w */
        {GLvirbitmap_65,        GDvirbitmap_199,        5},     /* #:bitmap:h */
        {GLvirbitmap_66,        GDvirbitmap_200,        5},     /* #:bitmap:extend */
        {GLvirbitmap_67,        GDvirbitmap_201,        5},     /* #:bitmap:display */
        {GLvirbitmap_68,        GDvirbitmap_202,        5},     /* #:bitmap:stipple:data */
        {GLvirbitmap_69,        GDvirbitmap_203,        1},     /* #:image:rectangle:make */
        {GLvirbitmap_71,        GDvirbitmap_204,        5},     /* #:image:rectangle:x */
        {GLvirbitmap_72,        GDvirbitmap_205,        5},     /* #:image:rectangle:y */
        {GLvirbitmap_73,        GDvirbitmap_206,        5},     /* #:image:rectangle:w */
        {GLvirbitmap_74,        GDvirbitmap_207,        5},     /* #:image:rectangle:h */
        {GLvirbitmap_75,        GDvirbitmap_208,        5},     /* #:image:rectangle:window:title */
        {GLvirbitmap_76,        GDvirbitmap_209,        5},     /* #:image:rectangle:window:hilited */
        {GLvirbitmap_77,        GDvirbitmap_210,        5},     /* #:image:rectangle:window:visible */
        {GLvirbitmap_78,        GDvirbitmap_211,        5},     /* #:image:rectangle:window:graph-env
 */
        {GLvirbitmap_79,        GDvirbitmap_212,        5},     /* #:image:rectangle:window:extend */
        {GLvirbitmap_80,        GDvirbitmap_213,        5},     /* #:image:rectangle:window:father */
        {GLvirbitmap_81,        GDvirbitmap_214,        5},     /* #:image:rectangle:window:properties
 */
        {GLvirbitmap_82,        GDvirbitmap_215,        5},     /* #:image:rectangle:window:cursor */
        {GLvirbitmap_83,        GDvirbitmap_216,        5},     /* #:image:rectangle:window:display */
        {GLvirbitmap_84,        GDvirbitmap_217,        5},     /* #:image:rectangle:window:subwindows
 */
        {GLvirbitmap_85,        GDvirbitmap_218,        5},     /* #:image:rectangle:window:events-list
 */
        {GLvirbitmap_86,        GDvirbitmap_219,        5},     /* #:image:rectangle:window:window-type
 */
        {GLvirbitmap_87,        GDvirbitmap_220,        5},     /* #:image:rectangle:window:
graphic-properties */
        {GLvirbitmap_88,        GDvirbitmap_221,        5},     /* #:image:rectangle:window:state */
        {GLvirbitmap_89,        GDvirbitmap_222,        5},     /* #:menu:title */
        {GLvirbitmap_90,        GDvirbitmap_223,        5},     /* #:menu:itemlists */
        {GLvirbitmap_91,        GDvirbitmap_224,        5},     /* #:menu:display */
        {GLvirbitmap_92,        GDvirbitmap_225,        5},     /* #:menu:extend */
        {GLvirbitmap_93,        GDvirbitmap_226,        5},     /* #:menu:itemlist:name */
        {GLvirbitmap_94,        GDvirbitmap_227,        5},     /* #:menu:itemlist:active */
        {GLvirbitmap_95,        GDvirbitmap_228,        5},     /* #:menu:itemlist:items */
        {GLvirbitmap_96,        GDvirbitmap_229,        5},     /* #:menu:item:name */
        {GLvirbitmap_97,        GDvirbitmap_230,        5},     /* #:menu:item:active */
        {GLvirbitmap_98,        GDvirbitmap_231,        5},     /* #:menu:item:value */
        {GLvirbitmap_99,        GDvirbitmap_232,        1},     /* #:font-info:make */
        {GLvirbitmap_101,       GDvirbitmap_233,        5},     /* #:font-info:ascent */
        {GLvirbitmap_102,       GDvirbitmap_234,        5},     /* #:font-info:descent */
        {GLvirbitmap_103,       GDvirbitmap_235,        5},     /* #:font-info:angle */
        {GLvirbitmap_104,       GDvirbitmap_236,        5},     /* #:font-info:weight */
        {GLvirbitmap_105,       GDvirbitmap_237,        5},     /* #:font-info:minrbearing */
        {GLvirbitmap_106,       GDvirbitmap_238,        5},     /* #:font-info:minlbearing */
        {GLvirbitmap_107,       GDvirbitmap_239,        5},     /* #:font-info:minascent */
        {GLvirbitmap_108,       GDvirbitmap_240,        5},     /* #:font-info:mindescent */
        {GLvirbitmap_109,       GDvirbitmap_241,        5},     /* #:font-info:minwidth */
        {GLvirbitmap_110,       GDvirbitmap_242,        5},     /* #:font-info:maxrbearing */
        {GLvirbitmap_111,       GDvirbitmap_243,        5},     /* #:font-info:maxlbearing */
        {GLvirbitmap_112,       GDvirbitmap_244,        5},     /* #:font-info:maxascent */
        {GLvirbitmap_113,       GDvirbitmap_245,        5},     /* #:font-info:maxdescent */
        {GLvirbitmap_114,       GDvirbitmap_246,        5},     /* #:font-info:maxwidth */
        {GLvirbitmap_115,       GDvirbitmap_247,        12},    /* #:window:make */
        {GLvirbitmap_116,       GDvirbitmap_248,        5},     /* #:window:background */
        {GLvirbitmap_119,       GDvirbitmap_249,        12},    /* #:window:left */
        {GLvirbitmap_120,       GDvirbitmap_250,        12},    /* #:window:top */
        {GLvirbitmap_121,       GDvirbitmap_251,        12},    /* #:window:width */
        {GLvirbitmap_122,       GDvirbitmap_252,        12},    /* #:window:height */
        {GLvirbitmap_123,       GDvirbitmap_253,        12},    /* #:window:title */
        {GLvirbitmap_124,       GDvirbitmap_254,        12},    /* #:window:hilited */
        {GLvirbitmap_125,       GDvirbitmap_255,        12},    /* #:window:visible */
        {GLvirbitmap_126,       GDvirbitmap_256,        12},    /* #:window:graph-env */
        {GLvirbitmap_127,       GDvirbitmap_257,        12},    /* #:window:extend */
        {GLvirbitmap_128,       GDvirbitmap_258,        12},    /* #:window:father */
        {GLvirbitmap_129,       GDvirbitmap_259,        12},    /* #:window:properties */
        {GLvirbitmap_130,       GDvirbitmap_260,        12},    /* #:window:cursor */
        {GLvirbitmap_131,       GDvirbitmap_261,        12},    /* #:window:display */
        {GLvirbitmap_132,       GDvirbitmap_262,        12},    /* #:window:subwindows */
        {GLvirbitmap_133,       GDvirbitmap_263,        12},    /* #:window:events-list */
        {GLvirbitmap_134,       GDvirbitmap_264,        12},    /* #:window:window-type */
        {GLvirbitmap_135,       GDvirbitmap_265,        12},    /* #:window:graphic-properties */
        {GLvirbitmap_136,       GDvirbitmap_266,        12},    /* #:window:state */
};

struct GellModule GZvirbitmap = {
        GELLMODULESTAMP,
        GNvirbitmap,
        GTvirbitmap,
        GYvirbitmap,
        130,
        GWvirbitmap};
