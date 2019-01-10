#include <iostream>
using namespace std;

template <class Jobi>

Jobi addJobi (Jobi a, Jobi b){
    return a+b;
}

 
template <class FIRST, class SECOND>
FIRST addJosua (FIRST x, SECOND y){
    return x+y;
}


int main () {
    int x=7, y=43, z;
    double a = 5.12, b= 12.312, c;
    long r = 12903451, s = 12345678, t;

    z = addJobi (x,y);
    cout << "Integer addition: " << z << endl;

    c = addJobi (a,b);
    cout << "double addition: " << c << endl;

    t = addJobi (r,s);
    cout << "long addition: " << t << endl;


    c = addJosua (a,x);
    cout << a << " mix addition + " << x<< " = " << c << endl;

    t = addJosua (r,b);
    cout << r << " mix addition + " << b<< " = " << t << endl;

    z = addJosua (y,a);
    cout << y << " mix addition + " << a << " = " << z << endl;

}
