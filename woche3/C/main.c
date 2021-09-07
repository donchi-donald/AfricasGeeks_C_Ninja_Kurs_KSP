#include <stdio.h>
#include <stdlib.h>

typedef struct person
{
    char a;//1
    char e;//1
    char b;//1
    char c;//1
    char d;//1
    int age;//4
}Person;//min=9 , max= 12














typedef union test
{
    int a;//4
    int b;//4
}Test;

typedef union test2
{
    double a;//8
    int b;//4
}Test2;



void hallo();

int main(int argc, char const *argv[])
{
    
    printf("sizeof(Person) = %ld\n", sizeof(Person));
    printf("sizeof(Test) = %ld\n", sizeof(Test));
    printf("sizeof(Test2) = %ld\n", sizeof(Test2));
    hallo();
    return 0;
}
