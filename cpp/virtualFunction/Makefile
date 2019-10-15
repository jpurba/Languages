#
#  Copyright 2020 Josua Purba
#  All rights reserved
#
#  Linux Makefile
#

CC     = g++
CFLAGS = -I. 

# Add any other object files to this list below
OBJS = virtualFunction.o
HEADERS=

%.o: %.cpp $(HEADERS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
virtualFunction: $(OBJS)
	g++ -o $@ $^ $(CFLAGS)

clean:
	rm -rf *.o *.a virtualFunction
