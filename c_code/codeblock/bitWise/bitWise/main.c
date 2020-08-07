#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k)
{
    int i,j;
    int maxAND = 0;
    int maxOR = 0;
    int maxXOR = 0;
    int nAndK = 0;
    int nOrK = 0;
    int nXorK = 0;

    for(i=1; i<=k; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            nAndK = i&j;
            nOrK = i|j;
            nXorK = i^j;

            printf("n = %d; k = %d; n&k = %d; n|k = %d; n XOR k = %d \n", i, j, nAndK, nOrK , nXorK );

            if ((nAndK > maxAND) && (nAndK < k))
                maxAND = nAndK;
            if ((nOrK > maxOR) && (nOrK < k))
                maxOR = nOrK;
            if ((nXorK > maxXOR) && (nXorK < k))
                maxXOR = nXorK;
        }
    }

    printf("\n\nmaxAND = %d; maxOR = %d; maxXOR = %d \n", maxAND, maxOR, maxXOR);


}

int main() {
    int n, k;

    printf("Enter 2 integer number: ");
    scanf("%d %d", &n, &k);
    printf("\n");
    calculate_the_maximum(n, k);

    return 0;
}
