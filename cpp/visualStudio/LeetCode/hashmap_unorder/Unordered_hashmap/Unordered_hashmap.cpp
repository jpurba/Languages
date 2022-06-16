// Unordered_hashmap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <unordered_map>
#include <string>
#include <iostream>

int main()
{
    std::unordered_map<int, std::string> statusMessages{
        {200, "Success"},
        {404, "This is not the page you're lloking for"},
        {403, "Unauthorized"},
        {418, "I'm a teapot"},
    };
    statusMessages.insert({ 503, "Something went wrong" });

    std::cout << statusMessages[418] << "\n";
    std::cout << statusMessages[200] << "\n";

    std::cout << "Hello World!\n";
}

