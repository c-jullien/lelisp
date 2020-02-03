/* GELL 15.26: source file for the module: "virbitmap" */
/*             translation done:           "Tue Aug  24 93 10:49:23 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "virbitmap.h" 

static Ptr GLvirbitmap_1() {    /* #:display:make */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = ((Ptr) GLvirbitmap_2);
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        GIa4 = (Ptr) 27;
        {aRet = (GYvirbitmap[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbitmap_2() {    /* 101 */
   {    register Ptr aRet;
        (GIa1 + 1)->Val = GYvirbitmap[1];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbitmap_3() {    /* #:display:name */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[2];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_4() {    /* #:display:package */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[4];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_5() {    /* #:display:device */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[5];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_6() {    /* #:display:xmax */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[6];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_7() {    /* #:display:ymax */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[7];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_8() {    /* #:display:eventmode */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[8];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_9() {    /* #:display:prologuep */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[9];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_10() {   /* #:display:keyboard-focus-window */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[10];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_11() {   /* #:display:window */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[11];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_12() {   /* #:display:graph-env */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[12];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_13() {   /* #:display:root-window */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[13];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_14() {   /* #:display:main-graph-env */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[14];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_15() {   /* #:display:background */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[15];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_16() {   /* #:display:foreground */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[16];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_17() {   /* #:display:windows */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[17];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_18() {   /* #:display:bitmaps */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[18];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_19() {   /* #:display:menus */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[19];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_20() {   /* #:display:colors */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[20];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_21() {   /* #:display:font-names */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[21];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_22() {   /* #:display:pattern-bitmaps */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[22];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_23() {   /* #:display:cursor-bitmaps */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[23];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_24() {   /* #:display:extend */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[24];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_25() {   /* #:display:graph-envs */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[25];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_26() {   /* #:display:current-selection */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[26];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_27() {   /* #:display:resource */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[27];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_28() {   /* #:display:named-cursors */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[28];
        (--rSp)->Val = (Ptr) 25;
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_29() {   /* #:display:stipple-bitmaps */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[29];
        (--rSp)->Val = (Ptr) 26;
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_30() {   /* #:color:name */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[30];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_31() {   /* #:color:red */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[31];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_32() {   /* #:color:green */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[32];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_33() {   /* #:color:blue */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[33];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_34() {   /* #:color:mutable */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[34];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_35() {   /* #:color:display */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[35];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_36() {   /* #:color:extend */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[36];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_37() {   /* #:graph-env:font */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[37];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_38() {   /* #:graph-env:line-style */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[38];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_39() {   /* #:graph-env:pattern */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[39];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_40() {   /* #:graph-env:mode */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[40];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_41() {   /* #:graph-env:foreground */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[41];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_42() {   /* #:graph-env:background */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[42];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_43() {   /* #:graph-env:clip-x */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[43];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_44() {   /* #:graph-env:clip-y */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[44];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_45() {   /* #:graph-env:clip-w */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[45];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_46() {   /* #:graph-env:clip-h */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[46];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_47() {   /* #:graph-env:bitmap */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[47];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_48() {   /* #:graph-env:display */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[48];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_49() {   /* #:graph-env:extend */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[49];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_50() {   /* #:graph-env:stipple */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[50];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_51() {   /* #:graph-env:fill-mode */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[51];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_52() {   /* #:event:make */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = ((Ptr) GLvirbitmap_53);
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        GIa4 = (Ptr) 10;
        {aRet = (GYvirbitmap[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbitmap_53() {   /* 101 */
   {    register Ptr aRet;
        (GIa1 + 1)->Val = GYvirbitmap[52];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbitmap_54() {   /* #:event:code */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[53];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_55() {   /* #:event:window */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[54];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_56() {   /* #:event:detail */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[55];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_57() {   /* #:event:gx */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[56];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_58() {   /* #:event:gy */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[57];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_59() {   /* #:event:x */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[58];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_60() {   /* #:event:y */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[59];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_61() {   /* #:event:w */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[60];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_62() {   /* #:event:h */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[61];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_63() {   /* #:event:b */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[62];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_64() {   /* #:bitmap:w */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[63];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_65() {   /* #:bitmap:h */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[64];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_66() {   /* #:bitmap:extend */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[65];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_67() {   /* #:bitmap:display */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[66];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_68() {   /* #:bitmap:stipple:data */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[67];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_69() {   /* #:image:rectangle:make */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirbitmap_70);
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 4;
        {aRet = (GYvirbitmap[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbitmap_70() {   /* 101 */
   {    register Ptr aRet;
        (GIa1 + 1)->Val = GYvirbitmap[68];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbitmap_71() {   /* #:image:rectangle:x */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[69];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_72() {   /* #:image:rectangle:y */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[70];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_73() {   /* #:image:rectangle:w */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[71];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_74() {   /* #:image:rectangle:h */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[72];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_75() {   /* #:image:rectangle:window:title */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[73];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_76() {   /* #:image:rectangle:window:hilited */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[74];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_77() {   /* #:image:rectangle:window:visible */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[75];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_78() {   /* #:image:rectangle:window:graph-env */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[76];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_79() {   /* #:image:rectangle:window:extend */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[77];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_80() {   /* #:image:rectangle:window:father */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[78];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_81() {   /* #:image:rectangle:window:properties */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[79];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_82() {   /* #:image:rectangle:window:cursor */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[80];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_83() {   /* #:image:rectangle:window:display */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[81];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_84() {   /* #:image:rectangle:window:subwindows */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[82];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_85() {   /* #:image:rectangle:window:events-list */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[83];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_86() {   /* #:image:rectangle:window:window-type */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[84];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_87() {   /* #:image:rectangle:window:graphic-properties */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[85];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_88() {   /* #:image:rectangle:window:state */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[86];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_89() {   /* #:menu:title */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[87];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_90() {   /* #:menu:itemlists */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[88];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_91() {   /* #:menu:display */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[89];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_92() {   /* #:menu:extend */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[90];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_93() {   /* #:menu:itemlist:name */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[91];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_94() {   /* #:menu:itemlist:active */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[92];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_95() {   /* #:menu:itemlist:items */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[93];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_96() {   /* #:menu:item:name */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[94];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_97() {   /* #:menu:item:active */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[95];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_98() {   /* #:menu:item:value */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[96];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_99() {   /* #:font-info:make */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = ((Ptr) GLvirbitmap_100);
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        GIa4 = (Ptr) 14;
        {aRet = (GYvirbitmap[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirbitmap_100() {  /* 101 */
   {    register Ptr aRet;
        (GIa1 + 1)->Val = GYvirbitmap[97];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbitmap_101() {  /* #:font-info:ascent */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[98];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_102() {  /* #:font-info:descent */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[99];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_103() {  /* #:font-info:angle */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[100];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_104() {  /* #:font-info:weight */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[101];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_105() {  /* #:font-info:minrbearing */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[102];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_106() {  /* #:font-info:minlbearing */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[103];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_107() {  /* #:font-info:minascent */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[104];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_108() {  /* #:font-info:mindescent */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[105];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_109() {  /* #:font-info:minwidth */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[106];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_110() {  /* #:font-info:maxrbearing */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[107];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_111() {  /* #:font-info:maxlbearing */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[108];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_112() {  /* #:font-info:maxascent */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[109];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_113() {  /* #:font-info:maxdescent */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[110];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_114() {  /* #:font-info:maxwidth */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirbitmap; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[111];
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
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_115() {  /* #:window:make */
   {    register Ptr aRet;
        GIa1 = GYvirbitmap[112];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirbitmap_116() {  /* #:window:background */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYvirbitmap; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[113];
        rA2 = (Ptr) 1;
        {aRet = (rLit[114] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = rNil;
        goto l_nlist_virbitmap_118;
l_nlist_virbitmap_117:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virbitmap_118:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virbitmap_117;}
        if (rA1 == rNil)        goto l_102;
        rA4 = (rSp->Val->Val + 2 + (Fix) 7)->Val;
        if (rA4 == rNil)        goto l_104;
        rA4 = (rSp->Val->Val + 2 + (Fix) 7)->Val;
        (rA4->Val + 2 + (Fix) 5)->Val = rA1->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        rA1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_102:
        rA4 = (rSp->Val->Val + 2 + (Fix) 7)->Val;
        if (rA4 == rNil)        goto l_106;
        rA1 = (rSp->Val->Val + 2 + (Fix) 7)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 5)->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_106:
        rA1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirbitmap_119() {  /* #:window:left */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = rA1;
        rA1 = GYvirbitmap[69];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirbitmap_120() {  /* #:window:top */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = rA1;
        rA1 = GYvirbitmap[70];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirbitmap_121() {  /* #:window:width */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = rA1;
        rA1 = GYvirbitmap[71];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirbitmap_122() {  /* #:window:height */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = rA1;
        rA1 = GYvirbitmap[72];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirbitmap_123() {  /* #:window:title */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = rA1;
        rA1 = GYvirbitmap[73];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirbitmap_124() {  /* #:window:hilited */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = rA1;
        rA1 = GYvirbitmap[74];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirbitmap_125() {  /* #:window:visible */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = rA1;
        rA1 = GYvirbitmap[75];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirbitmap_126() {  /* #:window:graph-env */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = rA1;
        rA1 = GYvirbitmap[76];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirbitmap_127() {  /* #:window:extend */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = rA1;
        rA1 = GYvirbitmap[77];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirbitmap_128() {  /* #:window:father */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = rA1;
        rA1 = GYvirbitmap[78];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirbitmap_129() {  /* #:window:properties */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = rA1;
        rA1 = GYvirbitmap[79];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirbitmap_130() {  /* #:window:cursor */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = rA1;
        rA1 = GYvirbitmap[80];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirbitmap_131() {  /* #:window:display */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = rA1;
        rA1 = GYvirbitmap[81];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirbitmap_132() {  /* #:window:subwindows */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = rA1;
        rA1 = GYvirbitmap[82];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirbitmap_133() {  /* #:window:events-list */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = rA1;
        rA1 = GYvirbitmap[83];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirbitmap_134() {  /* #:window:window-type */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = rA1;
        rA1 = GYvirbitmap[84];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirbitmap_135() {  /* #:window:graphic-properties */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = rA1;
        rA1 = GYvirbitmap[85];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLvirbitmap_136() {  /* #:window:state */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = rA1;
        rA1 = GYvirbitmap[86];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GDvirbitmap_137() {  /* trace #:display:make */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,115,116,117);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_138() {  /* trace #:display:name */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,2,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_139() {  /* trace #:display:package */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,4,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_140() {  /* trace #:display:device */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,5,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_141() {  /* trace #:display:xmax */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,6,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_142() {  /* trace #:display:ymax */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,7,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_143() {  /* trace #:display:eventmode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,8,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_144() {  /* trace #:display:prologuep */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,9,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_145() {  /* trace #:display:keyboard-focus-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,10,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_146() {  /* trace #:display:window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,11,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_147() {  /* trace #:display:graph-env */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,12,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_148() {  /* trace #:display:root-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,13,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_149() {  /* trace #:display:main-graph-env */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,14,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_150() {  /* trace #:display:background */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,15,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_151() {  /* trace #:display:foreground */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,16,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_152() {  /* trace #:display:windows */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,17,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_153() {  /* trace #:display:bitmaps */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,18,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_154() {  /* trace #:display:menus */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,19,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_155() {  /* trace #:display:colors */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,20,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_156() {  /* trace #:display:font-names */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,21,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_157() {  /* trace #:display:pattern-bitmaps */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,22,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_158() {  /* trace #:display:cursor-bitmaps */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,23,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_159() {  /* trace #:display:extend */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,24,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_160() {  /* trace #:display:graph-envs */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,25,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_161() {  /* trace #:display:current-selection */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,26,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_162() {  /* trace #:display:resource */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,27,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_163() {  /* trace #:display:named-cursors */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,28,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_164() {  /* trace #:display:stipple-bitmaps */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,29,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_165() {  /* trace #:color:name */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,30,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_166() {  /* trace #:color:red */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,31,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_167() {  /* trace #:color:green */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,32,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_168() {  /* trace #:color:blue */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,33,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_169() {  /* trace #:color:mutable */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,34,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_170() {  /* trace #:color:display */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,35,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_171() {  /* trace #:color:extend */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,36,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_172() {  /* trace #:graph-env:font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,37,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_173() {  /* trace #:graph-env:line-style */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,38,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_174() {  /* trace #:graph-env:pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,39,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_175() {  /* trace #:graph-env:mode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,40,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_176() {  /* trace #:graph-env:foreground */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,41,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_177() {  /* trace #:graph-env:background */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,42,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_178() {  /* trace #:graph-env:clip-x */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,43,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_179() {  /* trace #:graph-env:clip-y */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,44,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_180() {  /* trace #:graph-env:clip-w */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,45,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_181() {  /* trace #:graph-env:clip-h */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,46,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_182() {  /* trace #:graph-env:bitmap */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,47,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_183() {  /* trace #:graph-env:display */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,48,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_184() {  /* trace #:graph-env:extend */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,49,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_185() {  /* trace #:graph-env:stipple */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,50,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_186() {  /* trace #:graph-env:fill-mode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,51,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_187() {  /* trace #:event:make */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,119,116,117);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_188() {  /* trace #:event:code */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,53,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_189() {  /* trace #:event:window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,54,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_190() {  /* trace #:event:detail */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,55,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_191() {  /* trace #:event:gx */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,56,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_192() {  /* trace #:event:gy */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,57,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_193() {  /* trace #:event:x */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,58,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_194() {  /* trace #:event:y */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,59,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_195() {  /* trace #:event:w */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,60,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_196() {  /* trace #:event:h */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,61,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_197() {  /* trace #:event:b */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,62,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_198() {  /* trace #:bitmap:w */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,63,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_199() {  /* trace #:bitmap:h */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,64,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_200() {  /* trace #:bitmap:extend */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,65,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_201() {  /* trace #:bitmap:display */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,66,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_202() {  /* trace #:bitmap:stipple:data */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,67,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_203() {  /* trace #:image:rectangle:make */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,120,116,117);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_204() {  /* trace #:image:rectangle:x */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,69,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_205() {  /* trace #:image:rectangle:y */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,70,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_206() {  /* trace #:image:rectangle:w */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,71,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_207() {  /* trace #:image:rectangle:h */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,72,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_208() {  /* trace #:image:rectangle:window:title */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,73,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_209() {  /* trace #:image:rectangle:window:hilited */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,74,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_210() {  /* trace #:image:rectangle:window:visible */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,75,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_211() {  /* trace #:image:rectangle:window:graph-env */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,76,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_212() {  /* trace #:image:rectangle:window:extend */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,77,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_213() {  /* trace #:image:rectangle:window:father */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,78,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_214() {  /* trace #:image:rectangle:window:properties */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,79,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_215() {  /* trace #:image:rectangle:window:cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,80,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_216() {  /* trace #:image:rectangle:window:display */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,81,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_217() {  /* trace #:image:rectangle:window:subwindows */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,82,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_218() {  /* trace #:image:rectangle:window:events-list */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,83,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_219() {  /* trace #:image:rectangle:window:window-type */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,84,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_220() {  /* trace #:image:rectangle:window:graphic-properties */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,85,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_221() {  /* trace #:image:rectangle:window:state */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,86,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_222() {  /* trace #:menu:title */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,87,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_223() {  /* trace #:menu:itemlists */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,88,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_224() {  /* trace #:menu:display */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,89,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_225() {  /* trace #:menu:extend */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,90,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_226() {  /* trace #:menu:itemlist:name */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,91,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_227() {  /* trace #:menu:itemlist:active */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,92,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_228() {  /* trace #:menu:itemlist:items */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,93,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_229() {  /* trace #:menu:item:name */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,94,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_230() {  /* trace #:menu:item:active */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,95,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_231() {  /* trace #:menu:item:value */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,96,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_232() {  /* trace #:font-info:make */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,121,116,117);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_233() {  /* trace #:font-info:ascent */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,98,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_234() {  /* trace #:font-info:descent */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,99,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_235() {  /* trace #:font-info:angle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,100,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_236() {  /* trace #:font-info:weight */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,101,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_237() {  /* trace #:font-info:minrbearing */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,102,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_238() {  /* trace #:font-info:minlbearing */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,103,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_239() {  /* trace #:font-info:minascent */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,104,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_240() {  /* trace #:font-info:mindescent */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,105,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_241() {  /* trace #:font-info:minwidth */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,106,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_242() {  /* trace #:font-info:maxrbearing */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,107,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_243() {  /* trace #:font-info:maxlbearing */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,108,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_244() {  /* trace #:font-info:maxascent */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,109,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_245() {  /* trace #:font-info:maxdescent */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,110,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_246() {  /* trace #:font-info:maxwidth */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,111,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_247() {  /* trace #:window:make */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,122,116,123);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_248() {  /* trace #:window:background */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,113,116,118);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_249() {  /* trace #:window:left */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,124,116,123);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_250() {  /* trace #:window:top */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,125,116,123);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_251() {  /* trace #:window:width */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,126,116,123);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_252() {  /* trace #:window:height */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,127,116,123);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_253() {  /* trace #:window:title */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,128,116,123);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_254() {  /* trace #:window:hilited */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,129,116,123);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_255() {  /* trace #:window:visible */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,130,116,123);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_256() {  /* trace #:window:graph-env */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,131,116,123);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_257() {  /* trace #:window:extend */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,132,116,123);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_258() {  /* trace #:window:father */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,133,116,123);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_259() {  /* trace #:window:properties */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,134,116,123);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_260() {  /* trace #:window:cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,135,116,123);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_261() {  /* trace #:window:display */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,136,116,123);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_262() {  /* trace #:window:subwindows */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,137,116,123);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_263() {  /* trace #:window:events-list */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,138,116,123);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_264() {  /* trace #:window:window-type */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,139,116,123);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_265() {  /* trace #:window:graphic-properties */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,140,116,123);
  lRet:  return (aRet);}}

static Ptr GDvirbitmap_266() {  /* trace #:window:state */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirbitmap,141,116,123);
  lRet:  return (aRet);}}

