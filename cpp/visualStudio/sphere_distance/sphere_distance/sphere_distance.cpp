// sphere_distance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const double PI = 3.1416;

int main()
{
    double sphereRadius;
    double sphereVolume;
    double point1X, point1Y;
    double point2X, point2Y;
    double distance;

    string str;

    cout << "Enter the radius of the sphere: ";
    cin >> sphereRadius;
    cout << endl;

    sphereVolume = (4 / 3) * PI * pow(sphereRadius, 3);

    cout << "The volume of the sphere : " << sphereVolume << endl;
    cout << endl;

    cout << "Enter the coordinates of two points in X-Y plane:";
    cin >> point1X >> point1Y >> point2X >> point2Y;
    cout << endl;

    distance = sqrt(pow(point2X - point1X, 2) + pow(point2Y - point1Y, 2));

    cout << "The distance between the points "
        << "(" << point1X << ", " << point1Y << ") and "
        << "(" << point2X << ", " << point1Y << ") is: "
        << distance << endl << endl;

    //cout << "Enter the sentence: ";
    //cin >> str;
    str = "Programming with C++";
    cout << "The number of characters. "
        << "including blanks, in \n           \"" << str
        << "\" is: " << str.length() << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
