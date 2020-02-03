/* GELL 15.26: source file for the module: "x11menu" */
/*             translation done:           "Tue Aug  24 93 10:48:32 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "x11menu.h" 

static Ptr GLx11menu_1() {      /* menuwindow */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLx11menu_3);
        {aRet = (GYx11menu[0] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_3() {      /* call_x11menu_2 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rA1->Val + 2 + (Fix) 0)->Val = (rSp + 4)->Val;
        (rA1->Val + 2 + (Fix) 1)->Val = (rSp + 3)->Val;
        (rA1->Val + 2 + (Fix) 2)->Val = (rSp + 2)->Val;
        (rA1->Val + 2 + (Fix) 3)->Val = (rSp + 1)->Val;
        (rA1->Val + 2 + (Fix) 4)->Val = rSp->Val;
        (rA1->Val + 2 + (Fix) 5)->Val = (Ptr) 2;
        (rA1->Val + 2 + (Fix) 6)->Val = (Ptr) 1;
        (rA1->Val + 2 + (Fix) 16)->Val = GYx11menu[1];
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_4() {      /* #:display:x11:create-menu */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = ((Ptr) GLx11menu_6);
        {aRet = (GYx11menu[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_6() {      /* call_x11menu_5 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 3)->Val = GIa1;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_7() {      /* #:display:x11:kill-menu */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_8() {      /* #:display:x11:activate-menu */
   {    register Ptr aRet, *rLit;
        rLit = GYx11menu;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = rLit[3];
        GIa2 = (Ptr) 4;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
l_101:
        (--GIsp)->Val = ((Ptr) GLx11menu_9);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_9() {      /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11menu_10);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLx11menu_11);
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYx11menu[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_11() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 4)->Val;
        GIa2 = (rSp + 5)->Val;
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_13);
        {aRet = ((Ptr) GLx11menu_14); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_13() {     /* call_x11menu_12 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_16);
        {aRet = ((Ptr) GLx11menu_17); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_16() {     /* call_x11menu_15 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        {aRet = ((Ptr) GLx11menu_18); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_18() {     /* 106 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLx11menu_20);
        {aRet = (GYx11menu[6] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_20() {     /* call_x11menu_19 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLx11menu_21); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLx11menu_22);
        GIa4 = (Ptr) 0;
        {aRet = (GYx11menu[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_22() {     /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 2)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11menu_24);
        {aRet = (GYx11menu[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_24() {     /* call_x11menu_23 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 1)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLx11menu_25);
        (--rSp)->Val = rA1;
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 4;
        {aRet = (GYx11menu[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_25() {     /* 109 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLx11menu_26);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (GYx11menu[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11menu_26() {     /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        rSp->Val = GIa1;
        {aRet = ((Ptr) GLx11menu_18); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_21() {     /* 111 */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4, rNil;
        rLit = GYx11menu; rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rSp->Val == rNil)   goto l_112;
        (--rSp)->Val = ((Ptr) GLx11menu_21);
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
l_112:
        rSp += (Fix) 3;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 3)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (rSp + 3)->Val = rA4;
        if (rA4 == rNil)        {aRet = ((Ptr) GLx11menu_27); goto lRet;}
        rA3 = ((rSp + 10)->Val->Val + 2 + (Fix) 3)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (rSp + 2)->Val = rA3;
        if (rA3 == rNil)        {aRet = ((Ptr) GLx11menu_27); goto lRet;}
        if ((Fix) (rA4) < (Fix) 0)      {aRet = ((Ptr) GLx11menu_27); goto lRet;}
        if ((Fix) (rA3) < (Fix) 0)      {aRet = ((Ptr) GLx11menu_27); goto lRet;}
        GIa2 = ((rSp + 10)->Val->Val + 2 + (Fix) 1)->Val;
        GIa1 = rA4;
        (--rSp)->Val = ((Ptr) GLx11menu_29);
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_29() {     /* call_x11menu_28 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (rSp + 1)->Val = rA1;
        if (rA1 == rNil)        {aRet = ((Ptr) GLx11menu_27); goto lRet;}
        if (rA1 == rNil)        {aRet = ((Ptr) GLx11menu_27); goto lRet;}
        GIa2 = (rA1->Val + 2 + (Fix) 6)->Val;
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_31);
        {aRet = (GYx11menu[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11menu_31() {     /* call_x11menu_30 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        rSp->Val = rA1;
        if (rA1 == rNil)        {aRet = ((Ptr) GLx11menu_27); goto lRet;}
        if (rA1 == rNil)        {aRet = ((Ptr) GLx11menu_27); goto lRet;}
        GIa4 = (rA1->Val + 2 + (Fix) 5)->Val;
        if ((Ptr) 0 == GIa4)    {aRet = ((Ptr) GLx11menu_27); goto lRet;}
        rA1 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        {aRet = ((Ptr) GLx11menu_32); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLx11menu_27() {     /* 114 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = ((Ptr) GLx11menu_32); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_32() {     /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 4;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj5);
        {aRet = ((Ptr) GLx11menu_10); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_10() {     /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLx11menu_33);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYx11menu[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_33() {     /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_34() {     /* #:display:x11:menu-insert-item */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11menu; rSp = GIsp;
        if (GIa4 == (Ptr) 7)    goto l_101;
        GIa1 = rLit[13];
        GIa2 = (Ptr) 7;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
l_101:
        GIa1 = GInil;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_35() {     /* #:display:x11:menu-insert-item-list */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11menu; rSp = GIsp;
        if (GIa4 == (Ptr) 5)    goto l_101;
        GIa1 = rLit[14];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
l_101:
        GIa1 = GInil;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_36() {     /* #:display:x11:menu-delete-item-list */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_37() {     /* #:display:x11:menu-delete-item */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11menu; rSp = GIsp;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = rLit[15];
        GIa2 = (Ptr) 4;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
l_101:
        GIa1 = GInil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_38() {     /* #:display:x11:menu-modify-item-list */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11menu; rSp = GIsp;
        if (GIa4 == (Ptr) 5)    goto l_101;
        GIa1 = rLit[16];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
l_101:
        GIa1 = GInil;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_39() {     /* #:display:x11:menu-modify-item */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11menu; rSp = GIsp;
        if (GIa4 == (Ptr) 7)    goto l_101;
        GIa1 = rLit[17];
        GIa2 = (Ptr) 7;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
l_101:
        GIa1 = GInil;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_40() {     /* #:display:x11:itemlist:width */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (GIa1->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = GInil;
        (--rSp)->Val = GIa4;
        {aRet = ((Ptr) GLx11menu_41); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_41() {     /* 101 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLx11menu_42); goto lRet;}
        rA1 = rSp->Val;
        rSp->Val = (rA1 + 1)->Val;
        rA1 = (rA1->Val->Val + 2 + (Fix) 4)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_44);
        {aRet = ((Ptr) GLx11menu_45); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11menu_44() {     /* call_x11menu_43 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 1)->Val = rA1;
        if ((Fix) (rA1) <= (Fix) ((rSp + 2)->Val))      {aRet = ((Ptr) GLx11menu_41); goto lRet;}
        (rSp + 2)->Val = rA1;
        {aRet = ((Ptr) GLx11menu_41); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_42() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_46() {     /* #:display:x11:height */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11menu_48);
        {aRet = (GYx11menu[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_48() {     /* call_x11menu_47 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa4 = ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = GIa4;
        {aRet = ((Ptr) GLx11menu_49); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_49() {     /* 101 */
   {    register Ptr aRet, rSp, rA1, rBcons;
        rSp = GIsp; rA1 = GIa1; rBcons = GIbcons;
        if ((long) rSp->Val < (long) rBcons)    {aRet = ((Ptr) GLx11menu_50); goto lRet;}
        rA1 = rSp->Val;
        rSp->Val = (rA1 + 1)->Val;
        rA1 = (rA1->Val->Val + 2 + (Fix) 6)->Val;
        rA1 = llrt_call_length (rA1, rBcons);
        GIa2 = rA1;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_52);
        {aRet = (GYx11menu[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11menu_52() {     /* call_x11menu_51 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLx11menu_49); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_50() {     /* 102 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 0)->Val;
        if (rA4 == GInil)       goto l_104;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 1)->Val = rA4;
l_104:
        rA4 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        rA3 = (rSp++)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) * (Fix) (rA4)));
        GIa1 = rA3;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_53() {     /* #:display:x11:width */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        GIa4 = (rA1->Val + 2 + (Fix) 0)->Val;
        if (GIa4 == GInil)      {aRet = ((Ptr) GLx11menu_54); goto lRet;}
        rA1 = (rA1->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_56);
        {aRet = ((Ptr) GLx11menu_45); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11menu_56() {     /* call_x11menu_55 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLx11menu_57); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_54() {     /* 101 */
   {    register Ptr aRet;
        GIa4 = (Ptr) 0;
        {aRet = ((Ptr) GLx11menu_57); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_57() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa4;
        {aRet = ((Ptr) GLx11menu_58); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_58() {     /* 103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLx11menu_59); goto lRet;}
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_61);
        {aRet = ((Ptr) GLx11menu_40); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11menu_61() {     /* call_x11menu_60 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (GIa1)));
        (rSp + 2)->Val = rA4;
        {aRet = ((Ptr) GLx11menu_58); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_59() {     /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = rSp->Val;
        GIa1 = (rSp + 2)->Val;
        rSp += (Fix) 4;
        {aRet = (GYx11menu[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_45() {     /* width-string */
   {    register Ptr aRet;
        GIa3 = (GIa1->Val + 1)->Val;
        GIa2 = (Ptr) 0;
        {aRet = (GYx11menu[20] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_62() {     /* #:display:x11:redraw-menu */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11menu_64);
        {aRet = (GYx11menu[21] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_64() {     /* call_x11menu_63 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11menu_66);
        {aRet = (GYx11menu[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_66() {     /* call_x11menu_65 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11menu_67);
        GIa4 = (Ptr) 0;
        {aRet = (GYx11menu[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_67() {     /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11menu_68);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLx11menu_69);
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 3)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYx11menu[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_69() {     /* 104 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((rSp + 7)->Val == GInil)    {aRet = ((Ptr) GLx11menu_70); goto lRet;}
        (--rSp)->Val = ((Ptr) GLx11menu_70);
        rA4 = ((rSp + 8)->Val->Val + 2 + (Fix) 5)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 9)->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 7)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 11)->Val->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = (GYx11menu[24] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_70() {     /* 106 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLx11menu_72);
        {aRet = (GYx11menu[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_72() {     /* call_x11menu_71 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = ((rSp + 6)->Val->Val + 2 + (Fix) 0)->Val;
        if (GIa4 != GInil)      goto l_108;
        {aRet = ((Ptr) GLx11menu_73); goto lRet;}
l_108:
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_75);
        {aRet = ((Ptr) GLx11menu_53); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_75() {     /* call_x11menu_74 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = ((rSp + 7)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_77);
        {aRet = ((Ptr) GLx11menu_45); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_77() {     /* call_x11menu_76 */
   {    register Ptr aRet, rSp, rA2, rA3, rA4;
        rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) / (Fix) 2));
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_78);
        rA2 = (rSp + 6)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (rA4)));
        (--rSp)->Val = rA2;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA3;
        (--rSp)->Val = (Ptr) 0;
        rA2 = (rA3->Val + 1)->Val;
        (--rSp)->Val = rA2;
        rA4 = (Ptr) 5;
        {aRet = (GYx11menu[26] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_78() {     /* 110 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLx11menu_79);
        GIa4 = (Ptr) 0;
        {aRet = (GYx11menu[27] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_79() {     /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11menu_80);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLx11menu_81);
        (--rSp)->Val = (Ptr) 6;
        GIa4 = (Ptr) 1;
        {aRet = (GYx11menu[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_81() {     /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLx11menu_82);
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa1 = (rSp + 13)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_84);
        {aRet = ((Ptr) GLx11menu_53); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_84() {     /* call_x11menu_83 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11menu_86);
        {aRet = (GYx11menu[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_86() {     /* call_x11menu_85 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYx11menu[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_82() {     /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLx11menu_87);
        {aRet = ((Ptr) GLx11menu_80); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_80() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLx11menu_88);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYx11menu[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_88() {     /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_87() {     /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLx11menu_90);
        {aRet = (GYx11menu[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_90() {     /* call_x11menu_89 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (GIa1)));
        (rSp + 4)->Val = rA4;
        {aRet = ((Ptr) GLx11menu_73); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_73() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = ((rSp + 6)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = GIa4;
        {aRet = ((Ptr) GLx11menu_91); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_91() {     /* 117 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLx11menu_92); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        {aRet = ((Ptr) GLx11menu_93); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_93() {     /* 119 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLx11menu_94); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (rSp->Val->Val + 2 + (Fix) 4)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_95);
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 0;
        GIa3 = (rA4->Val + 1)->Val;
        (--rSp)->Val = GIa3;
        rA4 = (Ptr) 5;
        {aRet = (GYx11menu[26] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_95() {     /* 121 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLx11menu_97);
        {aRet = (GYx11menu[18] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_97() {     /* call_x11menu_96 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 8)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (GIa1)));
        (rSp + 8)->Val = rA4;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLx11menu_93); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_94() {     /* 120 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLx11menu_99);
        {aRet = (GYx11menu[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_99() {     /* call_x11menu_98 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 6)->Val = GIa1;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_101);
        {aRet = ((Ptr) GLx11menu_40); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_101() {    /* call_x11menu_100 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 7)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (GIa1)));
        (rSp + 7)->Val = rA4;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLx11menu_91); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_92() {     /* 118 */
   {    register Ptr aRet, rSp, rA2, rA3, rA4, rBfloat;
        rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat;
        rSp += (Fix) 1;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 3)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        if (rA4 >= rBfloat)     {aRet = ((Ptr) GLx11menu_102); goto lRet;}
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 3)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        if (rA4 >= rBfloat)     {aRet = ((Ptr) GLx11menu_102); goto lRet;}
        rA2 = ((rSp + 6)->Val->Val + 2 + (Fix) 3)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 3)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_102);
        {aRet = ((Ptr) GLx11menu_103); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_102() {    /* 123 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((rSp + 7)->Val == GInil)    {aRet = ((Ptr) GLx11menu_104); goto lRet;}
        (--rSp)->Val = ((Ptr) GLx11menu_105);
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLx11menu_106);
        GIa4 = (Ptr) 0;
        {aRet = (GYx11menu[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_106() {    /* 127 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (GIa1->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLx11menu_107);
        rA4 = (Ptr) 0;
        {aRet = (GYx11menu[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_107() {    /* 128 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = (GIa1->Val + 2 + (Fix) 3)->Val;
        (--GIsp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = (GYx11menu[24] + 2)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_104() {    /* 124 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = ((Ptr) GLx11menu_105); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_105() {    /* 125 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj5);
        {aRet = ((Ptr) GLx11menu_68); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_68() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLx11menu_108);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYx11menu[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_108() {    /* 129 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_109() {    /* #:display:x11:find-list */
   {    register Ptr aRet;
        GIa1 = (GIa1->Val + 2 + (Fix) 1)->Val;
        GIa3 = (Ptr) 0;
        {aRet = ((Ptr) GLx11menu_110); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_110() {    /* #:display:x11:find-list1 */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) >= (Fix) 0)     goto l_101;
        rA1 = rNil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if (rA1 != rNil)        goto l_103;
        rA1 = rNil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        (--rSp)->Val = rA2;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_112);
        {aRet = ((Ptr) GLx11menu_40); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11menu_112() {    /* call_x11menu_111 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa4 = (rSp++)->Val;
        if ((Fix) (GIa4) >= (Fix) (rA1))        goto l_105;
        rA1 = (rSp + 2)->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        rA1 = rSp->Val;
        (--rSp)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_114);
        {aRet = ((Ptr) GLx11menu_40); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11menu_114() {    /* call_x11menu_113 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        rA3 = (rSp + 3)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 1));
        GIa2 = rA4;
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLx11menu_110); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_115() {    /* #:display:x11:itemlist-x */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        GIa2 = (GIa1->Val + 2 + (Fix) 1)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLx11menu_116); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_116() {    /* #:display:x11:itemlist-x1 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 != (Ptr) 0)     goto l_101;
        rA1 = (Ptr) 0;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rA2->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_118);
        {aRet = ((Ptr) GLx11menu_40); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11menu_118() {    /* call_x11menu_117 */
   {    register Ptr aRet, rSp, rA2, rA4;
        rSp = GIsp; rA2 = GIa2; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA2 = (rSp + 2)->Val;
        rA2 = (rA2 + 1)->Val;
        GIa1 = rA4;
        (--rSp)->Val = ((Ptr) GLx11menu_120);
        {aRet = ((Ptr) GLx11menu_116); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_120() {    /* call_x11menu_119 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (GIa1)));
        GIa1 = rA4;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_103() {    /* #:display:x11:invert-item */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rNil = GInil;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA3) < (Fix) 0)      {aRet = ((Ptr) GLx11menu_121); goto lRet;}
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        if (rA2 == rNil)        {aRet = ((Ptr) GLx11menu_122); goto lRet;}
        if (rA3 == rNil)        {aRet = ((Ptr) GLx11menu_122); goto lRet;}
        (--rSp)->Val = rA2;
        rA2 = (rA1->Val + 2 + (Fix) 1)->Val;
        rA1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_124);
        {aRet = (GYx11menu[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLx11menu_124() {    /* call_x11menu_123 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 1)->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLx11menu_122); goto lRet;}
        GIa4 = (rA1->Val + 2 + (Fix) 5)->Val;
        if ((Ptr) 0 == GIa4)    {aRet = ((Ptr) GLx11menu_122); goto lRet;}
        GIa2 = (rA1->Val + 2 + (Fix) 6)->Val;
        rA1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_126);
        {aRet = (GYx11menu[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11menu_126() {    /* call_x11menu_125 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLx11menu_122); goto lRet;}
        GIa4 = (rA1->Val + 2 + (Fix) 5)->Val;
        if ((Ptr) 0 == GIa4)    {aRet = ((Ptr) GLx11menu_122); goto lRet;}
        GIa2 = (rSp + 3)->Val;
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_128);
        {aRet = ((Ptr) GLx11menu_115); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11menu_128() {    /* call_x11menu_127 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 0)->Val;
        if (rA4 == GInil)       goto l_105;
        rA4 = (rSp + 5)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        goto l_106;
l_105:
        rA4 = (rSp + 5)->Val;
l_106:
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLx11menu_130);
        {aRet = (GYx11menu[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_130() {    /* call_x11menu_129 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) * (Fix) (GIa1)));
        (--rSp)->Val = rA4;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_132);
        {aRet = ((Ptr) GLx11menu_40); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_132() {    /* call_x11menu_131 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11menu_134);
        {aRet = (GYx11menu[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_134() {    /* call_x11menu_133 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11menu_135);
        GIa4 = (Ptr) 0;
        {aRet = (GYx11menu[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_135() {    /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11menu_136);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLx11menu_137);
        (--rSp)->Val = (Ptr) 6;
        GIa4 = (Ptr) 1;
        {aRet = (GYx11menu[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_137() {    /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLx11menu_138);
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
        GIa4 = (Ptr) 4;
        {aRet = (GYx11menu[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_138() {    /* 111 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 3)->Val;
        (rA4->Val + 2 + (Fix) 0)->Val = (rSp + 11)->Val;
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 3)->Val;
        (rA4->Val + 2 + (Fix) 1)->Val = (rSp + 12)->Val;
        rA4 = (rSp + 12)->Val;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = rA4;
        GIa3 = ((Ptr) GLx11menu_139);
        {aRet = ((Ptr) GLx11menu_136); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_136() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLx11menu_140);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYx11menu[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_140() {    /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_139() {    /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_122() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_121() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_141() {    /* #:display:x11:next-position */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = GYx11menu[29];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        {aRet = ((Ptr) GLx11menu_142); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_142() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLx11menu_143);
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYx11menu[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_143() {    /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYx11menu; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        rA1 = ((rSp + 5)->Val->Val + 2 + (Fix) 0)->Val;
        if (rA1 != rLit[30])    goto l_106;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 3)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 2)->Val;
        GIa3 = ((rSp + 5)->Val->Val + 2 + (Fix) 1)->Val;
        if (rA4 != GIa3)        {aRet = ((Ptr) GLx11menu_142); goto lRet;}
        rA2 = (rSp + 5)->Val;
        rA1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_142);
        {aRet = ((Ptr) GLx11menu_62); goto lRet;}
l_106:
        if (rA1 != rLit[31])    goto l_109;
        rA1 = rLit[32];
        rA2 = rLit[29];
        {aRet = (rLit[33] + 2)->Val; goto lRet;}
l_109:
        if (rA1 != rLit[34])    {aRet = ((Ptr) GLx11menu_142); goto lRet;}
        rA1 = rNil;
        rA2 = rLit[29];
        {aRet = (rLit[33] + 2)->Val; goto lRet;}
l_103:
        rA1 = rNil;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
l_101:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_17() {     /* #:display:x11:follow-mouse */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = (rA1->Val + 2 + (Fix) 3)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_145);
        {aRet = (GYx11menu[35] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11menu_145() {    /* call_x11menu_144 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLx11menu_146);
        GIa4 = (Ptr) 0;
        {aRet = (GYx11menu[36] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_146() {    /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLx11menu_147);
        GIa4 = (Ptr) 0;
        {aRet = (GYx11menu[23] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_147() {    /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11menu_148);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLx11menu_149);
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 3)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYx11menu[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_149() {    /* 105 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        {aRet = ((Ptr) GLx11menu_150); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_150() {    /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYx11menu[37]->Val;
        GIa1 = (rSp + 10)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_152);
        {aRet = ((Ptr) GLx11menu_141); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_152() {    /* call_x11menu_151 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11menu; rSp = GIsp; rA4 = GIa4;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLx11menu_153); goto lRet;}
        rA4 = (rLit[37]->Val->Val + 2 + (Fix) 6)->Val;
        if ((Fix) (rA4) >= (Fix) 0)     goto l_108;
        rA4 = (Ptr) ((UFix) 0xffff);
        {aRet = ((Ptr) GLx11menu_154); goto lRet;}
l_108:
        rA4 = (rLit[37]->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLx11menu_156);
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_156() {    /* call_x11menu_155 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = (GIsp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) / (Fix) (GIa1)));
        {aRet = ((Ptr) GLx11menu_154); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_154() {    /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 2)->Val = GIa4;
        GIa2 = (GYx11menu[37]->Val->Val + 2 + (Fix) 5)->Val;
        GIa1 = (rSp + 10)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_158);
        {aRet = ((Ptr) GLx11menu_109); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_158() {    /* call_x11menu_157 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (rSp + 3)->Val = rA1;
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 0)->Val;
        if (rA4 == GInil)       goto l_111;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (rSp + 2)->Val = rA4;
l_111:
        if (rA1 != (rSp + 5)->Val)      goto l_114;
        if ((rSp + 2)->Val == (rSp + 4)->Val)   {aRet = ((Ptr) GLx11menu_150); goto lRet;}
l_114:
        GIa3 = (rSp + 4)->Val;
        GIa2 = (rSp + 5)->Val;
        rA1 = (rSp + 10)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_160);
        {aRet = ((Ptr) GLx11menu_103); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_160() {    /* call_x11menu_159 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 5)->Val = (rSp + 3)->Val;
        (rSp + 4)->Val = (rSp + 2)->Val;
        GIa3 = (rSp + 4)->Val;
        GIa2 = (rSp + 5)->Val;
        GIa1 = (rSp + 10)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_150);
        {aRet = ((Ptr) GLx11menu_103); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_153() {    /* 107 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 3)->Val;
        (rA4->Val + 2 + (Fix) 0)->Val = (rSp + 5)->Val;
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 3)->Val;
        (rA4->Val + 2 + (Fix) 1)->Val = (rSp + 4)->Val;
        GIa1 = (rSp + 4)->Val;
        rSp += (Fix) 6;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLx11menu_161);
        {aRet = ((Ptr) GLx11menu_148); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_148() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLx11menu_162);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYx11menu[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_162() {    /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_161() {    /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLx11menu_164);
        {aRet = (GYx11menu[38] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_164() {    /* call_x11menu_163 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_166);
        {aRet = (GYx11menu[39] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11menu_166() {    /* call_x11menu_165 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLx11menu_167);
        GIa4 = (Ptr) 0;
        {aRet = (GYx11menu[36] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_167() {    /* 116 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        GIa4 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        (GIa4->Val + 2 + (Fix) 2)->Val = rNil;
        GIa1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_14() {     /* #:display:x11:draw-menu */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11menu_168);
        (--rSp)->Val = ((Ptr) GLx11menu_170);
        {aRet = ((Ptr) GLx11menu_53); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_170() {    /* call_x11menu_169 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) / (Fix) 2));
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) 1));
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLx11menu_171);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLx11menu_172);
        GIa4 = (Ptr) 0;
        {aRet = (GYx11menu[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11menu_172() {    /* 103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 3));
        (--rSp)->Val = rA1;
        rA1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_174);
        {aRet = ((Ptr) GLx11menu_53); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11menu_174() {    /* call_x11menu_173 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) / (Fix) 2));
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (rA1)));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (GYx11menu[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_171() {    /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYx11menu[42] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_168() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 1)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11menu_175);
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = ((Ptr) GLx11menu_176);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLx11menu_177);
        GIa4 = (Ptr) 0;
        {aRet = (GYx11menu[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_177() {    /* 106 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 3));
        (--rSp)->Val = rA1;
        rA1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_179);
        {aRet = ((Ptr) GLx11menu_46); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11menu_179() {    /* call_x11menu_178 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (GYx11menu[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_176() {    /* 105 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYx11menu[42] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_175() {    /* 104 */
   {    register Ptr aRet, rSp, rA4, rNil;
        rSp = GIsp; rA4 = GIa4; rNil = GInil;
        (rSp + 2)->Val = GIa1;
        rA4 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        (rA4->Val + 2 + (Fix) 0)->Val = rNil;
        rA4 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        (rA4->Val + 2 + (Fix) 1)->Val = rNil;
        rA4 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLx11menu_180);
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_182);
        {aRet = ((Ptr) GLx11menu_53); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_182() {    /* call_x11menu_181 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) / (Fix) 2));
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (rA1)));
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_184);
        {aRet = ((Ptr) GLx11menu_53); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_184() {    /* call_x11menu_183 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_186);
        {aRet = ((Ptr) GLx11menu_46); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_186() {    /* call_x11menu_185 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa3 = ((rSp + 6)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = GIa3;
        GIa4 = (Ptr) 5;
        {aRet = ((Ptr) GLx11menu_1); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_180() {    /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 2)->Val = GIa1;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_188);
        {aRet = ((Ptr) GLx11menu_189); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_188() {    /* call_x11menu_187 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = ((Ptr) GLx11menu_191);
        {aRet = (GYx11menu[44] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11menu_191() {    /* call_x11menu_190 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLx11menu_192);
        GIa4 = (Ptr) 0;
        {aRet = (GYx11menu[45] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_192() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11menu_193);
        GIa4 = (Ptr) 0;
        {aRet = (GYx11menu[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_193() {    /* 109 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11menu_194);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLx11menu_195);
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 3)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYx11menu[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11menu_195() {    /* 112 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLx11menu_196);
        GIa4 = (Ptr) 0;
        {aRet = (GYx11menu[23] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11menu_196() {    /* 115 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        if (GIa1 == rNil)       goto l_113;
        if ((rSp + 4)->Val == rNil)     goto l_113;
        (--rSp)->Val = ((Ptr) GLx11menu_197);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYx11menu[45] + 2)->Val; goto lRet;}
l_113:
        GIa1 = rNil;
        {aRet = ((Ptr) GLx11menu_197); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_197() {    /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj5);
        {aRet = ((Ptr) GLx11menu_194); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_194() {    /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLx11menu_198);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYx11menu[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_198() {    /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11menu_189() {    /* #:display:x11:initialise-menu */
   {    register Ptr aRet;
        GIa1 = GYx11menu[32];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDx11menu_199() {    /* trace #:display:x11:create-menu */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11menu,46,47,48);
  lRet:  return (aRet);}}

static Ptr GDx11menu_200() {    /* trace #:display:x11:kill-menu */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11menu,49,47,48);
  lRet:  return (aRet);}}

static Ptr GDx11menu_201() {    /* trace #:display:x11:activate-menu */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11menu,3,47,50);
  lRet:  return (aRet);}}

static Ptr GDx11menu_202() {    /* trace #:display:x11:menu-insert-item */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11menu,13,47,50);
  lRet:  return (aRet);}}

static Ptr GDx11menu_203() {    /* trace #:display:x11:menu-insert-item-list */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11menu,14,47,50);
  lRet:  return (aRet);}}

static Ptr GDx11menu_204() {    /* trace #:display:x11:menu-delete-item-list */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11menu,51,47,52);
  lRet:  return (aRet);}}

static Ptr GDx11menu_205() {    /* trace #:display:x11:menu-delete-item */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11menu,15,47,50);
  lRet:  return (aRet);}}

static Ptr GDx11menu_206() {    /* trace #:display:x11:menu-modify-item-list */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11menu,16,47,50);
  lRet:  return (aRet);}}

static Ptr GDx11menu_207() {    /* trace #:display:x11:menu-modify-item */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11menu,17,47,50);
  lRet:  return (aRet);}}

