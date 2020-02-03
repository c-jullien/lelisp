/* GELL 15.26: source file for the module: "vt100" */
/*             translation done:           "Wed June 16 93 18:02:58 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "vt100.h" 

static Ptr GLvt100_1() {        /* #:tty:vt100:tycursor */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvt100_2);
        (--rSp)->Val = (Ptr) 27;
        (--rSp)->Val = (Ptr) 91;
        GIa4 = (Ptr) 2;
        {aRet = (GYvt100[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvt100_2() {        /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        GIa2 = (Ptr) 0;
        GIa1 = rA4;
        (--rSp)->Val = ((Ptr) GLvt100_4);
        {aRet = (GYvt100[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvt100_4() {        /* call_vt100_3 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvt100_5);
        (--rSp)->Val = (Ptr) 59;
        GIa4 = (Ptr) 1;
        {aRet = (GYvt100[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvt100_5() {        /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        GIa2 = (Ptr) 0;
        GIa1 = rA4;
        (--rSp)->Val = ((Ptr) GLvt100_7);
        {aRet = (GYvt100[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvt100_7() {        /* call_vt100_6 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = (Ptr) 72;
        GIa4 = (Ptr) 1;
        {aRet = (GYvt100[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvt100_8() {        /* #:tty:vt100:tycls */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = (Ptr) 27;
        (--rSp)->Val = (Ptr) 91;
        (--rSp)->Val = (Ptr) 59;
        (--rSp)->Val = (Ptr) 72;
        (--rSp)->Val = (Ptr) 27;
        (--rSp)->Val = (Ptr) 91;
        (--rSp)->Val = (Ptr) 50;
        (--rSp)->Val = (Ptr) 74;
        GIa4 = (Ptr) 8;
        {aRet = (GYvt100[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvt100_9() {        /* #:tty:vt100:tycleol */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = (Ptr) 27;
        (--rSp)->Val = (Ptr) 91;
        (--rSp)->Val = (Ptr) 75;
        GIa4 = (Ptr) 3;
        {aRet = (GYvt100[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvt100_10() {       /* #:tty:vt100:tycleos */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = (Ptr) 27;
        (--rSp)->Val = (Ptr) 91;
        (--rSp)->Val = (Ptr) 74;
        GIa4 = (Ptr) 3;
        {aRet = (GYvt100[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvt100_11() {       /* #:tty:vt100:tyattrib */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvt100; rSp = GIsp;
        if (GIa1 == GInil)      goto l_101;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = (Ptr) 27;
        (--rSp)->Val = (Ptr) 91;
        (--rSp)->Val = (Ptr) 52;
        (--rSp)->Val = (Ptr) 109;
        GIa4 = (Ptr) 4;
        {aRet = (rLit[0] + 2)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = (Ptr) 27;
        (--rSp)->Val = (Ptr) 91;
        (--rSp)->Val = (Ptr) 109;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvt100_12() {       /* #:tty:vt100:typrologue */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvt100_13);
        (--rSp)->Val = (Ptr) 27;
        (--rSp)->Val = (Ptr) 91;
        (--rSp)->Val = (Ptr) 49;
        (--rSp)->Val = (Ptr) 59;
        (--rSp)->Val = (Ptr) 50;
        (--rSp)->Val = (Ptr) 52;
        (--rSp)->Val = (Ptr) 114;
        (--rSp)->Val = (Ptr) 27;
        (--rSp)->Val = (Ptr) 91;
        (--rSp)->Val = (Ptr) 50;
        (--rSp)->Val = (Ptr) 52;
        (--rSp)->Val = (Ptr) 59;
        (--rSp)->Val = (Ptr) 49;
        (--rSp)->Val = (Ptr) 72;
        GIa4 = (Ptr) 14;
        {aRet = (GYvt100[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvt100_13() {       /* 101 */
   {    register Ptr aRet;
        {aRet = (GYvt100[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvt100_14() {       /* #:tty:vt100:tyepilogue */
   {    register Ptr aRet, *rLit, rA4;
        rLit = GYvt100; rA4 = GIa4;
        rA4 = rLit[3]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa2 = rA4;
        GIa1 = (Ptr) 0;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GDvt100_15() {       /* trace #:tty:vt100:tycursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvt100,5,6,7);
  lRet:  return (aRet);}}

static Ptr GDvt100_16() {       /* trace #:tty:vt100:tycls */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvt100,2,6,8);
  lRet:  return (aRet);}}

static Ptr GDvt100_17() {       /* trace #:tty:vt100:tycleol */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvt100,9,6,8);
  lRet:  return (aRet);}}

static Ptr GDvt100_18() {       /* trace #:tty:vt100:tycleos */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvt100,10,6,8);
  lRet:  return (aRet);}}

static Ptr GDvt100_19() {       /* trace #:tty:vt100:tyattrib */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvt100,11,6,12);
  lRet:  return (aRet);}}

static Ptr GDvt100_20() {       /* trace #:tty:vt100:typrologue */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvt100,13,6,8);
  lRet:  return (aRet);}}

static Ptr GDvt100_21() {       /* trace #:tty:vt100:tyepilogue */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvt100,14,6,8);
  lRet:  return (aRet);}}

