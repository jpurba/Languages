/*
 ============================================================================
 Name        : bitwise.h
 Author      : Josua Purba
 Version     :
 Copyright   : Your copyright notice
 Description : Bitwise simple example header file
 ============================================================================
 */
#ifndef BITWISE_H_
#define BITWISE_H_

#define BIT1 (0x1 << 1)
#define BIT2 (0x1 << 2)
#define BIT3 (0x1 << 3)

int setBit(int input, int position);
int setBit1(int input);
int setBit2(int input);
int setBit3(int input);

int clearBit(int input, int position);
int clearBit1(int input);
int clearBit2(int input);
int clearBit3(int input);

int flipBit(int input, int position);

#endif // BITWISE_H_
