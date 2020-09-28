#ifndef BITWISE_H_
#define BITWISE_H_

#define BIT1 (0x1 << 1)
#define BIT2 (0x1 << 2)
#define BIT3 (0x1 << 3)

int setBit(int input, unsigned char position);
int setBit1(int input);
int setBit2(int input);
int setBit3(int input);

int clearBit(int input, unsigned char position);
int clearBit1(int input);
int clearBit2(int input);
int clearBit3(int input);

int flipBit(int input, unsigned char position);

#endif
