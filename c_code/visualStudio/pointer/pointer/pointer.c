// pointer.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

void swap(int* x, int* y) {
    int temp;
    printf("swap: Before swap: x = %d; y = %d\n", *x, *y);

    temp = *x;
    * x = * y;
    *y = temp;
    printf("swap: After swap: x = %d; y = %d\n", *x, *y);
}

void swapNoMemory(int* x, int* y) {
    printf("swapNoMemory: Before swap: x = %d; y = %d\n", *x, *y);
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
    printf("swapNoMemory: After swap: x = %d; y = %d\n", *x, *y);
}

int main()
{
    int x, y;
    long int* ptr = NULL;
    long int *z=NULL;

    x = 7;
    y = 8;
    printf("Address of x: 0x%x and y:0x%x \n", &x, &y);
    swap(&x, &y);
    swapNoMemory(&x, &y);

    ptr = (&x);     // point to x
    *ptr = 16;  // replace x value with 16
    z = ptr;
    printf("\nptr point to address = 0x%x; value in this address = %d\n", ptr, *ptr);
    printf("\nz point to address = 0x%x; z value in this address= %d\n\n", z, *z);
    printf("\nptr address = 0x%x; z address= 0x%x\n\n", &ptr, &z);
}

