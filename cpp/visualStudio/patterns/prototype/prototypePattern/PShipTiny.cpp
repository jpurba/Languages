#include <memory>
#include <iostream>
#include "PShipTiny.h"

using namespace std;

// ----------
// Constructor
// ----------
PShipTiny::PShipTiny()
{
	cout << "Constructor in PShipTiny " << endl;
	setWidth(50);
	setHeight(100);
	setSpeed(500);
}

// ----------
// Destructor.
// ----------
PShipTiny::~PShipTiny() {

}

// ----------
// Clone.
// ----------
unique_ptr<InterfacePrototype> PShipTiny::clone() {

	return make_unique<PShipTiny>(*this);

}

// ----------
// getWidth.
// ----------
const double PShipTiny::getWidth() const {
	return this->_width;
}

// ----------
// getHeight.
// ----------
const double PShipTiny::getHeight() const {
	return this->_height;
}

// ----------
// getSpeed.
// ----------
const double PShipTiny::getSpeed() const {
	return this->_speed;
}

// ----------
// setWidth.
// ----------
void PShipTiny::setWidth(const double& w) {
	this->_width = w;
}

// ----------
// setHeight.
// ----------
void PShipTiny::setHeight(const double& h) {
	this->_height = h;
}

// ----------
// setSpeed.
// ----------
void PShipTiny::setSpeed(const double& s) {
	this->_speed = s;
}