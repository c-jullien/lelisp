#if     !defined(lint)
static  char *sccsid = "@(#)winbitma.c  (c) ELIGIS 2005/11/25";
#endif

/*
 *      winbitmap.c :
 */

#include "winvirbi.h"

#define LLMODE0         (DWORD)0x00000042       /* BLACKNESS    */
#define LLMODE1         (DWORD)0x001100A6       /* NOTSRCERASE  */
#define LLMODE2         (DWORD)0x00220326       /*              */
#define LLMODE3         (DWORD)0x00330008       /* NOTSRCCOPY   */
#define LLMODE4         (DWORD)0x00440328       /* SRCERASE     */
#define LLMODE5         (DWORD)0x00550009       /* DSTINVERT    */
#define LLMODE6         (DWORD)0x00660046       /* SRCINVERST   */
#define LLMODE7         (DWORD)0x007700E6       /*              */
#define LLMODE8         (DWORD)0x008800C6       /* SRCAND       */
#define LLMODE9         (DWORD)0x00990066       /*              */
#define LLMODE10        (DWORD)0x00AA0029       /*              */
#define LLMODE11        (DWORD)0x00BB0226       /* MERGEPAINT   */
#define LLMODE12        (DWORD)0x00CC0020       /* SRCCOPY      */
#define LLMODE13        (DWORD)0x00DD0228       /*              */
#define LLMODE14        (DWORD)0x00EE0086       /* SRCPAINT     */
#define LLMODE15        (DWORD)0x00FF0062       /* WHITENESS    */

LONG BLT_MODE[17] = {
        /*              Ternary raster ops */

        LLMODE0,        /* ceci est un offset car GetROP2 ne rend jamais 0 =0 */
        LLMODE0,        /* ->R2_BLACK           =1 */
        LLMODE1,        /* ->R2_NOTMERGEPEN     =2 */
        LLMODE2,        /* ->R2_MASKNOTPEN      =3 */
        LLMODE3,        /* ->R2_NOTCOPYPEN      =4 */
        LLMODE4,        /* ->R2_MASKPENNOT      =5 */
        LLMODE5,        /* ->R2_NOT             =6 */
        LLMODE6,        /* ->R2_XORPEN          =7 */
        LLMODE7,        /* ->R2_NOTMASKPEN      =8 */
        LLMODE8,        /* ->R2_MASKPEN         =9 */
        LLMODE9,        /* ->R2_NOTXORPEN       =10 */
        LLMODE10,       /* ->R2_NOP             =11 */
        LLMODE11,       /* ->R2_MERGENOTPEN     =12 */
        LLMODE12,       /* ->R2_COPYPEN         =13 */
        LLMODE13,       /* ->R2_MERGEPENNOT     =14 */
        LLMODE14,       /* ->R2_MERGEPEN        =15 */
        LLMODE15        /* ->R2_WHITE           =16 */
};

/*
 *      Global variables :
 */

HDC             hdcmem1;
HDC             hdcmem2;

PBITMAPINFO     pDibInfo;

BOOL            mutable_flag = TRUE;
BOOL            hilight_flag = FALSE;

BOOL
windows_bitmap_PS_create(VOID) {
        HDC     hdc;
        HWND    hwnd;
        WORD    bpixel;

        hwnd    = GetDesktopWindow();
        hdc     = GetDC(hwnd);
        hdcmem1 = CreateCompatibleDC(hdc);
        hdcmem2 = CreateCompatibleDC(hdc);
        bpixel  = (WORD)GetDeviceCaps(hdc, BITSPIXEL);

        PRINTRESOURCE("Allocate", "DC", "windows_create_bitmap", hdcmem1);
        PRINTRESOURCE("Allocate", "DC", "windows_create_bitmap", hdcmem2);

        pDibInfo = (PBITMAPINFO)WINalloc(
                                          sizeof(BITMAPINFOHEADER) +
                                          256*sizeof(RGBQUAD)
                                      );

        if (pDibInfo == (PBITMAPINFO)NULL) {
                return(0);
        }

        pDibInfo->bmiHeader.biSize          = (long)sizeof(BITMAPINFOHEADER);
        pDibInfo->bmiHeader.biWidth         = 2048L;
        pDibInfo->bmiHeader.biHeight        = 1L;
        pDibInfo->bmiHeader.biPlanes        = 1L;
        pDibInfo->bmiHeader.biBitCount      = bpixel;
        pDibInfo->bmiHeader.biCompression   = 0L;
        pDibInfo->bmiHeader.biSizeImage     = 0L;
        pDibInfo->bmiHeader.biXPelsPerMeter = 0L;
        pDibInfo->bmiHeader.biYPelsPerMeter = 0L;
        pDibInfo->bmiHeader.biClrUsed       = max_colors;
        pDibInfo->bmiHeader.biClrImportant  = 0L;

        ReleaseDC(hwnd, hdc);

        return(1);
}

