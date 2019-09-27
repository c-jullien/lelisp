#if     !defined(lint)
static  char *sccsid = "@(#)wingraph.c  (c) ELIGIS 2005/11/25";
#endif

/*
 *      wingraph.c :
 */

#include "winvirbi.h"
#include <stdio.h>
#include <string.h>

static  LONG    aMode[16] = {
        R2_WHITE,       R2_MERGEPEN,    R2_MERGEPENNOT,
        R2_COPYPEN,     R2_MERGENOTPEN, R2_NOP,
        R2_NOTXORPEN,   R2_MASKPEN,     R2_NOTMASKPEN,
        R2_XORPEN,      R2_NOT,         R2_MASKPENNOT,
        R2_NOTCOPYPEN,  R2_MASKNOTPEN,  R2_NOTMERGEPEN,
        R2_BLACK
};

/*
BOOL    windows_set_pattern(HDC hdc, HBITMAP bitmap, SHORT pattern);
*/


extern  BOOL    windows_select_palette(HDC hdc);
static  BOOL    windows_valid_font(LPSTR string);

extern  SHORT   gl_nbprologue;

extern  HANDLE  hInst;

typedef struct  {
        char            *hdmem;
        SHORT           ncount;
}       ENUMER;

typedef struct  {
        FONT            *hdmem;
        SHORT           ncount;
}       ENUMERFONT;

HFONT   *aFont;
FONT    *pfm;

static  ENUMER          enumer1;
static  ENUMERFONT      enumer2;

#define NB_TRUE_FONTS   14

static  SHORT   nbtruefont = NB_TRUE_FONTS;
static  SHORT   allowed_height[32];

/*
 * Note: the next two arrays should be ONE structure. :-(
 */

static  char    *AllFaces[] = {
        "**to-be-filled-with-system-font**",
        "Arial",
        "Courier New",
        "Times New Roman",

        /* Optional font must be the last name */

        "**to-be-filled-with-optional-font**"
};

static  int     BoolFaces[] = {
        0,      /* required */
        0,      /* required */
        0,      /* required */
        0,      /* required */
        1       /* optional */
};

int CALLBACK
windows_allfonts(const LOGFONT *lf, const TEXTMETRIC *tm, DWORD nfonttype, LPARAM data);

int CALLBACK
windows_allfaces(const LOGFONT *lf, const TEXTMETRIC *tm, DWORD nfonttype, LPARAM data);

BOOL
windows_set_foreground(HDC hdc, SHORT nocolor, SHORT width, SHORT style)
{
        HPEN    hpenold;
        HPEN    hpen;

        SetTextColor(hdc, PALETTEINDEX(nocolor));

        hpenold = SelectObject(
                                hdc,
                                hpen=CreatePen(style,width,GetTextColor(hdc))
                            );

        PRINTRESOURCE(
                        "Allocate",
                        "pen",
                        "windows_set_foreground",
                        hpen
                   );

        if (hpenold != (HPEN)0) {
                PRINTRESOURCE(
                                "Desallocate",
                                "pen",
                                "windows_set_foreground",
                                hpenold
                           );
                DeleteObject(hpenold);
        }

        return(1);
}

BOOL
windows_set_background(HDC hdc, SHORT nocolor)
{
        SetBkColor(hdc, PALETTEINDEX(nocolor));
        return(1);
}

BOOL
windows_set_window_background(HWND hwnd, SHORT nocolor)
{
        if (hwnd != GetDesktopWindow())
                SetWindowInfo(hwnd, BVBkGrndOffset(hwnd), nocolor);

        return(1);
}

BOOL
windows_set_line_style(HDC hdc, SHORT width, SHORT style, SHORT nocolor)
{
        HPEN    hpenold;
        HPEN    hpen;

        hpenold = SelectObject(
                                hdc,
                                hpen=CreatePen(style,width,PALETTEINDEX(nocolor))
                            );

        PRINTRESOURCE(
                        "Allocate",
                        "pen",
                        "windows_set_line_style",
                        hpen
                   );

        if (hpenold != (HPEN)0) {
                PRINTRESOURCE(
                                "Desallocate",
                                "pen",
                                "windows_set_line_style",
                                hpenold
                           );
                DeleteObject(hpenold);
        }
        return(1);
}

