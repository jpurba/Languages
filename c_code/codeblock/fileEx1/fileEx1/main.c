#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1;  // file pointer
    int num;
    char c;

    fp1 = fopen("newFile.txt","w"); // open file for read

    if(fp1 == NULL){
        printf("Error opening the file \n");
        exit(1);
    }

    printf("Enter num: ");
    scanf("%d", &num);

    fprintf(fp1,"The input number is %d\n", num);
    printf("The input number is %d\n", num);

    printf("Enter num again: ");
    scanf("%d", &num);

    fprintf(fp1, "The second input number is %d \n", num);
    printf("The second input number is %d \n", num);

    fclose(fp1);
    return 0;
}
