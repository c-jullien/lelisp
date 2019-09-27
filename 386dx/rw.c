#if     !defined( lint )
static  char *sccsid = "@(#)rw.c        (c) C. Jullien 1998/12/18";
#endif

/*
 *      rw.c :  random acces for Le-Lisp
 */

#include <windows.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lelisp.h"

#define MAXFILE 10
#define PAGSIZ  32768

static  FILE*   handtab[ MAXFILE ];
static  int     init = 1;

#if     defined( _DLL )

#define LLEXTRN int FAR PASCAL

#if     !defined( DUMMY_ARGUMENT )
#define DUMMY_ARGUMENT( x )     ((x) = (x))
#endif

static  HANDLE  hInst;

int FAR PASCAL
LibMain( HANDLE hModule, WORD wDataSeg, WORD cbHeapSize, LPSTR lpszCmdLine )
{
        DUMMY_ARGUMENT( wDataSeg );
        DUMMY_ARGUMENT( cbHeapSize );
        DUMMY_ARGUMENT( lpszCmdLine );

        hInst = hModule;

        return( 1 );
}

#if     defined( _WEP_NOTDEF )
int FAR PASCAL
WEP( int bSystemExit )
{
        return( bSystemExit );
}
#endif

#else

#define LLEXTRN int
#define LPSTR   char *

#endif

LLEXTRN
rw_open( LPSTR filename, LPSTR mode )
{
        FILE    *f;
        int     i;
        
        if( init ) {
                init = 0;

                for( i = 0 ; i < MAXFILE ; i++ )
                        handtab[i] = NULL;
                i = 0;
        } else  {

                /*
                 *      Find the first empty slot in the table
                 */

                for( i = 0 ; (i<MAXFILE) && (handtab[i]!=NULL) ; i++ )
                        continue;

                /*
                 *      No more slot free ?
                 */

                if( i == MAXFILE )
                        return( -1 );
        }
        /* ouverture fichier */
        f = fopen( filename, mode );
        
        /* si erreur ouverture, renvoie code erreur -2 */
        if( f == NULL )
                return( -2 );

        handtab[i] = f;
        return( i );

}

LLEXTRN
rw_close( int handle )
{
        FILE    *f = handtab[handle];

        handtab[ handle ] = NULL;
                
        if( fclose( f ) == EOF )
                return( -1 );
        else    return( 0 );
}

LLEXTRN
rw_flush( int handle )
{
        FILE    *f = handtab[handle];
                
        if( fflush( f ) == EOF )
                return( -1 );
        else    return( 0 );
}

LLEXTRN
rw_eofp( int handle )
{
        FILE    *f = handtab[handle];
        
        if( feof( f ) )
                return( 1 );
        else    return( 0 );
}

LLEXTRN
rw_errorp( int handle )
{
        FILE    *f = handtab[handle];
        
        if( ferror( f ) == EOF )
                return( 1 );
        else    return( 0 );
}

LLEXTRN
rw_read_char( int handle )
{
        FILE    *f = handtab[handle];

        return( fgetc( f ) );
}

LLEXTRN
rw_unread_char( int handle, int c )
{
        FILE    *f = handtab[ handle ];
        
        if( ungetc( c, f ) == EOF )
                return( -1 );
        else    return( 0 );
}

LLEXTRN
rw_read_buf( int handle, LPSTR s, int n )
{
        FILE *f = handtab[handle];

        return( fread( s, 1, n, f ) );
}

LLEXTRN
rw_read_line( int handle, LPSTR s, int n )
{
        FILE    *f = handtab[handle];
        int     l  = strlen( s );
        int     nblu;
        int     i;
        
        if( fgets( s, n+1, f ) == NULL )
                return( -1 );

        nblu = strlen( s );

        for( i = nblu ; i < l ; i++ )
                s[i] = ' ';

        return( nblu );

}

#if     !defined( _DLL )

LLEXTRN
rw_read_word( int handle, struct LL_CONS *db )
{
        FILE    *f = handtab[handle];
        int     hi;
        int     lo;
        
        (void)fread( &hi, sizeof( int ), 1, f );
        (void)fread( &lo, sizeof( int ), 1, f );

        if( ferror(f ) )
                return( -1 );
        
        pusharg( LLT_T, db );
        pusharg( LLT_FIX, hi );
        (void)lispcall( LLT_T, 2, getsym( "rplaca" ) );
        pusharg( LLT_T, db );
        pusharg( LLT_FIX, lo );
        (void)lispcall( LLT_T, 2, getsym( "rplacd" ) );
        return( 1 );
}

#endif

LLEXTRN
rw_read_short( int handle )
{
        FILE    *f = handtab[handle];
        short   s;
        
        (void)fread( &s, sizeof( short ), 1, f );

        if( ferror( f ) )
                return( -1 );

        return( (int)s );
}

LLEXTRN
rw_write_char( int handle, int c )
{
        FILE    *f = handtab[handle];
        
        if( fputc( c, f ) == EOF )
                return( -1 );
        else    return( 0 );
}

LLEXTRN
rw_write_buf( int handle, LPSTR s, int n )
{
        FILE    *f = handtab[handle];
        
        return( fwrite( s, 1, n, f ) );
}

LLEXTRN
rw_write_line( int handle, LPSTR s, int n )
{
        FILE    *f = handtab[handle];
        
        (void)fwrite( s, 1, n, f );

        return( fputc( '\n', f ) );
}

LLEXTRN
rw_write_word( int handle, int hi, int lo )
{
        FILE    *f = handtab[handle];

        (void)fwrite( &hi, sizeof( int ), 1, f );
        (void)fwrite( &lo, sizeof( int ), 1, f );

        if( ferror( f ) )
                return( -1 );

        return( 0 );
}

LLEXTRN
rw_get_page( int handle )
{
        FILE    *f  = handtab[handle];
        long    val = ftell( f );
        
        if( val == -1L )
                return( -1 );
        
        return( (int) (val / PAGSIZ) );
}

LLEXTRN
rw_get_offset( int handle )
{
        FILE    *f  = handtab[handle];
        long    val = ftell( f );
        
        if( val == -1L )
                return( -1 );
        
        return( (int) (val % PAGSIZ) );
}

LLEXTRN
rw_seek( int handle, int page, int offset, int origin )
{
        FILE    *f = handtab[handle];
        
        if( fseek( f, ((long)page)*PAGSIZ+offset, origin ) )
                return( -1 );
        else    return(  0 );
}
