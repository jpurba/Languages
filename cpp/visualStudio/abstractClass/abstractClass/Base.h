#ifndef BASE_H
#define BASE_H

class Base
{
private:
	void baseDone(int value);
	virtual void doDone(int number) = 0; // pure virtual function

public:

	Base();  // Constructor
	~Base(); // Destructor

	void Execute();
};

#endif

