/* GELL 15.26: include file for the module: "stringio" */
/*             translation done:            "Wed June 16 93 18:02:47 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLstringio_1(), GLstringio_2(), GLstringio_3(), GLstringio_4();
static Ptr GLstringio_5(), GLstringio_6(), GLstringio_8(), GLstringio_9();
static Ptr GLstringio_10(), GLstringio_11(), GLstringio_12(), GLstringio_13();
static Ptr GLstringio_14(), GLstringio_15(), GLstringio_16(), GLstringio_17();
static Ptr GLstringio_18(), GLstringio_19(), GLstringio_20(), GLstringio_21();
static Ptr GLstringio_23(), GLstringio_24(), GLstringio_25(), GLstringio_26();
static Ptr GLstringio_27(), GLstringio_28(), GLstringio_29(), GLstringio_30();
static Ptr GLstringio_31(), GLstringio_32(), GLstringio_33(), GLstringio_34();
static Ptr GLstringio_35(), GLstringio_36(), GLstringio_37(), GLstringio_38();
static Ptr GLstringio_39(), GLstringio_40(), GLstringio_41(), GLstringio_42();
static Ptr GLstringio_43(), GLstringio_44(), GLstringio_45(), GLstringio_46();
static Ptr GLstringio_47(), GLstringio_48(), GLstringio_49(), GLstringio_50();
static Ptr GLstringio_51(), GLstringio_52(), GLstringio_53(), GLstringio_54();
static Ptr GLstringio_55(), GLstringio_56(), GLstringio_57(), GLstringio_58();
static Ptr GLstringio_59(), GLstringio_60(), GLstringio_61(), GLstringio_62();
static Ptr GLstringio_63(), GLstringio_64(), GLstringio_65(), GLstringio_66();
static Ptr GLstringio_68(), GLstringio_69(), GLstringio_71();

/*      trace functions */
static Ptr GDstringio_72(), GDstringio_73(), GDstringio_74(), GDstringio_75();
static Ptr GDstringio_76(), GDstringio_77(), GDstringio_78(), GDstringio_79();
static Ptr GDstringio_80(), GDstringio_81(), GDstringio_82(), GDstringio_83();

static Ptr GYstringio[65];

static const char GNstringio[] = "stringio";
static const char GTstringio[] = "Wed June 16 93 18:02:47 ";

static struct GellEntry GWstringio[] = {
        {GLstringio_1,  GDstringio_72,  2},     /* read-from-string */
        {GLstringio_12, GDstringio_73,  12},    /* with-input-from-string */
        {GLstringio_18, GDstringio_74,  1},     /* #:stringio:in:bol */
        {GLstringio_19, GDstringio_75,  4},     /* #:stringio:in:syserror */
        {GLstringio_21, GDstringio_76,  2},     /* #:stringio:bol */
        {GLstringio_30, GDstringio_77,  2},     /* print-to-string */
        {GLstringio_43, GDstringio_78,  12},    /* with-output-to-string */
        {GLstringio_50, GDstringio_79,  1},     /* #:stringio:out:eol */
        {GLstringio_51, GDstringio_80,  1},     /* #:stringio:out:flush */
        {GLstringio_52, GDstringio_81,  4},     /* #:stringio:out:syserror */
        {GLstringio_53, GDstringio_82,  2},     /* #:stringio:flush */
        {GLstringio_60, GDstringio_83,  2},     /* #:stringio:eol */
};

struct GellModule GZstringio = {
        GELLMODULESTAMP,
        GNstringio,
        GTstringio,
        GYstringio,
        12,
        GWstringio};
