// timeConversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "timeConversion.h"


using namespace std;

int divideSixty(int min) {
    return min / MINUTES_IN_HOURS;
}

int modSixty(int min) {
    return min % MINUTES_IN_HOURS;
}

int divTwelve(int hours) {
    return hours / MAX_HOURS;
}


void min2Hours12(void) {
    int inMinutes;
    int outHours;
    int outMinutes;

    cout << "\nHW Basics of C++ - Apex Lab Part 1" << endl;
    cout << "Enter minutes number: ";
    cin >> inMinutes;

    outMinutes = modSixty(inMinutes);
    outHours = divideSixty(inMinutes);

    if ((outHours % MAX_HOURS) == ZERO) {   // check for multiple of 12
        outHours = ZERO;
    }
    else if (outHours > MAX_HOURS) {
        outHours -= MAX_HOURS;
    }

    cout << "\nInput:\"" << inMinutes << "\" --> Output:\"" << outHours << ":" << outMinutes << " !\"" << endl;

}

void secMinHours2Hours(void) {
    int     inMinutes, outMinutes, outMin, totalMin;
    double  inHours;
    int     inSecond, outSecond;
    int     hoursInteger, hoursFraction, outHours, totalHours, remHours;

    cout << "\n\n\nHW Basics of C++ - Apex Lab Part 2" << endl;
    cout << "Enter <hours> <minutes> <second>: ";
    cin >> inHours >> inMinutes >> inSecond;


    totalHours = 0;
    // Calculate seconds part
    outMinutes = divideSixty(inSecond);
    outSecond = modSixty(inSecond);

    if ((outMinutes % SECONDS_IN_MINUTES) == ZERO) {  // check for multiple of 60
        outMinutes = ZERO;
    }
    else if (outMinutes > MINUTES_IN_HOURS) {
        outMinutes -= MINUTES_IN_HOURS;
    }

    // Calculate Minutes part
    outMinutes = outMinutes + inMinutes;  // add minutes from seconds
    outMin = modSixty(outMinutes);
    outHours = divideSixty(outMinutes);

    if ((outHours % MAX_HOURS) == ZERO) {   // check for multiple of 12
        outHours = ZERO;
    }
    else if (outHours > MAX_HOURS) {
        outHours -= MAX_HOURS;
    }

    // Calculate hours part
    hoursInteger = (int)inHours;       // take integer part
    hoursFraction = (inHours - hoursInteger) * MINUTES_IN_HOURS;

    outMin += hoursFraction;  // add minutes from fraction hours
    totalMin = modSixty(outMin); // re-calculate the minutes part
    totalHours = divideSixty(outMin);

    totalHours += outHours;

    if ((totalHours % MAX_HOURS) == ZERO) {   // check for multiple of 12
        totalHours = ZERO;
    }
    else if (totalHours > MAX_HOURS) {
        totalHours -= MAX_HOURS;
    }

    hoursInteger += totalHours;  //add hours from minutes
    totalHours = divTwelve(hoursInteger);
    remHours = modSixty(hoursInteger);

    cout << "\nInput:\"" << inHours << " " << inMinutes << " " << inSecond << "\" --> Output:\"" << remHours << ":" << totalMin << "." << outSecond << " !\"" << endl;

}


int main() {

    min2Hours12();
    secMinHours2Hours();

    return 0;

}
