#ifndef __INTERFACESUBJECT_H__
#define __INTERFACESUBJECT_H__

#include "interfaceObserver.h"

class InterfaceSubject {
public:
	virtual ~InterfaceSubject() {}; // destructor virtual method
	virtual void attach(InterfaceObserver *observer) = 0; // Pure virtual method
	virtual void detach(InterfaceObserver* observer) = 0; // Pure virtual method
	virtual void notify()                            = 0; // Pure virtual method

};

#endif // __INTERFACESUBJECT_H__
