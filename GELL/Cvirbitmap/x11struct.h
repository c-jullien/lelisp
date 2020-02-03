/* GELL 15.26: include file for the module: "x11struct" */
/*             translation done:            "Tue Aug  24 93 10:48:35 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLx11struct_1(), GLx11struct_2(), GLx11struct_3(), GLx11struct_4();
static Ptr GLx11struct_5(), GLx11struct_6(), GLx11struct_7(), GLx11struct_8();
static Ptr GLx11struct_9(), GLx11struct_10(), GLx11struct_11(), GLx11struct_12();
static Ptr GLx11struct_13(), GLx11struct_14(), GLx11struct_15(), GLx11struct_16();
static Ptr GLx11struct_17(), GLx11struct_18(), GLx11struct_19(), GLx11struct_20();
static Ptr GLx11struct_21(), GLx11struct_22(), GLx11struct_23(), GLx11struct_24();
static Ptr GLx11struct_25(), GLx11struct_26(), GLx11struct_27(), GLx11struct_28();
static Ptr GLx11struct_29(), GLx11struct_30(), GLx11struct_31(), GLx11struct_32();
static Ptr GLx11struct_33(), GLx11struct_34(), GLx11struct_35(), GLx11struct_36();
static Ptr GLx11struct_37(), GLx11struct_38(), GLx11struct_39(), GLx11struct_40();
static Ptr GLx11struct_41(), GLx11struct_42(), GLx11struct_43(), GLx11struct_44();
static Ptr GLx11struct_45(), GLx11struct_46(), GLx11struct_47(), GLx11struct_48();
static Ptr GLx11struct_49(), GLx11struct_50(), GLx11struct_51(), GLx11struct_52();
static Ptr GLx11struct_53(), GLx11struct_54(), GLx11struct_55(), GLx11struct_56();
static Ptr GLx11struct_57(), GLx11struct_58(), GLx11struct_59(), GLx11struct_60();
static Ptr GLx11struct_61(), GLx11struct_62(), GLx11struct_63(), GLx11struct_64();
static Ptr GLx11struct_65(), GLx11struct_66(), GLx11struct_67(), GLx11struct_68();
static Ptr GLx11struct_69(), GLx11struct_70(), GLx11struct_71(), GLx11struct_72();
static Ptr GLx11struct_73(), GLx11struct_74(), GLx11struct_75(), GLx11struct_76();
static Ptr GLx11struct_77(), GLx11struct_78(), GLx11struct_79(), GLx11struct_80();
static Ptr GLx11struct_81(), GLx11struct_82(), GLx11struct_83();

/*      trace functions */
static Ptr GDx11struct_84(), GDx11struct_85(), GDx11struct_86(), GDx11struct_87();
static Ptr GDx11struct_88(), GDx11struct_89(), GDx11struct_90(), GDx11struct_91();
static Ptr GDx11struct_92(), GDx11struct_93(), GDx11struct_94(), GDx11struct_95();
static Ptr GDx11struct_96(), GDx11struct_97(), GDx11struct_98(), GDx11struct_99();
static Ptr GDx11struct_100(), GDx11struct_101(), GDx11struct_102(), GDx11struct_103();
static Ptr GDx11struct_104(), GDx11struct_105(), GDx11struct_106(), GDx11struct_107();
static Ptr GDx11struct_108(), GDx11struct_109(), GDx11struct_110(), GDx11struct_111();
static Ptr GDx11struct_112(), GDx11struct_113(), GDx11struct_114(), GDx11struct_115();
static Ptr GDx11struct_116(), GDx11struct_117(), GDx11struct_118(), GDx11struct_119();
static Ptr GDx11struct_120(), GDx11struct_121(), GDx11struct_122(), GDx11struct_123();
static Ptr GDx11struct_124(), GDx11struct_125(), GDx11struct_126(), GDx11struct_127();
static Ptr GDx11struct_128(), GDx11struct_129(), GDx11struct_130(), GDx11struct_131();
static Ptr GDx11struct_132(), GDx11struct_133(), GDx11struct_134(), GDx11struct_135();
static Ptr GDx11struct_136(), GDx11struct_137(), GDx11struct_138(), GDx11struct_139();
static Ptr GDx11struct_140(), GDx11struct_141(), GDx11struct_142(), GDx11struct_143();
static Ptr GDx11struct_144(), GDx11struct_145(), GDx11struct_146(), GDx11struct_147();
static Ptr GDx11struct_148(), GDx11struct_149(), GDx11struct_150(), GDx11struct_151();
static Ptr GDx11struct_152(), GDx11struct_153(), GDx11struct_154(), GDx11struct_155();
static Ptr GDx11struct_156(), GDx11struct_157();

