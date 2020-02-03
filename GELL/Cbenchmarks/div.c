/* GELL 15.26: source file for the module: "div" */
/*             translation done:           "Wed June 16 93 18:18:28 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "div.h" 

static Ptr GLdiv_1() {  /* check-div2iter */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GInil;
        GIa1 = (Ptr) 100;
        (--rSp)->Val = ((Ptr) GLdiv_3);
        {aRet = (GYdiv[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdiv_3() {  /* call_div_2 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYdiv; rA1 = GIa1;
        GIa2 = rA1;
        rA1 = rLit[1];
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdiv_4() {  /* meter-div2iter */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdiv; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLdiv_5);
        (--rSp)->Val = rLit[3];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdiv_5() {  /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYdiv[5]->Val;
        (--rSp)->Val = ((Ptr) GLdiv_7);
        {aRet = ((Ptr) GLdiv_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdiv_7() {  /* call_div_6 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdiv; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[6];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdiv_9() {  /* test-div2iter */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if (rA1 != (Ptr) 1)     {aRet = ((Ptr) GLdiv_10); goto lRet;}
        rA1 = GYdiv[5]->Val;
        {aRet = ((Ptr) GLdiv_8); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdiv_11() { /* 103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = GYdiv[5]->Val;
        (--rSp)->Val = ((Ptr) GLdiv_13);
        {aRet = ((Ptr) GLdiv_8); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdiv_13() { /* call_div_12 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLdiv_10); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdiv_10() { /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLdiv_11); goto lRet;}}
        rA1 = GYdiv[7];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdiv_14() { /* check-div2rec */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GInil;
        GIa1 = (Ptr) 100;
        (--rSp)->Val = ((Ptr) GLdiv_16);
        {aRet = (GYdiv[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdiv_16() { /* call_div_15 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYdiv; rA1 = GIa1;
        GIa2 = rA1;
        rA1 = rLit[8];
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdiv_17() { /* meter-div2rec */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdiv; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLdiv_18);
        (--rSp)->Val = rLit[9];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdiv_18() { /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYdiv[5]->Val;
        (--rSp)->Val = ((Ptr) GLdiv_20);
        {aRet = ((Ptr) GLdiv_21); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdiv_20() { /* call_div_19 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdiv; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[10];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdiv_22() { /* test-div2rec */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if (rA1 != (Ptr) 1)     {aRet = ((Ptr) GLdiv_23); goto lRet;}
        rA1 = GYdiv[5]->Val;
        {aRet = ((Ptr) GLdiv_21); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdiv_24() { /* 103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = GYdiv[5]->Val;
        (--rSp)->Val = ((Ptr) GLdiv_26);
        {aRet = ((Ptr) GLdiv_21); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdiv_26() { /* call_div_25 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLdiv_23); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdiv_23() { /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLdiv_24); goto lRet;}}
        rA1 = GYdiv[7];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdiv_27() { /* create-n */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        (--rSp)->Val = rNil;
        goto l_102;
l_101:
        (--rSp)->Val = rA1;
        rA2 = (rSp + 1)->Val;
        rA1 = rNil;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        (rSp + 1)->Val = rA1;
        rA1 = (rSp++)->Val;
l_102:
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_101;}
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLdiv_28() { /* iterative-div2 */
   {    register Ptr aRet;
        GIa2 = GInil;
        {aRet = ((Ptr) GLdiv_29); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdiv_29() { /* iterative-div2-aux */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
l_GLdiv_29:
        (--rSp)->Val = rA1;
        if (rA1 != rNil)        goto l_101;
        rA1 = rA2;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = (rA1 + 1)->Val;
        rA1 = (rSp + 1)->Val;
        rA1 = rA1->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 1;
        goto l_GLdiv_29;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLdiv_30() { /* recursive-div2 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
l_GLdiv_30:
        if (rA1 != rNil)        goto l_101;
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        (--rSp)->Val = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLdiv_32);
        goto l_GLdiv_30;
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdiv_32() { /* call_div_31 */
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

static Ptr GLdiv_8() {  /* test-1 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 1200;
        {aRet = ((Ptr) GLdiv_33); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdiv_34() { /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa4;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLdiv_36);
        {aRet = (GYdiv[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdiv_36() { /* call_div_35 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        {aRet = ((Ptr) GLdiv_33); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdiv_33() { /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLdiv_34); goto lRet;}}
        GIa1 = GYdiv[7];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdiv_21() { /* test-2 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 1200;
        {aRet = ((Ptr) GLdiv_37); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdiv_38() { /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa4;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLdiv_40);
        {aRet = (GYdiv[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdiv_40() { /* call_div_39 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        {aRet = ((Ptr) GLdiv_37); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdiv_37() { /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLdiv_38); goto lRet;}}
        GIa1 = GYdiv[7];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GDdiv_41() { /* trace check-div2iter */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdiv,13,14,15);
  lRet:  return (aRet);}}

static Ptr GDdiv_42() { /* trace meter-div2iter */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdiv,16,14,15);
  lRet:  return (aRet);}}

static Ptr GDdiv_43() { /* trace test-div2iter */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdiv,17,14,18);
  lRet:  return (aRet);}}

static Ptr GDdiv_44() { /* trace check-div2rec */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdiv,19,14,15);
  lRet:  return (aRet);}}

static Ptr GDdiv_45() { /* trace meter-div2rec */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdiv,20,14,15);
  lRet:  return (aRet);}}

static Ptr GDdiv_46() { /* trace test-div2rec */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdiv,21,14,18);
  lRet:  return (aRet);}}

static Ptr GDdiv_47() { /* trace create-n */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdiv,22,14,18);
  lRet:  return (aRet);}}

static Ptr GDdiv_48() { /* trace iterative-div2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdiv,11,14,18);
  lRet:  return (aRet);}}

static Ptr GDdiv_49() { /* trace recursive-div2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdiv,12,14,18);
  lRet:  return (aRet);}}

