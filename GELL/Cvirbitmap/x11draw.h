/* GELL 15.26: include file for the module: "x11draw" */
/*             translation done:            "Tue Aug  24 93 10:48:21 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLx11draw_1(), GLx11draw_2(), GLx11draw_4(), GLx11draw_6();
static Ptr GLx11draw_7(), GLx11draw_8(), GLx11draw_9(), GLx11draw_10();
static Ptr GLx11draw_11(), GLx11draw_12(), GLx11draw_13(), GLx11draw_14();
static Ptr GLx11draw_16(), GLx11draw_17(), GLx11draw_18(), GLx11draw_19();
static Ptr GLx11draw_20(), GLx11draw_21(), GLx11draw_23(), GLx11draw_24();
static Ptr GLx11draw_25(), GLx11draw_26(), GLx11draw_27(), GLx11draw_28();
static Ptr GLx11draw_29(), GLx11draw_30(), GLx11draw_31(), GLx11draw_32();
static Ptr GLx11draw_33(), GLx11draw_34(), GLx11draw_35(), GLx11draw_36();
static Ptr GLx11draw_37(), GLx11draw_39(), GLx11draw_41(), GLx11draw_43();
static Ptr GLx11draw_44(), GLx11draw_46(), GLx11draw_47(), GLx11draw_48();
static Ptr GLx11draw_49(), GLx11draw_50(), GLx11draw_51(), GLx11draw_52();
static Ptr GLx11draw_53(), GLx11draw_54(), GLx11draw_55(), GLx11draw_56();
static Ptr GLx11draw_57(), GLx11draw_58(), GLx11draw_59(), GLx11draw_60();
static Ptr GLx11draw_61(), GLx11draw_62(), GLx11draw_63(), GLx11draw_64();
static Ptr GLx11draw_65(), GLx11draw_66(), GLx11draw_67(), GLx11draw_68();
static Ptr GLx11draw_69(), GLx11draw_70(), GLx11draw_71(), GLx11draw_72();
static Ptr GLx11draw_73(), GLx11draw_74();

/*      trace functions */
static Ptr GDx11draw_75(), GDx11draw_76(), GDx11draw_77(), GDx11draw_78();
static Ptr GDx11draw_79(), GDx11draw_80(), GDx11draw_81(), GDx11draw_82();
static Ptr GDx11draw_83(), GDx11draw_84(), GDx11draw_85(), GDx11draw_86();
static Ptr GDx11draw_87(), GDx11draw_88(), GDx11draw_89(), GDx11draw_90();
static Ptr GDx11draw_91(), GDx11draw_92(), GDx11draw_93(), GDx11draw_94();
static Ptr GDx11draw_95(), GDx11draw_96();

static Ptr GYx11draw[55];

static const char GNx11draw[] = "x11draw";
static const char GTx11draw[] = "Tue Aug  24 93 10:48:21 ";

static struct GellEntry GWx11draw[] = {
        {GLx11draw_1,   GDx11draw_75,   5},     /* #:display:x11:draw-cursor */
        {GLx11draw_8,   GDx11draw_76,   5},     /* #:display:x11:draw-substring */
        {GLx11draw_14,  GDx11draw_77,   5},     /* #:display:x11:draw-cn */
        {GLx11draw_17,  GDx11draw_78,   5},     /* #:display:x11:draw-substring-nobackground
 */
        {GLx11draw_21,  GDx11draw_79,   5},     /* #:display:x11:draw-cn-nobackground */
        {GLx11draw_24,  GDx11draw_80,   5},     /* #:display:x11:draw-point */
        {GLx11draw_25,  GDx11draw_81,   5},     /* #:display:x11:draw-line */
        {GLx11draw_26,  GDx11draw_82,   5},     /* #:display:x11:draw-rectangle */
        {GLx11draw_27,  GDx11draw_83,   5},     /* #:display:x11:draw-arc */
        {GLx11draw_28,  GDx11draw_84,   5},     /* #:display:x11:draw-ellipse */
        {GLx11draw_29,  GDx11draw_85,   5},     /* #:display:x11:draw-circle */
        {GLx11draw_30,  GDx11draw_86,   5},     /* #:display:x11:fill-rectangle */
        {GLx11draw_34,  GDx11draw_87,   5},     /* #:display:x11:highlight-rectangle */
        {GLx11draw_49,  GDx11draw_88,   5},     /* #:display:x11:fill-arc */
        {GLx11draw_55,  GDx11draw_89,   5},     /* #:display:x11:fill-ellipse */
        {GLx11draw_59,  GDx11draw_90,   5},     /* #:display:x11:fill-circle */
        {GLx11draw_63,  GDx11draw_91,   5},     /* #:display:x11:fill-area */
        {GLx11draw_67,  GDx11draw_92,   5},     /* #:display:x11:draw-polyline */
        {GLx11draw_68,  GDx11draw_93,   5},     /* #:display:x11:draw-polymarker */
        {GLx11draw_69,  GDx11draw_94,   5},     /* #:display:x11:draw-segments */
        {GLx11draw_70,  GDx11draw_95,   5},     /* #:display:x11:draw-rectangles */
        {GLx11draw_71,  GDx11draw_96,   5},     /* #:display:x11:fill-rectangles */
};

struct GellModule GZx11draw = {
        GELLMODULESTAMP,
        GNx11draw,
        GTx11draw,
        GYx11draw,
        22,
        GWx11draw};
