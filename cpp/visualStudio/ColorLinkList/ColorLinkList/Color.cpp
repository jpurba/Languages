#include "Color.h"

//this class stroes the individual colors

Color::Color(void)
{
    this->color = " ";
    this->next = NULL;
}

void Color::setColor(string color)
{
    if (strcmp(color.c_str(), "red") == 0 ||
        strcmp(color.c_str(), "green") == 0 ||
        strcmp(color.c_str(), "blue") == 0)
    {
        this->color = color;
    }
    else
    {
        cout << endl << "Its not a primary color" << endl;
        cout << "Exit\n\n" << endl;
        exit(EXIT_FAILURE);
    }
}

void Color::setNext(Color* next)
{
    this->next = next;
}

string Color::getColor(void)
{
    return this->color;
}

Color* Color::getNext(void)
{
    return this->next;
}

