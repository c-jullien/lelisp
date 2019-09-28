#if     !defined(lint)
static  char *sccsid = "@(#)winwindow.c (c) ELIGIS 2007/02/10";
#endif

/*
 *      winwindow.c :
 */

#include "winvirbi.h"

static  CHAR szNomWin[]         = "Lisp Standard Window";
static  CHAR szNomSubWin[]      = "Lisp Opaque Subwindow";
static  CHAR szNomTransWin[]    = "Lisp Tansparent Subwindow";

extern  BOOL    windows_bitmap_PS_create(void);

extern  HANDLE          hInst;
extern  HICON           hIcon;

extern  HDC             hdcmem1;
extern  HDC             hdcmem2;
extern  HFONT           *aFont;
extern  FONT            *pfm;

extern  HWND            hMainWnd;

struct  LLDISPLAY       *WINdisplay;

SHORT                   gl_nbprologue = 0;
HCURSOR                 left_ptr;

#if     defined(RESOURCES_LOG)
#include <string.h>
char    szLogFile[256];
FILE    *pFILELog;
long    ResourceFlag    = 1;
#endif  /* RESOURCES_LOG */

HWND
windows_create_window(LONG *properties,
                      LPSTR title,
                      HCURSOR hcursor,
                      SHORT visible,
                      LONG lwin) {
        HWND    hwnd;

        hwnd = windows_create_window_owner(
                                            (HWND)NULL,
                                            properties,
                                            title,
                                            hcursor,
                                            visible,
                                            lwin
                                        );

        return(hwnd);

}

HWND
windows_create_window_owner(HWND owner,
                            LONG *properties,
                            LPSTR title,
                            HCURSOR hcursor,
                            SHORT visible,
                            LONG lwin) {
        HWND    hwnd;
        DWORD   dwStyle;
        RECT    rc;
        int     x;
        int     y;
        int     w;
        int     h;
        int     transient;
#if     defined(_OLD_CODE)
        int     dtop;
        int     dbottom;
        int     dleft;
        int     dright;
#endif

        dwStyle = WS_BORDER;

        x         = (SHORT)properties[0];
        y         = (SHORT)properties[1];
        w         = (SHORT)properties[2];
        h         = (SHORT)properties[3];
        transient = (SHORT)properties[19];


        /* propertie save-under */
        if (properties[5] > 0)
                dwStyle |= 0;

        /* propertie override-redirect, transient */

        if (properties[6] == 0) {
                dwStyle |= WS_THICKFRAME | WS_CAPTION |
                           WS_MINIMIZEBOX | WS_MAXIMIZEBOX  | WS_SYSMENU;
#if     defined(_OLD_CODE)
                dbottom  = GetSystemMetrics(LL_SM_CYFRAME);
                dtop     = dbottom + GetSystemMetrics(SM_CYCAPTION)
                                   - GetSystemMetrics(LL_SM_CYBORDER);
                dleft    = GetSystemMetrics(LL_SM_CXFRAME);
                dright   = dleft;
#endif
        } else  {
                dwStyle |= WS_POPUP;
#if     defined(_OLD_CODE)
                dtop     = GetSystemMetrics(LL_SM_CYBORDER);
                dbottom  = dtop;
                dleft    = GetSystemMetrics(LL_SM_CXBORDER);
                dright   = dleft;
#endif
        }

#if     !defined(_OLD_CODE)
        /*
         * Let the wonderful AdjustWindowRect function do the job.
         */
        rc.left   = x;
        rc.top    = y;
        rc.right  = x + w;
        rc.bottom = y + h;
        AdjustWindowRect(&rc, dwStyle, FALSE);
#endif

#if     defined(_OLD_CODE)
        hwnd = CreateWindow(
                             (LPSTR)szNomWin,
                             (LPSTR)title,
                             dwStyle,
                             x - dleft,
                             y - dtop,
                             w + dleft + dright,
                             h + dtop  + dbottom,
                             (HWND)owner,               /* owner        */
                             (HMENU)0,                  /* Child-Window */
                             (HANDLE)hInst,             /* instance     */
                             (LPVOID)NULL               /* no params    */
                         );
#else
        hwnd = CreateWindow(
                             (LPSTR)szNomWin,
                             (LPSTR)title,
                             dwStyle,
                             rc.left,
                             rc.top,
                             rc.right  - rc.left,
                             rc.bottom - rc.top,
                             (HWND)owner,               /* owner        */
                             (HMENU)0,                  /* Child-Window */
                             (HANDLE)hInst,             /* instance     */
                             (LPVOID)NULL               /* no params    */
                         );
#endif

        if (hwnd != (HWND)0) {
                SetWindowInfo(hwnd, BVCursorOffset(hwnd), hcursor);
                SetWindowInfo(hwnd, BVBkGrndOffset(hwnd), 0);

                if (visible != 0)
                        SetWindowPos(
                                      hwnd,
                                      transient ? HWND_TOPMOST : HWND_TOP,
                                      0,
                                      0,
                                      0,
                                      0,
                                      SWP_NOSIZE     | SWP_NOMOVE     |
                                      SWP_NOACTIVATE | SWP_SHOWWINDOW
                                  );

                SetWindowLong(hwnd, BVWindowOffset(hwnd), lwin);

#if     defined(_OLD_CODE)
                if ((w + dleft + dright)  < GetSystemMetrics(SM_CXMIN) ||
                    (h + dtop  + dbottom) < GetSystemMetrics(SM_CYMIN)) {
                        RECT    aRec;

                        GetWindowRect(hwnd, &aRec);
                        x = aRec.right  - aRec.left;
                        y = aRec.bottom - aRec.top;
                        SendMessage(hwnd, WM_SIZE, (WORD)0, MAKELONG(x, y));
                    }
#else
                if ((rc.right  - rc.left) < GetSystemMetrics(SM_CXMIN) ||
                    (rc.bottom - rc.top)  < GetSystemMetrics(SM_CYMIN)) {
                        RECT    aRec;

                        GetWindowRect(hwnd, &aRec);
                        x = aRec.right  - aRec.left;
                        y = aRec.bottom - aRec.top;
                        SendMessage(hwnd, WM_SIZE, (WORD)0, MAKELONG(x, y));
                    }
#endif
                if ((hilight_flag == TRUE) && (properties[4] != 0))
                        SendMessage(hwnd, WM_NCACTIVATE, 1, 0L);

                PRINTRESOURCE(
                                "Allocate",
                                "window",
                                "windows_create_window",
                                hwnd
                           );
        }

        return(hwnd);
}

