/* GELL 15.26: source file for the module: "x11_def" */
/*             translation done:           "Tue Aug  24 93 10:48:11 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "x11_def.h" 

static Ptr GLx11def_1() {       /* x11_create_stipple */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = GYx11def[0];
        GIa2 = (Ptr) 4;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {Ptr callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         long callg_arg3;
         Ptr callg_arg4;
         callg_arg1 = llrt_vag((GIsp + 3)->Val);
         callg_arg2 = ((Fix) (GIsp + 2)->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_arg4 = ((Ptr) (GIsp->Val->Val)+2);
         callg_retv = ((Ptr) x11_create_stipple(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         GIa1 = ((Ptr) callg_retv);
        }
l_102:
        GIsp += (Fix) 4;
        {aRet = (GYx11def[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_2() {       /* x11_set_stipple */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = llrt_vag((GIsp + 1)->Val);
         callg_retv = ((long) x11_set_stipple(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_3() {       /* x11_set_fill_mode */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_retv = ((long) x11_set_fill_mode(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_4() {       /* x11_fill_rectangle */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 7)    goto l_101;
        GIa1 = GYx11def[3];
        GIa2 = (Ptr) 7;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         long callg_arg4;
         long callg_arg5;
         long callg_arg6;
         long callg_arg7;
         callg_arg1 = llrt_vag((GIsp + 6)->Val);
         callg_arg2 = llrt_vag((GIsp + 5)->Val);
         callg_arg3 = llrt_vag((GIsp + 4)->Val);
         callg_arg4 = ((Fix) (GIsp + 3)->Val);
         callg_arg5 = ((Fix) (GIsp + 2)->Val);
         callg_arg6 = ((Fix) (GIsp + 1)->Val);
         callg_arg7 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_fill_rectangle(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 7;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_5() {       /* x11_fill_arc */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 9)    goto l_101;
        GIa1 = GYx11def[4];
        GIa2 = (Ptr) 9;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         long callg_arg4;
         long callg_arg5;
         long callg_arg6;
         long callg_arg7;
         long callg_arg8;
         long callg_arg9;
         callg_arg1 = llrt_vag((GIsp + 8)->Val);
         callg_arg2 = llrt_vag((GIsp + 7)->Val);
         callg_arg3 = llrt_vag((GIsp + 6)->Val);
         callg_arg4 = ((Fix) (GIsp + 5)->Val);
         callg_arg5 = ((Fix) (GIsp + 4)->Val);
         callg_arg6 = ((Fix) (GIsp + 3)->Val);
         callg_arg7 = ((Fix) (GIsp + 2)->Val);
         callg_arg8 = ((Fix) (GIsp + 1)->Val);
         callg_arg9 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_fill_arc(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8,callg_arg9));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 9;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_6() {       /* x11_fill_area */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 8)    goto l_101;
        GIa1 = GYx11def[5];
        GIa2 = (Ptr) 8;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         Ptr callg_arg5;
         long callg_arg6;
         long callg_arg7;
         long callg_arg8;
         callg_arg1 = llrt_vag((GIsp + 7)->Val);
         callg_arg2 = llrt_vag((GIsp + 6)->Val);
         callg_arg3 = llrt_vag((GIsp + 5)->Val);
         callg_arg4 = ((Ptr) ((GIsp + 4)->Val->Val)+2);
         callg_arg5 = ((Ptr) ((GIsp + 3)->Val->Val)+2);
         callg_arg6 = ((Fix) (GIsp + 2)->Val);
         callg_arg7 = ((Fix) (GIsp + 1)->Val);
         callg_arg8 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_fill_area(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 8;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_7() {       /* x11_fill_rectangles */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 11)   goto l_101;
        GIa1 = GYx11def[6];
        GIa2 = (Ptr) 11;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         Ptr callg_arg5;
         Ptr callg_arg6;
         Ptr callg_arg7;
         long callg_arg8;
         long callg_arg9;
         long callg_arg10;
         long callg_arg11;
         callg_arg1 = llrt_vag((GIsp + 10)->Val);
         callg_arg2 = llrt_vag((GIsp + 9)->Val);
         callg_arg3 = llrt_vag((GIsp + 8)->Val);
         callg_arg4 = ((Ptr) ((GIsp + 7)->Val->Val)+2);
         callg_arg5 = ((Ptr) ((GIsp + 6)->Val->Val)+2);
         callg_arg6 = ((Ptr) ((GIsp + 5)->Val->Val)+2);
         callg_arg7 = ((Ptr) ((GIsp + 4)->Val->Val)+2);
         callg_arg8 = ((Fix) (GIsp + 3)->Val);
         callg_arg9 = ((Fix) (GIsp + 2)->Val);
         callg_arg10 = ((Fix) (GIsp + 1)->Val);
         callg_arg11 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_fill_rectangles(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8,callg_arg9,callg_arg10,callg_arg11));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 11;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_8() {       /* x11_fill_arcs */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 10)   goto l_101;
        GIa1 = GYx11def[7];
        GIa2 = (Ptr) 10;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         Ptr callg_arg5;
         Ptr callg_arg6;
         Ptr callg_arg7;
         Ptr callg_arg8;
         Ptr callg_arg9;
         long callg_arg10;
         callg_arg1 = llrt_vag((GIsp + 9)->Val);
         callg_arg2 = llrt_vag((GIsp + 8)->Val);
         callg_arg3 = llrt_vag((GIsp + 7)->Val);
         callg_arg4 = ((Ptr) ((GIsp + 6)->Val->Val)+2);
         callg_arg5 = ((Ptr) ((GIsp + 5)->Val->Val)+2);
         callg_arg6 = ((Ptr) ((GIsp + 4)->Val->Val)+2);
         callg_arg7 = ((Ptr) ((GIsp + 3)->Val->Val)+2);
         callg_arg8 = ((Ptr) ((GIsp + 2)->Val->Val)+2);
         callg_arg9 = ((Ptr) ((GIsp + 1)->Val->Val)+2);
         callg_arg10 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_fill_arcs(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8,callg_arg9,callg_arg10));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 10;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_9() {       /* x11_xcolor */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {Ptr callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Fix) GIsp->Val);
         callg_retv = ((Ptr) x11_xcolor(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) callg_retv);
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GYx11def[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_10() {      /* x11_lispcolor */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_retv = ((long) x11_lispcolor(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_11() {      /* x11_xcolorp */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {Ptr callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Fix) GIsp->Val);
         callg_retv = ((Ptr) x11_xcolorp(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) callg_retv);
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GYx11def[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_12() {      /* x11_lispcolorp */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_retv = ((long) x11_lispcolorp(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_13() {      /* x11_query_color_from_pixel */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = ((Ptr) ((GIsp + 1)->Val->Val)+2);
         callg_retv = ((long) x11_query_color_from_pixel(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_14() {      /* x11_get_byte_line */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 6)    goto l_101;
        GIa1 = GYx11def[8];
        GIa2 = (Ptr) 6;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         Ptr callg_arg5;
         long callg_arg6;
         callg_arg1 = llrt_vag((GIsp + 5)->Val);
         callg_arg2 = llrt_vag((GIsp + 4)->Val);
         callg_arg3 = ((Fix) (GIsp + 3)->Val);
         callg_arg4 = ((Fix) (GIsp + 2)->Val);
         callg_arg5 = ((Ptr) ((GIsp + 1)->Val->Val)+2);
         callg_arg6 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_get_byte_line(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 6;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_15() {      /* x11_free_cursor */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_retv = ((long) x11_free_cursor(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_16() {      /* x11_set_byte_line */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 6)    goto l_101;
        GIa1 = GYx11def[9];
        GIa2 = (Ptr) 6;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         Ptr callg_arg5;
         long callg_arg6;
         callg_arg1 = llrt_vag((GIsp + 5)->Val);
         callg_arg2 = llrt_vag((GIsp + 4)->Val);
         callg_arg3 = ((Fix) (GIsp + 3)->Val);
         callg_arg4 = ((Fix) (GIsp + 2)->Val);
         callg_arg5 = ((Ptr) ((GIsp + 1)->Val->Val)+2);
         callg_arg6 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_set_byte_line(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 6;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_17() {      /* x11_byteref */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = GYx11def[10];
        GIa2 = (Ptr) 4;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         callg_arg1 = llrt_vag((GIsp + 3)->Val);
         callg_arg2 = llrt_vag((GIsp + 2)->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_arg4 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_byteref(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_18() {      /* x11_byteset */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 5)    goto l_101;
        GIa1 = GYx11def[11];
        GIa2 = (Ptr) 5;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         long callg_arg5;
         callg_arg1 = llrt_vag((GIsp + 4)->Val);
         callg_arg2 = llrt_vag((GIsp + 3)->Val);
         callg_arg3 = ((Fix) (GIsp + 2)->Val);
         callg_arg4 = ((Fix) (GIsp + 1)->Val);
         callg_arg5 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_byteset(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 5;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_19() {      /* x11_initialise */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         callg_arg1 = ((Ptr) GIa1);      callg_arg2 = ((Ptr) GIa2);      callg_arg3 = ((Ptr) GIa3);      callg_retv = ((long) x11_initialise(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_20() {      /* x11_bitprologue */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = GYx11def[12];
        GIa2 = (Ptr) 4;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {Ptr callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         long callg_arg3;
         Ptr callg_arg4;
         callg_arg1 = ((Ptr) ((GIsp + 3)->Val->Val)+2);
         callg_arg2 = ((Fix) (GIsp + 2)->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_arg4 = ((Ptr) (GIsp->Val->Val)+2);
         callg_retv = ((Ptr) x11_bitprologue(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         GIa1 = ((Ptr) callg_retv);
        }
l_102:
        GIsp += (Fix) 4;
        {aRet = (GYx11def[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_21() {      /* x11_x_version */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = llrt_vag(GIa1);
         callg_retv = ((long) x11_x_version(callg_arg1));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_22() {      /* x11_x_release */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = llrt_vag(GIa1);
         callg_retv = ((long) x11_x_release(callg_arg1));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_23() {      /* x11_x_revision */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = llrt_vag(GIa1);
         callg_retv = ((long) x11_x_revision(callg_arg1));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_24() {      /* x11_init_pixels */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = GYx11def[13];
        GIa2 = (Ptr) 4;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         long callg_arg3;
         long callg_arg4;
         callg_arg1 = llrt_vag((GIsp + 3)->Val);
         callg_arg2 = ((Fix) (GIsp + 2)->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_arg4 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_init_pixels(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_25() {      /* x11_bitepilogue */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = llrt_vag(GIa1);
         callg_retv = ((long) x11_bitepilogue(callg_arg1));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_26() {      /* x11_bitmap_flush */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = llrt_vag(GIa1);
         callg_retv = ((long) x11_bitmap_flush(callg_arg1));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_27() {      /* x11_bitmap_sync */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = llrt_vag(GIa1);
         callg_retv = ((long) x11_bitmap_sync(callg_arg1));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_28() {      /* x11_bitmap_refresh */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_retv = ((long) x11_bitmap_refresh(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_29() {      /* x11_root_window */
   {    register Ptr aRet;
        {Ptr callg_retv;
         Ptr callg_arg1;
         callg_arg1 = llrt_vag(GIa1);
         callg_retv = ((Ptr) x11_root_window(callg_arg1));
         GIa1 = ((Ptr) callg_retv);
        }
l_101:
        {aRet = (GYx11def[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_30() {      /* x11_pop_window */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_retv = ((long) x11_pop_window(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_31() {      /* x11_move_behind_window */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_retv = ((long) x11_move_behind_window(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_32() {      /* x11_kill_window */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = llrt_vag((GIsp + 1)->Val);
         callg_retv = ((long) x11_kill_window(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_33() {      /* x11_kill_ll_window */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = llrt_vag((GIsp + 1)->Val);
         callg_retv = ((long) x11_kill_ll_window(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_34() {      /* x11_find_window */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {Ptr callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         long callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Fix) GIsp->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_retv = ((Ptr) x11_find_window(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) callg_retv);
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_35() {      /* x11_map_window */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 5)    goto l_101;
        GIa1 = GYx11def[14];
        GIa2 = (Ptr) 5;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         Ptr callg_arg5;
         callg_arg1 = llrt_vag((GIsp + 4)->Val);
         callg_arg2 = llrt_vag((GIsp + 3)->Val);
         callg_arg3 = ((Fix) (GIsp + 2)->Val);
         callg_arg4 = ((Fix) (GIsp + 1)->Val);
         callg_arg5 = ((Ptr) (GIsp->Val->Val)+2);
         callg_retv = ((long) x11_map_window(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 5;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_36() {      /* x11_eventp */
   {    register Ptr aRet;
        {Ptr callg_retv;
         Ptr callg_arg1;
         callg_arg1 = llrt_vag(GIa1);
         callg_retv = ((Ptr) x11_eventp(callg_arg1));
         GIa1 = ((Ptr) callg_retv);
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_37() {      /* x11_flush_event */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = llrt_vag(GIa1);
         callg_retv = ((long) x11_flush_event(callg_arg1));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_38() {      /* x11_grab_event */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = llrt_vag((GIsp + 1)->Val);
         callg_retv = ((long) x11_grab_event(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_39() {      /* x11_ungrab_event */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = llrt_vag(GIa1);
         callg_retv = ((long) x11_ungrab_event(callg_arg1));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_40() {      /* x11_read_event */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Ptr) GIsp->Val);         callg_retv = ((long) x11_read_event(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_41() {      /* x11_peek_event */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Ptr) GIsp->Val);         callg_retv = ((long) x11_peek_event(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_42() {      /* x11_read_mouse */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Ptr) (GIsp->Val->Val)+2);
         callg_retv = ((long) x11_read_mouse(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_43() {      /* x11_load_font */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {Ptr callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Ptr) (GIsp->Val->Val)+2);
         callg_retv = ((Ptr) x11_load_font(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) callg_retv);
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GYx11def[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_44() {      /* x11_font_height */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = llrt_vag(GIa1);
         callg_retv = ((long) x11_font_height(callg_arg1));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_45() {      /* x11_font_ascent */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = llrt_vag(GIa1);
         callg_retv = ((long) x11_font_ascent(callg_arg1));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_46() {      /* x11_width_string */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = GYx11def[15];
        GIa2 = (Ptr) 4;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         callg_arg1 = llrt_vag((GIsp + 3)->Val);
         callg_arg2 = ((Ptr) ((GIsp + 2)->Val->Val)+2);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_arg4 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_width_string(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_47() {      /* x11_height_string */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = GYx11def[16];
        GIa2 = (Ptr) 4;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         callg_arg1 = llrt_vag((GIsp + 3)->Val);
         callg_arg2 = ((Ptr) ((GIsp + 2)->Val->Val)+2);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_arg4 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_height_string(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_48() {      /* x11_x_base_string */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = GYx11def[17];
        GIa2 = (Ptr) 4;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         callg_arg1 = llrt_vag((GIsp + 3)->Val);
         callg_arg2 = ((Ptr) ((GIsp + 2)->Val->Val)+2);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_arg4 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_x_base_string(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_49() {      /* x11_y_base_string */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = GYx11def[18];
        GIa2 = (Ptr) 4;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         callg_arg1 = llrt_vag((GIsp + 3)->Val);
         callg_arg2 = ((Ptr) ((GIsp + 2)->Val->Val)+2);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_arg4 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_y_base_string(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_50() {      /* x11_create_bitmap */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {Ptr callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         long callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Fix) GIsp->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_retv = ((Ptr) x11_create_bitmap(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) callg_retv);
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GYx11def[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_51() {      /* x11_kill_bitmap */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_retv = ((long) x11_kill_bitmap(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_52() {      /* x11_get_bit_line */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 6)    goto l_101;
        GIa1 = GYx11def[19];
        GIa2 = (Ptr) 6;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         Ptr callg_arg5;
         long callg_arg6;
         callg_arg1 = llrt_vag((GIsp + 5)->Val);
         callg_arg2 = llrt_vag((GIsp + 4)->Val);
         callg_arg3 = ((Fix) (GIsp + 3)->Val);
         callg_arg4 = ((Fix) (GIsp + 2)->Val);
         callg_arg5 = ((Ptr) ((GIsp + 1)->Val->Val)+2);
         callg_arg6 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_get_bit_line(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 6;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_53() {      /* x11_set_bit_line */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 7)    goto l_101;
        GIa1 = GYx11def[20];
        GIa2 = (Ptr) 7;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         Ptr callg_arg5;
         long callg_arg6;
         Ptr callg_arg7;
         callg_arg1 = llrt_vag((GIsp + 6)->Val);
         callg_arg2 = llrt_vag((GIsp + 5)->Val);
         callg_arg3 = ((Fix) (GIsp + 4)->Val);
         callg_arg4 = ((Fix) (GIsp + 3)->Val);
         callg_arg5 = ((Ptr) ((GIsp + 2)->Val->Val)+2);
         callg_arg6 = ((Fix) (GIsp + 1)->Val);
         callg_arg7 = llrt_vag(GIsp->Val);
         callg_retv = ((long) x11_set_bit_line(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 7;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_54() {      /* x11_bmref */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = GYx11def[21];
        GIa2 = (Ptr) 4;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         callg_arg1 = llrt_vag((GIsp + 3)->Val);
         callg_arg2 = llrt_vag((GIsp + 2)->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_arg4 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_bmref(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_55() {      /* x11_bmset */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 6)    goto l_101;
        GIa1 = GYx11def[22];
        GIa2 = (Ptr) 6;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         long callg_arg5;
         Ptr callg_arg6;
         callg_arg1 = llrt_vag((GIsp + 5)->Val);
         callg_arg2 = llrt_vag((GIsp + 4)->Val);
         callg_arg3 = ((Fix) (GIsp + 3)->Val);
         callg_arg4 = ((Fix) (GIsp + 2)->Val);
         callg_arg5 = ((Fix) (GIsp + 1)->Val);
         callg_arg6 = llrt_vag(GIsp->Val);
         callg_retv = ((long) x11_bmset(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 6;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_56() {      /* x11_default_gc */
   {    register Ptr aRet;
        {Ptr callg_retv;
         Ptr callg_arg1;
         callg_arg1 = llrt_vag(GIa1);
         callg_retv = ((Ptr) x11_default_gc(callg_arg1));
         GIa1 = ((Ptr) callg_retv);
        }
l_101:
        {aRet = (GYx11def[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_57() {      /* x11_pixmap_to_bitmap */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = GYx11def[23];
        GIa2 = (Ptr) 4;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {Ptr callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         callg_arg1 = llrt_vag((GIsp + 3)->Val);
         callg_arg2 = llrt_vag((GIsp + 2)->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_arg4 = ((Fix) GIsp->Val);
         callg_retv = ((Ptr) x11_pixmap_to_bitmap(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         GIa1 = ((Ptr) callg_retv);
        }
l_102:
        GIsp += (Fix) 4;
        {aRet = (GYx11def[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_58() {      /* x11_set_cursor */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = llrt_vag((GIsp + 1)->Val);
         callg_retv = ((long) x11_set_cursor(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_59() {      /* x11_create_cursor */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {Ptr callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Fix) GIsp->Val);
         callg_retv = ((Ptr) x11_create_cursor(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) callg_retv);
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GYx11def[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_60() {      /* x11_move_cursor */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         long callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Fix) GIsp->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_retv = ((long) x11_move_cursor(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_61() {      /* x11_make_color */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 5)    goto l_101;
        GIa1 = GYx11def[24];
        GIa2 = (Ptr) 5;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         long callg_arg3;
         long callg_arg4;
         Ptr callg_arg5;
         callg_arg1 = llrt_vag((GIsp + 4)->Val);
         callg_arg2 = ((Fix) (GIsp + 3)->Val);
         callg_arg3 = ((Fix) (GIsp + 2)->Val);
         callg_arg4 = ((Fix) (GIsp + 1)->Val);
         callg_arg5 = ((Ptr) (GIsp->Val->Val)+2);
         callg_retv = ((long) x11_make_color(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 5;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_62() {      /* x11_make_mutable_color */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = GYx11def[25];
        GIa2 = (Ptr) 4;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         long callg_arg3;
         long callg_arg4;
         callg_arg1 = llrt_vag((GIsp + 3)->Val);
         callg_arg2 = ((Fix) (GIsp + 2)->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_arg4 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_make_mutable_color(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_63() {      /* x11_make_named_color */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Ptr) (GIsp->Val->Val)+2);
         callg_arg3 = ((Ptr) ((GIsp + 1)->Val->Val)+2);
         callg_retv = ((long) x11_make_named_color(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_64() {      /* x11_kill_color */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_kill_color(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_65() {      /* x11_color_component */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 6)    goto l_101;
        GIa1 = GYx11def[26];
        GIa2 = (Ptr) 6;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {Ptr callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         long callg_arg3;
         long callg_arg4;
         long callg_arg5;
         long callg_arg6;
         callg_arg1 = llrt_vag((GIsp + 5)->Val);
         callg_arg2 = ((Fix) (GIsp + 4)->Val);
         callg_arg3 = ((Fix) (GIsp + 3)->Val);
         callg_arg4 = ((Fix) (GIsp + 2)->Val);
         callg_arg5 = ((Fix) (GIsp + 1)->Val);
         callg_arg6 = ((Fix) GIsp->Val);
         callg_retv = ((Ptr) x11_color_component(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6));
         GIa1 = ((Ptr) callg_retv);
        }
l_102:
        GIsp += (Fix) 6;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_66() {      /* x11_get_default */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {Ptr callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Ptr) (GIsp->Val->Val)+2);
         callg_arg3 = ((Ptr) ((GIsp + 1)->Val->Val)+2);
         callg_retv = ((Ptr) x11_get_default(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = Cstring_to_Lstring((char *) callg_retv);
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_67() {      /* x11_bitblit */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 10)   goto l_101;
        GIa1 = GYx11def[27];
        GIa2 = (Ptr) 10;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         long callg_arg4;
         long callg_arg5;
         long callg_arg6;
         long callg_arg7;
         long callg_arg8;
         long callg_arg9;
         Ptr callg_arg10;
         callg_arg1 = llrt_vag((GIsp + 9)->Val);
         callg_arg2 = llrt_vag((GIsp + 8)->Val);
         callg_arg3 = llrt_vag((GIsp + 7)->Val);
         callg_arg4 = ((Fix) (GIsp + 6)->Val);
         callg_arg5 = ((Fix) (GIsp + 5)->Val);
         callg_arg6 = ((Fix) (GIsp + 4)->Val);
         callg_arg7 = ((Fix) (GIsp + 3)->Val);
         callg_arg8 = ((Fix) (GIsp + 2)->Val);
         callg_arg9 = ((Fix) (GIsp + 1)->Val);
         callg_arg10 = llrt_vag(GIsp->Val);
         callg_retv = ((long) x11_bitblit(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8,callg_arg9,callg_arg10));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 10;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_68() {      /* x11_make_cursor */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 11)   goto l_101;
        GIa1 = GYx11def[28];
        GIa2 = (Ptr) 11;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {Ptr callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         long callg_arg4;
         long callg_arg5;
         long callg_arg6;
         long callg_arg7;
         long callg_arg8;
         long callg_arg9;
         long callg_arg10;
         long callg_arg11;
         callg_arg1 = llrt_vag((GIsp + 10)->Val);
         callg_arg2 = llrt_vag((GIsp + 9)->Val);
         callg_arg3 = llrt_vag((GIsp + 8)->Val);
         callg_arg4 = ((Fix) (GIsp + 7)->Val);
         callg_arg5 = ((Fix) (GIsp + 6)->Val);
         callg_arg6 = ((Fix) (GIsp + 5)->Val);
         callg_arg7 = ((Fix) (GIsp + 4)->Val);
         callg_arg8 = ((Fix) (GIsp + 3)->Val);
         callg_arg9 = ((Fix) (GIsp + 2)->Val);
         callg_arg10 = ((Fix) (GIsp + 1)->Val);
         callg_arg11 = ((Fix) GIsp->Val);
         callg_retv = ((Ptr) x11_make_cursor(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8,callg_arg9,callg_arg10,callg_arg11));
         GIa1 = ((Ptr) callg_retv);
        }
l_102:
        GIsp += (Fix) 11;
        {aRet = (GYx11def[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_69() {      /* x11_synchronize */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_synchronize(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_70() {      /* x11_create_window */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 6)    goto l_101;
        GIa1 = GYx11def[29];
        GIa2 = (Ptr) 6;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {Ptr callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         Ptr callg_arg5;
         long callg_arg6;
         callg_arg1 = llrt_vag((GIsp + 5)->Val);
         callg_arg2 = ((Ptr) (GIsp + 4)->Val);   callg_arg3 = ((Ptr) ((GIsp + 3)->Val->Val)+2);
         callg_arg4 = llrt_vag((GIsp + 2)->Val);
         callg_arg5 = llrt_vag((GIsp + 1)->Val);
         callg_arg6 = ((Fix) GIsp->Val);
         callg_retv = ((Ptr) x11_create_window(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6));
         GIa1 = ((Ptr) callg_retv);
        }
l_102:
        GIsp += (Fix) 6;
        {aRet = (GYx11def[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_71() {      /* x11_create_subwindow */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 6)    goto l_101;
        GIa1 = GYx11def[30];
        GIa2 = (Ptr) 6;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {Ptr callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         Ptr callg_arg5;
         long callg_arg6;
         callg_arg1 = llrt_vag((GIsp + 5)->Val);
         callg_arg2 = ((Ptr) (GIsp + 4)->Val);   callg_arg3 = ((Ptr) ((GIsp + 3)->Val->Val)+2);
         callg_arg4 = llrt_vag((GIsp + 2)->Val);
         callg_arg5 = llrt_vag((GIsp + 1)->Val);
         callg_arg6 = ((Fix) GIsp->Val);
         callg_retv = ((Ptr) x11_create_subwindow(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6));
         GIa1 = ((Ptr) callg_retv);
        }
l_102:
        GIsp += (Fix) 6;
        {aRet = (GYx11def[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_72() {      /* x11_create_transparentwindow */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 9)    goto l_101;
        GIa1 = GYx11def[31];
        GIa2 = (Ptr) 9;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {Ptr callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         long callg_arg5;
         long callg_arg6;
         long callg_arg7;
         Ptr callg_arg8;
         Ptr callg_arg9;
         callg_arg1 = llrt_vag((GIsp + 8)->Val);
         callg_arg2 = ((Ptr) (GIsp + 7)->Val);   callg_arg3 = ((Fix) (GIsp + 6)->Val);
         callg_arg4 = ((Fix) (GIsp + 5)->Val);
         callg_arg5 = ((Fix) (GIsp + 4)->Val);
         callg_arg6 = ((Fix) (GIsp + 3)->Val);
         callg_arg7 = ((Fix) (GIsp + 2)->Val);
         callg_arg8 = ((Ptr) (GIsp + 1)->Val);   callg_arg9 = llrt_vag(GIsp->Val);
         callg_retv = ((Ptr) x11_create_transparentwindow(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8,callg_arg9));
         GIa1 = ((Ptr) callg_retv);
        }
l_102:
        GIsp += (Fix) 9;
        {aRet = (GYx11def[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_73() {      /* x11_move_window */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = GYx11def[32];
        GIa2 = (Ptr) 4;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         callg_arg1 = llrt_vag((GIsp + 3)->Val);
         callg_arg2 = llrt_vag((GIsp + 2)->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_arg4 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_move_window(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_74() {      /* x11_resize_window */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = GYx11def[33];
        GIa2 = (Ptr) 4;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         callg_arg1 = llrt_vag((GIsp + 3)->Val);
         callg_arg2 = llrt_vag((GIsp + 2)->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_arg4 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_resize_window(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_75() {      /* x11_moveresize_window */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 6)    goto l_101;
        GIa1 = GYx11def[34];
        GIa2 = (Ptr) 6;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         long callg_arg5;
         long callg_arg6;
         callg_arg1 = llrt_vag((GIsp + 5)->Val);
         callg_arg2 = llrt_vag((GIsp + 4)->Val);
         callg_arg3 = ((Fix) (GIsp + 3)->Val);
         callg_arg4 = ((Fix) (GIsp + 2)->Val);
         callg_arg5 = ((Fix) (GIsp + 1)->Val);
         callg_arg6 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_moveresize_window(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 6;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_76() {      /* x11_changewindow_border */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_retv = ((long) x11_changewindow_border(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_77() {      /* x11_changewindow_bordercolor */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_retv = ((long) x11_changewindow_bordercolor(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_78() {      /* x11_build_mask */
   {    register Ptr aRet;
        {Ptr callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         callg_arg1 = ((Ptr) (GIa1->Val)+2);
         callg_arg2 = ((Fix) GIa2);
         callg_retv = ((Ptr) x11_build_mask(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) callg_retv);
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_79() {      /* x11_changeeventmask_window */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_retv = ((long) x11_changeeventmask_window(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_80() {      /* x11_changelongmask_window */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = ((Ptr) (GIsp + 1)->Val);   callg_retv = ((long) x11_changelongmask_window(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_81() {      /* x11_change_title */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = ((Ptr) ((GIsp + 1)->Val->Val)+2);
         callg_retv = ((long) x11_change_title(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_82() {      /* x11_change_icontitle */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = ((Ptr) ((GIsp + 1)->Val->Val)+2);
         callg_retv = ((long) x11_change_icontitle(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_83() {      /* x11_create_graph_env */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 7)    goto l_101;
        GIa1 = GYx11def[35];
        GIa2 = (Ptr) 7;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {Ptr callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         long callg_arg4;
         long callg_arg5;
         Ptr callg_arg6;
         long callg_arg7;
         callg_arg1 = llrt_vag((GIsp + 6)->Val);
         callg_arg2 = llrt_vag((GIsp + 5)->Val);
         callg_arg3 = llrt_vag((GIsp + 4)->Val);
         callg_arg4 = ((Fix) (GIsp + 3)->Val);
         callg_arg5 = ((Fix) (GIsp + 2)->Val);
         callg_arg6 = llrt_vag((GIsp + 1)->Val);
         callg_arg7 = ((Fix) GIsp->Val);
         callg_retv = ((Ptr) x11_create_graph_env(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7));
         GIa1 = ((Ptr) callg_retv);
        }
l_102:
        GIsp += (Fix) 7;
        {aRet = (GYx11def[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_84() {      /* x11_new_create_graph_env */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 10)   goto l_101;
        GIa1 = GYx11def[36];
        GIa2 = (Ptr) 10;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {Ptr callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         long callg_arg4;
         long callg_arg5;
         Ptr callg_arg6;
         long callg_arg7;
         long callg_arg8;
         long callg_arg9;
         long callg_arg10;
         callg_arg1 = llrt_vag((GIsp + 9)->Val);
         callg_arg2 = llrt_vag((GIsp + 8)->Val);
         callg_arg3 = llrt_vag((GIsp + 7)->Val);
         callg_arg4 = ((Fix) (GIsp + 6)->Val);
         callg_arg5 = ((Fix) (GIsp + 5)->Val);
         callg_arg6 = llrt_vag((GIsp + 4)->Val);
         callg_arg7 = ((Fix) (GIsp + 3)->Val);
         callg_arg8 = ((Fix) (GIsp + 2)->Val);
         callg_arg9 = ((Fix) (GIsp + 1)->Val);
         callg_arg10 = ((Fix) GIsp->Val);
         callg_retv = ((Ptr) x11_new_create_graph_env(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8,callg_arg9,callg_arg10));
         GIa1 = ((Ptr) callg_retv);
        }
l_102:
        GIsp += (Fix) 10;
        {aRet = (GYx11def[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_85() {      /* x11_free_graph_env */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_retv = ((long) x11_free_graph_env(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_86() {      /* x11_window_map */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_retv = ((long) x11_window_map(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_87() {      /* x11_window_unmap */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_retv = ((long) x11_window_unmap(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_88() {      /* x11_clear_window */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 7)    goto l_101;
        GIa1 = GYx11def[37];
        GIa2 = (Ptr) 7;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         long callg_arg5;
         long callg_arg6;
         long callg_arg7;
         callg_arg1 = llrt_vag((GIsp + 6)->Val);
         callg_arg2 = llrt_vag((GIsp + 5)->Val);
         callg_arg3 = ((Fix) (GIsp + 4)->Val);
         callg_arg4 = ((Fix) (GIsp + 3)->Val);
         callg_arg5 = ((Fix) (GIsp + 2)->Val);
         callg_arg6 = ((Fix) (GIsp + 1)->Val);
         callg_arg7 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_clear_window(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 7;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_89() {      /* x11_set_font */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = llrt_vag((GIsp + 1)->Val);
         callg_retv = ((long) x11_set_font(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_90() {      /* x11_set_clip */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 6)    goto l_101;
        GIa1 = GYx11def[38];
        GIa2 = (Ptr) 6;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         long callg_arg5;
         long callg_arg6;
         callg_arg1 = llrt_vag((GIsp + 5)->Val);
         callg_arg2 = llrt_vag((GIsp + 4)->Val);
         callg_arg3 = ((Fix) (GIsp + 3)->Val);
         callg_arg4 = ((Fix) (GIsp + 2)->Val);
         callg_arg5 = ((Fix) (GIsp + 1)->Val);
         callg_arg6 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_set_clip(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 6;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_91() {      /* x11_set_clips */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 7)    goto l_101;
        GIa1 = GYx11def[39];
        GIa2 = (Ptr) 7;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         Ptr callg_arg5;
         Ptr callg_arg6;
         long callg_arg7;
         callg_arg1 = llrt_vag((GIsp + 6)->Val);
         callg_arg2 = llrt_vag((GIsp + 5)->Val);
         callg_arg3 = ((Ptr) ((GIsp + 4)->Val->Val)+2);
         callg_arg4 = ((Ptr) ((GIsp + 3)->Val->Val)+2);
         callg_arg5 = ((Ptr) ((GIsp + 2)->Val->Val)+2);
         callg_arg6 = ((Ptr) ((GIsp + 1)->Val->Val)+2);
         callg_arg7 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_set_clips(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 7;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_92() {      /* x11_draw_string */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 8)    goto l_101;
        GIa1 = GYx11def[40];
        GIa2 = (Ptr) 8;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         long callg_arg4;
         long callg_arg5;
         Ptr callg_arg6;
         long callg_arg7;
         long callg_arg8;
         callg_arg1 = llrt_vag((GIsp + 7)->Val);
         callg_arg2 = llrt_vag((GIsp + 6)->Val);
         callg_arg3 = llrt_vag((GIsp + 5)->Val);
         callg_arg4 = ((Fix) (GIsp + 4)->Val);
         callg_arg5 = ((Fix) (GIsp + 3)->Val);
         callg_arg6 = ((Ptr) ((GIsp + 2)->Val->Val)+2);
         callg_arg7 = ((Fix) (GIsp + 1)->Val);
         callg_arg8 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_draw_string(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 8;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_93() {      /* x11_draw_image_string */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 8)    goto l_101;
        GIa1 = GYx11def[41];
        GIa2 = (Ptr) 8;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         long callg_arg4;
         long callg_arg5;
         Ptr callg_arg6;
         long callg_arg7;
         long callg_arg8;
         callg_arg1 = llrt_vag((GIsp + 7)->Val);
         callg_arg2 = llrt_vag((GIsp + 6)->Val);
         callg_arg3 = llrt_vag((GIsp + 5)->Val);
         callg_arg4 = ((Fix) (GIsp + 4)->Val);
         callg_arg5 = ((Fix) (GIsp + 3)->Val);
         callg_arg6 = ((Ptr) ((GIsp + 2)->Val->Val)+2);
         callg_arg7 = ((Fix) (GIsp + 1)->Val);
         callg_arg8 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_draw_image_string(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 8;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_94() {      /* x11_set_mode */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_retv = ((long) x11_set_mode(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_95() {      /* x11_set_line_style */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = GYx11def[42];
        GIa2 = (Ptr) 4;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         callg_arg1 = llrt_vag((GIsp + 3)->Val);
         callg_arg2 = llrt_vag((GIsp + 2)->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_arg4 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_set_line_style(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_96() {      /* x11_set_pattern */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = llrt_vag((GIsp + 1)->Val);
         callg_retv = ((long) x11_set_pattern(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_97() {      /* x11_draw_point */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 5)    goto l_101;
        GIa1 = GYx11def[43];
        GIa2 = (Ptr) 5;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         long callg_arg4;
         long callg_arg5;
         callg_arg1 = llrt_vag((GIsp + 4)->Val);
         callg_arg2 = llrt_vag((GIsp + 3)->Val);
         callg_arg3 = llrt_vag((GIsp + 2)->Val);
         callg_arg4 = ((Fix) (GIsp + 1)->Val);
         callg_arg5 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_draw_point(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 5;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_98() {      /* x11_draw_points */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 8)    goto l_101;
        GIa1 = GYx11def[44];
        GIa2 = (Ptr) 8;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         Ptr callg_arg5;
         long callg_arg6;
         long callg_arg7;
         long callg_arg8;
         callg_arg1 = llrt_vag((GIsp + 7)->Val);
         callg_arg2 = llrt_vag((GIsp + 6)->Val);
         callg_arg3 = llrt_vag((GIsp + 5)->Val);
         callg_arg4 = ((Ptr) ((GIsp + 4)->Val->Val)+2);
         callg_arg5 = ((Ptr) ((GIsp + 3)->Val->Val)+2);
         callg_arg6 = ((Fix) (GIsp + 2)->Val);
         callg_arg7 = ((Fix) (GIsp + 1)->Val);
         callg_arg8 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_draw_points(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 8;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_99() {      /* x11_draw_segments */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 10)   goto l_101;
        GIa1 = GYx11def[45];
        GIa2 = (Ptr) 10;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         Ptr callg_arg5;
         Ptr callg_arg6;
         Ptr callg_arg7;
         long callg_arg8;
         long callg_arg9;
         long callg_arg10;
         callg_arg1 = llrt_vag((GIsp + 9)->Val);
         callg_arg2 = llrt_vag((GIsp + 8)->Val);
         callg_arg3 = llrt_vag((GIsp + 7)->Val);
         callg_arg4 = ((Ptr) ((GIsp + 6)->Val->Val)+2);
         callg_arg5 = ((Ptr) ((GIsp + 5)->Val->Val)+2);
         callg_arg6 = ((Ptr) ((GIsp + 4)->Val->Val)+2);
         callg_arg7 = ((Ptr) ((GIsp + 3)->Val->Val)+2);
         callg_arg8 = ((Fix) (GIsp + 2)->Val);
         callg_arg9 = ((Fix) (GIsp + 1)->Val);
         callg_arg10 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_draw_segments(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8,callg_arg9,callg_arg10));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 10;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_100() {     /* x11_draw_line */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 7)    goto l_101;
        GIa1 = GYx11def[46];
        GIa2 = (Ptr) 7;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         long callg_arg4;
         long callg_arg5;
         long callg_arg6;
         long callg_arg7;
         callg_arg1 = llrt_vag((GIsp + 6)->Val);
         callg_arg2 = llrt_vag((GIsp + 5)->Val);
         callg_arg3 = llrt_vag((GIsp + 4)->Val);
         callg_arg4 = ((Fix) (GIsp + 3)->Val);
         callg_arg5 = ((Fix) (GIsp + 2)->Val);
         callg_arg6 = ((Fix) (GIsp + 1)->Val);
         callg_arg7 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_draw_line(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 7;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_101() {     /* x11_draw_lines */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 8)    goto l_101;
        GIa1 = GYx11def[47];
        GIa2 = (Ptr) 8;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         Ptr callg_arg5;
         long callg_arg6;
         long callg_arg7;
         long callg_arg8;
         callg_arg1 = llrt_vag((GIsp + 7)->Val);
         callg_arg2 = llrt_vag((GIsp + 6)->Val);
         callg_arg3 = llrt_vag((GIsp + 5)->Val);
         callg_arg4 = ((Ptr) ((GIsp + 4)->Val->Val)+2);
         callg_arg5 = ((Ptr) ((GIsp + 3)->Val->Val)+2);
         callg_arg6 = ((Fix) (GIsp + 2)->Val);
         callg_arg7 = ((Fix) (GIsp + 1)->Val);
         callg_arg8 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_draw_lines(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 8;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_102() {     /* x11_draw_rectangle */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 7)    goto l_101;
        GIa1 = GYx11def[48];
        GIa2 = (Ptr) 7;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         long callg_arg4;
         long callg_arg5;
         long callg_arg6;
         long callg_arg7;
         callg_arg1 = llrt_vag((GIsp + 6)->Val);
         callg_arg2 = llrt_vag((GIsp + 5)->Val);
         callg_arg3 = llrt_vag((GIsp + 4)->Val);
         callg_arg4 = ((Fix) (GIsp + 3)->Val);
         callg_arg5 = ((Fix) (GIsp + 2)->Val);
         callg_arg6 = ((Fix) (GIsp + 1)->Val);
         callg_arg7 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_draw_rectangle(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 7;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_103() {     /* x11_draw_rectangles */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 11)   goto l_101;
        GIa1 = GYx11def[49];
        GIa2 = (Ptr) 11;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         Ptr callg_arg5;
         Ptr callg_arg6;
         Ptr callg_arg7;
         long callg_arg8;
         long callg_arg9;
         long callg_arg10;
         long callg_arg11;
         callg_arg1 = llrt_vag((GIsp + 10)->Val);
         callg_arg2 = llrt_vag((GIsp + 9)->Val);
         callg_arg3 = llrt_vag((GIsp + 8)->Val);
         callg_arg4 = ((Ptr) ((GIsp + 7)->Val->Val)+2);
         callg_arg5 = ((Ptr) ((GIsp + 6)->Val->Val)+2);
         callg_arg6 = ((Ptr) ((GIsp + 5)->Val->Val)+2);
         callg_arg7 = ((Ptr) ((GIsp + 4)->Val->Val)+2);
         callg_arg8 = ((Fix) (GIsp + 3)->Val);
         callg_arg9 = ((Fix) (GIsp + 2)->Val);
         callg_arg10 = ((Fix) (GIsp + 1)->Val);
         callg_arg11 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_draw_rectangles(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8,callg_arg9,callg_arg10,callg_arg11));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 11;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_104() {     /* x11_draw_arc */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 9)    goto l_101;
        GIa1 = GYx11def[50];
        GIa2 = (Ptr) 9;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         long callg_arg4;
         long callg_arg5;
         long callg_arg6;
         long callg_arg7;
         long callg_arg8;
         long callg_arg9;
         callg_arg1 = llrt_vag((GIsp + 8)->Val);
         callg_arg2 = llrt_vag((GIsp + 7)->Val);
         callg_arg3 = llrt_vag((GIsp + 6)->Val);
         callg_arg4 = ((Fix) (GIsp + 5)->Val);
         callg_arg5 = ((Fix) (GIsp + 4)->Val);
         callg_arg6 = ((Fix) (GIsp + 3)->Val);
         callg_arg7 = ((Fix) (GIsp + 2)->Val);
         callg_arg8 = ((Fix) (GIsp + 1)->Val);
         callg_arg9 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_draw_arc(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8,callg_arg9));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 9;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_105() {     /* x11_draw_arcs */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 10)   goto l_101;
        GIa1 = GYx11def[51];
        GIa2 = (Ptr) 10;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         Ptr callg_arg5;
         Ptr callg_arg6;
         Ptr callg_arg7;
         Ptr callg_arg8;
         Ptr callg_arg9;
         long callg_arg10;
         callg_arg1 = llrt_vag((GIsp + 9)->Val);
         callg_arg2 = llrt_vag((GIsp + 8)->Val);
         callg_arg3 = llrt_vag((GIsp + 7)->Val);
         callg_arg4 = ((Ptr) ((GIsp + 6)->Val->Val)+2);
         callg_arg5 = ((Ptr) ((GIsp + 5)->Val->Val)+2);
         callg_arg6 = ((Ptr) ((GIsp + 4)->Val->Val)+2);
         callg_arg7 = ((Ptr) ((GIsp + 3)->Val->Val)+2);
         callg_arg8 = ((Ptr) ((GIsp + 2)->Val->Val)+2);
         callg_arg9 = ((Ptr) ((GIsp + 1)->Val->Val)+2);
         callg_arg10 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_draw_arcs(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8,callg_arg9,callg_arg10));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 10;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_106() {     /* x11_fill_oldrectangle */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 8)    goto l_101;
        GIa1 = GYx11def[52];
        GIa2 = (Ptr) 8;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         long callg_arg4;
         long callg_arg5;
         long callg_arg6;
         long callg_arg7;
         long callg_arg8;
         callg_arg1 = llrt_vag((GIsp + 7)->Val);
         callg_arg2 = llrt_vag((GIsp + 6)->Val);
         callg_arg3 = llrt_vag((GIsp + 5)->Val);
         callg_arg4 = ((Fix) (GIsp + 4)->Val);
         callg_arg5 = ((Fix) (GIsp + 3)->Val);
         callg_arg6 = ((Fix) (GIsp + 2)->Val);
         callg_arg7 = ((Fix) (GIsp + 1)->Val);
         callg_arg8 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_fill_oldrectangle(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 8;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_107() {     /* x11_fill_oldrectangles */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 12)   goto l_101;
        GIa1 = GYx11def[53];
        GIa2 = (Ptr) 12;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         Ptr callg_arg5;
         Ptr callg_arg6;
         Ptr callg_arg7;
         long callg_arg8;
         long callg_arg9;
         long callg_arg10;
         long callg_arg11;
         long callg_arg12;
         callg_arg1 = llrt_vag((GIsp + 11)->Val);
         callg_arg2 = llrt_vag((GIsp + 10)->Val);
         callg_arg3 = llrt_vag((GIsp + 9)->Val);
         callg_arg4 = ((Ptr) ((GIsp + 8)->Val->Val)+2);
         callg_arg5 = ((Ptr) ((GIsp + 7)->Val->Val)+2);
         callg_arg6 = ((Ptr) ((GIsp + 6)->Val->Val)+2);
         callg_arg7 = ((Ptr) ((GIsp + 5)->Val->Val)+2);
         callg_arg8 = ((Fix) (GIsp + 4)->Val);
         callg_arg9 = ((Fix) (GIsp + 3)->Val);
         callg_arg10 = ((Fix) (GIsp + 2)->Val);
         callg_arg11 = ((Fix) (GIsp + 1)->Val);
         callg_arg12 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_fill_oldrectangles(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8,callg_arg9,callg_arg10,callg_arg11,callg_arg12));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 12;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_108() {     /* x11_fill_oldarc */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 10)   goto l_101;
        GIa1 = GYx11def[54];
        GIa2 = (Ptr) 10;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         long callg_arg4;
         long callg_arg5;
         long callg_arg6;
         long callg_arg7;
         long callg_arg8;
         long callg_arg9;
         long callg_arg10;
         callg_arg1 = llrt_vag((GIsp + 9)->Val);
         callg_arg2 = llrt_vag((GIsp + 8)->Val);
         callg_arg3 = llrt_vag((GIsp + 7)->Val);
         callg_arg4 = ((Fix) (GIsp + 6)->Val);
         callg_arg5 = ((Fix) (GIsp + 5)->Val);
         callg_arg6 = ((Fix) (GIsp + 4)->Val);
         callg_arg7 = ((Fix) (GIsp + 3)->Val);
         callg_arg8 = ((Fix) (GIsp + 2)->Val);
         callg_arg9 = ((Fix) (GIsp + 1)->Val);
         callg_arg10 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_fill_oldarc(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8,callg_arg9,callg_arg10));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 10;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_109() {     /* x11_fill_oldarcs */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 11)   goto l_101;
        GIa1 = GYx11def[55];
        GIa2 = (Ptr) 11;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         Ptr callg_arg5;
         Ptr callg_arg6;
         Ptr callg_arg7;
         Ptr callg_arg8;
         Ptr callg_arg9;
         long callg_arg10;
         long callg_arg11;
         callg_arg1 = llrt_vag((GIsp + 10)->Val);
         callg_arg2 = llrt_vag((GIsp + 9)->Val);
         callg_arg3 = llrt_vag((GIsp + 8)->Val);
         callg_arg4 = ((Ptr) ((GIsp + 7)->Val->Val)+2);
         callg_arg5 = ((Ptr) ((GIsp + 6)->Val->Val)+2);
         callg_arg6 = ((Ptr) ((GIsp + 5)->Val->Val)+2);
         callg_arg7 = ((Ptr) ((GIsp + 4)->Val->Val)+2);
         callg_arg8 = ((Ptr) ((GIsp + 3)->Val->Val)+2);
         callg_arg9 = ((Ptr) ((GIsp + 2)->Val->Val)+2);
         callg_arg10 = ((Fix) (GIsp + 1)->Val);
         callg_arg11 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_fill_oldarcs(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8,callg_arg9,callg_arg10,callg_arg11));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 11;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_110() {     /* x11_fill_oldarea */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 9)    goto l_101;
        GIa1 = GYx11def[56];
        GIa2 = (Ptr) 9;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         Ptr callg_arg5;
         long callg_arg6;
         long callg_arg7;
         long callg_arg8;
         long callg_arg9;
         callg_arg1 = llrt_vag((GIsp + 8)->Val);
         callg_arg2 = llrt_vag((GIsp + 7)->Val);
         callg_arg3 = llrt_vag((GIsp + 6)->Val);
         callg_arg4 = ((Ptr) ((GIsp + 5)->Val->Val)+2);
         callg_arg5 = ((Ptr) ((GIsp + 4)->Val->Val)+2);
         callg_arg6 = ((Fix) (GIsp + 3)->Val);
         callg_arg7 = ((Fix) (GIsp + 2)->Val);
         callg_arg8 = ((Fix) (GIsp + 1)->Val);
         callg_arg9 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_fill_oldarea(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8,callg_arg9));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 9;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_111() {     /* x11_set_foreground */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_retv = ((long) x11_set_foreground(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_112() {     /* x11_set_background */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_retv = ((long) x11_set_background(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_113() {     /* x11_setwindow_background */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_retv = ((long) x11_setwindow_background(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_114() {     /* x11_imagebyteorder */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = llrt_vag(GIa1);
         callg_retv = ((long) x11_imagebyteorder(callg_arg1));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_115() {     /* x11_bitmapbitorder */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = llrt_vag(GIa1);
         callg_retv = ((long) x11_bitmapbitorder(callg_arg1));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_116() {     /* x11_seticon_pixmap */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = llrt_vag((GIsp + 1)->Val);
         callg_retv = ((long) x11_seticon_pixmap(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_117() {     /* x11_setwindow_state */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_retv = ((long) x11_setwindow_state(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_118() {     /* x11_set_window_pixmap */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = llrt_vag((GIsp + 1)->Val);
         callg_retv = ((long) x11_set_window_pixmap(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_119() {     /* x11_store_bytes */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Ptr) (GIsp->Val->Val)+2);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_retv = ((long) x11_store_bytes(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_120() {     /* x11_fetch_bytes */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {Ptr callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Ptr) (GIsp->Val->Val)+2);
         callg_retv = ((Ptr) x11_fetch_bytes(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) callg_retv);
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GYx11def[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_121() {     /* x11_bytes_to_llstring */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Ptr) (GIsp->Val->Val)+2);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_retv = ((long) x11_bytes_to_llstring(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_122() {     /* x11_topmove_window */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 5)    goto l_101;
        GIa1 = GYx11def[57];
        GIa2 = (Ptr) 5;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         Ptr callg_arg5;
         callg_arg1 = llrt_vag((GIsp + 4)->Val);
         callg_arg2 = llrt_vag((GIsp + 3)->Val);
         callg_arg3 = ((Fix) (GIsp + 2)->Val);
         callg_arg4 = ((Fix) (GIsp + 1)->Val);
         callg_arg5 = ((Ptr) GIsp->Val);         callg_retv = ((long) x11_topmove_window(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 5;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_123() {     /* x11_topresize_window */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 5)    goto l_101;
        GIa1 = GYx11def[58];
        GIa2 = (Ptr) 5;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         Ptr callg_arg5;
         callg_arg1 = llrt_vag((GIsp + 4)->Val);
         callg_arg2 = llrt_vag((GIsp + 3)->Val);
         callg_arg3 = ((Fix) (GIsp + 2)->Val);
         callg_arg4 = ((Fix) (GIsp + 1)->Val);
         callg_arg5 = ((Ptr) GIsp->Val);         callg_retv = ((long) x11_topresize_window(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 5;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_124() {     /* x11_topmoveresize_window */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 7)    goto l_101;
        GIa1 = GYx11def[59];
        GIa2 = (Ptr) 7;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         long callg_arg4;
         long callg_arg5;
         long callg_arg6;
         Ptr callg_arg7;
         callg_arg1 = llrt_vag((GIsp + 6)->Val);
         callg_arg2 = llrt_vag((GIsp + 5)->Val);
         callg_arg3 = ((Fix) (GIsp + 4)->Val);
         callg_arg4 = ((Fix) (GIsp + 3)->Val);
         callg_arg5 = ((Fix) (GIsp + 2)->Val);
         callg_arg6 = ((Fix) (GIsp + 1)->Val);
         callg_arg7 = ((Ptr) GIsp->Val);         callg_retv = ((long) x11_topmoveresize_window(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 7;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_125() {     /* x11_topchangewindow_border */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = GYx11def[60];
        GIa2 = (Ptr) 4;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         Ptr callg_arg4;
         callg_arg1 = llrt_vag((GIsp + 3)->Val);
         callg_arg2 = llrt_vag((GIsp + 2)->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_arg4 = ((Ptr) GIsp->Val);         callg_retv = ((long) x11_topchangewindow_border(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_126() {     /* x11_depth */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = llrt_vag(GIa1);
         callg_retv = ((long) x11_depth(callg_arg1));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_127() {     /* x11_get_format */
   {    register Ptr aRet;
        {long callg_retv;
         callg_retv = ((long) x11_get_format());
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_128() {     /* x11_get_data_string */
   {    register Ptr aRet;
        {Ptr callg_retv;
         callg_retv = ((Ptr) x11_get_data_string());
         GIa1 = Cstring_to_Lstring((char *) callg_retv);
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_129() {     /* x11_change_gc_values */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 10)   goto l_101;
        GIa1 = GYx11def[61];
        GIa2 = (Ptr) 10;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         long callg_arg5;
         Ptr callg_arg6;
         long callg_arg7;
         long callg_arg8;
         long callg_arg9;
         long callg_arg10;
         callg_arg1 = llrt_vag((GIsp + 9)->Val);
         callg_arg2 = llrt_vag((GIsp + 8)->Val);
         callg_arg3 = ((Ptr) ((GIsp + 7)->Val->Val)+2);
         callg_arg4 = llrt_vag((GIsp + 6)->Val);
         callg_arg5 = ((Fix) (GIsp + 5)->Val);
         callg_arg6 = llrt_vag((GIsp + 4)->Val);
         callg_arg7 = ((Fix) (GIsp + 3)->Val);
         callg_arg8 = ((Fix) (GIsp + 2)->Val);
         callg_arg9 = ((Fix) (GIsp + 1)->Val);
         callg_arg10 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_change_gc_values(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8,callg_arg9,callg_arg10));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 10;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_130() {     /* x11_change_attributes */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = GYx11def[62];
        GIa2 = (Ptr) 4;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         callg_arg1 = llrt_vag((GIsp + 3)->Val);
         callg_arg2 = llrt_vag((GIsp + 2)->Val);
         callg_arg3 = ((Ptr) ((GIsp + 1)->Val->Val)+2);
         callg_arg4 = ((Ptr) (GIsp->Val->Val)+2);
         callg_retv = ((long) x11_change_attributes(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_131() {     /* x11_graph_subwindow_mode */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_retv = ((long) x11_graph_subwindow_mode(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_132() {     /* x11_list_fonts */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 5)    goto l_101;
        GIa1 = GYx11def[63];
        GIa2 = (Ptr) 5;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {Ptr callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         Ptr callg_arg4;
         Ptr callg_arg5;
         callg_arg1 = llrt_vag((GIsp + 4)->Val);
         callg_arg2 = ((Ptr) ((GIsp + 3)->Val->Val)+2);
         callg_arg3 = ((Fix) (GIsp + 2)->Val);
         callg_arg4 = ((Ptr) (GIsp + 1)->Val);   callg_arg5 = ((Ptr) GIsp->Val);         callg_retv = ((Ptr) x11_list_fonts(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5));
         GIa1 = ((Ptr) callg_retv);
        }
l_102:
        GIsp += (Fix) 5;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_133() {     /* x11_font_info */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = GYx11def[64];
        GIa2 = (Ptr) 4;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         callg_arg1 = llrt_vag((GIsp + 3)->Val);
         callg_arg2 = ((Ptr) ((GIsp + 2)->Val->Val)+2);
         callg_arg3 = llrt_vag((GIsp + 1)->Val);
         callg_arg4 = ((Ptr) (GIsp->Val->Val)+2);
         callg_retv = ((long) x11_font_info(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_134() {     /* x11_set_planemask */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_arg3 = llrt_vag((GIsp + 1)->Val);
         callg_retv = ((long) x11_set_planemask(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_135() {     /* x11_xdisplay */
   {    register Ptr aRet;
        {Ptr callg_retv;
         Ptr callg_arg1;
         callg_arg1 = llrt_vag(GIa1);
         callg_retv = ((Ptr) x11_xdisplay(callg_arg1));
         GIa1 = ((Ptr) callg_retv);
        }
l_101:
        {aRet = (GYx11def[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_136() {     /* x11_subst_colors */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 7)    goto l_101;
        GIa1 = GYx11def[65];
        GIa2 = (Ptr) 7;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         long callg_arg5;
         long callg_arg6;
         long callg_arg7;
         callg_arg1 = llrt_vag((GIsp + 6)->Val);
         callg_arg2 = llrt_vag((GIsp + 5)->Val);
         callg_arg3 = ((Ptr) ((GIsp + 4)->Val->Val)+2);
         callg_arg4 = ((Ptr) ((GIsp + 3)->Val->Val)+2);
         callg_arg5 = ((Fix) (GIsp + 2)->Val);
         callg_arg6 = ((Fix) (GIsp + 1)->Val);
         callg_arg7 = ((Fix) GIsp->Val);
         callg_retv = ((long) x11_subst_colors(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 7;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_137() {     /* x11_lookup_named_color */
   {    register Ptr aRet;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = GYx11def[66];
        GIa2 = (Ptr) 4;
        {aRet = (GYx11def[1] + 2)->Val; goto lRet;}
l_101:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         callg_arg1 = llrt_vag((GIsp + 3)->Val);
         callg_arg2 = ((Ptr) ((GIsp + 2)->Val->Val)+2);
         callg_arg3 = ((Ptr) ((GIsp + 1)->Val->Val)+2);
         callg_arg4 = ((Ptr) (GIsp->Val->Val)+2);
         callg_retv = ((long) x11_lookup_named_color(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_102:
        GIsp += (Fix) 4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_138() {     /* x11_query_color */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         Ptr callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Fix) GIsp->Val);
         callg_arg3 = ((Ptr) ((GIsp + 1)->Val->Val)+2);
         callg_retv = ((long) x11_query_color(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_139() {     /* x11_setappname */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = ((Ptr) (GIa1->Val)+2);
         callg_retv = ((long) x11_setappname(callg_arg1));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_140() {     /* x11_setappclass */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = ((Ptr) (GIa1->Val)+2);
         callg_retv = ((long) x11_setappclass(callg_arg1));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11def_141() {     /* vms_init_lispcall */
   {    register Ptr aRet, rA1, rA3, rA4;
        rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA3 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        rA3 = rA3->Val;
        rA1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11def_142() {     /* x11_forget_window_gravity */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = llrt_vag(GIsp->Val);
         callg_retv = ((long) x11_forget_window_gravity(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDx11def_143() {     /* trace x11_create_stipple */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,0,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_144() {     /* trace x11_set_stipple */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,69,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_145() {     /* trace x11_set_fill_mode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,71,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_146() {     /* trace x11_fill_rectangle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,3,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_147() {     /* trace x11_fill_arc */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,4,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_148() {     /* trace x11_fill_area */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,5,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_149() {     /* trace x11_fill_rectangles */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,6,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_150() {     /* trace x11_fill_arcs */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,7,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_151() {     /* trace x11_xcolor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,72,67,73);
  lRet:  return (aRet);}}

static Ptr GDx11def_152() {     /* trace x11_lispcolor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,74,67,73);
  lRet:  return (aRet);}}

static Ptr GDx11def_153() {     /* trace x11_xcolorp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,75,67,73);
  lRet:  return (aRet);}}

static Ptr GDx11def_154() {     /* trace x11_lispcolorp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,76,67,73);
  lRet:  return (aRet);}}

static Ptr GDx11def_155() {     /* trace x11_query_color_from_pixel */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,77,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_156() {     /* trace x11_get_byte_line */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,8,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_157() {     /* trace x11_free_cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,78,67,73);
  lRet:  return (aRet);}}

static Ptr GDx11def_158() {     /* trace x11_set_byte_line */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,9,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_159() {     /* trace x11_byteref */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,10,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_160() {     /* trace x11_byteset */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,11,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_161() {     /* trace x11_initialise */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,79,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_162() {     /* trace x11_bitprologue */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,12,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_163() {     /* trace x11_x_version */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,80,67,81);
  lRet:  return (aRet);}}

static Ptr GDx11def_164() {     /* trace x11_x_release */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,82,67,81);
  lRet:  return (aRet);}}

static Ptr GDx11def_165() {     /* trace x11_x_revision */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,83,67,81);
  lRet:  return (aRet);}}

static Ptr GDx11def_166() {     /* trace x11_init_pixels */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,13,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_167() {     /* trace x11_bitepilogue */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,84,67,81);
  lRet:  return (aRet);}}

static Ptr GDx11def_168() {     /* trace x11_bitmap_flush */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,85,67,81);
  lRet:  return (aRet);}}

static Ptr GDx11def_169() {     /* trace x11_bitmap_sync */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,86,67,81);
  lRet:  return (aRet);}}

static Ptr GDx11def_170() {     /* trace x11_bitmap_refresh */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,87,67,73);
  lRet:  return (aRet);}}

static Ptr GDx11def_171() {     /* trace x11_root_window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,88,67,81);
  lRet:  return (aRet);}}

static Ptr GDx11def_172() {     /* trace x11_pop_window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,89,67,73);
  lRet:  return (aRet);}}

static Ptr GDx11def_173() {     /* trace x11_move_behind_window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,90,67,73);
  lRet:  return (aRet);}}

static Ptr GDx11def_174() {     /* trace x11_kill_window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,91,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_175() {     /* trace x11_kill_ll_window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,92,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_176() {     /* trace x11_find_window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,93,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_177() {     /* trace x11_map_window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,14,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_178() {     /* trace x11_eventp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,94,67,81);
  lRet:  return (aRet);}}

static Ptr GDx11def_179() {     /* trace x11_flush_event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,95,67,81);
  lRet:  return (aRet);}}

static Ptr GDx11def_180() {     /* trace x11_grab_event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,96,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_181() {     /* trace x11_ungrab_event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,97,67,81);
  lRet:  return (aRet);}}

static Ptr GDx11def_182() {     /* trace x11_read_event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,98,67,73);
  lRet:  return (aRet);}}

static Ptr GDx11def_183() {     /* trace x11_peek_event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,99,67,73);
  lRet:  return (aRet);}}

static Ptr GDx11def_184() {     /* trace x11_read_mouse */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,100,67,73);
  lRet:  return (aRet);}}

static Ptr GDx11def_185() {     /* trace x11_load_font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,101,67,73);
  lRet:  return (aRet);}}

static Ptr GDx11def_186() {     /* trace x11_font_height */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,102,67,81);
  lRet:  return (aRet);}}

static Ptr GDx11def_187() {     /* trace x11_font_ascent */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,103,67,81);
  lRet:  return (aRet);}}

static Ptr GDx11def_188() {     /* trace x11_width_string */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,15,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_189() {     /* trace x11_height_string */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,16,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_190() {     /* trace x11_x_base_string */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,17,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_191() {     /* trace x11_y_base_string */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,18,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_192() {     /* trace x11_create_bitmap */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,104,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_193() {     /* trace x11_kill_bitmap */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,105,67,73);
  lRet:  return (aRet);}}

static Ptr GDx11def_194() {     /* trace x11_get_bit_line */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,19,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_195() {     /* trace x11_set_bit_line */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,20,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_196() {     /* trace x11_bmref */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,21,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_197() {     /* trace x11_bmset */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,22,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_198() {     /* trace x11_default_gc */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,106,67,81);
  lRet:  return (aRet);}}

static Ptr GDx11def_199() {     /* trace x11_pixmap_to_bitmap */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,23,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_200() {     /* trace x11_set_cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,107,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_201() {     /* trace x11_create_cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,108,67,73);
  lRet:  return (aRet);}}

static Ptr GDx11def_202() {     /* trace x11_move_cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,109,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_203() {     /* trace x11_make_color */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,24,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_204() {     /* trace x11_make_mutable_color */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,25,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_205() {     /* trace x11_make_named_color */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,110,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_206() {     /* trace x11_kill_color */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,111,67,73);
  lRet:  return (aRet);}}

static Ptr GDx11def_207() {     /* trace x11_color_component */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,26,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_208() {     /* trace x11_get_default */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,112,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_209() {     /* trace x11_bitblit */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,27,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_210() {     /* trace x11_make_cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,28,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_211() {     /* trace x11_synchronize */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,113,67,73);
  lRet:  return (aRet);}}

static Ptr GDx11def_212() {     /* trace x11_create_window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,29,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_213() {     /* trace x11_create_subwindow */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,30,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_214() {     /* trace x11_create_transparentwindow */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,31,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_215() {     /* trace x11_move_window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,32,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_216() {     /* trace x11_resize_window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,33,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_217() {     /* trace x11_moveresize_window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,34,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_218() {     /* trace x11_changewindow_border */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,114,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_219() {     /* trace x11_changewindow_bordercolor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,115,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_220() {     /* trace x11_build_mask */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,116,67,73);
  lRet:  return (aRet);}}

static Ptr GDx11def_221() {     /* trace x11_changeeventmask_window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,117,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_222() {     /* trace x11_changelongmask_window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,118,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_223() {     /* trace x11_change_title */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,119,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_224() {     /* trace x11_change_icontitle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,120,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_225() {     /* trace x11_create_graph_env */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,35,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_226() {     /* trace x11_new_create_graph_env */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,36,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_227() {     /* trace x11_free_graph_env */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,121,67,73);
  lRet:  return (aRet);}}

static Ptr GDx11def_228() {     /* trace x11_window_map */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,122,67,73);
  lRet:  return (aRet);}}

static Ptr GDx11def_229() {     /* trace x11_window_unmap */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,123,67,73);
  lRet:  return (aRet);}}

static Ptr GDx11def_230() {     /* trace x11_clear_window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,37,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_231() {     /* trace x11_set_font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,124,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_232() {     /* trace x11_set_clip */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,38,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_233() {     /* trace x11_set_clips */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,39,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_234() {     /* trace x11_draw_string */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,40,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_235() {     /* trace x11_draw_image_string */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,41,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_236() {     /* trace x11_set_mode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,125,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_237() {     /* trace x11_set_line_style */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,42,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_238() {     /* trace x11_set_pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,126,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_239() {     /* trace x11_draw_point */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,43,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_240() {     /* trace x11_draw_points */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,44,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_241() {     /* trace x11_draw_segments */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,45,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_242() {     /* trace x11_draw_line */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,46,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_243() {     /* trace x11_draw_lines */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,47,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_244() {     /* trace x11_draw_rectangle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,48,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_245() {     /* trace x11_draw_rectangles */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,49,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_246() {     /* trace x11_draw_arc */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,50,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_247() {     /* trace x11_draw_arcs */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,51,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_248() {     /* trace x11_fill_oldrectangle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,52,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_249() {     /* trace x11_fill_oldrectangles */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,53,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_250() {     /* trace x11_fill_oldarc */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,54,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_251() {     /* trace x11_fill_oldarcs */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,55,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_252() {     /* trace x11_fill_oldarea */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,56,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_253() {     /* trace x11_set_foreground */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,127,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_254() {     /* trace x11_set_background */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,128,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_255() {     /* trace x11_setwindow_background */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,129,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_256() {     /* trace x11_imagebyteorder */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,130,67,81);
  lRet:  return (aRet);}}

static Ptr GDx11def_257() {     /* trace x11_bitmapbitorder */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,131,67,81);
  lRet:  return (aRet);}}

static Ptr GDx11def_258() {     /* trace x11_seticon_pixmap */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,132,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_259() {     /* trace x11_setwindow_state */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,133,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_260() {     /* trace x11_set_window_pixmap */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,134,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_261() {     /* trace x11_store_bytes */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,135,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_262() {     /* trace x11_fetch_bytes */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,136,67,73);
  lRet:  return (aRet);}}

static Ptr GDx11def_263() {     /* trace x11_bytes_to_llstring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,137,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_264() {     /* trace x11_topmove_window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,57,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_265() {     /* trace x11_topresize_window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,58,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_266() {     /* trace x11_topmoveresize_window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,59,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_267() {     /* trace x11_topchangewindow_border */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,60,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_268() {     /* trace x11_depth */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,138,67,81);
  lRet:  return (aRet);}}

static Ptr GDx11def_269() {     /* trace x11_get_format */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,139,67,140);
  lRet:  return (aRet);}}

static Ptr GDx11def_270() {     /* trace x11_get_data_string */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,141,67,140);
  lRet:  return (aRet);}}

static Ptr GDx11def_271() {     /* trace x11_change_gc_values */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,61,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_272() {     /* trace x11_change_attributes */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,62,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_273() {     /* trace x11_graph_subwindow_mode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,142,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_274() {     /* trace x11_list_fonts */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,63,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_275() {     /* trace x11_font_info */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,64,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_276() {     /* trace x11_set_planemask */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,143,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_277() {     /* trace x11_xdisplay */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,144,67,81);
  lRet:  return (aRet);}}

static Ptr GDx11def_278() {     /* trace x11_subst_colors */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,65,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_279() {     /* trace x11_lookup_named_color */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,66,67,68);
  lRet:  return (aRet);}}

static Ptr GDx11def_280() {     /* trace x11_query_color */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,145,67,70);
  lRet:  return (aRet);}}

static Ptr GDx11def_281() {     /* trace x11_setappname */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,146,67,81);
  lRet:  return (aRet);}}

static Ptr GDx11def_282() {     /* trace x11_setappclass */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,147,67,81);
  lRet:  return (aRet);}}

static Ptr GDx11def_283() {     /* trace vms_init_lispcall */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,148,67,81);
  lRet:  return (aRet);}}

static Ptr GDx11def_284() {     /* trace x11_forget_window_gravity */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11def,149,67,73);
  lRet:  return (aRet);}}

