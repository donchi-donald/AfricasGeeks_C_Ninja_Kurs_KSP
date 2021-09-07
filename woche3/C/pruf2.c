#include <stdio.h>
#include <stdlib.h>
/**
 * Schreiben Sie einen Makro TEST_EQ(x,y,n), der genau dann “wahr” (also 1) abliefert, 
 * wenn in x und y das n-te Bit übereinstimmt. 
 * Dabei sollen Bits vom LSB beginnend mit 0 nummeriert sein.
 * 
 * x = 0001 1110
 * y = 0101 1010
 * n=5
 */
#define TEST_EQ(x, y, n)

int f(unsigned int x){
    int n =0;
    while(x){
        if( x & 1) n++;
        x >>= 1;
    }

    return n;
}

int main(int argc, char const *argv[])
{
    unsigned int n = 0xA890;
    printf("0x%x\n", f(n));
    n &= n - 1;
    printf("0x%x\n", n);
    return 0;
}
