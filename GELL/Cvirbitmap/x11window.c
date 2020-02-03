/* GELL 15.26: source file for the module: "x11window" */
/*             translation done:           "Tue Aug  24 93 10:48:39 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "x11window.h" 

static Ptr GLx11window_1() {    /* #:display:x11:kill-window */
   {    register Ptr aRet, rSp, rA2, rA3;
        rSp = GIsp; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA2;
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        rA3 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_3);
        {aRet = (GYx11window[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLx11window_3() {    /* call_x11window_2 */
   {    register Ptr aRet, rSp, rA4, rNil;
        rSp = GIsp; rA4 = GIa4; rNil = GInil;
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        (rA4->Val + 2 + (Fix) 0)->Val = rNil;
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        (rA4->Val + 2 + (Fix) 1)->Val = rNil;
        GIa1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_4() {    /* #:display:x11:pop-window */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_6);
        {aRet = (GYx11window[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11window_6() {    /* call_x11window_5 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_7() {    /* #:display:x11:move-behind-window */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_9);
        {aRet = (GYx11window[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11window_9() {    /* call_x11window_8 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_10() {   /* #:display:x11:current-keyboard-focus-window */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_11() {   /* #:display:x11:uncurrent-keyboard-focus-window */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_12() {   /* #:display:x11:find-window */
   {    register Ptr aRet;
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        {aRet = (GYx11window[3] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_13() {   /* #:display:x11:map-window */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4;
        rLit = GYx11window; rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        if (rA4 == (Ptr) 6)     goto l_101;
        GIa1 = rLit[4];
        GIa2 = (Ptr) 6;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 47)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLx11window_14);
        rA3 = ((rSp + 7)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 7)->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 5;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_14() {   /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp->Val->Val + 2 + (Fix) 0)->Val;
        GIa3 = (rSp + 2)->Val;
        GIa3->Val = rA4;
        rA4 = (rSp->Val->Val + 2 + (Fix) 1)->Val;
        GIa2 = (rSp + 1)->Val;
        GIa2->Val = rA4;
        GIa1 = rA4;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_15() {   /* #:image:rectangle:window:set-window-hints */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_16() {   /* #:image:rectangle:window:modify-window-hints */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_17() {   /* #:display:x11:make-top-extend */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        GIa4 = (rA1->Val + 2 + (Fix) 8)->Val;
        if (GIa4 != GInil)      {aRet = ((Ptr) GLx11window_18); goto lRet;}
        (--rSp)->Val = ((Ptr) GLx11window_20);
        {aRet = (GYx11window[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_20() {   /* call_x11window_19 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLx11window_18); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_18() {   /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4, rNil;
        rLit = GYx11window; rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        rA3 = (rSp->Val->Val + 2 + (Fix) 4)->Val;
        if (rA3 != rNil)        goto l_103;
        (rSp->Val->Val + 2 + (Fix) 4)->Val = rLit[8];
l_103:
        rA3 = (rA4->Val + 2 + (Fix) 5)->Val;
        if (rA3 != rNil)        goto l_105;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 49)->Val;
        (rA4->Val + 2 + (Fix) 5)->Val = rA3;
l_105:
        rA3 = (rA4->Val + 2 + (Fix) 4)->Val;
        if (rA3 != rNil)        goto l_107;
        rA3 = (rSp->Val->Val + 2 + (Fix) 4)->Val;
        if (rA3 != rNil)        goto l_108;
        rA3 = rLit[8];
l_108:
        (rA4->Val + 2 + (Fix) 4)->Val = rA3;
l_107:
        rA3 = (rA4->Val + 2 + (Fix) 6)->Val;
        if (rA3 != rNil)        goto l_110;
        rA3 = (rSp->Val->Val + 2 + (Fix) 4)->Val;
        if (rA3 != rNil)        goto l_111;
        rA3 = rLit[8];
l_111:
        (rA4->Val + 2 + (Fix) 6)->Val = rA3;
l_110:
        rA3 = (rA4->Val + 2 + (Fix) 3)->Val;
        if (rA3 != rNil)        goto l_113;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 13)->Val;
        (rA4->Val + 2 + (Fix) 3)->Val = rA3;
l_113:
        (rSp->Val->Val + 2 + (Fix) 8)->Val = rA4;
        GIa1 = rA4;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLx11window_21() {   /* #:display:x11:make-opaque-extend */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        GIa4 = (rA1->Val + 2 + (Fix) 8)->Val;
        if (GIa4 != GInil)      {aRet = ((Ptr) GLx11window_22); goto lRet;}
        (--rSp)->Val = ((Ptr) GLx11window_24);
        {aRet = (GYx11window[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_24() {   /* call_x11window_23 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLx11window_22); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_22() {   /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4, rNil;
        rLit = GYx11window; rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        rA3 = (rSp->Val->Val + 2 + (Fix) 4)->Val;
        if (rA3 != rNil)        goto l_103;
        (rSp->Val->Val + 2 + (Fix) 4)->Val = rLit[8];
l_103:
        rA3 = (rA4->Val + 2 + (Fix) 5)->Val;
        if (rA3 != rNil)        goto l_105;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 49)->Val;
        (rA4->Val + 2 + (Fix) 5)->Val = rA3;
l_105:
        rA3 = (rA4->Val + 2 + (Fix) 4)->Val;
        if (rA3 != rNil)        goto l_107;
        rA3 = (rSp->Val->Val + 2 + (Fix) 4)->Val;
        if (rA3 != rNil)        goto l_108;
        rA3 = rLit[8];
l_108:
        (rA4->Val + 2 + (Fix) 4)->Val = rA3;
l_107:
        rA3 = (rA4->Val + 2 + (Fix) 3)->Val;
        if (rA3 != rNil)        goto l_110;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 13)->Val;
        (rA4->Val + 2 + (Fix) 3)->Val = rA3;
l_110:
        (rSp->Val->Val + 2 + (Fix) 8)->Val = rA4;
        GIa1 = rA4;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLx11window_25() {   /* #:display:x11:create-window */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYx11window; rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        (rA2->Val + 2 + (Fix) 15)->Val = rLit[10];
        GIa4 = (rA2->Val + 2 + (Fix) 7)->Val;
        if (GIa4 != GInil)      {aRet = ((Ptr) GLx11window_26); goto lRet;}
        (--rSp)->Val = rA2;
        (--rSp)->Val = ((Ptr) GLx11window_28);
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_28() {   /* call_x11window_27 */
   {    register Ptr aRet;
        GIa4 = (GIsp++)->Val;
        (GIa4->Val + 2 + (Fix) 7)->Val = GIa1;
        {aRet = ((Ptr) GLx11window_26); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_26() {   /* 102 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        GIa4 = (rSp->Val->Val + 2 + (Fix) 47)->Val;
        (--rSp)->Val = GIa4;
        GIa3 = ((rSp + 2)->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = GIa3;
        rA2 = ((rSp + 2)->Val->Val + 2 + (Fix) 35)->Val;
        rA1 = ((rSp + 3)->Val->Val + 2 + (Fix) 11)->Val;
        rA2 = (rA2->Val + 2 + (Fix) (rA1))->Val;
        (--rSp)->Val = rA2;
        rA2 = (rSp + 3)->Val;
        rA1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_30);
        {aRet = ((Ptr) GLx11window_17); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLx11window_30() {   /* call_x11window_29 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 16)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLx11window_31);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 19;
        rA4 = (Ptr) 4;
        {aRet = (GYx11window[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_31() {   /* 103 */
   {    register Ptr aRet, rSp, rA4, rNil;
        rSp = GIsp; rA4 = GIa4; rNil = GInil;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 0)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 0)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 1)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 1)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 2)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 2)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 3)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 3)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 4)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 4)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 5)->Val;
        if (rA4 != rNil)        goto l_104;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 50)->Val;
        ((rSp + 6)->Val->Val + 2 + (Fix) 5)->Val = rA4;
l_104:
        ((rSp + 4)->Val->Val + 2 + (Fix) 5)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 7)->Val;
        if (rA4 == rNil)        goto l_106;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 7)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 5)->Val;
        goto l_107;
l_106:
        rA4 = rNil;
l_107:
        if (rA4 != rNil)        goto l_105;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 12)->Val;
l_105:
        rA4 = (rA4->Val + 2 + (Fix) 6)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 10)->Val = rA4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
        if (rA4 == rNil)        goto l_108;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 6)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 11)->Val = rA4;
        goto l_109;
l_108:
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 13)->Val;
        ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val = rA4;
        rA4 = (rA4->Val + 2 + (Fix) 6)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 11)->Val = rA4;
l_109:
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 14)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLx11window_32); goto lRet;}
        GIa1 = ((rSp + 6)->Val->Val + 2 + (Fix) 14)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_34);
        {aRet = (GYx11window[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_34() {   /* call_x11window_33 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLx11window_35); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_32() {   /* 110 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 39)->Val;
        ((rSp + 6)->Val->Val + 2 + (Fix) 14)->Val = rA4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 42)->Val;
        ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val = rA4;
        {aRet = ((Ptr) GLx11window_35); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_35() {   /* 111 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4, rNil;
        rLit = GYx11window; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        ((rSp + 4)->Val->Val + 2 + (Fix) 14)->Val = rA4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 6)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 15)->Val = rA4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 5)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 16)->Val = rA4;
l_112:
        if (rSp->Val == rNil)   goto l_113;
        rA1 = rSp->Val;
        rSp->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        if (rA1 != rLit[14])    goto l_115;
        ((rSp + 4)->Val->Val + 2 + (Fix) 6)->Val = (Ptr) 1;
        goto l_112;
l_115:
        if (rA1 != rLit[15])    goto l_116;
        ((rSp + 4)->Val->Val + 2 + (Fix) 7)->Val = (Ptr) 1;
        goto l_112;
l_116:
        if (rA1 != rLit[16])    goto l_117;
        ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val = (Ptr) 1;
        goto l_112;
l_117:
        if (rA1 != rLit[17])    goto l_118;
        ((rSp + 4)->Val->Val + 2 + (Fix) 17)->Val = (Ptr) 1;
        goto l_112;
l_118:
        if (rA1 != rLit[18])    goto l_119;
        ((rSp + 4)->Val->Val + 2 + (Fix) 9)->Val = (Ptr) 1;
        goto l_112;
l_119:
        if (rA1 != rLit[19])    goto l_120;
        ((rSp + 4)->Val->Val + 2 + (Fix) 12)->Val = (Ptr) 1;
        goto l_112;
l_120:
        if (rA1 != rLit[20])    goto l_112;
        ((rSp + 4)->Val->Val + 2 + (Fix) 13)->Val = (Ptr) 1;
        goto l_112;
l_113:
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 4)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 18)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLx11window_36);
        rA3 = ((rSp + 7)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        rA3 = ((rSp + 11)->Val->Val + 2 + (Fix) 10)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rSp + 10)->Val;
        if (rA3 != rNil)        goto l_123;
        rA3 = (Ptr) 1;
l_123:
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 6;
        {aRet = (rLit[21] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_36() {   /* 122 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 0)->Val = GIa1;
        GIa2 = (rSp + 6)->Val;
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_38);
        {aRet = (GYx11window[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_38() {   /* call_x11window_37 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_39() {   /* #:display:x11:create-subwindow */
   {    register Ptr aRet, *rLit, rSp, rA2, rA4;
        rLit = GYx11window; rSp = GIsp; rA2 = GIa2; rA4 = GIa4;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        rA4 = (rA2->Val + 2 + (Fix) 9)->Val;
        if (rA4 == GInil)       {aRet = ((Ptr) GLx11window_40); goto lRet;}
        rA4 = (rA2->Val + 2 + (Fix) 9)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA4 != rLit[23])    {aRet = ((Ptr) GLx11window_40); goto lRet;}
        rA4 = (rA2->Val + 2 + (Fix) 15)->Val;
        if (rA4 != rLit[10])    {aRet = ((Ptr) GLx11window_41); goto lRet;}
        GIa3 = rA2;
        rA2 = rLit[24];
        GIa1 = rLit[25];
        (--rSp)->Val = ((Ptr) GLx11window_41);
        {aRet = (rLit[26] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_41() {   /* 106 */
   {    register Ptr aRet;
        ((GIsp + 1)->Val->Val + 2 + (Fix) 15)->Val = GYx11window[23];
        {aRet = ((Ptr) GLx11window_40); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_40() {   /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 15)->Val;
        if (rA4 != GInil)       goto l_107;
        rA4 = (rSp->Val->Val + 2 + (Fix) 46)->Val;
l_107:
        if (rA4 != GYx11window[10])     goto l_108;
        GIa2 = (rSp + 1)->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLx11window_42); goto lRet;}
l_108:
        GIa2 = (rSp + 1)->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLx11window_43); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_42() {   /* #:display:x11:x11-create-subwindow */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        GIa4 = (rA2->Val + 2 + (Fix) 7)->Val;
        if (GIa4 != GInil)      {aRet = ((Ptr) GLx11window_44); goto lRet;}
        (--rSp)->Val = rA2;
        (--rSp)->Val = ((Ptr) GLx11window_46);
        {aRet = (GYx11window[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_46() {   /* call_x11window_45 */
   {    register Ptr aRet;
        GIa4 = (GIsp++)->Val;
        (GIa4->Val + 2 + (Fix) 7)->Val = GIa1;
        {aRet = ((Ptr) GLx11window_44); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_44() {   /* 102 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        ((rSp + 1)->Val->Val + 2 + (Fix) 15)->Val = GYx11window[10];
        GIa4 = (rSp->Val->Val + 2 + (Fix) 47)->Val;
        (--rSp)->Val = GIa4;
        GIa3 = ((rSp + 2)->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = GIa3;
        rA2 = ((rSp + 2)->Val->Val + 2 + (Fix) 35)->Val;
        rA1 = ((rSp + 3)->Val->Val + 2 + (Fix) 11)->Val;
        if (rA1 != GInil)       goto l_103;
        rA1 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 11)->Val;
        ((rSp + 3)->Val->Val + 2 + (Fix) 11)->Val = rA1;
l_103:
        rA2 = (rA2->Val + 2 + (Fix) (rA1))->Val;
        (--rSp)->Val = rA2;
        rA2 = (rSp + 3)->Val;
        rA1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_48);
        {aRet = ((Ptr) GLx11window_21); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLx11window_48() {   /* call_x11window_47 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 16)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLx11window_49);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 19;
        rA4 = (Ptr) 4;
        {aRet = (GYx11window[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_49() {   /* 104 */
   {    register Ptr aRet, rSp, rA4, rNil;
        rSp = GIsp; rA4 = GIa4; rNil = GInil;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 0)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 0)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 1)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 1)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 2)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 2)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 3)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 3)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 5)->Val;
        if (rA4 != rNil)        goto l_105;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 51)->Val;
        ((rSp + 6)->Val->Val + 2 + (Fix) 5)->Val = rA4;
l_105:
        ((rSp + 4)->Val->Val + 2 + (Fix) 4)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 7)->Val;
        if (rA4 == rNil)        goto l_107;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 7)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 5)->Val;
        goto l_108;
l_107:
        rA4 = rNil;
l_108:
        if (rA4 != rNil)        goto l_106;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 12)->Val;
l_106:
        rA4 = (rA4->Val + 2 + (Fix) 6)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val = rA4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
        if (rA4 == rNil)        goto l_109;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 6)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 9)->Val = rA4;
        goto l_110;
l_109:
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 13)->Val;
        ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val = rA4;
        rA4 = (rA4->Val + 2 + (Fix) 6)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 9)->Val = rA4;
l_110:
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 14)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLx11window_50); goto lRet;}
        GIa1 = ((rSp + 6)->Val->Val + 2 + (Fix) 14)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_52);
        {aRet = (GYx11window[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_52() {   /* call_x11window_51 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLx11window_53); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_50() {   /* 111 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 40)->Val;
        ((rSp + 6)->Val->Val + 2 + (Fix) 14)->Val = rA4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 43)->Val;
        ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val = rA4;
        {aRet = ((Ptr) GLx11window_53); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_53() {   /* 112 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4, rNil;
        rLit = GYx11window; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        ((rSp + 4)->Val->Val + 2 + (Fix) 10)->Val = rA4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 5)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 11)->Val = rA4;
l_113:
        if (rSp->Val == rNil)   goto l_114;
        rA1 = rSp->Val;
        rSp->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        if (rA1 != rLit[14])    goto l_116;
        ((rSp + 4)->Val->Val + 2 + (Fix) 5)->Val = (Ptr) 1;
        goto l_113;
l_116:
        if (rA1 != rLit[15])    goto l_117;
        ((rSp + 4)->Val->Val + 2 + (Fix) 6)->Val = (Ptr) 1;
        goto l_113;
l_117:
        if (rA1 != rLit[16])    goto l_113;
        ((rSp + 4)->Val->Val + 2 + (Fix) 7)->Val = (Ptr) 1;
        goto l_113;
l_114:
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 4)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 12)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLx11window_54);
        rA3 = ((rSp + 7)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        rA3 = ((rSp + 12)->Val->Val + 2 + (Fix) 9)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rSp + 10)->Val;
        if (rA3 != rNil)        goto l_120;
        rA3 = (Ptr) 1;
l_120:
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 6;
        {aRet = (rLit[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_54() {   /* 119 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 0)->Val = GIa1;
        GIa2 = (rSp + 6)->Val;
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_56);
        {aRet = (GYx11window[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_56() {   /* call_x11window_55 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_57() {   /* #:display:x11:make-transparent-extend */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        GIa4 = (rA1->Val + 2 + (Fix) 8)->Val;
        if (GIa4 != GInil)      {aRet = ((Ptr) GLx11window_58); goto lRet;}
        (--rSp)->Val = ((Ptr) GLx11window_60);
        {aRet = (GYx11window[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_60() {   /* call_x11window_59 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLx11window_58); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_58() {   /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (rA4->Val + 2 + (Fix) 5)->Val = (Ptr) 0;
        (rA4->Val + 2 + (Fix) 6)->Val = (Ptr) 0;
        (rSp->Val->Val + 2 + (Fix) 8)->Val = rA4;
        GIa1 = rA4;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_43() {   /* #:display:x11:x11-create-transparent-window */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        GIa4 = (rA2->Val + 2 + (Fix) 7)->Val;
        if (GIa4 != GInil)      {aRet = ((Ptr) GLx11window_61); goto lRet;}
        (--rSp)->Val = rA2;
        (--rSp)->Val = ((Ptr) GLx11window_63);
        {aRet = (GYx11window[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_63() {   /* call_x11window_62 */
   {    register Ptr aRet;
        GIa4 = (GIsp++)->Val;
        (GIa4->Val + 2 + (Fix) 7)->Val = GIa1;
        {aRet = ((Ptr) GLx11window_61); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_61() {   /* 102 */
   {    register Ptr aRet, rSp, rA3, rA4, rNil;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        ((rSp + 1)->Val->Val + 2 + (Fix) 15)->Val = GYx11window[23];
        rA4 = (rSp->Val->Val + 2 + (Fix) 35)->Val;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 11)->Val;
        if (rA3 != rNil)        goto l_103;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 9)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 11)->Val;
        ((rSp + 1)->Val->Val + 2 + (Fix) 11)->Val = rA3;
l_103:
        rA4 = (rA4->Val + 2 + (Fix) (rA3))->Val;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 8)->Val;
        if (rA3 != rNil)        {aRet = ((Ptr) GLx11window_64); goto lRet;}
        GIa2 = rSp->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_66);
        {aRet = ((Ptr) GLx11window_57); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_66() {   /* call_x11window_65 */
   {    register Ptr aRet;
        GIa3 = GIa1;
        {aRet = ((Ptr) GLx11window_64); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_64() {   /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        GIa4 = ((rSp + 2)->Val->Val + 2 + (Fix) 14)->Val;
        if (GIa4 == GInil)      {aRet = ((Ptr) GLx11window_67); goto lRet;}
        GIa1 = ((rSp + 2)->Val->Val + 2 + (Fix) 14)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_69);
        {aRet = (GYx11window[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_69() {   /* call_x11window_68 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLx11window_70); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_67() {   /* 105 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 41)->Val;
        ((rSp + 2)->Val->Val + 2 + (Fix) 14)->Val = rA4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 44)->Val;
        (GIa3->Val + 2 + (Fix) 2)->Val = rA4;
        {aRet = ((Ptr) GLx11window_70); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_70() {   /* 106 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        GIa3 = ((rSp + 3)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = GIa3;
        GIa2 = ((rSp + 4)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = GIa2;
        rA1 = ((rSp + 5)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA1;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 8)->Val->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = rA4;
        rA1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_72);
        {aRet = ((Ptr) GLx11window_73); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_72() {   /* call_x11window_71 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        ((rSp + 7)->Val->Val + 2 + (Fix) 7)->Val = GIa1;
        rA4 = ((rSp + 9)->Val->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLx11window_74);
        rA3 = ((rSp + 10)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 12)->Val;
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
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        rA3 = ((rSp + 10)->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 9;
        {aRet = (GYx11window[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_74() {   /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 0)->Val = GIa1;
        GIa2 = (rSp + 9)->Val;
        GIa1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_76);
        {aRet = ((Ptr) GLx11window_77); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_76() {   /* call_x11window_75 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 9)->Val;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_73() {   /* #:display:x11:calculate-top-opaque-father */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
l_101:
        if (rSp->Val == GInil)  goto l_102;
        rA4 = (rSp->Val->Val + 2 + (Fix) 15)->Val;
        if (rA4 != GYx11window[23])     goto l_102;
        rA4 = (rSp->Val->Val + 2 + (Fix) 9)->Val;
        rSp->Val = rA4;
        goto l_101;
l_102:
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_78() {   /* #:display:x11:current-window */
   {    register Ptr aRet, *rLit, rSp, rA2, rA4;
        rLit = GYx11window; rSp = GIsp; rA2 = GIa2; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11window_79);
        (--rSp)->Val = rLit[30];
        rA4 = (rA2->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA2;
        rA4 = (Ptr) 3;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_79() {   /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 30)->Val = GIa1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_80() {   /* #:tclass:x11window:transparent-window:is-visible */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (GIa2->Val + 2 + (Fix) 8)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 3)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLx11window_81() {   /* #:tclass:x11window:is-visible */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (GIa2->Val + 2 + (Fix) 6)->Val;
        if ((Ptr) 1 != GIa4)    goto l_101;
        GIa1 = GYx11window[32];
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        GIa1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_82() {   /* #:display:x11:uncurrent-window */
   {    register Ptr aRet, rNil;
        rNil = GInil;
        (GIa1->Val + 2 + (Fix) 30)->Val = rNil;
        GIa1 = rNil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_83() {   /* #:display:x11:x11-create-graph-env */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        GIa4 = (rA2->Val + 2 + (Fix) 7)->Val;
        if (GIa4 != GInil)      {aRet = ((Ptr) GLx11window_84); goto lRet;}
        (--rSp)->Val = ((Ptr) GLx11window_86);
        {aRet = (GYx11window[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_86() {   /* call_x11window_85 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLx11window_84); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_84() {   /* 101 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA4;
        ((rSp + 2)->Val->Val + 2 + (Fix) 7)->Val = rA4;
        (rA4->Val + 2 + (Fix) 2)->Val = (Ptr) 1;
        (rA4->Val + 2 + (Fix) 6)->Val = (Ptr) 0;
        (rA4->Val + 2 + (Fix) 7)->Val = (Ptr) 0;
        rA3 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        (rA4->Val + 2 + (Fix) 8)->Val = rA3;
        rA3 = ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val;
        (rA4->Val + 2 + (Fix) 9)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 4)->Val;
        if (rA3 != rNil)        goto l_103;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 11)->Val;
        if (rA3 == rNil)        goto l_105;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 11)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 4)->Val;
        goto l_106;
l_105:
        rA3 = rNil;
l_106:
        if (rA3 != rNil)        goto l_104;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 13)->Val;
l_104:
        (rA4->Val + 2 + (Fix) 4)->Val = rA3;
l_103:
        rA3 = (rA4->Val + 2 + (Fix) 5)->Val;
        if (rA3 != rNil)        goto l_108;
        rA3 = (rA4->Val + 2 + (Fix) 5)->Val;
        if (rA3 != rNil)        goto l_109;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 11)->Val;
        if (rA3 == rNil)        goto l_110;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 11)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        goto l_111;
l_110:
        rA3 = rNil;
l_111:
        if (rA3 != rNil)        goto l_109;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 12)->Val;
l_109:
        (rA4->Val + 2 + (Fix) 5)->Val = rA3;
l_108:
        (rA4->Val + 2 + (Fix) 11)->Val = (rSp + 1)->Val;
        rA3 = ((rSp + 2)->Val->Val + 2 + (Fix) 8)->Val;
        (rA4->Val + 2 + (Fix) 12)->Val = rA3;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 36)->Val;
        rA2 = (rA4->Val + 2 + (Fix) 0)->Val;
        rA3 = (rA3->Val + 2 + (Fix) (rA2))->Val;
        (--rSp)->Val = rA3;
        rA2 = ((rSp + 2)->Val->Val + 2 + (Fix) 33)->Val;
        rA1 = (rA4->Val + 2 + (Fix) 1)->Val;
        rA2 = (rA2->Val + 2 + (Fix) (rA1))->Val;
        rA1 = ((rSp + 2)->Val->Val + 2 + (Fix) 34)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 2)->Val;
        rA1 = (rA1->Val + 2 + (Fix) (rA4))->Val;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 37)->Val;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
        rA4 = (rA4->Val + 2 + (Fix) (rA3))->Val;
        (--rSp)->Val = rA4;
        rA3 = ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA3;
        (--rSp)->Val = ((Ptr) GLx11window_87);
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rA2->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA2->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 11)->Val->Val + 2 + (Fix) 4)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 12)->Val->Val + 2 + (Fix) 5)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 14)->Val->Val + 2 + (Fix) 52)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 10;
        {aRet = (GYx11window[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_87() {   /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 1)->Val = GIa1;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_89);
        {aRet = (GYx11window[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_89() {   /* call_x11window_88 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 2)->Val->Val + 2 + (Fix) 13)->Val = GIa1;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_91);
        {aRet = (GYx11window[35] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_91() {   /* call_x11window_90 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        ((rSp + 2)->Val->Val + 2 + (Fix) 14)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11window_92);
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        rA4 = ((rSp + 9)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 6;
        {aRet = (GYx11window[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_92() {   /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 2;
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_77() {   /* #:display:x11:x11-create-graph-env-for-transparent */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        GIa4 = (rA2->Val + 2 + (Fix) 7)->Val;
        if (GIa4 != GInil)      {aRet = ((Ptr) GLx11window_93); goto lRet;}
        (--rSp)->Val = ((Ptr) GLx11window_95);
        {aRet = (GYx11window[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_95() {   /* call_x11window_94 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLx11window_93); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_93() {   /* 101 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA4;
        ((rSp + 2)->Val->Val + 2 + (Fix) 7)->Val = rA4;
        (rA4->Val + 2 + (Fix) 2)->Val = (Ptr) 1;
        (rA4->Val + 2 + (Fix) 6)->Val = (Ptr) 0;
        (rA4->Val + 2 + (Fix) 7)->Val = (Ptr) 0;
        rA3 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        (rA4->Val + 2 + (Fix) 8)->Val = rA3;
        rA3 = ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val;
        (rA4->Val + 2 + (Fix) 9)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 4)->Val;
        if (rA3 != rNil)        goto l_103;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 11)->Val;
        if (rA3 == rNil)        goto l_105;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 11)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 4)->Val;
        goto l_106;
l_105:
        rA3 = rNil;
l_106:
        if (rA3 != rNil)        goto l_104;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 13)->Val;
l_104:
        (rA4->Val + 2 + (Fix) 4)->Val = rA3;
l_103:
        rA3 = (rA4->Val + 2 + (Fix) 5)->Val;
        if (rA3 != rNil)        goto l_108;
        rA3 = (rA4->Val + 2 + (Fix) 5)->Val;
        if (rA3 != rNil)        goto l_109;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 11)->Val;
        if (rA3 == rNil)        goto l_110;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 11)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        goto l_111;
l_110:
        rA3 = rNil;
l_111:
        if (rA3 != rNil)        goto l_109;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 12)->Val;
l_109:
        (rA4->Val + 2 + (Fix) 5)->Val = rA3;
l_108:
        (rA4->Val + 2 + (Fix) 11)->Val = (rSp + 1)->Val;
        rA3 = ((rSp + 2)->Val->Val + 2 + (Fix) 8)->Val;
        (rA4->Val + 2 + (Fix) 12)->Val = rA3;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 36)->Val;
        rA2 = (rA4->Val + 2 + (Fix) 0)->Val;
        rA3 = (rA3->Val + 2 + (Fix) (rA2))->Val;
        (--rSp)->Val = rA3;
        rA2 = ((rSp + 2)->Val->Val + 2 + (Fix) 33)->Val;
        rA1 = (rA4->Val + 2 + (Fix) 1)->Val;
        rA2 = (rA2->Val + 2 + (Fix) (rA1))->Val;
        rA1 = ((rSp + 2)->Val->Val + 2 + (Fix) 34)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 2)->Val;
        rA1 = (rA1->Val + 2 + (Fix) (rA4))->Val;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 37)->Val;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
        rA4 = (rA4->Val + 2 + (Fix) (rA3))->Val;
        (--rSp)->Val = rA4;
        rA3 = ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA3;
        (--rSp)->Val = ((Ptr) GLx11window_96);
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 7)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rA2->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA2->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 11)->Val->Val + 2 + (Fix) 4)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 12)->Val->Val + 2 + (Fix) 5)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 14)->Val->Val + 2 + (Fix) 52)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 10;
        {aRet = (GYx11window[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_96() {   /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 1)->Val = GIa1;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_98);
        {aRet = (GYx11window[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_98() {   /* call_x11window_97 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 2)->Val->Val + 2 + (Fix) 13)->Val = GIa1;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_100);
        {aRet = (GYx11window[35] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_100() {  /* call_x11window_99 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 2)->Val->Val + 2 + (Fix) 14)->Val = GIa1;
        rSp += (Fix) 2;
        GIa4 = (rSp->Val->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = ((Ptr) GLx11window_102);
        {aRet = (GYx11window[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_102() {  /* call_x11window_101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 4)->Val = GIa1;
        GIa2 = (rSp + 2)->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_104);
        {aRet = ((Ptr) GLx11window_105); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_104() {  /* call_x11window_103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_106() {  /* #:image:rectangle:window:woffset-x */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYx11window; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[38];
        rA4 = (rA1->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 3;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_107() {  /* #:image:rectangle:window:woffset-y */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYx11window; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[39];
        rA4 = (rA1->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 3;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_108() {  /* #:tclass:x11window:woffset-x */
   {    register Ptr aRet;
        GIa1 = (Ptr) 0;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_109() {  /* #:tclass:x11window:woffset-y */
   {    register Ptr aRet;
        GIa1 = (Ptr) 0;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_110() {  /* #:tclass:x11window:transparent-window:woffset-x */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (GIa2->Val + 2 + (Fix) 8)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 5)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLx11window_111() {  /* #:tclass:x11window:transparent-window:woffset-y */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (GIa2->Val + 2 + (Fix) 8)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 6)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLx11window_112() {  /* #:display:x11:set-offsets */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYx11window; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = rA4;
        GIa3 = (rA1->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = GIa3;
        if (rA4 == GInil)       {aRet = ((Ptr) GLx11window_113); goto lRet;}
        GIa2 = (rA1->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLx11window_114);
        (--rSp)->Val = rLit[38];
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_114() {  /* 103 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = (GIsp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (GIa1)));
        GIa2 = rA4;
        {aRet = ((Ptr) GLx11window_115); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_113() {  /* 101 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 0;
        {aRet = ((Ptr) GLx11window_115); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_115() {  /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11window; rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 5)->Val = GIa2;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA4;
        if ((rSp + 1)->Val == GInil)    {aRet = ((Ptr) GLx11window_116); goto lRet;}
        GIa3 = ((rSp + 2)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = ((Ptr) GLx11window_117);
        (--rSp)->Val = rLit[39];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_117() {  /* 106 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = (GIsp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (GIa1)));
        GIa3 = rA4;
        {aRet = ((Ptr) GLx11window_118); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_116() {  /* 104 */
   {    register Ptr aRet;
        GIa3 = (Ptr) 0;
        {aRet = ((Ptr) GLx11window_118); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_118() {  /* 105 */
   {    register Ptr aRet, rSp, rA3;
        rSp = GIsp; rA3 = GIa3;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 6)->Val = rA3;
        GIa1 = rA3;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_119() {  /* #:display:x11:set-view-rectangle */
   {    register Ptr aRet, rSp, rA1, rA2, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 2 + (Fix) 7)->Val;
        (--rSp)->Val = rA4;
        GIa3 = (rA1->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = GIa3;
        rA2 = (rA4->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 4)->Val;
        (--rSp)->Val = rA2;
        (rA2->Val + 2 + (Fix) 0)->Val = (Ptr) 0;
        (rA2->Val + 2 + (Fix) 1)->Val = (Ptr) 0;
        rA4 = (rA1->Val + 2 + (Fix) 2)->Val;
        (rA2->Val + 2 + (Fix) 2)->Val = rA4;
        rA4 = (rA1->Val + 2 + (Fix) 3)->Val;
        (rA2->Val + 2 + (Fix) 3)->Val = rA4;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLx11window_120);
        (--rSp)->Val = rA2;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 7)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 8)->Val->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 5;
        {aRet = ((Ptr) GLx11window_121); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_120() {  /* 101 */
   {    register Ptr aRet, rSp, rA2, rA3, rA4;
        rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 4)->Val = GIa1;
        if ((rSp + 1)->Val == GInil)    {aRet = ((Ptr) GLx11window_122); goto lRet;}
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 15)->Val;
        if (rA4 != GYx11window[23])     {aRet = ((Ptr) GLx11window_122); goto lRet;}
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLx11window_123);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA3 = ((rSp + 4)->Val->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 4)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        rA2 = ((rSp + 6)->Val->Val + 2 + (Fix) 0)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) (rA2)));
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 4)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        rA2 = ((rSp + 7)->Val->Val + 2 + (Fix) 1)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) (rA2)));
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 4)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 7)->Val->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 4)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 5;
        {aRet = ((Ptr) GLx11window_121); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_123() {  /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 4)->Val = GIa1;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_122() {  /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_124() {  /* #:display:x11:set-visibility */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYx11window; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        rA4 = (rA1->Val + 2 + (Fix) 9)->Val;
        rA3 = (rA1->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 4)->Val;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA4;
        rA2 = (rA1->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA2;
        rA2 = (rA1->Val + 2 + (Fix) 6)->Val;
        rA1 = (Ptr) 1;
        rA1 = (rA1 == rA2) ? rLit[32] : rNil;
        rA4 = rA1;
        if (rA4 == rNil)        goto l_101;
        if ((rSp + 1)->Val == rNil)     goto l_103;
        rA4 = rNil;
        goto l_104;
l_103:
        rA4 = rLit[32];
l_104:
        if (rA4 != rNil)        goto l_101;
        rA1 = ((rSp + 1)->Val->Val + 2 + (Fix) 15)->Val;
        rA2 = rLit[10];
        rA1 = (rA1 == rA2) ? rLit[32] : rNil;
        rA4 = rA1;
        if (rA4 != rNil)        goto l_106;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 3)->Val;
l_106:
        if (rA4 == rNil)        goto l_101;
        rA1 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        rA2 = (Ptr) 0;
        rA1 = ((Fix) (rA1) > (Fix) (rA2)) ? rA1 : rNil;
        rA4 = rA1;
        if (rA4 == rNil)        goto l_101;
        rA1 = ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val;
        rA2 = (Ptr) 0;
        rA1 = ((Fix) (rA1) > (Fix) (rA2)) ? rA1 : rNil;
        rA4 = rA1;
l_101:
        rA3 = (rSp++)->Val;
        (rA3->Val + 2 + (Fix) 3)->Val = rA4;
        rA1 = rA4;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_125() {  /* #:display:x11:clear-graph-env */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rA1->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA4;
        rA3 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA3 != GYx11window[10])     goto l_101;
        rA3 = rA2;
        rA2 = rA1;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLx11window_126);
        {aRet = ((Ptr) GLx11window_127); goto lRet;}
l_101:
        rA3 = rA2;
        rA2 = rA1;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLx11window_126);
        {aRet = ((Ptr) GLx11window_128); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_126() {  /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_128() {  /* #:display:x11:transparent-clear-graph-env */
   {    register Ptr aRet, rSp, rA1, rA2, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA4 = (rA2->Val + 2 + (Fix) 30)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLx11window_129); goto lRet;}
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        rA4 = (rA1->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 7)->Val;
        (rSp + 4)->Val = rA4;
        rA4 = (rA4->Val + 2 + (Fix) 7)->Val;
        (rSp + 3)->Val = rA4;
        rA4 = (rA4->Val + 2 + (Fix) 5)->Val;
        (rSp + 2)->Val = rA4;
        rA4 = (rA1->Val + 2 + (Fix) 7)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 5)->Val;
        (rSp + 1)->Val = rA4;
        if ((rSp + 2)->Val == rA4)      {aRet = ((Ptr) GLx11window_130); goto lRet;}
        rA1 = (rA2->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        GIa3 = (rA4->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_130);
        {aRet = (GYx11window[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_130() {  /* 104 */
   {    register Ptr aRet, rSp, rA2, rA3, rA4;
        rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 4)->Val;
        rSp->Val = rA4;
        (--rSp)->Val = ((Ptr) GLx11window_131);
        rA3 = ((rSp + 7)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 8)->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        rA2 = (rA4->Val + 2 + (Fix) 0)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (rA2)));
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 9)->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        rA2 = (rA4->Val + 2 + (Fix) 1)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (rA2)));
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA3;
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 7;
        {aRet = (GYx11window[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_131() {  /* 105 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        if ((rSp + 2)->Val == (rSp + 1)->Val)   goto l_106;
        GIa1 = ((rSp + 6)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        GIa3 = ((rSp + 2)->Val->Val + 2 + (Fix) 6)->Val;
        rSp += (Fix) 8;
        {aRet = (GYx11window[40] + 2)->Val; goto lRet;}
l_106:
        GIa1 = GInil;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11window_129() {  /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_127() {  /* #:display:x11:opaque-clear-graph-env */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj0);
        rA4 = (GIa2->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = (GIa1->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA3->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA3->Val + 2 + (Fix) 7)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA3->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA3->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 7;
        {aRet = (GYx11window[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_132() {  /* #:display:x11:transparent-set-clip-for-subwindows */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_134);
        {aRet = ((Ptr) GLx11window_105); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLx11window_134() {  /* call_x11window_133 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp->Val->Val + 2 + (Fix) 13)->Val;
        (--rSp)->Val = GIa4;
        {aRet = ((Ptr) GLx11window_135); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_135() {  /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLx11window_136); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa2 = (rSp + 3)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11window_138);
        {aRet = ((Ptr) GLx11window_132); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_138() {  /* call_x11window_137 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLx11window_135); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_136() {  /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_105() {  /* #:display:x11:transparent-set-clip-for-window */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        GIa1 = rA2;
        (--rSp)->Val = ((Ptr) GLx11window_140);
        {aRet = ((Ptr) GLx11window_112); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_140() {  /* call_x11window_139 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_142);
        {aRet = ((Ptr) GLx11window_119); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_142() {  /* call_x11window_141 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_144);
        {aRet = ((Ptr) GLx11window_124); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_144() {  /* call_x11window_143 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 7)->Val;
        (--rSp)->Val = GInil;
        rA3 = (rA4->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 4)->Val;
        rSp->Val = rA3;
        (--rSp)->Val = ((Ptr) GXpopj3);
        rA2 = ((rSp + 2)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA2;
        rA2 = ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA2;
        rA2 = (rA3->Val + 2 + (Fix) 0)->Val;
        rA1 = ((rSp + 5)->Val->Val + 2 + (Fix) 8)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 5)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (rA1)));
        (--rSp)->Val = rA2;
        rA2 = (rA3->Val + 2 + (Fix) 1)->Val;
        rA1 = ((rSp + 6)->Val->Val + 2 + (Fix) 8)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 6)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (rA1)));
        (--rSp)->Val = rA2;
        rA2 = (rA3->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA2;
        rA2 = (rA3->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA2;
        rA4 = (Ptr) 6;
        {aRet = (GYx11window[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_145() {  /* #:display:x11:opaque-set-clip-for-subwindows */
   {    register Ptr aRet, rSp, rA4, rNil;
        rSp = GIsp; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = ((Ptr) GLx11window_146);
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rSp + 6)->Val;
        if (rA4 != rNil)        goto l_102;
        rA4 = (Ptr) 0;
l_102:
        (--rSp)->Val = rA4;
        rA4 = (rSp + 6)->Val;
        if (rA4 != rNil)        goto l_103;
        rA4 = (Ptr) 0;
l_103:
        (--rSp)->Val = rA4;
        rA4 = (rSp + 6)->Val;
        if (rA4 != rNil)        goto l_104;
        rA4 = ((rSp + 11)->Val->Val + 2 + (Fix) 2)->Val;
l_104:
        (--rSp)->Val = rA4;
        rA4 = (rSp + 6)->Val;
        if (rA4 != rNil)        goto l_105;
        rA4 = ((rSp + 12)->Val->Val + 2 + (Fix) 3)->Val;
l_105:
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 6;
        {aRet = (GYx11window[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_146() {  /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = ((rSp + 6)->Val->Val + 2 + (Fix) 13)->Val;
        (--rSp)->Val = GIa4;
        {aRet = ((Ptr) GLx11window_147); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_147() {  /* 106 */
   {    register Ptr aRet, rSp, rA4, rNil;
        rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLx11window_148); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLx11window_149);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 7)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        rA4 = (Ptr) 7;
        {aRet = (GYx11window[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_149() {  /* 108 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLx11window_147); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11window_148() {  /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_150() {  /* #:display:x11:current-clip */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11window; rSp = GIsp; rA4 = GIa4;
        if (rA4 == (Ptr) 6)     goto l_101;
        GIa1 = rLit[43];
        GIa2 = (Ptr) 6;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA4;
        if (rA4 == GInil)       {aRet = ((Ptr) GLx11window_151); goto lRet;}
        (--rSp)->Val = ((Ptr) GLx11window_152);
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
        rA4 = (Ptr) 7;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_152() {  /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_151() {  /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_153() {  /* #:display:x11:set-clip-for-subwindows */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11window; rSp = GIsp; rA4 = GIa4;
        if (rA4 == (Ptr) 7)     goto l_101;
        GIa1 = rLit[42];
        GIa2 = (Ptr) 7;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 15)->Val;
        if (rA4 != rLit[10])    goto l_102;
        (--rSp)->Val = ((Ptr) GXpopj7);
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
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 7;
        {aRet = ((Ptr) GLx11window_145); goto lRet;}
l_102:
        GIa2 = (rSp + 5)->Val;
        GIa1 = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = ((Ptr) GLx11window_132); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_121() {  /* #:display:x11:intersect */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 1)->Val;
        rA2 = ((rSp + 5)->Val->Val + 2 + (Fix) 2)->Val;
        rA1 = ((rSp + 5)->Val->Val + 2 + (Fix) 3)->Val;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 2)->Val)));
        (--rSp)->Val = rA4;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 2)->Val)));
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA3;
        rA2 = (rSp + 9)->Val;
        rA1 = (rSp + 5)->Val;
        rA1 = ((Fix) (rA1) > (Fix) (rA2)) ? rA1 : rNil;
        rA4 = rA1;
        if (rA4 != rNil)        goto l_101;
        rA4 = (rSp + 9)->Val;
l_101:
        ((rSp + 10)->Val->Val + 2 + (Fix) 0)->Val = rA4;
        rA2 = (rSp + 8)->Val;
        rA1 = rSp->Val;
        rA1 = ((Fix) (rA1) > (Fix) (rA2)) ? rA1 : rNil;
        rA4 = rA1;
        if (rA4 != rNil)        goto l_102;
        rA4 = (rSp + 8)->Val;
l_102:
        ((rSp + 10)->Val->Val + 2 + (Fix) 1)->Val = rA4;
        rA4 = (rSp + 5)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 1)->Val)));
        rA2 = (rSp + 4)->Val;
        rA1 = rA4;
        rA1 = ((Fix) (rA1) < (Fix) (rA2)) ? rA1 : rNil;
        rA4 = rA1;
        if (rA4 != rNil)        goto l_103;
        rA4 = (rSp + 4)->Val;
l_103:
        rA3 = ((rSp + 10)->Val->Val + 2 + (Fix) 0)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (rA3)));
        ((rSp + 10)->Val->Val + 2 + (Fix) 2)->Val = rA4;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 2)->Val)));
        rA2 = (rSp + 3)->Val;
        rA1 = rA4;
        rA1 = ((Fix) (rA1) < (Fix) (rA2)) ? rA1 : rNil;
        rA4 = rA1;
        if (rA4 != rNil)        goto l_104;
        rA4 = (rSp + 3)->Val;
l_104:
        rA3 = ((rSp + 10)->Val->Val + 2 + (Fix) 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (rA3)));
        ((rSp + 10)->Val->Val + 2 + (Fix) 3)->Val = rA4;
        rA1 = (rSp + 10)->Val;
        rSp += (Fix) 11;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_154() {  /* #:display:x11:modify-window */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYx11window; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 9)     goto l_101;
        GIa1 = rLit[44];
        GIa2 = (Ptr) 9;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 8)->Val;
        if ((rSp + 2)->Val == rNil)     goto l_103;
        ((rSp + 7)->Val->Val + 2 + (Fix) 4)->Val = (rSp + 2)->Val;
l_103:
        if ((rSp + 1)->Val == rNil)     goto l_105;
        ((rSp + 7)->Val->Val + 2 + (Fix) 5)->Val = (rSp + 1)->Val;
l_105:
        if (rSp->Val == rNil)   goto l_107;
        ((rSp + 7)->Val->Val + 2 + (Fix) 6)->Val = rSp->Val;
l_107:
        if ((rSp + 6)->Val != rNil)     goto l_110;
        if ((rSp + 5)->Val != rNil)     goto l_110;
        if ((rSp + 4)->Val != rNil)     goto l_110;
        if ((rSp + 3)->Val == rNil)     {aRet = ((Ptr) GLx11window_155); goto lRet;}
l_110:
        if ((rSp + 6)->Val == rNil)     goto l_111;
        if ((rSp + 5)->Val == rNil)     goto l_111;
        if ((rSp + 4)->Val == rNil)     goto l_111;
        if ((rSp + 3)->Val == rNil)     goto l_111;
        (--rSp)->Val = ((Ptr) GLx11window_155);
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
        rA4 = (Ptr) 6;
        {aRet = (rLit[45] + 2)->Val; goto lRet;}
l_111:
        if ((rSp + 6)->Val != rNil)     goto l_116;
        if ((rSp + 5)->Val == rNil)     {aRet = ((Ptr) GLx11window_156); goto lRet;}
l_116:
        (--rSp)->Val = ((Ptr) GLx11window_156);
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
        rA4 = (Ptr) 4;
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_156() {  /* 115 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        if ((rSp + 4)->Val != rNil)     goto l_120;
        if ((rSp + 3)->Val == rNil)     {aRet = ((Ptr) GLx11window_155); goto lRet;}
l_120:
        (--rSp)->Val = ((Ptr) GLx11window_155);
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (GYx11window[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_155() {  /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11window; rSp = GIsp;
        if ((rSp + 1)->Val == GInil)    {aRet = ((Ptr) GLx11window_157); goto lRet;}
        GIa4 = ((rSp + 7)->Val->Val + 2 + (Fix) 15)->Val;
        if (GIa4 != rLit[10])   {aRet = ((Ptr) GLx11window_157); goto lRet;}
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 7)->Val;
        GIa1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_157);
        {aRet = (rLit[48] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_157() {  /* 123 */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYx11window; rSp = GIsp; rA2 = GIa2;
        if ((rSp + 2)->Val == GInil)    {aRet = ((Ptr) GLx11window_158); goto lRet;}
        GIa4 = ((rSp + 7)->Val->Val + 2 + (Fix) 15)->Val;
        if (GIa4 != rLit[10])   {aRet = ((Ptr) GLx11window_158); goto lRet;}
        GIa1 = ((rSp + 8)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 7)->Val->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        GIa3 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_160);
        {aRet = (rLit[49] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11window_160() {  /* call_x11window_159 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        GIa4 = ((rSp + 7)->Val->Val + 2 + (Fix) 9)->Val;
        if (GIa4 != GInil)      {aRet = ((Ptr) GLx11window_158); goto lRet;}
        GIa1 = ((rSp + 8)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 7)->Val->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        GIa3 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_158);
        {aRet = (GYx11window[50] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11window_158() {  /* 127 */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYx11window; rSp = GIsp; rA2 = GIa2;
        if (rSp->Val == GInil)  {aRet = ((Ptr) GLx11window_161); goto lRet;}
        GIa4 = ((rSp + 7)->Val->Val + 2 + (Fix) 6)->Val;
        if (GIa4 != (Ptr) 1)    goto l_134;
        GIa1 = ((rSp + 8)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 7)->Val->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_161);
        {aRet = (rLit[51] + 2)->Val; goto lRet;}
l_134:
        GIa1 = ((rSp + 8)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 7)->Val->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_161);
        {aRet = (rLit[52] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11window_161() {  /* 133 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLx11window_162);
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 7)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 7;
        {aRet = (GYx11window[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_162() {  /* 136 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = ((rSp + 8)->Val->Val + 2 + (Fix) 8)->Val;
        if ((rSp + 7)->Val != GIa4)     {aRet = ((Ptr) GLx11window_163); goto lRet;}
        GIa2 = (rSp + 7)->Val;
        GIa1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_163);
        {aRet = (GYx11window[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_163() {  /* 138 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 7)->Val;
        rSp += (Fix) 9;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_164() {  /* #:display:x11:window-map */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_166);
        {aRet = (GYx11window[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11window_166() {  /* call_x11window_165 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_167() {  /* #:display:x11:window-unmap */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_169);
        {aRet = (GYx11window[52] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11window_169() {  /* call_x11window_168 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_170() {  /* #:display:x11:update-window */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYx11window; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 6)     goto l_101;
        GIa1 = rLit[54];
        GIa2 = (Ptr) 6;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 3)->Val == rNil)     goto l_103;
        ((rSp + 4)->Val->Val + 2 + (Fix) 0)->Val = (rSp + 3)->Val;
l_103:
        if ((rSp + 2)->Val == rNil)     goto l_105;
        ((rSp + 4)->Val->Val + 2 + (Fix) 1)->Val = (rSp + 2)->Val;
l_105:
        if ((rSp + 1)->Val == rNil)     goto l_107;
        ((rSp + 4)->Val->Val + 2 + (Fix) 2)->Val = (rSp + 1)->Val;
l_107:
        if (rSp->Val == rNil)   goto l_109;
        ((rSp + 4)->Val->Val + 2 + (Fix) 3)->Val = rSp->Val;
l_109:
        (--rSp)->Val = ((Ptr) GLx11window_171);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 7)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 11)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 7;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_171() {  /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = ((rSp + 5)->Val->Val + 2 + (Fix) 8)->Val;
        if ((rSp + 4)->Val != GIa4)     {aRet = ((Ptr) GLx11window_172); goto lRet;}
        GIa2 = (rSp + 4)->Val;
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_172);
        {aRet = (GYx11window[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_172() {  /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 4)->Val;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_173() {  /* #:display:x11:window-clear-region */
   {    register Ptr aRet, *rLit, rSp, rA2, rA3, rA4, rNil;
        rLit = GYx11window; rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 6)     goto l_101;
        GIa1 = rLit[55];
        rA2 = (Ptr) 6;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 3)->Val != rNil)     goto l_103;
        (rSp + 3)->Val = (Ptr) 0;
l_103:
        if ((rSp + 2)->Val != rNil)     goto l_105;
        (rSp + 2)->Val = (Ptr) 0;
l_105:
        if ((rSp + 1)->Val != rNil)     goto l_107;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 2)->Val;
        (rSp + 1)->Val = rA4;
l_107:
        if (rSp->Val != rNil)   goto l_109;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 3)->Val;
        rSp->Val = rA4;
l_109:
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 15)->Val;
        if (rA4 != rLit[10])    goto l_110;
        (--rSp)->Val = ((Ptr) GLx11window_174);
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
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
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 7;
        {aRet = (rLit[41] + 2)->Val; goto lRet;}
l_110:
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 7)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 4)->Val;
        if ((Fix) ((rSp + 3)->Val) >= (Fix) 0)  goto l_114;
        rA3 = (rSp + 1)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 3)->Val)));
        (rSp + 1)->Val = rA3;
        (rSp + 3)->Val = (Ptr) 0;
l_114:
        if ((Fix) ((rSp + 2)->Val) >= (Fix) 0)  goto l_116;
        rA3 = rSp->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 2)->Val)));
        rSp->Val = rA3;
        (rSp + 2)->Val = (Ptr) 0;
l_116:
        rA3 = (rSp + 3)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 1)->Val)));
        rA2 = (rA4->Val + 2 + (Fix) 2)->Val;
        if ((Fix) (rA3) <= (Fix) (rA2)) goto l_118;
        rA3 = (rA4->Val + 2 + (Fix) 2)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) ((rSp + 3)->Val)));
        (rSp + 1)->Val = rA3;
l_118:
        rA3 = (rSp + 2)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (rSp->Val)));
        rA2 = (rA4->Val + 2 + (Fix) 3)->Val;
        if ((Fix) (rA3) <= (Fix) (rA2)) goto l_120;
        rA3 = (rA4->Val + 2 + (Fix) 3)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) ((rSp + 2)->Val)));
        rSp->Val = rA3;
l_120:
        (--rSp)->Val = ((Ptr) GLx11window_174);
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 7)->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        rA2 = (rA4->Val + 2 + (Fix) 0)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (rA2)));
        rA2 = (rSp + 6)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (rA3)));
        (--rSp)->Val = rA2;
        rA3 = ((rSp + 8)->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        rA2 = (rA4->Val + 2 + (Fix) 1)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (rA2)));
        rA2 = (rSp + 6)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (rA3)));
        (--rSp)->Val = rA2;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 7;
        {aRet = (rLit[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_174() {  /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 4)->Val;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_175() {  /* #:display:x11:window-background */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYx11window; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA4 = (rA2->Val + 2 + (Fix) 15)->Val;
        if (rA4 != rLit[10])    {aRet = ((Ptr) GLx11window_176); goto lRet;}
        rA4 = (rA1->Val + 2 + (Fix) 10)->Val;
        if (rA2 == rA4) {aRet = ((Ptr) GLx11window_176); goto lRet;}
        rA1 = (rA1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_176);
        {aRet = (rLit[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_176() {  /* 102 */
   {    register Ptr aRet, rSp, rA2, rA4, rNil;
        rSp = GIsp; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 7)->Val;
        if (rA4 == rNil)        goto l_103;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 7)->Val;
        (rA4->Val + 2 + (Fix) 5)->Val = (rSp + 2)->Val;
        GIa1 = (rSp->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 1)->Val->Val + 2 + (Fix) 7)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        GIa3 = ((rSp + 2)->Val->Val + 2 + (Fix) 6)->Val;
        rSp += (Fix) 3;
        {aRet = (GYx11window[56] + 2)->Val; goto lRet;}
l_103:
        GIa1 = rNil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_177() {  /* #:display:x11:window-border */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYx11window; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        rA4 = (rA2->Val + 2 + (Fix) 15)->Val;
        if (rA4 == rLit[10])    goto l_101;
        rA1 = rA2;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA4 = (rA2->Val + 2 + (Fix) 9)->Val;
        if (rA4 == GInil)       goto l_103;
        rA1 = (rA1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_178);
        {aRet = (rLit[57] + 2)->Val; goto lRet;}
l_103:
        (--rSp)->Val = ((Ptr) GLx11window_178);
        rA4 = (rA1->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA3;
        rA4 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = (rLit[58] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_178() {  /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp->Val->Val + 2 + (Fix) 5)->Val = (rSp + 1)->Val;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_179() {  /* #:display:x11:set-border-color */
   {    register Ptr aRet, *rLit, rSp, rA2, rA3;
        rLit = GYx11window; rSp = GIsp; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        GIa4 = (rA2->Val + 2 + (Fix) 15)->Val;
        if (GIa4 != rLit[10])   {aRet = ((Ptr) GLx11window_180); goto lRet;}
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_180);
        {aRet = (rLit[59] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLx11window_180() {  /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_181() {  /* #:display:x11:move-window */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYx11window; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 4)     goto l_101;
        GIa1 = rLit[46];
        GIa2 = (Ptr) 4;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 1)->Val == rNil)     goto l_103;
        ((rSp + 2)->Val->Val + 2 + (Fix) 0)->Val = (rSp + 1)->Val;
l_103:
        if (rSp->Val == rNil)   goto l_105;
        ((rSp + 2)->Val->Val + 2 + (Fix) 1)->Val = rSp->Val;
l_105:
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 9)->Val;
        if (rA4 == rNil)        goto l_106;
        (--rSp)->Val = ((Ptr) GXpopj4);
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = (rLit[60] + 2)->Val; goto lRet;}
l_106:
        (--rSp)->Val = ((Ptr) GXpopj4);
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 5;
        {aRet = (rLit[61] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_182() {  /* #:display:x11:resize-window */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYx11window; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 4)     goto l_101;
        GIa1 = rLit[47];
        GIa2 = (Ptr) 4;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 1)->Val == rNil)     goto l_103;
        ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val = (rSp + 1)->Val;
l_103:
        if (rSp->Val == rNil)   goto l_105;
        ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val = rSp->Val;
l_105:
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 9)->Val;
        if (rA4 == rNil)        goto l_106;
        (--rSp)->Val = ((Ptr) GXpopj4);
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = (rLit[62] + 2)->Val; goto lRet;}
l_106:
        (--rSp)->Val = ((Ptr) GXpopj4);
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 5;
        {aRet = (rLit[63] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_183() {  /* #:display:x11:move-resize-window */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYx11window; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 6)     goto l_101;
        GIa1 = rLit[45];
        GIa2 = (Ptr) 6;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 3)->Val == rNil)     goto l_103;
        ((rSp + 4)->Val->Val + 2 + (Fix) 0)->Val = (rSp + 3)->Val;
l_103:
        if ((rSp + 2)->Val == rNil)     goto l_105;
        ((rSp + 4)->Val->Val + 2 + (Fix) 1)->Val = (rSp + 2)->Val;
l_105:
        if ((rSp + 1)->Val == rNil)     goto l_107;
        ((rSp + 4)->Val->Val + 2 + (Fix) 2)->Val = (rSp + 1)->Val;
l_107:
        if (rSp->Val == rNil)   goto l_109;
        ((rSp + 4)->Val->Val + 2 + (Fix) 3)->Val = rSp->Val;
l_109:
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 9)->Val;
        if (rA4 == rNil)        goto l_110;
        (--rSp)->Val = ((Ptr) GXpopj6);
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 8)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 9)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 6;
        {aRet = (rLit[64] + 2)->Val; goto lRet;}
l_110:
        (--rSp)->Val = ((Ptr) GXpopj6);
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 8)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 9)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 11)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 7;
        {aRet = (rLit[65] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_184() {  /* #:display:x11:window-events-list */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        GIa4 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA1;
        rA2 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa4;
        rA1 = rA3;
        (--rSp)->Val = ((Ptr) GLx11window_186);
        {aRet = (GYx11window[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLx11window_186() {  /* call_x11window_185 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 2)->Val = rA1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_188);
        {aRet = (GYx11window[66] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11window_188() {  /* call_x11window_187 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp->Val->Val + 2 + (Fix) 14)->Val = (rSp + 1)->Val;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_189() {  /* #:display:x11:window-title */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA1 = (rA1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_191);
        {aRet = (GYx11window[49] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLx11window_191() {  /* call_x11window_190 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        GIa4 = ((rSp + 1)->Val->Val + 2 + (Fix) 9)->Val;
        if (GIa4 != GInil)      {aRet = ((Ptr) GLx11window_192); goto lRet;}
        GIa1 = (rSp->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 1)->Val->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        GIa3 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLx11window_192);
        {aRet = (GYx11window[50] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11window_192() {  /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 1)->Val->Val + 2 + (Fix) 4)->Val = (rSp + 2)->Val;
        GIa1 = (rSp + 2)->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_193() {  /* #:display:x11:set-icontitle */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        {aRet = (GYx11window[50] + 2)->Val; goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLx11window_194() {  /* #:display:x11:set-icon-window */
   {    register Ptr aRet, rA2, rA3;
        rA2 = GIa2; rA3 = GIa3;
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 2)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        {aRet = (GYx11window[67] + 2)->Val; goto lRet;}
  lRet: GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLx11window_195() {  /* #:display:x11:set-window-bitmap */
   {    register Ptr aRet, rA2, rA3;
        rA2 = GIa2; rA3 = GIa3;
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 2)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        {aRet = (GYx11window[68] + 2)->Val; goto lRet;}
  lRet: GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLx11window_196() {  /* #:display:x11:window-state */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3;
        rLit = GYx11window; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA1 = rA3;
        if (rA1 != rLit[69])    goto l_102;
        rA1 = (rSp->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        rA3 = (Ptr) 1;
        (--rSp)->Val = ((Ptr) GLx11window_197);
        {aRet = (rLit[70] + 2)->Val; goto lRet;}
l_102:
        if (rA1 != rLit[71])    goto l_103;
        rA1 = (rSp->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        rA3 = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLx11window_197);
        {aRet = (rLit[70] + 2)->Val; goto lRet;}
l_103:
        if (rA1 != rLit[72])    goto l_104;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11window_197);
        {aRet = (rLit[73] + 2)->Val; goto lRet;}
l_104:
        if (rA1 != rLit[74])    goto l_105;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11window_197);
        {aRet = ((Ptr) GLx11window_198); goto lRet;}
l_105:
        if (rA1 != rLit[75])    goto l_106;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11window_197);
        {aRet = ((Ptr) GLx11window_199); goto lRet;}
l_106:
        rA3 = rA1;
        rA2 = rLit[76];
        rA1 = rLit[77];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLx11window_197); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLx11window_197() {  /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 1)->Val->Val + 2 + (Fix) 17)->Val = (rSp + 2)->Val;
        GIa1 = (rSp + 2)->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_200() {  /* #:display:x11:bitmap-to-window */
   {    register Ptr aRet, rSp, rA1, rA3, rA4;
        rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 2 + (Fix) 10)->Val;
        rA3 = (rA4->Val + 2 + (Fix) 7)->Val;
        (--rSp)->Val = rA3;
        rA4 = (rA3->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLx11window_202);
        {aRet = (GYx11window[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_202() {  /* call_x11window_201 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11window_204);
        {aRet = (GYx11window[78] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_204() {  /* call_x11window_203 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYx11window; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (rA1->Val + 2 + (Fix) 0)->Val = (Ptr) 0;
        (rA1->Val + 2 + (Fix) 1)->Val = (Ptr) 0;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 0)->Val;
        (rA1->Val + 2 + (Fix) 2)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 1)->Val;
        (rA1->Val + 2 + (Fix) 3)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 2)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (rSp->Val->Val + 2 + (Fix) 0)->Val = rA4;
        (rSp->Val->Val + 2 + (Fix) 1)->Val = (rSp + 1)->Val;
        (rA1->Val + 2 + (Fix) 7)->Val = (rSp + 2)->Val;
        (rA1->Val + 2 + (Fix) 11)->Val = (Ptr) 0;
        (rA1->Val + 2 + (Fix) 12)->Val = (rSp + 3)->Val;
        (rA1->Val + 2 + (Fix) 8)->Val = rSp->Val;
        (rA1->Val + 2 + (Fix) 15)->Val = rLit[10];
        (rA1->Val + 2 + (Fix) 6)->Val = (Ptr) 1;
        (rA1->Val + 2 + (Fix) 5)->Val = (Ptr) 0;
        (rA1->Val + 2 + (Fix) 17)->Val = rLit[71];
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_198() {  /* #:display:x11:window-raise */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        {aRet = (GYx11window[1] + 2)->Val; goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLx11window_199() {  /* #:display:x11:window-lower */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        {aRet = (GYx11window[2] + 2)->Val; goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLx11window_205() {  /* #:display:x11:window-change-attributes */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11window; rSp = GIsp; rA4 = GIa4;
        if (rA4 == (Ptr) 4)     goto l_101;
        GIa1 = rLit[79];
        GIa2 = (Ptr) 4;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 15)->Val;
        if (rA4 != rLit[10])    {aRet = ((Ptr) GLx11window_206); goto lRet;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 10)->Val;
        if ((rSp + 2)->Val == rA4)      {aRet = ((Ptr) GLx11window_206); goto lRet;}
        GIa2 = (Ptr) 0;
        GIa1 = (Ptr) 4;
        (--rSp)->Val = ((Ptr) GLx11window_208);
        {aRet = (rLit[80] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_208() {  /* call_x11window_207 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = (Ptr) 0;
        GIa1 = (Ptr) 4;
        (--rSp)->Val = ((Ptr) GLx11window_210);
        {aRet = (GYx11window[80] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11window_210() {  /* call_x11window_209 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rBcons;
        rLit = GYx11window; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
l_104:
        if ((long) rSp->Val < (long) rBcons)    goto l_105;
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA1 = rSp->Val;
        if (rA1 != rLit[14])    goto l_107;
        ((rSp + 3)->Val->Val + 2 + (Fix) 0)->Val = (Ptr) 1;
        ((rSp + 2)->Val->Val + 2 + (Fix) 0)->Val = (Ptr) 1;
        goto l_106;
l_107:
        if (rA1 != rLit[15])    goto l_108;
        ((rSp + 3)->Val->Val + 2 + (Fix) 1)->Val = (Ptr) 1;
        ((rSp + 2)->Val->Val + 2 + (Fix) 1)->Val = (Ptr) 1;
        goto l_106;
l_108:
        if (rA1 != rLit[18])    goto l_109;
        ((rSp + 3)->Val->Val + 2 + (Fix) 2)->Val = (Ptr) 1;
        ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val = (Ptr) 1;
        goto l_106;
l_109:
        if (rA1 != rLit[16])    goto l_106;
        ((rSp + 3)->Val->Val + 2 + (Fix) 3)->Val = (Ptr) 1;
        ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val = (Ptr) 1;
l_106:
        rSp += (Fix) 1;
        goto l_104;
l_105:
        rSp += (Fix) 1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
l_111:
        if ((long) rSp->Val < (long) rBcons)    goto l_112;
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA1 = rSp->Val;
        if (rA1 != rLit[14])    goto l_114;
        ((rSp + 3)->Val->Val + 2 + (Fix) 0)->Val = (Ptr) 1;
        ((rSp + 2)->Val->Val + 2 + (Fix) 0)->Val = (Ptr) 0;
        goto l_113;
l_114:
        if (rA1 != rLit[15])    goto l_115;
        ((rSp + 3)->Val->Val + 2 + (Fix) 1)->Val = (Ptr) 1;
        ((rSp + 2)->Val->Val + 2 + (Fix) 1)->Val = (Ptr) 0;
        goto l_113;
l_115:
        if (rA1 != rLit[18])    goto l_116;
        ((rSp + 3)->Val->Val + 2 + (Fix) 2)->Val = (Ptr) 1;
        ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val = (Ptr) 0;
        goto l_113;
l_116:
        if (rA1 != rLit[16])    goto l_113;
        ((rSp + 3)->Val->Val + 2 + (Fix) 3)->Val = (Ptr) 1;
        ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val = (Ptr) 0;
l_113:
        rSp += (Fix) 1;
        goto l_111;
l_112:
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GXpopj6);
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (rLit[81] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11window_206() {  /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDx11window_211() {  /* trace #:display:x11:kill-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,82,83,84);
  lRet:  return (aRet);}}

static Ptr GDx11window_212() {  /* trace #:display:x11:pop-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,85,83,84);
  lRet:  return (aRet);}}

static Ptr GDx11window_213() {  /* trace #:display:x11:move-behind-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,86,83,87);
  lRet:  return (aRet);}}

static Ptr GDx11window_214() {  /* trace #:display:x11:current-keyboard-focus-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,88,83,84);
  lRet:  return (aRet);}}

static Ptr GDx11window_215() {  /* trace #:display:x11:uncurrent-keyboard-focus-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,89,83,84);
  lRet:  return (aRet);}}

static Ptr GDx11window_216() {  /* trace #:display:x11:find-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,90,83,87);
  lRet:  return (aRet);}}

static Ptr GDx11window_217() {  /* trace #:display:x11:map-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,4,83,91);
  lRet:  return (aRet);}}

static Ptr GDx11window_218() {  /* trace #:image:rectangle:window:set-window-hints */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,92,83,93);
  lRet:  return (aRet);}}

static Ptr GDx11window_219() {  /* trace #:image:rectangle:window:modify-window-hints */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,94,83,93);
  lRet:  return (aRet);}}

static Ptr GDx11window_220() {  /* trace #:display:x11:create-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,95,83,84);
  lRet:  return (aRet);}}

static Ptr GDx11window_221() {  /* trace #:display:x11:create-subwindow */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,25,83,84);
  lRet:  return (aRet);}}

static Ptr GDx11window_222() {  /* trace #:display:x11:current-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,53,83,84);
  lRet:  return (aRet);}}

static Ptr GDx11window_223() {  /* trace #:tclass:x11window:transparent-window:is-visible */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,96,83,84);
  lRet:  return (aRet);}}

static Ptr GDx11window_224() {  /* trace #:tclass:x11window:is-visible */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,97,83,84);
  lRet:  return (aRet);}}

static Ptr GDx11window_225() {  /* trace #:display:x11:uncurrent-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,98,83,84);
  lRet:  return (aRet);}}

static Ptr GDx11window_226() {  /* trace #:display:x11:x11-create-graph-env */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,22,83,84);
  lRet:  return (aRet);}}

static Ptr GDx11window_227() {  /* trace #:image:rectangle:window:woffset-x */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,99,83,93);
  lRet:  return (aRet);}}

static Ptr GDx11window_228() {  /* trace #:image:rectangle:window:woffset-y */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,100,83,93);
  lRet:  return (aRet);}}

static Ptr GDx11window_229() {  /* trace #:tclass:x11window:woffset-x */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,101,83,84);
  lRet:  return (aRet);}}

static Ptr GDx11window_230() {  /* trace #:tclass:x11window:woffset-y */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,102,83,84);
  lRet:  return (aRet);}}

static Ptr GDx11window_231() {  /* trace #:tclass:x11window:transparent-window:woffset-x */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,103,83,84);
  lRet:  return (aRet);}}

static Ptr GDx11window_232() {  /* trace #:tclass:x11window:transparent-window:woffset-y */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,104,83,84);
  lRet:  return (aRet);}}

static Ptr GDx11window_233() {  /* trace #:display:x11:clear-graph-env */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,105,83,84);
  lRet:  return (aRet);}}

static Ptr GDx11window_234() {  /* trace #:display:x11:current-clip */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,43,83,91);
  lRet:  return (aRet);}}

static Ptr GDx11window_235() {  /* trace #:display:x11:set-clip-for-subwindows */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,42,83,91);
  lRet:  return (aRet);}}

static Ptr GDx11window_236() {  /* trace #:display:x11:modify-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,44,83,91);
  lRet:  return (aRet);}}

static Ptr GDx11window_237() {  /* trace #:display:x11:window-map */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,106,83,84);
  lRet:  return (aRet);}}

