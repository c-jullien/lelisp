/* GELL 15.26: source file for the module: "puzzle" */
/*             translation done:           "Wed June 16 93 18:18:31 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "puzzle.h" 

static Ptr GLpuzzle_1() {       /* check-puzzle */
   {    register Ptr aRet, *rLit;
        rLit = GYpuzzle;
        GIa2 = GInil;
        GIa1 = rLit[0];
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpuzzle_2() {       /* meter-puzzle */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpuzzle; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpuzzle_3);
        (--rSp)->Val = rLit[2];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpuzzle_3() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpuzzle_5);
        {aRet = ((Ptr) GLpuzzle_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpuzzle_5() {       /* call_puzzle_4 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpuzzle; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[4];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpuzzle_7() {       /* test-puzzle */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) 1)    {aRet = ((Ptr) GLpuzzle_8); goto lRet;}
        {aRet = ((Ptr) GLpuzzle_6); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpuzzle_9() {       /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpuzzle_11);
        {aRet = ((Ptr) GLpuzzle_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpuzzle_11() {      /* call_puzzle_10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLpuzzle_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpuzzle_8() {       /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLpuzzle_9); goto lRet;}}
        rA1 = GYpuzzle[5];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpuzzle_12() {      /* fit */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYpuzzle; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        rA4 = (rLit[6]->Val->Val + 2 + (Fix) (rA1))->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 0;
l_101:
        if ((Fix) (rSp->Val) > (Fix) ((rSp + 1)->Val))  goto l_102;
        rA4 = (rLit[7]->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        rA4 = (rA4->Val + 2 + (Fix) (rSp->Val))->Val;
        if (rA4 == rNil)        goto l_103;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rSp->Val)));
        rA4 = (rLit[8]->Val->Val + 2 + (Fix) (rA4))->Val;
        if (rA4 != rNil)        goto l_102;
l_103:
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rSp->Val = rA4;
        goto l_101;
l_102:
        if ((Fix) (rSp->Val) <= (Fix) ((rSp + 1)->Val)) goto l_104;
        rA1 = rLit[5];
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        rA1 = rNil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpuzzle_13() {      /* place */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4, rNil;
        rLit = GYpuzzle; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        rA4 = (rLit[6]->Val->Val + 2 + (Fix) (rA1))->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 0;
l_101:
        if ((Fix) (rSp->Val) > (Fix) ((rSp + 1)->Val))  goto l_102;
        rA4 = (rLit[7]->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        rA4 = (rA4->Val + 2 + (Fix) (rSp->Val))->Val;
        if (rA4 == rNil)        goto l_104;
        (--rSp)->Val = rLit[8]->Val;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 1)->Val)));
        (--rSp)->Val = rLit[5];
        ((rSp + 1)->Val->Val + 2 + (Fix) (rA4))->Val = rSp->Val;
        rSp += (Fix) 2;
l_104:
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rSp->Val = rA4;
        goto l_101;
l_102:
        rSp += (Fix) 1;
        (--rSp)->Val = rLit[9]->Val;
        rA4 = (rLit[10]->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        rA3 = (rLit[10]->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        rA3 = (rLit[9]->Val->Val + 2 + (Fix) (rA3))->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) 1));
        (rSp->Val->Val + 2 + (Fix) (rA4))->Val = rA3;
        rSp += (Fix) 1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
l_105:
        if ((Fix) (rSp->Val) > (Fix) (rLit[11]->Val))   goto l_106;
        rA4 = (rLit[8]->Val->Val + 2 + (Fix) (rSp->Val))->Val;
        if (rA4 == rNil)        goto l_106;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rSp->Val = rA4;
        goto l_105;
l_106:
        if ((Fix) (rSp->Val) <= (Fix) (rLit[11]->Val))  goto l_107;
        rA1 = (Ptr) 0;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
