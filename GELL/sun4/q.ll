
(print (setq dbms (dbms-connect "oracle" "scott/tiger")))
(print (setq curs (dbms-create-cursor dbms)))
(print (dbms-select curs "select * from emp"))
(print (dbms-get-tuple curs))
