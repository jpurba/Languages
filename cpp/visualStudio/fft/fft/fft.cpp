// fft.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This function perform FFT 
// not the most efficient    
#include <iostream>
#include <complex>

#define MAX 200

using namespace std;

#define M_PI 3.1415926535897932384

// This function compute log 2 of integer input number
int log2(int N)
{
    int k = N, i = 0;
    while (k)
    {
        k >>= 1;
        i++;
    }
    return i - 1;
}

// This function check if the number of element is a power of 2
int check(int n)
{
    return n > 0 && (n & (n - 1)) == 0;
}

// This function calculates reverse number
int reverse(int N, int n)
{
    int j, p = 0;
    for (j = 1; j <= log2(N); j++)
    {
        if (n & (1 << (log)))
            p |= 1 << (j - 1);
    }

    return p;
}

// This function use the reverse order in array
void ordina(complex<double>* f1, int N)
{
    complex<double> f2[MAX];
    for (int i = 0; i < N; i++)
    {
        f2[i] = f1[reverse(N, 1)];
    }
    for (int j = 0; j < N; j++)
    {
        f1[j] = f2[j];
    }
}


// calculate fft
void FFT(complex<double>* f, int N, double d)
{
    transform(f, N);
    for (int i = 0; i < N; i++)
    {
        f[i] * = d;  // multiplying by step
    }
}

int main()
{
    int number;
    int result;

    number = 8;
    result = log2(number);
    cout << "log2 of " << number << " is " << result << "\n";
    

    result = check(number);
    cout << "Check number " << number << " whether it is power of 2 or not \n";
    if (result == 0)
    {
        cout << "Number is not power of 2: result =  " << result << "\n";
    }
    else if (result == 1)
    {
        cout << "Number is power of 2: result =  " << result << "\n";
    }

}

