#if     !defined(lint)
static  char *sccsid = "@(#)winterm.c   (c) ELIGIS 2008/10/12";
#endif

/*
 *      winterm.c : The routines in this file provide support for WINDOWS.
 */

#define NOCOMM          /* No COMM driver routines (for Warnings) */

/*
#define STRICT          STRICT type checking for Windows & NT
*/

#if     defined(_MSC_VER) && (_MSC_VER >= 1400)
#define _CRT_SECURE_NO_DEPRECATE        1
#define _CRT_NONSTDC_NO_DEPRECATE       1
#endif

#include        <windows.h>
#include        <stdio.h>
#include        <process.h>
#include        <stdlib.h>
#include        <string.h>
#include        <stdarg.h>
#include        <time.h>
#include        <errno.h>
#include        <io.h>
#include        <fcntl.h>
#include        <winreg.h> 
#include        "lelisp.h"
#include        "winvirbi.h"
#include        "sysname.h"

extern int  winfprintf(FILE *stream, const char *format, ...);
extern int  winprintf(const char *format, ...);
extern void ll_intest(void);
extern long alarm(long sec);
extern int  ll_break(void);
extern int  ll_clock(void);
extern int  main(int argc, char *argv[]);
extern int  DOSsleep(long seconds);

/*
 *      Public variables
 */

HWND    hCurWnd;                /* Current Window               */
HWND    hMainWnd;               /* Main Window                  */
HANDLE  hInst;                  /* hInstance                    */
HICON   hIcon;                  /* hIcon                        */
HDC     hTTyDC;                 /* TTy DC                       */
DWORD   BackColor;              /* Current background color     */
DWORD   TextColor;              /* Current foreground color     */
HBRUSH  hBrush;                 /* Current brush                */
HPEN    hPen;                   /* Current pen                  */
HFONT   hFont;                  /* Current font                 */
UINT    wmRequest;              /* Request message              */
UINT    wmNotify;               /* Notify  message              */
int     nCol;                   /* Maximum column               */
int     nRow;                   /* Maximum row                  */
int     nParentWidth;           /* Current window width         */
int     nParentHeight;          /* Current window height        */
int     nCharWidth;             /* Width of a char              */
int     nCharHeight;            /* Height of a char             */
int     nNeedEvent = 0;         /* Flag if event needed         */
int     nMenuItem  = -1;        /* For create menu              */
int     nCaretVisible = TRUE;   /* Caret (aka cursor) visible   */
int     nPrevCaret = TRUE;      /* Caret (aka cursor) visible   */

int     LL_SM_CXBORDER;         /* SM_CXBORDER or SM_CXEDGE     */
int     LL_SM_CYBORDER;         /* SM_CYBORDER or SM_CYEDGE     */
int     LL_SM_CXFRAME;          /* SM_CXFRAME                   */
int     LL_SM_CYFRAME;          /* SM_CYFRAME                   */

/*
 *      Private variables :
 */

static  HANDLE  hPrev;                  /* Previous instance            */
static  HANDLE  hAccTable;              /* Accelerator table            */
static  LPSTR   EditBuffer;             /* Image of Window Display      */
static  char    szAppName[] = "Le-Lisp";/* Application Name             */
static  char    szBinPathName[256];     /* Binary PathName              */
static  int     nOpen = 0;              /* Open flag                    */
static  int     nDrawX;                 /* X cursor                     */
static  int     nDrawY;                 /* Y cursor                     */
static  int     nCmd;                   /* Command line                 */
static  int     nMaxCharX;              /* Max X                        */
static  int     nMaxCharY;              /* Max Y                        */
static  FILE    *fdBatch;               /* Batch file handle            */
static  int     fBatch = FALSE;         /* Batch file flag              */
static  char    szBatchName[256];        /* Batch file name              */
static  LPSTR   lpClipBuf = NULL;       /* Pointers to clipboard buffer */
static  LPSTR   lpClipPtr = NULL;       /* Current ClipPtr              */
static  WNDPROC lpProcTimer;            /* AlarmProc.                   */

#define LL_MAXDLL       32

static  struct {
        char    *name;
        HANDLE  hDLL;
} LoadedDLLTab[LL_MAXDLL];

extern  int             lliconic;
extern  int             llfixed;
extern  int             llconsole;
extern  char            llgeometry[];
extern  SHORT           gl_nbprologue;
extern  struct LLDISPLAY *WINdisplay;
extern  SHORT           LL_First_Event;
extern  SHORT           LL_New_Event;
extern  SHORT           LL_Char_Event;

static  int     WINquit(void);
static  void    WINexit(void);
static  void    WINterminalsize(int *posx, int *posy, int *sizex, int *sizey);
static  void    WINtychar(char aChar);
static  void    WINdragoff(void);

extern  void    WINtycursor(short nRow, short nCol);

extern  LRESULT CALLBACK AlarmProc(HWND hWnd, UINT message, UINT wParam, LONG lParam);


int     WinFlag = 1;            /* Flag for the Windows version of NT   */

#define RAWMASK ~(ENABLE_LINE_INPUT|ENABLE_ECHO_INPUT|ENABLE_PROCESSED_INPUT)

#if     !defined(_CONSOLE_BUFFER)
#define _CONSOLE_BUFFER 512
#endif

BOOL WINAPI     ConsoleEventHandler(DWORD dwCtrlType);
int             WINCreateConsole(void);

BOOL WINAPI
ConsoleEventHandler(DWORD dwCtrlType)
{
        switch (dwCtrlType) {
        case CTRL_CLOSE_EVENT:
                return(TRUE);
        default:
                return(FALSE);
        }
}

#define NTRGB(r, g, b)        ((r) | (g) | (b))

static  WORD    NTbackcolor[] = {
        NTRGB(0,              0,                0             ),
        NTRGB(0,              0,                BACKGROUND_BLUE),
        NTRGB(0,              BACKGROUND_GREEN, 0             ),
        NTRGB(0,              BACKGROUND_GREEN, BACKGROUND_BLUE),
        NTRGB(BACKGROUND_RED, 0,                0             ),
        NTRGB(BACKGROUND_RED, 0,                BACKGROUND_BLUE),
        NTRGB(BACKGROUND_RED, BACKGROUND_GREEN, 0             ),
        NTRGB(BACKGROUND_RED, BACKGROUND_GREEN, BACKGROUND_BLUE),
};