HBITMAP
windows_create_bitmap(SHORT w, SHORT h) {
        HBITMAP hbitmap;

        if ((w == 1) && (h == 1))
                w = 2;  /* Prevent the bug of (create-bitmap 1 1) */

        hbitmap = CreateBitmap(w, h, WINdisplay->cPlanes,
                                WINdisplay->cBitCount, NULL);
        if (hbitmap == NULL)
            MessageBox((HWND)NULL,"Not enough memory","create_bitmap",MB_OK);

        PRINTRESOURCE("Allocate", "bitmap", "windows_create_bitmap", hbitmap);

        return(hbitmap);
}

BOOL
windows_kill_bitmap(HBITMAP bitmap) {
        PRINTRESOURCE("Desallocate", "bitmap", "windows_kill_bitmap", bitmap);

        return((BOOL)DeleteObject(bitmap));
}

SHORT
windows_bmref(HDC hp, SHORT x, SHORT y, SHORT back, BOOL flag_mem) {
        HBITMAP hbold;
        DWORD   pix;
        RECT    rectold;
        HRGN    hrgn;

        if (flag_mem) {
                hbold = SelectObject(hdcmem1, (HBITMAP)hp);
                pix   = GetPixel(hdcmem1, x, y);
                SelectObject(hdcmem1, (HBITMAP)hbold);
        } else  {
                GetClipBox(hp, &rectold);
                SelectClipRgn(hp, WINdisplay->rgclip);
                pix = GetPixel(hp, x, y);
                hrgn = CreateRectRgnIndirect(&rectold);
                SelectClipRgn(hp, hrgn);
                DeleteObject(hrgn);
        }

        if (back == FindExistColor(pix))
                return(0);
        else    return(1);
}

BOOL
windows_bmset(HDC hp,
              SHORT x,
              SHORT y,
              SHORT bit,
              SHORT back,
              SHORT fore,
              BOOL flag_mem) {
        HBITMAP hbold;
        DWORD   pix;
        RECT    rectold;
        HRGN    hrgn;

        if (bit > 0)
                pix = PALETTEINDEX(fore);
        else    pix = PALETTEINDEX(back);

        if (flag_mem) {
                hbold = SelectObject(hdcmem1, (HBITMAP)hp);
                SetPixelV(hdcmem1, x, y, pix);
                SelectObject(hdcmem1, (HBITMAP)hbold);
        } else  {
                GetClipBox(hp, &rectold);
                SelectClipRgn(hp, WINdisplay->rgclip);
                SetPixelV(hp, x, y, pix);
                hrgn = CreateRectRgnIndirect(&rectold);
                SelectClipRgn(hp, hrgn);
                DeleteObject(hrgn);
        }

        return(bit);
}

