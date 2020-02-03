/* GELL 15.26: source file for the module: "x11draw" */
/*             translation done:           "Tue Aug  24 93 10:48:21 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "x11draw.h" 

static Ptr GLx11draw_1() {      /* #:display:x11:draw-cursor */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYx11draw; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 5)     goto l_101;
        GIa1 = rLit[0];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 30)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLx11draw_2); goto lRet;}
        if (rSp->Val == rNil)   goto l_104;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 4)->Val;
        goto l_105;
l_104:
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 5)->Val;
l_105:
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLx11draw_4);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_4() {      /* call_x11draw_3 */
   {    register Ptr aRet, rSp, rA2, rA3, rA4;
        rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 13)->Val;
        rA3 = ((rSp + 4)->Val->Val + 2 + (Fix) 14)->Val;
        rA2 = ((rSp + 5)->Val->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA4;
        rA4 = (rSp + 6)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        (rSp + 6)->Val = rA4;
        rA4 = (rSp + 5)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (rSp->Val)));
        (rSp + 5)->Val = rA4;
        GIa1 = ((rSp + 8)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 7)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        rA3 = ((rSp + 3)->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = ((Ptr) GLx11draw_6);
        {aRet = (GYx11draw[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_6() {      /* call_x11draw_5 */
   {    register Ptr aRet, *rLit, rSp, rA2, rA3, rA4;
        rLit = GYx11draw; rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 15)->Val;
        if (rA4 != rLit[4])     goto l_106;
        (--rSp)->Val = ((Ptr) GLx11draw_7);
        rA4 = ((rSp + 9)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 12)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 8)->Val)));
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 7;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
l_106:
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 5)->Val;
        rA3 = ((rSp + 2)->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = ((Ptr) GLx11draw_7);
        rA2 = ((rSp + 9)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA2;
        rA2 = ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 7)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA2;
        rA2 = ((rSp + 10)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA2;
        rA2 = (rSp + 10)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (rA4)));
        (--rSp)->Val = rA2;
        rA2 = (rSp + 10)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (rA3)));
        (--rSp)->Val = rA2;
        rA2 = (rSp + 12)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (rA4)));
        (--rSp)->Val = rA2;
        rA2 = (rSp + 12)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) ((rSp + 8)->Val)));
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) - (Fix) 1));
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (rA3)));
        (--rSp)->Val = rA2;
        rA4 = (Ptr) 7;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_7() {      /* 107 */
   {    register Ptr aRet, rSp, rA2, rA3;
        rSp = GIsp; rA2 = GIa2; rA3 = GIa3;
        GIa1 = ((rSp + 8)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 7)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        rA3 = ((rSp + 7)->Val->Val + 2 + (Fix) 4)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        rSp += (Fix) 9;
        {aRet = (GYx11draw[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLx11draw_2() {      /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_8() {      /* #:display:x11:draw-substring */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4, rNil;
        rLit = GYx11draw; rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 7)     goto l_101;
        GIa1 = rLit[6];
        GIa2 = (Ptr) 7;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 30)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLx11draw_9); goto lRet;}
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = ((rSp + 2)->Val->Val + 1)->Val;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA3;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) ((rSp + 6)->Val)));
        (rSp + 1)->Val = rA3;
        if ((Fix) ((rSp + 6)->Val) > (Fix) (rSp->Val))  {aRet = ((Ptr) GLx11draw_10); goto lRet;}
        if ((Fix) ((rSp + 5)->Val) <= (Fix) (rA3))      goto l_107;
        (rSp + 5)->Val = rA3;
l_107:
        rA3 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA3 != rLit[4])     goto l_108;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (rSp + 2)->Val = rA3;
        goto l_109;
l_108:
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (rSp + 2)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 9)->Val)));
        (rSp + 9)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 8)->Val)));
        (rSp + 8)->Val = rA3;
