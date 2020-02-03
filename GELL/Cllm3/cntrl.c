/* GELL 15.26: source file for the module: "cntrl" */
/*             translation done:           "Wed June 30 93 17:34:29 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "cntrl.h" 

static Ptr GLcntrl_1() {        /* startmodule */
   {    register Ptr aRet;
        {aRet = ((Ptr) GXini_ctl); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXini_ctl() {        /* ini_ctl */
   {    register Ptr aRet;
        { llrt_inicst ((Ptr) 16, (Ptr) "loaded-from-file", (Ptr) &GMlff);}
        (GIa1 + 3)->Val = GMllsystem;
        GIa1->Val = GInil;
        GIa1 = (Ptr) 13;
        GIa2 = GInil;
        (--GIsp)->Val = ((Ptr) GLcntrl_2);
        {aRet = ((Ptr) GXmakevect); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_2() {        /* ret_call_makevect_1 */
   {    register Ptr aRet;
        GItabtypfn = GIa1;
        (GItabtypfn->Val + 2 + (Fix) 1)->Val = GMlsubr0;
        (GItabtypfn->Val + 2 + (Fix) 2)->Val = GMlsubr1;
        (GItabtypfn->Val + 2 + (Fix) 3)->Val = GMlsubr2;
        (GItabtypfn->Val + 2 + (Fix) 4)->Val = GMlsubr3;
        (GItabtypfn->Val + 2 + (Fix) 5)->Val = GMnlsubr;
        (GItabtypfn->Val + 2 + (Fix) 6)->Val = GMflsubr;
        (GItabtypfn->Val + 2 + (Fix) 7)->Val = GMllexpr;
        (GItabtypfn->Val + 2 + (Fix) 8)->Val = GMllfexpr;
        (GItabtypfn->Val + 2 + (Fix) 9)->Val = GMllmacro;
        (GItabtypfn->Val + 2 + (Fix) 10)->Val = GMlldmacro;
        (GItabtypfn->Val + 2 + (Fix) 11)->Val = GMllmsubr;
        (GItabtypfn->Val + 2 + (Fix) 12)->Val = GMlldmsubr;
        GIa1 = (Ptr) 13;
        GIa2 = GInil;
        (--GIsp)->Val = ((Ptr) GLcntrl_3);
        {aRet = ((Ptr) GXmakevect); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_3() {        /* ret_call_makevect_2 */
   {    register Ptr aRet;
        GItabcodfn = GIa1;
        (GItabcodfn->Val + 2 + (Fix) 1)->Val = (Ptr) 1;
        (GItabcodfn->Val + 2 + (Fix) 2)->Val = (Ptr) 2;
        (GItabcodfn->Val + 2 + (Fix) 3)->Val = (Ptr) 3;
        (GItabcodfn->Val + 2 + (Fix) 4)->Val = (Ptr) 4;
        (GItabcodfn->Val + 2 + (Fix) 5)->Val = (Ptr) 5;
        (GItabcodfn->Val + 2 + (Fix) 6)->Val = (Ptr) 6;
        (GItabcodfn->Val + 2 + (Fix) 7)->Val = (Ptr) 7;
        (GItabcodfn->Val + 2 + (Fix) 8)->Val = (Ptr) 8;
        (GItabcodfn->Val + 2 + (Fix) 9)->Val = (Ptr) 9;
        (GItabcodfn->Val + 2 + (Fix) 10)->Val = (Ptr) 10;
        (GItabcodfn->Val + 2 + (Fix) 11)->Val = (Ptr) 11;
        (GItabcodfn->Val + 2 + (Fix) 12)->Val = (Ptr) 12;
        { llrt_inisymb ((Ptr) 5, (Ptr) "defun", ((Ptr) GXllde), (Ptr) &GMllde, (Ptr) GFllde);}
        { llrt_inisymb ((Ptr) 2, (Ptr) "de", ((Ptr) GXllde), (Ptr) &GMllde, (Ptr) GFllde);}
        { llrt_inisymb ((Ptr) 2, (Ptr) "df", ((Ptr) GXlldf), (Ptr) &GMlldf, (Ptr) GFlldf);}
        { llrt_inisymb ((Ptr) 2, (Ptr) "dm", ((Ptr) GXdm), (Ptr) &GMdm, (Ptr) GFdm);}
        { llrt_inisymb ((Ptr) 3, (Ptr) "dmd", ((Ptr) GXdmd), (Ptr) &GMdmd, (Ptr) GFdmd);}
        { llrt_inisymb ((Ptr) 8, (Ptr) "defmacro", ((Ptr) GXdmd), (Ptr) &GMdmd, (Ptr) GFdmd);}
        { llrt_inisymb ((Ptr) 2, (Ptr) "ds", ((Ptr) GXllds), (Ptr) &GMllds, (Ptr) GFllds);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "defvar", ((Ptr) GXdefvar), (Ptr) &GMdefvar, (Ptr) GFdefvar);}
        { llrt_inicst ((Ptr) 12, (Ptr) "previous-def", (Ptr) &GMprevdef);}
        (GIa1 + 3)->Val = GMllsystem;
        { llrt_inisymb ((Ptr) 6, (Ptr) "revert", ((Ptr) GXrevert), (Ptr) &GMrevert, (Ptr) GFrevert);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "getdef", ((Ptr) GXgetdef), (Ptr) &GMgetdef, (Ptr) GFgetdef);}
        { llrt_inisymb ((Ptr) 7, (Ptr) "makedef", ((Ptr) GXmakedef), (Ptr) &GMmakedef, (Ptr) GFmakedef);}
        { llrt_inisymb ((Ptr) 2, (Ptr) "if", ((Ptr) GXif), (Ptr) &GMif, (Ptr) GFif);}
        { llrt_inisymb ((Ptr) 3, (Ptr) "ifn", ((Ptr) GXifn), (Ptr) &GMifn, (Ptr) GFifn);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "when", ((Ptr) GXwhen), (Ptr) &GMwhen, (Ptr) GFwhen);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "unless", ((Ptr) GXunless), (Ptr) &GMunless, (Ptr) GFunless);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "cond", ((Ptr) GXcond), (Ptr) &GMcond, (Ptr) GFcond);}
        { llrt_inisymb ((Ptr) 2, (Ptr) "or", ((Ptr) GXllor), (Ptr) &GMllor, (Ptr) GFllor);}
        { llrt_inisymb ((Ptr) 3, (Ptr) "and", ((Ptr) GXlland), (Ptr) &GMlland, (Ptr) GFlland);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "while", ((Ptr) GXwhile), (Ptr) &GMwhile, (Ptr) GFwhile);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "until", ((Ptr) GXuntil), (Ptr) &GMuntil, (Ptr) GFuntil);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "loop", ((Ptr) GXloop), (Ptr) &GMloop, (Ptr) GFloop);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "repeat", ((Ptr) GXfrepeat), (Ptr) &GMfrepeat, (Ptr) GFfrepeat);}
        { llrt_inisymb ((Ptr) 7, (Ptr) "selectq", ((Ptr) GXselectq), (Ptr) &GMselectq, (Ptr) GFselectq);}
        { llrt_inisymb ((Ptr) 3, (Ptr) "map", ((Ptr) GXmap), (Ptr) &GMmap, (Ptr) GFmap);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "mapl", ((Ptr) GXmap), (Ptr) &GMmap, (Ptr) GFmap);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "mapc", ((Ptr) GXmapc), (Ptr) &GMmapc, (Ptr) GFmapc);}
        { llrt_inisymb ((Ptr) 7, (Ptr) "maplist", ((Ptr) GXmaplist), (Ptr) &GMmaplist, (Ptr) GFmaplist);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "mapcar", ((Ptr) GXmapcar), (Ptr) &GMmapcar, (Ptr) GFmapcar);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "mapcon", ((Ptr) GXmapcon), (Ptr) &GMmapcon, (Ptr) GFmapcon);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "mapcan", ((Ptr) GXmapcan), (Ptr) &GMmapcan, (Ptr) GFmapcan);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "every", ((Ptr) GXfevery), (Ptr) &GMfevery, (Ptr) GFfevery);}
        { llrt_inisymb ((Ptr) 3, (Ptr) "any", ((Ptr) GXfany), (Ptr) &GMfany, (Ptr) GFfany);}
        { llrt_inisymb ((Ptr) 9, (Ptr) "mapvector", ((Ptr) GXmapvect), (Ptr) &GMmapvect, (Ptr) GFmapvect);}
        { llrt_inisymb ((Ptr) 9, (Ptr) "mapoblist", ((Ptr) GXmapoblist), (Ptr) &GMmapoblist, (Ptr) GFmapoblist);}
        { llrt_inisymb ((Ptr) 10, (Ptr) "mapcoblist", ((Ptr) GXmapcoblist), (Ptr) &GMmapcoblist, (Ptr) GFmapcoblist);}
        { llrt_inisymb ((Ptr) 10, (Ptr) "maploblist", ((Ptr) GXmaploblist), (Ptr) &GMmaploblist, (Ptr) GFmaploblist);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "quote", ((Ptr) GXquote), (Ptr) &GMquote, (Ptr) GFquote);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "lambda", ((Ptr) GXlambda), (Ptr) &GMlambda, (Ptr) GFlambda);}
        { llrt_inisymb ((Ptr) 7, (Ptr) "flambda", ((Ptr) GXflambda), (Ptr) &GMflambda, (Ptr) GFflambda);}
        { llrt_inisymb ((Ptr) 7, (Ptr) "mlambda", ((Ptr) GXmlambda), (Ptr) &GMmlambda, (Ptr) GFmlambda);}
        { llrt_inisymb ((Ptr) 8, (Ptr) "identity", ((Ptr) GXllid), (Ptr) &GMllid, (Ptr) GFllid);}
        { llrt_inisymb ((Ptr) 7, (Ptr) "comment", ((Ptr) GXcomment), (Ptr) &GMcomment, (Ptr) GFcomment);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "progn", ((Ptr) GXprogn), (Ptr) &GMprogn, (Ptr) GFprogn);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "eprogn", ((Ptr) GXeprogn), (Ptr) &GMeprogn, (Ptr) GFeprogn);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "prog1", ((Ptr) GXprog1), (Ptr) &GMprog1, (Ptr) GFprog1);}
        { llrt_inisymb ((Ptr) 21, (Ptr) "exportable-definition", ((Ptr) GXexdef), (Ptr) &GMexdef, (Ptr) GFexdef);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "prog2", ((Ptr) GXprog2), (Ptr) &GMprog2, (Ptr) GFprog2);}
        GIa1 = GMquote;
        GIa1->Val = GIa1;
        GIa1 = GMlambda;
        GIa1->Val = GIa1;
        GIa1 = GMflambda;
        GIa1->Val = GIa1;
        GIa1 = GMmlambda;
        GIa1->Val = GIa1;
