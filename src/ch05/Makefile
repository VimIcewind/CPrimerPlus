CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = shoes1 shoes2 golf squares wheat divide rules sizeof min_sec add_one \
      post_pre bottles addemup convert pound

all : $(OBJECT)

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
