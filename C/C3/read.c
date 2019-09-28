/* GELL 15.26: source file for the module: "read" */
/*             translation done:           "Sat Oct   7 17 20:53:12 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "read.h" 

static Ptr GLread_1(void) {	/* startmodule */
   {	register Ptr aRet;
	{aRet = ((Ptr) GXini_read); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXini_read(void) {	/* ini_read */
   {	register Ptr aRet;
	GIringur = GInil;
	GIcurread = GInil;
	GIimpli = GInil;
	GIimpld = GInil;
	GIcpkgc = GMllsystem;
	{ llrt_inicst ((Ptr) 14, (Ptr) "read-case-flag", (Ptr) &GMstatrc);}
	GIa1->Val = GInil;
	{ llrt_inicst ((Ptr) 12, (Ptr) "in-read-flag", (Ptr) &GMstinread);}
	GIa1->Val = GInil;
	GIcpkgc = GInil;
	{ llrt_inisymb ((Ptr) 4, (Ptr) "read", ((Ptr) GXlread), (Ptr) &GMlread, (Ptr) GFlread);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "implode", ((Ptr) GXimplode), (Ptr) &GMimplode, (Ptr) GFimplode);}
	{ llrt_inisymb ((Ptr) 9, (Ptr) "implodech", ((Ptr) GXimplodech), (Ptr) &GMimplodech, (Ptr) GFimplodech);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "readch", ((Ptr) GXreadch), (Ptr) &GMreadch, (Ptr) GFreadch);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "readcn", ((Ptr) GXreadcod), (Ptr) &GMreadcod, (Ptr) GFreadcod);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "curread", ((Ptr) GXlcuread), (Ptr) &GMlcuread, (Ptr) GFlcuread);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "teread", ((Ptr) GXteread), (Ptr) &GMteread, (Ptr) GFteread);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "reread", ((Ptr) GXreread), (Ptr) &GMreread, (Ptr) GFreread);}
	{ llrt_inisymb ((Ptr) 8, (Ptr) "readline", ((Ptr) GXreadline), (Ptr) &GMreadline, (Ptr) GFreadline);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "readstring", ((Ptr) GXreadstrg), (Ptr) &GMreadstrg, (Ptr) GFreadstrg);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "stratom", ((Ptr) GXstratom), (Ptr) &GMstratom, (Ptr) GFstratom);}
	{ llrt_inisymb ((Ptr) 19, (Ptr) "read-delimited-list", ((Ptr) GXreaddltd), (Ptr) &GMreaddltd, (Ptr) GFreaddltd);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "peekch", ((Ptr) GXpeekch), (Ptr) &GMpeekch, (Ptr) GFpeekch);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "peekcn", ((Ptr) GXpeekcn), (Ptr) &GMpeekcn, (Ptr) GFpeekcn);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "concatpkgc", ((Ptr) GXconcatpk), (Ptr) &GMconcatpk, (Ptr) GFconcatpk);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "ascii", ((Ptr) GXfascii), (Ptr) &GMfascii, (Ptr) GFfascii);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "cascii", ((Ptr) GXcascii), (Ptr) &GMcascii, (Ptr) GFcascii);}
	{ llrt_inisymb ((Ptr) 9, (Ptr) "uppercase", ((Ptr) GXuppercase), (Ptr) &GMuppercase, (Ptr) GFuppercase);}
	{ llrt_inisymb ((Ptr) 9, (Ptr) "lowercase", ((Ptr) GXlowercase), (Ptr) &GMlowercase, (Ptr) GFlowercase);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "asciip", ((Ptr) GXasciip), (Ptr) &GMasciip, (Ptr) GFasciip);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "digitp", ((Ptr) GXdigitp), (Ptr) &GMdigitp, (Ptr) GFdigitp);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "letterp", ((Ptr) GXletterp), (Ptr) &GMletterp, (Ptr) GFletterp);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "ibase", ((Ptr) GXfibase), (Ptr) &GMfibase, (Ptr) GFfibase);}
	GIibase = (Ptr) 10;
	GIa1 = (Ptr) 256;
	GIa2 = (Ptr) 12;
	(--GIsp)->Val = ((Ptr) GLread_2);
	{aRet = ((Ptr) GXmakestrg); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_2(void) {	/* ret_call_makestrg_1 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GItabch = rA1;
	*((char *) (rA1->Val + 2) + (Fix) 0) = (char) (Ptr) 0;
	*((char *) (rA1->Val + 2) + (Fix) 8) = (char) (Ptr) 7;
	*((char *) (rA1->Val + 2) + (Fix) 9) = (char) (Ptr) 7;
	*((char *) (rA1->Val + 2) + (Fix) 10) = (char) (Ptr) 2;
	*((char *) (rA1->Val + 2) + (Fix) 11) = (char) (Ptr) 7;
	*((char *) (rA1->Val + 2) + (Fix) 12) = (char) (Ptr) 7;
	*((char *) (rA1->Val + 2) + (Fix) 13) = (char) (Ptr) 2;
	*((char *) (rA1->Val + 2) + (Fix) 32) = (char) (Ptr) 7;
	*((char *) (rA1->Val + 2) + (Fix) 34) = (char) (Ptr) 11;
	*((char *) (rA1->Val + 2) + (Fix) 35) = (char) (Ptr) 9;
	*((char *) (rA1->Val + 2) + (Fix) 39) = (char) (Ptr) 10;
	*((char *) (rA1->Val + 2) + (Fix) 40) = (char) (Ptr) 4;
	*((char *) (rA1->Val + 2) + (Fix) 41) = (char) (Ptr) 5;
	*((char *) (rA1->Val + 2) + (Fix) 44) = (char) (Ptr) 10;
	*((char *) (rA1->Val + 2) + (Fix) 46) = (char) (Ptr) 6;
	*((char *) (rA1->Val + 2) + (Fix) 58) = (char) (Ptr) 10;
	*((char *) (rA1->Val + 2) + (Fix) 59) = (char) (Ptr) 1;
	*((char *) (rA1->Val + 2) + (Fix) 91) = (char) (Ptr) 10;
	*((char *) (rA1->Val + 2) + (Fix) 93) = (char) (Ptr) 10;
	*((char *) (rA1->Val + 2) + (Fix) 94) = (char) (Ptr) 10;
	*((char *) (rA1->Val + 2) + (Fix) 96) = (char) (Ptr) 10;
	*((char *) (rA1->Val + 2) + (Fix) 124) = (char) (Ptr) 13;
	*((char *) (rA1->Val + 2) + (Fix) 127) = (char) (Ptr) 0;
	GIlgbufat = (Ptr) 1024;
	rA1 = GIlgbufat;
	GIa2 = (Ptr) 0;
	(--GIsp)->Val = ((Ptr) GLread_3);
	{aRet = ((Ptr) GXmakestrg); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLread_3(void) {	/* ret_call_makestrg_2 */
   {	register Ptr aRet;
	GIbufat = GIa1;
	GIa1 = (Ptr) 128;
	GIa2 = (Ptr) 0;
	(--GIsp)->Val = ((Ptr) GLread_4);
	{aRet = ((Ptr) GXmakevect); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_4(void) {	/* ret_call_makevect_3 */
   {	register Ptr aRet;
	GIcachch = GIa1;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXhashint(void) {	/* hashint */
   {	register Ptr aRet;
	GIa2 = GIa1;
	GIa1 = (GIa2->Val + 1)->Val;
	{aRet = ((Ptr) GLread_5); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_5(void) {	/* hashfast */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	rA3 = rA1;
	if ((Fix) (rA1) <= (Fix) 6)	goto l_hashcour;
	(--rSp)->Val = rA3;
	rA3 = (Ptr) 5;
l_hashf1:
	rA4 = (Ptr) ((unsigned char) *(((char *) (rA2->Val + 2)) + (Fix) (rA3)));
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA1)));
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA4)));
	{register Fix aux;
		aux = (Fix) (rA3) - 1;
		rA3 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_hashf1;}
	rA3 = (Ptr) 5;
l_hashf5:
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = rA3;
		rA3 = aux;}
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) (1)));
	rA4 = (Ptr) ((unsigned char) *(((char *) (rA2->Val + 2)) + (Fix) (rA3)));
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA1)));
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA4)));
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = rA3;
		rA3 = aux;}
	{register Fix aux;
		aux = (Fix) (rA3) - 1;
		rA3 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_hashf5;}
	rA3 = (rSp++)->Val;
	goto l_hashend;
l_hashcour:
	if (rA1 == (Ptr) 0)	{ aRet = (rSp++)->Val; goto lRet;}
	goto l_hashcou3;
l_hashcou1:
	rA4 = (Ptr) ((unsigned char) *(((char *) (rA2->Val + 2)) + (Fix) (rA3)));
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA1)));
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA4)));
l_hashcou3:
	{register Fix aux;
		aux = (Fix) (rA3) - 1;
		rA3 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_hashcou1;}
l_hashend:
	rA1 = (Ptr) ((UFix) (rA1) & (UFix) 32767);
	rA4 = (GIhashtab->Val + 1)->Val;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) % (Fix) (rA4)));