BOOL
windows_set_bit_line(HDC hp,
                     SHORT x,
                     SHORT y,
                     LPSTR szbits,
                     SHORT w,
                     SHORT back,
                     SHORT fore,
                     BOOL flag_mem) {
        HBITMAP         hbmpl;
        HBITMAP         hbini;
        HBITMAP         hbold;
        HDC             hdc;
        RECT            rectold;
        HRGN            hrgn;

        if (flag_mem) {
                hdc   = hdcmem1;
                hbold = SelectObject(hdcmem1, (HBITMAP)hp);
        } else  {
                hdc   = hp;
                hbold = (HBITMAP)0; /* not used, prevents warning */
                GetClipBox(hp, &rectold);
                SelectClipRgn(hp, WINdisplay->rgclip);
        }

        pDibInfo->bmiHeader.biClrUsed   = 0L;
        pDibInfo->bmiHeader.biBitCount  = 1L;
        pDibInfo->bmiHeader.biWidth     = w;

        pDibInfo->bmiColors[0].rgbRed   = palette->palPalEntry[back].peRed;
        pDibInfo->bmiColors[0].rgbGreen = palette->palPalEntry[back].peGreen;
        pDibInfo->bmiColors[0].rgbBlue  = palette->palPalEntry[back].peBlue;

        pDibInfo->bmiColors[1].rgbRed   = palette->palPalEntry[fore].peRed;
        pDibInfo->bmiColors[1].rgbGreen = palette->palPalEntry[fore].peGreen;
        pDibInfo->bmiColors[1].rgbBlue  = palette->palPalEntry[fore].peBlue;

        hbmpl   = CreateDIBitmap(
                                  hdcmem2,
                                  (LPBITMAPINFOHEADER)&(pDibInfo->bmiHeader),
                                  CBM_INIT,
                                  (LPSTR)szbits,
                                  (LPBITMAPINFO)pDibInfo,
                                  DIB_RGB_COLORS
                              );

        hbini = SelectObject(hdcmem2, (HBITMAP)hbmpl);
        BitBlt(hdc, x, y, w, 1, hdcmem2, 0, 0, SRCCOPY);
        SelectObject(hdcmem2, hbini);

        DeleteObject(hbmpl);

        if (flag_mem)
                SelectObject(hdcmem1, (HBITMAP)hbold);
        else    {
                hrgn = CreateRectRgnIndirect(&rectold);
                SelectClipRgn(hp, hrgn);
                DeleteObject(hrgn);
        }

        return(1);
}

BOOL
windows_get_bit_line(HDC hp,
                     SHORT x,
                     SHORT y,
                     LPSTR szbits,
                     SHORT w,
                     SHORT back,
                     BOOL flag_mem) {
        SHORT   size;
        SHORT   i;
        SHORT   b;
        SHORT   bits;
        SHORT   px;
        SHORT   pix;
        HDC     hdc;
        HBITMAP hbold;
        RECT    rectold;
        HRGN    hrgn;

        if (flag_mem) {
                hdc   = hdcmem1;
                hbold = SelectObject(hdcmem1, (HBITMAP)hp);
        } else  {
                hdc   = hp;
                hbold = (HBITMAP)0; /* not used, prevents warning */
                GetClipBox(hp, &rectold);
                SelectClipRgn(hp, WINdisplay->rgclip);
        }

        size = (SHORT)(w / 8);
        if (w % 8)
                size++;
        if (size > 0) {
                pix = x;
                for (i = 0 ; i < size ; i++) {
                        bits = 0;
                        b    = (SHORT)(pix + 8);
                        for (px = pix ; px < b ; px++) {
                             bits <<= 1;
                             // BoundCheck GetPixel failed : -1
                             if (back != FindExistColor(GetPixel(hdc,px,y)))
                                 bits += 1;
                        }
                        pix = b;
                        szbits[i] = (CHAR)bits;
                }
        }

        if (flag_mem)
                SelectObject(hdcmem1, (HBITMAP)hbold);
        else    {
                hrgn = CreateRectRgnIndirect(&rectold);
                SelectClipRgn(hdc, hrgn);
                DeleteObject(hrgn);
        }

        return(1);
}

SHORT
windows_byteref(HDC hp, SHORT x, SHORT y, BOOL flag_mem) {
        HBITMAP hbold;
        DWORD   pix;
        RECT    rectold;
        HRGN    hrgn;

        if (flag_mem) {
                hbold = SelectObject(hdcmem1, (HBITMAP)hp);
                pix   = GetPixel(hdcmem1, x, y);
                SelectObject(hdcmem1, (HBITMAP)hbold);
        } else  {
                GetClipBox(hp, &rectold);
                SelectClipRgn(hp, WINdisplay->rgclip);
                pix  = GetPixel(hp, x, y);
                hrgn = CreateRectRgnIndirect(&rectold);
                SelectClipRgn(hp, hrgn);
                DeleteObject(hrgn);
        }

        return(FindExistColor(pix));

}

