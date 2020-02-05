/*
 ============================================================================
 Name        : fileEx.c
 Author      : Josua Purba
 Version     :
 Copyright   : Your copyright notice
 Description : count character, space and line 
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILE_NAME   50

int main(void) {

	FILE *fp; 
    int count = 0;  // Line counter (result) 
    char filename[MAX_FILE_NAME]; 
    char c;  // To store a character read from file 
    int nchars = 0; // char count
    int nLines = 0; // lines count
    int nSpace = 0; // space count
    int nAlphabet = 0; // words count
    

    // Get file name from user. The file should be 
    // either in current folder or complete path should be provided 
    printf("\n");
    printf("Enter file name: "); 
    scanf("%s", filename); 
  
    // Open the file     
    fp = fopen(filename, "r"); 
  
    // Check if file exists 
    if (fp == NULL) 
    { 
        printf("Could not open file %s", filename); 
        return 0; 
    }
 
    // Print the file
    //c = fgetc(fp);
    while(1)
    {
        
        c = fgetc(fp);
        printf("%c", c);
        if(c==EOF)
            break;
        else
        {
            nchars++;
            if (c==' ')
                nSpace++;
            else if(c=='\n')
                nLines++;
            else
                nAlphabet++;  
        }
    }    
    fclose(fp);
    printf("\n# of characters: %d\n", nchars);
    printf("# of space: %d\n", nSpace);
    printf("# of lines: %d\n", nLines);
    printf("# of alphabet: %d\n", nAlphabet);
    printf("\n"); 

	return EXIT_SUCCESS;
}
