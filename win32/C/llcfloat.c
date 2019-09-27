#if     !defined(lint)
static  char *sccsid = "@(#)llcfloat.c  (c) ELIGIS 1998/05/28";
#endif

/*
 *      llcfloat.c :    
 */

#if     LL31

double
float_to_lisp(void* x)
{
        return(((unsigned long)x >> 1));
}

#else

double
double_to_lisp(double* x)
{
        return(*x);
}

#endif
