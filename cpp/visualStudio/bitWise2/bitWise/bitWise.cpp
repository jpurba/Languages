/*
 ============================================================================
 Name        : bitwise.c
 Author      : Josua Purba
 Version     :
 Copyright   : Your copyright notice
 Description : Bitwise simple example
 ============================================================================
 */
#include <iostream>
#include "bitWise.h"

using namespace std;

int setBit(int input, int position)
{
    int mask = (0x1 << position);
    return input | mask;
}

int setBit1(int input)
{
    return input |= BIT1;
}

int setBit2(int input)
{
    return input |= BIT2;
}

int setBit3(int input)
{
    return input |= BIT3;
}

int clearBit(int input, int position)
{
    int mask = (0x1 << position);
    return input &= ~mask;
}

int clearBit1(int input)
{
    return input &= ~BIT1;
}

int clearBit2(int input)
{
    return input &= ~BIT2;
}

int clearBit3(int input)
{
    return input &= ~BIT3;
}

int flipBit(int input, int position)
{
    int mask = (0x1 << position);
    return input ^ mask;
}