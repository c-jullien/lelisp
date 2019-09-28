#if     !defined(lint)
static  char *sccsid = "@(#)widgets.c   (c) ELIGIS 2005/11/25";
#endif

/*
 *      widgets.c : routines in this file provide support for WINDOWS widgets.
 */

#if     defined(_MSC_VER) && (_MSC_VER >= 1400)
#define _CRT_SECURE_NO_DEPRECATE        1
#define _CRT_NONSTDC_NO_DEPRECATE       1
#endif

#include        <windows.h>
#include        <string.h>
#include        "lelisp.h"
#include        "winterm.h"
#include        "widgets.h"
#include        "winvirbi.h"

/*
 *      MessageBox interface
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
WinMessage(char *s, int i, int b)
{
        int     ret;

        ret = MessageBox((HWND)NULL,s,"",mIcon[i]|mButton[b]|MB_TASKMODAL);

        switch (ret) {
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
 *      B U T T O N   W I D G E T
 */

static  WNDPROC OldButtonProc;
BOOL    windows_window_map(HWND hwnd);
extern  LRESULT WINAPI ButtonWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
HWND    windows_create_button(LONG *prop, LPSTR ti, HCURSOR hcurs, SHORT vi, HWND fa, LONG lwin, SHORT left);
int     windows_getstate_button(HWND hwnd);
int     windows_setstate_button(HWND hwnd, SHORT state);
int     windows_enable_button(HWND hwnd, SHORT state);

static  struct LL_SYMBOL *button_callback;

extern  HWND    hMainWnd;

static  DWORD   BSAllStyles[] = {
        BS_PUSHBUTTON,
        BS_DEFPUSHBUTTON,
        BS_CHECKBOX,
        BS_AUTOCHECKBOX,
        BS_RADIOBUTTON,
        BS_3STATE,
        BS_AUTO3STATE,
        BS_GROUPBOX,
        BS_USERBUTTON,
        BS_AUTORADIOBUTTON,
        BS_OWNERDRAW,
        BS_LEFTTEXT
};

HWND
windows_create_button(LONG *prop, LPSTR ti, HCURSOR hcurs, SHORT vi, HWND fa, LONG lwin, SHORT left) {
        HWND    hwnd;
        DWORD   dwStyle;
        int     x     = (int)prop[0];
        int     y     = (int)prop[1];
        int     w     = (int)prop[2];
        int     h     = (int)prop[3];
        int     style = (int)prop[4];

        dwStyle = BSAllStyles[style] | WS_CHILD;

        if (left)
                dwStyle |= BS_LEFTTEXT;

        hwnd = CreateWindow(
                             (LPSTR)"LLButton",
                             (LPSTR)ti,
                             dwStyle,
                             x,
                             y,
                             w,
                             h,
                             (HWND)fa,
                             (HMENU)WINdisplay->winId,  /* Child-Window */
                             (HINSTANCE)hInst,          /* instance     */
                             (LPSTR)NULL                /* no params    */
                          );

        if (hwnd != (HWND)NULL) {

                SetWindowInfo(hwnd, BVCursorOffset(hwnd), hcurs);
                SetWindowInfo(hwnd, BVBkGrndOffset(hwnd), 0   );

                if (vi != 0)
                        windows_window_map(hwnd);
                
                SetWindowLong(hwnd, BVWindowOffset(hwnd), lwin);
                
                WINdisplay->winId += 1;
        }

        return(hwnd);

}

int
windows_getstate_button(HWND hwnd) {
        return((int)SendMessage(hwnd, BM_GETSTATE, (WPARAM)0, (LPARAM)0) & 0x03);
}

int
windows_setcheck_button(HWND hwnd, SHORT check) {
        return((int)SendMessage(hwnd, BM_SETCHECK, (WPARAM)check, (LPARAM)0));
}

int
windows_getcheck_button(HWND hwnd) {
        return((int)SendMessage(hwnd, BM_GETCHECK, (WPARAM)0, (LPARAM)0));
}

