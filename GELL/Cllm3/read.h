/* GELL 15.26: include file for the module: "read" */
/*             translation done:            "Wed June 30 93 17:33:58 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr GIfsymb;
extern Ptr GIfcons;
extern Ptr GIbvar;
extern Ptr GMvoid;
extern Ptr GMundef;
extern Ptr GMt;
extern Ptr GMllsystem;
extern Ptr GMsyspkgc;
extern Ptr GIhashtab;
extern Ptr GIfstrg;
extern Ptr GMllexpr;
extern Ptr GIistream;
extern Ptr GIinmax;
extern Ptr GIpolig;
extern Ptr GMsyscol;
extern Ptr GIsavea4;
extern Ptr GMquote;
extern Ptr GMllcons;
extern Ptr GMmcons;
extern Ptr GItsymb = 0;
extern Ptr GIasymb = 0;
extern Ptr GIksymb = 0;
extern Ptr GIhsymb = 0;
extern Ptr GIcount = 0;
extern Ptr GItabch = 0;
extern Ptr GIcachch = 0;
extern Ptr GIibase = 0;
extern Ptr GIall09 = 0;
extern Ptr GInegatif = 0;
extern Ptr GIquotes = 0;
extern Ptr GIgetchfl = 0;
extern Ptr GIringur = 0;
extern Ptr GIcurread = 0;
extern Ptr GIrdprd = 0;
extern Ptr GIimpli = 0;
extern Ptr GIimpld = 0;
extern Ptr GIbufat = 0;
extern Ptr GIlgbufat = 0;
extern Ptr GIcpkgc = 0;
Ptr GMstatrc = 0;
Ptr GMstinread = 0;
Ptr GMlread = 0;
Ptr GMimplode = 0;
Ptr GMreadch = 0;
Ptr GMreadcod = 0;
Ptr GMlcuread = 0;
Ptr GMteread = 0;
Ptr GMreread = 0;
Ptr GMreadline = 0;
Ptr GMreadstrg = 0;
Ptr GMstratom = 0;
Ptr GMreaddltd = 0;
Ptr GMpeekch = 0;
Ptr GMpeekcn = 0;
Ptr GMconcatpk = 0;
Ptr GMfascii = 0;
Ptr GMcascii = 0;
Ptr GMuppercase = 0;
Ptr GMlowercase = 0;
Ptr GMasciip = 0;
Ptr GMdigitp = 0;
Ptr GMletterp = 0;
Ptr GMfibase = 0;
#define GFlread 1
#define GFimplode 2
#define GFreadch 1
#define GFreadcod 1
#define GFlcuread 1
#define GFteread 1
#define GFreread 2
#define GFpeekch 1
#define GFpeekcn 1
#define GFreadline 1
#define GFstratom 4
#define GFreadstrg 1
#define GFreaddltd 2
#define GFfascii 2
#define GFcascii 2
#define GFconcatpk 3
#define GFuppercase 2
#define GFlowercase 2
#define GFasciip 2
#define GFdigitp 2
#define GFletterp 2
#define GFfibase 5

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0(), GXfibase();
extern Ptr GXletterp(), GXdigitp(), GXasciip(), GXlowercase();
extern Ptr GXuppercase(), GXconcatpk(), GXcascii(), GXfascii();
extern Ptr GXreadstrg(), GXstratom(), GXreadline(), GXpeekcn();
extern Ptr GXpeekch(), GXreread(), GXteread(), GXlcuread();
extern Ptr GXreadcod(), GXreadch(), GXimplode(), GXerlec6();
extern Ptr GXbase10p(), GXrdpkgc2(), GXread2(), GXgetcv();
extern Ptr GXrereada4(), GXasciii(), GXgetch(), GXreadi();
extern Ptr GXlread(), GXreaddltd(), GXerlec11(), GXcrastrg();
extern Ptr GXtrysympk(), GXtrysymb(), GXtrysymp(), GXtryatom();
extern Ptr GXinacst(), GXinasymb(), GXinicst(), GXinisymb();
extern Ptr GXhashint(), GXistdsym(), GXini_read(), GXmakevect();
extern Ptr GXmakestrg(), GXstrgallc(), GXstringa1(), GXgadiv();
extern Ptr GXgadinv(), GXgatim2i(), GXgaplus2i(), GXequal();
extern Ptr GXlllength(), GXnreverse(), GXgetprop(), GXsetfn();
extern Ptr GXgetfns(), GXllde(), GXffuncall(), GXapply();
extern Ptr GXevala1(), GXsysprot(), GXinphy(), GXhgc();
extern Ptr GXgcsymb(), GXgcnumb(), GXgcfloat(), GXgccons();
extern Ptr GXgetsetn(), GXerrudv(), GXerrudf(), GXerroob();
extern Ptr GXerrsym(), GXerrsxt(), GXerrnsa(), GXerrnla();
extern Ptr GXerrnia(), GXevalan(), GXevalt();

/*      intern functions        */
static Ptr GLread_1(), GLread_2(), GLread_3(), GLread_4();
static Ptr GLread_5(), GLread_6(), GLread_7(), GLread_8();
static Ptr GLread_9(), GLread_10(), GLread_11(), GLread_12();
static Ptr GLread_13(), GLread_14(), GLread_15(), GLread_16();
static Ptr GLread_17(), GLread_18(), GLread_19(), GLread_20();
static Ptr GLread_21(), GLread_22(), GLread_23(), GLread_24();
static Ptr GLread_25(), GLread_26(), GLread_27(), GLread_28();
static Ptr GLread_29(), GLread_30(), GLread_31(), GLread_32();
static Ptr GLread_33(), GLread_34(), GLread_35(), GLread_36();
static Ptr GLread_37(), GLread_38(), GLread_39(), GLread_40();
static Ptr GLread_41(), GLread_42(), GLread_43(), GLread_44();
static Ptr GLread_45(), GLread_46(), GLread_47(), GLread_48();
static Ptr GLread_49(), GLread_50(), GLread_51(), GLread_52();
static Ptr GLread_53(), GLread_54(), GLread_55(), GLread_56();
static Ptr GLread_57(), GLread_58(), GLread_59(), GLread_60();
static Ptr GLread_61(), GLread_62(), GLread_63(), GLread_64();
static Ptr GLread_65(), GLread_66(), GLread_67(), GLread_68();
static Ptr GLread_69(), GLread_70(), GLread_71(), GLread_72();
static Ptr GLread_73(), GLread_74(), GLread_75(), GLread_77();
static Ptr GLread_78(), GLread_79(), GLread_80(), GLread_81();
static Ptr GLread_82(), GLread_83(), GLread_84(), GLread_85();
static Ptr GLread_86(), GLread_87(), GLread_88(), GLread_89();
static Ptr GLread_90(), GLread_91(), GLread_92(), GLread_93();
static Ptr GLread_94(), GLread_95(), GLread_96(), GLread_97();
static Ptr GLread_98(), GLread_99(), GLread_100(), GLread_102();
static Ptr GLread_103(), GLread_104(), GLread_105(), GLread_106();
static Ptr GLread_107(), GLread_108(), GLread_109(), GLread_110();
static Ptr GLread_112(), GLread_113(), GLread_114(), GLread_115();
static Ptr GLread_116(), GLread_117(), GLread_118(), GLread_119();
static Ptr GLread_120(), GLread_121(), GLread_122(), GLread_123();
static Ptr GLread_124(), GLread_125(), GLread_126(), GLread_127();
static Ptr GLread_128(), GLread_129(), GLread_130(), GLread_131();
static Ptr GLread_132(), GLread_133(), GLread_134(), GLread_135();
static Ptr GLread_136(), GLread_137(), GLread_138(), GLread_139();
static Ptr GLread_140(), GLread_141(), GLread_142(), GLread_143();
static Ptr GLread_144(), GLread_145(), GLread_146(), GLread_147();
static Ptr GLread_148(), GLread_150(), GLread_151(), GLread_152();
static Ptr GLread_153(), GLread_155(), GLread_156(), GLread_157();
static Ptr GLread_158(), GLread_159(), GLread_160(), GLread_161();
static Ptr GLread_162(), GLread_164(), GLread_165(), GLread_166();
static Ptr GLread_167(), GLread_168(), GLread_169(), GLread_170();
static Ptr GLread_171(), GLread_172(), GLread_173(), GLread_174();
static Ptr GLread_175(), GLread_176(), GLread_177(), GLread_178();
static Ptr GLread_179(), GLread_180(), GLread_181(), GLread_182();
static Ptr GLread_183(), GLread_184(), GLread_185(), GLread_186();
static Ptr GLread_187(), GLread_188(), GLread_189(), GLread_190();
static Ptr GLread_191(), GLread_192(), GLread_193(), GLread_194();
static Ptr GLread_195(), GLread_196(), GLread_197(), GLread_198();
static Ptr GLread_199(), GLread_200(), GLread_201();

