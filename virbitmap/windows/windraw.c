#if     !defined(lint)
static  char *sccsid = "@(#)windraw.c   (c) ELIGIS 2003/05/25";
#endif

/*
 *      windraw.c :
 */

#include "winvirbi.h"

static  LONG    Arrondi(double n);

static  LONG
Arrondi(double n) {
        return((LONG)floor(n + 0.5));
}

/*
 *      draw char / string with background
 */

BOOL
windows_draw_cn(HWND hwnd, HDC hdc, SHORT x, SHORT y, SHORT cn) {
        static char st[] = "?";

        (void)hwnd;

        st[0] = (CHAR)cn;

        LLCachedSetPalette(hdc);
        return((BOOL)TextOut(hdc, x, y, st, 1));
}

BOOL
windows_draw_string(HWND hwnd,
                    HDC hdc,
                    SHORT x,
                    SHORT y,
                    LPSTR txt,
                    SHORT start,
                    SHORT l) {
        hwnd = hwnd;

        if (start > 0)
                txt += start;

        LLCachedSetPalette(hdc);
        return ((BOOL)TextOut(hdc, x, y, txt, l));
}

/*
 *      draw char / string with no background
 */

BOOL
windows_draw_cn_noback(HWND hwnd, HDC hdc, SHORT x, SHORT y, SHORT cn) {
        static  char    st[] = "?";
        int             nBackMode = GetBkMode(hdc);
        BOOL            res;

        hwnd = hwnd;

        st[0] = (CHAR)cn;

        SetBkMode(hdc, TRANSPARENT);
        res = (BOOL)TextOut(hdc, x, y, st, 1);
        SetBkMode(hdc, nBackMode);

        return(res);
}

BOOL
windows_draw_string_noback(HWND hwnd,
                           HDC hdc,
                           SHORT x,
                           SHORT y,
                           LPSTR txt,
                           SHORT start,
                           SHORT l) {
        int     nBackMode = GetBkMode(hdc);
        BOOL    res;

        hwnd = hwnd;
        if (start > 0)
                txt += start;

        SetBkMode(hdc, TRANSPARENT);
        res = (BOOL)TextOut(hdc, x, y, txt, l);
        SetBkMode(hdc, nBackMode);

        return(res);
}

BOOL
windows_draw_point(HWND hwnd, HDC hdc, SHORT x, SHORT y) {
        hwnd = hwnd;
        LLCachedSetPalette(hdc);
        SetPixelV(hdc, x, y, GetTextColor(hdc));
        return(1);
}

BOOL
windows_draw_points(HWND  hwnd,
                    HDC   hdc,
                    LONG  *vx,
                    LONG  *vy,
                    SHORT n,
                    SHORT dx,
                    SHORT dy) {
        SHORT    i;
        COLORREF color;

        LLCachedSetPalette(hdc);

        hwnd  = hwnd;
        color = GetTextColor(hdc);

        for (i = 0 ; i < n ; i++)
                SetPixelV(hdc, (SHORT)vx[i]+dx, (SHORT)vy[i]+dy, color);
        return(1);
}

BOOL
windows_draw_line(HWND hwnd, HDC hdc, SHORT x1, SHORT y1, SHORT x2, SHORT y2) {
        hwnd = hwnd;

        LLCachedSetPalette(hdc);

        MoveTo(hdc, x1, y1);
        LineTo(hdc, x2, y2);
        SetPixelV(hdc, x2, y2, GetTextColor(hdc));
        return(1);
}