int
windows_setstate_button(HWND hwnd, SHORT state) {
        return((int)SendMessage(hwnd, BM_SETSTATE, (WPARAM)state, (LPARAM)0));
}

int
windows_enable_button(HWND hwnd, SHORT state) {
        return(EnableWindow(hwnd, state ? TRUE : FALSE));
}

int
windows_display_button(HWND hwnd) {
        InvalidateRect(hwnd, NULL, FALSE);
        SendMessage(hwnd, WM_PAINT, (WPARAM)0, (LPARAM)0);
        return(1);
}

LRESULT WINAPI
ButtonWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
        static  int     inProc  = FALSE;
        static  int     nState  = FALSE;
        int             nValid  = FALSE;
        int             nType;

        switch (msg) {
        case WM_MOUSEMOVE:
                if (LL_New_Event < 10)
                        LL_wm_mouse_move(hwnd, msg, (WORD)wParam, lParam);
                break;

        case BM_SETSTATE:
                nState = (int)wParam;
                break;

        case WM_LBUTTONDOWN:
        case WM_MBUTTONDOWN:
        case WM_RBUTTONDOWN:
                LL_wm_mouse_down(hwnd, msg, wParam, lParam);
                break;

        case WM_MBUTTONUP:
                LL_wm_mouse_up(hwnd, msg, wParam | MK_MBUTTON, lParam);
                break;

        case WM_RBUTTONUP:
                LL_wm_mouse_up(hwnd, msg, wParam | MK_RBUTTON, lParam);
                break;

        case WM_LBUTTONUP:
                /*
                 * Return code on button click :
                 *
                 *      No    modifier -> 0
                 *      Shift modifier -> 1
                 *      Ctrl  modifier -> 2
                 */

                LL_wm_mouse_up(hwnd, msg, wParam | MK_LBUTTON, lParam);

                nValid = nState;
                CallWindowProc(OldButtonProc, hwnd, msg, wParam, lParam);

                nType = 0;
                if (GetKeyState(VK_SHIFT) < 0)
                        nType = 1;
                if (GetKeyState(VK_CONTROL) < 0)
                        nType = 2;

                if ((inProc == FALSE) && nValid) {
                        inProc = TRUE;
                        pusharg(LLT_T, GetWindowLong(hwnd, BVWindowOffset(hwnd)));
                        pusharg(LLT_FIX, nType);
                        (void)lispcall(LLT_T, 2, button_callback);
                        inProc = FALSE;
                }
                return(0L);

        case WM_WINDOWPOSCHANGING :
                if (IsWindowVisible(hwnd)) {
                        RECT            aRec;
                        POINT           ptUpperLeft;
                        POINT           ptLowerRight;

                        GetWindowRect(hwnd, &aRec);
                        ptUpperLeft.x   = aRec.left;
                        ptUpperLeft.y   = aRec.top;
                        ptLowerRight.x  = aRec.right;
                        ptLowerRight.y  = aRec.bottom;

                        ScreenToClient(GetParent(hwnd), &ptUpperLeft);
                        ScreenToClient(GetParent(hwnd), &ptLowerRight);

                        aRec.left       = ptUpperLeft.x;
                        aRec.top        = ptUpperLeft.y;
                        aRec.right      = ptLowerRight.x;
                        aRec.bottom     = ptLowerRight.y;

                        InvalidateRect(GetParent(hwnd), &aRec, TRUE);
                        return(0L);
                }
                break;

        case WM_MOVE:
        case WM_SIZE:
                windows_display_button(hwnd);
                break;
        }

        return(CallWindowProc(OldButtonProc, hwnd, msg, wParam, lParam));
}

/*
 *      S C R O L L   W I D G E T
 */

