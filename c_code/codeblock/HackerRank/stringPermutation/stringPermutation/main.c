#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void modify(char **s){
    int i;
    printf("\nin modify(); the content of s = %s\n", *s);

    for(i=0; i<5;i++){
        printf("%c",*(*s));
    }

    printf("\n");

    for(i=0; i<5;i++){
        printf("%c",**(s));
    }
}

static void printLastLetter(char ** str){
    printf("\nIn printLastLetter\n");
    printf("%c\n",*(*str));
    printf("%c\n", **(str));
}

void swap(char **s, int i, int j){

    printf("swap: s[i] = %c, s[j] = %c", s[i], s[j]);
    char *tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;
}

void reverse(char **s, int start, int end){

   printf("\nreverse \n");
   while(start<end)
   {
        swap(s,start++,end--);
   }
}

int nextPermutation(int n, char **s){

    printf("next permutation\n");
    for(int i=n-2;i>-1;i--)
	{
        if(strcmp(s[i+1],s[i])>0)
        {
            //get min max
            for(int j=n-1;j>i;j--)
            {
                if(strcmp(s[j],s[i])>0)
                {
                    //do swap
                    swap(s,i,j);
                    // do reverse
                    reverse(s,i+1,n-1);
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main()
{
    int i, size = 5;
    char **sptr;
    int n;
    printf("size of string = ");
    scanf("%d", &n);
    sptr = calloc(n, sizeof(char*));
    for(int i=0; i<n; i++){
        sptr[i] = calloc(11, sizeof(char));
            scanf("%s", sptr[i]);
    }
    while (nextPermutation(n,sptr)){
        for(int i=0; i< n; i++)
            printf("%s%", sptr[i], i=n-1 ?'\n' : ' ');
    }

    for (int i=0; i<n; i++)
        free(sptr[i]);

    free(sptr);

    char *s = malloc(size);

    for(i = 0; i<size; i++){
        s[i] = 'a';
    }
    printf("in Main(); the content of s = ");
    for(i=0; i< size; i++){
        printf("%c",s[i]);
    }
    printf("\nAs string s = %s", s);

    modify(&s);

    printLastLetter(&s);

    return 0;
}