BOOL
windows_set_mode(HDC hdc, SHORT mode)
{
        SetROP2(hdc, aMode[mode]);
        return(1);
}

/*
BOOL
windows_set_pattern(HDC hdc, HBITMAP bitmap, SHORT pattern)
{
        HBRUSH hbrushold;

        switch(pattern) {

        case 0:
                hbrushold = SelectObject(hdc,
                                CreateSolidBrush(GetBkColor(hdc)));
                break;
        case 1:
                hbrushold = SelectObject(hdc,
                                CreateSolidBrush(GetTextColor(hdc)));
                break;
        default:
                hbrushold = SelectObject(hdc, CreatePatternBrush(bitmap));
                break;
        }

        if (hbrushold != 0) {
                DeleteObject(hbrushold);
        }
        return(1);
}
*/

BOOL
windows_set_font(HDC hdc, SHORT font)
{
        SelectObject(hdc, aFont[font]);
        return(1);
}

HCURSOR
windows_create_cursor(LPSTR andbit, LPSTR xorbit, SHORT w)
{
        w       = w;
        andbit  = andbit;
        xorbit  = xorbit;
#if     defined(NOTDEF)
        HCURSOR hCur = CreateCursor(hInst, 0, 0, w, 32, andbit, xorbit);
        return(hCur);
#else
        return(LoadCursor(hInst, "left-ptr"));
#endif
}

HCURSOR
windows_named_cursor(LPSTR string)
{
        return(LoadCursor(hInst, string));
}

HCURSOR
windows_set_cursor(HWND hwnd, HCURSOR hcursor)
{
        POINT point;

        if (hwnd != GetDesktopWindow()) {
                SetWindowInfo(hwnd, BVCursorOffset(hwnd), hcursor);
                GetCursorPos(&point);
                SetCursorPos(point.x, point.y);
        }

        return(hcursor);
}

BOOL
windows_free_cursor(HWND hwnd, HCURSOR hcursor)
{
        hwnd = hwnd;
        hcursor = hcursor;
        return(1);
}

SHORT
windows_width_string(HDC hdc, LPSTR string, SHORT start, SHORT length)
{
        SIZE    sz;

        if (start > 0)
                string += start;
        
        GetTextExtentPoint(hdc, string, length, &sz);

        return((SHORT)sz.cx);
}

SHORT
windows_height_string(HDC hdc, LPSTR string, SHORT start, SHORT length)
{
        SIZE    sz;

        if (start > 0)
                string += start;
        
        GetTextExtentPoint(hdc, string, length, &sz);

        return((SHORT)sz.cy);
}

SHORT
windows_font_height(SHORT font)
{
        TEXTMETRIC      metric;
        HDC             hdc;
        HWND            hwnd;
        HFONT           hOldFont;

        hdc      = GetDC(hwnd = GetDesktopWindow());
        hOldFont = SelectObject(hdc, aFont[font]);
        GetTextMetrics(hdc, (LPTEXTMETRIC)&metric);
        SelectObject(hdc, hOldFont);
        ReleaseDC(hwnd, hdc);

        return((SHORT)metric.tmHeight);
}

SHORT
windows_font_ascent(SHORT font)
{
        TEXTMETRIC      metric;
        HDC             hdc;
        HWND            hwnd;
        HFONT           hOldFont;

        // BoundChecker Resource Leakage
        hdc      = GetDC(hwnd = GetDesktopWindow());
        hOldFont = SelectObject(hdc, aFont[font]);
        GetTextMetrics(hdc, (LPTEXTMETRIC)&metric);
        SelectObject(hdc, hOldFont);
        ReleaseDC(hwnd, hdc);

        return((SHORT)metric.tmAscent);
}