BOOL
windows_topmove_window(HWND hwnd, SHORT x, SHORT y, SHORT activ) {
        DWORD   dwStyle;
        int     dtop;
        int     dleft;

        dwStyle = GetWindowLong(hwnd, GWL_STYLE);
        if (dwStyle & WS_DLGFRAME) {
                dtop  = GetSystemMetrics(LL_SM_CYFRAME ) +
                        GetSystemMetrics(SM_CYCAPTION  ) -
                        GetSystemMetrics(LL_SM_CYBORDER);
                dleft = GetSystemMetrics(LL_SM_CXFRAME );
        } else  {
                dtop  = GetSystemMetrics(LL_SM_CYBORDER);
                dleft = GetSystemMetrics(LL_SM_CXBORDER);
        }

        if (IsIconic(hwnd) && (winversion() > 3.0)) {
                WINDOWPLACEMENT hPl;
                int             OldW;
                int             OldH;

                hPl.length = sizeof(hPl);

                GetWindowPlacement(hwnd, &hPl);
                OldW = hPl.rcNormalPosition.right  - hPl.rcNormalPosition.left;
                OldH = hPl.rcNormalPosition.bottom - hPl.rcNormalPosition.top;
                hPl.rcNormalPosition.left   = x - dleft;
                hPl.rcNormalPosition.top    = y - dtop;
                hPl.rcNormalPosition.right  = x - dleft + OldW;
                hPl.rcNormalPosition.bottom = x - dtop  + OldH;
                SetWindowPlacement(hwnd, &hPl);
                return(1);
        }

        SetWindowPos(
                      hwnd,
                      HWND_TOP,
                      x - dleft,
                      y - dtop,
                      0,
                      0,
                      SWP_NOSIZE | SWP_NOZORDER | (activ ? 0 : SWP_NOACTIVATE)
                  );
        return(1);
}

