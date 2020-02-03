/* GELL 15.26: include file for the module: "testextern" */
/*             translation done:            "Mon June  7 93 16:17:18 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern long tlno(void);
extern long tlfix();
extern long tlfloat();
extern long tlfloat_();
extern long tlfloat_1();
extern long tlfloat_2();
extern long trfix();
extern long tlstring();
extern long tlstring3();
extern long tlvector();
extern double trfloat();
extern double trfloat1();
extern long ttabint();
extern long ttabintonly();
extern long ttabflt();
extern long tflt_lispcall();
extern long tflt_getsym();
extern long tlt();
extern long tlexternal();
extern double tcfloat();
extern double tcfloat2();
extern double f_s_to_d();
extern Ptr tcstring();
extern Ptr conv1_tcstring();
extern Ptr conv2_tcstring();
extern Ptr tct();
extern Ptr tcexternal();
extern long tlnadic();
extern long tnbmaxi();
extern long tnbmaxf();
extern long tnbmaxri();
extern long tnbmaxrf();
extern double trfixrfloat();
extern long ttabother();
extern Ptr struct_un();
extern long tltout();
extern Ptr tlmalloc();
extern Ptr getsym();
extern Ptr cons_en_c();
extern Ptr vect_to_list();
extern long cfib();
extern long init_fib();
extern Ptr tpafloat();
extern Ptr tpamultifloat();
extern Ptr tlcstring();
extern long tpastring();
extern Ptr tpamultistrg();
extern Ptr malloc_for_test();
extern Ptr string_in_malloc();
extern long crac();
extern long crac2();
extern long croc();
extern long cric();
extern long c_i1();
extern long c_i2();
extern long c_f1();
extern long c_f2();
extern Ptr test_float_lispcall();
extern Ptr test_openi();
extern Ptr test_openo();
extern Ptr test_read_in_file();
extern Ptr test_flush();
extern Ptr test_close();
extern Ptr test_deletefile();
extern Ptr test_renamefile();
extern Ptr test_copyfile();
extern Ptr test_probefile();
extern Ptr test_runtime();
extern Ptr test_sleep();
extern Ptr test_date();
extern Ptr test_getenv();
extern Ptr test_float();
extern Ptr test_fix();
extern Ptr test_string();
extern Ptr test_version();
extern Ptr test_getglobal();
extern Ptr test_fadd();
extern Ptr test_power();
extern long cboucle();
extern long do_not_kill1();
extern long c_kill1();
extern long c_kill2();

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLtestextern_1(), GLtestextern_2(), GLtestextern_3(), GLtestextern_4();
static Ptr GLtestextern_5(), GLtestextern_6(), GLtestextern_7(), GLtestextern_8();
static Ptr GLtestextern_9(), GLtestextern_10(), GLtestextern_11(), GLtestextern_12();
static Ptr GLtestextern_13(), GLtestextern_14(), GLtestextern_15(), GLtestextern_16();
static Ptr GLtestextern_17(), GLtestextern_18(), GLtestextern_19(), GLtestextern_20();
static Ptr GLtestextern_21(), GLtestextern_22(), GLtestextern_23(), GLtestextern_24();
static Ptr GLtestextern_25(), GLtestextern_26(), GLtestextern_27(), GLtestextern_28();
static Ptr GLtestextern_29(), GLtestextern_30(), GLtestextern_31(), GLtestextern_32();
static Ptr GLtestextern_33(), GLtestextern_34(), GLtestextern_35(), GLtestextern_36();
static Ptr GLtestextern_37(), GLtestextern_38(), GLtestextern_39(), GLtestextern_40();
static Ptr GLtestextern_41(), GLtestextern_42(), GLtestextern_43(), GLtestextern_44();
static Ptr GLtestextern_45(), GLtestextern_46(), GLtestextern_47(), GLtestextern_48();
static Ptr GLtestextern_49(), GLtestextern_50(), GLtestextern_51(), GLtestextern_52();
static Ptr GLtestextern_53(), GLtestextern_54(), GLtestextern_55(), GLtestextern_56();
static Ptr GLtestextern_57(), GLtestextern_58(), GLtestextern_59(), GLtestextern_60();
static Ptr GLtestextern_61(), GLtestextern_62(), GLtestextern_63(), GLtestextern_64();
static Ptr GLtestextern_65(), GLtestextern_66(), GLtestextern_67(), GLtestextern_68();
static Ptr GLtestextern_69(), GLtestextern_70(), GLtestextern_71(), GLtestextern_72();
static Ptr GLtestextern_73(), GLtestextern_74(), GLtestextern_75(), GLtestextern_76();
static Ptr GLtestextern_77(), GLtestextern_78(), GLtestextern_79(), GLtestextern_80();
static Ptr GLtestextern_81(), GLtestextern_82(), GLtestextern_83(), GLtestextern_84();
static Ptr GLtestextern_86(), GLtestextern_88(), GLtestextern_89(), GLtestextern_90();
static Ptr GLtestextern_92(), GLtestextern_93(), GLtestextern_95(), GLtestextern_96();
static Ptr GLtestextern_97(), GLtestextern_98(), GLtestextern_99(), GLtestextern_100();
static Ptr GLtestextern_102(), GLtestextern_103(), GLtestextern_104(), GLtestextern_105();
static Ptr GLtestextern_106(), GLtestextern_108(), GLtestextern_109(), GLtestextern_110();
static Ptr GLtestextern_111(), GLtestextern_112(), GLtestextern_113(), GLtestextern_114();
static Ptr GLtestextern_116(), GLtestextern_117(), GLtestextern_118(), GLtestextern_119();
static Ptr GLtestextern_120(), GLtestextern_121(), GLtestextern_122(), GLtestextern_124();
static Ptr GLtestextern_126(), GLtestextern_127(), GLtestextern_128(), GLtestextern_129();
static Ptr GLtestextern_130();

/*      trace functions */
static Ptr GDtestextern_131(), GDtestextern_132(), GDtestextern_133(), GDtestextern_134();
static Ptr GDtestextern_135(), GDtestextern_136(), GDtestextern_137(), GDtestextern_138();
static Ptr GDtestextern_139(), GDtestextern_140(), GDtestextern_141(), GDtestextern_142();
static Ptr GDtestextern_143(), GDtestextern_144(), GDtestextern_145(), GDtestextern_146();
static Ptr GDtestextern_147(), GDtestextern_148(), GDtestextern_149(), GDtestextern_150();
static Ptr GDtestextern_151(), GDtestextern_152(), GDtestextern_153(), GDtestextern_154();
static Ptr GDtestextern_155(), GDtestextern_156(), GDtestextern_157(), GDtestextern_158();
static Ptr GDtestextern_159(), GDtestextern_160(), GDtestextern_161(), GDtestextern_162();
static Ptr GDtestextern_163(), GDtestextern_164(), GDtestextern_165(), GDtestextern_166();
static Ptr GDtestextern_167(), GDtestextern_168(), GDtestextern_169(), GDtestextern_170();
static Ptr GDtestextern_171(), GDtestextern_172(), GDtestextern_173(), GDtestextern_174();
static Ptr GDtestextern_175(), GDtestextern_176(), GDtestextern_177(), GDtestextern_178();
static Ptr GDtestextern_179(), GDtestextern_180(), GDtestextern_181(), GDtestextern_182();
static Ptr GDtestextern_183(), GDtestextern_184(), GDtestextern_185(), GDtestextern_186();
static Ptr GDtestextern_187(), GDtestextern_188(), GDtestextern_189(), GDtestextern_190();
static Ptr GDtestextern_191(), GDtestextern_192(), GDtestextern_193(), GDtestextern_194();
static Ptr GDtestextern_195(), GDtestextern_196(), GDtestextern_197(), GDtestextern_198();
static Ptr GDtestextern_199(), GDtestextern_200(), GDtestextern_201(), GDtestextern_202();
static Ptr GDtestextern_203(), GDtestextern_204(), GDtestextern_205(), GDtestextern_206();
static Ptr GDtestextern_207(), GDtestextern_208(), GDtestextern_209(), GDtestextern_210();
static Ptr GDtestextern_211(), GDtestextern_212(), GDtestextern_213(), GDtestextern_214();
static Ptr GDtestextern_215(), GDtestextern_216(), GDtestextern_217(), GDtestextern_218();
static Ptr GDtestextern_219(), GDtestextern_220(), GDtestextern_221(), GDtestextern_222();
static Ptr GDtestextern_223(), GDtestextern_224(), GDtestextern_225(), GDtestextern_226();

