/* GELL 15.26: include file for the module: "virdraw" */
/*             translation done:            "Tue Aug  24 93 10:48:58 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLvirdraw_1(), GLvirdraw_2(), GLvirdraw_3(), GLvirdraw_4();
static Ptr GLvirdraw_5(), GLvirdraw_6(), GLvirdraw_7(), GLvirdraw_8();
static Ptr GLvirdraw_9(), GLvirdraw_10(), GLvirdraw_11(), GLvirdraw_12();
static Ptr GLvirdraw_13(), GLvirdraw_14(), GLvirdraw_15(), GLvirdraw_16();
static Ptr GLvirdraw_17(), GLvirdraw_18(), GLvirdraw_19(), GLvirdraw_20();
static Ptr GLvirdraw_21(), GLvirdraw_22(), GLvirdraw_23(), GLvirdraw_24();
static Ptr GLvirdraw_25(), GLvirdraw_26(), GLvirdraw_27(), GLvirdraw_28();
static Ptr GLvirdraw_29(), GLvirdraw_30(), GLvirdraw_31(), GLvirdraw_32();
static Ptr GLvirdraw_33(), GLvirdraw_34(), GLvirdraw_35(), GLvirdraw_36();
static Ptr GLvirdraw_37(), GLvirdraw_38(), GLvirdraw_39(), GLvirdraw_40();
static Ptr GLvirdraw_41(), GLvirdraw_42(), GLvirdraw_43(), GLvirdraw_44();
static Ptr GLvirdraw_45(), GLvirdraw_46(), GLvirdraw_47(), GLvirdraw_48();
static Ptr GLvirdraw_49(), GLvirdraw_50(), GLvirdraw_51(), GLvirdraw_52();
static Ptr GLvirdraw_53(), GLvirdraw_54(), GLvirdraw_55(), GLvirdraw_56();
static Ptr GLvirdraw_57(), GLvirdraw_58(), GLvirdraw_59(), GLvirdraw_60();
static Ptr GLvirdraw_61(), GLvirdraw_62(), GLvirdraw_63(), GLvirdraw_64();
static Ptr GLvirdraw_65(), GLvirdraw_66(), GLvirdraw_67(), GLvirdraw_68();
static Ptr GLvirdraw_69(), GLvirdraw_70(), GLvirdraw_71(), GLvirdraw_72();
static Ptr GLvirdraw_73(), GLvirdraw_74(), GLvirdraw_75(), GLvirdraw_76();
static Ptr GLvirdraw_77(), GLvirdraw_78(), GLvirdraw_79(), GLvirdraw_80();
static Ptr GLvirdraw_81(), GLvirdraw_82(), GLvirdraw_83(), GLvirdraw_84();
static Ptr GLvirdraw_85(), GLvirdraw_86(), GLvirdraw_87(), GLvirdraw_88();
static Ptr GLvirdraw_89(), GLvirdraw_90(), GLvirdraw_91(), GLvirdraw_92();
static Ptr GLvirdraw_93(), GLvirdraw_94(), GLvirdraw_95(), GLvirdraw_96();
static Ptr GLvirdraw_97(), GLvirdraw_98(), GLvirdraw_99(), GLvirdraw_100();
static Ptr GLvirdraw_101(), GLvirdraw_102(), GLvirdraw_103(), GLvirdraw_104();
static Ptr GLvirdraw_105(), GLvirdraw_106(), GLvirdraw_107(), GLvirdraw_108();
static Ptr GLvirdraw_109(), GLvirdraw_110(), GLvirdraw_111(), GLvirdraw_112();
static Ptr GLvirdraw_113(), GLvirdraw_114(), GLvirdraw_115(), GLvirdraw_116();
static Ptr GLvirdraw_117(), GLvirdraw_118(), GLvirdraw_119(), GLvirdraw_120();
static Ptr GLvirdraw_121(), GLvirdraw_122();

/*      trace functions */
static Ptr GDvirdraw_123(), GDvirdraw_124(), GDvirdraw_125(), GDvirdraw_126();
static Ptr GDvirdraw_127(), GDvirdraw_128(), GDvirdraw_129(), GDvirdraw_130();
static Ptr GDvirdraw_131(), GDvirdraw_132(), GDvirdraw_133(), GDvirdraw_134();
static Ptr GDvirdraw_135(), GDvirdraw_136(), GDvirdraw_137(), GDvirdraw_138();
static Ptr GDvirdraw_139(), GDvirdraw_140(), GDvirdraw_141(), GDvirdraw_142();
static Ptr GDvirdraw_143(), GDvirdraw_144(), GDvirdraw_145(), GDvirdraw_146();
static Ptr GDvirdraw_147(), GDvirdraw_148(), GDvirdraw_149(), GDvirdraw_150();
static Ptr GDvirdraw_151(), GDvirdraw_152(), GDvirdraw_153(), GDvirdraw_154();
static Ptr GDvirdraw_155(), GDvirdraw_156(), GDvirdraw_157(), GDvirdraw_158();
static Ptr GDvirdraw_159(), GDvirdraw_160(), GDvirdraw_161(), GDvirdraw_162();
static Ptr GDvirdraw_163(), GDvirdraw_164(), GDvirdraw_165(), GDvirdraw_166();
static Ptr GDvirdraw_167();

