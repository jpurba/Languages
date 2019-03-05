#ifndef FUNCTIONPOINTER_H_
#define FUNCTIONPOINTER_H_
 
int add(int a, int b);
void printHello();
void printInput(char *in);
int computeSum(int (*funcp)(int), int lo, int hi);
void B(void (*ptr)());  // for call-back
void bubbleSort(int *A, int n);  // use buble sort algorithm
void bubbleSortCall(int *A, int n, int (*compare)(int,int));  // use buble sort algorithm
int compare(int a, int b);
int absoluteCompare(int a, int b);
int compareQuick(const void* a, const void* b);
int computeSum(int (*funcp)(int), int lo, int hi);
int func (int arg);
#endif
