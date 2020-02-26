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

int hours2Hours(int hours) {
    return hours / MAX_HOURS;
}

int hours2Minutes(int hours) {
    return hours % MINUTES_IN_HOURS;
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
    int     inMinutes, outMinutes, outMin;
    double  inHours;
    int     inSecond, outSecond;
    int     hoursInteger, hoursFraction, outHours, totalHours;

    cout << "Enter <hours> <minutes> <second>: ";
    cin >> inHours >> inMinutes >> inSecond;

    totalHours = 0;
    // Calculate seconds part
    outMinutes = sec2Minutes(inSecond);
    outSecond = sec2Seconds(inSecond);

    if((outMinutes % SECONDS_IN_MINUTES) == ZERO) {  // check for multiple of 60
        outMinutes = ZERO;
    }
    else if (outMinutes > MINUTES_IN_HOURS) {
        outMinutes = outMinutes - MINUTES_IN_HOURS;
    }

    cout << "Input seconds:\"" << inSecond << "\" --> Output:\"" << totalHours<< ":" << outMinutes << ":" << outSecond << " !\"" << endl;

    // Calculate Minutes part
    outMinutes = outMinutes + inMinutes;
    outMin = min2Minutes(outMinutes);
    outHours = min2Hours(outMinutes);

    if ((outHours % MAX_HOURS) == ZERO) {   // check for multiple of 12
        outHours = ZERO;
    }
    else if (outHours > MAX_HOURS) {
        outHours = outHours - MAX_HOURS;
    }

    cout << "Input Minutes:\"" << inMinutes << "\" --> Output + seconds:\"" << outHours << ":" << outMin << ":" << outSecond << " !\"" << endl;



    // Calculate hours part
    hoursInteger = (int)inHours;       // take integer part
    outHours = hours2Hours(hoursInteger);
    hoursFraction = (inHours - hoursInteger) * MINUTES_IN_HOURS;
    cout << "outHours = " << outHours << endl;
    cout << "hoursInteger = " << hoursInteger << endl;

    if ((outHours % MAX_HOURS) == 0) {  // check for multiple of 12
        // fraction of hours
        hoursInteger = 0;
        cout << "\nMod 12 equal zero\n" << endl;
    }
    else if (outHours > MAX_HOURS) {
        hoursInteger = hoursInteger - MAX_HOURS;
        cout << "\nhoursInteger larger than 12\n" << endl;
    }

    // fraction of hours

    cout << "inHours (double) = " << inHours << "; hours(int) = " << hoursInteger;
    cout << "; hoursFraction (in minutes) = " << hoursFraction << endl;

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