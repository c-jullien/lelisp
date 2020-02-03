/* GELL 15.26: source file for the module: "ttywindow" */
/*             translation done:           "Tue Aug  24 93 10:49:29 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "ttywindow.h" 

static Ptr GLttywindow_1() {    /* #:image:rectangle:window:tty:make */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYttywindow; rSp = GIsp; rNil = GInil;
        (--rSp)->Val = ((Ptr) GLttywindow_2);
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[0];
        (--rSp)->Val = rLit[1];
        (--rSp)->Val = rNil;
        GIa4 = (Ptr) 25;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_2() {    /* 101 */
   {    register Ptr aRet;
        (GIa1 + 1)->Val = GYttywindow[3];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_3() {    /* #:image:rectangle:window:tty:x */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[4];
        (--rSp)->Val = (Ptr) 0;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_4() {    /* #:image:rectangle:window:tty:y */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[6];
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_5() {    /* #:image:rectangle:window:tty:w */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[7];
        (--rSp)->Val = (Ptr) 2;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_6() {    /* #:image:rectangle:window:tty:h */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[8];
        (--rSp)->Val = (Ptr) 3;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_7() {    /* #:image:rectangle:window:tty:title */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[9];
        (--rSp)->Val = (Ptr) 4;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_8() {    /* #:image:rectangle:window:tty:hilited */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = (Ptr) 5;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_9() {    /* #:image:rectangle:window:tty:visible */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[11];
        (--rSp)->Val = (Ptr) 6;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_10() {   /* #:image:rectangle:window:tty:graph-env */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[12];
        (--rSp)->Val = (Ptr) 7;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_11() {   /* #:image:rectangle:window:tty:extend */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[13];
        (--rSp)->Val = (Ptr) 8;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_12() {   /* #:image:rectangle:window:tty:father */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = (Ptr) 9;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_13() {   /* #:image:rectangle:window:tty:properties */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[15];
        (--rSp)->Val = (Ptr) 10;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_14() {   /* #:image:rectangle:window:tty:cursor */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[16];
        (--rSp)->Val = (Ptr) 11;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_15() {   /* #:image:rectangle:window:tty:display */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[17];
        (--rSp)->Val = (Ptr) 12;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_16() {   /* #:image:rectangle:window:tty:subwindows */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[18];
        (--rSp)->Val = (Ptr) 13;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_17() {   /* #:image:rectangle:window:tty:events-list */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[19];
        (--rSp)->Val = (Ptr) 14;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_18() {   /* #:image:rectangle:window:tty:window-type */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[20];
        (--rSp)->Val = (Ptr) 15;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_19() {   /* #:image:rectangle:window:tty:graphic-properties */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[21];
        (--rSp)->Val = (Ptr) 16;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_20() {   /* #:image:rectangle:window:tty:state */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[22];
        (--rSp)->Val = (Ptr) 17;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_21() {   /* #:image:rectangle:window:tty:cx */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[23];
        (--rSp)->Val = (Ptr) 18;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_22() {   /* #:image:rectangle:window:tty:cy */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[24];
        (--rSp)->Val = (Ptr) 19;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_23() {   /* #:image:rectangle:window:tty:lmargin */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[25];
        (--rSp)->Val = (Ptr) 20;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_24() {   /* #:image:rectangle:window:tty:rmargin */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[26];
        (--rSp)->Val = (Ptr) 21;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_25() {   /* #:image:rectangle:window:tty:tyshowcursor */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[27];
        (--rSp)->Val = (Ptr) 22;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_26() {   /* #:image:rectangle:window:tty:tty */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[28];
        (--rSp)->Val = (Ptr) 23;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_27() {   /* #:image:rectangle:window:tty:itsoft */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[29];
        (--rSp)->Val = (Ptr) 24;
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
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_28() {   /* #:image:rectangle:window:tty:create */
   {    register Ptr aRet, *rLit;
        rLit = GYttywindow;
        if (GIa4 == (Ptr) 7)    goto l_101;
        GIa1 = rLit[30];
        GIa2 = (Ptr) 7;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
l_101:
        (--GIsp)->Val = ((Ptr) GLttywindow_30);
        {aRet = (rLit[32] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_30() {   /* call_ttywindow_29 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYttywindow; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (rA1->Val + 2 + (Fix) 0)->Val = (rSp + 6)->Val;
        (rA1->Val + 2 + (Fix) 1)->Val = (rSp + 7)->Val;
        (rA1->Val + 2 + (Fix) 2)->Val = (rSp + 5)->Val;
        (rA1->Val + 2 + (Fix) 3)->Val = (rSp + 4)->Val;
        (--rSp)->Val = rA1;
        GIa2 = (rSp + 4)->Val;
        rA1 = rLit[33];
        (--rSp)->Val = ((Ptr) GLttywindow_32);
        {aRet = (rLit[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLttywindow_32() {   /* call_ttywindow_31 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        if (GIa1 == GInil)      goto l_102;
        rA4 = rLit[35];
        goto l_103;
l_102:
        rA4 = (rSp + 4)->Val;
l_103:
        GIa3 = (rSp++)->Val;
        (GIa3->Val + 2 + (Fix) 4)->Val = rA4;
        (rSp->Val->Val + 2 + (Fix) 5)->Val = (rSp + 2)->Val;
        (rSp->Val->Val + 2 + (Fix) 6)->Val = (rSp + 1)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLttywindow_34);
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_34() {   /* call_ttywindow_33 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLttywindow_36);
        {aRet = (GYttywindow[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_36() {   /* call_ttywindow_35 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp->Val->Val + 2 + (Fix) 18)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLttywindow_38);
        {aRet = (GYttywindow[38] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_38() {   /* call_ttywindow_37 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp->Val->Val + 2 + (Fix) 19)->Val = rA1;
        (rSp->Val->Val + 2 + (Fix) 20)->Val = (Ptr) 0;
        rA1 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLttywindow_40);
        {aRet = (GYttywindow[39] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLttywindow_40() {   /* call_ttywindow_39 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLttywindow_42);
        {aRet = (GYttywindow[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_42() {   /* call_ttywindow_41 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYttywindow; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        (rSp->Val->Val + 2 + (Fix) 21)->Val = rA1;
        rA2 = rLit[41]->Val;
        rA1 = rLit[42];
        rA1 = llrt_call_memq (rA1, rA2, GIbcons, rNil);
        if (rA1 == rNil)        goto l_104;
        rA4 = rLit[41]->Val;
        goto l_105;
l_104:
        rA2 = rLit[41]->Val;
        rA1 = rLit[42];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rA4 = rA1;
l_105:
        (rSp->Val->Val + 2 + (Fix) 24)->Val = rA4;
        rA1 = rSp->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_43() {   /* #:image:rectangle:window:tty:current-window */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLttywindow_45);
        {aRet = ((Ptr) GLttywindow_46); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_45() {   /* call_ttywindow_44 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLttywindow_48);
        {aRet = ((Ptr) GLttywindow_49); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_48() {   /* call_ttywindow_47 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYttywindow; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[3];
        (--rSp)->Val = rLit[43];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[44] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_50() {   /* #:image:rectangle:window:tty:uncurrent-window */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYttywindow; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = GInil;
        GIa1 = rLit[45];
        (--rSp)->Val = ((Ptr) GLttywindow_52);
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_52() {   /* call_ttywindow_51 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLttywindow_54);
        {aRet = (GYttywindow[47] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_54() {   /* call_ttywindow_53 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLttywindow_55);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[48] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_55() {   /* 103 */
   {    register Ptr aRet;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLttywindow_56); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLttywindow_57);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[49] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_57() {   /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp->Val->Val + 2 + (Fix) 20)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLttywindow_58);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[50] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_58() {   /* 105 */
   {    register Ptr aRet;
        (GIsp->Val->Val + 2 + (Fix) 21)->Val = GIa1;
        {aRet = ((Ptr) GLttywindow_56); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_56() {   /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLttywindow_60);
        {aRet = ((Ptr) GLttywindow_46); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_60() {   /* call_ttywindow_59 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYttywindow; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[3];
        (--rSp)->Val = rLit[51];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[44] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_61() {   /* #:image:rectangle:window:tty:modify-window */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYttywindow; rSp = GIsp;
        if (GIa4 == (Ptr) 8)    goto l_101;
        GIa1 = rLit[52];
        GIa2 = (Ptr) 8;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GLttywindow_62);
        (--rSp)->Val = rLit[3];
        (--rSp)->Val = rLit[53];
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
        GIa4 = (Ptr) 10;
        {aRet = (rLit[44] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_62() {   /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLttywindow_63);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_63() {   /* 105 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if ((rSp + 7)->Val != rA1)      goto l_103;
        if ((rSp + 4)->Val != rNil)     goto l_106;
        if ((rSp + 3)->Val == rNil)     goto l_103;
l_106:
        rA1 = (rSp + 7)->Val;
        rSp += (Fix) 8;
        {aRet = ((Ptr) GLttywindow_49); goto lRet;}
l_103:
        rA1 = rNil;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLttywindow_46() {   /* #:window:flip-tty */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYttywindow; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[54]->Val;
        (--rSp)->Val = rLit[41]->Val;
        (--rSp)->Val = ((Ptr) GLttywindow_64);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_64() {   /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 23)->Val;
        rLit[54]->Val = rA4;
        GIa3 = ((rSp + 3)->Val->Val + 2 + (Fix) 24)->Val;
        rLit[41]->Val = GIa3;
        (--rSp)->Val = ((Ptr) GLttywindow_65);
        GIa2 = ((rSp + 4)->Val->Val + 2 + (Fix) 22)->Val;
        (--rSp)->Val = GIa2;
        rA4 = (Ptr) 1;
        {aRet = (rLit[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_65() {   /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 3)->Val->Val + 2 + (Fix) 23)->Val = (rSp + 2)->Val;
        ((rSp + 3)->Val->Val + 2 + (Fix) 24)->Val = (rSp + 1)->Val;
        ((rSp + 3)->Val->Val + 2 + (Fix) 22)->Val = rSp->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_49() {   /* #:window:adjust */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = (rA1->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLttywindow_67);
        {aRet = (GYttywindow[39] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLttywindow_67() {   /* call_ttywindow_66 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLttywindow_69);
        {aRet = (GYttywindow[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_69() {   /* call_ttywindow_68 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYttywindow; rSp = GIsp; rA1 = GIa1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        rLit[56]->Val = rA1;
        rA1 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLttywindow_71);
        {aRet = (rLit[57] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLttywindow_71() {   /* call_ttywindow_70 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLttywindow_73);
        {aRet = (GYttywindow[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_73() {   /* call_ttywindow_72 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYttywindow; rA1 = GIa1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        rLit[58]->Val = rA1;
        rLit[59]->Val = rLit[56]->Val;
        rLit[60]->Val = rA1;
        (--GIsp)->Val = ((Ptr) GLttywindow_74);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[48] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLttywindow_74() {   /* 103 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLttywindow_75); goto lRet;}
        (--rSp)->Val = ((Ptr) GLttywindow_76);
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYttywindow[50] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_76() {   /* 104 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj1);
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 20)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYttywindow[49] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_75() {   /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_77() {   /* #:tty:window:tycn */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYttywindow; rSp = GIsp;
        (--rSp)->Val = rLit[61];
        *((char *) (rSp->Val->Val + 2) + (Fix) 0) = (char) GIa1;
        GIa2 = (Ptr) 1;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rLit[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_78() {   /* #:tty:window:tystring */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLttywindow_79);
        (--rSp)->Val = ((Ptr) GLttywindow_80);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_80() {   /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (GIa1->Val + 2 + (Fix) 18)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLttywindow_81);
        rA4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_81() {   /* 103 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (GIa1->Val + 2 + (Fix) 19)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (GYttywindow[63] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_79() {   /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLttywindow_82);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_82() {   /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLttywindow_83);
        (--rSp)->Val = ((Ptr) GLttywindow_84);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_84() {   /* 106 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (GIa1->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLttywindow_85);
        rA4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_85() {   /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (GIa1->Val + 2 + (Fix) 18)->Val;
        (--rSp)->Val = GIa4;
        GIa3 = (rSp + 5)->Val;
        GIa2 = (Ptr) 0;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLttywindow_87);
        {aRet = (GYttywindow[64] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_87() {   /* call_ttywindow_86 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (GIa1)));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (GYttywindow[65] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_83() {   /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 18)->Val = GIa1;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_88() {   /* #:tty:window:tynewline */
   {    register Ptr aRet, *rLit;
        rLit = GYttywindow;
        if (rLit[66]->Val == GInil)     {aRet = ((Ptr) GLttywindow_89); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLttywindow_89);
        {aRet = (rLit[67] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_89() {   /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLttywindow_90);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_90() {   /* 103 */
   {    register Ptr aRet;
        (GIa1->Val + 2 + (Fix) 18)->Val = (Ptr) 0;
        (--GIsp)->Val = ((Ptr) GLttywindow_91);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_91() {   /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLttywindow_92);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_92() {   /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (GIa1->Val + 2 + (Fix) 19)->Val;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = ((Ptr) GLttywindow_94);
        {aRet = (GYttywindow[57] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_94() {   /* call_ttywindow_93 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (GIa1)));
        GIa3 = (rSp++)->Val;
        (GIa3->Val + 2 + (Fix) 19)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLttywindow_95);
        rA4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_95() {   /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (GIa1->Val + 2 + (Fix) 19)->Val;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = ((Ptr) GLttywindow_97);
        {aRet = (GYttywindow[57] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_97() {   /* call_ttywindow_96 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (GIa1)));
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLttywindow_99);
        {aRet = (GYttywindow[38] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_99() {   /* call_ttywindow_98 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLttywindow_100);
        rA4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_100() {  /* 109 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        GIa3 = (GIa1->Val + 2 + (Fix) 3)->Val;
        rA4 = (rSp++)->Val;
        if ((Fix) (rA4) <= (Fix) (GIa3))        {aRet = ((Ptr) GLttywindow_101); goto lRet;}
        if (rLit[66]->Val == GInil)     goto l_110;
        {aRet = (rLit[68] + 2)->Val; goto lRet;}
l_110:
        (--rSp)->Val = ((Ptr) GLttywindow_102);
        rA4 = (Ptr) 0;
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_102() {  /* 112 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (GIa1->Val + 2 + (Fix) 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) / (Fix) 3));
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLttywindow_104);
        {aRet = (GYttywindow[57] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_104() {  /* call_ttywindow_103 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) / (Fix) (GIa1)));
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLttywindow_106);
        {aRet = (GYttywindow[57] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_106() {  /* call_ttywindow_105 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) * (Fix) (GIa1)));
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLttywindow_107);
        rA4 = (Ptr) 0;
        {aRet = (GYttywindow[69] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_107() {  /* 113 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYttywindow; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLttywindow_108);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLttywindow_109);
        (--rSp)->Val = rLit[70]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[69] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_109() {  /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLttywindow_110);
        (--rSp)->Val = ((Ptr) GLttywindow_111);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_111() {  /* 118 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLttywindow_113);
        {aRet = (GYttywindow[71] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_113() {  /* call_ttywindow_112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLttywindow_114);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_114() {  /* 119 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLttywindow_116);
        {aRet = (GYttywindow[71] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_116() {  /* call_ttywindow_115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLttywindow_117);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_117() {  /* 120 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (GIa1->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLttywindow_118);
        rA4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_118() {  /* 121 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (GIa1->Val + 2 + (Fix) 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) ((rSp + 12)->Val)));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 8;
        {aRet = (GYttywindow[72] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_110() {  /* 117 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLttywindow_119);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_119() {  /* 122 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLttywindow_120);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_120() {  /* 123 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (GIa1->Val + 2 + (Fix) 19)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) ((rSp + 5)->Val)));
        GIa3 = (rSp++)->Val;
        (GIa3->Val + 2 + (Fix) 19)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLttywindow_121);
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 1;
        {aRet = (GYttywindow[69] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_121() {  /* 124 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLttywindow_122);
        (--rSp)->Val = ((Ptr) GLttywindow_123);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_123() {  /* 126 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLttywindow_125);
        {aRet = (GYttywindow[71] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_125() {  /* call_ttywindow_124 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLttywindow_126);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_126() {  /* 127 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLttywindow_128);
        {aRet = (GYttywindow[71] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_128() {  /* call_ttywindow_127 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLttywindow_129);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_129() {  /* 128 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (GIa1->Val + 2 + (Fix) 19)->Val;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = ((Ptr) GLttywindow_131);
        {aRet = (GYttywindow[38] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_131() {  /* call_ttywindow_130 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLttywindow_132);
        rA4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_132() {  /* 129 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (GIa1->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLttywindow_133);
        rA4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_133() {  /* 130 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = (GIa1->Val + 2 + (Fix) 3)->Val;
        (--GIsp)->Val = rA4;
        rA4 = (Ptr) 8;
        {aRet = (GYttywindow[72] + 2)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_122() {  /* 125 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj2);
        {aRet = ((Ptr) GLttywindow_108); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_108() {  /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLttywindow_134);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYttywindow[69] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_134() {  /* 131 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_101() {  /* 106 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_135() {  /* #:tty:window:tybs */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYttywindow; rSp = GIsp;
        (--rSp)->Val = rLit[61];
        *((char *) (rSp->Val->Val + 2) + (Fix) 0) = (char) GIa1;
        (--rSp)->Val = ((Ptr) GLttywindow_136);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_136() {  /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLttywindow_137);
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLttywindow_138);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_138() {  /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (GIa1->Val + 2 + (Fix) 18)->Val;
        (--rSp)->Val = GIa4;
        GIa3 = (Ptr) 1;
        GIa2 = (Ptr) 0;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLttywindow_140);
        {aRet = (GYttywindow[64] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_140() {  /* call_ttywindow_139 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (GYttywindow[73] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_137() {  /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 18)->Val = GIa1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_141() {  /* #:tty:window:tycr */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLttywindow_142);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_142() {  /* 101 */
   {    register Ptr aRet;
        (GIa1->Val + 2 + (Fix) 18)->Val = (Ptr) 0;
        GIa1 = (Ptr) 0;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_143() {  /* #:tty:window:tycleol */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = ((Ptr) GLttywindow_144);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_144() {  /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (GIa1->Val + 2 + (Fix) 18)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLttywindow_145);
        rA4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_145() {  /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        rA4 = (GIa1->Val + 2 + (Fix) 19)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[74]->Val;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLttywindow_146);
        rA4 = (Ptr) 0;
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_146() {  /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (rA1->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLttywindow_147);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLttywindow_147() {  /* 105 */
   {    register Ptr aRet, rSp, rA3;
        rSp = GIsp; rA3 = GIa3;
        GIa4 = (GIa1->Val + 2 + (Fix) 18)->Val;
        rA3 = (rSp++)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) (GIa4)));
        (--rSp)->Val = rA3;
        (--rSp)->Val = ((Ptr) GLttywindow_149);
        {aRet = (GYttywindow[39] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLttywindow_149() {  /* call_ttywindow_148 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLttywindow_151);
        {aRet = (GYttywindow[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_151() {  /* call_ttywindow_150 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 5;
        {aRet = (GYttywindow[63] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_152() {  /* #:tty:window:tycls */
   {    register Ptr aRet, *rLit;
        rLit = GYttywindow;
        GIa2 = (Ptr) 0;
        GIa1 = (Ptr) 0;
        (--GIsp)->Val = (rLit[75] + 2)->Val;
        {aRet = (rLit[76] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_153() {  /* #:tty:window:tyattrib */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYttywindow; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = GInil;
        GIa1 = rLit[45];
        (--rSp)->Val = ((Ptr) GLttywindow_155);
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_155() {  /* call_ttywindow_154 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj1);
        if ((rSp + 1)->Val == GInil)    goto l_102;
        rA4 = (Ptr) 1;
        goto l_103;
l_102:
        rA4 = (Ptr) 0;
l_103:
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYttywindow[77] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_156() {  /* #:tty:window:tyi */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLttywindow_158);
        {aRet = (GYttywindow[47] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_158() {  /* call_ttywindow_157 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLttywindow_159);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[55] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_159() {  /* 103 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLttywindow_160); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLttywindow_161);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_161() {  /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (rA1->Val + 2 + (Fix) 18)->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLttywindow_162);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLttywindow_162() {  /* 105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYttywindow; rSp = GIsp;
        GIa2 = (GIa1->Val + 2 + (Fix) 19)->Val;
        GIa3 = rLit[0];
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLttywindow_160);
        {aRet = (rLit[78] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_160() {  /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYttywindow; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLttywindow_163);
        (--rSp)->Val = rLit[79]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[80] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_163() {  /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYttywindow; rSp = GIsp; rA4 = GIa4;
        rA4 = (rLit[79]->Val->Val + 2 + (Fix) 0)->Val;
        if (rA4 == rLit[81])    goto l_108;
        (--rSp)->Val = ((Ptr) GLttywindow_163);
        (--rSp)->Val = rLit[79]->Val;
        rA4 = (Ptr) 1;
        {aRet = (rLit[80] + 2)->Val; goto lRet;}
l_108:
        (--rSp)->Val = ((Ptr) GLttywindow_164);
        rA4 = (Ptr) 0;
        {aRet = (rLit[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_164() {  /* 112 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLttywindow_165); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLttywindow_166);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_166() {  /* 113 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (rA1->Val + 2 + (Fix) 18)->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLttywindow_167);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLttywindow_167() {  /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (GIa1->Val + 2 + (Fix) 19)->Val;
        GIa3 = GInil;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLttywindow_165);
        {aRet = (GYttywindow[78] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_165() {  /* 111 */
   {    register Ptr aRet;
        GIa1 = (GYttywindow[79]->Val->Val + 2 + (Fix) 2)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_168() {  /* #:tty:window:tys */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLttywindow_170);
        {aRet = (GYttywindow[82] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_170() {  /* call_ttywindow_169 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYttywindow; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLttywindow_171); goto lRet;}
        (--rSp)->Val = ((Ptr) GLttywindow_172);
        (--rSp)->Val = rLit[79]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[80] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_172() {  /* 103 */
   {    register Ptr aRet, *rLit;
        rLit = GYttywindow;
        GIa4 = (rLit[79]->Val->Val + 2 + (Fix) 0)->Val;
        if (GIa4 == rLit[81])   goto l_104;
        {aRet = (rLit[83] + 2)->Val; goto lRet;}
l_104:
        GIa1 = (rLit[79]->Val->Val + 2 + (Fix) 2)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_171() {  /* 101 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_173() {  /* #:tty:window:tycursor */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLttywindow_175);
        {aRet = (GYttywindow[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_175() {  /* call_ttywindow_174 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLttywindow_176);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_176() {  /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLttywindow_178);
        {aRet = (GYttywindow[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_178() {  /* call_ttywindow_177 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLttywindow_180);
        {aRet = (GYttywindow[39] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_180() {  /* call_ttywindow_179 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) * (Fix) ((rSp + 2)->Val)));
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rA1)));
        GIa3 = (rSp++)->Val;
        (GIa3->Val + 2 + (Fix) 18)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLttywindow_181);
        rA4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_181() {  /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLttywindow_183);
        {aRet = (GYttywindow[38] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_183() {  /* call_ttywindow_182 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLttywindow_185);
        {aRet = (GYttywindow[57] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLttywindow_185() {  /* call_ttywindow_184 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) * (Fix) ((rSp + 3)->Val)));
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rA1)));
        GIa3 = (rSp++)->Val;
        (GIa3->Val + 2 + (Fix) 19)->Val = rA4;
        rA1 = rA4;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLttywindow_186() {  /* #:tty:window:tyback */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLttywindow_188);
        {aRet = (GYttywindow[84] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_188() {  /* call_ttywindow_187 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLttywindow_189);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_189() {  /* 101 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (rA1->Val + 2 + (Fix) 18)->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLttywindow_190);
        GIa4 = (Ptr) 0;
        {aRet = (GYttywindow[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLttywindow_190() {  /* 102 */
   {    register Ptr aRet;
        GIa2 = (GIa1->Val + 2 + (Fix) 19)->Val;
        GIa3 = (Ptr) 32;
        GIa1 = (GIsp++)->Val;
        {aRet = (GYttywindow[85] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_191() {  /* #:tty:window:tydelcn */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLttywindow_192() {  /* #:tty:window:tyinscn */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDttywindow_193() {  /* trace #:image:rectangle:window:tty:make */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,32,86,87);
  lRet:  return (aRet);}}

static Ptr GDttywindow_194() {  /* trace #:image:rectangle:window:tty:x */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,4,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_195() {  /* trace #:image:rectangle:window:tty:y */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,6,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_196() {  /* trace #:image:rectangle:window:tty:w */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,7,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_197() {  /* trace #:image:rectangle:window:tty:h */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,8,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_198() {  /* trace #:image:rectangle:window:tty:title */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,9,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_199() {  /* trace #:image:rectangle:window:tty:hilited */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,10,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_200() {  /* trace #:image:rectangle:window:tty:visible */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,11,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_201() {  /* trace #:image:rectangle:window:tty:graph-env */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,12,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_202() {  /* trace #:image:rectangle:window:tty:extend */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,13,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_203() {  /* trace #:image:rectangle:window:tty:father */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,14,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_204() {  /* trace #:image:rectangle:window:tty:properties */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,15,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_205() {  /* trace #:image:rectangle:window:tty:cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,16,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_206() {  /* trace #:image:rectangle:window:tty:display */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,17,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_207() {  /* trace #:image:rectangle:window:tty:subwindows */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,18,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_208() {  /* trace #:image:rectangle:window:tty:events-list */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,19,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_209() {  /* trace #:image:rectangle:window:tty:window-type */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,20,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_210() {  /* trace #:image:rectangle:window:tty:graphic-properties */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,21,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_211() {  /* trace #:image:rectangle:window:tty:state */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,22,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_212() {  /* trace #:image:rectangle:window:tty:cx */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,23,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_213() {  /* trace #:image:rectangle:window:tty:cy */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,24,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_214() {  /* trace #:image:rectangle:window:tty:lmargin */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,25,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_215() {  /* trace #:image:rectangle:window:tty:rmargin */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,26,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_216() {  /* trace #:image:rectangle:window:tty:tyshowcursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,27,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_217() {  /* trace #:image:rectangle:window:tty:tty */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,28,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_218() {  /* trace #:image:rectangle:window:tty:itsoft */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,29,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_219() {  /* trace #:image:rectangle:window:tty:create */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,30,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_220() {  /* trace #:image:rectangle:window:tty:current-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,89,86,90);
  lRet:  return (aRet);}}

static Ptr GDttywindow_221() {  /* trace #:image:rectangle:window:tty:uncurrent-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,91,86,90);
  lRet:  return (aRet);}}

static Ptr GDttywindow_222() {  /* trace #:image:rectangle:window:tty:modify-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,52,86,88);
  lRet:  return (aRet);}}

static Ptr GDttywindow_223() {  /* trace #:tty:window:tycn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,92,86,90);
  lRet:  return (aRet);}}

static Ptr GDttywindow_224() {  /* trace #:tty:window:tystring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,62,86,93);
  lRet:  return (aRet);}}

static Ptr GDttywindow_225() {  /* trace #:tty:window:tynewline */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,94,86,87);
  lRet:  return (aRet);}}

static Ptr GDttywindow_226() {  /* trace #:tty:window:tybs */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,95,86,90);
  lRet:  return (aRet);}}

static Ptr GDttywindow_227() {  /* trace #:tty:window:tycr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,96,86,87);
  lRet:  return (aRet);}}

static Ptr GDttywindow_228() {  /* trace #:tty:window:tycleol */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,97,86,87);
  lRet:  return (aRet);}}

static Ptr GDttywindow_229() {  /* trace #:tty:window:tycls */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,98,86,87);
  lRet:  return (aRet);}}

static Ptr GDttywindow_230() {  /* trace #:tty:window:tyattrib */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,99,86,90);
  lRet:  return (aRet);}}

static Ptr GDttywindow_231() {  /* trace #:tty:window:tyi */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,100,86,87);
  lRet:  return (aRet);}}

static Ptr GDttywindow_232() {  /* trace #:tty:window:tys */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,83,86,87);
  lRet:  return (aRet);}}

static Ptr GDttywindow_233() {  /* trace #:tty:window:tycursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,101,86,93);
  lRet:  return (aRet);}}

static Ptr GDttywindow_234() {  /* trace #:tty:window:tyback */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,102,86,90);
  lRet:  return (aRet);}}

static Ptr GDttywindow_235() {  /* trace #:tty:window:tydelcn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,103,86,90);
  lRet:  return (aRet);}}

static Ptr GDttywindow_236() {  /* trace #:tty:window:tyinscn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYttywindow,104,86,90);
  lRet:  return (aRet);}}

