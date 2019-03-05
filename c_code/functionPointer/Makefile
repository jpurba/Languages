#
#  Copyright 2018 - 2028
#  All rights reserved
#
#  Linux Makefile
# 

CC     = gcc
CFLAGS = -I.

# Add any other object files to this list below
OBJS = functionPointer.o functionPointerTest.o
HEADERS=functionPointer.h

%.o: %.c $(HEADERS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
functionPointer: $(OBJS)
	gcc -o $@ $^ $(CFLAGS)

clean: 
	rm -rf *.o *.a functionPointer

