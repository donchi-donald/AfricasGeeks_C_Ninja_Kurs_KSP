#include <stdio.h>
#include <stdlib.h>

typedef struct person
{
    int *b;//8
    int a;//4

}Person;//min_größe=12 , max_größe= 16

//A
typedef struct personA
{
    int *b;//8
    int a;//4
    int c;//4

}PersonA;//min_größe=16 , max_größe=16

//B
typedef struct personB
{
    int *b;//8
    double a;//8
    char c;//1

}PersonB;//min_größe=17 , max_größe=24

//C
typedef struct personC
{
    short b;//2
    int a;//4
    char c;//1

}PersonC;//min_größe=7 , max_größe=8

//D
typedef union personD
{
    short b;//2
    char c;//1

}PersonD;//max_größe=2


//E
typedef struct personE
{
    int a;//4
    union  
    {
        int e; //4
        double f;//8
    }d;//8
    
    char c;//1

}PersonE;//min_größe=13 , max_größe=16


int main(int argc, char const *argv[])
{
    printf("sizeof(A):%ld\n", sizeof(PersonA));
    printf("sizeof(B):%ld\n", sizeof(PersonB));
    printf("sizeof(C):%ld\n", sizeof(PersonC));
    printf("sizeof(D):%ld\n", sizeof(PersonD));
    printf("sizeof(E):%ld\n", sizeof(PersonE));
    return 0;
}





