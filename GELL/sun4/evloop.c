
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>


#ifdef S5
#include <fcntl.h>
#ifdef MIPS
#include <bsd/sys/time.h>
#include  <bsd/sys/types.h>
#else /* MIPS */
#include <sys/time.h>
#endif /* MIPS */
#endif /* S5 */

#ifdef BSD42
#include <sys/time.h>
#include <signal.h>
#endif /* BSD42 */

#ifndef IBMRT
#include <sgtty.h>
#endif /*  IBMRT */

#ifdef SONY
extern int errno;
#endif /* SONY */


/* ********************************************************* */
/* ****  Boucle d'e've`nement ****************************** */
/* ********************************************************* */

/* ****************  Event Loop 6 12  90 ******* */

/*
  Use This in future to test that there is a really new thing to read
*/

/* ****
  if (ioctl(fd, FIONREAD, &n) == -1 || n == 0) return;
   ****
*/


#if defined (HP9300) || defined(HP9800)
#include <sys/param.h>
#define getdtablesize() (NOFILE > 32 ? 32 : NOFILE)
             /* rend le maximum de fichiers ouverts */
#endif  /* HP */ 

#ifndef NULL
#define NULL 0
#endif /* NULL */

#ifdef 0
     struct timeval {
          unsigned long tv_sec;         /* seconds */
          long          tv_usec;        /* and microseconds */
     };
#endif

struct timeval evloop_timeout={0, 0}; /* Global timeout used in select */

int EVLOOP_MAXFDS=0; /* Maximum number of File descriptor in this machine
                      GETDTABLESIZE (allowed  By process)
                    */

