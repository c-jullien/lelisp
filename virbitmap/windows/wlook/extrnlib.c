#if     !defined(lint)
static  char *sccsid = "@(#)extrnlib.c  (c) Eligis, C. Jullien 2002/04/18";
#endif

/*
 *      extrnlib.c :    Template for a DLL called by Lisp (used by AIDA).
 */

#define _CRT_SECURE_NO_WARNINGS

#define NOCOMM          /* No COMM driver routines (for Warnings) */

#include <windows.h>
#include <commdlg.h>
#include <string.h>
#include "extrnlib.h"

#define PARENT          ((HWND)NULL) // (GetFocus())

#if     !defined(DUMMY_ARGUMENT)
#define DUMMY_ARGUMENT(x)     ((x) = (x))
#endif

static  HANDLE  hInst;

#include <winnt.h>

BOOL WINAPI DllMain(HANDLE hModule, DWORD fdwReason, LPVOID lpReserved);

BOOL WINAPI
DllMain(HANDLE hModule, DWORD fdwReason, LPVOID lpReserved)
{
        DUMMY_ARGUMENT(lpReserved);

        switch(fdwReason) {
        case DLL_PROCESS_ATTACH:
                hInst = hModule;
                break;
        case DLL_PROCESS_DETACH:
                hInst = (HANDLE)NULL;
                break;
        }

        return(1);
}

/*
 *      Wrapper to GetOpenFileName Common DLG (Windows 3.1)
 */

static  OPENFILENAME    ofn;
static  CHAR    szFilterSpec[] = "Lisp Files (*.L*)\0*.L*\0"
                                 "All Files (*.*)\0*.*\0";
static  CHAR    szFileTitle[ 256 ];

int WDGOpenFile(LPSTR szRetStrg, int nMax);

int
WDGOpenFile(LPSTR szRetStrg, int nMax) {
        (void)strcpy(szFileTitle, "");

        ofn.lStructSize         = sizeof(OPENFILENAME);
        ofn.hwndOwner           = PARENT; // GetActiveWindow();
        ofn.lpstrFilter         = (LPSTR)szFilterSpec;
        ofn.lpstrCustomFilter   = (LPSTR)NULL;
        ofn.nMaxCustFilter      = 0;
        ofn.nFilterIndex        = 1;
        ofn.lpstrFile           = szRetStrg;
        ofn.nMaxFile            = nMax;
        ofn.lpstrFileTitle      = (LPSTR)szFileTitle;
        ofn.nMaxFileTitle       = sizeof(szFileTitle);
        ofn.lpstrInitialDir     = (LPCSTR)NULL;
        ofn.lpstrTitle          = "Open a File";
        ofn.nFileOffset         = 0;
        ofn.nFileExtension      = 0;
        ofn.lpstrDefExt         = ".ll";
        ofn.lCustData           = 0;
//      ofn.lpfnHook            = (CALLBACK)0;
        ofn.Flags               = 0;

        if ((LONG)GetOpenFileName((LPOPENFILENAME)&ofn))
                return(1L);
        else    return(0L);

}

/*
 *      Wrapper to ChooseFont Common DLG (Windows 3.1)
 */

static  int     iHTab[ 20 ] = {
         5,  6,  7,  8,  9, 10, 11, 12, 13, 14,
        15, 16, 17, 18, 20, 22, 25, 30, 36, 48
};

