/* les includes */
#include <io.h>
#include "Machine.h"

#define TEMPLATE "/tmp/lelisp_XXXXXX"

char template[19] ;
extern char lelispbin[256];

char *
llcload(char *file, int r_flag, char *ccode, char *ecode)
{
#if     defined(LLDOS)
        r_flag = r_flag;
        file   = file;
        ccode  = ccode;
        ecode  = ecode;

        return(ccode);
#else
    char        *ccoderound;
    int         taille;
    int         totale;
    char        cbuf[1024];
    int         fd;
    int         i;

    struct exec header;

/* remettre 6 X au bout du template
       et ge'ne'rer un nom unique */

    for (i = strlen(template)-6; i < strlen(template); i++)
       template[i] = 'X';
    mktemp(template);

/* arrondir ccode a` la taille de la page */
    ccoderound = (char *)round((int)ccode, LLPAGESIZE);

/* appeler le linker */
    sprintf(cbuf,
            BIN_LD_A,      /*/ bin/ld -A ... */
            lelispbin,
            ccoderound,
            template,
            file);
    cline(cbuf);

/* Le link est-il bien fini ? */
    fd = open(template, 0);
    if (fd < 0) {
        perror(template);
        unlink(template);
        return(ccode);
    }

    if (read(fd,(char *)&header,sizeof(header)) != sizeof(header)) {
        perror(template);
        close(fd);
        unlink(template);
        return(ccode);
    }

/* le programme ge'ne're' tient-il dans la zone code ? */

    taille = round(header.a_text, 4) + round(header.a_data, 4);
    totale = taille + header.a_bss;

    totale = round(totale, LLPAGESIZE);

    totale = round(totale, LLPAGESIZE);

    if ((ccoderound+totale) >= ecode) {
      fprintf(stderr,
#if defined(LLFOREIGN)
            "cload: fatal error full code zone: missing %d Kbytes\r\n",
#else /* LLFOREIGN */
            "cload: erreur fatale zone code pleine: il manque %d Koctets\r\n",
#endif /* LLFOREIGN */
                ((ccoderound+totale-ecode))/1024+1);
             return(ccode);
           }

    if (taille != read(fd,ccoderound,taille)) {
        perror(template);
        close(fd);
        unlink(template);
        return(ccode);
    }
    close(fd);

    if (!strncmp(lelispbin, template, 12))
      unlink(lelispbin);
      strcpy(lelispbin, template);
      return(ccoderound+totale);
#endif
}

void llinit_template(void)
{
#if     !defined(LLDOS)
        strcpy(template, TEMPLATE);
#endif
}

void llrm_template(void)
{
#if     !defined(LLDOS)
        if (!strncmp(lelispbin, template, 12))
                unlink(lelispbin);
#endif
}


