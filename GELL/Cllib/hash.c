/* GELL 15.26: source file for the module: "hash" */
/*             translation done:           "Thu Jul   8 93 21:26:13 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "hash.h" 

static Ptr GLhash_1() { /* #:hash-table:make */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYhash; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLhash_2);
        (--rSp)->Val = rLit[0];
        (--rSp)->Val = rLit[1];
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rLit[2]->Val;
        (--rSp)->Val = rLit[3]->Val;
        (--rSp)->Val = rLit[4]->Val;
        (--rSp)->Val = rLit[5]->Val;
        (--rSp)->Val = rLit[6]->Val;
        (--rSp)->Val = rLit[7]->Val;
        GIa4 = (Ptr) 9;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_2() { /* 101 */
   {    register Ptr aRet;
        (GIa1 + 1)->Val = GYhash[9];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_3() { /* #:hash-table:vect */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYhash; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = (Ptr) 1;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 3));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 3));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_4() { /* hash-table-p */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLhash_6);
        {aRet = (GYhash[12] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_6() { /* call_hash_5 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYhash; rSp = GIsp; rA1 = GIa1;
        if (rA1 != rLit[9])     goto l_101;
        rA1 = rLit[13];
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLhash_7() { /* #:hash-table:eval */
   {    register Ptr aRet;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_8() { /* #:hash-table:prin */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYhash; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[14]->Val;
        rLit[14]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[15];
        (--rSp)->Val = rLit[16];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLhash_9);
        (--rSp)->Val = ((Ptr) GLhash_10);
        (--rSp)->Val = rLit[17];
        rA4 = (rA1->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[18];
        rA4 = (Ptr) 3;
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_10() {        /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYhash[20] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_9() { /* 101 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYhash; rSp = GIsp; rNil = GInil;
        GIdlink = (rSp + 1)->Val;
        rLit[14]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        if (rLit[14]->Val == rNil)      {aRet = ((Ptr) GLhash_11); goto lRet;}
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[14]->Val;
        rLit[14]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[21];
        (--rSp)->Val = rLit[16];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLhash_12);
        (--rSp)->Val = rLit[22];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_12() {        /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYhash; rSp = GIsp; rA4 = GIa4;
        GIdlink = (rSp + 1)->Val;
        rLit[14]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        (--rSp)->Val = ((Ptr) GLhash_13);
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_13() {        /* 106 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = (Ptr) 0;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        GIa3 = (rA4->Val + 1)->Val;
        (--rSp)->Val = GIa3;
        {aRet = ((Ptr) GLhash_14); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_14() {        /* 107 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((Fix) ((rSp + 2)->Val) >= (Fix) (rSp->Val)) {aRet = ((Ptr) GLhash_15); goto lRet;}
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        if ((long) rA4 < (long) GIbcons)        {aRet = ((Ptr) GLhash_16); goto lRet;}
        (--rSp)->Val = rA4;
        {aRet = ((Ptr) GLhash_17); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_17() {        /* 111 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLhash_18); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = rSp->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLhash_19);
        (--rSp)->Val = ((Ptr) GLhash_20);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (GYhash[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_20() {        /* 114 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYhash[20] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_19() {        /* 113 */
   {    register Ptr aRet;
        GIsp += (Fix) 3;
        {aRet = ((Ptr) GLhash_17); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_18() {        /* 112 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLhash_16); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_16() {        /* 110 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 2)->Val = rA4;
        {aRet = ((Ptr) GLhash_14); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLhash_15() {        /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYhash; rSp = GIsp;
        rSp += (Fix) 3;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[14]->Val;
        rLit[14]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[24];
        (--rSp)->Val = rLit[16];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLhash_21);
        (--rSp)->Val = rLit[25];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_21() {        /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYhash[14]->Val = (rSp + 6)->Val;
        rSp += (Fix) 9;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_11() {        /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYhash; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = ((Ptr) GLhash_22);
        (--rSp)->Val = rLit[26];
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[27];
        rA4 = (Ptr) 3;
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_22() {        /* 117 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYhash[20] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_23() {        /* make-hash-table-eq */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYhash; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA1 = rSp->Val;
        if (rA1 != (Ptr) 0)     goto l_102;
        GIa2 = rLit[0];
        rA1 = rLit[2]->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLhash_24); goto lRet;}
l_102:
        if (rA1 != (Ptr) 1)     {aRet = ((Ptr) GLhash_25); goto lRet;}
        rA4 = rSp->Val;
        GIa2 = (rSp + (Fix) (rA4))->Val;
        rA1 = rLit[28];
        (--rSp)->Val = ((Ptr) GLhash_27);
        {aRet = ((Ptr) GLhash_28); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_27() {        /* call_hash_26 */
   {    register Ptr aRet;
        GIa2 = GYhash[0];
        (--GIsp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLhash_24); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_25() {        /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYhash; rSp = GIsp;
        GIa3 = (Ptr) 1;
        GIa2 = rLit[29];
        GIa1 = rLit[30];
        GIsp = rSp; GIa1 = llrt_call_error ();
l_101:
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_29() {        /* make-hash-table-equal */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYhash; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA1 = rSp->Val;
        if (rA1 != (Ptr) 0)     goto l_102;
        GIa2 = rLit[31];
        rA1 = rLit[2]->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLhash_24); goto lRet;}
l_102:
        if (rA1 != (Ptr) 1)     {aRet = ((Ptr) GLhash_30); goto lRet;}
        rA4 = rSp->Val;
        GIa2 = (rSp + (Fix) (rA4))->Val;
        rA1 = rLit[32];
        (--rSp)->Val = ((Ptr) GLhash_32);
        {aRet = ((Ptr) GLhash_28); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_32() {        /* call_hash_31 */
   {    register Ptr aRet;
        GIa2 = GYhash[31];
        (--GIsp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLhash_24); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_30() {        /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYhash; rSp = GIsp;
        GIa3 = (Ptr) 1;
        GIa2 = rLit[29];
        GIa1 = rLit[32];
        GIsp = rSp; GIa1 = llrt_call_error ();
l_101:
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_33() {        /* make-hash-table */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYhash; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA1 = rSp->Val;
        if (rA1 != (Ptr) 0)     goto l_102;
        GIa2 = rLit[0];
        rA1 = rLit[2]->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLhash_24); goto lRet;}
l_102:
        if (rA1 != (Ptr) 1)     {aRet = ((Ptr) GLhash_34); goto lRet;}
        rA4 = rSp->Val;
        GIa2 = (rSp + (Fix) (rA4))->Val;
        rA1 = rLit[33];
        (--rSp)->Val = ((Ptr) GLhash_36);
        {aRet = ((Ptr) GLhash_28); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_36() {        /* call_hash_35 */
   {    register Ptr aRet;
        GIa2 = GYhash[0];
        (--GIsp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLhash_24); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_34() {        /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != (Ptr) 2)    {aRet = ((Ptr) GLhash_37); goto lRet;}
        GIa4 = rSp->Val;
        GIa2 = (rSp + (Fix) (GIa4))->Val;
        GIa1 = GYhash[33];
        (--rSp)->Val = ((Ptr) GLhash_39);
        {aRet = ((Ptr) GLhash_28); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_39() {        /* call_hash_38 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYhash; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 1)->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        rA3 = rA4;
        if (rA3 == rLit[0])     goto l_107;
        if (rA3 != rLit[31])    goto l_105;
l_107:
        rA2 = rA3;
        goto l_106;
l_105:
        rA2 = rLit[34];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
        rA2 = rA1;
l_106:
        rA1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLhash_24); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_37() {        /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYhash; rSp = GIsp;
        GIa3 = (Ptr) 2;
        GIa2 = rLit[29];
        GIa1 = rLit[33];
        GIsp = rSp; GIa1 = llrt_call_error ();
l_101:
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_28() {        /* #:hash-table:default-size */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYhash; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA2 != GInil)       goto l_101;
        rA1 = rLit[2]->Val;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if (rA2 >= GIbfloat)    goto l_103;
        rA1 = rA2;
        {aRet = ((Ptr) GLhash_40); goto lRet;}
l_103:
        GIa3 = rA2;
        rA2 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLhash_24() {        /* #:hash-table:create-internal */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLhash_42);
        {aRet = ((Ptr) GLhash_1); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_42() {        /* call_hash_41 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (rA1->Val + 2 + (Fix) 0)->Val = (rSp + 2)->Val;
        (rA1->Val + 2 + (Fix) 3)->Val = (rSp + 1)->Val;
        (rA1->Val + 2 + (Fix) 2)->Val = (Ptr) 0;
        (--rSp)->Val = rA1;
        GIa2 = GInil;
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLhash_44);
        {aRet = (GYhash[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLhash_44() {        /* call_hash_43 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 1)->Val = GIa1;
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_45() {        /* sxhash */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLhash_47);
        {aRet = ((Ptr) GLhash_48); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_47() {        /* call_hash_46 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) (GIa1) & (UFix) 32767);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_48() {        /* #:hash-table:sxhash */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYhash; rSp = GIsp; rA1 = GIa1;
        if (rA1 >= GIbfloat)    goto l_101;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if ((long) rA1 >= (long) GIbcons)       goto l_105;
        if ((rA1 < GIbvect) || (rA1 >= GIbstrg))        {aRet = ((Ptr) GLhash_49); goto lRet;}
l_105:
        (--rSp)->Val = rLit[37]->Val;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rLit[38]->Val;
        rLit[38]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[39]->Val;
        rLit[39]->Val = (rSp + 3)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[40];
        (--rSp)->Val = rLit[16];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLhash_50);
        (--rSp)->Val = rLit[41];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLhash_52);
        {aRet = ((Ptr) GLhash_53); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_52() {        /* call_hash_51 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLhash_50); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_50() {        /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYhash; rSp = GIsp;
        GIa1 = rLit[38]->Val;
        GIdlink = (rSp + 1)->Val;
        rLit[39]->Val = (rSp + 6)->Val;
        rLit[38]->Val = (rSp + 7)->Val;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_49() {        /* 103 */
   {    register Ptr aRet, rA1, rBsymb;
        rA1 = GIa1; rBsymb = GIbsymb;
        if ((rA1 < rBsymb) || (rA1 >= GIbcons)) goto l_107;
        {aRet = ((Ptr) GLhash_54); goto lRet;}
l_107:
        if ((rA1 < GIbstrg) || (rA1 >= rBsymb)) {aRet = ((Ptr) GLhash_55); goto lRet;}
        {aRet = ((Ptr) GLhash_56); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_54() {        /* #:hash-table:hash-symbol */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = (GIa1 + 3)->Val;
        if (rSp->Val == GInil)  {aRet = ((Ptr) GLhash_57); goto lRet;}
        if ((rSp->Val < GIbsymb) || (rSp->Val >= GIbcons))      {aRet = ((Ptr) GLhash_57); goto lRet;}
        (--rSp)->Val = ((Ptr) GLhash_59);
        {aRet = (GYhash[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_59() {        /* call_hash_58 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLhash_61);
        {aRet = (GYhash[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_61() {        /* call_hash_60 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLhash_63);
        {aRet = ((Ptr) GLhash_54); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_63() {        /* call_hash_62 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (GIa1)));
        GIa1 = rA4;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_57() {        /* 101 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = (GYhash[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_53() {        /* #:hash-table:hash-sequence */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rBcons;
        rLit = GYhash; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rBcons = GIbcons;
        rA4 = rLit[39]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rLit[39]->Val = rA4;
        if (rA4 != (Ptr) 0)     goto l_101;
        rA1 = GInil;
        GIa2 = rLit[41];
        {aRet = (rLit[44] + 2)->Val; goto lRet;}
l_101:
        if (rA1 >= GIbfloat)    goto l_103;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rLit[38]->Val)));
        rLit[38]->Val = rA1;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        if ((long) rA1 < (long) rBcons) goto l_105;
        {aRet = ((Ptr) GLhash_64); goto lRet;}
l_105:
        if ((rA1 < GIbvect) || (rA1 >= GIbstrg))        goto l_107;
        {aRet = ((Ptr) GLhash_65); goto lRet;}
l_107:
        if ((rA1 < GIbsymb) || (rA1 >= rBcons)) {aRet = ((Ptr) GLhash_66); goto lRet;}
        (--rSp)->Val = ((Ptr) GLhash_68);
        {aRet = ((Ptr) GLhash_54); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_68() {        /* call_hash_67 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYhash; rA1 = GIa1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rLit[38]->Val)));
        rLit[38]->Val = rA1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLhash_66() {        /* 109 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if ((rA1 < GIbstrg) || (rA1 >= GIbsymb))        {aRet = ((Ptr) GLhash_69); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLhash_71);
        {aRet = ((Ptr) GLhash_56); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_71() {        /* call_hash_70 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYhash; rA1 = GIa1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rLit[38]->Val)));
        rLit[38]->Val = rA1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLhash_69() {        /* 111 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLhash_73);
        {aRet = ((Ptr) GLhash_55); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_73() {        /* call_hash_72 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYhash; rA1 = GIa1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rLit[38]->Val)));
        rLit[38]->Val = rA1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLhash_64() {        /* #:hash-table:hash-sequence-list */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if ((long) rA1 >= (long) GIbcons)       goto l_101;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLhash_53); goto lRet;}
l_101:
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLhash_75);
        {aRet = ((Ptr) GLhash_53); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLhash_75() {        /* call_hash_74 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLhash_64); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLhash_65() {        /* #:hash-table:hash-sequence-vector */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        GIa4 = (rA1->Val + 1)->Val;
        (--rSp)->Val = GIa4;
        {aRet = ((Ptr) GLhash_76); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_76() {        /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (rSp->Val == (Ptr) 0)        goto l_102;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rSp->Val = rA4;
        GIa1 = ((rSp + 1)->Val->Val + 2 + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLhash_76);
        {aRet = ((Ptr) GLhash_53); goto lRet;}
l_102:
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_56() {        /* #:hash-table:hash-string */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4;
        rLit = GYhash; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 1)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[37]->Val;
        (--rSp)->Val = rA4;
        if ((rSp + 2)->Val != (Ptr) 0)  goto l_101;
        rA1 = (Ptr) 1;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if ((Fix) ((rSp + 2)->Val) > (Fix) ((rSp + 1)->Val))    goto l_103;
l_105:
        if ((rSp + 2)->Val == (Ptr) 0)  goto l_106;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rSp->Val)));
        rSp->Val = rA4;
        if ((Fix) (rA4) >= (Fix) 0)     goto l_108;
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 32767);
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) 1);
        rSp->Val = rA4;
l_108:
        rA3 = (rSp + 2)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) 1));
        (rSp + 2)->Val = rA3;
        rA3 = (Ptr) ((unsigned char) *(((char *) ((rSp + 3)->Val->Val + 2)) + (Fix) (rA3)));
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rA3)));
        rSp->Val = rA4;
        goto l_105;
l_106:
        rA1 = rSp->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA3 = (rSp + 1)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) / (Fix) 2));
        (--rSp)->Val = rA3;
        GIa2 = (rSp + 2)->Val;
        rA1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLhash_78);
        {aRet = (rLit[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_78() {        /* call_hash_77 */
   {    register Ptr aRet, rSp, rA1, rA3, rA4;
        rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) 1));
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        goto l_110;
l_109:
        (--rSp)->Val = rA4;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 4)->Val)));
        (rSp + 4)->Val = rA4;
        if ((Fix) (rA4) >= (Fix) 0)     goto l_112;
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 32767);
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) 1);
        (rSp + 4)->Val = rA4;
l_112:
        rA3 = (Ptr) ((unsigned char) *(((char *) ((rSp + 7)->Val->Val + 2)) + (Fix) ((rSp + 2)->Val)));
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rA3)));
        (rSp + 4)->Val = rA4;
        rA3 = (rSp + 2)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) ((rSp + 1)->Val)));
        (rSp + 2)->Val = rA3;
        rA4 = (rSp++)->Val;
l_110:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_109;}
        rA4 = (rSp + 5)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (rSp + 1)->Val = rA4;
        rA3 = (rSp + 2)->Val;
        goto l_114;
