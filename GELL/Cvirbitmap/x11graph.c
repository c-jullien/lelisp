/* GELL 15.26: source file for the module: "x11graph" */
/*             translation done:           "Tue Aug  24 93 10:48:26 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "x11graph.h" 

static Ptr GLx11graph_1() {     /* #:display:x11:current-font */
   {    register Ptr aRet, rSp, rA1, rA2, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        (--rSp)->Val = rA2;
        rA4 = (rA1->Val + 2 + (Fix) 36)->Val;
        rA4 = (rA4->Val + 2 + (Fix) (GIa3))->Val;
        (--rSp)->Val = rA4;
        rA1 = (rA1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        GIa3 = rA4;
        (--rSp)->Val = ((Ptr) GLx11graph_3);
        {aRet = (GYx11graph[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_3() {     /* call_x11graph_2 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11graph_5);
        {aRet = (GYx11graph[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11graph_5() {     /* call_x11graph_4 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 1)->Val->Val + 2 + (Fix) 13)->Val = GIa1;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11graph_7);
        {aRet = (GYx11graph[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11graph_7() {     /* call_x11graph_6 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 1)->Val->Val + 2 + (Fix) 14)->Val = GIa1;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11graph_8() {     /* #:display:x11:current-line-style */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rA1->Val + 2 + (Fix) 33)->Val;
        rA4 = (rA4->Val + 2 + (Fix) (GIa3))->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopj1);
        rA4 = (rA1->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = (GIa2->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = (GYx11graph[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_9() {     /* #:display:x11:current-pattern */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA1 = (rA1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        rA3 = (rSp->Val->Val + 2 + (Fix) 34)->Val;
        rA3 = (rA3->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        (--rSp)->Val = ((Ptr) GLx11graph_11);
        {aRet = (GYx11graph[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLx11graph_11() {    /* call_x11graph_10 */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYx11graph; rSp = GIsp; rA2 = GIa2;
        GIa4 = ((rSp + 1)->Val->Val + 2 + (Fix) 16)->Val;
        if (GIa4 != rLit[5])    goto l_101;
        GIa1 = (rSp->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 1)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        if ((Fix) ((rSp + 2)->Val) > (Fix) 1)   goto l_103;
        GIa3 = (Ptr) 0;
        goto l_104;
l_103:
        GIa3 = (Ptr) 1;
l_104:
        rSp += (Fix) 3;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
l_101:
        GIa1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11graph_12() {    /* #:display:x11:current-mode */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA1;
        rA1 = (rA1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        rA3 = (rSp->Val->Val + 2 + (Fix) 37)->Val;
        rA3 = (rA3->Val + 2 + (Fix) ((rSp + 1)->Val))->Val;
        rSp += (Fix) 2;
        {aRet = (GYx11graph[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLx11graph_13() {    /* #:display:x11:current-foreground */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        GIa3 = (GIa3->Val + 2 + (Fix) 6)->Val;
        {aRet = (GYx11graph[8] + 2)->Val; goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLx11graph_14() {    /* #:display:x11:current-background */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA1 = (rA1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = ((Ptr) GLx11graph_16);
        {aRet = (GYx11graph[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLx11graph_16() {    /* call_x11graph_15 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        GIa1 = (rSp->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = (rSp->Val->Val + 2 + (Fix) 11)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        GIa3 = ((rSp + 2)->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = ((Ptr) GLx11graph_18);
        {aRet = (GYx11graph[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11graph_18() {    /* call_x11graph_17 */
   {    register Ptr aRet, *rLit, rSp, rA2, rA3, rA4, rNil;
        rLit = GYx11graph; rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        goto l_101;
        rA3 = (rA4->Val + 2 + (Fix) 7)->Val;
        if (rA3 != (rSp + 1)->Val)      goto l_101;
        rA3 = (rSp->Val->Val + 2 + (Fix) 10)->Val;
        if (rA4 == rA3) goto l_101;
        rA3 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA3 != rLit[10])    goto l_101;
        GIa1 = (rSp->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        rA3 = ((rSp + 2)->Val->Val + 2 + (Fix) 6)->Val;
        rSp += (Fix) 3;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
l_101:
        GIa1 = rNil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_19() {    /* #:display:x11:line-style-max */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (rA1->Val + 2 + (Fix) 33)->Val;
        rA1 = (rA1->Val + 1)->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLx11graph_20() {    /* #:display:x11:pattern-max */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (rA1->Val + 2 + (Fix) 34)->Val;
        rA1 = (rA1->Val + 1)->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLx11graph_21() {    /* #:display:x11:make-pattern */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 2 + (Fix) 34)->Val;
        rA4 = (rA4->Val + 1)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLx11graph_22);
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        GIa2 = (Ptr) 0;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLx11graph_24);
        {aRet = (GYx11graph[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_24() {    /* call_x11graph_23 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (Ptr) 0;
        GIa3 = ((rSp + 5)->Val->Val + 2 + (Fix) 34)->Val;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 5;
        {aRet = (GYx11graph[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11graph_22() {    /* 101 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 34)->Val = GIa1;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 34)->Val;
        rA3 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (rA4->Val + 2 + (Fix) (rSp->Val))->Val = rA3;
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_25() {    /* #:display:x11:make-line-style */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa2 = (Ptr) 0;
        GIa1 = (Ptr) 2;
        (--rSp)->Val = ((Ptr) GLx11graph_27);
        {aRet = (GYx11graph[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11graph_27() {    /* call_x11graph_26 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rSp->Val->Val + 2 + (Fix) 33)->Val;
        rA4 = (rA4->Val + 1)->Val;
        (--rSp)->Val = GInil;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (rA1->Val + 2 + (Fix) 0)->Val = (rSp + 5)->Val;
        (rA1->Val + 2 + (Fix) 1)->Val = (rSp + 6)->Val;
        {aRet = ((Ptr) GLx11graph_28); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_28() {    /* 101 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        if ((Fix) ((rSp + 2)->Val) >= (Fix) ((rSp + 1)->Val))   {aRet = ((Ptr) GLx11graph_29); goto lRet;}
        rA2 = ((rSp + 4)->Val->Val + 2 + (Fix) 33)->Val;
        rA2 = (rA2->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11graph_31);
        {aRet = (GYx11graph[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11graph_31() {    /* call_x11graph_30 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      goto l_104;
        (rSp + 3)->Val = (rSp + 2)->Val;
l_104:
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLx11graph_33);
        {aRet = (GYx11graph[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11graph_33() {    /* call_x11graph_32 */
   {    register Ptr aRet;
        (GIsp + 2)->Val = GIa1;
        {aRet = ((Ptr) GLx11graph_28); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11graph_29() {    /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((rSp + 3)->Val == GInil)    goto l_105;
        GIa1 = (rSp + 3)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        (--rSp)->Val = ((Ptr) GLx11graph_34);
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        GIa2 = (Ptr) 0;
        GIa1 = rA4;
        (--rSp)->Val = ((Ptr) GLx11graph_36);
        {aRet = (GYx11graph[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_36() {    /* call_x11graph_35 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (Ptr) 0;
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 33)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (GYx11graph[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_34() {    /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 4)->Val->Val + 2 + (Fix) 33)->Val = GIa1;
        GIa4 = ((rSp + 4)->Val->Val + 2 + (Fix) 33)->Val;
        (GIa4->Val + 2 + (Fix) ((rSp + 1)->Val))->Val = rSp->Val;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11graph_37() {    /* #:display:x11:font-max */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (rA1->Val + 2 + (Fix) 36)->Val;
        rA1 = (rA1->Val + 1)->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLx11graph_38() {    /* #:display:x11:load-font */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        rA1 = (rA1->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = ((Ptr) GLx11graph_40);
        {aRet = (GYx11graph[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11graph_40() {    /* call_x11graph_39 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYx11graph; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rSp->Val->Val + 2 + (Fix) 36)->Val;
        rA4 = (rA4->Val + 1)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        if ((Ptr) 0 != rA1)     goto l_102;
        GIa3 = (rSp + 3)->Val;
        GIa2 = rLit[17];
        rA1 = rLit[18];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        (--rSp)->Val = ((Ptr) GLx11graph_41);
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        GIa2 = (Ptr) 0;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLx11graph_43);
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_43() {    /* call_x11graph_42 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (Ptr) 0;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 36)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (GYx11graph[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_41() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 2)->Val->Val + 2 + (Fix) 36)->Val = GIa1;
        GIa4 = ((rSp + 2)->Val->Val + 2 + (Fix) 36)->Val;
        (GIa4->Val + 2 + (Fix) ((rSp + 1)->Val))->Val = rSp->Val;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11graph_44() {    /* #:display:x11:width-substring */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11graph; rSp = GIsp; rA4 = GIa4;
        if (rA4 == (Ptr) 5)     goto l_101;
        GIa1 = rLit[19];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 2)->Val->Val + 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) ((rSp + 2)->Val)));
        if ((Fix) ((rSp + 2)->Val) <= (Fix) (rSp->Val)) goto l_102;
        GIa1 = (Ptr) 0;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
l_102:
        if ((Fix) ((rSp + 1)->Val) <= (Fix) (rA4))      goto l_105;
        (rSp + 1)->Val = rA4;
l_105:
        (--rSp)->Val = ((Ptr) GXpopj6);
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 36)->Val;
        GIa3 = ((rSp + 5)->Val->Val + 2 + (Fix) 0)->Val;
        rA4 = (rA4->Val + 2 + (Fix) (GIa3))->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (rLit[21] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_45() {    /* #:display:x11:height-substring */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11graph; rSp = GIsp; rA4 = GIa4;
        if (rA4 == (Ptr) 5)     goto l_101;
        GIa1 = rLit[22];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 2)->Val->Val + 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) ((rSp + 2)->Val)));
        if ((Fix) ((rSp + 2)->Val) < (Fix) (rSp->Val))  goto l_102;
        (rSp + 3)->Val = rLit[23]->Val;
        (rSp + 2)->Val = (Ptr) 0;
        (rSp + 1)->Val = (Ptr) 1;
        goto l_103;
l_102:
        if ((Fix) ((rSp + 1)->Val) <= (Fix) (rA4))      goto l_103;
        (rSp + 1)->Val = rA4;
l_103:
        (--rSp)->Val = ((Ptr) GXpopj6);
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 36)->Val;
        GIa3 = ((rSp + 5)->Val->Val + 2 + (Fix) 0)->Val;
        rA4 = (rA4->Val + 2 + (Fix) (GIa3))->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (rLit[24] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_46() {    /* #:display:x11:x-base-substring */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11graph; rSp = GIsp; rA4 = GIa4;
        if (rA4 == (Ptr) 5)     goto l_101;
        GIa1 = rLit[25];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 2)->Val->Val + 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) ((rSp + 2)->Val)));
        if ((Fix) ((rSp + 2)->Val) < (Fix) (rSp->Val))  goto l_102;
        (rSp + 3)->Val = rLit[23]->Val;
        (rSp + 2)->Val = (Ptr) 0;
        (rSp + 1)->Val = (Ptr) 1;
        goto l_103;
l_102:
        if ((Fix) ((rSp + 1)->Val) <= (Fix) (rA4))      goto l_103;
        (rSp + 1)->Val = rA4;
l_103:
        (--rSp)->Val = ((Ptr) GXpopj6);
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 36)->Val;
        GIa3 = ((rSp + 5)->Val->Val + 2 + (Fix) 0)->Val;
        rA4 = (rA4->Val + 2 + (Fix) (GIa3))->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (rLit[26] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_47() {    /* #:display:x11:y-base-substring */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11graph; rSp = GIsp; rA4 = GIa4;
        if (rA4 == (Ptr) 5)     goto l_101;
        GIa1 = rLit[27];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 2)->Val->Val + 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) ((rSp + 2)->Val)));
        if ((Fix) ((rSp + 2)->Val) < (Fix) (rSp->Val))  goto l_102;
        (rSp + 3)->Val = rLit[23]->Val;
        (rSp + 2)->Val = (Ptr) 0;
        (rSp + 1)->Val = (Ptr) 1;
        goto l_103;
l_102:
        if ((Fix) ((rSp + 1)->Val) <= (Fix) (rA4))      goto l_103;
        (rSp + 1)->Val = rA4;
l_103:
        (--rSp)->Val = ((Ptr) GXpopj6);
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 36)->Val;
        GIa3 = ((rSp + 5)->Val->Val + 2 + (Fix) 0)->Val;
        rA4 = (rA4->Val + 2 + (Fix) (GIa3))->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_48() {    /* #:display:x11:x-inc-substring */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11graph; rSp = GIsp;
        if (GIa4 == (Ptr) 5)    goto l_101;
        GIa1 = rLit[29];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
l_101:
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
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 5;
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11graph_49() {    /* #:display:x11:y-inc-substring */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11graph; rSp = GIsp;
        if (GIa4 == (Ptr) 5)    goto l_101;
        GIa1 = rLit[30];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
l_101:
        GIa1 = (Ptr) 0;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11graph_50() {    /* #:display:x11:cursor-max */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (rA1->Val + 2 + (Fix) 35)->Val;
        rA1 = (rA1->Val + 1)->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLx11graph_51() {    /* #:display:x11:make-cursor */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11graph; rSp = GIsp; rA4 = GIa4;
        if (rA4 == (Ptr) 5)     goto l_101;
        GIa1 = rLit[31];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GLx11graph_52);
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 2)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = (rLit[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_52() {    /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11graph_53);
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 2)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = (GYx11graph[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_53() {    /* 103 */
   {    register Ptr aRet, rSp, rA2, rA3, rA4;
        rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 9)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 4)->Val;
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 9)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        (--rSp)->Val = ((Ptr) GLx11graph_54);
        rA2 = ((rSp + 6)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA2;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GIa1;
        rA2 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA2;
        rA2 = (rA4->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA2;
        rA2 = (rA4->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA2;
        rA2 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA2;
        rA2 = (rA3->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA2;
        rA2 = (rA3->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA2;
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 11;
        {aRet = (GYx11graph[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_54() {    /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp + 5)->Val;
        rSp += (Fix) 6;
        {aRet = ((Ptr) GLx11graph_55); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11graph_56() {    /* #:display:x11:make-named-cursor */
   {    register Ptr aRet, rSp, rA1, rA2, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 2 + (Fix) 64)->Val;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA2;
        rA2 = rA4;
        rA1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLx11graph_58);
        {aRet = (GYx11graph[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_58() {    /* call_x11graph_57 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11graph; rSp = GIsp;
        if (GIa1 != GInil)      {rSp += (Fix) 4; aRet = (rSp++)->Val; goto lRet;}
        GIa1 = ((rSp + 2)->Val->Val + 2 + (Fix) 21)->Val;
        GIa2 = (rLit[35]->Val->Val + 2 + (Fix) ((rSp + 3)->Val))->Val;
        (--rSp)->Val = ((Ptr) GLx11graph_60);
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11graph_60() {    /* call_x11graph_59 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLx11graph_61); goto lRet;}
        GIa2 = rA1;
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLx11graph_63);
        {aRet = ((Ptr) GLx11graph_55); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11graph_63() {    /* call_x11graph_62 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 1)->Val = rA1;
        GIa3 = rSp->Val;
        GIa2 = rA1;
        rA1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLx11graph_65);
        {aRet = (GYx11graph[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11graph_65() {    /* call_x11graph_64 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 2)->Val->Val + 2 + (Fix) 64)->Val = GIa1;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11graph_61() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11graph_66() {    /* #:display:x11:cursor-name */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        (--rSp)->Val = rA2;
        rA2 = (rA1->Val + 2 + (Fix) 64)->Val;
        rA1 = (rSp++)->Val;
        rA1 = llrt_call_rassq (rA1, rA2, GIbcons, rNil);
        (--rSp)->Val = rA1->Val;
        if (rSp->Val == rNil)   goto l_101;
        rA1 = (GYx11graph[38]->Val->Val + 2 + (Fix) (rSp->Val))->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLx11graph_55() {    /* #:display:x11:add-xcursor */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 2 + (Fix) 35)->Val;
        rA4 = (rA4->Val + 1)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLx11graph_67);
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        GIa2 = (Ptr) 0;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLx11graph_69);
        {aRet = (GYx11graph[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_69() {    /* call_x11graph_68 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (Ptr) 0;
        GIa3 = ((rSp + 5)->Val->Val + 2 + (Fix) 35)->Val;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 5;
        {aRet = (GYx11graph[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11graph_67() {    /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 35)->Val = GIa1;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 35)->Val;
        (rA4->Val + 2 + (Fix) (rSp->Val))->Val = (rSp + 2)->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_70() {    /* #:display:x11:current-cursor */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rNil = GInil;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        GIa4 = (rA1->Val + 2 + (Fix) 8)->Val;
        if (GIa4 == rNil)       goto l_101;
        rA1 = (rA1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        rA3 = (rSp->Val->Val + 2 + (Fix) 35)->Val;
        rA3 = (rA3->Val + 2 + (Fix) ((rSp + 1)->Val))->Val;
        rSp += (Fix) 2;
        {aRet = (GYx11graph[39] + 2)->Val; goto lRet;}
l_101:
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLx11graph_71() {    /* #:display:x11:move-cursor */
   {    register Ptr aRet;
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        {aRet = (GYx11graph[40] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11graph_72() {    /* #:display:x11:font-ascent */
   {    register Ptr aRet;
        GIa1 = (GIa2->Val + 2 + (Fix) 13)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11graph_73() {    /* #:display:x11:font-height */
   {    register Ptr aRet;
        GIa1 = (GIa2->Val + 2 + (Fix) 14)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11graph_74() {    /* #:display:x11:current-stipple */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYx11graph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA3 != rNil)        goto l_101;
        rA4 = (rA2->Val + 2 + (Fix) 16)->Val;
        if (rA4 == rLit[41])    goto l_103;
        if (rA4 == rLit[5])     goto l_103;
        rA1 = (rA1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        rA3 = (Ptr) 0;
        rSp += (Fix) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
l_103:
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (rA1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 2)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11graph_76);
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_76() {    /* call_x11graph_75 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYx11graph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA1 = ((rSp + 1)->Val->Val + 2 + (Fix) 16)->Val;
        if (rA1 != rLit[43])    goto l_106;
        rA1 = (rSp->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 1)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        GIa3 = (Ptr) 3;
        rSp += (Fix) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
l_106:
        if (rA1 != rLit[44])    goto l_107;
        rA1 = (rSp->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 1)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        GIa3 = (Ptr) 2;
        rSp += (Fix) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
l_107:
        rA1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLx11graph_77() {    /* #:display:x11:current-fill-mode */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYx11graph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA3 != rNil)        goto l_102;
        (rSp + 2)->Val = rLit[41];
l_102:
        rA4 = (rA2->Val + 2 + (Fix) 15)->Val;
        if (rA4 != rNil)        goto l_105;
        if ((rSp + 2)->Val == rLit[41]) goto l_105;
        if ((rSp + 2)->Val != rLit[5])  goto l_103;
l_105:
        rA1 = (rSp + 2)->Val;
        if (rA1 != rLit[41])    goto l_107;
        rA4 = (Ptr) 0;
        goto l_106;
l_107:
        if (rA1 != rLit[5])     goto l_108;
        rA4 = (rA2->Val + 2 + (Fix) 2)->Val;
        if ((Fix) (rA4) > (Fix) 1)      goto l_109;
        rA4 = (Ptr) 0;
        goto l_106;
l_109:
        rA4 = (Ptr) 1;
        goto l_106;
l_108:
        if (rA1 != rLit[43])    goto l_111;
        rA4 = (Ptr) 3;
        goto l_106;
l_111:
        if (rA1 != rLit[44])    goto l_112;
        rA4 = (Ptr) 2;
        goto l_106;
l_112:
        rA3 = rA1;
        rA2 = rLit[45];
        rA1 = rLit[46];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
        rA4 = rA1;
l_106:
        rA1 = (rSp->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 1)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        rA3 = rA4;
        rSp += (Fix) 3;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
l_103:
        rA3 = rA2;
        rA2 = rLit[47];
        rA1 = rLit[46];
        rSp += (Fix) 3;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_78() {    /* #:display:x11:make-graph-env */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYx11graph; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if ((Fix) (rA4) >= (Fix) 2)     goto l_101;
        rA1 = rLit[48];
        rA2 = (Ptr) 2;
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 2));
        rA1 = rNil;
        goto l_nlist_x11graph_80;
l_nlist_x11graph_79:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_x11graph_80:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_x11graph_79;}
        rA4 = rA1->Val;
        if (rA4 != rNil)        goto l_102;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 10)->Val;
l_102:
        rA4 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        ((rSp + 1)->Val->Val + 2 + (Fix) 11)->Val = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLx11graph_82);
        {aRet = (rLit[49] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_82() {    /* call_x11graph_81 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        ((rSp + 1)->Val->Val + 2 + (Fix) 12)->Val = rA1;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 36)->Val;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 0)->Val;
        rA4 = (rA4->Val + 2 + (Fix) (rA3))->Val;
        (--rSp)->Val = rA4;
        rA3 = ((rSp + 3)->Val->Val + 2 + (Fix) 33)->Val;
        rA2 = ((rSp + 2)->Val->Val + 2 + (Fix) 1)->Val;
        rA3 = (rA3->Val + 2 + (Fix) (rA2))->Val;
        rA2 = ((rSp + 3)->Val->Val + 2 + (Fix) 34)->Val;
        rA1 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        rA2 = (rA2->Val + 2 + (Fix) (rA1))->Val;
        rA1 = ((rSp + 3)->Val->Val + 2 + (Fix) 37)->Val;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val;
        rA1 = (rA1->Val + 2 + (Fix) (rA4))->Val;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLx11graph_83);
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA4 = ((rSp + 11)->Val->Val + 2 + (Fix) 4)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 12)->Val->Val + 2 + (Fix) 5)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 14)->Val->Val + 2 + (Fix) 52)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 10;
        {aRet = (GYx11graph[50] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_83() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 1)->Val = GIa1;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11graph_85);
        {aRet = (GYx11graph[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11graph_85() {    /* call_x11graph_84 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 2)->Val->Val + 2 + (Fix) 13)->Val = GIa1;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11graph_87);
        {aRet = (GYx11graph[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11graph_87() {    /* call_x11graph_86 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 2)->Val->Val + 2 + (Fix) 14)->Val = GIa1;
        rSp += (Fix) 1;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11graph_88() {    /* #:display:x11:kill-graph-env */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11graph_90);
        {aRet = (GYx11graph[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11graph_90() {    /* call_x11graph_89 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        GIa4 = (rSp->Val->Val + 2 + (Fix) 12)->Val;
        (GIa4->Val + 2 + (Fix) 1)->Val = rNil;
        GIa1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11graph_91() {    /* #:display:x11:graph-env-set-clip */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11graph; rSp = GIsp; rA4 = GIa4;
        if (rA4 == (Ptr) 6)     goto l_101;
        GIa1 = rLit[52];
        GIa2 = (Ptr) 6;
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GXpopj6);
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 6;
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_92() {    /* #:display:x11:graph-env-set-clips */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11graph; rSp = GIsp; rA4 = GIa4;
        if (rA4 == (Ptr) 7)     goto l_101;
        GIa1 = rLit[54];
        GIa2 = (Ptr) 7;
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GXpopj7);
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 7;
        {aRet = (rLit[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_93() {    /* #:display:x11:graph-env-change-values */
   {    register Ptr aRet, *rLit;
        rLit = GYx11graph;
        if (GIa4 == (Ptr) 8)    goto l_101;
        GIa1 = rLit[56];
        GIa2 = (Ptr) 8;
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
l_101:
        GIa2 = (Ptr) 0;
        GIa1 = (Ptr) 6;
        (--GIsp)->Val = ((Ptr) GLx11graph_95);
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11graph_95() {    /* call_x11graph_94 */
   {    register Ptr aRet, rSp, rA1, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rNil;
        if ((rSp + 13)->Val == rNil)    goto l_103;
        ((rSp + 14)->Val->Val + 2 + (Fix) 0)->Val = (rSp + 13)->Val;
        rA4 = ((rSp + 15)->Val->Val + 2 + (Fix) 36)->Val;
        rA4 = (rA4->Val + 2 + (Fix) ((rSp + 13)->Val))->Val;
        (rSp + 7)->Val = rA4;
        (rA1->Val + 2 + (Fix) 0)->Val = (Ptr) 1;
l_103:
        if ((rSp + 12)->Val == rNil)    goto l_105;
        ((rSp + 14)->Val->Val + 2 + (Fix) 3)->Val = (rSp + 12)->Val;
        rA4 = ((rSp + 15)->Val->Val + 2 + (Fix) 37)->Val;
        rA4 = (rA4->Val + 2 + (Fix) ((rSp + 12)->Val))->Val;
        (rSp + 6)->Val = rA4;
        (rA1->Val + 2 + (Fix) 1)->Val = (Ptr) 1;
l_105:
        if ((rSp + 11)->Val == rNil)    goto l_107;
        ((rSp + 14)->Val->Val + 2 + (Fix) 2)->Val = (rSp + 11)->Val;
        rA4 = ((rSp + 15)->Val->Val + 2 + (Fix) 34)->Val;
        rA4 = (rA4->Val + 2 + (Fix) ((rSp + 11)->Val))->Val;
        (rSp + 5)->Val = rA4;
        (rA1->Val + 2 + (Fix) 2)->Val = (Ptr) 1;
l_107:
        if ((rSp + 10)->Val == rNil)    goto l_109;
        ((rSp + 14)->Val->Val + 2 + (Fix) 1)->Val = (rSp + 10)->Val;
        rA4 = ((rSp + 15)->Val->Val + 2 + (Fix) 33)->Val;
        rA4 = (rA4->Val + 2 + (Fix) ((rSp + 10)->Val))->Val;
        rSp->Val = rA4;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (rSp + 4)->Val = rA4;
        rA4 = (rSp->Val->Val + 2 + (Fix) 1)->Val;
        (rSp + 3)->Val = rA4;
        (rA1->Val + 2 + (Fix) 3)->Val = (Ptr) 1;
l_109:
        if ((rSp + 9)->Val == rNil)     goto l_111;
        ((rSp + 14)->Val->Val + 2 + (Fix) 4)->Val = (rSp + 9)->Val;
        rA4 = ((rSp + 9)->Val->Val + 2 + (Fix) 6)->Val;
        (rSp + 2)->Val = rA4;
        (rA1->Val + 2 + (Fix) 4)->Val = (Ptr) 1;
l_111:
        if ((rSp + 8)->Val == rNil)     goto l_113;
        ((rSp + 14)->Val->Val + 2 + (Fix) 5)->Val = (rSp + 8)->Val;
        rA4 = ((rSp + 8)->Val->Val + 2 + (Fix) 6)->Val;
        (rSp + 1)->Val = rA4;
        (rA1->Val + 2 + (Fix) 5)->Val = (Ptr) 1;
l_113:
        (--rSp)->Val = ((Ptr) GLx11graph_96);
        rA4 = ((rSp + 16)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 16)->Val->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 10;
        {aRet = (GYx11graph[57] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_96() {    /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 16;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11graph_97() {    /* #:display:x11:graph-env-subwindow-mode */
   {    register Ptr aRet, rA1, rA2;
        rA1 = GIa1; rA2 = GIa2;
        if (GIa3 >= GIbfloat)   goto l_101;
        rA1 = (rA1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        {aRet = (GYx11graph[58] + 2)->Val; goto lRet;}
l_101:
        rA1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLx11graph_98() {    /* #:display:x11:get-font-names */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4;
        rLit = GYx11graph; rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA3;
        (--rSp)->Val = ((Ptr) GLx11graph_99);
        rA4 = (GIa1->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rLit[59];
        (--rSp)->Val = GInil;
        rA4 = (Ptr) 5;
        {aRet = (rLit[60] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_99() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11graph; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11graph_100);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[61];
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11graph_100() {   /* 104 */
   {    register Ptr aRet, rSp, rA1, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_102;
        rA1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_102:
        if (rSp->Val != rNil)   goto l_105;
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        rA4 = rSp->Val;
        if ((rA4 + 1)->Val == rNil)     goto l_107;
        (--rSp)->Val = ((Ptr) GXpopj2);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 1;
        {aRet = (GYx11graph[59] + 2)->Val; goto lRet;}
l_107:
        rA1 = rA4;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_101() {   /* #:display:x11:get-font-info */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rA2;
        rA2 = (rA1->Val + 2 + (Fix) 18)->Val;
        rA1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLx11graph_103);
        {aRet = (GYx11graph[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLx11graph_103() {   /* call_x11graph_102 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 == GInil)       goto l_101;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 36)->Val;
        rA4 = (rA4->Val + 2 + (Fix) (rA1))->Val;
        goto l_102;
l_101:
        rA4 = (Ptr) 0;
l_102:
        (--rSp)->Val = ((Ptr) GLx11graph_104);
        GIa3 = ((rSp + 2)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = GIa3;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (GYx11graph[63] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11graph_104() {   /* 103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp->Val = rA1;
        if (rA1 != (Ptr) 0)     goto l_104;
        rA1 = GInil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        rA1 = (rSp + 3)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11graph_105() {   /* #:display:x11:graph-env-planemask */
   {    register Ptr aRet, rA1, rA2;
        rA1 = GIa1; rA2 = GIa2;
        if (GIa3 >= GIbfloat)   goto l_101;
        rA1 = (rA1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        {aRet = (GYx11graph[64] + 2)->Val; goto lRet;}
l_101:
        rA1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GDx11graph_106() {   /* trace #:display:x11:current-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,65,66,67);
  lRet:  return (aRet);}}

static Ptr GDx11graph_107() {   /* trace #:display:x11:current-line-style */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,68,66,67);
  lRet:  return (aRet);}}

static Ptr GDx11graph_108() {   /* trace #:display:x11:current-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,69,66,67);
  lRet:  return (aRet);}}

static Ptr GDx11graph_109() {   /* trace #:display:x11:current-mode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,70,66,67);
  lRet:  return (aRet);}}

static Ptr GDx11graph_110() {   /* trace #:display:x11:current-foreground */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,71,66,67);
  lRet:  return (aRet);}}

static Ptr GDx11graph_111() {   /* trace #:display:x11:current-background */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,72,66,67);
  lRet:  return (aRet);}}

static Ptr GDx11graph_112() {   /* trace #:display:x11:line-style-max */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,73,66,74);
  lRet:  return (aRet);}}

static Ptr GDx11graph_113() {   /* trace #:display:x11:pattern-max */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,75,66,74);
  lRet:  return (aRet);}}

static Ptr GDx11graph_114() {   /* trace #:display:x11:make-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,76,66,77);
  lRet:  return (aRet);}}

static Ptr GDx11graph_115() {   /* trace #:display:x11:make-line-style */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,78,66,67);
  lRet:  return (aRet);}}

static Ptr GDx11graph_116() {   /* trace #:display:x11:font-max */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,79,66,74);
  lRet:  return (aRet);}}

static Ptr GDx11graph_117() {   /* trace #:display:x11:load-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,80,66,77);
  lRet:  return (aRet);}}

static Ptr GDx11graph_118() {   /* trace #:display:x11:width-substring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,19,66,81);
  lRet:  return (aRet);}}

static Ptr GDx11graph_119() {   /* trace #:display:x11:height-substring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,22,66,81);
  lRet:  return (aRet);}}

static Ptr GDx11graph_120() {   /* trace #:display:x11:x-base-substring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,25,66,81);
  lRet:  return (aRet);}}

static Ptr GDx11graph_121() {   /* trace #:display:x11:y-base-substring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,27,66,81);
  lRet:  return (aRet);}}

static Ptr GDx11graph_122() {   /* trace #:display:x11:x-inc-substring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,29,66,81);
  lRet:  return (aRet);}}

static Ptr GDx11graph_123() {   /* trace #:display:x11:y-inc-substring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,30,66,81);
  lRet:  return (aRet);}}

static Ptr GDx11graph_124() {   /* trace #:display:x11:cursor-max */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,82,66,74);
  lRet:  return (aRet);}}

static Ptr GDx11graph_125() {   /* trace #:display:x11:make-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,31,66,81);
  lRet:  return (aRet);}}

static Ptr GDx11graph_126() {   /* trace #:display:x11:make-named-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,83,66,77);
  lRet:  return (aRet);}}

static Ptr GDx11graph_127() {   /* trace #:display:x11:cursor-name */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,84,66,77);
  lRet:  return (aRet);}}

static Ptr GDx11graph_128() {   /* trace #:display:x11:current-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,85,66,77);
  lRet:  return (aRet);}}

static Ptr GDx11graph_129() {   /* trace #:display:x11:move-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,86,66,67);
  lRet:  return (aRet);}}

static Ptr GDx11graph_130() {   /* trace #:display:x11:font-ascent */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,87,66,77);
  lRet:  return (aRet);}}

static Ptr GDx11graph_131() {   /* trace #:display:x11:font-height */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,88,66,77);
  lRet:  return (aRet);}}

static Ptr GDx11graph_132() {   /* trace #:display:x11:current-stipple */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,89,66,67);
  lRet:  return (aRet);}}

static Ptr GDx11graph_133() {   /* trace #:display:x11:current-fill-mode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,46,66,67);
  lRet:  return (aRet);}}

static Ptr GDx11graph_134() {   /* trace #:display:x11:make-graph-env */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,48,66,81);
  lRet:  return (aRet);}}

static Ptr GDx11graph_135() {   /* trace #:display:x11:kill-graph-env */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,90,66,77);
  lRet:  return (aRet);}}

static Ptr GDx11graph_136() {   /* trace #:display:x11:graph-env-set-clip */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,52,66,81);
  lRet:  return (aRet);}}

static Ptr GDx11graph_137() {   /* trace #:display:x11:graph-env-set-clips */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,54,66,81);
  lRet:  return (aRet);}}

static Ptr GDx11graph_138() {   /* trace #:display:x11:graph-env-change-values */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,56,66,81);
  lRet:  return (aRet);}}

static Ptr GDx11graph_139() {   /* trace #:display:x11:graph-env-subwindow-mode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,91,66,67);
  lRet:  return (aRet);}}

static Ptr GDx11graph_140() {   /* trace #:display:x11:get-font-names */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,92,66,67);
  lRet:  return (aRet);}}

static Ptr GDx11graph_141() {   /* trace #:display:x11:get-font-info */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,93,66,67);
  lRet:  return (aRet);}}

static Ptr GDx11graph_142() {   /* trace #:display:x11:graph-env-planemask */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11graph,94,66,67);
  lRet:  return (aRet);}}