BOOL
windows_byteset(HDC hp, SHORT x, SHORT y, SHORT bit, BOOL flag_mem) {
        HBITMAP hbold;
        DWORD   pix;
        RECT    rectold;
        HRGN    hrgn;

        if (bit < max_colors)
                pix = PALETTEINDEX(bit);
        else    pix = white; /* FindExistColor(pix) */

        if (flag_mem) {
                hbold = SelectObject(hdcmem1, (HBITMAP)hp);
                SetPixelV(hdcmem1, x, y, pix);
                SelectObject(hdcmem1, (HBITMAP)hbold);
        } else  {
                GetClipBox(hp, &rectold);
                SelectClipRgn(hp, WINdisplay->rgclip);
                SetPixelV(hp, x, y, pix);
                hrgn = CreateRectRgnIndirect(&rectold);
                SelectClipRgn(hp, hrgn);
                DeleteObject(hrgn);
        }

        return((BOOL)bit);
}

BOOL
windows_set_byte_line(HDC hp,
                      SHORT x,
                      SHORT y,
                      LPSTR szbits,
                      SHORT w,
                      BOOL flag_mem) {
        HBITMAP         hbmpl;
        HBITMAP         hbini;
        HBITMAP         hbold;
        HDC             hdc;
        RECT            rectold;
        HRGN            hrgn;
        SHORT           *cols;
        SHORT           col;
        int             i;

        if (flag_mem) {
                hdc   = hdcmem1;
                hbold = SelectObject(hdcmem1, (HBITMAP)hp);
        } else  {
                hdc   = hp;
                hbold = (HBITMAP)0; /* not used, prevents warning */
                GetClipBox(hp, &rectold);
                SelectClipRgn(hp, WINdisplay->rgclip);
        }

        switch(WINdisplay->cBitCount) {
        default :
                for (i = 0 ; i < w ; i++) {
                        col = (SHORT)szbits[i];
                        if (col < max_colors)
                                SetPixelV(hdc, x++, y, PALETTEINDEX(col));
                        else    SetPixelV(hdc, x++, y, white);
                }
                break;

        case 4 :
        case 8 :
                pDibInfo->bmiHeader.biClrUsed  = max_colors;
                pDibInfo->bmiHeader.biBitCount = 8L;
                pDibInfo->bmiHeader.biWidth    = w;

                cols = (SHORT *)&pDibInfo->bmiColors[0];

                for (i = 0 ; i < max_colors ; i++)
                        *cols++ = (short)i;

                hbmpl = CreateDIBitmap(
                                hdc,
                                (LPBITMAPINFOHEADER)&(pDibInfo->bmiHeader),
                                CBM_INIT,
                                (LPSTR)szbits,
                                (LPBITMAPINFO)pDibInfo,
                                DIB_PAL_COLORS
                            );

                hbini  = SelectObject(hdcmem2, (HBITMAP)hbmpl);

                LLCachedSetPalette2(hdcmem2);

                BitBlt(hdc, x, y, w, 1, hdcmem2, 0, 0, SRCCOPY);
                SelectObject(hdcmem2, hbini);
                DeleteObject(hbmpl);

                break;
        }

        if (flag_mem)
                SelectObject(hdcmem1, (HBITMAP)hbold);
        else    {
                hrgn = CreateRectRgnIndirect(&rectold);
                SelectClipRgn(hp, hrgn);
                DeleteObject(hrgn);
        }

        return(1);
}

BOOL
windows_get_byte_line(HDC hp,
                      SHORT x,
                      SHORT y,
                      LPSTR szbits,
                      SHORT w,
                      SHORT h,
                      BOOL flag_mem) {
        SHORT   i;
        HDC     hdc;
        HBITMAP hbold;
        RECT    rectold;
        HRGN    hrgn;

        h = h;

        if (flag_mem) {
                hdc   = hdcmem1;
                hbold = SelectObject(hdcmem1, (HBITMAP)hp);
        } else  {
                hdc   = hp;
                hbold = (HBITMAP)0; /* not used, prevents warning */
                GetClipBox(hp, &rectold);
                SelectClipRgn(hp, WINdisplay->rgclip);
        }

        for (i = 0 ; i < w ; i++)
                szbits[i] = (UCHAR)FindExistColor(GetPixel(hdc, x++, y));

        if (flag_mem)
                SelectObject(hdcmem1, (HBITMAP)hbold);
        else    {
                hrgn = CreateRectRgnIndirect(&rectold);
                SelectClipRgn(hp, hrgn);
                DeleteObject(hrgn);
        }

        return(1);
}

