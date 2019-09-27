#if     !defined(lint)
static  char *sccsid = "@(#)winevent.c  (c) ELIGIS 2007/02/10";
#endif

/*
 *      winevent.c :
 */

#include <time.h>
#include "winvirbi.h"

#define NO_LL_PROCESS_WM_COMMAND

/* min and max macros */

#define max(a,b)        (((a) > (b)) ? (a) : (b))
#define min(a,b)        (((a) < (b)) ? (a) : (b))

#define CTRLCHAR(x)   ((x) & 0x1F)
#define META            0x1B

struct  WINEvent        LLBufEvent[LGBUFEVENT];

SHORT                   LL_First_Event  = -1;
SHORT                   LL_New_Event    = 0;
SHORT                   LL_Char_Event   = 0;

static  HWND            DownWindow      = NULL;
static  SHORT           downX           = -1;
static  SHORT           downY           = -1;
static  BOOL            dblclks_flag    = FALSE;

extern  BOOL            windows_select_palette(HDC hdc);

extern  HWND            hMainWnd;
extern  SHORT           gl_nbprologue;

#if     defined(LL_PROCESS_WM_COMMAND)
static  void    LL_wm_command(HWND hwnd, UINT msg, WPARAM wParam);
#endif

static  void    LL_wm_move(HWND hwnd, UINT msg);
static  void    LL_wm_size(HWND hwnd, UINT msg, WPARAM wParam);
static  void    LL_wm_show(HWND hwnd, UINT msg, WPARAM wParam);
static  void    LL_wm_paint(HWND hwnd, UINT msg);
static  void    LL_wm_close(HWND hwnd, UINT msg);
static  SHORT   LL_wm_mouse_state(WPARAM wParam);
static  SHORT   LL_mouse_state(void);
static  void    LL_set_pointer(HWND hwnd);
static  void    windows_add_event(void);
static  void    windows_kill_event(void);
static  void    windows_merge_event(void);
static  void    windows_get_next_event(void);
static  LRESULT CALLBACK CommonWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

#if     !defined(NOWIDGETS)
extern  void ScrollCallBack(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
#endif

static void
windows_add_event(void)
{
        if (LL_First_Event < 0)
                LL_First_Event = LL_New_Event;

        if (LL_New_Event >= LGBUFEVENT - 1)
                LL_New_Event  = 0;
        else    LL_New_Event += 1;
}

static void
windows_kill_event(void)
{
        struct WINEvent event;

        if (LL_First_Event >= 0) {

                event = LLBufEvent[LL_First_Event];

                if (event.code == WM_CHAR || event.code == WM_KEYDOWN)
                        if (--LL_Char_Event < 0)
                                LL_Char_Event = 0;

                if (LL_First_Event >= LGBUFEVENT - 1)
                        LL_First_Event  = 0;
                else    LL_First_Event += 1;

                if (LL_First_Event == LL_New_Event) {
                        LL_First_Event  = -1;
                        LL_New_Event    = 0;
                }
        }
}

static void
windows_get_next_event()
{
        MSG     msg;

        while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
        }

        while (LL_First_Event < 0) {
                GetMessage(&msg, NULL, 0, 0);
                TranslateMessage(&msg);
                DispatchMessage(&msg);
        }
}

void
windows_flush_event(void)
{
        MSG     msg;

        while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
        }

        LL_First_Event = -1;
        LL_New_Event   = 0;
        LL_Char_Event  = 0;
}

BOOL
windows_eventp(void)
{
        MSG     msg;

        while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
        }

        if (LL_First_Event >= 0)
                return(1);
        else    return(0);
}

LONG
windows_read_event(LONG *llevent)
{
        LONG    llwin;
        windows_get_next_event();

        llwin = windows_parse_event(llevent, LLBufEvent[LL_First_Event]);
        windows_kill_event();

        return(llwin);
}

LONG
windows_peek_event(LONG *llevent)
{
        LONG    llwin;
        windows_get_next_event();

        llwin = windows_parse_event(llevent, LLBufEvent[LL_First_Event]);

        return(llwin);
}