BOOL
windows_topresize_window(HWND hwnd, SHORT w, SHORT h) {
        DWORD   dwStyle;
        int     dtop;
        int     dbottom;
        int     dleft;
        int     dright;

        dwStyle = GetWindowLong(hwnd, GWL_STYLE);
        if (dwStyle & WS_DLGFRAME) {
                dbottom = GetSystemMetrics(LL_SM_CYFRAME);
                dtop    = dbottom + GetSystemMetrics(SM_CYCAPTION)
                                  - GetSystemMetrics(LL_SM_CYBORDER);
                dleft   = GetSystemMetrics(LL_SM_CXFRAME);
                dright  = dleft;
        } else  {
                dtop    = GetSystemMetrics(LL_SM_CYBORDER);
                dbottom = dtop;
                dleft   = GetSystemMetrics(LL_SM_CXBORDER);
                dright  = dleft;
        }

        if (IsIconic(hwnd) && (winversion() > 3.0)) {
                WINDOWPLACEMENT hPl;

                hPl.length = sizeof(hPl);

                w = (short)(w + dleft + dright);
                h = (short)(h + dtop  + dbottom);

                GetWindowPlacement(hwnd, &hPl);
                hPl.rcNormalPosition.right  = hPl.rcNormalPosition.left + w;
                hPl.rcNormalPosition.bottom = hPl.rcNormalPosition.top  + h;
                SetWindowPlacement(hwnd, &hPl);
                return(1);
        }

        SetWindowPos(
                      hwnd,
                      (HWND)0,
                      0,
                      0,
                      w + dleft + dright,
                      h + dtop  + dbottom,
                      SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE
                  );

        return(1);
}

BOOL
windows_topmoveresize_window(HWND hwnd, SHORT x, SHORT y, SHORT w, SHORT h) {
        DWORD   dwStyle;
        int     dtop;
        int     dbottom;
        int     dleft;
        int     dright;

        dwStyle = GetWindowLong(hwnd, GWL_STYLE);

        if (dwStyle & WS_DLGFRAME) {
                dbottom = GetSystemMetrics(LL_SM_CYFRAME);
                dtop    = dbottom + GetSystemMetrics(SM_CYCAPTION)
                                  - GetSystemMetrics(LL_SM_CYBORDER);
                dleft   = GetSystemMetrics(LL_SM_CXFRAME);
                dright  = dleft;
        } else  {
                dtop    = GetSystemMetrics(LL_SM_CYBORDER);
                dbottom = dtop;
                dleft   = GetSystemMetrics(LL_SM_CXBORDER);
                dright  = dleft;
        }

        if (IsIconic(hwnd) && (winversion() > 3.0)) {
                WINDOWPLACEMENT hPl;

                hPl.length = sizeof(hPl);

                GetWindowPlacement(hwnd, &hPl);
                hPl.rcNormalPosition.left   = x - dleft;
                hPl.rcNormalPosition.top    = y - dtop;
                hPl.rcNormalPosition.right  = w + dleft + dright;
                hPl.rcNormalPosition.bottom = h + dtop  + dbottom;
                SetWindowPlacement(hwnd, &hPl);
                return(1);
        }

        SetWindowPos(
                      hwnd,
                      (HWND)0,
                      x - dleft,
                      y - dtop,
                      w + dleft + dright,
                      h + dtop  + dbottom,
                      SWP_NOZORDER | SWP_NOACTIVATE
                  );
        return(1);
}

BOOL
windows_window_map(HWND hwnd) {
        SetWindowPos(
                      hwnd,
                      HWND_TOP,
                      0, 0, 0, 0,
                      SWP_NOSIZE | SWP_NOMOVE | SWP_SHOWWINDOW | SWP_NOACTIVATE
                  );
        return(1);
}

BOOL
windows_window_unmap(HWND hwnd) {
        SetWindowPos(
                      hwnd,
                      HWND_BOTTOM,
                      0, 0, 0, 0,
                      SWP_NOSIZE | SWP_NOMOVE | SWP_HIDEWINDOW | SWP_NOACTIVATE
                  );
        return(1);
}

BOOL
windows_set_foreground_window(HWND hwnd) {
        SetForegroundWindow(hwnd);
        return(1);
}

