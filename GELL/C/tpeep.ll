; test de "modpeep.ll"


(setq ll '((fentry test subr1)
       2
	   (nop)
	   (jcall cons)
	   (nop)
	   (jcall ncons)
	   (nop)
	   (jcall foo)
       10
           (nop)
	   (jcall bar)
	   (bra 10)
	   (nop)
	   (jcall bar)
	   (jmp test)
	   (nop)
	   (call 2)
       20
           (nop)
	   (call 2)
	   (bra 10)
	   (nop)
	   (call 2)
	   (jmp test)
	   (nop)
	   (bra 30)
	   (bra 40)

      30
           (adjstk '2)
	   (return)

      40
           (pop a4)
	   (adjstk a4)
	   (return)

     50
           (return)

    100
           (bra 101)
	   (bra 102)
	   (bra 103)
	   (bra 104)
	   (bra 105)
	   (bra 100)
    101
    102
    103
    104
    105
           (bra 100)

	   (return))))




(mapc 'print ll)

(terpri)

(mapc 'print (#:modtoc:peephole-optimize ll)))

