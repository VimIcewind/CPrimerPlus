CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = binbit invert4 fields dualview align

all : $(OBJECT)

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
