/*
 ============================================================================
 Name        : fibonacci.c
 Author      : Josua Purba
 Version     : 
 Copyright   : copyright 2018 - 2028
 Description : Fibonacci module examples
 ============================================================================
 */
#include <stdio.h>


int main()
{
    
    int x =5;
    int*p, m; 
    int **q = &p; /* q is pointer to pointer */
    int ***r = &q; /* r is pointer to pointer to pointer */
    float fl;
    float *fp;
    p = &x;
    m = 201;

    printf("x=%d; (p = &q)= %d; pointer p point to address = 0x%x \n",x, *p, p);

    *p = 199; /* assigned new value to x */
    printf("x=%d; (p = &q)= %d; pointer p point to address = 0x%x \n",x, *p, p);

    p = &m;
    printf("m=%d; (p = &m)= %d; pointer p point to address = 0x%x \n",m, *p, p); 

    printf("q is pointer to pointer p; (q = &p)= %d; pointer q point to address p = 0x%x \n", *q, p);
    printf("Address of q is = 0x%x; final value q point to is = %d \n", q, **q);  

    printf("r is pointer to pointer to pointer p; (r = &q)= %d; pointer r point to address r = 0x%x \n", *r, q);
    printf("Address of r is = 0x%x; final value r point to is = %d \n", r, ***r);
    

    fp = &fl;
    *fp = 100.23; /* assign fp to number */
    printf("fl = %f; (fp = &fl) = %f; fp point to address = 0x%x \n", fl, *fp, fp);

    return 0;
}
