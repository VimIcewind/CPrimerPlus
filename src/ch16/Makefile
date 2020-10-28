CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = preproc mac_arg subst glue variadic useheader ifdef

all : $(OBJECT)

useheader : useheader.c names_st.c names_st.h
	$(CC) $(CFLAGS) -o useheader useheader.c names_st.c names_st.h

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
