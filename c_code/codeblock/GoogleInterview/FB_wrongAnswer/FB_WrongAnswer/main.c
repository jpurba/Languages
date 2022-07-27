#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getWrongAnswers(int N, char* C);
char * results[];


char* getWrongAnswers(int N, char* C) {

  char *charTemp = NULL;
  charTemp = C;
  int i=0;
  char tmp;

  printf("Line 1: N = %d; C = %c and %c \n", N, C[0],C[1]);

  printf("Line 2: N = %d; C = %c and %c\n", N, charTemp[0],charTemp[1]);

  for(i=0; i<N; i++){
        printf("%s\n",results[i]);
  }

  for(i=0; i<N; i++){
    tmp = charTemp[i];
    printf("\ni = %d; tmp = %c\n", i, tmp);
    if(tmp =='A'){
        printf("tmp = %c\n", tmp);
        results[i]='B';
    }
    else{
        printf("tmp = %c \n", tmp);
        results[i]='A';
    }
  }
  for(i=0; i<N; i++){
        printf("%c",results[i]);
  }



  return &results;
}



int main()
{
    int numQuestion = 0;
    char *ptrChar;
    ptrChar = "ABA";
    char* ptranswer;
    int i=0;
    int compare = 0;
    char answer;

    numQuestion = 3;
    ptranswer = getWrongAnswers(numQuestion, ptrChar);

    printf("\nOn Main, results");
    for(i=0; i<numQuestion; i++){
        printf("%c",results[i]);
    }

    printf("\nOn Main, ptranswer ");
    for(i=0; i<numQuestion; i++){
        printf("%s",ptranswer);
    }

    answer = ptrChar[0];

    //compare = strcmp("A",answer);
    printf("\n\nanswer = %c \n",answer);

    if(answer == 'A')
    {
        printf("strcmp == 0\n");
    } else {
        printf("strcmp == 1\n");
    }

    printf("Hello world!\n");
    return 0;
}
