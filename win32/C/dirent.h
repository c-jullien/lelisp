/*
 * static char *sccsid = "@(#)dirent.h  (c) C. Jullien 1996/10/18";
 */

#ifndef __DIRENT_H
#define __DIRENT_H

#if     defined( __cplusplus )
extern "C" {
#endif

#if     defined( _DOS )
#define MAXNAMLEN       13
#endif

#if     !defined( MAXNAMLEN )
#define MAXNAMLEN       255
#endif

#define I_STD   0x0000          /* Normal file - No restrictions */
#define I_RDO   0x0001          /* Read only file                */
#define I_HID   0x0002          /* Hidden file                   */
#define I_SYS   0x0004          /* System file                   */
#define I_LAB   0x0008          /* Volume ID file                */
#define I_DIR   0x0010          /* Subdirectory                  */
#define I_ARC   0x0020          /* Archive file                  */

struct  dirent {
        unsigned long   d_ino;          /* inode number of entry */
        unsigned short  d_namlen;       /* length of d_name      */
        char    d_name[MAXNAMLEN];      /* filename              */
};

/*
 * Definitions for library routines operating on directories.
 */

#if     defined( _NT ) || defined( WIN32 )

#include <windows.h>

typedef struct _dirdesc {
        HANDLE          dd_hFindFile;
        WIN32_FIND_DATA dd_lpffd;
        unsigned int    status;         /* Status flag            */
        long            dd_loc;         /* Current location       */
        char            *dd_path;       /* Path name              */
        struct dirent   *dd_direct;     /* Pointer to direct      */
} DIR;

#endif

#if     defined( _OS2 )

typedef struct _dirdesc {
        long            dd_loc;
        long            dd_size;
        char            *dd_path;               /* Path name              */
        struct dirent   *dd_direct;             /* Pointer to dirent      */
        unsigned        dd_doshandle;
        unsigned        status;
#if     defined( _OS2V1 )
        FILEFINDBUF     dd_resbuf;              /* pointer to data        */
#else
        FILEFINDBUF3    dd_resbuf;              /* pointer to data        */
#endif

} DIR;

#endif

#if     !defined( _OS2 ) && !defined( _NT )

#if     defined( __SC__ )
#pragma pack(1)
#endif

typedef struct _dirdesc {
        unsigned char   dos[21];                /* DOS use (find next)    */
        unsigned char   attr;                   /* attribute found        */ 
#if     defined( __SC__ )
        unsigned short  time;
        unsigned short  wr_date;                /* file's last write      */
#else
        unsigned char   time[2];                /* file's time            */
        unsigned int    dd : 5;                 /* file's day    (5 bits) */
        unsigned int    mm : 4;                 /* file's month  (4 bits) */
        unsigned int    yy : 7;                 /* file's year   (7 bits) */
#endif
        long            dd_size;                /* size of current file   */
        char            dd_buf[13];             /* file name              */
        unsigned int    status;                 /* Status flag            */
        long            dd_loc;                 /* Current location       */
        char            *dd_path;               /* Path name              */
        struct dirent   *dd_direct;             /* Pointer to direct      */
} DIR;

#if     defined( __SC__ )
#pragma pack()
#endif

#endif

#if     defined( __STDC__ ) || defined( _ISO ) || defined( __cplusplus )
DIR     *opendir( const char *file );
struct  dirent *readdir( DIR *dirp );
void    rewinddir( DIR *dirp );
int     closedir( DIR *dirp );
#if     !defined( _POSIX_SOURCE ) && !defined( _POSIX_C_SOURCE )
long    telldir( DIR *dirp );
void    seekdir( DIR *dirp, long loc );
#endif
#else
DIR     *opendir();
struct  dirent *readdir();
void    rewinddir();
int     closedir();
#if     !defined( _POSIX_SOURCE ) && !defined( _POSIX_C_SOURCE )
long    telldir();
void    seekdir();
#endif
#endif

#if     defined( __cplusplus )
}
#endif

#endif
