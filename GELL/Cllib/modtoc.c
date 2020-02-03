/* GELL 15.26: source file for the module: "modtoc" */
/*             translation done:           "Wed June 16 93 18:05:30 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "modtoc.h" 

static Ptr GLmodtoc_1() {       /* module-to-c */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLmodtoc_2);
        (--rSp)->Val = GYmodtoc[0];
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = ((Ptr) GLmodtoc_3); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_5);
        {aRet = (GYmodtoc[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_5() {       /* call_modtoc_4 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmodtoc_6); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_8);
        {aRet = (GYmodtoc[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_8() {       /* call_modtoc_7 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GInil;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_10);
        {aRet = ((Ptr) GLmodtoc_11); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_10() {      /* call_modtoc_9 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        rLit[3]->Val = GIa1;
        (--GIsp)->Val = ((Ptr) GLmodtoc_13);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_13() {      /* call_modtoc_12 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        rLit[5]->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_14);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[6]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_14() {      /* 104 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_16);
        {aRet = (GYmodtoc[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_16() {      /* call_modtoc_15 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        rLit[9]->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_17);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[10]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_17() {      /* 105 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_19);
        {aRet = (GYmodtoc[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_19() {      /* call_modtoc_18 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        rLit[11]->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_20);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[12]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_20() {      /* 106 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_22);
        {aRet = (GYmodtoc[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_22() {      /* call_modtoc_21 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        rLit[13]->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_23);
        (--rSp)->Val = rLit[14]->Val;
        (--rSp)->Val = rLit[3]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_23() {      /* 107 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        rLit[15]->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_24);
        (--rSp)->Val = rLit[16]->Val;
        (--rSp)->Val = rLit[3]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_24() {      /* 108 */
   {    register Ptr aRet, *rLit, rNil;
        rLit = GYmodtoc; rNil = GInil;
        rLit[17]->Val = GIa1;
        rLit[18]->Val = rNil;
        rLit[19]->Val = rNil;
        rLit[20]->Val = rNil;
        rLit[21]->Val = rNil;
        rLit[22]->Val = rLit[23]->Val;
        rLit[24]->Val = rNil;
        rLit[25]->Val = rNil;
        rLit[26]->Val = rNil;
        rLit[27]->Val = (Ptr) 0;
        rLit[28]->Val = rNil;
        rLit[29]->Val = rNil;
        (--GIsp)->Val = ((Ptr) GLmodtoc_26);
        {aRet = ((Ptr) GLmodtoc_27); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_26() {      /* call_modtoc_25 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_28);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_28() {      /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_29);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_30);
        (--rSp)->Val = rLit[13]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_30() {      /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 5)->Val;
        GIa1 = GYmodtoc[31];
        (--rSp)->Val = ((Ptr) GLmodtoc_32);
        {aRet = ((Ptr) GLmodtoc_33); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_32() {      /* call_modtoc_31 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_35);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_35() {      /* call_modtoc_34 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[32];
        GIa2 = rLit[5]->Val;
        GIa1 = rLit[33];
        (--GIsp)->Val = ((Ptr) GLmodtoc_38);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_38() {      /* call_modtoc_37 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_41);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_41() {      /* call_modtoc_40 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_43);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_43() {      /* call_modtoc_42 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[34];
        (--GIsp)->Val = ((Ptr) GLmodtoc_45);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_45() {      /* call_modtoc_44 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_48);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_48() {      /* call_modtoc_47 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_50);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_50() {      /* call_modtoc_49 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_52);
        (--rSp)->Val = rLit[35];
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[12]->Val;
        (--rSp)->Val = rLit[36];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_52() {      /* 113 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_54);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_54() {      /* call_modtoc_53 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[38];
        (--GIsp)->Val = ((Ptr) GLmodtoc_56);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_56() {      /* call_modtoc_55 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_58);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_58() {      /* call_modtoc_57 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_60);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_60() {      /* call_modtoc_59 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[39];
        (--GIsp)->Val = ((Ptr) GLmodtoc_62);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_62() {      /* call_modtoc_61 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_64);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_64() {      /* call_modtoc_63 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[40];
        GIa2 = (rSp + 5)->Val;
        GIa1 = rLit[41];
        (--rSp)->Val = ((Ptr) GLmodtoc_66);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_66() {      /* call_modtoc_65 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_68);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_68() {      /* call_modtoc_67 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[42];
        (--GIsp)->Val = ((Ptr) GLmodtoc_70);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_70() {      /* call_modtoc_69 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_72);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_72() {      /* call_modtoc_71 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_74);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_74() {      /* call_modtoc_73 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLmodtoc_75);
        {aRet = ((Ptr) GLmodtoc_29); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_29() {      /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_76);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_76() {      /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_75() {      /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLmodtoc_77);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_77() {      /* 115 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_78);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_79);
        (--rSp)->Val = rLit[9]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_79() {      /* 118 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[43];
        GIa2 = (rSp + 5)->Val;
        GIa1 = rLit[44];
        (--rSp)->Val = ((Ptr) GLmodtoc_81);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_81() {      /* call_modtoc_80 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_83);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_83() {      /* call_modtoc_82 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[43];
        GIa2 = rLit[5]->Val;
        GIa1 = rLit[45];
        (--GIsp)->Val = ((Ptr) GLmodtoc_85);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_85() {      /* call_modtoc_84 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_87);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_87() {      /* call_modtoc_86 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_88);
        (--rSp)->Val = rLit[46];
        (--rSp)->Val = rLit[47];
        (--rSp)->Val = rLit[48];
        (--rSp)->Val = rLit[49];
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLmodtoc_89); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_89() {      /* 120 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLmodtoc_90); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_91);
        (--rSp)->Val = rLit[50]->Val;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_91() {      /* 122 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_89); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_90() {      /* 121 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_92); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_88() {      /* 119 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_94);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_94() {      /* call_modtoc_93 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLmodtoc_95);
        {aRet = ((Ptr) GLmodtoc_78); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_78() {      /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_96);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_96() {      /* 123 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_95() {      /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLmodtoc_97);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_97() {      /* 124 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_98);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_98() {      /* 125 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_99);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[52] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_99() {      /* 126 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_100);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_100() {     /* 127 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_101);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_102);
        (--rSp)->Val = rLit[11]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_102() {     /* 130 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_103);
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_103() {     /* 131 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_104);
        (--rSp)->Val = ((Ptr) GLmodtoc_105);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[54] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_105() {     /* 133 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = (GIa1->Val + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (--GIsp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYmodtoc[52] + 2)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_104() {     /* 132 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_106);
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_108);
        {aRet = (GYmodtoc[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_108() {     /* call_modtoc_107 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_110);
        {aRet = (GYmodtoc[56] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_110() {     /* call_modtoc_109 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[53] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_106() {     /* 134 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[43];
        GIa2 = (rSp + 8)->Val;
        GIa1 = rLit[57];
        (--rSp)->Val = ((Ptr) GLmodtoc_112);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_112() {     /* call_modtoc_111 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_114);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_114() {     /* call_modtoc_113 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[43];
        GIa2 = rLit[5]->Val;
        GIa1 = rLit[58];
        (--GIsp)->Val = ((Ptr) GLmodtoc_116);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_116() {     /* call_modtoc_115 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_118);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_118() {     /* call_modtoc_117 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[59];
        GIa2 = rLit[60]->Val;
        GIa1 = rLit[61];
        (--GIsp)->Val = ((Ptr) GLmodtoc_120);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_120() {     /* call_modtoc_119 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_122);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_122() {     /* call_modtoc_121 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[59];
        GIa2 = rLit[62]->Val;
        GIa1 = rLit[63];
        (--GIsp)->Val = ((Ptr) GLmodtoc_124);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_124() {     /* call_modtoc_123 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_126);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_126() {     /* call_modtoc_125 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_128);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_128() {     /* call_modtoc_127 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[64];
        (--GIsp)->Val = ((Ptr) GLmodtoc_130);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_130() {     /* call_modtoc_129 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_132);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_132() {     /* call_modtoc_131 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[65];
        GIa2 = (rSp + 8)->Val;
        GIa1 = rLit[66];
        (--rSp)->Val = ((Ptr) GLmodtoc_134);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_134() {     /* call_modtoc_133 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_136);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_136() {     /* call_modtoc_135 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_138);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_138() {     /* call_modtoc_137 */
   {    register Ptr aRet;
        if (GYmodtoc[67]->Val == GInil) {aRet = ((Ptr) GLmodtoc_139); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLmodtoc_139);
        {aRet = ((Ptr) GLmodtoc_140); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_139() {     /* 136 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = rLit[68];
        (--rSp)->Val = rLit[69]->Val;
        rLit[69]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[70];
        (--rSp)->Val = rLit[71];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_141);
        (--rSp)->Val = rLit[72];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        {aRet = ((Ptr) GLmodtoc_142); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_142() {     /* 138 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_144);
        {aRet = (GYmodtoc[73] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_144() {     /* call_modtoc_143 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4, rBcons;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
        (rSp + 19)->Val = rA1;
        if ((long) rA1 < (long) rBcons) goto l_140;
        if (rA1->Val != rLit[74])       goto l_140;
        rA4 = (rA1 + 1)->Val;
        if ((long) rA4->Val < (long) rBcons)    goto l_140;
        rA3 = (rA1 + 1)->Val;
        rA3 = rA3->Val;
        if (rA3->Val != rLit[75])       goto l_140;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_142);
        {aRet = ((Ptr) GLmodtoc_145); goto lRet;}
l_140:
        if (rLit[76]->Val == GInil)     goto l_142;
        (--rSp)->Val = ((Ptr) GLmodtoc_142);
        (--rSp)->Val = rLit[77];
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = ((Ptr) GLmodtoc_146); goto lRet;}
l_142:
        (--rSp)->Val = ((Ptr) GLmodtoc_142);
        {aRet = ((Ptr) GLmodtoc_147); goto lRet;}
l_139:
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLmodtoc_141); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_141() {     /* 137 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[69]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        GIa1 = rLit[19]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_149);
        {aRet = ((Ptr) GLmodtoc_150); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_149() {     /* call_modtoc_148 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_152);
        {aRet = ((Ptr) GLmodtoc_153); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_152() {     /* call_modtoc_151 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_154);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_154() {     /* 145 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_155);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_156);
        (--rSp)->Val = rLit[9]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_156() {     /* 148 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_157);
        (--rSp)->Val = rLit[78];
        (--rSp)->Val = rLit[47];
        (--rSp)->Val = rLit[79];
        GIa1 = rLit[22]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_159);
        {aRet = (rLit[80] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_159() {     /* call_modtoc_158 */
   {    register Ptr aRet, rSp, rA1, rA2, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GInil;
l_150:
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_151;
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA2 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
        goto l_150;
l_151:
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_92); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_157() {     /* 149 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_160);
        (--rSp)->Val = rLit[81];
        (--rSp)->Val = rLit[82];
        (--rSp)->Val = rLit[79];
        GIa1 = rLit[25]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_162);
        {aRet = (rLit[80] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_162() {     /* call_modtoc_161 */
   {    register Ptr aRet, rSp, rA1, rA2, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GInil;
l_153:
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_154;
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA2 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
        goto l_153;
l_154:
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_92); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_160() {     /* 152 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_163);
        (--rSp)->Val = rLit[83];
        (--rSp)->Val = rLit[82];
        (--rSp)->Val = rLit[79];
        GIa1 = rLit[24]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_165);
        {aRet = (rLit[80] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_165() {     /* call_modtoc_164 */
   {    register Ptr aRet, rSp, rA1, rA2, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GInil;
l_156:
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_157;
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA2 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
        goto l_156;
l_157:
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_92); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_163() {     /* 155 */
   {    register Ptr aRet;
        if (GYmodtoc[20]->Val == GInil) {aRet = ((Ptr) GLmodtoc_166); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLmodtoc_168);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_168() {     /* call_modtoc_167 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa1 = rLit[20]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_170);
        {aRet = (rLit[80] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_170() {     /* call_modtoc_169 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLmodtoc_171); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_171() {     /* 160 */
   {    register Ptr aRet, *rLit, rSp, rA2, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA2 = GIa2; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLmodtoc_172); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA2 = rSp->Val;
        GIa3 = rLit[84];
        rA2 = rA2->Val;
        GIa1 = rLit[85];
        (--rSp)->Val = ((Ptr) GLmodtoc_174);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_174() {     /* call_modtoc_173 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_176);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_176() {     /* call_modtoc_175 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = rSp->Val;
        rSp->Val = (GIa4 + 1)->Val;
        {aRet = ((Ptr) GLmodtoc_177); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_177() {     /* 162 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = rSp->Val;
        if ((GIa4 + 1)->Val == GInil)   {aRet = ((Ptr) GLmodtoc_178); goto lRet;}
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_180);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_180() {     /* call_modtoc_179 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rSp->Val = (rA1 + 1)->Val;
        GIa2 = GYmodtoc[86];
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_182);
        {aRet = ((Ptr) GLmodtoc_33); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_182() {     /* call_modtoc_181 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_177);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_178() {     /* 163 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_184);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_184() {     /* call_modtoc_183 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        GIa2 = GYmodtoc[87];
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_186);
        {aRet = ((Ptr) GLmodtoc_33); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_186() {     /* call_modtoc_185 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_188);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_188() {     /* call_modtoc_187 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_171); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_172() {     /* 161 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_166); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_166() {     /* 159 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_190);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_190() {     /* call_modtoc_189 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLmodtoc_191);
        (--rSp)->Val = rLit[88];
        (--rSp)->Val = rLit[17]->Val;
        (--rSp)->Val = rLit[89];
        rA1 = rLit[18]->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        if (rA1 != (Ptr) 0)     goto l_165;
        rA4 = (Ptr) 1;
        goto l_166;
l_165:
        rA4 = rA1;
l_166:
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[90];
        rA4 = (Ptr) 5;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_191() {     /* 164 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_193);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_193() {     /* call_modtoc_192 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_195);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_195() {     /* call_modtoc_194 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_196);
        (--rSp)->Val = rLit[91]->Val;
        (--rSp)->Val = rLit[3]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_196() {     /* 167 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_197);
        (--rSp)->Val = rLit[92]->Val;
        (--rSp)->Val = rLit[3]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_197() {     /* 168 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_198);
        (--rSp)->Val = rLit[14]->Val;
        (--rSp)->Val = rLit[3]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_198() {     /* 169 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_199);
        (--rSp)->Val = rLit[93]->Val;
        (--rSp)->Val = rLit[3]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_199() {     /* 170 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = rLit[19]->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLmodtoc_200);
        (--rSp)->Val = rLit[94];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[95];
        (--rSp)->Val = rLit[3]->Val;
        (--rSp)->Val = rLit[96];
        GIa4 = (Ptr) 5;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_200() {     /* 171 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_202);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_202() {     /* call_modtoc_201 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_203);
        (--rSp)->Val = rLit[94];
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[95];
        (--rSp)->Val = rLit[5]->Val;
        (--rSp)->Val = rLit[96];
        GIa4 = (Ptr) 5;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_203() {     /* 172 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_205);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_205() {     /* call_modtoc_204 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (rSp->Val == (Ptr) 0)        {aRet = ((Ptr) GLmodtoc_206); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_208);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_208() {     /* call_modtoc_207 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[97];
        GIa2 = (rSp + 1)->Val;
        GIa1 = rLit[98];
        (--rSp)->Val = ((Ptr) GLmodtoc_210);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_210() {     /* call_modtoc_209 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_212);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_212() {     /* call_modtoc_211 */
   {    register Ptr aRet;
        (--GIsp)->Val = GYmodtoc[19]->Val;
        {aRet = ((Ptr) GLmodtoc_213); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_213() {     /* 175 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLmodtoc_214); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA1 = rSp->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_216);
        {aRet = ((Ptr) GLmodtoc_217); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_216() {     /* call_modtoc_215 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_177;
        (--rSp)->Val = ((Ptr) GLmodtoc_218);
        (--rSp)->Val = GYmodtoc[99];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = ((Ptr) GLmodtoc_146); goto lRet;}
l_177:
        rA1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_220);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_220() {     /* call_modtoc_219 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[100];
        GIa2 = rSp->Val;
        GIa1 = rLit[101];
        (--rSp)->Val = ((Ptr) GLmodtoc_222);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_222() {     /* call_modtoc_221 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_224);
        {aRet = (GYmodtoc[102] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_224() {     /* call_modtoc_223 */
   {    register Ptr aRet;
        if ((Fix) (GIa1) >= (Fix) 6)    {aRet = ((Ptr) GLmodtoc_225); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_225);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_225() {     /* 181 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_226);
        rA1 = (rSp + 2)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_228);
        {aRet = ((Ptr) GLmodtoc_229); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_228() {     /* call_modtoc_227 */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYmodtoc; rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[100];
        rA2 = (rSp + 4)->Val;
        rA2 = (rA2 + 1)->Val;
        GIa1 = rLit[103];
        (--rSp)->Val = ((Ptr) GLmodtoc_231);
        {aRet = ((Ptr) GLmodtoc_232); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_231() {     /* call_modtoc_230 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GYmodtoc[104];
        rA1 = (rSp + 6)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_234);
        {aRet = ((Ptr) GLmodtoc_235); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_234() {     /* call_modtoc_233 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[59];
        GIa4 = (Ptr) 6;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_226() {     /* 182 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_218);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_218() {     /* 178 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_213); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_214() {     /* 176 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = GYmodtoc[87];
        (--rSp)->Val = ((Ptr) GLmodtoc_237);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_237() {     /* call_modtoc_236 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_206);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_206() {     /* 174 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_239);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_239() {     /* call_modtoc_238 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[105];
        GIa2 = (rSp + 2)->Val;
        GIa1 = rLit[106];
        (--rSp)->Val = ((Ptr) GLmodtoc_241);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_241() {     /* call_modtoc_240 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_243);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_243() {     /* call_modtoc_242 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_245);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_245() {     /* call_modtoc_244 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[107];
        (--GIsp)->Val = ((Ptr) GLmodtoc_247);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_247() {     /* call_modtoc_246 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_249);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_249() {     /* call_modtoc_248 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_251);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_251() {     /* call_modtoc_250 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYmodtoc[86];
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_253);
        {aRet = ((Ptr) GLmodtoc_33); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_253() {     /* call_modtoc_252 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_255);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_255() {     /* call_modtoc_254 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_257);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_257() {     /* call_modtoc_256 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYmodtoc[86];
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_259);
        {aRet = ((Ptr) GLmodtoc_33); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_259() {     /* call_modtoc_258 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_261);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_261() {     /* call_modtoc_260 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_263);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_263() {     /* call_modtoc_262 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa2 = rLit[86];
        GIa1 = rLit[17]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_265);
        {aRet = ((Ptr) GLmodtoc_33); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_265() {     /* call_modtoc_264 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_267);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_267() {     /* call_modtoc_266 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_269);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_269() {     /* call_modtoc_268 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYmodtoc[86];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_271);
        {aRet = ((Ptr) GLmodtoc_33); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_271() {     /* call_modtoc_270 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_273);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_273() {     /* call_modtoc_272 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (rSp->Val != (Ptr) 0)        {aRet = ((Ptr) GLmodtoc_274); goto lRet;}
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_276);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_276() {     /* call_modtoc_275 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[108];
        (--GIsp)->Val = ((Ptr) GLmodtoc_278);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_278() {     /* call_modtoc_277 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_279);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_274() {     /* 183 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_281);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_281() {     /* call_modtoc_280 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYmodtoc[87];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_283);
        {aRet = ((Ptr) GLmodtoc_33); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_283() {     /* call_modtoc_282 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_279);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_279() {     /* 184 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 5;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLmodtoc_284);
        {aRet = ((Ptr) GLmodtoc_155); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_155() {     /* 146 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_285);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_285() {     /* 185 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_284() {     /* 147 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLmodtoc_286);
        (--rSp)->Val = rLit[9]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[109] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_286() {     /* 186 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_288);
        {aRet = ((Ptr) GLmodtoc_289); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_288() {     /* call_modtoc_287 */
   {    register Ptr aRet;
        if (GYmodtoc[67]->Val == GInil) {aRet = ((Ptr) GLmodtoc_290); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLmodtoc_290);
        {aRet = ((Ptr) GLmodtoc_291); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_290() {     /* 188 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_292);
        (--rSp)->Val = rLit[11]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[109] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_292() {     /* 189 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj6);
        {aRet = ((Ptr) GLmodtoc_101); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_101() {     /* 128 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_293);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_293() {     /* 190 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_294);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[52] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_294() {     /* 191 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_295);
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_295() {     /* 192 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_296);
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_296() {     /* 193 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_6() {       /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rSp->Val;
        GIa2 = rLit[110];
        GIa1 = rLit[111];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_92() {      /* #:modtoc:princlude-list-of-decl */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLmodtoc_297); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_298);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_298() {     /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_299);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_300);
        (--rSp)->Val = rLit[9]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_300() {     /* 106 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_302);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_302() {     /* call_modtoc_301 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[112];
        GIa2 = (rSp + 7)->Val;
        GIa1 = rLit[113];
        (--rSp)->Val = ((Ptr) GLmodtoc_304);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_304() {     /* call_modtoc_303 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_306);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_306() {     /* call_modtoc_305 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_307);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[51] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_307() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_308);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[52] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_308() {     /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_309);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_310);
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_310() {     /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_311);
        (--rSp)->Val = ((Ptr) GLmodtoc_312);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[54] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_312() {     /* 113 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = (GIa1->Val + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (--GIsp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYmodtoc[52] + 2)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_311() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = GInil;
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLmodtoc_313); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_313() {     /* 114 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil, rBcons;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
l_GLmodtoc_313:
        if ((long) rSp->Val < (long) rBcons)    {aRet = ((Ptr) GLmodtoc_314); goto lRet;}
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        rA4 = (rSp++)->Val;
        (rSp + 1)->Val = rA4->Val;
        rA2 = (rA4 + 1)->Val;
        rA1 = (rSp + 1)->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 != rNil)        goto l_GLmodtoc_313;
        if ((rSp + 2)->Val != (Ptr) 0)  {aRet = ((Ptr) GLmodtoc_315); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_316);
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[114];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 17)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_316() {     /* 120 */
   {    register Ptr aRet;
        (GIsp + 2)->Val = (Ptr) 1;
        {aRet = ((Ptr) GLmodtoc_313); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_315() {     /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((rSp + 2)->Val != (Ptr) 4)  {aRet = ((Ptr) GLmodtoc_317); goto lRet;}
        GIa1 = GYmodtoc[115];
        (--rSp)->Val = ((Ptr) GLmodtoc_319);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_319() {     /* call_modtoc_318 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_321);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_321() {     /* call_modtoc_320 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_322);
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[114];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 17)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_322() {     /* 123 */
   {    register Ptr aRet;
        (GIsp + 2)->Val = (Ptr) 1;
        {aRet = ((Ptr) GLmodtoc_313); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_317() {     /* 121 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 13)->Val;
        GIa2 = (rSp + 1)->Val;
        GIa1 = GYmodtoc[116];
        (--rSp)->Val = ((Ptr) GLmodtoc_324);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_324() {     /* call_modtoc_323 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 2)->Val = rA4;
        {aRet = ((Ptr) GLmodtoc_313); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_314() {     /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        if ((rSp + 1)->Val == (Ptr) 0)  {aRet = ((Ptr) GLmodtoc_325); goto lRet;}
        GIa1 = GYmodtoc[115];
        (--rSp)->Val = ((Ptr) GLmodtoc_327);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_327() {     /* call_modtoc_326 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_328);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_325() {     /* 124 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = ((Ptr) GLmodtoc_328); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_328() {     /* 125 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 2;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLmodtoc_329);
        {aRet = ((Ptr) GLmodtoc_309); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_309() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_330);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[52] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_330() {     /* 126 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_331);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_331() {     /* 127 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_329() {     /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 2;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj5);
        {aRet = ((Ptr) GLmodtoc_299); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_299() {     /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_332);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_332() {     /* 128 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_297() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_150() {     /* #:modtoc:generate-trace-functions */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = llrt_call_length (rA1, GIbcons);
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLmodtoc_333);
        (--rSp)->Val = rLit[14]->Val;
        (--rSp)->Val = rLit[3]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_333() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = (Ptr) ((UFix) 0xffff);
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLmodtoc_334); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_334() {     /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLmodtoc_335); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_336);
        (--rSp)->Val = rLit[117];
        rA4 = (rSp + 2)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_338);
        {aRet = (rLit[118] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_338() {     /* call_modtoc_337 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 9)->Val = rA1;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 5;
        {aRet = (GYmodtoc[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_336() {     /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_340);
        {aRet = (GYmodtoc[120] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_340() {     /* call_modtoc_339 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLmodtoc_334); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_335() {     /* 103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 6;
        {aRet = ((Ptr) GLmodtoc_145); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_341() {     /* #:modtoc:init-register-use */
   {    register Ptr aRet, *rLit, rNil;
        rLit = GYmodtoc; rNil = GInil;
        rLit[121]->Val = (Ptr) 0;
        rLit[122]->Val = (Ptr) 0;
        rLit[123]->Val = (Ptr) 0;
        rLit[124]->Val = (Ptr) 0;
        rLit[125]->Val = (Ptr) 0;
        rLit[126]->Val = (Ptr) 0;
        rLit[127]->Val = (Ptr) 0;
        rLit[128]->Val = (Ptr) 0;
        rLit[129]->Val = (Ptr) 0;
        rLit[130]->Val = (Ptr) 0;
        rLit[131]->Val = (Ptr) 0;
        rLit[132]->Val = (Ptr) 0;
        rLit[133]->Val = (Ptr) 0;
        rLit[134]->Val = rNil;
        rLit[135]->Val = rNil;
        rLit[136]->Val = rNil;
        rLit[137]->Val = rNil;
        rLit[138]->Val = rNil;
        GIa1 = rNil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_342() {     /* #:modtoc:no-register-use */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        rLit[121]->Val = (Ptr) ((UFix) 0xd8f0);
        rLit[122]->Val = (Ptr) ((UFix) 0xd8f0);
        rLit[123]->Val = (Ptr) ((UFix) 0xd8f0);
        rLit[124]->Val = (Ptr) ((UFix) 0xd8f0);
        rLit[125]->Val = (Ptr) ((UFix) 0xd8f0);
        rLit[126]->Val = (Ptr) ((UFix) 0xd8f0);
        rLit[127]->Val = (Ptr) ((UFix) 0xd8f0);
        rLit[128]->Val = (Ptr) ((UFix) 0xd8f0);
        rLit[129]->Val = (Ptr) ((UFix) 0xd8f0);
        rLit[130]->Val = (Ptr) ((UFix) 0xd8f0);
        rLit[131]->Val = (Ptr) ((UFix) 0xd8f0);
        rLit[132]->Val = (Ptr) ((UFix) 0xd8f0);
        rLit[133]->Val = (Ptr) ((UFix) 0xd8f0);
        GIa1 = (Ptr) ((UFix) 0xd8f0);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_343() {     /* #:modtoc:use-register */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != rLit[139])   goto l_102;
        rA4 = rLit[121]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rLit[121]->Val = rA4;
        rA1 = rA4;
        {aRet = (rSp++)->Val; goto lRet;}
l_102:
        if (rA1 != rLit[140])   goto l_103;
        rA4 = rLit[122]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rLit[122]->Val = rA4;
        rA1 = rA4;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        if (rA1 != rLit[141])   goto l_104;
        rA4 = rLit[123]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rLit[123]->Val = rA4;
        rA1 = rA4;
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        if (rA1 != rLit[142])   goto l_105;
        rA4 = rLit[124]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rLit[124]->Val = rA4;
        rA1 = rA4;
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        if (rA1 != rLit[143])   goto l_106;
        rA4 = rLit[125]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rLit[125]->Val = rA4;
        rA1 = rA4;
        {aRet = (rSp++)->Val; goto lRet;}
l_106:
        if (rA1 != rLit[144])   goto l_107;
        rA4 = rLit[126]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rLit[126]->Val = rA4;
        rA1 = rA4;
        {aRet = (rSp++)->Val; goto lRet;}
l_107:
        if (rA1 != rLit[145])   goto l_108;
        rA4 = rLit[127]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rLit[127]->Val = rA4;
        rA1 = rA4;
        {aRet = (rSp++)->Val; goto lRet;}
l_108:
        if (rA1 != rLit[146])   goto l_109;
        rA4 = rLit[128]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rLit[128]->Val = rA4;
        rA1 = rA4;
        {aRet = (rSp++)->Val; goto lRet;}
l_109:
        if (rA1 != rLit[147])   goto l_110;
        rA4 = rLit[129]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rLit[129]->Val = rA4;
        rA1 = rA4;
        {aRet = (rSp++)->Val; goto lRet;}
l_110:
        if (rA1 != rLit[148])   goto l_111;
        rA4 = rLit[130]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rLit[130]->Val = rA4;
        rA1 = rA4;
        {aRet = (rSp++)->Val; goto lRet;}
l_111:
        if (rA1 != rLit[149])   goto l_112;
        rA4 = rLit[131]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rLit[131]->Val = rA4;
        rA1 = rA4;
        {aRet = (rSp++)->Val; goto lRet;}
l_112:
        if (rA1 != rLit[150])   goto l_113;
        rA4 = rLit[132]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rLit[132]->Val = rA4;
        rA1 = rA4;
        {aRet = (rSp++)->Val; goto lRet;}
l_113:
        if (rA1 != rLit[151])   goto l_114;
        rA4 = rLit[133]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rLit[133]->Val = rA4;
        rA1 = rA4;
        {aRet = (rSp++)->Val; goto lRet;}
l_114:
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_344() {     /* #:modtoc:modify-register */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        if (rA1 != rLit[147])   goto l_102;
        rLit[134]->Val = rLit[68];
        rA1 = rLit[68];
        {aRet = (rSp++)->Val; goto lRet;}
l_102:
        if (rA1 != rLit[148])   goto l_103;
        rLit[135]->Val = rLit[68];
        rA1 = rLit[68];
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        if (rA1 != rLit[149])   goto l_104;
        rLit[136]->Val = rLit[68];
        rA1 = rLit[68];
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        if (rA1 != rLit[150])   goto l_105;
        rLit[137]->Val = rLit[68];
        rA1 = rLit[68];
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        if (rA1 != rLit[151])   goto l_106;
        rLit[138]->Val = rLit[68];
        rA1 = rLit[68];
        {aRet = (rSp++)->Val; goto lRet;}
l_106:
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_345() {     /* #:modtoc:function-entry-point */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_347);
        {aRet = ((Ptr) GLmodtoc_153); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_347() {     /* call_modtoc_346 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_349);
        {aRet = ((Ptr) GLmodtoc_350); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_349() {     /* call_modtoc_348 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rA1;
        GIa2 = rLit[22]->Val;
        rA1 = (rSp + 1)->Val;
        rA1 = llrt_call_assq (rA1, GIa2, GIbcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLmodtoc_351); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_352);
        (--rSp)->Val = rLit[152];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[153];
        rA1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_354);
        {aRet = ((Ptr) GLmodtoc_235); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_354() {     /* call_modtoc_353 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[59];
        GIa4 = (Ptr) 5;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_352() {     /* 103 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_355);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_351() {     /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_356);
        (--rSp)->Val = rLit[88];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[153];
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[59];
        GIa4 = (Ptr) 5;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_356() {     /* 104 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_355);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_355() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = rSp->Val;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_357); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_358() {     /* #:modtoc:trace-entry-point */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_360);
        {aRet = ((Ptr) GLmodtoc_153); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_360() {     /* call_modtoc_359 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_362);
        {aRet = ((Ptr) GLmodtoc_229); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_362() {     /* call_modtoc_361 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLmodtoc_363);
        (--rSp)->Val = rLit[88];
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[154];
        rA1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_365);
        {aRet = ((Ptr) GLmodtoc_235); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_365() {     /* call_modtoc_364 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[59];
        GIa4 = (Ptr) 5;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_363() {     /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_367);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_367() {     /* call_modtoc_366 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = rSp->Val;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_357); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_357() {     /* #:modtoc:function-entry-point-init */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYmodtoc; rSp = GIsp; rNil = GInil;
        (--rSp)->Val = GIa1;
        rLit[29]->Val = rLit[68];
        rLit[155]->Val = rNil;
        rLit[156]->Val = rLit[48];
        rLit[157]->Val = rLit[48];
        rLit[158]->Val = rNil;
        rLit[159]->Val = rNil;
        rLit[160]->Val = rNil;
        GIa1 = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_369);
        {aRet = ((Ptr) GLmodtoc_370); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_369() {     /* call_modtoc_368 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        rLit[161]->Val = GIa1;
        rLit[162]->Val = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_341); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_153() {     /* #:modtoc:function-ending-point */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (rLit[29]->Val == GInil)     {aRet = ((Ptr) GLmodtoc_371); goto lRet;}
        GIa1 = rLit[163];
        (--GIsp)->Val = ((Ptr) GLmodtoc_373);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_373() {     /* call_modtoc_372 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_374);
        (--rSp)->Val = rLit[121]->Val;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[164];
        (--rSp)->Val = rLit[17]->Val;
        (--rSp)->Val = rLit[165];
        (--rSp)->Val = rLit[166];
        GIa4 = (Ptr) 6;
        {aRet = ((Ptr) GLmodtoc_375); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_374() {     /* 103 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[147];
        GIa2 = rLit[134]->Val;
        GIa1 = rLit[129]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_377);
        {aRet = ((Ptr) GLmodtoc_378); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_377() {     /* call_modtoc_376 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[148];
        GIa2 = rLit[135]->Val;
        GIa1 = rLit[130]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_380);
        {aRet = ((Ptr) GLmodtoc_378); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_380() {     /* call_modtoc_379 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[149];
        GIa2 = rLit[136]->Val;
        GIa1 = rLit[131]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_382);
        {aRet = ((Ptr) GLmodtoc_378); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_382() {     /* call_modtoc_381 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[150];
        GIa2 = rLit[137]->Val;
        GIa1 = rLit[132]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_384);
        {aRet = ((Ptr) GLmodtoc_378); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_384() {     /* call_modtoc_383 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[151];
        GIa2 = rLit[138]->Val;
        GIa1 = rLit[133]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_386);
        {aRet = ((Ptr) GLmodtoc_378); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_386() {     /* call_modtoc_385 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[140];
        GIa2 = GInil;
        GIa1 = rLit[122]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_388);
        {aRet = ((Ptr) GLmodtoc_378); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_388() {     /* call_modtoc_387 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[141];
        GIa2 = GInil;
        GIa1 = rLit[123]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_390);
        {aRet = ((Ptr) GLmodtoc_378); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_390() {     /* call_modtoc_389 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[142];
        GIa2 = GInil;
        GIa1 = rLit[124]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_392);
        {aRet = ((Ptr) GLmodtoc_378); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_392() {     /* call_modtoc_391 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[143];
        GIa2 = GInil;
        GIa1 = rLit[125]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_394);
        {aRet = ((Ptr) GLmodtoc_378); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_394() {     /* call_modtoc_393 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[144];
        GIa2 = GInil;
        GIa1 = rLit[126]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_396);
        {aRet = ((Ptr) GLmodtoc_378); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_396() {     /* call_modtoc_395 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[145];
        GIa2 = GInil;
        GIa1 = rLit[127]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_398);
        {aRet = ((Ptr) GLmodtoc_378); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_398() {     /* call_modtoc_397 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[146];
        GIa2 = GInil;
        GIa1 = rLit[128]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_400);
        {aRet = ((Ptr) GLmodtoc_378); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_400() {     /* call_modtoc_399 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_401);
        (--rSp)->Val = rLit[115];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_401() {     /* 104 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa2 = rLit[48];
        GIa1 = rLit[156]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_403);
        {aRet = (rLit[168] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_403() {     /* call_modtoc_402 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLmodtoc_404); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_404);
        (--rSp)->Val = rLit[169];
        (--rSp)->Val = rLit[156]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_404() {     /* 106 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[170];
        (--GIsp)->Val = ((Ptr) GLmodtoc_406);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_406() {     /* call_modtoc_405 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_408);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_408() {     /* call_modtoc_407 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[157]->Val;
        GIa2 = rLit[171];
        GIa1 = rLit[155]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_410);
        {aRet = ((Ptr) GLmodtoc_411); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_410() {     /* call_modtoc_409 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (rLit[160]->Val == GInil)    {aRet = ((Ptr) GLmodtoc_412); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_412);
        (--rSp)->Val = rLit[161]->Val;
        (--rSp)->Val = rLit[172];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_412() {     /* 109 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYmodtoc; rA1 = GIa1;
        rA1 = rLit[155]->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rLit[155]->Val = rA1;
        (--GIsp)->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_413); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_413() {     /* 111 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   goto l_112;
        (--rSp)->Val = ((Ptr) GLmodtoc_413);
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
l_112:
        rSp += (Fix) 1;
        rLit[29]->Val = GInil;
        (--rSp)->Val = ((Ptr) GLmodtoc_415);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_415() {     /* call_modtoc_414 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (rLit[67]->Val == GInil)     {aRet = ((Ptr) GLmodtoc_416); goto lRet;}
        GIa1 = rLit[173]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_418);
        {aRet = (rLit[118] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_418() {     /* call_modtoc_417 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        rLit[173]->Val = rA1;
        rA1 = rLit[155]->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLmodtoc_419);
        (--rSp)->Val = rA1;
        rA1 = (rLit[174]->Val->Val + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_421);
        {aRet = (rLit[175] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_421() {     /* call_modtoc_420 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[176] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_419() {     /* 116 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        rSp->Val = rA1;
        (--rSp)->Val = rLit[174]->Val;
        (--rSp)->Val = rA1;
        rA1 = (rLit[174]->Val->Val + 2 + (Fix) (rA1))->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_423);
        {aRet = (rLit[118] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_423() {     /* call_modtoc_422 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        (GIa3->Val + 2 + (Fix) (GIa4))->Val = GIa1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_416() {     /* 114 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_371() {     /* 101 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_378() {     /* #:modtoc:force-simple-register */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA2 = rLit[177]->Val;
        rA1 = rA3;
        rA1 = llrt_call_assq (rA1, rA2, GIbcons, GInil);
        (--rSp)->Val = ((Ptr) GXpopj3);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rA1 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[48];
        rA4 = (rA1 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 6;
        {aRet = ((Ptr) GLmodtoc_375); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_375() {     /* #:modtoc:force-register */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        if ((rSp + 4)->Val == rNil)     goto l_103;
        if (rLit[160]->Val != rNil)     goto l_103;
        if (rLit[159]->Val == rNil)     goto l_101;
l_103:
        rA2 = rLit[178]->Val;
        goto l_102;
l_101:
        rA2 = rLit[179]->Val;
l_102:
        rA1 = (rSp + 5)->Val;
        rA1 = ((Fix) (rA1) >= (Fix) (rA2)) ? rA1 : rNil;
        (--rSp)->Val = rA1;
        if (((rSp + 3)->Val < GIbsymb) || ((rSp + 3)->Val >= GIbcons))  {aRet = ((Ptr) GLmodtoc_424); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_425);
        (--rSp)->Val = rLit[50]->Val;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_425() {     /* 106 */
   {    register Ptr aRet;
        (GIsp + 3)->Val = GIa1;
        {aRet = ((Ptr) GLmodtoc_424); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_424() {     /* 105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (rSp->Val == GInil)  {aRet = ((Ptr) GLmodtoc_426); goto lRet;}
        GIa1 = rLit[180]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_428);
        {aRet = (rLit[118] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_428() {     /* call_modtoc_427 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        rLit[180]->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_429);
        (--rSp)->Val = rLit[116];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_429() {     /* 109 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa2 = rLit[48];
        GIa1 = rLit[156]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_431);
        {aRet = (rLit[181] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_431() {     /* call_modtoc_430 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmodtoc_432); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_433);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[182];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[115];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_433() {     /* 112 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLmodtoc_434); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_432() {     /* 110 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_435);
        (--rSp)->Val = rLit[156]->Val;
        (--rSp)->Val = rLit[114];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[182];
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[115];
        GIa4 = (Ptr) 6;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_435() {     /* 113 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLmodtoc_434); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_434() {     /* 111 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        rLit[156]->Val = GIa4;
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 4)->Val;
        GIa1 = rLit[155]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_437);
        {aRet = ((Ptr) GLmodtoc_411); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_437() {     /* call_modtoc_436 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if ((rSp + 5)->Val == GInil)    {aRet = ((Ptr) GLmodtoc_438); goto lRet;}
        GIa1 = rLit[183]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_440);
        {aRet = (rLit[118] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_440() {     /* call_modtoc_439 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        rLit[183]->Val = GIa1;
        GIa2 = rLit[48];
        GIa1 = rLit[157]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_442);
        {aRet = (rLit[181] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_442() {     /* call_modtoc_441 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmodtoc_443); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_444);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[182];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[115];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_444() {     /* 118 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLmodtoc_445); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_443() {     /* 116 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_446);
        (--rSp)->Val = rLit[157]->Val;
        (--rSp)->Val = rLit[114];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[182];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[115];
        GIa4 = (Ptr) 6;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_446() {     /* 119 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLmodtoc_445); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_445() {     /* 117 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        GYmodtoc[157]->Val = rA4;
        GIa1 = rA4;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_438() {     /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_426() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 4)->Val;
        GIa1 = GYmodtoc[155]->Val;
        rSp += (Fix) 7;
        {aRet = ((Ptr) GLmodtoc_411); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_411() {     /* #:modtoc:code-replace */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLmodtoc_447); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_447() {     /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLmodtoc_448); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLmodtoc_449);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 3;
        {aRet = (GYmodtoc[184] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_449() {     /* 105 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rSp->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLmodtoc_450); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_451);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        rA4 = ((rSp + 8)->Val->Val + 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 5;
        {aRet = ((Ptr) GLmodtoc_452); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_451() {     /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_450);
        {aRet = (GYmodtoc[185] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_450() {     /* 104 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_447); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_448() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_452() {     /* #:modtoc:code-replace-aux */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((rSp + 1)->Val != GInil)    goto l_101;
        GIa1 = (rSp + 4)->Val;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GXpopj5);
        (--rSp)->Val = ((Ptr) GLmodtoc_453);
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (GYmodtoc[186] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_453() {     /* 104 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLmodtoc_454);
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 6)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 5)->Val)));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (GYmodtoc[186] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_454() {     /* 105 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_455);
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLmodtoc_456);
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 3;
        {aRet = (GYmodtoc[184] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_456() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 5;
        {aRet = ((Ptr) GLmodtoc_452); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_455() {     /* 106 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYmodtoc[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_36() {      /* #:modtoc:terpri */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (rLit[29]->Val == GInil)     {aRet = ((Ptr) GLmodtoc_457); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLmodtoc_458);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_458() {     /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[11]->Val)      {aRet = ((Ptr) GLmodtoc_457); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_459);
        (--rSp)->Val = ((Ptr) GLmodtoc_460);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[54] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_460() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLmodtoc_461);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[187] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_461() {     /* 106 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYmodtoc[186] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_459() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        GIa2 = rLit[155]->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rLit[155]->Val = rA1;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[187] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_457() {     /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GXpopj0);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[188] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_27() {      /* #:modtoc:initialize-elaborate-channel */
   {    register Ptr aRet, rNil;
        rNil = GInil;
        GYmodtoc[189]->Val = rNil;
        GIa1 = rNil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_147() {     /* #:modtoc:to-elaborate-channel */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYmodtoc; rA1 = GIa1;
        GIa2 = rLit[189]->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rLit[189]->Val = rA1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_289() {     /* #:modtoc:close-elaborate-channel */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_462);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_462() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_463);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[190] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_463() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_464);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[191] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_464() {     /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_465);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[192] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_465() {     /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_466);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[52] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_466() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_467);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_467() {     /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_468);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_469);
        (--rSp)->Val = rLit[13]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_469() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_470);
        (--rSp)->Val = (Ptr) 10;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[190] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_470() {     /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_471);
        (--rSp)->Val = (Ptr) 1000;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[191] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_471() {     /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_472);
        (--rSp)->Val = (Ptr) 30000;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[192] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_472() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_473);
        (--rSp)->Val = ((Ptr) GLmodtoc_474);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[54] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_474() {     /* 114 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = (GIa1->Val + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (--GIsp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYmodtoc[52] + 2)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_473() {     /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_475);
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_475() {     /* 115 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = rLit[68];
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[193]->Val;
        rLit[193]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[194]->Val;
        rLit[194]->Val = (rSp + 3)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[195];
        (--rSp)->Val = rLit[71];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = (Ptr) 40;
        (--rSp)->Val = ((Ptr) GLmodtoc_477);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_477() {     /* call_modtoc_476 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_478);
        (--rSp)->Val = rLit[196];
        (--rSp)->Val = rLit[15]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_478() {     /* 116 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[194]->Val;
        rLit[194]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[197];
        (--rSp)->Val = rLit[71];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_479);
        (--rSp)->Val = rLit[198];
        (--rSp)->Val = rLit[5]->Val;
        (--rSp)->Val = rLit[32];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_479() {     /* 117 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[194]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        (--rSp)->Val = ((Ptr) GLmodtoc_480);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_480() {     /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_481);
        (--rSp)->Val = GYmodtoc[19]->Val;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLmodtoc_482); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_482() {     /* 120 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLmodtoc_483); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA1 = rSp->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_485);
        {aRet = ((Ptr) GLmodtoc_235); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_485() {     /* call_modtoc_484 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rSp->Val;
        rA2 = (rA2 + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rSp += (Fix) 1;
        rA2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_482); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_483() {     /* 121 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        (--rSp)->Val = ((Ptr) GLmodtoc_487);
        {aRet = (GYmodtoc[199] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_487() {     /* call_modtoc_486 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[167] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_481() {     /* 119 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_488);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[167] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_488() {     /* 122 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_489);
        (--rSp)->Val = ((Ptr) GLmodtoc_490);
        (--rSp)->Val = rLit[200];
        rA1 = rLit[18]->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[201] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_490() {     /* 124 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[167] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_489() {     /* 123 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 41;
        (--GIsp)->Val = ((Ptr) GLmodtoc_492);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_492() {     /* call_modtoc_491 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_493);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[167] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_493() {     /* 125 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_494);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[167] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_494() {     /* 126 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = GYmodtoc[189]->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        (--GIsp)->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_495); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_495() {     /* 127 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rSp->Val < (long) GIbcons)   goto l_128;
        rA1 = rSp->Val;
        rSp->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_495);
        {aRet = ((Ptr) GLmodtoc_496); goto lRet;}
l_128:
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLmodtoc_497);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[167] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_497() {     /* 129 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_498);
        (--rSp)->Val = ((Ptr) GLmodtoc_499);
        (--rSp)->Val = rLit[202];
        GIa1 = rLit[26]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_501);
        {aRet = (rLit[199] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_501() {     /* call_modtoc_500 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[119] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_499() {     /* 131 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[167] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_498() {     /* 130 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[194]->Val = (rSp + 6)->Val;
        rLit[193]->Val = (rSp + 7)->Val;
        rSp += (Fix) 10;
        (--rSp)->Val = ((Ptr) GLmodtoc_502);
        (--rSp)->Val = rLit[13]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[109] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_502() {     /* 132 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj6);
        {aRet = ((Ptr) GLmodtoc_468); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_468() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_503);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_503() {     /* 133 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_504);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[52] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_504() {     /* 134 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_505);
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[192] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_505() {     /* 135 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_506);
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[191] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_506() {     /* 136 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_507);
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[190] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_507() {     /* 137 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_508);
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_508() {     /* 138 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_496() {     /* #:modtoc:print-elaborate-channel */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[167] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_509() {     /* #:modtoc:opr */
   {    register Ptr aRet;
        {aRet = ((Ptr) GLmodtoc_510); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_511() {     /* #:modtoc:opw */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_513);
        {aRet = ((Ptr) GLmodtoc_510); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_513() {     /* call_modtoc_512 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((rSp->Val < GIbsymb) || (rSp->Val >= GIbcons))      goto l_101;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_344); goto lRet;}
l_101:
        GIa1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_514() {     /* #:modtoc:opm */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if ((rA1 < GIbsymb) || (rA1 >= GIbcons))        {aRet = ((Ptr) GLmodtoc_515); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_515);
        {aRet = ((Ptr) GLmodtoc_343); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_515() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_517);
        {aRet = ((Ptr) GLmodtoc_510); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_517() {     /* call_modtoc_516 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((rSp->Val < GIbsymb) || (rSp->Val >= GIbcons))      goto l_103;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_344); goto lRet;}
l_103:
        GIa1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_510() {     /* #:modtoc:operand */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBcons;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rNil;
        rA2 = rLit[203];
        rA1 = rLit[204];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_102:
        if ((long) rSp->Val >= (long) rBcons)   {aRet = ((Ptr) GLmodtoc_518); goto lRet;}
        rA2 = rLit[23]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_cassq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        goto l_105;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[205];
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[40];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
l_105:
        if ((rSp->Val < GIbsymb) || (rSp->Val >= rBcons))       {aRet = ((Ptr) GLmodtoc_519); goto lRet;}
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_521);
        {aRet = (rLit[206] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_521() {     /* call_modtoc_520 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa4 = (Ptr) ((unsigned char) *(((char *) (GIa1->Val + 2)) + (Fix) 0));
        if (GIa4 != (Ptr) 46)   {aRet = ((Ptr) GLmodtoc_522); goto lRet;}
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[207]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_523);
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_525);
        {aRet = (rLit[206] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_525() {     /* call_modtoc_524 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[186] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_523() {     /* 113 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_522() {     /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_527);
        {aRet = ((Ptr) GLmodtoc_528); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_527() {     /* call_modtoc_526 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        if ((rA1 < GIbstrg) || (rA1 >= GIbsymb))        goto l_114;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
l_114:
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[50]->Val;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_519() {     /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj1);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_518() {     /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = rSp->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA1 = (rSp + 1)->Val;
        rA1 = rA1->Val;
        if (rA1 != rLit[75])    {aRet = ((Ptr) GLmodtoc_529); goto lRet;}
        if (rSp->Val >= GIbfloat)       {aRet = ((Ptr) GLmodtoc_530); goto lRet;}
        if (rSp->Val != (Ptr) ((UFix) 0x8000))  goto l_123;
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[208];
        rA4 = (Ptr) 1;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
l_123:
        if ((Fix) (rSp->Val) < (Fix) 0) goto l_126;
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[209];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
l_126:
        (--rSp)->Val = ((Ptr) GLmodtoc_531);
        (--rSp)->Val = rLit[210];
        rA4 = (Ptr) 1;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_531() {     /* 129 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_533);
        {aRet = ((Ptr) GLmodtoc_534); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_533() {     /* call_modtoc_532 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 41;
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_530() {     /* 121 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_535); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_529() {     /* 120 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GYmodtoc[211])      {aRet = ((Ptr) GLmodtoc_536); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_538);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_538() {     /* call_modtoc_537 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[212];
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_536() {     /* 130 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[213])  {aRet = ((Ptr) GLmodtoc_539); goto lRet;}
        GIa1 = rLit[214];
        (--GIsp)->Val = ((Ptr) GLmodtoc_541);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_541() {     /* call_modtoc_540 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_543);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_543() {     /* call_modtoc_542 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[215];
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_539() {     /* 131 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GYmodtoc[216])      {aRet = ((Ptr) GLmodtoc_544); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_546);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_546() {     /* call_modtoc_545 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[212];
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_544() {     /* 132 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[217])  {aRet = ((Ptr) GLmodtoc_547); goto lRet;}
        GIa1 = rLit[214];
        (--GIsp)->Val = ((Ptr) GLmodtoc_549);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_549() {     /* call_modtoc_548 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_551);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_551() {     /* call_modtoc_550 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[215];
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_547() {     /* 133 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[218])  {aRet = ((Ptr) GLmodtoc_552); goto lRet;}
        GIa1 = rLit[214];
        (--GIsp)->Val = ((Ptr) GLmodtoc_554);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_554() {     /* call_modtoc_553 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_556);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_556() {     /* call_modtoc_555 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[219];
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_552() {     /* 134 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[220])  {aRet = ((Ptr) GLmodtoc_557); goto lRet;}
        GIa1 = rLit[214];
        (--GIsp)->Val = ((Ptr) GLmodtoc_559);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_559() {     /* call_modtoc_558 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_561);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_561() {     /* call_modtoc_560 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[221];
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_557() {     /* 135 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[222])  {aRet = ((Ptr) GLmodtoc_562); goto lRet;}
        GIa1 = rLit[214];
        (--GIsp)->Val = ((Ptr) GLmodtoc_564);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_564() {     /* call_modtoc_563 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_566);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_566() {     /* call_modtoc_565 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[223];
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_562() {     /* 136 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[224])  {aRet = ((Ptr) GLmodtoc_567); goto lRet;}
        GIa1 = rLit[214];
        (--GIsp)->Val = ((Ptr) GLmodtoc_569);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_569() {     /* call_modtoc_568 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_571);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_571() {     /* call_modtoc_570 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[225];
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_567() {     /* 137 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[226])  {aRet = ((Ptr) GLmodtoc_572); goto lRet;}
        GIa1 = rLit[214];
        (--GIsp)->Val = ((Ptr) GLmodtoc_574);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_574() {     /* call_modtoc_573 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_576);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_576() {     /* call_modtoc_575 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[227];
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_572() {     /* 138 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[228])  {aRet = ((Ptr) GLmodtoc_577); goto lRet;}
        GIa1 = rLit[214];
        (--GIsp)->Val = ((Ptr) GLmodtoc_579);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_579() {     /* call_modtoc_578 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_581);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_581() {     /* call_modtoc_580 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[229];
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_577() {     /* 139 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GYmodtoc[230])      {aRet = ((Ptr) GLmodtoc_582); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_584);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_584() {     /* call_modtoc_583 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[212];
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_582() {     /* 140 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[231])  {aRet = ((Ptr) GLmodtoc_585); goto lRet;}
        GIa1 = rLit[214];
        (--GIsp)->Val = ((Ptr) GLmodtoc_587);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_587() {     /* call_modtoc_586 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_589);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_589() {     /* call_modtoc_588 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[215];
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_585() {     /* 141 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GYmodtoc[232])      {aRet = ((Ptr) GLmodtoc_590); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_592);
        {aRet = ((Ptr) GLmodtoc_535); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_592() {     /* call_modtoc_591 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[212];
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_590() {     /* 142 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        if (rA1 != rLit[233])   {aRet = ((Ptr) GLmodtoc_593); goto lRet;}
        rA2 = rLit[26]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_memq (rA1, rA2, GIbcons, rNil);
        if (rA1 != rNil)        goto l_145;
        rA2 = rLit[26]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[26]->Val = rA1;
l_145:
        rA1 = rLit[214];
        (--rSp)->Val = ((Ptr) GLmodtoc_595);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_595() {     /* call_modtoc_594 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_597);
        {aRet = ((Ptr) GLmodtoc_535); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_597() {     /* call_modtoc_596 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[219];
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_593() {     /* 143 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[234])  {aRet = ((Ptr) GLmodtoc_598); goto lRet;}
        if (rSp->Val != (Ptr) 0)        {aRet = ((Ptr) GLmodtoc_599); goto lRet;}
        GIa1 = rLit[147];
        (--rSp)->Val = ((Ptr) GLmodtoc_601);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_601() {     /* call_modtoc_600 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[212];
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_599() {     /* 147 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[214];
        (--GIsp)->Val = ((Ptr) GLmodtoc_603);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_603() {     /* call_modtoc_602 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_605);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_605() {     /* call_modtoc_604 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[235];
        GIa2 = rSp->Val;
        GIa1 = rLit[236];
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_598() {     /* 146 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GYmodtoc[237])      {aRet = ((Ptr) GLmodtoc_606); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_608);
        {aRet = ((Ptr) GLmodtoc_350); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_608() {     /* call_modtoc_607 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[40];
        GIa2 = GIa1;
        GIa1 = rLit[205];
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_606() {     /* 149 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[238])  {aRet = ((Ptr) GLmodtoc_609); goto lRet;}
        GIa1 = rLit[239];
        (--GIsp)->Val = ((Ptr) GLmodtoc_611);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_611() {     /* call_modtoc_610 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_613);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_613() {     /* call_modtoc_612 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[40];
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_609() {     /* 150 */
   {    register Ptr aRet, *rLit, rSp, rA2, rA3, rA4, rBcons;
        rLit = GYmodtoc; rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
        if (GIa1 != rLit[240])  {aRet = ((Ptr) GLmodtoc_614); goto lRet;}
        if ((long) rSp->Val < (long) rBcons)    {aRet = ((Ptr) GLmodtoc_615); goto lRet;}
        rA3 = rSp->Val;
        if (rA3->Val != rLit[199])      {aRet = ((Ptr) GLmodtoc_615); goto lRet;}
        rA2 = (rA3 + 1)->Val;
        if ((long) rA2->Val < (long) rBcons)    {aRet = ((Ptr) GLmodtoc_615); goto lRet;}
        rA4 = (rA3 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = rA4->Val;
        if (rA4 == rLit[241])   goto l_154;
        if (rA4 != rLit[242])   {aRet = ((Ptr) GLmodtoc_615); goto lRet;}
l_154:
        rA4 = (rA3 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        if ((long) rA4->Val < (long) rBcons)    {aRet = ((Ptr) GLmodtoc_615); goto lRet;}
        rA4 = (rA3 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        if (rA4->Val != rLit[75])       {aRet = ((Ptr) GLmodtoc_615); goto lRet;}
        rA3 = rSp->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        rA3 = (rA3 + 1)->Val;
        (--rSp)->Val = rA3->Val;
        rA2 = rSp->Val;
        GIa1 = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLmodtoc_617);
        {aRet = (rLit[243] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_617() {     /* call_modtoc_616 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != (Ptr) 95)   {aRet = ((Ptr) GLmodtoc_618); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_619);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[186] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_619() {     /* 157 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLmodtoc_618); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_618() {     /* 156 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = rSp->Val;
        GIa1 = GYmodtoc[209];
        (--rSp)->Val = ((Ptr) GLmodtoc_621);
        {aRet = ((Ptr) GLmodtoc_33); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_621() {     /* call_modtoc_620 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_622);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_622() {     /* 158 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_623);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_624);
        (--rSp)->Val = rLit[9]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_624() {     /* 161 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[244];
        GIa2 = (rSp + 4)->Val;
        GIa1 = rLit[152];
        (--rSp)->Val = ((Ptr) GLmodtoc_626);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_626() {     /* call_modtoc_625 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_628);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_628() {     /* call_modtoc_627 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj4);
        {aRet = ((Ptr) GLmodtoc_623); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_623() {     /* 159 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_629);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_629() {     /* 162 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_615() {     /* 152 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_630);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[240] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_630() {     /* 163 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_614() {     /* 151 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[203];
        GIa1 = rLit[204];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_528() {     /* #:modtoc:optr-convert */
   {    register Ptr aRet, rSp, rA1, rNil, rBcons;
        rSp = GIsp; rA1 = GIa1; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if ((rA1 < GIbsymb) || (rA1 >= rBcons)) {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        GIa2 = GYmodtoc[177]->Val;
        rA1 = llrt_call_assq (rA1, GIa2, rBcons, rNil);
        (--rSp)->Val = rA1;
        if (rA1 != rNil)        goto l_103;
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_632);
        {aRet = ((Ptr) GLmodtoc_343); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_632() {     /* call_modtoc_631 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_633() {     /* #:modtoc:int */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        if ((long) rA1 < (long) GIbcons)        goto l_101;
        if (rA1->Val != rLit[75])       goto l_101;
        rA4 = (rA1 + 1)->Val;
        if (rA4->Val >= GIbfloat)       goto l_101;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[245];
        rA4 = (rA1 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
l_101:
        rA1 = rLit[246];
        (--rSp)->Val = ((Ptr) GLmodtoc_635);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_635() {     /* call_modtoc_634 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_637);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_637() {     /* call_modtoc_636 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[40];
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_638() {     /* #:modtoc:fix */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        if ((long) rA1 < (long) GIbcons)        goto l_101;
        if (rA1->Val != rLit[75])       goto l_101;
        rA4 = (rA1 + 1)->Val;
        if (rA4->Val >= GIbfloat)       goto l_101;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[247];
        rA4 = (rA1 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
l_101:
        rA1 = rLit[248];
        (--rSp)->Val = ((Ptr) GLmodtoc_640);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_640() {     /* call_modtoc_639 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_642);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_642() {     /* call_modtoc_641 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[40];
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_643() {     /* #:modtoc:fixpos */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA1;
        if ((long) rA1 < (long) GIbcons)        goto l_101;
        if (rA1->Val != rLit[75])       goto l_101;
        rA4 = (rA1 + 1)->Val;
        if (rA4->Val >= GIbfloat)       goto l_101;
        rA4 = (rA1 + 1)->Val;
        if ((Fix) (rA4->Val) < (Fix) 0) goto l_103;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[247];
        rA3 = (rA1 + 1)->Val;
        (--rSp)->Val = rA3->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
l_103:
        rA3 = rA1;
        GIa2 = rLit[249];
        rA1 = rLit[250];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rLit[248];
        (--rSp)->Val = ((Ptr) GLmodtoc_645);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_645() {     /* call_modtoc_644 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_647);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_647() {     /* call_modtoc_646 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[40];
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_648() {     /* #:modtoc:fixincr */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLmodtoc_649); goto lRet;}
        if (rA1->Val != rLit[75])       {aRet = ((Ptr) GLmodtoc_649); goto lRet;}
        rA4 = (rA1 + 1)->Val;
        if (rA4->Val >= GIbfloat)       {aRet = ((Ptr) GLmodtoc_649); goto lRet;}
        rA4 = (rA1 + 1)->Val;
        if ((Fix) (rA4->Val) < (Fix) 0) goto l_103;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[251];
        GIa3 = (rA1 + 1)->Val;
        (--rSp)->Val = GIa3->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
l_103:
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[252];
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_651);
        {aRet = (rLit[253] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_651() {     /* call_modtoc_650 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_649() {     /* 101 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[254];
        (--GIsp)->Val = ((Ptr) GLmodtoc_653);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_653() {     /* call_modtoc_652 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_655);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_655() {     /* call_modtoc_654 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[40];
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_656() {     /* #:modtoc:ufix */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        if ((long) rA1 < (long) GIbcons)        goto l_101;
        if (rA1->Val != rLit[75])       goto l_101;
        rA4 = (rA1 + 1)->Val;
        if (rA4->Val >= GIbfloat)       goto l_101;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[255];
        rA4 = (rA1 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
l_101:
        rA1 = rLit[256];
        (--rSp)->Val = ((Ptr) GLmodtoc_658);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_658() {     /* call_modtoc_657 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_660);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_660() {     /* call_modtoc_659 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[40];
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_350() {     /* #:modtoc:lab */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rA1;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rNil;
        GIa2 = rLit[203];
        rA1 = rLit[257];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_662);
        {aRet = ((Ptr) GLmodtoc_217); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_662() {     /* call_modtoc_661 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_663); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_664() {     /* #:modtoc:literal-index */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if ((rA1 >= GIbstrg) && (rA1 < GIbsymb))        goto l_103;
        if (llrt_floatp (rA1) == 0) 
        {aRet = ((Ptr) GLmodtoc_665); goto lRet;}
l_103:
        GIa2 = rLit[18]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_667);
        {aRet = (rLit[258] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_667() {     /* call_modtoc_666 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLmodtoc_668); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_665() {     /* 101 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = GYmodtoc[18]->Val;
        rA1 = llrt_call_memq (rA1, GIa2, GIbcons, GInil);
        GIa4 = rA1;
        {aRet = ((Ptr) GLmodtoc_668); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_668() {     /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA4 == GInil)       goto l_104;
        rA1 = rA4;
        rA1 = llrt_call_length (rA1, GIbcons);
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        GIa2 = rLit[18]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rLit[18]->Val = rA1;
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_664); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_535() {     /* #:modtoc:lit */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = GYmodtoc[139];
        (--rSp)->Val = ((Ptr) GLmodtoc_670);
        {aRet = ((Ptr) GLmodtoc_343); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_670() {     /* call_modtoc_669 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = GYmodtoc[259];
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_672);
        {aRet = ((Ptr) GLmodtoc_664); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_672() {     /* call_modtoc_671 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[260];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_673() {     /* #:modtoc:strg */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLmodtoc_674); goto lRet;}
        if (rA1->Val != GYmodtoc[261])  {aRet = ((Ptr) GLmodtoc_674); goto lRet;}
        rA1 = (Ptr) 34;
        (--rSp)->Val = ((Ptr) GLmodtoc_676);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_676() {     /* call_modtoc_675 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_678);
        {aRet = (GYmodtoc[262] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_678() {     /* call_modtoc_677 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLmodtoc_679); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_679() {     /* 103 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLmodtoc_680); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = rSp->Val;
        if (rA4 == (Ptr) 92)    goto l_107;
        if (rA4 != (Ptr) 34)    {aRet = ((Ptr) GLmodtoc_681); goto lRet;}
l_107:
        GIa1 = (Ptr) 92;
        (--rSp)->Val = ((Ptr) GLmodtoc_681);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_681() {     /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_683);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_683() {     /* call_modtoc_682 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_679); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_680() {     /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = (Ptr) 34;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_674() {     /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[263];
        rA1 = rLit[264];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_534() {     /* #:modtoc:prinhex */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[265]->Val;
        GIa1 = rLit[266];
        (--rSp)->Val = ((Ptr) GLmodtoc_685);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_685() {     /* call_modtoc_684 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) (UFix) ((UFix) (rA4) >> 12);
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 15);
        GIa1 = (Ptr) ((unsigned char) *(((char *) (rSp->Val->Val + 2)) + (Fix) (rA4)));
        (--rSp)->Val = ((Ptr) GLmodtoc_687);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_687() {     /* call_modtoc_686 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) (UFix) ((UFix) (rA4) >> 8);
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 15);
        GIa1 = (Ptr) ((unsigned char) *(((char *) (rSp->Val->Val + 2)) + (Fix) (rA4)));
        (--rSp)->Val = ((Ptr) GLmodtoc_689);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_689() {     /* call_modtoc_688 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) (UFix) ((UFix) (rA4) >> 4);
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 15);
        GIa1 = (Ptr) ((unsigned char) *(((char *) (rSp->Val->Val + 2)) + (Fix) (rA4)));
        (--rSp)->Val = ((Ptr) GLmodtoc_691);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_691() {     /* call_modtoc_690 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 15);
        GIa1 = (Ptr) ((unsigned char) *(((char *) (rSp->Val->Val + 2)) + (Fix) (rA4)));
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_692() {     /* #:modtoc:instruction */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        if (GYmodtoc[267]->Val == GInil)        {aRet = ((Ptr) GLmodtoc_693); goto lRet;}
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_695);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_695() {     /* call_modtoc_694 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[59];
        GIa2 = rSp->Val;
        GIa1 = rLit[268];
        (--rSp)->Val = ((Ptr) GLmodtoc_697);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_697() {     /* call_modtoc_696 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_693);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_693() {     /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBcons;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        if (rSp->Val != rNil)   goto l_103;
        rA1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        if ((long) rSp->Val >= (long) rBcons)   {aRet = ((Ptr) GLmodtoc_698); goto lRet;}
        rA2 = rLit[269]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLmodtoc_699); goto lRet;}
        rA2 = rLit[158]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[158]->Val = rA1;
        GIa3 = rLit[172];
        rA2 = rSp->Val;
        rA1 = rLit[270]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_701);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_701() {     /* call_modtoc_700 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_699() {     /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil, rBcons;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        if ((long) rLit[271]->Val < (long) rBcons)      goto l_111;
        rA1 = rLit[271]->Val;
        rA2 = rLit[272];
        rA1 = rA1->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        goto l_113;
        rA4 = rNil;
        goto l_112;
l_113:
        rA4 = rLit[68];
        goto l_112;
l_111:
        rA4 = rLit[271]->Val;
l_112:
        if (rA4 == rNil)        {aRet = ((Ptr) GLmodtoc_702); goto lRet;}
        rA2 = rLit[48];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_702);
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_702() {     /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_345); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_698() {     /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        rA4 = rSp->Val;
        (--rSp)->Val = rA4->Val;
        GIa3 = (rA4 + 1)->Val;
        rA2 = (rA4 + 1)->Val;
        rA2 = (rA2 + 1)->Val;
        rA1 = (rA4 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = GIa3->Val;
        (--rSp)->Val = rA2->Val;
        (--rSp)->Val = rA1->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rLit[273]->Val;
        rLit[273]->Val = (rSp + 3)->Val;
        (--rSp)->Val = rLit[274]->Val;
        rLit[274]->Val = (rSp + 5)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[275];
        (--rSp)->Val = rLit[71];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        rA1 = (rSp + 12)->Val;
        if (rA1 != rLit[276])   {aRet = ((Ptr) GLmodtoc_704); goto lRet;}
        rA1 = rLit[274]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_706);
        {aRet = ((Ptr) GLmodtoc_663); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_706() {     /* call_modtoc_705 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_345); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_704() {     /* 116 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[277])  {aRet = ((Ptr) GLmodtoc_708); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_709);
        (--rSp)->Val = rLit[278];
        (--rSp)->Val = ((Ptr) GLmodtoc_710);
        (--rSp)->Val = rLit[75];
        (--rSp)->Val = rLit[274]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_710() {     /* 119 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[15]->Val;
        rA1 = rLit[19]->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 4;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_709() {     /* 118 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_712);
        {aRet = ((Ptr) GLmodtoc_147); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_712() {     /* call_modtoc_711 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rLit[19]->Val;
        rA2 = rLit[273]->Val;
        rA1 = rLit[274]->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_714);
        {aRet = (rLit[279] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_714() {     /* call_modtoc_713 */
   {    register Ptr aRet;
        GYmodtoc[19]->Val = GIa1;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_708() {     /* 117 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[280])  {aRet = ((Ptr) GLmodtoc_715); goto lRet;}
        GIa1 = rLit[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_717);
        {aRet = ((Ptr) GLmodtoc_718); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_717() {     /* call_modtoc_716 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLmodtoc_719); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_719);
        (--rSp)->Val = rLit[281];
        (--rSp)->Val = rLit[274]->Val;
        GIa4 = (Ptr) 2;
        {aRet = ((Ptr) GLmodtoc_146); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_719() {     /* 122 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_721);
        {aRet = ((Ptr) GLmodtoc_345); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_721() {     /* call_modtoc_720 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = rLit[19]->Val;
        (--rSp)->Val = rLit[274]->Val;
        GIa2 = rLit[273]->Val;
        GIa1 = rLit[280];
        (--rSp)->Val = ((Ptr) GLmodtoc_723);
        {aRet = ((Ptr) GLmodtoc_724); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_723() {     /* call_modtoc_722 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_726);
        {aRet = (GYmodtoc[279] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_726() {     /* call_modtoc_725 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        rLit[19]->Val = GIa1;
        (--GIsp)->Val = ((Ptr) GLmodtoc_727);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_727() {     /* 124 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_728);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_729);
        (--rSp)->Val = rLit[9]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_729() {     /* 127 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_730);
        (--rSp)->Val = rLit[282];
        (--rSp)->Val = rLit[283]->Val;
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[114];
        (--rSp)->Val = rLit[273]->Val;
        GIa4 = (Ptr) 5;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_730() {     /* 128 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_732);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_732() {     /* call_modtoc_731 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLmodtoc_733);
        {aRet = ((Ptr) GLmodtoc_728); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_728() {     /* 125 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_734);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_734() {     /* 129 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_733() {     /* 126 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_715() {     /* 120 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[117])  {aRet = ((Ptr) GLmodtoc_735); goto lRet;}
        GIa1 = rLit[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_737);
        {aRet = ((Ptr) GLmodtoc_738); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_737() {     /* call_modtoc_736 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_740);
        {aRet = ((Ptr) GLmodtoc_358); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_740() {     /* call_modtoc_739 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_742);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_742() {     /* call_modtoc_741 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_743);
        (--rSp)->Val = rLit[284];
        GIa1 = rLit[274]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_745);
        {aRet = ((Ptr) GLmodtoc_235); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_745() {     /* call_modtoc_744 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_747);
        {aRet = ((Ptr) GLmodtoc_664); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_747() {     /* call_modtoc_746 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[86];
        GIa1 = rLit[285];
        (--rSp)->Val = ((Ptr) GLmodtoc_749);
        {aRet = ((Ptr) GLmodtoc_664); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_749() {     /* call_modtoc_748 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[86];
        rA1 = rLit[273]->Val;
        if (rA1 != rLit[286])   goto l_133;
        rA1 = rLit[287];
        goto l_132;
l_133:
        if (rA1 != rLit[288])   goto l_134;
        rA1 = rLit[289];
        goto l_132;
l_134:
        if (rA1 != rLit[290])   goto l_135;
        rA1 = rLit[291];
        goto l_132;
l_135:
        if (rA1 != rLit[292])   goto l_136;
        rA1 = rLit[293];
        goto l_132;
l_136:
        if (rA1 != rLit[294])   goto l_137;
        rA1 = rLit[295];
        goto l_132;
l_137:
        if (rA1 != rLit[296])   goto l_138;
        rA1 = rLit[297];
        goto l_132;
l_138:
        if (rA1 != rLit[298])   goto l_139;
        rA1 = rLit[289];
        goto l_132;
l_139:
        if (rA1 != rLit[299])   goto l_140;
        rA1 = rLit[289];
        goto l_132;
l_140:
        GIa3 = rA1;
        GIa2 = rLit[300];
        rA1 = rLit[117];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_132:
        (--rSp)->Val = ((Ptr) GLmodtoc_751);
        {aRet = ((Ptr) GLmodtoc_664); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_751() {     /* call_modtoc_750 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[301];
        GIa4 = (Ptr) 7;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_743() {     /* 131 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_735() {     /* 130 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[240])  {aRet = ((Ptr) GLmodtoc_752); goto lRet;}
        (--rSp)->Val = rLit[68];
        (--rSp)->Val = rLit[302]->Val;
        rLit[302]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[303];
        (--rSp)->Val = rLit[71];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_753);
        (--rSp)->Val = rLit[304];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_754);
        (--rSp)->Val = rLit[274]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[240] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_754() {     /* 144 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLmodtoc_753); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_753() {     /* 143 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYmodtoc[302]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_752() {     /* 142 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 != rLit[305])   goto l_145;
        rA1 = rNil;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
l_145:
        if (rA1 != rLit[306])   goto l_146;
        rA1 = rNil;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
l_146:
        if (rA1 != rLit[307])   goto l_147;
        rA1 = rNil;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
l_147:
        if (rA1 != rLit[308])   goto l_148;
        rA1 = rNil;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
l_148:
        if (rA1 != rLit[309])   goto l_149;
        rA1 = rNil;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
l_149:
        if (rA1 != rLit[310])   goto l_150;
        GIa2 = rLit[273]->Val;
        rA1 = rLit[274]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_755); goto lRet;}
l_150:
        if (rA1 != rLit[311])   goto l_151;
        GIa2 = rLit[274]->Val;
        rA1 = rLit[140];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_755); goto lRet;}
l_151:
        if (rA1 != rLit[312])   goto l_152;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[313];
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_756); goto lRet;}
l_152:
        if (rA1 != rLit[314])   goto l_154;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[315];
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_756); goto lRet;}
l_154:
        if (rA1 != rLit[316])   goto l_156;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[141];
        (--rSp)->Val = rLit[317];
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_757); goto lRet;}
l_156:
        if (rA1 != rLit[318])   goto l_158;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[141];
        (--rSp)->Val = rLit[317];
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_758); goto lRet;}
l_158:
        if (rA1 != rLit[319])   {aRet = ((Ptr) GLmodtoc_759); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_760);
        (--rSp)->Val = rLit[237];
        (--rSp)->Val = rLit[274]->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_760() {     /* 161 */
   {    register Ptr aRet;
        GIa2 = GYmodtoc[48];
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_761); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_759() {     /* 160 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[320])  {aRet = ((Ptr) GLmodtoc_762); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_763);
        (--rSp)->Val = rLit[233];
        (--rSp)->Val = rLit[274]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_763() {     /* 163 */
   {    register Ptr aRet;
        GIa2 = GYmodtoc[48];
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_761); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_762() {     /* 162 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        if (rA1 != rLit[321])   goto l_164;
        GIa2 = rLit[48];
        rA1 = rLit[274]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_761); goto lRet;}
l_164:
        if (rA1 != rLit[322])   {aRet = ((Ptr) GLmodtoc_764); goto lRet;}
        rA1 = rLit[323];
        (--rSp)->Val = ((Ptr) GLmodtoc_766);
        {aRet = ((Ptr) GLmodtoc_767); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_766() {     /* call_modtoc_765 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GYmodtoc[274]->Val;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLmodtoc_768); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_768() {     /* 166 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLmodtoc_769); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_771);
        {aRet = ((Ptr) GLmodtoc_350); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_771() {     /* call_modtoc_770 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_768); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_769() {     /* 167 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rA2 = rLit[20]->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[20]->Val = rA1;
        rA1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_773);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_773() {     /* call_modtoc_772 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[89];
        GIa2 = rSp->Val;
        GIa1 = rLit[324];
        (--rSp)->Val = ((Ptr) GLmodtoc_775);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_775() {     /* call_modtoc_774 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_777);
        {aRet = ((Ptr) GLmodtoc_633); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_777() {     /* call_modtoc_776 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa2 = rLit[325];
        GIa1 = rLit[326];
        (--GIsp)->Val = ((Ptr) GLmodtoc_779);
        {aRet = ((Ptr) GLmodtoc_33); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_779() {     /* call_modtoc_778 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_781);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_781() {     /* call_modtoc_780 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_764() {     /* 165 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[327])      {aRet = ((Ptr) GLmodtoc_782); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_784);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_784() {     /* call_modtoc_783 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[328];
        (--GIsp)->Val = ((Ptr) GLmodtoc_786);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_786() {     /* call_modtoc_785 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_788);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_788() {     /* call_modtoc_787 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_790);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_790() {     /* call_modtoc_789 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[329];
        (--GIsp)->Val = ((Ptr) GLmodtoc_793);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_793() {     /* call_modtoc_792 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_795);
        {aRet = ((Ptr) GLmodtoc_638); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_795() {     /* call_modtoc_794 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[330];
        (--GIsp)->Val = ((Ptr) GLmodtoc_797);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_797() {     /* call_modtoc_796 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_799);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_799() {     /* call_modtoc_798 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_801);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_801() {     /* call_modtoc_800 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_803);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_803() {     /* call_modtoc_802 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[331];
        (--GIsp)->Val = ((Ptr) GLmodtoc_805);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_805() {     /* call_modtoc_804 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_807);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_807() {     /* call_modtoc_806 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_809);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_809() {     /* call_modtoc_808 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[332];
        (--GIsp)->Val = ((Ptr) GLmodtoc_811);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_811() {     /* call_modtoc_810 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa2 = rLit[333];
        GIa1 = rLit[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_782() {     /* 168 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[334])      {aRet = ((Ptr) GLmodtoc_812); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_814);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_814() {     /* call_modtoc_813 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[328];
        (--GIsp)->Val = ((Ptr) GLmodtoc_816);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_816() {     /* call_modtoc_815 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_818);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_818() {     /* call_modtoc_817 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_820);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_820() {     /* call_modtoc_819 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[329];
        (--GIsp)->Val = ((Ptr) GLmodtoc_822);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_822() {     /* call_modtoc_821 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_824);
        {aRet = ((Ptr) GLmodtoc_638); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_824() {     /* call_modtoc_823 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[330];
        (--GIsp)->Val = ((Ptr) GLmodtoc_826);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_826() {     /* call_modtoc_825 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_828);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_828() {     /* call_modtoc_827 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_830);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_830() {     /* call_modtoc_829 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_832);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_832() {     /* call_modtoc_831 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[331];
        (--GIsp)->Val = ((Ptr) GLmodtoc_834);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_834() {     /* call_modtoc_833 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_836);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_836() {     /* call_modtoc_835 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_838);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_838() {     /* call_modtoc_837 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[335];
        (--GIsp)->Val = ((Ptr) GLmodtoc_840);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_840() {     /* call_modtoc_839 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa2 = rLit[48];
        GIa1 = rLit[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_842);
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_842() {     /* call_modtoc_841 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_844);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_844() {     /* call_modtoc_843 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[336];
        (--GIsp)->Val = ((Ptr) GLmodtoc_846);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_846() {     /* call_modtoc_845 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_848);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_848() {     /* call_modtoc_847 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[337];
        (--GIsp)->Val = ((Ptr) GLmodtoc_850);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_850() {     /* call_modtoc_849 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_812() {     /* 169 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        if (rA1 != rLit[338])   goto l_170;
        GIa2 = rLit[274]->Val;
        rA1 = rLit[147];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_755); goto lRet;}
l_170:
        if (rA1 != rLit[339])   goto l_171;
        GIa2 = rLit[147];
        rA1 = rLit[274]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_755); goto lRet;}
l_171:
        if (rA1 != rLit[340])   {aRet = ((Ptr) GLmodtoc_851); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_852);
        (--rSp)->Val = rLit[237];
        (--rSp)->Val = rLit[274]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_852() {     /* 173 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_853); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_851() {     /* 172 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        if (rA1 != rLit[341])   goto l_174;
        rA1 = rLit[274]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_853); goto lRet;}
l_174:
        if (rA1 != rLit[342])   {aRet = ((Ptr) GLmodtoc_854); goto lRet;}
        if (rLit[274]->Val != rLit[162]->Val)   {aRet = ((Ptr) GLmodtoc_855); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_856);
        (--rSp)->Val = rLit[237];
        (--rSp)->Val = rLit[274]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_856() {     /* 178 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_857);
        {aRet = ((Ptr) GLmodtoc_853); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_855() {     /* 176 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_858);
        (--rSp)->Val = rLit[233];
        (--rSp)->Val = rLit[274]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_858() {     /* 179 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_857);
        {aRet = ((Ptr) GLmodtoc_853); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_857() {     /* 177 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_854() {     /* 175 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[343])      {aRet = ((Ptr) GLmodtoc_859); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_861);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_861() {     /* call_modtoc_860 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[344];
        (--GIsp)->Val = ((Ptr) GLmodtoc_863);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_863() {     /* call_modtoc_862 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_865);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_865() {     /* call_modtoc_864 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[345];
        (--GIsp)->Val = ((Ptr) GLmodtoc_867);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_867() {     /* call_modtoc_866 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_859() {     /* 180 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[346])  {aRet = ((Ptr) GLmodtoc_868); goto lRet;}
        if ((long) rLit[274]->Val < (long) GIbcons)     {aRet = ((Ptr) GLmodtoc_869); goto lRet;}
        GIa4 = rLit[274]->Val;
        if (GIa4->Val != rLit[234])     {aRet = ((Ptr) GLmodtoc_869); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_871);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_871() {     /* call_modtoc_870 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[347];
        (--GIsp)->Val = ((Ptr) GLmodtoc_873);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_873() {     /* call_modtoc_872 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_875);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_875() {     /* call_modtoc_874 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_877);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_877() {     /* call_modtoc_876 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[329];
        (--GIsp)->Val = ((Ptr) GLmodtoc_879);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_879() {     /* call_modtoc_878 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_881);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_881() {     /* call_modtoc_880 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_883);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_883() {     /* call_modtoc_882 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_885);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_885() {     /* call_modtoc_884 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_887);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_887() {     /* call_modtoc_886 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[348];
        (--GIsp)->Val = ((Ptr) GLmodtoc_889);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_889() {     /* call_modtoc_888 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_891);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_891() {     /* call_modtoc_890 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[349];
        (--GIsp)->Val = ((Ptr) GLmodtoc_893);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_893() {     /* call_modtoc_892 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_869() {     /* 182 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_895);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_895() {     /* call_modtoc_894 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[348];
        (--GIsp)->Val = ((Ptr) GLmodtoc_897);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_897() {     /* call_modtoc_896 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_899);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_899() {     /* call_modtoc_898 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[350];
        (--GIsp)->Val = ((Ptr) GLmodtoc_901);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_901() {     /* call_modtoc_900 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_903);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_903() {     /* call_modtoc_902 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_905);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_905() {     /* call_modtoc_904 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_868() {     /* 181 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[351])  {aRet = ((Ptr) GLmodtoc_906); goto lRet;}
        if ((long) rLit[274]->Val < (long) GIbcons)     {aRet = ((Ptr) GLmodtoc_907); goto lRet;}
        GIa4 = rLit[274]->Val;
        if (GIa4->Val != rLit[234])     {aRet = ((Ptr) GLmodtoc_907); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_909);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_909() {     /* call_modtoc_908 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[347];
        (--GIsp)->Val = ((Ptr) GLmodtoc_911);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_911() {     /* call_modtoc_910 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_913);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_913() {     /* call_modtoc_912 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_915);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_915() {     /* call_modtoc_914 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[352];
        (--GIsp)->Val = ((Ptr) GLmodtoc_917);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_917() {     /* call_modtoc_916 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_919);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_919() {     /* call_modtoc_918 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[353];
        (--GIsp)->Val = ((Ptr) GLmodtoc_921);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_921() {     /* call_modtoc_920 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_923);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_923() {     /* call_modtoc_922 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_925);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_925() {     /* call_modtoc_924 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_927);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_927() {     /* call_modtoc_926 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[354];
        (--GIsp)->Val = ((Ptr) GLmodtoc_929);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_929() {     /* call_modtoc_928 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_907() {     /* 185 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_931);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_931() {     /* call_modtoc_930 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_933);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_933() {     /* call_modtoc_932 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[355];
        (--GIsp)->Val = ((Ptr) GLmodtoc_935);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_935() {     /* call_modtoc_934 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_937);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_937() {     /* call_modtoc_936 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[353];
        (--GIsp)->Val = ((Ptr) GLmodtoc_939);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_939() {     /* call_modtoc_938 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_906() {     /* 184 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[356])      {aRet = ((Ptr) GLmodtoc_940); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_942);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_942() {     /* call_modtoc_941 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_944);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_944() {     /* call_modtoc_943 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[357];
        (--GIsp)->Val = ((Ptr) GLmodtoc_946);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_946() {     /* call_modtoc_945 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_948);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_948() {     /* call_modtoc_947 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[353];
        (--GIsp)->Val = ((Ptr) GLmodtoc_950);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_950() {     /* call_modtoc_949 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_940() {     /* 187 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[358])  {aRet = ((Ptr) GLmodtoc_951); goto lRet;}
        if ((long) rLit[274]->Val < (long) GIbcons)     {aRet = ((Ptr) GLmodtoc_952); goto lRet;}
        GIa4 = rLit[274]->Val;
        if (GIa4->Val != rLit[234])     {aRet = ((Ptr) GLmodtoc_952); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_954);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_954() {     /* call_modtoc_953 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[359];
        (--GIsp)->Val = ((Ptr) GLmodtoc_956);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_956() {     /* call_modtoc_955 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_958);
        {aRet = ((Ptr) GLmodtoc_638); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_958() {     /* call_modtoc_957 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[360];
        (--GIsp)->Val = ((Ptr) GLmodtoc_960);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_960() {     /* call_modtoc_959 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_962);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_962() {     /* call_modtoc_961 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[361];
        (--GIsp)->Val = ((Ptr) GLmodtoc_964);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_964() {     /* call_modtoc_963 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_952() {     /* 189 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_966);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_966() {     /* call_modtoc_965 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_968);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_968() {     /* call_modtoc_967 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_970);
        {aRet = ((Ptr) GLmodtoc_648); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_970() {     /* call_modtoc_969 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_972);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_972() {     /* call_modtoc_971 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_951() {     /* 188 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[362])      {aRet = ((Ptr) GLmodtoc_973); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_975);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_975() {     /* call_modtoc_974 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_977);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_977() {     /* call_modtoc_976 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[363];
        (--GIsp)->Val = ((Ptr) GLmodtoc_979);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_979() {     /* call_modtoc_978 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_981);
        {aRet = ((Ptr) GLmodtoc_638); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_981() {     /* call_modtoc_980 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_983);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_983() {     /* call_modtoc_982 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_973() {     /* 191 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[364])      {aRet = ((Ptr) GLmodtoc_984); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_986);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_986() {     /* call_modtoc_985 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[214];
        (--GIsp)->Val = ((Ptr) GLmodtoc_988);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_988() {     /* call_modtoc_987 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_990);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_990() {     /* call_modtoc_989 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[236];
        (--GIsp)->Val = ((Ptr) GLmodtoc_992);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_992() {     /* call_modtoc_991 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_994);
        {aRet = ((Ptr) GLmodtoc_638); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_994() {     /* call_modtoc_993 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[350];
        (--GIsp)->Val = ((Ptr) GLmodtoc_996);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_996() {     /* call_modtoc_995 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_998);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_998() {     /* call_modtoc_997 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1000);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1000() {    /* call_modtoc_999 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_984() {     /* 192 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[365])      {aRet = ((Ptr) GLmodtoc_1001); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1003);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1003() {    /* call_modtoc_1002 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1005);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1005() {    /* call_modtoc_1004 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[355];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1007);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1007() {    /* call_modtoc_1006 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1009);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1009() {    /* call_modtoc_1008 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[236];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1011);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1011() {    /* call_modtoc_1010 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1013);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1013() {    /* call_modtoc_1012 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[366];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1015);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1015() {    /* call_modtoc_1014 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1001() {    /* 193 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[367])      {aRet = ((Ptr) GLmodtoc_1016); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1018);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1018() {    /* call_modtoc_1017 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[347];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1020);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1020() {    /* call_modtoc_1019 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1022);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1022() {    /* call_modtoc_1021 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1024);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1024() {    /* call_modtoc_1023 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[329];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1026);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1026() {    /* call_modtoc_1025 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1028);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1028() {    /* call_modtoc_1027 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[368];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1030);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1030() {    /* call_modtoc_1029 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1032);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1032() {    /* call_modtoc_1031 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1034);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1034() {    /* call_modtoc_1033 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1036);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1036() {    /* call_modtoc_1035 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[369];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1038);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1038() {    /* call_modtoc_1037 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1040);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1040() {    /* call_modtoc_1039 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1042);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1042() {    /* call_modtoc_1041 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1044);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1044() {    /* call_modtoc_1043 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1046);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1046() {    /* call_modtoc_1045 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1048);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1048() {    /* call_modtoc_1047 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[354];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1050);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1050() {    /* call_modtoc_1049 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1016() {    /* 194 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        if (rA1 != rLit[370])   goto l_195;
        GIa2 = rLit[274]->Val;
        rA1 = rLit[371];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_755); goto lRet;}
l_195:
        if (rA1 != rLit[372])   {aRet = ((Ptr) GLmodtoc_1051); goto lRet;}
        rA1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_1053);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_1053() {    /* call_modtoc_1052 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1055);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1055() {    /* call_modtoc_1054 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[182];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1057);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1057() {    /* call_modtoc_1056 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1059);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1059() {    /* call_modtoc_1058 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[368];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1061);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1061() {    /* call_modtoc_1060 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1051() {    /* 196 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != rLit[373])   goto l_197;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[147];
        (--rSp)->Val = rLit[374];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_756); goto lRet;}
l_197:
        if (rA1 != rLit[375])   goto l_199;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[376];
        (--rSp)->Val = rLit[146];
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_1062); goto lRet;}
l_199:
        if (rA1 != rLit[377])   goto l_201;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[374];
        (--rSp)->Val = rLit[146];
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_1062); goto lRet;}
l_201:
        if (rA1 != rLit[211])   {aRet = ((Ptr) GLmodtoc_1063); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_1064);
        (--rSp)->Val = rLit[211];
        (--rSp)->Val = rLit[274]->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_1064() {    /* 204 */
   {    register Ptr aRet;
        GIa2 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_755); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1063() {    /* 203 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[213])  {aRet = ((Ptr) GLmodtoc_1065); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_1066);
        (--rSp)->Val = rLit[213];
        (--rSp)->Val = rLit[274]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1066() {    /* 206 */
   {    register Ptr aRet;
        GIa2 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_755); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1065() {    /* 205 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[378])  {aRet = ((Ptr) GLmodtoc_1067); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_1068);
        (--rSp)->Val = rLit[312];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[140];
        (--rSp)->Val = rLit[273]->Val;
        GIa4 = (Ptr) 4;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1068() {    /* 208 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1067() {    /* 207 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[379])  {aRet = ((Ptr) GLmodtoc_1069); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_1070);
        (--rSp)->Val = rLit[314];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[140];
        (--rSp)->Val = rLit[273]->Val;
        GIa4 = (Ptr) 4;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1070() {    /* 210 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1069() {    /* 209 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != rLit[380])   goto l_211;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[145];
        (--rSp)->Val = rLit[146];
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_757); goto lRet;}
l_211:
        if (rA1 != rLit[381])   goto l_213;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[145];
        (--rSp)->Val = rLit[146];
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_758); goto lRet;}
l_213:
        if (rA1 != rLit[382])   goto l_215;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[383];
        (--rSp)->Val = rLit[146];
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_757); goto lRet;}
l_215:
        if (rA1 != rLit[384])   goto l_217;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[383];
        (--rSp)->Val = rLit[146];
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_758); goto lRet;}
l_217:
        if (rA1 != rLit[385])   goto l_219;
        GIa2 = rLit[383];
        rA1 = rLit[274]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_755); goto lRet;}
l_219:
        if (rA1 != rLit[386])   goto l_220;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[374];
        (--rSp)->Val = rLit[142];
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_756); goto lRet;}
l_220:
        if (rA1 != rLit[387])   goto l_222;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[376];
        (--rSp)->Val = rLit[142];
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_756); goto lRet;}
l_222:
        if (rA1 != rLit[388])   goto l_224;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[389];
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 5;
        {aRet = ((Ptr) GLmodtoc_1071); goto lRet;}
l_224:
        if (rA1 != rLit[390])   goto l_226;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[391];
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 5;
        {aRet = ((Ptr) GLmodtoc_1071); goto lRet;}
l_226:
        if (rA1 != rLit[392])   {aRet = ((Ptr) GLmodtoc_1072); goto lRet;}
        GIa2 = rLit[393];
        rA1 = rLit[274]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1074);
        {aRet = (rLit[168] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_1074() {    /* call_modtoc_1073 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYmodtoc; rSp = GIsp; rNil = GInil;
        if (GIa1 != rNil)       goto l_229;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[273]->Val;
        (--rSp)->Val = rLit[389];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 5;
        {aRet = ((Ptr) GLmodtoc_1071); goto lRet;}
l_229:
        GIa1 = rNil;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1072() {    /* 228 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[394])  {aRet = ((Ptr) GLmodtoc_1075); goto lRet;}
        GIa2 = rLit[395];
        GIa1 = rLit[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1077);
        {aRet = (rLit[168] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1077() {    /* call_modtoc_1076 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYmodtoc; rSp = GIsp; rNil = GInil;
        if (GIa1 != rNil)       goto l_233;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[273]->Val;
        (--rSp)->Val = rLit[391];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 5;
        {aRet = ((Ptr) GLmodtoc_1071); goto lRet;}
l_233:
        GIa1 = rNil;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1075() {    /* 232 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != rLit[396])   goto l_236;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rLit[391];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 5;
        {aRet = ((Ptr) GLmodtoc_1071); goto lRet;}
l_236:
        if (rA1 != rLit[397])   goto l_238;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[273]->Val;
        (--rSp)->Val = rLit[398];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = ((Ptr) GLmodtoc_1071); goto lRet;}
l_238:
        if (rA1 != rLit[399])   goto l_240;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[273]->Val;
        (--rSp)->Val = rLit[400];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = ((Ptr) GLmodtoc_1071); goto lRet;}
l_240:
        if (rA1 != rLit[401])   goto l_242;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[273]->Val;
        (--rSp)->Val = rLit[238];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = ((Ptr) GLmodtoc_1071); goto lRet;}
l_242:
        if (rA1 != rLit[402])   {aRet = ((Ptr) GLmodtoc_1078); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_1079);
        (--rSp)->Val = rLit[312];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_1079() {    /* 245 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1078() {    /* 244 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[403])  {aRet = ((Ptr) GLmodtoc_1080); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_1081);
        (--rSp)->Val = rLit[314];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1081() {    /* 247 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1080() {    /* 246 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != rLit[404])   goto l_248;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[405];
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_1082); goto lRet;}
l_248:
        if (rA1 != rLit[406])   goto l_250;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[374];
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_1082); goto lRet;}
l_250:
        if (rA1 != rLit[407])   goto l_252;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[376];
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_1082); goto lRet;}
l_252:
        if (rA1 != rLit[408])   goto l_254;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[409];
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_1082); goto lRet;}
l_254:
        if (rA1 != rLit[410])   goto l_256;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[273]->Val;
        (--rSp)->Val = rLit[411];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_1083); goto lRet;}
l_256:
        if (rA1 != rLit[412])   goto l_258;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[273]->Val;
        (--rSp)->Val = rLit[413];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_1083); goto lRet;}
l_258:
        if (rA1 != rLit[414])   goto l_260;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[273]->Val;
        (--rSp)->Val = rLit[415];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_1083); goto lRet;}
l_260:
        if (rA1 != rLit[416])   {aRet = ((Ptr) GLmodtoc_1084); goto lRet;}
        if ((long) rLit[274]->Val < (long) GIbcons)     {aRet = ((Ptr) GLmodtoc_1085); goto lRet;}
        rA4 = rLit[274]->Val;
        if (rA4->Val != rLit[75])       {aRet = ((Ptr) GLmodtoc_1085); goto lRet;}
        rA4 = (rA4 + 1)->Val;
        if (rA4->Val >= GIbfloat)       {aRet = ((Ptr) GLmodtoc_1085); goto lRet;}
        rA4 = rLit[274]->Val;
        rA4 = (rA4 + 1)->Val;
        if ((Fix) (rA4->Val) < (Fix) 0) {aRet = ((Ptr) GLmodtoc_1086); goto lRet;}
        rA1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_1088);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_1088() {    /* call_modtoc_1087 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1090);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1090() {    /* call_modtoc_1089 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[417];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1092);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1092() {    /* call_modtoc_1091 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1094);
        {aRet = ((Ptr) GLmodtoc_656); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1094() {    /* call_modtoc_1093 */
   {    register Ptr aRet, *rLit, rA2;
        rLit = GYmodtoc; rA2 = GIa2;
        rA2 = rLit[274]->Val;
        rA2 = (rA2 + 1)->Val;
        GIa3 = rLit[301];
        rA2 = rA2->Val;
        GIa1 = rLit[418];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1096);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_1096() {    /* call_modtoc_1095 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1086() {    /* 265 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1098);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1098() {    /* call_modtoc_1097 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1100);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1100() {    /* call_modtoc_1099 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[417];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1102);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1102() {    /* call_modtoc_1101 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1104);
        {aRet = ((Ptr) GLmodtoc_656); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1104() {    /* call_modtoc_1103 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYmodtoc; rA1 = GIa1;
        rA1 = rLit[274]->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1106);
        {aRet = (rLit[253] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_1106() {    /* call_modtoc_1105 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[301];
        GIa2 = GIa1;
        GIa1 = rLit[419];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1108);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1108() {    /* call_modtoc_1107 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1085() {    /* 263 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1110);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1110() {    /* call_modtoc_1109 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[328];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1112);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1112() {    /* call_modtoc_1111 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1114);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1114() {    /* call_modtoc_1113 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1116);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1116() {    /* call_modtoc_1115 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[329];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1118);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1118() {    /* call_modtoc_1117 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1120);
        {aRet = ((Ptr) GLmodtoc_638); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1120() {    /* call_modtoc_1119 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1122);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1122() {    /* call_modtoc_1121 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1124);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1124() {    /* call_modtoc_1123 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1126);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1126() {    /* call_modtoc_1125 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[420];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1128);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1128() {    /* call_modtoc_1127 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[329];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1130);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1130() {    /* call_modtoc_1129 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1132);
        {aRet = ((Ptr) GLmodtoc_656); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1132() {    /* call_modtoc_1131 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[421];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1134);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1134() {    /* call_modtoc_1133 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1136);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1136() {    /* call_modtoc_1135 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1138);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1138() {    /* call_modtoc_1137 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[422];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1140);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1140() {    /* call_modtoc_1139 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1142);
        {aRet = ((Ptr) GLmodtoc_656); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1142() {    /* call_modtoc_1141 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[423];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1144);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1144() {    /* call_modtoc_1143 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1146);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1146() {    /* call_modtoc_1145 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1148);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1148() {    /* call_modtoc_1147 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1150);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1150() {    /* call_modtoc_1149 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[424];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1152);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1152() {    /* call_modtoc_1151 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1084() {    /* 262 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        if (rA1 != rLit[425])   goto l_267;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[141];
        (--rSp)->Val = rLit[142];
        (--rSp)->Val = rLit[273]->Val;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_757); goto lRet;}
l_267:
        if (rA1 != rLit[426])   goto l_269;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[141];
        (--rSp)->Val = rLit[142];
        (--rSp)->Val = rLit[273]->Val;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_758); goto lRet;}
l_269:
        if (rA1 != rLit[427])   {aRet = ((Ptr) GLmodtoc_1153); goto lRet;}
        rA1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_1155);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_1155() {    /* call_modtoc_1154 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[428];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1157);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1157() {    /* call_modtoc_1156 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1159);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1159() {    /* call_modtoc_1158 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[429];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1161);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1161() {    /* call_modtoc_1160 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1163);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1163() {    /* call_modtoc_1162 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa2 = rLit[48];
        GIa1 = rLit[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1153() {    /* 271 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[430])      {aRet = ((Ptr) GLmodtoc_1164); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1166);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1166() {    /* call_modtoc_1165 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[428];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1168);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1168() {    /* call_modtoc_1167 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1170);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1170() {    /* call_modtoc_1169 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[431];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1172);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1172() {    /* call_modtoc_1171 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1174);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1174() {    /* call_modtoc_1173 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa2 = rLit[48];
        GIa1 = rLit[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1164() {    /* 272 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if (rA1 != rLit[432])   goto l_273;
        rA3 = rLit[273]->Val;
        rA2 = rLit[433];
        rA1 = rLit[274]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1175); goto lRet;}
l_273:
        if (rA1 != rLit[434])   goto l_274;
        rA3 = rLit[273]->Val;
        rA2 = rLit[435];
        rA1 = rLit[274]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1175); goto lRet;}
l_274:
        if (rA1 != rLit[436])   goto l_275;
        rA3 = rLit[273]->Val;
        rA2 = rLit[437];
        rA1 = rLit[274]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1175); goto lRet;}
l_275:
        if (rA1 != rLit[438])   goto l_276;
        rA3 = rLit[273]->Val;
        rA2 = rLit[439];
        rA1 = rLit[274]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1175); goto lRet;}
l_276:
        if (rA1 != rLit[440])   goto l_277;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[441];
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_1176); goto lRet;}
l_277:
        if (rA1 != rLit[442])   goto l_279;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[443];
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_1176); goto lRet;}
l_279:
        if (rA1 != rLit[444])   goto l_281;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[445];
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_1176); goto lRet;}
l_281:
        if (rA1 != rLit[446])   goto l_283;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[447];
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_1176); goto lRet;}
l_283:
        if (rA1 != rLit[448])   goto l_285;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[449];
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_1176); goto lRet;}
l_285:
        if (rA1 != rLit[450])   goto l_287;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[451];
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_1176); goto lRet;}
l_287:
        if (rA1 != rLit[452])   {aRet = ((Ptr) GLmodtoc_1177); goto lRet;}
        rA1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_1179);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_1179() {    /* call_modtoc_1178 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1181);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1181() {    /* call_modtoc_1180 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[453];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1183);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1183() {    /* call_modtoc_1182 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1185);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1185() {    /* call_modtoc_1184 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[116];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1187);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1187() {    /* call_modtoc_1186 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1189);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1189() {    /* call_modtoc_1188 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1191);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1191() {    /* call_modtoc_1190 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1177() {    /* 289 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[454])  {aRet = ((Ptr) GLmodtoc_1192); goto lRet;}
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_1194);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1194() {    /* call_modtoc_1193 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[455];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1196);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1196() {    /* call_modtoc_1195 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1198);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1198() {    /* call_modtoc_1197 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[456];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1200);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1200() {    /* call_modtoc_1199 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1202);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1202() {    /* call_modtoc_1201 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[116];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1204);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1204() {    /* call_modtoc_1203 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1206);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1206() {    /* call_modtoc_1205 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1208);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1208() {    /* call_modtoc_1207 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1210);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1210() {    /* call_modtoc_1209 */
   {    register Ptr aRet;
        GIsp += (Fix) 4;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1192() {    /* 290 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[457])      {aRet = ((Ptr) GLmodtoc_1211); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1213);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1213() {    /* call_modtoc_1212 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[455];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1215);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1215() {    /* call_modtoc_1214 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1217);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1217() {    /* call_modtoc_1216 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[458];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1219);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1219() {    /* call_modtoc_1218 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1221);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1221() {    /* call_modtoc_1220 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1223);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1223() {    /* call_modtoc_1222 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1211() {    /* 291 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[459])      {aRet = ((Ptr) GLmodtoc_1224); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1226);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1226() {    /* call_modtoc_1225 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1228);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1228() {    /* call_modtoc_1227 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[460];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1230);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1230() {    /* call_modtoc_1229 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1232);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1232() {    /* call_modtoc_1231 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1234);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1234() {    /* call_modtoc_1233 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1224() {    /* 292 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        if (rA1 != rLit[461])   goto l_293;
        rA3 = rLit[273]->Val;
        rA2 = rLit[274]->Val;
        rA1 = rLit[462];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1235); goto lRet;}
l_293:
        if (rA1 != rLit[463])   goto l_294;
        rA3 = rLit[273]->Val;
        rA2 = rLit[274]->Val;
        rA1 = rLit[464];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1235); goto lRet;}
l_294:
        if (rA1 != rLit[465])   goto l_295;
        rA3 = rLit[273]->Val;
        rA2 = rLit[274]->Val;
        rA1 = rLit[466];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1235); goto lRet;}
l_295:
        if (rA1 != rLit[467])   goto l_296;
        rA3 = rLit[273]->Val;
        rA2 = rLit[274]->Val;
        rA1 = rLit[468];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1235); goto lRet;}
l_296:
        if (rA1 != rLit[469])   goto l_297;
        rA3 = rLit[273]->Val;
        rA2 = rLit[274]->Val;
        rA1 = rLit[470];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1235); goto lRet;}
l_297:
        if (rA1 != rLit[471])   goto l_298;
        rA3 = rLit[273]->Val;
        rA2 = rLit[274]->Val;
        rA1 = rLit[472];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1235); goto lRet;}
l_298:
        if (rA1 != rLit[473])   goto l_299;
        rA3 = rLit[273]->Val;
        rA2 = rLit[274]->Val;
        rA1 = rLit[474];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1235); goto lRet;}
l_299:
        if (rA1 != rLit[475])   goto l_300;
        rA3 = rLit[273]->Val;
        rA2 = rLit[274]->Val;
        rA1 = rLit[476];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1235); goto lRet;}
l_300:
        if (rA1 != rLit[477])   goto l_301;
        rA3 = rLit[273]->Val;
        rA2 = rLit[274]->Val;
        rA1 = rLit[478];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1235); goto lRet;}
l_301:
        if (rA1 != rLit[479])   goto l_302;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[480];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_1236); goto lRet;}
l_302:
        if (rA1 != rLit[481])   {aRet = ((Ptr) GLmodtoc_1237); goto lRet;}
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        rA2 = (rSp + 15)->Val;
        rA1 = (Ptr) 5;
        (--rSp)->Val = ((Ptr) GLmodtoc_1239);
        {aRet = (rLit[482] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLmodtoc_1239() {    /* call_modtoc_1238 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GIa1;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_1241);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1241() {    /* call_modtoc_1240 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[483];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1243);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1243() {    /* call_modtoc_1242 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1245);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1245() {    /* call_modtoc_1244 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[484];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1247);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1247() {    /* call_modtoc_1246 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1249);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1249() {    /* call_modtoc_1248 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[485];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1251);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1251() {    /* call_modtoc_1250 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYmodtoc[48];
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1253);
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1253() {    /* call_modtoc_1252 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1255);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1255() {    /* call_modtoc_1254 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[486];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1257);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1257() {    /* call_modtoc_1256 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1259);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1259() {    /* call_modtoc_1258 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[487];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1261);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1261() {    /* call_modtoc_1260 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1263);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1263() {    /* call_modtoc_1262 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[485];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1265);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1265() {    /* call_modtoc_1264 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYmodtoc[48];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1267);
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1267() {    /* call_modtoc_1266 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1269);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1269() {    /* call_modtoc_1268 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[488];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1271);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1271() {    /* call_modtoc_1270 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYmodtoc[48];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1273);
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1273() {    /* call_modtoc_1272 */
   {    register Ptr aRet;
        GIsp += (Fix) 5;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1237() {    /* 304 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[489])  {aRet = ((Ptr) GLmodtoc_1274); goto lRet;}
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        GIa2 = (rSp + 15)->Val;
        GIa1 = (Ptr) 5;
        (--rSp)->Val = ((Ptr) GLmodtoc_1276);
        {aRet = (rLit[482] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1276() {    /* call_modtoc_1275 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GIa1;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_1278);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1278() {    /* call_modtoc_1277 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[490];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1280);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1280() {    /* call_modtoc_1279 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1282);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1282() {    /* call_modtoc_1281 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1284);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1284() {    /* call_modtoc_1283 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[491];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1286);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1286() {    /* call_modtoc_1285 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1288);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1288() {    /* call_modtoc_1287 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[492];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1290);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1290() {    /* call_modtoc_1289 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1292);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1292() {    /* call_modtoc_1291 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[492];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1294);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1294() {    /* call_modtoc_1293 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1296);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1296() {    /* call_modtoc_1295 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1298);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1298() {    /* call_modtoc_1297 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1300);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1300() {    /* call_modtoc_1299 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1302);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1302() {    /* call_modtoc_1301 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1304);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1304() {    /* call_modtoc_1303 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[493];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1306);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1306() {    /* call_modtoc_1305 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1308);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1308() {    /* call_modtoc_1307 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1310);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1310() {    /* call_modtoc_1309 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1312);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1312() {    /* call_modtoc_1311 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[494];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1314);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1314() {    /* call_modtoc_1313 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1316);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1316() {    /* call_modtoc_1315 */
   {    register Ptr aRet;
        GIsp += (Fix) 5;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1274() {    /* 305 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[495])  {aRet = ((Ptr) GLmodtoc_1317); goto lRet;}
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        GIa2 = (rSp + 15)->Val;
        GIa1 = (Ptr) 5;
        (--rSp)->Val = ((Ptr) GLmodtoc_1319);
        {aRet = (rLit[482] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1319() {    /* call_modtoc_1318 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = (rSp + 16)->Val;
        GIa1 = (Ptr) 6;
        (--rSp)->Val = ((Ptr) GLmodtoc_1321);
        {aRet = (GYmodtoc[482] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1321() {    /* call_modtoc_1320 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GIa1;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_1323);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1323() {    /* call_modtoc_1322 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[490];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1325);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1325() {    /* call_modtoc_1324 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1327);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1327() {    /* call_modtoc_1326 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1329);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1329() {    /* call_modtoc_1328 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[491];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1331);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1331() {    /* call_modtoc_1330 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1333);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1333() {    /* call_modtoc_1332 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[496];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1335);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1335() {    /* call_modtoc_1334 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1337);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1337() {    /* call_modtoc_1336 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[492];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1339);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1339() {    /* call_modtoc_1338 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1341);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1341() {    /* call_modtoc_1340 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[492];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1343);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1343() {    /* call_modtoc_1342 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1345);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1345() {    /* call_modtoc_1344 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1347);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1347() {    /* call_modtoc_1346 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1349);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1349() {    /* call_modtoc_1348 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1351);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1351() {    /* call_modtoc_1350 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1353);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1353() {    /* call_modtoc_1352 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[493];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1355);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1355() {    /* call_modtoc_1354 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1357);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1357() {    /* call_modtoc_1356 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1359);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1359() {    /* call_modtoc_1358 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1361);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1361() {    /* call_modtoc_1360 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[494];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1363);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1363() {    /* call_modtoc_1362 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1365);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1365() {    /* call_modtoc_1364 */
   {    register Ptr aRet;
        GIsp += (Fix) 6;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1317() {    /* 306 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[497])  {aRet = ((Ptr) GLmodtoc_1366); goto lRet;}
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        GIa2 = (rSp + 15)->Val;
        GIa1 = (Ptr) 5;
        (--rSp)->Val = ((Ptr) GLmodtoc_1368);
        {aRet = (rLit[482] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1368() {    /* call_modtoc_1367 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GIa1;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_1370);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1370() {    /* call_modtoc_1369 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[490];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1372);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1372() {    /* call_modtoc_1371 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1374);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1374() {    /* call_modtoc_1373 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1376);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1376() {    /* call_modtoc_1375 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[491];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1378);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1378() {    /* call_modtoc_1377 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1380);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1380() {    /* call_modtoc_1379 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1382);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1382() {    /* call_modtoc_1381 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1384);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1384() {    /* call_modtoc_1383 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1386);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1386() {    /* call_modtoc_1385 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[498];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1388);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1388() {    /* call_modtoc_1387 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1390);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1390() {    /* call_modtoc_1389 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1392);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1392() {    /* call_modtoc_1391 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1394);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1394() {    /* call_modtoc_1393 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1396);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1396() {    /* call_modtoc_1395 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1398);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1398() {    /* call_modtoc_1397 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[499];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1400);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1400() {    /* call_modtoc_1399 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1402);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1402() {    /* call_modtoc_1401 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[500];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1404);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1404() {    /* call_modtoc_1403 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1406);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1406() {    /* call_modtoc_1405 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1408);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1408() {    /* call_modtoc_1407 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[501];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1410);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1410() {    /* call_modtoc_1409 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1412);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1412() {    /* call_modtoc_1411 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1414);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1414() {    /* call_modtoc_1413 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1416);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1416() {    /* call_modtoc_1415 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1418);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1418() {    /* call_modtoc_1417 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1420);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1420() {    /* call_modtoc_1419 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[424];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1422);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1422() {    /* call_modtoc_1421 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1424);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1424() {    /* call_modtoc_1423 */
   {    register Ptr aRet;
        GIsp += (Fix) 5;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1366() {    /* 307 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        if (rA1 != rLit[502])   goto l_308;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[143];
        (--rSp)->Val = rLit[144];
        (--rSp)->Val = rLit[273]->Val;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_757); goto lRet;}
l_308:
        if (rA1 != rLit[503])   goto l_310;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[143];
        (--rSp)->Val = rLit[144];
        (--rSp)->Val = rLit[273]->Val;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_758); goto lRet;}
l_310:
        if (rA1 != rLit[504])   {aRet = ((Ptr) GLmodtoc_1425); goto lRet;}
        rA1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_1427);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_1427() {    /* call_modtoc_1426 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1429);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1429() {    /* call_modtoc_1428 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[355];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1431);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1431() {    /* call_modtoc_1430 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1433);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1433() {    /* call_modtoc_1432 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[505];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1435);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1435() {    /* call_modtoc_1434 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1437);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1437() {    /* call_modtoc_1436 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[366];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1439);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1439() {    /* call_modtoc_1438 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1425() {    /* 312 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[506])      {aRet = ((Ptr) GLmodtoc_1440); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1442);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1442() {    /* call_modtoc_1441 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[214];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1444);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1444() {    /* call_modtoc_1443 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1446);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1446() {    /* call_modtoc_1445 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[505];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1448);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1448() {    /* call_modtoc_1447 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1450);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1450() {    /* call_modtoc_1449 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[350];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1452);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1452() {    /* call_modtoc_1451 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1454);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1454() {    /* call_modtoc_1453 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1456);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1456() {    /* call_modtoc_1455 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1440() {    /* 313 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[507])  {aRet = ((Ptr) GLmodtoc_1457); goto lRet;}
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        GIa2 = (rSp + 15)->Val;
        GIa1 = (Ptr) 5;
        (--rSp)->Val = ((Ptr) GLmodtoc_1459);
        {aRet = (rLit[482] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1459() {    /* call_modtoc_1458 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GIa1;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_1461);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1461() {    /* call_modtoc_1460 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[508];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1463);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1463() {    /* call_modtoc_1462 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1465);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1465() {    /* call_modtoc_1464 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1467);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1467() {    /* call_modtoc_1466 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[509];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1469);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1469() {    /* call_modtoc_1468 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1471);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1471() {    /* call_modtoc_1470 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[510];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1473);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1473() {    /* call_modtoc_1472 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1475);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1475() {    /* call_modtoc_1474 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1477);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1477() {    /* call_modtoc_1476 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[511];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1479);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1479() {    /* call_modtoc_1478 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1481);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1481() {    /* call_modtoc_1480 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[510];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1483);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1483() {    /* call_modtoc_1482 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1485);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1485() {    /* call_modtoc_1484 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1487);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1487() {    /* call_modtoc_1486 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[512];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1489);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1489() {    /* call_modtoc_1488 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1491);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1491() {    /* call_modtoc_1490 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1493);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1493() {    /* call_modtoc_1492 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1495);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1495() {    /* call_modtoc_1494 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa2 = rLit[513];
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1497);
        {aRet = (rLit[168] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1497() {    /* call_modtoc_1496 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmodtoc_1498); goto lRet;}
        GIa2 = rLit[514];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1500);
        {aRet = (rLit[168] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1500() {    /* call_modtoc_1499 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmodtoc_1498); goto lRet;}
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1502);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1502() {    /* call_modtoc_1501 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[515];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1504);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1504() {    /* call_modtoc_1503 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1505);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1498() {    /* 315 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1507);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1507() {    /* call_modtoc_1506 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[516];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1509);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1509() {    /* call_modtoc_1508 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1511);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1511() {    /* call_modtoc_1510 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[517];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1513);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1513() {    /* call_modtoc_1512 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1515);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1515() {    /* call_modtoc_1514 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[518];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1517);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1517() {    /* call_modtoc_1516 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1519);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1519() {    /* call_modtoc_1518 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 3;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1521);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1521() {    /* call_modtoc_1520 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[519];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1523);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1523() {    /* call_modtoc_1522 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1525);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1525() {    /* call_modtoc_1524 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1527);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1527() {    /* call_modtoc_1526 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1529);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1529() {    /* call_modtoc_1528 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 3;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1531);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1531() {    /* call_modtoc_1530 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[520];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1533);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1533() {    /* call_modtoc_1532 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1535);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1535() {    /* call_modtoc_1534 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1537);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1537() {    /* call_modtoc_1536 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1539);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1539() {    /* call_modtoc_1538 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 3;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1541);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1541() {    /* call_modtoc_1540 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[521];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1543);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1543() {    /* call_modtoc_1542 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1545);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1545() {    /* call_modtoc_1544 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1547);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1547() {    /* call_modtoc_1546 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[522];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1549);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1549() {    /* call_modtoc_1548 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1551);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1551() {    /* call_modtoc_1550 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 3;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1553);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1553() {    /* call_modtoc_1552 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[523];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1555);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1555() {    /* call_modtoc_1554 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1557);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1557() {    /* call_modtoc_1556 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1559);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1559() {    /* call_modtoc_1558 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1561);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1561() {    /* call_modtoc_1560 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 3;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1563);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1563() {    /* call_modtoc_1562 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[524];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1565);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1565() {    /* call_modtoc_1564 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1567);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1567() {    /* call_modtoc_1566 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1569);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1569() {    /* call_modtoc_1568 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1571);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1571() {    /* call_modtoc_1570 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 3;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1573);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1573() {    /* call_modtoc_1572 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[525];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1575);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1575() {    /* call_modtoc_1574 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1505);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1505() {    /* 316 */
   {    register Ptr aRet;
        GIsp += (Fix) 5;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1457() {    /* 314 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        if (rA1 != rLit[526])   goto l_317;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[144];
        (--rSp)->Val = rLit[145];
        (--rSp)->Val = rLit[273]->Val;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_757); goto lRet;}
l_317:
        if (rA1 != rLit[527])   goto l_319;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[144];
        (--rSp)->Val = rLit[145];
        (--rSp)->Val = rLit[273]->Val;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_758); goto lRet;}
l_319:
        if (rA1 != rLit[528])   {aRet = ((Ptr) GLmodtoc_1576); goto lRet;}
        rA1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_1578);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_1578() {    /* call_modtoc_1577 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1580);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1580() {    /* call_modtoc_1579 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[529];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1582);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1582() {    /* call_modtoc_1581 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1584);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1584() {    /* call_modtoc_1583 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[530];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1586);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1586() {    /* call_modtoc_1585 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1588);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1588() {    /* call_modtoc_1587 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[500];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1590);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1590() {    /* call_modtoc_1589 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1576() {    /* 321 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[531])      {aRet = ((Ptr) GLmodtoc_1591); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1593);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1593() {    /* call_modtoc_1592 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[532];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1595);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1595() {    /* call_modtoc_1594 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1597);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1597() {    /* call_modtoc_1596 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[533];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1599);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1599() {    /* call_modtoc_1598 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1601);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1601() {    /* call_modtoc_1600 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[534];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1603);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1603() {    /* call_modtoc_1602 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1605);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1605() {    /* call_modtoc_1604 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1607);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1607() {    /* call_modtoc_1606 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1591() {    /* 322 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[535])  {aRet = ((Ptr) GLmodtoc_1608); goto lRet;}
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        GIa2 = (rSp + 15)->Val;
        GIa1 = (Ptr) 5;
        (--rSp)->Val = ((Ptr) GLmodtoc_1610);
        {aRet = (rLit[482] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1610() {    /* call_modtoc_1609 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GIa1;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_1612);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1612() {    /* call_modtoc_1611 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[536];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1614);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1614() {    /* call_modtoc_1613 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1616);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1616() {    /* call_modtoc_1615 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1618);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1618() {    /* call_modtoc_1617 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[537];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1620);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1620() {    /* call_modtoc_1619 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1622);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1622() {    /* call_modtoc_1621 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[510];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1624);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1624() {    /* call_modtoc_1623 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1626);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1626() {    /* call_modtoc_1625 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1628);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1628() {    /* call_modtoc_1627 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[538];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1630);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1630() {    /* call_modtoc_1629 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1632);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1632() {    /* call_modtoc_1631 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[510];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1634);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1634() {    /* call_modtoc_1633 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1636);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1636() {    /* call_modtoc_1635 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1638);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1638() {    /* call_modtoc_1637 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[512];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1640);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1640() {    /* call_modtoc_1639 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1642);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1642() {    /* call_modtoc_1641 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1644);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1644() {    /* call_modtoc_1643 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1646);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1646() {    /* call_modtoc_1645 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa2 = rLit[539];
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1648);
        {aRet = (rLit[168] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1648() {    /* call_modtoc_1647 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmodtoc_1649); goto lRet;}
        GIa2 = rLit[540];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1651);
        {aRet = (rLit[168] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1651() {    /* call_modtoc_1650 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmodtoc_1649); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1653);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1653() {    /* call_modtoc_1652 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[541];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1655);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1655() {    /* call_modtoc_1654 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1656);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1649() {    /* 324 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1658);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1658() {    /* call_modtoc_1657 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[516];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1660);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1660() {    /* call_modtoc_1659 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1662);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1662() {    /* call_modtoc_1661 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[517];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1664);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1664() {    /* call_modtoc_1663 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1666);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1666() {    /* call_modtoc_1665 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[518];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1668);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1668() {    /* call_modtoc_1667 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1670);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1670() {    /* call_modtoc_1669 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 3;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1672);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1672() {    /* call_modtoc_1671 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[519];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1674);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1674() {    /* call_modtoc_1673 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1676);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1676() {    /* call_modtoc_1675 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1678);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1678() {    /* call_modtoc_1677 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1680);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1680() {    /* call_modtoc_1679 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 3;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1682);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1682() {    /* call_modtoc_1681 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[520];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1684);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1684() {    /* call_modtoc_1683 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1686);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1686() {    /* call_modtoc_1685 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1688);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1688() {    /* call_modtoc_1687 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1690);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1690() {    /* call_modtoc_1689 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 3;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1692);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1692() {    /* call_modtoc_1691 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[542];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1694);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1694() {    /* call_modtoc_1693 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1696);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1696() {    /* call_modtoc_1695 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1698);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1698() {    /* call_modtoc_1697 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[522];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1700);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1700() {    /* call_modtoc_1699 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1702);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1702() {    /* call_modtoc_1701 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 3;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1704);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1704() {    /* call_modtoc_1703 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[523];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1706);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1706() {    /* call_modtoc_1705 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1708);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1708() {    /* call_modtoc_1707 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1710);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1710() {    /* call_modtoc_1709 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1712);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1712() {    /* call_modtoc_1711 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 3;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1714);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1714() {    /* call_modtoc_1713 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[524];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1716);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1716() {    /* call_modtoc_1715 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1718);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1718() {    /* call_modtoc_1717 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1720);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1720() {    /* call_modtoc_1719 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1722);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1722() {    /* call_modtoc_1721 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 3;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1724);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1724() {    /* call_modtoc_1723 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[543];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1726);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1726() {    /* call_modtoc_1725 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1656);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1656() {    /* 325 */
   {    register Ptr aRet;
        GIsp += (Fix) 5;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1608() {    /* 323 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[544])  {aRet = ((Ptr) GLmodtoc_1727); goto lRet;}
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        GIa2 = (rSp + 15)->Val;
        GIa1 = (Ptr) 5;
        (--rSp)->Val = ((Ptr) GLmodtoc_1729);
        {aRet = (rLit[482] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1729() {    /* call_modtoc_1728 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = (rSp + 16)->Val;
        GIa1 = (Ptr) 6;
        (--rSp)->Val = ((Ptr) GLmodtoc_1731);
        {aRet = (GYmodtoc[482] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1731() {    /* call_modtoc_1730 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = GYmodtoc[545];
        (--rSp)->Val = ((Ptr) GLmodtoc_1733);
        {aRet = ((Ptr) GLmodtoc_767); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1733() {    /* call_modtoc_1732 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GIa1;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_1735);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1735() {    /* call_modtoc_1734 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[536];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1737);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1737() {    /* call_modtoc_1736 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1739);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1739() {    /* call_modtoc_1738 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1741);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1741() {    /* call_modtoc_1740 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[537];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1743);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1743() {    /* call_modtoc_1742 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1745);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1745() {    /* call_modtoc_1744 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[510];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1747);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1747() {    /* call_modtoc_1746 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1749);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1749() {    /* call_modtoc_1748 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa2 = rLit[546];
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1751);
        {aRet = (rLit[168] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1751() {    /* call_modtoc_1750 */
   {    register Ptr aRet;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLmodtoc_1752); goto lRet;}
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1754);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1754() {    /* call_modtoc_1753 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[523];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1756);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1756() {    /* call_modtoc_1755 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1758);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1758() {    /* call_modtoc_1757 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1760);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1760() {    /* call_modtoc_1759 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1752);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1752() {    /* 328 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1762);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1762() {    /* call_modtoc_1761 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[538];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1764);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1764() {    /* call_modtoc_1763 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1766);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1766() {    /* call_modtoc_1765 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[510];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1768);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1768() {    /* call_modtoc_1767 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1770);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1770() {    /* call_modtoc_1769 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa2 = rLit[547];
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1772);
        {aRet = (rLit[168] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1772() {    /* call_modtoc_1771 */
   {    register Ptr aRet;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLmodtoc_1773); goto lRet;}
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1775);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1775() {    /* call_modtoc_1774 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[524];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1777);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1777() {    /* call_modtoc_1776 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1779);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1779() {    /* call_modtoc_1778 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1781);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1781() {    /* call_modtoc_1780 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1773);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1773() {    /* 330 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1783);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1783() {    /* call_modtoc_1782 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[512];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1785);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1785() {    /* call_modtoc_1784 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1787);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1787() {    /* call_modtoc_1786 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1789);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1789() {    /* call_modtoc_1788 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1791);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1791() {    /* call_modtoc_1790 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1793);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1793() {    /* call_modtoc_1792 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_1794);
        (--rSp)->Val = rLit[548];
        (--rSp)->Val = rLit[549];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[115];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1794() {    /* 331 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1796);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1796() {    /* call_modtoc_1795 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1798);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1798() {    /* call_modtoc_1797 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYmodtoc[333];
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1800);
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1800() {    /* call_modtoc_1799 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1802);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1802() {    /* call_modtoc_1801 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYmodtoc[172];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1804);
        {aRet = ((Ptr) GLmodtoc_33); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1804() {    /* call_modtoc_1803 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1806);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1806() {    /* call_modtoc_1805 */
   {    register Ptr aRet;
        GIsp += (Fix) 7;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1727() {    /* 326 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[550])  {aRet = ((Ptr) GLmodtoc_1807); goto lRet;}
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_1809);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1809() {    /* call_modtoc_1808 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[536];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1811);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1811() {    /* call_modtoc_1810 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1813);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1813() {    /* call_modtoc_1812 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1815);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1815() {    /* call_modtoc_1814 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[551];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1817);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1817() {    /* call_modtoc_1816 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1819);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1819() {    /* call_modtoc_1818 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1821);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1821() {    /* call_modtoc_1820 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1823);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1823() {    /* call_modtoc_1822 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1825);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1825() {    /* call_modtoc_1824 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[538];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1827);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1827() {    /* call_modtoc_1826 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1829);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1829() {    /* call_modtoc_1828 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[510];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1831);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1831() {    /* call_modtoc_1830 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1833);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1833() {    /* call_modtoc_1832 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1835);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1835() {    /* call_modtoc_1834 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[512];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1837);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1837() {    /* call_modtoc_1836 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1839);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1839() {    /* call_modtoc_1838 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[552];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1841);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1841() {    /* call_modtoc_1840 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1843);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1843() {    /* call_modtoc_1842 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1845);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1845() {    /* call_modtoc_1844 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[553];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1847);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1847() {    /* call_modtoc_1846 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1849);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1849() {    /* call_modtoc_1848 */
   {    register Ptr aRet;
        GIsp += (Fix) 3;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1807() {    /* 332 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[554])      {aRet = ((Ptr) GLmodtoc_1850); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1852);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1852() {    /* call_modtoc_1851 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1854);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1854() {    /* call_modtoc_1853 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[355];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1856);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1856() {    /* call_modtoc_1855 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1858);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1858() {    /* call_modtoc_1857 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[555];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1860);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1860() {    /* call_modtoc_1859 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1850() {    /* 333 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[556])      {aRet = ((Ptr) GLmodtoc_1861); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1863);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1863() {    /* call_modtoc_1862 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[214];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1865);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1865() {    /* call_modtoc_1864 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1867);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1867() {    /* call_modtoc_1866 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[557];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1869);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1869() {    /* call_modtoc_1868 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1871);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1871() {    /* call_modtoc_1870 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1873);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1873() {    /* call_modtoc_1872 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1861() {    /* 334 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[558])      {aRet = ((Ptr) GLmodtoc_1874); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1876);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1876() {    /* call_modtoc_1875 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1878);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1878() {    /* call_modtoc_1877 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[355];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1880);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1880() {    /* call_modtoc_1879 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1882);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1882() {    /* call_modtoc_1881 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[559];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1884);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1884() {    /* call_modtoc_1883 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1874() {    /* 335 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[560])      {aRet = ((Ptr) GLmodtoc_1885); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1887);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1887() {    /* call_modtoc_1886 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[214];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1889);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1889() {    /* call_modtoc_1888 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1891);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1891() {    /* call_modtoc_1890 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[561];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1893);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1893() {    /* call_modtoc_1892 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1895);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1895() {    /* call_modtoc_1894 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1897);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1897() {    /* call_modtoc_1896 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1885() {    /* 336 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[562])      {aRet = ((Ptr) GLmodtoc_1898); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1900);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1900() {    /* call_modtoc_1899 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1902);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1902() {    /* call_modtoc_1901 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[563];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1904);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1904() {    /* call_modtoc_1903 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1906);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1906() {    /* call_modtoc_1905 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[564];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1908);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1908() {    /* call_modtoc_1907 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1898() {    /* 337 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[565])      {aRet = ((Ptr) GLmodtoc_1909); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1911);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1911() {    /* call_modtoc_1910 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1913);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1913() {    /* call_modtoc_1912 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[563];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1915);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1915() {    /* call_modtoc_1914 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1917);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1917() {    /* call_modtoc_1916 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[566];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1919);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1919() {    /* call_modtoc_1918 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1909() {    /* 338 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA1 != rLit[567])   goto l_339;
        rA1 = rLit[313];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1920); goto lRet;}
l_339:
        if (rA1 != rLit[568])   goto l_340;
        rA1 = rLit[315];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1920); goto lRet;}
l_340:
        if (rA1 != rLit[569])   goto l_341;
        rA1 = rLit[313];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1921); goto lRet;}
l_341:
        if (rA1 != rLit[570])   goto l_342;
        rA1 = rLit[315];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1921); goto lRet;}
l_342:
        if (rA1 != rLit[571])   goto l_343;
        rA1 = rLit[374];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1921); goto lRet;}
l_343:
        if (rA1 != rLit[572])   goto l_344;
        rA1 = rLit[405];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1921); goto lRet;}
l_344:
        if (rA1 != rLit[573])   goto l_345;
        rA1 = rLit[409];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1921); goto lRet;}
l_345:
        if (rA1 != rLit[574])   goto l_346;
        rA1 = rLit[376];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1921); goto lRet;}
l_346:
        if (rA1 != rLit[575])   goto l_347;
        rA2 = rLit[141];
        rA1 = rLit[576];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1922); goto lRet;}
l_347:
        if (rA1 != rLit[577])   goto l_348;
        rA2 = rLit[144];
        rA1 = rLit[143];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1922); goto lRet;}
l_348:
        if (rA1 != rLit[578])   goto l_349;
        rA2 = rLit[145];
        rA1 = rLit[144];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1922); goto lRet;}
l_349:
        if (rA1 != rLit[579])   goto l_350;
        rA2 = rLit[317];
        rA1 = rLit[146];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1922); goto lRet;}
l_350:
        if (rA1 != rLit[580])   goto l_351;
        rA1 = rLit[581];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1923); goto lRet;}
l_351:
        if (rA1 != rLit[582])   goto l_352;
        rA1 = rLit[583];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1924); goto lRet;}
l_352:
        if (rA1 != rLit[584])   goto l_353;
        rA1 = rLit[585];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1924); goto lRet;}
l_353:
        if (rA1 != rLit[586])   goto l_354;
        rA1 = rLit[587];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1925); goto lRet;}
l_354:
        if (rA1 != rLit[588])   goto l_355;
        rA1 = rLit[589];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1925); goto lRet;}
l_355:
        if (rA1 != rLit[590])   goto l_356;
        rA1 = rLit[591];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1925); goto lRet;}
l_356:
        if (rA1 != rLit[592])   goto l_357;
        rA1 = rLit[593];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1925); goto lRet;}
l_357:
        if (rA1 != rLit[594])   {aRet = ((Ptr) GLmodtoc_1926); goto lRet;}
        rA1 = rLit[595];
        (--rSp)->Val = ((Ptr) GLmodtoc_1928);
        {aRet = ((Ptr) GLmodtoc_767); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_1928() {    /* call_modtoc_1927 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = GYmodtoc[595];
        (--rSp)->Val = ((Ptr) GLmodtoc_1930);
        {aRet = ((Ptr) GLmodtoc_767); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1930() {    /* call_modtoc_1929 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLmodtoc_1931);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[269]->Val;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[596] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1931() {    /* 359 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = rLit[269]->Val;
        rLit[269]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[597];
        (--rSp)->Val = rLit[71];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = rLit[598];
        (--rSp)->Val = ((Ptr) GLmodtoc_1933);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1933() {    /* call_modtoc_1932 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_1934);
        (--rSp)->Val = rLit[319];
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1934() {    /* 360 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1936);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1936() {    /* call_modtoc_1935 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1938);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1938() {    /* call_modtoc_1937 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[599];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1940);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1940() {    /* call_modtoc_1939 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[600];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1942);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1942() {    /* call_modtoc_1941 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1944);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1944() {    /* call_modtoc_1943 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_1945);
        (--rSp)->Val = rLit[327];
        (--rSp)->Val = rLit[151];
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1945() {    /* 361 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1947);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1947() {    /* call_modtoc_1946 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYmodtoc[269]->Val = (rSp + 6)->Val;
        rSp += (Fix) 9;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1926() {    /* 358 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        if (rA1 != rLit[601])   goto l_362;
        GIa3 = (rSp + 9)->Val;
        GIa2 = rLit[273]->Val;
        rA1 = rLit[274]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_1948); goto lRet;}
l_362:
        if (rA1 != rLit[602])   {aRet = ((Ptr) GLmodtoc_1949); goto lRet;}
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLmodtoc_1950); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_1950() {    /* 364 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLmodtoc_1951); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1952);
        (--rSp)->Val = rLit[603]->Val;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_1952() {    /* 366 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_1950); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_1951() {    /* 365 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rBcons;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rA1;
l_367:
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_368;
        if ((long) rSp->Val < (long) rBcons)    goto l_368;
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        rA3 = rSp->Val;
        rSp->Val = (rA3 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rA3->Val;
        rA2 = rSp->Val;
        rA1 = (rSp + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rA2 = rLit[22]->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rLit[22]->Val = rA1;
        rSp += (Fix) 2;
        goto l_367;
l_368:
        rA1 = GInil;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_1949() {    /* 363 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[604])  {aRet = ((Ptr) GLmodtoc_1953); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLmodtoc_1954);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1954() {    /* 370 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_1955);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_1956);
        (--rSp)->Val = rLit[9]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1956() {    /* 373 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        GIa2 = rLit[177]->Val;
        rA1 = rLit[273]->Val;
        rA1 = llrt_call_assq (rA1, GIa2, GIbcons, rNil);
        if (rA1 == rNil)        goto l_374;
        (--rSp)->Val = ((Ptr) GLmodtoc_1957);
        (--rSp)->Val = rLit[152];
        (--rSp)->Val = rLit[50]->Val;
        (--rSp)->Val = rLit[273]->Val;
        (--rSp)->Val = rLit[115];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
l_374:
        rA1 = rLit[152];
        (--rSp)->Val = ((Ptr) GLmodtoc_1959);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_1959() {    /* call_modtoc_1958 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1961);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1961() {    /* call_modtoc_1960 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1963);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1963() {    /* call_modtoc_1962 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1957);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1957() {    /* 375 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLmodtoc_1964);
        {aRet = ((Ptr) GLmodtoc_1955); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1955() {    /* 371 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_1965);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1965() {    /* 377 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1964() {    /* 372 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1953() {    /* 369 */
   {    register Ptr aRet, *rLit, rA1, rNil;
        rLit = GYmodtoc; rA1 = GIa1; rNil = GInil;
        if (rA1 != rLit[605])   goto l_378;
        rA1 = rNil;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
l_378:
        if (rA1 != rLit[606])   goto l_379;
        rA1 = rNil;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
l_379:
        if (rA1 != rLit[607])   goto l_380;
        rA1 = rNil;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
l_380:
        if (rA1 != rLit[608])   goto l_381;
        rA1 = rNil;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
l_381:
        if (rA1 != rLit[609])   {aRet = ((Ptr) GLmodtoc_1966); goto lRet;}
        rA1 = rLit[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1968);
        {aRet = ((Ptr) GLmodtoc_1969); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_1968() {    /* call_modtoc_1967 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = GIa1;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_1971);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1971() {    /* call_modtoc_1970 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[610];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1973);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1973() {    /* call_modtoc_1972 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1975);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1975() {    /* call_modtoc_1974 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[611];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1977);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1977() {    /* call_modtoc_1976 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 11)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_1979);
        {aRet = ((Ptr) GLmodtoc_673); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1979() {    /* call_modtoc_1978 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[116];
        (--GIsp)->Val = ((Ptr) GLmodtoc_1981);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1981() {    /* call_modtoc_1980 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_1982);
        (--rSp)->Val = rLit[237];
        (--rSp)->Val = rLit[274]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1982() {    /* 383 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1984);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1984() {    /* call_modtoc_1983 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_1985);
        (--rSp)->Val = rLit[612];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[611];
        (--rSp)->Val = rLit[283]->Val;
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[613];
        GIa4 = (Ptr) 6;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1985() {    /* 384 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1987);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1987() {    /* call_modtoc_1986 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        rA2 = (rSp + 11)->Val;
        rA2 = (rA2 + 1)->Val;
        rA2 = rA2->Val;
        GIa1 = GInil;
        (--rSp)->Val = ((Ptr) GLmodtoc_1989);
        {aRet = (GYmodtoc[614] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_1989() {    /* call_modtoc_1988 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBcons;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        (rSp + 1)->Val = rA1;
        rA2 = rLit[21]->Val;
        rA1 = rLit[274]->Val;
        rA1 = llrt_call_assq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        goto l_385;
        (--rSp)->Val = ((Ptr) GLmodtoc_1990);
        (--rSp)->Val = rLit[615];
        (--rSp)->Val = rLit[274]->Val;
        GIa4 = (Ptr) 2;
        {aRet = ((Ptr) GLmodtoc_146); goto lRet;}
l_385:
        rA2 = rLit[21]->Val;
        rA1 = (rSp + 1)->Val;
        rA1 = llrt_call_rassq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLmodtoc_1991); goto lRet;}
        rA2 = (rSp + 1)->Val;
        rA1 = rLit[616];
        (--rSp)->Val = ((Ptr) GLmodtoc_1993);
        {aRet = (rLit[614] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_1993() {    /* call_modtoc_1992 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 1)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLmodtoc_1991);
        (--rSp)->Val = GYmodtoc[617];
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = ((Ptr) GLmodtoc_146); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1991() {    /* 389 */
   {    register Ptr aRet, *rLit, rA1, rA2;
        rLit = GYmodtoc; rA1 = GIa1; rA2 = GIa2;
        rA2 = (GIsp + 1)->Val;
        rA1 = rLit[274]->Val;
        GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rA2 = rLit[21]->Val;
        GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[21]->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_1990); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_1990() {    /* 386 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1995);
        {aRet = ((Ptr) GLmodtoc_342); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1995() {    /* call_modtoc_1994 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1966() {    /* 382 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[618])  {aRet = ((Ptr) GLmodtoc_1996); goto lRet;}
        GIa1 = rLit[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_1998);
        {aRet = ((Ptr) GLmodtoc_1969); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1998() {    /* call_modtoc_1997 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_2000);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2000() {    /* call_modtoc_1999 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[619];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2002);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2002() {    /* call_modtoc_2001 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2004);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2004() {    /* call_modtoc_2003 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[611];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2006);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2006() {    /* call_modtoc_2005 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 10)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_2008);
        {aRet = ((Ptr) GLmodtoc_673); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2008() {    /* call_modtoc_2007 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[613];
        GIa2 = rSp->Val;
        GIa1 = rLit[612];
        (--rSp)->Val = ((Ptr) GLmodtoc_2010);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2010() {    /* call_modtoc_2009 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2012);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2012() {    /* call_modtoc_2011 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_342); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1996() {    /* 391 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[620])      {aRet = ((Ptr) GLmodtoc_2013); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2015);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2015() {    /* call_modtoc_2014 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[621];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2017);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2017() {    /* call_modtoc_2016 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[622];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2019);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2019() {    /* call_modtoc_2018 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa2 = rLit[623];
        GIa1 = rLit[624];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2021);
        {aRet = ((Ptr) GLmodtoc_33); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2021() {    /* call_modtoc_2020 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2013() {    /* 392 */
   {    register Ptr aRet, *rLit, rA1, rNil;
        rLit = GYmodtoc; rA1 = GIa1; rNil = GInil;
        if (rA1 != rLit[625])   goto l_393;
        rA1 = rNil;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
l_393:
        if (rA1 != rLit[626])   goto l_394;
        rA1 = rNil;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
l_394:
        if (rA1 != rLit[627])   goto l_395;
        rA1 = rNil;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
l_395:
        if (rA1 != rLit[628])   goto l_396;
        rA1 = rNil;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
l_396:
        if (rA1 != rLit[629])   {aRet = ((Ptr) GLmodtoc_2022); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLmodtoc_2023);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_2023() {    /* 398 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_2024);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_2025);
        (--rSp)->Val = rLit[9]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2025() {    /* 401 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_2026);
        (--rSp)->Val = rLit[152];
        (--rSp)->Val = rLit[50]->Val;
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[182];
        (--rSp)->Val = rLit[273]->Val;
        (--rSp)->Val = rLit[115];
        GIa4 = (Ptr) 6;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2026() {    /* 402 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLmodtoc_2027);
        {aRet = ((Ptr) GLmodtoc_2024); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2024() {    /* 399 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_2028);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2028() {    /* 403 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2027() {    /* 400 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2022() {    /* 397 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[630])  {aRet = ((Ptr) GLmodtoc_2029); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_2030);
        (--rSp)->Val = rLit[226];
        (--rSp)->Val = rLit[274]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2030() {    /* 405 */
   {    register Ptr aRet;
        GYmodtoc[274]->Val = GIa1;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2032);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2032() {    /* call_modtoc_2031 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[631];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2034);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2034() {    /* call_modtoc_2033 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2036);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2036() {    /* call_modtoc_2035 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2038);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2038() {    /* call_modtoc_2037 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[632];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2040);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2040() {    /* call_modtoc_2039 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2042);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2042() {    /* call_modtoc_2041 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2044);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2044() {    /* call_modtoc_2043 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2046);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2046() {    /* call_modtoc_2045 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2048);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2048() {    /* call_modtoc_2047 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2050);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2050() {    /* call_modtoc_2049 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[633];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2052);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2052() {    /* call_modtoc_2051 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2029() {    /* 404 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[634])  {aRet = ((Ptr) GLmodtoc_2053); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_2054);
        (--rSp)->Val = rLit[226];
        (--rSp)->Val = rLit[273]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2054() {    /* 407 */
   {    register Ptr aRet;
        GYmodtoc[273]->Val = GIa1;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2056);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2056() {    /* call_modtoc_2055 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[635];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2058);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2058() {    /* call_modtoc_2057 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2060);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2060() {    /* call_modtoc_2059 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2062);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2062() {    /* call_modtoc_2061 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[636];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2064);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2064() {    /* call_modtoc_2063 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2066);
        {aRet = ((Ptr) GLmodtoc_633); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2066() {    /* call_modtoc_2065 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2068);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2068() {    /* call_modtoc_2067 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2070);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2070() {    /* call_modtoc_2069 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2072);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2072() {    /* call_modtoc_2071 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[637];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2074);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2074() {    /* call_modtoc_2073 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2076);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2076() {    /* call_modtoc_2075 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2078);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2078() {    /* call_modtoc_2077 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[638];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2080);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2080() {    /* call_modtoc_2079 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2082);
        {aRet = ((Ptr) GLmodtoc_633); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2082() {    /* call_modtoc_2081 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2084);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2084() {    /* call_modtoc_2083 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2086);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2086() {    /* call_modtoc_2085 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2088);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2088() {    /* call_modtoc_2087 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[639];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2090);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2090() {    /* call_modtoc_2089 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2092);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2092() {    /* call_modtoc_2091 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2094);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2094() {    /* call_modtoc_2093 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2096);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2096() {    /* call_modtoc_2095 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[640];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2098);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2098() {    /* call_modtoc_2097 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2053() {    /* 406 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[641])  {aRet = ((Ptr) GLmodtoc_2099); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_2100);
        (--rSp)->Val = rLit[226];
        (--rSp)->Val = rLit[274]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2100() {    /* 409 */
   {    register Ptr aRet;
        GYmodtoc[274]->Val = GIa1;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2102);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2102() {    /* call_modtoc_2101 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[642];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2104);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2104() {    /* call_modtoc_2103 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2106);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2106() {    /* call_modtoc_2105 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2108);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2108() {    /* call_modtoc_2107 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[329];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2110);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2110() {    /* call_modtoc_2109 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2112);
        {aRet = ((Ptr) GLmodtoc_633); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2112() {    /* call_modtoc_2111 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2114);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2114() {    /* call_modtoc_2113 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2116);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2116() {    /* call_modtoc_2115 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2118);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2118() {    /* call_modtoc_2117 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[643];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2120);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2120() {    /* call_modtoc_2119 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2122);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2122() {    /* call_modtoc_2121 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2124);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2124() {    /* call_modtoc_2123 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2126);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2126() {    /* call_modtoc_2125 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[633];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2128);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2128() {    /* call_modtoc_2127 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2099() {    /* 408 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[644])  {aRet = ((Ptr) GLmodtoc_2129); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_2130);
        (--rSp)->Val = rLit[226];
        (--rSp)->Val = rLit[273]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2130() {    /* 411 */
   {    register Ptr aRet;
        GYmodtoc[273]->Val = GIa1;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2132);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2132() {    /* call_modtoc_2131 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[635];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2134);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2134() {    /* call_modtoc_2133 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2136);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2136() {    /* call_modtoc_2135 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2138);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2138() {    /* call_modtoc_2137 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[636];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2140);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2140() {    /* call_modtoc_2139 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2142);
        {aRet = ((Ptr) GLmodtoc_633); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2142() {    /* call_modtoc_2141 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2144);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2144() {    /* call_modtoc_2143 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2146);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2146() {    /* call_modtoc_2145 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2148);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2148() {    /* call_modtoc_2147 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[638];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2150);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2150() {    /* call_modtoc_2149 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2152);
        {aRet = ((Ptr) GLmodtoc_633); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2152() {    /* call_modtoc_2151 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2154);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2154() {    /* call_modtoc_2153 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2156);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2156() {    /* call_modtoc_2155 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2158);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2158() {    /* call_modtoc_2157 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[645];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2160);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2160() {    /* call_modtoc_2159 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2162);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2162() {    /* call_modtoc_2161 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2164);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2164() {    /* call_modtoc_2163 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[639];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2166);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2166() {    /* call_modtoc_2165 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2168);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2168() {    /* call_modtoc_2167 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2170);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2170() {    /* call_modtoc_2169 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2172);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2172() {    /* call_modtoc_2171 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[640];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2174);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2174() {    /* call_modtoc_2173 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2129() {    /* 410 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[646])  {aRet = ((Ptr) GLmodtoc_2175); goto lRet;}
        if (rLit[647]->Val == GInil)    {aRet = ((Ptr) GLmodtoc_2176); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2178);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2178() {    /* call_modtoc_2177 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[648];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2180);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2180() {    /* call_modtoc_2179 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[649];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2182);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2182() {    /* call_modtoc_2181 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2184);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2184() {    /* call_modtoc_2183 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2186);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2186() {    /* call_modtoc_2185 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2188);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2188() {    /* call_modtoc_2187 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[650];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2190);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2190() {    /* call_modtoc_2189 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[140];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2192);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2192() {    /* call_modtoc_2191 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa2 = rLit[651];
        GIa1 = rLit[652];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2194);
        {aRet = ((Ptr) GLmodtoc_33); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2194() {    /* call_modtoc_2193 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[649];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2196);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2196() {    /* call_modtoc_2195 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[653];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2198);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2198() {    /* call_modtoc_2197 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2200);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2200() {    /* call_modtoc_2199 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2202);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2202() {    /* call_modtoc_2201 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[649];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2204);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2204() {    /* call_modtoc_2203 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[654];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2206);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2206() {    /* call_modtoc_2205 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2208);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2208() {    /* call_modtoc_2207 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2210);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2210() {    /* call_modtoc_2209 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2212);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2212() {    /* call_modtoc_2211 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2214);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2214() {    /* call_modtoc_2213 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[655];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2216);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2216() {    /* call_modtoc_2215 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2218);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2218() {    /* call_modtoc_2217 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[360];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2220);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2220() {    /* call_modtoc_2219 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2222);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2222() {    /* call_modtoc_2221 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[354];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2224);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2224() {    /* call_modtoc_2223 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2176() {    /* 413 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2226);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2226() {    /* call_modtoc_2225 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[455];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2228);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2228() {    /* call_modtoc_2227 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2230);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2230() {    /* call_modtoc_2229 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[656];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2232);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2232() {    /* call_modtoc_2231 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2234);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2234() {    /* call_modtoc_2233 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[116];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2236);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2236() {    /* call_modtoc_2235 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2238);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2238() {    /* call_modtoc_2237 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2240);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2240() {    /* call_modtoc_2239 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2175() {    /* 412 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[657])  {aRet = ((Ptr) GLmodtoc_2241); goto lRet;}
        if (rLit[647]->Val == GInil)    {aRet = ((Ptr) GLmodtoc_2242); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2244);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2244() {    /* call_modtoc_2243 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[648];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2246);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2246() {    /* call_modtoc_2245 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[649];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2248);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2248() {    /* call_modtoc_2247 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2250);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2250() {    /* call_modtoc_2249 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2252);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2252() {    /* call_modtoc_2251 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2254);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2254() {    /* call_modtoc_2253 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[650];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2256);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2256() {    /* call_modtoc_2255 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[140];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2258);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2258() {    /* call_modtoc_2257 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa2 = rLit[651];
        GIa1 = rLit[652];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2260);
        {aRet = ((Ptr) GLmodtoc_33); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2260() {    /* call_modtoc_2259 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[649];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2262);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2262() {    /* call_modtoc_2261 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[653];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2264);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2264() {    /* call_modtoc_2263 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2266);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2266() {    /* call_modtoc_2265 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2268);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2268() {    /* call_modtoc_2267 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[649];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2270);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2270() {    /* call_modtoc_2269 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[654];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2272);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2272() {    /* call_modtoc_2271 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2274);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2274() {    /* call_modtoc_2273 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2276);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2276() {    /* call_modtoc_2275 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2278);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2278() {    /* call_modtoc_2277 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2280);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2280() {    /* call_modtoc_2279 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[655];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2282);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2282() {    /* call_modtoc_2281 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2284);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2284() {    /* call_modtoc_2283 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[360];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2286);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2286() {    /* call_modtoc_2285 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2288);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2288() {    /* call_modtoc_2287 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[354];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2290);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2290() {    /* call_modtoc_2289 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2242() {    /* 416 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2292);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2292() {    /* call_modtoc_2291 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[455];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2294);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2294() {    /* call_modtoc_2293 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2296);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2296() {    /* call_modtoc_2295 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[656];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2298);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2298() {    /* call_modtoc_2297 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2300);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2300() {    /* call_modtoc_2299 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[116];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2302);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2302() {    /* call_modtoc_2301 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2304);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2304() {    /* call_modtoc_2303 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2306);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2306() {    /* call_modtoc_2305 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2241() {    /* 415 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[658])  {aRet = ((Ptr) GLmodtoc_2307); goto lRet;}
        if (rLit[647]->Val == GInil)    {aRet = ((Ptr) GLmodtoc_2308); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2310);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2310() {    /* call_modtoc_2309 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[648];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2312);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2312() {    /* call_modtoc_2311 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[649];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2314);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2314() {    /* call_modtoc_2313 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2316);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2316() {    /* call_modtoc_2315 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2318);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2318() {    /* call_modtoc_2317 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2320);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2320() {    /* call_modtoc_2319 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[650];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2322);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2322() {    /* call_modtoc_2321 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[140];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2324);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2324() {    /* call_modtoc_2323 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa2 = rLit[651];
        GIa1 = rLit[652];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2326);
        {aRet = ((Ptr) GLmodtoc_33); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2326() {    /* call_modtoc_2325 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[649];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2328);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2328() {    /* call_modtoc_2327 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[653];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2330);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2330() {    /* call_modtoc_2329 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2332);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2332() {    /* call_modtoc_2331 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2334);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2334() {    /* call_modtoc_2333 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[649];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2336);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2336() {    /* call_modtoc_2335 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[654];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2338);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2338() {    /* call_modtoc_2337 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2340);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2340() {    /* call_modtoc_2339 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2342);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2342() {    /* call_modtoc_2341 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2344);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2344() {    /* call_modtoc_2343 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2346);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2346() {    /* call_modtoc_2345 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[655];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2348);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2348() {    /* call_modtoc_2347 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[140];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2350);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2350() {    /* call_modtoc_2349 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[360];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2352);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2352() {    /* call_modtoc_2351 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2354);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2354() {    /* call_modtoc_2353 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[354];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2356);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2356() {    /* call_modtoc_2355 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2308() {    /* 419 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2358);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2358() {    /* call_modtoc_2357 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[455];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2360);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2360() {    /* call_modtoc_2359 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2362);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2362() {    /* call_modtoc_2361 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[656];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2364);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2364() {    /* call_modtoc_2363 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2366);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2366() {    /* call_modtoc_2365 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[116];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2368);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2368() {    /* call_modtoc_2367 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[140];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2370);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2370() {    /* call_modtoc_2369 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2372);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2372() {    /* call_modtoc_2371 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2307() {    /* 418 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[659])  {aRet = ((Ptr) GLmodtoc_2373); goto lRet;}
        GIa1 = rLit[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2375);
        {aRet = ((Ptr) GLmodtoc_2376); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2375() {    /* call_modtoc_2374 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2378);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2378() {    /* call_modtoc_2377 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[660];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2380);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2380() {    /* call_modtoc_2379 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[661];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2382);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2382() {    /* call_modtoc_2381 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2373() {    /* 421 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[662])  {aRet = ((Ptr) GLmodtoc_2383); goto lRet;}
        GIa1 = rLit[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2385);
        {aRet = ((Ptr) GLmodtoc_2376); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2385() {    /* call_modtoc_2384 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2387);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2387() {    /* call_modtoc_2386 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[660];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2389);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2389() {    /* call_modtoc_2388 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[663];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2391);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2391() {    /* call_modtoc_2390 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2383() {    /* 422 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[664])  {aRet = ((Ptr) GLmodtoc_2392); goto lRet;}
        GIa1 = rLit[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2394);
        {aRet = ((Ptr) GLmodtoc_2376); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2394() {    /* call_modtoc_2393 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2396);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2396() {    /* call_modtoc_2395 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[329];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2398);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2398() {    /* call_modtoc_2397 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[660];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2400);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2400() {    /* call_modtoc_2399 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[665];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2402);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2402() {    /* call_modtoc_2401 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2404);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2404() {    /* call_modtoc_2403 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2406);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2406() {    /* call_modtoc_2405 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[666];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2408);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2408() {    /* call_modtoc_2407 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa2 = rLit[333];
        GIa1 = rLit[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2392() {    /* 423 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[667])  {aRet = ((Ptr) GLmodtoc_2409); goto lRet;}
        GIa1 = rLit[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2411);
        {aRet = ((Ptr) GLmodtoc_2376); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2411() {    /* call_modtoc_2410 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2413);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2413() {    /* call_modtoc_2412 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[329];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2415);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2415() {    /* call_modtoc_2414 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[660];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2417);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2417() {    /* call_modtoc_2416 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[665];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2419);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2419() {    /* call_modtoc_2418 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2421);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2421() {    /* call_modtoc_2420 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2423);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2423() {    /* call_modtoc_2422 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[668];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2425);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2425() {    /* call_modtoc_2424 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa2 = rLit[333];
        GIa1 = rLit[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2409() {    /* 424 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[669])  {aRet = ((Ptr) GLmodtoc_2426); goto lRet;}
        GIa1 = rLit[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2428);
        {aRet = ((Ptr) GLmodtoc_2429); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2428() {    /* call_modtoc_2427 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2431);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2431() {    /* call_modtoc_2430 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[670];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2433);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2433() {    /* call_modtoc_2432 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[661];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2435);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2435() {    /* call_modtoc_2434 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2426() {    /* 425 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[671])  {aRet = ((Ptr) GLmodtoc_2436); goto lRet;}
        GIa1 = rLit[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2438);
        {aRet = ((Ptr) GLmodtoc_2429); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2438() {    /* call_modtoc_2437 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2440);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2440() {    /* call_modtoc_2439 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[329];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2442);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2442() {    /* call_modtoc_2441 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[670];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2444);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2444() {    /* call_modtoc_2443 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[665];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2446);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2446() {    /* call_modtoc_2445 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2448);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2448() {    /* call_modtoc_2447 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2450);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2450() {    /* call_modtoc_2449 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[666];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2452);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2452() {    /* call_modtoc_2451 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa2 = rLit[333];
        GIa1 = rLit[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2436() {    /* 426 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[672])  {aRet = ((Ptr) GLmodtoc_2453); goto lRet;}
        GIa1 = rLit[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2455);
        {aRet = ((Ptr) GLmodtoc_2429); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2455() {    /* call_modtoc_2454 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2457);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2457() {    /* call_modtoc_2456 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[329];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2459);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2459() {    /* call_modtoc_2458 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[670];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2461);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2461() {    /* call_modtoc_2460 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[665];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2463);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2463() {    /* call_modtoc_2462 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2465);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2465() {    /* call_modtoc_2464 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2467);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2467() {    /* call_modtoc_2466 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[668];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2469);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2469() {    /* call_modtoc_2468 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa2 = rLit[333];
        GIa1 = rLit[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2453() {    /* 427 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[673])  {aRet = ((Ptr) GLmodtoc_2470); goto lRet;}
        GIa1 = rLit[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2472);
        {aRet = ((Ptr) GLmodtoc_2429); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2472() {    /* call_modtoc_2471 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2474);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2474() {    /* call_modtoc_2473 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[621];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2476);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2476() {    /* call_modtoc_2475 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[670];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2478);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2478() {    /* call_modtoc_2477 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[674];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2480);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2480() {    /* call_modtoc_2479 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[670];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2482);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2482() {    /* call_modtoc_2481 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[675];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2484);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2484() {    /* call_modtoc_2483 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa2 = rLit[676];
        GIa1 = rLit[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2470() {    /* 428 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[677])      {aRet = ((Ptr) GLmodtoc_2485); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2487);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2487() {    /* call_modtoc_2486 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_2489);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2489() {    /* call_modtoc_2488 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[678];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2491);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2491() {    /* call_modtoc_2490 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2493);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2493() {    /* call_modtoc_2492 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[679];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2495);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2495() {    /* call_modtoc_2494 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2497);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2497() {    /* call_modtoc_2496 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[680];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2499);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2499() {    /* call_modtoc_2498 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2485() {    /* 429 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if (rA1 != rLit[681])   goto l_430;
        rA2 = rLit[273]->Val;
        rA1 = rLit[274]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_2500); goto lRet;}
l_430:
        if (rA1 != rLit[682])   goto l_431;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_2501); goto lRet;}
l_431:
        if (rA1 != rLit[683])   goto l_433;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_2502); goto lRet;}
l_433:
        if (rA1 != rLit[684])   goto l_434;
        rA1 = rNil;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
l_434:
        if (rA1 != rLit[685])   goto l_435;
        rA1 = rNil;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
l_435:
        if (rA1 != rLit[686])   goto l_436;
        rA2 = rLit[649];
        rA1 = rLit[274]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_755); goto lRet;}
l_436:
        if (rA1 != rLit[687])   goto l_437;
        rA2 = rLit[274]->Val;
        rA1 = rLit[649];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_755); goto lRet;}
l_437:
        if (rA1 != rLit[688])   goto l_438;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = (Ptr) 8;
        (--rSp)->Val = rLit[146];
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_2503); goto lRet;}
l_438:
        if (rA1 != rLit[689])   goto l_440;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[142];
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_2503); goto lRet;}
l_440:
        if (rA1 != rLit[690])   goto l_442;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[143];
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_2503); goto lRet;}
l_442:
        if (rA1 != rLit[691])   goto l_444;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[144];
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_2503); goto lRet;}
l_444:
        if (rA1 != rLit[692])   goto l_446;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[145];
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_2503); goto lRet;}
l_446:
        if (rA1 != rLit[693])   goto l_448;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[317];
        (--rSp)->Val = rLit[273]->Val;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_2503); goto lRet;}
l_448:
        if (rA1 != rLit[694])   goto l_450;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[374];
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_756); goto lRet;}
l_450:
        if (rA1 != rLit[695])   {aRet = ((Ptr) GLmodtoc_2504); goto lRet;}
        rA1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_2506);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_2506() {    /* call_modtoc_2505 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2508);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2508() {    /* call_modtoc_2507 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[696];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2510);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2510() {    /* call_modtoc_2509 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2512);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2512() {    /* call_modtoc_2511 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[697];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2514);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2514() {    /* call_modtoc_2513 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2504() {    /* 452 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[698])      {aRet = ((Ptr) GLmodtoc_2515); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2517);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2517() {    /* call_modtoc_2516 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2519);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2519() {    /* call_modtoc_2518 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[355];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2521);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2521() {    /* call_modtoc_2520 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2523);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2523() {    /* call_modtoc_2522 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[699];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2525);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2525() {    /* call_modtoc_2524 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2527);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2527() {    /* call_modtoc_2526 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2529);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2529() {    /* call_modtoc_2528 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2515() {    /* 453 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 != rLit[700])   goto l_454;
        rA1 = rNil;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
l_454:
        if (rA1 != rLit[701])   goto l_455;
        rA1 = rNil;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
l_455:
        if (rA1 != rLit[702])   {aRet = ((Ptr) GLmodtoc_2530); goto lRet;}
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        rA1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_2532);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_2532() {    /* call_modtoc_2531 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[703];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2534);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2534() {    /* call_modtoc_2533 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2536);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2536() {    /* call_modtoc_2535 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2538);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2538() {    /* call_modtoc_2537 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[704];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2540);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2540() {    /* call_modtoc_2539 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_2542);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2542() {    /* call_modtoc_2541 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2544);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2544() {    /* call_modtoc_2543 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2546);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2546() {    /* call_modtoc_2545 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2548);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2548() {    /* call_modtoc_2547 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[705];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2550);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2550() {    /* call_modtoc_2549 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_2552);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2552() {    /* call_modtoc_2551 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2554);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2554() {    /* call_modtoc_2553 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2556);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2556() {    /* call_modtoc_2555 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2558);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2558() {    /* call_modtoc_2557 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[706];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2560);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2560() {    /* call_modtoc_2559 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_2562);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2562() {    /* call_modtoc_2561 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2564);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2564() {    /* call_modtoc_2563 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2566);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2566() {    /* call_modtoc_2565 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2568);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2568() {    /* call_modtoc_2567 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[707];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2570);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2570() {    /* call_modtoc_2569 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2572);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2572() {    /* call_modtoc_2571 */
   {    register Ptr aRet;
        GIsp += (Fix) 3;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2530() {    /* 456 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[708])      {aRet = ((Ptr) GLmodtoc_2573); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2575);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2575() {    /* call_modtoc_2574 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2577);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2577() {    /* call_modtoc_2576 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[709];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2579);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2579() {    /* call_modtoc_2578 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2573() {    /* 457 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[710])      {aRet = ((Ptr) GLmodtoc_2580); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2582);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2582() {    /* call_modtoc_2581 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[642];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2584);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2584() {    /* call_modtoc_2583 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2586);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2586() {    /* call_modtoc_2585 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2588);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2588() {    /* call_modtoc_2587 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[711];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2590);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2590() {    /* call_modtoc_2589 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2592);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2592() {    /* call_modtoc_2591 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2594);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2594() {    /* call_modtoc_2593 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2596);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2596() {    /* call_modtoc_2595 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[712];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2598);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2598() {    /* call_modtoc_2597 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2600);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2600() {    /* call_modtoc_2599 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2602);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2602() {    /* call_modtoc_2601 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[713];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2604);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2604() {    /* call_modtoc_2603 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2606);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2606() {    /* call_modtoc_2605 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2608);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2608() {    /* call_modtoc_2607 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2610);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2610() {    /* call_modtoc_2609 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[633];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2612);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2612() {    /* call_modtoc_2611 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2580() {    /* 458 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[714])      {aRet = ((Ptr) GLmodtoc_2613); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2615);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2615() {    /* call_modtoc_2614 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2617);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2617() {    /* call_modtoc_2616 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[715];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2619);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2619() {    /* call_modtoc_2618 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2621);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2621() {    /* call_modtoc_2620 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[716];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2623);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2623() {    /* call_modtoc_2622 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2625);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2625() {    /* call_modtoc_2624 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[717];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2627);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2627() {    /* call_modtoc_2626 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2613() {    /* 459 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[718])      {aRet = ((Ptr) GLmodtoc_2628); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2630);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2630() {    /* call_modtoc_2629 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[719];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2632);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2632() {    /* call_modtoc_2631 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2634);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2634() {    /* call_modtoc_2633 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[116];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2636);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2636() {    /* call_modtoc_2635 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2638);
        {aRet = ((Ptr) GLmodtoc_673); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2638() {    /* call_modtoc_2637 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2640);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2640() {    /* call_modtoc_2639 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2628() {    /* 460 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[720])      {aRet = ((Ptr) GLmodtoc_2641); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2643);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2643() {    /* call_modtoc_2642 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[721];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2645);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2645() {    /* call_modtoc_2644 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2641() {    /* 461 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[722])      {aRet = ((Ptr) GLmodtoc_2646); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2648);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2648() {    /* call_modtoc_2647 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[719];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2650);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2650() {    /* call_modtoc_2649 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2652);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2652() {    /* call_modtoc_2651 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[116];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2654);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2654() {    /* call_modtoc_2653 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2656);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2656() {    /* call_modtoc_2655 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[510];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2658);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2658() {    /* call_modtoc_2657 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2646() {    /* 462 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != rLit[723])   goto l_463;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[724];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_2659); goto lRet;}
l_463:
        if (rA1 != rLit[725])   goto l_465;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[726];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_2659); goto lRet;}
l_465:
        if (rA1 != rLit[727])   goto l_467;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[728];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_2659); goto lRet;}
l_467:
        if (rA1 != rLit[729])   goto l_469;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[724];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_2659); goto lRet;}
l_469:
        if (rA1 != rLit[730])   goto l_471;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[726];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_2659); goto lRet;}
l_471:
        if (rA1 != rLit[731])   goto l_473;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[728];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_2659); goto lRet;}
l_473:
        if (rA1 != rLit[732])   goto l_475;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[733];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = ((Ptr) GLmodtoc_2660); goto lRet;}
l_475:
        if (rA1 != rLit[734])   goto l_477;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[735];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = ((Ptr) GLmodtoc_2660); goto lRet;}
l_477:
        if (rA1 != rLit[736])   {aRet = ((Ptr) GLmodtoc_2661); goto lRet;}
        rA1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_2663);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_2663() {    /* call_modtoc_2662 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_2665);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2665() {    /* call_modtoc_2664 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[737];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2667);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2667() {    /* call_modtoc_2666 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2669);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2669() {    /* call_modtoc_2668 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[86];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2671);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2671() {    /* call_modtoc_2670 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_2673);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2673() {    /* call_modtoc_2672 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[86];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2675);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2675() {    /* call_modtoc_2674 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2677);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2677() {    /* call_modtoc_2676 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[510];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2679);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2679() {    /* call_modtoc_2678 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2661() {    /* 479 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[738])      {aRet = ((Ptr) GLmodtoc_2680); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2682);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2682() {    /* call_modtoc_2681 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_2684);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2684() {    /* call_modtoc_2683 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[739];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2686);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2686() {    /* call_modtoc_2685 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2688);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2688() {    /* call_modtoc_2687 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[86];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2690);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2690() {    /* call_modtoc_2689 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_2692);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2692() {    /* call_modtoc_2691 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[86];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2694);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2694() {    /* call_modtoc_2693 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2696);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2696() {    /* call_modtoc_2695 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[510];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2698);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2698() {    /* call_modtoc_2697 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2680() {    /* 480 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[740])      {aRet = ((Ptr) GLmodtoc_2699); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2701);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2701() {    /* call_modtoc_2700 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_2703);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2703() {    /* call_modtoc_2702 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[739];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2705);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2705() {    /* call_modtoc_2704 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2707);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2707() {    /* call_modtoc_2706 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[86];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2709);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2709() {    /* call_modtoc_2708 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_2711);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2711() {    /* call_modtoc_2710 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[86];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2713);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2713() {    /* call_modtoc_2712 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2715);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2715() {    /* call_modtoc_2714 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[510];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2717);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2717() {    /* call_modtoc_2716 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2699() {    /* 481 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[741])      {aRet = ((Ptr) GLmodtoc_2718); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2720);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2720() {    /* call_modtoc_2719 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2722);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2722() {    /* call_modtoc_2721 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[742];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2724);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2724() {    /* call_modtoc_2723 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2726);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2726() {    /* call_modtoc_2725 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2728);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2728() {    /* call_modtoc_2727 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2718() {    /* 482 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        if (rA1 != rLit[743])   goto l_483;
        rA3 = rLit[273]->Val;
        rA2 = rLit[274]->Val;
        rA1 = rLit[744];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_2729); goto lRet;}
l_483:
        if (rA1 != rLit[745])   goto l_484;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[746];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_2730); goto lRet;}
l_484:
        if (rA1 != rLit[747])   goto l_486;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[748];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_2730); goto lRet;}
l_486:
        if (rA1 != rLit[749])   goto l_488;
        rA3 = rLit[273]->Val;
        rA2 = rLit[274]->Val;
        rA1 = rLit[750];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_2729); goto lRet;}
l_488:
        if (rA1 != rLit[751])   goto l_489;
        rA3 = rLit[273]->Val;
        rA2 = rLit[274]->Val;
        rA1 = rLit[752];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_2729); goto lRet;}
l_489:
        if (rA1 != rLit[753])   goto l_490;
        rA3 = rLit[273]->Val;
        rA2 = rLit[274]->Val;
        rA1 = rLit[754];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_2729); goto lRet;}
l_490:
        if (rA1 != rLit[755])   {aRet = ((Ptr) GLmodtoc_2731); goto lRet;}
        rA3 = rLit[273]->Val;
        rA2 = rLit[274]->Val;
        rA1 = rLit[756];
        (--rSp)->Val = ((Ptr) GLmodtoc_2733);
        {aRet = ((Ptr) GLmodtoc_2729); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLmodtoc_2733() {    /* call_modtoc_2732 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_342); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2731() {    /* 491 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (GIa1 != rLit[757])  {aRet = ((Ptr) GLmodtoc_2734); goto lRet;}
        GIa3 = rLit[273]->Val;
        GIa2 = rLit[274]->Val;
        GIa1 = rLit[758];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2736);
        {aRet = ((Ptr) GLmodtoc_2729); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2736() {    /* call_modtoc_2735 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_342); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2734() {    /* 492 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA1 != rLit[759])   goto l_493;
        rA2 = rLit[274]->Val;
        rA1 = rLit[760];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_2737); goto lRet;}
l_493:
        if (rA1 != rLit[4])     goto l_494;
        rA2 = rLit[274]->Val;
        rA1 = rLit[761];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_2737); goto lRet;}
l_494:
        if (rA1 != rLit[762])   goto l_495;
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        (--rSp)->Val = rLit[763];
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_2730); goto lRet;}
l_495:
        if (rA1 != rLit[241])   goto l_497;
        GIa3 = rLit[273]->Val;
        rA2 = rLit[274]->Val;
        rA1 = rLit[764];
        (--rSp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_2729); goto lRet;}
l_497:
        if (rA1 != rLit[765])   {aRet = ((Ptr) GLmodtoc_2738); goto lRet;}
        rA1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_2740);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_2740() {    /* call_modtoc_2739 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2742);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2742() {    /* call_modtoc_2741 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[766];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2744);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2744() {    /* call_modtoc_2743 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2746);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2746() {    /* call_modtoc_2745 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[86];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2748);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2748() {    /* call_modtoc_2747 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2750);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2750() {    /* call_modtoc_2749 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2752);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2752() {    /* call_modtoc_2751 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2754);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2754() {    /* call_modtoc_2753 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_342); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2738() {    /* 498 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[767])      {aRet = ((Ptr) GLmodtoc_2755); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2757);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2757() {    /* call_modtoc_2756 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[455];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2759);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2759() {    /* call_modtoc_2758 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2761);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2761() {    /* call_modtoc_2760 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[768];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2763);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2763() {    /* call_modtoc_2762 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2755() {    /* 499 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[769])      {aRet = ((Ptr) GLmodtoc_2764); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2766);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2766() {    /* call_modtoc_2765 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[770];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2768);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2768() {    /* call_modtoc_2767 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2770);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2770() {    /* call_modtoc_2769 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2772);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2772() {    /* call_modtoc_2771 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2764() {    /* 500 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[771])      {aRet = ((Ptr) GLmodtoc_2773); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2775);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2775() {    /* call_modtoc_2774 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[455];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2777);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2777() {    /* call_modtoc_2776 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2779);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2779() {    /* call_modtoc_2778 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[772];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2781);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2781() {    /* call_modtoc_2780 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2783);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2783() {    /* call_modtoc_2782 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2785);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2785() {    /* call_modtoc_2784 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2773() {    /* 501 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[773])  {aRet = ((Ptr) GLmodtoc_2786); goto lRet;}
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_2788);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2788() {    /* call_modtoc_2787 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_2790);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2790() {    /* call_modtoc_2789 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[774];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2792);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2792() {    /* call_modtoc_2791 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_2794);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2794() {    /* call_modtoc_2793 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[775];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2796);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2796() {    /* call_modtoc_2795 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2798);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2798() {    /* call_modtoc_2797 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2800);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2800() {    /* call_modtoc_2799 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_2802);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2802() {    /* call_modtoc_2801 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[774];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2804);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2804() {    /* call_modtoc_2803 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_2806);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2806() {    /* call_modtoc_2805 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[776];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2808);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2808() {    /* call_modtoc_2807 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2810);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2810() {    /* call_modtoc_2809 */
   {    register Ptr aRet;
        GIsp += (Fix) 3;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2786() {    /* 502 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (GIa1 != rLit[777])  {aRet = ((Ptr) GLmodtoc_2811); goto lRet;}
        (--rSp)->Val = rLit[274]->Val;
        (--rSp)->Val = rLit[273]->Val;
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_2813);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2813() {    /* call_modtoc_2812 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[347];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2815);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2815() {    /* call_modtoc_2814 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2817);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2817() {    /* call_modtoc_2816 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2819);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2819() {    /* call_modtoc_2818 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[778];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2821);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2821() {    /* call_modtoc_2820 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_2823);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2823() {    /* call_modtoc_2822 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[779];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2825);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2825() {    /* call_modtoc_2824 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_2827);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2827() {    /* call_modtoc_2826 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2829);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2829() {    /* call_modtoc_2828 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2831);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2831() {    /* call_modtoc_2830 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2833);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2833() {    /* call_modtoc_2832 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[780];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2835);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2835() {    /* call_modtoc_2834 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2837);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2837() {    /* call_modtoc_2836 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2839);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2839() {    /* call_modtoc_2838 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_2841);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2841() {    /* call_modtoc_2840 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[354];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2843);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2843() {    /* call_modtoc_2842 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2845);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2845() {    /* call_modtoc_2844 */
   {    register Ptr aRet;
        GIsp += (Fix) 3;
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2811() {    /* 503 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[781])      {aRet = ((Ptr) GLmodtoc_2846); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2848);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2848() {    /* call_modtoc_2847 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[782];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2850);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2850() {    /* call_modtoc_2849 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2852);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2852() {    /* call_modtoc_2851 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2854);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2854() {    /* call_modtoc_2853 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[783];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2856);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2856() {    /* call_modtoc_2855 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[150];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2858);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2858() {    /* call_modtoc_2857 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[784];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2860);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2860() {    /* call_modtoc_2859 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2862);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2862() {    /* call_modtoc_2861 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2864);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2864() {    /* call_modtoc_2863 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[783];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2866);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2866() {    /* call_modtoc_2865 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2868);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2868() {    /* call_modtoc_2867 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[785];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2870);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2870() {    /* call_modtoc_2869 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2872);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2872() {    /* call_modtoc_2871 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2874);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2874() {    /* call_modtoc_2873 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[783];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2876);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2876() {    /* call_modtoc_2875 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[151];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2878);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2878() {    /* call_modtoc_2877 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[786];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2880);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2880() {    /* call_modtoc_2879 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2882);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2882() {    /* call_modtoc_2881 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2884);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2884() {    /* call_modtoc_2883 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[783];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2886);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2886() {    /* call_modtoc_2885 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[149];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2888);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2888() {    /* call_modtoc_2887 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[787];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2890);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2890() {    /* call_modtoc_2889 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2892);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2892() {    /* call_modtoc_2891 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2894);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2894() {    /* call_modtoc_2893 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[788];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2896);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2896() {    /* call_modtoc_2895 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2898);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2898() {    /* call_modtoc_2897 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2900);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2900() {    /* call_modtoc_2899 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[789];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2902);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2902() {    /* call_modtoc_2901 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[150];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2904);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2904() {    /* call_modtoc_2903 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[790];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2906);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2906() {    /* call_modtoc_2905 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2908);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2908() {    /* call_modtoc_2907 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2910);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2910() {    /* call_modtoc_2909 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[791];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2912);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2912() {    /* call_modtoc_2911 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2914);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2914() {    /* call_modtoc_2913 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[792];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2916);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2916() {    /* call_modtoc_2915 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2846() {    /* 504 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[793])      {aRet = ((Ptr) GLmodtoc_2917); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2919);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2919() {    /* call_modtoc_2918 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[782];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2921);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2921() {    /* call_modtoc_2920 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2923);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2923() {    /* call_modtoc_2922 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2925);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2925() {    /* call_modtoc_2924 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[783];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2927);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2927() {    /* call_modtoc_2926 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[150];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2929);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2929() {    /* call_modtoc_2928 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[784];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2931);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2931() {    /* call_modtoc_2930 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2933);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2933() {    /* call_modtoc_2932 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2935);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2935() {    /* call_modtoc_2934 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[783];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2937);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2937() {    /* call_modtoc_2936 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2939);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2939() {    /* call_modtoc_2938 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[785];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2941);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2941() {    /* call_modtoc_2940 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2943);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2943() {    /* call_modtoc_2942 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2945);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2945() {    /* call_modtoc_2944 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[783];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2947);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2947() {    /* call_modtoc_2946 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[151];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2949);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2949() {    /* call_modtoc_2948 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[786];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2951);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2951() {    /* call_modtoc_2950 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2953);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2953() {    /* call_modtoc_2952 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2955);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2955() {    /* call_modtoc_2954 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[783];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2957);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2957() {    /* call_modtoc_2956 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[149];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2959);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2959() {    /* call_modtoc_2958 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[787];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2961);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2961() {    /* call_modtoc_2960 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2963);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2963() {    /* call_modtoc_2962 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2965);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2965() {    /* call_modtoc_2964 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[794];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2967);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2967() {    /* call_modtoc_2966 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2969);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2969() {    /* call_modtoc_2968 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2971);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2971() {    /* call_modtoc_2970 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[789];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2973);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2973() {    /* call_modtoc_2972 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[150];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2975);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2975() {    /* call_modtoc_2974 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[790];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2977);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2977() {    /* call_modtoc_2976 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2979);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2979() {    /* call_modtoc_2978 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2981);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2981() {    /* call_modtoc_2980 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[791];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2983);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2983() {    /* call_modtoc_2982 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2985);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2985() {    /* call_modtoc_2984 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[792];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2987);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2987() {    /* call_modtoc_2986 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2917() {    /* 505 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[795])      {aRet = ((Ptr) GLmodtoc_2988); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2990);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2990() {    /* call_modtoc_2989 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[796];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2992);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2992() {    /* call_modtoc_2991 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2994);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2994() {    /* call_modtoc_2993 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_2996);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2996() {    /* call_modtoc_2995 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[797];
        (--GIsp)->Val = ((Ptr) GLmodtoc_2998);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2998() {    /* call_modtoc_2997 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3000);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3000() {    /* call_modtoc_2999 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3002);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3002() {    /* call_modtoc_3001 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3004);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3004() {    /* call_modtoc_3003 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3006);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3006() {    /* call_modtoc_3005 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[798];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3008);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3008() {    /* call_modtoc_3007 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3010);
        {aRet = ((Ptr) GLmodtoc_638); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3010() {    /* call_modtoc_3009 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[653];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3012);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3012() {    /* call_modtoc_3011 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2988() {    /* 506 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[799])      {aRet = ((Ptr) GLmodtoc_3013); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3015);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3015() {    /* call_modtoc_3014 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[796];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3017);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3017() {    /* call_modtoc_3016 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3019);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3019() {    /* call_modtoc_3018 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3021);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3021() {    /* call_modtoc_3020 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[797];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3023);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3023() {    /* call_modtoc_3022 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3025);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3025() {    /* call_modtoc_3024 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3027);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3027() {    /* call_modtoc_3026 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3029);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3029() {    /* call_modtoc_3028 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3031);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3031() {    /* call_modtoc_3030 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3033);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3033() {    /* call_modtoc_3032 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[800];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3035);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3035() {    /* call_modtoc_3034 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3013() {    /* 507 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[801])      {aRet = ((Ptr) GLmodtoc_3036); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3038);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3038() {    /* call_modtoc_3037 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[802];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3040);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3040() {    /* call_modtoc_3039 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3042);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3042() {    /* call_modtoc_3041 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3044);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3044() {    /* call_modtoc_3043 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[803];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3046);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3046() {    /* call_modtoc_3045 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3048);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3048() {    /* call_modtoc_3047 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3050);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3050() {    /* call_modtoc_3049 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3052);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3052() {    /* call_modtoc_3051 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3054);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3054() {    /* call_modtoc_3053 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[804];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3056);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3056() {    /* call_modtoc_3055 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3058);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3058() {    /* call_modtoc_3057 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3060);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3060() {    /* call_modtoc_3059 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3062);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3062() {    /* call_modtoc_3061 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3064);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3064() {    /* call_modtoc_3063 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[805];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3066);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3066() {    /* call_modtoc_3065 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3068);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3068() {    /* call_modtoc_3067 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3070);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3070() {    /* call_modtoc_3069 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3072);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3072() {    /* call_modtoc_3071 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3074);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3074() {    /* call_modtoc_3073 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[806];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3076);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3076() {    /* call_modtoc_3075 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3036() {    /* 508 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[807])      {aRet = ((Ptr) GLmodtoc_3077); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3079);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3079() {    /* call_modtoc_3078 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[808];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3081);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3081() {    /* call_modtoc_3080 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3083);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3083() {    /* call_modtoc_3082 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[86];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3085);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3085() {    /* call_modtoc_3084 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3087);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3087() {    /* call_modtoc_3086 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[86];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3089);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3089() {    /* call_modtoc_3088 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3091);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3091() {    /* call_modtoc_3090 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[86];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3093);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3093() {    /* call_modtoc_3092 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3095);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3095() {    /* call_modtoc_3094 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3097);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3097() {    /* call_modtoc_3096 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_707);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3077() {    /* 509 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = (GIsp + 13)->Val;
        GIa2 = rLit[203];
        GIa1 = rLit[809];
         GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLmodtoc_707); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_707() {     /* 115 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[274]->Val = (rSp + 6)->Val;
        rLit[273]->Val = (rSp + 7)->Val;
        rSp += (Fix) 14;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_755() {     /* #:modtoc:mov-instruction */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_3099);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3099() {    /* call_modtoc_3098 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3101);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3101() {    /* call_modtoc_3100 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[182];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3103);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3103() {    /* call_modtoc_3102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3105);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3105() {    /* call_modtoc_3104 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3107);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3107() {    /* call_modtoc_3106 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2737() {    /* #:modtoc:system-call-1 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_3109);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3109() {    /* call_modtoc_3108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYmodtoc[214];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3111);
        {aRet = ((Ptr) GLmodtoc_33); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3111() {    /* call_modtoc_3110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3113);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3113() {    /* call_modtoc_3112 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[510];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3115);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3115() {    /* call_modtoc_3114 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2729() {    /* #:modtoc:system-call-1-cc */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_3117);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3117() {    /* call_modtoc_3116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3119);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3119() {    /* call_modtoc_3118 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[214];
        GIa2 = rSp->Val;
        GIa1 = rLit[810];
        (--rSp)->Val = ((Ptr) GLmodtoc_3121);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3121() {    /* call_modtoc_3120 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3123);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3123() {    /* call_modtoc_3122 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[510];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3125);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3125() {    /* call_modtoc_3124 */
   {    register Ptr aRet;
        GIsp += (Fix) 3;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2730() {    /* #:modtoc:system-call-2-cc */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3127);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3127() {    /* call_modtoc_3126 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3129);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3129() {    /* call_modtoc_3128 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[214];
        GIa2 = (rSp + 3)->Val;
        GIa1 = rLit[810];
        (--rSp)->Val = ((Ptr) GLmodtoc_3131);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3131() {    /* call_modtoc_3130 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3133);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3133() {    /* call_modtoc_3132 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[811];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3135);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3135() {    /* call_modtoc_3134 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3137);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3137() {    /* call_modtoc_3136 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[510];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3139);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3139() {    /* call_modtoc_3138 */
   {    register Ptr aRet;
        GIsp += (Fix) 4;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2659() {    /* #:modtoc:file-funct */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3141);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3141() {    /* call_modtoc_3140 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3143);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3143() {    /* call_modtoc_3142 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[214];
        GIa2 = (rSp + 3)->Val;
        GIa1 = rLit[810];
        (--rSp)->Val = ((Ptr) GLmodtoc_3145);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3145() {    /* call_modtoc_3144 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3147);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3147() {    /* call_modtoc_3146 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[86];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3149);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3149() {    /* call_modtoc_3148 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3151);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3151() {    /* call_modtoc_3150 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[510];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3153);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3153() {    /* call_modtoc_3152 */
   {    register Ptr aRet;
        GIsp += (Fix) 4;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2660() {    /* #:modtoc:io-funct */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3155);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3155() {    /* call_modtoc_3154 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3157);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3157() {    /* call_modtoc_3156 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[214];
        GIa2 = (rSp + 4)->Val;
        GIa1 = rLit[810];
        (--rSp)->Val = ((Ptr) GLmodtoc_3159);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3159() {    /* call_modtoc_3158 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3161);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3161() {    /* call_modtoc_3160 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[116];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3163);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3163() {    /* call_modtoc_3162 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3165);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3165() {    /* call_modtoc_3164 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[812];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3167);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3167() {    /* call_modtoc_3166 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3169);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3169() {    /* call_modtoc_3168 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3171);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3171() {    /* call_modtoc_3170 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3173);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3173() {    /* call_modtoc_3172 */
   {    register Ptr aRet;
        GIsp += (Fix) 5;
        {aRet = ((Ptr) GLmodtoc_342); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1969() {    /* #:modtoc:internal-variable */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3174);
        (--rSp)->Val = rLit[207]->Val;
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3174() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[28]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3176);
        {aRet = (rLit[258] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3176() {    /* call_modtoc_3175 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       {aRet = ((Ptr) GLmodtoc_3177); goto lRet;}
        GIa2 = rLit[28]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rLit[28]->Val = rA1;
        (--rSp)->Val = ((Ptr) GLmodtoc_3178);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_3178() {    /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_3179);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3180);
        (--rSp)->Val = rLit[9]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3180() {    /* 107 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[813];
        GIa2 = (rSp + 4)->Val;
        GIa1 = rLit[814];
        (--rSp)->Val = ((Ptr) GLmodtoc_3182);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3182() {    /* call_modtoc_3181 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3184);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3184() {    /* call_modtoc_3183 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLmodtoc_3185);
        {aRet = ((Ptr) GLmodtoc_3179); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3179() {    /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_3186);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3186() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3185() {    /* 106 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_3177); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3177() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2429() {    /* #:modtoc:mactabgc */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_3188);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3188() {    /* call_modtoc_3187 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[815];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3190);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3190() {    /* call_modtoc_3189 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3192);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3192() {    /* call_modtoc_3191 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3194);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3194() {    /* call_modtoc_3193 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[816];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3196);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3196() {    /* call_modtoc_3195 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3198);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3198() {    /* call_modtoc_3197 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[817];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3200);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3200() {    /* call_modtoc_3199 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[141];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3202);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3202() {    /* call_modtoc_3201 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3204);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3204() {    /* call_modtoc_3203 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3206);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3206() {    /* call_modtoc_3205 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3208);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3208() {    /* call_modtoc_3207 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[818];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3210);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3210() {    /* call_modtoc_3209 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3212);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3212() {    /* call_modtoc_3211 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3214);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3214() {    /* call_modtoc_3213 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[819];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3216);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3216() {    /* call_modtoc_3215 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3218);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3218() {    /* call_modtoc_3217 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3220);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3220() {    /* call_modtoc_3219 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[820];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3222);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3222() {    /* call_modtoc_3221 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2376() {    /* #:modtoc:mactabin */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_3224);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3224() {    /* call_modtoc_3223 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[815];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3226);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3226() {    /* call_modtoc_3225 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3228);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3228() {    /* call_modtoc_3227 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3230);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3230() {    /* call_modtoc_3229 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[816];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3232);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3232() {    /* call_modtoc_3231 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3234);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3234() {    /* call_modtoc_3233 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[817];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3236);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3236() {    /* call_modtoc_3235 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[146];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3238);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3238() {    /* call_modtoc_3237 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3240);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3240() {    /* call_modtoc_3239 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3242);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3242() {    /* call_modtoc_3241 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3244);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3244() {    /* call_modtoc_3243 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[818];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3246);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3246() {    /* call_modtoc_3245 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3248);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3248() {    /* call_modtoc_3247 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3250);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3250() {    /* call_modtoc_3249 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[819];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3252);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3252() {    /* call_modtoc_3251 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3254);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3254() {    /* call_modtoc_3253 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3256);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3256() {    /* call_modtoc_3255 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[820];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3258);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3258() {    /* call_modtoc_3257 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2503() {    /* #:modtoc:next-chunk */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3260);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3260() {    /* call_modtoc_3259 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3262);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3262() {    /* call_modtoc_3261 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[363];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3264);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3264() {    /* call_modtoc_3263 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3266);
        {aRet = ((Ptr) GLmodtoc_643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3266() {    /* call_modtoc_3265 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3268);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3268() {    /* call_modtoc_3267 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3270);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3270() {    /* call_modtoc_3269 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj4);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GYmodtoc[374];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_756); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2500() {    /* #:modtoc:incrink */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa1 = GYmodtoc[821];
        (--rSp)->Val = ((Ptr) GLmodtoc_3272);
        {aRet = ((Ptr) GLmodtoc_767); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3272() {    /* call_modtoc_3271 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        GIa2 = rLit[269]->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rLit[269]->Val;
        rLit[269]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[822];
        (--rSp)->Val = rLit[71];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        rA1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_3274);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_3274() {    /* call_modtoc_3273 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[642];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3276);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3276() {    /* call_modtoc_3275 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3278);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3278() {    /* call_modtoc_3277 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3280);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3280() {    /* call_modtoc_3279 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[823];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3282);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3282() {    /* call_modtoc_3281 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3284);
        {aRet = ((Ptr) GLmodtoc_638); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3284() {    /* call_modtoc_3283 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[824];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3286);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3286() {    /* call_modtoc_3285 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3288);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3288() {    /* call_modtoc_3287 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3290);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3290() {    /* call_modtoc_3289 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[825];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3292);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3292() {    /* call_modtoc_3291 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3294);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3294() {    /* call_modtoc_3293 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 3;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3296);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3296() {    /* call_modtoc_3295 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3298);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3298() {    /* call_modtoc_3297 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[331];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3300);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3300() {    /* call_modtoc_3299 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3302);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3302() {    /* call_modtoc_3301 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3304);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3304() {    /* call_modtoc_3303 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[522];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3306);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3306() {    /* call_modtoc_3305 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3308);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3308() {    /* call_modtoc_3307 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 3;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3310);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3310() {    /* call_modtoc_3309 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3312);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3312() {    /* call_modtoc_3311 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[826];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3314);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3314() {    /* call_modtoc_3313 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3316);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3316() {    /* call_modtoc_3315 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 3;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3318);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3318() {    /* call_modtoc_3317 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3320);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3320() {    /* call_modtoc_3319 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[827];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3322);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3322() {    /* call_modtoc_3321 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3324);
        {aRet = ((Ptr) GLmodtoc_638); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3324() {    /* call_modtoc_3323 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[828];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3326);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3326() {    /* call_modtoc_3325 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3328);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3328() {    /* call_modtoc_3327 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYmodtoc[269]->Val = (rSp + 6)->Val;
        rSp += (Fix) 9;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_2501() {    /* #:modtoc:swpcons */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3330);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3330() {    /* call_modtoc_3329 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[829];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3332);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3332() {    /* call_modtoc_3331 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3334);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3334() {    /* call_modtoc_3333 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3336);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3336() {    /* call_modtoc_3335 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[830];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3338);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3338() {    /* call_modtoc_3337 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3340);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3340() {    /* call_modtoc_3339 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3342);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3342() {    /* call_modtoc_3341 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[831];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3344);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3344() {    /* call_modtoc_3343 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3346);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3346() {    /* call_modtoc_3345 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3348);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3348() {    /* call_modtoc_3347 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[832];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3350);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3350() {    /* call_modtoc_3349 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3352);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3352() {    /* call_modtoc_3351 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3354);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3354() {    /* call_modtoc_3353 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[833];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3356);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3356() {    /* call_modtoc_3355 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3358);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3358() {    /* call_modtoc_3357 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3360);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3360() {    /* call_modtoc_3359 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[834];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3362);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3362() {    /* call_modtoc_3361 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3364);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3364() {    /* call_modtoc_3363 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3366);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3366() {    /* call_modtoc_3365 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[835];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3368);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3368() {    /* call_modtoc_3367 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3370);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3370() {    /* call_modtoc_3369 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3372);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3372() {    /* call_modtoc_3371 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[836];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3374);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3374() {    /* call_modtoc_3373 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3376);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3376() {    /* call_modtoc_3375 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[817];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3378);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3378() {    /* call_modtoc_3377 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[141];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3380);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3380() {    /* call_modtoc_3379 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3382);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3382() {    /* call_modtoc_3381 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3384);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3384() {    /* call_modtoc_3383 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3386);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3386() {    /* call_modtoc_3385 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[837];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3388);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3388() {    /* call_modtoc_3387 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3390);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3390() {    /* call_modtoc_3389 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3392);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3392() {    /* call_modtoc_3391 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[838];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3394);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3394() {    /* call_modtoc_3393 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3396);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3396() {    /* call_modtoc_3395 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3398);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3398() {    /* call_modtoc_3397 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[839];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3400);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3400() {    /* call_modtoc_3399 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3402);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3402() {    /* call_modtoc_3401 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3404);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3404() {    /* call_modtoc_3403 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[840];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3406);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3406() {    /* call_modtoc_3405 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3408);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3408() {    /* call_modtoc_3407 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3410);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3410() {    /* call_modtoc_3409 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[841];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3412);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3412() {    /* call_modtoc_3411 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3414);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3414() {    /* call_modtoc_3413 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3416);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3416() {    /* call_modtoc_3415 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[842];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3418);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3418() {    /* call_modtoc_3417 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3420);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3420() {    /* call_modtoc_3419 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 3;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3422);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3422() {    /* call_modtoc_3421 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[843];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3424);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3424() {    /* call_modtoc_3423 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3426);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3426() {    /* call_modtoc_3425 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 3;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3428);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3428() {    /* call_modtoc_3427 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[844];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3430);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3430() {    /* call_modtoc_3429 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3432);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3432() {    /* call_modtoc_3431 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 4;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3434);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3434() {    /* call_modtoc_3433 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3435);
        (--rSp)->Val = rLit[213];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3435() {    /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3437);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3437() {    /* call_modtoc_3436 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[182];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3439);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3439() {    /* call_modtoc_3438 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3441);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3441() {    /* call_modtoc_3440 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3443);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3443() {    /* call_modtoc_3442 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3445);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3445() {    /* call_modtoc_3444 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 4;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3447);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3447() {    /* call_modtoc_3446 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3448);
        (--rSp)->Val = rLit[211];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3448() {    /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3450);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3450() {    /* call_modtoc_3449 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[182];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3452);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3452() {    /* call_modtoc_3451 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[140];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3454);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3454() {    /* call_modtoc_3453 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3456);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3456() {    /* call_modtoc_3455 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3458);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3458() {    /* call_modtoc_3457 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 4;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3460);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3460() {    /* call_modtoc_3459 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3462);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3462() {    /* call_modtoc_3461 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[182];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3464);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3464() {    /* call_modtoc_3463 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3466);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3466() {    /* call_modtoc_3465 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3468);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3468() {    /* call_modtoc_3467 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3470);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3470() {    /* call_modtoc_3469 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 4;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3472);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3472() {    /* call_modtoc_3471 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[845];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3474);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3474() {    /* call_modtoc_3473 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3476);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3476() {    /* call_modtoc_3475 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 3;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3478);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3478() {    /* call_modtoc_3477 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[333];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3480);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3480() {    /* call_modtoc_3479 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3482);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3482() {    /* call_modtoc_3481 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 3;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3484);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3484() {    /* call_modtoc_3483 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3486);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3486() {    /* call_modtoc_3485 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[846];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3488);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3488() {    /* call_modtoc_3487 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3490);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3490() {    /* call_modtoc_3489 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 3;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3492);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3492() {    /* call_modtoc_3491 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[847];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3494);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3494() {    /* call_modtoc_3493 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3496);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3496() {    /* call_modtoc_3495 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3498);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3498() {    /* call_modtoc_3497 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[333];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3500);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3500() {    /* call_modtoc_3499 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3502);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3502() {    /* call_modtoc_3501 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3504);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3504() {    /* call_modtoc_3503 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[848];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3506);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3506() {    /* call_modtoc_3505 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3508);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3508() {    /* call_modtoc_3507 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3510);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3510() {    /* call_modtoc_3509 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[849];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3512);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3512() {    /* call_modtoc_3511 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3514);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3514() {    /* call_modtoc_3513 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3516);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3516() {    /* call_modtoc_3515 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[850];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3518);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3518() {    /* call_modtoc_3517 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3520);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3520() {    /* call_modtoc_3519 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[851];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3522);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3522() {    /* call_modtoc_3521 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3524);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3524() {    /* call_modtoc_3523 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3526);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3526() {    /* call_modtoc_3525 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3528);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3528() {    /* call_modtoc_3527 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[852];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3530);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3530() {    /* call_modtoc_3529 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3532);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3532() {    /* call_modtoc_3531 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3534);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3534() {    /* call_modtoc_3533 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3536);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3536() {    /* call_modtoc_3535 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[853];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3538);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3538() {    /* call_modtoc_3537 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3540);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3540() {    /* call_modtoc_3539 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3542);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3542() {    /* call_modtoc_3541 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[333];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3544);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3544() {    /* call_modtoc_3543 */
   {    register Ptr aRet;
        GIsp += (Fix) 4;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_2502() {    /* #:modtoc:gcmark */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[854];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3546);
        {aRet = ((Ptr) GLmodtoc_767); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3546() {    /* call_modtoc_3545 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = GYmodtoc[854];
        (--rSp)->Val = ((Ptr) GLmodtoc_3548);
        {aRet = ((Ptr) GLmodtoc_767); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3548() {    /* call_modtoc_3547 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = GYmodtoc[854];
        (--rSp)->Val = ((Ptr) GLmodtoc_3550);
        {aRet = ((Ptr) GLmodtoc_767); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3550() {    /* call_modtoc_3549 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = GYmodtoc[854];
        (--rSp)->Val = ((Ptr) GLmodtoc_3552);
        {aRet = ((Ptr) GLmodtoc_767); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3552() {    /* call_modtoc_3551 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = GYmodtoc[854];
        (--rSp)->Val = ((Ptr) GLmodtoc_3554);
        {aRet = ((Ptr) GLmodtoc_767); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3554() {    /* call_modtoc_3553 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = GYmodtoc[854];
        (--rSp)->Val = ((Ptr) GLmodtoc_3556);
        {aRet = ((Ptr) GLmodtoc_767); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3556() {    /* call_modtoc_3555 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = GYmodtoc[854];
        (--rSp)->Val = ((Ptr) GLmodtoc_3558);
        {aRet = ((Ptr) GLmodtoc_767); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3558() {    /* call_modtoc_3557 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = GYmodtoc[854];
        (--rSp)->Val = ((Ptr) GLmodtoc_3560);
        {aRet = ((Ptr) GLmodtoc_767); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3560() {    /* call_modtoc_3559 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_3561);
        {register Ptr aux;
                aux = (rSp + 8)->Val;
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
        (--rSp)->Val = rLit[269]->Val;
        GIa4 = (Ptr) 5;
        {aRet = (rLit[596] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3561() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = rLit[269]->Val;
        rLit[269]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[855];
        (--rSp)->Val = rLit[71];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = (rSp + 14)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3563);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3563() {    /* call_modtoc_3562 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3564);
        (--rSp)->Val = rLit[318];
        (--rSp)->Val = rLit[148];
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3564() {    /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3566);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3566() {    /* call_modtoc_3565 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3568);
        {aRet = ((Ptr) GLmodtoc_2429); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3568() {    /* call_modtoc_3567 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3570);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3570() {    /* call_modtoc_3569 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[856];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3572);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3572() {    /* call_modtoc_3571 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[670];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3574);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3574() {    /* call_modtoc_3573 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[857];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3576);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3576() {    /* call_modtoc_3575 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYmodtoc[48];
        GIa1 = (rSp + 12)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3578);
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3578() {    /* call_modtoc_3577 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3580);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3580() {    /* call_modtoc_3579 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[670];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3582);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3582() {    /* call_modtoc_3581 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[661];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3584);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3584() {    /* call_modtoc_3583 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3586);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3586() {    /* call_modtoc_3585 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3587);
        (--rSp)->Val = rLit[375];
        (--rSp)->Val = rLit[148];
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3587() {    /* 103 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3589);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3589() {    /* call_modtoc_3588 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3590);
        (--rSp)->Val = rLit[502];
        (--rSp)->Val = rLit[148];
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3590() {    /* 104 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3592);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3592() {    /* call_modtoc_3591 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3593);
        (--rSp)->Val = rLit[526];
        (--rSp)->Val = rLit[148];
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3593() {    /* 105 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3595);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3595() {    /* call_modtoc_3594 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 12)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3597);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3597() {    /* call_modtoc_3596 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3598);
        (--rSp)->Val = rLit[343];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3598() {    /* 106 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3600);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3600() {    /* call_modtoc_3599 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 11)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3602);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3602() {    /* call_modtoc_3601 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3603);
        (--rSp)->Val = rLit[310];
        (--rSp)->Val = rLit[858];
        (--rSp)->Val = rLit[148];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3603() {    /* 107 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3605);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3605() {    /* call_modtoc_3604 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3606);
        (--rSp)->Val = rLit[319];
        {register Ptr aux;
                aux = (rSp + 16)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3606() {    /* 108 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3608);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3608() {    /* call_modtoc_3607 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 10)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3610);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3610() {    /* call_modtoc_3609 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3611);
        (--rSp)->Val = rLit[373];
        (--rSp)->Val = rLit[859];
        (--rSp)->Val = rLit[860];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3611() {    /* 109 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3613);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3613() {    /* call_modtoc_3612 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3614);
        (--rSp)->Val = rLit[346];
        (--rSp)->Val = rLit[861];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3614() {    /* 110 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3616);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3616() {    /* call_modtoc_3615 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3617);
        (--rSp)->Val = rLit[310];
        (--rSp)->Val = rLit[862];
        (--rSp)->Val = rLit[148];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3617() {    /* 111 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3619);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3619() {    /* call_modtoc_3618 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3620);
        (--rSp)->Val = rLit[346];
        (--rSp)->Val = ((Ptr) GLmodtoc_3621);
        (--rSp)->Val = rLit[237];
        {register Ptr aux;
                aux = (rSp + 17)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3621() {    /* 113 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[119] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3620() {    /* 112 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3623);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3623() {    /* call_modtoc_3622 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3624);
        (--rSp)->Val = rLit[319];
        {register Ptr aux;
                aux = (rSp + 16)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3624() {    /* 114 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3626);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3626() {    /* call_modtoc_3625 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 13)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3628);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3628() {    /* call_modtoc_3627 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3629);
        (--rSp)->Val = rLit[351];
        (--rSp)->Val = rLit[148];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3629() {    /* 115 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3631);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3631() {    /* call_modtoc_3630 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3632);
        (--rSp)->Val = rLit[319];
        (--rSp)->Val = rLit[863];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3632() {    /* 116 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3634);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3634() {    /* call_modtoc_3633 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3636);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3636() {    /* call_modtoc_3635 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3637);
        (--rSp)->Val = rLit[346];
        (--rSp)->Val = rLit[150];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3637() {    /* 117 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3639);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3639() {    /* call_modtoc_3638 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3640);
        (--rSp)->Val = rLit[554];
        (--rSp)->Val = rLit[148];
        (--rSp)->Val = rLit[150];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3640() {    /* 118 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3642);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3642() {    /* call_modtoc_3641 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3643);
        (--rSp)->Val = rLit[346];
        (--rSp)->Val = rLit[148];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3643() {    /* 119 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3645);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3645() {    /* call_modtoc_3644 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3646);
        (--rSp)->Val = rLit[373];
        (--rSp)->Val = rLit[859];
        (--rSp)->Val = rLit[860];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3646() {    /* 120 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3648);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3648() {    /* call_modtoc_3647 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3649);
        (--rSp)->Val = rLit[319];
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3649() {    /* 121 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3651);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3651() {    /* call_modtoc_3650 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3653);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3653() {    /* call_modtoc_3652 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3654);
        (--rSp)->Val = rLit[504];
        (--rSp)->Val = rLit[864];
        (--rSp)->Val = rLit[150];
        (--rSp)->Val = rLit[148];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3654() {    /* 122 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3656);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3656() {    /* call_modtoc_3655 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3657);
        (--rSp)->Val = rLit[346];
        (--rSp)->Val = rLit[150];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3657() {    /* 123 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3659);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3659() {    /* call_modtoc_3658 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3660);
        (--rSp)->Val = rLit[340];
        (--rSp)->Val = rLit[863];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3660() {    /* 124 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3662);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3662() {    /* call_modtoc_3661 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3663);
        (--rSp)->Val = rLit[351];
        (--rSp)->Val = rLit[150];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3663() {    /* 125 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3665);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3665() {    /* call_modtoc_3664 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3667);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3667() {    /* call_modtoc_3666 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3668);
        (--rSp)->Val = rLit[327];
        (--rSp)->Val = rLit[150];
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3668() {    /* 126 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3670);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3670() {    /* call_modtoc_3669 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3671);
        (--rSp)->Val = rLit[351];
        (--rSp)->Val = rLit[148];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3671() {    /* 127 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3673);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3673() {    /* call_modtoc_3672 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3674);
        (--rSp)->Val = rLit[351];
        (--rSp)->Val = rLit[150];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3674() {    /* 128 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3676);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3676() {    /* call_modtoc_3675 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3677);
        (--rSp)->Val = rLit[310];
        (--rSp)->Val = rLit[865];
        (--rSp)->Val = rLit[148];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3677() {    /* 129 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3679);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3679() {    /* call_modtoc_3678 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3680);
        (--rSp)->Val = rLit[319];
        (--rSp)->Val = rLit[863];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3680() {    /* 130 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3682);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3682() {    /* call_modtoc_3681 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYmodtoc[269]->Val = (rSp + 6)->Val;
        rSp += (Fix) 15;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1948() {    /* #:modtoc:callg-generate */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 2));
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) / (Fix) 2));
        (--rSp)->Val = rA1;
        rA1 = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLmodtoc_3684);
        {aRet = (GYmodtoc[243] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_3684() {    /* call_modtoc_3683 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != (Ptr) 95)   {aRet = ((Ptr) GLmodtoc_3685); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_3686);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[186] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3686() {    /* 103 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLmodtoc_3687); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3685() {    /* 101 */
   {    register Ptr aRet;
        GIa4 = (GIsp + 1)->Val;
        {aRet = ((Ptr) GLmodtoc_3687); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3687() {    /* 102 */
   {    register Ptr aRet, rSp, rA3, rNil;
        rSp = GIsp; rA3 = GIa3; rNil = GInil;
        rA3 = (rSp + 2)->Val;
        (rSp + 2)->Val = (rA3 + 1)->Val;
        (--rSp)->Val = rA3->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = GIa4;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_3689);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLmodtoc_3689() {    /* call_modtoc_3688 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3691);
        {aRet = ((Ptr) GLmodtoc_3692); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3691() {    /* call_modtoc_3690 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[866];
        GIa2 = GIa1;
        GIa1 = rLit[101];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3694);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3694() {    /* call_modtoc_3693 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3696);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3696() {    /* call_modtoc_3695 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3697);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3697() {    /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_3698);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3699);
        (--rSp)->Val = rLit[9]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3699() {    /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3700);
        (--rSp)->Val = GYmodtoc[867];
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3702);
        {aRet = ((Ptr) GLmodtoc_3692); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3702() {    /* call_modtoc_3701 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[114];
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[244];
        GIa4 = (Ptr) 5;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3700() {    /* 108 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3704);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3704() {    /* call_modtoc_3703 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLmodtoc_3705);
        {aRet = ((Ptr) GLmodtoc_3698); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3698() {    /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_3706);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3706() {    /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3705() {    /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        (--rSp)->Val = (Ptr) 1;
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (rSp + 6)->Val;
        {aRet = ((Ptr) GLmodtoc_3707); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3708() {    /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa4;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_3710);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3710() {    /* call_modtoc_3709 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_3711);
        (--rSp)->Val = GYmodtoc[114];
        rA1 = (rSp + 3)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3713);
        {aRet = ((Ptr) GLmodtoc_3692); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_3713() {    /* call_modtoc_3712 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[868];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[115];
        GIa4 = (Ptr) 5;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3711() {    /* 112 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3715);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3715() {    /* call_modtoc_3714 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rSp + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        rA3 = (rSp + 2)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 1));
        (rSp + 2)->Val = rA3;
        rA4 = (rSp++)->Val;
        {aRet = ((Ptr) GLmodtoc_3707); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_3707() {    /* 111 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLmodtoc_3708); goto lRet;}}
        rSp += (Fix) 2;
        (--rSp)->Val = (Ptr) 1;
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 6)->Val;
        {aRet = ((Ptr) GLmodtoc_3716); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_3717() {    /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa4;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_3719);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3719() {    /* call_modtoc_3718 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[182];
        GIa2 = (rSp + 2)->Val;
        GIa1 = rLit[868];
        (--rSp)->Val = ((Ptr) GLmodtoc_3721);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3721() {    /* call_modtoc_3720 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA1 = (rSp + 1)->Val;
        rA2 = (rA1 + 1)->Val;
        rA2 = rA2->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3723);
        {aRet = ((Ptr) GLmodtoc_3724); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_3723() {    /* call_modtoc_3722 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        rA1 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        if (rA1 != (Ptr) 7)     goto l_116;
        rA1 = (rSp + 1)->Val;
        rA2 = (rSp + 5)->Val;
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (rSp + 5)->Val = rA1;
        goto l_115;
l_116:
        if (rA1 != (Ptr) 8)     goto l_115;
        rA1 = (rSp + 1)->Val;
        rA2 = (rSp + 4)->Val;
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (rSp + 4)->Val = rA1;
l_115:
        rA4 = (rSp + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        rA3 = (rSp + 2)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 1));
        (rSp + 2)->Val = rA3;
        rA4 = (rSp++)->Val;
        {aRet = ((Ptr) GLmodtoc_3716); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_3716() {    /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Fix aux;
                aux = (Fix) (GIa4) - 1;
                GIa4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLmodtoc_3717); goto lRet;}}
        rSp += (Fix) 2;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLmodtoc_3725); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3725() {    /* 118 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLmodtoc_3726); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_3728);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_3728() {    /* call_modtoc_3727 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[869];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3730);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3730() {    /* call_modtoc_3729 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3732);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3732() {    /* call_modtoc_3731 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3734);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3734() {    /* call_modtoc_3733 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3736);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3736() {    /* call_modtoc_3735 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_3725); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3726() {    /* 119 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLmodtoc_3737); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3737() {    /* 120 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLmodtoc_3738); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_3740);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_3740() {    /* call_modtoc_3739 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[870];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3742);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3742() {    /* call_modtoc_3741 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3744);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3744() {    /* call_modtoc_3743 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3746);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3746() {    /* call_modtoc_3745 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3748);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3748() {    /* call_modtoc_3747 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_3737); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3738() {    /* 121 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_3750);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3750() {    /* call_modtoc_3749 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3751);
        (--rSp)->Val = GYmodtoc[871];
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3753);
        {aRet = ((Ptr) GLmodtoc_3692); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3753() {    /* call_modtoc_3752 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[652];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[214];
        GIa4 = (Ptr) 5;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3751() {    /* 122 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((Fix) ((rSp + 4)->Val) <= (Fix) 0)  {aRet = ((Ptr) GLmodtoc_3754); goto lRet;}
        (--rSp)->Val = (Ptr) 1;
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 6)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        {aRet = ((Ptr) GLmodtoc_3755); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_3756() {    /* 125 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = (rSp + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        if (rA4 == (Ptr) 5)     goto l_129;
        if (rA4 != (Ptr) 6)     goto l_127;
l_129:
        GIa3 = rLit[86];
        GIa2 = (rSp + 2)->Val;
        GIa1 = rLit[872];
        (--rSp)->Val = ((Ptr) GLmodtoc_3757);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
l_127:
        GIa3 = rLit[86];
        GIa2 = (rSp + 2)->Val;
        GIa1 = rLit[873];
        (--rSp)->Val = ((Ptr) GLmodtoc_3757);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_3757() {    /* 128 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rSp + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        rA3 = (rSp + 2)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 1));
        (rSp + 2)->Val = rA3;
        rA4 = (rSp++)->Val;
        {aRet = ((Ptr) GLmodtoc_3755); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_3755() {    /* 126 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLmodtoc_3756); goto lRet;}}
        rA4 = rSp->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        if (rA4 == (Ptr) 5)     goto l_132;
        if (rA4 != (Ptr) 6)     goto l_130;
l_132:
        GIa2 = (rSp + 1)->Val;
        GIa1 = rLit[872];
        (--rSp)->Val = ((Ptr) GLmodtoc_3758);
        {aRet = ((Ptr) GLmodtoc_33); goto lRet;}
l_130:
        GIa2 = (rSp + 1)->Val;
        GIa1 = rLit[873];
        (--rSp)->Val = ((Ptr) GLmodtoc_3758);
        {aRet = ((Ptr) GLmodtoc_33); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_3758() {    /* 131 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_3754); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3754() {    /* 124 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[500];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3760);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3760() {    /* call_modtoc_3759 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3762);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3762() {    /* call_modtoc_3761 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLmodtoc_3763); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3763() {    /* 133 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLmodtoc_3764); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_3766);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_3766() {    /* call_modtoc_3765 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[874];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3768);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3768() {    /* call_modtoc_3767 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3770);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3770() {    /* call_modtoc_3769 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3772);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3772() {    /* call_modtoc_3771 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3774);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3774() {    /* call_modtoc_3773 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_3763); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3764() {    /* 134 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLmodtoc_3775); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3775() {    /* 135 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLmodtoc_3776); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_3778);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_3778() {    /* call_modtoc_3777 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[875];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3780);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3780() {    /* call_modtoc_3779 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3782);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3782() {    /* call_modtoc_3781 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3784);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3784() {    /* call_modtoc_3783 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3786);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3786() {    /* call_modtoc_3785 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_3775); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3776() {    /* 136 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3788);
        {aRet = ((Ptr) GLmodtoc_3789); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3788() {    /* call_modtoc_3787 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3791);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3791() {    /* call_modtoc_3790 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[333];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3793);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3793() {    /* call_modtoc_3792 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3795);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3795() {    /* call_modtoc_3794 */
   {    register Ptr aRet;
        GIsp += (Fix) 7;
        {aRet = ((Ptr) GLmodtoc_342); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3692() {    /* #:modtoc:callg-c-type */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        if (rA1 != (Ptr) 0)     goto l_102;
        rA1 = rLit[876];
        {aRet = (rSp++)->Val; goto lRet;}
l_102:
        if (rA1 == (Ptr) 1)     goto l_104;
        if (rA1 != (Ptr) 5)     goto l_103;
l_104:
        rA1 = rLit[877];
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        if (rA1 == (Ptr) 2)     goto l_106;
        if (rA1 != (Ptr) 6)     goto l_105;
l_106:
        rA1 = rLit[878];
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        if (rA1 == (Ptr) 3)     goto l_108;
        if (rA1 != (Ptr) 4)     goto l_107;
l_108:
        rA1 = rLit[876];
        {aRet = (rSp++)->Val; goto lRet;}
l_107:
        if (rA1 == (Ptr) 7)     goto l_110;
        if (rA1 != (Ptr) 8)     goto l_109;
l_110:
        rA1 = rLit[876];
        {aRet = (rSp++)->Val; goto lRet;}
l_109:
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[879];
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = ((Ptr) GLmodtoc_146); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_3789() {    /* #:modtoc:callg-c2ll-convert */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) 0)    {aRet = ((Ptr) GLmodtoc_3796); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3798);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3798() {    /* call_modtoc_3797 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[114];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3800);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3800() {    /* call_modtoc_3799 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3802);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3802() {    /* call_modtoc_3801 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[880];
        (--GIsp)->Val = ((Ptr) GLmodtoc_36);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3796() {    /* 102 */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) 1)    {aRet = ((Ptr) GLmodtoc_3803); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3805);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3805() {    /* call_modtoc_3804 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[114];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3807);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3807() {    /* call_modtoc_3806 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3809);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3809() {    /* call_modtoc_3808 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[881];
        (--GIsp)->Val = ((Ptr) GLmodtoc_36);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3803() {    /* 103 */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) 2)    {aRet = ((Ptr) GLmodtoc_3810); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3812);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3812() {    /* call_modtoc_3811 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[114];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3814);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3814() {    /* call_modtoc_3813 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3816);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3816() {    /* call_modtoc_3815 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[882];
        (--GIsp)->Val = ((Ptr) GLmodtoc_36);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3810() {    /* 104 */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) 3)    {aRet = ((Ptr) GLmodtoc_3817); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3819);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3819() {    /* call_modtoc_3818 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[114];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3821);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3821() {    /* call_modtoc_3820 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3823);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3823() {    /* call_modtoc_3822 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[883];
        (--GIsp)->Val = ((Ptr) GLmodtoc_36);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3817() {    /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = GYmodtoc[884];
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = ((Ptr) GLmodtoc_146); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3724() {    /* #:modtoc:callg-ll2c-convert */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = GIa2;
        if (rA1 != (Ptr) 0)     {aRet = ((Ptr) GLmodtoc_3824); goto lRet;}
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLmodtoc_3825); goto lRet;}
        GIa4 = rSp->Val;
        if (GIa4->Val != rLit[885])     {aRet = ((Ptr) GLmodtoc_3825); goto lRet;}
        rA1 = rLit[886];
        (--rSp)->Val = ((Ptr) GLmodtoc_3827);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_3827() {    /* call_modtoc_3826 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3829);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_3829() {    /* call_modtoc_3828 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3831);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3831() {    /* call_modtoc_3830 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3825() {    /* 103 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[205];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3833);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3833() {    /* call_modtoc_3832 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3835);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3835() {    /* call_modtoc_3834 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3824() {    /* 102 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if (rA1 == (Ptr) 1)     goto l_106;
        if (rA1 != (Ptr) 5)     {aRet = ((Ptr) GLmodtoc_3836); goto lRet;}
l_106:
        rA1 = GYmodtoc[887];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3838);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_3838() {    /* call_modtoc_3837 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3840);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3840() {    /* call_modtoc_3839 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3842);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3842() {    /* call_modtoc_3841 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3836() {    /* 105 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if (rA1 == (Ptr) 2)     goto l_108;
        if (rA1 != (Ptr) 6)     {aRet = ((Ptr) GLmodtoc_3843); goto lRet;}
l_108:
        rA1 = GYmodtoc[888];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3845);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_3845() {    /* call_modtoc_3844 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3847);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3847() {    /* call_modtoc_3846 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3849);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3849() {    /* call_modtoc_3848 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3843() {    /* 107 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if (rA1 == (Ptr) 3)     goto l_110;
        if (rA1 != (Ptr) 4)     {aRet = ((Ptr) GLmodtoc_3850); goto lRet;}
l_110:
        rA1 = GYmodtoc[889];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3852);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_3852() {    /* call_modtoc_3851 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3854);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3854() {    /* call_modtoc_3853 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[890];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3856);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3856() {    /* call_modtoc_3855 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3850() {    /* 109 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if (rA1 == (Ptr) 7)     goto l_112;
        if (rA1 != (Ptr) 8)     {aRet = ((Ptr) GLmodtoc_3857); goto lRet;}
l_112:
        rA1 = GYmodtoc[889];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3859);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_3859() {    /* call_modtoc_3858 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3861);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3861() {    /* call_modtoc_3860 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[890];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3863);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3863() {    /* call_modtoc_3862 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3857() {    /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = GYmodtoc[891];
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = ((Ptr) GLmodtoc_146); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_235() {     /* #:modtoc:get-real-ll-name */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rA1;
        GIa2 = GYmodtoc[21]->Val;
        rA1 = llrt_call_cassq (rA1, GIa2, GIbcons, rNil);
        if (rA1 != rNil)        {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        rA1 = rSp->Val;
l_101:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_718() {     /* #:modtoc:get-llm3-function */
   {    register Ptr aRet;
        GIa2 = GYmodtoc[22]->Val;
        GIa1 = llrt_call_cassq (GIa1, GIa2, GIbcons, GInil);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_217() {     /* #:modtoc:get-module-function */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_3865);
        {aRet = ((Ptr) GLmodtoc_718); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3865() {    /* call_modtoc_3864 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        GIa2 = GYmodtoc[25]->Val;
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        rA1 = llrt_call_cassq (rA1, GIa2, GIbcons, rNil);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_229() {     /* #:modtoc:get-trace-function */
   {    register Ptr aRet;
        GIa2 = GYmodtoc[24]->Val;
        GIa1 = llrt_call_cassq (GIa1, GIa2, GIbcons, GInil);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_663() {     /* #:modtoc:make-module-function */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_3867);
        {aRet = ((Ptr) GLmodtoc_217); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3867() {    /* call_modtoc_3866 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        GIa1 = GYmodtoc[892]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3869);
        {aRet = ((Ptr) GLmodtoc_3870); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3869() {    /* call_modtoc_3868 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA1;
        rA2 = rA1;
        rA1 = (rSp + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rA2 = rLit[25]->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[25]->Val = rA1;
        rA1 = rSp->Val;
        rSp += (Fix) 1;
l_101:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_738() {     /* #:modtoc:make-trace-function */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_3872);
        {aRet = ((Ptr) GLmodtoc_229); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3872() {    /* call_modtoc_3871 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 == GInil)       goto l_101;
        (--rSp)->Val = ((Ptr) GLmodtoc_3873);
        (--rSp)->Val = rLit[893];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = ((Ptr) GLmodtoc_146); goto lRet;}
l_101:
        rA1 = rLit[894]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3875);
        {aRet = ((Ptr) GLmodtoc_3870); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_3875() {    /* call_modtoc_3874 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rSp->Val = rA1;
        rA2 = rA1;
        rA1 = (rSp + 1)->Val;
        GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rA2 = rLit[24]->Val;
        GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[24]->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_3873); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_3873() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_703() {     /* #:modtoc:goto-label-at */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_3876);
        (--rSp)->Val = rLit[237];
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3876() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_761); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_761() {     /* #:modtoc:goto-label */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil, rBcons;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((rA1 < rBcons) || (rA1 >= GIecons)) rA1 = rNil;
        rA4 = rA1;
        if (rA4 == rNil)        goto l_101;
        rA1 = rSp->Val;
        rA2 = rLit[237];
        rA1 = rA1->Val;
        rA1 = (rA1 == rA2) ? rLit[68] : rNil;
        rA4 = rA1;
l_101:
        (--rSp)->Val = rA4;
        if (rA4 == rNil)        {aRet = ((Ptr) GLmodtoc_3877); goto lRet;}
        rA1 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA2 = rLit[269]->Val;
        rA1 = rA1->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLmodtoc_3877); goto lRet;}
        rA1 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA2 = rLit[158]->Val;
        rA1 = rA1->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        goto l_105;
        rLit[159]->Val = rLit[68];
l_105:
        rA1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_3879);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_3879() {    /* call_modtoc_3878 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLmodtoc_3880);
        (--rSp)->Val = rLit[549];
        (--rSp)->Val = rLit[270]->Val;
        rA4 = (rSp + 4)->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rLit[115];
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_3880() {    /* 106 */
   {    register Ptr aRet;
        GIsp += (Fix) 3;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3877() {    /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        if (rSp->Val == GInil)  {aRet = ((Ptr) GLmodtoc_3881); goto lRet;}
        rA4 = (rSp + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        if (rA4->Val != rLit[162]->Val) {aRet = ((Ptr) GLmodtoc_3881); goto lRet;}
        rLit[160]->Val = rLit[68];
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_3883);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_3883() {    /* call_modtoc_3882 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_3884);
        (--rSp)->Val = rLit[549];
        (--rSp)->Val = rLit[161]->Val;
        (--rSp)->Val = rLit[115];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3884() {    /* 109 */
   {    register Ptr aRet;
        GIsp += (Fix) 3;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3881() {    /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rSp->Val == rNil)   {aRet = ((Ptr) GLmodtoc_3885); goto lRet;}
        rA1 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        GIa2 = rLit[23]->Val;
        rA1 = rA1->Val;
        rA1 = llrt_call_assq (rA1, GIa2, GIbcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLmodtoc_3885); goto lRet;}
        rA1 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        if (rA1 != rLit[895])   {aRet = ((Ptr) GLmodtoc_3886); goto lRet;}
        rA1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_3888);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_3888() {    /* call_modtoc_3887 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[101];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3889);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3886() {    /* 113 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[896])      {aRet = ((Ptr) GLmodtoc_3890); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3892);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3892() {    /* call_modtoc_3891 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[101];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3894);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3894() {    /* call_modtoc_3893 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3896);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3896() {    /* call_modtoc_3895 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[897];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3889);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3890() {    /* 114 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[898])      {aRet = ((Ptr) GLmodtoc_3897); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3899);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3899() {    /* call_modtoc_3898 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[101];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3901);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3901() {    /* call_modtoc_3900 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3903);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3903() {    /* call_modtoc_3902 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[899];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3889);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3897() {    /* 115 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[900])      {aRet = ((Ptr) GLmodtoc_3904); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3906);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3906() {    /* call_modtoc_3905 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[101];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3908);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3908() {    /* call_modtoc_3907 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3910);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3910() {    /* call_modtoc_3909 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[901];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3889);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3904() {    /* 116 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[902])      {aRet = ((Ptr) GLmodtoc_3911); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3913);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3913() {    /* call_modtoc_3912 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[101];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3915);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3915() {    /* call_modtoc_3914 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3917);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3917() {    /* call_modtoc_3916 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[903];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3889);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3911() {    /* 117 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[904])      {aRet = ((Ptr) GLmodtoc_3918); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3920);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3920() {    /* call_modtoc_3919 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[101];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3922);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3922() {    /* call_modtoc_3921 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3924);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3924() {    /* call_modtoc_3923 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[905];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3889);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3918() {    /* 118 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[906])      {aRet = ((Ptr) GLmodtoc_3925); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3927);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3927() {    /* call_modtoc_3926 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[101];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3929);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3929() {    /* call_modtoc_3928 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3931);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3931() {    /* call_modtoc_3930 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[907];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3889);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3925() {    /* 119 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[908])      {aRet = ((Ptr) GLmodtoc_3932); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3934);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3934() {    /* call_modtoc_3933 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[101];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3936);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3936() {    /* call_modtoc_3935 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3938);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3938() {    /* call_modtoc_3937 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[909];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3889);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3932() {    /* 120 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[910])      {aRet = ((Ptr) GLmodtoc_3939); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3941);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3941() {    /* call_modtoc_3940 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[101];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3943);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3943() {    /* call_modtoc_3942 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3945);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3945() {    /* call_modtoc_3944 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[911];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3889);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3939() {    /* 121 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[912])      {aRet = ((Ptr) GLmodtoc_3946); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3948);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3948() {    /* call_modtoc_3947 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[101];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3950);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3950() {    /* call_modtoc_3949 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3952);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3952() {    /* call_modtoc_3951 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[913];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3889);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3946() {    /* 122 */
   {    register Ptr aRet;
        if (GIa1 != GYmodtoc[914])      {aRet = ((Ptr) GLmodtoc_3953); goto lRet;}
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3955);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3955() {    /* call_modtoc_3954 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[101];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3957);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3957() {    /* call_modtoc_3956 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[151];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3959);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3959() {    /* call_modtoc_3958 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[355];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3961);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3961() {    /* call_modtoc_3960 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3963);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3963() {    /* call_modtoc_3962 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[915];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3965);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3965() {    /* call_modtoc_3964 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3967);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3967() {    /* call_modtoc_3966 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[251];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3969);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3969() {    /* call_modtoc_3968 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[151];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3971);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3971() {    /* call_modtoc_3970 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3889);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3953() {    /* 123 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = (GIsp + 1)->Val;
        GIa2 = rLit[203];
        GIa1 = rLit[916];
         GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLmodtoc_3889); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3889() {    /* 112 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[917];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3973);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3973() {    /* call_modtoc_3972 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3975);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3975() {    /* call_modtoc_3974 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 2)->Val;
        GIa1 = GYmodtoc[345];
        (--rSp)->Val = ((Ptr) GLmodtoc_3977);
        {aRet = ((Ptr) GLmodtoc_33); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3977() {    /* call_modtoc_3976 */
   {    register Ptr aRet;
        GIsp += (Fix) 3;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3885() {    /* 110 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_3979);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3979() {    /* call_modtoc_3978 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[918];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3981);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3981() {    /* call_modtoc_3980 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3983);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3983() {    /* call_modtoc_3982 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 2)->Val;
        GIa1 = GYmodtoc[919];
        (--rSp)->Val = ((Ptr) GLmodtoc_3985);
        {aRet = ((Ptr) GLmodtoc_33); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3985() {    /* call_modtoc_3984 */
   {    register Ptr aRet;
        GIsp += (Fix) 3;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_853() {     /* #:modtoc:call-internal */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = rLit[920]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3987);
        {aRet = (rLit[921] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3987() {    /* call_modtoc_3986 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmodtoc_3988); goto lRet;}
        GIa1 = GYmodtoc[922];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3990);
        {aRet = ((Ptr) GLmodtoc_767); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3990() {    /* call_modtoc_3989 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_3992);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3992() {    /* call_modtoc_3991 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[348];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3994);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3994() {    /* call_modtoc_3993 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_3996);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3996() {    /* call_modtoc_3995 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_3998);
        {aRet = ((Ptr) GLmodtoc_350); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3998() {    /* call_modtoc_3997 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[301];
        GIa2 = GIa1;
        GIa1 = rLit[923];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4000);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4000() {    /* call_modtoc_3999 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4002);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4002() {    /* call_modtoc_4001 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYmodtoc[48];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4004);
        {aRet = ((Ptr) GLmodtoc_761); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4004() {    /* call_modtoc_4003 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_345); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_3988() {    /* 101 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4006);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4006() {    /* call_modtoc_4005 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[348];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4008);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4008() {    /* call_modtoc_4007 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[147];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4010);
        {aRet = ((Ptr) GLmodtoc_514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4010() {    /* call_modtoc_4009 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[920]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4012);
        {aRet = ((Ptr) GLmodtoc_350); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4012() {    /* call_modtoc_4011 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa3 = rLit[301];
        GIa2 = GIa1;
        GIa1 = rLit[923];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4014);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4014() {    /* call_modtoc_4013 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4016);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4016() {    /* call_modtoc_4015 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYmodtoc[48];
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_761); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_11() {      /* #:modtoc:gen-module-name */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4018);
        {aRet = (GYmodtoc[262] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4018() {    /* call_modtoc_4017 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLmodtoc_4019); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4019() {    /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLmodtoc_4020); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4022);
        {aRet = (GYmodtoc[924] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4022() {    /* call_modtoc_4021 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLmodtoc_4023); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4025);
        {aRet = (GYmodtoc[925] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4025() {    /* call_modtoc_4024 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmodtoc_4026); goto lRet;}
        {aRet = ((Ptr) GLmodtoc_4023); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4023() {    /* 105 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = GIsp->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        {aRet = ((Ptr) GLmodtoc_4027); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4026() {    /* 103 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = ((Ptr) GLmodtoc_4027); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4027() {    /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4029);
        {aRet = (GYmodtoc[120] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4029() {    /* call_modtoc_4028 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLmodtoc_4019); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4020() {    /* 102 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        GIa2 = rA1;
        rA1 = GInil;
        {aRet = (GYmodtoc[614] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_767() {     /* #:modtoc:gen-new-symbol */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4031);
        {aRet = ((Ptr) GLmodtoc_3870); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4031() {    /* call_modtoc_4030 */
   {    register Ptr aRet;
        GIa2 = GIa1;
        GIa1 = GInil;
        {aRet = (GYmodtoc[614] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3870() {    /* #:modtoc:gen-new-label */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[3]->Val;
        (--rSp)->Val = rLit[926];
        GIa1 = rLit[27]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4033);
        {aRet = (rLit[118] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4033() {    /* call_modtoc_4032 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYmodtoc; rA1 = GIa1;
        rLit[27]->Val = rA1;
        (--GIsp)->Val = rA1;
        GIa4 = (Ptr) 4;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_370() {     /* #:modtoc:gen-tailrec-label */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[270]->Val;
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1062() {    /* #:modtoc:cmp-int-and-branch */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4035);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4035() {    /* call_modtoc_4034 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[927];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4037);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4037() {    /* call_modtoc_4036 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4039);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4039() {    /* call_modtoc_4038 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[928];
        GIa2 = (rSp + 2)->Val;
        GIa1 = rLit[114];
        (--rSp)->Val = ((Ptr) GLmodtoc_4041);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4041() {    /* call_modtoc_4040 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4043);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4043() {    /* call_modtoc_4042 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[40];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4045);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4045() {    /* call_modtoc_4044 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYmodtoc[48];
        GIa1 = rSp->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_756() {     /* #:modtoc:cmp-ptr-and-branch */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4047);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4047() {    /* call_modtoc_4046 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[621];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4049);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4049() {    /* call_modtoc_4048 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4051);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4051() {    /* call_modtoc_4050 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[114];
        GIa2 = (rSp + 2)->Val;
        GIa1 = rLit[114];
        (--rSp)->Val = ((Ptr) GLmodtoc_4053);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4053() {    /* call_modtoc_4052 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4055);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4055() {    /* call_modtoc_4054 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[40];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4057);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4057() {    /* call_modtoc_4056 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYmodtoc[48];
        GIa1 = rSp->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_757() {     /* #:modtoc:cmp-type-inside */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4059);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4059() {    /* call_modtoc_4058 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[856];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4061);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4061() {    /* call_modtoc_4060 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4063);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4063() {    /* call_modtoc_4062 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[929];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4065);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4065() {    /* call_modtoc_4064 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4067);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4067() {    /* call_modtoc_4066 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[930];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4069);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4069() {    /* call_modtoc_4068 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4071);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4071() {    /* call_modtoc_4070 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[517];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4073);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4073() {    /* call_modtoc_4072 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4075);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4075() {    /* call_modtoc_4074 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[485];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4077);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4077() {    /* call_modtoc_4076 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYmodtoc[48];
        GIa1 = rSp->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_758() {     /* #:modtoc:cmp-type-outside */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4079);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4079() {    /* call_modtoc_4078 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[856];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4081);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4081() {    /* call_modtoc_4080 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4083);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4083() {    /* call_modtoc_4082 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[517];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4085);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4085() {    /* call_modtoc_4084 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4087);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4087() {    /* call_modtoc_4086 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[931];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4089);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4089() {    /* call_modtoc_4088 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4091);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4091() {    /* call_modtoc_4090 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[929];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4093);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4093() {    /* call_modtoc_4092 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4095);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4095() {    /* call_modtoc_4094 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[485];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4097);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4097() {    /* call_modtoc_4096 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYmodtoc[48];
        GIa1 = rSp->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1071() {    /* #:modtoc:fix-arith */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (rSp->Val != GInil)  {aRet = ((Ptr) GLmodtoc_4098); goto lRet;}
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_4100);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4100() {    /* call_modtoc_4099 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4102);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4102() {    /* call_modtoc_4101 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[827];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4104);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4104() {    /* call_modtoc_4103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4106);
        {aRet = ((Ptr) GLmodtoc_638); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4106() {    /* call_modtoc_4105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[114];
        GIa2 = (rSp + 3)->Val;
        GIa1 = rLit[114];
        (--rSp)->Val = ((Ptr) GLmodtoc_4108);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4108() {    /* call_modtoc_4107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4110);
        {aRet = ((Ptr) GLmodtoc_638); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4110() {    /* call_modtoc_4109 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[500];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4112);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4112() {    /* call_modtoc_4111 */
   {    register Ptr aRet;
        GIsp += (Fix) 5;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4098() {    /* 101 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4114);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4114() {    /* call_modtoc_4113 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[642];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4116);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4116() {    /* call_modtoc_4115 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4118);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4118() {    /* call_modtoc_4117 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4120);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4120() {    /* call_modtoc_4119 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[823];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4122);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4122() {    /* call_modtoc_4121 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4124);
        {aRet = ((Ptr) GLmodtoc_638); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4124() {    /* call_modtoc_4123 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[114];
        GIa2 = (rSp + 3)->Val;
        GIa1 = rLit[114];
        (--rSp)->Val = ((Ptr) GLmodtoc_4126);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4126() {    /* call_modtoc_4125 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4128);
        {aRet = ((Ptr) GLmodtoc_638); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4128() {    /* call_modtoc_4127 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4130);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4130() {    /* call_modtoc_4129 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4132);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4132() {    /* call_modtoc_4131 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 2;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4134);
        {aRet = ((Ptr) GLmodtoc_791); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4134() {    /* call_modtoc_4133 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4136);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4136() {    /* call_modtoc_4135 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[331];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4138);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4138() {    /* call_modtoc_4137 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4140);
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4140() {    /* call_modtoc_4139 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4142);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4142() {    /* call_modtoc_4141 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[932];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4144);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4144() {    /* call_modtoc_4143 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYmodtoc[333];
        GIa1 = rSp->Val;
        rSp += (Fix) 5;
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1083() {    /* #:modtoc:fix-logic */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4146);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4146() {    /* call_modtoc_4145 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4148);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4148() {    /* call_modtoc_4147 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[563];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4150);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4150() {    /* call_modtoc_4149 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4152);
        {aRet = ((Ptr) GLmodtoc_656); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4152() {    /* call_modtoc_4151 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[114];
        GIa2 = (rSp + 2)->Val;
        GIa1 = rLit[114];
        (--rSp)->Val = ((Ptr) GLmodtoc_4154);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4154() {    /* call_modtoc_4153 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4156);
        {aRet = ((Ptr) GLmodtoc_656); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4156() {    /* call_modtoc_4155 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4158);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4158() {    /* call_modtoc_4157 */
   {    register Ptr aRet;
        GIsp += (Fix) 4;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1082() {    /* #:modtoc:cmp-fix-and-branch */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4160);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4160() {    /* call_modtoc_4159 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[621];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4162);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4162() {    /* call_modtoc_4161 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4164);
        {aRet = ((Ptr) GLmodtoc_638); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4164() {    /* call_modtoc_4163 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[114];
        GIa2 = (rSp + 2)->Val;
        GIa1 = rLit[114];
        (--rSp)->Val = ((Ptr) GLmodtoc_4166);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4166() {    /* call_modtoc_4165 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4168);
        {aRet = ((Ptr) GLmodtoc_638); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4168() {    /* call_modtoc_4167 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[40];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4170);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4170() {    /* call_modtoc_4169 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYmodtoc[48];
        GIa1 = rSp->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1175() {    /* #:modtoc:float-arith */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_4172);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4172() {    /* call_modtoc_4171 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[455];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4174);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4174() {    /* call_modtoc_4173 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4176);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4176() {    /* call_modtoc_4175 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[933];
        GIa2 = (rSp + 1)->Val;
        GIa1 = rLit[934];
        (--rSp)->Val = ((Ptr) GLmodtoc_4178);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4178() {    /* call_modtoc_4177 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4180);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4180() {    /* call_modtoc_4179 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[116];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4182);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4182() {    /* call_modtoc_4181 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4184);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4184() {    /* call_modtoc_4183 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4186);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4186() {    /* call_modtoc_4185 */
   {    register Ptr aRet;
        GIsp += (Fix) 3;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1235() {    /* #:modtoc:float-funct-2 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_4188);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4188() {    /* call_modtoc_4187 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[455];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4190);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4190() {    /* call_modtoc_4189 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4192);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4192() {    /* call_modtoc_4191 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[214];
        GIa2 = rSp->Val;
        GIa1 = rLit[934];
        (--rSp)->Val = ((Ptr) GLmodtoc_4194);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4194() {    /* call_modtoc_4193 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4196);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4196() {    /* call_modtoc_4195 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4198);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4198() {    /* call_modtoc_4197 */
   {    register Ptr aRet;
        GIsp += (Fix) 3;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1236() {    /* #:modtoc:float-funct-3 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4200);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4200() {    /* call_modtoc_4199 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[455];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4202);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4202() {    /* call_modtoc_4201 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4204);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4204() {    /* call_modtoc_4203 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[214];
        GIa2 = (rSp + 3)->Val;
        GIa1 = rLit[934];
        (--rSp)->Val = ((Ptr) GLmodtoc_4206);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4206() {    /* call_modtoc_4205 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4208);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4208() {    /* call_modtoc_4207 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[116];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4210);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4210() {    /* call_modtoc_4209 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4212);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4212() {    /* call_modtoc_4211 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4214);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4214() {    /* call_modtoc_4213 */
   {    register Ptr aRet;
        GIsp += (Fix) 4;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1176() {    /* #:modtoc:cmp-float-and-branch */
   {    register Ptr aRet;
        GIa1 = (Ptr) 9;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4216);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4216() {    /* call_modtoc_4215 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[933];
        GIa2 = (rSp + 2)->Val;
        GIa1 = rLit[935];
        (--rSp)->Val = ((Ptr) GLmodtoc_4218);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4218() {    /* call_modtoc_4217 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[274]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4220);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4220() {    /* call_modtoc_4219 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[116];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4222);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4222() {    /* call_modtoc_4221 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[273]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4224);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4224() {    /* call_modtoc_4223 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[429];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4226);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4226() {    /* call_modtoc_4225 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYmodtoc[48];
        GIa1 = rSp->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLmodtoc_703); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_1920() {    /* #:modtoc:call-ptr-test-direct */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rLit[76]->Val == GInil)     goto l_102;
        GIa3 = rA1;
        GIa2 = rLit[936];
        rA1 = rLit[937];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_4228);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4228() {    /* call_modtoc_4227 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4230);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4230() {    /* call_modtoc_4229 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[355];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4232);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4232() {    /* call_modtoc_4231 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4234);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4234() {    /* call_modtoc_4233 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[114];
        GIa2 = rSp->Val;
        GIa1 = rLit[114];
        (--rSp)->Val = ((Ptr) GLmodtoc_4236);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4236() {    /* call_modtoc_4235 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[149];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4238);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4238() {    /* call_modtoc_4237 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[938];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4240);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4240() {    /* call_modtoc_4239 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[939];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4242);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4242() {    /* call_modtoc_4241 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[940];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4244);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4244() {    /* call_modtoc_4243 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[140];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4246);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4246() {    /* call_modtoc_4245 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4248);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4248() {    /* call_modtoc_4247 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1921() {    /* #:modtoc:call-fix-test-direct */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rLit[76]->Val == GInil)     goto l_102;
        GIa3 = rA1;
        GIa2 = rLit[936];
        rA1 = rLit[941];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_4250);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4250() {    /* call_modtoc_4249 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4252);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4252() {    /* call_modtoc_4251 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[355];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4254);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4254() {    /* call_modtoc_4253 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4256);
        {aRet = ((Ptr) GLmodtoc_638); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4256() {    /* call_modtoc_4255 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[114];
        GIa2 = rSp->Val;
        GIa1 = rLit[114];
        (--rSp)->Val = ((Ptr) GLmodtoc_4258);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4258() {    /* call_modtoc_4257 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[149];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4260);
        {aRet = ((Ptr) GLmodtoc_638); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4260() {    /* call_modtoc_4259 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[938];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4262);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4262() {    /* call_modtoc_4261 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4264);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4264() {    /* call_modtoc_4263 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[940];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4266);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4266() {    /* call_modtoc_4265 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[140];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4268);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4268() {    /* call_modtoc_4267 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4270);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4270() {    /* call_modtoc_4269 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1922() {    /* #:modtoc:call-type-test-direct */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rLit[76]->Val == GInil)     goto l_102;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa3 = rA1;
        rA2 = rLit[936];
        rA1 = rLit[942];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_102:
        rA1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_4272);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_4272() {    /* call_modtoc_4271 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[856];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4274);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4274() {    /* call_modtoc_4273 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4276);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4276() {    /* call_modtoc_4275 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[517];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4278);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4278() {    /* call_modtoc_4277 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4280);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4280() {    /* call_modtoc_4279 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[931];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4282);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4282() {    /* call_modtoc_4281 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4284);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4284() {    /* call_modtoc_4283 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[929];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4286);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4286() {    /* call_modtoc_4285 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4288);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4288() {    /* call_modtoc_4287 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[943];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4290);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4290() {    /* call_modtoc_4289 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4292);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4292() {    /* call_modtoc_4291 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[182];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4294);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4294() {    /* call_modtoc_4293 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[140];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4296);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4296() {    /* call_modtoc_4295 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[115];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4298);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4298() {    /* call_modtoc_4297 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1923() {    /* #:modtoc:call-rt-direct-0 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rLit[76]->Val == GInil)     goto l_102;
        GIa3 = rA1;
        GIa2 = rLit[936];
        rA1 = rLit[944];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_4300);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4300() {    /* call_modtoc_4299 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[455];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4302);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4302() {    /* call_modtoc_4301 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4304);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4304() {    /* call_modtoc_4303 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[945];
        GIa2 = rSp->Val;
        GIa1 = rLit[182];
        (--rSp)->Val = ((Ptr) GLmodtoc_4306);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4306() {    /* call_modtoc_4305 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1924() {    /* #:modtoc:call-rt-direct-1 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rLit[76]->Val == GInil)     goto l_102;
        GIa3 = rA1;
        GIa2 = rLit[936];
        rA1 = rLit[946];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_4308);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4308() {    /* call_modtoc_4307 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4310);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4310() {    /* call_modtoc_4309 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[933];
        GIa2 = rSp->Val;
        GIa1 = rLit[182];
        (--rSp)->Val = ((Ptr) GLmodtoc_4312);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4312() {    /* call_modtoc_4311 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4314);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4314() {    /* call_modtoc_4313 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[116];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4316);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4316() {    /* call_modtoc_4315 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[146];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4318);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4318() {    /* call_modtoc_4317 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4320);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4320() {    /* call_modtoc_4319 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_1925() {    /* #:modtoc:call-rt-direct-2 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rLit[76]->Val == GInil)     goto l_102;
        GIa3 = rA1;
        GIa2 = rLit[936];
        rA1 = rLit[947];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = (Ptr) 9;
        (--rSp)->Val = ((Ptr) GLmodtoc_4322);
        {aRet = ((Ptr) GLmodtoc_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4322() {    /* call_modtoc_4321 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4324);
        {aRet = ((Ptr) GLmodtoc_511); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4324() {    /* call_modtoc_4323 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = rLit[933];
        GIa2 = rSp->Val;
        GIa1 = rLit[182];
        (--rSp)->Val = ((Ptr) GLmodtoc_4326);
        {aRet = ((Ptr) GLmodtoc_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4326() {    /* call_modtoc_4325 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[148];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4328);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4328() {    /* call_modtoc_4327 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[116];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4330);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4330() {    /* call_modtoc_4329 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[149];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4332);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4332() {    /* call_modtoc_4331 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[116];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4334);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4334() {    /* call_modtoc_4333 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[146];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4336);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4336() {    /* call_modtoc_4335 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[116];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4338);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4338() {    /* call_modtoc_4337 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[140];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4340);
        {aRet = ((Ptr) GLmodtoc_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4340() {    /* call_modtoc_4339 */
   {    register Ptr aRet;
        GIa1 = GYmodtoc[301];
        (--GIsp)->Val = ((Ptr) GLmodtoc_4342);
        {aRet = ((Ptr) GLmodtoc_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4342() {    /* call_modtoc_4341 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_3() {       /* #:modtoc:print-msg */
   {    register Ptr aRet, rSp, rA1, rA2, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        rA1 = GInil;
        goto l_nlist_modtoc_4344;
l_nlist_modtoc_4343:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_modtoc_4344:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_modtoc_4343;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4345);
        rA4 = (Ptr) 0;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4345() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4346);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4347);
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4347() {    /* 104 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4348);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[52] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4348() {    /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4349);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4350);
        (--rSp)->Val = ((Ptr) GLmodtoc_4351);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[54] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4351() {    /* 109 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = (GIa1->Val + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (--GIsp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYmodtoc[52] + 2)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4350() {    /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4352);
        (--rSp)->Val = rLit[167];
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[201] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4352() {    /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLmodtoc_4353);
        {aRet = ((Ptr) GLmodtoc_4349); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4349() {    /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_4354);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[52] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4354() {    /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4353() {    /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj2);
        {aRet = ((Ptr) GLmodtoc_4346); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4346() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_4355);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4355() {    /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_146() {     /* #:modtoc:print-error */
   {    register Ptr aRet, rSp, rA1, rA2, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        rA1 = GInil;
        goto l_nlist_modtoc_4357;
l_nlist_modtoc_4356:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_modtoc_4357:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_modtoc_4356;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4358);
        rA4 = (Ptr) 0;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4358() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4359);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4360);
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4360() {    /* 104 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4361);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[52] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4361() {    /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4362);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4363);
        (--rSp)->Val = ((Ptr) GLmodtoc_4364);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[54] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4364() {    /* 109 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = (GIa1->Val + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (--GIsp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYmodtoc[52] + 2)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4363() {    /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4365);
        (--rSp)->Val = rLit[167];
        (--rSp)->Val = rLit[948];
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[201] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4365() {    /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLmodtoc_4366);
        {aRet = ((Ptr) GLmodtoc_4362); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4362() {    /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_4367);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[52] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4367() {    /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4366() {    /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj2);
        {aRet = ((Ptr) GLmodtoc_4359); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4359() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_4368);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4368() {    /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_51() {      /* #:modtoc:princ1 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[949] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_791() {     /* #:modtoc:princn */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[949] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_46() {      /* #:modtoc:prin1 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_33() {      /* #:modtoc:prin2 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_39() {      /* #:modtoc:prin3 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa3;
        GIa4 = (Ptr) 3;
        {aRet = (GYmodtoc[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_145() {     /* #:modtoc:loader */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYmodtoc; rSp = GIsp; rNil = GInil;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[920]->Val;
        rLit[920]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[271]->Val;
        rLit[271]->Val = (rSp + 3)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[950];
        (--rSp)->Val = rLit[71];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = rLit[25]->Val;
        {aRet = ((Ptr) GLmodtoc_4369); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4369() {    /* 101 */
   {    register Ptr aRet, rSp, rA1, rA4, rBcons;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rBcons = GIbcons;
        if ((long) rSp->Val < (long) rBcons)    {aRet = ((Ptr) GLmodtoc_4370); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        if ((long) rSp->Val < (long) rBcons)    {aRet = ((Ptr) GLmodtoc_4371); goto lRet;}
        rA1 = rSp->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4373);
        {aRet = (GYmodtoc[951] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4373() {    /* call_modtoc_4372 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLmodtoc_4374); goto lRet;}
        rA4 = rSp->Val;
        if (rA4->Val >= GIbfloat)       goto l_106;
        rA4->Val = rLit[952];
        {aRet = ((Ptr) GLmodtoc_4374); goto lRet;}
l_106:
        (--rSp)->Val = ((Ptr) GLmodtoc_4374);
        (--rSp)->Val = rLit[953];
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = ((Ptr) GLmodtoc_146); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4371() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4374);
        (--rSp)->Val = GYmodtoc[953];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = ((Ptr) GLmodtoc_146); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4374() {    /* 104 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_4369); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4370() {    /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        rSp += (Fix) 1;
        if (rLit[60]->Val == GInil)     {aRet = ((Ptr) GLmodtoc_4375); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_4376);
        (--rSp)->Val = rLit[954];
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[955] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4376() {    /* 112 */
   {    register Ptr aRet;
        (GIsp + 11)->Val = GIa1;
        {aRet = ((Ptr) GLmodtoc_4375); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4375() {    /* 111 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (rLit[62]->Val == GInil)     {aRet = ((Ptr) GLmodtoc_4377); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_4378);
        (--rSp)->Val = rLit[956];
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[955] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4378() {    /* 115 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLmodtoc_4379); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4377() {    /* 113 */
   {    register Ptr aRet;
        GIa4 = GInil;
        {aRet = ((Ptr) GLmodtoc_4379); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4379() {    /* 114 */
   {    register Ptr aRet, *rLit, rSp, rA3;
        rLit = GYmodtoc; rSp = GIsp; rA3 = GIa3;
        rLit[269]->Val = GIa4;
        rA3 = (rSp + 11)->Val;
        (rSp + 11)->Val = (rA3 + 1)->Val;
        rLit[920]->Val = rA3->Val;
        {aRet = ((Ptr) GLmodtoc_4380); goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

static Ptr GLmodtoc_4380() {    /* 116 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 11)->Val < (long) GIbcons)    goto l_117;
        rLit[271]->Val = (rSp + 10)->Val;
        (rSp + 10)->Val = rLit[920]->Val;
        rA4 = (rSp + 11)->Val;
        (rSp + 11)->Val = (rA4 + 1)->Val;
        rLit[920]->Val = rA4->Val;
        GIa1 = (rSp + 10)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4380);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
l_117:
        rLit[271]->Val = (rSp + 10)->Val;
        (rSp + 10)->Val = rLit[920]->Val;
        rLit[920]->Val = GInil;
        GIa1 = (rSp + 10)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4382);
        {aRet = ((Ptr) GLmodtoc_692); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4382() {    /* call_modtoc_4381 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[271]->Val = (rSp + 6)->Val;
        rLit[920]->Val = (rSp + 7)->Val;
        rSp += (Fix) 12;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_140() {     /* #:modtoc:stats-start */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        rLit[173]->Val = rLit[957];
        rLit[180]->Val = rLit[957];
        rLit[183]->Val = rLit[957];
        GIa2 = rLit[957];
        GIa1 = rLit[958]->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4384);
        {aRet = (rLit[959] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4384() {    /* call_modtoc_4383 */
   {    register Ptr aRet;
        GYmodtoc[174]->Val = GIa1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_291() {     /* #:modtoc:stats-stop */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4385);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4385() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4386);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4387);
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4387() {    /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        rA4 = rLit[958]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) / (Fix) 2));
        (--rSp)->Val = rLit[957];
        (--rSp)->Val = GInil;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLmodtoc_4388);
        (--rSp)->Val = rLit[960];
        (--rSp)->Val = rLit[173]->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4388() {    /* 105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4389);
        (--rSp)->Val = rLit[961]->Val;
        (--rSp)->Val = rLit[173]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[389] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4389() {    /* 106 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        GYmodtoc[961]->Val = GIa1;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rA4;
        {aRet = ((Ptr) GLmodtoc_4390); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4390() {    /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4391);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[962] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4391() {    /* 109 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmodtoc_4392); goto lRet;}
        rA4 = (rLit[174]->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val;
        (rSp + 3)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLmodtoc_4393);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLmodtoc_4394);
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[398] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4394() {    /* 111 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[389] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4393() {    /* 110 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (rSp + 4)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4395);
        (--rSp)->Val = rLit[963]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4396);
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[398] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4396() {    /* 113 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[389] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4395() {    /* 112 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        rLit[963]->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4397);
        (--rSp)->Val = (Ptr) 2;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[187] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4397() {    /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4398);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4398() {    /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4399);
        (--rSp)->Val = (Ptr) 7;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[187] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4399() {    /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4400);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4400() {    /* 117 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        rA4 = (rLit[174]->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        (rSp + 3)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLmodtoc_4401);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLmodtoc_4402);
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[398] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4402() {    /* 119 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[389] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4401() {    /* 118 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (rSp + 4)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4403);
        (--rSp)->Val = rLit[963]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4404);
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[398] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4404() {    /* 121 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[389] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4403() {    /* 120 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        rLit[963]->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4405);
        (--rSp)->Val = (Ptr) 12;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[187] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4405() {    /* 122 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4406);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4406() {    /* 123 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4407);
        (--rSp)->Val = (Ptr) 17;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[187] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4407() {    /* 124 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4408);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[167] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4408() {    /* 125 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 2)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLmodtoc_4409);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        rA4 = (Ptr) 2;
        {aRet = (GYmodtoc[389] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4409() {    /* 126 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLmodtoc_4390); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4392() {    /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        rSp += (Fix) 2;
        (--rSp)->Val = ((Ptr) GLmodtoc_4410);
        (--rSp)->Val = rLit[964];
        (--rSp)->Val = ((Ptr) GLmodtoc_4411);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[173]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[400] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4411() {    /* 128 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[167] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4410() {    /* 127 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4412);
        (--rSp)->Val = rLit[965];
        (--rSp)->Val = rLit[180]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4412() {    /* 129 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4413);
        (--rSp)->Val = rLit[966];
        (--rSp)->Val = rLit[183]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4413() {    /* 130 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4414);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[167] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4414() {    /* 131 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 3;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj1);
        {aRet = ((Ptr) GLmodtoc_4386); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4386() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_4415);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4415() {    /* 132 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4416() {    /* #:modtoc:stats-global */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        if (rLit[67]->Val == GInil)     {aRet = ((Ptr) GLmodtoc_4417); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLmodtoc_4418);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4418() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4419);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4420);
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4420() {    /* 106 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4421);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[167] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4421() {    /* 107 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4422);
        (--rSp)->Val = rLit[967];
        (--rSp)->Val = rLit[961]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4422() {    /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4423);
        (--rSp)->Val = rLit[968];
        (--rSp)->Val = ((Ptr) GLmodtoc_4424);
        (--rSp)->Val = rLit[963]->Val;
        (--rSp)->Val = rLit[961]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[400] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4424() {    /* 110 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[167] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4423() {    /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj1);
        {aRet = ((Ptr) GLmodtoc_4419); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4419() {    /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_4425);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4425() {    /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4417() {    /* 101 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_232() {     /* #:modtoc:typefn-to-ftype */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = GIa2;
        if (rA1 != rLit[286])   goto l_102;
        rA1 = (Ptr) 1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_102:
        if (rA1 != rLit[288])   goto l_103;
        rA1 = (Ptr) 2;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        if (rA1 != rLit[290])   goto l_104;
        rA1 = (Ptr) 3;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        if (rA1 != rLit[292])   goto l_105;
        rA1 = (Ptr) 4;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        if (rA1 != rLit[294])   goto l_106;
        rA1 = (Ptr) 5;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_106:
        if (rA1 != rLit[296])   goto l_107;
        rA1 = (Ptr) 6;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_107:
        if (rA1 != rLit[298])   goto l_108;
        rA1 = (Ptr) 11;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_108:
        if (rA1 != rLit[299])   goto l_109;
        rA1 = (Ptr) 12;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_109:
        GIa3 = rA1;
        GIa2 = rSp->Val;
        rA1 = rLit[969];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_724() {     /* #:modtoc:ftype-to-typefn */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = GIa2;
        if (rA1 != (Ptr) 1)     goto l_102;
        rA1 = rLit[286];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_102:
        if (rA1 != (Ptr) 2)     goto l_103;
        rA1 = rLit[288];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        if (rA1 != (Ptr) 3)     goto l_104;
        rA1 = rLit[290];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        if (rA1 != (Ptr) 4)     goto l_105;
        rA1 = rLit[292];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        if (rA1 != (Ptr) 5)     goto l_106;
        rA1 = rLit[294];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_106:
        if (rA1 != (Ptr) 6)     goto l_107;
        rA1 = rLit[296];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_107:
        if (rA1 != (Ptr) 11)    goto l_108;
        rA1 = rLit[298];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_108:
        if (rA1 != (Ptr) 12)    goto l_109;
        rA1 = rLit[299];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_109:
        GIa3 = rA1;
        GIa2 = rSp->Val;
        rA1 = rLit[970];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4426() {    /* #:modtoc:peephole-optimize */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        if (rLit[971]->Val == GInil)    {aRet = ((Ptr) GLmodtoc_4427); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_4428);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4428() {    /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4429);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4430);
        GIa1 = rLit[972];
        (--rSp)->Val = ((Ptr) GLmodtoc_4432);
        {aRet = (rLit[973] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4432() {    /* call_modtoc_4431 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4430() {    /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLmodtoc_4433); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4433() {    /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   goto l_108;
        (--rSp)->Val = ((Ptr) GLmodtoc_4433);
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
l_108:
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4434);
        (--rSp)->Val = ((Ptr) GLmodtoc_4435);
        rA4 = (Ptr) 0;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4435() {    /* 111 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[109] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4434() {    /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLmodtoc_4436);
        {aRet = ((Ptr) GLmodtoc_4429); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4429() {    /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_4437);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4437() {    /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4436() {    /* 105 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_4427); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4427() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4439);
        {aRet = ((Ptr) GLmodtoc_4440); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4439() {    /* call_modtoc_4438 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa2 = rSp->Val;
        GIa1 = rLit[974];
        (--rSp)->Val = ((Ptr) GLmodtoc_4442);
        {aRet = (rLit[258] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4442() {    /* call_modtoc_4441 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmodtoc_4443); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4443);
        {aRet = ((Ptr) GLmodtoc_4444); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4443() {    /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4446);
        {aRet = ((Ptr) GLmodtoc_4447); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4446() {    /* call_modtoc_4445 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GInil;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4449);
        {aRet = ((Ptr) GLmodtoc_4450); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4449() {    /* call_modtoc_4448 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLmodtoc_4451); goto lRet;}
        GIa2 = rA1;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4451);
        {aRet = ((Ptr) GLmodtoc_4452); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4451() {    /* 116 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        rSp += (Fix) 1;
        if (rLit[971]->Val == GInil)    {aRet = ((Ptr) GLmodtoc_4453); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_4454);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4454() {    /* 119 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4455);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4456);
        GIa1 = rLit[975];
        (--rSp)->Val = ((Ptr) GLmodtoc_4458);
        {aRet = (rLit[973] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4458() {    /* call_modtoc_4457 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4456() {    /* 122 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLmodtoc_4459); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4459() {    /* 123 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   goto l_124;
        (--rSp)->Val = ((Ptr) GLmodtoc_4459);
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
l_124:
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4460);
        (--rSp)->Val = ((Ptr) GLmodtoc_4461);
        rA4 = (Ptr) 0;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4461() {    /* 127 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[109] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4460() {    /* 126 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLmodtoc_4462);
        {aRet = ((Ptr) GLmodtoc_4455); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4455() {    /* 120 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_4463);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4463() {    /* 128 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4462() {    /* 121 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_4453); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4453() {    /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4440() {    /* #:modtoc:remove-eval */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLmodtoc_4464); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4464() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBcons;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
l_GLmodtoc_4464:
        if ((long) rSp->Val < (long) rBcons)    goto l_102;
        rA4 = rSp->Val;
        if ((long) rA4->Val < (long) rBcons)    goto l_103;
        rA3 = rA4->Val;
        if (rA3->Val != rLit[240])      goto l_103;
        rA2 = rA4->Val;
        rA2 = (rA2 + 1)->Val;
        if (rA2->Val != rNil)   goto l_103;
        rA2 = rSp->Val;
        rA2 = (rA2 + 1)->Val;
        rA3 = rSp->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA2 = rA2->Val;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4464);
        {aRet = (rLit[976] + 2)->Val; goto lRet;}
l_103:
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        goto l_GLmodtoc_4464;
l_102:
        rA1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4447() {    /* #:modtoc:optimize-call */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        {aRet = ((Ptr) GLmodtoc_4465); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4465() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBcons;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        if ((long) (rSp + 3)->Val < (long) rBcons)      {aRet = ((Ptr) GLmodtoc_4466); goto lRet;}
        rA4 = (rSp + 3)->Val;
        (rSp + 2)->Val = rA4->Val;
        rA3 = (rA4 + 1)->Val;
        (rSp + 1)->Val = rA3->Val;
        if ((long) (rSp + 2)->Val < (long) rBcons)      {aRet = ((Ptr) GLmodtoc_4467); goto lRet;}
        rA2 = (rSp + 2)->Val;
        if (rA2->Val != rLit[342])      {aRet = ((Ptr) GLmodtoc_4468); goto lRet;}
        rA1 = (rA2 + 1)->Val;
        rSp->Val = rA1->Val;
        if (rSp->Val != rLit[646])      goto l_107;
        (--rSp)->Val = rA2;
        rA3 = rLit[977];
        rA2 = rLit[657];
        rA1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4467);
        {aRet = (rLit[976] + 2)->Val; goto lRet;}
l_107:
        if (rSp->Val != rLit[657])      goto l_109;
        (--rSp)->Val = rA2;
        rA3 = rLit[978];
        rA2 = rLit[646];
        rA1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4467);
        {aRet = (rLit[976] + 2)->Val; goto lRet;}
l_109:
        if (rSp->Val != rLit[658])      goto l_111;
        (--rSp)->Val = rA2;
        rA3 = rLit[979];
        rA2 = rLit[658];
        rA1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4467);
        {aRet = (rLit[976] + 2)->Val; goto lRet;}
l_111:
        if (rSp->Val != rLit[980])      goto l_113;
        (--rSp)->Val = rA2;
        rA3 = rNil;
        rA2 = rLit[594];
        rA1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4467);
        {aRet = (rLit[976] + 2)->Val; goto lRet;}
l_113:
        rA2 = rLit[981]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_assq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        goto l_115;
        rA2 = rLit[981]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_cassq (rA1, rA2, rBcons, rNil);
        rA3 = rNil;
        rA2 = rA1;
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4467);
        {aRet = (rLit[976] + 2)->Val; goto lRet;}
l_115:
        if ((rSp + 1)->Val == rNil)     {aRet = ((Ptr) GLmodtoc_4469); goto lRet;}
        if ((long) (rSp + 1)->Val >= (long) rBcons)     {aRet = ((Ptr) GLmodtoc_4469); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_4470);
        (--rSp)->Val = ((Ptr) GLmodtoc_4471);
        (--rSp)->Val = rLit[237];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4471() {    /* 120 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[119] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4470() {    /* 119 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = rLit[346];
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4473);
        {aRet = (rLit[976] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4473() {    /* call_modtoc_4472 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4474);
        (--rSp)->Val = rLit[320];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4474() {    /* 121 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = (rSp + 3)->Val;
        rA2 = (rA2 + 1)->Val;
        GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa4 = (rSp + 3)->Val;
        (GIa4 + 1)->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_4467); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_4469() {    /* 117 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        if ((rSp + 1)->Val == GInil)    {aRet = ((Ptr) GLmodtoc_4475); goto lRet;}
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLmodtoc_4475); goto lRet;}
        rA4 = (rSp + 1)->Val;
        if (rA4->Val != rLit[319])      {aRet = ((Ptr) GLmodtoc_4475); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_4476);
        (--rSp)->Val = ((Ptr) GLmodtoc_4477);
        (--rSp)->Val = rLit[237];
        rA4 = (rSp + 4)->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4477() {    /* 125 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[119] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4476() {    /* 124 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = rLit[346];
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4479);
        {aRet = (rLit[976] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4479() {    /* call_modtoc_4478 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4480);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4480() {    /* 126 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = rLit[320];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4467);
        {aRet = (rLit[976] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4475() {    /* 122 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        if ((rSp + 1)->Val == GInil)    {aRet = ((Ptr) GLmodtoc_4467); goto lRet;}
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLmodtoc_4467); goto lRet;}
        rA4 = (rSp + 1)->Val;
        if (rA4->Val != rLit[320])      {aRet = ((Ptr) GLmodtoc_4467); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_4481);
        (--rSp)->Val = ((Ptr) GLmodtoc_4482);
        (--rSp)->Val = rLit[233];
        rA4 = (rSp + 4)->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4482() {    /* 130 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[119] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4481() {    /* 129 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = rLit[346];
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4484);
        {aRet = (rLit[976] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4484() {    /* call_modtoc_4483 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4485);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4485() {    /* 131 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = rLit[320];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4467);
        {aRet = (rLit[976] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4468() {    /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA2->Val != rLit[320])      {aRet = ((Ptr) GLmodtoc_4486); goto lRet;}
        rA1 = (rA2 + 1)->Val;
        rSp->Val = rA1->Val;
        if (rSp->Val != rLit[646])      {aRet = ((Ptr) GLmodtoc_4487); goto lRet;}
        (--rSp)->Val = rA2;
        GIa3 = rLit[982];
        rA2 = rLit[657];
        rA1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4489);
        {aRet = (rLit[976] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_4489() {    /* call_modtoc_4488 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = (rSp + 3)->Val;
        rA2 = (rA2 + 1)->Val;
        rA1 = GYmodtoc[983];
        GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa4 = (rSp + 3)->Val;
        (GIa4 + 1)->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_4467); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_4487() {    /* 134 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (rSp->Val != rLit[658])      {aRet = ((Ptr) GLmodtoc_4490); goto lRet;}
        (--rSp)->Val = GIa2;
        GIa3 = rLit[984];
        GIa2 = (rSp + 1)->Val;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4492);
        {aRet = (rLit[976] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4492() {    /* call_modtoc_4491 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = (rSp + 3)->Val;
        rA2 = (rA2 + 1)->Val;
        rA1 = GYmodtoc[985];
        GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa4 = (rSp + 3)->Val;
        (GIa4 + 1)->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_4467); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_4490() {    /* 136 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBcons;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        rA2 = rLit[981]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_assq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLmodtoc_4467); goto lRet;}
        rA2 = rLit[981]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_cassq (rA1, rA2, rBcons, rNil);
        GIa3 = rNil;
        rA2 = rA1;
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4494);
        {aRet = (rLit[976] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_4494() {    /* call_modtoc_4493 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = (rSp + 3)->Val;
        rA2 = (rA2 + 1)->Val;
        rA1 = GYmodtoc[986];
        GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa4 = (rSp + 3)->Val;
        (GIa4 + 1)->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_4467); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_4486() {    /* 132 */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYmodtoc; rSp = GIsp; rA2 = GIa2;
        if (rA2->Val != rLit[340])      {aRet = ((Ptr) GLmodtoc_4495); goto lRet;}
        GIa1 = (rA2 + 1)->Val;
        rSp->Val = GIa1->Val;
        if ((rSp + 1)->Val == GInil)    {aRet = ((Ptr) GLmodtoc_4496); goto lRet;}
        if ((long) (rSp + 1)->Val >= (long) GIbcons)    {aRet = ((Ptr) GLmodtoc_4496); goto lRet;}
        (--rSp)->Val = rA2;
        (--rSp)->Val = ((Ptr) GLmodtoc_4497);
        (--rSp)->Val = ((Ptr) GLmodtoc_4498);
        (--rSp)->Val = rLit[237];
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4498() {    /* 145 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[119] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4497() {    /* 144 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = rLit[346];
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4500);
        {aRet = (rLit[976] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4500() {    /* call_modtoc_4499 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4501);
        (--rSp)->Val = rLit[319];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4501() {    /* 146 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = (rSp + 3)->Val;
        rA2 = (rA2 + 1)->Val;
        GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa4 = (rSp + 3)->Val;
        (GIa4 + 1)->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_4467); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_4496() {    /* 142 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        if ((rSp + 1)->Val == GInil)    {aRet = ((Ptr) GLmodtoc_4502); goto lRet;}
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLmodtoc_4502); goto lRet;}
        rA4 = (rSp + 1)->Val;
        if (rA4->Val != rLit[319])      {aRet = ((Ptr) GLmodtoc_4502); goto lRet;}
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_4503);
        (--rSp)->Val = ((Ptr) GLmodtoc_4504);
        (--rSp)->Val = rLit[237];
        rA4 = (rSp + 5)->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4504() {    /* 150 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[119] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4503() {    /* 149 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = rLit[346];
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4506);
        {aRet = (rLit[976] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4506() {    /* call_modtoc_4505 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4507);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4507() {    /* 151 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = rLit[319];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4467);
        {aRet = (rLit[976] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4502() {    /* 147 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        if ((rSp + 1)->Val == GInil)    {aRet = ((Ptr) GLmodtoc_4467); goto lRet;}
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLmodtoc_4467); goto lRet;}
        rA4 = (rSp + 1)->Val;
        if (rA4->Val != rLit[320])      {aRet = ((Ptr) GLmodtoc_4467); goto lRet;}
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodtoc_4508);
        (--rSp)->Val = ((Ptr) GLmodtoc_4509);
        (--rSp)->Val = rLit[233];
        rA4 = (rSp + 5)->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4509() {    /* 155 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[119] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4508() {    /* 154 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = rLit[346];
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4511);
        {aRet = (rLit[976] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4511() {    /* call_modtoc_4510 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4512);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4512() {    /* 156 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = rLit[319];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4467);
        {aRet = (rLit[976] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4495() {    /* 140 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if (rA2->Val != rLit[277])      {aRet = ((Ptr) GLmodtoc_4467); goto lRet;}
        if ((long) (rSp + 1)->Val < (long) GIbcons)     goto l_159;
        rA1 = (rSp + 1)->Val;
        if (rA1->Val != rLit[276])      goto l_159;
        {aRet = ((Ptr) GLmodtoc_4467); goto lRet;}
l_159:
        (--rSp)->Val = rA4;
        rA2 = (rA2 + 1)->Val;
        rA1 = rLit[276];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rA2 = (rSp + 4)->Val;
        rA2 = (rA2 + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rA4 = (rSp++)->Val;
        (rA4 + 1)->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_4467); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4467() {    /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp + 3)->Val;
        (rSp + 3)->Val = (GIa4 + 1)->Val;
        {aRet = ((Ptr) GLmodtoc_4465); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4466() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4513() {    /* #:modtoc:sequence-break-p */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if ((long) rA1 < (long) GIbcons)        goto l_101;
        rA4 = rA1->Val;
        if (rA4 == rLit[343])   { aRet = (rSp++)->Val; goto lRet;}
        if (rA4 == rLit[319])   { aRet = (rSp++)->Val; goto lRet;}
        if (rA4 == rLit[320])   { aRet = (rSp++)->Val; goto lRet;}
        if (rA4 == rLit[321])   { aRet = (rSp++)->Val; goto lRet;}
        if (rA4 != rLit[322])   goto l_101;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4450() {    /* #:modtoc:find-alist */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        {aRet = ((Ptr) GLmodtoc_4514); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4514() {    /* 101 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
l_GLmodtoc_4514:
        if ((long) (rSp + 3)->Val < (long) rBcons)      {aRet = ((Ptr) GLmodtoc_4515); goto lRet;}
        rA4 = (rSp + 3)->Val;
        if ((long) rA4->Val < (long) rBcons)    goto l_103;
        (rSp + 3)->Val = (rA4 + 1)->Val;
        (rSp + 1)->Val = rA4->Val;
        goto l_GLmodtoc_4514;
l_103:
        rA3 = (rA4 + 1)->Val;
        rSp->Val = rA3->Val;
        if ((long) rSp->Val < (long) rBcons)    {aRet = ((Ptr) GLmodtoc_4516); goto lRet;}
        rA1 = rSp->Val;
        rA1 = rA1->Val;
        if (rA1 != GYmodtoc[319])       {aRet = ((Ptr) GLmodtoc_4517); goto lRet;}
        rA2 = rSp->Val;
        rA2 = (rA2 + 1)->Val;
        rA2 = rA2->Val;
        rA1 = rA4->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rA2 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (rSp + 2)->Val = rA1;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4519);
        {aRet = ((Ptr) GLmodtoc_4513); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4519() {    /* call_modtoc_4518 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        if (rA1 == GInil)       goto l_109;
        rA2 = (rSp + 3)->Val;
        rA2 = (rA2 + 1)->Val;
        rA2 = (rA2 + 1)->Val;
        rA3 = (rSp + 3)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA2 = rA2->Val;
        rA1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4514);
        {aRet = (rLit[976] + 2)->Val; goto lRet;}
l_109:
        rA2 = (rSp + 3)->Val;
        rA2 = (rA2 + 1)->Val;
        rA3 = (rSp + 3)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA2 = rA2->Val;
        rA1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4514);
        {aRet = (rLit[976] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLmodtoc_4517() {    /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA1 != rLit[351])   {aRet = ((Ptr) GLmodtoc_4520); goto lRet;}
        rA2 = rSp->Val;
        rA2 = (rA2 + 1)->Val;
        if (rA2->Val != rLit[151])      {aRet = ((Ptr) GLmodtoc_4521); goto lRet;}
        rA1 = (GIa4 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA2 = rLit[987];
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4523);
        {aRet = (rLit[168] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_4523() {    /* call_modtoc_4522 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLmodtoc_4521); goto lRet;}
        rA1 = (rSp + 3)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        GIa2 = rLit[988];
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4525);
        {aRet = (rLit[168] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4525() {    /* call_modtoc_4524 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA1 == GInil)       {aRet = ((Ptr) GLmodtoc_4521); goto lRet;}
        rA1 = (rSp + 3)->Val;
        rA2 = GYmodtoc[914];
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rA2 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        (rSp + 2)->Val = rA1;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4527);
        {aRet = ((Ptr) GLmodtoc_4513); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_4527() {    /* call_modtoc_4526 */
   {    register Ptr aRet, rSp, rA2, rA3, rA4;
        rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if (GIa1 == GInil)      goto l_114;
        rA2 = (rSp + 3)->Val;
        rA2 = (rA2 + 1)->Val;
        rA2 = (rA2 + 1)->Val;
        rA2 = (rA2 + 1)->Val;
        rA2 = (rA2 + 1)->Val;
        rA3 = (rSp + 3)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA2 = rA2->Val;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4514);
        {aRet = (GYmodtoc[976] + 2)->Val; goto lRet;}
l_114:
        rA4 = (rSp + 3)->Val;
        (rSp + 3)->Val = (rA4 + 1)->Val;
        (rSp + 1)->Val = rA4->Val;
        {aRet = ((Ptr) GLmodtoc_4514); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4521() {    /* 112 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 3)->Val;
        (rSp + 3)->Val = (rA4 + 1)->Val;
        (rSp + 1)->Val = rA4->Val;
        {aRet = ((Ptr) GLmodtoc_4514); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4520() {    /* 111 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA1 != rLit[343])   {aRet = ((Ptr) GLmodtoc_4528); goto lRet;}
        rA2 = rLit[895];
        rA1 = GIa4->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rA2 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        (rSp + 2)->Val = rA1;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4530);
        {aRet = ((Ptr) GLmodtoc_4513); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_4530() {    /* call_modtoc_4529 */
   {    register Ptr aRet, rSp, rA2, rA3, rA4;
        rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if (GIa1 == GInil)      goto l_117;
        rA2 = (rSp + 3)->Val;
        rA2 = (rA2 + 1)->Val;
        rA2 = (rA2 + 1)->Val;
        rA3 = (rSp + 3)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA2 = rA2->Val;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4514);
        {aRet = (GYmodtoc[976] + 2)->Val; goto lRet;}
l_117:
        rA4 = (rSp + 3)->Val;
        (rSp + 3)->Val = (rA4 + 1)->Val;
        (rSp + 1)->Val = rA4->Val;
        {aRet = ((Ptr) GLmodtoc_4514); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4528() {    /* 116 */
   {    register Ptr aRet, *rLit, rA1, rA2, rA4;
        rLit = GYmodtoc; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if (rA1 != rLit[358])   {aRet = ((Ptr) GLmodtoc_4531); goto lRet;}
        rA2 = (rA4 + 1)->Val;
        rA2 = (rA2 + 1)->Val;
        if ((long) rA2->Val < (long) GIbcons)   {aRet = ((Ptr) GLmodtoc_4532); goto lRet;}
        rA1 = (rA4 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA2 = rLit[989];
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4534);
        {aRet = (rLit[168] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_4534() {    /* call_modtoc_4533 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if (rA1 == GInil)       {aRet = ((Ptr) GLmodtoc_4532); goto lRet;}
        rA4 = rSp->Val;
        rA4 = (rA4 + 1)->Val;
        if ((long) rA4->Val < (long) GIbcons)   {aRet = ((Ptr) GLmodtoc_4532); goto lRet;}
        rA3 = rSp->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        if (rA3->Val != rLit[75])       {aRet = ((Ptr) GLmodtoc_4532); goto lRet;}
        rA2 = rSp->Val;
        rA2 = (rA2 + 1)->Val;
        rA2 = rA2->Val;
        rA2 = (rA2 + 1)->Val;
        if (rA2->Val >= GIbfloat)       {aRet = ((Ptr) GLmodtoc_4532); goto lRet;}
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        if ((Fix) (rA1->Val) <= (Fix) 0)        {aRet = ((Ptr) GLmodtoc_4532); goto lRet;}
        rA4 = rSp->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        if ((Fix) (rA4->Val) > (Fix) 9) {aRet = ((Ptr) GLmodtoc_4532); goto lRet;}
        rA1 = (rSp + 3)->Val;
        (--rSp)->Val = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4535);
        (--rSp)->Val = rLit[990];
        rA4 = (rSp + 3)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[991] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4535() {    /* 122 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rA2 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        (rSp + 2)->Val = rA1;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4537);
        {aRet = ((Ptr) GLmodtoc_4513); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_4537() {    /* call_modtoc_4536 */
   {    register Ptr aRet, rSp, rA2, rA3, rA4;
        rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if (GIa1 == GInil)      goto l_123;
        rA2 = (rSp + 3)->Val;
        rA2 = (rA2 + 1)->Val;
        rA2 = (rA2 + 1)->Val;
        rA2 = (rA2 + 1)->Val;
        rA3 = (rSp + 3)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA2 = rA2->Val;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4514);
        {aRet = (GYmodtoc[976] + 2)->Val; goto lRet;}
l_123:
        rA4 = (rSp + 3)->Val;
        (rSp + 3)->Val = (rA4 + 1)->Val;
        (rSp + 1)->Val = rA4->Val;
        {aRet = ((Ptr) GLmodtoc_4514); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4532() {    /* 120 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 3)->Val;
        (rSp + 3)->Val = (rA4 + 1)->Val;
        (rSp + 1)->Val = rA4->Val;
        {aRet = ((Ptr) GLmodtoc_4514); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4531() {    /* 119 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (rSp + 3)->Val = (rA4 + 1)->Val;
        (rSp + 1)->Val = rA4->Val;
        {aRet = ((Ptr) GLmodtoc_4514); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4516() {    /* 105 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA4->Val == rNil)   goto l_128;
        if (rSp->Val != rNil)   goto l_126;
l_128:
        (rSp + 3)->Val = (rA4 + 1)->Val;
        (rSp + 1)->Val = rA4->Val;
        {aRet = ((Ptr) GLmodtoc_4514); goto lRet;}
l_126:
        rA2 = rSp->Val;
        rA1 = rA4->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_cons (rA1, rA2);
        rA2 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_cons (rA1, rA2);
        (rSp + 2)->Val = rA1;
        rA2 = (rSp + 3)->Val;
        rA2 = (rA2 + 1)->Val;
        rA3 = (rSp + 3)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA2 = rA2->Val;
        rA1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4514);
        {aRet = (GYmodtoc[976] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLmodtoc_4515() {    /* 102 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rNil;
l_129:
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_130;
        rA1 = (rSp + 1)->Val;
        rA1 = rA1->Val;
        rA2 = (rSp + 4)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = llrt_call_cassq (rA1, rA2, rBcons, rNil);
        rSp->Val = rA1;
        if (rA1 == rNil)        goto l_131;
        rA4 = (rSp + 1)->Val;
        rA3 = rA4->Val;
        if (rA1 == rA3->Val)    goto l_133;
        rA3 = rA1;
        goto l_134;
l_133:
        rA3 = GYmodtoc[992]->Val;
l_134:
        rA2 = rA4->Val;
        (rA2 + 1)->Val = rA3;
        goto l_129;
l_131:
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        goto l_129;
l_130:
        rSp += (Fix) 2;
        rA1 = (rSp + 2)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4452() {    /* #:modtoc:change-lab */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLmodtoc_4538); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4538() {    /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (rSp->Val == GInil)  {aRet = ((Ptr) GLmodtoc_4539); goto lRet;}
        rA4 = rSp->Val;
        if ((long) rA4->Val < (long) GIbcons)   {aRet = ((Ptr) GLmodtoc_4540); goto lRet;}
        GIa3 = rA4->Val;
        (--rSp)->Val = (GIa3 + 1)->Val;
        {aRet = ((Ptr) GLmodtoc_4541); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4541() {    /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil, rBcons;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        if ((long) rSp->Val < (long) rBcons)    {aRet = ((Ptr) GLmodtoc_4542); goto lRet;}
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        rA4 = (rSp++)->Val;
        (--rSp)->Val = rA4;
        if ((long) rA4->Val >= (long) rBcons)   goto l_107;
        rA2 = (rSp + 3)->Val;
        rA1 = rA4->Val;
        rA1 = llrt_call_assq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLmodtoc_4543); goto lRet;}
        rA1 = rSp->Val;
        rA2 = (rSp + 3)->Val;
        rA1 = rA1->Val;
        rA1 = llrt_call_cassq (rA1, rA2, rBcons, rNil);
        rA4 = rSp->Val;
        rA4->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_4543); goto lRet;}
l_107:
        GIa3 = rA4->Val;
        if (GIa3->Val != rLit[237])     goto l_111;
        rA2 = (rSp + 3)->Val;
        rA1 = rA4->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4543);
        {aRet = ((Ptr) GLmodtoc_4544); goto lRet;}
l_111:
        rA2 = rA4->Val;
        if ((long) rA2->Val < (long) rBcons)    {aRet = ((Ptr) GLmodtoc_4543); goto lRet;}
        rA1 = rA4->Val;
        rA1 = rA1->Val;
        if (rA1->Val != rLit[237])      {aRet = ((Ptr) GLmodtoc_4543); goto lRet;}
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4545);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 1;
        {aRet = (rLit[993] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4545() {    /* 115 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLmodtoc_4546); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4546() {    /* 116 */
   {    register Ptr aRet, rSp, rA1, rA2, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBcons = GIbcons;
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_117;
        if ((long) rSp->Val < (long) rBcons)    goto l_117;
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA2 = rSp->Val;
        rSp->Val = (rA2 + 1)->Val;
        rA2 = rA2->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4546);
        {aRet = ((Ptr) GLmodtoc_4544); goto lRet;}
l_117:
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_4543); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_4543() {    /* 108 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_4541); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4542() {    /* 106 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_4540); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4540() {    /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = rSp->Val;
        rSp->Val = (GIa4 + 1)->Val;
        {aRet = ((Ptr) GLmodtoc_4538); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4539() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4544() {    /* #:modtoc:change-address */
   {    register Ptr aRet, rSp, rA1, rA2, rA4, rNil, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA1 = llrt_call_assq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        goto l_101;
        rA4 = rSp->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        rA1 = (rA4 + 1)->Val;
        rA2 = (rSp + 2)->Val;
        rA1 = rA1->Val;
        rA1 = llrt_call_cassq (rA1, rA2, rBcons, rNil);
        rA4 = (rSp++)->Val;
        rA4->Val = rA1;
        rA1 = rA4;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4444() {    /* #:modtoc:inline-callextern */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp->Val = rA1;
        (--rSp)->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_4547); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4547() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        GIa2 = rSp->Val;
        GIa1 = rLit[994];
        (--rSp)->Val = ((Ptr) GLmodtoc_4549);
        {aRet = (rLit[258] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4549() {    /* call_modtoc_4548 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLmodtoc_4550); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_4551);
        (--rSp)->Val = GYmodtoc[995];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4553);
        {aRet = ((Ptr) GLmodtoc_4554); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4553() {    /* call_modtoc_4552 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLmodtoc_4551); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4551() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = rSp->Val;
        rSp->Val = (GIa4 + 1)->Val;
        {aRet = ((Ptr) GLmodtoc_4547); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4550() {    /* 102 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp->Val = rA1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4555() {    /* #:modtoc:bad-formed */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4556);
        (--rSp)->Val = rLit[996];
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[940];
        (--rSp)->Val = GIa2;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodtoc_146); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4556() {    /* 101 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodtoc;
        GIa1 = GInil;
        GIa2 = rLit[995];
        {aRet = (rLit[997] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4557() {    /* #:modtoc:get-push-fix */
   {    register Ptr aRet, *rLit, rA1, rA2, rA3, rBcons;
        rLit = GYmodtoc; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBcons = GIbcons;
        if ((long) rA1 < (long) rBcons) goto l_101;
        if (rA1->Val != rLit[346])      goto l_101;
        GIa4 = (rA1 + 1)->Val;
        if ((long) GIa4->Val < (long) rBcons)   goto l_101;
        rA3 = (rA1 + 1)->Val;
        rA3 = rA3->Val;
        if (rA3->Val != rLit[75])       goto l_101;
        rA2 = (rA1 + 1)->Val;
        rA2 = rA2->Val;
        rA2 = (rA2 + 1)->Val;
        if (rA2->Val >= GIbfloat)       goto l_101;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
l_101:
        rA2 = rA1;
        rA1 = rLit[998];
        {aRet = ((Ptr) GLmodtoc_4555); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLmodtoc_4558() {    /* #:modtoc:get-push-amper-or-reg */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rBcons;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
        if ((long) rA1 < (long) rBcons) goto l_101;
        if (rA1->Val != rLit[346])      goto l_101;
        rA4 = (rA1 + 1)->Val;
        if ((long) rA4->Val < (long) rBcons)    goto l_103;
        rA3 = (rA1 + 1)->Val;
        rA3 = rA3->Val;
        if (rA3->Val != rLit[234])      goto l_103;
        rA4 = (rA1 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        if (rA4->Val >= GIbfloat)       goto l_103;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[234];
        rA4 = (rA1 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (rA2)));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
l_103:
        rA4 = (rA1 + 1)->Val;
        rA4 = rA4->Val;
        if (rA4 == rLit[148])   goto l_108;
        if (rA4 == rLit[149])   goto l_108;
        if (rA4 != rLit[150])   goto l_106;
l_108:
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        {aRet = (rSp++)->Val; goto lRet;}
l_106:
        rA2 = rA1;
        rA1 = rLit[999];
        {aRet = ((Ptr) GLmodtoc_4555); goto lRet;}
l_101:
        rA2 = rA1;
        rA1 = rLit[999];
        {aRet = ((Ptr) GLmodtoc_4555); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4559() {    /* #:modtoc:get-move-amper-a1 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4, rBcons;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
        if ((long) rA1 < (long) rBcons) goto l_101;
        if (rA1->Val != rLit[310])      goto l_101;
        rA4 = (rA1 + 1)->Val;
        if ((long) rA4->Val < (long) rBcons)    goto l_101;
        rA3 = (rA1 + 1)->Val;
        rA3 = rA3->Val;
        if (rA3->Val != rLit[234])      goto l_101;
        rA4 = (rA1 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        if (rA4->Val >= GIbfloat)       goto l_101;
        rA4 = (rA1 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        if (rA4->Val != rLit[148])      goto l_101;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[234];
        rA4 = (rA1 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa2)));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
l_101:
        GIa2 = rA1;
        rA1 = rLit[1000];
        {aRet = ((Ptr) GLmodtoc_4555); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4554() {    /* #:modtoc:inline-callextern-work */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBcons;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 7)->Val;
        (rSp + 7)->Val = (rA4 + 1)->Val;
        rA4 = (rSp + 7)->Val;
        (rSp + 7)->Val = (rA4 + 1)->Val;
        (rSp + 1)->Val = rA4->Val;
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_101;
        rA4 = (rSp + 1)->Val;
        if (rA4->Val != rLit[310])      goto l_101;
        rA3 = (rA4 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        if (rA3->Val != rLit[151])      goto l_101;
        rA2 = (rA4 + 1)->Val;
        if ((long) rA2->Val < (long) rBcons)    goto l_101;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        if (rA4->Val != rLit[75])       goto l_101;
        rA4 = (rSp + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        if (rA4->Val >= GIbfloat)       goto l_101;
        rA4 = (rSp + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        (rSp + 6)->Val = rA4->Val;
        (rSp + 5)->Val = (rSp + 6)->Val;
        {aRet = ((Ptr) GLmodtoc_4560); goto lRet;}
l_101:
        rA2 = (rSp + 1)->Val;
        rA1 = rLit[1001];
        (--rSp)->Val = ((Ptr) GLmodtoc_4560);
        {aRet = ((Ptr) GLmodtoc_4555); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4560() {    /* 102 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = (GIsp + 6)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 2));
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) / (Fix) 2));
        {aRet = ((Ptr) GLmodtoc_4561); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4562() {    /* 103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa4;
        rA1 = (rSp + 8)->Val;
        (rSp + 8)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4564);
        {aRet = ((Ptr) GLmodtoc_4557); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4564() {    /* call_modtoc_4563 */
   {    register Ptr aRet, rSp, rA1, rA2, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        rA2 = (rSp + 5)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (rSp + 5)->Val = rA1;
        rA4 = rA1->Val;
        if (rA4 == (Ptr) 0)     {aRet = ((Ptr) GLmodtoc_4565); goto lRet;}
        if (rA4 == (Ptr) 1)     {aRet = ((Ptr) GLmodtoc_4565); goto lRet;}
        if (rA4 == (Ptr) 2)     {aRet = ((Ptr) GLmodtoc_4565); goto lRet;}
        if (rA4 == (Ptr) 3)     {aRet = ((Ptr) GLmodtoc_4565); goto lRet;}
        if (rA4 == (Ptr) 4)     {aRet = ((Ptr) GLmodtoc_4565); goto lRet;}
        if (rA4 == (Ptr) 5)     {aRet = ((Ptr) GLmodtoc_4565); goto lRet;}
        if (rA4 == (Ptr) 6)     {aRet = ((Ptr) GLmodtoc_4565); goto lRet;}
        if (rA4 == (Ptr) 7)     {aRet = ((Ptr) GLmodtoc_4565); goto lRet;}
        if (rA4 != (Ptr) 8)     goto l_105;
        {aRet = ((Ptr) GLmodtoc_4565); goto lRet;}
l_105:
        rA2 = (rSp + 2)->Val;
        rA1 = GYmodtoc[1002];
        (--rSp)->Val = ((Ptr) GLmodtoc_4565);
        {aRet = ((Ptr) GLmodtoc_4555); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4565() {    /* 106 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rSp + 6)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (rSp + 6)->Val = rA4;
        rA1 = (rSp + 8)->Val;
        GIa2 = rLit[1003];
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4567);
        {aRet = (rLit[168] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4567() {    /* call_modtoc_4566 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLmodtoc_4568); goto lRet;}
        rA1 = (rSp + 8)->Val;
        rA1 = (rA1 + 1)->Val;
        GIa2 = rLit[1004];
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4570);
        {aRet = (rLit[168] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4570() {    /* call_modtoc_4569 */
   {    register Ptr aRet, *rLit, rSp, rA2, rA3, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmodtoc_4568); goto lRet;}
        rA4 = (rSp + 8)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        if ((long) rA4->Val < (long) GIbcons)   {aRet = ((Ptr) GLmodtoc_4571); goto lRet;}
        rA3 = (rSp + 8)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        if (rA3->Val != rLit[310])      {aRet = ((Ptr) GLmodtoc_4571); goto lRet;}
        rA2 = (rSp + 8)->Val;
        rA2 = (rA2 + 1)->Val;
        rA2 = (rA2 + 1)->Val;
        rA2 = rA2->Val;
        rA2 = (rA2 + 1)->Val;
        rA2 = (rA2 + 1)->Val;
        if (rA2->Val != rLit[148])      {aRet = ((Ptr) GLmodtoc_4571); goto lRet;}
        rA4 = (rSp + 8)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        if (rA4 == rLit[149])   goto l_114;
        if (rA4 != rLit[150])   {aRet = ((Ptr) GLmodtoc_4572); goto lRet;}
l_114:
        (--rSp)->Val = ((Ptr) GLmodtoc_4573);
        (--rSp)->Val = rLit[885];
        rA3 = (rSp + 10)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        rA3 = (rA3 + 1)->Val;
        (--rSp)->Val = rA3->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4573() {    /* 115 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = (rSp + 5)->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 5)->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_4574); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4572() {    /* 112 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4575);
        (--rSp)->Val = GYmodtoc[885];
        rA1 = (rSp + 10)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        GIa2 = (rSp + 8)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4577);
        {aRet = ((Ptr) GLmodtoc_4559); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4577() {    /* call_modtoc_4576 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[119] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4575() {    /* 116 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = (rSp + 5)->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 5)->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_4574); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4574() {    /* 113 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 8)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        (rSp + 8)->Val = (rA4 + 1)->Val;
        {aRet = ((Ptr) GLmodtoc_4578); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4571() {    /* 110 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4579);
        (--rSp)->Val = rLit[885];
        (--rSp)->Val = rLit[148];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4579() {    /* 117 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        GIa2 = (rSp + 5)->Val;
        GIa1 = rA1; GIa4 = rA4; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 5)->Val = rA1;
        rA4 = (rSp + 8)->Val;
        rA4 = (rA4 + 1)->Val;
        (rSp + 8)->Val = (rA4 + 1)->Val;
        {aRet = ((Ptr) GLmodtoc_4578); goto lRet;}
  lRet: GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4568() {    /* 108 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (rSp + 8)->Val;
        (rSp + 8)->Val = (rA1 + 1)->Val;
        GIa2 = (rSp + 6)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4581);
        {aRet = ((Ptr) GLmodtoc_4558); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4581() {    /* call_modtoc_4580 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = (rSp + 5)->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 5)->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_4578); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4578() {    /* 109 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 6)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (rSp + 6)->Val = rA4;
        rA4 = (rSp++)->Val;
        {aRet = ((Ptr) GLmodtoc_4561); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4561() {    /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (GIa4) - 1;
                GIa4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLmodtoc_4562); goto lRet;}}
        rA1 = (rSp + 7)->Val;
        (rSp + 7)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4583);
        {aRet = ((Ptr) GLmodtoc_4557); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4583() {    /* call_modtoc_4582 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (rSp + 3)->Val = rA1;
        rA4 = rA1;
        if (rA4 == (Ptr) 0)     {aRet = ((Ptr) GLmodtoc_4584); goto lRet;}
        if (rA4 == (Ptr) 1)     {aRet = ((Ptr) GLmodtoc_4584); goto lRet;}
        if (rA4 == (Ptr) 2)     {aRet = ((Ptr) GLmodtoc_4584); goto lRet;}
        if (rA4 != (Ptr) 3)     goto l_118;
        {aRet = ((Ptr) GLmodtoc_4584); goto lRet;}
l_118:
        GIa2 = (rSp + 1)->Val;
        rA1 = GYmodtoc[1005];
        (--rSp)->Val = ((Ptr) GLmodtoc_4584);
        {aRet = ((Ptr) GLmodtoc_4555); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4584() {    /* 119 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rBcons;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rBcons = GIbcons;
        rA4 = (rSp + 7)->Val;
        (rSp + 7)->Val = (rA4 + 1)->Val;
        (rSp + 1)->Val = rA4->Val;
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_121;
        rA4 = (rSp + 1)->Val;
        if (rA4->Val != rLit[346])      goto l_121;
        GIa3 = (rA4 + 1)->Val;
        if ((long) GIa3->Val < (long) rBcons)   goto l_121;
        rA2 = (rA4 + 1)->Val;
        rA2 = rA2->Val;
        if (rA2->Val != rLit[240])      goto l_121;
        rA1 = (rA4 + 1)->Val;
        rA1 = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        if ((long) rA1->Val < (long) rBcons)    goto l_121;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        if (rA4->Val != rLit[199])      goto l_121;
        rA4 = (rSp + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        if ((long) rA4->Val < (long) rBcons)    goto l_121;
        rA4 = (rSp + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        if (rA4->Val != rLit[242])      goto l_121;
        rA4 = (rSp + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        (rSp + 2)->Val = rA4->Val;
        {aRet = ((Ptr) GLmodtoc_4585); goto lRet;}
l_121:
        rA2 = (rSp + 1)->Val;
        rA1 = rLit[1006];
        (--rSp)->Val = ((Ptr) GLmodtoc_4585);
        {aRet = ((Ptr) GLmodtoc_4555); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4585() {    /* 122 */
   {    register Ptr aRet, *rLit, rSp, rA2, rA4, rBcons;
        rLit = GYmodtoc; rSp = GIsp; rA2 = GIa2; rA4 = GIa4; rBcons = GIbcons;
        rA4 = (rSp + 7)->Val;
        (rSp + 7)->Val = (rA4 + 1)->Val;
        (rSp + 1)->Val = rA4->Val;
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_123;
        rA4 = (rSp + 1)->Val;
        if (rA4->Val != rLit[346])      goto l_123;
        GIa3 = (rA4 + 1)->Val;
        if ((long) GIa3->Val < (long) rBcons)   goto l_123;
        rA2 = (rA4 + 1)->Val;
        rA2 = rA2->Val;
        if (rA2->Val != rLit[237])      goto l_123;
        {aRet = ((Ptr) GLmodtoc_4586); goto lRet;}
l_123:
        rA2 = (rSp + 1)->Val;
        GIa1 = rLit[1007];
        (--rSp)->Val = ((Ptr) GLmodtoc_4586);
        {aRet = ((Ptr) GLmodtoc_4555); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4586() {    /* 124 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4587);
        (--rSp)->Val = rLit[601];
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa2 = (rSp + 8)->Val;
        rA1 = (rSp + 7)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 4;
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4587() {    /* 125 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (rSp + 1)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4588);
        (--rSp)->Val = rLit[1008];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[1009];
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[1010];
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 6;
        {aRet = ((Ptr) GLmodtoc_3); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4588() {    /* 126 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 7)->Val;
        GIa2 = (rSp + 1)->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 8;
        {aRet = (GYmodtoc[976] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4589() {    /* is-a-c-function */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        (--rSp)->Val = rA1;
        rA2 = rLit[1011]->Val;
        rA1 = llrt_call_memq (rA1, rA2, GIbcons, rNil);
        if (rA1 != rNil)        goto l_101;
        rA2 = rLit[1011]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[1011]->Val = rA1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_4590() {    /* break-function */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = rLit[1012]->Val;
        if (rA4->Val == rLit[398])      goto l_101;
        GIa2 = rA4;
        rA1 = rLit[398];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_cons (rA1, GIa2);
        rLit[1012]->Val = rA1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4591() {    /* goto-label */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_101;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, rNil);
        GIa2 = rLit[1012]->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rLit[1012]->Val = rA1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4592() {    /* #:modtoc:find-local-labels */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rA1;
        rA1 = rNil;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, rNil);
        rLit[1012]->Val = rA1;
        rLit[1011]->Val = rNil;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLmodtoc_4593); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4593() {    /* 101 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rSp->Val < (long) GIbcons)   goto l_102;
        rA1 = rSp->Val;
        rSp->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4593);
        {aRet = ((Ptr) GLmodtoc_4594); goto lRet;}
l_102:
        rSp += (Fix) 1;
        rA1 = GYmodtoc[1012]->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4596);
        {aRet = ((Ptr) GLmodtoc_4597); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4596() {    /* call_modtoc_4595 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rLit[1012]->Val = rA1;
        (--rSp)->Val = rA1->Val;
        rA2 = (rA1 + 1)->Val;
        rA1 = GInil;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa3 = rLit[1011]->Val;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_4598); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_4594() {    /* #:modopt:find-local */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLmodtoc_4599); goto lRet;}
        rA1 = rA1->Val;
        if (rA1 != GYmodtoc[602])       {aRet = ((Ptr) GLmodtoc_4600); goto lRet;}
        rA4 = rSp->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        {aRet = ((Ptr) GLmodtoc_4601); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4601() {    /* 105 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rSp->Val < (long) GIbcons)   goto l_106;
        rA1 = rSp->Val;
        rSp->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4601);
        {aRet = ((Ptr) GLmodtoc_4589); goto lRet;}
l_106:
        rA1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4600() {    /* 104 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYmodtoc; rA1 = GIa1;
        if (rA1 == rLit[277])   goto l_108;
        if (rA1 == rLit[280])   goto l_108;
        if (rA1 == rLit[276])   goto l_108;
        if (rA1 == rLit[340])   goto l_108;
        if (rA1 != rLit[342])   {aRet = ((Ptr) GLmodtoc_4602); goto lRet;}
l_108:
        (--GIsp)->Val = ((Ptr) GLmodtoc_4604);
        {aRet = ((Ptr) GLmodtoc_4590); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4604() {    /* call_modtoc_4603 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_4589); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4602() {    /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        if (rA1 != rLit[320])   goto l_109;
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_4589); goto lRet;}
l_109:
        if (rA1 != rLit[319])   goto l_110;
l_111:
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_4591); goto lRet;}
l_110:
        if (rA1 == rLit[327])   goto l_113;
        if (rA1 == rLit[334])   goto l_113;
        if (rA1 == rLit[316])   goto l_113;
        if (rA1 == rLit[318])   goto l_113;
        if (rA1 == rLit[664])   goto l_113;
        if (rA1 == rLit[667])   goto l_113;
        if (rA1 == rLit[671])   goto l_113;
        if (rA1 == rLit[672])   goto l_113;
        if (rA1 == rLit[673])   goto l_113;
        if (rA1 == rLit[388])   goto l_113;
        if (rA1 == rLit[390])   goto l_113;
        if (rA1 == rLit[396])   goto l_113;
        if (rA1 == rLit[693])   goto l_113;
        if (rA1 == rLit[689])   goto l_113;
        if (rA1 == rLit[690])   goto l_113;
        if (rA1 == rLit[691])   goto l_113;
        if (rA1 == rLit[688])   goto l_113;
        if (rA1 == rLit[692])   goto l_113;
        if (rA1 == rLit[375])   goto l_113;
        if (rA1 == rLit[377])   goto l_113;
        if (rA1 == rLit[378])   goto l_113;
        if (rA1 == rLit[379])   goto l_113;
        if (rA1 == rLit[380])   goto l_113;
        if (rA1 == rLit[381])   goto l_113;
        if (rA1 == rLit[382])   goto l_113;
        if (rA1 == rLit[384])   goto l_113;
        if (rA1 == rLit[386])   goto l_113;
        if (rA1 == rLit[387])   goto l_113;
        if (rA1 == rLit[427])   goto l_113;
        if (rA1 == rLit[430])   goto l_113;
        if (rA1 == rLit[502])   goto l_113;
        if (rA1 == rLit[503])   goto l_113;
        if (rA1 == rLit[526])   goto l_113;
        if (rA1 != rLit[527])   goto l_112;
l_113:
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_4591); goto lRet;}
l_112:
        if (rA1 == rLit[312])   goto l_115;
        if (rA1 == rLit[314])   goto l_115;
        if (rA1 == rLit[402])   goto l_115;
        if (rA1 == rLit[403])   goto l_115;
        if (rA1 == rLit[404])   goto l_115;
        if (rA1 == rLit[406])   goto l_115;
        if (rA1 == rLit[407])   goto l_115;
        if (rA1 == rLit[408])   goto l_115;
        if (rA1 == rLit[440])   goto l_115;
        if (rA1 == rLit[442])   goto l_115;
        if (rA1 == rLit[446])   goto l_115;
        if (rA1 == rLit[444])   goto l_115;
        if (rA1 == rLit[450])   goto l_115;
        if (rA1 == rLit[448])   goto l_115;
        if (rA1 == rLit[392])   goto l_115;
        if (rA1 == rLit[394])   goto l_115;
        if (rA1 == rLit[397])   goto l_115;
        if (rA1 == rLit[399])   goto l_115;
        if (rA1 == rLit[401])   goto l_115;
        if (rA1 == rLit[694])   goto l_115;
        if (rA1 != rLit[454])   goto l_114;
l_115:
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_4591); goto lRet;}
l_114:
        if (rA1 != rLit[544])   {aRet = ((Ptr) GLmodtoc_4605); goto lRet;}
l_117:
        GIa2 = rSp->Val;
        rA1 = (Ptr) 6;
        (--rSp)->Val = ((Ptr) GLmodtoc_4607);
        {aRet = (rLit[482] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4607() {    /* call_modtoc_4606 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_4591); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4605() {    /* 116 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (GIa1 != GYmodtoc[322])      {aRet = ((Ptr) GLmodtoc_4608); goto lRet;}
        rA4 = rSp->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        {aRet = ((Ptr) GLmodtoc_4609); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4609() {    /* 119 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rSp->Val < (long) GIbcons)   goto l_120;
        rA1 = rSp->Val;
        rSp->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4609);
        {aRet = ((Ptr) GLmodtoc_4610); goto lRet;}
l_120:
        rA1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4608() {    /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = rSp->Val;
        (--rSp)->Val = (GIa4 + 1)->Val;
        {aRet = ((Ptr) GLmodtoc_4611); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4611() {    /* 122 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rSp->Val < (long) GIbcons)   goto l_123;
        rA1 = rSp->Val;
        rSp->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4611);
        {aRet = ((Ptr) GLmodtoc_4610); goto lRet;}
l_123:
        rA1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4599() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        GIa2 = rLit[1012]->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rLit[1012]->Val = rA1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4597() {    /* #:modopt:rev-and-rem */
   {    register Ptr aRet;
        if ((long) GIa1 < (long) GIbcons)       { aRet = (GIsp++)->Val; goto lRet;}
        GIa2 = GInil;
        {aRet = ((Ptr) GLmodtoc_4612); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4612() {    /* #:modopt:rev-and-rem-aux */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
l_GLmodtoc_4612:
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA2 = rLit[1011]->Val;
        rA1 = rA1->Val;
        rA1 = llrt_call_memq (rA1, rA2, GIbcons, rNil);
        if (rA1 == rNil)        goto l_102;
        rA2 = (rSp + 1)->Val;
        rA1 = rLit[398];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (rSp + 1)->Val = rA1;
l_102:
        rA4 = rSp->Val;
        if ((rA4 + 1)->Val != rNil)     goto l_103;
        (rA4 + 1)->Val = (rSp + 1)->Val;
        rA1 = rA4;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        (--rSp)->Val = (rA4 + 1)->Val;
        (rA4 + 1)->Val = (rSp + 2)->Val;
        rA2 = rA4;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 2;
        goto l_GLmodtoc_4612;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4610() {    /* #:modopt:find-ats */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if ((long) rA1 < (long) GIbcons)        goto l_101;
        if (rA1->Val != GYmodtoc[237])  goto l_101;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        {aRet = ((Ptr) GLmodtoc_4589); goto lRet;}
l_101:
        rA1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4598() {    /* doit */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        if (rLit[1013]->Val == GInil)   {aRet = ((Ptr) GLmodtoc_4613); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_4614);
        (--rSp)->Val = rLit[1014];
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4614() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4615);
        (--rSp)->Val = (Ptr) 6;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4615() {    /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4616);
        (--rSp)->Val = rLit[1015];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4616() {    /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLmodtoc_4617); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4617() {    /* 106 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   goto l_107;
        (--rSp)->Val = ((Ptr) GLmodtoc_4617);
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
l_107:
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4618);
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 1;
        {aRet = (rLit[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4618() {    /* 109 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4619);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[188] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4619() {    /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4620);
        (--rSp)->Val = (Ptr) 6;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodtoc[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4620() {    /* 111 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4621);
        (--rSp)->Val = rLit[1016];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4621() {    /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLmodtoc_4622); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4622() {    /* 113 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   goto l_114;
        (--rSp)->Val = ((Ptr) GLmodtoc_4622);
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
l_114:
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4623);
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 1;
        {aRet = (rLit[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4623() {    /* 116 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4613);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[188] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4613() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 1)->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_4624); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4624() {    /* hack */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, rNil);
        GIa4 = rSp->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = (GIa4 + 1)->Val;
        (--rSp)->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_4625); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4625() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil, rBcons;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        if ((long) (rSp + 1)->Val < (long) rBcons)      {aRet = ((Ptr) GLmodtoc_4626); goto lRet;}
        rA4 = (rSp + 1)->Val;
        if ((long) rA4->Val >= (long) rBcons)   {aRet = ((Ptr) GLmodtoc_4627); goto lRet;}
        if (rA4->Val == rLit[398])      {aRet = ((Ptr) GLmodtoc_4627); goto lRet;}
        rA2 = (rSp + 4)->Val;
        rA1 = rA4->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 != rNil)        {aRet = ((Ptr) GLmodtoc_4627); goto lRet;}
        rA1 = (rSp + 1)->Val;
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rNil);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA1;
        rA2 = (rSp + 2)->Val;
        rA1 = rLit[398];
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4629);
        {aRet = (rLit[258] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4629() {    /* call_modtoc_4628 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        if (rA1 != rNil)        {aRet = ((Ptr) GLmodtoc_4630); goto lRet;}
        rA2 = (rSp + 2)->Val;
        rA1 = rLit[398];
        rA1 = llrt_call_memq (rA1, rA2, GIbcons, rNil);
        rA2 = rA1;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4632);
        {aRet = (rLit[258] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_4632() {    /* call_modtoc_4631 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       {aRet = ((Ptr) GLmodtoc_4630); goto lRet;}
        rA1 = (rSp + 2)->Val;
        GIa3 = rA1;
        GIa2 = (rSp + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4634);
        {aRet = ((Ptr) GLmodtoc_4635); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4634() {    /* call_modtoc_4633 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = (rSp + 3)->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 3)->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_4630); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4630() {    /* 106 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodtoc_4627); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4627() {    /* 104 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 1)->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        (rA4 + 1)->Val = (rSp + 1)->Val;
        (rSp + 1)->Val = rA4;
        rA4 = (rSp++)->Val;
        (rSp + 1)->Val = rA4;
        {aRet = ((Ptr) GLmodtoc_4625); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4626() {    /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (rLit[1013]->Val == GInil)   {aRet = ((Ptr) GLmodtoc_4636); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_4637);
        (--rSp)->Val = (Ptr) 6;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4637() {    /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4638);
        (--rSp)->Val = rLit[1017];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4638() {    /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLmodtoc_4639); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4639() {    /* 111 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   goto l_112;
        (--rSp)->Val = ((Ptr) GLmodtoc_4639);
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
l_112:
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4640);
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 1;
        {aRet = (rLit[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4640() {    /* 114 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4636);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[188] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4636() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4642);
        {aRet = ((Ptr) GLmodtoc_4643); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4642() {    /* call_modtoc_4641 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (rSp + 2)->Val = GIa1;
        if (rLit[1013]->Val == GInil)   {aRet = ((Ptr) GLmodtoc_4644); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_4645);
        (--rSp)->Val = (Ptr) 6;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4645() {    /* 118 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodtoc_4646);
        (--rSp)->Val = rLit[1018];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4646() {    /* 119 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLmodtoc_4647); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4647() {    /* 120 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodtoc; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   goto l_121;
        (--rSp)->Val = ((Ptr) GLmodtoc_4647);
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
l_121:
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4648);
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 1;
        {aRet = (rLit[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4648() {    /* 123 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodtoc_4644);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodtoc[188] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4644() {    /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4635() {    /* rechloc */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, rNil);
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_4649); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4649() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        if ((rSp + 4)->Val == GInil)    {aRet = ((Ptr) GLmodtoc_4650); goto lRet;}
        GIa4 = (rSp + 4)->Val;
        if (GIa4->Val == rLit[398])     {aRet = ((Ptr) GLmodtoc_4650); goto lRet;}
        rA1 = (rSp + 4)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4652);
        {aRet = (rLit[1019] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4652() {    /* call_modtoc_4651 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA1 == GInil)       goto l_103;
        rA1 = (rSp + 4)->Val;
        rA2 = (rSp + 1)->Val;
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        (rSp + 1)->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_4653); goto lRet;}
l_103:
        rA2 = (rSp + 4)->Val;
        rA2 = rA2->Val;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4655);
        {aRet = (GYmodtoc[168] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_4655() {    /* call_modtoc_4654 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmodtoc_4653); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_4656);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[1020] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4656() {    /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 2)->Val = GIa1;
        (rSp + 1)->Val = GInil;
        {aRet = ((Ptr) GLmodtoc_4653); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4653() {    /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp + 4)->Val;
        (rSp + 4)->Val = (GIa4 + 1)->Val;
        {aRet = ((Ptr) GLmodtoc_4649); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4650() {    /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (rLit[1013]->Val == GInil)   {aRet = ((Ptr) GLmodtoc_4657); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_4657);
        (--rSp)->Val = rLit[1021];
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[1022];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4657() {    /* 109 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GInil;
        {aRet = ((Ptr) GLmodtoc_4658); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4658() {    /* 111 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1;
        if ((rSp + 5)->Val == GInil)    {aRet = ((Ptr) GLmodtoc_4659); goto lRet;}
        GIa4 = (rSp + 5)->Val;
        if (GIa4->Val == rLit[398])     {aRet = ((Ptr) GLmodtoc_4659); goto lRet;}
        rA1 = (rSp + 5)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4661);
        {aRet = (rLit[1019] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4661() {    /* call_modtoc_4660 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA1 == GInil)       goto l_113;
        rA1 = (rSp + 5)->Val;
        rA2 = (rSp + 1)->Val;
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        (rSp + 1)->Val = rA1;
        {aRet = ((Ptr) GLmodtoc_4662); goto lRet;}
l_113:
        rA2 = (rSp + 5)->Val;
        rA2 = rA2->Val;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4664);
        {aRet = (GYmodtoc[168] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodtoc_4664() {    /* call_modtoc_4663 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmodtoc_4662); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_4665);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[1020] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4665() {    /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 2)->Val = GIa1;
        (rSp + 1)->Val = GInil;
        {aRet = ((Ptr) GLmodtoc_4662); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4662() {    /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp + 5)->Val;
        (rSp + 5)->Val = (GIa4 + 1)->Val;
        {aRet = ((Ptr) GLmodtoc_4658); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4659() {    /* 112 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodtoc; rSp = GIsp;
        if (rLit[1013]->Val == GInil)   {aRet = ((Ptr) GLmodtoc_4666); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodtoc_4666);
        (--rSp)->Val = rLit[1023];
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[1022];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[167] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4666() {    /* 119 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = (rSp + 2)->Val;
        rA1 = (rSp + 3)->Val;
        rSp += (Fix) 6;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4643() {    /* rechdep */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLmodtoc_4667); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodtoc_4667() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil, rBcons;
        rLit = GYmodtoc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        if ((long) (rSp + 1)->Val < (long) rBcons)      {aRet = ((Ptr) GLmodtoc_4668); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = rSp->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rLit[68];
l_105:
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_106;
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA2 = (rSp + 6)->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_assq (rA1, rA2, rBcons, rNil);
        rSp += (Fix) 1;
        rSp->Val = rA1;
        if (rA1 == rNil)        goto l_106;
        goto l_105;
l_106:
        rA4 = rSp->Val;
        rSp += (Fix) 2;
        if (rA4 == rNil)        goto l_103;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rNil);
        goto l_104;
l_103:
        rA1 = rNil;
l_104:
        rSp += (Fix) 1;
        rA2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodtoc_4670);
        {aRet = (rLit[120] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodtoc_4670() {    /* call_modtoc_4669 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLmodtoc_4667); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodtoc_4668() {    /* 102 */
   {    register Ptr aRet, rSp, rA1, rBcons;
        rSp = GIsp; rA1 = GIa1; rBcons = GIbcons;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLmodtoc_4671);
        rA1 = (rSp + 2)->Val;
        rA1 = llrt_call_length (rA1, rBcons);
        (--rSp)->Val = rA1;
        rA1 = (rSp + 2)->Val;
        rA1 = llrt_call_length (rA1, rBcons);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodtoc[1024] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodtoc_4671() {    /* 109 */
   {    register Ptr aRet, rSp, rA1, rA2, rNil, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        if (rA1 == rNil)        goto l_107;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rNil;
l_110:
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_111;
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA2 = rSp->Val;
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
        goto l_110;
l_111:
        rA1 = rSp->Val;
        rSp += (Fix) 4;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        {aRet = (rSp++)->Val; goto lRet;}
l_107:
        rA1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLmodtoc_4643); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GDmodtoc_4672() {    /* trace module-to-c */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmodtoc,111,285,289);
  lRet:  return (aRet);}}

static Ptr GDmodtoc_4673() {    /* trace #:modtoc:stats-global */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmodtoc,1025,285,287);
  lRet:  return (aRet);}}

static Ptr GDmodtoc_4674() {    /* trace #:modtoc:peephole-optimize */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmodtoc,954,285,289);
  lRet:  return (aRet);}}

static Ptr GDmodtoc_4675() {    /* trace #:modtoc:find-local-labels */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmodtoc,956,285,289);
  lRet:  return (aRet);}}