/*      trace functions */
static Ptr GDread_202(), GDread_203(), GDread_204(), GDread_205();
static Ptr GDread_206(), GDread_207(), GDread_208(), GDread_209();
static Ptr GDread_210(), GDread_211(), GDread_212(), GDread_213();
static Ptr GDread_214(), GDread_215(), GDread_216(), GDread_217();
static Ptr GDread_218(), GDread_219(), GDread_220(), GDread_221();
static Ptr GDread_222(), GDread_223();

Ptr (* brx_read_101 []) () = {
        GXgetcv,
        GLread_102,
        GLread_103,
        GLread_104,
        GXpopj0,
        GXpopj0,
        GXpopj0,
        GXpopj0,
        GXpopj0,
        GXpopj0,
        GXpopj0,
        GXpopj0,
        GLread_105,
        GXpopj0,
        GXpopj0};
Ptr (* brx_read_111 []) () = {
        GLread_98,
        GLread_98,
        GLread_98,
        GLread_98,
        GLread_112,
        GLread_113,
        GLread_114,
        GLread_109,
        GLread_115,
        GLread_116,
        GLread_117,
        GLread_118,
        GLread_119,
        GLread_120,
        GLread_121};
Ptr (* brx_read_149 []) () = {
        GXread2,
        GLread_150,
        GLread_150,
        GXpopj0,
        GLread_151};
