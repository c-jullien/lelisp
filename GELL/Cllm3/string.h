/* GELL 15.26: include file for the module: "string" */
/*             translation done:            "Wed June 30 93 17:34:58 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GMundef;
extern Ptr GIfcons;
extern Ptr GIbvar;
extern Ptr GMt;
extern Ptr GMvoid;
extern Ptr GIeheap;
extern Ptr GIcheap;
extern Ptr GIfvect;
extern Ptr GIfstrg;
extern Ptr GMllsystem;
extern Ptr GMtyrdspl;
extern Ptr GIcpkgc;
extern Ptr GIbufpn;
extern Ptr GIobase;
extern Ptr GIsavea1;
extern Ptr GIsavea2;
extern Ptr GIsavea3;
extern Ptr GIsavea4;
extern Ptr GIocheap = 0;
extern Ptr GIbufstrg = 0;
Ptr GMstring = 0;
Ptr GMplength = 0;
Ptr GMslength = 0;
Ptr GMslen = 0;
Ptr GMsref = 0;
Ptr GMsset = 0;
Ptr GMtypestrg = 0;
Ptr GMexchstrg = 0;
Ptr GMcaten = 0;
Ptr GMeqstring = 0;
Ptr GMsubsequal = 0;
Ptr GMsubstring = 0;
Ptr GMmakestrg = 0;
Ptr GMduplstrg = 0;
Ptr GMbltstrg = 0;
Ptr GMfillstrg = 0;
Ptr GMscanstrg = 0;
Ptr GMspanstrg = 0;
Ptr GMchrpos = 0;
Ptr GMchrnth = 0;
Ptr GMchrset = 0;
Ptr GMffindex = 0;
Ptr GMhash = 0;
Ptr GMffsymbol = 0;
Ptr GMfpnam = 0;
Ptr GMconcat = 0;
Ptr GMgensym = 0;
Ptr GMalphales = 0;
Ptr GMbltscrn = 0;
Ptr GMtypevect = 0;
Ptr GMexchvect = 0;
Ptr GMmakevect = 0;
Ptr GMvlength = 0;
Ptr GMeqvector = 0;
Ptr GMvref = 0;
Ptr GMvset = 0;
Ptr GMbltvect = 0;
Ptr GMvector = 0;
Ptr GMfillvect = 0;
Ptr GMgenstrg = 0;
Ptr GMgenscpt = 0;
#define GFstring 2
#define GFplength 2
#define GFslength 2
#define GFslen 2
#define GFcaten 5
#define GFsubsequal 5
#define GFeqstring 3
#define GFsubstring 5
#define GFmakestrg 3
#define GFduplstrg 3
#define GFbltstrg 5
#define GFfillstrg 5
#define GFscanstrg 5
#define GFspanstrg 5
#define GFchrpos 5
#define GFsref 3
#define GFchrnth 3
#define GFsset 4
#define GFchrset 4
#define GFtypestrg 5
#define GFexchstrg 3
#define GFffindex 5
#define GFalphales 3
#define GFffsymbol 3
#define GFconcat 5
#define GFhash 2
#define GFfpnam 2
#define GFgensym 1
extern Ptr GIwd = 0;
extern Ptr GIws = 0;
extern Ptr GIdlx = 0;
extern Ptr GIdly = 0;
extern Ptr GIoldid = 0;
extern Ptr GIoldx = 0;
extern Ptr GIid = 0;
extern Ptr GIis = 0;
extern Ptr GIxr = 0;
extern Ptr GIyr = 0;
extern Ptr GIys = 0;
#define GFbltscrn 5
#define GFtypevect 5
#define GFmakevect 3
#define GFvlength 2
#define GFeqvector 3
#define GFvref 3
#define GFvset 4
#define GFbltvect 5
#define GFvector 5
#define GFexchvect 3
#define GFfillvect 5

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0(), GXfillvect();
extern Ptr GXexchvect(), GXvector(), GXbltvect(), GXvset();
extern Ptr GXvref(), GXeqvector(), GXvlength(), GXtypevect();
extern Ptr GXbltscrn(), GXgensym(), GXfpnam(), GXhash();
extern Ptr GXconcat(), GXalphales(), GXffindex(), GXexchstrg();
extern Ptr GXtypestrg(), GXchrset(), GXsset(), GXchrnth();
extern Ptr GXsref(), GXchrpos(), GXspanstrg(), GXscanstrg();
extern Ptr GXfillstrg(), GXbltstrg(), GXduplstrg(), GXsubstring();
extern Ptr GXeqstring(), GXsubsequal(), GXcaten(), GXslen();
extern Ptr GXslength(), GXplength(), GXstring(), GXrdpscrn();
extern Ptr GXeqvectri(), GXmakevect(), GXmakestrg(), GXeqstrgi();
extern Ptr GXstringa2(), GXstringa1(), GXstrgsymb(), GXgetnumi();
extern Ptr GXstrgallc(), GXffsymbol(), GXini_str(), GXequal();
extern Ptr GXnreverse(), GXffuncall(), GXhashint(), GXtrysympk();
extern Ptr GXtrysymp(), GXinicst(), GXinisymb(), GXtycursor();
extern Ptr GXtyo(), GXhgc(), GXgcvect(), GXgcstrg();
extern Ptr GXgcnumb(), GXgcfloat(), GXgccons(), GXerrstl();
extern Ptr GXerrnsa(), GXerrfh(), GXerroob(), GXerrvec();
extern Ptr GXerrsym(), GXerrnaa(), GXerrnia(), GXerrwna();
extern Ptr GXerrfs(), GXevalan(), GXevalt();

/*      intern functions        */
static Ptr GLstring_1(), GLstring_2(), GLstring_3(), GLstring_4();
static Ptr GLstring_5(), GLstring_6(), GLstring_7(), GLstring_8();
static Ptr GLstring_9(), GLstring_10(), GLstring_11(), GLstring_12();
static Ptr GLstring_13(), GLstring_14(), GLstring_15(), GLstring_16();
static Ptr GLstring_17(), GLstring_18(), GLstring_19(), GLstring_20();
static Ptr GLstring_21(), GLstring_22(), GLstring_23(), GLstring_24();
static Ptr GLstring_25(), GLstring_26(), GLstring_27(), GLstring_28();
static Ptr GLstring_29(), GLstring_30(), GLstring_31(), GLstring_32();
static Ptr GLstring_33(), GLstring_34(), GLstring_35(), GLstring_36();
static Ptr GLstring_37(), GLstring_38(), GLstring_39(), GLstring_40();
static Ptr GLstring_41(), GLstring_42(), GLstring_43(), GLstring_44();
static Ptr GLstring_45(), GLstring_46(), GLstring_47(), GLstring_48();
static Ptr GLstring_49(), GLstring_50(), GLstring_51(), GLstring_52();
static Ptr GLstring_53(), GLstring_54(), GLstring_55(), GLstring_57();
static Ptr GLstring_59(), GLstring_61(), GLstring_62(), GLstring_63();
static Ptr GLstring_64(), GLstring_65(), GLstring_66(), GLstring_67();
static Ptr GLstring_68(), GLstring_69(), GLstring_70(), GLstring_71();
static Ptr GLstring_72(), GLstring_73(), GLstring_74(), GLstring_75();
static Ptr GLstring_76(), GLstring_77(), GLstring_78(), GLstring_79();
static Ptr GLstring_80(), GLstring_81(), GLstring_83(), GLstring_84();
static Ptr GLstring_85(), GLstring_86(), GLstring_87(), GLstring_88();
static Ptr GLstring_89(), GLstring_90(), GLstring_92(), GLstring_93();
static Ptr GLstring_94(), GLstring_95(), GLstring_96(), GLstring_97();
static Ptr GLstring_98(), GLstring_99(), GLstring_100(), GLstring_101();
static Ptr GLstring_102(), GLstring_103(), GLstring_104(), GLstring_105();
static Ptr GLstring_106(), GLstring_107(), GLstring_108(), GLstring_109();
static Ptr GLstring_110(), GLstring_111(), GLstring_112(), GLstring_113();
static Ptr GLstring_114(), GLstring_115(), GLstring_116(), GLstring_117();
static Ptr GLstring_118(), GLstring_119(), GLstring_120(), GLstring_121();
static Ptr GLstring_122();

