#include <stdio.h>
#include <stdlib.h>

int set_bit(int input, unsigned char position){
    int mask = (0x01<<position);
    return input | mask;
}

int clear_bit(int input, unsigned char position){
    int mask = (0x1<<position);
    return input&=~mask;
}

int main()
{
    int a;
    int res = 0;
    unsigned char position;

    const volatile int * const ptr = 0x102793412;
    //*ptr = 0xaa55;
    //*(int *const)(0x9872632) = 0xaa55;

    a=0;
    position = 0;
    printf("\nOriginal a=%d or in Hex a=0x%x\n",a,a);
    res = set_bit(a,position);
    printf("after set bit; a=%d or in hex a=0x%x\n",res,res);
    position = 1;
    res = set_bit(res,position);
    printf("after set bit position 1; a=%d or in hex a=0x%x\n",res,res);

    res = clear_bit(res,position);
    printf("after clear bit position 1; a=%d or in hex a=0x%x\n",res,res);
    return 0;
}
