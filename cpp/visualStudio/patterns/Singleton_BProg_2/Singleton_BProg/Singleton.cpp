#include <iostream>
#include "Singleton.h"

using namespace std;

//------------
// Constructor
//------------
Singleton::Singleton() {
	cout << "Hello from constructor" << endl;
}

//------------
// Destructor
//------------
Singleton::~Singleton() {
	cout << "Goodbye from destructor" << endl;
}

//------------
// Gets Instance
//------------
Singleton& Singleton::theInstance() {
	static Singleton uniqueInstance;
	return uniqueInstance;
}