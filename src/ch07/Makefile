CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = colddays cypher1 cypher2 electric divisors chcount wordcnt paint \
        skippart break animals vowels weightv e5 e6 e7 retire e9 e10

all : $(OBJECT)

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
