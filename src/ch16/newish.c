#include <stdio.h>

#line 1000
#line 10 "cool.c"

#if __STDC_VERSION__ != 201112L
#error Not C11
#endif

int main(int argc, const char *argv[])
{
	printf("gcc is support C11\n");
	printf("%s %d\n", __FILE__, __LINE__);
	return 0;
}
