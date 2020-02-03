/* GELL 15.26: source file for the module: "virbit" */
/*             translation done:           "Tue Aug  24 93 10:48:50 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "virbit.h" 

static Ptr GLvirbit_1() {       /* #:bitmap:create-bitmap */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirbit_3);
        {aRet = (GYvirbit[0] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_3() {       /* call_virbit_2 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA1;
        (rA1->Val + 2 + (Fix) 0)->Val = (rSp + 3)->Val;
        (rA1->Val + 2 + (Fix) 1)->Val = (rSp + 2)->Val;
        (rA1->Val + 2 + (Fix) 3)->Val = (rSp + 4)->Val;
        if ((rSp + 4)->Val == rNil)     {aRet = ((Ptr) GLvirbit_4); goto lRet;}
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirbit_4); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirbit_5);
        (--rSp)->Val = rLit[1];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_5() {       /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = ((rSp + 4)->Val->Val + 2 + (Fix) 15)->Val;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_7);
        {aRet = (GYvirbit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_7() {       /* call_virbit_6 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 4)->Val->Val + 2 + (Fix) 15)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirbit_8);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYvirbit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_4() {       /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        (GIa1->Val + 2 + (Fix) 2)->Val = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_8);
        (--rSp)->Val = rLit[5];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_8() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_9() {       /* create-bitmap */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        if ((Fix) (rA4) >= (Fix) 2)     goto l_101;
        rA1 = rLit[1];
        rA2 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 2));
        rA1 = rNil;
        goto l_nlist_virbit_11;
l_nlist_virbit_10:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virbit_11:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virbit_10;}
        (--rSp)->Val = rA1;
        if ((rSp + 2)->Val < rBfloat)   goto l_103;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[8];
        rA1 = rLit[1];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 1)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[8];
        rA1 = rLit[1];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        rA4 = rSp->Val;
        if ((rA4 + 1)->Val == rNil)     goto l_107;
        rA3 = (rA4 + 1)->Val;
        rA2 = rLit[9];
        rA1 = rLit[1];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if (rSp->Val == rNil)   goto l_108;
        rA4 = rSp->Val;
        rA4 = rA4->Val;
        {aRet = ((Ptr) GLvirbit_12); goto lRet;}
