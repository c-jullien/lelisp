/* GELL 15.26: source file for the module: "toperr" */
/*             translation done:           "Sat Oct   7 17 20:52:59 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "toperr.h" 

static Ptr GLtoperr_1(void) {	/* startmodule */
   {	register Ptr aRet;
	{aRet = ((Ptr) GXini_top); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXini_top(void) {	/* ini_top */
   {	register Ptr aRet;
	{ llrt_inicst ((Ptr) 5, (Ptr) "subr0", (Ptr) &GMlsubr0);}
	{ llrt_inicst ((Ptr) 5, (Ptr) "subr1", (Ptr) &GMlsubr1);}
	{ llrt_inicst ((Ptr) 5, (Ptr) "subr2", (Ptr) &GMlsubr2);}
	{ llrt_inicst ((Ptr) 5, (Ptr) "subr3", (Ptr) &GMlsubr3);}
	{ llrt_inicst ((Ptr) 5, (Ptr) "nsubr", (Ptr) &GMnlsubr);}
	{ llrt_inicst ((Ptr) 5, (Ptr) "fsubr", (Ptr) &GMflsubr);}
	{ llrt_inicst ((Ptr) 4, (Ptr) "expr", (Ptr) &GMllexpr);}
	{ llrt_inicst ((Ptr) 5, (Ptr) "fexpr", (Ptr) &GMllfexpr);}
	{ llrt_inicst ((Ptr) 5, (Ptr) "macro", (Ptr) &GMllmacro);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "dmacro", (Ptr) &GMlldmacro);}
	{ llrt_inicst ((Ptr) 5, (Ptr) "msubr", (Ptr) &GMllmsubr);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "dmsubr", (Ptr) &GMlldmsubr);}
	{ llrt_inisymb ((Ptr) 8, (Ptr) "toplevel", ((Ptr) GXtoplevel), (Ptr) &GMtoplevel, (Ptr) GFtoplevel);}
	GIcpkgc = GMllsystem;
	{ llrt_inicst ((Ptr) 13, (Ptr) "toplevel-flag", (Ptr) &GMstatoplevel);}
	GIa1->Val = GMt;
	{ llrt_inicst ((Ptr) 10, (Ptr) "print-msgs", (Ptr) &GMprtmsgs);}
	GIa1->Val = (Ptr) 1;
	{ llrt_inicst ((Ptr) 12, (Ptr) "length-float", (Ptr) &GMprtfltl);}
	GIa1->Val = (Ptr) 3;
	{ llrt_inicst ((Ptr) 9, (Ptr) "error-tag", (Ptr) &GMfatalerror);}
	GIcpkgc = GInil;
	{ llrt_inisymb ((Ptr) 7, (Ptr) "runtime", ((Ptr) GXrunt), (Ptr) &GMrunt, (Ptr) GFrunt);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "sleep", ((Ptr) GXllsleep), (Ptr) &GMllsleep, (Ptr) GFllsleep);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "date", ((Ptr) GXlldate), (Ptr) &GMlldate, (Ptr) GFlldate);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "clockalarm", ((Ptr) GXclkalarm), (Ptr) &GMclkalarm, (Ptr) GFclkalarm);}
	{ llrt_inisymb ((Ptr) 15, (Ptr) "with-interrupts", ((Ptr) GXwithit), (Ptr) &GMwithit, (Ptr) GFwithit);}
	{ llrt_inisymb ((Ptr) 18, (Ptr) "without-interrupts", ((Ptr) GXwithnoit), (Ptr) &GMwithnoit, (Ptr) GFwithnoit);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "time", ((Ptr) GXlltime), (Ptr) &GMlltime, (Ptr) GFlltime);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "stack-info", ((Ptr) GXllshwstk), (Ptr) &GMllshwstk, (Ptr) GFllshwstk);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "comline", ((Ptr) GXllcline), (Ptr) &GMllcline, (Ptr) GFllcline);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "getenv", ((Ptr) GXllgetenv), (Ptr) &GMllgetenv, (Ptr) GFllgetenv);}
	{ llrt_inisymb ((Ptr) 9, (Ptr) "getglobal", ((Ptr) GXllgetadr), (Ptr) &GMllgetadr, (Ptr) GFllgetadr);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "callextern", ((Ptr) GXllcallx), (Ptr) &GMllcallx, (Ptr) GFllcallx);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "cstack", ((Ptr) GXcstack), (Ptr) &GMcstack, (Ptr) GFcstack);}
	{ llrt_inisymb ((Ptr) 8, (Ptr) "syserror", ((Ptr) GXsyserror), (Ptr) &GMsyserror, (Ptr) GFsyserror);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "error", ((Ptr) GXlerror), (Ptr) &GMlerror, (Ptr) GFlerror);}
	{ llrt_inisymb ((Ptr) 8, (Ptr) "sysdebug", ((Ptr) GXsysdebug), (Ptr) &GMsysdebug, (Ptr) GFsysdebug);}
	GIa1->Val = GInil;
	{ llrt_inicst ((Ptr) 3, (Ptr) "** ", (Ptr) &GMmserror);}
	{ llrt_inicst ((Ptr) 3, (Ptr) " : ", (Ptr) &GMcolon);}
	{ llrt_inicst ((Ptr) 7, (Ptr) "errfstk", (Ptr) &GMerrfstk);}
	{ llrt_inicst ((Ptr) 7, (Ptr) "errfsgc", (Ptr) &GMerrfsgc);}
	{ llrt_inicst ((Ptr) 7, (Ptr) "errfsud", (Ptr) &GMerrfsud);}
	{ llrt_inicst ((Ptr) 7, (Ptr) "errfpgc", (Ptr) &GMerrfpgc);}
	{ llrt_inicst ((Ptr) 7, (Ptr) "errfsym", (Ptr) &GMerrfsym);}
	{ llrt_inicst ((Ptr) 7, (Ptr) "errfcns", (Ptr) &GMerrfcns);}
	{ llrt_inicst ((Ptr) 7, (Ptr) "errfflt", (Ptr) &GMerrfflt);}
	{ llrt_inicst ((Ptr) 7, (Ptr) "errffix", (Ptr) &GMerrffix);}
	{ llrt_inicst ((Ptr) 7, (Ptr) "errfhep", (Ptr) &GMerrfhep);}
	{ llrt_inicst ((Ptr) 7, (Ptr) "errfstr", (Ptr) &GMerrfstr);}
	{ llrt_inicst ((Ptr) 7, (Ptr) "errfvec", (Ptr) &GMerrfvec);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errmac", (Ptr) &GMerrmac);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errudv", (Ptr) &GMerrudv);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errudf", (Ptr) &GMerrudf);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errudm", (Ptr) &GMerrudm);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errudt", (Ptr) &GMerrudt);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errbdf", (Ptr) &GMerrbdf);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errwna", (Ptr) &GMerrwna);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errbpa", (Ptr) &GMerrbpa);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errbal", (Ptr) &GMerrbal);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errilb", (Ptr) &GMerrilb);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errsxt", (Ptr) &GMerrsxt);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errios", (Ptr) &GMerrios);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "err0dv", (Ptr) &GMerr0dv);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errnna", (Ptr) &GMerrnna);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errnia", (Ptr) &GMerrnia);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errnfa", (Ptr) &GMerrnfa);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errnsa", (Ptr) &GMerrnsa);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errnaa", (Ptr) &GMerrnaa);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errnla", (Ptr) &GMerrnla);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errnva", (Ptr) &GMerrnva);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "erroob", (Ptr) &GMerroob);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errstl", (Ptr) &GMerrstl);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errvec", (Ptr) &GMerrvec);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errnda", (Ptr) &GMerrnda);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errstc", (Ptr) &GMerrstc);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errsym", (Ptr) &GMerrsym);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errgen", (Ptr) &GMerrgen);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errnab", (Ptr) &GMerrnab);}
	{ llrt_inicst ((Ptr) 6, (Ptr) "errxia", (Ptr) &GMerrxia);}
	{ llrt_inicst ((Ptr) 5, (Ptr) "break", (Ptr) &GMbreak);}
	{ llrt_inisymb ((Ptr) 14, (Ptr) "user-interrupt", ((Ptr) GXuserit), (Ptr) &GMuserit, (Ptr) GFuserit);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "mouse", ((Ptr) GXmouse), (Ptr) &GMmouse, (Ptr) GFmouse);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "clock", ((Ptr) GXlltclock), (Ptr) &GMlltclock, (Ptr) GFlltclock);}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXsystop(void) {	/* systop */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIdlink = GInil;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind0);
	GIdlink = rSp;
	{aRet = ((Ptr) GLtoperr_2); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoperr_2(void) {	/* systop2 */
   {	register Ptr aRet;
	GIa1 = GMtoplevel;
	GIa2 = GInil;
	(--GIsp)->Val = ((Ptr) GLtoperr_2);
	{aRet = ((Ptr) GXitsoft); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXtoplevel(void) {	/* toplevel */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLtoperr_3);
	{aRet = ((Ptr) GXlread); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_3(void) {	/* ret_call_lread_2 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = ((Ptr) GLtoperr_4);
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GInil;
	GIa4 = (Ptr) 2;
	{aRet = ((Ptr) GXeval); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoperr_4(void) {	/* toplevr */
   {	register Ptr aRet, rSp, rA2;
	rSp = GIsp; rA2 = GIa2;
	rA2 = GMstatoplevel;
	rA2 = rA2->Val;
	if (rA2 == GInil)	{ aRet = (rSp++)->Val; goto lRet;}
	llrt_ttyout((Fix) 2, "= ");
	(--rSp)->Val = ((Ptr) GXpopj0);
	{aRet = ((Ptr) GXu_print); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

extern Ptr GXcstack(void) {	/* cstack */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = GInil;
	(--rSp)->Val = GIa1;
	GIa2 = rSp;
	GIa4 = GIdlink;
	{aRet = ((Ptr) GLtoperr_5); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoperr_5(void) {	/* evstck0 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
l_GLtoperr_5:
	if (rA2 == rA4)	goto l_evstck1;
	rA1 =  (rA2++)->Val;
	if (rA1 != ((Ptr) GXevprognr))	goto l_GLtoperr_5;
	rA1 =  (rA2++)->Val;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, rNil);
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons ((Ptr) 11, rA1);
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rSp->Val = llrt_cons (rA1, rSp->Val);
	goto l_GLtoperr_5;
l_evstck1:
	rA1 = rNil;
	rA3 =  (rA4++)->Val;
	if (rA3 == ((Ptr) GXunbind0))	goto l_evstkf;
	if (rA3 == ((Ptr) GXunbind1))	{aRet = ((Ptr) GLtoperr_6); goto lRet;}
	if (rA3 == ((Ptr) GXunbind2))	{aRet = ((Ptr) GLtoperr_7); goto lRet;}
	if (rA3 == ((Ptr) GXunbind3))	{aRet = ((Ptr) GLtoperr_8); goto lRet;}
	if (rA3 == ((Ptr) GXunbind4))	{aRet = ((Ptr) GLtoperr_9); goto lRet;}
	if (rA3 == ((Ptr) GXunbind5))	{aRet = ((Ptr) GLtoperr_10); goto lRet;}
	if (rA3 == ((Ptr) GXunbind6))	{aRet = ((Ptr) GLtoperr_11); goto lRet;}
	if (rA3 == ((Ptr) GXunbind7))	{aRet = ((Ptr) GLtoperr_12); goto lRet;}
	if (rA3 == ((Ptr) GXunbind8))	{aRet = ((Ptr) GLtoperr_13); goto lRet;}
	if (rA3 == ((Ptr) GXunbind9))	{aRet = ((Ptr) GLtoperr_14); goto lRet;}
	if (rA3 == ((Ptr) GXunbind10))	{aRet = ((Ptr) GLtoperr_15); goto lRet;}
	llrt_ttyout((Fix) 14, " error EVSTKF ");
l_evstkf:
	rA1 = (rSp++)->Val;
	{aRet = ((Ptr) GXnreverse); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLtoperr_16(void) {	/* evstck2 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa4;
	(--rSp)->Val = GIsavea4;
	(--rSp)->Val = ((Ptr) GLtoperr_17);
	{aRet = ((Ptr) GXnreverse); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoperr_17(void) {	/* ret_call_nreverse_4 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa4 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	GIsp = rSp; rSp->Val = llrt_cons (GIa1, rSp->Val);
	{aRet = ((Ptr) GLtoperr_5); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoperr_6(void) {	/* evstkl */
   {	register Ptr aRet, rA1, rA3, rA4;
	rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
	GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons ((Ptr) 1, rA1);
	GIsavea4 =  (rA4++)->Val;
	rA3 =  (rA4++)->Val;
	GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA3, rA1);
	rA3 =  (rA4++)->Val;
	GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA3, rA1);
	rA3 =  (rA4++)->Val;
	GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA3, rA1);
	GIa2 =  (rA4++)->Val;
	{aRet = ((Ptr) GLtoperr_18); goto lRet;}
  lRet: GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLtoperr_19(void) {	/* evstkl1 */
   {	register Ptr aRet;
	GIa3 =  (GIa4++)->Val;
	 GIa1 = llrt_cons (GIa3, GIa1);
	{aRet = ((Ptr) GLtoperr_18); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_18(void) {	/* evstkl2 */
   {	register Ptr aRet;
	{register Fix aux;
		aux = (Fix) (GIa2) - 1;
		GIa2 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	{aRet = ((Ptr) GLtoperr_19); goto lRet;}}
	{aRet = ((Ptr) GLtoperr_16); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_7(void) {	/* evstka */
   {	register Ptr aRet, rA1, rA2, rA3, rA4;
	rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons ((Ptr) 2, rA1);
	rA2 =  (rA4++)->Val;
	goto l_evstka4;
l_evstka3:
	GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA3, rA1);
	rA3 =  (rA4++)->Val;
	GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA3, rA1);
	rA3 =  (rA4++)->Val;
	GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA3, rA1);
l_evstka4:
	rA3 =  (rA4++)->Val;
	if (rA3 != (Ptr) 0)	goto l_evstka3;
	GIsavea4 = rA2;
	{aRet = ((Ptr) GLtoperr_16); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLtoperr_8(void) {	/* evstke */
   {	register Ptr aRet;
	GIa2 = (Ptr) 3;
	{aRet = ((Ptr) GLtoperr_20); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_9(void) {	/* evstks */
   {	register Ptr aRet;
	 GIa1 = llrt_cons ((Ptr) 4, GIa1);
	GIsavea4 =  (GIa4++)->Val;
	GIa2 = (Ptr) 10;
	{aRet = ((Ptr) GLtoperr_18); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_10(void) {	/* evstkb */
   {	register Ptr aRet;
	GIa2 = (Ptr) 5;
	{aRet = ((Ptr) GLtoperr_20); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_20(void) {	/* evstkb1 */
   {	register Ptr aRet;
	 GIa1 = llrt_cons (GIa2, GIa1);
	GIsavea4 =  (GIa4++)->Val;
l_evstkb2:
	GIa2 = (Ptr) 1;
	{aRet = ((Ptr) GLtoperr_18); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_11(void) {	/* evstku */
   {	register Ptr aRet;
	GIa2 = (Ptr) 6;
	{aRet = ((Ptr) GLtoperr_20); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_12(void) {	/* evstky */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	GIa4 = rA4; GIa1 = llrt_cons ((Ptr) 7, GIa1);
	GIsavea4 = rA4->Val;
	rA4 += (Fix) 1;
	{aRet = ((Ptr) GLtoperr_16); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLtoperr_13(void) {	/* evstkh */
   {	register Ptr aRet;
	GIa2 = (Ptr) 8;
	{aRet = ((Ptr) GLtoperr_20); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_14(void) {	/* evstkt */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	GIa4 = rA4; GIa1 = llrt_cons ((Ptr) 9, GIa1);
	GIsavea4 =  (rA4++)->Val;
	rA4 += (Fix) 1;
	GIa2 =  (rA4++)->Val;
	{aRet = ((Ptr) GLtoperr_18); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLtoperr_15(void) {	/* evstkk */
   {	register Ptr aRet;
	GIa2 = (Ptr) 10;
	{aRet = ((Ptr) GLtoperr_20); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllcline(void) {	/* comline */
   {	register Ptr aRet;
	GIsavea4 = GMllcline;
	(--GIsp)->Val = ((Ptr) GLtoperr_21);
	{aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_21(void) {	/* ret_call_stringa1_5 */
   {	register Ptr aRet;
	if (GIitstate == (Ptr) 0)	{aRet = ((Ptr) GLtoperr_22); goto lRet;}
	GIa3 = ((Ptr) GLtoperr_23);
	(--GIsp)->Val = ((Ptr) GLtoperr_24);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_24(void) {	/* ret_call_sysprot_6 */
   {	register Ptr aRet;
	GIa1 = (GIsp++)->Val;
	GIitstate = (Ptr) 1;
	{aRet = GIa3; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_23(void) {	/* llclin1 */
   {	register Ptr aRet;
	GIitstate = (Ptr) 0;
	{aRet = ((Ptr) GLtoperr_22); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_22(void) {	/* llclin2 */
   {	register Ptr aRet;
	llrt_cline(GIa1->Val + 2);
	GIa1 = GMt;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllgetenv(void) {	/* getenv */
   {	register Ptr aRet;
	GIsavea4 = GMllgetenv;
	(--GIsp)->Val = ((Ptr) GLtoperr_25);
	{aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_25(void) {	/* ret_call_stringa1_7 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	rA1 = (Ptr) getenvrn(rA1->Val + 2, GIbufat->Val + 2);
	if (rA1 != (Ptr) 0)	goto l_gtenv8;
	rA1 = GInil;
	{aRet = (GIsp++)->Val; goto lRet;}
l_gtenv8:
	GIa2 = GIbufat;
	{aRet = ((Ptr) GXtryatom); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXllgetadr(void) {	/* getglobal */
   {	register Ptr aRet;
	GIsavea4 = GMllgetadr;
	(--GIsp)->Val = ((Ptr) GLtoperr_26);
	{aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_26(void) {	/* ret_call_stringa1_8 */
   {	register Ptr aRet;
	GIa1 = (Ptr) llrt_getgloba(GIa1->Val + 2);
	{aRet = ((Ptr) GXloc); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllcallx(void) {	/* callextern */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	GIa1 = (rSp + (Fix) (rA4))->Val;
	GIa2 = GMllcallx;
	(--rSp)->Val = ((Ptr) GLtoperr_27);
	{aRet = ((Ptr) GXvaga1); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtoperr_27(void) {	/* ret_call_vaga1_9 */
   {	register Ptr aRet;
	(GIsp + (Fix) (GIa4))->Val = GIa1;
	GIa4 = (Ptr) ((UFix) ((Fix) (GIa4) + (Fix) (1)));
	GIa1 = (Ptr) llrt_callg(GIa4,GIa1);
	GIsp += (Fix) (GIa4);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXrunt(void) {	/* runtime */
   {	register Ptr aRet;
	 GIa1 = llrt_runtime();
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllsleep(void) {	/* sleep */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if (llrt_floatp (rA1) != 0) 
	goto l_llsleep1;
	if (rA1 >= GIbfloat)	goto l_llsleep2;
	GIa1 = rA1; rA1 = llrt_float (rA1);
l_llsleep1:
	llrt_sleep (rA1);
	{aRet = (GIsp++)->Val; goto lRet;}
l_llsleep2:
	GIa2 = GMllsleep;
	{aRet = ((Ptr) GXerrnna); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXlldate(void) {	/* date */
   {	register Ptr aRet;
	GIa1 = (Ptr) 8;
	GIa2 = GInil;
	(--GIsp)->Val = ((Ptr) GLtoperr_28);
	{aRet = ((Ptr) GXmakevect); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_28(void) {	/* ret_call_makevect_10 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	(rA1 + 1)->Val = GMlldate;
	cdate(rA1->Val + 2);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXclkalarm(void) {	/* clockalarm */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if (llrt_floatp (rA1) != 0) 
	goto l_alrms1;
	if (rA1 >= GIbfloat)	goto l_alrmer2;
	GIa1 = rA1; rA1 = llrt_float (rA1);
l_alrms1:
	GIa1 = rA1; rA1 = llrt_setalarm (rA1);
	{aRet = (GIsp++)->Val; goto lRet;}
l_alrmer2:
	GIa2 = GMclkalarm;
	{aRet = ((Ptr) GXerrnna); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXwithit(void) {	/* with-interrupts */
   {	register Ptr aRet;
	if (GIitstate != (Ptr) 0)	{aRet = ((Ptr) GXevprogn); goto lRet;}
	GIa3 = ((Ptr) GLtoperr_29);
	(--GIsp)->Val = ((Ptr) GLtoperr_30);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_30(void) {	/* ret_call_sysprot_11 */
   {	register Ptr aRet;
	GIa1 = (GIsp++)->Val;
	GIitstate = (Ptr) 0;
	{aRet = GIa3; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_29(void) {	/* withit1 */
   {	register Ptr aRet;
	GIitstate = (Ptr) 1;
	{aRet = ((Ptr) GXevprogn); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXwithnoit(void) {	/* without-interrupts */
   {	register Ptr aRet;
	if (GIitstate == (Ptr) 0)	{aRet = ((Ptr) GXevprogn); goto lRet;}
	GIa3 = ((Ptr) GLtoperr_31);
	(--GIsp)->Val = ((Ptr) GLtoperr_32);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_32(void) {	/* ret_call_sysprot_12 */
   {	register Ptr aRet;
	GIa1 = (GIsp++)->Val;
	GIitstate = (Ptr) 1;
	{aRet = GIa3; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_31(void) {	/* withno1 */
   {	register Ptr aRet;
	GIitstate = (Ptr) 0;
	{aRet = ((Ptr) GXevprogn); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXlltime(void) {	/* time */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIsp = rSp; GIa2 = llrt_runtime();
	(--rSp)->Val = GIa2;
	(--rSp)->Val = ((Ptr) GLtoperr_33);
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoperr_33(void) {	/* ret_call_evala1_13 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_runtime();
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = rA1;
		rA1 = aux;}
	(--rSp)->Val = rA1;
	GIa4 = (Ptr) 2;
	{aRet = ((Ptr) GXfldiff); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXllshwstk(void) {	/* stack-info */
   {	register Ptr aRet, rSp, rA2, rA3, rA4;
	rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	rA4 = rSp;
	rA2 = GIbstack;
	rA3 = GImstack;
l_llshwstk1:
	if (rSp < rA3)	goto l_llshwstk2;
	(--rSp)->Val = rA2;
	goto l_llshwstk1;
l_llshwstk2:
	rSp = rA4;
	(--rSp)->Val = ((Ptr) GLtoperr_34);
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLtoperr_34(void) {	/* ret_call_evala1_14 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	rA3 = rSp;
	rA1 = (Ptr) 0;
	rA2 = (Ptr) 0;
l_llshwstk3:
	rSp -= (Fix) 1;
	rA4 = (rSp + (Fix) 0)->Val;
	if (GIbstack == rA4)	goto l_llshwstk4;
	{register int aux;
		aux = (int) ((Fix) (rA1) + 1);
		if (aux < 1024) {
			rA1 = (Ptr) ((UFix) aux);
		 } else {
			rA1 = (Ptr) 0;
			rA2 = (Ptr) ((UFix) ((Fix) (rA2) + 1));}}
	goto l_llshwstk3;
l_llshwstk4:
	rSp = rA3;
	if ((Ptr) 0 == rA2)	{ aRet = (rSp++)->Val; goto lRet;}
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_llshwstk5:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXlerror(void) {	/* error */
   {	register Ptr aRet, rA3;
	rA3 = GIa3;
	GIa3 = rA3; rA3 = llrt_cons (rA3, GInil);
	GIa3 = rA3; rA3 = llrt_cons (GIa2, rA3);
	GIa3 = rA3; rA3 = llrt_cons (GIa1, rA3);
	GIa2 = rA3;
	GIa1 = GMsyserror;
	{aRet = ((Ptr) GXitsoft); goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

static Ptr GLtoperr_36(void) {	/* serror */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
	GIa1 = rA1; rA1 = llrt_cons (GIa3, rA1);
	GIa1 = rA1; GIa2 = llrt_cons (GIa2, rA1);
	rA1 = GMsyserror;
	{aRet = ((Ptr) GXitsoft); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLtoperr_37(void) {	/* ferror */
   {	register Ptr aRet, rSp, rA1, rA2;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
	(--rSp)->Val = rA1;
	rA2 = rA1->Val;
	if ((rA2 >= GIbstrg) && (rA2 < GIbsymb))	{aRet = ((Ptr) GLtoperr_38); goto lRet;}
	(--rSp)->Val = ((Ptr) GLtoperr_39);
	{aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLtoperr_39(void) {	/* ret_call_stringa1_15 */
   {	register Ptr aRet;
	GIa2 = GIa1;
	{aRet = ((Ptr) GLtoperr_38); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_38(void) {	/* ferror1 */
   {	register Ptr aRet, rA1, rA2, rNil;
	rA1 = GIa1; rA2 = GIa2; rNil = GInil;
	rA1 = (rA2->Val + 1)->Val;
	llrt_ttyout((Fix) (rA1), rA2->Val + 2);
	llrt_ttyout(2, "\n\r");
	rA1 = (GIsp++)->Val;
l_ferror2:
	rA1 = rNil;
	rA2 = GMfatalerror;
	GIa3 = rNil;
	GIa4 = rNil;
	{aRet = ((Ptr) GXfindtag); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXsyserror(void) {	/* syserror */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa3;
	(--rSp)->Val = GIa2;
	(--rSp)->Val = GIa1;
	GIa1 = GMmserror;
	(--rSp)->Val = ((Ptr) GLtoperr_40);
	{aRet = ((Ptr) GXprobj); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoperr_40(void) {	/* ret_call_probj_16 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	(--rSp)->Val = ((Ptr) GLtoperr_41);
	{aRet = ((Ptr) GXprobj); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoperr_41(void) {	/* ret_call_probj_17 */
   {	register Ptr aRet;
	GIa1 = GMcolon;
	(--GIsp)->Val = ((Ptr) GLtoperr_42);
	{aRet = ((Ptr) GXprobj); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_42(void) {	/* ret_call_probj_18 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	(--rSp)->Val = ((Ptr) GLtoperr_43);
	{aRet = ((Ptr) GXprobj); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoperr_43(void) {	/* ret_call_probj_19 */
   {	register Ptr aRet;
	GIa1 = GMcolon;
	(--GIsp)->Val = ((Ptr) GLtoperr_44);
	{aRet = ((Ptr) GXprobj); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_44(void) {	/* ret_call_probj_20 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	(--rSp)->Val = ((Ptr) GXreenter);
	{aRet = ((Ptr) GXprobjt); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXsysdebug(void) {	/* sysdebug */
   {	register Ptr aRet;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrfs(void) {	/* errfs */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = GMerrfstk;
	if (rSp < GImstack2)	{aRet = ((Ptr) GLtoperr_37); goto lRet;}
	GIa3 = ((Ptr) GLtoperr_45);
	(--rSp)->Val = ((Ptr) GLtoperr_46);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoperr_46(void) {	/* ret_call_sysprot_22 */
   {	register Ptr aRet;
	GIa1 = (GIsp++)->Val;
	GImstack = GImstack1;
	{aRet = GIa3; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_45(void) {	/* errfs0 */
   {	register Ptr aRet;
	GImstack = GImstack2;
	GIa3 = GIa1;
	GIa2 = GMeval;
	GIa1 = GInil;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrfsgc(void) {	/* errfsgc */
   {	register Ptr aRet;
	GIa1 = GMerrfsgc;
	{aRet = ((Ptr) GLtoperr_37); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerres(void) {	/* erres */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	GIa1 = GMerrfsud;
	rA2 = GIa1->Val;
	if ((rA2 >= GIbstrg) && (rA2 < GIbsymb))	{aRet = ((Ptr) GLtoperr_47); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLtoperr_48);
	{aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLtoperr_48(void) {	/* ret_call_stringa1_23 */
   {	register Ptr aRet;
	GIa2 = GIa1;
	{aRet = ((Ptr) GLtoperr_47); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_47(void) {	/* erres2 */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	GIa1 = (rA2->Val + 1)->Val;
	llrt_ttyout((Fix) (GIa1), rA2->Val + 2);
	llrt_ttyout(2, "\n\r");
	{aRet = ((Ptr) GXreenter); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrfsp(void) {	/* errfsp */
   {	register Ptr aRet;
	GIa1 = GMerrfpgc;
	{aRet = ((Ptr) GLtoperr_37); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrato(void) {	/* errato */
   {	register Ptr aRet;
	GIa1 = GMerrfsym;
	{aRet = ((Ptr) GLtoperr_37); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrfm(void) {	/* errfm */
   {	register Ptr aRet;
	GIa1 = GMerrfcns;
	{aRet = ((Ptr) GLtoperr_37); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrff(void) {	/* errff */
   {	register Ptr aRet;
	GIa1 = GMerrfflt;
	{aRet = ((Ptr) GLtoperr_37); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrfn(void) {	/* errfn */
   {	register Ptr aRet;
	GIa1 = GMerrffix;
	{aRet = ((Ptr) GLtoperr_37); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrfh(void) {	/* errfh */
   {	register Ptr aRet;
	GIa1 = GMerrfhep;
	{aRet = ((Ptr) GLtoperr_37); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrfr(void) {	/* errfr */
   {	register Ptr aRet;
	GIa1 = GMerrfstr;
	{aRet = ((Ptr) GLtoperr_37); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrfv(void) {	/* errfv */
   {	register Ptr aRet;
	GIa1 = GMerrfvec;
	{aRet = ((Ptr) GLtoperr_37); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrudv(void) {	/* errudv */
   {	register Ptr aRet;
	GIa3 = GMerrudv;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrudf(void) {	/* errudf */
   {	register Ptr aRet;
	GIa3 = GMerrudf;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrudm(void) {	/* errudm */
   {	register Ptr aRet;
	GIa3 = GMerrudm;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrudt(void) {	/* errudt */
   {	register Ptr aRet;
	GIa3 = GMerrudt;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrbdf(void) {	/* errbdf */
   {	register Ptr aRet;
	GIa3 = GMerrbdf;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrwna(void) {	/* errwna */
   {	register Ptr aRet;
	GIa3 = GMerrwna;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrbpa(void) {	/* errbpa */
   {	register Ptr aRet;
	GIa3 = GMerrbpa;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrbal(void) {	/* errbal */
   {	register Ptr aRet;
	GIa3 = GMerrbal;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrilb(void) {	/* errilb */
   {	register Ptr aRet;
	GIa3 = GMerrilb;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrsxt(void) {	/* errsxt */
   {	register Ptr aRet;
	GIa3 = GMerrsxt;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrios(void) {	/* errios */
   {	register Ptr aRet;
	GIa3 = GMerrios;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerr0dv(void) {	/* err0dv */
   {	register Ptr aRet;
	GIa3 = GMerr0dv;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrnaa(void) {	/* errnaa */
   {	register Ptr aRet;
	GIa3 = GMerrnaa;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrnna(void) {	/* errnna */
   {	register Ptr aRet;
	GIa3 = GMerrnna;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrnia(void) {	/* errnia */
   {	register Ptr aRet;
	GIa3 = GMerrnia;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrnfa(void) {	/* errnfa */
   {	register Ptr aRet;
	GIa3 = GMerrnfa;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrnsa(void) {	/* errnsa */
   {	register Ptr aRet;
	GIa3 = GMerrnsa;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrnla(void) {	/* errnla */
   {	register Ptr aRet;
	GIa3 = GMerrnla;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrnva(void) {	/* errnva */
   {	register Ptr aRet;
	GIa3 = GMerrnva;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrstl(void) {	/* errstl */
   {	register Ptr aRet;
	GIa3 = GMerrstl;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerroob(void) {	/* erroob */
   {	register Ptr aRet;
	GIa3 = GMerroob;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrvec(void) {	/* errvec */
   {	register Ptr aRet;
	GIa3 = GMerrvec;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrnda(void) {	/* errnda */
   {	register Ptr aRet;
	GIa3 = GMerrnda;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrstc(void) {	/* errstc */
   {	register Ptr aRet;
	GIa3 = GMerrstc;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrsym(void) {	/* errsym */
   {	register Ptr aRet;
	GIa3 = GMerrsym;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrgen(void) {	/* errgen */
   {	register Ptr aRet;
	GIa3 = GMerrgen;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrnab(void) {	/* errnab */
   {	register Ptr aRet;
	GIa3 = GMerrnab;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerrxia(void) {	/* errxia */
   {	register Ptr aRet;
	GIa3 = GMerrxia;
	{aRet = ((Ptr) GLtoperr_36); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllmerro(void) {	/* llmerro */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GIa2;
	(--rSp)->Val = GIa3;
	(--rSp)->Val = GIa4;
	(--rSp)->Val = ((Ptr) GLtoperr_49);
	{aRet = ((Ptr) GXllsystem); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoperr_49(void) {	/* ret_call_llsystem_24 */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	GIa2 = rA2; rA2 = llrt_cons (rA2, GInil);
	GIa2 = rA2; rA2 = llrt_cons (GMerrmac, rA2);
	GIa2 = rA2; rA2 = llrt_cons (GIa1, rA2);
	GIa1 = GMsyserror;
	(--GIsp)->Val = ((Ptr) GLtoperr_50);
	{aRet = ((Ptr) GXitsoft); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLtoperr_50(void) {	/* ret_call_itsoft_25 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa4 = (rSp++)->Val;
	GIa3 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXllbreak(void) {	/* llbreak */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GIa2;
	(--rSp)->Val = GIa3;
	(--rSp)->Val = GIa4;
	GIa1 = GMuserit;
	GIa2 = GInil;
	(--rSp)->Val = ((Ptr) GLtoperr_51);
	{aRet = ((Ptr) GXitsoft); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoperr_51(void) {	/* ret_call_itsoft_26 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa4 = (rSp++)->Val;
	GIa3 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXllpanic(void) {	/* llpanic */
   {	register Ptr aRet, rSp, rA2, rNil;
	rSp = GIsp; rA2 = GIa2; rNil = GInil;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = rA2;
	(--rSp)->Val = GIa3;
	(--rSp)->Val = GIa4;
	rA2 = rNil;
	GIsp = rSp; GIa2 = rA2; rA2 = llrt_cons (rA2, rNil);
	GIsp = rSp; GIa2 = rA2; rA2 = llrt_cons (GMbreak, rA2);
	GIsp = rSp; GIa2 = rA2; rA2 = llrt_cons (GMbreak, rA2);
	GIa1 = GMsyserror;
	(--rSp)->Val = ((Ptr) GLtoperr_52);
	{aRet = ((Ptr) GXitsoft); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLtoperr_52(void) {	/* ret_call_itsoft_27 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa4 = (rSp++)->Val;
	GIa3 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXllmouse(void) {	/* llmouse */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GIa2;
	(--rSp)->Val = GIa3;
	(--rSp)->Val = GIa4;
	GIa2 = GInil;
	GIa1 = GMmouse;
	(--rSp)->Val = ((Ptr) GLtoperr_53);
	{aRet = ((Ptr) GXitsoft); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoperr_53(void) {	/* ret_call_itsoft_28 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa4 = (rSp++)->Val;
	GIa3 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXllclock(void) {	/* llclock */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GIa2;
	(--rSp)->Val = GIa3;
	(--rSp)->Val = GIa4;
	GIa1 = GMlltclock;
	GIa2 = GInil;
	(--rSp)->Val = ((Ptr) GLtoperr_54);
	{aRet = ((Ptr) GXitsoft); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoperr_54(void) {	/* ret_call_itsoft_29 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa4 = (rSp++)->Val;
	GIa3 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXuserit(void) {	/* user-interrupt */
   {	register Ptr aRet;
	if (GIitstate == (Ptr) 1)	{aRet = ((Ptr) GLtoperr_55); goto lRet;}
	GIa3 = ((Ptr) GLtoperr_56);
	(--GIsp)->Val = ((Ptr) GLtoperr_57);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_57(void) {	/* ret_call_sysprot_30 */
   {	register Ptr aRet;
	GIa1 = (GIsp++)->Val;
	GIitstate = (Ptr) 0;
	{aRet = GIa3; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_56(void) {	/* userit1 */
   {	register Ptr aRet;
	GIitstate = (Ptr) 1;
	{aRet = ((Ptr) GLtoperr_55); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoperr_55(void) {	/* userit2 */
   {	register Ptr aRet, rA2, rNil;
	rA2 = GIa2; rNil = GInil;
	rA2 = rNil;
	GIa2 = rA2; rA2 = llrt_cons (rA2, rNil);
	GIa2 = rA2; rA2 = llrt_cons (GMbreak, rA2);
	GIa2 = rA2; rA2 = llrt_cons (GMbreak, rA2);
	GIa1 = GMsyserror;
	{aRet = ((Ptr) GXitsoft); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

extern Ptr GXmouse(void) {	/* mouse */
   {	register Ptr aRet;
	GIa1 = GInil;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXlltclock(void) {	/* clock */
   {	register Ptr aRet;
	GIa1 = GInil;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgetsetn(void) {	/* getsetn */
   {	register Ptr aRet, rSp, rA1, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
	if (rA4 == (Ptr) 0)	goto l_getsetn1;
	if (rA4 == (Ptr) 1)	goto l_getsetn2;
	rA1 = (Ptr) 1;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
l_getsetn1:
	rA4 = (rSp++)->Val;
	rA1 = rA3;
	rSp += (Fix) 2;
	{aRet = rA4; goto lRet;}
l_getsetn2:
	rA4 = (rSp++)->Val;
	rA3 = (rSp++)->Val;
	rA1 = (rSp + (Fix) 1)->Val;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GXerrnia); goto lRet;}
	if ((Fix) (rA1) > (Fix) (rA3))	{aRet = ((Ptr) GXerroob); goto lRet;}
	rA3 = (rSp++)->Val;
	if ((Fix) (rA1) < (Fix) (rA3))	{aRet = ((Ptr) GXerroob); goto lRet;}
	rA1 = (rSp++)->Val;
	{aRet = rA4; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GDtoperr_58() {	/* trace toplevel */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYtoperr,0,1,2);
  lRet:  return (aRet);}}

static Ptr GDtoperr_59() {	/* trace cstack */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYtoperr,3,1,2);
  lRet:  return (aRet);}}

static Ptr GDtoperr_60() {	/* trace comline */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYtoperr,4,1,5);
  lRet:  return (aRet);}}

static Ptr GDtoperr_61() {	/* trace getenv */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYtoperr,6,1,5);
  lRet:  return (aRet);}}

static Ptr GDtoperr_62() {	/* trace getglobal */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYtoperr,7,1,5);
  lRet:  return (aRet);}}

static Ptr GDtoperr_63() {	/* trace callextern */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYtoperr,8,1,9);
  lRet:  return (aRet);}}

static Ptr GDtoperr_64() {	/* trace runtime */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYtoperr,10,1,2);
  lRet:  return (aRet);}}

static Ptr GDtoperr_65() {	/* trace sleep */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYtoperr,11,1,5);
  lRet:  return (aRet);}}

static Ptr GDtoperr_66() {	/* trace date */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYtoperr,12,1,2);
  lRet:  return (aRet);}}

static Ptr GDtoperr_67() {	/* trace clockalarm */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYtoperr,13,1,5);
  lRet:  return (aRet);}}

static Ptr GDtoperr_68() {	/* trace with-interrupts */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYtoperr,14,1,15);
  lRet:  return (aRet);}}

static Ptr GDtoperr_69() {	/* trace without-interrupts */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYtoperr,16,1,15);
  lRet:  return (aRet);}}

static Ptr GDtoperr_70() {	/* trace time */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYtoperr,17,1,5);
  lRet:  return (aRet);}}

static Ptr GDtoperr_71() {	/* trace stack-info */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYtoperr,18,1,5);
  lRet:  return (aRet);}}

static Ptr GDtoperr_72() {	/* trace error */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYtoperr,19,1,20);
  lRet:  return (aRet);}}

static Ptr GDtoperr_73() {	/* trace syserror */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYtoperr,21,1,20);
  lRet:  return (aRet);}}

static Ptr GDtoperr_74() {	/* trace sysdebug */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYtoperr,22,1,2);
  lRet:  return (aRet);}}

static Ptr GDtoperr_75() {	/* trace user-interrupt */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYtoperr,23,1,2);
  lRet:  return (aRet);}}

static Ptr GDtoperr_76() {	/* trace mouse */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYtoperr,24,1,2);
  lRet:  return (aRet);}}

static Ptr GDtoperr_77() {	/* trace clock */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYtoperr,25,1,2);
  lRet:  return (aRet);}}

