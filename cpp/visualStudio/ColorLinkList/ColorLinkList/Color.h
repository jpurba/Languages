#ifndef COLORS_H
#define COLORS_H

#include <iostream>
#include <string>

using namespace std;

//this class stroes the individual colors
class Color
{
private:
    string color;
    Color* next;

public:
    Color();   // constructor

    void setColor(string color);
    void setNext(Color* next);
    string getColor(void);
    Color* getNext(void);

};


#endif // COLORS_H