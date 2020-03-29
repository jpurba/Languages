#ifndef __OBSERVER_H__
#define __OBSERVER_H__
#include "interfaceObserver.h"
#include "Subject.h"

class Observer : public InterfaceObserver
{
public:
	Observer(Subject& subject);
	virtual ~Observer();

	void update(const string& messageFromSubject);
	void removeMeFromTheList();
	void printInfo();

private:
	string     _messageFromSubject;
	Subject&   _subject;
	static int _staticNumber;
	int        _number;
};

#endif // __OBSERVER_H__