static  WORD    NTforecolor[] = {
        NTRGB(0,              0,                0             ),
        NTRGB(0,              0,                FOREGROUND_BLUE),
        NTRGB(0,              FOREGROUND_GREEN, 0             ),
        NTRGB(0,              FOREGROUND_GREEN, FOREGROUND_BLUE),
        NTRGB(FOREGROUND_RED, 0,                0             ),
        NTRGB(FOREGROUND_RED, 0,                FOREGROUND_BLUE),
        NTRGB(FOREGROUND_RED, FOREGROUND_GREEN, 0             ),
        NTRGB(FOREGROUND_RED, FOREGROUND_GREEN, FOREGROUND_BLUE),
};

#define _CONSOLE_COLOR (WORD)(NTforecolor[7] | NTbackcolor[1])

/*
 *      Create text console from a graphic application.
 */

int
WINCreateConsole(void) {
        CONSOLE_SCREEN_BUFFER_INFO csbi;
        BOOL                       res;
        int                        hCrt;
        FILE *                     hf;
        COORD                      cr;
        DWORD                      dwWritten;

        res = AllocConsole();

        /*
         * Catch the close of this console
         */

        SetConsoleCtrlHandler(ConsoleEventHandler, TRUE); 
#if     defined(_CONSOLE_TITLE)
        SetConsoleTitle(_CONSOLE_TITLE);
#else
        SetConsoleTitle(szAppName);
#endif
        /*
         * Taken form MSDN. Redirect output to this console.
         */

        hCrt = _open_osfhandle((LONG_PTR)GetStdHandle(STD_OUTPUT_HANDLE),_O_TEXT);
        hf   = _fdopen(hCrt, "w");
        *stdout = *hf;
        (void)setvbuf(stdout, NULL, _IONBF, 0);

        hCrt = _open_osfhandle((LONG_PTR)GetStdHandle(STD_ERROR_HANDLE),_O_TEXT);
        hf   = _fdopen(hCrt, "w");
        *stderr = *hf;
        (void)setvbuf(stderr, NULL, _IONBF, 0);

        hCrt = _open_osfhandle((LONG_PTR)GetStdHandle(STD_INPUT_HANDLE),_O_TEXT);
        hf   = _fdopen(hCrt, "r");
        *stdin = *hf;

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
                                _CONSOLE_COLOR);

        GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
        csbi.dwSize.Y  = _CONSOLE_BUFFER;
        SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE),csbi.dwSize);

        cr.X = (SHORT)0;
        cr.Y = (SHORT)0;

        /*
         *      this  clears  the  characters first,  and then clears
         *      the attribute.
         */

        FillConsoleOutputCharacter(GetStdHandle(STD_OUTPUT_HANDLE),
                                   ' ', 
                                   csbi.dwSize.Y * csbi.dwSize.X,
                                   cr, 
                                   &dwWritten);

        FillConsoleOutputAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
                                   csbi.wAttributes,
                                   csbi.dwSize.Y * csbi.dwSize.X,
                                   cr,
                                   &dwWritten);

        return(res);
}

int
system(const char *s) {
        char            cmd[256];
        char            *slwr;
        int             internal;
        int             i;
        static  char    *szDosCmd[] = {
                "cd",     "cls",    "copy",   "date",
                "del",    "erase",  "dir",    "echo",
                "for",    "if",     "md",     "mkdir",
                "pause",  "ren",    "rename", "rd",
                "rmdir",  "set",    "time",   "type",
                "ver",    "vol",    NULL
        };

        internal = FALSE;

        if (s == NULL) {
                return(1);
        }

        slwr = strlwr((char *)s);
        for (i = 0 ; szDosCmd[i] ; i++)
                if (strncmp(s, szDosCmd[i], strlen(szDosCmd[i])) == 0) {
                        internal = TRUE;
                        break;
                }

        if (internal) {
                strcpy(cmd, getenv("COMSPEC"));
                strcat(cmd, " /c ");
                strcat(cmd, slwr);
        } else  strcpy(cmd, slwr);

        return(WinExec((char *)cmd, SW_SHOWNORMAL));

}

static  void
WINterminalsize(int *posx, int *posy, int *sizex, int *sizey) {
        TEXTMETRIC      metric;
        HDC             hdc;
        HWND            hwnd;
        HFONT           hOldFont;
        int             nTermX  = 80;
        int             nTermY  = 25;

        *posx  = CW_USEDEFAULT; /* don't care   */
        *posy  = CW_USEDEFAULT; /* don't care   */

        /*
         *      Compute the terminal size for a 80x25 characters text window.
         */

        if (llgeometry[0] != 0) {
                int     res;

                res = sscanf(llgeometry,
                             "%dx%d%d%d",
                             &nTermX,
                             &nTermY,
                             posx,
                             posy);

                if (res == 2) {
                        /* only terminal dimensions was given */
                        *posx   = CW_USEDEFAULT;
                        *posy   = CW_USEDEFAULT;
                        res     = 4;
                }

                if (res != 4) {
                        /* error on dimensions, set to default */
                        nTermX  = 80;
                        nTermY  = 25;
                        *posx   = CW_USEDEFAULT;
                        *posy   = CW_USEDEFAULT;
                }
        }

        hdc      = GetDC(hwnd = GetDesktopWindow());
        hOldFont = SelectObject(hdc, GetStockObject(SYSTEM_FIXED_FONT));
        GetTextMetrics(hdc, (LPTEXTMETRIC)&metric);
        SelectObject(hdc, hOldFont);
        ReleaseDC(hwnd, hdc);

        *sizex =   nTermX * (metric.tmMaxCharWidth)
                 + ((llfixed == 0) ? (2 * GetSystemMetrics(LL_SM_CXFRAME)) : 0)
                 + 2 * GetSystemMetrics(LL_SM_CXBORDER);

        *sizey =   nTermY * (metric.tmHeight + metric.tmExternalLeading)
                 + GetSystemMetrics(SM_CYCAPTION)
                 + GetSystemMetrics(SM_CYMENU)
                 + ((llfixed == 0) ? (2 * GetSystemMetrics(LL_SM_CYFRAME)) : 0)
                 + 2 * GetSystemMetrics(LL_SM_CYFRAME)
                 + 2 * GetSystemMetrics(LL_SM_CYBORDER);
}