l_113:
        (--rSp)->Val = rA3;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 4)->Val)));
        (rSp + 4)->Val = rA4;
        if ((Fix) (rA4) >= (Fix) 0)     goto l_116;
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 32767);
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) 1);
        (rSp + 4)->Val = rA4;
l_116:
        rA3 = (Ptr) ((unsigned char) *(((char *) ((rSp + 7)->Val->Val + 2)) + (Fix) ((rSp + 2)->Val)));
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rA3)));
        (rSp + 4)->Val = rA4;
        rA3 = (rSp + 2)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) ((rSp + 1)->Val)));
        (rSp + 2)->Val = rA3;
        rA3 = (rSp++)->Val;
l_114:
        {register Fix aux;
                aux = (Fix) (rA3) - 1;
                rA3 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_113;}
        rA1 = (rSp + 3)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_55() {        /* #:hash-table:hash-float */
   {    register Ptr aRet, *rLit;
        rLit = GYhash;
        if (rLit[46] != rLit[46])       goto l_101;
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
l_101:
        (--GIsp)->Val = ((Ptr) GLhash_80);
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_80() {        /* call_hash_79 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLhash_81);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 1;
        {aRet = (GYhash[48] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_81() {        /* 103 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLhash_83);
        {aRet = (GYhash[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_83() {        /* call_hash_82 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLhash_84);
        GIa2 = (Ptr) 2;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLhash_86);
        {aRet = (GYhash[49] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_86() {        /* call_hash_85 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYhash[48] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_84() {        /* 104 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLhash_88);
        {aRet = (GYhash[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_88() {        /* call_hash_87 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (GIa1)));
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLhash_89);
        GIa2 = (Ptr) 2;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLhash_91);
        {aRet = (GYhash[49] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_91() {        /* call_hash_90 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYhash[48] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_89() {        /* 105 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLhash_93);
        {aRet = (GYhash[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_93() {        /* call_hash_92 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLhash_94);
        GIa2 = (Ptr) 2;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLhash_96);
        {aRet = (GYhash[49] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_96() {        /* call_hash_95 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYhash[48] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_94() {        /* 106 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLhash_98);
        {aRet = (GYhash[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_98() {        /* call_hash_97 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (GIa1)));
        rA3 = (rSp++)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (rA4)));
        GIa1 = rA3;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_99() {        /* #:hash-table:get-slot-index */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        GIa1 = rA2;
        (--rSp)->Val = ((Ptr) GLhash_101);
        {aRet = (GYhash[50] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_101() {       /* call_hash_100 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYhash; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLhash_102); goto lRet;}
        rA1 = ((rSp + 1)->Val->Val + 2 + (Fix) 0)->Val;
        if (rA1 != rLit[0])     {aRet = ((Ptr) GLhash_103); goto lRet;}
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLhash_105);
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLhash_105() {       /* call_hash_104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) % (Fix) (GIa4)));
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_103() {       /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYhash; rSp = GIsp;
        if (GIa1 != rLit[31])   {aRet = ((Ptr) GLhash_106); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLhash_108);
        {aRet = (rLit[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_108() {       /* call_hash_107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) % (Fix) (GIa4)));
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_106() {       /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 1)->Val;
        GIa2 = GYhash[34];
        GIa1 = (rSp + 2)->Val;
        rSp += (Fix) 3;
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_102() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 1)->Val;
        GIa2 = GYhash[52];
        GIa1 = (rSp + 2)->Val;
        rSp += (Fix) 3;
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_109() {       /* #:hash-table:get-slot */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLhash_111);
        {aRet = ((Ptr) GLhash_99); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_111() {       /* call_hash_110 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYhash; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        (--rSp)->Val = rA1;
        rA1 = ((rSp + 2)->Val->Val + 2 + (Fix) 0)->Val;
        if (rA1 != rLit[0])     goto l_102;
        rA2 = ((rSp + 2)->Val->Val + 2 + (Fix) 1)->Val;
        rA2 = (rA2->Val + 2 + (Fix) (rSp->Val))->Val;
        rA1 = (rSp + 1)->Val;
        rA1 = llrt_call_assq (rA1, rA2, GIbcons, rNil);
        if (rA1 != rNil)        {rSp += (Fix) 4; aRet = (rSp++)->Val; goto lRet;}
        rA1 = rSp->Val;
l_103:
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
l_102:
        if (rA1 != rLit[31])    {aRet = ((Ptr) GLhash_112); goto lRet;}
        rA2 = ((rSp + 2)->Val->Val + 2 + (Fix) 1)->Val;
        rA2 = (rA2->Val + 2 + (Fix) (rSp->Val))->Val;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLhash_114);
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLhash_114() {       /* call_hash_113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {rSp += (Fix) 4; aRet = (rSp++)->Val; goto lRet;}
        GIa1 = rSp->Val;
l_105:
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_112() {       /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 2)->Val;
        GIa2 = GYhash[34];
        GIa1 = (rSp + 3)->Val;
        rSp += (Fix) 4;
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_115() {       /* #:hash-table:set-new-slot */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYhash; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        rA3 = ((rSp + 4)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA3;
        rA2 = (rA3->Val + 2 + (Fix) ((rSp + 3)->Val))->Val;
        (--rSp)->Val = rA2;
        rA1 = ((rSp + 6)->Val->Val + 2 + (Fix) 2)->Val;
        if ((Fix) (rA1) < (Fix) (rLit[54]->Val))        goto l_102;
        rA3 = (rSp + 7)->Val;
        rA2 = rLit[55];
        rA1 = rLit[56];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        ((rSp + 6)->Val->Val + 2 + (Fix) 2)->Val = rA4;
        rA3 = rSp->Val;
        rA2 = (rSp + 5)->Val;
        rA1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLhash_117);
        {aRet = (rLit[57] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_117() {       /* call_hash_116 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        ((rSp + 1)->Val->Val + 2 + (Fix) ((rSp + 4)->Val))->Val = rA1;
        rA1 = rSp->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 4)->Val;
        if ((Fix) (rA1) <= (Fix) (rA4)) goto l_106;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) / (Fix) ((rSp + 2)->Val)));
        if ((Fix) (rA4) > (Fix) 2)      goto l_105;
l_106:
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) / (Fix) ((rSp + 2)->Val)));
        GIa3 = ((rSp + 6)->Val->Val + 2 + (Fix) 5)->Val;
        if ((Fix) (rA4) <= (Fix) (GIa3))        {aRet = ((Ptr) GLhash_118); goto lRet;}
l_105:
        if ((rSp + 2)->Val == GYhash[58]->Val)  {aRet = ((Ptr) GLhash_118); goto lRet;}
        rA1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLhash_118);
        {aRet = ((Ptr) GLhash_119); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_118() {       /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 3;
        GIa1 = (rSp + 2)->Val;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_120() {       /* #:hash-table:rem-slot */
   {    register Ptr aRet, *rLit, rSp, rA2, rA3, rA4, rNil;
        rLit = GYhash; rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        rA4 = (rA2->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA2->Val + 2 + (Fix) 0)->Val;
        if (rA4 != rLit[0])     goto l_101;
        rA4 = rLit[13];
        goto l_102;
l_101:
        rA4 = rNil;
l_102:
        (--rSp)->Val = rA4;
        rA4 = (rA2->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA4->Val + 2 + (Fix) (rA3))->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rNil;
        (--rSp)->Val = ((Ptr) GXpopj8);
        GIa1 = rLit[59];
        (--rSp)->Val = ((Ptr) GLhash_121);
        {aRet = (rLit[60] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_121() {       /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYhash; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        if ((rSp + 7)->Val == rNil)     goto l_108;
        rA2 = (rSp + 5)->Val;
        rA2 = rA2->Val;
        rA2 = rA2->Val;
        rA1 = (rSp + 9)->Val;
        rA1 = (rA1 == rA2) ? rLit[13] : rNil;
        GIa4 = rA1;
        {aRet = ((Ptr) GLhash_122); goto lRet;}
l_108:
        rA2 = (rSp + 5)->Val;
        rA2 = rA2->Val;
        rA2 = rA2->Val;
        rA1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLhash_124);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLhash_124() {       /* call_hash_123 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLhash_122); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_122() {       /* 109 */
   {    register Ptr aRet, rSp, rA3, rA4, rNil;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA4 == rNil)        {aRet = ((Ptr) GLhash_125); goto lRet;}
        if ((rSp + 4)->Val == rNil)     goto l_110;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 6)->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        rA3 = (rSp + 1)->Val;
        (rA3 + 1)->Val = rSp->Val;
        rSp += (Fix) 2;
        goto l_111;
l_110:
        rA4 = (rSp + 5)->Val;
        ((rSp + 6)->Val->Val + 2 + (Fix) ((rSp + 11)->Val))->Val = (rA4 + 1)->Val;
l_111:
        rA3 = ((rSp + 10)->Val->Val + 2 + (Fix) 2)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) 1));
        ((rSp + 10)->Val->Val + 2 + (Fix) 2)->Val = rA3;
        rA3 = ((rSp + 10)->Val->Val + 2 + (Fix) 2)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) / (Fix) ((rSp + 8)->Val)));
        GIa2 = ((rSp + 10)->Val->Val + 2 + (Fix) 7)->Val;
        if ((Fix) (rA3) >= (Fix) (GIa2))        {aRet = ((Ptr) GLhash_126); goto lRet;}
        if ((rSp + 8)->Val == GYhash[2]->Val)   {aRet = ((Ptr) GLhash_126); goto lRet;}
        GIa1 = (rSp + 10)->Val;
        (--rSp)->Val = ((Ptr) GLhash_126);
        {aRet = ((Ptr) GLhash_127); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_126() {       /* 113 */
   {    register Ptr aRet, *rLit;
        rLit = GYhash;
        GIa1 = rLit[13];
        GIa2 = rLit[59];
        {aRet = (rLit[61] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_125() {       /* 106 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYhash; rSp = GIsp; rNil = GInil;
        (rSp + 4)->Val = (rSp + 5)->Val;
        GIa4 = (rSp + 5)->Val;
        (rSp + 5)->Val = (GIa4 + 1)->Val;
        if ((rSp + 5)->Val != rNil)     {aRet = ((Ptr) GLhash_121); goto lRet;}
        GIa1 = rNil;
        GIa2 = rLit[59];
        {aRet = (rLit[61] + 2)->Val; goto lRet;}
l_105:
        GIa1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_119() {       /* #:hash-table:growing-rehash */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLhash_128);
        rA4 = (rA1->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA1->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (GYhash[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_128() {       /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLhash_130);
        {aRet = (GYhash[63] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_130() {       /* call_hash_129 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLhash_132);
        {aRet = ((Ptr) GLhash_40); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_132() {       /* call_hash_131 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLhash_134);
        {aRet = ((Ptr) GLhash_24); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_134() {       /* call_hash_133 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLhash_135); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_127() {       /* #:hash-table:shrinking-rehash */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLhash_136);
        rA4 = (rA1->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA1->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (GYhash[64] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_136() {       /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLhash_138);
        {aRet = (GYhash[63] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_138() {       /* call_hash_137 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLhash_140);
        {aRet = ((Ptr) GLhash_40); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_140() {       /* call_hash_139 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLhash_142);
        {aRet = ((Ptr) GLhash_24); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_142() {       /* call_hash_141 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLhash_135); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_135() {       /* #:hash-table:internal-rehash */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYhash; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if (rLit[65]->Val == GInil)     {aRet = ((Ptr) GLhash_143); goto lRet;}
        GIa2 = rA1;
        rA1 = rLit[66];
        (--rSp)->Val = ((Ptr) GLhash_143);
        {aRet = (rLit[67] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLhash_143() {       /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = (Ptr) 0;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        GIa3 = (rA4->Val + 1)->Val;
        (--rSp)->Val = GIa3;
        {aRet = ((Ptr) GLhash_144); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_144() {       /* 103 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((Fix) ((rSp + 2)->Val) >= (Fix) (rSp->Val)) {aRet = ((Ptr) GLhash_145); goto lRet;}
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        if ((long) rA4 < (long) GIbcons)        {aRet = ((Ptr) GLhash_146); goto lRet;}
        (--rSp)->Val = rA4;
        {aRet = ((Ptr) GLhash_147); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_147() {       /* 107 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLhash_148); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = rSp->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa3 = rSp->Val;
        GIa2 = (rSp + 1)->Val;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLhash_150);
        {aRet = (GYhash[56] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_150() {       /* call_hash_149 */
   {    register Ptr aRet;
        GIsp += (Fix) 6;
        {aRet = ((Ptr) GLhash_147); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_148() {       /* 108 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLhash_146); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_146() {       /* 106 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 2)->Val = rA4;
        {aRet = ((Ptr) GLhash_144); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLhash_145() {       /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYhash; rSp = GIsp; rA4 = GIa4;
        rSp += (Fix) 3;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
        (rSp->Val->Val + 2 + (Fix) 3)->Val = rA4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val;
        (rSp->Val->Val + 2 + (Fix) 1)->Val = rA4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val;
        (rSp->Val->Val + 2 + (Fix) 2)->Val = rA4;
        if (rLit[65]->Val == GInil)     {aRet = ((Ptr) GLhash_151); goto lRet;}
        GIa2 = rSp->Val;
        GIa1 = rLit[68];
        (--rSp)->Val = ((Ptr) GLhash_151);
        {aRet = (rLit[67] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_151() {       /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_40() {        /* #:hash-table:compute-good-size */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYhash; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if ((Fix) (rA1) > (Fix) (rLit[2]->Val)) goto l_101;
        rA1 = rLit[2]->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if ((Fix) (rA1) < (Fix) (rLit[58]->Val))        goto l_103;
        rA1 = rLit[58]->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        (--rSp)->Val = ((Ptr) GLhash_153);
        {aRet = (rLit[69] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLhash_153() {       /* call_hash_152 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYhash; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rSp->Val = rA4;
l_107:
        (--rSp)->Val = rLit[70];
        (--rSp)->Val = rNil;
l_109:
        if ((long) (rSp + 1)->Val < (long) GIbcons)     goto l_110;
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) % (Fix) (rSp->Val)));
        rA2 = (Ptr) 0;
        rA1 = rA4;
        rA1 = (rA1 == rA2) ? rLit[13] : rNil;
        rSp += (Fix) 1;
        rSp->Val = rA1;
        if (rA1 != rNil)        goto l_110;
        goto l_109;
l_110:
        rA4 = rSp->Val;
        rSp += (Fix) 2;
        if (rA4 == rNil)        goto l_108;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 2));
        rSp->Val = rA4;
        goto l_107;
l_108:
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_154() {       /* gethash */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYhash; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if ((Fix) (rA4) >= (Fix) 2)     goto l_101;
        rA1 = rLit[71];
        rA2 = (Ptr) 2;
        {aRet = (rLit[72] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 2));
        rA1 = rNil;
        goto l_nlist_hash_156;
l_nlist_hash_155:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_hash_156:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_hash_155;}
        if ((rA1 + 1)->Val == rNil)     goto l_102;
        rA3 = (Ptr) 2;
        rA2 = rLit[29];
        rA1 = rLit[71];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_102:
        (--rSp)->Val = rA1->Val;
        rA3 = rLit[71];
        rA2 = (rSp + 1)->Val;
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLhash_158);
        {aRet = ((Ptr) GLhash_109); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_158() {       /* call_hash_157 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rA1 < (long) GIbcons)        goto l_104;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        rA1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLhash_159() {       /* puthash */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa3 = GYhash[56];
        (--rSp)->Val = ((Ptr) GLhash_161);
        {aRet = ((Ptr) GLhash_109); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_161() {       /* call_hash_160 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rA1 < (long) GIbcons)        goto l_101;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (rA1 + 1)->Val = rSp->Val;
        rA1 = rSp->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GXpopj3);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = GYhash[56];
        GIa4 = (Ptr) 5;
        {aRet = ((Ptr) GLhash_115); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLhash_162() {       /* inchash */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYhash; rSp = GIsp;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = rLit[73];
        GIa2 = (Ptr) 4;
        {aRet = (rLit[72] + 2)->Val; goto lRet;}
l_101:
        GIa3 = rLit[73];
        GIa2 = (rSp + 2)->Val;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLhash_164);
        {aRet = ((Ptr) GLhash_109); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_164() {       /* call_hash_163 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLhash_165); goto lRet;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLhash_166);
        rA4 = (rSp + 2)->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (GYhash[74] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_166() {       /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = rSp->Val;
        (GIa4 + 1)->Val = GIa1;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_165() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj5);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GYhash[73];
        GIa4 = (Ptr) 5;
        {aRet = ((Ptr) GLhash_115); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_167() {       /* dechash */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYhash; rSp = GIsp;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = rLit[75];
        GIa2 = (Ptr) 4;
        {aRet = (rLit[72] + 2)->Val; goto lRet;}
l_101:
        GIa3 = rLit[75];
        GIa2 = (rSp + 2)->Val;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLhash_169);
        {aRet = ((Ptr) GLhash_109); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_169() {       /* call_hash_168 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLhash_170); goto lRet;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLhash_171);
        rA4 = (rSp + 2)->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (GYhash[76] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_171() {       /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = rSp->Val;
        (GIa4 + 1)->Val = GIa1;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_170() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj5);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GYhash[75];
        GIa4 = (Ptr) 5;
        {aRet = ((Ptr) GLhash_115); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_172() {       /* remhash */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa3 = GYhash[77];
        (--rSp)->Val = ((Ptr) GLhash_174);
        {aRet = ((Ptr) GLhash_99); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_174() {       /* call_hash_173 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = (rSp + 1)->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLhash_120); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_175() {       /* maphash */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        GIa1 = rA2;
        (--rSp)->Val = ((Ptr) GLhash_177);
        {aRet = (GYhash[50] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_177() {       /* call_hash_176 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLhash_178); goto lRet;}
        (--rSp)->Val = (Ptr) 0;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        GIa3 = (rA4->Val + 1)->Val;
        (--rSp)->Val = GIa3;
        {aRet = ((Ptr) GLhash_179); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_179() {       /* 103 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((Fix) ((rSp + 2)->Val) >= (Fix) (rSp->Val)) {aRet = ((Ptr) GLhash_180); goto lRet;}
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        if ((long) rA4 < (long) GIbcons)        {aRet = ((Ptr) GLhash_181); goto lRet;}
        (--rSp)->Val = rA4;
        {aRet = ((Ptr) GLhash_182); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_182() {       /* 107 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLhash_183); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = rSp->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLhash_184);
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 3;
        {aRet = (GYhash[78] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLhash_184() {       /* 109 */
   {    register Ptr aRet;
        GIsp += (Fix) 3;
        {aRet = ((Ptr) GLhash_182); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_183() {       /* 108 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLhash_181); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_181() {       /* 106 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 2)->Val = rA4;
        {aRet = ((Ptr) GLhash_179); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLhash_180() {       /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_178() {       /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYhash; rSp = GIsp;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[52];
        GIa1 = rLit[79];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_185() {       /* clrhash */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLhash_187);
        {aRet = (GYhash[50] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_187() {       /* call_hash_186 */
   {    register Ptr aRet, rSp, rA3;
        rSp = GIsp; rA3 = GIa3;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLhash_188); goto lRet;}
        GIa4 = (rSp->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = GIa4;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) 1));
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rA3;
        {aRet = ((Ptr) GLhash_189); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLhash_189() {       /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLhash_190);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYhash[80] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_190() {       /* 105 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        if (GIa1 == rNil)       {aRet = ((Ptr) GLhash_191); goto lRet;}
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val = rNil;
        (--rSp)->Val = ((Ptr) GLhash_192);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (GYhash[74] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_192() {       /* 106 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLhash_189); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_191() {       /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 2;
        ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val = (Ptr) 0;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_188() {       /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYhash; rSp = GIsp;
        GIa3 = rSp->Val;
        GIa2 = rLit[52];
        GIa1 = rLit[81];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_193() {       /* hash-table-count */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLhash_195);
        {aRet = (GYhash[50] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_195() {       /* call_hash_194 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYhash; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_101;
        rA1 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        GIa3 = rSp->Val;
        GIa2 = rLit[52];
        rA1 = rLit[82];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLhash_196() {       /* hash-table-values */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLhash_198);
        {aRet = (GYhash[50] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_198() {       /* call_hash_197 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYhash; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_101;
        rA1 = (rSp->Val->Val + 2 + (Fix) 1)->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        GIa3 = rSp->Val;
        GIa2 = rLit[52];
        rA1 = rLit[83];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLhash_199() {       /* #:hash-table:print-stat */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLhash_200);
        GIa4 = (Ptr) 0;
        {aRet = (GYhash[84] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_200() {       /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYhash; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLhash_201);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[85];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[84] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_201() {       /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYhash; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLhash_202);
        (--rSp)->Val = rLit[86];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[84] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_202() {       /* 103 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        GIa4 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
        GIa3 = ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val;
        rA2 = ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa4;
        rA1 = (rA2->Val + 1)->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rA1;
        {aRet = ((Ptr) GLhash_203); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLhash_203() {       /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLhash_204);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYhash[80] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_204() {       /* 106 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLhash_205); goto lRet;}
        rA1 = ((rSp + 4)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        GIa2 = (rSp + 5)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 5)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLhash_206);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (GYhash[74] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLhash_206() {       /* 107 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLhash_203); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLhash_205() {       /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 2;
        (--rSp)->Val = ((Ptr) GLhash_207);
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLhash_209);
        {aRet = (GYhash[87] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_209() {       /* call_hash_208 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 4)->Val = rA1;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 1;
        {aRet = (GYhash[84] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_207() {       /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYhash; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLhash_210);
        GIa1 = rLit[88];
        (--rSp)->Val = ((Ptr) GLhash_212);
        {aRet = (rLit[89] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_212() {       /* call_hash_211 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYhash[90] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_210() {       /* 109 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYhash; rSp = GIsp; rA1 = GIa1;
        if ((rSp + 1)->Val == rA1)      {aRet = ((Ptr) GLhash_213); goto lRet;}
        (--rSp)->Val = ((Ptr) GLhash_213);
        (--rSp)->Val = rLit[91];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[92];
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 4;
        {aRet = (rLit[84] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_213() {       /* 111 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYhash; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj6);
        (--rSp)->Val = rLit[93];
        (--rSp)->Val = ((Ptr) GLhash_214);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[64] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLhash_214() {       /* 114 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYhash[84] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDhash_215() {       /* trace #:hash-table:vect */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYhash,10,94,95);
  lRet:  return (aRet);}}

static Ptr GDhash_216() {       /* trace hash-table-p */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYhash,50,94,96);
  lRet:  return (aRet);}}

static Ptr GDhash_217() {       /* trace #:hash-table:eval */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYhash,97,94,96);
  lRet:  return (aRet);}}

static Ptr GDhash_218() {       /* trace #:hash-table:prin */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYhash,98,94,96);
  lRet:  return (aRet);}}

static Ptr GDhash_219() {       /* trace make-hash-table-eq */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYhash,28,94,95);
  lRet:  return (aRet);}}

static Ptr GDhash_220() {       /* trace make-hash-table-equal */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYhash,32,94,95);
  lRet:  return (aRet);}}

static Ptr GDhash_221() {       /* trace make-hash-table */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYhash,33,94,95);
  lRet:  return (aRet);}}

static Ptr GDhash_222() {       /* trace sxhash */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYhash,51,94,96);
  lRet:  return (aRet);}}

static Ptr GDhash_223() {       /* trace gethash */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYhash,71,94,95);
  lRet:  return (aRet);}}

static Ptr GDhash_224() {       /* trace puthash */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYhash,56,94,99);
  lRet:  return (aRet);}}

static Ptr GDhash_225() {       /* trace inchash */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYhash,73,94,95);
  lRet:  return (aRet);}}

static Ptr GDhash_226() {       /* trace dechash */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYhash,75,94,95);
  lRet:  return (aRet);}}

static Ptr GDhash_227() {       /* trace remhash */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYhash,77,94,100);
  lRet:  return (aRet);}}

static Ptr GDhash_228() {       /* trace maphash */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYhash,79,94,100);
  lRet:  return (aRet);}}

static Ptr GDhash_229() {       /* trace clrhash */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYhash,81,94,96);
  lRet:  return (aRet);}}

static Ptr GDhash_230() {       /* trace hash-table-count */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYhash,82,94,96);
  lRet:  return (aRet);}}

static Ptr GDhash_231() {       /* trace hash-table-values */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYhash,83,94,96);
  lRet:  return (aRet);}}

static Ptr GDhash_232() {       /* trace #:hash-table:print-stat */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYhash,67,94,100);
  lRet:  return (aRet);}}

