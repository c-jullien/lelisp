/* GELL 15.26: include file for the module: "virtty" */
/*             translation done:            "Wed June 16 93 18:02:54 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLvirtty_1(), GLvirtty_2(), GLvirtty_3(), GLvirtty_4();
static Ptr GLvirtty_5(), GLvirtty_6(), GLvirtty_7(), GLvirtty_8();
static Ptr GLvirtty_9(), GLvirtty_10(), GLvirtty_11(), GLvirtty_12();
static Ptr GLvirtty_13(), GLvirtty_14(), GLvirtty_15(), GLvirtty_16();
static Ptr GLvirtty_17(), GLvirtty_18(), GLvirtty_19(), GLvirtty_20();
static Ptr GLvirtty_21(), GLvirtty_22(), GLvirtty_23(), GLvirtty_24();
static Ptr GLvirtty_25(), GLvirtty_26(), GLvirtty_27(), GLvirtty_28();
static Ptr GLvirtty_29(), GLvirtty_30(), GLvirtty_31(), GLvirtty_32();
static Ptr GLvirtty_33(), GLvirtty_34(), GLvirtty_35(), GLvirtty_36();
static Ptr GLvirtty_37(), GLvirtty_38(), GLvirtty_39(), GLvirtty_40();
static Ptr GLvirtty_41(), GLvirtty_42(), GLvirtty_43(), GLvirtty_44();
static Ptr GLvirtty_45(), GLvirtty_46(), GLvirtty_47(), GLvirtty_48();
static Ptr GLvirtty_49(), GLvirtty_50(), GLvirtty_51(), GLvirtty_54();
static Ptr GLvirtty_55(), GLvirtty_56(), GLvirtty_57(), GLvirtty_58();
static Ptr GLvirtty_59(), GLvirtty_62(), GLvirtty_63(), GLvirtty_64();
static Ptr GLvirtty_65(), GLvirtty_66(), GLvirtty_67(), GLvirtty_68();
static Ptr GLvirtty_69(), GLvirtty_70(), GLvirtty_71(), GLvirtty_72();
static Ptr GLvirtty_73(), GLvirtty_74(), GLvirtty_75(), GLvirtty_76();
static Ptr GLvirtty_77(), GLvirtty_78(), GLvirtty_79(), GLvirtty_80();
static Ptr GLvirtty_81(), GLvirtty_82(), GLvirtty_83(), GLvirtty_84();
static Ptr GLvirtty_85(), GLvirtty_86(), GLvirtty_87(), GLvirtty_91();
static Ptr GLvirtty_92(), GLvirtty_93(), GLvirtty_97(), GLvirtty_98();
static Ptr GLvirtty_99(), GLvirtty_100(), GLvirtty_103(), GLvirtty_105();
static Ptr GLvirtty_107(), GLvirtty_109(), GLvirtty_110(), GLvirtty_112();
static Ptr GLvirtty_114(), GLvirtty_116(), GLvirtty_117(), GLvirtty_118();
static Ptr GLvirtty_120(), GLvirtty_121(), GLvirtty_122(), GLvirtty_124();
static Ptr GLvirtty_125(), GLvirtty_126(), GLvirtty_127(), GLvirtty_129();
static Ptr GLvirtty_130(), GLvirtty_132(), GLvirtty_133(), GLvirtty_134();
static Ptr GLvirtty_135(), GLvirtty_137();

/*      trace functions */
static Ptr GDvirtty_138(), GDvirtty_139(), GDvirtty_140(), GDvirtty_141();
static Ptr GDvirtty_142(), GDvirtty_143(), GDvirtty_144(), GDvirtty_145();
static Ptr GDvirtty_146(), GDvirtty_147(), GDvirtty_148(), GDvirtty_149();
static Ptr GDvirtty_150(), GDvirtty_151(), GDvirtty_152(), GDvirtty_153();
static Ptr GDvirtty_154(), GDvirtty_155(), GDvirtty_156(), GDvirtty_157();
static Ptr GDvirtty_158(), GDvirtty_159(), GDvirtty_160(), GDvirtty_161();
static Ptr GDvirtty_162(), GDvirtty_163(), GDvirtty_164(), GDvirtty_165();
static Ptr GDvirtty_166(), GDvirtty_167(), GDvirtty_168(), GDvirtty_169();
static Ptr GDvirtty_170(), GDvirtty_171(), GDvirtty_172(), GDvirtty_173();
static Ptr GDvirtty_174(), GDvirtty_175(), GDvirtty_176(), GDvirtty_177();
static Ptr GDvirtty_178(), GDvirtty_179(), GDvirtty_180(), GDvirtty_181();
static Ptr GDvirtty_182(), GDvirtty_183();