l_hashret:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXinisymb(void) {	/* inisymb */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa4;
	(--rSp)->Val = GIa3;
	(--rSp)->Val = ((Ptr) GLread_6);
	{aRet = ((Ptr) GXcrastrg); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_6(void) {	/* ret_call_crastrg_4 */
   {	register Ptr aRet;
	GIa2 = GIa1;
	(--GIsp)->Val = ((Ptr) GLread_7);
	{aRet = ((Ptr) GLread_8); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_7(void) {	/* ret_call_crasymb_5 */
   {	register Ptr aRet, rSp, rA1, rA4;
	rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
	rA4 = (rSp++)->Val;
	(rA1 + 2)->Val = rA4;
	rA4 = (rSp++)->Val;
	if (rA4 == GInil)	goto l_inisymr;
	rA4->Val = rA1;
l_inisymr:
	GIa3 = (rSp++)->Val;
	rA4 = (rSp++)->Val;
	{register int aux1, aux2;
		aux1 = (int) ((rA1 + 6)->Val);
		aux1 = aux1 & HIGHTMASK;
		aux2 = (int) (rA4);
		aux1 = aux1 | aux2;
		(rA1 + 6)->Val = (Ptr) aux1;}
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

extern Ptr GXinicst(void) {	/* inicst */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa3;
	(--rSp)->Val = ((Ptr) GLread_9);
	{aRet = ((Ptr) GXcrastrg); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_9(void) {	/* ret_call_crastrg_6 */
   {	register Ptr aRet;
	GIa2 = GIa1;
	(--GIsp)->Val = ((Ptr) GLread_10);
	{aRet = ((Ptr) GLread_8); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_10(void) {	/* ret_call_crasymb_7 */
   {	register Ptr aRet, rSp, rA1, rA3;
	rSp = GIsp; rA1 = GIa1; rA3 = GIa3;
	rA1->Val = rA1;
	rA3 = (rSp++)->Val;
	if (rA3 == GInil)	{ aRet = (rSp++)->Val; goto lRet;}
	rA3->Val = rA1;
l_inicstr:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLread_8(void) {	/* crasymb */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_11);
	{aRet = ((Ptr) GLread_12); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_11(void) {	/* ret_call_symballc_8 */
   {	register Ptr aRet, rSp, rA1, rA2;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
	(--rSp)->Val = rA1;
	(rA1 + 3)->Val = GIcpkgc;
	(rA1 + 7)->Val = rA2;
	rA1 = (rA2->Val + 1)->Val;
	(--rSp)->Val = ((Ptr) GLread_13);
	{aRet = ((Ptr) GLread_14); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLread_13(void) {	/* ret_call_trysymb0_9 */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	GIa1 = (GIsp++)->Val;
	if (rA2 == (Ptr) 1)	{aRet = ((Ptr) GLread_15); goto lRet;}
	if (rA2 == (Ptr) 2)	{aRet = ((Ptr) GLread_16); goto lRet;}
	{aRet = ((Ptr) GLread_17); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXinasymb(void) {	/* inasymb */
   {	register Ptr aRet;
	GIa1->Val = GMundef;
	{aRet = ((Ptr) GLread_18); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_18(void) {	/* inasymb2 */
   {	register Ptr aRet, rSp, rA1, rNil;
	rSp = GIsp; rA1 = GIa1; rNil = GInil;
	(rA1 + 1)->Val = rNil;
	{register int aux1, aux2;
		aux1 = (int) ((rA1 + 6)->Val);
		aux2 = (int) 0;
		aux2 = aux2 << HIGHTSHIFT;
		aux1 = aux1 | aux2;
		(rA1 + 6)->Val = (Ptr) aux1;}
	(rA1 + 3)->Val = GIcpkgc;
	(rA1 + 4)->Val = rNil;
	(--rSp)->Val = rA1;
	GIa2 = (rA1 + 7)->Val;
	rA1 = (GIa2->Val + 1)->Val;
	(--rSp)->Val = ((Ptr) GLread_19);
	{aRet = ((Ptr) GLread_14); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLread_19(void) {	/* ret_call_trysymb0_10 */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	GIa1 = (GIsp++)->Val;
	if (rA2 == (Ptr) 1)	{aRet = ((Ptr) GLread_15); goto lRet;}
	if (rA2 == (Ptr) 2)	{aRet = ((Ptr) GLread_16); goto lRet;}
	{aRet = ((Ptr) GLread_17); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXinacst(void) {	/* inacst */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	rA1->Val = rA1;
	(rA1 + 2)->Val = (Ptr) 0;
	{register int aux1, aux2;
		aux1 = (int) ((rA1 + 6)->Val);
		aux1 = aux1 & HIGHTMASK;
		aux2 = (int) 0;
		aux1 = aux1 | aux2;
		(rA1 + 6)->Val = (Ptr) aux1;}
	{aRet = ((Ptr) GLread_18); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_20(void) {	/* makefix */
   {	register Ptr aRet;
	GInegatif = GInil;
	GIa3 = (Ptr) 0;
	{aRet = ((Ptr) GLread_21); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_21(void) {	/* makefix0 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	GIa1 = (Ptr) 0;
	rA4 = (Ptr) ((unsigned char) *(((char *) (GIa2->Val + 2)) + (Fix) (GIa3)));
	if (rA4 == (Ptr) 43)	{aRet = ((Ptr) GLread_22); goto lRet;}
	if (rA4 != (Ptr) 45)	{aRet = ((Ptr) GLread_23); goto lRet;}
	GInegatif = rA4;
	{aRet = ((Ptr) GLread_22); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLread_23(void) {	/* makefix1 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	rA4 = (Ptr) ((unsigned char) *(((char *) (rA2->Val + 2)) + (Fix) (rA3)));
	if (rA4 == (Ptr) 47)	{aRet = ((Ptr) GLread_24); goto lRet;}
	if ((Fix) (rA4) < (Fix) 48)	goto l_makefxd1;
	if ((Fix) (rA4) > (Fix) 57)	goto l_makefxd1;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 48));
	goto l_makefix2;
l_makefxd1:
	if ((Fix) (rA4) < (Fix) 65)	goto l_makefxd2;
	if ((Fix) (rA4) > (Fix) 90)	goto l_makefxd2;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 65));
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 10));
	goto l_makefix2;
l_makefxd2:
	if ((Fix) (rA4) < (Fix) 97)	goto l_makefix2;
	if ((Fix) (rA4) > (Fix) 122)	goto l_makefix2;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 97));
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 10));
l_makefix2:
	if (GIibase == (Ptr) 10)	goto l_makefix6;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) * (Fix) (GIibase)));
l_makefix3:
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA4)));
	{aRet = ((Ptr) GLread_22); goto lRet;}
l_makefix6:
	(--rSp)->Val = rA2;
	(--rSp)->Val = rA3;
	(--rSp)->Val = rA4;
	rA2 = GIibase;
	rA4 = (Ptr) 2;
	(--rSp)->Val = ((Ptr) GLread_25);
	{aRet = ((Ptr) GXgatim2i); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLread_25(void) {	/* ret_call_gatim2i_11 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = (rSp++)->Val;
	GIa4 = (Ptr) 2;
	(--rSp)->Val = ((Ptr) GLread_26);
	{aRet = ((Ptr) GXgaplus2i); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_26(void) {	/* ret_call_gaplus2i_12 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa3 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	{aRet = ((Ptr) GLread_22); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_22(void) {	/* makefix8 */
   {	register Ptr aRet, rA3;
	rA3 = GIa3;
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (1)));
	if (rA3 != GItsymb)	{aRet = ((Ptr) GLread_23); goto lRet;}
	if (GInegatif == GInil)	{ aRet = (GIsp++)->Val; goto lRet;}
	{aRet = ((Ptr) GXgadinv); goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

static Ptr GLread_24(void) {	/* makefxr1 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if (GInegatif == GInil)	{aRet = ((Ptr) GLread_27); goto lRet;}
	(--rSp)->Val = GIa2;
	(--rSp)->Val = GIa3;
	(--rSp)->Val = ((Ptr) GLread_28);
	{aRet = ((Ptr) GXgadinv); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_28(void) {	/* ret_call_gadinv_13 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa3 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	{aRet = ((Ptr) GLread_27); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_27(void) {	/* makefixr2 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	GIa3 = (Ptr) ((UFix) ((Fix) (GIa3) + (Fix) (1)));
	GInegatif = GInil;
	(--rSp)->Val = ((Ptr) GLread_29);
	{aRet = ((Ptr) GLread_21); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_29(void) {	/* ret_call_makefix0_14 */
   {	register Ptr aRet;
	(--GIsp)->Val = GIa1;
	GIa4 = (Ptr) 2;
	{aRet = ((Ptr) GXgadiv); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_30(void) {	/* makeflo */
   {	register Ptr aRet;
	 GIa1 =  llrt_cvatof (GIa2, GItsymb);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_31(void) {	/* nextfix */
   {	register Ptr aRet;
	if (GIa3 != GItsymb)	{aRet = ((Ptr) GLread_32); goto lRet;}
	GIsp += (Fix) 1;
	{aRet = ((Ptr) GLread_20); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_33(void) {	/* nextflo */
   {	register Ptr aRet;
	if (GIa3 != GItsymb)	{aRet = ((Ptr) GLread_32); goto lRet;}
	GIsp += (Fix) 1;
	{aRet = ((Ptr) GLread_30); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_34(void) {	/* nextsym */
   {	register Ptr aRet;
	if (GIa3 != GItsymb)	{aRet = ((Ptr) GLread_32); goto lRet;}
	GIsp += (Fix) 1;
	{aRet = ((Ptr) GLread_35); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_32(void) {	/* nextxxx */
   {	register Ptr aRet, rA3;
	rA3 = GIa3;
	GIa4 = (Ptr) ((unsigned char) *(((char *) (GIa2->Val + 2)) + (Fix) (rA3)));
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (1)));
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

static Ptr GLread_36(void) {	/* digitpi */
   {	register Ptr aRet, rSp, rA1, rA4;
	rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
	rA1 = rA4;
	if ((Fix) (rA4) < (Fix) 48)	goto l_digitpi1;
	if ((Fix) (rA4) > (Fix) 57)	goto l_digitpi1;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 48));
	goto l_digitpi9;
l_digitpi1:
	if ((Fix) (rA4) < (Fix) 65)	goto l_digitpi2;
	if ((Fix) (rA4) > (Fix) 90)	goto l_digitpi2;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 65));
	goto l_digitpi8;
l_digitpi2:
	if ((Fix) (rA4) < (Fix) 97)	{aRet = ((Ptr) GLread_37); goto lRet;}
	if ((Fix) (rA4) > (Fix) 122)	{aRet = ((Ptr) GLread_37); goto lRet;}
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 97));
l_digitpi8:
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) 10));
l_digitpi9:
	if ((Fix) (rA1) >= (Fix) (GIibase))	{aRet = ((Ptr) GLread_37); goto lRet;}
	if ((Fix) (rA1) <= (Fix) 57)	{ aRet = (rSp++)->Val; goto lRet;}
	GIall09 = GInil;
l_digitpit:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLread_37(void) {	/* digitpif */
   {	register Ptr aRet;
	GIa1 = GInil;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXbase10p(void) {	/* base10p */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	if ((Fix) (rA4) < (Fix) 48)	{aRet = ((Ptr) GLread_37); goto lRet;}
	if ((Fix) (rA4) > (Fix) 57)	{aRet = ((Ptr) GLread_37); goto lRet;}
	GIa1 = rA4;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXtryatom(void) {	/* tryatom */
   {	register Ptr aRet, rSp, rA1, rNil;
	rSp = GIsp; rA1 = GIa1; rNil = GInil;
	if (rA1 != (Ptr) 0)	goto l_trynum;
	if (GIcpkgc != rNil)	goto l_trynum;
	rA1 = rNil;
	{aRet = (rSp++)->Val; goto lRet;}
l_trynum:
	GItsymb = rA1;
	GIasymb = GIa2;
	if (GIquotes != rNil)	{aRet = ((Ptr) GLread_35); goto lRet;}
	GIa3 = (Ptr) 0;
	GIall09 = GIa3;
	(--rSp)->Val = ((Ptr) GLread_38);
	{aRet = ((Ptr) GLread_34); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLread_38(void) {	/* ret_call_nextsym_15 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	if (rA4 == (Ptr) 46)	{aRet = ((Ptr) GLread_39); goto lRet;}
	if (rA4 == (Ptr) 45)	{aRet = ((Ptr) GLread_40); goto lRet;}
	if (rA4 == (Ptr) 43)	{aRet = ((Ptr) GLread_40); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLread_41);
	{aRet = ((Ptr) GLread_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_41(void) {	/* ret_call_digitpi_16 */
   {	register Ptr aRet;
	if (GIa1 != GInil)	{aRet = ((Ptr) GLread_42); goto lRet;}
	{aRet = ((Ptr) GLread_35); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_40(void) {	/* tryfix0 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_43);
	{aRet = ((Ptr) GLread_34); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_43(void) {	/* ret_call_nextsym_17 */
   {	register Ptr aRet;
	if (GIa4 == (Ptr) 46)	{aRet = ((Ptr) GLread_39); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLread_44);
	{aRet = ((Ptr) GLread_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_44(void) {	/* ret_call_digitpi_18 */
   {	register Ptr aRet;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLread_35); goto lRet;}
	{aRet = ((Ptr) GLread_42); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_42(void) {	/* tryfix1 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_45);
	{aRet = ((Ptr) GLread_31); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_45(void) {	/* ret_call_nextfix_19 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_46);
	{aRet = ((Ptr) GLread_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_46(void) {	/* ret_call_digitpi_20 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	if (GIa1 != GInil)	{aRet = ((Ptr) GLread_42); goto lRet;}
	if (rA4 == (Ptr) 46)	{aRet = ((Ptr) GLread_47); goto lRet;}
	if (rA4 == (Ptr) 69)	{aRet = ((Ptr) GLread_48); goto lRet;}
	if (rA4 == (Ptr) 101)	{aRet = ((Ptr) GLread_48); goto lRet;}
	if (rA4 == (Ptr) 47)	goto l_tryfix2;
	{aRet = ((Ptr) GLread_35); goto lRet;}
l_tryfix2:
	(--GIsp)->Val = ((Ptr) GLread_49);
	{aRet = ((Ptr) GLread_34); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_49(void) {	/* ret_call_nextsym_21 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	if (rA4 == (Ptr) 43)	{aRet = ((Ptr) GLread_50); goto lRet;}
	if (rA4 == (Ptr) 45)	{aRet = ((Ptr) GLread_50); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLread_51);
	{aRet = ((Ptr) GLread_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_51(void) {	/* ret_call_digitpi_22 */
   {	register Ptr aRet;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLread_35); goto lRet;}
	{aRet = ((Ptr) GLread_52); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_50(void) {	/* tryfix3 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_53);
	{aRet = ((Ptr) GLread_34); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_53(void) {	/* ret_call_nextsym_23 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_54);
	{aRet = ((Ptr) GLread_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_54(void) {	/* ret_call_digitpi_24 */
   {	register Ptr aRet;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLread_35); goto lRet;}
	{aRet = ((Ptr) GLread_52); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_52(void) {	/* tryfix4 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_55);
	{aRet = ((Ptr) GLread_31); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_55(void) {	/* ret_call_nextfix_25 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_56);
	{aRet = ((Ptr) GLread_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_56(void) {	/* ret_call_digitpi_26 */
   {	register Ptr aRet;
	if (GIa1 != GInil)	{aRet = ((Ptr) GLread_52); goto lRet;}
	{aRet = ((Ptr) GLread_35); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_39(void) {	/* tryflo0 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_57);
	{aRet = ((Ptr) GLread_34); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_57(void) {	/* ret_call_nextsym_27 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_58);
	{aRet = ((Ptr) GXbase10p); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_58(void) {	/* ret_call_base10p_28 */
   {	register Ptr aRet;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLread_35); goto lRet;}
	{aRet = ((Ptr) GLread_59); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_59(void) {	/* tryflo1 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_60);
	{aRet = ((Ptr) GLread_33); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_60(void) {	/* ret_call_nextflo_29 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_61);
	{aRet = ((Ptr) GXbase10p); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_61(void) {	/* ret_call_base10p_30 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	if (GIa1 != GInil)	{aRet = ((Ptr) GLread_59); goto lRet;}
	if (rA4 == (Ptr) 69)	{aRet = ((Ptr) GLread_62); goto lRet;}
	if (rA4 == (Ptr) 101)	{aRet = ((Ptr) GLread_62); goto lRet;}
	{aRet = ((Ptr) GLread_35); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_47(void) {	/* tryflo2 */
   {	register Ptr aRet;
	if (GIall09 != GInil)	{aRet = ((Ptr) GLread_59); goto lRet;}
	{aRet = ((Ptr) GLread_35); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_48(void) {	/* tryflo3 */
   {	register Ptr aRet;
	if (GIall09 == GInil)	{aRet = ((Ptr) GLread_35); goto lRet;}
	{aRet = ((Ptr) GLread_62); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_62(void) {	/* tryflo4 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_63);
	{aRet = ((Ptr) GLread_34); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_63(void) {	/* ret_call_nextsym_31 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_64);
	{aRet = ((Ptr) GXbase10p); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_64(void) {	/* ret_call_base10p_32 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	if (GIa1 != GInil)	{aRet = ((Ptr) GLread_65); goto lRet;}
	if (rA4 == (Ptr) 45)	goto l_tryflo5;
	if (rA4 != (Ptr) 43)	{aRet = ((Ptr) GLread_35); goto lRet;}
l_tryflo5:
	(--GIsp)->Val = ((Ptr) GLread_66);
	{aRet = ((Ptr) GLread_34); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_66(void) {	/* ret_call_nextsym_33 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_67);
	{aRet = ((Ptr) GXbase10p); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_67(void) {	/* ret_call_base10p_34 */
   {	register Ptr aRet;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLread_35); goto lRet;}
	{aRet = ((Ptr) GLread_65); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_65(void) {	/* tryflo6 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_68);
	{aRet = ((Ptr) GLread_33); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_68(void) {	/* ret_call_nextflo_35 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_69);
	{aRet = ((Ptr) GXbase10p); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_69(void) {	/* ret_call_base10p_36 */
   {	register Ptr aRet;
	if (GIa1 != GInil)	{aRet = ((Ptr) GLread_65); goto lRet;}
	{aRet = ((Ptr) GLread_35); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_35(void) {	/* trysymi */
   {	register Ptr aRet;
	GIa1 = GItsymb;
	{aRet = ((Ptr) GXtrysymb); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXtrysymb(void) {	/* trysymb */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_70);
	{aRet = ((Ptr) GLread_14); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_70(void) {	/* trysymbx */
   {	register Ptr aRet, rSp, rA2;
	rSp = GIsp; rA2 = GIa2;
	if (rA2 == (Ptr) 0)	{ aRet = (rSp++)->Val; goto lRet;}
	if (rA2 == (Ptr) 1)	{aRet = ((Ptr) GLread_71); goto lRet;}
	if (rA2 == (Ptr) 2)	{aRet = ((Ptr) GLread_72); goto lRet;}
l_mak3d2n:
	(--rSp)->Val = ((Ptr) GLread_17);
	{aRet = ((Ptr) GLread_12); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_17(void) {	/* plac3d2n */
   {	register Ptr aRet, rA1, rA3, rA4;
	rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
	rA3 = (rA4 + 7)->Val;
	(rA1 + 7)->Val = rA3;
	(rA4 + 7)->Val = rA1;
	(rA1 + 5)->Val = (rA3 + 5)->Val;
l_trysymre:
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

static Ptr GLread_72(void) {	/* mak3d12 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_16);
	{aRet = ((Ptr) GLread_12); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_16(void) {	/* plac3d12 */
   {	register Ptr aRet, rA1, rA4;
	rA1 = GIa1; rA4 = GIa4;
	(rA1 + 5)->Val = (rA4 + 7)->Val;
	(rA4 + 7)->Val = rA1;
	(rA1 + 7)->Val = rA4;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_71(void) {	/* mak2d */
   {	register Ptr aRet;
	GIa2 = GItsymb;
	(--GIsp)->Val = ((Ptr) GLread_73);
	{aRet = ((Ptr) GXstrgallc); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_73(void) {	/* ret_call_strgallc_40 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	{register char *r1, *r2; register int r3;
		r1 = (char *) (GIasymb->Val + 2);
		r2 = (char *) (rA1->Val + 2);
		r3 = (Fix) (GIa2);
	 while (r3--) *r2++ = *r1++;}
	GIa2 = rA1;
	(--GIsp)->Val = ((Ptr) GLread_74);
	{aRet = ((Ptr) GLread_12); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_74(void) {	/* ret_call_symballc_41 */
   {	register Ptr aRet;
	(GIa1 + 7)->Val = GIa2;
	GIa4 = GIksymb;
	{aRet = ((Ptr) GLread_15); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_15(void) {	/* plac2d */
   {	register Ptr aRet, rA1, rA4;
	rA1 = GIa1; rA4 = GIa4;
	(rA1 + 5)->Val = (GIhashtab->Val + 2 + (Fix) (rA4))->Val;
	(GIhashtab->Val + 2 + (Fix) (rA4))->Val = rA1;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_14(void) {	/* trysymb0 */
   {	register Ptr aRet;
	GItsymb = GIa1;
	GIasymb = GIa2;
	(--GIsp)->Val = ((Ptr) GLread_75);
	{aRet = ((Ptr) GLread_5); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_75(void) {	/* ret_call_hashfast_42 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	GIksymb = rA1;
	rA3 = (GIhashtab->Val + 2 + (Fix) (rA1))->Val;
	GIhsymb = rA3;
	rA1 = GItsymb;
	goto l_trysymb6;
l_trysymb1:
	rA4 = (rA3 + 7)->Val;
	if ((rA4 >= GIbstrg) && (rA4 < GIbsymb))	goto l_trysymb2;
	rA4 = (rA4 + 5)->Val;
l_trysymb2:
	rA2 = (rA4->Val + 1)->Val;
	if (rA1 != rA2)	goto l_trysymb5;
	{register char *r1, *r2; register int r3;
		r1 = (char *) (GIasymb->Val + 2);
		r2 = (char *) (rA4->Val + 2);
		r3 = (Fix) (rA1);
		if (r3 > 0) while (r3--) if (*r2++ != *r1++) goto hbteq_read_76;
			goto l_trysymb8;}
	hbteq_read_76:
l_trysymb5:
	GIhsymb = rA3;
	rA3 = (rA3 + 5)->Val;
l_trysymb6:
	if (rA3 >= GIbfloat)	goto l_trysymb1;
	rA2 = (Ptr) 1;
	rA4 = GIksymb;
	{aRet = (rSp++)->Val; goto lRet;}
l_trysymb8:
	rA1 = rA3;
	rA2 = GIhsymb;
	if (rA1 == rA2)	{aRet = ((Ptr) GLread_77); goto lRet;}
	(rA2 + 5)->Val = (rA1 + 5)->Val;
	rA3 = GIksymb;
	(rA1 + 5)->Val = (GIhashtab->Val + 2 + (Fix) (rA3))->Val;
	(GIhashtab->Val + 2 + (Fix) (rA3))->Val = rA1;
	{aRet = ((Ptr) GLread_77); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXtrysymp(void) {	/* trysymp */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIcpkgc;
	GIcpkgc = GIa1;
	GIa1 = (GIa2->Val + 1)->Val;
	GIa3 = ((Ptr) GXtrysymb);
	(--rSp)->Val = ((Ptr) GLread_78);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_78(void) {	/* ret_call_sysprot_43 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	GIcpkgc = (rSp++)->Val;
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXtrysympk(void) {	/* trysympk */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIcpkgc;
	GIcpkgc = GIa1;
	GIa1 = GIa2;
	GIa3 = ((Ptr) GLread_79);
	(--rSp)->Val = ((Ptr) GLread_80);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_80(void) {	/* ret_call_sysprot_44 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	GIcpkgc = (rSp++)->Val;
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_79(void) {	/* trysymp1 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_70);
	{aRet = ((Ptr) GLread_77); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_81(void) {	/* pkgcequ */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = rA1;
	rA1 = (rA1 + 3)->Val;
	GIa2 = GIcpkgc;
	(--rSp)->Val = ((Ptr) GLread_82);
	{aRet = ((Ptr) GXequal); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLread_82(void) {	/* ret_call_equal_45 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = GIa1;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_77(void) {	/* trysy3d */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	rA4 = GIcpkgc;
	if ((rA4 >= GIbsymb) && (rA4 < GIbcons))	{aRet = ((Ptr) GLread_83); goto lRet;}
l_trysy3c:
	(--GIsp)->Val = ((Ptr) GLread_84);
	{aRet = ((Ptr) GLread_81); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLread_84(void) {	/* ret_call_pkgcequ_46 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if (GIa2 != GInil)	{aRet = ((Ptr) GLread_85); goto lRet;}
	if (((rA1 + 7)->Val < GIbstrg) || ((rA1 + 7)->Val >= GIbsymb))	{aRet = ((Ptr) GLread_86); goto lRet;}
	{aRet = ((Ptr) GLread_87); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_87(void) {	/* trysyr1 */
   {	register Ptr aRet;
	GIa2 = (Ptr) 2;
	GIa4 = GIa1;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_86(void) {	/* trysy3c0 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = rA1;
	(--rSp)->Val = rA1;
	{aRet = ((Ptr) GLread_88); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_88(void) {	/* trysy3c1 */
   {	register Ptr aRet;
	GIa1 = (GIa1 + 7)->Val;
	(--GIsp)->Val = ((Ptr) GLread_89);
	{aRet = ((Ptr) GLread_81); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_89(void) {	/* ret_call_pkgcequ_47 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if (GIa2 != GInil)	{aRet = ((Ptr) GLread_90); goto lRet;}
	if (((rA1 + 5)->Val >= GIbstrg) && ((rA1 + 5)->Val < GIbsymb))	goto l_trysy3c2;
	(rSp + 1)->Val = rA1;
l_trysy3c2:
	if (rA1 != rSp->Val)	{aRet = ((Ptr) GLread_88); goto lRet;}
	rSp += (Fix) 1;
	GIa4 = (rSp++)->Val;
	{aRet = ((Ptr) GLread_91); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_91(void) {	/* trysyr2 */
   {	register Ptr aRet;
	GIa2 = (Ptr) 3;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_90(void) {	/* trysyr3 */
   {	register Ptr aRet;
	GIsp += (Fix) 2;
	{aRet = ((Ptr) GLread_85); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_85(void) {	/* trysyr4 */
   {	register Ptr aRet;
	GIa2 = (Ptr) 0;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_83(void) {	/* trysy3s */
   {	register Ptr aRet, rA1, rA2, rA3, rA4, rBstrg, rBsymb;
	rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBstrg = GIbstrg; rBsymb = GIbsymb;
	if (rA4 == (rA1 + 3)->Val)	{aRet = ((Ptr) GLread_85); goto lRet;}
	if (((rA1 + 7)->Val >= rBstrg) && ((rA1 + 7)->Val < rBsymb))	{aRet = ((Ptr) GLread_87); goto lRet;}
	rA2 = rA1;
	rA3 = rA1;
l_trysy31:
	rA1 = (rA1 + 7)->Val;
	if (rA4 == (rA1 + 3)->Val)	{aRet = ((Ptr) GLread_85); goto lRet;}
	if (((rA1 + 5)->Val >= rBstrg) && ((rA1 + 5)->Val < rBsymb))	goto l_trysy32;
	rA2 = rA1;
l_trysy32:
	if (rA1 != rA3)	goto l_trysy31;
	rA4 = rA2;
	{aRet = ((Ptr) GLread_91); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXistdsym(void) {	/* istdsym */
   {	register Ptr aRet, rA1, rNil;
	rA1 = GIa1; rNil = GInil;
	rA1->Val = GMundef;
	(rA1 + 1)->Val = rNil;
	(rA1 + 2)->Val = (Ptr) 0;
	{register int aux1, aux2;
		aux1 = (int) ((rA1 + 6)->Val);
		aux1 = aux1 & HIGHTMASK;
		aux2 = (int) 0;
		aux1 = aux1 | aux2;
		(rA1 + 6)->Val = (Ptr) aux1;}
	{register int aux1, aux2;
		aux1 = (int) ((rA1 + 6)->Val);
		aux2 = (int) 0;
		aux2 = aux2 << HIGHTSHIFT;
		aux1 = aux1 | aux2;
		(rA1 + 6)->Val = (Ptr) aux1;}
	(rA1 + 4)->Val = rNil;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_12(void) {	/* symballc */
   {	register Ptr aRet;
	GIa1 = GIfsymb;
	if (GIa1 != (Ptr) 0)	{aRet = ((Ptr) GLread_92); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLread_93);
	{aRet = ((Ptr) GXgcsymb); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_93(void) {	/* ret_call_gcsymb_48 */
   {	register Ptr aRet;
	GIa1 = GIfsymb;
	{aRet = ((Ptr) GLread_92); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_92(void) {	/* symball1 */
   {	register Ptr aRet;
	GIfsymb = (GIa1 + 5)->Val;
	(--GIsp)->Val = ((Ptr) GLread_94);
	{aRet = ((Ptr) GXistdsym); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_94(void) {	/* ret_call_istdsym_49 */
   {	register Ptr aRet;
	(GIa1 + 3)->Val = GIcpkgc;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXcrastrg(void) {	/* crastrg */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa2;
	GIa2 = GIa1;
	(--rSp)->Val = ((Ptr) GLread_95);
	{aRet = ((Ptr) GXstrgallc); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_95(void) {	/* ret_call_strgallc_50 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa3 = (rSp++)->Val;
	{register char *r1, *r2; register int r3;
		r1 = (char *) GIa3;
		r2 = (char *) (GIa1->Val + 2);
		r3 = (Fix) (GIa2) + 1;
		if (r3 > 0) while (r3--) *r2++ = *r1++;}
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXgetch(void) {	/* getch */
   {	register Ptr aRet, rA4, rNil;
	rA4 = GIa4; rNil = GInil;
	if (GIringur == rNil)	goto l_getch1;
	GIgetchfl = (Ptr) 1;
	rA4 = GIringur;
	GIringur = (rA4 + 1)->Val;
	rA4 = rA4->Val;
	{aRet = ((Ptr) GLread_96); goto lRet;}
l_getch1:
	if (GIimpli != rNil)	{aRet = ((Ptr) GLread_97); goto lRet;}
	GIgetchfl = (Ptr) 0;
	(--GIsp)->Val = ((Ptr) GLread_96);
	{aRet = ((Ptr) GXinphy); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLread_96(void) {	/* getch2 */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	GIa3 = (Ptr) 12;
	if ((Fix) (rA4) > (Fix) 255)	{ aRet = (rSp++)->Val; goto lRet;}
	GIa3 = (Ptr) ((unsigned char) *(((char *) (GItabch->Val + 2)) + (Fix) (rA4)));
l_getch21:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_97(void) {	/* getch3 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	rA4 = GIimpld;
	GIgetchfl = (Ptr) 2;
	if (rA4 == GInil)	goto l_getch4;
	if ((long) rA4 < (long) GIbcons)	{aRet = ((Ptr) GLread_98); goto lRet;}
	GIimpld = (rA4 + 1)->Val;
	rA4 = rA4->Val;
	if (rA4 >= GIbfloat)	{aRet = ((Ptr) GLread_99); goto lRet;}
	{aRet = ((Ptr) GLread_96); goto lRet;}
l_getch4:
	GIimpld = (Ptr) 0;
	rA4 = (Ptr) 32;
	{aRet = ((Ptr) GLread_96); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

extern Ptr GXgetcv(void) {	/* getcv */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_100);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_100(void) {	/* ret_call_getch_52 */
   {	register Ptr aRet;
	{aRet = (Ptr) (brx_read_101[(int) (GIa3)]); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_104(void) {	/* getcv1 */
   {	register Ptr aRet;
	GIquotes = GIa4;
	(--GIsp)->Val = ((Ptr) GLread_106);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_106(void) {	/* ret_call_getch_53 */
   {	register Ptr aRet;
	GIa3 = (Ptr) 12;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_105(void) {	/* getcv2 */
   {	register Ptr aRet, rA3, rA4;
	rA3 = GIa3; rA4 = GIa4;
	rA3 = GMstatrc;
	if (rA3->Val != GInil)	goto l_getcv3;
	if ((Fix) (rA4) < (Fix) 65)	goto l_getcv3;
	if ((Fix) (rA4) > (Fix) 90)	goto l_getcv3;
	rA4 = (Ptr) ((Fix) (rA4) + 32);
l_getcv3:
	rA3 = (Ptr) 12;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLread_102(void) {	/* getcvc */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_107);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_107(void) {	/* ret_call_getch_54 */
   {	register Ptr aRet;
	if (GIa3 != (Ptr) 2)	{aRet = ((Ptr) GLread_102); goto lRet;}
	{aRet = ((Ptr) GLread_103); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_103(void) {	/* getcvs */
   {	register Ptr aRet;
	GIa3 = (Ptr) 7;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_108(void) {	/* rd1 */
   {	register Ptr aRet;
	GIquotes = GInil;
	GIa2 = (Ptr) 0;
	{aRet = ((Ptr) GLread_109); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_109(void) {	/* rdsep */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_110);
	{aRet = ((Ptr) GXgetcv); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_110(void) {	/* ret_call_getcv_55 */
   {	register Ptr aRet;
	{aRet = (Ptr) (brx_read_111[(int) (GIa3)]); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_112(void) {	/* rdparo */
   {	register Ptr aRet;
	GIrdprd = (Ptr) ((UFix) ((Fix) (GIrdprd) + (Fix) (1)));
	GIa3 = (Ptr) 0;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_113(void) {	/* rdparf */
   {	register Ptr aRet;
	{register Fix aux;
		aux = (Fix) (GIrdprd) - 1;
		GIrdprd = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_rdparfr;}
	GIrdprd = (Ptr) 0;
l_rdparfr:
	GIa3 = (Ptr) 1;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_114(void) {	/* rddot */
   {	register Ptr aRet;
	if (GIa4 != (Ptr) 46)	{aRet = ((Ptr) GLread_122); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLread_123);
	{aRet = ((Ptr) GXgetcv); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_123(void) {	/* ret_call_getcv_56 */
   {	register Ptr aRet;
	if (GIa3 == (Ptr) 12)	{aRet = ((Ptr) GLread_124); goto lRet;}
	GIa3 = (Ptr) 2;
	{aRet = ((Ptr) GXrereada4); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_122(void) {	/* rddot1 */
   {	register Ptr aRet;
	GIa3 = (Ptr) 2;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_124(void) {	/* rddot2 */
   {	register Ptr aRet;
	*((char *) (GIbufat->Val + 2) + (Fix) 0) = (char) (Ptr) 46;
	GIa2 = (Ptr) 1;
	{aRet = ((Ptr) GLread_119); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_115(void) {	/* rdpkgc */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	rA1 = GMsyscol;
	rA1 = rA1->Val;
	{aRet = ((Ptr) GXrdpkgc2); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLread_125(void) {	/* rdpkgc1 */
   {	register Ptr aRet;
	GIa1 = GIa2;
	GIa2 = GIbufat;
	(--GIsp)->Val = ((Ptr) GLread_126);
	{aRet = ((Ptr) GXtryatom); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_126(void) {	/* ret_call_tryatom_57 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if ((rA1 < GIbsymb) || (rA1 >= GIbcons))	{aRet = ((Ptr) GXerlec6); goto lRet;}
	{aRet = ((Ptr) GXrdpkgc2); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXrdpkgc2(void) {	/* rdpkgc2 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIcpkgc;
	GIcpkgc = GIa1;
	GIa3 = ((Ptr) GXreadi);
	(--rSp)->Val = ((Ptr) GLread_127);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_127(void) {	/* ret_call_sysprot_58 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	GIcpkgc = (rSp++)->Val;
	(--rSp)->Val = GIa3;
	GIa3 = (Ptr) 3;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_116(void) {	/* rdsplic */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_128);
	{aRet = ((Ptr) GXasciii); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_128(void) {	/* ret_call_asciii_59 */
   {	register Ptr aRet;
	GIa2 = GInil;
	(--GIsp)->Val = ((Ptr) GLread_129);
	{aRet = ((Ptr) GXapply); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_129(void) {	/* ret_call_apply_60 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if (rA1 == GInil)	goto l_rdsplic1;
	if ((long) rA1 >= (long) GIbcons)	goto l_rdsplic1;
	{aRet = ((Ptr) GLread_130); goto lRet;}
l_rdsplic1:
	GIa3 = (Ptr) 4;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_117(void) {	/* rdmac */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_131);
	{aRet = ((Ptr) GXasciii); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_131(void) {	/* ret_call_asciii_61 */
   {	register Ptr aRet;
	GIa2 = GInil;
	(--GIsp)->Val = ((Ptr) GLread_132);
	{aRet = ((Ptr) GXapply); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_132(void) {	/* rdretobj */
   {	register Ptr aRet;
	GIa3 = (Ptr) 3;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_133(void) {	/* rdstr0 */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	*((char *) (GIbufat->Val + 2) + (Fix) (rA2)) = (char) GIa4;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (1)));
	if ((Fix) (rA2) >= (Fix) (GIlgbufat))	{aRet = ((Ptr) GLread_134); goto lRet;}
	{aRet = ((Ptr) GLread_118); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLread_118(void) {	/* rdstr */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_135);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_135(void) {	/* ret_call_getch_63 */
   {	register Ptr aRet;
	if (GIa3 != (Ptr) 11)	{aRet = ((Ptr) GLread_133); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLread_136);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_136(void) {	/* ret_call_getch_64 */
   {	register Ptr aRet;
	if (GIa3 == (Ptr) 11)	{aRet = ((Ptr) GLread_133); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLread_137);
	{aRet = ((Ptr) GXrereada4); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_137(void) {	/* ret_call_rereada4_65 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_138);
	{aRet = ((Ptr) GXstrgallc); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_138(void) {	/* ret_call_strgallc_66 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	{register char *r1, *r2; register int r3;
		r1 = (char *) (GIbufat->Val + 2);
		r2 = (char *) (rA1->Val + 2);
		r3 = (Fix) (GIa2);
	 while (r3--) *r2++ = *r1++;}
	if (GIcpkgc == GInil)	{aRet = ((Ptr) GLread_132); goto lRet;}
	(rA1 + 1)->Val = GIcpkgc;
	{aRet = ((Ptr) GLread_132); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_119(void) {	/* rdpname */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	*((char *) (GIbufat->Val + 2) + (Fix) (rA2)) = (char) GIa4;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (1)));
	if ((Fix) (rA2) >= (Fix) 128)	{aRet = ((Ptr) GLread_139); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLread_140);
	{aRet = ((Ptr) GXgetcv); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLread_140(void) {	/* ret_call_getcv_67 */
   {	register Ptr aRet, rA3;
	rA3 = GIa3;
	if (rA3 == (Ptr) 12)	{aRet = ((Ptr) GLread_119); goto lRet;}
	if (rA3 == (Ptr) 6)	{aRet = ((Ptr) GLread_119); goto lRet;}
	{aRet = ((Ptr) GLread_141); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_141(void) {	/* rdfinsym */
   {	register Ptr aRet;
	if (GIa3 == (Ptr) 8)	{aRet = ((Ptr) GLread_125); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLread_142);
	{aRet = ((Ptr) GXrereada4); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_142(void) {	/* ret_call_rereada4_68 */
   {	register Ptr aRet;
	GIa1 = GIa2;
	GIa2 = GIbufat;
	(--GIsp)->Val = ((Ptr) GLread_132);
	{aRet = ((Ptr) GXtryatom); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_120(void) {	/* rdsymb */
   {	register Ptr aRet;
	GIquotes = GIa4;
	{aRet = ((Ptr) GLread_143); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_144(void) {	/* rdsymb0 */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	*((char *) (GIbufat->Val + 2) + (Fix) (rA2)) = (char) GIa4;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (1)));
	if ((Fix) (rA2) >= (Fix) 256)	{aRet = ((Ptr) GLread_145); goto lRet;}
	{aRet = ((Ptr) GLread_143); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLread_143(void) {	/* rdsymb1 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_146);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_146(void) {	/* ret_call_getch_70 */
   {	register Ptr aRet;
	if (GIa3 != (Ptr) 13)	{aRet = ((Ptr) GLread_144); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLread_147);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_147(void) {	/* ret_call_getch_71 */
   {	register Ptr aRet;
	if (GIa3 == (Ptr) 13)	{aRet = ((Ptr) GLread_144); goto lRet;}
	{aRet = ((Ptr) GLread_141); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_121(void) {	/* rdmsymb */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	GIquotes = rA4;
	*((char *) (GIbufat->Val + 2) + (Fix) 0) = (char) rA4;
	GIa2 = (Ptr) 1;
	(--GIsp)->Val = ((Ptr) GLread_141);
	{aRet = ((Ptr) GXgetcv); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXreadi(void) {	/* readi */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_148);
	{aRet = ((Ptr) GLread_108); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_148(void) {	/* read0 */
   {	register Ptr aRet;
	{aRet = (Ptr) (brx_read_149[(int) (GIa3)]); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_151(void) {	/* read1 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if ((rA1 + 1)->Val != GInil)	{aRet = ((Ptr) GLread_130); goto lRet;}
	rA1 = rA1->Val;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXread2(void) {	/* read2 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = GIcurread;
	rA1 = GMlcuread;
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
	(--rSp)->Val = rA1;
	GIcurread = rA1;
	{aRet = ((Ptr) GLread_152); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLread_152(void) {	/* read3 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = ((Ptr) GLread_153);
	{aRet = ((Ptr) GLread_108); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_153(void) {	/* read31 */
   {	register Ptr aRet;
	{aRet = (Ptr) (brx_read_154[(int) (GIa3)]); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_158(void) {	/* read4 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
	GIa2 = (GIsp++)->Val;
	(GIa2 + 1)->Val = rA1;
	{aRet = ((Ptr) GLread_152); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLread_159(void) {	/* read5 */
   {	register Ptr aRet, rSp, rA1, rA2, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBcons = GIbcons;
	if ((long) rA1 >= (long) rBcons)	goto l_read51;
	rA1 = (rSp++)->Val;
	{aRet = ((Ptr) GLread_152); goto lRet;}
l_read51:
	rA2 = (rSp++)->Val;
	(rA2 + 1)->Val = rA1;
l_read52:
	if ((long) (rA1 + 1)->Val < (long) rBcons)	{aRet = ((Ptr) GLread_152); goto lRet;}
	rA1 = (rA1 + 1)->Val;
	goto l_read52;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLread_155(void) {	/* read6 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_158);
	{aRet = ((Ptr) GXread2); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_156(void) {	/* read7 */
   {	register Ptr aRet;
	GIa1 = (GIsp++)->Val;
	{aRet = ((Ptr) GLread_160); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_160(void) {	/* read71 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	rA1 = (rSp++)->Val;
	rA1 = (rA1 + 1)->Val;
	GIcurread = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLread_157(void) {	/* read9 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_161);
	{aRet = ((Ptr) GXreadi); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_161(void) {	/* ret_call_readi_75 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = ((Ptr) GLread_162);
	{aRet = ((Ptr) GLread_108); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_162(void) {	/* ret_call_rd1_76 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	{aRet = (Ptr) (brx_read_163[(int) (GIa3)]); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_165(void) {	/* read91 */
   {	register Ptr aRet;
	(GIa2 + 1)->Val = GIa1;
	{aRet = ((Ptr) GLread_160); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_98(void) {	/* erlec1 */
   {	register Ptr aRet;
	GIa1 = (Ptr) 1;
	{aRet = ((Ptr) GLread_166); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_134(void) {	/* erlec2 */
   {	register Ptr aRet;
	GIa1 = (Ptr) 2;
	{aRet = ((Ptr) GLread_166); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_139(void) {	/* erlec3 */
   {	register Ptr aRet;
	GIa1 = (Ptr) 3;
	{aRet = ((Ptr) GLread_166); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_150(void) {	/* erlec4 */
   {	register Ptr aRet;
	GIa1 = (Ptr) 4;
	{aRet = ((Ptr) GLread_166); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_145(void) {	/* erlec5 */
   {	register Ptr aRet;
	GIa1 = (Ptr) 5;
	{aRet = ((Ptr) GLread_166); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerlec6(void) {	/* erlec6 */
   {	register Ptr aRet;
	GIa1 = (Ptr) 6;
	{aRet = ((Ptr) GLread_166); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_164(void) {	/* erlec7 */
   {	register Ptr aRet;
	GIa1 = (Ptr) 7;
	{aRet = ((Ptr) GLread_166); goto lRet;}
l_erlec8:
	GIa1 = (Ptr) 8;
	{aRet = ((Ptr) GLread_166); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_99(void) {	/* erlec9 */
   {	register Ptr aRet;
	GIa1 = (Ptr) 9;
	{aRet = ((Ptr) GLread_166); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_130(void) {	/* erlec10 */
   {	register Ptr aRet;
	GIa1 = (Ptr) 10;
	{aRet = ((Ptr) GLread_166); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXerlec11(void) {	/* erlec11 */
   {	register Ptr aRet;
	GIa1 = (Ptr) 11;
	{aRet = ((Ptr) GLread_166); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_166(void) {	/* erlec */
   {	register Ptr aRet, rNil;
	rNil = GInil;
	if (GIimpli != rNil)	goto l_erlecc1;
	GIa2 = GMlread;
	{aRet = ((Ptr) GXerrsxt); goto lRet;}
l_erlecc1:
	GIa2 = GMimplode;
	GIimpli = rNil;
	GIimpld = rNil;
	{aRet = ((Ptr) GXerrsxt); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXlread(void) {	/* read */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_167);
	{aRet = ((Ptr) GXgetcv); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_167(void) {	/* ret_call_getcv_77 */
   {	register Ptr aRet, rA3;
	rA3 = GIa3;
	if (rA3 == (Ptr) 5)	{aRet = ((Ptr) GXlread); goto lRet;}
	if (rA3 == (Ptr) 7)	{aRet = ((Ptr) GXlread); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLread_168);
	{aRet = ((Ptr) GXrereada4); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_168(void) {	/* ret_call_rereada4_78 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	rA1 = GMstinread;
	(--rSp)->Val = rA1->Val;
	rA1->Val = GMt;
	GIa3 = ((Ptr) GXreadi);
	(--rSp)->Val = ((Ptr) GLread_169);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLread_169(void) {	/* lreadend */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	GIa4 = GMstinread;
	GIa4->Val = (rSp++)->Val;
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXimplode(void) {	/* implode */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIimpld;
	(--rSp)->Val = GIimpli;
	(--rSp)->Val = GIringur;
	GIimpld = GIa1;
	GIimpli = GMt;
	GIringur = GInil;
	GIa3 = ((Ptr) GXreadi);
	(--rSp)->Val = ((Ptr) GLread_170);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_170(void) {	/* ret_call_sysprot_80 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	GIringur = (rSp++)->Val;
	GIimpli = (rSp++)->Val;
	GIimpld = (rSp++)->Val;
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXimplodech(void) {	/* implodech */
   {	register Ptr aRet;
	GIa2 = GIa1;
	GIa3 = GInil;
	{aRet = ((Ptr) GLread_171); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_171(void) {	/* impldech1 */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	if ((long) rA2 < (long) GIbcons)	{aRet = ((Ptr) GLread_172); goto lRet;}
	GIa1 = rA2->Val;
	(--GIsp)->Val = ((Ptr) GLread_173);
	{aRet = ((Ptr) GXcascii); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_173(void) {	/* ret_call_cascii_81 */
   {	register Ptr aRet;
	 GIa3 = llrt_cons (GIa1, GIa3);
	GIa2 = (GIa2 + 1)->Val;
	{aRet = ((Ptr) GLread_171); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_172(void) {	/* impldech2 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = GIa3;
	(--rSp)->Val = ((Ptr) GXimplode);
	{aRet = ((Ptr) GXnreverse); goto lRet;}
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXreadch(void) {	/* readch */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GXasciii);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXreadcod(void) {	/* readcn */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_174);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_174(void) {	/* ret_call_getch_83 */
   {	register Ptr aRet;
	GIa1 = GIa4;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXlcuread(void) {	/* curread */
   {	register Ptr aRet;
	GIa1 = GIcurread;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXteread(void) {	/* teread */
   {	register Ptr aRet;
	GIringur = GInil;
	GIinmax = (Ptr) 0;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXreread(void) {	/* reread */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rNil, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rNil = GInil; rBcons = GIbcons;
	if (rA1 == rNil)	goto l_reread9;
	if ((long) rA1 < (long) rBcons)	goto l_rereade;
	rA2 = rNil;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA2 = llrt_cons (rA2, rNil);
	(--rSp)->Val = rA2;
l_reread4:
	rA3 = rA1->Val;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA3 = llrt_cons (rA3, rNil);
	(rA2 + 1)->Val = rA3;
	rA2 = rA3;
	rA1 = (rA1 + 1)->Val;
	if ((long) rA1 >= (long) rBcons)	goto l_reread4;
	(rA2 + 1)->Val = GIringur;
	rA1 = (rSp++)->Val;
	rA1 = (rA1 + 1)->Val;
	GIringur = rA1;
l_reread9:
	rA1 = GIringur;
	{aRet = (rSp++)->Val; goto lRet;}
l_rereade:
	rA2 = GMreread;
	{aRet = ((Ptr) GXerrnla); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

extern Ptr GXrereada4(void) {	/* rereada4 */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	if (GIgetchfl != (Ptr) 0)	goto l_rrda41;
	GIpolig = (Ptr) ((UFix) ((Fix) (GIpolig) - (Fix) (1)));
	{aRet = (rSp++)->Val; goto lRet;}
l_rrda41:
	GIsp = rSp; GIa4 = rA4; rA4 = llrt_cons (rA4, GIringur);
	GIringur = rA4;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

extern Ptr GXpeekch(void) {	/* peekch */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_175);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_175(void) {	/* ret_call_getch_84 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa4;
	(--rSp)->Val = ((Ptr) GLread_176);
	{aRet = ((Ptr) GXrereada4); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_176(void) {	/* ret_call_rereada4_85 */
   {	register Ptr aRet;
	GIa4 = (GIsp++)->Val;
	{aRet = ((Ptr) GXasciii); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXpeekcn(void) {	/* peekcn */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_177);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_177(void) {	/* ret_call_getch_86 */
   {	register Ptr aRet;
	GIa1 = GIa4;
	{aRet = ((Ptr) GXrereada4); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXreadline(void) {	/* readline */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_178);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_178(void) {	/* ret_call_getch_87 */
   {	register Ptr aRet;
	GIa1 = GInil;
	if (GIa4 != (Ptr) 13)	{aRet = ((Ptr) GLread_179); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLread_180);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_180(void) {	/* ret_call_getch_88 */
   {	register Ptr aRet;
	GIa1 = GInil;
	if (GIa4 != (Ptr) 10)	{aRet = ((Ptr) GLread_179); goto lRet;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_179(void) {	/* readl2 */
   {	register Ptr aRet;
	if (GIa4 == (Ptr) 10)	{aRet = ((Ptr) GLread_181); goto lRet;}
	{aRet = ((Ptr) GLread_182); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_182(void) {	/* readl3 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	if (rA4 == (Ptr) 10)	{aRet = ((Ptr) GXnreverse); goto lRet;}
	 GIa1 = llrt_cons (rA4, GIa1);
	{aRet = ((Ptr) GLread_181); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_181(void) {	/* readl4 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = ((Ptr) GLread_183);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_183(void) {	/* ret_call_getch_89 */
   {	register Ptr aRet;
	GIa1 = (GIsp++)->Val;
	if (GIa4 != (Ptr) 13)	{aRet = ((Ptr) GLread_182); goto lRet;}
	{aRet = ((Ptr) GXnreverse); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXstratom(void) {	/* stratom */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	if (GIa1 >= GIbfloat)	goto l_erstrat1;
	if ((rA2 < GIbstrg) || (rA2 >= GIbsymb))	goto l_erstrat2;
	GIquotes = GIa3;
	{aRet = ((Ptr) GXtryatom); goto lRet;}
l_erstrat1:
	rA2 = GMstratom;
	{aRet = ((Ptr) GXerrnia); goto lRet;}
l_erstrat2:
	GIa1 = rA2;
	rA2 = GMstratom;
	{aRet = ((Ptr) GXerrnsa); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

extern Ptr GXreadstrg(void) {	/* readstring */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_184);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_184(void) {	/* ret_call_getch_90 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	GIa2 = (Ptr) 0;
	if (rA4 == (Ptr) 10)	{aRet = ((Ptr) GLread_185); goto lRet;}
	if (rA4 != (Ptr) 13)	{aRet = ((Ptr) GLread_186); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLread_187);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_187(void) {	/* ret_call_getch_91 */
   {	register Ptr aRet;
	GIa2 = (Ptr) 0;
	{aRet = ((Ptr) GLread_186); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_186(void) {	/* reads3 */
   {	register Ptr aRet, rA2, rA4;
	rA2 = GIa2; rA4 = GIa4;
	if (rA4 == (Ptr) 10)	{aRet = ((Ptr) GLread_188); goto lRet;}
	*((char *) (GIbufat->Val + 2) + (Fix) (rA2)) = (char) rA4;
	if (rA2 == GIlgbufat)	{aRet = ((Ptr) GLread_188); goto lRet;}
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (1)));
	{aRet = ((Ptr) GLread_185); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLread_185(void) {	/* reads4 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa2;
	(--rSp)->Val = ((Ptr) GLread_189);
	{aRet = ((Ptr) GXgetch); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_189(void) {	/* ret_call_getch_92 */
   {	register Ptr aRet;
	GIa2 = (GIsp++)->Val;
	if (GIa4 != (Ptr) 13)	{aRet = ((Ptr) GLread_186); goto lRet;}
	{aRet = ((Ptr) GLread_188); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_188(void) {	/* reads5 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLread_190);
	{aRet = ((Ptr) GXstrgallc); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_190(void) {	/* ret_call_strgallc_93 */
   {	register Ptr aRet;
	{register char *r1, *r2; register int r3;
		r1 = (char *) (GIbufat->Val + 2);
		r2 = (char *) (GIa1->Val + 2);
		r3 = (Fix) (GIa2);
	 while (r3--) *r2++ = *r1++;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXreaddltd(void) {	/* read-delimited-list */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLread_191); goto lRet;}
	GIa2 = (Ptr) ((unsigned char) *(((char *) (GItabch->Val + 2)) + (Fix) (rA1)));
	(--rSp)->Val = rA1;
	(--rSp)->Val = GIa2;
	*((char *) (GItabch->Val + 2) + (Fix) (rA1)) = (char) (Ptr) 5;
	GIa3 = ((Ptr) GXread2);
	(--rSp)->Val = ((Ptr) GLread_192);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_192(void) {	/* ret_call_sysprot_94 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	GIa4 = (rSp++)->Val;
	*((char *) (GItabch->Val + 2) + (Fix) (GIa4)) = (char) GIa2;
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_191(void) {	/* readdltr */
   {	register Ptr aRet;
	GIa2 = GMreaddltd;
	{aRet = ((Ptr) GXerrnia); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXasciii(void) {	/* asciii */
   {	register Ptr aRet, rSp, rA1, rA2;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
	rA1 = GIa4;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLread_193); goto lRet;}
	if ((Fix) (rA1) < (Fix) 0)	goto l_fascii3;
	if ((Fix) (rA1) >= (Fix) 128)	goto l_fascii3;
	rA2 = (GIcachch->Val + 2 + (Fix) (rA1))->Val;
	if ((rA2 < GIbsymb) || (rA2 >= GIbcons))	goto l_fascii3;
	rA1 = rA2;
	{aRet = (rSp++)->Val; goto lRet;}
l_fascii3:
	(--rSp)->Val = rA1;
	rA2 = (Ptr) 0;
	*((char *) (GIbufat->Val + 2) + (Fix) (rA2)) = (char) rA1;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (1)));
	rA1 = rA2;
	rA2 = GIbufat;
	(--rSp)->Val = GIcpkgc;
	GIa3 = ((Ptr) GLread_194);
	(--rSp)->Val = ((Ptr) GLread_195);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLread_195(void) {	/* ret_call_sysprot_95 */
   {	register Ptr aRet, rSp, rA1, rA2;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
	rA1 = (rSp++)->Val;
	GIcpkgc = (rSp++)->Val;
	rA2 = (rSp++)->Val;
	if ((rA1 < GIbsymb) || (rA1 >= GIbcons))	goto l_fascii7;
	if ((Fix) (rA2) < (Fix) 0)	goto l_fascii7;
	if ((Fix) (rA2) >= (Fix) 128)	goto l_fascii7;
	(GIcachch->Val + 2 + (Fix) (rA2))->Val = rA1;
l_fascii7:
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLread_194(void) {	/* fascii8 */
   {	register Ptr aRet;
	GIcpkgc = GInil;
	{aRet = ((Ptr) GXtryatom); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_193(void) {	/* ascierr */
   {	register Ptr aRet;
	GIa2 = GMfascii;
	{aRet = ((Ptr) GXerrnia); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXfascii(void) {	/* ascii */
   {	register Ptr aRet;
	GIa4 = GIa1;
	{aRet = ((Ptr) GXasciii); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXcascii(void) {	/* cascii */
   {	register Ptr aRet;
	GIsavea4 = GMcascii;
	(--GIsp)->Val = ((Ptr) GLread_196);
	{aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_196(void) {	/* ret_call_stringa1_96 */
   {	register Ptr aRet;
	GIa1 = (Ptr) ((unsigned char) *(((char *) (GIa1->Val + 2)) + (Fix) 0));
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXconcatpk(void) {	/* concatpkgc */
   {	register Ptr aRet, rSp, rA1, rA2, rBsymb, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBsymb = GIbsymb; rBcons = GIbcons;
	if ((rA1 < rBsymb) || (rA1 >= rBcons))	{aRet = ((Ptr) GLread_197); goto lRet;}
	if ((rA2 < rBsymb) || (rA2 >= rBcons))	{aRet = ((Ptr) GLread_198); goto lRet;}
l_concpk0:
	if (rA2 == GInil)	{ aRet = (rSp++)->Val; goto lRet;}
	(--rSp)->Val = rA2;
	rA2 = (rA2 + 3)->Val;
	(--rSp)->Val = ((Ptr) GLread_199);
	goto l_concpk0;
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLread_199(void) {	/* ret_call_concpk0_97 */
   {	register Ptr aRet;
	GIa2 = (GIsp++)->Val;
	{aRet = ((Ptr) GXtrysympk); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_198(void) {	/* concpkr2 */
   {	register Ptr aRet;
	GIa1 = GIa2;
	{aRet = ((Ptr) GLread_197); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLread_197(void) {	/* concpkr1 */
   {	register Ptr aRet;
	GIa2 = GMconcatpk;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXuppercase(void) {	/* uppercase */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if (rA1 >= GIbfloat)	goto l_upper9;
	if ((Fix) (rA1) < (Fix) 97)	{ aRet = (rSp++)->Val; goto lRet;}
	if ((Fix) (rA1) > (Fix) 122)	{ aRet = (rSp++)->Val; goto lRet;}
	rA1 = (Ptr) ((Fix) (rA1) - 32);
l_upper8:
	{aRet = (rSp++)->Val; goto lRet;}
l_upper9:
	GIa2 = GMuppercase;
	{aRet = ((Ptr) GXerrnia); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXlowercase(void) {	/* lowercase */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if (rA1 >= GIbfloat)	goto l_lower9;
	if ((Fix) (rA1) < (Fix) 65)	{ aRet = (rSp++)->Val; goto lRet;}
	if ((Fix) (rA1) > (Fix) 90)	{ aRet = (rSp++)->Val; goto lRet;}
	rA1 = (Ptr) ((Fix) (rA1) + 32);
l_lower8:
	{aRet = (rSp++)->Val; goto lRet;}
l_lower9:
	GIa2 = GMlowercase;
	{aRet = ((Ptr) GXerrnia); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXasciip(void) {	/* asciip */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if (rA1 >= GIbfloat)	goto l_asciipn;
	if ((Fix) (rA1) < (Fix) 0)	goto l_asciipn;
	if ((Fix) (rA1) <= (Fix) 255)	{ aRet = (rSp++)->Val; goto lRet;}
l_asciipn:
	rA1 = GInil;
l_asciipt:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXdigitp(void) {	/* digitp */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if (rA1 >= GIbfloat)	goto l_digitpn;
	if ((Fix) (rA1) < (Fix) 48)	goto l_digitpn;
	if ((Fix) (rA1) <= (Fix) 57)	{ aRet = (rSp++)->Val; goto lRet;}
l_digitpn:
	rA1 = GInil;
l_digitpt:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXletterp(void) {	/* letterp */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if (rA1 >= GIbfloat)	goto l_lettern;
	if ((Fix) (rA1) < (Fix) 65)	goto l_lettere;
	if ((Fix) (rA1) <= (Fix) 90)	{ aRet = (rSp++)->Val; goto lRet;}
l_lettere:
	if ((Fix) (rA1) < (Fix) 97)	goto l_lettern;
	if ((Fix) (rA1) <= (Fix) 122)	{ aRet = (rSp++)->Val; goto lRet;}
l_lettern:
	rA1 = GInil;
l_lettert:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXfibase(void) {	/* ibase */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = GMfibase;
	GIa3 = GIibase;
	(--rSp)->Val = (Ptr) 2;
	(--rSp)->Val = (Ptr) 36;
	(--rSp)->Val = ((Ptr) GLread_200);
	{aRet = ((Ptr) GXgetsetn); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLread_200(void) {	/* ret_call_getsetn_98 */
   {	register Ptr aRet;
	GIibase = GIa1;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDread_201() {	/* trace read */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,0,1,2);
  lRet:  return (aRet);}}

static Ptr GDread_202() {	/* trace implode */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,3,1,4);
  lRet:  return (aRet);}}

static Ptr GDread_203() {	/* trace implodech */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,5,1,4);
  lRet:  return (aRet);}}

static Ptr GDread_204() {	/* trace readch */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,6,1,2);
  lRet:  return (aRet);}}

static Ptr GDread_205() {	/* trace readcn */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,7,1,2);
  lRet:  return (aRet);}}

static Ptr GDread_206() {	/* trace curread */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,8,1,2);
  lRet:  return (aRet);}}

static Ptr GDread_207() {	/* trace teread */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,9,1,2);
  lRet:  return (aRet);}}

static Ptr GDread_208() {	/* trace reread */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,10,1,4);
  lRet:  return (aRet);}}

static Ptr GDread_209() {	/* trace peekch */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,11,1,2);
  lRet:  return (aRet);}}

static Ptr GDread_210() {	/* trace peekcn */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,12,1,2);
  lRet:  return (aRet);}}

static Ptr GDread_211() {	/* trace readline */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,13,1,2);
  lRet:  return (aRet);}}

static Ptr GDread_212() {	/* trace stratom */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,14,1,15);
  lRet:  return (aRet);}}

static Ptr GDread_213() {	/* trace readstring */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,16,1,2);
  lRet:  return (aRet);}}

static Ptr GDread_214() {	/* trace read-delimited-list */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,17,1,4);
  lRet:  return (aRet);}}

static Ptr GDread_215() {	/* trace ascii */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,18,1,4);
  lRet:  return (aRet);}}

static Ptr GDread_216() {	/* trace cascii */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,19,1,4);
  lRet:  return (aRet);}}

static Ptr GDread_217() {	/* trace concatpkgc */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,20,1,21);
  lRet:  return (aRet);}}

static Ptr GDread_218() {	/* trace uppercase */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,22,1,4);
  lRet:  return (aRet);}}

static Ptr GDread_219() {	/* trace lowercase */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,23,1,4);
  lRet:  return (aRet);}}

static Ptr GDread_220() {	/* trace asciip */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,24,1,4);
  lRet:  return (aRet);}}

static Ptr GDread_221() {	/* trace digitp */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,25,1,4);
  lRet:  return (aRet);}}

static Ptr GDread_222() {	/* trace letterp */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,26,1,4);
  lRet:  return (aRet);}}

static Ptr GDread_223() {	/* trace ibase */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYread,27,1,28);
  lRet:  return (aRet);}}

