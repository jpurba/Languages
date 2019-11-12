#
#  Copyright 2018 - 2028
#  All rights reserved
#
#  Linux Makefile
#

CC     = gcc
CFLAGS = -I.

# Add any other object files to this list below
OBJS = fileEx.o 
HEADERS=

%.o: %.c $(HEADERS)
	$(CC) -c -o $@ $< $(CFLAGS)
fileEx: $(OBJS)
	gcc -o $@ $^ $(CFLAGS)

clean: 
	rm -rf *.o *.a fileEx

