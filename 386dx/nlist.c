#if     !defined( lint )
static  char *sccsid = "@(#)nlist.c     (c) ELIGIS 2005/11/25";
#endif

/*
 *      nlist.c :
 */

#if     defined( _MSC_VER ) && (_MSC_VER >= 1400)
#define _CRT_SECURE_NO_DEPRECATE        1
#define _CRT_NONSTDC_NO_DEPRECATE       1
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
 *      Some usefull macros.
 */

#define INTVAL( c )     (isdigit( (c) ) ? (c) - '0' \
                                        : (c)+10-(isupper( (c) ) ? 'A' : 'a'))
#define FPUTS( string, file )   \
        if( fputs( string, file ) == EOF ) {\
                (void)fprintf( stderr, "Can't write asm file\n" );\
                exit( -5 );\
        }

/*
 *      Data structures.
 */

typedef struct SEGMENTS_TAB {
        unsigned int    number;
        char            type;
} SEGMENTS_TAB;

typedef struct LIST {
        char            name[ 80 ];
        char            type;   
        struct LIST     *cdr;
} LIST;

/*
 *
 *      Defines.
 *
 */

#define WATCOM                  0
#define WINDOWS                 1
#define WATOS2                  2
#define IBM                     3
#define NT386                   4
#define BCCOS2                  5

#define ELEM                    "elem"
#define _ELEM                   "_elem"

#define CODE                    'c'
#define DATA                    'd'

#define MAX_SEG                 5
#define MAX_SEG_OS2             4
#define MAX_SEG_WAT             2
#define MAX_SEG_NT386           5

#define GRAB_LINES_WAT          2
#define GRAB_LINES_IBM          1
#define GRAB_LINES_NT386        1
#define GRAB_LINES_BCCOS2       1

#define NAME_POS_WAT            15
#define NAME_POS_IBM            21
#define NAME_POS_NT386          21
#define NAME_POS_BCCOS2         21

#define SEGMENT_POS1_WAT        53
#define SEGMENT_POS1_IBM        1
#define SEGMENT_POS1_NT386      1
#define SEGMENT_POS1_BCCOS2     1

#define SEGMENT_POS2_WAT        0
#define SEGMENT_POS2_IBM        1
#define SEGMENT_POS2_NT386      1
#define SEGMENT_POS2_BCCOS2     1

#define TYPE_POS_WAT            23
#define TYPE_POS_IBM            49
#define TYPE_POS_NT386          49
#define TYPE_POS_BCCOS2         49

#define ADDRESS_START_WAT       "Address"
#define ADDRESS_START_IBM       "  Address"
#define ADDRESS_START_NT386     "  Address"
#define ADDRESS_START_BCCOS2    "  Address"

#define SEGMENT_START_WAT       "Segment"
#define SEGMENT_START_IBM       " Start"
#define SEGMENT_START_NT386     " Start"
#define SEGMENT_START_BCCOS2    " Start"

#define CODE_STRING_WAT         "CODE"
#define CODE_STRING_IBM         "CODE 32"
#define CODE_STRING_NT386       "CODE"
#define CODE_STRING_BCCOS2      "CODE"

#define DATA_STRING_WAT         "DATA"
#define DATA_STRING_IBM         "DATA 32"
#define DATA_STRING_BCCOS2      "DATA"
#define DATA_STRING_NT386       "DATA"

/*
 *      Global variables.
 */

static  char    *elem;

static  char    *address_start;
static  char    *segment_start;
static  char    *code_string;
static  char    *data_string;

static  char    *stop           = "\n";

static  int     address_len;
static  int     code_len;
static  int     data_len;
static  int     segment_len;
static  int     stop_len;

static  SEGMENTS_TAB    seg_tab[MAX_SEG];
static  int             grab;
static  int             max_seg;
static  int             name_pos;
static  int             seg_pos1;
static  int             seg_pos2;
static  int             type_pos;

static  char    *fgetline( char *buf, int n, FILE *fd );

static  void    init( int system );

