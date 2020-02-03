/* GELL 15.26: source file for the module: "x11bitmap" */
/*             translation done:           "Tue Aug  24 93 10:48:17 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "x11bitmap.h" 

static Ptr GLx11bitmap_1() {    /* #:display:x11:create-bitmap */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        GIa4 = (rA1->Val + 2 + (Fix) 21)->Val;
        GIa3 = (rA1->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = GInil;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = rA2;
        (--rSp)->Val = ((Ptr) GLx11bitmap_3);
        {aRet = (GYx11bitmap[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11bitmap_3() {    /* call_x11bitmap_2 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 2)->Val = GIa1;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        GIa2 = ((rSp + 4)->Val->Val + 2 + (Fix) 0)->Val;
        GIa3 = ((rSp + 4)->Val->Val + 2 + (Fix) 1)->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11bitmap_5);
        {aRet = (GYx11bitmap[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11bitmap_5() {    /* call_x11bitmap_4 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 1)->Val = GIa1;
        if ((rSp + 1)->Val == GInil)    {aRet = ((Ptr) GLx11bitmap_6); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11bitmap_8);
        {aRet = (GYx11bitmap[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11bitmap_8() {    /* call_x11bitmap_7 */
   {    register Ptr aRet, rSp, rA1, rA3;
        rSp = GIsp; rA1 = GIa1; rA3 = GIa3;
        (rSp + 2)->Val = rA1;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 5)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        GIa2 = rA1;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11bitmap_10);
        {aRet = (GYx11bitmap[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; return (aRet);}}

static Ptr GLx11bitmap_10() {   /* call_x11bitmap_9 */
   {    register Ptr aRet, rSp, rA3;
        rSp = GIsp; rA3 = GIa3;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 4)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        GIa2 = (rSp + 2)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11bitmap_6);
        {aRet = (GYx11bitmap[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLx11bitmap_6() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 3;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11bitmap_11() {   /* #:display:x11:kill-bitmap */
   {    register Ptr aRet, rSp, rA2, rA4, rNil;
        rSp = GIsp; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA2;
        rA4 = (rA2->Val + 2 + (Fix) 2)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        if (rA4 != rNil)        {aRet = ((Ptr) GLx11bitmap_12); goto lRet;}
        rA4 = (rA2->Val + 2 + (Fix) 2)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLx11bitmap_12); goto lRet;}
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 2)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11bitmap_12);
        {aRet = (GYx11bitmap[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLx11bitmap_12() {   /* 102 */
   {    register Ptr aRet, rSp, rA4, rNil;
        rSp = GIsp; rA4 = GIa4; rNil = GInil;
        rA4 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        (rA4->Val + 2 + (Fix) 0)->Val = rNil;
        rA4 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        (rA4->Val + 2 + (Fix) 1)->Val = rNil;
        GIa1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11bitmap_13() {   /* #:display:x11:get-bit-line */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYx11bitmap; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if (rA4 == (Ptr) 4)     goto l_101;
        rA1 = rLit[6];
        rA2 = (Ptr) 4;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = (Ptr) 0;
        if (rA4 == GInil)       goto l_103;
        rA3 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA3 != rLit[8])     goto l_103;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        rA2 = rSp->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (rA3)));
        rSp->Val = rA2;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        rA1 = (rSp + 2)->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA3)));
        (rSp + 2)->Val = rA1;
l_103:
        (--rSp)->Val = ((Ptr) GXpopj5);
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 2)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA3 = ((rSp + 9)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 6;
        {aRet = (rLit[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11bitmap_14() {   /* #:display:x11:set-bit-line */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYx11bitmap; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 4)     goto l_101;
        rA1 = rLit[10];
        rA2 = (Ptr) 4;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        rA3 = ((rSp + 3)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA3;
        if (rA4 == rNil)        goto l_103;
        rA2 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA2 != rLit[8])     goto l_103;
        rA2 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 5)->Val;
        rA1 = (rSp + 2)->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA2)));
        (rSp + 2)->Val = rA1;
        rA2 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 6)->Val;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rA2)));
        (rSp + 4)->Val = rA4;
l_103:
        rA1 = rA3;
        (--rSp)->Val = ((Ptr) GLx11bitmap_16);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11bitmap_16() {   /* call_x11bitmap_15 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (rSp + 1)->Val = rA1;
        (--rSp)->Val = ((Ptr) GXpopj7);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 2)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 11)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 7;
        {aRet = (GYx11bitmap[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11bitmap_17() {   /* #:display:x11:bmref */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYx11bitmap; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if (rA4 == (Ptr) 4)     goto l_101;
        rA1 = rLit[12];
        rA2 = (Ptr) 4;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        if (rA4 == GInil)       goto l_103;
        rA3 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA3 != rLit[8])     goto l_103;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        rA2 = (rSp + 1)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (rA3)));
        (rSp + 1)->Val = rA2;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        rA1 = rSp->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA3)));
        rSp->Val = rA1;
