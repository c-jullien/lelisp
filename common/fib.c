/*      FIBO : un simple me`tre de machines et de compilateurs C :

Que mesure ce test : Alfred Binet (*), a` qui on demandait ce qu'e'tait
l'intelligence re'pondait toujours : "l'intelligence? c'est ce que mesure
mon test". Il en est vraissemblablement de me^me pour ce test de performance
de machines et de compilateurs C.

(*) Alfred Binet, physiologiste et psychologue franc,ais (Nice 1857-1911).
Ele`ve de Charcot, fondateur, avec Beaunis, de "l'Anne'e Psychologique",
il contribua au progre`s de la psychologie expe'rimentale ("Introduction
a` la psychologie expe'rimentale", 1894). Il est surtout connu par ses
travaux (en collaboration avec Simon) sur la mesure du de'veloppement de
l'intelligence chez les jeunes enfants. Son e'chelle me'trique de 
l'intelligence e'tablie en 1905 fut re'vise'e par Terman.

Comment lance t-on le test ?

% time cc -o fibo fibo.c                1er temps
% time cc -O -o fibO fibo.c             2eme temps
% time fibo 20                          3eme temps
% time fibo 25                          4eme temps
% time fibO 20                          5eme temps
% time fibO 25                          6eme temps

On ne garde que le temps "user"
puis on ajoute ces 6 temps              total
la somme des 4 derniers temps donne     cpu

et on inse`re la nouvelle machine a` sa place (meilleures en te^te)
ou bien on envoie le re'sultat par courrier e'lectronique a` :
        ..!mcvax!inria!chailloux

==============================================================================
machine         cc      cc -O   fibo    fibo    fibO    fibO    cpu     Total
                                 20      25      20      25
==============================================================================
Vax9000  Ultrix 0.16    0.12    0.03    0.36    0.03    0.32    0.74    1.02
------------------------------------------------------------------------------
SUN 4/60(sparc) 0.4     0.7     0.0     0.4     0.0     0.0     0.4     1.5
------------------------------------------------------------------------------
DG 88K AViiON   0.5     0.5     0.0     0.4     0.0     0.3     0.7     1.7
------------------------------------------------------------------------------
SUN 4/260       0.3     0.8     0.0     0.7     0.0     0.4     1.1     2.2
------------------------------------------------------------------------------
PYRAMID 9820    0.5     0.6     0.0     0.6     0.0     0.6     1.2     2.3
------------------------------------------------------------------------------
SUN 4/110       0.4     1.0     0.1     0.9     0.0     0.6     1.6     3.0
------------------------------------------------------------------------------
CRAY II UNICOS  0.83    0.83    0.07    0.82    0.08    0.81    1.78    3.44
------------------------------------------------------------------------------
HP9000/300      0.5     0.8     0.1     1.5     0.1     0.6     2.4     3.7
------------------------------------------------------------------------------
SUN 3/260       0.9     1.1     0.16    1.16    0.05    0.93    2.30    4.30
------------------------------------------------------------------------------
PYRAMID 90x     1.1     1.1     0.1     1.05    0.08    1.05    2.28    4.48
------------------------------------------------------------------------------
VAX 8600        0.4     0.5     0.13    1.86    0.12    1.66    3.77    4.67
------------------------------------------------------------------------------
GOULD PN9000    1.5     1.6     0.1     1.2     0.1     1.1     2.5     5.6
------------------------------------------------------------------------------
CELERITY C1260D 1.2     1.5     0.13    1.44    0.10    1.21    2.98    5.71
------------------------------------------------------------------------------
EXPLORER I LX   1.4     1.4     0.1     1.6     0.1     1.6     3.4     6.2
------------------------------------------------------------------------------
SUN 3/160       1.3     1.7     0.2     1.9     0.1     1.6     3.8     6.8
------------------------------------------------------------------------------
MAC AUX         1.6     1.7     0.2     2.8     0.0     1.0     4.0     7.3
------------------------------------------------------------------------------
SPS7/70 SMX     2       2.2     0.1     1.9     0.1     1.6     3.7     7.9
------------------------------------------------------------------------------
SUN 3/50        1.6     2.0     0.24    2.35    0.17    2.05    4.81    8.41
------------------------------------------------------------------------------
Ridge/SPS9      2.1     5.6     0.2     2.7     0.2     2.2     5.30    13.0
------------------------------------------------------------------------------
UNIGRAPH 6030   3.6     4.5     0.3     3.9     0.1     1.5     5.8     13.9
------------------------------------------------------------------------------
VAX 785 UNIX    1.2     1.4     0.53    5.94    0.53    5.37    12.37   14.87
------------------------------------------------------------------------------
IBM RT AIX      3.4     5.5     0.40    4.3     0.40    3.3     8.4     17.3
------------------------------------------------------------------------------
ORION           4.1     4.0     0.4     5.2     0.4     5.1     11.1    19.2
------------------------------------------------------------------------------
VAX 780 UNIX    1.8     2.1     0.7     7.5     0.6     6.6     15.4    19.3
------------------------------------------------------------------------------
PCS 9230 UNIX   3.26    3.45    0.6     6.21    0.6     6.2     13.61   20.32
------------------------------------------------------------------------------
SUN2/70 UNIX    3.58    4.45    0.78    8.33    0.55    6.26    15.92   23.95
------------------------------------------------------------------------------
VAX 750 UNIX    3       3.5     1.1     12      0.9     10.7    24.7    31.2
------------------------------------------------------------------------------
SPS7/50 SMX     5.02    5.08    1.14    11.32   0.9     9       22.36   32.46
------------------------------------------------------------------------------


*/
/*
# include <sys/types.h>
# include <sys/times.h> */
typedef      long            clock_t;

struct tms {
        clock_t tms_utime;              /* user time */
        clock_t tms_stime;              /* system time */
        clock_t tms_cutime;             /* user time, children */
        clock_t tms_cstime;             /* system time, children */
};


struct tms time1, time2;

short fibo(n) short n; {
        return(n < 3 ? 1 : fibo(n-1)+fibo(n-2));
}

int fibn(n) int n; {
        return(n < 3 ? 1 : fibn(n-1)+fibn(n-2));
}

main(argc, argv) int argc; char **argv; {
int n, res;
        n = atoi(argv[1]);
        times(&time1);
        res = fibo(n);
        times(&time2);
        printf("fibo(%d)=%d en %d ticks (* 16.666 = %g)\n",
                 n, res,
                 time2.tms_utime - time1.tms_utime,
                 (time2.tms_utime - time1.tms_utime) * 16.6666);
        times(&time1);
        n = atoi(argv[1]);
        res = fibn(n);
        times(&time2);
        printf("fibn(%d)=%ld en %d ticks (* 16.666 = %g)\n",
                 n, res,
                 time2.tms_utime - time1.tms_utime,
                 (time2.tms_utime - time1.tms_utime) * 16.6666);
}


