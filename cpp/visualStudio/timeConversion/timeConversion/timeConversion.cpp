// timeConversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "timeConversion.h"

using namespace std;

int min2Hours(int min) {
    return min / MINUTES_IN_HOURS;
}

int min2Minutes(int min) {
    return min % MINUTES_IN_HOURS;
}

int sec2Minutes(int sec) {
    return sec / SECONDS_IN_MINUTES;
}

int sec2Seconds(int sec) {
    return sec % SECONDS_IN_MINUTES;
}

void min2Hours12(void) {
    int inMinutes;
    int outHours;
    int outMinutes;

    cout << "Enter minutes number: ";
    cin >> inMinutes;

    outMinutes = min2Minutes(inMinutes);
    outHours = min2Hours(inMinutes);

    if ((outHours % MAX_HOURS) == ZERO) {   // check for multiple of 12
        outHours = ZERO;
    }
    else if (outHours > MAX_HOURS) {
        outHours = outHours - MAX_HOURS;
    }

    cout << "Input:\"" << inMinutes << "\" --> Output:\"" << outHours << ":" << outMinutes << " !\"" << endl;

}

void secMinHours2Hours(void) {
    int     inMinutes, outMinutes;
    double  inHours;
    int     inSecond, outSecond;
    int     hoursInteger, hoursFraction, outHours, totalHours;

    cout << "Enter <hours> <minutes> <second>: ";
    cin >> inHours >> inMinutes >> inSecond;


    // Calculate hours part
    hoursInteger = (int)inHours;       // take integer part
    if ((hoursInteger % MAX_HOURS) == 0) {  // check for multiple of 12
        hoursInteger = 0;
        cout << "Mod 12 equal zero" << endl;
    }
    else if (hoursInteger > MAX_HOURS) {
        hoursInteger = hoursInteger - MAX_HOURS;
        cout << "hoursInteger larger than 12" << endl;
    }

    // fraction of hours
    hoursFraction = (inHours - hoursInteger) * MINUTES_IN_HOURS;
    cout << "inHours (double) = " << inHours << "; hours(int) = " << hoursInteger;
    cout << "; hoursFraction = " << hoursFraction << endl;

    // ad fraction hours to input minutes
    inMinutes = inMinutes + hoursFraction;
    outMinutes = min2Minutes(inMinutes);
    outHours = min2Hours(inMinutes);

    cout << "inMinutes = " << inMinutes << "; outMinutes = " << outMinutes;
    cout << "; outHours = " << outHours << endl;

    if ((outHours % MAX_HOURS) == 0) {  // check for multiple of 12
        outHours = 0;
    }
    else if (outHours > MAX_HOURS) {
        outHours = outHours - MAX_HOURS;
    }


    cout << "Input:\"" << inHours << " " << inMinutes << " " << inSecond << "\" --> Output:\"" << outHours << ":" << outMinutes << " !\"" << endl;


}


int main() {

    //min2Hours12();
    secMinHours2Hours();



    return 0;

}