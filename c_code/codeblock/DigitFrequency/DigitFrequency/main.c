#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCHAR 1024

int digit_to_int(char d);

int digit_to_int(char d)
{
 char str[2];
 int number;

 str[0] = d;
 str[1] = '\0';
 //printf("input char: %c\n", d);
 number = (int) strtol(str, NULL, 10);
 //printf("number: %d\n", number);

 return number;
}

int main()
{
    char *s;
    int i;
    int len;
    int arr[10];
    int inputString;

    s = (char *) malloc (MAXCHAR * sizeof(char));
    scanf("%s",s);
    len = strlen(s);
    s = realloc(s, len+1 );

    for(i=0; i<10; i++)
        arr[i] = 0;

    for(i=0; i<len; i++)
    {
        //printf("%c\n", s[i]);
        if(s[i] >= '0' && s[i] <= '9')
        {
            inputString = digit_to_int(s[i]);
        }
        else
        {
            inputString = -999;
        }
         //printf("%d\n",inputString);


        if(inputString >= 0 && inputString <= 9)
        {
            printf("%c\n", s[i]);
            switch(inputString)
            {
            case 0:
                arr[0]++;
                break;
            case 1:
                //printf("before: case 1: %d \n", arr[1]);
                arr[1]= arr[1]+1;
                //printf("after: case 1: %d \n", arr[1]);
                break;
            case 2:
                arr[2] = arr[2] + 1;
                break;
            case 3:
                arr[3] = arr[3] + 1;
                break;
            case 4:
                arr[4] = arr[4] + 1;
                break;
            case 5:
                arr[5] = arr[5] + 1;
                break;
            case 6:
                arr[6] = arr[6] + 1;
                break;
            case 7:
                arr[7] = arr[7] + 1;
                break;
            case 8:
                arr[8] = arr[8] + 1;
                break;
            case 9:
                arr[9] = arr[9] + 1;
                break;
            default:
                printf("Error. Input number is out of range !\n");
                break;
            }
        }
    }

    for (i=0; i<10; i++)
        printf("%d ", arr[i]);

    printf("\n");

    free(s);
    return 0;
}
