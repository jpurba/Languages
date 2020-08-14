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

    return 0;
}
