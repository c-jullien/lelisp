/* GELL 15.26: source file for the module: "dderiv" */
/*             translation done:           "Wed June 16 93 18:18:27 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "dderiv.h" 

static Ptr GLdderiv_1() {       /* check-dderiv */
   {    register Ptr aRet, *rLit;
        rLit = GYdderiv;
        GIa2 = rLit[0];
        GIa1 = rLit[1];
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdderiv_2() {       /* meter-dderiv */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdderiv; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLdderiv_3);
        (--rSp)->Val = rLit[3];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdderiv_3() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLdderiv_5);
        {aRet = ((Ptr) GLdderiv_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdderiv_5() {       /* call_dderiv_4 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdderiv; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[5];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdderiv_7() {       /* test-dderiv */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) 1)    {aRet = ((Ptr) GLdderiv_8); goto lRet;}
        {aRet = ((Ptr) GLdderiv_6); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdderiv_9() {       /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdderiv_11);
        {aRet = ((Ptr) GLdderiv_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdderiv_11() {      /* call_dderiv_10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLdderiv_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdderiv_8() {       /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLdderiv_9); goto lRet;}}
        rA1 = GYdderiv[6];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdderiv_12() {      /* dderiv-aux */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdderiv; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[7];
        (--rSp)->Val = ((Ptr) GLdderiv_14);
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdderiv_14() {      /* call_dderiv_13 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (GYdderiv[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdderiv_15() {      /* +dderiv */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLdderiv_16); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdderiv_16() {      /* 101 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLdderiv_17); goto lRet;}
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLdderiv_19);
        {aRet = (GYdderiv[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdderiv_19() {      /* call_dderiv_18 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rSp->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        rSp->Val = rA1;
        {aRet = ((Ptr) GLdderiv_16); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLdderiv_17() {      /* 102 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        rA2 = rA1;
        rA1 = GYdderiv[10];
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLdderiv_20() {      /* -dderiv */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLdderiv_21); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdderiv_21() {      /* 101 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLdderiv_22); goto lRet;}
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLdderiv_24);
        {aRet = (GYdderiv[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdderiv_24() {      /* call_dderiv_23 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rSp->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        rSp->Val = rA1;
        {aRet = ((Ptr) GLdderiv_21); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLdderiv_22() {      /* 102 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        rA2 = rA1;
        rA1 = GYdderiv[11];
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLdderiv_25() {      /* *dderiv */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYdderiv; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[12];
        rA2 = rA1;
        rA1 = rLit[12];
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rNil;
        {aRet = ((Ptr) GLdderiv_26); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLdderiv_26() {      /* 102 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLdderiv_27); goto lRet;}
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLdderiv_29);
        {aRet = ((Ptr) GLdderiv_12); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdderiv_29() {      /* call_dderiv_28 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rSp->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        rSp->Val = rA1;
        {aRet = ((Ptr) GLdderiv_26); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLdderiv_27() {      /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYdderiv; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        rA2 = rA1;
        rA1 = rLit[10];
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLdderiv_30() {      /* /dderiv */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdderiv; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[11];
        (--rSp)->Val = ((Ptr) GLdderiv_31);
        (--rSp)->Val = rLit[7];
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLdderiv_33);
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdderiv_33() {      /* call_dderiv_32 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        rA4 = (rSp + 5)->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 3;
        {aRet = (GYdderiv[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdderiv_31() {      /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4;
        rLit = GYdderiv; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLdderiv_34);
        (--rSp)->Val = rLit[7];
        rA4 = (rSp + 5)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLdderiv_35);
        (--rSp)->Val = rLit[12];
        rA3 = (rA4 + 1)->Val;
        (--rSp)->Val = rA3->Val;
        rA3 = (rA4 + 1)->Val;
        (--rSp)->Val = rA3->Val;
        rA1 = (rA4 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLdderiv_37);
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLdderiv_37() {      /* call_dderiv_36 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYdderiv[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdderiv_35() {      /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdderiv[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdderiv_34() {      /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdderiv[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdderiv_38() {      /* dderiv */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdderiv; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if ((long) rA1 >= (long) GIbcons)       goto l_101;
        if (rA1 != rLit[13])    goto l_103;
        rA1 = (Ptr) 1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA1 = (Ptr) 0;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        GIa2 = rLit[8];
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLdderiv_40);
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdderiv_40() {      /* call_dderiv_39 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYdderiv; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 == GInil)       goto l_105;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
l_105:
        rA1 = rLit[16];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLdderiv_6() {       /* dderiv-run */
   {    register Ptr aRet;
        GIa4 = (Ptr) 5000;
        {aRet = ((Ptr) GLdderiv_41); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdderiv_42() {      /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdderiv; rSp = GIsp;
        (--rSp)->Val = GIa4;
        GIa1 = rLit[17];
        (--rSp)->Val = ((Ptr) GLdderiv_44);
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdderiv_44() {      /* call_dderiv_43 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        {aRet = ((Ptr) GLdderiv_41); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdderiv_41() {      /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLdderiv_42); goto lRet;}}
        GIa1 = GYdderiv[6];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GDdderiv_45() {      /* trace check-dderiv */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdderiv,18,19,20);
  lRet:  return (aRet);}}

static Ptr GDdderiv_46() {      /* trace meter-dderiv */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdderiv,21,19,20);
  lRet:  return (aRet);}}

static Ptr GDdderiv_47() {      /* trace test-dderiv */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdderiv,22,19,23);
  lRet:  return (aRet);}}

static Ptr GDdderiv_48() {      /* trace +dderiv */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdderiv,24,19,23);
  lRet:  return (aRet);}}

static Ptr GDdderiv_49() {      /* trace -dderiv */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdderiv,25,19,23);
  lRet:  return (aRet);}}

static Ptr GDdderiv_50() {      /* trace *dderiv */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdderiv,26,19,23);
  lRet:  return (aRet);}}

static Ptr GDdderiv_51() {      /* trace /dderiv */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdderiv,27,19,23);
  lRet:  return (aRet);}}

static Ptr GDdderiv_52() {      /* trace dderiv */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdderiv,8,19,23);
  lRet:  return (aRet);}}

