CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = platinum print1 bases toobig print2 charcode bool altnames showf_pt floaterr

all : $(OBJECT)

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
