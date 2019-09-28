#if     !defined(lint)
static  char *sccsid = "@(#)testdll.c   (c) ELIGIS, C. Jullien 1997/08/28";
#endif

/*
 *      testdll.c :     Template for a DLL called by Lisp (defextern).
 */

#define NOCOMM          /* No COMM driver routines (for Warnings) */

#include <windows.h>
#include <commdlg.h>
#include <stdio.h>
#include <string.h>

#if     !defined(DUMMY_ARGUMENT)
#define DUMMY_ARGUMENT(x)     ((x) = (x))
#endif

typedef WORD (CALLBACK* FARHOOK)(HWND, UINT, WPARAM, LPARAM);

static  HANDLE  hInst;

BOOL FAR PASCAL LibMain(PVOID hModule, ULONG ulReason, PCONTEXT pctx);

BOOL FAR PASCAL
LibMain(PVOID hModule, ULONG ulReason, PCONTEXT pctx)
{
        DUMMY_ARGUMENT(ulReason);
        DUMMY_ARGUMENT(pctx);

        hInst = hModule;

        return(1);
}

LONG FAR PASCAL  dllstring(LPSTR szRetStrg, int nMax);
LONG FAR PASCAL  dllfloat(LPLONG vect, int nMax);
LONG FAR PASCAL  dllabs(LONG i);
LONG FAR PASCAL  dllminus1();

double FAR PASCAL dllsquarefloat(double f);

LONG FAR PASCAL
dllstring(LPSTR szRetStrg, int nMax)
{
        int     i;

        for (i = 0 ; i < nMax ; i++)
                if (szRetStrg[ i ] >= 'a' && szRetStrg[ i ] <= 'z')
                        szRetStrg[ i ] = szRetStrg[ i ] - ('a' - 'A');

        return(0);
}

LONG FAR PASCAL
dllfloat(LPLONG vect, int nMax)
{
        union   {
                LONG    adr;
                float   flt;
        } cvt;

        int     i;
        float   sum = (float)0.0;

        for (i = 0 ; i < nMax ; i++) {
                cvt.adr = (*vect++);
                sum += cvt.flt;
        }

        return((LONG)sum);
}

double FAR PASCAL
dllsquarefloat(double f)
{
        return(f * f);
}

LONG FAR PASCAL
dllabs(LONG i)
{
        return((i < 0) ? -i : i);
}

LONG FAR PASCAL
dllminus1()
{
        return(-1L);
}
