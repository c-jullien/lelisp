#if     !defined(lint)
static  char *sccsid = "@(#)ntterm.c    (c) C. Jullien 2005/11/25";
#endif

/*
 *      ntterm.c :      
 */

#if     defined(_MSC_VER) && (_MSC_VER >= 1400)
#define _CRT_SECURE_NO_DEPRECATE        1
#define _CRT_NONSTDC_NO_DEPRECATE       1
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <io.h>
#include <time.h>

extern int      DOSinitfpu(double version);
extern int      DOSsleep(long seconds);
extern void     DOSiniterm(void);
extern void     DOSlispterm(void);
extern void     DOSsysterm(void);
extern void     DOStyprologue(void);
extern void     DOStyepilogue(void);
extern char     DOStyi(void);
extern int      DOStys(void);
extern int      DOStyo(int c);
extern int      DOSputs(char *szText, int nSize);
extern void     DOStycursor(int col, int row);
extern void     DOStycls(void);
extern void     DOStycleol(void);
extern void     DOStybeep(void);
extern void     DOStyattrib(int flag);
extern void     DOStystring(char *str, int size);
extern void     DOStyshowcursor(int flag);
extern int      DOStyxmax(void);
extern int      DOStyymax(void);
extern int      DOScolor(int color);

static  int     NTncols = 80;
static  int     NTnrows = 25;
static  int     NTinitty= 0;

int     WinFlag         = 0;            /* runs in text mode            */

static  WORD    NTcurcolor;
static  WORD    NTinvcolor;
static  WORD    NToldcolor;
static  WORD    NTndxcolor;

#define RAWMASK ~(ENABLE_LINE_INPUT|ENABLE_ECHO_INPUT|ENABLE_PROCESSED_INPUT)

#define NTRGB(r, g, b)        ((r) | (g) | (b))

static  WORD    ntbackcolor[] = {
        NTRGB(0,              0,                0             ),
        NTRGB(0,              0,                BACKGROUND_BLUE),
        NTRGB(0,              BACKGROUND_GREEN, 0             ),
        NTRGB(0,              BACKGROUND_GREEN, BACKGROUND_BLUE),
        NTRGB(BACKGROUND_RED, 0,                0             ),
        NTRGB(BACKGROUND_RED, 0,                BACKGROUND_BLUE),
        NTRGB(BACKGROUND_RED, BACKGROUND_GREEN, 0             ),
        NTRGB(BACKGROUND_RED, BACKGROUND_GREEN, BACKGROUND_BLUE),
};

static  WORD    ntforecolor[] = {
        NTRGB(0,              0,                0             ),
        NTRGB(0,              0,                FOREGROUND_BLUE),
        NTRGB(0,              FOREGROUND_GREEN, 0             ),
        NTRGB(0,              FOREGROUND_GREEN, FOREGROUND_BLUE),
        NTRGB(FOREGROUND_RED, 0,                0             ),
        NTRGB(FOREGROUND_RED, 0,                FOREGROUND_BLUE),
        NTRGB(FOREGROUND_RED, FOREGROUND_GREEN, 0             ),
        NTRGB(FOREGROUND_RED, FOREGROUND_GREEN, FOREGROUND_BLUE),
};

#define NTFORCOLOR      3
#define NTBAKCOLOR      1

HANDLE  TermIn;
HANDLE  TermOut;

/*
 *      To force the presence of the 387 emulator.
 */

int
DOSinitfpu(double version)
{
        return(version == 15.26);
}

int
DOSsleep(long seconds)
{
#if     defined(CLOCKS_PER_SEC)
        clock_t tm = clock() + (clock_t)(seconds) * CLOCKS_PER_SEC;
#else
        clock_t tm = clock() + (clock_t)(seconds) * CLK_TCK;
#endif
        while(clock() < tm)
                ;
        return(0);
}

void
DOSiniterm(void)
{
        CONSOLE_SCREEN_BUFFER_INFO csInfo;

        GetConsoleScreenBufferInfo(TermOut, &csInfo);

        NTinitty   = 1;
        TermIn     = GetStdHandle(STD_INPUT_HANDLE);
        TermOut    = GetStdHandle(STD_OUTPUT_HANDLE);
        NTncols    = csInfo.dwSize.X;
        NTnrows    = csInfo.dwSize.Y;
        NTndxcolor = NTBAKCOLOR * 10 + NTFORCOLOR;
}