BOOL
windows_window_transient(HWND hwnd, int flag) {
        HWND    insert_after = (flag ? HWND_TOPMOST : HWND_NOTOPMOST);

        SetWindowPos(
                      hwnd,
                      insert_after,
                      0, 0, 0, 0,
                      SWP_NOSIZE | SWP_NOMOVE | SWP_SHOWWINDOW | SWP_NOACTIVATE
                  );
        return(1);
}

BOOL
windows_change_title(HWND hwnd, LPSTR title) {
        SetWindowText(hwnd, title);
        return(1);
}

BOOL
windows_set_window_state(HWND hwnd, SHORT state) {
        if (state != 0)
                ShowWindow(hwnd, SW_SHOWMINNOACTIVE);
        else    ShowWindow(hwnd, SW_RESTORE       );
        return(1);
}

BOOL
windows_topchangewindow_border(HWND hwnd, SHORT border) {
        SendMessage(hwnd, WM_NCACTIVATE, border, 0L);
        return(1);
}

BOOL
windows_pop_window(HWND hwnd) {
        SetWindowPos(
                      hwnd,
                      HWND_TOP,
                      0, 0, 0, 0,
                      SWP_NOSIZE | SWP_NOMOVE | SWP_NOACTIVATE
                  );
        return(1);
}

BOOL
windows_move_behind_window(HWND hwnd1, HWND hwnd2) {
        if (IsWindow(hwnd1) && IsWindow(hwnd2))
                SetWindowPos(
                              hwnd1,
                              hwnd2,
                              0, 0, 0, 0,
                              SWP_NOSIZE | SWP_NOMOVE | SWP_NOACTIVATE
                          );
        return(1);
}

BOOL
windows_push_window(HWND hwnd1) {
        SetWindowPos(
                      hwnd1,
                      HWND_BOTTOM,
                      0, 0, 0, 0,
                      SWP_NOSIZE | SWP_NOMOVE | SWP_NOACTIVATE
                  );
        return(1);
}

BOOL
windows_kill_window(HWND hwnd, HDC hdc) {
        HPEN    hpen;
        HBRUSH  hbrush;

        if (IsWindow(hwnd)) {
                if (hdc != 0) {
                        hbrush = SelectObject(hdc,GetStockObject(WHITE_BRUSH));
                        PRINTRESOURCE(
                                        "Desallocate",
                                        "Brush",
                                        "windows_kill_window",
                                        hbrush
                                   );
                        DeleteObject(hbrush);
                        hpen = SelectObject(hdc, GetStockObject(WHITE_PEN));
                        PRINTRESOURCE(
                                        "Desallocate",
                                        "Pen",
                                        "windows_kill_window",
                                        hpen
                                   );
                        DeleteObject(hpen);
                        DeleteObject(SelectObject(hdc,
                                        GetStockObject(WHITE_BRUSH)));
                        DeleteObject(SelectObject(hdc,
                                        GetStockObject(WHITE_PEN)));
                }

                if (hwnd != GetDesktopWindow()) {
                        PRINTRESOURCE(
                                        "Desallocate",
                                        "window",
                                        "windows_kill_window",
                                        hwnd
                                   );
                        DestroyWindow(hwnd);
                        return(1);
                } else  return(0);
        } else  return(0);
}

