CFLAGS=-g -Og -Wall -std=c11
CC=gcc

OBJECT = preproc mac_arg subst glue variadic useheader ifdef doubincl predef \
	newish mytype inline rect_pol generic byebye qsorter assert statasrt \
	mems varargs

all : $(OBJECT)

useheader : useheader.c names_st.c names_st.h
	$(CC) $(CFLAGS) -o useheader useheader.c names_st.c names_st.h

doubincl : doubincl.c names.h
	$(CC) $(CFLAGS) -o doubincl doubincl.c names.h
rect_pol : rect_pol.c
	$(CC) $(CFLAGS) -lm -o rect_pol rect_pol.c
generic : generic.c
	$(CC) $(CFLAGS) -lm -o generic generic.c
assert : assert.c
	$(CC) $(CFLAGS) -lm -o assert assert.c

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
