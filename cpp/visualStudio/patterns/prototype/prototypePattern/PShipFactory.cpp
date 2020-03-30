#include "PShipTiny.h"
#include "PShipNormal.h"
#include "PShipEnormous.h"
#include "PShipFactory.h"

using namespace std;

// ----------
// Constructor
// ----------
PShipFactory::PShipFactory() {
	prototypeInit();
}

// ----------
// Destructor
// ----------
PShipFactory::~PShipFactory() {

}

// ----------
// Initialization of every prototype
// ----------
void PShipFactory::prototypeInit(void) {
	mapOfPrototypes[SHIP_TINY] = make_unique<PShipTiny>();
	mapOfPrototypes[SHIP_NORMAL] = make_unique<PShipNormal>();
	mapOfPrototypes[SHIP_ENORMOUS] = make_unique<PShipEnormous>();
}

// ----------
// retrieveSHip.
// ----------
unique_ptr<InterfacePrototype> PShipFactory::retrieveShip(SHIP_TYPE shipType) {
	
	return mapOfPrototypes[shipType]->clone();
}