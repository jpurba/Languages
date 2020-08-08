#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integerInput;

    printf("Enter an integer number: ");
    scanf("%d", &integerInput);
    // input validation range
    while((integerInput < 1) && (integerInput > 10000000000))
    {

        printf("Error input. The number should be 1<= input <= 10000000000 \n");
        printf("Enter an integer: ");
        scanf("%d", &integerInput);

    }

    switch(integerInput)
    {

    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");
        break;
    case 3:
        printf("three\n");
        break;
    case 4:
        printf("four\n");
        break;
    case 5:
        printf("five\n");
        break;
    case 6:
        printf("six\n");
        break;
    case 7:
        printf("seven\n");
        break;
    case 8:
        printf("eight\n");
        break;
    case 9:
        printf("nine\n");
        break;
    default:
        printf("Greater than 9\n");
        break;

    }

    return 0;
}
