C
C     Les noms de fonctions/procedures/variables ne doivent pas exceder
C      6 caracteres car certains fortran ne le supportent pas!
C

C
C Fonction a` 1 parametre entier
C ------------------------------
      function rfix1 (i)
      integer i,rfix1
      rfix1= i + i
      return
      end

C
C Fonction a` un parametre flottant
C ---------------------------------
      function rflt1 (f)
C Attention: lorsqu'on passe un flottant (sans modification de celui-ci)
C            on utilise real*8: c'est fait pour etre precis!
      real*8 f,rflt1
      rflt1= f + f
      return
      end

C
C procedure qui altere son parametre entier
C -----------------------------------------
      subroutine mfix (i)
      integer i
      i = i + 1
      return
      end

C
C procedure qui altere son parametre flottant
C -------------------------------------------
      subroutine mflt (f)
C Attention: lorsqu'on passe un flottant (qui va etre modifie, et qu'on desire
C            recupe'rer, on utilise real*4: c'est fait pour ruser!
      real*4 f
      f = f * 2.
      return
      end

C
C Procedure qui modifie un tableau d'entiers
C ------------------------------------------
      subroutine tabfix (lg, tfix)
      integer lg,i
      integer tfix(lg)
      do 22 i=1,lg
         tfix(i)=tfix(i) + 1
 22   continue
      return
      end

C
C Procedure qui modifie un tableau de flottants
C ---------------------------------------------
      subroutine tabflt (lg, tfloat)
      integer lg,i
      real*4 tfloat(lg)
      do 33 i=1,lg
         tfloat(i)=tfloat(i) * 2.
 33   continue
      return
      end


C
C Procedure qui modifie une string
C --------------------------------
      subroutine fstrg(lg, strg)
      integer lg
      character strg(lg)
      strg(1)=strg(2)
      continue
      return
      end
