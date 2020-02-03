/* GELL 15.26: include file for the module: "llpboot" */
/*             translation done:            "Thu Jul   8 93 17:12:48 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLllpboot_1(), GLllpboot_3(), GLllpboot_5(), GLllpboot_7();
static Ptr GLllpboot_8(), GLllpboot_9(), GLllpboot_10(), GLllpboot_11();

/*      trace functions */
static Ptr GDllpboot_12(), GDllpboot_13();

static Ptr GYllpboot[14];

static const char GNllpboot[] = "llpboot";
static const char GTllpboot[] = "Thu Jul   8 93 17:12:48 ";

static struct GellEntry GWllpboot[] = {
        {GLllpboot_1,   GDllpboot_12,   4},     /* setfn */
        {GLllpboot_8,   GDllpboot_13,   5},     /* #:llpatch:new-rmargin */
};

struct GellModule GZllpboot = {
        GELLMODULESTAMP,
        GNllpboot,
        GTllpboot,
        GYllpboot,
        2,
        GWllpboot};
