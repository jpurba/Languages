/*
 ============================================================================
 Name        : fileEx1.c
 Author      : Josua Purba
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
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
    c = fgetc(fp);
    while(c!=EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }    
  
    printf("\n");
    printf("\n");
    fclose(fp); 

    // Open the file again to put pointer to beginning of the file    
    fp = fopen(filename, "r"); 
    // Extract characters from file and store in character c 
    for (c = getc(fp); c != EOF; c = getc(fp)) 
    {
        nchars = nchars + 1;   // count the character
        if (c == '\n') // Increment count if this character is newline 
            count = count + 1; // count the line
    }
    // Close the file 
    fclose(fp); 
    printf("The file %s has %d lines and %d characters\n ", filename, count,nchars); 
	return EXIT_SUCCESS;
}
