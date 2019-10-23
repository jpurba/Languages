#
#  Copyright 2018 - 2028
#  All rights reserved
#
#  Linux Makefile
#

CC     = gcc
CFLAGS = -I.

# Add any other object files to this list below
OBJS = linkList.o linkListTest.o
HEADERS=linkList.h

%.o: %.c $(HEADERS)
	$(CC) -c -o $@ $< $(CFLAGS)
linkList: $(OBJS)
	gcc -o $@ $^ $(CFLAGS)

clean: 
	rm -rf *.o *.a linkList