static  int _scrolldc_flag = 0;

BOOL
windows_scrolldc_flag(SHORT flag) {
        return(_scrolldc_flag = flag);
}

BOOL
windows_bitblit(HDC hp1,
                HDC hp2,
                SHORT x1,
                SHORT y1,
                SHORT x2,
                SHORT y2,
                SHORT w,
                SHORT h,
                HDC hdcc,
                BOOL flag1_mem,
                BOOL flag2_mem) {
        HBITMAP hbold1;
        HBITMAP hbold2;
        HDC     hdc1;
        HDC     hdc2;
        RECT    rcScroll;
        RECT    rectold;
        HRGN    region;
        int     retour;

        hbold1 = (HBITMAP)0;
        hbold2 = (HBITMAP)0;

        if (flag1_mem) {
                hdc1   = hdcmem1;
                hbold1 = SelectObject(hdcmem1, (HBITMAP)hp1);
        } else  hdc1   = hp1;

        if (flag2_mem) {
                hdc2   = hdcmem2;
                hbold2 = SelectObject(hdcmem2, (HBITMAP)hp2);
        } else  hdc2   = hp2;

/*
        LLSelectPalette(hdc1, hpalette, 0);
        LLRealizePalette(hdc1);
        LLSelectPalette(hdc2, hpalette, 0);
        LLRealizePalette(hdc2);
*/
        rcScroll.left   = x1;
        rcScroll.top    = y1;
        rcScroll.right  = x1 + w;
        rcScroll.bottom = y1 + h;

        if ((w > 0) && (h > 0)) {
                /*
                 *  This  will  fix  a  bug  when  scrolling a Window
                 *  behind a topmost (i.e. task bar).
                 */
                if (_scrolldc_flag && !flag2_mem && (hdc1 == hdc2)) {
                        RECT    clip;
                        RECT    invalid;
                        HRGN    noDrawRgn;
                        HWND    hwnd;

                        int res;
                        int     dx = x2 - x1;
                        int     dy = y2 - y1;

                        dx = x1 - x2;
                        dy = y1 - y2;

                        if (flag1_mem)
                                SelectObject(hdcmem1, (HBITMAP)hbold1);

                        GetClipBox(hdc1, &clip);

#if 0
printf("rcScroll (%03d, %03d, %03d, %03d) to (%03d,%03d) delta (%03d,%03d)\n\r",
                        rcScroll.left,
                        rcScroll.top,
                        rcScroll.right,
                        rcScroll.bottom, x2, y2, dx, dy);
#endif
                        region = CreateRectRgn(0, 0, 1, 1);

                        res=
                        ScrollDC(hdc1,dx,dy,&rcScroll,&clip,region,&invalid);
////
#if 0
            if (dx) {
                HRGN noDrawRgn;
                if (dx > 0)
                     noDrawRgn = CreateRectRgn(rcScroll.left,
                                               rcScroll.top,
                                               rcScroll.left+dx,
                                               rcScroll.bottom);
                else noDrawRgn = CreateRectRgn(rcScroll.right + dx,
                                               rcScroll.top,
                                               rcScroll.right,
                                               rcScroll.bottom);
                CombineRgn(region, region, noDrawRgn, RGN_DIFF);
                (void)DeleteObject((HRGN)noDrawRgn);
            }
            if (dy) {
                HRGN noDrawRgn;
                if (dy > 0)
                     noDrawRgn = CreateRectRgn(rcScroll.left,
                                               rcScroll.top,
                                               rcScroll.right,
                                               rcScroll.top+dy);
                else noDrawRgn = CreateRectRgn(rcScroll.left,
                                               rcScroll.bottom+dy,
                                               rcScroll.right,
                                               rcScroll.bottom);
                CombineRgn(region, region, noDrawRgn, RGN_DIFF);
                (void)DeleteObject((HRGN)noDrawRgn);
            }
                        hwnd      = WindowFromDC(hdc1);
            InvalidateRgn(hwnd, region, TRUE);
            return 1;
#endif
////
//
                        noDrawRgn = CreateRectRgnIndirect(&invalid);
                        hwnd      = WindowFromDC(hdc1);

#if 0
                        printf("Invalid (%03d, %03d, %03d, %03d) res =%x\n\r",
                        invalid.left,
                        invalid.top,
                        invalid.right,
                        invalid.bottom, res);
#endif
                        InvalidateRgn(hwnd, noDrawRgn, TRUE);
//                      InvalidateRgn(hwnd, region, TRUE);
                        (void)DeleteObject((HRGN)noDrawRgn);
                        (void)DeleteObject((HRGN)region);

                        /*
                         (void)SendMessage(hwnd, WM_PAINT, 0, 0);
                         */

                        return(1);
            }

            BitBlt(hdc1, x1, y1, w, h, hdc2, x2, y2, BLT_MODE[GetROP2(hdcc)]);

            if (!flag2_mem) {
                if (flag1_mem)
                        SelectObject(hdcmem1, (HBITMAP)hbold1);

                GetClipBox(hp2, &rectold);
                region = CreateRectRgnIndirect(&rcScroll);
                retour = SelectClipRgn(hp2, region);
                DeleteObject(region);
                region = CreateRectRgnIndirect(&rectold);
                SelectClipRgn(hp2, region);
                DeleteObject(region);
                return(retour);
            }
        }

        if (flag1_mem)
                SelectObject(hdcmem1, (HBITMAP)hbold1);
        if (flag2_mem)
                SelectObject(hdcmem2, (HBITMAP)hbold2);

        return(2);
}

