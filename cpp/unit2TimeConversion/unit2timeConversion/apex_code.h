#pragma once
//
// Don't modify code in this file.
//
#include <sstream>

#ifndef APEXLAB_APEX_CODE_H
#define APEXLAB_APEX_CODE_H

#define SECONDS_IN_MINUTES 60
#define MINUTES_IN_HOURS   60
#define MAX_HOURS          12
#define ZERO                0

int divTwelve(int hours);
int modSixty(int min);
int divideSixty(int min);
int compareInput(int input, int threshold);

void minutes_to_12hour_time(std::stringstream& cin, std::stringstream& cout);
void numbers_to_12hour_time(std::stringstream& cin, std::stringstream& cout);

#endif //APEXLAB_APEX_CODE_H
