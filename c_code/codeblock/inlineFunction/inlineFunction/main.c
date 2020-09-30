#include <stdio.h>
#include <stdlib.h>

// MACRO example
#define MAXSIZE 10
#define MIN(A,B)  ((A) <= (B) ? ( A) : (B))
#define SQUARE(X) ((X)*(X))
#define SWAP(a,b) ({ (a)^=(b); b^=a; a^=b; })

// inline function example
//inline int foo(void) This will get compile error undefined reference to foo
//{
//
//    return 2;
//}

//To fix use static word in front of inline keyword
//static  inline int foo(void) -> use static to eliminate the error
__attribute__((always_inline))  inline int foo(void)
{
    int number;

    number = 5;

    printf("inline function foo: square of %d = %d \n", number, SQUARE(number));

    return SQUARE(number) + MAXSIZE;
}

int main()
{
    int result;
    int A,B;

    A = 8;
    B = 9;

    printf("main: min of %d and %d is %d \n",A,B,MIN(A,B));

    printf("main: before swap of %d and %d \n", A,B);
    SWAP(A,B);
    printf("main: after swap of %d and %d \n", A,B);

    // inline function call
    result = foo();

    printf("main: Output of inline function is %d\n", result);

    return 0;
}
