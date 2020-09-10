CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = talkback praise1 praise2 pizza defines printout pc

all : $(OBJECT)

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
