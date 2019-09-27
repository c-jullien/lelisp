; Ces re'sultats proviennent directement des logfiles des benchs
; 
; Un re'sultat est une liste de 2 listes :
;      ( (<descrition de la machine>) ( <liste des re'sultats> ))
; La <descrition de la machine> est une liste de 4 e'le'ments + 1 optionnel:
;     ( <descrition en large> <system> <nick> <type LL> [64bitfloats])
; La <description en large> contient ce que vous voulez
; Le <system> contient le nom du syste`me entre crochets ex "[sun]"
; Le <nick> contient une chai^ne servant a` repe'rer le test
;   s'il vous plait, pas de / dedans!
; Le <type LL> est le nume'ro de version du Lisp utilise'
; En option: si le bench est re'alise' en 64bitfloats

(defvar list-results-ok '(

;;; fait le 11/10/94 ILOG [PK]
(("SUN SPARCstation 20 (SOLARIS 2.3) sparc2" "[solaris]" "sparc20" "LL 15.26")
((fib20 0.004999924) (tak 0.02299995) (stak 
0.05999947) (ctak 0.04999924) (takl 0.06999969) (takr 
0.02599983) (boyer 0.2999992) (browse 0.7700005) (destru 
0.05999756) (travinit 0.3699989) (travrun 2.280003) (deriv 
0.1500015) (dderiv 0.3199997) (div2iter 0.06999969) (
div2recur 0.05999756) (fft 0.2000046) (puzzle 0.4400024) (
triang 4.959999)))

;;; fait par BK
(("DEC ALPHA/VMS 3500 (Open VMS 6.1) alpha" "[alphavms]"
"avms3500" "LL 15.26") ((fib20 0.002999973) (tak
0.01699996) (stak 0.05999947) (ctak 0.03999996) (takl
0.03999996) (takr 0.03199997) (boyer 0.2900009) (browse
0.8299999) (destru 0.05000114) (travinit 0.3700008) (travrun
2.240002) (deriv 0.2800007) (dderiv 0.2599983) (div2iter
0.05000114) (div2recur 0.05999947) (fft 0.2799988) (puzzle
0.3600006) (triang 3.93)))


;;; fait le 13/12/93 ILOG [PK]
(("DECstation 5200 (ULTRIX) mips R3000" "[decstation]" "ds5200" "LL 15.26")
 ((fib20 0.01166649) (tak
0.07666664) (stak 0.2666626) (ctak 0.2999954) (takl
0.2666626) (takr 0.08166656) (boyer 1.183334) (browse
2.649994) (destru 0.25) (travinit 1.166656) (travrun
7.666672) (deriv 0.5666656) (dderiv 0.6666718) (div2iter
0.3000031) (div2recur 0.3000031) (fft 1.116669) (puzzle
1.433334) (triang 16.26666)))

;;; fait le 13/12/93 ILOG [PK]
(("DECstation 3100 (ULTRIX) mips R3000" "[decstation]" "ds3100" "LL 15.26")
 ((fib20 0.01833344) (tak
0.1216667) (stak 0.5) (ctak 0.5) (takl 0.3999939) (takr
0.1333328) (boyer 1.650009) (browse 3.933334) (destru
0.3833313) (travinit 1.800003) (travrun 10.51666) (deriv
0.8166809) (dderiv 0.9666443) (div2iter 0.3833313) (
div2recur 0.3833313) (fft 1.68335) (puzzle 2.149994) (triang
24.21664)))

;;; fait le 13/12/93 ILOG [PK]
(("IBM RS6000 340 (AIX 2.3) power" "[rs6000]" "rs6340" "LL 15.26")
((fib20 0.009999847) (tak 0.04099998) (stak
0.1799965) (ctak 0.09999847) (takl 0.1800003) (takr
0.07199936) (boyer 0.7999954) (browse 1.990005) (destru
0.1700058) (travinit 0.7000046) (travrun 4.900002) (deriv
0.3600006) (dderiv 0.4499969) (div2iter 0.1799927) (
div2recur 0.1699982) (fft 0.6000061) (puzzle 0.9400024) (
triang 11.16)))

;;; fait le 13/12/93 ILOG [PK]
(("IBM RS6000 320 (AIX 2.3) power" "[rs6000]" "rs6320" "LL 15.26")
 ((fib20 0.01699981) (tak 0.06900024) (stak
0.3099976) (ctak 0.1699982) (takl 0.3199997) (takr 0.1179993
) (boyer 1.330002) (browse 3.240005) (destru 0.2899933) (
travinit 1.169998) (travrun 8.12999) (deriv 0.5999908) (
dderiv 0.7299957) (div2iter 0.3099976) (div2recur 0.2899933)
(fft 0.9499969) (puzzle 1.590012) (triang 19.02)))

;;; fait le 13/12/93 ILOG [PK]
(("CETIA RS6000 220 (AIX 2.3) power" "[rs6000]" "rs6220" "LL 15.26")
 ((fib20 0.01000023) (tak 0.04500046) (stak
0.2200012) (ctak 0.1299973) (takl 0.1699982) (takr
0.08899993) (boyer 1.080002) (browse 2.450005) (destru
0.1899948) (travinit 0.9900055) (travrun 6.12999) (deriv
0.3900146) (dderiv 0.5299988) (div2iter 0.2299957) (
div2recur 0.1999969) (fft 0.9499969) (puzzle 1.020004) (
triang 12.09)))

;;; fait le 13/12/93 ILOG [PK]
(("Silicon Graphics IRIS-4D (IRIX 5.1) mips R4000" "[irix5]" "irix4000" "LL 15.26")
 ((fib20 0.003999901) (tak 0.02300014) (stak
0.06999969) (ctak 0.04000092) (takl 0.07999802) (takr
0.05099983) (boyer 0.3800011) (browse 0.9899979) (destru
0.07999802) (travinit 0.3999977) (travrun 2.399998) (deriv
0.1800003) (dderiv 0.2400055) (div2iter 0.08000183) (
div2recur 0.0799942) (fft 0.3700027) (puzzle 0.4799957) (
triang 6.340004)))

;;; fait le 13/12/93 ILOG [PK]
(("Silicon Graphics IRIS-4D (IRIX 4.0.5F) mips R3000" "[iris4d]" "irix3000"
"LL 15.26") ((fib20 0.01200027) (tak 0.06800003) (stak
0.2299957) (ctak 0.1199951) (takl 0.2199936) (takr
0.07199936) (boyer 0.9100037) (browse 2.730003) (destru
0.1999969) (travinit 1.080002) (travrun 7.01001) (deriv
0.4400024) (dderiv 0.5299988) (div2iter 0.2099915) (
div2recur 0.1999969) (fft 0.9100037) (puzzle 1.130005) (
triang 13.37)))

;;; fait le 13/12/93 ILOG [PK]
(("DEC ALPHA/OSF 3500 (OSF1 1.3) alpha" "[alphaosf]" "aosf3500" "LL 15.26")
 ((fib20 0.003333282) (tak
0.01833334) (stak 0.05000019) (ctak 0.03333282) (takl
0.04999924) (takr 0.03166676) (boyer 0.2833328) (browse
0.7000008) (destru 0.04999924) (travinit 0.3333321) (travrun
2.099998) (deriv 0.1333351) (dderiv 0.1666679) (div2iter
0.06666565) (div2recur 0.06666565) (fft 0.2833328) (puzzle
0.3666668) (triang 4.316666)))

;;; fait le 13/12/93 ILOG [PK]
(("SUN SPARCstation 10 (SOLARIS 2.1) sparc10" "[solaris]" "sparc10" "LL 15.26")
 ((fib20 0.007999802) (tak 0.03499985) (stak
0.09999847) (ctak 0.06999969) (takl 0.09999847) (takr
0.03899994) (boyer 0.4700012) (browse 2.039993) (destru
0.08999634) (travinit 0.5599976) (travrun 3.510002) (deriv
0.2299957) (dderiv 0.4800034) (div2iter 0.1100006) (
div2recur 0.09999847) (fft 0.2799988) (puzzle 0.659996) (
triang 7.159996)))

;;; fait le 13/12/93 ILOG [PK]
(("SUN 4/75 SPARCstation (SUNOS 4.1) sparc2" "[sun4]" "sun4-75" "LL 15.26")
 ((fib20 0.01333313) (tak 0.06833267) (stak 0.25)
(ctak 0.1499939) (takl 0.2166672) (takr 0.06999969) (boyer
0.8833313) (browse 2.28334) (destru 0.1833344) (travinit
1.316666) (travrun 7.599991) (deriv 0.3999939) (dderiv
0.8999939) (div2iter 0.1999969) (div2recur 0.1666718) (fft
0.6833344) (puzzle 1.316666) (triang 13.91667)))

;;; fait le 13/12/93 ILOG [PK]
(("SUN 4/330 SPARCserver (SUNOS 4.1) sparc2" "[sun4]" "sun4-330" "LL 15.26")
 ((fib20 0.02166672) (tak 0.1366669) (stak
0.4666595) (ctak 0.2666626) (takl 0.3833313) (takr 0.1366669
) (boyer 1.700012) (browse 3.850006) (destru 0.3500061) (
travinit 2.199982) (travrun 11.43332) (deriv 0.7666626) (
dderiv 1.549988) (div2iter 0.3333435) (div2recur 0.3000183)
(fft 1.25) (puzzle 2.18335) (triang 24.)))

;;; fait le 13/12/93 ILOG [PK]
(("HP 9380 (HP/UX 9.0) 68040 25MHz" "[hp9400]" "hp934025" "LL 15.26")
 ((fib20 0.01399994) (tak 0.06399994) (stak
0.1399994) (ctak 0.1399994) (takl 0.3199997) (takr
0.07599945) (boyer 1.020004) (browse 2.539993) (destru
0.219986) (travinit 0.9799957) (travrun 7.320007) (deriv
0.480011) (dderiv 0.5599976) (div2iter 0.2200012) (div2recur
0.2200012) (fft 0.8399963) (puzzle 1.220001) (triang 15.34))
)

;;; fait le 13/12/93 ILOG [PK] refait [JER]
(("HP 9730 (HP/UX 9.0) HPA" "[hp9700]" "hp9730" "LL 15.26")
((fib20 0.005999946) (tak 0.02700004) (stak 
0.09999847) (ctak 0.05999756) (takl 0.1000023) (takr 
0.02699966) (boyer 0.3899994) (browse 1.02) (destru 
0.09000015) (travinit 0.5299988) (travrun 2.960003) (deriv 
0.1900024) (dderiv 0.2200012) (div2iter 0.08999634) (
div2recur 0.0799942) (fft 0.409996) (puzzle 0.5400009) (
triang 6.25)))

#| les anciens de PK 
 ((fib20 0.005999946) (tak 0.02699985) (stak
0.09999847) (ctak 0.05999756) (takl 0.09999847) (takr
0.02699966) (boyer 0.4000015) (browse 1.009998) (destru
0.09000015) (travinit 0.5299988) (travrun 2.980003) (deriv
0.1900024) (dderiv 0.2300034) (div2iter 0.08999634) (
div2recur 0.0799942) (fft 0.6299973) (puzzle 0.5400009) (
triang 6.25)))
|#

#| ANCIENS TESTS (5 GC) |#

;;; fait le 14/9/92 TELECOM PARIS [dana]
(("Vax 4000/500 (VMS)" "[vaxvms]" "vax4500" "LL 15.25") 
((fib20 0.001) (tak 0.030) (stak 0.100) (ctak
0.050) (takl 0.140) (takr 0.030) (boyer 1.730) (browse 2.160
) (destru 0.130) (travinit 0.440) (travrun 4.660) (deriv
1.300) (dderiv 1.380) (div2iter 0.570) (div2recur 0.560) (
fft 0.320) (puzzle 0.550) (triang 7.760)))

;;; fait le 21/11/91 Ilog [PK]
(("SUN 3/260 (SUNOS) 68020" "[sun]" "sun3-260" "LL 15.25")
((fib20 .02000427) (tak .1600037) (stak .6599884
) (ctak .3999939) (takl .8800049) (takr .1600037) (boyer
3.799988) (browse 8.419983) (destru .7600098) (travinit
2.980011) (travrun 16.62003) (deriv 2.179993) (dderiv
2.420013) (div2iter .6199951) (div2recur .6199951) (fft
6.079987) (puzzle 3.580017) (triang 51.83997)))

;;; fait le 2/4/91 TELECOM PARIS [DANA]
(("Vax 4000/300 (VMS)" "[vaxvms]" "vax4300" "LL 15.24")
((fib20 0.010) (tak 0.060) (stak 0.420) (ctak 0.190) (takl 0.360)
(takr 0.090) (boyer 2.710) (browse 5.460) (destru 0.400)
(travinit 1.330) (travrun 10.260) (deriv 1.650) (dderiv 1.780)
(div2iter 0.390) (div2recur 0.290) (fft 0.880)(puzzle 1.700) (triang 21.370))
)

;;; fait le 27/12/96 ILOG [BK]
(("PC DELL 466/L (MSDOS) 66MHz" "[msdos]" "DELL466/L" 
"LL 15.26") ((fib20 0.00499992) (tak 0.0210003) (stak 0.110001)
(ctak 0.0499954) (takl 0.109993) (takr 0.0219994) 
(boyer 0.880005) (browse 1.81001) (destru 0.110001)
(travinit 0.379997) (travrun 3.07) (deriv 0.659996)
(dderiv 0.720001) (div2iter 0.160004) (div2recur 0.159988)
(fft 0.770004) (puzzle 0.5) (triang 5.77)))



;;; en of tests
))
