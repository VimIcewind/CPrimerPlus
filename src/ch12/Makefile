CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = hiding forc99 loc_stat

all : $(OBJECT)

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
