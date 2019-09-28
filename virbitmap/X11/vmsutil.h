
/*
        General utilities for the C interface to Le-Lisp
                July 4 1989
                        A.E
*/

/*
        Functions :
                        init_lispcall
                        convert_cstring_to_descriptor
                        convert_lispstring_to_cstring
                
*/


#ifdef VMS

#include <descrip.h>

int  noshare (*llgetsym)();
int noshare (*llpusharg)();
int noshare (*lllispcall)();


void vms_init_lispcall (pgetsym,ppusharg,plispcall)
int *pgetsym,*ppusharg,*plispcall;
{
        llgetsym = pgetsym;
        llpusharg = ppusharg;
        lllispcall = plispcall;
}


struct dsc$descriptor_s _private_t_dsc;

struct dsc$descriptor_s * convert_cstring_to_descriptor(cstr)
char *cstr;
{
        _private_t_dsc.dsc$b_class = DSC$K_CLASS_S;
        _private_t_dsc.dsc$b_dtype = DSC$K_DTYPE_T;
        _private_t_dsc.dsc$w_length = strlen(cstr);
        _private_t_dsc.dsc$a_pointer = cstr;
        return (&_private_t_dsc);
}

#endif

