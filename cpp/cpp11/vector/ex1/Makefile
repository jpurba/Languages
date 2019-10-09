#
#  Copyright 2020 Josua Purba
#  All rights reserved
#
#  Linux Makefile
#

CXX    = g++
CFLAGS = -I. -Wall -std=c++11

# Add any other object files to this list below
OBJS = vector_auto_list_sort.o
HEADERS=

%.o: %.cpp $(HEADERS)
	$(CXX) -c -o $@ $< $(CFLAGS)
vector_auto_list_sort: $(OBJS)
	g++ -o $@ $^ $(CFLAGS)

clean:
	rm -rf *.o *.a vector_auto_list_sort
