/* GELL 15.26: include file for the module: "x11event" */
/*             translation done:            "Tue Aug  24 93 10:48:24 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLx11event_1(), GLx11event_2(), GLx11event_4(), GLx11event_5();
static Ptr GLx11event_7(), GLx11event_8(), GLx11event_9(), GLx11event_10();
static Ptr GLx11event_11(), GLx11event_12(), GLx11event_14(), GLx11event_15();
static Ptr GLx11event_16(), GLx11event_17(), GLx11event_19(), GLx11event_20();
static Ptr GLx11event_21(), GLx11event_22(), GLx11event_24(), GLx11event_25();
static Ptr GLx11event_27(), GLx11event_28(), GLx11event_29(), GLx11event_30();
static Ptr GLx11event_31(), GLx11event_32(), GLx11event_33(), GLx11event_34();
static Ptr GLx11event_35(), GLx11event_36(), GLx11event_37(), GLx11event_38();
static Ptr GLx11event_39(), GLx11event_40(), GLx11event_41(), GLx11event_42();
static Ptr GLx11event_43(), GLx11event_44(), GLx11event_45(), GLx11event_46();
static Ptr GLx11event_47(), GLx11event_49(), GLx11event_50(), GLx11event_52();
static Ptr GLx11event_53(), GLx11event_54(), GLx11event_55(), GLx11event_56();
static Ptr GLx11event_58(), GLx11event_59(), GLx11event_60(), GLx11event_61();
static Ptr GLx11event_62(), GLx11event_63(), GLx11event_64(), GLx11event_65();
static Ptr GLx11event_66(), GLx11event_67(), GLx11event_69(), GLx11event_71();
static Ptr GLx11event_73(), GLx11event_75(), GLx11event_76(), GLx11event_78();
static Ptr GLx11event_80(), GLx11event_82(), GLx11event_84(), GLx11event_86();
static Ptr GLx11event_88(), GLx11event_89();

/*      trace functions */
static Ptr GDx11event_90(), GDx11event_91(), GDx11event_92(), GDx11event_93();
static Ptr GDx11event_94(), GDx11event_95(), GDx11event_96(), GDx11event_97();
static Ptr GDx11event_98(), GDx11event_99(), GDx11event_100(), GDx11event_101();
static Ptr GDx11event_102(), GDx11event_103(), GDx11event_104(), GDx11event_105();
static Ptr GDx11event_106(), GDx11event_107(), GDx11event_108(), GDx11event_109();
static Ptr GDx11event_110(), GDx11event_111(), GDx11event_112(), GDx11event_113();
static Ptr GDx11event_114(), GDx11event_115(), GDx11event_116(), GDx11event_117();
static Ptr GDx11event_118(), GDx11event_119(), GDx11event_120(), GDx11event_121();

static Ptr GYx11event[81];

static const char GNx11event[] = "x11event";
static const char GTx11event[] = "Tue Aug  24 93 10:48:24 ";

static struct GellEntry GWx11event[] = {
        {GLx11event_1,  GDx11event_90,  3},     /* #:display:x11:event-mode */
        {GLx11event_2,  GDx11event_91,  2},     /* #:display:x11:flush-event */
        {GLx11event_5,  GDx11event_92,  2},     /* #:display:x11:eventp */
        {GLx11event_8,  GDx11event_93,  3},     /* #:display:x11:read-event */
        {GLx11event_15, GDx11event_94,  3},     /* #:display:x11:peek-event */
        {GLx11event_20, GDx11event_95,  3},     /* #:display:x11:read-mouse */
        {GLx11event_22, GDx11event_96,  3},     /* #:display:x11:add-event */
        {GLx11event_28, GDx11event_97,  3},     /* #:display:x11:grab-event */
        {GLx11event_29, GDx11event_98,  2},     /* #:display:x11:ungrab-event */
        {GLx11event_30, GDx11event_99,  2},     /* #:display:x11:itsoft-event */
        {GLx11event_31, GDx11event_100, 3},     /* #:display:x11:default-event-code */
        {GLx11event_32, GDx11event_101, 3},     /* #:display:x11:ascii-event-code */
        {GLx11event_33, GDx11event_102, 3},     /* #:display:x11:functionkey-event-code
 */
        {GLx11event_34, GDx11event_103, 3},     /* #:display:x11:down-event-code */
        {GLx11event_35, GDx11event_104, 3},     /* #:display:x11:up-event-code */
        {GLx11event_36, GDx11event_105, 3},     /* #:display:x11:enterwindow-event-code
 */
        {GLx11event_37, GDx11event_106, 3},     /* #:display:x11:leavewindow-event-code
 */
        {GLx11event_38, GDx11event_107, 3},     /* #:display:x11:movedrag-event-code */
        {GLx11event_39, GDx11event_108, 3},     /* #:display:x11:
keyboard-focus-event-code */
        {GLx11event_40, GDx11event_109, 3},     /* #:display:x11:
repaint-window-event-code */
        {GLx11event_41, GDx11event_110, 3},     /* #:display:x11:kill-window-event-code
 */
        {GLx11event_42, GDx11event_111, 3},     /* #:display:x11:modify-window-event-code
 */
        {GLx11event_43, GDx11event_112, 3},     /* #:display:x11:unmap-window-code */
        {GLx11event_44, GDx11event_113, 3},     /* #:display:x11:map-window-code */
        {GLx11event_45, GDx11event_114, 3},     /* #:display:x11:client-message-code */
        {GLx11event_53, GDx11event_115, 3},     /* #:display:x11:visibility-change-code
 */
        {GLx11event_54, GDx11event_116, 3},     /* #:display:x11:reparent-notify-code */
        {GLx11event_55, GDx11event_117, 4},     /* #:display:x11:parse-event */
        {GLx11event_56, GDx11event_118, 2},     /* #:display:x11:compute-event-mask */
        {GLx11event_62, GDx11event_119, 3},     /* #:display:x11:allow-event */
        {GLx11event_76, GDx11event_120, 3},     /* #:display:x11:disallow-event */
        {GLx11event_89, GDx11event_121, 3},     /* #:display:x11:allowed-event-p */
};

struct GellModule GZx11event = {
        GELLMODULESTAMP,
        GNx11event,
        GTx11event,
        GYx11event,
        32,
        GWx11event};