BOOL
windows_draw_lines(HWND  hwnd,
                   HDC   hdc,
                   LONG  *vx,
                   LONG  *vy,
                   SHORT n,
                   SHORT dx,
                   SHORT dy) {
        SHORT    i;
        LONG     x1;
        LONG     y1;
        COLORREF color;

        LLCachedSetPalette(hdc);

        hwnd  = hwnd;
        color = GetTextColor(hdc);

        x1 = (SHORT)vx[0] + dx;
        y1 = (SHORT)vy[0] + dy;
        MoveTo(hdc, x1, y1);
        for (i = 1; i < n; i++) {
                x1 = (SHORT)vx[i] + dx;
                y1 = (SHORT)vy[i] + dy;
                LineTo(hdc, x1, y1);
                SetPixelV(hdc, x1, y1, color);
        }
        return(1);
}

BOOL
windows_draw_segments(HWND  hwnd,
                      HDC   hdc,
                      LONG  *vx1,
                      LONG  *vy1,
                      LONG  *vx2,
                      LONG  *vy2,
                      SHORT n,
                      SHORT dx,
                      SHORT dy) {
        SHORT    i;
        LONG     x1;
        LONG     y1;
        LONG     x2;
        LONG     y2;
        COLORREF color;

        LLCachedSetPalette(hdc);

        hwnd  = hwnd;
        color = GetTextColor(hdc);

        for (i = 0 ; i < n ; i++) {
                x1 = (SHORT)vx1[i] + dx;
                y1 = (SHORT)vy1[i] + dy;
                MoveTo(hdc, x1, y1);
                x2 = (SHORT)vx2[i] + dx;
                y2 = (SHORT)vy2[i] + dy;
                LineTo(hdc, x2, y2);
                SetPixelV(hdc, x2, y2, color);
        }

        return(1);
}

BOOL
windows_draw_rectangle(HWND hwnd, HDC hdc, SHORT x, SHORT y, SHORT w, SHORT h) {
        HBRUSH hbrold;

        hwnd    = hwnd;

        if ((w >= 0) && (h >= 0)) {
                LLCachedSetPalette(hdc);

                hbrold = SelectObject(hdc, GetStockObject(NULL_BRUSH));

                if (h == 0) {
                        MoveTo(hdc, x, y);
                        LineTo(hdc, x + w + 1, y);
                } else  if (w == 0) {
                        MoveTo(hdc, x, y);
                        LineTo(hdc, x, y + h + 1);
                } else  {
                        Rectangle(hdc, x, y, x + w + 1, y + h + 1);
                }

                if (hbrold != 0)
                        DeleteObject(SelectObject(hdc, hbrold));
        }

        return(1);
}

BOOL
windows_draw_rectangles(HWND  hwnd,
                        HDC   hdc,
                        LONG  *vx,
                        LONG  *vy,
                        LONG  *vw,
                        LONG  *vh,
                        SHORT n,
                        SHORT dx,
                        SHORT dy,
                        SHORT flag) {
        SHORT   i;
        int     x1;
        int     y1;
        int     x2;
        int     y2;
        int     xx;
        int     yy;
        HBRUSH  hbrold;

        hwnd    = hwnd;

        xx      = (int)((SHORT)vx[0] + dx);
        yy      = (int)((SHORT)vy[0] + dy);

        hbrold  = SelectObject(hdc, GetStockObject(NULL_BRUSH));

        LLCachedSetPalette(hdc);

        for (i = 0 ; i < n ; i++) {
                if (flag & 1)
                        x1 = (SHORT)vx[i] + dx;
                else    x1 = xx;

                if (flag & 2)
                        y1 = (SHORT)vy[i] + dy;
                else    y1 = yy;

                if (flag & 4)
                        x2 =  x1 + (SHORT)vw[i] + 1;
                else    x2 =  x1 + (SHORT)vw[0] + 1;

                if (flag & 8)
                        y2 = y1 + (SHORT)vh[i] + 1;
                else    y2 = y1 + (SHORT)vh[0] + 1;

                if (x2 == 1)
                        x2++;   /* to draw a line even a dim == 1 */
                if (y2 == 1)
                        y2++;   /* to draw a line even a dim == 1 */

                if ((x2 > x1) && (y2 > y1))
                        Rectangle(hdc, x1, y1, x2, y2);
        }

        if (hbrold != 0)
                DeleteObject(SelectObject(hdc, hbrold));

        return(1);
}

