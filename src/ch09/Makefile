CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = lethead1 lethead2 lesser misuse proto recur factor binary usehotel \
        loccheck swap1 swap2 swap3 sum sumdouble alter salami

all : $(OBJECT)

usehotel : usehotel.c hotel.c hotel.h
	$(CC) $(CFLAGS) -o usehotel usehotel.c hotel.c

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