l_109:
        rA3 = ((rSp + 10)->Val->Val + 2 + (Fix) 3)->Val;
        if (rA3 != rLit[7]->Val)        {aRet = ((Ptr) GLx11draw_11); goto lRet;}
        (--rSp)->Val = ((Ptr) GLx11draw_12);
        rA3 = ((rSp + 12)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA3 = ((rSp + 13)->Val->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 8;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_12() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 12;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_11() {     /* 110 */
   {    register Ptr aRet, rSp, rA3;
        rSp = GIsp; rA3 = GIa3;
        (--rSp)->Val = ((Ptr) GLx11draw_13);
        rA3 = ((rSp + 12)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA3 = ((rSp + 13)->Val->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 8;
        {aRet = (GYx11draw[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLx11draw_13() {     /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 12;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_10() {     /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 12;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_9() {      /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_14() {     /* #:display:x11:draw-cn */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11draw; rSp = GIsp;
        if (GIa4 == (Ptr) 5)    goto l_101;
        GIa1 = rLit[10];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        (--rSp)->Val = rLit[11];
        GIa3 = (rSp + 1)->Val;
        GIa2 = rSp->Val;
        GIa1 = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLx11draw_16);
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_16() {     /* call_x11draw_15 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj6);
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
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 7;
        {aRet = (GYx11draw[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_17() {     /* #:display:x11:draw-substring-nobackground */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4, rNil;
        rLit = GYx11draw; rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 7)     goto l_101;
        GIa1 = rLit[13];
        GIa2 = (Ptr) 7;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 30)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLx11draw_18); goto lRet;}
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = ((rSp + 2)->Val->Val + 1)->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA3;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) ((rSp + 4)->Val)));
        (rSp + 1)->Val = rA3;
        if ((Fix) ((rSp + 4)->Val) > (Fix) (rSp->Val))  {aRet = ((Ptr) GLx11draw_19); goto lRet;}
        if ((Fix) ((rSp + 3)->Val) <= (Fix) (rA3))      goto l_107;
        (rSp + 3)->Val = rA3;
l_107:
        rA3 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA3 != rLit[4])     goto l_108;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (rSp + 2)->Val = rA3;
        goto l_109;
l_108:
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (rSp + 2)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 7)->Val)));
        (rSp + 7)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 6)->Val)));
        (rSp + 6)->Val = rA3;
l_109:
        (--rSp)->Val = ((Ptr) GLx11draw_20);
        rA3 = ((rSp + 10)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA3 = ((rSp + 11)->Val->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
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
        rA4 = (Ptr) 8;
        {aRet = (rLit[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_20() {     /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_19() {     /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_18() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_21() {     /* #:display:x11:draw-cn-nobackground */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11draw; rSp = GIsp;
        if (GIa4 == (Ptr) 5)    goto l_101;
        GIa1 = rLit[14];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        (--rSp)->Val = rLit[11];
        GIa3 = (rSp + 1)->Val;
        GIa2 = rSp->Val;
        GIa1 = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLx11draw_23);
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_23() {     /* call_x11draw_22 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj6);
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
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 7;
        {aRet = (GYx11draw[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_24() {     /* #:display:x11:draw-point */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4, rNil;
        rLit = GYx11draw; rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 4)     goto l_101;
        GIa1 = rLit[15];
        GIa2 = (Ptr) 4;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 30)->Val;
        if (rA4 == rNil)        goto l_102;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA3 != rLit[4])     goto l_104;
        (--rSp)->Val = ((Ptr) GXpopj4);
        rA3 = ((rSp + 4)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
l_104:
        (--rSp)->Val = ((Ptr) GXpopj4);
        rA3 = ((rSp + 4)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 5)->Val)));
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 5)->Val)));
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 5;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
l_102:
        GIa1 = rNil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_25() {     /* #:display:x11:draw-line */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYx11draw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 6)     goto l_101;
        rA1 = rLit[17];
        rA2 = (Ptr) 6;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        if ((Fix) ((rSp + 3)->Val) <= (Fix) ((rSp + 1)->Val))   goto l_103;
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (rSp + 2)->Val = (rSp + 4)->Val;
        rA4 = (rSp++)->Val;
        (rSp + 3)->Val = rA4;
        (rSp + 2)->Val = (rSp + 4)->Val;
        rA4 = (rSp++)->Val;
        (rSp + 3)->Val = rA4;
l_103:
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 30)->Val;
        if (rA4 == rNil)        goto l_104;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA3 != rLit[4])     goto l_106;
        (--rSp)->Val = ((Ptr) GXpopj6);
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 7)->Val->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
l_106:
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        rA2 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = ((Ptr) GXpopj6);
        rA1 = ((rSp + 6)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA1;
        rA1 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 7)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 8)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA1;
        rA1 = ((rSp + 7)->Val->Val + 2 + (Fix) 12)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA1;
        rA1 = (rSp + 7)->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA3)));
        (--rSp)->Val = rA1;
        rA1 = (rSp + 7)->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA2)));
        (--rSp)->Val = rA1;
        rA1 = (rSp + 7)->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA3)));
        (--rSp)->Val = rA1;
        rA1 = (rSp + 7)->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA2)));
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 7;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
l_104:
        rA1 = rNil;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_26() {     /* #:display:x11:draw-rectangle */
   {    register Ptr aRet, *rLit, rSp, rA2, rA3, rA4, rNil;
        rLit = GYx11draw; rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 6)     goto l_101;
        GIa1 = rLit[18];
        rA2 = (Ptr) 6;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 30)->Val;
        if (rA4 == rNil)        goto l_102;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA3 != rLit[4])     goto l_104;
        (--rSp)->Val = ((Ptr) GXpopj6);
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 7)->Val->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
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
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
l_104:
        (--rSp)->Val = ((Ptr) GXpopj6);
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 7)->Val->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        rA2 = (rSp + 7)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (rA3)));
        (--rSp)->Val = rA2;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        rA2 = (rSp + 7)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (rA3)));
        (--rSp)->Val = rA2;
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 7;
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
l_102:
        GIa1 = rNil;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_27() {     /* #:display:x11:draw-arc */
   {    register Ptr aRet, *rLit, rSp, rA2, rA3, rA4, rNil;
        rLit = GYx11draw; rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 8)     goto l_101;
        GIa1 = rLit[20];
        rA2 = (Ptr) 8;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 30)->Val;
        if (rA4 == rNil)        goto l_102;
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = rSp->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) ((rSp + 1)->Val)));
        (--rSp)->Val = rA3;
        if ((Fix) (rA3) >= (Fix) 0)     goto l_105;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 360));
        rSp->Val = rA3;
