/* GELL 15.26: source file for the module: "virdraw" */
/*             translation done:           "Tue Aug  24 93 10:48:58 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "virdraw.h" 

static Ptr GLvirdraw_1() {      /* draw-cursor */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[1];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val < rBfloat)   goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[1];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_106;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[1];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_2); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_3); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_3);
        (--rSp)->Val = ((Ptr) GLvirdraw_4);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[1];
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_4() {      /* 112 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
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
        {aRet = (GYvirdraw[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_3() {      /* 110 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rLit[1];
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
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_2() {      /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_5() {      /* #:display:draw-cursor */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[9];
        GIa1 = rLit[1];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_6() {      /* draw-substring */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        if (rA4 == (Ptr) 5)     goto l_101;
        rA1 = rLit[10];
        rA2 = (Ptr) 5;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 4)->Val < rBfloat)   goto l_103;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[0];
        rA1 = rLit[10];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 3)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[0];
        rA1 = rLit[10];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if (((rSp + 2)->Val >= GIbstrg) && ((rSp + 2)->Val < GIbsymb))  goto l_107;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[12];
        rA1 = rLit[10];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if ((rSp + 1)->Val < rBfloat)   goto l_109;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[10];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        if (rSp->Val < rBfloat) goto l_111;
        rA3 = rSp->Val;
        rA2 = rLit[0];
        rA1 = rLit[10];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_113;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[10];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_113:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_7); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_8); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_8);
        (--rSp)->Val = ((Ptr) GLvirdraw_9);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[10];
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_9() {      /* 119 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 8;
        {aRet = (GYvirdraw[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_8() {      /* 117 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj6);
        (--rSp)->Val = rLit[10];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 8;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_7() {      /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_10() {     /* #:display:draw-substring */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[9];
        GIa1 = rLit[10];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_11() {     /* draw-cn */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[13];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val < rBfloat)   goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[13];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        if ((rSp + 2)->Val < rBfloat)   goto l_106;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[0];
        rA1 = rLit[13];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_108;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[13];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_108:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_12); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_13); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_13);
        (--rSp)->Val = ((Ptr) GLvirdraw_14);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[13];
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_14() {     /* 114 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
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
        {aRet = (GYvirdraw[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_13() {     /* 112 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rLit[13];
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
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_12() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_15() {     /* #:display:draw-cn */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[9];
        GIa1 = rLit[13];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_16() {     /* #:display:draw-substring-nobackground */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirdraw; rSp = GIsp;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = rLit[14];
        GIa2 = (Ptr) 4;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GXpopj4);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
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
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_17() {     /* draw-substring-nobackground */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        if (rA4 == (Ptr) 5)     goto l_101;
        rA1 = rLit[15];
        rA2 = (Ptr) 5;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 4)->Val < rBfloat)   goto l_103;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[0];
        rA1 = rLit[15];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 3)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[0];
        rA1 = rLit[15];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if (((rSp + 2)->Val >= GIbstrg) && ((rSp + 2)->Val < GIbsymb))  goto l_107;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[12];
        rA1 = rLit[15];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if ((rSp + 1)->Val < rBfloat)   goto l_109;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[15];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        if (rSp->Val < rBfloat) goto l_111;
        rA3 = rSp->Val;
        rA2 = rLit[0];
        rA1 = rLit[15];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_113;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[15];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_113:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_18); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_19); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_19);
        (--rSp)->Val = ((Ptr) GLvirdraw_20);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[15];
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_20() {     /* 119 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 8;
        {aRet = (GYvirdraw[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_19() {     /* 117 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj6);
        (--rSp)->Val = rLit[15];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 8;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_18() {     /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_21() {     /* #:display:draw-cn-nobackground */
   {    register Ptr aRet;
        {aRet = (GYvirdraw[13] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirdraw_22() {     /* draw-cn-nobackground */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[16];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val < rBfloat)   goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[16];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        if ((rSp + 2)->Val < rBfloat)   goto l_106;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[0];
        rA1 = rLit[16];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_108;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[16];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_108:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_23); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_24); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_24);
        (--rSp)->Val = ((Ptr) GLvirdraw_25);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[16];
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_25() {     /* 114 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
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
        {aRet = (GYvirdraw[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_24() {     /* 112 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rLit[16];
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
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_23() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_26() {     /* draw-point */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[17];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val < rBfloat)   goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[17];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_106;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[17];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_27); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_28); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_28);
        (--rSp)->Val = ((Ptr) GLvirdraw_29);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[17];
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_29() {     /* 112 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
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
        rA4 = (Ptr) 5;
        {aRet = (GYvirdraw[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_28() {     /* 110 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj3);
        (--rSp)->Val = rLit[17];
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
        rA4 = (Ptr) 5;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_27() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_30() {     /* #:display:draw-point */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[9];
        GIa1 = rLit[17];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_31() {     /* draw-polymarker */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBvect, rBstrg;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBvect = GIbvect; rBstrg = GIbstrg;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < GIbfloat)     goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[18];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if (((rSp + 1)->Val >= rBvect) && ((rSp + 1)->Val < rBstrg))    goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[19];
        rA1 = rLit[18];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        if (((rSp + 2)->Val >= rBvect) && ((rSp + 2)->Val < rBstrg))    goto l_106;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[19];
        rA1 = rLit[18];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_108;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[18];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_108:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_32); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_33); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_33);
        (--rSp)->Val = ((Ptr) GLvirdraw_34);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[18];
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_34() {     /* 114 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
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
        {aRet = (GYvirdraw[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_33() {     /* 112 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rLit[18];
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
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_32() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_35() {     /* #:display:draw-polymarker */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[9];
        GIa1 = rLit[18];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_36() {     /* draw-line */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        if (rA4 == (Ptr) 4)     goto l_101;
        rA1 = rLit[20];
        rA2 = (Ptr) 4;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 3)->Val < rBfloat)   goto l_103;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[0];
        rA1 = rLit[20];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 2)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[0];
        rA1 = rLit[20];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 1)->Val < rBfloat)   goto l_107;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[20];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if (rSp->Val < rBfloat) goto l_109;
        rA3 = rSp->Val;
        rA2 = rLit[0];
        rA1 = rLit[20];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_111;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[20];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_37); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_38); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_38);
        (--rSp)->Val = ((Ptr) GLvirdraw_39);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[20];
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_39() {     /* 117 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 7;
        {aRet = (GYvirdraw[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_38() {     /* 115 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj5);
        (--rSp)->Val = rLit[20];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 7;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_37() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_40() {     /* #:display:draw-line */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[9];
        GIa1 = rLit[20];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_41() {     /* draw-polyline */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBvect, rBstrg;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBvect = GIbvect; rBstrg = GIbstrg;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < GIbfloat)     goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[21];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if (((rSp + 1)->Val >= rBvect) && ((rSp + 1)->Val < rBstrg))    goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[19];
        rA1 = rLit[21];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        if (((rSp + 2)->Val >= rBvect) && ((rSp + 2)->Val < rBstrg))    goto l_106;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[19];
        rA1 = rLit[21];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_108;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[21];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_108:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_42); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_43); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_43);
        (--rSp)->Val = ((Ptr) GLvirdraw_44);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[21];
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_44() {     /* 114 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
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
        {aRet = (GYvirdraw[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_43() {     /* 112 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rLit[21];
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
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_42() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_45() {     /* #:display:draw-polyline */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[9];
        GIa1 = rLit[21];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_46() {     /* draw-rectangle */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        if (rA4 == (Ptr) 4)     goto l_101;
        rA1 = rLit[22];
        rA2 = (Ptr) 4;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 3)->Val < rBfloat)   goto l_103;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[0];
        rA1 = rLit[22];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 2)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[0];
        rA1 = rLit[22];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 1)->Val < rBfloat)   goto l_107;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[22];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if (rSp->Val < rBfloat) goto l_109;
        rA3 = rSp->Val;
        rA2 = rLit[0];
        rA1 = rLit[22];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_111;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[22];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_47); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_48); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_48);
        (--rSp)->Val = ((Ptr) GLvirdraw_49);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[22];
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_49() {     /* 117 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 7;
        {aRet = (GYvirdraw[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_48() {     /* 115 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj5);
        (--rSp)->Val = rLit[22];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 7;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_47() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_50() {     /* #:display:draw-rectangle */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[9];
        GIa1 = rLit[22];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_51() {     /* fill-rectangle */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        if (rA4 == (Ptr) 4)     goto l_101;
        rA1 = rLit[23];
        rA2 = (Ptr) 4;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 3)->Val < rBfloat)   goto l_103;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[0];
        rA1 = rLit[23];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 2)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[0];
        rA1 = rLit[23];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 1)->Val < rBfloat)   goto l_107;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[23];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if (rSp->Val < rBfloat) goto l_109;
        rA3 = rSp->Val;
        rA2 = rLit[0];
        rA1 = rLit[23];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_111;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[23];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_52); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_53); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_53);
        (--rSp)->Val = ((Ptr) GLvirdraw_54);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[23];
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_54() {     /* 117 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 7;
        {aRet = (GYvirdraw[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_53() {     /* 115 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj5);
        (--rSp)->Val = rLit[23];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 7;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_52() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_55() {     /* #:display:fill-rectangle */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[9];
        GIa1 = rLit[23];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_56() {     /* highlight-rectangle */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        if (rA4 == (Ptr) 4)     goto l_101;
        rA1 = rLit[24];
        rA2 = (Ptr) 4;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 3)->Val < rBfloat)   goto l_103;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[0];
        rA1 = rLit[24];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 2)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[0];
        rA1 = rLit[24];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 1)->Val < rBfloat)   goto l_107;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[24];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if (rSp->Val < rBfloat) goto l_109;
        rA3 = rSp->Val;
        rA2 = rLit[0];
        rA1 = rLit[24];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_111;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[24];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_57); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_58); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_58);
        (--rSp)->Val = ((Ptr) GLvirdraw_59);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[24];
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_59() {     /* 117 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 7;
        {aRet = (GYvirdraw[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_58() {     /* 115 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj5);
        (--rSp)->Val = rLit[24];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 7;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_57() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_60() {     /* #:display:highlight-rectangle */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[9];
        GIa1 = rLit[24];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_61() {     /* fill-area */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBvect, rBstrg;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBvect = GIbvect; rBstrg = GIbstrg;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < GIbfloat)     goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[25];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if (((rSp + 1)->Val >= rBvect) && ((rSp + 1)->Val < rBstrg))    goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[19];
        rA1 = rLit[25];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        if (((rSp + 2)->Val >= rBvect) && ((rSp + 2)->Val < rBstrg))    goto l_106;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[19];
        rA1 = rLit[25];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_108;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[25];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_108:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_62); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_63); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_63);
        (--rSp)->Val = ((Ptr) GLvirdraw_64);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[25];
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_64() {     /* 114 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
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
        {aRet = (GYvirdraw[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_63() {     /* 112 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rLit[25];
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
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_62() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_65() {     /* #:display:fill-area */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[9];
        GIa1 = rLit[25];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_66() {     /* draw-ellipse */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        if (rA4 == (Ptr) 4)     goto l_101;
        rA1 = rLit[26];
        rA2 = (Ptr) 4;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 3)->Val < rBfloat)   goto l_103;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[0];
        rA1 = rLit[26];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 2)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[0];
        rA1 = rLit[26];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 1)->Val < rBfloat)   goto l_107;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[26];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if (rSp->Val < rBfloat) goto l_109;
        rA3 = rSp->Val;
        rA2 = rLit[0];
        rA1 = rLit[26];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_111;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[26];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_67); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_68); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_68);
        (--rSp)->Val = ((Ptr) GLvirdraw_69);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[26];
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_69() {     /* 117 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 7;
        {aRet = (GYvirdraw[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_68() {     /* 115 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj5);
        (--rSp)->Val = rLit[26];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 7;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_67() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_70() {     /* #:display:draw-ellipse */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[9];
        GIa1 = rLit[26];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_71() {     /* fill-ellipse */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        if (rA4 == (Ptr) 4)     goto l_101;
        rA1 = rLit[27];
        rA2 = (Ptr) 4;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 3)->Val < rBfloat)   goto l_103;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[0];
        rA1 = rLit[27];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 2)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[0];
        rA1 = rLit[27];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 1)->Val < rBfloat)   goto l_107;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[27];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if (rSp->Val < rBfloat) goto l_109;
        rA3 = rSp->Val;
        rA2 = rLit[0];
        rA1 = rLit[27];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_111;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[27];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_72); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_73); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_73);
        (--rSp)->Val = ((Ptr) GLvirdraw_74);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[27];
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_74() {     /* 117 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 7;
        {aRet = (GYvirdraw[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_73() {     /* 115 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj5);
        (--rSp)->Val = rLit[27];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 7;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_72() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_75() {     /* #:display:fill-ellipse */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[9];
        GIa1 = rLit[27];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_76() {     /* draw-circle */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[28];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val < rBfloat)   goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[28];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        if ((rSp + 2)->Val < rBfloat)   goto l_106;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[0];
        rA1 = rLit[28];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_108;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[28];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_108:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_77); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_78); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_78);
        (--rSp)->Val = ((Ptr) GLvirdraw_79);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[28];
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_79() {     /* 114 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
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
        {aRet = (GYvirdraw[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_78() {     /* 112 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rLit[28];
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
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_77() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_80() {     /* #:display:draw-circle */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[9];
        GIa1 = rLit[28];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_81() {     /* fill-circle */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[29];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val < rBfloat)   goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[29];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        if ((rSp + 2)->Val < rBfloat)   goto l_106;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[0];
        rA1 = rLit[29];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_108;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[29];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_108:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_82); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_83); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_83);
        (--rSp)->Val = ((Ptr) GLvirdraw_84);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[29];
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_84() {     /* 114 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
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
        {aRet = (GYvirdraw[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_83() {     /* 112 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rLit[29];
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
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_82() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_85() {     /* #:display:fill-circle */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[9];
        GIa1 = rLit[29];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_86() {     /* draw-arc */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        if (rA4 == (Ptr) 6)     goto l_101;
        rA1 = rLit[30];
        rA2 = (Ptr) 6;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 5)->Val < rBfloat)   goto l_103;
        rA3 = (rSp + 5)->Val;
        rA2 = rLit[0];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 4)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[0];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 3)->Val < rBfloat)   goto l_107;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[0];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if ((rSp + 2)->Val < rBfloat)   goto l_109;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[0];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_111;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_87); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_88); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_88);
        (--rSp)->Val = ((Ptr) GLvirdraw_89);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[30];
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_89() {     /* 117 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 9;
        {aRet = (GYvirdraw[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_88() {     /* 115 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj7);
        (--rSp)->Val = rLit[30];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 9;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_87() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_90() {     /* #:display:draw-arc */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[9];
        GIa1 = rLit[30];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_91() {     /* fill-arc */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        if (rA4 == (Ptr) 6)     goto l_101;
        rA1 = rLit[31];
        rA2 = (Ptr) 6;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 5)->Val < rBfloat)   goto l_103;
        rA3 = (rSp + 5)->Val;
        rA2 = rLit[0];
        rA1 = rLit[31];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 4)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[0];
        rA1 = rLit[31];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 3)->Val < rBfloat)   goto l_107;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[0];
        rA1 = rLit[31];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if ((rSp + 2)->Val < rBfloat)   goto l_109;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[0];
        rA1 = rLit[31];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_111;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[31];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_92); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_93); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_93);
        (--rSp)->Val = ((Ptr) GLvirdraw_94);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[31];
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_94() {     /* 117 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 9;
        {aRet = (GYvirdraw[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_93() {     /* 115 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj7);
        (--rSp)->Val = rLit[31];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 9;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_92() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_95() {     /* #:display:fill-arc */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[9];
        GIa1 = rLit[31];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_96() {     /* draw-segments */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBvect, rBstrg;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBvect = GIbvect; rBstrg = GIbstrg;
        if (rA4 == (Ptr) 5)     goto l_101;
        rA1 = rLit[32];
        rA2 = (Ptr) 5;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 4)->Val < GIbfloat)  goto l_103;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if (((rSp + 3)->Val >= rBvect) && ((rSp + 3)->Val < rBstrg))    goto l_105;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[19];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if (((rSp + 2)->Val >= rBvect) && ((rSp + 2)->Val < rBstrg))    goto l_107;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[19];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if (((rSp + 1)->Val >= rBvect) && ((rSp + 1)->Val < rBstrg))    goto l_109;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[19];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        if ((rSp->Val >= rBvect) && (rSp->Val < rBstrg))        goto l_111;
        rA3 = rSp->Val;
        rA2 = rLit[19];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_113;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_113:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_97); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_98); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_98);
        (--rSp)->Val = ((Ptr) GLvirdraw_99);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[32];
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_99() {     /* 119 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 8;
        {aRet = (GYvirdraw[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_98() {     /* 117 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj6);
        (--rSp)->Val = rLit[32];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 8;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_97() {     /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_100() {    /* #:display:draw-segments */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[9];
        GIa1 = rLit[32];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_101() {    /* draw-string */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA1;
        rA3 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = rA4;
        rA3 = rA3->Val;
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[33];
        (--rSp)->Val = ((Ptr) GLvirdraw_102);
        (--rSp)->Val = ((Ptr) GLvirdraw_103);
        (--rSp)->Val = rLit[34];
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 2;
        {aRet = (rLit[35] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_103() {    /* 103 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirdraw[35] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirdraw_102() {    /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirdraw; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirdraw_104);
        (--rSp)->Val = rLit[10];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[36];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_104() {    /* 104 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYvirdraw[35] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirdraw_105() {    /* draw-rectangles */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat, rBvect, rBstrg;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg;
        if (rA4 == (Ptr) 5)     goto l_101;
        rA1 = rLit[38];
        rA2 = (Ptr) 5;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 4)->Val < rBfloat)   goto l_103;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[0];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 3)->Val < rBfloat)   goto l_105;
        if (((rSp + 3)->Val >= rBvect) && ((rSp + 3)->Val < rBstrg))    goto l_105;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[19];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 2)->Val < rBfloat)   goto l_109;
        if (((rSp + 2)->Val >= rBvect) && ((rSp + 2)->Val < rBstrg))    goto l_109;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[19];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        if ((rSp + 1)->Val < rBfloat)   goto l_113;
        if (((rSp + 1)->Val >= rBvect) && ((rSp + 1)->Val < rBstrg))    goto l_113;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[19];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_113:
        if (rSp->Val < rBfloat) goto l_117;
        if ((rSp->Val >= rBvect) && (rSp->Val < rBstrg))        goto l_117;
        rA3 = rSp->Val;
        rA2 = rLit[19];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_117:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_121;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_121:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_106); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_107); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_107);
        (--rSp)->Val = rLit[39];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 8;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_107() {    /* 125 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj6);
        (--rSp)->Val = rLit[38];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 8;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_106() {    /* 122 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_108() {    /* fill-rectangles */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat, rBvect, rBstrg;
        rLit = GYvirdraw; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg;
        if (rA4 == (Ptr) 5)     goto l_101;
        rA1 = rLit[40];
        rA2 = (Ptr) 5;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 4)->Val < rBfloat)   goto l_103;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[0];
        rA1 = rLit[40];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 3)->Val < rBfloat)   goto l_105;
        if (((rSp + 3)->Val >= rBvect) && ((rSp + 3)->Val < rBstrg))    goto l_105;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[19];
        rA1 = rLit[40];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 2)->Val < rBfloat)   goto l_109;
        if (((rSp + 2)->Val >= rBvect) && ((rSp + 2)->Val < rBstrg))    goto l_109;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[19];
        rA1 = rLit[40];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        if ((rSp + 1)->Val < rBfloat)   goto l_113;
        if (((rSp + 1)->Val >= rBvect) && ((rSp + 1)->Val < rBstrg))    goto l_113;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[19];
        rA1 = rLit[40];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_113:
        if (rSp->Val < rBfloat) goto l_117;
        if ((rSp->Val >= rBvect) && (rSp->Val < rBstrg))        goto l_117;
        rA3 = rSp->Val;
        rA2 = rLit[19];
        rA1 = rLit[40];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_117:
        (--rSp)->Val = rLit[2]->Val;
        if (rSp->Val != rNil)   goto l_121;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[40];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_121:
        rA4 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirdraw_109); goto lRet;}
        if (rLit[4]->Val == rNil)       {aRet = ((Ptr) GLvirdraw_110); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_110);
        (--rSp)->Val = rLit[41];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 8;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_110() {    /* 125 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj6);
        (--rSp)->Val = rLit[40];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 9)->Val;
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
        rA4 = (Ptr) 8;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_109() {    /* 122 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_111() {    /* #:display:draw-rectangles */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        if (rA4 == (Ptr) 7)     goto l_101;
        GIa1 = rLit[42];
        GIa2 = (Ptr) 7;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
l_101:
        (--rSp)->Val = GInil;
        rA4 = (rSp + 5)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rA4;
        {aRet = ((Ptr) GLvirdraw_112); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_112() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirdraw_113);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYvirdraw[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_113() {    /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA4, rBfloat;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4; rBfloat = GIbfloat;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLvirdraw_114); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_115);
        (--rSp)->Val = rLit[22];
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        if ((rSp + 10)->Val >= rBfloat) goto l_106;
        rA4 = (rSp + 10)->Val;
        goto l_107;
l_106:
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) ((rSp + 5)->Val))->Val;
l_107:
        (--rSp)->Val = rA4;
        if ((rSp + 10)->Val >= rBfloat) goto l_108;
        rA4 = (rSp + 10)->Val;
        goto l_109;