static  WNDPROC OldScrollProc;
LRESULT WINAPI ScrollWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
void            ScrollCallBack(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

HWND    windows_create_scroll(LONG *prop, LPSTR ti, HCURSOR cursor, SHORT vi, HWND fa, LONG lwin);
int     windows_get_scroll_pos(HWND hwnd);
int     windows_set_scroll_pos(HWND hwnd, SHORT pos);
int     windows_set_scroll_range(HWND hwnd, SHORT min, SHORT max);
int     windows_enable_scroll(HWND hwnd, SHORT state);

static  struct LL_SYMBOL *scroll_callback;

HWND
windows_create_scroll(LONG *prop, LPSTR ti, HCURSOR hcurs, SHORT vi, HWND fa, LONG lwin) {
        HWND    hwnd;
        DWORD   dwStyle;
        int     x     = (int)prop[0];
        int     y     = (int)prop[1];
        int     w     = (int)prop[2];
        int     h     = (int)prop[3];
        int     style = (int)prop[4];
        int     min   = (int)prop[5];
        int     max   = (int)prop[6];
/*      int     show  = (int)prop[7]; */
/*      int     inc   = (int)prop[8]; */
        int     val   = (int)prop[9];

        /*
         *      Sign extend for int in Le-Lisp to int in C (short -> int).
         */

        if (min > 0x8000) min = min | 0xFFFF0000;
        if (max > 0x8000) max = max | 0xFFFF0000;
        if (val > 0x8000) val = val | 0xFFFF0000;

        if (style == 0)
                dwStyle = SBS_VERT | WS_CHILD;
        else    dwStyle = SBS_HORZ | WS_CHILD;

        hwnd = CreateWindow(
                             (LPSTR)"LLScroll",
                             (LPSTR)ti,
                             dwStyle,
                             x,
                             y,
                             w,
                             h,
                             (HWND)fa,                  /* Owner        */
                             (HMENU)WINdisplay->winId,  /* Child-Window */
                             (HINSTANCE)hInst,          /* instance     */
                             (LPSTR)NULL                /* no params    */
                          );

        if (hwnd != (HWND)NULL) {

                SetWindowInfo(hwnd, BVCursorOffset(hwnd), hcurs);
                SetWindowInfo(hwnd, BVBkGrndOffset(hwnd), 0   );

                if (vi != 0)
                        windows_window_map(hwnd);
                
                SetWindowLong(hwnd, BVWindowOffset(hwnd), lwin);
                SetScrollRange(hwnd, SB_CTL, min, max, FALSE);
                SetScrollPos(hwnd, SB_CTL, val, FALSE);               

                WINdisplay->winId += 1;
        }
                
        return(hwnd);
                            
}

int
windows_get_scroll_pos(HWND hwnd) {
        return(GetScrollPos(hwnd, SB_CTL));
}

int
windows_set_scroll_pos(HWND hwnd, SHORT pos) {
        return(SetScrollPos(hwnd, SB_CTL, (int)pos, TRUE));
}

int
windows_set_scroll_range(HWND hwnd, SHORT nMin, SHORT nMax) {
        SetScrollRange(hwnd, SB_CTL, nMin, nMax, TRUE);
        return(1);
}

int
windows_enable_scroll(HWND hwnd, SHORT state) {
        return(EnableWindow(hwnd, state ? TRUE : FALSE));
}

int
windows_display_scroll(HWND hwnd) {
        InvalidateRect(hwnd, NULL, FALSE);
        SendMessage(hwnd, WM_PAINT, (WPARAM)0, (LPARAM)0);
        return(1);
}

LRESULT WINAPI
ScrollWndProc(HWND hwnd, unsigned msg, WPARAM wParam, LONG lParam) {
        switch (msg) {
        case WM_WINDOWPOSCHANGING :
                if (IsWindowVisible(hwnd)) {
                        RECT            aRec;
                        POINT           ptUpperLeft;
                        POINT           ptLowerRight;

                        GetWindowRect(hwnd, &aRec);
                        ptUpperLeft.x   = aRec.left;
                        ptUpperLeft.y   = aRec.top;
                        ptLowerRight.x  = aRec.right;
                        ptLowerRight.y  = aRec.bottom;

                        ScreenToClient(GetParent(hwnd), &ptUpperLeft);
                        ScreenToClient(GetParent(hwnd), &ptLowerRight);

                        aRec.left       = ptUpperLeft.x;
                        aRec.top        = ptUpperLeft.y;
                        aRec.right      = ptLowerRight.x;
                        aRec.bottom     = ptLowerRight.y;

                        InvalidateRect(GetParent(hwnd), &aRec, TRUE);
                }
                break;

        case WM_MOUSEMOVE:
                if (LL_New_Event < 10)
                        LL_wm_mouse_move(hwnd, msg, (WORD)wParam, lParam);
                break;

        case WM_MOVE:
        case WM_SIZE:
                windows_display_scroll(hwnd);
                break;
        }

        return(CallWindowProc(OldScrollProc, hwnd, msg, wParam, lParam));
}

void
ScrollCallBack(HWND hwnd, unsigned msg, WPARAM wParam, LPARAM lParam) {
        static  int inScrollProc = FALSE;

        hwnd = hwnd;

        switch (msg) {
        case WM_HSCROLL :
        case WM_VSCROLL : {
                HWND    Control= (HWND)lParam;
                int     nCode  = (int)LOWORD(wParam);
                int     nPos   = (int)HIWORD(wParam);
                UINT    Pos    = GetScrollPos(Control, SB_CTL);
                LONG    lwin   = GetWindowLong(Control,BVWindowOffset(Control));

                if (inScrollProc == TRUE)
                        return;

                inScrollProc = TRUE;

                switch (nCode) {
                case SB_LINEUP :
                        pusharg(LLT_T,   lwin);
                        pusharg(LLT_FIX, 0  );
                        pusharg(LLT_FIX, Pos);
                        (void)lispcall(LLT_T, 3, scroll_callback);
                        break;

                case SB_LINEDOWN :
                        pusharg(LLT_T,   lwin);
                        pusharg(LLT_FIX, 1  );
                        pusharg(LLT_FIX, Pos);
                        (void)lispcall(LLT_T, 3, scroll_callback);
                        break;

                case SB_PAGEUP :
                        pusharg(LLT_T,   lwin);
                        pusharg(LLT_FIX, 2  );
                        pusharg(LLT_FIX, Pos);
                        (void)lispcall(LLT_T, 3, scroll_callback);
                        break;

                case SB_PAGEDOWN :
                        pusharg(LLT_T,   lwin);
                        pusharg(LLT_FIX, 3  );
                        pusharg(LLT_FIX, Pos);
                        (void)lispcall(LLT_T, 3, scroll_callback);
                        break;

                case SB_THUMBPOSITION :
                        pusharg(LLT_T,   lwin);
                        pusharg(LLT_FIX, 4  );
                        pusharg(LLT_FIX, nPos);
                        (void)lispcall(LLT_T, 3, scroll_callback);
                        break;

                case SB_THUMBTRACK :
                        pusharg(LLT_T,   lwin);
                        pusharg(LLT_FIX, 5  );
                        pusharg(LLT_FIX, nPos);
                        (void)lispcall(LLT_T, 3, scroll_callback);
                        break;

                case SB_BOTTOM :
                        pusharg(LLT_T,   lwin);
                        pusharg(LLT_FIX, 6  );
                        pusharg(LLT_FIX, nPos);
                        (void)lispcall(LLT_T, 3, scroll_callback);
                        break;

                case SB_TOP :
                        pusharg(LLT_T,   lwin);
                        pusharg(LLT_FIX, 7  );
                        pusharg(LLT_FIX, nPos);
                        (void)lispcall(LLT_T, 3, scroll_callback);
                        break;
                }

                inScrollProc = FALSE;

                }
        }
}

/*
 *      L I S T B O X   W I D G E T
 */

static  WNDPROC OldListBoxProc;
LRESULT WINAPI ListBoxWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

HWND    windows_create_listbox(LONG *prop, LPSTR ti, HCURSOR cursor, SHORT vi, HWND fa, LONG lwin);
int     windows_addstring_listbox(HWND hwnd, LPSTR str);
int     windows_delstring_listbox(HWND hwnd, SHORT index);
int     windows_getstring_listbox(HWND hwnd, SHORT index, LPSTR buf);
int     windows_getindex_listbox(HWND hwnd);
int     windows_getindexes_listbox(HWND hwnd, SHORT nMax, LONG *lIndex);
int     windows_clearsel_getindex_listbox(HWND hwnd);

static  struct LL_SYMBOL *listbox_callback;

static  WNDPROC lpfnSCProc;

HWND
windows_create_listbox(LONG *prop, LPSTR ti, HCURSOR hcurs, SHORT vi, HWND fa, LONG lwin) {
        HWND    hwnd;
        DWORD   dwStyle;
        int     x     = (int)prop[0];
        int     y     = (int)prop[1];
        int     w     = (int)prop[2];
        int     h     = (int)prop[3];
        int     style = (int)prop[4];
        LPSTR   szlb  = (LPSTR)"LLListBox";

        hcurs = hcurs;
        lwin  = lwin;

        if (style == 0)
                dwStyle = LBS_STANDARD | WS_CHILD;
        else    dwStyle = LBS_STANDARD | LBS_MULTIPLESEL | WS_CHILD;
                
        hwnd = CreateWindow(
                             szlb,
                             (LPSTR)ti,
                             dwStyle,
                             x,
                             y,
                             w,
                             h,
                             (HWND)fa,
                             (HMENU)WINdisplay->winId,  /* Child-Window */
                             (HINSTANCE)hInst,          /* instance     */
                             (LPSTR)NULL                /* no params    */
                          );

        if (hwnd != (HWND)NULL) {
                SetWindowInfo(hwnd, BVCursorOffset(hwnd), hcurs);
                SetWindowInfo(hwnd, BVBkGrndOffset(hwnd), 0   );
                SetWindowLong(hwnd, BVWindowOffset(hwnd), lwin);

                if (vi != 0)
                        windows_window_map(hwnd);

                WINdisplay->winId += 1;

        }

        return(hwnd);

}

int
windows_addstring_listbox(HWND hwnd, LPSTR str) {
        int     ret = (int)SendMessage(hwnd, LB_ADDSTRING, (WPARAM)0, (LPARAM)str);

        if (ret == LB_ERR)
                return(-1);
        else    return(ret);
}

int
windows_delstring_listbox(HWND hwnd, SHORT index) {
        return((int)SendMessage(hwnd, LB_DELETESTRING, (WPARAM)index, (LPARAM)0));
}

int
windows_getstring_listbox(HWND hwnd, SHORT index, LPSTR buf) {
        return((int)SendMessage(hwnd, LB_GETTEXT, (WPARAM)index, (LPARAM)buf));
}

int
windows_getindex_listbox(HWND hwnd) {
        return((int)SendMessage(hwnd, LB_GETCURSEL, (WPARAM)0, (LPARAM)0));
}

int
windows_getindexes_listbox(HWND hwnd, SHORT nMax, LONG *lIndex) {
        int     nIndex[128];
        int     i;
        int     nSel;

        if (nMax >= 128)
                nMax = 128;

        SendMessage(hwnd, LB_GETSELITEMS, (WPARAM)nMax, (LPARAM)&nIndex);

        nSel = (int)SendMessage(hwnd, LB_GETSELCOUNT, (WPARAM)0, (LPARAM)0);

        if (nSel < 0)
                return(-1);

        for (i = 0 ; i < nSel ; i++)
                lIndex[i] = (LONG)nIndex[i];

        return(nSel);
}

int
windows_clearsel_listbox(HWND hwnd) {
        return((int)SendMessage(hwnd, LB_SETSEL, (WPARAM)-1, (LPARAM)0));
}

LRESULT WINAPI
ListBoxWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
        switch (msg) {
#if     !defined(_NT)
        case WM_MOUSEMOVE:
                if (LL_New_Event < 10) {
                        hwnd = GetParent(hwnd);
                        LL_wm_mouse_move(hwnd, msg, (WORD)wParam, lParam);
                }
                break;
#endif

        case WM_WINDOWPOSCHANGING :
                if (IsWindowVisible(hwnd)) {
                        RECT            aRec;
                        POINT           ptUpperLeft;
                        POINT           ptLowerRight;

                        GetWindowRect(hwnd, &aRec);
                        ptUpperLeft.x   = aRec.left;
                        ptUpperLeft.y   = aRec.top;
                        ptLowerRight.x  = aRec.right;
                        ptLowerRight.y  = aRec.bottom;

                        ScreenToClient(GetParent(hwnd), &ptUpperLeft);
                        ScreenToClient(GetParent(hwnd), &ptLowerRight);

                        aRec.left       = ptUpperLeft.x;
                        aRec.top        = ptUpperLeft.y;
                        aRec.right      = ptLowerRight.x;
                        aRec.bottom     = ptLowerRight.y;

                        InvalidateRect(GetParent(hwnd), &aRec, TRUE);
                }
                break;

        case WM_MOVE:
        case WM_SIZE:
                if (IsWindowVisible(hwnd)) {
                        ShowWindow(hwnd, SW_HIDE);
                        ShowWindow(hwnd, SW_SHOW);
                }
                break;
        }

        return((int)CallWindowProc(OldListBoxProc, hwnd, msg, wParam, lParam));
}

