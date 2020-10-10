#include <stdio.h>

long square(int x)
{
	return (long) x * (long) x;
}

int main(void)
{
	int i = 100;

	printf("%ld\n", square(i));

	return 0;
}