LONG
windows_parse_event(LONG *llevent, struct WINEvent winevent)
{
        LONG    llwin;

        if (!IsWindow(winevent.hwnd)) {
                llevent[0] = 30L;
                llevent[1] = 0L;
                llevent[2] = 0L;
                llevent[3] = 0L;
                llevent[4] = 0L;
                llevent[5] = 0L;
                llevent[6] = 0L;
                llevent[7] = 0L;
                llevent[8] = 0L;
                llevent[9] = 0L;

                return(0L);
        }

        llevent[1] = 0L;
        llevent[2] = MAKELONG(winevent.detail, 0);
        llevent[3] = MAKELONG(winevent.gx,     0);
        llevent[4] = MAKELONG(winevent.gy,     0);

        llevent[9] = 0L;

        if (winevent.hwnd != hMainWnd) {
                llevent[5] = MAKELONG(winevent.x, 0);
                llevent[6] = MAKELONG(winevent.y, 0);
                llevent[7] = MAKELONG(winevent.w, 0);
                llevent[8] = MAKELONG(winevent.h, 0);

                llwin = GetWindowLong(
                                        winevent.hwnd,
                                        BVWindowOffset(winevent.hwnd)
                                   );
        } else  {
                llevent[5] = MAKELONG(winevent.gx, 0);
                llevent[6] = MAKELONG(winevent.gy, 0);
                llevent[7] = MAKELONG(WINdisplay->bitxmax, 0);
                llevent[8] = MAKELONG(WINdisplay->bitymax, 0);
                llwin = WINdisplay->rootwindow;
        }

        switch(winevent.code) {

        case WM_MOUSEMOVE:
                if (winevent.detail > 0) {
                        llevent[0] = drag_event;
                        llevent[2] = MAKELONG(winevent.detail, 0) - 1;
                } else  llevent[0] = move_event;
                break;

        case WM_CANCELMODE:
                ReleaseCapture();
                return(0L);

        case WM_MOVE:
        case WM_SIZE:
                llevent[0] = modify_event;
                break;

        case WM_SHOWWINDOW:
                if (llevent[2] > 0L)
                        llevent[0] = map_event;         /* iconic -> normal */
                else    llevent[0] = unmap_event;       /* normal -> iconic */
                llevent[2] = 0L;
                break;

        case WM_LBUTTONDOWN:
        case WM_MBUTTONDOWN:
        case WM_RBUTTONDOWN:
                llevent[0] = down_event;
                if (llevent[2] > 0L)
                        llevent[2] = llevent[2] - 1;
                break;

        case WM_LBUTTONDBLCLK:
        case WM_MBUTTONDBLCLK:
        case WM_RBUTTONDBLCLK:
                if (dblclks_flag)
                        llevent[0] = doubleclic_event;
                else    llevent[0] = down_event;
                if (llevent[2] > 0L)
                        llevent[2] = llevent[2] - 1;
                break;

        case WM_LBUTTONUP:
        case WM_MBUTTONUP:
        case WM_RBUTTONUP:
                llevent[0] = up_event;
                if (llevent[2] > 0L)
                        llevent[2] = llevent[2] - 1;
                break;

        case WM_CHAR:
                llevent[0] = ascii_event;
                break;

        case WM_KEYDOWN:
                llevent[0] = fkey_event;
                break;

        case WM_PAINT:
                llevent[0] = repaint_event;
                break;

        case WM_CLOSE:
                llevent[0] = kill_event;
                break;

#if     defined(LL_PROCESS_WM_COMMAND)
        case WM_COMMAND:
                llevent[0] = command_event;
                break;
#endif
        }

        return(llwin);

}

/*
 *      Common actions for top-windows, sub-windows and transparent-windows.
 */

static LRESULT CALLBACK
CommonWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{

        switch(msg) {

        case WM_MOUSEMOVE:
                LL_set_pointer(hwnd);
                if (LL_New_Event < 10)
                        LL_wm_mouse_move(hwnd, msg, wParam, lParam);
                break;

        case WM_LBUTTONDOWN:
        case WM_MBUTTONDOWN:
        case WM_RBUTTONDOWN:
                LL_wm_mouse_down(hwnd, msg, wParam, lParam);
                if (WINdisplay->WM)
                        SetActiveWindow(hwnd);
                return(1L);

        case WM_LBUTTONDBLCLK:
        case WM_MBUTTONDBLCLK:
        case WM_RBUTTONDBLCLK:
                if (dblclks_flag)
                        LL_wm_mouse_dblclks(hwnd, msg, wParam, lParam);
                else    {
                        LL_wm_mouse_down(hwnd, msg, wParam, lParam);
                        if (WINdisplay->WM)
                                SetActiveWindow(hwnd);
                }
                return(1L);

        case WM_LBUTTONUP:
                LL_wm_mouse_up(hwnd, msg, wParam | MK_LBUTTON, lParam);
                return(1L);

        case WM_MBUTTONUP:
                LL_wm_mouse_up(hwnd, msg, wParam | MK_MBUTTON, lParam);
                return(1L);

        case WM_RBUTTONUP:
                LL_wm_mouse_up(hwnd, msg, wParam | MK_RBUTTON, lParam);
                return(1L);

        case WM_CHAR:
                LL_wm_char(hwnd, msg, wParam);
                return(1L);

        case WM_KEYDOWN:
                LL_wm_key(hwnd, msg, wParam);
                return(1L);

        case WM_SYSKEYUP:
                /*
                 *      Convert to key (special hack to support f10 key).
                 */
                LL_wm_key(hwnd, WM_KEYDOWN, wParam);
                return(1L);

        case WM_ICONERASEBKGND:
                return(1L);

        case WM_ERASEBKGND:
                return(1L);

#if     !defined(NOWIDGETS)
        case WM_HSCROLL :
        case WM_VSCROLL :
                (void)ScrollCallBack(hwnd, msg, wParam, lParam);
                break;
#endif
        }

        return((LONG)(LRESULT)DefWindowProc(hwnd, msg, wParam, lParam));
}

