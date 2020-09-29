/**********************************************************************
*  firfltr.c - An FIR filter
*
*  Block diagram:
*           --------
*  x(n) --->| b(n) |---> y(n)
*           --------
*  where
*    x(n) is input signal
*    b(n) is impulse response (coefficients) of FIR filter
*    y(n) is filtered output
*
*  This program is executed by keying in the following command:
*
*    firfltr infile coefile outfile <enter>
*
*  where
*    infile is file name of input signal
*    coefile is file name of filter coefficients
*    outfile is file name output signal
*
**********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 2048   /* maximum order of filter */
#define BUFFERSIZE 100 /* array size */

float xn[BUFFERSIZE] = {1.06066, 1.48153, 1.33651, 0.68099,  
	-0.23465, -1.06066, -1.48153, -1.33651, -0.68099, 0.23465,
	1.06066, 1.48153, 1.33651, 0.68099, -0.23465, -1.06066,
	-1.48153, -1.33651, -0.68099, 0.23465, 1.06066, 1.48153, 
	1.33651, 0.68099, -0.23465, -1.06066, -1.48153, -1.33651,
	-0.68099, 0.23465, 1.06066, 1.48153, 1.33651, 0.68099,
	-0.23465, -1.06066, -1.48153, -1.33651, -0.68099, 0.23465,
    1.06066, 1.48153, 1.33651, 0.68099, -0.23465, -1.06066,
    -1.48153, -1.33651, -0.68099, 0.23465, 1.06066, 1.48153,
    1.33651, 0.68099, -0.23465, -1.06066, -1.48153,-1.33651,
    -0.68099, 0.23465, 1.06066, 1.48153, 1.33651, 0.68099, 
    -0.23465, -1.06066, -1.48153, -1.33651, -0.68099, 0.23465,
    1.06066, 1.48153, 1.33651, 0.68099, -0.23465, -1.06066, 
    -1.48153, -1.33651, -0.68099, 0.23465, 1.06066, 1.48153,
    1.33651, 0.68099, -0.23465, -1.06066, -1.48153, -1.33651,
    -0.68099, 0.23465, 1.06066, 1.48153, 1.33651, 0.68099,
    -0.23465, -1.06066, -1.48153, -1.33651, -0.68099, 0.23465};

/*****************************************************************
*  SHIFT - This function updates signal vector of order N
*          data stored as [x(n)  x(n-1) ... x(n-N+1)]
*****************************************************************/

void shift(float *x, int N, float new)
{
	int i;
	for (i=N-1; i>0; i--)
	{
		x[i] = x[i-1];    /* shift old data x[n-1) */
	}
	x[0] = new;           /* insert new data x(n) */ 

}

/*****************************************************************
*  FIR - This function performs FIR filtering (linear convolution)
*          ntap-1
*    y(n) = sum  hi * x(n-i)
*           i=0
*****************************************************************/
float fir(float *x, float *h, int ntap)
{
	float yn = 0.0;     /* output of FIR filter */
	int i;   
	for (i=0; i<ntap; i++)
	{
		yn += h[i]*x[i];    /* convolution of x(n) with h(n) */
	}

	return (yn);   /* return y(n) to main function */
}

void main (int argc, char *arv[])
{
	/* */
	void shift(float *, int, float);
}




