/* GELL 15.26: include file for the module: "chars" */
/*             translation done:            "Wed June 30 93 17:35:06 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GImstack;
extern Ptr GIfcons;
extern Ptr GIbvar;

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0(), GXini_chr();
extern Ptr GXinicst(), GXinisymb(), GXgccons(), GXevalan();
extern Ptr GXevalt();

/*      intern functions        */
static Ptr GLchars_1();

static Ptr GYchars[1];

static const char GNchars[] = "chars";
static const char GTchars[] = "Wed June 30 93 17:35:06 ";

struct GellModule GZchars = {
        GELLMODULESTAMP,
        GNchars,
        GTchars,
        GYchars,
        0,
        0};
