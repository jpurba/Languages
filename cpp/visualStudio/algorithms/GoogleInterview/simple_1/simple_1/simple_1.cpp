// simple_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int what(int a, int b) {
    int x = a, y = b, z = 0;
    while (x > 0) {
        std::cout << "x = "<<x<<" ; y =  "<<y<<" ; z = "<<z<<std::endl;
        z = z + y;
        x = x - 1;
        std::cout << "x = " << x << " ; y =  " << y << " ; z = " << z << std::endl;
    }
    return z;
}

int main()
{
    std::cout << what(10, 2) << std::endl;
    std::cout << what(5, 3) << std::endl;
    return 0;
}

