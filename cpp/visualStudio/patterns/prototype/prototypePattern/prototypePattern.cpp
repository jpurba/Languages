// prototypePattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PShipTiny.h"
#include "PShipNormal.h"
#include "PShipEnormous.h"
#include "PShipFactory.h"

using namespace std;

int main()
{
    PShipFactory factory;
    
    auto ship1 = factory.retrieveShip(PShipFactory::SHIP_TINY);
    auto ship2 = factory.retrieveShip(PShipFactory::SHIP_NORMAL);
    auto ship3 = factory.retrieveShip(PShipFactory::SHIP_ENORMOUS);
    auto ship4 = factory.retrieveShip(PShipFactory::SHIP_ENORMOUS);
    auto ship5 = factory.retrieveShip(PShipFactory::SHIP_ENORMOUS);
    auto ship6 = factory.retrieveShip(PShipFactory::SHIP_ENORMOUS);

    cout << endl;

    cout << "Address 1 = " << &ship1 << endl;
    cout << "Width = " << ship1->getWidth() << endl;
    cout << "Height = " << ship1->getHeight() << endl;
    cout << "Speed = " << ship1->getSpeed() << endl;

    cout << endl;

    cout << "Address 2 = " << &ship2 << endl;
    cout << "Width = " << ship2->getWidth() << endl;
    cout << "Height = " << ship2->getHeight() << endl;
    cout << "Speed = " << ship2->getSpeed() << endl;

    cout << endl;

    cout << "Address 3 = " << &ship3 << endl;
    cout << "Width = " << ship3->getWidth() << endl;
    cout << "Height = " << ship3->getHeight() << endl;
    cout << "Speed = " << ship3->getSpeed() << endl;
    
    cout << endl;

    cout << "Address 4 = " << &ship4 << endl;
    cout << "Width = " << ship4->getWidth() << endl;
    cout << "Height = " << ship4->getHeight() << endl;
    cout << "Speed = " << ship4->getSpeed() << endl;

    cout << endl;

    cout << "Address 5 = " << &ship5 << endl;
    cout << "Width = " << ship5->getWidth() << endl;
    cout << "Height = " << ship5->getHeight() << endl;
    cout << "Speed = " << ship5->getSpeed() << endl;

    cout << endl;

    cout << "Address 6 = " << &ship6 << endl;
    cout << "Width = " << ship6->getWidth() << endl;
    cout << "Height = " << ship6->getHeight() << endl;
    cout << "Speed = " << ship6->getSpeed() << endl;
}

