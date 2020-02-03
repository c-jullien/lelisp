/* GELL 15.26: source file for the module: "virmenu" */
/*             translation done:           "Tue Aug  24 93 10:48:46 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "virmenu.h" 

static Ptr GLvirmenu_1() {      /* #:menu:itemlist */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirmenu_3);
        {aRet = (GYvirmenu[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_3() {      /* call_virmenu_2 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rA1->Val + 2 + (Fix) 4)->Val = rSp->Val;
        (rA1->Val + 2 + (Fix) 5)->Val = (rSp + 1)->Val;
        (rA1->Val + 2 + (Fix) 6)->Val = (rSp + 2)->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_4() {      /* #:menu:item */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirmenu_6);
        {aRet = (GYvirmenu[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_6() {      /* call_virmenu_5 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rA1->Val + 2 + (Fix) 4)->Val = rSp->Val;
        (rA1->Val + 2 + (Fix) 5)->Val = (rSp + 1)->Val;
        (rA1->Val + 2 + (Fix) 6)->Val = (rSp + 2)->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_7() {      /* create-menu */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYvirmenu; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[2];
        rA2 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = rNil;
        goto l_nlist_virmenu_9;
l_nlist_virmenu_8:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virmenu_9:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virmenu_8;}
        (--rSp)->Val = rA1;
        if ((rSp + 1)->Val == rNil)     {aRet = ((Ptr) GLvirmenu_10); goto lRet;}
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_12);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirmenu_12() {     /* call_virmenu_11 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLvirmenu_10); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirmenu_10() {     /* 103 */
   {    register Ptr aRet, *rLit;
        rLit = GYvirmenu;
        if (rLit[5]->Val != GInil)      goto l_105;
        GIa3 = rLit[5]->Val;
        GIa2 = rLit[6];
        GIa1 = rLit[2];
         GIa1 = llrt_call_error ();
l_105:
        (--GIsp)->Val = ((Ptr) GLvirmenu_14);
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirmenu_14() {     /* call_virmenu_13 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirmenu; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = (Ptr) ((UFix) 0xffff);
        (--rSp)->Val = rA1;
        (rA1->Val + 2 + (Fix) 2)->Val = rLit[5]->Val;
        (rA1->Val + 2 + (Fix) 0)->Val = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_15);
        (--rSp)->Val = rLit[2];
        rA4 = (rA1->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 3;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirmenu_15() {     /* 106 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirmenu; rSp = GIsp; rA1 = GIa1;
        rSp->Val = rA1;
        (rA1->Val + 2 + (Fix) 2)->Val = rLit[5]->Val;
        (rA1->Val + 2 + (Fix) 0)->Val = (rSp + 3)->Val;
        (--rSp)->Val = rLit[5]->Val;
        rA1 = (rLit[5]->Val->Val + 2 + (Fix) 16)->Val;
        GIa2 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_17);
        {aRet = (rLit[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirmenu_17() {     /* call_virmenu_16 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 16)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirmenu_18);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        rA4 = (Ptr) 4;
        {aRet = (GYvirmenu[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirmenu_18() {     /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((rSp + 2)->Val == GInil)    {aRet = ((Ptr) GLvirmenu_19); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirmenu_18);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_21);
        {aRet = (GYvirmenu[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_21() {     /* call_virmenu_20 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (rSp + 4)->Val = rA1;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 6)->Val;
        (rSp + 6)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = (Ptr) 1;
        rA4 = (rSp + 8)->Val;
        (rSp + 8)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 6;
        {aRet = (GYvirmenu[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirmenu_19() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_22() {     /* kill-menu */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirmenu; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[13];
        (--rSp)->Val = ((Ptr) GLvirmenu_24);
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_24() {     /* call_virmenu_23 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYvirmenu; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rSp->Val;
        rA2 = rLit[15];
        rA1 = rLit[16];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        if (rA4 != rNil)        goto l_104;
        GIa3 = rA4;
        rA2 = rLit[6];
        rA1 = rLit[16];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA2 = rLit[17];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_26);
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirmenu_26() {     /* call_virmenu_25 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirmenu; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_106;
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[18];
        rA1 = rLit[16];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = ((Ptr) GLvirmenu_27);
        (--rSp)->Val = rLit[16];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 3;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirmenu_27() {     /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp->Val->Val + 2 + (Fix) 16)->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_29);
        {aRet = (GYvirmenu[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_29() {     /* call_virmenu_28 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (rSp->Val->Val + 2 + (Fix) 16)->Val = GIa1;
        ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val = rNil;
        ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val = rNil;
        GIa1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_30() {     /* activate-menu */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirmenu; rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[13];
        (--rSp)->Val = ((Ptr) GLvirmenu_32);
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_32() {     /* call_virmenu_31 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirmenu; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        if (rA1 != rNil)        goto l_102;
        rA3 = rSp->Val;
        rA2 = rLit[15];
        rA1 = rLit[20];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val < rBfloat)   goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[21];
        rA1 = rLit[20];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        if ((rSp + 2)->Val < rBfloat)   goto l_106;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[21];
        rA1 = rLit[20];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        rA4 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        if (rA4 != rNil)        goto l_108;
        rA3 = rA4;
        rA2 = rLit[6];
        rA1 = rLit[20];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_108:
        rA2 = rLit[17];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_34);
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirmenu_34() {     /* call_virmenu_33 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirmenu; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_111;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_110;
l_111:
        GIa3 = rSp->Val;
        GIa2 = rLit[18];
        rA1 = rLit[20];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_110:
        (--rSp)->Val = ((Ptr) GLvirmenu_35);
        rA4 = (Ptr) 0;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirmenu_35() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirmenu_36);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirmenu_37);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirmenu[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_37() {     /* 115 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirmenu; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirmenu_38);
        (--rSp)->Val = rLit[20];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 5;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_38() {     /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj5);
        {aRet = ((Ptr) GLvirmenu_36); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_36() {     /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLvirmenu_39);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirmenu[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_39() {     /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_40() {     /* menu-insert-item-list */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirmenu; rSp = GIsp;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = rLit[10];
        GIa2 = (Ptr) 4;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
l_101:
        GIa2 = rLit[13];
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_42);
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_42() {     /* call_virmenu_41 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYvirmenu; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_103;
        GIa3 = (rSp + 3)->Val;
        rA2 = rLit[15];
        rA1 = rLit[10];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        if (rA4 != rNil)        goto l_105;
        GIa3 = rA4;
        rA2 = rLit[6];
        rA1 = rLit[10];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        rA2 = rLit[17];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_44);
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirmenu_44() {     /* call_virmenu_43 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYvirmenu; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        if (rA1 == rNil)        goto l_108;
        GIa4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (GIa4 != rNil)       goto l_107;
l_108:
        GIa3 = rSp->Val;
        rA2 = rLit[18];
        rA1 = rLit[10];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_107:
        rA2 = ((rSp + 4)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA2;
        GIa3 = rNil;
        rA2 = (rSp + 2)->Val;
        rA1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_46);
        {aRet = ((Ptr) GLvirmenu_1); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLvirmenu_46() {     /* call_virmenu_45 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = (rSp++)->Val;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_48);
        {aRet = ((Ptr) GLvirmenu_49); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_48() {     /* call_virmenu_47 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirmenu; rSp = GIsp;
        ((rSp + 4)->Val->Val + 2 + (Fix) 1)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GXpopj5);
        (--rSp)->Val = rLit[10];
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
        GIa4 = (Ptr) 6;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_50() {     /* menu-insert-item */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirmenu; rSp = GIsp;
        if (GIa4 == (Ptr) 6)    goto l_101;
        GIa1 = rLit[12];
        GIa2 = (Ptr) 6;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
l_101:
        GIa2 = rLit[13];
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_52);
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_52() {     /* call_virmenu_51 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYvirmenu; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_103;
        GIa3 = (rSp + 5)->Val;
        rA2 = rLit[15];
        rA1 = rLit[12];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        if (rA4 != rNil)        goto l_105;
        GIa3 = rA4;
        rA2 = rLit[6];
        rA1 = rLit[12];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        rA2 = rLit[17];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_54);
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirmenu_54() {     /* call_virmenu_53 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYvirmenu; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_108;
        GIa4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (GIa4 != rNil)       goto l_107;
l_108:
        GIa3 = rSp->Val;
        GIa2 = rLit[18];
        rA1 = rLit[12];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_107:
        GIa2 = ((rSp + 6)->Val->Val + 2 + (Fix) 1)->Val;
        rA1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_56);
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirmenu_56() {     /* call_virmenu_55 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA1 == GInil)       {aRet = ((Ptr) GLvirmenu_57); goto lRet;}
        (--rSp)->Val = rA1;
        rA2 = (rA1->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA2;
        GIa3 = (rSp + 3)->Val;
        rA2 = (rSp + 4)->Val;
        rA1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_59);
        {aRet = ((Ptr) GLvirmenu_4); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLvirmenu_59() {     /* call_virmenu_58 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = (rSp++)->Val;
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_61);
        {aRet = ((Ptr) GLvirmenu_49); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_61() {     /* call_virmenu_60 */
   {    register Ptr aRet;
        GIa4 = (GIsp++)->Val;
        (GIa4->Val + 2 + (Fix) 6)->Val = GIa1;
        {aRet = ((Ptr) GLvirmenu_57); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirmenu_57() {     /* 110 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirmenu; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj7);
        (--rSp)->Val = rLit[12];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
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
        GIa4 = (Ptr) 8;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_62() {     /* menu-delete-item-list */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirmenu; rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[13];
        (--rSp)->Val = ((Ptr) GLvirmenu_64);
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_64() {     /* call_virmenu_63 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYvirmenu; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rSp->Val;
        rA2 = rLit[15];
        rA1 = rLit[24];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        if (rA4 != rNil)        goto l_104;
        GIa3 = rA4;
        rA2 = rLit[6];
        rA1 = rLit[24];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA2 = rLit[17];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_66);
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirmenu_66() {     /* call_virmenu_65 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYvirmenu; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        GIa4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (GIa4 != rNil)       goto l_106;
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[18];
        rA1 = rLit[24];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_106:
        GIa2 = ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val;
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_68);
        {aRet = ((Ptr) GLvirmenu_69); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirmenu_68() {     /* call_virmenu_67 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirmenu; rSp = GIsp;
        ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GXpopj3);
        (--rSp)->Val = rLit[24];
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
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_70() {     /* menu-delete-item */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirmenu; rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[13];
        (--rSp)->Val = ((Ptr) GLvirmenu_72);
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_72() {     /* call_virmenu_71 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYvirmenu; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rSp->Val;
        rA2 = rLit[15];
        rA1 = rLit[25];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        if (rA4 != rNil)        goto l_104;
        GIa3 = rA4;
        rA2 = rLit[6];
        rA1 = rLit[25];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA2 = rLit[17];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_74);
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirmenu_74() {     /* call_virmenu_73 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYvirmenu; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        GIa4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (GIa4 != rNil)       goto l_106;
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[18];
        rA1 = rLit[25];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_106:
        GIa2 = ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val;
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_76);
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirmenu_76() {     /* call_virmenu_75 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLvirmenu_77); goto lRet;}
        (--rSp)->Val = rA1;
        GIa2 = (rA1->Val + 2 + (Fix) 6)->Val;
        rA1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_79);
        {aRet = ((Ptr) GLvirmenu_69); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirmenu_79() {     /* call_virmenu_78 */
   {    register Ptr aRet;
        GIa4 = (GIsp++)->Val;
        (GIa4->Val + 2 + (Fix) 6)->Val = GIa1;
        {aRet = ((Ptr) GLvirmenu_77); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirmenu_77() {     /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirmenu; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rLit[25];
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
        GIa4 = (Ptr) 5;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_80() {     /* menu-modify-item-list */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirmenu; rSp = GIsp;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = rLit[26];
        GIa2 = (Ptr) 4;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
l_101:
        GIa2 = rLit[13];
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_82);
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_82() {     /* call_virmenu_81 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYvirmenu; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_103;
        GIa3 = (rSp + 3)->Val;
        rA2 = rLit[15];
        rA1 = rLit[26];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        if (rA4 != rNil)        goto l_105;
        GIa3 = rA4;
        rA2 = rLit[6];
        rA1 = rLit[26];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        rA2 = rLit[17];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_84);
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirmenu_84() {     /* call_virmenu_83 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYvirmenu; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_108;
        GIa4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (GIa4 != rNil)       goto l_107;
l_108:
        GIa3 = rSp->Val;
        GIa2 = rLit[18];
        rA1 = rLit[26];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_107:
        GIa2 = ((rSp + 4)->Val->Val + 2 + (Fix) 1)->Val;
        rA1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_86);
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirmenu_86() {     /* call_virmenu_85 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rA1;
        if (rA1 == rNil)        {aRet = ((Ptr) GLvirmenu_87); goto lRet;}
        if ((rSp + 3)->Val == rNil)     {aRet = ((Ptr) GLvirmenu_88); goto lRet;}
        (--rSp)->Val = rA1;
        rA1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_90);
        {aRet = (GYvirmenu[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirmenu_90() {     /* call_virmenu_89 */
   {    register Ptr aRet;
        GIa4 = (GIsp++)->Val;
        (GIa4->Val + 2 + (Fix) 4)->Val = GIa1;
        {aRet = ((Ptr) GLvirmenu_88); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirmenu_88() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((rSp + 2)->Val == GInil)    {aRet = ((Ptr) GLvirmenu_87); goto lRet;}
        (rSp->Val->Val + 2 + (Fix) 5)->Val = (rSp + 2)->Val;
        {aRet = ((Ptr) GLvirmenu_87); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirmenu_87() {     /* 110 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirmenu; rSp = GIsp;
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GXpopj5);
        (--rSp)->Val = rLit[26];
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
        GIa4 = (Ptr) 6;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_91() {     /* menu-modify-item */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirmenu; rSp = GIsp;
        if (GIa4 == (Ptr) 6)    goto l_101;
        GIa1 = rLit[27];
        GIa2 = (Ptr) 6;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
l_101:
        GIa2 = rLit[13];
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_93);
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_93() {     /* call_virmenu_92 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYvirmenu; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_103;
        GIa3 = (rSp + 5)->Val;
        rA2 = rLit[15];
        rA1 = rLit[27];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        if (rA4 != rNil)        goto l_105;
        GIa3 = rA4;
        rA2 = rLit[6];
        rA1 = rLit[27];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        rA2 = rLit[17];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_95);
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirmenu_95() {     /* call_virmenu_94 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYvirmenu; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_108;
        GIa4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (GIa4 != rNil)       goto l_107;
l_108:
        GIa3 = rSp->Val;
        GIa2 = rLit[18];
        rA1 = rLit[27];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_107:
        GIa2 = ((rSp + 6)->Val->Val + 2 + (Fix) 1)->Val;
        rA1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_97);
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirmenu_97() {     /* call_virmenu_96 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rNil;
        if (rA1 == rNil)        {aRet = ((Ptr) GLvirmenu_98); goto lRet;}
        GIa2 = (rA1->Val + 2 + (Fix) 6)->Val;
        rA1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_100);
        {aRet = (GYvirmenu[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirmenu_100() {    /* call_virmenu_99 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp->Val = rA1;
        if ((rSp + 4)->Val == GInil)    {aRet = ((Ptr) GLvirmenu_101); goto lRet;}
        (--rSp)->Val = rA1;
        rA1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_103);
        {aRet = (GYvirmenu[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirmenu_103() {    /* call_virmenu_102 */
   {    register Ptr aRet;
        GIa4 = (GIsp++)->Val;
        (GIa4->Val + 2 + (Fix) 4)->Val = GIa1;
        {aRet = ((Ptr) GLvirmenu_101); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirmenu_101() {    /* 112 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        if ((rSp + 3)->Val == rNil)     goto l_114;
        (rSp->Val->Val + 2 + (Fix) 5)->Val = (rSp + 3)->Val;
l_114:
        if ((rSp + 2)->Val == rNil)     {aRet = ((Ptr) GLvirmenu_98); goto lRet;}
        (rSp->Val->Val + 2 + (Fix) 6)->Val = (rSp + 2)->Val;
        {aRet = ((Ptr) GLvirmenu_98); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirmenu_98() {     /* 110 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirmenu; rSp = GIsp;
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GXpopj7);
        (--rSp)->Val = rLit[27];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
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
        GIa4 = (Ptr) 8;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirmenu_69() {     /* deletenth */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
l_GLvirmenu_69:
        if ((long) rA2 >= (long) GIbcons)       goto l_101;
        rA1 = rA2;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if (rA1 != (Ptr) 0)     goto l_103;
        rA1 = (rA2 + 1)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        (--rSp)->Val = rA2;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        rA2 = (rA2 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_105);
        goto l_GLvirmenu_69;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLvirmenu_105() {    /* call_virmenu_104 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4 + 1)->Val = GIa1;
        GIa1 = rA4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirmenu_49() {     /* insertnth */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
l_GLvirmenu_49:
        if ((long) rA2 >= (long) GIbcons)       goto l_101;
        rA1 = rA3;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if (rA1 != (Ptr) 0)     goto l_103;
        rA1 = rA3;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        (--rSp)->Val = rA2;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        rA2 = (rA2 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirmenu_107);
        goto l_GLvirmenu_49;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLvirmenu_107() {    /* call_virmenu_106 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4 + 1)->Val = GIa1;
        GIa1 = rA4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GDvirmenu_108() {    /* trace create-menu */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirmenu,2,28,29);
  lRet:  return (aRet);}}

static Ptr GDvirmenu_109() {    /* trace kill-menu */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirmenu,16,28,30);
  lRet:  return (aRet);}}

static Ptr GDvirmenu_110() {    /* trace activate-menu */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirmenu,20,28,31);
  lRet:  return (aRet);}}

static Ptr GDvirmenu_111() {    /* trace menu-insert-item-list */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirmenu,10,28,29);
  lRet:  return (aRet);}}

static Ptr GDvirmenu_112() {    /* trace menu-insert-item */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirmenu,12,28,29);
  lRet:  return (aRet);}}

static Ptr GDvirmenu_113() {    /* trace menu-delete-item-list */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirmenu,24,28,32);
  lRet:  return (aRet);}}

static Ptr GDvirmenu_114() {    /* trace menu-delete-item */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirmenu,25,28,31);
  lRet:  return (aRet);}}

static Ptr GDvirmenu_115() {    /* trace menu-modify-item-list */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirmenu,26,28,29);
  lRet:  return (aRet);}}

static Ptr GDvirmenu_116() {    /* trace menu-modify-item */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirmenu,27,28,29);
  lRet:  return (aRet);}}