l_103:
        (--rSp)->Val = ((Ptr) GXpopj4);
        rA3 = ((rSp + 4)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 4)->Val->Val + 2 + (Fix) 2)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (rLit[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11bitmap_18() {   /* #:display:x11:bmset */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYx11bitmap; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 5)     goto l_101;
        rA1 = rLit[14];
        rA2 = (Ptr) 5;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 2)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        rA3 = ((rSp + 4)->Val->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = rNil;
        if (rA4 == rNil)        goto l_103;
        rA2 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA2 != rLit[8])     goto l_103;
        rA2 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 5)->Val;
        rA1 = (rSp + 3)->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA2)));
        (rSp + 3)->Val = rA1;
        rA2 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 6)->Val;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rA2)));
        (rSp + 2)->Val = rA4;
l_103:
        if (rA3 == rNil)        goto l_104;
        rA4 = (rA3->Val + 2 + (Fix) 12)->Val;
        if (rA4 == rNil)        goto l_104;
        rA4 = (rA3->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        {aRet = ((Ptr) GLx11bitmap_19); goto lRet;}
l_104:
        rA1 = ((rSp + 5)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = ((Ptr) GLx11bitmap_21);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11bitmap_21() {   /* call_x11bitmap_20 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLx11bitmap_19); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11bitmap_19() {   /* 105 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        rSp->Val = rA4;
        (--rSp)->Val = ((Ptr) GLx11bitmap_22);
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 2)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 6;
        {aRet = (GYx11bitmap[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11bitmap_22() {   /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11bitmap_23() {   /* #:display:x11:get-byte-line */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYx11bitmap; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if (rA4 == (Ptr) 4)     goto l_101;
        rA1 = rLit[16];
        rA2 = (Ptr) 4;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = (Ptr) 0;
        if (rA4 == GInil)       goto l_103;
        rA3 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA3 != rLit[8])     goto l_103;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        rA2 = rSp->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (rA3)));
        rSp->Val = rA2;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        rA1 = (rSp + 2)->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA3)));
        (rSp + 2)->Val = rA1;
l_103:
        (--rSp)->Val = ((Ptr) GXpopj5);
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 2)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA3 = ((rSp + 9)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 6;
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11bitmap_24() {   /* #:display:x11:set-byte-line */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYx11bitmap; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if (rA4 == (Ptr) 4)     goto l_101;
        rA1 = rLit[18];
        rA2 = (Ptr) 4;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = (Ptr) 0;
        if (rA4 == GInil)       goto l_103;
        rA3 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA3 != rLit[8])     goto l_103;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        rA2 = rSp->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (rA3)));
        rSp->Val = rA2;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        rA1 = (rSp + 2)->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA3)));
        (rSp + 2)->Val = rA1;
l_103:
        (--rSp)->Val = ((Ptr) GXpopj5);
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 2)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA3 = ((rSp + 9)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 6;
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11bitmap_25() {   /* #:display:x11:byteref */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYx11bitmap; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if (rA4 == (Ptr) 4)     goto l_101;
        rA1 = rLit[20];
        rA2 = (Ptr) 4;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        if (rA4 == GInil)       goto l_103;
        rA3 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA3 != rLit[8])     goto l_103;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        rA2 = (rSp + 1)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (rA3)));
        (rSp + 1)->Val = rA2;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        rA1 = rSp->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA3)));
        rSp->Val = rA1;
