CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = hiding forc99 loc_stat global parta

all : $(OBJECT)

parta : parta.c partb.c
	$(CC) $(CFLAGS) -o parta parta.c partb.c

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
