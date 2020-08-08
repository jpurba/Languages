#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numberOne;
    int numberTwo;
    int i;

    printf("Enter the first number: ");
    scanf("%d", &numberOne);
    printf("Enter the second number (> first number): ");
    scanf("%d", &numberTwo);
    while(numberTwo < numberOne)
    {
        printf("Error input. The second number should be larger \n");
        printf("Enter the second number (> first number): ");
        scanf("%d", &numberTwo);
    }
    for(i=numberOne; i <= numberTwo; i++)
    {
        switch(i)
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
                if (i%2 == 0)  // even number
                {
                    printf("even\n");
                }
                else
                {
                    printf("odd\n");
                }

                break;
        }
    }

    return 0;
}