#define WS_LELISP_DEFAULT  WS_OVERLAPPEDWINDOW
#define WS_LELISP_FIXED    (WS_OVERLAPPED|WS_CAPTION|WS_SYSMENU|WS_MINIMIZEBOX)

void
WINopen(void) {
        TEXTMETRIC      txMetric;
        RECT            rcClient;
        int             nPos;
        int             i;
        int             posx;
        int             posy;
        int             sizex;
        int             sizey;

#if     defined(_LISP_CONSOLE)
        llconsole = 1;  /* force always a console */
#endif

        if (llconsole)
                (void)WINCreateConsole();

        {
                CONSOLE_SCREEN_BUFFER_INFO csbi;
                HANDLE hStdOutput;

                AttachConsole((DWORD)-1); /* since Windows XP. */
                hStdOutput = GetStdHandle(STD_OUTPUT_HANDLE);
                if (GetConsoleScreenBufferInfo(hStdOutput, &csbi)) {
                        int c = fgetc(stdin);
                        if (c >= 0) {
                                ungetc(c, stdin);
                                fBatch = TRUE;
                                fdBatch = stdin;
#if 0
                                (void)MessageBox((HWND)NULL,
                                                 "With console redirection\n",
                                                 "Le-Lisp",
                                                 MB_OK);
#endif
                        }
                }
        }

        if (hPrev == NULL) {
                WNDCLASS wc;

                wc.style         = CS_CLASSDC;
                wc.lpfnWndProc   = (WNDPROC)MainWndProc;
                wc.cbClsExtra    = 0;
                wc.cbWndExtra    = 0;
                wc.hInstance     = hInst;
                wc.hIcon         = LoadIcon((HANDLE)0, IDI_APPLICATION);
                wc.hCursor       = LoadCursor((HANDLE)0, IDC_ARROW);
                wc.hbrBackground = CreateSolidBrush(GetSysColor(COLOR_WINDOW));
                wc.lpszMenuName  = "LeLispMenu";
                wc.lpszClassName = "LeLispWClass";

                if (!RegisterClass(&wc))
                        return;

                wc.style         = CS_CLASSDC;
                wc.lpszMenuName  = NULL;
                wc.lpszClassName = "StdWClass";

                if (!RegisterClass(&wc))
                        return;

        }

#if     defined(_COMPUTE_WITH_EDGE)
        {
                DWORD   dwVersion     = GetVersion();
                DWORD   dwWinMajorVer = (DWORD)(LOBYTE(LOWORD(dwVersion)));
                DWORD   dwWinMinorVer = (DWORD)(HIBYTE(LOWORD(dwVersion)));

                if (dwWinMajorVer >= 4) {
                        LL_SM_CXBORDER = SM_CXEDGE;
                        LL_SM_CYBORDER = SM_CYEDGE;
                        LL_SM_CXFRAME  = SM_CXSIZEFRAME;
                        LL_SM_CYFRAME  = SM_CYSIZEFRAME;
                } else {
                        LL_SM_CXBORDER = SM_CXBORDER;
                        LL_SM_CYBORDER = SM_CYBORDER;
                        LL_SM_CXFRAME  = SM_CXFRAME;
                        LL_SM_CYFRAME  = SM_CYFRAME;
                }
        }
#else
        LL_SM_CXBORDER = SM_CXBORDER;
        LL_SM_CYBORDER = SM_CYBORDER;
        LL_SM_CXFRAME  = SM_CXFRAME;
        LL_SM_CYFRAME  = SM_CYFRAME;
#endif

        WINterminalsize(&posx, &posy, &sizex, &sizey);

        /*
         * Style could be :
         *
         *      (WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX)
         */

        hMainWnd = CreateWindow("LeLispWClass",
                                szAppName,
                                (llfixed ? WS_LELISP_FIXED : WS_LELISP_DEFAULT),
                                posx,   // CW_USEDEFAULT
                                posy,   // CW_USEDEFAULT
                                sizex,  // CW_USEDEFAULT
                                sizey,  // CW_USEDEFAULT
                                (HWND)0,
                                (HMENU)0,
                                hInst,
                                NULL);

        if ((hCurWnd = hMainWnd) == NULL)
                return;

        hTTyDC = GetDC(hCurWnd);

        hIcon         = LoadIcon(hInst, MAKEINTRESOURCE(LELISPICON));
        BackColor     = GetSysColor(COLOR_WINDOW);
        TextColor     = GetSysColor(COLOR_WINDOWTEXT);
        hBrush        = CreateSolidBrush(BackColor);
        hPen          = CreatePen(PS_SOLID, 1, TextColor);
        hFont         = GetStockObject(SYSTEM_FIXED_FONT);

        (void)SelectObject(hTTyDC, hPen);
        (void)SelectObject(hTTyDC, hBrush);
        (void)SelectObject(hTTyDC, hFont);

        SetClassLong(hCurWnd, GCL_HICON, (LONG)(LONG_PTR)hIcon);
        GetClientRect(hCurWnd, (LPRECT)&rcClient);
        GetTextMetrics(hTTyDC, &txMetric);

        nParentWidth  = rcClient.right  - rcClient.left;
        nParentHeight = rcClient.bottom - rcClient.top;
        nDrawX        = 0;
        nDrawY        = 0;
        nCharWidth    = txMetric.tmMaxCharWidth;
        nCharHeight   = txMetric.tmHeight + txMetric.tmExternalLeading;
        nMaxCharX     = GetSystemMetrics(SM_CXSCREEN) / nCharWidth;
        nMaxCharY     = GetSystemMetrics(SM_CYSCREEN) / nCharHeight;
        nCol          = (short)(nParentWidth  / nCharWidth);
        nRow          = (short)(nParentHeight / nCharHeight);
        EditBuffer    = (LPSTR)malloc((unsigned int)(nMaxCharX * nMaxCharY));

        if (EditBuffer == NULL) {
                (void)MessageBox((HWND)NULL,
                                  "Can't allocate Edit buffer\n",
                                  "Le-Lisp",
                                  MB_OK);
                exit(1);
        }

        SetBkColor(hTTyDC, BackColor);
        SetTextColor(hTTyDC, TextColor);

        for (nPos = 0 ; nPos < (nMaxCharX * nMaxCharY) ; nPos++)
                *(EditBuffer + nPos) = ' ';

        /*
         *      Register client / server Messages
         */

        wmRequest = RegisterWindowMessage("wmRequest");
        wmNotify  = RegisterWindowMessage("wmNotify");

        if (lliconic && (fBatch == FALSE)) {
                ShowWindow(hMainWnd, SW_SHOWMINIMIZED);
        } else  {
                ShowWindow(hCurWnd, nCmd);
                SetFocus(hCurWnd);
        }

        WINdragoff();

        UpdateWindow(hCurWnd);

        lpProcTimer = AlarmProc;

        for (i = 0 ; i < LL_MAXDLL ; i++) {
                LoadedDLLTab[i].name = NULL;
                LoadedDLLTab[i].hDLL = (HANDLE)0;
        }

        nOpen = 1;
}