l_103:
        (--rSp)->Val = ((Ptr) GXpopj4);
        rA3 = ((rSp + 4)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 4)->Val->Val + 2 + (Fix) 2)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (rLit[21] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11bitmap_26() {   /* #:display:x11:byteset */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYx11bitmap; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if (rA4 == (Ptr) 5)     goto l_101;
        rA1 = rLit[22];
        rA2 = (Ptr) 5;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 2)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        if (rA4 == GInil)       goto l_103;
        rA3 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA3 != rLit[8])     goto l_103;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        rA2 = (rSp + 2)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (rA3)));
        (rSp + 2)->Val = rA2;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        rA1 = (rSp + 1)->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA3)));
        (rSp + 1)->Val = rA1;
l_103:
        (--rSp)->Val = ((Ptr) GLx11bitmap_27);
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 2)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11bitmap_27() {   /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11bitmap_28() {   /* #:display:x11:reverse-bit-vector */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rA4;
        {aRet = ((Ptr) GLx11bitmap_29); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11bitmap_29() {   /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLx11bitmap_30);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYx11bitmap[24] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11bitmap_30() {   /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLx11bitmap_31); goto lRet;}
        GIa1 = (Ptr) ((unsigned char) *(((char *) ((rSp + 2)->Val->Val + 2)) + (Fix) ((rSp + 1)->Val)));
        (--rSp)->Val = ((Ptr) GLx11bitmap_33);
        {aRet = ((Ptr) GLx11bitmap_34); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11bitmap_33() {   /* call_x11bitmap_32 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        *((char *) ((rSp + 2)->Val->Val + 2) + (Fix) ((rSp + 1)->Val)) = (char) GIa1;
        (--rSp)->Val = ((Ptr) GLx11bitmap_35);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (GYx11bitmap[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11bitmap_35() {   /* 104 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLx11bitmap_29); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11bitmap_31() {   /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11bitmap_34() {   /* #:display:x11:bit-reverse */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYx11bitmap; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA1 = (Ptr) ((UFix) (rA1) & (UFix) 15);
        rA1 = (rLit[26]->Val->Val + 2 + (Fix) (rA1))->Val;
        rA1 = (Ptr) (UFix) ((UFix) (rA1) << 4);
        rA4 = rSp->Val;
        rA4 = (Ptr) (UFix) ((UFix) (rA4) >> 4);
        rA4 = (rLit[26]->Val->Val + 2 + (Fix) (rA4))->Val;
        rA1 = (Ptr) ((UFix) (rA1) | (UFix) (rA4));
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11bitmap_36() {   /* #:display:x11:bitblit */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYx11bitmap; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 9)     goto l_101;
        rA1 = rLit[27];
        rA2 = (Ptr) 9;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 2)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 2)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        if ((Fix) ((rSp + 6)->Val) >= (Fix) 0)  goto l_103;
        rA2 = (rSp + 4)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) - (Fix) ((rSp + 6)->Val)));
        (rSp + 4)->Val = rA2;
        rA2 = (rSp + 2)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) ((rSp + 6)->Val)));
        (rSp + 2)->Val = rA2;
        (rSp + 6)->Val = (Ptr) 0;
l_103:
        if ((Fix) ((rSp + 5)->Val) >= (Fix) 0)  goto l_105;
        rA2 = (rSp + 3)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) - (Fix) ((rSp + 5)->Val)));
        (rSp + 3)->Val = rA2;
        rA2 = (rSp + 1)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) ((rSp + 5)->Val)));
        (rSp + 1)->Val = rA2;
        (rSp + 5)->Val = (Ptr) 0;
l_105:
        if ((Fix) ((rSp + 4)->Val) >= (Fix) 0)  goto l_107;
        rA2 = (rSp + 6)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) - (Fix) ((rSp + 4)->Val)));
        (rSp + 6)->Val = rA2;
        rA2 = (rSp + 2)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) ((rSp + 4)->Val)));
        (rSp + 2)->Val = rA2;
        (rSp + 4)->Val = (Ptr) 0;