void
windows_register_class(void) {
        static  int     registredp = FALSE;
        WNDCLASS wc;

        /*
         *      Register only once
         */

        if (registredp == TRUE)
                return;
        else    registredp = TRUE;

        wc.style         = CS_HREDRAW | CS_VREDRAW | CS_OWNDC | CS_DBLCLKS;
        wc.lpfnWndProc   = TopWndProc;
        wc.cbClsExtra    = 0;
        wc.cbWndExtra    = LLWEXTRA;
        wc.hInstance     = hInst;
        wc.hIcon         = hIcon;
        wc.hCursor       = NULL;
        wc.hbrBackground = (HBRUSH)NULL;
        wc.lpszMenuName  = (LPSTR)NULL;
        wc.lpszClassName = (LPSTR)szNomWin;

        if (!RegisterClass(&wc))
                return;

        wc.style         = CS_HREDRAW | CS_VREDRAW | CS_OWNDC | CS_DBLCLKS;
        wc.lpfnWndProc   = SubWndProc;
        wc.cbClsExtra    = 0;
        wc.cbWndExtra    = LLWEXTRA;
        wc.hInstance     = hInst;
        wc.hIcon         = hIcon;
        wc.hCursor       = NULL;
        wc.hbrBackground = (HBRUSH)NULL;
        wc.lpszMenuName  = (LPSTR)NULL;
        wc.lpszClassName = (LPSTR)szNomSubWin;

        if (!RegisterClass(&wc))
                return;

        wc.style         = CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS;
        wc.lpfnWndProc   = TransWndProc;
        wc.cbClsExtra    = 0;
        wc.cbWndExtra    = LLWEXTRA;
        wc.hInstance     = hInst;
        wc.hIcon         = hIcon;
        wc.hCursor       = NULL;
        wc.hbrBackground = (HBRUSH)NULL;
        wc.lpszMenuName  = (LPSTR)NULL;
        wc.lpszClassName = (LPSTR)szNomTransWin;

        if (!RegisterClass(&wc))
                return;
}

HWND
windows_create_subwindow(LONG  *properties,
                         LPSTR   title,
                         HCURSOR hcursor,
                         SHORT visible,
                         HWND  parent,
                         LONG  lwin) {
        HWND    hwnd;
        DWORD   dwStyle;
        int     x;
        int     y;
        int     w;
        int     h;

        x = (SHORT)properties[0];
        y = (SHORT)properties[1];
        w = (SHORT)properties[2];
        h = (SHORT)properties[3];

        dwStyle = WS_CHILD | WS_CLIPSIBLINGS;

        hwnd = CreateWindow((LPSTR)szNomSubWin,
                            (LPSTR)title,
                            dwStyle,
                            x,
                            y,
                            w,
                            h,
                            (HWND)parent,               /* owner        */
                            (HMENU)WINdisplay->winId,   /* Child-Window */
                            (HANDLE)hInst,              /* instance     */
                            (LPVOID)NULL                /* no params    */
                          );

        if (hwnd != (HWND)NULL) {
                SetWindowInfo(hwnd, BVCursorOffset(hwnd), hcursor);
                SetWindowInfo(hwnd, BVBkGrndOffset(hwnd), 0     );

                if (visible != 0)
                        windows_window_map(hwnd);

                SetWindowLong(hwnd, BVWindowOffset(hwnd), lwin);

                WINdisplay->winId += 1;

                PRINTRESOURCE(
                                "Allocate",
                                "window",
                                "windows_create_subwindow",
                                hwnd
                           );
        }

        return(hwnd);
}

HWND
windows_create_transwindow(SHORT x, SHORT y,
                           SHORT w, SHORT h,
                           HCURSOR hcursor, SHORT visible,
                           HWND parent,  LONG lwin) {
        HWND    hwnd;
        DWORD   dwStyle;

        dwStyle = WS_CHILD;

        hwnd = CreateWindow(
                            (LPSTR)szNomTransWin,
                            (LPSTR)NULL,
                            dwStyle,
                            x,
                            y,
                            w,
                            h,
                            (HWND)parent,               /* owner        */
                            (HMENU)WINdisplay->winId,   /* Child-Window */
                            (HANDLE)hInst,              /* instance     */
                            (LPVOID)NULL                /* no params    */
                          );

        if (hwnd != (HWND) NULL) {
                SetWindowInfo(hwnd, BVCursorOffset(hwnd), hcursor);
                SetWindowInfo(hwnd, BVBkGrndOffset(hwnd), 0);

                if (visible != 0)
                        SetWindowPos(
                                      hwnd,
                                      HWND_TOP,
                                      0, 0, 0, 0,
                                      SWP_NOSIZE     | SWP_NOMOVE   |
                                      SWP_SHOWWINDOW | SWP_NOREDRAW
                                  );

                SetWindowLong(hwnd, BVWindowOffset(hwnd), lwin);

                WINdisplay->winId += 1;

                PRINTRESOURCE(
                                "Allocate",
                                "window",
                                "windows_create_transwindow",
                                hwnd
                           );

        }

        return(hwnd);
}

