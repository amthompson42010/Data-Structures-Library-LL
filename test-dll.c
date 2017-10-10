#include <stdio.h>
   #include <stdlib.h>
   #include "dll.h"
   #include "real.h"

   int main()
       {
           // dll *a = newDLL(displayInteger);
           // dll *b = newDLL(displayInteger);
           // insertDLL(a, 0, newInteger(1));
           // insertDLL(b, 0, newInteger(9));
           // insertDLL(a, 1, newInteger(2));
           // insertDLL(b, 1, newInteger(8));
           // insertDLL(a, 2, newInteger(3));
           // insertDLL(b, 2, newInteger(7));
           // insertDLL(a, 3, newInteger(4));
           // insertDLL(b, 3, newInteger(6));
           // insertDLL(a, 4, newInteger(5));
           // insertDLL(b, 4, newInteger(5));
           // unionDLL(b, a);
           // unionDLL(b, a);
           // displayDLL(stdout,a);
           // displayDLL(stdout,b);
           dll *a = newDLL(displayReal);
    insertDLL(a,0,newReal(16.900000));
    insertDLL(a,1,newReal(22.300000));
    insertDLL(a,2,newReal(56.000000));
    insertDLL(a,1,newReal(52.200000));
    removeDLL(a,3);
    removeDLL(a,2);
    insertDLL(a,2,newReal(50.300000));
    insertDLL(a,3,newReal(18.700000));
    insertDLL(a,3,newReal(28.300000));
    insertDLL(a,5,newReal(94.300000));
    insertDLL(a,0,newReal(26.200000));
    removeDLL(a,6);
    insertDLL(a,6,newReal(31.700000));
    removeDLL(a,2);
    insertDLL(a,5,newReal(95.300000));
    removeDLL(a,2);
    removeDLL(a,4);
    insertDLL(a,0,newReal(2.700000));
    removeDLL(a,4);
    removeDLL(a,3);
    removeDLL(a,1);
    insertDLL(a,3,newReal(84.600000));
    insertDLL(a,4,newReal(58.200000));
    removeDLL(a,4);
    insertDLL(a,3,newReal(78.600000));
    insertDLL(a,0,newReal(19.900000));
    insertDLL(a,4,newReal(33.600000));
    removeDLL(a,1);
    insertDLL(a,2,newReal(69.800000));
    displayDLL(stdout,a);
       }
