/* GELL 15.26: source file for the module: "takl" */
/*             translation done:           "Wed June 16 93 18:18:08 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "takl.h" 

static Ptr GLtakl_1() { /* check-takl */
   {    register Ptr aRet, *rLit;
        rLit = GYtakl;
        GIa2 = rLit[0];
        GIa1 = rLit[1];
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtakl_2() { /* meter-takl */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtakl; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtakl_3);
        (--rSp)->Val = rLit[3];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtakl_3() { /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtakl; rSp = GIsp;
        GIa3 = rLit[5]->Val;
        GIa2 = rLit[6]->Val;
        GIa1 = rLit[7]->Val;
        (--rSp)->Val = ((Ptr) GLtakl_5);
        {aRet = ((Ptr) GLtakl_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtakl_5() { /* call_takl_4 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtakl; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[8];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtakl_7() { /* test-takl */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYtakl; rA1 = GIa1;
        if (rA1 != (Ptr) 1)     {aRet = ((Ptr) GLtakl_8); goto lRet;}
        GIa3 = rLit[5]->Val;
        GIa2 = rLit[6]->Val;
        rA1 = rLit[7]->Val;
        {aRet = ((Ptr) GLtakl_6); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLtakl_9() { /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYtakl; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        GIa3 = rLit[5]->Val;
        GIa2 = rLit[6]->Val;
        rA1 = rLit[7]->Val;
        (--rSp)->Val = ((Ptr) GLtakl_11);
        {aRet = ((Ptr) GLtakl_6); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakl_11() {        /* call_takl_10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLtakl_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtakl_8() { /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLtakl_9); goto lRet;}}
        rA1 = GYtakl[9];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakl_12() {        /* listn */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
l_GLtakl_12:
        if ((Ptr) 0 == rA1)     {aRet = ((Ptr) GLtakl_13); goto lRet;}
        (--rSp)->Val = rA1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakl_15);
        goto l_GLtakl_12;
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakl_15() {        /* call_takl_14 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLtakl_13() {        /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtakl_6() { /* takl */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLtakl_17);
        {aRet = ((Ptr) GLtakl_18); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLtakl_17() {        /* call_takl_16 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_101;
        rA1 = (rSp + 2)->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rSp->Val;
        GIa3 = (rSp + 2)->Val;
        GIa2 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLtakl_20);
        {aRet = ((Ptr) GLtakl_6); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakl_20() {        /* call_takl_19 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = (rSp + 2)->Val;
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLtakl_22);
        {aRet = ((Ptr) GLtakl_6); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakl_22() {        /* call_takl_21 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = (rSp + 4)->Val;
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLtakl_24);
        {aRet = ((Ptr) GLtakl_6); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakl_24() {        /* call_takl_23 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakl_6); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakl_18() {        /* shorterp */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
l_GLtakl_18:
        if (rA2 == rNil)        goto l_101;
        if (rA1 == rNil)        goto l_103;
        rA2 = (rA2 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        goto l_GLtakl_18;
l_103:
        rA1 = GYtakl[9];
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GDtakl_25() {        /* trace check-takl */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtakl,10,11,12);
  lRet:  return (aRet);}}

static Ptr GDtakl_26() {        /* trace meter-takl */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtakl,13,11,12);
  lRet:  return (aRet);}}

static Ptr GDtakl_27() {        /* trace test-takl */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtakl,14,11,15);
  lRet:  return (aRet);}}

static Ptr GDtakl_28() {        /* trace listn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtakl,16,11,15);
  lRet:  return (aRet);}}

