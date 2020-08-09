#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    int *ptr = NULL;
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int *) malloc(n* sizeof(int));
    if(ptr == NULL)
    {
        printf("Error! Memory was not allocated !");
        exit(0);
    }

    printf("Enter elements: ");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum = %d\n", sum);
    free(ptr);

    return 0;
}
