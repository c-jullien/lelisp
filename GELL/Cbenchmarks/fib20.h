/* GELL 15.26: include file for the module: "fib20" */
/*             translation done:            "Tue Aug  24 93 16:21:49 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLfib20_1(), GLfib20_2(), GLfib20_3(), GLfib20_5();
static Ptr GLfib20_6(), GLfib20_7(), GLfib20_8(), GLfib20_9();
static Ptr GLfib20_11(), GLfib20_13(), GLfib20_15();

/*      trace functions */
static Ptr GDfib20_16(), GDfib20_17(), GDfib20_18();

static Ptr GYfib20[12];

static const char GNfib20[] = "fib20";
static const char GTfib20[] = "Tue Aug  24 93 16:21:49 ";

static struct GellEntry GWfib20[] = {
        {GLfib20_1,     GDfib20_16,     1},     /* check-fib20 */
        {GLfib20_2,     GDfib20_17,     1},     /* meter-fib20 */
        {GLfib20_7,     GDfib20_18,     2},     /* test-fib20 */
};

struct GellModule GZfib20 = {
        GELLMODULESTAMP,
        GNfib20,
        GTfib20,
        GYfib20,
        3,
        GWfib20};
