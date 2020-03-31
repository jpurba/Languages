// gamePlay.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class GamePlay
{
    int level, points;
    char type;
public:
    GamePlay(char GType = 'A') {
        level = 1;
        points = 0;
        type = GType;
    }
    void play(int g);
    void upgrade();
    void display() {
        cout << type << "*" << level << endl;
        cout << points << endl;
    }
};

int main()
{
    // small code for pointer
    char hello[] = "hello";
    char* p = hello;
    while (*p)
    {
        *p += 1; // increase the char value by 1
        p += 1;  // move pointer to the next spot
    }
    cout << hello << endl;

    // small code for change hex value
    char letter = 'A', new_letter;
    int value = 10, result;
    if (islower(letter))
    {
        new_letter = toupper(letter);
        cout << "\n new_letter = " << new_letter << endl;
    }
    else
    {
        new_letter = value + letter;
        cout << "\n new_letter = " << new_letter << endl;
    }
    result = new_letter + 10;
    cout << "\n" << letter << " has changed its value to " << result << endl;
    cout << endl;


    // ---- Game main code ----
    GamePlay g1('P'), g2;  // declaration and assignment
    g2.display();
    g1.play(10);
    g1.upgrade();
    g2.play(20);
    g1.display();
    g2.display();

}

void GamePlay::upgrade()
{
    type = (type == 'A') ? 'P' : 'A';

}

void GamePlay::play(int g)
{
    points = points + g;
    if (points > 50)
        level = 5;
    else if (points > 40)
        level = 4;
    else
        level = 3;
}