l_105:
        rA2 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA2 != rLit[4])     goto l_106;
        (--rSp)->Val = ((Ptr) GXpopj9);
        rA2 = ((rSp + 9)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA2;
        rA2 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA2;
        rA2 = ((rSp + 10)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA2;
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
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 9;
        {aRet = (rLit[21] + 2)->Val; goto lRet;}
l_106:
        (--rSp)->Val = ((Ptr) GXpopj9);
        rA2 = ((rSp + 9)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA2;
        rA2 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 7)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA2;
        rA2 = ((rSp + 10)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA2;
        rA2 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 5)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) ((rSp + 10)->Val)));
        (--rSp)->Val = rA2;
        rA2 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 6)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) ((rSp + 10)->Val)));
        (--rSp)->Val = rA2;
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 9;
        {aRet = (rLit[21] + 2)->Val; goto lRet;}
l_102:
        GIa1 = rNil;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_28() {     /* #:display:x11:draw-ellipse */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4, rNil;
        rLit = GYx11draw; rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 6)     goto l_101;
        GIa1 = rLit[22];
        GIa2 = (Ptr) 6;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 30)->Val;
        if (rA4 == rNil)        goto l_102;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA3 != rLit[4])     goto l_104;
        (--rSp)->Val = ((Ptr) GXpopj6);
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 7)->Val->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        rA3 = (rSp + 7)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 7)->Val)));
        (--rSp)->Val = rA3;
        rA3 = (rSp + 7)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 7)->Val)));
        (--rSp)->Val = rA3;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 360;
        rA4 = (Ptr) 9;
        {aRet = (rLit[21] + 2)->Val; goto lRet;}
l_104:
        (--rSp)->Val = ((Ptr) GXpopj6);
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 7)->Val->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 7)->Val)));
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 7)->Val)));
        (--rSp)->Val = rA3;
        rA3 = (rSp + 7)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 7)->Val)));
        (--rSp)->Val = rA3;
        rA3 = (rSp + 7)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 7)->Val)));
        (--rSp)->Val = rA3;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 360;
        rA4 = (Ptr) 9;
        {aRet = (rLit[21] + 2)->Val; goto lRet;}
l_102:
        GIa1 = rNil;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_29() {     /* #:display:x11:draw-circle */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4, rNil;
        rLit = GYx11draw; rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 5)     goto l_101;
        GIa1 = rLit[23];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 30)->Val;
        if (rA4 == rNil)        goto l_102;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA3 != rLit[4])     goto l_104;
        (--rSp)->Val = ((Ptr) GXpopj5);
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA3 = (rSp + 6)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 6)->Val)));
        (--rSp)->Val = rA3;
        rA3 = (rSp + 7)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 7)->Val)));
        (--rSp)->Val = rA3;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 360;
        rA4 = (Ptr) 9;
        {aRet = (rLit[21] + 2)->Val; goto lRet;}
l_104:
        (--rSp)->Val = ((Ptr) GXpopj5);
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 6)->Val)));
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 6)->Val)));
        (--rSp)->Val = rA3;
        rA3 = (rSp + 6)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 6)->Val)));
        (--rSp)->Val = rA3;
        rA3 = (rSp + 7)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 7)->Val)));
        (--rSp)->Val = rA3;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 360;
        rA4 = (Ptr) 9;
        {aRet = (rLit[21] + 2)->Val; goto lRet;}
