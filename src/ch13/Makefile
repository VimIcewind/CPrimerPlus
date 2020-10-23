CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = count reducto addaword reverse append randbin e1

all : $(OBJECT)

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