BOOL
windows_subst_colors(HDC hp,
                     LONG *old,
                     LONG *new,
                     SHORT size,
                     SHORT w,
                     SHORT h,
                     BOOL flag_mem) {
        SHORT    i;
        SHORT    x;
        SHORT    y;
        HBITMAP  hbold;
        HDC      hdc;
        RECT     rectold;
        HRGN     hrgn;

        if (flag_mem) {
                hdc   = hdcmem1;
                hbold = SelectObject(hdcmem1, (HBITMAP)hp);
        } else  {
                hdc   = hp;
                hbold = (HBITMAP)0; /* not used, prevents warning */
                GetClipBox(hp, &rectold);
                SelectClipRgn(hp, WINdisplay->rgclip);
        }

        LLSelectPalette(hdc, hpalette, 0);
        LLRealizePalette(hdc);

        for (x = 0 ; x < w ; x++)
             for (y = 0 ; y < h ; y++) {
                LONG index = FindExistColor(GetPixel(hdc, x, y));
                for (i = 0 ; i < size ; i++)
                        if (index == (SHORT)old[i]) {
                            SetPixelV(hdc, x, y, PALETTEINDEX((SHORT)new[i]));
                            break;
                        }
             }

        if (flag_mem)
                SelectObject(hdcmem1, (HBITMAP)hbold);
        else    {
                hrgn = CreateRectRgnIndirect(&rectold);
                SelectClipRgn(hp, hrgn);
                DeleteObject(hrgn);
        }

        return(0);
}

/*
 *      Used by AIDA patch for create-bytemap
 */

BOOL
windows_remap_bytemap_color(LPSTR bytevect, LONG *table, SHORT size) {
        int     i;

        for (i = 0 ; i < size ; i++)
                bytevect[i] = (char)table[bytevect[i]];

        return(0);
}

HBITMAP
windows_create_stipple(SHORT w, SHORT h, LPSTR data) {
        HBITMAP hbitmap = CreateBitmap(w, h, 1, 1, data);

        if (hbitmap == NULL)
            MessageBox((HWND)NULL,"Not enough memory","create_stipple",MB_OK);

        PRINTRESOURCE("Allocate", "bitmap", "windows_create_stipple", hbitmap);

        return(hbitmap);
}