SHORT
windows_font_info(SHORT font, LONG *llinfo)
{
        TEXTMETRIC      metric;
        HFONT           hOldFont;
        HDC             hdc;
        HWND            hwnd;

        hdc      = GetDC(hwnd = GetDesktopWindow());
        hOldFont = SelectObject(hdc, aFont[font]);

        GetTextMetrics(hdc, (LPTEXTMETRIC)&metric);

        /* ascent */
        llinfo[0] = MAKELONG(metric.tmAscent, 0);
        /* descent */
        llinfo[1] = MAKELONG(metric.tmDescent, 0);
        /* angle */
        llinfo[2] = MAKELONG(pfm[font].lf.lfOrientation * 10, 0);
        /* weight */
        llinfo[3] = MAKELONG(pfm[font].lf.lfWeight, 0);
        /* minrbearing */
        llinfo[4] = 0L;
        /* minlbearing */
        llinfo[5] = 0L;
        /* minascent */
        llinfo[6] = (-llinfo[1] & 0xFFFFL); /* -descent */
        /* mindescent */
        llinfo[7] = (-llinfo[0] & 0xFFFFL); /* -ascent  */
        /* minwidth */
        llinfo[8] = 1L;
        /* maxrbearing */               /* 0 */
        llinfo[9] = MAKELONG(pfm[font].lf.lfWidth - metric.tmMaxCharWidth, 0);
        /* maxlbearing */
        llinfo[10] = MAKELONG(pfm[font].lf.lfWidth - metric.tmMaxCharWidth, 0);
        /* maxascent */
        llinfo[11] = llinfo[0];
        /* maxdescent */
        llinfo[12] = llinfo[1];
        /* maxwidth */
        llinfo[13] = MAKELONG(metric.tmMaxCharWidth, 0);

        SelectObject(hdc, hOldFont);
        ReleaseDC(hwnd, hdc);

        return(font);
}

BOOL
windows_current_window(HDC hdc, HWND hwnd, LONG *args)
{
        HRGN    rgclip;
        HPEN    hpenold;
        HPEN    hpen;

        hwnd = hwnd;

        windows_select_palette(hdc);

        /* mode */
        SetROP2(hdc, aMode[(SHORT)args[0]]);

        /* foreground, line_style */
        SetTextColor(hdc, PALETTEINDEX(args[1]));
        hpenold = SelectObject(
                hdc,
                hpen =
                CreatePen((SHORT)args[5],(SHORT)args[4],PALETTEINDEX(args[1])));

        PRINTRESOURCE(
                        "Allocate",
                        "pen",
                        "windows_current_window",
                        hpen
                   );

        if (hpenold != (HPEN)0) {
                PRINTRESOURCE(
                                "Desallocate",
                                "pen",
                                "windows_current_window",
                                hpenold
                           );
                DeleteObject(hpenold);
        }

        /* background */
        SetBkMode(hdc, TRANSPARENT);
        SetBkColor(hdc, PALETTEINDEX(args[2]));

        /* font */
        SelectObject(hdc, aFont[(SHORT)args[3]]);

        /* pattern */
        windows_set_fill_mode(
                                hdc,
                                (HBITMAP)(LONG_PTR)args[6],
                                (SHORT)args[11],
                                (SHORT)args[12]
                           );

        /* clip */
        rgclip = CreateRectRgn(
                                (SHORT)args[7],
                                (SHORT)args[8],
                                (SHORT)args[7] + (SHORT)args[9],
                                (SHORT)args[8] + (SHORT)args[10]
                            );

        SelectClipRgn(hdc, rgclip);
        DeleteObject(rgclip);

        return(1);
}