/*
 *      Actions specific to top-windows
 */

LRESULT CALLBACK
TopWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
        HDC      hdc;
        HPALETTE hOldPal;
        BOOL     fRealized;

        switch(msg) {

        case WM_PAINT:
                LL_wm_paint(hwnd, msg);
                return(0L);

        case WM_MOVE:
                LL_wm_move(hwnd, msg);
                return(0L);

        case WM_SIZE:
                LL_wm_size(hwnd, msg, wParam);
                return(0L);

        case WM_SHOWWINDOW:
                LL_wm_show(hwnd, msg, wParam);
                return(0L);

        case WM_CLOSE:
                LL_wm_close(hwnd, msg);
                return(0L);

        case WM_PALETTECHANGED:
                if (hwnd == (HWND)wParam)
                        return(0L);

        case WM_QUERYNEWPALETTE :
                // BoundChecker : Resource Leakage ??
                hdc       = GetDC(hwnd);
                hOldPal   = SelectPalette(hdc, hpalette, 0);
                fRealized = RealizePalette(hdc);

                SelectPalette(hdcmem1, hpalette, 0);
                RealizePalette(hdcmem1);
                SelectPalette(hdcmem2, hpalette, 0);
                RealizePalette(hdcmem2);

                SelectPalette(hdc, hOldPal, 0);
                ReleaseDC(hwnd, hdc);

                return(0L);

        case WM_PALETTEISCHANGING:
                break;

#if     defined(LL_PROCESS_WM_COMMAND)
        case WM_COMMAND:
                LL_wm_command(hwnd, msg, wParam);
                return(0L);
#endif

        }

        return(CommonWndProc(hwnd, msg, wParam, lParam));
}

/*
 *      Actions specific to sub-windows
 */

LRESULT CALLBACK
SubWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
        switch(msg) {
        case WM_PAINT:
                LL_wm_paint(hwnd, msg);
                return(0L);
        }

        return(CommonWndProc(hwnd, msg, wParam, lParam));
}

/*
 *      Actions specific to transparent-windows
 */

LRESULT CALLBACK
TransWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
        PAINTSTRUCT     ps;

        switch(msg) {
        case WM_PAINT:
                /* no repaint */
                BeginPaint(hwnd, (LPPAINTSTRUCT) &ps);
                EndPaint(hwnd, (LPPAINTSTRUCT) &ps);
                return(0L);
        }

        return(CommonWndProc(hwnd, msg, wParam, lParam));
}

void
LL_wm_char(HWND hwnd, UINT msg, WPARAM wParam)
{
        RECT    rect;
        POINT   lPoint;
        POINT   gPoint;

        if (!IsWindow(hwnd))
                return;

        if ((LL_First_Event != LL_New_Event) && (LL_New_Event >= 0)) {
                GetCursorPos(&gPoint);
                lPoint = gPoint;
                ClientToScreen(hwnd, &lPoint);
                GetClientRect(hwnd, &rect);

                LLBufEvent[LL_New_Event].code   = msg;
                LLBufEvent[LL_New_Event].hwnd   = hwnd;
                LLBufEvent[LL_New_Event].x      = (SHORT)lPoint.x;
                LLBufEvent[LL_New_Event].y      = (SHORT)lPoint.y;
                LLBufEvent[LL_New_Event].gx     = (SHORT)gPoint.x;
                LLBufEvent[LL_New_Event].gy     = (SHORT)gPoint.y;
                LLBufEvent[LL_New_Event].w      = (SHORT)(rect.right-rect.left);
                LLBufEvent[LL_New_Event].h      = (SHORT)(rect.bottom-rect.top);
                LLBufEvent[LL_New_Event].detail = (UINT)wParam;
                windows_add_event();

                /*
                 * add one char event, mainly used by WINtys.
                 */

                LL_Char_Event++;
        }
}

