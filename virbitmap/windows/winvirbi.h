/*
static  char *sccsid = "@(#)winbitma.c  (c) ELIGIS 2007/02/10";
*/

#if     defined(_MSC_VER) && (_MSC_VER >= 1400)
#define _CRT_SECURE_NO_DEPRECATE        1
#define _CRT_NONSTDC_NO_DEPRECATE       1
#endif

#define         PI              3.14159265359
#define         MAX_BV_COLORS   256
#define         WM_FKEY         128

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#include "winterm.h"

#define ascii_event             0
#define move_event              1
#define drag_event              2
#define down_event              3
#define up_event                4
#define repaint_event           5
#define modify_event            6
#define kill_event              7
#define enter_event             8
#define exit_event              9
#define focus_event             10
#define map_event               11
#define unmap_event             12
#define fkey_event              13
#define doubleclic_event        14
#define visibility_change_event 15
#define command_event           16

#if     !defined(LLWEXTRA) && (defined(WIN32) || defined(WIN64))
#define LLSIZE            sizeof(LONG_PTR)
#define LLWEXTRA          (5 * LLSIZE)
#define GetWindowInfo     (LONG_PTR)GetWindowLongPtr
#define SetWindowInfo(hwnd, info, value) SetWindowLongPtr(hwnd, info, (LONG)(LONG_PTR)value)
#define MoveTo(w, x, y) MoveToEx(w, x, y, NULL)
#define BVWStateOffset(w) (GetClassLongPtr((w), GCL_CBWNDEXTRA) - (4*LLSIZE))
#define BVWindowOffset(w) (GetClassLongPtr((w), GCL_CBWNDEXTRA) - (3*LLSIZE))
#define BVCursorOffset(w) (GetClassLongPtr((w), GCL_CBWNDEXTRA) - (2*LLSIZE))
#define BVBkGrndOffset(w) (GetClassLongPtr((w), GCL_CBWNDEXTRA) - (1*LLSIZE))
#endif

#define LGBUFEVENT      64

#define FAR             far
#define VOID            void
#define LONG            long
#define ULONG           unsigned long
#define CHAR            char
#define UCHAR           unsigned char
#define SHORT           short
#define USHORT          unsigned short
#define UINT            unsigned int

#define WINalloc        malloc
#define WINrealloc      realloc
#define WINfree         free

struct  WINEvent {
        UINT    code;
        UINT    detail;
        HWND    hwnd;
        SHORT   gx;
        SHORT   gy;
        SHORT   x;
        SHORT   y;
        SHORT   w;
        SHORT   h;
};

struct  LLDISPLAY {
        SHORT   bitxmax;
        SHORT   bitymax;
        SHORT   cPlanes;
        SHORT   cBitCount;
        UINT    winId;
        SHORT   nFonts;
        BOOL    WM;
        HRGN    rgclip;
        LONG    rootwindow;     
        HDC     hdcroot;
};

typedef struct {
        SHORT   nfonttype;      
        LOGFONT lf;
}       FONT;   
        
#define NO_RESOURCES_LOG

#if     defined(RESOURCES_LOG)
extern  char    szLogFile[ 256 ];
extern  FILE    *pFILELog;
extern  long    ResourceFlag;
#if     defined(RESOURCES_FILE)
#define PRINTINFO(What)\
        if (ResourceFlag) {\
                pFILELog = fopen(szLogFile, "at");\
                (void)fprintf( pFILELog, What);\
                (void)fclose(pFILELog);\
        }
#define PRINTRESOURCE(What, ResType, Function, Handle)\
        if (ResourceFlag) {\
                pFILELog = fopen(szLogFile, "at");\
                (void)fprintf( pFILELog,\
                                "%s %s in %s : 0x%X\n",\
                                What, ResType, Function, Handle);\
                (void)fclose(pFILELog);\
        }
#else
#define PRINTINFO(What)\
        if (ResourceFlag) {\
                char buffer[ 256 ]; \
                sprintf(buffer, "%s\n\r", What); \
                OutputDebugString(buffer); \
        }
#define PRINTRESOURCE(What, ResType, Function, Handle)\
        if (ResourceFlag) {\
                char buffer[ 256 ]; \
                (void)sprintf( buffer,\
                                "%s %s in %s : 0x%X\n\r",\
                                What, ResType, Function, Handle);\
                OutputDebugString(buffer); \
        }
#endif
#else
#define PRINTINFO(What)
#define PRINTRESOURCE(What, ResType, Function, Handle)
#endif  /* RESOURCES_LOG */

/*
 *      Global variables :
 */

extern  HPALETTE        hpalette;
extern  LOGPALETTE      *palette;

extern  HDC             hdcmem1;
extern  HDC             hdcmem2;

extern  PBITMAPINFO     pDibInfo;

