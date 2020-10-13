#ifndef ENUMUNION_H_
#define ENUMUNION_H_

typedef enum Days {
	Sunday,
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday
} Weekdays;

typedef union Data {
	int i;
	float f;
	char str[20];
}data;

#endif