void
LL_wm_key(HWND hwnd, UINT msg, WPARAM wParam)
{
        if (gl_nbprologue != 0) {
                /*
                 *      Standard BV action
                 */
                if (((wParam >= VK_F1) && (wParam <= VK_F16)) ||
                    ((wParam >= VK_PRIOR) && (wParam <= VK_DELETE)))
                        LL_wm_char(hwnd, msg, wParam);
        } else  if ((wParam >= VK_F1) && (wParam <= VK_F16))
                        LL_wm_char(hwnd, msg, wParam);
                else    switch(wParam) {
                        case VK_PRIOR   :
                                LL_wm_char(hwnd, WM_CHAR, META);
                                LL_wm_char(hwnd, WM_CHAR, (UINT)'v');
                                break;
                        case VK_NEXT    :
                                LL_wm_char(hwnd, WM_CHAR, CTRLCHAR('V'));
                                break;
                        case VK_END     :
                                LL_wm_char(hwnd, WM_CHAR, META);
                                LL_wm_char(hwnd, WM_CHAR, (UINT)'>');
                                break;
                        case VK_HOME    :
                                LL_wm_char(hwnd, WM_CHAR, META);
                                LL_wm_char(hwnd, WM_CHAR, (UINT)'<');
                                break;
                        case VK_LEFT    :
                                LL_wm_char(hwnd, WM_CHAR, CTRLCHAR('B'));
                                break;
                        case VK_UP      :
                                LL_wm_char(hwnd, WM_CHAR, CTRLCHAR('P'));
                                break;
                        case VK_RIGHT   :
                                LL_wm_char(hwnd, WM_CHAR, CTRLCHAR('F'));
                                break;
                        case VK_DOWN    :
                                LL_wm_char(hwnd, WM_CHAR, CTRLCHAR('N'));
                                break;
                        case VK_INSERT  :
                                LL_wm_char(hwnd, WM_CHAR, META);
                                LL_wm_char(hwnd, WM_CHAR, (UINT)'I');
                                break;
                        case VK_DELETE  :
                                LL_wm_char(hwnd, WM_CHAR, CTRLCHAR('D'));
                                break;
                }
}

void
LL_wm_mouse_move(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
        RECT    rect;
        POINT   gpoint;
        POINT   lpoint;
        int     state;

        if (!IsWindow(hwnd))
                return;

        if ((!IsIconic(hwnd) || (hwnd == hMainWnd))
            && (LL_First_Event != LL_New_Event)
            && (LL_New_Event >= 0)) {
                lpoint.x = LOWORD(lParam);
                lpoint.y = HIWORD(lParam);

                gpoint   = lpoint;

                ClientToScreen(hwnd, &gpoint);

                if ((downX==(SHORT)gpoint.x) && (downY==(SHORT)gpoint.y))
                        return;

                downX = downY -1;
                state = LL_wm_mouse_state(wParam);
                GetClientRect(hwnd, &rect);

                LLBufEvent[LL_New_Event].hwnd   = hwnd;
                LLBufEvent[LL_New_Event].x      = (SHORT)lpoint.x;
                LLBufEvent[LL_New_Event].y      = (SHORT)lpoint.y;
                LLBufEvent[LL_New_Event].w      = (SHORT)(rect.right-rect.left);
                LLBufEvent[LL_New_Event].h      = (SHORT)(rect.bottom-rect.top);
                LLBufEvent[LL_New_Event].gx     = (SHORT)gpoint.x;
                LLBufEvent[LL_New_Event].gy     = (SHORT)gpoint.y;
                LLBufEvent[LL_New_Event].detail = state;
                LLBufEvent[LL_New_Event].code   = msg;
                windows_add_event();

        } else  DefWindowProc(hwnd, msg, wParam, lParam);

}

