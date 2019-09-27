#if     !defined(lint)
static  char *sccsid = "@(#)iabs.c      (c) ELIGIS, C. Jullien 2002/04/18";
#endif

/*
 *      iabs.c :        Template for a DLL called by Lisp (defextern).
 */

#define NOCOMM          /* No COMM driver routines (for Warnings) */

#include <windows.h>
#include <commdlg.h>
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

int FAR PASCAL  iabs(int i);

int FAR PASCAL
iabs(int i)
{
        if (i < 0)
                return(-i);
        else    return(i);
}