l_102:
        GIa1 = rNil;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_30() {     /* #:display:x11:fill-rectangle */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYx11draw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if (rA4 == (Ptr) 6)     goto l_101;
        rA1 = rLit[24];
        rA2 = (Ptr) 6;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 30)->Val;
        if (rA4 == GInil)       {aRet = ((Ptr) GLx11draw_31); goto lRet;}
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 4)->Val;
        rA2 = ((rSp + 5)->Val->Val + 2 + (Fix) 5)->Val;
        rA1 = ((rSp + 5)->Val->Val + 2 + (Fix) 16)->Val;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA3;
        if ((Ptr) 0 != (rSp + 4)->Val)  {aRet = ((Ptr) GLx11draw_32); goto lRet;}
        if (rA1 != rLit[25])    {aRet = ((Ptr) GLx11draw_32); goto lRet;}
        rA1 = ((rSp + 10)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 9)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = ((Ptr) GLx11draw_32);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_32() {     /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11draw; rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 15)->Val;
        if (rA4 != rLit[4])     goto l_106;
        (--rSp)->Val = ((Ptr) GLx11draw_33);
        rA4 = ((rSp + 11)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 12)->Val->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 7;
        {aRet = (rLit[26] + 2)->Val; goto lRet;}
l_106:
        (--rSp)->Val = ((Ptr) GLx11draw_33);
        rA4 = ((rSp + 11)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 7)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 12)->Val->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 5)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 12)->Val)));
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 8)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 6)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 12)->Val)));
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 7;
        {aRet = (rLit[26] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_33() {     /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYx11draw; rSp = GIsp; rA2 = GIa2;
        if ((Ptr) 0 != (rSp + 4)->Val)  goto l_110;
        if ((rSp + 2)->Val != rLit[25]) goto l_110;
        GIa1 = ((rSp + 10)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 9)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        GIa3 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        rSp += (Fix) 11;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
l_110:
        GIa1 = GInil;
        rSp += (Fix) 11;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11draw_31() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_34() {     /* #:display:x11:highlight-rectangle */
   {    register Ptr aRet, *rLit, rSp, rA2, rA3, rA4;
        rLit = GYx11draw; rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if (rA4 == (Ptr) 6)     goto l_101;
        GIa1 = rLit[27];
        rA2 = (Ptr) 6;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = ((rSp + 4)->Val->Val + 2 + (Fix) 4)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA4;
        rA2 = ((rSp + 7)->Val->Val + 2 + (Fix) 5)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 6)->Val;
        rA3 = (Ptr) ((UFix) (rA3) ^ (UFix) (rA2));
        (rSp + 2)->Val = rA3;
        (--rSp)->Val = ((Ptr) GLx11draw_35);
        rA4 = (Ptr) 0;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_35() {     /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11draw; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11draw_36);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLx11draw_37);
        (--rSp)->Val = rLit[29]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_37() {     /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYx11draw; rSp = GIsp; rA2 = GIa2;
        GIa1 = ((rSp + 12)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 11)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        GIa3 = rLit[29]->Val;
        (--rSp)->Val = ((Ptr) GLx11draw_39);
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11draw_39() {     /* call_x11draw_38 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        GIa1 = ((rSp + 12)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 11)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        GIa3 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLx11draw_41);
        {aRet = (GYx11draw[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11draw_41() {     /* call_x11draw_40 */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYx11draw; rSp = GIsp; rA2 = GIa2;
        GIa1 = ((rSp + 12)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 11)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        GIa3 = rLit[31];
        (--rSp)->Val = ((Ptr) GLx11draw_43);
        {aRet = (rLit[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11draw_43() {     /* call_x11draw_42 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11draw; rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 15)->Val;
        if (rA4 != rLit[4])     goto l_106;
        (--rSp)->Val = ((Ptr) GLx11draw_44);
        rA4 = ((rSp + 13)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 14)->Val->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 7;
        {aRet = (rLit[26] + 2)->Val; goto lRet;}
l_106:
        (--rSp)->Val = ((Ptr) GLx11draw_44);
        rA4 = ((rSp + 13)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 7)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 14)->Val->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 8)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 5)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 14)->Val)));
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 9)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 6)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 14)->Val)));
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 7;
        {aRet = (rLit[26] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_44() {     /* 107 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        GIa1 = ((rSp + 12)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 11)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        GIa3 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLx11draw_46);
        {aRet = (GYx11draw[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11draw_46() {     /* call_x11draw_45 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLx11draw_47);
        {aRet = ((Ptr) GLx11draw_36); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_36() {     /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLx11draw_48);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYx11draw[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_48() {     /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_47() {     /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_49() {     /* #:display:x11:fill-arc */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYx11draw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if (rA4 == (Ptr) 8)     goto l_101;
        rA1 = rLit[33];
        rA2 = (Ptr) 8;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 30)->Val;
        if (rA4 == GInil)       {aRet = ((Ptr) GLx11draw_50); goto lRet;}
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA3 = ((rSp + 7)->Val->Val + 2 + (Fix) 4)->Val;
        rA2 = ((rSp + 7)->Val->Val + 2 + (Fix) 5)->Val;
        rA1 = ((rSp + 8)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) ((rSp + 2)->Val)));
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 8)->Val->Val + 2 + (Fix) 16)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA3;
        if ((Fix) ((rSp + 4)->Val) >= (Fix) 0)  goto l_105;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 360));
        (rSp + 4)->Val = rA4;
l_105:
        if ((Ptr) 0 != (rSp + 5)->Val)  {aRet = ((Ptr) GLx11draw_51); goto lRet;}
        if ((rSp + 3)->Val != rLit[25]) {aRet = ((Ptr) GLx11draw_51); goto lRet;}
        rA1 = ((rSp + 13)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 12)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = ((Ptr) GLx11draw_51);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_51() {     /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11draw; rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 15)->Val;
        if (rA4 != rLit[4])     goto l_108;
        (--rSp)->Val = ((Ptr) GLx11draw_52);
        rA4 = ((rSp + 14)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 15)->Val->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 9;
        {aRet = (rLit[34] + 2)->Val; goto lRet;}
l_108:
        (--rSp)->Val = ((Ptr) GLx11draw_52);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 16)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 10;
        {aRet = ((Ptr) GLx11draw_53); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_52() {     /* 109 */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYx11draw; rSp = GIsp; rA2 = GIa2;
        if ((Ptr) 0 != (rSp + 5)->Val)  goto l_112;
        if ((rSp + 3)->Val != rLit[25]) goto l_112;
        GIa1 = ((rSp + 13)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 12)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        GIa3 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        rSp += (Fix) 14;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
l_112:
        GIa1 = GInil;
        rSp += (Fix) 14;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11draw_50() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_53() {     /* #:display:x11:transparent-fill-arc */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLx11draw_54);
        rA4 = ((rSp + 8)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 11)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 7)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 11)->Val->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 13)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 5)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 10)->Val)));
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 14)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 6)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 10)->Val)));
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
        rA4 = (Ptr) 9;
        {aRet = (GYx11draw[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_54() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_55() {     /* #:display:x11:fill-ellipse */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYx11draw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if (rA4 == (Ptr) 6)     goto l_101;
        rA1 = rLit[35];
        rA2 = (Ptr) 6;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 30)->Val;
        if (rA4 == GInil)       {aRet = ((Ptr) GLx11draw_56); goto lRet;}
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 4)->Val;
        rA2 = ((rSp + 5)->Val->Val + 2 + (Fix) 5)->Val;
        rA1 = ((rSp + 6)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 16)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA3;
        if ((Ptr) 0 != (rSp + 4)->Val)  {aRet = ((Ptr) GLx11draw_57); goto lRet;}
        if (rA4 != rLit[25])    {aRet = ((Ptr) GLx11draw_57); goto lRet;}
        rA1 = ((rSp + 10)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 9)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = ((Ptr) GLx11draw_57);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_57() {     /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11draw; rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 15)->Val;
        if (rA4 != rLit[4])     goto l_106;
        (--rSp)->Val = ((Ptr) GLx11draw_58);
        rA4 = ((rSp + 11)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 12)->Val->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 12)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 12)->Val)));
        (--rSp)->Val = rA4;
        rA4 = (rSp + 12)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 12)->Val)));
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 360;
        rA4 = (Ptr) 9;
        {aRet = (rLit[34] + 2)->Val; goto lRet;}
