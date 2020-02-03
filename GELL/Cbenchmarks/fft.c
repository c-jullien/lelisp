/* GELL 15.26: source file for the module: "fft" */
/*             translation done:           "Wed June 16 93 18:18:29 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "fft.h" 

static Ptr GLfft_1() {  /* check-fft */
   {    register Ptr aRet, *rLit;
        rLit = GYfft;
        GIa2 = rLit[0];
        GIa1 = rLit[1];
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfft_2() {  /* meter-fft */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfft; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLfft_3);
        (--rSp)->Val = rLit[3];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_3() {  /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLfft_5);
        {aRet = ((Ptr) GLfft_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_5() {  /* call_fft_4 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfft; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[5];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_7() {  /* test-fft */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) 1)    {aRet = ((Ptr) GLfft_8); goto lRet;}
        {aRet = ((Ptr) GLfft_6); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfft_9() {  /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLfft_11);
        {aRet = ((Ptr) GLfft_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_11() { /* call_fft_10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLfft_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_8() {  /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLfft_9); goto lRet;}}
        rA1 = GYfft[0];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfft_12() { /* ipower */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
l_GLfft_12:
        (--rSp)->Val = GIa1;
        if (rA2 != (Ptr) 1)     goto l_101;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLfft_14);
        goto l_GLfft_12;
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLfft_14() { /* call_fft_13 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) * (Fix) (rSp->Val)));
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfft_15() { /* fft */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) / (Fix) 2));
        rA3 = rSp->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) 1));
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rA4;
l_101:
        if ((Fix) ((rSp + 2)->Val) >= (Fix) ((rSp + 4)->Val))   goto l_102;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 3)->Val = rA4;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 2)->Val)));
        (rSp + 2)->Val = rA4;
        goto l_101;
