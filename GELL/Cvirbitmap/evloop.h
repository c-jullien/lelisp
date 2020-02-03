/* GELL 15.26: include file for the module: "evloop" */
/*             translation done:            "Tue Aug  24 93 10:49:33 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern long evloop_set_timeout();
extern Ptr evloop_build_mask();
extern long evloop_select_in();
extern long evloop_busy_select();
extern long evloop_add_file_descriptor();
extern long evloop_remove_file_descriptor();
extern Ptr evloop_init();
extern long evloop_mask_to_fds();
extern long evloop_get_errno();
extern Ptr evloop_get_out_mask();
extern long evloop_select_in_out();
extern long evloop_test_if_valid_fd();
extern long is_ll_fg();
extern long is_ll_foreground();

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLevloop_1(), GLevloop_2(), GLevloop_3(), GLevloop_4();
static Ptr GLevloop_5(), GLevloop_6(), GLevloop_7(), GLevloop_8();
static Ptr GLevloop_9(), GLevloop_10(), GLevloop_11(), GLevloop_12();
static Ptr GLevloop_13(), GLevloop_14(), GLevloop_15(), GLevloop_17();
static Ptr GLevloop_18(), GLevloop_20(), GLevloop_21(), GLevloop_23();
static Ptr GLevloop_25(), GLevloop_26(), GLevloop_27(), GLevloop_28();
static Ptr GLevloop_29(), GLevloop_30(), GLevloop_31(), GLevloop_33();
static Ptr GLevloop_34(), GLevloop_36(), GLevloop_38(), GLevloop_39();
static Ptr GLevloop_41(), GLevloop_43(), GLevloop_44(), GLevloop_46();
static Ptr GLevloop_47(), GLevloop_48(), GLevloop_49(), GLevloop_50();
static Ptr GLevloop_52(), GLevloop_53(), GLevloop_55(), GLevloop_56();
static Ptr GLevloop_57(), GLevloop_58(), GLevloop_59(), GLevloop_61();
static Ptr GLevloop_62(), GLevloop_63(), GLevloop_64(), GLevloop_65();
static Ptr GLevloop_66(), GLevloop_67(), GLevloop_68(), GLevloop_70();
static Ptr GLevloop_71(), GLevloop_73(), GLevloop_74(), GLevloop_75();
static Ptr GLevloop_76(), GLevloop_78(), GLevloop_79(), GLevloop_81();
static Ptr GLevloop_82(), GLevloop_84(), GLevloop_85(), GLevloop_87();
static Ptr GLevloop_88(), GLevloop_90(), GLevloop_91(), GLevloop_93();
static Ptr GLevloop_95(), GLevloop_97(), GLevloop_99(), GLevloop_101();
static Ptr GLevloop_102(), GLevloop_104(), GLevloop_105(), GLevloop_107();
static Ptr GLevloop_109(), GLevloop_110(), GLevloop_112(), GLevloop_113();
static Ptr GLevloop_115(), GLevloop_117(), GLevloop_118(), GLevloop_119();
static Ptr GLevloop_120(), GLevloop_122(), GLevloop_123(), GLevloop_124();
static Ptr GLevloop_125(), GLevloop_127(), GLevloop_128(), GLevloop_129();
static Ptr GLevloop_131(), GLevloop_132(), GLevloop_134(), GLevloop_136();
static Ptr GLevloop_137(), GLevloop_138(), GLevloop_140(), GLevloop_141();
static Ptr GLevloop_143(), GLevloop_144(), GLevloop_146(), GLevloop_148();
static Ptr GLevloop_150(), GLevloop_152(), GLevloop_154(), GLevloop_155();
static Ptr GLevloop_157(), GLevloop_158(), GLevloop_160(), GLevloop_162();
static Ptr GLevloop_163(), GLevloop_165(), GLevloop_166(), GLevloop_168();
static Ptr GLevloop_170(), GLevloop_171(), GLevloop_174(), GLevloop_176();
static Ptr GLevloop_177(), GLevloop_178(), GLevloop_180(), GLevloop_181();
static Ptr GLevloop_182(), GLevloop_183(), GLevloop_184(), GLevloop_185();
static Ptr GLevloop_186();

/*      trace functions */
static Ptr GDevloop_187(), GDevloop_188(), GDevloop_189(), GDevloop_190();
static Ptr GDevloop_191(), GDevloop_192(), GDevloop_193(), GDevloop_194();
static Ptr GDevloop_195(), GDevloop_196(), GDevloop_197(), GDevloop_198();
static Ptr GDevloop_199(), GDevloop_200(), GDevloop_201(), GDevloop_202();
static Ptr GDevloop_203(), GDevloop_204(), GDevloop_205(), GDevloop_206();
static Ptr GDevloop_207(), GDevloop_208(), GDevloop_209(), GDevloop_210();
static Ptr GDevloop_211(), GDevloop_212();

static Ptr GYevloop[80];

static const char GNevloop[] = "evloop";
static const char GTevloop[] = "Tue Aug  24 93 10:49:33 ";

static struct GellEntry GWevloop[] = {
        {GLevloop_2,    GDevloop_187,   3},     /* evloop_build_mask */
        {GLevloop_8,    GDevloop_188,   3},     /* evloop_mask_to_fds */
        {GLevloop_15,   GDevloop_189,   2},     /* #:event-loop:tty-input */
        {GLevloop_21,   GDevloop_190,   1},     /* #:tty:evloop:tyi */
        {GLevloop_44,   GDevloop_191,   1},     /* evloop-init */
        {GLevloop_47,   GDevloop_192,   1},     /* evloop-initialized-p */
        {GLevloop_48,   GDevloop_193,   1},     /* evloop-restart */
        {GLevloop_49,   GDevloop_194,   1},     /* evloop-stop */
        {GLevloop_50,   GDevloop_195,   3},     /* evloop-set-timeout */
        {GLevloop_53,   GDevloop_196,   1},     /* evloop-select */
        {GLevloop_68,   GDevloop_197,   1},     /* evloop-wait */
        {GLevloop_76,   GDevloop_198,   1},     /* evloop-readp */
        {GLevloop_88,   GDevloop_199,   4},     /* evloop-add-input */
        {GLevloop_102,  GDevloop_200,   2},     /* evloop-remove-input */
        {GLevloop_110,  GDevloop_201,   4},     /* evloop-change-manage-function */
        {GLevloop_118,  GDevloop_202,   1},     /* evloop-disallow-tty-input */
        {GLevloop_119,  GDevloop_203,   1},     /* evloop-allow-tty-input */
        {GLevloop_120,  GDevloop_204,   2},     /* evloop-input-managed-p */
        {GLevloop_137,  GDevloop_205,   2},     /* evloop-set-timeout-handler */
        {GLevloop_141,  GDevloop_206,   4},     /* evloop-add-output */
        {GLevloop_155,  GDevloop_207,   2},     /* evloop-remove-output */
        {GLevloop_163,  GDevloop_208,   4},     /* evloop-change-output-manage-function */
        {GLevloop_171,  GDevloop_209,   5},     /* evloop-add-display */
        {GLevloop_177,  GDevloop_210,   2},     /* #:event-loop:evloop-display-manage */
        {GLevloop_183,  GDevloop_211,   2},     /* evloop-remove-display */
        {GLevloop_185,  GDevloop_212,   2},     /* evloop-display-managed-p */
};

struct GellModule GZevloop = {
        GELLMODULESTAMP,
        GNevloop,
        GTevloop,
        GYevloop,
        26,
        GWevloop};