HDC
windows_new_create_graph_env(
                              HWND      hwnd,
                              SHORT     font,
                              SHORT     width,
                              SHORT     style,
                              HBITMAP   hbitmap,
                              SHORT     pattern,
                              SHORT     fillmode,
                              SHORT     mode,
                              SHORT     fore,
                              SHORT     back
                          )
{
        HDC     hdc;
        HPEN    hpenold;
        HPEN    hpen;

        if (hwnd == GetDesktopWindow())
                hdc = WINdisplay->hdcroot;
                // BoundChecker resource Leakage
        else    hdc = GetDC(hwnd);

        windows_select_palette(hdc);

        SelectObject(hdc, aFont[font]);        /* fonte */
        SetROP2(hdc, aMode[mode]);            /* mode */
        SetTextColor(hdc, PALETTEINDEX(fore));/* foreground, line_style */
        hpenold = SelectObject(
                                hdc,
                                hpen=CreatePen(style,width,PALETTEINDEX(fore))
                            );

        PRINTRESOURCE(
                        "Allocate",
                        "pen",
                        "windows_new_create_graph_env",
                        hpen
                   );

        if (hpenold != (HPEN)0) {
                PRINTRESOURCE(
                                "Desallocate",
                                "pen",
                                "windows_new_create_graph_env",
                                hpenold
                           );
                DeleteObject(hpenold);
        }

        /* pattern */
        windows_set_fill_mode(hdc, (HBITMAP)hbitmap, pattern, fillmode);

        /* background */
        SetBkMode(hdc, TRANSPARENT);
        SetBkColor(hdc, PALETTEINDEX(back));

        /* window background */
        if (hwnd != GetDesktopWindow())
                SetWindowInfo(hwnd, BVBkGrndOffset(hwnd), back);

        return(hdc);
}

static BOOL
windows_valid_font(LPSTR string)
{
        int     i;
        BOOL    match = FALSE;

        for (i = 0 ; i < (sizeof(AllFaces) / sizeof(AllFaces[0])) ; i++)
                /*
                 * Change to exact FaceName match 98/09/19
                 *
                 * Second  check  on  face  name.  On  NT 5.0,  Arial
                 * exists  with  different  instance (i.e.  Arial CE,
                 * Arial Greek,  Arial CYR,  ...  We just load 'pure'
                 * Arial.
                 */
                if (strcmp(string, (char *)AllFaces[i]) == 0) {
                        match = TRUE;
                        break;
                }

        return(match);
}

int CALLBACK
windows_allfaces(const LOGFONT *lf, const TEXTMETRIC *tm, DWORD nfonttype, LPARAM data)
{
        char            *lpfaces;
        LOGFONT         *farlf;
        UINT            i;

        tm        = tm;
        data      = data;
        nfonttype = nfonttype;
        farlf     = (LOGFONT *)lf;

#if     defined(_NO_SYMBOL_CHARSET)
        if (farlf->lfCharSet == SYMBOL_CHARSET)
                /*
                 *      Skip symbol fonts
                 */
                return(1);
#endif

        if (winversion() > 3.0) {
            for (i = 0 ; i < (sizeof(AllFaces) / sizeof(AllFaces[0])) ; i++)
                /*
                 * Change to exact FaceName match 98/09/19
                 *
                 * Second  check  on  face  name.  On  NT 5.0,  Arial
                 * exists  with  different  instance (i.e.  Arial CE,
                 * Arial Greek,  Arial CYR,  ...  We just load 'pure'
                 * Arial.
                 */
                if (strcmp((char *)farlf->lfFaceName,(char *)AllFaces[i])==0) {
                        BoolFaces[i]++;
                        break;
                }
                        
            if (i >= (sizeof(AllFaces) / sizeof(AllFaces[0])))
                    return(1);
        }

        lpfaces = WINrealloc(enumer1.hdmem, LF_FACESIZE * (1+enumer1.ncount));

        if (lpfaces == NULL)
                return(0);

        enumer1.hdmem = lpfaces;

        lpfaces = lpfaces + enumer1.ncount * LF_FACESIZE;

        strcpy(lpfaces, farlf->lfFaceName);

        enumer1.ncount++;

        return(1);
}

