#include <stdio.h>
#include <stdlib.h>

/* Function to get sum of digits */

int getSum(int n)
{

    int sum = 0;
    while(n!=0)
    {
        printf("start: n = %d; sum = %d \n", n, sum);
        sum = sum+ (n%10);
        n = n/10;
        printf("n = %d; sum = %d \n\n", n, sum);

    }
    return sum;
}

int main()
{
    int i = 10987;

    printf("%d\n", getSum(i));

    i = 10564;
    printf("%d\n", getSum(i));

    return 0;
}