static Ptr GYx11struct[92];

static const char GNx11struct[] = "x11struct";
static const char GTx11struct[] = "Tue Aug  24 93 10:48:35 ";

static struct GellEntry GWx11struct[] = {
        {GLx11struct_1, GDx11struct_84, 1},     /* #:display:x11:make */
        {GLx11struct_3, GDx11struct_85, 5},     /* #:display:x11:name */
        {GLx11struct_4, GDx11struct_86, 5},     /* #:display:x11:package */
        {GLx11struct_5, GDx11struct_87, 5},     /* #:display:x11:device */
        {GLx11struct_6, GDx11struct_88, 5},     /* #:display:x11:xmax */
        {GLx11struct_7, GDx11struct_89, 5},     /* #:display:x11:ymax */
        {GLx11struct_8, GDx11struct_90, 5},     /* #:display:x11:eventmode */
        {GLx11struct_9, GDx11struct_91, 5},     /* #:display:x11:prologuep */
        {GLx11struct_10,        GDx11struct_92, 5},     /* #:display:x11:keyboard-focus-window
 */
        {GLx11struct_11,        GDx11struct_93, 5},     /* #:display:x11:window */
        {GLx11struct_12,        GDx11struct_94, 5},     /* #:display:x11:graph-env */
        {GLx11struct_13,        GDx11struct_95, 5},     /* #:display:x11:root-window */
        {GLx11struct_14,        GDx11struct_96, 5},     /* #:display:x11:main-graph-env */
        {GLx11struct_15,        GDx11struct_97, 5},     /* #:display:x11:background */
        {GLx11struct_16,        GDx11struct_98, 5},     /* #:display:x11:foreground */
        {GLx11struct_17,        GDx11struct_99, 5},     /* #:display:x11:windows */
        {GLx11struct_18,        GDx11struct_100,        5},     /* #:display:x11:bitmaps */
        {GLx11struct_19,        GDx11struct_101,        5},     /* #:display:x11:menus */
        {GLx11struct_20,        GDx11struct_102,        5},     /* #:display:x11:colors */
        {GLx11struct_21,        GDx11struct_103,        5},     /* #:display:x11:font-names */
        {GLx11struct_22,        GDx11struct_104,        5},     /* #:display:x11:pattern-bitmaps */
        {GLx11struct_23,        GDx11struct_105,        5},     /* #:display:x11:cursor-bitmaps */
        {GLx11struct_24,        GDx11struct_106,        5},     /* #:display:x11:extend */
        {GLx11struct_25,        GDx11struct_107,        5},     /* #:display:x11:graph-envs */
        {GLx11struct_26,        GDx11struct_108,        5},     /* #:display:x11:current-selection */
        {GLx11struct_27,        GDx11struct_109,        5},     /* #:display:x11:resource */
        {GLx11struct_28,        GDx11struct_110,        5},     /* #:display:x11:named-cursors */
        {GLx11struct_29,        GDx11struct_111,        5},     /* #:display:x11:stipple-bitmaps */
        {GLx11struct_30,        GDx11struct_112,        5},     /* #:display:x11:file-descriptor */
        {GLx11struct_31,        GDx11struct_113,        5},     /* #:display:x11:events-in-socket */
        {GLx11struct_32,        GDx11struct_114,        5},     /* #:display:x11:reread */
        {GLx11struct_33,        GDx11struct_115,        5},     /* #:display:x11:drawing-flag */
        {GLx11struct_34,        GDx11struct_116,        5},     /* #:display:x11:events-list */
        {GLx11struct_35,        GDx11struct_117,        5},     /* #:display:x11:function-keys */
        {GLx11struct_36,        GDx11struct_118,        5},     /* #:display:x11:line-style-vector */
        {GLx11struct_37,        GDx11struct_119,        5},     /* #:display:x11:pattern-vector */
        {GLx11struct_38,        GDx11struct_120,        5},     /* #:display:x11:cursor-vector */
        {GLx11struct_39,        GDx11struct_121,        5},     /* #:display:x11:font-vector */
        {GLx11struct_40,        GDx11struct_122,        5},     /* #:display:x11:mode-vector */
        {GLx11struct_41,        GDx11struct_123,        5},     /* #:display:x11:version */
        {GLx11struct_42,        GDx11struct_124,        5},     /* #:display:x11:top-events-list */
        {GLx11struct_43,        GDx11struct_125,        5},     /* #:display:x11:opaque-events-list */
        {GLx11struct_44,        GDx11struct_126,        5},     /* #:display:x11:
transparent-events-list */
        {GLx11struct_45,        GDx11struct_127,        5},     /* #:display:x11:top-events-mask */
        {GLx11struct_46,        GDx11struct_128,        5},     /* #:display:x11:opaque-events-mask */
        {GLx11struct_47,        GDx11struct_129,        5},     /* #:display:x11:
transparent-events-mask */
        {GLx11struct_48,        GDx11struct_130,        5},     /* #:display:x11:reverse-bit-flag */
        {GLx11struct_49,        GDx11struct_131,        5},     /* #:display:x11:default-window-type */
        {GLx11struct_50,        GDx11struct_132,        5},     /* #:display:x11:args-vector */
        {GLx11struct_51,        GDx11struct_133,        5},     /* #:display:x11:depth */
        {GLx11struct_52,        GDx11struct_134,        5},     /* #:display:x11:display-class */
        {GLx11struct_53,        GDx11struct_135,        5},     /* #:display:x11:top-window-border */
        {GLx11struct_54,        GDx11struct_136,        5},     /* #:display:x11:subwindow-border */
        {GLx11struct_55,        GDx11struct_137,        5},     /* #:display:x11:graph-env-mode */
        {GLx11struct_56,        GDx11struct_138,        5},     /* #:display:x11:drag-event-p */
        {GLx11struct_57,        GDx11struct_139,        5},     /* #:display:x11:move-event-p */
        {GLx11struct_58,        GDx11struct_140,        5},     /* #:display:x11:functionkey-event-p */
        {GLx11struct_59,        GDx11struct_141,        5},     /* #:display:x11:ascii-event-p */
        {GLx11struct_60,        GDx11struct_142,        5},     /* #:display:x11:unmap-window-p */
        {GLx11struct_61,        GDx11struct_143,        5},     /* #:display:x11:map-window-p */
        {GLx11struct_62,        GDx11struct_144,        5},     /* #:display:x11:client-message-p */
        {GLx11struct_63,        GDx11struct_145,        5},     /* #:display:x11:visibility-change-p */
        {GLx11struct_64,        GDx11struct_146,        5},     /* #:display:x11:reparent-notify-p */
        {GLx11struct_65,        GDx11struct_147,        5},     /* #:display:x11:event-responses */
        {GLx11struct_66,        GDx11struct_148,        5},     /* #:display:x11:synchrone */
        {GLx11struct_67,        GDx11struct_149,        5},     /* #:display:x11:cursors-alist */
        {GLx11struct_68,        GDx11struct_150,        1},     /* #:x11:bitmap:make */
        {GLx11struct_70,        GDx11struct_151,        1},     /* #:x11:menu:make */
        {GLx11struct_72,        GDx11struct_152,        1},     /* #:image:rectangle:window:
menu-window:make */
        {GLx11struct_74,        GDx11struct_153,        1},     /* #:tclass:x11window:make */
        {GLx11struct_76,        GDx11struct_154,        1},     /* #:tclass:x11window:opaque-window:
make */
        {GLx11struct_78,        GDx11struct_155,        1},     /* #:tclass:x11window:opaque-window:
top-window:make */
        {GLx11struct_80,        GDx11struct_156,        1},     /* #:tclass:x11window:
transparent-window:make */
        {GLx11struct_82,        GDx11struct_157,        12},    /* #:display:x11:top-opaque-window */
};

struct GellModule GZx11struct = {
        GELLMODULESTAMP,
        GNx11struct,
        GTx11struct,
        GYx11struct,
        74,
        GWx11struct};