int CALLBACK
windows_allfonts(const LOGFONT *lf, const TEXTMETRIC *tm, DWORD nfonttype, LPARAM data)
{
        FONT            *font;
        LOGFONT         *farlf;
        SHORT           j;

        tm        = tm;
        data      = data;
        farlf = (LOGFONT *)lf;

        if (!windows_valid_font(farlf->lfFaceName))
                return(1);

        if ((winversion()!=3.0) && (farlf->lfOutPrecision==OUT_STROKE_PRECIS))
                font = WINrealloc(
                                   enumer2.hdmem,
                                   sizeof(FONT) * (nbtruefont + enumer2.ncount)
                               );
        else    font = WINrealloc(
                                   enumer2.hdmem,
                                   sizeof(FONT) * (1 + enumer2.ncount)
                               );

        if (font == NULL)
                return(0);

        enumer2.hdmem = font;

        if ((winversion()!=3.0) && (farlf->lfOutPrecision==OUT_STROKE_PRECIS))
                for (j = 0 ; j < nbtruefont ; j++) {
                        farlf->lfHeight                 = allowed_height[j];
                        font[enumer2.ncount].lf         = *(farlf);
                        font[enumer2.ncount].nfonttype  = (short)nfonttype;
                        enumer2.ncount++;
                }
        else    {
                font[enumer2.ncount].lf                 = *(farlf);
                font[enumer2.ncount].nfonttype          = (short)nfonttype;
                enumer2.ncount++;
        }

        return(1);
}

SHORT
windows_query_fonts(LONG *allh, SHORT n)
{
        SHORT   nfonts;
        HFONT   oldfont;
        HDC     hdc;
        HWND    hwnd;
        SHORT   i;

        nbtruefont = n;

        for (i = 0 ; i < n ; i++)
                allowed_height[i] = (SHORT)*allh++;

        hdc = GetDC(hwnd = GetDesktopWindow());
        if (winversion() >= 5.0) {
                (void)strcpy(AllFaces[0], "Tahoma");
        } else  {
                oldfont = SelectObject(hdc, GetStockObject(SYSTEM_FONT));
                GetTextFace(hdc, 32, AllFaces[0]);
                SelectObject(hdc, oldfont);
        }

        enumer1.ncount = 0;
        enumer1.hdmem  = WINalloc(1);

        if (enumer1.hdmem == 0) {
                MessageBox(
                            (HWND)NULL,
                            "Not enough memory",
                            "query_fonts #1",
                            MB_OK
                        );
                ReleaseDC(hwnd, hdc);
                return(0);
        }

        if (!EnumFonts(hdc, NULL, windows_allfaces, (LPARAM)NULL)) {
                MessageBox(
                            (HWND)NULL,
                            "Le-Lisp: not enough memory",
                            "query_fonts #2",
                            MB_OK
                        );
                WINfree(enumer1.hdmem);
                ReleaseDC(hwnd, hdc);
                return(0);
        }

        enumer2.ncount = 0;
        enumer2.hdmem  = WINalloc(1);

        if (enumer2.hdmem == 0) {
                MessageBox(
                            (HWND)NULL,
                            "Not enough memory",
                            "query_fonts #3",
                            MB_OK
                        );
                WINfree(enumer1.hdmem);
                ReleaseDC(hwnd, hdc);
                return(0);
        }

        for (i = 0 ; i < enumer1.ncount ; i++) {
                if (!EnumFonts(
                                hdc,
                                enumer1.hdmem + i * LF_FACESIZE,
                                windows_allfonts,
                                (LPARAM)NULL
                            )) {
                        MessageBox(
                                    (HWND)NULL,
                                    "Not enough memory",
                                    "query_fonts #4",
                                    MB_OK
                                );
                        WINfree(enumer2.hdmem);
                        WINfree(enumer1.hdmem);
                        ReleaseDC(hwnd, hdc);
                        return(0);
                }
        }

        nfonts = enumer2.ncount;

        /*
         *      Check if all fonts has been installed.
         */

        for (i = 0 ; i < (sizeof(AllFaces) / sizeof(AllFaces[0])) ; i++)
                if (BoolFaces[i] == 0) {
                        /*
                         *      Not a valid font name for Lisp
                         */
                        char    buf[128];
                        int     res;

                        (void)strcpy(buf, "Font not installed : ");
                        (void)strcat(buf, AllFaces[i]);
                        (void)strcat(buf, ", continue ?");

                        res = MessageBox(
                                          (HWND)NULL,
                                          buf,
                                          "Installation error",
                                          MB_YESNO
                                      );
                        if (res == IDYES)
                                continue;
                        else    exit(1);
                }

        aFont  = (HFONT *)WINalloc(nfonts * sizeof(HFONT));

        if (aFont == NULL) {
                MessageBox(
                            (HWND)NULL,
                            "Not enough memory",
                            "query_fonts #5",
                            MB_OK
                        );
                WINfree(enumer2.hdmem);
                WINfree(enumer1.hdmem);
                ReleaseDC(hwnd, hdc);
                return(0);
        }

        for (i = 0 ; i < nfonts ; i++)
                aFont[i] = (HFONT)NULL;

        pfm = enumer2.hdmem;

        if (enumer1.hdmem != 0)
                WINfree(enumer1.hdmem);

        ReleaseDC(hwnd, hdc);

        return(nfonts);
}