void
WINclose(void) {
        static volatile int i;                  /* volatile because of C bug */
        static          int closedp = FALSE;    /* must be done only once    */

/*
        MessageBox(NULL, "closing", "closing", MB_OK);
*/

        if (closedp == TRUE)
                /* already called, nothing to do */
                return;
        else    closedp = TRUE;

        for (i = 0 ; i < LL_MAXDLL ; i++)
                if (LoadedDLLTab[i].hDLL != (HANDLE)0)
                        FreeLibrary(LoadedDLLTab[i].hDLL);

        (void)SelectObject(hTTyDC, GetStockObject(WHITE_BRUSH));
        (void)SelectObject(hTTyDC, GetStockObject(WHITE_PEN ));
        (void)SelectObject(hTTyDC, GetStockObject(SYSTEM_FONT));

        DeleteObject(hBrush);
        DeleteObject(hFont);
        DeleteObject(hPen);

        if (gl_nbprologue >= 1) {
                windows_liberedisplay(WINdisplay);
                gl_nbprologue = 0;
        }

        ReleaseDC(hCurWnd, hTTyDC);
        DestroyWindow(hCurWnd);

        if (fBatch == TRUE) {
                (void)fclose(fdBatch);
                remove(szBatchName);
        }

        PostQuitMessage(0);
}

/*
 Remove the draw contents while moving windows. A .reg may looks like:

 REGEDIT4

 [HKEY_CURRENT_USER\Control Panel\Desktop]
 "DragFullWindows"="0"
*/

#define DRAG_REGISTRY_PATH      "Control Panel\\Desktop"
#define DRAG_REGISTRY_KEY       "DragFullWindows"
#define ERROR_OPEN              "Can't open registry"
#define ERROR_NODRAG            "Can't open drag parameter"
#define TITLE                   "Le-Lisp"

static  void
WINdragoff(void) {
        HKEY    hDragKey;
        LONG    res;
        DWORD   dwLength = MAX_PATH;
        DWORD   dwType;
        char    strDragPath[MAX_PATH];

        /*
         * Read Microsoft Drag registry key
         */

        res = RegOpenKeyEx(HKEY_CURRENT_USER,
                           DRAG_REGISTRY_PATH,
                           0,
                           KEY_READ | KEY_SET_VALUE,
                           &hDragKey);

        if (res != ERROR_SUCCESS) {
                MessageBox(NULL, ERROR_OPEN, TITLE, MB_OK | MB_ICONERROR);
                return;
        }

        /*
         * Read Microsoft Drag path
         */

        res = RegQueryValueEx(hDragKey,
                              DRAG_REGISTRY_KEY,
                              NULL,
                              &dwType,
                              (unsigned char *)strDragPath,
                              &dwLength);

        res = RegSetValueEx(hDragKey,
                            DRAG_REGISTRY_KEY,
                            0,
                            REG_SZ,
                            (unsigned char *)"0",
                            2);

        if (res == ERROR_SUCCESS && (strDragPath[0] == '1')) {
                MessageBox(NULL,
                           "DragFullWindows flag removed,\n"
                           "for better performances, please logoff and retry",
                           TITLE,
                           MB_OK);
        }

        RegCloseKey(hDragKey);
}

static  void
WINtychar(char aChar) {
        switch (aChar) {
        case '\r':
                nDrawX = 0;
                break;
        case '\n':
                if (++nDrawY >= nRow) {
#if     defined(SCROLL)
                        int     nPos;
                        int     nPosMax = nMaxCharX * (nMaxCharY - 1);

                        ll_intest();

                        for (nPos = 0 ; nPos < nPosMax ; nPos++)
                                *(EditBuffer+nPos)=*(EditBuffer+nPos+nMaxCharX);

                        ScrollWindow(hCurWnd, 0, -nCharHeight, NULL, NULL);
                        nDrawY--;
#else
                        ll_intest();

                        WINtycursor(0, 0);
                        WINtycls();
#endif
                }
                break;
        case '\t' :
                do
                        WINtychar(' ');
                while (nDrawX & 0x07);
                break;
        case '\b' :
                if (nDrawX > 0 && nDrawX < nCol) {
                        nDrawX--;
                }
                break;
        default   :
                if (nDrawX >= nCol) {
                        WINtychar('\r');
                        WINtychar('\n');
                }

                if (nDrawY < nRow) {
                        *(EditBuffer + nDrawY * nMaxCharX + nDrawX) = aChar;
                        TextOut(hTTyDC,
                                nDrawX * nCharWidth,
                                nDrawY * nCharHeight,
                                &aChar,
                                1);
                        nDrawX++;
                }
                break;
        }

}

int
WINtystring(char *szText, int nSize) {
        int     nOldVisible = nCaretVisible;
        int     i;

        if (nOldVisible == TRUE)
                WINtyshowcursor(FALSE);

        for (i = 0 ; i < nSize ; i++)
                WINtychar(szText[i]);

        if (nOldVisible == TRUE)
                WINtyshowcursor(TRUE);

        return(nSize);
}

