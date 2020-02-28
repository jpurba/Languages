//
//
#include <iostream>
#include <sstream>
#include "apex_code.h"

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

void minutes_to_12hour_time(stringstream& cin, stringstream& cout) {
    // Place code for translating minutes to 12 hour time
    // Pretend this is your main function and you can use cin/cout
    // as you would in main.

    // If you want to print to the console for debugging use std::cout.
    // Use cout for your final solution.

    // First you want to get user input with cin
    // Do any needed calculations
    // Create output with cout

    int inMinutes;
    int outHours;
    int outMinutes;
    cin >> inMinutes;

    outMinutes = modSixty(inMinutes);
    outHours = divideSixty(inMinutes);

    if ((outHours % MAX_HOURS) == ZERO) {   // check for multiple of 12
        outHours = ZERO;
    }
    else if (outHours > MAX_HOURS) {
        outHours -= MAX_HOURS;
    }

    cout << outHours << ":" << outMinutes << " !";


}

void numbers_to_12hour_time(stringstream& cin, stringstream& cout)
{
    // Place code for translating hours, minutes and seconds to 12 hour time
    // Pretend this is your main function and you can use cin/cout
    // as you would in main.

    // If you want to print to the console for debugging use std::cout.
    // Use cout for your final solution.

    int     inMinutes, outMinutes, outMin, totalMin;
    double  inHours;
    int     inSecond, outSecond;
    int     hoursInteger, hoursFraction, outHours, totalHours, remHours;

    cin >> inHours >> inMinutes >> inSecond;

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

    cout << remHours << ":" << totalMin << "." << outSecond << " !";
}
