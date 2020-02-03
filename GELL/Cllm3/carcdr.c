/* GELL 15.26: source file for the module: "carcdr" */
/*             translation done:           "Wed June 30 93 17:34:34 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "carcdr.h" 

static Ptr GLcarcdr_1() {       /* startmodule */
   {    register Ptr aRet;
        {aRet = ((Ptr) GXini_cad); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXini_cad() {        /* ini_cad */
   {    register Ptr aRet;
        { llrt_inisymb ((Ptr) 3, (Ptr) "car", ((Ptr) GXfcar), (Ptr) &GMfcar, (Ptr) GFfcar);}
        { llrt_inisymb ((Ptr) 3, (Ptr) "cdr", ((Ptr) GXfcdr), (Ptr) &GMfcdr, (Ptr) GFfcdr);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "caar", ((Ptr) GXca2r), (Ptr) &GMca2r, (Ptr) GFca2r);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "cadr", ((Ptr) GXcadr), (Ptr) &GMcadr, (Ptr) GFcadr);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "cdar", ((Ptr) GXcdar), (Ptr) &GMcdar, (Ptr) GFcdar);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "cddr", ((Ptr) GXcddr), (Ptr) &GMcddr, (Ptr) GFcddr);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "caaar", ((Ptr) GXcaaar), (Ptr) &GMcaaar, (Ptr) GFcaaar);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "caadr", ((Ptr) GXcaadr), (Ptr) &GMcaadr, (Ptr) GFcaadr);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "cadar", ((Ptr) GXcadar), (Ptr) &GMcadar, (Ptr) GFcadar);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "caddr", ((Ptr) GXcaddr), (Ptr) &GMcaddr, (Ptr) GFcaddr);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "cdaar", ((Ptr) GXcdaar), (Ptr) &GMcdaar, (Ptr) GFcdaar);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "cdadr", ((Ptr) GXcdadr), (Ptr) &GMcdadr, (Ptr) GFcdadr);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "cddar", ((Ptr) GXcddar), (Ptr) &GMcddar, (Ptr) GFcddar);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "cdddr", ((Ptr) GXcdddr), (Ptr) &GMcdddr, (Ptr) GFcdddr);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "caaaar", ((Ptr) GXcaaaar), (Ptr) &GMcaaaar, (Ptr) GFcaaaar);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "caaadr", ((Ptr) GXcaaadr), (Ptr) &GMcaaadr, (Ptr) GFcaaadr);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "caadar", ((Ptr) GXcaadar), (Ptr) &GMcaadar, (Ptr) GFcaadar);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "caaddr", ((Ptr) GXcaaddr), (Ptr) &GMcaaddr, (Ptr) GFcaaddr);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "cadaar", ((Ptr) GXcadaar), (Ptr) &GMcadaar, (Ptr) GFcadaar);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "cadadr", ((Ptr) GXcadadr), (Ptr) &GMcadadr, (Ptr) GFcadadr);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "caddar", ((Ptr) GXcaddar), (Ptr) &GMcaddar, (Ptr) GFcaddar);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "cadddr", ((Ptr) GXcadddr), (Ptr) &GMcadddr, (Ptr) GFcadddr);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "cdaaar", ((Ptr) GXcdaaar), (Ptr) &GMcdaaar, (Ptr) GFcdaaar);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "cdaadr", ((Ptr) GXcdaadr), (Ptr) &GMcdaadr, (Ptr) GFcdaadr);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "cdadar", ((Ptr) GXcdadar), (Ptr) &GMcdadar, (Ptr) GFcdadar);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "cdaddr", ((Ptr) GXcdaddr), (Ptr) &GMcdaddr, (Ptr) GFcdaddr);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "cddaar", ((Ptr) GXcddaar), (Ptr) &GMcddaar, (Ptr) GFcddaar);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "cddadr", ((Ptr) GXcddadr), (Ptr) &GMcddadr, (Ptr) GFcddadr);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "cdddar", ((Ptr) GXcdddar), (Ptr) &GMcdddar, (Ptr) GFcdddar);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "cddddr", ((Ptr) GXcddddr), (Ptr) &GMcddddr, (Ptr) GFcddddr);}
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcarcdr_2() {       /* carerr */
   {    register Ptr aRet;
        if (GIa1 == GInil)      { aRet = (GIsp++)->Val; goto lRet;}
        GIa1 = GIa3;
        {aRet = ((Ptr) GXerrnla); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXfcar() {   /* car */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = GMfcar;
        GIa3 = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXfcdr() {   /* cdr */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = GMfcdr;
        GIa3 = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXca2r() {   /* caar */
   {    register Ptr aRet, rA1, rBcons;
        rA1 = GIa1; rBcons = GIbcons;
        GIa2 = GMca2r;
        GIa3 = rA1;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcadr() {   /* cadr */
   {    register Ptr aRet, rA1, rBcons;
        rA1 = GIa1; rBcons = GIbcons;
        GIa2 = GMcadr;
        GIa3 = rA1;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcdar() {   /* cdar */
   {    register Ptr aRet, rA1, rBcons;
        rA1 = GIa1; rBcons = GIbcons;
        GIa2 = GMcdar;
        GIa3 = rA1;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcddr() {   /* cddr */
   {    register Ptr aRet, rA1, rBcons;
        rA1 = GIa1; rBcons = GIbcons;
        GIa2 = GMcddr;
        GIa3 = rA1;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcaaar() {  /* caaar */
   {    register Ptr aRet;
        GIa2 = GMcaaar;
        GIa3 = GIa1;
        {aRet = ((Ptr) GLcarcdr_3); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcarcdr_3() {       /* caaar1 */
   {    register Ptr aRet, rA1, rBcons;
        rA1 = GIa1; rBcons = GIbcons;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcaadr() {  /* caadr */
   {    register Ptr aRet;
        GIa2 = GMcaadr;
        GIa3 = GIa1;
        {aRet = ((Ptr) GLcarcdr_4); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcarcdr_4() {       /* caadr1 */
   {    register Ptr aRet, rA1, rBcons;
        rA1 = GIa1; rBcons = GIbcons;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcadar() {  /* cadar */
   {    register Ptr aRet;
        GIa2 = GMcadar;
        GIa3 = GIa1;
        {aRet = ((Ptr) GLcarcdr_5); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcarcdr_5() {       /* cadar1 */
   {    register Ptr aRet, rA1, rBcons;
        rA1 = GIa1; rBcons = GIbcons;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcaddr() {  /* caddr */
   {    register Ptr aRet, rA1, rBcons;
        rA1 = GIa1; rBcons = GIbcons;
        GIa2 = GMcaddr;
        GIa3 = rA1;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcdaar() {  /* cdaar */
   {    register Ptr aRet;
        GIa2 = GMcdaar;
        GIa3 = GIa1;
        {aRet = ((Ptr) GLcarcdr_6); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcarcdr_6() {       /* cdaar1 */
   {    register Ptr aRet, rA1, rBcons;
        rA1 = GIa1; rBcons = GIbcons;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcdadr() {  /* cdadr */
   {    register Ptr aRet;
        GIa2 = GMcdadr;
        GIa3 = GIa1;
        {aRet = ((Ptr) GLcarcdr_7); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcarcdr_7() {       /* cdadr1 */
   {    register Ptr aRet, rA1, rBcons;
        rA1 = GIa1; rBcons = GIbcons;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcddar() {  /* cddar */
   {    register Ptr aRet;
        GIa2 = GMcddar;
        GIa3 = GIa1;
        {aRet = ((Ptr) GLcarcdr_8); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcarcdr_8() {       /* cddar1 */
   {    register Ptr aRet, rA1, rBcons;
        rA1 = GIa1; rBcons = GIbcons;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcdddr() {  /* cdddr */
   {    register Ptr aRet;
        GIa2 = GMcdddr;
        GIa3 = GIa1;
        {aRet = ((Ptr) GLcarcdr_9); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcarcdr_9() {       /* cdddr1 */
   {    register Ptr aRet, rA1, rBcons;
        rA1 = GIa1; rBcons = GIbcons;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcaaaar() { /* caaaar */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = GMcaaaar;
        GIa3 = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        {aRet = ((Ptr) GLcarcdr_3); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcaaadr() { /* caaadr */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = GMcaaadr;
        GIa3 = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        {aRet = ((Ptr) GLcarcdr_3); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcaadar() { /* caadar */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = GMcaadar;
        GIa3 = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        {aRet = ((Ptr) GLcarcdr_4); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcaaddr() { /* caaddr */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = GMcaaddr;
        GIa3 = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        {aRet = ((Ptr) GLcarcdr_4); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcadaar() { /* cadaar */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = GMcadaar;
        GIa3 = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        {aRet = ((Ptr) GLcarcdr_5); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcadadr() { /* cadadr */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = GMcadadr;
        GIa3 = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        {aRet = ((Ptr) GLcarcdr_5); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcaddar() { /* caddar */
   {    register Ptr aRet, rA1, rBcons;
        rA1 = GIa1; rBcons = GIbcons;
        GIa2 = GMcaddar;
        GIa3 = rA1;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcadddr() { /* cadddr */
   {    register Ptr aRet, rA1, rBcons;
        rA1 = GIa1; rBcons = GIbcons;
        GIa2 = GMcadddr;
        GIa3 = rA1;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcdaaar() { /* cdaaar */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = GMcdaaar;
        GIa3 = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        {aRet = ((Ptr) GLcarcdr_6); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcdaadr() { /* cdaadr */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = GMcdaadr;
        GIa3 = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        {aRet = ((Ptr) GLcarcdr_6); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcdadar() { /* cdadar */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = GMcdadar;
        GIa3 = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        {aRet = ((Ptr) GLcarcdr_7); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcdaddr() { /* cdaddr */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = GMcdaddr;
        GIa3 = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        {aRet = ((Ptr) GLcarcdr_7); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcddaar() { /* cddaar */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = GMcddaar;
        GIa3 = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        {aRet = ((Ptr) GLcarcdr_8); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcddadr() { /* cddadr */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = GMcddadr;
        GIa3 = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        {aRet = ((Ptr) GLcarcdr_8); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcdddar() { /* cdddar */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = GMcdddar;
        GIa3 = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = rA1->Val;
        {aRet = ((Ptr) GLcarcdr_9); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcddddr() { /* cddddr */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = GMcddddr;
        GIa3 = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLcarcdr_2); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        {aRet = ((Ptr) GLcarcdr_9); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GDcarcdr_10() {      /* trace car */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,0,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_11() {      /* trace cdr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,3,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_12() {      /* trace caar */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,4,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_13() {      /* trace cadr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,5,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_14() {      /* trace cdar */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,6,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_15() {      /* trace cddr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,7,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_16() {      /* trace caaar */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,8,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_17() {      /* trace caadr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,9,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_18() {      /* trace cadar */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,10,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_19() {      /* trace caddr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,11,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_20() {      /* trace cdaar */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,12,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_21() {      /* trace cdadr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,13,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_22() {      /* trace cddar */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,14,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_23() {      /* trace cdddr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,15,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_24() {      /* trace caaaar */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,16,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_25() {      /* trace caaadr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,17,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_26() {      /* trace caadar */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,18,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_27() {      /* trace caaddr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,19,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_28() {      /* trace cadaar */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,20,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_29() {      /* trace cadadr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,21,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_30() {      /* trace caddar */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,22,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_31() {      /* trace cadddr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,23,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_32() {      /* trace cdaaar */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,24,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_33() {      /* trace cdaadr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,25,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_34() {      /* trace cdadar */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,26,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_35() {      /* trace cdaddr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,27,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_36() {      /* trace cddaar */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,28,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_37() {      /* trace cddadr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,29,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_38() {      /* trace cdddar */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,30,1,2);
  lRet:  return (aRet);}}

static Ptr GDcarcdr_39() {      /* trace cddddr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcarcdr,31,1,2);
  lRet:  return (aRet);}}