void
main( int argc, char **argv )
{
        char            buf1[1024];
        char            *b1;
        char            *b2;
        char            *inputfile;
        char            *outputfile;
        register int    i;
        register int    j;
        int             segment_nb;
        unsigned int    seg;
        int             system          = WATCOM;
        FILE            *fi;            /* Input  file. */
        FILE            *fo;            /* Output file. */
        LIST            list;
        LIST            *plist          = &list;

        /*
         *      Check the arguments.
         */

        switch( argc ) {

        case 3 :
                inputfile  = argv[1];
                outputfile = argv[2];
                break;

        case 4 :
                if( (*argv[1] == '-') || (*argv[1] == '/') ) {
                        (void)strlwr( argv[1] );
                        inputfile  = argv[2];
                        outputfile = argv[3];
                        if( !strncmp( &argv[1][1], "win32", 5 ) ) {
                                system = NT386;
                                break;
                        }
                        if( !strncmp( &argv[1][1], "win64", 5 ) ) {
                                system = NT386;
                                break;
                        }
                        if( !strncmp( &argv[1][1], "win95", 5 ) ) {
                                system = NT386;
                                break;
                        }
                        if( !strncmp( &argv[1][1], "wat", 3 ) ) {
                                system = WATCOM;
                                break;
                        }
                        if( !strncmp( &argv[1][1], "win", 3 ) ) {
                                system = WINDOWS;
                                break;
                        }
                        if( !strncmp( &argv[1][1], "wos2", 4 ) ) {
                                system = WATOS2;
                                break;
                        }
                        if( !strncmp( &argv[1][1], "ibm", 3 ) ) {
                                system = IBM;
                                break;
                        }
                        if( !strncmp( &argv[1][1], "nt386", 5 ) ) {
                                system = NT386;
                                break;
                        }
                        if( !strncmp( &argv[1][1], "bcc2", 4 ) ) {
                                system = BCCOS2;
                                break;
                        }
                }

        default :
                (void)fprintf(
                               stderr,
                               "usage  : %s system mapfile asmfile\n",
                               argv[0]
                             );
                (void)fprintf(
                               stderr,
                               "system = [-wat|-win|-wos2|-ibm|-nt386|-bcc2|-win32|-win64|-win95]\n"
                             );
                exit( -1 );

        }


        /*
         *      Initialization.
         */

        init( system );

        /*
         *      Open the map file.
         */
        if( (fi = fopen( inputfile, "r" )) == NULL ) {
                (void)fprintf( stderr, "Can't open the map file\n" );
                exit( -2 );
        }

        /*
         *      Search for the segments.
         */

        while( (b1 = fgetline( buf1, 1024, fi )) != NULL ) 
                if( strncmp( b1, segment_start, segment_len ) == 0 )
                        break;

        if( system <= WATOS2 ) {
                fgetline( buf1, 1024, fi );
                fgetline( buf1, 1024, fi );
        }

        /*
         *      Get the segments.
         */

        for( i = 0, b1 = fgetline( buf1, 1024, fi );
                b1 && i < max_seg;
                b1 = fgetline( buf1, 1024, fi ) ) {

                /*
                 *      No more segment ?
                 */

                if( !strncmp( buf1, stop, stop_len ) )
                        break;

                if( system != WINDOWS ) {

                        /*
                         * Get the segment number
                         */

                        b1 += seg_pos1;

                        seg_tab[i].number = 0;

                        while( !isspace( *b1 ) && *b1 != ':' ) {
                                seg_tab[i].number *= 16;
                                seg_tab[i].number += INTVAL( *b1 );
                                b1++;
                        }

                        /*
                         * Already recorded ? (assumes increasing order)
                         */
                        
                        if( i && seg_tab[i].number == seg_tab[i-1].number )
                                continue;
                }

                /*
                 * read the segment type
                 */

                b1 = buf1 + type_pos;

                if( system == WATOS2 )
                        /* No segment in 16 bits. */
                        if( !strncmp( buf1, "_TEXT16", 7 ) )
                                continue;

                if( !strncmp( b1, code_string, code_len ) )
                        seg_tab[i].type = CODE;
                else if( !strncmp( b1, data_string, data_len ) )
                        seg_tab[i].type = DATA;
                else    continue;

                i++;
        }

        /*
         *      The number of segments.
         */

        segment_nb = i;

        /*
         *      Search for the addresses.
         */

        while( (b1 = fgetline( buf1, 1024, fi )) != 0 ) 
                if( strncmp( b1, address_start, address_len ) == 0 )
                        break;

        while( grab-- )
                (void)fgetline( buf1, 1024, fi );

        /*
         *      Read all external addresses.
         */

        while( (b1 = fgetline( buf1, 1024, fi )) != 0 ) {

                /*
                 *      No more address ?
                 */

                if( !strncmp( buf1, stop, stop_len ) )
                        break;

                if( system == IBM ) {

                        /*
                         * Only references which are not imported or absolute.
                         */

                        if( !isspace( buf1[17] ) )
                                continue;

                        /*
                         *      Only references which does not begin with @.
                         */

                        if( buf1[21] == '@' )
                                continue;
                }

                if( system != WINDOWS ) {
                        /*
                         *      Get the number of the segment.
                         */
                        b1 += seg_pos2;
                        seg = 0;
                        while( !isspace( *b1 ) && *b1 != ':' ) {
                                seg *= 16;
                                seg += INTVAL( *b1 );
                                b1++;
                        }
                }

                /*
                 *      Get the name of the reference.
                 */

                b2 = plist->name;
                b1 = buf1 + name_pos;

                if((system==WATOS2) || (system==WINDOWS) || (system==WATCOM)) {
                        if( strncmp( buf1, "Module:", 7 ) == 0 )
                                continue;

                        if( !strncmp( b1, "UserCallBack", 12 ) ||
                            !strncmp( b1, "CallBack",      8 ) ||
                            !strncmp( b1, "WINFUNCTION",  11 ) ||
                            !strncmp( b1, "__",            2 ) ||
                            !strncmp( b1, "IF@",           3 ) ||
                            !strncmp( b1, "_COVER",        6 ) ||
                            !strncmp( b1, "_NTINY",        6 ) ||
                            !strncmp( b1, "DPMI",          4 ) ||
                            !strncmp( b1, "_16",           3 ) ||
                            !strncmp( b1, "div",           3 ) ||
                            !strncmp( b1, "fabs",          4 ) )
                                continue;
                } else  if( system == NT386 ) {
                        /*
                         * skip libc, kernel32, wsock32
                         */

                        if( strstr( buf1+59, "libc:" )    ||
                            strstr( buf1+59, "kernel32" ) ||
                            strstr( buf1+59, "gdi32" )    ||
                            strstr( buf1+59, "user32" )   ||
                            strstr( buf1+59, "wsock32" ) )
                                continue;
                        /*
                         * skip names like '__FOO'
                         */

                        if( !strncmp( b1, "__", 2 ) )
                                continue;

                        if( !strncmp( b1, "_vs", 3 ) )
                                continue;

                        if( !strncmp( b1, "\\177", 4 ) )
                                continue;

                        if( !strncmp( b1, "?", 1 ) || !strncmp( b1, "@", 1 ) )
                                continue;

                        /*
                         * skip strange names
                         */

                        if( (*b1 < ' ') || (*b1 >= 0x7F) )
                                continue;
                } else  if( system == BCCOS2 ) {
                        /* Only references which are not '_*' */
                        if( !strncmp( b1, "__", 2 ) ||
                            strchr( b1, '(' ) )
                                continue;
                } else  {
                        /* Only references which are not '_*' */
                        if( b1[0] == '_' )
                                continue;
                }

                /* Get the type of the segment. */
                if( system != WINDOWS ) {
                        for( j = 0; j < segment_nb; j++ )
                                if( seg_tab[j].number == seg )
                                        break;

                        if( j == segment_nb )
                                continue;       /* Not a good segment. */

                        plist->type = seg_tab[j].type;
                } else  plist->type = CODE;

                while( !isspace( *b1 ) )
                        *b2++ = *b1++;
                *b2   = '\0';

                /* Create a new element. */
                plist->cdr = (LIST *)malloc( sizeof( LIST ) );
                if( plist == NULL ) {
                        (void)fprintf( stderr, "No more memory left\n" );
                        exit( -3 );
                }
                plist = plist->cdr;
                plist->cdr = NULL;

        }

        plist->name[0] = '\0';

        /*
         *      Close the map file.
         */

        (void)fclose( fi );

        /*
         *      Open elem.asm file.
         */

        if( (fo = fopen( outputfile, "w" )) == NULL ) {
                (void)fprintf( stderr, "Can't open the asm file\n" );
                exit( -4 );
        }

        /*
         *      Write the header.
         */

        FPUTS( "\t.386\n\n", fo );

        /* CODE segment. */
        FPUTS( "_TEXT\tSEGMENT DWORD USE32 PUBLIC 'CODE'\n", fo );
        FPUTS( "_TEXT\tENDS\n", fo );

        /* DATA segment. */
        FPUTS( "_DATA\tSEGMENT DWORD USE32 PUBLIC 'DATA'\n", fo );
        FPUTS( "_DATA\tENDS\n", fo );

        FPUTS( "\tASSUME\tCS:FLAT, DS:FLAT, SS:FLAT, ES:FLAT\n", fo );

        FPUTS( "PUBLIC\t", fo );
        FPUTS( elem, fo );
        FPUTS( "\n", fo );

        /*
         *      The code external.
         */

        FPUTS( "_TEXT\tSEGMENT DWORD USE32 PUBLIC 'CODE'\n", fo );

        for( plist = &list;
             plist->name[0] && plist->cdr;
             plist = plist->cdr ) {
                if( system != WINDOWS ) {
                        if( plist->type != CODE )
                                continue;
                } else  if( !strcmp( plist->name, elem )  ||
                            !strcmp( plist->name, "end" ) ||
                            !strcmp( plist->name, "END" ) )
                                continue;

                if( fprintf( fo, "\textrn\t%s:near\n", plist->name) < 0 ) {
                        (void)fprintf( stderr, "Can't write asm file\n" );
                        exit( -5 );
                }
        }

        /*
         *      End of the code segment.
         */

        FPUTS( "_TEXT\tENDS\n", fo );

        /*
         *      The data values.
         */

        FPUTS("_DATA\tSEGMENT DWORD USE32 PUBLIC 'DATA'\n", fo);

        if( system != WINDOWS ) {
                for( plist = &list;
                     plist->name[0] && plist->cdr;
                     plist = plist->cdr ) {
                        /* Don't keep _elem because already declared. */
                        if( (plist->type != DATA)         ||
                            !strcmp( plist->name, elem )  ||
                            !strcmp( plist->name, "end" ) ||
                            !strcmp( plist->name, "END" ) )
                                continue;

                        if( fprintf( fo,
                                     "\textrn\t%s:dword\n", plist->name ) < 0 ){
                                (void)fprintf( stderr, "Can't write asm file\n" );
                                exit( -5 );
                        }
                }
        }

        /*
         *      The strings.
         */

        FPUTS( "\tALIGN 4\n", fo );

        for( plist = &list, i = 0;
             plist->name[0] && plist->cdr;
             plist = plist->cdr, i++ ) {
                if( system != WINDOWS ) {
                        if( (plist->type != CODE) && (plist->type != DATA) ||
                            !strcmp( plist->name, "end" ) ||
                            !strcmp( plist->name, "END" ) )
                                continue;
                }
                if( fprintf(fo,"$SG%d\tDB\t'%s',  00H\n",i,plist->name) < 0 ) {
                        (void)fprintf( stderr, "Can't write asm file\n" );
                        exit( -5 );
                }
                /* It's better when aligned. */
                if( (strlen( plist->name ) + 1) % 4 )
                        FPUTS( "\tALIGN 4\n", fo );
        }

        /*
         *      The array of addresses.
         */

        FPUTS( elem, fo );

        /*
         *      The addresses.
         */

        for( plist = &list, i = 0;
             plist->name[0] && plist->cdr;
             plist = plist->cdr, i++ ) {
                if( system != WINDOWS ) {
                        if( ((plist->type != CODE) && (plist->type != DATA)) ||
                            (strcmp( plist->name, "end" ) == 0) ||
                            (strcmp( plist->name, "END" ) == 0) )
                                continue;
                }
                if( system == WATCOM || system == WINDOWS ) {
                        if(fprintf(fo,"\tDD\toffset %s\n",plist->name)<0) {
                                (void)fprintf(stderr,"Can't write asm file\n");
                                exit( -5 );
                        }
                        if( fprintf( fo, "\tDD\toffset $SG%d\n", i ) < 0) {
                                (void)fprintf(stderr,"Can't write asm file\n");
                                exit( -5 );
                        }
                } else  {
                        if(fprintf(fo,"\tDD\toffset FLAT:%s\n",plist->name)<0) {
                                (void)fprintf(stderr,"Can't write asm file\n");
                                exit( -5 );
                        }
                        if( fprintf( fo, "\tDD\toffset FLAT:$SG%d\n", i ) < 0) {
                                (void)fprintf(stderr,"Can't write asm file\n");
                                exit( -5 );
                        }
                }
        }

        /*
         *      End of the array.
         */

        FPUTS( "\tDD\t00H\n", fo );
        FPUTS( "\tDD\t00H\n", fo );

        /*
         *      End of the data segment.
         */

        FPUTS( "_DATA\tENDS\n", fo );

        /*
         *      End of the data module.
         */

        FPUTS( "END\n", fo );

        /*
         *      Close the asm file.
         */

        (void)fclose( fo );

        /*
         *      That's all folks !!!
         */

        exit( 0 );

}