static Ptr GYvirtty[102];

static const char GNvirtty[] = "virtty";
static const char GTvirtty[] = "Wed June 16 93 18:02:54 ";

static struct GellEntry GWvirtty[] = {
        {GLvirtty_1,    GDvirtty_138,   3},     /* tyod */
        {GLvirtty_3,    GDvirtty_139,   3},     /* #:tty:tyod */
        {GLvirtty_5,    GDvirtty_140,   12},    /* to-tty */
        {GLvirtty_7,    GDvirtty_141,   12},    /* get-tty */
        {GLvirtty_9,    GDvirtty_142,   2},     /* tyerror */
        {GLvirtty_11,   GDvirtty_143,   1},     /* typrologue */
        {GLvirtty_13,   GDvirtty_144,   1},     /* tyepilogue */
        {GLvirtty_15,   GDvirtty_145,   1},     /* tycleol */
        {GLvirtty_17,   GDvirtty_146,   1},     /* tycleos */
        {GLvirtty_19,   GDvirtty_147,   1},     /* tybeep */
        {GLvirtty_21,   GDvirtty_148,   2},     /* tyinsch */
        {GLvirtty_23,   GDvirtty_149,   1},     /* tydelch */
        {GLvirtty_25,   GDvirtty_150,   2},     /* tyinscn */
        {GLvirtty_27,   GDvirtty_151,   2},     /* tydelcn */
        {GLvirtty_29,   GDvirtty_152,   1},     /* tyinsln */
        {GLvirtty_31,   GDvirtty_153,   1},     /* tydelln */
        {GLvirtty_33,   GDvirtty_154,   2},     /* tybs */
        {GLvirtty_35,   GDvirtty_155,   1},     /* tycr */
        {GLvirtty_37,   GDvirtty_156,   1},     /* tyname */
        {GLvirtty_39,   GDvirtty_157,   1},     /* tyxmax */
        {GLvirtty_41,   GDvirtty_158,   1},     /* tyymax */
        {GLvirtty_43,   GDvirtty_159,   1},     /* tyupkey */
        {GLvirtty_45,   GDvirtty_160,   1},     /* tydownkey */
        {GLvirtty_47,   GDvirtty_161,   1},     /* tyleftkey */
        {GLvirtty_49,   GDvirtty_162,   1},     /* tyrightkey */
        {GLvirtty_51,   GDvirtty_163,   5},     /* tyattrib */
        {GLvirtty_59,   GDvirtty_164,   5},     /* tyshowcursor */
        {GLvirtty_67,   GDvirtty_165,   2},     /* #:tty:tyerror */
        {GLvirtty_68,   GDvirtty_166,   1},     /* #:tty:typrologue */
        {GLvirtty_69,   GDvirtty_167,   1},     /* #:tty:tyepilogue */
        {GLvirtty_70,   GDvirtty_168,   1},     /* #:tty:tycleol */
        {GLvirtty_71,   GDvirtty_169,   1},     /* #:tty:tycleos */
        {GLvirtty_72,   GDvirtty_170,   1},     /* #:tty:tybeep */
        {GLvirtty_73,   GDvirtty_171,   2},     /* #:tty:tyinsch */
        {GLvirtty_75,   GDvirtty_172,   2},     /* #:tty:tyinscn */
        {GLvirtty_77,   GDvirtty_173,   1},     /* #:tty:tydelch */
        {GLvirtty_78,   GDvirtty_174,   2},     /* #:tty:tydelcn */
        {GLvirtty_79,   GDvirtty_175,   1},     /* #:tty:tyinsln */
        {GLvirtty_80,   GDvirtty_176,   1},     /* #:tty:tydelln */
        {GLvirtty_81,   GDvirtty_177,   2},     /* #:tty:tyattrib */
        {GLvirtty_83,   GDvirtty_178,   2},     /* #:tty:tybs */
        {GLvirtty_84,   GDvirtty_179,   1},     /* #:tty:tycr */
        {GLvirtty_85,   GDvirtty_180,   2},     /* #:tty:tyshowcursor */
        {GLvirtty_87,   GDvirtty_181,   5},     /* tyco */
        {GLvirtty_93,   GDvirtty_182,   5},     /* tycot */
        {GLvirtty_100,  GDvirtty_183,   5},     /* initty */
};

struct GellModule GZvirtty = {
        GELLMODULESTAMP,
        GNvirtty,
        GTvirtty,
        GYvirtty,
        46,
        GWvirtty};
