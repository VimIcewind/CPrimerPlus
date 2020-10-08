CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = summing when while1 while2 cmpflt t_and_f truth trouble boolean \
        sweetie1 sweetie2

all : $(OBJECT)

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
