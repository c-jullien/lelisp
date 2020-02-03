/* GELL 15.26: include file for the module: "vt100" */
/*             translation done:            "Wed June 16 93 18:02:58 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLvt100_1(), GLvt100_2(), GLvt100_4(), GLvt100_5();
static Ptr GLvt100_7(), GLvt100_8(), GLvt100_9(), GLvt100_10();
static Ptr GLvt100_11(), GLvt100_12(), GLvt100_13(), GLvt100_14();

/*      trace functions */
static Ptr GDvt100_15(), GDvt100_16(), GDvt100_17(), GDvt100_18();
static Ptr GDvt100_19(), GDvt100_20(), GDvt100_21();

static Ptr GYvt100[15];

static const char GNvt100[] = "vt100";
static const char GTvt100[] = "Wed June 16 93 18:02:58 ";

static struct GellEntry GWvt100[] = {
        {GLvt100_1,     GDvt100_15,     3},     /* #:tty:vt100:tycursor */
        {GLvt100_8,     GDvt100_16,     1},     /* #:tty:vt100:tycls */
        {GLvt100_9,     GDvt100_17,     1},     /* #:tty:vt100:tycleol */
        {GLvt100_10,    GDvt100_18,     1},     /* #:tty:vt100:tycleos */
        {GLvt100_11,    GDvt100_19,     2},     /* #:tty:vt100:tyattrib */
        {GLvt100_12,    GDvt100_20,     1},     /* #:tty:vt100:typrologue */
        {GLvt100_14,    GDvt100_21,     1},     /* #:tty:vt100:tyepilogue */
};

struct GellModule GZvt100 = {
        GELLMODULESTAMP,
        GNvt100,
        GTvt100,
        GYvt100,
        7,
        GWvt100};