extern  BOOL            mutable_flag;
extern  BOOL            hilight_flag;

extern  struct LLDISPLAY *WINdisplay;

extern  HCURSOR         left_ptr;
extern  COLORREF        white;

extern  HDC             hdcmem1;
extern  HDC             hdcmem2;
extern  HDC             hdcpalette1;
extern  HDC             hdcpalette2;
extern  SHORT           gl_nbprologue;
extern  int             max_colors;
extern  int             palette_flag;

extern  int             LL_SM_CXBORDER;
extern  int             LL_SM_CYBORDER;
extern  int             LL_SM_CXFRAME;
extern  int             LL_SM_CYFRAME;

#define FindExistColor(c)       \
        (SHORT)GetNearestPaletteIndex(hpalette, (c)&0x00FFFFFF)

#define LLRealizePalette(p)             RealizePalette(p)
#define LLSelectPalette(h,p,f)          SelectPalette(h,p,f)
#define LLAnimatePalette(p,f,n,m)       AnimatePalette(p,f,n,m)
#define LLCachedSetPalette(hdc)                                 \
        if (hdc != hdcpalette1) {                               \
                hdcpalette1 = hdc;                              \
                LLSelectPalette(hdc, hpalette, FALSE);          \
                if (mutable_flag == TRUE) {                     \
                        LLRealizePalette(hdc);                  \
                }                                               \
        }

#define LLCachedSetPalette2(hdc)                                \
        if (hdc != hdcpalette2) {                               \
                hdcpalette2 = hdc;                              \
                LLSelectPalette(hdc, hpalette, FALSE);          \
                if (mutable_flag == TRUE) {                     \
                        LLRealizePalette(hdc);                  \
                }                                               \
        }

extern  double  winversion(void);
extern  SHORT   windows_query_fonts(LONG *allh, SHORT n);

/*
 *      winbitma.c
 */

extern  BOOL    windows_bitmap_PS_create(VOID);
extern  HBITMAP windows_create_bitmap(SHORT w, SHORT h);
extern  BOOL    windows_kill_bitmap(HBITMAP bitmap);
extern  SHORT   windows_bmref(HDC hp, SHORT x, SHORT y, SHORT back, BOOL flag_mem);
extern  BOOL    windows_bmset(HDC hp, SHORT x, SHORT y, SHORT bit, SHORT back, SHORT fore, BOOL flag_mem);
extern  BOOL    windows_set_bit_line(HDC hp, SHORT x, SHORT y, LPSTR szbits, SHORT w, SHORT back, SHORT fore, BOOL flag_mem);
extern  BOOL    windows_get_bit_line(HDC hp, SHORT x, SHORT y, LPSTR szbits, SHORT w, SHORT back, BOOL flag_mem);
extern  BOOL    windows_set_byte_line(HDC hp, SHORT x, SHORT y, LPSTR szbits, SHORT w, BOOL flag_mem);
extern  BOOL    windows_get_byte_line(HDC hp, SHORT x, SHORT y, LPSTR szbits, SHORT w, SHORT h, BOOL flag_mem);
extern  BOOL    windows_bitblit(HDC hp1, HDC hp2, SHORT x1, SHORT y1, SHORT x2, SHORT y2, SHORT w, SHORT h, HDC hdc, BOOL flag1_mem, BOOL flag2_mem);
extern  BOOL    windows_subst_colors(HDC hp, LONG *old, LONG *new, SHORT size, SHORT w, SHORT h, BOOL flag_mem);
extern  BOOL    windows_remap_bytemap_color(LPSTR bytevect, LONG *table, SHORT size);
extern  HBITMAP windows_create_stipple(SHORT w, SHORT h, LPSTR data);

/*
 *      wincolor.c
 */

extern  BOOL    windows_color_component(SHORT indx, SHORT red, SHORT green, SHORT blue, SHORT flag);
extern  BOOL    windows_init_table_color(void);
extern  BOOL    windows_kill_color(SHORT indx);
extern  SHORT   windows_make_color(SHORT red, SHORT green, SHORT blue, SHORT mutable);
extern  BOOL    windows_select_palette(HDC hdc);

/*
 *      windraw.c
 */