BOOL
windows_move_window(HWND hwnd, SHORT x, SHORT y) {
        SetWindowPos(
                      hwnd,
                      HWND_TOP,
                      x, y, 0, 0,
                      SWP_NOSIZE | SWP_NOZORDER | SWP_NOREDRAW
                  );
        return(1);
}

BOOL
windows_resize_window(HWND hwnd, SHORT w, SHORT h) {
        SetWindowPos(
                      hwnd,
                      HWND_TOP,
                      0, 0, w, h,
                      SWP_NOMOVE | SWP_NOZORDER | SWP_NOREDRAW
                  );
        return(1);
}

BOOL
windows_moveresize_window(HWND hwnd, SHORT x, SHORT y, SHORT w, SHORT h) {
        SetWindowPos(hwnd, HWND_TOP, x, y, w, h, SWP_NOZORDER | SWP_NOREDRAW);
        return(1);
}

BOOL
windows_clear_window(HWND hwnd, HDC hdc, SHORT x, SHORT y, SHORT w, SHORT h) {
        RECT    rect;
        RECT    rectold;
        HRGN    hrgn;
        HBRUSH  hbrushold;

        hwnd = hwnd;

        GetClipBox(hdc, &rectold);

        rect.left   = x;
        rect.top    = y;
        rect.right  = x + w;
        rect.bottom = y + h;

        SelectClipRgn(hdc, WINdisplay->rgclip);
        hbrushold = CreateSolidBrush(GetBkColor(hdc));
        FillRect(hdc, (LPRECT)&rect, hbrushold);
        DeleteObject(hbrushold);

        hrgn = CreateRectRgnIndirect(&rectold);
        SelectClipRgn(hdc, hrgn);
        DeleteObject(hrgn);

        return(1);
}

BOOL
windows_set_clip(HDC hdc, SHORT x, SHORT y, SHORT w, SHORT h) {
        HRGN    rgclip;

        rgclip = CreateRectRgn(x, y, x + w, y + h);
        SelectClipRgn(hdc, rgclip);
        DeleteObject(rgclip);

        return(1);
}

BOOL
windows_set_clips(HDC hdc, LONG *vx, LONG *vy, LONG *vw, LONG *vh, SHORT n) {
        SHORT   i;
        LPPOINT tpt;
        LPPOINT travpt;
        LPINT   tnb;
        LPINT   travnb;
        HRGN    rgclip;

        if (n <= 0) {
                return 1;
        }

        tpt = (LPPOINT)WINalloc(sizeof(POINT) * 5 * n);

        if (tpt == 0)
                MessageBox((HWND)NULL, "Not enough memory", "set_clips", MB_OK);
        else    {
                tnb = (LPINT)WINalloc(sizeof(int) * n);
                if (tnb == 0) {
                        MessageBox((HWND)NULL, "Not enough memory",
                        "set_clips", MB_OK);
                } else  {
                        travpt = tpt;
                        travnb = tnb;

                        for (i = 0 ; i < n ; i++) {
                                /* tableau des points des polygones */
                                travpt->x = (SHORT)vx[i];
                                travpt->y = (SHORT)vy[i];
                                travpt++;
                                travpt->x = (SHORT)(vx[i] + vw[i]);
                                travpt->y = (SHORT)vy[i];
                                travpt++;
                                travpt->x = (SHORT)(vx[i] + vw[i]);
                                travpt->y = (SHORT)(vy[i] + vh[i]);
                                travpt++;
                                travpt->x = (SHORT)vx[i];
                                travpt->y = (SHORT)(vy[i] + vh[i]);
                                travpt++;
                                travpt->x = (SHORT)vx[i];
                                travpt->y = (SHORT)vy[i];
                                travpt++;

                                /* tableau du nombre de points par polygone */
                                *travnb = 5;
                                travnb++;
                        }

                        rgclip = CreatePolyPolygonRgn(tpt, tnb, n, WINDING);

                        SelectClipRgn(hdc, rgclip);

                        DeleteObject(rgclip);

                        WINfree(tnb);
                }
                WINfree(tpt);
        }

        return(1);
}

HWND
windows_root_window(LONG win) {
        WINdisplay->rootwindow = win;
        return((HWND)GetDesktopWindow());
}

