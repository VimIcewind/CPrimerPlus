CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = strings1 strptr addresses arrchar p_and_s getsputs

all : $(OBJECT)

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