l_108:
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 7));
        rA4 = (Ptr) (UFix) ((UFix) (rA4) >> 3);
        rA2 = (Ptr) 0;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLvirbit_14);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_14() {      /* call_virbit_13 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_16);
        {aRet = (GYvirbit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_16() {      /* call_virbit_15 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLvirbit_12); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_12() {      /* 109 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if ((rA4 >= GIbvect) && (rA4 < GIbstrg))        goto l_111;
        GIa3 = rA4;
        GIa2 = rLit[12];
        GIa1 = rLit[1];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
l_111:
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rLit[13]->Val;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLvirbit_1); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_17() {      /* bitmap-prologue */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rA1;
        rA2 = rLit[14];
        rA1 = rLit[15];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_102:
        rA2 = rLit[16];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_19);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLvirbit_19() {      /* call_virbit_18 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_105;
        GIa4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (GIa4 != rNil)       goto l_104;
l_105:
        GIa3 = rSp->Val;
        GIa2 = rLit[18];
        rA1 = rLit[15];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_104:
        GIa2 = rLit[19];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_21);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirbit_21() {      /* call_virbit_20 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_107;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[20];
        rA1 = rLit[15];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_107:
        rA1 = ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_23);
        {aRet = (rLit[21] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirbit_23() {      /* call_virbit_22 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != rLit[22])    goto l_109;
        (--rSp)->Val = ((Ptr) GXpopj2);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLvirbit_1); goto lRet;}
l_109:
        if (rA1 != rLit[23])    goto l_111;
        (--rSp)->Val = ((Ptr) GXpopj2);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLvirbit_24); goto lRet;}
l_111:
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[24];
        rA1 = rLit[15];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_25() {      /* window-bitmap */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[25];
        (--rSp)->Val = ((Ptr) GLvirbit_27);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_27() {      /* call_virbit_26 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[26];
        rA1 = rLit[27];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = (rSp->Val->Val + 2 + (Fix) 7)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 10)->Val;
        if (rA1 != rNil)        {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirbit_29);
        {aRet = (rLit[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirbit_29() {      /* call_virbit_28 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 12)->Val;
        (rA1->Val + 2 + (Fix) 3)->Val = rA4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val;
        (rA1->Val + 2 + (Fix) 0)->Val = rA4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
        (rA1->Val + 2 + (Fix) 1)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLvirbit_30);
        (--rSp)->Val = rLit[28];
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 4;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_30() {      /* 104 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rSp->Val = rA1;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 12)->Val;
        (rA1->Val + 2 + (Fix) 3)->Val = rA4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val;
        (rA1->Val + 2 + (Fix) 0)->Val = rA4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
        (rA1->Val + 2 + (Fix) 1)->Val = rA4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 7)->Val;
        (rA4->Val + 2 + (Fix) 10)->Val = rA1;
        rSp += (Fix) 1;
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_31() {      /* kill-bitmap */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[19];
        (--rSp)->Val = ((Ptr) GLvirbit_33);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_33() {      /* call_virbit_32 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[20];
        rA1 = rLit[29];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        (--rSp)->Val = ((Ptr) GLvirbit_34);
        (--rSp)->Val = rLit[29];
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_34() {      /* 103 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        GIa4 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = GIa4;
        rA2 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 15)->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_36);
        {aRet = (GYvirbit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLvirbit_36() {      /* call_virbit_35 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 15)->Val = GIa1;
        (rSp->Val->Val + 2 + (Fix) 2)->Val = rNil;
        (rSp->Val->Val + 2 + (Fix) 3)->Val = rNil;
        GIa1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_37() {      /* bmref */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[19];
        (--rSp)->Val = ((Ptr) GLvirbit_39);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_39() {      /* call_virbit_38 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        if (rA1 != rNil)        goto l_102;
        rA3 = rSp->Val;
        rA2 = rLit[20];
        rA1 = rLit[31];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val < rBfloat)   goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[8];
        rA1 = rLit[31];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        if ((rSp + 2)->Val < rBfloat)   goto l_106;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[8];
        rA1 = rLit[31];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        if ((Fix) ((rSp + 1)->Val) < (Fix) 0)   goto l_109;
        rA4 = (rSp->Val->Val + 2 + (Fix) 0)->Val;
        if ((Fix) ((rSp + 1)->Val) < (Fix) (rA4))       goto l_108;
l_109:
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[32];
        rA1 = rLit[31];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_108:
        if ((Fix) ((rSp + 2)->Val) < (Fix) 0)   goto l_112;
        rA4 = (rSp->Val->Val + 2 + (Fix) 1)->Val;
        if ((Fix) ((rSp + 2)->Val) < (Fix) (rA4))       goto l_111;
l_112:
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[32];
        rA1 = rLit[31];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        rA4 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        if (rA4 != rNil)        goto l_114;
        rA3 = rA4;
        rA2 = rLit[14];
        rA1 = rLit[31];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_114:
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rLit[31];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_40() {      /* bmset */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = rLit[33];
        GIa2 = (Ptr) 4;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
l_101:
        GIa2 = rLit[19];
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_42);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_42() {      /* call_virbit_41 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        if (rA1 != rNil)        goto l_103;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[20];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 2)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[8];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 1)->Val < rBfloat)   goto l_107;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[8];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if (rSp->Val < rBfloat) goto l_109;
        rA3 = rSp->Val;
        rA2 = rLit[8];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        if ((Fix) ((rSp + 2)->Val) < (Fix) 0)   goto l_112;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 0)->Val;
        if ((Fix) ((rSp + 2)->Val) < (Fix) (rA4))       goto l_111;
l_112:
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[32];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        if ((Fix) ((rSp + 1)->Val) < (Fix) 0)   goto l_115;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 1)->Val;
        if ((Fix) ((rSp + 1)->Val) < (Fix) (rA4))       goto l_114;
l_115:
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[32];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_114:
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        if (rA4 != rNil)        goto l_117;
        rA3 = rA4;
        rA2 = rLit[14];
        rA1 = rLit[31];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_117:
        (--rSp)->Val = ((Ptr) GXpopj5);
        (--rSp)->Val = rLit[33];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 6;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_43() {      /* byteref */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[19];
        (--rSp)->Val = ((Ptr) GLvirbit_45);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_45() {      /* call_virbit_44 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        if (rA1 != rNil)        goto l_102;
        rA3 = rSp->Val;
        rA2 = rLit[20];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val < rBfloat)   goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[8];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        if ((rSp + 2)->Val < rBfloat)   goto l_106;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[8];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        if ((Fix) ((rSp + 1)->Val) < (Fix) 0)   goto l_109;
        rA4 = (rSp->Val->Val + 2 + (Fix) 0)->Val;
        if ((Fix) ((rSp + 1)->Val) < (Fix) (rA4))       goto l_108;
l_109:
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[32];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_108:
        if ((Fix) ((rSp + 2)->Val) < (Fix) 0)   goto l_112;
        rA4 = (rSp->Val->Val + 2 + (Fix) 1)->Val;
        if ((Fix) ((rSp + 2)->Val) < (Fix) (rA4))       goto l_111;
l_112:
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[32];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        rA4 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        if (rA4 != rNil)        goto l_114;
        rA3 = rA4;
        rA2 = rLit[14];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_114:
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rLit[34];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_46() {      /* byteset */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = rLit[35];
        GIa2 = (Ptr) 4;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
l_101:
        GIa2 = rLit[19];
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_48);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_48() {      /* call_virbit_47 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        if (rA1 != rNil)        goto l_103;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[20];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 2)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[8];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 1)->Val < rBfloat)   goto l_107;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[8];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if (rSp->Val < rBfloat) goto l_109;
        rA3 = rSp->Val;
        rA2 = rLit[8];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        if ((Fix) ((rSp + 2)->Val) < (Fix) 0)   goto l_112;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 0)->Val;
        if ((Fix) ((rSp + 2)->Val) < (Fix) (rA4))       goto l_111;
l_112:
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[32];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        if ((Fix) ((rSp + 1)->Val) < (Fix) 0)   goto l_115;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 1)->Val;
        if ((Fix) ((rSp + 1)->Val) < (Fix) (rA4))       goto l_114;
l_115:
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[32];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_114:
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        if (rA4 != rNil)        goto l_117;
        rA3 = rA4;
        rA2 = rLit[14];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_117:
        (--rSp)->Val = ((Ptr) GXpopj5);
        (--rSp)->Val = rLit[35];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 6;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_49() {      /* bitblit */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        if (GIa4 == (Ptr) 8)    goto l_101;
        GIa1 = rLit[36];
        GIa2 = (Ptr) 8;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
l_101:
        GIa2 = rLit[19];
        GIa1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_51);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_51() {      /* call_virbit_50 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_103;
        GIa3 = (rSp + 7)->Val;
        GIa2 = rLit[20];
        rA1 = rLit[36];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_103:
        GIa2 = rLit[19];
        rA1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_53);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirbit_53() {      /* call_virbit_52 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rBfloat;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat;
        if (rA1 != GInil)       goto l_105;
        rA3 = (rSp + 6)->Val;
        rA2 = rLit[20];
        rA1 = rLit[36];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 5)->Val < rBfloat)   goto l_107;
        rA3 = (rSp + 5)->Val;
        rA2 = rLit[8];
        rA1 = rLit[36];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if ((rSp + 4)->Val < rBfloat)   goto l_109;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[8];
        rA1 = rLit[36];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        if ((rSp + 3)->Val < rBfloat)   goto l_111;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[8];
        rA1 = rLit[36];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        if ((rSp + 2)->Val < rBfloat)   goto l_113;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[8];
        rA1 = rLit[36];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_113:
        if ((rSp + 1)->Val < rBfloat)   goto l_115;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[8];
        rA1 = rLit[36];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_115:
        if (rSp->Val < rBfloat) goto l_117;
        rA3 = rSp->Val;
        rA2 = rLit[8];
        rA1 = rLit[36];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_117:
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 3)->Val;
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 3)->Val;
        if (rA4 == rA3) {aRet = ((Ptr) GLvirbit_54); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirbit_55);
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_55() {      /* 120 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYvirbit; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[38];
        rA1 = rLit[36];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirbit_54); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirbit_54() {      /* 119 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        if (rLit[39]->Val == GInil)     {aRet = ((Ptr) GLvirbit_56); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirbit_56);
        (--rSp)->Val = rLit[40];
        (--rSp)->Val = rLit[39]->Val;
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 10;
        {aRet = (rLit[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_56() {      /* 122 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj8);
        (--rSp)->Val = rLit[36];
        rA4 = ((rSp + 9)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 10;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_57() {      /* #:sharp:* */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        rA1 = rNil;
        goto l_nlist_virbit_59;
l_nlist_virbit_58:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virbit_59:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virbit_58;}
        rA2 = rNil;
        rA1 = rA1->Val;
        (--rSp)->Val = (rLit[42] + 2)->Val;
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_60() {      /* #:sharp:B */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirbit_62);
        {aRet = (GYvirbit[44] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_62() {      /* call_virbit_61 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        if (GIa1 == (Ptr) 67)   {aRet = ((Ptr) GLvirbit_63); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirbit_64);
        (--rSp)->Val = rLit[1];
        (--rSp)->Val = ((Ptr) GLvirbit_66);
        {aRet = (rLit[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_66() {      /* call_virbit_65 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYvirbit[46] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_64() {      /* 103 */
   {    register Ptr aRet;
         GIa1 = llrt_cons (GIa1, GInil);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_63() {      /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirbit_68);
        {aRet = (GYvirbit[47] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_68() {      /* call_virbit_67 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_69);
        (--rSp)->Val = rLit[48];
        (--rSp)->Val = ((Ptr) GLvirbit_71);
        {aRet = (rLit[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_71() {      /* call_virbit_70 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYvirbit[46] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_69() {      /* 104 */
   {    register Ptr aRet;
         GIa1 = llrt_cons (GIa1, GInil);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_72() {      /* #:bitmap:bits */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[4];
        rA2 = (Ptr) 1;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = rNil;
        goto l_nlist_virbit_74;
l_nlist_virbit_73:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virbit_74:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virbit_73;}
        if (rA1 != rNil)        {aRet = ((Ptr) GLvirbit_75); goto lRet;}
        rA4 = (rSp->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 7));
        rA3 = (Ptr) (UFix) ((UFix) (rA3) >> 3);
        (--rSp)->Val = rA3;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) 1));
        (--rSp)->Val = rA3;
        rA2 = (rSp + 2)->Val;
        rA2 = (Ptr) ((UFix) (rA2) & (UFix) 7);
        (--rSp)->Val = rA2;
        rA2 = rNil;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLvirbit_77);
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_77() {      /* call_virbit_76 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GInil;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (rSp + 7)->Val;
        {aRet = ((Ptr) GLvirbit_78); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_79() {      /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa4;
        GIa2 = (Ptr) 0;
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_81);
        {aRet = (GYvirbit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_81() {      /* call_virbit_80 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (rSp + 2)->Val = rA1;
        ((rSp + 3)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val = rA1;
        (rA1 + 1)->Val = rLit[49];
        (--rSp)->Val = ((Ptr) GLvirbit_82);
        (--rSp)->Val = rLit[50];
        rA4 = ((rSp + 11)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 5;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_82() {      /* 106 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((rSp + 4)->Val == (Ptr) 0)  {aRet = ((Ptr) GLvirbit_83); goto lRet;}
        GIa1 = (Ptr) ((unsigned char) *(((char *) ((rSp + 2)->Val->Val + 2)) + (Fix) ((rSp + 5)->Val)));
        rA4 = (Ptr) 8;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) ((rSp + 4)->Val)));
        GIa3 = (Ptr) 8;
        GIa2 = rA4;
        (--rSp)->Val = ((Ptr) GLvirbit_85);
        {aRet = (GYvirbit[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_85() {      /* call_virbit_84 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        *((char *) ((rSp + 2)->Val->Val + 2) + (Fix) ((rSp + 5)->Val)) = (char) GIa1;
        {aRet = ((Ptr) GLvirbit_83); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_83() {      /* 108 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 1)->Val = rA4;
        rA4 = (rSp++)->Val;
        {aRet = ((Ptr) GLvirbit_78); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_78() {      /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Fix aux;
                aux = (Fix) (GIa4) - 1;
                GIa4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLvirbit_79); goto lRet;}}
        GIa1 = (rSp + 2)->Val;
        rSp += (Fix) 9;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_75() {      /* 102 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = GIa1->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = ((rSp + 4)->Val->Val + 1)->Val;
        {aRet = ((Ptr) GLvirbit_86); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_87() {      /* 109 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        (rSp + 4)->Val = rA4;
        rA3 = (rSp + 2)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 1));
        (rSp + 2)->Val = rA3;
        if (rA4 >= GIbfloat)    {aRet = ((Ptr) GLvirbit_88); goto lRet;}
        {aRet = ((Ptr) GLvirbit_89); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_90() {      /* 113 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLvirbit_91);
        (--rSp)->Val = rLit[52];
        rA4 = ((rSp + 9)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_91() {      /* 115 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 2)->Val = rA4;
        rA4 = (rSp++)->Val;
        {aRet = ((Ptr) GLvirbit_89); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_89() {      /* 114 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLvirbit_90); goto lRet;}}
        rA4 = GYvirbit[53];
        {aRet = ((Ptr) GLvirbit_92); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_88() {      /* 111 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_93);
        (--rSp)->Val = rLit[52];
        GIa2 = ((rSp + 8)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = GIa2;
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GIa4;
        GIa4 = (Ptr) 5;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_93() {      /* 116 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 1)->Val = rA4;
        (rSp + 3)->Val = (rSp + 4)->Val;
        rA4 = (rSp + 4)->Val;
        {aRet = ((Ptr) GLvirbit_92); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_92() {      /* 112 */
   {    register Ptr aRet;
        GIa4 = (GIsp++)->Val;
        {aRet = ((Ptr) GLvirbit_86); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_86() {      /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Fix aux;
                aux = (Fix) (GIa4) - 1;
                GIa4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLvirbit_87); goto lRet;}}
        GIa1 = GYvirbit[53];
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_24() {      /* #:bitmap:create-bytemap */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = rNil;
        if ((rSp + 4)->Val == rNil)     goto l_103;
        GIa4 = ((rSp + 4)->Val->Val + 2 + (Fix) 6)->Val;
        if (GIa4 != rNil)       {aRet = ((Ptr) GLvirbit_94); goto lRet;}
l_103:
        GIa3 = (rSp + 2)->Val;
        GIa2 = (rSp + 3)->Val;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_96);
        {aRet = ((Ptr) GLvirbit_97); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_96() {      /* call_virbit_95 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1;
        rSp->Val = rA1;
        (rA1->Val + 2 + (Fix) 2)->Val = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_98);
        (--rSp)->Val = rLit[54];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_98() {      /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_94() {      /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_99);
        (--rSp)->Val = rLit[55];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_99() {      /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((Fix) (GIa1) <= (Fix) 1)    {aRet = ((Ptr) GLvirbit_100); goto lRet;}
        GIa3 = (rSp + 2)->Val;
        GIa2 = (rSp + 3)->Val;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_102);
        {aRet = ((Ptr) GLvirbit_97); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_102() {     /* call_virbit_101 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1;
        rSp->Val = rA1;
        (--rSp)->Val = ((Ptr) GLvirbit_103);
        (--rSp)->Val = rLit[1];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_103() {     /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLvirbit_104);
        (--rSp)->Val = rLit[56];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 4)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_104() {     /* 109 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = ((Ptr) GLvirbit_105);
        (--rSp)->Val = GYvirbit[57];
        GIa4 = ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = GIa4;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA1 = (rSp + 5)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_107);
        {aRet = ((Ptr) GLvirbit_108); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirbit_107() {     /* call_virbit_106 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYvirbit[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_105() {     /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = ((rSp + 4)->Val->Val + 2 + (Fix) 15)->Val;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_110);
        {aRet = (GYvirbit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_110() {     /* call_virbit_109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 4)->Val->Val + 2 + (Fix) 15)->Val = GIa1;
        GIa1 = rSp->Val;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_100() {     /* 105 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj5);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 5)->Val;
        rA4 = (rA4->Val->Val + 2 + (Fix) 0)->Val;
        rA4 = (rA4->Val + 1)->Val;
        if ((rSp + 7)->Val != rA4)      {aRet = ((Ptr) GLvirbit_111); goto lRet;}
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_113);
        {aRet = ((Ptr) GLvirbit_114); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_113() {     /* call_virbit_112 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLvirbit_115); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_111() {     /* 112 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = (GIsp + 5)->Val;
        rA4 = rA4->Val;
        {aRet = ((Ptr) GLvirbit_115); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_115() {     /* 113 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa4;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLvirbit_1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_97() {      /* #:bitmap:empty-bytemap */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirbit_117);
        {aRet = (GYvirbit[58] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_117() {     /* call_virbit_116 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rA1->Val + 2 + (Fix) 0)->Val = (rSp + 1)->Val;
        (rA1->Val + 2 + (Fix) 1)->Val = (rSp + 2)->Val;
        (rA1->Val + 2 + (Fix) 3)->Val = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_118() {     /* create-bytemap */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        if ((Fix) (rA4) >= (Fix) 2)     goto l_101;
        rA1 = rLit[48];
        rA2 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 2));
        rA1 = rNil;
        goto l_nlist_virbit_120;
l_nlist_virbit_119:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virbit_120:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virbit_119;}
        (--rSp)->Val = rA1;
        if ((rSp + 2)->Val < rBfloat)   goto l_103;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[8];
        rA1 = rLit[48];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 1)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[8];
        rA1 = rLit[48];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        (--rSp)->Val = ((Ptr) GXpopj3);
        (--rSp)->Val = rLit[13]->Val;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLvirbit_121);
        if ((rSp + 5)->Val == rNil)     goto l_108;
        rA4 = (rSp + 5)->Val;
        rA4 = rA4->Val;
        {aRet = ((Ptr) GLvirbit_122); goto lRet;}
l_108:
        rA2 = (Ptr) 0;
        rA1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_124);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_124() {     /* call_virbit_123 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_126);
        {aRet = (GYvirbit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_126() {     /* call_virbit_125 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLvirbit_122); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_122() {     /* 109 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = (rSp + 6)->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (GYvirbit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_121() {     /* 107 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLvirbit_24); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_114() {     /* #:bitmap:bytes-to-bits */
   {    register Ptr aRet, rSp, rA1, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA1->Val;
        rA4 = (rSp->Val->Val + 2 + (Fix) 0)->Val;
        rA4 = (rA4->Val + 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 7));
        rA4 = (Ptr) (UFix) ((UFix) (rA4) >> 3);
        (--rSp)->Val = rA4;
        GIa3 = (rA1 + 1)->Val;
        (--rSp)->Val = GIa3->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        rA1 = ((rSp + 8)->Val->Val + 1)->Val;
        GIa2 = rNil;
        (--rSp)->Val = ((Ptr) GLvirbit_128);
        {aRet = (GYvirbit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_128() {     /* call_virbit_127 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        if ((rSp + 6)->Val == GInil)    {aRet = ((Ptr) GLvirbit_129); goto lRet;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLvirbit_130); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_130() {     /* 103 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLvirbit_131); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_132);
        (--rSp)->Val = ((Ptr) GLvirbit_133);
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 3;
        {aRet = (GYvirbit[59] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_133() {     /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[60];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[61] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_132() {     /* 107 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_106;
        rA1 = (rSp->Val->Val + 2 + (Fix) 0)->Val;
        GIa2 = (rSp + 6)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 6)->Val = rA1;
l_106:
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLvirbit_130); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirbit_131() {     /* 104 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLvirbit_134); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_129() {     /* 101 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (GYvirbit[13]->Val->Val + 2 + (Fix) 13)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 6)->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        (GIsp + 4)->Val = rA1;
        {aRet = ((Ptr) GLvirbit_134); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirbit_134() {     /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 9)->Val->Val + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rA4;
        {aRet = ((Ptr) GLvirbit_135); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_135() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_136);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYvirbit[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_136() {     /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLvirbit_137); goto lRet;}
        GIa4 = ((rSp + 11)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val;
        (rSp + 4)->Val = GIa4;
        GIa2 = (Ptr) 0;
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_139);
        {aRet = (GYvirbit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_139() {     /* call_virbit_138 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (rSp + 5)->Val = GIa1;
        if ((rSp + 4)->Val >= GIbfloat) goto l_112;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val = (rSp + 4)->Val;
        {aRet = ((Ptr) GLvirbit_140); goto lRet;}
l_112:
        rA4 = (rSp + 9)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rA4;
        {aRet = ((Ptr) GLvirbit_141); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_141() {     /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_142);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYvirbit[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_142() {     /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLvirbit_143); goto lRet;}
        (rSp + 5)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        {aRet = ((Ptr) GLvirbit_144); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_144() {     /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_145);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 7;
        GIa4 = (Ptr) 2;
        {aRet = (GYvirbit[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_145() {     /* 119 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLvirbit_146); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirbit_147);
        rA4 = (rSp + 14)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (--rSp)->Val = rA4;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) * (Fix) 8));
        rA3 = (rSp + 2)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (rA4)));
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 2;
        {aRet = (GYvirbit[63] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_147() {     /* 122 */
   {    register Ptr aRet, rSp, rA1, rA3, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        rA1 = (Ptr) ((unsigned char) *(((char *) ((rSp + 7)->Val->Val + 2)) + (Fix) (rA1)));
        GIa2 = (rSp + 9)->Val;
        rA1 = llrt_call_memq (rA1, GIa2, GIbcons, rNil);
        if (rA1 == rNil)        goto l_121;
        rA4 = (Ptr) 7;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (rSp->Val)));
        rA3 = (Ptr) 1;
        {register Fix aux;
                aux = (Fix) (rA4);
                if (aux >= 0)aux = (UFix) (rA3) << aux;
                else        aux = (UFix) (rA3) >> -aux;
                rA3 = (Ptr) ((UFix) aux);}
        rA4 = (rSp + 6)->Val;
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) (rA3));
        (rSp + 6)->Val = rA4;
l_121:
        (--rSp)->Val = ((Ptr) GLvirbit_148);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        rA4 = (Ptr) 2;
        {aRet = (GYvirbit[59] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_148() {     /* 123 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLvirbit_144); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_146() {     /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        *((char *) ((rSp + 7)->Val->Val + 2) + (Fix) ((rSp + 1)->Val)) = (char) (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_149);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (GYvirbit[59] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_149() {     /* 124 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLvirbit_141); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_143() {     /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 2;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val = (rSp + 5)->Val;
        {aRet = ((Ptr) GLvirbit_140); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_140() {     /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_150);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (GYvirbit[59] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_150() {     /* 125 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLvirbit_135); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_137() {     /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 2;
        GIa1 = rSp->Val;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_151() {     /* #:bitmap:bytes */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[64];
        rA2 = (Ptr) 1;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = GInil;
        goto l_nlist_virbit_153;
l_nlist_virbit_152:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virbit_153:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virbit_152;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLvirbit_154);
        (--rSp)->Val = rLit[55];
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_154() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYvirbit; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if ((Fix) (GIa1) >= (Fix) 2)    goto l_102;
        if (rSp->Val != rNil)   goto l_105;
        (--rSp)->Val = ((Ptr) GXpopj2);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 1;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
l_105:
        (--rSp)->Val = ((Ptr) GXpopj2);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 2)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
l_102:
        if (rSp->Val != rNil)   {aRet = ((Ptr) GLvirbit_155); goto lRet;}
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        GIa3 = ((rSp + 2)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = GIa3;
        GIa2 = rNil;
        GIa1 = rA4;
        (--rSp)->Val = ((Ptr) GLvirbit_157);
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_157() {     /* call_virbit_156 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GInil;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (rSp + 4)->Val;
        {aRet = ((Ptr) GLvirbit_158); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_159() {     /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa4;
        GIa2 = (Ptr) 0;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_161);
        {aRet = (GYvirbit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_161() {     /* call_virbit_160 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (rSp + 2)->Val = rA1;
        ((rSp + 3)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val = rA1;
        (rA1 + 1)->Val = rLit[49];
        (--rSp)->Val = ((Ptr) GLvirbit_162);
        (--rSp)->Val = rLit[65];
        rA4 = ((rSp + 9)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 5;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_162() {     /* 113 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 1)->Val = rA4;
        rA4 = (rSp++)->Val;
        {aRet = ((Ptr) GLvirbit_158); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_158() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Fix aux;
                aux = (Fix) (GIa4) - 1;
                GIa4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLvirbit_159); goto lRet;}}
        GIa1 = (rSp + 2)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_155() {     /* 109 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        GIa4 = rSp->Val;
        (--rSp)->Val = GIa4->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        GIa3 = ((rSp + 4)->Val->Val + 1)->Val;
        {aRet = ((Ptr) GLvirbit_163); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_164() {     /* 114 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA3;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        (rSp + 4)->Val = rA4;
        rA3 = (rSp + 2)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 1));
        (rSp + 2)->Val = rA3;
        if (rA4 >= GIbfloat)    {aRet = ((Ptr) GLvirbit_165); goto lRet;}
        {aRet = ((Ptr) GLvirbit_166); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_167() {     /* 118 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLvirbit_168);
        (--rSp)->Val = rLit[66];
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_168() {     /* 120 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 2)->Val = rA4;
        rA4 = (rSp++)->Val;
        {aRet = ((Ptr) GLvirbit_166); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_166() {     /* 119 */
   {    register Ptr aRet;
        {register Fix aux;
                aux = (Fix) (GIa4) - 1;
                GIa4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLvirbit_167); goto lRet;}}
        GIa3 = GYvirbit[53];
        {aRet = ((Ptr) GLvirbit_169); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_165() {     /* 116 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_170);
        (--rSp)->Val = rLit[66];
        GIa2 = ((rSp + 9)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = GIa2;
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GIa4;
        GIa4 = (Ptr) 5;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_170() {     /* 121 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 1)->Val = rA4;
        (rSp + 3)->Val = (rSp + 4)->Val;
        GIa3 = (rSp + 4)->Val;
        {aRet = ((Ptr) GLvirbit_169); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_169() {     /* 117 */
   {    register Ptr aRet;
        GIa3 = (GIsp++)->Val;
        {aRet = ((Ptr) GLvirbit_163); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_163() {     /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Fix aux;
                aux = (Fix) (GIa3) - 1;
                GIa3 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLvirbit_164); goto lRet;}}
        GIa1 = GYvirbit[53];
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_171() {     /* #:bitmap:ext->int-encode */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA1 = (Ptr) ((UFix) (rA1) & (UFix) 127);
        rA4 = (Ptr) ((unsigned char) *(((char *) (rLit[67]->Val->Val + 2)) + (Fix) (rA1)));
        if (rA4 == (Ptr) 255)   goto l_101;
        rA1 = rA4;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GLvirbit_172);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 1;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_172() {     /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[68];
        rA1 = rLit[69];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirbit_173() {     /* #:bitvector:read */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if (rA1 >= GIbfloat)    {aRet = ((Ptr) GLvirbit_174); goto lRet;}
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = GInil;
        (--rSp)->Val = (Ptr) 0;
        GIa2 = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLvirbit_176);
        {aRet = (GYvirbit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_176() {     /* call_virbit_175 */
   {    register Ptr aRet;
        (GIsp + 4)->Val = GIa1;
        {aRet = ((Ptr) GLvirbit_177); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_177() {     /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((Fix) (rSp->Val) >= (Fix) ((rSp + 3)->Val)) {aRet = ((Ptr) GLvirbit_178); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirbit_180);
        {aRet = (GYvirbit[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_180() {     /* call_virbit_179 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirbit_182);
        {aRet = ((Ptr) GLvirbit_171); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_182() {     /* call_virbit_181 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 1)->Val = rA1;
        if ((Fix) (rA1) > (Fix) 15)     {aRet = ((Ptr) GLvirbit_183); goto lRet;}
        rA1 = (Ptr) (UFix) ((UFix) (rA1) << 4);
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLvirbit_185);
        {aRet = (GYvirbit[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirbit_185() {     /* call_virbit_184 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirbit_187);
        {aRet = ((Ptr) GLvirbit_171); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_187() {     /* call_virbit_186 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) (GIa1));
        (rSp + 2)->Val = rA4;
        *((char *) ((rSp + 4)->Val->Val + 2) + (Fix) (rSp->Val)) = (char) rA4;
        rA3 = rSp->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 1));
        rSp->Val = rA3;
        {aRet = ((Ptr) GLvirbit_177); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_183() {     /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        if ((Fix) (rA1) > (Fix) 31)     goto l_107;
        rA1 = (Ptr) ((UFix) (rA1) & (UFix) 15);
        rA4 = (Ptr) ((unsigned char) *(((char *) (rLit[70]->Val->Val + 2)) + (Fix) (rA1)));
        (rSp + 2)->Val = rA4;
        *((char *) ((rSp + 4)->Val->Val + 2) + (Fix) (rSp->Val)) = (char) rA4;
        rA3 = rSp->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 1));
        rSp->Val = rA3;
        {aRet = ((Ptr) GLvirbit_177); goto lRet;}
l_107:
        if ((Fix) (rA1) > (Fix) 63)     {aRet = ((Ptr) GLvirbit_188); goto lRet;}
        if ((Fix) (rA1) > (Fix) 47)     goto l_113;
        rA1 = (Ptr) ((UFix) (rA1) & (UFix) 15);
        rA4 = rA1;
        {aRet = ((Ptr) GLvirbit_189); goto lRet;}
l_113:
        if ((Fix) (rA1) >= (Fix) 62)    {aRet = ((Ptr) GLvirbit_190); goto lRet;}
        rA1 = (Ptr) ((UFix) (rA1) & (UFix) 15);
        rA1 = (Ptr) (UFix) ((UFix) (rA1) << 6);
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLvirbit_192);
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_192() {     /* call_virbit_191 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirbit_194);
        {aRet = ((Ptr) GLvirbit_171); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_194() {     /* call_virbit_193 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = (GIsp++)->Val;
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) (GIa1));
        {aRet = ((Ptr) GLvirbit_189); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_190() {     /* 115 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != (Ptr) 62)    goto l_117;
        rSp->Val = (rSp + 3)->Val;
        GIa4 = (Ptr) ((UFix) 0xffff);
        {aRet = ((Ptr) GLvirbit_189); goto lRet;}
l_117:
        if (rA1 != (Ptr) 63)    {aRet = ((Ptr) GLvirbit_195); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirbit_197);
        {aRet = (GYvirbit[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_197() {     /* call_virbit_196 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirbit_199);
        {aRet = ((Ptr) GLvirbit_171); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_199() {     /* call_virbit_198 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (Ptr) (UFix) ((UFix) (rA1) << 4);
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLvirbit_201);
        {aRet = (GYvirbit[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirbit_201() {     /* call_virbit_200 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirbit_203);
        {aRet = ((Ptr) GLvirbit_171); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_203() {     /* call_virbit_202 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = (GIsp++)->Val;
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) (GIa1));
        {aRet = ((Ptr) GLvirbit_189); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_195() {     /* 119 */
   {    register Ptr aRet;
        GIa4 = GInil;
        {aRet = ((Ptr) GLvirbit_189); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_189() {     /* 114 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        goto l_112;
l_111:
        (--rSp)->Val = rA4;
        *((char *) ((rSp + 5)->Val->Val + 2) + (Fix) ((rSp + 1)->Val)) = (char) (rSp + 3)->Val;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 1)->Val = rA4;
        rA4 = (rSp++)->Val;
l_112:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_111;}
        {aRet = ((Ptr) GLvirbit_177); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_188() {     /* 109 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYvirbit; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[68];
        rA1 = rLit[71];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirbit_177); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirbit_178() {     /* 104 */
   {    register Ptr aRet;
        GIsp += (Fix) 3;
        {aRet = ((Ptr) GLvirbit_204); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_174() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLvirbit_205);
        (--rSp)->Val = GYvirbit[72];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        {aRet = ((Ptr) GLvirbit_206); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_206() {     /* 122 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        (--rSp)->Val = rLit[73]->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_208);
        {aRet = (rLit[44] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_208() {     /* call_virbit_207 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirbit_210);
        {aRet = ((Ptr) GLvirbit_211); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_210() {     /* call_virbit_209 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (Ptr) (UFix) ((UFix) (rA1) << 4);
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLvirbit_213);
        {aRet = (GYvirbit[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirbit_213() {     /* call_virbit_212 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirbit_215);
        {aRet = (GYvirbit[47] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_215() {     /* call_virbit_214 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirbit_217);
        {aRet = ((Ptr) GLvirbit_211); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_217() {     /* call_virbit_216 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) (GIa1));
        GIa3 = (rSp++)->Val;
        *((char *) (GIa3->Val + 2) + (Fix) ((rSp + 4)->Val)) = (char) rA4;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_219);
        {aRet = (GYvirbit[74] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_219() {     /* call_virbit_218 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 4)->Val = GIa1;
        {aRet = ((Ptr) GLvirbit_206); goto lRet;}
l_123:
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLvirbit_205); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_205() {     /* 121 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_220);
        (--rSp)->Val = rLit[73]->Val;
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[75] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_220() {     /* 124 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 2)->Val = GIa1;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLvirbit_204); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_204() {     /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 1)->Val;
        (rA4 + 1)->Val = GYvirbit[49];
        GIa1 = rA4;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_211() {     /* #:bitmap:conv-to-hex */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if ((Fix) (rA1) < (Fix) 48)     goto l_101;
        if ((Fix) (rA1) > (Fix) 57)     goto l_101;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 48));
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if ((Fix) (rA1) < (Fix) 65)     goto l_103;
        if ((Fix) (rA1) > (Fix) 70)     goto l_103;
        rA4 = (Ptr) 65;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 10));
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (rA4)));
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        if ((Fix) (rA1) < (Fix) 97)     goto l_105;
        if ((Fix) (rA1) > (Fix) 102)    goto l_105;
        rA4 = (Ptr) 97;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 10));
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (rA4)));
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        rA1 = GInil;
        GIa2 = rLit[72];
        {aRet = (rLit[76] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_221() {     /* #:bitvector:prin */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 1)->Val;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[77]->Val;
        rLit[77]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[78];
        (--rSp)->Val = rLit[79];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rLit[80]->Val == rNil)      goto l_101;
        (--rSp)->Val = ((Ptr) GLvirbit_222);
        (--rSp)->Val = rLit[81];
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[82];
        rA4 = (Ptr) 3;
        {aRet = (rLit[83] + 2)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GLvirbit_222);
        (--rSp)->Val = rLit[71];
        rA4 = (Ptr) 1;
        {aRet = (rLit[83] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_222() {     /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[77]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        if (rLit[80]->Val == GInil)     {aRet = ((Ptr) GLvirbit_223); goto lRet;}
        (--rSp)->Val = (Ptr) ((UFix) 0xffff);
        (--rSp)->Val = (Ptr) 0;
        {aRet = ((Ptr) GLvirbit_224); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_224() {     /* 107 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        if ((rSp + 4)->Val == (rSp + 2)->Val)   {aRet = ((Ptr) GLvirbit_225); goto lRet;}
        rA4 = (Ptr) ((unsigned char) *(((char *) ((rSp + 5)->Val->Val + 2)) + (Fix) ((rSp + 4)->Val)));
        (rSp + 3)->Val = rA4;
        if (rA4 != (rSp + 1)->Val)      goto l_109;
        rA3 = rSp->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 1));
        rSp->Val = rA3;
        {aRet = ((Ptr) GLvirbit_226); goto lRet;}
l_109:
        GIa2 = rSp->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_228);
        {aRet = ((Ptr) GLvirbit_229); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_228() {     /* call_virbit_227 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp->Val = (Ptr) 0;
        (rSp + 1)->Val = (rSp + 3)->Val;
        {aRet = ((Ptr) GLvirbit_226); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_226() {     /* 110 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 4)->Val = rA4;
        {aRet = ((Ptr) GLvirbit_224); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_225() {     /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbit; rSp = GIsp; rA4 = GIa4;
        if ((rSp + 1)->Val != (Ptr) 0)  goto l_111;
        if (rSp->Val == (Ptr) 0)        goto l_111;
        (--rSp)->Val = ((Ptr) GXpopj6);
        rA4 = (Ptr) ((unsigned char) *(((char *) (rLit[84]->Val->Val + 2)) + (Fix) 62));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (rLit[85] + 2)->Val; goto lRet;}
l_111:
        GIa2 = rSp->Val;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 6;
        {aRet = ((Ptr) GLvirbit_229); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_223() {     /* 105 */
   {    register Ptr aRet;
        GIa4 = GIsp->Val;
        {aRet = ((Ptr) GLvirbit_230); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_231() {     /* 114 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) ((unsigned char) *(((char *) ((rSp + 4)->Val->Val + 2)) + (Fix) ((rSp + 3)->Val)));
        (rSp + 2)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLvirbit_232);
        rA4 = (Ptr) (UFix) ((UFix) (rA4) >> 4);
        GIa3 = (Ptr) ((unsigned char) *(((char *) (rLit[84]->Val->Val + 2)) + (Fix) (rA4)));
        (--rSp)->Val = GIa3;
        rA4 = (Ptr) 1;
        {aRet = (rLit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_232() {     /* 116 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLvirbit_233);
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 15);
        rA4 = (Ptr) ((unsigned char) *(((char *) (rLit[84]->Val->Val + 2)) + (Fix) (rA4)));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (rLit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_233() {     /* 117 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 3)->Val = rA4;
        rA4 = (rSp++)->Val;
        {aRet = ((Ptr) GLvirbit_230); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_230() {     /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Fix aux;
                aux = (Fix) (GIa4) - 1;
                GIa4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLvirbit_231); goto lRet;}}
        GIa1 = GYvirbit[53];
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_229() {     /* #:bitmap:prin-aux */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
l_GLvirbit_229:
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        if ((Fix) (rA2) <= (Fix) 896)   {aRet = ((Ptr) GLvirbit_234); goto lRet;}
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) - (Fix) 897));
        (--rSp)->Val = ((Ptr) GLvirbit_236);
        goto l_GLvirbit_229;
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLvirbit_236() {     /* call_virbit_235 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = (Ptr) 896;
        {aRet = ((Ptr) GLvirbit_234); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_234() {     /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        if (rSp->Val == (Ptr) ((UFix) 0xffff))  {aRet = ((Ptr) GLvirbit_237); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirbit_238);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[70]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[86] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_238() {     /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 == GInil)       goto l_106;
        (--rSp)->Val = ((Ptr) GLvirbit_237);
        rA4 = (Ptr) 16;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rA1)));
        rA4 = (Ptr) ((unsigned char) *(((char *) (rLit[84]->Val->Val + 2)) + (Fix) (rA4)));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (rLit[85] + 2)->Val; goto lRet;}
l_106:
        (--rSp)->Val = ((Ptr) GLvirbit_239);
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) (UFix) ((UFix) (rA4) >> 4);
        rA4 = (Ptr) ((unsigned char) *(((char *) (rLit[84]->Val->Val + 2)) + (Fix) (rA4)));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (rLit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_239() {     /* 109 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLvirbit_237);
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 15);
        rA4 = (Ptr) ((unsigned char) *(((char *) (rLit[84]->Val->Val + 2)) + (Fix) (rA4)));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (rLit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_237() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4;
        rLit = GYvirbit; rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        if ((rSp + 1)->Val == (Ptr) 0)  {aRet = ((Ptr) GLvirbit_240); goto lRet;}
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (rSp + 1)->Val = rA4;
        if ((Fix) (rA4) >= (Fix) 16)    goto l_113;
        (--rSp)->Val = ((Ptr) GXpopj2);
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 32));
        rA3 = (Ptr) ((unsigned char) *(((char *) (rLit[84]->Val->Val + 2)) + (Fix) (rA4)));
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 1;
        {aRet = (rLit[85] + 2)->Val; goto lRet;}
l_113:
        (--rSp)->Val = ((Ptr) GLvirbit_241);
        rA4 = (Ptr) (UFix) ((UFix) (rA4) >> 6);
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 48));
        rA3 = (Ptr) ((unsigned char) *(((char *) (rLit[84]->Val->Val + 2)) + (Fix) (rA4)));
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 1;
        {aRet = (rLit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_241() {     /* 116 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj2);
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 63);
        rA4 = (Ptr) ((unsigned char) *(((char *) (rLit[84]->Val->Val + 2)) + (Fix) (rA4)));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (rLit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_240() {     /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_242() {     /* #:bitmap:prin */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4, rNil;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 2 + (Fix) 1)->Val;
        rA3 = (rA1->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[77]->Val;
        rLit[77]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[87];
        (--rSp)->Val = rLit[79];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rLit[88]->Val == rNil)      goto l_101;
        (--rSp)->Val = ((Ptr) GLvirbit_243);
        (--rSp)->Val = rLit[89];
        (--rSp)->Val = rA3;
        (--rSp)->Val = rLit[90];
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[91];
        rA4 = (Ptr) 5;
        {aRet = (rLit[83] + 2)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GLvirbit_243);
        (--rSp)->Val = rLit[92];
        (--rSp)->Val = rA3;
        (--rSp)->Val = rLit[90];
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[91];
        rA4 = (Ptr) 5;
        {aRet = (rLit[83] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_243() {     /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[77]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        if (rLit[77]->Val == GInil)     {aRet = ((Ptr) GLvirbit_244); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirbit_245);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[93] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_245() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirbit_246);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirbit_247);
        (--rSp)->Val = ((Ptr) GLvirbit_248);
        GIa4 = (Ptr) 0;
        {aRet = (GYvirbit[94] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_248() {     /* 111 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = (GIa1->Val + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (--GIsp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYvirbit[93] + 2)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_247() {     /* 110 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirbit_249);
        GIa4 = (Ptr) 0;
        {aRet = (GYvirbit[95] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_249() {     /* 112 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 5)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 7));
        rA4 = (Ptr) (UFix) ((UFix) (rA4) >> 3);
        (--rSp)->Val = rA4;
        GIa2 = (Ptr) 0;
        GIa1 = rA4;
        (--rSp)->Val = ((Ptr) GLvirbit_251);
        {aRet = (GYvirbit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_251() {     /* call_virbit_250 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = (Ptr) ((UFix) 0xffff);
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_253);
        {aRet = (GYvirbit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_253() {     /* call_virbit_252 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (--rSp)->Val = rA4;
        rA3 = (rSp + 9)->Val;
        rA3 = (Ptr) ((UFix) (rA3) & (UFix) 7);
        (--rSp)->Val = rA3;
        rA2 = (Ptr) 8;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) - (Fix) (rA3)));
        rA4 = (Ptr) 255;
        {register Fix aux;
                aux = (Fix) (rA2);
                if (aux >= 0)aux = (UFix) (rA4) << aux;
                else        aux = (UFix) (rA4) >> -aux;
                rA4 = (Ptr) ((UFix) aux);}
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        rA2 = (rSp + 6)->Val;
        (rA2 + 1)->Val = rLit[49];
        (rA1 + 1)->Val = rLit[49];
        rA4 = (rSp + 12)->Val;
        {aRet = ((Ptr) GLvirbit_254); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_255() {     /* 113 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLvirbit_256);
        (--rSp)->Val = rLit[50];
        rA4 = ((rSp + 17)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 18)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_256() {     /* 115 */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4;
        rLit = GYvirbit; rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 2)->Val = rA4;
        if ((rSp + 4)->Val == (Ptr) 0)  goto l_117;
        rA3 = (Ptr) ((unsigned char) *(((char *) ((rSp + 7)->Val->Val + 2)) + (Fix) ((rSp + 5)->Val)));
        rA3 = (Ptr) ((UFix) (rA3) & (UFix) ((rSp + 3)->Val));
        *((char *) ((rSp + 7)->Val->Val + 2) + (Fix) ((rSp + 5)->Val)) = (char) rA3;
l_117:
        if (rLit[80]->Val == GInil)     {aRet = ((Ptr) GLvirbit_257); goto lRet;}
        GIa2 = (rSp + 6)->Val;
        GIa1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_259);
        {aRet = (rLit[96] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_259() {     /* call_virbit_258 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLvirbit_257); goto lRet;}
        if ((rSp + 2)->Val == (Ptr) 1)  {aRet = ((Ptr) GLvirbit_257); goto lRet;}
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 1)->Val = rA4;
        {aRet = ((Ptr) GLvirbit_260); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_257() {     /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((rSp + 1)->Val == (Ptr) 0)  {aRet = ((Ptr) GLvirbit_261); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirbit_261);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_261() {     /* 121 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_262);
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_262() {     /* 123 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        (rSp + 8)->Val = (rSp + 7)->Val;
        rA4 = (rSp++)->Val;
        (rSp + 6)->Val = rA4;
        (rSp + 1)->Val = (Ptr) 0;
        rA4 = (Ptr) 0;
        {aRet = ((Ptr) GLvirbit_260); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_260() {     /* 119 */
   {    register Ptr aRet;
        GIa4 = (GIsp++)->Val;
        {aRet = ((Ptr) GLvirbit_254); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_254() {     /* 114 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLvirbit_255); goto lRet;}}
        if (rSp->Val == (Ptr) 0)        goto l_124;
        (--rSp)->Val = ((Ptr) GLvirbit_263);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 1;
        {aRet = (GYvirbit[6] + 2)->Val; goto lRet;}
l_124:
        GIa1 = GInil;
        {aRet = ((Ptr) GLvirbit_263); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_263() {     /* 125 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 8;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLvirbit_264);
        {aRet = ((Ptr) GLvirbit_246); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_246() {     /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLvirbit_265);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[93] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_265() {     /* 127 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_264() {     /* 109 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLvirbit_244); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_244() {     /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_266);
        (--rSp)->Val = (Ptr) 93;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_266() {     /* 128 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj3);
        (--rSp)->Val = (Ptr) 41;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_267() {     /* #:bitmap:bytemap:prin */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLvirbit_268);
        (--rSp)->Val = rLit[97];
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_268() {     /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirbit_269);
        (--rSp)->Val = rLit[98];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_269() {     /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[77]->Val;
        rLit[77]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[99];
        (--rSp)->Val = rLit[79];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rLit[88]->Val == rNil)      goto l_103;
        (--rSp)->Val = ((Ptr) GLvirbit_270);
        (--rSp)->Val = rLit[100];
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[90];
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[91];
        GIa4 = (Ptr) 5;
        {aRet = (rLit[83] + 2)->Val; goto lRet;}
l_103:
        (--rSp)->Val = ((Ptr) GLvirbit_270);
        (--rSp)->Val = rLit[101];
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[90];
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[91];
        GIa4 = (Ptr) 5;
        {aRet = (rLit[83] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_270() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[77]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        if (rLit[77]->Val == GInil)     {aRet = ((Ptr) GLvirbit_271); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirbit_272);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[93] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_272() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirbit_273);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirbit_274);
        (--rSp)->Val = ((Ptr) GLvirbit_275);
        GIa4 = (Ptr) 0;
        {aRet = (GYvirbit[94] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_275() {     /* 113 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = (GIa1->Val + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (--GIsp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYvirbit[93] + 2)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_274() {     /* 112 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirbit_276);
        GIa4 = (Ptr) 0;
        {aRet = (GYvirbit[95] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_276() {     /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (Ptr) 0;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_278);
        {aRet = (GYvirbit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_278() {     /* call_virbit_277 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = (Ptr) ((UFix) 0xffff);
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_280);
        {aRet = (GYvirbit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_280() {     /* call_virbit_279 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 6)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        GIa3 = (rSp + 3)->Val;
        (GIa3 + 1)->Val = rLit[49];
        (rA1 + 1)->Val = rLit[49];
        GIa2 = (rSp + 9)->Val;
        {aRet = ((Ptr) GLvirbit_281); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_282() {     /* 115 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLvirbit_283);
        (--rSp)->Val = rLit[65];
        (--rSp)->Val = ((Ptr) GLvirbit_284);
        (--rSp)->Val = rLit[16];
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_284() {     /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 5;
        {aRet = (GYvirbit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_283() {     /* 117 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbit; rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 2)->Val = rA4;
        if (rLit[80]->Val == GInil)     {aRet = ((Ptr) GLvirbit_285); goto lRet;}
        GIa2 = (rSp + 3)->Val;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_287);
        {aRet = (rLit[96] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_287() {     /* call_virbit_286 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLvirbit_285); goto lRet;}
        if ((rSp + 2)->Val == (Ptr) 1)  {aRet = ((Ptr) GLvirbit_285); goto lRet;}
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 1)->Val = rA4;
        GIa2 = rA4;
        {aRet = ((Ptr) GLvirbit_288); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_285() {     /* 119 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((rSp + 1)->Val == (Ptr) 0)  {aRet = ((Ptr) GLvirbit_289); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirbit_289);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_289() {     /* 122 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_290);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_290() {     /* 124 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (rSp + 5)->Val = (rSp + 4)->Val;
        GIa4 = (rSp++)->Val;
        (rSp + 3)->Val = GIa4;
        (rSp + 1)->Val = (Ptr) 0;
        GIa2 = (Ptr) 0;
        {aRet = ((Ptr) GLvirbit_288); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_288() {     /* 120 */
   {    register Ptr aRet;
        GIa2 = (GIsp++)->Val;
        {aRet = ((Ptr) GLvirbit_281); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_281() {     /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Fix aux;
                aux = (Fix) (GIa2) - 1;
                GIa2 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLvirbit_282); goto lRet;}}
        if (rSp->Val == (Ptr) 0)        goto l_125;
        (--rSp)->Val = ((Ptr) GLvirbit_291);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[6] + 2)->Val; goto lRet;}
l_125:
        GIa1 = GInil;
        {aRet = ((Ptr) GLvirbit_291); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_291() {     /* 126 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 4;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLvirbit_292);
        {aRet = ((Ptr) GLvirbit_273); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_273() {     /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLvirbit_293);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[93] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_293() {     /* 128 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_292() {     /* 111 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLvirbit_271); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_271() {     /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_294);
        (--rSp)->Val = (Ptr) 93;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_294() {     /* 129 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        if (rLit[88]->Val == GInil)     {aRet = ((Ptr) GLvirbit_295); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirbit_295);
        (--rSp)->Val = (Ptr) 39;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_295() {     /* 131 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_296);
        (--rSp)->Val = (Ptr) 40;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_296() {     /* 133 */
   {    register Ptr aRet, *rLit;
        rLit = GYvirbit;
        if (rLit[77]->Val == GInil)     {aRet = ((Ptr) GLvirbit_297); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLvirbit_298);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[102] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_298() {     /* 136 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLvirbit_299); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_299() {     /* 137 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (rSp + 1)->Val = rA4->Val;
        if (rA4->Val == GInil)  {aRet = ((Ptr) GLvirbit_300); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirbit_301);
        (--rSp)->Val = (Ptr) 35;
        rA4 = (Ptr) 1;
        {aRet = (GYvirbit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_301() {     /* 139 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_302);
        (--rSp)->Val = (Ptr) 91;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_302() {     /* 140 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_303);
        (--rSp)->Val = ((Ptr) GLvirbit_304);
        (--rSp)->Val = rLit[103];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_304() {     /* 142 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[83] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_303() {     /* 141 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_305);
        (--rSp)->Val = (Ptr) 32;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_305() {     /* 143 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_306);
        (--rSp)->Val = ((Ptr) GLvirbit_307);
        (--rSp)->Val = rLit[104];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_307() {     /* 145 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[83] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_306() {     /* 144 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_308);
        (--rSp)->Val = (Ptr) 32;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_308() {     /* 146 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_309);
        (--rSp)->Val = ((Ptr) GLvirbit_310);
        (--rSp)->Val = rLit[105];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_310() {     /* 148 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[83] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_309() {     /* 147 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_311);
        (--rSp)->Val = (Ptr) 32;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_311() {     /* 149 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_312);
        (--rSp)->Val = ((Ptr) GLvirbit_313);
        (--rSp)->Val = rLit[106];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_313() {     /* 151 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[83] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_312() {     /* 150 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_314);
        (--rSp)->Val = (Ptr) 32;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_314() {     /* 152 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_315);
        (--rSp)->Val = ((Ptr) GLvirbit_316);
        (--rSp)->Val = rLit[107];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_316() {     /* 154 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[83] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_315() {     /* 153 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_317);
        (--rSp)->Val = (Ptr) 93;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_317() {     /* 155 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirbit_299);
        GIa4 = (Ptr) 0;
        {aRet = (GYvirbit[95] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_300() {     /* 138 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLvirbit_297); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_297() {     /* 135 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbit_318);
        (--rSp)->Val = (Ptr) 41;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_318() {     /* 157 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj3);
        (--rSp)->Val = (Ptr) 41;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirbit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_108() {     /* #:bitmap:make-assoc-table */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        {aRet = ((Ptr) GLvirbit_319); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_319() {     /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((rSp + 3)->Val == GInil)    {aRet = ((Ptr) GLvirbit_320); goto lRet;}
        rA4 = (rSp + 3)->Val;
        (rSp + 3)->Val = (rA4 + 1)->Val;
        (rSp + 1)->Val = rA4->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_322);
        {aRet = ((Ptr) GLvirbit_323); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_322() {     /* call_virbit_321 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rSp->Val = rA1;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLvirbit_324);
        (--rSp)->Val = rLit[103];
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_324() {     /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        if (rA4 == rA1) {aRet = ((Ptr) GLvirbit_319); goto lRet;}
        rA1 = ((rSp + 1)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLvirbit_325);
        (--rSp)->Val = rLit[103];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_325() {     /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 3)->Val;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_327);
        {aRet = (GYvirbit[108] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_327() {     /* call_virbit_326 */
   {    register Ptr aRet;
        (GIsp + 2)->Val = GIa1;
        {aRet = ((Ptr) GLvirbit_319); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_320() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_323() {     /* #:bitmap:matching-color */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirbit_328);
        GIa4 = (Ptr) 0;
        {aRet = (GYvirbit[102] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_328() {     /* 101 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = GYvirbit[109];
        (--rSp)->Val = rNil;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLvirbit_329); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_329() {     /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbit; rSp = GIsp; rA4 = GIa4;
        if (rSp->Val == GInil)  {aRet = ((Ptr) GLvirbit_330); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (rSp + 1)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_331);
        (--rSp)->Val = ((Ptr) GLvirbit_332);
        (--rSp)->Val = rLit[107];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_332() {     /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 4)->Val;
        if (rA1 == rA4) goto l_105;
        rA4 = rLit[110];
        goto l_106;
l_105:
        rA4 = (Ptr) 0;
l_106:
        (--rSp)->Val = rA4;
        rA1 = ((rSp + 7)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLvirbit_333);
        (--rSp)->Val = rLit[104];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_333() {     /* 108 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        GIa1 = rA4;
        (--rSp)->Val = ((Ptr) GLvirbit_335);
        {aRet = (GYvirbit[111] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_335() {     /* call_virbit_334 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = ((rSp + 8)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLvirbit_336);
        (--rSp)->Val = rLit[105];
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirbit_336() {     /* 109 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        GIa1 = rA4;
        (--rSp)->Val = ((Ptr) GLvirbit_338);
        {aRet = (GYvirbit[111] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_338() {     /* call_virbit_337 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = ((rSp + 9)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLvirbit_339);
        (--rSp)->Val = rLit[106];
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirbit_339() {     /* 110 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        GIa1 = rA4;
        (--rSp)->Val = ((Ptr) GLvirbit_341);
        {aRet = (GYvirbit[111] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_341() {     /* call_virbit_340 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYvirbit[59] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_331() {     /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 4)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLvirbit_342);
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYvirbit[61] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_342() {     /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLvirbit_329); goto lRet;}
        (rSp + 2)->Val = (rSp + 4)->Val;
        (rSp + 3)->Val = (rSp + 1)->Val;
        {aRet = ((Ptr) GLvirbit_329); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_330() {     /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_343() {     /* substitute-color */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2;
        rA2 = GIa3;
        rA1 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, GInil);
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        {aRet = (GYvirbit[57] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLvirbit_344() {     /* subst-colors */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[19];
        (--rSp)->Val = ((Ptr) GLvirbit_346);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_346() {     /* call_virbit_345 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[20];
        rA1 = rLit[57];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_348);
        {aRet = (rLit[112] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirbit_348() {     /* call_virbit_347 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        goto l_104;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[113];
        rA1 = rLit[57];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_104:
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLvirbit_349); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirbit_349() {     /* 105 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLvirbit_350); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_352);
        {aRet = (GYvirbit[112] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_352() {     /* call_virbit_351 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != GInil)       goto l_108;
        GIa3 = rSp->Val;
        GIa2 = rLit[113];
        rA1 = rLit[57];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_108:
        rA4 = rSp->Val;
        (rSp + 3)->Val = rA4->Val;
        (rSp + 2)->Val = (rA4 + 1)->Val;
        GIa2 = rLit[114];
        rA1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_354);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_354() {     /* call_virbit_353 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_111;
        GIa4 = ((rSp + 3)->Val->Val + 2 + (Fix) 5)->Val;
        if (GIa4 != rNil)       goto l_110;
l_111:
        GIa3 = (rSp + 3)->Val;
        GIa2 = rLit[115];
        rA1 = rLit[57];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_110:
        GIa2 = rLit[114];
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLvirbit_356);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirbit_356() {     /* call_virbit_355 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirbit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_114;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 5)->Val;
        if (rA4 != rNil)        goto l_113;
l_114:
        GIa3 = (rSp + 2)->Val;
        GIa2 = rLit[115];
        rA1 = rLit[57];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_113:
        if ((rSp + 3)->Val == (rSp + 2)->Val)   {aRet = ((Ptr) GLvirbit_357); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirbit_358);
        (--rSp)->Val = rLit[103];
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_358() {     /* 117 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirbit; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirbit_359);
        (--rSp)->Val = rLit[103];
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbit_359() {     /* 118 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rA2 = (rSp + 4)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        (rSp + 4)->Val = rA1;
        {aRet = ((Ptr) GLvirbit_357); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLvirbit_357() {     /* 116 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLvirbit_349); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbit_350() {     /* 106 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbit; rSp = GIsp; rA4 = GIa4;
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLvirbit_360);
        (--rSp)->Val = rLit[55];
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_360() {     /* 121 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbit; rSp = GIsp; rA4 = GIa4;
        if ((Fix) (GIa1) <= (Fix) 1)    goto l_119;
        (--rSp)->Val = ((Ptr) GXpopj5);
        (--rSp)->Val = rLit[57];
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
l_119:
        GIa1 = GInil;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbit_361() {     /* #:display:subst-colors */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYvirbit; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[116];
        rA1 = rLit[57];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GDvirbit_362() {     /* trace create-bitmap */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbit,1,117,118);
  lRet:  return (aRet);}}

static Ptr GDvirbit_363() {     /* trace bitmap-prologue */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbit,15,117,119);
  lRet:  return (aRet);}}

static Ptr GDvirbit_364() {     /* trace window-bitmap */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbit,27,117,120);
  lRet:  return (aRet);}}

static Ptr GDvirbit_365() {     /* trace kill-bitmap */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbit,29,117,120);
  lRet:  return (aRet);}}

static Ptr GDvirbit_366() {     /* trace bmref */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbit,31,117,121);
  lRet:  return (aRet);}}

static Ptr GDvirbit_367() {     /* trace bmset */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbit,33,117,118);
  lRet:  return (aRet);}}

static Ptr GDvirbit_368() {     /* trace byteref */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbit,34,117,121);
  lRet:  return (aRet);}}

static Ptr GDvirbit_369() {     /* trace byteset */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbit,35,117,118);
  lRet:  return (aRet);}}

static Ptr GDvirbit_370() {     /* trace bitblit */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbit,36,117,118);
  lRet:  return (aRet);}}

static Ptr GDvirbit_371() {     /* trace #:sharp:* */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbit,122,117,118);
  lRet:  return (aRet);}}

static Ptr GDvirbit_372() {     /* trace #:sharp:B */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbit,123,117,124);
  lRet:  return (aRet);}}

static Ptr GDvirbit_373() {     /* trace #:bitmap:bits */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbit,4,117,118);
  lRet:  return (aRet);}}

static Ptr GDvirbit_374() {     /* trace create-bytemap */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbit,48,117,118);
  lRet:  return (aRet);}}

static Ptr GDvirbit_375() {     /* trace #:bitmap:bytes */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbit,64,117,118);
  lRet:  return (aRet);}}

static Ptr GDvirbit_376() {     /* trace #:bitvector:read */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbit,43,117,119);
  lRet:  return (aRet);}}

static Ptr GDvirbit_377() {     /* trace #:bitvector:prin */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbit,125,117,120);
  lRet:  return (aRet);}}

static Ptr GDvirbit_378() {     /* trace #:bitmap:prin */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbit,126,117,120);
  lRet:  return (aRet);}}

static Ptr GDvirbit_379() {     /* trace #:bitmap:bytemap:prin */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbit,127,117,120);
  lRet:  return (aRet);}}

static Ptr GDvirbit_380() {     /* trace substitute-color */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbit,128,117,121);
  lRet:  return (aRet);}}

static Ptr GDvirbit_381() {     /* trace subst-colors */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbit,57,117,119);
  lRet:  return (aRet);}}

static Ptr GDvirbit_382() {     /* trace #:display:subst-colors */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbit,129,117,121);
  lRet:  return (aRet);}}