void
DOSlispterm(void)
{
        if (NTinitty == 0)
                DOSiniterm();
}

void
DOSsysterm(void)
{
}

void
DOStyprologue(void)
{
        CONSOLE_SCREEN_BUFFER_INFO csInfo;

        GetConsoleScreenBufferInfo(TermOut, &csInfo);

        NToldcolor = csInfo.wAttributes;
        NTcurcolor = ntforecolor[NTFORCOLOR] | ntbackcolor[NTBAKCOLOR];
        NTinvcolor = ntforecolor[NTBAKCOLOR] | ntbackcolor[NTFORCOLOR];
        NTncols    = csInfo.dwSize.X;
        NTnrows    = csInfo.dwSize.Y;
}

void
DOStyepilogue(void)
{
        DOStycursor(0, NTncols - 1);
        DOStycleol();
        DOStycursor(0, NTncols - 1);
        SetConsoleTextAttribute(TermOut, NToldcolor);
}

#define NTctrlp(x)    ((x) & (RIGHT_CTRL_PRESSED|LEFT_CTRL_PRESSED))

char
DOStyi(void)
{
        DWORD           dwMode;         /* to save the input mode */
        INPUT_RECORD    irBuf;          /* buffer to read into    */
        DWORD           dwRead;         /* char count read        */
        DWORD           dwCKState;
        static  int     ctrlkey = 0;

        if (ctrlkey) {
                int ret = ctrlkey;
                ctrlkey = 0;
                return((char)ret);
        }

        GetConsoleMode(TermIn, &dwMode);
        SetConsoleMode(TermIn, dwMode & RAWMASK);

        for (;;) {
                ReadConsoleInput(TermIn, &irBuf, 1, &dwRead);

                if (dwRead > 0 && irBuf.EventType == KEY_EVENT) {
                        if (irBuf.Event.KeyEvent.bKeyDown == FALSE)
                                continue;

                        /*
                         *      This  code  may look strange,  but it
                         *      provide  compatibility  with  DOS key
                         *      scan code.
                         */

                        dwCKState = irBuf.Event.KeyEvent.dwControlKeyState;

                        switch(irBuf.Event.KeyEvent.wVirtualKeyCode) {
                        case VK_CONTROL :
                        case VK_SHIFT   :
                                continue;
                        case VK_LEFT    :
                        case VK_RIGHT   :
                        case VK_UP      :
                        case VK_DOWN    :
                        case VK_END     :
                        case VK_HOME    :
                        case VK_INSERT  :
                        case VK_PRIOR   :
                        case VK_NEXT    :
                        case VK_DELETE  :
                        case VK_F1      :
                        case VK_F2      :
                        case VK_F3      :
                        case VK_F4      :
                        case VK_F5      :
                        case VK_F6      :
                        case VK_F7      :
                        case VK_F8      :
                        case VK_F9      :
                        case VK_F11     :
                        case VK_F12     :
                                ctrlkey = irBuf.Event.KeyEvent.wVirtualScanCode;
                                SetConsoleMode(TermIn, dwMode);
                                return(0);
                        }

                        if (irBuf.Event.KeyEvent.uChar.AsciiChar == 0)
                                continue;

                        SetConsoleMode(TermIn, dwMode);

                        return(irBuf.Event.KeyEvent.uChar.AsciiChar);
                }

        }
}

int
DOStys(void)
{
        DWORD           dwMode;         /* to save the input mode */
        INPUT_RECORD    irBuf;          /* buffer to read into    */
        DWORD           dwRead;         /* char count read        */

        GetConsoleMode(TermIn, &dwMode);
        SetConsoleMode(TermIn, dwMode & RAWMASK);
        PeekConsoleInput(TermIn, &irBuf, 1, &dwRead);
        SetConsoleMode(TermIn, dwMode);

        if (dwRead > 0 && irBuf.EventType == KEY_EVENT)
                if (irBuf.Event.KeyEvent.bKeyDown == FALSE)
                        return(-1);
                else    return(DOStyi());
        else    return(-1);
}

int
DOStyo(int c)
{
        static  char    aChar[] = "X";

        if (NTinitty == 0)
                return(fputc(c & 0xFF, stdout));

        aChar[0] = (char)c;

        DOStystring(&aChar[ 0 ], 1);

        return(c);
}

