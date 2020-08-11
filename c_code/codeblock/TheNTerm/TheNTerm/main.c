#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c)
{
    int i;
    int arr[100];

    arr[1] = a;
    arr[2] = b;
    arr[3] = c;
    printf("arr[1]=%d; arr[2]=%d; arr[3]=%d\n", arr[1],arr[2],arr[3]);

    for(i=4; i <= n; i++)
    {
        arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
        printf("arr[%d]=%d; arr[%d]=%d; arr[%d]=%d; arr[%d]=%d\n", i,arr[i], i-1,arr[i-1], i-2,arr[i-2], i-3,arr[i-3]);
    }
    return arr[n];
}

int main()
{
    int n;
    int a;
    int b;
    int c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n,a,b,c);

    printf("%d\n", ans);

    return 0;
}
