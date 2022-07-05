#include <stdio.h>
#include <stdlib.h>

// macro examples
#define SWAP(a,b)({a^=b; b^=a; a^=b;})
#define SQUARE(x) (x*x)
#define MIN(a,b) ((a)<=(b) ? (a):(b))
#define MAX(a,b) ((a)>=(b) ? (a):(b))
#define SECONDS_PER_YEAR (60*60*24*365)UL

void static inline test_inline_function1(int a, int b) {
    printf("a=%d and b=%d\n", a,b);
}

int static inline test_inline_function2(int x){
    return x*x;
}

int main()
{
    int a=5;
    int b=6;
    int result = 0;

    printf("a=%d; b=%d; MIN(%d,%d) = %d\n", a,b,a,b,MIN(a,b));
    printf("a=%d; b=%d; MAX(%d,%d) = %d\n", a,b,a,b,MAX(a,b));
    printf("a=%d; SQUARE(%d) = %d\n", a, a, SQUARE(a));

    test_inline_function1(a,b);

    printf("\ninline function 2 square(a) = %d\n",test_inline_function2(a));

    printf("\nBefore SWAP: a=%d; b=%d; \n", a,b);
    SWAP(a,b);
    printf("After SWAP: a=%d; b=%d; \n", a,b);

    test_inline_function1(a,b);
    printf("\ninline function 2 square(a) = %d\n",test_inline_function2(a));

    return 0;
}