SHORT
windows_get_fonts(LPSTR string, SHORT nbmax)
{
        SHORT   i;
        SHORT   nbfnt;
        SHORT   len;
        HDC     hdc;
        HWND    hwnd;
        LPSTR   string1;
        CHAR    strform[64];
        int     size;

        hdc     = GetDC(hwnd = GetDesktopWindow());
        size    = 0;
        string1 = string;

        string1[0] = '\0';

        for (i = 0, nbfnt = 0 ; i < WINdisplay->nFonts ; i++) {
                (void)strcpy(strform, "%s-%d");

                if ((winversion() != 3.0) &&
                    (pfm[i].lf.lfOutPrecision == OUT_STROKE_PRECIS))
                        (void)strcat(strform, "-TT");

                if (pfm[i].lf.lfItalic != 0)
                        (void)strcat(strform, "-Italic");

                if (pfm[i].lf.lfWeight == FW_BOLD)
                        (void)strcat(strform, "-Bold");

                (void)strcat(strform, ".");

                len = (SHORT)(strlen(string)+strlen(strform)+LF_FACESIZE);

                if (len >= nbmax) {
                        MessageBox((HWND)NULL,
                                    "Insufficient memory",
                                    "get_fonts",
                                    MB_OK);
                        break;
                } else  {
                        size = sprintf(
                                        string1,
                                        strform,
                                        pfm[i].lf.lfFaceName,
                                        pfm[i].lf.lfHeight
                                    );

                        string1 += size;
                        nbfnt++;
                }
        }

        WINdisplay->nFonts = nbfnt;

        ReleaseDC(hwnd, hdc);
        return(WINdisplay->nFonts);
}

SHORT
windows_load_font(SHORT font)
{
        extern  HDC     hTTyDC;         /* Terminal DC                  */

        if (font >= WINdisplay->nFonts)
                return(0);

        if (aFont[font] == NULL) {
            int oldh = pfm[font].lf.lfHeight;
            int oldw = pfm[font].lf.lfWidth;
            pfm[font].lf.lfHeight = -MulDiv(
                                             oldh,
                                             GetDeviceCaps(hTTyDC,LOGPIXELSY),
                                             72
                                         );
            pfm[font].lf.lfWidth  = 0;
            aFont[font]         = CreateFontIndirect(&pfm[font].lf);
            pfm[font].lf.lfHeight = oldh;
            pfm[font].lf.lfWidth  = oldw;

            PRINTRESOURCE("Allocate", "font", "windows_load_font", aFont[font]);
        }

        return(font);
}

SHORT
windows_system_font_size(void)
{
        HDC             hdc;
        HWND            hwnd;
        HFONT           hOldFont;
        TEXTMETRIC      tm;
        double          fSize;
        int             nSize;

        hdc      = GetDC(hwnd = GetDesktopWindow());
        hOldFont = GetStockObject(SYSTEM_FONT);
        GetTextMetrics(hdc, (LPTEXTMETRIC)&tm);

        fSize = ((tm.tmHeight - tm.tmInternalLeading) * 72.0) /
                GetDeviceCaps(hdc,LOGPIXELSY);

        SelectObject(hdc, hOldFont);
        ReleaseDC(hwnd, hdc);

        nSize = (int)fSize;

        if ((((double)nSize * 1.0) + 0.5) > fSize)
                return((SHORT)nSize);
        else    return((SHORT)nSize+1);
}