l_106:
        (--rSp)->Val = ((Ptr) GLx11draw_58);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 12)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 12)->Val)));
        (--rSp)->Val = rA4;
        rA4 = (rSp + 12)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 12)->Val)));
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 360;
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 10;
        {aRet = ((Ptr) GLx11draw_53); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_58() {     /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYx11draw; rSp = GIsp; rA2 = GIa2;
        if ((Ptr) 0 != (rSp + 4)->Val)  goto l_110;
        if ((rSp + 3)->Val != rLit[25]) goto l_110;
        GIa1 = ((rSp + 10)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 9)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        GIa3 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        rSp += (Fix) 11;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
l_110:
        GIa1 = GInil;
        rSp += (Fix) 11;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11draw_56() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_59() {     /* #:display:x11:fill-circle */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYx11draw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if (rA4 == (Ptr) 5)     goto l_101;
        rA1 = rLit[36];
        rA2 = (Ptr) 5;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 30)->Val;
        if (rA4 == GInil)       {aRet = ((Ptr) GLx11draw_60); goto lRet;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA3 = ((rSp + 4)->Val->Val + 2 + (Fix) 4)->Val;
        rA2 = ((rSp + 4)->Val->Val + 2 + (Fix) 5)->Val;
        rA1 = ((rSp + 5)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 16)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA3;
        if ((Ptr) 0 != (rSp + 4)->Val)  {aRet = ((Ptr) GLx11draw_61); goto lRet;}
        if (rA4 != rLit[25])    {aRet = ((Ptr) GLx11draw_61); goto lRet;}
        rA1 = ((rSp + 9)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 8)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = ((Ptr) GLx11draw_61);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_61() {     /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11draw; rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 15)->Val;
        if (rA4 != rLit[4])     goto l_106;
        (--rSp)->Val = ((Ptr) GLx11draw_62);
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 11)->Val->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 11)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 11)->Val)));
        (--rSp)->Val = rA4;
        rA4 = (rSp + 12)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 12)->Val)));
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 360;
        rA4 = (Ptr) 9;
        {aRet = (rLit[34] + 2)->Val; goto lRet;}
