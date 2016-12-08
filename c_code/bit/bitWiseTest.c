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

    int a = 3;
    int res=0;

	printf("\noriginal a = %d or in hex a=0x%x\n",a,a);
	
	res = set_bit2(a);
    printf("after set_bit2; a = %d or in hex a=0x%x\n",res,res);
    res = clear_bit2(a);
    printf("after clear_bit2; a= %d or in hex a=0x%x\n",res,res);
	
    res = set_bit3(a);
    printf("\nafter set_bit3; a = %d or in hex a=0x%x\n",res,res);
    res = clear_bit3(a);
    printf("after clear_bit3; a= %d or in hex a=0x%x\n",res,res);

	
	return 0;
}
