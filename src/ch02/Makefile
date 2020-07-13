CFLAGS=-g -Og -Wall
CC=gcc

OBJECT = first fathm_ft two_func nogood stillbad weeks_year

all : $(OBJECT)

.c.s :
	$(CC) $(CFLAGS) -S $*.cpp
.c.o :
	$(CC) $(CFLAGS) -c $*.cpp

clean :
	rm -rf $(OBJECT) *.S *.s *.o