void
LL_wm_mouse_up(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
        RECT    rect;
        POINT   gpoint;
        POINT   lpoint;
        int     state;

        ReleaseCapture();
        DownWindow = NULL;

        if (!IsWindow(hwnd))
                return;

        if ((LL_First_Event != LL_New_Event) && (LL_New_Event >= 0)) {
                lpoint.x = LOWORD(lParam);
                lpoint.y = HIWORD(lParam);

                gpoint = lpoint;
                ClientToScreen(hwnd, &gpoint);
                GetClientRect(hwnd, &rect);
                state = LL_wm_mouse_state(wParam);

                LLBufEvent[LL_New_Event].hwnd   = hwnd;
                LLBufEvent[LL_New_Event].x      = (SHORT)lpoint.x;
                LLBufEvent[LL_New_Event].y      = (SHORT)lpoint.y;
                LLBufEvent[LL_New_Event].w      = (SHORT)(rect.right-rect.left);
                LLBufEvent[LL_New_Event].h      = (SHORT)(rect.bottom-rect.top);
                LLBufEvent[LL_New_Event].gx     = (SHORT)gpoint.x;
                LLBufEvent[LL_New_Event].gy     = (SHORT)gpoint.y;
                LLBufEvent[LL_New_Event].detail = state;
                LLBufEvent[LL_New_Event].code   = msg;
                windows_add_event();
        }

}

void
LL_wm_mouse_down(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
        RECT    rect;
        POINT   gpoint;
        POINT   lpoint;
        UINT    state;

        SetCapture(hwnd);

        if (!IsWindow(hwnd))
                return;

        if ((LL_First_Event != LL_New_Event) && (LL_New_Event >= 0)) {
                lpoint.x   = LOWORD(lParam);
                lpoint.y   = HIWORD(lParam);
                gpoint     = lpoint;
                DownWindow = hwnd;
                ClientToScreen(hwnd, &gpoint);
                downX = (SHORT)gpoint.x;
                downY = (SHORT)gpoint.y;
                GetClientRect(hwnd, &rect);
                state = LL_wm_mouse_state(wParam);

                LLBufEvent[LL_New_Event].hwnd   = hwnd;
                LLBufEvent[LL_New_Event].x      = (SHORT)lpoint.x;
                LLBufEvent[LL_New_Event].y      = (SHORT)lpoint.y;
                LLBufEvent[LL_New_Event].w      = (SHORT)(rect.right-rect.left);
                LLBufEvent[LL_New_Event].h      = (SHORT)(rect.bottom-rect.top);
                LLBufEvent[LL_New_Event].gx     = (SHORT)gpoint.x;
                LLBufEvent[LL_New_Event].gy     = (SHORT)gpoint.y;
                LLBufEvent[LL_New_Event].detail = state;
                LLBufEvent[LL_New_Event].code   = msg;
                windows_add_event();
        }
}

void
LL_wm_mouse_dblclks(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
        RECT    rect;
        POINT   gpoint;
        POINT   lpoint;
        UINT    state;

        SetCapture(hwnd);

        if (!IsWindow(hwnd))
                return;

        if ((LL_First_Event != LL_New_Event) && (LL_New_Event >= 0)) {
                lpoint.x   = LOWORD(lParam);
                lpoint.y   = HIWORD(lParam);
                gpoint     = lpoint;
                DownWindow = hwnd;
                ClientToScreen(hwnd, &gpoint);
                downX = (SHORT)gpoint.x;
                downY = (SHORT)gpoint.y;
                GetClientRect(hwnd, &rect);
                state = LL_wm_mouse_state(wParam);

                LLBufEvent[LL_New_Event].hwnd   = hwnd;
                LLBufEvent[LL_New_Event].x      = (SHORT)lpoint.x;
                LLBufEvent[LL_New_Event].y      = (SHORT)lpoint.y;
                LLBufEvent[LL_New_Event].w      = (SHORT)(rect.right-rect.left);
                LLBufEvent[LL_New_Event].h      = (SHORT)(rect.bottom-rect.top);
                LLBufEvent[LL_New_Event].gx     = (SHORT)gpoint.x;
                LLBufEvent[LL_New_Event].gy     = (SHORT)gpoint.y;
                LLBufEvent[LL_New_Event].detail = state;
                LLBufEvent[LL_New_Event].code   = msg;
                windows_add_event();
        }
}

static  SHORT
LL_wm_mouse_state(WPARAM wParam)
{
        SHORT   mstate = 0;

        if (MK_LBUTTON & wParam) {
                if (MK_RBUTTON & wParam)
                        mstate = 2;
                else    mstate = 1;
        } else  if (MK_RBUTTON & wParam)
                        mstate = 3;
                else    if (MK_MBUTTON & wParam)
                        mstate = 2;

        if (mstate > 0) {
                if (GetKeyState(VK_MENU) < 0)
                        mstate =  2;
                if (MK_SHIFT & wParam)
                        mstate += 3;
                if (MK_CONTROL & wParam)
                        mstate += 6;
        }

        return(mstate);
}

