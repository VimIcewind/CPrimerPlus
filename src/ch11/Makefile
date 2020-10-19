CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = strings1 strptr addresses arrchar p_and_s getsputs fgets1 fgets2 \
        fgets3 s_gets.o scan_str put_out nono put_put test_fit str_cat \
        join_chk nogo compback quit_chk starsrch copy1 copy2 copy3 format \
        sort_str mod_str repeat hello

all : $(OBJECT)

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
