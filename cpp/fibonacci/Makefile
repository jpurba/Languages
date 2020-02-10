#
#  Copyright 2020 Josua Purba
#  All rights reserved
#
#  Linux Makefile
#

CC     = g++
CFLAGS = -I. 

# Add any other object files to this list below
OBJS = fibonacci.o
HEADERS= fibonacci.h

%.o: %.cpp $(HEADERS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
fibonacci: $(OBJS)
	g++ -o $@ $^ $(CFLAGS)

clean:
	rm -rf *.o *.a fibonacci
