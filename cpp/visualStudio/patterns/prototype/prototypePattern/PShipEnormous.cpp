#include <memory>
#include <iostream>
#include "PShipEnormous.h"

using namespace std;

// ----------
// Constructor
// ----------
PShipEnormous::PShipEnormous()
{
	cout << "Constructor in PShipEnormous " << endl;
	setWidth(300);
	setHeight(700);
	setSpeed(50);
}

// ----------
// Destructor.
// ----------
PShipEnormous::~PShipEnormous() {

}

// ----------
// Clone.
// ----------
unique_ptr<InterfacePrototype> PShipEnormous::clone() {
	
	return make_unique<PShipEnormous>(*this);

}

// ----------
// getWidth.
// ----------
const double PShipEnormous::getWidth() const {
	return this->_width;
}

// ----------
// getHeight.
// ----------
const double PShipEnormous::getHeight() const {
	return this->_height;
}

// ----------
// getSpeed.
// ----------
const double PShipEnormous::getSpeed() const {
	return this->_speed;
}

// ----------
// setWidth.
// ----------
void PShipEnormous::setWidth(const double &w) {
	this->_width = w;
}

// ----------
// setHeight.
// ----------
void PShipEnormous::setHeight(const double &h) {
	this->_height = h;
}

// ----------
// setSpeed.
// ----------
void PShipEnormous::setSpeed(const double& s) {
	this->_speed = s;
}