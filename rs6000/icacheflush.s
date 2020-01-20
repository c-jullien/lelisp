# Le flush du cache data pour rs6000 directement ecrit en assembleur.

.extern         .icacheflush
.icacheflush:	clcs	3,0xe		# min size line cache.
 		sf	14,3,14		# recule d'une ligne.
clfcont:	clf	14,3		# invalide une ligne.
 		cmp	0,14,15
 		blt	clfcont
		lil     14,0
		clf     14,15		# invalide le dernier.
 		l	0,0(1)		# return.
 		ai	1,1,4
 		mtlr	0
		br

