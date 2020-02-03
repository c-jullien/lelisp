/* GELL 15.26: source file for the module: "physio" */
/*             translation done:           "Wed June 30 93 17:33:51 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "physio.h" 

static Ptr GLphysio_1() {       /* startmodule */
   {    register Ptr aRet;
        {aRet = ((Ptr) GXini_pio); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXini_pio() {        /* ini_pio */
   {    register Ptr aRet;
        GIa1 = GImaxchan;
        GIa2 = GInil;
        (--GIsp)->Val = ((Ptr) GLphysio_2);
        {aRet = ((Ptr) GXmakevect); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_2() {       /* ret_call_makevect_1 */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        GItabchan = GIa1;
        GImaxchan = (Ptr) ((UFix) ((Fix) (GImaxchan) - (Fix) 3));
        rA2 = GImaxchan;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) 1));
        GIa1 = GInil;
        GIa3 = (Ptr) 1;
        GIlgbuffer = (Ptr) 1024;
        (--GIsp)->Val = ((Ptr) GLphysio_3);
        {aRet = ((Ptr) GLphysio_4); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLphysio_3() {       /* ret_call_inchini_2 */
   {    register Ptr aRet;
        GIa1 = GInil;
        (--GIsp)->Val = ((Ptr) GLphysio_5);
        {aRet = ((Ptr) GLphysio_6); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_5() {       /* ret_call_inopen_3 */
   {    register Ptr aRet;
        GIa2 = GImaxchan;
        GIa1 = GInil;
        GIa3 = (Ptr) 2;
        (--GIsp)->Val = ((Ptr) GLphysio_7);
        {aRet = ((Ptr) GLphysio_8); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_7() {       /* ret_call_outchini_4 */
   {    register Ptr aRet;
        GIa1 = GImaxchan;
        (--GIsp)->Val = ((Ptr) GLphysio_9);
        {aRet = ((Ptr) GLphysio_10); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_9() {       /* ret_call_outopen_5 */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        rA2 = GImaxchan;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) 2));
        GIa1 = GInil;
        GIa3 = (Ptr) 2;
        (--GIsp)->Val = ((Ptr) GLphysio_11);
        {aRet = ((Ptr) GLphysio_8); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLphysio_11() {      /* ret_call_outchini_6 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = GImaxchan;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) 2));
        (--GIsp)->Val = ((Ptr) GLphysio_12);
        {aRet = ((Ptr) GLphysio_13); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLphysio_12() {      /* ret_call_outchani_7 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (GIbufout->Val + 1)->Val;
        GImaxpocou = rA1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (1)));
        GInbrig = rA1;
        rA1 = GImaxchan;
        (--GIsp)->Val = ((Ptr) GLphysio_14);
        {aRet = ((Ptr) GLphysio_13); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLphysio_14() {      /* ret_call_outchani_8 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 1;
        GIa2 = (Ptr) 0;
        (--GIsp)->Val = ((Ptr) GLphysio_15);
        {aRet = ((Ptr) GXmakestrg); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_15() {      /* ret_call_makestrg_9 */
   {    register Ptr aRet;
        GIbufch = GIa1;
        GIa1 = (Ptr) 2;
        GIa2 = (Ptr) 94;
        (--GIsp)->Val = ((Ptr) GLphysio_16);
        {aRet = ((Ptr) GXmakestrg); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_16() {      /* ret_call_makestrg_10 */
   {    register Ptr aRet;
        GIcntrlc = GIa1;
        GIa1 = (Ptr) 3;
        GIa2 = (Ptr) 8;
        (--GIsp)->Val = ((Ptr) GLphysio_17);
        {aRet = ((Ptr) GXmakestrg); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_17() {      /* ret_call_makestrg_11 */
   {    register Ptr aRet;
        GIrubstrg = GIa1;
        *((char *) (GIrubstrg->Val + 2) + (Fix) 1) = (char) (Ptr) 32;
        { llrt_inisymb ((Ptr) 3, (Ptr) "tyi", ((Ptr) GXtyi), (Ptr) &GMtyi, (Ptr) GFtyi);}
        { llrt_inisymb ((Ptr) 3, (Ptr) "tys", ((Ptr) GXtys), (Ptr) &GMtys, (Ptr) GFtys);}
        { llrt_inisymb ((Ptr) 10, (Ptr) "tyinstring", ((Ptr) GXtyinstrg), (Ptr) &GMtyinstrg, (Ptr) GFtyinstrg);}
        { llrt_inisymb ((Ptr) 3, (Ptr) "tyo", ((Ptr) GXtyo), (Ptr) &GMtyo, (Ptr) GFtyo);}
        { llrt_inisymb ((Ptr) 7, (Ptr) "tyflush", ((Ptr) GXtyflush), (Ptr) &GMtyflush, (Ptr) GFtyflush);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "tyback", ((Ptr) GXtyback), (Ptr) &GMtyback, (Ptr) GFtyback);}
        { llrt_inisymb ((Ptr) 9, (Ptr) "tynewline", ((Ptr) GXtynewln), (Ptr) &GMtynewln, (Ptr) GFtynewln);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "tycn", ((Ptr) GXtycn), (Ptr) &GMtycn, (Ptr) GFtycn);}
        { llrt_inisymb ((Ptr) 8, (Ptr) "tystring", ((Ptr) GXtystrg), (Ptr) &GMtystrg, (Ptr) GFtystrg);}
        { llrt_inisymb ((Ptr) 8, (Ptr) "tycursor", ((Ptr) GXtycursor), (Ptr) &GMtycursor, (Ptr) GFtycursor);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "tycls", ((Ptr) GXtycls), (Ptr) &GMtycls, (Ptr) GFtycls);}
        { llrt_inisymb ((Ptr) 15, (Ptr) "redisplayscreen", ((Ptr) GXtyrdspl), (Ptr) &GMtyrdspl, (Ptr) GFtyrdspl);}
        { llrt_inicst ((Ptr) 3, (Ptr) "tty", (Ptr) &GMtty);}
        GIcpkgc = GMtty;
        { llrt_inisymb ((Ptr) 3, (Ptr) "tyi", ((Ptr) GXttytyi), (Ptr) &GMttytyi, (Ptr) GFttytyi);}
        { llrt_inisymb ((Ptr) 3, (Ptr) "tys", ((Ptr) GXttytys), (Ptr) &GMttytys, (Ptr) GFttytys);}
        { llrt_inisymb ((Ptr) 10, (Ptr) "tyinstring", ((Ptr) GXttytyist), (Ptr) &GMttytyist, (Ptr) GFttytyist);}
        { llrt_inisymb ((Ptr) 3, (Ptr) "tyo", ((Ptr) GXttytyo), (Ptr) &GMttytyo, (Ptr) GFttytyo);}
        { llrt_inisymb ((Ptr) 7, (Ptr) "tyflush", ((Ptr) GXttytyflu), (Ptr) &GMttytyflu, (Ptr) GFttytyflu);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "tyback", ((Ptr) GXttytybac), (Ptr) &GMttytybac, (Ptr) GFttytybac);}
        { llrt_inisymb ((Ptr) 9, (Ptr) "tynewline", ((Ptr) GXttytynew), (Ptr) &GMttytynew, (Ptr) GFttytynew);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "tycn", ((Ptr) GXttytycn), (Ptr) &GMttytycn, (Ptr) GFttytycn);}
        { llrt_inisymb ((Ptr) 8, (Ptr) "tystring", ((Ptr) GXttytystr), (Ptr) &GMttytystr, (Ptr) GFttytystr);}
        { llrt_inisymb ((Ptr) 8, (Ptr) "tycursor", ((Ptr) GXttytycur), (Ptr) &GMttytycur, (Ptr) GFttytycur);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "tycls", ((Ptr) GXttytycls), (Ptr) &GMttytycls, (Ptr) GFttytycls);}
        { llrt_inisymb ((Ptr) 15, (Ptr) "redisplayscreen", ((Ptr) GXttytyrds), (Ptr) &GMttytyrds, (Ptr) GFttytyrds);}
        GIcpkgc = GMsyspkgc;
        { llrt_inicst ((Ptr) 3, (Ptr) "tty", (Ptr) &GMsyspktty);}
        GIa1->Val = GMtty;
        GIcpkgc = GInil;
        { llrt_inicst ((Ptr) 4, (Ptr) "tyco", (Ptr) &GMtyco);}
        { llrt_inisymb ((Ptr) 3, (Ptr) "bol", ((Ptr) GXbol), (Ptr) &GMbol, (Ptr) GFbol);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "inmax", ((Ptr) GXfinmax), (Ptr) &GMfinmax, (Ptr) GFfinmax);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "inpos", ((Ptr) GXfinpos), (Ptr) &GMfinpos, (Ptr) GFfinpos);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "inbuf", ((Ptr) GXfinbuf), (Ptr) &GMfinbuf, (Ptr) GFfinbuf);}
        { llrt_inisymb ((Ptr) 3, (Ptr) "eof", ((Ptr) GXlleof), (Ptr) &GMlleof, (Ptr) GFlleof);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "prompt", ((Ptr) GXprompt), (Ptr) &GMprompt, (Ptr) GFprompt);}
        { llrt_inicst ((Ptr) 2, (Ptr) "? ", (Ptr) &GMstdprmpt);}
        GIcurprmpt = (GIa1 + 7)->Val;
        GIcpkgc = GMllsystem;
        { llrt_inicst ((Ptr) 18, (Ptr) "real-terminal-flag", (Ptr) &GMrealterm);}
        GIa1->Val = GMt;
        { llrt_inicst ((Ptr) 14, (Ptr) "line-mode-flag", (Ptr) &GMlinemode);}
        GIa1->Val = GInil;
        GIcpkgc = GInil;
        { llrt_inisymb ((Ptr) 5, (Ptr) "openi", ((Ptr) GXopeni), (Ptr) &GMopeni, (Ptr) GFopeni);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "openo", ((Ptr) GXopeno), (Ptr) &GMopeno, (Ptr) GFopeno);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "opena", ((Ptr) GXopena), (Ptr) &GMopena, (Ptr) GFopena);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "openib", ((Ptr) GXopenib), (Ptr) &GMopenib, (Ptr) GFopenib);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "openob", ((Ptr) GXopenob), (Ptr) &GMopenob, (Ptr) GFopenob);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "openab", ((Ptr) GXopenab), (Ptr) &GMopenab, (Ptr) GFopenab);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "input", ((Ptr) GXinput), (Ptr) &GMinput, (Ptr) GFinput);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "inchan", ((Ptr) GXinchan), (Ptr) &GMinchan, (Ptr) GFinchan);}
        { llrt_inisymb ((Ptr) 7, (Ptr) "outchan", ((Ptr) GXoutchan), (Ptr) &GMoutchan, (Ptr) GFoutchan);}
        { llrt_inisymb ((Ptr) 7, (Ptr) "channel", ((Ptr) GXfchannel), (Ptr) &GMfchannel, (Ptr) GFfchannel);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "output", ((Ptr) GXoutput), (Ptr) &GMoutput, (Ptr) GFoutput);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "close", ((Ptr) GXlclose), (Ptr) &GMlclose, (Ptr) GFlclose);}
        { llrt_inisymb ((Ptr) 10, (Ptr) "deletefile", ((Ptr) GXdeletfi), (Ptr) &GMdeletfi, (Ptr) GFdeletfi);}
        { llrt_inisymb ((Ptr) 10, (Ptr) "renamefile", ((Ptr) GXrenamfi), (Ptr) &GMrenamfi, (Ptr) GFrenamfi);}
        { llrt_inisymb ((Ptr) 8, (Ptr) "copyfile", ((Ptr) GXcopyfi), (Ptr) &GMcopyfi, (Ptr) GFcopyfi);}
        { llrt_inisymb ((Ptr) 9, (Ptr) "probefile", ((Ptr) GXprobefi), (Ptr) &GMprobefi, (Ptr) GFprobefi);}
        { llrt_inisymb ((Ptr) 9, (Ptr) "save-core", ((Ptr) GXsavecor), (Ptr) &GMsavecor, (Ptr) GFsavecor);}
        { llrt_inisymb ((Ptr) 12, (Ptr) "restore-core", ((Ptr) GXrestcor), (Ptr) &GMrestcor, (Ptr) GFrestcor);}
        { llrt_inisymb ((Ptr) 17, (Ptr) "coerce-namestring", ((Ptr) GXcoercns), (Ptr) &GMcoercns, (Ptr) GFcoercns);}
        { llrt_inisymb ((Ptr) 16, (Ptr) "create-directory", ((Ptr) GXmakdir), (Ptr) &GMmakdir, (Ptr) GFmakdir);}
        { llrt_inisymb ((Ptr) 16, (Ptr) "delete-directory", ((Ptr) GXremdir), (Ptr) &GMremdir, (Ptr) GFremdir);}
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXphytrue() {        /* phytrue */
   {    register Ptr aRet;
        GIa1 = GMt;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXtyi() {    /* tyi */
   {    register Ptr aRet;
        GIa1 = GMtyi;
        {aRet = ((Ptr) GLphysio_18); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXtys() {    /* tys */
   {    register Ptr aRet;
        GIa1 = GMtys;
        {aRet = ((Ptr) GLphysio_18); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXtyinstrg() {       /* tyinstring */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        GIa1 = GMtyinstrg;
        {aRet = ((Ptr) GLphysio_19); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXtyflush() {        /* tyflush */
   {    register Ptr aRet;
        GIa1 = GMtyflush;
        {aRet = ((Ptr) GLphysio_18); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXtyo() {    /* tyo */
   {    register Ptr aRet;
        GIa1 = GMtyo;
        {aRet = ((Ptr) GLphysio_19); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXtyback() { /* tyback */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        GIa1 = GMtyback;
        {aRet = ((Ptr) GLphysio_19); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXtynewln() {        /* tynewline */
   {    register Ptr aRet;
        GIa1 = GMtynewln;
        {aRet = ((Ptr) GLphysio_18); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXtycn() {   /* tycn */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        GIa1 = GMtycn;
        {aRet = ((Ptr) GLphysio_19); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXtystrg() { /* tystring */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        GIa4 = (Ptr) 2;
        GIa1 = GMtystrg;
        {aRet = ((Ptr) GLphysio_19); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXtycursor() {       /* tycursor */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        GIa4 = (Ptr) 2;
        GIa1 = GMtycursor;
        {aRet = ((Ptr) GLphysio_19); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXtycls() {  /* tycls */
   {    register Ptr aRet;
        GIa1 = GMtycls;
        {aRet = ((Ptr) GLphysio_18); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXtyrdspl() {        /* redisplayscreen */
   {    register Ptr aRet;
        GIa1 = GMtyrdspl;
        {aRet = ((Ptr) GLphysio_19); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_18() {      /* totty0 */
   {    register Ptr aRet;
        GIa4 = (Ptr) 0;
        {aRet = ((Ptr) GLphysio_19); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_19() {      /* totty */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa4;
        GIa2 = rA1;
        rA1 = GMsyspktty;
        rA1 = rA1->Val;
        GIa3 = GInil;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLphysio_20);
        {aRet = ((Ptr) GXgetfns); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLphysio_20() {      /* ret_call_getfns_12 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = (rSp++)->Val;
        if (rA1 == GInil)       goto l_tottyer;
        GIa4 = (rSp++)->Val;
        {aRet = ((Ptr) GXffuncall); goto lRet;}
l_tottyer:
        rA1 = GMsyspktty;
        rA1 = rA1->Val;
        {aRet = ((Ptr) GXerrudf); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXttytyi() { /* #:gell:tyi */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_21);
        {aRet = ((Ptr) GXtyflush); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_21() {      /* ret_call_tyflush_13 */
   {    register Ptr aRet;
        GIa1 = (Ptr) llrt_ttyin();
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXttytys() { /* #:gell:tys */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_22);
        {aRet = ((Ptr) GXtyflush); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_22() {      /* ret_call_tyflush_14 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register int aux;
                aux = llrt_ttys(llrt_charttys);
                GIa2 = (Ptr) aux;
                aux = *llrt_charttys;
                GIa1 = (Ptr) aux;}
        if (GIa2 == (Ptr) 0)    { aRet = (rSp++)->Val; goto lRet;}
        GIa1 = GInil;
l_tys9:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXttytyist() {       /* #:gell:tyinstring */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((rA1 < GIbstrg) || (rA1 >= GIbsymb))        {aRet = ((Ptr) GLphysio_23); goto lRet;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLphysio_24);
        {aRet = ((Ptr) GXtyflush); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_24() {      /* ret_call_tyflush_15 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (rSp++)->Val;
        rA1 = (Ptr) llrt_ttyinstr(rA1->Val + 2,(rA1->Val + 1)->Val);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLphysio_23() {      /* ttyinr */
   {    register Ptr aRet;
        GIa2 = GMttytyist;
        {aRet = ((Ptr) GXerrnsa); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXttytyo() { /* #:gell:tyo */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        if (rA4 == (Ptr) 0)     {aRet = ((Ptr) GLphysio_25); goto lRet;}
        (--GIsp)->Val = rA4;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
        {aRet = ((Ptr) GLphysio_26); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLphysio_27() {      /* ttytyo1 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        GIa1 = (rSp + (Fix) (rA4))->Val;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLphysio_26); goto lRet;}
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLphysio_28);
        {aRet = ((Ptr) GLphysio_29); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_28() {      /* ret_call_ttytyoi_16 */
   {    register Ptr aRet;
        GIa4 = (GIsp++)->Val;
        {aRet = ((Ptr) GLphysio_26); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_26() {      /* ttytyo2 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux > 0)    {aRet = ((Ptr) GLphysio_27); goto lRet;}
                else rA4 = (Ptr) 0;}
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLphysio_25() {      /* ttytyo9 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_29() {      /* ttytyoi */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIostream;
        (--rSp)->Val = rA1;
        rA1 = GImaxchan;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) 2));
        (--rSp)->Val = ((Ptr) GLphysio_30);
        {aRet = ((Ptr) GLphysio_13); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLphysio_30() {      /* ret_call_outchani_17 */
   {    register Ptr aRet;
        GIa1 = (GIsp++)->Val;
        GIa3 = ((Ptr) GLphysio_31);
        {aRet = ((Ptr) GLphysio_32); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_32() {      /* ttytyoi0 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_33);
        {aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_33() {      /* ret_call_sysprot_18 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (rSp++)->Val;
        {register Ptr aux;
                aux = rSp->Val;
                rSp->Val = rA1;
                rA1 = aux;}
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLphysio_34);
        {aRet = ((Ptr) GLphysio_13); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLphysio_34() {      /* ret_call_outchani_19 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_31() {      /* ttytyoi1 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if (rA1 < GIbfloat)     {aRet = ((Ptr) GLphysio_35); goto lRet;}
        if ((long) rA1 >= (long) GIbcons)       {aRet = ((Ptr) GLphysio_36); goto lRet;}
        if ((rA1 >= GIbstrg) && (rA1 < GIbsymb))        {aRet = ((Ptr) GLphysio_37); goto lRet;}
        {aRet = ((Ptr) GLphysio_38); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_38() {      /* ttytyoer */
   {    register Ptr aRet;
        GIa2 = GMttytyo;
        {aRet = ((Ptr) GXerrnia); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_35() {      /* ttytyof */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa4 = rA1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLphysio_39);
        {aRet = ((Ptr) GXoutch); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_39() {      /* ret_call_outch_20 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_36() {      /* ttytyoc */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLphysio_40); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_40() {      /* ttytyoc1 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = (rA1 + 1)->Val;
        GIa4 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLphysio_41);
        {aRet = ((Ptr) GXoutch); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_41() {      /* ret_call_outch_21 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (rSp++)->Val;
        if ((long) rA1 >= (long) GIbcons)       {aRet = ((Ptr) GLphysio_40); goto lRet;}
        if (rA1 != GInil)       {aRet = ((Ptr) GLphysio_38); goto lRet;}
        rA1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLphysio_37() {      /* ttytyos */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        rA2 = (GIa1->Val + 1)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (GIpocour)));
        if ((Fix) (rA2) < (Fix) (GImaxpocou))   {aRet = ((Ptr) GLphysio_42); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLphysio_42);
        {aRet = ((Ptr) GXflulin); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLphysio_42() {      /* ttytyos1 */
   {    register Ptr aRet, rA1, rA2;
        rA1 = GIa1; rA2 = GIa2;
        rA2 = (rA1->Val + 1)->Val;
        {register char *r1, *r2; register int r3;
                r1 = (char *) (rA1->Val + 2);
                r2 = (char *) (GIbufout->Val + 2);
                r3 = (Fix) (rA2);
                if ((r1 == r2) && ((Fix) 0 < (Fix) (GIpocour))) {
                        r1 += r3 + (Fix) 0;
                        r2 += r3 + (Fix) (GIpocour);
                        while (r3--) *--r2 = *--r1;
                 } else {
                        r1 += (Fix) 0;
                        r2 += (Fix) (GIpocour);
                        while (r3--) *r2++ = *r1++;}}
        GIpocour = (Ptr) ((UFix) ((Fix) (GIpocour) + (Fix) (rA2)));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

extern Ptr GXttytyflu() {       /* #:gell:tyflush */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = GImaxchan;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) 2));
        rA1 = (GItabchan->Val + 2 + (Fix) (rA1))->Val;
        rA1 = (rA1->Val + 2 + (Fix) 3)->Val;
        if (rA1 != (Ptr) 0)     goto l_ttytyfl1;
        {aRet = (rSp++)->Val; goto lRet;}
l_ttytyfl1:
        (--rSp)->Val = GIostream;
        rA1 = GImaxchan;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) 2));
        (--rSp)->Val = ((Ptr) GLphysio_43);
        {aRet = ((Ptr) GLphysio_13); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLphysio_43() {      /* ret_call_outchani_23 */
   {    register Ptr aRet;
        GIa3 = ((Ptr) GXflulin);
        {aRet = ((Ptr) GLphysio_32); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXttytybac() {       /* #:gell:tyback */
   {    register Ptr aRet;
        GIa1 = GIrubstrg;
        GIa2 = (Ptr) 3;
        {aRet = ((Ptr) GXttytystr); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXttytynew() {       /* #:gell:tynewline */
   {    register Ptr aRet;
        llrt_ttyout(2, "\n\r");
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXttytycn() {        /* #:gell:tycn */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        rA2 = GIbufch;
        *((char *) (rA2->Val + 2) + (Fix) 0) = (char) GIa1;
        llrt_ttyout((Fix) 1, rA2->Val + 2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

extern Ptr GXttytystr() {       /* #:gell:tystring */
   {    register Ptr aRet, rA1, rA2, rA3;
        rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        if ((rA1 < GIbstrg) || (rA1 >= GIbsymb))        goto l_tystrers;
        if (rA2 >= GIbfloat)    goto l_tystrern;
        rA3 = (rA1->Val + 1)->Val;
        if ((Fix) (rA2) < (Fix) 0)      goto l_ttytyst0;
        if ((Fix) (rA2) < (Fix) (rA3))  goto l_ttytyst1;
l_ttytyst0:
        rA2 = rA3;
l_ttytyst1:
        llrt_ttyout((Fix) (rA2), rA1->Val + 2);
        {aRet = (GIsp++)->Val; goto lRet;}
l_tystrers:
        rA2 = GMtystrg;
        {aRet = ((Ptr) GXerrnsa); goto lRet;}
l_tystrern:
        rA1 = rA2;
        rA2 = GMtystrg;
        {aRet = ((Ptr) GXerrnia); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

extern Ptr GXttytycur() {       /* #:gell:tycursor */
   {    register Ptr aRet;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXttytycls() {       /* #:gell:tycls */
   {    register Ptr aRet;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXttytyrds() {       /* #:gell:redisplayscreen */
   {    register Ptr aRet;
        {aRet = ((Ptr) GXrdpscrn); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXbol() {    /* bol */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_44);
        {aRet = ((Ptr) GLphysio_45); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_44() {      /* ret_call_inphyl_24 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXfinmax() { /* inmax */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = (Ptr) 0;
        rA2 = (GIligne->Val + 1)->Val;
        (--rSp)->Val = rA2;
        rA2 = GMfinmax;
        GIa3 = GIinmax;
        (--rSp)->Val = ((Ptr) GLphysio_46);
        {aRet = ((Ptr) GXgetsetn); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLphysio_46() {      /* ret_call_getsetn_25 */
   {    register Ptr aRet;
        GIinmax = GIa1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXfinpos() { /* inpos */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = (Ptr) 0;
        rA2 = (GIligne->Val + 1)->Val;
        (--rSp)->Val = rA2;
        rA2 = GMfinpos;
        GIa3 = GIpolig;
        (--rSp)->Val = ((Ptr) GLphysio_47);
        {aRet = ((Ptr) GXgetsetn); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLphysio_47() {      /* ret_call_getsetn_26 */
   {    register Ptr aRet;
        GIpolig = GIa1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXfinbuf() { /* inbuf */
   {    register Ptr aRet, rSp, rA1, rA2, rA4, rBfloat;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rBfloat = GIbfloat;
        if (rA4 != (Ptr) 0)     goto l_inbu1;
        rA1 = GIligne;
        {aRet = (rSp++)->Val; goto lRet;}
l_inbu1:
        rA2 = GMfinbuf;
        if (rA4 == (Ptr) 1)     goto l_inbu2;
        if (rA4 == (Ptr) 2)     goto l_inbu5;
        rA1 = (Ptr) 2;
        rA2 = GMfinbuf;
        {aRet = ((Ptr) GXerrwna); goto lRet;}
l_inbu2:
        rA1 = (rSp++)->Val;
        if (rA1 < rBfloat)      goto l_inbu3;
        {aRet = ((Ptr) GXerrnia); goto lRet;}
l_inbu3:
        rA1 = (Ptr) ((unsigned char) *(((char *) (GIligne->Val + 2)) + (Fix) (rA1)));
        {aRet = (rSp++)->Val; goto lRet;}
l_inbu5:
        rA2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        if (rA1 < rBfloat)      goto l_inbu6;
        {aRet = ((Ptr) GXerrnia); goto lRet;}
l_inbu6:
        *((char *) (GIligne->Val + 2) + (Fix) (rA1)) = (char) rA2;
        rA1 = rA2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXinphy() {  /* inphy */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((Fix) (GIpolig) >= (Fix) (GIinmax)) goto l_inph2;
        GIa4 = (Ptr) ((unsigned char) *(((char *) (GIligne->Val + 2)) + (Fix) (GIpolig)));
        GIpolig = (Ptr) ((UFix) ((Fix) (GIpolig) + (Fix) (1)));
        {aRet = (rSp++)->Val; goto lRet;}
l_inph2:
        if (GIitcount != 0) {GIsp = rSp; llrt_ithard ();}
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa4;
        GIa1 = GMbol;
        GIa2 = GInil;
        (--rSp)->Val = ((Ptr) GLphysio_48);
        {aRet = ((Ptr) GXitsoft); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_48() {      /* ret_call_itsoft_27 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        GIa2 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        GIpolig = (Ptr) 0;
        {aRet = ((Ptr) GXinphy); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_45() {      /* inphyl */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        {aRet = ((Ptr) GLphysio_49); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_49() {      /* inphyl0 */
   {    register Ptr aRet;
        if (GIistream < GIbfloat)       {aRet = ((Ptr) GLphysio_50); goto lRet;}
l_inphy1:
        GIa1 = GIcurprmpt;
        GIa2 = (GIa1->Val + 1)->Val;
        (--GIsp)->Val = ((Ptr) GLphysio_51);
        {aRet = ((Ptr) GXtystrg); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_51() {      /* ret_call_tystrg_28 */
   {    register Ptr aRet, rA3, rNil;
        rA3 = GIa3; rNil = GInil;
        GIa4 = (Ptr) 0;
        rA3 = GMlinemode;
        if (rA3->Val != rNil)   {aRet = ((Ptr) GLphysio_52); goto lRet;}
        rA3 = GMrealterm;
        rA3 = rA3->Val;
        if (rA3 == rNil)        {aRet = ((Ptr) GLphysio_53); goto lRet;}
        {aRet = ((Ptr) GLphysio_54); goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

static Ptr GLphysio_54() {      /* inphy3 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_55);
        {aRet = ((Ptr) GXtyi); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_55() {      /* ret_call_tyi_29 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 1)->Val = rA1;
        if (rA1 == (Ptr) 8)     {aRet = ((Ptr) GLphysio_56); goto lRet;}
        if (rA1 == (Ptr) 127)   {aRet = ((Ptr) GLphysio_56); goto lRet;}
        if (rA1 == (Ptr) 24)    {aRet = ((Ptr) GLphysio_57); goto lRet;}
        if (rA1 == (Ptr) 21)    {aRet = ((Ptr) GLphysio_57); goto lRet;}
        if (rA1 == (Ptr) 13)    {aRet = ((Ptr) GLphysio_58); goto lRet;}
        if (rA1 == (Ptr) 10)    {aRet = ((Ptr) GLphysio_58); goto lRet;}
        if ((Fix) (rA1) < (Fix) 32)     {aRet = ((Ptr) GLphysio_59); goto lRet;}
        (--rSp)->Val = ((Ptr) GLphysio_60);
        {aRet = ((Ptr) GXtycn); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_60() {      /* inphy4 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA1 = (rSp + 1)->Val;
        rA4 = rSp->Val;
        *((char *) (GIligne->Val + 2) + (Fix) (rA4)) = (char) rA1;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
        rSp->Val = rA4;
        rA1 = (GIligne->Val + 1)->Val;
        if ((Fix) (rA4) < (Fix) (rA1))  {aRet = ((Ptr) GLphysio_54); goto lRet;}
        {aRet = ((Ptr) GLphysio_61); goto lRet;}
  lRet: GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLphysio_59() {      /* inphy5 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) 64));
        *((char *) (GIcntrlc->Val + 2) + (Fix) 1) = (char) rA1;
        rA1 = GIcntrlc;
        GIa2 = (Ptr) 2;
        (--GIsp)->Val = ((Ptr) GLphysio_60);
        {aRet = ((Ptr) GXtystrg); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLphysio_56() {      /* inphy6 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        if (rA4 == (Ptr) 0)     {aRet = ((Ptr) GLphysio_54); goto lRet;}
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
        rSp->Val = rA4;
        (--rSp)->Val = ((Ptr) GLphysio_54);
        {aRet = ((Ptr) GLphysio_62); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLphysio_62() {      /* inphy60 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (Ptr) ((unsigned char) *(((char *) (GIligne->Val + 2)) + (Fix) (GIa4)));
        if ((Fix) (rA1) >= (Fix) 32)    {aRet = ((Ptr) GXtyback); goto lRet;}
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) 64));
        (--GIsp)->Val = ((Ptr) GLphysio_63);
        {aRet = ((Ptr) GXtyback); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLphysio_63() {      /* ret_call_tyback_33 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 94;
        {aRet = ((Ptr) GXtyback); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_57() {      /* inphy8 */
   {    register Ptr aRet;
        GIa4 = GIsp->Val;
        if (GIa4 == (Ptr) 0)    {aRet = ((Ptr) GLphysio_54); goto lRet;}
        {aRet = ((Ptr) GLphysio_64); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_65() {      /* inphy80 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp->Val = GIa4;
        (--rSp)->Val = ((Ptr) GLphysio_66);
        {aRet = ((Ptr) GLphysio_62); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_66() {      /* ret_call_inphy60_34 */
   {    register Ptr aRet;
        GIa4 = GIsp->Val;
        {aRet = ((Ptr) GLphysio_64); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_64() {      /* inphy81 */
   {    register Ptr aRet;
        {register Fix aux;
                aux = (Fix) (GIa4) - 1;
                GIa4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLphysio_65); goto lRet;}}
        GIsp->Val = (Ptr) 0;
        {aRet = ((Ptr) GLphysio_54); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_58() {      /* inphy9 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_67);
        {aRet = ((Ptr) GXtynewln); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_67() {      /* inphyc */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = GIsp->Val;
        *((char *) (GIligne->Val + 2) + (Fix) (rA4)) = (char) (Ptr) 13;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
        *((char *) (GIligne->Val + 2) + (Fix) (rA4)) = (char) (Ptr) 10;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
        {aRet = ((Ptr) GLphysio_61); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLphysio_61() {      /* inphyd */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIinmax = GIa4;
        rSp += (Fix) 2;
        GIa1 = (rSp++)->Val;
        GIa4 = (rSp++)->Val;
        GIa2 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_68() {      /* inphp2 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        *((char *) (GIligne->Val + 2) + (Fix) (rA4)) = (char) GIa1;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
        rSp->Val = rA4;
        {aRet = ((Ptr) GLphysio_53); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLphysio_53() {      /* inphp3 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_69);
        {aRet = ((Ptr) GXtyi); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_69() {      /* ret_call_tyi_36 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if (rA1 == (Ptr) 10)    {aRet = ((Ptr) GLphysio_67); goto lRet;}
        if (rA1 != (Ptr) 13)    {aRet = ((Ptr) GLphysio_68); goto lRet;}
        {aRet = ((Ptr) GLphysio_67); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_52() {      /* inphln */
   {    register Ptr aRet;
        GIa1 = GIligne;
        (--GIsp)->Val = ((Ptr) GLphysio_70);
        {aRet = ((Ptr) GXtyinstrg); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_70() {      /* ret_call_tyinstrg_37 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLphysio_67); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_50() {      /* inchf */
   {    register Ptr aRet;
        GIa3 = (GIcurinch->Val + 2 + (Fix) 1)->Val;
        if (GIa3 == (Ptr) 1)    goto l_inchf00;
        if (GIa3 != (Ptr) 3)    goto l_inchf0;
        GIa3 = (Ptr) llrt_inbfb(GIistream, GIligne->Val + 2, &GIa4);
        GIsp->Val = GIa4;
        if ((Fix) (GIa3) < (Fix) 0)     {aRet = ((Ptr) GLphysio_71); goto lRet;}
        if (GIa3 == (Ptr) 1)    {aRet = ((Ptr) GLphysio_72); goto lRet;}
        {aRet = ((Ptr) GLphysio_61); goto lRet;}
l_inchf00:
        GIa3 = (Ptr) llrt_inbf(GIistream, GIligne->Val + 2, &GIa4);
        GIsp->Val = GIa4;
        if ((Fix) (GIa3) < (Fix) 0)     {aRet = ((Ptr) GLphysio_71); goto lRet;}
        if ((Ptr) 0 == GIa3)    {aRet = ((Ptr) GLphysio_67); goto lRet;}
        if ((Ptr) 1 == GIa3)    {aRet = ((Ptr) GLphysio_72); goto lRet;}
        {aRet = ((Ptr) GLphysio_61); goto lRet;}
l_inchf0:
        GIa1 = GInil;
        (--GIsp)->Val = ((Ptr) GLphysio_73);
        {aRet = ((Ptr) GLphysio_74); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_73() {      /* ret_call_inchani_38 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) 0xfffc);
        GIa2 = GMinchan;
        {aRet = ((Ptr) GXerrios); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_71() {      /* inchf1 */
   {    register Ptr aRet;
        GIa1 = GInil;
        (--GIsp)->Val = ((Ptr) GLphysio_75);
        {aRet = ((Ptr) GLphysio_74); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_75() {      /* ret_call_inchani_39 */
   {    register Ptr aRet;
        GIa1 = GIa3;
        GIa2 = GMinchan;
        {aRet = ((Ptr) GXerrios); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_72() {      /* inchf3 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa4;
        GIa1 = GMlleof;
        rA2 = GIistream;
        GIsp = rSp; GIa2 = rA2; rA2 = llrt_cons (rA2, GInil);
        (--rSp)->Val = ((Ptr) GLphysio_76);
        {aRet = ((Ptr) GXitsoft); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLphysio_76() {      /* ret_call_itsoft_40 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa2 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLphysio_49); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXlleof() {  /* eof */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        if (rA1 == rNil)        {aRet = ((Ptr) GLphysio_77); goto lRet;}
        (--rSp)->Val = rA1;
        rA2 = (Ptr) llrt_fclos(rA1);
        rA2 = rNil;
        (GItabchan->Val + 2 + (Fix) (rA1))->Val = rA2;
        rA1 = rNil;
        (--rSp)->Val = ((Ptr) GLphysio_78);
        {aRet = ((Ptr) GLphysio_74); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLphysio_78() {      /* ret_call_inchani_41 */
   {    register Ptr aRet;
        GIa1 = (GIsp++)->Val;
        {aRet = ((Ptr) GLphysio_77); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_77() {      /* lleof1 */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        rA2 = GMstinread;
        if (rA2->Val == GInil)  goto l_lleof2;
        {aRet = ((Ptr) GXerlec11); goto lRet;}
l_lleof2:
        rA2 = GMlleof;
        {aRet = ((Ptr) GXfindtag); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

extern Ptr GXprompt() { /* prompt */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (rA4 == (Ptr) 0)     {aRet = ((Ptr) GLphysio_79); goto lRet;}
        if (rA4 == (Ptr) 1)     goto l_prompt1;
        GIa1 = (Ptr) 2;
        GIa2 = GMprompt;
        {aRet = ((Ptr) GXerrwna); goto lRet;}
l_prompt1:
        GIa1 = (rSp++)->Val;
        GIsavea4 = GMprompt;
        (--rSp)->Val = ((Ptr) GLphysio_80);
        {aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_80() {      /* ret_call_stringa1_42 */
   {    register Ptr aRet;
        GIcurprmpt = GIa1;
        {aRet = ((Ptr) GLphysio_79); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_79() {      /* prompt2 */
   {    register Ptr aRet;
        GIa1 = GIcurprmpt;
        {aRet = (GIsp++)->Val; goto lRet;}
l_prompter:
        GIa2 = GMprompt;
        {aRet = ((Ptr) GXerrnaa); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXcoercns() {        /* coerce-namestring */
   {    register Ptr aRet;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_81() {      /* coerci */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa1 = GMcoercns;
        GIa4 = (Ptr) 1;
        {aRet = ((Ptr) GXffuncall); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_82() {      /* chanalloc */
   {    register Ptr aRet, rSp, rA2, rA3;
        rSp = GIsp; rA2 = GIa2; rA3 = GIa3;
        rA2 = GImaxchan;
        goto l_chanal4;
l_chanal3:
        rA3 = (GItabchan->Val + 2 + (Fix) (rA2))->Val;
        if (rA3 == GInil)       { aRet = (rSp++)->Val; goto lRet;}
l_chanal4:
        {register Fix aux;
                aux = (Fix) (rA2) - 1;
                rA2 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_chanal3;}
        rA2 = (Ptr) ((UFix) 0xfffe);
l_chanal9:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLphysio_4() {       /* inchini */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa3;
        GIa1 = (Ptr) 7;
        GIa2 = GInil;
        (--rSp)->Val = ((Ptr) GLphysio_83);
        {aRet = ((Ptr) GXmakevect); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_83() {      /* ret_call_makevect_43 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = GIlgbuffer;
        GIa2 = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLphysio_84);
        {aRet = ((Ptr) GXmakestrg); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_84() {      /* ret_call_makestrg_44 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = (rSp++)->Val;
        (rA2->Val + 2 + (Fix) 2)->Val = rA1;
        GIa3 = (rSp++)->Val;
        (rA2->Val + 2 + (Fix) 1)->Val = GIa3;
        rA1 = (rSp++)->Val;
        (rA2->Val + 2 + (Fix) 0)->Val = rA1;
        (rA2->Val + 2 + (Fix) 3)->Val = (Ptr) 0;
        (rA2->Val + 2 + (Fix) 4)->Val = (Ptr) 0;
        rA1 = GInil;
        (rA2->Val + 2 + (Fix) 5)->Val = rA1;
        (rA2->Val + 2 + (Fix) 6)->Val = rA1;
        rA1 = (rSp++)->Val;
        (GItabchan->Val + 2 + (Fix) (rA1))->Val = rA2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLphysio_8() {       /* outchini */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa3;
        GIa1 = (Ptr) 7;
        GIa2 = GInil;
        (--rSp)->Val = ((Ptr) GLphysio_85);
        {aRet = ((Ptr) GXmakevect); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_85() {      /* ret_call_makevect_45 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = GIlgbuffer;
        GIa2 = (Ptr) 32;
        (--rSp)->Val = ((Ptr) GLphysio_86);
        {aRet = ((Ptr) GXmakestrg); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_86() {      /* ret_call_makestrg_46 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        rA2 = (rSp++)->Val;
        (rA2->Val + 2 + (Fix) 2)->Val = rA1;
        rA3 = (rSp++)->Val;
        (rA2->Val + 2 + (Fix) 1)->Val = rA3;
        rA3 = (rSp++)->Val;
        (rA2->Val + 2 + (Fix) 0)->Val = rA3;
        (rA2->Val + 2 + (Fix) 3)->Val = (Ptr) 0;
        (rA2->Val + 2 + (Fix) 4)->Val = GInbleft;
        (rA2->Val + 2 + (Fix) 5)->Val = GInbrig;
        (rA2->Val + 2 + (Fix) 6)->Val = GImaxpocou;
        rA1 = (rSp++)->Val;
        (GItabchan->Val + 2 + (Fix) (rA1))->Val = rA2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLphysio_87() {      /* openr1 */
   {    register Ptr aRet;
        GIa1 = GIa2;
        {aRet = ((Ptr) GLphysio_88); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_88() {      /* openr2 */
   {    register Ptr aRet;
        GIa2 = GIsavea4;
        {aRet = ((Ptr) GXerrios); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXopeni() {  /* openi */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_89);
        {aRet = ((Ptr) GLphysio_81); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_89() {      /* ret_call_coerci_47 */
   {    register Ptr aRet;
        GIsavea4 = GMopeni;
        (--GIsp)->Val = ((Ptr) GLphysio_90);
        {aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_90() {      /* ret_call_stringa1_48 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_91);
        {aRet = ((Ptr) GLphysio_82); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_91() {      /* ret_call_chanalloc_49 */
   {    register Ptr aRet, rA2, rA3;
        rA2 = GIa2; rA3 = GIa3;
        if (rA2 == (Ptr) ((UFix) 0xfffe))       {aRet = ((Ptr) GLphysio_87); goto lRet;}
        rA3 = (Ptr) llrt_infile(rA2,GIa1->Val + 2);
        if (rA3 != (Ptr) 0)     {aRet = ((Ptr) GLphysio_88); goto lRet;}
        rA3 = (Ptr) 1;
        {aRet = ((Ptr) GLphysio_4); goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

extern Ptr GXopeno() {  /* openo */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_92);
        {aRet = ((Ptr) GLphysio_81); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_92() {      /* ret_call_coerci_50 */
   {    register Ptr aRet;
        GIsavea4 = GMopeno;
        (--GIsp)->Val = ((Ptr) GLphysio_93);
        {aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_93() {      /* ret_call_stringa1_51 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_94);
        {aRet = ((Ptr) GLphysio_82); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_94() {      /* ret_call_chanalloc_52 */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        if (rA2 == (Ptr) ((UFix) 0xfffe))       {aRet = ((Ptr) GLphysio_87); goto lRet;}
        GIa4 = (Ptr) llrt_oufile(rA2,GIa1->Val + 2);
        if (GIa4 != (Ptr) 0)    {aRet = ((Ptr) GLphysio_88); goto lRet;}
        GIa3 = (Ptr) 2;
        {aRet = ((Ptr) GLphysio_8); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXopena() {  /* opena */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_95);
        {aRet = ((Ptr) GLphysio_81); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_95() {      /* ret_call_coerci_53 */
   {    register Ptr aRet;
        GIsavea4 = GMopena;
        (--GIsp)->Val = ((Ptr) GLphysio_96);
        {aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_96() {      /* ret_call_stringa1_54 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_97);
        {aRet = ((Ptr) GLphysio_82); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_97() {      /* ret_call_chanalloc_55 */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        if (rA2 == (Ptr) ((UFix) 0xfffe))       {aRet = ((Ptr) GLphysio_87); goto lRet;}
        GIa4 = (Ptr) llrt_apfile(rA2,GIa1->Val + 2);
        if (GIa4 != (Ptr) 0)    {aRet = ((Ptr) GLphysio_88); goto lRet;}
        GIa3 = (Ptr) 2;
        {aRet = ((Ptr) GLphysio_8); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXopenib() { /* openib */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_98);
        {aRet = ((Ptr) GLphysio_81); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_98() {      /* ret_call_coerci_56 */
   {    register Ptr aRet;
        GIsavea4 = GMopenib;
        (--GIsp)->Val = ((Ptr) GLphysio_99);
        {aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_99() {      /* ret_call_stringa1_57 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_100);
        {aRet = ((Ptr) GLphysio_82); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_100() {     /* ret_call_chanalloc_58 */
   {    register Ptr aRet, rA2, rA3;
        rA2 = GIa2; rA3 = GIa3;
        if (rA2 == (Ptr) ((UFix) 0xfffe))       {aRet = ((Ptr) GLphysio_87); goto lRet;}
        rA3 = (Ptr) llrt_infile(rA2,GIa1->Val + 2);
        if (rA3 != (Ptr) 0)     {aRet = ((Ptr) GLphysio_88); goto lRet;}
        rA3 = (Ptr) 3;
        {aRet = ((Ptr) GLphysio_4); goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

extern Ptr GXopenob() { /* openob */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_101);
        {aRet = ((Ptr) GLphysio_81); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_101() {     /* ret_call_coerci_59 */
   {    register Ptr aRet;
        GIsavea4 = GMopenob;
        (--GIsp)->Val = ((Ptr) GLphysio_102);
        {aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_102() {     /* ret_call_stringa1_60 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_103);
        {aRet = ((Ptr) GLphysio_82); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_103() {     /* ret_call_chanalloc_61 */
   {    register Ptr aRet, rA2, rA3;
        rA2 = GIa2; rA3 = GIa3;
        if (rA2 == (Ptr) ((UFix) 0xfffe))       {aRet = ((Ptr) GLphysio_87); goto lRet;}
        rA3 = (Ptr) llrt_oufile(rA2,GIa1->Val + 2);
        if (rA3 != (Ptr) 0)     {aRet = ((Ptr) GLphysio_88); goto lRet;}
        rA3 = (Ptr) 4;
        {aRet = ((Ptr) GLphysio_8); goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

extern Ptr GXopenab() { /* openab */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_104);
        {aRet = ((Ptr) GLphysio_81); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_104() {     /* ret_call_coerci_62 */
   {    register Ptr aRet;
        GIsavea4 = GMopenab;
        (--GIsp)->Val = ((Ptr) GLphysio_105);
        {aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_105() {     /* ret_call_stringa1_63 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_106);
        {aRet = ((Ptr) GLphysio_82); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_106() {     /* ret_call_chanalloc_64 */
   {    register Ptr aRet, rA2, rA3;
        rA2 = GIa2; rA3 = GIa3;
        if (rA2 == (Ptr) ((UFix) 0xfffe))       {aRet = ((Ptr) GLphysio_87); goto lRet;}
        rA3 = (Ptr) llrt_apfile(rA2,GIa1->Val + 2);
        if (rA3 != (Ptr) 0)     {aRet = ((Ptr) GLphysio_88); goto lRet;}
        rA3 = (Ptr) 4;
        {aRet = ((Ptr) GLphysio_8); goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

extern Ptr GXinput() {  /* input */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIistream == GInil) {aRet = ((Ptr) GLphysio_107); goto lRet;}
        (--rSp)->Val = GIa1;
        GIa1 = GIistream;
        (--rSp)->Val = ((Ptr) GLphysio_108);
        {aRet = ((Ptr) GLphysio_109); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_108() {     /* ret_call_closeint_65 */
   {    register Ptr aRet;
        GIa1 = (GIsp++)->Val;
        {aRet = ((Ptr) GLphysio_107); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_107() {     /* inputi */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLphysio_110); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLphysio_110);
        {aRet = ((Ptr) GXopeni); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_110() {     /* input2 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GXphytrue);
        {aRet = ((Ptr) GLphysio_74); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXoutput() { /* output */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((Fix) (GIostream) >= (Fix) (GImaxchan))     {aRet = ((Ptr) GLphysio_111); goto lRet;}
        (--rSp)->Val = GIa1;
        GIa1 = GIostream;
        (--rSp)->Val = ((Ptr) GLphysio_112);
        {aRet = ((Ptr) GLphysio_109); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_112() {     /* ret_call_closeint_68 */
   {    register Ptr aRet;
        GIa1 = (GIsp++)->Val;
        {aRet = ((Ptr) GLphysio_111); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_111() {     /* ouput1 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if (rA1 == GInil)       goto l_ouput2;
        if (rA1 != GMt) goto l_ouput3;
        rA1 = GImaxchan;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) 2));
        {aRet = ((Ptr) GLphysio_113); goto lRet;}
l_ouput2:
        rA1 = GImaxchan;
        {aRet = ((Ptr) GLphysio_113); goto lRet;}
l_ouput3:
        (--GIsp)->Val = ((Ptr) GLphysio_113);
        {aRet = ((Ptr) GXopeno); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLphysio_113() {     /* ouput4 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GXphytrue);
        {aRet = ((Ptr) GLphysio_13); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXinchan() { /* inchan */
   {    register Ptr aRet, rSp, rA1, rA2, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 0)     goto l_inchget;
        if (rA4 == (Ptr) 1)     goto l_inchset;
        rA1 = (Ptr) 1;
        rA2 = GMinchan;
        {aRet = ((Ptr) GXerrwna); goto lRet;}
l_inchget:
        rA1 = GIistream;
        {aRet = (rSp++)->Val; goto lRet;}
l_inchset:
        rA1 = (rSp++)->Val;
        if (rA1 < GIbfloat)     goto l_inchst2;
        if (rA1 == rNil)        {aRet = ((Ptr) GLphysio_74); goto lRet;}
l_incherr1:
        rA1 = (Ptr) ((UFix) 0xfffd);
l_incherr2:
        rA2 = GMinchan;
        {aRet = ((Ptr) GXerrios); goto lRet;}
l_inchst2:
        if ((Fix) (rA1) < (Fix) 0)      goto l_incherr1;
        if ((Fix) (rA1) >= (Fix) (GImaxchan))   goto l_incherr1;
        rA2 = (GItabchan->Val + 2 + (Fix) (rA1))->Val;
        if (rA2 == rNil)        goto l_incherr3;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        if (rA2 == (Ptr) 1)     {aRet = ((Ptr) GLphysio_74); goto lRet;}
        if (rA2 != (Ptr) 3)     goto l_incherr3;
        {aRet = ((Ptr) GLphysio_74); goto lRet;}
l_incherr3:
        rA1 = (Ptr) ((UFix) 0xfffc);
        goto l_incherr2;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLphysio_74() {      /* inchani */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLphysio_114);
        {aRet = ((Ptr) GLphysio_115); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_114() {     /* ret_call_inclose_71 */
   {    register Ptr aRet;
        GIa1 = (GIsp++)->Val;
        {aRet = ((Ptr) GLphysio_6); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_6() {       /* inopen */
   {    register Ptr aRet, rA1, rA2;
        rA1 = GIa1; rA2 = GIa2;
        GIistream = rA1;
        if (rA1 != GInil)       goto l_inchani3;
        rA2 = GImaxchan;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (1)));
        goto l_inchani4;
l_inchani3:
        rA2 = rA1;
l_inchani4:
        rA2 = (GItabchan->Val + 2 + (Fix) (rA2))->Val;
        GIligne = (rA2->Val + 2 + (Fix) 2)->Val;
        GIpolig = (rA2->Val + 2 + (Fix) 3)->Val;
        GIinmax = (rA2->Val + 2 + (Fix) 4)->Val;
        GIcurread = (rA2->Val + 2 + (Fix) 5)->Val;
        GIringur = (rA2->Val + 2 + (Fix) 6)->Val;
        GIcurinch = rA2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLphysio_115() {     /* inclose */
   {    register Ptr aRet, rSp, rA2, rNil;
        rSp = GIsp; rA2 = GIa2; rNil = GInil;
        rA2 = GIistream;
        if (rA2 != rNil)        goto l_inchani1;
        rA2 = GImaxchan;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (1)));
l_inchani1:
        rA2 = (GItabchan->Val + 2 + (Fix) (rA2))->Val;
        if (rA2 == rNil)        { aRet = (rSp++)->Val; goto lRet;}
        (rA2->Val + 2 + (Fix) 2)->Val = GIligne;
        (rA2->Val + 2 + (Fix) 3)->Val = GIpolig;
        (rA2->Val + 2 + (Fix) 4)->Val = GIinmax;
        (rA2->Val + 2 + (Fix) 5)->Val = GIcurread;
        (rA2->Val + 2 + (Fix) 6)->Val = GIringur;
l_inchani2:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

extern Ptr GXoutchan() {        /* outchan */
   {    register Ptr aRet, rSp, rA1, rA2, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 0)     goto l_ouchget;
        if (rA4 == (Ptr) 1)     goto l_ouchset;
        rA1 = (Ptr) 1;
        rA2 = GMoutchan;
        {aRet = ((Ptr) GXerrwna); goto lRet;}
l_ouchget:
        rA1 = GIostream;
        rA2 = GImaxchan;
        if ((Fix) (rA1) < (Fix) (rA2))  { aRet = (rSp++)->Val; goto lRet;}
        if (rA1 == rA2) goto l_ouchget1;
        rA1 = GMt;
        {aRet = (rSp++)->Val; goto lRet;}
l_ouchget1:
        rA1 = rNil;
l_ouchget2:
        {aRet = (rSp++)->Val; goto lRet;}
l_ouchset:
        rA1 = rSp->Val;
        if (rA1 < GIbfloat)     goto l_ouchst2;
        if (rA1 == rNil)        goto l_ouchst1;
        if (rA1 != GMt) {aRet = ((Ptr) GLphysio_116); goto lRet;}
        rA1 = GImaxchan;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) 2));
        goto l_ouchst3;
l_ouchst1:
        rA1 = GImaxchan;
        goto l_ouchst3;
l_ouchst2:
        if ((Fix) (rA1) < (Fix) 0)      {aRet = ((Ptr) GLphysio_116); goto lRet;}
        if ((Fix) (rA1) >= (Fix) (GImaxchan))   {aRet = ((Ptr) GLphysio_116); goto lRet;}
        rA2 = (GItabchan->Val + 2 + (Fix) (rA1))->Val;
        if (rA2 == rNil)        {aRet = ((Ptr) GLphysio_117); goto lRet;}
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        if (rA2 == (Ptr) 4)     goto l_ouchst3;
        if (rA2 != (Ptr) 2)     {aRet = ((Ptr) GLphysio_117); goto lRet;}
l_ouchst3:
        (--rSp)->Val = ((Ptr) GLphysio_118);
        {aRet = ((Ptr) GLphysio_13); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLphysio_118() {     /* ret_call_outchani_72 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_117() {     /* oucherr3 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) 0xfffc);
        {aRet = ((Ptr) GLphysio_119); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_116() {     /* oucherr1 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) 0xfffd);
        {aRet = ((Ptr) GLphysio_119); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_119() {     /* oucherr2 */
   {    register Ptr aRet;
        GIa2 = GMoutchan;
        {aRet = ((Ptr) GXerrios); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_13() {      /* outchani */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_10);
        {aRet = ((Ptr) GLphysio_120); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_10() {      /* outopen */
   {    register Ptr aRet, rA1, rA2;
        rA1 = GIa1; rA2 = GIa2;
        GIostream = rA1;
l_outchai3:
        rA2 = rA1;
l_outchai4:
        rA2 = (GItabchan->Val + 2 + (Fix) (rA2))->Val;
        GIbufout = (rA2->Val + 2 + (Fix) 2)->Val;
        GIpocour = (rA2->Val + 2 + (Fix) 3)->Val;
        GInbleft = (rA2->Val + 2 + (Fix) 4)->Val;
        GInbrig = (rA2->Val + 2 + (Fix) 5)->Val;
        GImaxpocou = (rA2->Val + 2 + (Fix) 6)->Val;
        GIcuroutch = rA2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLphysio_120() {     /* outclose */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        rA2 = GIostream;
l_outchai1:
        rA2 = (GItabchan->Val + 2 + (Fix) (rA2))->Val;
        if (rA2 == GInil)       { aRet = (rSp++)->Val; goto lRet;}
        (rA2->Val + 2 + (Fix) 2)->Val = GIbufout;
        (rA2->Val + 2 + (Fix) 3)->Val = GIpocour;
        (rA2->Val + 2 + (Fix) 4)->Val = GInbleft;
        (rA2->Val + 2 + (Fix) 5)->Val = GInbrig;
        (rA2->Val + 2 + (Fix) 6)->Val = GImaxpocou;
l_outchai2:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

extern Ptr GXfchannel() {       /* channel */
   {    register Ptr aRet, rA1, rA4;
        rA1 = GIa1; rA4 = GIa4;
        if (rA4 == (Ptr) 0)     {aRet = ((Ptr) GLphysio_121); goto lRet;}
        if (rA4 == (Ptr) 1)     goto l_fchan1;
        rA1 = (Ptr) 1;
        GIa2 = GMfchannel;
        {aRet = ((Ptr) GXerrwna); goto lRet;}
l_fchan1:
        rA1 = (GIsp++)->Val;
        if (rA1 < GIbfloat)     goto l_fchan2;
        if (rA1 == GMt) {aRet = ((Ptr) GLphysio_122); goto lRet;}
        GIa2 = GMfchannel;
        {aRet = ((Ptr) GXerrnia); goto lRet;}
l_fchan2:
        if ((Fix) (rA1) < (Fix) 0)      {aRet = ((Ptr) GLphysio_123); goto lRet;}
        if ((Fix) (rA1) >= (Fix) (GImaxchan))   {aRet = ((Ptr) GLphysio_123); goto lRet;}
        {aRet = ((Ptr) GLphysio_124); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLphysio_124() {     /* fchan21 */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        rA1 = (GItabchan->Val + 2 + (Fix) (rA1))->Val;
        if (rA1 == rNil)        goto l_fchan3;
        rA2 = (rA1->Val + 2 + (Fix) 0)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA2 = llrt_cons (rA2, rNil);
        rA1 = (rA1->Val + 2 + (Fix) 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        {aRet = (rSp++)->Val; goto lRet;}
l_fchan3:
        rA2 = rNil;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA2 = llrt_cons (rA2, rNil);
        rA1 = (Ptr) 0;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLphysio_123() {     /* fchan4 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) 0xfffd);
        GIa2 = GMfchannel;
        {aRet = ((Ptr) GXerrios); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_121() {     /* fchan5 */
   {    register Ptr aRet;
        GIa3 = GInil;
        GIa4 = GImaxchan;
        {aRet = ((Ptr) GLphysio_125); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_126() {     /* fchan6 */
   {    register Ptr aRet;
        GIa1 = GIa4;
        (--GIsp)->Val = ((Ptr) GLphysio_127);
        {aRet = ((Ptr) GLphysio_124); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_127() {     /* ret_call_fchan21_74 */
   {    register Ptr aRet;
         GIa3 = llrt_cons (GIa1, GIa3);
        {aRet = ((Ptr) GLphysio_125); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_125() {     /* fchan7 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLphysio_126); goto lRet;}}
        rA4 = GImaxchan;
        GIa1 = GIa3;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLphysio_122() {     /* fchan8 */
   {    register Ptr aRet;
        GIa1 = GItabchan;
        {aRet = ((Ptr) GXcopy); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXlclose() { /* close */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 1)     goto l_lclose8;
        if (rA4 != (Ptr) 0)     goto l_closer1;
        rA4 = rNil;
        rA1 = GImaxchan;
        rA2 = GItabchan;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (1)));
l_lclose1:
        rA3 = (rA2->Val + 2 + (Fix) (rA1))->Val;
        if (rA3 == rNil)        goto l_lclose2;
        (rA2->Val + 2 + (Fix) (rA1))->Val = rA4;
        rA3 = (Ptr) llrt_fclos(rA1);
        if (rA3 != (Ptr) 0)     goto l_closer0;
l_lclose2:
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_lclose1;}
        rA1 = GImaxchan;
        (--rSp)->Val = ((Ptr) GXphytrue);
        {aRet = ((Ptr) GLphysio_13); goto lRet;}
l_lclose8:
        rA1 = (rSp++)->Val;
        if (rA1 >= GIbfloat)    goto l_closer4;
        if ((Fix) (rA1) < (Fix) 0)      goto l_closer2;
        if ((Fix) (rA1) >= (Fix) (GImaxchan))   goto l_closer2;
        rA2 = (GItabchan->Val + 2 + (Fix) (rA1))->Val;
        if (rA2 != rNil)        {aRet = ((Ptr) GLphysio_109); goto lRet;}
l_closer0:
        rA1 = (Ptr) ((UFix) 0xfffc);
        goto l_closer3;
l_closer1:
        rA2 = GMlclose;
        rA1 = (Ptr) 1;
        {aRet = ((Ptr) GXerrwna); goto lRet;}
l_closer2:
        rA1 = (Ptr) ((UFix) 0xfffd);
l_closer3:
        rA2 = GMlclose;
        {aRet = ((Ptr) GXerrios); goto lRet;}
l_closer4:
        rA2 = GMlclose;
        {aRet = ((Ptr) GXerrnia); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLphysio_109() {     /* closeint */
   {    register Ptr aRet, rA1, rA2;
        rA1 = GIa1; rA2 = GIa2;
        rA2 = GInil;
        (GItabchan->Val + 2 + (Fix) (rA1))->Val = rA2;
        rA2 = (Ptr) llrt_fclos(rA1);
        if (rA2 == (Ptr) 0)     {aRet = ((Ptr) GXphytrue); goto lRet;}
        rA2 = GMlclose;
        {aRet = ((Ptr) GXerrios); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

extern Ptr GXdeletfi() {        /* deletefile */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_128);
        {aRet = ((Ptr) GLphysio_81); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_128() {     /* ret_call_coerci_76 */
   {    register Ptr aRet;
        GIsavea4 = GMdeletfi;
        (--GIsp)->Val = ((Ptr) GLphysio_129);
        {aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_129() {     /* ret_call_stringa1_77 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (Ptr) llrt_fdele(rA1->Val + 2);
        if (rA1 == (Ptr) 0)     {aRet = ((Ptr) GXphytrue); goto lRet;}
        GIa2 = GMdeletfi;
        {aRet = ((Ptr) GXerrios); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXrenamfi() {        /* renamefile */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLphysio_130);
        {aRet = ((Ptr) GLphysio_81); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_130() {     /* ret_call_coerci_78 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = rSp->Val;
                rSp->Val = GIa1;
                GIa1 = aux;}
        (--rSp)->Val = ((Ptr) GLphysio_131);
        {aRet = ((Ptr) GLphysio_81); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_131() {     /* ret_call_coerci_79 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        GIsavea4 = GMrenamfi;
        (--rSp)->Val = ((Ptr) GLphysio_132);
        {aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_132() {     /* ret_call_stringa1_80 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_133);
        {aRet = ((Ptr) GXstringa2); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_133() {     /* ret_call_stringa2_81 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (Ptr) llrt_frena(rA1->Val + 2, GIa2->Val + 2);
        if (rA1 == (Ptr) 0)     {aRet = ((Ptr) GXphytrue); goto lRet;}
        GIa2 = GMrenamfi;
        {aRet = ((Ptr) GXerrios); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcopyfi() { /* copyfile */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLphysio_134);
        {aRet = ((Ptr) GLphysio_81); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_134() {     /* ret_call_coerci_82 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = rSp->Val;
                rSp->Val = GIa1;
                GIa1 = aux;}
        (--rSp)->Val = ((Ptr) GLphysio_135);
        {aRet = ((Ptr) GLphysio_81); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_135() {     /* ret_call_coerci_83 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        GIsavea4 = GMcopyfi;
        (--rSp)->Val = ((Ptr) GLphysio_136);
        {aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLphysio_136() {     /* ret_call_stringa1_84 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_137);
        {aRet = ((Ptr) GXstringa2); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_137() {     /* ret_call_stringa2_85 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (Ptr) llrt_fcopy(rA1->Val + 2, GIa2->Val + 2);
        if (rA1 == (Ptr) 0)     {aRet = ((Ptr) GXphytrue); goto lRet;}
        GIa2 = GMcopyfi;
        {aRet = ((Ptr) GXerrios); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXmakdir() { /* create-directory */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_138);
        {aRet = ((Ptr) GLphysio_81); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_138() {     /* ret_call_coerci_86 */
   {    register Ptr aRet;
        GIsavea4 = GMmakdir;
        (--GIsp)->Val = ((Ptr) GLphysio_139);
        {aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_139() {     /* ret_call_stringa1_87 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (Ptr) llrt_mkdir(rA1->Val + 2);
        if (rA1 == (Ptr) 0)     {aRet = ((Ptr) GXphytrue); goto lRet;}
        GIa2 = GMmakdir;
        {aRet = ((Ptr) GXerrios); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXremdir() { /* delete-directory */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_140);
        {aRet = ((Ptr) GLphysio_81); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_140() {     /* ret_call_coerci_88 */
   {    register Ptr aRet;
        GIsavea4 = GMremdir;
        (--GIsp)->Val = ((Ptr) GLphysio_141);
        {aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_141() {     /* ret_call_stringa1_89 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (Ptr) llrt_rmdir(rA1->Val + 2);
        if (rA1 == (Ptr) 0)     {aRet = ((Ptr) GXphytrue); goto lRet;}
        GIa2 = GMremdir;
        {aRet = ((Ptr) GXerrios); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXprobefi() {        /* probefile */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_142);
        {aRet = ((Ptr) GLphysio_81); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_142() {     /* ret_call_coerci_90 */
   {    register Ptr aRet;
        GIsavea4 = GMprobefi;
        (--GIsp)->Val = ((Ptr) GLphysio_143);
        {aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_143() {     /* ret_call_stringa1_91 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (Ptr) llrt_fprobe(rA1->Val + 2);
        if (rA1 == (Ptr) 0)     {aRet = ((Ptr) GXphytrue); goto lRet;}
        rA1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXsavecor() {        /* save-core */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_144);
        {aRet = ((Ptr) GLphysio_81); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_144() {     /* ret_call_coerci_92 */
   {    register Ptr aRet;
        GIsavea4 = GMsavecor;
        (--GIsp)->Val = ((Ptr) GLphysio_145);
        {aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_145() {     /* ret_call_stringa1_93 */
   {    register Ptr aRet;
        (--GIsp)->Val = GMt;
        GIa1 = (Ptr) llrt_corsav(GIa1->Val + 2);
        if (GIa1 == (Ptr) 0)    goto l_corres;
        GIa2 = GMsavecor;
        {aRet = ((Ptr) GXerrios); goto lRet;}
l_corres:
        GIa1 = (GIsp++)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXrestcor() {        /* restore-core */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLphysio_146);
        {aRet = ((Ptr) GLphysio_81); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLphysio_146() {     /* ret_call_coerci_94 */
   {    register Ptr aRet;
        GIsavea4 = GMrestcor;
        (--GIsp)->Val = ((Ptr) GXrestcori);
        {aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXrestcori() {       /* restcori */
   {    register Ptr aRet;
        GIa1 = (Ptr) llrt_corest(GIa1->Val + 2);
        if (GIa1 == (Ptr) 0)    goto l_restres;
        GIa2 = GMrestcor;
        {aRet = ((Ptr) GXerrios); goto lRet;}
l_restres:
        GIa1 = (GIsp++)->Val;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDphysio_147() {     /* trace tyi */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,0,1,2);
  lRet:  return (aRet);}}

static Ptr GDphysio_148() {     /* trace tys */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,3,1,2);
  lRet:  return (aRet);}}

static Ptr GDphysio_149() {     /* trace tyinstring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,4,1,5);
  lRet:  return (aRet);}}

static Ptr GDphysio_150() {     /* trace tyflush */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,6,1,2);
  lRet:  return (aRet);}}

static Ptr GDphysio_151() {     /* trace tyo */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,7,1,8);
  lRet:  return (aRet);}}

static Ptr GDphysio_152() {     /* trace tyback */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,9,1,5);
  lRet:  return (aRet);}}

static Ptr GDphysio_153() {     /* trace tynewline */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,10,1,2);
  lRet:  return (aRet);}}

static Ptr GDphysio_154() {     /* trace tycn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,11,1,5);
  lRet:  return (aRet);}}

static Ptr GDphysio_155() {     /* trace tystring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,12,1,13);
  lRet:  return (aRet);}}

static Ptr GDphysio_156() {     /* trace tycursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,14,1,13);
  lRet:  return (aRet);}}

static Ptr GDphysio_157() {     /* trace tycls */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,15,1,2);
  lRet:  return (aRet);}}

static Ptr GDphysio_158() {     /* trace redisplayscreen */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,16,1,8);
  lRet:  return (aRet);}}

static Ptr GDphysio_159() {     /* trace #:gell:tyi */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,17,1,2);
  lRet:  return (aRet);}}

static Ptr GDphysio_160() {     /* trace #:gell:tys */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,18,1,2);
  lRet:  return (aRet);}}

static Ptr GDphysio_161() {     /* trace #:gell:tyinstring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,19,1,5);
  lRet:  return (aRet);}}

static Ptr GDphysio_162() {     /* trace #:gell:tyo */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,20,1,8);
  lRet:  return (aRet);}}

static Ptr GDphysio_163() {     /* trace #:gell:tyflush */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,21,1,2);
  lRet:  return (aRet);}}

static Ptr GDphysio_164() {     /* trace #:gell:tyback */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,22,1,5);
  lRet:  return (aRet);}}

static Ptr GDphysio_165() {     /* trace #:gell:tynewline */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,23,1,2);
  lRet:  return (aRet);}}

static Ptr GDphysio_166() {     /* trace #:gell:tycn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,24,1,5);
  lRet:  return (aRet);}}

static Ptr GDphysio_167() {     /* trace #:gell:tystring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,25,1,13);
  lRet:  return (aRet);}}

static Ptr GDphysio_168() {     /* trace #:gell:tycursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,26,1,13);
  lRet:  return (aRet);}}

static Ptr GDphysio_169() {     /* trace #:gell:tycls */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,27,1,2);
  lRet:  return (aRet);}}

static Ptr GDphysio_170() {     /* trace #:gell:redisplayscreen */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,28,1,8);
  lRet:  return (aRet);}}

static Ptr GDphysio_171() {     /* trace bol */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,29,1,2);
  lRet:  return (aRet);}}

static Ptr GDphysio_172() {     /* trace inmax */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,30,1,8);
  lRet:  return (aRet);}}

static Ptr GDphysio_173() {     /* trace inpos */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,31,1,8);
  lRet:  return (aRet);}}

static Ptr GDphysio_174() {     /* trace inbuf */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,32,1,8);
  lRet:  return (aRet);}}

static Ptr GDphysio_175() {     /* trace eof */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,33,1,5);
  lRet:  return (aRet);}}

static Ptr GDphysio_176() {     /* trace prompt */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,34,1,8);
  lRet:  return (aRet);}}

static Ptr GDphysio_177() {     /* trace coerce-namestring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,35,1,5);
  lRet:  return (aRet);}}

static Ptr GDphysio_178() {     /* trace openi */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,36,1,5);
  lRet:  return (aRet);}}

static Ptr GDphysio_179() {     /* trace openo */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,37,1,5);
  lRet:  return (aRet);}}

static Ptr GDphysio_180() {     /* trace opena */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,38,1,5);
  lRet:  return (aRet);}}

static Ptr GDphysio_181() {     /* trace openib */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,39,1,5);
  lRet:  return (aRet);}}

static Ptr GDphysio_182() {     /* trace openob */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,40,1,5);
  lRet:  return (aRet);}}

static Ptr GDphysio_183() {     /* trace openab */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,41,1,5);
  lRet:  return (aRet);}}

static Ptr GDphysio_184() {     /* trace input */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,42,1,5);
  lRet:  return (aRet);}}

static Ptr GDphysio_185() {     /* trace output */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,43,1,5);
  lRet:  return (aRet);}}

static Ptr GDphysio_186() {     /* trace inchan */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,44,1,8);
  lRet:  return (aRet);}}

static Ptr GDphysio_187() {     /* trace outchan */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,45,1,8);
  lRet:  return (aRet);}}

static Ptr GDphysio_188() {     /* trace channel */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,46,1,8);
  lRet:  return (aRet);}}

static Ptr GDphysio_189() {     /* trace close */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,47,1,8);
  lRet:  return (aRet);}}

static Ptr GDphysio_190() {     /* trace deletefile */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,48,1,5);
  lRet:  return (aRet);}}

static Ptr GDphysio_191() {     /* trace renamefile */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,49,1,13);
  lRet:  return (aRet);}}

static Ptr GDphysio_192() {     /* trace copyfile */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,50,1,13);
  lRet:  return (aRet);}}

static Ptr GDphysio_193() {     /* trace create-directory */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,51,1,5);
  lRet:  return (aRet);}}

static Ptr GDphysio_194() {     /* trace delete-directory */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,52,1,5);
  lRet:  return (aRet);}}

static Ptr GDphysio_195() {     /* trace probefile */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,53,1,5);
  lRet:  return (aRet);}}

static Ptr GDphysio_196() {     /* trace save-core */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,54,1,5);
  lRet:  return (aRet);}}

static Ptr GDphysio_197() {     /* trace restore-core */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYphysio,55,1,5);
  lRet:  return (aRet);}}

