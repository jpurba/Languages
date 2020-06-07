#ifndef CLOCK_TYPE_H
#define CLOCK_TYPE_H

class ClockType
{
public:
	void setTime(int, int, int);
	void getTime(int&, int&, int&) const;
	void printTime() const;
	void incrementSeconds(void);
	void increamentMinutes(void);
	void incrementHours(void);
	bool equalTime(const ClockType&) const;

private:
	int hr;
	int min;
	int sec;
};

#endif