struct  LLDISPLAY *
windows_bitprologue(LONG *vect_args, LONG *allh, SHORT n) {
        HWND    hwnd;
        HDC     hdc;

        if (gl_nbprologue == 0) {
                WINdisplay =
                  (struct LLDISPLAY *)WINalloc(sizeof(struct LLDISPLAY));
                if (WINdisplay == 0)
                        MessageBox(
                                (HWND)NULL,
                                "Not enough memory",
                                "bitprologue",
                                MB_OK);
                else    {
#if     defined(RESOURCES_LOG)
                        (void)strcpy(szLogFile, getenv("LELISP"));
                        (void)strcat(szLogFile, "\\tmp\\resource.log");
                        PRINTINFO("Log file for Resources.\n\n");
#endif  /* RESOURCES_LOG */

                        gl_nbprologue++;

                        PRINTINFO("windows_bitmap_PS_create.\n");

                        /* bitmaps PS */
                        windows_bitmap_PS_create();

                        WINdisplay->WM = vect_args[0];

                        /* Screen width, heigth, depth */
                        WINdisplay->bitxmax = (short)GetSystemMetrics(SM_CXSCREEN);
                        vect_args[0] = WINdisplay->bitxmax - 1;
                        WINdisplay->bitymax = (short)GetSystemMetrics(SM_CYSCREEN);

                        vect_args[1] = WINdisplay->bitymax - 1;

                        WINdisplay->rgclip = CreateRectRgn(
                                0,                      0,
                                WINdisplay->bitxmax,    WINdisplay->bitymax);

                        PRINTRESOURCE(
                                        "Allocate",
                                        "region",
                                        "windows_bitprologue",
                                        WINdisplay->rgclip
                                   );

                        hwnd     = GetDesktopWindow();
                        hdc      = GetDC(hwnd);
                        left_ptr = LoadCursor(hInst, "left-ptr");

                        PRINTRESOURCE(
                                        "Allocate",
                                        "DC",
                                        "windows_bitprologue",
                                        hdc
                                   );

                        WINdisplay->hdcroot = hdc;
                        WINdisplay->cPlanes = (short)GetDeviceCaps(hdc, PLANES);
                        WINdisplay->cBitCount = (short)GetDeviceCaps(hdc, BITSPIXEL);
                        vect_args[2] = WINdisplay->cPlanes * WINdisplay->cBitCount;

                        /* create class window */
                        windows_register_class();

                        /* query fonts */
                        WINdisplay->nFonts=windows_query_fonts(allh, n);

                        WINdisplay->winId = 2;
                }
        }

        return(WINdisplay);
}

BOOL
windows_bitepilogue(struct LLDISPLAY *display) {
        gl_nbprologue--;
        if (gl_nbprologue == 0) {
                PRINTINFO("windows_liberedisplay in windows_bitepilogue.\n");
                windows_liberedisplay(display);
        }
        return(1);
}

BOOL
windows_map_window(HWND hwnd, SHORT x, SHORT y, LONG *vect_args) {
        POINT   point;

        point.x = x;
        point.y = y;
        ScreenToClient(hwnd, (LPPOINT)&point);
        vect_args[0] = MAKELONG(point.x, 0);
        vect_args[1] = MAKELONG(point.y, 0);

        return(1);
}

BOOL
windows_keyboard_focus(HWND hwnd, SHORT focus) {
        if (hwnd == hMainWnd)
                return(1);

        /*
         *      activate or unactivate the parent window.
         */

        while (IsWindow(hwnd) && hwnd != (HWND)NULL)
                if (GetParent(hwnd) == (HWND)NULL) {
                        if (focus && (GetFocus() == hwnd)) {
                                return((BOOL)0);
                        } else  SetFocus(hwnd);

                        return((BOOL)1);

                } else  hwnd = GetParent(hwnd);

        return((BOOL)0);
}

LONG
windows_find_window(SHORT x, SHORT y) {
        HWND    hwnd;
        POINT   point;

        point.x = x;
        point.y = y;

        hwnd = WindowFromPoint(point);

        if ((GetWindowTask(hwnd) == GetWindowTask(hMainWnd)) &&
            (hwnd != hMainWnd))
                return(GetWindowLong(hwnd, BVWindowOffset(hwnd)));
        else    return(WINdisplay->rootwindow);
}

BOOL
windows_free_graph_env(HDC hdc) {
        hdc = hdc;
        return(1);
}