l_107:
        rA1 = rSp->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLpuzzle_14() {      /* puzzle-remove */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4, rNil;
        rLit = GYpuzzle; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        rA4 = (rLit[6]->Val->Val + 2 + (Fix) (rA1))->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 0;
l_101:
        if ((Fix) (rSp->Val) > (Fix) ((rSp + 1)->Val))  goto l_102;
        rA4 = (rLit[7]->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        rA4 = (rA4->Val + 2 + (Fix) (rSp->Val))->Val;
        if (rA4 == rNil)        goto l_104;
        (--rSp)->Val = rLit[8]->Val;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 1)->Val)));
        (--rSp)->Val = rNil;
        ((rSp + 1)->Val->Val + 2 + (Fix) (rA4))->Val = rSp->Val;
        rSp += (Fix) 2;
l_104:
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rSp->Val = rA4;
        goto l_101;
l_102:
        rSp += (Fix) 1;
        (--rSp)->Val = rLit[9]->Val;
        rA4 = (rLit[10]->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        rA3 = (rLit[10]->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        rA3 = (rLit[9]->Val->Val + 2 + (Fix) (rA3))->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 1));
        (rSp->Val->Val + 2 + (Fix) (rA4))->Val = rA3;
        rA1 = rA3;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLpuzzle_15() {      /* trial */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        {aRet = ((Ptr) GLpuzzle_16); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpuzzle_16() {      /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYpuzzle; rSp = GIsp; rA4 = GIa4;
        if ((Fix) (rSp->Val) > (Fix) (rLit[12]->Val))   {aRet = ((Ptr) GLpuzzle_17); goto lRet;}
        rA4 = (rLit[10]->Val->Val + 2 + (Fix) (rSp->Val))->Val;
        rA4 = (rLit[9]->Val->Val + 2 + (Fix) (rA4))->Val;
        if (rA4 == (Ptr) 0)     {aRet = ((Ptr) GLpuzzle_18); goto lRet;}
        GIa2 = (rSp + 2)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpuzzle_20);
        {aRet = ((Ptr) GLpuzzle_12); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpuzzle_20() {      /* call_puzzle_19 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLpuzzle_21); goto lRet;}
        GIa2 = (rSp + 2)->Val;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpuzzle_23);
        {aRet = ((Ptr) GLpuzzle_13); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpuzzle_23() {      /* call_puzzle_22 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 1)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpuzzle_25);
        {aRet = ((Ptr) GLpuzzle_15); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpuzzle_25() {      /* call_puzzle_24 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYpuzzle; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != GInil)       goto l_109;
        if ((rSp + 1)->Val != (Ptr) 0)  goto l_107;
l_109:
        rA4 = rLit[13]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rLit[13]->Val = rA4;
        rA4 = rLit[5];
        {aRet = ((Ptr) GLpuzzle_26); goto lRet;}
l_107:
        GIa2 = (rSp + 2)->Val;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpuzzle_28);
        {aRet = ((Ptr) GLpuzzle_14); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpuzzle_28() {      /* call_puzzle_27 */
   {    register Ptr aRet;
        GIa4 = GInil;
        {aRet = ((Ptr) GLpuzzle_26); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpuzzle_21() {      /* 105 */
   {    register Ptr aRet;
        GIa4 = GInil;
        {aRet = ((Ptr) GLpuzzle_26); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpuzzle_18() {      /* 103 */
   {    register Ptr aRet;
        GIa4 = GInil;
        {aRet = ((Ptr) GLpuzzle_26); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpuzzle_26() {      /* 104 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (rA4 != GInil)       {aRet = ((Ptr) GLpuzzle_17); goto lRet;}
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rSp->Val = rA4;
        {aRet = ((Ptr) GLpuzzle_16); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLpuzzle_17() {      /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYpuzzle; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if ((Fix) (rSp->Val) <= (Fix) (rLit[12]->Val))  goto l_110;
        rA4 = rLit[13]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rLit[13]->Val = rA4;
        rA1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_110:
        rA1 = rLit[5];
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpuzzle_29() {      /* definepiece */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4;
        rLit = GYpuzzle; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
l_101:
        if ((Fix) (rSp->Val) > (Fix) ((rSp + 4)->Val))  goto l_102;
        (--rSp)->Val = (Ptr) 0;
l_103:
        if ((Fix) (rSp->Val) > (Fix) ((rSp + 4)->Val))  goto l_104;
        (--rSp)->Val = (Ptr) 0;
l_105:
        if ((Fix) (rSp->Val) > (Fix) ((rSp + 4)->Val))  goto l_106;
        rA4 = rLit[14]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) * (Fix) (rSp->Val)));
        rA3 = (rSp + 1)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (rA4)));
        rA4 = rLit[14]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) * (Fix) (rA3)));
        rA3 = (rSp + 2)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (rA4)));
        (rSp + 3)->Val = rA3;
        rA4 = (rLit[7]->Val->Val + 2 + (Fix) (rLit[15]->Val))->Val;
        (--rSp)->Val = rLit[5];
        (rA4->Val + 2 + (Fix) (rA3))->Val = rSp->Val;
        rSp += (Fix) 1;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rSp->Val = rA4;
        goto l_105;
l_106:
        rSp += (Fix) 1;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rSp->Val = rA4;
        goto l_103;
l_104:
        rSp += (Fix) 1;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rSp->Val = rA4;
        goto l_101;
l_102:
        rSp += (Fix) 1;
        (--rSp)->Val = rLit[10]->Val;
        (--rSp)->Val = rLit[15]->Val;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val = rSp->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = rLit[6]->Val;
        (--rSp)->Val = rLit[15]->Val;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val = rSp->Val;
        rSp += (Fix) 3;
        if (rLit[15]->Val == rLit[12]->Val)     goto l_107;
        rA4 = rLit[15]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rLit[15]->Val = rA4;
        rA1 = rA4;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
l_107:
        rA1 = GInil;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLpuzzle_6() {       /* puzzle-start */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4, rNil;
        rLit = GYpuzzle; rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = (Ptr) 0;
l_101:
        if ((Fix) (rSp->Val) > (Fix) (rLit[11]->Val))   goto l_102;
        (--rSp)->Val = rLit[8]->Val;
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[5];
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val = rSp->Val;
        rSp += (Fix) 3;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rSp->Val = rA4;
        goto l_101;
l_102:
        rSp += (Fix) 1;
        (--rSp)->Val = (Ptr) 1;
l_103:
        if ((Fix) (rSp->Val) > (Fix) 5) goto l_104;
        (--rSp)->Val = (Ptr) 1;
l_105:
        if ((Fix) (rSp->Val) > (Fix) 5) goto l_106;
        (--rSp)->Val = (Ptr) 1;
l_107:
        if ((Fix) (rSp->Val) > (Fix) 5) goto l_108;
        (--rSp)->Val = rLit[8]->Val;
        rA4 = rLit[14]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) * (Fix) ((rSp + 1)->Val)));
        rA3 = (rSp + 2)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (rA4)));
        rA4 = rLit[14]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) * (Fix) (rA3)));
        rA3 = (rSp + 3)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (rA4)));
        (--rSp)->Val = rNil;
        ((rSp + 1)->Val->Val + 2 + (Fix) (rA3))->Val = rSp->Val;
        rSp += (Fix) 2;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rSp->Val = rA4;
        goto l_107;
