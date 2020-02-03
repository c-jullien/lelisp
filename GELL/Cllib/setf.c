/* GELL 15.26: source file for the module: "setf" */
/*             translation done:           "Wed June 16 93 18:01:07 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "setf.h" 

static Ptr GLsetf_1() { /* system-put */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4;
        rLit = GYsetf; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA1;
        rA3 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        rA3 = rA3->Val;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[0];
        (--rSp)->Val = ((Ptr) GLsetf_2);
        (--rSp)->Val = rLit[1];
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_2() { /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_3() { /* push-setf-method */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsetf; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[3];
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[4];
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_4() { /* push-setf-inverse */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsetf; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[3];
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_5() { /* push-setf-expander */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsetf; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[3];
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[6];
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_6() { /* define-setf-method */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsetf; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA1;
        GIa3 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = ((Ptr) GXpopj3);
        (--rSp)->Val = rLit[0];
        (--rSp)->Val = ((Ptr) GLsetf_7);
        (--rSp)->Val = rLit[7];
        (--rSp)->Val = ((Ptr) GLsetf_8);
        (--rSp)->Val = rLit[8];
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_8() { /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYsetf; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLsetf_9);
        (--rSp)->Val = rLit[9];
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_9() { /* 104 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_7() { /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYsetf; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLsetf_10);
        (--rSp)->Val = rLit[8];
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_10() {        /* 105 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_11() {        /* get-setf-method */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if ((rA1 < GIbsymb) || (rA1 >= GIbcons))        {aRet = ((Ptr) GLsetf_12); goto lRet;}
        (--rSp)->Val = ((Ptr) GLsetf_14);
        {aRet = (GYsetf[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_14() {        /* call_setf_13 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = ((Ptr) GLsetf_15);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 1;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_15() {        /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYsetf; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLsetf_16);
        (--rSp)->Val = rLit[12];
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_16() {        /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 5;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_12() {        /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLsetf_18);
        {aRet = (GYsetf[13] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_18() {        /* call_setf_17 */
   {    register Ptr aRet, rSp, rA1, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        {aRet = ((Ptr) GLsetf_19); goto lRet;}
        rA4 = rSp->Val;
        if ((rA4->Val < GIbsymb) || (rA4->Val >= GIbcons))      {aRet = ((Ptr) GLsetf_19); goto lRet;}
        (--rSp)->Val = rNil;
        rA1 = (rSp + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLsetf_21);
        {aRet = ((Ptr) GLsetf_22); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_21() {        /* call_setf_20 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLsetf_23); goto lRet;}
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLsetf_25);
        {aRet = (GYsetf[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_25() {        /* call_setf_24 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = (GYsetf[15] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_23() {        /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYsetf; rSp = GIsp; rA1 = GIa1;
        rA1 = (rSp + 1)->Val;
        GIa2 = rLit[16];
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLsetf_27);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsetf_27() {        /* call_setf_26 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsetf; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rSp->Val = rA1;
        if (rA1 == GInil)       goto l_110;
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rA1;
        rA4 = (rSp + 3)->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
l_110:
        rA1 = (rSp + 1)->Val;
        GIa2 = rLit[19];
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLsetf_29);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_29() {        /* call_setf_28 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLsetf_30); goto lRet;}
        (--rSp)->Val = ((Ptr) GLsetf_32);
        {aRet = (GYsetf[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_32() {        /* call_setf_31 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa4 = (rSp + 2)->Val;
        (--rSp)->Val = (GIa4 + 1)->Val;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLsetf_33); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_33() {        /* 115 */
   {    register Ptr aRet, rSp, rA1, rA2, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLsetf_34); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        rA1 = GInil;
        goto l_nlist_setf_36;
l_nlist_setf_35:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_setf_36:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_setf_35;}
        (--rSp)->Val = ((Ptr) GLsetf_38);
        {aRet = (GYsetf[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_38() {        /* call_setf_37 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rSp->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLsetf_33); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLsetf_34() {        /* 116 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rA1;
        rA4 = (rSp + 5)->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLsetf_39);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 1;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_39() {        /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLsetf_40);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLsetf_41);
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_41() {        /* 120 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYsetf[20] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_40() {        /* 119 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rA1;
        rA1 = (rSp + 6)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        (--rSp)->Val = rA1;
        rA1 = (rSp + 8)->Val;
        rA2 = (rSp + 5)->Val;
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 5;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLsetf_30() {        /* 113 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYsetf; rSp = GIsp; rA1 = GIa1;
        rA1 = (rSp + 1)->Val;
        GIa2 = rLit[21];
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLsetf_43);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsetf_43() {        /* call_setf_42 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        rSp->Val = rA1;
        if (rA1 == rNil)        {aRet = ((Ptr) GLsetf_44); goto lRet;}
        GIa4 = (rSp + 1)->Val;
        (--rSp)->Val = (GIa4 + 1)->Val;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rNil;
        {aRet = ((Ptr) GLsetf_45); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_45() {        /* 123 */
   {    register Ptr aRet, rSp, rA1, rA2, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLsetf_46); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        rA1 = GInil;
        goto l_nlist_setf_48;
l_nlist_setf_47:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_setf_48:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_setf_47;}
        (--rSp)->Val = ((Ptr) GLsetf_50);
        {aRet = (GYsetf[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_50() {        /* call_setf_49 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rSp->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLsetf_45); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLsetf_46() {        /* 124 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLsetf_52);
        {aRet = (GYsetf[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsetf_52() {        /* call_setf_51 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GXpopj5);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLsetf_53);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 1;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_53() {        /* 126 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLsetf_54);
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa2 = (rSp + 7)->Val;
        rA1 = (rSp + 6)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (GYsetf[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsetf_54() {        /* 127 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = (rSp + 9)->Val;
        GIa2 = (rSp + 6)->Val;
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 5;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsetf_44() {        /* 121 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYsetf; rSp = GIsp;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[22];
        GIa1 = rLit[15];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_19() {        /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYsetf; rSp = GIsp;
        GIa3 = rSp->Val;
        GIa2 = rLit[23];
        GIa1 = rLit[15];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_55() {        /* setf */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsetf; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rA1 + 1)->Val;
        if ((rA4 + 1)->Val == GInil)    {aRet = ((Ptr) GLsetf_56); goto lRet;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLsetf_57);
        (--rSp)->Val = rLit[0];
        rA4 = (Ptr) 1;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_57() {        /* 103 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLsetf_58); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_58() {        /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4, rNil;
        rLit = GYsetf; rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if ((rSp + 1)->Val == rNil)     {aRet = ((Ptr) GLsetf_59); goto lRet;}
        rA4 = (rSp + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        rA3 = (rSp + 2)->Val;
        if ((rA3 + 1)->Val == rNil)     {aRet = ((Ptr) GLsetf_60); goto lRet;}
        (--rSp)->Val = ((Ptr) GLsetf_61);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLsetf_62);
        (--rSp)->Val = ((Ptr) GLsetf_63);
        (--rSp)->Val = rLit[24];
        (--rSp)->Val = rA3->Val;
        GIa2 = (rA3 + 1)->Val;
        (--rSp)->Val = GIa2->Val;
        rA4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_63() {        /* 110 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_62() {        /* 109 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYsetf[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_61() {        /* 108 */
   {    register Ptr aRet;
        GIa3 = GIa1;
        {aRet = ((Ptr) GLsetf_64); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_60() {        /* 106 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYsetf; rA1 = GIa1;
        GIa3 = (GIsp + 3)->Val;
        GIa2 = rLit[26];
        rA1 = rLit[24];
        GIa1 = rA1; rA1 = llrt_call_error ();
        GIa3 = rA1;
        {aRet = ((Ptr) GLsetf_64); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLsetf_64() {        /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 1)->Val = GIa3;
        GIa4 = (rSp++)->Val;
        (rSp + 1)->Val = GIa4;
        {aRet = ((Ptr) GLsetf_58); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_59() {        /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_56() {        /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYsetf; rSp = GIsp; rA1 = GIa1;
        if ((rA1 + 1)->Val == GInil)    {aRet = ((Ptr) GLsetf_65); goto lRet;}
        GIa3 = (rA1 + 1)->Val;
        (--rSp)->Val = rA1->Val;
        (--rSp)->Val = GIa3->Val;
        if (((rSp + 1)->Val < GIbsymb) || ((rSp + 1)->Val >= GIbcons))  goto l_113;
        (--rSp)->Val = ((Ptr) GXpopj3);
        (--rSp)->Val = rLit[12];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
l_113:
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLsetf_67);
        {aRet = (rLit[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsetf_67() {        /* call_setf_66 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYsetf; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        {aRet = ((Ptr) GLsetf_68); goto lRet;}
        rA4 = (rSp + 1)->Val;
        if ((rA4->Val < GIbsymb) || (rA4->Val >= GIbcons))      {aRet = ((Ptr) GLsetf_68); goto lRet;}
        (--rSp)->Val = rNil;
        rA1 = (rSp + 2)->Val;
        GIa2 = rLit[19];
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLsetf_70);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_70() {        /* call_setf_69 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rSp->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLsetf_71); goto lRet;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLsetf_72);
        rA4 = (rSp + 4)->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLsetf_73);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 1;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_73() {        /* 121 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYsetf[20] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_72() {        /* 120 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rA1;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 4;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsetf_71() {        /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLsetf_75);
        {aRet = (GYsetf[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_75() {        /* call_setf_74 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA3 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = rA4;
        rA2 = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        (--rSp)->Val = rA3;
        (--rSp)->Val = (rA2 + 1)->Val;
        rA2 = rA2->Val;
        (--rSp)->Val = rA2;
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = rA4->Val;
        if (rA1 == rNil)        {aRet = ((Ptr) GLsetf_76); goto lRet;}
        (--rSp)->Val = ((Ptr) GXpopj8);
        (--rSp)->Val = GYsetf[27];
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = rNil;
        {aRet = ((Ptr) GLsetf_77); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_77() {        /* 125 */
   {    register Ptr aRet, rSp, rA4, rBcons;
        rSp = GIsp; rA4 = GIa4; rBcons = GIbcons;
        if ((long) (rSp + 1)->Val < (long) rBcons)      {aRet = ((Ptr) GLsetf_78); goto lRet;}
        if ((long) (rSp + 2)->Val < (long) rBcons)      {aRet = ((Ptr) GLsetf_78); goto lRet;}
        (--rSp)->Val = ((Ptr) GLsetf_79);
        rA4 = (rSp + 2)->Val;
        (rSp + 2)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (rSp + 4)->Val;
        (rSp + 4)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_79() {        /* 127 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rSp->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLsetf_77); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLsetf_78() {        /* 126 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYsetf; rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 3;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLsetf_80);
        (--rSp)->Val = rLit[28];
        (--rSp)->Val = ((Ptr) GLsetf_81);
        (--rSp)->Val = ((Ptr) GLsetf_82);
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLsetf_83);
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsetf_83() {        /* 131 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYsetf[20] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_82() {        /* 130 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_81() {        /* 129 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_80() {        /* 128 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_76() {        /* 122 */
   {    register Ptr aRet, *rLit, rSp, rA3;
        rLit = GYsetf; rSp = GIsp; rA3 = GIa3;
        if (rA3 == GInil)       {aRet = ((Ptr) GLsetf_84); goto lRet;}
        (--rSp)->Val = ((Ptr) GXpopj8);
        (--rSp)->Val = rLit[28];
        (--rSp)->Val = ((Ptr) GLsetf_85);
        (--rSp)->Val = ((Ptr) GLsetf_86);
        (--rSp)->Val = rA3;
        (--rSp)->Val = ((Ptr) GLsetf_87);
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_87() {        /* 137 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYsetf[20] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_86() {        /* 136 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_85() {        /* 135 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_84() {        /* 132 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GIa2;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_68() {        /* 116 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYsetf; rSp = GIsp;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[23];
        GIa1 = rLit[24];
        rSp += (Fix) 3;
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_65() {        /* 111 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYsetf; rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[26];
        rA1 = rLit[24];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsetf_88() {        /* defsetf */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsetf; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA4;
        if ((rA1 >= GIbsymb) && (rA1 < GIbcons))        goto l_101;
        GIa3 = rA1;
        GIa2 = rLit[29];
        rA1 = rLit[30];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rA4->Val;
        (--rSp)->Val = ((Ptr) GLsetf_90);
        {aRet = (rLit[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_90() {        /* call_setf_89 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLsetf_91); goto lRet;}
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLsetf_93);
        {aRet = (GYsetf[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsetf_93() {        /* call_setf_92 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3;
        rLit = GYsetf; rSp = GIsp; rA1 = GIa1; rA3 = GIa3;
        if (rA1 != GInil)       goto l_106;
        rA3 = rSp->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        GIa2 = rLit[23];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[31];
        (--rSp)->Val = ((Ptr) GLsetf_94);
        (--rSp)->Val = rLit[8];
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; return (aRet);}}

static Ptr GLsetf_94() {        /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYsetf; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLsetf_95);
        (--rSp)->Val = rLit[9];
        (--rSp)->Val = ((Ptr) GLsetf_96);
        rA4 = (rSp + 6)->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (rSp + 7)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_96() {        /* 110 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        rA4 = (rSp + 6)->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        rA4 = (Ptr) 3;
        {aRet = (GYsetf[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_95() {        /* 109 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_91() {        /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYsetf; rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        if ((rA4->Val < GIbsymb) || (rA4->Val >= GIbcons))      {aRet = ((Ptr) GLsetf_97); goto lRet;}
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[32];
        (--rSp)->Val = ((Ptr) GLsetf_98);
        (--rSp)->Val = rLit[8];
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_98() {        /* 114 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYsetf; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLsetf_99);
        (--rSp)->Val = rLit[8];
        rA4 = (rSp + 5)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_99() {        /* 115 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_97() {        /* 111 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYsetf; rSp = GIsp;
        GIa3 = GIa4->Val;
        GIa2 = rLit[33];
        GIa1 = rLit[30];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_100() {       /* define-modify-macro */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4;
        rLit = GYsetf; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA3 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = rA4;
        rA3 = rA3->Val;
        (--rSp)->Val = rA3;
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[34];
        (--rSp)->Val = rA1;
        GIa2 = rA4;
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLsetf_101);
        (--rSp)->Val = rLit[36];
        (--rSp)->Val = ((Ptr) GLsetf_102);
        (--rSp)->Val = rLit[37];
        (--rSp)->Val = ((Ptr) GLsetf_103);
        (--rSp)->Val = rLit[2];
        (--rSp)->Val = rLit[38];
        (--rSp)->Val = rLit[35];
        (--rSp)->Val = ((Ptr) GLsetf_104);
        (--rSp)->Val = rLit[39];
        (--rSp)->Val = ((Ptr) GLsetf_105);
        (--rSp)->Val = rLit[8];
        {register Ptr aux;
                aux = (rSp + 16)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_105() {       /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYsetf; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[35];
        {register Ptr aux;
                aux = (rSp + 17)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_104() {       /* 105 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_103() {       /* 104 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_102() {       /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYsetf; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLsetf_106);
        (--rSp)->Val = rLit[40];
        (--rSp)->Val = ((Ptr) GLsetf_107);
        (--rSp)->Val = ((Ptr) GLsetf_109);
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_109() {       /* call_setf_108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLsetf_111);
        {aRet = (GYsetf[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_111() {       /* call_setf_110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLsetf_113);
        {aRet = (GYsetf[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_113() {       /* call_setf_112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLsetf_115);
        {aRet = (GYsetf[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_115() {       /* call_setf_114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLsetf_117);
        {aRet = (GYsetf[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_117() {       /* call_setf_116 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 5;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_107() {       /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYsetf; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLsetf_118);
        (--rSp)->Val = rLit[28];
        (--rSp)->Val = ((Ptr) GLsetf_119);
        GIa2 = rLit[41];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsetf_119() {       /* 110 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYsetf; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLsetf_120);
        (--rSp)->Val = rLit[2];
        (--rSp)->Val = rLit[42];
        (--rSp)->Val = ((Ptr) GLsetf_121);
        (--rSp)->Val = rLit[43];
        (--rSp)->Val = rLit[44];
        rA4 = (rSp + 9)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 4;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_121() {       /* 112 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYsetf; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLsetf_122);
        (--rSp)->Val = rLit[2];
        (--rSp)->Val = rLit[45];
        (--rSp)->Val = ((Ptr) GLsetf_123);
        (--rSp)->Val = rLit[2];
        (--rSp)->Val = ((Ptr) GLsetf_124);
        (--rSp)->Val = rLit[2];
        (--rSp)->Val = ((Ptr) GLsetf_125);
        (--rSp)->Val = rLit[46];
        rA4 = (rSp + 16)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_125() {       /* 116 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYsetf; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLsetf_126);
        (--rSp)->Val = rLit[39];
        (--rSp)->Val = ((Ptr) GLsetf_127);
        (--rSp)->Val = rLit[8];
        {register Ptr aux;
                aux = (rSp + 29)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_127() {       /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = (rSp + 18)->Val;
        GIa1 = (Ptr) 4;
        (--rSp)->Val = ((Ptr) GLsetf_129);
        {aRet = (GYsetf[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_129() {       /* call_setf_128 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 30)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (GYsetf[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_126() {       /* 117 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_124() {       /* 115 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_123() {       /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = (rSp + 11)->Val;
        GIa1 = (Ptr) 3;
        (--rSp)->Val = ((Ptr) GLsetf_131);
        {aRet = (GYsetf[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_131() {       /* call_setf_130 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_122() {       /* 113 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_120() {       /* 111 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_118() {       /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_106() {       /* 107 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYsetf; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[48];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_101() {       /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYsetf[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsetf_132() {       /* #:setf:make-call */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYsetf; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 2)     goto l_101;
        rA1 = rLit[39];
        rA2 = (Ptr) 2;
        {aRet = (rLit[49] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 2));
        rA1 = GInil;
        goto l_nlist_setf_134;
l_nlist_setf_133:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_setf_134:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_setf_133;}
        (--rSp)->Val = ((Ptr) GXpopj2);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 3;
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsetf_22() {        /* macro-function */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLsetf_136);
        {aRet = (GYsetf[50] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_136() {       /* call_setf_135 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLsetf_138);
        {aRet = (GYsetf[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsetf_138() {       /* call_setf_137 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYsetf; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        GIa2 = rLit[52];
        rA1 = llrt_call_memq (rA1, GIa2, GIbcons, rNil);
        if (rA1 == rNil)        {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLsetf_140);
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsetf_140() {       /* call_setf_139 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rA1;
        rA1 = GYsetf[9];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GDsetf_141() {       /* trace system-put */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsetf,3,54,55);
  lRet:  return (aRet);}}

static Ptr GDsetf_142() {       /* trace push-setf-method */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsetf,7,54,55);
  lRet:  return (aRet);}}

static Ptr GDsetf_143() {       /* trace push-setf-inverse */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsetf,32,54,55);
  lRet:  return (aRet);}}

static Ptr GDsetf_144() {       /* trace push-setf-expander */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsetf,31,54,55);
  lRet:  return (aRet);}}

static Ptr GDsetf_145() {       /* trace define-setf-method */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsetf,56,54,55);
  lRet:  return (aRet);}}

static Ptr GDsetf_146() {       /* trace get-setf-method */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsetf,15,54,55);
  lRet:  return (aRet);}}

static Ptr GDsetf_147() {       /* trace setf */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsetf,24,54,55);
  lRet:  return (aRet);}}

static Ptr GDsetf_148() {       /* trace defsetf */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsetf,30,54,55);
  lRet:  return (aRet);}}

static Ptr GDsetf_149() {       /* trace define-modify-macro */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsetf,57,54,55);
  lRet:  return (aRet);}}

static Ptr GDsetf_150() {       /* trace #:setf:make-call */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsetf,39,54,58);
  lRet:  return (aRet);}}