int
WDGGetFont(char *szRetFont) {
        CHOOSEFONT      FontChunk;
        LOGFONT         lf;

        FontChunk.lpLogFont      = &lf;
        FontChunk.lStructSize    = sizeof(CHOOSEFONT);
        FontChunk.hwndOwner      = PARENT;
        FontChunk.hDC            = (HDC)NULL;   /* screen fonts */

/*      FontChunk.iPointSize     = is set on return */

        FontChunk.Flags          = CF_SCREENFONTS | CF_LIMITSIZE | CF_ANSIONLY;
        FontChunk.rgbColors      = RGB(0, 0, 0);
        FontChunk.lCustData      = 0L;
//      FontChunk.lpfnHook       = (CALLBACK)0;
        FontChunk.lpTemplateName = (LPSTR)NULL;
        FontChunk.hInstance      = (HANDLE)NULL;
        FontChunk.lpszStyle      = (LPSTR)NULL;
        FontChunk.nFontType      = SCREEN_FONTTYPE;
        FontChunk.nSizeMin       = 6;
        FontChunk.nSizeMax       = 20;

        if (ChooseFont((LPCHOOSEFONT)&FontChunk)) {
                static  char    fmt[32];

                (void)strcpy(fmt, lf.lfFaceName);
                (void)strcat(fmt, "-%d");

                if (lf.lfOutPrecision == 3)
                        (void)strcat(fmt, "-TT");

                if (lf.lfItalic != 0)
                        (void)strcat(fmt, "-Italic");

                if (lf.lfWeight >= 700)
                        (void)strcat(fmt, "-Bold");

                wsprintf(szRetFont, fmt, FontChunk.iPointSize / 10);

                return(1L);
        } else  return(0L);
}

/*
 *      Select Color with standard dialog box
 */

int
WDGGetColor(LPLONG Color) {
        static  COLORREF        CustColors[ 16 ];
        static  CHOOSECOLOR     ColorChunk;

        ColorChunk.lStructSize  = sizeof(CHOOSECOLOR);
        ColorChunk.hwndOwner    = PARENT;
        ColorChunk.hInstance    = (HANDLE)NULL;
        ColorChunk.Flags        = 0;
        ColorChunk.lpCustColors = &CustColors[ 0 ];

        if (ChooseColor(&ColorChunk)) {
                *Color++ = GetRValue(ColorChunk.rgbResult) << 7;
                *Color++ = GetGValue(ColorChunk.rgbResult) << 7;
                *Color++ = GetBValue(ColorChunk.rgbResult) << 7;
                return(1L);
        } else  return(0L);
}

/*
 *      Select text from a dialog Box
 */

int WDGGetText(LPSTR, LPSTR);
int WDGGetTextDlg(HWND, UINT, UINT, LONG);

static  LPSTR   PromptText;
static  char    lpRetText[256];

int
WDGGetText(LPSTR lpPrompt, LPSTR lpOldText) {
        LONG    RetCode;
        
        (void)strcpy(lpRetText, lpOldText);


        PromptText   = lpPrompt;
        RetCode      = DialogBox(hInst,"GetText",PARENT,(DLGPROC)WDGGetTextDlg);

        if (RetCode)
                (void)strcpy(lpOldText, lpRetText);

        return(RetCode);

}

/*
 *      Let user select a text.
 */

int
WDGGetTextDlg(HWND hDlg, UINT message, UINT wParam, LONG lParam) {
        RECT    aRec;

        DUMMY_ARGUMENT(lParam);

        switch(message) {
        case WM_COMMAND:
                switch(wParam) {
                case IDOK:
                        GetDlgItemText(hDlg, IDG_EDIT, lpRetText, 256);
                        EndDialog(hDlg, 1);
                        return(1);

                case IDCANCEL:
                        EndDialog(hDlg, (WORD)0);
                        return(0);
                }
                break;

        case WM_INITDIALOG:
                GetWindowRect(hDlg, &aRec);
                OffsetRect(&aRec, -aRec.left, -aRec.top);
                MoveWindow(
                            hDlg,
                            ((GetSystemMetrics(SM_CXSCREEN)-aRec.right)/2+4)&~7,
                            (GetSystemMetrics(SM_CYSCREEN)-aRec.bottom)/2,
                            aRec.right,
                            aRec.bottom,
                            0
                        );
                SetDlgItemText(hDlg, IDG_STATIC, PromptText);
                SetDlgItemText(hDlg, IDG_EDIT,   lpRetText);
                SendDlgItemMessage(
                        hDlg,
                        IDG_EDIT,
                        EM_SETSEL,
                        (WORD)0,
                        MAKELONG(0, 0x7fff)
                      );
                SetFocus(GetDlgItem(hDlg, IDG_EDIT));
                return(0); /* focus control */
        }

        return(0);
}

