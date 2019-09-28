#if     !defined( lint )
static  char *sccsid = "@(#)flt.c       (c) C. Jullien 1998/11/14";
#endif

/*
 *      flt.c : Generate the ASM code for CFLOAT_TO_LFLOAT and other macros.
 *      cl -c -Ox -fp:fast -arch:IA32 -Fafoo.asm foo.c
 *	gcc -m32 -masm=intel -ffast-math -mfpmath=387 -O3 -S -c foo.c
 */

#include <stdio.h>
#include <stdlib.h>

extern  double  lfloat_to_lisp( long x );

double
lfloat_to_lisp( long x )
{
        union   {
                long    l;
                float   f;
        } u;

        u.l = (x >> 1);

        return( u.f );
}

extern  double  ldouble_to_lisp( double* x );

double
ldouble_to_lisp( double* x )
{
        return( *x );
}

extern  double  *newfloat( void );

long
cfloat_to_lisp( double x )
{
        union   {
                long    l;
                float   f;
        } u;

        u.f = x;

        return( (u.l >> 1) );
}

long
cdouble_to_lisp( double x )
{
        union   {
                long    l;
                double  *d;
        } u;

        u.d = newfloat();

        *(u.d) = x;

        return( u.l );
}

double  *
newfloat()
{
        return( (double *)malloc( sizeof( double ) ) );

}

int
main( void )
{
        long    x  = 3;
        long    y  = cfloat_to_lisp( 3. );
        long    z  = cdouble_to_lisp( 4. );

        (void)printf( "%d\n", x + y + z );
        return( 0 );
}
