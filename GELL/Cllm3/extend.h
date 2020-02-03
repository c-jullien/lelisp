/* GELL 15.26: include file for the module: "extend" */
/*             translation done:            "Wed June 30 93 17:35:06 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GImstack;
extern Ptr GIfcons;
extern Ptr GIbvar;
extern Ptr GIhashtab;
extern Ptr GMundef;
extern Ptr GMt;
extern Ptr GMvoid;
extern Ptr GMquote;
extern Ptr GItabtypfn;

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0(), GXini_ext();
extern Ptr GXloc(), GXapply(), GXevalcar(), GXerrwna();
extern Ptr GXerrnva(), GXerrnla(), GXerrnia(), GXprobjt();
extern Ptr GXprobj(), GXgcnumb(), GXgcfloat(), GXgccons();
extern Ptr GXerrfs(), GXinicst(), GXinisymb(), GXevalan();
extern Ptr GXevalt();

/*      intern functions        */
static Ptr GLextend_1();

static Ptr GYextend[1];

static const char GNextend[] = "extend";
static const char GTextend[] = "Wed June 30 93 17:35:06 ";

struct GellModule GZextend = {
        GELLMODULESTAMP,
        GNextend,
        GTextend,
        GYextend,
        0,
        0};
