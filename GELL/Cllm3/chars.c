/* GELL 15.26: source file for the module: "chars" */
/*             translation done:           "Wed June 30 93 17:35:06 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "chars.h" 

static Ptr GLchars_1() {        /* startmodule */
   {    register Ptr aRet;
        {aRet = ((Ptr) GXini_chr); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXini_chr() {        /* ini_chr */
   {    register Ptr aRet;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

