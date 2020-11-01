CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = films1 films2 films3

all : $(OBJECT)

films3 : films3.c list.c list.h
	$(CC) $(CFLAGS) -o films3 films3.c list.c

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