int
DOSputs(char *szText, int nSize)
{
        int     cc = fileno(stdout);

        if (isatty(cc)) {
                DOStystring(szText, nSize);
                return(nSize);
        } else  cc = write(cc, szText, nSize);

        return(cc);
}

void
DOStycursor(int col, int row)
{
        COORD   dwCursorPosition;

        dwCursorPosition.X = (SHORT)col;
        dwCursorPosition.Y = (SHORT)row;

        SetConsoleCursorPosition(TermOut, dwCursorPosition);
}

void
DOStycls(void)
{
        COORD                      cr;
        DWORD                      dwWritten;
        CONSOLE_SCREEN_BUFFER_INFO csInfo;

        GetConsoleScreenBufferInfo(TermOut, &csInfo);

        cr.X = (SHORT)0;
        cr.Y = (SHORT)0;

        /*
         * this  clears  the  characters  first,  and then clears the
         * attribute.
         */

        FillConsoleOutputCharacter(
                                    TermOut,
                                    ' ', 
                                    csInfo.dwSize.Y * csInfo.dwSize.X,
                                    cr, 
                                    &dwWritten
                                );
        FillConsoleOutputAttribute(
                                    TermOut,
                                    NTcurcolor,
                                    csInfo.dwSize.Y * csInfo.dwSize.X,
                                    cr,
                                    &dwWritten
                                );
}

void
DOStycleol(void)
{
        DWORD                      dwWritten;
        CONSOLE_SCREEN_BUFFER_INFO csInfo;

        GetConsoleScreenBufferInfo(TermOut, &csInfo);

        /*
         * this  clears  the  characters  first,  and then clears the
         * attribute.
         */

        FillConsoleOutputCharacter(
                                    TermOut,
                                    ' ', 
                                    csInfo.dwSize.X - csInfo.dwCursorPosition.X,
                                    csInfo.dwCursorPosition, 
                                    &dwWritten
                                );
        FillConsoleOutputAttribute(
                                    TermOut,
                                    NTcurcolor,
                                    csInfo.dwSize.X - csInfo.dwCursorPosition.X,
                                    csInfo.dwCursorPosition, 
                                    &dwWritten
                                );

}

void
DOStybeep(void)
{
        (void)fputc(0x07, stdout);
}

void
DOStyattrib(int flag)
{
        if (flag)
                SetConsoleTextAttribute(TermOut, NTinvcolor);
        else    SetConsoleTextAttribute(TermOut, NTcurcolor);
}

void
DOStystring(char *str, int size)
{
        DWORD   res;

        WriteConsole(TermOut, str, size, &res, NULL);
}

void
DOStyshowcursor(int flag)
{
        CONSOLE_CURSOR_INFO     ccInfo;

        GetConsoleCursorInfo(TermOut, &ccInfo);
        if (flag)
                ccInfo.bVisible = TRUE;
        else    ccInfo.bVisible = FALSE;
        SetConsoleCursorInfo(TermOut, &ccInfo);
}

int
DOStyxmax(void)
{
        return(NTncols - 1);
}

int
DOStyymax(void)
{
        return(NTnrows - 1);
}

int
DOScolor(int color)
{
        /*
         *      When color = 67, it means :
         *              foreground = index at 67 % 8
         *              background = index at 67 / 16
         */

        int     fg       = (color % 8);
        int     bg       = (color / 16);
        int     oldcolor = NTndxcolor;

        NTcurcolor = ntforecolor[fg] | ntbackcolor[bg];
        NTinvcolor = ntforecolor[bg] | ntbackcolor[fg];
        NTndxcolor = (WORD)(bg * 10 + fg);

        SetConsoleTextAttribute(TermOut, NTcurcolor);

        return(oldcolor);
}

int
NT386isatty(int fd)
{
        return(isatty(fd));
}

/*
 *      The simulation of signals.
 */

#define NB_INTEST       0xFFFF

int     itloop = NB_INTEST;

void
ll_intest(void)
{
        itloop = NB_INTEST;
}

char *
alarm()
{
        return(NULL);
}

int
llgetinlib(char *fun, char *lib, int types[], int len)
{
        (void)fun;
        (void)lib;
        (void)types;
        (void)len;
        return(0);
}
