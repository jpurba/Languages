#include <iostream>


using namespace std;


int main () {

    int x = 5;
    int& x_ref = x; // reference variable, same address and data as x
    // reference variable
    // 1. can't be null
    // 2. can't be changed
    // 3. must be initialized

    cout << "x = " << x << "; x address is "<< &x << endl;
    cout << "x_ref = "<< x_ref <<"; x_ref address is "<< &x_ref << endl;

    string b = "Josua Purba";
    cout << "\nb = " << b << "; b address is " << &b << endl;

    // * (star) known as the derefence operator
    // Think of as "Get Value at"
    // ALso used to create pointer

    int a = 11;
    cout << "\na = " << a << "; *&*&a = " << *&*&a << endl;
    cout << "*&a = " << *&a << "; address of a = " << &a << endl;
    int* p1 = &a;
    int* p2 = &a;
    cout << "\n*p1 point to " << p1 << "; address of a = " << &a << endl;
    cout << "Value in the address that p1 point to is " << *p1 <<endl;
    cout << "Value in the address that p2 point to is " << *p2 <<endl;

    //Pointer to pointer
    int **q = &p1; /* q is pointer to pointer */
    int ***r = &q; /* r is pointer to pointer to pointer */

    cout <<"\nq point to "<< q <<"; address of p1 is "<< &p1 << endl; 
    cout <<"Value q point to "<< *q << endl;    
    cout <<"Value p1 point to "<< **q << endl;


    cout <<"\nr point to "<< r <<"; address of q is "<< &q << endl;
    cout <<"Value r point to "<< *r << endl;
    cout <<"Value q point to "<< *q << endl;    
    cout <<"value p1 point to "<< ***r << endl;


    int v[5]={101,290,323,678,1254};
    p1 = &v[0];
    cout <<"\n*p1 point to "<< p1 <<"; and the value in this address is "<< *p1 << endl;
    p2 = &v[1];
    cout <<"\n*p2 point to "<< p2 <<"; and the value in this address is "<< *p2 << endl;
    cout <<"\naddress of array is "<< v <<"; v[0] =  "<< *v << endl;
    cout <<"\nv[4] = "<< v[4] <<"; or v[4] = *(v+4) =   "<< *(v+4) << endl;
    cout <<"\n*(p2+2) = "<< *(p2+2) << endl;

    *(p2+2) = 9134;
    cout <<"\n*(p2+2) = "<< *(p2+2) << endl;

    return 0;

}
