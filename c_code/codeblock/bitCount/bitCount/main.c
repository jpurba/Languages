#include <stdio.h>
#include <stdlib.h>

#include "bitCount.h"

int main()
{
    int result = 0;
    unsigned int index;

    printf("Count ones with table from 0-15:\n");
    for(index=0; index<MAXNUMBER; index++)
    {
        result = countTable(index);
    }

    printf("\nCount ones with algorithm 1 count one: \n");
    for(index = 0; index < 256; index++)
    {
        result = countOne(index);
        printf("Number = %d; # of ones = %d \n", index,result);
    }

    printf("\nCount ones with algorithm 2 count ones: \n");
    for(index = 0; index < MAXNUMBER; index++)
    {
        result = countOnes(index);
        printf("Number = %d; # of ones = %d \n", index, result);
    }


    return 0;
}