l_108:
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) ((rSp + 6)->Val))->Val;
l_109:
        (--rSp)->Val = rA4;
        if ((rSp + 10)->Val >= rBfloat) goto l_110;
        rA4 = (rSp + 10)->Val;
        goto l_111;
l_110:
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) ((rSp + 7)->Val))->Val;
l_111:
        (--rSp)->Val = rA4;
        if ((rSp + 10)->Val >= rBfloat) goto l_112;
        rA4 = (rSp + 10)->Val;
        goto l_113;
l_112:
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) ((rSp + 8)->Val))->Val;
l_113:
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 7;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_115() {    /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirdraw_116);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (GYvirdraw[44] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_116() {    /* 114 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLvirdraw_112); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirdraw_114() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_117() {    /* #:display:fill-rectangles */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4;
        if (rA4 == (Ptr) 7)     goto l_101;
        GIa1 = rLit[45];
        GIa2 = (Ptr) 7;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
l_101:
        (--rSp)->Val = GInil;
        rA4 = (rSp + 5)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rA4;
        {aRet = ((Ptr) GLvirdraw_118); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_118() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirdraw_119);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYvirdraw[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_119() {    /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA4, rBfloat;
        rLit = GYvirdraw; rSp = GIsp; rA4 = GIa4; rBfloat = GIbfloat;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLvirdraw_120); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirdraw_121);
        (--rSp)->Val = rLit[23];
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        if ((rSp + 10)->Val >= rBfloat) goto l_106;
        rA4 = (rSp + 10)->Val;
        goto l_107;
l_106:
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) ((rSp + 5)->Val))->Val;
l_107:
        (--rSp)->Val = rA4;
        if ((rSp + 10)->Val >= rBfloat) goto l_108;
        rA4 = (rSp + 10)->Val;
        goto l_109;
