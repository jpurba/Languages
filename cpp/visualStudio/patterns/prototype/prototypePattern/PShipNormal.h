#ifndef __PSHIPNORMAL_H__
#define __PSHIPNORMAL_H__

#include <memory>
#include "InterfacePrototype.h"

using namespace std;

class PShipNormal : public InterfacePrototype
{
public:

	PShipNormal();

	virtual ~PShipNormal();

	virtual const double getWidth() const override;
	virtual const double getHeight() const override;
	virtual const double getSpeed() const override;
	virtual void setWidth(const double& w) override;
	virtual void setHeight(const double& h) override;
	virtual void setSpeed(const double& s) override;

	unique_ptr<InterfacePrototype> clone() override;

};


#endif  //__PSHIPNORMAL_H__
