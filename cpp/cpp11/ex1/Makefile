#
#  Copyright 2020 Josua Purba
#  All rights reserved
#
#  Linux Makefile
#

CXX    = g++
CFLAGS = -I. -Wall -std=c++11

# Add any other object files to this list below
OBJS = ex1.o
HEADERS=

%.o: %.cpp $(HEADERS)
	$(CXX) -c -o $@ $< $(CFLAGS)
ex1: $(OBJS)
	g++ -o $@ $^ $(CFLAGS)

clean:
	rm -rf *.o *.a ex1
