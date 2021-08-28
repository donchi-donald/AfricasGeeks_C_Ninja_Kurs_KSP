#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int a  = 5;
    long long b;
    char c = 'H';
    char str[] = "Hallo Welt";
    int d = 185;
    double e = 12.6;
    int x[] = {-3, 17, 0, 1, -7, -2, 8, 50, -29, -3, 7};
    int *p = &x[6];
    int *q = x;
    int **r = &p;
    printf("Sizeof(a) = %ld Bytes\n", sizeof(a));
    printf("Sizeof(b) = %ld Bytes\n", sizeof(b));
    printf("Sizeof(c) = %ld Bytes\n", sizeof(c));
    printf("Sizeof(str) = %ld Bytes\n", sizeof(str));
    printf("Sizeof(d) = %ld Bytes\n", sizeof(d));
    printf("Sizeof(e) = %ld Bytes\n", sizeof(e));
    printf("Sizeof(x) = %ld Bytes\n", sizeof(x));
    printf("Sizeof(p) = %ld Bytes\n", sizeof(p));
    printf("Sizeof(q) = %ld Bytes\n", sizeof(q));
    printf("Sizeof(r) = %ld Bytes\n", sizeof(r));
    return 0;
}