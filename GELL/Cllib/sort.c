/* GELL 15.26: source file for the module: "sort" */
/*             translation done:           "Wed June 16 93 18:01:48 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "sort.h" 

static Ptr GLsort_1() { /* sort */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYsort; rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rLit[0]->Val;
        rLit[0]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[1];
        (--rSp)->Val = ((Ptr) GLsort_1);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = rA2;
        (--rSp)->Val = ((Ptr) GLsort_3);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsort_3() { /* call_sort_2 */
   {    register Ptr aRet, rSp, rA1, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        {aRet = ((Ptr) GLsort_4); goto lRet;}
        rA4 = (rSp + 7)->Val;
        if ((rA4 + 1)->Val != rNil)     goto l_103;
        rA1 = rA4;
        {aRet = ((Ptr) GLsort_5); goto lRet;}
l_103:
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA4;
        rA1 = (rSp + 9)->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) / (Fix) 2));
        (--rSp)->Val = ((Ptr) GLsort_7);
        {aRet = (GYsort[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsort_7() { /* call_sort_6 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLsort_9);
        {aRet = (GYsort[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsort_9() { /* call_sort_8 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYsort; rSp = GIsp; rA1 = GIa1;
        (rSp + 9)->Val = rA1;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        (rA1 + 1)->Val = GInil;
        GIa2 = rSp->Val;
        rA1 = rLit[0]->Val;
        (--rSp)->Val = ((Ptr) GLsort_11);
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsort_11() {        /* call_sort_10 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYsort; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = (rSp + 2)->Val;
        GIa1 = rLit[0]->Val;
        (--rSp)->Val = ((Ptr) GLsort_13);
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsort_13() {        /* call_sort_12 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLsort_15);
        {aRet = ((Ptr) GLsort_16); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsort_15() {        /* call_sort_14 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLsort_5); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsort_4() { /* 101 */
   {    register Ptr aRet, *rLit;
        rLit = GYsort;
        GIa3 = (GIsp + 7)->Val;
        GIa2 = rLit[6];
        GIa1 = rLit[5];
         GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLsort_5); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsort_5() { /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYsort[0]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsort_16() {        /* #:sort:ffusion */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYsort; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLsort_17);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rA1->Val;
        (--rSp)->Val = rA2->Val;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsort_17() {        /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      goto l_102;
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (rSp + 2)->Val = (rSp + 1)->Val;
        GIa4 = (rSp++)->Val;
        rSp->Val = GIa4;
l_102:
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLsort_18); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsort_18() {        /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYsort; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        rA4 = (rSp + 1)->Val;
        if ((rA4 + 1)->Val == rNil)     {aRet = ((Ptr) GLsort_19); goto lRet;}
        if ((rSp + 2)->Val == rNil)     {aRet = ((Ptr) GLsort_19); goto lRet;}
        (--rSp)->Val = ((Ptr) GLsort_20);
        (--rSp)->Val = rLit[0]->Val;
        rA4 = (rSp + 4)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (rSp + 4)->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 3;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsort_20() {        /* 108 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (GIa1 == GInil)      goto l_107;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 2)->Val;
        (rSp + 3)->Val = (rA4 + 1)->Val;
        rA4 = (rSp++)->Val;
        GIa3 = (rSp + 1)->Val;
        (GIa3 + 1)->Val = rA4;
l_107:
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        {aRet = ((Ptr) GLsort_18); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsort_19() {        /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((rSp + 2)->Val == GInil)    goto l_110;
        GIa4 = (rSp + 1)->Val;
        (GIa4 + 1)->Val = (rSp + 2)->Val;
l_110:
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsort_21() {        /* sortl */
   {    register Ptr aRet, *rLit;
        rLit = GYsort;
        GIa2 = GIa1;
        GIa1 = rLit[8];
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsort_22() {        /* sortn */
   {    register Ptr aRet, *rLit;
        rLit = GYsort;
        GIa2 = GIa1;
        GIa1 = rLit[9];
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsort_23() {        /* sortp */
   {    register Ptr aRet, *rLit;
        rLit = GYsort;
        GIa2 = GIa1;
        GIa1 = rLit[10];
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsort_24() {        /* pkgcmp */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYsort; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        if ((rA1 + 3)->Val != (rA2 + 3)->Val)   goto l_101;
        rSp += (Fix) 1;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
l_101:
        (--rSp)->Val = (rA1 + 3)->Val;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLsort_26);
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsort_26() {        /* call_sort_25 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYsort; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_104;
        rA1 = rNil;
        goto l_105;
l_104:
        rA1 = rLit[12];
l_105:
        if (rA1 != rNil)        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
        GIa4 = (rSp + 1)->Val;
        (--rSp)->Val = (GIa4 + 3)->Val;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLsort_28);
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsort_28() {        /* call_sort_27 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      goto l_106;
        GIa2 = rSp->Val;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 3;
        {aRet = (GYsort[10] + 2)->Val; goto lRet;}
l_106:
        rSp += (Fix) 1;
l_103:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDsort_29() {        /* trace sort */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsort,5,13,14);
  lRet:  return (aRet);}}

static Ptr GDsort_30() {        /* trace sortl */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsort,15,13,16);
  lRet:  return (aRet);}}

static Ptr GDsort_31() {        /* trace sortn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsort,17,13,16);
  lRet:  return (aRet);}}

static Ptr GDsort_32() {        /* trace sortp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsort,18,13,16);
  lRet:  return (aRet);}}

static Ptr GDsort_33() {        /* trace pkgcmp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsort,10,13,14);
  lRet:  return (aRet);}}

