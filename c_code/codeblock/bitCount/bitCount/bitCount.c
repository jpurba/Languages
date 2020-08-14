/*
 ============================================================================
 Name        : bitCount.c
 Author      : Josua Purba
 Version     :
 Copyright   : Your copyright notice
 Description : Bitwise simple example
 ============================================================================
 */
 #include <stdio.h>
 #include "bitCount.h"

 int countTable(unsigned int input)
 {
     /* Note this function has limit only for 4 bits */
     unsigned int inputBit;

     int table[MAXNUMBER]={0,1,1,2,1,2,2,3,1,2, 2, 3, 3, 3, 3, 4};
//   int          for[16]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

     if((input<0) && (input>15))
     {
         printf("Input number is out of range \n");
         return -1;
     }

     inputBit = input&15;
     printf("Number of ones on %d is %d\n", input, table[inputBit]);

     return table[inputBit];
 }
