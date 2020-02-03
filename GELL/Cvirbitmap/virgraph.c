/* GELL 15.26: source file for the module: "virgraph" */
/*             translation done:           "Tue Aug  24 93 10:49:02 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "virgraph.h" 

static Ptr GLvirgraph_1() {     /* graph-env-font */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[0];
        rA2 = (Ptr) 1;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = GInil;
        goto l_nlist_virgraph_3;
l_nlist_virgraph_2:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virgraph_3:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virgraph_2;}
        (--rSp)->Val = rA1;
        rA2 = rLit[2];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_5);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_5() {     /* call_virgraph_4 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rNil = GInil;
        if (rA1 != rNil)        goto l_103;
        rA3 = (rSp + 1)->Val;
        GIa2 = rLit[4];
        rA1 = rLit[0];
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; rA1 = llrt_call_error ();
l_103:
        GIa4 = ((rSp + 1)->Val->Val + 2 + (Fix) 11)->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = GIa4;
        if ((rSp + 2)->Val != rNil)     goto l_104;
        rA1 = ((rSp + 3)->Val->Val + 2 + (Fix) 0)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        rA3 = (rSp + 2)->Val;
        (rSp + 1)->Val = rA3->Val;
        if ((rSp + 1)->Val >= GIbfloat) {aRet = ((Ptr) GLvirgraph_6); goto lRet;}
        if ((Fix) ((rSp + 1)->Val) < (Fix) 0)   {aRet = ((Ptr) GLvirgraph_6); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirgraph_8);
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; return (aRet);}}

static Ptr GLvirgraph_8() {     /* call_virgraph_7 */
   {    register Ptr aRet;
        if ((Fix) ((GIsp + 1)->Val) <= (Fix) (GIa1))    {aRet = ((Ptr) GLvirgraph_9); goto lRet;}
        {aRet = ((Ptr) GLvirgraph_6); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_6() {     /* 108 */
   {    register Ptr aRet, *rLit;
        rLit = GYvirgraph;
        GIa3 = (GIsp + 1)->Val;
        GIa2 = rLit[6];
        GIa1 = rLit[0];
         GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirgraph_9); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_9() {     /* 107 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirgraph_10);
        (--rSp)->Val = rLit[7];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_10() {    /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 3)->Val->Val + 2 + (Fix) 0)->Val = (rSp + 1)->Val;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_11() {    /* current-font */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[9]->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA4;
        if ((Fix) ((rSp + 4)->Val) <= (Fix) 1)  goto l_102;
        GIa3 = (rSp + 4)->Val;
        GIa2 = rLit[10];
        rA1 = rLit[7];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 3)->Val != rNil)     goto l_104;
        GIa3 = (rSp + 3)->Val;
        GIa2 = rLit[11];
        rA1 = rLit[7];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
        (rSp + 2)->Val = rA4;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (rSp + 1)->Val = rA4;
        if ((Ptr) 0 == (rSp + 4)->Val)  goto l_107;
        if (rA4 != rSp->Val)    goto l_105;
l_107:
        rA1 = rA4;
        {aRet = ((Ptr) GLvirgraph_12); goto lRet;}
l_105:
        if (rSp->Val >= GIbfloat)       {aRet = ((Ptr) GLvirgraph_13); goto lRet;}
        if ((Fix) (rSp->Val) < (Fix) 0) {aRet = ((Ptr) GLvirgraph_13); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirgraph_15);
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_15() {    /* call_virgraph_14 */
   {    register Ptr aRet;
        if ((Fix) (GIsp->Val) <= (Fix) (GIa1))  {aRet = ((Ptr) GLvirgraph_16); goto lRet;}
        {aRet = ((Ptr) GLvirgraph_13); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_13() {    /* 110 */
   {    register Ptr aRet, *rLit;
        rLit = GYvirgraph;
        GIa3 = GIsp->Val;
        GIa2 = rLit[6];
        GIa1 = rLit[7];
         GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirgraph_16); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_16() {    /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirgraph_17);
        (--rSp)->Val = rLit[7];
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_17() {    /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 2)->Val->Val + 2 + (Fix) 0)->Val = rSp->Val;
        GIa1 = rSp->Val;
        {aRet = ((Ptr) GLvirgraph_12); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_12() {    /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 5;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_18() {    /* #:display:graph-env-font */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[0];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_19() {    /* #:display:current-font */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[7];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_20() {    /* graph-env-mode */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[13];
        rA2 = (Ptr) 1;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = GInil;
        goto l_nlist_virgraph_22;
l_nlist_virgraph_21:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virgraph_22:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virgraph_21;}
        (--rSp)->Val = rA1;
        rA2 = rLit[2];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_24);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_24() {    /* call_virgraph_23 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_103;
        rA3 = (rSp + 1)->Val;
        GIa2 = rLit[4];
        rA1 = rLit[13];
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 11)->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA4;
        if ((rSp + 2)->Val != rNil)     goto l_104;
        rA1 = ((rSp + 3)->Val->Val + 2 + (Fix) 3)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        rA3 = (rSp + 2)->Val;
        (rSp + 1)->Val = rA3->Val;
        if ((rSp + 1)->Val >= GIbfloat) goto l_108;
        if ((Fix) ((rSp + 1)->Val) < (Fix) 0)   goto l_108;
        if ((Fix) ((rSp + 1)->Val) <= (Fix) 16) goto l_107;
l_108:
        rA3 = (rSp + 1)->Val;
        GIa2 = rLit[14];
        rA1 = rLit[13];
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        (--rSp)->Val = ((Ptr) GLvirgraph_25);
        (--rSp)->Val = rLit[15];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_25() {    /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 3)->Val->Val + 2 + (Fix) 3)->Val = (rSp + 1)->Val;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_26() {    /* current-mode */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[9]->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA4;
        if ((Fix) ((rSp + 4)->Val) <= (Fix) 1)  goto l_102;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[10];
        rA1 = rLit[15];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 3)->Val != rNil)     goto l_104;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[11];
        rA1 = rLit[15];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
        (rSp + 2)->Val = rA4;
        rA4 = (rA4->Val + 2 + (Fix) 3)->Val;
        (rSp + 1)->Val = rA4;
        if ((Ptr) 0 == (rSp + 4)->Val)  goto l_107;
        if (rA4 != rSp->Val)    goto l_105;
l_107:
        rA1 = rA4;
        {aRet = ((Ptr) GLvirgraph_27); goto lRet;}
l_105:
        if (rSp->Val >= GIbfloat)       goto l_110;
        if ((Fix) (rSp->Val) < (Fix) 0) goto l_110;
        if ((Fix) (rSp->Val) <= (Fix) 16)       goto l_109;
l_110:
        rA3 = rSp->Val;
        rA2 = rLit[14];
        rA1 = rLit[15];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        (--rSp)->Val = ((Ptr) GLvirgraph_28);
        (--rSp)->Val = rLit[15];
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
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_28() {    /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val = rSp->Val;
        GIa1 = rSp->Val;
        {aRet = ((Ptr) GLvirgraph_27); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_27() {    /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 5;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_29() {    /* #:display:graph-env-mode */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[13];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_30() {    /* #:display:current-mode */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[15];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_31() {    /* graph-env-pattern */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[16];
        rA2 = (Ptr) 1;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = GInil;
        goto l_nlist_virgraph_33;
l_nlist_virgraph_32:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virgraph_33:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virgraph_32;}
        (--rSp)->Val = rA1;
        rA2 = rLit[2];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_35);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_35() {    /* call_virgraph_34 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rNil = GInil;
        if (rA1 != rNil)        goto l_103;
        rA3 = (rSp + 1)->Val;
        GIa2 = rLit[4];
        rA1 = rLit[16];
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; rA1 = llrt_call_error ();
l_103:
        GIa4 = ((rSp + 1)->Val->Val + 2 + (Fix) 11)->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = GIa4;
        if ((rSp + 2)->Val != rNil)     goto l_104;
        rA1 = ((rSp + 3)->Val->Val + 2 + (Fix) 2)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        rA3 = (rSp + 2)->Val;
        (rSp + 1)->Val = rA3->Val;
        if ((rSp + 1)->Val >= GIbfloat) {aRet = ((Ptr) GLvirgraph_36); goto lRet;}
        if ((Fix) ((rSp + 1)->Val) < (Fix) 0)   {aRet = ((Ptr) GLvirgraph_36); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirgraph_38);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; return (aRet);}}

static Ptr GLvirgraph_38() {    /* call_virgraph_37 */
   {    register Ptr aRet;
        if ((Fix) ((GIsp + 1)->Val) <= (Fix) (GIa1))    {aRet = ((Ptr) GLvirgraph_39); goto lRet;}
        {aRet = ((Ptr) GLvirgraph_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_36() {    /* 108 */
   {    register Ptr aRet, *rLit;
        rLit = GYvirgraph;
        GIa3 = (GIsp + 1)->Val;
        GIa2 = rLit[18];
        GIa1 = rLit[16];
         GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirgraph_39); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_39() {    /* 107 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirgraph_40);
        (--rSp)->Val = rLit[19];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_40() {    /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 3)->Val->Val + 2 + (Fix) 2)->Val = (rSp + 1)->Val;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_41() {    /* current-pattern */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[9]->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA4;
        if ((Fix) ((rSp + 4)->Val) <= (Fix) 1)  goto l_102;
        GIa3 = (rSp + 4)->Val;
        GIa2 = rLit[10];
        rA1 = rLit[19];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 3)->Val != rNil)     goto l_104;
        GIa3 = (rSp + 3)->Val;
        GIa2 = rLit[11];
        rA1 = rLit[19];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
        (rSp + 2)->Val = rA4;
        rA4 = (rA4->Val + 2 + (Fix) 2)->Val;
        (rSp + 1)->Val = rA4;
        if ((Ptr) 0 == (rSp + 4)->Val)  goto l_107;
        if (rA4 != rSp->Val)    goto l_105;
l_107:
        rA1 = rA4;
        {aRet = ((Ptr) GLvirgraph_42); goto lRet;}
l_105:
        if (rSp->Val >= GIbfloat)       {aRet = ((Ptr) GLvirgraph_43); goto lRet;}
        if ((Fix) (rSp->Val) < (Fix) 0) {aRet = ((Ptr) GLvirgraph_43); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirgraph_45);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_45() {    /* call_virgraph_44 */
   {    register Ptr aRet;
        if ((Fix) (GIsp->Val) <= (Fix) (GIa1))  {aRet = ((Ptr) GLvirgraph_46); goto lRet;}
        {aRet = ((Ptr) GLvirgraph_43); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_43() {    /* 110 */
   {    register Ptr aRet, *rLit;
        rLit = GYvirgraph;
        GIa3 = GIsp->Val;
        GIa2 = rLit[18];
        GIa1 = rLit[19];
         GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirgraph_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_46() {    /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirgraph_47);
        (--rSp)->Val = rLit[19];
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_47() {    /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val = rSp->Val;
        GIa1 = rSp->Val;
        {aRet = ((Ptr) GLvirgraph_42); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_42() {    /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 5;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_48() {    /* #:display:graph-env-pattern */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[16];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_49() {    /* #:display:current-pattern */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[19];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_50() {    /* graph-env-stipple */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[20];
        rA2 = (Ptr) 1;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = GInil;
        goto l_nlist_virgraph_52;
l_nlist_virgraph_51:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virgraph_52:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virgraph_51;}
        (--rSp)->Val = rA1;
        rA2 = rLit[2];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_54);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_54() {    /* call_virgraph_53 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rNil = GInil;
        if (rA1 != rNil)        goto l_103;
        rA3 = (rSp + 1)->Val;
        GIa2 = rLit[4];
        rA1 = rLit[20];
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; rA1 = llrt_call_error ();
l_103:
        GIa4 = ((rSp + 1)->Val->Val + 2 + (Fix) 11)->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = GIa4;
        if ((rSp + 2)->Val != rNil)     goto l_104;
        rA1 = ((rSp + 3)->Val->Val + 2 + (Fix) 15)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        rA3 = (rSp + 2)->Val;
        (rSp + 1)->Val = rA3->Val;
        if ((rSp + 1)->Val == rNil)     {aRet = ((Ptr) GLvirgraph_55); goto lRet;}
        GIa2 = rLit[21];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_57);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; return (aRet);}}

static Ptr GLvirgraph_57() {    /* call_virgraph_56 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYvirgraph; rA1 = GIa1;
        if (rA1 != GInil)       {aRet = ((Ptr) GLvirgraph_55); goto lRet;}
        GIa3 = (GIsp + 1)->Val;
        GIa2 = rLit[22];
        rA1 = rLit[20];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirgraph_55); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirgraph_55() {    /* 107 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirgraph_58);
        (--rSp)->Val = rLit[23];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_58() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 3)->Val->Val + 2 + (Fix) 15)->Val = (rSp + 1)->Val;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_59() {    /* current-stipple */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[9]->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA4;
        if ((Fix) ((rSp + 4)->Val) <= (Fix) 1)  goto l_102;
        GIa3 = (rSp + 4)->Val;
        rA2 = rLit[10];
        rA1 = rLit[23];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 3)->Val != rNil)     goto l_104;
        GIa3 = (rSp + 3)->Val;
        rA2 = rLit[11];
        rA1 = rLit[23];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
        (rSp + 2)->Val = rA4;
        rA4 = (rA4->Val + 2 + (Fix) 15)->Val;
        (rSp + 1)->Val = rA4;
        if ((Ptr) 0 == (rSp + 4)->Val)  goto l_107;
        if (rA4 != rSp->Val)    goto l_105;
l_107:
        rA1 = rA4;
        {aRet = ((Ptr) GLvirgraph_60); goto lRet;}
l_105:
        if (rSp->Val == rNil)   {aRet = ((Ptr) GLvirgraph_61); goto lRet;}
        rA2 = rLit[21];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_63);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_63() {    /* call_virgraph_62 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYvirgraph; rA1 = GIa1;
        if (rA1 != GInil)       {aRet = ((Ptr) GLvirgraph_61); goto lRet;}
        GIa3 = GIsp->Val;
        GIa2 = rLit[22];
        rA1 = rLit[23];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirgraph_61); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirgraph_61() {    /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirgraph_64);
        (--rSp)->Val = rLit[23];
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_64() {    /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 2)->Val->Val + 2 + (Fix) 15)->Val = rSp->Val;
        GIa1 = rSp->Val;
        {aRet = ((Ptr) GLvirgraph_60); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_60() {    /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 5;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_65() {    /* #:display:graph-env-stipple */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[20];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_66() {    /* #:display:current-stipple */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[23];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_67() {    /* graph-env-fill-mode */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[24];
        rA2 = (Ptr) 1;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = GInil;
        goto l_nlist_virgraph_69;
l_nlist_virgraph_68:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virgraph_69:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virgraph_68;}
        (--rSp)->Val = rA1;
        rA2 = rLit[2];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_71);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_71() {    /* call_virgraph_70 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_103;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[4];
        rA1 = rLit[24];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 11)->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA4;
        if ((rSp + 2)->Val != rNil)     goto l_104;
        rA1 = ((rSp + 3)->Val->Val + 2 + (Fix) 16)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        rA3 = (rSp + 2)->Val;
        (rSp + 1)->Val = rA3->Val;
        rA2 = (rSp + 1)->Val;
        if (rA2 == rLit[25])    goto l_107;
        if (rA2 == rLit[26])    goto l_107;
        if (rA2 == rLit[27])    goto l_107;
        if (rA2 == rLit[28])    goto l_107;
        rA3 = rA2;
        rA2 = rLit[29];
        rA1 = rLit[24];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        (--rSp)->Val = ((Ptr) GLvirgraph_72);
        (--rSp)->Val = rLit[30];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_72() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 3)->Val->Val + 2 + (Fix) 16)->Val = (rSp + 1)->Val;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_73() {    /* current-fill-mode */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[9]->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA4;
        if ((Fix) ((rSp + 4)->Val) <= (Fix) 1)  goto l_102;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[10];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 3)->Val != rNil)     goto l_104;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[11];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
        (rSp + 2)->Val = rA4;
        rA4 = (rA4->Val + 2 + (Fix) 16)->Val;
        (rSp + 1)->Val = rA4;
        if ((Ptr) 0 == (rSp + 4)->Val)  goto l_107;
        if (rA4 != rSp->Val)    goto l_105;
l_107:
        rA1 = rA4;
        {aRet = ((Ptr) GLvirgraph_74); goto lRet;}
l_105:
        rA3 = rSp->Val;
        if (rA3 == rLit[25])    goto l_109;
        if (rA3 == rLit[26])    goto l_109;
        if (rA3 == rLit[27])    goto l_109;
        if (rA3 == rLit[28])    goto l_109;
        rA2 = rLit[29];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        (--rSp)->Val = ((Ptr) GLvirgraph_75);
        (--rSp)->Val = rLit[30];
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
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_75() {    /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 2)->Val->Val + 2 + (Fix) 16)->Val = rSp->Val;
        GIa1 = rSp->Val;
        {aRet = ((Ptr) GLvirgraph_74); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_74() {    /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 5;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_76() {    /* #:display:graph-env-fill-mode */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[24];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_77() {    /* #:display:current-fill-mode */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[30];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_78() {    /* graph-env-line-style */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[31];
        rA2 = (Ptr) 1;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = GInil;
        goto l_nlist_virgraph_80;
l_nlist_virgraph_79:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virgraph_80:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virgraph_79;}
        (--rSp)->Val = rA1;
        rA2 = rLit[2];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_82);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_82() {    /* call_virgraph_81 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rNil = GInil;
        if (rA1 != rNil)        goto l_103;
        rA3 = (rSp + 1)->Val;
        GIa2 = rLit[4];
        rA1 = rLit[31];
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; rA1 = llrt_call_error ();
l_103:
        GIa4 = ((rSp + 1)->Val->Val + 2 + (Fix) 11)->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = GIa4;
        if ((rSp + 2)->Val != rNil)     goto l_104;
        rA1 = ((rSp + 3)->Val->Val + 2 + (Fix) 1)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        rA3 = (rSp + 2)->Val;
        (rSp + 1)->Val = rA3->Val;
        if ((rSp + 1)->Val >= GIbfloat) {aRet = ((Ptr) GLvirgraph_83); goto lRet;}
        if ((Fix) ((rSp + 1)->Val) < (Fix) 0)   {aRet = ((Ptr) GLvirgraph_83); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirgraph_85);
        {aRet = (rLit[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; return (aRet);}}

static Ptr GLvirgraph_85() {    /* call_virgraph_84 */
   {    register Ptr aRet;
        if ((Fix) ((GIsp + 1)->Val) <= (Fix) (GIa1))    {aRet = ((Ptr) GLvirgraph_86); goto lRet;}
        {aRet = ((Ptr) GLvirgraph_83); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_83() {    /* 108 */
   {    register Ptr aRet, *rLit;
        rLit = GYvirgraph;
        GIa3 = (GIsp + 1)->Val;
        GIa2 = rLit[33];
        GIa1 = rLit[31];
         GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirgraph_86); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_86() {    /* 107 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirgraph_87);
        (--rSp)->Val = rLit[34];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_87() {    /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 3)->Val->Val + 2 + (Fix) 1)->Val = (rSp + 1)->Val;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_88() {    /* current-line-style */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[9]->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA4;
        if ((Fix) ((rSp + 4)->Val) <= (Fix) 1)  goto l_102;
        GIa3 = (rSp + 4)->Val;
        GIa2 = rLit[10];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 3)->Val != rNil)     goto l_104;
        GIa3 = (rSp + 3)->Val;
        GIa2 = rLit[11];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
        (rSp + 2)->Val = rA4;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (rSp + 1)->Val = rA4;
        if ((Ptr) 0 == (rSp + 4)->Val)  goto l_107;
        if (rA4 != rSp->Val)    goto l_105;
l_107:
        rA1 = rA4;
        {aRet = ((Ptr) GLvirgraph_89); goto lRet;}
l_105:
        if (rSp->Val >= GIbfloat)       {aRet = ((Ptr) GLvirgraph_90); goto lRet;}
        if ((Fix) (rSp->Val) < (Fix) 0) {aRet = ((Ptr) GLvirgraph_90); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirgraph_92);
        {aRet = (rLit[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_92() {    /* call_virgraph_91 */
   {    register Ptr aRet;
        if ((Fix) (GIsp->Val) <= (Fix) (GIa1))  {aRet = ((Ptr) GLvirgraph_93); goto lRet;}
        {aRet = ((Ptr) GLvirgraph_90); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_90() {    /* 110 */
   {    register Ptr aRet, *rLit;
        rLit = GYvirgraph;
        GIa3 = GIsp->Val;
        GIa2 = rLit[33];
        GIa1 = rLit[34];
         GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirgraph_93); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_93() {    /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirgraph_94);
        (--rSp)->Val = rLit[34];
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_94() {    /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 2)->Val->Val + 2 + (Fix) 1)->Val = rSp->Val;
        GIa1 = rSp->Val;
        {aRet = ((Ptr) GLvirgraph_89); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_89() {    /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 5;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_95() {    /* #:display:graph-env-line-style */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[31];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_96() {    /* #:display:current-line-style */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[34];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_97() {    /* graph-env-foreground */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[35];
        rA2 = (Ptr) 1;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = GInil;
        goto l_nlist_virgraph_99;
l_nlist_virgraph_98:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virgraph_99:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virgraph_98;}
        (--rSp)->Val = rA1;
        rA2 = rLit[2];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_101);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_101() {   /* call_virgraph_100 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rNil = GInil;
        if (rA1 != rNil)        goto l_103;
        rA3 = (rSp + 1)->Val;
        GIa2 = rLit[4];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; rA1 = llrt_call_error ();
l_103:
        GIa4 = ((rSp + 1)->Val->Val + 2 + (Fix) 11)->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = GIa4;
        if ((rSp + 2)->Val != rNil)     goto l_104;
        rA1 = ((rSp + 3)->Val->Val + 2 + (Fix) 4)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        rA3 = (rSp + 2)->Val;
        (rSp + 1)->Val = rA3->Val;
        GIa2 = rLit[36];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_103);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; return (aRet);}}

static Ptr GLvirgraph_103() {   /* call_virgraph_102 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_108;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 5)->Val;
        if (rA4 != rNil)        goto l_107;
l_108:
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[37];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        (--rSp)->Val = ((Ptr) GLvirgraph_104);
        (--rSp)->Val = rLit[38];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_104() {   /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 3)->Val->Val + 2 + (Fix) 4)->Val = (rSp + 1)->Val;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_105() {   /* current-foreground */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[9]->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA4;
        if ((Fix) ((rSp + 4)->Val) <= (Fix) 1)  goto l_102;
        GIa3 = (rSp + 4)->Val;
        rA2 = rLit[10];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 3)->Val != rNil)     goto l_104;
        GIa3 = (rSp + 3)->Val;
        rA2 = rLit[11];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
        (rSp + 2)->Val = rA4;
        rA4 = (rA4->Val + 2 + (Fix) 4)->Val;
        (rSp + 1)->Val = rA4;
        if ((Ptr) 0 == (rSp + 4)->Val)  goto l_107;
        if (rA4 != rSp->Val)    goto l_105;
l_107:
        rA1 = rA4;
        {aRet = ((Ptr) GLvirgraph_106); goto lRet;}
l_105:
        rA2 = rLit[36];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_108);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_108() {   /* call_virgraph_107 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_110;
        rA4 = (rSp->Val->Val + 2 + (Fix) 5)->Val;
        if (rA4 != rNil)        goto l_109;
l_110:
        GIa3 = rSp->Val;
        GIa2 = rLit[37];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        (--rSp)->Val = ((Ptr) GLvirgraph_109);
        (--rSp)->Val = rLit[38];
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
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_109() {   /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 2)->Val->Val + 2 + (Fix) 4)->Val = rSp->Val;
        GIa1 = rSp->Val;
        {aRet = ((Ptr) GLvirgraph_106); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_106() {   /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 5;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_110() {   /* #:display:graph-env-foreground */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[35];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_111() {   /* #:display:current-foreground */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[38];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_112() {   /* graph-env-background */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[39];
        rA2 = (Ptr) 1;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = GInil;
        goto l_nlist_virgraph_114;
l_nlist_virgraph_113:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virgraph_114:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virgraph_113;}
        (--rSp)->Val = rA1;
        rA2 = rLit[2];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_116);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_116() {   /* call_virgraph_115 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rNil = GInil;
        if (rA1 != rNil)        goto l_103;
        rA3 = (rSp + 1)->Val;
        GIa2 = rLit[4];
        rA1 = rLit[39];
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; rA1 = llrt_call_error ();
l_103:
        GIa4 = ((rSp + 1)->Val->Val + 2 + (Fix) 11)->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = GIa4;
        if ((rSp + 2)->Val != rNil)     goto l_104;
        rA1 = ((rSp + 3)->Val->Val + 2 + (Fix) 5)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        rA3 = (rSp + 2)->Val;
        (rSp + 1)->Val = rA3->Val;
        GIa2 = rLit[36];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_118);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; return (aRet);}}

static Ptr GLvirgraph_118() {   /* call_virgraph_117 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_108;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 5)->Val;
        if (rA4 != rNil)        goto l_107;
l_108:
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[37];
        rA1 = rLit[39];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        (--rSp)->Val = ((Ptr) GLvirgraph_119);
        (--rSp)->Val = rLit[40];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_119() {   /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 3)->Val->Val + 2 + (Fix) 5)->Val = (rSp + 1)->Val;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_120() {   /* current-background */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[9]->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA4;
        if ((Fix) ((rSp + 4)->Val) <= (Fix) 1)  goto l_102;
        GIa3 = (rSp + 4)->Val;
        rA2 = rLit[10];
        rA1 = rLit[40];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 3)->Val != rNil)     goto l_104;
        GIa3 = (rSp + 3)->Val;
        rA2 = rLit[11];
        rA1 = rLit[40];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
        (rSp + 2)->Val = rA4;
        rA4 = (rA4->Val + 2 + (Fix) 5)->Val;
        (rSp + 1)->Val = rA4;
        if ((Ptr) 0 == (rSp + 4)->Val)  goto l_107;
        if (rA4 != rSp->Val)    goto l_105;
l_107:
        rA1 = rA4;
        {aRet = ((Ptr) GLvirgraph_121); goto lRet;}
l_105:
        rA2 = rLit[36];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_123);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_123() {   /* call_virgraph_122 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_110;
        rA4 = (rSp->Val->Val + 2 + (Fix) 5)->Val;
        if (rA4 != rNil)        goto l_109;
l_110:
        GIa3 = rSp->Val;
        GIa2 = rLit[37];
        rA1 = rLit[40];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        (--rSp)->Val = ((Ptr) GLvirgraph_124);
        (--rSp)->Val = rLit[40];
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
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_124() {   /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 2)->Val->Val + 2 + (Fix) 5)->Val = rSp->Val;
        GIa1 = rSp->Val;
        {aRet = ((Ptr) GLvirgraph_121); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_121() {   /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 5;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_125() {   /* #:display:graph-env-background */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[39];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_126() {   /* #:display:current-background */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[40];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_127() {   /* clear-graph-env */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rLit[9]->Val;
        if (rSp->Val != GInil)  goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        GIa1 = rLit[41];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
l_102:
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[41];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 3;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_128() {   /* #:display:clear-graph-env */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[41];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_129() {   /* font-height */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rLit[9]->Val;
        if (rSp->Val != GInil)  goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        GIa1 = rLit[42];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
l_102:
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[42];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 3;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_130() {   /* #:display:font-height */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[42];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_131() {   /* font-ascent */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rLit[9]->Val;
        if (rSp->Val != GInil)  goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        GIa1 = rLit[43];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
l_102:
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[43];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 3;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_132() {   /* #:display:font-ascent */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[43];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_133() {   /* font-max */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        (--rSp)->Val = rLit[9]->Val;
        if (rSp->Val != GInil)  goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        GIa1 = rLit[5];
        GIsp = rSp; GIa1 = llrt_call_error ();
l_102:
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[5];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_134() {   /* #:display:font-max */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[5];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_135() {   /* line-style-max */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        (--rSp)->Val = rLit[9]->Val;
        if (rSp->Val != GInil)  goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        GIa1 = rLit[32];
        GIsp = rSp; GIa1 = llrt_call_error ();
l_102:
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[32];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_136() {   /* #:display:line-style-max */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[32];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_137() {   /* pattern-max */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        (--rSp)->Val = rLit[9]->Val;
        if (rSp->Val != GInil)  goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        GIa1 = rLit[17];
        GIsp = rSp; GIa1 = llrt_call_error ();
l_102:
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[17];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_138() {   /* #:display:pattern-max */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[17];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_139() {   /* cursor-max */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        (--rSp)->Val = rLit[9]->Val;
        if (rSp->Val != GInil)  goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        GIa1 = rLit[44];
        GIsp = rSp; GIa1 = llrt_call_error ();
l_102:
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[44];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_140() {   /* #:display:cursor-max */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[44];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_141() {   /* width-substring */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[9]->Val;
        if (rSp->Val != GInil)  goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        rA1 = rLit[45];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rLit[45];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 6;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_142() {   /* #:display:width-substring */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[45];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_143() {   /* height-substring */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[9]->Val;
        if (rSp->Val != GInil)  goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        rA1 = rLit[46];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rLit[46];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 6;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_144() {   /* #:display:height-substring */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[46];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_145() {   /* x-base-substring */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[9]->Val;
        if (rSp->Val != GInil)  goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        rA1 = rLit[47];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rLit[47];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 6;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_146() {   /* #:display:x-base-substring */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[47];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_147() {   /* y-base-substring */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[9]->Val;
        if (rSp->Val != GInil)  goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        rA1 = rLit[48];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rLit[48];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 6;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_148() {   /* #:display:y-base-substring */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[48];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_149() {   /* x-inc-substring */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[9]->Val;
        if (rSp->Val != GInil)  goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        rA1 = rLit[49];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rLit[49];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 6;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_150() {   /* #:display:x-inc-substring */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[49];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_151() {   /* y-inc-substring */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[9]->Val;
        if (rSp->Val != GInil)  goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        rA1 = rLit[50];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rLit[50];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 6;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_152() {   /* #:display:y-inc-substring */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[50];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_153() {   /* #:display:load-font */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[51];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_154() {   /* #:display:get-font-names */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[52];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_155() {   /* #:display:get-font-info */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[53];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_156() {   /* #:display:graph-env-set-clip */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[54];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_157() {   /* #:display:graph-env-set-clips */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[55];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_158() {   /* #:display:graph-env-change-values */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[56];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_159() {   /* #:display:graph-env-subwindow-mode */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[57];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_160() {   /* #:display:make-graph-env */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[58];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_161() {   /* #:display:kill-graph-env */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[59];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_162() {   /* #:display:kill-stipple */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[60];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_163() {   /* #:display:create-stipple */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[61];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_164() {   /* #:display:make-line-style */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[62];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_165() {   /* #:display:make-pattern */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[63];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_166() {   /* #:display:make-cursor */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[64];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_167() {   /* #:display:make-named-cursor */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[65];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_168() {   /* #:display:cursor-name */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[66];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_169() {   /* #:display:move-cursor */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[67];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_170() {   /* #:display:current-clip */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[68];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_171() {   /* #:display:current-cursor */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[12];
        GIa1 = rLit[69];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_172() {   /* current-clip */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rBfloat;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat;
        (--rSp)->Val = rA4;
        if (rLit[9]->Val != GInil)      goto l_102;
        rA3 = rLit[9]->Val;
        rA2 = rLit[11];
        rA1 = rLit[68];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA1 = rSp->Val;
        if (rA1 != (Ptr) 0)     goto l_104;
        rA4 = (rLit[9]->Val->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = rA4;
        rA3 = (rA4->Val + 2 + (Fix) 6)->Val;
        rLit[70]->Val = rA3;
        rA2 = (rA4->Val + 2 + (Fix) 7)->Val;
        rLit[71]->Val = rA2;
        rA4 = (rA4->Val + 2 + (Fix) 8)->Val;
        rLit[72]->Val = rA4;
        rA4 = (rSp->Val->Val + 2 + (Fix) 9)->Val;
        rLit[73]->Val = rA4;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLvirgraph_173); goto lRet;}
l_104:
        if (rA1 != (Ptr) 4)     {aRet = ((Ptr) GLvirgraph_174); goto lRet;}
        rA4 = (rLit[9]->Val->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rA3 = (rSp + (Fix) (rA4))->Val;
        rA4 = (rSp + 1)->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        rA4 = (rSp + 2)->Val;
        rA2 = (rSp + (Fix) (rA4))->Val;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA3;
        if (rA3 < rBfloat)      goto l_107;
        rA2 = rLit[74];
        rA1 = rLit[68];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if ((rSp + 3)->Val < rBfloat)   goto l_109;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[74];
        rA1 = rLit[68];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        if ((rSp + 1)->Val < rBfloat)   goto l_111;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[74];
        rA1 = rLit[68];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        if ((rSp + 2)->Val < rBfloat)   goto l_113;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[74];
        rA1 = rLit[68];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_113:
        ((rSp + 4)->Val->Val + 2 + (Fix) 6)->Val = rSp->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 7)->Val = (rSp + 3)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val = (rSp + 1)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 9)->Val = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_175);
        (--rSp)->Val = rLit[68];
        (--rSp)->Val = rLit[9]->Val;
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 7;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_175() {   /* 114 */
   {    register Ptr aRet;
        GIsp += (Fix) 5;
        {aRet = ((Ptr) GLvirgraph_173); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_174() {   /* 105 */
   {    register Ptr aRet, *rLit;
        rLit = GYvirgraph;
        GIa3 = GIsp->Val;
        GIa2 = rLit[75];
        GIa1 = rLit[68];
         GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirgraph_173); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_173() {   /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_176() {   /* load-font */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rA1;
        if ((rA1 >= GIbstrg) && (rA1 < GIbsymb))        goto l_102;
        GIa3 = rA1;
        GIa2 = rLit[76];
        rA1 = rLit[51];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        (--rSp)->Val = rLit[9]->Val;
        (--rSp)->Val = rNil;
        if ((rSp + 1)->Val != rNil)     goto l_104;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[11];
        rA1 = rLit[51];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_104:
        (--rSp)->Val = ((Ptr) GLvirgraph_177);
        (--rSp)->Val = rLit[52];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirgraph_177() {   /* 106 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = GIa1->Val;
        if (rA4 != GInil)       goto l_105;
        rA4 = (rSp + 2)->Val;
l_105:
        (rSp + 2)->Val = rA4;
        GIa2 = ((rSp + 1)->Val->Val + 2 + (Fix) 18)->Val;
        GIa1 = rA4;
        (--rSp)->Val = ((Ptr) GLvirgraph_179);
        {aRet = (GYvirgraph[77] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_179() {   /* call_virgraph_178 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        if (GIa1 != GInil)      {rSp += (Fix) 3; aRet = (rSp++)->Val; goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirgraph_180);
        (--rSp)->Val = rLit[51];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_180() {   /* 108 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rSp->Val = rA1;
        rA1 = ((rSp + 1)->Val->Val + 2 + (Fix) 18)->Val;
        (--rSp)->Val = rA1;
        rA2 = (rSp + 1)->Val;
        rA1 = (rSp + 3)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_182);
        {aRet = (GYvirgraph[78] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLvirgraph_182() {   /* call_virgraph_181 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 1)->Val->Val + 2 + (Fix) 18)->Val = GIa1;
        GIa1 = rSp->Val;
l_107:
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_183() {   /* font-name */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 >= GIbfloat)    {aRet = ((Ptr) GLvirgraph_184); goto lRet;}
        if ((Fix) (rA1) < (Fix) 0)      {aRet = ((Ptr) GLvirgraph_184); goto lRet;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLvirgraph_186);
        {aRet = (GYvirgraph[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_186() {   /* call_virgraph_185 */
   {    register Ptr aRet;
        GIa4 = (GIsp++)->Val;
        if ((Fix) (GIa4) <= (Fix) (GIa1))       {aRet = ((Ptr) GLvirgraph_187); goto lRet;}
        {aRet = ((Ptr) GLvirgraph_184); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_184() {   /* 103 */
   {    register Ptr aRet, *rLit;
        rLit = GYvirgraph;
        GIa3 = GIsp->Val;
        GIa2 = rLit[6];
        GIa1 = rLit[79];
         GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirgraph_187); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_187() {   /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rLit[9]->Val;
        (--rSp)->Val = rNil;
        if ((rSp + 1)->Val != rNil)     goto l_105;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[11];
        rA1 = rLit[79];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_105:
        GIa2 = ((rSp + 1)->Val->Val + 2 + (Fix) 18)->Val;
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_189);
        {aRet = (rLit[80] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirgraph_189() {   /* call_virgraph_188 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1;
        rSp->Val = rA1;
        if (rA1 != GInil)       goto l_107;
        GIa3 = (rSp + 2)->Val;
        GIa2 = rLit[6];
        rA1 = rLit[79];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_107:
        rA1 = rSp->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirgraph_190() {   /* make-pattern */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[81];
        (--rSp)->Val = ((Ptr) GLvirgraph_192);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_192() {   /* call_virgraph_191 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[82];
        rA1 = rLit[63];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA4;
        if (rA4 != rNil)        goto l_104;
        GIa3 = rA4;
        GIa2 = rLit[11];
        rA1 = rLit[63];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        (--rSp)->Val = ((Ptr) GLvirgraph_193);
        (--rSp)->Val = rLit[63];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 3;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_193() {   /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 1)->Val = GIa1;
        GIa1 = (rSp->Val->Val + 2 + (Fix) 19)->Val;
        GIa2 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_195);
        {aRet = (GYvirgraph[78] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_195() {   /* call_virgraph_194 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp->Val->Val + 2 + (Fix) 19)->Val = GIa1;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_196() {   /* create-stipple */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rBfloat;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBfloat = GIbfloat;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[74];
        rA1 = rLit[61];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val < rBfloat)   goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[74];
        rA1 = rLit[61];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        if (((rSp + 2)->Val >= GIbstrg) && ((rSp + 2)->Val < GIbsymb))  goto l_106;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[76];
        rA1 = rLit[61];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = rLit[9]->Val;
        if (rSp->Val != GInil)  goto l_108;
        rA3 = rSp->Val;
        rA2 = rLit[11];
        rA1 = rLit[61];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_108:
        (--rSp)->Val = ((Ptr) GLvirgraph_198);
        {aRet = (rLit[83] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLvirgraph_198() {   /* call_virgraph_197 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (rA1->Val + 2 + (Fix) 0)->Val = (rSp + 2)->Val;
        (rA1->Val + 2 + (Fix) 1)->Val = (rSp + 3)->Val;
        (rA1->Val + 2 + (Fix) 3)->Val = (rSp + 1)->Val;
        (rA1->Val + 2 + (Fix) 4)->Val = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_199);
        (--rSp)->Val = rLit[61];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_199() {   /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = ((rSp + 1)->Val->Val + 2 + (Fix) 26)->Val;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_201);
        {aRet = (GYvirgraph[78] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_201() {   /* call_virgraph_200 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 1)->Val->Val + 2 + (Fix) 26)->Val = GIa1;
        GIa1 = rSp->Val;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_202() {   /* make-stipple-bitmap */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirgraph_204);
        {aRet = (GYvirgraph[84] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_204() {   /* call_virgraph_203 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != rLit[81])    goto l_103;
        rA4 = (rSp->Val->Val + 2 + (Fix) 0)->Val;
        if (rA4 != (Ptr) 16)    goto l_103;
        rA4 = (rSp->Val->Val + 2 + (Fix) 1)->Val;
        if (rA4 == (Ptr) 16)    goto l_102;
l_103:
        GIa3 = rSp->Val;
        GIa2 = rLit[85];
        rA1 = rLit[86];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        (--rSp)->Val = ((Ptr) GLvirgraph_205);
        (--rSp)->Val = rLit[87];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_205() {   /* 104 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = GYvirgraph[88];
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rA4;
        {aRet = ((Ptr) GLvirgraph_206); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_206() {   /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirgraph_207);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYvirgraph[89] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_207() {   /* 107 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLvirgraph_208); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirgraph_209);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) ((rSp + 3)->Val))->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (GYvirgraph[90] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_209() {   /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 3)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirgraph_210);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (GYvirgraph[91] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_210() {   /* 109 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLvirgraph_206); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_208() {   /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 2;
        GIa3 = (rSp + 1)->Val;
        GIa2 = (Ptr) 16;
        GIa1 = (Ptr) 16;
        rSp += (Fix) 3;
        {aRet = (GYvirgraph[61] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_211() {   /* make-stipple */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA1;
        if (rA1 < GIbfloat)     goto l_102;
        rA3 = rA1;
        rA2 = rLit[85];
        rA1 = rLit[92];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = rSp->Val;
        rA4 = (Ptr) (UFix) ((UFix) (rA4) >> 8);
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 255);
        (--rSp)->Val = rA4;
        rA3 = (rSp + 1)->Val;
        rA3 = (Ptr) ((UFix) (rA3) & (UFix) 255);
        (--rSp)->Val = rA3;
        rA2 = rLit[93]->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) / (Fix) 16));
        (--rSp)->Val = rA2;
        (--rSp)->Val = rLit[94]->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) * (Fix) 2));
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) * (Fix) (rSp->Val)));
        (--rSp)->Val = rA2;
        rA2 = (Ptr) 0;
        rA1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_213);
        {aRet = (rLit[95] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_213() {   /* call_virgraph_212 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
l_103:
        if ((Fix) ((rSp + 1)->Val) >= (Fix) ((rSp + 4)->Val))   goto l_104;
l_105:
        if ((Fix) ((rSp + 2)->Val) >= (Fix) ((rSp + 5)->Val))   goto l_106;
        *((char *) ((rSp + 3)->Val->Val + 2) + (Fix) (rSp->Val)) = (char) (rSp + 7)->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rSp->Val = rA4;
        *((char *) ((rSp + 3)->Val->Val + 2) + (Fix) (rA4)) = (char) (rSp + 6)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rSp->Val = rA4;
        rA3 = (rSp + 2)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 1));
        (rSp + 2)->Val = rA3;
        goto l_105;
l_106:
        (rSp + 2)->Val = (Ptr) 0;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 1)->Val = rA4;
        goto l_103;
l_104:
        rA4 = (rSp + 3)->Val;
        (rA4 + 1)->Val = rLit[96];
        rA3 = rA4;
        GIa2 = rLit[94]->Val;
        rA1 = rLit[93]->Val;
        rSp += (Fix) 9;
        {aRet = (rLit[61] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_214() {   /* make-stipple-2 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rBfloat;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rBfloat = GIbfloat;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        GIa3 = rA1;
        rA2 = rLit[85];
        rA1 = rLit[92];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val < rBfloat)   goto l_104;
        GIa3 = (rSp + 1)->Val;
        rA2 = rLit[85];
        rA1 = rLit[92];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA4 = rLit[93]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) / (Fix) 4));
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[94]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) * (Fix) (rSp->Val)));
        rA2 = (Ptr) 0;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLvirgraph_216);
        {aRet = (rLit[95] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_216() {   /* call_virgraph_215 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (rA1 + 1)->Val = GYvirgraph[96];
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) (UFix) ((UFix) (rA4) >> 8);
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 255);
        *((char *) (rA1->Val + 2) + (Fix) 0) = (char) rA4;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 255);
        *((char *) (rA1->Val + 2) + (Fix) 1) = (char) rA4;
        rA4 = (rSp + 5)->Val;
        rA4 = (Ptr) (UFix) ((UFix) (rA4) >> 8);
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 255);
        *((char *) (rA1->Val + 2) + (Fix) 2) = (char) rA4;
        rA4 = (rSp + 5)->Val;
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 255);
        *((char *) (rA1->Val + 2) + (Fix) 3) = (char) rA4;
        {aRet = ((Ptr) GLvirgraph_217); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_217() {   /* 105 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) * (Fix) ((rSp + 3)->Val)));
        if ((Fix) (rSp->Val) >= (Fix) (rA4))    {aRet = ((Ptr) GLvirgraph_218); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirgraph_219);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (GYvirgraph[97] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_219() {   /* 107 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rSp->Val)));
        rSp->Val = rA4;
        {aRet = ((Ptr) GLvirgraph_217); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_218() {   /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[94]->Val;
        GIa1 = rLit[93]->Val;
        rSp += (Fix) 6;
        {aRet = (rLit[61] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_220() {   /* create-stipple16 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        rA1 = GInil;
        goto l_nlist_virgraph_222;
l_nlist_virgraph_221:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virgraph_222:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virgraph_221;}
        (--rSp)->Val = rA1;
        rA1 = llrt_call_length (rA1, GIbcons);
        if (rA1 != (Ptr) 1)     {aRet = ((Ptr) GLvirgraph_223); goto lRet;}
        rA4 = rSp->Val;
        if ((rA4->Val < GIbstrg) || (rA4->Val >= GIbsymb))      goto l_103;
        rA3 = rA4->Val;
        rA2 = (Ptr) 16;
        rA1 = (Ptr) 16;
        rSp += (Fix) 1;
        {aRet = (rLit[61] + 2)->Val; goto lRet;}
l_103:
        if (rA4->Val < GIbfloat)        goto l_105;
        rA3 = rA4->Val;
        rA2 = rLit[98];
        rA1 = rLit[99];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        rA2 = (Ptr) 0;
        rA1 = (Ptr) 32;
        (--rSp)->Val = ((Ptr) GLvirgraph_225);
        {aRet = (rLit[95] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_225() {   /* call_virgraph_224 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = (Ptr) 4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = rA4->Val;
        rA4 = (Ptr) (UFix) ((UFix) (rA4) >> 8);
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 255);
        *((char *) (rA1->Val + 2) + (Fix) 0) = (char) rA4;
        rA4 = (Ptr) ((unsigned char) *(((char *) (rA1->Val + 2)) + (Fix) 0));
        *((char *) (rA1->Val + 2) + (Fix) 1) = (char) rA4;
        rA4 = (rSp + 2)->Val;
        rA4 = rA4->Val;
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 255);
        *((char *) (rA1->Val + 2) + (Fix) 2) = (char) rA4;
        rA4 = (Ptr) ((unsigned char) *(((char *) (rA1->Val + 2)) + (Fix) 2));
        *((char *) (rA1->Val + 2) + (Fix) 3) = (char) rA4;
        {aRet = ((Ptr) GLvirgraph_226); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_226() {   /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((Fix) ((rSp + 1)->Val) >= (Fix) 32) {aRet = ((Ptr) GLvirgraph_227); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirgraph_228);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 4;
        GIa4 = (Ptr) 5;
        {aRet = (GYvirgraph[97] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_228() {   /* 109 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 4));
        (rSp + 1)->Val = rA4;
        {aRet = ((Ptr) GLvirgraph_226); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_227() {   /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = rSp->Val;
        GIa2 = (Ptr) 16;
        GIa1 = (Ptr) 16;
        rSp += (Fix) 3;
        {aRet = (GYvirgraph[61] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_223() {   /* 102 */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) 2)    {aRet = ((Ptr) GLvirgraph_229); goto lRet;}
        GIa2 = (Ptr) 0;
        GIa1 = (Ptr) 32;
        (--GIsp)->Val = ((Ptr) GLvirgraph_231);
        {aRet = (GYvirgraph[95] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_231() {   /* call_virgraph_230 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4, rBfloat;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA3 = (rA4 + 1)->Val;
        (--rSp)->Val = rA3->Val;
        (--rSp)->Val = (Ptr) 8;
        if ((rSp + 2)->Val < rBfloat)   goto l_112;
        rA3 = (rSp + 2)->Val;
        GIa2 = rLit[74];
        rA1 = rLit[100];
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_112:
        if ((rSp + 1)->Val < rBfloat)   goto l_114;
        rA3 = (rSp + 1)->Val;
        GIa2 = rLit[74];
        rA1 = rLit[100];
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_114:
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) (UFix) ((UFix) (rA4) >> 8);
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 255);
        *((char *) ((rSp + 3)->Val->Val + 2) + (Fix) 0) = (char) rA4;
        rA4 = (Ptr) ((unsigned char) *(((char *) ((rSp + 3)->Val->Val + 2)) + (Fix) 0));
        *((char *) ((rSp + 3)->Val->Val + 2) + (Fix) 1) = (char) rA4;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 255);
        *((char *) ((rSp + 3)->Val->Val + 2) + (Fix) 2) = (char) rA4;
        rA4 = (Ptr) ((unsigned char) *(((char *) ((rSp + 3)->Val->Val + 2)) + (Fix) 2));
        *((char *) ((rSp + 3)->Val->Val + 2) + (Fix) 3) = (char) rA4;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) (UFix) ((UFix) (rA4) >> 8);
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 255);
        *((char *) ((rSp + 3)->Val->Val + 2) + (Fix) 4) = (char) rA4;
        rA4 = (Ptr) ((unsigned char) *(((char *) ((rSp + 3)->Val->Val + 2)) + (Fix) 4));
        *((char *) ((rSp + 3)->Val->Val + 2) + (Fix) 5) = (char) rA4;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 255);
        *((char *) ((rSp + 3)->Val->Val + 2) + (Fix) 6) = (char) rA4;
        rA4 = (Ptr) ((unsigned char) *(((char *) ((rSp + 3)->Val->Val + 2)) + (Fix) 6));
        *((char *) ((rSp + 3)->Val->Val + 2) + (Fix) 7) = (char) rA4;
        {aRet = ((Ptr) GLvirgraph_232); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_232() {   /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((Fix) (rSp->Val) >= (Fix) 32)       {aRet = ((Ptr) GLvirgraph_233); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirgraph_234);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 8;
        GIa4 = (Ptr) 5;
        {aRet = (GYvirgraph[97] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_234() {   /* 117 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (Ptr) 8;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rSp->Val)));
        rSp->Val = rA4;
        {aRet = ((Ptr) GLvirgraph_232); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_233() {   /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 3)->Val;
        GIa2 = (Ptr) 16;
        GIa1 = (Ptr) 16;
        rSp += (Fix) 5;
        {aRet = (GYvirgraph[61] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_229() {   /* 110 */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) 4)    {aRet = ((Ptr) GLvirgraph_235); goto lRet;}
        GIa2 = (Ptr) 0;
        GIa1 = (Ptr) 32;
        (--GIsp)->Val = ((Ptr) GLvirgraph_237);
        {aRet = (GYvirgraph[95] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_237() {   /* call_virgraph_236 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rBfloat;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA3 = (rA4 + 1)->Val;
        (--rSp)->Val = rA3->Val;
        rA2 = (rA4 + 1)->Val;
        rA2 = (rA2 + 1)->Val;
        (--rSp)->Val = rA2->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        if ((rSp + 3)->Val < rBfloat)   goto l_120;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[74];
        rA1 = rLit[101];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_120:
        if ((rSp + 2)->Val < rBfloat)   goto l_122;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[74];
        rA1 = rLit[101];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_122:
        if ((rSp + 1)->Val < rBfloat)   goto l_124;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[74];
        rA1 = rLit[101];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_124:
        if (rSp->Val < rBfloat) goto l_126;
        rA3 = rSp->Val;
        rA2 = rLit[74];
        rA1 = rLit[101];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_126:
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) (UFix) ((UFix) (rA4) >> 8);
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 255);
        *((char *) ((rSp + 4)->Val->Val + 2) + (Fix) 0) = (char) rA4;
        rA4 = (Ptr) ((unsigned char) *(((char *) ((rSp + 4)->Val->Val + 2)) + (Fix) 0));
        *((char *) ((rSp + 4)->Val->Val + 2) + (Fix) 1) = (char) rA4;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 255);
        *((char *) ((rSp + 4)->Val->Val + 2) + (Fix) 2) = (char) rA4;
        rA4 = (Ptr) ((unsigned char) *(((char *) ((rSp + 4)->Val->Val + 2)) + (Fix) 2));
        *((char *) ((rSp + 4)->Val->Val + 2) + (Fix) 3) = (char) rA4;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) (UFix) ((UFix) (rA4) >> 8);
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 255);
        *((char *) ((rSp + 4)->Val->Val + 2) + (Fix) 4) = (char) rA4;
        rA4 = (Ptr) ((unsigned char) *(((char *) ((rSp + 4)->Val->Val + 2)) + (Fix) 4));
        *((char *) ((rSp + 4)->Val->Val + 2) + (Fix) 5) = (char) rA4;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 255);
        *((char *) ((rSp + 4)->Val->Val + 2) + (Fix) 6) = (char) rA4;
        rA4 = (Ptr) ((unsigned char) *(((char *) ((rSp + 4)->Val->Val + 2)) + (Fix) 6));
        *((char *) ((rSp + 4)->Val->Val + 2) + (Fix) 7) = (char) rA4;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) (UFix) ((UFix) (rA4) >> 8);
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 255);
        *((char *) ((rSp + 4)->Val->Val + 2) + (Fix) 8) = (char) rA4;
        rA4 = (Ptr) ((unsigned char) *(((char *) ((rSp + 4)->Val->Val + 2)) + (Fix) 8));
        *((char *) ((rSp + 4)->Val->Val + 2) + (Fix) 9) = (char) rA4;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 255);
        *((char *) ((rSp + 4)->Val->Val + 2) + (Fix) 10) = (char) rA4;
        rA4 = (Ptr) ((unsigned char) *(((char *) ((rSp + 4)->Val->Val + 2)) + (Fix) 10));
        *((char *) ((rSp + 4)->Val->Val + 2) + (Fix) 11) = (char) rA4;
        rA4 = rSp->Val;
        rA4 = (Ptr) (UFix) ((UFix) (rA4) >> 8);
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 255);
        *((char *) ((rSp + 4)->Val->Val + 2) + (Fix) 12) = (char) rA4;
        rA4 = (Ptr) ((unsigned char) *(((char *) ((rSp + 4)->Val->Val + 2)) + (Fix) 12));
        *((char *) ((rSp + 4)->Val->Val + 2) + (Fix) 13) = (char) rA4;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 255);
        *((char *) ((rSp + 4)->Val->Val + 2) + (Fix) 14) = (char) rA4;
        rA4 = (Ptr) ((unsigned char) *(((char *) ((rSp + 4)->Val->Val + 2)) + (Fix) 14));
        *((char *) ((rSp + 4)->Val->Val + 2) + (Fix) 15) = (char) rA4;
        (--rSp)->Val = ((Ptr) GLvirgraph_238);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 16;
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 16;
        rA4 = (Ptr) 5;
        {aRet = (rLit[97] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_238() {   /* 127 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 4)->Val;
        GIa2 = (Ptr) 16;
        GIa1 = (Ptr) 16;
        rSp += (Fix) 6;
        {aRet = (GYvirgraph[61] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_235() {   /* 118 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        GIa3 = rA1;
        GIa2 = rLit[10];
        rA1 = rLit[99];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirgraph_239() {   /* width-space */
   {    register Ptr aRet, *rLit;
        rLit = GYvirgraph;
        GIa3 = (Ptr) 1;
        GIa2 = (Ptr) 0;
        GIa1 = rLit[102]->Val;
        {aRet = (rLit[45] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_240() {   /* height-space */
   {    register Ptr aRet;
        {aRet = (GYvirgraph[42] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_241() {   /* x-base-space */
   {    register Ptr aRet, *rLit;
        rLit = GYvirgraph;
        GIa3 = (Ptr) 1;
        GIa2 = (Ptr) 0;
        GIa1 = rLit[102]->Val;
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_242() {   /* y-base-space */
   {    register Ptr aRet;
        {aRet = (GYvirgraph[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_243() {   /* make-cursor */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = rLit[64];
        GIa2 = (Ptr) 4;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        GIa2 = rLit[81];
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_245);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_245() {   /* call_virgraph_244 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_103;
        GIa3 = (rSp + 3)->Val;
        GIa2 = rLit[82];
        rA1 = rLit[64];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_103:
        GIa2 = rLit[81];
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_247);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirgraph_247() {   /* call_virgraph_246 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rBfloat;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat;
        if (rA1 != GInil)       goto l_105;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[82];
        rA1 = rLit[64];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 1)->Val < rBfloat)   goto l_107;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[74];
        rA1 = rLit[64];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if (rSp->Val < rBfloat) goto l_109;
        rA3 = rSp->Val;
        rA2 = rLit[74];
        rA1 = rLit[64];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 3)->Val;
        rA3 = ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val;
        if (rA4 == rA3) {aRet = ((Ptr) GLvirgraph_248); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirgraph_249);
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 2;
        {aRet = (rLit[103] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_249() {   /* 112 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYvirgraph; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[104];
        rA1 = rLit[64];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirgraph_248); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirgraph_248() {   /* 111 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if ((Fix) ((rSp + 1)->Val) < (Fix) 0)   goto l_115;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 0)->Val;
        if ((Fix) ((rSp + 1)->Val) < (Fix) (rA4))       goto l_114;
l_115:
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[33];
        rA1 = rLit[64];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_114:
        if ((Fix) (rSp->Val) < (Fix) 0) goto l_118;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 1)->Val;
        if ((Fix) (rSp->Val) < (Fix) (rA4))     goto l_117;
l_118:
        rA3 = rSp->Val;
        rA2 = rLit[33];
        rA1 = rLit[64];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_117:
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        if (rA4 != GInil)       goto l_120;
        rA3 = rA4;
        rA2 = rLit[11];
        rA1 = rLit[64];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_120:
        (--rSp)->Val = ((Ptr) GLvirgraph_250);
        (--rSp)->Val = rLit[64];
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
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_250() {   /* 121 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = ((rSp + 1)->Val->Val + 2 + (Fix) 20)->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLvirgraph_251);
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
        GIa4 = (Ptr) 4;
        {aRet = (GYvirgraph[103] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirgraph_251() {   /* 122 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_253);
        {aRet = (GYvirgraph[78] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_253() {   /* call_virgraph_252 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 1)->Val->Val + 2 + (Fix) 20)->Val = GIa1;
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_254() {   /* make-named-cursor */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rA1;
        if ((rA1 >= GIbstrg) && (rA1 < GIbsymb))        goto l_102;
        GIa3 = rA1;
        GIa2 = rLit[76];
        rA1 = rLit[65];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        (--rSp)->Val = rLit[9]->Val;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rNil;
        if ((rSp + 2)->Val != rNil)     {aRet = ((Ptr) GLvirgraph_255); goto lRet;}
        GIa3 = (rSp + 2)->Val;
        GIa2 = rLit[11];
        rA1 = rLit[65];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirgraph_255); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirgraph_255() {   /* 105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        GIa2 = (rLit[105]->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_257);
        {aRet = (rLit[106] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_257() {   /* call_virgraph_256 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != GInil)       goto l_106;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 1)->Val = rA4;
        if (rA4 != rLit[107]->Val)      {aRet = ((Ptr) GLvirgraph_255); goto lRet;}
        GIa3 = (rSp + 3)->Val;
        GIa2 = rLit[108];
        rA1 = rLit[65];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirgraph_255); goto lRet;}
l_106:
        (--rSp)->Val = ((Ptr) GLvirgraph_258);
        (--rSp)->Val = rLit[65];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 3;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_258() {   /* 109 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1;
        rSp->Val = rA1;
        if (rA1 != GInil)       goto l_111;
        GIa3 = (rSp + 3)->Val;
        GIa2 = rLit[109];
        rA1 = rLit[65];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_111:
        GIa2 = ((rSp + 2)->Val->Val + 2 + (Fix) 25)->Val;
        rA1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_260);
        {aRet = (rLit[110] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirgraph_260() {   /* call_virgraph_259 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_113;
        GIa2 = ((rSp + 2)->Val->Val + 2 + (Fix) 25)->Val;
        rA1 = (rSp + 3)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        ((rSp + 2)->Val->Val + 2 + (Fix) 25)->Val = rA1;
l_113:
        rA1 = rSp->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirgraph_261() {   /* cursor-name */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 < GIbfloat)     goto l_102;
        GIa3 = rA1;
        GIa2 = rLit[74];
        rA1 = rLit[66];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        if ((Fix) (rSp->Val) < (Fix) 0) {aRet = ((Ptr) GLvirgraph_262); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirgraph_264);
        {aRet = (rLit[44] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirgraph_264() {   /* call_virgraph_263 */
   {    register Ptr aRet;
        if ((Fix) (GIsp->Val) <= (Fix) (GIa1))  {aRet = ((Ptr) GLvirgraph_265); goto lRet;}
        {aRet = ((Ptr) GLvirgraph_262); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_262() {   /* 105 */
   {    register Ptr aRet, *rLit;
        rLit = GYvirgraph;
        GIa3 = GIsp->Val;
        GIa2 = rLit[111];
        GIa1 = rLit[66];
         GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirgraph_265); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_265() {   /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        (--rSp)->Val = rLit[9]->Val;
        if (rSp->Val != GInil)  goto l_107;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        GIa1 = rLit[66];
        GIsp = rSp; GIa1 = llrt_call_error ();
l_107:
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[66];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_266() {   /* current-cursor */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA4;
        if ((Fix) (rSp->Val) <= (Fix) 0)        goto l_101;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_102;
l_101:
        rA4 = rNil;
l_102:
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[9]->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA4;
        if ((Fix) ((rSp + 4)->Val) <= (Fix) 1)  goto l_104;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[10];
        rA1 = rLit[69];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        if ((rSp + 3)->Val != rNil)     goto l_106;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[11];
        rA1 = rLit[69];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        if ((Fix) ((rSp + 4)->Val) <= (Fix) 0)  {aRet = ((Ptr) GLvirgraph_267); goto lRet;}
        if (rSp->Val < GIbfloat)        goto l_110;
        rA3 = rSp->Val;
        rA2 = rLit[74];
        rA1 = rLit[69];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_110:
        if ((Fix) (rSp->Val) < (Fix) 0) {aRet = ((Ptr) GLvirgraph_268); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirgraph_270);
        {aRet = (rLit[44] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_270() {   /* call_virgraph_269 */
   {    register Ptr aRet;
        if ((Fix) (GIsp->Val) <= (Fix) (GIa1))  {aRet = ((Ptr) GLvirgraph_267); goto lRet;}
        {aRet = ((Ptr) GLvirgraph_268); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_268() {   /* 113 */
   {    register Ptr aRet, *rLit;
        rLit = GYvirgraph;
        GIa3 = GIsp->Val;
        GIa2 = rLit[111];
        GIa1 = rLit[69];
         GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirgraph_267); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_267() {   /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 8)->Val;
        (rSp + 2)->Val = rA4;
        if (rA4 == GInil)       {aRet = ((Ptr) GLvirgraph_271); goto lRet;}
        GIa2 = rLit[112];
        GIa1 = rA4;
        (--rSp)->Val = ((Ptr) GLvirgraph_273);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_273() {   /* call_virgraph_272 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != GInil)       goto l_117;
        GIa3 = (rSp + 2)->Val;
        GIa2 = rLit[113];
        rA1 = rLit[69];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_117:
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 11)->Val;
        (rSp + 1)->Val = rA4;
        if ((Ptr) 0 == (rSp + 4)->Val)  goto l_120;
        if (rA4 != rSp->Val)    goto l_118;
l_120:
        rA1 = rA4;
        {aRet = ((Ptr) GLvirgraph_274); goto lRet;}
l_118:
        (--rSp)->Val = ((Ptr) GLvirgraph_275);
        (--rSp)->Val = rLit[69];
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 3;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_275() {   /* 121 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 2)->Val->Val + 2 + (Fix) 11)->Val = rSp->Val;
        GIa1 = rSp->Val;
        {aRet = ((Ptr) GLvirgraph_274); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_271() {   /* 114 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = ((Ptr) GLvirgraph_274); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_274() {   /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 5;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_276() {   /* move-cursor */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rBfloat;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBfloat = GIbfloat;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[74];
        rA1 = rLit[67];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val < rBfloat)   goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[74];
        rA1 = rLit[67];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        (--rSp)->Val = rLit[9]->Val;
        if (rSp->Val != GInil)  goto l_106;
        rA3 = rSp->Val;
        rA2 = rLit[11];
        rA1 = rLit[67];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = ((Ptr) GXpopj3);
        (--rSp)->Val = rLit[67];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLvirgraph_277() {   /* make-line-style */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rBfloat;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBfloat = GIbfloat;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[74];
        rA1 = rLit[62];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val < rBfloat)   goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[74];
        rA1 = rLit[62];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        (--rSp)->Val = rLit[9]->Val;
        if (rSp->Val != GInil)  goto l_106;
        rA3 = rSp->Val;
        rA2 = rLit[11];
        rA1 = rLit[114];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = ((Ptr) GXpopj3);
        (--rSp)->Val = rLit[62];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLvirgraph_278() {   /* make-graph-env */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if ((Fix) (rA4) >= (Fix) 7)     goto l_101;
        rA1 = rLit[58];
        rA2 = (Ptr) 7;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 7));
        rA1 = rNil;
        goto l_nlist_virgraph_280;
l_nlist_virgraph_279:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virgraph_280:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virgraph_279;}
        (--rSp)->Val = rA1;
        if ((rSp + 7)->Val != rNil)     goto l_103;
        GIa3 = (rSp + 7)->Val;
        rA2 = rLit[11];
        rA1 = rLit[58];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        rA2 = rLit[115];
        rA1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_282);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_282() {   /* call_virgraph_281 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_106;
        GIa4 = ((rSp + 7)->Val->Val + 2 + (Fix) 6)->Val;
        if (GIa4 != rNil)       goto l_105;
l_106:
        GIa3 = (rSp + 7)->Val;
        GIa2 = rLit[116];
        rA1 = rLit[58];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 6)->Val >= GIbfloat) {aRet = ((Ptr) GLvirgraph_283); goto lRet;}
        if ((Fix) ((rSp + 6)->Val) < (Fix) 0)   {aRet = ((Ptr) GLvirgraph_283); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirgraph_285);
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirgraph_285() {   /* call_virgraph_284 */
   {    register Ptr aRet;
        if ((Fix) ((GIsp + 6)->Val) <= (Fix) (GIa1))    {aRet = ((Ptr) GLvirgraph_286); goto lRet;}
        {aRet = ((Ptr) GLvirgraph_283); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_283() {   /* 109 */
   {    register Ptr aRet, *rLit;
        rLit = GYvirgraph;
        GIa3 = (GIsp + 6)->Val;
        GIa2 = rLit[6];
        GIa1 = rLit[58];
         GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirgraph_286); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_286() {   /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((rSp + 5)->Val >= GIbfloat) {aRet = ((Ptr) GLvirgraph_287); goto lRet;}
        if ((Fix) ((rSp + 5)->Val) < (Fix) 0)   {aRet = ((Ptr) GLvirgraph_287); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirgraph_289);
        {aRet = (GYvirgraph[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_289() {   /* call_virgraph_288 */
   {    register Ptr aRet;
        if ((Fix) ((GIsp + 5)->Val) <= (Fix) (GIa1))    {aRet = ((Ptr) GLvirgraph_290); goto lRet;}
        {aRet = ((Ptr) GLvirgraph_287); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_287() {   /* 112 */
   {    register Ptr aRet, *rLit;
        rLit = GYvirgraph;
        GIa3 = (GIsp + 5)->Val;
        GIa2 = rLit[33];
        GIa1 = rLit[58];
         GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirgraph_290); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_290() {   /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((rSp + 4)->Val >= GIbfloat) {aRet = ((Ptr) GLvirgraph_291); goto lRet;}
        if ((Fix) ((rSp + 4)->Val) < (Fix) 0)   {aRet = ((Ptr) GLvirgraph_291); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirgraph_293);
        {aRet = (GYvirgraph[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_293() {   /* call_virgraph_292 */
   {    register Ptr aRet;
        if ((Fix) ((GIsp + 4)->Val) <= (Fix) (GIa1))    {aRet = ((Ptr) GLvirgraph_294); goto lRet;}
        {aRet = ((Ptr) GLvirgraph_291); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_291() {   /* 115 */
   {    register Ptr aRet, *rLit;
        rLit = GYvirgraph;
        GIa3 = (GIsp + 4)->Val;
        GIa2 = rLit[18];
        GIa1 = rLit[58];
         GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirgraph_294); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_294() {   /* 114 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1;
        if ((rSp + 3)->Val >= GIbfloat) goto l_118;
        if ((Fix) ((rSp + 3)->Val) < (Fix) 0)   goto l_118;
        if ((Fix) ((rSp + 3)->Val) <= (Fix) 16) goto l_117;
l_118:
        GIa3 = (rSp + 3)->Val;
        GIa2 = rLit[14];
        rA1 = rLit[58];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_117:
        GIa2 = rLit[36];
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_296);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirgraph_296() {   /* call_virgraph_295 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_121;
        GIa4 = ((rSp + 2)->Val->Val + 2 + (Fix) 5)->Val;
        if (GIa4 != rNil)       goto l_120;
l_121:
        GIa3 = (rSp + 2)->Val;
        GIa2 = rLit[37];
        rA1 = rLit[58];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_120:
        GIa2 = rLit[36];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_298);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirgraph_298() {   /* call_virgraph_297 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_124;
        GIa4 = ((rSp + 1)->Val->Val + 2 + (Fix) 5)->Val;
        if (GIa4 != rNil)       goto l_123;
l_124:
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[37];
        rA1 = rLit[58];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_123:
        (--rSp)->Val = ((Ptr) GLvirgraph_300);
        {aRet = (rLit[117] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirgraph_300() {   /* call_virgraph_299 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        (rA1->Val + 2 + (Fix) 0)->Val = (rSp + 7)->Val;
        (rA1->Val + 2 + (Fix) 1)->Val = (rSp + 6)->Val;
        (rA1->Val + 2 + (Fix) 2)->Val = (rSp + 5)->Val;
        (rA1->Val + 2 + (Fix) 3)->Val = (rSp + 4)->Val;
        (rA1->Val + 2 + (Fix) 4)->Val = (rSp + 3)->Val;
        (rA1->Val + 2 + (Fix) 5)->Val = (rSp + 2)->Val;
        if ((rSp + 1)->Val == GInil)    goto l_125;
        (--rSp)->Val = ((Ptr) GLvirgraph_301);
        (--rSp)->Val = rLit[58];
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        rA4 = (rSp + 5)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 4;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
l_125:
        (--rSp)->Val = ((Ptr) GLvirgraph_301);
        (--rSp)->Val = rLit[58];
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 3;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_301() {   /* 126 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = ((rSp + 8)->Val->Val + 2 + (Fix) 22)->Val;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_303);
        {aRet = (GYvirgraph[78] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_303() {   /* call_virgraph_302 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 8)->Val->Val + 2 + (Fix) 22)->Val = GIa1;
        GIa1 = rSp->Val;
        rSp += (Fix) 9;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_304() {   /* kill-graph-env */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[2];
        (--rSp)->Val = ((Ptr) GLvirgraph_306);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_306() {   /* call_virgraph_305 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[4];
        rA1 = rLit[59];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = (rSp->Val->Val + 2 + (Fix) 11)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA4;
        GIa2 = (rA4->Val + 2 + (Fix) 22)->Val;
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_308);
        {aRet = (rLit[118] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_308() {   /* call_virgraph_307 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 22)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirgraph_309);
        (--rSp)->Val = rLit[59];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 3;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_309() {   /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYvirgraph[119];
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_310() {   /* kill-stipple */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLvirgraph_311); goto lRet;}
        GIa2 = rLit[21];
        (--rSp)->Val = ((Ptr) GLvirgraph_313);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_313() {   /* call_virgraph_312 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYvirgraph; rA1 = GIa1;
        if (rA1 != GInil)       {aRet = ((Ptr) GLvirgraph_311); goto lRet;}
        GIa3 = GIsp->Val;
        GIa2 = rLit[22];
        rA1 = rLit[60];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirgraph_311); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirgraph_311() {   /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        (--rSp)->Val = rLit[9]->Val;
        if ((rSp + 1)->Val == GInil)    {aRet = ((Ptr) GLvirgraph_314); goto lRet;}
        GIa2 = rLit[21];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_316);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_316() {   /* call_virgraph_315 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYvirgraph; rA1 = GIa1;
        if (rA1 != GInil)       {aRet = ((Ptr) GLvirgraph_314); goto lRet;}
        GIa3 = (GIsp + 1)->Val;
        GIa2 = rLit[22];
        rA1 = rLit[60];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirgraph_314); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirgraph_314() {   /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        if (rSp->Val != GInil)  goto l_106;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        GIa1 = rLit[60];
        GIsp = rSp; GIa1 = llrt_call_error ();
l_106:
        (--rSp)->Val = ((Ptr) GLvirgraph_317);
        (--rSp)->Val = rLit[60];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_317() {   /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp->Val->Val + 2 + (Fix) 26)->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_319);
        {aRet = (GYvirgraph[118] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_319() {   /* call_virgraph_318 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp->Val->Val + 2 + (Fix) 26)->Val = GIa1;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_320() {   /* graph-env-set-clip */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        if (GIa4 == (Ptr) 5)    goto l_101;
        GIa1 = rLit[54];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        GIa2 = rLit[2];
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_322);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_322() {   /* call_virgraph_321 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rBfloat;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat;
        if (rA1 != GInil)       goto l_103;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[4];
        rA1 = rLit[54];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 3)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[74];
        rA1 = rLit[54];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 2)->Val < rBfloat)   goto l_107;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[74];
        rA1 = rLit[54];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if ((rSp + 1)->Val < rBfloat)   goto l_109;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[74];
        rA1 = rLit[54];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        if (rSp->Val < rBfloat) goto l_111;
        rA3 = rSp->Val;
        rA2 = rLit[74];
        rA1 = rLit[54];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 11)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_323);
        (--rSp)->Val = rLit[54];
        (--rSp)->Val = rA4;
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
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 7;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_323() {   /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 4)->Val->Val + 2 + (Fix) 6)->Val = (rSp + 3)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 7)->Val = (rSp + 2)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val = (rSp + 1)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 9)->Val = rSp->Val;
        GIa1 = GYvirgraph[119];
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_324() {   /* graph-env-set-clips */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        if (GIa4 == (Ptr) 6)    goto l_101;
        GIa1 = rLit[55];
        GIa2 = (Ptr) 6;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        GIa2 = rLit[2];
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_326);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_326() {   /* call_virgraph_325 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rBvect, rBstrg;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBvect = GIbvect; rBstrg = GIbstrg;
        if (rA1 != GInil)       goto l_103;
        rA3 = (rSp + 5)->Val;
        rA2 = rLit[4];
        rA1 = rLit[55];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 4)->Val < GIbfloat)  goto l_105;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[74];
        rA1 = rLit[55];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if (((rSp + 3)->Val >= rBvect) && ((rSp + 3)->Val < rBstrg))    goto l_107;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[120];
        rA1 = rLit[55];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if (((rSp + 2)->Val >= rBvect) && ((rSp + 2)->Val < rBstrg))    goto l_109;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[120];
        rA1 = rLit[55];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        if (((rSp + 1)->Val >= rBvect) && ((rSp + 1)->Val < rBstrg))    goto l_111;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[120];
        rA1 = rLit[55];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        if ((rSp->Val >= rBvect) && (rSp->Val < rBstrg))        goto l_113;
        rA3 = rSp->Val;
        rA2 = rLit[120];
        rA1 = rLit[55];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_113:
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 11)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_327);
        (--rSp)->Val = rLit[55];
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 8;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_327() {   /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYvirgraph[119];
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_328() {   /* current-graph-env */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa4;
        rA1 = rSp->Val;
        if (rA1 != (Ptr) 0)     {aRet = ((Ptr) GLvirgraph_329); goto lRet;}
        if (rLit[9]->Val != GInil)      goto l_104;
        GIa3 = rLit[9]->Val;
        GIa2 = rLit[11];
        rA1 = rLit[121];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_104:
        GIa2 = rLit[115];
        rA1 = rLit[9]->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_331);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirgraph_331() {   /* call_virgraph_330 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        rA4 = (rLit[9]->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_106;
l_107:
        GIa3 = rLit[9]->Val;
        GIa2 = rLit[116];
        rA1 = rLit[121];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        rA1 = (rLit[9]->Val->Val + 2 + (Fix) 9)->Val;
        {rA4 = (rSp++)->Val; rSp += (Fix) rA4; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_329() {   /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        if (GIa1 != (Ptr) 1)    {aRet = ((Ptr) GLvirgraph_332); goto lRet;}
        GIa4 = rSp->Val;
        GIa1 = (rSp + (Fix) (GIa4))->Val;
        GIa2 = rLit[2];
        (--rSp)->Val = ((Ptr) GLvirgraph_334);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_334() {   /* call_virgraph_333 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        if (rA1 != GInil)       goto l_110;
        rA4 = rSp->Val;
        rA3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[4];
        rA1 = rLit[121];
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_110:
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        rA4 = (rA4->Val + 2 + (Fix) 11)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rA3 = (rSp + (Fix) (rA4))->Val;
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 9)->Val = rA3;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        rLit[122]->Val = rA4;
        rA1 = rA4;
        {rA4 = (rSp++)->Val; rSp += (Fix) rA4; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_332() {   /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        GIa3 = rSp->Val;
        GIa2 = rLit[10];
        GIa1 = rLit[121];
        GIsp = rSp; GIa1 = llrt_call_error ();
l_101:
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_335() {   /* graph-env-change-values */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        if (GIa4 == (Ptr) 7)    goto l_101;
        GIa1 = rLit[56];
        GIa2 = (Ptr) 7;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        GIa2 = rLit[2];
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_337);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_337() {   /* call_virgraph_336 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != GInil)       goto l_103;
        GIa3 = (rSp + 6)->Val;
        GIa2 = rLit[4];
        rA1 = rLit[56];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 11)->Val;
        (--rSp)->Val = ((Ptr) GXpopj7);
        (--rSp)->Val = rLit[56];
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 9;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_338() {   /* graph-env-subwindow-mode */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[2];
        (--rSp)->Val = ((Ptr) GLvirgraph_340);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_340() {   /* call_virgraph_339 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        rA3 = rSp->Val;
        rA2 = rLit[4];
        rA1 = rLit[57];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val < GIbfloat)  goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[74];
        rA1 = rLit[57];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA4 = (rSp->Val->Val + 2 + (Fix) 11)->Val;
        (--rSp)->Val = rA4;
        if (rA4 != rNil)        goto l_106;
        rA3 = rA4;
        rA2 = rLit[11];
        rA1 = rLit[57];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        rA2 = rLit[115];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_342);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_342() {   /* call_virgraph_341 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_109;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_108;
l_109:
        GIa3 = rSp->Val;
        GIa2 = rLit[116];
        rA1 = rLit[57];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_108:
        (--rSp)->Val = ((Ptr) GLvirgraph_343);
        (--rSp)->Val = rLit[57];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_343() {   /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYvirgraph[119];
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_344() {   /* display-get-font-names */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if ((Fix) (rA4) >= (Fix) 2)     goto l_101;
        rA1 = rLit[123];
        rA2 = (Ptr) 2;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 2));
        rA1 = rNil;
        goto l_nlist_virgraph_346;
l_nlist_virgraph_345:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virgraph_346:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virgraph_345;}
        (--rSp)->Val = rA1;
        if ((rSp + 2)->Val != rNil)     goto l_103;
        GIa3 = (rSp + 2)->Val;
        rA2 = rLit[11];
        rA1 = rLit[123];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        rA2 = rLit[115];
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_348);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_348() {   /* call_virgraph_347 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_106;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_105;
l_106:
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[116];
        rA1 = rLit[123];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 1)->Val < GIbfloat)  goto l_108;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[74];
        rA1 = rLit[123];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_108:
        if (rSp->Val == rNil)   goto l_109;
        rA4 = rSp->Val;
        rA4 = rA4->Val;
        goto l_110;
l_109:
        rA4 = rLit[124];
l_110:
        (--rSp)->Val = rA4;
        if ((rA4 >= GIbstrg) && (rA4 < GIbsymb))        goto l_112;
        rA3 = rA4;
        rA2 = rLit[76];
        rA1 = rLit[123];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_112:
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rLit[52];
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
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_349() {   /* display-get-font-info */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if ((Fix) (rA4) >= (Fix) 2)     goto l_101;
        rA1 = rLit[125];
        rA2 = (Ptr) 2;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 2));
        rA1 = rNil;
        goto l_nlist_virgraph_351;
l_nlist_virgraph_350:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virgraph_351:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virgraph_350;}
        (--rSp)->Val = rA1;
        if ((rSp + 2)->Val != rNil)     goto l_103;
        GIa3 = (rSp + 2)->Val;
        rA2 = rLit[11];
        rA1 = rLit[125];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        rA2 = rLit[115];
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLvirgraph_353);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_353() {   /* call_virgraph_352 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_106;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_105;
l_106:
        GIa3 = (rSp + 2)->Val;
        GIa2 = rLit[116];
        rA1 = rLit[125];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if (((rSp + 1)->Val >= GIbstrg) && ((rSp + 1)->Val < GIbsymb))  goto l_108;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[76];
        rA1 = rLit[125];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_108:
        rA4 = rSp->Val;
        rA4 = rA4->Val;
        if (rA4 != rNil)        {aRet = ((Ptr) GLvirgraph_354); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirgraph_356);
        {aRet = (rLit[126] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_356() {   /* call_virgraph_355 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLvirgraph_354); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirgraph_354() {   /* 109 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirgraph; rSp = GIsp; rA4 = GIa4;
        rSp->Val = rA4;
        GIa2 = rLit[127];
        GIa1 = rA4;
        (--rSp)->Val = ((Ptr) GLvirgraph_358);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirgraph_358() {   /* call_virgraph_357 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirgraph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_111;
        GIa3 = rSp->Val;
        GIa2 = rLit[128];
        rA1 = rLit[125];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        (--rSp)->Val = ((Ptr) GLvirgraph_359);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rNil;
        rA4 = ((rSp + 4)->Val->Val + 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = (rLit[129] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirgraph_359() {   /* 112 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirgraph; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj3);
        (--rSp)->Val = rLit[53];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDvirgraph_360() {   /* trace graph-env-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,0,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_361() {   /* trace current-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,7,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_362() {   /* trace #:display:graph-env-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,132,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_363() {   /* trace #:display:current-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,133,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_364() {   /* trace graph-env-mode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,13,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_365() {   /* trace current-mode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,15,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_366() {   /* trace #:display:graph-env-mode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,134,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_367() {   /* trace #:display:current-mode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,135,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_368() {   /* trace graph-env-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,16,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_369() {   /* trace current-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,19,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_370() {   /* trace #:display:graph-env-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,136,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_371() {   /* trace #:display:current-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,137,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_372() {   /* trace graph-env-stipple */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,20,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_373() {   /* trace current-stipple */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,23,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_374() {   /* trace #:display:graph-env-stipple */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,138,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_375() {   /* trace #:display:current-stipple */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,139,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_376() {   /* trace graph-env-fill-mode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,24,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_377() {   /* trace current-fill-mode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,30,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_378() {   /* trace #:display:graph-env-fill-mode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,140,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_379() {   /* trace #:display:current-fill-mode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,141,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_380() {   /* trace graph-env-line-style */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,31,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_381() {   /* trace current-line-style */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,34,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_382() {   /* trace #:display:graph-env-line-style */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,142,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_383() {   /* trace #:display:current-line-style */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,143,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_384() {   /* trace graph-env-foreground */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,35,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_385() {   /* trace current-foreground */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,38,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_386() {   /* trace #:display:graph-env-foreground */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,144,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_387() {   /* trace #:display:current-foreground */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,145,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_388() {   /* trace graph-env-background */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,39,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_389() {   /* trace current-background */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,40,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_390() {   /* trace #:display:graph-env-background */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,146,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_391() {   /* trace #:display:current-background */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,147,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_392() {   /* trace clear-graph-env */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,41,130,148);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_393() {   /* trace #:display:clear-graph-env */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,149,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_394() {   /* trace font-height */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,42,130,148);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_395() {   /* trace #:display:font-height */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,150,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_396() {   /* trace font-ascent */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,43,130,148);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_397() {   /* trace #:display:font-ascent */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,151,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_398() {   /* trace font-max */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,5,130,148);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_399() {   /* trace #:display:font-max */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,152,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_400() {   /* trace line-style-max */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,32,130,148);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_401() {   /* trace #:display:line-style-max */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,153,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_402() {   /* trace pattern-max */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,17,130,148);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_403() {   /* trace #:display:pattern-max */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,154,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_404() {   /* trace cursor-max */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,44,130,148);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_405() {   /* trace #:display:cursor-max */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,155,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_406() {   /* trace width-substring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,45,130,156);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_407() {   /* trace #:display:width-substring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,157,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_408() {   /* trace height-substring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,46,130,156);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_409() {   /* trace #:display:height-substring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,158,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_410() {   /* trace x-base-substring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,47,130,156);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_411() {   /* trace #:display:x-base-substring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,159,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_412() {   /* trace y-base-substring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,48,130,156);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_413() {   /* trace #:display:y-base-substring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,160,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_414() {   /* trace x-inc-substring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,49,130,156);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_415() {   /* trace #:display:x-inc-substring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,161,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_416() {   /* trace y-inc-substring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,50,130,156);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_417() {   /* trace #:display:y-inc-substring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,162,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_418() {   /* trace #:display:load-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,163,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_419() {   /* trace #:display:get-font-names */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,164,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_420() {   /* trace #:display:get-font-info */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,165,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_421() {   /* trace #:display:graph-env-set-clip */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,166,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_422() {   /* trace #:display:graph-env-set-clips */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,167,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_423() {   /* trace #:display:graph-env-change-values */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,168,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_424() {   /* trace #:display:graph-env-subwindow-mode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,169,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_425() {   /* trace #:display:make-graph-env */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,170,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_426() {   /* trace #:display:kill-graph-env */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,171,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_427() {   /* trace #:display:kill-stipple */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,172,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_428() {   /* trace #:display:create-stipple */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,100,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_429() {   /* trace #:display:make-line-style */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,173,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_430() {   /* trace #:display:make-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,174,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_431() {   /* trace #:display:make-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,175,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_432() {   /* trace #:display:make-named-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,176,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_433() {   /* trace #:display:cursor-name */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,177,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_434() {   /* trace #:display:move-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,178,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_435() {   /* trace #:display:current-clip */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,179,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_436() {   /* trace #:display:current-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,180,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_437() {   /* trace current-clip */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,68,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_438() {   /* trace load-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,51,130,181);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_439() {   /* trace font-name */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,79,130,181);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_440() {   /* trace make-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,63,130,181);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_441() {   /* trace create-stipple */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,61,130,156);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_442() {   /* trace make-stipple-bitmap */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,86,130,181);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_443() {   /* trace make-stipple */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,92,130,181);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_444() {   /* trace make-stipple-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,182,130,183);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_445() {   /* trace create-stipple16 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,101,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_446() {   /* trace width-space */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,184,130,148);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_447() {   /* trace height-space */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,185,130,148);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_448() {   /* trace x-base-space */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,186,130,148);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_449() {   /* trace y-base-space */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,187,130,148);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_450() {   /* trace make-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,64,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_451() {   /* trace make-named-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,65,130,181);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_452() {   /* trace cursor-name */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,66,130,181);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_453() {   /* trace current-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,69,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_454() {   /* trace move-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,67,130,183);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_455() {   /* trace make-line-style */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,62,130,183);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_456() {   /* trace make-graph-env */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,58,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_457() {   /* trace kill-graph-env */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,59,130,181);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_458() {   /* trace kill-stipple */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,60,130,181);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_459() {   /* trace graph-env-set-clip */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,54,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_460() {   /* trace graph-env-set-clips */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,55,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_461() {   /* trace current-graph-env */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,121,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_462() {   /* trace graph-env-change-values */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,56,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_463() {   /* trace graph-env-subwindow-mode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,57,130,183);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_464() {   /* trace display-get-font-names */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,123,130,131);
  lRet:  return (aRet);}}

static Ptr GDvirgraph_465() {   /* trace display-get-font-info */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirgraph,125,130,131);
  lRet:  return (aRet);}}

