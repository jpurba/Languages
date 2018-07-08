#ifndef BITWISE_H_
#define BITWISE_H_

#define BIT1 (0x1 << 1)
#define BIT2 (0x1 << 2)
#define BIT3 (0x1 << 3)

int set_bit(int input, unsigned char position);
int set_bit1(int input);
int set_bit2(int input);
int set_bit3(int input);

int clear_bit(int input, unsigned char position);
int clear_bit1(int input);
int clear_bit2(int input);
int clear_bit3(int input);

int flip_bit(int input, unsigned char position);

#endif
