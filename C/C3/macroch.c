/* GELL 15.26: source file for the module: "macroch" */
/*             translation done:           "Sat Oct   7 17 20:53:16 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "macroch.h" 

static Ptr GLmacroch_1(void) {	/* startmodule */
   {	register Ptr aRet;
	{aRet = ((Ptr) GXini_mach); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXini_mach(void) {	/* ini_mach */
   {	register Ptr aRet;
	{ llrt_inisymb ((Ptr) 3, (Ptr) "dmc", ((Ptr) GXdmc), (Ptr) &GMdmc, (Ptr) GFdmc);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "dms", ((Ptr) GXdms), (Ptr) &GMdms, (Ptr) GFdms);}
	{ llrt_inisymb ((Ptr) 8, (Ptr) "defsharp", ((Ptr) GXdefsharp), (Ptr) &GMdefsharp, (Ptr) GFdefsharp);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "#", ((Ptr) GXllsharp), (Ptr) &GMllsharp, (Ptr) GFllsharp);}
	{ llrt_inicst ((Ptr) 5, (Ptr) "sharp", (Ptr) &GMsharp);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) ":", ((Ptr) GXllcolon), (Ptr) &GMllcolon, (Ptr) GFllcolon);}
	{ llrt_inicst ((Ptr) 4, (Ptr) "user", (Ptr) &GMuser);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "^", ((Ptr) GXllhat), (Ptr) &GMllhat, (Ptr) GFllhat);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "[", ((Ptr) GXlllbra), (Ptr) &GMlllbra, (Ptr) GFlllbra);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "]", ((Ptr) GXllrbra), (Ptr) &GMllrbra, (Ptr) GFllrbra);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "'", ((Ptr) GXllquote), (Ptr) &GMllquote, (Ptr) GFllquote);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "`", ((Ptr) GXllbquote), (Ptr) &GMllbquote, (Ptr) GFllbquote);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) ",", ((Ptr) GXllcomma), (Ptr) &GMllcomma, (Ptr) GFllcomma);}
	{ llrt_inicst ((Ptr) 2, (Ptr) ",@", (Ptr) &GMcommaat);}
	{ llrt_inicst ((Ptr) 2, (Ptr) ",.", (Ptr) &GMcommadot);}
	GIcpkgc = GMsyspkgc;
	{ llrt_inicst ((Ptr) 5, (Ptr) "sharp", (Ptr) &GMsysharp);}
	GIa1->Val = GMsharp;
	{ llrt_inicst ((Ptr) 5, (Ptr) "colon", (Ptr) &GMsyscol);}
	GIa1->Val = GMuser;
	GIcpkgc = GMsharp;
	{ llrt_inisymb ((Ptr) 1, (Ptr) ".", ((Ptr) GXshrpdot), (Ptr) &GMshrpdot, (Ptr) GFshrpdot);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "+", ((Ptr) GXshrpplu), (Ptr) &GMshrpplu, (Ptr) GFshrpplu);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "-", ((Ptr) GXshrpmoi), (Ptr) &GMshrpmoi, (Ptr) GFshrpmoi);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "'", ((Ptr) GXshrpquo), (Ptr) &GMshrpquo, (Ptr) GFshrpquo);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "/", ((Ptr) GXshrpsla), (Ptr) &GMshrpsla, (Ptr) GFshrpsla);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "\\", ((Ptr) GXshrpbak), (Ptr) &GMshrpbak, (Ptr) GFshrpbak);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "^", ((Ptr) GXshrphat), (Ptr) &GMshrphat, (Ptr) GFshrphat);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) ":", ((Ptr) GXshrpcol), (Ptr) &GMshrpcol, (Ptr) GFshrpcol);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "$", ((Ptr) GXshrpdol), (Ptr) &GMshrpdol, (Ptr) GFshrpdol);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "%", ((Ptr) GXshrpprc), (Ptr) &GMshrpprc, (Ptr) GFshrpprc);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "\"", ((Ptr) GXshrpgui), (Ptr) &GMshrpgui, (Ptr) GFshrpgui);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "|", ((Ptr) GXshrpbar), (Ptr) &GMshrpbar, (Ptr) GFshrpbar);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "(", ((Ptr) GXshrppar), (Ptr) &GMshrppar, (Ptr) GFshrppar);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "[", ((Ptr) GXshrpbra), (Ptr) &GMshrpbra, (Ptr) GFshrpbra);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "r", ((Ptr) GXshrprad), (Ptr) &GMshrprad, (Ptr) GFshrprad);}
	{ llrt_inicst ((Ptr) 5, (Ptr) "value", (Ptr) &GMshrpval);}
	{ llrt_inicst ((Ptr) 7, (Ptr) "lowbyte", (Ptr) &GMslowbyte);}
	GIcpkgc = GInil;
	{ llrt_inisymb ((Ptr) 6, (Ptr) "typech", ((Ptr) GXtypech), (Ptr) &GMtypech, (Ptr) GFtypech);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "typecn", ((Ptr) GXtypecod), (Ptr) &GMtypecod, (Ptr) GFtypecod);}
	{ llrt_inicst ((Ptr) 5, (Ptr) "cnull", (Ptr) &GMcnull);}
	{ llrt_inicst ((Ptr) 5, (Ptr) "cbcom", (Ptr) &GMcbcom);}
	{ llrt_inicst ((Ptr) 5, (Ptr) "cecom", (Ptr) &GMcecom);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "cquote", (Ptr) &GMcquote);}
	{ llrt_inicst ((Ptr) 5, (Ptr) "clpar", (Ptr) &GMclpar);}
	{ llrt_inicst ((Ptr) 5, (Ptr) "crpar", (Ptr) &GMcrpar);}
	{ llrt_inicst ((Ptr) 4, (Ptr) "cdot", (Ptr) &GMcdot);}
	{ llrt_inicst ((Ptr) 4, (Ptr) "csep", (Ptr) &GMcsep);}
	{ llrt_inicst ((Ptr) 5, (Ptr) "cpkgc", (Ptr) &GMcpackage);}
	{ llrt_inicst ((Ptr) 7, (Ptr) "csplice", (Ptr) &GMcsplice);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "cmacro", (Ptr) &GMcmacro);}
	{ llrt_inicst ((Ptr) 7, (Ptr) "cstring", (Ptr) &GMcstring);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "cpname", (Ptr) &GMcpname);}
	{ llrt_inicst ((Ptr) 5, (Ptr) "csymb", (Ptr) &GMcsymb);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "cmsymb", (Ptr) &GMcmsymb);}
	GIa1 = (Ptr) 15;
	GIa2 = GInil;
	(--GIsp)->Val = ((Ptr) GLmacroch_2);
	{aRet = ((Ptr) GXmakevect); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_2(void) {	/* ret_call_makevect_1 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GItabctyp = rA1;
	(rA1->Val + 2 + (Fix) 0)->Val = GMcnull;
	(rA1->Val + 2 + (Fix) 1)->Val = GMcbcom;
	(rA1->Val + 2 + (Fix) 2)->Val = GMcecom;
	(rA1->Val + 2 + (Fix) 3)->Val = GMcquote;
	(rA1->Val + 2 + (Fix) 4)->Val = GMclpar;
	(rA1->Val + 2 + (Fix) 5)->Val = GMcrpar;
	(rA1->Val + 2 + (Fix) 6)->Val = GMcdot;
	(rA1->Val + 2 + (Fix) 7)->Val = GMcsep;
	(rA1->Val + 2 + (Fix) 8)->Val = GMcpackage;
	(rA1->Val + 2 + (Fix) 9)->Val = GMcsplice;
	(rA1->Val + 2 + (Fix) 10)->Val = GMcmacro;
	(rA1->Val + 2 + (Fix) 11)->Val = GMcstring;
	(rA1->Val + 2 + (Fix) 12)->Val = GMcpname;
	(rA1->Val + 2 + (Fix) 13)->Val = GMcsymb;
	(rA1->Val + 2 + (Fix) 14)->Val = GMcmsymb;
	rA1 = (Ptr) 15;
	GIa2 = GInil;
	(--GIsp)->Val = ((Ptr) GLmacroch_3);
	{aRet = ((Ptr) GXmakevect); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmacroch_3(void) {	/* ret_call_makevect_2 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GItabccod = rA1;
	(rA1->Val + 2 + (Fix) 0)->Val = (Ptr) 0;
	(rA1->Val + 2 + (Fix) 1)->Val = (Ptr) 1;
	(rA1->Val + 2 + (Fix) 2)->Val = (Ptr) 2;
	(rA1->Val + 2 + (Fix) 3)->Val = (Ptr) 3;
	(rA1->Val + 2 + (Fix) 4)->Val = (Ptr) 4;
	(rA1->Val + 2 + (Fix) 5)->Val = (Ptr) 5;
	(rA1->Val + 2 + (Fix) 6)->Val = (Ptr) 6;
	(rA1->Val + 2 + (Fix) 7)->Val = (Ptr) 7;
	(rA1->Val + 2 + (Fix) 8)->Val = (Ptr) 8;
	(rA1->Val + 2 + (Fix) 9)->Val = (Ptr) 9;
	(rA1->Val + 2 + (Fix) 10)->Val = (Ptr) 10;
	(rA1->Val + 2 + (Fix) 11)->Val = (Ptr) 11;
	(rA1->Val + 2 + (Fix) 12)->Val = (Ptr) 12;
	(rA1->Val + 2 + (Fix) 13)->Val = (Ptr) 13;
	(rA1->Val + 2 + (Fix) 14)->Val = (Ptr) 14;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXdmc(void) {	/* dmc */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_4);
	{aRet = ((Ptr) GXllde); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_4(void) {	/* ret_call_llde_3 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = rA1;
	(--rSp)->Val = ((Ptr) GLmacroch_5);
	(--rSp)->Val = rA1;
	(--rSp)->Val = (Ptr) 10;
	GIa4 = (Ptr) 2;
	{aRet = ((Ptr) GXtypech); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmacroch_5(void) {	/* dmcret */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXdms(void) {	/* dms */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_6);
	{aRet = ((Ptr) GXllde); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_6(void) {	/* ret_call_llde_4 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = rA1;
	(--rSp)->Val = ((Ptr) GLmacroch_5);
	(--rSp)->Val = rA1;
	(--rSp)->Val = (Ptr) 9;
	GIa4 = (Ptr) 2;
	{aRet = ((Ptr) GXtypech); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXdefsharp(void) {	/* defsharp */
   {	register Ptr aRet, rSp, rA1, rA2;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
	rA2 = rA1->Val;
	if ((rA2 < GIbsymb) || (rA2 >= GIbcons))	{aRet = ((Ptr) GLmacroch_7); goto lRet;}
	(--rSp)->Val = rA2;
	(--rSp)->Val = (rA1 + 1)->Val;
	rA1 = GMsysharp;
	rA1 = rA1->Val;
	(--rSp)->Val = ((Ptr) GLmacroch_8);
	{aRet = ((Ptr) GXtrysympk); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmacroch_8(void) {	/* ret_call_trysympk_5 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = GMllexpr;
	GIa3 = (rSp++)->Val;
	(--rSp)->Val = ((Ptr) GLmacroch_9);
	{aRet = ((Ptr) GXsetfn); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmacroch_9(void) {	/* ret_call_setfn_6 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmacroch_7(void) {	/* defshrer */
   {	register Ptr aRet;
	GIa1 = GIa2;
	GIa2 = GMdefsharp;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllquote(void) {	/* ' */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_10);
	{aRet = ((Ptr) GXreadi); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_10(void) {	/* ret_call_readi_7 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
	GIa1 = rA1; rA1 = llrt_cons (GMquote, rA1);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXllcomma(void) {	/* , */
   {	register Ptr aRet;
	GIa1 = (Ptr) 12;
	GIa2 = GMllcomma;
	{aRet = ((Ptr) GXerrsxt); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_11(void) {	/* commain */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_12);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_12(void) {	/* ret_call_getch_8 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	if (rA4 == (Ptr) 64)	{aRet = ((Ptr) GLmacroch_13); goto lRet;}
	if (rA4 == (Ptr) 46)	{aRet = ((Ptr) GLmacroch_14); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLmacroch_15);
	{aRet = ((Ptr) GXrereada4); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_15(void) {	/* ret_call_rereada4_9 */
   {	register Ptr aRet;
	GIa1 = GMllcomma;
	{aRet = ((Ptr) GLmacroch_16); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_16(void) {	/* commain0 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = ((Ptr) GLmacroch_17);
	{aRet = ((Ptr) GXreadi); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmacroch_17(void) {	/* ret_call_readi_10 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = (rSp++)->Val;
	GIsp = rSp; GIa1 = llrt_cons (GIa2, GIa1);
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmacroch_13(void) {	/* commain1 */
   {	register Ptr aRet;
	GIa1 = GMcommaat;
	{aRet = ((Ptr) GLmacroch_16); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_14(void) {	/* commain2 */
   {	register Ptr aRet;
	GIa1 = GMcommadot;
	{aRet = ((Ptr) GLmacroch_16); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllbquote(void) {	/* ` */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	rA1 = GMllcomma;
	(--rSp)->Val = (rA1 + 2)->Val;
	{register UFix aux;
		aux = (UFix) ((rA1 + 6)->Val);
		GIa2 = (Ptr) aux;}
	(--rSp)->Val = GIa2;
	GIa3 = ((Ptr) GLmacroch_18);
	(--rSp)->Val = ((Ptr) GLmacroch_19);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmacroch_19(void) {	/* ret_call_sysprot_11 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	rA1 = GMllcomma;
	{register int aux1, aux2;
		aux1 = (int) ((rA1 + 6)->Val);
		aux1 = aux1 & HIGHTMASK;
		aux2 = (int) ((rSp + 1)->Val);
		aux1 = aux1 | aux2;
		(rA1 + 6)->Val = (Ptr) aux1;}
	(rA1 + 2)->Val = (rSp + 2)->Val;
	rA1 = rSp->Val;
	rSp += (Fix) 3;
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmacroch_18(void) {	/* llbquot1 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	(rA1 + 2)->Val = ((Ptr) GLmacroch_11);
	{register int aux1, aux2;
		aux1 = (int) ((rA1 + 6)->Val);
		aux1 = aux1 & HIGHTMASK;
		aux2 = (int) 1;
		aux1 = aux1 | aux2;
		(rA1 + 6)->Val = (Ptr) aux1;}
	(--GIsp)->Val = ((Ptr) GLmacroch_20);
	{aRet = ((Ptr) GXreadi); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_21(void) {	/* backcste */
   {	register Ptr aRet, rSp, rA1, rA4, rNil;
	rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
	if (rA1 == rNil)	goto l_backcst9;
	if ((long) rA1 < (long) GIbcons)	goto l_backcst8;
	rA4 = rA1->Val;
	if (rA4 != GMquote)	goto l_backcst8;
	rA4 = (rA1 + 1)->Val;
	if ((rA4 + 1)->Val == rNil)	goto l_backcst9;
l_backcst8:
	rA4 = rNil;
	{aRet = (rSp++)->Val; goto lRet;}
l_backcst9:
	rA4 = GMt;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmacroch_20(void) {	/* backquot */
   {	register Ptr aRet, rSp, rA1, rA2, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBcons = GIbcons;
l_GLmacroch_20:
	if (rA1 != GInil)	goto l_backquo0;
	{aRet = (rSp++)->Val; goto lRet;}
l_backquo0:
	if ((long) rA1 >= (long) rBcons)	goto l_backquo1;
	{aRet = ((Ptr) GXkwote); goto lRet;}
l_backquo1:
	rA2 = rA1->Val;
	if (rA2 != GMllcomma)	goto l_backquo2;
	rA1 = (rA1 + 1)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
l_backquo2:
	if (rA2 == GMcommaat)	{aRet = ((Ptr) GLmacroch_22); goto lRet;}
	if (rA2 == GMcommadot)	{aRet = ((Ptr) GLmacroch_22); goto lRet;}
	if ((long) rA2 < (long) rBcons)	goto l_backquo3;
	if (rA2->Val == GMcommaat)	{aRet = ((Ptr) GLmacroch_23); goto lRet;}
	if (rA2->Val == GMcommadot)	{aRet = ((Ptr) GLmacroch_24); goto lRet;}
l_backquo3:
	(--rSp)->Val = rA2;
	rA1 = (rA1 + 1)->Val;
	(--rSp)->Val = ((Ptr) GLmacroch_25);
	goto l_GLmacroch_20;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmacroch_25(void) {	/* ret_call_backquot_13 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = GIa1;
		GIa1 = aux;}
	(--rSp)->Val = ((Ptr) GLmacroch_26);
	{aRet = ((Ptr) GLmacroch_20); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmacroch_26(void) {	/* ret_call_backquot_14 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = (rSp++)->Val;
	if (GIa2 != GInil)	{aRet = ((Ptr) GLmacroch_27); goto lRet;}
	(--rSp)->Val = ((Ptr) GLmacroch_28);
	{aRet = ((Ptr) GLmacroch_21); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmacroch_28(void) {	/* ret_call_backcste_15 */
   {	register Ptr aRet, rA1, rNil;
	rA1 = GIa1; rNil = GInil;
	if (GIa4 == rNil)	goto l_backqu31;
	rA1 = (rA1 + 1)->Val;
	rA1 = rA1->Val;
	GIa1 = rA1; rA1 = llrt_cons (rA1, rNil);
	{aRet = ((Ptr) GXkwote); goto lRet;}
l_backqu31:
	GIa1 = rA1; rA1 = llrt_cons (rA1, rNil);
	GIa1 = rA1; rA1 = llrt_cons (GMfncons, rA1);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmacroch_27(void) {	/* backqu32 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_29);
	{aRet = ((Ptr) GLmacroch_21); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_29(void) {	/* ret_call_backcste_16 */
   {	register Ptr aRet;
	if (GIa4 == GInil)	{aRet = ((Ptr) GLmacroch_30); goto lRet;}
	GIa3 = GIa1;
	GIa1 = GIa2;
	(--GIsp)->Val = ((Ptr) GLmacroch_31);
	{aRet = ((Ptr) GLmacroch_21); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_31(void) {	/* ret_call_backcste_17 */
   {	register Ptr aRet, rA1, rA3;
	rA1 = GIa1; rA3 = GIa3;
	if (GIa4 == GInil)	goto l_backqu33;
	rA1 = (rA1 + 1)->Val;
	rA1 = rA1->Val;
	rA3 = (rA3 + 1)->Val;
	GIa1 = rA1; GIa3 = rA3; rA1 = llrt_cons (rA3->Val, rA1);
	{aRet = ((Ptr) GXkwote); goto lRet;}
l_backqu33:
	rA1 = rA3;
	{aRet = ((Ptr) GLmacroch_30); goto lRet;}
  lRet: GIa1 = rA1; GIa3 = rA3; return (aRet);}}

static Ptr GLmacroch_30(void) {	/* backqu34 */
   {	register Ptr aRet, rSp, rA2, rA3;
	rSp = GIsp; rA2 = GIa2; rA3 = GIa3;
	if ((long) rA2 < (long) GIbcons)	goto l_backqu36;
	rA3 = rA2->Val;
	if (rA3 != GMllcons)	goto l_backqu35;
	(--rSp)->Val = GMmcons;
	(--rSp)->Val = GIa1;
	rA2 = (rA2 + 1)->Val;
	(--rSp)->Val = rA2->Val;
	rA2 = (rA2 + 1)->Val;
	(--rSp)->Val = rA2->Val;
	GIa4 = (Ptr) 4;
	{aRet = ((Ptr) GXlist); goto lRet;}
l_backqu35:
	if (rA3 == GMfncons)	goto l_backqu37;
	if (rA3 == GMlist)	goto l_backqu38;
	if (rA3 == GMmcons)	goto l_backqu38;
l_backqu36:
	GIsp = rSp; GIa2 = rA2; GIa3 = rA3; rA2 = llrt_cons (rA2, GInil);
	rA3 = GMllcons;
	{aRet = ((Ptr) GLmacroch_32); goto lRet;}
l_backqu37:
	rA3 = GMlist;
l_backqu38:
	rA2 = (rA2 + 1)->Val;
	{aRet = ((Ptr) GLmacroch_32); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLmacroch_23(void) {	/* backquo4 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	GIa2 = rA1->Val;
	(--rSp)->Val = (GIa2 + 1)->Val;
	rA1 = (rA1 + 1)->Val;
	(--rSp)->Val = ((Ptr) GLmacroch_33);
	{aRet = ((Ptr) GLmacroch_20); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmacroch_33(void) {	/* ret_call_backquot_18 */
   {	register Ptr aRet, rSp, rA1, rNil;
	rSp = GIsp; rA1 = GIa1; rNil = GInil;
	if (rA1 != rNil)	goto l_backqu41;
	rA1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
l_backqu41:
	if ((long) rA1 < (long) GIbcons)	goto l_backqu42;
	if (rA1->Val != GMappend)	goto l_backqu42;
	rA1 = (rA1 + 1)->Val;
	goto l_backqu43;
l_backqu42:
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, rNil);
l_backqu43:
	GIa2 = (rSp++)->Val;
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (GIa2, rA1);
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (GMappend, rA1);
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmacroch_24(void) {	/* backquo5 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if ((rA1 + 1)->Val != GInil)	goto l_backqu51;
	rA1 = rA1->Val;
	rA1 = (rA1 + 1)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
l_backqu51:
	(--rSp)->Val = rA1->Val;
	rA1 = (rA1 + 1)->Val;
	(--rSp)->Val = ((Ptr) GLmacroch_34);
	{aRet = ((Ptr) GLmacroch_20); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmacroch_34(void) {	/* ret_call_backquot_19 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
	GIa2 = (rSp++)->Val;
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons ((GIa2 + 1)->Val, rA1);
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (GMnconc, rA1);
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmacroch_32(void) {	/* backquo7 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
	GIa1 = rA1; rA1 = llrt_cons (GIa3, rA1);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmacroch_22(void) {	/* backquor */
   {	register Ptr aRet;
	GIa1 = (Ptr) 12;
	GIa2 = GMllbquote;
	{aRet = ((Ptr) GXerrsxt); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllsharp(void) {	/* # */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_35);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_35(void) {	/* ret_call_getch_20 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_36);
	{aRet = ((Ptr) GXbase10p); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_36(void) {	/* ret_call_base10p_21 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLmacroch_37); goto lRet;}
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 48));
	(--GIsp)->Val = rA4;
	{aRet = ((Ptr) GLmacroch_38); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLmacroch_39(void) {	/* rdsh2 */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	rSp->Val = (Ptr) ((UFix) ((Fix) (rSp->Val) * (Fix) 10));
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 48));
	rSp->Val = (Ptr) ((UFix) ((Fix) (rSp->Val) + (Fix) (rA4)));
	{aRet = ((Ptr) GLmacroch_38); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLmacroch_38(void) {	/* rdsh3 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_40);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_40(void) {	/* ret_call_getch_22 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_41);
	{aRet = ((Ptr) GXbase10p); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_41(void) {	/* ret_call_base10p_23 */
   {	register Ptr aRet;
	if (GIa1 != GInil)	{aRet = ((Ptr) GLmacroch_39); goto lRet;}
	(--GIsp)->Val = (Ptr) 1;
	{aRet = ((Ptr) GLmacroch_42); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_37(void) {	/* rdsh4 */
   {	register Ptr aRet;
	(--GIsp)->Val = (Ptr) 0;
	{aRet = ((Ptr) GLmacroch_42); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_42(void) {	/* rdsh5 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_43);
	{aRet = ((Ptr) GXasciii); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_43(void) {	/* ret_call_asciii_24 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	GIa2 = rA1;
	(--rSp)->Val = rA1;
	rA1 = GMsysharp;
	rA1 = rA1->Val;
	GIa3 = GInil;
	(--rSp)->Val = ((Ptr) GLmacroch_44);
	{aRet = ((Ptr) GXgetfns); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmacroch_44(void) {	/* ret_call_getfns_25 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if (GIa1 == GInil)	goto l_rdshr;
	rSp += (Fix) 1;
	GIa4 = (rSp++)->Val;
	{aRet = ((Ptr) GXffuncall); goto lRet;}
l_rdshr:
	GIa1 = (rSp++)->Val;
	GIa2 = GMllsharp;
	{aRet = ((Ptr) GXerrudf); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXshrpdot(void) {	/* . */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_45);
	{aRet = ((Ptr) GXreadi); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_45(void) {	/* ret_call_readi_26 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_46);
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_46(void) {	/* shrpdot1 */
   {	register Ptr aRet;
	 GIa1 = llrt_cons (GIa1, GInil);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXshrpplu(void) {	/* + */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_47);
	{aRet = ((Ptr) GXreadi); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_47(void) {	/* ret_call_readi_28 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_48);
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_48(void) {	/* ret_call_evala1_29 */
   {	register Ptr aRet;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLmacroch_49); goto lRet;}
	{aRet = ((Ptr) GLmacroch_50); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_50(void) {	/* shrpplu0 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_46);
	{aRet = ((Ptr) GXreadi); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_49(void) {	/* shrpplu1 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_51);
	{aRet = ((Ptr) GXreadi); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_51(void) {	/* ret_call_readi_30 */
   {	register Ptr aRet;
	GIa1 = GInil;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXshrpmoi(void) {	/* - */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_52);
	{aRet = ((Ptr) GXreadi); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_52(void) {	/* ret_call_readi_31 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_53);
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_53(void) {	/* ret_call_evala1_32 */
   {	register Ptr aRet;
	if (GIa1 != GInil)	{aRet = ((Ptr) GLmacroch_49); goto lRet;}
	{aRet = ((Ptr) GLmacroch_50); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXshrpquo(void) {	/* #:gell:' */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_54);
	{aRet = ((Ptr) GXreadi); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_54(void) {	/* ret_call_readi_33 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
	GIa1 = rA1; rA1 = llrt_cons (GMfunction, rA1);
	{aRet = ((Ptr) GLmacroch_46); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXshrpsla(void) {	/* / */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_55);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_55(void) {	/* ret_call_getch_34 */
   {	register Ptr aRet;
	GIa1 = GIa4;
	{aRet = ((Ptr) GLmacroch_56); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXshrpbak(void) {	/* \ */
   {	register Ptr aRet, rSp, rA2;
	rSp = GIsp; rA2 = GIa2;
	rA2 = GMstatrc;
	(--rSp)->Val = rA2->Val;
	rA2->Val = GInil;
	(--rSp)->Val = ((Ptr) GLmacroch_57);
	{aRet = ((Ptr) GXreadi); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLmacroch_57(void) {	/* ret_call_readi_35 */
   {	register Ptr aRet, rSp, rA2;
	rSp = GIsp; rA2 = GIa2;
	rA2 = GMstatrc;
	rA2->Val = (rSp++)->Val;
	rA2 = GMshrpval;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = ((Ptr) GLmacroch_58);
	{aRet = ((Ptr) GXgetprop); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLmacroch_58(void) {	/* ret_call_getprop_36 */
   {	register Ptr aRet;
	GIa2 = (GIsp++)->Val;
	if (GIa1 != GInil)	{aRet = ((Ptr) GLmacroch_56); goto lRet;}
	{aRet = ((Ptr) GLmacroch_59); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_59(void) {	/* shrpbak1 */
   {	register Ptr aRet;
	GIa1 = GIa2;
	GIa2 = GMshrpval;
	{aRet = ((Ptr) GXerrudv); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXshrphat(void) {	/* #:gell:^ */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_60);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_60(void) {	/* ret_call_getch_37 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	rA4 = (Ptr) ((UFix) (rA4) & (UFix) 31);
	GIa1 = rA4;
	{aRet = ((Ptr) GLmacroch_56); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

extern Ptr GXshrpcol(void) {	/* #:gell:: */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = (Ptr) ((unsigned char) *(((char *) (GItabch->Val + 2)) + (Fix) 58));
	(--rSp)->Val = GIa2;
	(--rSp)->Val = GIcpkgc;
	GIa3 = ((Ptr) GLmacroch_61);
	(--rSp)->Val = ((Ptr) GLmacroch_62);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmacroch_62(void) {	/* ret_call_sysprot_38 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	GIcpkgc = (rSp++)->Val;
	*((char *) (GItabch->Val + 2) + (Fix) 58) = (char) rSp->Val;
	rSp += (Fix) 1;
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmacroch_61(void) {	/* shrpcol1 */
   {	register Ptr aRet;
	GIcpkgc = GInil;
	*((char *) (GItabch->Val + 2) + (Fix) 58) = (char) (Ptr) 8;
	(--GIsp)->Val = ((Ptr) GLmacroch_63);
	{aRet = ((Ptr) GXreadi); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_63(void) {	/* ret_call_readi_39 */
   {	register Ptr aRet;
	if ((long) GIa1 < (long) GIbcons)	{aRet = ((Ptr) GLmacroch_64); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLmacroch_65);
	{aRet = ((Ptr) GXgetcv); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_65(void) {	/* ret_call_getcv_40 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if (GIa4 == (Ptr) 58)	goto l_shrpcol2;
	(--rSp)->Val = ((Ptr) GLmacroch_64);
	{aRet = ((Ptr) GXrereada4); goto lRet;}
l_shrpcol2:
	GIcpkgc = GIa1;
	(--rSp)->Val = ((Ptr) GLmacroch_64);
	{aRet = ((Ptr) GXreadi); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmacroch_64(void) {	/* shrpcol3 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
	{aRet = (GIsp++)->Val; goto lRet;}
l_shrpcoer:
	rA1 = (Ptr) 6;
	GIa2 = GMshrpcol;
	{aRet = ((Ptr) GXerrsxt); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXshrpdol(void) {	/* $ */
   {	register Ptr aRet;
	(--GIsp)->Val = GMshrpdol;
	GIa1 = (Ptr) 16;
	{aRet = ((Ptr) GLmacroch_66); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXshrpprc(void) {	/* % */
   {	register Ptr aRet;
	(--GIsp)->Val = GMshrpprc;
	GIa1 = (Ptr) 2;
	{aRet = ((Ptr) GLmacroch_66); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXshrprad(void) {	/* r */
   {	register Ptr aRet;
	(--GIsp)->Val = GMshrprad;
	{aRet = ((Ptr) GLmacroch_66); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_66(void) {	/* shrprad1 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_67);
	{aRet = ((Ptr) GLmacroch_68); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_67(void) {	/* ret_call_shrprad2_43 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if ((long) rA1 < (long) GIbcons)	{aRet = ((Ptr) GLmacroch_69); goto lRet;}
	if (rA1->Val >= GIbfloat)	{aRet = ((Ptr) GLmacroch_69); goto lRet;}
	rSp += (Fix) 1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmacroch_68(void) {	/* shrprad2 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIibase;
	GIibase = GIa1;
	GIa3 = ((Ptr) GXreadi);
	(--rSp)->Val = ((Ptr) GLmacroch_70);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmacroch_70(void) {	/* ret_call_sysprot_44 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	rA1 = (rSp++)->Val;
	GIibase = (rSp++)->Val;
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmacroch_69(void) {	/* shrpradr */
   {	register Ptr aRet;
	GIa2 = (GIsp++)->Val;
	{aRet = ((Ptr) GXerrsxt); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXshrpgui(void) {	/* " */
   {	register Ptr aRet;
	GIa1 = GInil;
	{aRet = ((Ptr) GLmacroch_71); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_72(void) {	/* shrpgui1 */
   {	register Ptr aRet;
	 GIa1 = llrt_cons (GIa4, GIa1);
	{aRet = ((Ptr) GLmacroch_71); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_71(void) {	/* shrpgui2 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_73);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_73(void) {	/* ret_call_getch_45 */
   {	register Ptr aRet;
	if (GIa4 != (Ptr) 34)	{aRet = ((Ptr) GLmacroch_72); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLmacroch_74);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_74(void) {	/* ret_call_getch_46 */
   {	register Ptr aRet;
	if (GIa4 == (Ptr) 34)	{aRet = ((Ptr) GLmacroch_72); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLmacroch_75);
	{aRet = ((Ptr) GXrereada4); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_75(void) {	/* ret_call_rereada4_47 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_76);
	{aRet = ((Ptr) GXnreverse); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_76(void) {	/* ret_call_nreverse_48 */
   {	register Ptr aRet;
	 GIa1 = llrt_cons (GIa1, GInil);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXshrpbar(void) {	/* | */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_77);
	{aRet = ((Ptr) GXgetcv); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_77(void) {	/* shrpbari */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	if (rA4 == (Ptr) 35)	{aRet = ((Ptr) GLmacroch_78); goto lRet;}
	if (rA4 != (Ptr) 124)	{aRet = ((Ptr) GXshrpbar); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLmacroch_79);
	{aRet = ((Ptr) GXgetcv); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_79(void) {	/* ret_call_getcv_50 */
   {	register Ptr aRet;
	if (GIa4 != (Ptr) 35)	{aRet = ((Ptr) GLmacroch_77); goto lRet;}
	GIa1 = GInil;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_78(void) {	/* shrpbar0 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_80);
	{aRet = ((Ptr) GXgetcv); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_80(void) {	/* ret_call_getcv_51 */
   {	register Ptr aRet;
	if (GIa4 != (Ptr) 124)	{aRet = ((Ptr) GLmacroch_77); goto lRet;}
	(--GIsp)->Val = ((Ptr) GXshrpbar);
	{aRet = ((Ptr) GXshrpbar); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXshrppar(void) {	/* ( */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_81);
	{aRet = ((Ptr) GXread2); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_81(void) {	/* ret_call_read2_52 */
   {	register Ptr aRet, rA1, rBcons;
	rA1 = GIa1; rBcons = GIbcons;
	if ((long) rA1 < (long) rBcons)	goto l_shrpprr;
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA1 - (TableElem) rBcons);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		GIbtbin[aux] |= mask;}
l_shrpprr:
	GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXshrpbra(void) {	/* #:gell:[ */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_82);
	{aRet = ((Ptr) GLmacroch_83); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_82(void) {	/* ret_call_shrpbra0_53 */
   {	register Ptr aRet;
	if (GIcpkgc == GInil)	{aRet = ((Ptr) GLmacroch_46); goto lRet;}
	(GIa1 + 1)->Val = GIcpkgc;
	{aRet = ((Ptr) GLmacroch_46); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_83(void) {	/* shrpbra0 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIcpkgc;
	GIa3 = ((Ptr) GLmacroch_84);
	(--rSp)->Val = ((Ptr) GLmacroch_85);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmacroch_85(void) {	/* ret_call_sysprot_54 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	GIcpkgc = (rSp++)->Val;
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmacroch_84(void) {	/* shrpbra1 */
   {	register Ptr aRet;
	GIcpkgc = GInil;
	GIa1 = (Ptr) 93;
	(--GIsp)->Val = ((Ptr) GLmacroch_86);
	{aRet = ((Ptr) GXreaddltd); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_86(void) {	/* ret_call_readdltd_55 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = ((Ptr) GLmacroch_87);
	{aRet = ((Ptr) GXlllength); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmacroch_87(void) {	/* ret_call_lllength_56 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	GIa2 = GInil;
	(--rSp)->Val = ((Ptr) GLmacroch_88);
	{aRet = ((Ptr) GXmakevect); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmacroch_88(void) {	/* ret_call_makevect_57 */
   {	register Ptr aRet, rSp, rA2, rA3, rA4;
	rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	rA3 = (rSp++)->Val;
	rA2 = (rSp++)->Val;
	rA4 = (Ptr) 0;
	goto l_shrpbra3;
l_shrpbra2:
	(GIa1->Val + 2 + (Fix) (rA4))->Val = rA2->Val;
	rA2 = (rA2 + 1)->Val;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
l_shrpbra3:
	if (rA4 != rA3)	goto l_shrpbra2;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmacroch_56(void) {	/* lowbyte */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = ((Ptr) GLmacroch_46);
	(--rSp)->Val = ((Ptr) GLmacroch_89);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmacroch_89(void) {	/* ret_call_getch_58 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if (GIa4 == (Ptr) 124)	goto l_lowbyte0;
	{aRet = ((Ptr) GXrereada4); goto lRet;}
l_lowbyte0:
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLmacroch_90); goto lRet;}
	rA1 = (Ptr) (UFix) ((UFix) (rA1) << 8);
	(--GIsp)->Val = ((Ptr) GLmacroch_91);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmacroch_91(void) {	/* ret_call_getch_59 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	if (rA4 == (Ptr) 47)	goto l_lowbyte2;
	if (rA4 == (Ptr) 94)	{aRet = ((Ptr) GLmacroch_92); goto lRet;}
	if (rA4 == (Ptr) 92)	{aRet = ((Ptr) GLmacroch_93); goto lRet;}
	GIa1 = rA4;
	GIa2 = GMslowbyte;
	{aRet = ((Ptr) GXerrsxt); goto lRet;}
l_lowbyte2:
	(--GIsp)->Val = ((Ptr) GLmacroch_94);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_94(void) {	/* lowbytre */
   {	register Ptr aRet;
	GIa1 = (Ptr) ((UFix) (GIa1) | (UFix) (GIa4));
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_92(void) {	/* lowbyte3 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_95);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_95(void) {	/* ret_call_getch_61 */
   {	register Ptr aRet;
	GIa4 = (Ptr) ((UFix) (GIa4) & (UFix) 31);
	{aRet = ((Ptr) GLmacroch_94); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_93(void) {	/* lowbyte4 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = ((Ptr) GLmacroch_96);
	{aRet = ((Ptr) GXreadi); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmacroch_96(void) {	/* ret_call_readi_62 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	GIa2 = GMshrpval;
	(--rSp)->Val = ((Ptr) GLmacroch_97);
	{aRet = ((Ptr) GXgetprop); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmacroch_97(void) {	/* ret_call_getprop_63 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	GIa2 = (rSp++)->Val;
	GIa4 = (rSp++)->Val;
	if (rA1 == GInil)	{aRet = ((Ptr) GLmacroch_59); goto lRet;}
	if (rA1 < GIbfloat)	{aRet = ((Ptr) GLmacroch_94); goto lRet;}
	{aRet = ((Ptr) GLmacroch_90); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmacroch_90(void) {	/* lowbyte5 */
   {	register Ptr aRet;
	GIa2 = GIa1;
	GIa1 = GMshrpval;
	{aRet = ((Ptr) GXerrnia); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllcolon(void) {	/* : */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	rA1 = GMsyscol;
	rA1 = rA1->Val;
	*((char *) (GItabch->Val + 2) + (Fix) 58) = (char) (Ptr) 8;
	GIa3 = ((Ptr) GXrdpkgc2);
	(--GIsp)->Val = ((Ptr) GLmacroch_98);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmacroch_98(void) {	/* ret_call_sysprot_64 */
   {	register Ptr aRet;
	*((char *) (GItabch->Val + 2) + (Fix) 58) = (char) (Ptr) 10;
	GIa1 = (GIsp++)->Val;
	{aRet = GIa3; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllhat(void) {	/* ^ */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLmacroch_99);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_99(void) {	/* ret_call_getch_65 */
   {	register Ptr aRet;
	GIa4 = (Ptr) ((UFix) (GIa4) & (UFix) 31);
	{aRet = ((Ptr) GXasciii); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXlllbra(void) {	/* [ */
   {	register Ptr aRet;
	GIa1 = GMlllbra;
	{aRet = ((Ptr) GLmacroch_100); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_100(void) {	/* lllbra1 */
   {	register Ptr aRet;
	GIa2 = GMlread;
	{aRet = ((Ptr) GXerrudf); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllrbra(void) {	/* ] */
   {	register Ptr aRet;
	GIa1 = GMllrbra;
	{aRet = ((Ptr) GLmacroch_100); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXtypech(void) {	/* typech */
   {	register Ptr aRet;
	GIa2 = GMtypech;
	{aRet = ((Ptr) GLmacroch_101); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_101(void) {	/* typech0 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat;
	if (rA4 == (Ptr) 1)	{aRet = ((Ptr) GLmacroch_102); goto lRet;}
	if (rA4 == (Ptr) 2)	goto l_typechs1;
	rA1 = (Ptr) 2;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
l_typechs1:
	rA1 = (rSp++)->Val;
	if (rA1 < rBfloat)	goto l_typechs5;
	rA3 = (Ptr) 14;
l_typechs2:
	rA4 = (GItabctyp->Val + 2 + (Fix) (rA3))->Val;
	if (rA1 == rA4)	goto l_typechs4;
	{register Fix aux;
		aux = (Fix) (rA3) - 1;
		rA3 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_typechs2;}
	{aRet = ((Ptr) GXerrnia); goto lRet;}
l_typechs4:
	rA1 = rA3;
	goto l_typechs6;
l_typechs5:
	if ((Fix) (rA1) < (Fix) 0)	{aRet = ((Ptr) GXerroob); goto lRet;}
	if ((Fix) (rA1) > (Fix) 14)	{aRet = ((Ptr) GXerroob); goto lRet;}
l_typechs6:
	rA1 = (GItabccod->Val + 2 + (Fix) (rA1))->Val;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = rA1;
		rA1 = aux;}
	if (rA2 == GMtypech)	goto l_typechs7;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GXerrnia); goto lRet;}
	if ((Fix) (rA1) < (Fix) 0)	{aRet = ((Ptr) GXerroob); goto lRet;}
	if ((Fix) (rA1) >= (Fix) 256)	{aRet = ((Ptr) GXerroob); goto lRet;}
	{aRet = ((Ptr) GLmacroch_103); goto lRet;}
l_typechs7:
	GIsavea4 = rA2;
	(--rSp)->Val = ((Ptr) GLmacroch_104);
	{aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmacroch_104(void) {	/* ret_call_stringa1_66 */
   {	register Ptr aRet;
	GIa1 = (Ptr) ((unsigned char) *(((char *) (GIa1->Val + 2)) + (Fix) 0));
	{aRet = ((Ptr) GLmacroch_103); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_103(void) {	/* typechs8 */
   {	register Ptr aRet, rSp, rA2;
	rSp = GIsp; rA2 = GIa2;
	rA2 = (rSp++)->Val;
	*((char *) (GItabch->Val + 2) + (Fix) (GIa1)) = (char) rA2;
	GIa1 = (GItabctyp->Val + 2 + (Fix) (rA2))->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLmacroch_102(void) {	/* typechg1 */
   {	register Ptr aRet, rSp, rA1, rA2;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
	rA1 = (rSp++)->Val;
	if (rA2 == GMtypech)	goto l_typechg5;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GXerrnia); goto lRet;}
	if ((Fix) (rA1) < (Fix) 0)	{aRet = ((Ptr) GXerroob); goto lRet;}
	if ((Fix) (rA1) >= (Fix) 256)	{aRet = ((Ptr) GXerroob); goto lRet;}
	{aRet = ((Ptr) GLmacroch_105); goto lRet;}
l_typechg5:
	GIsavea4 = rA2;
	(--rSp)->Val = ((Ptr) GLmacroch_106);
	{aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmacroch_106(void) {	/* ret_call_stringa1_67 */
   {	register Ptr aRet;
	GIa1 = (Ptr) ((unsigned char) *(((char *) (GIa1->Val + 2)) + (Fix) 0));
	{aRet = ((Ptr) GLmacroch_105); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmacroch_105(void) {	/* typechg7 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	rA1 = (Ptr) ((unsigned char) *(((char *) (GItabch->Val + 2)) + (Fix) (rA1)));
	rA1 = (GItabctyp->Val + 2 + (Fix) (rA1))->Val;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXtypecod(void) {	/* typecn */
   {	register Ptr aRet;
	GIa2 = GMtypecod;
	{aRet = ((Ptr) GLmacroch_101); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDmacroch_107() {	/* trace dmc */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,0,1,2);
  lRet:  return (aRet);}}

static Ptr GDmacroch_108() {	/* trace dms */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,3,1,2);
  lRet:  return (aRet);}}

static Ptr GDmacroch_109() {	/* trace defsharp */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,4,1,2);
  lRet:  return (aRet);}}

static Ptr GDmacroch_110() {	/* trace ' */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,5,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_111() {	/* trace , */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,7,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_112() {	/* trace ` */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,8,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_113() {	/* trace # */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,9,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_114() {	/* trace . */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,10,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_115() {	/* trace + */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,11,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_116() {	/* trace - */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,12,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_117() {	/* trace #:gell:' */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,13,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_118() {	/* trace / */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,14,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_119() {	/* trace \ */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,15,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_120() {	/* trace #:gell:^ */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,16,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_121() {	/* trace #:gell:: */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,17,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_122() {	/* trace $ */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,18,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_123() {	/* trace % */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,19,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_124() {	/* trace r */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,20,1,21);
  lRet:  return (aRet);}}

static Ptr GDmacroch_125() {	/* trace " */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,22,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_126() {	/* trace | */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,23,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_127() {	/* trace ( */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,24,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_128() {	/* trace #:gell:[ */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,25,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_129() {	/* trace : */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,26,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_130() {	/* trace ^ */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,27,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_131() {	/* trace [ */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,28,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_132() {	/* trace ] */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,29,1,6);
  lRet:  return (aRet);}}

static Ptr GDmacroch_133() {	/* trace typech */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,30,1,31);
  lRet:  return (aRet);}}

static Ptr GDmacroch_134() {	/* trace typecn */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYmacroch,32,1,31);
  lRet:  return (aRet);}}

