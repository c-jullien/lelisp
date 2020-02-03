/* GELL 15.26: source file for the module: "virwindow" */
/*             translation done:           "Tue Aug  24 93 10:49:10 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "virwindow.h" 

static Ptr GLvirwindow_1() {    /* create-window */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rBfloat;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBfloat = GIbfloat;
        if (GIa4 == (Ptr) 8)    goto l_101;
        rA1 = rLit[0];
        rA2 = (Ptr) 8;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        if (((rSp + 7)->Val >= GIbsymb) && ((rSp + 7)->Val < GIbcons))  goto l_103;
        rA3 = (rSp + 7)->Val;
        rA2 = rLit[2];
        rA1 = rLit[0];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 6)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 6)->Val;
        rA2 = rLit[3];
        rA1 = rLit[0];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 5)->Val < rBfloat)   goto l_107;
        rA3 = (rSp + 5)->Val;
        rA2 = rLit[3];
        rA1 = rLit[0];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_107:
        if ((rSp + 4)->Val < rBfloat)   goto l_109;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[3];
        rA1 = rLit[0];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_109:
        if ((rSp + 3)->Val < rBfloat)   goto l_111;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[3];
        rA1 = rLit[0];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_111:
        if ((rSp + 1)->Val < rBfloat)   goto l_113;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[3];
        rA1 = rLit[0];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_113:
        if (rSp->Val < rBfloat) goto l_115;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[0];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_115:
        rA1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_3);
        {aRet = ((Ptr) GLvirwindow_4); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLvirwindow_3() {    /* call_virwindow_2 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (rSp + 7)->Val = GIa1;
        GIa2 = rLit[4];
        (--rSp)->Val = ((Ptr) GLvirwindow_6);
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_6() {    /* call_virwindow_5 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_117;
        GIa3 = (rSp + 8)->Val;
        GIa2 = rLit[6];
        rA1 = rLit[0];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_117:
        (--rSp)->Val = ((Ptr) GXpopj9);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
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
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 8;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirwindow_7() {    /* create-subwindow */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rBfloat;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBfloat = GIbfloat;
        if (GIa4 == (Ptr) 9)    goto l_101;
        rA1 = rLit[8];
        rA2 = (Ptr) 9;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        if (((rSp + 8)->Val >= GIbsymb) && ((rSp + 8)->Val < GIbcons))  goto l_103;
        rA3 = (rSp + 8)->Val;
        rA2 = rLit[2];
        rA1 = rLit[8];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 7)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 7)->Val;
        rA2 = rLit[3];
        rA1 = rLit[8];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 6)->Val < rBfloat)   goto l_107;
        rA3 = (rSp + 6)->Val;
        rA2 = rLit[3];
        rA1 = rLit[8];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_107:
        if ((rSp + 5)->Val < rBfloat)   goto l_109;
        rA3 = (rSp + 5)->Val;
        rA2 = rLit[3];
        rA1 = rLit[8];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_109:
        if ((rSp + 4)->Val < rBfloat)   goto l_111;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[3];
        rA1 = rLit[8];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_111:
        if (rSp->Val == GInil)  {aRet = ((Ptr) GLvirwindow_8); goto lRet;}
        rA2 = rLit[9];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_10);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLvirwindow_10() {   /* call_virwindow_9 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYvirwindow; rA1 = GIa1;
        if (rA1 != GInil)       {aRet = ((Ptr) GLvirwindow_8); goto lRet;}
        GIa3 = GIsp->Val;
        GIa2 = rLit[11];
        rA1 = rLit[8];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirwindow_8); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirwindow_8() {    /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_12);
        {aRet = ((Ptr) GLvirwindow_4); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_12() {   /* call_virwindow_11 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (rSp + 8)->Val = GIa1;
        GIa2 = rLit[4];
        (--rSp)->Val = ((Ptr) GLvirwindow_14);
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_14() {   /* call_virwindow_13 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_117;
        GIa3 = (rSp + 9)->Val;
        GIa2 = rLit[6];
        rA1 = rLit[0];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_117:
        (--rSp)->Val = ((Ptr) GLvirwindow_15);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
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
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 9;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirwindow_15() {   /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_16() {   /* make-window */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[9];
        (--rSp)->Val = ((Ptr) GLvirwindow_18);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_18() {   /* call_virwindow_17 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        rA3 = rSp->Val;
        rA2 = rLit[11];
        rA1 = rLit[12];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if (rLit[13]->Val != rNil)      goto l_104;
        rA3 = rLit[13]->Val;
        rA2 = rLit[14];
        rA1 = rLit[12];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA4 = (rSp->Val->Val + 2 + (Fix) 9)->Val;
        if (rA4 == rNil)        goto l_106;
        rA3 = (rA4->Val + 2 + (Fix) 12)->Val;
        (rSp->Val->Val + 2 + (Fix) 12)->Val = rA3;
        (--rSp)->Val = rA4;
        rA2 = (rA4->Val + 2 + (Fix) 13)->Val;
        rA1 = (rSp + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 13)->Val = rA1;
l_106:
        rA4 = (rSp->Val->Val + 2 + (Fix) 12)->Val;
        if (rA4 != rNil)        goto l_108;
        (rSp->Val->Val + 2 + (Fix) 12)->Val = rLit[13]->Val;
l_108:
        rA4 = (rSp->Val->Val + 2 + (Fix) 11)->Val;
        if (rA4 != rNil)        goto l_110;
        (rSp->Val->Val + 2 + (Fix) 11)->Val = (Ptr) 0;
l_110:
        (rSp->Val->Val + 2 + (Fix) 13)->Val = rNil;
        (--rSp)->Val = ((Ptr) GLvirwindow_19);
        rA4 = (Ptr) 0;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_19() {   /* 111 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirwindow_20);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirwindow_21);
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_21() {   /* 114 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa4 = ((rSp + 4)->Val->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = GIa4;
        rA1 = ((rSp + 5)->Val->Val + 2 + (Fix) 12)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 14)->Val;
        GIa2 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_23);
        {aRet = (GYvirwindow[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirwindow_23() {   /* call_virwindow_22 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 14)->Val = rA1;
        rLit[17]->Val = rA1;
        (--rSp)->Val = ((Ptr) GLvirwindow_24);
        (--rSp)->Val = rLit[12];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_24() {   /* 115 */
   {    register Ptr aRet, rSp, rA3, rA4, rNil;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 7)->Val;
        if (rA4 == rNil)        goto l_117;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 7)->Val;
        rA4 = (rA4->Val + 2 + (Fix) 11)->Val;
        if (rA4 != rNil)        goto l_117;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 7)->Val;
        rA3 = ((rSp + 4)->Val->Val + 2 + (Fix) 12)->Val;
        (rA4->Val + 2 + (Fix) 11)->Val = rA3;