extern  BOOL    windows_draw_cn(HWND hwnd, HDC hdc, SHORT x, SHORT y, SHORT cn);
extern  BOOL    windows_draw_string(HWND hwnd, HDC hdc, SHORT x, SHORT y, LPSTR string, SHORT start, SHORT length);
extern  BOOL    windows_draw_cn_noback(HWND hwnd, HDC hdc, SHORT x, SHORT y, SHORT cn);
extern  BOOL    windows_draw_string_noback(HWND hwnd, HDC hdc, SHORT x, SHORT y, LPSTR string, SHORT start, SHORT length);
extern  BOOL    windows_draw_point(HWND hwnd, HDC hdc, SHORT x, SHORT y);
extern  BOOL    windows_draw_points(HWND hwnd, HDC hdc, LONG *vx, LONG *vy, SHORT n, SHORT dx, SHORT dy);
extern  BOOL    windows_draw_line(HWND hwnd, HDC hdc, SHORT x1, SHORT y1, SHORT x2, SHORT y2);
extern  BOOL    windows_draw_lines(HWND hwnd, HDC hdc, LONG *vx, LONG *vy, SHORT n, SHORT dx, SHORT dy);
extern  BOOL    windows_draw_segments(HWND hwnd, HDC hdc, LONG *vx1, LONG *vy1, LONG *vx2, LONG *vy2, SHORT n, SHORT dx, SHORT dy);
extern  BOOL    windows_draw_rectangle(HWND hwnd, HDC hdc, SHORT x, SHORT y, SHORT w, SHORT h);
extern  BOOL    windows_draw_rectangles(HWND hwnd, HDC hdc, LONG *vx, LONG *vy, LONG *vw, LONG *vh, SHORT n, SHORT dx, SHORT dy, SHORT flag);
extern  BOOL    windows_draw_arc(HWND hwnd, HDC hdc, SHORT x, SHORT y, SHORT w, SHORT h, SHORT angl1, SHORT angl2);
extern  BOOL    windows_draw_arcs(HWND hwnd, HDC hdc, LONG *vx, LONG *vy, LONG *vw, LONG *vh, LONG *vangl1, LONG *vangl2, SHORT n);
extern  BOOL    windows_fill_arc(HWND hwnd, HDC hdc, SHORT x, SHORT y, SHORT w, SHORT h, SHORT angl1, SHORT angl2);
extern  BOOL    windows_fill_arcs(HWND hwnd, HDC hdc, LONG *vx, LONG *vy, LONG *vw, LONG *vh, LONG *vangl1, LONG *vangl2, SHORT n);
extern  BOOL    windows_fill_chord(HWND hwnd, HDC hdc, SHORT x, SHORT y, SHORT w, SHORT h, SHORT angl1, SHORT angl2);
extern  BOOL    windows_fill_chords(HWND hwnd, HDC hdc, LONG *vx, LONG *vy, LONG *vw, LONG *vh, LONG *vangl1, LONG *vangl2, SHORT n);
extern  BOOL    windows_fill_rectangle(HWND hwnd, HDC hdc, SHORT x, SHORT y, SHORT w, SHORT h);
extern  BOOL    windows_fill_rectangles(HWND hwnd, HDC hdc, LONG *vx, LONG *vy, LONG *vw, LONG *vh, SHORT n, SHORT dx, SHORT dy, SHORT flag);
extern  BOOL    windows_fill_area(HWND hwnd, HDC hdc, LONG *vx, LONG *vy, SHORT n, SHORT dx, SHORT dy);

/*
 *      winevent.c
 */

extern  SHORT   LL_New_Event;

extern  BOOL    windows_dblclks_flag(SHORT flag);
extern  BOOL    windows_eventp(void);
extern  SHORT   windows_event_tyi(VOID);
extern  void    windows_flush_event(void);
extern  BOOL    windows_grab_event(HWND hwnd);
extern  BOOL    windows_move_cursor(SHORT x, SHORT y);
extern  LONG    windows_parse_event(LONG *llevent, struct WINEvent winevent);
extern  LONG    windows_peek_event(LONG *llevent);
extern  LONG    windows_read_event(LONG *llevent);
extern  LONG    windows_read_mouse(LONG *llevent);
extern  BOOL    windows_ungrab_event(void);