Ptr (* brx_read_154 []) () = {
        GLread_155,
        GLread_156,
        GLread_157,
        GLread_158,
        GLread_159};
Ptr (* brx_read_163 []) () = {
        GLread_164,
        GLread_165,
        GLread_164,
        GLread_164,
        GLread_164};

static Ptr GYread[28];

static const char GNread[] = "read";
static const char GTread[] = "Wed June 30 93 17:33:58 ";

static struct GellEntry GWread[] = {
        {GXlread,       GDread_202,     1},     /* read */
        {GXimplode,     GDread_203,     2},     /* implode */
        {GXreadch,      GDread_204,     1},     /* readch */
        {GXreadcod,     GDread_205,     1},     /* readcn */
        {GXlcuread,     GDread_206,     1},     /* curread */
        {GXteread,      GDread_207,     1},     /* teread */
        {GXreread,      GDread_208,     2},     /* reread */
        {GXpeekch,      GDread_209,     1},     /* peekch */
        {GXpeekcn,      GDread_210,     1},     /* peekcn */
        {GXreadline,    GDread_211,     1},     /* readline */
        {GXstratom,     GDread_212,     4},     /* stratom */
        {GXreadstrg,    GDread_213,     1},     /* readstring */
        {GXreaddltd,    GDread_214,     2},     /* read-delimited-list */
        {GXfascii,      GDread_215,     2},     /* ascii */
        {GXcascii,      GDread_216,     2},     /* cascii */
        {GXconcatpk,    GDread_217,     3},     /* concatpkgc */
        {GXuppercase,   GDread_218,     2},     /* uppercase */
        {GXlowercase,   GDread_219,     2},     /* lowercase */
        {GXasciip,      GDread_220,     2},     /* asciip */
        {GXdigitp,      GDread_221,     2},     /* digitp */
        {GXletterp,     GDread_222,     2},     /* letterp */
        {GXfibase,      GDread_223,     5},     /* ibase */
};

struct GellModule GZread = {
        GELLMODULESTAMP,
        GNread,
        GTread,
        GYread,
        22,
        GWread};