l_117:
        rA4 = (rSp + 4)->Val;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = rA4;
        rA3 = ((Ptr) GXpopj2);
        {aRet = ((Ptr) GLvirwindow_20); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_20() {   /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLvirwindow_25);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_25() {   /* 120 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_26() {   /* current-window */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[13]->Val;
        (--rSp)->Val = rA4;
        rA1 = (rSp + 2)->Val;
        if (rA1 != (Ptr) 0)     goto l_102;
        if ((rSp + 1)->Val == rNil)     goto l_103;
        rA1 = ((rSp + 1)->Val->Val + 2 + (Fix) 8)->Val;
        {aRet = ((Ptr) GLvirwindow_27); goto lRet;}
l_103:
        rA1 = rNil;
        {aRet = ((Ptr) GLvirwindow_27); goto lRet;}
l_102:
        if (rA1 != (Ptr) 1)     {aRet = ((Ptr) GLvirwindow_28); goto lRet;}
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirwindow_29); goto lRet;}
        GIa2 = rLit[9];
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLvirwindow_31);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_31() {   /* call_virwindow_30 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_109;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        rA1 = rLit[19];
        GIa1 = rA1; rA1 = llrt_call_error ();
l_109:
        GIa4 = (rSp->Val->Val + 2 + (Fix) 12)->Val;
        (rSp + 1)->Val = GIa4;
        {aRet = ((Ptr) GLvirwindow_29); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirwindow_29() {   /* 107 */
   {    register Ptr aRet, rSp, rA4, rNil;
        rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if ((rSp + 1)->Val != rNil)     goto l_110;
        GIa1 = rNil;
        {aRet = ((Ptr) GLvirwindow_27); goto lRet;}
l_110:
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 8)->Val;
        if (rSp->Val != rA4)    {aRet = ((Ptr) GLvirwindow_32); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirwindow_33);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_33() {   /* 114 */
   {    register Ptr aRet;
        GIa1 = GIsp->Val;
        {aRet = ((Ptr) GLvirwindow_27); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirwindow_32() {   /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirwindow_34);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_34() {   /* 115 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 8)->Val;
        if (rA4 == GInil)       {aRet = ((Ptr) GLvirwindow_35); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirwindow_35);
        (--rSp)->Val = rLit[20];
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_35() {   /* 117 */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        ((rSp + 1)->Val->Val + 2 + (Fix) 8)->Val = rSp->Val;
        rLit[21]->Val = rSp->Val;
        if (rSp->Val == rNil)   goto l_119;
        rA4 = (rSp->Val->Val + 2 + (Fix) 7)->Val;
        goto l_120;
l_119:
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 11)->Val;
l_120:
        ((rSp + 1)->Val->Val + 2 + (Fix) 9)->Val = rA4;
        rLit[22]->Val = rA4;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 8)->Val;
        if (rA3 == rNil)        {aRet = ((Ptr) GLvirwindow_36); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirwindow_36);
        (--rSp)->Val = rLit[19];
        rA3 = ((rSp + 3)->Val->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 2;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_36() {   /* 122 */
   {    register Ptr aRet;
        GIa1 = GIsp->Val;
        {aRet = ((Ptr) GLvirwindow_27); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirwindow_28() {   /* 105 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYvirwindow; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[23];
        rA1 = rLit[19];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirwindow_27); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirwindow_27() {   /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 3;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_37() {   /* modify-window */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        if (GIa4 == (Ptr) 8)    goto l_101;
        GIa1 = rLit[24];
        GIa2 = (Ptr) 8;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        GIa2 = rLit[9];
        GIa1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_39);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_39() {   /* call_virwindow_38 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_103;
        rA3 = (rSp + 7)->Val;
        rA2 = rLit[11];
        rA1 = rLit[24];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        if (rA4 != rNil)        goto l_105;
        rA3 = rA4;
        rA2 = rLit[14];
        rA1 = rLit[24];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        rA4 = (rSp->Val->Val + 2 + (Fix) 10)->Val;
        if (rA4 == (rSp + 8)->Val)      {aRet = ((Ptr) GLvirwindow_40); goto lRet;}
        if ((rSp + 7)->Val != rNil)     goto l_108;
        if ((rSp + 6)->Val != rNil)     goto l_108;
        if ((rSp + 5)->Val != rNil)     goto l_108;
        if ((rSp + 4)->Val != rNil)     goto l_108;
        if ((rSp + 3)->Val != rNil)     goto l_108;
        if ((rSp + 2)->Val != rNil)     goto l_108;
        if ((rSp + 1)->Val == rNil)     {aRet = ((Ptr) GLvirwindow_40); goto lRet;}
l_108:
        if ((rSp + 5)->Val != rNil)     goto l_111;
        if ((rSp + 4)->Val == rNil)     goto l_110;
l_111:
        rA4 = ((rSp + 8)->Val->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA4->Val + 2 + (Fix) 10)->Val;
        (rA4->Val + 2 + (Fix) 6)->Val = (Ptr) 0;
        (rA4->Val + 2 + (Fix) 7)->Val = (Ptr) 0;
        rA2 = (rSp + 5)->Val;
        if (rA2 != rNil)        goto l_112;
        rA2 = ((rSp + 8)->Val->Val + 2 + (Fix) 2)->Val;
l_112:
        (rA4->Val + 2 + (Fix) 8)->Val = rA2;
        rA2 = (rSp + 4)->Val;
        if (rA2 != rNil)        goto l_113;
        rA2 = ((rSp + 8)->Val->Val + 2 + (Fix) 3)->Val;
l_113:
        (rA4->Val + 2 + (Fix) 9)->Val = rA2;
        if (rA3 == rNil)        goto l_110;
        rA2 = (rA4->Val + 2 + (Fix) 8)->Val;
        (rA3->Val + 2 + (Fix) 0)->Val = rA2;
        rA2 = (rA4->Val + 2 + (Fix) 9)->Val;
        (rA3->Val + 2 + (Fix) 1)->Val = rA2;
l_110:
        (--rSp)->Val = ((Ptr) GLvirwindow_41);
        rA4 = (Ptr) 0;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_41() {   /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirwindow_42);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirwindow_43);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_43() {   /* 119 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirwindow_44);
        (--rSp)->Val = rLit[24];
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
        GIa4 = (Ptr) 9;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_44() {   /* 120 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLvirwindow_45);
        {aRet = ((Ptr) GLvirwindow_42); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_42() {   /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLvirwindow_46);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_46() {   /* 121 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_45() {   /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = (rSp + 8)->Val;
        rSp += (Fix) 9;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_40() {   /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 9;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_47() {   /* update-window */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        if (GIa4 == (Ptr) 5)    goto l_101;
        GIa1 = rLit[25];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        GIa2 = rLit[9];
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_49);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_49() {   /* call_virwindow_48 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_103;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[11];
        rA1 = rLit[25];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        if (rA4 != rNil)        goto l_105;
        rA3 = rA4;
        rA2 = rLit[14];
        rA1 = rLit[25];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        rA4 = (rSp->Val->Val + 2 + (Fix) 10)->Val;
        if (rA4 == (rSp + 5)->Val)      {aRet = ((Ptr) GLvirwindow_50); goto lRet;}
        if ((rSp + 4)->Val != rNil)     goto l_108;
        if ((rSp + 3)->Val != rNil)     goto l_108;
        if ((rSp + 2)->Val != rNil)     goto l_108;
        if ((rSp + 1)->Val == rNil)     {aRet = ((Ptr) GLvirwindow_50); goto lRet;}
l_108:
        if ((rSp + 2)->Val != rNil)     goto l_111;
        if ((rSp + 1)->Val == rNil)     goto l_110;
l_111:
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA4->Val + 2 + (Fix) 10)->Val;
        (rA4->Val + 2 + (Fix) 6)->Val = (Ptr) 0;
        (rA4->Val + 2 + (Fix) 7)->Val = (Ptr) 0;
        rA2 = (rSp + 2)->Val;
        if (rA2 != rNil)        goto l_112;
        rA2 = ((rSp + 5)->Val->Val + 2 + (Fix) 2)->Val;
l_112:
        (rA4->Val + 2 + (Fix) 8)->Val = rA2;
        rA2 = (rSp + 1)->Val;
        if (rA2 != rNil)        goto l_113;
        rA2 = ((rSp + 5)->Val->Val + 2 + (Fix) 3)->Val;
l_113:
        (rA4->Val + 2 + (Fix) 9)->Val = rA2;
        if (rA3 == rNil)        goto l_110;
        rA2 = (rA4->Val + 2 + (Fix) 8)->Val;
        (rA3->Val + 2 + (Fix) 0)->Val = rA2;
        rA2 = (rA4->Val + 2 + (Fix) 9)->Val;
        (rA3->Val + 2 + (Fix) 1)->Val = rA2;
l_110:
        (--rSp)->Val = ((Ptr) GLvirwindow_51);
        rA4 = (Ptr) 0;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_51() {   /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirwindow_52);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirwindow_53);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_53() {   /* 119 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirwindow_54);
        (--rSp)->Val = rLit[25];
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
        GIa4 = (Ptr) 6;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_54() {   /* 120 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLvirwindow_55);
        {aRet = ((Ptr) GLvirwindow_52); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_52() {   /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLvirwindow_56);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_56() {   /* 121 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_55() {   /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = (rSp + 5)->Val;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_50() {   /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_57() {   /* kill-window */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[9];
        (--rSp)->Val = ((Ptr) GLvirwindow_59);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_59() {   /* call_virwindow_58 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        rA1 = rLit[26];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = (rSp->Val->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        if (rA4 != rNil)        goto l_104;
        GIa3 = rA4;
        GIa2 = rLit[14];
        rA1 = rLit[26];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA4 = (rSp->Val->Val + 2 + (Fix) 10)->Val;
        if (rA4 == (rSp + 1)->Val)      {aRet = ((Ptr) GLvirwindow_60); goto lRet;}
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 13)->Val;
        (--rSp)->Val = rA4;
        {aRet = ((Ptr) GLvirwindow_61); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_61() {   /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   goto l_108;
        rA1 = rSp->Val;
        rSp->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_61);
        {aRet = (rLit[26] + 2)->Val; goto lRet;}
l_108:
        rSp += (Fix) 1;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 9)->Val;
        if (rA4 == GInil)       {aRet = ((Ptr) GLvirwindow_62); goto lRet;}
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = rA4;
        rA2 = ((rSp + 2)->Val->Val + 2 + (Fix) 9)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 13)->Val;
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_64);
        {aRet = (rLit[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_64() {   /* call_virwindow_63 */
   {    register Ptr aRet;
        GIa4 = (GIsp++)->Val;
        (GIa4->Val + 2 + (Fix) 13)->Val = GIa1;
        {aRet = ((Ptr) GLvirwindow_62); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirwindow_62() {   /* 110 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirwindow_65);
        GIa4 = (Ptr) 0;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirwindow_65() {   /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirwindow_66);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirwindow_67);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_67() {   /* 114 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 8)->Val;
        if ((rSp + 5)->Val != rA4)      {aRet = ((Ptr) GLvirwindow_68); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirwindow_68);
        (--rSp)->Val = GInil;
        rA4 = (Ptr) 1;
        {aRet = (GYvirwindow[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_68() {   /* 116 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 7)->Val;
        if ((rSp + 5)->Val != rA4)      {aRet = ((Ptr) GLvirwindow_69); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirwindow_69);
        (--rSp)->Val = GInil;
        rA4 = (Ptr) 1;
        {aRet = (GYvirwindow[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_69() {   /* 119 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = ((rSp + 4)->Val->Val + 2 + (Fix) 14)->Val;
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_71);
        {aRet = (GYvirwindow[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_71() {   /* call_virwindow_70 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1;
        ((rSp + 4)->Val->Val + 2 + (Fix) 14)->Val = rA1;
        rLit[17]->Val = rA1;
        (--rSp)->Val = ((Ptr) GLvirwindow_72);
        (--rSp)->Val = rLit[26];
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_72() {   /* 121 */
   {    register Ptr aRet, rSp, rA1, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        ((rSp + 5)->Val->Val + 2 + (Fix) 12)->Val = rNil;
        ((rSp + 5)->Val->Val + 2 + (Fix) 8)->Val = rNil;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 7)->Val;
        if (rA4 == rNil)        goto l_122;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 7)->Val;
        (rA4->Val + 2 + (Fix) 11)->Val = rNil;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 7)->Val;
        (rA4->Val + 2 + (Fix) 12)->Val = rNil;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 7)->Val;
        (rA4->Val + 2 + (Fix) 10)->Val = rNil;
        rA1 = rNil;
        goto l_123;
l_122:
        rA1 = rNil;
l_123:
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = rA1;
        GIa3 = ((Ptr) GXpopj3);
        {aRet = ((Ptr) GLvirwindow_66); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_66() {   /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLvirwindow_73);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_73() {   /* 124 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_60() {   /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_74() {   /* pop-window */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[9];
        (--rSp)->Val = ((Ptr) GLvirwindow_76);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_76() {   /* call_virwindow_75 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        rA1 = rLit[29];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = (rSp->Val->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA4;
        if (rA4 != rNil)        goto l_104;
        GIa3 = rA4;
        GIa2 = rLit[14];
        rA1 = rLit[29];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA4 = (rSp->Val->Val + 2 + (Fix) 10)->Val;
        if (rA4 == (rSp + 2)->Val)      {aRet = ((Ptr) GLvirwindow_77); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirwindow_78);
        rA4 = (Ptr) 0;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_78() {   /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirwindow_79);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirwindow_80);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_80() {   /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = ((rSp + 4)->Val->Val + 2 + (Fix) 14)->Val;
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_82);
        {aRet = (GYvirwindow[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_82() {   /* call_virwindow_81 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_84);
        {aRet = (GYvirwindow[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_84() {   /* call_virwindow_83 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        ((rSp + 4)->Val->Val + 2 + (Fix) 14)->Val = rA1;
        rLit[17]->Val = rA1;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 9)->Val;
        if (rA4 == GInil)       {aRet = ((Ptr) GLvirwindow_85); goto lRet;}
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 9)->Val;
        (rSp + 5)->Val = rA4;
        (--rSp)->Val = rA4;
        GIa2 = (rA4->Val + 2 + (Fix) 13)->Val;
        rA1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_87);
        {aRet = (rLit[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_87() {   /* call_virwindow_86 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rA1;
        rA1 = (rSp + 7)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 13)->Val = rA1;
        {aRet = ((Ptr) GLvirwindow_85); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirwindow_85() {   /* 112 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirwindow_88);
        (--rSp)->Val = rLit[29];
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_88() {   /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj4);
        {aRet = ((Ptr) GLvirwindow_79); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_79() {   /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLvirwindow_89);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_89() {   /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_77() {   /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_90() {   /* move-behind-window */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[9];
        (--rSp)->Val = ((Ptr) GLvirwindow_92);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_92() {   /* call_virwindow_91 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        GIa2 = rLit[9];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_94);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirwindow_94() {   /* call_virwindow_93 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        if (rA1 != GInil)       goto l_104;
        rA3 = (rSp + 1)->Val;
        GIa2 = rLit[11];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA4 = (rSp->Val->Val + 2 + (Fix) 12)->Val;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 12)->Val;
        if (rA4 == rA3) {aRet = ((Ptr) GLvirwindow_95); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirwindow_96);
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 2;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_96() {   /* 107 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYvirwindow; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[32];
        rA1 = rLit[30];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirwindow_95); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirwindow_95() {   /* 106 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA4 = GIa4;
        if (rSp->Val == (rSp + 1)->Val) {aRet = ((Ptr) GLvirwindow_97); goto lRet;}
        rA4 = (rLit[13]->Val->Val + 2 + (Fix) 10)->Val;
        if (rSp->Val == rA4)    {aRet = ((Ptr) GLvirwindow_97); goto lRet;}
        rA4 = (rLit[13]->Val->Val + 2 + (Fix) 10)->Val;
        if ((rSp + 1)->Val == rA4)      {aRet = ((Ptr) GLvirwindow_97); goto lRet;}
        (--rSp)->Val = GInil;
        (--rSp)->Val = ((Ptr) GLvirwindow_98);
        rA4 = (Ptr) 0;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_98() {   /* 110 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirwindow_99);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirwindow_100);
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_100() {  /* 113 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa4 = ((rSp + 5)->Val->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = GIa4;
        rA1 = ((rSp + 6)->Val->Val + 2 + (Fix) 12)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 14)->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        GIa2 = rA1;
        rA1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_102);
        {aRet = (GYvirwindow[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirwindow_102() {  /* call_virwindow_101 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil, rBcons;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 14)->Val = rA1;
        rA2 = ((rSp + 6)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 14)->Val;
        rA1 = (rSp + 6)->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        (rSp + 4)->Val = rA1;
        (--rSp)->Val = rA1;
        rA2 = (rA1 + 1)->Val;
        rA1 = (rSp + 6)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rA4 = (rSp++)->Val;
        (rA4 + 1)->Val = rA1;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        rA1 = ((rSp + 7)->Val->Val + 2 + (Fix) 12)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 14)->Val;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 14)->Val = rA1;
        rLit[17]->Val = rA1;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 9)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirwindow_103); goto lRet;}
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 9)->Val;
        GIa3 = ((rSp + 6)->Val->Val + 2 + (Fix) 9)->Val;
        if (rA4 != GIa3)        {aRet = ((Ptr) GLvirwindow_103); goto lRet;}
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA4;
        rA1 = (rA4->Val + 2 + (Fix) 13)->Val;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        rA2 = rA1;
        rA1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_105);
        {aRet = (rLit[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_105() {  /* call_virwindow_104 */
   {    register Ptr aRet, rSp, rA1, rA2, rA4, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rBcons = GIbcons;
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 13)->Val = rA1;
        rA2 = (rSp->Val->Val + 2 + (Fix) 13)->Val;
        rA1 = (rSp + 6)->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, GInil);
        (rSp + 5)->Val = rA1;
        (--rSp)->Val = rA1;
        rA2 = (rA1 + 1)->Val;
        rA1 = (rSp + 8)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rA4 = (rSp++)->Val;
        (rA4 + 1)->Val = rA1;
        rA1 = (rSp->Val->Val + 2 + (Fix) 13)->Val;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        (rSp->Val->Val + 2 + (Fix) 13)->Val = rA1;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLvirwindow_103); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_103() {  /* 115 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirwindow_106);
        (--rSp)->Val = rLit[30];
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_106() {  /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj4);
        {aRet = ((Ptr) GLvirwindow_99); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_99() {   /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLvirwindow_107);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_107() {  /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_97() {   /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_108() {  /* current-keyboard-focus-window */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if ((Ptr) 0 != rSp->Val)        goto l_101;
        GIa1 = (rLit[13]->Val->Val + 2 + (Fix) 7)->Val;
        {rA4 = (rSp++)->Val; rSp += (Fix) rA4; aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        if (rA4 == GInil)       {aRet = ((Ptr) GLvirwindow_109); goto lRet;}
        GIa2 = rLit[9];
        GIa1 = rA4;
        (--rSp)->Val = ((Ptr) GLvirwindow_111);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_111() {  /* call_virwindow_110 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYvirwindow; rA1 = GIa1;
        if (rA1 != GInil)       {aRet = ((Ptr) GLvirwindow_109); goto lRet;}
        GIa3 = GIsp->Val;
        GIa2 = rLit[11];
        rA1 = rLit[28];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirwindow_109); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirwindow_109() {  /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (rSp->Val == rNil)   goto l_107;
        rA4 = (rSp->Val->Val + 2 + (Fix) 12)->Val;
        goto l_108;
l_107:
        rA4 = rLit[13]->Val;
l_108:
        (--rSp)->Val = rA4;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirwindow_112); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirwindow_113);
        rA4 = (Ptr) 0;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_113() {  /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirwindow_114);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirwindow_115);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_115() {  /* 114 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 7)->Val;
        if (rA4 == GInil)       {aRet = ((Ptr) GLvirwindow_116); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirwindow_116);
        (--rSp)->Val = rLit[33];
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 7)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_116() {  /* 116 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        ((rSp + 4)->Val->Val + 2 + (Fix) 7)->Val = (rSp + 5)->Val;
        rLit[34]->Val = (rSp + 5)->Val;
        if ((rSp + 5)->Val == GInil)    {aRet = ((Ptr) GLvirwindow_117); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirwindow_117);
        (--rSp)->Val = rLit[28];
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_117() {  /* 119 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp + 5)->Val;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa4;
        GIa3 = ((Ptr) GLvirwindow_118);
        {aRet = ((Ptr) GLvirwindow_114); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_114() {  /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLvirwindow_119);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_119() {  /* 121 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_118() {  /* 113 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLvirwindow_120); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirwindow_112() {  /* 109 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = ((Ptr) GLvirwindow_120); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirwindow_120() {  /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 2;
l_102:
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_121() {  /* find-window */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rBfloat;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBfloat = GIbfloat;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[3];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val < rBfloat)   goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[3];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        if (rLit[13]->Val != GInil)     goto l_106;
        rA3 = rLit[13]->Val;
        rA2 = rLit[14];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[35];
        (--rSp)->Val = rLit[13]->Val;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLvirwindow_122() {  /* map-window */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        if (GIa4 == (Ptr) 5)    goto l_101;
        GIa1 = rLit[36];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        GIa2 = rLit[9];
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_124);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_124() {  /* call_virwindow_123 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_103;
        GIa3 = (rSp + 4)->Val;
        GIa2 = rLit[11];
        rA1 = rLit[36];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 12)->Val;
        if (rA4 != rNil)        goto l_105;
        GIa3 = ((rSp + 4)->Val->Val + 2 + (Fix) 12)->Val;
        GIa2 = rLit[14];
        rA1 = rLit[36];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        (--rSp)->Val = ((Ptr) GLvirwindow_125);
        (--rSp)->Val = rLit[36];
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
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 6;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_125() {  /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_126() {  /* windowp */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[9];
        (--rSp)->Val = ((Ptr) GLvirwindow_128);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_128() {  /* call_virwindow_127 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        rA1 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        if (rA1 == rNil)        {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        rA1 = (rSp->Val->Val + 2 + (Fix) 12)->Val;
        if (rA1 == rNil)        {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        rA1 = rSp->Val;
l_101:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirwindow_129() {  /* subwindowp */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirwindow_131);
        {aRet = (GYvirwindow[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_131() {  /* call_virwindow_130 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_133);
        {aRet = (GYvirwindow[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_133() {  /* call_virwindow_132 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
        GIa2 = (rSp + 1)->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLvirwindow_134); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_134() {  /* subwindowp1 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
l_GLvirwindow_134:
        if (rA1 != rNil)        goto l_101;
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if (rA1 != GIa2)        goto l_103;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA1 = (rA1->Val + 2 + (Fix) 9)->Val;
        goto l_GLvirwindow_134;
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirwindow_135() {  /* check-window-position */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[9];
        (--rSp)->Val = ((Ptr) GLvirwindow_137);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_137() {  /* call_virwindow_136 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = (rSp->Val->Val + 2 + (Fix) 12)->Val;
        if (rA4 != rNil)        goto l_104;
        GIa3 = (rSp->Val->Val + 2 + (Fix) 12)->Val;
        GIa2 = rLit[14];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        (--rSp)->Val = ((Ptr) GLvirwindow_138);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rLit[39];
        (--rSp)->Val = rLit[40];
        rA4 = (Ptr) 5;
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_138() {  /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA2, rA3, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        rA4 = (Ptr) 0;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (rLit[39]->Val)));
        rLit[39]->Val = rA4;
        rA3 = (Ptr) 0;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) (rLit[40]->Val)));
        rLit[40]->Val = rA3;
        rA2 = (rSp->Val->Val + 2 + (Fix) 0)->Val;
        if (rA2 != rA4) goto l_108;
        rA2 = (rSp->Val->Val + 2 + (Fix) 1)->Val;
        if (rA2 == rA3) goto l_106;
l_108:
        (--rSp)->Val = ((Ptr) GXpopj1);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        rA4 = (Ptr) 5;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
l_106:
        GIa1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_139() {  /* define-window-property-accessor */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1;
        rA1 = rA1->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[41];
        GIa2 = rA1;
        rA1 = rLit[9];
        (--rSp)->Val = ((Ptr) GLvirwindow_141);
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirwindow_141() {  /* call_virwindow_140 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[43];
        (--rSp)->Val = ((Ptr) GLvirwindow_142);
        (--rSp)->Val = rLit[44];
        (--rSp)->Val = rLit[45];
        (--rSp)->Val = ((Ptr) GLvirwindow_143);
        (--rSp)->Val = rLit[46];
        (--rSp)->Val = ((Ptr) GLvirwindow_144);
        (--rSp)->Val = rLit[47];
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_144() {  /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[48];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[49] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_143() {  /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirwindow_145);
        (--rSp)->Val = rLit[50];
        (--rSp)->Val = rLit[51];
        (--rSp)->Val = ((Ptr) GLvirwindow_146);
        (--rSp)->Val = rLit[47];
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_146() {  /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[52];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[49] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_145() {  /* 105 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYvirwindow[31] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirwindow_142() {  /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYvirwindow[31] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirwindow_147() {  /* #:image:rectangle:window:set-property */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2;
        rA2 = (rA1->Val + 2 + (Fix) 10)->Val;
        rA1 = (rSp++)->Val;
        rA1 = llrt_call_assq (rA1, rA2, GIbcons, rNil);
        if (rA1 == rNil)        goto l_101;
        (rA1 + 1)->Val = (rSp + 2)->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        GIa3 = (rSp->Val->Val + 2 + (Fix) 10)->Val;
        rA2 = (rSp + 2)->Val;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_149);
        {aRet = (GYvirwindow[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLvirwindow_149() {  /* call_virwindow_148 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp->Val->Val + 2 + (Fix) 10)->Val = GIa1;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_4() {    /* compat-type */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1;
        if (rA1 != rLit[54])    goto l_102;
        rA1 = rLit[9];
        {aRet = (rSp++)->Val; goto lRet;}
l_102:
        if (rA1 != rLit[55])    { aRet = (rSp++)->Val; goto lRet;}
        rA1 = rLit[56];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirwindow_150() {  /* #:image:rectangle:window:create */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 7)     goto l_101;
        rA1 = rLit[57];
        rA2 = (Ptr) 7;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 7));
        rA1 = GInil;
        goto l_nlist_virwindow_152;
l_nlist_virwindow_151:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virwindow_152:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virwindow_151;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLvirwindow_154);
        {aRet = (rLit[58] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_154() {  /* call_virwindow_153 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (rA1->Val + 2 + (Fix) 0)->Val = (rSp + 8)->Val;
        (rA1->Val + 2 + (Fix) 1)->Val = (rSp + 7)->Val;
        (rA1->Val + 2 + (Fix) 2)->Val = (rSp + 6)->Val;
        (rA1->Val + 2 + (Fix) 3)->Val = (rSp + 5)->Val;
        (--rSp)->Val = rA1;
        GIa2 = (rSp + 5)->Val;
        rA1 = rLit[59];
        (--rSp)->Val = ((Ptr) GLvirwindow_156);
        {aRet = (rLit[60] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirwindow_156() {  /* call_virwindow_155 */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (GIa1 == rNil)       goto l_102;
        rA4 = rLit[61];
        goto l_103;
l_102:
        rA4 = (rSp + 5)->Val;
l_103:
        GIa3 = (rSp++)->Val;
        (GIa3->Val + 2 + (Fix) 4)->Val = rA4;
        (rSp->Val->Val + 2 + (Fix) 5)->Val = (rSp + 3)->Val;
        (rSp->Val->Val + 2 + (Fix) 6)->Val = (rSp + 2)->Val;
        if ((rSp + 1)->Val == rNil)     goto l_104;
        rA4 = (rSp + 1)->Val;
        rA4 = rA4->Val;
        goto l_105;
l_104:
        rA4 = rNil;
l_105:
        (rSp->Val->Val + 2 + (Fix) 9)->Val = rA4;
        GIa1 = rSp->Val;
        rSp += (Fix) 9;
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_157() {  /* #:image:rectangle:window:prin */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirwindow_158);
        (--rSp)->Val = (Ptr) 35;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_158() {  /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirwindow_159);
        (--rSp)->Val = (Ptr) 60;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_159() {  /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirwindow_160);
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_162);
        {aRet = (GYvirwindow[63] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_162() {  /* call_virwindow_161 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[64] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirwindow_160() {  /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirwindow_163);
        (--rSp)->Val = (Ptr) 32;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_163() {  /* 104 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLvirwindow_164);
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 4)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYvirwindow[64] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_164() {  /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = (Ptr) 62;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_165() {  /* #:image:rectangle:window:make-window */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 2 + (Fix) 9)->Val;
        if (rA4 == GInil)       goto l_101;
        (--rSp)->Val = ((Ptr) GLvirwindow_166);
        (--rSp)->Val = rLit[8];
        rA4 = (rA1->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 3;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GLvirwindow_166);
        (--rSp)->Val = rLit[0];
        rA4 = (rA1->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 3;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_166() {  /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_167() {  /* #:image:rectangle:window:current-window */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[19];
        rA4 = (rA1->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 3;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_168() {  /* #:image:rectangle:window:uncurrent-window */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[20];
        rA4 = (rA1->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 3;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_169() {  /* #:image:rectangle:window:modify-window */
   {    register Ptr aRet, *rLit, rSp, rA2, rA3, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 8)     goto l_101;
        GIa1 = rLit[65];
        rA2 = (Ptr) 8;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 4)->Val != rNil)     goto l_104;
        if ((rSp + 3)->Val == rNil)     goto l_103;
l_104:
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA4->Val + 2 + (Fix) 10)->Val;
        (rA4->Val + 2 + (Fix) 6)->Val = (Ptr) 0;
        (rA4->Val + 2 + (Fix) 7)->Val = (Ptr) 0;
        rA2 = (rSp + 4)->Val;
        if (rA2 != rNil)        goto l_105;
        rA2 = ((rSp + 7)->Val->Val + 2 + (Fix) 2)->Val;
l_105:
        (rA4->Val + 2 + (Fix) 8)->Val = rA2;
        rA2 = (rSp + 3)->Val;
        if (rA2 != rNil)        goto l_106;
        rA2 = ((rSp + 7)->Val->Val + 2 + (Fix) 3)->Val;
l_106:
        (rA4->Val + 2 + (Fix) 9)->Val = rA2;
        if (rA3 == rNil)        goto l_103;
        rA2 = (rA4->Val + 2 + (Fix) 8)->Val;
        (rA3->Val + 2 + (Fix) 0)->Val = rA2;
        rA2 = (rA4->Val + 2 + (Fix) 9)->Val;
        (rA3->Val + 2 + (Fix) 1)->Val = rA2;
l_103:
        (--rSp)->Val = ((Ptr) GXpopj8);
        (--rSp)->Val = rLit[24];
        rA4 = ((rSp + 9)->Val->Val + 2 + (Fix) 12)->Val;
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
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 10;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_170() {  /* #:image:rectangle:window:update-window */
   {    register Ptr aRet, *rLit, rSp, rA2, rA3, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 5)     goto l_101;
        GIa1 = rLit[66];
        rA2 = (Ptr) 5;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 1)->Val != rNil)     goto l_104;
        if (rSp->Val == rNil)   goto l_103;
l_104:
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA4->Val + 2 + (Fix) 10)->Val;
        (rA4->Val + 2 + (Fix) 6)->Val = (Ptr) 0;
        (rA4->Val + 2 + (Fix) 7)->Val = (Ptr) 0;
        rA2 = (rSp + 1)->Val;
        if (rA2 != rNil)        goto l_105;
        rA2 = ((rSp + 4)->Val->Val + 2 + (Fix) 2)->Val;
l_105:
        (rA4->Val + 2 + (Fix) 8)->Val = rA2;
        rA2 = rSp->Val;
        if (rA2 != rNil)        goto l_106;
        rA2 = ((rSp + 4)->Val->Val + 2 + (Fix) 3)->Val;
l_106:
        (rA4->Val + 2 + (Fix) 9)->Val = rA2;
        if (rA3 == rNil)        goto l_103;
        rA2 = (rA4->Val + 2 + (Fix) 8)->Val;
        (rA3->Val + 2 + (Fix) 0)->Val = rA2;
        rA2 = (rA4->Val + 2 + (Fix) 9)->Val;
        (rA3->Val + 2 + (Fix) 1)->Val = rA2;
l_103:
        (--rSp)->Val = ((Ptr) GXpopj5);
        (--rSp)->Val = rLit[25];
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
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
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 7;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_171() {  /* #:image:rectangle:window:kill-window */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[26];
        rA4 = (rA1->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 3;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_172() {  /* #:image:rectangle:window:pop-window */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[29];
        rA4 = (rA1->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 3;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_173() {  /* #:image:rectangle:window:move-behind-window */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[30];
        rA4 = (rA1->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GIa2;
        rA4 = (Ptr) 4;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_174() {  /* #:image:rectangle:window:current-keyboard-focus-window */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[28];
        rA4 = (rA1->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 3;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_175() {  /* #:image:rectangle:window:uncurrent-keyboard-focus-window */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[33];
        rA4 = (rA1->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 3;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_176() {  /* #:image:rectangle:window:map-window */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA4 = GIa4;
        if (rA4 == (Ptr) 5)     goto l_101;
        GIa1 = rLit[67];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GXpopj5);
        (--rSp)->Val = rLit[36];
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
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
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 7;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_177() {  /* move-window */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[9];
        (--rSp)->Val = ((Ptr) GLvirwindow_179);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_179() {  /* call_virwindow_178 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        rA1 = rLit[68];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = (rSp->Val->Val + 2 + (Fix) 12)->Val;
        if (rA4 != rNil)        goto l_104;
        GIa3 = (rSp->Val->Val + 2 + (Fix) 12)->Val;
        GIa2 = rLit[14];
        rA1 = rLit[68];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA4 = (rLit[13]->Val->Val + 2 + (Fix) 10)->Val;
        if (rA4 == rSp->Val)    {aRet = ((Ptr) GLvirwindow_180); goto lRet;}
        if ((rSp + 1)->Val != rNil)     goto l_107;
        if ((rSp + 2)->Val == rNil)     {aRet = ((Ptr) GLvirwindow_180); goto lRet;}
l_107:
        (--rSp)->Val = ((Ptr) GLvirwindow_180);
        (--rSp)->Val = rLit[68];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_180() {  /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_181() {  /* resize-window */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[9];
        (--rSp)->Val = ((Ptr) GLvirwindow_183);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_183() {  /* call_virwindow_182 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        rA3 = rSp->Val;
        rA2 = rLit[11];
        rA1 = rLit[69];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = (rSp->Val->Val + 2 + (Fix) 12)->Val;
        if (rA4 != rNil)        goto l_104;
        rA3 = (rSp->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = rLit[14];
        rA1 = rLit[69];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA4 = (rLit[13]->Val->Val + 2 + (Fix) 10)->Val;
        if (rA4 == rSp->Val)    {aRet = ((Ptr) GLvirwindow_184); goto lRet;}
        if ((rSp + 1)->Val != rNil)     goto l_107;
        if ((rSp + 2)->Val == rNil)     {aRet = ((Ptr) GLvirwindow_184); goto lRet;}
l_107:
        rA4 = (rSp->Val->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA4->Val + 2 + (Fix) 10)->Val;
        (rA4->Val + 2 + (Fix) 6)->Val = (Ptr) 0;
        (rA4->Val + 2 + (Fix) 7)->Val = (Ptr) 0;
        rA2 = (rSp + 1)->Val;
        if (rA2 != rNil)        goto l_108;
        rA2 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
l_108:
        (rA4->Val + 2 + (Fix) 8)->Val = rA2;
        rA2 = (rSp + 2)->Val;
        if (rA2 != rNil)        goto l_109;
        rA2 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
l_109:
        (rA4->Val + 2 + (Fix) 9)->Val = rA2;
        if (rA3 == rNil)        goto l_111;
        rA2 = (rA4->Val + 2 + (Fix) 8)->Val;
        (rA3->Val + 2 + (Fix) 0)->Val = rA2;
        rA2 = (rA4->Val + 2 + (Fix) 9)->Val;
        (rA3->Val + 2 + (Fix) 1)->Val = rA2;
l_111:
        (--rSp)->Val = ((Ptr) GLvirwindow_184);
        (--rSp)->Val = rLit[69];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_184() {  /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_185() {  /* move-resize-window */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        if (GIa4 == (Ptr) 5)    goto l_101;
        GIa1 = rLit[70];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        GIa2 = rLit[9];
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_187);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_187() {  /* call_virwindow_186 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_103;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[11];
        rA1 = rLit[70];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 12)->Val;
        if (rA4 != rNil)        goto l_105;
        rA3 = ((rSp + 4)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = rLit[14];
        rA1 = rLit[70];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        rA4 = (rLit[13]->Val->Val + 2 + (Fix) 10)->Val;
        if (rA4 == (rSp + 4)->Val)      {aRet = ((Ptr) GLvirwindow_188); goto lRet;}
        if ((rSp + 3)->Val != rNil)     goto l_108;
        if ((rSp + 2)->Val != rNil)     goto l_108;
        if ((rSp + 1)->Val != rNil)     goto l_108;
        if (rSp->Val == rNil)   {aRet = ((Ptr) GLvirwindow_188); goto lRet;}
l_108:
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 7)->Val;
        rA3 = (rA4->Val + 2 + (Fix) 10)->Val;
        (rA4->Val + 2 + (Fix) 6)->Val = (Ptr) 0;
        (rA4->Val + 2 + (Fix) 7)->Val = (Ptr) 0;
        rA2 = (rSp + 1)->Val;
        if (rA2 != rNil)        goto l_109;
        rA2 = ((rSp + 4)->Val->Val + 2 + (Fix) 2)->Val;
l_109:
        (rA4->Val + 2 + (Fix) 8)->Val = rA2;
        rA2 = rSp->Val;
        if (rA2 != rNil)        goto l_110;
        rA2 = ((rSp + 4)->Val->Val + 2 + (Fix) 3)->Val;
l_110:
        (rA4->Val + 2 + (Fix) 9)->Val = rA2;
        if (rA3 == rNil)        goto l_112;
        rA2 = (rA4->Val + 2 + (Fix) 8)->Val;
        (rA3->Val + 2 + (Fix) 0)->Val = rA2;
        rA2 = (rA4->Val + 2 + (Fix) 9)->Val;
        (rA3->Val + 2 + (Fix) 1)->Val = rA2;
l_112:
        (--rSp)->Val = ((Ptr) GLvirwindow_188);
        (--rSp)->Val = rLit[70];
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
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 6;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_188() {  /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 4)->Val;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_189() {  /* window-events-list */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[71];
        rA2 = (Ptr) 1;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = GInil;
        goto l_nlist_virwindow_191;
l_nlist_virwindow_190:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virwindow_191:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virwindow_190;}
        (--rSp)->Val = rA1;
        rA2 = rLit[9];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_193);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_193() {  /* call_virwindow_192 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_103;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[11];
        rA1 = rLit[71];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 12)->Val;
        if (rA4 != rNil)        goto l_105;
        GIa3 = ((rSp + 1)->Val->Val + 2 + (Fix) 12)->Val;
        GIa2 = rLit[14];
        rA1 = rLit[71];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if (rSp->Val == rNil)   goto l_106;
        rA4 = (rLit[13]->Val->Val + 2 + (Fix) 10)->Val;
        if (rA4 == (rSp + 1)->Val)      goto l_108;
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[71];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 3)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 3;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
l_108:
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_106:
        rA1 = ((rSp + 1)->Val->Val + 2 + (Fix) 14)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_194() {  /* window-title */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[72];
        rA2 = (Ptr) 1;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = GInil;
        goto l_nlist_virwindow_196;
l_nlist_virwindow_195:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virwindow_196:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virwindow_195;}
        (--rSp)->Val = rA1;
        rA2 = rLit[9];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_198);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_198() {  /* call_virwindow_197 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_103;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[11];
        rA1 = rLit[72];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 12)->Val;
        if (rA4 != rNil)        goto l_105;
        GIa3 = ((rSp + 1)->Val->Val + 2 + (Fix) 12)->Val;
        GIa2 = rLit[14];
        rA1 = rLit[72];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if (rSp->Val == rNil)   goto l_106;
        rA4 = (rLit[13]->Val->Val + 2 + (Fix) 10)->Val;
        if (rA4 == (rSp + 1)->Val)      goto l_108;
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[72];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 3)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 3;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
l_108:
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_106:
        rA1 = ((rSp + 1)->Val->Val + 2 + (Fix) 4)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_199() {  /* #:window:test-window-state */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYvirwindow; rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA2;
        rA2 = rLit[73];
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_201);
        {aRet = (rLit[74] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLvirwindow_201() {  /* call_virwindow_200 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_101;
        rA1 = rLit[75];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        GIa3 = rSp->Val;
        GIa2 = rLit[76];
        rA1 = rLit[77];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirwindow_202() {  /* window-state */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[77];
        rA2 = (Ptr) 1;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = GInil;
        goto l_nlist_virwindow_204;
l_nlist_virwindow_203:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virwindow_204:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virwindow_203;}
        (--rSp)->Val = rA1;
        rA2 = rLit[9];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_206);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_206() {  /* call_virwindow_205 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        if (rA1 != rNil)        goto l_103;
        GIa3 = (rSp + 1)->Val;
        rA2 = rLit[11];
        rA1 = rLit[77];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_103:
        if (rSp->Val == rNil)   {aRet = ((Ptr) GLvirwindow_207); goto lRet;}
        rA2 = rSp->Val;
        rA2 = rA2->Val;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_209);
        {aRet = ((Ptr) GLvirwindow_199); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLvirwindow_209() {  /* call_virwindow_208 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_106;
        rA4 = (rLit[13]->Val->Val + 2 + (Fix) 10)->Val;
        if (rA4 == (rSp + 1)->Val)      goto l_106;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 12)->Val;
        if (rA4 != rNil)        goto l_109;
        GIa3 = ((rSp + 1)->Val->Val + 2 + (Fix) 12)->Val;
        GIa2 = rLit[14];
        rA1 = rLit[77];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[77];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 3)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 3;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
l_106:
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_207() {  /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = ((rSp + 1)->Val->Val + 2 + (Fix) 17)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_210() {  /* window-background */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[78];
        rA2 = (Ptr) 1;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = GInil;
        goto l_nlist_virwindow_212;
l_nlist_virwindow_211:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virwindow_212:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virwindow_211;}
        (--rSp)->Val = rA1;
        rA2 = rLit[9];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_214);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_214() {  /* call_virwindow_213 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_103;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[11];
        rA1 = rLit[78];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if (rSp->Val == rNil)   goto l_104;
        rA4 = (rLit[13]->Val->Val + 2 + (Fix) 10)->Val;
        if (rA4 == (rSp + 1)->Val)      goto l_106;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 12)->Val;
        if (rA4 != rNil)        goto l_109;
        GIa3 = ((rSp + 1)->Val->Val + 2 + (Fix) 12)->Val;
        GIa2 = rLit[14];
        rA1 = rLit[78];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[78];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 3)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 3;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
l_106:
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 7)->Val;
        if (rA4 == rNil)        goto l_111;
        rA1 = ((rSp + 1)->Val->Val + 2 + (Fix) 7)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 5)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_111:
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_215() {  /* window-border */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[79];
        rA2 = (Ptr) 1;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = GInil;
        goto l_nlist_virwindow_217;
l_nlist_virwindow_216:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virwindow_217:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virwindow_216;}
        (--rSp)->Val = rA1;
        rA2 = rLit[9];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_219);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_219() {  /* call_virwindow_218 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_103;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[11];
        rA1 = rLit[79];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if (rSp->Val == rNil)   goto l_104;
        rA4 = (rLit[13]->Val->Val + 2 + (Fix) 10)->Val;
        if (rA4 == (rSp + 1)->Val)      goto l_106;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 12)->Val;
        if (rA4 != rNil)        goto l_109;
        GIa3 = ((rSp + 1)->Val->Val + 2 + (Fix) 12)->Val;
        GIa2 = rLit[14];
        rA1 = rLit[79];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[79];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 3)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 3;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
l_106:
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        rA1 = ((rSp + 1)->Val->Val + 2 + (Fix) 5)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_220() {  /* window-clear-region */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        if (GIa4 == (Ptr) 5)    goto l_101;
        GIa1 = rLit[80];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        GIa2 = rLit[9];
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_222);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_222() {  /* call_virwindow_221 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        if (rA1 != rNil)        goto l_103;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[11];
        rA1 = rLit[80];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 3)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[3];
        rA1 = rLit[80];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 2)->Val < rBfloat)   goto l_107;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[3];
        rA1 = rLit[80];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if ((rSp + 1)->Val < rBfloat)   goto l_109;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[3];
        rA1 = rLit[80];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        if (rSp->Val < rBfloat) goto l_111;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[80];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 12)->Val;
        if (rA4 != rNil)        goto l_113;
        rA3 = ((rSp + 4)->Val->Val + 2 + (Fix) 12)->Val;
        rA2 = rLit[14];
        rA1 = rLit[80];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_113:
        (--rSp)->Val = ((Ptr) GLvirwindow_223);
        (--rSp)->Val = rLit[80];
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
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 6;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_223() {  /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 4)->Val;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_224() {  /* #:image:rectangle:window:window-clear-region */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA4 = GIa4;
        if (rA4 == (Ptr) 5)     goto l_101;
        GIa1 = rLit[81];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = ((Ptr) GXpopj5);
        (--rSp)->Val = rLit[80];
        (--rSp)->Val = rA4;
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
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 7;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_225() {  /* #:image:rectangle:window:move-window */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLvirwindow_226);
        rA4 = (Ptr) 0;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_226() {  /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirwindow_227);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirwindow_228);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_228() {  /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirwindow_229);
        (--rSp)->Val = rLit[68];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 5;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_229() {  /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj5);
        {aRet = ((Ptr) GLvirwindow_227); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_227() {  /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLvirwindow_230);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_230() {  /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_231() {  /* #:image:rectangle:window:resize-window */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLvirwindow_232);
        rA4 = (Ptr) 0;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_232() {  /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirwindow_233);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirwindow_234);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_234() {  /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirwindow_235);
        (--rSp)->Val = rLit[69];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 5;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_235() {  /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj5);
        {aRet = ((Ptr) GLvirwindow_233); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_233() {  /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLvirwindow_236);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_236() {  /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_237() {  /* #:image:rectangle:window:move-resize-window */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA4 = GIa4;
        if (rA4 == (Ptr) 5)     goto l_101;
        GIa1 = rLit[82];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLvirwindow_238);
        rA4 = (Ptr) 0;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_238() {  /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirwindow_239);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirwindow_240);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_240() {  /* 105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirwindow_241);
        (--rSp)->Val = rLit[70];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
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
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 7;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_241() {  /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj7);
        {aRet = ((Ptr) GLvirwindow_239); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_239() {  /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLvirwindow_242);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirwindow[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_242() {  /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_243() {  /* #:image:rectangle:window:window-events-list */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[71];
        rA4 = (rA1->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GIa2;
        rA4 = (Ptr) 4;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_244() {  /* #:image:rectangle:window:window-title */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[72];
        rA4 = (rA1->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GIa2;
        rA4 = (Ptr) 4;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_245() {  /* #:image:rectangle:window:window-state */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[77];
        rA4 = (rA1->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GIa2;
        rA4 = (Ptr) 4;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_246() {  /* #:image:rectangle:window:window-background */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[78];
        rA4 = (rA1->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GIa2;
        rA4 = (Ptr) 4;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_247() {  /* #:image:rectangle:window:window-border */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[79];
        rA4 = (rA1->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GIa2;
        rA4 = (Ptr) 4;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_248() {  /* window-graph-env */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[9];
        (--rSp)->Val = ((Ptr) GLvirwindow_250);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_250() {  /* call_virwindow_249 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        rA1 = rLit[83];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = (rSp->Val->Val + 2 + (Fix) 12)->Val;
        if (rA4 != rNil)        goto l_104;
        GIa3 = (rSp->Val->Val + 2 + (Fix) 12)->Val;
        GIa2 = rLit[14];
        rA1 = rLit[83];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[83];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_251() {  /* #:image:rectangle:window:window-graph-env */
   {    register Ptr aRet;
        GIa1 = (GIa1->Val + 2 + (Fix) 7)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirwindow_252() {  /* window-change-attributes */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirwindow; rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[9];
        (--rSp)->Val = ((Ptr) GLvirwindow_254);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_254() {  /* call_virwindow_253 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[11];
        rA1 = rLit[84];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_256);
        {aRet = (rLit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirwindow_256() {  /* call_virwindow_255 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_104;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[86];
        rA1 = rLit[84];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_104:
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLvirwindow_258);
        {aRet = (rLit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirwindow_258() {  /* call_virwindow_257 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_106;
        GIa3 = (rSp + 2)->Val;
        GIa2 = rLit[86];
        rA1 = rLit[84];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        rA4 = (rSp->Val->Val + 2 + (Fix) 12)->Val;
        if (rA4 != rNil)        goto l_108;
        GIa3 = (rSp->Val->Val + 2 + (Fix) 12)->Val;
        GIa2 = rLit[14];
        rA1 = rLit[84];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_108:
        rA4 = (rLit[13]->Val->Val + 2 + (Fix) 10)->Val;
        if (rA4 == rSp->Val)    goto l_109;
        (--rSp)->Val = ((Ptr) GXpopj3);
        (--rSp)->Val = rLit[84];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
l_109:
        rA1 = rNil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_259() {  /* #:image:rectangle:window:window-change-attributes */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLvirwindow_260);
        (--rSp)->Val = rLit[84];
        rA4 = (rA1->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa3;
        rA4 = (Ptr) 5;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_260() {  /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp->Val->Val + 2 + (Fix) 16)->Val = (rSp + 1)->Val;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirwindow_261() {  /* #:window:create */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYvirwindow; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        rA1 = GInil;
        goto l_nlist_virwindow_263;
l_nlist_virwindow_262:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virwindow_263:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virwindow_262;}
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[57];
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[87] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirwindow_264() {  /* #:window:prin */
   {    register Ptr aRet;
        {aRet = (GYvirwindow[88] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDvirwindow_265() {  /* trace create-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,0,89,90);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_266() {  /* trace create-subwindow */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,8,89,90);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_267() {  /* trace make-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,12,89,91);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_268() {  /* trace current-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,19,89,90);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_269() {  /* trace modify-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,24,89,90);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_270() {  /* trace update-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,25,89,90);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_271() {  /* trace kill-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,26,89,91);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_272() {  /* trace pop-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,29,89,91);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_273() {  /* trace move-behind-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,30,89,92);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_274() {  /* trace current-keyboard-focus-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,28,89,90);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_275() {  /* trace find-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,35,89,92);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_276() {  /* trace map-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,36,89,90);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_277() {  /* trace windowp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,37,89,91);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_278() {  /* trace subwindowp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,93,89,92);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_279() {  /* trace check-window-position */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,38,89,91);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_280() {  /* trace define-window-property-accessor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,94,89,91);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_281() {  /* trace #:image:rectangle:window:set-property */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,50,89,95);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_282() {  /* trace #:image:rectangle:window:create */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,57,89,90);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_283() {  /* trace #:image:rectangle:window:prin */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,88,89,91);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_284() {  /* trace #:image:rectangle:window:make-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,96,89,91);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_285() {  /* trace #:image:rectangle:window:current-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,97,89,91);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_286() {  /* trace #:image:rectangle:window:uncurrent-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,98,89,91);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_287() {  /* trace #:image:rectangle:window:modify-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,65,89,90);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_288() {  /* trace #:image:rectangle:window:update-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,66,89,90);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_289() {  /* trace #:image:rectangle:window:kill-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,99,89,91);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_290() {  /* trace #:image:rectangle:window:pop-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,100,89,91);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_291() {  /* trace #:image:rectangle:window:move-behind-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,101,89,92);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_292() {  /* trace #:image:rectangle:window:current-keyboard-focus-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,102,89,91);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_293() {  /* trace #:image:rectangle:window:uncurrent-keyboard-focus-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,103,89,91);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_294() {  /* trace #:image:rectangle:window:map-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,67,89,90);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_295() {  /* trace move-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,68,89,95);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_296() {  /* trace resize-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,69,89,95);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_297() {  /* trace move-resize-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,70,89,90);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_298() {  /* trace window-events-list */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,71,89,90);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_299() {  /* trace window-title */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,72,89,90);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_300() {  /* trace window-state */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,77,89,90);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_301() {  /* trace window-background */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,78,89,90);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_302() {  /* trace window-border */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,79,89,90);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_303() {  /* trace window-clear-region */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,80,89,90);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_304() {  /* trace #:image:rectangle:window:window-clear-region */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,81,89,90);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_305() {  /* trace #:image:rectangle:window:move-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,104,89,95);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_306() {  /* trace #:image:rectangle:window:resize-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,105,89,95);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_307() {  /* trace #:image:rectangle:window:move-resize-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,82,89,90);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_308() {  /* trace #:image:rectangle:window:window-events-list */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,106,89,92);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_309() {  /* trace #:image:rectangle:window:window-title */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,107,89,92);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_310() {  /* trace #:image:rectangle:window:window-state */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,108,89,92);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_311() {  /* trace #:image:rectangle:window:window-background */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,109,89,92);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_312() {  /* trace #:image:rectangle:window:window-border */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,110,89,92);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_313() {  /* trace window-graph-env */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,83,89,91);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_314() {  /* trace #:image:rectangle:window:window-graph-env */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,111,89,91);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_315() {  /* trace window-change-attributes */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,84,89,95);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_316() {  /* trace #:image:rectangle:window:window-change-attributes */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,112,89,95);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_317() {  /* trace #:window:create */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,113,89,90);
  lRet:  return (aRet);}}

static Ptr GDvirwindow_318() {  /* trace #:window:prin */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirwindow,114,89,91);
  lRet:  return (aRet);}}

