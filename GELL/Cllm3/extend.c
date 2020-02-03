/* GELL 15.26: source file for the module: "extend" */
/*             translation done:           "Wed June 30 93 17:35:06 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "extend.h" 

static Ptr GLextend_1() {       /* startmodule */
   {    register Ptr aRet;
        {aRet = ((Ptr) GXini_ext); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXini_ext() {        /* ini_ext */
   {    register Ptr aRet;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