static  void
LL_wm_move(HWND hwnd, UINT msg)
{
        RECT    rect;
        POINT   point;

        if (!IsWindow(hwnd))
                return;

        if (LL_First_Event == LL_New_Event)
                return;

        point.x = 0;
        point.y = 0;
        ClientToScreen(hwnd, &point);
        GetClientRect(hwnd, &rect);

        if ((rect.right > 0) && (rect.bottom > 0)) {
                LLBufEvent[LL_New_Event].code   = msg;
                LLBufEvent[LL_New_Event].hwnd   = hwnd;
                LLBufEvent[LL_New_Event].x      = (SHORT)point.x;
                LLBufEvent[LL_New_Event].y      = (SHORT)point.y;
                LLBufEvent[LL_New_Event].gx     = (SHORT)point.x;
                LLBufEvent[LL_New_Event].gy     = (SHORT)point.y;
                LLBufEvent[LL_New_Event].w      = (SHORT)(rect.right-rect.left);
                LLBufEvent[LL_New_Event].h      = (SHORT)(rect.bottom-rect.top);
                LLBufEvent[LL_New_Event].detail = 0;
                windows_add_event();
        }
}

static  void
LL_wm_size(HWND hwnd, UINT msg, WPARAM wParam)
{
        RECT    rect;
        POINT   point;

        if (!IsWindow(hwnd))
                return;

        if (LL_First_Event == LL_New_Event)
                return;

        point.x = 0;
        point.y = 0;

        ClientToScreen(hwnd, &point);
        GetClientRect(hwnd, &rect);

        if ((rect.right <= 0) || (rect.bottom <= 0))
                return;

        if (LL_New_Event < 0)
                return;

        if (wParam & SIZE_MINIMIZED) {
                if (GetWindowInfo(hwnd,BVWStateOffset(hwnd))==SIZE_RESTORED) {
                        LLBufEvent[LL_New_Event].code   = WM_SHOWWINDOW;
                        LLBufEvent[LL_New_Event].detail = 0;
                        SetWindowInfo(hwnd,BVWStateOffset(hwnd),SIZE_MINIMIZED);
                } else  return;
        } else  {
                if (GetWindowInfo(hwnd,BVWStateOffset(hwnd))==SIZE_MINIMIZED) {
                        LLBufEvent[LL_New_Event].code   = WM_SHOWWINDOW;
                        LLBufEvent[LL_New_Event].detail = 1;
                        SetWindowInfo(hwnd,BVWStateOffset(hwnd),SIZE_RESTORED);
                } else  {
                        LLBufEvent[LL_New_Event].code   = msg;
                        LLBufEvent[LL_New_Event].detail = 1;
                        SetWindowInfo(hwnd,BVWStateOffset(hwnd),SIZE_RESTORED);
                }
        }

        LLBufEvent[LL_New_Event].hwnd = hwnd;
        LLBufEvent[LL_New_Event].x    = (SHORT)point.x;
        LLBufEvent[LL_New_Event].y    = (SHORT)point.y;
        LLBufEvent[LL_New_Event].gx   = (SHORT)point.x;
        LLBufEvent[LL_New_Event].gy   = (SHORT)point.y;
        LLBufEvent[LL_New_Event].w    = (SHORT)(rect.right  - rect.left);
        LLBufEvent[LL_New_Event].h    = (SHORT)(rect.bottom - rect.top);

        windows_add_event();
}

static  void
LL_wm_show(HWND hwnd, UINT msg, WPARAM wParam)
{
        RECT    rect;
        POINT   point;

        if (!IsWindow(hwnd))
                return;

        if (LL_First_Event == LL_New_Event)
                return;

        point.x = 0;
        point.y = 0;
        ClientToScreen(hwnd, &point);
        GetClientRect(hwnd, &rect);

        if ((rect.right <= 0) || (rect.bottom <= 0))
                return;

        if (LL_New_Event < 0)
                return;

        LLBufEvent[LL_New_Event].code   = msg;
        LLBufEvent[LL_New_Event].hwnd   = hwnd;
        LLBufEvent[LL_New_Event].x      = (SHORT)point.x;
        LLBufEvent[LL_New_Event].y      = (SHORT)point.y;
        LLBufEvent[LL_New_Event].gx     = (SHORT)point.x;
        LLBufEvent[LL_New_Event].gy     = (SHORT)point.y;
        LLBufEvent[LL_New_Event].w      = (SHORT)(rect.right - rect.left);
        LLBufEvent[LL_New_Event].h      = (SHORT)(rect.bottom - rect.top);
        LLBufEvent[LL_New_Event].detail = (UINT)wParam;

        windows_add_event();
}