l_cnfalse:
        GIa1 = GInil;
l_cnpopj:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_4() {        /* cnttrue */
   {    register Ptr aRet;
        GIa1 = GMt;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_5() {        /* def */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        rA2 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        {register int aux1, aux2;
                aux1 = (int) ((rA1 + 6)->Val);
                aux1 = aux1 & HIGHTMASK;
                aux2 = (int) (rA3);
                aux1 = aux1 | aux2;
                (rA1 + 6)->Val = (Ptr) aux1;}
        (rA1 + 2)->Val = rA2;
        rA3 = GMlff;
        rA2 = rA3->Val;
        if (rA2 == GInil)       { aRet = (rSp++)->Val; goto lRet;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLcntrl_6);
        {aRet = ((Ptr) GXputprop); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLcntrl_6() {        /* ret_call_putprop_3 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXllde() {   /* defun */
   {    register Ptr aRet;
        GIa3 = (Ptr) 7;
        {aRet = ((Ptr) GLcntrl_5); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXlldf() {   /* df */
   {    register Ptr aRet;
        GIa3 = (Ptr) 8;
        {aRet = ((Ptr) GLcntrl_5); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXdm() {     /* dm */
   {    register Ptr aRet;
        GIa3 = (Ptr) 9;
        {aRet = ((Ptr) GLcntrl_5); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXdmd() {    /* dmd */
   {    register Ptr aRet;
        GIa3 = (Ptr) 10;
        {aRet = ((Ptr) GLcntrl_5); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllds() {   /* ds */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXdefvar() { /* defvar */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rA1 < (long) GIbcons)        { aRet = (rSp++)->Val; goto lRet;}
        (--rSp)->Val = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLcntrl_7);
        rA1 = rA1->Val;
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcntrl_7() {        /* ret_call_evalcar_4 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = (rSp++)->Val;
        if ((rA2 < GIbvar) || (rA2 >= GIbcons)) {aRet = ((Ptr) GLcntrl_8); goto lRet;}
        rA2->Val = rA1;
        rA1 = rA2;
        GIa3 = GMlff;
        rA2 = GIa3->Val;
        if (rA2 == GInil)       { aRet = (rSp++)->Val; goto lRet;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLcntrl_9);
        {aRet = ((Ptr) GXputprop); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLcntrl_9() {        /* ret_call_putprop_5 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
l_defvar9:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_8() {        /* defverr */
   {    register Ptr aRet;
        GIa1 = GIa2;
        GIa2 = GMdefvar;
        {aRet = ((Ptr) GXerrnva); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXrevert() { /* revert */
   {    register Ptr aRet;
        GIa2 = GMprevdef;
        (--GIsp)->Val = ((Ptr) GLcntrl_10);
        {aRet = ((Ptr) GXgetprop); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_10() {       /* ret_call_getprop_6 */
   {    register Ptr aRet, rNil;
        rNil = GInil;
        if (GIa1 == rNil)       { aRet = (GIsp++)->Val; goto lRet;}
        if (GIevalst != rNil)   {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgetdef() { /* getdef */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if ((rA1 < GIbsymb) || (rA1 >= GIbcons))        goto l_gtdefe;
        {register UFix aux;
                aux = (UFix) ((rA1 + 6)->Val);
                GIa2 = (Ptr) aux;}
        GIa3 = (rA1 + 2)->Val;
        {aRet = ((Ptr) GLcntrl_11); goto lRet;}
l_gtdefe:
        GIa2 = GMgetdef;
        {aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXmakedef() {        /* makedef */
   {    register Ptr aRet, rSp, rA2, rA3, rA4;
        rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if (rA2 >= GIbfloat)    goto l_uncod0;
        if ((Fix) (rA2) < (Fix) 0)      goto l_uncodtr;
        if ((Fix) (rA2) <= (Fix) 12)    {aRet = ((Ptr) GLcntrl_11); goto lRet;}
l_uncodtr:
        rA2 = GMmakedef;
        {aRet = ((Ptr) GXerroob); goto lRet;}
l_uncod0:
        (--rSp)->Val = rA3;
        rA4 = (GItabtypfn->Val + 1)->Val;
        goto l_uncod2;
l_uncod1:
        rA3 = (GItabtypfn->Val + 2 + (Fix) (rA4))->Val;
        if (rA3 == rA2) goto l_uncod3;
l_uncod2:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux > 0)    goto l_uncod1;
                else rA4 = (Ptr) 0;}
l_uncod3:
        rA2 = rA4;
        rA3 = (rSp++)->Val;
        {aRet = ((Ptr) GLcntrl_11); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLcntrl_11() {       /* defsuit */
   {    register Ptr aRet;
        {aRet = (Ptr) (brx_cntrl_12[(int) (GIa2)]); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_13() {       /* mkdef0 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_14() {       /* mkdef1 */
   {    register Ptr aRet, rSp, rA3;
        rSp = GIsp; rA3 = GIa3;
        if ((rA3 >= GIbnumb) && (rA3 < GIecons))        {aRet = ((Ptr) GLcntrl_19); goto lRet;}
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        GIa1 = rA3;
        (--rSp)->Val = ((Ptr) GLcntrl_20);
        {aRet = ((Ptr) GXloc); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_20() {       /* ret_call_loc_7 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLcntrl_19); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_19() {       /* mkdef10 */
   {    register Ptr aRet, rA2, rA3;
        rA2 = GIa2; rA3 = GIa3;
        GIa2 = rA2; GIa3 = rA3; rA3 = llrt_cons (rA3, GInil);
        rA2 = (GItabtypfn->Val + 2 + (Fix) (rA2))->Val;
        GIa2 = rA2; GIa3 = rA3; rA3 = llrt_cons (rA2, rA3);
        GIa4 = GMllds;
        {aRet = ((Ptr) GLcntrl_21); goto lRet;}
  lRet: GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLcntrl_15() {       /* mkdef2 */
   {    register Ptr aRet;
        GIa4 = GMllde;
        {aRet = ((Ptr) GLcntrl_21); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_16() {       /* mkdef3 */
   {    register Ptr aRet;
        GIa4 = GMlldf;
        {aRet = ((Ptr) GLcntrl_21); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_17() {       /* mkdef4 */
   {    register Ptr aRet;
        GIa4 = GMdm;
        {aRet = ((Ptr) GLcntrl_21); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_18() {       /* mkdef5 */
   {    register Ptr aRet;
        GIa4 = GMdmd;
        {aRet = ((Ptr) GLcntrl_21); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_21() {       /* mkdef8 */
   {    register Ptr aRet, rA3;
        rA3 = GIa3;
        GIa3 = rA3; rA3 = llrt_cons (GIa1, rA3);
        GIa3 = rA3; rA3 = llrt_cons (GIa4, rA3);
        GIa1 = rA3;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

extern Ptr GXif() {     /* if */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcntrl_22); goto lRet;}
        (--rSp)->Val = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLcntrl_23);
        rA1 = rA1->Val;
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcntrl_23() {       /* ret_call_evalcar_8 */
   {    register Ptr aRet, rA1, rA2, rNil;
        rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        rA2 = (GIsp++)->Val;
        if ((long) rA2 < (long) GIbcons)        goto l_ifer1;
        GIa3 = (rA2 + 1)->Val;
        GIerrname = GMif;
        if (rA1 == rNil)        {aRet = ((Ptr) GLcntrl_24); goto lRet;}
        rA1 = rA2->Val;
        if (GIevalst != rNil)   {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
l_ifer1:
        rA1 = rA2;
        {aRet = ((Ptr) GLcntrl_22); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLcntrl_22() {       /* ifer2 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      { aRet = (GIsp++)->Val; goto lRet;}
        GIa2 = GMif;
        {aRet = ((Ptr) GXerrbal); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXifn() {    /* ifn */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcntrl_25); goto lRet;}
        (--rSp)->Val = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLcntrl_26);
        rA1 = rA1->Val;
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcntrl_26() {       /* ret_call_evalcar_9 */
   {    register Ptr aRet, rA1, rA2, rNil;
        rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        rA2 = (GIsp++)->Val;
        if ((long) rA2 < (long) GIbcons)        goto l_ifner1;
        GIa3 = (rA2 + 1)->Val;
        GIerrname = GMifn;
        if (rA1 != rNil)        {aRet = ((Ptr) GLcntrl_24); goto lRet;}
        rA1 = rA2->Val;
        if (GIevalst != rNil)   {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
l_ifner1:
        rA1 = rA2;
        {aRet = ((Ptr) GLcntrl_25); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLcntrl_25() {       /* ifner2 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      { aRet = (GIsp++)->Val; goto lRet;}
        GIa2 = GMifn;
        {aRet = ((Ptr) GXerrbal); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXwhen() {   /* when */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcntrl_27); goto lRet;}
        (--rSp)->Val = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLcntrl_28);
        rA1 = rA1->Val;
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcntrl_28() {       /* ret_call_evalcar_10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp++)->Val;
        GIerrname = GMwhen;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLcntrl_24); goto lRet;}
l_whenr:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_27() {       /* whener1 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      { aRet = (GIsp++)->Val; goto lRet;}
        GIa2 = GMwhen;
        {aRet = ((Ptr) GXerrbal); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXunless() { /* unless */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcntrl_29); goto lRet;}
        (--rSp)->Val = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLcntrl_30);
        rA1 = rA1->Val;
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcntrl_30() {       /* ret_call_evalcar_11 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        GIa3 = (rSp++)->Val;
        GIerrname = GMunless;
        if (GIa1 == rNil)       {aRet = ((Ptr) GLcntrl_24); goto lRet;}
        GIa1 = rNil;
l_unlesr:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_29() {       /* unler1 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      { aRet = (GIsp++)->Val; goto lRet;}
        GIa2 = GMunless;
        {aRet = ((Ptr) GXerrbal); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXcond() {   /* cond */
   {    register Ptr aRet;
        GIa2 = GIa1;
        {aRet = ((Ptr) GLcntrl_31); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_31() {       /* cond1 */
   {    register Ptr aRet, rSp, rA1, rA2, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBcons = GIbcons;
        if ((long) rA2 < (long) rBcons) {aRet = ((Ptr) GLcntrl_32); goto lRet;}
        (--rSp)->Val = (rA2 + 1)->Val;
        rA1 = rA2->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcntrl_33); goto lRet;}
        (--rSp)->Val = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLcntrl_34);
        rA1 = rA1->Val;
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcntrl_34() {       /* ret_call_evalcar_12 */
   {    register Ptr aRet, rSp, rA3, rNil;
        rSp = GIsp; rA3 = GIa3; rNil = GInil;
        rA3 = (rSp++)->Val;
        GIa2 = (rSp++)->Val;
        if (GIa1 == rNil)       {aRet = ((Ptr) GLcntrl_31); goto lRet;}
        GIerrname = GMcond;
        if ((long) rA3 >= (long) GIbcons)       {aRet = ((Ptr) GLcntrl_24); goto lRet;}
        if (rA3 == rNil)        { aRet = (rSp++)->Val; goto lRet;}
        GIa1 = rA3;
        {aRet = ((Ptr) GLcntrl_35); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLcntrl_33() {       /* conder1 */
   {    register Ptr aRet;
        if (GIa1 != GInil)      goto l_conder2;
        GIa2 = (GIsp++)->Val;
        {aRet = ((Ptr) GLcntrl_31); goto lRet;}
l_conder2:
        GIa2 = GMcond;
        {aRet = ((Ptr) GXerrnla); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_32() {       /* conder3 */
   {    register Ptr aRet;
        GIa1 = GIa2;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLcntrl_35); goto lRet;}
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_35() {       /* conder4 */
   {    register Ptr aRet;
        GIa2 = GMcond;
        {aRet = ((Ptr) GXerrbal); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllor() {   /* or */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if ((long) rA1 >= (long) GIbcons)       {aRet = ((Ptr) GLcntrl_36); goto lRet;}
        if (rA1 == GInil)       { aRet = (GIsp++)->Val; goto lRet;}
        {aRet = ((Ptr) GLcntrl_37); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_38() {       /* or1 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLcntrl_39);
        GIa1 = GIa1->Val;
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_39() {       /* ret_call_evalcar_13 */
   {    register Ptr aRet;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLcntrl_40); goto lRet;}
        GIa1 = (GIsp++)->Val;
        {aRet = ((Ptr) GLcntrl_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_36() {       /* or2 */
   {    register Ptr aRet, rA1, rA2, rNil;
        rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        rA2 = (rA1 + 1)->Val;
        if ((long) rA2 >= (long) GIbcons)       {aRet = ((Ptr) GLcntrl_38); goto lRet;}
        if (rA2 != rNil)        goto l_orer1;
        rA1 = rA1->Val;
        if (GIevalst != rNil)   {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
l_orer1:
        rA1 = rA2;
        {aRet = ((Ptr) GLcntrl_37); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLcntrl_37() {       /* orer2 */
   {    register Ptr aRet;
        GIa2 = GMllor;
        {aRet = ((Ptr) GXerrbal); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXlland() {  /* and */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if ((long) rA1 >= (long) GIbcons)       {aRet = ((Ptr) GLcntrl_41); goto lRet;}
        if (rA1 == GInil)       {aRet = ((Ptr) GLcntrl_4); goto lRet;}
        {aRet = ((Ptr) GLcntrl_42); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_43() {       /* and1 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLcntrl_44);
        GIa1 = GIa1->Val;
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_44() {       /* ret_call_evalcar_14 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLcntrl_40); goto lRet;}
        GIa1 = (GIsp++)->Val;
        {aRet = ((Ptr) GLcntrl_41); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_41() {       /* and2 */
   {    register Ptr aRet, rA1, rA2, rNil;
        rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        rA2 = (rA1 + 1)->Val;
        if ((long) rA2 >= (long) GIbcons)       {aRet = ((Ptr) GLcntrl_43); goto lRet;}
        if (rA2 != rNil)        {aRet = ((Ptr) GLcntrl_45); goto lRet;}
        rA1 = rA1->Val;
        if (GIevalst != rNil)   {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLcntrl_40() {       /* pret */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_45() {       /* ander1 */
   {    register Ptr aRet;
        GIa1 = GIa2;
        {aRet = ((Ptr) GLcntrl_42); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_42() {       /* ander2 */
   {    register Ptr aRet;
        GIa2 = GMlland;
        {aRet = ((Ptr) GXerrbal); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXwhile() {  /* while */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcntrl_46); goto lRet;}
        (--GIsp)->Val = rA1;
        {aRet = ((Ptr) GLcntrl_47); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_48() {       /* while1 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        GIerrname = GMwhile;
        (--rSp)->Val = ((Ptr) GLcntrl_47);
        {aRet = ((Ptr) GLcntrl_49); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcntrl_47() {       /* while2 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLcntrl_50);
        rA1 = rA1->Val;
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcntrl_50() {       /* ret_call_evalcar_16 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLcntrl_48); goto lRet;}
        GIa2 = (rSp++)->Val;
l_whileret:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_46() {       /* whiler */
   {    register Ptr aRet;
        if (GIa1 == GInil)      { aRet = (GIsp++)->Val; goto lRet;}
        GIa2 = GMwhile;
        {aRet = ((Ptr) GXerrbal); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXuntil() {  /* until */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcntrl_51); goto lRet;}
        (--GIsp)->Val = rA1;
        {aRet = ((Ptr) GLcntrl_52); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_53() {       /* until1 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        GIerrname = GMuntil;
        (--rSp)->Val = ((Ptr) GLcntrl_52);
        {aRet = ((Ptr) GLcntrl_49); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcntrl_52() {       /* until2 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLcntrl_54);
        rA1 = rA1->Val;
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcntrl_54() {       /* ret_call_evalcar_18 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLcntrl_53); goto lRet;}
        GIa2 = (rSp++)->Val;
l_untilret:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_51() {       /* untiler */
   {    register Ptr aRet;
        if (GIa1 == GInil)      { aRet = (GIsp++)->Val; goto lRet;}
        GIa2 = GMuntil;
        {aRet = ((Ptr) GXerrbal); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXloop() {   /* loop */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLcntrl_55); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_55() {       /* loop1 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        GIerrname = GMloop;
        (--rSp)->Val = ((Ptr) GLcntrl_55);
        {aRet = ((Ptr) GLcntrl_49); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXfrepeat() {        /* repeat */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcntrl_56); goto lRet;}
        (--rSp)->Val = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLcntrl_57);
        rA1 = rA1->Val;
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcntrl_57() {       /* ret_call_evalcar_20 */
   {    register Ptr aRet, rA1, rA2;
        rA1 = GIa1; rA2 = GIa2;
        rA2 = rA1;
        rA1 = (GIsp++)->Val;
        if (rA2 < GIbfloat)     {aRet = ((Ptr) GLcntrl_58); goto lRet;}
        rA1 = rA2;
        rA2 = GMfrepeat;
        {aRet = ((Ptr) GXerrnia); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLcntrl_59() {       /* repeat1 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        GIerrname = GMfrepeat;
        (--rSp)->Val = ((Ptr) GLcntrl_60);
        {aRet = ((Ptr) GLcntrl_49); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_60() {       /* ret_call_iprogn_21 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLcntrl_58); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_58() {       /* repeat2 */
   {    register Ptr aRet;
        {register Fix aux;
                aux = (Fix) (GIa2) - 1;
                GIa2 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLcntrl_59); goto lRet;}}
        {aRet = ((Ptr) GLcntrl_4); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_56() {       /* freper */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLcntrl_4); goto lRet;}
        GIa2 = GMfrepeat;
        {aRet = ((Ptr) GXerrbal); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXselectq() {        /* selectq */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcntrl_61); goto lRet;}
        (--rSp)->Val = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLcntrl_62);
        rA1 = rA1->Val;
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcntrl_62() {       /* ret_call_evalcar_22 */
   {    register Ptr aRet;
        GIa3 = (GIsp++)->Val;
        {aRet = ((Ptr) GLcntrl_63); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_64() {       /* selec1 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBcons = GIbcons;
        rA2 = rA3->Val;
        rA3 = (rA3 + 1)->Val;
        if ((long) rA2 < (long) rBcons) {aRet = ((Ptr) GLcntrl_65); goto lRet;}
        GIa4 = (rA2 + 1)->Val;
        rA2 = rA2->Val;
        if (rA2 == GMt) {aRet = ((Ptr) GLcntrl_66); goto lRet;}
        if (rA2 == rA1) {aRet = ((Ptr) GLcntrl_66); goto lRet;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA3;
        (--rSp)->Val = GIa4;
        if ((long) rA2 < (long) rBcons) goto l_selec2;
        (--rSp)->Val = ((Ptr) GLcntrl_67);
        {aRet = ((Ptr) GXmember); goto lRet;}
l_selec2:
        (--rSp)->Val = ((Ptr) GLcntrl_67);
        {aRet = ((Ptr) GXequal); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLcntrl_67() {       /* selec3 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa2 = (rSp++)->Val;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLcntrl_68); goto lRet;}
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLcntrl_63); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_63() {       /* selec5 */
   {    register Ptr aRet, rA3;
        rA3 = GIa3;
        if ((long) rA3 >= (long) GIbcons)       {aRet = ((Ptr) GLcntrl_64); goto lRet;}
        GIa1 = rA3;
        {aRet = ((Ptr) GLcntrl_61); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_61() {       /* selecer1 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      { aRet = (GIsp++)->Val; goto lRet;}
        GIa2 = GMselectq;
        {aRet = ((Ptr) GXerrbal); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_65() {       /* selecer2 */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        if (rA2 == GInil)       {aRet = ((Ptr) GLcntrl_63); goto lRet;}
        GIa1 = rA2;
        rA2 = GMselectq;
        {aRet = ((Ptr) GXerrnla); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLcntrl_68() {       /* selec6 */
   {    register Ptr aRet;
        GIa1 = (GIsp++)->Val;
        {aRet = ((Ptr) GLcntrl_66); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_66() {       /* selec7 */
   {    register Ptr aRet;
        GIa1 = GIa4;
        GIerrname = GMselectq;
        {aRet = ((Ptr) GLcntrl_49); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXmap() {    /* map */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GMmap;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLcntrl_69);
        GIa3 = GInil;
        {aRet = ((Ptr) GLcntrl_70); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_70() {       /* allmap */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = GIa3;
        if ((Fix) (rA4) <= (Fix) 1)     {aRet = ((Ptr) GLcntrl_71); goto lRet;}
        {aRet = ((Ptr) GLcntrl_69); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_69() {       /* map1 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rSp + (Fix) 3)->Val;
        rA1 = (rSp + (Fix) 2)->Val;
        rA2 = (rSp + (Fix) 1)->Val;
        (--rSp)->Val = rA1;
        rA3 = rA2;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 4));
        rA1 = (rSp + (Fix) (rA3))->Val;
        goto l_map3;
l_map2:
        rA1 = (rSp + (Fix) (rA3))->Val;
        if ((long) rA1 < (long) GIbcons)        goto l_map4;
        (rSp + (Fix) (rA3))->Val = (rA1 + 1)->Val;
        if (rA4 == (Ptr) 0)     goto l_map3;
        rA1 = rA1->Val;
l_map3:
        (--rSp)->Val = rA1;
        {register Fix aux;
                aux = (Fix) (rA2) - 1;
                rA2 = (Ptr) ((UFix) aux);
                if (aux > 0)    goto l_map2;
                else rA2 = (Ptr) 0;}
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) 4));
        rA4 = rA3;
        {aRet = ((Ptr) GXfuncall); goto lRet;}
l_map4:
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) (rA2)));
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) 3));
        rSp += (Fix) (rA3);
        rA1 = (rSp++)->Val;
        rA3 = (rSp++)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 2));
        rSp += (Fix) (rA3);
        if (rA4 == (Ptr) 2)     { aRet = (rSp++)->Val; goto lRet;}
        {aRet = ((Ptr) GXnreverse); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLcntrl_72() {       /* map6 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa2 = rA2; rA2 = llrt_cons (GIa1, rA2);
        (--rSp)->Val = rA2;
        {aRet = ((Ptr) GLcntrl_69); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLcntrl_73() {       /* map7 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((long) GIa1 < (long) GIbcons)       {aRet = ((Ptr) GLcntrl_69); goto lRet;}
        GIa2 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLcntrl_74);
        {aRet = ((Ptr) GXnreconc); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_74() {       /* ret_call_nreconc_25 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLcntrl_69); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_75() {       /* map8 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        (GIsp + (Fix) 0)->Val = rA1;
        if (rA1 != GInil)       {aRet = ((Ptr) GLcntrl_69); goto lRet;}
        {aRet = ((Ptr) GLcntrl_76); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_77() {       /* map9 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        (GIsp + (Fix) 0)->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLcntrl_69); goto lRet;}
        {aRet = ((Ptr) GLcntrl_76); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_76() {       /* map10 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rSp += (Fix) 1;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 3));
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLcntrl_71() {       /* maper */
   {    register Ptr aRet;
        GIa1 = GIa4;
        {aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_78() {       /* allmapun */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa4 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        GIa2 = (rSp++)->Val;
        {register Ptr aux;
                aux = rSp->Val;
                rSp->Val = rA1;
                rA1 = aux;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = GIa3;
        {aRet = ((Ptr) GLcntrl_79); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcntrl_79() {       /* mapun1 */
   {    register Ptr aRet, rSp, rA2, rA4;
        rSp = GIsp; rA2 = GIa2; rA4 = GIa4;
        rA2 = (rSp + (Fix) 2)->Val;
        if ((long) rA2 < (long) GIbcons)        goto l_mapun4;
        (rSp + (Fix) 2)->Val = (rA2 + 1)->Val;
        GIa3 = (rSp + (Fix) 1)->Val;
        GIa1 = (rSp + (Fix) 3)->Val;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rA2->Val;
        rA4 = (Ptr) 1;
        {aRet = ((Ptr) GXffuncall); goto lRet;}
l_mapun4:
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 3;
        rA4 = (rSp++)->Val;
        if (rA4 == (Ptr) 2)     { aRet = (rSp++)->Val; goto lRet;}
        {aRet = ((Ptr) GXnreverse); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLcntrl_80() {       /* mapun6 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa2 = rA2; rA2 = llrt_cons (GIa1, rA2);
        (--rSp)->Val = rA2;
        {aRet = ((Ptr) GLcntrl_79); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLcntrl_81() {       /* mapun7 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((long) GIa1 < (long) GIbcons)       {aRet = ((Ptr) GLcntrl_79); goto lRet;}
        GIa2 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLcntrl_82);
        {aRet = ((Ptr) GXnreconc); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_82() {       /* ret_call_nreconc_26 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLcntrl_79); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_83() {       /* mapun8 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + (Fix) 0)->Val = rA1;
        if (rA1 != GInil)       {aRet = ((Ptr) GLcntrl_79); goto lRet;}
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_84() {       /* mapun9 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLcntrl_79); goto lRet;}
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXmapc() {   /* mapc */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GInil;
        (--rSp)->Val = (Ptr) 1;
        if (GIa4 != (Ptr) 2)    goto l_mapcn;
        (--rSp)->Val = ((Ptr) GLcntrl_79);
        {aRet = ((Ptr) GLcntrl_78); goto lRet;}
l_mapcn:
        GIa2 = GMmapc;
        (--rSp)->Val = ((Ptr) GLcntrl_69);
        {aRet = ((Ptr) GLcntrl_70); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXmaplist() {        /* maplist */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GInil;
        GIa2 = GMmaplist;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLcntrl_72);
        {aRet = ((Ptr) GLcntrl_70); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXmapcar() { /* mapcar */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GInil;
        (--rSp)->Val = (Ptr) 1;
        if (GIa4 != (Ptr) 2)    goto l_mapcarn;
        (--rSp)->Val = ((Ptr) GLcntrl_80);
        {aRet = ((Ptr) GLcntrl_78); goto lRet;}
l_mapcarn:
        GIa2 = GMmapcar;
        (--rSp)->Val = ((Ptr) GLcntrl_72);
        {aRet = ((Ptr) GLcntrl_70); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXmapcon() { /* mapcon */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GMmapcon;
        GIa3 = GInil;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLcntrl_73);
        {aRet = ((Ptr) GLcntrl_70); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXmapcan() { /* mapcan */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GInil;
        (--rSp)->Val = (Ptr) 1;
        if (GIa4 != (Ptr) 2)    goto l_mapcann;
        (--rSp)->Val = ((Ptr) GLcntrl_81);
        {aRet = ((Ptr) GLcntrl_78); goto lRet;}
l_mapcann:
        GIa2 = GMmapcan;
        (--rSp)->Val = ((Ptr) GLcntrl_73);
        {aRet = ((Ptr) GLcntrl_70); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXfevery() { /* every */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GMt;
        (--rSp)->Val = (Ptr) 2;
        if (GIa4 != (Ptr) 2)    goto l_feveryn;
        (--rSp)->Val = ((Ptr) GLcntrl_83);
        {aRet = ((Ptr) GLcntrl_78); goto lRet;}
l_feveryn:
        GIa2 = GMfevery;
        (--rSp)->Val = ((Ptr) GLcntrl_75);
        {aRet = ((Ptr) GLcntrl_70); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXfany() {   /* any */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GInil;
        (--rSp)->Val = (Ptr) 2;
        if (GIa4 != (Ptr) 2)    goto l_fanyn;
        (--rSp)->Val = ((Ptr) GLcntrl_84);
        {aRet = ((Ptr) GLcntrl_78); goto lRet;}
l_fanyn:
        GIa2 = GMfany;
        (--rSp)->Val = ((Ptr) GLcntrl_77);
        {aRet = ((Ptr) GLcntrl_70); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXmapvect() {        /* mapvector */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        if ((rA2 < GIbvect) || (rA2 >= GIbstrg))        {aRet = ((Ptr) GLcntrl_85); goto lRet;}
        GIa3 = (Ptr) 0;
        GIa4 = (rA2->Val + 1)->Val;
        {aRet = ((Ptr) GLcntrl_86); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_87() {       /* mapvect1 */
   {    register Ptr aRet, rSp, rA2, rA3;
        rSp = GIsp; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA3;
        (--rSp)->Val = GIa4;
        rA3 = (rA2->Val + 2 + (Fix) (rA3))->Val;
        (--rSp)->Val = ((Ptr) GLcntrl_88);
        (--rSp)->Val = rA3;
        GIa4 = (Ptr) 1;
        {aRet = ((Ptr) GXffuncall); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLcntrl_88() {       /* mapvect2 */
   {    register Ptr aRet, rSp, rA3;
        rSp = GIsp; rA3 = GIa3;
        GIa4 = (rSp++)->Val;
        rA3 = (rSp++)->Val;
        GIa2 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (1)));
        {aRet = ((Ptr) GLcntrl_86); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLcntrl_86() {       /* mapvect8 */
   {    register Ptr aRet;
        {register Fix aux;
                aux = (Fix) (GIa4) - 1;
                GIa4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLcntrl_87); goto lRet;}}
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_85() {       /* mapvect9 */
   {    register Ptr aRet;
        GIa1 = GIa2;
        GIa2 = GMmapvect;
        {aRet = ((Ptr) GXerrvec); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXmapcoblist() {     /* mapcoblist */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLcntrl_89);
        {aRet = ((Ptr) GLcntrl_90); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_90() {       /* allmapob */
   {    register Ptr aRet, rA3;
        rA3 = GIa3;
        GIa4 = GInil;
        rA3 = (GIhashtab->Val + 1)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) (1)));
        {aRet = ((Ptr) GLcntrl_91); goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

static Ptr GLcntrl_91() {       /* mapcob0 */
   {    register Ptr aRet;
        GIa3 = (GIhashtab->Val + 2 + (Fix) (GIa3))->Val;
        {aRet = ((Ptr) GLcntrl_92); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_93() {       /* mapcob1 */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        rA2 = GIa3;
        if (((rA2 + 7)->Val >= GIbstrg) && ((rA2 + 7)->Val < GIbsymb))  {aRet = ((Ptr) GLcntrl_94); goto lRet;}
        {aRet = ((Ptr) GLcntrl_95); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLcntrl_95() {       /* mapcob2 */
   {    register Ptr aRet;
        GIa2 = (GIa2 + 7)->Val;
        {aRet = ((Ptr) GLcntrl_94); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_94() {       /* mapcob3 */
   {    register Ptr aRet, rSp, rA2, rA4;
        rSp = GIsp; rA2 = GIa2; rA4 = GIa4;
        if (rA2 == GMundef)     {aRet = ((Ptr) GLcntrl_96); goto lRet;}
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA4;
        rA4 = (rSp + (Fix) 4)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA2;
        rA4 = (Ptr) 1;
        {aRet = ((Ptr) GXffuncall); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLcntrl_97() {       /* mapcob5 */
   {    register Ptr aRet;
        GIa4 = (GIsp++)->Val;
        {aRet = ((Ptr) GLcntrl_98); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_98() {       /* mapcob5a */
   {    register Ptr aRet;
        GIa2 = (GIsp++)->Val;
        {aRet = ((Ptr) GLcntrl_99); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_99() {       /* mapcob5b */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLcntrl_96); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_96() {       /* mapcob6 */
   {    register Ptr aRet, rA3;
        rA3 = GIa3;
        if (rA3 != GIa2)        {aRet = ((Ptr) GLcntrl_95); goto lRet;}
        rA3 = (rA3 + 5)->Val;
        {aRet = ((Ptr) GLcntrl_92); goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

static Ptr GLcntrl_92() {       /* mapcob7 */
   {    register Ptr aRet, rA3;
        rA3 = GIa3;
        if ((rA3 >= GIbsymb) && (rA3 < GIbcons))        {aRet = ((Ptr) GLcntrl_93); goto lRet;}
l_mapcob8:
        {register Fix aux;
                aux = (Fix) (rA3) - 1;
                rA3 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLcntrl_91); goto lRet;}}
        GIa1 = (GIsp++)->Val;
        GIa1 = GIa4;
        {aRet = ((Ptr) GXnreverse); goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

static Ptr GLcntrl_100() {      /* maplobco */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLcntrl_97); goto lRet;}
        rA4 = (rSp++)->Val;
        GIa2 = (rSp++)->Val;
        GIsp = rSp; GIa4 = rA4; rA4 = llrt_cons (GIa2, rA4);
        {aRet = ((Ptr) GLcntrl_99); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLcntrl_89() {       /* mapcobco */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((long) GIa1 < (long) GIbcons)       {aRet = ((Ptr) GLcntrl_97); goto lRet;}
        GIa2 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLcntrl_101);
        {aRet = ((Ptr) GXnreconc); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_101() {      /* ret_call_nreconc_27 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLcntrl_98); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXmaploblist() {     /* maploblist */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLcntrl_100);
        {aRet = ((Ptr) GLcntrl_90); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXmapoblist() {      /* mapoblist */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLcntrl_97);
        {aRet = ((Ptr) GLcntrl_90); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXquote() {  /* quote */
   {    register Ptr aRet, rA1, rA2;
        rA1 = GIa1; rA2 = GIa2;
        rA2 = (rA1 + 1)->Val;
        if (rA2 != GInil)       goto l_quoterr;
        rA1 = rA1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
l_quoterr:
        rA1 = (Ptr) 1;
        rA2 = GMquote;
        {aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXlambda() { /* lambda */
   {    register Ptr aRet;
         GIa1 = llrt_cons (GMlambda, GIa1);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXflambda() {        /* flambda */
   {    register Ptr aRet;
         GIa1 = llrt_cons (GMflambda, GIa1);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXmlambda() {        /* mlambda */
   {    register Ptr aRet;
         GIa1 = llrt_cons (GMmlambda, GIa1);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXcomment() {        /* comment */
   {    register Ptr aRet;
        GIa1 = GMcomment;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllid() {   /* identity */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIitcount != 0) {GIsp = rSp; llrt_ithard ();}
        if (rSp < GImstack)     {aRet = ((Ptr) GXerrfs); goto lRet;}
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_24() {       /* progna3 */
   {    register Ptr aRet, rA1, rNil;
        rA1 = GIa1; rNil = GInil;
        rA1 = GIa3;
        if (GIitcount != 0) {GIa1 = rA1; llrt_ithard ();}
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GXevprogn); goto lRet;}
        GIa2 = (rA1 + 1)->Val;
        if (GIa2 == rNil)       goto l_progna36;
        {aRet = ((Ptr) GXevprogn); goto lRet;}
l_progna36:
        rA1 = rA1->Val;
        if (GIevalst != rNil)   {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXeprogn() { /* eprogn */
   {    register Ptr aRet;
        GIerrname = GMeprogn;
        if (GIitcount != 0) { llrt_ithard ();}
        {aRet = ((Ptr) GXevprogn); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXprogn() {  /* progn */
   {    register Ptr aRet;
        GIerrname = GMprogn;
        {aRet = ((Ptr) GLcntrl_49); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcntrl_49() {       /* iprogn */
   {    register Ptr aRet;
        if (GIitcount != 0) { llrt_ithard ();}
        {aRet = ((Ptr) GXevprogn); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXexdef() {  /* exportable-definition */
   {    register Ptr aRet;
        {aRet = ((Ptr) GXprog1); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXprog1() {  /* prog1 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcntrl_102); goto lRet;}
        (--rSp)->Val = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLcntrl_103);
        rA1 = rA1->Val;
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcntrl_103() {      /* ret_call_evalcar_28 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = rSp->Val;
                rSp->Val = GIa1;
                GIa1 = aux;}
        GIerrname = GMprog1;
        (--rSp)->Val = ((Ptr) GLcntrl_104);
        {aRet = ((Ptr) GLcntrl_49); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_104() {      /* ret_call_iprogn_29 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
l_prog1r:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_102() {      /* prog1e */
   {    register Ptr aRet;
        if (GIa1 == GInil)      { aRet = (GIsp++)->Val; goto lRet;}
        GIa2 = GMprog1;
        {aRet = ((Ptr) GXerrbal); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXprog2() {  /* prog2 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcntrl_105); goto lRet;}
        (--rSp)->Val = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLcntrl_106);
        rA1 = rA1->Val;
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcntrl_106() {      /* ret_call_evalcar_30 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (rSp++)->Val;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcntrl_105); goto lRet;}
        (--rSp)->Val = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLcntrl_107);
        rA1 = rA1->Val;
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcntrl_107() {      /* ret_call_evalcar_31 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = rSp->Val;
                rSp->Val = GIa1;
                GIa1 = aux;}
        GIerrname = GMprog2;
        (--rSp)->Val = ((Ptr) GLcntrl_108);
        {aRet = ((Ptr) GLcntrl_49); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_108() {      /* ret_call_iprogn_32 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
l_prog2r:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcntrl_105() {      /* prog2e */
   {    register Ptr aRet;
        if (GIa1 == GInil)      { aRet = (GIsp++)->Val; goto lRet;}
        GIa2 = GMprog2;
        {aRet = ((Ptr) GXerrbal); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDcntrl_109() {      /* trace defun */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,0,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_110() {      /* trace df */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,3,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_111() {      /* trace dm */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,4,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_112() {      /* trace dmd */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,5,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_113() {      /* trace ds */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,6,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_114() {      /* trace defvar */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,7,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_115() {      /* trace revert */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,8,1,9);
  lRet:  return (aRet);}}

static Ptr GDcntrl_116() {      /* trace getdef */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,10,1,9);
  lRet:  return (aRet);}}

static Ptr GDcntrl_117() {      /* trace makedef */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,11,1,12);
  lRet:  return (aRet);}}

static Ptr GDcntrl_118() {      /* trace if */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,13,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_119() {      /* trace ifn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,14,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_120() {      /* trace when */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,15,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_121() {      /* trace unless */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,16,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_122() {      /* trace cond */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,17,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_123() {      /* trace or */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,18,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_124() {      /* trace and */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,19,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_125() {      /* trace while */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,20,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_126() {      /* trace until */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,21,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_127() {      /* trace loop */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,22,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_128() {      /* trace repeat */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,23,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_129() {      /* trace selectq */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,24,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_130() {      /* trace map */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,25,1,26);
  lRet:  return (aRet);}}

static Ptr GDcntrl_131() {      /* trace mapc */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,27,1,26);
  lRet:  return (aRet);}}

static Ptr GDcntrl_132() {      /* trace maplist */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,28,1,26);
  lRet:  return (aRet);}}

static Ptr GDcntrl_133() {      /* trace mapcar */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,29,1,26);
  lRet:  return (aRet);}}

static Ptr GDcntrl_134() {      /* trace mapcon */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,30,1,26);
  lRet:  return (aRet);}}

static Ptr GDcntrl_135() {      /* trace mapcan */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,31,1,26);
  lRet:  return (aRet);}}

static Ptr GDcntrl_136() {      /* trace every */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,32,1,26);
  lRet:  return (aRet);}}

static Ptr GDcntrl_137() {      /* trace any */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,33,1,26);
  lRet:  return (aRet);}}

static Ptr GDcntrl_138() {      /* trace mapvector */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,34,1,35);
  lRet:  return (aRet);}}

static Ptr GDcntrl_139() {      /* trace mapcoblist */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,36,1,9);
  lRet:  return (aRet);}}

static Ptr GDcntrl_140() {      /* trace maploblist */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,37,1,9);
  lRet:  return (aRet);}}

static Ptr GDcntrl_141() {      /* trace mapoblist */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,38,1,9);
  lRet:  return (aRet);}}

static Ptr GDcntrl_142() {      /* trace quote */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,39,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_143() {      /* trace lambda */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,40,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_144() {      /* trace flambda */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,41,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_145() {      /* trace mlambda */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,42,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_146() {      /* trace comment */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,43,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_147() {      /* trace identity */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,44,1,9);
  lRet:  return (aRet);}}

static Ptr GDcntrl_148() {      /* trace eprogn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,45,1,9);
  lRet:  return (aRet);}}

static Ptr GDcntrl_149() {      /* trace progn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,46,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_150() {      /* trace exportable-definition */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,47,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_151() {      /* trace prog1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,48,1,2);
  lRet:  return (aRet);}}

static Ptr GDcntrl_152() {      /* trace prog2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcntrl,49,1,2);
  lRet:  return (aRet);}}

