#include <stdio.h>
#include <stdlib.h>
#define set(x,n) ((1<<(n))|(x))//1->1, 0->1  0000 0001<<2 = 0000 0100
#define neg(x) ~(x) /*0x0F :0b 0000 1111 -> 0b 1111 0000*/
#define del(x,n) (~(1<<(n)) & (x) ) //0->0, 1->0
#define tog(x,n) ((1<<(n)) ^ (x)) //0->1, 1->0 XOR (1 XOR 1 = 0)


//0b 0000 1111 0010 1110 = x

int main(int argc, char const *argv[])
{
    
    printf("set(x, 0) = 0x%0x\n", set(0x0F2E, 0));
    return 0;
}