static  void
LL_wm_paint(HWND hwnd, UINT msg)
{
        HDC             hdc;
        PAINTSTRUCT     ps;
        SHORT           backcolor;
        RECT            rectold;
        HRGN            hrgn;
        HBRUSH          hbrushold;

        if (IsWindow(hwnd)) {
                // BoundChecker: Resource Leakage !!
                hdc = GetDC(hwnd);

                /* clear background */

                backcolor = (SHORT)GetWindowInfo(hwnd, BVBkGrndOffset(hwnd));

                GetClipBox(hdc, &rectold);

                SelectClipRgn(hdc, WINdisplay->rgclip);

                windows_select_palette(hdc);

                BeginPaint(hwnd, (LPPAINTSTRUCT)&ps);

                hbrushold = CreateSolidBrush(PALETTEINDEX(backcolor));
                FillRect(hdc, (LPRECT)&ps.rcPaint, hbrushold);
                DeleteObject(hbrushold);

                hrgn = CreateRectRgnIndirect(&rectold);
                SelectClipRgn(hdc, hrgn);
                DeleteObject(hrgn);

                EndPaint(hwnd, (LPPAINTSTRUCT)&ps);
                ReleaseDC(hwnd, hdc);

                if (LL_First_Event == LL_New_Event)
                        return;

                if (LL_New_Event < 0)
                        return;

                LLBufEvent[LL_New_Event].hwnd = hwnd;
                LLBufEvent[LL_New_Event].code = msg;
                LLBufEvent[LL_New_Event].x  = (SHORT)ps.rcPaint.left;
                LLBufEvent[LL_New_Event].y  = (SHORT)ps.rcPaint.top;
                LLBufEvent[LL_New_Event].gx = (SHORT)ps.rcPaint.left;
                LLBufEvent[LL_New_Event].gy = (SHORT)ps.rcPaint.top;
                LLBufEvent[LL_New_Event].w  = (SHORT)(ps.rcPaint.right - ps.rcPaint.left);
                LLBufEvent[LL_New_Event].h  = (SHORT)(ps.rcPaint.bottom - ps.rcPaint.top);
                LLBufEvent[LL_New_Event].detail = 0;
                windows_merge_event();
        }
}

static  void
LL_wm_close(HWND hwnd, UINT msg)
{
        if (IsWindow(hwnd)) {
                if ((LL_First_Event != LL_New_Event) && (LL_New_Event >= 0)) {
                        LLBufEvent[LL_New_Event].hwnd   = hwnd;
                        LLBufEvent[LL_New_Event].code   = msg;
                        LLBufEvent[LL_New_Event].x      = 0;
                        LLBufEvent[LL_New_Event].y      = 0;
                        LLBufEvent[LL_New_Event].gx     = 0;
                        LLBufEvent[LL_New_Event].gy     = 0;
                        LLBufEvent[LL_New_Event].w      = 0;
                        LLBufEvent[LL_New_Event].h      = 0;
                        LLBufEvent[LL_New_Event].detail = 0;
                        windows_add_event();
                }
        }
}

#if     defined(LL_PROCESS_WM_COMMAND)
static void
LL_wm_command(HWND hwnd, UINT msg, WPARAM wParam)
{
        if (IsWindow(hwnd)) {
                if ((LL_First_Event != LL_New_Event) && (LL_New_Event >= 0)) {
                        LLBufEvent[LL_New_Event].hwnd   = hwnd;
                        LLBufEvent[LL_New_Event].code   = msg;
                        LLBufEvent[LL_New_Event].x      = 0;
                        LLBufEvent[LL_New_Event].y      = 0;
                        LLBufEvent[LL_New_Event].gx     = 0;
                        LLBufEvent[LL_New_Event].gy     = 0;
                        LLBufEvent[LL_New_Event].w      = 0;
                        LLBufEvent[LL_New_Event].h      = 0;
                        LLBufEvent[LL_New_Event].detail = (UINT)wParam;
                        windows_add_event();
                }
        }
}
#endif

static  void
LL_set_pointer(HWND hwnd)
{
        HWND    hwPa = hwnd;

        if (hwPa == hMainWnd || hwPa == (HWND)0)
                return;

        /*
         *      Get the first windows with a non default cursor.
         *      This is a simulation of X11 behavior.
         */

        while (IsWindow(hwPa) && (hwPa != (HWND)NULL)) {
             if ((HCURSOR)GetWindowInfo(hwPa,BVCursorOffset(hwPa))!=left_ptr) {
                 SetCursor((HCURSOR)GetWindowInfo(hwPa,BVCursorOffset(hwPa)));
                 return;
             }
             hwPa = GetParent(hwPa);
        }

        if (IsWindow(hwnd) && hwnd != hMainWnd)
                SetCursor((HCURSOR)GetWindowInfo(hwnd,BVCursorOffset(hwnd)));
}

