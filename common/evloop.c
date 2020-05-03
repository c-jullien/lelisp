/*****************************************************************
                 Le-Lisp (r) version 15.2

 (r) Le-Lisp est une marque de'pose'e de l'INRIA
 *****************************************************************
 ****                Boucle d'e've`nements                    ****
 *****************************************************************
 Ce fichier est en lecture seule.
 *****************************************************************/

/***
 *** tous les definitions specifiques a` la machine.
 ***/
#include "Machine.h"

/* ****
  Use This in future to test that there is a really new thing to read

  if (ioctl(fd, FIONREAD, &n) == -1 || n == 0) return;
   ****
*/

struct timeval evloop_timeout = {0,0};

int EVLOOP_MAXFDS=0; /* Maximum number of File descriptor in this machine
                        GETDTABLESIZE (allowed  By process)
                      */

void
evloop_setmaxfds(int n) {
        EVLOOP_MAXFDS = n;
}

/*
  thoses macros arent defined in types.h
*/

#ifdef FD_SETSIZE
fd_set EVLOOP_IN_FDS;
fd_set EVLOOP_IN_OUT_FDS;
#ifndef NBBY
#define NBBY    8
#endif /* NBBY */

#ifndef NFDBITS
#define    NFDBITS      (sizeof(long) * NBBY)
#endif /* NFDBITS */
        
#ifndef FD_SET
#define    FD_SET(n, p) ((p)->fds_bits[(n)/NFDBITS] |= (1 << ((n) % NFDBITS)))
#endif /* FD_SET */

#ifndef FD_CLR
#define    FD_CLR(n, p) ((p)->fds_bits[(n)/NFDBITS] &= ~(1 << ((n) % NFDBITS)))
#endif /* FD_CLR */

#ifndef FD_ISSET
#define    FD_ISSET(n, p)       ((p)->fds_bits[(n)/NFDBITS] & (1 << ((n) % NFDBITS)))
#endif /* FD_ISSET */

#ifndef FD_ZERO
#define    FD_ZERO(p)   memset((char *)(p),(int)0,sizeof(*(p)))
#endif /* FD_ZERO */

#else /*  Else FD_SETSIZE NOT DEFINED  */
       int EVLOOP_IN_FDS;
       int EVLOOP_IN_OUT_FDS;

#ifndef FD_ZERO
#define FD_ZERO(p) memset((char *)(p),(int)0,sizeof(*(p)))
#endif /*  FD_ZERO */

#ifndef FD_SET
#define FD_SET(n,p) ((*p) = ((*p) | (1 << n)))
#endif /*  FD_SET */

#ifndef FD_ISSET
#define FD_ISSET(n,p)  ((*p) & (1<<n))
#endif /* FD_ISSET */

#ifndef FD_CLR
#define FD_CLR(n,p) ((*p) = ((*p) & ~(1 << n)))
#endif /*  FD_CLR */

#endif /* END FD_SETSIZE NOT DEFINED */
       
int *
evloop_init(void) {
        EVLOOP_MAXFDS = LLEVLOOP_MAXFDS;
        evloop_timeout.tv_sec  =  0;
        evloop_timeout.tv_usec =  0;
        FD_ZERO(&EVLOOP_IN_FDS); FD_ZERO(&EVLOOP_IN_OUT_FDS);
        FD_SET(0,&EVLOOP_IN_FDS);
        /* return an external for LL */
        return (int *)(&EVLOOP_IN_FDS);
}

/*
  Return Global Mask used for select on writable File descriptors
  of type external for LL
*/

int *
evloop_get_out_mask(void) {
        return (int *)(&EVLOOP_IN_OUT_FDS);
}

/*
  Set the timeout
*/

void
evloop_set_timeout(long secs, long millisecs) {
        evloop_timeout.tv_sec  = (long)secs;
        evloop_timeout.tv_usec = (long)(millisecs * 1000);
}

/*
  Build a mask from LeLisp vector lisp_vector
  and return an external in LL
*/

int *
evloop_build_mask (long *lisp_vector, long number_elements) {
        int i;
        fd_set *mask;
        mask = (fd_set *) malloc(sizeof(fd_set));
        if (mask == NULL) {
                return(NULL);
        }

        FD_ZERO(mask);
        for (i=0;i<number_elements;i++) 
                FD_SET(lisp_vector[i],mask);
        return (int *)mask;
}

extern long ll_fg; /* From lelisp.c */

/*
  Let us wait until something to read or timeout expired
*/

/*
  Futur : add a mask of writable file descriptor
*/

long
evloop_select_in(int *mask, long *result_mask) {
        /*
         * int *mask;          external
         * long *result_mask   vector
         */

        static long i,j;
        static long result;
        static  fd_set copy_mask;
        copy_mask = (* (fd_set *) mask);
        
        if (evloop_timeout.tv_sec || evloop_timeout.tv_usec)
                result = select(EVLOOP_MAXFDS,&copy_mask,
                                NULL,NULL,&evloop_timeout);
        else result = select(EVLOOP_MAXFDS,&copy_mask, NULL,NULL,NULL);

        if (result <= 0)
                return result;
        /*
        if (!ll_fg && FD_ISSET(0,&copy_mask)) {
                FD_CLR(0,&copy_mask);
                result--;
        }
        */
        /* copy the FD's where there is somtehing to read in result_mask
           (A LeLisp vector) and return the number of FD's ready for read */
        j = 0;
        for (i=0 ; i<EVLOOP_MAXFDS && j < result ; i++) {
                if (FD_ISSET((int)i,&copy_mask)){
                        result_mask[j] = i;
                        j++;
                }
        }
        return result;
}


