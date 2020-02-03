/* GELL 15.26: source file for the module: "llinit" */
/*             translation done:           "Wed June 30 93 17:33:38 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "llinit.h" 

static Ptr GLllinit_1() {       /* startmodule */
   {    register Ptr aRet;
l_bimpur:
        {aRet = ((Ptr) GXllinit); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllinit() { /* llinit */
   {    register Ptr aRet, rSp, rA1, rA2, rNil, rBfloat;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBfloat = GIbfloat;
        rSp = GIbstack;
        GImstack = GImstack1;
        rA1 = (Ptr) 0;
        rA2 = GIcnumb;
        if ((rA2 < GIbnumb) || (rA2 >= rBfloat))        goto l_ifrns3;
l_ifrns1:
        rA2->Val = rA1;
        rA1 = rA2;
        rA2 += (Fix) (1);
        if (rA2 < rBfloat)      goto l_ifrns1;
l_ifrns3:
        GIfnumb = rA1;
        rA1 = (Ptr) 0;
        rA2 = GIcfloat;
        if (llrt_floatp (rA2) == 0) 
        goto l_ifrfs3;
l_ifrfs1:
        rA2->Val = rA1;
        rA1 = rA2;
        rA2 += (Fix) (2);
        if (rA2 < GIbvect)      goto l_ifrfs1;
l_ifrfs3:
        GIffloat = rA1;
        rA1 = rNil;
        rA2 = GIcvect;
l_ifrvs1:
        rA2->Val = rA1;
        rA1 = rA2;
        rA2 += (Fix) (2);
        if (rA2 < GIbstrg)      goto l_ifrvs1;
        GIfvect = rA1;
        rA1 = rNil;
        rA2 = GIcstrg;
l_ifrss1:
        rA2->Val = rA1;
        rA1 = rA2;
        rA2 += (Fix) (2);
        if (rA2 < GIbsymb)      goto l_ifrss1;
        GIfstrg = rA1;
        rA1 = GIfiliz;
        if (rA1 == (Ptr) 0)     {aRet = ((Ptr) GLllinit_2); goto lRet;}
        if (GIfilit == (Ptr) 0) {aRet = ((Ptr) GLllinit_2); goto lRet;}
        rA2 = GIfilin;
        (--rSp)->Val = ((Ptr) GLllinit_3);
        {aRet = ((Ptr) GXcrastrg); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLllinit_3() {       /* ret_call_crastrg_1 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLllinit_2);
        {aRet = ((Ptr) GXrestcori); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_2() {       /* initf9 */
   {    register Ptr aRet, rSp, rA1, rA2, rNil, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        rA2 = GIcsymb;
        goto l_ifrsy2;
l_ifrsy1:
        (rA1 + 5)->Val = rA2;
l_ifrsy2:
        rA1 = rA2;
        rA2 += (Fix) (8);
        if (rA2 < rBcons)       goto l_ifrsy1;
l_ifrsy3:
        (rA1 + 5)->Val = (Ptr) 0;
        GIfsymb = GIcsymb;
        rA1 = rNil;
        rA2 = GIccons;
l_ifrls1:
        rA2->Val = rNil;
        (rA2 + 1)->Val = rA1;
        {register TableElem aux, mask;
                aux = (TableElem) ((TableElem) rA2 - (TableElem) rBcons);
                aux >>= PTR2_SHIFT;
                mask = 1; mask <<= (aux & ELEM_MASK);
                aux >>= ELEM_SHIFT;
                GIbtbin[aux] &= ~mask;}
        rA1 = rA2;
        rA2 += (Fix) (2);
        if (rA2 < GIecons)      goto l_ifrls1;
        GIfcons = rA1;
        GIsavea1 = rNil;
        GIsavea2 = rNil;
        GIsavea3 = rNil;
        GIsavea4 = rNil;
        rA1 = (Ptr) 997;
        rA2 = rNil;
        (--rSp)->Val = ((Ptr) GLllinit_4);
        {aRet = ((Ptr) GXmakevect); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLllinit_4() {       /* ret_call_makevect_3 */
   {    register Ptr aRet;
        GIhashtab = GIa1;
        GIa1 = (GIhashtab->Val + 1)->Val;
        goto l_inhas2;
l_inhas1:
        (GIhashtab->Val + 2 + (Fix) (GIa1))->Val = GIa1;
l_inhas2:
        {register Fix aux;
                aux = (Fix) (GIa1) - 1;
                GIa1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_inhas1;}
        { llrt_inicst ((Ptr) 0, (Ptr) "", (Ptr) &GMvoid);}
        (GIa1 + 3)->Val = GMvoid;
        {register int aux1, aux2;
                aux1 = (int) ((GIa1 + 6)->Val);
                aux2 = (int) 128;
                aux2 = aux2 << HIGHTSHIFT;
                aux1 = aux1 | aux2;
                (GIa1 + 6)->Val = (Ptr) aux1;}
        { llrt_inicst ((Ptr) 7, (Ptr) "_undef_", (Ptr) &GMundef);}
        { llrt_inicst ((Ptr) 3, (Ptr) "nil", (Ptr) &GMnewnil);}
        { llrt_inicst ((Ptr) 1, (Ptr) "t", (Ptr) &GMt);}
        GIcpkgc = GMvoid;
        GIa1 = GMnewnil;
        (GIa1 + 3)->Val = GMvoid;
        GIa1->Val = GMvoid;
        GIa1 = GMundef;
        (GIa1 + 3)->Val = GMvoid;
        GIa1 = GMt;
        (GIa1 + 3)->Val = GMvoid;
        GIbvar = GIfsymb;
        { llrt_inicst ((Ptr) 11, (Ptr) "sys-package", (Ptr) &GMsyspkgc);}
        GIa1->Val = GInil;
        { llrt_inisymb ((Ptr) 6, (Ptr) "itsoft", ((Ptr) GXitsoft), (Ptr) &GMitsoft, (Ptr) GFitsoft);}
        { llrt_inisymb ((Ptr) 12, (Ptr) "super-itsoft", ((Ptr) GXsupitsof), (Ptr) &GMsupitsof, (Ptr) GFsupitsof);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "system", ((Ptr) GXllsystem), (Ptr) &GMllsystem, (Ptr) GFllsystem);}
        { llrt_inicst ((Ptr) 8, (Ptr) "versados", (Ptr) &GMversados);}
        { llrt_inicst ((Ptr) 3, (Ptr) "vme", (Ptr) &GMvme);}
        { llrt_inicst ((Ptr) 9, (Ptr) "micromega", (Ptr) &GMmicromega);}
        { llrt_inicst ((Ptr) 6, (Ptr) "apollo", (Ptr) &GMapollo);}
        { llrt_inicst ((Ptr) 4, (Ptr) "sm90", (Ptr) &GMsm90);}
        { llrt_inicst ((Ptr) 6, (Ptr) "pe32os", (Ptr) &GMpe32os);}
        { llrt_inicst ((Ptr) 8, (Ptr) "pe32unix", (Ptr) &GMpe32unix);}
        { llrt_inicst ((Ptr) 7, (Ptr) "vaxunix", (Ptr) &GMvaxunix);}
        { llrt_inicst ((Ptr) 6, (Ptr) "vaxvms", (Ptr) &GMvaxvms);}
        { llrt_inicst ((Ptr) 7, (Ptr) "multics", (Ptr) &GMmultics);}
        { llrt_inicst ((Ptr) 7, (Ptr) "metheus", (Ptr) &GMmetheus);}
        { llrt_inicst ((Ptr) 10, (Ptr) "universe68", (Ptr) &GMuniv68);}
        { llrt_inicst ((Ptr) 5, (Ptr) "cpm86", (Ptr) &GMcpm86);}
        { llrt_inicst ((Ptr) 5, (Ptr) "msdos", (Ptr) &GMpcdos);}
        { llrt_inicst ((Ptr) 5, (Ptr) "macII", (Ptr) &GMmacii);}
        { llrt_inicst ((Ptr) 6, (Ptr) "vaxis3", (Ptr) &GMvaxis3);}
        { llrt_inicst ((Ptr) 3, (Ptr) "mac", (Ptr) &GMmacint);}
        { llrt_inicst ((Ptr) 4, (Ptr) "sps9", (Ptr) &GMsps9);}
        { llrt_inicst ((Ptr) 7, (Ptr) "bellmac", (Ptr) &GMbellmac);}
        { llrt_inicst ((Ptr) 6, (Ptr) "vm_uts", (Ptr) &GMvmuts);}
        { llrt_inicst ((Ptr) 6, (Ptr) "cadmus", (Ptr) &GMpcs);}
        { llrt_inicst ((Ptr) 3, (Ptr) "sun", (Ptr) &GMksun);}
        { llrt_inicst ((Ptr) 6, (Ptr) "hp9300", (Ptr) &GMhp9000);}
        { llrt_inicst ((Ptr) 10, (Ptr) "metaviseur", (Ptr) &GMmetavise);}
        { llrt_inicst ((Ptr) 7, (Ptr) "gouldpn", (Ptr) &GMgould);}
        { llrt_inicst ((Ptr) 5, (Ptr) "ibmrt", (Ptr) &GMibmrt);}
        { llrt_inicst ((Ptr) 7, (Ptr) "pyramid", (Ptr) &GMpyramid);}
        { llrt_inicst ((Ptr) 7, (Ptr) "sequent", (Ptr) &GMsequent);}
        { llrt_inicst ((Ptr) 5, (Ptr) "cetia", (Ptr) &GMunigraph);}
        { llrt_inicst ((Ptr) 6, (Ptr) "cl1000", (Ptr) &GMcl1000);}
        { llrt_inicst ((Ptr) 6, (Ptr) "cl1020", (Ptr) &GMcl1020);}
        { llrt_inicst ((Ptr) 14, (Ptr) "tektronix 43xx", (Ptr) &GMtek43);}
        { llrt_inicst ((Ptr) 1, (Ptr) "C", (Ptr) &GMsllc);}
        { llrt_inicst ((Ptr) 7, (Ptr) "dpx1000", (Ptr) &GMlews);}
        { llrt_inicst ((Ptr) 4, (Ptr) "sun4", (Ptr) &GMsun4);}
        { llrt_inicst ((Ptr) 5, (Ptr) "atari", (Ptr) &GMatari);}
        { llrt_inicst ((Ptr) 6, (Ptr) "convex", (Ptr) &GMconvex);}
        { llrt_inicst ((Ptr) 6, (Ptr) "macaux", (Ptr) &GMmacaux);}
        { llrt_inicst ((Ptr) 10, (Ptr) "decstation", (Ptr) &GMdecstation);}
        { llrt_inicst ((Ptr) 4, (Ptr) "sony", (Ptr) &GMsony);}
        { llrt_inicst ((Ptr) 4, (Ptr) "m88k", (Ptr) &GMm88k);}
        { llrt_inicst ((Ptr) 7, (Ptr) "sun386i", (Ptr) &GMsun386);}
        { llrt_inicst ((Ptr) 6, (Ptr) "aix386", (Ptr) &GMaix386);}
        { llrt_inicst ((Ptr) 5, (Ptr) "ix386", (Ptr) &GMix386);}
        { llrt_inicst ((Ptr) 9, (Ptr) "sonyr3000", (Ptr) &GMsonyr3000);}
        { llrt_inicst ((Ptr) 6, (Ptr) "magnum", (Ptr) &GMllmips);}
        { llrt_inicst ((Ptr) 6, (Ptr) "rs6000", (Ptr) &GMrs6000);}
        { llrt_inicst ((Ptr) 6, (Ptr) "sco386", (Ptr) &GMsco386);}
        { llrt_inicst ((Ptr) 3, (Ptr) "os2", (Ptr) &GMos2);}
        { llrt_inicst ((Ptr) 6, (Ptr) "hp9400", (Ptr) &GMhp9400);}
        { llrt_inicst ((Ptr) 6, (Ptr) "iris4d", (Ptr) &GMiris4d);}
        { llrt_inicst ((Ptr) 8, (Ptr) "svr4i386", (Ptr) &GMsvr4i386);}
        { llrt_inicst ((Ptr) 5, (Ptr) "os2_2", (Ptr) &GMos220);}
        { llrt_inicst ((Ptr) 7, (Ptr) "Chp9700", (Ptr) &GMchp9700);}
        { llrt_inicst ((Ptr) 5, (Ptr) "Csun4", (Ptr) &GMcsun4);}
        { llrt_inicst ((Ptr) 8, (Ptr) "cetia88k", (Ptr) &GMcetia88k);}
        { llrt_inicst ((Ptr) 7, (Ptr) "sun4mbc", (Ptr) &GMsun4mbc);}
        { llrt_inicst ((Ptr) 6, (Ptr) "hp9700", (Ptr) &GMhp9700);}
        { llrt_inicst ((Ptr) 9, (Ptr) "Calphavms", (Ptr) &GMcalphavms);}
        { llrt_inicst ((Ptr) 5, (Ptr) "nt386", (Ptr) &GMnt386);}
        { llrt_inicst ((Ptr) 7, (Ptr) "next68k", (Ptr) &GMnext68k);}
        { llrt_inicst ((Ptr) 7, (Ptr) "solaris", (Ptr) &GMsolaris);}
        { llrt_inicst ((Ptr) 9, (Ptr) "Calphaosf", (Ptr) &GMcalphaosf);}
        { llrt_inicst ((Ptr) 7, (Ptr) "Ciris4d", (Ptr) &GMciris4d);}
        { llrt_inicst ((Ptr) 4, (Ptr) "ll65", (Ptr) &GMll65);}
        { llrt_inicst ((Ptr) 4, (Ptr) "ll66", (Ptr) &GMll66);}
        { llrt_inicst ((Ptr) 4, (Ptr) "ll67", (Ptr) &GMll67);}
        { llrt_inicst ((Ptr) 4, (Ptr) "ll68", (Ptr) &GMll68);}
        { llrt_inicst ((Ptr) 4, (Ptr) "ll69", (Ptr) &GMll69);}
        { llrt_inicst ((Ptr) 4, (Ptr) "ll70", (Ptr) &GMll70);}
        GIa1 = (Ptr) 71;
        GIa2 = (Ptr) 0;
        (--GIsp)->Val = ((Ptr) GLllinit_5);
        {aRet = ((Ptr) GXmakevect); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_5() {       /* ret_call_makevect_4 */
   {    register Ptr aRet;
        GItabsyst = GIa1;
        (GIa1->Val + 2 + (Fix) 1)->Val = GMversados;
        (GIa1->Val + 2 + (Fix) 2)->Val = GMvme;
        (GIa1->Val + 2 + (Fix) 3)->Val = GMmicromega;
        (GIa1->Val + 2 + (Fix) 4)->Val = GMapollo;
        (GIa1->Val + 2 + (Fix) 5)->Val = GMsm90;
        (GIa1->Val + 2 + (Fix) 6)->Val = GMpe32os;
        (GIa1->Val + 2 + (Fix) 7)->Val = GMpe32unix;
        (GIa1->Val + 2 + (Fix) 8)->Val = GMvaxunix;
        (GIa1->Val + 2 + (Fix) 9)->Val = GMvaxvms;
        (GIa1->Val + 2 + (Fix) 10)->Val = GMmultics;
        (GIa1->Val + 2 + (Fix) 11)->Val = GMmetheus;
        (GIa1->Val + 2 + (Fix) 12)->Val = GMuniv68;
        (GIa1->Val + 2 + (Fix) 13)->Val = GMcpm86;
        (GIa1->Val + 2 + (Fix) 14)->Val = GMpcdos;
        (GIa1->Val + 2 + (Fix) 15)->Val = GMmacii;
        (GIa1->Val + 2 + (Fix) 16)->Val = GMvaxis3;
        (GIa1->Val + 2 + (Fix) 17)->Val = GMmacint;
        (GIa1->Val + 2 + (Fix) 18)->Val = GMsps9;
        (GIa1->Val + 2 + (Fix) 19)->Val = GMbellmac;
        (GIa1->Val + 2 + (Fix) 20)->Val = GMvmuts;
        (GIa1->Val + 2 + (Fix) 21)->Val = GMpcs;
        (GIa1->Val + 2 + (Fix) 22)->Val = GMksun;
        (GIa1->Val + 2 + (Fix) 23)->Val = GMhp9000;
        (GIa1->Val + 2 + (Fix) 24)->Val = GMmetavise;
        (GIa1->Val + 2 + (Fix) 25)->Val = GMgould;
        (GIa1->Val + 2 + (Fix) 26)->Val = GMibmrt;
        (GIa1->Val + 2 + (Fix) 27)->Val = GMpyramid;
        (GIa1->Val + 2 + (Fix) 28)->Val = GMsequent;
        (GIa1->Val + 2 + (Fix) 29)->Val = GMunigraph;
        (GIa1->Val + 2 + (Fix) 30)->Val = GMcl1000;
        (GIa1->Val + 2 + (Fix) 31)->Val = GMcl1020;
        (GIa1->Val + 2 + (Fix) 32)->Val = GMtek43;
        (GIa1->Val + 2 + (Fix) 33)->Val = GMsllc;
        (GIa1->Val + 2 + (Fix) 34)->Val = GMlews;
        (GIa1->Val + 2 + (Fix) 35)->Val = GMsun4;
        (GIa1->Val + 2 + (Fix) 36)->Val = GMatari;
        (GIa1->Val + 2 + (Fix) 37)->Val = GMconvex;
        (GIa1->Val + 2 + (Fix) 38)->Val = GMmacaux;
        (GIa1->Val + 2 + (Fix) 39)->Val = GMdecstation;
        (GIa1->Val + 2 + (Fix) 40)->Val = GMsony;
        (GIa1->Val + 2 + (Fix) 41)->Val = GMm88k;
        (GIa1->Val + 2 + (Fix) 42)->Val = GMsun386;
        (GIa1->Val + 2 + (Fix) 43)->Val = GMaix386;
        (GIa1->Val + 2 + (Fix) 44)->Val = GMix386;
        (GIa1->Val + 2 + (Fix) 45)->Val = GMsonyr3000;
        (GIa1->Val + 2 + (Fix) 46)->Val = GMllmips;
        (GIa1->Val + 2 + (Fix) 47)->Val = GMrs6000;
        (GIa1->Val + 2 + (Fix) 48)->Val = GMsco386;
        (GIa1->Val + 2 + (Fix) 49)->Val = GMos2;
        (GIa1->Val + 2 + (Fix) 50)->Val = GMhp9400;
        (GIa1->Val + 2 + (Fix) 51)->Val = GMiris4d;
        (GIa1->Val + 2 + (Fix) 52)->Val = GMsvr4i386;
        (GIa1->Val + 2 + (Fix) 53)->Val = GMos220;
        (GIa1->Val + 2 + (Fix) 54)->Val = GMchp9700;
        (GIa1->Val + 2 + (Fix) 55)->Val = GMcsun4;
        (GIa1->Val + 2 + (Fix) 56)->Val = GMcetia88k;
        (GIa1->Val + 2 + (Fix) 57)->Val = GMsun4mbc;
        (GIa1->Val + 2 + (Fix) 58)->Val = GMhp9700;
        (GIa1->Val + 2 + (Fix) 59)->Val = GMcalphavms;
        (GIa1->Val + 2 + (Fix) 60)->Val = GMnt386;
        (GIa1->Val + 2 + (Fix) 61)->Val = GMnext68k;
        (GIa1->Val + 2 + (Fix) 62)->Val = GMsolaris;
        (GIa1->Val + 2 + (Fix) 63)->Val = GMcalphaosf;
        (GIa1->Val + 2 + (Fix) 64)->Val = GMciris4d;
        (GIa1->Val + 2 + (Fix) 65)->Val = GMll65;
        (GIa1->Val + 2 + (Fix) 66)->Val = GMll66;
        (GIa1->Val + 2 + (Fix) 67)->Val = GMll67;
        (GIa1->Val + 2 + (Fix) 68)->Val = GMll68;
        (GIa1->Val + 2 + (Fix) 69)->Val = GMll69;
        (GIa1->Val + 2 + (Fix) 70)->Val = GMll70;
        GIa1 = (GItabsyst->Val + 2 + (Fix) (GInbsyst))->Val;
        GIcstsyste = GIa1;
        GIa1 = (GItabsyst->Val + 1)->Val;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) - (Fix) (1)));
l_clrsyst:
        GIa2 = (GItabsyst->Val + 2 + (Fix) (GIa1))->Val;
        GIa2->Val = GMundef;
        {register Fix aux;
                aux = (Fix) (GIa1) - 1;
                GIa1 = (Ptr) ((UFix) aux);
                if (aux > 0)    goto l_clrsyst;
                else GIa1 = (Ptr) 0;}
        { llrt_inisymb ((Ptr) 7, (Ptr) "version", ((Ptr) GXllversion), (Ptr) &GMllversion, (Ptr) GFllversion);}
        { llrt_inicst ((Ptr) 5, (Ptr) "15.25", (Ptr) &GMnaversion);}
        { llrt_inisymb ((Ptr) 3, (Ptr) "end", ((Ptr) GXstop), (Ptr) &GMstop, (Ptr) GFstop);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "herald", ((Ptr) GXherald), (Ptr) &GMherald, (Ptr) GFherald);}
        (--GIsp)->Val = ((Ptr) GLllinit_6);
        {aRet = ((Ptr) GXini_top); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_6() {       /* ret_call_ini_top_5 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLllinit_7);
        {aRet = ((Ptr) GXini_gc); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_7() {       /* ret_call_ini_gc_6 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLllinit_8);
        {aRet = ((Ptr) GXini_pio); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_8() {       /* ret_call_ini_pio_7 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLllinit_9);
        {aRet = ((Ptr) GXini_read); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_9() {       /* ret_call_ini_read_8 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLllinit_10);
        {aRet = ((Ptr) GXini_mach); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_10() {      /* ret_call_ini_mach_9 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLllinit_11);
        {aRet = ((Ptr) GXini_print); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_11() {      /* ret_call_ini_print_10 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLllinit_12);
        {aRet = ((Ptr) GXini_eval); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_12() {      /* ret_call_ini_eval_11 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLllinit_13);
        {aRet = ((Ptr) GXini_spec); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_13() {      /* ret_call_ini_spec_12 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLllinit_14);
        {aRet = ((Ptr) GXini_ctl); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_14() {      /* ret_call_ini_ctl_13 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLllinit_15);
        {aRet = ((Ptr) GXini_cad); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_15() {      /* ret_call_ini_cad_14 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLllinit_16);
        {aRet = ((Ptr) GXini_sym); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_16() {      /* ret_call_ini_sym_15 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLllinit_17);
        {aRet = ((Ptr) GXini_std); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_17() {      /* ret_call_ini_std_16 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLllinit_18);
        {aRet = ((Ptr) GXini_nbs); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_18() {      /* ret_call_ini_nbs_17 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLllinit_19);
        {aRet = ((Ptr) GXini_snb); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_19() {      /* ret_call_ini_snb_18 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLllinit_20);
        {aRet = ((Ptr) GXini_chr); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_20() {      /* ret_call_ini_chr_19 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLllinit_21);
        {aRet = ((Ptr) GXini_str); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_21() {      /* ret_call_ini_str_20 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLllinit_22);
        {aRet = ((Ptr) GXini_ext); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_22() {      /* ret_call_ini_ext_21 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLllinit_23);
        {aRet = ((Ptr) GXini_bll); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_23() {      /* ret_call_ini_bll_22 */
   {    register Ptr aRet, rSp, rA1, rA2, rNil, rBstrg;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBstrg = GIbstrg;
        rA1 = rNil;
        rA1 = (rA1 + 7)->Val;
        (rA1 + 1)->Val = GMstring;
        rA1 = rBstrg;
        rA2 = GMstring;
l_forcstr2:
        (rA1 + 1)->Val = rA2;
        rA1 += (Fix) (2);
        if (rA1 < GIbsymb)      goto l_forcstr2;
        rA1 = GIbvect;
        rA2 = GMvector;
l_forcvec2:
        (rA1 + 1)->Val = rA2;
        rA1 += (Fix) (2);
        if (rA1 < rBstrg)       goto l_forcvec2;
        rA1 = rNil;
l_topmin:
        if (GIllban != (Ptr) 0) {aRet = ((Ptr) GLllinit_24); goto lRet;}
        (--rSp)->Val = ((Ptr) GLllinit_24);
        {aRet = ((Ptr) GXherald); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLllinit_24() {      /* imin2 */
   {    register Ptr aRet;
        GIa1 = GIfiliz;
        if (GIa1 == (Ptr) 0)    {aRet = ((Ptr) GXreenter); goto lRet;}
        GIa2 = GIfilin;
        (--GIsp)->Val = ((Ptr) GLllinit_25);
        {aRet = ((Ptr) GXcrastrg); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_25() {      /* ret_call_crastrg_24 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIfilit == (Ptr) 0) goto l_imin3;
        (--rSp)->Val = ((Ptr) GXreenter);
        {aRet = ((Ptr) GXrestcori); goto lRet;}
l_imin3:
        (--rSp)->Val = ((Ptr) GXreenter);
        {aRet = ((Ptr) GXinput); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXreenter() {        /* reenter */
   {    register Ptr aRet;
        GIsp = GIbstack;
        GImstack = GImstack1;
        GIitcount = (Ptr) 0;
        GIitstate = (Ptr) 1;
        {aRet = ((Ptr) GXsystop); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXtheend() { /* theend */
   {    register Ptr aRet;
        llrt_ttyout((Fix) 25, "May Le-Lisp be with you. ");
        llrt_ttyout(2, "\n\r");
        (--GIsp)->Val = ((Ptr) GXpopj0);
        {aRet = ((Ptr) GXll_exit); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXitsoft() { /* itsoft */
   {    register Ptr aRet;
        {aRet = ((Ptr) GXllitsoft); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXsupitsof() {       /* super-itsoft */
   {    register Ptr aRet;
        {aRet = ((Ptr) GXllsupit); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllversion() {      /* version */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = GMnaversion;
        GIa1 = rA1; rA1 =  llrt_cvatof ((rA1 + 7)->Val, (Ptr) 5);
l_llversr:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXllsystem() {       /* system */
   {    register Ptr aRet;
        GIa1 = GIcstsyste;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXstop() {   /* end */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA4 == (Ptr) 0)     {aRet = ((Ptr) GXtheend); goto lRet;}
        if (rA4 == (Ptr) 1)     goto l_stop1;
        rA1 = (Ptr) 0;
        GIa2 = GMstop;
        {aRet = ((Ptr) GXerrwna); goto lRet;}
l_stop1:
        rA1 = (rSp++)->Val;
        if (rA1 == GInil)       {aRet = ((Ptr) GLllinit_26); goto lRet;}
        (--rSp)->Val = ((Ptr) GLllinit_26);
        {aRet = ((Ptr) GXexwer); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLllinit_26() {      /* notban */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GXpopj0);
        {aRet = ((Ptr) GXll_exit); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXherald() { /* herald */
   {    register Ptr aRet;
        llrt_ttyout((Fix) 50, "; Le-Lisp (by INRIA) version 15.26  (10/Mar/93)  [");
        GIa1 = GIcstsyste;
        (--GIsp)->Val = ((Ptr) GLllinit_27);
        {aRet = ((Ptr) GXstrgsymb); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLllinit_27() {      /* ret_call_strgsymb_30 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = (rA1->Val + 1)->Val;
        llrt_ttyout((Fix) (GIa2), rA1->Val + 2);
        llrt_ttyout((Fix) 1, "]");
        llrt_ttyout(2, "\n\r");
        rA1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GDllinit_28() {      /* trace itsoft */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYllinit,0,1,2);
  lRet:  return (aRet);}}

static Ptr GDllinit_29() {      /* trace super-itsoft */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYllinit,3,1,4);
  lRet:  return (aRet);}}

static Ptr GDllinit_30() {      /* trace version */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYllinit,5,1,6);
  lRet:  return (aRet);}}

static Ptr GDllinit_31() {      /* trace system */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYllinit,7,1,6);
  lRet:  return (aRet);}}

static Ptr GDllinit_32() {      /* trace end */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYllinit,8,1,9);
  lRet:  return (aRet);}}

static Ptr GDllinit_33() {      /* trace herald */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYllinit,10,1,6);
  lRet:  return (aRet);}}

