/* GELL 15.26: source file for the module: "print" */
/*             translation done:           "Sat Oct   7 17 20:53:19 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "print.h" 

static Ptr GLprint_1(void) {	/* startmodule */
   {	register Ptr aRet;
	{aRet = ((Ptr) GXini_print); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXini_print(void) {	/* ini_print */
   {	register Ptr aRet;
	GIiexpld = GInil;
	GIobase = (Ptr) 10;
	GIprmdp = (Ptr) 100;
	GIprmlp = (Ptr) 2000;
	GIprmln = (Ptr) 2000;
	GIprmpk = (Ptr) 50;
	GInbleft = (Ptr) 0;
	GInbrig = (Ptr) 78;
	GImaxpocou = GInbrig;
	GIa1 = (Ptr) 256;
	GIa2 = (Ptr) 0;
	(--GIsp)->Val = ((Ptr) GLprint_2);
	{aRet = ((Ptr) GXmakestrg); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_2(void) {	/* ret_call_makestrg_1 */
   {	register Ptr aRet;
	GIbufpn = GIa1;
	{ llrt_inisymb ((Ptr) 3, (Ptr) "eol", ((Ptr) GXeol), (Ptr) &GMeol, (Ptr) GFeol);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "flush", ((Ptr) GXllfflush), (Ptr) &GMllfflush, (Ptr) GFllfflush);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "pratom", ((Ptr) GXupratom), (Ptr) &GMupratom, (Ptr) GFupratom);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "prin", ((Ptr) GXprin), (Ptr) &GMprin, (Ptr) GFprin);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "print", ((Ptr) GXprint), (Ptr) &GMprint, (Ptr) GFprint);}
	{ llrt_inisymb ((Ptr) 9, (Ptr) "prinflush", ((Ptr) GXprinflush), (Ptr) &GMprinflush, (Ptr) GFprinflush);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "terpri", ((Ptr) GXterpri), (Ptr) &GMterpri, (Ptr) GFterpri);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "princh", ((Ptr) GXprinch), (Ptr) &GMprinch, (Ptr) GFprinch);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "princn", ((Ptr) GXprincod), (Ptr) &GMprincod, (Ptr) GFprincod);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "ptype", ((Ptr) GXfptype), (Ptr) &GMfptype, (Ptr) GFfptype);}
	{ llrt_inisymb ((Ptr) 9, (Ptr) "printline", ((Ptr) GXprline), (Ptr) &GMprline, (Ptr) GFprline);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "printlevel", ((Ptr) GXprlevel), (Ptr) &GMprlevel, (Ptr) GFprlevel);}
	{ llrt_inisymb ((Ptr) 11, (Ptr) "printlength", ((Ptr) GXprlength), (Ptr) &GMprlength, (Ptr) GFprlength);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "obase", ((Ptr) GXfobase), (Ptr) &GMfobase, (Ptr) GFfobase);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "lmargin", ((Ptr) GXlmargin), (Ptr) &GMlmargin, (Ptr) GFlmargin);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "rmargin", ((Ptr) GXrmargin), (Ptr) &GMrmargin, (Ptr) GFrmargin);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "outpos", ((Ptr) GXoutpos), (Ptr) &GMoutpos, (Ptr) GFoutpos);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "outbuf", ((Ptr) GXoutbuf), (Ptr) &GMoutbuf, (Ptr) GFoutbuf);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "explode", ((Ptr) GXexplode), (Ptr) &GMexplode, (Ptr) GFexplode);}
	{ llrt_inisymb ((Ptr) 9, (Ptr) "explodech", ((Ptr) GXexplodech), (Ptr) &GMexplodech, (Ptr) GFexplodech);}
	GIcpkgc = GMllsystem;
	{ llrt_inicst ((Ptr) 14, (Ptr) "print-for-read", (Ptr) &GMstatpr);}
	GIa1->Val = GInil;
	{ llrt_inicst ((Ptr) 15, (Ptr) "print-case-flag", (Ptr) &GMstatpc);}
	GIa1->Val = GInil;
	{ llrt_inicst ((Ptr) 18, (Ptr) "print-package-flag", (Ptr) &GMstatpk);}
	GIa1->Val = GMt;
	GIcpkgc = GInil;
	{ llrt_inicst ((Ptr) 3, (Ptr) "#<>", (Ptr) &GMudprs);}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_3(void) {	/* prtrue */
   {	register Ptr aRet;
	GIa1 = GMt;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXu_print(void) {	/* u_print */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_4);
	{aRet = ((Ptr) GXprobj); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_4(void) {	/* ret_call_probj_2 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GXpopj0);
	{aRet = ((Ptr) GLprint_5); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXflulin(void) {	/* flulin */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GIa2;
	(--rSp)->Val = GIa3;
	(--rSp)->Val = GIa4;
	GIa1 = GMllfflush;
	GIa2 = GInil;
	(--rSp)->Val = ((Ptr) GLprint_6);
	{aRet = ((Ptr) GXitsoft); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_6(void) {	/* ret_call_itsoft_4 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa4 = (rSp++)->Val;
	GIa3 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_5(void) {	/* fullin */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GIa2;
	(--rSp)->Val = GIa3;
	(--rSp)->Val = GIa4;
	GIa1 = GMeol;
	GIa2 = GInil;
	(--rSp)->Val = ((Ptr) GLprint_7);
	{aRet = ((Ptr) GXitsoft); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_7(void) {	/* ret_call_itsoft_5 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa4 = (rSp++)->Val;
	GIa3 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXeol(void) {	/* eol */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_8);
	{aRet = ((Ptr) GLprint_9); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_8(void) {	/* ret_call_outlin_6 */
   {	register Ptr aRet;
	GIa1 = GInil;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllfflush(void) {	/* flush */
   {	register Ptr aRet, rSp, rA2;
	rSp = GIsp; rA2 = GIa2;
	if (GIiexpld != GInil)	{aRet = ((Ptr) GLprint_3); goto lRet;}
	rA2 = GIpocour;
	if (rA2 == (Ptr) 0)	{aRet = ((Ptr) GLprint_3); goto lRet;}
	if ((Fix) (GIostream) < (Fix) (GImaxchan))	{aRet = ((Ptr) GLprint_10); goto lRet;}
l_fflush0:
	GIa1 = GIbufout;
	(--rSp)->Val = rA2;
	GIpocour = (Ptr) 0;
	(--rSp)->Val = ((Ptr) GLprint_11);
	{aRet = ((Ptr) GXtystrg); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLprint_11(void) {	/* ret_call_tystrg_7 */
   {	register Ptr aRet;
	GIpocour = (GIsp++)->Val;
	{aRet = ((Ptr) GLprint_12); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_10(void) {	/* fflush1 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	rA1 = GIpocour;
	GIa3 = (GIcuroutch->Val + 2 + (Fix) 1)->Val;
	if (GIa3 == (Ptr) 2)	goto l_fflush2;
	GIa2 = (Ptr) llrt_outfl(GIostream,rA1,GIbufout->Val + 2);
	{aRet = ((Ptr) GLprint_12); goto lRet;}
l_fflush2:
	GIa2 = (Ptr) llrt_outfl(GIostream,rA1,GIbufout->Val + 2);
	{aRet = ((Ptr) GLprint_12); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLprint_12(void) {	/* fflush3 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_13);
	{aRet = ((Ptr) GLprint_14); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_13(void) {	/* ret_call_outli2_8 */
   {	register Ptr aRet;
	GIpocour = (Ptr) 0;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_9(void) {	/* outlin */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if (GIiexpld != GInil)	{aRet = ((Ptr) GLprint_15); goto lRet;}
	if ((Fix) (GIostream) < (Fix) (GImaxchan))	{aRet = ((Ptr) GLprint_16); goto lRet;}
	GIa1 = GIbufout;
	GIa2 = GIpocour;
	(--rSp)->Val = GIa2;
	GIpocour = (Ptr) 0;
	(--rSp)->Val = ((Ptr) GLprint_17);
	{aRet = ((Ptr) GXtystrg); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_17(void) {	/* ret_call_tystrg_9 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_18);
	{aRet = ((Ptr) GXtynewln); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_18(void) {	/* ret_call_tynewln_10 */
   {	register Ptr aRet;
	GIpocour = (GIsp++)->Val;
	{aRet = ((Ptr) GLprint_14); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_16(void) {	/* outli1 */
   {	register Ptr aRet;
	GIa3 = (GIcuroutch->Val + 2 + (Fix) 1)->Val;
	if (GIa3 == (Ptr) 2)	goto l_outli11;
	GIa2 = (Ptr) llrt_outfl(GIostream,GIpocour,GIbufout->Val + 2);
	{aRet = ((Ptr) GLprint_14); goto lRet;}
l_outli11:
	GIa2 = (Ptr) llrt_outf(GIostream,GIpocour,GIbufout->Val + 2);
	{aRet = ((Ptr) GLprint_14); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_14(void) {	/* outli2 */
   {	register Ptr aRet, rSp, rA1, rA2;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
	rA2 = GIpocour;
	rA1 = GIbufout;
	goto l_outli4;
l_outli3:
	*((char *) (rA1->Val + 2) + (Fix) (rA2)) = (char) (Ptr) 32;
l_outli4:
	{register Fix aux;
		aux = (Fix) (rA2) - 1;
		rA2 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_outli3;}
	GIpocour = GInbleft;
l_outlret:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLprint_19(void) {	/* chklp */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	if (GImaxpocou != GInbrig)	{aRet = ((Ptr) GXflulin); goto lRet;}
	if (GIprclp != (Ptr) 1)	goto l_chklp1;
	rA1 = GIpocour;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 3));
	rA2 = (Ptr) 46;
	*((char *) (GIbufout->Val + 2) + (Fix) (rA1)) = (char) rA2;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (1)));
	*((char *) (GIbufout->Val + 2) + (Fix) (rA1)) = (char) rA2;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (1)));
	*((char *) (GIbufout->Val + 2) + (Fix) (rA1)) = (char) rA2;
	{aRet = ((Ptr) GLprint_20); goto lRet;}
l_chklp1:
	GIprclp = (Ptr) ((UFix) ((Fix) (GIprclp) - (Fix) (1)));
	{aRet = ((Ptr) GLprint_5); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXoutch(void) {	/* outch */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if (GIiexpld != GInil)	{aRet = ((Ptr) GLprint_21); goto lRet;}
	(--rSp)->Val = rA1;
	rA1 = GIpocour;
	if ((Fix) (rA1) < (Fix) (GImaxpocou))	{aRet = ((Ptr) GLprint_22); goto lRet;}
	(--rSp)->Val = ((Ptr) GLprint_23);
	{aRet = ((Ptr) GLprint_19); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLprint_23(void) {	/* ret_call_chklp_11 */
   {	register Ptr aRet;
	GIa1 = GIpocour;
	{aRet = ((Ptr) GLprint_22); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_22(void) {	/* outch1 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	*((char *) (GIbufout->Val + 2) + (Fix) (GIa1)) = (char) GIa4;
	GIpocour = (Ptr) ((UFix) ((Fix) (GIpocour) + (Fix) (1)));
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_24(void) {	/* outsp */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if (GIiexpld != GInil)	{aRet = ((Ptr) GLprint_15); goto lRet;}
	(--GIsp)->Val = rA1;
	rA1 = GIpocour;
	if ((Fix) (rA1) >= (Fix) (GImaxpocou))	{aRet = ((Ptr) GLprint_25); goto lRet;}
	{aRet = ((Ptr) GLprint_26); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLprint_26(void) {	/* outsp0 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	*((char *) (GIbufout->Val + 2) + (Fix) (GIa1)) = (char) (Ptr) 32;
	GIpocour = (Ptr) ((UFix) ((Fix) (GIpocour) + (Fix) (1)));
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_25(void) {	/* outsp1 */
   {	register Ptr aRet;
	if (GImaxpocou != GInbrig)	{aRet = ((Ptr) GLprint_27); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLprint_28);
	{aRet = ((Ptr) GLprint_19); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_28(void) {	/* ret_call_chklp_12 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_27(void) {	/* outsp2 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_29);
	{aRet = ((Ptr) GLprint_19); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_29(void) {	/* ret_call_chklp_13 */
   {	register Ptr aRet;
	GIa1 = GIpocour;
	{aRet = ((Ptr) GLprint_26); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_30(void) {	/* outshrp */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if (GIiexpld != GInil)	{aRet = ((Ptr) GLprint_31); goto lRet;}
	(--rSp)->Val = rA1;
	rA1 = GIpocour;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (1)));
	if ((Fix) (rA1) < (Fix) (GImaxpocou))	{aRet = ((Ptr) GLprint_32); goto lRet;}
	(--rSp)->Val = ((Ptr) GLprint_33);
	{aRet = ((Ptr) GLprint_19); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLprint_33(void) {	/* ret_call_chklp_14 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	rA1 = GIpocour;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (1)));
	{aRet = ((Ptr) GLprint_32); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLprint_32(void) {	/* outshrp1 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	*((char *) (GIbufout->Val + 2) + (Fix) (rA1)) = (char) GIa4;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (1)));
	*((char *) (GIbufout->Val + 2) + (Fix) (rA1)) = (char) (Ptr) 35;
	GIpocour = (Ptr) ((UFix) ((Fix) (GIpocour) + (Fix) 2));
	rA1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLprint_34(void) {	/* outet */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	rA2 = GIprcln;
	if ((Fix) (rA2) < (Fix) 0)	goto l_outet1;
	if (rA2 == (Ptr) 1)	{aRet = ((Ptr) GLprint_35); goto lRet;}
l_outet1:
	GIprcln = (Ptr) ((UFix) ((Fix) (GIprcln) - (Fix) (1)));
	GIa4 = (Ptr) 38;
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLprint_35(void) {	/* outddd */
   {	register Ptr aRet;
	GIa4 = (Ptr) 46;
	(--GIsp)->Val = ((Ptr) GLprint_36);
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_36(void) {	/* ret_call_outch_15 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_37);
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_37(void) {	/* ret_call_outch_16 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_20);
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_38(void) {	/* pratom */
   {	register Ptr aRet, rSp, rA2;
	rSp = GIsp; rA2 = GIa2;
	rA2 = GIprcln;
	if ((Fix) (rA2) < (Fix) 0)	goto l_pratom1;
	if (rA2 == (Ptr) 1)	{aRet = ((Ptr) GLprint_35); goto lRet;}
	GIprcln = (Ptr) ((UFix) ((Fix) (GIprcln) - (Fix) (1)));
l_pratom1:
	(--rSp)->Val = GIa1;
	(--rSp)->Val = ((Ptr) GLprint_39);
	{aRet = ((Ptr) GXgettype); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLprint_39(void) {	/* ret_call_gettype_18 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if ((rA1 < GIbsymb) || (rA1 >= GIbcons))	{aRet = ((Ptr) GLprint_40); goto lRet;}
	GIa2 = GMprin;
	GIa3 = GInil;
	(--GIsp)->Val = ((Ptr) GLprint_41);
	{aRet = ((Ptr) GXgetfns); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_41(void) {	/* ret_call_getfns_19 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if (rA1 == GInil)	{aRet = ((Ptr) GLprint_40); goto lRet;}
	if (rA1 == GMprin)	{aRet = ((Ptr) GLprint_40); goto lRet;}
	GIa4 = (Ptr) 1;
	{aRet = ((Ptr) GXffuncall); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_40(void) {	/* pratom2 */
   {	register Ptr aRet;
	GIa1 = (GIsp++)->Val;
	{aRet = ((Ptr) GXupratom); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXupratom(void) {	/* pratom */
   {	register Ptr aRet, rA1, rA3, rNil, rBsymb;
	rA1 = GIa1; rA3 = GIa3; rNil = GInil; rBsymb = GIbsymb;
	if ((rA1 >= rBsymb) && (rA1 < GIbcons))	goto l_prsympk;
	if (rA1 < GIbfloat)	{aRet = ((Ptr) GLprint_42); goto lRet;}
	if (llrt_floatp (rA1) != 0) 
	{aRet = ((Ptr) GLprint_43); goto lRet;}
	if ((rA1 >= GIbstrg) && (rA1 < rBsymb))	{aRet = ((Ptr) GLprint_44); goto lRet;}
	{aRet = ((Ptr) GLprint_45); goto lRet;}
l_prsympk:
	if (rA1 == rNil)	{aRet = ((Ptr) GLprint_46); goto lRet;}
	GIprcpk = (Ptr) 0;
	rA3 = GMstatpk;
	if (rA3->Val == rNil)	{aRet = ((Ptr) GLprint_47); goto lRet;}
l_prsympk0:
	rA3 = (rA1 + 3)->Val;
	if (rA3 == rNil)	{aRet = ((Ptr) GLprint_47); goto lRet;}
	{aRet = ((Ptr) GLprint_48); goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

static Ptr GLprint_48(void) {	/* prsympk1 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = rA1;
	rA1 = (rA1 + 3)->Val;
	(--rSp)->Val = ((Ptr) GLprint_49);
	{aRet = ((Ptr) GLprint_50); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLprint_49(void) {	/* ret_call_prpkg_20 */
   {	register Ptr aRet;
	GIa1 = (GIsp++)->Val;
	{aRet = ((Ptr) GLprint_47); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_50(void) {	/* prpkg */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIprcpk;
	GIa3 = ((Ptr) GLprint_51);
	(--rSp)->Val = ((Ptr) GLprint_52);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_52(void) {	/* ret_call_sysprot_21 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	GIprcpk = (rSp++)->Val;
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_51(void) {	/* prpkg0 */
   {	register Ptr aRet, rA1, rA4;
	rA1 = GIa1; rA4 = GIa4;
	rA4 = GMstatpk;
	if (rA4->Val != (Ptr) 0)	goto l_prpkg1;
	rA4 = GMsyscol;
	if (rA1 != rA4->Val)	goto l_prpkg1;
	rA4 = (Ptr) 58;
	{aRet = ((Ptr) GXoutch); goto lRet;}
l_prpkg1:
	GIprcpk = (Ptr) ((UFix) ((Fix) (GIprcpk) + (Fix) (1)));
	if (GIprmpk == (Ptr) 0)	goto l_prpkg2;
	if ((Fix) (GIprcpk) <= (Fix) (GIprmpk))	goto l_prpkg2;
	{aRet = ((Ptr) GLprint_35); goto lRet;}
l_prpkg2:
	if ((rA1 >= GIbsymb) && (rA1 < GIbcons))	{aRet = ((Ptr) GLprint_53); goto lRet;}
	rA4 = (Ptr) 58;
	(--GIsp)->Val = ((Ptr) GLprint_54);
	{aRet = ((Ptr) GLprint_30); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLprint_54(void) {	/* ret_call_outshrp_22 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_55);
	{aRet = ((Ptr) GLprint_56); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_55(void) {	/* ret_call_probj0_23 */
   {	register Ptr aRet;
	GIa4 = (Ptr) 58;
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_53(void) {	/* prpkgsym */
   {	register Ptr aRet;
	if ((GIa1 + 3)->Val != GInil)	{aRet = ((Ptr) GLprint_48); goto lRet;}
	GIa4 = (Ptr) 58;
	(--GIsp)->Val = ((Ptr) GLprint_47);
	{aRet = ((Ptr) GLprint_30); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_47(void) {	/* prsymb */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	rA2 = GMstatpr;
	rA2 = rA2->Val;
	if (rA2 == GInil)	{aRet = ((Ptr) GLprint_57); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLprint_58);
	{aRet = ((Ptr) GLprint_59); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLprint_58(void) {	/* ret_call_chksymb_24 */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	if (rA2 == GInil)	{aRet = ((Ptr) GLprint_57); goto lRet;}
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) 2));
	if (GIprcpk == (Ptr) 0)	goto l_prat0;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (1)));
l_prat0:
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (GIpocour)));
	if ((Fix) (rA2) <= (Fix) (GImaxpocou))	{aRet = ((Ptr) GLprint_60); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLprint_60);
	{aRet = ((Ptr) GLprint_19); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLprint_60(void) {	/* prat1 */
   {	register Ptr aRet;
	GIa4 = (Ptr) 124;
	(--GIsp)->Val = ((Ptr) GLprint_61);
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_61(void) {	/* ret_call_outch_26 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_62);
	{aRet = ((Ptr) GXstrgsymb); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_62(void) {	/* ret_call_strgsymb_27 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIsavea1 = rA1;
	GIa2 = (rA1->Val + 1)->Val;
	GIa3 = (Ptr) 0;
	{aRet = ((Ptr) GLprint_63); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_64(void) {	/* prat10 */
   {	register Ptr aRet;
	GIa4 = (Ptr) ((unsigned char) *(((char *) (GIsavea1->Val + 2)) + (Fix) (GIa3)));
	GIa1 = (Ptr) ((unsigned char) *(((char *) (GItabch->Val + 2)) + (Fix) (GIa4)));
	if (GIa1 != (Ptr) 13)	{aRet = ((Ptr) GLprint_65); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLprint_65);
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_65(void) {	/* prat11 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_66);
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_66(void) {	/* ret_call_outch_29 */
   {	register Ptr aRet;
	GIa3 = (Ptr) ((UFix) ((Fix) (GIa3) + (Fix) (1)));
	{aRet = ((Ptr) GLprint_63); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_63(void) {	/* prat12 */
   {	register Ptr aRet;
	if (GIa3 != GIa2)	{aRet = ((Ptr) GLprint_64); goto lRet;}
	GIa4 = (Ptr) 124;
	if (GIprcpk == (Ptr) 0)	{aRet = ((Ptr) GXoutch); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLprint_67);
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_67(void) {	/* ret_call_outch_30 */
   {	register Ptr aRet;
	GIa4 = (Ptr) 58;
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_57(void) {	/* prat2 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_68);
	{aRet = ((Ptr) GXstrgsymb); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_68(void) {	/* ret_call_strgsymb_31 */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	GIa3 = (GIa1->Val + 1)->Val;
	rA2 = GIa3;
	if (GIprcpk == (Ptr) 0)	goto l_prat21;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (1)));
l_prat21:
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (GIpocour)));
	if ((Fix) (rA2) <= (Fix) (GImaxpocou))	{aRet = ((Ptr) GLprint_69); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLprint_69);
	{aRet = ((Ptr) GLprint_19); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLprint_69(void) {	/* prat3 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	GIa2 = (Ptr) 0;
	rA4 = GMstatpc;
	rA4 = rA4->Val;
	if (rA4 != GInil)	{aRet = ((Ptr) GLprint_70); goto lRet;}
	{aRet = ((Ptr) GLprint_71); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLprint_72(void) {	/* prat5 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	rA4 = (Ptr) ((unsigned char) *(((char *) (GIa1->Val + 2)) + (Fix) (GIa2)));
	if ((Fix) (rA4) < (Fix) 97)	goto l_prat6;
	if ((Fix) (rA4) > (Fix) 122)	goto l_prat6;
	rA4 = (Ptr) ((Fix) (rA4) - 32);
l_prat6:
	(--GIsp)->Val = ((Ptr) GLprint_73);
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLprint_73(void) {	/* ret_call_outch_33 */
   {	register Ptr aRet;
	GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) (1)));
	{aRet = ((Ptr) GLprint_70); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_70(void) {	/* prat8 */
   {	register Ptr aRet;
	{register Fix aux;
		aux = (Fix) (GIa3) - 1;
		GIa3 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	{aRet = ((Ptr) GLprint_72); goto lRet;}}
	if (GIprcpk == (Ptr) 0)	{ aRet = (GIsp++)->Val; goto lRet;}
	GIa4 = (Ptr) 58;
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_46(void) {	/* pratnil */
   {	register Ptr aRet;
	GIa4 = (Ptr) 40;
	(--GIsp)->Val = ((Ptr) GLprint_74);
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_74(void) {	/* ret_call_outch_34 */
   {	register Ptr aRet;
	GIa4 = (Ptr) 41;
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_59(void) {	/* chksymb */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = ((Ptr) GLprint_75);
	{aRet = ((Ptr) GXstrgsymb); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_75(void) {	/* ret_call_strgsymb_35 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
	rA2 = (rA1->Val + 1)->Val;
	if (rA2 == (Ptr) 0)	goto l_chksymb9;
	(--rSp)->Val = rA2;
	rA3 = rNil;
	goto l_chksymb3;
l_chksymb0:
	rA4 = (Ptr) ((unsigned char) *(((char *) (rA1->Val + 2)) + (Fix) (rA2)));
	if (rA4 == (Ptr) 43)	goto l_chksymb2;
	if (rA4 == (Ptr) 45)	goto l_chksymb2;
	if (rA4 == (Ptr) 101)	goto l_chksymb2;
	if (rA4 == (Ptr) 69)	goto l_chksymb2;
	if ((Fix) (rA4) < (Fix) 48)	goto l_chksymb1;
	if ((Fix) (rA4) <= (Fix) 57)	goto l_chksymb2;
l_chksymb1:
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (1)));
l_chksymb2:
	rA4 = (Ptr) ((unsigned char) *(((char *) (GItabch->Val + 2)) + (Fix) (rA4)));
	if (rA4 != (Ptr) 12)	goto l_chksymb5;
l_chksymb3:
	{register Fix aux;
		aux = (Fix) (rA2) - 1;
		rA2 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_chksymb0;}
	if (rA3 == rNil)	goto l_chksymb4;
	rSp += (Fix) 1;
	rA2 = rNil;
	rA1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
l_chksymb4:
	rA2 = (rSp++)->Val;
	rA1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
l_chksymb5:
	rA3 = rA2;
	rA2 = (rSp++)->Val;
	goto l_chksymb7;
l_chksymb6:
	rA4 = (Ptr) ((unsigned char) *(((char *) (rA1->Val + 2)) + (Fix) (rA3)));
	rA4 = (Ptr) ((unsigned char) *(((char *) (GItabch->Val + 2)) + (Fix) (rA4)));
l_chksymb7:
	if (rA4 != (Ptr) 13)	goto l_chksymb8;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (1)));
l_chksymb8:
	{register Fix aux;
		aux = (Fix) (rA3) - 1;
		rA3 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_chksymb6;}
l_chksymb9:
	rA1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLprint_76(void) {	/* chkstrg */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	rA3 = (rA1->Val + 1)->Val;
	rA2 = rA3;
	if (rA3 == (Ptr) 0)	{ aRet = (rSp++)->Val; goto lRet;}
	goto l_chkstrg2;
l_chkstrg1:
	rA4 = (Ptr) ((unsigned char) *(((char *) (rA1->Val + 2)) + (Fix) (rA3)));
	rA4 = (Ptr) ((unsigned char) *(((char *) (GItabch->Val + 2)) + (Fix) (rA4)));
	if (rA4 != (Ptr) 11)	goto l_chkstrg2;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (1)));
l_chkstrg2:
	{register Fix aux;
		aux = (Fix) (rA3) - 1;
		rA3 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_chkstrg1;}
l_chkstrg3:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLprint_77(void) {	/* prtypvec */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if ((rA1 + 1)->Val == GMvector)	{ aRet = (rSp++)->Val; goto lRet;}
	if ((rA1 + 1)->Val == GMstring)	{ aRet = (rSp++)->Val; goto lRet;}
	(--rSp)->Val = rA1;
	rA1 = (rA1 + 1)->Val;
	(--rSp)->Val = ((Ptr) GLprint_78);
	{aRet = ((Ptr) GLprint_50); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLprint_78(void) {	/* ret_call_prpkg_36 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_44(void) {	/* prstrg */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_79);
	{aRet = ((Ptr) GLprint_77); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_79(void) {	/* ret_call_prtypvec_37 */
   {	register Ptr aRet, rA2, rNil;
	rA2 = GIa2; rNil = GInil;
	rA2 = GMstatpr;
	rA2 = rA2->Val;
	if (rA2 != rNil)	{aRet = ((Ptr) GLprint_80); goto lRet;}
	GIa3 = (GIa1->Val + 1)->Val;
	rA2 = GIa3;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (GIpocour)));
	if ((Fix) (rA2) <= (Fix) (GImaxpocou))	{aRet = ((Ptr) GLprint_71); goto lRet;}
	if (GIiexpld != rNil)	{aRet = ((Ptr) GLprint_71); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLprint_71);
	{aRet = ((Ptr) GLprint_19); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLprint_71(void) {	/* prathb */
   {	register Ptr aRet;
	GIa2 = (Ptr) 0;
	{aRet = ((Ptr) GLprint_81); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_82(void) {	/* prathb2 */
   {	register Ptr aRet;
	GIa4 = (Ptr) ((unsigned char) *(((char *) (GIa1->Val + 2)) + (Fix) (GIa2)));
	(--GIsp)->Val = ((Ptr) GLprint_83);
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_83(void) {	/* ret_call_outch_39 */
   {	register Ptr aRet;
	GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) (1)));
	{aRet = ((Ptr) GLprint_81); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_81(void) {	/* prathb4 */
   {	register Ptr aRet;
	{register Fix aux;
		aux = (Fix) (GIa3) - 1;
		GIa3 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	{aRet = ((Ptr) GLprint_82); goto lRet;}}
	if (GIprcpk == (Ptr) 0)	{ aRet = (GIsp++)->Val; goto lRet;}
	GIa4 = (Ptr) 58;
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_80(void) {	/* prstr5 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_84);
	{aRet = ((Ptr) GLprint_76); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_84(void) {	/* ret_call_chkstrg_40 */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) 2));
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (GIpocour)));
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) 2));
	if ((Fix) (rA2) <= (Fix) (GImaxpocou))	{aRet = ((Ptr) GLprint_85); goto lRet;}
	if (GIiexpld != GInil)	{aRet = ((Ptr) GLprint_44); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLprint_85);
	{aRet = ((Ptr) GLprint_19); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLprint_85(void) {	/* prstr6 */
   {	register Ptr aRet;
	GIa4 = (Ptr) 34;
	(--GIsp)->Val = ((Ptr) GLprint_86);
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_86(void) {	/* ret_call_outch_42 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIsavea1 = rA1;
	rA1 = (rA1->Val + 1)->Val;
	GIa3 = (Ptr) 0;
	{aRet = ((Ptr) GLprint_87); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLprint_87(void) {	/* prstr60 */
   {	register Ptr aRet, rA3;
	rA3 = GIa3;
	if (rA3 == GIa1)	{aRet = ((Ptr) GLprint_88); goto lRet;}
	GIa4 = (Ptr) ((unsigned char) *(((char *) (GIsavea1->Val + 2)) + (Fix) (rA3)));
	GIa2 = (Ptr) ((unsigned char) *(((char *) (GItabch->Val + 2)) + (Fix) (GIa4)));
	if (GIa2 != (Ptr) 11)	{aRet = ((Ptr) GLprint_89); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLprint_89);
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_89(void) {	/* prstr61 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_90);
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_90(void) {	/* ret_call_outch_44 */
   {	register Ptr aRet;
	GIa3 = (Ptr) ((UFix) ((Fix) (GIa3) + (Fix) (1)));
	{aRet = ((Ptr) GLprint_87); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_88(void) {	/* prstr63 */
   {	register Ptr aRet;
	GIa4 = (Ptr) 34;
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_45(void) {	/* prvect */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	rA2 = GIprcdp;
	if ((Fix) (rA2) <= (Fix) 0)	goto l_prvect11;
	if (rA2 != (Ptr) 1)	goto l_prvect1;
	{aRet = ((Ptr) GLprint_34); goto lRet;}
l_prvect1:
	GIprcdp = (Ptr) ((UFix) ((Fix) (GIprcdp) - (Fix) (1)));
l_prvect11:
	(--GIsp)->Val = ((Ptr) GLprint_91);
	{aRet = ((Ptr) GLprint_77); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLprint_91(void) {	/* prvectv */
   {	register Ptr aRet;
	GIa4 = (Ptr) 91;
	(--GIsp)->Val = ((Ptr) GLprint_92);
	{aRet = ((Ptr) GLprint_30); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_92(void) {	/* ret_call_outshrp_46 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_93);
	{aRet = ((Ptr) GLprint_94); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_93(void) {	/* ret_call_prvectin_47 */
   {	register Ptr aRet;
	GIa4 = (Ptr) 93;
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_94(void) {	/* prvectin */
   {	register Ptr aRet;
	GIa2 = (GIa1->Val + 1)->Val;
	GIa3 = (Ptr) 0;
	{aRet = ((Ptr) GLprint_95); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_96(void) {	/* prvect2 */
   {	register Ptr aRet, rSp, rA1, rA3;
	rSp = GIsp; rA1 = GIa1; rA3 = GIa3;
	(--rSp)->Val = rA1;
	(--rSp)->Val = rA3;
	(--rSp)->Val = GIa2;
	rA1 = (rA1->Val + 2 + (Fix) (rA3))->Val;
	(--rSp)->Val = ((Ptr) GLprint_97);
	{aRet = ((Ptr) GLprint_56); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLprint_97(void) {	/* ret_call_probj0_48 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa4 = rSp->Val;
	if (GIa4 == (Ptr) 0)	{aRet = ((Ptr) GLprint_98); goto lRet;}
	(--rSp)->Val = ((Ptr) GLprint_98);
	{aRet = ((Ptr) GLprint_24); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_98(void) {	/* prvect4 */
   {	register Ptr aRet, rSp, rA3;
	rSp = GIsp; rA3 = GIa3;
	GIa2 = (rSp++)->Val;
	rA3 = (rSp++)->Val;
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (1)));
	GIa1 = (rSp++)->Val;
	{aRet = ((Ptr) GLprint_95); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLprint_95(void) {	/* prvect6 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	{register Fix aux;
		aux = (Fix) (GIa2) - 1;
		GIa2 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	{aRet = ((Ptr) GLprint_96); goto lRet;}}
l_prvect9:
	if ((Fix) (GIprcdp) <= (Fix) 0)	{ aRet = (rSp++)->Val; goto lRet;}
	GIprcdp = (Ptr) ((UFix) ((Fix) (GIprcdp) + (Fix) (1)));
l_prvect91:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_43(void) {	/* prfloat */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	(--GIsp)->Val = rA1;
	GIa3 = GIbufpn;
	GIa2 = llrt_cvftoa (rA1, GIa3);
	{aRet = ((Ptr) GLprint_99); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_42(void) {	/* prfix */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	GIa3 = GIbufpn;
	GIa2 = (Ptr) 0;
	(--rSp)->Val = GIa4;
	(--rSp)->Val = ((Ptr) GLprint_100);
	{aRet = ((Ptr) GXgetnumi); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_100(void) {	/* ret_call_getnumi_50 */
   {	register Ptr aRet;
	GIa4 = (GIsp++)->Val;
	{aRet = ((Ptr) GLprint_99); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_99(void) {	/* prnum0 */
   {	register Ptr aRet, rA3;
	rA3 = GIa3;
	rA3 = GIa2;
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (GIpocour)));
	if ((Fix) (rA3) <= (Fix) (GImaxpocou))	{aRet = ((Ptr) GLprint_101); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLprint_101);
	{aRet = ((Ptr) GLprint_19); goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

static Ptr GLprint_101(void) {	/* prnum1 */
   {	register Ptr aRet;
	GIa1 = (Ptr) 0;
	{aRet = ((Ptr) GLprint_102); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_103(void) {	/* prnum3 */
   {	register Ptr aRet;
	GIa4 = (Ptr) ((unsigned char) *(((char *) (GIbufpn->Val + 2)) + (Fix) (GIa1)));
	(--GIsp)->Val = ((Ptr) GLprint_104);
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_104(void) {	/* ret_call_outch_52 */
   {	register Ptr aRet;
	GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) + (Fix) (1)));
	{aRet = ((Ptr) GLprint_102); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_102(void) {	/* prnum4 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	{register Fix aux;
		aux = (Fix) (GIa2) - 1;
		GIa2 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	{aRet = ((Ptr) GLprint_103); goto lRet;}}
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXprobj(void) {	/* probj */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = ((Ptr) GLprint_105);
	(--rSp)->Val = GMprin;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind3);
	GIdlink = rSp;
	{aRet = ((Ptr) GLprint_106); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_105(void) {	/* probje */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_20(void) {	/* probjend */
   {	register Ptr aRet;
	GIa2 = GMprin;
	{aRet = ((Ptr) GXfindtag); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_106(void) {	/* probj01 */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	GIprclp = GIprmlp;
	rA2 = GIprmln;
	if (rA2 == (Ptr) 0)	goto l_probj02;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (1)));
l_probj02:
	GIprcln = rA2;
	rA2 = GIprmdp;
	if (rA2 == (Ptr) 0)	goto l_probj03;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (1)));
l_probj03:
	GIprcdp = rA2;
	{aRet = ((Ptr) GLprint_56); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLprint_56(void) {	/* probj0 */
   {	register Ptr aRet, rSp, rA1, rA2, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBcons = GIbcons;
	if (GIitcount != 0) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_ithard ();}
	if (rA1 < GIbfloat)	{aRet = ((Ptr) GLprint_38); goto lRet;}
	if (llrt_floatp (rA1) != 0) 
	{aRet = ((Ptr) GLprint_38); goto lRet;}
	if ((rA1 >= GIbnumb) && (rA1 < GIecons))	goto l_probj0t;
	rA1 = GMudprs;
	{aRet = ((Ptr) GLprint_47); goto lRet;}
l_probj0t:
	if ((long) rA1 < (long) rBcons)	{aRet = ((Ptr) GLprint_38); goto lRet;}
	rA2 = GIprcdp;
	if ((Fix) (rA2) <= (Fix) 0)	goto l_probj11;
	if (rA2 != (Ptr) 1)	goto l_probj1;
	{aRet = ((Ptr) GLprint_34); goto lRet;}
l_probj1:
	GIprcdp = (Ptr) ((UFix) ((Fix) (GIprcdp) - (Fix) (1)));
l_probj11:
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA1 - (TableElem) rBcons);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		aux = GIbtbin[aux] & mask;
		if (aux == 0)	{aRet = ((Ptr) GLprint_107); goto lRet;}}
	(--rSp)->Val = rA1;
	(--rSp)->Val = ((Ptr) GLprint_108);
	{aRet = ((Ptr) GXgettype); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLprint_108(void) {	/* ret_call_gettype_53 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if ((rA1 < GIbsymb) || (rA1 >= GIbcons))	{aRet = ((Ptr) GLprint_109); goto lRet;}
	GIa2 = GMprin;
	GIa3 = GInil;
	(--GIsp)->Val = ((Ptr) GLprint_110);
	{aRet = ((Ptr) GXgetfns); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_110(void) {	/* ret_call_getfns_54 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if (rA1 == GMprin)	{aRet = ((Ptr) GLprint_109); goto lRet;}
	if (rA1 == GInil)	{aRet = ((Ptr) GLprint_109); goto lRet;}
	GIa4 = (Ptr) 1;
	{aRet = ((Ptr) GXffuncall); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_109(void) {	/* probj12 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
l_probj2:
	GIa4 = (Ptr) 40;
	(--rSp)->Val = ((Ptr) GLprint_111);
	{aRet = ((Ptr) GLprint_30); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_107(void) {	/* probj3 */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	rA2 = rA1->Val;
	if (rA2 != GMquote)	{aRet = ((Ptr) GLprint_112); goto lRet;}
	rA2 = (rA1 + 1)->Val;
	if ((long) rA2 < (long) GIbcons)	{aRet = ((Ptr) GLprint_112); goto lRet;}
	if ((rA2 + 1)->Val != GInil)	{aRet = ((Ptr) GLprint_112); goto lRet;}
	GIa4 = (Ptr) 39;
	(--GIsp)->Val = ((Ptr) GLprint_113);
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLprint_113(void) {	/* ret_call_outch_56 */
   {	register Ptr aRet;
	GIa1 = GIa2->Val;
	if ((Fix) (GIprcdp) <= (Fix) 0)	{aRet = ((Ptr) GLprint_56); goto lRet;}
	GIprcdp = (Ptr) ((UFix) ((Fix) (GIprcdp) + (Fix) (1)));
	{aRet = ((Ptr) GLprint_56); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_112(void) {	/* probj5 */
   {	register Ptr aRet;
	GIa4 = (Ptr) 40;
	(--GIsp)->Val = ((Ptr) GLprint_111);
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_114(void) {	/* probjd */
   {	register Ptr aRet;
	GIa4 = (Ptr) 46;
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_115(void) {	/* probj6 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_111);
	{aRet = ((Ptr) GLprint_24); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_111(void) {	/* probj8 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if (rSp < GImstack)	{aRet = ((Ptr) GXerrfsp); goto lRet;}
	(--rSp)->Val = (rA1 + 1)->Val;
	rA1 = rA1->Val;
	(--rSp)->Val = ((Ptr) GLprint_116);
	{aRet = ((Ptr) GLprint_56); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLprint_116(void) {	/* ret_call_probj0_59 */
   {	register Ptr aRet, rSp, rA1, rBcons;
	rSp = GIsp; rA1 = GIa1; rBcons = GIbcons;
	rA1 = (rSp++)->Val;
	if (rA1 == GInil)	{aRet = ((Ptr) GLprint_117); goto lRet;}
	if ((long) rA1 < (long) rBcons)	goto l_probjk;
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA1 - (TableElem) rBcons);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		aux = GIbtbin[aux] & mask;
		if (aux == 0)	{aRet = ((Ptr) GLprint_115); goto lRet;}}
l_probjk:
	(--rSp)->Val = ((Ptr) GLprint_118);
	{aRet = ((Ptr) GLprint_24); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLprint_118(void) {	/* ret_call_outsp_60 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_119);
	{aRet = ((Ptr) GLprint_114); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_119(void) {	/* ret_call_probjd_61 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_120);
	{aRet = ((Ptr) GLprint_24); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_120(void) {	/* ret_call_outsp_62 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_117);
	{aRet = ((Ptr) GLprint_56); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_117(void) {	/* probj9 */
   {	register Ptr aRet;
	GIa4 = (Ptr) 41;
	if ((Fix) (GIprcdp) <= (Fix) 0)	{aRet = ((Ptr) GXoutch); goto lRet;}
	GIprcdp = (Ptr) ((UFix) ((Fix) (GIprcdp) + (Fix) (1)));
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXprobjt(void) {	/* probjt */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_19);
	{aRet = ((Ptr) GXprobj); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXprin(void) {	/* prin */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GXpopj0);
	{aRet = ((Ptr) GLprint_121); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_121(void) {	/* prinn */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	if (rA4 == (Ptr) 0)	{aRet = ((Ptr) GLprint_122); goto lRet;}
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
	(--GIsp)->Val = rA4;
	{aRet = ((Ptr) GLprint_123); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLprint_124(void) {	/* prinn0 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	rA1 = GMstatpr;
	rA1 = rA1->Val;
	if (rA1 == GInil)	{aRet = ((Ptr) GLprint_123); goto lRet;}
	(--rSp)->Val = GIa4;
	(--rSp)->Val = ((Ptr) GLprint_125);
	(--rSp)->Val = GMprin;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind3);
	GIdlink = rSp;
	{aRet = ((Ptr) GLprint_24); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLprint_125(void) {	/* prinn2 */
   {	register Ptr aRet;
	GIa4 = (GIsp++)->Val;
	{aRet = ((Ptr) GLprint_123); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_123(void) {	/* prinn1 */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	GIa1 = (rSp + (Fix) (rA4))->Val;
	(--rSp)->Val = rA4;
	(--rSp)->Val = ((Ptr) GLprint_126);
	{aRet = ((Ptr) GXprobj); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_126(void) {	/* ret_call_probj_65 */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	rA4 = (rSp++)->Val;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	if ((Fix) (rA4) > (Fix) 1)	{aRet = ((Ptr) GLprint_124); goto lRet;}
	GIa3 = (rSp + (Fix) (rA4))->Val;
	rA4 = (rSp++)->Val;
	rSp += (Fix) (rA4);
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLprint_122(void) {	/* prinnr */
   {	register Ptr aRet;
	GIa1 = GInil;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXprint(void) {	/* print */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_5);
	{aRet = ((Ptr) GLprint_121); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXprinflush(void) {	/* prinflush */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GXflulin);
	{aRet = ((Ptr) GLprint_121); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXterpri(void) {	/* terpri */
   {	register Ptr aRet, rA1, rA4;
	rA1 = GIa1; rA4 = GIa4;
	GIa2 = GMterpri;
	if (rA4 == (Ptr) 1)	goto l_terpr2;
	rA1 = (Ptr) 1;
	if (rA4 == (Ptr) 0)	{aRet = ((Ptr) GLprint_127); goto lRet;}
	{aRet = ((Ptr) GXerrwna); goto lRet;}
l_terpr2:
	rA1 = (GIsp++)->Val;
	if (rA1 < GIbfloat)	{aRet = ((Ptr) GLprint_127); goto lRet;}
	{aRet = ((Ptr) GXerrnia); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLprint_128(void) {	/* terpr5 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_127);
	{aRet = ((Ptr) GLprint_5); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_127(void) {	/* terpr6 */
   {	register Ptr aRet;
	{register Fix aux;
		aux = (Fix) (GIa1) - 1;
		GIa1 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	{aRet = ((Ptr) GLprint_128); goto lRet;}}
	{aRet = ((Ptr) GLprint_3); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXprinch(void) {	/* princh */
   {	register Ptr aRet, rSp, rA1, rA2, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
	rA2 = (Ptr) 1;
	if (rA4 == (Ptr) 1)	goto l_princh1;
	if (rA4 == (Ptr) 2)	goto l_princh2;
	rA1 = (Ptr) 2;
	rA2 = GMprinch;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
l_princh2:
	rA2 = (rSp++)->Val;
l_princh1:
	if (rA2 < GIbfloat)	goto l_princh3;
	rA1 = rA2;
	rA2 = GMprinch;
	{aRet = ((Ptr) GXerrnia); goto lRet;}
l_princh3:
	rA1 = rSp->Val;
	GIsavea4 = GMprinch;
	(--rSp)->Val = ((Ptr) GLprint_129);
	{aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLprint_129(void) {	/* ret_call_stringa1_69 */
   {	register Ptr aRet;
	GIa4 = (Ptr) ((unsigned char) *(((char *) (GIa1->Val + 2)) + (Fix) 0));
	(--GIsp)->Val = ((Ptr) GLprint_130);
	{aRet = ((Ptr) GLprint_131); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_130(void) {	/* ret_call_princr1_70 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_131(void) {	/* princr1 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIprclp = GIprmlp;
	(--rSp)->Val = GMprin;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind3);
	GIdlink = rSp;
	{aRet = ((Ptr) GLprint_132); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_133(void) {	/* princr2 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa2;
	(--rSp)->Val = ((Ptr) GLprint_134);
	{aRet = ((Ptr) GXoutch); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_134(void) {	/* ret_call_outch_71 */
   {	register Ptr aRet;
	GIa2 = (GIsp++)->Val;
	{aRet = ((Ptr) GLprint_132); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_132(void) {	/* princr3 */
   {	register Ptr aRet;
	{register Fix aux;
		aux = (Fix) (GIa2) - 1;
		GIa2 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	{aRet = ((Ptr) GLprint_133); goto lRet;}}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXprincod(void) {	/* princn */
   {	register Ptr aRet, rSp, rA1, rA2, rA4, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rBfloat = GIbfloat;
	rA2 = (Ptr) 1;
	if (rA4 == (Ptr) 1)	goto l_princd1;
	if (rA4 == (Ptr) 2)	goto l_princd0;
	rA1 = (Ptr) 2;
	rA2 = GMprincod;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
l_princd0:
	rA2 = (rSp++)->Val;
	if (rA2 < rBfloat)	goto l_princd1;
	rA1 = rA2;
	rA2 = GMprincod;
	{aRet = ((Ptr) GXerrnia); goto lRet;}
l_princd1:
	rA4 = rSp->Val;
	if (rA4 < rBfloat)	goto l_princd2;
	rA1 = rA4;
	rA2 = GMprincod;
	{aRet = ((Ptr) GXerrnia); goto lRet;}
l_princd2:
	(--rSp)->Val = ((Ptr) GLprint_135);
	{aRet = ((Ptr) GLprint_131); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLprint_135(void) {	/* ret_call_princr1_72 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXexplode(void) {	/* explode */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIlexpld;
	(--rSp)->Val = GIiexpld;
	GIa3 = ((Ptr) GLprint_136);
	(--rSp)->Val = ((Ptr) GLprint_137);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_137(void) {	/* ret_call_sysprot_73 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	GIiexpld = (rSp++)->Val;
	GIlexpld = (rSp++)->Val;
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_136(void) {	/* explode1 */
   {	register Ptr aRet, rSp, rA2, rNil;
	rSp = GIsp; rA2 = GIa2; rNil = GInil;
	rA2 = rNil;
	GIsp = rSp; GIa2 = rA2; rA2 = llrt_cons (rA2, rNil);
	(--rSp)->Val = rA2;
	GIlexpld = rA2;
	GIiexpld = GMt;
	(--rSp)->Val = ((Ptr) GLprint_138);
	{aRet = ((Ptr) GXprobj); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLprint_138(void) {	/* ret_call_probj_74 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	rA1 = (rSp++)->Val;
	rA1 = (rA1 + 1)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXexplodech(void) {	/* explodech */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLprint_139);
	{aRet = ((Ptr) GXexplode); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_139(void) {	/* ret_call_explode_75 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	GIa2 = rA1;
	(--rSp)->Val = rA1;
	(--rSp)->Val = rA1;
	{aRet = ((Ptr) GLprint_140); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_140(void) {	/* expldech1 */
   {	register Ptr aRet, rSp, rA2;
	rSp = GIsp; rA2 = GIa2;
	if ((long) rA2 < (long) GIbcons)	{aRet = ((Ptr) GLprint_141); goto lRet;}
	GIa1 = rA2->Val;
	rSp->Val = rA2;
	(--rSp)->Val = ((Ptr) GLprint_142);
	{aRet = ((Ptr) GXfascii); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_142(void) {	/* ret_call_fascii_76 */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	rA2 = GIsp->Val;
	rA2->Val = GIa1;
	rA2 = (rA2 + 1)->Val;
	{aRet = ((Ptr) GLprint_140); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLprint_141(void) {	/* expldech2 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	rSp += (Fix) 1;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_15(void) {	/* expls */
   {	register Ptr aRet;
	(--GIsp)->Val = GIa4;
	GIa4 = (Ptr) 32;
	{aRet = ((Ptr) GLprint_143); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_31(void) {	/* explsh */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa4;
	GIa4 = (Ptr) 35;
	(--rSp)->Val = ((Ptr) GLprint_144);
	{aRet = ((Ptr) GLprint_21); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_144(void) {	/* ret_call_explch_77 */
   {	register Ptr aRet;
	GIa4 = GIsp->Val;
	{aRet = ((Ptr) GLprint_143); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_21(void) {	/* explch */
   {	register Ptr aRet;
	(--GIsp)->Val = GIa4;
	{aRet = ((Ptr) GLprint_143); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_143(void) {	/* explch1 */
   {	register Ptr aRet, rSp, rA2, rA4;
	rSp = GIsp; rA2 = GIa2; rA4 = GIa4;
	(--rSp)->Val = rA2;
	GIsp = rSp; GIa2 = rA2; GIa4 = rA4; rA4 = llrt_cons (rA4, GInil);
	rA2 = GIlexpld;
	(rA2 + 1)->Val = rA4;
	GIlexpld = rA4;
	rA2 = (rSp++)->Val;
	rA4 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

extern Ptr GXfptype(void) {	/* ptype */
   {	register Ptr aRet, rSp, rA1, rA3, rA4, rBsymb, rBcons;
	rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rBsymb = GIbsymb; rBcons = GIbcons;
	GIa2 = GMfptype;
	if (rA4 == (Ptr) 1)	goto l_ptyp1;
	if (rA4 == (Ptr) 2)	goto l_ptyp2;
	rA1 = (Ptr) 2;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
l_ptyp1:
	rA1 = (rSp++)->Val;
	if ((rA1 < rBsymb) || (rA1 >= rBcons))	{aRet = ((Ptr) GXerrsym); goto lRet;}
	{register int aux;
		aux = (int) ((rA1 + 6)->Val);
		aux = aux >> HIGHTSHIFT;
		rA1 = (Ptr) aux;}
	{aRet = (rSp++)->Val; goto lRet;}
l_ptyp2:
	rA1 = (rSp++)->Val;
	rA3 = (rSp++)->Val;
	if ((rA3 < rBsymb) || (rA3 >= rBcons))	{aRet = ((Ptr) GXerrsym); goto lRet;}
	{register int aux1, aux2;
		aux1 = (int) ((rA3 + 6)->Val);
		aux2 = (int) (rA1);
		aux2 = aux2 << HIGHTSHIFT;
		aux1 = aux1 | aux2;
		(rA3 + 6)->Val = (Ptr) aux1;}
	{aRet = (rSp++)->Val; goto lRet;}
l_ptyper2:
	rA1 = rA3;
	{aRet = ((Ptr) GXerrnia); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; return (aRet);}}

extern Ptr GXfobase(void) {	/* obase */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = GMfobase;
	GIa3 = GIobase;
	(--rSp)->Val = (Ptr) 2;
	(--rSp)->Val = (Ptr) 36;
	(--rSp)->Val = ((Ptr) GLprint_145);
	{aRet = ((Ptr) GXgetsetn); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_145(void) {	/* ret_call_getsetn_78 */
   {	register Ptr aRet;
	GIobase = GIa1;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXprline(void) {	/* printline */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = GMprline;
	GIa3 = GIprmlp;
	(--rSp)->Val = (Ptr) 0;
	(--rSp)->Val = (Ptr) 32767;
	(--rSp)->Val = ((Ptr) GLprint_146);
	{aRet = ((Ptr) GXgetsetn); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_146(void) {	/* ret_call_getsetn_79 */
   {	register Ptr aRet;
	GIprmlp = GIa1;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXprlevel(void) {	/* printlevel */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = GMprlevel;
	GIa3 = GIprmdp;
	(--rSp)->Val = (Ptr) 0;
	(--rSp)->Val = (Ptr) 32767;
	(--rSp)->Val = ((Ptr) GLprint_147);
	{aRet = ((Ptr) GXgetsetn); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_147(void) {	/* ret_call_getsetn_80 */
   {	register Ptr aRet;
	GIprmdp = GIa1;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXprlength(void) {	/* printlength */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = GMprlength;
	GIa3 = GIprmln;
	(--rSp)->Val = (Ptr) 0;
	(--rSp)->Val = (Ptr) 32767;
	(--rSp)->Val = ((Ptr) GLprint_148);
	{aRet = ((Ptr) GXgetsetn); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_148(void) {	/* ret_call_getsetn_81 */
   {	register Ptr aRet;
	GIprmln = GIa1;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLprint_149(void) {	/* tespos */
   {	register Ptr aRet, rA1, rA4;
	rA1 = GIa1; rA4 = GIa4;
	if (rA1 >= GIbfloat)	goto l_poser2;
	if ((Fix) (rA1) < (Fix) 0)	goto l_poser;
	if ((Fix) (rA1) <= (Fix) (GImaxpocou))	{ aRet = (GIsp++)->Val; goto lRet;}
l_poser:
	GIa2 = rA4;
	{aRet = ((Ptr) GXerroob); goto lRet;}
l_poser2:
	GIa2 = rA4;
	{aRet = ((Ptr) GXerrnia); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXlmargin(void) {	/* lmargin */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = GMlmargin;
	GIa3 = GInbleft;
	(--rSp)->Val = (Ptr) 0;
	(--rSp)->Val = GInbrig;
	(--rSp)->Val = ((Ptr) GLprint_150);
	{aRet = ((Ptr) GXgetsetn); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_150(void) {	/* ret_call_getsetn_82 */
   {	register Ptr aRet;
	GInbleft = GIa1;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXrmargin(void) {	/* rmargin */
   {	register Ptr aRet, rSp, rA2;
	rSp = GIsp; rA2 = GIa2;
	(--rSp)->Val = (Ptr) 1;
	rA2 = (GIbufout->Val + 1)->Val;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (1)));
	(--rSp)->Val = rA2;
	rA2 = GMrmargin;
	GIa3 = GInbrig;
	(--rSp)->Val = ((Ptr) GLprint_151);
	{aRet = ((Ptr) GXgetsetn); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLprint_151(void) {	/* ret_call_getsetn_83 */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	GInbrig = rA1;
	rA2 = (GIbufout->Val + 1)->Val;
	if ((Fix) (rA1) <= (Fix) (rA2))	goto l_rmargin1;
	rA1 = rA2;
l_rmargin1:
	GImaxpocou = rA1;
	rA1 = GInbrig;
l_rmargin2:
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXoutpos(void) {	/* outpos */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = GMoutpos;
	GIa3 = GIpocour;
	(--rSp)->Val = (Ptr) 0;
	(--rSp)->Val = GImaxpocou;
	(--rSp)->Val = ((Ptr) GLprint_152);
	{aRet = ((Ptr) GXgetsetn); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLprint_152(void) {	/* ret_call_getsetn_84 */
   {	register Ptr aRet;
	GIpocour = GIa1;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXoutbuf(void) {	/* outbuf */
   {	register Ptr aRet, rSp, rA1, rA2, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
	if (rA4 == (Ptr) 0)	goto l_outbu1;
	rA2 = GInil;
	if (rA4 == (Ptr) 1)	goto l_outbu5;
	if (rA4 == (Ptr) 2)	goto l_outbu4;
	rA1 = (Ptr) 1;
	rA2 = GMoutbuf;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
l_outbu1:
	rA1 = GIbufout;
	{aRet = (rSp++)->Val; goto lRet;}
l_outbu4:
	rA2 = (rSp++)->Val;
l_outbu5:
	rA1 = (rSp++)->Val;
	rA4 = GMoutbuf;
	(--rSp)->Val = ((Ptr) GLprint_153);
	{aRet = ((Ptr) GLprint_149); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLprint_153(void) {	/* ret_call_tespos_85 */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	if (rA2 == GInil)	goto l_outbu6;
	if (rA2 >= GIbfloat)	goto l_outbuer;
	*((char *) (GIbufout->Val + 2) + (Fix) (rA1)) = (char) rA2;
l_outbu6:
	rA1 = (Ptr) ((unsigned char) *(((char *) (GIbufout->Val + 2)) + (Fix) (rA1)));
	{aRet = (GIsp++)->Val; goto lRet;}
l_outbuer:
	rA1 = rA2;
	rA2 = GIa4;
	{aRet = ((Ptr) GXerrnia); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GDprint_154() {	/* trace eol */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYprint,0,1,2);
  lRet:  return (aRet);}}

static Ptr GDprint_155() {	/* trace flush */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYprint,3,1,2);
  lRet:  return (aRet);}}

static Ptr GDprint_156() {	/* trace pratom */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYprint,4,1,5);
  lRet:  return (aRet);}}

static Ptr GDprint_157() {	/* trace prin */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYprint,6,1,7);
  lRet:  return (aRet);}}

static Ptr GDprint_158() {	/* trace print */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYprint,8,1,7);
  lRet:  return (aRet);}}

static Ptr GDprint_159() {	/* trace prinflush */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYprint,9,1,7);
  lRet:  return (aRet);}}

static Ptr GDprint_160() {	/* trace terpri */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYprint,10,1,7);
  lRet:  return (aRet);}}

static Ptr GDprint_161() {	/* trace princh */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYprint,11,1,7);
  lRet:  return (aRet);}}

static Ptr GDprint_162() {	/* trace princn */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYprint,12,1,7);
  lRet:  return (aRet);}}

static Ptr GDprint_163() {	/* trace explode */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYprint,13,1,5);
  lRet:  return (aRet);}}

static Ptr GDprint_164() {	/* trace explodech */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYprint,14,1,5);
  lRet:  return (aRet);}}

static Ptr GDprint_165() {	/* trace ptype */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYprint,15,1,7);
  lRet:  return (aRet);}}

static Ptr GDprint_166() {	/* trace obase */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYprint,16,1,7);
  lRet:  return (aRet);}}

static Ptr GDprint_167() {	/* trace printline */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYprint,17,1,7);
  lRet:  return (aRet);}}

static Ptr GDprint_168() {	/* trace printlevel */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYprint,18,1,7);
  lRet:  return (aRet);}}

static Ptr GDprint_169() {	/* trace printlength */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYprint,19,1,7);
  lRet:  return (aRet);}}

static Ptr GDprint_170() {	/* trace lmargin */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYprint,20,1,7);
  lRet:  return (aRet);}}

static Ptr GDprint_171() {	/* trace rmargin */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYprint,21,1,7);
  lRet:  return (aRet);}}

static Ptr GDprint_172() {	/* trace outpos */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYprint,22,1,7);
  lRet:  return (aRet);}}

static Ptr GDprint_173() {	/* trace outbuf */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYprint,23,1,7);
  lRet:  return (aRet);}}

