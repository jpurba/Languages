#include <stdio.h>
#include <stdlib.h>

union job {
    float salary;
    int workerNo;
} job1;

int main()
{
    job1.salary = 56,750;

    printf("Union example: first input salary ...\n");
    printf("Salary : $ %f.2\n", job1.salary);

    job1.workerNo = 103;

    printf("\nSecond, over write with workerNo ...\n");
    printf("Salary : $ %f.2\n", job1.salary);
    printf("Worker number: %d\n", job1.workerNo);


    return 0;
}