void evloop_setmaxfds (n)
int n;
{
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
#define    FD_ZERO(p)   bzero((char *)(p), sizeof(*(p)))
#endif /* FD_ZERO */

#else /*  Else FD_SETSIZE NOT DEFINED  */
       int EVLOOP_IN_FDS;
        int EVLOOP_IN_OUT_FDS;

#ifndef FD_ZERO
#define FD_ZERO(p) bzero((char *)(p),sizeof(*(p)))
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
       

int * evloop_init ()
{
        EVLOOP_MAXFDS =  getdtablesize();
        evloop_timeout.tv_sec  =   0;
        evloop_timeout.tv_usec =  0;
        FD_ZERO(&EVLOOP_IN_FDS); FD_ZERO(&EVLOOP_IN_OUT_FDS);
        FD_SET(0,&EVLOOP_IN_FDS);
        return (int *) (&EVLOOP_IN_FDS);
}

/*
  Return Global Mask used for select on writable File descriptors
*/

int *evloop_get_out_mask ()
{
        return (int *) (&EVLOOP_IN_OUT_FDS);
}

/*
  Set the timeout
*/

void  evloop_set_timeout (secs,millisecs)
int secs;
int millisecs;
{
evloop_timeout.tv_sec  =  (long) secs;
evloop_timeout.tv_usec = (long) (millisecs * 1000);
}

/*
  Build a mask from LeLisp vector lisp_vector
*/

int * evloop_build_mask (lisp_vector,number_elements)
int *lisp_vector;
int number_elements;
{
        int i;
#ifdef FD_SETSIZE
        fd_set *mask;
        mask = (fd_set *) malloc(sizeof(fd_set));
#else /* FD_SETSIZE */
        int *mask;
        mask = (int *) malloc(sizeof(int));
#endif /* FD_SETSIZE */
        FD_ZERO(mask);
        for(i=0;i<number_elements;i++) 
                FD_SET(lisp_vector[i],mask);
        return (int *) mask;
}


/*
  Let us wait until something to read or timeout expired
*/

/*
  Futur : add a mask of writable file descriptor
*/

int evloop_select_in(mask,result_mask)
int *mask;
int *result_mask;
{
        static int i,j;
        static int result;
#ifdef FD_SETSIZE
        static  fd_set copy_mask;
      copy_mask = (* (fd_set *) mask);
#else /* FD_SETSIZE */
        static int copy_mask ;
        copy_mask = (* mask);
#endif /* FD_SETSIZE */
        
    if(evloop_timeout.tv_sec || evloop_timeout.tv_usec)
            result = select(EVLOOP_MAXFDS,&copy_mask,NULL,NULL,&evloop_timeout);
    else result = select(EVLOOP_MAXFDS,&copy_mask,NULL,NULL,NULL);
        if (result <= 0) return result;
        
        /* copy the FD's where there is somtehing to read in result_mask
           (A LeLisp vector) and return the number of FD's ready for read */
        j = 0;
        for(i=0;i<EVLOOP_MAXFDS,j < result ; i++) {
                if (FD_ISSET(i,&copy_mask)){
                        result_mask[j] = i;
                        j++;
                }
        }
        return result;
}


int evloop_select_in_out(maskin,maskout,result_mask,result_type)
int *maskin,*maskout;
int *result_mask;
int *result_type;
{
        static int i,j;
        static int result;
#ifdef FD_SETSIZE
        static  fd_set copy_maskin;
        static  fd_set copy_maskout;
        copy_maskin = (* (fd_set *) maskin);
        copy_maskout = (* (fd_set *) maskout);
#else /* FD_SETSIZE */
        static int copy_maskin ;
        static int copy_maskout ;
        copy_maskin = (* maskin);
        copy_maskout = (* maskout);
#endif /* FD_SETSIZE */
        
        if(evloop_timeout.tv_sec || evloop_timeout.tv_usec)
                result = select(EVLOOP_MAXFDS,&copy_maskin,&copy_maskout,NULL,&evloop_timeout);
        else result = select(EVLOOP_MAXFDS,&copy_maskin,&copy_maskout,NULL,NULL);
        if (result <= 0) return result;
        
        /* copy the FD's where there is somtehing to read in result_mask
           (A LeLisp vector) and return the number of FD's ready for read */
        j = 0;
        for(i=0;i<EVLOOP_MAXFDS,j < result ; i++) {
                if (FD_ISSET(i,&copy_maskin)){
                        result_mask[j] = i;
                        result_type[j] = 0; /* means that is a read in FD */
                        j++;
                }
                if (FD_ISSET(i,&copy_maskout)){
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

int evloop_busy_select(mask,result_mask)
int *mask;
int *result_mask;
{
        int i,j=0;
     int result=0;
        static struct timeval null_timeout={0,0};
#ifdef FD_SETSIZE
        static fd_set copy_mask;
        copy_mask = (* (fd_set *) mask);
#else /* FD_SETSIZE */
        static int copy_mask ;
        copy_mask = (* mask);
#endif /* FD_SETSIZE */
    
     result = select(EVLOOP_MAXFDS,&copy_mask,NULL,NULL,&null_timeout);
     return result;
}

/*
  Add a file descriptor to the global mask
*/
int * evloop_add_file_descriptor (mask,fd)
#ifdef FD_SETSIZE
fd_set *mask;
#else /* FD_SETSIZE */
int *mask;
#endif /* FD_SETSIZE */
int fd;
{
        FD_SET(fd,mask);
        return (int *)mask;
}
/*
  Remove a file descriptor from the global mask 
*/
int * evloop_remove_file_descriptor (mask,fd)
#ifdef FD_SETSIZE
fd_set *mask;
#else /* FD_SETSIZE */
int *mask;
#endif /* FD_SETSIZE */
int fd;
{
        
        FD_CLR(fd,mask);
        return (int *)mask;
}


int evloop_mask_to_fds (mask,result_vector)
#ifdef FD_SETSIZE
fd_set *mask;
#else /* FD_SETSIZE */
int *mask;
#endif /* FD_SETSIZE */
int *result_vector;
{
        int i,j=0;
        for(i=0;i<EVLOOP_MAXFDS;i++) {
                if (FD_ISSET(i,mask)) {
                        result_vector[j] = i;
                        j++;
                }
        }
        return j;
}



int evloop_get_errno ()
{
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
