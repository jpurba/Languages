#ifndef __PSHIPFACTORY_H__
#define __PSHIPFACTORY_H__

#include <memory>
#include "InterfacePrototype.h"
#include <map>

using namespace std;

class PShipFactory
{
public:
	enum SHIP_TYPE { SHIP_TINY, SHIP_NORMAL, SHIP_ENORMOUS };

	PShipFactory();
	~PShipFactory();

	void prototypeInit(void);
	unique_ptr<InterfacePrototype>retrieveShip(SHIP_TYPE type);

private:
	map<SHIP_TYPE, unique_ptr<InterfacePrototype>> mapOfPrototypes;
};

#endif // !__PSHIPFACTORY_H__

