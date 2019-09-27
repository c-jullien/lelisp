#!/bin/sh
echo "---------------------------------------------------"
echo "    [Test de (end t), (end ()), (end)]"
(../lltest/testendnerr.sh) && (
echo 
echo "---- (end t) should terminate with error and without banner"
../lltest/testenderr.sh > fifi && echo "***** (end t) should have terminated with error" || echo "(end t) terminate  with error : ok"
tail -1 fifi > fifi1

grep "Que Le-Lisp soit avec vous. " fifi1 && echo "***** (end t) must not print the banner" || echo "(end t) does not print the banner : ok"
echo "---------------------------------------------------"


echo "---- (end ())should terminate without error and without banner"
../lltest/testendnerr.sh > fifi && echo "(end ()) terminate  without error : ok" || echo "***** (end ()) should have terminated without error"
tail -1 fifi > fifi1

grep "Que Le-Lisp soit avec vous. " fifi1 && echo "***** (end ()) must not print the banner" || echo "(end ()) does not print the banner : ok"
echo "---------------------------------------------------"


echo "---- (end) should terminate without error and with banner"
../lltest/testend0err.sh > fifi  && echo "(end) terminate  without error : ok" || echo "***** (end) should have terminated without error"
tail -1 fifi > fifi1

grep "May Le-Lisp be with you. " fifi1 && echo "(end) print the banner : ok" || echo "***** (end) must print the banner"
echo "    [Fin des Test de (end t), (end ()), (end)]"
echo "---------------------------------------------------"
rm fifi fifi1
)  || echo "** lelisp not found: testend not done."

