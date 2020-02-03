/* GELL 15.26: include file for the module: "callext" */
/*             translation done:            "Wed June 16 93 18:01:50 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern long llmgetglo();
extern Ptr llgetinlib();
extern Ptr llcload();

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLcallext_1(), GLcallext_2(), GLcallext_4(), GLcallext_6();
static Ptr GLcallext_7(), GLcallext_8(), GLcallext_10(), GLcallext_11();
static Ptr GLcallext_13(), GLcallext_14(), GLcallext_15(), GLcallext_16();
static Ptr GLcallext_18(), GLcallext_19(), GLcallext_20(), GLcallext_22();
static Ptr GLcallext_23(), GLcallext_24(), GLcallext_25(), GLcallext_27();
static Ptr GLcallext_28(), GLcallext_30(), GLcallext_31(), GLcallext_32();
static Ptr GLcallext_33(), GLcallext_35(), GLcallext_36(), GLcallext_37();
static Ptr GLcallext_38(), GLcallext_39(), GLcallext_40(), GLcallext_41();
static Ptr GLcallext_42(), GLcallext_43(), GLcallext_44(), GLcallext_45();
static Ptr GLcallext_46(), GLcallext_47(), GLcallext_48(), GLcallext_49();
static Ptr GLcallext_50(), GLcallext_51(), GLcallext_52(), GLcallext_53();
static Ptr GLcallext_54(), GLcallext_55(), GLcallext_56(), GLcallext_57();
static Ptr GLcallext_58(), GLcallext_59(), GLcallext_60(), GLcallext_61();
static Ptr GLcallext_62(), GLcallext_63(), GLcallext_64(), GLcallext_65();
static Ptr GLcallext_66(), GLcallext_67(), GLcallext_68(), GLcallext_69();
static Ptr GLcallext_70(), GLcallext_71(), GLcallext_72(), GLcallext_74();
static Ptr GLcallext_75(), GLcallext_77(), GLcallext_78(), GLcallext_79();
static Ptr GLcallext_80(), GLcallext_81(), GLcallext_83(), GLcallext_85();
static Ptr GLcallext_87(), GLcallext_88(), GLcallext_89(), GLcallext_91();
static Ptr GLcallext_93(), GLcallext_94(), GLcallext_95(), GLcallext_96();
static Ptr GLcallext_97(), GLcallext_98(), GLcallext_99(), GLcallext_101();
static Ptr GLcallext_103(), GLcallext_105(), GLcallext_106(), GLcallext_107();
static Ptr GLcallext_109(), GLcallext_110(), GLcallext_112(), GLcallext_114();
static Ptr GLcallext_115(), GLcallext_116(), GLcallext_118(), GLcallext_120();
static Ptr GLcallext_121(), GLcallext_122(), GLcallext_123(), GLcallext_125();
static Ptr GLcallext_126(), GLcallext_127(), GLcallext_128(), GLcallext_129();
static Ptr GLcallext_131(), GLcallext_132(), GLcallext_133(), GLcallext_135();
static Ptr GLcallext_137(), GLcallext_138(), GLcallext_139(), GLcallext_140();
static Ptr GLcallext_142(), GLcallext_144(), GLcallext_145(), GLcallext_147();
static Ptr GLcallext_148(), GLcallext_149(), GLcallext_151(), GLcallext_152();
static Ptr GLcallext_153(), GLcallext_154(), GLcallext_156(), GLcallext_158();
static Ptr GLcallext_159(), GLcallext_160(), GLcallext_162(), GLcallext_163();
static Ptr GLcallext_165(), GLcallext_167(), GLcallext_168(), GLcallext_169();
static Ptr GLcallext_170(), GLcallext_172(), GLcallext_174(), GLcallext_175();
static Ptr GLcallext_176(), GLcallext_177(), GLcallext_178(), GLcallext_179();
static Ptr GLcallext_181(), GLcallext_182(), GLcallext_183(), GLcallext_184();
static Ptr GLcallext_185(), GLcallext_187(), GLcallext_188(), GLcallext_190();
static Ptr GLcallext_191(), GLcallext_192(), GLcallext_194(), GLcallext_195();
static Ptr GLcallext_197(), GLcallext_199();

/*      trace functions */
static Ptr GDcallext_200(), GDcallext_201(), GDcallext_202(), GDcallext_203();
static Ptr GDcallext_204(), GDcallext_205(), GDcallext_206();

static Ptr GYcallext[92];

static const char GNcallext[] = "callext";
static const char GTcallext[] = "Wed June 16 93 18:01:50 ";

static struct GellEntry GWcallext[] = {
        {GLcallext_1,   GDcallext_200,  2},     /* #:system:cached-getglobal */
        {GLcallext_7,   GDcallext_201,  4},     /* getinlib */
        {GLcallext_23,  GDcallext_202,  12},    /* defextern */
        {GLcallext_31,  GDcallext_203,  5},     /* buildextern */
        {GLcallext_121, GDcallext_204,  12},    /* calllibextern */
        {GLcallext_126, GDcallext_205,  5},     /* defextern-cache */
        {GLcallext_182, GDcallext_206,  2},     /* cload */
};

struct GellModule GZcallext = {
        GELLMODULESTAMP,
        GNcallext,
        GTcallext,
        GYcallext,
        7,
        GWcallext};