BOOL
windows_liberedisplay(struct LLDISPLAY *display) {
        SHORT   i;
        HPEN    hpen;
        HBRUSH  hbrush;

        /*
         *      kill the allocated fonts.
         */

        (void)SelectObject(hdcmem1, GetStockObject(SYSTEM_FONT));
        (void)SelectObject(hdcmem2, GetStockObject(SYSTEM_FONT));
        (void)SelectObject(display->hdcroot, GetStockObject(SYSTEM_FONT));

        for (i = 0 ; i< display->nFonts ; i++)
                if (aFont[i] != NULL) {
                        PRINTRESOURCE(
                                        "Desallocate",
                                        "font",
                                        "windows_liberedisplay",
                                        aFont[i]
                                   );
                        DeleteObject(aFont[i]);
                }

        if (pfm != 0)
                WINfree((void *)pfm);
        if (aFont != 0)
                WINfree((void *)aFont);

        /*
         *      kill the color palette
         */

        PRINTRESOURCE(
                        "Desallocate",
                        "palette",
                        "windows_liberedisplay",
                        hpalette
                   );

        DeleteObject(hpalette);
        hpalette = (HPALETTE)NULL;
        if (palette != 0)
                WINfree(palette);

        /*
         *      Kill the pen and brush for the root Window
         */

        hbrush = SelectObject(display->hdcroot, GetStockObject(WHITE_BRUSH));
        if (hbrush != 0) {
                PRINTRESOURCE(
                                "Desallocate",
                                "brush",
                                "windows_liberedisplay",
                                hbrush
                           );
                DeleteObject(hbrush);
        }

        hpen = SelectObject(display->hdcroot, GetStockObject(WHITE_PEN));
        if (hpen != 0) {
                PRINTRESOURCE(
                                "Desallocate",
                                "pen",
                                "windows_liberedisplay",
                                hpen
                           );
                DeleteObject(hpen);
        }

        /* liberer le HDC de la root */
        PRINTRESOURCE(
                        "Desallocate",
                        "DC",
                        "windows_liberedisplay",
                        display->hdcroot
                   );
        ReleaseDC(GetDesktopWindow(), display->hdcroot);

        PRINTRESOURCE(
                        "Desallocate",
                        "region",
                        "windows_liberedisplay",
                        display->rgclip
                   );

        DeleteObject(display->rgclip);
        if (display != 0)
                WINfree(display);
        display = NULL;

        /* liberer les bitmap memoire */
        hbrush = SelectObject(hdcmem2, GetStockObject(WHITE_PEN));
        if (hbrush != 0) {
                PRINTRESOURCE(
                                "Desallocate",
                                "brush",
                                "windows_liberedisplay",
                                hbrush
                           );
                DeleteObject(hbrush);
        }

        hpen = SelectObject(hdcmem2, GetStockObject(WHITE_PEN));
        if (hpen != 0) {
                PRINTRESOURCE(
                                "Desallocate",
                                "pen",
                                "windows_liberedisplay",
                                hpen
                           );
                DeleteObject(hpen);
        }
        PRINTRESOURCE(
                        "Desallocate",
                        "DC",
                        "windows_liberedisplay",
                        hdcmem2
                   );
        DeleteDC(hdcmem2);

        hbrush = SelectObject(hdcmem1, GetStockObject(WHITE_PEN));
        if (hbrush != 0) {
                PRINTRESOURCE(
                                "Desallocate",
                                "brush",
                                "windows_liberedisplay",
                                hbrush
                           );
                DeleteObject(hbrush);
        }

        hpen = SelectObject(hdcmem1, GetStockObject(WHITE_PEN));
        if (hpen != 0) {
                PRINTRESOURCE(
                                "Desallocate",
                                "pen",
                                "windows_liberedisplay",
                                hpen
                           );
                DeleteObject(hpen);
        }
        PRINTRESOURCE(
                        "Desallocate",
                        "DC",
                        "windows_liberedisplay",
                        hdcmem1
                   );
        DeleteDC(hdcmem1);

        PRINTRESOURCE(
                        "Desallocate",
                        "mem",
                        "windows_liberedisplay",
                        pDibInfo
                   );
        WINfree(pDibInfo);

        return(1);
}
