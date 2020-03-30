#include <memory>
#include <iostream>
#include "PShipNormal.h"

using namespace std;

// ----------
// Constructor
// ----------
PShipNormal::PShipNormal()
{
	cout << "Constructor in PShipNormal " << endl;
	setWidth(200);
	setHeight(400);
	setSpeed(250);
}

// ----------
// Destructor.
// ----------
PShipNormal::~PShipNormal() {

}

// ----------
// Clone.
// ----------
unique_ptr<InterfacePrototype> PShipNormal::clone() {

	return make_unique<PShipNormal>(*this);

}

// ----------
// getWidth.
// ----------
const double PShipNormal::getWidth() const {
	return this->_width;
}

// ----------
// getHeight.
// ----------
const double PShipNormal::getHeight() const {
	return this->_height;
}

// ----------
// getSpeed.
// ----------
const double PShipNormal::getSpeed() const {
	return this->_speed;
}

// ----------
// setWidth.
// ----------
void PShipNormal::setWidth(const double& w) {
	this->_width = w;
}

// ----------
// setHeight.
// ----------
void PShipNormal::setHeight(const double& h) {
	this->_height = h;
}

// ----------
// setSpeed.
// ----------
void PShipNormal::setSpeed(const double& s) {
	this->_speed = s;
}