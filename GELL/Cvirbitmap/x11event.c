/* GELL 15.26: source file for the module: "x11event" */
/*             translation done:           "Tue Aug  24 93 10:48:24 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "x11event.h" 

static Ptr GLx11event_1() {     /* #:display:x11:event-mode */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11event_2() {     /* #:display:x11:flush-event */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (rA1->Val + 2 + (Fix) 29)->Val = GInil;
        rA1 = (rA1->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = ((Ptr) GLx11event_4);
        {aRet = (GYx11event[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11event_4() {     /* call_x11event_3 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (rSp->Val->Val + 2 + (Fix) 28)->Val = rNil;
        GIa1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_5() {     /* #:display:x11:eventp */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = (rA1->Val + 2 + (Fix) 29)->Val;
        if (rA1 != GInil)       {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        rA1 = (rSp->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = ((Ptr) GLx11event_7);
        {aRet = (GYx11event[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11event_7() {     /* call_x11event_6 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        GIa1 = (rSp->Val->Val + 2 + (Fix) 28)->Val;
l_101:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_8() {     /* #:display:x11:read-event */
   {    register Ptr aRet, rSp, rA1, rA2, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 2 + (Fix) 29)->Val;
        if (rA4 == GInil)       {aRet = ((Ptr) GLx11event_9); goto lRet;}
        rA4 = (rA1->Val + 2 + (Fix) 29)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (rA1->Val + 2 + (Fix) 29)->Val;
        (rA1->Val + 2 + (Fix) 29)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11event_10);
        (--rSp)->Val = rA2;
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 4;
        {aRet = (GYx11event[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11event_10() {    /* 103 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLx11event_11); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11event_9() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLx11event_12);
        (--rSp)->Val = GIa2;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (GYx11event[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_12() {    /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp->Val->Val + 2 + (Fix) 21)->Val;
        GIa2 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11event_14);
        {aRet = (GYx11event[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_14() {    /* call_x11event_13 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11event; rSp = GIsp;
        GIa3 = rLit[5];
        GIa2 = (rSp + 1)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11event_11);
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_11() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_15() {    /* #:display:x11:peek-event */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYx11event; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 2 + (Fix) 29)->Val;
        if (rA4 == rNil)        goto l_101;
        (--rSp)->Val = ((Ptr) GLx11event_16);
        (--rSp)->Val = rA2;
        (--rSp)->Val = (Ptr) 0;
        rA4 = (rA1->Val + 2 + (Fix) 29)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 4;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GLx11event_17);
        (--rSp)->Val = rA2;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rNil;
        rA4 = (Ptr) 3;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11event_17() {    /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp->Val->Val + 2 + (Fix) 21)->Val;
        GIa2 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11event_19);
        {aRet = (GYx11event[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_19() {    /* call_x11event_18 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11event; rSp = GIsp;
        GIa3 = rLit[5];
        GIa2 = (rSp + 1)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11event_16);
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_16() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_20() {    /* #:display:x11:read-mouse */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11event_21);
        (--rSp)->Val = rA2;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (GYx11event[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_21() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp->Val->Val + 2 + (Fix) 21)->Val;
        GIa2 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (GYx11event[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_22() {    /* #:display:x11:add-event */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11event_24);
        {aRet = (GYx11event[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_24() {    /* call_x11event_23 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLx11event_25);
        (--rSp)->Val = rA1;
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 4;
        {aRet = (GYx11event[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_25() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = ((rSp + 1)->Val->Val + 2 + (Fix) 29)->Val;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11event_27);
        {aRet = (GYx11event[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_27() {    /* call_x11event_26 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 1)->Val->Val + 2 + (Fix) 29)->Val = GIa1;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_28() {    /* #:display:x11:grab-event */
   {    register Ptr aRet, rA1, rA2, rA3, rA4;
        rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rA1->Val + 2 + (Fix) 35)->Val;
        rA3 = (rA2->Val + 2 + (Fix) 11)->Val;
        rA4 = (rA4->Val + 2 + (Fix) (rA3))->Val;
        rA1 = (rA1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        rA3 = rA4;
        {aRet = (GYx11event[11] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11event_29() {    /* #:display:x11:ungrab-event */
   {    register Ptr aRet;
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        {aRet = (GYx11event[12] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11event_30() {    /* #:display:x11:itsoft-event */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11event_31() {    /* #:display:x11:default-event-code */
   {    register Ptr aRet, *rLit;
        rLit = GYx11event;
        (GIa2->Val + 2 + (Fix) 0)->Val = rLit[13];
        GIa1 = rLit[13];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11event_32() {    /* #:display:x11:ascii-event-code */
   {    register Ptr aRet, *rLit, rA1, rA2, rA4, rNil;
        rLit = GYx11event; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        rA4 = (rA1->Val + 2 + (Fix) 7)->Val;
        if (rA4 == rNil)        goto l_102;
        rA4 = (rA1->Val + 2 + (Fix) 7)->Val;
        (rA2->Val + 2 + (Fix) 1)->Val = rA4;
l_102:
        rA4 = (rA1->Val + 2 + (Fix) 56)->Val;
        if (rA4 == rNil)        goto l_103;
        rA4 = rLit[14];
        goto l_104;
l_103:
        rA4 = rLit[13];
l_104:
        (rA2->Val + 2 + (Fix) 0)->Val = rA4;
        rA1 = rA4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11event_33() {    /* #:display:x11:functionkey-event-code */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYx11event; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 2 + (Fix) 7)->Val;
        if (rA4 == rNil)        goto l_102;
        rA4 = (rA1->Val + 2 + (Fix) 7)->Val;
        (rA2->Val + 2 + (Fix) 1)->Val = rA4;
l_102:
        (--rSp)->Val = rA2;
        rA1 = (rA2->Val + 2 + (Fix) 2)->Val;
        rA2 = ((rSp + 1)->Val->Val + 2 + (Fix) 32)->Val;
        rA1 = llrt_call_cassq (rA1, rA2, GIbcons, rNil);
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 2)->Val = rA1;
        rA4 = (rSp->Val->Val + 2 + (Fix) 55)->Val;
        if (rA4 == rNil)        goto l_103;
        rA4 = rLit[15];
        goto l_104;
l_103:
        rA4 = rLit[13];
l_104:
        ((rSp + 1)->Val->Val + 2 + (Fix) 0)->Val = rA4;
        rA1 = rA4;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLx11event_34() {    /* #:display:x11:down-event-code */
   {    register Ptr aRet, *rLit;
        rLit = GYx11event;
        (GIa2->Val + 2 + (Fix) 0)->Val = rLit[16];
        GIa1 = rLit[16];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11event_35() {    /* #:display:x11:up-event-code */
   {    register Ptr aRet, *rLit;
        rLit = GYx11event;
        (GIa2->Val + 2 + (Fix) 0)->Val = rLit[17];
        GIa1 = rLit[17];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11event_36() {    /* #:display:x11:enterwindow-event-code */
   {    register Ptr aRet, *rLit;
        rLit = GYx11event;
        (GIa2->Val + 2 + (Fix) 0)->Val = rLit[18];
        GIa1 = rLit[18];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11event_37() {    /* #:display:x11:leavewindow-event-code */
   {    register Ptr aRet, *rLit;
        rLit = GYx11event;
        (GIa2->Val + 2 + (Fix) 0)->Val = rLit[19];
        GIa1 = rLit[19];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11event_38() {    /* #:display:x11:movedrag-event-code */
   {    register Ptr aRet, *rLit, rA1, rA2, rA4, rNil;
        rLit = GYx11event; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        rA4 = (rA2->Val + 2 + (Fix) 2)->Val;
        if (rA4 == rNil)        goto l_101;
        rA4 = (rA1->Val + 2 + (Fix) 53)->Val;
        if (rA4 == rNil)        goto l_103;
        rA4 = rLit[20];
        goto l_102;
l_103:
        rA4 = rLit[13];
        goto l_102;
l_101:
        rA4 = (rA1->Val + 2 + (Fix) 54)->Val;
        if (rA4 == rNil)        goto l_105;
        rA4 = rLit[21];
        goto l_102;
l_105:
        rA4 = rLit[13];
l_102:
        (rA2->Val + 2 + (Fix) 0)->Val = rA4;
        rA1 = rA4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11event_39() {    /* #:display:x11:keyboard-focus-event-code */
   {    register Ptr aRet, *rLit, rA2, rA4;
        rLit = GYx11event; rA2 = GIa2; rA4 = GIa4;
        rA4 = (rA2->Val + 2 + (Fix) 0)->Val;
        if ((Ptr) 9 != rA4)     goto l_101;
        rA4 = rLit[5];
        goto l_102;
l_101:
        rA4 = GInil;
l_102:
        (rA2->Val + 2 + (Fix) 2)->Val = rA4;
        (rA2->Val + 2 + (Fix) 0)->Val = rLit[22];
        GIa1 = rLit[22];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLx11event_40() {    /* #:display:x11:repaint-window-event-code */
   {    register Ptr aRet, *rLit;
        rLit = GYx11event;
        (GIa2->Val + 2 + (Fix) 0)->Val = rLit[23];
        GIa1 = rLit[23];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11event_41() {    /* #:display:x11:kill-window-event-code */
   {    register Ptr aRet, *rLit;
        rLit = GYx11event;
        (GIa2->Val + 2 + (Fix) 0)->Val = rLit[24];
        GIa1 = rLit[24];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11event_42() {    /* #:display:x11:modify-window-event-code */
   {    register Ptr aRet, *rLit, rSp, rA2, rA3, rA4, rNil;
        rLit = GYx11event; rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        rA4 = (rA2->Val + 2 + (Fix) 2)->Val;
        rA3 = (rA2->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA4;
        if (rA3 == rNil)        goto l_102;
        rA4 = (rA3->Val + 2 + (Fix) 9)->Val;
        if (rA4 != rNil)        goto l_102;
        if (rSp->Val >= GIbfloat)       goto l_102;
        if (rSp->Val != (Ptr) 0)        goto l_102;
        rA4 = (rA2->Val + 2 + (Fix) 3)->Val;
        (rA2->Val + 2 + (Fix) 5)->Val = rA4;
        rA4 = (rA2->Val + 2 + (Fix) 4)->Val;
        (rA2->Val + 2 + (Fix) 6)->Val = rA4;
l_102:
        if (rA3 == rNil)        goto l_105;
        rA4 = (rA2->Val + 2 + (Fix) 5)->Val;
        if (rA4 == rNil)        goto l_106;
        rA4 = (rA3->Val + 2 + (Fix) 0)->Val;
        rA3 = (rA2->Val + 2 + (Fix) 5)->Val;
        if (rA4 != rA3) goto l_103;
l_106:
        rA4 = (rA2->Val + 2 + (Fix) 6)->Val;
        if (rA4 == rNil)        goto l_107;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val;
        rA3 = (rA2->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rA3) goto l_103;
l_107:
        rA4 = (rA2->Val + 2 + (Fix) 7)->Val;
        if (rA4 == rNil)        goto l_108;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val;
        rA3 = (rA2->Val + 2 + (Fix) 7)->Val;
        if (rA4 != rA3) goto l_103;
l_108:
        rA4 = (rA2->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        goto l_105;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
        rA3 = (rA2->Val + 2 + (Fix) 8)->Val;
        if (rA4 != rA3) goto l_103;
l_105:
        rA4 = rLit[13];
        goto l_104;
l_103:
        rA4 = rLit[25];
l_104:
        (rA2->Val + 2 + (Fix) 0)->Val = rA4;
        GIa1 = rA4;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11event_43() {    /* #:display:x11:unmap-window-code */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYx11event; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        (rA2->Val + 2 + (Fix) 0)->Val = rLit[13];
        rA4 = (rA2->Val + 2 + (Fix) 1)->Val;
        if (rA4 == rNil)        goto l_101;
        rA4 = (rA2->Val + 2 + (Fix) 1)->Val;
        (rA4->Val + 2 + (Fix) 17)->Val = rLit[26];
        rA4 = (rA1->Val + 2 + (Fix) 57)->Val;
        if (rA4 == rNil)        goto l_103;
        (rA2->Val + 2 + (Fix) 0)->Val = rLit[27];
        rA1 = rLit[27];
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11event_44() {    /* #:display:x11:map-window-code */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYx11event; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        (rA2->Val + 2 + (Fix) 0)->Val = rLit[13];
        rA4 = (rA2->Val + 2 + (Fix) 1)->Val;
        if (rA4 == rNil)        goto l_101;
        rA4 = (rA2->Val + 2 + (Fix) 1)->Val;
        (rA4->Val + 2 + (Fix) 17)->Val = rLit[28];
        rA4 = (rA1->Val + 2 + (Fix) 58)->Val;
        if (rA4 == rNil)        goto l_103;
        (rA2->Val + 2 + (Fix) 0)->Val = rLit[29];
        rA1 = rLit[29];
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11event_45() {    /* #:display:x11:client-message-code */
   {    register Ptr aRet, *rLit, rSp, rA2, rA4, rNil;
        rLit = GYx11event; rSp = GIsp; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA2;
        (rA2->Val + 2 + (Fix) 0)->Val = rLit[13];
        rA4 = (rA2->Val + 2 + (Fix) 1)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLx11event_46); goto lRet;}
        rA4 = (GIa1->Val + 2 + (Fix) 59)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLx11event_47); goto lRet;}
        (rA2->Val + 2 + (Fix) 0)->Val = rLit[30];
        (--rSp)->Val = ((Ptr) GLx11event_49);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11event_49() {    /* call_x11event_48 */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) 8)    {aRet = ((Ptr) GLx11event_50); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLx11event_52);
        {aRet = (GYx11event[32] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11event_52() {    /* call_x11event_51 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp->Val->Val + 2 + (Fix) 2)->Val = GIa1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_50() {    /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_47() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_46() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_53() {    /* #:display:x11:visibility-change-code */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYx11event; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        (rA2->Val + 2 + (Fix) 0)->Val = rLit[13];
        rA4 = (rA2->Val + 2 + (Fix) 1)->Val;
        if (rA4 == rNil)        goto l_101;
        rA4 = (rA1->Val + 2 + (Fix) 60)->Val;
        if (rA4 == rNil)        goto l_103;
        (rA2->Val + 2 + (Fix) 0)->Val = rLit[33];
        rA1 = rLit[33];
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11event_54() {    /* #:display:x11:reparent-notify-code */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYx11event; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        (rA2->Val + 2 + (Fix) 0)->Val = rLit[13];
        rA4 = (rA2->Val + 2 + (Fix) 1)->Val;
        if (rA4 == rNil)        goto l_101;
        rA4 = (rA1->Val + 2 + (Fix) 61)->Val;
        if (rA4 == rNil)        goto l_103;
        (rA2->Val + 2 + (Fix) 0)->Val = rLit[34];
        rA1 = rLit[34];
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11event_55() {    /* #:display:x11:parse-event */
   {    register Ptr aRet, rSp, rA1, rA2, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        rA4 = (rA2->Val + 2 + (Fix) 0)->Val;
        if (rA4 >= GIbfloat)    goto l_101;
        rA4 = (rA1->Val + 2 + (Fix) 62)->Val;
        GIa3 = (rA2->Val + 2 + (Fix) 0)->Val;
        rA4 = (rA4->Val + 2 + (Fix) (GIa3))->Val;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2;
        rA4 = (Ptr) 3;
        {aRet = (GYx11event[35] + 2)->Val; goto lRet;}
l_101:
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11event_56() {    /* #:display:x11:compute-event-mask */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = (Ptr) 0;
        rA1 = llrt_call_length (rA1, GIbcons);
        (--rSp)->Val = rA1;
        GIa2 = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLx11event_58);
        {aRet = (GYx11event[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11event_58() {    /* call_x11event_57 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLx11event_59); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_59() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYx11event; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLx11event_60); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA1 = rSp->Val;
        if (rA1 == rLit[14])    goto l_105;
        if (rA1 != rLit[15])    goto l_104;
l_105:
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 4)->Val))->Val = (Ptr) 0;
        {aRet = ((Ptr) GLx11event_61); goto lRet;}
l_104:
        if (rA1 != rLit[16])    goto l_106;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 4)->Val))->Val = (Ptr) 2;
        {aRet = ((Ptr) GLx11event_61); goto lRet;}
l_106:
        if (rA1 != rLit[17])    goto l_107;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 4)->Val))->Val = (Ptr) 3;
        {aRet = ((Ptr) GLx11event_61); goto lRet;}
l_107:
        if (rA1 != rLit[18])    goto l_108;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 4)->Val))->Val = (Ptr) 4;
        {aRet = ((Ptr) GLx11event_61); goto lRet;}
l_108:
        if (rA1 != rLit[19])    goto l_109;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 4)->Val))->Val = (Ptr) 5;
        {aRet = ((Ptr) GLx11event_61); goto lRet;}
l_109:
        if (rA1 != rLit[20])    goto l_110;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 4)->Val))->Val = (Ptr) 13;
        {aRet = ((Ptr) GLx11event_61); goto lRet;}
l_110:
        if (rA1 != rLit[21])    goto l_111;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 4)->Val))->Val = (Ptr) 6;
        {aRet = ((Ptr) GLx11event_61); goto lRet;}
l_111:
        if (rA1 != rLit[37])    goto l_112;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 4)->Val))->Val = (Ptr) 15;
        {aRet = ((Ptr) GLx11event_61); goto lRet;}
l_112:
        if (rA1 != rLit[25])    goto l_113;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 4)->Val))->Val = (Ptr) 17;
        {aRet = ((Ptr) GLx11event_61); goto lRet;}
l_113:
        if (rA1 != rLit[33])    goto l_114;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 4)->Val))->Val = (Ptr) 16;
        {aRet = ((Ptr) GLx11event_61); goto lRet;}
l_114:
        if (rA1 != rLit[29])    goto l_115;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 4)->Val))->Val = (Ptr) 17;
        {aRet = ((Ptr) GLx11event_61); goto lRet;}
l_115:
        if (rA1 != rLit[27])    goto l_116;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 4)->Val))->Val = (Ptr) 17;
        {aRet = ((Ptr) GLx11event_61); goto lRet;}
l_116:
        if (rA1 != rLit[34])    goto l_117;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 4)->Val))->Val = (Ptr) 17;
        {aRet = ((Ptr) GLx11event_61); goto lRet;}
l_117:
        if (rA1 != rLit[30])    goto l_118;
        {aRet = ((Ptr) GLx11event_61); goto lRet;}
l_118:
        if (rA1 != rLit[22])    goto l_119;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 4)->Val))->Val = (Ptr) 21;
        {aRet = ((Ptr) GLx11event_61); goto lRet;}
l_119:
        GIa3 = rA1;
        GIa2 = rLit[38];
        rA1 = rLit[39];
        (--rSp)->Val = ((Ptr) GLx11event_61);
        {aRet = (rLit[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11event_61() {    /* 103 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 4)->Val = rA4;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLx11event_59); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11event_60() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa2 = (rSp + 1)->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 4;
        {aRet = (GYx11event[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_62() {    /* #:display:x11:allow-event */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYx11event; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA1 = rA2;
        if (rA1 != rLit[14])    goto l_102;
        (rSp->Val->Val + 2 + (Fix) 56)->Val = rLit[5];
        goto l_101;
l_102:
        if (rA1 != rLit[15])    goto l_103;
        (rSp->Val->Val + 2 + (Fix) 55)->Val = rLit[5];
        goto l_101;
l_103:
        if (rA1 != rLit[21])    goto l_104;
        (rSp->Val->Val + 2 + (Fix) 54)->Val = rLit[5];
        (rSp->Val->Val + 2 + (Fix) 53)->Val = rLit[5];
        goto l_101;
l_104:
        if (rA1 != rLit[20])    goto l_105;
        (rSp->Val->Val + 2 + (Fix) 53)->Val = rLit[5];
        goto l_101;
l_105:
        if (rA1 != rLit[30])    goto l_101;
        (rSp->Val->Val + 2 + (Fix) 59)->Val = rLit[5];
l_101:
        rA4 = (rSp->Val->Val + 2 + (Fix) 31)->Val;
        (--rSp)->Val = rA4;
        rA2 = rA4;
        rA1 = llrt_call_memq (rA1, rA2, GIbcons, rNil);
        if (rA1 != rNil)        {aRet = ((Ptr) GLx11event_63); goto lRet;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLx11event_64);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rNil);
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLx11event_64() {    /* 110 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        rSp->Val = rA1;
        rSp->Val = rA1;
        {aRet = ((Ptr) GLx11event_63); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_63() {    /* 109 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBcons;
        rLit = GYx11event; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        rA2 = rSp->Val;
        rA1 = rLit[21];
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLx11event_65); goto lRet;}
        rA2 = rSp->Val;
        rA1 = rLit[20];
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 != rNil)        {aRet = ((Ptr) GLx11event_65); goto lRet;}
        (--rSp)->Val = rLit[20];
        (--rSp)->Val = ((Ptr) GLx11event_66);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rNil);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLx11event_66() {    /* 113 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        rSp->Val = rA1;
        rSp->Val = rA1;
        {aRet = ((Ptr) GLx11event_65); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_65() {    /* 112 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11event; rSp = GIsp;
        ((rSp + 1)->Val->Val + 2 + (Fix) 31)->Val = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11event_67);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[43];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[44] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_67() {    /* 114 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11event; rSp = GIsp;
        ((rSp + 1)->Val->Val + 2 + (Fix) 39)->Val = GIa1;
        GIa2 = rLit[37];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11event_69);
        {aRet = (rLit[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_69() {    /* call_x11event_68 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 1)->Val->Val + 2 + (Fix) 40)->Val = GIa1;
        ((rSp + 1)->Val->Val + 2 + (Fix) 41)->Val = rSp->Val;
        GIa1 = ((rSp + 1)->Val->Val + 2 + (Fix) 39)->Val;
        (--rSp)->Val = ((Ptr) GLx11event_71);
        {aRet = (GYx11event[39] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_71() {    /* call_x11event_70 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 1)->Val->Val + 2 + (Fix) 42)->Val = GIa1;
        GIa1 = ((rSp + 1)->Val->Val + 2 + (Fix) 40)->Val;
        (--rSp)->Val = ((Ptr) GLx11event_73);
        {aRet = (GYx11event[39] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_73() {    /* call_x11event_72 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 1)->Val->Val + 2 + (Fix) 43)->Val = GIa1;
        GIa1 = ((rSp + 1)->Val->Val + 2 + (Fix) 41)->Val;
        (--rSp)->Val = ((Ptr) GLx11event_75);
        {aRet = (GYx11event[39] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_75() {    /* call_x11event_74 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 1)->Val->Val + 2 + (Fix) 44)->Val = GIa1;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_76() {    /* #:display:x11:disallow-event */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYx11event; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA1 = rA2;
        if (rA1 != rLit[14])    goto l_102;
        (rSp->Val->Val + 2 + (Fix) 56)->Val = rNil;
        goto l_101;
l_102:
        if (rA1 != rLit[15])    goto l_103;
        (rSp->Val->Val + 2 + (Fix) 55)->Val = rNil;
        goto l_101;
l_103:
        if (rA1 != rLit[21])    goto l_104;
        (rSp->Val->Val + 2 + (Fix) 54)->Val = rNil;
        goto l_101;
l_104:
        if (rA1 != rLit[20])    goto l_105;
        (rSp->Val->Val + 2 + (Fix) 53)->Val = rNil;
        goto l_101;
l_105:
        if (rA1 != rLit[30])    goto l_101;
        (rSp->Val->Val + 2 + (Fix) 59)->Val = rNil;
l_101:
        rA2 = (rSp->Val->Val + 2 + (Fix) 39)->Val;
        (--rSp)->Val = ((Ptr) GLx11event_78);
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLx11event_78() {    /* call_x11event_77 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp->Val->Val + 2 + (Fix) 39)->Val = GIa1;
        GIa2 = (rSp->Val->Val + 2 + (Fix) 40)->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11event_80);
        {aRet = (GYx11event[46] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_80() {    /* call_x11event_79 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp->Val->Val + 2 + (Fix) 40)->Val = GIa1;
        GIa2 = (rSp->Val->Val + 2 + (Fix) 41)->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11event_82);
        {aRet = (GYx11event[46] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_82() {    /* call_x11event_81 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp->Val->Val + 2 + (Fix) 41)->Val = GIa1;
        GIa1 = (rSp->Val->Val + 2 + (Fix) 39)->Val;
        (--rSp)->Val = ((Ptr) GLx11event_84);
        {aRet = (GYx11event[39] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_84() {    /* call_x11event_83 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp->Val->Val + 2 + (Fix) 42)->Val = GIa1;
        GIa1 = (rSp->Val->Val + 2 + (Fix) 40)->Val;
        (--rSp)->Val = ((Ptr) GLx11event_86);
        {aRet = (GYx11event[39] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_86() {    /* call_x11event_85 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp->Val->Val + 2 + (Fix) 43)->Val = GIa1;
        GIa1 = (rSp->Val->Val + 2 + (Fix) 41)->Val;
        (--rSp)->Val = ((Ptr) GLx11event_88);
        {aRet = (GYx11event[39] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_88() {    /* call_x11event_87 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp->Val->Val + 2 + (Fix) 44)->Val = GIa1;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11event_89() {    /* #:display:x11:allowed-event-p */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        rA2 = (rA1->Val + 2 + (Fix) 31)->Val;
        rA1 = (rSp++)->Val;
        rA1 = llrt_call_memq (rA1, rA2, GIbcons, GInil);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GDx11event_90() {    /* trace #:display:x11:event-mode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,47,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_91() {    /* trace #:display:x11:flush-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,50,48,51);
  lRet:  return (aRet);}}

static Ptr GDx11event_92() {    /* trace #:display:x11:eventp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,52,48,51);
  lRet:  return (aRet);}}

static Ptr GDx11event_93() {    /* trace #:display:x11:read-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,53,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_94() {    /* trace #:display:x11:peek-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,54,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_95() {    /* trace #:display:x11:read-mouse */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,55,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_96() {    /* trace #:display:x11:add-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,56,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_97() {    /* trace #:display:x11:grab-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,57,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_98() {    /* trace #:display:x11:ungrab-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,58,48,51);
  lRet:  return (aRet);}}

static Ptr GDx11event_99() {    /* trace #:display:x11:itsoft-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,59,48,51);
  lRet:  return (aRet);}}

static Ptr GDx11event_100() {   /* trace #:display:x11:default-event-code */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,60,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_101() {   /* trace #:display:x11:ascii-event-code */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,61,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_102() {   /* trace #:display:x11:functionkey-event-code */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,62,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_103() {   /* trace #:display:x11:down-event-code */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,63,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_104() {   /* trace #:display:x11:up-event-code */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,64,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_105() {   /* trace #:display:x11:enterwindow-event-code */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,65,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_106() {   /* trace #:display:x11:leavewindow-event-code */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,66,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_107() {   /* trace #:display:x11:movedrag-event-code */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,67,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_108() {   /* trace #:display:x11:keyboard-focus-event-code */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,68,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_109() {   /* trace #:display:x11:repaint-window-event-code */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,69,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_110() {   /* trace #:display:x11:kill-window-event-code */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,70,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_111() {   /* trace #:display:x11:modify-window-event-code */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,71,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_112() {   /* trace #:display:x11:unmap-window-code */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,72,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_113() {   /* trace #:display:x11:map-window-code */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,73,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_114() {   /* trace #:display:x11:client-message-code */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,74,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_115() {   /* trace #:display:x11:visibility-change-code */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,75,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_116() {   /* trace #:display:x11:reparent-notify-code */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,76,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_117() {   /* trace #:display:x11:parse-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,6,48,77);
  lRet:  return (aRet);}}

static Ptr GDx11event_118() {   /* trace #:display:x11:compute-event-mask */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,39,48,51);
  lRet:  return (aRet);}}

static Ptr GDx11event_119() {   /* trace #:display:x11:allow-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,78,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_120() {   /* trace #:display:x11:disallow-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,79,48,49);
  lRet:  return (aRet);}}

static Ptr GDx11event_121() {   /* trace #:display:x11:allowed-event-p */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11event,80,48,49);
  lRet:  return (aRet);}}