BOOL
windows_draw_arc(HWND  hwnd,
                 HDC   hdc,
                 SHORT x,
                 SHORT y,
                 SHORT w,
                 SHORT h,
                 SHORT angl1,
                 SHORT angl2) {
        hwnd = hwnd;

        LLCachedSetPalette(hdc);

        Arc(hdc, x - w, y - h, x + w, y + h,
             x + Arrondi(w * cos(angl1 * PI / 180)),
             y - Arrondi(h * sin(angl1 * PI / 180)),
             x + Arrondi(w * cos(angl2 * PI / 180)),
             y - Arrondi(h * sin(angl2 * PI / 180)));

        return(1);
}

BOOL
windows_draw_arcs(HWND hwnd,
                  HDC hdc,
                  LONG *vx,
                  LONG *vy,
                  LONG *vw,
                  LONG *vh,
                  LONG *vangl1,
                  LONG *vangl2,
                  SHORT n) {
        SHORT   i;

        for (i = 0 ; i < n ; i++)
                windows_draw_arc(hwnd, hdc,
                                 (SHORT)vx[i],     (SHORT)vy[i],
                                 (SHORT)vw[i],     (SHORT)vh[i],
                                 (SHORT)vangl1[i], (SHORT)vangl2[i]);

        return(1);
}

BOOL
windows_fill_arc(HWND hwnd,
                 HDC hdc,
                 SHORT x,
                 SHORT y,
                 SHORT w,
                 SHORT h,
                 SHORT angl1,
                 SHORT angl2) {
        HPEN    hpenold;

        hwnd = hwnd;

        hpenold = SelectObject(hdc, GetStockObject(NULL_PEN));

        LLCachedSetPalette(hdc);

        Pie(hdc, x - w, y - h, x + w, y + h,
             x + Arrondi(w * cos(angl1 * PI / 180)),
             y - Arrondi(h * sin(angl1 * PI / 180)),
             x + Arrondi(w * cos(angl2 * PI / 180)),
             y - Arrondi(h * sin(angl2 * PI / 180)));

        if (hpenold != 0)
                DeleteObject(SelectObject(hdc, hpenold));

        return(1);
}

BOOL
windows_fill_arcs(HWND  hwnd,
                  HDC hdc,
                  LONG *vx,
                  LONG *vy,
                  LONG *vw,
                  LONG *vh,
                  LONG *vangl1,
                  LONG *vangl2,
                  SHORT n) {
        SHORT   i;

        for (i = 0; i < n; i++)
                windows_fill_arc(hwnd,
                                 hdc,
                                 (SHORT)vx[i],     (SHORT)vy[i],
                                 (SHORT)vw[i],     (SHORT)vh[i],
                                 (SHORT)vangl1[i], (SHORT)vangl2[i]);

        return(1);
}

BOOL
windows_fill_chord(HWND hwnd,
                   HDC hdc,
                   SHORT x,
                   SHORT y,
                   SHORT w,
                   SHORT h,
                   SHORT angl1,
                   SHORT angl2) {
        HPEN    hpenold;

        hwnd = hwnd;

        hpenold = SelectObject(hdc, GetStockObject(NULL_PEN));

        LLCachedSetPalette(hdc);

        Chord(hdc, x - w, y - h, x + w, y + h,
               x + Arrondi(w * cos(angl1 * PI / 180)),
               y - Arrondi(h * sin(angl1 * PI / 180)),
               x + Arrondi(w * cos(angl2 * PI / 180)),
               y - Arrondi(h * sin(angl2 * PI / 180)));

        if (hpenold != 0)
                DeleteObject(SelectObject(hdc, hpenold));

        return(1);
}