l_102:
        rA2 = (rSp + 3)->Val;
        rA1 = (Ptr) 2;
        (--rSp)->Val = ((Ptr) GLfft_17);
        {aRet = ((Ptr) GLfft_12); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLfft_17() { /* call_fft_16 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfft; rSp = GIsp;
        if ((rSp + 4)->Val == GIa1)     {aRet = ((Ptr) GLfft_18); goto lRet;}
        (--rSp)->Val = ((Ptr) GLfft_19);
        (--rSp)->Val = rLit[6];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_19() { /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLfft_21);
        {aRet = (GYfft[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_21() { /* call_fft_20 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLfft_22);
        GIa4 = (Ptr) 0;
        {aRet = (GYfft[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_18() { /* 103 */
   {    register Ptr aRet, rSp, rA2, rA3, rA4;
        rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        (rSp + 1)->Val = (Ptr) 1;
        (rSp + 2)->Val = (Ptr) 1;
l_107:
        if ((Fix) ((rSp + 2)->Val) >= (Fix) ((rSp + 4)->Val))   goto l_108;
        if ((Fix) ((rSp + 2)->Val) >= (Fix) ((rSp + 1)->Val))   goto l_110;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val;
        rA3 = ((rSp + 6)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val;
        rA2 = ((rSp + 5)->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        ((rSp + 5)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val = rA2;
        rA2 = ((rSp + 6)->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        ((rSp + 6)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val = rA2;
        ((rSp + 5)->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val = rA4;
        ((rSp + 6)->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val = rA3;
l_110:
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
l_111:
        if ((Fix) (rSp->Val) >= (Fix) ((rSp + 2)->Val)) goto l_112;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (rSp->Val)));
        (rSp + 2)->Val = rA4;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) / (Fix) 2));
        rSp->Val = rA4;
        goto l_111;
l_112:
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rSp->Val)));
        (rSp + 2)->Val = rA4;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 3)->Val = rA4;
        rSp += (Fix) 1;
        goto l_107;
l_108:
        (--rSp)->Val = (Ptr) 1;
        {aRet = ((Ptr) GLfft_23); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLfft_23() { /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((Fix) (rSp->Val) > (Fix) ((rSp + 4)->Val))  {aRet = ((Ptr) GLfft_24); goto lRet;}
        GIa2 = rSp->Val;
        GIa1 = (Ptr) 2;
        (--rSp)->Val = ((Ptr) GLfft_26);
        {aRet = ((Ptr) GLfft_12); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_26() { /* call_fft_25 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYfft; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = rLit[11];
        (--rSp)->Val = rA1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) / (Fix) 2));
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[12]->Val;
        (--rSp)->Val = ((Ptr) GLfft_28);
        {aRet = (rLit[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfft_28() { /* call_fft_27 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA4 = llrt_fdiv (rA4, rA1);
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLfft_30);
        {aRet = (GYfft[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLfft_30() { /* call_fft_29 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYfft; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[12]->Val;
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLfft_32);
        {aRet = (rLit[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfft_32() { /* call_fft_31 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA4 = llrt_fdiv (rA4, rA1);
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLfft_34);
        {aRet = (GYfft[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLfft_34() { /* call_fft_33 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
l_115:
        if ((Fix) (rSp->Val) > (Fix) ((rSp + 3)->Val))  goto l_116;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
l_117:
        if ((Fix) (rSp->Val) > (Fix) ((rSp + 13)->Val)) goto l_118;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 4)->Val)));
        rA3 = ((rSp + 14)->Val->Val + 2 + (Fix) (rA4))->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA3 = llrt_fmul (rA3, (rSp + 7)->Val);
        rA2 = ((rSp + 15)->Val->Val + 2 + (Fix) (rA4))->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA2 = llrt_fmul (rA2, (rSp + 6)->Val);
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA3 = llrt_fsub (rA3, rA2);
        rA2 = ((rSp + 14)->Val->Val + 2 + (Fix) (rA4))->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA2 = llrt_fmul (rA2, (rSp + 7)->Val);
        rA1 = ((rSp + 15)->Val->Val + 2 + (Fix) (rA4))->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_fmul (rA1, (rSp + 6)->Val);
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA2 = llrt_fadd (rA2, rA1);
        rA1 = ((rSp + 14)->Val->Val + 2 + (Fix) (rSp->Val))->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_fsub (rA1, rA3);
        ((rSp + 14)->Val->Val + 2 + (Fix) (rA4))->Val = rA1;
        rA1 = ((rSp + 15)->Val->Val + 2 + (Fix) (rSp->Val))->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_fsub (rA1, rA2);
        ((rSp + 15)->Val->Val + 2 + (Fix) (rA4))->Val = rA1;
        rA1 = ((rSp + 14)->Val->Val + 2 + (Fix) (rSp->Val))->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_fadd (rA1, rA3);
        ((rSp + 14)->Val->Val + 2 + (Fix) (rSp->Val))->Val = rA1;
        rA1 = ((rSp + 15)->Val->Val + 2 + (Fix) (rSp->Val))->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_fadd (rA1, rA2);
        ((rSp + 15)->Val->Val + 2 + (Fix) (rSp->Val))->Val = rA1;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 5)->Val)));
        rSp->Val = rA4;
        goto l_117;
l_118:
        rSp += (Fix) 1;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rSp->Val = rA4;
        goto l_115;
l_116:
        rSp += (Fix) 1;
        rA4 = (rSp + 5)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA4 = llrt_fmul (rA4, (rSp + 1)->Val);
        rA3 = (rSp + 4)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA3 = llrt_fmul (rA3, rSp->Val);
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA4 = llrt_fsub (rA4, rA3);
        rA3 = (rSp + 5)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA3 = llrt_fmul (rA3, rSp->Val);
        rA2 = (rSp + 4)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA2 = llrt_fmul (rA2, (rSp + 1)->Val);
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA3 = llrt_fadd (rA3, rA2);
        (rSp + 4)->Val = rA3;
        (rSp + 5)->Val = rA4;
        rSp += (Fix) 6;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rSp->Val = rA4;
        {aRet = ((Ptr) GLfft_23); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLfft_24() { /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLfft_22); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_22() { /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 5;
        GIa1 = GYfft[0];
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_6() {  /* fft-bench */
   {    register Ptr aRet;
        GIa4 = (Ptr) 10;
        {aRet = ((Ptr) GLfft_35); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfft_36() { /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfft; rSp = GIsp;
        (--rSp)->Val = GIa4;
        GIa2 = rLit[16]->Val;
        GIa1 = rLit[17]->Val;
        (--rSp)->Val = ((Ptr) GLfft_38);
        {aRet = ((Ptr) GLfft_15); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_38() { /* call_fft_37 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        {aRet = ((Ptr) GLfft_35); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_35() { /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLfft_36); goto lRet;}}
        GIa1 = GYfft[0];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLfft_39() { /* fft-test */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfft; rSp = GIsp;
        rLit[18]->Val = rLit[0];
        GIa1 = rLit[19];
        (--rSp)->Val = ((Ptr) GLfft_41);
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_41() { /* call_fft_40 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfft; rSp = GIsp;
        GIa2 = rLit[16]->Val;
        GIa1 = rLit[17]->Val;
        (--rSp)->Val = ((Ptr) GLfft_43);
        {aRet = ((Ptr) GLfft_15); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_43() { /* call_fft_42 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfft; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLfft_44);
        (--rSp)->Val = rLit[21];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_44() { /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfft; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLfft_45);
        (--rSp)->Val = rLit[23];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_45() { /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfft; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLfft_46);
        (--rSp)->Val = rLit[24];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_46() { /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfft; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLfft_47);
        (--rSp)->Val = rLit[25];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_47() { /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfft; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLfft_48);
        (--rSp)->Val = rLit[26];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_48() { /* 105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfft; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLfft_49);
        (--rSp)->Val = rLit[27];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_49() { /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfft; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLfft_50);
        (--rSp)->Val = rLit[28];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_50() { /* 107 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfft; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLfft_51);
        (--rSp)->Val = rLit[29];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_51() { /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfft; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLfft_52);
        (--rSp)->Val = rLit[30];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_52() { /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfft; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLfft_53);
        (--rSp)->Val = rLit[31];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_53() { /* 110 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfft; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLfft_54);
        (--rSp)->Val = rLit[32];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfft_54() { /* 111 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        GYfft[18]->Val = rNil;
        GIa1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDfft_55() { /* trace check-fft */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfft,33,34,35);
  lRet:  return (aRet);}}

static Ptr GDfft_56() { /* trace meter-fft */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfft,36,34,35);
  lRet:  return (aRet);}}

static Ptr GDfft_57() { /* trace test-fft */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfft,37,34,38);
  lRet:  return (aRet);}}

static Ptr GDfft_58() { /* trace fft-test */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfft,39,34,35);
  lRet:  return (aRet);}}