BOOL
windows_set_fill_mode(HDC hdc, HBITMAP bitmap, SHORT pattern, SHORT fill_mode)
{
        HBRUSH hbrushold = (HBRUSH)0;

        switch(fill_mode) {
        case 0:
                hbrushold = SelectObject(hdc,
                        CreateSolidBrush(GetTextColor(hdc)));
                break;
        case 1:
                switch(pattern) {
                case 0:
                        hbrushold = SelectObject(hdc,
                                CreateSolidBrush(GetBkColor(hdc)));
                        break;
                case 1:
                        hbrushold = SelectObject(hdc,
                                CreateSolidBrush(GetTextColor(hdc)));
                        break;
                default:
                        hbrushold = SelectObject(hdc, CreatePatternBrush(bitmap));
                        break;
                }
                break;
        case 2 :
                hbrushold = SelectObject(hdc, CreatePatternBrush(bitmap));
                break;
        }

        if (hbrushold != (HBRUSH)0)
                DeleteObject(hbrushold);

        return(1);
}

/*
 *      Special extensions for Windows
 */

double
winversion(VOID)
{
#pragma warning(push)
#pragma warning(disable:4996)  /* GetVersion is deprecated */
        DWORD dwver = (0xFFFF & GetVersion());
#pragma warning(push)

        /*
         *      (dwver & 0x80000000) != 0 on Windows NT (not Win32s)
         */

        return((((dwver & 0xFF) * 100.0) + ((dwver >> 8) & 0xFF)) / 100.0);
}

BOOL
windows_hilight(int hiFlag)
{
        return(hilight_flag = hiFlag);
}

BOOL
windows_mutable(int muFlag)
{
        return(mutable_flag = muFlag);
}

SHORT
windows_system_parameters(int length, LONG *args)
{
        extern  int     nCharWidth;     /* Width  of a system char      */
        extern  int     nCharHeight;    /* Height of a system char      */
        extern  HDC     hTTyDC;         /* Terminal DC                  */

        /*
         *      SM_CMETRICS is the last valid system metrics for a given system
         */

        if (length < SM_CMETRICS)
                /*
                 *      Lisp vector is too short for this version of Windows.
                 *      Please expand !
                 */
                return(1);

        args[ 0] = GetSystemMetrics(SM_CXSCREEN        );
        args[ 1] = GetSystemMetrics(SM_CYSCREEN        );
        args[ 2] = GetSystemMetrics(SM_CXVSCROLL       );
        args[ 3] = GetSystemMetrics(SM_CYHSCROLL       );
        args[ 4] = GetSystemMetrics(SM_CYCAPTION       );
        args[ 5] = GetSystemMetrics(LL_SM_CXBORDER     );
        args[ 6] = GetSystemMetrics(LL_SM_CYBORDER     );
        args[ 7] = GetSystemMetrics(SM_CXDLGFRAME      );
        args[ 8] = GetSystemMetrics(SM_CYDLGFRAME      );
        args[ 9] = GetSystemMetrics(SM_CYVTHUMB        );
        args[10] = GetSystemMetrics(SM_CXHTHUMB        );
        args[11] = GetSystemMetrics(SM_CXICON          );
        args[12] = GetSystemMetrics(SM_CYICON          );
        args[13] = GetSystemMetrics(SM_CXCURSOR        );
        args[14] = GetSystemMetrics(SM_CYCURSOR        );
        args[15] = GetSystemMetrics(SM_CYMENU          );
        args[16] = GetSystemMetrics(SM_CXFULLSCREEN    );
        args[17] = GetSystemMetrics(SM_CYFULLSCREEN    );
        args[18] = GetSystemMetrics(SM_CYKANJIWINDOW   );
        args[19] = GetSystemMetrics(SM_MOUSEPRESENT    );
        args[20] = GetSystemMetrics(SM_CYVSCROLL       );
        args[21] = GetSystemMetrics(SM_CXHSCROLL       );
        args[22] = GetSystemMetrics(SM_DEBUG           );
        args[23] = GetSystemMetrics(SM_SWAPBUTTON      );
        args[24] = GetSystemMetrics(SM_RESERVED1       );
        args[25] = GetSystemMetrics(SM_RESERVED2       );
        args[26] = GetSystemMetrics(SM_RESERVED3       );
        args[27] = GetSystemMetrics(SM_RESERVED4       );
        args[28] = GetSystemMetrics(SM_CXMIN           );
        args[29] = GetSystemMetrics(SM_CYMIN           );
        args[30] = GetSystemMetrics(SM_CXSIZE          );
        args[31] = GetSystemMetrics(SM_CYSIZE          );
        args[32] = GetSystemMetrics(LL_SM_CXFRAME      );
        args[33] = GetSystemMetrics(LL_SM_CYFRAME      );
        args[34] = GetSystemMetrics(SM_CXMINTRACK      );
        args[35] = GetSystemMetrics(SM_CYMINTRACK      );

#if     (WINVER >= 0x030a)
        args[36] = GetSystemMetrics(SM_CXDOUBLECLK     );
        args[37] = GetSystemMetrics(SM_CYDOUBLECLK     );
        args[38] = GetSystemMetrics(SM_CXICONSPACING   );
        args[39] = GetSystemMetrics(SM_CYICONSPACING   );
        args[40] = GetSystemMetrics(SM_MENUDROPALIGNMENT);
        args[41] = GetSystemMetrics(SM_PENWINDOWS      );
        args[42] = GetSystemMetrics(SM_DBCSENABLED     );
#endif

        args[43] = GetSystemMetrics(SM_CMOUSEBUTTONS   );

        args[44] = nCharWidth;
        args[45] = nCharHeight;

        args[46] = GetDeviceCaps(hTTyDC, HORZSIZE      );
        args[47] = GetDeviceCaps(hTTyDC, VERTSIZE      );
        args[48] = GetDeviceCaps(hTTyDC, HORZRES       );
        args[49] = GetDeviceCaps(hTTyDC, VERTRES       );
        args[50] = GetDeviceCaps(hTTyDC, BITSPIXEL     );
        args[51] = GetDeviceCaps(hTTyDC, PLANES        );
        args[52] = GetDeviceCaps(hTTyDC, ASPECTX       );
        args[53] = GetDeviceCaps(hTTyDC, ASPECTY       );
        args[54] = GetDeviceCaps(hTTyDC, ASPECTXY      );
        args[55] = GetDeviceCaps(hTTyDC, LOGPIXELSX    );
        args[56] = GetDeviceCaps(hTTyDC, LOGPIXELSY    );
        args[57] = GetDeviceCaps(hTTyDC, SIZEPALETTE   );
        args[58] = GetDeviceCaps(hTTyDC, COLORRES      );
        args[59] = GetDeviceCaps(hTTyDC, NUMRESERVED   );

        return(1);
}

