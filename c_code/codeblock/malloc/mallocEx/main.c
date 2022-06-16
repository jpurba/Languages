#include <stdio.h>
#include <stdlib.h>

// prototype
int allocate_100bytes(int *ptr);

int allocate_100bytes(int *ptr) {

    ptr = (int*) malloc(100);
    return 0;
}

int main()
{
    printf("Hello world!\n");

    int* ptr;
    int *ptr1;
    int n,i;
    int status;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Entered number of elements: %d \n", n);

    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n*sizeof(int));

    // Check if the memory has been successfully
    // allocated by malloc or not
    if(ptr == NULL) {
        printf("Memory is not allocated\n");
        exit(0);
    }
    else {
            // Memory has been successfully allocated
            printf("Memory successfully allocated using malloc.\n");

            // Get the element of te array
            for (i=0; i<n; ++i) {
                ptr[i] = i + 1;
            }

            // Print the element of the array
            printf("The elements of the array are: ");
            for(i = 0; i<n; ++i) {
                printf("%d, ", ptr[i]);
            }
    }

    status = allocate_100bytes(ptr1);
    printf("\nStatus value: %d \n", status);

    if(ptr == NULL) {
        printf("Memory for 100 bytes is not allocated\n");
        exit(0);
    }
    else {
            // Memory has been successfully allocated
            printf("100 bytes Memory successfully allocated using malloc.\n");

            // Get the element of te array
            for (i=0; i<100; ++i) {
                ptr[i] = i + 1;
            }

            // Print the element of the array
            printf("The elements of the array are: ");
            for(i = 0; i<100; ++i) {
                printf("%d, \n", ptr[i]);
            }
    }


    return 0;
}
