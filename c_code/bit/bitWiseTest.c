/*
 ============================================================================
 Name        : bitwiseTest.c
 Author      : Josua Purba
 Version     :
 Copyright   : Your copyright notice
 Description : To test bitwise simple example
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "bitWise.h"

int main(void) {

    int a;
    int res=0;
    unsigned char position;

    a = 0;
    printf("\noriginal a = %d or in hex a=0x%x\n",a,a);
    res = set_bit1(a);
    printf("after set_bit1; a = %d or in hex a=0x%x\n",res,res);
    res = clear_bit1(a);
    printf("after clear_bit1; a = %d or in hex a=0x%x\n",res,res);

    position = 0;
    res = set_bit(a,position);
    printf("after set_bit with position= %d; a= %d or in hex a=0x%x\n",position,res,res);
    res = clear_bit(a,position);
    printf("after clear_bit with position= %d; a= %d or in hex a=0x%x\n",position,res,res);
    res = flip_bit(a,position);
    printf("after flip_bit with position= %d; a= %d or in hex a=0x%x\n",position,res,res);

    a = 3;
    printf("\noriginal a = %d or in hex a=0x%x\n",a,a);
    res = set_bit2(a);
    printf("after set_bit2; a = %d or in hex a=0x%x\n",res,res);
    res = clear_bit2(a);
    printf("after clear_bit2; a= %d or in hex a=0x%x\n",res,res);

    position = 2;
    
    res = set_bit(a,position);
    printf("after set_bit with position= %d; a= %d or in hex a=0x%x\n",position,res,res);
    res = clear_bit(a,position);
    printf("after clear_bit with position= %d; a= %d or in hex a=0x%x\n",position,res,res);
    res = flip_bit(a,position);
    printf("after flip_bit with position= %d; a= %d or in hex a=0x%x\n",position,res,res);

    res = set_bit3(a);
    printf("\nafter set_bit3; a = %d or in hex a=0x%x\n",res,res);
    res = clear_bit3(a);
    printf("after clear_bit3; a= %d or in hex a=0x%x\n",res,res);

    position = 3;
    
    res = set_bit(a,position);
    printf("after set_bit with position= %d; a= %d or in hex a=0x%x\n",position,res,res);
    res = clear_bit(a,position);
    printf("after clear_bit with position= %d; a= %d or in hex a=0x%x\n",position,res,res);
    res = flip_bit(a,position);
    printf("after flip_bit with position= %d; a= %d or in hex a=0x%x\n",position,res,res);
	
    return 0;
}
