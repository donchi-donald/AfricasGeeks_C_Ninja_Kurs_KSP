#include <stdio.h>
#include <stdlib.h>

int *(*h)(char *s);
double f(int i, char c);
int main(int argc, char const *argv[])
{
    signed short i = 4;
    unsigned char a[30];
    float *p;
    long *b[20];
    int z[5] = {3, -1, 0, 4, 2};
    int *y = z + 2;
    int s = *(z + 2);
    int k = *z + 2;
    printf("sizeof(i) = %ld\n", sizeof(i));
    printf("sizeof(a) = %ld\n", sizeof(a));
    printf("sizeof(p) = %ld\n", sizeof(p));
    printf("sizeof(b) = %ld\n", sizeof(b));
    printf("sizeof(z) = %ld\n", sizeof(z));
    printf("sizeof(y) = %ld\n", sizeof(y));
    printf("sizeof(s) = %ld\n", sizeof(s));
    printf("sizeof(k) = %ld\n", sizeof(k));
    printf("z[z[z[4]]] = %d\n", z[z[z[z[4]]]]);
    return 0;
}

