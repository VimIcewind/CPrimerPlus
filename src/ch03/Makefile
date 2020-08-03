CFLAGS=-g -Og -Wall
CC=gcc

OBJECT = platinum

all : $(OBJECT)

.c.s :
	$(CC) $(CFLAGS) -S $*.cpp
.c.o :
	$(CC) $(CFLAGS) -c $*.cpp

clean :
	rm -rf $(OBJECT) *.S *.s *.o
