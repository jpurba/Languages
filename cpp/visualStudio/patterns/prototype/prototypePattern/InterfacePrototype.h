#ifndef __INTERFACEPROTOTYPE_H__
#define __INTERFACEPROTOTYPE_H__

#include <memory>

using namespace std;


class InterfacePrototype
{
public:
	virtual ~InterfacePrototype() {}
	virtual unique_ptr<InterfacePrototype> clone() = 0; // Pure virtual
	virtual const double getWidth() const          = 0; // Pure virtual
	virtual const double getHeight() const         = 0; // Pure virtual
	virtual const double getSpeed() const          = 0; // Pure virtual
	virtual void setWidth(const double &w)         = 0; // Pure virtual
	virtual void setHeight(const double& h)        = 0; // Pure virtual
	virtual void setSpeed(const double& s)         = 0; // Pure virtual

protected:
	double _width;
	double _height;
	double _speed;
};

#endif //__INTERFACEPROTOTYPE_H__