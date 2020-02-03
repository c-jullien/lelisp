/* GELL 15.26: source file for the module: "destru" */
/*             translation done:           "Wed June 16 93 18:18:23 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "destru.h" 

static Ptr GLdestru_1() {       /* check-destru */
   {    register Ptr aRet, *rLit;
        rLit = GYdestru;
        GIa2 = GInil;
        GIa1 = rLit[0];
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdestru_2() {       /* meter-destru */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdestru; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLdestru_3);
        (--rSp)->Val = rLit[2];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdestru_3() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (Ptr) 50;
        GIa1 = (Ptr) 600;
        (--rSp)->Val = ((Ptr) GLdestru_5);
        {aRet = ((Ptr) GLdestru_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdestru_5() {       /* call_destru_4 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdestru; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[4];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdestru_7() {       /* test-destru */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if (rA1 != (Ptr) 1)     {aRet = ((Ptr) GLdestru_8); goto lRet;}
        GIa2 = (Ptr) 50;
        rA1 = (Ptr) 600;
        {aRet = ((Ptr) GLdestru_6); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdestru_9() {       /* 103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        GIa2 = (Ptr) 50;
        rA1 = (Ptr) 600;
        (--rSp)->Val = ((Ptr) GLdestru_11);
        {aRet = ((Ptr) GLdestru_6); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdestru_11() {      /* call_destru_10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLdestru_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdestru_8() {       /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLdestru_9); goto lRet;}}
        rA1 = GYdestru[5];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdestru_6() {       /* destructive */
   {    register Ptr aRet, rSp, rA1, rA2, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = (Ptr) 10;
        (--rSp)->Val = rNil;
l_101:
        if ((rSp + 1)->Val == (Ptr) 0)  goto l_102;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (--rSp)->Val = rA4;
        rA2 = (rSp + 1)->Val;
        rA1 = rNil;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        (rSp + 1)->Val = rA1;
        rA4 = (rSp++)->Val;
        (rSp + 1)->Val = rA4;
        goto l_101;
l_102:
        rA4 = rSp->Val;
        rSp += (Fix) 2;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLdestru_12); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLdestru_12() {      /* 103 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (rSp->Val == (Ptr) 0)        {aRet = ((Ptr) GLdestru_13); goto lRet;}
        rA4 = (rSp + 1)->Val;
        if (rA4->Val != GInil)  {aRet = ((Ptr) GLdestru_14); goto lRet;}
        (--rSp)->Val = rA4;
        {aRet = ((Ptr) GLdestru_15); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdestru_15() {      /* 107 */
   {    register Ptr aRet, rSp, rA1, rA2, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if (rSp->Val == rNil)   {aRet = ((Ptr) GLdestru_16); goto lRet;}
        rA4 = rSp->Val;
        if (rA4->Val != rNil)   goto l_109;
        (--rSp)->Val = rA4;
        rA2 = rNil;
        rA1 = rNil;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        rA4 = (rSp++)->Val;
        rA4->Val = rA1;
l_109:
        (--rSp)->Val = ((Ptr) GLdestru_17);
        rA4 = (rSp + 1)->Val;
        (--rSp)->Val = rA4->Val;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rNil;
l_111:
        if ((rSp + 1)->Val == (Ptr) 0)  goto l_112;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (--rSp)->Val = rA4;
        rA2 = (rSp + 1)->Val;
        rA1 = rNil;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        (rSp + 1)->Val = rA1;
        rA4 = (rSp++)->Val;
        (rSp + 1)->Val = rA4;
        goto l_111;
l_112:
        rA4 = rSp->Val;
        rSp += (Fix) 2;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (GYdestru[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLdestru_17() {      /* 110 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        {aRet = ((Ptr) GLdestru_15); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLdestru_16() {      /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLdestru_18); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdestru_14() {      /* 105 */
   {    register Ptr aRet, rSp, rA1, rA3, rA4, rNil, rBcons;
        rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4;
l_113:
        if ((rSp + 1)->Val == rNil)     goto l_114;
        rA1 = (rSp + 1)->Val;
        rA1 = rA1->Val;
        rA1 = llrt_call_length (rA1, rBcons);
        rA1 = (Ptr) (UFix) ((UFix) (rA1) >> 1);
        rA4 = (rSp + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rA1;
l_115:
        if (rSp->Val == (Ptr) 0)        goto l_116;
        rA4 = (rSp + 1)->Val;
        rA4->Val = (rSp + 4)->Val;
        rA3 = rSp->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) 1));
        (rSp + 1)->Val = (rA4 + 1)->Val;
        rSp->Val = rA3;
        goto l_115;
l_116:
        rA4 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        (--rSp)->Val = rA4;
        rA1 = (rSp + 1)->Val;
        rA1 = rA1->Val;
        rA1 = llrt_call_length (rA1, rBcons);
        rA1 = (Ptr) (UFix) ((UFix) (rA1) >> 1);
        if (rA1 != (Ptr) 0)     goto l_117;
        rA4 = (rSp + 1)->Val;
        rA4->Val = rNil;
        rA3 = rA4->Val;
        goto l_118;
l_117:
        rA4 = (rSp + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rA1;
l_119:
        if (rSp->Val == (Ptr) 1)        goto l_120;
        rA4 = (rSp + 1)->Val;
        rA4->Val = (rSp + 5)->Val;
        rA3 = rSp->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) 1));
        (rSp + 1)->Val = (rA4 + 1)->Val;
        rSp->Val = rA3;
        goto l_119;
l_120:
        rA3 = (rSp + 1)->Val;
        (--rSp)->Val = (rA3 + 1)->Val;
        (rA3 + 1)->Val = rNil;
        rA3 = (rSp++)->Val;
        rSp += (Fix) 2;
l_118:
        rA4 = (rSp++)->Val;
        (rA4 + 1)->Val = rA3;
        rA4 = rSp->Val;
        rA3 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA3 + 1)->Val;
        rSp->Val = (rA4 + 1)->Val;
        goto l_113;
l_114:
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLdestru_18); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLdestru_18() {      /* 106 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rSp->Val = rA4;
        {aRet = ((Ptr) GLdestru_12); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLdestru_13() {      /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDdestru_19() {      /* trace check-destru */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdestru,7,8,9);
  lRet:  return (aRet);}}

static Ptr GDdestru_20() {      /* trace meter-destru */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdestru,10,8,9);
  lRet:  return (aRet);}}

static Ptr GDdestru_21() {      /* trace test-destru */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdestru,11,8,12);
  lRet:  return (aRet);}}

