/* GELL 15.26: include file for the module: "gdate" */
/*             translation done:            "Thu Jun  24 93 15:12:17 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLgdate_1(), GLgdate_2(), GLgdate_3(), GLgdate_4();
static Ptr GLgdate_5(), GLgdate_6(), GLgdate_7(), GLgdate_8();
static Ptr GLgdate_9(), GLgdate_10(), GLgdate_11(), GLgdate_13();
static Ptr GLgdate_14(), GLgdate_15(), GLgdate_16(), GLgdate_18();
static Ptr GLgdate_19(), GLgdate_20(), GLgdate_21(), GLgdate_22();
static Ptr GLgdate_23(), GLgdate_24(), GLgdate_25(), GLgdate_26();
static Ptr GLgdate_27(), GLgdate_28(), GLgdate_30(), GLgdate_32();
static Ptr GLgdate_33(), GLgdate_35(), GLgdate_37(), GLgdate_38();
static Ptr GLgdate_39(), GLgdate_40(), GLgdate_42(), GLgdate_43();
static Ptr GLgdate_45(), GLgdate_46(), GLgdate_47(), GLgdate_48();
static Ptr GLgdate_50(), GLgdate_51(), GLgdate_53(), GLgdate_54();
static Ptr GLgdate_55(), GLgdate_57(), GLgdate_58(), GLgdate_60();
static Ptr GLgdate_61(), GLgdate_62(), GLgdate_64(), GLgdate_65();
static Ptr GLgdate_66(), GLgdate_67(), GLgdate_68(), GLgdate_69();
static Ptr GLgdate_70(), GLgdate_71(), GLgdate_72(), GLgdate_73();
static Ptr GLgdate_75(), GLgdate_76(), GLgdate_78(), GLgdate_79();
static Ptr GLgdate_80(), GLgdate_81(), GLgdate_83(), GLgdate_84();
static Ptr GLgdate_85(), GLgdate_86(), GLgdate_87(), GLgdate_88();
static Ptr GLgdate_90(), GLgdate_91(), GLgdate_93(), GLgdate_94();
static Ptr GLgdate_95(), GLgdate_96(), GLgdate_98(), GLgdate_99();
static Ptr GLgdate_100(), GLgdate_101(), GLgdate_102(), GLgdate_103();
static Ptr GLgdate_104(), GLgdate_105(), GLgdate_106(), GLgdate_107();
static Ptr GLgdate_108();

/*      trace functions */
static Ptr GDgdate_109(), GDgdate_110(), GDgdate_111(), GDgdate_112();
static Ptr GDgdate_113(), GDgdate_114(), GDgdate_115(), GDgdate_116();
static Ptr GDgdate_117(), GDgdate_118(), GDgdate_119(), GDgdate_120();
static Ptr GDgdate_121(), GDgdate_122(), GDgdate_123(), GDgdate_124();
static Ptr GDgdate_125(), GDgdate_126(), GDgdate_127(), GDgdate_128();
static Ptr GDgdate_129(), GDgdate_130(), GDgdate_131(), GDgdate_132();
static Ptr GDgdate_133(), GDgdate_134(), GDgdate_135(), GDgdate_136();
static Ptr GDgdate_137(), GDgdate_138(), GDgdate_139(), GDgdate_140();
static Ptr GDgdate_141(), GDgdate_142(), GDgdate_143(), GDgdate_144();
static Ptr GDgdate_145(), GDgdate_146(), GDgdate_147(), GDgdate_148();
static Ptr GDgdate_149(), GDgdate_150(), GDgdate_151(), GDgdate_152();
static Ptr GDgdate_153(), GDgdate_154(), GDgdate_155(), GDgdate_156();
static Ptr GDgdate_157(), GDgdate_158(), GDgdate_159(), GDgdate_160();
static Ptr GDgdate_161();

static Ptr GYgdate[104];

static const char GNgdate[] = "gdate";
static const char GTgdate[] = "Thu Jun  24 93 15:12:17 ";

