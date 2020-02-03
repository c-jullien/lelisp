/* GELL 15.26: source file for the module: "fib20" */
/*             translation done:           "Tue Aug  24 93 16:21:49 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "fib20.h" 

static Ptr GLfib20_1() {        /* check-fib20 */
   {    register Ptr aRet, *rLit;
        rLit = GYfib20;
        GIa2 = (Ptr) 6765;
        GIa1 = rLit[0];
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfib20_2() {        /* meter-fib20 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfib20; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLfib20_3);
        (--rSp)->Val = rLit[2];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfib20_3() {        /* 101 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 20;
        (--GIsp)->Val = ((Ptr) GLfib20_5);
        {aRet = ((Ptr) GLfib20_6); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfib20_5() {        /* call_fib20_4 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfib20; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[4];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfib20_7() {        /* test-fib20 */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) 1)    {aRet = ((Ptr) GLfib20_8); goto lRet;}
        GIa1 = (Ptr) 20;
        {aRet = ((Ptr) GLfib20_6); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfib20_9() {        /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (Ptr) 20;
        (--rSp)->Val = ((Ptr) GLfib20_11);
        {aRet = ((Ptr) GLfib20_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfib20_11() {       /* call_fib20_10 */
   {    register Ptr aRet;
        GIa1 = (GIsp++)->Val;
        {aRet = ((Ptr) GLfib20_8); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfib20_8() {        /* 104 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLfib20_9); goto lRet;}}
        rA1 = GYfib20[5];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLfib20_6() {        /* fib */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
l_GLfib20_6:
        (--rSp)->Val = rA1;
        if (rA1 != (Ptr) 1)     goto l_101;
        rA1 = (Ptr) 1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if (rA1 != (Ptr) 2)     goto l_103;
        rA1 = (Ptr) 1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLfib20_13);
        goto l_GLfib20_6;
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfib20_13() {       /* call_fib20_12 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 2));
        GIa1 = rA4;
        (--rSp)->Val = ((Ptr) GLfib20_15);
        {aRet = ((Ptr) GLfib20_6); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLfib20_15() {       /* call_fib20_14 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (GIa1)));
        GIa1 = rA4;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GDfib20_16() {       /* trace check-fib20 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfib20,6,7,8);
  lRet:  return (aRet);}}

static Ptr GDfib20_17() {       /* trace meter-fib20 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfib20,9,7,8);
  lRet:  return (aRet);}}

static Ptr GDfib20_18() {       /* trace test-fib20 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfib20,10,7,11);
  lRet:  return (aRet);}}

