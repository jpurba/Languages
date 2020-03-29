#ifndef __SUBJECT_H__
#define __SUBJECT_H__

#include <list>
#include "InterfaceSubject.h"

class Subject : public InterfaceSubject
{
public:
	Subject();           // constructor
	virtual ~Subject();  // destructor

	void attach(InterfaceObserver *observer);
	void detach(InterfaceObserver* observer);
	void notify();

	void createMessage(string message = "Empty");
	void howManyObserver();

private:
	list<InterfaceObserver*> _listObserver;
	string _message;
};

#endif // __SUBJECT_H__