/*
 *      The function to read lines.
 */

static  char    *
fgetline( char *buf, int n, FILE *fd )
{
        int     c;
        char    *s = &buf[0];

        for( ;; )
                switch( (c = fgetc( fd )) ) {
                case EOF :
                        return( (char *)NULL );
                case '\n':
                case '\r':
                        *s++ = '\n';
                        *s = '\000';
                        return( buf );
                default:
                        *s++ = (char)c;
                        if( --n <= 0 ) {
                                *s = '\000';
                                return( buf );
                        }
                }
}

static  void
init( int system )
{
        switch( system ) {

        case WATCOM :
        case WINDOWS :
                elem            = ELEM;
                address_start   = ADDRESS_START_WAT;
                segment_start   = SEGMENT_START_WAT;
                code_string     = CODE_STRING_WAT;
                data_string     = DATA_STRING_WAT;
                grab            = GRAB_LINES_WAT;
                max_seg         = MAX_SEG_WAT;
                name_pos        = NAME_POS_WAT;
                seg_pos1        = SEGMENT_POS1_WAT;
                seg_pos2        = SEGMENT_POS2_WAT;
                type_pos        = TYPE_POS_WAT;
                break;

        case WATOS2 :
                elem            = ELEM;
                address_start   = ADDRESS_START_WAT;
                segment_start   = SEGMENT_START_WAT;
                code_string     = CODE_STRING_WAT;
                data_string     = DATA_STRING_WAT;
                grab            = GRAB_LINES_WAT;
                max_seg         = MAX_SEG_OS2;
                name_pos        = NAME_POS_WAT;
                seg_pos1        = SEGMENT_POS1_WAT;
                seg_pos2        = SEGMENT_POS2_WAT;
                type_pos        = TYPE_POS_WAT;
                break;

        case IBM :
                elem            = ELEM;
                address_start   = ADDRESS_START_IBM;
                segment_start   = SEGMENT_START_IBM;
                code_string     = CODE_STRING_IBM;
                data_string     = DATA_STRING_IBM;
                grab            = GRAB_LINES_IBM;
                max_seg         = MAX_SEG_OS2;
                name_pos        = NAME_POS_IBM;
                seg_pos1        = SEGMENT_POS1_IBM;
                seg_pos2        = SEGMENT_POS2_IBM;
                type_pos        = TYPE_POS_IBM;
                break;

        case NT386 :
                elem            = _ELEM;
                address_start   = ADDRESS_START_NT386;
                segment_start   = SEGMENT_START_NT386;
                code_string     = CODE_STRING_NT386;
                data_string     = DATA_STRING_NT386;
                grab            = GRAB_LINES_NT386;
                max_seg         = MAX_SEG_NT386;
                name_pos        = NAME_POS_NT386;
                seg_pos1        = SEGMENT_POS1_NT386;
                seg_pos2        = SEGMENT_POS2_NT386;
                type_pos        = TYPE_POS_NT386;
                break;

        case BCCOS2 :
                elem            = _ELEM;
                address_start   = ADDRESS_START_BCCOS2;
                segment_start   = SEGMENT_START_BCCOS2;
                code_string     = CODE_STRING_BCCOS2;
                data_string     = DATA_STRING_BCCOS2;
                grab            = GRAB_LINES_BCCOS2;
                max_seg         = MAX_SEG_OS2;
                name_pos        = NAME_POS_BCCOS2;
                seg_pos1        = SEGMENT_POS1_BCCOS2;
                seg_pos2        = SEGMENT_POS2_BCCOS2;
                type_pos        = TYPE_POS_BCCOS2;
                break;

        default :
                (void)fprintf( stderr, "System not yet implemented\n" );
                exit( -1 );
        }

        address_len     = strlen( address_start );
        code_len        = strlen( code_string   );
        data_len        = strlen( data_string   );
        segment_len     = strlen( segment_start );
        stop_len        = strlen( stop          );

}
