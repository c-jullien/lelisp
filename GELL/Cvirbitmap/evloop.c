/* GELL 15.26: source file for the module: "evloop" */
/*             translation done:           "Tue Aug  24 93 10:49:33 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "evloop.h" 

static Ptr GLevloop_1() {       /* evloop_set_timeout */
   {    register Ptr aRet;
        {long callg_retv;
         long callg_arg1;
         long callg_arg2;
         callg_arg1 = ((Fix) GIa1);
         callg_arg2 = ((Fix) GIa2);
         callg_retv = ((long) evloop_set_timeout(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_2() {       /* evloop_build_mask */
   {    register Ptr aRet;
        {Ptr callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         callg_arg1 = ((Ptr) (GIa1->Val)+2);
         callg_arg2 = ((Fix) GIa2);
         callg_retv = ((Ptr) evloop_build_mask(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) callg_retv);
        }
l_101:
        {aRet = (GYevloop[0] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_3() {       /* evloop_select_in */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Ptr) (GIsp->Val->Val)+2);
         callg_retv = ((long) evloop_select_in(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_4() {       /* evloop_busy_select */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Ptr) (GIsp->Val->Val)+2);
         callg_retv = ((long) evloop_busy_select(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_5() {       /* evloop_add_file_descriptor */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Fix) GIsp->Val);
         callg_retv = ((long) evloop_add_file_descriptor(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_6() {       /* evloop_remove_file_descriptor */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Fix) GIsp->Val);
         callg_retv = ((long) evloop_remove_file_descriptor(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_7() {       /* evloop_init */
   {    register Ptr aRet;
        {Ptr callg_retv;
         callg_retv = ((Ptr) evloop_init());
         GIa1 = ((Ptr) callg_retv);
        }
l_101:
        {aRet = (GYevloop[0] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_8() {       /* evloop_mask_to_fds */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Ptr) (GIsp->Val->Val)+2);
         callg_retv = ((long) evloop_mask_to_fds(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_9() {       /* evloop_get_errno */
   {    register Ptr aRet;
        {long callg_retv;
         callg_retv = ((long) evloop_get_errno());
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_10() {      /* evloop_get_out_mask */
   {    register Ptr aRet;
        {Ptr callg_retv;
         callg_retv = ((Ptr) evloop_get_out_mask());
         GIa1 = ((Ptr) callg_retv);
        }
l_101:
        {aRet = (GYevloop[0] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_11() {      /* evloop_select_in_out */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         callg_arg1 = llrt_vag((GIsp + 3)->Val);
         callg_arg2 = llrt_vag((GIsp + 2)->Val);
         callg_arg3 = ((Ptr) ((GIsp + 1)->Val->Val)+2);
         callg_arg4 = ((Ptr) (GIsp->Val->Val)+2);
         callg_retv = ((long) evloop_select_in_out(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_12() {      /* evloop_test_if_valid_fd */
   {    register Ptr aRet;
        {long callg_retv;
         long callg_arg1;
         long callg_arg2;
         callg_arg1 = ((Fix) GIa1);
         callg_arg2 = ((Fix) GIa2);
         callg_retv = ((long) evloop_test_if_valid_fd(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_13() {      /* is_ll_fg */
   {    register Ptr aRet;
        {long callg_retv;
         callg_retv = ((long) is_ll_fg());
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_14() {      /* is_ll_foreground */
   {    register Ptr aRet;
        {long callg_retv;
         callg_retv = ((long) is_ll_foreground());
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_15() {      /* #:event-loop:tty-input */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLevloop_17);
        {aRet = ((Ptr) GLevloop_13); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_17() {      /* call_evloop_16 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 != (Ptr) 0)     {aRet = ((Ptr) GLevloop_18); goto lRet;}
        (--rSp)->Val = ((Ptr) GLevloop_20);
        {aRet = ((Ptr) GLevloop_14); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_20() {      /* call_evloop_19 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLevloop_18); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_18() {      /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1;
        if (rA1 != (Ptr) 1)     goto l_103;
        if (rLit[1]->Val == rLit[2])    goto l_105;
        rSp += (Fix) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
l_105:
        rLit[4]->Val = rLit[5];
        rA1 = rLit[5];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLevloop_21() {      /* #:tty:evloop:tyi */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLevloop_23);
        {aRet = (GYevloop[6] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_23() {      /* call_evloop_22 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLevloop_25);
        {aRet = (GYevloop[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_25() {      /* call_evloop_24 */
   {    register Ptr aRet, rNil;
        rNil = GInil;
        if (GIa1 != rNil)       { aRet = (GIsp++)->Val; goto lRet;}
        if (GYevloop[8]->Val == rNil)   {aRet = ((Ptr) GLevloop_26); goto lRet;}
        {aRet = ((Ptr) GLevloop_27); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_27() {      /* 104 */
   {    register Ptr aRet, *rLit;
        rLit = GYevloop;
        if (rLit[4]->Val != GInil)      {aRet = ((Ptr) GLevloop_28); goto lRet;}
        (--GIsp)->Val = rLit[9]->Val;
        {aRet = ((Ptr) GLevloop_29); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_29() {      /* 106 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYevloop; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLevloop_30); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLevloop_31);
        (--rSp)->Val = rLit[10];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLevloop_31() {      /* 108 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLevloop_29); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_30() {      /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLevloop_33);
        {aRet = (GYevloop[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_33() {      /* call_evloop_32 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLevloop_27);
        {aRet = (GYevloop[6] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_28() {      /* 105 */
   {    register Ptr aRet;
        GYevloop[4]->Val = GInil;
        {aRet = ((Ptr) GLevloop_26); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_26() {      /* 103 */
   {    register Ptr aRet;
        {aRet = (GYevloop[3] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_34() {      /* #:event-loop:init */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLevloop_36);
        {aRet = ((Ptr) GLevloop_7); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_36() {      /* call_evloop_35 */
   {    register Ptr aRet;
        GYevloop[13]->Val = GIa1;
        (--GIsp)->Val = ((Ptr) GLevloop_38);
        {aRet = ((Ptr) GLevloop_10); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_38() {      /* call_evloop_37 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rLit[14]->Val = rA1;
        rLit[15]->Val = (Ptr) 1;
        rLit[16]->Val = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLevloop_39);
        rA2 = (Ptr) 0;
        rA1 = rLit[17];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rA2 = rA1;
        rA1 = (Ptr) 0;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLevloop_39() {      /* 101 */
   {    register Ptr aRet, *rLit;
        rLit = GYevloop;
        rLit[19]->Val = GIa1;
        rLit[20]->Val = GInil;
        GIa2 = (Ptr) 0;
        GIa1 = (Ptr) 1;
        (--GIsp)->Val = ((Ptr) GLevloop_41);
        {aRet = (rLit[21] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_41() {      /* call_evloop_40 */
   {    register Ptr aRet, *rLit;
        rLit = GYevloop;
        rLit[22]->Val = GIa1;
        GIa2 = (Ptr) 0;
        GIa1 = (Ptr) 1;
        (--GIsp)->Val = ((Ptr) GLevloop_43);
        {aRet = (rLit[21] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_43() {      /* call_evloop_42 */
   {    register Ptr aRet, *rLit;
        rLit = GYevloop;
        rLit[23]->Val = GIa1;
        rLit[8]->Val = rLit[5];
        GIa1 = rLit[5];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_44() {      /* evloop-init */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLevloop_46);
        {aRet = ((Ptr) GLevloop_34); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_46() {      /* call_evloop_45 */
   {    register Ptr aRet, *rLit;
        rLit = GYevloop;
        rLit[1]->Val = rLit[2];
        GIa1 = rLit[2];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_47() {      /* evloop-initialized-p */
   {    register Ptr aRet;
        GIa1 = GYevloop[8]->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_48() {      /* evloop-restart */
   {    register Ptr aRet, *rLit;
        rLit = GYevloop;
        rLit[1]->Val = rLit[2];
        GIa1 = rLit[2];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_49() {      /* evloop-stop */
   {    register Ptr aRet, *rLit;
        rLit = GYevloop;
        rLit[1]->Val = rLit[24];
        GIa1 = rLit[24];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_50() {      /* evloop-set-timeout */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rBfloat;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 >= rBfloat)     goto l_103;
        if ((Fix) (rA1) >= (Fix) 0)     goto l_102;
l_103:
        GIa3 = rA1;
        rA2 = rLit[25];
        rA1 = rLit[26];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val >= rBfloat)  goto l_106;
        if ((Fix) ((rSp + 1)->Val) >= (Fix) 0)  goto l_105;
l_106:
        GIa3 = (rSp + 1)->Val;
        rA2 = rLit[25];
        rA1 = rLit[26];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_105:
        rA2 = (rSp + 1)->Val;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLevloop_52);
        {aRet = ((Ptr) GLevloop_1); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLevloop_52() {      /* call_evloop_51 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYevloop[5];
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_53() {      /* evloop-select */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLevloop_55);
        {aRet = (GYevloop[27] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_55() {      /* call_evloop_54 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rNil;
        GIa2 = rLit[28];
        rA1 = rLit[12];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        if ((Fix) (rLit[15]->Val) > (Fix) 0)    goto l_105;
        if ((Fix) (rLit[16]->Val) <= (Fix) 0)   {aRet = ((Ptr) GLevloop_56); goto lRet;}
l_105:
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        if ((Fix) (rLit[16]->Val) <= (Fix) 0)   goto l_107;
        (rSp + 1)->Val = rLit[5];
l_107:
        if ((rSp + 1)->Val == rNil)     {aRet = ((Ptr) GLevloop_57); goto lRet;}
        (--rSp)->Val = ((Ptr) GLevloop_58);
        (--rSp)->Val = rLit[13]->Val;
        (--rSp)->Val = rLit[14]->Val;
        (--rSp)->Val = rLit[22]->Val;
        (--rSp)->Val = rLit[23]->Val;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLevloop_11); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLevloop_58() {      /* 110 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLevloop_59); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_57() {      /* 108 */
   {    register Ptr aRet, *rLit;
        rLit = GYevloop;
        GIa2 = rLit[22]->Val;
        GIa1 = rLit[13]->Val;
        (--GIsp)->Val = ((Ptr) GLevloop_61);
        {aRet = ((Ptr) GLevloop_3); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_61() {      /* call_evloop_60 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLevloop_59); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_59() {      /* 109 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rSp->Val = rA4;
        rA1 = rA4;
        if (rA1 != (Ptr) ((UFix) 0xffff))       goto l_112;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLevloop_62); goto lRet;}
l_112:
        if (rA1 != (Ptr) 0)     {aRet = ((Ptr) GLevloop_63); goto lRet;}
        if (rLit[29]->Val == GInil)     {aRet = ((Ptr) GLevloop_64); goto lRet;}
        (--rSp)->Val = ((Ptr) GLevloop_64);
        (--rSp)->Val = rLit[29]->Val;
        rA4 = (Ptr) 1;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLevloop_64() {      /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYevloop[5];
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_63() {      /* 113 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYevloop; rSp = GIsp; rNil = GInil;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rLit[22]->Val;
        (--rSp)->Val = rLit[23]->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        {aRet = ((Ptr) GLevloop_65); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_65() {      /* 118 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBcons;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        if ((Fix) ((rSp + 6)->Val) >= (Fix) ((rSp + 7)->Val))   {aRet = ((Ptr) GLevloop_66); goto lRet;}
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) ((rSp + 6)->Val))->Val;
        (rSp + 2)->Val = rA4;
        if ((rSp + 8)->Val == rNil)     goto l_122;
        rA3 = ((rSp + 4)->Val->Val + 2 + (Fix) ((rSp + 6)->Val))->Val;
        if (rA3 != (Ptr) 0)     goto l_120;
l_122:
        rA2 = rLit[19]->Val;
        rA1 = rA4;
        rA1 = llrt_call_assq (rA1, rA2, rBcons, rNil);
        (rSp + 3)->Val = rA1;
        goto l_121;
l_120:
        rA2 = rLit[20]->Val;
        rA1 = rA4;
        rA1 = llrt_call_assq (rA1, rA2, rBcons, rNil);
        (rSp + 3)->Val = rA1;
l_121:
        rA4 = (rA1 + 1)->Val;
        (rSp + 1)->Val = rA4->Val;
        rA3 = (rA1 + 1)->Val;
        rSp->Val = (rA3 + 1)->Val;
        if ((rSp + 1)->Val == rNil)     {aRet = ((Ptr) GLevloop_67); goto lRet;}
        (--rSp)->Val = ((Ptr) GLevloop_67);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLevloop_67() {      /* 124 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 6)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 6)->Val = rA4;
        {aRet = ((Ptr) GLevloop_65); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLevloop_66() {      /* 119 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 7;
        GIa1 = GYevloop[5];
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_56() {      /* 103 */
   {    register Ptr aRet, *rLit;
        rLit = GYevloop;
        GIa3 = GInil;
        GIa2 = rLit[31];
        GIa1 = rLit[12];
        (--GIsp)->Val = (rLit[32] + 2)->Val;
        {aRet = (rLit[33] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_68() {      /* evloop-wait */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLevloop_70);
        {aRet = (GYevloop[27] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_70() {      /* call_evloop_69 */
   {    register Ptr aRet, *rLit, rA1, rNil;
        rLit = GYevloop; rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rNil;
        GIa2 = rLit[28];
        rA1 = rLit[34];
        GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        if ((Fix) (rLit[15]->Val) <= (Fix) 0)   {aRet = ((Ptr) GLevloop_71); goto lRet;}
        GIa2 = rLit[22]->Val;
        rA1 = rLit[13]->Val;
        (--GIsp)->Val = ((Ptr) GLevloop_73);
        {aRet = ((Ptr) GLevloop_3); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLevloop_73() {      /* call_evloop_72 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 != (Ptr) ((UFix) 0xffff))       goto l_106;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLevloop_62); goto lRet;}
l_106:
        if (rA1 != (Ptr) 0)     {aRet = ((Ptr) GLevloop_74); goto lRet;}
        if (rLit[29]->Val == GInil)     {aRet = ((Ptr) GLevloop_75); goto lRet;}
        (--rSp)->Val = ((Ptr) GLevloop_75);
        (--rSp)->Val = rLit[29]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_75() {      /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYevloop[5];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_74() {      /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil, rBcons;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        if (rA1 != (Ptr) 1)     goto l_112;
        rA1 = (rLit[22]->Val->Val + 2 + (Fix) 0)->Val;
        rA2 = rLit[19]->Val;
        rSp += (Fix) 1;
        rA1 = llrt_call_assq (rA1, rA2, rBcons, rNil);
        {aRet = (rSp++)->Val; goto lRet;}
l_112:
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
l_114:
        if ((Fix) ((rSp + 3)->Val) >= (Fix) ((rSp + 4)->Val))   goto l_115;
        rA4 = (rLit[22]->Val->Val + 2 + (Fix) ((rSp + 3)->Val))->Val;
        rSp->Val = rA4;
        rA2 = rLit[19]->Val;
        rA1 = rA4;
        rA1 = llrt_call_assq (rA1, rA2, rBcons, rNil);
        (rSp + 1)->Val = rA1;
        rA2 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (rSp + 2)->Val = rA1;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 3)->Val = rA4;
        goto l_114;
l_115:
        rA1 = (rSp + 2)->Val;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLevloop_71() {      /* 103 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_76() {      /* evloop-readp */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLevloop_78);
        {aRet = (GYevloop[27] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_78() {      /* call_evloop_77 */
   {    register Ptr aRet, *rLit, rA1, rNil;
        rLit = GYevloop; rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rNil;
        GIa2 = rLit[28];
        rA1 = rLit[35];
        GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        if ((Fix) (rLit[15]->Val) <= (Fix) 0)   {aRet = ((Ptr) GLevloop_79); goto lRet;}
        GIa2 = rLit[22]->Val;
        rA1 = rLit[13]->Val;
        (--GIsp)->Val = ((Ptr) GLevloop_81);
        {aRet = ((Ptr) GLevloop_4); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLevloop_81() {      /* call_evloop_80 */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) ((UFix) 0xffff))      {aRet = ((Ptr) GLevloop_82); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLevloop_84);
        {aRet = ((Ptr) GLevloop_62); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_84() {      /* call_evloop_83 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_82() {      /* 106 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != (Ptr) 0)     goto l_107;
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
l_107:
        rA1 = GYevloop[5];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLevloop_79() {      /* 103 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_85() {      /* #:event-loop:test-if-function-exist */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        GIa1 = rA2;
        (--rSp)->Val = ((Ptr) GLevloop_87);
        {aRet = (GYevloop[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_87() {      /* call_evloop_86 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        goto l_101;
        GIa3 = (rSp + 1)->Val;
        GIa2 = GYevloop[37];
        rA1 = rSp->Val;
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLevloop_88() {      /* evloop-add-input */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLevloop_90);
        {aRet = (GYevloop[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_90() {      /* call_evloop_89 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rNil;
        rA2 = rLit[28];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_102:
        if (rSp->Val < GIbfloat)        goto l_104;
        GIa3 = rSp->Val;
        rA2 = rLit[39];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_104:
        rA2 = rLit[19]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_assq (rA1, rA2, GIbcons, rNil);
        if (rA1 != rNil)        {aRet = ((Ptr) GLevloop_91); goto lRet;}
        rA2 = (rSp + 1)->Val;
        rA1 = rLit[38];
        (--rSp)->Val = ((Ptr) GLevloop_93);
        {aRet = ((Ptr) GLevloop_85); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLevloop_93() {      /* call_evloop_92 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYevloop; rSp = GIsp; rA4 = GIa4;
        rA4 = rLit[15]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rLit[15]->Val = rA4;
        GIa2 = rSp->Val;
        GIa1 = rLit[13]->Val;
        (--rSp)->Val = ((Ptr) GLevloop_95);
        {aRet = ((Ptr) GLevloop_5); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLevloop_95() {      /* call_evloop_94 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = (rSp + 2)->Val;
        rA1 = (rSp + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa3 = rLit[19]->Val;
        rA2 = rA1;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLevloop_97);
        {aRet = (rLit[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLevloop_97() {      /* call_evloop_96 */
   {    register Ptr aRet, *rLit, rA4;
        rLit = GYevloop; rA4 = GIa4;
        rLit[19]->Val = GIa1;
        rA4 = rLit[15]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rLit[16]->Val)));
        GIa2 = (Ptr) 0;
        GIa1 = rA4;
        (--GIsp)->Val = ((Ptr) GLevloop_99);
        {aRet = (rLit[21] + 2)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLevloop_99() {      /* call_evloop_98 */
   {    register Ptr aRet, *rLit, rA4;
        rLit = GYevloop; rA4 = GIa4;
        rLit[22]->Val = GIa1;
        rA4 = rLit[15]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rLit[16]->Val)));
        GIa2 = (Ptr) 0;
        GIa1 = rA4;
        (--GIsp)->Val = ((Ptr) GLevloop_101);
        {aRet = (rLit[21] + 2)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLevloop_101() {     /* call_evloop_100 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYevloop; rSp = GIsp;
        rLit[23]->Val = GIa1;
        GIa1 = rLit[5];
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_91() {      /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_102() {     /* evloop-remove-input */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLevloop_104);
        {aRet = (GYevloop[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_104() {     /* call_evloop_103 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rNil;
        rA2 = rLit[28];
        rA1 = rLit[41];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA2 = rLit[19]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_assq (rA1, rA2, GIbcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLevloop_105); goto lRet;}
        rA4 = rLit[15]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rLit[15]->Val = rA4;
        rA2 = rSp->Val;
        rA1 = rLit[13]->Val;
        (--rSp)->Val = ((Ptr) GLevloop_107);
        {aRet = ((Ptr) GLevloop_6); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLevloop_107() {     /* call_evloop_106 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rLit[19]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_assq (rA1, rA2, GIbcons, GInil);
        rA2 = rLit[19]->Val;
        (--rSp)->Val = ((Ptr) GLevloop_109);
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLevloop_109() {     /* call_evloop_108 */
   {    register Ptr aRet;
        GYevloop[19]->Val = GIa1;
        {aRet = ((Ptr) GLevloop_105); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_105() {     /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYevloop[5];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_110() {     /* evloop-change-manage-function */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < GIbfloat)     goto l_102;
        GIa3 = rA1;
        rA2 = rLit[39];
        rA1 = rLit[43];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_102:
        rA2 = (rSp + 1)->Val;
        rA1 = rLit[43];
        (--rSp)->Val = ((Ptr) GLevloop_112);
        {aRet = ((Ptr) GLevloop_85); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLevloop_112() {     /* call_evloop_111 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        rA2 = rLit[19]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_assq (rA1, rA2, GIbcons, rNil);
        if (rA1 != rNil)        goto l_103;
        GIa3 = rSp->Val;
        rA2 = rLit[44];
        rA1 = rLit[43];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLevloop_113); goto lRet;}
l_103:
        rA2 = rLit[19]->Val;
        (--rSp)->Val = ((Ptr) GLevloop_115);
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLevloop_115() {     /* call_evloop_114 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rLit[19]->Val = rA1;
        rA2 = (rSp + 2)->Val;
        rA1 = (rSp + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa3 = rLit[19]->Val;
        rA2 = rA1;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLevloop_117);
        {aRet = (rLit[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLevloop_117() {     /* call_evloop_116 */
   {    register Ptr aRet;
        GYevloop[19]->Val = GIa1;
        {aRet = ((Ptr) GLevloop_113); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_113() {     /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYevloop[5];
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_118() {     /* evloop-disallow-tty-input */
   {    register Ptr aRet, *rLit, rA1, rNil;
        rLit = GYevloop; rA1 = GIa1; rNil = GInil;
        GIa2 = rLit[19]->Val;
        rA1 = (Ptr) 0;
        rA1 = llrt_call_assq (rA1, GIa2, GIbcons, rNil);
        if (rA1 == rNil)        goto l_101;
        rA1 = (Ptr) 0;
        {aRet = (rLit[41] + 2)->Val; goto lRet;}
l_101:
        rA1 = rNil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLevloop_119() {     /* evloop-allow-tty-input */
   {    register Ptr aRet, *rLit, rA1, rA2, rNil;
        rLit = GYevloop; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        rA2 = rLit[19]->Val;
        rA1 = (Ptr) 0;
        rA1 = llrt_call_assq (rA1, rA2, GIbcons, rNil);
        if (rA1 != rNil)        goto l_101;
        GIa3 = (Ptr) 0;
        rA2 = rLit[17];
        rA1 = (Ptr) 0;
        {aRet = (rLit[38] + 2)->Val; goto lRet;}
l_101:
        rA1 = rNil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLevloop_120() {     /* evloop-input-managed-p */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        (--rSp)->Val = rA1;
        if (rA1 < GIbfloat)     goto l_102;
        GIa3 = rA1;
        rA2 = rLit[39];
        rA1 = rLit[45];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_102:
        rA2 = rLit[19]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_assq (rA1, rA2, GIbcons, rNil);
        if (rA1 == rNil)        goto l_103;
        rA1 = rLit[5];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLevloop_62() {      /* #:event-loop:select-error */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLevloop_122);
        {aRet = ((Ptr) GLevloop_9); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_122() {     /* call_evloop_121 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GInil;
        if (GIa1 != (Ptr) 1)    {aRet = ((Ptr) GLevloop_123); goto lRet;}
        (--rSp)->Val = GYevloop[19]->Val;
        {aRet = ((Ptr) GLevloop_124); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_124() {     /* 103 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLevloop_125); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA1 = rSp->Val;
        GIa2 = (Ptr) 1;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLevloop_127);
        {aRet = ((Ptr) GLevloop_128); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLevloop_127() {     /* call_evloop_126 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       {aRet = ((Ptr) GLevloop_129); goto lRet;}
        rA1 = rSp->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 2)->Val = rA1;
        rA1 = rSp->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLevloop_129);
        {aRet = (GYevloop[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLevloop_129() {     /* 106 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLevloop_124); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_125() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYevloop; rSp = GIsp;
        rSp += (Fix) 1;
        GIa3 = rSp->Val;
        GIa2 = rLit[46];
        GIa1 = rLit[47];
        (--rSp)->Val = ((Ptr) GLevloop_131);
        {aRet = (rLit[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_131() {     /* call_evloop_130 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = (GYevloop[6] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_123() {     /* 102 */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) 3)    {aRet = ((Ptr) GLevloop_132); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLevloop_134);
        {aRet = (GYevloop[32] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_134() {     /* call_evloop_133 */
   {    register Ptr aRet, *rLit;
        rLit = GYevloop;
        GIa3 = rLit[19]->Val;
        GIa2 = rLit[48];
        GIa1 = rLit[47];
        (--GIsp)->Val = ((Ptr) GLevloop_136);
        {aRet = (rLit[33] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_136() {     /* call_evloop_135 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = (GYevloop[6] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_132() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_137() {     /* evloop-set-timeout-handler */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLevloop_138); goto lRet;}
        GIa2 = rA1;
        rA1 = GYevloop[49];
        (--rSp)->Val = ((Ptr) GLevloop_138);
        {aRet = ((Ptr) GLevloop_85); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLevloop_138() {     /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYevloop; rSp = GIsp;
        rLit[29]->Val = rSp->Val;
        GIa1 = rLit[5];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_128() {     /* #:event-loop:test-if-valid-fd */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLevloop_140);
        {aRet = ((Ptr) GLevloop_12); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_140() {     /* call_evloop_139 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != (Ptr) 1)     goto l_101;
        rA1 = GYevloop[5];
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLevloop_141() {     /* evloop-add-output */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLevloop_143);
        {aRet = (GYevloop[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_143() {     /* call_evloop_142 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rNil;
        rA2 = rLit[28];
        rA1 = rLit[50];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_102:
        if (rSp->Val < GIbfloat)        goto l_104;
        GIa3 = rSp->Val;
        rA2 = rLit[39];
        rA1 = rLit[50];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_104:
        rA2 = rLit[20]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_assq (rA1, rA2, GIbcons, rNil);
        if (rA1 != rNil)        {aRet = ((Ptr) GLevloop_144); goto lRet;}
        rA2 = (rSp + 1)->Val;
        rA1 = rLit[50];
        (--rSp)->Val = ((Ptr) GLevloop_146);
        {aRet = ((Ptr) GLevloop_85); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLevloop_146() {     /* call_evloop_145 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYevloop; rSp = GIsp; rA4 = GIa4;
        rA4 = rLit[16]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rLit[16]->Val = rA4;
        GIa2 = rSp->Val;
        GIa1 = rLit[14]->Val;
        (--rSp)->Val = ((Ptr) GLevloop_148);
        {aRet = ((Ptr) GLevloop_5); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLevloop_148() {     /* call_evloop_147 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = (rSp + 2)->Val;
        rA1 = (rSp + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa3 = rLit[20]->Val;
        rA2 = rA1;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLevloop_150);
        {aRet = (rLit[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLevloop_150() {     /* call_evloop_149 */
   {    register Ptr aRet, *rLit, rA4;
        rLit = GYevloop; rA4 = GIa4;
        rLit[20]->Val = GIa1;
        rA4 = rLit[15]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rLit[16]->Val)));
        GIa2 = (Ptr) 0;
        GIa1 = rA4;
        (--GIsp)->Val = ((Ptr) GLevloop_152);
        {aRet = (rLit[21] + 2)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLevloop_152() {     /* call_evloop_151 */
   {    register Ptr aRet, *rLit, rA4;
        rLit = GYevloop; rA4 = GIa4;
        rLit[22]->Val = GIa1;
        rA4 = rLit[15]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rLit[16]->Val)));
        GIa2 = (Ptr) 0;
        GIa1 = rA4;
        (--GIsp)->Val = ((Ptr) GLevloop_154);
        {aRet = (rLit[21] + 2)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLevloop_154() {     /* call_evloop_153 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYevloop; rSp = GIsp;
        rLit[23]->Val = GIa1;
        GIa1 = rLit[5];
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_144() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_155() {     /* evloop-remove-output */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLevloop_157);
        {aRet = (GYevloop[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_157() {     /* call_evloop_156 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rNil;
        rA2 = rLit[28];
        rA1 = rLit[51];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA2 = rLit[20]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_assq (rA1, rA2, GIbcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLevloop_158); goto lRet;}
        if (rSp->Val < GIbfloat)        goto l_106;
        GIa3 = rSp->Val;
        rA2 = rLit[39];
        rA1 = rLit[52];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        rA4 = rLit[16]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rLit[16]->Val = rA4;
        rA2 = rSp->Val;
        rA1 = rLit[14]->Val;
        (--rSp)->Val = ((Ptr) GLevloop_160);
        {aRet = ((Ptr) GLevloop_6); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLevloop_160() {     /* call_evloop_159 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rLit[20]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_assq (rA1, rA2, GIbcons, GInil);
        rA2 = rLit[20]->Val;
        (--rSp)->Val = ((Ptr) GLevloop_162);
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLevloop_162() {     /* call_evloop_161 */
   {    register Ptr aRet;
        GYevloop[20]->Val = GIa1;
        {aRet = ((Ptr) GLevloop_158); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_158() {     /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYevloop[5];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_163() {     /* evloop-change-output-manage-function */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < GIbfloat)     goto l_102;
        GIa3 = rA1;
        rA2 = rLit[39];
        rA1 = rLit[53];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_102:
        rA2 = (rSp + 1)->Val;
        rA1 = rLit[54];
        (--rSp)->Val = ((Ptr) GLevloop_165);
        {aRet = ((Ptr) GLevloop_85); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLevloop_165() {     /* call_evloop_164 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        rA2 = rLit[20]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_assq (rA1, rA2, GIbcons, rNil);
        if (rA1 != rNil)        goto l_103;
        GIa3 = rSp->Val;
        rA2 = rLit[44];
        rA1 = rLit[43];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLevloop_166); goto lRet;}
l_103:
        rA2 = rLit[20]->Val;
        (--rSp)->Val = ((Ptr) GLevloop_168);
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLevloop_168() {     /* call_evloop_167 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rLit[20]->Val = rA1;
        rA2 = (rSp + 2)->Val;
        rA1 = (rSp + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa3 = rLit[20]->Val;
        rA2 = rA1;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLevloop_170);
        {aRet = (rLit[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLevloop_170() {     /* call_evloop_169 */
   {    register Ptr aRet;
        GYevloop[20]->Val = GIa1;
        {aRet = ((Ptr) GLevloop_166); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_166() {     /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYevloop[5];
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_171() {     /* evloop-add-display */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYevloop; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[55];
        rA2 = (Ptr) 1;
        {aRet = (rLit[56] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = GInil;
        goto l_nlist_evloop_173;
l_nlist_evloop_172:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_evloop_173:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_evloop_172;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLevloop_174);
        (--rSp)->Val = rLit[57];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLevloop_174() {     /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYevloop; rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        rA4 = rA4->Val;
        if (rA4 != GInil)       goto l_103;
        rA4 = rLit[58];
l_103:
        (--rSp)->Val = rA4;
        (--rSp)->Val = GIa1;
        GIa2 = rA4;
        GIa1 = rLit[55];
        (--rSp)->Val = ((Ptr) GLevloop_176);
        {aRet = ((Ptr) GLevloop_85); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLevloop_176() {     /* call_evloop_175 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 1)->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 4;
        {aRet = (GYevloop[38] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_177() {     /* #:event-loop:evloop-display-manage */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLevloop_178);
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYevloop[59] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_178() {     /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLevloop_180);
        {aRet = (GYevloop[60] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_180() {     /* call_evloop_179 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLevloop_181); goto lRet;}
        (--rSp)->Val = ((Ptr) GLevloop_178);
        (--rSp)->Val = ((Ptr) GLevloop_182);
        GIa4 = (Ptr) 0;
        {aRet = (GYevloop[61] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_182() {     /* 105 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYevloop[62] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_181() {     /* 103 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_183() {     /* evloop-remove-display */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYevloop; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLevloop_184);
        (--rSp)->Val = rLit[57];
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_184() {     /* 101 */
   {    register Ptr aRet;
        {aRet = (GYevloop[41] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLevloop_185() {     /* evloop-display-managed-p */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYevloop; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLevloop_186);
        (--rSp)->Val = rLit[57];
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLevloop_186() {     /* 101 */
   {    register Ptr aRet;
        {aRet = (GYevloop[45] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDevloop_187() {     /* trace evloop_build_mask */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,63,64,65);
  lRet:  return (aRet);}}

static Ptr GDevloop_188() {     /* trace evloop_mask_to_fds */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,66,64,65);
  lRet:  return (aRet);}}

static Ptr GDevloop_189() {     /* trace #:event-loop:tty-input */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,17,64,67);
  lRet:  return (aRet);}}

static Ptr GDevloop_190() {     /* trace #:tty:evloop:tyi */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,68,64,69);
  lRet:  return (aRet);}}

static Ptr GDevloop_191() {     /* trace evloop-init */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,70,64,69);
  lRet:  return (aRet);}}

static Ptr GDevloop_192() {     /* trace evloop-initialized-p */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,27,64,69);
  lRet:  return (aRet);}}

static Ptr GDevloop_193() {     /* trace evloop-restart */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,71,64,69);
  lRet:  return (aRet);}}

static Ptr GDevloop_194() {     /* trace evloop-stop */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,32,64,69);
  lRet:  return (aRet);}}

static Ptr GDevloop_195() {     /* trace evloop-set-timeout */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,72,64,65);
  lRet:  return (aRet);}}

static Ptr GDevloop_196() {     /* trace evloop-select */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,12,64,69);
  lRet:  return (aRet);}}

static Ptr GDevloop_197() {     /* trace evloop-wait */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,34,64,69);
  lRet:  return (aRet);}}

static Ptr GDevloop_198() {     /* trace evloop-readp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,35,64,69);
  lRet:  return (aRet);}}

static Ptr GDevloop_199() {     /* trace evloop-add-input */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,38,64,73);
  lRet:  return (aRet);}}

static Ptr GDevloop_200() {     /* trace evloop-remove-input */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,41,64,67);
  lRet:  return (aRet);}}

static Ptr GDevloop_201() {     /* trace evloop-change-manage-function */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,74,64,73);
  lRet:  return (aRet);}}

static Ptr GDevloop_202() {     /* trace evloop-disallow-tty-input */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,75,64,69);
  lRet:  return (aRet);}}

static Ptr GDevloop_203() {     /* trace evloop-allow-tty-input */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,76,64,69);
  lRet:  return (aRet);}}

static Ptr GDevloop_204() {     /* trace evloop-input-managed-p */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,45,64,67);
  lRet:  return (aRet);}}

static Ptr GDevloop_205() {     /* trace evloop-set-timeout-handler */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,49,64,67);
  lRet:  return (aRet);}}

static Ptr GDevloop_206() {     /* trace evloop-add-output */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,50,64,73);
  lRet:  return (aRet);}}

static Ptr GDevloop_207() {     /* trace evloop-remove-output */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,51,64,67);
  lRet:  return (aRet);}}

static Ptr GDevloop_208() {     /* trace evloop-change-output-manage-function */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,53,64,73);
  lRet:  return (aRet);}}

static Ptr GDevloop_209() {     /* trace evloop-add-display */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,55,64,77);
  lRet:  return (aRet);}}

static Ptr GDevloop_210() {     /* trace #:event-loop:evloop-display-manage */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,58,64,67);
  lRet:  return (aRet);}}

static Ptr GDevloop_211() {     /* trace evloop-remove-display */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,78,64,67);
  lRet:  return (aRet);}}

static Ptr GDevloop_212() {     /* trace evloop-display-managed-p */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYevloop,79,64,67);
  lRet:  return (aRet);}}