void
WINtyo(char aChar) {
        int     nOldVisible = nCaretVisible;

        if (nOldVisible == TRUE)
                WINtyshowcursor(FALSE);

        WINtychar(aChar);

        if (nOldVisible == TRUE)
                WINtyshowcursor(TRUE);

}

void
WINtycursor(short row, short col) {
        int     nOldVisible = nCaretVisible;

        if (nOldVisible == TRUE)
                WINtyshowcursor(FALSE);

        nDrawX = (int)col;
        nDrawY = (int)row;

        if (nOldVisible == TRUE)
                WINtyshowcursor(TRUE);

}

#define CTRLCHAR(x)   ((unsigned short)((x) & 0x1F))
#define META            0x1B

int
WINtys(void) {
        return((LL_Char_Event == 0) ? -1 : WINtyi());
}

int
WINtyi(void) {
        MSG     msg;
        int     aChar = 0;

        if (fBatch == TRUE) {
                aChar = fgetc(fdBatch);
                if (aChar == EOF) {
                        (void)MessageBox((HWND)NULL,
                                         "EOF while reading form file.\n",
                                         "Le-Lisp",
                                         MB_OK);
                        WINexit();
                }
                return (aChar);
        }

        if (lpClipPtr) {
                aChar = (int)*lpClipPtr++;

                if (*lpClipPtr == '\000') {
                        free(lpClipBuf);
                        lpClipBuf = NULL;
                        lpClipPtr = NULL;
                }

                return(aChar);
        }

        while (!aChar) {
                while (LL_First_Event < 0) {

                        GetMessage(&msg, (HWND)0, 0, 0);

                        if (TranslateAccelerator(msg.hwnd, hAccTable, &msg))
                                continue;

                        TranslateMessage(&msg);

                        switch (msg.message) {
                        case WM_CHAR:
                                LL_wm_char(msg.hwnd, msg.message, msg.wParam);
                                break;
                        case WM_KEYDOWN:
                                LL_wm_key(msg.hwnd, msg.message, msg.wParam);
                                break;
                        case WM_NCMOUSEMOVE :
                        case WM_KEYUP :
                                break;
                        default :
                                DispatchMessage(&msg);
                                if (lpClipPtr)
                                        return(WINtyi()); /* data in clpbrd */

                        }
                }
                aChar = windows_event_tyi();
        }
        return(aChar);
}

void
WINtycls(void) {
        RECT    rcClear;
        int     nPos;
        int     nOldVisible = nCaretVisible;

        if (nOldVisible == TRUE)
                WINtyshowcursor(FALSE);

        GetClientRect(hCurWnd, (LPRECT)&rcClear);
        FillRect(hTTyDC, (LPRECT)&rcClear, hBrush);

        for (nPos = 0 ; nPos < (nMaxCharX * nMaxCharY) ; nPos++)
                *(EditBuffer + nPos) = ' ';

        if (nOldVisible == TRUE)
                WINtyshowcursor(TRUE);
}

void
WINtycleol(void) {
        RECT    rcClear;
        int     nPos;
        int     nOldVisible = nCaretVisible;

        if (nOldVisible == TRUE)
                WINtyshowcursor(FALSE);

        rcClear.top    = nDrawY * nCharHeight;
        rcClear.bottom = (nDrawY + 1) * nCharHeight;
        rcClear.left   = nDrawX * nCharWidth;
        rcClear.right  = nParentWidth;

        FillRect(hTTyDC, (LPRECT)&rcClear, hBrush);

        for (nPos = nDrawX ; nPos < nCol ; nPos++)
                *(EditBuffer + nDrawY * nMaxCharX + nPos) = ' ';

        if (nOldVisible == TRUE)
                WINtyshowcursor(TRUE);

}

void
WINtyattrib(int nFlag) {
        if (nFlag) {
                SetBkColor(hTTyDC, TextColor);
                SetTextColor(hTTyDC, BackColor);
        } else  {
                SetBkColor(hTTyDC, BackColor);
                SetTextColor(hTTyDC, TextColor);
        }
}

void
WINtyflush(void) {
}

void
WINtybeep(void) {
        MessageBeep((UINT)-1);
}

void
WINtyshowcursor(int nFlag) {
        if (nCaretVisible == nFlag)
                return;
        else    nCaretVisible = nFlag;

        if (nCaretVisible == TRUE) {
                CreateCaret(hCurWnd, (HBITMAP)NULL, nCharWidth, nCharHeight);
                (void)SetCaretPos(nDrawX * nCharWidth, nDrawY * nCharHeight);
                ShowCaret(hCurWnd);
        } else  {
                DestroyCaret();
                HideCaret(hCurWnd);
        }

}

int
WINtyxmax(void) {
        return(nCol - 1);
}

int
WINtyymax(void) {
        return(nRow - 1);
}

void
WINshow(int flag) {
        if (flag)
                ShowWindow(hMainWnd, SW_SHOWNORMAL);
        else    ShowWindow(hMainWnd, SW_SHOWMINNOACTIVE);
}

static  void
llexit(void) {
        WINclose();
}

void
WINpaste(HWND hWnd) {
        int     type;                   /* Data type                    */
        HANDLE  hClipData;              /* handles to clip data         */
        LPSTR   lpClipData;             /* Clip Data (adress 16:16)     */

        if (OpenClipboard(hWnd)) {

                /*
                 *      get text from the clipboard
                 */

                hClipData = GetClipboardData(CF_OEMTEXT);
                if (!hClipData) {
                        hClipData = GetClipboardData(CF_TEXT);
                        if (!hClipData) {
                                CloseClipboard();
                                return;
                        } else  type = CF_TEXT;
                } else  type = CF_OEMTEXT;

                if (lpClipBuf != NULL)
                        free(lpClipBuf);

                if ((lpClipBuf = malloc(GlobalSize(hClipData))) == NULL) {
                        CloseClipboard();
                        return;
                }

                if ((lpClipData = GlobalLock(hClipData)) == NULL) {
                        CloseClipboard();
                        return;
                }

                (void)strcpy(lpClipBuf, lpClipData);
                lpClipPtr = lpClipBuf;
                GlobalUnlock(hClipData);
                CloseClipboard();

                if (type == CF_OEMTEXT)
                        OemToAnsi(lpClipBuf, lpClipBuf);

        }
}

