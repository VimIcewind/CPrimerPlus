CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = echo echo_eof file_eof guess showchar1 showchar2

all : $(OBJECT)

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
