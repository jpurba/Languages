#
#  Copyright 2016 Aimlock
#  All rights reserved
#
#  Linux Makefile
#

CC     = gcc
CFLAGS = -I.

# Add any other object files to this list below
OBJS = bitWise.o bitWiseTest.o
HEADERS=bitWise.h

%.o: %.c $(HEADERS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
bitWise: $(OBJS)
	gcc -o $@ $^ $(CFLAGS)

clean:
	rm -rf *.o *.a bitWise