/*
 *      Initialisation
 */

int
WinInitWidgets(void) {
        WNDCLASS        wc;

        /*
         *      Create new Classes derived from standard Widgets Classes
         */

        if (GetClassInfo(NULL, "Button", &wc) == 0)
                return(0);

        wc.cbWndExtra   += LLWEXTRA;
        OldButtonProc    = wc.lpfnWndProc;
        wc.lpfnWndProc   = ButtonWndProc;
        wc.hInstance     = hInst;
        wc.lpszClassName = "LLButton";
        wc.lpszMenuName  = (LPSTR)NULL;
        wc.style         = CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS;

        if (RegisterClass(&wc) == 0)
                return(0);

        button_callback  = getsym("button-callback");

        if (GetClassInfo(NULL, "ScrollBar", &wc) == 0)
                return(0);

        wc.cbWndExtra   += LLWEXTRA;
        OldScrollProc    = wc.lpfnWndProc;
        wc.lpfnWndProc   = ScrollWndProc;
        wc.hInstance     = hInst;
        wc.lpszClassName = "LLScroll";
        wc.lpszMenuName  = (LPSTR)NULL;
        wc.style         = CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS;

        if (RegisterClass(&wc) == 0)
                return(0);

        scroll_callback = getsym("scroll-callback");

        if (GetClassInfo(NULL, "ListBox", &wc) == 0)
                return(0);

        wc.cbWndExtra   += LLWEXTRA;
        OldListBoxProc   = wc.lpfnWndProc;
        wc.lpfnWndProc   = ListBoxWndProc;
        wc.hInstance     = hInst;
        wc.lpszClassName = "LLListBox";
        wc.lpszMenuName  = (LPSTR)NULL;
        wc.style         = CS_GLOBALCLASS | CS_DBLCLKS;

        if (RegisterClass(&wc) == 0)
                return(0);

        listbox_callback = getsym("listbox-callback");

        lpfnSCProc = ListBoxWndProc;

        return(1);
}

/*
 *      O N L I N E   H E L P
 */

int
windows_help(LPSTR help, SHORT code, LPSTR token) {
        switch (code) {
        case 0: return(WinHelp((HWND)NULL, help, HELP_INDEX, (ULONG_PTR)0));
        case 1: return(WinHelp((HWND)NULL, help, HELP_KEY,   (ULONG_PTR)token));
        }

        return(WinHelp((HWND)NULL, help, HELP_INDEX, (ULONG_PTR)0));
}
