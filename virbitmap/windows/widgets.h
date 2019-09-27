/*
 static char *sccsid = "@(#)widgets.h   (c) ELIGIS 03/18/95";
 */

/*
 *      GetFile
 */

#define IDC_GETFILE     400

#define IDC_FILENAME    (IDC_GETFILE + 0)
#define IDC_EDIT        (IDC_GETFILE + 1)
#define IDC_FILES       (IDC_GETFILE + 2)
#define IDC_PATH        (IDC_GETFILE + 3)
#define IDC_LISTBOX     (IDC_GETFILE + 4)

LPSTR   GetFile(LPSTR);

/*
 *      GetText
 */

#define ID_GETTEXT      500

#define IDG_OK          (ID_GETTEXT + 0)
#define IDG_CANCEL      (ID_GETTEXT + 1)
#define IDG_EDIT        (ID_GETTEXT + 2)
#define IDG_STATIC      (ID_GETTEXT + 3)

LPSTR WinGetText(LPSTR, LPSTR);