l_107:
        if ((Fix) ((rSp + 3)->Val) >= (Fix) 0)  goto l_109;
        rA2 = (rSp + 5)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) - (Fix) ((rSp + 3)->Val)));
        (rSp + 5)->Val = rA2;
        rA2 = (rSp + 1)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) ((rSp + 3)->Val)));
        (rSp + 1)->Val = rA2;
        (rSp + 3)->Val = (Ptr) 0;
l_109:
        rA2 = (rSp + 4)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) ((rSp + 2)->Val)));
        rA1 = ((rSp + 7)->Val->Val + 2 + (Fix) 0)->Val;
        if ((Fix) (rA2) <= (Fix) (rA1)) goto l_111;
        rA2 = ((rSp + 7)->Val->Val + 2 + (Fix) 0)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) - (Fix) ((rSp + 4)->Val)));
        (rSp + 2)->Val = rA2;
l_111:
        rA2 = (rSp + 3)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) ((rSp + 1)->Val)));
        rA1 = ((rSp + 7)->Val->Val + 2 + (Fix) 1)->Val;
        if ((Fix) (rA2) <= (Fix) (rA1)) goto l_113;
        rA2 = ((rSp + 7)->Val->Val + 2 + (Fix) 1)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) - (Fix) ((rSp + 3)->Val)));
        (rSp + 1)->Val = rA2;
l_113:
        if (rA4 == rNil)        goto l_115;
        rA2 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA2 != rLit[8])     goto l_115;
        rA2 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 5)->Val;
        rA1 = (rSp + 6)->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA2)));
        (rSp + 6)->Val = rA1;
        rA2 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 6)->Val;
        rA4 = (rSp + 5)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rA2)));
        (rSp + 5)->Val = rA4;
l_115:
        if (rA3 == rNil)        goto l_117;
        rA4 = (rA3->Val + 2 + (Fix) 15)->Val;
        if (rA4 != rLit[8])     goto l_117;
        rA4 = (rA3->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 5)->Val;
        rA2 = (rSp + 4)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (rA4)));
        (rSp + 4)->Val = rA2;
        rA4 = (rA3->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 6)->Val;
        rA1 = (rSp + 3)->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA4)));
        (rSp + 3)->Val = rA1;
l_117:
        if ((Fix) ((rSp + 2)->Val) <= (Fix) 0)  {aRet = ((Ptr) GLx11bitmap_37); goto lRet;}
        if ((Fix) ((rSp + 1)->Val) <= (Fix) 0)  {aRet = ((Ptr) GLx11bitmap_37); goto lRet;}
        (--rSp)->Val = ((Ptr) GLx11bitmap_38);
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 2)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 2)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
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
        if ((rSp + 10)->Val == rNil)    goto l_121;
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        goto l_122;
l_121:
        rA4 = ((rSp + 19)->Val->Val + 2 + (Fix) 11)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
