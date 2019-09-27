(setq #:system:read-case-flag t)
(dmc |{| () ((lambda (#:with:arg0) (protect (progn (typecn 58 'cpkgc) ((lambda
(a) (cond ((<> 125 (readcn)) (error '|{| "pas d'accolade fermante" a)) ((not (
symbolp a)) (error '|{| "abbre'viation incorrecte" a)) ((<> 58 (peekcn)) (
plink a)) (t (readcn) ((lambda (r) (if (symbolp r) (symbol (concatpkgc (plink 
a) (packagecell r)) r) (error '|{| 'errsxt (list a r)))) (read))))) ((lambda (
#:with:arg0) (protect (progn (typecn 125 'csep) (read)) (typecn 125 #:with:
arg0))) (typecn 125)))) (typecn 58 #:with:arg0))) (typecn 58)))
(loaderesolve)
(loader '((fentry <=p subr2) (mov (@ <=p) a4) (mov '(pkg1 pkg2) a3) (jcall #:
llcp:cbind2) (cabne a1 a2 1001) (mov (cvalq t) a1) (return) 1001 (cabne a1 '()
1003) (mov (cvalq nil) a1) (return) 1003 (push (@ 1005)) (push a1) (mov '1 a4)
(jmp packagecell) 1005 (mov (cvalq pkg2) a2) (jmp <=p)) ())
(loader '((fentry plink nsubr) (mov (@ plink) a2) (mov 'l a3) (jcall #:llcp:
cbindn) (push (@ 1003)) (mov (cvalq l) a1) (jcall length) (push a1) (push '2) 
(mov '2 a4) (jmp =) 1003 (btnil a1 1001) (mov (cvalq l) a1) (car a1) (mov (
cvalq l) a2) (cdr a2) (car a2) (mov 'plink a3) (jmp putprop) 1001 (mov (cvalq 
l) a1) (car a1) (jmp get-plink)) ())
(loader '((fentry get-plink subr1) (mov (@ get-plink) a4) (mov '(x) a3) (jcall
#:llcp:cbind1) (mov 'plink a2) (jcall getprop) (bfnil a1 1001) (mov (cvalq x) 
a1) 1001 (return)) ())
(loader '((fentry defabbrev fsubr) (mov (@ defabbrev) a2) (mov '(symbol abbrev
) a3) (jcall #:llcp:cbinds) (cabeq (cvalq abbrev) '() 1001) (cabeq (cvalq 
symbol) (cvalq abbrev) 1001) (mov (cvalq symbol) a1) (mov (cvalq abbrev) a2) (
jcall put-abbrev) (push (cvalq abbrev)) (push (cvalq symbol)) (mov '2 a4) (jmp
plink) 1001 (mov nil a1) (return)) ())
(loader '((fentry get-labbrev subr1) (mov (@ get-labbrev) a4) (mov '(symb) a3)
(jcall #:llcp:cbind1) (mov 'labbrev a2) (jmp getprop)) ())
(loader '((fentry put-abbrev subr2) (mov (@ put-abbrev) a4) (mov '(symb abbrev
) a3) (jcall #:llcp:cbind2) 1001 (jcall get-labbrev) (push a1) (mov '1 a4) (
mov (@ 1001) a2) (mov '(labbrev) a3) (jcall #:llcp:cbindl) (mov (cvalq abbrev)
a1) (mov (cvalq labbrev) a2) (jcall memq) (bfnil a1 1002) (push (cvalq symb)) 
(mov (cvalq abbrev) a1) (mov (cvalq labbrev) a2) (jcall cons) (push a1) (mov '
labbrev a1) (mov a1 a3) (pop a2) (pop a1) (jmp putprop) 1002 (mov nil a1) (
return) (return)) ())
(loaderesolve)
(defabbrev Ceyx Ceyx)
(defabbrev #:Ceyx:system CeyxSys)
(defvar #:Ceyx:cxcp-access ())
(defvar #:Ceyx:cxcp-inline ())
(loader '((fentry #:Ceyx:cxcp-access subr2) (mov (@ #:Ceyx:cxcp-access) a4) (
mov '(name access) a3) (jcall #:llcp:cbind2) (mov (cvalq #:Ceyx:cxcp-access) 
a1) (mov (cvalq name) a2) (mov (cvalq access) a3) (jcall addalist) (mov a1 (
cvalq #:Ceyx:cxcp-access)) (return)) ())
(loader '((fentry #:Ceyx:cxcp-inline subr2) (mov (@ #:Ceyx:cxcp-inline) a4) (
mov '(name lprotect) a3) (jcall #:llcp:cbind2) (mov (cvalq #:Ceyx:cxcp-inline)
a1) (mov (cvalq name) a2) (mov (cvalq lprotect) a3) (jcall addalist) (mov a1 (
cvalq #:Ceyx:cxcp-inline)) (return)) ())
(loader '((fentry addalist subr3) (push (@ addalist)) (mov '(alist key val) a4
) (jcall #:llcp:cbind3) 1001 (mov a2 a1) (mov (cvalq alist) a2) (jcall assq) (
push a1) (mov '1 a4) (mov (@ 1001) a2) (mov '(pair) a3) (jcall #:llcp:cbindl) 
(bfnil (cvalq pair) 1002) (mov (cvalq key) a1) (mov (cvalq val) a2) (jcall 
cons) (mov (cvalq alist) a2) (jcall cons) (mov a1 (cvalq alist)) (bra 1003) 
1002 (mov (cvalq pair) a1) (mov (cvalq val) a2) (mov a2 (cdr a1)) 1003 (mov (
cvalq alist) a1) (return) (return)) ())
(loader '((fentry hfuncall dmsubr) (mov (@ hfuncall) a2) (mov '(pkg sem . 
argslist) a3) (jcall #:llcp:cbinds) (push 'funcall) (push (@ 1001)) (push '#:
Ceyx:getfn) (push (cvalq pkg)) (push (cvalq sem)) (mov '3 a4) (jmp list) 1001 
(push a1) (push (cvalq argslist)) (mov '3 a4) (jmp mcons)) ())
(loader '((fentry semcall dmsubr) (mov (@ semcall) a2) (mov '(pkg sem . 
argslist) a3) (jcall #:llcp:cbinds) (push 'funcall) (push (@ 1001)) (push '#:
Ceyx:getfn) (push (@ 1002)) (push 'plink) (push (cvalq pkg)) (mov '2 a4) (jmp 
list) 1002 (push a1) (push (cvalq sem)) (mov '3 a4) (jmp list) 1001 (push a1) 
(push (cvalq argslist)) (mov '3 a4) (jmp mcons)) ())
(loader '((fentry tcar dmsubr) (mov (@ tcar) a2) (mov '(x) a3) (jcall #:llcp:
cbinds) (push 'car) (push (cvalq x)) (mov '2 a4) (jmp list)) ())
(loader '((fentry tcdr dmsubr) (mov (@ tcdr) a2) (mov '(x) a3) (jcall #:llcp:
cbinds) (push 'cdr) (push (cvalq x)) (mov '2 a4) (jmp list)) ())
(loader '((fentry trplaca dmsubr) (mov (@ trplaca) a2) (mov '(x y) a3) (jcall 
#:llcp:cbinds) (push 'rplaca) (push (cvalq x)) (push (cvalq y)) (mov '3 a4) (
jmp list)) ())
(loader '((fentry trplacd dmsubr) (mov (@ trplacd) a2) (mov '(x y) a3) (jcall 
#:llcp:cbinds) (push 'rplacd) (push (cvalq x)) (push (cvalq y)) (mov '3 a4) (
jmp list)) ())
(loader '((fentry tdisplace dmsubr) (mov (@ tdisplace) a2) (mov '(x y) a3) (
jcall #:llcp:cbinds) (push 'displace) (push (cvalq x)) (push (cvalq y)) (mov '
3 a4) (jmp list)) ())
(loader '((fentry model dmsubr) (mov (@ model) a2) (mov '(obj . arg) a3) (
jcall #:llcp:cbinds) (bfcons (cvalq arg) 1001) (push 'put-model) (push (cvalq 
obj)) (mov (cvalq arg) a1) (car a1) (push a1) (mov '3 a4) (jmp list) 1001 (
push 'get-model) (push (cvalq obj)) (mov '2 a4) (jmp list)) ())
(synonymq get-model type-of)
(synonymq type type-of)
(loader '((fentry repr dmsubr) (mov (@ repr) a2) (mov '(obj . arg) a3) (jcall 
#:llcp:cbinds) (bfcons (cvalq arg) 1001) (push 'put-repr) (push (cvalq obj)) (
mov (cvalq arg) a1) (car a1) (push a1) (mov '3 a4) (jmp list) 1001 (push '
get-repr) (push (cvalq obj)) (mov '2 a4) (jmp list)) ())
(loader '((fentry put-model subr2) (mov (@ put-model) a4) (mov '(obj modelname
) a3) (jcall #:llcp:cbind2) (jcall tconsp) (btnil a1 1001) (mov (cvalq obj) a1
) (mov (cvalq modelname) a2) (mov a2 (car a1)) (return) 1001 (mov 'model a1) (
mov '"Not a tcons:" a2) (mov (cvalq obj) a3) (jmp syserror)) ())
(loader '((fentry get-repr subr1) (mov (@ get-repr) a4) (mov '(obj) a3) (jcall
#:llcp:cbind1) (jcall tconsp) (btnil a1 1001) (mov (cvalq obj) a1) (cdr a1) (
return) 1001 (mov (cvalq obj) a1) (return)) ())
(loader '((fentry put-repr subr2) (mov (@ put-repr) a4) (mov '(obj modelname) 
a3) (jcall #:llcp:cbind2) (jcall tconsp) (btnil a1 1001) (mov (cvalq obj) a1) 
(mov (cvalq modelname) a2) (mov a2 (cdr a1)) (return) 1001 (mov 'model a1) (
mov '"Not a tcons:" a2) (mov (cvalq obj) a3) (jmp syserror)) ())
(loader '((fentry #:Ceyx:getfn subr2) (mov (@ #:Ceyx:getfn) a4) (mov '(pkg 
symb) a3) (jcall #:llcp:cbind2) (push (@ 1002)) (push a1) (push a2) (push '())
(mov '3 a4) (jmp getfn) 1002 (bfnil a1 1001) (push '*) (push (cvalq symb)) (
mov '2 a4) (jmp getfn) 1001 (return)) ())
(loader '((fentry send-error subr2) (mov (@ send-error) a4) (mov '(sem 
argslist) a3) (jcall #:llcp:cbind2) 1001 (push (@ 1002)) (push '*) (push a1) (
mov '2 a4) (jmp getfn) 1002 (push a1) (mov '1 a4) (mov (@ 1001) a2) (mov '(fun
) a3) (jcall #:llcp:cbindl) (btnil (cvalq fun) 1003) (push (cvalq fun)) (push 
(cvalq argslist)) (mov '2 a4) (jmp apply) 1003 (push 'send) (push '
"Undefined semantic") (push (@ 1005)) (mov (cvalq argslist) a1) (car a1) (
jcall get-model) (push a1) (push (cvalq sem)) (mov '2 a4) (jmp list) 1005 (mov
a1 a3) (pop a2) (pop a1) (jmp syserror) (return)) ())
(loader '((fentry listvector subr1) (mov (@ listvector) a4) (mov '(vect) a3) (
jcall #:llcp:cbind1) 1001 (push nil) (hgsize a1 a1) (push a1) (push '0) (mov '
3 a4) (mov (@ 1001) a2) (mov '(l len n) a3) (jcall #:llcp:cbindl) (bra 1003) 
1002 (hpxmov (cvalq vect) (cvalq n) a1) (mov (cvalq l) a2) (jcall cons) (mov 
a1 (cvalq l)) (mov (cvalq n) a1) (jcall 1+) (mov a1 (cvalq n)) 1003 (push (@ 
1004)) (push (cvalq n)) (push (cvalq len)) (mov '2 a4) (jmp =) 1004 (btnil a1 
1002) (mov (cvalq l) a1) (jmp nreverse) (return)) ())
(loader '((fentry <- subr2) (mov (@ <-) a4) (mov '(x y) a3) (jcall #:llcp:
cbind2) (jcall tconsp) (btnil a1 1001) (mov (cvalq y) a1) (jcall tconsp) (
btnil a1 1001) (mov (cvalq x) a1) (mov (cvalq y) a2) (jmp displace) 1001 (
bfcons (cvalq x) 1003) (bfcons (cvalq y) 1003) (mov (cvalq x) a1) (mov (cvalq 
y) a2) (jmp displace) 1003 (push '<-) (push '"Cannot execute") (push (@ 1005))
(push (cvalq x)) (push (cvalq y)) (mov '2 a4) (jmp list) 1005 (mov a1 a3) (pop
a2) (pop a1) (jmp syserror)) ())
(loader '((fentry Model subr2) (mov (@ Model) a4) (mov '(type fieldstruct) a3)
(jcall #:llcp:cbind2) (push a1) (push (@ 1001)) (push nil) (push a2) (mov '2 
a4) (jmp vector) 1001 (mov a1 a2) (pop a1) (jmp tcons)) ())
(defabbrev Model Model)
(loader '((fentry #:Model:init nsubr) (mov (@ #:Model:init) a2) (mov 'l a3) (
jcall #:llcp:cbindn) (mov (cvalq l) a1) (cdr a1) (bfnil a1 1001) (mov (cvalq l
) a1) (car a1) (cdr a1) (mov '0 a2) (hpxmov a1 a2 a1) (return) 1001 (mov (
cvalq l) a1) (car a1) (cdr a1) (mov '0 a2) (mov (cvalq l) a3) (cdr a3) (car a3
) (hpmovx a3 a1 a2) (mov a3 a1) (return)) ())
(loader '((fentry #:Model:fieldstruct nsubr) (mov (@ #:Model:fieldstruct) a2) 
(mov 'l a3) (jcall #:llcp:cbindn) (mov (cvalq l) a1) (cdr a1) (bfnil a1 1001) 
(mov (cvalq l) a1) (car a1) (cdr a1) (mov '1 a2) (hpxmov a1 a2 a1) (return) 
1001 (mov (cvalq l) a1) (car a1) (cdr a1) (mov '1 a2) (mov (cvalq l) a3) (cdr 
a3) (car a3) (hpmovx a3 a1 a2) (mov a3 a1) (return)) ())
(loader '((fentry #:Model:set-access subr2) (mov (@ #:Model:set-access) a4) (
mov '(model laccess) a3) (jcall #:llcp:cbind2) (mov nil a1) (return)) ())
(loader '((fentry #:Model:set-init subr1) (mov (@ #:Model:set-init) a4) (mov '
(model) a3) (jcall #:llcp:cbind1) (push a1) (mov '1 a4) (jmp #:Model:init)) ()
)
(loader '((fentry #:Model:find-field subr2) (mov (@ #:Model:find-field) a4) (
mov '(model name) a3) (jcall #:llcp:cbind2) (mov nil a1) (return)) ())
(loader '((fentry #:Model:flat-fields subr1) (mov (@ #:Model:flat-fields) a4) 
(mov '(model) a3) (jcall #:llcp:cbind1) (mov nil a1) (return)) ())
(loader '((fentry #:Model:Field subr3) (push (@ #:Model:Field)) (mov '(name 
model init) a4) (jcall #:llcp:cbind3) (push '#:Model:Field) (push (@ 1001)) (
push a3) (push a2) (push a1) (push nil) (mov '4 a4) (jmp vector) 1001 (mov a1 
a2) (pop a1) (jmp tcons)) ())
(defabbrev #:Model:Field #:Model:Field)
(loader '((fentry #:Model:Field:name nsubr) (mov (@ #:Model:Field:name) a2) (
mov 'l a3) (jcall #:llcp:cbindn) (mov (cvalq l) a1) (cdr a1) (bfnil a1 1001) (
mov (cvalq l) a1) (car a1) (cdr a1) (mov '2 a2) (hpxmov a1 a2 a1) (return) 
1001 (mov (cvalq l) a1) (car a1) (cdr a1) (mov '2 a2) (mov (cvalq l) a3) (cdr 
a3) (car a3) (hpmovx a3 a1 a2) (mov a3 a1) (return)) ())
(loader '((fentry #:Model:Field:access nsubr) (mov (@ #:Model:Field:access) a2
) (mov 'l a3) (jcall #:llcp:cbindn) (mov (cvalq l) a1) (cdr a1) (bfnil a1 1001
) (mov (cvalq l) a1) (car a1) (cdr a1) (mov '3 a2) (hpxmov a1 a2 a1) (return) 
1001 (mov (cvalq l) a1) (car a1) (cdr a1) (mov '3 a2) (mov (cvalq l) a3) (cdr 
a3) (car a3) (hpmovx a3 a1 a2) (mov a3 a1) (return)) ())
(loader '((fentry #:Model:Field:set-access subr2) (mov (@ #:Model:Field:
set-access) a4) (mov '(field laccess) a3) (jcall #:llcp:cbind2) (push (@ 1003)
) (push a1) (mov '1 a4) (jmp #:Model:fieldstruct) 1003 (btsymb a1 1001) (push 
(@ 1004)) (push 'set-access) (push (@ 1005)) (push (cvalq field)) (mov '1 a4) 
(jmp #:Model:fieldstruct) 1005 (push a1) (push (cvalq laccess)) (mov '3 a4) (
jmp send) 1004 (bra 1002) 1001 (mov nil a1) 1002 (push (cvalq field)) (mov (
cvalq laccess) a1) (jcall #:Ceyx:system:insert-access) (push a1) (mov '2 a4) (
jmp #:Model:Field:access)) ())
(loader '((fentry #:Model:Field:set-init subr1) (mov (@ #:Model:Field:set-init
) a4) (mov '(field) a3) (jcall #:llcp:cbind1) (push (@ 1003)) (push a1) (mov '
1 a4) (jmp #:Model:fieldstruct) 1003 (bfsymb a1 1001) (mov nil a1) (bra 1002) 
1001 (push (@ 1004)) (push (cvalq field)) (push (@ 1005)) (push 'set-init) (
push (@ 1006)) (push (cvalq field)) (mov '1 a4) (jmp #:Model:fieldstruct) 1006
(push a1) (mov '2 a4) (jmp send) 1005 (push a1) (mov '2 a4) (jmp #:Model:init)
1004 1002 (push (cvalq field)) (mov '1 a4) (jmp #:Model:init)) ())
(loader '((fentry #:Model:Field:find-field subr2) (mov (@ #:Model:Field:
find-field) a4) (mov '(field name) a3) (jcall #:llcp:cbind2) (push a2) (push (
@ 1003)) (push a1) (mov '1 a4) (jmp #:Model:Field:name) 1003 (pop a2) (cabne 
a1 a2 1001) (mov (cvalq field) a1) (return) 1001 (push (@ 1006)) (push (cvalq 
field)) (mov '1 a4) (jmp #:Model:fieldstruct) 1006 (bfsymb a1 1004) (mov nil 
a1) (return) 1004 (push 'find-field) (push (@ 1007)) (push (cvalq field)) (mov
'1 a4) (jmp #:Model:fieldstruct) 1007 (push a1) (push (cvalq name)) (mov '3 a4
) (jmp send)) ())
(loader '((fentry #:Model:Field:flat-fields subr1) (mov (@ #:Model:Field:
flat-fields) a4) (mov '(field) a3) (jcall #:llcp:cbind1) (push a1) (push (@ 
1005)) (push a1) (mov '1 a4) (jmp #:Model:fieldstruct) 1005 (bfsymb a1 1003) (
mov nil a1) (bra 1004) 1003 (push (@ 1006)) (push 'flat-fields) (push (@ 1007)
) (push (cvalq field)) (mov '1 a4) (jmp #:Model:fieldstruct) 1007 (push a1) (
mov '2 a4) (jmp send) 1006 1004 (mov a1 a2) (pop a1) (jmp cons)) ())
(loader '((fentry #:Model:Predicate subr2) (mov (@ #:Model:Predicate) a4) (mov
'(fun init) a3) (jcall #:llcp:cbind2) 1001 (mov a1 a2) (mov '#:Model:Predicate
a1) (jcall Model) (push a1) (mov '1 a4) (mov (@ 1001) a2) (mov '(model) a3) (
jcall #:llcp:cbindl) (push (@ 1002)) (push (cvalq model)) (push (cvalq init)) 
(mov '2 a4) (jmp #:Model:init) 1002 (mov (cvalq model) a1) (return) (return)) 
())
(loader '((fentry #:Model:List subr1) (mov (@ #:Model:List) a4) (mov '(model) 
a3) (jcall #:llcp:cbind1) (mov a1 a2) (mov '#:Model:List a1) (jmp Model)) ())
(loader '((fentry #:Model:Cons subr2) (mov (@ #:Model:Cons) a4) (mov '(model1 
model2) a3) (jcall #:llcp:cbind2) (push '#:Model:Cons) (jcall cons) (mov a1 a2
) (pop a1) (jmp Model)) ())
(defabbrev #:Model:Cons #:Model:Cons)
(loader '((fentry #:Model:Cons:set-access subr2) (mov (@ #:Model:Cons:
set-access) a4) (mov '(model laccess) a3) (jcall #:llcp:cbind2) (push (@ 1001)
) (push 'set-access) (push (@ 1002)) (push a1) (mov '1 a4) (jmp #:Model:
fieldstruct) 1002 (car a1) (push a1) (push (@ 1003)) (push (cvalq laccess)) (
push (@ 1004)) (push 'car) (mov '1 a4) (jmp list) 1004 (push a1) (mov '2 a4) (
jmp append) 1003 (push a1) (mov '3 a4) (jmp send) 1001 (push 'set-access) (
push (@ 1005)) (push (cvalq model)) (mov '1 a4) (jmp #:Model:fieldstruct) 1005
(cdr a1) (push a1) (push (@ 1006)) (push (cvalq laccess)) (push (@ 1007)) (
push 'cdr) (mov '1 a4) (jmp list) 1007 (push a1) (mov '2 a4) (jmp append) 1006
(push a1) (mov '3 a4) (jmp send)) ())
(loader '((fentry #:Model:Cons:set-init subr1) (mov (@ #:Model:Cons:set-init) 
a4) (mov '(model) a3) (jcall #:llcp:cbind1) (push (@ 1001)) (push a1) (push (@
1004)) (push 'set-init) (push (@ 1005)) (push a1) (mov '1 a4) (jmp #:Model:
fieldstruct) 1005 (car a1) (push a1) (mov '2 a4) (jmp send) 1004 (push a1) (
push (@ 1006)) (push 'set-init) (push (@ 1007)) (push (cvalq model)) (mov '1 
a4) (jmp #:Model:fieldstruct) 1007 (cdr a1) (push a1) (mov '2 a4) (jmp send) 
1006 (mov a1 a2) (pop a1) (jcall cons) (push a1) (mov '2 a4) (jmp #:Model:init
) 1001 (push (cvalq model)) (mov '1 a4) (jmp #:Model:init)) ())
(loader '((fentry #:Model:Cons:find-field subr2) (mov (@ #:Model:Cons:
find-field) a4) (mov '(model name) a3) (jcall #:llcp:cbind2) (push (@ 1002)) (
push 'find-field) (push (@ 1003)) (push a1) (mov '1 a4) (jmp #:Model:
fieldstruct) 1003 (car a1) (push a1) (push (cvalq name)) (mov '3 a4) (jmp send
) 1002 (bfnil a1 1001) (push 'find-field) (push (@ 1004)) (push (cvalq model))
(mov '1 a4) (jmp #:Model:fieldstruct) 1004 (cdr a1) (push a1) (push (cvalq 
name)) (mov '3 a4) (jmp send) 1001 (return)) ())
(loader '((fentry #:Model:Cons:flat-fields subr1) (mov (@ #:Model:Cons:
flat-fields) a4) (mov '(cons) a3) (jcall #:llcp:cbind1) (push (@ 1001)) (push 
'flat-fields) (push (@ 1002)) (push a1) (mov '1 a4) (jmp #:Model:fieldstruct) 
1002 (car a1) (push a1) (mov '2 a4) (jmp send) 1001 (push a1) (push (@ 1003)) 
(push 'flat-fields) (push (@ 1004)) (push (cvalq cons)) (mov '1 a4) (jmp #:
Model:fieldstruct) 1004 (cdr a1) (push a1) (mov '2 a4) (jmp send) 1003 (push 
a1) (mov '2 a4) (jmp nconc)) ())
(loader '((fentry #:Model:Vector nsubr) (mov (@ #:Model:Vector) a2) (mov '
lmodel a3) (jcall #:llcp:cbindn) (push '#:Model:Vector) (push (@ 1001)) (push 
'vector) (push (cvalq lmodel)) (mov '2 a4) (jmp apply) 1001 (mov a1 a2) (pop 
a1) (jmp Model)) ())
(defabbrev #:Model:Vector #:Model:Vector)
(loader '((fentry #:Model:Vector:set-access subr2) (mov (@ #:Model:Vector:
set-access) a4) (mov '(model laccess) a3) (jcall #:llcp:cbind2) 1001 (push (@ 
1002)) (push a1) (mov '1 a4) (jmp #:Model:fieldstruct) 1002 (push a1) (push '0
) (mov '2 a4) (mov (@ 1001) a2) (mov '(vfield n) a3) (jcall #:llcp:cbindl) (
bra 1004) 1003 (push (@ 1005)) (push 'set-access) (hpxmov (cvalq vfield) (
cvalq n) a1) (push a1) (push (@ 1006)) (push (cvalq laccess)) (push (@ 1007)) 
(push (cvalq n)) (mov '1 a4) (jmp list) 1007 (push a1) (mov '2 a4) (jmp append
) 1006 (push a1) (mov '3 a4) (jmp send) 1005 (mov (cvalq n) a1) (jcall 1+) (
mov a1 (cvalq n)) 1004 (push (@ 1008)) (push (cvalq n)) (mov (cvalq vfield) a1
) (hgsize a1 a1) (push a1) (mov '2 a4) (jmp =) 1008 (btnil a1 1003) (return) (
return)) ())
(loader '((fentry #:Model:Vector:set-init subr1) (mov (@ #:Model:Vector:
set-init) a4) (mov '(model) a3) (jcall #:llcp:cbind1) (push (@ 1001)) (push a1
) (push (@ 1002)) (push 'vector) 1003 (push (@ 1004)) (push (@ 1005)) (push a1
) (mov '1 a4) (jmp #:Model:fieldstruct) 1005 (jcall listvector) (push a1) (mov
'1 a4) (mov (@ 1003) a2) (mov '(#:system:map:arg0) a3) (jcall #:llcp:cbindl) 
1006 (push nil) (mov '1 a4) (mov (@ 1006) a2) (mov '(#:system:map:r) a3) (
jcall #:llcp:cbindl) (bra 1008) 1007 1009 (push (@ 1010)) (mov (cvalq #:
system:map:arg0) a1) (car a1) (push a1) (mov (cvalq #:system:map:arg0) a1) (
cdr a1) (mov a1 (cvalq #:system:map:arg0)) (pop a1) (push a1) (mov '1 a4) (mov
(@ 1009) a2) (mov '(x) a3) (jcall #:llcp:cbindl) (push 'set-init) (push (cvalq
x)) (mov '2 a4) (jmp send) 1010 (mov (cvalq #:system:map:r) a2) (jcall cons) (
mov a1 (cvalq #:system:map:r)) 1008 (btcons (cvalq #:system:map:arg0) 1007) 
1011 (mov (cvalq #:system:map:r) a1) (jmp nreverse) (return) 1004 (push a1) (
mov '2 a4) (jmp apply) 1002 (push a1) (mov '2 a4) (jmp #:Model:init) 1001 (
push (cvalq model)) (mov '1 a4) (jmp #:Model:init)) ())
(loader '((fentry #:Model:Vector:find-field subr2) (mov (@ #:Model:Vector:
find-field) a4) (mov '(model name) a3) (jcall #:llcp:cbind2) 1001 (push (@ 
1002)) (push a1) (mov '1 a4) (jmp #:Model:fieldstruct) 1002 (push a1) (push '0
) (push nil) (mov '3 a4) (mov (@ 1001) a2) (mov '(vfield n field) a3) (jcall 
#:llcp:cbindl) (mov 'found a1) (jcall #:llcp:tag) (bra 1004) 1003 (push (@ 
1007)) (push 'find-field) (hpxmov (cvalq vfield) (cvalq n) a1) (push a1) (push
(cvalq name)) (mov '3 a4) (jmp send) 1007 (mov a1 (cvalq field)) (btnil a1 
1005) (mov 'found a2) (jmp #:llcp:exit) 1005 (mov (cvalq n) a1) (jcall 1+) (
mov a1 (cvalq n)) 1004 (push (@ 1008)) (push (cvalq n)) (mov (cvalq vfield) a1
) (hgsize a1 a1) (push a1) (mov '2 a4) (jmp =) 1008 (btnil a1 1003) (mov nil 
a1) (return) (return)) ())
(loader '((fentry #:Model:Vector:flat-fields subr1) (mov (@ #:Model:Vector:
flat-fields) a4) (mov '(vector) a3) (jcall #:llcp:cbind1) 1001 (push (@ 1002))
(push a1) (mov '1 a4) (jmp #:Model:fieldstruct) 1002 (push a1) (push nil) (
push '0) (mov '3 a4) (mov (@ 1001) a2) (mov '(vfield result n) a3) (jcall #:
llcp:cbindl) (bra 1004) 1003 (push (@ 1005)) (push (cvalq result)) (push (@ 
1006)) (push 'flat-fields) (hpxmov (cvalq vfield) (cvalq n) a1) (push a1) (mov
'2 a4) (jmp send) 1006 (push a1) (mov '2 a4) (jmp nconc) 1005 (mov a1 (cvalq 
result)) (mov (cvalq n) a1) (jcall 1+) (mov a1 (cvalq n)) 1004 (push (@ 1007))
(push (cvalq n)) (mov (cvalq vfield) a1) (hgsize a1 a1) (push a1) (mov '2 a4) 
(jmp =) 1007 (btnil a1 1003) (mov (cvalq result) a1) (return) (return)) ())
(loader '((fentry #:Model:Tcons subr2) (mov (@ #:Model:Tcons) a4) (mov '(
symbol field) a3) (jcall #:llcp:cbind2) (push '#:Model:Tcons) (jcall tcons) (
mov a1 a2) (pop a1) (jmp Model)) ())
(defabbrev #:Model:Tcons #:Model:Tcons)
(loader '((fentry #:Model:Tcons:set-access subr2) (mov (@ #:Model:Tcons:
set-access) a4) (mov '(model laccess) a3) (jcall #:llcp:cbind2) (push '
set-access) (push (@ 1001)) (push a1) (mov '1 a4) (jmp #:Model:fieldstruct) 
1001 (cdr a1) (push a1) (push (@ 1002)) (push (cvalq laccess)) (push (@ 1003))
(push 'tcdr) (mov '1 a4) (jmp list) 1003 (push a1) (mov '2 a4) (jmp append) 
1002 (push a1) (mov '3 a4) (jmp send)) ())
(loader '((fentry #:Model:Tcons:set-init subr1) (mov (@ #:Model:Tcons:set-init
) a4) (mov '(model) a3) (jcall #:llcp:cbind1) (push (@ 1001)) (push a1) (push 
(@ 1003)) (push a1) (mov '1 a4) (jmp #:Model:fieldstruct) 1003 (car a1) (push 
a1) (push (@ 1004)) (push 'set-init) (push (@ 1005)) (push (cvalq model)) (mov
'1 a4) (jmp #:Model:fieldstruct) 1005 (cdr a1) (push a1) (mov '2 a4) (jmp send
) 1004 (mov a1 a2) (pop a1) (jcall tcons) (push a1) (mov '2 a4) (jmp #:Model:
init) 1001 (push (cvalq model)) (mov '1 a4) (jmp #:Model:init)) ())
(loader '((fentry #:Model:Tcons:find-field subr2) (mov (@ #:Model:Tcons:
find-field) a4) (mov '(model name) a3) (jcall #:llcp:cbind2) (push 'find-field
) (push (@ 1001)) (push a1) (mov '1 a4) (jmp #:Model:fieldstruct) 1001 (cdr a1
) (push a1) (push (cvalq name)) (mov '3 a4) (jmp send)) ())
(loader '((fentry #:Model:Tcons:flat-fields subr1) (mov (@ #:Model:Tcons:
flat-fields) a4) (mov '(tcons) a3) (jcall #:llcp:cbind1) (push 'flat-fields) (
push (@ 1001)) (push a1) (mov '1 a4) (jmp #:Model:fieldstruct) 1001 (cdr a1) (
push a1) (mov '2 a4) (jmp send)) ())
(loader '((fentry #:symbol:set-init subr1) (mov (@ #:symbol:set-init) a4) (mov
'(model) a3) (jcall #:llcp:cbind1) (mov nil a1) (return)) ())
(loader '((fentry #:symbol:set-access subr2) (mov (@ #:symbol:set-access) a4) 
(mov '(model laccess) a3) (jcall #:llcp:cbind2) (mov nil a1) (return)) ())
(loader '((fentry #:symbol:find-field subr2) (mov (@ #:symbol:find-field) a4) 
(mov '(model name) a3) (jcall #:llcp:cbind2) (mov nil a1) (return)) ())
(loader '((fentry #:symbol:flat-fields subr1) (mov (@ #:symbol:flat-fields) a4
) (mov '(model) a3) (jcall #:llcp:cbind1) (mov nil a1) (return)) ())
(loader '((fentry defmodel dmsubr) (mov (@ defmodel) a2) (mov 'l a3) (jcall #:
llcp:cbinds) (push (@ 1003)) (mov (cvalq l) a1) (jcall length) (push a1) (push
'2) (mov '2 a4) (jmp =) 1003 (bfnil a1 1001) (mov 'defmodel a1) (mov '
"require 2 arguments" a2) (mov (cvalq l) a3) (jcall syserror) (bra 1002) 1001 
(mov nil a1) 1002 1004 (mov (cvalq l) a1) (car a1) (push a1) (mov (cvalq l) a1
) (cdr a1) (car a1) (push a1) (mov '2 a4) (mov (@ 1004) a2) (mov '(namedescr 
model) a3) (jcall #:llcp:cbindl) (mov (cvalq model) a1) (jcall #:Ceyx:system:
parse-model) (mov a1 (cvalq model)) (mov '#:Ceyx:system:parse-model-error a2) 
(cabne a1 a2 1005) (mov 'defmodel a1) (mov '"Bad syntax for model argument" a2
) (mov (cvalq l) a3) (jmp syserror) 1005 (mov (cvalq namedescr) a1) (mov (
cvalq model) a2) (mov nil a3) (jmp defmodel-expander) (return)) ())
(loader '((fentry deftype dmsubr) (mov (@ deftype) a2) (mov 'l a3) (jcall #:
llcp:cbinds) (push (@ 1003)) (mov (cvalq l) a1) (jcall length) (push a1) (push
'2) (mov '2 a4) (jmp =) 1003 (bfnil a1 1001) (mov 'defmodel a1) (mov '
"require 2 arguments" a2) (mov (cvalq l) a3) (jcall syserror) (bra 1002) 1001 
(mov nil a1) 1002 1004 (mov (cvalq l) a1) (car a1) (push a1) (mov (cvalq l) a1
) (cdr a1) (car a1) (push a1) (mov '2 a4) (mov (@ 1004) a2) (mov '(namedescr 
model) a3) (jcall #:llcp:cbindl) (mov (cvalq model) a1) (jcall #:Ceyx:system:
parse-model) (mov a1 (cvalq model)) (mov '#:Ceyx:system:parse-model-error a2) 
(cabne a1 a2 1005) (mov 'deftype a1) (mov '"Bad syntax for model argument" a2)
(mov (cvalq l) a3) (jmp syserror) 1005 (mov (cvalq namedescr) a1) (mov (cvalq 
model) a2) (mov (cvalq t) a3) (jmp defmodel-expander) (return)) ())
(loader '((fentry defmodel-expander subr3) (push (@ defmodel-expander)) (mov '
(namedescr model tag) a4) (jcall #:llcp:cbind3) (bfsymb a1 1001) (push (@ 1003
)) (push a1) (mov '1 a4) (jmp list) 1003 (mov a1 (cvalq namedescr)) (bra 1002)
1001 (mov nil a1) 1002 1004 (push nil) (mov (cvalq namedescr) a1) (car a1) (
push a1) (mov (cvalq namedescr) a1) (cdr a1) (car a1) (push a1) (mov '3 a4) (
mov (@ 1004) a2) (mov '(expansion name abbrev) a3) (jcall #:llcp:cbindl) (
bfsymb (cvalq model) 1005) (push (@ 1009)) (push (cvalq model)) (mov '1 a4) (
jmp objval) 1009 (bfnil a1 1007) (btnil (cvalq tag) 1012) (mov 'defmodel a1) (
bra 1013) 1012 (mov 'deftype a1) 1013 (push a1) (push '"Undefined model") (
push (@ 1014)) (push (cvalq namedescr)) (push (cvalq model)) (mov '2 a4) (jmp 
list) 1014 (mov a1 a3) (pop a2) (pop a1) (jcall syserror) (bra 1008) 1007 (
push (@ 1015)) (push (cvalq model)) (mov '1 a4) (jmp objval) 1015 (jcall copy)
(mov a1 (cvalq model)) 1008 (bra 1006) 1005 (mov nil a1) 1006 (btnil (cvalq 
tag) 1016) (mov (cvalq model) a1) (jcall get-model) (mov '#:Model:Tcons a2) (
jcall <=p) (btnil a1 1018) (push (@ 1020)) (push (cvalq model)) (mov '1 a4) (
jmp #:Model:fieldstruct) 1020 (mov (cvalq name) a2) (mov a2 (car a1)) (bra 
1019) 1018 (mov (cvalq name) a1) (mov (cvalq model) a2) (jcall #:Model:Tcons) 
(mov a1 (cvalq model)) 1019 (bra 1017) 1016 (mov nil a1) 1017 (push (@ 1021)) 
(push 'set-access) (push (cvalq model)) (push nil) (mov '3 a4) (jmp send) 1021
(push (@ 1022)) (push 'set-init) (push (cvalq model)) (mov '2 a4) (jmp send) 
1022 (push (@ 1023)) (push 'defabbrev) (push (cvalq name)) (push (cvalq abbrev
)) (mov '3 a4) (jmp list) 1023 (mov (cvalq expansion) a2) (jcall cons) (mov a1
(cvalq expansion)) (push (@ 1024)) (push 'objval) (push (@ 1025)) (push 'quote
) (push (cvalq name)) (mov '2 a4) (jmp list) 1025 (push a1) (push (@ 1026)) (
push 'quote) (push (cvalq model)) (mov '2 a4) (jmp list) 1026 (push a1) (mov '
3 a4) (jmp list) 1024 (mov (cvalq expansion) a2) (jcall cons) (mov a1 (cvalq 
expansion)) (push (@ 1027)) (push 'quote) (push (cvalq name)) (mov '2 a4) (jmp
list) 1027 (mov (cvalq expansion) a2) (jcall cons) (mov a1 (cvalq expansion)) 
(push 'progn) (push ''compile) (jcall nreverse) (push a1) (mov '3 a4) (jmp 
mcons) (return)) ())
(loader '((fentry #:Ceyx:system:parse-model subr1) (mov (@ #:Ceyx:system:
parse-model) a4) (mov '(sexpr) a3) (jcall #:llcp:cbind1) 1001 (push nil) (mov 
'1 a4) (mov (@ 1001) a2) (mov '(model) a3) (jcall #:llcp:cbindl) (mov '#:Ceyx:
system:parse-model-error a1) (jcall #:llcp:tag) (mov (cvalq sexpr) a1) (jcall 
#:Ceyx:system:parse-model-internal) (mov a1 (cvalq model)) (btsymb a1 1002) (
push (@ 1004)) (push 'set-init) (push a1) (mov '2 a4) (jmp send) 1004 (push (@
1005)) (push 'set-access) (push (cvalq model)) (push nil) (mov '3 a4) (jmp 
send) 1005 (bra 1003) 1002 (mov nil a1) 1003 (mov (cvalq model) a1) (return) (
return)) ())
(loader '((fentry #:Ceyx:system:parse-model-error dmsubr) (mov (@ #:Ceyx:
system:parse-model-error) a2) (mov '() a3) (jcall #:llcp:cbinds) (mov '(exit 
#:Ceyx:system:parse-model-error '#:Ceyx:system:parse-model-error) a1) (return)
) ())
(loader '((fentry #:Ceyx:system:parse-model-internal subr1) (mov (@ #:Ceyx:
system:parse-model-internal) a4) (mov '(sexpr) a3) (jcall #:llcp:cbind1) (
bfsymb a1 1001) (return) 1001 (jcall tconsp) (bfnil a1 1005) (btcons (cvalq 
sexpr) 1003) 1005 (mov '#:Ceyx:system:parse-model-error a1) (mov '#:Ceyx:
system:parse-model-error a2) (jmp #:llcp:exit) 1003 1006 (mov (cvalq sexpr) a1
) (car a1) (push a1) (mov '1 a4) (mov (@ 1006) a2) (mov '(keyword) a3) (jcall 
#:llcp:cbindl) (btsymb (cvalq keyword) 1007) (mov '#:Ceyx:system:
parse-model-error a1) (mov '#:Ceyx:system:parse-model-error a2) (jmp #:llcp:
exit) 1007 (mov (cvalq keyword) a1) (jcall #:Ceyx:system:get-model-keyword) (
mov a1 (cvalq keyword)) (bfnil a1 1009) (mov '#:Ceyx:system:parse-model-error 
a1) (mov '#:Ceyx:system:parse-model-error a2) (jmp #:llcp:exit) 1009 (mov '
parse-model a2) (jcall #:Ceyx:getfn) (push a1) (push (cvalq sexpr)) (mov '2 a4
) (jmp funcall) (return)) ())
(loader '((fentry #:Ceyx:system:put-model-keyword subr2) (mov (@ #:Ceyx:
system:put-model-keyword) a4) (mov '(symbol val) a3) (jcall #:llcp:cbind2) (
mov '#:Ceyx:system:Model-KeyWord a3) (jmp putprop)) ())
(loader '((fentry #:Ceyx:system:get-model-keyword subr1) (mov (@ #:Ceyx:
system:get-model-keyword) a4) (mov '(symbol) a3) (jcall #:llcp:cbind1) (mov '
#:Ceyx:system:Model-KeyWord a2) (jmp getprop)) ())
(defabbrev #:Model:Predicate #:Model:Predicate)
(loader '((fentry #:Model:Predicate:parse-model subr1) (mov (@ #:Model:
Predicate:parse-model) a4) (mov '(l) a3) (jcall #:llcp:cbind1) (mov (cdr a1) 
a1) (car a1) (push a1) (push (@ 1001)) (mov (cvalq l) a1) (cdr a1) (cdr a1) (
car a1) (push a1) (mov '1 a4) (jmp eval) 1001 (mov a1 a2) (pop a1) (jmp #:
Model:Predicate)) ())
(loader '((fentry #:Model:Cons:parse-model subr1) (mov (@ #:Model:Cons:
parse-model) a4) (mov '(l) a3) (jcall #:llcp:cbind1) (mov (cdr a1) a1) (car a1
) (jcall #:Ceyx:system:parse-model-internal) (push a1) (mov (cvalq l) a1) (cdr
a1) (cdr a1) (car a1) (jcall #:Ceyx:system:parse-model-internal) (mov a1 a2) (
pop a1) (jmp #:Model:Cons)) ())
(loader '((fentry #:Model:Vector:parse-model subr1) (mov (@ #:Model:Vector:
parse-model) a4) (mov '(l) a3) (jcall #:llcp:cbind1) (push '#:Model:Vector) 
1001 (push (@ 1002)) (push (cdr a1)) (mov '1 a4) (mov (@ 1001) a2) (mov '(#:
system:map:arg0) a3) (jcall #:llcp:cbindl) 1003 (push nil) (mov '1 a4) (mov (@
1003) a2) (mov '(#:system:map:r) a3) (jcall #:llcp:cbindl) (bra 1005) 1004 (
mov (cvalq #:system:map:arg0) a1) (car a1) (push a1) (mov (cvalq #:system:map:
arg0) a1) (cdr a1) (mov a1 (cvalq #:system:map:arg0)) (pop a1) (jcall #:Ceyx:
system:parse-model-internal) (mov (cvalq #:system:map:r) a2) (jcall cons) (mov
a1 (cvalq #:system:map:r)) 1005 (btcons (cvalq #:system:map:arg0) 1004) 1006 (
mov (cvalq #:system:map:r) a1) (jmp nreverse) (return) 1002 (push a1) (mov '2 
a4) (jmp apply)) ())
(defabbrev #:Model:List #:Model:List)
(loader '((fentry #:Model:List:parse-model subr1) (mov (@ #:Model:List:
parse-model) a4) (mov '(l) a3) (jcall #:llcp:cbind1) (mov (cdr a1) a1) (car a1
) (jcall #:Ceyx:system:parse-model-internal) (jmp #:Model:List)) ())
(loader '((fentry #:Model:Field:parse-model subr1) (mov (@ #:Model:Field:
parse-model) a4) (mov '(l) a3) (jcall #:llcp:cbind1) (mov (cdr a1) a1) (car a1
) (push a1) (mov (cvalq l) a1) (cdr a1) (cdr a1) (car a1) (jcall #:Ceyx:
system:parse-model-internal) (bfnil a1 1002) (mov '* a1) 1002 (push a1) (push 
(@ 1003)) (mov (cvalq l) a1) (cdr a1) (cdr a1) (cdr a1) (car a1) (push a1) (
mov '1 a4) (jmp eval) 1003 (mov a1 a3) (pop a2) (pop a1) (jmp #:Model:Field)) 
())
(loaderesolve)
(#:Ceyx:system:put-model-keyword 'Predicate '#:Model:Predicate)
(#:Ceyx:system:put-model-keyword 'List '#:Model:List)
(#:Ceyx:system:put-model-keyword 'Cons '#:Model:Cons)
(#:Ceyx:system:put-model-keyword 'Vector '#:Model:Vector)
(#:Ceyx:system:put-model-keyword 'Field '#:Model:Field)
(#:Ceyx:system:put-model-keyword 'predicate '#:Model:Predicate)
(#:Ceyx:system:put-model-keyword 'list '#:Model:List)
(#:Ceyx:system:put-model-keyword 'cons '#:Model:Cons)
(#:Ceyx:system:put-model-keyword 'vector '#:Model:Vector)
(#:Ceyx:system:put-model-keyword 'field '#:Model:Field)
(loader '((fentry defmake dmsubr) (mov (@ defmake) a2) (mov '(modelname mkname
. args) a3) (jcall #:llcp:cbinds) (bfsymb (cvalq modelname) 1003) (push (@ 
1004)) (push (cvalq modelname)) (mov '1 a4) (jmp objval) 1004 (bfnil a1 1001) 
1003 (push 'defmake) (push '"Not a model name") (push (@ 1005)) (push (cvalq 
modelname)) (push (cvalq args)) (mov '2 a4) (jmp list) 1005 (mov a1 a3) (pop 
a2) (pop a1) (jmp syserror) 1001 (bfnil (cvalq args) 1006) (push '
add-make-function) (push (@ 1008)) (push 'quote) (push (cvalq modelname)) (mov
'2 a4) (jmp list) 1008 (push a1) (push (@ 1009)) (push 'quote) (push (cvalq 
mkname)) (mov '2 a4) (jmp list) 1009 (push a1) (mov '3 a4) (jmp list) 1006 (
mov (cvalq args) a1) (car a1) (mov a1 (cvalq args)) 1010 (push (@ 1011)) (
jcall flat) (push a1) (mov '1 a4) (mov (@ 1010) a2) (mov '(arglist) a3) (jcall
#:llcp:cbindl) (mov 'unknown-field a1) (push (@ 1014)) (jcall #:llcp:tag) (bra
1016) 1015 (push (@ 1019)) (push 'find-field) (push (@ 1020)) (push (cvalq 
modelname)) (mov '1 a4) (jmp objval) 1020 (push a1) (mov (cvalq arglist) a1) (
car a1) (push a1) (mov (cvalq arglist) a1) (cdr a1) (mov a1 (cvalq arglist)) (
pop a1) (push a1) (mov '3 a4) (jmp send) 1019 (bfnil a1 1017) (mov nil a1) (
mov 'unknown-field a2) (jmp #:llcp:exit) 1017 (mov nil a1) 1016 (bfnil (cvalq 
arglist) 1015) (mov (cvalq t) a1) (return) 1014 (bfnil a1 1012) (push 'defmake
) (push '"Some argument is not a field name") (push (@ 1021)) (push (cvalq 
modelname)) (push (cvalq args)) (mov '2 a4) (jmp list) 1021 (mov a1 a3) (pop 
a2) (pop a1) (jmp syserror) 1012 (mov nil a1) (return) 1011 (push 'progn) (
push ''compile) (push (@ 1022)) (push 'add-make-function) (push (@ 1023)) (
push 'quote) (push (cvalq modelname)) (mov '2 a4) (jmp list) 1023 (push a1) (
push (@ 1024)) (push 'quote) (push (cvalq mkname)) (mov '2 a4) (jmp list) 1024
(push a1) (mov '3 a4) (jmp list) 1022 (push a1) (push (@ 1025)) (push '#:Ceyx:
cxcp-inline) (push (@ 1026)) (push 'quote) (push (cvalq mkname)) (mov '2 a4) (
jmp list) 1026 (push a1) (push '(())) (mov '3 a4) (jmp mcons) 1025 (push a1) (
push (@ 1027)) (push 'de) (push (cvalq mkname)) (push (cvalq args)) (push (@ 
1028)) (push 'makeq) (push (@ 1029)) (push (cvalq modelname)) (mov '1 a4) (jmp
objval) 1029 (push a1) 1030 (push (@ 1031)) (mov (cvalq args) a1) (jcall flat)
(push a1) (mov '1 a4) (mov (@ 1030) a2) (mov '(#:system:map:arg0) a3) (jcall 
#:llcp:cbindl) 1032 (push nil) (mov '1 a4) (mov (@ 1032) a2) (mov '(#:system:
map:r) a3) (jcall #:llcp:cbindl) (bra 1034) 1033 1035 (push (@ 1036)) (mov (
cvalq #:system:map:arg0) a1) (car a1) (push a1) (mov (cvalq #:system:map:arg0)
a1) (cdr a1) (mov a1 (cvalq #:system:map:arg0)) (pop a1) (push a1) (mov '1 a4)
(mov (@ 1035) a2) (mov '(x) a3) (jcall #:llcp:cbindl) (mov (cvalq x) a1) (mov 
a1 a2) (jmp cons) 1036 (mov (cvalq #:system:map:r) a2) (jcall cons) (mov a1 (
cvalq #:system:map:r)) 1034 (btcons (cvalq #:system:map:arg0) 1033) 1037 (mov 
(cvalq #:system:map:r) a1) (jmp nreverse) (return) 1031 (push a1) (mov '3 a4) 
(jmp send) 1028 (push a1) (mov '4 a4) (jmp list) 1027 (push a1) (mov '5 a4) (
jmp list)) ())
(loader '((fentry add-make-function subr2) (mov (@ add-make-function) a4) (mov
'(modelname name) a3) (jcall #:llcp:cbind2) 1001 (mov 'make-functions a2) (
jcall getprop) (push a1) (mov '1 a4) (mov (@ 1001) a2) (mov '(mkfuns) a3) (
jcall #:llcp:cbindl) (mov (cvalq name) a1) (mov (cvalq mkfuns) a2) (jcall memq
) (bfnil a1 1002) (push (cvalq modelname)) (mov (cvalq name) a1) (mov (cvalq 
mkfuns) a2) (jcall cons) (push a1) (mov 'make-functions a1) (mov a1 a3) (pop 
a2) (pop a1) (jmp putprop) 1002 (mov nil a1) (return) (return)) ())
(loader '((fentry #:symbol:makeq subr2) (mov (@ #:symbol:makeq) a4) (mov '(
field lfieldname) a3) (jcall #:llcp:cbind2) (mov nil a1) (return)) ())
(loader '((fentry #:Model:Field:makeq subr2) (mov (@ #:Model:Field:makeq) a4) 
(mov '(field lfieldname) a3) (jcall #:llcp:cbind2) (push (@ 1002)) (push a1) (
mov '1 a4) (jmp #:Model:Field:name) 1002 (mov (cvalq lfieldname) a2) (jcall 
cassq) (bfnil a1 1001) (push (@ 1006)) (push (cvalq field)) (mov '1 a4) (jmp 
#:Model:fieldstruct) 1006 (btsymb a1 1005) (push (@ 1007)) (push (cvalq field)
) (mov '1 a4) (jmp #:Model:fieldstruct) 1007 (mov (cvalq lfieldname) a2) (
jcall #:Model:assq-fields) (bfnil a1 1003) 1005 1008 (push (@ 1009)) (push (
cvalq field)) (mov '1 a4) (jmp #:Model:init) 1009 (push a1) (mov '1 a4) (mov (
@ 1008) a2) (mov '(init) a3) (jcall #:llcp:cbindl) (bfnil (cvalq init) 1010) (
mov nil a1) (return) 1010 (bfsymb (cvalq init) 1012) (push 'quote) (push (
cvalq init)) (mov '2 a4) (jmp list) 1012 (mov (cvalq init) a1) (jcall numberp)
(btnil a1 1014) (mov (cvalq init) a1) (return) 1014 (push 'copy) (push (@ 1016
)) (push 'quote) (push (cvalq init)) (mov '2 a4) (jmp list) 1016 (push a1) (
mov '2 a4) (jmp list) (return) 1003 (push 'makeq) (push (@ 1017)) (push (cvalq
field)) (mov '1 a4) (jmp #:Model:fieldstruct) 1017 (push a1) (push (cvalq 
lfieldname)) (mov '3 a4) (jmp send) 1001 (return)) ())
(loader '((fentry #:Model:Predicate:makeq subr2) (mov (@ #:Model:Predicate:
makeq) a4) (mov '(model lfieldname) a3) (jcall #:llcp:cbind2) 1001 (push (@ 
1002)) (push a1) (mov '1 a4) (jmp #:Model:init) 1002 (push a1) (mov '1 a4) (
mov (@ 1001) a2) (mov '(init) a3) (jcall #:llcp:cbindl) (bfnil (cvalq init) 
1003) (mov nil a1) (return) 1003 (bfsymb (cvalq init) 1005) (push 'quote) (
push (cvalq init)) (mov '2 a4) (jmp list) 1005 (mov (cvalq init) a1) (jcall 
numberp) (btnil a1 1007) (mov (cvalq init) a1) (return) 1007 (push 'copy) (
push (@ 1009)) (push 'quote) (push (cvalq init)) (mov '2 a4) (jmp list) 1009 (
push a1) (mov '2 a4) (jmp list) (return)) ())
(loader '((fentry #:Model:List:makeq subr2) (mov (@ #:Model:List:makeq) a4) (
mov '(model lfieldname) a3) (jcall #:llcp:cbind2) (mov nil a1) (return)) ())
(loader '((fentry #:Model:Cons:makeq subr2) (mov (@ #:Model:Cons:makeq) a4) (
mov '(model lfieldname) a3) (jcall #:llcp:cbind2) (jcall #:Model:assq-fields) 
(bfnil a1 1001) (push 'copy) (push (@ 1003)) (push 'quote) (push (@ 1004)) (
push (cvalq model)) (mov '1 a4) (jmp #:Model:init) 1004 (push a1) (mov '2 a4) 
(jmp list) 1003 (push a1) (mov '2 a4) (jmp list) 1001 (push 'cons) (push (@ 
1005)) (push 'makeq) (push (@ 1006)) (push (cvalq model)) (mov '1 a4) (jmp #:
Model:fieldstruct) 1006 (car a1) (push a1) (push (cvalq lfieldname)) (mov '3 
a4) (jmp send) 1005 (push a1) (push (@ 1007)) (push 'makeq) (push (@ 1008)) (
push (cvalq model)) (mov '1 a4) (jmp #:Model:fieldstruct) 1008 (cdr a1) (push 
a1) (push (cvalq lfieldname)) (mov '3 a4) (jmp send) 1007 (push a1) (mov '3 a4
) (jmp list)) ())
(loader '((fentry #:Model:Tcons:makeq subr2) (mov (@ #:Model:Tcons:makeq) a4) 
(mov '(model lfieldname) a3) (jcall #:llcp:cbind2) (jcall #:Model:assq-fields)
(bfnil a1 1001) (push 'copy) (push (@ 1003)) (push 'quote) (push (@ 1004)) (
push (cvalq model)) (mov '1 a4) (jmp #:Model:init) 1004 (push a1) (mov '2 a4) 
(jmp list) 1003 (push a1) (mov '2 a4) (jmp list) 1001 (push 'tcons) (push (@ 
1005)) (push 'quote) (push (@ 1006)) (push (cvalq model)) (mov '1 a4) (jmp #:
Model:fieldstruct) 1006 (car a1) (push a1) (mov '2 a4) (jmp list) 1005 (push 
a1) (push (@ 1007)) (push 'makeq) (push (@ 1008)) (push (cvalq model)) (mov '1
a4) (jmp #:Model:fieldstruct) 1008 (cdr a1) (push a1) (push (cvalq lfieldname)
) (mov '3 a4) (jmp send) 1007 (push a1) (mov '3 a4) (jmp list)) ())
(loader '((fentry #:Model:Vector:makeq subr2) (mov (@ #:Model:Vector:makeq) a4
) (mov '(model lfieldname) a3) (jcall #:llcp:cbind2) (jcall #:Model:
assq-fields) (bfnil a1 1001) (push 'copy) (push (@ 1003)) (push 'quote) (push 
(@ 1004)) (push (cvalq model)) (mov '1 a4) (jmp #:Model:init) 1004 (push a1) (
mov '2 a4) (jmp list) 1003 (push a1) (mov '2 a4) (jmp list) 1001 (push 'vector
) 1005 (push (@ 1006)) (push (@ 1007)) (push (cvalq model)) (mov '1 a4) (jmp 
#:Model:fieldstruct) 1007 (jcall listvector) (push a1) (mov '1 a4) (mov (@ 
1005) a2) (mov '(#:system:map:arg0) a3) (jcall #:llcp:cbindl) 1008 (push nil) 
(mov '1 a4) (mov (@ 1008) a2) (mov '(#:system:map:r) a3) (jcall #:llcp:cbindl)
(bra 1010) 1009 1011 (push (@ 1012)) (mov (cvalq #:system:map:arg0) a1) (car 
a1) (push a1) (mov (cvalq #:system:map:arg0) a1) (cdr a1) (mov a1 (cvalq #:
system:map:arg0)) (pop a1) (push a1) (mov '1 a4) (mov (@ 1011) a2) (mov '(x) 
a3) (jcall #:llcp:cbindl) (push 'makeq) (push (cvalq x)) (push (cvalq 
lfieldname)) (mov '3 a4) (jmp send) 1012 (mov (cvalq #:system:map:r) a2) (
jcall cons) (mov a1 (cvalq #:system:map:r)) 1010 (btcons (cvalq #:system:map:
arg0) 1009) 1013 (mov (cvalq #:system:map:r) a1) (jmp nreverse) (return) 1006 
(mov a1 a2) (pop a1) (jmp cons)) ())
(loader '((fentry #:Model:assq-fields subr2) (mov (@ #:Model:assq-fields) a4) 
(mov '(model lfieldname) a3) (jcall #:llcp:cbind2) (mov 'found a1) (jcall #:
llcp:tag) (bra 1002) 1001 (push (@ 1005)) (push 'find-field) (push (cvalq 
model)) (mov (cvalq lfieldname) a1) (car a1) (push a1) (mov (cvalq lfieldname)
a1) (cdr a1) (mov a1 (cvalq lfieldname)) (pop a1) (car a1) (push a1) (mov '3 
a4) (jmp send) 1005 (btnil a1 1003) (mov (cvalq t) a1) (mov 'found a2) (jmp #:
llcp:exit) 1003 (mov nil a1) 1002 (bfnil (cvalq lfieldname) 1001) (mov nil a1)
(return)) ())
(loader '((fentry defaccess dmsubr) (mov (@ defaccess) a2) (mov '(modelname . 
lfieldname) a3) (jcall #:llcp:cbinds) (bfsymb (cvalq modelname) 1003) (push (@
1004)) (push (cvalq modelname)) (mov '1 a4) (jmp objval) 1004 (bfnil a1 1001) 
1003 (push 'defaccess) (push '"First argument is not a model name") (mov (
cvalq modelname) a1) (mov (cvalq lfieldname) a2) (jcall cons) (mov a1 a3) (pop
a2) (pop a1) (jmp syserror) 1001 1005 (push nil) (mov '1 a4) (mov (@ 1005) a2)
(mov '(expansion) a3) (jcall #:llcp:cbindl) (bfnil (cvalq lfieldname) 1006) 
1008 (push (@ 1009)) (push (@ 1010)) (push 'flat-fields) (push (@ 1011)) (push
(cvalq modelname)) (mov '1 a4) (jmp objval) 1011 (push a1) (mov '2 a4) (jmp 
send) 1010 (push a1) (mov '1 a4) (mov (@ 1008) a2) (mov '(#:system:map:arg0) 
a3) (jcall #:llcp:cbindl) 1012 (push nil) (mov '1 a4) (mov (@ 1012) a2) (mov '
(#:system:map:r) a3) (jcall #:llcp:cbindl) (bra 1014) 1013 (push (@ 1015)) (
mov (cvalq #:system:map:arg0) a1) (car a1) (push a1) (mov (cvalq #:system:map:
arg0) a1) (cdr a1) (mov a1 (cvalq #:system:map:arg0)) (pop a1) (push a1) (mov 
'1 a4) (jmp #:Model:Field:name) 1015 (mov (cvalq #:system:map:r) a2) (jcall 
cons) (mov a1 (cvalq #:system:map:r)) 1014 (btcons (cvalq #:system:map:arg0) 
1013) 1016 (mov (cvalq #:system:map:r) a1) (jmp nreverse) (return) 1009 (mov 
a1 (cvalq lfieldname)) (bra 1007) 1006 (mov nil a1) 1007 (bra 1018) 1017 (mov 
(cvalq modelname) a1) (mov (cvalq lfieldname) a2) (car a2) (push a2) (mov (
cvalq lfieldname) a2) (cdr a2) (mov a2 (cvalq lfieldname)) (pop a2) (jcall 
defaccess-expander) (mov (cvalq expansion) a2) (jcall cons) (mov a1 (cvalq 
expansion)) 1018 (bfnil (cvalq lfieldname) 1017) (push 'progn) (push ''compile
) (push (@ 1019)) (mov (cvalq expansion) a1) (jcall nreverse) (push a1) (push 
(@ 1020)) (push (@ 1021)) (push 'quote) (push (cvalq modelname)) (mov '2 a4) (
jmp list) 1021 (push a1) (mov '1 a4) (jmp list) 1020 (push a1) (mov '2 a4) (
jmp append) 1019 (push a1) (mov '3 a4) (jmp mcons) (return)) ())
(loader '((fentry defaccess-expander subr2) (mov (@ defaccess-expander) a4) (
mov '(modelname fieldname) a3) (jcall #:llcp:cbind2) 1001 (push (@ 1002)) (
push 'find-field) (push (@ 1003)) (push a1) (mov '1 a4) (jmp objval) 1003 (
push a1) (push (cvalq fieldname)) (mov '3 a4) (jmp send) 1002 (push a1) (mov '
1 a4) (mov (@ 1001) a2) (mov '(field) a3) (jcall #:llcp:cbindl) (bfnil (cvalq 
field) 1004) (push 'defaccess) (push '"Not a field name") (push (@ 1006)) (
push (cvalq modelname)) (push (cvalq fieldname)) (mov '2 a4) (jmp list) 1006 (
mov a1 a3) (pop a2) (pop a1) (jmp syserror) 1004 (push 'progn) (push ''compile
) (push (@ 1007)) (push 'de) (mov (cvalq modelname) a1) (mov (cvalq fieldname)
a2) (jcall symbol) (push a1) (push 'obj) (push (@ 1008)) (push (cvalq field)) 
(mov '1 a4) (jmp #:Model:Field:access) 1008 (jcall #:Ceyx:system:
find-access-fun) (mov '(obj) a2) (jcall cons) (push a1) (mov '4 a4) (jmp list)
1007 (push a1) (push (@ 1009)) (push '#:Ceyx:cxcp-access) (push (@ 1010)) (
push 'quote) (mov (cvalq modelname) a1) (mov (cvalq fieldname) a2) (jcall 
symbol) (push a1) (mov '2 a4) (jmp list) 1010 (push a1) (push (@ 1011)) (push 
'quote) (push (@ 1012)) (push (cvalq field)) (mov '1 a4) (jmp #:Model:Field:
access) 1012 (push a1) (mov '2 a4) (jmp list) 1011 (push a1) (mov '3 a4) (jmp 
list) 1009 (push a1) (mov '4 a4) (jmp list) (return)) ())
(loader '((fentry #:Ceyx:system:make-get-function subr2) (mov (@ #:Ceyx:
system:make-get-function) a4) (mov '(access exp) a3) (jcall #:llcp:cbind2) (
bfnil a1 1001) (mov a2 a1) (return) 1001 (mov (car a1) a1) (jcall numberp) (
btnil a1 1003) (mov (cvalq access) a1) (cdr a1) (push a1) (push (@ 1005)) (
push 'vref) (push (cvalq exp)) (mov (cvalq access) a1) (car a1) (push a1) (mov
'3 a4) (jmp list) 1005 (mov a1 a2) (pop a1) (jmp #:Ceyx:system:
make-get-function) 1003 (mov (cvalq access) a1) (car a1) (mov 'car a2) (cabne 
a1 a2 1006) (mov (cvalq access) a1) (cdr a1) (push a1) (push (@ 1008)) (push '
car) (push (cvalq exp)) (mov '2 a4) (jmp list) 1008 (mov a1 a2) (pop a1) (jmp 
#:Ceyx:system:make-get-function) 1006 (mov (cvalq access) a1) (car a1) (mov '
cdr a2) (cabne a1 a2 1009) (mov (cvalq access) a1) (cdr a1) (push a1) (push (@
1011)) (push 'cdr) (push (cvalq exp)) (mov '2 a4) (jmp list) 1011 (mov a1 a2) 
(pop a1) (jmp #:Ceyx:system:make-get-function) 1009 (mov (cvalq access) a1) (
car a1) (mov 'tcar a2) (cabne a1 a2 1012) (mov (cvalq access) a1) (cdr a1) (
push a1) (push (@ 1014)) (push 'tcar) (push (cvalq exp)) (mov '2 a4) (jmp list
) 1014 (mov a1 a2) (pop a1) (jmp #:Ceyx:system:make-get-function) 1012 (mov (
cvalq access) a1) (car a1) (mov 'tcdr a2) (cabne a1 a2 1015) (mov (cvalq 
access) a1) (cdr a1) (push a1) (push (@ 1017)) (push 'tcdr) (push (cvalq exp))
(mov '2 a4) (jmp list) 1017 (mov a1 a2) (pop a1) (jmp #:Ceyx:system:
make-get-function) 1015 (mov '#:Ceyx:system:make-get-function a1) (mov '
"Bad access list" a2) (mov (cvalq access) a3) (jmp syserror)) ())
(loader '((fentry #:Ceyx:system:make-put-function subr3) (push (@ #:Ceyx:
system:make-put-function)) (mov '(access exp val) a4) (jcall #:llcp:cbind3) (
bfnil a1 1001) (mov nil a1) (return) 1001 (jcall #:Ceyx:system:
make-get-function) (mov a1 (cvalq exp)) (push a1) (mov (car a1) a1) (cabne a1 
'car 1011) (mov 'rplaca a1) (bra 1010) 1011 (cabne a1 'cdr 1012) (mov 'rplacd 
a1) (bra 1010) 1012 (cabne a1 'tcar 1013) (mov 'trplaca a1) (bra 1010) 1013 (
cabne a1 'tcdr 1014) (mov 'trplacd a1) (bra 1010) 1014 (cabne a1 'vref 1015) (
mov 'vset a1) (bra 1010) 1015 (push '#:Ceyx:system:make-put-function) (push '
"Unknown selector") (push (@ 1017)) (mov (cvalq exp) a1) (car a1) (push a1) (
mov '1 a4) (jmp list) 1017 (mov a1 a3) (pop a2) (pop a1) (jcall syserror) 1016
1010 (mov a1 a2) (pop a1) (mov a2 (car a1)) (push (@ 1018)) (push (cvalq exp))
(push (@ 1019)) (push (cvalq val)) (mov '1 a4) (jmp list) 1019 (push a1) (mov 
'2 a4) (jmp nconc) 1018 (mov (cvalq exp) a1) (return)) ())
(defvar #:Ceyx:system:access-alist '((() . #:Ceyx:system:null-access)))
(loader '((fentry #:Ceyx:system:null-access subr1) (mov (@ #:Ceyx:system:
null-access) a4) (mov '(l) a3) (jcall #:llcp:cbind1) (bfnil (cdr a1) 1001) (
mov (car a1) a1) (return) 1001 (mov '#:Ceyx:system:null-access a1) (mov '
"Non writable field" a2) (mov (cvalq l) a3) (jmp syserror)) ())
(loader '((fentry #:Ceyx:system:insert-access subr1) (mov (@ #:Ceyx:system:
insert-access) a4) (mov '(lkeys) a3) (jcall #:llcp:cbind1) (bfnil a1 1001) (
mov nil a1) (return) 1001 (mov (cvalq #:Ceyx:system:access-alist) a2) (jcall 
assoc) (car a1) (bfnil a1 1003) 1004 (push '#:Ceyx:system) (jcall gensym) (mov
a1 a2) (pop a1) (jcall symbol) (push a1) (mov '1 a4) (mov (@ 1004) a2) (mov '(
fun) a3) (jcall #:llcp:cbindl) (push (@ 1005)) (push (@ 1006)) (push 'de) (
push (cvalq fun)) (push '(x)) (push (@ 1007)) (push 'if) (push '(cdr x)) (mov 
(cvalq lkeys) a1) (mov '(car x) a2) (mov '(cadr x) a3) (jcall #:Ceyx:system:
make-put-function) (push a1) (mov (cvalq lkeys) a1) (mov '(car x) a2) (jcall 
#:Ceyx:system:make-get-function) (push a1) (mov '4 a4) (jmp list) 1007 (push 
a1) (mov '4 a4) (jmp list) 1006 (push a1) (mov '1 a4) (jmp eval) 1005 (mov (
cvalq lkeys) a1) (mov (cvalq fun) a2) (jcall cons) (mov (cvalq #:Ceyx:system:
access-alist) a2) (jcall cons) (mov a1 (cvalq #:Ceyx:system:access-alist)) (
mov (cvalq lkeys) a1) (return) 1003 (return)) ())
(loader '((fentry #:Ceyx:system:find-access-fun subr1) (mov (@ #:Ceyx:system:
find-access-fun) a4) (mov '(lkeys) a3) (jcall #:llcp:cbind1) (mov (cvalq #:
Ceyx:system:access-alist) a2) (jcall cassoc) (bfnil a1 1001) (mov (cvalq lkeys
) a1) (jcall #:Ceyx:system:insert-access) (mov (cvalq lkeys) a1) (mov (cvalq 
#:Ceyx:system:access-alist) a2) (jmp cassoc) 1001 (return)) ())
(loader '((fentry is-in subr2) (mov (@ is-in) a4) (mov '(x modelname) a3) (
jcall #:llcp:cbind2) (push (@ 1003)) (push a2) (mov '1 a4) (jmp objval) 1003 (
btnil a1 1002) (push (@ 1004)) (push 'match) (push (@ 1005)) (push (cvalq 
modelname)) (mov '1 a4) (jmp objval) 1005 (push a1) (push (cvalq x)) (mov '3 
a4) (jmp send) 1004 1002 (bfnil a1 1001) (mov (cvalq modelname) a1) (mov '(() 
Ceyx) a2) (jmp memq) 1001 (return)) ())
(loader '((fentry #:symbol:match subr2) (mov (@ #:symbol:match) a4) (mov '(
model val) a3) (jcall #:llcp:cbind2) (push (@ 1003)) (push a1) (mov '1 a4) (
jmp objval) 1003 (btnil a1 1001) (push 'match) (push (@ 1004)) (push (cvalq 
model)) (mov '1 a4) (jmp objval) 1004 (push a1) (push (cvalq val)) (mov '3 a4)
(jmp send) 1001 (mov 'match a1) (mov '"Unknown model" a2) (mov (cvalq model) 
a3) (jmp syserror)) ())
(loader '((fentry #:Model:Field:match subr2) (mov (@ #:Model:Field:match) a4) 
(mov '(field val) a3) (jcall #:llcp:cbind2) (push (@ 1001)) (push a1) (mov '1 
a4) (jmp #:Model:fieldstruct) 1001 (mov a1 (cvalq field)) (push 'match) (push 
a1) (push (cvalq val)) (mov '3 a4) (jmp send)) ())
(loader '((fentry #:Model:Predicate:match subr2) (mov (@ #:Model:Predicate:
match) a4) (mov '(pred val) a3) (jcall #:llcp:cbind2) (push (@ 1001)) (push a1
) (mov '1 a4) (jmp #:Model:fieldstruct) 1001 (push a1) (push (cvalq val)) (mov
'2 a4) (jmp funcall)) ())
(loader '((fentry #:Model:List:match subr2) (mov (@ #:Model:List:match) a4) (
mov '(list val) a3) (jcall #:llcp:cbind2) (mov a2 a1) (jcall not) (bfnil a1 
1001) (push (@ 1002)) (push (cvalq list)) (mov '1 a4) (jmp #:Model:fieldstruct
) 1002 (mov a1 (cvalq list)) (mov (cvalq val) a1) (jcall consp) (btnil a1 1003
) (mov (cvalq val) a1) (jcall last) (cdr a1) (jcall not) (btnil a1 1003) (mov 
'nomatch a1) (jcall #:llcp:tag) (bra 1005) 1004 (push (@ 1008)) (push 'match) 
(push (cvalq list)) (mov (cvalq val) a1) (car a1) (push a1) (mov (cvalq val) 
a1) (cdr a1) (mov a1 (cvalq val)) (pop a1) (push a1) (mov '3 a4) (jmp send) 
1008 (bfnil a1 1006) (mov nil a1) (mov 'nomatch a2) (jmp #:llcp:exit) 1006 (
mov nil a1) 1005 (bfnil (cvalq val) 1004) (mov (cvalq t) a1) (return) 1003 
1001 (return)) ())
(loader '((fentry #:Model:Cons:match subr2) (mov (@ #:Model:Cons:match) a4) (
mov '(cons val) a3) (jcall #:llcp:cbind2) (push (@ 1001)) (push a1) (mov '1 a4
) (jmp #:Model:fieldstruct) 1001 (mov a1 (cvalq cons)) (mov (cvalq val) a1) (
jcall consp) (btnil a1 1002) (push (@ 1003)) (push 'match) (mov (cvalq cons) 
a1) (car a1) (push a1) (mov (cvalq val) a1) (car a1) (push a1) (mov '3 a4) (
jmp send) 1003 (btnil a1 1002) (push 'match) (mov (cvalq cons) a1) (cdr a1) (
push a1) (mov (cvalq val) a1) (cdr a1) (push a1) (mov '3 a4) (jmp send) 1002 (
return)) ())
(loader '((fentry #:Model:Vector:match subr2) (mov (@ #:Model:Vector:match) a4
) (mov '(vector val) a3) (jcall #:llcp:cbind2) (push (@ 1001)) (push a1) (mov 
'1 a4) (jmp #:Model:fieldstruct) 1001 (mov a1 (cvalq vector)) (mov (cvalq val)
a1) (jcall vectorp) (btnil a1 1002) (push (@ 1003)) (mov (cvalq vector) a1) (
hgsize a1 a1) (push a1) (mov (cvalq val) a1) (hgsize a1 a1) (push a1) (mov '2 
a4) (jmp <=) 1003 (btnil a1 1002) (mov 'nomatch a1) (jcall #:llcp:tag) 1004 (
push (@ 1005)) (push '0) (mov '1 a4) (mov (@ 1004) a2) (mov '(n) a3) (jcall #:
llcp:cbindl) (bra 1007) 1006 (push (@ 1010)) (push 'match) (hpxmov (cvalq 
vector) (cvalq n) a1) (push a1) (hpxmov (cvalq val) (cvalq n) a1) (push a1) (
mov '3 a4) (jmp send) 1010 (btnil a1 1008) (mov (cvalq n) a1) (jcall 1+) (mov 
a1 (cvalq n)) (bra 1009) 1008 (mov nil a1) (mov 'nomatch a2) (jmp #:llcp:exit)
1009 1007 (push (@ 1011)) (push (cvalq n)) (mov (cvalq vector) a1) (hgsize a1 
a1) (push a1) (mov '2 a4) (jmp =) 1011 (btnil a1 1006) (return) 1005 (mov (
cvalq t) a1) (return) 1002 (return)) ())
(loader '((fentry #:Model:Tcons:match subr2) (mov (@ #:Model:Tcons:match) a4) 
(mov '(tcons val) a3) (jcall #:llcp:cbind2) (mov a2 a1) (jcall tconsp) (btnil 
a1 1001) (mov (cvalq val) a1) (car a1) (push a1) (push (@ 1002)) (push (cvalq 
tcons)) (mov '1 a4) (jmp #:Model:fieldstruct) 1002 (car a1) (mov a1 a2) (pop 
a1) (jmp <=p) 1001 (return)) ())
(loader '((fentry #:Model:Macro subr2) (mov (@ #:Model:Macro) a4) (mov '(type 
model) a3) (jcall #:llcp:cbind2) (push (@ 1001)) (push 'set-access) (push a2) 
(push nil) (mov '3 a4) (jmp send) 1001 (push (@ 1002)) (push 'set-init) (push 
(cvalq model)) (mov '2 a4) (jmp send) 1002 (mov (cvalq model) a1) (return)) ()
)
(loader '((fentry defmacromodel dmsubr) (mov (@ defmacromodel) a2) (mov '(name
args . body) a3) (jcall #:llcp:cbinds) 1001 (push nil) (mov (cvalq name) a2) (
mov '#:Model:Macro a1) (jcall symbol) (push a1) (mov '2 a4) (mov (@ 1001) a2) 
(mov '(expansion fullname) a3) (jcall #:llcp:cbindl) (push (@ 1002)) (push '
defabbrev) (push (cvalq fullname)) (mov (cvalq name) a2) (mov 'Model a1) (
jcall symbol) (push a1) (mov '3 a4) (jmp list) 1002 (mov (cvalq expansion) a2)
(jcall cons) (mov a1 (cvalq expansion)) (push (@ 1003)) (push '#:Ceyx:system:
put-model-keyword) (push (@ 1004)) (push 'quote) (push (cvalq name)) (mov '2 
a4) (jmp list) 1004 (push a1) (push (@ 1005)) (push 'quote) (push (cvalq 
fullname)) (mov '2 a4) (jmp list) 1005 (push a1) (mov '3 a4) (jmp list) 1003 (
mov (cvalq expansion) a2) (jcall cons) (mov a1 (cvalq expansion)) (mov (cvalq 
name) a2) (mov 'Model a1) (jcall symbol) (mov a1 (cvalq name)) (push (@ 1006))
(push 'de) (mov (cvalq fullname) a1) (mov 'parse-model a2) (jcall symbol) (
push a1) (push '(expr)) (push (@ 1007)) (push 'apply) (push (@ 1008)) (push '
quote) (push (cvalq name)) (mov '2 a4) (jmp list) 1008 (push a1) (push '((
mapcar '#:Ceyx:system:parse-model (cdr expr)))) (mov '3 a4) (jmp mcons) 1007 (
push a1) (mov '4 a4) (jmp list) 1006 (mov (cvalq expansion) a2) (jcall cons) (
mov a1 (cvalq expansion)) (push (@ 1009)) (push 'de) (push (cvalq name)) (push
(cvalq args)) (push (@ 1010)) (push '#:Model:Macro) (push (@ 1011)) (push '
quote) (push (cvalq fullname)) (mov '2 a4) (jmp list) 1011 (push a1) (mov (
cvalq body) a2) (mov 'progn a1) (jcall cons) (push a1) (mov '3 a4) (jmp list) 
1010 (push a1) (mov '4 a4) (jmp list) 1009 (mov (cvalq expansion) a2) (jcall 
cons) (mov a1 (cvalq expansion)) (push 'progn) (push ''compile) (jcall 
nreverse) (push a1) (mov '3 a4) (jmp mcons) (return)) ())
'compile
(defabbrev #:Model:Macro:Alter #:Model:Alter)
(#:Ceyx:system:put-model-keyword 'Alter '#:Model:Macro:Alter)
(loader '((fentry #:Model:Macro:Alter:parse-model subr1) (mov (@ #:Model:
Macro:Alter:parse-model) a4) (mov '(expr) a3) (jcall #:llcp:cbind1) (push '#:
Model:Alter) 1001 (push (@ 1002)) (push (cdr a1)) (mov '1 a4) (mov (@ 1001) a2
) (mov '(#:system:map:arg0) a3) (jcall #:llcp:cbindl) 1003 (push nil) (mov '1 
a4) (mov (@ 1003) a2) (mov '(#:system:map:r) a3) (jcall #:llcp:cbindl) (bra 
1005) 1004 (mov (cvalq #:system:map:arg0) a1) (car a1) (push a1) (mov (cvalq 
#:system:map:arg0) a1) (cdr a1) (mov a1 (cvalq #:system:map:arg0)) (pop a1) (
jcall #:Ceyx:system:parse-model) (mov (cvalq #:system:map:r) a2) (jcall cons) 
(mov a1 (cvalq #:system:map:r)) 1005 (btcons (cvalq #:system:map:arg0) 1004) 
1006 (mov (cvalq #:system:map:r) a1) (jmp nreverse) (return) 1002 (push a1) (
mov '2 a4) (jmp apply)) ())
(loader '((fentry #:Model:Alter nsubr) (mov (@ #:Model:Alter) a2) (mov '(model
. lfield) a3) (jcall #:llcp:cbindn) (push '#:Model:Macro:Alter) (bfsymb (cvalq
model) 1003) (push (@ 1005)) (push (cvalq model)) (mov '1 a4) (jmp objval) 
1005 (mov a1 (cvalq model)) (bra 1004) 1003 (mov nil a1) 1004 (push (@ 1006)) 
(push 'alter) (push (cvalq model)) (push (cvalq lfield)) (mov '3 a4) (jmp send
) 1006 (mov a1 a2) (pop a1) (jmp #:Model:Macro)) ())
'compile
(defabbrev #:Model:Macro:Include #:Model:Include)
(#:Ceyx:system:put-model-keyword 'Include '#:Model:Macro:Include)
(loader '((fentry #:Model:Macro:Include:parse-model subr1) (mov (@ #:Model:
Macro:Include:parse-model) a4) (mov '(expr) a3) (jcall #:llcp:cbind1) (push '
#:Model:Include) 1001 (push (@ 1002)) (push (cdr a1)) (mov '1 a4) (mov (@ 1001
) a2) (mov '(#:system:map:arg0) a3) (jcall #:llcp:cbindl) 1003 (push nil) (mov
'1 a4) (mov (@ 1003) a2) (mov '(#:system:map:r) a3) (jcall #:llcp:cbindl) (bra
1005) 1004 (mov (cvalq #:system:map:arg0) a1) (car a1) (push a1) (mov (cvalq 
#:system:map:arg0) a1) (cdr a1) (mov a1 (cvalq #:system:map:arg0)) (pop a1) (
jcall #:Ceyx:system:parse-model) (mov (cvalq #:system:map:r) a2) (jcall cons) 
(mov a1 (cvalq #:system:map:r)) 1005 (btcons (cvalq #:system:map:arg0) 1004) 
1006 (mov (cvalq #:system:map:r) a1) (jmp nreverse) (return) 1002 (push a1) (
mov '2 a4) (jmp apply)) ())
(loader '((fentry #:Model:Include subr1) (mov (@ #:Model:Include) a4) (mov '(
model) a3) (jcall #:llcp:cbind1) (push '#:Model:Macro:Include) (bfsymb a1 1003
) (push (@ 1005)) (push a1) (mov '1 a4) (jmp objval) 1005 (mov a1 (cvalq model
)) (bra 1004) 1003 (mov nil a1) 1004 (push (@ 1006)) (push 'alter) (push (
cvalq model)) (push nil) (mov '3 a4) (jmp send) 1006 (mov a1 a2) (pop a1) (jmp
#:Model:Macro)) ())
'compile
(defabbrev #:Model:Macro:Extend #:Model:Extend)
(#:Ceyx:system:put-model-keyword 'Extend '#:Model:Macro:Extend)
(loader '((fentry #:Model:Macro:Extend:parse-model subr1) (mov (@ #:Model:
Macro:Extend:parse-model) a4) (mov '(expr) a3) (jcall #:llcp:cbind1) (push '#:
Model:Extend) 1001 (push (@ 1002)) (push (cdr a1)) (mov '1 a4) (mov (@ 1001) 
a2) (mov '(#:system:map:arg0) a3) (jcall #:llcp:cbindl) 1003 (push nil) (mov '
1 a4) (mov (@ 1003) a2) (mov '(#:system:map:r) a3) (jcall #:llcp:cbindl) (bra 
1005) 1004 (mov (cvalq #:system:map:arg0) a1) (car a1) (push a1) (mov (cvalq 
#:system:map:arg0) a1) (cdr a1) (mov a1 (cvalq #:system:map:arg0)) (pop a1) (
jcall #:Ceyx:system:parse-model) (mov (cvalq #:system:map:r) a2) (jcall cons) 
(mov a1 (cvalq #:system:map:r)) 1005 (btcons (cvalq #:system:map:arg0) 1004) 
1006 (mov (cvalq #:system:map:r) a1) (jmp nreverse) (return) 1002 (push a1) (
mov '2 a4) (jmp apply)) ())
(loader '((fentry #:Model:Extend nsubr) (mov (@ #:Model:Extend) a2) (mov '(
model . lfield) a3) (jcall #:llcp:cbindn) (push '#:Model:Macro:Extend) (bfsymb
(cvalq model) 1003) (push (@ 1005)) (push (cvalq model)) (mov '1 a4) (jmp 
objval) 1005 (mov a1 (cvalq model)) (bra 1004) 1003 (mov nil a1) 1004 (push (@
1006)) (push 'extend) (push (cvalq model)) (push (cvalq lfield)) (mov '3 a4) (
jmp send) 1006 (mov a1 a2) (pop a1) (jmp #:Model:Macro)) ())
(loader '((fentry #:Model:alter subr2) (mov (@ #:Model:alter) a4) (mov '(model
lfield) a3) (jcall #:llcp:cbind2) (jcall copy) (mov a1 (cvalq model)) 1001 (
push nil) (push nil) (push nil) (mov '3 a4) (mov (@ 1001) a2) (mov '(fieldname
nfield ofield) a3) (jcall #:llcp:cbindl) (bra 1003) 1002 (mov (cvalq lfield) 
a1) (car a1) (push a1) (mov (cvalq lfield) a1) (cdr a1) (mov a1 (cvalq lfield)
) (pop a1) (mov a1 (cvalq fieldname)) (mov (cvalq lfield) a1) (car a1) (push 
a1) (mov (cvalq lfield) a1) (cdr a1) (mov a1 (cvalq lfield)) (pop a1) (mov a1 
(cvalq nfield)) (push (@ 1004)) (push 'find-field) (push (cvalq model)) (push 
(cvalq fieldname)) (mov '3 a4) (jmp send) 1004 (mov a1 (cvalq ofield)) (bfnil 
a1 1005) (push '#:Model:alter) (push '"Unknown field") (push (@ 1007)) (push (
cvalq model)) (push (cvalq fieldname)) (mov '2 a4) (jmp list) 1007 (mov a1 a3)
(pop a2) (pop a1) (jcall syserror) (bra 1006) 1005 (mov (cvalq nfield) a1) (
jcall get-model) (mov '#:Model:Field a2) (jcall <=p) (btnil a1 1008) (mov (
cvalq ofield) a1) (mov (cvalq nfield) a2) (jcall <-) (bra 1009) 1008 (push (@ 
1010)) (push (cvalq ofield)) (push (cvalq nfield)) (mov '2 a4) (jmp #:Model:
fieldstruct) 1010 1009 1006 1003 (bfnil (cvalq lfield) 1002) (mov (cvalq model
) a1) (return) (return)) ())
(loader '((fentry #:Model:extend subr2) (mov (@ #:Model:extend) a4) (mov '(
model lfield) a3) (jcall #:llcp:cbind2) (jcall copy) (mov a1 (cvalq model)) 
1001 (push nil) (push nil) (push nil) (mov '3 a4) (mov (@ 1001) a2) (mov '(
fieldname xvect ofield) a3) (jcall #:llcp:cbindl) (bra 1003) 1002 (mov (cvalq 
lfield) a1) (car a1) (push a1) (mov (cvalq lfield) a1) (cdr a1) (mov a1 (cvalq
lfield)) (pop a1) (mov a1 (cvalq fieldname)) (mov (cvalq lfield) a1) (car a1) 
(push a1) (mov (cvalq lfield) a1) (cdr a1) (mov a1 (cvalq lfield)) (pop a1) (
mov a1 (cvalq xvect)) (push (@ 1004)) (push 'find-field) (push (cvalq model)) 
(push (cvalq fieldname)) (mov '3 a4) (jmp send) 1004 (mov a1 (cvalq ofield)) (
bfnil a1 1005) (push '#:Model:extend) (push '"Unknown field") (push (@ 1007)) 
(push (cvalq model)) (push (cvalq fieldname)) (mov '2 a4) (jmp list) 1007 (mov
a1 a3) (pop a2) (pop a1) (jcall syserror) (bra 1006) 1005 (push (@ 1008)) (
push 'extend-with) (push (@ 1009)) (push a1) (mov '1 a4) (jmp #:Model:
fieldstruct) 1009 (push a1) (push (cvalq xvect)) (mov '3 a4) (jmp send) 1008 
1006 1003 (bfnil (cvalq lfield) 1002) (mov (cvalq model) a1) (return) (return)
) ())
(loader '((fentry #:Model:extend-with subr2) (mov (@ #:Model:extend-with) a4) 
(mov '(model vector) a3) (jcall #:llcp:cbind2) (mov '#:Model:extend a1) (mov '
"Not a {Model}:Vector, cannot extend" a2) (mov nil a3) (jmp syserror)) ())
(loader '((fentry #:Model:Vector:extend-with subr2) (mov (@ #:Model:Vector:
extend-with) a4) (mov '(model vector) a3) (jcall #:llcp:cbind2) (mov a2 a1) (
jcall get-model) (mov '#:Model:Vector a2) (jcall <=p) (bfnil a1 1001) (push '
#:Model:extend) (push '"Cannot extend {Model}:Vector with a") (mov (cvalq 
vector) a1) (jcall get-model) (mov a1 a3) (pop a2) (pop a1) (jmp syserror) 
1001 1003 (push (@ 1004)) (push (@ 1005)) (push (cvalq model)) (mov '1 a4) (
jmp #:Model:fieldstruct) 1005 (jcall listvector) (push a1) (push (@ 1006)) (
push (cvalq vector)) (mov '1 a4) (jmp #:Model:fieldstruct) 1006 (jcall 
listvector) (push a1) (mov '2 a4) (jmp append) 1004 (push a1) (mov '1 a4) (mov
(@ 1003) a2) (mov '(lfield) a3) (jcall #:llcp:cbindl) (push (cvalq model)) (
push (@ 1007)) (push '#:Model:Vector) (push (cvalq lfield)) (mov '2 a4) (jmp 
apply) 1007 (mov a1 a2) (pop a1) (jmp <-) (return)) ())
(loader '((fentry defcomment fsubr) (mov (@ defcomment) a2) (mov '(symb string
) a3) (jcall #:llcp:cbinds) (mov (cvalq symb) a1) (mov (cvalq string) a2) (mov
'comment a3) (jmp putprop)) ())
'compile
(defabbrev * ())
(objval '* '#(#:Model:Predicate . #[() always-true]))
'*
'compile
(defabbrev Ceyx ())
(objval 'Ceyx '#(#:Model:Predicate . #[() always-true]))
'Ceyx
(loader '((fentry always-true subr1) (mov (@ always-true) a4) (mov '(x) a3) (
jcall #:llcp:cbind1) (mov (cvalq t) a1) (return)) ())
'compile
(defabbrev null ())
(objval 'null '#(#:Model:Predicate . #[() null]))
'null
'compile
(defabbrev symbol ())
(objval 'symbol '#(#:Model:Predicate . #[nil symbolp]))
'symbol
'compile
(defabbrev fix ())
(objval 'fix '#(#:Model:Predicate . #[0 fixp]))
'fix
'compile
(defabbrev float ())
(objval 'float '#(#:Model:Predicate . #[0. floatp]))
'float
'compile
(defabbrev number ())
(objval 'number '#(#:Model:Predicate . #[0 numberp]))
'number
'compile
(defabbrev string ())
(objval 'string '#(#:Model:Predicate . #["" stringp]))
'string
'compile
(defabbrev atom ())
(objval 'atom '#(#:Model:Predicate . #[() atomp]))
'atom
'compile
(defabbrev cons ())
(objval 'cons '#(#:Model:Cons . #[(()) (#(#:Model:Field . #[() * car (car)]) .
#(#:Model:Field . #[() * cdr (cdr)]))]))
'cons
'compile
(defabbrev vector ())
(objval 'vector '#(#:Model:Predicate . #[#[] vectorp]))
'vector
'compile
(defabbrev integer ())
(objval 'integer '#(#:Model:Predicate . #[0 numberp]))
'integer
'compile
(defabbrev Model ())
(objval 'Model '#(#:Model:Tcons . #[#(Model . #[() ()]) #(Model . #(#:Model:
Field . #[#[() ()] #(#:Model:Vector . #[#[() ()] #[#(#:Model:Field . #[() * 
init (tcdr 0)]) #(#:Model:Field . #[() * fieldstruct (tcdr 1)])]]) repr (tcdr)
]))]))
'Model
'compile
(defabbrev #:Model:Field ())
(objval '#:Model:Field '#(#:Model:Tcons . #[#(#:Model:Field . #[() () () ()]) 
#(#:Model:Field . #(#:Model:Field . #[#[() () () ()] #(#:Model:Vector . #[#[()
() () ()] #[#(#:Model:Field . #[() * init (tcdr 0)]) #(#:Model:Field . #[() * 
fieldstruct (tcdr 1)]) #(#:Model:Field . #[() * name (tcdr 2)]) #(#:Model:
Field . #[() * access (tcdr 3)])]]) repr (tcdr)]))]))
'#:Model:Field
'compile
(defabbrev #:Model:Predicate ())
(objval '#:Model:Predicate '#(#:Model:Tcons . #[#(#:Model:Predicate . #[() ()]
) #(#:Model:Predicate . #(#:Model:Field . #[#[() ()] #(#:Model:Vector . #[#[()
()] #[#(#:Model:Field . #[() * init (tcdr 0)]) #(#:Model:Field . #[() * 
fieldstruct (tcdr 1)])]]) repr (tcdr)]))]))
'#:Model:Predicate
'compile
(defabbrev #:Model:List ())
(objval '#:Model:List '#(#:Model:Tcons . #[#(#:Model:List . #[() ()]) #(#:
Model:List . #(#:Model:Field . #[#[() ()] #(#:Model:Vector . #[#[() ()] #[#(#:
Model:Field . #[() * init (tcdr 0)]) #(#:Model:Field . #[() * fieldstruct (
tcdr 1)])]]) repr (tcdr)]))]))
'#:Model:List
'compile
(defabbrev #:Model:Cons ())
(objval '#:Model:Cons '#(#:Model:Tcons . #[#(#:Model:Cons . #[() ()]) #(#:
Model:Cons . #(#:Model:Field . #[#[() ()] #(#:Model:Vector . #[#[() ()] #[#(#:
Model:Field . #[() * init (tcdr 0)]) #(#:Model:Field . #[() * fieldstruct (
tcdr 1)])]]) repr (tcdr)]))]))
'#:Model:Cons
'compile
(defabbrev #:Model:Vector ())
(objval '#:Model:Vector '#(#:Model:Tcons . #[#(#:Model:Vector . #[() ()]) #(#:
Model:Vector . #(#:Model:Field . #[#[() ()] #(#:Model:Vector . #[#[() ()] #[#(
#:Model:Field . #[() * init (tcdr 0)]) #(#:Model:Field . #[() * fieldstruct (
tcdr 1)])]]) repr (tcdr)]))]))
'#:Model:Vector
'compile
(defabbrev #:Model:Tcons ())
(objval '#:Model:Tcons '#(#:Model:Tcons . #[#(#:Model:Tcons . #[() ()]) #(#:
Model:Tcons . #(#:Model:Field . #[#[() ()] #(#:Model:Vector . #[#[() ()] #[#(
#:Model:Field . #[() * init (tcdr 0)]) #(#:Model:Field . #[() * fieldstruct (
tcdr 1)])]]) repr (tcdr)]))]))
'#:Model:Tcons
(dmc |~| () (cons '|~| (read)))
(loader '((fentry #:Ceyx:system:tilda subr2) (mov (@ #:Ceyx:system:tilda) a4) 
(mov '(name model) a3) (jcall #:llcp:cbind2) (push '#:Ceyx:system:tilda) (push
a2) (push a1) (mov '3 a4) (jmp list)) ())
(loader '((fentry #:Ceyx:system:tildap subr1) (mov (@ #:Ceyx:system:tildap) a4
) (mov '(x) a3) (jcall #:llcp:cbind1) (jcall consp) (btnil a1 1001) (mov (
cvalq x) a1) (car a1) (mov '#:Ceyx:system:tilda a2) (jmp eq) 1001 (return)) ()
)
(loader '((fentry #:Ceyx:system:tilda-name subr1) (mov (@ #:Ceyx:system:
tilda-name) a4) (mov '(tilde) a3) (jcall #:llcp:cbind1) (bfsymb a1 1001) (
return) 1001 (mov (cdr a1) a1) (cdr a1) (car a1) (return)) ())
(loader '((fentry #:Ceyx:system:tilda-model subr2) (mov (@ #:Ceyx:system:
tilda-model) a4) (mov '(tilde model) a3) (jcall #:llcp:cbind2) (bfsymb a1 1001
) (mov a2 a1) (bra 1002) 1001 (mov (cdr a1) a1) (car a1) 1002 (mov a1 (cvalq 
model)) (bfsymb a1 1003) (push a1) (mov '1 a4) (jmp plink) 1003 (return)) ())
(loader '((fentry #:Ceyx:system:parse-tilda subr1) (mov (@ #:Ceyx:system:
parse-tilda) a4) (mov '(l) a3) (jcall #:llcp:cbind1) (btcons a1 1001) (return)
1001 (bfsymb (car a1) 1003) (bfcons (cdr a1) 1005) (mov (cdr a1) a1) (car a1) 
(bfcons a1 1005) (mov (cvalq l) a1) (cdr a1) (car a1) (car a1) (mov '|~| a2) (
cabne a1 a2 1005) (mov (cvalq l) a1) (car a1) (push a1) (mov (cvalq l) a1) (
cdr a1) (car a1) (cdr a1) (jcall #:Ceyx:system:parse-model-internal) (mov a1 
a2) (pop a1) (jcall #:Ceyx:system:tilda) (push a1) (mov (cvalq l) a1) (cdr a1)
(cdr a1) (jcall #:Ceyx:system:parse-tilda) (mov a1 a2) (pop a1) (jmp cons) 
1005 (mov (cvalq l) a1) (car a1) (push a1) (mov (cvalq l) a1) (cdr a1) (jcall 
#:Ceyx:system:parse-tilda) (mov a1 a2) (pop a1) (jmp cons) 1003 (mov (car a1) 
a1) (jcall #:Ceyx:system:parse-tilda) (push a1) (mov (cvalq l) a1) (cdr a1) (
jcall #:Ceyx:system:parse-tilda) (mov a1 a2) (pop a1) (jmp cons)) ())
(loader '((fentry #:Ceyx:system:parse-fields subr1) (mov (@ #:Ceyx:system:
parse-fields) a4) (mov '(lfield) a3) (jcall #:llcp:cbind1) (mov '#:Ceyx:
system:parse-model-error a1) (jcall #:llcp:tag) 1001 (mov (cvalq lfield) a1) (
jcall #:Ceyx:system:parse-tilda) (push a1) (mov '1 a4) (mov (@ 1001) a2) (mov 
'(#:system:map:arg0) a3) (jcall #:llcp:cbindl) 1002 (push nil) (mov '1 a4) (
mov (@ 1002) a2) (mov '(#:system:map:r) a3) (jcall #:llcp:cbindl) (bra 1004) 
1003 (mov (cvalq #:system:map:arg0) a1) (car a1) (push a1) (mov (cvalq #:
system:map:arg0) a1) (cdr a1) (mov a1 (cvalq #:system:map:arg0)) (pop a1) (
jcall #:Ceyx:system:parse-field) (mov (cvalq #:system:map:r) a2) (jcall cons) 
(mov a1 (cvalq #:system:map:r)) 1004 (btcons (cvalq #:system:map:arg0) 1003) 
1005 (mov (cvalq #:system:map:r) a1) (jmp nreverse) (return) (return)) ())
(loader '((fentry #:Ceyx:system:parse-field subr1) (mov (@ #:Ceyx:system:
parse-field) a4) (mov '(x) a3) (jcall #:llcp:cbind1) (btsymb a1 1003) (jcall 
#:Ceyx:system:tildap) (btnil a1 1001) 1003 (mov (cvalq x) a1) (jcall #:Ceyx:
system:tilda-name) (push a1) (mov (cvalq x) a1) (mov '* a2) (jcall #:Ceyx:
system:tilda-model) (push a1) (mov nil a1) (mov a1 a3) (pop a2) (pop a1) (jmp 
#:Model:Field) 1001 (bfcons (cvalq x) 1004) (mov (cvalq x) a1) (car a1) (
btsymb a1 1006) (mov (cvalq x) a1) (car a1) (jcall #:Ceyx:system:tildap) (
btnil a1 1004) 1006 (mov (cvalq x) a1) (car a1) (jcall #:Ceyx:system:
tilda-name) (push a1) (mov (cvalq x) a1) (car a1) (mov '* a2) (jcall #:Ceyx:
system:tilda-model) (push a1) (push (@ 1007)) (mov (cvalq x) a1) (cdr a1) (car
a1) (push a1) (mov '1 a4) (jmp eval) 1007 (mov a1 a3) (pop a2) (pop a1) (jmp 
#:Model:Field) 1004 (mov '#:Ceyx:system:parse-model-error a1) (mov '#:Ceyx:
system:parse-model-error a2) (jmp #:llcp:exit)) ())
'compile
(defabbrev #:Model:Macro:Record #:Model:Record)
(#:Ceyx:system:put-model-keyword 'Record '#:Model:Macro:Record)
(loader '((fentry #:Model:Macro:Record:parse-model subr1) (mov (@ #:Model:
Macro:Record:parse-model) a4) (mov '(expr) a3) (jcall #:llcp:cbind1) (push '#:
Model:Record) 1001 (push (@ 1002)) (push (cdr a1)) (mov '1 a4) (mov (@ 1001) 
a2) (mov '(#:system:map:arg0) a3) (jcall #:llcp:cbindl) 1003 (push nil) (mov '
1 a4) (mov (@ 1003) a2) (mov '(#:system:map:r) a3) (jcall #:llcp:cbindl) (bra 
1005) 1004 (mov (cvalq #:system:map:arg0) a1) (car a1) (push a1) (mov (cvalq 
#:system:map:arg0) a1) (cdr a1) (mov a1 (cvalq #:system:map:arg0)) (pop a1) (
jcall #:Ceyx:system:parse-model) (mov (cvalq #:system:map:r) a2) (jcall cons) 
(mov a1 (cvalq #:system:map:r)) 1005 (btcons (cvalq #:system:map:arg0) 1004) 
1006 (mov (cvalq #:system:map:r) a1) (jmp nreverse) (return) 1002 (push a1) (
mov '2 a4) (jmp apply)) ())
(loader '((fentry #:Model:Record nsubr) (mov (@ #:Model:Record) a2) (mov '
lfield a3) (jcall #:llcp:cbindn) (push '#:Model:Macro:Record) (bfnil (cvalq 
lfield) 1003) (mov 'Record a1) (mov '"At least one field for records" a2) (mov
nil a3) (jcall syserror) (bra 1004) 1003 (mov (cvalq lfield) a1) (jcall #:
Ceyx:system:expand-record) 1004 (mov a1 a2) (pop a1) (jmp #:Model:Macro)) ())
(loader '((fentry #:Ceyx:system:expand-record subr1) (mov (@ #:Ceyx:system:
expand-record) a4) (mov '(lfield) a3) (jcall #:llcp:cbind1) (jcall copy) (mov 
a1 (cvalq lfield)) (push (@ 1003)) (jcall length) (push a1) (push '1) (mov '2 
a4) (jmp =) 1003 (btnil a1 1001) (mov (cvalq lfield) a1) (car a1) (return) 
1001 1004 (push (cvalq lfield)) (push nil) (mov (cvalq lfield) a1) (jcall 
length) (mov '2 a2) (quo a2 a1) (push a1) (mov '3 a4) (mov (@ 1004) a2) (mov '
(l1 l2 n) a3) (jcall #:llcp:cbindl) (mov (cvalq n) a1) (jcall 1-) (bra 1006) 
1005 (push a1) (mov (cvalq lfield) a1) (car a1) (push a1) (mov (cvalq lfield) 
a1) (cdr a1) (mov a1 (cvalq lfield)) (pop a1) (pop a1) 1006 (sobgez a1 1005) (
mov (cvalq lfield) a1) (cdr a1) (mov a1 (cvalq l2)) (mov (cvalq lfield) a1) (
mov nil a2) (mov a2 (cdr a1)) (mov (cvalq l1) a1) (jcall #:Ceyx:system:
expand-record) (push a1) (mov (cvalq l2) a1) (jcall #:Ceyx:system:
expand-record) (mov a1 a2) (pop a1) (jmp #:Model:Cons) (return)) ())
(loader '((fentry defrecord dmsubr) (mov (@ defrecord) a2) (mov '(namedescr . 
lfield) a3) (jcall #:llcp:cbinds) (mov (cvalq namedescr) a1) (mov (cvalq 
lfield) a2) (mov nil a3) (jmp defrecord-expander)) ())
(loader '((fentry deftrecord dmsubr) (mov (@ deftrecord) a2) (mov '(namedescr 
. lfield) a3) (jcall #:llcp:cbinds) (mov (cvalq namedescr) a1) (mov (cvalq 
lfield) a2) (mov (cvalq t) a3) (jmp defrecord-expander)) ())
(loader '((fentry defrecord-expander subr3) (push (@ defrecord-expander)) (mov
'(namedescr lfield tag) a4) (jcall #:llcp:cbind3) (bfsymb a1 1001) (push (@ 
1003)) (push a1) (mov a1 a2) (mov '() a1) (jcall symbol) (push a1) (mov '2 a4)
(jmp list) 1003 (mov a1 (cvalq namedescr)) (bra 1002) 1001 (mov nil a1) 1002 (
mov (cvalq lfield) a1) (jcall #:Ceyx:system:parse-fields) (mov a1 (cvalq 
lfield)) (mov '#:Ceyx:system:parse-model-error a2) (cabne a1 a2 1004) (btnil (
cvalq tag) 1006) (mov 'deftrecord a1) (bra 1007) 1006 (mov 'defrecord a1) 1007
(mov '"Bad syntax for fields" a2) (mov (cvalq namedescr) a3) (car a3) (jcall 
syserror) (bra 1005) 1004 (mov nil a1) 1005 (bfnil (cvalq lfield) 1008) (btnil
(cvalq tag) 1010) (mov 'deftrecord a1) (bra 1011) 1010 (mov 'defrecord a1) 
1011 (mov '"At least one field for Records" a2) (mov (cvalq namedescr) a3) (
car a3) (jcall syserror) (bra 1009) 1008 (mov nil a1) 1009 (bfnil (cvalq tag) 
1012) (push (@ 1016)) (mov (cvalq lfield) a1) (jcall length) (push a1) (push '
1) (mov '2 a4) (jmp =) 1016 (btnil a1 1014) (push (@ 1017)) (push (cvalq 
lfield)) (mov '(%cdr%) a1) (jcall #:Ceyx:system:parse-fields) (push a1) (mov '
2 a4) (jmp append) 1017 (mov a1 (cvalq lfield)) (bra 1015) 1014 (mov nil a1) 
1015 (bra 1013) 1012 (mov nil a1) 1013 1018 (push nil) (push (@ 1019)) (push '
#:Model:Record) (push (cvalq lfield)) (mov '2 a4) (jmp apply) 1019 (push a1) (
mov '2 a4) (mov (@ 1018) a2) (mov '(expansion model) a3) (jcall #:llcp:cbindl)
(mov (cvalq namedescr) a1) (mov (cvalq model) a2) (mov (cvalq tag) a3) (jcall 
defmodel-expander) (mov (cvalq expansion) a2) (jcall cons) (mov a1 (cvalq 
expansion)) (push (@ 1020)) (push 'defaccess) (mov (cvalq namedescr) a1) (car 
a1) (push a1) (mov '2 a4) (jmp list) 1020 (mov (cvalq expansion) a2) (jcall 
cons) (mov a1 (cvalq expansion)) (push (@ 1021)) (push 'quote) (mov (cvalq 
namedescr) a1) (car a1) (push a1) (mov '2 a4) (jmp list) 1021 (mov (cvalq 
expansion) a2) (jcall cons) (mov a1 (cvalq expansion)) (push 'progn) (push ''
compile) (jcall nreverse) (push a1) (mov '3 a4) (jmp mcons) (return)) ())
'compile
(defabbrev Class ())
(objval 'Class '#(#:Model:Field . #[#[] #(#:Model:Vector . #[#[] #[]]) 
class-attributes ()]))
'Class
'compile
(defabbrev Tclass ())
(objval 'Tclass '#(#:Model:Tcons . #[#(Tclass . #[]) #(Tclass . #(#:Model:
Field . #[#[] #(#:Model:Vector . #[#[] #[]]) class-attributes (tcdr)]))]))
'Tclass
(loader '((fentry defclass dmsubr) (mov (@ defclass) a2) (mov '(namedescr . 
lfield) a3) (jcall #:llcp:cbinds) (mov (cvalq namedescr) a1) (mov (cvalq 
lfield) a2) (mov nil a3) (jmp defclass-expander)) ())
(loader '((fentry deftclass dmsubr) (mov (@ deftclass) a2) (mov '(namedescr . 
lfield) a3) (jcall #:llcp:cbinds) (mov (cvalq namedescr) a1) (mov (cvalq 
lfield) a2) (mov (cvalq t) a3) (jmp defclass-expander)) ())
(loader '((fentry defclass-expander subr3) (push (@ defclass-expander)) (mov '
(namedescr lfield tag) a4) (jcall #:llcp:cbind3) (bfsymb a1 1001) (push (@ 
1003)) (push a1) (mov a1 a2) (mov '() a1) (jcall symbol) (push a1) (mov '2 a4)
(jmp list) 1003 (mov a1 (cvalq namedescr)) (bra 1002) 1001 (mov nil a1) 1002 (
mov (cvalq lfield) a1) (jcall #:Ceyx:system:parse-fields) (mov a1 (cvalq 
lfield)) (mov '#:Ceyx:system:parse-model-error a2) (cabne a1 a2 1004) (btnil (
cvalq tag) 1006) (mov 'deftclass a1) (bra 1007) 1006 (mov 'defclass a1) 1007 (
mov '"Bad syntax for fields" a2) (mov (cvalq namedescr) a3) (car a3) (jcall 
syserror) (bra 1005) 1004 (mov nil a1) 1005 1008 (mov (cvalq namedescr) a1) (
car a1) (push a1) (push nil) (push nil) (mov '3 a4) (mov (@ 1008) a2) (mov '(
name model expansion) a3) (jcall #:llcp:cbindl) (push (@ 1011)) (push (cvalq 
name)) (mov '1 a4) (jmp packagecell) 1011 (mov '() a2) (cabne a1 a2 1009) (
push (cvalq namedescr)) (btnil (cvalq tag) 1012) (mov 'Tclass a1) (bra 1013) 
1012 (mov 'Class a1) 1013 (mov (cvalq name) a2) (jcall symbol) (mov a1 (cvalq 
name)) (mov a1 a2) (pop a1) (mov a2 (car a1)) (bra 1010) 1009 (mov nil a1) 
1010 (push (@ 1017)) (push (@ 1018)) (push (cvalq name)) (mov '1 a4) (jmp 
packagecell) 1018 (push a1) (mov '1 a4) (jmp objval) 1017 (btnil a1 1016) (
push (@ 1019)) (push (cvalq name)) (mov '1 a4) (jmp packagecell) 1019 (btnil (
cvalq tag) 1020) (mov 'Tclass a2) (bra 1021) 1020 (mov 'Class a2) 1021 (jcall 
<=p) (bfnil a1 1014) 1016 (btnil (cvalq tag) 1024) (mov 'deftclass a1) (bra 
1025) 1024 (mov 'defclass a1) 1025 (push a1) (push '"Not a class") (push (@ 
1026)) (push (cvalq name)) (mov '1 a4) (jmp packagecell) 1026 (mov a1 a3) (pop
a2) (pop a1) (jcall syserror) (bra 1015) 1014 (mov nil a1) 1015 (push (@ 1027)
) (push 'extend) (push (@ 1028)) (push (@ 1029)) (push (cvalq name)) (mov '1 
a4) (jmp packagecell) 1029 (push a1) (mov '1 a4) (jmp objval) 1028 (push a1) (
push (@ 1030)) (push 'class-attributes) (push (@ 1031)) (push '#:Model:Vector)
(push (cvalq lfield)) (mov '2 a4) (jmp apply) 1031 (push a1) (mov '2 a4) (jmp 
list) 1030 (push a1) (mov '3 a4) (jmp send) 1027 (mov a1 (cvalq model)) (mov (
cvalq namedescr) a1) (mov (cvalq model) a2) (mov (cvalq tag) a3) (jcall 
defmodel-expander) (mov (cvalq expansion) a2) (jcall cons) (mov a1 (cvalq 
expansion)) (btnil (cvalq lfield) 1032) (push (@ 1034)) (push 'defaccess) (mov
(cvalq namedescr) a1) (car a1) (push a1) 1035 (push (@ 1036)) (push (cvalq 
lfield)) (mov '1 a4) (mov (@ 1035) a2) (mov '(#:system:map:arg0) a3) (jcall #:
llcp:cbindl) 1037 (push nil) (mov '1 a4) (mov (@ 1037) a2) (mov '(#:system:
map:r) a3) (jcall #:llcp:cbindl) (bra 1039) 1038 (push (@ 1040)) (mov (cvalq 
#:system:map:arg0) a1) (car a1) (push a1) (mov (cvalq #:system:map:arg0) a1) (
cdr a1) (mov a1 (cvalq #:system:map:arg0)) (pop a1) (push a1) (mov '1 a4) (jmp
#:Model:Field:name) 1040 (mov (cvalq #:system:map:r) a2) (jcall cons) (mov a1 
(cvalq #:system:map:r)) 1039 (btcons (cvalq #:system:map:arg0) 1038) 1041 (mov
(cvalq #:system:map:r) a1) (jmp nreverse) (return) 1036 (push a1) (mov '3 a4) 
(jmp mcons) 1034 (mov (cvalq expansion) a2) (jcall cons) (mov a1 (cvalq 
expansion)) (bra 1033) 1032 (mov nil a1) 1033 (push (@ 1042)) (push 'quote) (
push (cvalq name)) (mov '2 a4) (jmp list) 1042 (mov (cvalq expansion) a2) (
jcall cons) (mov a1 (cvalq expansion)) (push 'progn) (push ''compile) (jcall 
nreverse) (push a1) (mov '3 a4) (jmp mcons) (return)) ())
'compile
(defabbrev #:Model:Macro:Tree #:Model:Tree)
(#:Ceyx:system:put-model-keyword 'Tree '#:Model:Macro:Tree)
(loader '((fentry #:Model:Macro:Tree:parse-model subr1) (mov (@ #:Model:Macro:
Tree:parse-model) a4) (mov '(expr) a3) (jcall #:llcp:cbind1) (push '#:Model:
Tree) 1001 (push (@ 1002)) (push (cdr a1)) (mov '1 a4) (mov (@ 1001) a2) (mov 
'(#:system:map:arg0) a3) (jcall #:llcp:cbindl) 1003 (push nil) (mov '1 a4) (
mov (@ 1003) a2) (mov '(#:system:map:r) a3) (jcall #:llcp:cbindl) (bra 1005) 
1004 (mov (cvalq #:system:map:arg0) a1) (car a1) (push a1) (mov (cvalq #:
system:map:arg0) a1) (cdr a1) (mov a1 (cvalq #:system:map:arg0)) (pop a1) (
jcall #:Ceyx:system:parse-model) (mov (cvalq #:system:map:r) a2) (jcall cons) 
(mov a1 (cvalq #:system:map:r)) 1005 (btcons (cvalq #:system:map:arg0) 1004) 
1006 (mov (cvalq #:system:map:r) a1) (jmp nreverse) (return) 1002 (push a1) (
mov '2 a4) (jmp apply)) ())
(loader '((fentry #:Model:Tree nsubr) (mov (@ #:Model:Tree) a2) (mov '(sons . 
lfield) a3) (jcall #:llcp:cbindn) (push '#:Model:Macro:Tree) (mov 'sons a1) (
mov (cvalq sons) a2) (mov nil a3) (jcall #:Model:Field) (push a1) (push '
tree-attributes) (push (@ 1001)) (push '#:Model:Vector) (push (cvalq lfield)) 
(mov '2 a4) (jmp apply) 1001 (push a1) (mov nil a1) (mov a1 a3) (pop a2) (pop 
a1) (jcall #:Model:Field) (mov a1 a2) (pop a1) (jcall #:Model:Cons) (mov a1 a2
) (pop a1) (jmp #:Model:Macro)) ())
'compile
(defabbrev Tree ())
(objval 'Tree '#(#:Model:Tcons . #[#(Tree () . #[]) #(Tree . #(#:Model:Cons . 
#[(() . #[]) (#(#:Model:Field . #[() () sons (tcdr car)]) . #(#:Model:Field . 
#[#[] #(#:Model:Vector . #[#[] #[]]) tree-attributes (tcdr cdr)]))]))]))
'Tree
'compile
'compile
(loader '((fentry #:Tree:sons nsubr) (mov (@ #:Tree:sons) a2) (mov 'obj a3) (
jcall #:llcp:cbindn) (push '(#:Ceyx:system:g126 obj)) (mov '1 a4) (jmp eval)) 
())
(#:Ceyx:cxcp-access '#:Tree:sons '(tcdr car))
'compile
(loader '((fentry #:Tree:tree-attributes nsubr) (mov (@ #:Tree:tree-attributes
) a2) (mov 'obj a3) (jcall #:llcp:cbindn) (push '(#:Ceyx:system:g127 obj)) (
mov '1 a4) (jmp eval)) ())
(#:Ceyx:cxcp-access '#:Tree:tree-attributes '(tcdr cdr))
'Tree
(loader '((fentry deftree dmsubr) (mov (@ deftree) a2) (mov '(namedescr . 
lfield) a3) (jcall #:llcp:cbinds) (mov (cvalq namedescr) a1) (mov (cvalq 
lfield) a2) (jmp deftree-expander)) ())
(loader '((fentry deftree-expander subr2) (mov (@ deftree-expander) a4) (mov '
(namedescr lfield) a3) (jcall #:llcp:cbind2) (bfsymb a1 1001) (push (@ 1003)) 
(push a1) (mov a1 a2) (mov '() a1) (jcall symbol) (push a1) (mov '2 a4) (jmp 
list) 1003 (mov a1 (cvalq namedescr)) (bra 1002) 1001 (mov nil a1) 1002 (mov (
cvalq lfield) a1) (jcall #:Ceyx:system:parse-fields) (mov a1 (cvalq lfield)) (
mov '#:Ceyx:system:parse-model-error a2) (cabne a1 a2 1004) (mov 'deftree a1) 
(mov '"Bad syntax for fields" a2) (mov (cvalq namedescr) a3) (car a3) (jcall 
syserror) (bra 1005) 1004 (mov nil a1) 1005 1006 (mov (cvalq namedescr) a1) (
car a1) (push a1) (push nil) (push nil) (mov '3 a4) (mov (@ 1006) a2) (mov '(
name model expansion) a3) (jcall #:llcp:cbindl) (push (@ 1009)) (push (cvalq 
name)) (mov '1 a4) (jmp packagecell) 1009 (mov '() a2) (cabne a1 a2 1007) (
push (cvalq namedescr)) (mov (cvalq name) a2) (mov 'Tree a1) (jcall symbol) (
mov a1 (cvalq name)) (mov a1 a2) (pop a1) (mov a2 (car a1)) (bra 1008) 1007 (
mov nil a1) 1008 (push (@ 1013)) (push (@ 1014)) (push (cvalq name)) (mov '1 
a4) (jmp packagecell) 1014 (push a1) (mov '1 a4) (jmp objval) 1013 (btnil a1 
1012) (push (@ 1015)) (push (cvalq name)) (mov '1 a4) (jmp packagecell) 1015 (
mov 'Tree a2) (jcall <=p) (bfnil a1 1010) 1012 (push 'deftree) (push '
"Not a Tree") (push (@ 1016)) (push (cvalq name)) (mov '1 a4) (jmp packagecell
) 1016 (mov a1 a3) (pop a2) (pop a1) (jcall syserror) (bra 1011) 1010 (mov nil
a1) 1011 (push (@ 1017)) (push 'extend) (push (@ 1018)) (push (@ 1019)) (push 
(cvalq name)) (mov '1 a4) (jmp packagecell) 1019 (push a1) (mov '1 a4) (jmp 
objval) 1018 (push a1) (push (@ 1020)) (push 'tree-attributes) (push (@ 1021))
(push '#:Model:Vector) (push (cvalq lfield)) (mov '2 a4) (jmp apply) 1021 (
push a1) (mov '2 a4) (jmp list) 1020 (push a1) (mov '3 a4) (jmp send) 1017 (
mov a1 (cvalq model)) (mov (cvalq namedescr) a1) (mov (cvalq model) a2) (mov (
cvalq t) a3) (jcall defmodel-expander) (mov (cvalq expansion) a2) (jcall cons)
(mov a1 (cvalq expansion)) (btnil (cvalq lfield) 1022) (push (@ 1024)) (push '
defaccess) (mov (cvalq namedescr) a1) (car a1) (push a1) 1025 (push (@ 1026)) 
(push (cvalq lfield)) (mov '1 a4) (mov (@ 1025) a2) (mov '(#:system:map:arg0) 
a3) (jcall #:llcp:cbindl) 1027 (push nil) (mov '1 a4) (mov (@ 1027) a2) (mov '
(#:system:map:r) a3) (jcall #:llcp:cbindl) (bra 1029) 1028 (push (@ 1030)) (
mov (cvalq #:system:map:arg0) a1) (car a1) (push a1) (mov (cvalq #:system:map:
arg0) a1) (cdr a1) (mov a1 (cvalq #:system:map:arg0)) (pop a1) (push a1) (mov 
'1 a4) (jmp #:Model:Field:name) 1030 (mov (cvalq #:system:map:r) a2) (jcall 
cons) (mov a1 (cvalq #:system:map:r)) 1029 (btcons (cvalq #:system:map:arg0) 
1028) 1031 (mov (cvalq #:system:map:r) a1) (jmp nreverse) (return) 1026 (push 
a1) (mov '3 a4) (jmp mcons) 1024 (mov (cvalq expansion) a2) (jcall cons) (mov 
a1 (cvalq expansion)) (bra 1023) 1022 (mov nil a1) 1023 (push (@ 1032)) (push 
'defabbrev) (push (cvalq name)) (mov (cvalq namedescr) a1) (cdr a1) (car a1) (
push a1) (mov '3 a4) (jmp list) 1032 (mov (cvalq expansion) a2) (jcall cons) (
mov a1 (cvalq expansion)) (push (@ 1033)) (push 'quote) (push (cvalq name)) (
mov '2 a4) (jmp list) 1033 (mov (cvalq expansion) a2) (jcall cons) (mov a1 (
cvalq expansion)) (push 'progn) (push ''compile) (jcall nreverse) (push a1) (
mov '3 a4) (jmp mcons) (return)) ())
(loader '((fentry defcons dmsubr) (mov (@ defcons) a2) (mov '(namedescr . 
lfield) a3) (jcall #:llcp:cbinds) (mov (cvalq namedescr) a1) (mov (cvalq 
lfield) a2) (jmp defcons-expander)) ())
(loader '((fentry defcons-expander subr2) (mov (@ defcons-expander) a4) (mov '
(namedescr lfield) a3) (jcall #:llcp:cbind2) (bfsymb a1 1001) (push (@ 1003)) 
(push a1) (mov a1 a2) (mov '() a1) (jcall symbol) (push a1) (mov '2 a4) (jmp 
list) 1003 (mov a1 (cvalq namedescr)) (bra 1002) 1001 (mov nil a1) 1002 1004 (
push nil) (push nil) (mov '2 a4) (mov (@ 1004) a2) (mov '(sons flag-List) a3) 
(jcall #:llcp:cbindl) (mov (cvalq lfield) a1) (car a1) (btsymb a1 1005) (mov (
cvalq lfield) a1) (car a1) (mov a1 (cvalq sons)) (mov (cvalq lfield) a1) (cdr 
a1) (mov a1 (cvalq lfield)) (bra 1006) 1005 (mov (cvalq lfield) a1) (car a1) (
bfnil a1 1007) (mov nil a1) (mov a1 (cvalq sons)) (mov (cvalq lfield) a1) (cdr
a1) (mov a1 (cvalq lfield)) (bra 1008) 1007 (mov (cvalq lfield) a1) (cdr a1) (
car a1) (bfcons a1 1009) (mov (cvalq lfield) a1) (cdr a1) (car a1) (car a1) (
mov '|~| a2) (cabne a1 a2 1009) (push (@ 1011)) (mov (cvalq lfield) a1) (car 
a1) (push a1) (mov (cvalq lfield) a1) (cdr a1) (car a1) (push a1) (mov '2 a4) 
(jmp list) 1011 (mov a1 (cvalq sons)) (mov (cvalq lfield) a1) (cdr a1) (cdr a1
) (mov a1 (cvalq lfield)) (mov (cvalq t) a1) (mov a1 (cvalq flag-List)) (bra 
1010) 1009 (push (@ 1012)) (mov (cvalq lfield) a1) (car a1) (push a1) (mov '1 
a4) (jmp list) 1012 (mov a1 (cvalq sons)) (mov (cvalq lfield) a1) (cdr a1) (
mov a1 (cvalq lfield)) (mov (cvalq t) a1) (mov a1 (cvalq flag-List)) 1010 1008
1006 (btnil (cvalq sons) 1016) (mov (cvalq sons) a1) (jcall #:Ceyx:system:
parse-fields) (bra 1017) 1016 (mov nil a1) 1017 (mov a1 (cvalq sons)) (mov '#:
Ceyx:system:parse-model-error a2) (cabeq a1 a2 1015) (mov (cvalq lfield) a1) (
jcall #:Ceyx:system:parse-fields) (mov a1 (cvalq lfield)) (mov '#:Ceyx:system:
parse-model-error a2) (cabne a1 a2 1013) 1015 (mov 'defcons a1) (mov '
"Bad syntax" a2) (mov (cvalq namedescr) a3) (car a3) (jcall syserror) (bra 
1014) 1013 (mov nil a1) 1014 1018 (mov (cvalq namedescr) a1) (car a1) (push a1
) (push nil) (push nil) (mov '3 a4) (mov (@ 1018) a2) (mov '(name model 
expansion) a3) (jcall #:llcp:cbindl) (push (@ 1022)) (push (@ 1023)) (push (
cvalq name)) (mov '1 a4) (jmp packagecell) 1023 (push a1) (mov '1 a4) (jmp 
objval) 1022 (btnil a1 1021) (push (@ 1024)) (push (cvalq name)) (mov '1 a4) (
jmp packagecell) 1024 (mov 'Tree a2) (jcall <=p) (bfnil a1 1019) 1021 (push '
defcons) (push '"Not a Tree") (push (@ 1025)) (push (cvalq name)) (mov '1 a4) 
(jmp packagecell) 1025 (mov a1 a3) (pop a2) (pop a1) (jcall syserror) (bra 
1020) 1019 (mov nil a1) 1020 (push (@ 1026)) (push 'extend) (push (@ 1027)) (
push (@ 1028)) (push (cvalq name)) (mov '1 a4) (jmp packagecell) 1028 (push a1
) (mov '1 a4) (jmp objval) 1027 (push a1) (push (@ 1029)) (push '
tree-attributes) (push (@ 1030)) (push '#:Model:Vector) (push (cvalq lfield)) 
(mov '2 a4) (jmp apply) 1030 (push a1) (mov '2 a4) (jmp list) 1029 (push a1) (
mov '3 a4) (jmp send) 1026 (mov a1 (cvalq model)) (push (@ 1031)) (push 'alter
) (push a1) (push (@ 1032)) (push 'sons) (btnil (cvalq flag-List) 1033) (mov (
cvalq sons) a1) (car a1) (bra 1034) 1033 (bfnil (cvalq sons) 1035) (mov '(
Field sons (Vector)) a1) (jcall #:Ceyx:system:parse-model) (bra 1036) 1035 (
push (@ 1037)) (push '#:Model:Vector) (push (cvalq sons)) (mov '2 a4) (jmp 
apply) 1037 1036 1034 (push a1) (mov '2 a4) (jmp list) 1032 (push a1) (mov '3 
a4) (jmp send) 1031 (mov a1 (cvalq model)) (mov (cvalq namedescr) a1) (mov (
cvalq model) a2) (mov (cvalq t) a3) (jcall defmodel-expander) (mov (cvalq 
expansion) a2) (jcall cons) (mov a1 (cvalq expansion)) (bfnil (cvalq sons) 
1040) (btnil (cvalq lfield) 1038) 1040 (push (@ 1041)) (push 'defaccess) (mov 
(cvalq namedescr) a1) (car a1) (push a1) 1042 (push (@ 1043)) (push (@ 1044)) 
(push (cvalq sons)) (push (cvalq lfield)) (mov '2 a4) (jmp append) 1044 (push 
a1) (mov '1 a4) (mov (@ 1042) a2) (mov '(#:system:map:arg0) a3) (jcall #:llcp:
cbindl) 1045 (push nil) (mov '1 a4) (mov (@ 1045) a2) (mov '(#:system:map:r) 
a3) (jcall #:llcp:cbindl) (bra 1047) 1046 (push (@ 1048)) (mov (cvalq #:
system:map:arg0) a1) (car a1) (push a1) (mov (cvalq #:system:map:arg0) a1) (
cdr a1) (mov a1 (cvalq #:system:map:arg0)) (pop a1) (push a1) (mov '1 a4) (jmp
#:Model:Field:name) 1048 (mov (cvalq #:system:map:r) a2) (jcall cons) (mov a1 
(cvalq #:system:map:r)) 1047 (btcons (cvalq #:system:map:arg0) 1046) 1049 (mov
(cvalq #:system:map:r) a1) (jmp nreverse) (return) 1043 (push a1) (mov '3 a4) 
(jmp mcons) 1041 (mov (cvalq expansion) a2) (jcall cons) (mov a1 (cvalq 
expansion)) (bra 1039) 1038 (mov nil a1) 1039 (push (@ 1050)) (push 'defabbrev
) (push (cvalq name)) (mov (cvalq namedescr) a1) (cdr a1) (car a1) (push a1) (
mov '3 a4) (jmp list) 1050 (mov (cvalq expansion) a2) (jcall cons) (mov a1 (
cvalq expansion)) (push (@ 1051)) (push 'defmake) (push (cvalq name)) (mov (
cvalq namedescr) a1) (cdr a1) (car a1) (push a1) (btnil (cvalq flag-List) 1052
) (push (@ 1054)) (mov (cvalq sons) a1) (car a1) (push a1) (mov '1 a4) (jmp #:
Model:Field:name) 1054 (bra 1053) 1052 1055 (push (@ 1056)) (push (cvalq sons)
) (mov '1 a4) (mov (@ 1055) a2) (mov '(#:system:map:arg0) a3) (jcall #:llcp:
cbindl) 1057 (push nil) (mov '1 a4) (mov (@ 1057) a2) (mov '(#:system:map:r) 
a3) (jcall #:llcp:cbindl) (bra 1059) 1058 (push (@ 1060)) (mov (cvalq #:
system:map:arg0) a1) (car a1) (push a1) (mov (cvalq #:system:map:arg0) a1) (
cdr a1) (mov a1 (cvalq #:system:map:arg0)) (pop a1) (push a1) (mov '1 a4) (jmp
#:Model:Field:name) 1060 (mov (cvalq #:system:map:r) a2) (jcall cons) (mov a1 
(cvalq #:system:map:r)) 1059 (btcons (cvalq #:system:map:arg0) 1058) 1061 (mov
(cvalq #:system:map:r) a1) (jmp nreverse) (return) 1056 1053 (push a1) (mov '4
a4) (jmp list) 1051 (mov (cvalq expansion) a2) (jcall cons) (mov a1 (cvalq 
expansion)) (push (@ 1062)) (push 'quote) (push (cvalq name)) (mov '2 a4) (jmp
list) 1062 (mov (cvalq expansion) a2) (jcall cons) (mov a1 (cvalq expansion)) 
(push 'progn) (push ''compile) (jcall nreverse) (push a1) (mov '3 a4) (jmp 
mcons) (return) (return)) ())
(loader '((fentry omakeq dmsubr) (mov (@ omakeq) a2) (mov '(model . args) a3) 
(jcall #:llcp:cbinds) 1001 (push (cvalq model)) (push nil) (mov '2 a4) (mov (@
1001) a2) (mov '(modelname lfieldname) a3) (jcall #:llcp:cbindl) (push (@ 1004
)) (push (cvalq model)) (mov '1 a4) (jmp plink) 1004 (bfnil a1 1002) (mov '
omakeq a1) (mov '"Not a model name" a2) (mov (cvalq modelname) a3) (jmp 
syserror) 1002 (push (@ 1005)) (push (@ 1006)) (push (cvalq model)) (mov '1 a4
) (jmp plink) 1006 (push a1) (mov '1 a4) (jmp objval) 1005 (mov a1 (cvalq 
model)) (bfnil a1 1007) (mov 'omakeq a1) (mov '"Not a Model name" a2) (mov (
cvalq modelname) a3) (jcall syserror) (bra 1008) 1007 (mov nil a1) 1008 (mov (
cvalq args) a1) (jcall #:Ceyx:system:make-alist) (mov a1 (cvalq lfieldname)) (
push 'makeq) (push (cvalq model)) (push a1) (mov '3 a4) (jmp send) (return)) (
))
(loader '((fentry #:Ceyx:system:make-alist subr1) (mov (@ #:Ceyx:system:
make-alist) a4) (mov '(args) a3) (jcall #:llcp:cbind1) 1001 (push nil) (mov '1
a4) (mov (@ 1001) a2) (mov '(make-alist) a3) (jcall #:llcp:cbindl) (bra 1003) 
1002 (mov (cvalq args) a1) (car a1) (push a1) (mov (cvalq args) a1) (cdr a1) (
mov a1 (cvalq args)) (pop a1) (mov (cvalq args) a2) (car a2) (push a2) (mov (
cvalq args) a2) (cdr a2) (mov a2 (cvalq args)) (pop a2) (jcall cons) (mov (
cvalq make-alist) a2) (jcall cons) (mov a1 (cvalq make-alist)) 1003 (bfnil (
cvalq args) 1002) (mov (cvalq make-alist) a1) (jmp nreverse) (return)) ())
(loader '((fentry omake subr1) (mov (@ omake) a4) (mov '(modelname) a3) (jcall
#:llcp:cbind1) (push (@ 1003)) (push a1) (mov '1 a4) (jmp plink) 1003 (bfnil 
a1 1001) (mov 'omake a1) (mov '"Not a model name" a2) (mov (cvalq modelname) 
a3) (jmp syserror) 1001 (push (@ 1004)) (push (@ 1005)) (push (@ 1006)) (push 
(cvalq modelname)) (mov '1 a4) (jmp plink) 1006 (push a1) (mov '1 a4) (jmp 
objval) 1005 (push a1) (mov '1 a4) (jmp #:Model:init) 1004 (jmp copy)) ())
(loader '((fentry ogetq dmsubr) (mov (@ ogetq) a2) (mov '(model fieldname obj)
a3) (jcall #:llcp:cbinds) 1001 (push (cvalq model)) (push nil) (mov '2 a4) (
mov (@ 1001) a2) (mov '(modelname field) a3) (jcall #:llcp:cbindl) (push (@ 
1004)) (push (cvalq model)) (mov '1 a4) (jmp plink) 1004 (bfnil a1 1002) (push
'ogetq) (push '"Not a model name") (push (@ 1005)) (push (cvalq modelname)) (
push (cvalq fieldname)) (mov '2 a4) (jmp list) 1005 (mov a1 a3) (pop a2) (pop 
a1) (jcall syserror) (bra 1003) 1002 (push (@ 1006)) (push (@ 1007)) (push (
cvalq model)) (mov '1 a4) (jmp plink) 1007 (push a1) (mov '1 a4) (jmp objval) 
1006 (mov a1 (cvalq model)) 1003 (bfnil (cvalq model) 1008) (mov 'ogetq a1) (
mov '"Not a Model name" a2) (mov (cvalq modelname) a3) (jcall syserror) (bra 
1009) 1008 (mov nil a1) 1009 (push (@ 1010)) (push 'find-field) (push (cvalq 
model)) (push (cvalq fieldname)) (mov '3 a4) (jmp send) 1010 (mov a1 (cvalq 
field)) (bfnil a1 1011) (push 'ogetq) (push '"Not a field") (push (@ 1013)) (
push (cvalq modelname)) (push (cvalq fieldname)) (mov '2 a4) (jmp list) 1013 (
mov a1 a3) (pop a2) (pop a1) (jmp syserror) 1011 (push (@ 1014)) (push a1) (
mov '1 a4) (jmp #:Model:Field:access) 1014 (mov (cvalq obj) a2) (jmp #:Ceyx:
system:make-get-function) (return)) ())
(loader '((fentry oget subr3) (push (@ oget)) (mov '(modelname fieldname obj) 
a4) (jcall #:llcp:cbind3) (push (@ 1001)) (push 'ogetq) (push a1) (push a2) (
push (@ 1002)) (push 'quote) (push a3) (mov '2 a4) (jmp list) 1002 (push a1) (
mov '4 a4) (jmp list) 1001 (push a1) (mov '1 a4) (jmp eval)) ())
(loader '((fentry oputq dmsubr) (mov (@ oputq) a2) (mov '(model fieldname obj 
val) a3) (jcall #:llcp:cbinds) 1001 (push (cvalq model)) (push nil) (mov '2 a4
) (mov (@ 1001) a2) (mov '(modelname field) a3) (jcall #:llcp:cbindl) (push (@
1004)) (push (cvalq model)) (mov '1 a4) (jmp plink) 1004 (bfnil a1 1002) (push
'oputq) (push '"Not a model name") (push (@ 1005)) (push (cvalq modelname)) (
push (cvalq fieldname)) (mov '2 a4) (jmp list) 1005 (mov a1 a3) (pop a2) (pop 
a1) (jcall syserror) (bra 1003) 1002 (push (@ 1006)) (push (@ 1007)) (push (
cvalq model)) (mov '1 a4) (jmp plink) 1007 (push a1) (mov '1 a4) (jmp objval) 
1006 (mov a1 (cvalq model)) 1003 (bfnil (cvalq model) 1008) (mov 'oputq a1) (
mov '"Not a Model name" a2) (mov (cvalq modelname) a3) (jcall syserror) (bra 
1009) 1008 (mov nil a1) 1009 (push (@ 1010)) (push 'find-field) (push (cvalq 
model)) (push (cvalq fieldname)) (mov '3 a4) (jmp send) 1010 (mov a1 (cvalq 
field)) (bfnil a1 1011) (push 'oputq) (push '"Not a field") (push (@ 1013)) (
push (cvalq modelname)) (push (cvalq fieldname)) (mov '2 a4) (jmp list) 1013 (
mov a1 a3) (pop a2) (pop a1) (jmp syserror) 1011 (push (@ 1014)) (push a1) (
mov '1 a4) (jmp #:Model:Field:access) 1014 (mov (cvalq obj) a2) (mov (cvalq 
val) a3) (jmp #:Ceyx:system:make-put-function) (return)) ())
(loader '((fentry oput nsubr) (mov (@ oput) a2) (mov '(modelname fieldname obj
val) a3) (jcall #:llcp:cbindn) (push (@ 1001)) (push 'oputq) (push (cvalq 
modelname)) (push (cvalq fieldname)) (push (@ 1002)) (push 'quote) (push (
cvalq obj)) (mov '2 a4) (jmp list) 1002 (push a1) (push (@ 1003)) (push 'quote
) (push (cvalq val)) (mov '2 a4) (jmp list) 1003 (push a1) (mov '5 a4) (jmp 
list) 1001 (push a1) (mov '1 a4) (jmp eval)) ())
(loader '((fentry omatchq dmsubr) (mov (@ omatchq) a2) (mov '(modelname obj) 
a3) (jcall #:llcp:cbinds) (push (@ 1003)) (push (cvalq modelname)) (mov '1 a4)
(jmp plink) 1003 (bfnil a1 1001) (mov 'omatchq a1) (mov '"Not a model name" a2
) (mov (cvalq modelname) a3) (jmp syserror) 1001 (push (@ 1006)) (push (@ 1007
)) (push (cvalq modelname)) (mov '1 a4) (jmp plink) 1007 (push a1) (mov '1 a4)
(jmp objval) 1006 (bfnil a1 1004) (mov 'omatchq a1) (mov '"Not a Model name" 
a2) (mov (cvalq modelname) a3) (jcall syserror) (bra 1005) 1004 (mov nil a1) 
1005 (push 'send) (push ''match) (push (@ 1008)) (push 'objval) (push (@ 1009)
) (push 'quote) (push (@ 1010)) (push (cvalq modelname)) (mov '1 a4) (jmp 
plink) 1010 (push a1) (mov '2 a4) (jmp list) 1009 (push a1) (mov '2 a4) (jmp 
list) 1008 (push a1) (push (cvalq obj)) (mov '4 a4) (jmp list)) ())
(loader '((fentry omatch subr2) (mov (@ omatch) a4) (mov '(modelname obj) a3) 
(jcall #:llcp:cbind2) (push (@ 1003)) (push a1) (mov '1 a4) (jmp plink) 1003 (
bfnil a1 1001) (mov 'omatch a1) (mov '"Not a model name" a2) (mov (cvalq 
modelname) a3) (jmp syserror) 1001 (push 'match) (push (@ 1004)) (push (@ 1005
)) (push (cvalq modelname)) (mov '1 a4) (jmp plink) 1005 (push a1) (mov '1 a4)
(jmp objval) 1004 (push a1) (push (cvalq obj)) (mov '3 a4) (jmp send)) ())
'compile
(defabbrev #:Model:Macro:Or #:Model:Or)
(#:Ceyx:system:put-model-keyword 'Or '#:Model:Macro:Or)
(loader '((fentry #:Model:Macro:Or:parse-model subr1) (mov (@ #:Model:Macro:
Or:parse-model) a4) (mov '(expr) a3) (jcall #:llcp:cbind1) (push '#:Model:Or) 
1001 (push (@ 1002)) (push (cdr a1)) (mov '1 a4) (mov (@ 1001) a2) (mov '(#:
system:map:arg0) a3) (jcall #:llcp:cbindl) 1003 (push nil) (mov '1 a4) (mov (@
1003) a2) (mov '(#:system:map:r) a3) (jcall #:llcp:cbindl) (bra 1005) 1004 (
mov (cvalq #:system:map:arg0) a1) (car a1) (push a1) (mov (cvalq #:system:map:
arg0) a1) (cdr a1) (mov a1 (cvalq #:system:map:arg0)) (pop a1) (jcall #:Ceyx:
system:parse-model) (mov (cvalq #:system:map:r) a2) (jcall cons) (mov a1 (
cvalq #:system:map:r)) 1005 (btcons (cvalq #:system:map:arg0) 1004) 1006 (mov 
(cvalq #:system:map:r) a1) (jmp nreverse) (return) 1002 (push a1) (mov '2 a4) 
(jmp apply)) ())
(loader '((fentry #:Model:Or nsubr) (mov (@ #:Model:Or) a2) (mov 'lmodel a3) (
jcall #:llcp:cbindn) (push '#:Model:Macro:Or) (bfnil (cvalq lmodel) 1003) (mov
'Or a1) (mov '"At least one component for Or" a2) (mov nil a3) (jcall syserror
) (bra 1004) 1003 1005 (push (@ 1006)) (mov (cvalq lmodel) a1) (car a1) (push 
a1) (mov (cvalq lmodel) a1) (car a1) (push a1) (mov '2 a4) (mov (@ 1005) a2) (
mov '(model model1) a3) (jcall #:llcp:cbindl) (push (@ 1018)) (push 'lambda) (
push '(x)) (push 'or) 1019 (push (@ 1020)) (push nil) (mov '1 a4) (mov (@ 1019
) a2) (mov '(expansion) a3) (jcall #:llcp:cbindl) (bra 1022) 1021 (mov (cvalq 
lmodel) a1) (car a1) (bfsymb a1 1023) (push (@ 1025)) (push 'objval) (push (@ 
1026)) (push 'quote) (mov (cvalq lmodel) a1) (car a1) (push a1) (mov (cvalq 
lmodel) a1) (cdr a1) (mov a1 (cvalq lmodel)) (pop a1) (push a1) (mov '2 a4) (
jmp list) 1026 (push a1) (mov '2 a4) (jmp list) 1025 (bra 1024) 1023 (push (@ 
1027)) (push 'quote) (mov (cvalq lmodel) a1) (car a1) (push a1) (mov (cvalq 
lmodel) a1) (cdr a1) (mov a1 (cvalq lmodel)) (pop a1) (push a1) (mov '2 a4) (
jmp list) 1027 1024 (mov a1 (cvalq model)) (push (@ 1028)) (push 'send) (push 
''match) (push a1) (push '(x)) (mov '4 a4) (jmp mcons) 1028 (mov (cvalq 
expansion) a2) (jcall cons) (mov a1 (cvalq expansion)) 1022 (bfnil (cvalq 
lmodel) 1021) (mov (cvalq expansion) a1) (jmp nreverse) 1020 (mov a1 a2) (pop 
a1) (jcall cons) (push a1) (mov '3 a4) (jmp list) 1018 (push a1) (push (@ 1029
)) (bfsymb (cvalq model1) 1030) (push (@ 1032)) (push (cvalq model1)) (mov '1 
a4) (jmp objval) 1032 (bra 1031) 1030 (mov (cvalq model1) a1) 1031 (push a1) (
mov '1 a4) (jmp #:Model:init) 1029 (mov a1 a2) (pop a1) (jmp #:Model:Predicate
) 1006 1004 (mov a1 a2) (pop a1) (jmp #:Model:Macro)) ())
(loader '((fentry ochangeq dmsubr) (mov (@ ochangeq) a2) (mov '(objname obj . 
setq-list) a3) (jcall #:llcp:cbinds) 1001 (push nil) (bfsymb (cvalq obj) 1002)
(mov (cvalq obj) a1) (bra 1003) 1002 (jcall gensym) 1003 (push a1) (mov '2 a4)
(mov (@ 1001) a2) (mov '(oputq-list inst) a3) (jcall #:llcp:cbindl) (bra 1005)
1004 (push (@ 1006)) (push 'oputq) (push (cvalq objname)) (mov (cvalq 
setq-list) a1) (car a1) (push a1) (mov (cvalq setq-list) a1) (cdr a1) (mov a1 
(cvalq setq-list)) (pop a1) (push a1) (push (cvalq inst)) (mov (cvalq 
setq-list) a1) (car a1) (push a1) (mov (cvalq setq-list) a1) (cdr a1) (mov a1 
(cvalq setq-list)) (pop a1) (push a1) (mov '5 a4) (jmp list) 1006 (mov (cvalq 
oputq-list) a2) (jcall cons) (mov a1 (cvalq oputq-list)) 1005 (bfnil (cvalq 
setq-list) 1004) (push 'let) (push (@ 1007)) (push (@ 1008)) (push (cvalq inst
)) (push (cvalq obj)) (mov '2 a4) (jmp list) 1008 (push a1) (mov '1 a4) (jmp 
list) 1007 (push a1) (push (@ 1009)) (mov (cvalq oputq-list) a1) (jcall 
nreverse) (push a1) (push (@ 1010)) (push (cvalq inst)) (mov '1 a4) (jmp list)
1010 (push a1) (mov '2 a4) (jmp append) 1009 (push a1) (mov '3 a4) (jmp mcons)
(return)) ())
(loader '((fentry ofunq dmsubr) (mov (@ ofunq) a2) (mov '(model field obj fun 
. args) a3) (jcall #:llcp:cbinds) 1001 (bfsymb (cvalq obj) 1002) (mov (cvalq 
obj) a1) (bra 1003) 1002 (jcall gensym) 1003 (push a1) (mov '1 a4) (mov (@ 
1001) a2) (mov '(inst) a3) (jcall #:llcp:cbindl) (push 'let) (push (@ 1004)) (
push (@ 1005)) (push (cvalq inst)) (push (cvalq obj)) (mov '2 a4) (jmp list) 
1005 (push a1) (mov '1 a4) (jmp list) 1004 (push a1) (push (@ 1006)) (push '
oputq) (push (cvalq model)) (push (cvalq field)) (push (cvalq inst)) (push (@ 
1007)) (push (cvalq fun)) (push (@ 1008)) (push 'ogetq) (push (cvalq model)) (
push (cvalq field)) (push (cvalq inst)) (mov '4 a4) (jmp list) 1008 (push a1) 
(push (cvalq args)) (mov '3 a4) (jmp mcons) 1007 (push a1) (mov '5 a4) (jmp 
list) 1006 (push a1) (push (cvalq inst)) (mov '4 a4) (jmp list) (return)) ())
(loader '((fentry oconsq dmsubr) (mov (@ oconsq) a2) (mov '(model field obj 
val) a3) (jcall #:llcp:cbinds) (push 'ofunq) (push (cvalq model)) (push (cvalq
field)) (push (cvalq obj)) (push 'xcons) (push (cvalq val)) (mov '6 a4) (jmp 
list)) ())
(loader '((fentry olet dmsubr) (mov (@ olet) a2) (mov '((type lfields instance
) . body) a3) (jcall #:llcp:cbinds) 1001 (push (@ 1002)) (push (cvalq lfields)
) (mov '1 a4) (mov (@ 1001) a2) (mov '(#:system:map:arg0) a3) (jcall #:llcp:
cbindl) 1003 (push nil) (mov '1 a4) (mov (@ 1003) a2) (mov '(#:system:map:r) 
a3) (jcall #:llcp:cbindl) (bra 1005) 1004 1006 (push (@ 1007)) (mov (cvalq #:
system:map:arg0) a1) (car a1) (push a1) (mov (cvalq #:system:map:arg0) a1) (
cdr a1) (mov a1 (cvalq #:system:map:arg0)) (pop a1) (push a1) (mov '1 a4) (mov
(@ 1006) a2) (mov '(x) a3) (jcall #:llcp:cbindl) (bfsymb (cvalq x) 1008) (push
(cvalq x)) (push (cvalq x)) (mov '2 a4) (jmp list) 1008 (mov (cvalq x) a1) (
return) 1007 (mov (cvalq #:system:map:r) a2) (jcall cons) (mov a1 (cvalq #:
system:map:r)) 1005 (btcons (cvalq #:system:map:arg0) 1004) 1010 (mov (cvalq 
#:system:map:r) a1) (jmp nreverse) (return) 1002 (mov a1 (cvalq lfields)) (
bfsymb (cvalq instance) 1011) 1013 (push nil) (mov '1 a4) (mov (@ 1013) a2) (
mov '(let-list) a3) (jcall #:llcp:cbindl) (bra 1015) 1014 (push (@ 1016)) (mov
(cvalq lfields) a1) (car a1) (cdr a1) (car a1) (push a1) (push (@ 1017)) (push
'ogetq) (push (cvalq type)) (mov (cvalq lfields) a1) (car a1) (car a1) (push 
a1) (push (cvalq instance)) (mov '4 a4) (jmp list) 1017 (push a1) (mov '2 a4) 
(jmp list) 1016 (mov (cvalq let-list) a2) (jcall cons) (mov a1 (cvalq let-list
)) (mov (cvalq lfields) a1) (car a1) (push a1) (mov (cvalq lfields) a1) (cdr 
a1) (mov a1 (cvalq lfields)) (pop a1) 1015 (bfnil (cvalq lfields) 1014) (push 
'let) (mov (cvalq let-list) a1) (jcall nreverse) (push a1) (push (cvalq body))
(mov '3 a4) (jmp mcons) (return) 1011 1018 (push nil) (jcall gensym) (push a1)
(mov '2 a4) (mov (@ 1018) a2) (mov '(let-list inst) a3) (jcall #:llcp:cbindl) 
(bra 1020) 1019 (push (@ 1021)) (mov (cvalq lfields) a1) (car a1) (cdr a1) (
car a1) (push a1) (push (@ 1022)) (push 'ogetq) (push (cvalq type)) (mov (
cvalq lfields) a1) (car a1) (car a1) (push a1) (push (cvalq inst)) (mov '4 a4)
(jmp list) 1022 (push a1) (mov '2 a4) (jmp list) 1021 (mov (cvalq let-list) a2
) (jcall cons) (mov a1 (cvalq let-list)) (mov (cvalq lfields) a1) (car a1) (
push a1) (mov (cvalq lfields) a1) (cdr a1) (mov a1 (cvalq lfields)) (pop a1) 
1020 (bfnil (cvalq lfields) 1019) (push 'let) (push (@ 1023)) (push (@ 1024)) 
(push (cvalq inst)) (push (cvalq instance)) (mov '2 a4) (jmp list) 1024 (push 
a1) (mov '1 a4) (jmp list) 1023 (push a1) (push (@ 1025)) (push 'let) (mov (
cvalq let-list) a1) (jcall nreverse) (push a1) (push (cvalq body)) (mov '3 a4)
(jmp mcons) 1025 (push a1) (mov '3 a4) (jmp list) (return)) ())
(loader '((fentry dem dmsubr) (mov (@ dem) a2) (mov '(name args dargs . body) 
a3) (jcall #:llcp:cbinds) (push 'de) (push (cvalq name)) (push (cvalq args)) (
push (@ 1001)) (push 'olet) (push (@ 1002)) (push (@ 1003)) (push (cvalq name)
) (mov '1 a4) (jmp packagecell) 1003 (push a1) (push (cvalq dargs)) (mov (
cvalq args) a1) (car a1) (push a1) (mov '3 a4) (jmp list) 1002 (push a1) (push
(cvalq body)) (mov '3 a4) (jmp mcons) 1001 (push a1) (mov '4 a4) (jmp list)) (
))
(synonym 'demethod 'dem)
(loader '((fentry bitfield dmsubr) (mov (@ bitfield) a2) (mov '(instance 
position size . value) a3) (jcall #:llcp:cbinds) (bfcons (cvalq value) 1001) (
push 'deposit-byte) (push (cvalq instance)) (push (cvalq position)) (push (
cvalq size)) (mov (cvalq value) a1) (car a1) (push a1) (mov '5 a4) (jmp list) 
1001 (push 'load-byte) (push (cvalq instance)) (push (cvalq position)) (push (
cvalq size)) (mov '4 a4) (jmp list)) ())
(loader '((fentry bitfieldbool dmsubr) (mov (@ bitfieldbool) a2) (mov '(
instance position size . value) a3) (jcall #:llcp:cbinds) (btnil (cvalq value)
1001) (push 'bitfield) (push (cvalq instance)) (push (cvalq position)) (push (
cvalq size)) (push (@ 1003)) (push 'if) (mov (cvalq value) a1) (car a1) (push 
a1) (push '(1 0)) (mov '3 a4) (jmp mcons) 1003 (push a1) (mov '5 a4) (jmp list
) 1001 (push '<>) (push '0) (push (@ 1004)) (push 'bitfield) (push (cvalq 
instance)) (push (cvalq position)) (push (cvalq size)) (mov '4 a4) (jmp list) 
1004 (push a1) (mov '3 a4) (jmp list)) ())
(loader '((fentry defbits dmsubr) (mov (@ defbits) a2) (mov '(bitaccess access
position size) a3) (jcall #:llcp:cbinds) 1001 (push 'bitfield) (mov '1 a4) (
mov (@ 1001) a2) (mov '(bitfield) a3) (jcall #:llcp:cbindl) (cabne (cvalq size
) 'boolean 1002) (mov 'bitfieldbool a1) (mov a1 (cvalq bitfield)) (mov '1 a1) 
(mov a1 (cvalq size)) (bra 1003) 1002 (mov nil a1) 1003 (mov (cvalq size) a1) 
(jcall numberp) (btnil a1 1006) (mov (cvalq position) a1) (jcall numberp) (
bfnil a1 1004) 1006 (mov 'defbits a1) (mov '"syntax" a2) (mov '
"(defbits <bitaccess> <access> <position> <size>)" a3) (jcall syserror) (bra 
1005) 1004 (mov nil a1) 1005 (push 'defmacro) (push (cvalq bitaccess)) (push '
(instance . value)) (push (@ 1007)) (push 'if) (push 'value) (push (@ 1008)) (
push 'if) (push '(symbolp instance)) (push (@ 1009)) (push 'list) (push (@ 
1010)) (push 'quote) (push (cvalq access)) (mov '2 a4) (jmp list) 1010 (push 
a1) (push 'instance) (push (@ 1011)) (push 'list) (push (@ 1012)) (push 'quote
) (push (cvalq bitfield)) (mov '2 a4) (jmp list) 1012 (push a1) (push (@ 1013)
) (push 'list) (push (@ 1014)) (push 'quote) (push (cvalq access)) (mov '2 a4)
(jmp list) 1014 (push a1) (push '(instance)) (mov '3 a4) (jmp mcons) 1013 (
push a1) (push (cvalq position)) (push (cvalq size)) (push '((car value))) (
mov '6 a4) (jmp mcons) 1011 (push a1) (mov '4 a4) (jmp list) 1009 (push a1) (
push (@ 1015)) (push 'list) (push ''let) (push '(list (list 'instance instance
))) (push (@ 1016)) (push 'list) (push (@ 1017)) (push 'quote) (push (cvalq 
access)) (mov '2 a4) (jmp list) 1017 (push a1) (push ''instance) (push (@ 1018
)) (push 'list) (push (@ 1019)) (push 'quote) (push (cvalq bitfield)) (mov '2 
a4) (jmp list) 1019 (push a1) (push (@ 1020)) (push 'quote) (mov (cvalq access
) a1) (mov '(instance) a2) (jcall cons) (push a1) (mov '2 a4) (jmp list) 1020 
(push a1) (push (cvalq position)) (push (cvalq size)) (push '((car value))) (
mov '6 a4) (jmp mcons) 1018 (push a1) (mov '4 a4) (jmp list) 1016 (push a1) (
mov '4 a4) (jmp list) 1015 (push a1) (mov '4 a4) (jmp list) 1008 (push a1) (
push (@ 1021)) (push 'list) (push (@ 1022)) (push 'quote) (push (cvalq 
bitfield)) (mov '2 a4) (jmp list) 1022 (push a1) (push (@ 1023)) (push 'list) 
(push (@ 1024)) (push 'quote) (push (cvalq access)) (mov '2 a4) (jmp list) 
1024 (push a1) (push '(instance)) (mov '3 a4) (jmp mcons) 1023 (push a1) (push
(cvalq position)) (push (cvalq size)) (mov '5 a4) (jmp list) 1021 (push a1) (
mov '4 a4) (jmp list) 1007 (push a1) (mov '4 a4) (jmp list) (return)) ())
(loader '((fentry sendq dmsubr) (mov (@ sendq) a2) (mov '(msg . l) a3) (jcall 
#:llcp:cbinds) (push 'send) (push (@ 1001)) (push 'quote) (push (cvalq msg)) (
mov '2 a4) (jmp list) 1001 (push a1) (push (cvalq l)) (mov '3 a4) (jmp mcons))
())
(loader '((fentry sendf dmsubr) (mov (@ sendf) a2) (mov '(func . args) a3) (
jcall #:llcp:cbinds) 1001 (jcall gensym) (push a1) (mov '1 a4) (mov (@ 1001) 
a2) (mov '(gensym) a3) (jcall #:llcp:cbindl) (push 'lambda) (push (@ 1002)) (
push (cvalq gensym)) (mov '1 a4) (jmp list) 1002 (push a1) (push (@ 1003)) (
push 'send) (push (cvalq func)) (push (cvalq gensym)) (push (cvalq args)) (mov
'4 a4) (jmp mcons) 1003 (push a1) (mov '3 a4) (jmp list) (return)) ())
(loader '((fentry sendfq dmsubr) (mov (@ sendfq) a2) (mov '(func . args) a3) (
jcall #:llcp:cbinds) (push 'sendf) (push (@ 1001)) (push 'quote) (push (cvalq 
func)) (mov '2 a4) (jmp list) 1001 (push a1) (push (cvalq args)) (mov '3 a4) (
jmp mcons)) ())
(synonym 'deflmodel 'defmodel)
(synonym 'deftmodel 'deftype)
(synonym 'deflrecord 'defrecord)
(synonym 'deflclass 'defclass)
(synonym 'mlink 'plink)
(loader '((fentry msymbol subr2) (mov (@ msymbol) a4) (mov '(a b) a3) (jcall 
#:llcp:cbind2) (push (@ 1001)) (push a1) (mov '1 a4) (jmp plink) 1001 (mov (
cvalq b) a2) (jmp symbol)) ())
(loader '((end)))
(loader '((fentry cxcp fsubr) (mov (@ cxcp) a2) (mov 'args a3) (jcall #:llcp:
cbinds) 1001 (mov (cvalq args) a1) (car a1) (push a1) (mov (cvalq args) a1) (
cdr a1) (push a1) (mov '2 a4) (mov (@ 1001) a2) (mov '(arg1 rest) a3) (jcall 
#:llcp:cbindl) (btnil (cvalq arg1) 1004) (cabne (cvalq arg1) (cvalq t) 1002) 
1004 (mov '#:cxcp:compilable a1) (jcall maploblist) (mov a1 (cvalq arg1)) (mov
(cvalq t) a1) (mov (cvalq rest) a2) (jcall cons) (mov a1 (cvalq rest)) (bra 
1003) 1002 (mov nil a1) 1003 (btnil (cvalq arg1) 1005) (bfsymb (cvalq arg1) 
1005) (push (@ 1007)) (push (cvalq arg1)) (mov '1 a4) (jmp list) 1007 (mov a1 
(cvalq arg1)) (bra 1006) 1005 (mov nil a1) 1006 (btnil (cvalq arg1) 1008) (
push (@ 1010)) (push (cvalq arg1)) (mov (cvalq rest) a1) (car a1) (push a1) (
mov (cvalq rest) a1) (cdr a1) (car a1) (push a1) (mov (cvalq rest) a1) (cdr a1
) (cdr a1) (car a1) (push a1) (mov '4 a4) (jmp #:cxcp:compiler) 1010 (bra 1009
) 1008 (mov nil a1) 1009 (btnil (cvalq args) 1013) (mov (cvalq args) a1) (car 
a1) (mov (cvalq t) a2) (cabne a1 a2 1011) 1013 (mov '0 a4) (jmp 
compile-all-in-core) 1011 (mov nil a1) (return) (return)) ())
(defvar #:cxcp:ecxcp 5)
(loader '((fentry ecxcp fsubr) (mov (@ ecxcp) a2) (mov '(exp . args) a3) (
jcall #:llcp:cbinds) 1001 (mov 'send a1) (jcall typefn) (push a1) (mov 'send 
a1) (jcall valfn) (push a1) (push (cvalq t)) (mov '3 a4) (mov (@ 1001) a2) (
mov '(oldtype oldval #:system:redef-flag) a3) (jcall #:llcp:cbindl) (mov '#:
cxcp:send a1) (mov (cvalq oldtype) a2) (mov (cvalq oldval) a3) (jcall setfn) (
mov '(send (sem arg1 . args) (if (and (consp sem) (eq (car sem) 'quote)) (
mcons '#:cxcp:sendcase ''(()) sem arg1 args) (mcons '#:cxcp:send sem arg1 args
))) a1) (jcall dmd) (mov '(#:cxcp:sendcase (ltypes sem . args) (let ((type (
tcar (car args)))) (rplacd ltypes (cons type (if (memq type (cdr ltypes)) (
delq type (cdr ltypes)) (cdr ltypes)))) (apply (getfn type sem '()) args))) a1
) (jcall de) (push (@ 1002)) (push (cvalq exp)) (mov '1 a4) (jmp eval) 1002 (
mov 'send a1) (mov (cvalq oldtype) a2) (mov (cvalq oldval) a3) (jcall setfn) (
mov '(#:cxcp:sendcase (ltypes sem arg1 . args) (cond ((> (length (cadr ltypes)
) #:cxcp:ecxcp) (mcons 'send sem arg1 args)) ((#:cxcp:danger arg1) (let ((gen 
(gensym))) (list 'let (list (list gen arg1)) (mcons '#:cxcp:sendcase ltypes 
sem gen args)))) (t (let ((al)) (mapc (lambda (type) (let ((x (getfn type (
cadr sem) '())) (y)) (setq y (assq x al)) (if y (rplacd y (nconc1 (cdr y) type
)) (setq al (nconc1 al (cons x (list type))))))) (cdadr ltypes)) (mcons '
selectq (list 'car arg1) (append (mapcar (lambda (paire) (list (cdr paire) (
mcons (car paire) arg1 args))) al) (list (list 't (mcons 'send sem arg1 args))
))))))) a1) (jcall dmd) (push (@ 1003)) (mov (cvalq args) a2) (mov 'cxcp a1) (
jcall cons) (push a1) (mov '1 a4) (jmp eval) 1003 (push a1) (mov '(#:cxcp:
sendcase (ltypes sem arg1 . args) (mcons 'send sem arg1 args)) a1) (jcall dmd)
(pop a1) (return) (return)) ())
(loader '((fentry #:cxcp:compilable subr1) (mov (@ #:cxcp:compilable) a4) (mov
'(x) a3) (jcall #:llcp:cbind1) (mov 'dont-compile a2) (jcall getprop) (jcall 
not) (btnil a1 1001) (mov (cvalq x) a1) (jcall typefn) (mov '(expr fexpr macro
dmacro) a2) (jmp memq) 1001 (return)) ())
(defvar #:cxcp:debug ())
(loader '((fentry cxcp-package fsubr) (mov (@ cxcp-package) a2) (mov '(arg1 . 
rest) a3) (jcall #:llcp:cbinds) (bfsymb (cvalq arg1) 1001) (push (@ 1003)) (
push (cvalq arg1)) (mov '1 a4) (jmp list) 1003 (mov a1 (cvalq arg1)) (bra 1002
) 1001 (mov nil a1) 1002 1004 (push nil) (mov '1 a4) (mov (@ 1004) a2) (mov '(
lpacks) a3) (jcall #:llcp:cbindl) 1005 (push (@ 1006)) (push nil) (push (cvalq
arg1)) (mov '2 a4) (mov (@ 1005) a2) (mov '(x *foreach*) a3) (jcall #:llcp:
cbindl) (bra 1008) 1007 (mov (cvalq *foreach*) a1) (car a1) (push a1) (mov (
cvalq *foreach*) a1) (cdr a1) (mov a1 (cvalq *foreach*)) (pop a1) (mov a1 (
cvalq x)) (push (@ 1009)) (push '(mlink x)) (mov '1 a4) (jmp eval) 1009 (mov (
cvalq lpacks) a2) (jcall cons) (mov a1 (cvalq lpacks)) 1008 (bfnil (cvalq 
*foreach*) 1007) (mov nil a1) (return) 1006 (mov 'cxcp-package-lambda-g128 a1)
(jcall maploblist) (push a1) (mov (cvalq rest) a1) (car a1) (push a1) (mov (
cvalq rest) a1) (cdr a1) (car a1) (push a1) (mov (cvalq rest) a1) (cdr a1) (
cdr a1) (car a1) (push a1) (mov '4 a4) (jmp #:cxcp:compiler) (return)) ())
(loader '((fentry cxcp-package-lambda-g128 subr1) (mov (@ 
cxcp-package-lambda-g128) a4) (mov '(x) a3) (jcall #:llcp:cbind1) (jcall #:
cxcp:compilable) (btnil a1 1001) (mov (cvalq x) a1) (mov (cvalq lpacks) a2) (
jmp #:cxcp:in-packs) 1001 (return)) ())
(loader '((fentry #:cxcp:in-packs subr2) (mov (@ #:cxcp:in-packs) a4) (mov '(x
lpacks) a3) (jcall #:llcp:cbind2) (mov '() a2) (jcall eq) (jcall not) (btnil 
a1 1001) (mov (cvalq x) a1) (mov (cvalq lpacks) a2) (jcall memq) (bfnil a1 
1002) (push (@ 1003)) (push (cvalq x)) (mov '1 a4) (jmp packagecell) 1003 (mov
(cvalq lpacks) a2) (jmp #:cxcp:in-packs) 1002 1001 (return)) ())
(loader '((fentry cxcp-inline fsubr) (mov (@ cxcp-inline) a2) (mov 'args a3) (
jcall #:llcp:cbinds) 1001 (push nil) (push (cvalq args)) (mov '2 a4) (mov (@ 
1001) a2) (mov '(arg *foreach*) a3) (jcall #:llcp:cbindl) (bra 1003) 1002 (mov
(cvalq *foreach*) a1) (car a1) (push a1) (mov (cvalq *foreach*) a1) (cdr a1) (
mov a1 (cvalq *foreach*)) (pop a1) (mov a1 (cvalq arg)) (bfsymb a1 1004) (mov 
nil a2) (jcall #:Ceyx:cxcp-inline) (bra 1005) 1004 (mov (car a1) a1) (mov (
cvalq arg) a2) (cdr a2) (jcall #:Ceyx:cxcp-inline) 1005 1003 (bfnil (cvalq 
*foreach*) 1002) (mov nil a1) (return) (return)) ())
(loader '((fentry foreach dmsubr) (mov (@ foreach) a2) (mov '(x liste . body) 
a3) (jcall #:llcp:cbinds) (push 'let) (push (@ 1001)) (push (@ 1002)) (push (
cvalq x)) (mov '1 a4) (jmp list) 1002 (push a1) (push (@ 1003)) (push '
*foreach*) (push (cvalq liste)) (mov '2 a4) (jmp list) 1003 (push a1) (mov '2 
a4) (jmp list) 1001 (push a1) (push (@ 1004)) (push 'while) (push '*foreach*) 
(push (@ 1005)) (push 'setq) (push (cvalq x)) (push '((nextl *foreach*))) (mov
'3 a4) (jmp mcons) 1005 (push a1) (push (cvalq body)) (mov '4 a4) (jmp mcons) 
1004 (push a1) (mov '3 a4) (jmp list)) ())
(loader '((fentry #:cxcp:compiler nsubr) (mov (@ #:cxcp:compiler) a2) (mov '(l
ind1 ind2 ind3) a3) (jcall #:llcp:cbindn) 1001 (mov 'send a1) (jcall valfn) (
push a1) (mov 'send a1) (jcall typefn) (push a1) (mov '2 a4) (mov (@ 1001) a2)
(mov '(oldval oldtype) a3) (jcall #:llcp:cbindl) 1002 (push (@ 1003)) (push 
nil) (push (cvalq #:Ceyx:cxcp-access)) (mov '2 a4) (mov (@ 1002) a2) (mov '(
pair *foreach*) a3) (jcall #:llcp:cbindl) (bra 1005) 1004 (mov (cvalq 
*foreach*) a1) (car a1) (push a1) (mov (cvalq *foreach*) a1) (cdr a1) (mov a1 
(cvalq *foreach*)) (pop a1) (mov a1 (cvalq pair)) (mov (car a1) a1) (mov (
cvalq l) a2) (jcall delq) 1005 (bfnil (cvalq *foreach*) 1004) (mov nil a1) (
return) 1003 1006 (push (@ 1007)) (push nil) (push (cvalq #:Ceyx:cxcp-inline))
(mov '2 a4) (mov (@ 1006) a2) (mov '(pair *foreach*) a3) (jcall #:llcp:cbindl)
(bra 1009) 1008 (mov (cvalq *foreach*) a1) (car a1) (push a1) (mov (cvalq 
*foreach*) a1) (cdr a1) (mov a1 (cvalq *foreach*)) (pop a1) (mov a1 (cvalq 
pair)) (mov (car a1) a1) (mov (cvalq l) a2) (jcall delq) 1009 (bfnil (cvalq 
*foreach*) 1008) (mov nil a1) (return) 1007 1010 (push (@ 1011)) (push (cvalq 
#:Ceyx:cxcp-access)) (mov '1 a4) (mov (@ 1010) a2) (mov '(#:system:map:arg0) 
a3) (jcall #:llcp:cbindl) (bra 1013) 1012 1014 (push (@ 1015)) (mov (cvalq #:
system:map:arg0) a1) (car a1) (push a1) (mov (cvalq #:system:map:arg0) a1) (
cdr a1) (mov a1 (cvalq #:system:map:arg0)) (pop a1) (push a1) (mov '1 a4) (mov
(@ 1014) a2) (mov '(pair) a3) (jcall #:llcp:cbindl) (mov (cvalq pair) a1) (car
a1) (mov (cvalq pair) a2) (cdr a2) (jmp #:cxcp:make-access-macro) 1015 1013 (
btcons (cvalq #:system:map:arg0) 1012) 1016 (mov nil a1) (return) 1011 1017 (
push (@ 1018)) (push (cvalq #:Ceyx:cxcp-inline)) (mov '1 a4) (mov (@ 1017) a2)
(mov '(#:system:map:arg0) a3) (jcall #:llcp:cbindl) (bra 1020) 1019 1021 (push
(@ 1022)) (mov (cvalq #:system:map:arg0) a1) (car a1) (push a1) (mov (cvalq #:
system:map:arg0) a1) (cdr a1) (mov a1 (cvalq #:system:map:arg0)) (pop a1) (
push a1) (mov '1 a4) (mov (@ 1021) a2) (mov '(pair) a3) (jcall #:llcp:cbindl) 
(mov (cvalq pair) a1) (car a1) (jcall typefn) (mov 'expr a2) (cabne a1 a2 1023
) (mov (cvalq pair) a1) (car a1) (mov (cvalq pair) a2) (cdr a2) (jmp #:cxcp:
make-inline-macro) 1023 (mov nil a1) (return) 1022 1020 (btcons (cvalq #:
system:map:arg0) 1019) 1025 (mov nil a1) (return) 1018 (mov (@ 1026) a3) (
jcall #:llcp:prot) (pop a1) (push a3) (push a1) (push a2) (bfnil (cvalq #:
cxcp:debug) 1027) 1029 (push (@ 1030)) 1032 (push (@ 1033)) (push (cvalq #:
Ceyx:cxcp-access)) (mov '1 a4) (mov (@ 1032) a2) (mov '(#:system:map:arg0) a3)
(jcall #:llcp:cbindl) 1034 (push nil) (mov '1 a4) (mov (@ 1034) a2) (mov '(#:
system:map:r) a3) (jcall #:llcp:cbindl) (bra 1036) 1035 (mov (cvalq #:system:
map:arg0) a1) (car a1) (push a1) (mov (cvalq #:system:map:arg0) a1) (cdr a1) (
mov a1 (cvalq #:system:map:arg0)) (pop a1) (car a1) (mov (cvalq #:system:map:r
) a2) (jcall cons) (mov a1 (cvalq #:system:map:r)) 1036 (btcons (cvalq #:
system:map:arg0) 1035) 1037 (mov (cvalq #:system:map:r) a1) (jmp nreverse) (
return) 1033 (bfnil a1 1031) 1038 (push (@ 1039)) (push (cvalq #:Ceyx:
cxcp-inline)) (mov '1 a4) (mov (@ 1038) a2) (mov '(#:system:map:arg0) a3) (
jcall #:llcp:cbindl) 1040 (push nil) (mov '1 a4) (mov (@ 1040) a2) (mov '(#:
system:map:r) a3) (jcall #:llcp:cbindl) (bra 1042) 1041 (mov (cvalq #:system:
map:arg0) a1) (car a1) (push a1) (mov (cvalq #:system:map:arg0) a1) (cdr a1) (
mov a1 (cvalq #:system:map:arg0)) (pop a1) (car a1) (mov (cvalq #:system:map:r
) a2) (jcall cons) (mov a1 (cvalq #:system:map:r)) 1042 (btcons (cvalq #:
system:map:arg0) 1041) 1043 (mov (cvalq #:system:map:r) a1) (jmp nreverse) (
return) 1039 1031 (push a1) (mov '1 a4) (mov (@ 1029) a2) (mov '(#:system:map:
arg0) a3) (jcall #:llcp:cbindl) (bra 1045) 1044 1046 (push (@ 1047)) (mov (
cvalq #:system:map:arg0) a1) (car a1) (push a1) (mov (cvalq #:system:map:arg0)
a1) (cdr a1) (mov a1 (cvalq #:system:map:arg0)) (pop a1) (push a1) (mov '1 a4)
(mov (@ 1046) a2) (mov '(x) a3) (jcall #:llcp:cbindl) (mov (cvalq x) a1) (mov 
'macro-open a2) (jcall symbol) (jmp remob) 1047 1045 (btcons (cvalq #:system:
map:arg0) 1044) 1048 (mov nil a1) (return) 1030 (bra 1028) 1027 (mov nil a1) 
1028 (pop a2) (pop a1) (return) 1026 1049 (push (cvalq l)) (mov '1 a4) (mov (@
1049) a2) (mov '(#:system:map:arg0) a3) (jcall #:llcp:cbindl) (bra 1051) 1050 
1052 (push (@ 1053)) (mov (cvalq #:system:map:arg0) a1) (car a1) (push a1) (
mov (cvalq #:system:map:arg0) a1) (cdr a1) (mov a1 (cvalq #:system:map:arg0)) 
(pop a1) (push a1) (mov '1 a4) (mov (@ 1052) a2) (mov '(f) a3) (jcall #:llcp:
cbindl) (push (cvalq f)) (push (cvalq ind1)) (push (cvalq ind2)) (push (cvalq 
ind3)) (mov '4 a4) (jmp compiler) 1053 1051 (btcons (cvalq #:system:map:arg0) 
1050) 1054 (mov nil a1) (return) (return) (return)) ())
(loader '((fentry #:cxcp:make-access-macro subr2) (mov (@ #:cxcp:
make-access-macro) a4) (mov '(name access) a3) (jcall #:llcp:cbind2) (push a1)
(push (@ 1001)) (push '(inst . val)) (push (@ 1002)) (push 'if) (push '(consp 
val)) (mov a2 a1) (mov 'inst a2) (mov 'val a3) (jcall #:cxcp:make-put-function
) (push a1) (mov (cvalq access) a1) (mov 'inst a2) (jcall #:cxcp:
make-get-function) (push a1) (mov '4 a4) (jmp list) 1002 (push a1) (mov '2 a4)
(jmp list) 1001 (mov a1 a2) (pop a1) (jmp make-macro-open)) ())
(loader '((fentry #:cxcp:make-get-function subr2) (mov (@ #:cxcp:
make-get-function) a4) (mov '(access exp) a3) (jcall #:llcp:cbind2) (bfnil a1 
1001) (mov a2 a1) (return) 1001 (mov (car a1) a1) (jcall numberp) (btnil a1 
1003) (mov (cvalq access) a1) (cdr a1) (push a1) (push (@ 1005)) (push 'list) 
(push ''vref) (push (cvalq exp)) (mov (cvalq access) a1) (car a1) (push a1) (
mov '4 a4) (jmp list) 1005 (mov a1 a2) (pop a1) (jmp #:cxcp:make-get-function)
1003 (mov (cvalq access) a1) (car a1) (mov 'car a2) (cabne a1 a2 1006) (mov (
cvalq access) a1) (cdr a1) (push a1) (push (@ 1008)) (push 'list) (push ''car)
(push (cvalq exp)) (mov '3 a4) (jmp list) 1008 (mov a1 a2) (pop a1) (jmp #:
cxcp:make-get-function) 1006 (mov (cvalq access) a1) (car a1) (mov 'cdr a2) (
cabne a1 a2 1009) (mov (cvalq access) a1) (cdr a1) (push a1) (push (@ 1011)) (
push 'list) (push ''cdr) (push (cvalq exp)) (mov '3 a4) (jmp list) 1011 (mov 
a1 a2) (pop a1) (jmp #:cxcp:make-get-function) 1009 (mov (cvalq access) a1) (
car a1) (mov 'tcar a2) (cabne a1 a2 1012) (mov (cvalq access) a1) (cdr a1) (
push a1) (push (@ 1014)) (push 'list) (push ''tcar) (push (cvalq exp)) (mov '3
a4) (jmp list) 1014 (mov a1 a2) (pop a1) (jmp #:cxcp:make-get-function) 1012 (
mov (cvalq access) a1) (car a1) (mov 'tcdr a2) (cabne a1 a2 1015) (mov (cvalq 
access) a1) (cdr a1) (push a1) (push (@ 1017)) (push 'list) (push ''tcdr) (
push (cvalq exp)) (mov '3 a4) (jmp list) 1017 (mov a1 a2) (pop a1) (jmp #:
cxcp:make-get-function) 1015 (mov '#:cxcp:make-get-function a1) (mov '
"Bad access list" a2) (mov (cvalq access) a3) (jmp syserror)) ())
(loader '((fentry #:cxcp:make-put-function subr3) (push (@ #:cxcp:
make-put-function)) (mov '(access exp val) a4) (jcall #:llcp:cbind3) (bfnil a1
1001) (mov 'cxcp a1) (mov '"access list too short" a2) (mov (cvalq access) a3)
(jcall syserror) (bra 1002) 1001 (mov nil a1) 1002 (mov (cvalq access) a1) (
mov (cvalq exp) a2) (jcall #:cxcp:make-get-function) (cdr a1) (mov a1 (cvalq 
exp)) (mov (car a1) a1) (cdr a1) (car a1) (mov a1 (cvalq acces)) (mov (cvalq 
exp) a1) (cdr a1) (mov a1 (cvalq exp)) (push 'mcons) (push (@ 1003)) (push '
quote) (mov (cvalq acces) a1) (mov '((car . rplaca) (cdr . rplacd) (tcar . 
trplaca) (tcdr . trplacd) (vref . vset)) a2) (jcall cassq) (push a1) (mov '2 
a4) (jmp list) 1003 (push a1) (push (@ 1004)) (push (cvalq exp)) (push (@ 1005
)) (push (cvalq val)) (mov '1 a4) (jmp list) 1005 (push a1) (mov '2 a4) (jmp 
append) 1004 (push a1) (mov '3 a4) (jmp mcons)) ())
(loader '((fentry #:cxcp:make-inline-macro subr2) (mov (@ #:cxcp:
make-inline-macro) a4) (mov '(name protect) a3) (jcall #:llcp:cbind2) 1001 (
jcall valfn) (push a1) (push nil) (push nil) (mov '3 a4) (mov (@ 1001) a2) (
mov '(body larg exp) a3) (jcall #:llcp:cbindl) (mov (cvalq body) a1) (car a1) 
(push a1) (mov (cvalq body) a1) (cdr a1) (mov a1 (cvalq body)) (pop a1) (mov 
a1 (cvalq larg)) (push a1) (jcall flat) (pop a2) (jcall equal) (bfnil a1 1002)
(push '"**** cxcp-inline : Desole, je ne peux pas expanser : ") (push (cvalq 
name)) (mov '2 a4) (jmp print) 1002 (mov (cvalq body) a1) (cdr a1) (btnil a1 
1004) (mov (cvalq body) a2) (mov 'progn a1) (jcall cons) (bra 1005) 1004 (mov 
(cvalq body) a1) (car a1) 1005 (mov (cvalq larg) a2) (jcall #:cxcp:inliner-aux
) (mov a1 (cvalq exp)) 1006 (push (@ 1007)) (push nil) (push (cvalq protect)) 
(mov '2 a4) (mov (@ 1006) a2) (mov '(x *foreach*) a3) (jcall #:llcp:cbindl) (
bra 1009) 1008 (mov (cvalq *foreach*) a1) (car a1) (push a1) (mov (cvalq 
*foreach*) a1) (cdr a1) (mov a1 (cvalq *foreach*)) (pop a1) (mov a1 (cvalq x))
(push (@ 1010)) (push 'if) (push (@ 1011)) (push '#:cxcp:danger) (push a1) (
mov '2 a4) (jmp list) 1011 (push a1) (push (@ 1012)) (push 'list) (push ''let)
(push (@ 1013)) (push 'list) (push (@ 1014)) (push 'list) (push (@ 1015)) (
push 'quote) (push (cvalq x)) (mov '2 a4) (jmp list) 1015 (push a1) (push (
cvalq x)) (mov '3 a4) (jmp list) 1014 (push a1) (mov '2 a4) (jmp list) 1013 (
push a1) (push (@ 1016)) (push 'cons) (push (@ 1017)) (push 'quote) (push (
cvalq name)) (mov '2 a4) (jmp list) 1017 (push a1) (mov (cvalq larg) a1) (mov 
(cvalq x) a2) (jcall #:cxcp:inline-copy-args) (push a1) (mov '3 a4) (jmp list)
1016 (push a1) (mov '4 a4) (jmp list) 1012 (push a1) (push (cvalq exp)) (mov '
4 a4) (jmp list) 1010 (mov a1 (cvalq exp)) 1009 (bfnil (cvalq *foreach*) 1008)
(mov nil a1) (return) 1007 (push (cvalq name)) (push (@ 1018)) (push (cvalq 
larg)) (push (cvalq exp)) (mov '2 a4) (jmp list) 1018 (mov a1 a2) (pop a1) (
jmp make-macro-open) (return)) ())
(loader '((fentry #:cxcp:inline-copy-args subr2) (mov (@ #:cxcp:
inline-copy-args) a4) (mov '(l x) a3) (jcall #:llcp:cbind2) (bfnil a1 1001) (
mov nil a1) (return) 1001 (cabne a1 a2 1003) (mov a2 a1) (jmp kwote) 1003 (
bfsymb a1 1005) (return) 1005 (push 'cons) (mov (car a1) a1) (jcall #:cxcp:
inline-copy-args) (push a1) (mov (cvalq l) a1) (cdr a1) (mov (cvalq x) a2) (
jcall #:cxcp:inline-copy-args) (push a1) (mov '3 a4) (jmp list)) ())
(loader '((fentry #:cxcp:inliner-aux-body subr2) (mov (@ #:cxcp:
inliner-aux-body) a4) (mov '(lbody larg) a3) (jcall #:llcp:cbind2) 1001 (push 
a1) (mov '1 a4) (mov (@ 1001) a2) (mov '(#:system:map:arg0) a3) (jcall #:llcp:
cbindl) 1002 (push nil) (mov '1 a4) (mov (@ 1002) a2) (mov '(#:system:map:r) 
a3) (jcall #:llcp:cbindl) (bra 1004) 1003 1005 (push (@ 1006)) (mov (cvalq #:
system:map:arg0) a1) (car a1) (push a1) (mov (cvalq #:system:map:arg0) a1) (
cdr a1) (mov a1 (cvalq #:system:map:arg0)) (pop a1) (push a1) (mov '1 a4) (mov
(@ 1005) a2) (mov '(x) a3) (jcall #:llcp:cbindl) (mov (cvalq x) a1) (mov (
cvalq larg) a2) (jmp #:cxcp:inliner-aux) 1006 (mov (cvalq #:system:map:r) a2) 
(jcall cons) (mov a1 (cvalq #:system:map:r)) 1004 (btcons (cvalq #:system:map:
arg0) 1003) 1007 (mov (cvalq #:system:map:r) a1) (jmp nreverse) (return) (
return)) ())
(loader '((fentry #:cxcp:inliner-aux subr2) (mov (@ #:cxcp:inliner-aux) a4) (
mov '(body larg) a3) (jcall #:llcp:cbind2) (jcall #:compiler:macroexpand) (mov
a1 (cvalq body)) (bfnil a1 1001) (mov nil a1) (return) 1001 (jcall atomp) (
btnil a1 1003) (mov (cvalq body) a1) (mov (cvalq larg) a2) (jcall memq) (btnil
a1 1005) (mov (cvalq body) a1) (return) 1005 (mov (cvalq body) a1) (jmp kwote)
1003 (mov (cvalq body) a1) (car a1) (mov 'quote a2) (cabne a1 a2 1007) (mov (
cvalq body) a1) (jmp kwote) 1007 (mov (cvalq body) a1) (car a1) (cabeq a1 '
lambda 1011) (cabeq a1 'mlambda 1011) (cabne a1 'flambda 1009) 1011 (push '
list) (mov (cvalq body) a1) (car a1) (jcall kwote) (push a1) (mov (cvalq body)
a1) (cdr a1) (car a1) (jcall kwote) (push a1) (mov (cvalq body) a1) (cdr a1) (
cdr a1) (push a1) (mov (cvalq larg) a1) (mov (cvalq body) a2) (cdr a2) (car a2
) (jcall #:cxcp:inliner-delq) (mov a1 a2) (pop a1) (jcall #:cxcp:
inliner-aux-body) (push a1) (mov '4 a4) (jmp mcons) 1009 (mov (cvalq body) a1)
(car a1) (bfcons a1 1012) (mov (cvalq body) a1) (car a1) (car a1) (cabeq a1 '
lambda 1014) (cabeq a1 'mlambda 1014) (cabeq a1 'flambda 1014) (push (@ 1016))
(push '"; **** Inline expansion for ") (push (cvalq name)) (push '
" can be wrong in ") (push (cvalq body)) (mov '4 a4) (jmp print) 1016 (bra 
1015) 1014 (mov nil a1) 1015 (push 'list) (mov (cvalq body) a1) (mov (cvalq 
larg) a2) (jcall #:cxcp:inliner-aux-body) (mov a1 a2) (pop a1) (jmp cons) 1012
(push 'list) (mov (cvalq body) a1) (car a1) (jcall kwote) (push a1) (mov (
cvalq body) a1) (cdr a1) (mov (cvalq larg) a2) (jcall #:cxcp:inliner-aux-body)
(push a1) (mov '3 a4) (jmp mcons)) ())
(loader '((fentry #:cxcp:inliner-delq subr2) (mov (@ #:cxcp:inliner-delq) a4) 
(mov '(larg lvar) a3) (jcall #:llcp:cbind2) (bfnil a2 1001) (return) 1001 (
bfsymb a2 1003) (mov a2 a1) (mov (cvalq larg) a2) (jmp delq) 1003 (mov (car a2
) a2) (jcall #:cxcp:inliner-delq) (mov (cvalq lvar) a2) (cdr a2) (jmp #:cxcp:
inliner-delq)) ())
(loader '((fentry #:cxcp:danger subr1) (mov (@ #:cxcp:danger) a4) (mov '(x) a3
) (jcall #:llcp:cbind1) (jcall #:compiler:macroexpand) (mov a1 (cvalq x)) (
jcall atomp) (btnil a1 1001) (mov nil a1) (return) 1001 (mov (cvalq x) a1) (
car a1) (mov 'quote a2) (cabne a1 a2 1003) (mov nil a1) (return) 1003 (mov (
cvalq x) a1) (car a1) (cabeq a1 '$car 1007) (cabeq a1 '$cdr 1007) (cabeq a1 '
$vref 1007) (cabeq a1 '$logand 1007) (cabeq a1 '$logor 1007) (cabeq a1 '
$logxor 1007) (cabeq a1 '$add 1007) (cabeq a1 '$add1 1007) (cabeq a1 '$minus 
1007) (cabeq a1 '$sub 1007) (cabeq a1 '$sub1 1007) (cabeq a1 'and 1007) (cabeq
a1 'eq 1007) (cabeq a1 'or 1007) (cabeq a1 '= 1007) (cabeq a1 '<> 1007) (cabeq
a1 'equal 1007) (cabne a1 'not 1005) 1007 1008 (mov (cvalq x) a1) (cdr a1) (
push a1) (mov '1 a4) (mov (@ 1008) a2) (mov '(#:system:map:arg0) a3) (jcall #:
llcp:cbindl) 1009 (push nil) (mov '1 a4) (mov (@ 1009) a2) (mov '(#:system:
map:r) a3) (jcall #:llcp:cbindl) (bra 1011) 1010 (mov nil a1) 1011 (bfcons (
cvalq #:system:map:arg0) 1012) (mov (cvalq #:system:map:arg0) a1) (car a1) (
push a1) (mov (cvalq #:system:map:arg0) a1) (cdr a1) (mov a1 (cvalq #:system:
map:arg0)) (pop a1) (jcall #:cxcp:danger) (mov a1 (cvalq #:system:map:r)) (
btnil a1 1010) 1012 (mov (cvalq #:system:map:r) a1) (return) (return) (return)
1005 (mov (cvalq t) a1) (return)) ())
(loader '((end)))