long evloop_select_in_out(int *maskin,           /* external */
                          int *maskout,          /* external */
                          long *result_mask,     /* vector   */
                          long *result_type)     /* vector   */
{
        static long i,j;
        static long result;
        static  fd_set copy_maskin;
        static  fd_set copy_maskout;
        copy_maskin = (* (fd_set *) maskin);
        copy_maskout = (* (fd_set *) maskout);
        
        if (evloop_timeout.tv_sec || evloop_timeout.tv_usec)
                result = select(EVLOOP_MAXFDS,&copy_maskin,
                                &copy_maskout,NULL,&evloop_timeout);
        else result = select(EVLOOP_MAXFDS,&copy_maskin,
                             &copy_maskout,NULL,NULL);
        if (result <= 0) return result;
        
        /* copy the FD's where there is somtehing to read in result_mask
           (A LeLisp vector) and return the number of FD's ready for read */
        j = 0;
        for (i=0; i < EVLOOP_MAXFDS && j < result ; i++) {
                if (FD_ISSET((int)i,&copy_maskin)){
                        result_mask[j] = i;
                        result_type[j] = 0; /* means that is a read in FD */
                        j++;
                }
                if (FD_ISSET((int)i,&copy_maskout)){
                        result_mask[j] = i;
                        result_type[j] = 1; /* means that is a write in FD */
                        j++;
                }
        }
        return result;
}


/*
  Return Thoses who are ready whithout waiting
*/

long
evloop_busy_select(int *mask, long *result_mask) {
        static struct timeval null_timeout={0,0};
        static fd_set copy_mask;
        long result=0;

        (void)result_mask;

        copy_mask = (* (fd_set *) mask);
    
        result = select(EVLOOP_MAXFDS,&copy_mask,NULL,NULL,&null_timeout);
        return result;
}

/*
  Add a file descriptor to the global mask

  #ifdef FD_SETSIZE
  fd_set *mask;
  #else
  int *mask;
  #endif
*/

int *
evloop_add_file_descriptor (fd_set *mask, long fd) {
        FD_SET((int)fd,mask);
        return (int *)mask;
}
/*
  Remove a file descriptor from the global mask 
*/
int *
evloop_remove_file_descriptor (fd_set *mask, long fd) {
        FD_CLR((unsigned int)fd,mask);
        return (int *)mask;
}

long
evloop_mask_to_fds (fd_set *mask, long *result_vector) {
        long i,j=0;

        for (i=0;i<EVLOOP_MAXFDS;i++) {
                if (FD_ISSET((int)i,mask)) {
                        result_vector[j] = i;
                        j++;
                }
        }
        return j;
}

long
evloop_get_errno(void) {
        switch (errno) {
        case EBADF:
                return 1;
        case EINTR:
                return 2;
        case EINVAL:
                return 3;
        }
        return 0;
}

long
evloop_test_if_valid_fd(long fd, long in_p) {
        fd_set mask_fd;
/* Another Solution (bad one)
  char s[1];
  code = read(fd,s,0);
  if ((code == -1) && (errno == EBADF)) return 0;
  return 1;
*/
        int result;
        static struct timeval my_timeout={0,0};
        my_timeout.tv_sec = 0;
        my_timeout.tv_usec = 0;
        FD_ZERO(&mask_fd);
        FD_SET((int)fd,&mask_fd);
        if (in_p)
                result = select(EVLOOP_MAXFDS,&mask_fd,NULL,NULL,&my_timeout);
        else
                result = select(EVLOOP_MAXFDS,NULL,&mask_fd,NULL,&my_timeout);
        if ((result < 0) && (errno == EBADF))
                return 0;
        return 1;
}

char
evloop_ttyin(long *code) {
        static char caractere;
        
        (*code) = read(0, &caractere, 1);
        return caractere;
}

/* 
  Pour les vrai SYSTEM 5 on a pas le droit de mettre des tty dans le select
  So on va creer un pseudo terminal qu'on va dupper sur le 0 et qu'on
  va mettre dans le select mais cela suppose que dup2 existe !
*/

/*

char * ptydev = "/dev/ptyxx";
char * ttydev = "/dev/ttyxx";
get_pty (pty, tty)

long *pty, *tty;
{
        long devindex, letter = 0;
        
        while (letter < 4) {
                ttydev [8] = ptydev [8] = "pqrs" [letter++];
                devindex = 0;
                
                while (devindex < 16) {
                        ttydev [9] = ptydev [9] =
                                "0123456789abcdef" [devindex++];
                        if ((*pty = (long) open (ptydev, O_RDWR)) < 0)
                                continue;
                        if ((*tty = (long) open (ttydev, O_RDWR)) < 0) {
                                close(*pty);
                                continue;
                        }
                        return 1;
                }
        }
        return 0;
}
*/

/* for RUNTIME GENERATOR */
long
llpipe(long *fd) {
#if defined(LLDOS)
        (void)fd;
        return(-1);
#else
        int ufd[2];
        int s;
        ufd[0] = fd[0];
        ufd[1]=fd[1];
        s=pipe(ufd);
        fd[0]=ufd[0];
        fd[1]=ufd[1];
        return (long)s;
#endif /* LLDOS */
}
