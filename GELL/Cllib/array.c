/* GELL 15.26: source file for the module: "array" */
/*             translation done:           "Wed June 16 93 18:01:49 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "array.h" 

static Ptr GLarray_1() {        /* makearray */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYarray; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[0];
        rA2 = (Ptr) 1;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = rNil;
        goto l_nlist_array_3;
l_nlist_array_2:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_array_3:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_array_2;}
        (--rSp)->Val = rLit[2]->Val;
        rLit[2]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[3];
        (--rSp)->Val = ((Ptr) GLarray_1);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rA1 == rNil)        {aRet = ((Ptr) GLarray_4); goto lRet;}
        rA2 = rNil;
        rA1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLarray_6);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLarray_6() {        /* call_array_5 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLarray_8);
        {aRet = (GYarray[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLarray_8() {        /* call_array_7 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLarray_9); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLarray_9() {        /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLarray_10);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYarray[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLarray_10() {       /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYarray; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLarray_11); goto lRet;}
        (--rSp)->Val = ((Ptr) GLarray_12);
        (--rSp)->Val = rLit[0];
        (--rSp)->Val = rLit[2]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLarray_12() {       /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLarray_13);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (GYarray[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLarray_13() {       /* 108 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLarray_9); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLarray_11() {       /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 2;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLarray_14); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLarray_4() {        /* 102 */
   {    register Ptr aRet;
        GIa1 = (GIsp + 7)->Val;
        {aRet = ((Ptr) GLarray_14); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLarray_14() {       /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYarray[2]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLarray_15() {       /* aref */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYarray; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rLit[2]->Val;
        rLit[2]->Val = rA4;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[9];
        (--rSp)->Val = ((Ptr) GLarray_15);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rA4 != rNil)        goto l_101;
        {aRet = ((Ptr) GLarray_16); goto lRet;}
l_101:
        if ((long) rA4 >= (long) GIbcons)       goto l_103;
        GIa3 = rA4;
        GIa2 = rLit[10];
        rA1 = rLit[11];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLarray_16); goto lRet;}
l_103:
        (--rSp)->Val = ((Ptr) GLarray_16);
        (--rSp)->Val = rLit[12];
        (--rSp)->Val = ((Ptr) GLarray_17);
        (--rSp)->Val = rLit[11];
        (--rSp)->Val = rA1;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLarray_19);
        {aRet = (rLit[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLarray_19() {       /* call_array_18 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (rA1 + 1)->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        (--GIsp)->Val = rA1;
        GIa4 = (Ptr) 3;
        {aRet = (GYarray[14] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLarray_17() {       /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYarray; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = rLit[2]->Val;
        (--rSp)->Val = ((Ptr) GLarray_21);
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLarray_21() {       /* call_array_20 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1->Val;
        GIa4 = (Ptr) 3;
        {aRet = (GYarray[16] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLarray_16() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYarray[2]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLarray_22() {       /* aset */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rBcons;
        rLit = GYarray; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rBcons = GIbcons;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rLit[2]->Val;
        rLit[2]->Val = rA4;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[17];
        (--rSp)->Val = ((Ptr) GLarray_22);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if ((long) rA4 >= (long) rBcons)        goto l_101;
        GIa3 = rA4;
        GIa2 = rLit[10];
        rA1 = rLit[18];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLarray_23); goto lRet;}
l_101:
        if ((long) (rA4 + 1)->Val < (long) rBcons)      {aRet = ((Ptr) GLarray_23); goto lRet;}
        (--rSp)->Val = ((Ptr) GLarray_23);
        (--rSp)->Val = rLit[19];
        (--rSp)->Val = ((Ptr) GLarray_24);
        (--rSp)->Val = rLit[11];
        (--rSp)->Val = rA1;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLarray_26);
        {aRet = (rLit[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLarray_26() {       /* call_array_25 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        (--GIsp)->Val = rA1;
        GIa4 = (Ptr) 3;
        {aRet = (GYarray[14] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLarray_24() {       /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYarray; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = rLit[2]->Val;
        (--rSp)->Val = ((Ptr) GLarray_28);
        {aRet = (rLit[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLarray_28() {       /* call_array_27 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYarray; rSp = GIsp;
        GIa3 = (GIa1 + 1)->Val;
        (--rSp)->Val = GIa3->Val;
        GIa1 = rLit[2]->Val;
        (--rSp)->Val = ((Ptr) GLarray_30);
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLarray_30() {       /* call_array_29 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1->Val;
        GIa4 = (Ptr) 4;
        {aRet = (GYarray[16] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLarray_23() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYarray[2]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDarray_31() {       /* trace makearray */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYarray,0,20,21);
  lRet:  return (aRet);}}

static Ptr GDarray_32() {       /* trace aref */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYarray,11,20,22);
  lRet:  return (aRet);}}

static Ptr GDarray_33() {       /* trace aset */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYarray,18,20,22);
  lRet:  return (aRet);}}

