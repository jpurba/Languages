#
#  Copyright 2018 - 2028
#  All rights reserved
#
#  Linux Makefile
#

CC     = gcc
CFLAGS = -I.

# Add any other object files to this list below
OBJS = binarySearchTree.o binarySearchTreeTest.o
HEADERS=binarySearchTree.h

%.o: %.c $(HEADERS)
	$(CC) -c -o $@ $< $(CFLAGS)
binarySearchTree: $(OBJS)
	gcc -o $@ $^ $(CFLAGS)

clean: 
	rm -rf *.o *.a binarySearchTree