/*
 *      Wrapper to MessageBox
 */

static  int     mIcon[] = {
        MB_ICONHAND,
        MB_ICONQUESTION,
        MB_ICONEXCLAMATION,
        MB_ICONASTERISK
};

static  int     mButton[] = {
        MB_OK,
        MB_OKCANCEL,
        MB_ABORTRETRYIGNORE,
        MB_YESNOCANCEL,
        MB_YESNO,
        MB_RETRYCANCEL
};

int
WDGMessageBox(LPSTR Msg, int i, int b, int modal) {
        int     ret;

        if (i >= (sizeof(mIcon) / sizeof(mIcon[ 0 ])))
                return(-1);
        
        if (b >= (sizeof(mButton) / sizeof(mButton[ 0 ])))
                return(-1);

        if (modal)
                modal = MB_TASKMODAL;

        ret = MessageBox(
                          PARENT,
                          Msg,
                          "",
                          mIcon[i] | mButton[b] | modal
                      );

        switch(ret) {
        case IDOK       : return(0);
        case IDCANCEL   : return(1);
        case IDABORT    : return(2);
        case IDRETRY    : return(3);
        case IDIGNORE   : return(4);
        case IDYES      : return(5);
        case IDNO       : return(6);
        }

        return(-1);
}

/*
 *      Wrapper to Clipbord functions
 */

int
WDGOpenClipboard(void) {
        return((LONG)OpenClipboard((HWND)NULL));
}

int
WDGIsAvailable(LPSTR szFormat) {
        if (lstrcmpi(szFormat, (LPSTR)"TEXT") == 0)
                if (IsClipboardFormatAvailable(CF_TEXT))
                        return(GlobalSize(GetClipboardData(CF_TEXT)));

        return(0L);
}

int
WDGCloseClipboard(void) {             
        return((LONG)CloseClipboard());
}

int
WDGGetClipboard(LPSTR szClip, LPSTR szType) {
        HANDLE hClipData;
        LPSTR lpClipData;
        UINT iType;

        if (lstrcmpi(szType, (LPSTR)"TEXT") == 0)
                iType = CF_TEXT;
        else    return(0L);

        hClipData  = GetClipboardData(iType);
        lpClipData = GlobalLock(hClipData);
        (void)strcpy(szClip, lpClipData);
        GlobalUnlock(hClipData);

        return(1L);
}

int
WDGSetClipboard(LPSTR szClip, LPSTR szType) {
        HANDLE  hClipData;
        LPSTR   lpClipData;
        UINT    iType;

        if (!strlen(szClip)) {
                // clipboard size is 0...
                return(0L);
        }

        if (lstrcmpi(szType, (LPSTR)"TEXT") == 0)
                iType = CF_TEXT;
        else    return(0);    /* not in text format */

        if (OpenClipboard((HWND)NULL)) {
                // WARNING: here should appear a "switch (iType) { CF_TEXT ...}"
                EmptyClipboard();
                hClipData  = GlobalAlloc(GHND, strlen(szClip) + 1);
                // + numberOfRC);
                lpClipData = GlobalLock(hClipData);
                (void)strcpy(lpClipData, szClip);
                GlobalUnlock(hClipData);
                SetClipboardData(iType, hClipData);
                CloseClipboard();

                return(1L);
        }
        return(0L);
}

int
WDGResources(LPLONG ResType) {
        int     i;

        for (i = 0 ; i < 3 ; i++)
                *ResType++ = -1;

        *ResType  = GetFreeSpace(0) / 1024L; /* free space in Ko */

        return(0L);
}
