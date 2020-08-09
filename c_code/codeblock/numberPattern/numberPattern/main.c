#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,i,j;
    int k,m;
    int row;
    int col;
    int size;

    scanf("%d", &n);

    size =n*2-1;

    int **a = (int **)malloc(size * sizeof(int *));
    for (i=0; i<size; i++)
        a[i] = (int *)malloc(size * sizeof(int));
    k=0;
    m=size-1;
    while(n!=0)
    {
        for (i=k;i<=m;i++)
        {
            for(j=k;j<=m;j++)
            {
                if(i==k ||i==m||j==k|| j==m)
                a[i][j]=n;
            }
        }
        ++k;
        --m;
        --n;
    }

    for(row=0; row<size; row++)
    {
        for(col=0;col<size;col++)
        {
            printf("%d ",a[row][col]);
        }
        printf("\n");
    }

    return 0;
}