l_106:
        (--rSp)->Val = ((Ptr) GLx11draw_62);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 11)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 11)->Val)));
        (--rSp)->Val = rA4;
        rA4 = (rSp + 12)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 12)->Val)));
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 360;
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 10;
        {aRet = ((Ptr) GLx11draw_53); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_62() {     /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYx11draw; rSp = GIsp; rA2 = GIa2;
        if ((Ptr) 0 != (rSp + 4)->Val)  goto l_110;
        if ((rSp + 3)->Val != rLit[25]) goto l_110;
        GIa1 = ((rSp + 9)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 8)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        GIa3 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        rSp += (Fix) 10;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
l_110:
        GIa1 = GInil;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11draw_60() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_63() {     /* #:display:x11:fill-area */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYx11draw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if (rA4 == (Ptr) 5)     goto l_101;
        rA1 = rLit[37];
        rA2 = (Ptr) 5;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 30)->Val;
        if (rA4 == GInil)       {aRet = ((Ptr) GLx11draw_64); goto lRet;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA3 = ((rSp + 4)->Val->Val + 2 + (Fix) 4)->Val;
        rA2 = ((rSp + 4)->Val->Val + 2 + (Fix) 5)->Val;
        rA1 = ((rSp + 5)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 16)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA3;
        if ((Ptr) 0 != (rSp + 4)->Val)  {aRet = ((Ptr) GLx11draw_65); goto lRet;}
        if (rA4 != rLit[25])    {aRet = ((Ptr) GLx11draw_65); goto lRet;}
        rA1 = ((rSp + 9)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 8)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = ((Ptr) GLx11draw_65);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_65() {     /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11draw; rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 15)->Val;
        if (rA4 != rLit[4])     goto l_106;
        (--rSp)->Val = ((Ptr) GLx11draw_66);
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 11)->Val->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 8;
        {aRet = (rLit[38] + 2)->Val; goto lRet;}
l_106:
        (--rSp)->Val = ((Ptr) GLx11draw_66);
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 7)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 11)->Val->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 9)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 5)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 8;
        {aRet = (rLit[38] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_66() {     /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYx11draw; rSp = GIsp; rA2 = GIa2;
        if ((Ptr) 0 != (rSp + 4)->Val)  goto l_110;
        if ((rSp + 3)->Val != rLit[25]) goto l_110;
        GIa1 = ((rSp + 9)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 8)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        GIa3 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        rSp += (Fix) 10;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
l_110:
        GIa1 = GInil;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11draw_64() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11draw_67() {     /* #:display:x11:draw-polyline */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4, rNil;
        rLit = GYx11draw; rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 5)     goto l_101;
        GIa1 = rLit[39];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 30)->Val;
        if (rA4 == rNil)        goto l_102;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA3 != rLit[4])     goto l_104;
        (--rSp)->Val = ((Ptr) GXpopj5);
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 8;
        {aRet = (rLit[40] + 2)->Val; goto lRet;}
l_104:
        (--rSp)->Val = ((Ptr) GXpopj5);
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 8;
        {aRet = (rLit[40] + 2)->Val; goto lRet;}
l_102:
        GIa1 = rNil;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_68() {     /* #:display:x11:draw-polymarker */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4, rNil;
        rLit = GYx11draw; rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 5)     goto l_101;
        GIa1 = rLit[41];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 30)->Val;
        if (rA4 == rNil)        goto l_102;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA3 != rLit[4])     goto l_104;
        (--rSp)->Val = ((Ptr) GXpopj5);
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 8;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
l_104:
        (--rSp)->Val = ((Ptr) GXpopj5);
        rA3 = ((rSp + 5)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 8;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
l_102:
        GIa1 = rNil;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_69() {     /* #:display:x11:draw-segments */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4, rNil;
        rLit = GYx11draw; rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 7)     goto l_101;
        GIa1 = rLit[43];
        GIa2 = (Ptr) 7;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 30)->Val;
        if (rA4 == rNil)        goto l_102;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA3 != rLit[4])     goto l_104;
        (--rSp)->Val = ((Ptr) GXpopj7);
        rA3 = ((rSp + 7)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 8)->Val->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
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
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 10;
        {aRet = (rLit[44] + 2)->Val; goto lRet;}
l_104:
        (--rSp)->Val = ((Ptr) GXpopj7);
        rA3 = ((rSp + 7)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 8)->Val->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
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
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 10;
        {aRet = (rLit[44] + 2)->Val; goto lRet;}
