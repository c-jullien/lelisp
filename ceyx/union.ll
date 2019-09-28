; .EnTete "Programmer en Ceyx" "" "Annexe III: Les Ensembles Ordonne's"
; .Annexe III "Les Ensembles Ordonne's"
; .Auteur "Jean-Marie Hullot"
; .i
; Ce chapitre est un exemple d'utilisation de mode`les auto-type's
; c'est a` dire de'finis par deftype, ... 
; 
; Toutes les fonctions de'crites ici sont utilisables sous Ceyx a`
; condition d'avoir charge' le fichier union.ll de la bibliothe`que
; Ceyx, qui n'est d'ailleurs pas autre chose que ce chapitre:
; .r
; 
; .DebLL 1
; ? (ceyx-load union)
; = union.ll
; .FinLL
; .pp
; 
; Nous pre'sentons ici une structure analogue a` la structure de liste
; mais pour laquelle les ope'rations conc et merge (nconc) sont
; re'alise'es en temps constant. Ceci est re'alise' en conservant
; toujours un pointeur vers la dernie`re cellule de la liste (last).
; 
; .Section "De'finition et Cre'ation"

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Type: Union\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s
; l l.
; \fBFonction de Cre'ation\fR
; Union|list
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; list|(List ...)
; last|*
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; car|(union)
; clear|(union)
; conc|(union x)
; cons|(union x)
; delete|(union x)
; flat|(union)
; last|obj
; list|obj
; member|(union item)
; merge|(union1 union2)
; pop-down|(union item)
; pop-up|(union item)
; .TE
; .ps +2

; Un \fIensemble ordonne'\fR est une structure a` deux champs \fIlist\fR
; et \fIlast\fR telle que:
;  - \fIlist\fR pointe toujours vers une liste Lisp,
;  - \fIlast\fR pointe vers (last \fIlist\fR).

(deftrecord Union list~(List *) last)

(defaccess Union)

; Pour construire un ensemble ordonne' dont les n premiers e'le'ments
; sont passe's en arguments:

(de Union list
    (omakeq Union list list last (last list)))

(defmake {Union} Union)

; \fBExemples:\fR
; 
; .DebLL 1
; ? (setq u (Union 'a 'b 'c))
; = #(Union (a b c) c)
; ? ({Union}:list u)
; = (a b c)
; ? ({Union}:last u)
; = (c)
; .FinLL
; .pp

; .Section "Fonctions de Manipulation"
; Le premier e'le'ment:

(de {Union}:car (union)
    (car ({Union}:list union)))

(cxcp-inline {Union}:car)

; Pour vider un ensemble ordonne':

(de {Union}:clear (union)
    ({Union}:list union ())
    ({Union}:last union ())
    union)

; Pour ajouter un e'le'ment en te^te:

(de {Union}:cons (union x)
    (if ({Union}:last union)
        ({Union}:list union (cons x ({Union}:list union)))
        ({Union}:list union (list x))
        ({Union}:last union ({Union}:list union)))
    union)

; Pour ajouter un e'le'ment en queue:

(de {Union}:conc (union x)
    (if ({Union}:last union)
        (progn
           (rplacd ({Union}:last union) (list x))
           ({Union}:last union (cdr ({Union}:last union))))
        ({Union}:list union (list x))
        ({Union}:last union ({Union}:list union)))
    union)

; \fBExemples:\fR
; 
; .DebLL 1
; ? (send 'clear u)
; = #(Union ())
; ? u
; = #(Union ())
; ? (send 'cons u 'b)
; = #(Union (b) b)
; ? (send 'conc u 'c)
; = #(Union (b c) c)
; ? (send 'cons u 'a)
; = #(Union (a b c) c)
; .FinLL
; .pp

; Pour supprimer un e'le'ment:

(demethod {Union}:delete (union x) (list last)
    (when list
          (if (neq x (car list))
              (when (eq (list-delete list x) last)
                    ({Union}:last union (last list)))
              ({Union}:list union (cdr list))
              (when (eq list last) ({Union}:last union ()))))
    union)

(de list-delete (list x)
    (when (cdr list)
          (if (neq (cadr list) x)
              (list-delete (cdr list) x)
              (prog1 (cdr list)
                     (rplacd list (cddr list))))))

; \fBExemples:\fR
; 
; .DebLL 1
; ? (send 'delete u 'c)
; = #(Union (a b) b)
; ? (send 'delete u 'a)
; = #(Union (b) b)
; ? (send 'conc u (setq x '(1 2 3)))
; = #(Union (b (1 2 3)) (1 2 3))
; ? (send 'delete u '(1 2 3))
; = #(Union (b (1 2 3)) (1 2 3))
; ? (send 'delete u x)
; = #(Union (b) b)
; .FinLL
; .pp

; L'ope'ration de fusion entre deux ensembles ordonne's, le re'sultat de
; la fusion e'tant stocke' dans le premier argument:

(de {Union}:merge (union1 union2)
    (if ({Union}:list union1)
        (when ({Union}:list union2)
              (rplacd ({Union}:last union1) ({Union}:list union2))
              ({Union}:last union1 ({Union}:last union2)))
        (<- union1 union2))
    union1)

; Pour aplatir un ensemble ordonne', c'est a` dire effectuer l'ope'ration:
; 
;   (Union ... (Union a b c) ...) -> (Union ... a b c ...)
; 
; autant que possible:

(demethod {Union}:flat (union) (list)
    ({Union}:clear union)
    (while list
           (if (eq (type (car list)) 'Union)
               ({Union}:merge union ({Union}:flat (nextl list)))
               ({Union}:conc union (nextl list))))
     union)

       
; \fBExemples:\fR
; 
; .DebLL 1
; ? (setq u1 (Union 'a 'b 'c))
; = #(Union (a b c) c)
; ? (setq u2 (Union 1 2 3))
; = #(Union (1 2 3) 3)
; ? (send 'merge u1 u2)
; = #(Union (a b c 1 2 3) 3)
; ? u1
; = #(Union (a b c 1 2 3) 3)
; ? u2
; = #(Union (1 2 3) 3)
; ? (setq u3 (Union 'a1 'a2 'a3))
; = #(Union (a1 a2 a3) a3)
; ? (send 'conc u1 u3)
; = #(Union (a b c 1 2 3 #(Union (a1 a2 a3) a3)) #(Union (a1 a2 a3) a3))
; ? (send 'flat u1)
; = #(Union (a b c 1 2 3 a1 a2 a3) a3)
; .FinLL
; .pp


(demethod {Union}:member (union item) (list)
    (tag found
         (while list (when (eq (nextl list) item) (exit found t)))))

(de {Union}:pop-up (union item)
    (when ({Union}:member union item)
          ({Union}:delete union item)
          ({Union}:conc union item))
    union)

(de {Union}:pop-down (union item)
    (when ({Union}:member union item)
          ({Union}:delete union item)
          ({Union}:cons union item))
    union)


