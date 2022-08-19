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
     //printf("Number of ones on %d is %d\n", input, table[inputBit]);

     return table[inputBit];
 }

 int countOne(int input)
 {
     unsigned int count=0;

     for(count=0; input != 0; input>>=1)
     {
         printf("countOne: input = %d; count = %d \n", input,count);
         if(input&01)
            ++count;
     }
     return count;
 }

  int countOneWhile(int input)
 {
     int count=0;
      while(input&01)
     {
         count++;
         printf("While countOne: input = %d; count = %d \n", input,count);
         input>>=1;
     }
     return count;
 }

 /* Note: This function has limit only for 4 bits*/
 int countOnes(int input)
 {
     int i;
     int bits = 0;
     for(i=0; i<sizeof(input); i++)
     {
         //printf("countOnes: i=%d; input=%d; bits=%d \n", i, input, bits);
         bits += input & 0001;
         input >>=1;
     }
     return bits;

 }
