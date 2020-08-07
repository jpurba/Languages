#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAXLIMIT 40

int main()
{
	char ch;
	char stringArray[MAXLIMIT];
	char sentence[MAXLIMIT];
	scanf("%c", &ch);
	scanf("%s", &stringArray);
	scanf("\n");
	scanf("%[^\n]%*c", sentence);
	printf("%c\n%s\n%s", ch, stringArray, sentence);


	return 0;
}