BOOL
windows_fill_chords(HWND hwnd,
                    HDC hdc,
                    LONG *vx,
                    LONG *vy,
                    LONG *vw,
                    LONG *vh,
                    LONG *vangl1,
                    LONG *vangl2,
                    SHORT n) {
        SHORT   i;

        for (i = 0 ; i < n ; i++)
                windows_fill_chord(hwnd, hdc,
                                   (SHORT)vx[i],     (SHORT)vy[i],
                                   (SHORT)vw[i],     (SHORT)vh[i],
                                   (SHORT)vangl1[i], (SHORT)vangl2[i]);

        return(1);
}

BOOL
windows_fill_rectangle(HWND    hwnd,
                       HDC     hdc,
                       SHORT   x,
                       SHORT   y,
                       SHORT   w,
                       SHORT   h) {
        HPEN    hpenold;

        hwnd = hwnd;

        if ((w > 0) && (h > 0)) {
                hpenold = SelectObject(hdc, GetStockObject(NULL_PEN));
                LLCachedSetPalette(hdc);
                Rectangle(hdc, x, y, x + w + 1, y + h + 1);
                if (hpenold != 0)
                        DeleteObject(SelectObject(hdc, hpenold));
        }
        return(1);
}

BOOL
windows_fill_rectangles(HWND hwnd,
                        HDC hdc,
                        LONG *vx,
                        LONG *vy,
                        LONG *vw,
                        LONG *vh,
                        SHORT n,
                        SHORT dx,
                        SHORT dy,
                        SHORT flag) {
        HPEN    hpenold;
        int     x1;
        int     y1;
        int     x2;
        int     y2;
        int     xx;
        int     yy;
        SHORT   i;

        hwnd = hwnd;

        xx = (int)((SHORT)vx[0] + dx);
        yy = (int)((SHORT)vy[0] + dy);

        hpenold = SelectObject(hdc, GetStockObject(NULL_PEN));

        for (i = 0; i < n; i++) {
                if (flag & 1)
                        x1 = (int)((SHORT)vx[i] + dx);
                else    x1 = xx;

                if (flag & 2)
                        y1 = (int)((SHORT)vy[i] + dy);
                else    y1 = yy;

                if (flag & 4)
                        x2 =  x1 + (SHORT)vw[i] + 1;
                else    x2 =  x1 + (SHORT)vw[0] + 1;

                if (flag & 8)
                        y2 = y1 + (SHORT)vh[i] + 1;
                else    y2 = y1 + (SHORT)vh[0] + 1;

                if ((x2 > x1) && (y2 > y1))
                        Rectangle(hdc, x1, y1, x2 , y2);
        }

        if (hpenold != 0)
                DeleteObject(SelectObject(hdc, hpenold));

        return(1);
}

BOOL
windows_fill_area(HWND hwnd,
                  HDC hdc,
                  LONG *vx,
                  LONG *vy,
                  SHORT n,
                  SHORT dx,
                  SHORT dy) {
        SHORT   i;
        POINT   *TAB, *TABORG;
        HPEN    hpenold;

        hwnd = hwnd;

        if (n <= 0) {
                return 1;
        }

        TABORG = (LPPOINT)WINalloc(sizeof(POINT) * n);
        if (TABORG == 0) {
                MessageBox((HWND)NULL,
                            "Not enough memory",
                           "fill-area", MB_OK);
        } else {
                TAB = TABORG;
                for (i = 0; i < n; i++) {
                        TAB->x = (SHORT)vx[i] + dx;
                        TAB->y = (SHORT)vy[i] + dy;
                        TAB++;
                }
                hpenold = SelectObject(hdc, GetStockObject(NULL_PEN));
                LLCachedSetPalette(hdc);
                Polygon(hdc, TABORG, n);

                if (hpenold != 0)
                        DeleteObject(SelectObject(hdc, hpenold));

                WINfree(TABORG);
        }

        return(1);
}
