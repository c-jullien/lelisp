/* GELL 15.26: include file for the module: "fft" */
/*             translation done:            "Wed June 16 93 18:18:29 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLfft_1(), GLfft_2(), GLfft_3(), GLfft_5();
static Ptr GLfft_6(), GLfft_7(), GLfft_8(), GLfft_9();
static Ptr GLfft_11(), GLfft_12(), GLfft_14(), GLfft_15();
static Ptr GLfft_17(), GLfft_18(), GLfft_19(), GLfft_21();
static Ptr GLfft_22(), GLfft_23(), GLfft_24(), GLfft_26();
static Ptr GLfft_28(), GLfft_30(), GLfft_32(), GLfft_34();
static Ptr GLfft_35(), GLfft_36(), GLfft_38(), GLfft_39();
static Ptr GLfft_41(), GLfft_43(), GLfft_44(), GLfft_45();
static Ptr GLfft_46(), GLfft_47(), GLfft_48(), GLfft_49();
static Ptr GLfft_50(), GLfft_51(), GLfft_52(), GLfft_53();
static Ptr GLfft_54();

/*      trace functions */
static Ptr GDfft_55(), GDfft_56(), GDfft_57(), GDfft_58();

static Ptr GYfft[40];

static const char GNfft[] = "fft";
static const char GTfft[] = "Wed June 16 93 18:18:29 ";

static struct GellEntry GWfft[] = {
        {GLfft_1,       GDfft_55,       1},     /* check-fft */
        {GLfft_2,       GDfft_56,       1},     /* meter-fft */
        {GLfft_7,       GDfft_57,       2},     /* test-fft */
        {GLfft_39,      GDfft_58,       1},     /* fft-test */
};

struct GellModule GZfft = {
        GELLMODULESTAMP,
        GNfft,
        GTfft,
        GYfft,
        4,
        GWfft};
