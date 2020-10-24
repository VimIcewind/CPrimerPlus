CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = book manybook friend friends funds1 funds2

all : $(OBJECT)

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
