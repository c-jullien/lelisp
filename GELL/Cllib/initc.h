/* GELL 15.26: include file for the module: "initc" */
/*             translation done:            "Wed June 16 93 18:00:24 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern long llrt_set_regular_fval();
extern long llrt_set_lit_table();
extern long llrt_check_timestamp();
extern long llrt_set_trace_fval_p();

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLinitc_1(), GLinitc_3(), GLinitc_4(), GLinitc_5();
static Ptr GLinitc_6(), GLinitc_7(), GLinitc_8(), GLinitc_9();
static Ptr GLinitc_11(), GLinitc_13(), GLinitc_15(), GLinitc_16();
static Ptr GLinitc_17(), GLinitc_18(), GLinitc_19(), GLinitc_20();
static Ptr GLinitc_21(), GLinitc_22(), GLinitc_23(), GLinitc_24();
static Ptr GLinitc_25(), GLinitc_27(), GLinitc_29(), GLinitc_30();
static Ptr GLinitc_32(), GLinitc_34(), GLinitc_35(), GLinitc_36();
static Ptr GLinitc_37(), GLinitc_39(), GLinitc_40(), GLinitc_42();
static Ptr GLinitc_44(), GLinitc_45(), GLinitc_46(), GLinitc_47();
static Ptr GLinitc_48(), GLinitc_49(), GLinitc_51(), GLinitc_52();
static Ptr GLinitc_53(), GLinitc_54(), GLinitc_56(), GLinitc_57();
static Ptr GLinitc_58(), GLinitc_59(), GLinitc_60(), GLinitc_62();
static Ptr GLinitc_63(), GLinitc_65(), GLinitc_66(), GLinitc_68();
static Ptr GLinitc_69(), GLinitc_70(), GLinitc_72(), GLinitc_73();
static Ptr GLinitc_74(), GLinitc_76(), GLinitc_77(), GLinitc_78();
static Ptr GLinitc_79(), GLinitc_80(), GLinitc_81(), GLinitc_82();
static Ptr GLinitc_84(), GLinitc_85(), GLinitc_86(), GLinitc_87();
static Ptr GLinitc_89(), GLinitc_90(), GLinitc_91(), GLinitc_92();
static Ptr GLinitc_94(), GLinitc_95(), GLinitc_97(), GLinitc_98();
static Ptr GLinitc_99(), GLinitc_101(), GLinitc_102(), GLinitc_104();
static Ptr GLinitc_105(), GLinitc_107(), GLinitc_109(), GLinitc_110();
static Ptr GLinitc_114(), GLinitc_115(), GLinitc_116(), GLinitc_117();
static Ptr GLinitc_119(), GLinitc_120(), GLinitc_122(), GLinitc_123();
static Ptr GLinitc_124(), GLinitc_126(), GLinitc_128();

/*      trace functions */
static Ptr GDinitc_129(), GDinitc_130(), GDinitc_131(), GDinitc_132();
static Ptr GDinitc_133(), GDinitc_134(), GDinitc_135(), GDinitc_136();
static Ptr GDinitc_137();

static Ptr GYinitc[77];

static const char GNinitc[] = "initc";
static const char GTinitc[] = "Wed June 16 93 18:00:24 ";

static struct GellEntry GWinitc[] = {
        {GLinitc_7,     GDinitc_129,    4},     /* llrt_set_trace_fval_p */
        {GLinitc_22,    GDinitc_130,    5},     /* defcelaborate */
        {GLinitc_53,    GDinitc_131,    4},     /* defcsetfn */
        {GLinitc_66,    GDinitc_132,    2},     /* defccheck */
        {GLinitc_70,    GDinitc_133,    1},     /* check-for-unresolved-references */
        {GLinitc_90,    GDinitc_134,    1},     /* gell-clean-core-image */
        {GLinitc_92,    GDinitc_135,    2},     /* #:gell-clean-core-image:g104 */
        {GLinitc_95,    GDinitc_136,    4},     /* gell-save-core */
        {GLinitc_110,   GDinitc_137,    5},     /* gell-save-std */
};

struct GellModule GZinitc = {
        GELLMODULESTAMP,
        GNinitc,
        GTinitc,
        GYinitc,
        9,
        GWinitc};