l_122:
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 10;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11bitmap_38() {   /* 120 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11bitmap_37() {   /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11bitmap_39() {   /* #:display:x11:create-window-bitmap */
   {    register Ptr aRet, rSp, rA3;
        rSp = GIsp; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA3;
        (--rSp)->Val = ((Ptr) GLx11bitmap_41);
        {aRet = (GYx11bitmap[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11bitmap_41() {   /* call_x11bitmap_40 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 2)->Val = GIa1;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val;
        (rA4->Val + 2 + (Fix) 0)->Val = rSp->Val;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val;
        rA3 = (rSp->Val->Val + 2 + (Fix) 15)->Val;
        if (rA3 != GYx11bitmap[8])      goto l_101;
        rA3 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 7)->Val;
        goto l_102;
l_101:
        rA3 = rSp->Val;
l_102:
        rA3 = (rA3->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (rA4->Val + 2 + (Fix) 1)->Val = rA3;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11bitmap_42() {   /* #:display:x11:subst-colors */
   {    register Ptr aRet, rSp, rA1, rA3;
        rSp = GIsp; rA1 = GIa1; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        rA1 = rA3;
        rA1 = llrt_call_length (rA1, GIbcons);
        (--rSp)->Val = rA1;
        GIa2 = GInil;
        (--rSp)->Val = ((Ptr) GLx11bitmap_44);
        {aRet = (GYx11bitmap[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11bitmap_44() {   /* call_x11bitmap_43 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = GInil;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11bitmap_46);
        {aRet = (GYx11bitmap[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11bitmap_46() {   /* call_x11bitmap_45 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
l_101:
        if ((long) rSp->Val < (long) GIbcons)   goto l_102;
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = rSp->Val;
        rSp->Val = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val = rSp->Val;
        ((rSp + 3)->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val = rA4;
        rA3 = (rSp + 2)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 1));
        (rSp + 2)->Val = rA3;
        rSp += (Fix) 1;
        goto l_101;
l_102:
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GXpopj7);
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 2)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 11)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 12)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 7;
        {aRet = (GYx11bitmap[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11bitmap_47() {   /* #:display:x11:create-stipple */
   {    register Ptr aRet, rSp, rA3;
        rSp = GIsp; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa1 = rA3;
        (--rSp)->Val = ((Ptr) GLx11bitmap_49);
        {aRet = ((Ptr) GLx11bitmap_28); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11bitmap_49() {   /* call_x11bitmap_48 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLx11bitmap_51);
        {aRet = (GYx11bitmap[0] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11bitmap_51() {   /* call_x11bitmap_50 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val = GIa1;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLx11bitmap_52);
        rA3 = ((rSp + 2)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 4)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (GYx11bitmap[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11bitmap_52() {   /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 1)->Val = GIa1;
        GIa1 = (rSp + 2)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLx11bitmap_28); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11bitmap_53() {   /* #:display:x11:kill-stipple */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 2)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        {aRet = (GYx11bitmap[5] + 2)->Val; goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GDx11bitmap_54() {   /* trace #:display:x11:create-bitmap */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11bitmap,32,33,34);
  lRet:  return (aRet);}}

static Ptr GDx11bitmap_55() {   /* trace #:display:x11:kill-bitmap */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11bitmap,35,33,34);
  lRet:  return (aRet);}}

static Ptr GDx11bitmap_56() {   /* trace #:display:x11:get-bit-line */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11bitmap,6,33,36);
  lRet:  return (aRet);}}

static Ptr GDx11bitmap_57() {   /* trace #:display:x11:set-bit-line */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11bitmap,10,33,36);
  lRet:  return (aRet);}}

static Ptr GDx11bitmap_58() {   /* trace #:display:x11:bmref */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11bitmap,12,33,36);
  lRet:  return (aRet);}}

static Ptr GDx11bitmap_59() {   /* trace #:display:x11:bmset */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11bitmap,14,33,36);
  lRet:  return (aRet);}}

static Ptr GDx11bitmap_60() {   /* trace #:display:x11:get-byte-line */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11bitmap,16,33,36);
  lRet:  return (aRet);}}

static Ptr GDx11bitmap_61() {   /* trace #:display:x11:set-byte-line */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11bitmap,18,33,36);
  lRet:  return (aRet);}}

static Ptr GDx11bitmap_62() {   /* trace #:display:x11:byteref */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11bitmap,20,33,36);
  lRet:  return (aRet);}}

static Ptr GDx11bitmap_63() {   /* trace #:display:x11:byteset */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11bitmap,22,33,36);
  lRet:  return (aRet);}}

static Ptr GDx11bitmap_64() {   /* trace #:display:x11:bitblit */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11bitmap,27,33,36);
  lRet:  return (aRet);}}

static Ptr GDx11bitmap_65() {   /* trace #:display:x11:create-window-bitmap */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11bitmap,37,33,38);
  lRet:  return (aRet);}}

static Ptr GDx11bitmap_66() {   /* trace #:display:x11:subst-colors */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11bitmap,39,33,38);
  lRet:  return (aRet);}}

static Ptr GDx11bitmap_67() {   /* trace #:display:x11:create-stipple */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11bitmap,40,33,38);
  lRet:  return (aRet);}}

static Ptr GDx11bitmap_68() {   /* trace #:display:x11:kill-stipple */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11bitmap,41,33,34);
  lRet:  return (aRet);}}

