/* GELL 15.26: include file for the module: "x11bitmap" */
/*             translation done:            "Tue Aug  24 93 10:48:17 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLx11bitmap_1(), GLx11bitmap_3(), GLx11bitmap_5(), GLx11bitmap_6();
static Ptr GLx11bitmap_8(), GLx11bitmap_10(), GLx11bitmap_11(), GLx11bitmap_12();
static Ptr GLx11bitmap_13(), GLx11bitmap_14(), GLx11bitmap_16(), GLx11bitmap_17();
static Ptr GLx11bitmap_18(), GLx11bitmap_19(), GLx11bitmap_21(), GLx11bitmap_22();
static Ptr GLx11bitmap_23(), GLx11bitmap_24(), GLx11bitmap_25(), GLx11bitmap_26();
static Ptr GLx11bitmap_27(), GLx11bitmap_28(), GLx11bitmap_29(), GLx11bitmap_30();
static Ptr GLx11bitmap_31(), GLx11bitmap_33(), GLx11bitmap_34(), GLx11bitmap_35();
static Ptr GLx11bitmap_36(), GLx11bitmap_37(), GLx11bitmap_38(), GLx11bitmap_39();
static Ptr GLx11bitmap_41(), GLx11bitmap_42(), GLx11bitmap_44(), GLx11bitmap_46();
static Ptr GLx11bitmap_47(), GLx11bitmap_49(), GLx11bitmap_51(), GLx11bitmap_52();
static Ptr GLx11bitmap_53();

/*      trace functions */
static Ptr GDx11bitmap_54(), GDx11bitmap_55(), GDx11bitmap_56(), GDx11bitmap_57();
static Ptr GDx11bitmap_58(), GDx11bitmap_59(), GDx11bitmap_60(), GDx11bitmap_61();
static Ptr GDx11bitmap_62(), GDx11bitmap_63(), GDx11bitmap_64(), GDx11bitmap_65();
static Ptr GDx11bitmap_66(), GDx11bitmap_67(), GDx11bitmap_68();

static Ptr GYx11bitmap[42];

static const char GNx11bitmap[] = "x11bitmap";
static const char GTx11bitmap[] = "Tue Aug  24 93 10:48:17 ";

static struct GellEntry GWx11bitmap[] = {
        {GLx11bitmap_1, GDx11bitmap_54, 3},     /* #:display:x11:create-bitmap */
        {GLx11bitmap_11,        GDx11bitmap_55, 3},     /* #:display:x11:kill-bitmap */
        {GLx11bitmap_13,        GDx11bitmap_56, 5},     /* #:display:x11:get-bit-line */
        {GLx11bitmap_14,        GDx11bitmap_57, 5},     /* #:display:x11:set-bit-line */
        {GLx11bitmap_17,        GDx11bitmap_58, 5},     /* #:display:x11:bmref */
        {GLx11bitmap_18,        GDx11bitmap_59, 5},     /* #:display:x11:bmset */
        {GLx11bitmap_23,        GDx11bitmap_60, 5},     /* #:display:x11:get-byte-line */
        {GLx11bitmap_24,        GDx11bitmap_61, 5},     /* #:display:x11:set-byte-line */
        {GLx11bitmap_25,        GDx11bitmap_62, 5},     /* #:display:x11:byteref */
        {GLx11bitmap_26,        GDx11bitmap_63, 5},     /* #:display:x11:byteset */
        {GLx11bitmap_36,        GDx11bitmap_64, 5},     /* #:display:x11:bitblit */
        {GLx11bitmap_39,        GDx11bitmap_65, 4},     /* #:display:x11:create-window-bitmap */
        {GLx11bitmap_42,        GDx11bitmap_66, 4},     /* #:display:x11:subst-colors */
        {GLx11bitmap_47,        GDx11bitmap_67, 4},     /* #:display:x11:create-stipple */
        {GLx11bitmap_53,        GDx11bitmap_68, 3},     /* #:display:x11:kill-stipple */
};

struct GellModule GZx11bitmap = {
        GELLMODULESTAMP,
        GNx11bitmap,
        GTx11bitmap,
        GYx11bitmap,
        15,
        GWx11bitmap};
