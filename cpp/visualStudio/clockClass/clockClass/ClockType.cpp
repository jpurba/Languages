#include <iostream>
#include "ClockType.h"

using namespace std;

void ClockType::setTime(int hours, int minutes, int seconds) {

	if (0 <= hours && hours < 24)
		hr = hours;
	else
		hr = 0;

	if (0 <= minutes && minutes < 60)
		min = minutes;
	else
		min = 0;

	if (0 <= seconds && seconds < 60)
		sec = seconds;
	else
		sec = 0;

}

void ClockType::getTime(int& hours, int& minutes, int& seconds) const {

	hours = hr;
	minutes = min;
	seconds = sec;

}

void ClockType::printTime(void) const
{
	if (hr < 10)
		cout << "0";
	cout << hr << ":";

	if (min < 10)
		cout << "0";
	cout << min << ":";

	if (sec < 10)
		cout << "0";
	cout << sec;

	cout << endl;
}

void ClockType::incrementSeconds(void) {

	sec++;
	if (sec > 59)
		hr = 0;
}

void ClockType::increamentMinutes(void) {

	min++;
	if (min > 59)
		min = 0;
}

void ClockType::incrementHours(void) {

	hr++;
	if (hr > 23)
		hr = 0;

}

bool ClockType::equalTime(const ClockType& otherClock) const {

	return (hr == otherClock.hr
		&& min == otherClock.min
		&& sec == otherClock.sec);
}