l_108:
        rSp += (Fix) 1;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rSp->Val = rA4;
        goto l_105;
l_106:
        rSp += (Fix) 1;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rSp->Val = rA4;
        goto l_103;
l_104:
        rSp += (Fix) 1;
        (--rSp)->Val = (Ptr) 0;
l_109:
        if ((Fix) (rSp->Val) > (Fix) (rLit[12]->Val))   goto l_110;
        (--rSp)->Val = (Ptr) 0;
l_111:
        if ((Fix) (rSp->Val) > (Fix) (rLit[11]->Val))   goto l_112;
        rA4 = (rLit[7]->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rNil;
        (rA4->Val + 2 + (Fix) ((rSp + 1)->Val))->Val = rSp->Val;
        rSp += (Fix) 2;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rSp->Val = rA4;
        goto l_111;
l_112:
        rSp += (Fix) 1;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rSp->Val = rA4;
        goto l_109;
l_110:
        rSp += (Fix) 1;
        rLit[15]->Val = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLpuzzle_30);
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLpuzzle_29); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLpuzzle_30() {      /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpuzzle_31);
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 3;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLpuzzle_29); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpuzzle_31() {      /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpuzzle_32);
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLpuzzle_29); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpuzzle_32() {      /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpuzzle_33);
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLpuzzle_29); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpuzzle_33() {      /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpuzzle_34);
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLpuzzle_29); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpuzzle_34() {      /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpuzzle_35);
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 3;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLpuzzle_29); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpuzzle_35() {      /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpuzzle_36);
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLpuzzle_29); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpuzzle_36() {      /* 119 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpuzzle_37);
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLpuzzle_29); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpuzzle_37() {      /* 120 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpuzzle_38);
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 2;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLpuzzle_29); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpuzzle_38() {      /* 121 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpuzzle_39);
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLpuzzle_29); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpuzzle_39() {      /* 122 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpuzzle_40);
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLpuzzle_29); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpuzzle_40() {      /* 123 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpuzzle_41);
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLpuzzle_29); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpuzzle_41() {      /* 124 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpuzzle_42);
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLpuzzle_29); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpuzzle_42() {      /* 125 */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4;
        rLit = GYpuzzle; rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rLit[9]->Val;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 13;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val = rSp->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = rLit[9]->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 3;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val = rSp->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = rLit[9]->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = (Ptr) 1;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val = rSp->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = rLit[9]->Val;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = (Ptr) 1;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val = rSp->Val;
        rSp += (Fix) 3;
        rA4 = rLit[14]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rA3 = rLit[14]->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) * (Fix) (rA4)));
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 1));
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rLit[13]->Val;
        rLit[13]->Val = (rSp + 2)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[16];
        (--rSp)->Val = rLit[17];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa2 = rA3;
        GIa1 = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLpuzzle_44);
        {aRet = ((Ptr) GLpuzzle_12); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLpuzzle_44() {      /* call_puzzle_43 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLpuzzle_45); goto lRet;}
        GIa2 = (rSp + 7)->Val;
        rA1 = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLpuzzle_47);
        {aRet = ((Ptr) GLpuzzle_13); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpuzzle_47() {      /* call_puzzle_46 */
   {    register Ptr aRet;
        (GIsp + 9)->Val = GIa1;
        {aRet = ((Ptr) GLpuzzle_48); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpuzzle_45() {      /* 126 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpuzzle; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpuzzle_48);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[18];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpuzzle_48() {      /* 127 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLpuzzle_50);
        {aRet = ((Ptr) GLpuzzle_15); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpuzzle_50() {      /* call_puzzle_49 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYpuzzle; rSp = GIsp; rA4 = GIa4;
        if (GIa1 == GInil)      goto l_129;
        (--rSp)->Val = ((Ptr) GLpuzzle_51);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[20];
        (--rSp)->Val = rLit[13]->Val;
        rA4 = (Ptr) 3;
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
l_129:
        (--rSp)->Val = ((Ptr) GLpuzzle_51);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[21];
        rA4 = (Ptr) 2;
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpuzzle_51() {      /* 130 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYpuzzle[13]->Val = (rSp + 6)->Val;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDpuzzle_52() {      /* trace check-puzzle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpuzzle,22,23,24);
  lRet:  return (aRet);}}

static Ptr GDpuzzle_53() {      /* trace meter-puzzle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpuzzle,25,23,24);
  lRet:  return (aRet);}}

static Ptr GDpuzzle_54() {      /* trace test-puzzle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpuzzle,26,23,27);
  lRet:  return (aRet);}}

