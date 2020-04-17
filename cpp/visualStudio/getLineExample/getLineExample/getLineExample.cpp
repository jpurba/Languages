// getLineExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <sstream>


void collectWord(void) {
    std::string word;
    std::string allWords = "";

    word = "";
    std::cout << "Enter the next bla bla now:   ";
    std::cin >> word;


    while (word != " ")
    {
        allWords += word + " ";
        std::cout << "The previous bla bla was:  " << word << std::endl;
        std::cout << "Enter the next bla bla now: ";
        std::cin >> word;
    }

    std::cout << "Your phrase..bla bla bla is :  " << allWords << std::endl;
}

int main()
{
    // greet the user
    std::string name;
    std::cout << "What is your name? ";
    std::getline(std::cin, name);
    std::cout << "Hello " << name << ", nice to meet you.\n";

    // read file line by line
    std::istringstream input;
    input.str("1\n2\n3\n4\n5\n6\n7\n");
    int sum = 0;
    for (std::string line; std::getline(input, line); ) {
        sum += std::stoi(line);
    }
    std::cout << "\nThe sum is: " << sum << "\n";

    collectWord();

    return 0;
}
