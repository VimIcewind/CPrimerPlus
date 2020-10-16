CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = day_mon1 no_data some_data day_mon2 designate evens bounds rain \
        pnt_add day_mon3 sum_arr1 sum_arr2 order

all : $(OBJECT)

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
