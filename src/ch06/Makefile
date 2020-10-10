CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = summing when while1 while2 cmpflt t_and_f truth trouble boolean \
        sweetie1 sweetie2 for_cube for_down for_13s for_char for_geo for_wild \
        for_nono for_show postage zeno do_while entry rows1 rows2 scores_in \
        power for2 for2double forfor dollor hibye acgm c8a c8b c8c c8d e9

all : $(OBJECT)

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
