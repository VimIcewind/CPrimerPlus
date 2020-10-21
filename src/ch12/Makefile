CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = hiding forc99 loc_stat global parta r_drive0 r_drive1

all : $(OBJECT)

parta : parta.c partb.c
	$(CC) $(CFLAGS) -o parta parta.c partb.c
r_drive0 : r_drive0.c rand0.c
	$(CC) $(CFLAGS) -o r_drive0 r_drive0.c rand0.c
r_drive1 : r_drive1.c s_and_r.c
	$(CC) $(CFLAGS) -o r_drive1 r_drive1.c s_and_r.c

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
