               Les commandes d'EdLin sont

Deplacement du curseur (a la Emacs): 
    ^F, ^B     avance et recule d'un caractere
 ESC-f, ESC-b  debut et fin de mot
    ^A, ^E     debut et fin de ligne

Effacement (a la place de BS on peut utiliser DEL):
    ^D, BS     caractere suivant, precedent
 ESC-d, ESC-BS mot suivant, precedent
    ^U, ^K     debut et fin de ligne (voir ^Y)
    ^Y         reinsere les caracteres detruits par ^K ou ^U

Historique des commandes:
    ^I, ^N     commande precedente, suivante
 ESC-<, ESC->  debut, fin de l'historique
 ESC-h         liste l'historique
 ESC-ESC       retrouve une commande anterieure commencant comme 
                 la commande courante

Fin de ligne:
    CR ou LF   transmet la ligne a Lisp et la sauve dans l'historique
    ^O         transmet la ligne a Lisp et passe a la commande suivante
                 dans l'historique

Aide:
    ESC-SP     complete le symbole precedent le curseur, ou bien
                 liste tous les symboles possibles en cas d'ambiguite
    ESC-'      quote le symbole courant

Divers:
    ESC-<nombre> <commande>  repete <nombre> fois <commande>
    ^L                       reaffichage de la ligne
    \                        caractere de forcage
    ESC-^G                   sequence illegale 
                                    (utile quand on tape ESC par erreur)
    ESC-?                    documentation EdLin
    ^T                       pour les dislexiques


(edlin)    lance edlin
(edlinend) termine edlin

Les commandes qui sont aussi des macro-caracteres Le_Lisp (^L par exemple)
ne sont pas interpretees en debut de ligne.
