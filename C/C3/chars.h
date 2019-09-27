/* GELL 15.26: include file for the module: "chars" */
/*             translation done:            "Sat Oct   7 17 20:53:57 " */

/*	impure LLM3 predefined	*/
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GImstack;
extern Ptr GIfcons;
extern Ptr GIbvar;

/*	LLM3 functions	*/
extern Ptr GXunbind7(void), GXunbind5(void), GXunbind3(void), GXunbind1(void);
extern Ptr GXpopja4(void), GXpopj9(void), GXpopj8(void), GXpopj7(void);
extern Ptr GXpopj6(void), GXpopj5(void), GXpopj4(void), GXpopj3(void);
extern Ptr GXpopj2(void), GXpopj1(void), GXpopj0(void), GXini_chr(void);
extern Ptr GXinicst(void), GXinisymb(void), GXgccons(void), GXevalan(void);
extern Ptr GXevalt(void);

/*	intern functions	*/
static Ptr GLchars_1(void);

static Ptr GYchars[1];

static const char GNchars[] = "chars";
static const char GTchars[] = "Sat Oct   7 17 20:53:57 ";

struct GellModule GZchars = {
	GELLMODULESTAMP,
	GNchars,
	GTchars,
	GYchars,
	0,
	0};