/*      trace functions */
static Ptr GDstring_123(), GDstring_124(), GDstring_125(), GDstring_126();
static Ptr GDstring_127(), GDstring_128(), GDstring_129(), GDstring_130();
static Ptr GDstring_131(), GDstring_132(), GDstring_133(), GDstring_134();
static Ptr GDstring_135(), GDstring_136(), GDstring_137(), GDstring_138();
static Ptr GDstring_139(), GDstring_140(), GDstring_141(), GDstring_142();
static Ptr GDstring_143(), GDstring_144(), GDstring_145(), GDstring_146();
static Ptr GDstring_147(), GDstring_148(), GDstring_149(), GDstring_150();
static Ptr GDstring_151(), GDstring_152(), GDstring_153(), GDstring_154();
static Ptr GDstring_155(), GDstring_156(), GDstring_157(), GDstring_158();
static Ptr GDstring_159(), GDstring_160(), GDstring_161();

static Ptr GYstring[45];

static const char GNstring[] = "string";
static const char GTstring[] = "Wed June 30 93 17:34:58 ";

static struct GellEntry GWstring[] = {
        {GXstring,      GDstring_123,   2},     /* string */
        {GXplength,     GDstring_124,   2},     /* plength */
        {GXslength,     GDstring_125,   2},     /* slength */
        {GXslen,        GDstring_126,   2},     /* slen */
        {GXcaten,       GDstring_127,   5},     /* catenate */
        {GXsubsequal,   GDstring_128,   5},     /* substring-equal */
        {GXeqstring,    GDstring_129,   3},     /* eqstring */
        {GXsubstring,   GDstring_130,   5},     /* substring */
        {GXmakestrg,    GDstring_131,   3},     /* makestring */
        {GXduplstrg,    GDstring_132,   3},     /* duplstring */
        {GXbltstrg,     GDstring_133,   5},     /* bltstring */
        {GXfillstrg,    GDstring_134,   5},     /* fillstring */
        {GXscanstrg,    GDstring_135,   5},     /* scanstring */
        {GXspanstrg,    GDstring_136,   5},     /* spanstring */
        {GXchrpos,      GDstring_137,   5},     /* chrpos */
        {GXsref,        GDstring_138,   3},     /* sref */
        {GXchrnth,      GDstring_139,   3},     /* chrnth */
        {GXsset,        GDstring_140,   4},     /* sset */
        {GXchrset,      GDstring_141,   4},     /* chrset */
        {GXtypestrg,    GDstring_142,   5},     /* typestring */
        {GXexchstrg,    GDstring_143,   3},     /* exchstring */
        {GXffindex,     GDstring_144,   5},     /* index */
        {GXalphales,    GDstring_145,   3},     /* alphalessp */
        {GXffsymbol,    GDstring_146,   3},     /* symbol */
        {GXconcat,      GDstring_147,   5},     /* concat */
        {GXhash,        GDstring_148,   2},     /* hash */
        {GXfpnam,       GDstring_149,   2},     /* pname */
        {GXgensym,      GDstring_150,   1},     /* gensym */
        {GXbltscrn,     GDstring_151,   5},     /* bltscreen */
        {GXtypevect,    GDstring_152,   5},     /* typevector */
        {GXmakevect,    GDstring_153,   3},     /* makevector */
        {GXvlength,     GDstring_154,   2},     /* vlength */
        {GXeqvector,    GDstring_155,   3},     /* eqvector */
        {GXvref,        GDstring_156,   3},     /* vref */
        {GXvset,        GDstring_157,   4},     /* vset */
        {GXbltvect,     GDstring_158,   5},     /* bltvector */
        {GXvector,      GDstring_159,   5},     /* vector */
        {GXexchvect,    GDstring_160,   3},     /* exchvector */
        {GXfillvect,    GDstring_161,   5},     /* fillvector */
};

struct GellModule GZstring = {
        GELLMODULESTAMP,
        GNstring,
        GTstring,
        GYstring,
        39,
        GWstring};
