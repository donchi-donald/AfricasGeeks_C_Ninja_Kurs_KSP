#include <stdio.h>
#include <stdlib.h>

typedef struct person
{
    int age;
    char *name;
    double gewicht;
}Person;

typedef union test
{
    int a;
    int b;
}Test;

typedef union test2
{
    double a;
    int b;
}Test2;





int main(int argc, char const *argv[])
{
    long z[] = {2, 19, 40, 12, 0};
    int a[5] = {5, 4, 3, 2, 1};
    int *b = a + 2;
    signed int c=0;

    char str[] = "Hallo Welt";
    char q = str[b[-1]];
    printf("z[z[z[0]] = %ld\n",z[z[z[4]]] );//z[4] = 0 , z[0]=2 , z[2]=40
    printf("*b = %d\n", *b);//3
    printf("*(str+3) = %c\n", *(str + 3));//l
    printf("*str+3 = %c\n", *str +3);//K
    printf("q = %c\n", q);//o
    printf("sizeof(str) = %ld\n", sizeof(str));//11
    printf("sizeof(z) = %ld\n", sizeof(z));//40
    return 0;
}