static  SHORT
LL_mouse_state(void)
{
        SHORT   mstate = 0;

        if (GetKeyState(VK_LBUTTON) < 0) {
                mstate = 1;
                if (GetKeyState(VK_RBUTTON) < 0)
                        mstate = 2;
        } else  if (GetKeyState(VK_RBUTTON) < 0)
                        mstate = 3;
                else if (GetKeyState(VK_MBUTTON) < 0)
                        mstate = 2;

        if (mstate > 0) {
                if (GetKeyState(VK_SHIFT) < 0)
                        mstate += 3;
                if (GetKeyState(VK_CONTROL) < 0)
                        mstate += 6;
        }

        return(mstate);
}

LONG
windows_read_mouse(LONG *llevent)
{
        MSG     msg;
        POINT   gpoint;
        POINT   lpoint;
        HWND    hwnd;
        RECT    rect;
        UINT    state;

        while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
        }

        GetCursorPos(&gpoint);
        lpoint = gpoint;
        llevent[3] = MAKELONG(gpoint.x, 0);
        llevent[4] = MAKELONG(gpoint.y, 0);

        hwnd = WindowFromPoint(gpoint);

        ScreenToClient(hwnd, &lpoint);
        GetClientRect(hwnd, &rect);
        state = LL_mouse_state();
        llevent[1] = 0L;
        llevent[2] = state;

        llevent[9] = 0L;
        if ((GetWindowTask(hwnd)==GetWindowTask(hMainWnd))
           && (hwnd!=hMainWnd)) {
                llevent[5] = MAKELONG(lpoint.x, 0);
                llevent[6] = MAKELONG(lpoint.y, 0);
                llevent[7] = MAKELONG(rect.right -  rect.left, 0);
                llevent[8] = MAKELONG(rect.bottom - rect.top, 0);
                return(GetWindowLong(hwnd, BVWindowOffset(hwnd)));
        } else  {
                llevent[5] = MAKELONG(gpoint.x, 0);
                llevent[6] = MAKELONG(gpoint.y, 0);
                llevent[7] = MAKELONG(WINdisplay->bitxmax, 0);
                llevent[8] = MAKELONG(WINdisplay->bitymax, 0);
                return(WINdisplay->rootwindow);
        }
}

BOOL
windows_grab_event(HWND hwnd)
{
        if (IsWindow(hwnd)) {
                SetCapture(hwnd);
                return(1);
        } else  {
                return(0);
        }
}

BOOL
windows_ungrab_event(void)
{
        ReleaseCapture();
        return(0);
}

BOOL
windows_move_cursor(SHORT x, SHORT y)
{
        SetCursorPos(x, y);
        return(1);
}

SHORT
windows_event_tyi(void)
{
        SHORT   achar = 0;

        while (!(LL_First_Event < 0 || achar)) {

                switch(LLBufEvent[LL_First_Event].code) {
                case WM_CHAR:
                        achar = (SHORT)LLBufEvent[LL_First_Event].detail;
                        break;
                case WM_KEYDOWN:
                        achar = (SHORT)LLBufEvent[LL_First_Event].detail;
                        break;
                }

                windows_kill_event();
        }

        return(achar);
}

static void
windows_merge_event(void)
{
        SHORT   Last_Event;
        struct  WINEvent event0;
        struct  WINEvent event1;
        SHORT   w;
        SHORT   h;
        BOOL    merge   = FALSE;

        if (LL_First_Event >= 0) {
                if (LL_New_Event == 0)
                        Last_Event = LGBUFEVENT - 1;
                else    Last_Event = (SHORT)(LL_New_Event - 1);
                event0 = LLBufEvent[Last_Event];
                event1 = LLBufEvent[LL_New_Event];
                if (event1.hwnd == event0.hwnd) {
                        if (event0.code == WM_PAINT) {
                                w = max(event0.x + event0.w,
                                         event1.x + event1.w);
                                h = max(event0.y + event0.h,
                                         event1.y + event1.h);
                                event0.x  = min(event0.x, event1.x);
                                event0.y  = min(event0.y, event1.y);
                                event0.gx = event0.x;
                                event0.gy = event0.y;
                                event0.w  = w - event0.x;
                                event0.h  = h - event0.y;
                                merge     = TRUE;
                        }
                }
        }

        if (!merge)
                windows_add_event();
}

BOOL
windows_dblclks_flag(SHORT flag)
{
        dblclks_flag = flag;
        return(0);
}
