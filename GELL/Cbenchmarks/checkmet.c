/* GELL 15.26: source file for the module: "checkmet" */
/*             translation done:           "Wed June 16 93 18:18:04 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "checkmet.h" 

static Ptr GLcheckmet_1() {     /* check-value */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLcheckmet_2);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 1;
        {aRet = (GYcheckmet[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcheckmet_2() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLcheckmet_4);
        {aRet = (GYcheckmet[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcheckmet_4() {     /* call_checkmet_3 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYcheckmet; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        (--rSp)->Val = ((Ptr) GXpopj3);
        (--rSp)->Val = rLit[2];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[3];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[4];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 6;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
l_102:
        rA1 = rNil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcheckmet_5() {     /* perform-meter */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYcheckmet; rSp = GIsp; rA1 = GIa1;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[6];
        (--rSp)->Val = rLit[7];
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[8];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GDcheckmet_6() {     /* trace check-value */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcheckmet,10,11,12);
  lRet:  return (aRet);}}

static Ptr GDcheckmet_7() {     /* trace perform-meter */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcheckmet,13,11,14);
  lRet:  return (aRet);}}