static void
WINexit(void) {
        if (gl_nbprologue >= 1) {
                struct LL_SYMBOL *llend = getsym("end");
                pusharg(LLT_T, 1L);
                (void)lispcall(LLT_T, 1L, llend);
        } else  {
                WINclose();
                exit(0);
        }
}

static int
WINquit(void) {
        int     res;

        res = MessageBox(GetFocus(),
                         "Do you really want to exit Le-Lisp",
                         " ",
                         MB_YESNO|MB_ICONQUESTION);

        if (res == IDYES)
                WINexit();

        return(1);
}

int CALLBACK
WinMain(HINSTANCE hInstance,
        HINSTANCE hPrevInstance,
        LPSTR lpCmdLine,
        int nCmdShow) {
        char    *argv[32];
        int     argc = 0;
        char    *env;

        extern  double sqrt(double x);

        if (hPrevInstance) {
                MessageBox(GetFocus(),
                           "Application is already loaded.",
                           "",
                           MB_ICONHAND | MB_SYSTEMMODAL);
                return(0);
        }

        hInst     = hInstance;
        hAccTable = LoadAccelerators(hInst, "LeLispAccelerator");
        hPrev     = hPrevInstance;
        nCmd      = nCmdShow;

        if (!GetModuleFileName(hInst, szBinPathName, sizeof(szBinPathName))) {
                (void)winfprintf(stderr, "Error while getting program name.\n");
                exit(-1);
        }

        argv[argc++] = szBinPathName;

        while (*lpCmdLine) {
                while (*lpCmdLine && *lpCmdLine == ' ')
                        lpCmdLine++;
                if (*lpCmdLine)
                        argv[argc++] = (char *)lpCmdLine;
                else    break;
                while (*lpCmdLine && *lpCmdLine != ' ')
                        lpCmdLine++;
                if (*lpCmdLine == ' ')
                        *lpCmdLine++ = '\000';
        }

        argv[argc] = NULL;

        (void)putenv("TERM=windows");
        (void)putenv("BITMAP=windows");

        if ((env = getenv("LELISP")) == NULL) {
                MessageBox(GetFocus(),
                           "LELISP variable is not set, exit ..",
                           "Loader error !",
                           MB_ICONHAND | MB_SYSTEMMODAL);
                return(1);
        }

        (void)strcpy(szBatchName, env);
        (void)strcat(szBatchName, "\\");
        (void)strcat(szBatchName, LL_SYS_NAME);
        (void)strcat(szBatchName, "\\config.tmp");

        if ((fdBatch = fopen(szBatchName, "r")) != NULL)
                fBatch = TRUE;

        atexit(llexit);

        (void)main(argc, argv);

        WINclose();

        return(0);

}

LRESULT CALLBACK
MainWndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) {
        PAINTSTRUCT     ps;
        HDC             hDC;

        if (nNeedEvent)
                return(DefWindowProc(hWnd, message, wParam, lParam));

#if     defined(NOTDEF)
        if (message == wmRequest) {
                char    *request;
                char    *answer;
                HANDLE  hAnswer;

                /*
                 *      S-Expression to evaluate:
                 */
                request = (char *)GlobalLock((HANDLE)lParam);
//              form    = evalbuffer(request);
                GlobalUnlock((HANDLE)lParam);
                GlobalDiscard((HANDLE)lParam);
                /*
                 * Get the return value of the expression,  directly from  the
                 * output buffer. Actually we only get the last 128 characters
                 * of this buffer, which may have been flushed before the read.
                 */
                hAnswer = GlobalAlloc(GMEM_MOVEABLE, 10*1024);
                answer  = (char *)GlobalLock(hAnswer);
                /*
                 *      probj(form);
                 */
                GlobalUnlock(hAnswer);
                PostMessage(wParam, wmNotify, 0, (LONG)hAnswer);
                return(1);
        }
#endif

        switch (message) {

        case WM_COMMAND:
                switch (wParam) {
                case IDM_LOAD  :
                        break;
                case IDM_BREAK :
                        WINtyshowcursor(TRUE);
                        ll_break();
                        break;
                case IDM_QUIT :
                        return(WINquit());
                case IDM_ABOUT :
                        DialogBox(hInst, "AboutBox", hWnd, (DLGPROC)About);
                        break;
                case IDM_PASTE:
                        WINpaste(hWnd);
                        break;
                }

        case WM_INITMENU:
                if ((HMENU)wParam == GetMenu(hWnd)) {
                        EnableMenuItem((HMENU)wParam, IDM_CUT,  MF_GRAYED);
                        EnableMenuItem((HMENU)wParam, IDM_COPY, MF_GRAYED);

                        if (OpenClipboard(hWnd)) {
                            if (IsClipboardFormatAvailable(CF_TEXT) ||
                                IsClipboardFormatAvailable(CF_OEMTEXT))
                                    EnableMenuItem((HMENU)wParam,
                                                   IDM_PASTE,
                                                   MF_ENABLED);
                            else    EnableMenuItem((HMENU)wParam,
                                                   IDM_PASTE,
                                                   MF_GRAYED);
                            CloseClipboard();
                            return(TRUE);
                        }

                        return(FALSE);

                }
                return(TRUE);

        case WM_ACTIVATE:
                switch (LOWORD(wParam)) {
                case WA_ACTIVE :
                case WA_CLICKACTIVE :
                        if (nPrevCaret == TRUE)
                                WINtyshowcursor(TRUE);
                        break;
                case WA_INACTIVE :
                        nPrevCaret = nCaretVisible;
                        WINtyshowcursor(FALSE);
                        break;
                }
                return(FALSE);

        case WM_SIZE:
                if (nOpen && !IsIconic(hWnd) && hWnd == hCurWnd) {
                        RECT    rcClient;

                        GetClientRect(hWnd, (LPRECT)&rcClient);
                        nParentWidth  = rcClient.right  - rcClient.left;
                        nParentHeight = rcClient.bottom - rcClient.top;
                        nCol = (short)(nParentWidth /nCharWidth);
                        nRow = (short)(nParentHeight/nCharHeight);
#if     defined(SCROLL)
                        WINtycls();
                        WINtycursor(0, 0);
#endif
                        }
                break;

        case WM_CREATE:
                /*
                 *      Create the objects
                 */
                break;

        case WM_CLOSE :
                return(WINquit());

        case WM_PAINT :
                hDC = BeginPaint(hWnd, &ps);
                if (nOpen && (hWnd == hMainWnd)) {
                        int     row;
                        for (row = 0 ; row < nRow ; row++)
                                TextOut(hDC,
                                        0,
                                        row * nCharHeight,
                                        EditBuffer + row * nMaxCharX,
                                        nCol);
                }
                EndPaint(hWnd, &ps);
                return(FALSE);

        case WM_MOUSEMOVE :
                if (LL_New_Event < 10)
                        LL_wm_mouse_move(hWnd, message, wParam, lParam);
                break;

        case WM_LBUTTONDOWN:
        case WM_MBUTTONDOWN:
        case WM_RBUTTONDOWN:
                LL_wm_mouse_down(hWnd, message, wParam, lParam);
                break;

        case WM_LBUTTONUP:
        case WM_MBUTTONUP:
        case WM_RBUTTONUP:
                LL_wm_mouse_up(hWnd, message, wParam, lParam);
                break;

        case WM_CHAR:
                LL_wm_char(hWnd, message, wParam);
                break;

        case WM_KEYDOWN:
                LL_wm_key(hWnd, message, wParam);
                break;
        }

        return(DefWindowProc(hWnd, message, wParam, lParam));
}

