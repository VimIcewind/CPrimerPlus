CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = book manybook friend friends funds1 funds2 funds3 names1 names2 names3 \
	 complit flexmemb funds4 booksave enum func_ptr house month bigeye bem \
	 bard mpgs choices pfa

all : $(OBJECT)

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
