/* GELL 15.26: include file for the module: "extend" */
/*             translation done:            "Sat Oct   7 17 20:53:57 " */

/*	impure LLM3 predefined	*/
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

/*	LLM3 functions	*/
extern Ptr GXunbind7(void), GXunbind5(void), GXunbind3(void), GXunbind1(void);
extern Ptr GXpopja4(void), GXpopj9(void), GXpopj8(void), GXpopj7(void);
extern Ptr GXpopj6(void), GXpopj5(void), GXpopj4(void), GXpopj3(void);
extern Ptr GXpopj2(void), GXpopj1(void), GXpopj0(void), GXini_ext(void);
extern Ptr GXloc(void), GXapply(void), GXevalcar(void), GXerrwna(void);
extern Ptr GXerrnva(void), GXerrnla(void), GXerrnia(void), GXprobjt(void);
extern Ptr GXprobj(void), GXgcnumb(void), GXgcfloat(void), GXgccons(void);
extern Ptr GXerrfs(void), GXinicst(void), GXinisymb(void), GXevalan(void);
extern Ptr GXevalt(void);

/*	intern functions	*/
static Ptr GLextend_1(void);

static Ptr GYextend[1];

static const char GNextend[] = "extend";
static const char GTextend[] = "Sat Oct   7 17 20:53:57 ";

struct GellModule GZextend = {
	GELLMODULESTAMP,
	GNextend,
	GTextend,
	GYextend,
	0,
	0};
