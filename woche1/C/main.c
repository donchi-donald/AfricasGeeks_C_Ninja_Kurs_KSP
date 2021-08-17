

int main(int argc, char const *argv[])
{
   int x[] = {-3, 17, 0, 1, -7, -2, 8, 50, -29, -3, 7};
   int *p = &x[6];
   int *q = x;
   int **r = &p;

   /**
    * Fragen: 
    * A- Benennen Sie folgende Deklarationen in deutscher Umgangssprache x, p, q, r. Nur die Deklaration!!.
    * B- 
        * a) welchen Wert hat x[8]?
        * b) welchen Wert hat *(p - 2)?
        * c) welchen Wert hat *p - 2 ?
        * d) welchen Wert hat *(q+1)?
        * e) welchen Wert hat p[-3] ?
        * f) welchen Wert hat (q+9)[-2]?
        * g) welchen Wert hat (*)[3]?
        * h) welchen Wert hat *(r[0] + 3) ?
        * 
     C- Makros definieren:
        a) x + 10
        b) 2*x - 25
        d) x/y 
    */
    return 0;
}
