#
#  Copyright 2020 Josua Purba
#  All rights reserved
#
#  Linux Makefile
#

CC     = g++
CFLAGS = -I.

# Add any other object files to this list below
OBJS = structPadding.o
HEADERS=

%.o: %.cpp $(HEADERS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
structPadding: $(OBJS)
	g++ -o $@ $^ $(CFLAGS)

clean:
	rm -rf *.o *.a structPadding

