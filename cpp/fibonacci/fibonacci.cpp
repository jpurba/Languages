#include <iostream>
#include "fibonacci.h"

using namespace std;

int fib(int input){
    if (input<=1)
        return input;
    else if (input < 3)
        return 1;
    else
        return (fib(input - 1) + fib(input - 2));

}

void printFibo(int input){

    int i;
    cout<<"All Fibonacci sequence up to "<< input << " number: " << endl;
    for(i=0;i<=input;i++)
        cout<<"Fibonacci #: "<< i <<" is "<< fib(i) << endl;
}

int getNumber(void){
    int num;
    
    cout << "Enter positive number: " << endl;
    cin >> num;
    return num;
}

int main () {

    int number;
    int fibNum;

    number = getNumber();
    fibNum = fib(number);    
    cout <<"The " << number <<" fibonacci number is "<< fibNum << endl;
    printFibo(number);


    return 0;

}


