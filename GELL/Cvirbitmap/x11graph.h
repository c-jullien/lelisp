/* GELL 15.26: include file for the module: "x11graph" */
/*             translation done:            "Tue Aug  24 93 10:48:26 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLx11graph_1(), GLx11graph_3(), GLx11graph_5(), GLx11graph_7();
static Ptr GLx11graph_8(), GLx11graph_9(), GLx11graph_11(), GLx11graph_12();
static Ptr GLx11graph_13(), GLx11graph_14(), GLx11graph_16(), GLx11graph_18();
static Ptr GLx11graph_19(), GLx11graph_20(), GLx11graph_21(), GLx11graph_22();
static Ptr GLx11graph_24(), GLx11graph_25(), GLx11graph_27(), GLx11graph_28();
static Ptr GLx11graph_29(), GLx11graph_31(), GLx11graph_33(), GLx11graph_34();
static Ptr GLx11graph_36(), GLx11graph_37(), GLx11graph_38(), GLx11graph_40();
static Ptr GLx11graph_41(), GLx11graph_43(), GLx11graph_44(), GLx11graph_45();
static Ptr GLx11graph_46(), GLx11graph_47(), GLx11graph_48(), GLx11graph_49();
static Ptr GLx11graph_50(), GLx11graph_51(), GLx11graph_52(), GLx11graph_53();
static Ptr GLx11graph_54(), GLx11graph_55(), GLx11graph_56(), GLx11graph_58();
static Ptr GLx11graph_60(), GLx11graph_61(), GLx11graph_63(), GLx11graph_65();
static Ptr GLx11graph_66(), GLx11graph_67(), GLx11graph_69(), GLx11graph_70();
static Ptr GLx11graph_71(), GLx11graph_72(), GLx11graph_73(), GLx11graph_74();
static Ptr GLx11graph_76(), GLx11graph_77(), GLx11graph_78(), GLx11graph_82();
static Ptr GLx11graph_83(), GLx11graph_85(), GLx11graph_87(), GLx11graph_88();
static Ptr GLx11graph_90(), GLx11graph_91(), GLx11graph_92(), GLx11graph_93();
static Ptr GLx11graph_95(), GLx11graph_96(), GLx11graph_97(), GLx11graph_98();
static Ptr GLx11graph_99(), GLx11graph_100(), GLx11graph_101(), GLx11graph_103();
static Ptr GLx11graph_104(), GLx11graph_105();

/*      trace functions */
static Ptr GDx11graph_106(), GDx11graph_107(), GDx11graph_108(), GDx11graph_109();
static Ptr GDx11graph_110(), GDx11graph_111(), GDx11graph_112(), GDx11graph_113();
static Ptr GDx11graph_114(), GDx11graph_115(), GDx11graph_116(), GDx11graph_117();
static Ptr GDx11graph_118(), GDx11graph_119(), GDx11graph_120(), GDx11graph_121();
static Ptr GDx11graph_122(), GDx11graph_123(), GDx11graph_124(), GDx11graph_125();
static Ptr GDx11graph_126(), GDx11graph_127(), GDx11graph_128(), GDx11graph_129();
static Ptr GDx11graph_130(), GDx11graph_131(), GDx11graph_132(), GDx11graph_133();
static Ptr GDx11graph_134(), GDx11graph_135(), GDx11graph_136(), GDx11graph_137();
static Ptr GDx11graph_138(), GDx11graph_139(), GDx11graph_140(), GDx11graph_141();
static Ptr GDx11graph_142();

static Ptr GYx11graph[95];

static const char GNx11graph[] = "x11graph";
static const char GTx11graph[] = "Tue Aug  24 93 10:48:26 ";

static struct GellEntry GWx11graph[] = {
        {GLx11graph_1,  GDx11graph_106, 4},     /* #:display:x11:current-font */
        {GLx11graph_8,  GDx11graph_107, 4},     /* #:display:x11:current-line-style */
        {GLx11graph_9,  GDx11graph_108, 4},     /* #:display:x11:current-pattern */
        {GLx11graph_12, GDx11graph_109, 4},     /* #:display:x11:current-mode */
        {GLx11graph_13, GDx11graph_110, 4},     /* #:display:x11:current-foreground */
        {GLx11graph_14, GDx11graph_111, 4},     /* #:display:x11:current-background */
        {GLx11graph_19, GDx11graph_112, 2},     /* #:display:x11:line-style-max */
        {GLx11graph_20, GDx11graph_113, 2},     /* #:display:x11:pattern-max */
        {GLx11graph_21, GDx11graph_114, 3},     /* #:display:x11:make-pattern */
        {GLx11graph_25, GDx11graph_115, 4},     /* #:display:x11:make-line-style */
        {GLx11graph_37, GDx11graph_116, 2},     /* #:display:x11:font-max */
        {GLx11graph_38, GDx11graph_117, 3},     /* #:display:x11:load-font */
        {GLx11graph_44, GDx11graph_118, 5},     /* #:display:x11:width-substring */
        {GLx11graph_45, GDx11graph_119, 5},     /* #:display:x11:height-substring */
        {GLx11graph_46, GDx11graph_120, 5},     /* #:display:x11:x-base-substring */
        {GLx11graph_47, GDx11graph_121, 5},     /* #:display:x11:y-base-substring */
        {GLx11graph_48, GDx11graph_122, 5},     /* #:display:x11:x-inc-substring */
        {GLx11graph_49, GDx11graph_123, 5},     /* #:display:x11:y-inc-substring */
        {GLx11graph_50, GDx11graph_124, 2},     /* #:display:x11:cursor-max */
        {GLx11graph_51, GDx11graph_125, 5},     /* #:display:x11:make-cursor */
        {GLx11graph_56, GDx11graph_126, 3},     /* #:display:x11:make-named-cursor */
        {GLx11graph_66, GDx11graph_127, 3},     /* #:display:x11:cursor-name */
        {GLx11graph_70, GDx11graph_128, 3},     /* #:display:x11:current-cursor */
        {GLx11graph_71, GDx11graph_129, 4},     /* #:display:x11:move-cursor */
        {GLx11graph_72, GDx11graph_130, 3},     /* #:display:x11:font-ascent */
        {GLx11graph_73, GDx11graph_131, 3},     /* #:display:x11:font-height */
        {GLx11graph_74, GDx11graph_132, 4},     /* #:display:x11:current-stipple */
        {GLx11graph_77, GDx11graph_133, 4},     /* #:display:x11:current-fill-mode */
        {GLx11graph_78, GDx11graph_134, 5},     /* #:display:x11:make-graph-env */
        {GLx11graph_88, GDx11graph_135, 3},     /* #:display:x11:kill-graph-env */
        {GLx11graph_91, GDx11graph_136, 5},     /* #:display:x11:graph-env-set-clip */
        {GLx11graph_92, GDx11graph_137, 5},     /* #:display:x11:graph-env-set-clips */
        {GLx11graph_93, GDx11graph_138, 5},     /* #:display:x11:graph-env-change-values
 */
        {GLx11graph_97, GDx11graph_139, 4},     /* #:display:x11:graph-env-subwindow-mode
 */
        {GLx11graph_98, GDx11graph_140, 4},     /* #:display:x11:get-font-names */
        {GLx11graph_101,        GDx11graph_141, 4},     /* #:display:x11:get-font-info */
        {GLx11graph_105,        GDx11graph_142, 4},     /* #:display:x11:graph-env-planemask */
};

struct GellModule GZx11graph = {
        GELLMODULESTAMP,
        GNx11graph,
        GTx11graph,
        GYx11graph,
        37,
        GWx11graph};
