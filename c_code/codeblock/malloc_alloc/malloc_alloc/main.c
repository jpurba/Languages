#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <malloc.h>


#define ALLOCSIZE 1000 /* size of available space */
static char allocbuff[ALLOCSIZE]; /* STORAGE FOR alloc */
static *allocp = allocbuff;       /* next free position */

char *alloc(int n) { /* return pointer to n characters */
    if(n <= ALLOCSIZE) { /* it fits */
        allocp += n;
        return allocp -n;  /* old p */
    }
    else {
        printf("Not enough room !! more than 1000 !!!");
        return 0;
    }
}
/*
void *myMalloc(size_t size){
    void *p = sbrk(0);  // starting heap
    void *request = sbrk(size);
    if(request == (void*) - 1) {
        return NULL; // sbrk failed
    }
    else {
        assert(p == request); // Not thread safe
        return p;
    }
}
*/

void inputMalloc(void){

    int n, i, sum=0;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n*sizeof(int));
    // if memory cannot be allocated
    if(ptr == NULL){
        printf("Error! memory not allocated. ");
        exit(0);
    }
    printf("Enter elements: ");
    for(i=0; i< n; ++i) {
        scanf("%d", ptr+1);
        sum += *(ptr+1);
    }
    printf("\nsum = %d \n", sum);

    free(ptr);
}

void inputRealloc(void){

    int n, i, sum=0;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n*sizeof(int));
    // if memory cannot be allocated
    if(ptr == NULL){
        printf("Error! memory not allocated. ");
        exit(0);
    }
    printf("Enter elements: ");
    for(i=0; i< n; ++i) {
        scanf("%d", ptr+i);
        printf("index %d = %d \n", i, *(ptr+i));
        sum += *(ptr+1);
    }
    printf("\nsum = %d \n", sum);

    // Realloc
    ptr = realloc(ptr, (n+5) * sizeof(int));
    for(i=0;i<n;++i){
        printf("index %d = %d \n", i, *(ptr+i));
    }
    for(i=n; i<(n+5); ++i){
        *(ptr+i) = 5*i;
    }
    for(i=0;i<(n+5);++i){
        printf("index %d = %d \n", i, *(ptr+i));
    }
    free(ptr);
}


int main()
{
    int *ptr;
    int *allocPtr;
    //int *ptrMyMalloc;
    int i;

    inputMalloc();
    inputRealloc();
    ptr = (int *) malloc(15*sizeof(*ptr)); /* a block of 15 integers */
    if (ptr != NULL){
        *(ptr + 2) = 129; /* assign 129 to third integers */
        *(ptr + 5) = 480; /* assign 480 to sixth integers */
        printf("Value of the 3rd integer is %d \n", *(ptr + 2));
        printf("Value of the 6th integer is %d \n", *(ptr + 5));
    }

    printf("Size of ptr = %d \n", sizeof(ptr));
    printf("Hello world!\n");

    allocPtr = alloc(150);
    if(allocPtr!=NULL){
        *(allocPtr + 57) = 1025;
        *(allocPtr + 101) = 517;
        printf("Value of the 58th integer is %d \n", *(allocPtr + 57));
        printf("Value of the 101th integer is %d \n", *(allocPtr + 101));
    }

    printf("Size of allocPtr = %d \n", sizeof(allocPtr));

/*
    ptrMyMalloc = (int *) myMalloc(10*sizeof(int));
    if(ptrMyMalloc != NULL){
        for(i=0; i<10; ++i){
            *(ptrMyMalloc + i) = 3*i;
        }
        for(i=0; i<10; ++i){
            printf("index %d = %d \n", i,*(ptrMyMalloc + i));
        }
    }
*/
    free(ptr);
    free(allocPtr);
    return 0;
}
