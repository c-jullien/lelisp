/* GELL 15.26: include file for the module: "testextmin" */
/*             translation done:            "Fri June  4 93 19:21:16 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern long cmoinsun();
extern double ctest();

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLtestextmin_1(), GLtestextmin_2();

/*      trace functions */
static Ptr GDtestextmin_3(), GDtestextmin_4();

static Ptr GYtestextmin[10];

static const char GNtestextmin[] = "testextmin";
static const char GTtestextmin[] = "Fri June  4 93 19:21:16 ";

static struct GellEntry GWtestextmin[] = {
        {GLtestextmin_1,        GDtestextmin_3, 1},     /* _cmoinsun */
        {GLtestextmin_2,        GDtestextmin_4, 5},     /* ctest */
};

struct GellModule GZtestextmin = {
        GELLMODULESTAMP,
        GNtestextmin,
        GTtestextmin,
        GYtestextmin,
        2,
        GWtestextmin};
