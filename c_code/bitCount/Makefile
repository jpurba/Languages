#
#  Copyright 2020 Josua Purba
#  All rights reserved
#
#  Linux Makefile
#

CC     = gcc
CFLAGS = -I.

# Add any other object files to this list below
OBJS = bitCount.o bitCountTest.o
HEADERS=bitCount.h

%.o: %.c $(HEADERS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
bitCount: $(OBJS)
	gcc -o $@ $^ $(CFLAGS)

clean:
	rm -rf *.o *.a bitCount

