CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = shoes1 shoes2 golf squares wheat

all : $(OBJECT)

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
