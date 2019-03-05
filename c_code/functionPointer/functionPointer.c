/*
 ============================================================================
 Name        : functionPointer.c
 Author      : Josua Purba
 Version     : 
 Copyright   : copyright 2018 - 2028
 Description : function pointer examples
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "functionPointer.h"

int add(int a, int b)
{
   return a+b;
}

void printHello()
{
   printf("Hello World \n"); 
}

void printInput(char * in)
{
   printf("Hello %s \n", in);
}

void B(void(*ptr)()) // B argument is function pointer
{
   ptr(); // call-back function that "ptr" points to 
}


// Note: Bubble sort will sort the number either ascending or decending
//     : if(A[j] < A[j+1]) -> descending
//     : if(A[j] > A[j+1]) -> ascending
// So bubble means swap or pushing the number in higher or lower order
void bubbleSort(int *A, int n)  // use buble sort algorithm 
{
   int i,j,temp; 

   for(i=0; i<n; i++)
   {
       for(j=0;j<n-1;j++)
       {
          if(A[j] < A[j+1]) // compare A[j] with A[j+1] and swap if needed
          {
              temp = A[j];
              A[j] = A[j+1];
              A[j+1] = temp;
          }
       }
   } 

}


int compare(int a, int b)
{
    if(a>b) 
       return 1;
    else
       return -1;

}

int absoluteCompare(int a, int b)
{
     if(abs(a) > abs (b)) 
          return 1;
     else
          return -1;

}
// Note: Bubble sort will sort the number either ascending or decending
//     : if(A[j] < A[j+1]) -> descending
//     : if(A[j] > A[j+1]) -> ascending
// So bubble means swap or pushing the number in higher or lower order
// call back function should comparetwo integers, should return 1 if first 
// element has higher rank and -1 if second element has lower and equal rank
// use buble sort algorithm 
void bubbleSortCall(int *A, int n, int (*compare)(int,int))  
{
   int i,j,temp;

   for(i=0; i<n; i++)
   {
       for(j=0;j<n-1;j++)
       {
          if(compare(A[j],A[j+1]) > 0) // compare A[j] with A[j+1],swap if needed
          {
              temp = A[j];
              A[j] = A[j+1];
              A[j+1] = temp;
          }
       }
   } 

}

// compare for quick sort in stdlib.h C library
int compareQuick(const void* a, const void* b)
{
    int A =*((int *)a); // typecasting to int * and getting value
    int B =*((int *)b);
    return abs(A) - abs(B);  // return positive #, A > B, ascending order
}

// Function taking a function pointer as an argument
int computeSum(int (*funcp)(int), int lo, int hi)
{
    int sum=0;
    int i;
    int x,y;


    // Add values returned by the pointed-to function
    for (i=0; i<=2; i++)
    {
        //use the function pointer 'funcp' to invoke the function
        x = i*(hi-lo) + lo;
        y = (*funcp)(x);
        sum += y;
        printf("compute sum: x: %d; y: %d; sum= %d \n", x,y,sum);
    }
    return sum;
}

int func (int arg)
{

    printf("func: %d\n", arg);
    return arg*arg;

}
