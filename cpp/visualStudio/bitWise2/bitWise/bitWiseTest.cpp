/*
============================================================================
Name        : bitwiseTest.c
Author : Josua Purba
Version :
Copyright: Your copyright notice
Description : To test bitwise simple example
============================================================================
*/

#include <iostream>
#include <cstdio>
#include "bitWise.h"

using namespace std;

int main()
{
    int a;
    int result = 0;
    int position;

    a = 0;
    position = 0;
    cout << "\nOriginal a = " << a << " ; or in hex a = 0x" << hex << a << endl;
    //printf("Original a = %d or in hex a = 0x%x \n", a, a);
    result = setBit(a, position);
    a = result;
    cout << "After setBit: position = " << position <<" ; a = " << result << " ; or in hex a = 0x" << hex << result << endl;;
    //printf("After setBit: position = %d; result = %d or in hex result = 0x%x\n", position, result, result);
    result = clearBit(a, position);
    printf("After clearBit: position = %d; result = %d or in hex result = 0x%x\n", position, result, result);
    
    a = result;
    position = 1;
    //cout << "\nOriginal a = " << a << " ; or in hex a = 0x" << hex << a << endl;
    printf("\nOriginal a = %d or in hex a = 0x%x \n", a, a);
    result = setBit(a, position);
    a = result;
    //cout << "After setBit: position = " << position << " ; a = " << result << " ; or in hex a = 0x" << hex << result << endl;;
    printf("After setBit: position = %d; result = %d or in hex result = 0x%x\n", position, result, result);
    result = setBit2(a);
    printf("After setBit2: result = %d or in hex result = 0x%x\n", result, result);

    position = 3;
    a = result;
    result = setBit(a, position);
    printf("\nAfter setBit: position = %d; result = %d or in hex result = 0x%x\n", position, result, result);
    a = result;
    position = 2;
    result = flipBit(a, position);
    printf("After flipBit: position = %d; result = %d or in hex result = 0x%x\n", position, result, result);

    a = result;
    position = 8;
    result = setBit(a, position);
    printf("\nAfter setBit: position = %d; result = %d or in hex result = 0x%x\n", position, result, result);
    a = result;
    position = 3;
    result = flipBit(a, position);
    printf("After flipBit: position = %d; result = %d or in hex result = 0x%x\n", position, result, result);


}

