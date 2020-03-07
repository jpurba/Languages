//This program takes input minutes and converts into a 12hr time
//
#include <iostream>
#include <sstream>
#include "apex_code.h"

using namespace std;

void minutes_to_12hour_time(stringstream& cin, stringstream& cout) {
    int minutes, hours;
    cout << "enter in minutes: " << endl;
    cin >> minutes;

    hours = minutes / 60;
    minutes = minutes % 60;



    cout << hours << " hours " << minutes << " minutes " << endl;

}

void numbers_to_12hour_time(stringstream& cin, stringstream& cout)
{
    int seconds, minutes, hours;
    cout << "enter in total hours, minutes, and seconds: " << endl;

    //cin >> hours, minutes, seconds;        // JP code review: this is wrong syntax, minutes and second will be ignored.
    // JP code review: the correct syntax for 3 inputs is as follow:
    cin >> hours >> minutes >> seconds;

    cout << "minutes = " << minutes << endl;
    cout << "seconds = " << seconds << endl;

    hours = minutes / 60;
    minutes = seconds / 60;
    seconds = seconds % 60;

    cout << hours << "hours" << minutes << "minutes" << seconds << "seconds" << endl;

}