l_102:
        GIa1 = rNil;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_70() {     /* #:display:x11:draw-rectangles */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4, rNil, rBfloat;
        rLit = GYx11draw; rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        if (rA4 == (Ptr) 7)     goto l_101;
        GIa1 = rLit[45];
        GIa2 = (Ptr) 7;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 30)->Val;
        if (rA4 == rNil)        goto l_102;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = (Ptr) 0;
        if ((rSp + 4)->Val < rBfloat)   goto l_104;
        rA3 = rSp->Val;
        rA3 = (Ptr) ((UFix) (rA3) | (UFix) 1);
        rSp->Val = rA3;
        goto l_105;
l_104:
        (rLit[46]->Val->Val + 2 + (Fix) 0)->Val = (rSp + 4)->Val;
        (rSp + 4)->Val = rLit[46]->Val;
l_105:
        if ((rSp + 3)->Val < rBfloat)   goto l_106;
        rA3 = rSp->Val;
        rA3 = (Ptr) ((UFix) (rA3) | (UFix) 2);
        rSp->Val = rA3;
        goto l_107;
l_106:
        (rLit[47]->Val->Val + 2 + (Fix) 0)->Val = (rSp + 3)->Val;
        (rSp + 3)->Val = rLit[47]->Val;
l_107:
        if ((rSp + 2)->Val < rBfloat)   goto l_108;
        rA3 = rSp->Val;
        rA3 = (Ptr) ((UFix) (rA3) | (UFix) 4);
        rSp->Val = rA3;
        goto l_109;
l_108:
        (rLit[48]->Val->Val + 2 + (Fix) 0)->Val = (rSp + 2)->Val;
        (rSp + 2)->Val = rLit[48]->Val;
l_109:
        if ((rSp + 1)->Val < rBfloat)   goto l_110;
        rA3 = rSp->Val;
        rA3 = (Ptr) ((UFix) (rA3) | (UFix) 8);
        rSp->Val = rA3;
        goto l_111;
l_110:
        (rLit[49]->Val->Val + 2 + (Fix) 0)->Val = (rSp + 1)->Val;
        (rSp + 1)->Val = rLit[49]->Val;
l_111:
        rA3 = (rA4->Val + 2 + (Fix) 15)->Val;
        if (rA3 != rLit[4])     goto l_112;
        (--rSp)->Val = ((Ptr) GXpopj8);
        rA3 = ((rSp + 8)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 9)->Val->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
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
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 11;
        {aRet = (rLit[50] + 2)->Val; goto lRet;}
l_112:
        (--rSp)->Val = ((Ptr) GXpopj8);
        rA3 = ((rSp + 8)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA3;
        rA3 = ((rSp + 9)->Val->Val + 2 + (Fix) 12)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
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
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 5)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA3 = (rA3->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA3;
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 11;
        {aRet = (rLit[50] + 2)->Val; goto lRet;}
l_102:
        GIa1 = rNil;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_71() {     /* #:display:x11:fill-rectangles */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rBfloat;
        rLit = GYx11draw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat;
        if (rA4 == (Ptr) 7)     goto l_101;
        rA1 = rLit[51];
        rA2 = (Ptr) 7;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 30)->Val;
        if (rA4 == GInil)       {aRet = ((Ptr) GLx11draw_72); goto lRet;}
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA4;
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) 2)->Val;
        rA2 = ((rSp + 6)->Val->Val + 2 + (Fix) 4)->Val;
        rA1 = ((rSp + 6)->Val->Val + 2 + (Fix) 5)->Val;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 16)->Val;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA3;
        if ((rSp + 9)->Val < rBfloat)   goto l_104;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) 1);
        (rSp + 4)->Val = rA4;
        goto l_105;
l_104:
        (rLit[46]->Val->Val + 2 + (Fix) 0)->Val = (rSp + 9)->Val;
        (rSp + 9)->Val = rLit[46]->Val;
l_105:
        if ((rSp + 8)->Val < rBfloat)   goto l_106;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) 2);
        (rSp + 4)->Val = rA4;
        goto l_107;
l_106:
        (rLit[47]->Val->Val + 2 + (Fix) 0)->Val = (rSp + 8)->Val;
        (rSp + 8)->Val = rLit[47]->Val;
l_107:
        if ((rSp + 7)->Val < rBfloat)   goto l_108;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) 4);
        (rSp + 4)->Val = rA4;
        goto l_109;
l_108:
        (rLit[48]->Val->Val + 2 + (Fix) 0)->Val = (rSp + 7)->Val;
        (rSp + 7)->Val = rLit[48]->Val;
l_109:
        if ((rSp + 6)->Val < rBfloat)   goto l_110;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) 8);
        (rSp + 4)->Val = rA4;
        goto l_111;
l_110:
        (rLit[49]->Val->Val + 2 + (Fix) 0)->Val = (rSp + 6)->Val;
        (rSp + 6)->Val = rLit[49]->Val;
