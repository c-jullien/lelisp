/*
 static char *sccsid = "@(#)winterm.h   (c) ELIGIS 2003/05/25";
 */

#define IDM_LOAD        100
#define IDM_BREAK       101
#define IDM_QUIT        102
#define IDM_ABOUT       103

#define IDM_CUT         200
#define IDM_COPY        201
#define IDM_PASTE       202

#define IDM_MENU        600

#define LELISPICON      1
#define LELISPICON2     2
#define AIDAICON        3
#define MASAIICON       4
#define MAIDA2DICON     5
#define PECOSICON       6

/*
#define IDP_CIRCLE      2
#define IDP_CROSS       3
#define IDP_CROSSHAIR   4
#define IDP_DIAMOND     5
#define IDP_DOT         6
#define IDP_EXCHANGE    7
#define IDP_IRONCROSS   8
#define IDP_MOUSE       9
#define IDP_PLUS        10
#define IDP_QUESTION    11
#define IDP_SIZING      12
#define IDP_SPRAY       13
#define IDP_COMPASS     14
#define IDP_LEFT_HAND   15
#define IDP_HEART       16
#define IDP_PENCIL      17
#define IDP_PIRATE      18
*/
        
#if     !defined(FAR)
#define FAR             far
#endif

#if     !defined(VOID)
#define VOID            void
#endif

#if     !defined(LONG)
#define LONG            long
#endif

#if     !defined(ULONG)
#define ULONG           unsigned long
#endif

#if     !defined(CHAR)
#define CHAR            char
#endif

#if     !defined(UCHAR)
#define UCHAR           unsigned char
#endif

#if     !defined(SHORT)
#define SHORT           short
#endif

#if     !defined(USHORT)
#define USHORT          unsigned short
#endif

#if     !defined(UINT)
#define UINT            unsigned int
#endif

extern  HWND    hCurWnd;
extern  HWND    hMainWnd;
extern  HANDLE  hInst;
extern  HDC     hTTyDC;
extern  HICON   hIcon;
extern  DWORD   BackColor;
extern  DWORD   TextColor;
extern  HBRUSH  hBrush;
extern  HPEN    hPen;
extern  HFONT   hFont;
extern  int     nCol;
extern  int     nRow;
extern  int     nParentWidth;
extern  int     nParentHeight;
extern  int     nCharWidth;
extern  int     nCharHeight;
extern  int     nNeedEvent;
extern  int     nMenuItem;

void    WINopen(void);
void    WINclose(void);
int     WINtyi(void);
int     WINtys(void);
void    WINtyo(char aChar);
int     WINtystring(char *szText, int nSize);
void    WINtycursor(SHORT nRow, SHORT nCol);
void    WINtycleol(void);
void    WINtycls(void);
void    WINtyflush(void);
void    WINtybeep(void);
void    WINtyattrib(int nFlag);
void    WINtyshowcursor(int nFlag);
int     WINtyxmax(void);
int     WINtyymax(void);

extern LRESULT CALLBACK MainWndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
extern LRESULT CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam);

