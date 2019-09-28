#if     !defined(lint)
static  char *sccsid = "@(#) wincolor.c (c) ELIGIS 2005/11/25";
#endif

/*
 *      wincolor.c :
 */

#include "winvirbi.h"

static  void    windows_init_palette();

HPALETTE        hpalette        = NULL;
HDC             hdcpalette1     = NULL;
HDC             hdcpalette2     = NULL;
LOGPALETTE      *palette        = NULL;
COLORREF        white           = RGB(0xFF, 0xFF, 0xFF);
int             palette_flag    = FALSE;
int             max_colors;

static  int     ColorUsed[ MAX_BV_COLORS ];

static  void
windows_init_palette()
{
        if (hpalette != NULL) {
                PRINTRESOURCE(
                                "Desallocate",
                                "palette",
                                "windows_init_palette",
                                hpalette
                           );
                DeleteObject(hpalette);
        }

        palette->palVersion    = (WORD)0x300;
        palette->palNumEntries = (WORD)max_colors;

        if ((hpalette = CreatePalette(palette)) == NULL) {
                MessageBox(
                            (HWND)NULL,
                            "Not enough memory",
                            "windows_init_palette",
                            MB_OK
                      );
                return;
        }

        SetPaletteEntries(hpalette,0,max_colors,&(palette->palPalEntry[0]));
        // BoundChecker failed 0
        LLAnimatePalette(hpalette, 0, max_colors, &(palette->palPalEntry[0]));

        LLSelectPalette(hdcmem1, hpalette, FALSE);
        LLSelectPalette(hdcmem2, hpalette, FALSE);

        if (mutable_flag == TRUE) {
                LLRealizePalette(hdcmem1);
                LLRealizePalette(hdcmem2);
        }

        PRINTRESOURCE("Allocate", "palette", "windows_init_palette", hpalette);
}

/*
 * Intialisation de la table des couleurs. Les premieres couleurs sont
 * celles de la palette systeme. Elles sont reservee.
 */

BOOL
windows_init_table_color(void)
{
        SHORT   i;
        HDC     hdc;
        int     res;
        int     size;

        if (gl_nbprologue == 1) {
                palette = WINalloc(
                                    sizeof(LOGPALETTE) + 
                                    (MAX_BV_COLORS * sizeof(PALETTEENTRY))
                                );

                if (palette == NULL) {
                        return(0);
                }

                hdc = GetDC(hMainWnd);

                if (!(GetDeviceCaps(hdc, RASTERCAPS) & RC_PALETTE)) {
                        res          = 0;
                        size         = MAX_BV_COLORS;
                        palette_flag = FALSE;
                } else  {
                        res          = GetDeviceCaps(hdc, NUMRESERVED);
                        size         = res;
                        palette_flag = TRUE;
                }

                GetSystemPaletteEntries(hdc,0,size,&palette->palPalEntry[0]);

                ReleaseDC(hMainWnd, hdc);

                max_colors = res + 1;

                palette->palPalEntry[res].peRed   = 0xFF; /* WHITE */
                palette->palPalEntry[res].peGreen = 0xFF;
                palette->palPalEntry[res].peBlue  = 0xFF;

                for (i = 0 ; i < MAX_BV_COLORS ; i++)
                        ColorUsed[ i ] = FALSE;

                for (i = 0 ; i < max_colors ; i++) {
                        palette->palPalEntry[i].peFlags = 0;
                        ColorUsed[ i ] = TRUE;
                }

                windows_init_palette();

        }

        return(1);
}

SHORT
windows_make_color(SHORT red, SHORT green, SHORT blue, SHORT mutable)
{
        COLORREF        newcol;
        COLORREF        palcol;
        SHORT           index;

        newcol = RGB(red, green, blue);

        if (mutable) {
                index = -1;
                palcol= (COLORREF)0; /* not used, prevents warnings. */
        } else  {
                index = (SHORT)FindExistColor(newcol);
                palcol=(*((COLORREF *)&palette->palPalEntry[index]))&0x00FFFFFF;
        }

        if ((index == -1) || (palcol != newcol)) {
                /*
                 *      Couleur a creer
                 */

                for (index = 0 ; index < max_colors ; index++)
                        if (ColorUsed[ index ] == FALSE)
                                break;

                if (index == max_colors)
                        if ((max_colors + 1) >= MAX_BV_COLORS)
                                return(-1);
                        else    index = (short)max_colors++;

                ColorUsed[ index ] = TRUE;

                palette->palPalEntry[index].peRed   = (BYTE)red;
                palette->palPalEntry[index].peGreen = (BYTE)green;
                palette->palPalEntry[index].peBlue  = (BYTE)blue;

                if (mutable)
                      palette->palPalEntry[index].peFlags = PC_RESERVED;
                else  palette->palPalEntry[index].peFlags = 0;

                windows_init_palette();

        }

        return(index);
}

BOOL
windows_select_palette(HDC hdc)
{
        LLSelectPalette(hdc, hpalette, FALSE);
        return(1);
}

BOOL
windows_color_component(SHORT ndx, SHORT red, SHORT green, SHORT blue, SHORT flag)
{
        if (ndx > 1) {
                switch(flag) {
                case 0:
                        palette->palPalEntry[ndx].peRed   = (BYTE)red;
                        break;
                case 1:
                        palette->palPalEntry[ndx].peGreen = (BYTE)green;
                        break;
                case 2:
                        palette->palPalEntry[ndx].peBlue  = (BYTE)blue;
                        break;
                }

                LLAnimatePalette(hpalette,ndx,1,&(palette->palPalEntry[ndx]));

                LLSelectPalette(hdcmem1, hpalette, FALSE);
                LLSelectPalette(hdcmem2, hpalette, FALSE);
                if (mutable_flag == TRUE) {
                        LLRealizePalette(hdcmem1);
                        LLRealizePalette(hdcmem2);
                }
        }

        return(1);
}

BOOL
windows_kill_color(SHORT indx)
{
        if (indx > 1) {
                palette->palPalEntry[indx].peRed   = 0xFF; /* WHITE */
                palette->palPalEntry[indx].peGreen = 0xFF;
                palette->palPalEntry[indx].peBlue  = 0xFF;
                palette->palPalEntry[indx].peFlags = 0;

                ColorUsed[ indx ] = FALSE;
        }
        return(1);
}
