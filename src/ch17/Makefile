CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = films1 films2 films3 use_q mall petclub

all : $(OBJECT)

films3 : films3.c list.c list.h
	$(CC) $(CFLAGS) -o films3 films3.c list.c

use_q : use_q.c queue.c queue.h
	$(CC) $(CFLAGS) -o use_q use_q.c queue.c

mall : mall.c queue.c queue.h
	$(CC) $(CFLAGS) -o mall mall.c queue.c

petclub : petclub.c tree.c tree.h
	$(CC) $(CFLAGS) -o petclub petclub.c tree.c

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