extern  void    LL_wm_char(HWND hwnd, UINT msg, WPARAM wParam);
extern  void    LL_wm_key(HWND hwnd, UINT msg, WPARAM wParam);
extern  void    LL_wm_mouse_move(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
extern  void    LL_wm_mouse_dblclks(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
extern  void    LL_wm_mouse_down(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
extern  void    LL_wm_mouse_up(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);


extern  LONG FAR PASCAL TopWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
extern  LONG FAR PASCAL SubWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
extern  LONG FAR PASCAL TransWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

/*
 *      wingraph.c
 */

extern  HCURSOR windows_create_cursor(LPSTR andbit, LPSTR xorbit, SHORT w);
extern  BOOL    windows_current_window(HDC hdc, HWND hwnd, LONG *args);
extern  SHORT   windows_font_ascent(SHORT font);
extern  SHORT   windows_font_height(SHORT font);
extern  SHORT   windows_font_info(SHORT font, LONG *llinfo);
extern  SHORT   windows_get_fonts(LPSTR string, SHORT nbmax);
extern  SHORT   windows_height_string(HDC hdc, LPSTR string, SHORT start, SHORT length);
extern  SHORT   windows_load_font(SHORT font);
extern  HCURSOR windows_named_cursor(LPSTR string);
extern  HDC     windows_new_create_graph_env(HWND hwnd, SHORT font, SHORT width, SHORT style, HBITMAP hbitmap, SHORT pattern, SHORT fillmode, SHORT mode, SHORT fore, SHORT back);
extern  BOOL    windows_set_background(HDC hdc, SHORT nocolor);
extern  HCURSOR windows_set_cursor(HWND hwnd, HCURSOR hcursor);
extern  BOOL    windows_set_fill_mode(HDC hdc, HBITMAP bitmap, SHORT pattern, SHORT fill_mode);
extern  BOOL    windows_set_foreground(HDC hdc, SHORT nocolor, SHORT width, SHORT style);
extern  BOOL    windows_set_line_style(HDC hdc, SHORT width, SHORT style, SHORT nocolor);
extern  BOOL    windows_set_mode(HDC hdc, SHORT mode);
extern  BOOL    windows_set_font(HDC hdc, SHORT font);
extern  BOOL    windows_set_window_background(HWND hwnd, SHORT nocolor);
extern  SHORT   windows_system_font_size(void);
extern  SHORT   windows_width_string(HDC hdc, LPSTR string, SHORT start, SHORT length);
/* Special extensions for Windows */
extern  BOOL    windows_hilight(int hiFlag);
extern  BOOL    windows_mutable(int muFlag);
extern  SHORT   windows_palette_color(int index, LONG *args);
extern  SHORT   windows_set_optional_fontname(char *fnt);
extern  SHORT   windows_system_parameters(int len, LONG *args);
extern  SHORT   windows_system_work_area(LONG *rect);
extern  SHORT   windows_system_color(int index, LONG *args);

/*
 *      winwindo.c
 */

extern  struct LLDISPLAY *
                windows_bitprologue(LONG *vect_args, LONG *allh, SHORT n);
extern  BOOL    windows_bitepilogue(struct LLDISPLAY *display);
extern  BOOL    windows_change_title(HWND hwnd, LPSTR title);
extern  BOOL    windows_clear_window(HWND hwnd, HDC hdc, SHORT x, SHORT y, SHORT w, SHORT h);
extern  HWND    windows_create_transwindow(SHORT x, SHORT y, SHORT w, SHORT h, HCURSOR cursor, SHORT visible, HWND parent, LONG lwin);
extern  HWND    windows_create_subwindow(LONG *properties, LPSTR title, HCURSOR cursor, SHORT visible, HWND parent, LONG lwin);
extern  HWND    windows_create_window_owner(HWND owner, LONG *properties, LPSTR title, HCURSOR cursor, SHORT visible , LONG lwin);
extern  HWND    windows_create_window(LONG *properties, LPSTR title, HCURSOR cursor, SHORT visible , LONG lwin);
extern  LONG    windows_find_window(SHORT x, SHORT y);
extern  BOOL    windows_free_graph_env(HDC hdc);
extern  BOOL    windows_keyboard_focus(HWND hwnd, SHORT focus);
extern  BOOL    windows_kill_window(HWND hwnd, HDC hdc);
extern  BOOL    windows_liberedisplay(struct LLDISPLAY *display);extern       BOOL    windows_topmove_window(HWND hwnd, SHORT x, SHORT y, SHORT activ);
extern  BOOL    windows_map_window(HWND hwnd, SHORT x, SHORT y, LONG *vect_args);
extern  BOOL    windows_move_window(HWND hwnd, SHORT x, SHORT y);
extern  BOOL    windows_moveresize_window(HWND hwnd, SHORT x, SHORT y, SHORT w, SHORT h);
extern  BOOL    windows_move_behind_window(HWND hwnd1, HWND hwnd2);
extern  BOOL    windows_pop_window(HWND hwnd);
extern  BOOL    windows_push_window(HWND hwnd);
extern  BOOL    windows_resize_window(HWND hwnd, SHORT w, SHORT h);
extern  BOOL    windows_set_clip(HDC hdc, SHORT x, SHORT y, SHORT w, SHORT h);
extern  BOOL    windows_set_clips(HDC hdc, LONG *vx, LONG *vy, LONG *vw, LONG *vh, SHORT n);
extern  BOOL    windows_set_window_state(HWND hwnd , SHORT state);
extern  BOOL    windows_set_foreground_window(HWND hwnd);
extern  BOOL    windows_topchangewindow_border(HWND hwnd, SHORT hilited);
extern  BOOL    windows_topmoveresize_window(HWND hwnd, SHORT x, SHORT y, SHORT w, SHORT h);
extern  BOOL    windows_topresize_window(HWND hwnd, SHORT w, SHORT h);
extern  HWND    windows_root_window(LONG win);
extern  BOOL    windows_window_map(HWND hwnd);
extern  BOOL    windows_window_unmap(HWND hwnd);