static Ptr GYvirdraw[71];

static const char GNvirdraw[] = "virdraw";
static const char GTvirdraw[] = "Tue Aug  24 93 10:48:58 ";

static struct GellEntry GWvirdraw[] = {
        {GLvirdraw_1,   GDvirdraw_123,  4},     /* draw-cursor */
        {GLvirdraw_5,   GDvirdraw_124,  5},     /* #:display:draw-cursor */
        {GLvirdraw_6,   GDvirdraw_125,  5},     /* draw-substring */
        {GLvirdraw_10,  GDvirdraw_126,  5},     /* #:display:draw-substring */
        {GLvirdraw_11,  GDvirdraw_127,  4},     /* draw-cn */
        {GLvirdraw_15,  GDvirdraw_128,  5},     /* #:display:draw-cn */
        {GLvirdraw_16,  GDvirdraw_129,  5},     /* #:display:draw-substring-nobackground */
        {GLvirdraw_17,  GDvirdraw_130,  5},     /* draw-substring-nobackground */
        {GLvirdraw_21,  GDvirdraw_131,  4},     /* #:display:draw-cn-nobackground */
        {GLvirdraw_22,  GDvirdraw_132,  4},     /* draw-cn-nobackground */
        {GLvirdraw_26,  GDvirdraw_133,  3},     /* draw-point */
        {GLvirdraw_30,  GDvirdraw_134,  5},     /* #:display:draw-point */
        {GLvirdraw_31,  GDvirdraw_135,  4},     /* draw-polymarker */
        {GLvirdraw_35,  GDvirdraw_136,  5},     /* #:display:draw-polymarker */
        {GLvirdraw_36,  GDvirdraw_137,  5},     /* draw-line */
        {GLvirdraw_40,  GDvirdraw_138,  5},     /* #:display:draw-line */
        {GLvirdraw_41,  GDvirdraw_139,  4},     /* draw-polyline */
        {GLvirdraw_45,  GDvirdraw_140,  5},     /* #:display:draw-polyline */
        {GLvirdraw_46,  GDvirdraw_141,  5},     /* draw-rectangle */
        {GLvirdraw_50,  GDvirdraw_142,  5},     /* #:display:draw-rectangle */
        {GLvirdraw_51,  GDvirdraw_143,  5},     /* fill-rectangle */
        {GLvirdraw_55,  GDvirdraw_144,  5},     /* #:display:fill-rectangle */
        {GLvirdraw_56,  GDvirdraw_145,  5},     /* highlight-rectangle */
        {GLvirdraw_60,  GDvirdraw_146,  5},     /* #:display:highlight-rectangle */
        {GLvirdraw_61,  GDvirdraw_147,  4},     /* fill-area */
        {GLvirdraw_65,  GDvirdraw_148,  5},     /* #:display:fill-area */
        {GLvirdraw_66,  GDvirdraw_149,  5},     /* draw-ellipse */
        {GLvirdraw_70,  GDvirdraw_150,  5},     /* #:display:draw-ellipse */
        {GLvirdraw_71,  GDvirdraw_151,  5},     /* fill-ellipse */
        {GLvirdraw_75,  GDvirdraw_152,  5},     /* #:display:fill-ellipse */
        {GLvirdraw_76,  GDvirdraw_153,  4},     /* draw-circle */
        {GLvirdraw_80,  GDvirdraw_154,  5},     /* #:display:draw-circle */
        {GLvirdraw_81,  GDvirdraw_155,  4},     /* fill-circle */
        {GLvirdraw_85,  GDvirdraw_156,  5},     /* #:display:fill-circle */
        {GLvirdraw_86,  GDvirdraw_157,  5},     /* draw-arc */
        {GLvirdraw_90,  GDvirdraw_158,  5},     /* #:display:draw-arc */
        {GLvirdraw_91,  GDvirdraw_159,  5},     /* fill-arc */
        {GLvirdraw_95,  GDvirdraw_160,  5},     /* #:display:fill-arc */
        {GLvirdraw_96,  GDvirdraw_161,  5},     /* draw-segments */
        {GLvirdraw_100, GDvirdraw_162,  5},     /* #:display:draw-segments */
        {GLvirdraw_101, GDvirdraw_163,  12},    /* draw-string */
        {GLvirdraw_105, GDvirdraw_164,  5},     /* draw-rectangles */
        {GLvirdraw_108, GDvirdraw_165,  5},     /* fill-rectangles */
        {GLvirdraw_111, GDvirdraw_166,  5},     /* #:display:draw-rectangles */
        {GLvirdraw_117, GDvirdraw_167,  5},     /* #:display:fill-rectangles */
};

struct GellModule GZvirdraw = {
        GELLMODULESTAMP,
        GNvirdraw,
        GTvirdraw,
        GYvirdraw,
        45,
        GWvirdraw};
