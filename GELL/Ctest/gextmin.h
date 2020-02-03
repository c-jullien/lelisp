/* GELL 15.26: include file for the module: "gextmin" */
/*             translation done:            "Tue Aug  24 93 14:04:25 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLgextmin_1(), GLgextmin_2();

/*      trace functions */
static Ptr GDgextmin_3(), GDgextmin_4();

static Ptr GYgextmin[7];

static const char GNgextmin[] = "gextmin";
static const char GTgextmin[] = "Tue Aug  24 93 14:04:25 ";

static struct GellEntry GWgextmin[] = {
        {GLgextmin_1,   GDgextmin_3,    1},     /* (_cmoinsun) */
        {GLgextmin_2,   GDgextmin_4,    1},     /* 
(ctest ABCdefghijkl 2.5 1234 (setq v #[(a b) 7777])) */
};

struct GellModule GZgextmin = {
        GELLMODULESTAMP,
        GNgextmin,
        GTgextmin,
        GYgextmin,
        2,
        GWgextmin};