l_108:
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) ((rSp + 6)->Val))->Val;
l_109:
        (--rSp)->Val = rA4;
        if ((rSp + 10)->Val >= rBfloat) goto l_110;
        rA4 = (rSp + 10)->Val;
        goto l_111;
l_110:
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) ((rSp + 7)->Val))->Val;
l_111:
        (--rSp)->Val = rA4;
        if ((rSp + 10)->Val >= rBfloat) goto l_112;
        rA4 = (rSp + 10)->Val;
        goto l_113;
l_112:
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) ((rSp + 8)->Val))->Val;
l_113:
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 7;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirdraw_121() {    /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirdraw_122);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (GYvirdraw[44] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirdraw_122() {    /* 114 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLvirdraw_118); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirdraw_120() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDvirdraw_123() {    /* trace draw-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,1,46,47);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_124() {    /* trace #:display:draw-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,48,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_125() {    /* trace draw-substring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,10,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_126() {    /* trace #:display:draw-substring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,50,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_127() {    /* trace draw-cn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,13,46,47);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_128() {    /* trace #:display:draw-cn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,51,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_129() {    /* trace #:display:draw-substring-nobackground */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,14,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_130() {    /* trace draw-substring-nobackground */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,15,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_131() {    /* trace #:display:draw-cn-nobackground */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,52,46,47);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_132() {    /* trace draw-cn-nobackground */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,16,46,47);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_133() {    /* trace draw-point */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,17,46,53);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_134() {    /* trace #:display:draw-point */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,54,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_135() {    /* trace draw-polymarker */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,18,46,47);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_136() {    /* trace #:display:draw-polymarker */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,55,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_137() {    /* trace draw-line */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,20,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_138() {    /* trace #:display:draw-line */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,56,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_139() {    /* trace draw-polyline */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,21,46,47);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_140() {    /* trace #:display:draw-polyline */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,57,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_141() {    /* trace draw-rectangle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,22,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_142() {    /* trace #:display:draw-rectangle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,58,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_143() {    /* trace fill-rectangle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,23,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_144() {    /* trace #:display:fill-rectangle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,59,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_145() {    /* trace highlight-rectangle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,24,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_146() {    /* trace #:display:highlight-rectangle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,60,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_147() {    /* trace fill-area */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,25,46,47);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_148() {    /* trace #:display:fill-area */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,61,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_149() {    /* trace draw-ellipse */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,26,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_150() {    /* trace #:display:draw-ellipse */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,62,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_151() {    /* trace fill-ellipse */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,27,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_152() {    /* trace #:display:fill-ellipse */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,63,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_153() {    /* trace draw-circle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,28,46,47);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_154() {    /* trace #:display:draw-circle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,64,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_155() {    /* trace fill-circle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,29,46,47);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_156() {    /* trace #:display:fill-circle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,65,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_157() {    /* trace draw-arc */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,30,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_158() {    /* trace #:display:draw-arc */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,66,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_159() {    /* trace fill-arc */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,31,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_160() {    /* trace #:display:fill-arc */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,67,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_161() {    /* trace draw-segments */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,32,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_162() {    /* trace #:display:draw-segments */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,68,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_163() {    /* trace draw-string */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,69,46,70);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_164() {    /* trace draw-rectangles */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,38,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_165() {    /* trace fill-rectangles */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,40,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_166() {    /* trace #:display:draw-rectangles */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,42,46,49);
  lRet:  return (aRet);}}

static Ptr GDvirdraw_167() {    /* trace #:display:fill-rectangles */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirdraw,45,46,49);
  lRet:  return (aRet);}}

