#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int sumInt;
    int diffInt;

    float floatNum1;
    float floatNum2;
    float sumFloat;
    float diffFloat;

    scanf_s("%d %d", &num1, &num2);
    //scanf_s("%d", &num2);
    scanf_s("%f %f", &floatNum1, &floatNum2);
    //scanf_s("%f", &floatNum2);

    sumInt = num1 + num2;
    diffInt = num1 - num2;

    sumFloat = floatNum1 + floatNum2;
    diffFloat = floatNum1 - floatNum2;

    printf("%d %d\n", sumInt, diffInt);
    printf("%.1f %.1f\n", sumFloat, diffFloat);

    return 0;
}