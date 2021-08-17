#include "main.h"
#include <stdio.h>
#include <stdlib.h>




int main(int argc, char const *argv[])
{
   int x[] = {-3, 17, 0, 1, -7, -2, 8, 50, -29, -3, 7};
   int *p = &x[6];
   int *q = x;
   int **r = &p;
   printf("FUNC(5, 6): %d\n", FUNC(5,6));
   exit(0);

   /**
    * Fragen: 
    * A- Benennen Sie folgende Deklarationen in deutscher Umgangssprache x, p, q, r. Nur die Deklaration!!.
    * B- 
        * a) welchen Wert hat x[8]? //-29
        * b) welchen Wert hat *(p - 2)? //-7
        * c) welchen Wert hat *p - 2 ? //6
        * d) welchen Wert hat *(q+1)? //17
        * e) welchen Wert hat p[-3] ? //1
        * f) welchen Wert hat (q+9)[-2]? //50
        * g) welchen Wert hat (*r)[3]?//-3
        * h) welchen Wert hat *(r[0] + 3) ?//-3
        * 
     C- Makros definieren:
        a) x + 10
        b) 2*x - 25
        d) x/y 
    */
    return 0;
}
