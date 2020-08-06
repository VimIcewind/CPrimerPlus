CFLAGS=-g -Og -Wall
CC=gcc

OBJECT = first fathm_ft two_func nogood stillbad weeks_year ab_stat xy_stat print_name print_name_address \
	age2days func br_ic toes smile one_two_three

all : $(OBJECT)

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
