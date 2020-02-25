#ifndef TIMECONVERSION_H_
#define TIMECONVERSION_H_

#define SECONDS_IN_MINUTES 60
#define MINUTES_IN_HOURS   60
#define SEC_IN_MIN 60
#define MAX_HOURS 12
#define ZERO       0

void min2Hours12(void);
void secMinHours2Hours(void);

int min2Minutes(int min);
int min2Hours(int min);
int sec2Minutes(int sec);
int sec2Seconds(int sec);

#endif