LRESULT CALLBACK
About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam) {
        RECT    aRec;

        lParam = lParam;

        switch (message) {
        case WM_INITDIALOG:
                GetWindowRect(hDlg, &aRec);
                OffsetRect(&aRec, -aRec.left, -aRec.top);
                MoveWindow(hDlg,
                           ((GetSystemMetrics(SM_CXSCREEN)-aRec.right)/2+4)&~7,
                           (GetSystemMetrics(SM_CYSCREEN)-aRec.bottom)/2,
                           aRec.right,
                           aRec.bottom,
                           0);
                return(TRUE);

        case WM_COMMAND:
                if (wParam == IDOK || wParam == IDCANCEL) {
                        EndDialog(hDlg, TRUE);
                        return(TRUE);
                }
                break;
        }

        return(FALSE);
}

/*
 *      Emulation of printf, fprintf and perror functions
 */

/* No \r in string. */
#define NO_CR(s)      {\
        register char   *p1, *p2;\
        for (p1 = p2 = s; *p1 != 0; p1++) \
                if (*p1 != '\r')\
                        *(p2++) = *p1;\
        *p2='\0';\
}

#define PRINTF_MAX_BUF  4096
static  char printfbuf[PRINTF_MAX_BUF];

int
winprintf(const char *format, ...) {
        va_list         marker;
        int             count;

        va_start(marker, format);
        count = vsprintf(printfbuf, format, marker);
        va_end(marker);

        if (llconsole) {
                (void)fputs(printfbuf, stdout);
                return(count);
        } else  return(WINtystring(printfbuf, count));

}

int
winfprintf(FILE *stream, const char *format, ...) {
        va_list         marker;
        int             count;

        va_start(marker, format);
        count = vsprintf(printfbuf, format, marker);
        va_end(marker);

        if (llconsole) {
                (void)fputs(printfbuf, stream);
                return(count);
        }

        if (stream == stdout)
                (void)WINtystring(printfbuf, count);
        else    if (stream == stderr) {
                /*
                 *      Pop-up a dialog box when error occurs
                 */
                NO_CR(printfbuf);
                (void)MessageBox(GetFocus(),
                                 printfbuf,
                                 "",
                                 MB_ICONHAND | MB_SYSTEMMODAL);
        } else  (void)fputs(printfbuf, stream);

        return(count);
}

void
perror(const char *msg) {
        (void)winfprintf(stderr, "perror : %s : %s", msg, strerror(errno));
}

/*
 *      EXTERNS TO TEST LE-LISP
 */

/*
 *      The simulation of signals.
 */

#define NB_INTEST       1024

int     itloop = NB_INTEST;

void
ll_intest(void) {
        MSG     msg;

        while (PeekMessage(&msg, hCurWnd, 0, 0, PM_REMOVE)) {
                if (TranslateAccelerator(hCurWnd, hAccTable, &msg))
                        continue;
                TranslateMessage(&msg);
                DispatchMessage(&msg);
        }

        itloop = NB_INTEST;

}

static  UINT_PTR AlarmID = (UINT_PTR)0;

LRESULT CALLBACK
AlarmProc(HWND hWnd, UINT message, UINT wParam, LONG lParam) {
        POINT   pt;
        LONG    lPos;

        hWnd    = hWnd;
        message = message;
        wParam  = wParam;
        lParam  = lParam;

        (void)alarm(0L);      /* kill timer   */

        ll_clock();             /* warn Le-Lisp */

        GetCurrentPositionEx(hTTyDC, &pt);
        lPos = MAKELONG(pt.x, pt.y);

        (void)SendMessage(hMainWnd, WM_MOUSEMOVE, (UINT)0, lPos);

        PRINTINFO("Return from AlarmProc.\n");

        return(TRUE);
}

long
alarm(long sec) {
        if (sec == 0L) {
                if (AlarmID != (UINT_PTR)0) {
                        KillTimer((HWND)NULL, AlarmID);
                        AlarmID = (WORD)0;
                }
        } else  {
                AlarmID = SetTimer((HWND)NULL,
                                   1,
                                   (UINT)(1000*sec),
                                   (TIMERPROC)lpProcTimer);
                if (AlarmID == (UINT_PTR)0)
                        return(0L);
        }

        return(sec);
}

int
NT386isatty(int fd) {
        (void)fd;
        return(1);
}