l_111:
        if ((Ptr) 0 != rA3)     {aRet = ((Ptr) GLx11draw_73); goto lRet;}
        if ((rSp + 3)->Val != rLit[25]) {aRet = ((Ptr) GLx11draw_73); goto lRet;}
        rA1 = ((rSp + 12)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 11)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        rA3 = ((rSp + 2)->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = ((Ptr) GLx11draw_73);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_73() {     /* 113 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11draw; rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 15)->Val;
        if (rA4 != rLit[4])     goto l_114;
        (--rSp)->Val = ((Ptr) GLx11draw_74);
        rA4 = ((rSp + 13)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 14)->Val->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 18)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 11;
        {aRet = (rLit[52] + 2)->Val; goto lRet;}
l_114:
        (--rSp)->Val = ((Ptr) GLx11draw_74);
        rA4 = ((rSp + 13)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 7)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 14)->Val->Val + 2 + (Fix) 12)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 18)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 14)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 5)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 15)->Val->Val + 2 + (Fix) 8)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 11;
        {aRet = (rLit[52] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11draw_74() {     /* 115 */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYx11draw; rSp = GIsp; rA2 = GIa2;
        if ((Ptr) 0 != rSp->Val)        goto l_118;
        if ((rSp + 3)->Val != rLit[25]) goto l_118;
        GIa1 = ((rSp + 12)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = ((rSp + 11)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        GIa3 = ((rSp + 1)->Val->Val + 2 + (Fix) 6)->Val;
        rSp += (Fix) 13;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
l_118:
        GIa1 = GInil;
        rSp += (Fix) 13;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLx11draw_72() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDx11draw_75() {     /* trace #:display:x11:draw-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,0,53,54);
  lRet:  return (aRet);}}

static Ptr GDx11draw_76() {     /* trace #:display:x11:draw-substring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,6,53,54);
  lRet:  return (aRet);}}

static Ptr GDx11draw_77() {     /* trace #:display:x11:draw-cn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,10,53,54);
  lRet:  return (aRet);}}

static Ptr GDx11draw_78() {     /* trace #:display:x11:draw-substring-nobackground */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,13,53,54);
  lRet:  return (aRet);}}

static Ptr GDx11draw_79() {     /* trace #:display:x11:draw-cn-nobackground */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,14,53,54);
  lRet:  return (aRet);}}

static Ptr GDx11draw_80() {     /* trace #:display:x11:draw-point */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,15,53,54);
  lRet:  return (aRet);}}

static Ptr GDx11draw_81() {     /* trace #:display:x11:draw-line */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,17,53,54);
  lRet:  return (aRet);}}

static Ptr GDx11draw_82() {     /* trace #:display:x11:draw-rectangle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,18,53,54);
  lRet:  return (aRet);}}

static Ptr GDx11draw_83() {     /* trace #:display:x11:draw-arc */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,20,53,54);
  lRet:  return (aRet);}}

static Ptr GDx11draw_84() {     /* trace #:display:x11:draw-ellipse */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,22,53,54);
  lRet:  return (aRet);}}

static Ptr GDx11draw_85() {     /* trace #:display:x11:draw-circle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,23,53,54);
  lRet:  return (aRet);}}

static Ptr GDx11draw_86() {     /* trace #:display:x11:fill-rectangle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,24,53,54);
  lRet:  return (aRet);}}

static Ptr GDx11draw_87() {     /* trace #:display:x11:highlight-rectangle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,27,53,54);
  lRet:  return (aRet);}}

static Ptr GDx11draw_88() {     /* trace #:display:x11:fill-arc */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,33,53,54);
  lRet:  return (aRet);}}

static Ptr GDx11draw_89() {     /* trace #:display:x11:fill-ellipse */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,35,53,54);
  lRet:  return (aRet);}}

static Ptr GDx11draw_90() {     /* trace #:display:x11:fill-circle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,36,53,54);
  lRet:  return (aRet);}}

static Ptr GDx11draw_91() {     /* trace #:display:x11:fill-area */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,37,53,54);
  lRet:  return (aRet);}}

static Ptr GDx11draw_92() {     /* trace #:display:x11:draw-polyline */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,39,53,54);
  lRet:  return (aRet);}}

static Ptr GDx11draw_93() {     /* trace #:display:x11:draw-polymarker */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,41,53,54);
  lRet:  return (aRet);}}

static Ptr GDx11draw_94() {     /* trace #:display:x11:draw-segments */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,43,53,54);
  lRet:  return (aRet);}}

static Ptr GDx11draw_95() {     /* trace #:display:x11:draw-rectangles */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,45,53,54);
  lRet:  return (aRet);}}

static Ptr GDx11draw_96() {     /* trace #:display:x11:fill-rectangles */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11draw,51,53,54);
  lRet:  return (aRet);}}

