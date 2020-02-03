/* GELL 15.26: include file for the module: "setf" */
/*             translation done:            "Wed June 16 93 18:01:07 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLsetf_1(), GLsetf_2(), GLsetf_3(), GLsetf_4();
static Ptr GLsetf_5(), GLsetf_6(), GLsetf_7(), GLsetf_8();
static Ptr GLsetf_9(), GLsetf_10(), GLsetf_11(), GLsetf_12();
static Ptr GLsetf_14(), GLsetf_15(), GLsetf_16(), GLsetf_18();
static Ptr GLsetf_19(), GLsetf_21(), GLsetf_22(), GLsetf_23();
static Ptr GLsetf_25(), GLsetf_27(), GLsetf_29(), GLsetf_30();
static Ptr GLsetf_32(), GLsetf_33(), GLsetf_34(), GLsetf_38();
static Ptr GLsetf_39(), GLsetf_40(), GLsetf_41(), GLsetf_43();
static Ptr GLsetf_44(), GLsetf_45(), GLsetf_46(), GLsetf_50();
static Ptr GLsetf_52(), GLsetf_53(), GLsetf_54(), GLsetf_55();
static Ptr GLsetf_56(), GLsetf_57(), GLsetf_58(), GLsetf_59();
static Ptr GLsetf_60(), GLsetf_61(), GLsetf_62(), GLsetf_63();
static Ptr GLsetf_64(), GLsetf_65(), GLsetf_67(), GLsetf_68();
static Ptr GLsetf_70(), GLsetf_71(), GLsetf_72(), GLsetf_73();
static Ptr GLsetf_75(), GLsetf_76(), GLsetf_77(), GLsetf_78();
static Ptr GLsetf_79(), GLsetf_80(), GLsetf_81(), GLsetf_82();
static Ptr GLsetf_83(), GLsetf_84(), GLsetf_85(), GLsetf_86();
static Ptr GLsetf_87(), GLsetf_88(), GLsetf_90(), GLsetf_91();
static Ptr GLsetf_93(), GLsetf_94(), GLsetf_95(), GLsetf_96();
static Ptr GLsetf_97(), GLsetf_98(), GLsetf_99(), GLsetf_100();
static Ptr GLsetf_101(), GLsetf_102(), GLsetf_103(), GLsetf_104();
static Ptr GLsetf_105(), GLsetf_106(), GLsetf_107(), GLsetf_109();
static Ptr GLsetf_111(), GLsetf_113(), GLsetf_115(), GLsetf_117();
static Ptr GLsetf_118(), GLsetf_119(), GLsetf_120(), GLsetf_121();
static Ptr GLsetf_122(), GLsetf_123(), GLsetf_124(), GLsetf_125();
static Ptr GLsetf_126(), GLsetf_127(), GLsetf_129(), GLsetf_131();
static Ptr GLsetf_132(), GLsetf_136(), GLsetf_138(), GLsetf_140();

/*      trace functions */
static Ptr GDsetf_141(), GDsetf_142(), GDsetf_143(), GDsetf_144();
static Ptr GDsetf_145(), GDsetf_146(), GDsetf_147(), GDsetf_148();
static Ptr GDsetf_149(), GDsetf_150();

static Ptr GYsetf[59];

static const char GNsetf[] = "setf";
static const char GTsetf[] = "Wed June 16 93 18:01:07 ";

static struct GellEntry GWsetf[] = {
        {GLsetf_1,      GDsetf_141,     12},    /* system-put */
        {GLsetf_3,      GDsetf_142,     12},    /* push-setf-method */
        {GLsetf_4,      GDsetf_143,     12},    /* push-setf-inverse */
        {GLsetf_5,      GDsetf_144,     12},    /* push-setf-expander */
        {GLsetf_6,      GDsetf_145,     12},    /* define-setf-method */
        {GLsetf_11,     GDsetf_146,     2},     /* get-setf-method */
        {GLsetf_55,     GDsetf_147,     12},    /* setf */
        {GLsetf_88,     GDsetf_148,     12},    /* defsetf */
        {GLsetf_100,    GDsetf_149,     12},    /* define-modify-macro */
        {GLsetf_132,    GDsetf_150,     5},     /* #:setf:make-call */
};

struct GellModule GZsetf = {
        GELLMODULESTAMP,
        GNsetf,
        GTsetf,
        GYsetf,
        10,
        GWsetf};