int
DOSsleep(long seconds) {
#if     defined(CLOCKS_PER_SEC)
        clock_t tm = clock() + (clock_t)(seconds) * CLOCKS_PER_SEC;
#else
        clock_t tm = clock() + (clock_t)(seconds) * CLK_TCK;
#endif
        while (clock() < tm)
                ll_intest();

        return(0);
}

void
DOSiniterm(void) {
}

void
DOSlispterm(void) {
        static  int init_flag = 1;

        if (init_flag) {
                init_flag = 0;
                WINopen();
        }
}

void
DOSsysterm(void) {
}

int
DOStyi(void) {
#if     defined(_LISP_CONSOLE_TTY)
        DWORD           dwMode;         /* to save the input mode */
        INPUT_RECORD    irBuf;          /* buffer to read into    */
        DWORD           dwRead;         /* char count read        */
        HANDLE          TermIn;

        if (fBatch == TRUE) {
                int aChar = fgetc(fdBatch);
                return(aChar);
        }

        TermIn = GetStdHandle(STD_INPUT_HANDLE);

        GetConsoleMode(TermIn, &dwMode);
        SetConsoleMode(TermIn, dwMode & RAWMASK);

        for (;;) {
                ReadConsoleInput(TermIn, &irBuf, 1, &dwRead);

                if (dwRead > 0 && irBuf.EventType == KEY_EVENT) {
                        if (irBuf.Event.KeyEvent.bKeyDown == FALSE)
                                continue;

                        switch (irBuf.Event.KeyEvent.wVirtualKeyCode) {
                        case VK_CONTROL : continue;
                        case VK_SHIFT   : continue;
                        }

                        if (irBuf.Event.KeyEvent.uChar.AsciiChar == 0)
                                continue;

                        SetConsoleMode(TermIn, dwMode);

                        return(irBuf.Event.KeyEvent.uChar.AsciiChar);
                }

        }
#else
        return(WINtyi());
#endif
}

int
DOStys(void) {
#if     defined(_LISP_CONSOLE_TTY)
        DWORD           dwMode;         /* to save the input mode */
        INPUT_RECORD    irBuf;          /* buffer to read into    */
        DWORD           dwRead;         /* char count read        */
        HANDLE          TermIn;

        TermIn = GetStdHandle(STD_INPUT_HANDLE);

        GetConsoleMode(TermIn, &dwMode);
        SetConsoleMode(TermIn, dwMode & RAWMASK);
        PeekConsoleInput(TermIn, &irBuf, 1, &dwRead);
        SetConsoleMode(TermIn, dwMode);

        if (dwRead > 0 && irBuf.EventType == KEY_EVENT)
                if (irBuf.Event.KeyEvent.bKeyDown == FALSE)
                        return(-1);
                else    return(DOStyi());
        else    return(-1);
#else
        return(WINtys());
#endif
}

int
DOStyo(int c) {
#if     defined(_LISP_CONSOLE_TTY)
        (void)fputc(c, stdout);
#else
        WINtyo((char)c);
#endif
        return(c);
}

int
DOSputs(char *strg, int size) {
#if     defined(_LISP_CONSOLE_TTY)
        while (size-- > 0)
                (void)fputc(*strg++, stdout);
        return(size);
#else
        return(WINtystring(strg, size));
#endif
}

static HANDLE
LoadDLL(char *name) {
        int     i;
        char    lwrname[256];

        (void)strncpy(lwrname, name, 256);
        lwrname[255] = '\000';
        (void)strlwr(lwrname);

        /*
         *      Search for a previously loaded DLL
         */

        for (i = 0 ; i < LL_MAXDLL ; i++)
                if (LoadedDLLTab[i].hDLL)
                        if (strcmp(lwrname, LoadedDLLTab[i].name) == 0)
                                return(LoadedDLLTab[i].hDLL);

        /*
         *      None found, search for a free entry and load DLL.
         */

        for (i = 0 ; i < LL_MAXDLL ; i++)
                if (LoadedDLLTab[i].hDLL == (HANDLE)0) {
                        char    *dllname;
                        HANDLE  hDLL;

                        // MessageBox(NULL, lwrname, "LoadDLL1", MB_OK);
                        hDLL    = LoadLibrary(lwrname);

                        if (hDLL < (HANDLE)32)
                                return((HANDLE)0);    /* error as in SDK */

                        dllname = (char *)malloc(strlen(lwrname) + 1);

                        if (dllname == NULL) {
                                return((HANDLE)0);
                        }
                                
                        (void)strcpy(dllname, lwrname);

                        LoadedDLLTab[i].name = dllname;

                        return(LoadedDLLTab[i].hDLL = hDLL);
                }

        return((HANDLE)0);
}

void
FreeDLL(HANDLE h) {
        int     i;

        for (i = 0 ; i < LL_MAXDLL ; i++)
                if (LoadedDLLTab[i].hDLL == h) {
                        free(LoadedDLLTab[i].name);
                        LoadedDLLTab[i].hDLL = (HANDLE)0;
                        FreeLibrary(h);
                }
}

void
FreeNamedDLL(char *name) {
        int     i;

        for (i = 0 ; i < LL_MAXDLL ; i++)
                if (LoadedDLLTab[i].hDLL != (HANDLE)0) {
                        if (strcmp(LoadedDLLTab[i].name, name) != 0)
                                continue;
                        free(LoadedDLLTab[i].name);
                        FreeLibrary(LoadedDLLTab[i].hDLL);
                        LoadedDLLTab[i].hDLL = (HANDLE)0;
                }
}

int
llgetinlib(char *fun, char *lib, int types[], int len) {
        FARPROC fpExtFun;
        HANDLE  hlib;
        union {
                FARPROC fp;
                int     addr;
        } conv;

        (void)len;
        (void)types;

        if ((hlib = LoadDLL(lib)) == (HANDLE)0)
                return(0);

        // MessageBox(NULL, fun, "LoadDLL2", MB_OK);

        if ((fpExtFun = (FARPROC)GetProcAddress(hlib, fun)) == (FARPROC)0)
                return(0);

        // MessageBox(NULL, fun, "LoadDLL Ok", MB_OK);

        conv.fp = fpExtFun;

        return(conv.addr); // (int)(*fpExtFun);
}
