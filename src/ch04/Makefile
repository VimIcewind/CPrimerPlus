CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = talkback praise1 praise2 pizza defines printout pc width floats flags \
	stringf intconv floatcnv prntval longstrg input varwid skip2 booboo \
	book

all : $(OBJECT)

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
