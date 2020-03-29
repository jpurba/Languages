#ifndef __INTERFACEOBSERVER_H__
#define __INTERFACEOBSERVER_H__

#include <string>

using namespace std;

class InterfaceObserver {
public:
	virtual ~InterfaceObserver() {}; // virtual method
	virtual void update(const string& messageFromSubject) = 0; // Pure virtual method
};

#endif // __INTERFACEOBSERVER_H_