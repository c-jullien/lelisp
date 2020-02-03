/* GELL 15.26: include file for the module: "startll" */
/*             translation done:            "Wed Jul  28 93 17:58:11 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLstartll_1(), GLstartll_2(), GLstartll_3(), GLstartll_4();
static Ptr GLstartll_5(), GLstartll_6(), GLstartll_8(), GLstartll_9();
static Ptr GLstartll_10(), GLstartll_11(), GLstartll_13(), GLstartll_14();
static Ptr GLstartll_15(), GLstartll_17(), GLstartll_18(), GLstartll_19();
static Ptr GLstartll_20(), GLstartll_22(), GLstartll_23(), GLstartll_24();
static Ptr GLstartll_25(), GLstartll_27(), GLstartll_28(), GLstartll_29();
static Ptr GLstartll_30(), GLstartll_31(), GLstartll_32(), GLstartll_34();
static Ptr GLstartll_35(), GLstartll_37(), GLstartll_39(), GLstartll_40();
static Ptr GLstartll_41(), GLstartll_43(), GLstartll_44(), GLstartll_47();
static Ptr GLstartll_49(), GLstartll_50(), GLstartll_52(), GLstartll_54();
static Ptr GLstartll_55(), GLstartll_56(), GLstartll_57(), GLstartll_58();
static Ptr GLstartll_60(), GLstartll_61(), GLstartll_62(), GLstartll_64();
static Ptr GLstartll_66(), GLstartll_67(), GLstartll_69(), GLstartll_71();
static Ptr GLstartll_72(), GLstartll_73(), GLstartll_75(), GLstartll_76();
static Ptr GLstartll_78(), GLstartll_79(), GLstartll_82(), GLstartll_83();
static Ptr GLstartll_84(), GLstartll_85(), GLstartll_86(), GLstartll_87();
static Ptr GLstartll_90(), GLstartll_91(), GLstartll_92(), GLstartll_93();
static Ptr GLstartll_94(), GLstartll_95(), GLstartll_98(), GLstartll_99();
static Ptr GLstartll_100(), GLstartll_101(), GLstartll_102();

/*      trace functions */
static Ptr GDstartll_103(), GDstartll_104(), GDstartll_105(), GDstartll_106();
static Ptr GDstartll_107(), GDstartll_108(), GDstartll_109(), GDstartll_110();
static Ptr GDstartll_111(), GDstartll_112(), GDstartll_113(), GDstartll_114();
static Ptr GDstartll_115(), GDstartll_116(), GDstartll_117(), GDstartll_118();
static Ptr GDstartll_119(), GDstartll_120();

static Ptr GYstartll[84];

static const char GNstartll[] = "startll";
static const char GTstartll[] = "Wed Jul  28 93 17:58:11 ";

static struct GellEntry GWstartll[] = {
        {GLstartll_1,   GDstartll_103,  1},     /* subversion */
        {GLstartll_2,   GDstartll_104,  1},     /* herald */
        {GLstartll_11,  GDstartll_105,  2},     /* explodech */
        {GLstartll_18,  GDstartll_106,  2},     /* implodech */
        {GLstartll_23,  GDstartll_107,  2},     /* lhoblist */
        {GLstartll_25,  GDstartll_108,  2},     /* #:lhoblist:g104 */
        {GLstartll_28,  GDstartll_109,  1},     /* #:llcp:nlist */
        {GLstartll_29,  GDstartll_110,  3},     /* #:llcp:errwna */
        {GLstartll_30,  GDstartll_111,  2},     /* core-init-std */
        {GLstartll_44,  GDstartll_112,  5},     /* save-std */
        {GLstartll_61,  GDstartll_113,  1},     /* #:llcp:ext-not-resolved */
        {GLstartll_62,  GDstartll_114,  6},     /* defmacro-open */
        {GLstartll_67,  GDstartll_115,  3},     /* make-macro-open */
        {GLstartll_72,  GDstartll_116,  2},     /* macro-openp */
        {GLstartll_73,  GDstartll_117,  2},     /* remove-macro-open */
        {GLstartll_79,  GDstartll_118,  5},     /* compiler */
        {GLstartll_87,  GDstartll_119,  5},     /* compile-all-in-core */
        {GLstartll_95,  GDstartll_120,  5},     /* loader */
};

struct GellModule GZstartll = {
        GELLMODULESTAMP,
        GNstartll,
        GTstartll,
        GYstartll,
        18,
        GWstartll};