static Ptr GYtestextern[130];

static const char GNtestextern[] = "testextern";
static const char GTtestextern[] = "Mon June  7 93 16:17:18 ";

static struct GellEntry GWtestextern[] = {
        {GLtestextern_1,        GDtestextern_131,       1},     /* _tlno */
        {GLtestextern_2,        GDtestextern_132,       2},     /* tlfix */
        {GLtestextern_3,        GDtestextern_133,       2},     /* tlfloat */
        {GLtestextern_4,        GDtestextern_134,       2},     /* tlfloat_ */
        {GLtestextern_5,        GDtestextern_135,       2},     /* tlfloat_1 */
        {GLtestextern_6,        GDtestextern_136,       3},     /* tlfloat_2 */
        {GLtestextern_7,        GDtestextern_137,       2},     /* _trfix */
        {GLtestextern_8,        GDtestextern_138,       2},     /* _tlstring */
        {GLtestextern_9,        GDtestextern_139,       4},     /* _tlstring3 */
        {GLtestextern_10,       GDtestextern_140,       3},     /* tlvector */
        {GLtestextern_11,       GDtestextern_141,       2},     /* trfloat */
        {GLtestextern_12,       GDtestextern_142,       2},     /* trfloat1 */
        {GLtestextern_13,       GDtestextern_143,       3},     /* ttabint */
        {GLtestextern_14,       GDtestextern_144,       2},     /* ttabintonly */
        {GLtestextern_15,       GDtestextern_145,       3},     /* ttabflt */
        {GLtestextern_16,       GDtestextern_146,       3},     /* tflt_lispcall */
        {GLtestextern_17,       GDtestextern_147,       3},     /* tflt_getsym */
        {GLtestextern_18,       GDtestextern_148,       2},     /* tlt */
        {GLtestextern_19,       GDtestextern_149,       2},     /* tlexternal */
        {GLtestextern_20,       GDtestextern_150,       2},     /* tcfloat */
        {GLtestextern_21,       GDtestextern_151,       3},     /* tcfloat2 */
        {GLtestextern_22,       GDtestextern_152,       1},     /* f_s_to_d */
        {GLtestextern_23,       GDtestextern_153,       2},     /* tcstring */
        {GLtestextern_24,       GDtestextern_154,       2},     /* conv1_tcstring */
        {GLtestextern_25,       GDtestextern_155,       3},     /* conv2_tcstring */
        {GLtestextern_26,       GDtestextern_156,       2},     /* tct */
        {GLtestextern_27,       GDtestextern_157,       2},     /* tcexternal */
        {GLtestextern_28,       GDtestextern_158,       5},     /* tlnadic */
        {GLtestextern_29,       GDtestextern_159,       5},     /* tnbmaxi */
        {GLtestextern_30,       GDtestextern_160,       5},     /* tnbmaxf */
        {GLtestextern_31,       GDtestextern_161,       5},     /* tnbmaxri */
        {GLtestextern_32,       GDtestextern_162,       5},     /* tnbmaxrf */
        {GLtestextern_33,       GDtestextern_163,       3},     /* trfixrfloat */
        {GLtestextern_34,       GDtestextern_164,       5},     /* ttabother */
        {GLtestextern_35,       GDtestextern_165,       4},     /* struct_un */
        {GLtestextern_36,       GDtestextern_166,       5},     /* tltout */
        {GLtestextern_37,       GDtestextern_167,       2},     /* tlmalloc */
        {GLtestextern_38,       GDtestextern_168,       2},     /* getsym */
        {GLtestextern_39,       GDtestextern_169,       3},     /* cons_en_c */
        {GLtestextern_40,       GDtestextern_170,       3},     /* vect_to_list */
        {GLtestextern_41,       GDtestextern_171,       2},     /* cfib */
        {GLtestextern_42,       GDtestextern_172,       1},     /* init_fib */
        {GLtestextern_43,       GDtestextern_173,       1},     /* tpafloat */
        {GLtestextern_44,       GDtestextern_174,       2},     /* tpamultifloat */
        {GLtestextern_45,       GDtestextern_175,       1},     /* tlcstring */
        {GLtestextern_46,       GDtestextern_176,       1},     /* tpastring */
        {GLtestextern_47,       GDtestextern_177,       2},     /* tpamultistrg */
        {GLtestextern_48,       GDtestextern_178,       2},     /* malloc_for_test */
        {GLtestextern_49,       GDtestextern_179,       2},     /* string_in_malloc */
        {GLtestextern_50,       GDtestextern_180,       2},     /* crac */
        {GLtestextern_51,       GDtestextern_181,       2},     /* crac2 */
        {GLtestextern_52,       GDtestextern_182,       2},     /* croc */
        {GLtestextern_53,       GDtestextern_183,       2},     /* cric */
        {GLtestextern_54,       GDtestextern_184,       3},     /* c_i1 */
        {GLtestextern_55,       GDtestextern_185,       5},     /* c_i2 */
        {GLtestextern_56,       GDtestextern_186,       3},     /* c_f1 */
        {GLtestextern_57,       GDtestextern_187,       5},     /* c_f2 */
        {GLtestextern_58,       GDtestextern_188,       1},     /* test_float_lispcall */
        {GLtestextern_59,       GDtestextern_189,       2},     /* test_openi */
        {GLtestextern_60,       GDtestextern_190,       2},     /* test_openo */
        {GLtestextern_61,       GDtestextern_191,       1},     /* test_read_in_file */
        {GLtestextern_62,       GDtestextern_192,       1},     /* test_flush */
        {GLtestextern_63,       GDtestextern_193,       2},     /* test_close */
        {GLtestextern_64,       GDtestextern_194,       2},     /* test_deletefile */
        {GLtestextern_65,       GDtestextern_195,       3},     /* test_renamefile */
        {GLtestextern_66,       GDtestextern_196,       3},     /* test_copyfile */
        {GLtestextern_67,       GDtestextern_197,       2},     /* test_probefile */
        {GLtestextern_68,       GDtestextern_198,       1},     /* test_runtime */
        {GLtestextern_69,       GDtestextern_199,       2},     /* test_sleep */
        {GLtestextern_70,       GDtestextern_200,       1},     /* test_date */
        {GLtestextern_71,       GDtestextern_201,       2},     /* test_getenv */
        {GLtestextern_72,       GDtestextern_202,       2},     /* test_float */
        {GLtestextern_73,       GDtestextern_203,       2},     /* test_fix */
        {GLtestextern_74,       GDtestextern_204,       2},     /* test_string */
        {GLtestextern_75,       GDtestextern_205,       1},     /* test_version */
        {GLtestextern_76,       GDtestextern_206,       2},     /* test_getglobal */
        {GLtestextern_77,       GDtestextern_207,       3},     /* test_fadd */
        {GLtestextern_78,       GDtestextern_208,       3},     /* test_power */
        {GLtestextern_79,       GDtestextern_209,       1},     /* cboucle */
        {GLtestextern_80,       GDtestextern_210,       1},     /* do_not_kill1 */
        {GLtestextern_81,       GDtestextern_211,       1},     /* c_kill1 */
        {GLtestextern_82,       GDtestextern_212,       5},     /* c_kill2 */
        {GLtestextern_83,       GDtestextern_213,       1},     /* #:testgc:gcalarm */
        {GLtestextern_84,       GDtestextern_214,       2},     /* fib */
        {GLtestextern_89,       GDtestextern_215,       2},     /* llcrac */
        {GLtestextern_90,       GDtestextern_216,       3},     /* llcrac2 */
        {GLtestextern_97,       GDtestextern_217,       1},     /* llcroc */
        {GLtestextern_98,       GDtestextern_218,       1},     /* llcric */
        {GLtestextern_99,       GDtestextern_219,       3},     /* ll_f1 */
        {GLtestextern_100,      GDtestextern_220,       3},     /* ll_f2 */
        {GLtestextern_104,      GDtestextern_221,       3},     /* ll_f3 */
        {GLtestextern_105,      GDtestextern_222,       3},     /* ll_i1 */
        {GLtestextern_106,      GDtestextern_223,       3},     /* ll_i2 */
        {GLtestextern_110,      GDtestextern_224,       3},     /* ll_i3 */
        {GLtestextern_111,      GDtestextern_225,       1},     /* kill_or_not_kill1 */
        {GLtestextern_129,      GDtestextern_226,       5},     /* ll_kill2 */
};

struct GellModule GZtestextern = {
        GELLMODULESTAMP,
        GNtestextern,
        GTtestextern,
        GYtestextern,
        96,
        GWtestextern};
