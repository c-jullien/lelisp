/* GELL 15.26: include file for the module: "virevent" */
/*             translation done:            "Tue Aug  24 93 10:48:56 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLvirevent_1(), GLvirevent_2(), GLvirevent_3(), GLvirevent_4();
static Ptr GLvirevent_5(), GLvirevent_6(), GLvirevent_7(), GLvirevent_8();
static Ptr GLvirevent_9(), GLvirevent_10(), GLvirevent_11(), GLvirevent_13();
static Ptr GLvirevent_14(), GLvirevent_15(), GLvirevent_16(), GLvirevent_18();
static Ptr GLvirevent_19(), GLvirevent_20(), GLvirevent_21(), GLvirevent_22();
static Ptr GLvirevent_23(), GLvirevent_24(), GLvirevent_25(), GLvirevent_27();
static Ptr GLvirevent_28(), GLvirevent_30(), GLvirevent_31(), GLvirevent_32();
static Ptr GLvirevent_33(), GLvirevent_34(), GLvirevent_35(), GLvirevent_36();
static Ptr GLvirevent_37(), GLvirevent_38(), GLvirevent_40(), GLvirevent_41();
static Ptr GLvirevent_43(), GLvirevent_44(), GLvirevent_45(), GLvirevent_47();
static Ptr GLvirevent_48(), GLvirevent_49(), GLvirevent_51(), GLvirevent_52();
static Ptr GLvirevent_53(), GLvirevent_54(), GLvirevent_55(), GLvirevent_56();
static Ptr GLvirevent_57(), GLvirevent_58(), GLvirevent_59(), GLvirevent_60();
static Ptr GLvirevent_61(), GLvirevent_62(), GLvirevent_63(), GLvirevent_64();
static Ptr GLvirevent_65();

/*      trace functions */
static Ptr GDvirevent_66(), GDvirevent_67(), GDvirevent_68(), GDvirevent_69();
static Ptr GDvirevent_70(), GDvirevent_71(), GDvirevent_72(), GDvirevent_73();
static Ptr GDvirevent_74(), GDvirevent_75(), GDvirevent_76(), GDvirevent_77();
static Ptr GDvirevent_78(), GDvirevent_79(), GDvirevent_80(), GDvirevent_81();
static Ptr GDvirevent_82(), GDvirevent_83(), GDvirevent_84(), GDvirevent_85();
static Ptr GDvirevent_86(), GDvirevent_87(), GDvirevent_88(), GDvirevent_89();
static Ptr GDvirevent_90(), GDvirevent_91(), GDvirevent_92(), GDvirevent_93();

static Ptr GYvirevent[60];

static const char GNvirevent[] = "virevent";
static const char GTvirevent[] = "Tue Aug  24 93 10:48:56 ";

static struct GellEntry GWvirevent[] = {
        {GLvirevent_1,  GDvirevent_66,  1},     /* which-window */
        {GLvirevent_5,  GDvirevent_67,  5},     /* event-mode */
        {GLvirevent_8,  GDvirevent_68,  1},     /* eventp */
        {GLvirevent_9,  GDvirevent_69,  5},     /* read-event */
        {GLvirevent_14, GDvirevent_70,  5},     /* peek-event */
        {GLvirevent_19, GDvirevent_71,  1},     /* local-read-event */
        {GLvirevent_23, GDvirevent_72,  1},     /* flush-event */
        {GLvirevent_24, GDvirevent_73,  5},     /* add-event */
        {GLvirevent_25, GDvirevent_74,  2},     /* grab-event */
        {GLvirevent_34, GDvirevent_75,  1},     /* ungrab-event */
        {GLvirevent_35, GDvirevent_76,  1},     /* itsoft-event */
        {GLvirevent_36, GDvirevent_77,  5},     /* read-mouse */
        {GLvirevent_41, GDvirevent_78,  3},     /* allow-event */
        {GLvirevent_45, GDvirevent_79,  3},     /* disallow-event */
        {GLvirevent_49, GDvirevent_80,  3},     /* allowed-event-p */
        {GLvirevent_53, GDvirevent_81,  5},     /* #:display:event-mode */
        {GLvirevent_54, GDvirevent_82,  5},     /* #:display:eventp */
        {GLvirevent_55, GDvirevent_83,  5},     /* #:display:read-event */
        {GLvirevent_56, GDvirevent_84,  5},     /* #:display:peek-event */
        {GLvirevent_57, GDvirevent_85,  5},     /* #:display:flush-event */
        {GLvirevent_58, GDvirevent_86,  5},     /* #:display:add-event */
        {GLvirevent_59, GDvirevent_87,  5},     /* #:display:grab-event */
        {GLvirevent_60, GDvirevent_88,  5},     /* #:display:ungrab-event */
        {GLvirevent_61, GDvirevent_89,  5},     /* #:display:isoft-event */
        {GLvirevent_62, GDvirevent_90,  5},     /* #:display:allow-event */
        {GLvirevent_63, GDvirevent_91,  5},     /* #:display:disallow-event */
        {GLvirevent_64, GDvirevent_92,  5},     /* #:display:allowed-event-p */
        {GLvirevent_65, GDvirevent_93,  5},     /* #:display:read-mouse */
};

struct GellModule GZvirevent = {
        GELLMODULESTAMP,
        GNvirevent,
        GTvirevent,
        GYvirevent,
        28,
        GWvirevent};
