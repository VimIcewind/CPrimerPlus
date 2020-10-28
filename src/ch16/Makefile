CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = preproc mac_arg subst glue

all : $(OBJECT)

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
