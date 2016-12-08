/*
 ============================================================================
 Name        : bitwise.c
 Author      : Josua Purba
 Version     :
 Copyright   : Your copyright notice
 Description : Bitwise simple example
 ============================================================================
 */

#include "bitWise.h"

int set_bit2(int input){
    
    return input|=BIT2;
}

int clear_bit2(int input){
    
    return input&=~BIT2;
}

int set_bit3(int input){
    
    return input|=BIT3;
}

int clear_bit3(int input){
    
    return input&=~BIT3;
}

