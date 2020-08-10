#include <stdio.h>
#include <stdlib.h>

#define MAXCHARARCTER 1000
#define MAXCHAR 1024

void printToken(void);
void printTokenSubmit(void);

void printToken(void)
{
    int c = 0;
    int n = 0;

    printf("\nEnter a sentence.\n\ninput: ");
    /*Read up to 250 char from input, then print each word on a line */
    while (n<MAXCHARARCTER && (c = getchar())!= EOF && c!='\n')
    {
        if (c ==' ')
            printf("\n");  /*print \n for input space */
        else
            printf ("%c",c);
        n++;
    }
    printf("\n");

    if(n==MAXCHARARCTER) /*if input more than max, then discard input */
        while((c = getchar()) != '\n' && c != EOF);
}

void printTokenSubmit()
{
    char *s;
    int len;
    int i;

    s = (char *)malloc(MAXCHAR * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s)+1);
    len = strlen(s);
    for (i = 0; i<len;i++)
    {
        if(s[i] ==' ')
        {
            printf("\n");
        }
        else{
            printf("%c",s[i]);
        }
    }
    free(s);
}

int main()
{
    printToken();
    printTokenSubmit();

    return 0;
}