SHORT
windows_system_work_area(LONG *rect)
{
        RECT    rc;

        if (SystemParametersInfo(SPI_GETWORKAREA, 0, &rc, 0)) {
                rect[0] = rc.left;
                rect[1] = rc.top;
                rect[2] = rc.right  - rc.left;
                rect[3] = rc.bottom - rc.top;
                return(TRUE);
        }

        rect[0] = -1;
        rect[1] = -1;
        rect[2] = -1;
        rect[3] = -1;

        return(FALSE);
}

SHORT
windows_system_color(int index, LONG *args)
{
        COLORREF sysColor = GetSysColor(index);

#if     (WINVER < 0x030a)
        if (index >= COLOR_INACTIVECAPTIONTEXT)
                return(1);
#endif  /* WINVER >= 0x030a */

        args[0] = GetRValue(sysColor) << 7;
        args[1] = GetGValue(sysColor) << 7;
        args[2] = GetBValue(sysColor) << 7;

        return(1);
}

SHORT
windows_palette_color(int index, LONG *args)
{
        if (palette != NULL) {
                args[0] = (LONG)palette->palPalEntry[index].peRed   << 7;
                args[1] = (LONG)palette->palPalEntry[index].peGreen << 7;
                args[2] = (LONG)palette->palPalEntry[index].peBlue  << 7;
        }

        return(1);
}

SHORT
windows_set_optional_fontname(char *fnt)
{
        int     last = (sizeof(AllFaces) / sizeof(AllFaces[0])) - 1;

        (void)strcpy(AllFaces[last], fnt);
        return(0);
}