static Ptr GDx11window_238() {  /* trace #:display:x11:window-unmap */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,73,83,84);
  lRet:  return (aRet);}}

static Ptr GDx11window_239() {  /* trace #:display:x11:update-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,54,83,91);
  lRet:  return (aRet);}}

static Ptr GDx11window_240() {  /* trace #:display:x11:window-clear-region */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,55,83,91);
  lRet:  return (aRet);}}

static Ptr GDx11window_241() {  /* trace #:display:x11:window-background */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,107,83,87);
  lRet:  return (aRet);}}

static Ptr GDx11window_242() {  /* trace #:display:x11:window-border */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,48,83,87);
  lRet:  return (aRet);}}

static Ptr GDx11window_243() {  /* trace #:display:x11:set-border-color */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,108,83,87);
  lRet:  return (aRet);}}

static Ptr GDx11window_244() {  /* trace #:display:x11:move-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,46,83,91);
  lRet:  return (aRet);}}

static Ptr GDx11window_245() {  /* trace #:display:x11:resize-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,47,83,91);
  lRet:  return (aRet);}}

static Ptr GDx11window_246() {  /* trace #:display:x11:move-resize-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,45,83,91);
  lRet:  return (aRet);}}

static Ptr GDx11window_247() {  /* trace #:display:x11:window-events-list */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,109,83,87);
  lRet:  return (aRet);}}

static Ptr GDx11window_248() {  /* trace #:display:x11:window-title */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,110,83,87);
  lRet:  return (aRet);}}

static Ptr GDx11window_249() {  /* trace #:display:x11:set-icontitle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,111,83,87);
  lRet:  return (aRet);}}

static Ptr GDx11window_250() {  /* trace #:display:x11:set-icon-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,112,83,87);
  lRet:  return (aRet);}}

static Ptr GDx11window_251() {  /* trace #:display:x11:set-window-bitmap */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,113,83,87);
  lRet:  return (aRet);}}

static Ptr GDx11window_252() {  /* trace #:display:x11:window-state */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,114,83,87);
  lRet:  return (aRet);}}

static Ptr GDx11window_253() {  /* trace #:display:x11:bitmap-to-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,115,83,84);
  lRet:  return (aRet);}}

static Ptr GDx11window_254() {  /* trace #:display:x11:window-change-attributes */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11window,79,83,91);
  lRet:  return (aRet);}}

