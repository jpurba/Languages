#
#  Copyright 2020 Josua Purba
#  All rights reserved
#
#  Linux Makefile
#

CC     = gcc
CFLAGS = -I.

# Add any other object files to this list below
OBJS = fibonacci.o fibonacciTest.o
HEADERS=fibonacci.h

%.o: %.c $(HEADERS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
fibonacci: $(OBJS)
	gcc -o $@ $^ $(CFLAGS)

clean:
	rm -rf *.o *.a fibonacci