static struct GellEntry GWgdate[] = {
        {GLgdate_1,     GDgdate_109,    1},     /* (type-of (date)) */
        {GLgdate_2,     GDgdate_110,    1},     /* (#:date:day d 1) */
        {GLgdate_3,     GDgdate_111,    1},     /* (#:date:month d 1) */
        {GLgdate_4,     GDgdate_112,    1},     /* (#:date:year d 0) */
        {GLgdate_5,     GDgdate_113,    1},     /* (week-day-number d) */
        {GLgdate_6,     GDgdate_114,    1},     /* (#:date:year d 1990) */
        {GLgdate_7,     GDgdate_115,    1},     /* (year-day-number d) */
        {GLgdate_8,     GDgdate_116,    1},     /* (#:date:month d 2) */
        {GLgdate_9,     GDgdate_117,    1},     /* (#:date:month d 3) */
        {GLgdate_10,    GDgdate_118,    1},     /* (#:date:year d 1992) */
        {GLgdate_11,    GDgdate_119,    1},     /* (null (datep d)) */
        {GLgdate_14,    GDgdate_120,    1},     /* (datep ()) */
        {GLgdate_15,    GDgdate_121,    1},     /* (type-of (short-string-date d)) */
        {GLgdate_16,    GDgdate_122,    1},     /* (< 0 (week-day-number d) 8) */
        {GLgdate_19,    GDgdate_123,    1},     /* (leap-year-p 1986) */
        {GLgdate_20,    GDgdate_124,    1},     /* (leap-year-p 1988) */
        {GLgdate_21,    GDgdate_125,    1},     /* (leap-year-p 1989) */
        {GLgdate_22,    GDgdate_126,    1},     /* (leap-year-p 1900) */
        {GLgdate_23,    GDgdate_127,    1},     /* (leap-year-p 2000) */
        {GLgdate_24,    GDgdate_128,    1},     /* (leap-number 0) */
        {GLgdate_25,    GDgdate_129,    1},     /* (leap-number 1) */
        {GLgdate_26,    GDgdate_130,    1},     /* (leap-number 4) */
        {GLgdate_27,    GDgdate_131,    1},     /* (leap-number 5) */
        {GLgdate_28,    GDgdate_132,    1},     /* (sub (leap-number 2001) (leap-number 2000))
 */
        {GLgdate_33,    GDgdate_133,    1},     /* (sub (leap-number 1001) (leap-number 1000))
 */
        {GLgdate_38,    GDgdate_134,    1},     /* (current-language 'french) */
        {GLgdate_39,    GDgdate_135,    1},     /* (current-language 'english) */
        {GLgdate_40,    GDgdate_136,    1},     /* (eqstring f (short-string-date d)) */
        {GLgdate_43,    GDgdate_137,    1},     /* (progn (sleep 1) ()) */
        {GLgdate_46,    GDgdate_138,    1},     /* (type-of (long-string-date d)) */
        {GLgdate_47,    GDgdate_139,    1},     /* (eqdate d d) */
        {GLgdate_48,    GDgdate_140,    1},     /* (eqdate d (date)) */
        {GLgdate_51,    GDgdate_141,    1},     /* (<date d (date)) */
        {GLgdate_54,    GDgdate_142,    1},     /* (<=date d d) */
        {GLgdate_55,    GDgdate_143,    1},     /* (>date d (date)) */
        {GLgdate_58,    GDgdate_144,    1},     /* (>=date d (date)) */
        {GLgdate_61,    GDgdate_145,    1},     /* (> 1. (- (number-to-date n) dd)) */
        {GLgdate_65,    GDgdate_146,    1},     /* (date-to-number (number-to-date 0)) */
        {GLgdate_66,    GDgdate_147,    1},     /* (date-to-number (number-to-date 1)) */
        {GLgdate_67,    GDgdate_148,    1},     /* (date-to-number (number-to-date 31)) */
        {GLgdate_68,    GDgdate_149,    1},     /* (date-to-number (number-to-date 32)) */
        {GLgdate_69,    GDgdate_150,    1},     /* (date-to-number (number-to-date 365)) */
        {GLgdate_70,    GDgdate_151,    1},     /* (date-to-number (number-to-date 366)) */
        {GLgdate_71,    GDgdate_152,    1},     /* (date-to-number (number-to-date 12345)) */
        {GLgdate_72,    GDgdate_153,    1},     /* (date-to-number (number-to-date 123456.)) */
        {GLgdate_73,    GDgdate_154,    1},     /* (eqstring f (long-string-date d)) */
        {GLgdate_76,    GDgdate_155,    1},     /* 
(progn (setq a (temporary-file-pathname testd1)) (with ((outchan (openo a))) (
print Hello) (close (outchan))) (sleep 1) ()) */
        {GLgdate_91,    GDgdate_156,    1},     /* 
(progn (setq b (temporary-file-pathname testd2)) (with ((outchan (openo b))) (
print Hello) (close (outchan))) ()) */
        {GLgdate_104,   GDgdate_157,    1},     /* (<date d1 d2) */
        {GLgdate_105,   GDgdate_158,    1},     /* (deletefile a) */
        {GLgdate_106,   GDgdate_159,    1},     /* (deletefile b) */
        {GLgdate_107,   GDgdate_160,    1},     /* (date-of-file ()) */
        {GLgdate_108,   GDgdate_161,    1},     /* (date-of-file ipar007) */
};

struct GellModule GZgdate = {
        GELLMODULESTAMP,
        GNgdate,
        GTgdate,
        GYgdate,
        53,
        GWgdate};
