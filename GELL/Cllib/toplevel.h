/* GELL 15.26: include file for the module: "toplevel" */
/*             translation done:            "Wed June 16 93 18:00:30 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLtoplevel_1(), GLtoplevel_2(), GLtoplevel_3(), GLtoplevel_5();
static Ptr GLtoplevel_6(), GLtoplevel_7(), GLtoplevel_8(), GLtoplevel_9();
static Ptr GLtoplevel_10(), GLtoplevel_11(), GLtoplevel_13(), GLtoplevel_15();
static Ptr GLtoplevel_16(), GLtoplevel_17(), GLtoplevel_18(), GLtoplevel_19();
static Ptr GLtoplevel_21(), GLtoplevel_22(), GLtoplevel_23(), GLtoplevel_24();
static Ptr GLtoplevel_25(), GLtoplevel_26(), GLtoplevel_27(), GLtoplevel_29();
static Ptr GLtoplevel_30(), GLtoplevel_31(), GLtoplevel_32(), GLtoplevel_33();
static Ptr GLtoplevel_34(), GLtoplevel_35(), GLtoplevel_37(), GLtoplevel_38();
static Ptr GLtoplevel_39(), GLtoplevel_40(), GLtoplevel_41(), GLtoplevel_42();
static Ptr GLtoplevel_43(), GLtoplevel_44(), GLtoplevel_45(), GLtoplevel_47();
static Ptr GLtoplevel_48(), GLtoplevel_50(), GLtoplevel_51(), GLtoplevel_53();
static Ptr GLtoplevel_54(), GLtoplevel_55(), GLtoplevel_56(), GLtoplevel_58();
static Ptr GLtoplevel_59(), GLtoplevel_60(), GLtoplevel_62(), GLtoplevel_63();
static Ptr GLtoplevel_65(), GLtoplevel_66(), GLtoplevel_68(), GLtoplevel_69();
static Ptr GLtoplevel_71(), GLtoplevel_72(), GLtoplevel_74();

/*      trace functions */
static Ptr GDtoplevel_75(), GDtoplevel_76(), GDtoplevel_77(), GDtoplevel_78();
static Ptr GDtoplevel_79(), GDtoplevel_80(), GDtoplevel_81();

static Ptr GYtoplevel[76];

static const char GNtoplevel[] = "toplevel";
static const char GTtoplevel[] = "Wed June 16 93 18:00:30 ";

static struct GellEntry GWtoplevel[] = {
        {GLtoplevel_1,  GDtoplevel_75,  6},     /* catcherror */
        {GLtoplevel_6,  GDtoplevel_76,  12},    /* errset */
        {GLtoplevel_8,  GDtoplevel_77,  12},    /* err */
        {GLtoplevel_10, GDtoplevel_78,  1},     /* break */
        {GLtoplevel_11, GDtoplevel_79,  4},     /* syserror */
        {GLtoplevel_25, GDtoplevel_80,  1},     /* toplevel */
        {GLtoplevel_43, GDtoplevel_81,  4},     /* printerror */
};

struct GellModule GZtoplevel = {
        GELLMODULESTAMP,
        GNtoplevel,
        GTtoplevel,
        GYtoplevel,
        7,
        GWtoplevel};
