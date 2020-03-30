#ifndef __PSHIPTINY_H__
#define __PSHIPTINY_H__

#include <memory>
#include "InterfacePrototype.h"

using namespace std;

class PShipTiny : public InterfacePrototype
{
public:

	PShipTiny();

	virtual ~PShipTiny();

	virtual const double getWidth() const override;
	virtual const double getHeight() const override;
	virtual const double getSpeed() const override;
	virtual void setWidth(const double& w) override;
	virtual void setHeight(const double& h) override;
	virtual void setSpeed(const double& s) override;

	unique_ptr<InterfacePrototype> clone() override;

};


#endif  //__PSHIPTINY_H__

